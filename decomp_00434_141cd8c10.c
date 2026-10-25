// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141cd8c10 ~FRenderingCompositePassContext body=50 status=ok
// SIG undefined ~FRenderingCompositePassContext(void)

void FRenderingCompositePassContext::~FRenderingCompositePassContext(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  FUN_141ce3e30(plVar1);
  FUN_141ce3e30(plVar1);
  if (*plVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141cd8c50 FUN_141cd8c50 body=1831 status=ok
// SIG undefined FUN_141cd8c50(void)

void FUN_141cd8c50(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_144e34398;
  if (param_1[0x85] != 0) {
    FUN_141ace450();
    lVar2 = param_1[0x85];
    if (lVar2 != 0) {
      FUN_141ace450(lVar2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2);
      FMemory::operator_delete(lVar2,0x28);
    }
    param_1[0x85] = 0;
  }
  if (param_1[0x86] != 0) {
    FUN_141ace450();
    lVar2 = param_1[0x86];
    if (lVar2 != 0) {
      FUN_141ace450(lVar2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2);
      FMemory::operator_delete(lVar2,0x28);
    }
    param_1[0x86] = 0;
  }
  if (param_1[0x87] != 0) {
    FUN_141ace450();
    lVar2 = param_1[0x87];
    if (lVar2 != 0) {
      FUN_141ace450(lVar2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2);
      FMemory::operator_delete(lVar2,0x28);
    }
    param_1[0x87] = 0;
  }
  if ((longlong *)param_1[0x84] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x84] + 0x30))();
  }
  if (param_1[0x81] != 0) {
    FMemory::Free();
  }
  FUN_141a82840(param_1 + 0x68);
  if ((longlong *)param_1[0x67] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x67] + 0x30))();
  }
  FUN_141a82840(param_1 + 0x65);
  if ((longlong *)param_1[100] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[100] + 0x30))();
  }
  FUN_141a82840(param_1 + 0x62);
  if ((longlong *)param_1[0x61] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x61] + 0x30))();
  }
  if ((longlong *)param_1[0x60] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x60] + 0x30))();
  }
  if ((longlong *)param_1[0x5f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5f] + 0x30))();
  }
  if ((longlong *)param_1[0x5e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5e] + 0x30))();
  }
  if ((longlong *)param_1[0x5d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5d] + 0x30))();
  }
  if ((longlong *)param_1[0x5c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5c] + 0x30))();
  }
  if ((longlong *)param_1[0x5a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5a] + 0x30))();
  }
  if ((longlong *)param_1[0x59] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x59] + 0x30))();
  }
  if ((longlong *)param_1[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x58] + 0x30))();
  }
  if ((longlong *)param_1[0x57] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x57] + 0x30))();
  }
  if ((longlong *)param_1[0x56] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x56] + 0x30))();
  }
  if ((longlong *)param_1[0x55] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x55] + 0x30))();
  }
  if ((longlong *)param_1[0x54] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x54] + 0x30))();
  }
  if ((longlong *)param_1[0x53] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x53] + 0x30))();
  }
  if ((longlong *)param_1[0x52] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x52] + 0x30))();
  }
  if ((longlong *)param_1[0x51] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x51] + 0x30))();
  }
  if ((longlong *)param_1[0x50] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x50] + 0x30))();
  }
  if ((longlong *)param_1[0x4f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4f] + 0x30))();
  }
  if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4e] + 0x30))();
  }
  if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4d] + 0x30))();
  }
  if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4c] + 0x30))();
  }
  if ((longlong *)param_1[0x4b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4b] + 0x30))();
  }
  if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4a] + 0x30))();
  }
  if ((longlong *)param_1[0x49] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x49] + 0x30))();
  }
  if ((longlong *)param_1[0x48] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x48] + 0x30))();
  }
  if ((longlong *)param_1[0x47] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x47] + 0x30))();
  }
  if ((longlong *)param_1[0x46] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x46] + 0x30))();
  }
  if ((longlong *)param_1[0x45] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x45] + 0x30))();
  }
  if ((longlong *)param_1[0x44] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x44] + 0x30))();
  }
  if ((longlong *)param_1[0x43] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x43] + 0x30))();
  }
  if ((longlong *)param_1[0x42] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x42] + 0x30))();
  }
  if ((longlong *)param_1[0x41] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x41] + 0x30))();
  }
  if ((longlong *)param_1[0x40] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x40] + 0x30))();
  }
  if ((longlong *)param_1[0x3f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3f] + 0x30))();
  }
  if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3e] + 0x30))();
  }
  TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::
  ~TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>(param_1 + 0x39);
  TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::
  ~TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>(param_1 + 0x34);
  plVar5 = param_1 + 0x33;
  if ((longlong *)*plVar5 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar5 + 0x30))();
  }
  lVar3 = 2;
  lVar2 = 2;
  do {
    plVar1 = plVar5 + -1;
    plVar5 = plVar5 + -1;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar2 != 0);
  plVar5 = param_1 + 0x30;
  if ((longlong *)*plVar5 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar5 + 0x30))();
  }
  do {
    plVar1 = plVar5 + -1;
    plVar5 = plVar5 + -1;
    lVar3 = lVar3 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar3 != 0);
  lVar2 = 4;
  puVar4 = param_1 + 0x2e;
  do {
    plVar5 = puVar4 + -1;
    puVar4 = puVar4 + -1;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 0x30))();
    }
  } while (lVar2 != 0);
  if ((longlong *)param_1[0x29] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x29] + 0x30))();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  if ((longlong *)param_1[0x27] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x27] + 0x30))();
  }
  if ((longlong *)param_1[0x26] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x26] + 0x30))();
  }
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25] + 0x30))();
  }
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x24] + 0x30))();
  }
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x30))();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x30))();
  }
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21] + 0x30))();
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0x30))();
  }
  if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1f] + 0x30))();
  }
  if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1e] + 0x30))();
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x30))();
  }
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x30))();
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x30))();
  }
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x30))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x30))();
  }
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x30))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x30))();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x30))();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x30))();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x30))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x30))();
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x30))();
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x30))();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x30))();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x30))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x30))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x30))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x30))();
  }
  puVar4 = param_1 + 9;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x30))();
  }
  lVar2 = 3;
  do {
    plVar5 = puVar4 + -1;
    puVar4 = puVar4 + -1;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 0x30))();
    }
  } while (lVar2 != 0);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141cd9380 operator<< body=216 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0xf4);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0xf8);
  uVar1 = FUN_1419e0a40(uVar1,param_2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xe8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xee);
  FUN_1419e0a40(uVar1,param_2 + 6);
  lVar3 = param_2 + 0xa6;
  lVar2 = 0xb;
  param_2 = param_2 + 0x38;
  do {
    FUN_1419e0b60(param_1,param_2 + -0x2c);
    FUN_1419e0b60(param_1,param_2);
    FUN_1419e0a40(param_1,lVar3 + -0x42);
    FUN_1419e0a40(param_1,lVar3);
    param_2 = param_2 + 4;
    lVar3 = lVar3 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 141cd9460 operator== body=85 status=ok
// SIG undefined operator==(void)

ulonglong FClearValueBinding::operator==(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == *param_2) {
    if (uVar1 == 1) {
      if ((((float)param_2[1] != (float)param_1[1]) || ((float)param_2[2] != (float)param_1[2])) ||
         ((float)param_2[3] != (float)param_1[3])) goto LAB_141cd94b2;
      bVar3 = (float)param_2[4] == (float)param_1[4];
    }
    else {
      if (uVar1 != 2) goto LAB_141cd94af;
      if ((float)param_2[1] != (float)param_1[1]) goto LAB_141cd94b2;
      uVar2 = (ulonglong)param_2[2];
      bVar3 = param_1[2] == param_2[2];
    }
    if (bVar3) {
LAB_141cd94af:
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
LAB_141cd94b2:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141cd94c0 `scalar_deleting_destructor' body=150 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FPooledRenderTarget::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e34798;
  FSceneRenderTargetItem::SafeRelease(param_1 + 1);
  *param_1 = &PTR__scalar_deleting_destructor__144e34748;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  FUN_141a82840(param_1 + 7);
  FUN_141a82770(param_1 + 4);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 2);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141cd9560 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessUpscale::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca030;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141cd95e0 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessWeightedSampleSum::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1d);
  *param_1 = &PTR__scalar_deleting_destructor__144dca030;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141cd9670 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FRenderTargetPool::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FRenderTargetPool();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 141cd96b0 `scalar_deleting_destructor' body=131 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
IPooledRenderTarget::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e34748;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  FUN_141a82840(param_1 + 7);
  FUN_141a82770(param_1 + 4);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 2);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141cd9740 FUN_141cd9740 body=24 status=ok
// SIG undefined FUN_141cd9740(void)

int FUN_141cd9740(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    iVar1 = *(int *)(param_1 + 0x60) + 1;
    *(int *)(param_1 + 0x60) = iVar1;
    return iVar1;
  }
  return 1;
}



// FUNCTION 141cd9760 FUN_141cd9760 body=32 status=ok
// SIG undefined FUN_141cd9760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cd9760(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_e8 [32];
  wchar_t *pwStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  wchar_t *pwStack_58;
  undefined2 uStack_50;
  ulonglong uStack_48;
  
  if ((0 < param_3) && (*(int *)(param_1 + 0x350) == 0)) {
    uStack_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      uVar6 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x3c8)];
      if (((DAT_146ac3ac0 == 0) || (iVar5 = FUN_1419ef5f0(uVar6), iVar5 < 3)) &&
         (cVar4 = FUN_141ee4480(uVar6), cVar4 == '\0')) {
        iVar5 = *(int *)(param_1 + 0x39c);
        uVar6 = 0x12;
        if (4 < iVar5) {
          uVar6 = 10;
        }
        uVar7 = 2;
        uStack_6c = uVar7;
        if ((iVar5 != 0) && (uStack_6c = uVar6, iVar5 == 3)) {
          uStack_6c = 10;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x378);
        uStack_84 = (undefined4)uVar2;
        uStack_a8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_80 = uStack_a8._4_4_;
        pwStack_58 = L"UnknownTexture2D";
        uStack_68 = DAT_146a9da00;
        uStack_88 = DAT_1464c9cc8;
        uStack_b8 = 1;
        uStack_c0 = 1;
        pwStack_c8 = L"GBufferA";
        uStack_98 = _DAT_1464c9cb8;
        uStack_94 = uRam00000001464c9cbc;
        uStack_90 = uRam00000001464c9cc0;
        uStack_8c = DAT_1464c9cc4;
        uStack_7c = 0;
        uStack_78 = 1;
        uStack_74 = 0x10000;
        uStack_70 = 1;
        uStack_64 = 1;
        uStack_60 = 0;
        uStack_50 = 1;
        uStack_a8 = uVar2;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&uStack_98,param_1 + 0xb8);
        uVar2 = *(undefined8 *)(param_1 + 0x378);
        uStack_84 = (undefined4)uVar2;
        uStack_a8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_80 = uStack_a8._4_4_;
        uStack_7c = 0;
        uVar6 = uVar7;
        if (4 < iVar5) {
          uVar6 = 10;
        }
        uStack_88 = DAT_1464c9cc8;
        uStack_68 = DAT_146a9da04;
        uStack_b8 = 1;
        uStack_c0 = 1;
        pwStack_c8 = L"GBufferB";
        uStack_98 = _DAT_1464c9cb8;
        uStack_94 = uRam00000001464c9cbc;
        uStack_90 = uRam00000001464c9cc0;
        uStack_8c = DAT_1464c9cc4;
        uStack_78 = 1;
        uStack_74 = 0x10000;
        uStack_70 = 1;
        uStack_64 = 1;
        uStack_60 = 0;
        pwStack_58 = L"UnknownTexture2D";
        uStack_50 = 1;
        uStack_a8 = uVar2;
        uStack_6c = uVar6;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&uStack_98,param_1 + 0xc0);
        uVar2 = *(undefined8 *)(param_1 + 0x378);
        uStack_84 = (undefined4)uVar2;
        uStack_a8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_98 = _DAT_1464c9cb8;
        uStack_94 = uRam00000001464c9cbc;
        uStack_90 = uRam00000001464c9cc0;
        uStack_8c = DAT_1464c9cc4;
        uStack_80 = uStack_a8._4_4_;
        uStack_88 = DAT_1464c9cc8;
        uStack_7c = 0;
        uStack_78 = 1;
        uStack_74 = 0x10000;
        uStack_70 = 1;
        uStack_64 = 1;
        uStack_68 = DAT_146a9da08 | 0x10;
        uStack_b8 = 1;
        uStack_c0 = 1;
        pwStack_c8 = L"GBufferC";
        uStack_60 = 0;
        pwStack_58 = L"UnknownTexture2D";
        uStack_50 = 1;
        uStack_a8 = uVar2;
        uStack_6c = uVar6;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&uStack_98,param_1 + 200);
        uVar2 = *(undefined8 *)(param_1 + 0x378);
        uStack_84 = (undefined4)uVar2;
        uStack_a8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_80 = uStack_a8._4_4_;
        uStack_68 = DAT_146a9da0c;
        uStack_88 = DAT_1464c9cc8;
        uStack_b8 = 1;
        uStack_c0 = 1;
        pwStack_c8 = L"GBufferD";
        uStack_98 = _DAT_1464c9cb8;
        uStack_94 = uRam00000001464c9cbc;
        uStack_90 = uRam00000001464c9cc0;
        uStack_8c = DAT_1464c9cc4;
        uStack_7c = 0;
        uStack_78 = 1;
        uStack_74 = 0x10000;
        uStack_70 = 1;
        uStack_6c = 2;
        uStack_64 = 1;
        uStack_60 = 0;
        pwStack_58 = L"UnknownTexture2D";
        uStack_50 = 1;
        uStack_a8 = uVar2;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&uStack_98,param_1 + 0xd0);
        if (*(char *)(param_1 + 0x3a8) != '\0') {
          uVar2 = *(undefined8 *)(param_1 + 0x378);
          uStack_84 = (undefined4)uVar2;
          uStack_a8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_80 = uStack_a8._4_4_;
          uStack_6c = uVar7;
          if (DAT_146ab62f6 != '\0') {
            uStack_6c = 0x40;
          }
          uStack_88 = DAT_1464c9cc8;
          uStack_68 = DAT_146a9da10;
          uStack_b8 = 1;
          uStack_c0 = 1;
          pwStack_c8 = L"GBufferE";
          uStack_98 = _DAT_1464c9cb8;
          uStack_94 = uRam00000001464c9cbc;
          uStack_90 = uRam00000001464c9cc0;
          uStack_8c = DAT_1464c9cc4;
          uStack_7c = 0;
          uStack_78 = 1;
          uStack_74 = 0x10000;
          uStack_70 = 1;
          uStack_64 = 1;
          uStack_60 = 0;
          pwStack_58 = L"UnknownTexture2D";
          uStack_50 = 1;
          uStack_a8 = uVar2;
          FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&uStack_98,param_1 + 0xd8);
        }
        if (*(char *)(param_1 + 0x3d2) != '\0') {
          FUN_141e00c60(&uStack_98);
          uStack_68 = uStack_68 | DAT_146a9da14;
          uStack_b8 = 1;
          uStack_c0 = 1;
          pwStack_c8 = L"GBufferVelocity";
          FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&uStack_98,param_1 + 0xe0);
        }
      }
      else {
        FUN_141ee4480(uVar6);
      }
      *(undefined4 *)(param_1 + 0x350) = 1;
    }
    return;
  }
  piVar1 = (int *)(param_1 + 0x350);
  *piVar1 = *piVar1 + param_3;
  if (*piVar1 == 0) {
    plVar3 = *(longlong **)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    plVar3 = *(longlong **)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    plVar3 = *(longlong **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    plVar3 = *(longlong **)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    plVar3 = *(longlong **)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    plVar3 = *(longlong **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    plVar3 = *(longlong **)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    return;
  }
  return;
}



// FUNCTION 141cd9780 FUN_141cd9780 body=1074 status=ok
// SIG undefined FUN_141cd9780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cd9780(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar4 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x3c8)];
    if (((DAT_146ac3ac0 == 0) || (iVar3 = FUN_1419ef5f0(uVar4), iVar3 < 3)) &&
       (cVar2 = FUN_141ee4480(uVar4), cVar2 == '\0')) {
      iVar3 = *(int *)(param_1 + 0x39c);
      uVar4 = 0x12;
      if (4 < iVar3) {
        uVar4 = 10;
      }
      uVar5 = 2;
      local_6c = uVar5;
      if ((iVar3 != 0) && (local_6c = uVar4, iVar3 == 3)) {
        local_6c = 10;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x378);
      local_84 = (undefined4)uVar1;
      local_a8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_80 = local_a8._4_4_;
      local_58 = L"UnknownTexture2D";
      local_68 = DAT_146a9da00;
      local_88 = DAT_1464c9cc8;
      local_b8 = 1;
      local_c0 = 1;
      local_c8 = L"GBufferA";
      local_98 = _DAT_1464c9cb8;
      uStack_94 = uRam00000001464c9cbc;
      uStack_90 = uRam00000001464c9cc0;
      uStack_8c = DAT_1464c9cc4;
      local_7c = 0;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_64 = 1;
      local_60 = 0;
      local_50 = 1;
      local_a8 = uVar1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0xb8);
      uVar1 = *(undefined8 *)(param_1 + 0x378);
      local_84 = (undefined4)uVar1;
      local_a8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_80 = local_a8._4_4_;
      local_7c = 0;
      uVar4 = uVar5;
      if (4 < iVar3) {
        uVar4 = 10;
      }
      local_88 = DAT_1464c9cc8;
      local_68 = DAT_146a9da04;
      local_b8 = 1;
      local_c0 = 1;
      local_c8 = L"GBufferB";
      local_98 = _DAT_1464c9cb8;
      uStack_94 = uRam00000001464c9cbc;
      uStack_90 = uRam00000001464c9cc0;
      uStack_8c = DAT_1464c9cc4;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_64 = 1;
      local_60 = 0;
      local_58 = L"UnknownTexture2D";
      local_50 = 1;
      local_a8 = uVar1;
      local_6c = uVar4;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0xc0);
      uVar1 = *(undefined8 *)(param_1 + 0x378);
      local_84 = (undefined4)uVar1;
      local_a8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_98 = _DAT_1464c9cb8;
      uStack_94 = uRam00000001464c9cbc;
      uStack_90 = uRam00000001464c9cc0;
      uStack_8c = DAT_1464c9cc4;
      local_80 = local_a8._4_4_;
      local_88 = DAT_1464c9cc8;
      local_7c = 0;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_64 = 1;
      local_68 = DAT_146a9da08 | 0x10;
      local_b8 = 1;
      local_c0 = 1;
      local_c8 = L"GBufferC";
      local_60 = 0;
      local_58 = L"UnknownTexture2D";
      local_50 = 1;
      local_a8 = uVar1;
      local_6c = uVar4;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 200);
      uVar1 = *(undefined8 *)(param_1 + 0x378);
      local_84 = (undefined4)uVar1;
      local_a8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_80 = local_a8._4_4_;
      local_68 = DAT_146a9da0c;
      local_88 = DAT_1464c9cc8;
      local_b8 = 1;
      local_c0 = 1;
      local_c8 = L"GBufferD";
      local_98 = _DAT_1464c9cb8;
      uStack_94 = uRam00000001464c9cbc;
      uStack_90 = uRam00000001464c9cc0;
      uStack_8c = DAT_1464c9cc4;
      local_7c = 0;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_6c = 2;
      local_64 = 1;
      local_60 = 0;
      local_58 = L"UnknownTexture2D";
      local_50 = 1;
      local_a8 = uVar1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0xd0);
      if (*(char *)(param_1 + 0x3a8) != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x378);
        local_84 = (undefined4)uVar1;
        local_a8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
        local_80 = local_a8._4_4_;
        local_6c = uVar5;
        if (DAT_146ab62f6 != '\0') {
          local_6c = 0x40;
        }
        local_88 = DAT_1464c9cc8;
        local_68 = DAT_146a9da10;
        local_b8 = 1;
        local_c0 = 1;
        local_c8 = L"GBufferE";
        local_98 = _DAT_1464c9cb8;
        uStack_94 = uRam00000001464c9cbc;
        uStack_90 = uRam00000001464c9cc0;
        uStack_8c = DAT_1464c9cc4;
        local_7c = 0;
        local_78 = 1;
        local_74 = 0x10000;
        local_70 = 1;
        local_64 = 1;
        local_60 = 0;
        local_58 = L"UnknownTexture2D";
        local_50 = 1;
        local_a8 = uVar1;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0xd8);
      }
      if (*(char *)(param_1 + 0x3d2) != '\0') {
        FUN_141e00c60(&local_98);
        local_68 = local_68 | DAT_146a9da14;
        local_b8 = 1;
        local_c0 = 1;
        local_c8 = L"GBufferVelocity";
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0xe0);
      }
    }
    else {
      FUN_141ee4480(uVar4);
    }
    *(undefined4 *)(param_1 + 0x350) = 1;
  }
  return;
}



// FUNCTION 141cd9bc0 FUN_141cd9bc0 body=288 status=ok
// SIG undefined FUN_141cd9bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cd9bc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x48) == 0) || (DAT_146a9dad4 != '\0')) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_54 = (undefined4)uVar1;
    local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_50 = local_78._4_4_;
    local_48 = 1;
    local_34 = 1;
    local_58 = DAT_1464c9cb0;
    local_28 = L"UnknownTexture2D";
    local_68 = _DAT_1464c9ca0;
    uStack_64 = uRam00000001464c9ca4;
    uStack_60 = uRam00000001464c9ca8;
    uStack_5c = uRam00000001464c9cac;
    local_4c = 0;
    local_44 = 0x10000;
    local_3c = 2;
    local_30 = 0;
    local_20 = 1;
    local_78 = uVar1;
    local_40 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
    local_38 = DAT_146a9da88;
    local_88 = 1;
    local_90 = 1;
    local_98 = L"LightAttenuation";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68,param_1 + 0x48);
  }
  return;
}



// FUNCTION 141cd9ce0 FUN_141cd9ce0 body=514 status=ok
// SIG undefined FUN_141cd9ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141cd9ce0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined8 local_98;
  wchar_t *pwStack_90;
  float local_88;
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
  short local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  wchar_t *local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar5 = (longlong *)FUN_141ce54f0();
  plVar6 = (longlong *)*plVar5;
  uVar7 = local_98;
  if ((plVar6 == (longlong *)0x0) || (lVar3 = plVar6[1], *(int *)(lVar3 + 0x20) == 0))
  goto LAB_141cd9db1;
  iVar4 = *(int *)(lVar3 + 0x20);
  uVar7 = *(undefined8 *)(lVar3 + 0x20);
  pwStack_90 = *(wchar_t **)(lVar3 + 0x28);
  local_88 = *(float *)(lVar3 + 0x30);
  if (iVar4 == *(int *)(param_1 + 0x3d8)) {
    local_98._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
    if (iVar4 == 1) {
      if ((local_98._4_4_ == *(float *)(param_1 + 0x3dc)) &&
         (((pwStack_90._0_4_ == *(float *)(param_1 + 0x3e0) &&
           (*(float *)(lVar3 + 0x2c) == *(float *)(param_1 + 0x3e4))) &&
          (local_88 == *(float *)(param_1 + 1000))))) goto LAB_141cd9db1;
    }
    else if ((iVar4 != 2) ||
            ((local_98._4_4_ == *(float *)(param_1 + 0x3dc) &&
             (pwStack_90._0_4_ == *(float *)(param_1 + 0x3e0))))) goto LAB_141cd9db1;
  }
  *plVar5 = 0;
  if (plVar6 != (longlong *)0x0) {
    local_98 = (wchar_t *)uVar7;
    (**(code **)(*plVar6 + 0x30))();
    uVar7 = local_98;
  }
LAB_141cd9db1:
  local_98 = (wchar_t *)uVar7;
  plVar6 = (longlong *)FUN_141ce54f0(param_1);
  if (*plVar6 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x378);
    local_78 = *(undefined4 *)(param_1 + 0x3d8);
    uStack_74 = *(undefined4 *)(param_1 + 0x3dc);
    uStack_70 = *(undefined4 *)(param_1 + 0x3e0);
    uStack_6c = *(undefined4 *)(param_1 + 0x3e4);
    local_68 = *(undefined4 *)(param_1 + 1000);
    local_64 = (undefined4)uVar7;
    local_98._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
    local_5c = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x3c8);
    local_60 = local_98._4_4_;
    local_58 = 1;
    local_54 = 0x10000;
    local_98 = (wchar_t *)uVar7;
    local_4c = FUN_141ce5560(param_1,uVar1);
    local_44 = 1;
    local_38 = L"UnknownTexture2D";
    local_48 = DAT_146a9da20;
    local_40 = 0;
    local_30 = 1;
    local_50 = FUN_141ce5010(uVar1);
    if ((2 < *(int *)(param_1 + 0x3c8)) && (local_50 == 1)) {
      local_44 = 1;
      if (DAT_146a61378 != 0) {
        local_44 = 0x10001;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x3cc);
    local_98 = L"SceneColorMobile";
    pwStack_90 = L"SceneColorDeferred";
    uVar7 = FUN_141ce54f0(param_1);
    local_a8 = 1;
    local_b8 = (&local_98)[uVar2];
    local_b0 = 1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_78,uVar7);
    FUN_141cda3c0(param_1,param_2);
  }
  return;
}



// FUNCTION 141cd9ef0 FUN_141cd9ef0 body=1224 status=ok
// SIG undefined FUN_141cd9ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cd9ef0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar12 = 0;
  plVar2 = (longlong *)(param_1 + 0x13b8);
  lVar7 = *plVar2;
  local_a0 = param_2;
  if (lVar7 == 0) {
    local_88 = DAT_1464c9cc8;
    local_72 = 8;
    local_58 = L"UnknownTextureCube";
    local_84 = 0x80;
    local_80 = 0x80;
    local_c8 = 1;
    local_d0 = 1;
    local_d8 = L"SkyEnvironmentCubemap0";
    local_50 = 1;
    local_98 = _DAT_1464c9cb8;
    uStack_94 = uRam00000001464c9cbc;
    uStack_90 = uRam00000001464c9cc0;
    uStack_8c = DAT_1464c9cc4;
    local_7c = 0;
    local_78 = 1;
    local_74 = 0x100;
    local_70 = 1;
    local_6c = 10;
    local_68 = 0x800000;
    local_64 = 0x10009;
    local_60 = 0;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,plVar2);
    lVar7 = *plVar2;
  }
  if (*(int *)(lVar7 + 0x40) != 8) {
    TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::SetNum(lVar7 + 0x38,8,1);
    uVar11 = 0;
    do {
      local_d8 = (wchar_t *)CONCAT71(local_d8._1_7_,(char)uVar11);
      (**(code **)(*DAT_146ab6358 + 0x638))
                (DAT_146ab6358,&local_b0,&DAT_146ab6e78,*(undefined8 *)(*plVar2 + 0x10));
      ppuVar9 = (undefined8 **)(*(longlong *)(*plVar2 + 0x38) + (ulonglong)uVar11 * 8);
      if (ppuVar9 == &local_b0) {
LAB_141cda0e6:
        puVar10 = local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_b0 + 1);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(local_b0 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar14 = *(int *)((longlong)puVar10 + 0xc) == 0;
              if (bVar14) {
                *(int *)((longlong)puVar10 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar14) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                uVar6 = uVar12;
                if (uVar5 != 0) {
                  uVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(uVar6 + 8) = puVar10;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar10)(puVar10,1);
            }
          }
        }
      }
      else {
        puVar10 = *ppuVar9;
        *ppuVar9 = local_b0;
        local_b0 = (undefined8 *)0x0;
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar10 + 1);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(puVar10 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar14 = *(int *)((longlong)puVar10 + 0xc) == 0;
              if (bVar14) {
                *(int *)((longlong)puVar10 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar14) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                uVar6 = uVar12;
                if (uVar5 != 0) {
                  uVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(uVar6 + 8) = puVar10;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar10)(puVar10,1);
            }
          }
          goto LAB_141cda0e6;
        }
      }
      uVar11 = uVar11 + 1;
      param_2 = local_a0;
    } while (uVar11 < 8);
  }
  if (*(int *)(param_1 + 0x13c8) != 8) {
    plVar13 = (longlong *)(param_1 + 0x13c0);
    iVar3 = *(int *)(param_1 + 0x13c8);
    uVar6 = uVar12;
    if (iVar3 < 8) {
      *(undefined4 *)(param_1 + 0x13c8) = 8;
      if (*(int *)(param_1 + 0x13cc) < 8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar13,iVar3);
      }
      if (8U - iVar3 != 0) {
        puVar10 = (undefined8 *)(*plVar13 + (longlong)iVar3 * 8);
        for (uVar8 = (ulonglong)(8U - iVar3); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
    }
    else if (8 < iVar3) {
      TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
                (plVar13,8,iVar3 + -8,1);
    }
    do {
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,(int)uVar12);
      (**(code **)(*DAT_146ab6358 + 0x610))
                (DAT_146ab6358,&local_a8,&DAT_146ab6e78,*(undefined8 *)(*plVar2 + 8));
      ppuVar9 = (undefined8 **)(*plVar13 + uVar6);
      if (ppuVar9 == &local_a8) {
LAB_141cda2d1:
        puVar10 = local_a8;
        if (local_a8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_a8 + 1);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(local_a8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar14 = *(int *)((longlong)puVar10 + 0xc) == 0;
              if (bVar14) {
                *(int *)((longlong)puVar10 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar14) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar7 + 8) = puVar10;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar10)(puVar10,1);
            }
          }
        }
      }
      else {
        puVar10 = *ppuVar9;
        *ppuVar9 = local_a8;
        local_a8 = (undefined8 *)0x0;
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar10 + 1);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(puVar10 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar14 = *(int *)((longlong)puVar10 + 0xc) == 0;
              if (bVar14) {
                *(int *)((longlong)puVar10 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar14) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar7 + 8) = puVar10;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar10)(puVar10,1);
            }
          }
          goto LAB_141cda2d1;
        }
      }
      uVar5 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar5;
      uVar6 = uVar6 + 8;
      param_2 = local_a0;
    } while ((int)uVar5 < 8);
  }
  puVar10 = &DAT_146a61f30;
  if (*(undefined8 **)(param_2 + 0x90) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x90);
  }
  FUN_141cda3c0(puVar10,param_2);
  return;
}



// FUNCTION 141cda3c0 FUN_141cda3c0 body=416 status=ok
// SIG undefined FUN_141cda3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cda3c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar3 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x420) == 0) {
    local_58 = DAT_1464c9d28;
    local_54 = 0x80;
    local_50 = 0x80;
    local_68 = _DAT_1464c9d18;
    uStack_64 = uRam00000001464c9d1c;
    uStack_60 = uRam00000001464c9d20;
    uStack_5c = uRam00000001464c9d24;
    local_4c = 0;
    local_48 = 1;
    local_44 = 0x10000;
    local_40 = 1;
    local_3c = 0xc;
    local_34 = 0xc;
    local_30 = 0;
    local_28 = L"UnknownTexture2D";
    local_78 = CONCAT71(local_78._1_7_,1);
    local_80 = CONCAT71(local_80._1_7_,1);
    local_88 = L"SkyEnvironmentDepthBuffer";
    local_20 = 1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68);
  }
  if (*(longlong *)(param_1 + 0x428) == 0) {
    puVar1 = (undefined8 *)operator_new(0x28);
    puVar2 = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar2 = puVar1;
    }
    local_78 = 0;
    local_80 = 0;
    *(undefined8 **)(param_1 + 0x428) = puVar2;
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,1);
    FUN_141ac25e0(puVar2,4,0x1b00,0x1c);
  }
  if (*(longlong *)(param_1 + 0x430) == 0) {
    puVar2 = (undefined8 *)operator_new(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar2[4] = 0;
      puVar3 = puVar2;
    }
    local_78 = 0;
    local_80 = 0;
    *(undefined8 **)(param_1 + 0x430) = puVar3;
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,1);
    FUN_141ac25e0(puVar3,4,0x28,0x1c);
  }
  return;
}



// FUNCTION 141cda560 FUN_141cda560 body=2070 status=ok
// SIG undefined FUN_141cda560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cda560(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined1 local_110;
  undefined1 local_108;
  char local_f8;
  char local_f7;
  int local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  undefined8 local_e0;
  int local_d8;
  int iStack_d4;
  int local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  short local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar10 = (longlong *)(param_3 + 0x10);
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x30) + 8);
  *(undefined2 *)(param_1 + 0x3d0) = 0;
  iVar13 = 0;
  *(uint *)(param_1 + 0x3cc) = (uint)(1 < iVar1);
  if (0 < *(int *)(param_3 + 0x18)) {
    lVar11 = 0;
    do {
      lVar9 = *plVar10;
      if (*(char *)(*(longlong *)(lVar11 + lVar9) + 0x1204) != '\0') {
        *(undefined1 *)(param_1 + 0x3d0) = 1;
        lVar9 = *plVar10;
      }
      if (*(char *)(*(longlong *)(lVar11 + lVar9) + 0x1202) != '\0') {
        if ((*(int *)(param_3 + 0x74) == 0) || (*(int *)(param_3 + 0x74) == 3)) {
          *(undefined1 *)(param_1 + 0x3d0) = 1;
        }
        *(undefined1 *)(param_1 + 0x3d1) = 1;
      }
      iVar13 = iVar13 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar13 < *(int *)(param_3 + 0x18));
  }
  local_e0 = param_3;
  local_d0 = iVar1;
  local_c0 = param_2;
  FUN_141cdfe80(param_1,&local_d8,plVar10);
  QuantizeSceneBufferSize(&local_d8,&local_d8);
  local_ec = *(int *)(DAT_146a61ef0 + 4);
  if ((((*(char *)(param_3 + 0x5c) == '\0') || (*(int *)(param_3 + 0x58) == 0)) ||
      (*(int *)(param_3 + 0x58) == 3)) || (*(int *)(param_3 + 0x18) != 3)) {
    bVar4 = false;
    uStack_a8 = DAT_1464c9c98;
    local_b8 = _DAT_1464c9c88;
    uStack_b4 = uRam00000001464c9c8c;
    uStack_b0 = uRam00000001464c9c90;
    uStack_ac = uRam00000001464c9c94;
  }
  else {
    local_b8 = 1;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    bVar4 = true;
  }
  *(ulonglong *)(param_1 + 0x3d8) = CONCAT44(uStack_b4,local_b8);
  *(ulonglong *)(param_1 + 0x3e0) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined4 *)(param_1 + 1000) = uStack_a8;
  if (bVar4) {
    uStack_b4 = *(undefined4 *)(param_3 + 0x48);
    local_b8 = 2;
    uStack_b0 = 0;
  }
  else {
    uStack_a8 = DAT_1464c9d28;
    local_b8 = _DAT_1464c9d18;
    uStack_b4 = uRam00000001464c9d1c;
    uStack_b0 = uRam00000001464c9d20;
    uStack_ac = uRam00000001464c9d24;
  }
  uVar14 = (ulonglong)_tls_index;
  *(undefined4 *)(param_1 + 0x3ec) = local_b8;
  *(undefined4 *)(param_1 + 0x3f0) = uStack_b4;
  *(undefined4 *)(param_1 + 0x3f4) = uStack_b0;
  *(undefined4 *)(param_1 + 0x3f8) = uStack_ac;
  *(undefined4 *)(param_1 + 0x3fc) = uStack_a8;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8);
  local_c8 = lVar11;
  if ((*(int *)(lVar11 + 0x38) < DAT_146a7fa00) &&
     (_Init_thread_header(&DAT_146a7fa00), DAT_146a7fa00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar10 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SceneColorFormat");
    lVar9 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    DAT_146a7f9f8 = lVar9;
    _Init_thread_footer(&DAT_146a7fa00);
  }
  local_e8 = *(int *)(DAT_146a7f9f8 + 4);
  cVar6 = FUN_142753a10();
  if (((cVar6 == '\0') || (cVar6 = FUN_142753910(), cVar6 != '\0')) ||
     (uVar14 = 10, DAT_1464c9c5a == '\0')) {
    uVar14 = 2;
  }
  local_f0 = (uint)uVar14;
  uVar15 = uVar14;
  if (*(int *)(lVar11 + 0x38) < DAT_146a7fa70) {
    _Init_thread_header(&DAT_146a7fa70);
    if (DAT_146a7fa70 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar10 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Mobile.SceneColorFormat");
      lVar9 = 0;
      if (plVar10 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar10 + 0x38))(plVar10);
      }
      DAT_146a7fa68 = lVar9;
      _Init_thread_footer(&DAT_146a7fa70);
    }
    uVar15 = (ulonglong)local_f0;
  }
  iVar13 = *(int *)(DAT_146a7fa68 + 4);
  if (iVar13 == 1) {
    uVar14 = 10;
  }
  else if (iVar13 == 2) {
    uVar14 = 0x1a;
  }
  else if (iVar13 == 3) {
    uVar14 = 2;
  }
  if ((&DAT_1464ca1d0)[uVar14 * 0x28] != '\0') {
    uVar15 = uVar14;
  }
  local_f0 = (uint)uVar15;
  if ((*(int *)(lVar11 + 0x38) < DAT_146a7fa10) &&
     (_Init_thread_header(&DAT_146a7fa10), DAT_146a7fa10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar10 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar11 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    DAT_146a7fa08 = lVar11;
    _Init_thread_footer(&DAT_146a7fa10);
  }
  local_f7 = *(int *)(DAT_146a7fa08 + 4) != 0;
  local_f8 = DAT_146a61374 != 0;
  lVar11 = FUN_1428742e0();
  iVar13 = *(int *)(lVar11 + 0x14);
  iVar8 = *(int *)(DAT_146a61e50 + 4);
  if (iVar8 < 1) {
    iVar12 = 1;
  }
  else {
    iVar12 = 0x800;
    if (iVar8 < 0x800) {
      iVar12 = iVar8;
    }
  }
  if (*(int *)(*(longlong *)(param_3 + 0x30) + 8) < 2) {
    iVar8 = DAT_1464c9c60;
    if (DAT_1464c9c60 <= DAT_1464c9c5c) {
      iVar8 = DAT_1464c9c5c;
    }
    if (iVar8 < iVar13 * 2) {
      iVar13 = iVar8 / 2;
    }
  }
  local_f4 = DAT_1464c32d8;
  cVar6 = FUN_142753a10();
  if ((cVar6 == '\0') || (cVar6 = FUN_142753910(), cVar6 != '\0')) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  uVar7 = FUN_141ce5010(iVar1);
  cVar6 = UseLightPropagationVolumeRT(iVar1);
  if ((*(int *)(local_c8 + 0x38) < DAT_146a7fa20) &&
     (_Init_thread_header(&DAT_146a7fa20), DAT_146a7fa20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar10 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.MinResolution");
    lVar11 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    DAT_146a7fa18 = lVar11;
    _Init_thread_footer(&DAT_146a7fa20);
  }
  iVar1 = *(int *)(DAT_146a7fa18 + 4);
  if ((((*(int *)(param_1 + 0x378) != local_d8) || (*(int *)(param_1 + 0x37c) != iStack_d4)) ||
      (*(int *)(param_1 + 0x39c) != local_ec)) ||
     (((((*(int *)(param_1 + 0x3a0) != local_e8 || (*(int *)(param_1 + 0x3a4) != local_f0)) ||
        ((*(char *)(param_1 + 0x3a8) != local_f7 ||
         ((*(char *)(param_1 + 0x398) != local_f8 || (*(int *)(param_1 + 0x3ac) != iVar13)))))) ||
       (*(int *)(param_1 + 0x3b0) != iVar12)) ||
      ((((*(int *)(param_1 + 0x3b4) != local_f4 || (*(int *)(param_1 + 0x3b8) != iVar8)) ||
        (*(uint *)(param_1 + 0x3bc) != (uint)uVar7)) ||
       ((*(char *)(param_1 + 0x3c4) != cVar6 || (*(int *)(param_1 + 0x3c0) != iVar1)))))))) {
    *(int *)(param_1 + 0x39c) = local_ec;
    *(int *)(param_1 + 0x3b4) = local_f4;
    *(int *)(param_1 + 0x3c0) = iVar1;
    *(int *)(param_1 + 0x3a0) = local_e8;
    *(uint *)(param_1 + 0x3a4) = local_f0;
    *(char *)(param_1 + 0x3a8) = local_f7;
    *(char *)(param_1 + 0x398) = local_f8;
    *(int *)(param_1 + 0x3ac) = iVar13;
    *(int *)(param_1 + 0x3b0) = iVar12;
    *(int *)(param_1 + 0x3b8) = iVar8;
    *(uint *)(param_1 + 0x3bc) = (uint)uVar7;
    *(char *)(param_1 + 0x3c4) = cVar6;
    local_c8 = CONCAT44(iStack_d4,local_d8);
    QuantizeSceneBufferSize(&local_c8,param_1 + 0x378);
    *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + 1;
    FRenderResource::UpdateRHI(param_1);
    FUN_141cf2a50(&PTR_PTR_1464c2560);
  }
  uVar5 = local_c0;
  *(int *)(param_1 + 0x3c8) = local_d0;
  FUN_141cdd570(param_1,local_c0,*(undefined4 *)(param_3 + 0x18));
  if (((*(char *)(param_3 + 0x5c) != '\0') && (*(int *)(param_3 + 0x58) != 0)) &&
     ((*(int *)(param_3 + 0x18) == 3 &&
      ((lVar11 = *(longlong *)(local_e0 + 0xc0), *(longlong *)(param_1 + 0xa8) == 0 ||
       (*(longlong *)(param_1 + 0xb0) == 0)))))) {
    uVar3 = *(undefined8 *)(lVar11 + 0x7c48);
    uVar2 = *(undefined4 *)(param_1 + 0x3c8);
    local_84 = (undefined4)uVar3;
    local_e0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_88 = DAT_1464c9c98;
    local_98 = _DAT_1464c9c88;
    uStack_94 = uRam00000001464c9c8c;
    uStack_90 = uRam00000001464c9c90;
    uStack_8c = uRam00000001464c9c94;
    local_80 = local_e0._4_4_;
    local_7c = 0;
    local_78 = 1;
    local_74 = 0x10000;
    local_e0 = uVar3;
    local_6c = FUN_141ce5560(param_1,uVar2);
    local_64 = 1;
    local_58 = L"UnknownTexture2D";
    local_60 = 0;
    local_50 = 1;
    local_68 = 0x100000;
    local_70 = FUN_141ce5010(uVar2);
    if ((2 < *(int *)(param_1 + 0x3c8)) && (local_70 == 1)) {
      local_64 = 0x10001;
    }
    local_108 = 1;
    local_110 = 1;
    local_118 = L"SceneMonoColor";
    FUN_141ce20b0(&PTR_PTR_1464c2560,uVar5,&local_98,param_1 + 0xa8);
    uVar3 = *(undefined8 *)(lVar11 + 0x7c48);
    local_84 = (undefined4)uVar3;
    local_e0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_80 = local_e0._4_4_;
    local_88 = DAT_1464c9d28;
    local_78 = 1;
    local_50 = 1;
    local_98 = _DAT_1464c9d18;
    uStack_94 = uRam00000001464c9d1c;
    uStack_90 = uRam00000001464c9d20;
    uStack_8c = uRam00000001464c9d24;
    local_7c = 0;
    local_74 = 0x10000;
    local_6c = 0xb;
    local_64 = 4;
    local_60 = 0;
    local_58 = L"UnknownTexture2D";
    local_e0 = uVar3;
    local_70 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
    local_108 = 1;
    local_110 = 1;
    local_118 = L"SceneMonoDepthZ";
    local_68 = 0x100000;
    FUN_141ce20b0(&PTR_PTR_1464c2560,uVar5,&local_98,param_1 + 0xb0);
  }
  return;
}



// FUNCTION 141cdad80 FUN_141cdad80 body=1073 status=ok
// SIG undefined FUN_141cdad80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cdad80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined4 local_100;
  uint local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  uint local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  plVar8 = (longlong *)0x0;
  if ((*(undefined8 **)(DAT_146b17150 + 0xab8) == (undefined8 *)0x0) ||
     (cVar5 = (**(code **)**(undefined8 **)(DAT_146b17150 + 0xab8))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    plVar8 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x78))();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
    local_b0 = *(int *)(lVar1 + 0x20);
    fStack_ac = *(float *)(lVar1 + 0x24);
    fStack_a8 = *(float *)(lVar1 + 0x28);
    fStack_a4 = *(float *)(lVar1 + 0x2c);
    local_a0 = *(float *)(lVar1 + 0x30);
    if (local_b0 == *(int *)(param_1 + 0x3ec)) {
      if (local_b0 == 1) {
        if (((fStack_ac == *(float *)(param_1 + 0x3f0)) &&
            (fStack_a8 == *(float *)(param_1 + 0x3f4))) &&
           (fStack_a4 == *(float *)(param_1 + 0x3f8))) {
          bVar9 = local_a0 == *(float *)(param_1 + 0x3fc);
LAB_141cdae79:
          if (bVar9) goto LAB_141cdae7b;
        }
      }
      else if (local_b0 == 2) {
        if (fStack_ac == *(float *)(param_1 + 0x3f0)) {
          bVar9 = fStack_a8 == *(float *)(param_1 + 0x3f4);
          goto LAB_141cdae79;
        }
      }
      else {
LAB_141cdae7b:
        if ((plVar8 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,param_1 + 0x60), cVar5 == '\0'))
        goto LAB_141cdaea4;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
  }
LAB_141cdaea4:
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_146a9dad4 == '\0')) {
    if ((bVar4) && (*(char *)(param_1 + 0x418) != '\0')) {
      local_f8 = CONCAT31(local_f8._1_3_,0x2c);
      local_100 = CONCAT31(local_100._1_3_,1);
      local_108 = (wchar_t *)((ulonglong)local_108 & 0xffffffffffffff00);
      (**(code **)(*DAT_146ab6358 + 0x650))
                (DAT_146ab6358,&local_c8,&DAT_146ab6e78,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,&local_c8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
    }
    goto LAB_141cdb0df;
  }
  local_b8 = 0;
  local_c8 = 0;
  if (plVar8 == (longlong *)0x0) {
LAB_141cdaf8f:
    bVar4 = false;
  }
  else {
    lVar1 = *plVar8;
    uVar6 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
    local_d8 = (uint)uVar6;
    local_e0 = &local_c8;
    local_e8 = &local_b8;
    local_f0 = 4;
    local_f8 = 0;
    local_100 = 0;
    local_108 = (wchar_t *)CONCAT71(local_108._1_7_,0x2c);
    cVar5 = (**(code **)(lVar1 + 0x38))
                      (plVar8,0,*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c));
    if (cVar5 == '\0') goto LAB_141cdaf8f;
    bVar4 = true;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x378);
  local_88 = *(undefined4 *)(param_1 + 0x3fc);
  local_98 = *(undefined4 *)(param_1 + 0x3ec);
  uStack_94 = *(undefined4 *)(param_1 + 0x3f0);
  uStack_90 = *(undefined4 *)(param_1 + 0x3f4);
  uStack_8c = *(undefined4 *)(param_1 + 0x3f8);
  local_84 = (undefined4)uVar3;
  local_c0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_80 = local_c0._4_4_;
  local_58 = L"UnknownTexture2D";
  local_7c = 0;
  local_78 = 1;
  local_74 = 0x10000;
  local_6c = CONCAT44(local_6c._4_4_,0xb);
  local_64 = 0x4004;
  local_60 = 0;
  local_50 = 1;
  local_c0 = uVar3;
  local_70 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
  local_6c = CONCAT44(DAT_146a9da1c,(undefined4)local_6c);
  local_f8 = CONCAT31(local_f8._1_3_,1);
  local_100 = CONCAT31(local_100._1_3_,1);
  local_108 = L"SceneDepthZ";
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0x60);
  if (bVar4) {
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
    *(undefined1 *)(param_1 + 0x418) = 1;
    TRefCountPtr<FRHITexture>::operator=(*(longlong *)(param_1 + 0x60) + 0x10,local_c8);
    _DAT_1464c26a8 = _DAT_1464c26a8 - (iVar7 + 0x3ffU >> 10);
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
    _DAT_1464c26a8 = _DAT_1464c26a8 + (iVar7 + 0x3ffU >> 10);
  }
  local_f8 = CONCAT31(local_f8._1_3_,0x2c);
  local_100 = CONCAT31(local_100._1_3_,1);
  local_108 = (wchar_t *)((ulonglong)local_108 & 0xffffffffffffff00);
  (**(code **)(*DAT_146ab6358 + 0x650))
            (DAT_146ab6358,&local_c0,&DAT_146ab6e78,
             *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,&local_c0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_b8);
LAB_141cdb0df:
  if ((*(longlong *)(param_1 + 0x98) == 0) && (DAT_1464c9c11 == '\0')) {
    uVar3 = *(undefined8 *)(param_1 + 0x378);
    local_88 = *(undefined4 *)(param_1 + 0x3fc);
    local_98 = *(undefined4 *)(param_1 + 0x3ec);
    uStack_94 = *(undefined4 *)(param_1 + 0x3f0);
    uStack_90 = *(undefined4 *)(param_1 + 0x3f4);
    uStack_8c = *(undefined4 *)(param_1 + 0x3f8);
    local_84 = (undefined4)uVar3;
    local_b8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_80 = local_b8._4_4_;
    local_58 = L"UnknownTexture2D";
    local_f8 = local_f8 & 0xffffff00;
    local_100 = CONCAT31(local_100._1_3_,1);
    local_108 = L"AuxiliarySceneDepthZ";
    local_7c = 0;
    local_78 = 1;
    local_74 = 0x10000;
    local_70 = 1;
    local_6c = 0xb;
    local_64 = 4;
    local_60 = 0;
    local_50 = 0;
    local_b8 = uVar3;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98);
  }
  return;
}



// FUNCTION 141cdb1c0 FUN_141cdb1c0 body=2771 status=ok
// SIG undefined FUN_141cdb1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cdb1c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  void *pvVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  undefined1 local_130;
  undefined1 local_128;
  char local_118;
  undefined8 local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0;
  wchar_t *local_a8;
  undefined2 local_a0;
  undefined1 local_98 [48];
  uint local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_108 = CONCAT44(local_108._4_4_,param_3);
  local_110 = param_1;
  local_f8 = param_2;
  FUN_141cdad80();
  local_128 = 0;
  uVar13 = *(uint *)(param_1 + 0x37c) / *(uint *)(param_1 + 0x394);
  local_130 = 1;
  local_e8._0_4_ = _DAT_146ab6928;
  local_e8._4_4_ = uRam0000000146ab692c;
  uStack_e0._0_4_ = uRam0000000146ab6930;
  uStack_e0._4_4_ = uRam0000000146ab6934;
  uVar4 = *(uint *)(param_1 + 0x378) / *(uint *)(param_1 + 0x394);
  local_cc = 0;
  local_c8 = 1;
  local_c4 = 0x10000;
  local_d4 = 1;
  if (uVar4 != 0) {
    local_d4 = uVar4;
  }
  local_c0 = 1;
  local_d8 = DAT_146ab6938;
  local_d0 = 1;
  if (uVar13 != 0) {
    local_d0 = uVar13;
  }
  local_bc = 0xb;
  local_b4 = 4;
  local_b0 = 1;
  local_a8 = L"UnknownTexture2D";
  local_a0 = 1;
  local_138 = L"SmallDepthZ";
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8,param_1 + 0xa0);
  iVar5 = *(int *)(param_1 + 0x3c8);
  if (1 < iVar5) {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar17 = *(longlong *)(param_1 + 0x378);
      local_d4 = (uint)lVar17;
      local_100._4_4_ = (uint)((ulonglong)lVar17 >> 0x20);
      local_d0 = local_100._4_4_;
      local_b4 = 1;
      if (2 < iVar5) {
        local_b4 = 0x10001;
      }
      local_d8 = DAT_1464c9cb0;
      local_128 = 0;
      local_130 = 1;
      local_138 = L"ScreenSpaceAO";
      local_e8._0_4_ = _DAT_1464c9ca0;
      local_e8._4_4_ = uRam00000001464c9ca4;
      uStack_e0._0_4_ = uRam00000001464c9ca8;
      uStack_e0._4_4_ = uRam00000001464c9cac;
      local_cc = 0;
      local_c8 = 1;
      local_c4 = 0x10000;
      local_c0 = 1;
      local_bc = CONCAT44(DAT_146a9da8c,0x15);
      local_b0 = 0;
      local_a8 = L"UnknownTexture2D";
      local_a0 = 1;
      local_100 = lVar17;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8);
      iVar5 = *(int *)(param_1 + 0x3c8);
    }
    local_f0 = param_1 + 0x1a0;
    uVar18 = 0x40010009;
    if (iVar5 < 3) {
      uVar18 = 0x40000009;
    }
    iVar5 = param_3 * 3;
    TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::SetNum
              (local_f0,iVar5,1);
    local_100 = param_1 + 0x1c8;
    TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::SetNum
              (local_100,iVar5,1);
    iVar9 = 0;
    if (0 < iVar5) {
      do {
        switch(iVar9) {
        case 0:
          local_138 = L"TranslucentVolume0";
          break;
        case 1:
          local_138 = L"TranslucentVolume1";
          break;
        case 2:
          local_138 = L"TranslucentVolume2";
          break;
        case 3:
          local_138 = L"TranslucentVolume3";
          break;
        case 4:
          local_138 = L"TranslucentVolume4";
          break;
        case 5:
          local_138 = L"TranslucentVolume5";
          break;
        case 6:
          local_138 = L"TranslucentVolume6";
          break;
        case 7:
          local_138 = L"TranslucentVolume7";
          break;
        case 8:
          local_138 = L"TranslucentVolume8";
          break;
        case 9:
          local_138 = L"TranslucentVolume9";
          break;
        case 10:
          local_138 = L"TranslucentVolume10";
          break;
        case 0xb:
          local_138 = L"TranslucentVolume11";
          break;
        default:
          local_138 = L"InvalidName";
        }
        local_d8 = DAT_1464c9cc8;
        local_d4 = DAT_1464c32d8;
        local_d0 = DAT_1464c32d8;
        local_cc = DAT_1464c32d8;
        local_128 = 0;
        local_130 = 1;
        local_a8 = L"UnknownTextureVolume";
        local_a0 = 0;
        local_e8._0_4_ = _DAT_1464c9cb8;
        local_e8._4_4_ = uRam00000001464c9cbc;
        uStack_e0._0_4_ = uRam00000001464c9cc0;
        uStack_e0._4_4_ = DAT_1464c9cc4;
        local_c8 = 1;
        local_c4 = 0x10000;
        local_c0 = 1;
        local_bc = 0x1a;
        local_b0 = 0;
        local_b4 = uVar18;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8);
        switch(iVar9) {
        case 0:
          local_138 = L"TranslucentVolumeDir0";
          break;
        case 1:
          local_138 = L"TranslucentVolumeDir1";
          break;
        case 2:
          local_138 = L"TranslucentVolumeDir2";
          break;
        case 3:
          local_138 = L"TranslucentVolumeDir3";
          break;
        case 4:
          local_138 = L"TranslucentVolumeDir4";
          break;
        case 5:
          local_138 = L"TranslucentVolumeDir5";
          break;
        case 6:
          local_138 = L"TranslucentVolumeDir6";
          break;
        case 7:
          local_138 = L"TranslucentVolumeDir7";
          break;
        case 8:
          local_138 = L"TranslucentVolumeDir8";
          break;
        case 9:
          local_138 = L"TranslucentVolumeDir9";
          break;
        case 10:
          local_138 = L"TranslucentVolumeDir10";
          break;
        case 0xb:
          local_138 = L"TranslucentVolumeDir11";
          break;
        default:
          local_138 = L"InvalidName";
        }
        local_d8 = DAT_1464c9cc8;
        local_d4 = DAT_1464c32d8;
        local_d0 = DAT_1464c32d8;
        local_cc = DAT_1464c32d8;
        local_128 = 0;
        local_c8 = 1;
        local_c0 = 1;
        local_130 = 1;
        local_a0 = 0;
        local_e8._0_4_ = _DAT_1464c9cb8;
        local_e8._4_4_ = uRam00000001464c9cbc;
        uStack_e0._0_4_ = uRam00000001464c9cc0;
        uStack_e0._4_4_ = DAT_1464c9cc4;
        local_c4 = 0x10000;
        local_bc = 0x1a;
        local_b0 = 0;
        local_a8 = L"UnknownTextureVolume";
        local_b4 = uVar18;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar5);
      param_1 = local_110;
      param_3 = (int)local_108;
    }
    if ((DAT_1464c32c4 == 0) && (lVar17 = (longlong)param_3, 0 < lVar17)) {
      uVar6 = (ulonglong)_tls_index;
      lVar16 = 0;
      pvVar8 = ThreadLocalStoragePointer;
      local_108 = uVar6;
      do {
        if (DAT_1464c9c1a != '\0') {
          lVar1 = *(longlong *)((longlong)pvVar8 + uVar6 * 8);
          if ((*(int *)(lVar1 + 0x38) < DAT_146a7fa80) &&
             (_Init_thread_header(&DAT_146a7fa80), DAT_146a7fa80 == -1)) {
            if (DAT_1468b1f88 == (longlong *)0x0) {
              IConsoleManager::SetupSingleton();
            }
            DAT_146a7fa78 =
                 (longlong *)
                 (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TranslucencyVolumeBlur");
            _Init_thread_footer(&DAT_146a7fa80);
          }
          iVar5 = (**(code **)(*DAT_146a7fa78 + 0x68))();
          local_118 = 0 < iVar5;
          iVar9 = 0;
          lVar10 = *(longlong *)(param_1 + 0x1b8);
          if (*(longlong *)(param_1 + 0x1b8) == 0) {
            lVar10 = param_1 + 0x1a0;
          }
          lVar11 = *(longlong *)(param_1 + 0x1e0);
          if (*(longlong *)(param_1 + 0x1e0) == 0) {
            lVar11 = param_1 + 0x1c8;
          }
          lVar15 = (ulonglong)(0 < iVar5) + 2;
          lVar12 = lVar16;
          puVar14 = &uStack_e0;
          do {
            plVar7 = (longlong *)(lVar10 + lVar12);
            lVar12 = lVar12 + 8;
            iVar5 = iVar9 * 2;
            iVar9 = iVar9 + 1;
            (&local_e8)[iVar5] = *(undefined8 *)(*plVar7 + 8);
            *puVar14 = *(undefined8 *)(*(longlong *)(lVar11 + -8 + lVar12) + 8);
            lVar15 = lVar15 + -1;
            puVar14 = puVar14 + 2;
          } while (lVar15 != 0);
          if ((*(int *)(lVar1 + 0x38) < DAT_146a7faf0) &&
             (_Init_thread_header(&DAT_146a7faf0), DAT_146a7faf0 == -1)) {
            _DAT_146a7fa90 = _DAT_1468b5d78;
            uRam0000000146a7fa94 = uRam00000001468b5d7c;
            uRam0000000146a7fa98 = uRam00000001468b5d80;
            uRam0000000146a7fa9c = uRam00000001468b5d84;
            _Init_thread_footer(&DAT_146a7faf0);
          }
          param_2 = local_f8;
          if (local_118 == '\0') {
            FUN_141c95ff0(local_f8,*(undefined4 *)(param_1 + 0x3c8),&local_e8);
            uVar6 = local_108;
            pvVar8 = ThreadLocalStoragePointer;
          }
          else {
            FUN_141c96460();
            uVar6 = local_108;
            pvVar8 = ThreadLocalStoragePointer;
          }
        }
        lVar16 = lVar16 + 0x18;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  cVar3 = UseLightPropagationVolumeRT(*(undefined4 *)(param_1 + 0x3c8));
  if (cVar3 != '\0') {
    lVar17 = *(longlong *)(param_1 + 0x378);
    local_d4 = (uint)lVar17;
    local_110._4_4_ = (uint)((ulonglong)lVar17 >> 0x20);
    local_d0 = local_110._4_4_;
    local_d8 = DAT_1464c9cc8;
    local_128 = 1;
    local_130 = 1;
    local_138 = L"DirectionalOcclusion";
    local_e8._0_4_ = _DAT_1464c9cb8;
    local_e8._4_4_ = uRam00000001464c9cbc;
    uStack_e0._0_4_ = uRam00000001464c9cc0;
    uStack_e0._4_4_ = DAT_1464c9cc4;
    local_cc = 0;
    local_c8 = 1;
    local_c4 = 0x10000;
    local_c0 = 1;
    local_bc = 0x28;
    local_b4 = 1;
    local_b0 = 0;
    local_a8 = L"UnknownTexture2D";
    local_a0 = 1;
    local_110 = lVar17;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8,param_1 + 0x58);
  }
  if (*(char *)(param_1 + 0x3d2) != '\0') {
    FUN_141e00c60(local_98);
    local_68 = local_68 | DAT_146a9da14;
    local_128 = 1;
    local_130 = 1;
    local_138 = L"GBufferVelocity";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,local_98,param_1 + 0xe0);
  }
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar17 + 0x38) < DAT_146a7fa40) &&
     (_Init_thread_header(&DAT_146a7fa40), DAT_146a7fa40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EdgeDetectionCS");
    lVar16 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar16 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a7fa38 = lVar16;
    _Init_thread_footer(&DAT_146a7fa40);
  }
  lVar16 = 0;
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x378);
    local_d4 = (uint)lVar1;
    local_110._4_4_ = (uint)((ulonglong)lVar1 >> 0x20);
    local_d0 = local_110._4_4_;
    local_a8 = L"UnknownTexture2D";
    local_e8._0_4_ = _DAT_1464c9c88;
    local_e8._4_4_ = uRam00000001464c9c8c;
    uStack_e0._0_4_ = uRam00000001464c9c90;
    uStack_e0._4_4_ = uRam00000001464c9c94;
    local_d8 = DAT_1464c9c98;
    local_cc = 0;
    local_c8 = 1;
    local_c4 = 0x10000;
    local_c0 = 1;
    local_bc = 0x28;
    local_b4 = 1;
    local_b0 = 0;
    local_a0 = 1;
    if ((2 < *(int *)(param_1 + 0x3c8)) && (local_b4 = 1, *(int *)(DAT_146a7fa38 + 4) == 1)) {
      local_b4 = 0x2010001;
    }
    local_128 = 1;
    local_130 = 1;
    local_138 = L"EdgeDetectionBuffer";
    local_110 = lVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8);
  }
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x378);
    local_d4 = (uint)lVar1;
    local_110._4_4_ = (uint)((ulonglong)lVar1 >> 0x20);
    local_d0 = local_110._4_4_;
    local_a8 = L"UnknownTexture2D";
    local_e8._0_4_ = _DAT_1464c9c88;
    local_e8._4_4_ = uRam00000001464c9c8c;
    uStack_e0._0_4_ = uRam00000001464c9c90;
    uStack_e0._4_4_ = uRam00000001464c9c94;
    local_d8 = DAT_1464c9c98;
    local_cc = 0;
    local_c8 = 1;
    local_c4 = 0x10000;
    local_c0 = 1;
    local_bc = 0x15;
    local_b4 = 1;
    local_b0 = 0;
    local_a0 = 1;
    if ((2 < *(int *)(param_1 + 0x3c8)) && (local_b4 = 1, *(int *)(DAT_146a7fa38 + 4) == 1)) {
      local_b4 = 0x2010001;
    }
    local_128 = 1;
    local_130 = 1;
    local_138 = L"EdgeDepthBuffer";
    local_110 = lVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8);
  }
  if ((*(int *)(lVar17 + 0x38) < DAT_146a7fa50) &&
     (_Init_thread_header(&DAT_146a7fa50), DAT_146a7fa50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowLightDistortion");
    if (plVar7 != (longlong *)0x0) {
      lVar16 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a7fa48 = lVar16;
    _Init_thread_footer(&DAT_146a7fa50);
  }
  if (*(int *)(DAT_146a7fa48 + 4) == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x378);
    local_d4 = (uint)uVar2;
    local_110._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
    local_d0 = local_110._4_4_;
    local_a8 = L"UnknownTexture2D";
    local_e8._0_4_ = _DAT_1464c9c88;
    local_e8._4_4_ = uRam00000001464c9c8c;
    uStack_e0._0_4_ = uRam00000001464c9c90;
    uStack_e0._4_4_ = uRam00000001464c9c94;
    local_d8 = DAT_1464c9c98;
    local_cc = 0;
    local_c8 = 1;
    local_c4 = 0x10000;
    local_c0 = 1;
    local_bc = 10;
    local_b0 = 0;
    local_a0 = 1;
    if (2 < *(int *)(param_1 + 0x3c8)) {
      local_128 = 1;
      local_130 = 1;
      local_138 = L"LightDistortionBuffer";
      local_b4 = 0x10001;
      local_110 = uVar2;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8,param_1 + 0x2f8);
    }
  }
  return;
}



// FUNCTION 141cdbd00 FUN_141cdbd00 body=401 status=ok
// SIG undefined FUN_141cdbd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cdbd00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  wchar_t *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_74 = (undefined4)uVar1;
    local_98._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_70 = local_98._4_4_;
    local_78 = DAT_1464c9c98;
    local_54 = 0x2000001;
    if (2 < *(int *)(param_1 + 0x3c8)) {
      local_54 = 0x2010001;
    }
    local_a8 = 1;
    local_b0 = 1;
    local_b8 = L"EdgeDetectionBuffer";
    local_88 = _DAT_1464c9c88;
    uStack_84 = uRam00000001464c9c8c;
    uStack_80 = uRam00000001464c9c90;
    uStack_7c = uRam00000001464c9c94;
    local_6c = 0;
    local_68 = 1;
    local_64 = 0x10000;
    local_60 = 1;
    local_5c = 0x28;
    local_50 = 0;
    local_48 = L"UnknownTexture2D";
    local_40 = 1;
    local_98 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_88);
  }
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_74 = (undefined4)uVar1;
    local_98._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_70 = local_98._4_4_;
    local_68 = 1;
    local_60 = 1;
    local_40 = 1;
    local_54 = 1;
    if (2 < *(int *)(param_1 + 0x3c8)) {
      local_54 = 0x10001;
    }
    local_78 = DAT_1464c9c98;
    local_a8 = 1;
    local_b0 = 1;
    local_b8 = L"EdgeDepthBuffer";
    local_88 = _DAT_1464c9c88;
    uStack_84 = uRam00000001464c9c8c;
    uStack_80 = uRam00000001464c9c90;
    uStack_7c = uRam00000001464c9c94;
    local_6c = 0;
    local_64 = 0x10000;
    local_5c = 0x15;
    local_50 = 0;
    local_48 = L"UnknownTexture2D";
    local_98 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_88);
  }
  return;
}



// FUNCTION 141cdbea0 FUN_141cdbea0 body=256 status=ok
// SIG undefined FUN_141cdbea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141cdbea0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_68 = *(undefined4 *)(param_1 + 0x3ec);
    uStack_64 = *(undefined4 *)(param_1 + 0x3f0);
    uStack_60 = *(undefined4 *)(param_1 + 0x3f4);
    uStack_5c = *(undefined4 *)(param_1 + 0x3f8);
    local_58 = *(undefined4 *)(param_1 + 0x3fc);
    local_54 = (undefined4)uVar1;
    local_4c = 0;
    local_44 = 0x10000;
    local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_50 = local_78._4_4_;
    local_48 = 1;
    local_30 = 0;
    local_28 = L"UnknownTexture2D";
    local_3c = 0xb;
    local_34 = 4;
    local_20 = 1;
    local_78 = uVar1;
    local_40 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
    local_88 = 1;
    local_90 = 1;
    local_98 = L"SceneDepthZForeground";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68,param_1 + 0x70);
  }
  return;
}



// FUNCTION 141cdbfa0 FUN_141cdbfa0 body=4048 status=ok
// SIG undefined FUN_141cdbfa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141cdbfa0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong *puVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  undefined1 local_200;
  undefined1 local_1f8;
  byte local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  int local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  int local_174;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined2 local_164;
  ushort local_162;
  undefined2 local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150;
  wchar_t *local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  wchar_t *local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  ushort local_c2;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  wchar_t *local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1e8 = 0;
  if (*(int *)(DAT_146a18360 + 4) != 1) {
    return DAT_146a18360 & 0xffffffffffffff00;
  }
  iVar14 = 1;
  if (0 < *(int *)(DAT_146a18498 + 4)) {
    iVar14 = *(int *)(DAT_146a18498 + 4);
  }
  puVar17 = *(undefined8 **)(param_1 + 0x378);
  iVar18 = 0x25;
  if (*(int *)(DAT_146a184f8 + 4) == 1) {
    iVar18 = 10;
  }
  local_1d8._4_4_ = (int)((ulonglong)puVar17 >> 0x20);
  iVar13 = local_1d8._4_4_ / iVar14;
  plVar2 = (longlong *)(param_1 + 0x300);
  iVar14 = (int)((longlong)
                 ((ulonglong)(uint)((int)puVar17 >> 0x1f) << 0x20 | (ulonglong)puVar17 & 0xffffffff)
                / (longlong)iVar14);
  local_1e0 = param_1;
  local_1d8 = puVar17;
  local_1d0 = iVar18;
  local_198 = param_2;
  if (((((longlong *)*plVar2 == (longlong *)0x0) ||
       (lVar6 = (**(code **)(*(longlong *)*plVar2 + 0x10))(), iVar14 != *(int *)(lVar6 + 0x14))) ||
      (iVar13 != *(int *)(lVar6 + 0x18))) ||
     (lVar6 = (**(code **)(*(longlong *)*plVar2 + 0x10))(), iVar18 != *(int *)(lVar6 + 0x2c))) {
    local_88 = DAT_1464c9cc8;
    local_1f8 = 1;
    local_58 = L"UnknownTexture2D";
    local_200 = 1;
    local_208 = L"GbxSkyBuffer";
    local_98 = _DAT_1464c9cb8;
    uStack_90 = uRam00000001464c9cc0;
    local_7c = 0;
    local_78 = 1;
    local_74 = 0x10000;
    local_70 = 1;
    local_68 = 0x10;
    local_64 = 1;
    local_60 = 0;
    local_50 = 1;
    local_84 = iVar14;
    local_80 = iVar13;
    local_6c = iVar18;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,plVar2);
  }
  iVar14 = *(int *)(DAT_146a184e0 + 4);
  iVar13 = *(int *)(DAT_146a18510 + 4);
  local_1a0 = iVar14;
  if (iVar13 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    fVar20 = _guard_xfg_dispatch_icall_nop((float)iVar14);
    iVar13 = (int)(fVar20 * DAT_1468509d8);
  }
  lVar6 = local_1e0;
  plVar2 = (longlong *)(local_1e0 + 0x308);
  if ((((longlong *)*plVar2 != (longlong *)0x0) &&
      (lVar7 = (**(code **)(*(longlong *)*plVar2 + 0x10))(), iVar14 == *(int *)(lVar7 + 0x14))) &&
     ((iVar13 == (int)((longlong *)*plVar2)[8] &&
      (lVar7 = (**(code **)(*(longlong *)*plVar2 + 0x10))(), iVar18 == *(int *)(lVar7 + 0x2c)))))
  goto LAB_141cdcee7;
  local_178 = DAT_1464c9cc8;
  local_1f8 = 1;
  local_168 = 1;
  local_160 = 1;
  local_200 = 1;
  local_148 = L"UnknownTextureCube";
  local_208 = L"GbxSkyCubeMap";
  local_1e8 = 1;
  local_140 = 1;
  local_188 = _DAT_1464c9cb8;
  uStack_180 = uRam00000001464c9cc0;
  local_16c = 0;
  local_164 = 0x100;
  local_158 = 0x800000;
  local_154 = 0x2010009;
  local_150 = 0;
  local_174 = iVar14;
  local_170 = iVar14;
  local_162 = (ushort)iVar13;
  local_15c = iVar18;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_188,plVar2);
  TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::SetNum(*plVar2 + 0x38,local_162,1)
  ;
  uVar12 = 0;
  if (0 < iVar13) {
    do {
      local_208 = (wchar_t *)CONCAT71(local_208._1_7_,(char)uVar12);
      (**(code **)(*DAT_146ab6358 + 0x638))
                (DAT_146ab6358,&local_1c8,&DAT_146ab6e78,*(undefined8 *)(*plVar2 + 0x10));
      ppuVar10 = (undefined8 **)(*(longlong *)(*plVar2 + 0x38) + (ulonglong)uVar12 * 8);
      if (ppuVar10 == &local_1c8) {
LAB_141cdc377:
        puVar17 = local_1c8;
        if (local_1c8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1c8 + 1);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            if ((*(char *)(local_1c8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar17 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar6 = 0;
                if (uVar5 != 0) {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
        }
      }
      else {
        puVar17 = *ppuVar10;
        *ppuVar10 = local_1c8;
        local_1c8 = (undefined8 *)0x0;
        if (puVar17 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            if ((*(char *)(puVar17 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar17 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar6 = 0;
                if (uVar5 != 0) {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
          goto LAB_141cdc377;
        }
      }
      uVar12 = uVar12 + 1;
      lVar6 = local_1e0;
      iVar18 = local_1d0;
    } while ((int)(uint)uVar12 < iVar13);
  }
  plVar15 = (longlong *)(lVar6 + 0x310);
  iVar14 = *(int *)(lVar6 + 0x318);
  if (iVar14 < iVar13) {
    *(int *)(lVar6 + 0x318) = iVar13;
    if (*(int *)(lVar6 + 0x31c) < iVar13) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar14);
    }
    if (iVar13 - iVar14 != 0) {
      puVar17 = (undefined8 *)(*plVar15 + (longlong)iVar14 * 8);
      for (uVar9 = (ulonglong)(uint)(iVar13 - iVar14); uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
  }
  else if (iVar13 < iVar14) {
    TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
              (plVar15,iVar13,iVar14 - iVar13,1);
  }
  iVar14 = 0;
  local_10c = iVar18;
  if (0 < iVar13) {
    lVar7 = 0;
    do {
      local_208 = (wchar_t *)CONCAT44(local_208._4_4_,iVar14);
      (**(code **)(*DAT_146ab6358 + 0x610))
                (DAT_146ab6358,&local_1c0,&DAT_146ab6e78,*(undefined8 *)(*plVar2 + 8));
      ppuVar10 = (undefined8 **)(*plVar15 + lVar7);
      if (ppuVar10 == &local_1c0) {
LAB_141cdc55a:
        puVar17 = local_1c0;
        if (local_1c0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1c0 + 1);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            if ((*(char *)(local_1c0 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar17 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
        }
      }
      else {
        puVar17 = *ppuVar10;
        *ppuVar10 = local_1c0;
        local_1c0 = (undefined8 *)0x0;
        if (puVar17 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            if ((*(char *)(puVar17 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar17 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
          goto LAB_141cdc55a;
        }
      }
      iVar14 = iVar14 + 1;
      lVar7 = lVar7 + 8;
      lVar6 = local_1e0;
      local_10c = local_1d0;
    } while (iVar14 < iVar13);
  }
  plVar2 = (longlong *)(lVar6 + 800);
  local_128 = DAT_146ab6938;
  local_11c = 0;
  local_118 = 1;
  local_110 = 1;
  local_f8 = L"UnknownTextureCube";
  local_124 = 0x80;
  local_120 = 0x80;
  local_1f8 = 1;
  local_200 = 1;
  local_208 = L"GbxSkyEnvCopy";
  local_f0 = 1;
  local_138 = _DAT_146ab6928;
  uStack_130 = uRam0000000146ab6930;
  local_114 = 0x10100;
  local_108 = 0x800000;
  local_104 = 0x2010009;
  local_100 = 0;
  FUN_141ce20b0(&PTR_PTR_1464c2560,local_198,&local_138,plVar2);
  lVar6 = *plVar2;
  plVar15 = (longlong *)(lVar6 + 0x38);
  iVar14 = *(int *)(lVar6 + 0x40);
  if (iVar14 < (int)(uint)local_114._2_2_) {
    *(uint *)(lVar6 + 0x40) = (uint)local_114._2_2_;
    uVar5 = (uint)local_114._2_2_ - iVar14;
    if (*(int *)(lVar6 + 0x44) < (int)(uint)local_114._2_2_) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar14);
    }
    if (uVar5 != 0) {
      puVar17 = (undefined8 *)(*plVar15 + (longlong)iVar14 * 8);
      for (uVar9 = (ulonglong)uVar5; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
  }
  else if ((int)(uint)local_114._2_2_ < iVar14) {
    TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
              (plVar15,local_114._2_2_,iVar14 - (uint)local_114._2_2_,1);
  }
  lVar6 = 0;
  local_208 = (wchar_t *)((ulonglong)local_208 & 0xffffffffffffff00);
  (**(code **)(*DAT_146ab6358 + 0x638))
            (DAT_146ab6358,&local_1b8,&DAT_146ab6e78,*(undefined8 *)(*plVar2 + 0x10));
  ppuVar10 = *(undefined8 ***)(*plVar2 + 0x38);
  if (ppuVar10 == &local_1b8) {
LAB_141cdc7da:
    puVar17 = local_1b8;
    if (local_1b8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1b8 + 1);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        if ((*(char *)(local_1b8 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
          if (bVar19) {
            *(int *)((longlong)puVar17 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar19) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar7 = lVar6;
            if (uVar5 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar17;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
  }
  else {
    puVar17 = *ppuVar10;
    *ppuVar10 = local_1b8;
    local_1b8 = (undefined8 *)0x0;
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        if ((*(char *)(puVar17 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
          if (bVar19) {
            *(int *)((longlong)puVar17 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar19) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar7 = lVar6;
            if (uVar5 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar17;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
      goto LAB_141cdc7da;
    }
  }
  lVar7 = local_1e0;
  plVar15 = (longlong *)(local_1e0 + 0x328);
  iVar14 = *(int *)(local_1e0 + 0x330);
  if (iVar14 < 1) {
    *(undefined4 *)(local_1e0 + 0x330) = 1;
    if (*(int *)(local_1e0 + 0x334) < 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar14);
    }
    lVar7 = local_1e0;
    if (1U - iVar14 != 0) {
      puVar17 = (undefined8 *)(*plVar15 + (longlong)iVar14 * 8);
      for (uVar9 = (ulonglong)(1U - iVar14); uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
  }
  else if (1 < iVar14) {
    TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
              (plVar15,1,iVar14 + -1,1);
  }
  local_208 = (wchar_t *)((ulonglong)local_208 & 0xffffffff00000000);
  (**(code **)(*DAT_146ab6358 + 0x610))
            (DAT_146ab6358,&local_1b0,&DAT_146ab6e78,*(undefined8 *)(*plVar2 + 8));
  uVar3 = local_198;
  ppuVar10 = (undefined8 **)*plVar15;
  if (ppuVar10 == &local_1b0) {
LAB_141cdc9c8:
    puVar17 = local_1b0;
    if (local_1b0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1b0 + 1);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        if ((*(char *)(local_1b0 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
          if (bVar19) {
            *(int *)((longlong)puVar17 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar19) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 != 0) {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar17;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
  }
  else {
    puVar17 = *ppuVar10;
    *ppuVar10 = local_1b0;
    local_1b0 = (undefined8 *)0x0;
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        if ((*(char *)(puVar17 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
          if (bVar19) {
            *(int *)((longlong)puVar17 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar19) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = lVar6;
            if (uVar5 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar17;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
      goto LAB_141cdc9c8;
    }
  }
  local_d8 = DAT_146ab6938;
  local_d4 = local_1a0;
  local_d0 = local_1a0;
  local_cc = 0;
  local_b0 = 0;
  plVar2 = (longlong *)(lVar7 + 0x338);
  local_a8 = L"UnknownTextureCube";
  local_1f8 = 1;
  local_200 = 1;
  local_208 = L"GbxSkyCubeDepthMap";
  local_a0 = 1;
  local_e8 = _DAT_146ab6928;
  uStack_e0 = uRam0000000146ab6930;
  local_c8 = 1;
  local_c4 = 0x100;
  local_c0 = 1;
  local_bc = 0xd;
  local_b8 = 0x800000;
  local_b4 = 0x2010009;
  local_c2 = (ushort)iVar13;
  FUN_141ce20b0(&PTR_PTR_1464c2560,uVar3,&local_e8,plVar2);
  lVar6 = *plVar2;
  plVar15 = (longlong *)(lVar6 + 0x38);
  iVar14 = *(int *)(lVar6 + 0x40);
  if (iVar14 < (int)(uint)local_c2) {
    *(uint *)(lVar6 + 0x40) = (uint)local_c2;
    uVar5 = (uint)local_c2 - iVar14;
    if (*(int *)(lVar6 + 0x44) < (int)(uint)local_c2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar14);
    }
    lVar7 = local_1e0;
    if (uVar5 != 0) {
      puVar17 = (undefined8 *)(*plVar15 + (longlong)iVar14 * 8);
      for (uVar9 = (ulonglong)uVar5; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
  }
  else if ((int)(uint)local_c2 < iVar14) {
    TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
              (plVar15,local_c2,iVar14 - (uint)local_c2,1);
  }
  uVar9 = 0;
  if (0 < iVar13) {
    do {
      local_208 = (wchar_t *)CONCAT71(local_208._1_7_,(char)uVar9);
      (**(code **)(*DAT_146ab6358 + 0x638))
                (DAT_146ab6358,&local_1a8,&DAT_146ab6e78,*(undefined8 *)(*plVar2 + 0x10));
      ppuVar10 = (undefined8 **)(*(longlong *)(*plVar2 + 0x38) + uVar9 * 8);
      if (ppuVar10 == &local_1a8) {
LAB_141cdcc58:
        puVar17 = local_1a8;
        if (local_1a8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1a8 + 1);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            if ((*(char *)(local_1a8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar17 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar6 = 0;
                if (uVar5 != 0) {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
        }
      }
      else {
        puVar17 = *ppuVar10;
        *ppuVar10 = local_1a8;
        local_1a8 = (undefined8 *)0x0;
        if (puVar17 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            if ((*(char *)(puVar17 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar17 + 0xc) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar17 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar6 = 0;
                if (uVar5 != 0) {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
          goto LAB_141cdcc58;
        }
      }
      uVar12 = (short)uVar9 + 1;
      uVar9 = (ulonglong)uVar12;
      lVar7 = local_1e0;
    } while ((int)(uint)uVar12 < iVar13);
  }
  plVar15 = (longlong *)(lVar7 + 0x340);
  iVar14 = *(int *)(lVar7 + 0x348);
  if (iVar14 < iVar13) {
    *(int *)(lVar7 + 0x348) = iVar13;
    uVar9 = (ulonglong)(uint)(iVar13 - iVar14);
    if (*(int *)(lVar7 + 0x34c) < iVar13) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar14);
    }
    puVar17 = (undefined8 *)(*plVar15 + (longlong)iVar14 * 8);
    if (iVar13 - iVar14 != 0) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
  }
  else if (iVar13 < iVar14) {
    TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
              (plVar15,iVar13,iVar14 - iVar13,1);
  }
  uVar16 = 0;
  uVar9 = uVar16;
  if (0 < iVar13) {
    do {
      lVar6 = 0;
      local_208 = (wchar_t *)CONCAT44(local_208._4_4_,(int)uVar16);
      (**(code **)(*DAT_146ab6358 + 0x610))
                (DAT_146ab6358,&local_1d8,&DAT_146ab6e78,*(undefined8 *)(*plVar2 + 8));
      puVar11 = (ulonglong *)(*plVar15 + uVar9);
      if (puVar11 == &local_1d8) {
LAB_141cdce3e:
        puVar17 = local_1d8;
        if (local_1d8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1d8 + 1);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            if ((*(char *)(local_1d8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar17 + 0xcU) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar17 + 0xcU) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
        }
      }
      else {
        puVar17 = (undefined8 *)*puVar11;
        *puVar11 = (ulonglong)local_1d8;
        local_1d8 = (undefined8 *)0x0;
        if (puVar17 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            if ((*(char *)(puVar17 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar17 + 0xcU) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar17 + 0xcU) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 != 0) {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
          goto LAB_141cdce3e;
        }
      }
      uVar5 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar5;
      uVar9 = uVar9 + 8;
    } while ((int)uVar5 < iVar13);
  }
LAB_141cdcee7:
  return (ulonglong)local_1e8;
}



// FUNCTION 141cdcf70 FUN_141cdcf70 body=253 status=ok
// SIG undefined FUN_141cdcf70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cdcf70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x50) == 0) && (1 < *(int *)(param_1 + 0x3c8))) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_54 = (undefined4)uVar1;
    local_58 = DAT_1464c9c98;
    local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_50 = local_78._4_4_;
    local_34 = 1;
    local_48 = 1;
    local_40 = 1;
    local_68 = _DAT_1464c9c88;
    uStack_64 = uRam00000001464c9c8c;
    uStack_60 = uRam00000001464c9c90;
    uStack_5c = uRam00000001464c9c94;
    local_4c = 0;
    local_44 = 0x10000;
    local_3c = 10;
    local_20 = 1;
    local_28 = L"UnknownTexture2D";
    if (2 < *(int *)(param_1 + 0x3c8)) {
      local_34 = 0x10001;
    }
    local_88 = 0;
    local_38 = DAT_146a9da84;
    local_90 = 1;
    local_98 = L"LightAccumulation";
    local_30 = 0;
    local_78 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68,param_1 + 0x50);
  }
  return;
}



// FUNCTION 141cdd070 FUN_141cdd070 body=214 status=ok
// SIG undefined FUN_141cdd070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cdd070(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_54 = (undefined4)uVar1;
    local_58 = DAT_146ab6938;
    local_4c = 0;
    local_68 = _DAT_146ab6928;
    uStack_64 = uRam0000000146ab692c;
    uStack_60 = uRam0000000146ab6930;
    uStack_5c = uRam0000000146ab6934;
    local_44 = 0x10000;
    local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_50 = local_78._4_4_;
    local_48 = 1;
    local_40 = 1;
    local_88 = 0;
    local_34 = 1;
    local_28 = L"UnknownTexture2D";
    local_30 = 0;
    local_90 = 1;
    local_98 = L"LightingChannels";
    local_3c = 0x20;
    local_20 = 1;
    local_78 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68);
  }
  return;
}



// FUNCTION 141cdd150 FUN_141cdd150 body=1047 status=ok
// SIG undefined FUN_141cdd150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141cdd150(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  short sVar7;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint local_84;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (DAT_1464c9c5a != '\0') {
    iVar6 = 0x1f;
    if (param_3 != 0) {
      for (; param_3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar3 = 0x20;
    iVar4 = iVar3;
    if (param_3 != 0) {
      iVar4 = 0x1f - iVar6;
    }
    uVar2 = param_3 - 1;
    iVar6 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar2 != 0) {
      iVar3 = 0x1f - iVar6;
    }
    plVar1 = *(longlong **)(param_1 + 0x170);
    iVar6 = (0x20U - iVar3 & ~((iVar4 << 0x1a) >> 0x1f)) + 1;
    if ((plVar1 != (longlong *)0x0) && (*(int *)(plVar1[1] + 0x34) != iVar6)) {
      *(undefined8 *)(param_1 + 0x170) = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))();
      }
      plVar1 = *(longlong **)(param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x178) = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))();
      }
      plVar1 = *(longlong **)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))();
      }
    }
    if (*(longlong *)(param_1 + 0x170) == 0) {
      local_c8 = 0;
      local_b8 = 1;
      local_50 = 1;
      local_78 = 1;
      local_70 = 1;
      local_64 = 1;
      uStack_b4 = 0x461c400000000000;
      uStack_ac = 0;
      local_58 = L"UnknownTextureCube";
      local_d0 = 1;
      local_d8 = L"ReflectionColorScratchCubemap0";
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0x461c4000;
      uStack_8c = 0;
      local_88 = 0;
      local_80 = (ulonglong)param_3;
      uVar5 = (undefined2)iVar6;
      local_74 = CONCAT22(uVar5,0x100);
      local_6c = 0x8000000000000a;
      local_60 = 0;
      local_84 = param_3;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0x170);
      local_c8 = 0;
      local_d0 = 1;
      local_d8 = L"ReflectionColorScratchCubemap1";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0x178);
      uStack_b4 = 0;
      uStack_ac = 0;
      local_c8 = 0;
      local_b8 = 1;
      local_d0 = 1;
      local_50 = 1;
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_80 = (ulonglong)param_3;
      local_78 = 1;
      local_74 = CONCAT22(uVar5,0x100);
      local_70 = 1;
      local_6c = 0x80000000000003;
      local_64 = 1;
      local_60 = 0;
      local_58 = L"UnknownTextureCube";
      local_d8 = L"ReflectionAlphaScratchCubemap1";
      local_84 = param_3;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0x180);
      iVar6 = 0x1f;
      if (DAT_1464c2e40 != 0) {
        for (; DAT_1464c2e40 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (DAT_1464c2e40 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uVar2 = DAT_1464c2e40 - 1;
      iVar4 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar2 == 0) {
        sVar7 = 0x20;
      }
      else {
        sVar7 = 0x1f - (short)iVar4;
      }
      local_84 = DAT_1464c2e40;
      uStack_b4 = 0x461c400000000000;
      uStack_ac = 0;
      local_c8 = 0;
      local_b8 = 1;
      local_d0 = 1;
      local_50 = 1;
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0x461c4000;
      uStack_8c = 0;
      local_88 = 0;
      local_80 = (ulonglong)DAT_1464c2e40;
      local_78 = 1;
      local_74 = CONCAT22((0x20U - sVar7 & ~(ushort)((iVar6 << 0x1a) >> 0x1f)) + 1,0x100);
      local_70 = 1;
      local_6c = 0x8000000000000a;
      local_64 = 1;
      local_60 = 0;
      local_58 = L"UnknownTextureCube";
      local_d8 = L"DiffuseIrradianceScratchCubemap0";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0x188);
      local_c8 = 0;
      local_d0 = 1;
      local_d8 = L"DiffuseIrradianceScratchCubemap1";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 400);
      uStack_b4 = 0x461c400000000000;
      uStack_ac = 0;
      local_58 = L"UnknownTexture2D";
      local_c8 = 0;
      local_b8 = 1;
      local_d0 = 1;
      local_88 = 0;
      local_98 = 1;
      uStack_94 = 0;
      uStack_90 = 0x461c4000;
      uStack_8c = 0;
      local_84 = 9;
      local_80 = 1;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_6c = 10;
      local_64 = 1;
      local_60 = 0;
      local_50 = 1;
      local_d8 = L"SkySHIrradianceMap";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,param_1 + 0x198);
    }
  }
  return;
}



// FUNCTION 141cdd570 FUN_141cdd570 body=575 status=ok
// SIG undefined FUN_141cdd570(void)

void FUN_141cdd570(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x378) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x37c) < 1) {
    return;
  }
  iVar3 = FSceneRenderTargets::GetSceneColorFormatType();
  if (iVar3 == 0) {
    bVar6 = *(longlong *)(param_1 + 0x30) == 0;
  }
  else if (iVar3 == 1) {
    bVar6 = *(longlong *)(param_1 + 0x38) == 0;
  }
  else {
    if (iVar3 != 2) goto LAB_141cdd71b;
    bVar6 = *(longlong *)(param_1 + 0x40) == 0;
  }
  if (bVar6) goto LAB_141cdd71b;
  iVar3 = FSceneRenderTargets::GetSceneColorFormatType(param_1);
  if (iVar3 != 0) {
    return;
  }
  plVar4 = (longlong *)FUN_141ce54f0();
  if (*plVar4 == 0) {
LAB_141cdd679:
    bVar6 = false;
  }
  else {
    lVar1 = *(longlong *)(*plVar4 + 8);
    iVar3 = *(int *)(lVar1 + 0x20);
    if (iVar3 != *(int *)(param_1 + 0x3d8)) goto LAB_141cdd679;
    if (iVar3 == 1) {
      if (((*(float *)(lVar1 + 0x24) == *(float *)(param_1 + 0x3dc)) &&
          (*(float *)(lVar1 + 0x28) == *(float *)(param_1 + 0x3e0))) &&
         (*(float *)(lVar1 + 0x2c) == *(float *)(param_1 + 0x3e4))) {
        bVar6 = *(float *)(lVar1 + 0x30) == *(float *)(param_1 + 1000);
LAB_141cdd673:
        if (bVar6) goto LAB_141cdd675;
      }
      goto LAB_141cdd679;
    }
    if (iVar3 == 2) {
      if (*(float *)(lVar1 + 0x24) == *(float *)(param_1 + 0x3dc)) {
        bVar6 = *(float *)(lVar1 + 0x28) == *(float *)(param_1 + 0x3e0);
        goto LAB_141cdd673;
      }
      goto LAB_141cdd679;
    }
LAB_141cdd675:
    bVar6 = true;
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
LAB_141cdd70d:
    bVar7 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
    iVar3 = *(int *)(lVar1 + 0x20);
    if (iVar3 != *(int *)(param_1 + 0x3ec)) goto LAB_141cdd70d;
    if (iVar3 == 1) {
      if (((*(float *)(lVar1 + 0x24) == *(float *)(param_1 + 0x3f0)) &&
          (*(float *)(lVar1 + 0x28) == *(float *)(param_1 + 0x3f4))) &&
         (*(float *)(lVar1 + 0x2c) == *(float *)(param_1 + 0x3f8))) {
        bVar7 = *(float *)(lVar1 + 0x30) == *(float *)(param_1 + 0x3fc);
LAB_141cdd707:
        if (bVar7) goto LAB_141cdd709;
      }
      goto LAB_141cdd70d;
    }
    if (iVar3 == 2) {
      if (*(float *)(lVar1 + 0x24) == *(float *)(param_1 + 0x3f0)) {
        bVar7 = *(float *)(lVar1 + 0x28) == *(float *)(param_1 + 0x3f4);
        goto LAB_141cdd707;
      }
      goto LAB_141cdd70d;
    }
LAB_141cdd709:
    bVar7 = true;
  }
  if ((bVar6) && (bVar7)) {
    return;
  }
LAB_141cdd71b:
  if (*(int *)(param_1 + 0x3cc) == 0) {
    FUN_141cd9ce0();
    FUN_141cdad80(param_1,param_2);
    plVar4 = (longlong *)FUN_141ce54f0(param_1);
    if (*plVar4 == 0) {
      DAT_1464c2e21 = 0;
      puVar5 = &DAT_1464c3318;
    }
    else {
      puVar5 = (undefined8 *)FUN_141ce54f0(param_1);
    }
    (**(code **)(*(longlong *)*puVar5 + 0x10))();
    plVar2 = DAT_1464c3360;
    plVar4 = *(longlong **)(param_1 + 0x90);
    *(longlong **)(param_1 + 0x90) = DAT_1464c3360;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cdd79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x30))(plVar4);
      return;
    }
  }
  else {
    FUN_141cdb1c0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 141cdd7b0 FUN_141cdd7b0 body=249 status=ok
// SIG undefined FUN_141cdd7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cdd7b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)(param_1 + 0x378);
  local_54 = (undefined4)uVar1;
  local_68 = _DAT_1464c9ca0;
  uStack_64 = uRam00000001464c9ca4;
  uStack_60 = uRam00000001464c9ca8;
  uStack_5c = uRam00000001464c9cac;
  local_58 = DAT_1464c9cb0;
  local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_50 = local_78._4_4_;
  local_48 = 1;
  local_4c = 0;
  local_44 = 0x10000;
  local_3c = 2;
  local_34 = 1;
  local_28 = L"UnknownTexture2D";
  local_38 = DAT_146a9da78;
  local_30 = 0;
  local_20 = 1;
  local_78 = uVar1;
  local_40 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
  local_88 = 1;
  local_90 = 1;
  local_98 = L"ScreenShadowMaskTexture";
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68,param_3);
  return;
}



// FUNCTION 141cdd8b0 FUN_141cdd8b0 body=214 status=ok
// SIG undefined FUN_141cdd8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cdd8b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x88) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_54 = (undefined4)uVar1;
    local_58 = DAT_146ab6938;
    local_4c = 0;
    local_68 = _DAT_146ab6928;
    uStack_64 = uRam0000000146ab692c;
    uStack_60 = uRam0000000146ab6930;
    uStack_5c = uRam0000000146ab6934;
    local_44 = 0x10000;
    local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_50 = local_78._4_4_;
    local_48 = 1;
    local_40 = 1;
    local_88 = 0;
    local_34 = 1;
    local_28 = L"UnknownTexture2D";
    local_30 = 0;
    local_90 = 1;
    local_98 = L"StencilAfterDepth";
    local_3c = 0x39;
    local_20 = 1;
    local_78 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68);
  }
  return;
}



// FUNCTION 141cdd990 FUN_141cdd990 body=831 status=ok
// SIG undefined FUN_141cdd990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141cdd990(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_398 [32];
  wchar_t *local_378;
  undefined1 local_370;
  undefined1 local_368;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined2 local_348;
  undefined6 uStack_346;
  undefined8 local_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  ulonglong local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined2 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined1 local_2f0;
  wchar_t *local_2e8;
  undefined2 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulonglong local_2c8;
  undefined4 local_218;
  undefined1 local_214;
  undefined1 local_148 [17];
  undefined1 local_137;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  lVar5 = FUN_141cf3a20();
  if (*(int *)(DAT_146a61ea8 + 4) == 1) {
    if (param_3 != '\0') goto LAB_141cdd9ed;
LAB_141cddaed:
    if (*(int *)(DAT_146a61e90 + 4) == 3) goto LAB_141cdd9ed;
    lVar6 = 0;
  }
  else {
    if (*(int *)(DAT_146a61ea8 + 4) != 2) goto LAB_141cddaed;
LAB_141cdd9ed:
    if (((*(longlong **)(param_1 + 0x148) == (longlong *)0x0) ||
        (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x10))(),
        *(int *)(param_1 + 0x378) != *(int *)(lVar6 + 0x14))) ||
       (*(int *)(param_1 + 0x37c) != *(int *)(lVar6 + 0x18))) {
      uVar1 = *(undefined8 *)(param_1 + 0x378);
      local_314 = (undefined4)uVar1;
      local_358._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_310 = local_358._4_4_;
      local_2e8 = L"UnknownTexture2D";
      local_318 = DAT_1464c9cc8;
      local_368 = 1;
      local_370 = 1;
      local_378 = L"CustomColor";
      local_328 = _DAT_1464c9cb8;
      uStack_324 = uRam00000001464c9cbc;
      uStack_320 = uRam00000001464c9cc0;
      uStack_31c = DAT_1464c9cc4;
      local_30c = 0;
      local_308 = 1;
      local_304 = 0x10000;
      local_300 = 1;
      local_2fc = 0x25;
      local_2f8 = 0x10;
      local_2f4 = 1;
      local_2f0 = 0;
      local_2e0 = 1;
      local_358 = uVar1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_328,param_1 + 0x148);
    }
    lVar6 = *(longlong *)(param_1 + 0x148);
  }
  if (lVar5 == 0) {
    return 0;
  }
  bVar10 = *(int *)(DAT_146a61e90 + 4) == 3;
  if ((bVar10) && (*(int *)(param_1 + 0x3c8) < 2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_340 = 0;
  local_330 = local_330 & 0xffffffffffff0000;
  if (bVar2) {
    local_348 = 0x102;
    local_340 = *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x10);
    local_330 = CONCAT62(uStack_346,0x102);
  }
  uStack_334 = 0xffffffff;
  uStack_338 = 0;
  local_358 = *(undefined8 *)(lVar5 + 0x10);
  uStack_350 = 0x1020102;
  uStack_34c = 0x22;
  FUN_140c63b80(&local_2d8,bVar2,&local_340,&local_358);
  lVar5 = DAT_146a61ea8;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar7 = 4;
    if (DVar4 != DAT_1468c21c0) goto LAB_141cddbc6;
  }
  lVar7 = 0;
LAB_141cddbc6:
  if (*(int *)(lVar7 + lVar5) == 1) {
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uStack_338 = 0;
    uStack_334 = 0xffffffff;
    local_340._0_4_ = (undefined4)uVar1;
    local_340._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_330 = CONCAT62(local_330._2_6_,0x102);
    local_2d8 = (undefined4)local_340;
    uStack_2d4 = local_340._4_4_;
    uStack_2d0 = 0;
    uStack_2cc = 0xffffffff;
    local_218 = 1;
    local_2c8 = local_330;
    local_214 = 1;
    local_340 = uVar1;
  }
  local_137 = bVar10;
  FRHICommandListBase::CacheActiveRenderTargets(param_2,local_218,&local_2d8,local_148);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 0x54;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 0x54;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar9 + 2,&local_2d8);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(&local_2d8);
  return 1;
}



// FUNCTION 141cddcd0 FUN_141cddcd0 body=1383 status=ok
// SIG undefined FUN_141cddcd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141cddcd0(longlong param_1,longlong param_2,char param_3,char param_4,uint param_5,
                  undefined8 param_6,float *param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_4c8 [32];
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 local_498;
  undefined4 local_490;
  char local_488;
  char local_487;
  char local_486;
  longlong *local_480;
  undefined8 uStack_478;
  char local_470;
  undefined1 uStack_46f;
  undefined6 uStack_46e;
  undefined8 local_468;
  char local_460;
  byte local_45f;
  char local_45e;
  byte local_45d;
  uint local_45c;
  undefined8 local_458 [24];
  undefined4 local_398;
  longlong *local_2c8 [32];
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined2 local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined2 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined2 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined2 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined2 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined2 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  undefined8 local_c8 [4];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  local_487 = param_4;
  local_486 = param_3;
  FUN_141cd9ce0();
  local_1c8 = (longlong *)0x0;
  uStack_1c0 = 0;
  local_1b8 = local_1b8 & 0xffffffffffff0000;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_45f = (byte)(param_5 >> 1) & 1;
  uStack_1bc = 0xffffffff;
  local_1a4 = 0xffffffff;
  local_468 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
  local_18c = 0xffffffff;
  local_174 = 0xffffffff;
  local_15c = 0xffffffff;
  local_144 = 0xffffffff;
  local_12c = 0xffffffff;
  local_114 = 0xffffffff;
  local_45c = param_5;
  local_460 = param_4;
  local_45e = param_4;
  local_45d = local_45f;
  local_480 = (longlong *)FSceneRenderTargets::GetSceneColorSurface(param_1);
  local_488 = '\0';
  if (param_3 == '\x02') {
    lVar13 = *local_480;
    if (*(int *)(lVar13 + 0x20) != 0) {
      if ((((*(float *)(lVar13 + 0x24) == *param_7) && (*(float *)(lVar13 + 0x28) == param_7[1])) &&
          (*(float *)(lVar13 + 0x2c) == param_7[2])) && (*(float *)(lVar13 + 0x30) == param_7[3])) {
        *(undefined1 *)(param_1 + 0x3d3) = 1;
        goto LAB_141cddeb0;
      }
    }
    param_3 = '\0';
    local_488 = '\x01';
  }
LAB_141cddeb0:
  lVar13 = 1;
  uVar1 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x3c8)];
  if (DAT_146ac3ac0 == 0) {
LAB_141cddedd:
    cVar5 = FUN_141ee4480(uVar1);
    if (cVar5 == '\0') {
      iVar6 = FUN_141ce4cc0(param_1,param_3,&local_1c8,&local_480);
      goto LAB_141cddf4a;
    }
  }
  else {
    iVar6 = FUN_1419ef5f0(uVar1);
    if (iVar6 < 3) goto LAB_141cddedd;
  }
  iVar6 = 1;
  uStack_478 = 0xffffffff00000000;
  local_480 = (longlong *)*local_480;
  uStack_46f = 1;
  local_1b8 = CONCAT62(uStack_46e,CONCAT11(1,param_3));
  uStack_1c0 = 0;
  uStack_1bc = 0xffffffff;
  local_470 = param_3;
  local_1c8 = local_480;
LAB_141cddf4a:
  FUN_140c63b80(local_458,iVar6,&local_1c8,&local_468);
  if (local_487 == '\x02') {
    *(undefined1 *)(param_1 + 0x3d4) = 1;
  }
  local_480 = local_2c8[0];
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144dc9c70;
  puVar8[3] = local_480;
  *(uint *)(puVar8 + 2) = param_5;
  FRHICommandListBase::CacheActiveRenderTargets(param_2,local_398,local_458,local_2c8);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 0x54;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 0x54;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  uVar11 = 0;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar8 + 2,local_458);
  if (local_488 != '\0') {
    lVar14 = (longlong)iVar6;
    local_c8[0] = *(undefined8 *)param_7;
    local_c8[1] = *(undefined8 *)(param_7 + 2);
    if (1 < lVar14) {
      if (4 < lVar14) {
        plVar9 = &local_198;
        puVar7 = local_a8;
        do {
          lVar13 = lVar13 + 4;
          uVar4 = *(undefined8 *)(plVar9[-3] + 0x2c);
          lVar2 = *plVar9;
          puVar7[-2] = *(undefined8 *)(plVar9[-3] + 0x24);
          puVar7[-1] = uVar4;
          uVar4 = *(undefined8 *)(lVar2 + 0x2c);
          lVar3 = plVar9[3];
          *puVar7 = *(undefined8 *)(lVar2 + 0x24);
          puVar7[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar3 + 0x2c);
          lVar2 = plVar9[6];
          puVar7[2] = *(undefined8 *)(lVar3 + 0x24);
          puVar7[3] = uVar4;
          local_480 = *(longlong **)(lVar2 + 0x24);
          uStack_478 = *(undefined8 *)(lVar2 + 0x2c);
          puVar7[4] = local_480;
          puVar7[5] = uStack_478;
          plVar9 = plVar9 + 0xc;
          puVar7 = puVar7 + 8;
        } while (lVar13 < lVar14 + -3);
      }
      if (lVar13 < lVar14) {
        pplVar10 = &local_1c8 + lVar13 * 3;
        puVar7 = local_c8 + lVar13 * 2;
        do {
          plVar9 = *pplVar10;
          lVar13 = lVar13 + 1;
          pplVar10 = pplVar10 + 3;
          local_480 = *(longlong **)((longlong)plVar9 + 0x24);
          uStack_478 = *(undefined8 *)((longlong)plVar9 + 0x2c);
          *puVar7 = local_480;
          puVar7[1] = uStack_478;
          puVar7 = puVar7 + 2;
        } while (lVar13 < lVar14);
      }
    }
    local_490 = 0;
    local_498 = 0;
    local_4a0 = 0;
    local_4a8 = 0;
    DrawClearQuadMRT(param_2,1,iVar6,local_c8);
  }
  if ((local_486 == '\x02') || (*(char *)(param_1 + 0x3d3) == '\0')) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  if ((local_487 != '\x02') && (*(char *)(param_1 + 0x3d4) != '\0')) {
    uVar11 = 1;
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144e345f0;
  *(undefined1 *)(puVar8 + 2) = uVar12;
  *(undefined1 *)((longlong)puVar8 + 0x11) = uVar11;
  *(undefined1 *)((longlong)puVar8 + 0x12) = uVar11;
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_458);
  return;
}



// FUNCTION 141cde240 FUN_141cde240 body=525 status=ok
// SIG undefined FUN_141cde240(void)

undefined * FUN_141cde240(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  
  if (*(longlong *)(param_1 + 0x300) == 0) {
    return (undefined *)(in_RAX & 0xffffffffffffff00);
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  iVar1 = *(int *)(DAT_146a18498 + 4);
  fVar9 = 1.0 / (float)iVar1;
  if (iVar1 == 1) {
    if (*(int *)(DAT_146a184b0 + 4) != 1) {
LAB_141cde320:
      lVar6 = DAT_1464c3310;
      if (*(longlong *)(param_1 + 0x300) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x300);
      }
      puVar7 = (undefined8 *)(lVar6 + 8);
      uVar8 = 0;
      uVar10 = 0;
      goto LAB_141cde34d;
    }
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
    lVar6 = *(longlong *)(param_1 + 0x300);
    if (*(longlong *)(param_1 + 0x300) == 0) {
      lVar6 = DAT_1464c3310;
    }
  }
  else {
    if ((iVar1 != 2) || (*(int *)(DAT_146a184b0 + 4) != 1)) goto LAB_141cde320;
    lVar6 = *(longlong *)(param_1 + 0x300);
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)(DAT_1464c3310 + 8);
      uVar10 = 1;
      goto LAB_141cde34d;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + 8);
  uVar10 = 1;
LAB_141cde34d:
  FUN_141ad74f0(param_2,*puVar7,uVar8,4,uVar10,1);
  iVar1 = *(int *)(param_3 + 0x1aac);
  iVar2 = *(int *)(param_3 + 0x1aa8);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar5 + 5;
  iVar3 = *(int *)(param_3 + 0x1aa4);
  iVar4 = *(int *)(param_3 + 0x1aa0);
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar5 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f59420;
  *(int *)((longlong)puVar5 + 0x14) = (int)(longlong)((float)iVar3 * fVar9);
  *(int *)((longlong)puVar5 + 0x1c) = (int)(longlong)((float)iVar2 * fVar9);
  *(int *)(puVar5 + 4) = (int)(longlong)((float)iVar1 * fVar9);
  *(int *)(puVar5 + 2) = (int)(longlong)((float)iVar4 * fVar9);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0x3f800000;
  return &DAT_143f59401;
}



// FUNCTION 141cde450 FUN_141cde450 body=674 status=ok
// SIG undefined FUN_141cde450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cde450(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_388 [32];
  wchar_t *local_368;
  undefined1 local_360;
  undefined1 local_358;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined2 local_328;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined2 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined1 local_2e0;
  wchar_t *local_2d8;
  undefined2 local_2d0;
  undefined1 local_2c8 [192];
  undefined4 local_208;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((lVar2 == 0) || (DAT_146a9dad4 != '\0')) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_304 = (undefined4)uVar1;
    local_348._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_300 = local_348._4_4_;
    local_308 = DAT_1464c9cb0;
    local_2d8 = L"UnknownTexture2D";
    local_318 = _DAT_1464c9ca0;
    uStack_314 = uRam00000001464c9ca4;
    uStack_310 = uRam00000001464c9ca8;
    uStack_30c = uRam00000001464c9cac;
    local_2fc = 0;
    local_2f8 = 1;
    local_2f4 = 0x10000;
    local_2ec = 2;
    local_2e4 = 1;
    local_2e0 = 0;
    local_2d0 = 1;
    local_348 = uVar1;
    local_2f0 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
    local_2e8 = DAT_146a9da88;
    local_358 = 1;
    local_360 = 1;
    local_368 = L"LightAttenuation";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_318,param_1 + 0x48);
    lVar2 = *(longlong *)(param_1 + 0x48);
  }
  if (lVar2 == 0) {
    DAT_1464c2e23 = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
  if (param_3 == '\0') {
    lVar5 = lVar2;
    if (lVar2 == 0) {
      lVar5 = DAT_1464c3310;
      DAT_1464c2e22 = (char)lVar2;
    }
    local_360 = 1;
    local_368 = (wchar_t *)CONCAT44(local_368._4_4_,0x21);
    FUN_141ad74f0(param_2,*(undefined8 *)(lVar5 + 8),uVar1,0);
  }
  else {
    lVar5 = lVar2;
    if (lVar2 == 0) {
      lVar5 = DAT_1464c3310;
      DAT_1464c2e22 = (char)lVar2;
    }
    FUN_141ae34d0(param_2,*(undefined8 *)(lVar5 + 8),uVar1,0x21);
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      DAT_1464c2e22 = 0;
      lVar2 = DAT_1464c3310;
    }
    local_338 = *(undefined8 *)(lVar2 + 8);
    local_330 = 0;
    local_32c = 0xffffffff;
    local_328 = 0x102;
    local_348 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
    local_340 = 0x10001;
    local_33c = 0x21;
    FUN_140c63b80(local_2c8,1,&local_338,&local_348);
    FRHICommandListBase::CacheActiveRenderTargets(param_2,local_208,local_2c8,local_138);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 0x54;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 0x54;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar4 + 2,local_2c8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2c8);
  }
  return;
}



// FUNCTION 141cde700 FUN_141cde700 body=1051 status=ok
// SIG undefined FUN_141cde700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141cde700(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  longlong local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  longlong local_2f8 [2];
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined2 local_2e0 [4];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined2 local_2c0;
  undefined1 local_2b8 [192];
  undefined4 local_1f8;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  uVar9 = 0;
  local_2d8 = 0;
  local_2f8[0] = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
  if (local_2f8[0] != 0) {
    LOCK();
    *(int *)(local_2f8[0] + 8) = *(int *)(local_2f8[0] + 8) + 1;
    UNLOCK();
  }
  iVar5 = 0;
  if (param_3 == '\0') {
    *(undefined4 *)(param_2 + 0x98) = 1;
    local_2f8[1] = 0;
    local_2e8 = 0;
    local_2e4 = 0xffffffff;
    local_2e0[0] = 0;
    uStack_310 = 0x1010101;
    uStack_30c = 0x22;
    uVar8 = uVar9;
    do {
      uVar7 = (int)uVar8 + 1;
      lVar3 = *(longlong *)(&local_2e8 + uVar8 * 6);
      uVar2 = *(undefined8 *)(local_2e0 + uVar8 * 0xc);
      plVar1 = (longlong *)(param_2 + 0xa0 + uVar8 * 0x18);
      *plVar1 = local_2f8[uVar8 * 3 + 1];
      plVar1[1] = lVar3;
      *(undefined8 *)(param_2 + 0xb0 + uVar8 * 0x18) = uVar2;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_2 + 0x98));
    local_318._0_4_ = (undefined4)local_2f8[0];
    local_318._4_4_ = (undefined4)((ulonglong)local_2f8[0] >> 0x20);
    *(undefined4 *)(param_2 + 0x160) = (undefined4)local_318;
    *(undefined4 *)(param_2 + 0x164) = local_318._4_4_;
    *(undefined4 *)(param_2 + 0x168) = 0x1010101;
    *(undefined4 *)(param_2 + 0x16c) = 0x22;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 0x26;
    local_318 = local_2f8[0];
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x138);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 0x26;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar6 + 5) = 0;
    puVar6[6] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar6 + 8) = 0;
    puVar6[9] = 0;
    *(undefined4 *)(puVar6 + 10) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar6 + 0xb) = 0;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar6 + 0xe) = 0;
    puVar6[0xf] = 0;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar6 + 0x11) = 0;
    puVar6[0x12] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar6 + 0x14) = 0;
    puVar6[0x15] = 0;
    *(undefined4 *)(puVar6 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar6 + 0x17) = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar6 + 0x1a) = 0;
    puVar6[0x1b] = 0;
    *(undefined4 *)(puVar6 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
    uVar8 = uVar9;
    if (*(int *)(puVar6 + 2) != 0) {
      do {
        uVar7 = (int)uVar8 + 1;
        lVar3 = *(longlong *)(&local_2e8 + uVar8 * 6);
        puVar6[uVar8 * 3 + 3] = local_2f8[uVar8 * 3 + 1];
        (puVar6 + uVar8 * 3 + 3)[1] = lVar3;
        puVar6[uVar8 * 3 + 5] = *(undefined8 *)(local_2e0 + uVar8 * 0xc);
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(puVar6 + 2));
      iVar5 = *(int *)(puVar6 + 0x1d);
    }
    if (iVar5 != 0) {
      do {
        uVar7 = (int)uVar9 + 1;
        puVar6[uVar9 + 0x1e] = *(undefined8 *)(uVar9 * 8);
        uVar9 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(puVar6 + 0x1d));
    }
    *(undefined4 *)(puVar6 + 0x1b) = (undefined4)local_318;
    *(undefined4 *)((longlong)puVar6 + 0xdc) = local_318._4_4_;
    *(undefined4 *)(puVar6 + 0x1c) = uStack_310;
    *(undefined4 *)((longlong)puVar6 + 0xe4) = uStack_30c;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144e345f0;
    *(undefined2 *)(puVar6 + 2) = 0x100;
    *(undefined1 *)((longlong)puVar6 + 0x12) = 1;
  }
  else {
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c4 = 0xffffffff;
    local_2c0 = 0;
    local_300 = 0x1020102;
    local_2fc = 0x22;
    local_308 = local_2f8[0];
    FUN_140c63b80(local_2b8,1,&local_2d0,&local_308);
    FRHICommandListBase::CacheActiveRenderTargets(param_2,local_1f8,local_2b8,local_128);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 0x54;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 0x54;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar6 + 2,local_2b8);
    *(undefined1 *)(param_1 + 0x3d4) = 1;
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2b8);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_2f8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_2d8);
  return;
}



// FUNCTION 141cdeb20 FUN_141cdeb20 body=70 status=ok
// SIG undefined FUN_141cdeb20(void)

void FUN_141cdeb20(longlong param_1,undefined8 param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  FUN_141a19150(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),0,0);
  return;
}



// FUNCTION 141cdeb70 FUN_141cdeb70 body=116 status=ok
// SIG undefined FUN_141cdeb70(void)

void FUN_141cdeb70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_141cd9ce0();
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
  puVar2 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(param_1);
  FUN_141ad74f0(param_2,*puVar2,uVar1,param_3,param_4,param_5);
  return;
}



// FUNCTION 141cdebf0 FUN_141cdebf0 body=58 status=ok
// SIG undefined FUN_141cdebf0(void)

void FUN_141cdebf0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_141ad74f0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8),
                *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8),param_3,param_4,1);
  return;
}



// FUNCTION 141cdec30 FUN_141cdec30 body=964 status=ok
// SIG undefined FUN_141cdec30(void)

void FUN_141cdec30(longlong param_1,longlong param_2,longlong param_3,longlong param_4,byte param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  float fVar16;
  
  *(undefined1 *)(param_1 + 0x375) = 1;
  if (*(char *)(param_1 + 0x3d5) == '\0') {
    plVar10 = (longlong *)FUN_141ce5720(param_1,param_2,*(undefined8 *)(param_1 + 0x388));
  }
  else {
    plVar10 = (longlong *)(param_1 + 0x210);
  }
  if (1.0 < *(float *)(param_1 + 0x390) || *(float *)(param_1 + 0x390) == 1.0) {
    lVar15 = *(longlong *)(param_1 + 0x60);
  }
  else {
    plVar11 = (longlong *)FUN_141ce48e0(param_1,param_2,*(undefined8 *)(param_1 + 0x388));
    lVar15 = *plVar11;
  }
  FUN_141ad74f0(param_2,*(undefined8 *)(*plVar10 + 8),*(undefined8 *)(lVar15 + 8),
                (ulonglong)param_5 << 2,0x21,0);
  if (param_5 == 0) {
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_144e345f0;
    *(undefined2 *)(puVar14 + 2) = 1;
    *(undefined1 *)((longlong)puVar14 + 0x12) = 1;
  }
  if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
    fVar1 = *(float *)(param_1 + 0x390);
    iVar2 = *(int *)(param_3 + 0x1aa8);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    fVar16 = (float)*(int *)(param_3 + 0x1aac) * fVar1;
    iVar3 = *(int *)(param_3 + 0x1aa4);
    iVar4 = *(int *)(param_3 + 0x1aa0);
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    puVar13 = puVar14 + 1;
    *(undefined8 **)(param_2 + 8) = puVar13;
    *(int *)(puVar14 + 2) = (int)(longlong)((float)iVar4 * fVar1);
    *(int *)((longlong)puVar14 + 0x14) = (int)(longlong)((float)iVar3 * fVar1);
    *(int *)((longlong)puVar14 + 0x1c) = (int)(longlong)((float)iVar2 * fVar1);
  }
  else {
    if (*(char *)(param_3 + 0x120a) != '\0') {
      fVar1 = *(float *)(param_1 + 0x390);
      lVar15 = *(longlong *)**(longlong **)(param_3 + 0x10);
      lVar9 = ((longlong *)**(longlong **)(param_3 + 0x10))[1];
      iVar2 = *(int *)(lVar15 + 0x1aa0);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      iVar3 = *(int *)(lVar15 + 0x1aa8);
      iVar4 = *(int *)(lVar9 + 0x1aa0);
      iVar5 = *(int *)(lVar9 + 0x1aa8);
      iVar6 = *(int *)(lVar15 + 0x1aac);
      puVar13 = puVar14 + 7;
      iVar7 = *(int *)(lVar9 + 0x1aac);
      if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar14 + 7;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar13;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar14;
      *(undefined8 **)(param_2 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      ppuVar12 = &PTR_LAB_144dc9c30;
      *(int *)((longlong)puVar14 + 0x2c) = (int)(longlong)((float)iVar6 * fVar1);
      *(int *)(puVar14 + 6) = (int)(longlong)((float)iVar7 * fVar1);
      *(int *)(puVar14 + 2) = (int)(longlong)((float)iVar2 * fVar1);
      *(int *)((longlong)puVar14 + 0x14) = (int)(longlong)((float)iVar4 * fVar1);
      puVar14[3] = 0;
      *(undefined4 *)(puVar14 + 4) = 0;
      *(int *)((longlong)puVar14 + 0x24) = (int)(longlong)((float)iVar3 * fVar1);
      *(int *)(puVar14 + 5) = (int)(longlong)((float)iVar5 * fVar1);
      *(undefined4 *)((longlong)puVar14 + 0x34) = 0x3f800000;
      goto LAB_141cdefe0;
    }
    fVar1 = *(float *)(param_1 + 0x390);
    uVar8 = *(uint *)(param_4 + 0x2a4);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    fVar16 = (float)*(int *)(param_3 + 0x1aac) * fVar1;
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    puVar13 = puVar14 + 1;
    *(undefined8 **)(param_2 + 8) = puVar13;
    puVar14[2] = 0;
    *(int *)((longlong)puVar14 + 0x1c) = (int)(longlong)((float)uVar8 * fVar1);
  }
  *puVar13 = 0;
  ppuVar12 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar14 + 0x24) = 0x3f800000;
  *(int *)(puVar14 + 4) = (int)(longlong)fVar16;
  *(undefined4 *)(puVar14 + 3) = 0;
LAB_141cdefe0:
  *puVar14 = ppuVar12;
  return;
}



// FUNCTION 141cdf000 FUN_141cdf000 body=642 status=ok
// SIG undefined FUN_141cdf000(void)

void FUN_141cdf000(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 local_38 [16];
  
  FUN_141cd9ce0();
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
  puVar9 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(param_1);
  uVar13 = 0;
  FUN_141ad74f0(param_2,*puVar9,uVar6,0,0x21,1);
  if (param_5 != '\0') {
    DrawClearQuadMRT(param_2,0,1,local_38,uVar13 & 0xffffff00,0,1,0);
  }
  if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
    uVar12 = *(undefined4 *)(param_3 + 0x1aac);
    uVar1 = *(undefined4 *)(param_3 + 0x1aa8);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *(undefined4 *)(param_3 + 0x1aa4);
    uVar3 = *(undefined4 *)(param_3 + 0x1aa0);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    puVar9 = puVar11 + 1;
    *(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined4 *)(puVar11 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar11 + 0x14) = uVar2;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar1;
  }
  else {
    if (*(char *)(param_3 + 0x120a) != '\0') {
      lVar7 = *(longlong *)**(longlong **)(param_3 + 0x10);
      lVar8 = ((longlong *)**(longlong **)(param_3 + 0x10))[1];
      uVar12 = *(undefined4 *)(lVar7 + 0x1aa0);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar1 = *(undefined4 *)(lVar7 + 0x1aa8);
      uVar2 = *(undefined4 *)(lVar7 + 0x1aac);
      uVar3 = *(undefined4 *)(lVar8 + 0x1aa0);
      uVar4 = *(undefined4 *)(lVar8 + 0x1aa8);
      puVar9 = puVar11 + 7;
      uVar5 = *(undefined4 *)(lVar8 + 0x1aac);
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 7;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      ppuVar10 = &PTR_LAB_144dc9c30;
      *(undefined4 *)(puVar11 + 6) = uVar5;
      *(undefined4 *)(puVar11 + 2) = uVar12;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
      puVar11[3] = 0;
      *(undefined4 *)(puVar11 + 4) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar1;
      *(undefined4 *)(puVar11 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar2;
      *(undefined4 *)((longlong)puVar11 + 0x34) = 0x3f800000;
      goto LAB_141cdf263;
    }
    uVar12 = *(undefined4 *)(param_3 + 0x1aac);
    uVar1 = *(undefined4 *)(param_4 + 0x2a4);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    puVar9 = puVar11 + 1;
    *(undefined8 **)(param_2 + 8) = puVar9;
    puVar11[2] = 0;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar1;
  }
  *puVar9 = 0;
  ppuVar10 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  *(undefined4 *)(puVar11 + 4) = uVar12;
  *(undefined4 *)(puVar11 + 3) = 0;
LAB_141cdf263:
  *puVar11 = ppuVar10;
  return;
}



// FUNCTION 141cdf290 Bind body=505 status=ok
// SIG undefined Bind(void)

void FPostProcessPassParameters::Bind(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  FShaderResourceParameter::Bind(param_1 + 0xf4,param_2,L"BilinearTextureSampler0",0);
  FShaderResourceParameter::Bind(param_1 + 0xf8,param_2,L"BilinearTextureSampler1",0);
  FShaderParameter::Bind(param_1,param_2,L"ViewportSize",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"ViewportRect",0);
  FShaderParameter::Bind(param_1 + 0xe8,param_2,L"ScreenPosToPixel",0);
  FShaderParameter::Bind(param_1 + 0xee,param_2,L"SceneColorBufferUVViewport",0);
  uVar1 = 0;
  lVar2 = param_1 + 0xa6;
  param_1 = param_1 + 0x38;
  do {
    FString::PrintfImpl(&local_48,L"PostprocessInput%d",uVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar3 = local_48;
    }
    FShaderResourceParameter::Bind(param_1 + -0x2c,param_2,puVar3,0);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FString::PrintfImpl(&local_38,L"PostprocessInput%dSampler",uVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar3 = local_38;
    }
    FShaderResourceParameter::Bind(param_1,param_2,puVar3,0);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FString::PrintfImpl(&local_28,L"PostprocessInput%dSize",uVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar3 = local_28;
    }
    FShaderParameter::Bind(lVar2 + -0x42,param_2,puVar3);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FString::PrintfImpl(&local_18,L"PostprocessInput%dMinMax",uVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    FShaderParameter::Bind(lVar2,param_2,puVar3);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 4;
    lVar2 = lVar2 + 6;
  } while (uVar1 < 0xb);
  return;
}



// FUNCTION 141cdf490 FUN_141cdf490 body=108 status=ok
// SIG undefined FUN_141cdf490(void)

void FUN_141cdf490(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*(uint *)(param_2 + 8) >> 3 & 0x1f);
  if (iVar1 < 2) {
    FShaderUniformBufferParameter::Bind(param_1 + 8,*(undefined8 *)(param_2 + 0x18),DAT_146a63350,0)
    ;
  }
  else {
    FShaderUniformBufferParameter::Bind(param_1,*(undefined8 *)(param_2 + 0x18),DAT_146a632c0,0);
  }
  return;
}



// FUNCTION 141cdf500 FUN_141cdf500 body=120 status=ok
// SIG undefined FUN_141cdf500(void)

void FUN_141cdf500(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*(uint *)(param_1 + 8) >> 3 & 0x1f);
  if (iVar1 < 2) {
    FShaderUniformBufferParameter::Bind(param_3,*(undefined8 *)(param_1 + 0x18),DAT_146a63350,0);
  }
  else {
    FShaderUniformBufferParameter::Bind(param_2,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
  }
  return;
}



// FUNCTION 141cdf580 FUN_141cdf580 body=530 status=ok
// SIG undefined FUN_141cdf580(void)

void FUN_141cdf580(float *param_1,float param_2,float param_3,undefined8 param_4,float param_5)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auVar4 [16];
  
  uVar8 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar9 = 1.0 / (float)param_4;
  fVar7 = (float)param_4 / param_2;
  fVar7 = fVar7 + fVar7;
  *param_1 = fVar9 * param_2;
  auVar5._4_4_ = uVar8;
  auVar5._0_4_ = fVar7;
  param_1[1] = (1.0 / param_5) * param_3;
  fVar6 = param_3 * 0.5 * (1.0 / param_5);
  param_1[2] = param_2 * 0.5 * fVar9;
  param_1[3] = fVar6;
  iVar2 = (int)fVar7;
  fVar3 = fVar7;
  if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
    auVar5._8_4_ = uVar8;
    auVar5._12_4_ = uVar8;
    auVar4._8_8_ = auVar5._8_8_;
    auVar4._4_4_ = fVar7;
    auVar4._0_4_ = fVar7;
    uVar1 = movmskps(fVar6,auVar4);
    fVar3 = (float)(int)(iVar2 - (uVar1 & 1));
  }
  fVar7 = fVar7 - fVar3;
  param_1[9] = 0.0;
  fVar3 = 1.0 - fVar7;
  if (fVar7 <= 1.0 - fVar7) {
    fVar3 = fVar7;
  }
  fVar3 = 0.5 / (fVar3 * 0.16799998 + 0.666);
  fVar6 = fVar3 * 1.5;
  param_1[4] = fVar3;
  fVar7 = fVar3 * 0.5;
  param_1[5] = fVar7;
  param_1[6] = fVar6;
  param_1[7] = 0.0;
  param_1[8] = param_2 * 8.0 * fVar9;
  param_1[10] = (float)((((uint)fVar3 & 0x7fffff) >> ((&DAT_1464c2c20)[(uint)fVar3 >> 0x17] & 0x1f))
                        + (uint)(&DAT_1464c2820)[(uint)fVar3 >> 0x17] +
                       (uint)DAT_1464c2820 * 0x10000);
  param_1[0xb] = (float)(((((uint)fVar6 & 0x7fffff) >>
                          ((&DAT_1464c2c20)[(uint)fVar6 >> 0x17] & 0x1f)) +
                         (uint)(&DAT_1464c2820)[(uint)fVar6 >> 0x17]) * 0x10000 +
                         (((uint)fVar7 & 0x7fffff) >> ((&DAT_1464c2c20)[(uint)fVar7 >> 0x17] & 0x1f)
                         ) + (uint)(&DAT_1464c2820)[(uint)fVar7 >> 0x17]);
  return;
}



// FUNCTION 141cdf7a0 FUN_141cdf7a0 body=507 status=ok
// SIG undefined FUN_141cdf7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cdf7a0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (DAT_1464c9c1a != '\0') {
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if (*piVar5 < DAT_146a7fa80) {
      _Init_thread_header(&DAT_146a7fa80);
      if (DAT_146a7fa80 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_146a7fa78 =
             (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TranslucencyVolumeBlur");
        _Init_thread_footer(&DAT_146a7fa80);
      }
    }
    iVar2 = (**(code **)(*DAT_146a7fa78 + 0x68))();
    iVar7 = 0;
    lVar4 = *(longlong *)(param_1 + 0x1b8);
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      lVar4 = param_1 + 0x1a0;
    }
    lVar6 = *(longlong *)(param_1 + 0x1e0);
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar6 = param_1 + 0x1c8;
    }
    lVar9 = (ulonglong)(0 < iVar2) + 2;
    lVar3 = (longlong)param_3 * 0x18;
    puVar8 = local_68 + 1;
    do {
      iVar1 = iVar7 * 2;
      iVar7 = iVar7 + 1;
      local_68[iVar1] = *(undefined8 *)(*(longlong *)(lVar3 + lVar4) + 8);
      *puVar8 = *(undefined8 *)(*(longlong *)(lVar3 + lVar6) + 8);
      lVar9 = lVar9 + -1;
      lVar3 = lVar3 + 8;
      puVar8 = puVar8 + 2;
    } while (lVar9 != 0);
    if (*piVar5 < DAT_146a7faf0) {
      _Init_thread_header(&DAT_146a7faf0);
      if (DAT_146a7faf0 == -1) {
        _DAT_146a7fa90 = _DAT_1468b5d78;
        uRam0000000146a7fa94 = uRam00000001468b5d7c;
        uRam0000000146a7fa98 = uRam00000001468b5d80;
        uRam0000000146a7fa9c = uRam00000001468b5d84;
        _Init_thread_footer(&DAT_146a7faf0);
      }
    }
    if (iVar2 < 1) {
      FUN_141c95ff0(param_2,*(undefined4 *)(param_1 + 0x3c8),local_68,&DAT_146a7fa90);
    }
    else {
      FUN_141c96460();
    }
  }
  return;
}



// FUNCTION 141cdf9a0 Compare body=183 status=ok
// SIG undefined Compare(void)

ulonglong FPooledRenderTargetDesc::Compare(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint *)(param_2 + 0x14);
  if ((((((*(uint *)(param_1 + 0x14) == *(uint *)(param_2 + 0x14)) &&
         (uVar1 = (ulonglong)*(uint *)(param_2 + 0x18),
         *(uint *)(param_1 + 0x18) == *(uint *)(param_2 + 0x18))) &&
        (uVar1 = (ulonglong)*(uint *)(param_2 + 0x1c),
        *(uint *)(param_1 + 0x1c) == *(uint *)(param_2 + 0x1c))) &&
       (((uVar1 = 0, *(char *)(param_1 + 0x24) == *(char *)(param_2 + 0x24) &&
         (uVar1 = 0, *(char *)(param_1 + 0x25) == *(char *)(param_2 + 0x25))) &&
        ((uVar1 = (ulonglong)*(uint *)(param_2 + 0x20),
         *(uint *)(param_1 + 0x20) == *(uint *)(param_2 + 0x20) &&
         ((uVar1 = (ulonglong)*(ushort *)(param_2 + 0x26),
          *(ushort *)(param_1 + 0x26) == *(ushort *)(param_2 + 0x26) &&
          (uVar1 = (ulonglong)*(ushort *)(param_2 + 0x28),
          *(ushort *)(param_1 + 0x28) == *(ushort *)(param_2 + 0x28))))))))) &&
      (uVar1 = (ulonglong)*(uint *)(param_2 + 0x2c),
      *(uint *)(param_1 + 0x2c) == *(uint *)(param_2 + 0x2c))) &&
     ((((*(uint *)(param_1 + 0x30) & 0xffefffff) == (*(uint *)(param_2 + 0x30) & 0xffefffff) &&
       (uVar1 = (ulonglong)*(uint *)(param_2 + 0x34),
       *(uint *)(param_1 + 0x34) == *(uint *)(param_2 + 0x34))) &&
      (uVar1 = 0, *(char *)(param_1 + 0x38) == *(char *)(param_2 + 0x38))))) {
    uVar1 = FClearValueBinding::operator==(param_1,param_2);
    if (((char)uVar1 != '\0') && (uVar1 = 0, *(char *)(param_1 + 0x48) == *(char *)(param_2 + 0x48))
       ) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141cdfa60 FUN_141cdfa60 body=1047 status=ok
// SIG undefined FUN_141cdfa60(void)

uint FUN_141cdfa60(int param_1,int param_2,float param_3,uint param_4,longlong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar15 = *(float *)(DAT_146a61c90 + 4);
  fVar14 = 0.1;
  if ((0.1 <= fVar15) && (fVar14 = fVar15, 10.0 <= fVar15)) {
    fVar14 = 10.0;
  }
  fVar14 = fVar14 * param_3;
  if (*(int *)(DAT_146a615e8 + 4) == 0) {
    uVar10 = 0x20;
    if ((param_2 == 0xc) || (param_2 == 0x1b)) {
      uVar10 = 0xf;
    }
    else if (param_1 == 2) {
      uVar10 = 0x10;
    }
    else if (param_1 < 2) {
      uVar10 = 7;
    }
    if ((param_4 != 0) && (param_4 <= uVar10)) {
      uVar10 = param_4;
    }
  }
  else {
    uVar10 = 0x80;
  }
  uVar13 = 0x80;
  if (*(int *)(DAT_146a615e8 + 4) == 0) {
    uVar13 = 0x20;
    if ((param_2 == 0xc) || (param_2 == 0x1b)) {
      uVar13 = 0xf;
    }
    else if (param_1 == 2) {
      uVar13 = 0x10;
    }
    else if (param_1 < 2) {
      uVar13 = 7;
    }
    if ((param_4 != 0) && (param_4 <= uVar13)) {
      uVar13 = param_4;
    }
  }
  fVar15 = 1e-05;
  if ((1e-05 <= fVar14) && (fVar15 = (float)(uVar13 - 1), fVar14 <= (float)(uVar13 - 1))) {
    fVar15 = fVar14;
  }
  fVar14 = 0.0;
  iVar6 = -((int)ROUND(-0.5 - (fVar15 + fVar15)) >> 1);
  iVar5 = uVar10 - 1;
  if (iVar6 <= (int)(uVar10 - 1)) {
    iVar5 = iVar6;
  }
  uVar12 = 0;
  uVar10 = 0;
  iVar6 = -iVar5;
  uVar9 = uVar12;
  if (iVar6 == iVar5 || SBORROW4(iVar6,iVar5) != iVar5 * -2 < 0) {
    do {
      fVar17 = (float)iVar6;
      fVar15 = (float)NormalDistributionUnscaled();
      fVar16 = 0.0;
      if (iVar6 != iVar5) {
        fVar16 = (float)NormalDistributionUnscaled();
      }
      fVar15 = fVar16 + fVar15;
      uVar10 = (int)uVar9 + 1;
      iVar6 = iVar6 + 2;
      *(float *)(param_5 + 4 + uVar9 * 8) = fVar15;
      fVar14 = fVar14 + fVar15;
      *(float *)(param_5 + uVar9 * 8) = fVar16 / fVar15 + fVar17;
      uVar9 = (ulonglong)uVar10;
    } while (iVar6 <= iVar5);
  }
  fVar14 = 1.0 / fVar14;
  if (uVar10 != 0) {
    if (7 < uVar10) {
      uVar13 = 2;
      do {
        fVar15 = *(float *)(param_5 + 4 + (ulonglong)(uVar13 + 1) * 8);
        fVar16 = *(float *)(param_5 + 4 + (ulonglong)(uVar13 - 1) * 8);
        uVar7 = uVar13 + 5;
        fVar17 = *(float *)(param_5 + 4 + (ulonglong)uVar13 * 8);
        *(float *)(param_5 + 4 + uVar12 * 8) = *(float *)(param_5 + 4 + uVar12 * 8) * fVar14;
        uVar11 = (int)uVar12 + 8;
        uVar12 = (ulonglong)uVar11;
        *(float *)(param_5 + 4 + (ulonglong)(uVar13 - 1) * 8) = fVar16 * fVar14;
        uVar1 = uVar13 + 2;
        *(float *)(param_5 + 4 + (ulonglong)uVar13 * 8) = fVar17 * fVar14;
        uVar2 = uVar13 + 3;
        fVar16 = *(float *)(param_5 + 4 + (ulonglong)uVar2 * 8);
        *(float *)(param_5 + 4 + (ulonglong)(uVar13 + 1) * 8) = fVar15 * fVar14;
        uVar3 = uVar13 + 4;
        fVar15 = *(float *)(param_5 + 4 + (ulonglong)uVar3 * 8);
        uVar13 = uVar13 + 8;
        fVar17 = *(float *)(param_5 + 4 + (ulonglong)uVar7 * 8);
        *(float *)(param_5 + 4 + (ulonglong)uVar1 * 8) =
             *(float *)(param_5 + 4 + (ulonglong)uVar1 * 8) * fVar14;
        *(float *)(param_5 + 4 + (ulonglong)uVar2 * 8) = fVar16 * fVar14;
        *(float *)(param_5 + 4 + (ulonglong)uVar3 * 8) = fVar15 * fVar14;
        *(float *)(param_5 + 4 + (ulonglong)uVar7 * 8) = fVar17 * fVar14;
      } while (uVar11 < (uVar10 & 0xfffffff8));
    }
    uVar13 = (uint)uVar12;
    if (uVar13 < uVar10) {
      if (3 < uVar10 - uVar13) {
        lVar4 = uVar12 * 8;
        uVar7 = ((uVar10 - uVar13) - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = (ulonglong)(uVar13 + uVar7 * 4);
        pfVar8 = (float *)(param_5 + 0xc + lVar4);
        do {
          pfVar8[-2] = fVar14 * pfVar8[-2];
          *pfVar8 = fVar14 * *pfVar8;
          pfVar8[2] = fVar14 * pfVar8[2];
          pfVar8[4] = fVar14 * pfVar8[4];
          uVar9 = uVar9 - 1;
          pfVar8 = pfVar8 + 8;
        } while (uVar9 != 0);
      }
      if ((uint)uVar12 < uVar10) {
        uVar9 = (ulonglong)(uVar10 - (uint)uVar12);
        pfVar8 = (float *)(param_5 + 4 + uVar12 * 8);
        do {
          *pfVar8 = fVar14 * *pfVar8;
          uVar9 = uVar9 - 1;
          pfVar8 = pfVar8 + 2;
        } while (uVar9 != 0);
      }
    }
  }
  return uVar10;
}



// FUNCTION 141cdfe80 FUN_141cdfe80 body=791 status=ok
// SIG undefined FUN_141cdfe80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_141cdfe80(longlong param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  int local_res10;
  int iStackX_14;
  int local_res18;
  int local_res1c;
  int local_res20;
  int iStackX_24;
  
  bVar7 = 0;
  if (0 < (longlong)(int)param_3[1]) {
    lVar10 = 0;
    do {
      lVar1 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      bVar7 = bVar7 | *(byte *)(*(longlong *)(*param_3 + lVar1) + 0x1202);
    } while (lVar10 < (int)param_3[1]);
  }
  iVar3 = *(int *)(DAT_146a61e78 + 4);
  if (iVar3 < 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 3;
    if (iVar3 < 3) {
      iVar8 = iVar3;
    }
  }
  *(undefined8 *)param_2 = _DAT_1468b5ca0;
  FUN_141d694c0(&local_res10,param_3);
  iVar3 = DAT_1465351f4;
  if (iVar8 == 0) {
    *param_2 = local_res10;
    param_2[1] = iStackX_14;
  }
  else if (iVar8 == 1) {
    *param_2 = DAT_1465351f0;
    param_2[1] = iVar3;
  }
  else if (iVar8 == 2) {
    iVar3 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x378) >> 0x20);
    if (iStackX_14 <= iVar3) {
      iStackX_14 = iVar3;
    }
    iVar3 = (int)*(undefined8 *)(param_1 + 0x378);
    param_2[1] = iStackX_14;
    if (local_res10 <= iVar3) {
      local_res10 = iVar3;
    }
    *param_2 = local_res10;
  }
  if (bVar7 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a7f9e0) &&
       (_Init_thread_header(&DAT_146a7f9e0), DAT_146a7f9e0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a7f9d8 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ScreenPercentage");
      _Init_thread_footer(&DAT_146a7f9e0);
    }
    fVar11 = (float)(**(code **)(*DAT_146a7f9d8 + 0x70))();
    if (fVar11 != 100.0) {
      fVar11 = fVar11 * 0.01;
      fVar12 = 0.1;
      if ((0.1 <= fVar11) && (fVar12 = fVar11, 4.0 <= fVar11)) {
        fVar12 = 4.0;
      }
      local_res18 = -((int)ROUND(-0.5 - ((float)DAT_1465351f0 * fVar12 +
                                        (float)DAT_1465351f0 * fVar12)) >> 1);
      local_res1c = -((int)ROUND(-0.5 - ((float)DAT_1465351f4 * fVar12 +
                                        (float)DAT_1465351f4 * fVar12)) >> 1);
      QuantizeSceneBufferSize(&local_res18,&local_res20);
      iVar3 = *param_2;
      if ((local_res20 < iVar3) || (iStackX_24 < param_2[1])) {
        if (local_res20 <= iVar3) {
          iVar3 = local_res20;
        }
        *param_2 = iVar3;
        iVar3 = param_2[1];
        if (iStackX_24 <= param_2[1]) {
          iVar3 = iStackX_24;
        }
        param_2[1] = iVar3;
      }
    }
  }
  if ((DAT_1468c2184 == '\0') && (*(char *)(param_1 + 0x418) == '\0')) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x370);
    iVar3 = *param_2;
    iVar8 = param_2[1];
    iVar4 = *(int *)(param_1 + 0x354 + uVar9 * 8);
    iVar5 = *(int *)(param_1 + 0x358 + uVar9 * 8);
    iVar2 = iVar3;
    if (iVar3 <= iVar4) {
      iVar2 = iVar4;
    }
    *(int *)(param_1 + 0x354 + uVar9 * 8) = iVar2;
    iVar4 = iVar8;
    if (iVar8 <= iVar5) {
      iVar4 = iVar5;
    }
    *(int *)(param_1 + 0x358 + uVar9 * 8) = iVar4;
    if (*(int *)(param_1 + 0x36c) != *(int *)((longlong)param_3 + 0x5c)) {
      *(int *)(param_1 + 0x36c) = *(int *)((longlong)param_3 + 0x5c);
      uVar6 = (*(int *)(param_1 + 0x370) + 1U) % 3;
      *(uint *)(param_1 + 0x370) = uVar6;
      *(undefined8 *)(param_1 + 0x354 + (ulonglong)uVar6 * 8) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x354);
    if (*(int *)(param_1 + 0x354) <= iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x358);
    if (*(int *)(param_1 + 0x358) <= iVar8) {
      iVar3 = iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x35c);
    if (*(int *)(param_1 + 0x35c) <= iVar4) {
      iVar8 = iVar4;
    }
    iVar4 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) <= iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x368);
    iVar5 = *(int *)(param_1 + 0x364);
    if (*(int *)(param_1 + 0x364) <= iVar8) {
      iVar5 = iVar8;
    }
    *param_2 = iVar5;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    param_2[1] = iVar3;
  }
  return param_2;
}



// FUNCTION 141ce01a0 FUN_141ce01a0 body=185 status=ok
// SIG undefined FUN_141ce01a0(void)

ulonglong FUN_141ce01a0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    if (((*(int *)(param_1 + 0x80) != 0) && (*(int *)(param_1 + 0x84) == 0)) &&
       (*(char *)(param_1 + 0x8d) == '\0')) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      goto LAB_141ce01e5;
    }
    if (((*(int *)(param_1 + 0x7c) != 0) && (*(int *)(param_1 + 0x80) != 0)) &&
       ((*(int *)(param_1 + 0x84) != 0 && (*(char *)(param_1 + 0x8d) == '\0')))) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      goto LAB_141ce01e5;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
LAB_141ce01e5:
  uVar2 = (**(code **)(*DAT_146ab6358 + 0x260))(DAT_146ab6358,uVar3);
  if (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 8)) {
    iVar1 = (**(code **)(*DAT_146ab6358 + 0x260))();
    uVar2 = (ulonglong)(uint)(iVar1 + (int)uVar2);
  }
  return uVar2;
}



// FUNCTION 141ce0260 FUN_141ce0260 body=180 status=ok
// SIG undefined FUN_141ce0260(void)

undefined8 * FUN_141ce0260(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0);
  plVar1 = (longlong *)*plVar3;
  if (plVar1 == (longlong *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x38))(plVar1,(int)plVar3[1]);
  }
  uVar2 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar2;
  uVar2 = puVar4[3];
  param_2[2] = puVar4[2];
  param_2[3] = uVar2;
  uVar2 = puVar4[5];
  param_2[4] = puVar4[4];
  param_2[5] = uVar2;
  uVar2 = puVar4[7];
  param_2[6] = puVar4[6];
  param_2[7] = uVar2;
  uVar2 = puVar4[9];
  param_2[8] = puVar4[8];
  param_2[9] = uVar2;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = &DAT_144e29f90;
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xac);
  *(int *)(param_2 + 3) = (int)param_1[0x16];
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da54;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10000;
  }
  return param_2;
}



// FUNCTION 141ce0320 ComputeOutputDesc body=167 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessUpscale::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0);
  plVar1 = (longlong *)*plVar3;
  if (plVar1 == (longlong *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x38))(plVar1,(int)plVar3[1]);
  }
  uVar2 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar2;
  uVar2 = puVar4[3];
  param_2[2] = puVar4[2];
  param_2[3] = uVar2;
  uVar2 = puVar4[5];
  param_2[4] = puVar4[4];
  param_2[5] = uVar2;
  uVar2 = puVar4[7];
  param_2[6] = puVar4[6];
  param_2[7] = uVar2;
  uVar2 = puVar4[9];
  param_2[8] = puVar4[8];
  param_2[9] = uVar2;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"Upscale";
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xcc);
  *(int *)(param_2 + 3) = (int)param_1[0x1a];
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da54;
  return param_2;
}



// FUNCTION 141ce03d0 ComputeOutputDesc body=128 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessVisualizeBuffer::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0);
  plVar1 = (longlong *)*plVar6;
  if (plVar1 == (longlong *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*plVar1 + 0x38))(plVar1,(int)plVar6[1]);
  }
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *param_2 = *puVar7;
  param_2[1] = uVar2;
  uVar2 = puVar7[4];
  uVar5 = puVar7[5];
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar3 = puVar7[6];
  uVar4 = puVar7[7];
  param_2[4] = uVar2;
  param_2[5] = uVar5;
  uVar2 = puVar7[8];
  uVar5 = puVar7[9];
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  param_2[8] = uVar2;
  param_2[9] = uVar5;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"VisualizeBuffer";
  return param_2;
}



// FUNCTION 141ce0450 ComputeOutputDesc body=230 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessWeightedSampleSum::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  
  plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0);
  plVar1 = (longlong *)*plVar12;
  if (plVar1 == (longlong *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar13 = (undefined8 *)(**(code **)(*plVar1 + 0x38))(plVar1,(int)plVar12[1]);
  }
  uVar6 = puVar13[1];
  uVar7 = puVar13[2];
  uVar8 = puVar13[3];
  *param_2 = *puVar13;
  param_2[1] = uVar6;
  uVar6 = puVar13[4];
  uVar9 = puVar13[5];
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  uVar7 = puVar13[6];
  uVar8 = puVar13[7];
  param_2[4] = uVar6;
  param_2[5] = uVar9;
  uVar2 = *(undefined4 *)(puVar13 + 8);
  uVar3 = *(undefined4 *)((longlong)puVar13 + 0x44);
  uVar4 = *(undefined4 *)(puVar13 + 9);
  uVar5 = *(undefined4 *)((longlong)puVar13 + 0x4c);
  param_2[6] = uVar7;
  param_2[7] = uVar8;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar3;
  *(undefined4 *)(param_2 + 9) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar5;
  cVar10 = DoFastBlur(param_1);
  if (cVar10 != '\0') {
    if ((int)param_1[0x17] == 0) {
      iVar11 = (*(int *)((longlong)param_2 + 0x14) + 1) / 2;
    }
    else {
      iVar11 = *(int *)((longlong)param_2 + 0x14) * 2;
    }
    *(int *)((longlong)param_2 + 0x14) = iVar11;
  }
  cVar10 = *(char *)((longlong)param_1 + 10);
  param_2[8] = param_1[0x1b];
  uVar14 = 1;
  if (cVar10 != '\0') {
    uVar14 = 0x10000;
  }
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0xffefffff;
  *(uint *)((longlong)param_2 + 0x34) = uVar14 | *(uint *)((longlong)param_2 + 0x34) & 0xfffefffe;
  *param_2 = 1;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 141ce0540 FUN_141ce0540 body=252 status=ok
// SIG undefined FUN_141ce0540(void)

undefined8 * FUN_141ce0540(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf490((undefined4 *)((longlong)puVar1 + 0x1bc),param_1);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"UpscaleSoftness",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),
               L"SceneColorBilinearUVMinMax",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0640 FUN_141ce0640 body=245 status=ok
// SIG undefined FUN_141ce0640(void)

undefined8 * FUN_141ce0640(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e34368;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf490((undefined4 *)((longlong)puVar1 + 0x1bc),param_1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"PostprocessInput0",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x3a,*(undefined8 *)(param_1 + 0x18),L"PostprocessInput0Sampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0740 FUN_141ce0740 body=175 status=ok
// SIG undefined FUN_141ce0740(void)

undefined8 * FUN_141ce0740(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e34368;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf490((undefined4 *)((longlong)puVar1 + 0x1bc),param_1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce07f0 FUN_141ce07f0 body=46 status=ok
// SIG undefined FUN_141ce07f0(void)

void FUN_141ce07f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf0);
  if (lVar1 != 0) {
    FUN_141cd4a40(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141ce0820 FUN_141ce0820 body=46 status=ok
// SIG undefined FUN_141ce0820(void)

void FUN_141ce0820(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf0);
  if (lVar1 != 0) {
    TFilterCS<0,1,0>::TFilterCS<0,1,0>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141ce0850 FUN_141ce0850 body=46 status=ok
// SIG undefined FUN_141ce0850(void)

void FUN_141ce0850(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf0);
  if (lVar1 != 0) {
    TFilterPS<1,1,1>::TFilterPS<1,1,1>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141ce0880 FUN_141ce0880 body=46 status=ok
// SIG undefined FUN_141ce0880(void)

void FUN_141ce0880(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf0);
  if (lVar1 != 0) {
    TFilterPS<0,1,1>::TFilterPS<0,1,1>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141ce08b0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TFilterVS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SampleOffsets",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0920 FUN_141ce0920 body=225 status=ok
// SIG undefined FUN_141ce0920(void)

undefined8 * FUN_141ce0920(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e33438;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderUniformBufferParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"CasUniformParameters",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1c4,*(undefined8 *)(param_1 + 0x18),L"CasOutputUav",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0a10 FUN_141ce0a10 body=186 status=ok
// SIG undefined FUN_141ce0a10(void)

undefined8 * FUN_141ce0a10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e33650;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderUniformBufferParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"CasUniformParameters",0);
    *puVar1 = &PTR__scalar_deleting_destructor__144e33650;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0ad0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessUpscaleVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"PaniniParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0b40 FUN_141ce0b40 body=46 status=ok
// SIG undefined FUN_141ce0b40(void)

void FUN_141ce0b40(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x210);
  if (lVar1 != 0) {
    FPostProcessVisualizeHDRPS::FPostProcessVisualizeHDRPS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141ce0b70 ConstructCompiledInstance body=336 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FVisualizeComplexityApplyPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e33a78;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"ShaderComplexityColors",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"MiniFontTexture",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c6,*(undefined8 *)(param_1 + 0x18),L"ShaderComplexityParams",0)
    ;
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"ShaderComplexityParams2",0
              );
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"QuadOverdrawTexture",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0cc0 ConstructSerializedInstance body=116 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessVisualizeBufferPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e34368;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0d40 FUN_141ce0d40 body=107 status=ok
// SIG undefined FUN_141ce0d40(void)

undefined8 * FUN_141ce0d40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e333d8;
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



// FUNCTION 141ce0db0 FUN_141ce0db0 body=107 status=ok
// SIG undefined FUN_141ce0db0(void)

undefined8 * FUN_141ce0db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e33408;
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



// FUNCTION 141ce0e20 FUN_141ce0e20 body=96 status=ok
// SIG undefined FUN_141ce0e20(void)

undefined8 * FUN_141ce0e20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e33438;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0e80 FUN_141ce0e80 body=90 status=ok
// SIG undefined FUN_141ce0e80(void)

undefined8 * FUN_141ce0e80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144e33650;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0ee0 FUN_141ce0ee0 body=36 status=ok
// SIG undefined FUN_141ce0ee0(void)

void FUN_141ce0ee0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x210);
  if (lVar1 != 0) {
    FPostProcessVisualizeHDRPS::FPostProcessVisualizeHDRPS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141ce0f10 ConstructSerializedInstance body=99 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FVisualizeComplexityApplyPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e33a78;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1d4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ce0f80 FUN_141ce0f80 body=191 status=ok
// SIG undefined FUN_141ce0f80(void)

undefined8 FUN_141ce0f80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  undefined *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = &DAT_14060d670;
  lVar2 = FUN_1415d8310(&local_18,&DAT_146216a38);
  lVar2 = operator_new(0x448,lVar2 + 0x18,1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_141cd77d0(lVar2,param_2,param_1);
  }
  iVar1 = *(int *)(param_1 + 0x410);
  *(int *)(param_1 + 0x410) = iVar1 + 1;
  if (*(int *)(param_1 + 0x414) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x408,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x408) + (longlong)iVar1 * 8) = uVar3;
  return uVar3;
}



// FUNCTION 141ce1040 FUN_141ce1040 body=288 status=ok
// SIG undefined FUN_141ce1040(void)

void FUN_141ce1040(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)*param_3;
  plVar6 = (longlong *)0x0;
  *param_3 = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = (longlong *)operator_new(0xd0);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144e34798;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    lVar3 = param_2[1];
    plVar5[0xd] = *param_2;
    plVar5[0xe] = lVar3;
    lVar3 = param_2[3];
    plVar5[0xf] = param_2[2];
    plVar5[0x10] = lVar3;
    lVar3 = param_2[5];
    plVar5[0x11] = param_2[4];
    plVar5[0x12] = lVar3;
    lVar3 = param_2[7];
    plVar5[0x13] = param_2[6];
    plVar5[0x14] = lVar3;
    lVar3 = param_2[8];
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x44);
    lVar4 = param_2[9];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined1 *)(plVar5 + 0x17) = 0;
    plVar5[0x18] = 0;
    *(int *)(plVar5 + 0x15) = (int)lVar3;
    *(undefined4 *)((longlong)plVar5 + 0xac) = uVar1;
    *(int *)(plVar5 + 0x16) = (int)lVar4;
    *(undefined4 *)((longlong)plVar5 + 0xb4) = uVar2;
    *(undefined4 *)(plVar5 + 0x19) = 0xffffffff;
    *(undefined4 *)((longlong)plVar5 + 0xcc) = 0;
    plVar6 = plVar5;
  }
  FSceneRenderTargetItem::operator=(plVar6 + 1,param_4);
  plVar5 = (longlong *)*param_3;
  *param_3 = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5);
  }
  return;
}



// FUNCTION 141ce1160 FUN_141ce1160 body=185 status=ok
// SIG undefined FUN_141ce1160(void)

void FUN_141ce1160(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x410) == 0) {
    return;
  }
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x408);
  uVar2 = (longlong)*(int *)(param_1 + 0x410) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x410) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,0);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x414)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x408),0);
  }
  FUN_141ce1220(&PTR_PTR_1464c2560);
  return;
}



// FUNCTION 141ce1220 FUN_141ce1220 body=150 status=ok
// SIG undefined FUN_141ce1220(void)

void FUN_141ce1220(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x138);
  uVar2 = (longlong)*(int *)(param_1 + 0x140) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x140) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,0);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x144)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x138),0);
  }
  return;
}



// FUNCTION 141ce12c0 DoFastBlur body=220 status=ok
// SIG undefined DoFastBlur(void)

bool FRCPassPostProcessWeightedSampleSum::DoFastBlur(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    return false;
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0);
  if ((plVar5 != (longlong *)0x0) && (plVar3 = (longlong *)*plVar5, plVar3 != (longlong *)0x0)) {
    lVar6 = (**(code **)(*plVar3 + 0x38))(plVar3,(int)plVar5[1]);
    if (lVar6 != 0) goto LAB_141ce12fe;
  }
  lVar6 = 0;
LAB_141ce12fe:
  if ((int)param_1[0x17] == 0) {
    iVar2 = *(int *)(lVar6 + 0x14);
    fVar1 = *(float *)(param_1 + 0x18);
    cVar4 = FUN_1415bac00();
    pfVar7 = DAT_146a61cd8;
    if (cVar4 != '\0') {
      pfVar7 = DAT_146a61cd8 + 1;
    }
    return *pfVar7 <= (float)iVar2 * fVar1 * 0.02;
  }
  return (float)(int)*(undefined8 *)(lVar6 + 0x14) /
         (float)(int)((ulonglong)*(undefined8 *)(lVar6 + 0x14) >> 0x20) <
         ((float)(int)DAT_146a622a8 / (float)(int)((ulonglong)DAT_146a622a8 >> 0x20)) * 0.75;
}



// FUNCTION 141ce13a0 FUN_141ce13a0 body=744 status=ok
// SIG undefined FUN_141ce13a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ce13a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,longlong param_12,
                  int param_13,char param_14,undefined4 param_15)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined4 *puVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if ((param_14 == '\0') || (param_13 == 0)) {
    FUN_141ca7700(param_1,in_RDX,in_R8,in_R9,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_15,1);
  }
  else {
    local_34 = param_5;
    iVar3 = 0;
    fStack_c = 1.0 / (float)param_11._4_4_;
    local_28 = param_8;
    uStack_24 = param_9;
    uStack_20 = param_6;
    uStack_1c = param_7;
    fStack_10 = 1.0 / (float)(int)param_11;
    local_18 = 1.0 / (float)(int)param_10;
    fStack_14 = 1.0 / (float)param_10._4_4_;
    local_38 = param_4;
    local_30 = param_2;
    local_2c = param_3;
    if (0 < *(int *)(param_12 + 0x10)) {
      lVar1 = 0;
      do {
        if (*(undefined **)(*(longlong *)(param_12 + 8) + lVar1 * 8) == &DAT_146a61da0) {
          if (iVar3 != -1) {
            puVar4 = *(undefined4 **)(*(longlong *)(param_12 + 0x18) + (longlong)iVar3 * 8);
            *puVar4 = *(undefined4 *)(param_12 + 0xb8);
            goto LAB_141ce1502;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_12 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146a7fb30) {
      _Init_thread_header(&DAT_146a7fb30);
      if (DAT_146a7fb30 == -1) {
        _DAT_146a7fb28 = 0;
        _DAT_146a7fb2c = 0;
        DAT_146a7fb2e = 0;
        _Init_thread_footer(&DAT_146a7fb30);
      }
    }
    puVar4 = (undefined4 *)&DAT_146a7fb28;
LAB_141ce1502:
    lVar1 = *(longlong *)(param_12 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    FUN_141cd47e0(param_1,*(undefined8 *)(lVar1 + 0x38),puVar4,&local_38);
    lVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
      (**(code **)(*plVar2 + 0x110))(plVar2,param_1,param_13);
      return;
    }
  }
  return;
}



// FUNCTION 141ce1690 DrawRectangle body=148 status=ok
// SIG undefined DrawRectangle(void)

void DrawRectangle(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14)

{
  FUN_141ca7700(param_5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14);
  return;
}



// FUNCTION 141ce1730 FUN_141ce1730 body=1675 status=ok
// SIG undefined FUN_141ce1730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ce1730(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float *param_6,float param_7,float param_8,float param_9,float param_10,
                  undefined1 (*param_11) [16],undefined8 param_12,undefined8 param_13)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 unaff_XMM12 [16];
  float fVar28;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined *local_1e0;
  undefined4 local_1d8;
  float *local_1d0;
  undefined4 local_1c8;
  float local_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  fVar22 = param_6[4];
  fVar24 = param_6[5];
  fVar8 = param_6[6];
  fVar9 = param_6[7];
  fVar25 = *param_6;
  fVar26 = param_6[1];
  fVar11 = param_6[2];
  fVar12 = param_6[3];
  fVar27 = param_6[0xc];
  fVar28 = param_6[0xd];
  fVar13 = param_6[0xe];
  fVar14 = param_6[0xf];
  fVar2 = param_6[8];
  fVar3 = param_6[9];
  fVar15 = param_6[10];
  fVar16 = param_6[0xb];
  local_168 = param_2 * fVar25 + param_3 * fVar22 + fVar27 * 1.0 + fVar2 * 0.0;
  fStack_164 = param_2 * fVar26 + param_3 * fVar24 + fVar28 * 1.0 + fVar3 * 0.0;
  fStack_160 = param_2 * fVar11 + param_3 * fVar8 + fVar13 * 1.0 + fVar15 * 0.0;
  fStack_15c = param_2 * fVar12 + param_3 * fVar9 + fVar14 * 1.0 + fVar16 * 0.0;
  param_4 = param_2 + param_4;
  param_5 = param_3 + param_5;
  local_178 = param_4 * fVar25 + param_3 * fVar22 + fVar27 * 1.0 + fVar2 * 0.0;
  fStack_174 = param_4 * fVar26 + param_3 * fVar24 + fVar28 * 1.0 + fVar3 * 0.0;
  fStack_170 = param_4 * fVar11 + param_3 * fVar8 + fVar13 * 1.0 + fVar15 * 0.0;
  fStack_16c = param_4 * fVar12 + param_3 * fVar9 + fVar14 * 1.0 + fVar16 * 0.0;
  auVar17 = *param_11;
  fVar4 = *(float *)param_11[3];
  fVar5 = *(float *)(param_11[3] + 4);
  local_188 = param_2 * fVar25 + param_5 * fVar22 + fVar27 * 1.0 + fVar2 * 0.0;
  fStack_184 = param_2 * fVar26 + param_5 * fVar24 + fVar28 * 1.0 + fVar3 * 0.0;
  fStack_180 = param_2 * fVar11 + param_5 * fVar8 + fVar13 * 1.0 + fVar15 * 0.0;
  fStack_17c = param_2 * fVar12 + param_5 * fVar9 + fVar14 * 1.0 + fVar16 * 0.0;
  fVar6 = *(float *)param_11[2];
  fVar7 = *(float *)(param_11[2] + 4);
  auVar23 = param_11[1];
  fStack_e0 = param_4 * fVar11 + param_5 * fVar8 + fVar15 * 0.0 + fVar13 * 1.0;
  fStack_dc = param_4 * fVar12 + param_5 * fVar9 + fVar16 * 0.0 + fVar14 * 1.0;
  fVar8 = auVar17._0_4_;
  fVar11 = auVar17._4_4_;
  fVar15 = auVar23._0_4_;
  fVar18 = auVar23._4_4_;
  local_138 = param_7 * fVar8 + param_8 * fVar15 + fVar6 * 0.0 + fVar4 * 1.0;
  local_134 = param_7 * fVar11 + param_8 * fVar18 + fVar7 * 0.0 + fVar5 * 1.0;
  _local_198 = CONCAT44(local_134,local_138);
  _fStack_190 = CONCAT44(param_7 * auVar17._12_4_ + param_8 * auVar23._12_4_ +
                         *(float *)(param_11[2] + 0xc) * 0.0 + *(float *)(param_11[3] + 0xc) * 1.0,
                         param_7 * auVar17._8_4_ + param_8 * auVar23._8_4_ +
                         *(float *)(param_11[2] + 8) * 0.0 + *(float *)(param_11[3] + 8) * 1.0);
  param_9 = param_7 + param_9;
  fStack_1b4 = param_8 + param_10;
  local_1a8 = 0;
  local_1b8 = param_7;
  local_158._0_4_ = param_9 * fVar8 + param_8 * fVar15 + fVar6 * 0.0 + fVar4 * 1.0;
  local_158._4_4_ = param_9 * fVar11 + param_8 * fVar18 + fVar7 * 0.0 + fVar5 * 1.0;
  local_158._8_4_ =
       param_9 * auVar17._8_4_ + param_8 * auVar23._8_4_ +
       *(float *)(param_11[2] + 8) * 0.0 + *(float *)(param_11[3] + 8) * 1.0;
  local_158._12_4_ =
       param_9 * auVar17._12_4_ + param_8 * auVar23._12_4_ +
       *(float *)(param_11[2] + 0xc) * 0.0 + *(float *)(param_11[3] + 0xc) * 1.0;
  uStack_1b0 = 0;
  uStack_1ac = 0x3f800000;
  auVar10._4_4_ = (float)(int)param_12;
  auVar10._0_4_ = (float)(int)param_12;
  auVar10._8_4_ = (float)(int)param_12;
  auVar10._12_4_ = (float)(int)param_12;
  auVar10 = rcpps(auVar17,auVar10);
  auVar17._4_4_ = (float)param_12._4_4_;
  auVar17._0_4_ = (float)param_12._4_4_;
  auVar17._8_4_ = (float)param_12._4_4_;
  auVar17._12_4_ = (float)param_12._4_4_;
  auVar17 = rcpps(auVar23,auVar17);
  fVar9 = auVar10._0_4_;
  fVar12 = auVar10._4_4_;
  fVar13 = auVar10._8_4_;
  fVar14 = auVar10._12_4_;
  auVar23._4_4_ = (float)(int)param_13;
  auVar23._0_4_ = (float)(int)param_13;
  auVar23._8_4_ = (float)(int)param_13;
  auVar23._12_4_ = (float)(int)param_13;
  auVar23 = rcpps(local_158,auVar23);
  auVar1._4_4_ = (float)param_13._4_4_;
  auVar1._0_4_ = (float)param_13._4_4_;
  auVar1._8_4_ = (float)param_13._4_4_;
  auVar1._12_4_ = (float)param_13._4_4_;
  auVar10 = rcpps(unaff_XMM12,auVar1);
  local_1d0 = &local_148;
  fVar16 = auVar17._0_4_;
  fVar19 = auVar17._4_4_;
  fVar20 = auVar17._8_4_;
  fVar21 = auVar17._12_4_;
  local_1c8 = 0x20;
  local_148 = ((fVar9 + fVar9) - fVar9 * fVar9 * (float)(int)param_12) * local_168 * 2.0 - 1.0;
  local_128 = ((fVar12 + fVar12) - fVar12 * fVar12 * (float)(int)param_12) * local_178 * 2.0 - 1.0;
  local_108 = ((fVar13 + fVar13) - fVar13 * fVar13 * (float)(int)param_12) * local_188 * 2.0 - 1.0;
  local_e8 = ((fVar14 + fVar14) - fVar14 * fVar14 * (float)(int)param_12) *
             (param_4 * fVar25 + param_5 * fVar22 + fVar2 * 0.0 + fVar27 * 1.0) * 2.0 - 1.0;
  fStack_144 = (1.0 - ((fVar16 + fVar16) - fVar16 * fVar16 * (float)param_12._4_4_) *
                      fStack_164 * 2.0) * DAT_1464c9c24;
  fStack_124 = (1.0 - ((fVar19 + fVar19) - fVar19 * fVar19 * (float)param_12._4_4_) *
                      fStack_174 * 2.0) * DAT_1464c9c24;
  fStack_104 = (1.0 - ((fVar20 + fVar20) - fVar20 * fVar20 * (float)param_12._4_4_) *
                      fStack_184 * 2.0) * DAT_1464c9c24;
  fStack_e4 = (1.0 - ((fVar21 + fVar21) - fVar21 * fVar21 * (float)param_12._4_4_) *
                     (param_4 * fVar26 + param_5 * fVar24 + fVar3 * 0.0 + fVar28 * 1.0) * 2.0) *
              DAT_1464c9c24;
  fVar22 = auVar23._0_4_;
  fVar24 = auVar23._4_4_;
  fVar9 = auVar23._8_4_;
  fVar25 = auVar23._12_4_;
  fVar26 = auVar10._0_4_;
  fVar12 = auVar10._4_4_;
  fVar27 = auVar10._8_4_;
  fVar28 = auVar10._12_4_;
  local_138 = ((fVar22 + fVar22) - fVar22 * fVar22 * (float)(int)param_13) * local_138;
  local_118 = ((fVar24 + fVar24) - fVar24 * fVar24 * (float)(int)param_13) * local_158._0_4_;
  local_f8 = ((fVar9 + fVar9) - fVar9 * fVar9 * (float)(int)param_13) *
             (param_7 * fVar8 + fStack_1b4 * fVar15 + fVar6 * 0.0 + fVar4 * 1.0);
  local_d8 = ((fVar25 + fVar25) - fVar25 * fVar25 * (float)(int)param_13) *
             (param_9 * fVar8 + fStack_1b4 * fVar15 + fVar6 * 0.0 + fVar4 * 1.0);
  local_134 = ((fVar26 + fVar26) - fVar26 * fVar26 * (float)param_13._4_4_) * local_134;
  local_114 = ((fVar12 + fVar12) - fVar12 * fVar12 * (float)param_13._4_4_) * local_158._4_4_;
  local_f4 = ((fVar27 + fVar27) - fVar27 * fVar27 * (float)param_13._4_4_) *
             (param_7 * fVar11 + fStack_1b4 * fVar18 + fVar7 * 0.0 + fVar5 * 1.0);
  local_d4 = ((fVar28 + fVar28) - fVar28 * fVar28 * (float)param_13._4_4_) *
             (param_9 * fVar11 + fStack_1b4 * fVar18 + fVar7 * 0.0 + fVar5 * 1.0);
  local_1d8 = 2;
  local_1e0 = &DAT_144e349c8;
  local_1e8 = 2;
  fStack_140 = fStack_160;
  fStack_13c = fStack_15c;
  fStack_120 = fStack_170;
  fStack_11c = fStack_16c;
  fStack_100 = fStack_180;
  fStack_fc = fStack_17c;
  FUN_141abae60(param_1,0,0,4);
  return;
}



// FUNCTION 141ce1dc0 FUN_141ce1dc0 body=412 status=ok
// SIG undefined FUN_141ce1dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ce1dc0(void)

{
  undefined8 *puVar1;
  char cVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res18);
    _DAT_146a61380 = 1;
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res18._0_4_);
    return;
  }
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  plVar8 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar8 = plVar5;
    }
    TlsSetValue(*pDVar4,plVar8);
    plVar5 = plVar8;
  }
  plVar8 = (longlong *)plVar5[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar5;
    if (plVar8 == (longlong *)0x0) {
      lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
      plVar5[1] = lVar6;
      if (lVar6 == 0) {
        puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar5[1] = (longlong)puVar7;
        lVar6 = 0x1f;
        do {
          puVar1 = puVar7 + 0x20;
          *puVar7 = puVar1;
          lVar6 = lVar6 + -1;
          puVar7 = puVar1;
        } while (lVar6 != 0);
        *puVar1 = 0;
      }
      plVar8 = (longlong *)plVar5[1];
      iVar9 = 0x20;
      *(undefined4 *)(plVar5 + 2) = 0x20;
    }
    else {
      iVar9 = 0x20;
      plVar5[1] = (longlong)plVar8;
      *(undefined4 *)(plVar5 + 2) = 0x20;
      *plVar5 = 0;
    }
  }
  else {
    iVar9 = (int)plVar5[2];
  }
  plVar5[1] = *plVar8;
  local_res20 = 0;
  *(int *)(plVar5 + 2) = iVar9 + -1;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
  *plVar8 = (longlong)&PTR_FUN_144e34308;
  *(undefined1 *)((longlong)plVar8 + 0x11) = 0;
  plVar8[3] = 0;
  FUN_140445370(plVar8,0,0xff,1,0);
  return;
}



// FUNCTION 141ce1f60 Empty body=264 status=ok
// SIG undefined Empty(void)

void TArray<TRefCountPtr<FVulkanBufferView>,FDefaultAllocator>::Empty
               (undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = (longlong *)*param_1;
  for (iVar7 = *(int *)(param_1 + 1); iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = (undefined8 *)*plVar8;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar9 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar9) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar9) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    plVar8 = plVar8 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141ce20b0 FUN_141ce20b0 body=3366 status=ok
// SIG undefined FUN_141ce20b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141ce20b0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,longlong param_5
             ,char param_6,char param_7)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ushort uVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  uint local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  longlong *local_190;
  uint local_188;
  int local_178 [2];
  int local_170 [2];
  longlong local_168;
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  short local_80;
  ulonglong local_7c;
  uint local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  sVar1 = (short)param_3[5];
  local_168 = param_5;
  if (((sVar1 != 1) &&
      ((((7 < (ushort)(sVar1 - 1U) || (*(int *)((longlong)param_3 + 0x14) == 0)) ||
        ((int)param_3[3] == 0)) ||
       ((*(int *)((longlong)param_3 + 0x1c) != 0 || (*(char *)((longlong)param_3 + 0x25) != '\0'))))
      )) || ((*(int *)((longlong)param_3 + 0x14) == 0 ||
             (((*(short *)((longlong)param_3 + 0x26) == 0 || (0xf < (ushort)(sVar1 - 1U))) ||
              ((*(int *)((longlong)param_3 + 0x2c) == 0 ||
               ((uVar19 = *(uint *)((longlong)param_3 + 0x34), (uVar19 >> 0x10 & 1) != 0 &&
                (DAT_1464c9c14 != 3)))))))))) {
    return 1;
  }
  local_a8 = 1;
  local_88 = 1;
  local_80 = 1;
  local_68 = L"UnknownTexture";
  lStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_7c = 0;
  local_74 = 0;
  local_70 = 0;
  local_60 = 1;
  if ((((DAT_146ab62f3 == '\0') || (iVar9 = *(int *)(DAT_146a61d50 + 4), iVar9 < 1)) ||
      ((uVar19 & 0x10005) == 0)) || (uVar18 = *(uint *)(param_3 + 6), (int)uVar18 < 0)) {
LAB_141ce2214:
    bVar20 = false;
  }
  else {
    if (iVar9 == 1) {
      if ((uVar18 >> 0x14 & 1) == 0) goto LAB_141ce2214;
    }
    else {
      if (iVar9 == 2) {
        if ((uVar18 >> 0x14 & 1) != 0) goto LAB_141ce22b6;
        bVar20 = param_7 == '\x01';
      }
      else {
        bVar20 = iVar9 == 3;
      }
      if (!bVar20) goto LAB_141ce2214;
    }
LAB_141ce22b6:
    local_a8 = *param_3;
    lStack_a0 = param_3[1];
    local_98 = param_3[2];
    local_90 = param_3[3];
    local_70 = (undefined1)param_3[7];
    local_68 = (wchar_t *)param_3[8];
    local_60 = (undefined2)param_3[9];
    bVar20 = true;
    local_88 = CONCAT26(*(short *)((longlong)param_3 + 0x26),(int6)param_3[4]);
    local_7c = CONCAT44(uVar18,*(int *)((longlong)param_3 + 0x2c)) | 0x8000000000000000;
    local_80 = sVar1;
    local_74 = uVar19;
  }
  plVar12 = (longlong *)*param_4;
  plVar17 = &local_a8;
  if (!bVar20) {
    plVar17 = param_3;
  }
  local_108 = param_4;
  local_100 = param_2;
  if (plVar12 != (longlong *)0x0) {
    uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
    cVar8 = FPooledRenderTargetDesc::Compare(uVar10,plVar17,1);
    if (cVar8 != '\0') {
      plVar12[0x15] = param_5;
      (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,plVar12[1],param_5);
      return 1;
    }
    plVar4 = (longlong *)*param_4;
    *param_4 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))();
    }
    if (((char)plVar12[0x17] == '\0') && ((int)plVar12[0xc] == 1)) {
      iVar9 = (**(code **)(*plVar12 + 0x20))(plVar12);
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) - (iVar9 + 0x3ffU >> 10);
      iVar9 = FUN_141ce2de0(param_1,plVar12);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar9 * 8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar9 * 8) = 0;
      if (lVar11 != 0) {
        FUN_141cf2980();
      }
    }
  }
  local_170[0] = *(int *)(DAT_146a61d38 + 4);
  local_178[0] = 0;
  do {
    uVar18 = 0;
    uVar19 = *(uint *)(param_1 + 0x110);
    if (uVar19 != 0) {
      do {
        plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x108) + (longlong)(int)uVar18 * 8);
        if (((plVar12 != (longlong *)0x0) && ((char)plVar12[0x17] == '\0')) &&
           ((int)plVar12[0xc] == 1)) {
          lVar11 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar2 = *(uint *)(plVar17 + 6);
          if ((((*(int *)(lVar11 + 0x14) == *(int *)((longlong)plVar17 + 0x14)) &&
               (*(int *)(lVar11 + 0x18) == (int)plVar17[3])) &&
              (*(int *)(lVar11 + 0x1c) == *(int *)((longlong)plVar17 + 0x1c))) &&
             ((((*(char *)(lVar11 + 0x24) == *(char *)((longlong)plVar17 + 0x24) &&
                (*(char *)(lVar11 + 0x25) == *(char *)((longlong)plVar17 + 0x25))) &&
               ((((*(int *)(lVar11 + 0x20) == (int)plVar17[4] &&
                  ((*(short *)(lVar11 + 0x26) == *(short *)((longlong)plVar17 + 0x26) &&
                   (*(short *)(lVar11 + 0x28) == (short)plVar17[5])))) &&
                 (*(int *)(lVar11 + 0x2c) == *(int *)((longlong)plVar17 + 0x2c))) &&
                (((((*(uint *)(lVar11 + 0x30) & 0xffefffff) == (uVar2 & 0xffefffff) &&
                   (*(int *)(lVar11 + 0x34) == *(int *)((longlong)plVar17 + 0x34))) &&
                  (*(char *)(lVar11 + 0x38) == (char)plVar17[7])) &&
                 ((cVar8 = FClearValueBinding::operator==(lVar11,plVar17), cVar8 != '\0' &&
                  (*(char *)(lVar11 + 0x48) == (char)plVar17[9])))))))) &&
              ((-1 < (int)uVar2 ||
               ((local_170[0] != 0 || (iVar9 = (**(code **)(*plVar12 + 0x50))(plVar12), iVar9 == 0))
               )))))) {
            bVar20 = true;
            goto LAB_141ce2c83;
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar19);
    }
    local_178[0] = local_178[0] + 1;
  } while (local_178[0] == 0);
  plVar12 = (longlong *)operator_new(0xd0);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    plVar12[10] = 0;
    *plVar12 = (longlong)&PTR__scalar_deleting_destructor__144e34798;
    plVar12[0xb] = 0;
    plVar12[0xc] = 0;
    lVar11 = plVar17[1];
    plVar12[0xd] = *plVar17;
    plVar12[0xe] = lVar11;
    lVar11 = plVar17[3];
    plVar12[0xf] = plVar17[2];
    plVar12[0x10] = lVar11;
    lVar11 = plVar17[5];
    plVar12[0x11] = plVar17[4];
    plVar12[0x12] = lVar11;
    lVar11 = plVar17[7];
    plVar12[0x13] = plVar17[6];
    plVar12[0x14] = lVar11;
    lVar11 = plVar17[8];
    uVar5 = *(undefined4 *)((longlong)plVar17 + 0x44);
    lVar7 = plVar17[9];
    uVar6 = *(undefined4 *)((longlong)plVar17 + 0x4c);
    *(undefined1 *)(plVar12 + 0x17) = 0;
    plVar12[0x18] = param_1;
    *(int *)(plVar12 + 0x15) = (int)lVar11;
    *(undefined4 *)((longlong)plVar12 + 0xac) = uVar5;
    *(int *)(plVar12 + 0x16) = (int)lVar7;
    *(undefined4 *)((longlong)plVar12 + 0xb4) = uVar6;
    *(undefined4 *)(plVar12 + 0x19) = 0xffffffff;
    *(undefined4 *)((longlong)plVar12 + 0xcc) = 0;
    *(undefined4 *)(plVar12 + 0xc) = 1;
  }
  iVar9 = *(int *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = iVar9 + 1;
  if (*(int *)(param_1 + 0x114) < iVar9 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x108),iVar9);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x108) + (longlong)iVar9 * 8) = plVar12;
  local_c8 = (undefined4)plVar17[2];
  local_d8 = (undefined4)*plVar17;
  uStack_d4 = *(undefined4 *)((longlong)plVar17 + 4);
  uStack_d0 = (undefined4)plVar17[1];
  uStack_cc = *(undefined4 *)((longlong)plVar17 + 0xc);
  uVar19 = *(uint *)((longlong)plVar17 + 0x34);
  iVar9 = *(int *)((longlong)plVar17 + 0x14);
  local_c0 = local_168;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uVar5 = local_1a8._4_4_;
  if ((uVar19 & 0x10005) == 0) {
    if (iVar9 == 0) {
LAB_141ce2a69:
      bVar20 = false;
LAB_141ce2a6b:
      plVar4 = plVar12 + 2;
      if (bVar20) {
        local_190 = local_e8;
        local_198 = (longlong *)CONCAT44(local_198._4_4_,(int)plVar17[6]);
        local_1a0 = (longlong *)
                    CONCAT44(local_1a0._4_4_,(uint)*(ushort *)((longlong)plVar17 + 0x26));
        local_1a8 = (longlong *)CONCAT71(local_1a8._1_7_,*(undefined1 *)((longlong)plVar17 + 0x2c));
        local_1b0 = *(uint *)((longlong)plVar17 + 0x1c);
        local_1b8 = *(uint *)(plVar17 + 3);
        (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,&local_138,&DAT_146ab6e78,iVar9);
        TRefCountPtr<FRHITexture>::operator=(plVar4,local_138);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
      }
      else {
        if (*(char *)((longlong)plVar17 + 0x24) == '\0') {
          local_1a0 = local_e8;
          local_1a8 = (longlong *)(CONCAT44(uVar5,*(uint *)(plVar17 + 6) | uVar19) | 8);
          local_1b8 = CONCAT31(local_1b8._1_3_,*(undefined1 *)((longlong)plVar17 + 0x2c));
          local_1b0 = (uint)*(ushort *)((longlong)plVar17 + 0x26);
          (**(code **)(*DAT_146ab6358 + 0x660))(DAT_146ab6358,&local_128,&DAT_146ab6e78,iVar9);
          puVar13 = (undefined8 *)TRefCountPtr<FRHITexture>::operator=(plVar4,local_128);
          TRefCountPtr<FRHITexture>::operator=(plVar12 + 1,*puVar13);
          puVar13 = &local_128;
        }
        else {
          local_198 = local_e8;
          local_1b8 = *(uint *)(plVar17 + 4);
          local_1a0 = (longlong *)(CONCAT44(local_1a0._4_4_,*(uint *)(plVar17 + 6) | uVar19) | 8);
          local_1a8 = (longlong *)CONCAT44(uVar5,(uint)*(ushort *)((longlong)plVar17 + 0x26));
          local_1b0 = CONCAT31(local_1b0._1_3_,*(undefined1 *)((longlong)plVar17 + 0x2c));
          (**(code **)(*DAT_146ab6358 + 0x668))(DAT_146ab6358,&local_130,&DAT_146ab6e78,iVar9);
          puVar13 = (undefined8 *)TRefCountPtr<FRHITexture>::operator=(plVar4,local_130);
          TRefCountPtr<FRHITexture>::operator=(plVar12 + 1,*puVar13);
          puVar13 = &local_130;
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar13);
      }
    }
    else {
      if (((*(uint *)(plVar17 + 3) == 0) || (*(int *)((longlong)plVar17 + 0x1c) != 0)) ||
         (*(char *)((longlong)plVar17 + 0x25) != '\0')) {
        if (((iVar9 == 0) || ((int)plVar17[3] == 0)) ||
           ((*(int *)((longlong)plVar17 + 0x1c) == 0 ||
            (*(char *)((longlong)plVar17 + 0x25) != '\0')))) goto LAB_141ce2a69;
        bVar20 = true;
        goto LAB_141ce2a6b;
      }
      local_190 = local_e8;
      local_198 = (longlong *)CONCAT44(local_198._4_4_,(int)plVar17[6]);
      local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,(uint)*(ushort *)(plVar17 + 5));
      local_1a8 = (longlong *)CONCAT44(uVar5,(uint)*(ushort *)((longlong)plVar17 + 0x26));
      local_1b0 = CONCAT31(local_1b0._1_3_,*(undefined1 *)((longlong)plVar17 + 0x2c));
      local_1b8 = *(uint *)(plVar17 + 3);
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_140,&DAT_146ab6e78,iVar9);
      TRefCountPtr<FRHITexture>::operator=(plVar12 + 2,local_140);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
    }
    lVar11 = plVar12[2];
    goto LAB_141ce2b9b;
  }
  if (iVar9 == 0) {
LAB_141ce2812:
    bVar20 = false;
LAB_141ce2814:
    if (bVar20) {
      local_190 = local_e8;
      local_198 = (longlong *)CONCAT44(local_198._4_4_,*(uint *)(plVar17 + 6) | uVar19);
      local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,(uint)*(ushort *)((longlong)plVar17 + 0x26));
      local_1a8 = (longlong *)CONCAT71(local_1a8._1_7_,*(undefined1 *)((longlong)plVar17 + 0x2c));
      local_1b0 = *(uint *)((longlong)plVar17 + 0x1c);
      local_1b8 = *(uint *)(plVar17 + 3);
      (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,&local_158,&DAT_146ab6e78,iVar9);
      TRefCountPtr<FRHITexture>::operator=(plVar12 + 2,local_158);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
      TRefCountPtr<FRHITexture>::operator=(plVar12 + 1,plVar12[2]);
      lVar11 = plVar12[1];
      goto LAB_141ce2b9b;
    }
    plVar4 = plVar12 + 2;
    plVar15 = plVar12 + 1;
    if (*(char *)((longlong)plVar17 + 0x24) != '\0') {
      local_1b8 = *(uint *)(plVar17 + 4);
      local_198 = local_e8;
      local_1a0 = (longlong *)(CONCAT44(local_1a0._4_4_,*(uint *)(plVar17 + 6) | uVar19) | 8);
      local_1a8 = (longlong *)CONCAT44(uVar5,(uint)*(ushort *)((longlong)plVar17 + 0x26));
      local_1b0 = CONCAT31(local_1b0._1_3_,*(undefined1 *)((longlong)plVar17 + 0x2c));
      (**(code **)(*DAT_146ab6358 + 0x668))(DAT_146ab6358,local_150,&DAT_146ab6e78,iVar9);
      puVar13 = (undefined8 *)TRefCountPtr<FRHIIndexBuffer>::operator=(plVar4,local_150);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar15,*puVar13);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_150);
      lVar11 = *plVar15;
      goto LAB_141ce2b9b;
    }
    local_1a8 = local_e8;
    local_1b0 = (uint)local_1b0._1_3_ << 8;
    local_1b8 = uVar19;
    local_1a0 = plVar15;
    local_198 = plVar4;
    FUN_141cf24a0(iVar9,*(undefined1 *)((longlong)plVar17 + 0x2c),
                  *(ushort *)((longlong)plVar17 + 0x26));
    if (1 < *(ushort *)((longlong)plVar17 + 0x26)) {
      TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::SetNum
                (plVar12 + 7,*(ushort *)((longlong)plVar17 + 0x26),1);
      uVar16 = 0;
      if (*(short *)((longlong)plVar17 + 0x26) != 0) {
        do {
          local_1b8 = CONCAT31(local_1b8._1_3_,(char)uVar16);
          (**(code **)(*DAT_146ab6358 + 0x638))(DAT_146ab6358,local_148,&DAT_146ab6e78,*plVar4);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar12[7] + (ulonglong)uVar16 * 8,local_148);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_148);
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(ushort *)((longlong)plVar17 + 0x26));
      }
    }
  }
  else {
    iVar3 = (int)plVar17[3];
    if (((iVar3 == 0) || (*(int *)((longlong)plVar17 + 0x1c) != 0)) ||
       (*(char *)((longlong)plVar17 + 0x25) != '\0')) {
      if ((((iVar9 == 0) || ((int)plVar17[3] == 0)) || (*(int *)((longlong)plVar17 + 0x1c) == 0)) ||
         (*(char *)((longlong)plVar17 + 0x25) != '\0')) goto LAB_141ce2812;
      bVar20 = true;
      goto LAB_141ce2814;
    }
    plVar4 = plVar12 + 2;
    plVar15 = plVar12 + 1;
    local_188 = (uint)*(ushort *)(plVar17 + 5);
    local_1a0 = local_e8;
    local_198 = plVar15;
    local_190 = plVar4;
    if (*(char *)((longlong)plVar17 + 0x24) == '\0') {
      local_1a8 = (longlong *)CONCAT71(local_1a8._1_7_,(char)plVar17[7]);
      local_1b8 = *(uint *)(plVar17 + 6);
      local_1b0 = uVar19;
      FUN_1404a2100(iVar9,iVar3,*(undefined1 *)((longlong)plVar17 + 0x2c),
                    *(undefined2 *)((longlong)plVar17 + 0x26));
    }
    else {
      local_1b0 = *(uint *)(plVar17 + 6);
      local_1a8 = (longlong *)CONCAT44(uVar5,uVar19);
      local_1b8 = (uint)*(ushort *)((longlong)plVar17 + 0x26);
      FUN_141cf2350(iVar9,iVar3,(int)plVar17[4],*(undefined1 *)((longlong)plVar17 + 0x2c));
    }
    if ((DAT_146ab62ed != '\0') && (*(char *)((longlong)plVar17 + 0x49) != '\0')) {
      local_118 = *plVar15;
      if (local_118 != 0) {
        LOCK();
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
        UNLOCK();
      }
      local_110 = local_118;
      (**(code **)(*DAT_146ab6358 + 0x218))(DAT_146ab6358,local_170);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_110);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar12 + 10,local_170);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_170);
      (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_178,&DAT_146ab6e78,plVar12[10]);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar12 + 9,local_178);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_178);
    }
    if (1 < *(ushort *)((longlong)plVar17 + 0x26)) {
      TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::SetNum
                (plVar12 + 7,*(ushort *)((longlong)plVar17 + 0x26),1);
      uVar16 = 0;
      if (*(short *)((longlong)plVar17 + 0x26) != 0) {
        do {
          local_1b8 = CONCAT31(local_1b8._1_3_,(char)uVar16);
          (**(code **)(*DAT_146ab6358 + 0x658))(DAT_146ab6358,local_160,&DAT_146ab6e78,*plVar4);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar12[7] + (ulonglong)uVar16 * 8,local_160);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_160);
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(ushort *)((longlong)plVar17 + 0x26));
        lVar11 = *plVar15;
        goto LAB_141ce2b9b;
      }
    }
  }
  lVar11 = plVar12[1];
LAB_141ce2b9b:
  uVar19 = 0;
  (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,lVar11,local_168);
  if ((*(uint *)((longlong)plVar17 + 0x34) & 0x10000) != 0) {
    uVar16 = *(ushort *)((longlong)plVar17 + 0x26);
    plVar4 = plVar12 + 4;
    if (*(int *)((longlong)plVar12 + 0x34) < (int)(uint)uVar16) {
      FUN_1407eed70(plVar4,uVar16);
      uVar16 = *(ushort *)((longlong)plVar17 + 0x26);
    }
    if (uVar16 != 0) {
      do {
        local_1b8 = uVar19;
        (**(code **)(*DAT_146ab6358 + 0x610))(DAT_146ab6358,&local_120,&DAT_146ab6e78,plVar12[1]);
        lVar11 = plVar12[6];
        iVar9 = (int)lVar11 + 1;
        *(int *)(plVar12 + 6) = iVar9;
        if (*(int *)((longlong)plVar12 + 0x34) < iVar9) {
          TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
          ::ResizeGrow(plVar4);
        }
        plVar15 = (longlong *)plVar12[5];
        if ((longlong *)plVar12[5] == (longlong *)0x0) {
          plVar15 = plVar4;
        }
        uVar19 = uVar19 + 1;
        plVar15[(int)lVar11] = local_120;
        local_120 = 0;
      } while (uVar19 < *(ushort *)((longlong)plVar17 + 0x26));
    }
    plVar17 = (longlong *)plVar12[5];
    if ((longlong *)plVar12[5] == (longlong *)0x0) {
      plVar17 = plVar4;
    }
    TRefCountPtr<FRHITexture>::operator=(plVar12 + 3,*plVar17);
  }
  iVar9 = (**(code **)(*plVar12 + 0x20))(plVar12);
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + (iVar9 + 0x3ffU >> 10);
  bVar20 = false;
LAB_141ce2c83:
  lVar11 = plVar12[0xc];
  plVar12[0x15] = local_168;
  *(undefined4 *)((longlong)plVar12 + 100) = 0;
  plVar17 = (longlong *)*local_108;
  *local_108 = (longlong)plVar12;
  (**(code **)(*plVar12 + 0x28))(plVar12);
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x30))(plVar17);
  }
  if ((((int)lVar11 == 1) && (lVar11 = plVar12[1], lVar11 != 0)) &&
     (*(char *)(lVar11 + 0x11) == '\0')) {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x698))(DAT_146ab6358,lVar11);
    }
    *(undefined1 *)(lVar11 + 0x11) = 1;
  }
  lVar11 = local_100;
  if ((bVar20) && (param_6 != '\0')) {
    local_f8 = plVar12[1];
    plVar17 = (longlong *)(*(longlong *)(local_100 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar12 = plVar17 + 1;
    if (*(longlong **)(local_100 + 0x38) < plVar12) {
      FMemStackBase::AllocateNewChunk(local_100 + 0x30,0x10);
      plVar17 = (longlong *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar12 = plVar17 + 1;
    }
    *(longlong **)(lVar11 + 0x30) = plVar12;
    *plVar17 = local_f8;
    puVar14 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar13;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar14;
    *(undefined8 **)(lVar11 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar14 + 2) = 1;
    puVar14[3] = plVar17;
    *(undefined4 *)(puVar14 + 4) = 1;
    *(undefined1 *)((longlong)puVar14 + 0x24) = 0;
  }
  return 0;
}



// FUNCTION 141ce2de0 FUN_141ce2de0 body=54 status=ok
// SIG undefined FUN_141ce2de0(void)

uint FUN_141ce2de0(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x110) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)(int)uVar1 * 8) == param_2) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x110));
    }
  }
  return 0xffffffff;
}



// FUNCTION 141ce2e20 FUN_141ce2e20 body=1144 status=ok
// SIG undefined FUN_141ce2e20(void)

void FUN_141ce2e20(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char cVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar1 = *param_3;
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x10);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 8);
  puVar11 = puVar12 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk();
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar11;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar12;
  *(undefined8 **)(param_2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x14) = uVar1;
  *(undefined4 *)(puVar12 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar3;
  *(undefined4 *)(puVar12 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar12 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar12 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
  *(undefined4 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
  puVar12[8] = plVar6;
  puVar12[9] = uVar5;
  lVar9 = (**(code **)(*plVar6 + 8))(plVar6);
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*(longlong *)puVar12[8] + 0x18))();
    if (lVar9 == 0) {
      (**(code **)(*(longlong *)puVar12[8] + 0x20))();
    }
  }
  lVar9 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*(longlong *)puVar12[9] + 0x18))();
    if (lVar9 == 0) {
      (**(code **)(*(longlong *)puVar12[9] + 0x20))();
    }
  }
  if (((*(int *)(param_1 + 0x3c8) < 2) && (*(int *)(DAT_146a61e90 + 4) == 3)) &&
     (lVar9 = *(longlong *)(param_1 + 0x138), lVar9 != 0)) {
    uVar1 = *param_3;
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar11 = puVar12 + 10;
    uVar5 = *(undefined8 *)(lVar9 + 0x10);
    plVar6 = *(longlong **)(lVar9 + 8);
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar12 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar12 + 2) = 0;
    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar1;
    *(undefined4 *)(puVar12 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar3;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar12 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar12 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar12 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
    *(undefined4 *)(puVar12 + 7) = 0;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
    puVar12[8] = plVar6;
    puVar12[9] = uVar5;
    lVar9 = (**(code **)(*plVar6 + 8))(plVar6);
    if (lVar9 == 0) {
      lVar9 = (**(code **)(*(longlong *)puVar12[8] + 0x18))();
      if (lVar9 == 0) {
        (**(code **)(*(longlong *)puVar12[8] + 0x20))();
      }
    }
    lVar9 = (**(code **)(*(longlong *)puVar12[9] + 8))();
    if (lVar9 == 0) {
      lVar9 = (**(code **)(*(longlong *)puVar12[9] + 0x18))();
      if (lVar9 == 0) {
        (**(code **)(*(longlong *)puVar12[9] + 0x20))();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2d9) = 1;
  lVar9 = DAT_146a61ea8;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 != DAT_1468c21c0) {
      lVar10 = 4;
      goto LAB_141ce312e;
    }
  }
  lVar10 = 0;
LAB_141ce312e:
  if (*(int *)(lVar10 + lVar9) == 1) {
    uVar1 = *param_3;
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x10);
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x148) + 8);
    puVar11 = puVar12 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar12 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar12 + 2) = 0;
    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar1;
    *(undefined4 *)(puVar12 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar3;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar12 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar12 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar12 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
    *(undefined4 *)(puVar12 + 7) = 0;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
    puVar12[8] = plVar6;
    puVar12[9] = uVar5;
    lVar9 = (**(code **)(*plVar6 + 8))(plVar6);
    if (lVar9 == 0) {
      lVar9 = (**(code **)(*(longlong *)puVar12[8] + 0x18))();
      if (lVar9 == 0) {
        (**(code **)(*(longlong *)puVar12[8] + 0x20))();
      }
    }
    lVar9 = (**(code **)(*(longlong *)puVar12[9] + 8))();
    if (lVar9 == 0) {
      lVar9 = (**(code **)(*(longlong *)puVar12[9] + 0x18))();
      if (lVar9 == 0) {
        (**(code **)(*(longlong *)puVar12[9] + 0x20))();
      }
    }
    *(undefined1 *)(param_1 + 0x2da) = 1;
  }
  return;
}



// FUNCTION 141ce32a0 FUN_141ce32a0 body=814 status=ok
// SIG undefined FUN_141ce32a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ce32a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  iVar10 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_fc = 0xffffffff;
  local_e4 = 0xffffffff;
  local_cc = 0xffffffff;
  local_b4 = 0xffffffff;
  local_9c = 0xffffffff;
  local_84 = 0xffffffff;
  local_6c = 0xffffffff;
  local_54 = 0xffffffff;
  local_150 = param_3;
  local_118 = param_1;
  iVar3 = FUN_141ce4cc0(param_1,1,&local_108,&local_158);
  lVar9 = (longlong)iVar3;
  local_148 = 0xffffffff00000000;
  uStack_140 = 0xffffffffffffffff;
  local_128 = 0xffffffff;
  uStack_120 = 0;
  local_138 = 0xffffffffffffffff;
  uStack_130 = 0xffffffffffffffff;
  if (0 < iVar3) {
    iVar3 = (int)local_158;
    puVar5 = &local_108;
    do {
      if ((iVar10 != iVar3) || (cVar2 = FUN_141ae37e0(), cVar2 == '\0')) {
        local_158 = (longlong *)*puVar5;
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 10;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
          puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar8 + 10;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar8;
        *(undefined8 **)(param_2 + 8) = puVar8 + 1;
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_143f489f0;
        *(undefined4 *)(puVar8 + 2) = (undefined4)local_148;
        *(undefined4 *)((longlong)puVar8 + 0x14) = local_148._4_4_;
        *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_140;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_140._4_4_;
        *(undefined4 *)(puVar8 + 4) = (undefined4)local_138;
        *(undefined4 *)((longlong)puVar8 + 0x24) = local_138._4_4_;
        *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_130._4_4_;
        *(undefined4 *)(puVar8 + 6) = (undefined4)local_128;
        *(undefined4 *)((longlong)puVar8 + 0x34) = local_128._4_4_;
        *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_120;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_120._4_4_;
        puVar8[8] = local_158;
        puVar8[9] = local_158;
        lVar4 = (**(code **)(*local_158 + 8))();
        if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar4 == 0)) {
          (**(code **)(*(longlong *)puVar8[8] + 0x20))();
        }
        lVar4 = (**(code **)(*(longlong *)puVar8[9] + 8))();
        if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar4 == 0)) {
          (**(code **)(*(longlong *)puVar8[9] + 0x20))();
        }
      }
      iVar10 = iVar10 + 1;
      puVar5 = puVar5 + 3;
      lVar9 = lVar9 + -1;
      param_1 = local_118;
      param_3 = local_150;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  uVar7 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
  if (((byte)param_3 & 0xf0) == 0x20) {
    uVar7 = 0x10;
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144dc9c70;
  *(uint *)(puVar6 + 2) = uVar7 | ((byte)param_3 & 0xf) == 2;
  puVar6[3] = uVar1;
  return;
}



// FUNCTION 141ce35d0 FUN_141ce35d0 body=413 status=ok
// SIG undefined FUN_141ce35d0(void)

void FUN_141ce35d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x300);
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  if (lVar4 == 0) {
    lVar4 = DAT_1464c3310;
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar2 = *(longlong **)(lVar4 + 8);
  puVar3 = puVar5 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar5 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[8] = plVar2;
  puVar5[9] = uVar1;
  lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[8] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[8] + 0x20))();
    }
  }
  lVar4 = (**(code **)(*(longlong *)puVar5[9] + 8))();
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[9] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[9] + 0x20))();
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  return;
}



// FUNCTION 141ce3770 FUN_141ce3770 body=429 status=ok
// SIG undefined FUN_141ce3770(void)

void FUN_141ce3770(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  if (lVar4 == 0) {
    DAT_1464c2e22 = 0;
    lVar4 = DAT_1464c3310;
  }
  plVar2 = *(longlong **)(lVar4 + 8);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar5 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[8] = plVar2;
  puVar5[9] = uVar1;
  lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[8] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[8] + 0x20))();
    }
  }
  lVar4 = (**(code **)(*(longlong *)puVar5[9] + 8))();
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[9] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[9] + 0x20))();
    }
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    DAT_1464c2e23 = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  return;
}



// FUNCTION 141ce3920 FinishRenderingPrePass body=16 status=ok
// SIG undefined FinishRenderingPrePass(void)

void FSceneRenderTargets::FinishRenderingPrePass(void)

{
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  return;
}



// FUNCTION 141ce3930 FUN_141ce3930 body=398 status=ok
// SIG undefined FUN_141ce3930(void)

void FUN_141ce3930(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 8);
  puVar3 = puVar5 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar5 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[8] = plVar2;
  puVar5[9] = uVar1;
  lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[8] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[8] + 0x20))();
    }
  }
  lVar4 = (**(code **)(*(longlong *)puVar5[9] + 8))();
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[9] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[9] + 0x20))();
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  return;
}



// FUNCTION 141ce3ac0 FUN_141ce3ac0 body=877 status=ok
// SIG undefined FUN_141ce3ac0(void)

void FUN_141ce3ac0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  if (*(char *)(param_1 + 0x3d5) == '\0') {
    plVar3 = (longlong *)FUN_141ce5720(param_1,param_2,*(undefined8 *)(param_1 + 0x388));
    fVar11 = *(float *)(param_1 + 0x390);
    if (1.0 <= fVar11) {
      plVar4 = (longlong *)(param_1 + 0x60);
    }
    else {
      plVar4 = (longlong *)FUN_141ce48e0(param_1,param_2,*(undefined8 *)(param_1 + 0x388));
      fVar11 = *(float *)(param_1 + 0x390);
    }
  }
  else {
    fVar11 = *(float *)(param_1 + 0x390);
    plVar3 = (longlong *)(param_1 + 0x210);
    plVar4 = (longlong *)(param_1 + 0x220);
    if (1.0 <= fVar11) {
      plVar4 = (longlong *)(param_1 + 0x60);
    }
  }
  iVar9 = (int)((float)*(int *)(param_3 + 0x1aa0) * fVar11);
  iVar10 = (int)((float)*(int *)(param_3 + 0x1aa4) * fVar11);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar2 = (int)((float)*(int *)(param_3 + 0x1aa8) * fVar11);
  iVar7 = (int)((float)*(int *)(param_3 + 0x1aac) * fVar11);
  uVar1 = *(undefined8 *)(*plVar3 + 0x10);
  plVar3 = *(longlong **)(*plVar3 + 8);
  puVar6 = puVar8 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar8 + 2) = 0;
  *(int *)((longlong)puVar8 + 0x14) = iVar9;
  *(int *)(puVar8 + 3) = iVar10;
  *(int *)((longlong)puVar8 + 0x1c) = iVar2;
  *(int *)(puVar8 + 4) = iVar7;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar8 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar8 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x34) = 0;
  *(undefined4 *)(puVar8 + 7) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[9] = uVar1;
  puVar8[8] = plVar3;
  lVar5 = (**(code **)(*plVar3 + 8))();
  if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar5 == 0)) {
    (**(code **)(*(longlong *)puVar8[8] + 0x20))();
  }
  lVar5 = (**(code **)(*(longlong *)puVar8[9] + 8))();
  if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar5 == 0)) {
    (**(code **)(*(longlong *)puVar8[9] + 0x20))();
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar1 = *(undefined8 *)(*plVar4 + 0x10);
  plVar3 = *(longlong **)(*plVar4 + 8);
  puVar6 = puVar8 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar8 + 2) = 0;
  *(int *)((longlong)puVar8 + 0x14) = iVar9;
  *(int *)(puVar8 + 3) = iVar10;
  *(int *)((longlong)puVar8 + 0x1c) = iVar2;
  *(int *)(puVar8 + 4) = iVar7;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar8 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar8 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x34) = 0;
  *(undefined4 *)(puVar8 + 7) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[8] = plVar3;
  puVar8[9] = uVar1;
  lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
  if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar5 == 0)) {
    (**(code **)(*(longlong *)puVar8[8] + 0x20))();
  }
  lVar5 = (**(code **)(*(longlong *)puVar8[9] + 8))();
  if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar5 == 0)) {
    (**(code **)(*(longlong *)puVar8[9] + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x375) = 0;
  return;
}



// FUNCTION 141ce3e30 FUN_141ce3e30 body=191 status=ok
// SIG undefined FUN_141ce3e30(void)

void FUN_141ce3e30(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  undefined *local_28;
  undefined1 *puStack_20;
  
  uVar4 = 0;
  if ((int)param_1[1] != 0) {
    do {
      local_res8[0] = 0;
      local_28 = &DAT_14060d670;
      plVar1 = *(longlong **)(*param_1 + (longlong)(int)uVar4 * 8);
      puStack_20 = local_res8;
      lVar3 = FUN_1415d8310(&local_28,&DAT_146216a38);
      cVar2 = FMemStackBase::ContainsPointer(lVar3 + 0x18,plVar1);
      if (cVar2 == '\0') {
        (*(code *)((undefined8 *)*plVar1)[0xf])(plVar1);
      }
      else {
        (**(code **)*plVar1)(plVar1,0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 1));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  return;
}



// FUNCTION 141ce3ef0 FUN_141ce3ef0 body=296 status=ok
// SIG undefined FUN_141ce3ef0(void)

void FUN_141ce3ef0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x110) != 0) {
      while( true ) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x108) + (longlong)(int)uVar4 * 8);
        if (plVar2 == (longlong *)*param_2) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(param_1 + 0x110) <= uVar4) {
          return;
        }
      }
      if ((uVar4 != 0xffffffff) && (lVar1 = (longlong)(int)uVar4 * 8, plVar2 != (longlong *)0x0)) {
        iVar5 = (**(code **)(*plVar2 + 0x20))();
        lVar3 = *(longlong *)(param_1 + 0x108);
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) - (iVar5 + 0x3ffU >> 10);
        iVar5 = *(int *)(param_1 + 0x120);
        *(int *)(param_1 + 0x120) = iVar5 + 1;
        if (*(int *)(param_1 + 0x124) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x118,iVar5);
        }
        lVar3 = *(longlong *)(lVar1 + lVar3);
        *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar5 * 8) = lVar3;
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xb8) == '\0')) {
          *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
        }
        lVar3 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x108));
        *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x108)) = 0;
        if (lVar3 != 0) {
          FUN_141cf2980();
        }
        plVar2 = (longlong *)*param_2;
        *param_2 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))();
        }
      }
    }
  }
  return;
}



// FUNCTION 141ce4020 FUN_141ce4020 body=281 status=ok
// SIG undefined FUN_141ce4020(void)

void FUN_141ce4020(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x110);
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      lVar1 = (longlong)(int)uVar6 * 8;
      plVar3 = *(longlong **)(lVar1 + *(longlong *)(param_1 + 0x108));
      if (((plVar3 != (longlong *)0x0) && ((char)plVar3[0x17] == '\0')) && ((int)plVar3[0xc] == 1))
      {
        iVar5 = (**(code **)(*plVar3 + 0x20))();
        lVar4 = *(longlong *)(param_1 + 0x108);
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) - (iVar5 + 0x3ffU >> 10);
        iVar5 = *(int *)(param_1 + 0x120);
        *(int *)(param_1 + 0x120) = iVar5 + 1;
        if (*(int *)(param_1 + 0x124) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x118,iVar5);
        }
        lVar4 = *(longlong *)(lVar1 + lVar4);
        *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar5 * 8) = lVar4;
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0xb8) == '\0')) {
          *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
        }
        lVar4 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x108));
        *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x108)) = 0;
        if (lVar4 != 0) {
          FUN_141cf2980();
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return;
}



// FUNCTION 141ce4140 GenerateInfoString body=1093 status=ok
// SIG undefined GenerateInfoString(void)

undefined8 * FPooledRenderTargetDesc::GenerateInfoString(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *local_60;
  int local_58;
  int local_54;
  undefined2 *local_50;
  int local_48;
  
  uVar3 = FUN_141ee32c0(*(undefined4 *)(param_1 + 0x2c));
  uVar7 = *(uint *)(param_1 + 0x34) | *(uint *)(param_1 + 0x30);
  local_60 = (undefined4 *)0x0;
  local_54 = 0;
  iVar9 = 0;
  if ((uVar7 & 1) != 0) {
    local_58 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    *local_60 = 0x520020;
    *(undefined2 *)(local_60 + 1) = 0x54;
    *(undefined2 *)((longlong)local_60 + 6) = 0;
    iVar9 = local_58;
  }
  if ((uVar7 & 0x10) != 0) {
    local_58 = (6 - (uint)(iVar9 != 0)) + iVar9;
    if (local_54 < local_58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar9);
    }
    puVar1 = (undefined8 *)((longlong)local_60 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
    *puVar1 = 0x47005200730020;
    *(undefined2 *)(puVar1 + 1) = 0x42;
    *(undefined2 *)((longlong)puVar1 + 10) = 0;
    iVar9 = local_58;
  }
  iVar11 = local_54;
  puVar12 = local_60;
  if (1 < *(ushort *)(param_1 + 0x28)) {
    FString::PrintfImpl(&local_50,L" %dxMSAA");
    puVar8 = local_50;
    if (local_48 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = local_48 + -1;
    }
    if (iVar6 != 0) {
      local_58 = iVar9 + (uint)(iVar9 == 0) + iVar6;
      if (iVar11 < local_58) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar9);
        puVar12 = local_60;
        iVar11 = local_54;
      }
      iVar2 = local_58;
      puVar10 = (undefined2 *)((longlong)puVar12 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(puVar10,puVar8,(longlong)iVar6 * 2);
      puVar10[iVar6] = 0;
      iVar9 = iVar2;
    }
    if (local_50 != (undefined2 *)0x0) {
      FMemory::Free(local_50);
    }
  }
  if ((uVar7 >> 0x10 & 1) != 0) {
    local_58 = (5 - (uint)(iVar9 != 0)) + iVar9;
    if (iVar11 < local_58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar9);
      puVar12 = local_60;
      iVar11 = local_54;
    }
    lVar4 = (longlong)iVar9 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)((longlong)puVar12 + lVar4 * 2) = 0x56004100550020;
    *(undefined2 *)((longlong)puVar12 + lVar4 * 2 + 8) = 0;
    iVar9 = local_58;
  }
  if ((uVar7 >> 0x14 & 1) != 0) {
    local_58 = (6 - (uint)(iVar9 != 0)) + iVar9;
    if (iVar11 < local_58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar9);
      puVar12 = local_60;
      iVar11 = local_54;
    }
    puVar1 = (undefined8 *)((longlong)puVar12 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
    *puVar1 = 0x61005200560020;
    *(undefined2 *)(puVar1 + 1) = 0x6d;
    *(undefined2 *)((longlong)puVar1 + 10) = 0;
    iVar9 = local_58;
  }
  if ((int)uVar7 < 0) {
    local_58 = (0xb - (uint)(iVar9 != 0)) + iVar9;
    if (iVar11 < local_58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar9);
      puVar12 = local_60;
    }
    builtin_wcsncpy((wchar_t *)((longlong)puVar12 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2)
                    ,L" Transient",0xb);
    iVar9 = local_58;
  }
  puVar8 = (undefined2 *)0x0;
  iVar11 = 0;
  if (*(char *)(param_1 + 0x24) != '\0') {
    FString::PrintfImpl(&local_50,L"[%d]");
    puVar8 = local_50;
    iVar11 = local_48;
  }
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 == 0) {
LAB_141ce44f4:
    if (*(char *)(param_1 + 0x25) == '\0') {
      *param_2 = 0;
      param_2[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"(INVALID)",0x14);
      goto LAB_141ce455a;
    }
  }
  else {
    if (((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x1c) == 0)) &&
       (*(char *)(param_1 + 0x25) == '\0')) {
      puVar5 = (undefined4 *)&DAT_143f3eda8;
      if (iVar9 != 0) {
        puVar5 = puVar12;
      }
      puVar10 = &DAT_143f3eda8;
      if (iVar11 != 0) {
        puVar10 = puVar8;
      }
      FString::PrintfImpl(param_2,L"(2D%s %dx%d %s%s)",puVar10,iVar6,*(int *)(param_1 + 0x18),uVar3,
                          puVar5);
      goto LAB_141ce455a;
    }
    if (((iVar6 == 0) || (*(int *)(param_1 + 0x18) == 0)) || (*(int *)(param_1 + 0x1c) == 0))
    goto LAB_141ce44f4;
    if (*(char *)(param_1 + 0x25) == '\0') {
      puVar5 = (undefined4 *)&DAT_143f3eda8;
      if (iVar9 != 0) {
        puVar5 = puVar12;
      }
      puVar10 = &DAT_143f3eda8;
      if (iVar11 != 0) {
        puVar10 = puVar8;
      }
      FString::PrintfImpl(param_2,L"(3D%s %dx%dx%d %s%s)",puVar10,iVar6,*(int *)(param_1 + 0x18),
                          *(int *)(param_1 + 0x1c),uVar3,puVar5);
      goto LAB_141ce455a;
    }
  }
  puVar5 = (undefined4 *)&DAT_143f3eda8;
  if (iVar9 != 0) {
    puVar5 = puVar12;
  }
  puVar10 = &DAT_143f3eda8;
  if (iVar11 != 0) {
    puVar10 = puVar8;
  }
  FString::PrintfImpl(param_2,L"(Cube%s %d %s%s)",puVar10,iVar6,uVar3,puVar5);
LAB_141ce455a:
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar12 != (undefined4 *)0x0) {
    FMemory::Free(puVar12);
  }
  return param_2;
}



// FUNCTION 141ce4590 Get body=8 status=ok
// SIG undefined Get(void)

undefined8 * FSceneRenderTargets::Get(void)

{
  return &DAT_146a61f30;
}



// FUNCTION 141ce45a0 Get body=20 status=ok
// SIG undefined Get(void)

undefined8 * FSceneRenderTargets::Get(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &DAT_146a61f30;
  }
  return puVar1;
}



// FUNCTION 141ce45c0 FUN_141ce45c0 body=85 status=ok
// SIG undefined FUN_141ce45c0(void)

longlong FUN_141ce45c0(longlong param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x3c8) < 2) &&
     ((uVar1 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x3c8)], 0x1b < uVar1 ||
      ((0x8dfc0ebU >> (uVar1 & 0x1f) & 1) == 0)))) {
    if ((0x1d < uVar1) || ((0x25e2cf88U >> (uVar1 & 0x1f) & 1) == 0)) {
      return 0;
    }
  }
  else if (DAT_1464c9c11 == '\0') {
    return *(longlong *)(param_1 + 0x98) + 8;
  }
  return *(longlong *)(param_1 + 0x60) + 0x10;
}



// FUNCTION 141ce4620 FUN_141ce4620 body=339 status=ok
// SIG undefined FUN_141ce4620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141ce4620(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_48 [32];
  int local_28 [6];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar2 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a7fb10) && (_Init_thread_header(&DAT_146a7fb10), DAT_146a7fb10 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.MinResolution");
    uVar4 = uVar2;
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a7fb08 = uVar4;
    _Init_thread_footer(&DAT_146a7fb10);
  }
  iVar1 = *(int *)(param_1 + 0x3ac);
  if (iVar1 < 1) {
    iVar5 = 1;
  }
  else {
    iVar5 = DAT_1464c9c5c;
    if (iVar1 < DAT_1464c9c5c) {
      iVar5 = iVar1;
    }
  }
  uVar6 = iVar5 >> 0x1f;
  local_28[0] = iVar5 / 2;
  local_28[1] = iVar5 / 2 - ((int)(iVar5 - uVar6) >> 0x1f) >> 1;
  local_28[2] = (int)(iVar5 + (uVar6 & 7)) >> 3;
  local_28[3] = (int)(iVar5 + (uVar6 & 0xf)) >> 4;
  local_28[4] = *(undefined4 *)(DAT_146a7fb08 + 4);
  uVar4 = uVar2;
  do {
    if (local_28[uVar2] <= param_2) {
      return uVar4;
    }
    uVar4 = (ulonglong)((int)uVar4 + 1);
    uVar2 = uVar2 + 1;
  } while ((longlong)uVar2 < 5);
  return 4;
}



// FUNCTION 141ce4780 FUN_141ce4780 body=340 status=ok
// SIG undefined FUN_141ce4780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141ce4780(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  int local_28 [4];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a7fb20) && (_Init_thread_header(&DAT_146a7fb20), DAT_146a7fb20 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.MinResolution");
    lVar3 = 0;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    DAT_146a7fb18 = lVar3;
    _Init_thread_footer(&DAT_146a7fb20);
  }
  iVar1 = *(int *)(param_1 + 0x3ac);
  iVar4 = 1;
  if ((0 < iVar1) && (iVar4 = DAT_1464c9c5c, iVar1 < DAT_1464c9c5c)) {
    iVar4 = iVar1;
  }
  local_28[0] = 1;
  if (0 < iVar4 / 2) {
    local_28[0] = iVar4 / 2;
  }
  local_28[1] = 1;
  if (0 < local_28[0] / 2) {
    local_28[1] = local_28[0] / 2;
  }
  iVar1 = (int)(local_28[0] + (local_28[0] >> 0x1f & 3U)) >> 2;
  local_28[2] = 1;
  if (0 < iVar1) {
    local_28[2] = iVar1;
  }
  iVar1 = (int)(local_28[0] + (local_28[0] >> 0x1f & 7U)) >> 3;
  local_28[3] = 1;
  if (0 < iVar1) {
    local_28[3] = iVar1;
  }
  local_18 = *(undefined4 *)(DAT_146a7fb18 + 4);
  return local_28[param_2];
}



// FUNCTION 141ce48e0 FUN_141ce48e0 body=297 status=ok
// SIG undefined FUN_141ce48e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141ce48e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iStackX_1c;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  wchar_t *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
  if (((*(longlong **)(param_1 + 0x220) == (longlong *)0x0) ||
      (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x10))(),
      *(int *)(lVar1 + 0x14) != (int)param_3)) || (*(int *)(lVar1 + 0x18) != iStackX_1c)) {
    local_78 = DAT_146ab6938;
    local_68 = 1;
    local_6c = 0;
    local_50 = 0;
    local_48 = L"UnknownTexture2D";
    local_88 = _DAT_146ab6928;
    uStack_84 = uRam0000000146ab692c;
    uStack_80 = uRam0000000146ab6930;
    uStack_7c = uRam0000000146ab6934;
    local_70 = iStackX_1c;
    local_64 = 0x10000;
    local_5c = 0xb;
    local_54 = 4;
    local_40 = 1;
    local_74 = (int)param_3;
    local_60 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
    local_98 = 1;
    local_a0 = 1;
    local_a8 = L"SeparateTranslucencyDepth";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_88,param_1 + 0x220);
  }
  return param_1 + 0x220;
}



// FUNCTION 141ce4a10 FUN_141ce4a10 body=452 status=ok
// SIG undefined FUN_141ce4a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141ce4a10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x2f0);
  if (lVar3 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a7fa60) &&
       (_Init_thread_header(&DAT_146a7fa60), DAT_146a7fa60 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar2 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EdgeDetectionCS");
      lVar3 = 0;
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      DAT_146a7fa58 = lVar3;
      _Init_thread_footer(&DAT_146a7fa60);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    local_54 = (undefined4)uVar1;
    local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_50 = local_78._4_4_;
    local_58 = DAT_1464c9c98;
    local_28 = L"UnknownTexture2D";
    local_68 = _DAT_1464c9c88;
    uStack_64 = uRam00000001464c9c8c;
    uStack_60 = uRam00000001464c9c90;
    uStack_5c = uRam00000001464c9c94;
    local_4c = 0;
    local_48 = 1;
    local_44 = 0x10000;
    local_40 = 1;
    local_3c = 0xe;
    local_34 = 1;
    local_30 = 0;
    local_20 = 1;
    if ((2 < *(int *)(param_1 + 0x3c8)) && (local_34 = 1, *(int *)(DAT_146a7fa58 + 4) == 1)) {
      local_34 = 0x10001;
    }
    local_88 = 1;
    local_90 = 1;
    local_98 = L"EdgeVelocityBuffer";
    local_78 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68,param_1 + 0x2f0);
    lVar3 = *(longlong *)(param_1 + 0x2f0);
  }
  return lVar3;
}



// FUNCTION 141ce4be0 GetElementById body=29 status=ok
// SIG undefined GetElementById(void)

undefined8 FRenderTargetPool::GetElementById(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x110) <= param_2) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x108) + (longlong)(int)param_2 * 8);
}



// FUNCTION 141ce4c00 FUN_141ce4c00 body=182 status=ok
// SIG undefined FUN_141ce4c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ce4c00(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  
  uVar3 = uRam00000001464c9cc0;
  iVar1 = *(int *)(param_1 + 0x39c);
  uVar4 = 0x12;
  if (4 < iVar1) {
    uVar4 = 10;
  }
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  else if (iVar1 == 3) {
    uVar4 = 10;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x378);
  *param_2 = _DAT_1464c9cb8;
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = DAT_1464c9cc8;
  *(int *)((longlong)param_2 + 0x14) = (int)uVar2;
  uStack_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 3) = uStack_14;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined4 *)(param_2 + 6) = 0;
  param_2[8] = L"UnknownTexture2D";
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar4;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 6) = DAT_146a9da00;
  return;
}



// FUNCTION 141ce4cc0 FUN_141ce4cc0 body=497 status=ok
// SIG undefined FUN_141ce4cc0(void)

ulonglong FUN_141ce4cc0(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined6 uStack_16;
  
  puVar1 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface();
  *param_3 = *puVar1;
  param_3[1] = 0xffffffff00000000;
  param_3[2] = CONCAT62(uStack_16,CONCAT11(1,param_2));
  param_3[3] = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8);
  param_3[4] = 0xffffffff00000000;
  param_3[5] = CONCAT62(uStack_16,CONCAT11(1,param_2));
  param_3[6] = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 8);
  param_3[7] = 0xffffffff00000000;
  param_3[8] = CONCAT62(uStack_16,CONCAT11(1,param_2));
  param_3[9] = *(undefined8 *)(*(longlong *)(param_1 + 200) + 8);
  param_3[10] = 0xffffffff00000000;
  param_3[0xb] = CONCAT62(uStack_16,CONCAT11(1,param_2));
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    uVar2 = 5;
    *param_4 = 0xffffffff;
    uVar3 = 0x60;
  }
  else {
    *param_4 = 4;
    uVar2 = 6;
    uVar3 = 0x78;
    param_3[0xc] = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 8);
    param_3[0xd] = 0xffffffff00000000;
    param_3[0xe] = CONCAT62(uStack_16,CONCAT11(1,param_2));
  }
  puVar1 = (undefined8 *)((ulonglong)uVar3 + (longlong)param_3);
  *puVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 8);
  puVar1[1] = 0xffffffff00000000;
  *(ulonglong *)((ulonglong)uVar3 + 0x10 + (longlong)param_3) =
       CONCAT62(uStack_16,CONCAT11(1,param_2));
  if (*(char *)(param_1 + 0x3a8) != '\0') {
    param_3[uVar2 * 3] = *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8);
    (param_3 + uVar2 * 3)[1] = 0xffffffff00000000;
    param_3[uVar2 * 3 + 2] = CONCAT62(uStack_16,CONCAT11(1,param_2));
    uVar2 = (ulonglong)((int)uVar2 + 1);
  }
  return uVar2;
}



// FUNCTION 141ce4ec0 FUN_141ce4ec0 body=20 status=ok
// SIG undefined FUN_141ce4ec0(void)

undefined8 FUN_141ce4ec0(longlong param_1)

{
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xe0);
}



// FUNCTION 141ce4ee0 FUN_141ce4ee0 body=24 status=ok
// SIG undefined FUN_141ce4ee0(void)

longlong FUN_141ce4ee0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) == 0) {
    lVar1 = DAT_1464c3310;
  }
  return lVar1 + 8;
}



// FUNCTION 141ce4f00 GetInputDesc body=45 status=ok
// SIG undefined GetInputDesc(void)

longlong FRenderingCompositePass::GetInputDesc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (((plVar2 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) &&
     (lVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,(int)plVar2[1]), lVar3 != 0)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 141ce4f30 GetLightAttenuation body=26 status=ok
// SIG undefined GetLightAttenuation(void)

undefined8 * FSceneRenderTargets::GetLightAttenuation(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    DAT_1464c2e23 = 0;
    puVar1 = &DAT_1464c3310;
  }
  return puVar1;
}



// FUNCTION 141ce4f50 FUN_141ce4f50 body=43 status=ok
// SIG undefined FUN_141ce4f50(void)

undefined4 FUN_141ce4f50(int param_1)

{
  if (param_1 == 0) {
    return *(undefined4 *)(DAT_146b17150 + 0x674);
  }
  if (param_1 != 1) {
    return *(undefined4 *)(DAT_146b17150 + 0x670);
  }
  return *(undefined4 *)(DAT_146b17150 + 0x678);
}



// FUNCTION 141ce4f80 FUN_141ce4f80 body=134 status=ok
// SIG undefined FUN_141ce4f80(void)

char FUN_141ce4f80(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x3c8) < 2) {
    return '\x01';
  }
  uVar1 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x3c8)];
  if ((DAT_146ac3ac0 != 0) && (iVar3 = FUN_1419ef5f0(uVar1), 2 < iVar3)) {
    return '\x01';
  }
  cVar2 = FUN_141ee4480(uVar1);
  if (cVar2 != '\0') {
    return '\x01';
  }
  bVar4 = *(char *)(param_1 + 0x3a8) != '\0';
  cVar2 = bVar4 + '\x05';
  if (*(char *)(param_1 + 0x3d2) != '\0') {
    cVar2 = bVar4 + '\x06';
  }
  return cVar2;
}



// FUNCTION 141ce5010 FUN_141ce5010 body=335 status=ok
// SIG undefined FUN_141ce5010(void)

uint FUN_141ce5010(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 2) {
    if (8 < *(ushort *)(DAT_146a61ed8 + 4)) {
      return 1;
    }
    uVar2 = (uint)*(ushort *)(DAT_146a61ed8 + 4);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a7f9f0) &&
       (_Init_thread_header(&DAT_146a7f9f0), DAT_146a7f9f0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a7f9e8 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DefaultFeature.AntiAliasing");
      _Init_thread_footer(&DAT_146a7f9f0);
    }
    iVar1 = (**(code **)(*DAT_146a7f9e8 + 0x68))();
    if (DAT_146ac3ac0 == 0) {
      return 1;
    }
    if (param_1 < 3) {
      return 1;
    }
    if (iVar1 != 3) {
      return 1;
    }
    uVar2 = *(uint *)(DAT_146a61ec0 + 4);
    if ((int)uVar2 < 2) {
      uVar2 = 1;
    }
    if (8 < (ushort)uVar2) {
      return 1;
    }
  }
  if ((0x116U >> (uVar2 & 0x1f) & 1) == 0) {
    return 1;
  }
  if ((1 < (ushort)uVar2) && (((&DAT_1464c9c48)[param_1] - 10 & 0xfffffffd) == 0)) {
    if (DAT_146a7f9f4 == '\0') {
      DAT_146a7f9f4 = '\x01';
    }
    return 1;
  }
  return uVar2 & 0xffff;
}



// FUNCTION 141ce5160 FUN_141ce5160 body=377 status=ok
// SIG undefined FUN_141ce5160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141ce5160(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  wchar_t *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)(param_1 + 0x150);
  uVar2 = 0;
  uVar4 = 0xffffffff;
  do {
    lVar1 = *plVar3;
    uVar5 = uVar2;
    if (((lVar1 != 0) && (uVar5 = uVar4, *(int *)(*(longlong *)(lVar1 + 8) + 0x60) == param_3)) &&
       (*(int *)(*(longlong *)(lVar1 + 8) + 100) == param_4)) goto LAB_141ce52bb;
    uVar2 = uVar2 + 1;
    plVar3 = plVar3 + 1;
    uVar4 = uVar5;
  } while (uVar2 < 4);
  if (uVar5 == 0xffffffff) {
    LowLevelFatalErrorHandler
              ("Unknown",0xb26,
               L"Exceeded storage space for OptionalShadowDepthColorSurface. Increase array size.");
    FDebug::AssertFailed
              (&DAT_144e27656,"Unknown",0xb26,
               L"Exceeded storage space for OptionalShadowDepthColorSurface. Increase array size.");
  }
  local_78 = DAT_146ab6938;
  local_98 = 1;
  local_68 = 1;
  local_60 = 1;
  local_54 = 1;
  local_48 = L"UnknownTexture2D";
  local_a0 = 1;
  local_a8 = L"OptionalShadowDepthColor";
  local_88 = _DAT_146ab6928;
  uStack_84 = uRam0000000146ab692c;
  uStack_80 = uRam0000000146ab6930;
  uStack_7c = uRam0000000146ab6934;
  local_6c = 0;
  local_64 = 0x10000;
  local_5c = 2;
  local_50 = 0;
  local_40 = 1;
  local_74 = param_3;
  local_70 = param_4;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_88,param_1 + 0x150 + (longlong)(int)uVar5 * 8);
  lVar1 = *(longlong *)(param_1 + 0x150 + (longlong)(int)uVar5 * 8);
LAB_141ce52bb:
  return lVar1 + 8;
}



// FUNCTION 141ce52e0 GetOutput body=24 status=ok
// SIG undefined GetOutput(void)

undefined8 FRenderingCompositeOutputRef::GetOutput(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141ce52f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,(int)param_1[1]);
  return uVar2;
}



// FUNCTION 141ce5300 GetPixelShader body=34 status=ok
// SIG undefined GetPixelShader(void)

undefined8 FShader::GetPixelShader(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  return *(undefined8 *)(lVar1 + 0x40);
}



// FUNCTION 141ce5330 FUN_141ce5330 body=370 status=ok
// SIG undefined FUN_141ce5330(void)

int * FUN_141ce5330(longlong param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0x3ac);
  if (iVar2 < 1) {
    iVar5 = 1;
  }
  else {
    iVar5 = DAT_1464c9c60;
    if (iVar2 < DAT_1464c9c60) {
      iVar5 = iVar2;
    }
  }
  if (iVar2 < 1) {
    iVar6 = 1;
  }
  else {
    iVar6 = DAT_1464c9c5c;
    if (iVar2 < DAT_1464c9c5c) {
      iVar6 = iVar2;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a7fb00) && (_Init_thread_header(&DAT_146a7fb00), DAT_146a7fb00 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Shadow.PreShadowResolutionFactor");
    lVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146a7faf8 = lVar4;
    _Init_thread_footer(&DAT_146a7fb00);
  }
  iVar2 = DAT_1464c9c60;
  fVar1 = *(float *)(DAT_146a7faf8 + 4);
  iVar6 = (int)((float)iVar6 * fVar1) * 2;
  if (iVar6 < 1) {
    iVar7 = 1;
  }
  else {
    iVar7 = DAT_1464c9c5c;
    if (iVar6 < DAT_1464c9c5c) {
      iVar7 = iVar6;
    }
  }
  *param_2 = iVar7;
  iVar5 = (int)((float)iVar5 * fVar1) * 2;
  if (0 < iVar5) {
    if (iVar5 < iVar2) {
      iVar2 = iVar5;
    }
    param_2[1] = iVar2;
    return param_2;
  }
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 141ce54b0 FUN_141ce54b0 body=53 status=ok
// SIG undefined FUN_141ce54b0(void)

undefined8 * FUN_141ce54b0(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_141ce54f0();
  if (*plVar1 == 0) {
    DAT_1464c2e21 = 0;
    return &DAT_1464c3318;
  }
  puVar2 = (undefined8 *)FUN_141ce54f0(param_1);
  return puVar2;
}



// FUNCTION 141ce54f0 FUN_141ce54f0 body=105 status=ok
// SIG undefined FUN_141ce54f0(void)

longlong FUN_141ce54f0(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3cc) == 0) {
    return param_1 + 0x30;
  }
  if (*(int *)(param_1 + 0x3cc) == 1) {
    if (*(char *)(param_1 + 0x3d0) == '\0') {
      iVar1 = FUN_141ce5560(param_1,*(undefined4 *)(param_1 + 0x3c8));
      if (iVar1 != 10) {
        return param_1 + 0x38;
      }
    }
    return param_1 + 0x40;
  }
  return param_1 + 0x48;
}



// FUNCTION 141ce5560 FUN_141ce5560 body=128 status=ok
// SIG undefined FUN_141ce5560(void)

ulonglong FUN_141ce5560(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 10;
  if (param_2 < 2) {
    return (ulonglong)*(uint *)(param_1 + 0x3a4);
  }
  iVar1 = *(int *)(param_1 + 0x3a0);
  if (iVar1 == 0) {
    uVar2 = 0x25;
  }
  else if (iVar1 == 1) {
    uVar2 = 0x12;
  }
  else if (iVar1 == 2) {
    uVar2 = 0x1a;
  }
  else if (iVar1 == 3) {
    uVar2 = 9;
  }
  else if (iVar1 == 5) {
    uVar2 = 1;
  }
  if ((&DAT_1464ca1d0)[uVar2 * 0x28] == '\0') {
    uVar2 = 10;
  }
  if (*(char *)(param_1 + 0x3d0) != '\0') {
    uVar2 = 10;
  }
  return uVar2;
}



// FUNCTION 141ce55e0 GetSceneColorFormat body=11 status=ok
// SIG undefined GetSceneColorFormat(void)

void FSceneRenderTargets::GetSceneColorFormat(longlong param_1)

{
  FUN_141ce5560(param_1,*(undefined4 *)(param_1 + 0x3c8));
  return;
}



// FUNCTION 141ce55f0 GetSceneColorFormatType body=79 status=ok
// SIG undefined GetSceneColorFormatType(void)

undefined8 FSceneRenderTargets::GetSceneColorFormatType(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3cc) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3cc) == 1) {
    if (*(char *)(param_1 + 0x3d0) == '\0') {
      iVar1 = FUN_141ce5560(param_1,*(undefined4 *)(param_1 + 0x3c8));
      if (iVar1 != 10) {
        return 1;
      }
    }
    return 2;
  }
  return 3;
}



// FUNCTION 141ce5640 GetSceneColorSurface body=99 status=ok
// SIG undefined GetSceneColorSurface(void)

longlong FSceneRenderTargets::GetSceneColorSurface(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141ce54f0();
  if (*plVar1 == 0) {
    return DAT_146ac3e00 + 0x30;
  }
  plVar1 = (longlong *)FUN_141ce54f0(param_1);
  if (*plVar1 == 0) {
    DAT_1464c2e20 = 0;
    return DAT_1464c3318 + 8;
  }
  plVar1 = (longlong *)FUN_141ce54f0(param_1);
  return *plVar1 + 8;
}



// FUNCTION 141ce56b0 GetSceneColorTexture body=99 status=ok
// SIG undefined GetSceneColorTexture(void)

longlong FSceneRenderTargets::GetSceneColorTexture(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141ce54f0();
  if (*plVar1 == 0) {
    return DAT_146ac3e00 + 0x30;
  }
  plVar1 = (longlong *)FUN_141ce54f0(param_1);
  if (*plVar1 == 0) {
    DAT_1464c2e20 = 0;
    return DAT_1464c3318 + 0x10;
  }
  plVar1 = (longlong *)FUN_141ce54f0(param_1);
  return *plVar1 + 0x10;
}



// FUNCTION 141ce5720 FUN_141ce5720 body=335 status=ok
// SIG undefined FUN_141ce5720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141ce5720(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iStackX_1c;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  wchar_t *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
  plVar1 = (longlong *)(param_1 + 0x210);
  if ((((longlong *)*plVar1 != (longlong *)0x0) &&
      (lVar4 = (**(code **)(*(longlong *)*plVar1 + 0x10))(), *(int *)(lVar4 + 0x14) == (int)param_3)
      ) && (*(int *)(lVar4 + 0x18) == iStackX_1c)) {
    return plVar1;
  }
  plVar2 = *(longlong **)(param_1 + 0x218);
  if (plVar2 == (longlong *)0x0) {
    local_78 = DAT_1464c9c98;
    local_68 = 1;
    local_54 = 1;
    local_48 = L"UnknownTexture2D";
    local_58 = DAT_146a9da80;
    local_88 = _DAT_1464c9c88;
    uStack_84 = uRam00000001464c9c8c;
    uStack_80 = uRam00000001464c9c90;
    uStack_7c = uRam00000001464c9c94;
    local_70 = iStackX_1c;
    local_6c = 0;
    local_64 = 0x10000;
    local_5c = 10;
    local_50 = 0;
    local_40 = 0;
    local_74 = (int)param_3;
    local_60 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
    local_98 = 1;
    local_a0 = 0;
    local_a8 = L"SeparateTranslucency";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_88,plVar1);
  }
  else {
    plVar3 = (longlong *)*plVar1;
    *plVar1 = (longlong)plVar2;
    (**(code **)(*plVar2 + 0x28))();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3);
    }
  }
  return plVar1;
}



// FUNCTION 141ce5870 FUN_141ce5870 body=87 status=ok
// SIG undefined FUN_141ce5870(void)

int * FUN_141ce5870(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_3;
  if (DAT_1464c9c5c <= param_3) {
    iVar4 = DAT_1464c9c5c;
  }
  iVar1 = *(int *)(param_1 + 0x3ac);
  if (DAT_1464c9c60 <= param_3) {
    param_3 = DAT_1464c9c60;
  }
  iVar2 = 1;
  if ((0 < iVar1) && (iVar2 = param_3, iVar1 < param_3)) {
    iVar2 = iVar1;
  }
  iVar3 = 1;
  if ((0 < iVar1) && (iVar3 = iVar4, iVar1 < iVar4)) {
    iVar3 = iVar1;
  }
  *param_2 = iVar3;
  param_2[1] = iVar2;
  return param_2;
}



// FUNCTION 141ce58d0 FUN_141ce58d0 body=137 status=ok
// SIG undefined FUN_141ce58d0(void)

int * FUN_141ce58d0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_1464c9c60;
  iVar4 = *(int *)(param_1 + 0x3ac);
  if (iVar4 < 1) {
    iVar3 = 1;
  }
  else {
    iVar3 = DAT_1464c9c60;
    if (iVar4 < DAT_1464c9c60) {
      iVar3 = iVar4;
    }
  }
  if (iVar4 < 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = DAT_1464c9c5c;
    if (iVar4 < DAT_1464c9c5c) {
      iVar2 = iVar4;
    }
  }
  iVar2 = iVar2 / 2;
  if (iVar2 < 1) {
    iVar4 = 1;
  }
  else {
    iVar4 = DAT_1464c9c5c;
    if (iVar2 < DAT_1464c9c5c) {
      iVar4 = iVar2;
    }
  }
  *param_2 = iVar4;
  iVar3 = iVar3 / 2;
  if (iVar3 < 1) {
    param_2[1] = 1;
    return param_2;
  }
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  param_2[1] = iVar1;
  return param_2;
}



// FUNCTION 141ce5960 FUN_141ce5960 body=307 status=ok
// SIG undefined FUN_141ce5960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141ce5960(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  wchar_t *local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  iVar2 = (int)((ulonglong)param_3 >> 0x20);
  if (((*(longlong **)(param_1 + 0x68) == (longlong *)0x0) ||
      (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))(),
      *(int *)(lVar1 + 0x14) != (int)param_3)) || (*(int *)(lVar1 + 0x18) != iVar2)) {
    local_68 = *(undefined4 *)(param_1 + 0x3fc);
    local_78 = *(undefined4 *)(param_1 + 0x3ec);
    uStack_74 = *(undefined4 *)(param_1 + 0x3f0);
    uStack_70 = *(undefined4 *)(param_1 + 0x3f4);
    uStack_6c = *(undefined4 *)(param_1 + 0x3f8);
    local_58 = 1;
    local_5c = 0;
    local_40 = 0;
    local_38 = L"UnknownTexture2D";
    local_54 = 0x10000;
    local_4c = 0xb;
    local_44 = 4;
    local_30 = 1;
    local_64 = (int)param_3;
    local_60 = iVar2;
    local_50 = FUN_141ce5010(*(undefined4 *)(param_1 + 0x3c8));
    local_88 = 1;
    local_90 = 1;
    local_98 = L"UIDepthZ";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_78,param_1 + 0x68);
  }
  return *(longlong *)(param_1 + 0x68) + 0x10;
}



// FUNCTION 141ce5aa0 GetVertexShader body=34 status=ok
// SIG undefined GetVertexShader(void)

undefined8 FShader::GetVertexShader(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  return *(undefined8 *)(lVar1 + 0x38);
}



// FUNCTION 141ce5b10 FUN_141ce5b10 body=136 status=ok
// SIG undefined FUN_141ce5b10(void)

ulonglong FUN_141ce5b10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  uVar3 = *(undefined8 *)(*param_1 + 0x368);
  uVar4 = *(undefined8 *)(*param_1 + 0x370);
  uVar6 = FViewInfo::RequiresSecondaryUpscale();
  if ((char)uVar6 == '\0') {
    iStack_1c = (int)((ulonglong)uVar4 >> 0x20);
    iStack_24 = (int)((ulonglong)uVar3 >> 0x20);
    iStack_20 = (int)uVar4;
    local_28 = (int)uVar3;
    iStack_c = (int)((ulonglong)lVar2 >> 0x20);
    iStack_14 = (int)((ulonglong)lVar1 >> 0x20);
    iStack_10 = (int)lVar2;
    local_18 = (int)lVar1;
    uVar5 = iStack_10 - local_18;
    uVar6 = (ulonglong)uVar5;
    if (((float)(iStack_1c - iStack_24) * (float)(iStack_20 - local_28)) /
        ((float)(iStack_c - iStack_14) * (float)(int)uVar5) <= 2.3) {
      return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 141ce5ba0 IsCustomDepthPassWritingStencil body=15 status=ok
// SIG undefined IsCustomDepthPassWritingStencil(void)

undefined8 FSceneRenderTargets::IsCustomDepthPassWritingStencil(void)

{
  return CONCAT71((int7)((ulonglong)DAT_146a61e90 >> 8),*(int *)(DAT_146a61e90 + 4) == 3);
}



// FUNCTION 141ce5bd0 IsSceneColorAllocated body=21 status=ok
// SIG undefined IsSceneColorAllocated(void)

bool FSceneRenderTargets::IsSceneColorAllocated(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141ce54f0();
  return *plVar1 != 0;
}



// FUNCTION 141ce5bf0 IsValid body=95 status=ok
// SIG undefined IsValid(void)

undefined8 FPooledRenderTargetDesc::IsValid(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x28);
  if (((sVar1 == 1) ||
      (((((ushort)(sVar1 - 1U) < 8 && (*(int *)(param_1 + 0x14) != 0)) &&
        (*(int *)(param_1 + 0x18) != 0)) &&
       ((*(int *)(param_1 + 0x1c) == 0 && (*(char *)(param_1 + 0x25) == '\0')))))) &&
     ((*(int *)(param_1 + 0x14) != 0 &&
      (((*(short *)(param_1 + 0x26) != 0 && ((ushort)(sVar1 - 1U) < 0x10)) &&
       ((*(int *)(param_1 + 0x2c) != 0 &&
        (((*(uint *)(param_1 + 0x34) & 0x10000) == 0 || (DAT_1464c9c14 == 3)))))))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ce5c50 FUN_141ce5c50 body=39 status=ok
// SIG undefined FUN_141ce5c50(void)

bool FUN_141ce5c50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  plVar2 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18) + 8))();
  return lVar1 == *plVar2;
}



// FUNCTION 141ce5c80 FUN_141ce5c80 body=376 status=ok
// SIG undefined FUN_141ce5c80(void)

undefined8 * FUN_141ce5c80(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  undefined *local_18;
  undefined1 *puStack_10;
  
  puVar9 = (undefined8 *)0x0;
  if (*param_2 == 0) {
    return (undefined8 *)0x0;
  }
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = &DAT_14060d670;
  lVar7 = FUN_1415d8310(&local_18,&DAT_146216a38);
  puVar8 = (undefined8 *)operator_new(0xd0,lVar7 + 0x18,1,0);
  if (puVar8 != (undefined8 *)0x0) {
    lVar7 = *param_2;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    *puVar8 = &PTR__scalar_deleting_destructor__144e34798;
    puVar8[0xb] = 0;
    puVar8[0xc] = 1;
    uVar6 = *(undefined8 *)(lVar7 + 0x70);
    puVar8[0xd] = *(undefined8 *)(lVar7 + 0x68);
    puVar8[0xe] = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x80);
    puVar8[0xf] = *(undefined8 *)(lVar7 + 0x78);
    puVar8[0x10] = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x90);
    puVar8[0x11] = *(undefined8 *)(lVar7 + 0x88);
    puVar8[0x12] = uVar6;
    uVar2 = *(undefined4 *)(lVar7 + 0x9c);
    uVar3 = *(undefined4 *)(lVar7 + 0xa0);
    uVar4 = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(puVar8 + 0x13) = *(undefined4 *)(lVar7 + 0x98);
    *(undefined4 *)((longlong)puVar8 + 0x9c) = uVar2;
    *(undefined4 *)(puVar8 + 0x14) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0xa4) = uVar4;
    uVar2 = *(undefined4 *)(lVar7 + 0xa8);
    uVar3 = *(undefined4 *)(lVar7 + 0xac);
    uVar4 = *(undefined4 *)(lVar7 + 0xb0);
    uVar5 = *(undefined4 *)(lVar7 + 0xb4);
    *(undefined1 *)(puVar8 + 0x17) = 1;
    *(undefined4 *)(puVar8 + 0x15) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xac) = uVar3;
    *(undefined4 *)(puVar8 + 0x16) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar5;
    puVar8[0x18] = *(undefined8 *)(lVar7 + 0xc0);
    *(undefined4 *)(puVar8 + 0x19) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0xcc) = 0;
    FSceneRenderTargetItem::operator=(puVar8 + 1,lVar7 + 8);
    puVar9 = puVar8;
  }
  iVar1 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = iVar1 + 1;
  if (*(int *)(param_1 + 0x144) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x138),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 8) = puVar9;
  return puVar9;
}



// FUNCTION 141ce5e00 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce5e40 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce5e80 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce5ec0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce5f00 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<3,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",3);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce5f40 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<3,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",3);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce5f80 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<4,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",4);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce5fc0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<4,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",4);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6000 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<5,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",5);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce6040 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<5,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",5);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6080 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<6,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",6);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce60c0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<6,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",6);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6100 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce6140 ModifyCompilationEnvironment body=54 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscalePS<0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce61c0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<1,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6250 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<1,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce62e0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<1,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6370 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<2,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6400 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<2,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6490 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<2,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6520 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<3,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce65b0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<3,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6640 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<3,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce66d0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<4,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6760 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<4,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce67f0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<4,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6880 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<5,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6910 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<5,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce69a0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<5,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6a30 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<6,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6ac0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<6,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6b50 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<6,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6be0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<7,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6c70 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<7,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6d00 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<7,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6d90 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<8,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6e20 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<8,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6eb0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<8,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6f40 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<9,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce6fd0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<9,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7060 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<9,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce70f0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<10,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7180 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<10,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7210 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<10,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce72a0 ModifyCompilationEnvironment body=151 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<0,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ce7340 ModifyCompilationEnvironment body=151 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<0,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ce73e0 ModifyCompilationEnvironment body=148 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<0,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ce7480 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<16,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7510 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<16,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce75a0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<16,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7630 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<17,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce76c0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<17,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7750 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<17,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce77e0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<18,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7870 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<18,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7900 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<18,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7990 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<19,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7a20 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<19,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7ab0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<19,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7b40 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<20,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7bd0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<20,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7c60 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<20,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7cf0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<21,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7d80 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<21,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7e10 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<21,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7ea0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<22,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7f30 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<22,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce7fc0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<22,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8050 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<23,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce80e0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<23,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8170 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<23,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8200 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<24,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8290 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<24,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8320 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<24,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce83b0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<25,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8440 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<25,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce84d0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<25,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8560 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<26,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce85f0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<26,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8680 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<26,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8710 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<27,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce87a0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<27,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8830 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<27,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce88c0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<28,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8950 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<28,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce89e0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<28,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8a70 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<29,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8b00 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<29,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8b90 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<29,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8c20 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<30,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8cb0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<30,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8d40 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<30,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8dd0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<31,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8e60 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<31,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8ef0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<31,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce8f80 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<32,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9010 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<32,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce90a0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<32,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9130 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<11,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce91c0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<11,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9250 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<11,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce92e0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<12,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9370 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<12,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9400 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<12,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9490 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<13,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9520 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<13,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce95b0 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<13,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9640 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<14,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce96d0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<14,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9760 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<14,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce97f0 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<15,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9880 ModifyCompilationEnvironment body=133 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<15,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9910 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterCS<15,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce99a0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<1,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce9a00 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<1,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9a60 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<1,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce9ac0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<1,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}


