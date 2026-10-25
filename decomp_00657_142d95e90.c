// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142d95e90 FUN_142d95e90 body=242 status=ok
// SIG undefined FUN_142d95e90(void)

undefined8 * FUN_142d95e90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Buf2;
  void *_Buf1;
  void *pvVar1;
  int iVar2;
  void *_Buf1_00;
  void *pvVar3;
  longlong lVar4;
  size_t _Size;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  _Buf2 = (void *)*param_3;
  lVar4 = param_3[1] - (longlong)_Buf2 >> 1;
  if (0 < lVar4) {
    _Buf1 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    pvVar3 = pvVar1;
    if (lVar4 <= (longlong)pvVar1 - (longlong)_Buf1 >> 1) {
      _Size = param_3[1] - (longlong)_Buf2;
      iVar2 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,_Size);
      _Buf1_00 = _Buf1;
      while ((pvVar3 = _Buf1_00, iVar2 != 0 &&
             (pvVar3 = pvVar1, _Buf1_00 != (void *)((longlong)pvVar1 + lVar4 * -2)))) {
        _Buf1_00 = (void *)((longlong)_Buf1_00 + 2);
        iVar2 = _guard_xfg_dispatch_icall_nop(_Buf1_00,_Buf2,_Size);
      }
    }
    if (pvVar3 != pvVar1) {
      *param_2 = _Buf1;
      param_2[1] = pvVar3;
      param_2[2] = (void *)((longlong)pvVar3 + lVar4 * 2);
      param_2[3] = pvVar1;
      *(undefined1 *)(param_2 + 4) = 1;
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142d95f90 FUN_142d95f90 body=675 status=ok
// SIG undefined FUN_142d95f90(void)

void FUN_142d95f90(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined1 local_58 [48];
  
  plVar10 = (longlong *)0x0;
  FWeakObjectPtr::operator=(&local_b8,0);
  while( true ) {
    lVar11 = (longlong)*(int *)(param_1 + 0x50) + 6;
    lVar7 = **(longlong **)(param_1 + 8 + lVar11 * 0x10);
    if (lVar7 == 0) break;
    local_b8 = *(undefined4 *)(lVar7 + 8);
    local_b4 = *(undefined4 *)(lVar7 + 0xc);
    uVar4 = *(undefined8 *)(param_1 + 8 + lVar11 * 0x10);
    *(longlong *)(param_1 + 8 + lVar11 * 0x10) = lVar7;
    *(undefined4 *)(lVar7 + 8) = 0xffffffff;
    *(undefined4 *)(lVar7 + 0xc) = 0;
    FMemory::operator_delete(uVar4,0x10);
    lVar7 = FWeakObjectPtr::Get(&local_b8);
    if (lVar7 != 0) {
      plVar8 = (longlong *)FUN_1426e2550(*(undefined4 *)(lVar7 + 0x328));
      if (plVar8 != plVar10) {
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x360))(plVar10);
        }
        (**(code **)(*plVar8 + 0x358))(plVar8,0,0);
        plVar10 = plVar8;
      }
      FUN_142da6300(lVar7,param_2);
      if (*(char *)(lVar7 + 0x340) != '\0') {
        FWeakObjectPtr::operator=(&local_res8,lVar7);
        lVar7 = 0x60;
        if (*(int *)(param_1 + 0x50) == 0) {
          lVar7 = 0x70;
        }
        puVar9 = (undefined8 *)operator_new(0x10);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = local_res8;
          *(undefined4 *)((longlong)puVar9 + 0xc) = local_resc;
          LOCK();
          puVar3 = *(undefined8 **)(lVar7 + param_1);
          *(undefined8 **)(lVar7 + param_1) = puVar9;
          UNLOCK();
          LOCK();
          *puVar3 = puVar9;
          UNLOCK();
        }
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x360))(plVar10);
  }
  lVar7 = 0x68;
  if (*(int *)(param_1 + 0x50) == 0) {
    lVar7 = 0x78;
  }
  if (**(longlong **)(lVar7 + param_1) == 0) {
    local_78 = (longlong *)0x0;
    local_68 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_a8[0] = &LAB_142d9d9d0;
    plVar10 = (longlong *)FUN_140596960(local_58,0,0xff);
    lVar7 = *plVar10;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar7 + 0x10,local_a8);
    *(undefined4 *)(lVar7 + 0x60) = 2;
    lVar7 = *plVar10;
    lVar6 = plVar10[2];
    lVar11 = plVar10[1];
    lVar5 = *(longlong *)(lVar7 + 0x78);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    local_b0 = lVar5;
    FUN_1405ab110(lVar7,lVar11,(int)lVar6,1);
    if (local_68 != 0) {
      plVar10 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar10 = local_78;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_b0);
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x50) = (uint)(*(int *)(param_1 + 0x50) == 0);
  }
  return;
}



// FUNCTION 142d96240 FUN_142d96240 body=62 status=ok
// SIG undefined FUN_142d96240(void)

undefined8 * FUN_142d96240(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FDynamicPhysicalAnimationTickFunction",0x4c);
  return param_2;
}



// FUNCTION 142d96280 FUN_142d96280 body=52 status=ok
// SIG undefined FUN_142d96280(void)

undefined8 FUN_142d96280(undefined8 param_1,ulonglong param_2)

{
  FUN_142d988f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142d962c0 FUN_142d962c0 body=292 status=ok
// SIG undefined FUN_142d962c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_142d962c0(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  *param_2 = *(undefined1 *)*param_1;
  param_2[8] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0xffffffff;
  local_9c = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
  ::
  TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
            (param_2 + 0x10,&local_d0);
  TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
  ::
  TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
            (param_2 + 0x60,&local_80);
  *(undefined4 *)(param_2 + 0xb0) = local_30;
  *(undefined8 *)(param_2 + 0xb8) = local_28;
  *(undefined4 *)(param_2 + 0xc0) = (undefined4)local_20;
  *(undefined4 *)(param_2 + 0xc4) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  local_38 = 0;
  if (local_40 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_80);
  local_88 = 0;
  if (local_90 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_d0);
  return param_2;
}



// FUNCTION 142d963f0 FUN_142d963f0 body=576 status=ok
// SIG undefined FUN_142d963f0(void)

int * FUN_142d963f0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  byte *_Src;
  bool bVar8;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)iVar7 * 0xd0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0xd0 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (byte *)((longlong)iVar7 * 0xd0 + *param_1);
  FUN_142d962c0(param_3,_Src);
  _Src[200] = 0xff;
  _Src[0xc9] = 0xff;
  _Src[0xca] = 0xff;
  _Src[0xcb] = 0xff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (ulonglong)*_Src) * 4);
      if (iVar5 != -1) {
        do {
          if (*(byte *)((longlong)iVar5 * 0xd0 + *param_1) == *_Src) goto LAB_142d96551;
          iVar5 = *(int *)((longlong)iVar5 * 0xd0 + 200 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142d96551:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0xd0 + *param_1);
      FUN_142d98a00((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,200);
      TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FComponentVelocityData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_142d96605;
    }
  }
  cVar2 = FUN_142da1250(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar6 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0xcc) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 200) =
         *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar6) * 4)
    ;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar6) * 4) = *param_2;
  }
LAB_142d96605:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 142d96630 FUN_142d96630 body=682 status=ok
// SIG undefined FUN_142d96630(void)

uint * FUN_142d96630(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  ulonglong *_Src;
  uint uVar13;
  void *_Dst;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 1);
    iVar6 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar6;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = (ulonglong)(int)param_1[6];
    iVar2 = *(int *)(uVar9 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  uVar8 = (uint)uVar9;
  *param_2 = uVar8;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar8 * 0x20 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _Dst = (void *)(lVar7 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
        uVar9 = (ulonglong)*param_2;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar9 & 0xffffffff,1);
      *param_2 = uVar4;
      goto LAB_142d968b1;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar10;
    }
    uVar4 = (uVar13 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(iVar10 + uVar4) ^ uVar4 >> 0xd;
    uVar13 = (iVar10 - uVar4) - uVar12 ^ uVar12 >> 0xc;
    uVar4 = (uVar4 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar12 = (uVar12 - uVar4) - uVar13 ^ uVar4 >> 5;
    uVar13 = (uVar13 - uVar4) - uVar12 ^ uVar12 >> 3;
    uVar4 = (uVar4 - uVar13) - uVar12 ^ uVar13 << 10;
    uVar13 = ((uVar12 - uVar4) - uVar13 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar13;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142d968b1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142d968e0 FUN_142d968e0 body=408 status=ok
// SIG undefined FUN_142d968e0(void)

int * FUN_142d968e0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uStackX_c;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar6 = false;
  *local_30 = *(uint *)*param_3;
  *(ulonglong *)(local_30 + 1) = CONCAT44(uStackX_c,0xbf800000);
  local_30[3] = 0xffffffff;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  *param_2 = local_38[0];
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar3 * 0x14) == *local_30) goto LAB_142d969ac;
          iVar3 = *(int *)(*param_1 + 0xc + (longlong)iVar3 * 0x14);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_142d969ac:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar3 * 0x14),local_30,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar3;
      goto LAB_142d96a50;
    }
  }
  cVar1 = TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_30;
    local_30[4] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[3] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_142d96a50:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 142d96a80 FUN_142d96a80 body=407 status=ok
// SIG undefined FUN_142d96a80(void)

int * FUN_142d96a80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar5;
  *(undefined8 *)(local_30 + 1) = *puVar1;
  local_30[3] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x14) == *local_30) goto LAB_142d96b4b;
          iVar4 = *(int *)(*param_1 + 0xc + (longlong)iVar4 * 0x14);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_142d96b4b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x14),local_30,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_142d96bef;
    }
  }
  cVar2 = TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[4] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[3] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_142d96bef:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 142d96c20 FUN_142d96c20 body=1073 status=ok
// SIG undefined FUN_142d96c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d96c20(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  int local_58;
  uint uStack_54;
  uint *puStack_50;
  undefined4 local_48;
  uint uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 0x18) = 0;
  local_c8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x1c)) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_54 = 1;
  local_c0 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  local_98 = (uint *)(param_1 + 0x2c0);
  local_ac = 0;
  iVar13 = 0;
  local_58 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = local_98;
    }
    uVar12 = *puVar10;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_142d96d3a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_54 = uVar12 - 1 & uVar12 ^ uVar12;
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
    uStack_44 = (iStack_40 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_44) {
LAB_142d96d3a:
      uStack_44 = uVar1;
    }
  }
  local_48 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_78 = CONCAT44(uStack_54,local_58);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_44;
  local_88 = CONCAT44(uStack_3c,iStack_40);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_a0 = local_58;
  uStack_9c = uStack_54;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = local_98;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142d96dfd;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_142d96dfd:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_80 = local_c0;
  puStack_70 = local_98;
  uStack_60 = local_88;
  puStack_50 = local_98;
  local_a8 = local_c0;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  while( true ) {
    if ((uStack_8c == uVar12) && (local_98 == puStack_50)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_a8 == local_c0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_a8 + (longlong)(int)uStack_8c * 0x10);
    if (lVar7 != 0) {
      lVar4 = ATroiCaoGateActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 0x18);
        *(int *)(param_2 + 0x18) = iVar2 + 1;
        if (*(int *)(param_2 + 0x1c) < iVar2 + 1) {
          TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_c8 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar13 + 1;
        if (iVar5 < local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,iVar13);
          plVar11 = local_b8;
          iVar5 = local_ac;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_b0;
      }
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  if (local_c8 != '\0') {
    uVar8 = 0;
    local_48 = 0;
    uStack_44 = 0;
    iStack_40 = 0;
    uStack_3c = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_142d96c20(*(longlong *)(*plVar14 + 0x2d8),&local_58,1);
          iVar13 = iStack_40;
          lVar7 = (longlong)iStack_40;
          if (iStack_40 != 0) {
            iVar5 = *(int *)(param_2 + 0x18);
            if (*(int *)(param_2 + 0x1c) < iStack_40 + iVar5) {
              TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
              ::ResizeTo(param_2);
              iVar5 = *(int *)(param_2 + 0x18);
            }
            _Src = &local_58;
            if ((int *)CONCAT44(uStack_44,local_48) != (int *)0x0) {
              _Src = (int *)CONCAT44(uStack_44,local_48);
            }
            lVar4 = *(longlong *)(param_2 + 0x10);
            if (*(longlong *)(param_2 + 0x10) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + iVar13;
            iStack_40 = 0;
          }
        }
        plVar14 = plVar14 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar15);
      if (CONCAT44(uStack_44,local_48) != 0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 142d97060 FUN_142d97060 body=69 status=ok
// SIG undefined FUN_142d97060(void)

ulonglong FUN_142d97060(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = ATroiCaoGateActor::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142d970b0 FUN_142d970b0 body=422 status=ok
// SIG undefined FUN_142d970b0(void)

int FUN_142d970b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  plVar2 = (longlong *)*param_2;
  plVar4 = (longlong *)*param_1;
  uVar8 = 0;
  uVar9 = uVar8;
  uVar12 = uVar8;
  if (((((*plVar4 == *plVar2) && (plVar4[1] == plVar2[1])) && (plVar4[2] == plVar2[2])) &&
      ((plVar4[3] == plVar2[3] && (*(float *)(plVar2 + 4) == *(float *)(plVar4 + 4))))) &&
     ((*(float *)((longlong)plVar2 + 0x24) == *(float *)((longlong)plVar4 + 0x24) &&
      ((plVar4[5] == plVar2[5] && (plVar4[6] == plVar2[6])))))) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  do {
    iVar7 = (int)uVar8;
    uVar9 = uVar9 + 1;
    uVar8 = (ulonglong)(iVar7 + 1);
    if ((longlong)uVar9 < lVar10) {
      plVar2 = (longlong *)*param_2;
      plVar4 = (longlong *)(uVar9 * 0x38 + *param_1);
      do {
        if ((((*plVar4 == *plVar2) && (plVar4[1] == plVar2[1])) && (plVar4[2] == plVar2[2])) &&
           (((plVar4[3] == plVar2[3] && (*(float *)(plVar2 + 4) == *(float *)(plVar4 + 4))) &&
            ((*(float *)((longlong)plVar2 + 0x24) == *(float *)((longlong)plVar4 + 0x24) &&
             ((plVar4[5] == plVar2[5] && (plVar4[6] == plVar2[6])))))))) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        if (bVar6 != bVar3) break;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar9 = uVar9 + 1;
        plVar4 = plVar4 + 7;
      } while ((longlong)uVar9 < lVar10);
    }
    iVar5 = (int)uVar8 - iVar7;
    if (bVar6 != 0) {
      iVar11 = (int)uVar12;
      if (iVar11 != iVar7) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x38 + *param_1),
                   (void *)((longlong)iVar7 * 0x38 + *param_1),(longlong)iVar5 * 0x38);
      }
      uVar12 = (ulonglong)(uint)(iVar11 + iVar5);
    }
    bVar6 = bVar6 ^ 1;
    if (lVar10 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = (int)uVar12;
      return iVar1 - (int)uVar12;
    }
  } while( true );
}



// FUNCTION 142d97260 FUN_142d97260 body=158 status=ok
// SIG undefined FUN_142d97260(void)

undefined8 * FUN_142d97260(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1428c1a80();
  *(undefined4 *)(param_1 + 0x93) = 0x42c80000;
  *param_1 = &PTR_FUN_1458a11c8;
  param_1[0x94] = 0;
  plVar1 = (longlong *)param_1[0x8e];
  *(undefined1 *)(param_1 + 0x95) = 1;
  (**(code **)(*plVar1 + 0x648))(plVar1,1);
  (**(code **)(*plVar1 + 0x838))(plVar1,0);
  (**(code **)(*plVar1 + 0x830))(plVar1,2,1);
  (**(code **)(*plVar1 + 0x830))(plVar1,6,1);
  FUN_1423974f0(plVar1,1);
  return param_1;
}



// FUNCTION 142d97300 FUN_142d97300 body=43 status=ok
// SIG undefined FUN_142d97300(void)

undefined8 * FUN_142d97300(undefined8 *param_1)

{
  FUN_1426d3840();
  *(undefined4 *)(param_1 + 0x94) = 0xc4750000;
  *param_1 = &PTR_FUN_1458a3c50;
  return param_1;
}



// FUNCTION 142d97330 FUN_142d97330 body=789 status=ok
// SIG undefined FUN_142d97330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d97330(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1458a4408;
  param_1[0x8b] = &PTR_LAB_1458a4af0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"RootComponent",1);
  uVar1 = *puVar3;
  uVar4 = FUN_1429ff160();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0x2d] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x500))(plVar5,0);
  }
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"VolumePreviewComponent",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0xa6] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x500))(plVar5,0);
    (**(code **)(*(longlong *)param_1[0xa6] + 0x838))((longlong *)param_1[0xa6],0);
    (**(code **)(*(longlong *)param_1[0xa6] + 0x830))((longlong *)param_1[0xa6],2,1);
    local_res8 = 0;
    *(undefined4 *)(param_1[0xa6] + 0x6f0) = DAT_1464aa760;
    FUN_142399e30(param_1[0xa6],param_1[0x2d],0);
  }
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"TopVolumePreviewComponent",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0xa7] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x500))(plVar5,0);
    (**(code **)(*(longlong *)param_1[0xa7] + 0x838))((longlong *)param_1[0xa7],0);
    (**(code **)(*(longlong *)param_1[0xa7] + 0x830))((longlong *)param_1[0xa7],2,1);
    local_res8 = 0;
    *(undefined4 *)(param_1[0xa7] + 0x6f0) = DAT_1464aa760;
    FUN_142399e30(param_1[0xa7],param_1[0x2d],0);
  }
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SegmentMeshComponent",1);
  uVar1 = *puVar3;
  uVar4 = ACameraActor::GetPrivateStaticClass();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0xa3] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x500))(plVar5,0);
    local_res8 = 0;
    FUN_142399e30(param_1[0xa3],param_1[0x2d],0);
  }
  *(undefined4 *)(param_1 + 0xa2) = 1;
  *(undefined4 *)(param_1 + 0x9e) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0x42480000;
  param_1[0xa0] = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined4 *)(param_1 + 0xa1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x42200000;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(byte *)((longlong)param_1 + 0x49c) = *(byte *)((longlong)param_1 + 0x49c) & 0xfe;
  *(undefined4 *)(param_1 + 0x93) = 0;
  return param_1;
}



// FUNCTION 142d97650 FUN_142d97650 body=115 status=ok
// SIG undefined FUN_142d97650(void)

undefined8 * FUN_142d97650(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1458a4b58;
  param_1[0x92] = &PTR_LAB_1458a5278;
  param_1[0x93] = DAT_1464aa798;
  *(undefined4 *)(param_1 + 0x94) = DAT_1464aa7a0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  return param_1;
}



// FUNCTION 142d976d0 FUN_142d976d0 body=129 status=ok
// SIG undefined FUN_142d976d0(void)

undefined8 * FUN_142d976d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RigidBodyComponent0",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e71b90();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  FUN_1423974f0(uVar3,0);
  return param_1;
}



// FUNCTION 142d977b0 FUN_142d977b0 body=489 status=ok
// SIG undefined FUN_142d977b0(void)

undefined4 * FUN_142d977b0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  puVar3 = *(undefined4 **)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if (iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0xe,iVar1,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = param_2 + 0xe;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x16);
    if (*(undefined4 **)(param_1 + 0x16) == (undefined4 *)0x0) {
      puVar2 = param_1 + 0xe;
    }
    _guard_xfg_dispatch_icall_nop(puVar2,puVar3,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar1 = param_2[0x20];
  puVar3 = *(undefined4 **)(param_2 + 0x1e);
  param_1[0x20] = iVar1;
  if (iVar1 == 0) {
    param_1[0x21] = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0x1a,iVar1,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = param_2 + 0x1a;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x1e);
    if (*(undefined4 **)(param_1 + 0x1e) == (undefined4 *)0x0) {
      puVar2 = param_1 + 0x1a;
    }
    _guard_xfg_dispatch_icall_nop(puVar2,puVar3,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(byte *)((longlong)param_1 + 0x89) =
       *(byte *)((longlong)param_1 + 0x89) ^
       (*(byte *)((longlong)param_2 + 0x89) ^ *(byte *)((longlong)param_1 + 0x89)) & 1;
  *(undefined8 *)(param_1 + 0x23) = *(undefined8 *)(param_2 + 0x23);
  param_1[0x25] = param_2[0x25];
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  param_1[0x28] = param_2[0x28];
  *(undefined8 *)(param_1 + 0x29) = *(undefined8 *)(param_2 + 0x29);
  param_1[0x2b] = param_2[0x2b];
  return param_1;
}



// FUNCTION 142d979a0 FUN_142d979a0 body=22 status=ok
// SIG undefined FUN_142d979a0(void)

undefined1 * FUN_142d979a0(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return param_1;
}



// FUNCTION 142d979c0 FUN_142d979c0 body=20 status=ok
// SIG undefined FUN_142d979c0(void)

undefined1 * FUN_142d979c0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 142d979e0 FUN_142d979e0 body=425 status=ok
// SIG undefined FUN_142d979e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d979e0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_140949460();
  *param_1 = &PTR_FUN_1458a2260;
  param_1[0xba] = 0;
  *(undefined1 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0x3c;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 4;
  *(undefined4 *)(param_1 + 0xbc) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0xbe) = 0x41200000;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  *(undefined4 *)(param_1 + 0xda) = 0xffffffff;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  uVar2 = uRam0000000146b342cc;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *(uint *)((longlong)param_1 + 0x70c) = uVar2;
  uVar2 = uRam0000000146b342c4 & uRam0000000146b342d4;
  uVar3 = uRam0000000146b342c8 & uRam0000000146b342d8;
  uVar4 = uRam0000000146b342cc & uRam0000000146b342dc;
  *(uint *)(param_1 + 0xe4) = _DAT_146b342c0 & _DAT_146b342d0;
  *(uint *)((longlong)param_1 + 0x724) = uVar2;
  *(uint *)(param_1 + 0xe5) = uVar3;
  *(uint *)((longlong)param_1 + 0x72c) = uVar4;
  uVar1 = uRam00000001468b5b78;
  param_1[0xb0] = _DAT_1468b5b70;
  param_1[0xb1] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[0xb2] = _DAT_1468b5b80;
  param_1[0xb3] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[0xb4] = _DAT_1468b5b90;
  param_1[0xb5] = uVar1;
  param_1[0xe0] = param_1[0xb0];
  param_1[0xe1] = param_1[0xb1];
  param_1[0xe2] = param_1[0xb2];
  param_1[0xe3] = param_1[0xb3];
  param_1[0xe4] = param_1[0xb4];
  param_1[0xe5] = param_1[0xb5];
  return param_1;
}



// FUNCTION 142d97b90 FUN_142d97b90 body=155 status=ok
// SIG undefined FUN_142d97b90(void)

longlong * FUN_142d97b90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 == 0) && (*param_2 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2[1];
  }
  param_1[1] = lVar3;
  if (lVar1 != 0) {
    lVar3 = FUN_1428e7a40();
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
      param_1[2] = lVar1;
      return param_1;
    }
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142d97c30 FUN_142d97c30 body=30 status=ok
// SIG undefined FUN_142d97c30(void)

undefined8 * FUN_142d97c30(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1458a3990;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return param_1;
}



// FUNCTION 142d97c50 FUN_142d97c50 body=21 status=ok
// SIG undefined FUN_142d97c50(void)

undefined8 * FUN_142d97c50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0x3e800000;
  return param_1;
}



// FUNCTION 142d97c70 FUN_142d97c70 body=48 status=ok
// SIG undefined FUN_142d97c70(void)

undefined8 * FUN_142d97c70(undefined8 *param_1)

{
  FUN_1426d3dd0(param_1 + 1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142d97ca0 FUN_142d97ca0 body=57 status=ok
// SIG undefined FUN_142d97ca0(void)

undefined8 * FUN_142d97ca0(undefined8 *param_1)

{
  UAISenseConfig::UAISenseConfig();
  *param_1 = &PTR__scalar_deleting_destructor__1458a2668;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x443b8000;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa74c;
  return param_1;
}



// FUNCTION 142d97ce0 FUN_142d97ce0 body=46 status=ok
// SIG undefined FUN_142d97ce0(void)

undefined8 * FUN_142d97ce0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  UAISenseConfig::UAISenseConfig();
  *param_1 = &PTR__scalar_deleting_destructor__1458a2bb8;
  uVar1 = DAT_1464aa754;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  return param_1;
}



// FUNCTION 142d97d10 FUN_142d97d10 body=177 status=ok
// SIG undefined FUN_142d97d10(void)

undefined8 * FUN_142d97d10(undefined8 *param_1)

{
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_1458a2398;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_140747230(param_1 + 0xb,param_1,FUN_142db26a0);
    FUN_140747230(param_1 + 0xd,param_1,FUN_142db24c0);
    FUN_140747230(param_1 + 0xf,param_1,&LAB_142db2420);
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  return param_1;
}



// FUNCTION 142d97dd0 FUN_142d97dd0 body=177 status=ok
// SIG undefined FUN_142d97dd0(void)

undefined8 * FUN_142d97dd0(undefined8 *param_1)

{
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_1458a28e8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_140747230(param_1 + 0xb,param_1,FUN_142db2790);
    FUN_140747230(param_1 + 0xd,param_1,FUN_142db2660);
    FUN_140747230(param_1 + 0xf,param_1,FUN_142db2490);
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  return param_1;
}



// FUNCTION 142d97e90 FUN_142d97e90 body=99 status=ok
// SIG undefined FUN_142d97e90(void)

undefined8 * FUN_142d97e90(undefined8 *param_1)

{
  FUN_142c1b430();
  *param_1 = &PTR_FUN_1458a2e38;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  DAT_146b34274 = 0;
  param_1[0x2a] = 0x3f2a36e2e0000000;
  return param_1;
}



// FUNCTION 142d97f00 FUN_142d97f00 body=447 status=ok
// SIG undefined FUN_142d97f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d97f00(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_1458a3568;
  param_1[5] = &PTR_LAB_1458a3960;
  FName::FName(param_1 + 0x2f,L"PhysicalAnimation",1);
  FName::FName(param_1 + 0x30,L"CharacterMesh",1);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)((longlong)param_1 + 0x211) = 0;
  uVar1 = uRam0000000146b342cc;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(uint *)((longlong)param_1 + 0x22c) = uVar1;
  uVar1 = uRam0000000146b342c4 & uRam0000000146b342d4;
  uVar2 = uRam0000000146b342c8 & uRam0000000146b342d8;
  uVar3 = uRam0000000146b342cc & uRam0000000146b342dc;
  *(uint *)(param_1 + 0x48) = _DAT_146b342c0 & _DAT_146b342d0;
  *(uint *)((longlong)param_1 + 0x244) = uVar1;
  *(uint *)(param_1 + 0x49) = uVar2;
  *(uint *)((longlong)param_1 + 0x24c) = uVar3;
  uVar1 = uRam0000000146b342cc;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(uint *)((longlong)param_1 + 0x25c) = uVar1;
  uVar1 = uRam0000000146b342c4 & uRam0000000146b342d4;
  uVar2 = uRam0000000146b342c8 & uRam0000000146b342d8;
  uVar3 = uRam0000000146b342cc & uRam0000000146b342dc;
  *(uint *)(param_1 + 0x4e) = _DAT_146b342c0 & _DAT_146b342d0;
  *(uint *)((longlong)param_1 + 0x274) = uVar1;
  *(uint *)(param_1 + 0x4f) = uVar2;
  *(uint *)((longlong)param_1 + 0x27c) = uVar3;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfe | 2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xdf;
  _DAT_146b343d8 = 0x502;
  DAT_146b343dc = DAT_146b343dc & 0xfe | 0x22;
  return param_1;
}



// FUNCTION 142d980c0 FUN_142d980c0 body=68 status=ok
// SIG undefined FUN_142d980c0(void)

undefined8 * FUN_142d980c0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1458a0f50;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 142d98110 FUN_142d98110 body=62 status=ok
// SIG undefined FUN_142d98110(void)

undefined8 * FUN_142d98110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142c1a8f0(param_1,uVar1);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
  *param_1 = &PTR_FUN_1458a3118;
  param_1[5] = &PTR_LAB_1458a3538;
  return param_1;
}



// FUNCTION 142d98150 FUN_142d98150 body=33 status=ok
// SIG undefined FUN_142d98150(void)

undefined8 * FUN_142d98150(undefined8 *param_1)

{
  UPhysicsCollisionHandler::UPhysicsCollisionHandler();
  *param_1 = &PTR_FUN_1458a39c8;
  return param_1;
}



// FUNCTION 142d98180 FUN_142d98180 body=77 status=ok
// SIG undefined FUN_142d98180(void)

undefined8 * FUN_142d98180(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__14589f9e0;
  param_1[5] = &PTR_LAB_14589fdd8;
  param_1[0x2f] = 0x10000;
  return param_1;
}



// FUNCTION 142d981d0 FUN_142d981d0 body=189 status=ok
// SIG undefined FUN_142d981d0(void)

undefined8 * FUN_142d981d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x32) = 0x43480000;
  *param_1 = &PTR_FUN_1458a0b28;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  param_1[5] = &PTR_LAB_1458a0f20;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x33);
  param_1[0x42] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x43);
  param_1[0x52] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x53);
  param_1[0x62] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 0xe;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  return param_1;
}



// FUNCTION 142d98290 UNavigationDataChunk body=39 status=ok
// SIG undefined UNavigationDataChunk(void)

undefined8 * UNavigationDataChunk::UNavigationDataChunk(undefined8 *param_1)

{
  FUN_1425d94e0();
  *param_1 = &PTR_FUN_1458a1d50;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142d982c0 FUN_142d982c0 body=43 status=ok
// SIG undefined FUN_142d982c0(void)

undefined8 * FUN_142d982c0(undefined8 *param_1)

{
  FUN_1425d94e0();
  *param_1 = &PTR_FUN_1458a1fd8;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 142d982f0 FUN_142d982f0 body=201 status=ok
// SIG undefined FUN_142d982f0(void)

undefined8 * FUN_142d982f0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458a0090;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0xc;
  param_1[0x1d] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x43c80000;
  *(undefined4 *)(param_1 + 7) = 0x44160000;
  *(undefined4 *)(param_1 + 0x12) = 0x44070000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x44340000;
  *(undefined1 *)(param_1 + 0x13) = 8;
  return param_1;
}



// FUNCTION 142d983c0 FUN_142d983c0 body=138 status=ok
// SIG undefined FUN_142d983c0(void)

undefined8 * FUN_142d983c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_1423c48a0();
  *param_1 = &PTR_FUN_1458a52e0;
  param_1[5] = &PTR_LAB_1458a5c60;
  param_1[0x5a] = &PTR_LAB_1458a5c90;
  param_1[0xf5] = &PTR_LAB_1458a5ce8;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PhysicsBody",1);
  FUN_1426a8ca0(param_1 + 0x76,*puVar1);
  *(undefined1 *)(param_1 + 0xf9) = 1;
  return param_1;
}



// FUNCTION 142d98450 FUN_142d98450 body=138 status=ok
// SIG undefined FUN_142d98450(void)

undefined8 * FUN_142d98450(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_1458a0318;
  param_1[5] = &PTR_LAB_1458a0860;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  param_1[0x5a] = 0;
  return param_1;
}



// FUNCTION 142d984e0 FUN_142d984e0 body=51 status=ok
// SIG undefined FUN_142d984e0(void)

undefined8 * FUN_142d984e0(undefined8 *param_1)

{
  FUN_142326e40();
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1450457f0;
  param_1[5] = &PTR_LAB_144198018;
  return param_1;
}



// FUNCTION 142d98520 FUN_142d98520 body=102 status=ok
// SIG undefined FUN_142d98520(void)

undefined8 * FUN_142d98520(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1458a18e8;
  param_1[5] = &PTR_LAB_1458a1d20;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  UActorComponent::SetTickGroup(param_1,5);
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 3;
  return param_1;
}



// FUNCTION 142d98590 UAssetImportData body=33 status=ok
// SIG undefined UAssetImportData(void)

undefined8 * UAssetImportData::UAssetImportData(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14589fe08;
  return param_1;
}



// FUNCTION 142d985c0 FUN_142d985c0 body=180 status=ok
// SIG undefined FUN_142d985c0(void)

undefined8 * FUN_142d985c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_1458a0890;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  uVar1 = AAfrPlayerState::GetPrivateStaticClass();
  param_1[5] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  *(undefined4 *)(param_1 + 0x11) = 0x43960000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf9 | 1;
  return param_1;
}



// FUNCTION 142d98680 FUN_142d98680 body=112 status=ok
// SIG undefined FUN_142d98680(void)

void FUN_142d98680(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x58);
    do {
      if (plVar2[4] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x16;
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



// FUNCTION 142d986f0 FUN_142d986f0 body=98 status=ok
// SIG undefined FUN_142d986f0(void)

void FUN_142d986f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x20;
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



// FUNCTION 142d98760 FUN_142d98760 body=395 status=ok
// SIG undefined FUN_142d98760(void)

void FUN_142d98760(longlong *param_1)

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
  uStack_54 = 1;
  local_58 = 0;
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
      if (bVar4) goto LAB_142d98821;
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
LAB_142d98821:
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
      FUN_142d98a00((longlong)iStack_1c * 0xd0 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 142d988f0 FUN_142d988f0 body=101 status=ok
// SIG undefined FUN_142d988f0(void)

void FUN_142d988f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)(param_1 + 0x88);
  lVar4 = 2;
  do {
    lVar4 = lVar4 + -1;
    plVar3 = plVar3 + -2;
    lVar1 = *plVar3;
    while (lVar1 != 0) {
      plVar2 = (longlong *)*plVar3;
      *plVar3 = *plVar2;
      FMemory::operator_delete(plVar2,0x10);
      lVar1 = *plVar3;
    }
  } while (lVar4 != 0);
  FTickFunction::~FTickFunction(param_1);
  return;
}



// FUNCTION 142d98960 FUN_142d98960 body=130 status=ok
// SIG undefined FUN_142d98960(void)

void FUN_142d98960(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    param_1[2] = *(longlong *)(lVar1 + 0x18);
    if (*(longlong *)(lVar1 + 8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x20);
    lVar1 = param_1[2];
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  FUN_142d98760(param_1 + 3);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d989f0 FUN_142d989f0 body=11 status=ok
// SIG undefined FUN_142d989f0(void)

void FUN_142d989f0(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_144147258;
  return;
}



// FUNCTION 142d98a00 FUN_142d98a00 body=106 status=ok
// SIG undefined FUN_142d98a00(void)

void FUN_142d98a00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  return;
}



// FUNCTION 142d98a70 FUN_142d98a70 body=172 status=ok
// SIG undefined FUN_142d98a70(void)

void FUN_142d98a70(longlong param_1)

{
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  FUN_142c1ba20(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 142d98b20 FUN_142d98b20 body=153 status=ok
// SIG undefined FUN_142d98b20(void)

void FUN_142d98b20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142d98bc0 operator= body=225 status=ok
// SIG undefined operator=(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FRigVMRuntimeSettings::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
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
  puVar1 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  uStack_30 = *(longlong **)(param_2 + 4);
  local_38 = *(undefined8 *)(param_2 + 2);
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = *(longlong **)(param_1 + 4);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    param_1[3] = local_38._4_4_;
    param_1[4] = (undefined4)uStack_30;
    param_1[5] = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 142d98cb0 FUN_142d98cb0 body=169 status=ok
// SIG undefined FUN_142d98cb0(void)

longlong * FUN_142d98cb0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2 + 0x40);
  uVar2 = FUN_1406da970(uVar2,param_2);
  uVar2 = FUN_140da9f70(uVar2,param_2 + 0x10);
  uVar2 = FUN_1406da970(uVar2,param_2 + 0x20);
  plVar3 = (longlong *)FUN_1406da970(uVar2,param_2 + 0x2c);
  puVar1 = *(undefined1 **)plVar3[1];
  if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x38,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
  }
  return param_1;
}



// FUNCTION 142d98d60 FUN_142d98d60 body=139 status=ok
// SIG undefined FUN_142d98d60(void)

ulonglong FUN_142d98d60(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if ((((*(ulonglong *)(param_1 + 0x10) == uVar3) && (*param_2 == *param_1)) &&
      (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) {
    auVar1._4_4_ = -(uint)(param_1[5] == param_2[5]);
    auVar1._0_4_ = -(uint)(param_1[4] == param_2[4]);
    auVar1._8_4_ = -(uint)(param_1[6] == param_2[6]);
    auVar1._12_4_ = -(uint)(param_1[7] == param_2[7]);
    iVar2 = movmskps((int)uVar3,auVar1);
    uVar3 = CONCAT44((int)(uVar3 >> 0x20),iVar2);
    if (((((iVar2 == 0xf) && (param_2[8] == param_1[8])) &&
         ((param_2[9] == param_1[9] &&
          ((param_2[10] == param_1[10] && (param_2[0xb] == param_1[0xb])))))) &&
        (param_2[0xc] == param_1[0xc])) &&
       ((param_2[0xd] == param_1[0xd] &&
        (uVar3 = 0, *(char *)(param_1 + 0xe) == *(char *)(param_2 + 0xe))))) {
      return 1;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142d98df0 FUN_142d98df0 body=404 status=ok
// SIG undefined FUN_142d98df0(void)

undefined8 FUN_142d98df0(longlong *param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte local_res8 [8];
  ushort local_res10 [4];
  longlong local_28;
  ulonglong local_20;
  
  plVar1 = *(longlong **)(*param_1 + 8);
  cVar6 = (**(code **)(*plVar1 + 0xa0))(plVar1);
  while( true ) {
    if (cVar6 != '\0') {
      return 1;
    }
    pbVar2 = *(byte **)plVar1[1];
    if ((byte *)((undefined8 *)plVar1[1])[1] < pbVar2 + 1) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,1);
    }
    else {
      local_res8[0] = *pbVar2;
      *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
    }
    plVar3 = (longlong *)plVar1[1];
    if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res10,2);
      if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar1,local_res10,2);
      }
    }
    else {
      local_res10[0] = *(ushort *)*plVar3;
      *plVar3 = *plVar3 + 2;
    }
    plVar3 = (longlong *)param_1[1];
    lVar4 = plVar1[0x15];
    if ((((int)(uint)local_res8[0] < (int)plVar3[1]) &&
        (*(longlong *)(*plVar3 + (ulonglong)local_res8[0] * 0x18) != 0)) &&
       (*(longlong *)(*plVar3 + 8 + (ulonglong)local_res8[0] * 0x18) != 0)) {
      FUN_142db4a80(plVar3,*param_1);
    }
    else {
      local_28 = 0;
      local_20 = 0;
      if (local_res10[0] + 7 >> 3 != 0) {
        local_20 = (ulonglong)(local_res10[0] + 7 >> 3);
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      lVar5 = local_28;
      (**(code **)(*plVar1 + 0x58))(plVar1,local_28,local_res10[0]);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    if (((char)plVar1[5] < '\0') || (plVar1[0x15] - lVar4 != (ulonglong)local_res10[0])) break;
    cVar6 = (**(code **)(*plVar1 + 0xa0))(plVar1);
  }
  return 0;
}



// FUNCTION 142d98f90 FUN_142d98f90 body=331 status=ok
// SIG undefined FUN_142d98f90(void)

void FUN_142d98f90(longlong *param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)param_3;
  if (0 < *(int *)param_1[1]) {
    plVar1 = (longlong *)*param_1;
    lVar7 = 0;
    piVar4 = (int *)*plVar1;
    do {
      if (*piVar4 == *param_2) {
        iVar5 = (int)plVar1[1];
        iVar3 = (iVar5 - param_3) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar6 * 0x40 + *plVar1),
                     (void *)((longlong)(param_3 + 1) * 0x40 + *plVar1),(longlong)iVar3 << 6);
          iVar5 = (int)plVar1[1];
        }
        *(int *)(plVar1 + 1) = iVar5 + -1;
        TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
        return;
      }
      lVar7 = lVar7 + 1;
      piVar4 = piVar4 + 0x10;
    } while (lVar7 < *(int *)param_1[1]);
  }
  param_1 = (longlong *)*param_1;
  iVar5 = (int)param_1[1];
  if (param_3 < iVar5 + -1) {
    lVar7 = (longlong)(iVar5 + -1);
    piVar4 = (int *)(lVar7 * 0x40 + *param_1);
    do {
      if (*piVar4 == *param_2) {
        iVar3 = (iVar5 - param_3) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + lVar6 * 0x40),
                     (void *)((longlong)(param_3 + 1) * 0x40 + *param_1),(longlong)iVar3 << 6);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
        return;
      }
      lVar7 = lVar7 + -1;
      piVar4 = piVar4 + -0x10;
    } while (lVar6 < lVar7);
  }
  piVar4 = (int *)(lVar6 * 0x40 + *param_1);
  *piVar4 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(piVar4 + 6) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(piVar4 + 10) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(piVar4 + 0xe) = uVar2;
  return;
}



// FUNCTION 142d990e0 FUN_142d990e0 body=2625 status=ok
// SIG undefined FUN_142d990e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d990e0(undefined8 *param_1)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  float *pfVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined ***pppuVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
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
  undefined1 auStack_258 [32];
  float *local_238;
  float local_228 [2];
  undefined8 local_220;
  undefined ***pppuStack_218;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined8 local_200;
  float local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188;
  float fStack_184;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined **local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined ***local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  plVar3 = (longlong *)FUN_142697a40(*(undefined8 *)*param_1);
  plVar15 = *(longlong **)(*(longlong *)param_1[1] + 0x110);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = *(longlong **)(*(longlong *)param_1[1] + 0x118);
  }
  puVar11 = (undefined8 *)0x0;
  uStack_108 = (undefined ***)CONCAT44(uStack_108._4_4_,(undefined4)uStack_108);
  if ((plVar3 != (longlong *)0x0) &&
     (uStack_108 = (undefined ***)CONCAT44(uStack_108._4_4_,(undefined4)uStack_108),
     plVar15 != (longlong *)0x0)) {
    pfVar4 = (float *)(**(code **)(*plVar15 + 0xa0))(plVar15,&local_1b8);
    fVar18 = *pfVar4;
    fVar20 = pfVar4[1];
    fVar22 = pfVar4[2];
    fVar30 = -fVar18;
    fVar1 = pfVar4[3];
    local_228[0] = -fVar22;
    fVar24 = -(pfVar4[4] + pfVar4[4]);
    fVar23 = -(pfVar4[5] + pfVar4[5]);
    fVar21 = -(pfVar4[6] + pfVar4[6]);
    fVar28 = fVar1 * fVar1 - 0.5;
    fVar29 = -fVar20;
    fVar19 = fVar20 * fVar23 + fVar18 * fVar24 + fVar22 * fVar21;
    fVar25 = (fVar28 * fVar24 - (fVar20 * fVar21 - fVar22 * fVar23) * fVar1) + fVar18 * fVar19;
    fVar26 = (fVar28 * fVar23 - (fVar22 * fVar24 - fVar18 * fVar21) * fVar1) + fVar20 * fVar19;
    fVar27 = (fVar28 * fVar21 - (fVar18 * fVar23 - fVar20 * fVar24) * fVar1) + fVar22 * fVar19;
    local_200 = CONCAT44(fVar26,fVar25);
    local_210 = fVar30;
    fStack_20c = fVar29;
    fStack_208 = local_228[0];
    fStack_204 = fVar1;
    local_1f8 = fVar27;
    lVar5 = (**(code **)(*plVar3 + 0xa0))(plVar3,local_158);
    fVar21 = *(float *)(lVar5 + 0x10) + *(float *)(lVar5 + 0x10);
    fVar20 = *(float *)(lVar5 + 0x18) + *(float *)(lVar5 + 0x18);
    fVar24 = *(float *)(lVar5 + 0x14) + *(float *)(lVar5 + 0x14);
    fVar23 = fVar21 * local_228[0];
    fVar18 = fVar24 * local_228[0];
    fVar22 = fVar29 * fVar24 + fVar21 * fVar30 + fVar20 * local_228[0];
    fVar19 = fVar22 * local_228[0];
    puVar6 = (undefined4 *)physx::PxQuat::operator*(&local_210,&local_220,lVar5);
    local_200 = 0;
    local_1f8 = 0.0;
    local_1d8 = *puVar6;
    local_1d4 = puVar6[1];
    local_1d0 = puVar6[2];
    local_1cc = puVar6[3];
    local_210 = 0.0;
    fStack_20c = 0.0;
    fStack_208 = 0.0;
    fStack_204 = 1.0;
    local_238 = &local_210;
    local_1c8 = (fVar29 * fVar20 - fVar18) * fVar1 + fVar28 * fVar21 + fVar22 * fVar30 + fVar25;
    local_1c4 = (fVar23 - fVar20 * fVar30) * fVar1 + fVar28 * fVar24 + fVar29 * fVar22 + fVar26;
    local_1c0 = (fVar24 * fVar30 - fVar29 * fVar21) * fVar1 + fVar28 * fVar20 + fVar19 + fVar27;
    plVar3 = (longlong *)physx::PxD6JointCreate(DAT_146b08400,plVar15,&local_1d8,plVar3);
    uStack_170 = *(undefined8 *)param_1[2];
    local_168 = **(undefined4 **)*param_1;
    local_178 = plVar3;
    (**(code **)(*plVar3 + 0x180))(plVar3,0x3dcccccd);
    (**(code **)(*plVar3 + 0x170))(plVar3,0x3f800000);
    (**(code **)(*plVar3 + 0xe8))(plVar3,0,0);
    (**(code **)(*plVar3 + 0xe8))(plVar3,1);
    (**(code **)(*plVar3 + 0xe8))(plVar3,2);
    (**(code **)(*plVar3 + 0xe8))(plVar3,4);
    (**(code **)(*plVar3 + 0xe8))(plVar3,5);
    (**(code **)(*plVar3 + 0xe8))(plVar3,3,0);
    (**(code **)(*plVar3 + 0x98))(plVar3);
    (**(code **)(*plVar3 + 0x88))(plVar3,0);
    fVar18 = *(float *)param_1[3];
    if (1e-08 < fVar18) {
      (**(code **)(*plVar3 + 0x60))(plVar3,fVar18,fVar18);
    }
    puVar7 = (undefined8 *)operator_new(0x18);
    puVar9 = puVar11;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[2] = 0;
      puVar7[1] = 0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
      puVar9 = puVar7;
    }
    plVar3[2] = (longlong)puVar9;
    puVar9[1] = param_1[4];
    *(undefined4 *)puVar9 = 8;
    puVar9[2] = *(undefined8 *)param_1[2];
    lVar5 = param_1[4];
    uVar10 = **(uint **)*param_1;
    uVar16 = (ulonglong)(int)uVar10;
    uVar14 = uVar10;
    fVar18 = fStack_184;
    if (uVar10 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(uint *)(uVar16 * 0x100 + *(longlong *)(lVar5 + 0x2f8));
    }
    while (fStack_184 = fVar18, uVar2 != 0xffffffff) {
      fStack_184 = *(float *)param_1[5];
      if (1e-08 < fStack_184) {
        uStack_190 = *(undefined8 *)param_1[2];
        local_188 = uVar2;
        plVar3 = (longlong *)
                 FUN_142697a40(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(lVar5 + 0x330) + 0xbf0) +
                                (longlong)(int)uVar2 * 8));
        fVar18 = fStack_184;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0xa0))(plVar15,local_158);
          (**(code **)(*plVar3 + 0xa0))(plVar3,local_138);
          local_238 = &local_210;
          local_200 = 0;
          local_210 = 0.0;
          fStack_20c = 0.0;
          fStack_208 = 0.0;
          fStack_204 = 1.0;
          local_1f8 = 0.0;
          local_1b8 = 0;
          uStack_1b4 = 0;
          uStack_1b0 = 0;
          uStack_1ac = 0x3f800000;
          local_1a8 = 0;
          local_1a0 = 0;
          plVar3 = (longlong *)physx::PxD6JointCreate(DAT_146b08400,plVar15,&local_1b8,plVar3);
          local_198 = plVar3;
          (**(code **)(*plVar3 + 0xe8))(plVar3,0,2);
          (**(code **)(*plVar3 + 0xe8))(plVar3,1,2);
          (**(code **)(*plVar3 + 0xe8))(plVar3,2,2);
          (**(code **)(*plVar3 + 0xe8))(plVar3,4,2);
          (**(code **)(*plVar3 + 0xe8))(plVar3,5,2);
          (**(code **)(*plVar3 + 0xe8))(plVar3,3,2);
          pppuStack_218 = (undefined ***)0x17f7fffff;
          local_220 = (ulonglong)(uint)(*(float *)param_1[5] / *(float *)param_1[6]) << 0x20;
          (**(code **)(*plVar3 + 0x140))(plVar3,0,&local_220);
          (**(code **)(*plVar3 + 0x140))(plVar3,1,&local_220);
          (**(code **)(*plVar3 + 0x140))(plVar3,2,&local_220);
          (**(code **)(*plVar3 + 0x140))(plVar3,3,&local_220);
          (**(code **)(*plVar3 + 0x140))(plVar3,4,&local_220);
          (**(code **)(*plVar3 + 0x140))(plVar3,5,&local_220);
          local_1f4 = 0;
          local_1ec = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          (**(code **)(*plVar3 + 0x160))(plVar3,&local_1e8,&local_1f4);
          (**(code **)(*plVar3 + 0x98))(plVar3,0);
          (**(code **)(*plVar3 + 0x88))(plVar3,0);
          lVar5 = param_1[4];
          iVar12 = *(int *)(lVar5 + 0x310);
          *(int *)(lVar5 + 0x310) = iVar12 + 1;
          if (*(int *)(lVar5 + 0x314) < iVar12 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(lVar5 + 0x308,iVar12);
          }
          lVar5 = *(longlong *)(lVar5 + 0x308);
          puVar6 = (undefined4 *)((longlong)iVar12 * 0x20 + lVar5);
          *puVar6 = (undefined4)local_198;
          puVar6[1] = local_198._4_4_;
          puVar6[2] = (undefined4)uStack_190;
          puVar6[3] = uStack_190._4_4_;
          puVar9 = (undefined8 *)((longlong)iVar12 * 0x20 + 0x10 + lVar5);
          *puVar9 = CONCAT44(fStack_184,local_188);
          puVar9[1] = uStack_180;
          fVar18 = fStack_184;
        }
      }
      fStack_184 = fVar18;
      lVar5 = param_1[4];
      uVar10 = (uint)uVar16;
      uVar16 = (ulonglong)uVar2;
      if (uVar10 == 0xffffffff) {
        iVar12 = -1;
      }
      else {
        iVar12 = *(int *)((longlong)(int)uVar10 * 0x100 + 4 + *(longlong *)(lVar5 + 0x2f8));
      }
      uVar14 = uVar2;
      fVar18 = fStack_184;
      if (iVar12 != -1) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x330) + 0xc00) + (longlong)iVar12 * 8);
        plVar3 = *(longlong **)(lVar5 + 8);
        (**(code **)(*plVar3 + 0x98))(plVar3,0x40000000);
        plVar3 = *(longlong **)(lVar5 + 8);
        (**(code **)(*plVar3 + 0x88))(plVar3,0x40000000);
        lVar5 = param_1[4];
        if (uVar2 == 0xffffffff) break;
        uVar2 = *(uint *)((longlong)(int)uVar2 * 0x100 + *(longlong *)(lVar5 + 0x2f8));
        fVar18 = fStack_184;
      }
    }
    iVar12 = *(int *)(lVar5 + 800);
    *(int *)(lVar5 + 800) = iVar12 + 1;
    uStack_160 = uVar10;
    if (*(int *)(lVar5 + 0x324) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow((longlong *)(lVar5 + 0x318),iVar12);
    }
    lVar5 = *(longlong *)(lVar5 + 0x318);
    pppuVar13 = &local_118;
    lVar17 = (longlong)(int)uVar14 * 0x100;
    puVar9 = (undefined8 *)((longlong)iVar12 * 0x20 + lVar5);
    *puVar9 = local_178;
    puVar9[1] = uStack_170;
    puVar9 = (undefined8 *)((longlong)iVar12 * 0x20 + 0x10 + lVar5);
    *puVar9 = CONCAT44(uStack_164,local_168);
    puVar9[1] = CONCAT44(uStack_15c,uStack_160);
    lVar5 = param_1[4];
    pppuStack_218 = &local_118;
    local_118 = &PTR_LAB_1458a5d30;
    local_e0 = pppuVar13;
    local_220._0_4_ = (undefined4)lVar5;
    local_220._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    local_110 = (undefined4)local_220;
    uStack_10c = local_220._4_4_;
    uStack_108 = pppuStack_218;
    puVar9 = puVar11;
    puVar7 = puVar11;
    local_220 = lVar5;
    if (0 < *(int *)(*(longlong *)(lVar5 + 0x2f8) + 0x10 + lVar17)) {
      do {
        lVar8 = *(longlong *)(lVar5 + 0x318);
        fVar18 = *(float *)((longlong)puVar7 +
                           *(longlong *)(*(longlong *)(lVar5 + 0x2f8) + 8 + lVar17));
        lVar5 = (longlong)*(int *)(lVar5 + 800) * 0x20 + lVar8;
        for (; lVar8 != lVar5; lVar8 = lVar8 + 0x20) {
          if (*(float *)(lVar8 + 0x18) == fVar18) goto LAB_142d99a55;
        }
        if (fVar18 != -NAN) {
          local_228[0] = fVar18;
          if (pppuVar13 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_guard_xfg_dispatch_icall_nop();
          }
          (*(code *)(*pppuVar13)[2])(pppuVar13,local_228);
          pppuVar13 = local_e0;
        }
LAB_142d99a55:
        lVar5 = param_1[4];
        uVar10 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar10;
        puVar7 = (undefined8 *)((longlong)puVar7 + 4);
      } while ((int)uVar10 < *(int *)(*(longlong *)(lVar5 + 0x2f8) + 0x10 + lVar17));
    }
    if (pppuVar13 != (undefined ***)0x0) {
      (*(code *)(*pppuVar13)[4])
                (pppuVar13,CONCAT71((int7)((ulonglong)lVar5 >> 8),pppuVar13 != &local_118));
    }
  }
  lVar5 = param_1[4];
  puVar9 = puVar11;
  if (0 < *(int *)(*(longlong *)(lVar5 + 0x330) + 0xbf8)) {
    do {
      if (*(longlong *)((longlong)puVar11 + *(longlong *)(*(longlong *)(lVar5 + 0x330) + 0xbf0)) !=
          0) {
        lVar5 = FUN_142697a40();
        if (lVar5 != 0) {
          FUN_142db9650(*(undefined8 *)param_1[7],lVar5,1);
        }
      }
      lVar5 = param_1[4];
      uVar10 = (int)puVar9 + 1;
      puVar11 = puVar11 + 1;
      puVar9 = (undefined8 *)(ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(*(longlong *)(lVar5 + 0x330) + 0xbf8));
  }
  return;
}



// FUNCTION 142d99b30 FUN_142d99b30 body=360 status=ok
// SIG undefined FUN_142d99b30(void)

void FUN_142d99b30(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  byte local_a8 [12];
  undefined4 local_9c;
  undefined1 local_3c [8];
  undefined1 local_34 [28];
  
  if (DAT_146b34274 == '\0') {
    param_1 = (longlong *)*param_1;
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    UAISense::GetListeners(param_1);
    lVar5 = param_1[0x2e];
    lVar4 = (longlong)(int)param_1[0x2f] * 0xb0 + lVar5;
    if (lVar5 != lVar4) {
      puVar3 = (undefined8 *)(lVar5 + 0x98);
      do {
        _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
        local_9c = 0x3f800000;
        UWorld::LineTraceSingleByChannel
                  (uVar1,local_a8,(longlong)puVar3 + -0xc,puVar3,(int)param_1[0x2d],puVar3 + -0x11,
                   &DAT_146aefe68);
        *(undefined8 *)((longlong)puVar3 + 0xc) = *puVar3;
        *(byte *)((longlong)puVar3 + -0xf) =
             *(byte *)((longlong)puVar3 + -0xf) ^
             (~local_a8[0] ^ *(byte *)((longlong)puVar3 + -0xf)) & 1;
        *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)(puVar3 + 1);
        if ((*(byte *)((longlong)puVar3 + -0xf) & 1) == 0) {
          lVar2 = FWeakObjectPtr::Get(local_3c);
          if (lVar2 == 0) {
            FWeakObjectPtr::Get(local_34);
          }
          else if (lVar2 == puVar3[-0x12]) {
            *(byte *)((longlong)puVar3 + -0xf) = *(byte *)((longlong)puVar3 + -0xf) | 1;
          }
        }
        lVar5 = lVar5 + 0xb0;
        puVar3 = puVar3 + 0x16;
      } while (lVar5 != lVar4);
    }
  }
  return;
}



// FUNCTION 142d99ca0 FUN_142d99ca0 body=136 status=ok
// SIG undefined FUN_142d99ca0(void)

longlong FUN_142d99ca0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  
  FUN_14162bcf0(param_3,param_2,*param_1);
  lVar2 = param_1[1];
  iVar1 = *(int *)param_1[2];
  if (*(char *)((longlong)iVar1 + *(longlong *)(lVar2 + 0x20)) == '\0') {
    FUN_14060c680(lVar2 + 8);
  }
  auVar3._12_4_ = 0;
  auVar3._0_12_ =
       SUB1612(*(undefined1 (*) [16])(*(longlong *)(lVar2 + 8) + 0x20 + (longlong)iVar1 * 0x30),0);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar3;
  return param_2;
}



// FUNCTION 142d99d30 FUN_142d99d30 body=196 status=ok
// SIG undefined FUN_142d99d30(void)

longlong * FUN_142d99d30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    FUN_1417846f0(lVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar2 = FUN_142a232e0();
  plVar3 = (longlong *)FUN_1417985e0(uVar2,lVar1,param_2,0x2000000,0,0,0,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x630))((longlong *)*param_1,plVar3);
  FUN_142399e30(plVar3,*(undefined8 *)(*param_1 + 0x168),0);
  FUN_14234b150(plVar3);
  (**(code **)(*plVar3 + 0x500))(plVar3,0);
  return plVar3;
}



// FUNCTION 142d99e00 FUN_142d99e00 body=191 status=ok
// SIG undefined FUN_142d99e00(void)

void FUN_142d99e00(undefined8 *param_1)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_28 [32];
  
  if (*(char *)*param_1 == '\0') {
    lVar6 = param_1[1];
    if (*(longlong *)(lVar6 + 0x330) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x330) + 0xbf0);
      lVar7 = param_1[2];
      if (*(longlong *)(lVar1 + (longlong)*(int *)(lVar7 + 0x24) * 8) != 0) {
        pcVar2 = (char *)param_1[3];
        if (*pcVar2 == '\0') {
          plVar3 = *(longlong **)(pcVar2 + 0x10);
        }
        else if (*(int *)(pcVar2 + 0x10) == -1) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)
                   FUN_142697a40(*(undefined8 *)(lVar1 + (longlong)*(int *)(pcVar2 + 0x10) * 8));
          lVar7 = param_1[2];
          lVar6 = param_1[1];
        }
        plVar4 = (longlong *)
                 FUN_142697a40(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(lVar6 + 0x330) + 0xbf0) +
                                (longlong)*(int *)(lVar7 + 0x24) * 8));
        lVar6 = *plVar3;
        uVar5 = (**(code **)(*plVar4 + 0xa0))(plVar4,local_28);
        (**(code **)(lVar6 + 0xa8))(plVar3,uVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142d99ec0 FUN_142d99ec0 body=3994 status=ok
// SIG undefined FUN_142d99ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d99ec0(undefined8 *param_1,char param_2)

{
  ushort uVar1;
  int *piVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar31;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar32;
  undefined1 auVar28 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStack_218 [32];
  char local_1f8;
  undefined8 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198 [8];
  ulonglong local_190;
  longlong local_188;
  ushort *local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong local_158;
  longlong *local_150;
  float local_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  float fStack_12c;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  puVar18 = *(ushort **)*param_1;
  local_180 = puVar18 + *(int *)((undefined8 *)*param_1 + 1);
  local_1f8 = param_2;
  if (puVar18 != local_180) {
    do {
      uVar19 = (ulonglong)*puVar18;
      piVar2 = *(int **)(*(longlong *)param_1[1] + uVar19 * 8);
      if (piVar2 != (int *)0x0) {
        local_188 = *(longlong *)
                     (*(longlong *)(*(longlong *)param_1[2] + 0x40) + (longlong)*piVar2 * 8);
        local_190 = uVar19;
        cVar10 = FBodyInstance::IsNonKinematic(piVar2);
        lVar16 = param_1[3];
        pfVar13 = (float *)(uVar19 * 0x30 + *(longlong *)(lVar16 + 0x30));
        local_1e8 = (longlong *)CONCAT44(fRam0000000146b34324,_DAT_146b34320);
        local_108 = *pfVar13;
        fStack_104 = pfVar13[1];
        fStack_100 = pfVar13[2];
        fStack_fc = pfVar13[3];
        local_f8 = pfVar13[4];
        fStack_f4 = pfVar13[5];
        fStack_f0 = pfVar13[6];
        fStack_ec = pfVar13[7];
        fVar26 = pfVar13[8];
        fVar30 = pfVar13[9];
        fVar31 = pfVar13[10];
        lVar3 = *(longlong *)(lVar16 + 0x20);
        fVar32 = pfVar13[0xb];
        fVar5 = _DAT_146b342b0;
        fVar6 = fRam0000000146b342b4;
        fVar7 = fRam0000000146b342b8;
        fVar8 = fRam0000000146b342bc;
        fStack_1e0 = fRam0000000146b34328;
        fStack_1dc = fRam0000000146b3432c;
        fVar40 = _DAT_146b342c0;
        fVar42 = fRam0000000146b342c4;
        fVar44 = fRam0000000146b342c8;
        fVar25 = _DAT_146b342e0;
        fVar33 = fRam0000000146b342e4;
        fVar29 = fRam0000000146b342e8;
        fVar34 = fRam0000000146b342ec;
        fVar45 = _DAT_146b342f0;
        fVar52 = fRam0000000146b342f4;
        fVar53 = fRam0000000146b342f8;
        fVar35 = fRam0000000146b342fc;
        fVar36 = _DAT_146b34320;
        fVar37 = fRam0000000146b34324;
        for (uVar1 = *(ushort *)(lVar3 + 8 + uVar19 * 0x10); _DAT_146b342c0 = fVar40,
            fRam0000000146b342c4 = fVar42, fRam0000000146b342c8 = fVar44, local_1a8 = fVar5,
            fStack_1a4 = fVar6, fStack_1a0 = fVar7, fStack_19c = fVar8, local_e8 = fVar26,
            fStack_e4 = fVar30, fStack_e0 = fVar31, fStack_dc = fVar32, uVar1 != 0xffff;
            uVar1 = *(ushort *)(lVar3 + 8 + (ulonglong)uVar1 * 0x10)) {
          auVar20._4_4_ = fVar30;
          auVar20._0_4_ = fVar26;
          auVar20._8_4_ = fVar31;
          auVar20._12_4_ = fVar32;
          pfVar13 = (float *)((ulonglong)uVar1 * 0x30 + *(longlong *)(lVar16 + 0x30));
          auVar21 = *(undefined1 (*) [16])(pfVar13 + 8);
          fVar5 = auVar21._0_4_;
          fVar6 = auVar21._4_4_;
          fVar7 = auVar21._8_4_;
          fVar8 = auVar21._12_4_;
          auVar21 = minps(auVar20,auVar21);
          auVar22._4_4_ = -(uint)(auVar21._4_4_ < fVar37);
          auVar22._0_4_ = -(uint)(auVar21._0_4_ < fVar36);
          auVar22._8_4_ = -(uint)(auVar21._8_4_ < fStack_1e0);
          auVar22._12_4_ = -(uint)(auVar21._12_4_ < fStack_1dc);
          iVar11 = movmskps((int)lVar3,auVar22);
          if (iVar11 == 0) {
            fVar40 = *pfVar13;
            fVar42 = pfVar13[1];
            fVar44 = pfVar13[2];
            fVar36 = pfVar13[3];
            fVar43 = fVar40 * fStack_104;
            fVar46 = fVar40 * local_108;
            local_f8 = local_f8 * fVar5;
            fStack_f4 = fStack_f4 * fVar6;
            fStack_f0 = fStack_f0 * fVar7;
            fStack_ec = fStack_ec * fVar8;
            fVar39 = fVar42 * local_108;
            fVar41 = fVar42 * fStack_104;
            fVar37 = fVar44 * local_108;
            fVar38 = fVar44 * fStack_100;
            local_108 = fVar40 * fStack_fc * _DAT_146b34300 + local_108 * fVar36 +
                        fVar42 * fStack_100 * fVar45 + fVar44 * fStack_104 * fVar25;
            fStack_104 = fVar40 * fStack_100 * fRam0000000146b34304 + fStack_104 * fVar36 +
                         fVar42 * fStack_fc * fVar52 + fVar37 * fVar33;
            fStack_100 = fVar43 * fRam0000000146b34308 + fStack_100 * fVar36 + fVar39 * fVar53 +
                         fVar44 * fStack_fc * fVar29;
            fStack_fc = fVar46 * fRam0000000146b3430c + fStack_fc * fVar36 + fVar41 * fVar35 +
                        fVar38 * fVar34;
            fVar37 = fStack_f0 * fVar42 - fStack_f4 * fVar44;
            fVar38 = local_f8 * fVar44 - fStack_f0 * fVar40;
            fVar39 = fStack_f4 * fVar40 - local_f8 * fVar42;
            fVar41 = fStack_ec * fVar36 - fStack_ec * fVar36;
            fVar37 = fVar37 + fVar37;
            fVar38 = fVar38 + fVar38;
            fVar39 = fVar39 + fVar39;
            fVar41 = fVar41 + fVar41;
            local_1e8._4_4_ = (float)((ulonglong)local_1e8 >> 0x20);
            local_f8 = (fVar39 * fVar42 - fVar38 * fVar44) + fVar37 * fVar36 + local_f8 + pfVar13[4]
            ;
            fStack_f4 = (fVar37 * fVar44 - fVar39 * fVar40) + fVar38 * fVar36 + fStack_f4 +
                        pfVar13[5];
            fStack_f0 = (fVar38 * fVar40 - fVar37 * fVar42) + fVar39 * fVar36 + fStack_f0 +
                        pfVar13[6];
            fStack_ec = (fVar41 * fVar36 - fVar41 * fVar36) + fVar41 * fVar36 + fStack_ec +
                        pfVar13[7];
            fVar36 = (float)local_1e8;
            fVar37 = local_1e8._4_4_;
          }
          else {
            fVar25 = *pfVar13;
            fVar33 = pfVar13[1];
            fVar29 = pfVar13[2];
            fVar34 = pfVar13[3];
            fVar45 = pfVar13[4];
            fVar52 = pfVar13[5];
            fVar53 = pfVar13[6];
            fVar35 = fVar33 + fVar33;
            fVar37 = fVar29 + fVar29;
            fVar38 = fVar25 * (fVar25 + fVar25);
            fVar36 = (fVar25 + fVar25) * fVar34;
            fVar54 = (fVar37 * fVar34 + fVar35 * fVar25) * fVar5;
            fVar55 = (fVar36 + fVar37 * fVar33) * fVar6;
            fVar56 = (fVar35 * fVar34 + fVar37 * fVar25) * fVar7;
            fVar46 = fVar6 * (fVar35 * fVar25 - fVar37 * fVar34);
            fVar47 = fVar7 * (fVar37 * fVar33 - fVar36);
            fVar48 = fVar5 * (fVar37 * fVar25 - fVar35 * fVar34);
            fVar36 = fStack_104 + fStack_104;
            fVar34 = fStack_100 + fStack_100;
            fVar25 = (float)((uint)((fVar40 - (fVar29 * fVar37 + fVar33 * fVar35)) * fVar5) &
                            _DAT_146b342d0);
            fVar29 = (float)((uint)((fVar42 - (fVar29 * fVar37 + fVar38)) * fVar6) &
                            uRam0000000146b342d4);
            fVar35 = (float)((uint)((fVar44 - (fVar33 * fVar35 + fVar38)) * fVar7) &
                            uRam0000000146b342d8);
            fVar37 = (float)((uint)((fRam0000000146b342cc - (fVar38 + fVar38)) * fVar8) &
                            uRam0000000146b342dc);
            fVar38 = local_108 * (local_108 + local_108);
            fVar33 = (local_108 + local_108) * fStack_fc;
            fVar49 = (fVar34 * fStack_fc + fVar36 * local_108) * fVar26;
            fVar50 = (fVar33 + fVar34 * fStack_104) * fVar30;
            fVar51 = (fVar36 * fStack_fc + fVar34 * local_108) * fVar31;
            fVar39 = fVar30 * (fVar36 * local_108 - fVar34 * fStack_fc);
            fVar41 = fVar31 * (fVar34 * fStack_104 - fVar33);
            fVar43 = fVar26 * (fVar34 * local_108 - fVar36 * fStack_fc);
            fVar33 = (float)((uint)((fVar40 - (fStack_100 * fVar34 + fStack_104 * fVar36)) * fVar26)
                            & _DAT_146b342d0);
            fVar34 = (float)((uint)((fVar42 - (fStack_100 * fVar34 + fVar38)) * fVar30) &
                            uRam0000000146b342d4);
            fVar36 = (float)((uint)((fVar44 - (fStack_104 * fVar36 + fVar38)) * fVar31) &
                            uRam0000000146b342d8);
            fVar38 = (float)((uint)((fRam0000000146b342cc - (fVar38 + fVar38)) * fVar32) &
                            uRam0000000146b342dc);
            local_148 = fVar49 * fVar46 + fVar33 * fVar25 + fVar43 * fVar56 + fVar38 * fVar45;
            uStack_144._0_4_ = fVar49 * fVar29 + fVar33 * fVar54 + fVar43 * fVar47 + fVar38 * fVar52
            ;
            uStack_144._4_4_ = fVar49 * fVar55 + fVar33 * fVar48 + fVar43 * fVar35 + fVar38 * fVar53
            ;
            uStack_13c._0_4_ =
                 fVar49 * fVar37 + fVar33 * fVar37 + fVar43 * fVar37 + fVar38 * fRam0000000146b342cc
            ;
            uStack_13c._4_4_ = fVar34 * fVar46 + fVar39 * fVar25 + fVar50 * fVar56 + fVar38 * fVar45
            ;
            uStack_134._0_4_ = fVar34 * fVar29 + fVar39 * fVar54 + fVar50 * fVar47 + fVar38 * fVar52
            ;
            uStack_134._4_4_ = fVar34 * fVar55 + fVar39 * fVar48 + fVar50 * fVar35 + fVar38 * fVar53
            ;
            fStack_12c = fVar34 * fVar37 + fVar39 * fVar37 + fVar50 * fVar37 +
                         fVar38 * fRam0000000146b342cc;
            local_128._0_4_ = fVar41 * fVar46 + fVar51 * fVar25 + fVar36 * fVar56 + fVar38 * fVar45;
            local_128._4_4_ = fVar41 * fVar29 + fVar51 * fVar54 + fVar36 * fVar47 + fVar38 * fVar52;
            fStack_120 = fVar41 * fVar55 + fVar51 * fVar48 + fVar36 * fVar35 + fVar38 * fVar53;
            fStack_11c = fVar41 * fVar37 + fVar51 * fVar37 + fVar36 * fVar37 +
                         fVar38 * fRam0000000146b342cc;
            local_118 = fStack_f4 * fVar46 + local_f8 * fVar25 + fStack_f0 * fVar56 +
                        fRam0000000146b342cc * fVar45;
            fStack_114 = fStack_f4 * fVar29 + local_f8 * fVar54 + fStack_f0 * fVar47 +
                         fRam0000000146b342cc * fVar52;
            fStack_110 = fStack_f4 * fVar55 + local_f8 * fVar48 + fStack_f0 * fVar35 +
                         fRam0000000146b342cc * fVar53;
            fStack_10c = fStack_f4 * fVar37 + local_f8 * fVar37 + fStack_f0 * fVar37 +
                         fRam0000000146b342cc * fRam0000000146b342cc;
            FMatrix::RemoveScaling(&local_148);
            fVar40 = (float)(-(uint)((float)local_1e8 <= fVar5 * fVar26) &
                             (_DAT_146b34310 ^ (uint)fVar40) ^ _DAT_146b34310);
            fVar42 = (float)(-(uint)(local_1e8._4_4_ <= fVar6 * fVar30) &
                             (uRam0000000146b34314 ^ (uint)fVar42) ^ uRam0000000146b34314);
            fVar44 = (float)(-(uint)(fStack_1e0 <= fVar7 * fVar31) &
                             (uRam0000000146b34318 ^ (uint)fVar44) ^ uRam0000000146b34318);
            local_148 = local_148 * fVar40;
            uStack_144 = CONCAT44(uStack_144._4_4_ * fVar40,(float)uStack_144 * fVar40);
            uStack_134 = CONCAT44(uStack_134._4_4_ * fVar42,(float)uStack_134 * fVar42);
            fStack_120 = fStack_120 * fVar44;
            uStack_13c = CONCAT44(uStack_13c._4_4_ * fVar42,(float)uStack_13c);
            local_128 = CONCAT44(local_128._4_4_ * fVar44,(float)local_128 * fVar44);
            FQuat::FQuat(&local_178,&local_148);
            lVar16 = param_1[3];
            auVar27._0_4_ = local_178 * local_178 + fStack_170 * fStack_170;
            auVar27._4_4_ = fStack_174 * fStack_174 + fStack_16c * fStack_16c;
            auVar27._8_4_ = fStack_170 * fStack_170 + local_178 * local_178;
            auVar27._12_4_ = fStack_16c * fStack_16c + fStack_174 * fStack_174;
            fVar33 = auVar27._4_4_ + auVar27._0_4_;
            fVar29 = auVar27._8_4_ + auVar27._4_4_;
            fVar34 = auVar27._12_4_ + auVar27._8_4_;
            fVar45 = auVar27._0_4_ + auVar27._12_4_;
            auVar21._4_4_ = fVar29;
            auVar21._0_4_ = fVar33;
            auVar21._8_4_ = fVar34;
            auVar21._12_4_ = fVar45;
            auVar21 = rsqrtps(auVar27,auVar21);
            fVar40 = auVar21._0_4_;
            fVar42 = auVar21._4_4_;
            fVar44 = auVar21._8_4_;
            fVar25 = auVar21._12_4_;
            fVar40 = (local_1a8 - fVar40 * fVar40 * fVar33 * local_1a8) * fVar40 + fVar40;
            fVar42 = (fStack_1a4 - fVar42 * fVar42 * fVar29 * fStack_1a4) * fVar42 + fVar42;
            fVar44 = (fStack_1a0 - fVar44 * fVar44 * fVar34 * fStack_1a0) * fVar44 + fVar44;
            fVar25 = (fStack_19c - fVar25 * fVar25 * fVar45 * fStack_19c) * fVar25 + fVar25;
            fStack_ec = 0.0;
            local_1e8 = (longlong *)CONCAT44(fRam0000000146b34324,_DAT_146b34320);
            fStack_1e0 = fRam0000000146b34328;
            fStack_1dc = fRam0000000146b3432c;
            local_108 = (float)(((uint)(((local_1a8 - fVar40 * fVar40 * fVar33 * local_1a8) * fVar40
                                        + fVar40) * local_178) ^ _DAT_146b342a0) &
                                -(uint)(1e-08 <= fVar33) ^ _DAT_146b342a0);
            fStack_104 = (float)(((uint)(((fStack_1a4 - fVar42 * fVar42 * fVar29 * fStack_1a4) *
                                          fVar42 + fVar42) * fStack_174) ^ uRam0000000146b342a4) &
                                 -(uint)(1e-08 <= fVar29) ^ uRam0000000146b342a4);
            fStack_100 = (float)(((uint)(((fStack_1a0 - fVar44 * fVar44 * fVar34 * fStack_1a0) *
                                          fVar44 + fVar44) * fStack_170) ^ uRam0000000146b342a8) &
                                 -(uint)(1e-08 <= fVar34) ^ uRam0000000146b342a8);
            fStack_fc = (float)(((uint)(((fStack_19c - fVar25 * fVar25 * fVar45 * fStack_19c) *
                                         fVar25 + fVar25) * fStack_16c) ^ uRam0000000146b342ac) &
                                -(uint)(1e-08 <= fVar45) ^ uRam0000000146b342ac);
            fVar45 = _DAT_146b342f0;
            fVar52 = fRam0000000146b342f4;
            fVar53 = fRam0000000146b342f8;
            fVar35 = fRam0000000146b342fc;
            fVar25 = _DAT_146b342e0;
            fVar33 = fRam0000000146b342e4;
            fVar29 = fRam0000000146b342e8;
            fVar34 = fRam0000000146b342ec;
            local_f8 = local_118;
            fStack_f4 = fStack_114;
            fStack_f0 = fStack_110;
            fVar36 = _DAT_146b34320;
            fVar37 = fRam0000000146b34324;
            local_178 = local_108;
            fStack_174 = fStack_104;
            fStack_170 = fStack_100;
            fStack_16c = fStack_fc;
          }
          fStack_dc = fVar8 * fVar32;
          fVar31 = fVar7 * fVar31;
          fVar30 = fVar6 * fVar30;
          fVar26 = fVar5 * fVar26;
          lVar3 = *(longlong *)(lVar16 + 0x20);
          fVar32 = fStack_dc;
          fVar5 = local_1a8;
          fVar6 = fStack_1a4;
          fVar7 = fStack_1a0;
          fVar8 = fStack_19c;
          fVar40 = _DAT_146b342c0;
          fVar42 = fRam0000000146b342c4;
          fVar44 = fRam0000000146b342c8;
        }
        uVar17 = 0;
        auVar23._4_4_ = fVar30;
        auVar23._0_4_ = fVar26;
        auVar23._8_4_ = fVar31;
        auVar23._12_4_ = fVar32;
        lVar3 = *(longlong *)param_1[4];
        auVar21 = *(undefined1 (*) [16])(lVar3 + 0x230);
        fVar38 = auVar21._0_4_;
        fVar39 = auVar21._4_4_;
        fVar41 = auVar21._8_4_;
        fVar43 = auVar21._12_4_;
        auVar21 = minps(auVar23,auVar21);
        auVar24._4_4_ = -(uint)(auVar21._4_4_ < fVar37);
        auVar24._0_4_ = -(uint)(auVar21._0_4_ < fVar36);
        auVar24._8_4_ = -(uint)(auVar21._8_4_ < fStack_1e0);
        auVar24._12_4_ = -(uint)(auVar21._12_4_ < fStack_1dc);
        iVar11 = movmskps((int)(longlong *)param_1[4],auVar24);
        if (iVar11 == 0) {
          fVar5 = *(float *)(lVar3 + 0x210);
          fVar6 = *(float *)(lVar3 + 0x214);
          fVar7 = *(float *)(lVar3 + 0x218);
          fVar8 = *(float *)(lVar3 + 0x21c);
          fVar40 = fVar5 * fStack_104;
          fVar42 = fVar5 * local_108;
          local_f8 = fVar38 * local_f8;
          fStack_f4 = fVar39 * fStack_f4;
          fStack_f0 = fVar41 * fStack_f0;
          fStack_ec = fVar43 * fStack_ec;
          fVar38 = fVar38 * fVar26;
          fVar39 = fVar39 * fVar30;
          fVar41 = fVar41 * fVar31;
          fVar43 = fVar43 * fVar32;
          fVar31 = fVar6 * local_108;
          fVar32 = fVar6 * fStack_104;
          fVar26 = fVar7 * local_108;
          fVar30 = fVar7 * fStack_100;
          local_108 = fVar5 * fStack_fc * _DAT_146b34300 + local_108 * fVar8 +
                      fVar6 * fStack_100 * fVar45 + fVar7 * fStack_104 * fVar25;
          fStack_104 = fVar5 * fStack_100 * fRam0000000146b34304 + fStack_104 * fVar8 +
                       fVar6 * fStack_fc * fVar52 + fVar26 * fVar33;
          fStack_100 = fVar40 * fRam0000000146b34308 + fStack_100 * fVar8 + fVar31 * fVar53 +
                       fVar7 * fStack_fc * fVar29;
          fStack_fc = fVar42 * fRam0000000146b3430c + fStack_fc * fVar8 + fVar32 * fVar35 +
                      fVar30 * fVar34;
          fVar26 = fStack_f0 * fVar6 - fStack_f4 * fVar7;
          fVar30 = local_f8 * fVar7 - fStack_f0 * fVar5;
          fVar31 = fStack_f4 * fVar5 - local_f8 * fVar6;
          fVar32 = fStack_ec * fVar8 - fStack_ec * fVar8;
          fVar26 = fVar26 + fVar26;
          fVar30 = fVar30 + fVar30;
          fVar31 = fVar31 + fVar31;
          fVar32 = fVar32 + fVar32;
          local_f8 = (fVar31 * fVar6 - fVar30 * fVar7) + fVar26 * fVar8 + local_f8 +
                     *(float *)(lVar3 + 0x220);
          fStack_f4 = (fVar26 * fVar7 - fVar31 * fVar5) + fVar30 * fVar8 + fStack_f4 +
                      *(float *)(lVar3 + 0x224);
          fStack_f0 = (fVar30 * fVar5 - fVar26 * fVar6) + fVar31 * fVar8 + fStack_f0 +
                      *(float *)(lVar3 + 0x228);
          fStack_ec = (fVar32 * fVar8 - fVar32 * fVar8) + fVar32 * fVar8 + fStack_ec +
                      *(float *)(lVar3 + 0x22c);
        }
        else {
          fVar25 = *(float *)(lVar3 + 0x210);
          fVar33 = *(float *)(lVar3 + 0x214);
          fVar29 = *(float *)(lVar3 + 0x218);
          fVar34 = *(float *)(lVar3 + 0x21c);
          fVar45 = *(float *)(lVar3 + 0x220);
          fVar52 = *(float *)(lVar3 + 0x224);
          fVar53 = *(float *)(lVar3 + 0x228);
          fVar35 = fVar33 + fVar33;
          fVar36 = fVar29 + fVar29;
          local_1a8 = fVar26 * fVar38;
          fStack_1a4 = fVar30 * fVar39;
          fStack_1a0 = fVar31 * fVar41;
          fStack_19c = fVar32 * fVar43;
          fVar47 = fVar25 * (fVar25 + fVar25);
          fVar37 = fVar34 * (fVar25 + fVar25);
          fVar51 = (fVar34 * fVar36 + fVar25 * fVar35) * fVar38;
          fVar54 = (fVar37 + fVar33 * fVar36) * fVar39;
          fVar55 = (fVar34 * fVar35 + fVar25 * fVar36) * fVar41;
          fVar48 = fVar39 * (fVar25 * fVar35 - fVar34 * fVar36);
          fVar49 = fVar41 * (fVar33 * fVar36 - fVar37);
          fVar50 = fVar38 * (fVar25 * fVar36 - fVar34 * fVar35);
          fVar37 = fStack_104 + fStack_104;
          fVar46 = fStack_100 + fStack_100;
          fVar25 = (float)((uint)((fVar40 - (fVar29 * fVar36 + fVar33 * fVar35)) * fVar38) &
                          _DAT_146b342d0);
          fVar29 = (float)((uint)((fVar42 - (fVar29 * fVar36 + fVar47)) * fVar39) &
                          uRam0000000146b342d4);
          fVar33 = (float)((uint)((fVar44 - (fVar33 * fVar35 + fVar47)) * fVar41) &
                          uRam0000000146b342d8);
          fVar34 = (float)((uint)((fRam0000000146b342cc - (fVar47 + fVar47)) * fVar43) &
                          uRam0000000146b342dc);
          fVar36 = local_108 * (local_108 + local_108);
          fVar35 = (local_108 + local_108) * fStack_fc;
          fVar41 = (fVar46 * fStack_fc + fVar37 * local_108) * fVar26;
          fVar43 = (fVar35 + fVar46 * fStack_104) * fVar30;
          fVar47 = (fVar37 * fStack_fc + fVar46 * local_108) * fVar31;
          fVar38 = fVar30 * (fVar37 * local_108 - fVar46 * fStack_fc);
          fVar35 = fVar31 * (fVar46 * fStack_104 - fVar35);
          fVar39 = fVar26 * (fVar46 * local_108 - fVar37 * fStack_fc);
          fVar26 = (float)((uint)((fVar40 - (fStack_100 * fVar46 + fStack_104 * fVar37)) * fVar26) &
                          _DAT_146b342d0);
          fVar30 = (float)((uint)((fVar42 - (fStack_100 * fVar46 + fVar36)) * fVar30) &
                          uRam0000000146b342d4);
          fVar31 = (float)((uint)((fVar44 - (fStack_104 * fVar37 + fVar36)) * fVar31) &
                          uRam0000000146b342d8);
          fVar32 = (float)((uint)((fRam0000000146b342cc - (fVar36 + fVar36)) * fVar32) &
                          uRam0000000146b342dc);
          local_148 = fVar41 * fVar48 + fVar26 * fVar25 + fVar39 * fVar55 + fVar32 * fVar45;
          uStack_144._0_4_ = fVar41 * fVar29 + fVar26 * fVar51 + fVar39 * fVar49 + fVar32 * fVar52;
          uStack_144._4_4_ = fVar41 * fVar54 + fVar26 * fVar50 + fVar39 * fVar33 + fVar32 * fVar53;
          uStack_13c._0_4_ =
               fVar41 * fVar34 + fVar26 * fVar34 + fVar39 * fVar34 + fVar32 * fRam0000000146b342cc;
          uStack_13c._4_4_ = fVar30 * fVar48 + fVar38 * fVar25 + fVar43 * fVar55 + fVar32 * fVar45;
          uStack_134._0_4_ = fVar30 * fVar29 + fVar38 * fVar51 + fVar43 * fVar49 + fVar32 * fVar52;
          uStack_134._4_4_ = fVar30 * fVar54 + fVar38 * fVar50 + fVar43 * fVar33 + fVar32 * fVar53;
          fStack_12c = fVar30 * fVar34 + fVar38 * fVar34 + fVar43 * fVar34 +
                       fVar32 * fRam0000000146b342cc;
          local_128._0_4_ = fVar35 * fVar48 + fVar47 * fVar25 + fVar31 * fVar55 + fVar32 * fVar45;
          local_128._4_4_ = fVar35 * fVar29 + fVar47 * fVar51 + fVar31 * fVar49 + fVar32 * fVar52;
          fStack_120 = fVar35 * fVar54 + fVar47 * fVar50 + fVar31 * fVar33 + fVar32 * fVar53;
          fStack_11c = fVar35 * fVar34 + fVar47 * fVar34 + fVar31 * fVar34 +
                       fVar32 * fRam0000000146b342cc;
          local_118 = fStack_f4 * fVar48 + local_f8 * fVar25 + fStack_f0 * fVar55 +
                      fRam0000000146b342cc * fVar45;
          fStack_114 = fStack_f4 * fVar29 + local_f8 * fVar51 + fStack_f0 * fVar49 +
                       fRam0000000146b342cc * fVar52;
          fStack_110 = fStack_f4 * fVar54 + local_f8 * fVar50 + fStack_f0 * fVar33 +
                       fRam0000000146b342cc * fVar53;
          fStack_10c = fStack_f4 * fVar34 + local_f8 * fVar34 + fStack_f0 * fVar34 +
                       fRam0000000146b342cc * fRam0000000146b342cc;
          FMatrix::RemoveScaling(&local_148);
          fVar43 = fStack_19c;
          fVar41 = fStack_1a0;
          fVar39 = fStack_1a4;
          fVar38 = local_1a8;
          fVar26 = (float)((_DAT_146b34310 ^ (uint)fVar40) & -(uint)((float)local_1e8 <= local_1a8)
                          ^ _DAT_146b34310);
          fVar30 = (float)((uRam0000000146b34314 ^ (uint)fVar42) &
                           -(uint)(local_1e8._4_4_ <= fStack_1a4) ^ uRam0000000146b34314);
          fVar31 = (float)((uRam0000000146b34318 ^ (uint)fVar44) & -(uint)(fStack_1e0 <= fStack_1a0)
                          ^ uRam0000000146b34318);
          local_148 = local_148 * fVar26;
          uStack_144 = CONCAT44(uStack_144._4_4_ * fVar26,(float)uStack_144 * fVar26);
          uStack_134 = CONCAT44(uStack_134._4_4_ * fVar30,(float)uStack_134 * fVar30);
          fStack_120 = fStack_120 * fVar31;
          uStack_13c = CONCAT44(uStack_13c._4_4_ * fVar30,(float)uStack_13c);
          local_128 = CONCAT44(local_128._4_4_ * fVar31,(float)local_128 * fVar31);
          FQuat::FQuat(&local_168,&local_148);
          local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,0x322bcc77);
          auVar28._0_4_ = local_168 * local_168 + fStack_160 * fStack_160;
          auVar28._4_4_ = fStack_164 * fStack_164 + fStack_15c * fStack_15c;
          auVar28._8_4_ = fStack_160 * fStack_160 + local_168 * local_168;
          auVar28._12_4_ = fStack_15c * fStack_15c + fStack_164 * fStack_164;
          fVar40 = auVar28._4_4_ + auVar28._0_4_;
          fVar42 = auVar28._8_4_ + auVar28._4_4_;
          fVar44 = auVar28._12_4_ + auVar28._8_4_;
          fVar25 = auVar28._0_4_ + auVar28._12_4_;
          auVar9._4_4_ = fVar42;
          auVar9._0_4_ = fVar40;
          auVar9._8_4_ = fVar44;
          auVar9._12_4_ = fVar25;
          auVar21 = rsqrtps(auVar28,auVar9);
          fVar26 = auVar21._0_4_;
          fVar30 = auVar21._4_4_;
          fVar31 = auVar21._8_4_;
          fVar32 = auVar21._12_4_;
          fVar26 = (fVar5 - fVar26 * fVar26 * fVar40 * fVar5) * fVar26 + fVar26;
          fVar30 = (fVar6 - fVar30 * fVar30 * fVar42 * fVar6) * fVar30 + fVar30;
          fVar31 = (fVar7 - fVar31 * fVar31 * fVar44 * fVar7) * fVar31 + fVar31;
          fVar32 = (fVar8 - fVar32 * fVar32 * fVar25 * fVar8) * fVar32 + fVar32;
          fStack_ec = 0.0;
          local_108 = (float)(((uint)(((fVar5 - fVar26 * fVar26 * fVar40 * fVar5) * fVar26 + fVar26)
                                     * local_168) ^ _DAT_146b342a0) & -(uint)(1e-08 <= fVar40) ^
                             _DAT_146b342a0);
          fStack_104 = (float)(((uint)(((fVar6 - fVar30 * fVar30 * fVar42 * fVar6) * fVar30 + fVar30
                                       ) * fStack_164) ^ uRam0000000146b342a4) &
                               -(uint)(1e-08 <= fVar42) ^ uRam0000000146b342a4);
          fStack_100 = (float)(((uint)(((fVar7 - fVar31 * fVar31 * fVar44 * fVar7) * fVar31 + fVar31
                                       ) * fStack_160) ^ uRam0000000146b342a8) &
                               -(uint)(1e-08 <= fVar44) ^ uRam0000000146b342a8);
          fStack_fc = (float)(((uint)(((fVar8 - fVar32 * fVar32 * fVar25 * fVar8) * fVar32 + fVar32)
                                     * fStack_15c) ^ uRam0000000146b342ac) &
                              -(uint)(1e-08 <= fVar25) ^ uRam0000000146b342ac);
          local_f8 = local_118;
          fStack_f4 = fStack_114;
          fStack_f0 = fStack_110;
          local_168 = local_108;
          fStack_164 = fStack_104;
          fStack_160 = fStack_100;
          fStack_15c = fStack_fc;
        }
        local_1d8 = 0;
        local_e8 = fVar38;
        fStack_e4 = fVar39;
        fStack_e0 = fVar41;
        fStack_dc = fVar43;
        plVar14 = (longlong *)FUN_142697a40(piVar2);
        if (((*(int *)(param_1[5] + 0x188) != 1) && (plVar14 != (longlong *)0x0)) &&
           (iVar11 = (**(code **)(*plVar14 + 200))(plVar14), iVar11 != 0)) {
          do {
            local_1e8 = (longlong *)0x0;
            (**(code **)(*plVar14 + 0xd0))(plVar14,&local_1e8,1,uVar17);
            if (local_1e8 != (longlong *)0x0) {
              iVar11 = (**(code **)(*local_1e8 + 0x30))();
              if (iVar11 == 0) {
                local_1d0 = 0;
                (**(code **)(*local_1e8 + 0x50))(local_1e8,&local_1d0);
                pfVar4 = (float *)param_1[6];
                pfVar13 = (float *)&local_1d0;
                fVar26 = ABS(pfVar4[1]);
                if (ABS(*pfVar4) <= ABS(pfVar4[1])) {
                  fVar26 = ABS(*pfVar4);
                }
                if (ABS(pfVar4[2]) <= fVar26) {
                  fVar26 = ABS(pfVar4[2]);
                }
                local_1d0 = CONCAT44(local_1d0._4_4_ * fVar26,(float)local_1d0);
              }
              else if (iVar11 == 2) {
                local_1c8 = 2;
                local_1c0 = 0.0;
                (**(code **)(*local_1e8 + 0x58))(local_1e8,&local_1c8);
                pfVar4 = (float *)param_1[6];
                pfVar13 = (float *)&local_1c8;
                local_1c0 = local_1c0 * pfVar4[2];
                fVar26 = pfVar4[1];
                if (*pfVar4 <= pfVar4[1]) {
                  fVar26 = *pfVar4;
                }
                local_1c8 = CONCAT44(local_1c8._4_4_ * fVar26,(float)local_1c8);
              }
              else if (iVar11 == 3) {
                local_1b8 = 3;
                local_1b0 = 0;
                (**(code **)(*local_1e8 + 0x48))(local_1e8,&local_1b8);
                pfVar4 = (float *)param_1[6];
                pfVar13 = (float *)&local_1b8;
                local_1b8 = CONCAT44(local_1b8._4_4_ * *pfVar4,(float)local_1b8);
                local_1b0 = CONCAT44(local_1b0._4_4_ * pfVar4[2],(float)local_1b0 * pfVar4[1]);
              }
              else {
                if (iVar11 != 4) goto LAB_142d9abf9;
                local_148 = 5.60519e-45;
                uStack_144 = 0x3f8000003f800000;
                uStack_13c = 0x3f800000;
                uStack_134 = 0;
                fStack_12c = 1.0;
                local_128 = 0;
                fStack_120 = 0.0;
                (**(code **)(*local_1e8 + 0x68))(local_1e8,&local_148);
                pfVar4 = (float *)param_1[6];
                pfVar13 = &local_148;
                uStack_144 = CONCAT44(uStack_144._4_4_ * pfVar4[1],(float)uStack_144 * *pfVar4);
                uStack_13c = CONCAT44(uStack_13c._4_4_,(float)uStack_13c * pfVar4[2]);
              }
              (**(code **)(*local_1e8 + 0x38))(local_1e8,pfVar13);
            }
LAB_142d9abf9:
            uVar17 = uVar17 + 1;
            uVar12 = (**(code **)(*plVar14 + 200))(plVar14);
            uVar19 = local_190;
          } while (uVar17 < uVar12);
        }
        if (local_1f8 != '\0') {
          if (cVar10 == '\0') {
            uVar15 = FUN_1426979f0(piVar2);
            local_1d8 = FUN_14094d610(*(undefined8 *)(param_1[5] + 0x1c0),uVar15,&local_108);
          }
          else {
            local_1d8 = ImmediatePhysics::FSimulation::CreateDynamicActor
                                  (*(undefined8 *)(param_1[5] + 0x1c0),plVar14,&local_108);
            fVar26 = *(float *)((longlong)*(int *)(local_1d8 + 0x38) * 0x60 + 0xc +
                               *(longlong *)(*(longlong *)(local_1d8 + 0x30) + 0x50));
            if (fVar26 <= 0.0) {
              fVar26 = 0.0;
            }
            else {
              fVar26 = 1.0 / fVar26;
            }
            *(float *)(param_1[5] + 0x288) = fVar26 + *(float *)(param_1[5] + 0x288);
          }
        }
        if (local_1d8 != 0) {
          lVar3 = param_1[5];
          iVar11 = *(int *)(lVar3 + 0x1e0);
          *(int *)(lVar3 + 0x1e0) = iVar11 + 1;
          if (*(int *)(lVar3 + 0x1e4) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x1d8,iVar11);
          }
          lVar16 = local_188;
          *(longlong *)(*(longlong *)(lVar3 + 0x1d8) + (longlong)iVar11 * 8) = local_1d8;
          *(int *)(*(longlong *)(param_1[5] + 0x1e8) +
                  (longlong)*(int *)(*(longlong *)param_1[7] + uVar19 * 4) * 4) = iVar11;
          *(bool *)((longlong)iVar11 * 0x40 + *(longlong *)(param_1[5] + 0x1f8)) = cVar10 != '\0';
          local_158 = local_188 + 0x90;
          local_150 = &local_1d8;
          TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                    (param_1[5] + 0x6a0,local_198,&local_158,0);
          *(longlong *)(*(longlong *)(param_1[5] + 0x6f0) + (longlong)*piVar2 * 8) = local_1d8;
          if (*(char *)(lVar16 + 0x9b) == '\x01') {
            plVar14 = (longlong *)param_1[8];
            iVar11 = (int)plVar14[1];
            *(int *)(plVar14 + 1) = iVar11 + 1;
            if (*(int *)((longlong)plVar14 + 0xc) < iVar11 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar11);
            }
            *(longlong *)(*plVar14 + (longlong)iVar11 * 8) = local_1d8;
          }
          *(undefined8 *)(*(longlong *)param_1[1] + uVar19 * 8) = 0;
        }
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != local_180);
  }
  return;
}



// FUNCTION 142d9aee0 FUN_142d9aee0 body=73 status=ok
// SIG undefined FUN_142d9aee0(void)

longlong FUN_142d9aee0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 142d9af30 FUN_142d9af30 body=121 status=ok
// SIG undefined FUN_142d9af30(void)

longlong FUN_142d9af30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1458a43a0;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 142d9afb0 FUN_142d9afb0 body=87 status=ok
// SIG undefined FUN_142d9afb0(void)

longlong FUN_142d9afb0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x490) = &PTR_FUN_1458a43a0;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 142d9b010 FUN_142d9b010 body=241 status=ok
// SIG undefined FUN_142d9b010(void)

longlong FUN_142d9b010(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x6a0);
  *(undefined4 *)(param_1 + 0x698) = 0;
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x650);
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FMemory::Free();
  }
  FUN_142d986f0(param_1 + 0x600);
  FUN_140949d20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 142d9b110 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__1458a0b10;
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(this + 8);
  *(undefined ***)this = &PTR_FUN_1447540b8;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x18);
  }
  return this;
}



// FUNCTION 142d9b160 FUN_142d9b160 body=43 status=ok
// SIG undefined FUN_142d9b160(void)

undefined8 * FUN_142d9b160(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144147258;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142d9b190 FUN_142d9b190 body=43 status=ok
// SIG undefined FUN_142d9b190(void)

undefined8 * FUN_142d9b190(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1458a43a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142d9b1c0 FUN_142d9b1c0 body=149 status=ok
// SIG undefined FUN_142d9b1c0(void)

longlong FUN_142d9b1c0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 142d9b260 FUN_142d9b260 body=149 status=ok
// SIG undefined FUN_142d9b260(void)

longlong FUN_142d9b260(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 142d9b300 FUN_142d9b300 body=134 status=ok
// SIG undefined FUN_142d9b300(void)

undefined8 * FUN_142d9b300(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1458a2e38;
  DAT_146b34274 = 1;
  if (param_1[0x32] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x32] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (param_1[0x30] != 0) {
    FMemory::Free();
  }
  FUN_142d98680(param_1 + 0x2e);
  FUN_142d98b20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 142d9b390 FUN_142d9b390 body=216 status=ok
// SIG undefined FUN_142d9b390(void)

longlong FUN_142d9b390(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  FUN_142d986f0(param_1 + 0x2f8);
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 142d9b470 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithAssetUserData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142d9b4d0 FUN_142d9b4d0 body=52 status=ok
// SIG undefined FUN_142d9b4d0(void)

undefined8 FUN_142d9b4d0(undefined8 param_1,ulonglong param_2)

{
  FUN_142d98a70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 142d9b510 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FEditableTextStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 142d9b550 FUN_142d9b550 body=91 status=ok
// SIG undefined FUN_142d9b550(void)

longlong FUN_142d9b550(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x298);
  FRichCurve::~FRichCurve(param_1 + 0x218);
  FRichCurve::~FRichCurve(param_1 + 0x198);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 142d9b5b0 FUN_142d9b5b0 body=52 status=ok
// SIG undefined FUN_142d9b5b0(void)

undefined8 FUN_142d9b5b0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 142d9b5f0 FUN_142d9b5f0 body=87 status=ok
// SIG undefined FUN_142d9b5f0(void)

longlong FUN_142d9b5f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x7a8) = &PTR_FUN_143fe0658;
  FUN_1423c53e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,2000);
  }
  return param_1;
}



// FUNCTION 142d9b650 FUN_142d9b650 body=114 status=ok
// SIG undefined FUN_142d9b650(void)

longlong FUN_142d9b650(longlong param_1,ulonglong param_2)

{
  TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::
  ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(param_1 + 0x330);
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  TArray<FMergerLODSettings_SourceModel,TSizedDefaultAllocator<32>_>::
  ~TArray<FMergerLODSettings_SourceModel,TSizedDefaultAllocator<32>_>(param_1 + 0x2f0);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 142d9b6d0 FUN_142d9b6d0 body=90 status=ok
// SIG undefined FUN_142d9b6d0(void)

longlong FUN_142d9b6d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 142d9b730 FUN_142d9b730 body=52 status=ok
// SIG undefined FUN_142d9b730(void)

undefined8 FUN_142d9b730(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142d9b770 FUN_142d9b770 body=98 status=ok
// SIG undefined FUN_142d9b770(void)

int FUN_142d9b770(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(*param_1 + 8 + (longlong)iVar1 * 0x18);
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 142d9b7e0 FUN_142d9b7e0 body=747 status=ok
// SIG undefined FUN_142d9b7e0(void)

void FUN_142d9b7e0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  longlong *local_res18 [2];
  
  local_res10 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x28,&local_res8,param_2);
  if ((local_res8 == -1) ||
     (lVar9 = (longlong)local_res8 * 0x20 + *(longlong *)(param_1 + 0x28), lVar9 == 0)) {
    local_res18[0] = &local_res10;
    FUN_142d96630(param_1 + 0x28,&local_res8,local_res18,0);
    lVar9 = (longlong)local_res8 * 0x20 + *(longlong *)(param_1 + 0x28);
  }
  plVar1 = (longlong *)(lVar9 + 8);
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UFXVolumeManager::OnPlayerDestroyed",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res8,pwVar4 + 2,1);
  FUN_14074ba20(local_res10 + 0x290,param_1,FUN_142db2890,CONCAT44(uStackX_c,local_res8));
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UFXVolumeManager::OnVolumeDestroyed",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res8,pwVar4 + 2,1);
  FUN_14074ba20(param_3 + 0x290,param_1,FUN_142db2fc0,CONCAT44(uStackX_c,local_res8));
  FWeakObjectPtr::operator=(&local_res8,param_3);
  lVar11 = *plVar1;
  iVar2 = *(int *)(lVar9 + 0x10);
  lVar10 = lVar11;
  do {
    if (lVar10 == lVar11 + (longlong)iVar2 * 8) {
LAB_142d9b978:
      iVar2 = *(int *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x10) = iVar2 + 1;
      if (*(int *)(lVar9 + 0x14) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      lVar11 = *plVar1;
      *(int *)(lVar11 + (longlong)iVar2 * 8) = local_res8;
      *(undefined4 *)(lVar11 + 4 + (longlong)iVar2 * 8) = uStackX_c;
LAB_142d9b9a3:
      if (*(longlong *)(local_res10 + 0x978) != 0) {
        if (*(longlong *)(param_3 + 0x490) == 0) {
          lVar11 = *plVar1;
          lVar9 = lVar11 + (longlong)*(int *)(lVar9 + 0x10) * 8;
          if (lVar11 != lVar9) {
            do {
              lVar10 = FWeakObjectPtr::Get(lVar11);
              if (*(longlong *)(lVar10 + 0x490) != 0) {
                lVar10 = FWeakObjectPtr::Get(lVar11);
                lVar7 = FWeakObjectPtr::Get(lVar11);
                FUN_142e724b0(*(undefined8 *)(local_res10 + 0x978),*(undefined8 *)(lVar7 + 0x490),
                              *(undefined8 *)(lVar10 + 0x4a0),1);
              }
              lVar11 = lVar11 + 8;
            } while (lVar11 != lVar9);
            return;
          }
        }
        else {
          cVar5 = FUN_142dac3d0(plVar1);
          if (cVar5 == '\0') {
            bVar12 = *(char *)(param_3 + 0x4a8) != '\0';
            bVar8 = 0x4e;
            if (bVar12) {
              bVar8 = 0xe;
            }
            local_res8 = 0x41800000;
            uStackX_c = 0x41100000;
            if (bVar12) {
              bVar8 = bVar8 | 0x80;
            }
            FUN_142e72620(*(undefined8 *)(local_res10 + 0x978),*(undefined8 *)(param_3 + 0x490),
                          bVar8,0x4110000041800000,*(undefined4 *)(param_3 + 0x498),4,
                          *(undefined8 *)(param_3 + 0x4a0));
          }
        }
      }
      return;
    }
    cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar10,&local_res8);
    if (cVar5 != '\0') {
      if ((int)(lVar10 - lVar11 >> 3) != -1) goto LAB_142d9b9a3;
      goto LAB_142d9b978;
    }
    lVar10 = lVar10 + 8;
  } while( true );
}



// FUNCTION 142d9bad0 FUN_142d9bad0 body=278 status=ok
// SIG undefined FUN_142d9bad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d9bad0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((char)param_1[0xf9] != '\0') {
    local_98 = 0;
    cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x5b8))(param_1,1);
    }
  }
  lVar2 = FUN_142697310(param_1 + 0x76,local_68);
  local_90 = SUB164(*(undefined1 (*) [16])(lVar2 + 0x10),8);
  local_80 = *(undefined4 *)(param_2 + 1);
  local_88 = *param_2;
  local_7c = SUB168(*(undefined1 (*) [16])(lVar2 + 0x10),0);
  local_74 = local_90;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xf7,&local_88);
  local_98 = 0;
  cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
  if (cVar1 != '\0') {
    local_98 = *param_2;
    local_90 = *(undefined4 *)(param_2 + 1);
    FUN_1426f9db0(param_1,&local_98,param_3,param_4);
  }
  return;
}



// FUNCTION 142d9bbf0 FUN_142d9bbf0 body=231 status=ok
// SIG undefined FUN_142d9bbf0(void)

void FUN_142d9bbf0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  if ((char)param_1[0xf9] != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x5b8))(param_1,1);
    }
  }
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_2c = *param_3;
  local_24 = *(undefined4 *)(param_3 + 1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xf7,&local_38);
  cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
  if (cVar1 != '\0') {
    local_48 = *param_3;
    local_40 = *(undefined4 *)(param_3 + 1);
    local_38 = *param_2;
    local_30 = *(undefined4 *)(param_2 + 1);
    UPrimitiveComponent::AddImpulseAtLocation(param_1,&local_38,&local_48,param_4);
  }
  return;
}



// FUNCTION 142d9bce0 FUN_142d9bce0 body=475 status=ok
// SIG undefined FUN_142d9bce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d9bce0(longlong *param_1,float *param_2,float param_3,float param_4,int param_5,
                  undefined1 param_6)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((char)param_1[0xf9] != '\0') {
    local_a8 = 0;
    cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x5b8))(param_1,1);
    }
  }
  lVar2 = FUN_142697310(param_1 + 0x76,&local_88);
  fVar7 = *(float *)(lVar2 + 0x10) - *param_2;
  fVar6 = *(float *)(lVar2 + 0x14) - param_2[1];
  fVar4 = *(float *)(lVar2 + 0x18) - param_2[2];
  fVar5 = fVar6 * fVar6 + fVar7 * fVar7 + fVar4 * fVar4;
  if ((fVar5 <= param_3 * param_3) && (1e-08 <= fVar5)) {
    fVar3 = 1.0 / SQRT(fVar5);
    if ((param_5 == 1) && (1e-08 < param_3)) {
      param_4 = (1.0 - SQRT(fVar5) / param_3) * param_4;
    }
    local_74 = param_2[2];
    fVar5 = fVar6 * fVar3 * param_4;
    fVar4 = fVar4 * fVar3 * param_4;
    param_4 = fVar7 * fVar3 * param_4;
    local_88 = CONCAT44(fVar5,param_4);
    local_7c = *(undefined8 *)param_2;
    local_90 = fVar4;
    local_80 = fVar4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xf7,&local_88);
    local_a8 = 0;
    cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
    if (cVar1 != '\0') {
      local_98 = CONCAT44(fVar5,param_4);
      local_a8 = 0;
      local_90 = fVar4;
      FUN_1426f9db0(param_1,&local_98,0,param_6);
    }
  }
  return;
}



// FUNCTION 142d9bec0 FUN_142d9bec0 body=145 status=ok
// SIG undefined FUN_142d9bec0(void)

void FUN_142d9bec0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = lVar1 + (longlong)(int)param_1[1] * 0x28;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar1,0,0);
  }
  lVar2 = param_1[2];
  lVar1 = (longlong)(int)param_1[3] * 0x10 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar2,0,0);
  }
  return;
}



// FUNCTION 142d9bf60 FUN_142d9bf60 body=120 status=ok
// SIG undefined FUN_142d9bf60(void)

undefined8 * FUN_142d9bf60(longlong param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((((0.0 < *(float *)(param_1 + 8)) && (*param_3 == 0.0)) && (param_3[1] == 0.0)) &&
     (param_3[2] == 0.0)) {
    lVar2 = FWeakObjectPtr::Get();
    if ((lVar2 != 0) &&
       (*(float *)(lVar2 + 0x790) <= *(float *)(param_1 + 8) &&
        *(float *)(param_1 + 8) != *(float *)(lVar2 + 0x790))) {
      uVar3 = *(undefined8 *)(param_1 + 0xc);
      fVar1 = *(float *)(param_1 + 0x14);
      goto LAB_142d9bfbe;
    }
  }
  uVar3 = *(undefined8 *)param_3;
  fVar1 = param_3[2];
LAB_142d9bfbe:
  *param_2 = uVar3;
  *(float *)(param_2 + 1) = fVar1;
  return param_2;
}



// FUNCTION 142d9bfe0 FUN_142d9bfe0 body=1210 status=ok
// SIG undefined FUN_142d9bfe0(void)

void FUN_142d9bfe0(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  wchar_t *pwVar14;
  longlong local_res20;
  int local_58;
  int local_54;
  longlong local_50;
  
  plVar11 = (longlong *)*param_2;
  if (plVar11 == (longlong *)0x0) {
LAB_142d9c1a3:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142d9c1a3;
    pwVar9 = _guard_xfg_dispatch_icall_nop
                       (L"&USceneBodySwitchComponent::HandleParticleSystemFinished",L"::");
    pwVar14 = (wchar_t *)0x0;
    while (pwVar10 = pwVar9, pwVar10 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
      pwVar14 = pwVar10;
    }
    FName::FName(&local_res20,pwVar14 + 2,1);
    lVar8 = local_res20;
    plVar1 = plVar11 + 0x115;
    FWeakObjectPtr::operator=(&local_58,0);
    local_50 = 0;
    FWeakObjectPtr::operator=(&local_58,param_1);
    local_50 = lVar8;
    if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_58), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_50);
    }
    piVar12 = (int *)*plVar1;
    lVar8 = plVar11[0x116];
    for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)(int)lVar8 * 4; piVar13 = piVar13 + 4) {
      if (((*piVar13 == local_58) && (piVar13[1] == local_54)) ||
         ((cVar7 = FWeakObjectPtr::IsValid(piVar13), cVar7 == '\0' &&
          (cVar7 = FWeakObjectPtr::IsValid(&local_58), cVar7 == '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(longlong *)(piVar13 + 2) == local_50)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_142d9c199;
        break;
      }
    }
    iVar2 = (int)plVar11[0x116];
    lVar8 = (longlong)iVar2;
    *(int *)(plVar11 + 0x116) = iVar2 + 1;
    if (*(int *)((longlong)plVar11 + 0x8b4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    *(int *)(lVar3 + lVar8 * 0x10) = local_58;
    *(int *)(lVar3 + 4 + lVar8 * 0x10) = local_54;
    *(longlong *)(lVar3 + 8 + lVar8 * 0x10) = local_50;
LAB_142d9c199:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  pwVar14 = (wchar_t *)*param_2;
  if (param_3 != '\0') {
    if (((byte)pwVar14[0x126] & 0x20) == 0) {
      *(byte *)(pwVar14 + 0x126) = (byte)pwVar14[0x126] | 0x20;
      FUN_1423424e0(*param_2);
      pwVar14 = (wchar_t *)*param_2;
    }
    if (*(longlong *)(pwVar14 + 200) == 0) {
      FUN_142382f60(pwVar14,param_2[1],&DAT_146af29ec,param_2[3]);
      FUN_142398770(*param_2,param_2 + 4,0,0,0);
      pwVar14 = (wchar_t *)*param_2;
    }
    if ((pwVar14[0x5c] & L'\x01') == L'\0') {
      FUN_14234b150(pwVar14);
    }
    if (plVar11 == (longlong *)0x0) {
      return;
    }
    if ((*(byte *)((longlong)plVar11 + 0xba) & 2) == 0) {
      return;
    }
    (**(code **)(*plVar11 + 0x280))(plVar11,0);
    return;
  }
  if ((pwVar14[0x5c] & L'\x01') == L'\0') goto LAB_142d9c45e;
  if (pwVar14 == (wchar_t *)0x0) {
LAB_142d9c296:
    pwVar14 = (wchar_t *)0x0;
  }
  else {
    lVar8 = AUGDoor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar14 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar14 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142d9c296;
  }
  if (((plVar11 == (longlong *)0x0) ||
      (cVar7 = (**(code **)(*plVar11 + 0x2a0))(plVar11), cVar7 == '\0')) &&
     ((pwVar14 == (wchar_t *)0x0 || (*(longlong *)(pwVar14 + 0x16c) == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if (plVar11 == (longlong *)0x0) {
      FUN_1405a1720(pwVar14);
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&USceneBodySwitchComponent::HandleWwiseEventFinished",L"::");
      pwVar9 = (wchar_t *)0x0;
      while (pwVar6 = pwVar10, pwVar6 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar9 = pwVar6;
      }
      FName::FName(&local_res20,pwVar9 + 2,1);
      pwVar9 = pwVar14 + 0x1b4;
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = local_res20;
      if ((local_res20 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_58), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_50);
      }
      piVar12 = *(int **)pwVar9;
      iVar2 = *(int *)(pwVar14 + 0x1b8);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar2 * 4; piVar13 = piVar13 + 4) {
        if (((*piVar13 == local_58) && (piVar13[1] == local_54)) ||
           ((cVar7 = FWeakObjectPtr::IsValid(piVar13), cVar7 == '\0' &&
            (cVar7 = FWeakObjectPtr::IsValid(&local_58), cVar7 == '\0')))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (*(longlong *)(piVar13 + 2) == local_50)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_142d9c433;
          break;
        }
      }
      iVar2 = *(int *)(pwVar14 + 0x1b8);
      *(int *)(pwVar14 + 0x1b8) = iVar2 + 1;
      if (*(int *)(pwVar14 + 0x1ba) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar9,iVar2);
      }
      piVar12 = (int *)((longlong)iVar2 * 0x10 + *(longlong *)pwVar9);
      *piVar12 = local_58;
      piVar12[1] = local_54;
      *(longlong *)(piVar12 + 2) = local_50;
LAB_142d9c433:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar9);
    }
    else {
      (**(code **)(*plVar11 + 0x288))(plVar11);
    }
  }
  plVar11 = (longlong *)param_2[2];
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x278))(plVar11,*param_2,0);
  }
  if (bVar4) {
    return;
  }
LAB_142d9c45e:
  plVar11 = (longlong *)*param_2;
  if (plVar11 != (longlong *)0x0) {
    if ((*(byte *)(plVar11 + 0x17) & 1) != 0) {
      FUN_142359580();
      plVar11 = (longlong *)*param_2;
    }
    (**(code **)(*plVar11 + 0x418))(plVar11,&DAT_146532190);
  }
  return;
}



// FUNCTION 142d9c4a0 FUN_142d9c4a0 body=118 status=ok
// SIG undefined FUN_142d9c4a0(void)

void FUN_142d9c4a0(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x2e0) & 2) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x2f0);
    plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x2f8) * 0xe;
    for (; plVar2 != plVar3; plVar2 = plVar2 + 0xe) {
      if ((*plVar2 != 0) && (plVar2[1] != 0)) {
        uVar1 = FUN_142db7ee0(param_1,plVar2);
        FUN_142d9bfe0(param_1,plVar2,uVar1);
      }
    }
  }
  return;
}



// FUNCTION 142d9c520 FUN_142d9c520 body=267 status=ok
// SIG undefined FUN_142d9c520(void)

void FUN_142d9c520(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  float local_res8 [2];
  undefined8 local_res10;
  longlong local_res18;
  longlong local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined8 **ppuStack_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  longlong local_38;
  undefined1 *local_30;
  float *local_28;
  longlong *local_20;
  
  local_70 = *(longlong *)(param_1 + 0x120);
  local_res10 = param_2;
  if (local_70 == 0) {
    local_70 = FUN_1423407b0();
  }
  local_res8[0] = *(float *)(local_70 + 0x7b0);
  if (local_res8[0] < 1e-08) {
    local_res8[0] = 1.0;
  }
  local_res18 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x6d0))
                          (*(longlong **)(param_1 + 0x330),local_res10,1);
  local_78 = (**(code **)(*param_3 + 0x6d0))(param_3,param_4,1);
  if ((local_res18 != 0) && (local_78 != 0)) {
    local_58 = &local_res18;
    local_50 = &local_78;
    local_48 = &local_res10;
    local_40 = &stack0x00000030;
    local_30 = &stack0x00000028;
    local_28 = local_res8;
    local_20 = &local_70;
    ppuStack_60 = &local_58;
    local_68 = &LAB_142d9d8e0;
    local_38 = param_1;
    FUN_1426936b0(local_res18,&local_68);
  }
  return;
}



// FUNCTION 142d9c630 FUN_142d9c630 body=410 status=ok
// SIG undefined FUN_142d9c630(void)

void FUN_142d9c630(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142385110();
  if (*(char *)(param_1 + 0x7c8) != '\0') {
    FUN_1426a9000(param_1 + 0x3b0,1);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&URigidBodyComponent::SetKinematic",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    plVar1 = (longlong *)(param_1 + 0x5a0);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    piVar8 = (int *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x5a8);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_20)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_142d9c7ad;
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 0x5a8);
    *(int *)(param_1 + 0x5a8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x5ac) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar8 = local_28;
    piVar8[1] = local_24;
    *(longlong *)(piVar8 + 2) = local_20;
LAB_142d9c7ad:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 142d9c7d0 FUN_142d9c7d0 body=41 status=ok
// SIG undefined FUN_142d9c7d0(void)

void FUN_142d9c7d0(longlong *param_1)

{
  FUN_142330a70();
  (**(code **)(*param_1 + 0x358))(param_1,0);
  FUN_142dba7f0(param_1);
  return;
}



// FUNCTION 142d9c800 FUN_142d9c800 body=719 status=ok
// SIG undefined FUN_142d9c800(void)

void FUN_142d9c800(longlong param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined8 local_res20;
  undefined8 local_a8;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x638) = 0;
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x63c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x630,0);
  }
  plVar2 = (longlong *)(param_1 + 0x650);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Empty(plVar2,*(undefined4 *)(param_1 + 0x1f0));
  plVar4 = local_res10;
  uVar8 = uVar6;
  uVar10 = uVar6;
  if (0 < *(int *)(param_1 + 0x1f0)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x1e8) + uVar8) != -1) {
        local_res20 = *(undefined8 *)
                       (*(longlong *)(param_3 + 0x20) + (longlong)*(int *)(*plVar4 + uVar8) * 0x10);
        local_a8 = &local_res20;
        puStack_a0 = (uint *)(*(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar10 * 4);
        FUN_1415ec610(plVar2,local_res8,&local_a8,0);
      }
      uVar9 = (int)uVar10 + 1;
      uVar8 = uVar8 + 4;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x1f0));
  }
  iVar5 = (*(int *)(param_1 + 0x658) - *(int *)(param_1 + 0x684)) + *(int *)(param_1 + 0x638);
  *(int *)(param_1 + 0x638) = iVar5;
  if (*(int *)(param_1 + 0x63c) < iVar5) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x630))
    ;
  }
  uVar9 = *(uint *)(param_1 + 0x678);
  puVar1 = (uint *)(param_1 + 0x660);
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar9 != 0) {
    puVar12 = *(uint **)(param_1 + 0x670);
    if (*(uint **)(param_1 + 0x670) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar3 = *puVar12;
    uVar8 = uVar6;
    while (uVar3 == 0) {
      iVar5 = (int)uVar6;
      uStack_90 = (int)uVar8 + 0x20;
      uVar8 = (ulonglong)uStack_90;
      local_a8._0_4_ = iVar5 + 1;
      uVar6 = (ulonglong)(uint)local_a8;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142d9c99c;
      uVar3 = puVar12[(longlong)iVar5 + 1];
    }
    local_a8._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_a8._4_4_ != 0) {
      for (; local_a8._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_a8._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_94 = (uStack_90 - iVar5) + 0x1f;
    if ((int)uVar9 < (int)uStack_94) {
LAB_142d9c99c:
      uStack_94 = uVar9;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x678);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,uStack_90);
  local_98 = -1 << ((byte)uVar3 & 0x1f);
  uStack_58 = (uint)local_a8;
  uStack_54 = local_a8._4_4_;
  uVar11 = uVar3 & 0xffffffe0;
  uStack_80 = (uint)local_a8;
  uStack_7c = local_a8._4_4_;
  puStack_a0 = puVar1;
  uStack_94 = uVar3;
  local_78 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  local_88 = plVar2;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar3 != uVar9) {
    puVar12 = *(uint **)(param_1 + 0x670);
    if (*(uint **)(param_1 + 0x670) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = puVar12[(int)uVar3 >> 5] & local_98;
    iVar5 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142d9ca62;
      uVar7 = puVar12[(longlong)iVar5 + 1];
      local_98 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar5 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_94 = (uVar11 - iVar5) + 0x1f;
    uVar3 = uStack_94;
    if ((int)uVar9 < (int)uStack_94) {
LAB_142d9ca62:
      uStack_94 = uVar9;
      uVar3 = uVar9;
    }
  }
  while (((uStack_6c != uVar3 || (local_78 != puVar1)) || (local_88 != plVar2))) {
    *(undefined8 *)
     (*(longlong *)(param_1 + 0x630) +
     (longlong)*(int *)(*local_88 + 8 + (longlong)(int)uStack_6c * 0x18) * 8) =
         *(undefined8 *)(*local_88 + (longlong)(int)uStack_6c * 0x18);
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
  return;
}



// FUNCTION 142d9cad0 FUN_142d9cad0 body=512 status=ok
// SIG undefined FUN_142d9cad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d9cad0(char *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_78;
  char local_77;
  undefined4 local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar6 = 0;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return (ulonglong)*(uint *)(param_1 + 0x18);
  }
  if (cVar1 == '\x01') {
    uStack_30 = 0;
    local_38 = param_2;
    uVar5 = FUN_142ca2f00(*(undefined8 *)(param_1 + 0x10),&local_38,0);
    return uVar5;
  }
  if (cVar1 != '\x02') {
    return 0;
  }
  plVar2 = (longlong *)FUN_142e4e4a0();
  if (((plVar2[0x1f] != 0) || ((**(code **)(*plVar2 + 0x368))(plVar2), plVar2[0x1f] != 0)) &&
     (lVar3 = FUN_142d60a70(), lVar3 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b34650) && (_Init_thread_header(), DAT_146b34650 == -1)) {
      FName::FName(&DAT_146b34648,L"Force",1);
      _Init_thread_footer();
    }
    local_60 = 0;
    local_48 = 0;
    local_68 = 0;
    local_64 = 0xffffffff;
    local_70 = DAT_146b34648;
    local_58 = 0;
    uStack_50 = 0;
    local_90 = FUN_140c74740(lVar3,*(undefined8 *)(param_1 + 8),0);
    local_98 = *(undefined8 *)(lVar3 + 0x28);
    local_88 = lVar3;
    FUN_1424ab540(&local_78,&local_70,1,&local_58);
    if (local_77 == '\0') {
      local_74 = 0;
      puVar4 = (uint *)FUN_141f803d0(&local_58,&local_38);
      if ((char)puVar4[1] != '\0') {
        uVar6 = *puVar4;
      }
      goto LAB_142d9cc1a;
    }
  }
  uVar6 = 0;
LAB_142d9cc1a:
  return (ulonglong)uVar6;
}



// FUNCTION 142d9ccd0 FUN_142d9ccd0 body=468 status=ok
// SIG undefined FUN_142d9ccd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d9ccd0(char *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_68;
  char local_67;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) && (*param_1 == '\0')) {
    uVar4 = 0;
  }
  else if (*param_1 == '\x01') {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x10);
  }
  else if (*param_1 == '\x02') {
    plVar1 = (longlong *)FUN_142e4e4a0();
    if (((plVar1[0x1f] != 0) ||
        ((**(code **)(*plVar1 + 0x368))(plVar1), uVar4 = 0, plVar1[0x1f] != 0)) &&
       (lVar2 = FUN_142d5fc00(), uVar4 = 0, lVar2 != 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b34680) && (_Init_thread_header(), DAT_146b34680 == -1)) {
        FName::FName(&DAT_146b34678,L"Mass",1);
        _Init_thread_footer();
      }
      local_50 = 0;
      local_38 = 0;
      local_58 = 0;
      local_54 = 0xffffffff;
      local_60 = DAT_146b34678;
      local_48 = 0;
      uStack_40 = 0;
      local_80 = FUN_140c74740(lVar2,*(undefined8 *)(param_1 + 8),0);
      local_88 = *(undefined8 *)(lVar2 + 0x28);
      local_78 = lVar2;
      FUN_1424ab540(&local_68,&local_60,1,&local_48);
      uVar4 = 0;
      if (local_67 == '\0') {
        local_64 = 0;
        puVar3 = (uint *)FUN_141f803d0(&local_48,local_30);
        uVar4 = 0;
        if ((char)puVar3[1] != '\0') {
          uVar4 = (ulonglong)*puVar3;
        }
      }
    }
  }
  else {
    uVar4 = FUN_142d9ceb0();
  }
  return uVar4;
}



// FUNCTION 142d9ceb0 FUN_142d9ceb0 body=1100 status=ok
// SIG undefined FUN_142d9ceb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_142d9ceb0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_8c8 [32];
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  longlong *local_898;
  undefined1 local_890 [1024];
  undefined1 *local_490;
  undefined8 local_488;
  undefined1 local_480 [1024];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_8c8;
  if (param_2 == (longlong *)0x0) {
    fVar14 = 0.0;
  }
  else {
    uVar11 = 0;
    local_490 = (undefined1 *)0x0;
    local_488 = 0;
    local_80 = (undefined1 *)0x0;
    local_78 = 0;
    local_898 = param_2;
    if ((int)param_2[0x17f] < 1) {
      lVar7 = FUN_1423af5a0(param_2);
      if (lVar7 != 0) {
        plVar9 = *(longlong **)(lVar7 + 0x40);
        uVar12 = (longlong)*(int *)(lVar7 + 0x48) & 0x1fffffffffffffff;
        if (plVar9 + *(int *)(lVar7 + 0x48) < plVar9) {
          uVar12 = uVar11;
        }
        uVar13 = uVar11;
        if (uVar12 != 0) {
          do {
            uVar5 = local_488;
            lVar7 = *plVar9;
            if (lVar7 != 0) {
              lVar1 = (longlong)(int)local_488;
              iVar6 = (int)local_488 + 1;
              local_488 = CONCAT44(local_488._4_4_,iVar6);
              if (local_488._4_4_ < iVar6) {
                TArray<AActor_*,TInlineAllocator<128,FDefaultAllocator>_>::ResizeGrow
                          (local_890,uVar5 & 0xffffffff);
              }
              puVar3 = local_890;
              if (local_490 != (undefined1 *)0x0) {
                puVar3 = local_490;
              }
              *(longlong *)(puVar3 + lVar1 * 8) = lVar7;
              uVar5 = uVar11;
              if (*(ulonglong *)(lVar7 + 0xa0) != 0) {
                uVar5 = *(ulonglong *)(lVar7 + 0xa0);
              }
              plVar4 = (longlong *)(**(code **)(*param_2 + 0x560))(param_2,0);
              if ((uVar5 == 0) &&
                 (((plVar4 == (longlong *)0x0 ||
                   (uVar5 = (**(code **)(*plVar4 + 0x2b0))(plVar4), uVar5 == 0)) &&
                  (DAT_146b17150 != 0)))) {
                uVar5 = *(ulonglong *)(DAT_146b17150 + 0x6c8);
              }
              lVar7 = (longlong)(int)local_78;
              iVar6 = (int)local_78 + 1;
              local_78 = CONCAT44(local_78._4_4_,iVar6);
              if (local_78._4_4_ < iVar6) {
                TArray<AActor_*,TInlineAllocator<128,FDefaultAllocator>_>::ResizeGrow(local_480);
              }
              puVar3 = local_480;
              if (local_80 != (undefined1 *)0x0) {
                puVar3 = local_80;
              }
              *(ulonglong *)(puVar3 + lVar7 * 8) = uVar5;
            }
            plVar9 = plVar9 + 1;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar12);
        }
      }
    }
    else {
      uVar12 = 0;
      plVar9 = (longlong *)param_2[0x17e];
      uVar11 = (longlong)(int)param_2[0x17f] & 0x1fffffffffffffff;
      if (plVar9 + (int)param_2[0x17f] < plVar9) {
        uVar11 = uVar12;
      }
      if (uVar11 != 0) {
        do {
          lVar7 = *plVar9;
          if ((lVar7 != 0) &&
             (lVar1 = FWeakObjectPtr::Get(lVar7 + 0x140), uVar13 = local_488, lVar1 != 0)) {
            lVar8 = (longlong)(int)local_488;
            iVar6 = (int)local_488 + 1;
            local_488 = CONCAT44(local_488._4_4_,iVar6);
            if (local_488._4_4_ < iVar6) {
              TArray<AActor_*,TInlineAllocator<128,FDefaultAllocator>_>::ResizeGrow
                        (local_890,uVar13 & 0xffffffff);
            }
            puVar3 = local_890;
            if (local_490 != (undefined1 *)0x0) {
              puVar3 = local_490;
            }
            *(longlong *)(puVar3 + lVar8 * 8) = lVar1;
            uVar2 = FUN_142698570(lVar7);
            uVar13 = local_78;
            lVar7 = (longlong)(int)local_78;
            iVar6 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar6);
            if (local_78._4_4_ < iVar6) {
              TArray<AActor_*,TInlineAllocator<128,FDefaultAllocator>_>::ResizeGrow
                        (local_480,uVar13 & 0xffffffff);
            }
            puVar3 = local_480;
            if (local_80 != (undefined1 *)0x0) {
              puVar3 = local_80;
            }
            *(undefined8 *)(puVar3 + lVar7 * 8) = uVar2;
          }
          plVar9 = plVar9 + 1;
          uVar12 = uVar12 + 1;
          param_2 = local_898;
        } while (uVar12 != uVar11);
      }
    }
    uVar12 = 0;
    fVar14 = 0.0;
    local_8a8 = (undefined4)param_2[0x46];
    local_8a4 = *(undefined4 *)((longlong)param_2 + 0x234);
    local_8a0 = (undefined4)param_2[0x47];
    uVar11 = uVar12;
    if (0 < (int)local_488) {
      do {
        puVar3 = local_480;
        if (local_80 != (undefined1 *)0x0) {
          puVar3 = local_80;
        }
        if (*(longlong *)(puVar3 + uVar12) == 0) {
          fVar16 = 0.001;
        }
        else {
          fVar16 = *(float *)(*(longlong *)(puVar3 + uVar12) + 0x38) * 0.001;
          if (fVar16 <= 9e-05) {
            fVar16 = 9e-05;
          }
        }
        puVar3 = local_890;
        if (local_490 != (undefined1 *)0x0) {
          puVar3 = local_490;
        }
        fVar15 = (float)(**(code **)(**(longlong **)(puVar3 + uVar12) + 0x280))
                                  (*(longlong **)(puVar3 + uVar12),&local_8a8,param_2);
        uVar10 = (int)uVar11 + 1;
        uVar12 = uVar12 + 8;
        fVar14 = fVar14 + fVar15 * fVar16;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_488);
    }
    if (local_80 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_490 != (undefined1 *)0x0) {
      FMemory::Free(local_490);
    }
  }
  return fVar14;
}



// FUNCTION 142d9d300 FUN_142d9d300 body=472 status=ok
// SIG undefined FUN_142d9d300(void)

void FUN_142d9d300(undefined8 param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float *param_6,float *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = param_3[1];
  fVar4 = param_2[1];
  fVar3 = *param_3;
  fVar6 = *param_2;
  uVar1 = __libm_sse2_sincosf_(param_5 * 0.017453292);
  fVar8 = (float)((ulonglong)uVar1 >> 0x20) * param_4;
  param_4 = (float)uVar1 * param_4;
  fVar2 = SQRT((fVar2 - fVar4) * (fVar2 - fVar4) + (fVar3 - fVar6) * (fVar3 - fVar6)) *
          (1.0 / fVar8);
  *param_6 = fVar2;
  fVar2 = ((param_3[2] - param_2[2]) - fVar2 * param_4) / (fVar2 * fVar2);
  *param_7 = fVar2 + fVar2;
  fVar6 = *param_3 - *param_2;
  fVar7 = param_3[1] - param_2[1];
  fVar3 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar2 = fVar6;
  fVar4 = fVar7;
  if ((fVar3 != 1.0) && (fVar2 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, 1e-08 <= fVar3)) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar2 = fVar6 * fVar4;
    fVar4 = fVar7 * fVar4;
  }
  *param_8 = CONCAT44(fVar4 * fVar8,fVar2 * fVar8);
  *(float *)(param_8 + 1) = param_4;
  return;
}



// FUNCTION 142d9d4e0 FUN_142d9d4e0 body=381 status=ok
// SIG undefined FUN_142d9d4e0(void)

void FUN_142d9d4e0(undefined8 param_1,float *param_2,float *param_3,float param_4,float param_5,
                  undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0.0001 <= param_4) {
    fVar1 = param_3[2];
    fVar2 = param_2[2];
    fVar6 = *param_3 - *param_2;
    fVar8 = param_3[1] - param_2[1];
    fVar3 = fVar8 * fVar8 + fVar6 * fVar6;
    fVar9 = SQRT(fVar3) * (1.0 / param_4);
    fVar7 = fVar6;
    fVar4 = fVar8;
    if ((fVar3 != 1.0) && (fVar7 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, 1e-08 <= fVar3)) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar7 = fVar6 * fVar4;
      fVar4 = fVar8 * fVar4;
    }
    *param_6 = CONCAT44(fVar4 * fVar9,fVar7 * fVar9);
    *(float *)(param_6 + 1) =
         ((fVar1 - fVar2) - param_5 * 0.5 * param_4 * param_4) * (1.0 / param_4);
    return;
  }
  *param_6 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(undefined4 *)(param_6 + 1) = DAT_1468b5d98;
  return;
}



// FUNCTION 142d9d660 FUN_142d9d660 body=116 status=ok
// SIG undefined FUN_142d9d660(void)

void FUN_142d9d660(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    lVar1 = FUN_14222b250(*param_2,param_2[1],0);
    if (lVar1 != 0) {
      FUN_14238d6f0(lVar1,param_2[1],param_2 + 2,(longlong)param_2 + 0x1c);
    }
  }
  (**(code **)(*param_1 + 0x280))(param_1,param_2,param_3);
  return;
}



// FUNCTION 142d9d6e0 FUN_142d9d6e0 body=504 status=ok
// SIG undefined FUN_142d9d6e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_142d9d6e0(undefined8 param_1,int *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  iVar10 = FUN_142708650(param_3);
  param_2[2] = iVar10;
  (**(code **)(*param_3 + 0x7a8))(param_3,param_2 + 0xe,param_2 + 0xb);
  FUN_142dcfa90(param_3,param_2,param_2 + 1);
  if (param_2[1] < 1) {
    fVar14 = 1.778;
  }
  else {
    fVar14 = (float)*param_2 / (float)param_2[1];
  }
  param_2[4] = (int)fVar14;
  (**(code **)(*(longlong *)param_3[0xa5] + 0x8b8))();
  fVar14 = (float)FUN_14271a5d0(param_3);
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar14 * 0.008726646);
  local_54 = 0x42b40000;
  param_2[3] = (int)(fVar14 + fVar14);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0xe);
  local_58 = 0;
  local_50 = 0xc2b40000;
  param_2[10] = param_2[0x10];
  pfVar11 = (float *)FRotator::Quaternion(&local_58,local_28);
  pfVar12 = (float *)FRotator::Quaternion(param_2 + 0xb,local_18);
  fVar14 = *pfVar11;
  fVar1 = pfVar11[1];
  fVar2 = pfVar11[2];
  fVar3 = pfVar11[3];
  fVar4 = *pfVar12;
  fVar5 = pfVar12[1];
  fVar6 = pfVar12[2];
  fVar7 = pfVar12[3];
  local_38 = fVar3 * fVar4 * _DAT_146b34300 + fVar7 * fVar14 + fVar2 * fVar5 * _DAT_146b342f0 +
             fVar1 * fVar6 * _DAT_146b342e0;
  fStack_34 = fVar2 * fVar4 * fRam0000000146b34304 + fVar7 * fVar1 +
              fVar3 * fVar5 * fRam0000000146b342f4 + fVar14 * fVar6 * fRam0000000146b342e4;
  fStack_30 = fVar1 * fVar4 * fRam0000000146b34308 + fVar7 * fVar2 +
              fVar14 * fVar5 * fRam0000000146b342f8 + fVar3 * fVar6 * fRam0000000146b342e8;
  fStack_2c = fVar14 * fVar4 * fRam0000000146b3430c + fVar7 * fVar3 +
              fVar1 * fVar5 * fRam0000000146b342fc + fVar2 * fVar6 * fRam0000000146b342ec;
  puVar13 = (undefined8 *)FQuat::Rotator(&local_38,local_48);
  *(undefined8 *)(param_2 + 5) = *puVar13;
  param_2[7] = *(int *)(puVar13 + 1);
  cVar8 = (**(code **)(*param_3 + 4000))(param_3);
  if (cVar8 == '\0') {
    cVar8 = (**(code **)(*param_3 + 0xfb8))(param_3);
    if (cVar8 == '\0') {
      bVar9 = 0;
      goto LAB_142d9d884;
    }
  }
  bVar9 = 1;
LAB_142d9d884:
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xfe;
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | bVar9;
  bVar9 = (**(code **)(*param_3 + 0xfb0))(param_3);
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xfd;
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | (bVar9 & 1) * '\x02';
  bVar9 = (**(code **)(*param_3 + 0xf98))(param_3);
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xfb;
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | (bVar9 & 1) << 2;
  return param_2;
}



// FUNCTION 142d9d8f0 FUN_142d9d8f0 body=81 status=ok
// SIG undefined FUN_142d9d8f0(void)

void FUN_142d9d8f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_142697a40(*param_1 + 0x3b0);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(*param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    FUN_142db9650(lVar2,lVar1,1);
  }
  return;
}



// FUNCTION 142d9d970 FUN_142d9d970 body=88 status=ok
// SIG undefined FUN_142d9d970(void)

void FUN_142d9d970(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_142697a40(*(undefined8 *)*param_1);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1[1] + 0x330) + 0x4e8))();
    (**(code **)(*plVar2 + 0x50))(plVar2,8,1 < iVar1 - 2U);
  }
  return;
}



// FUNCTION 142d9da70 FUN_142d9da70 body=368 status=ok
// SIG undefined FUN_142d9da70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d9da70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_142d96c20(param_1,local_38,0);
      plVar5 = local_38;
      if (local_28 != (longlong *)0x0) {
        plVar5 = local_28;
      }
      plVar1 = plVar5 + (int)local_20;
      plVar6 = plVar5;
      if (plVar5 != plVar1) {
        do {
          lVar4 = *plVar6;
          if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x2e0) & 2) != 0)) {
            FUN_142db7230(lVar4,param_2,param_3);
            goto joined_r0x000142d9db7f;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar1);
        for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
          lVar4 = *plVar5;
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) == param_2)) {
            iVar3 = FUN_14233f450(lVar4);
            if ((iVar3 == 3) &&
               (((*(byte *)(lVar4 + 0x2e0) & 2) == 0 && (*(longlong *)(lVar4 + 0x2d0) != param_3))))
            {
              *(longlong *)(lVar4 + 0x2d0) = param_3;
              FUN_142db6a60(lVar4);
            }
            break;
          }
        }
      }
joined_r0x000142d9db7f:
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  return;
}



// FUNCTION 142d9dbe0 FUN_142d9dbe0 body=285 status=ok
// SIG undefined FUN_142d9dbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d9dbe0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_142d96c20(param_1,local_38,0);
    plVar4 = local_38;
    if (local_28 != (longlong *)0x0) {
      plVar4 = local_28;
    }
    plVar1 = plVar4 + (int)local_20;
    plVar5 = plVar4;
    if (plVar4 != plVar1) {
      do {
        lVar2 = *plVar5;
        if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x2e0) & 2) != 0)) {
          FUN_142db7230(lVar2,param_2,param_3);
          goto joined_r0x000142d9dc9c;
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) == param_2)) {
          iVar3 = FUN_14233f450(lVar2);
          if ((iVar3 == 3) &&
             (((*(byte *)(lVar2 + 0x2e0) & 2) == 0 && (*(longlong *)(lVar2 + 0x2d0) != param_3)))) {
            *(longlong *)(lVar2 + 0x2d0) = param_3;
            FUN_142db6a60(lVar2);
          }
          break;
        }
      }
    }
joined_r0x000142d9dc9c:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 142d9dd00 ReleaseBuffer body=8 status=ok
// SIG undefined ReleaseBuffer(void)

void CAkSrcMediaCodecVorbis::ReleaseBuffer(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 142d9dd10 FUN_142d9dd10 body=64 status=ok
// SIG undefined FUN_142d9dd10(void)

void FUN_142d9dd10(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 142d9dd50 FUN_142d9dd50 body=13 status=ok
// SIG undefined FUN_142d9dd50(void)

void FUN_142d9dd50(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 142d9dd60 FUN_142d9dd60 body=312 status=ok
// SIG undefined FUN_142d9dd60(void)

void FUN_142d9dd60(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  longlong lVar10;
  undefined8 local_28 [2];
  
  iVar6 = FUN_142da7d60();
  lVar10 = (longlong)iVar6;
  if (iVar6 != -1) {
    plVar1 = (longlong *)(param_1 + 0x178);
    lVar2 = *plVar1;
    if (*(longlong *)(lVar2 + 0x10 + lVar10 * 0x30) != 0) {
      if (param_4 == '\0') {
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&UScreenParticleManagerComponent::OnScreenParticleFinished",L"::");
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(local_28,pwVar5 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                  (*(longlong *)(lVar2 + 0x10 + lVar10 * 0x30) + 0x8a8,param_1,local_28[0]);
        plVar3 = *(longlong **)(lVar2 + 0x10 + lVar10 * 0x30);
        (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
        iVar7 = *(int *)(param_1 + 0x180);
        iVar9 = (iVar7 - iVar6) + -1;
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar10 * 0x30),
                     (void *)((longlong)(iVar6 + 1) * 0x30 + *plVar1),(longlong)iVar9 * 0x30);
          iVar7 = *(int *)(param_1 + 0x180);
        }
        *(int *)(param_1 + 0x180) = iVar7 + -1;
        TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      else {
        FUN_142600fa0();
      }
    }
  }
  return;
}



// FUNCTION 142d9df00 FUN_142d9df00 body=120 status=ok
// SIG undefined FUN_142d9df00(void)

void FUN_142d9df00(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar2 = *(longlong **)(param_1 + 0x178);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x180) * 6;
  while( true ) {
    if (plVar2 == plVar1) {
      return;
    }
    if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2))))
    break;
    plVar2 = plVar2 + 6;
  }
  if (plVar2[2] == 0) {
    return;
  }
  local_18 = *param_5;
  uStack_14 = param_5[1];
  uStack_10 = param_5[2];
  uStack_c = param_5[3];
  FUN_14260ee50(plVar2[2],param_4,&local_18);
  return;
}



// FUNCTION 142d9e040 FUN_142d9e040 body=129 status=ok
// SIG undefined FUN_142d9e040(void)

void FUN_142d9e040(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x178);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x180) * 6;
  while( true ) {
    if (plVar2 == plVar1) {
      return;
    }
    if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2))))
    break;
    plVar2 = plVar2 + 6;
  }
  if (plVar2[2] == 0) {
    return;
  }
  local_18 = *param_5;
  local_10 = *(undefined4 *)(param_5 + 1);
  FUN_142610200(plVar2[2],param_4,&local_18);
  return;
}



// FUNCTION 142d9e0d0 FUN_142d9e0d0 body=130 status=ok
// SIG undefined FUN_142d9e0d0(void)

void FUN_142d9e0d0(undefined8 param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  char in_stack_00000038;
  char in_stack_00000040;
  char in_stack_00000050;
  char in_stack_00000058;
  char in_stack_00000060;
  char in_stack_00000068;
  
  if (in_stack_00000038 == '\0') {
    bVar1 = param_3 + 0x4eU & 0xfb;
  }
  else {
    bVar1 = param_3 + 0x4eU | 4;
  }
  if (in_stack_00000040 == '\0') {
    bVar1 = bVar1 & 0xf7;
  }
  else {
    bVar1 = bVar1 | 8;
  }
  if (in_stack_00000050 == '\0') {
    bVar1 = bVar1 & 0xef;
  }
  else {
    bVar1 = bVar1 | 0x10;
  }
  if (in_stack_00000058 == '\0') {
    bVar1 = bVar1 & 0xdf;
  }
  else {
    bVar1 = bVar1 | 0x20;
  }
  if (in_stack_00000060 == '\0') {
    bVar1 = bVar1 & 0xbf;
  }
  else {
    bVar1 = bVar1 | 0x40;
  }
  if (in_stack_00000068 == '\0') {
    bVar1 = bVar1 & 0x7f;
  }
  else {
    bVar1 = bVar1 | 0x80;
  }
  FUN_142e72620(param_1,param_2,bVar1);
  return;
}



// FUNCTION 142d9e160 FUN_142d9e160 body=81 status=ok
// SIG undefined FUN_142d9e160(void)

void FUN_142d9e160(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 local_38;
  undefined1 local_30;
  byte local_2f;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_2f = local_2f & 0xfe;
  local_10 = 0;
  local_20 = param_6;
  local_24 = param_5;
  local_18 = param_7;
  local_38 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  FUN_142db7ff0(param_5,&local_38);
  return;
}



// FUNCTION 142d9e1c0 FUN_142d9e1c0 body=1094 status=ok
// SIG undefined FUN_142d9e1c0(void)

void FUN_142d9e1c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,float param_6,char param_7,longlong param_8,longlong param_9)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *plVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar15;
  longlong *local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if ((param_2 != 0) && (param_3 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x188);
    plVar10 = (longlong *)*plVar1;
    uVar14 = 0;
    plVar12 = plVar10 + (longlong)*(int *)(param_1 + 400) * 7;
    for (; plVar10 != plVar12; plVar10 = plVar10 + 7) {
      if ((((param_2 == *plVar10) && (param_3 == plVar10[1])) && (param_4 == plVar10[2])) &&
         (param_5 == plVar10[3])) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) goto LAB_142d9e4ec;
    }
    if (((*(float *)(param_2 + 0x30) <= param_6) || (*(char *)(param_2 + 0x38) == '\0')) &&
       ((param_6 < *(float *)(param_2 + 0x34) || param_6 == *(float *)(param_2 + 0x34) ||
        (*(char *)(param_2 + 0x39) == '\0')))) {
      lVar6 = 0;
      if (*(char *)(param_2 + 0x3a) != '\0') {
        lVar7 = *(longlong *)(param_1 + 0x118);
        lVar9 = lVar6;
        if (lVar7 != 0) {
          lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (bVar11) {
            lVar6 = *(longlong *)(lVar7 + 0x848);
            lVar9 = lVar7;
          }
        }
        if (*(char *)(param_1 + 0x198) != '\0') {
          return;
        }
        if (lVar6 == 0) {
          return;
        }
        cVar4 = (**(code **)(**(longlong **)(lVar9 + 0x848) + 0x950))();
        if (cVar4 != '\0') {
          return;
        }
      }
      iVar3 = *(int *)(param_1 + 400);
      plVar10 = (longlong *)*plVar1;
      lStack_78 = param_5;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      for (plVar12 = plVar10; local_90 = param_2, lStack_88 = param_3, local_80 = param_4,
          plVar12 != plVar10 + (longlong)iVar3 * 7; plVar12 = plVar12 + 7) {
        if ((((*plVar12 == param_2) && (plVar12[1] == param_3)) && (plVar12[2] == param_4)) &&
           (((plVar12[3] == param_5 && (*(float *)(plVar12 + 4) == 0.0)) &&
            ((*(float *)((longlong)plVar12 + 0x24) == 0.0 &&
             ((plVar12[5] == 0 && (plVar12[6] == 0)))))))) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          iVar8 = (int)(((longlong)plVar12 - (longlong)plVar10) / 0x38);
          if (iVar8 != -1) goto LAB_142d9e41b;
          break;
        }
      }
      *(int *)(param_1 + 400) = iVar3 + 1;
      if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar3);
      }
      lVar6 = *plVar1;
      lVar7 = (longlong)iVar3 * 0x38;
      *(longlong *)(lVar7 + lVar6) = local_90;
      ((longlong *)(lVar7 + lVar6))[1] = lStack_88;
      plVar10 = (longlong *)(lVar7 + 0x10 + lVar6);
      *plVar10 = local_80;
      plVar10[1] = lStack_78;
      puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar6);
      *puVar2 = local_70;
      puVar2[1] = uStack_68;
      *(undefined8 *)(lVar7 + 0x30 + lVar6) = local_60;
      iVar8 = iVar3;
LAB_142d9e41b:
      if ((iVar8 < 0) || (*(int *)(param_1 + 400) <= iVar8)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        plVar10 = (longlong *)((longlong)iVar8 * 0x38 + *plVar1);
        FUN_142e72620(param_1,param_3,0x4e,0x4110000041800000,CONCAT44(uVar15,0x42c80000),4,param_4)
        ;
        if (plVar10 != (longlong *)0x0) {
          if (param_8 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x120);
            local_98 = (longlong *)0x0;
            if (lVar6 == 0) {
              lVar6 = FUN_1423407b0(param_1);
            }
            lVar6 = UKismetMaterialLibrary::CreateDynamicMaterialInstance(lVar6,param_8,local_98);
            plVar10[6] = param_9;
            plVar10[5] = lVar6;
            if (lVar6 != 0) {
              FUN_142e725c0(param_1,param_3,param_4,param_9,lVar6);
            }
          }
LAB_142d9e4ec:
          if (param_7 != '\0') {
            param_6 = param_6 + *(float *)(plVar10 + 4);
          }
          *(float *)(plVar10 + 4) = param_6;
          if (((param_6 < *(float *)(param_2 + 0x30)) && (*(char *)(param_2 + 0x38) != '\0')) ||
             ((*(float *)(param_2 + 0x34) <= param_6 && param_6 != *(float *)(param_2 + 0x34) &&
              (*(char *)(param_2 + 0x39) != '\0')))) {
            if (*(char *)(param_2 + 0x3b) != '\0') {
              FUN_142e724b0(param_1,param_3,param_4,0);
            }
            local_98 = plVar10;
            FUN_142d970b0(plVar1,&local_98);
          }
          else {
            fVar13 = *(float *)(*plVar10 + 0x30);
            if ((fVar13 <= param_6) && (fVar13 = *(float *)(*plVar10 + 0x34), param_6 <= fVar13)) {
              fVar13 = param_6;
            }
            *(float *)(plVar10 + 4) = fVar13;
            if (plVar10[5] == 0) {
              FUN_142e72560(param_1,param_3,param_4,param_5,fVar13);
            }
            else {
              FUN_1425a2750(plVar10[5],param_5,fVar13);
            }
            if ((*(longlong *)(param_1 + 0x120) != 0) ||
               (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)) {
              lVar6 = *(longlong *)(param_1 + 0x120);
              if (lVar6 == 0) {
                lVar6 = FUN_1423407b0(param_1);
              }
              uVar14 = *(undefined4 *)(lVar6 + 0x790);
            }
            *(undefined4 *)((longlong)plVar10 + 0x24) = uVar14;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d9e610 FUN_142d9e610 body=657 status=ok
// SIG undefined FUN_142d9e610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d9e610(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar11 + 0x38) < DAT_146b34660) {
    lVar11 = _Init_thread_header(&DAT_146b34660);
    if (DAT_146b34660 == -1) {
      FName::FName(&DAT_146b34658,"PhysLadderOverlap",1);
      lVar11 = _Init_thread_footer(&DAT_146b34660);
    }
  }
  local_108 = *(undefined8 *)(param_2 + 0x220);
  local_100 = *(undefined4 *)(param_2 + 0x228);
  local_e8 = *(float *)(param_2 + 0x210);
  fStack_e4 = *(float *)(param_2 + 0x214);
  fStack_e0 = *(float *)(param_2 + 0x218);
  fStack_dc = *(float *)(param_2 + 0x21c);
  auVar3._4_4_ = -(uint)(*(float *)(param_2 + 0x254) != fStack_e4);
  auVar3._0_4_ = -(uint)(*(float *)(param_2 + 0x250) != local_e8);
  auVar3._8_4_ = -(uint)(*(float *)(param_2 + 600) != fStack_e0);
  auVar3._12_4_ = -(uint)(*(float *)(param_2 + 0x25c) != fStack_dc);
  iVar7 = movmskps((int)lVar11,auVar3);
  if (iVar7 != 0) {
    *(float *)(param_2 + 0x250) = local_e8;
    *(float *)(param_2 + 0x254) = fStack_e4;
    *(float *)(param_2 + 600) = fStack_e0;
    *(float *)(param_2 + 0x25c) = fStack_dc;
    puVar8 = (undefined8 *)FQuat::Rotator(&local_e8,&local_f8);
    *(undefined8 *)(param_2 + 0x260) = *puVar8;
    *(undefined4 *)(param_2 + 0x268) = *(undefined4 *)(puVar8 + 1);
  }
  uVar10 = *(undefined8 *)(param_2 + 0x260);
  uVar1 = *(undefined4 *)(param_2 + 0x268);
  local_128 = (undefined1 *)0x0;
  FUN_1422ffb20(local_d8,DAT_146b34658,local_118,0);
  uVar5 = local_100;
  uVar4 = local_108;
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (plVar2 == (longlong *)0x0) {
LAB_142d9e78b:
    plVar2 = *(longlong **)(param_1 + 0xe0);
    if (plVar2 != (longlong *)0x0) {
      lVar11 = *plVar2;
      local_108 = uVar4;
      local_100 = uVar5;
      local_f8 = uVar10;
      local_f0 = uVar1;
      uVar10 = FRotator::Quaternion(&local_f8,&local_e8);
      local_128 = local_d8;
      cVar6 = (**(code **)(lVar11 + 0x868))(plVar2,param_2,&local_108,uVar10);
      if (cVar6 != '\0') goto LAB_142d9e7e4;
    }
    uVar10 = 0;
  }
  else {
    lVar11 = *plVar2;
    local_f8 = local_108;
    local_f0 = local_100;
    local_108 = uVar10;
    local_100 = uVar1;
    uVar9 = FRotator::Quaternion(&local_108,&local_e8);
    local_128 = local_d8;
    cVar6 = (**(code **)(lVar11 + 0x868))(plVar2,param_2,&local_f8,uVar9);
    if (cVar6 == '\0') goto LAB_142d9e78b;
LAB_142d9e7e4:
    uVar10 = 1;
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 142d9e8b0 FUN_142d9e8b0 body=503 status=ok
// SIG undefined FUN_142d9e8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d9e8b0(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar8 + 0x38) < DAT_146b34670) {
    lVar8 = _Init_thread_header(&DAT_146b34670);
    if (DAT_146b34670 == -1) {
      FName::FName(&DAT_146b34668,"PhysLadderOverlap",1);
      lVar8 = _Init_thread_footer(&DAT_146b34670);
    }
  }
  local_d8 = *(undefined4 *)(param_2 + 0x220);
  uStack_d4 = *(undefined4 *)(param_2 + 0x224);
  local_d0 = *(undefined4 *)(param_2 + 0x228);
  fVar1 = *(float *)(param_2 + 0x210);
  local_b8 = *(undefined8 *)(param_2 + 0x210);
  fStack_b0 = *(float *)(param_2 + 0x218);
  fStack_ac = *(float *)(param_2 + 0x21c);
  auVar3._4_4_ = -(uint)(*(float *)(param_2 + 0x254) != *(float *)(param_2 + 0x214));
  auVar3._0_4_ = -(uint)(*(float *)(param_2 + 0x250) != fVar1);
  auVar3._8_4_ = -(uint)(*(float *)(param_2 + 600) != fStack_b0);
  auVar3._12_4_ = -(uint)(*(float *)(param_2 + 0x25c) != fStack_ac);
  iVar5 = movmskps((int)lVar8,auVar3);
  if (iVar5 != 0) {
    *(float *)(param_2 + 0x250) = fVar1;
    *(float *)(param_2 + 0x254) = *(float *)(param_2 + 0x214);
    *(float *)(param_2 + 600) = fStack_b0;
    *(float *)(param_2 + 0x25c) = fStack_ac;
    puVar6 = (undefined8 *)FQuat::Rotator(&local_b8,&local_c8);
    *(undefined8 *)(param_2 + 0x260) = *puVar6;
    *(undefined4 *)(param_2 + 0x268) = *(undefined4 *)(puVar6 + 1);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x260);
  fVar1 = *(float *)(param_2 + 0x268);
  local_f8 = (undefined1 *)0x0;
  FUN_1422ffb20(local_a8,DAT_146b34668,local_e8,0);
  plVar2 = *(longlong **)(param_1 + -0x20);
  if (plVar2 != (longlong *)0x0) {
    local_c8 = CONCAT44(uStack_d4,local_d8);
    lVar8 = *plVar2;
    local_c0 = local_d0;
    local_b8 = uVar7;
    fStack_b0 = fVar1;
    uVar7 = FRotator::Quaternion(&local_b8,&local_d8);
    local_f8 = local_a8;
    cVar4 = (**(code **)(lVar8 + 0x868))(plVar2,param_2,&local_c8,uVar7);
    if (cVar4 != '\0') {
      uVar7 = 1;
      goto LAB_142d9ea13;
    }
  }
  uVar7 = 0;
LAB_142d9ea13:
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142d9eab0 FUN_142d9eab0 body=694 status=ok
// SIG undefined FUN_142d9eab0(void)

float FUN_142d9eab0(float *param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                   longlong param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_94;
  float local_90;
  
  puVar5 = (uint *)physx::PxQuat::operator*(param_2,local_b8,param_4);
  fVar11 = param_3[3];
  fVar10 = param_3[1];
  fVar9 = param_3[2];
  fVar13 = *param_3;
  uVar1 = puVar5[3];
  fVar16 = *(float *)(param_5 + 0x10) + *(float *)(param_5 + 0x10);
  fVar14 = fVar11 * fVar11 - 0.5;
  fVar12 = *(float *)(param_5 + 0x14) + *(float *)(param_5 + 0x14);
  fVar15 = *(float *)(param_5 + 0x18) + *(float *)(param_5 + 0x18);
  fVar8 = fVar13 * fVar16 + fVar10 * fVar12 + fVar9 * fVar15;
  fVar2 = param_3[4];
  fVar3 = param_3[6];
  fVar4 = param_3[5];
  puVar6 = (undefined8 *)physx::PxQuat::operator*(param_3,&local_c8);
  local_a8 = *puVar6;
  uStack_a0 = puVar6[1];
  local_c8 = *puVar5 ^ 0x80000000;
  local_c0 = puVar5[2] ^ 0x80000000;
  local_c4 = puVar5[1] ^ 0x80000000;
  local_bc = uVar1;
  local_98 = (fVar10 * fVar15 - fVar9 * fVar12) * fVar11 + fVar14 * fVar16 + fVar13 * fVar8 + fVar2;
  local_94 = (fVar9 * fVar16 - fVar13 * fVar15) * fVar11 + fVar14 * fVar12 + fVar10 * fVar8 + fVar4;
  local_90 = (fVar13 * fVar12 - fVar10 * fVar16) * fVar11 + fVar14 * fVar15 + fVar9 * fVar8 + fVar3;
  pfVar7 = (float *)physx::PxQuat::operator*(&local_c8,local_b8,&local_a8);
  fVar11 = param_1[1];
  fVar10 = *param_1;
  fVar9 = param_1[2];
  fVar13 = param_1[3];
  if (*pfVar7 * fVar10 + pfVar7[1] * fVar11 + fVar9 * pfVar7[2] + pfVar7[3] * fVar13 <= 0.0) {
    fVar10 = -fVar10;
    fVar11 = -fVar11;
    fVar9 = -fVar9;
    fVar13 = -fVar13;
  }
  return 1.0 - (*pfVar7 * fVar10 + pfVar7[1] * fVar11 + fVar9 * pfVar7[2] + pfVar7[3] * fVar13);
}



// FUNCTION 142d9ed70 FUN_142d9ed70 body=652 status=ok
// SIG undefined FUN_142d9ed70(void)

void FUN_142d9ed70(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *_Dst;
  size_t _Size;
  ushort *puVar6;
  void *pvVar7;
  void *pvVar8;
  ushort *local_88;
  undefined8 local_80;
  ushort *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  pvVar7 = (void *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  iVar4 = FUN_1423af4f0(param_2);
  if (0 < iVar4) {
    local_68 = (void *)0x0;
    local_5c = 0;
    local_78 = (ushort *)0x0;
    local_70 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_1423a6f40(param_2,&local_78,&local_48,0,1);
    local_60 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x718) + 0x48) + 0x80);
    _Size = (size_t)local_60;
    _Dst = pvVar7;
    if (0 < local_60) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68);
      _Dst = local_68;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
    puVar6 = local_78;
    while (iVar4 = iVar4 + -1, local_78 = puVar6, 0 < iVar4) {
      local_88 = (ushort *)0x0;
      local_80 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_1423a6f40(param_2,&local_88,&local_58,iVar4,1);
      pvVar5 = (void *)((ulonglong)((longlong)(local_88 + (int)local_80) + (1 - (longlong)local_88))
                       >> 1);
      if (local_88 + (int)local_80 < local_88) {
        pvVar5 = pvVar7;
      }
      puVar6 = local_88;
      pvVar8 = pvVar7;
      if (pvVar5 != (void *)0x0) {
        do {
          uVar2 = *puVar6;
          puVar1 = (undefined1 *)((longlong)_Dst + (ulonglong)uVar2);
          if (*(char *)((longlong)_Dst + (ulonglong)uVar2) == '\0') {
            iVar3 = (int)param_1[1];
            *(int *)(param_1 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
            }
            *(ushort *)(*param_1 + (longlong)iVar3 * 2) = uVar2;
            _Dst = local_68;
          }
          *puVar1 = 1;
          pvVar8 = (void *)((longlong)pvVar8 + 1);
          puVar6 = puVar6 + 1;
        } while (pvVar8 != pvVar5);
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      puVar6 = local_78;
      if (local_88 != (ushort *)0x0) {
        FMemory::Free(local_88);
        puVar6 = local_78;
      }
    }
    pvVar5 = (void *)((ulonglong)((longlong)(puVar6 + (int)local_70) + (1 - (longlong)puVar6)) >> 1)
    ;
    if (puVar6 + (int)local_70 < puVar6) {
      pvVar5 = pvVar7;
    }
    if (pvVar5 != (void *)0x0) {
      do {
        uVar2 = *puVar6;
        puVar1 = (undefined1 *)((longlong)_Dst + (ulonglong)uVar2);
        if (*(char *)((longlong)_Dst + (ulonglong)uVar2) == '\0') {
          iVar4 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
          }
          *(ushort *)(*param_1 + (longlong)iVar4 * 2) = uVar2;
          _Dst = local_68;
        }
        puVar6 = puVar6 + 1;
        *puVar1 = 1;
        pvVar7 = (void *)((longlong)pvVar7 + 1);
      } while (pvVar7 != pvVar5);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_78 != (ushort *)0x0) {
      FMemory::Free(local_78);
    }
    if (_Dst != (void *)0x0) {
      FMemory::Free(_Dst);
    }
  }
  return;
}



// FUNCTION 142d9f000 FUN_142d9f000 body=4578 status=ok
// SIG undefined FUN_142d9f000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d9f000(longlong *param_1,longlong param_2,float param_3,longlong *param_4,int param_5,
                  undefined8 param_6,float *param_7,float *param_8,longlong param_9,
                  longlong param_10,float *param_11,undefined8 *param_12,float *param_13)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  float *pfVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar25 [16];
  float fVar30;
  undefined1 auVar26 [16];
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
  float fVar51;
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
  undefined1 auStack_288 [32];
  float local_268;
  int local_260 [2];
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  longlong *local_1d8;
  float *local_1d0;
  undefined1 local_1b8 [16];
  longlong local_1a8;
  float *local_1a0;
  undefined8 *local_198;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  undefined1 local_168 [32];
  undefined8 local_148;
  ulonglong uStack_140;
  float local_138;
  float local_134;
  float local_130;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  lVar16 = (longlong)param_5 * 0x100;
  local_1e8 = param_10;
  local_260[0] = *(int *)(*param_4 + 0x28 + lVar16);
  lVar15 = (longlong)local_260[0];
  local_198 = param_12;
  local_1d0 = param_13;
  local_1a0 = param_11;
  local_1f8 = param_3;
  local_1f0 = param_2;
  local_1d8 = param_4;
  local_1a8 = lVar16;
  pfVar8 = (float *)physx::PxQuat::operator*(param_6,local_1b8,param_8);
  fVar57 = *(float *)(param_9 + 0x18) + *(float *)(param_9 + 0x18);
  fVar58 = *(float *)(param_9 + 0x10) + *(float *)(param_9 + 0x10);
  fVar24 = param_7[3];
  fVar62 = *(float *)(param_9 + 0x14) + *(float *)(param_9 + 0x14);
  fVar17 = param_7[1];
  fVar36 = *param_7;
  fVar40 = param_7[2];
  fVar30 = pfVar8[3];
  fVar46 = fVar58 * fVar36 + fVar62 * fVar17 + fVar57 * fVar40;
  fVar56 = fVar24 * fVar24 - 0.5;
  fVar39 = param_7[4];
  fVar37 = param_7[5];
  fVar64 = param_7[6];
  puVar9 = (undefined8 *)physx::PxQuat::operator*(param_7,local_188,param_9);
  fStack_210 = -pfVar8[2];
  local_148 = *puVar9;
  uStack_140 = puVar9[1];
  local_218 = -*pfVar8;
  fStack_214 = -pfVar8[1];
  fStack_20c = fVar30;
  local_138 = (fVar57 * fVar17 - fVar62 * fVar40) * fVar24 + fVar56 * fVar58 + fVar46 * fVar36 +
              fVar39;
  local_134 = (fVar58 * fVar40 - fVar57 * fVar36) * fVar24 + fVar56 * fVar62 + fVar46 * fVar17 +
              fVar37;
  local_130 = (fVar62 * fVar36 - fVar58 * fVar17) * fVar24 + fVar56 * fVar57 + fVar46 * fVar40 +
              fVar64;
  pfVar8 = (float *)physx::PxQuat::operator*(&local_218,local_1b8,&local_148);
  puVar9 = &local_148;
  pfVar14 = (float *)(lVar15 * 0x30 + local_1e8);
  local_208 = *pfVar8;
  local_204 = pfVar8[1];
  local_200 = pfVar8[2];
  local_1fc = pfVar8[3];
  pfVar8 = (float *)P2UTransform(puVar9,param_9);
  fVar44 = fRam0000000146b34328;
  fVar62 = fRam0000000146b34324;
  fVar58 = _DAT_146b34320;
  fVar57 = fRam0000000146b342c8;
  fVar56 = fRam0000000146b342c4;
  fVar46 = _DAT_146b342c0;
  local_1b8 = *(undefined1 (*) [16])(pfVar14 + 8);
  fVar24 = local_1b8._0_4_;
  fVar36 = local_1b8._4_4_;
  fVar30 = local_1b8._8_4_;
  fVar37 = local_1b8._12_4_;
  _local_188 = *(undefined1 (*) [16])(pfVar8 + 8);
  fVar17 = local_188._0_4_;
  fVar40 = local_188._4_4_;
  fVar39 = local_188._8_4_;
  fVar64 = local_188._12_4_;
  auVar18 = minps(_local_188,local_1b8);
  auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146b34324);
  auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146b34320);
  auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146b34328);
  auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146b3432c);
  iVar12 = movmskps((int)puVar9,auVar19);
  local_218 = _DAT_146b34320;
  fStack_214 = fRam0000000146b34324;
  fStack_210 = fRam0000000146b34328;
  fStack_20c = fRam0000000146b3432c;
  if (iVar12 == 0) {
    fVar46 = *pfVar14;
    fVar56 = pfVar14[1];
    fVar57 = pfVar14[2];
    fVar58 = pfVar14[3];
    fVar62 = *pfVar8;
    fVar44 = pfVar8[1];
    fVar28 = pfVar8[2];
    fVar32 = pfVar8[3];
    fVar23 = fVar24 * pfVar8[4];
    fVar33 = fVar36 * pfVar8[5];
    fVar29 = fVar30 * pfVar8[6];
    fVar34 = fVar37 * pfVar8[7];
    fVar42 = fVar32 * fVar46 * _DAT_146b34300 + fVar58 * fVar62 + fVar56 * fVar28 * _DAT_146b342f0 +
             fVar57 * fVar44 * _DAT_146b342e0;
    fVar22 = fVar28 * fVar46 * fRam0000000146b34304 + fVar58 * fVar44 +
             fVar56 * fVar32 * fRam0000000146b342f4 + fVar57 * fVar62 * fRam0000000146b342e4;
    fVar63 = fVar44 * fVar46 * fRam0000000146b34308 + fVar58 * fVar28 +
             fVar56 * fVar62 * fRam0000000146b342f8 + fVar57 * fVar32 * fRam0000000146b342e8;
    fVar62 = fVar62 * fVar46 * fRam0000000146b3430c + fVar58 * fVar32 +
             fVar56 * fVar44 * fRam0000000146b342fc + fVar57 * fVar28 * fRam0000000146b342ec;
    fVar28 = fVar29 * fVar56 - fVar33 * fVar57;
    fVar32 = fVar23 * fVar57 - fVar29 * fVar46;
    fVar45 = fVar33 * fVar46 - fVar23 * fVar56;
    fVar35 = fVar34 * fVar58 - fVar34 * fVar58;
    fVar28 = fVar28 + fVar28;
    fVar32 = fVar32 + fVar32;
    fVar45 = fVar45 + fVar45;
    fVar35 = fVar35 + fVar35;
    fVar44 = (fVar45 * fVar56 - fVar32 * fVar57) + fVar28 * fVar58 + fVar23 + pfVar14[4];
    fVar57 = (fVar28 * fVar57 - fVar45 * fVar46) + fVar32 * fVar58 + fVar33 + pfVar14[5];
    fVar46 = (fVar32 * fVar46 - fVar28 * fVar56) + fVar45 * fVar58 + fVar29 + pfVar14[6];
    fVar56 = (fVar35 * fVar58 - fVar35 * fVar58) + fVar35 * fVar58 + fVar34 + pfVar14[7];
  }
  else {
    fVar28 = *pfVar14;
    fVar32 = pfVar14[1];
    fVar42 = pfVar14[2];
    fVar22 = pfVar14[3];
    fVar63 = pfVar14[4];
    fVar45 = pfVar14[5];
    fVar35 = pfVar14[6];
    fVar27 = fVar32 + fVar32;
    fVar31 = fVar42 + fVar42;
    fVar43 = fVar28 * (fVar28 + fVar28);
    fVar41 = fVar22 * (fVar28 + fVar28);
    fVar23 = *pfVar8;
    fVar33 = pfVar8[1];
    fVar29 = pfVar8[2];
    fVar34 = pfVar8[3];
    fVar59 = (fVar22 * fVar31 + fVar28 * fVar27) * fVar24;
    fVar60 = (fVar41 + fVar32 * fVar31) * fVar36;
    fVar61 = (fVar22 * fVar27 + fVar28 * fVar31) * fVar30;
    fVar47 = fVar36 * (fVar28 * fVar27 - fVar22 * fVar31);
    fVar49 = fVar30 * (fVar32 * fVar31 - fVar41);
    fVar51 = fVar24 * (fVar28 * fVar31 - fVar22 * fVar27);
    fVar22 = (float)((uint)((_DAT_146b342c0 - (fVar42 * fVar31 + fVar32 * fVar27)) * fVar24) &
                    _DAT_146b342d0);
    fVar31 = (float)((uint)((fRam0000000146b342c4 - (fVar42 * fVar31 + fVar43)) * fVar36) &
                    uRam0000000146b342d4);
    fVar27 = (float)((uint)((fRam0000000146b342c8 - (fVar32 * fVar27 + fVar43)) * fVar30) &
                    uRam0000000146b342d8);
    fVar41 = (float)((uint)((fRam0000000146b342cc - (fVar43 + fVar43)) * fVar37) &
                    uRam0000000146b342dc);
    fVar28 = fVar33 + fVar33;
    fVar32 = fVar29 + fVar29;
    fVar43 = fVar23 * (fVar23 + fVar23);
    fVar42 = fVar34 * (fVar23 + fVar23);
    fVar53 = (fVar34 * fVar32 + fVar23 * fVar28) * fVar17;
    fVar54 = (fVar42 + fVar33 * fVar32) * fVar40;
    fVar55 = (fVar34 * fVar28 + fVar23 * fVar32) * fVar39;
    fVar48 = fVar40 * (fVar23 * fVar28 - fVar34 * fVar32);
    fVar50 = fVar39 * (fVar33 * fVar32 - fVar42);
    fVar52 = fVar17 * (fVar23 * fVar32 - fVar34 * fVar28);
    fVar23 = (float)((uint)((_DAT_146b342c0 - (fVar29 * fVar32 + fVar33 * fVar28)) * fVar17) &
                    _DAT_146b342d0);
    fVar29 = (float)((uint)((fRam0000000146b342c4 - (fVar29 * fVar32 + fVar43)) * fVar40) &
                    uRam0000000146b342d4);
    fVar33 = (float)((uint)((fRam0000000146b342c8 - (fVar33 * fVar28 + fVar43)) * fVar39) &
                    uRam0000000146b342d8);
    fVar34 = (float)((uint)((fRam0000000146b342cc - (fVar43 + fVar43)) * fVar64) &
                    uRam0000000146b342dc);
    fVar28 = pfVar8[4];
    fVar32 = pfVar8[5];
    fVar42 = pfVar8[6];
    local_258 = fVar53 * fVar47 + fVar23 * fVar22 + fVar52 * fVar61 + fVar34 * fVar63;
    fStack_254 = fVar53 * fVar31 + fVar23 * fVar59 + fVar52 * fVar49 + fVar34 * fVar45;
    fStack_250 = fVar53 * fVar60 + fVar23 * fVar51 + fVar52 * fVar27 + fVar34 * fVar35;
    fStack_24c = fVar53 * fVar41 + fVar23 * fVar41 + fVar52 * fVar41 + fVar34 * fRam0000000146b342cc
    ;
    local_248 = fVar29 * fVar47 + fVar48 * fVar22 + fVar54 * fVar61 + fVar34 * fVar63;
    fStack_244 = fVar29 * fVar31 + fVar48 * fVar59 + fVar54 * fVar49 + fVar34 * fVar45;
    fStack_240 = fVar29 * fVar60 + fVar48 * fVar51 + fVar54 * fVar27 + fVar34 * fVar35;
    fStack_23c = fVar29 * fVar41 + fVar48 * fVar41 + fVar54 * fVar41 + fVar34 * fRam0000000146b342cc
    ;
    local_238 = fVar50 * fVar47 + fVar55 * fVar22 + fVar33 * fVar61 + fVar34 * fVar63;
    fStack_234 = fVar50 * fVar31 + fVar55 * fVar59 + fVar33 * fVar49 + fVar34 * fVar45;
    fStack_230 = fVar50 * fVar60 + fVar55 * fVar51 + fVar33 * fVar27 + fVar34 * fVar35;
    fStack_22c = fVar50 * fVar41 + fVar55 * fVar41 + fVar33 * fVar41 + fVar34 * fRam0000000146b342cc
    ;
    local_228 = fVar32 * fVar47 + fVar28 * fVar22 + fVar42 * fVar61 + fRam0000000146b342cc * fVar63;
    fStack_224 = fVar32 * fVar31 + fVar28 * fVar59 + fVar42 * fVar49 + fRam0000000146b342cc * fVar45
    ;
    fStack_220 = fVar32 * fVar60 + fVar28 * fVar51 + fVar42 * fVar27 + fRam0000000146b342cc * fVar35
    ;
    fStack_21c = fVar32 * fVar41 + fVar28 * fVar41 + fVar42 * fVar41 +
                 fRam0000000146b342cc * fRam0000000146b342cc;
    FMatrix::RemoveScaling(&local_258);
    fVar46 = (float)(-(uint)(fVar58 <= fVar17 * fVar24) & (_DAT_146b34310 ^ (uint)fVar46) ^
                    _DAT_146b34310);
    fVar56 = (float)(-(uint)(fVar62 <= fVar40 * fVar36) & (uRam0000000146b34314 ^ (uint)fVar56) ^
                    uRam0000000146b34314);
    fVar57 = (float)(-(uint)(fVar44 <= fVar39 * fVar30) & (uRam0000000146b34318 ^ (uint)fVar57) ^
                    uRam0000000146b34318);
    local_258 = local_258 * fVar46;
    fStack_254 = fStack_254 * fVar46;
    fStack_250 = fStack_250 * fVar46;
    fStack_244 = fStack_244 * fVar56;
    fStack_240 = fStack_240 * fVar56;
    local_248 = local_248 * fVar56;
    fStack_234 = fStack_234 * fVar57;
    fStack_230 = fStack_230 * fVar57;
    local_238 = local_238 * fVar57;
    FQuat::FQuat(local_188,&local_258);
    local_268 = 1e-08;
    auVar25._0_4_ = (float)local_188._0_4_ * (float)local_188._0_4_ + fStack_180 * fStack_180;
    auVar25._4_4_ = (float)local_188._4_4_ * (float)local_188._4_4_ + fStack_17c * fStack_17c;
    auVar25._8_4_ = fStack_180 * fStack_180 + (float)local_188._0_4_ * (float)local_188._0_4_;
    auVar25._12_4_ = fStack_17c * fStack_17c + (float)local_188._4_4_ * (float)local_188._4_4_;
    fVar44 = auVar25._4_4_ + auVar25._0_4_;
    fVar28 = auVar25._8_4_ + auVar25._4_4_;
    fVar32 = auVar25._12_4_ + auVar25._8_4_;
    fVar45 = auVar25._0_4_ + auVar25._12_4_;
    auVar18._4_4_ = fVar28;
    auVar18._0_4_ = fVar44;
    auVar18._8_4_ = fVar32;
    auVar18._12_4_ = fVar45;
    auVar18 = rsqrtps(auVar25,auVar18);
    fVar46 = auVar18._0_4_;
    fVar57 = auVar18._4_4_;
    fVar58 = auVar18._8_4_;
    fVar62 = auVar18._12_4_;
    fVar46 = (_DAT_146b342b0 - fVar46 * fVar46 * fVar44 * _DAT_146b342b0) * fVar46 + fVar46;
    fVar57 = (fRam0000000146b342b4 - fVar57 * fVar57 * fVar28 * fRam0000000146b342b4) * fVar57 +
             fVar57;
    fVar58 = (fRam0000000146b342b8 - fVar58 * fVar58 * fVar32 * fRam0000000146b342b8) * fVar58 +
             fVar58;
    fVar62 = (fRam0000000146b342bc - fVar62 * fVar62 * fVar45 * fRam0000000146b342bc) * fVar62 +
             fVar62;
    fVar56 = 0.0;
    fVar42 = (float)(((uint)(((_DAT_146b342b0 - fVar46 * fVar46 * fVar44 * _DAT_146b342b0) * fVar46
                             + fVar46) * (float)local_188._0_4_) ^ _DAT_146b342a0) &
                     -(uint)(1e-08 <= fVar44) ^ _DAT_146b342a0);
    fVar22 = (float)(((uint)(((fRam0000000146b342b4 -
                              fVar57 * fVar57 * fVar28 * fRam0000000146b342b4) * fVar57 + fVar57) *
                            (float)local_188._4_4_) ^ uRam0000000146b342a4) &
                     -(uint)(1e-08 <= fVar28) ^ uRam0000000146b342a4);
    fVar63 = (float)(((uint)(((fRam0000000146b342b8 -
                              fVar58 * fVar58 * fVar32 * fRam0000000146b342b8) * fVar58 + fVar58) *
                            fStack_180) ^ uRam0000000146b342a8) & -(uint)(1e-08 <= fVar32) ^
                    uRam0000000146b342a8);
    fVar62 = (float)(((uint)(((fRam0000000146b342bc -
                              fVar62 * fVar62 * fVar45 * fRam0000000146b342bc) * fVar62 + fVar62) *
                            fStack_17c) ^ uRam0000000146b342ac) & -(uint)(1e-08 <= fVar45) ^
                    uRam0000000146b342ac);
    fVar44 = local_228;
    fVar57 = fStack_224;
    fVar46 = fStack_220;
  }
  lVar5 = local_1e8;
  lVar4 = local_1f0;
  iVar12 = local_260[0];
  fVar39 = fVar39 * fVar30;
  fVar40 = fVar40 * fVar36;
  fVar17 = fVar17 * fVar24;
  fVar64 = fVar64 * fVar37;
  if (*(int *)(lVar16 + *local_1d8) != -1) {
    lVar1 = *(longlong *)(local_1f0 + 0x20);
    iVar7 = *(int *)(lVar1 + 8 + lVar15 * 0x10);
    fVar24 = _DAT_146b342e0;
    fVar36 = fRam0000000146b342e4;
    fVar30 = fRam0000000146b342e8;
    fVar37 = fRam0000000146b342ec;
    fVar58 = _DAT_146b342f0;
    fVar28 = fRam0000000146b342f4;
    fVar32 = fRam0000000146b342f8;
    fVar45 = fRam0000000146b342fc;
    fVar35 = _DAT_146b34300;
    fVar23 = fRam0000000146b34304;
    fVar33 = fRam0000000146b34308;
    fVar29 = fRam0000000146b3430c;
    fVar34 = _DAT_146b34320;
    local_218 = _DAT_146b34320;
    fVar27 = fRam0000000146b34324;
    fStack_214 = fRam0000000146b34324;
    fVar31 = fRam0000000146b34328;
    fStack_210 = fRam0000000146b34328;
    fVar41 = fRam0000000146b3432c;
    fStack_20c = fRam0000000146b3432c;
    while (local_118 = fVar42, fStack_114 = fVar22, fStack_110 = fVar63, fStack_10c = fVar62,
          local_108 = fVar44, fStack_104 = fVar57, fStack_100 = fVar46, fStack_fc = fVar56,
          local_f8 = fVar17, fStack_f4 = fVar40, fStack_f0 = fVar39, fStack_ec = fVar64, iVar7 != -1
          ) {
      lVar15 = (longlong)iVar7;
      FUN_140c74540(param_1,local_260,*(undefined8 *)(lVar1 + lVar15 * 0x10));
      fVar48 = fRam0000000146b342c8;
      fVar47 = fRam0000000146b342c4;
      fVar43 = _DAT_146b342c0;
      if (local_260[0] == -1) {
        lVar16 = 0;
      }
      else {
        lVar16 = *param_1 + (longlong)local_260[0] * 0x18;
      }
      piVar10 = (int *)(lVar16 + 8);
      if (lVar16 == 0) {
        piVar10 = (int *)0x0;
      }
      if (piVar10 == (int *)0x0) {
        iVar13 = -1;
      }
      else {
        iVar13 = *piVar10;
      }
      param_11 = local_1a0;
      lVar16 = local_1a8;
      if ((iVar7 == iVar12) || (iVar13 != -1)) break;
      auVar20._4_4_ = fVar40;
      auVar20._0_4_ = fVar17;
      auVar20._8_4_ = fVar39;
      auVar20._12_4_ = fVar64;
      pfVar8 = (float *)(lVar15 * 0x30 + lVar5);
      auVar18 = *(undefined1 (*) [16])(pfVar8 + 8);
      fVar49 = auVar18._0_4_;
      fVar50 = auVar18._4_4_;
      fVar51 = auVar18._8_4_;
      fVar52 = auVar18._12_4_;
      auVar18 = minps(auVar20,auVar18);
      auVar21._4_4_ = -(uint)(auVar18._4_4_ < fVar27);
      auVar21._0_4_ = -(uint)(auVar18._0_4_ < fVar34);
      auVar21._8_4_ = -(uint)(auVar18._8_4_ < fVar31);
      auVar21._12_4_ = -(uint)(auVar18._12_4_ < fVar41);
      iVar7 = movmskps((int)piVar10,auVar21);
      if (iVar7 == 0) {
        fVar43 = *pfVar8;
        fVar47 = pfVar8[1];
        fVar48 = pfVar8[2];
        fVar53 = pfVar8[3];
        fVar61 = fVar22 * fVar43;
        fVar38 = fVar42 * fVar43;
        fVar44 = fVar49 * fVar44;
        fVar57 = fVar50 * fVar57;
        fVar46 = fVar51 * fVar46;
        fVar56 = fVar52 * fVar56;
        fVar59 = fVar42 * fVar47;
        fVar60 = fVar22 * fVar47;
        fVar54 = fVar48 * fVar42;
        fVar55 = fVar48 * fVar63;
        fVar42 = fVar62 * fVar43 * fVar35 + fVar53 * fVar42 + fVar63 * fVar47 * fVar58 +
                 fVar48 * fVar22 * fVar24;
        fVar22 = fVar63 * fVar43 * fVar23 + fVar53 * fVar22 + fVar62 * fVar47 * fVar28 +
                 fVar54 * fVar36;
        fVar63 = fVar61 * fVar33 + fVar53 * fVar63 + fVar59 * fVar32 + fVar48 * fVar62 * fVar30;
        fVar62 = fVar38 * fVar29 + fVar53 * fVar62 + fVar60 * fVar45 + fVar55 * fVar37;
        fVar54 = fVar46 * fVar47 - fVar57 * fVar48;
        fVar55 = fVar44 * fVar48 - fVar46 * fVar43;
        fVar59 = fVar57 * fVar43 - fVar44 * fVar47;
        fVar60 = fVar56 * fVar53 - fVar56 * fVar53;
        fVar54 = fVar54 + fVar54;
        fVar55 = fVar55 + fVar55;
        fVar59 = fVar59 + fVar59;
        fVar60 = fVar60 + fVar60;
        fVar44 = (fVar59 * fVar47 - fVar55 * fVar48) + fVar54 * fVar53 + fVar44 + pfVar8[4];
        fVar57 = (fVar54 * fVar48 - fVar59 * fVar43) + fVar55 * fVar53 + fVar57 + pfVar8[5];
        fVar46 = (fVar55 * fVar43 - fVar54 * fVar47) + fVar59 * fVar53 + fVar46 + pfVar8[6];
        fVar56 = (fVar60 * fVar53 - fVar60 * fVar53) + fVar60 * fVar53 + fVar56 + pfVar8[7];
      }
      else {
        fVar24 = *pfVar8;
        fVar36 = pfVar8[1];
        fVar30 = pfVar8[2];
        fVar37 = pfVar8[3];
        fVar56 = pfVar8[4];
        fVar58 = pfVar8[5];
        fVar28 = pfVar8[6];
        fVar32 = fVar36 + fVar36;
        fVar23 = fVar30 + fVar30;
        fVar33 = (fVar24 + fVar24) * fVar24;
        fVar45 = (fVar24 + fVar24) * fVar37;
        fVar59 = (fVar23 * fVar37 + fVar32 * fVar24) * fVar49;
        fVar60 = (fVar45 + fVar23 * fVar36) * fVar50;
        fVar61 = (fVar32 * fVar37 + fVar23 * fVar24) * fVar51;
        fVar27 = fVar50 * (fVar32 * fVar24 - fVar23 * fVar37);
        fVar31 = fVar51 * (fVar23 * fVar36 - fVar45);
        fVar41 = fVar49 * (fVar23 * fVar24 - fVar32 * fVar37);
        fVar35 = fVar22 + fVar22;
        fVar37 = fVar63 + fVar63;
        fVar24 = (float)((uint)((_DAT_146b342c0 - (fVar23 * fVar30 + fVar32 * fVar36)) * fVar49) &
                        _DAT_146b342d0);
        fVar30 = (float)((uint)((fRam0000000146b342c4 - (fVar23 * fVar30 + fVar33)) * fVar50) &
                        uRam0000000146b342d4);
        fVar32 = (float)((uint)((fRam0000000146b342c8 - (fVar32 * fVar36 + fVar33)) * fVar51) &
                        uRam0000000146b342d8);
        fVar45 = (float)((uint)((fRam0000000146b342cc - (fVar33 + fVar33)) * fVar52) &
                        uRam0000000146b342dc);
        fVar23 = (fVar42 + fVar42) * fVar42;
        fVar36 = (fVar42 + fVar42) * fVar62;
        fVar53 = (fVar37 * fVar62 + fVar35 * fVar42) * fVar17;
        fVar54 = (fVar36 + fVar37 * fVar22) * fVar40;
        fVar55 = (fVar35 * fVar62 + fVar37 * fVar42) * fVar39;
        fVar33 = fVar40 * (fVar35 * fVar42 - fVar37 * fVar62);
        fVar29 = fVar39 * (fVar37 * fVar22 - fVar36);
        fVar34 = fVar17 * (fVar37 * fVar42 - fVar35 * fVar62);
        fVar36 = (float)((uint)((_DAT_146b342c0 - (fVar37 * fVar63 + fVar35 * fVar22)) * fVar17) &
                        _DAT_146b342d0);
        fVar37 = (float)((uint)((fRam0000000146b342c4 - (fVar37 * fVar63 + fVar23)) * fVar40) &
                        uRam0000000146b342d4);
        fVar62 = (float)((uint)((fRam0000000146b342c8 - (fVar35 * fVar22 + fVar23)) * fVar39) &
                        uRam0000000146b342d8);
        fVar42 = (float)((uint)((fRam0000000146b342cc - (fVar23 + fVar23)) * fVar64) &
                        uRam0000000146b342dc);
        local_258 = fVar53 * fVar27 + fVar36 * fVar24 + fVar34 * fVar61 + fVar42 * fVar56;
        fStack_254 = fVar53 * fVar30 + fVar36 * fVar59 + fVar34 * fVar31 + fVar42 * fVar58;
        fStack_250 = fVar53 * fVar60 + fVar36 * fVar41 + fVar34 * fVar32 + fVar42 * fVar28;
        fStack_24c = fVar53 * fVar45 + fVar36 * fVar45 + fVar34 * fVar45 +
                     fVar42 * fRam0000000146b342cc;
        local_248 = fVar37 * fVar27 + fVar33 * fVar24 + fVar54 * fVar61 + fVar42 * fVar56;
        fStack_244 = fVar37 * fVar30 + fVar33 * fVar59 + fVar54 * fVar31 + fVar42 * fVar58;
        fStack_240 = fVar37 * fVar60 + fVar33 * fVar41 + fVar54 * fVar32 + fVar42 * fVar28;
        fStack_23c = fVar37 * fVar45 + fVar33 * fVar45 + fVar54 * fVar45 +
                     fVar42 * fRam0000000146b342cc;
        local_238 = fVar29 * fVar27 + fVar55 * fVar24 + fVar62 * fVar61 + fVar42 * fVar56;
        fStack_234 = fVar29 * fVar30 + fVar55 * fVar59 + fVar62 * fVar31 + fVar42 * fVar58;
        fStack_230 = fVar29 * fVar60 + fVar55 * fVar41 + fVar62 * fVar32 + fVar42 * fVar28;
        fStack_22c = fVar29 * fVar45 + fVar55 * fVar45 + fVar62 * fVar45 +
                     fVar42 * fRam0000000146b342cc;
        local_228 = fVar57 * fVar27 + fVar44 * fVar24 + fVar46 * fVar61 +
                    fRam0000000146b342cc * fVar56;
        fStack_224 = fVar57 * fVar30 + fVar44 * fVar59 + fVar46 * fVar31 +
                     fRam0000000146b342cc * fVar58;
        fStack_220 = fVar57 * fVar60 + fVar44 * fVar41 + fVar46 * fVar32 +
                     fRam0000000146b342cc * fVar28;
        fStack_21c = fVar57 * fVar45 + fVar44 * fVar45 + fVar46 * fVar45 +
                     fRam0000000146b342cc * fRam0000000146b342cc;
        FMatrix::RemoveScaling(&local_258);
        fVar24 = (float)(-(uint)(local_218 <= fVar49 * fVar17) & (_DAT_146b34310 ^ (uint)fVar43) ^
                        _DAT_146b34310);
        fVar36 = (float)(-(uint)(fStack_214 <= fVar50 * fVar40) &
                         (uRam0000000146b34314 ^ (uint)fVar47) ^ uRam0000000146b34314);
        fVar30 = (float)(-(uint)(fStack_210 <= fVar51 * fVar39) &
                         (uRam0000000146b34318 ^ (uint)fVar48) ^ uRam0000000146b34318);
        local_258 = local_258 * fVar24;
        fStack_254 = fStack_254 * fVar24;
        fStack_250 = fStack_250 * fVar24;
        fStack_240 = fStack_240 * fVar36;
        fStack_244 = fStack_244 * fVar36;
        local_248 = local_248 * fVar36;
        fStack_230 = fStack_230 * fVar30;
        local_238 = local_238 * fVar30;
        fStack_234 = fStack_234 * fVar30;
        FQuat::FQuat(&local_1e8,&local_258);
        local_268 = 1e-08;
        local_218 = _DAT_146b34320;
        fStack_214 = fRam0000000146b34324;
        fStack_210 = fRam0000000146b34328;
        fStack_20c = fRam0000000146b3432c;
        auVar26._0_4_ = (float)local_1e8 * (float)local_1e8 + fStack_1e0 * fStack_1e0;
        auVar26._4_4_ = local_1e8._4_4_ * local_1e8._4_4_ + fStack_1dc * fStack_1dc;
        auVar26._8_4_ = fStack_1e0 * fStack_1e0 + (float)local_1e8 * (float)local_1e8;
        auVar26._12_4_ = fStack_1dc * fStack_1dc + local_1e8._4_4_ * local_1e8._4_4_;
        fVar46 = auVar26._4_4_ + auVar26._0_4_;
        fVar57 = auVar26._8_4_ + auVar26._4_4_;
        fVar58 = auVar26._12_4_ + auVar26._8_4_;
        fVar62 = auVar26._0_4_ + auVar26._12_4_;
        auVar2._4_4_ = fVar57;
        auVar2._0_4_ = fVar46;
        auVar2._8_4_ = fVar58;
        auVar2._12_4_ = fVar62;
        auVar18 = rsqrtps(auVar26,auVar2);
        fVar24 = auVar18._0_4_;
        fVar36 = auVar18._4_4_;
        fVar30 = auVar18._8_4_;
        fVar37 = auVar18._12_4_;
        fVar24 = (_DAT_146b342b0 - fVar24 * fVar24 * fVar46 * _DAT_146b342b0) * fVar24 + fVar24;
        fVar36 = (fRam0000000146b342b4 - fVar36 * fVar36 * fVar57 * fRam0000000146b342b4) * fVar36 +
                 fVar36;
        fVar30 = (fRam0000000146b342b8 - fVar30 * fVar30 * fVar58 * fRam0000000146b342b8) * fVar30 +
                 fVar30;
        fVar37 = (fRam0000000146b342bc - fVar37 * fVar37 * fVar62 * fRam0000000146b342bc) * fVar37 +
                 fVar37;
        fVar56 = 0.0;
        fVar42 = (float)(((uint)(((_DAT_146b342b0 - fVar24 * fVar24 * fVar46 * _DAT_146b342b0) *
                                  fVar24 + fVar24) * (float)local_1e8) ^ _DAT_146b342a0) &
                         -(uint)(1e-08 <= fVar46) ^ _DAT_146b342a0);
        fVar22 = (float)(((uint)(((fRam0000000146b342b4 -
                                  fVar36 * fVar36 * fVar57 * fRam0000000146b342b4) * fVar36 + fVar36
                                 ) * local_1e8._4_4_) ^ uRam0000000146b342a4) &
                         -(uint)(1e-08 <= fVar57) ^ uRam0000000146b342a4);
        fVar63 = (float)(((uint)(((fRam0000000146b342b8 -
                                  fVar30 * fVar30 * fVar58 * fRam0000000146b342b8) * fVar30 + fVar30
                                 ) * fStack_1e0) ^ uRam0000000146b342a8) & -(uint)(1e-08 <= fVar58)
                        ^ uRam0000000146b342a8);
        fVar62 = (float)(((uint)(((fRam0000000146b342bc -
                                  fVar37 * fVar37 * fVar62 * fRam0000000146b342bc) * fVar37 + fVar37
                                 ) * fStack_1dc) ^ uRam0000000146b342ac) & -(uint)(1e-08 <= fVar62)
                        ^ uRam0000000146b342ac);
        local_1e8 = CONCAT44(fVar22,fVar42);
        fVar34 = _DAT_146b34320;
        fVar27 = fRam0000000146b34324;
        fVar31 = fRam0000000146b34328;
        fVar41 = fRam0000000146b3432c;
        fVar35 = _DAT_146b34300;
        fVar23 = fRam0000000146b34304;
        fVar33 = fRam0000000146b34308;
        fVar29 = fRam0000000146b3430c;
        fVar58 = _DAT_146b342f0;
        fVar28 = fRam0000000146b342f4;
        fVar32 = fRam0000000146b342f8;
        fVar45 = fRam0000000146b342fc;
        fVar24 = _DAT_146b342e0;
        fVar36 = fRam0000000146b342e4;
        fVar30 = fRam0000000146b342e8;
        fVar37 = fRam0000000146b342ec;
        fVar44 = local_228;
        fVar57 = fStack_224;
        fVar46 = fStack_220;
        fStack_1e0 = fVar63;
        fStack_1dc = fVar62;
      }
      fVar64 = fVar52 * fVar64;
      fVar39 = fVar51 * fVar39;
      fVar40 = fVar50 * fVar40;
      fVar17 = fVar49 * fVar17;
      lVar1 = *(longlong *)(lVar4 + 0x20);
      lVar16 = local_1a8;
      param_11 = local_1a0;
      iVar7 = *(int *)(lVar1 + 8 + lVar15 * 0x10);
    }
    fVar24 = param_8[3];
    fVar17 = param_8[2];
    fVar36 = *param_8;
    fVar40 = param_8[1];
    local_268 = -fVar17;
    fVar44 = -fVar36;
    fVar37 = -(param_8[4] + param_8[4]);
    fVar58 = fVar24 * fVar24 - 0.5;
    fVar64 = -(param_8[5] + param_8[5]);
    fVar39 = -(param_8[6] + param_8[6]);
    fVar62 = -fVar40;
    local_148 = CONCAT44(fVar62,fVar44);
    fVar30 = fVar64 * fVar40 + fVar37 * fVar36 + fVar39 * fVar17;
    fVar46 = (fVar58 * fVar37 - (fVar39 * fVar40 - fVar64 * fVar17) * fVar24) + fVar30 * fVar36;
    fVar56 = (fVar58 * fVar64 - (fVar37 * fVar17 - fVar39 * fVar36) * fVar24) + fVar30 * fVar40;
    uStack_140 = *(ulonglong *)(param_8 + 2) ^ 0x80000000;
    fVar57 = (fVar58 * fVar39 - (fVar64 * fVar36 - fVar37 * fVar40) * fVar24) + fVar30 * fVar17;
    local_138 = fVar46;
    local_134 = fVar56;
    local_130 = fVar57;
    lVar15 = U2PTransform(local_188,&local_118);
    fVar39 = *(float *)(lVar15 + 0x10) + *(float *)(lVar15 + 0x10);
    fVar64 = *(float *)(lVar15 + 0x14) + *(float *)(lVar15 + 0x14);
    fVar36 = *(float *)(lVar15 + 0x18) + *(float *)(lVar15 + 0x18);
    fVar37 = fVar39 * local_268;
    fVar17 = fVar64 * local_268;
    fVar40 = fVar39 * fVar44 + fVar64 * fVar62 + fVar36 * local_268;
    fVar30 = fVar40 * local_268;
    puVar9 = (undefined8 *)physx::PxQuat::operator*(&local_148,local_1b8,lVar15);
    plVar6 = local_1d8;
    uVar3 = puVar9[1];
    lVar15 = *local_1d8;
    *(undefined8 *)param_11 = *puVar9;
    *(undefined8 *)(param_11 + 2) = uVar3;
    param_11[4] = (fVar36 * fVar62 - fVar17) * fVar24 + fVar58 * fVar39 + fVar40 * fVar44 + fVar46;
    param_11[5] = (fVar37 - fVar36 * fVar44) * fVar24 + fVar58 * fVar64 + fVar40 * fVar62 + fVar56;
    param_11[6] = (fVar64 * fVar44 - fVar39 * fVar62) * fVar24 + fVar58 * fVar36 + fVar30 + fVar57;
    U2PTransform(local_168,lVar15 + 0x80 + lVar16);
    fVar24 = param_11[1];
    fVar30 = 0.0;
    fVar17 = *param_11;
    fVar36 = param_11[2];
    fVar40 = param_11[3];
    if (fVar17 * local_208 + fVar24 * local_204 + fVar36 * local_200 + fVar40 * local_1fc <= 0.0) {
      fVar17 = -fVar17;
      fVar24 = -fVar24;
      fVar36 = -fVar36;
      fVar40 = -fVar40;
    }
    fVar39 = fVar24 * fVar24 + fVar17 * fVar17 + fVar36 * fVar36;
    if (1e-16 <= fVar39) {
      fVar30 = 1.0 / SQRT(fVar39);
      fVar17 = fVar30 * fVar17;
      fVar24 = fVar30 * fVar24;
      fVar36 = fVar30 * fVar36;
      if (1e-08 <= ABS(fVar40)) {
        fVar30 = _guard_xfg_dispatch_icall_nop(fVar30 * fVar39,fVar40);
        fVar30 = fVar30 + fVar30;
      }
      else {
        fVar30 = 3.1415927;
      }
    }
    else {
      fVar17 = 1.0;
      fVar24 = 0.0;
      fVar36 = 0.0;
    }
    *(undefined4 *)(local_198 + 1) = 0;
    lVar15 = *plVar6;
    *local_198 = 0;
    fVar17 = fVar17 * fVar30 * local_1f8;
    fVar40 = fVar24 * fVar30 * local_1f8;
    fVar24 = fVar36 * fVar30 * local_1f8;
    *local_1d0 = fVar17;
    local_1d0[1] = fVar40;
    local_1d0[2] = fVar24;
    puVar11 = (undefined8 *)P2UTransform(&local_148,param_11);
    uVar3 = puVar11[1];
    puVar9 = (undefined8 *)(lVar15 + 0x80 + lVar16);
    *puVar9 = *puVar11;
    puVar9[1] = uVar3;
    uVar3 = puVar11[3];
    puVar9 = (undefined8 *)(lVar15 + 0x90 + lVar16);
    *puVar9 = puVar11[2];
    puVar9[1] = uVar3;
    uVar3 = puVar11[5];
    puVar9 = (undefined8 *)(lVar15 + 0xa0 + lVar16);
    *puVar9 = puVar11[4];
    puVar9[1] = uVar3;
    lVar15 = *plVar6;
    *(ulonglong *)(lVar15 + 0xb0 + lVar16) = CONCAT44(fVar40,fVar17);
    *(float *)(lVar15 + 0xb8 + lVar16) = fVar24;
  }
  return;
}



// FUNCTION 142da01f0 FUN_142da01f0 body=2684 status=ok
// SIG undefined FUN_142da01f0(void)

float * FUN_142da01f0(float *param_1,float *param_2,longlong param_3,longlong param_4,float *param_5
                     ,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
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
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e4 [16];
  undefined1 local_d4 [188];
  
  if (1e-08 <= param_1[0xe]) {
    fVar3 = param_5[3];
    fVar10 = *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x14);
    fVar5 = param_5[1];
    fVar6 = param_5[2];
    fVar14 = *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x18);
    fVar16 = *(float *)(param_3 + 0x10) + *(float *)(param_3 + 0x10);
    fVar9 = *param_5;
    fVar12 = fVar3 * fVar3 - 0.5;
    fVar4 = fVar5 * fVar10 + fVar9 * fVar16 + fVar6 * fVar14;
    fVar18 = (fVar5 * fVar14 - fVar6 * fVar10) * fVar3 + fVar12 * fVar16 + fVar9 * fVar4 +
             param_5[4];
    fVar23 = (fVar9 * fVar10 - fVar5 * fVar16) * fVar3 + fVar12 * fVar14 + fVar6 * fVar4 +
             param_5[6];
    fVar21 = (fVar6 * fVar16 - fVar9 * fVar14) * fVar3 + fVar12 * fVar10 + fVar5 * fVar4 +
             param_5[5];
    pfVar1 = (float *)physx::PxQuat::operator*(param_5,local_e4);
    local_100 = *pfVar1;
    local_fc = pfVar1[1];
    local_f8 = pfVar1[2];
    local_f4 = pfVar1[3];
    fVar11 = param_1[4] + param_1[4];
    fVar12 = param_1[5] + param_1[5];
    fVar16 = local_f4 * local_f4 - 0.5;
    fVar7 = param_1[6] + param_1[6];
    fVar14 = local_fc * fVar12 + local_100 * fVar11 + local_f8 * fVar7;
    fVar4 = local_100 * fVar14;
    fVar25 = (local_fc * fVar7 - local_f8 * fVar12) * local_f4;
    fVar10 = local_fc * fVar14;
    fVar14 = local_f8 * fVar14;
    fVar26 = (local_100 * fVar12 - local_fc * fVar11) * local_f4;
    fVar19 = (local_f8 * fVar11 - local_100 * fVar7) * local_f4;
    local_f0 = fVar18;
    local_ec = fVar21;
    local_e8 = fVar23;
    pfVar1 = (float *)physx::PxQuat::operator*(&local_100,local_d4,param_1);
    fVar17 = *(float *)(param_4 + 0x10) + *(float *)(param_4 + 0x10);
    fVar24 = *(float *)(param_4 + 0x14) + *(float *)(param_4 + 0x14);
    fVar3 = param_6[3];
    fVar15 = *(float *)(param_4 + 0x18) + *(float *)(param_4 + 0x18);
    fVar5 = *param_6;
    fVar6 = param_6[1];
    fVar9 = param_6[2];
    fVar13 = fVar3 * fVar3 - 0.5;
    fVar8 = fVar17 * fVar5 + fVar24 * fVar6 + fVar15 * fVar9;
    fVar22 = (fVar15 * fVar6 - fVar24 * fVar9) * fVar3 + fVar13 * fVar17 + fVar8 * fVar5 +
             param_6[4];
    fVar20 = (fVar17 * fVar9 - fVar15 * fVar5) * fVar3 + fVar13 * fVar24 + fVar8 * fVar6 +
             param_6[5];
    fVar13 = (fVar24 * fVar5 - fVar17 * fVar6) * fVar3 + fVar13 * fVar15 + fVar8 * fVar9 +
             param_6[6];
    pfVar2 = (float *)physx::PxQuat::operator*(param_6,&local_130,param_4);
    fVar8 = param_1[0xb] + param_1[0xb];
    fVar5 = param_1[0xc] + param_1[0xc];
    local_144 = pfVar2[3];
    fVar9 = param_1[0xd] + param_1[0xd];
    local_14c = pfVar2[1];
    local_148 = pfVar2[2];
    local_150 = *pfVar2;
    fVar6 = local_144 * local_144 - 0.5;
    fVar3 = local_14c * fVar5 + local_150 * fVar8 + local_148 * fVar9;
    fVar17 = (local_14c * fVar9 - local_148 * fVar5) * local_144 + fVar6 * fVar8 + local_150 * fVar3
             + fVar22;
    fVar15 = (local_148 * fVar8 - local_150 * fVar9) * local_144 + fVar6 * fVar5 + local_14c * fVar3
             + fVar20;
    fVar24 = (local_150 * fVar5 - local_14c * fVar8) * local_144 + fVar6 * fVar9 + local_148 * fVar3
             + fVar13;
    local_140 = fVar22;
    local_13c = fVar20;
    local_138 = fVar13;
    pfVar2 = (float *)physx::PxQuat::operator*(&local_150,&local_100);
    local_124 = pfVar1[3];
    fVar3 = *pfVar2;
    local_12c = -pfVar1[1];
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
    fVar9 = pfVar2[3];
    fVar8 = -pfVar1[2];
    local_130 = -*pfVar1;
    fVar13 = fVar17 - (fVar25 + fVar16 * fVar11 + fVar4 + fVar18);
    fVar11 = fVar15 - (fVar19 + fVar16 * fVar12 + fVar10 + fVar21);
    fVar18 = fVar24 - (fVar26 + fVar16 * fVar7 + fVar14 + fVar23);
    fVar13 = fVar13 + fVar13;
    fVar11 = fVar11 + fVar11;
    fVar12 = local_124 * local_124 - 0.5;
    fVar18 = fVar18 + fVar18;
    fVar14 = local_12c * fVar11 + local_130 * fVar13 + fVar8 * fVar18;
    fVar4 = (local_12c * fVar18 - fVar8 * fVar11) * local_124 + fVar12 * fVar13;
    fVar7 = local_130 * fVar14;
    fVar16 = local_12c * fVar14;
    fVar10 = (fVar8 * fVar13 - local_130 * fVar18) * local_124 + fVar12 * fVar11;
    local_104 = (local_130 * fVar11 - local_12c * fVar13) * local_124 + fVar12 * fVar18;
    fVar12 = fVar8 * fVar14 + local_104;
    local_150 = fVar3;
    local_14c = fVar5;
    local_148 = fVar6;
    local_144 = fVar9;
    local_140 = fVar17;
    local_13c = fVar15;
    local_138 = fVar24;
    local_128 = fVar8;
    local_110 = fVar8;
    local_10c = local_130;
    local_108 = local_12c;
    pfVar2 = (float *)physx::PxQuat::operator*(&local_130,&local_100,&local_150);
    local_130 = *pfVar2;
    local_12c = pfVar2[1];
    local_128 = pfVar2[2];
    local_124 = pfVar2[3];
    if (*pfVar1 * fVar3 + pfVar1[1] * fVar5 + pfVar1[2] * fVar6 + pfVar1[3] * fVar9 < 0.0) {
      local_130 = -local_130;
      local_12c = -local_12c;
      local_128 = -local_128;
      local_124 = -local_124;
    }
    fVar3 = param_1[3];
    fVar5 = param_1[1];
    fVar6 = *param_1;
    fVar9 = param_1[2];
    fVar11 = param_1[4];
    fVar15 = fVar3 * fVar3 - 0.5;
    fVar17 = (fVar14 + fVar14) * local_10c + fVar4 + fVar4;
    fVar13 = param_1[5];
    fVar18 = (fVar14 + fVar14) * local_108 + fVar10 + fVar10;
    fVar21 = (fVar14 + fVar14) * fVar8 + local_104 + local_104;
    fVar8 = fVar17 * fVar6 + fVar18 * fVar5 + fVar21 * fVar9;
    fVar19 = (fVar21 * fVar5 - fVar18 * fVar9) * fVar3 + fVar15 * fVar17 + fVar8 * fVar6 + fVar11;
    fVar14 = param_1[6];
    fVar20 = (fVar17 * fVar9 - fVar21 * fVar6) * fVar3 + fVar15 * fVar18 + fVar8 * fVar5 + fVar13;
    fVar5 = (fVar18 * fVar6 - fVar17 * fVar5) * fVar3 + fVar15 * fVar21 + fVar8 * fVar9 + fVar14;
    local_120 = fVar7 + fVar4;
    local_11c = fVar16 + fVar10;
    local_118 = fVar12;
    pfVar1 = (float *)physx::PxQuat::operator*(param_1,&local_100,&local_130);
    fVar3 = param_1[0xe];
    local_150 = *pfVar1;
    local_14c = pfVar1[1];
    local_148 = pfVar1[2];
    local_144 = pfVar1[3];
    if (fVar3 <= 1.0) {
      fVar19 = (fVar19 - fVar11) * fVar3 + fVar11;
      fVar20 = (fVar20 - fVar13) * fVar3 + fVar13;
      fVar5 = (fVar5 - fVar14) * fVar3 + fVar14;
      local_140 = fVar19;
      local_13c = fVar20;
      local_138 = fVar5;
      pfVar1 = (float *)FUN_142dbfcd0(&local_100,fVar3,param_1,&local_150);
      fVar3 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar9 = *pfVar1;
      param_2[1] = pfVar1[1];
      param_2[2] = fVar3;
      param_2[3] = fVar6;
      *param_2 = fVar9;
    }
    else {
      *param_2 = local_150;
      param_2[1] = local_14c;
      param_2[2] = local_148;
      param_2[3] = local_144;
    }
    param_2[6] = fVar5;
    param_2[5] = fVar20;
    param_2[4] = fVar19;
  }
  else {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    param_2[6] = param_1[6];
  }
  return param_2;
}



// FUNCTION 142da0c70 FUN_142da0c70 body=1494 status=ok
// SIG undefined FUN_142da0c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142da0c70(longlong *param_1,int param_2,longlong param_3,float *param_4,undefined4 *param_5
                  )

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
  int iVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
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
  undefined1 auStack_188 [32];
  undefined4 local_168;
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  fVar28 = fRam0000000146b34328;
  fVar26 = fRam0000000146b34324;
  fVar21 = _DAT_146b34320;
  fVar47 = fRam0000000146b342c8;
  fVar46 = fRam0000000146b342c4;
  fVar45 = _DAT_146b342c0;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  auVar13 = *(undefined1 (*) [16])(param_4 + 8);
  fVar2 = auVar13._0_4_;
  fVar4 = auVar13._4_4_;
  fVar6 = auVar13._8_4_;
  fVar8 = auVar13._12_4_;
  pfVar12 = (float *)((longlong)*(int *)((longlong)param_2 * 0x100 + 0x28 + *param_1) * 0x30 +
                     param_3);
  auVar1 = *(undefined1 (*) [16])(pfVar12 + 8);
  fVar3 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  auVar13 = minps(auVar1,auVar13);
  auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146b34324);
  auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146b34320);
  auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146b34328);
  auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146b3432c);
  iVar10 = movmskps((int)*param_1,auVar14);
  if (iVar10 == 0) {
    fVar45 = *param_4;
    fVar46 = param_4[1];
    fVar47 = param_4[2];
    fVar21 = param_4[3];
    fVar26 = *pfVar12;
    fVar28 = pfVar12[1];
    fVar29 = pfVar12[2];
    fVar31 = pfVar12[3];
    fVar27 = fVar2 * pfVar12[4];
    fVar15 = fVar4 * pfVar12[5];
    fVar30 = fVar6 * pfVar12[6];
    fVar32 = fVar8 * pfVar12[7];
    local_f8 = fVar31 * fVar45 * _DAT_146b34300 + fVar21 * fVar26 + fVar46 * fVar29 * _DAT_146b342f0
               + fVar47 * fVar28 * _DAT_146b342e0;
    fStack_f4 = fVar29 * fVar45 * fRam0000000146b34304 + fVar21 * fVar28 +
                fVar46 * fVar31 * fRam0000000146b342f4 + fVar47 * fVar26 * fRam0000000146b342e4;
    fStack_f0 = fVar28 * fVar45 * fRam0000000146b34308 + fVar21 * fVar29 +
                fVar46 * fVar26 * fRam0000000146b342f8 + fVar47 * fVar31 * fRam0000000146b342e8;
    fStack_ec = fVar26 * fVar45 * fRam0000000146b3430c + fVar21 * fVar31 +
                fVar46 * fVar28 * fRam0000000146b342fc + fVar47 * fVar29 * fRam0000000146b342ec;
    fVar26 = fVar30 * fVar46 - fVar15 * fVar47;
    fVar28 = fVar27 * fVar47 - fVar30 * fVar45;
    fVar29 = fVar15 * fVar45 - fVar27 * fVar46;
    fVar31 = fVar32 * fVar21 - fVar32 * fVar21;
    fVar26 = fVar26 + fVar26;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    fVar31 = fVar31 + fVar31;
    local_e8._4_4_ = (fVar26 * fVar47 - fVar29 * fVar45) + fVar21 * fVar28 + fVar15 + param_4[5];
    local_e8._0_4_ = (fVar29 * fVar46 - fVar28 * fVar47) + fVar21 * fVar26 + fVar27 + param_4[4];
    fStack_e0 = (fVar28 * fVar45 - fVar26 * fVar46) + fVar21 * fVar29 + fVar30 + param_4[6];
    fStack_dc = (fVar31 * fVar21 - fVar31 * fVar21) + fVar21 * fVar31 + fVar32 + param_4[7];
  }
  else {
    fVar29 = *param_4;
    fVar31 = param_4[1];
    fVar27 = param_4[2];
    fVar15 = param_4[3];
    fVar17 = fVar31 + fVar31;
    fVar18 = fVar27 + fVar27;
    fVar30 = param_4[4];
    fVar32 = param_4[5];
    fVar9 = param_4[6];
    fVar24 = fVar29 * (fVar29 + fVar29);
    fVar22 = fVar15 * (fVar29 + fVar29);
    fVar42 = (fVar15 * fVar18 + fVar29 * fVar17) * fVar2;
    fVar43 = (fVar22 + fVar31 * fVar18) * fVar4;
    fVar44 = (fVar15 * fVar17 + fVar29 * fVar18) * fVar6;
    fVar33 = fVar4 * (fVar29 * fVar17 - fVar15 * fVar18);
    fVar35 = fVar6 * (fVar31 * fVar18 - fVar22);
    fVar37 = fVar2 * (fVar29 * fVar18 - fVar15 * fVar17);
    fVar22 = (float)((uint)((_DAT_146b342c0 - (fVar27 * fVar18 + fVar31 * fVar17)) * fVar2) &
                    _DAT_146b342d0);
    fVar18 = (float)((uint)((fRam0000000146b342c4 - (fVar27 * fVar18 + fVar24)) * fVar4) &
                    uRam0000000146b342d4);
    fVar19 = (float)((uint)((fRam0000000146b342c8 - (fVar31 * fVar17 + fVar24)) * fVar6) &
                    uRam0000000146b342d8);
    fVar20 = (float)((uint)((fRam0000000146b342cc - (fVar24 + fVar24)) * fVar8) &
                    uRam0000000146b342dc);
    fVar29 = *pfVar12;
    fVar31 = pfVar12[1];
    fVar27 = pfVar12[2];
    fVar15 = pfVar12[3];
    fVar24 = fVar31 + fVar31;
    fVar23 = fVar27 + fVar27;
    fVar25 = fVar29 * (fVar29 + fVar29);
    fVar17 = (fVar29 + fVar29) * fVar15;
    fVar39 = (fVar23 * fVar15 + fVar24 * fVar29) * fVar3;
    fVar40 = (fVar17 + fVar23 * fVar31) * fVar5;
    fVar41 = (fVar24 * fVar15 + fVar23 * fVar29) * fVar7;
    fVar34 = fVar5 * (fVar24 * fVar29 - fVar23 * fVar15);
    fVar36 = fVar7 * (fVar23 * fVar31 - fVar17);
    fVar38 = fVar3 * (fVar23 * fVar29 - fVar24 * fVar15);
    fVar15 = (float)((uint)((_DAT_146b342c0 - (fVar27 * fVar23 + fVar31 * fVar24)) * fVar3) &
                    _DAT_146b342d0);
    fVar17 = (float)((uint)((fRam0000000146b342c4 - (fVar27 * fVar23 + fVar25)) * fVar5) &
                    uRam0000000146b342d4);
    fVar24 = (float)((uint)((fRam0000000146b342c8 - (fVar31 * fVar24 + fVar25)) * fVar7) &
                    uRam0000000146b342d8);
    fVar23 = (float)((uint)((fRam0000000146b342cc - (fVar25 + fVar25)) * auVar1._12_4_) &
                    uRam0000000146b342dc);
    fVar29 = pfVar12[4];
    fVar31 = pfVar12[5];
    fVar27 = pfVar12[6];
    local_158 = fVar39 * fVar33 + fVar15 * fVar22 + fVar38 * fVar44 + fVar23 * fVar30;
    fStack_154 = fVar39 * fVar18 + fVar15 * fVar42 + fVar38 * fVar35 + fVar23 * fVar32;
    fStack_150 = fVar39 * fVar43 + fVar15 * fVar37 + fVar38 * fVar19 + fVar23 * fVar9;
    fStack_14c = fVar39 * fVar20 + fVar15 * fVar20 + fVar38 * fVar20 + fVar23 * fRam0000000146b342cc
    ;
    local_148 = fVar17 * fVar33 + fVar34 * fVar22 + fVar40 * fVar44 + fVar23 * fVar30;
    fStack_144 = fVar17 * fVar18 + fVar34 * fVar42 + fVar40 * fVar35 + fVar23 * fVar32;
    fStack_140 = fVar17 * fVar43 + fVar34 * fVar37 + fVar40 * fVar19 + fVar23 * fVar9;
    fStack_13c = fVar17 * fVar20 + fVar34 * fVar20 + fVar40 * fVar20 + fVar23 * fRam0000000146b342cc
    ;
    local_138 = fVar36 * fVar33 + fVar41 * fVar22 + fVar24 * fVar44 + fVar23 * fVar30;
    fStack_134 = fVar36 * fVar18 + fVar41 * fVar42 + fVar24 * fVar35 + fVar23 * fVar32;
    fStack_130 = fVar36 * fVar43 + fVar41 * fVar37 + fVar24 * fVar19 + fVar23 * fVar9;
    fStack_12c = fVar36 * fVar20 + fVar41 * fVar20 + fVar24 * fVar20 + fVar23 * fRam0000000146b342cc
    ;
    local_128 = fVar31 * fVar33 + fVar29 * fVar22 + fVar27 * fVar44 + fRam0000000146b342cc * fVar30;
    fStack_124 = fVar31 * fVar18 + fVar29 * fVar42 + fVar27 * fVar35 + fRam0000000146b342cc * fVar32
    ;
    fStack_120 = fVar31 * fVar43 + fVar29 * fVar37 + fVar27 * fVar19 + fRam0000000146b342cc * fVar9;
    fStack_11c = fVar31 * fVar20 + fVar29 * fVar20 + fVar27 * fVar20 +
                 fRam0000000146b342cc * fRam0000000146b342cc;
    FMatrix::RemoveScaling(&local_158);
    fVar45 = (float)(-(uint)(fVar21 <= fVar3 * fVar2) & (_DAT_146b34310 ^ (uint)fVar45) ^
                    _DAT_146b34310);
    fVar46 = (float)(-(uint)(fVar26 <= fVar5 * fVar4) & (uRam0000000146b34314 ^ (uint)fVar46) ^
                    uRam0000000146b34314);
    fVar47 = (float)(-(uint)(fVar28 <= fVar7 * fVar6) & (uRam0000000146b34318 ^ (uint)fVar47) ^
                    uRam0000000146b34318);
    local_158 = local_158 * fVar45;
    fStack_154 = fStack_154 * fVar45;
    fStack_150 = fStack_150 * fVar45;
    fStack_144 = fStack_144 * fVar46;
    fStack_140 = fStack_140 * fVar46;
    local_148 = local_148 * fVar46;
    fStack_134 = fStack_134 * fVar47;
    fStack_130 = fStack_130 * fVar47;
    local_138 = local_138 * fVar47;
    FQuat::FQuat(&local_118,&local_158);
    local_168 = 0x322bcc77;
    auVar16._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
    auVar16._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
    auVar16._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
    auVar16._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
    fVar26 = auVar16._4_4_ + auVar16._0_4_;
    fVar28 = auVar16._8_4_ + auVar16._4_4_;
    fVar29 = auVar16._12_4_ + auVar16._8_4_;
    fVar31 = auVar16._0_4_ + auVar16._12_4_;
    auVar13._4_4_ = fVar28;
    auVar13._0_4_ = fVar26;
    auVar13._8_4_ = fVar29;
    auVar13._12_4_ = fVar31;
    auVar13 = rsqrtps(auVar16,auVar13);
    fVar45 = auVar13._0_4_;
    fVar46 = auVar13._4_4_;
    fVar47 = auVar13._8_4_;
    fVar21 = auVar13._12_4_;
    fVar45 = (_DAT_146b342b0 - fVar45 * fVar45 * fVar26 * _DAT_146b342b0) * fVar45 + fVar45;
    fVar46 = (fRam0000000146b342b4 - fVar46 * fVar46 * fVar28 * fRam0000000146b342b4) * fVar46 +
             fVar46;
    fVar47 = (fRam0000000146b342b8 - fVar47 * fVar47 * fVar29 * fRam0000000146b342b8) * fVar47 +
             fVar47;
    fVar21 = (fRam0000000146b342bc - fVar21 * fVar21 * fVar31 * fRam0000000146b342bc) * fVar21 +
             fVar21;
    local_e8._4_4_ = fStack_124;
    local_e8._0_4_ = local_128;
    fStack_e0 = fStack_120;
    local_f8 = (float)(((uint)(((_DAT_146b342b0 - fVar45 * fVar45 * fVar26 * _DAT_146b342b0) *
                                fVar45 + fVar45) * local_118) ^ _DAT_146b342a0) &
                       -(uint)(1e-08 <= fVar26) ^ _DAT_146b342a0);
    fStack_f4 = (float)(((uint)(((fRam0000000146b342b4 -
                                 fVar46 * fVar46 * fVar28 * fRam0000000146b342b4) * fVar46 + fVar46)
                               * fStack_114) ^ uRam0000000146b342a4) & -(uint)(1e-08 <= fVar28) ^
                       uRam0000000146b342a4);
    fStack_f0 = (float)(((uint)(((fRam0000000146b342b8 -
                                 fVar47 * fVar47 * fVar29 * fRam0000000146b342b8) * fVar47 + fVar47)
                               * fStack_110) ^ uRam0000000146b342a8) & -(uint)(1e-08 <= fVar29) ^
                       uRam0000000146b342a8);
    fStack_ec = (float)(((uint)(((fRam0000000146b342bc -
                                 fVar21 * fVar21 * fVar31 * fRam0000000146b342bc) * fVar21 + fVar21)
                               * fStack_10c) ^ uRam0000000146b342ac) & -(uint)(1e-08 <= fVar31) ^
                       uRam0000000146b342ac);
    fStack_dc = 0.0;
  }
  fStack_cc = auVar1._12_4_ * fVar8;
  fStack_d0 = fVar7 * fVar6;
  fStack_d4 = fVar5 * fVar4;
  local_d8 = fVar3 * fVar2;
  puVar11 = (undefined4 *)U2PTransform(&local_118,&local_f8);
  *param_5 = *puVar11;
  param_5[1] = puVar11[1];
  param_5[2] = puVar11[2];
  param_5[3] = puVar11[3];
  param_5[4] = puVar11[4];
  param_5[5] = puVar11[5];
  param_5[6] = puVar11[6];
  return;
}



// FUNCTION 142da1250 FUN_142da1250 body=161 status=ok
// SIG undefined FUN_142da1250(void)

undefined8 FUN_142da1250(longlong param_1,uint param_2,char param_3)

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
      FUN_142db5180(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142da1300 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142da13b0 FUN_142da13b0 body=1309 status=ok
// SIG undefined FUN_142da13b0(void)

void FUN_142da13b0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  uint *puVar21;
  float fVar22;
  float fVar23;
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
  
  iVar17 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  lVar18 = param_6[1];
  iVar9 = (int)lVar18 + iVar17;
  *(int *)(param_6 + 1) = iVar9;
  if (*(int *)((longlong)param_6 + 0xc) < iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_6);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*param_6 + (longlong)(int)lVar18 * 0x18),0,(longlong)iVar17 * 0x18);
  plVar19 = (longlong *)0x0;
  plVar11 = plVar19;
  if (0 < (int)param_2[1]) {
    do {
      iVar9 = (int)plVar11;
      if (*(int *)(*param_2 + (longlong)iVar9 * 4) != -1) {
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 0x10);
        if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
          plVar12 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar12 = param_3 + 7;
          }
          iVar17 = *(int *)((longlong)plVar12 +
                           ((longlong)((int)((ulonglong)lVar18 >> 0x20) + (int)lVar18) &
                           (longlong)(int)param_3[9] - 1U) * 4);
          if (iVar17 != -1) {
            do {
              plVar12 = (longlong *)(*param_3 + (longlong)iVar17 * 0x18);
              if (*(longlong *)(*param_3 + (longlong)iVar17 * 0x18) == lVar18) {
                if (iVar17 != -1) goto LAB_142da14d3;
                break;
              }
              iVar17 = (int)plVar12[2];
            } while (iVar17 != -1);
          }
        }
        plVar12 = plVar19;
LAB_142da14d3:
        plVar10 = plVar12 + 1;
        if (plVar12 == (longlong *)0x0) {
          plVar10 = plVar19;
        }
        lVar14 = (longlong)(int)*plVar10;
        *(longlong *)(*param_6 + 8 + lVar14 * 0x18) = lVar18;
        *(short *)(*param_6 + lVar14 * 0x18) = (short)plVar11;
        lVar18 = *(longlong *)(*param_6 + 8 + lVar14 * 0x18);
        if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
          plVar11 = (longlong *)param_4[8];
          if ((longlong *)param_4[8] == (longlong *)0x0) {
            plVar11 = param_4 + 7;
          }
          iVar17 = *(int *)((longlong)plVar11 +
                           ((longlong)((int)((ulonglong)lVar18 >> 0x20) + (int)lVar18) &
                           (longlong)(int)param_4[9] - 1U) * 4);
          if (iVar17 != -1) {
            do {
              plVar11 = (longlong *)(*param_4 + (longlong)iVar17 * 0x18);
              if (*(longlong *)(*param_4 + (longlong)iVar17 * 0x18) == lVar18) {
                if (iVar17 != -1) goto LAB_142da1573;
                break;
              }
              iVar17 = (int)plVar11[2];
            } while (iVar17 != -1);
          }
        }
        plVar11 = plVar19;
LAB_142da1573:
        plVar12 = plVar11 + 1;
        if (plVar11 == (longlong *)0x0) {
          plVar12 = plVar19;
        }
        if ((plVar12 != (longlong *)0x0) && (lVar18 = *plVar12, lVar18 != 0)) {
          lVar15 = (longlong)*(int *)(lVar18 + 0x38) * 0x60;
          lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x30) + 0x50);
          fVar23 = *(float *)(lVar15 + 0x20 + lVar18);
          fVar2 = *(float *)(lVar15 + 0x24 + lVar18);
          fVar3 = *(float *)(lVar15 + 0x28 + lVar18);
          fVar22 = *(float *)(lVar15 + 0xc + lVar18);
          fVar23 = SQRT(fVar2 * fVar2 + fVar23 * fVar23 + fVar3 * fVar3);
          if (fVar22 <= 1e-08) {
            fVar22 = 0.0;
          }
          else {
            fVar22 = 1.0 / fVar22;
          }
          *(float *)(*param_6 + 0x10 + lVar14 * 0x18) = fVar22;
          if (fVar23 <= 1e-08) {
            fVar23 = 0.0;
          }
          else {
            fVar23 = 1.0 / fVar23;
          }
          *(float *)(*param_6 + 0x14 + lVar14 * 0x18) = fVar23;
        }
      }
      plVar11 = (longlong *)(ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < (int)param_2[1]);
  }
  lVar18 = param_7[1];
  lVar14 = param_5[1];
  iVar9 = (int)lVar18 + (int)lVar14;
  *(int *)(param_7 + 1) = iVar9;
  if (*(int *)((longlong)param_7 + 0xc) < iVar9) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_7);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(int)lVar18 * 0x10 + *param_7),0,(longlong)(int)lVar14 << 4);
  param_6._0_4_ = 0;
  if (0 < (int)param_5[1]) {
    lVar18 = 0;
    do {
      lVar14 = *(longlong *)(lVar18 + 8 + *param_5);
      if ((lVar14 != 0) && (lVar15 = *(longlong *)(lVar18 + *param_5), lVar15 != 0)) {
        uVar4 = *(uint *)(param_4 + 5);
        puVar1 = (uint *)(param_4 + 2);
        local_a8 = 0;
        uStack_a4 = 1;
        uStack_94 = 0;
        iStack_90 = 0;
        if (uVar4 != 0) {
          puVar21 = (uint *)param_4[4];
          if ((uint *)param_4[4] == (uint *)0x0) {
            puVar21 = puVar1;
          }
          uVar5 = *puVar21;
          iStack_90 = 0;
          local_a8 = 0;
          while (uVar5 == 0) {
            lVar16 = (longlong)local_a8;
            iStack_90 = iStack_90 + 0x20;
            iVar9 = local_a8 + 1;
            bVar8 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
            local_a8 = iVar9;
            if (bVar8) goto LAB_142da173f;
            uVar5 = puVar21[lVar16 + 1];
          }
          uStack_a4 = -uVar5 & uVar5;
          iVar9 = 0x1f;
          if (uStack_a4 != 0) {
            for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_a4 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          uStack_94 = (iStack_90 - iVar9) + 0x1f;
          if ((int)uVar4 < (int)uStack_94) {
LAB_142da173f:
            uStack_94 = uVar4;
          }
        }
        uVar5 = *(uint *)(param_4 + 5);
        uStack_70 = 0xffffffff;
        uStack_6c = uStack_94;
        local_68 = CONCAT44(uStack_8c,iStack_90);
        uStack_58 = CONCAT44(uStack_a4,local_a8);
        uVar20 = uVar5 & 0xffffffe0;
        iStack_80 = local_a8;
        uStack_7c = uStack_a4;
        local_78 = puVar1;
        local_60 = param_4;
        puStack_50 = puVar1;
        uStack_40 = local_68;
        uStack_48 = uStack_70;
        uStack_44 = uStack_6c;
        uStack_94 = uVar5;
        if (uVar5 != uVar4) {
          puVar21 = (uint *)param_4[4];
          if ((uint *)param_4[4] == (uint *)0x0) {
            puVar21 = puVar1;
          }
          uVar13 = puVar21[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
          iVar9 = (int)uVar5 >> 5;
          while (uVar13 == 0) {
            uVar20 = uVar20 + 0x20;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_142da1816;
            uVar13 = puVar21[(longlong)iVar9 + 1];
            iVar9 = iVar9 + 1;
          }
          uVar13 = -uVar13 & uVar13;
          iVar9 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uVar13 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          uStack_94 = (uVar20 - iVar9) + 0x1f;
          if ((int)uVar4 < (int)uStack_94) {
LAB_142da1816:
            uStack_94 = uVar4;
          }
        }
        while ((lVar16 = (longlong)(int)uStack_6c, uStack_6c != uStack_94 || (local_78 != puVar1)))
        {
          lVar6 = *param_4;
          lVar7 = *(longlong *)(lVar6 + 8 + lVar16 * 0x18);
          if (lVar7 != 0) {
            if (lVar7 == lVar14) {
              *(undefined8 *)(lVar18 + *param_7) = *(undefined8 *)(lVar6 + lVar16 * 0x18);
            }
            else if (lVar7 == lVar15) {
              *(undefined8 *)(lVar18 + 8 + *param_7) = *(undefined8 *)(lVar6 + lVar16 * 0x18);
            }
          }
          uStack_70 = uStack_70 & ~uStack_7c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
        }
      }
      param_6._0_4_ = (int)param_6 + 1;
      lVar18 = lVar18 + 0x10;
    } while ((int)param_6 < (int)param_5[1]);
  }
  return;
}



// FUNCTION 142da18d0 FUN_142da18d0 body=509 status=ok
// SIG undefined FUN_142da18d0(void)

void FUN_142da18d0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  
  lVar5 = param_3[1];
  lVar1 = param_1[1];
  iVar3 = (int)lVar5 + (int)lVar1;
  *(int *)(param_3 + 1) = iVar3;
  if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*param_3 + (longlong)(int)lVar5 * 0x18),0,(longlong)(int)lVar1 * 0x18);
  uVar7 = 0;
  uVar8 = uVar7;
  uVar9 = uVar7;
  uVar11 = uVar7;
  if (0 < (int)param_1[1]) {
    do {
      lVar5 = *(longlong *)(uVar11 + *param_1);
      if (lVar5 != 0) {
        *(undefined2 *)(uVar8 + *param_3) = *(undefined2 *)(lVar5 + 4);
        cVar2 = FBodyInstance::IsValidBodyInstance(lVar5);
        if (cVar2 != '\0') {
          lVar1 = *param_3;
          uVar12 = FUN_142696270(lVar5);
          *(undefined4 *)(uVar8 + 0x10 + lVar1) = uVar12;
          pfVar4 = (float *)FUN_142696110(lVar5);
          *(float *)(uVar8 + 0x14 + *param_3) =
               SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1] + pfVar4[2] * pfVar4[2]);
        }
        cVar2 = FWeakObjectPtr::IsValid(lVar5 + 0x140);
        uVar6 = uVar7;
        if (cVar2 != '\0') {
          lVar5 = FWeakObjectPtr::Get(lVar5 + 0x140);
          uVar6 = *(ulonglong *)(lVar5 + 0x90);
        }
        *(ulonglong *)(uVar8 + 8 + *param_3) = uVar6;
      }
      uVar10 = (int)uVar9 + 1;
      uVar8 = uVar8 + 0x18;
      uVar9 = (ulonglong)uVar10;
      uVar11 = uVar11 + 8;
    } while ((int)uVar10 < (int)param_1[1]);
  }
  lVar5 = param_2[1];
  lVar1 = param_4[1];
  iVar3 = (int)lVar1 + (int)lVar5;
  *(int *)(param_4 + 1) = iVar3;
  if (*(int *)((longlong)param_4 + 0xc) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(int)lVar1 * 0x10 + *param_4),0,(longlong)(int)lVar5 << 4);
  uVar8 = uVar7;
  uVar9 = uVar7;
  if (0 < (int)param_2[1]) {
    do {
      lVar5 = *(longlong *)(uVar9 + *param_2);
      if (lVar5 != 0) {
        *(undefined8 *)(uVar7 + *param_4) = *(undefined8 *)(lVar5 + 0x20);
        *(undefined8 *)(uVar7 + 8 + *param_4) = *(undefined8 *)(lVar5 + 0x28);
      }
      uVar10 = (int)uVar8 + 1;
      uVar7 = uVar7 + 0x10;
      uVar8 = (ulonglong)uVar10;
      uVar9 = uVar9 + 8;
    } while ((int)uVar10 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142da1ad0 FUN_142da1ad0 body=364 status=ok
// SIG undefined FUN_142da1ad0(void)

void FUN_142da1ad0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  
  if (((*(byte *)(param_1 + 0x2e0) & 2) != 0) && (iVar3 = FUN_14233f450(), iVar3 == 3)) {
    iVar3 = *(int *)(param_1 + 0x328);
    plVar1 = (longlong *)(param_1 + 0x300);
    iVar2 = *(int *)(param_1 + 0x308);
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x308) = iVar3;
      if (*(int *)(param_1 + 0x30c) < iVar3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 + *plVar1),0,(longlong)(iVar3 - iVar2))
      ;
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_1 + 0x308) = iVar3;
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x308)) {
      lVar7 = 0;
      lVar8 = 0;
LAB_142da1b80:
      lVar5 = *(longlong *)(param_1 + 800);
      if (*(longlong *)(param_1 + 800) == 0) {
        lVar5 = param_1 + 0x310;
      }
      plVar6 = *(longlong **)(param_1 + 0x348);
      if (*(longlong **)(param_1 + 0x348) == (longlong *)0x0) {
        plVar6 = (longlong *)(param_1 + 0x330);
      }
      plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x350) * 3;
      for (; plVar6 != plVar4; plVar6 = plVar6 + 3) {
        if (*plVar6 == *(longlong *)(lVar5 + lVar8)) {
          cVar10 = '\0';
          lVar9 = 0;
          if (0 < (int)plVar6[2]) {
            plVar4 = (longlong *)plVar6[1];
            goto LAB_142da1be5;
          }
          break;
        }
      }
      goto LAB_142da1bf9;
    }
  }
  return;
  while( true ) {
    cVar10 = cVar10 + '\x01';
    lVar9 = lVar9 + 1;
    plVar4 = plVar4 + 1;
    if ((int)plVar6[2] <= lVar9) break;
LAB_142da1be5:
    if (*plVar4 == *(longlong *)(lVar5 + 8 + lVar8)) goto LAB_142da1bff;
  }
LAB_142da1bf9:
  cVar10 = -1;
LAB_142da1bff:
  iVar3 = iVar3 + 1;
  lVar8 = lVar8 + 0x10;
  *(char *)(lVar7 + *plVar1) = cVar10;
  lVar7 = lVar7 + 1;
  if (*(int *)(param_1 + 0x308) <= iVar3) {
    return;
  }
  goto LAB_142da1b80;
}



// FUNCTION 142da1c40 FUN_142da1c40 body=391 status=ok
// SIG undefined FUN_142da1c40(void)

void FUN_142da1c40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar10;
  
  if ((((*(byte *)(param_1 + 0x2e0) & 2) != 0) && (*(int *)(param_1 + 0x328) != 0)) &&
     (iVar3 = *(int *)(param_1 + 0x308), iVar3 != 0)) {
    uVar12 = 0;
    if (*(int *)(param_1 + 0x328) != iVar3) {
      iVar4 = *(int *)(param_1 + 0x328);
      if (iVar4 < iVar3) {
        *(int *)(param_1 + 0x328) = iVar3;
        if (*(int *)(param_1 + 0x32c) < iVar3) {
          TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeGrow
                    (param_1 + 0x310);
        }
        lVar6 = *(longlong *)(param_1 + 800);
        if (*(longlong *)(param_1 + 800) == 0) {
          lVar6 = param_1 + 0x310;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar6 + (longlong)iVar4 * 0x10),0,(longlong)(iVar3 - iVar4) << 4);
      }
      else if ((iVar3 < iVar4) && (iVar3 != iVar4)) {
        *(int *)(param_1 + 0x328) = iVar3;
      }
    }
    if (0 < *(int *)(param_1 + 0x308)) {
      uVar8 = uVar12;
      uVar10 = uVar12;
      uVar11 = uVar12;
      do {
        lVar6 = *(longlong *)(param_1 + 800);
        if (*(longlong *)(param_1 + 800) == 0) {
          lVar6 = param_1 + 0x310;
        }
        cVar2 = *(char *)(uVar11 + *(longlong *)(param_1 + 0x300));
        plVar7 = *(longlong **)(param_1 + 0x348);
        if (*(longlong **)(param_1 + 0x348) == (longlong *)0x0) {
          plVar7 = (longlong *)(param_1 + 0x330);
        }
        plVar1 = plVar7 + (longlong)*(int *)(param_1 + 0x350) * 3;
        for (; uVar5 = uVar12, plVar7 != plVar1; plVar7 = plVar7 + 3) {
          if (*plVar7 == *(longlong *)(lVar6 + uVar8)) {
            if ((-1 < cVar2) && ((int)cVar2 < (int)plVar7[2])) {
              uVar5 = *(ulonglong *)(plVar7[1] + (longlong)cVar2 * 8);
            }
            break;
          }
        }
        *(ulonglong *)(lVar6 + 8 + uVar8) = uVar5;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar8 = uVar8 + 0x10;
        uVar11 = uVar11 + 1;
      } while ((int)uVar9 < *(int *)(param_1 + 0x308));
    }
  }
  return;
}



// FUNCTION 142da1dd0 FUN_142da1dd0 body=1514 status=ok
// SIG undefined FUN_142da1dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142da1dd0(char *param_1,int *param_2,undefined8 param_3,longlong param_4,longlong *param_5,
                  char param_6)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  if (param_4 == 0) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(param_1 + 8);
  if ((lVar5 != 0) && (*param_1 == '\0')) {
    if (*(undefined8 **)(lVar5 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar5 + 8))();
      lVar5 = *(longlong *)(param_1 + 8);
    }
    if (lVar5 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5 + 0x1a8);
      FMemory::operator_delete(lVar5);
    }
  }
  iVar2 = param_2[1];
  iVar3 = *param_2;
  if ((iVar2 == -1) || (param_6 != '\0')) {
    if (param_2[9] < 0) {
      return;
    }
    if (*(int *)(param_4 + 0xbf8) <= param_2[9]) {
      return;
    }
    *param_1 = '\0';
    lVar5 = operator_new(0x1b8);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1426b5240(lVar5);
    }
    *(longlong *)(param_1 + 8) = lVar5;
    *(undefined4 *)(lVar5 + 0x8c) = DAT_146b34450;
    *(undefined4 *)(lVar5 + 0x90) = DAT_146b34454;
    *(undefined4 *)(lVar5 + 0x94) = DAT_146b34458;
    *(undefined4 *)(lVar5 + 0x98) = DAT_146b3445c;
    uVar4 = uRam0000000146b34468;
    *(undefined8 *)(lVar5 + 0x9c) = _DAT_146b34460;
    *(undefined8 *)(lVar5 + 0xa4) = uVar4;
    *(undefined4 *)(lVar5 + 0xac) = DAT_146b34470;
    *(undefined4 *)(lVar5 + 0xb0) = DAT_146b34474;
    *(undefined1 *)(lVar5 + 0xb4) = DAT_146b34478;
    *(undefined1 *)(lVar5 + 0xb5) = DAT_146b34479;
    *(undefined1 *)(lVar5 + 0xb6) = DAT_146b3447a;
    uVar4 = uRam0000000146b34484;
    *(undefined8 *)(lVar5 + 0xb8) = _DAT_146b3447c;
    *(undefined8 *)(lVar5 + 0xc0) = uVar4;
    *(undefined4 *)(lVar5 + 200) = DAT_146b3448c;
    *(undefined4 *)(lVar5 + 0xcc) = DAT_146b34490;
    *(undefined4 *)(lVar5 + 0xd0) = DAT_146b34494;
    *(undefined1 *)(lVar5 + 0xd4) = DAT_146b34498;
    *(undefined1 *)(lVar5 + 0xd5) = DAT_146b34499;
    uVar4 = uRam0000000146b344a4;
    *(undefined8 *)(lVar5 + 0xd8) = _DAT_146b3449c;
    *(undefined8 *)(lVar5 + 0xe0) = uVar4;
    *(undefined4 *)(lVar5 + 0xe8) = DAT_146b344ac;
    *(undefined4 *)(lVar5 + 0xec) = DAT_146b344b0;
    *(undefined1 *)(lVar5 + 0xf0) = DAT_146b344b4;
    uVar4 = uRam0000000146b344c0;
    *(undefined8 *)(lVar5 + 0xf4) = _DAT_146b344b8;
    *(undefined8 *)(lVar5 + 0xfc) = uVar4;
    uVar4 = uRam0000000146b344d0;
    *(undefined8 *)(lVar5 + 0x104) = _DAT_146b344c8;
    *(undefined8 *)(lVar5 + 0x10c) = uVar4;
    uVar4 = uRam0000000146b344e0;
    *(undefined8 *)(lVar5 + 0x114) = _DAT_146b344d8;
    *(undefined8 *)(lVar5 + 0x11c) = uVar4;
    uVar4 = uRam0000000146b344f0;
    *(undefined8 *)(lVar5 + 0x124) = _DAT_146b344e8;
    *(undefined8 *)(lVar5 + 300) = uVar4;
    *(undefined8 *)(lVar5 + 0x134) = DAT_146b344f8;
    *(undefined4 *)(lVar5 + 0x13c) = DAT_146b34500;
    uVar4 = uRam0000000146b3450c;
    *(undefined8 *)(lVar5 + 0x140) = _DAT_146b34504;
    *(undefined8 *)(lVar5 + 0x148) = uVar4;
    uVar4 = uRam0000000146b3451c;
    *(undefined8 *)(lVar5 + 0x150) = _DAT_146b34514;
    *(undefined8 *)(lVar5 + 0x158) = uVar4;
    uVar4 = uRam0000000146b3452c;
    *(undefined8 *)(lVar5 + 0x160) = _DAT_146b34524;
    *(undefined8 *)(lVar5 + 0x168) = uVar4;
    *(undefined8 *)(lVar5 + 0x170) = DAT_146b34534;
    *(undefined4 *)(lVar5 + 0x178) = DAT_146b3453c;
    *(undefined8 *)(lVar5 + 0x17c) = DAT_146b34540;
    *(undefined4 *)(lVar5 + 0x184) = DAT_146b34548;
    *(undefined1 *)(lVar5 + 0x188) = DAT_146b3454c;
    *(byte *)(lVar5 + 0x18c) =
         *(byte *)(lVar5 + 0x18c) ^ (*(byte *)(lVar5 + 0x18c) ^ DAT_146b34550) & 1;
    bVar7 = (*(byte *)(lVar5 + 0x18c) ^ DAT_146b34550) & 2 ^ *(byte *)(lVar5 + 0x18c);
    *(byte *)(lVar5 + 0x18c) = bVar7;
    bVar7 = (bVar7 ^ DAT_146b34550) & 4 ^ bVar7;
    *(byte *)(lVar5 + 0x18c) = bVar7;
    bVar7 = (bVar7 ^ DAT_146b34550) & 8 ^ bVar7;
    *(byte *)(lVar5 + 0x18c) = bVar7;
    *(byte *)(lVar5 + 0x18c) = (bVar7 ^ DAT_146b34550) & 0x10 ^ bVar7;
    lVar5 = *(longlong *)(*(longlong *)(param_4 + 0xbf0) + (longlong)param_2[9] * 8);
    if (lVar5 == 0) {
      return;
    }
    lVar8 = *(longlong *)(lVar5 + 0x110);
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(lVar5 + 0x118), lVar8 == 0)) {
      return;
    }
    FUN_1426cd6d0(*(undefined8 *)(param_1 + 8),0,&DAT_1468b5b70);
    FUN_1426cd6d0(*(undefined8 *)(param_1 + 8),1,&DAT_1468b5b70);
    FUN_1426992a0(lVar5,local_78,1,0);
    plVar6 = (longlong *)(**(code **)(*param_5 + 0x30))(param_5);
    lVar5 = *plVar6;
    uVar4 = U2PTransform(local_98,local_78);
    plVar6 = (longlong *)(**(code **)(lVar5 + 0xb0))(plVar6,uVar4);
    (**(code **)(*plVar6 + 0x168))(plVar6,1,1);
    (**(code **)(*plVar6 + 0xf8))(plVar6,0x3f800000);
    local_a8 = 0x3f8000003f800000;
    local_a0 = 0x3f800000;
    (**(code **)(*plVar6 + 0x110))(plVar6,&local_a8);
    plVar6[2] = 0;
    (**(code **)(*param_5 + 0x50))(param_5,plVar6);
    local_b0 = &local_a8;
    local_b8 = 0x3f800000;
    *(longlong **)(param_1 + 0x10) = plVar6;
    local_a8 = 0;
    local_a0 = 0;
    FUN_1426cae00(*(undefined8 *)(param_1 + 8),lVar8,plVar6,param_5);
    return;
  }
  if (iVar3 < 0) {
    return;
  }
  if (*(int *)(param_4 + 0xbf8) <= iVar3) {
    return;
  }
  if (iVar2 < 0) {
    return;
  }
  if (*(int *)(param_4 + 0xc08) <= iVar2) {
    return;
  }
  *param_1 = '\x01';
  *(undefined8 *)(param_1 + 8) =
       *(undefined8 *)(*(longlong *)(param_4 + 0xc00) + (longlong)iVar2 * 8);
  uVar4 = FUN_142697a40(*(undefined8 *)(*(longlong *)(param_4 + 0xbf0) + (longlong)iVar3 * 8));
  lVar5 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  bVar10 = *(byte *)(lVar5 + 0xf0) < 2;
  if ((*(char *)(lVar5 + 0xd4) == '\x02') && (*(char *)(lVar5 + 0xd5) == '\x02')) {
    bVar7 = 0;
  }
  else {
    bVar9 = 1;
    bVar7 = 1;
    if (bVar10) {
      *(byte *)(lVar5 + 0x16c) = *(byte *)(lVar5 + 0x16c) | 2;
      *(byte *)(*(longlong *)(param_1 + 8) + 0x16c) =
           *(byte *)(*(longlong *)(param_1 + 8) + 0x16c) | 1;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x188) = 0;
      goto LAB_142da1f5e;
    }
  }
  bVar9 = bVar7;
  *(byte *)(lVar5 + 0x14c) = *(byte *)(lVar5 + 0x14c) & 0xfd | bVar10 * '\x02';
  lVar5 = *(longlong *)(param_1 + 8);
  pbVar1 = (byte *)(lVar5 + 0x14c);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)(lVar5 + 0x14c);
  *pbVar1 = *pbVar1 | bVar10;
  *(byte *)(*(longlong *)(param_1 + 8) + 0x15c) =
       bVar9 * '\x02' | *(byte *)(*(longlong *)(param_1 + 8) + 0x15c) & 0xfd;
  lVar5 = *(longlong *)(param_1 + 8);
  pbVar1 = (byte *)(lVar5 + 0x15c);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)(lVar5 + 0x15c);
  *pbVar1 = *pbVar1 | bVar9;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x188) = 1;
LAB_142da1f5e:
  FConstraintInstance::SetAngularVelocityDriveTwistAndSwing
            (*(undefined8 *)(param_1 + 8),bVar10,bVar9);
  FConstraintInstance::SetOrientationDriveTwistAndSwing(*(undefined8 *)(param_1 + 8),bVar10,bVar9);
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0x10) = iVar3;
  return;
}



// FUNCTION 142da23c0 FUN_142da23c0 body=87 status=ok
// SIG undefined FUN_142da23c0(void)

void FUN_142da23c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
    if (*(longlong *)(lVar1 + 8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x20);
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142da2420 RemoveInstanceComponent body=31 status=ok
// SIG undefined RemoveInstanceComponent(void)

void AActor::RemoveInstanceComponent(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x1e8,local_res10);
  return;
}



// FUNCTION 142da2440 FUN_142da2440 body=912 status=ok
// SIG undefined FUN_142da2440(void)

void FUN_142da2440(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  
  plVar7 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x328));
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x358))
              (plVar7,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
               ,0x823);
    plVar10 = *(longlong **)(param_1 + 0x1e8);
    plVar3 = plVar10 + *(int *)(param_1 + 0x1f0);
    for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
      uVar16 = (ulonglong)*(int *)(param_1 + 800);
      iVar6 = -1;
      if (*(int *)(param_1 + 800) != 0) {
        plVar2 = (longlong *)(param_1 + 0x318);
        lVar12 = uVar16 << 5;
        lVar13 = lVar12;
        do {
          lVar4 = *plVar2;
          lVar1 = lVar13 + -0x20;
          iVar11 = (int)uVar16;
          lVar12 = lVar12 + -0x20;
          uVar15 = iVar11 - 1;
          uVar16 = (ulonglong)uVar15;
          if (*plVar10 == *(longlong *)(lVar13 + -0x18 + lVar4)) {
            (**(code **)**(undefined8 **)(lVar1 + lVar4))();
            *(undefined8 *)(lVar1 + lVar4) = 0;
            iVar6 = *(int *)(param_1 + 800);
            iVar8 = (iVar6 - uVar15) + -1;
            if (iVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar2 + lVar12),(void *)((longlong)iVar11 * 0x20 + *plVar2),
                         (longlong)iVar8 << 5);
              iVar6 = *(int *)(param_1 + 800);
            }
            *(int *)(param_1 + 800) = iVar6 + -1;
            TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar2);
            iVar6 = *(int *)(lVar13 + -0x10 + lVar4);
          }
          lVar13 = lVar1;
        } while (uVar15 != 0);
      }
      uVar16 = (ulonglong)*(int *)(param_1 + 0x310);
      if (*(int *)(param_1 + 0x310) != 0) {
        plVar2 = (longlong *)(param_1 + 0x308);
        lVar12 = uVar16 << 5;
        lVar13 = lVar12;
        do {
          lVar4 = *plVar2;
          lVar1 = lVar13 + -0x20;
          iVar11 = (int)uVar16;
          lVar12 = lVar12 + -0x20;
          uVar15 = iVar11 - 1;
          uVar16 = (ulonglong)uVar15;
          if (*plVar10 == *(longlong *)(lVar13 + -0x18 + lVar4)) {
            (**(code **)**(undefined8 **)(lVar1 + lVar4))();
            *(undefined8 *)(lVar1 + lVar4) = 0;
            iVar8 = *(int *)(param_1 + 0x310);
            iVar9 = (iVar8 - uVar15) + -1;
            if (iVar9 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar2 + lVar12),(void *)((longlong)iVar11 * 0x20 + *plVar2),
                         (longlong)iVar9 << 5);
              iVar8 = *(int *)(param_1 + 0x310);
            }
            *(int *)(param_1 + 0x310) = iVar8 + -1;
            TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar2);
          }
          lVar13 = lVar1;
        } while (uVar15 != 0);
      }
      if (iVar6 != -1) {
        if (*(int *)(param_1 + 800) < 1) {
          plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x330) + 0xc00);
          plVar2 = plVar14 + *(int *)(*(longlong *)(param_1 + 0x330) + 0xc08);
          for (; plVar14 != plVar2; plVar14 = plVar14 + 1) {
            if ((*plVar14 != 0) &&
               (plVar5 = *(longlong **)(*plVar14 + 8), plVar5 != (longlong *)0x0)) {
              (**(code **)(*plVar5 + 0x98))(plVar5,0x3f800000);
              (**(code **)(**(longlong **)(*plVar14 + 8) + 0x88))
                        (*(longlong **)(*plVar14 + 8),0x3f800000);
              (**(code **)(**(longlong **)(*plVar14 + 8) + 0xb8))
                        (*(longlong **)(*plVar14 + 8),0x3f800000);
              (**(code **)(**(longlong **)(*plVar14 + 8) + 0xa8))
                        (*(longlong **)(*plVar14 + 8),0x3f800000);
            }
          }
        }
        else {
          lVar12 = *(longlong *)(param_1 + 0x2f8);
          lVar13 = (longlong)iVar6 * 0x100;
          iVar6 = *(int *)(lVar12 + 4 + lVar13);
          while ((iVar6 != -1 && (*(int *)(lVar13 + lVar12) != -1))) {
            lVar1 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xc00) + (longlong)iVar6 * 8);
            if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 8), plVar2 != (longlong *)0x0)) {
              (**(code **)(*plVar2 + 0x98))(plVar2,0x3f800000);
              (**(code **)(**(longlong **)(lVar1 + 8) + 0x88))(*(longlong **)(lVar1 + 8),0x3f800000)
              ;
              (**(code **)(**(longlong **)(lVar1 + 8) + 0xb8))(*(longlong **)(lVar1 + 8),0x40000000)
              ;
              (**(code **)(**(longlong **)(lVar1 + 8) + 0xa8))(*(longlong **)(lVar1 + 8),0x40000000)
              ;
              lVar12 = *(longlong *)(param_1 + 0x2f8);
            }
            lVar13 = (longlong)*(int *)(lVar13 + lVar12) * 0x100;
            iVar6 = *(int *)(lVar13 + 4 + lVar12);
          }
        }
      }
    }
    (**(code **)(*plVar7 + 0x360))(plVar7);
  }
  return;
}



// FUNCTION 142da27d0 FUN_142da27d0 body=271 status=ok
// SIG undefined FUN_142da27d0(void)

void FUN_142da27d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x328));
  if ((((plVar3 != (longlong *)0x0) && (lVar6 = *(longlong *)(param_1 + 0x330), lVar6 != 0)) &&
      ((*(byte *)(lVar6 + 200) & 0x40) == 0)) && (*(int *)(lVar6 + 0xc08) != 0)) {
    (**(code **)(*plVar3 + 0x358))
              (plVar3,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
               ,0x4c8);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x2e0)) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x2d8);
        if (*(char *)(lVar6 + lVar2) == '\0') {
          uVar4 = *(undefined8 *)(lVar6 + 8 + lVar2);
        }
        else {
          iVar1 = *(int *)(lVar6 + 8 + lVar2);
          if (((iVar1 == -1) || (iVar1 < 0)) ||
             (*(int *)(*(longlong *)(param_1 + 0x330) + 0xc08) <= iVar1)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xc00) + (longlong)iVar1 * 8);
          }
        }
        FUN_142db6f60(param_1,uVar4,*(longlong *)(param_1 + 0x2e8) + (longlong)iVar5 * 0x28,0);
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x18;
      } while (iVar5 < *(int *)(param_1 + 0x2e0));
    }
    (**(code **)(*plVar3 + 0x360))(plVar3);
  }
  return;
}



// FUNCTION 142da28f0 FUN_142da28f0 body=107 status=ok
// SIG undefined FUN_142da28f0(void)

void FUN_142da28f0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<256,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 142da2960 FUN_142da2960 body=306 status=ok
// SIG undefined FUN_142da2960(void)

void FUN_142da2960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  char param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  plVar7 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x328));
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x358))
              (plVar7,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
               ,0x31e);
    lVar8 = *(longlong *)(param_1 + 0x330);
    iVar9 = 0;
    if (0 < *(int *)(lVar8 + 0xbf8)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x2f8);
        iVar1 = *(int *)(lVar2 + 0x6c + lVar10);
        if (((iVar1 == 4) && (param_5 != '\0')) || (iVar1 != 4)) {
          puVar3 = *(undefined4 **)(lVar11 + *(longlong *)(lVar8 + 0xbf0));
          if (puVar3 != (undefined4 *)0x0) {
            FUN_142db76e0(param_1,*puVar3,2);
            uVar4 = param_4[1];
            uVar5 = param_4[2];
            uVar6 = param_4[3];
            puVar3 = (undefined4 *)(lVar2 + 0x58 + lVar10);
            *puVar3 = *param_4;
            puVar3[1] = uVar4;
            puVar3[2] = uVar5;
            puVar3[3] = uVar6;
            *(undefined4 *)(lVar2 + 0x68 + lVar10) = param_4[4];
            lVar8 = *(longlong *)(param_1 + 0x330);
          }
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 0x100;
        lVar11 = lVar11 + 8;
      } while (iVar9 < *(int *)(lVar8 + 0xbf8));
    }
    *(undefined1 *)(param_1 + 0x340) = 1;
    FUN_14288e3d0(param_1 + 0x30,1);
    (**(code **)(*plVar7 + 0x360))(plVar7);
  }
  return;
}



// FUNCTION 142da2aa0 FUN_142da2aa0 body=156 status=ok
// SIG undefined FUN_142da2aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142da2aa0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x858);
    uVar2 = *(undefined8 *)(param_2 + 0x860);
    local_28._0_4_ = (undefined4)uVar1;
    local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_20._0_4_ = (undefined4)uVar2;
    uStack_20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_38 = (undefined4)local_28;
    uStack_34 = local_28._4_4_;
    uStack_30 = (undefined4)uStack_20;
    uStack_2c = uStack_20._4_4_;
    local_28 = uVar1;
    uStack_20 = uVar2;
    FUN_142caae50(&local_28,*(longlong *)(param_1 + 0x28),&local_38);
    cVar3 = FUN_142cc7750(&local_28);
    if (cVar3 != '\0') {
      uVar4 = FUN_142cc4350(&local_28,0);
      FUN_14260f0c0(param_2,*(undefined8 *)(param_1 + 0x30),uVar4);
    }
  }
  return;
}



// FUNCTION 142da2b40 FUN_142da2b40 body=84 status=ok
// SIG undefined FUN_142da2b40(void)

void FUN_142da2b40(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2[0x10b] != 0)) {
    cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0x28),param_2[0x10b],param_2[0x10c]);
    (**(code **)(*param_2 + 0x958))
              (param_2,*(undefined8 *)(param_1 + 0x30),*(char *)(param_1 + 0x38) == cVar1);
  }
  return;
}



// FUNCTION 142da2ba0 FUN_142da2ba0 body=11563 status=ok
// SIG undefined FUN_142da2ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142da2ba0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float *pfVar16;
  int *piVar17;
  undefined8 uVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  char *pcVar26;
  int *piVar27;
  undefined4 *puVar28;
  int iVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
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
  undefined1 auStack_8b8 [32];
  float *local_898;
  undefined1 local_888 [8];
  undefined8 uStack_880;
  undefined1 local_878 [16];
  undefined8 local_868;
  float fStack_860;
  float fStack_85c;
  float local_858;
  longlong *local_850;
  int local_848;
  float local_838;
  float fStack_834;
  float fStack_830;
  float fStack_82c;
  undefined4 local_828 [4];
  undefined8 local_818;
  float fStack_810;
  float fStack_80c;
  float local_808;
  float local_804;
  float local_800;
  longlong *local_7f8;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float local_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float local_7c8;
  float fStack_7c4;
  float fStack_7c0;
  float fStack_7bc;
  float local_7b8;
  float fStack_7b4;
  float fStack_7b0;
  float fStack_7ac;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  float local_798;
  float fStack_794;
  float fStack_790;
  float fStack_78c;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  float local_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  float local_748;
  float fStack_744;
  float fStack_740;
  float fStack_73c;
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
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
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float local_6c8;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  undefined1 local_6a8 [8];
  longlong *plStack_6a0;
  undefined4 *local_698;
  longlong *local_688;
  undefined4 *local_680;
  longlong local_678;
  ulonglong local_670;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  int local_628 [4];
  undefined8 local_618;
  undefined8 uStack_610;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  undefined1 local_5f8 [8];
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined4 local_5c8;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined1 local_598 [16];
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  undefined1 local_548 [16];
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
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
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [8];
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [48];
  undefined1 local_148 [48];
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_8b8;
  fVar72 = *(float *)(param_1 + 0x284);
  uVar31 = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  local_670 = 0;
  if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(char *)(param_1 + 0x5fc) == '\0')) {
    local_678 = param_2[3];
    pfVar21 = (float *)(param_1 + 0x700);
    if (*(char *)(param_1 + 0x19c) == '\0') {
      local_848 = *(int *)(param_1 + 0x1a0);
    }
    else if (*(int *)(param_1 + 0x198) == -1) {
      local_848 = -1;
    }
    else {
      local_848 = *(int *)(*(longlong *)(local_678 + 0x80) + (longlong)*(int *)(param_1 + 0x198) * 4
                          );
    }
    plVar1 = param_2 + 1;
    lVar24 = (longlong)local_848;
    local_858 = fVar72;
    local_850 = param_3;
    local_7f8 = plVar1;
    local_688 = param_2;
    if (*(char *)(lVar24 + param_2[4]) == '\0') {
      FUN_14060c680(plVar1);
    }
    puVar14 = (undefined8 *)(lVar24 * 0x30 + *plVar1);
    local_208 = *puVar14;
    uStack_200 = puVar14[1];
    local_1f8 = puVar14[2];
    uStack_1f0 = puVar14[3];
    local_1e8 = puVar14[4];
    uStack_1e0 = puVar14[5];
    if (*(int *)(param_1 + 0x188) != 1) {
      uStack_880._4_4_ = *(float *)(param_1 + 0x58c);
      fVar64 = -*(float *)(param_1 + 0x580);
      fVar72 = *(float *)(param_1 + 0x5e4);
      fVar68 = -*(float *)(param_1 + 0x584);
      uStack_880._0_4_ = -*(float *)(param_1 + 0x588);
      fVar71 = (*(float *)(param_1 + 0x560) - *(float *)(param_1 + 0x590)) * fVar72;
      pfVar16 = (float *)&local_208;
      if (*(int *)(param_1 + 0x188) == 0) {
        pfVar16 = pfVar21;
      }
      fVar70 = (*(float *)(param_1 + 0x564) - *(float *)(param_1 + 0x594)) * fVar72;
      fVar72 = (*(float *)(param_1 + 0x568) - *(float *)(param_1 + 0x598)) * fVar72;
      fVar63 = *(float *)(param_1 + 0x550);
      fVar69 = *(float *)(param_1 + 0x554);
      fVar48 = *(float *)(param_1 + 0x558);
      fVar49 = *(float *)(param_1 + 0x55c);
      local_888 = (undefined1  [8])(*(ulonglong *)(param_1 + 0x580) ^ 0x8000000080000000);
      fVar50 = *pfVar21;
      fVar51 = *(float *)(param_1 + 0x704);
      fVar57 = *(float *)(param_1 + 0x708);
      fVar62 = *(float *)(param_1 + 0x70c);
      fVar65 = uStack_880._4_4_ * fVar63 * _DAT_146b34300 + fVar49 * fVar64 +
               (float)uStack_880 * fVar69 * _DAT_146b342f0 + fVar68 * fVar48 * _DAT_146b342e0;
      fVar66 = (float)uStack_880 * fVar63 * fRam0000000146b34304 + fVar49 * fVar68 +
               uStack_880._4_4_ * fVar69 * fRam0000000146b342f4 +
               fVar64 * fVar48 * fRam0000000146b342e4;
      fVar67 = fVar68 * fVar63 * fRam0000000146b34308 + fVar49 * (float)uStack_880 +
               fVar64 * fVar69 * fRam0000000146b342f8 +
               uStack_880._4_4_ * fVar48 * fRam0000000146b342e8;
      fVar68 = fVar64 * fVar63 * fRam0000000146b3430c + fVar49 * uStack_880._4_4_ +
               fVar68 * fVar69 * fRam0000000146b342fc +
               (float)uStack_880 * fVar48 * fRam0000000146b342ec;
      local_5e8 = fVar62 * fVar65 * _DAT_146b34300 + fVar68 * fVar50 +
                  fVar57 * fVar66 * _DAT_146b342f0 + fVar51 * fVar67 * _DAT_146b342e0;
      fStack_5e4 = fVar57 * fVar65 * fRam0000000146b34304 + fVar68 * fVar51 +
                   fVar62 * fVar66 * fRam0000000146b342f4 + fVar50 * fVar67 * fRam0000000146b342e4;
      fStack_5e0 = fVar51 * fVar65 * fRam0000000146b34308 + fVar68 * fVar57 +
                   fVar50 * fVar66 * fRam0000000146b342f8 + fVar62 * fVar67 * fRam0000000146b342e8;
      fStack_5dc = fVar50 * fVar65 * fRam0000000146b3430c + fVar68 * fVar62 +
                   fVar51 * fVar66 * fRam0000000146b342fc + fVar57 * fVar67 * fRam0000000146b342ec;
      local_5d8 = *(undefined8 *)pfVar21;
      uStack_5d0 = *(undefined8 *)(param_1 + 0x708);
      pfVar15 = (float *)FQuat::Slerp_NotNormalized
                                   (local_548,&local_5d8,&local_5e8,*(undefined4 *)(param_1 + 0x5e8)
                                   );
      local_868 = CONCAT44(local_868._4_4_,0x322bcc77);
      fVar68 = *pfVar15;
      fVar64 = pfVar15[1];
      fVar63 = pfVar15[2];
      fVar69 = pfVar15[3];
      auVar40._0_4_ = fVar68 * fVar68 + fVar63 * fVar63;
      auVar40._4_4_ = fVar64 * fVar64 + fVar69 * fVar69;
      auVar40._8_4_ = fVar63 * fVar63 + fVar68 * fVar68;
      auVar40._12_4_ = fVar69 * fVar69 + fVar64 * fVar64;
      fVar57 = auVar40._4_4_ + auVar40._0_4_;
      fVar62 = auVar40._8_4_ + auVar40._4_4_;
      fVar65 = auVar40._12_4_ + auVar40._8_4_;
      fVar66 = auVar40._0_4_ + auVar40._12_4_;
      auVar35._4_4_ = fVar62;
      auVar35._0_4_ = fVar57;
      auVar35._8_4_ = fVar65;
      auVar35._12_4_ = fVar66;
      auVar41 = rsqrtps(auVar40,auVar35);
      fVar48 = auVar41._0_4_;
      fVar49 = auVar41._4_4_;
      fVar50 = auVar41._8_4_;
      fVar51 = auVar41._12_4_;
      fVar48 = (_DAT_146b342b0 - fVar48 * fVar48 * fVar57 * _DAT_146b342b0) * fVar48 + fVar48;
      fVar49 = (fRam0000000146b342b4 - fVar49 * fVar49 * fVar62 * fRam0000000146b342b4) * fVar49 +
               fVar49;
      fVar50 = (fRam0000000146b342b8 - fVar50 * fVar50 * fVar65 * fRam0000000146b342b8) * fVar50 +
               fVar50;
      fVar51 = (fRam0000000146b342bc - fVar51 * fVar51 * fVar66 * fRam0000000146b342bc) * fVar51 +
               fVar51;
      *pfVar16 = (float)(((uint)(((_DAT_146b342b0 - fVar48 * fVar48 * fVar57 * _DAT_146b342b0) *
                                  fVar48 + fVar48) * fVar68) ^ _DAT_146b342a0) &
                         -(uint)(1e-08 <= fVar57) ^ _DAT_146b342a0);
      pfVar16[1] = (float)(((uint)(((fRam0000000146b342b4 -
                                    fVar49 * fVar49 * fVar62 * fRam0000000146b342b4) * fVar49 +
                                   fVar49) * fVar64) ^ uRam0000000146b342a4) &
                           -(uint)(1e-08 <= fVar62) ^ uRam0000000146b342a4);
      pfVar16[2] = (float)(((uint)(((fRam0000000146b342b8 -
                                    fVar50 * fVar50 * fVar65 * fRam0000000146b342b8) * fVar50 +
                                   fVar50) * fVar63) ^ uRam0000000146b342a8) &
                           -(uint)(1e-08 <= fVar65) ^ uRam0000000146b342a8);
      pfVar16[3] = (float)(((uint)(((fRam0000000146b342bc -
                                    fVar51 * fVar51 * fVar66 * fRam0000000146b342bc) * fVar51 +
                                   fVar51) * fVar69) ^ uRam0000000146b342ac) &
                           -(uint)(1e-08 <= fVar66) ^ uRam0000000146b342ac);
      pfVar16[8] = 1.0;
      pfVar16[9] = 1.0;
      pfVar16[10] = 1.0;
      pfVar16[0xb] = 0.0;
      uStack_880._4_4_ = *(float *)(param_1 + 0x55c);
      fVar68 = *pfVar16;
      fVar64 = pfVar16[1];
      fVar63 = pfVar16[2];
      fVar69 = pfVar16[3];
      fVar49 = -*(float *)(param_1 + 0x550);
      fVar48 = -*(float *)(param_1 + 0x554);
      uStack_880._0_4_ = -*(float *)(param_1 + 0x558);
      local_888 = (undefined1  [8])(*(ulonglong *)(param_1 + 0x550) ^ 0x8000000080000000);
      fVar50 = uStack_880._4_4_ * fVar68 * _DAT_146b34300 + fVar69 * fVar49 +
               (float)uStack_880 * fVar64 * _DAT_146b342f0 + fVar48 * fVar63 * _DAT_146b342e0;
      fVar51 = (float)uStack_880 * fVar68 * fRam0000000146b34304 + fVar69 * fVar48 +
               uStack_880._4_4_ * fVar64 * fRam0000000146b342f4 +
               fVar49 * fVar63 * fRam0000000146b342e4;
      fVar57 = fVar48 * fVar68 * fRam0000000146b34308 + fVar69 * (float)uStack_880 +
               fVar49 * fVar64 * fRam0000000146b342f8 +
               uStack_880._4_4_ * fVar63 * fRam0000000146b342e8;
      fVar69 = fVar49 * fVar68 * fRam0000000146b3430c + fVar69 * uStack_880._4_4_ +
               fVar48 * fVar64 * fRam0000000146b342fc +
               (float)uStack_880 * fVar63 * fRam0000000146b342ec;
      fVar63 = fVar72 * fVar51 - fVar57 * fVar70;
      fVar63 = fVar63 + fVar63;
      fVar64 = fVar71 * fVar57 - fVar72 * fVar50;
      fVar68 = fVar50 * fVar70 - fVar71 * fVar51;
      fVar64 = fVar64 + fVar64;
      fVar68 = fVar68 + fVar68;
      auVar41._4_4_ = (fVar57 * fVar63 - fVar50 * fVar68) + fVar69 * fVar64 + fVar70 + pfVar16[5];
      auVar41._0_4_ = (fVar51 * fVar68 - fVar57 * fVar64) + fVar71 + fVar69 * fVar63 + pfVar16[4];
      auVar41._8_4_ = (fVar50 * fVar64 - fVar51 * fVar63) + fVar72 + fVar69 * fVar68 + pfVar16[6];
      auVar41._12_4_ = 0;
      *(undefined1 (*) [16])(pfVar16 + 4) = auVar41;
      fVar72 = local_858;
    }
    if ((*(char *)(param_1 + 0x5bc) == '\0') && (*(char *)(param_1 + 0x5be) != '\0')) {
      *(undefined1 *)(param_1 + 0x5be) = 0;
      FUN_140954e20(param_1,param_2,pfVar21,&local_208);
    }
    fVar68 = *(float *)(param_1 + 0x564) - *(float *)(param_1 + 0x594);
    fVar64 = *(float *)(param_1 + 0x560) - *(float *)(param_1 + 0x590);
    fVar71 = *(float *)(param_1 + 0x568) - *(float *)(param_1 + 0x598);
    fVar68 = fVar68 * fVar68 + fVar64 * fVar64 + fVar71 * fVar71;
    if (*(float *)(param_1 + 0x5f8) <= fVar68 && fVar68 != *(float *)(param_1 + 0x5f8)) {
      *(undefined1 *)(param_1 + 0x5bc) = 2;
    }
    FUN_142db5ba0(param_1);
    lVar24 = local_678;
    if (0.0 < fVar72) {
      if (*(char *)(param_1 + 0x5bc) == '\0') {
        if ((*(char *)(param_1 + 0x1b0) != '\0') && (0 < *(int *)(param_1 + 0x4a8))) {
          piVar27 = *(int **)(param_1 + 0x1c8);
          piVar17 = piVar27 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
          local_818 = piVar17;
          if (piVar27 != piVar17) {
            do {
              pcVar26 = (char *)((longlong)piVar27[1] * 0x40 + *(longlong *)(param_1 + 0x1f8));
              if (*pcVar26 != '\0') {
                uVar13 = *(undefined4 *)(pcVar26 + 0x24);
                uVar9 = *(undefined4 *)(pcVar26 + 0x28);
                lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)piVar27[1] * 8);
                lVar22 = *(longlong *)(*(longlong *)(lVar24 + 0x30) + 0x50);
                lVar20 = (longlong)*(int *)(lVar24 + 0x38) * 0x60;
                *(undefined4 *)(lVar20 + lVar22) = *(undefined4 *)(pcVar26 + 0x20);
                *(undefined4 *)(lVar20 + 4 + lVar22) = uVar13;
                *(undefined4 *)(lVar20 + 8 + lVar22) = uVar9;
                fVar72 = *(float *)(pcVar26 + 0x1c);
                _local_888 = *(undefined1 (*) [16])(pcVar26 + 0x10);
                if (-1.0 <= fVar72) {
                  fVar68 = fVar72;
                  if (1.0 <= fVar72) {
                    fVar68 = 1.0;
                  }
                }
                else {
                  fVar68 = -1.0;
                }
                fVar68 = _guard_xfg_dispatch_icall_nop(fVar68);
                fVar68 = fVar68 + fVar68;
                fVar72 = 1.0 - fVar72 * fVar72;
                if (fVar72 <= 0.0) {
                  fVar72 = 0.0;
                }
                if (SQRT(fVar72) < 0.0001) {
                  fVar64 = 1.0;
                  fVar71 = 0.0;
                  fVar72 = 0.0;
                }
                else {
                  fVar72 = 1.0 / SQRT(fVar72);
                  fVar64 = fVar72 * (float)local_888._0_4_;
                  fVar71 = fVar72 * (float)local_888._4_4_;
                  fVar72 = fVar72 * (float)uStack_880;
                }
                lVar24 = (longlong)*(int *)(lVar24 + 0x38) * 0x60;
                *(float *)(lVar24 + 0x10 + lVar22) = fVar68 * fVar64;
                *(float *)(lVar24 + 0x14 + lVar22) = fVar68 * fVar71;
                *(float *)(lVar24 + 0x18 + lVar22) = fVar68 * fVar72;
                piVar17 = local_818;
              }
              piVar27 = piVar27 + 8;
              param_2 = local_688;
              fVar72 = local_858;
            } while (piVar27 != piVar17);
          }
          *(undefined8 *)(param_1 + 0x4b0) = 0;
          *(undefined4 *)(param_1 + 0x4a8) = 0;
          if (*(int *)(param_1 + 0x4ac) != 0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeTo(param_1 + 0x4a0,0);
          }
          *(undefined4 *)(param_1 + 0x4c0) = 0;
          if (*(int *)(param_1 + 0x4c4) != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x4b8,0);
          }
          *(undefined4 *)(param_1 + 0x4e0) = 0;
          if (*(int *)(param_1 + 0x4e4) != 0) {
            TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x4d8,0);
          }
          *(undefined4 *)(param_1 + 0x4d0) = 0;
          if (*(int *)(param_1 + 0x4d4) != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x4c8,0);
          }
        }
        FUN_140958f30(param_1,pfVar21,&local_208);
        local_898 = (float *)&local_208;
        WorldVectorToSpaceNoScale
                  (&local_818,*(undefined4 *)(param_1 + 0x188),param_1 + 0x278,pfVar21);
        iVar12 = (int)((float)*(int *)(param_1 + 0x5d8) * fVar72);
        if (iVar12 < 1) {
          *(float *)(param_1 + 0x284) = fVar72 + *(float *)(param_1 + 0x284);
        }
        else {
          if (*(int *)(param_1 + 0x5dc) < iVar12) {
            fVar68 = *(float *)(param_1 + 0x284);
            if (1.0 <= fVar68) {
              fVar68 = 1.0;
            }
            *(float *)(param_1 + 0x284) = fVar68;
            iVar12 = *(int *)(param_1 + 0x5dc);
          }
          *(float *)(param_1 + 0x284) =
               fVar72 - (float)iVar12 * (1.0 / (float)*(int *)(param_1 + 0x5d8));
          if (1e-08 < *(float *)(param_1 + 0x5ec)) {
            FUN_142dbd400(param_1,param_2,pfVar21);
          }
          uVar25 = uVar31;
          if (0 < iVar12) {
            do {
              local_898 = pfVar21;
              FUN_142dbd9e0(param_1,uVar25,iVar12,param_2);
              FUN_142dbc170(param_1,param_2,pfVar21);
              ImmediatePhysics::FSimulation::Simulate_AssumesLocked
                        (*(undefined8 *)(param_1 + 0x1c0));
              uVar23 = (int)uVar25 + 1;
              uVar25 = (ulonglong)uVar23;
            } while ((int)uVar23 < iVar12);
          }
          *(undefined1 *)(param_1 + 0x5bc) = 0;
          FUN_142db7010(param_1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x5bc) = 0;
        if ((*(char *)(param_1 + 0x1b0) != '\0') && (0 < *(int *)(param_1 + 0x4a8))) {
          piVar27 = *(int **)(param_1 + 0x1c8);
          piVar17 = piVar27 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
          local_818 = piVar17;
          if (piVar27 != piVar17) {
            do {
              pcVar26 = (char *)((longlong)piVar27[1] * 0x40 + *(longlong *)(param_1 + 0x1f8));
              if (*pcVar26 != '\0') {
                iVar12 = *piVar27;
                iVar19 = *(int *)(*(longlong *)(param_1 + 0x3f8) +
                                 (longlong)
                                 *(int *)(*(longlong *)(lVar24 + 0x60) + (longlong)iVar12 * 4) * 4);
                lVar22 = (longlong)iVar19;
                if (iVar19 != -1) {
                  local_868 = lVar22;
                  if (*(char *)(lVar22 + *(longlong *)(param_1 + 0x4b8)) == '\0') {
                    FUN_14094b350(param_1 + 0x4a0);
                  }
                  puVar14 = (undefined8 *)(local_868 * 0x30 + *(longlong *)(param_1 + 0x4a0));
                  local_298 = *puVar14;
                  uStack_290 = puVar14[1];
                  local_288 = puVar14[2];
                  uStack_280 = puVar14[3];
                  local_278 = puVar14[4];
                  uStack_270 = puVar14[5];
                  pfVar16 = (float *)FUN_140611730(local_7f8,iVar12);
                  fVar64 = fRam0000000146b342c8;
                  fVar68 = fRam0000000146b342c4;
                  fVar72 = _DAT_146b342c0;
                  local_238 = *pfVar16;
                  fStack_234 = pfVar16[1];
                  fStack_230 = pfVar16[2];
                  fStack_22c = pfVar16[3];
                  local_228 = pfVar16[4];
                  fStack_224 = pfVar16[5];
                  fStack_220 = pfVar16[6];
                  fStack_21c = pfVar16[7];
                  local_218 = pfVar16[8];
                  fStack_214 = pfVar16[9];
                  fStack_210 = pfVar16[10];
                  fStack_20c = pfVar16[0xb];
                  iVar12 = *(int *)(param_1 + 0x188);
                  if (iVar12 == 0) {
LAB_142da38bf:
                    local_2c8 = local_298;
                    uStack_2c0 = uStack_290;
                    local_2a8 = local_278;
                    uStack_2a0 = uStack_270;
                    uStack_2b0 = uStack_280;
                    local_2b8 = (undefined1  [8])local_288;
LAB_142da38e9:
                    uVar13 = SUB84(pfVar16,0);
                    local_888._4_4_ = fRam0000000146b342b4;
                    local_888._0_4_ = _DAT_146b342b0;
                    uStack_880._4_4_ = fRam0000000146b342bc;
                    uStack_880._0_4_ = fRam0000000146b342b8;
                  }
                  else {
                    if (iVar12 != 1) {
                      if (iVar12 != 2) goto LAB_142da38bf;
                      pfVar16 = (float *)FUN_14162bcf0(&local_298,&local_2c8,&local_208);
                      goto LAB_142da38e9;
                    }
                    uStack_880 = uStack_270;
                    local_888 = (undefined1  [8])local_278;
                    fVar71 = (float)local_278;
                    fVar63 = (float)((ulonglong)local_278 >> 0x20);
                    fVar69 = (float)uStack_270;
                    fVar48 = (float)((ulonglong)uStack_270 >> 0x20);
                    local_2c8 = 0;
                    uStack_2c0 = (ulonglong)(uint)fRam0000000146b342cc << 0x20;
                    local_2a8 = CONCAT44((uint)fRam0000000146b342c4 & uRam0000000146b342d4,
                                         (uint)_DAT_146b342c0 & _DAT_146b342d0);
                    uStack_2a0 = CONCAT44((uint)fRam0000000146b342cc & uRam0000000146b342dc,
                                          (uint)fRam0000000146b342c8 & uRam0000000146b342d8);
                    _local_2b8 = ZEXT816(0);
                    _local_6a8 = *(undefined1 (*) [16])(param_1 + 0x720);
                    fVar49 = local_6a8._0_4_;
                    fVar50 = local_6a8._4_4_;
                    fVar51 = local_6a8._8_4_;
                    fVar57 = local_6a8._12_4_;
                    auVar41 = minps(_local_888,_local_6a8);
                    auVar32._4_4_ = -(uint)(auVar41._4_4_ < fRam0000000146b34324);
                    auVar32._0_4_ = -(uint)(auVar41._0_4_ < _DAT_146b34320);
                    auVar32._8_4_ = -(uint)(auVar41._8_4_ < fRam0000000146b34328);
                    auVar32._12_4_ = -(uint)(auVar41._12_4_ < fRam0000000146b3432c);
                    iVar12 = movmskps((int)pfVar16,auVar32);
                    local_868 = CONCAT44(fRam0000000146b34324,_DAT_146b34320);
                    fStack_860 = fRam0000000146b34328;
                    fStack_85c = fRam0000000146b3432c;
                    if (iVar12 == 0) {
                      fVar72 = *pfVar21;
                      fVar68 = *(float *)(param_1 + 0x704);
                      fVar64 = *(float *)(param_1 + 0x708);
                      fVar62 = *(float *)(param_1 + 0x70c);
                      fVar65 = (float)local_288 * fVar49;
                      fVar66 = local_288._4_4_ * fVar50;
                      fVar67 = (float)uStack_280 * fVar51;
                      fVar70 = uStack_280._4_4_ * fVar57;
                      local_2a8 = CONCAT44(fVar63 * fVar50,fVar71 * fVar49);
                      uStack_2a0 = CONCAT44(fVar48 * fVar57,fVar69 * fVar51);
                      local_2c8 = CONCAT44((float)uStack_290 * fVar72 * fRam0000000146b34304 +
                                           local_298._4_4_ * fVar62 +
                                           uStack_290._4_4_ * fVar68 * fRam0000000146b342f4 +
                                           (float)local_298 * fVar64 * fRam0000000146b342e4,
                                           uStack_290._4_4_ * fVar72 * _DAT_146b34300 +
                                           (float)local_298 * fVar62 +
                                           (float)uStack_290 * fVar68 * _DAT_146b342f0 +
                                           local_298._4_4_ * fVar64 * _DAT_146b342e0);
                      uStack_2c0 = CONCAT44((float)local_298 * fVar72 * fRam0000000146b3430c +
                                            uStack_290._4_4_ * fVar62 +
                                            local_298._4_4_ * fVar68 * fRam0000000146b342fc +
                                            (float)uStack_290 * fVar64 * fRam0000000146b342ec,
                                            local_298._4_4_ * fVar72 * fRam0000000146b34308 +
                                            (float)uStack_290 * fVar62 +
                                            (float)local_298 * fVar68 * fRam0000000146b342f8 +
                                            uStack_290._4_4_ * fVar64 * fRam0000000146b342e8);
                      fVar71 = fVar67 * fVar68 - fVar66 * fVar64;
                      fVar63 = fVar65 * fVar64 - fVar67 * fVar72;
                      fVar69 = fVar66 * fVar72 - fVar65 * fVar68;
                      fVar48 = fVar70 * fVar62 - fVar70 * fVar62;
                      fVar71 = fVar71 + fVar71;
                      fVar63 = fVar63 + fVar63;
                      fVar69 = fVar69 + fVar69;
                      fVar48 = fVar48 + fVar48;
                      local_888._4_4_ = fRam0000000146b342b4;
                      local_888._0_4_ = _DAT_146b342b0;
                      uStack_880._4_4_ = fRam0000000146b342bc;
                      uStack_880._0_4_ = fRam0000000146b342b8;
                      local_2b8._4_4_ =
                           (fVar71 * fVar64 - fVar69 * fVar72) + fVar63 * fVar62 + fVar66 +
                           *(float *)(param_1 + 0x714);
                      local_2b8._0_4_ =
                           (fVar69 * fVar68 - fVar63 * fVar64) + fVar71 * fVar62 + fVar65 +
                           *(float *)(param_1 + 0x710);
                      uStack_2b0._0_4_ =
                           (fVar63 * fVar72 - fVar71 * fVar68) + fVar69 * fVar62 + fVar67 +
                           *(float *)(param_1 + 0x718);
                      uStack_2b0._4_4_ =
                           (fVar48 * fVar62 - fVar48 * fVar62) + fVar48 * fVar62 + fVar70 +
                           *(float *)(param_1 + 0x71c);
                      uVar13 = 0;
                    }
                    else {
                      fVar62 = *pfVar21;
                      fVar65 = *(float *)(param_1 + 0x704);
                      fVar66 = *(float *)(param_1 + 0x708);
                      fVar67 = *(float *)(param_1 + 0x70c);
                      fVar70 = fVar65 + fVar65;
                      fVar47 = fVar66 + fVar66;
                      fVar52 = (fVar62 + fVar62) * fVar62;
                      fVar58 = (fVar62 + fVar62) * fVar67;
                      fStack_534 = (fVar47 * fVar67 + fVar70 * fVar62) * fVar49;
                      fStack_520 = (fVar58 + fVar47 * fVar65) * fVar50;
                      local_518 = (fVar70 * fVar67 + fVar47 * fVar62) * fVar51;
                      local_528 = fVar50 * (fVar70 * fVar62 - fVar47 * fVar67);
                      fStack_514 = fVar51 * (fVar47 * fVar65 - fVar58);
                      fStack_530 = fVar49 * (fVar47 * fVar62 - fVar70 * fVar67);
                      local_538 = (float)((uint)((_DAT_146b342c0 -
                                                 (fVar47 * fVar66 + fVar70 * fVar65)) * fVar49) &
                                         _DAT_146b342d0);
                      fStack_524 = (float)((uint)((fRam0000000146b342c4 - (fVar47 * fVar66 + fVar52)
                                                  ) * fVar50) & uRam0000000146b342d4);
                      fStack_510 = (float)((uint)((fRam0000000146b342c8 - (fVar70 * fVar65 + fVar52)
                                                  ) * fVar51) & uRam0000000146b342d8);
                      fStack_52c = (float)((uint)((fRam0000000146b342cc - (fVar52 + fVar52)) *
                                                 fVar57) & uRam0000000146b342dc);
                      fVar62 = local_298._4_4_ + local_298._4_4_;
                      fVar65 = (float)uStack_290 + (float)uStack_290;
                      local_508 = *(float *)(param_1 + 0x710);
                      fStack_504 = *(float *)(param_1 + 0x714);
                      fStack_500 = *(float *)(param_1 + 0x718);
                      fVar67 = (float)local_298 * ((float)local_298 + (float)local_298);
                      fVar66 = uStack_290._4_4_ * ((float)local_298 + (float)local_298);
                      fStack_4fc = fRam0000000146b342cc;
                      fStack_4f4 = (uStack_290._4_4_ * fVar65 + (float)local_298 * fVar62) * fVar71;
                      fStack_4e0 = (fVar66 + local_298._4_4_ * fVar65) * fVar63;
                      local_4d8 = (uStack_290._4_4_ * fVar62 + (float)local_298 * fVar65) * fVar69;
                      local_4e8 = fVar63 * ((float)local_298 * fVar62 - uStack_290._4_4_ * fVar65);
                      fStack_4d4 = fVar69 * (local_298._4_4_ * fVar65 - fVar66);
                      fStack_4f0 = fVar71 * ((float)local_298 * fVar65 - uStack_290._4_4_ * fVar62);
                      local_4f8 = (float)((uint)((_DAT_146b342c0 -
                                                 ((float)uStack_290 * fVar65 +
                                                 local_298._4_4_ * fVar62)) * fVar71) &
                                         _DAT_146b342d0);
                      fStack_4e4 = (float)((uint)((fRam0000000146b342c4 -
                                                  ((float)uStack_290 * fVar65 + fVar67)) * fVar63) &
                                          uRam0000000146b342d4);
                      fStack_4d0 = (float)((uint)((fRam0000000146b342c8 -
                                                  (local_298._4_4_ * fVar62 + fVar67)) * fVar69) &
                                          uRam0000000146b342d8);
                      fStack_4ec = (float)((uint)((fRam0000000146b342cc - (fVar67 + fVar67)) *
                                                 fVar48) & uRam0000000146b342dc);
                      local_4c8 = (float)local_288;
                      fStack_4c4 = local_288._4_4_;
                      fStack_4c0 = (float)uStack_280;
                      fStack_4bc = fRam0000000146b342cc;
                      local_7e8 = fStack_4f4 * local_528 + local_4f8 * local_538 +
                                  fStack_4f0 * local_518 + fStack_4ec * local_508;
                      fStack_7e4 = fStack_4f4 * fStack_524 + local_4f8 * fStack_534 +
                                   fStack_4f0 * fStack_514 + fStack_4ec * fStack_504;
                      fStack_7e0 = fStack_4f4 * fStack_520 + local_4f8 * fStack_530 +
                                   fStack_4f0 * fStack_510 + fStack_4ec * fStack_500;
                      fStack_7dc = fStack_4f4 * fStack_52c + local_4f8 * fStack_52c +
                                   fStack_4f0 * fStack_52c + fStack_4ec * fRam0000000146b342cc;
                      local_7d8 = fStack_4e4 * local_528 + local_4e8 * local_538 +
                                  fStack_4e0 * local_518 + fStack_4ec * local_508;
                      fStack_7d4 = fStack_4e4 * fStack_524 + local_4e8 * fStack_534 +
                                   fStack_4e0 * fStack_514 + fStack_4ec * fStack_504;
                      fStack_7d0 = fStack_4e4 * fStack_520 + local_4e8 * fStack_530 +
                                   fStack_4e0 * fStack_510 + fStack_4ec * fStack_500;
                      fStack_7cc = fStack_4e4 * fStack_52c + local_4e8 * fStack_52c +
                                   fStack_4e0 * fStack_52c + fStack_4ec * fRam0000000146b342cc;
                      local_7c8 = fStack_4d4 * local_528 + local_4d8 * local_538 +
                                  fStack_4d0 * local_518 + fStack_4ec * local_508;
                      fStack_7c4 = fStack_4d4 * fStack_524 + local_4d8 * fStack_534 +
                                   fStack_4d0 * fStack_514 + fStack_4ec * fStack_504;
                      fStack_7c0 = fStack_4d4 * fStack_520 + local_4d8 * fStack_530 +
                                   fStack_4d0 * fStack_510 + fStack_4ec * fStack_500;
                      fStack_7bc = fStack_4d4 * fStack_52c + local_4d8 * fStack_52c +
                                   fStack_4d0 * fStack_52c + fStack_4ec * fRam0000000146b342cc;
                      local_7b8 = local_288._4_4_ * local_528 + (float)local_288 * local_538 +
                                  (float)uStack_280 * local_518 + fRam0000000146b342cc * local_508;
                      fStack_7b4 = local_288._4_4_ * fStack_524 + (float)local_288 * fStack_534 +
                                   (float)uStack_280 * fStack_514 +
                                   fRam0000000146b342cc * fStack_504;
                      fStack_7b0 = local_288._4_4_ * fStack_520 + (float)local_288 * fStack_530 +
                                   (float)uStack_280 * fStack_510 +
                                   fRam0000000146b342cc * fStack_500;
                      fStack_7ac = local_288._4_4_ * fStack_52c + (float)local_288 * fStack_52c +
                                   (float)uStack_280 * fStack_52c +
                                   fRam0000000146b342cc * fRam0000000146b342cc;
                      fStack_51c = fStack_52c;
                      fStack_50c = fStack_52c;
                      fStack_4dc = fStack_4ec;
                      fStack_4cc = fStack_4ec;
                      FMatrix::RemoveScaling(&local_7e8);
                      fVar72 = (float)(-(uint)((float)local_868 <= fVar71 * fVar49) &
                                       (_DAT_146b34310 ^ (uint)fVar72) ^ _DAT_146b34310);
                      fVar68 = (float)(-(uint)(local_868._4_4_ <= fVar63 * fVar50) &
                                       (uRam0000000146b34314 ^ (uint)fVar68) ^ uRam0000000146b34314)
                      ;
                      fVar64 = (float)(-(uint)(fStack_860 <= fVar69 * fVar51) &
                                       (uRam0000000146b34318 ^ (uint)fVar64) ^ uRam0000000146b34318)
                      ;
                      local_7e8 = local_7e8 * fVar72;
                      fStack_7e4 = fStack_7e4 * fVar72;
                      fStack_7e0 = fStack_7e0 * fVar72;
                      fStack_7d4 = fStack_7d4 * fVar68;
                      fStack_7d0 = fStack_7d0 * fVar68;
                      local_7d8 = local_7d8 * fVar68;
                      fStack_7c4 = fStack_7c4 * fVar64;
                      fStack_7c0 = fStack_7c0 * fVar64;
                      local_7c8 = local_7c8 * fVar64;
                      uVar13 = FQuat::FQuat(&local_668,&local_7e8);
                      local_868 = CONCAT44(local_868._4_4_,0x322bcc77);
                      local_888._4_4_ = fRam0000000146b342b4;
                      local_888._0_4_ = _DAT_146b342b0;
                      uStack_880._0_4_ = fRam0000000146b342b8;
                      uStack_880._4_4_ = fRam0000000146b342bc;
                      local_2a8 = CONCAT44(fVar63 * fVar50,fVar71 * fVar49);
                      uStack_2a0 = CONCAT44(fVar48 * fVar57,fVar69 * fVar51);
                      auVar42._0_4_ = local_668 * local_668 + fStack_660 * fStack_660;
                      auVar42._4_4_ = fStack_664 * fStack_664 + fStack_65c * fStack_65c;
                      auVar42._8_4_ = fStack_660 * fStack_660 + local_668 * local_668;
                      auVar42._12_4_ = fStack_65c * fStack_65c + fStack_664 * fStack_664;
                      fVar63 = auVar42._4_4_ + auVar42._0_4_;
                      fVar69 = auVar42._8_4_ + auVar42._4_4_;
                      fVar48 = auVar42._12_4_ + auVar42._8_4_;
                      fVar49 = auVar42._0_4_ + auVar42._12_4_;
                      auVar8._4_4_ = fVar69;
                      auVar8._0_4_ = fVar63;
                      auVar8._8_4_ = fVar48;
                      auVar8._12_4_ = fVar49;
                      auVar41 = rsqrtps(auVar42,auVar8);
                      fVar72 = auVar41._0_4_;
                      fVar68 = auVar41._4_4_;
                      fVar64 = auVar41._8_4_;
                      fVar71 = auVar41._12_4_;
                      fVar72 = (_DAT_146b342b0 - fVar72 * fVar72 * fVar63 * _DAT_146b342b0) * fVar72
                               + fVar72;
                      fVar68 = (fRam0000000146b342b4 -
                               fVar68 * fVar68 * fVar69 * fRam0000000146b342b4) * fVar68 + fVar68;
                      fVar64 = (fRam0000000146b342b8 -
                               fVar64 * fVar64 * fVar48 * fRam0000000146b342b8) * fVar64 + fVar64;
                      fVar71 = (fRam0000000146b342bc -
                               fVar71 * fVar71 * fVar49 * fRam0000000146b342bc) * fVar71 + fVar71;
                      local_2b8._4_4_ = fStack_7b4;
                      local_2b8._0_4_ = local_7b8;
                      uStack_2b0._0_4_ = fStack_7b0;
                      local_668 = (float)(((uint)(((_DAT_146b342b0 -
                                                   fVar72 * fVar72 * fVar63 * _DAT_146b342b0) *
                                                   fVar72 + fVar72) * local_668) ^ _DAT_146b342a0) &
                                          -(uint)(1e-08 <= fVar63) ^ _DAT_146b342a0);
                      fStack_664 = (float)(((uint)(((fRam0000000146b342b4 -
                                                    fVar68 * fVar68 * fVar69 * fRam0000000146b342b4)
                                                    * fVar68 + fVar68) * fStack_664) ^
                                           uRam0000000146b342a4) & -(uint)(1e-08 <= fVar69) ^
                                          uRam0000000146b342a4);
                      fStack_660 = (float)(((uint)(((fRam0000000146b342b8 -
                                                    fVar64 * fVar64 * fVar48 * fRam0000000146b342b8)
                                                    * fVar64 + fVar64) * fStack_660) ^
                                           uRam0000000146b342a8) & -(uint)(1e-08 <= fVar48) ^
                                          uRam0000000146b342a8);
                      fStack_65c = (float)(((uint)(((fRam0000000146b342bc -
                                                    fVar71 * fVar71 * fVar49 * fRam0000000146b342bc)
                                                    * fVar71 + fVar71) * fStack_65c) ^
                                           uRam0000000146b342ac) & -(uint)(1e-08 <= fVar49) ^
                                          uRam0000000146b342ac);
                      local_2c8 = CONCAT44(fStack_664,local_668);
                      uStack_2c0 = CONCAT44(fStack_65c,fStack_660);
                      uStack_2b0._4_4_ = 0;
                    }
                  }
                  fVar64 = fRam0000000146b342c8;
                  fVar68 = fRam0000000146b342c4;
                  fVar72 = _DAT_146b342c0;
                  iVar12 = *(int *)(param_1 + 0x188);
                  fVar71 = local_228;
                  fVar63 = fStack_224;
                  fVar69 = fStack_220;
                  fVar48 = fStack_21c;
                  fVar49 = local_238;
                  fVar50 = fStack_234;
                  fVar51 = fStack_230;
                  fVar57 = fStack_22c;
                  fVar62 = local_218;
                  fVar65 = fStack_214;
                  fVar66 = fStack_210;
                  fVar67 = fStack_20c;
                  if (iVar12 == 0) {
LAB_142da3eda:
                    fStack_2cc = fVar67;
                    fStack_2d0 = fVar66;
                    fStack_2d4 = fVar65;
                    local_2d8 = fVar62;
                    fStack_2ec = fVar57;
                    fStack_2f0 = fVar51;
                    fStack_2f4 = fVar50;
                    local_2f8 = fVar49;
                    local_2e8 = CONCAT44(fVar63,fVar71);
                    uStack_2e0 = CONCAT44(fVar48,fVar69);
                  }
                  else {
                    if (iVar12 == 1) {
                      local_2f8 = 0.0;
                      fStack_2f4 = 0.0;
                      fStack_2f0 = 0.0;
                      fStack_2ec = fRam0000000146b342cc;
                      local_2d8 = (float)((uint)_DAT_146b342c0 & _DAT_146b342d0);
                      fStack_2d4 = (float)((uint)fRam0000000146b342c4 & uRam0000000146b342d4);
                      fStack_2d0 = (float)((uint)fRam0000000146b342c8 & uRam0000000146b342d8);
                      fStack_2cc = (float)((uint)fRam0000000146b342cc & uRam0000000146b342dc);
                      auVar33._4_4_ = fStack_214;
                      auVar33._0_4_ = local_218;
                      auVar33._8_4_ = fStack_210;
                      auVar33._12_4_ = fStack_20c;
                      local_2e8 = 0;
                      uStack_2e0 = 0;
                      _local_6a8 = *(undefined1 (*) [16])(param_1 + 0x720);
                      fVar70 = local_6a8._0_4_;
                      fVar58 = local_6a8._4_4_;
                      fVar47 = local_6a8._8_4_;
                      fVar52 = local_6a8._12_4_;
                      auVar41 = minps(auVar33,_local_6a8);
                      auVar34._4_4_ = -(uint)(auVar41._4_4_ < fRam0000000146b34324);
                      auVar34._0_4_ = -(uint)(auVar41._0_4_ < _DAT_146b34320);
                      auVar34._8_4_ = -(uint)(auVar41._8_4_ < fRam0000000146b34328);
                      auVar34._12_4_ = -(uint)(auVar41._12_4_ < fRam0000000146b3432c);
                      iVar12 = movmskps(uVar13,auVar34);
                      local_868 = CONCAT44(fRam0000000146b34324,_DAT_146b34320);
                      fStack_860 = fRam0000000146b34328;
                      fStack_85c = fRam0000000146b3432c;
                      if (iVar12 == 0) {
                        fVar72 = *pfVar21;
                        fVar68 = *(float *)(param_1 + 0x704);
                        fVar64 = *(float *)(param_1 + 0x708);
                        fVar57 = *(float *)(param_1 + 0x70c);
                        fVar71 = local_228 * fVar70;
                        fVar63 = fStack_224 * fVar58;
                        fVar51 = fStack_220 * fVar47;
                        fVar62 = fStack_21c * fVar52;
                        fVar69 = fVar51 * fVar68 - fVar63 * fVar64;
                        fVar48 = fVar71 * fVar64 - fVar51 * fVar72;
                        fVar49 = fVar63 * fVar72 - fVar71 * fVar68;
                        fVar50 = fVar62 * fVar57 - fVar62 * fVar57;
                        fVar69 = fVar69 + fVar69;
                        fVar48 = fVar48 + fVar48;
                        fVar49 = fVar49 + fVar49;
                        fVar50 = fVar50 + fVar50;
                        fVar71 = (fVar49 * fVar68 - fVar48 * fVar64) + fVar69 * fVar57 + fVar71 +
                                 *(float *)(param_1 + 0x710);
                        fVar63 = (fVar69 * fVar64 - fVar49 * fVar72) + fVar48 * fVar57 + fVar63 +
                                 *(float *)(param_1 + 0x714);
                        fVar69 = (fVar48 * fVar72 - fVar69 * fVar68) + fVar49 * fVar57 + fVar51 +
                                 *(float *)(param_1 + 0x718);
                        fVar48 = (fVar50 * fVar57 - fVar50 * fVar57) + fVar50 * fVar57 + fVar62 +
                                 *(float *)(param_1 + 0x71c);
                        fVar49 = fStack_22c * fVar72 * _DAT_146b34300 + local_238 * fVar57 +
                                 fStack_230 * fVar68 * _DAT_146b342f0 +
                                 fStack_234 * fVar64 * _DAT_146b342e0;
                        fVar50 = fStack_230 * fVar72 * fRam0000000146b34304 + fStack_234 * fVar57 +
                                 fStack_22c * fVar68 * fRam0000000146b342f4 +
                                 local_238 * fVar64 * fRam0000000146b342e4;
                        fVar51 = fStack_234 * fVar72 * fRam0000000146b34308 + fStack_230 * fVar57 +
                                 local_238 * fVar68 * fRam0000000146b342f8 +
                                 fStack_22c * fVar64 * fRam0000000146b342e8;
                        fVar57 = local_238 * fVar72 * fRam0000000146b3430c + fStack_22c * fVar57 +
                                 fStack_234 * fVar68 * fRam0000000146b342fc +
                                 fStack_230 * fVar64 * fRam0000000146b342ec;
                        fVar62 = local_218 * fVar70;
                        fVar65 = fStack_214 * fVar58;
                        fVar66 = fStack_210 * fVar47;
                        fVar67 = fStack_20c * fVar52;
                      }
                      else {
                        fVar71 = *pfVar21;
                        fVar63 = *(float *)(param_1 + 0x704);
                        fVar69 = *(float *)(param_1 + 0x708);
                        fVar48 = *(float *)(param_1 + 0x70c);
                        fVar49 = fVar63 + fVar63;
                        fVar50 = fVar69 + fVar69;
                        fVar62 = local_218 * fVar70;
                        fVar65 = fStack_214 * fVar58;
                        fVar66 = fStack_210 * fVar47;
                        fVar67 = fStack_20c * fVar52;
                        fVar57 = (fVar71 + fVar71) * fVar71;
                        fVar51 = fVar48 * (fVar71 + fVar71);
                        fStack_4b4 = (fVar48 * fVar50 + fVar71 * fVar49) * fVar70;
                        fStack_4a0 = (fVar51 + fVar63 * fVar50) * fVar58;
                        local_498 = (fVar48 * fVar49 + fVar71 * fVar50) * fVar47;
                        local_4a8 = fVar58 * (fVar71 * fVar49 - fVar48 * fVar50);
                        fStack_494 = fVar47 * (fVar63 * fVar50 - fVar51);
                        fStack_4b0 = fVar70 * (fVar71 * fVar50 - fVar48 * fVar49);
                        local_4b8 = (float)((uint)((_DAT_146b342c0 -
                                                   (fVar50 * fVar69 + fVar49 * fVar63)) * fVar70) &
                                           _DAT_146b342d0);
                        fStack_4a4 = (float)((uint)((fRam0000000146b342c4 -
                                                    (fVar50 * fVar69 + fVar57)) * fVar58) &
                                            uRam0000000146b342d4);
                        fStack_490 = (float)((uint)((fRam0000000146b342c8 -
                                                    (fVar49 * fVar63 + fVar57)) * fVar47) &
                                            uRam0000000146b342d8);
                        fStack_4ac = (float)((uint)((fRam0000000146b342cc - (fVar57 + fVar57)) *
                                                   fVar52) & uRam0000000146b342dc);
                        fVar71 = fStack_234 + fStack_234;
                        fVar63 = fStack_230 + fStack_230;
                        local_488 = *(float *)(param_1 + 0x710);
                        fStack_484 = *(float *)(param_1 + 0x714);
                        fStack_480 = *(float *)(param_1 + 0x718);
                        fVar69 = local_238 * (local_238 + local_238);
                        fVar48 = fStack_22c * (local_238 + local_238);
                        fStack_47c = fRam0000000146b342cc;
                        fStack_584 = (fStack_22c * fVar63 + local_238 * fVar71) * local_218;
                        fStack_570 = (fVar48 + fStack_234 * fVar63) * fStack_214;
                        local_568 = (fStack_22c * fVar71 + local_238 * fVar63) * fStack_210;
                        local_578 = fStack_214 * (local_238 * fVar71 - fStack_22c * fVar63);
                        fStack_564 = fStack_210 * (fStack_234 * fVar63 - fVar48);
                        fStack_580 = local_218 * (local_238 * fVar63 - fStack_22c * fVar71);
                        local_588 = (float)((uint)((_DAT_146b342c0 -
                                                   (fStack_230 * fVar63 + fStack_234 * fVar71)) *
                                                  local_218) & _DAT_146b342d0);
                        fStack_574 = (float)((uint)((fRam0000000146b342c4 -
                                                    (fStack_230 * fVar63 + fVar69)) * fStack_214) &
                                            uRam0000000146b342d4);
                        fStack_560 = (float)((uint)((fRam0000000146b342c8 -
                                                    (fStack_234 * fVar71 + fVar69)) * fStack_210) &
                                            uRam0000000146b342d8);
                        fStack_57c = (float)((uint)((fRam0000000146b342cc - (fVar69 + fVar69)) *
                                                   fStack_20c) & uRam0000000146b342dc);
                        local_728 = fStack_584 * local_4a8 + local_588 * local_4b8 +
                                    fStack_580 * local_498 + fStack_57c * local_488;
                        fStack_724 = fStack_584 * fStack_4a4 + local_588 * fStack_4b4 +
                                     fStack_580 * fStack_494 + fStack_57c * fStack_484;
                        fStack_720 = fStack_584 * fStack_4a0 + local_588 * fStack_4b0 +
                                     fStack_580 * fStack_490 + fStack_57c * fStack_480;
                        fStack_71c = fStack_584 * fStack_4ac + local_588 * fStack_4ac +
                                     fStack_580 * fStack_4ac + fStack_57c * fRam0000000146b342cc;
                        fStack_54c = fRam0000000146b342cc;
                        local_718 = fStack_574 * local_4a8 + local_578 * local_4b8 +
                                    fStack_570 * local_498 + fStack_57c * local_488;
                        fStack_714 = fStack_574 * fStack_4a4 + local_578 * fStack_4b4 +
                                     fStack_570 * fStack_494 + fStack_57c * fStack_484;
                        fStack_710 = fStack_574 * fStack_4a0 + local_578 * fStack_4b0 +
                                     fStack_570 * fStack_490 + fStack_57c * fStack_480;
                        fStack_70c = fStack_574 * fStack_4ac + local_578 * fStack_4ac +
                                     fStack_570 * fStack_4ac + fStack_57c * fRam0000000146b342cc;
                        local_708 = fStack_564 * local_4a8 + local_568 * local_4b8 +
                                    fStack_560 * local_498 + fStack_57c * local_488;
                        fStack_704 = fStack_564 * fStack_4a4 + local_568 * fStack_4b4 +
                                     fStack_560 * fStack_494 + fStack_57c * fStack_484;
                        fStack_700 = fStack_564 * fStack_4a0 + local_568 * fStack_4b0 +
                                     fStack_560 * fStack_490 + fStack_57c * fStack_480;
                        fStack_6fc = fStack_564 * fStack_4ac + local_568 * fStack_4ac +
                                     fStack_560 * fStack_4ac + fStack_57c * fRam0000000146b342cc;
                        local_6f8 = fStack_224 * local_4a8 + local_228 * local_4b8 +
                                    fStack_220 * local_498 + fRam0000000146b342cc * local_488;
                        fStack_6f4 = fStack_224 * fStack_4a4 + local_228 * fStack_4b4 +
                                     fStack_220 * fStack_494 + fRam0000000146b342cc * fStack_484;
                        fStack_6f0 = fStack_224 * fStack_4a0 + local_228 * fStack_4b0 +
                                     fStack_220 * fStack_490 + fRam0000000146b342cc * fStack_480;
                        fStack_6ec = fStack_224 * fStack_4ac + local_228 * fStack_4ac +
                                     fStack_220 * fStack_4ac +
                                     fRam0000000146b342cc * fRam0000000146b342cc;
                        fStack_56c = fStack_57c;
                        fStack_55c = fStack_57c;
                        local_558 = local_228;
                        fStack_554 = fStack_224;
                        fStack_550 = fStack_220;
                        fStack_49c = fStack_4ac;
                        fStack_48c = fStack_4ac;
                        FMatrix::RemoveScaling(&local_728);
                        fVar72 = (float)(-(uint)((float)local_868 <= fVar62) &
                                         (_DAT_146b34310 ^ (uint)fVar72) ^ _DAT_146b34310);
                        fVar68 = (float)(-(uint)(local_868._4_4_ <= fVar65) &
                                         (uRam0000000146b34314 ^ (uint)fVar68) ^
                                        uRam0000000146b34314);
                        fVar64 = (float)(-(uint)(fStack_860 <= fVar66) &
                                         (uRam0000000146b34318 ^ (uint)fVar64) ^
                                        uRam0000000146b34318);
                        local_728 = local_728 * fVar72;
                        fStack_724 = fStack_724 * fVar72;
                        fStack_720 = fStack_720 * fVar72;
                        fStack_714 = fStack_714 * fVar68;
                        fStack_710 = fStack_710 * fVar68;
                        local_718 = local_718 * fVar68;
                        fStack_704 = fStack_704 * fVar64;
                        fStack_700 = fStack_700 * fVar64;
                        local_708 = local_708 * fVar64;
                        FQuat::FQuat(&local_838,&local_728);
                        local_868 = CONCAT44(local_868._4_4_,0x322bcc77);
                        auVar43._0_4_ = local_838 * local_838 + fStack_830 * fStack_830;
                        auVar43._4_4_ = fStack_834 * fStack_834 + fStack_82c * fStack_82c;
                        auVar43._8_4_ = fStack_830 * fStack_830 + local_838 * local_838;
                        auVar43._12_4_ = fStack_82c * fStack_82c + fStack_834 * fStack_834;
                        fVar63 = auVar43._4_4_ + auVar43._0_4_;
                        fVar69 = auVar43._8_4_ + auVar43._4_4_;
                        fVar48 = auVar43._12_4_ + auVar43._8_4_;
                        fVar49 = auVar43._0_4_ + auVar43._12_4_;
                        auVar7._4_4_ = fVar69;
                        auVar7._0_4_ = fVar63;
                        auVar7._8_4_ = fVar48;
                        auVar7._12_4_ = fVar49;
                        auVar41 = rsqrtps(auVar43,auVar7);
                        fVar72 = auVar41._0_4_;
                        fVar68 = auVar41._4_4_;
                        fVar64 = auVar41._8_4_;
                        fVar71 = auVar41._12_4_;
                        fVar72 = ((float)local_888._0_4_ -
                                 fVar72 * fVar72 * fVar63 * (float)local_888._0_4_) * fVar72 +
                                 fVar72;
                        fVar68 = ((float)local_888._4_4_ -
                                 fVar68 * fVar68 * fVar69 * (float)local_888._4_4_) * fVar68 +
                                 fVar68;
                        fVar64 = ((float)uStack_880 - fVar64 * fVar64 * fVar48 * (float)uStack_880)
                                 * fVar64 + fVar64;
                        fVar71 = (uStack_880._4_4_ - fVar71 * fVar71 * fVar49 * uStack_880._4_4_) *
                                 fVar71 + fVar71;
                        local_838 = (float)(((uint)((((float)local_888._0_4_ -
                                                     fVar72 * fVar72 *
                                                     fVar63 * (float)local_888._0_4_) * fVar72 +
                                                    fVar72) * local_838) ^ _DAT_146b342a0) &
                                            -(uint)(1e-08 <= fVar63) ^ _DAT_146b342a0);
                        fStack_834 = (float)(((uint)((((float)local_888._4_4_ -
                                                      fVar68 * fVar68 *
                                                      fVar69 * (float)local_888._4_4_) * fVar68 +
                                                     fVar68) * fStack_834) ^ uRam0000000146b342a4) &
                                             -(uint)(1e-08 <= fVar69) ^ uRam0000000146b342a4);
                        fStack_830 = (float)(((uint)((((float)uStack_880 -
                                                      fVar64 * fVar64 * fVar48 * (float)uStack_880)
                                                      * fVar64 + fVar64) * fStack_830) ^
                                             uRam0000000146b342a8) & -(uint)(1e-08 <= fVar48) ^
                                            uRam0000000146b342a8);
                        fStack_82c = (float)(((uint)(((uStack_880._4_4_ -
                                                      fVar71 * fVar71 * fVar49 * uStack_880._4_4_) *
                                                      fVar71 + fVar71) * fStack_82c) ^
                                             uRam0000000146b342ac) & -(uint)(1e-08 <= fVar49) ^
                                            uRam0000000146b342ac);
                        fVar71 = local_6f8;
                        fVar63 = fStack_6f4;
                        fVar69 = fStack_6f0;
                        fVar48 = 0.0;
                        fVar49 = local_838;
                        fVar50 = fStack_834;
                        fVar51 = fStack_830;
                        fVar57 = fStack_82c;
                      }
                      goto LAB_142da3eda;
                    }
                    fVar49 = local_238;
                    fVar50 = fStack_234;
                    fVar51 = fStack_230;
                    fVar57 = fStack_22c;
                    fVar62 = local_218;
                    fVar65 = fStack_214;
                    fVar66 = fStack_210;
                    fVar67 = fStack_20c;
                    if (iVar12 != 2) goto LAB_142da3eda;
                    FUN_14162bcf0(&local_238,&local_2f8,&local_208);
                    fVar71 = (float)local_2e8;
                    fVar63 = local_2e8._4_4_;
                    fVar69 = (float)uStack_2e0;
                  }
                  fVar48 = 1.0 / local_858;
                  auVar3._4_4_ = (fVar63 - (float)local_2b8._4_4_) * fVar48;
                  auVar3._0_4_ = (fVar71 - (float)local_2b8._0_4_) * fVar48;
                  auVar3._8_4_ = (fVar69 - (float)uStack_2b0) * fVar48;
                  auVar3._12_4_ = 0;
                  *(undefined1 (*) [16])(pcVar26 + 0x20) = auVar3;
                  fVar64 = -local_2f8;
                  fVar72 = -fStack_2f4;
                  fVar68 = -fStack_2f0;
                  fVar71 = (float)local_2c8 * fVar64 * fRam0000000146b3430c +
                           fStack_2ec * uStack_2c0._4_4_ +
                           local_2c8._4_4_ * fVar72 * fRam0000000146b342fc +
                           (float)uStack_2c0 * fVar68 * fRam0000000146b342ec;
                  local_888._4_4_ =
                       (float)uStack_2c0 * fVar64 * fRam0000000146b34304 +
                       fStack_2ec * local_2c8._4_4_ +
                       uStack_2c0._4_4_ * fVar72 * fRam0000000146b342f4 +
                       (float)local_2c8 * fVar68 * fRam0000000146b342e4;
                  local_888._0_4_ =
                       uStack_2c0._4_4_ * fVar64 * _DAT_146b34300 + fStack_2ec * (float)local_2c8 +
                       (float)uStack_2c0 * fVar72 * _DAT_146b342f0 +
                       local_2c8._4_4_ * fVar68 * _DAT_146b342e0;
                  uStack_880._0_4_ =
                       local_2c8._4_4_ * fVar64 * fRam0000000146b34308 +
                       fStack_2ec * (float)uStack_2c0 +
                       (float)local_2c8 * fVar72 * fRam0000000146b342f8 +
                       uStack_2c0._4_4_ * fVar68 * fRam0000000146b342e8;
                  uStack_880._4_4_ = fVar71;
                  if (-1.0 <= fVar71) {
                    fVar72 = fVar71;
                    if (1.0 <= fVar71) {
                      fVar72 = 1.0;
                    }
                  }
                  else {
                    fVar72 = -1.0;
                  }
                  fVar72 = _guard_xfg_dispatch_icall_nop(fVar72);
                  fVar68 = 1.0 - fVar71 * fVar71;
                  if (fVar68 <= 0.0) {
                    fVar68 = 0.0;
                  }
                  if (SQRT(fVar68) < 0.0001) {
                    local_808 = 1.0;
                    local_804 = 0.0;
                    local_800 = 0.0;
                  }
                  else {
                    local_800 = 1.0 / SQRT(fVar68);
                    local_808 = local_800 * (float)local_888._0_4_;
                    local_804 = local_800 * (float)local_888._4_4_;
                    local_800 = local_800 * (float)uStack_880;
                  }
                  fVar72 = fVar72 * fVar48;
                  if (fVar72 < 0.0) {
                    fVar68 = fVar72 * 0.15915494 - 0.5;
                  }
                  else {
                    fVar68 = fVar72 * 0.15915494 + 0.5;
                  }
                  fVar72 = fVar72 - (float)(int)fVar68 * 6.2831855;
                  if (fVar72 <= 1.5707964) {
                    if (-1.5707964 <= fVar72) {
                      uStack_880._4_4_ = 1.0;
                    }
                    else {
                      uStack_880._4_4_ = -1.0;
                      fVar72 = -3.1415927 - fVar72;
                    }
                  }
                  else {
                    uStack_880._4_4_ = -1.0;
                    fVar72 = 3.1415927 - fVar72;
                  }
                  fVar68 = fVar72 * fVar72;
                  fVar72 = (((((2.7525562e-06 - fVar68 * 2.3889859e-08) * fVar68 - 0.00019840874) *
                              fVar68 + 0.008333331) * fVar68 - 0.16666667) * fVar68 + 1.0) * fVar72;
                  uStack_880._4_4_ =
                       (((((2.4760495e-05 - fVar68 * 2.6051615e-07) * fVar68 - 0.0013888378) *
                          fVar68 + 0.041666638) * fVar68 - 0.5) * fVar68 + 1.0) * uStack_880._4_4_;
                  local_888._4_4_ = fVar72 * local_804;
                  local_888._0_4_ = fVar72 * local_808;
                  uStack_880._0_4_ = fVar72 * local_800;
                  *(float *)(pcVar26 + 0x10) = fVar72 * local_808;
                  *(float *)(pcVar26 + 0x14) = fVar72 * local_804;
                  *(float *)(pcVar26 + 0x18) = fVar72 * local_800;
                  *(float *)(pcVar26 + 0x1c) = uStack_880._4_4_;
                  piVar17 = local_818;
                }
              }
              piVar27 = piVar27 + 8;
              param_3 = local_850;
            } while (piVar27 != piVar17);
          }
        }
        plVar1 = local_7f8;
        puVar28 = *(undefined4 **)(param_1 + 0x1c8);
        puVar30 = puVar28 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
        for (; puVar28 != puVar30; puVar28 = puVar28 + 8) {
          lVar24 = (longlong)(int)puVar28[1];
          *(undefined1 *)(lVar24 * 0x40 + 1 + *(longlong *)(param_1 + 0x1f8)) = 1;
          pfVar16 = (float *)FUN_140611730(plVar1,*puVar28);
          fVar50 = fRam0000000146b34328;
          fVar49 = fRam0000000146b34324;
          fVar48 = _DAT_146b34320;
          fVar69 = fRam0000000146b342c8;
          fVar63 = fRam0000000146b342c4;
          fVar71 = _DAT_146b342c0;
          local_268 = 0.0;
          fStack_264 = 0.0;
          fStack_260 = 0.0;
          fStack_25c = fRam0000000146b342cc;
          local_248 = (uint)_DAT_146b342c0 & _DAT_146b342d0;
          uStack_244 = (uint)fRam0000000146b342c4 & uRam0000000146b342d4;
          uStack_240 = (uint)fRam0000000146b342c8 & uRam0000000146b342d8;
          uStack_23c = (uint)fRam0000000146b342cc & uRam0000000146b342dc;
          _local_258 = ZEXT816(0);
          _local_6a8 = *(undefined1 (*) [16])(pfVar16 + 8);
          auVar41 = *(undefined1 (*) [16])(param_1 + 0x720);
          fVar72 = auVar41._0_4_;
          fVar68 = auVar41._4_4_;
          fVar64 = auVar41._8_4_;
          auVar35 = minps(_local_6a8,auVar41);
          auVar36._4_4_ = -(uint)(auVar35._4_4_ < fRam0000000146b34324);
          auVar36._0_4_ = -(uint)(auVar35._0_4_ < _DAT_146b34320);
          auVar36._8_4_ = -(uint)(auVar35._8_4_ < fRam0000000146b34328);
          auVar36._12_4_ = -(uint)(auVar35._12_4_ < fRam0000000146b3432c);
          iVar12 = movmskps((int)pfVar16,auVar36);
          if (iVar12 == 0) {
            fVar71 = *pfVar21;
            fVar63 = *(float *)(param_1 + 0x704);
            fVar69 = *(float *)(param_1 + 0x708);
            fVar48 = *(float *)(param_1 + 0x70c);
            fVar49 = *pfVar16;
            fVar50 = pfVar16[1];
            fVar51 = pfVar16[2];
            fVar57 = pfVar16[3];
            fVar72 = fVar72 * pfVar16[4];
            fVar68 = fVar68 * pfVar16[5];
            fVar64 = fVar64 * pfVar16[6];
            fVar62 = auVar41._12_4_ * pfVar16[7];
            local_268 = fVar57 * fVar71 * _DAT_146b34300 + fVar49 * fVar48 +
                        fVar63 * fVar51 * _DAT_146b342f0 + fVar69 * fVar50 * _DAT_146b342e0;
            fStack_264 = fVar51 * fVar71 * fRam0000000146b34304 + fVar50 * fVar48 +
                         fVar63 * fVar57 * fRam0000000146b342f4 +
                         fVar69 * fVar49 * fRam0000000146b342e4;
            fStack_260 = fVar50 * fVar71 * fRam0000000146b34308 + fVar51 * fVar48 +
                         fVar63 * fVar49 * fRam0000000146b342f8 +
                         fVar69 * fVar57 * fRam0000000146b342e8;
            fStack_25c = fVar49 * fVar71 * fRam0000000146b3430c + fVar57 * fVar48 +
                         fVar63 * fVar50 * fRam0000000146b342fc +
                         fVar69 * fVar51 * fRam0000000146b342ec;
            fVar49 = fVar64 * fVar63 - fVar68 * fVar69;
            fVar50 = fVar72 * fVar69 - fVar64 * fVar71;
            fVar51 = fVar68 * fVar71 - fVar72 * fVar63;
            fVar57 = fVar62 * fVar48 - fVar62 * fVar48;
            fVar49 = fVar49 + fVar49;
            fVar50 = fVar50 + fVar50;
            fVar51 = fVar51 + fVar51;
            fVar57 = fVar57 + fVar57;
            local_258._4_4_ =
                 (fVar49 * fVar69 - fVar51 * fVar71) + fVar48 * fVar50 + fVar68 +
                 *(float *)(param_1 + 0x714);
            local_258._0_4_ =
                 (fVar51 * fVar63 - fVar50 * fVar69) + fVar48 * fVar49 + fVar72 +
                 *(float *)(param_1 + 0x710);
            fStack_250 = (fVar50 * fVar71 - fVar49 * fVar63) + fVar48 * fVar51 + fVar64 +
                         *(float *)(param_1 + 0x718);
            fStack_24c = (fVar57 * fVar48 - fVar57 * fVar48) + fVar48 * fVar57 + fVar62 +
                         *(float *)(param_1 + 0x71c);
          }
          else {
            fVar51 = *pfVar21;
            fVar57 = *(float *)(param_1 + 0x704);
            fVar62 = *(float *)(param_1 + 0x708);
            fVar65 = *(float *)(param_1 + 0x70c);
            fVar66 = fVar57 + fVar57;
            fVar67 = fVar62 + fVar62;
            fVar58 = fVar51 * (fVar51 + fVar51);
            fVar70 = fVar65 * (fVar51 + fVar51);
            fStack_474 = (fVar65 * fVar67 + fVar51 * fVar66) * fVar72;
            fStack_460 = (fVar70 + fVar57 * fVar67) * fVar68;
            local_458 = (fVar65 * fVar66 + fVar51 * fVar67) * fVar64;
            local_468 = fVar68 * (fVar51 * fVar66 - fVar65 * fVar67);
            fStack_454 = fVar64 * (fVar57 * fVar67 - fVar70);
            fStack_470 = fVar72 * (fVar51 * fVar67 - fVar65 * fVar66);
            local_478 = (float)((uint)((_DAT_146b342c0 - (fVar62 * fVar67 + fVar57 * fVar66)) *
                                      fVar72) & _DAT_146b342d0);
            fStack_464 = (float)((uint)((fRam0000000146b342c4 - (fVar62 * fVar67 + fVar58)) * fVar68
                                       ) & uRam0000000146b342d4);
            fStack_450 = (float)((uint)((fRam0000000146b342c8 - (fVar57 * fVar66 + fVar58)) * fVar64
                                       ) & uRam0000000146b342d8);
            fStack_46c = (float)((uint)((fRam0000000146b342cc - (fVar58 + fVar58)) * auVar41._12_4_)
                                & uRam0000000146b342dc);
            local_448 = *(float *)(param_1 + 0x710);
            fStack_444 = *(float *)(param_1 + 0x714);
            fStack_440 = *(float *)(param_1 + 0x718);
            fStack_43c = fRam0000000146b342cc;
            fVar51 = *pfVar16;
            fVar57 = pfVar16[1];
            fVar62 = pfVar16[2];
            fVar65 = pfVar16[3];
            fVar58 = fVar57 + fVar57;
            fVar47 = fVar62 + fVar62;
            fVar59 = (fVar51 + fVar51) * fVar51;
            fVar52 = fVar65 * (fVar51 + fVar51);
            fVar66 = pfVar16[8];
            fVar67 = pfVar16[9];
            fVar70 = pfVar16[10];
            fStack_434 = (fVar65 * fVar47 + fVar51 * fVar58) * fVar66;
            fStack_420 = (fVar52 + fVar57 * fVar47) * fVar67;
            local_418 = (fVar65 * fVar58 + fVar51 * fVar47) * fVar70;
            local_428 = fVar67 * (fVar51 * fVar58 - fVar65 * fVar47);
            fStack_414 = fVar70 * (fVar57 * fVar47 - fVar52);
            fStack_430 = fVar66 * (fVar51 * fVar47 - fVar65 * fVar58);
            local_438 = (float)((uint)((_DAT_146b342c0 - (fVar47 * fVar62 + fVar58 * fVar57)) *
                                      fVar66) & _DAT_146b342d0);
            fStack_424 = (float)((uint)((fRam0000000146b342c4 - (fVar47 * fVar62 + fVar59)) * fVar67
                                       ) & uRam0000000146b342d4);
            fStack_410 = (float)((uint)((fRam0000000146b342c8 - (fVar58 * fVar57 + fVar59)) * fVar70
                                       ) & uRam0000000146b342d8);
            fStack_42c = (float)((uint)((fRam0000000146b342cc - (fVar59 + fVar59)) * pfVar16[0xb]) &
                                uRam0000000146b342dc);
            local_408 = pfVar16[4];
            fStack_404 = pfVar16[5];
            fStack_400 = pfVar16[6];
            fStack_3fc = fRam0000000146b342cc;
            local_768 = fStack_434 * local_468 + local_438 * local_478 + fStack_430 * local_458 +
                        fStack_42c * local_448;
            fStack_764 = fStack_434 * fStack_464 + local_438 * fStack_474 + fStack_430 * fStack_454
                         + fStack_42c * fStack_444;
            fStack_760 = fStack_434 * fStack_460 + local_438 * fStack_470 + fStack_430 * fStack_450
                         + fStack_42c * fStack_440;
            fStack_75c = fStack_434 * fStack_46c + local_438 * fStack_46c + fStack_430 * fStack_46c
                         + fStack_42c * fRam0000000146b342cc;
            local_758 = fStack_424 * local_468 + local_428 * local_478 + fStack_420 * local_458 +
                        fStack_42c * local_448;
            fStack_754 = fStack_424 * fStack_464 + local_428 * fStack_474 + fStack_420 * fStack_454
                         + fStack_42c * fStack_444;
            fStack_750 = fStack_424 * fStack_460 + local_428 * fStack_470 + fStack_420 * fStack_450
                         + fStack_42c * fStack_440;
            fStack_74c = fStack_424 * fStack_46c + local_428 * fStack_46c + fStack_420 * fStack_46c
                         + fStack_42c * fRam0000000146b342cc;
            local_748 = fStack_414 * local_468 + local_418 * local_478 + fStack_410 * local_458 +
                        fStack_42c * local_448;
            fStack_744 = fStack_414 * fStack_464 + local_418 * fStack_474 + fStack_410 * fStack_454
                         + fStack_42c * fStack_444;
            fStack_740 = fStack_414 * fStack_460 + local_418 * fStack_470 + fStack_410 * fStack_450
                         + fStack_42c * fStack_440;
            fStack_73c = fStack_414 * fStack_46c + local_418 * fStack_46c + fStack_410 * fStack_46c
                         + fStack_42c * fRam0000000146b342cc;
            local_738 = fStack_404 * local_468 + local_408 * local_478 + fStack_400 * local_458 +
                        fRam0000000146b342cc * local_448;
            fStack_734 = fStack_404 * fStack_464 + local_408 * fStack_474 + fStack_400 * fStack_454
                         + fRam0000000146b342cc * fStack_444;
            fStack_730 = fStack_404 * fStack_460 + local_408 * fStack_470 + fStack_400 * fStack_450
                         + fRam0000000146b342cc * fStack_440;
            fStack_72c = fStack_404 * fStack_46c + local_408 * fStack_46c + fStack_400 * fStack_46c
                         + fRam0000000146b342cc * fRam0000000146b342cc;
            fStack_45c = fStack_46c;
            fStack_44c = fStack_46c;
            fStack_41c = fStack_42c;
            fStack_40c = fStack_42c;
            FMatrix::RemoveScaling(&local_768);
            fVar72 = (float)(-(uint)(fVar48 <= fVar72 * (float)local_6a8._0_4_) &
                             (_DAT_146b34310 ^ (uint)fVar71) ^ _DAT_146b34310);
            fVar68 = (float)(-(uint)(fVar49 <= fVar68 * (float)local_6a8._4_4_) &
                             (uRam0000000146b34314 ^ (uint)fVar63) ^ uRam0000000146b34314);
            fVar64 = (float)(-(uint)(fVar50 <= fVar64 * plStack_6a0._0_4_) &
                             (uRam0000000146b34318 ^ (uint)fVar69) ^ uRam0000000146b34318);
            local_768 = local_768 * fVar72;
            fStack_764 = fStack_764 * fVar72;
            fStack_760 = fStack_760 * fVar72;
            fStack_754 = fStack_754 * fVar68;
            fStack_750 = fStack_750 * fVar68;
            local_758 = local_758 * fVar68;
            fStack_744 = fStack_744 * fVar64;
            fStack_740 = fStack_740 * fVar64;
            local_748 = local_748 * fVar64;
            FQuat::FQuat(&local_838,&local_768);
            local_868 = CONCAT44(local_868._4_4_,0x322bcc77);
            auVar44._0_4_ = local_838 * local_838 + fStack_830 * fStack_830;
            auVar44._4_4_ = fStack_834 * fStack_834 + fStack_82c * fStack_82c;
            auVar44._8_4_ = fStack_830 * fStack_830 + local_838 * local_838;
            auVar44._12_4_ = fStack_82c * fStack_82c + fStack_834 * fStack_834;
            fVar63 = auVar44._4_4_ + auVar44._0_4_;
            fVar69 = auVar44._8_4_ + auVar44._4_4_;
            fVar48 = auVar44._12_4_ + auVar44._8_4_;
            fVar49 = auVar44._0_4_ + auVar44._12_4_;
            auVar4._4_4_ = fVar69;
            auVar4._0_4_ = fVar63;
            auVar4._8_4_ = fVar48;
            auVar4._12_4_ = fVar49;
            auVar41 = rsqrtps(auVar44,auVar4);
            fVar72 = auVar41._0_4_;
            fVar68 = auVar41._4_4_;
            fVar64 = auVar41._8_4_;
            fVar71 = auVar41._12_4_;
            fVar72 = (_DAT_146b342b0 - fVar72 * fVar72 * _DAT_146b342b0 * fVar63) * fVar72 + fVar72;
            fVar68 = (fRam0000000146b342b4 - fVar68 * fVar68 * fRam0000000146b342b4 * fVar69) *
                     fVar68 + fVar68;
            fVar64 = (fRam0000000146b342b8 - fVar64 * fVar64 * fRam0000000146b342b8 * fVar48) *
                     fVar64 + fVar64;
            fVar71 = (fRam0000000146b342bc - fVar71 * fVar71 * fRam0000000146b342bc * fVar49) *
                     fVar71 + fVar71;
            local_258._4_4_ = fStack_734;
            local_258._0_4_ = local_738;
            fStack_250 = fStack_730;
            local_838 = (float)(((uint)(((_DAT_146b342b0 - fVar72 * fVar72 * _DAT_146b342b0 * fVar63
                                         ) * fVar72 + fVar72) * local_838) ^ _DAT_146b342a0) &
                                -(uint)(1e-08 <= fVar63) ^ _DAT_146b342a0);
            fStack_834 = (float)(((uint)(((fRam0000000146b342b4 -
                                          fVar68 * fVar68 * fRam0000000146b342b4 * fVar69) * fVar68
                                         + fVar68) * fStack_834) ^ uRam0000000146b342a4) &
                                 -(uint)(1e-08 <= fVar69) ^ uRam0000000146b342a4);
            fStack_830 = (float)(((uint)(((fRam0000000146b342b8 -
                                          fVar64 * fVar64 * fRam0000000146b342b8 * fVar48) * fVar64
                                         + fVar64) * fStack_830) ^ uRam0000000146b342a8) &
                                 -(uint)(1e-08 <= fVar48) ^ uRam0000000146b342a8);
            fStack_82c = (float)(((uint)(((fRam0000000146b342bc -
                                          fVar71 * fVar71 * fRam0000000146b342bc * fVar49) * fVar71
                                         + fVar71) * fStack_82c) ^ uRam0000000146b342ac) &
                                 -(uint)(1e-08 <= fVar49) ^ uRam0000000146b342ac);
            fStack_24c = 0.0;
            local_268 = local_838;
            fStack_264 = fStack_834;
            fStack_260 = fStack_830;
            fStack_25c = fStack_82c;
          }
          local_248 = 0x3f800000;
          uStack_244 = 0x3f800000;
          uStack_240 = 0x3f800000;
          uStack_23c = 0;
          FUN_140957ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + lVar24 * 8),&local_268);
          puVar14 = (undefined8 *)(lVar24 * 0x30 + *(longlong *)(param_1 + 0x620));
          *puVar14 = CONCAT44(fStack_264,local_268);
          puVar14[1] = CONCAT44(fStack_25c,fStack_260);
          *(undefined4 *)(puVar14 + 2) = local_258._0_4_;
          *(undefined4 *)((longlong)puVar14 + 0x14) = local_258._4_4_;
          *(float *)(puVar14 + 3) = fStack_250;
          *(float *)((longlong)puVar14 + 0x1c) = fStack_24c;
          auVar11._4_4_ = uStack_244;
          auVar11._0_4_ = local_248;
          auVar11._8_4_ = uStack_240;
          auVar11._12_4_ = uStack_23c;
          *(undefined1 (*) [16])(puVar14 + 4) = auVar11;
          param_3 = local_850;
        }
      }
    }
    if (0 < *(int *)(param_1 + 0x1d0)) {
      plStack_6a0 = local_688;
      local_6a8 = (undefined1  [8])pfVar21;
      local_850 = (longlong *)0x0;
      do {
        iVar12 = (int)uVar31;
        puVar28 = (undefined4 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)local_850);
        local_698 = puVar28;
        if ((((*(char *)(param_1 + 0x5f5) != '\0') &&
             (*(char *)((longlong)(int)puVar28[1] * 0x40 + *(longlong *)(param_1 + 0x1f8)) != '\0'))
            && (1 < (int)puVar28[6])) && (puVar28[2] != -1)) {
          local_828[0] = (undefined4)param_3[1];
          iVar19 = puVar28[6] + -1 + (int)param_3[1];
          *(int *)(param_3 + 1) = iVar19;
          if (*(int *)((longlong)param_3 + 0xc) < iVar19) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_3);
          }
          local_648 = CONCAT44(fRam00000001468b5b84,_DAT_1468b5b80);
          uStack_640 = CONCAT44(fRam00000001468b5b8c,fRam00000001468b5b88);
          local_658 = _DAT_1468b5b70;
          uStack_650 = uRam00000001468b5b78;
          local_638 = (float)_DAT_1468b5b90;
          fStack_634 = (float)((ulonglong)_DAT_1468b5b90 >> 0x20);
          fStack_630 = (float)uRam00000001468b5b98;
          fStack_62c = (float)((ulonglong)uRam00000001468b5b98 >> 0x20);
          uVar18 = FUN_140953e00(*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x1d8) + (longlong)(int)puVar28[2] * 8),
                                 local_148);
          FUN_142d99ca0(local_6a8,&local_1d8,uVar18);
          lVar24 = local_678;
          local_680 = local_828;
          iVar29 = 1;
          local_618 = _DAT_1468b5b70;
          uStack_610 = uRam00000001468b5b78;
          unique0x10005268 = uRam00000001468b5b98;
          local_5f8 = (undefined1  [8])_DAT_1468b5b90;
          local_628[0] = -1;
          local_608 = _DAT_1468b5b80;
          fStack_604 = fRam00000001468b5b84;
          fStack_600 = fRam00000001468b5b88;
          fStack_5fc = fRam00000001468b5b8c;
          iVar19 = (int)param_3[1];
          local_688 = param_3;
          if (1 < (int)puVar28[6]) {
            lVar22 = 4;
            do {
              fVar47 = fStack_62c;
              fVar58 = fStack_630;
              fVar70 = fStack_634;
              fVar67 = local_638;
              fVar66 = fRam0000000146b34328;
              fVar65 = fRam0000000146b34324;
              fVar62 = _DAT_146b34320;
              fVar57 = fRam0000000146b342c8;
              fVar51 = fRam0000000146b342c4;
              fVar50 = _DAT_146b342c0;
              fVar49 = fRam0000000146b342bc;
              fVar48 = fRam0000000146b342b8;
              fVar69 = fRam0000000146b342b4;
              fVar63 = _DAT_146b342b0;
              iVar19 = iVar19 + -1;
              auVar10._4_4_ = fStack_634;
              auVar10._0_4_ = local_638;
              auVar10._8_4_ = fStack_630;
              auVar10._12_4_ = fStack_62c;
              local_628[0] = *(int *)(lVar22 + *(longlong *)(puVar28 + 4));
              pfVar21 = (float *)((longlong)local_628[0] * 0x30 + *(longlong *)(lVar24 + 0xa0));
              local_888._4_4_ = fRam0000000146b34324;
              local_888._0_4_ = _DAT_146b34320;
              uStack_880._0_4_ = fRam0000000146b34328;
              uStack_880._4_4_ = fRam0000000146b3432c;
              auVar41 = *(undefined1 (*) [16])(pfVar21 + 8);
              fVar72 = auVar41._0_4_;
              fVar68 = auVar41._4_4_;
              fVar64 = auVar41._8_4_;
              fVar71 = auVar41._12_4_;
              auVar41 = minps(auVar10,auVar41);
              auVar37._4_4_ = -(uint)(auVar41._4_4_ < fRam0000000146b34324);
              auVar37._0_4_ = -(uint)(auVar41._0_4_ < _DAT_146b34320);
              auVar37._8_4_ = -(uint)(auVar41._8_4_ < fRam0000000146b34328);
              auVar37._12_4_ = -(uint)(auVar41._12_4_ < fRam0000000146b3432c);
              iVar12 = movmskps((int)*(longlong *)(puVar28 + 4),auVar37);
              if (iVar12 == 0) {
                fVar50 = *pfVar21;
                fVar51 = pfVar21[1];
                fVar57 = pfVar21[2];
                fVar62 = pfVar21[3];
                local_648._0_4_ = fVar72 * (float)local_648;
                local_648._4_4_ = fVar68 * local_648._4_4_;
                uStack_640._0_4_ = fVar64 * (float)uStack_640;
                uStack_640._4_4_ = fVar71 * uStack_640._4_4_;
                fVar61 = uStack_650._4_4_ * fVar50 * _DAT_146b34300 + fVar62 * (float)local_658 +
                         (float)uStack_650 * fVar51 * _DAT_146b342f0 +
                         local_658._4_4_ * fVar57 * _DAT_146b342e0;
                fVar53 = (float)uStack_650 * fVar50 * fRam0000000146b34304 +
                         fVar62 * local_658._4_4_ + uStack_650._4_4_ * fVar51 * fRam0000000146b342f4
                         + (float)local_658 * fVar57 * fRam0000000146b342e4;
                fVar54 = local_658._4_4_ * fVar50 * fRam0000000146b34308 +
                         fVar62 * (float)uStack_650 +
                         (float)local_658 * fVar51 * fRam0000000146b342f8 +
                         uStack_650._4_4_ * fVar57 * fRam0000000146b342e8;
                fVar55 = (float)local_658 * fVar50 * fRam0000000146b3430c +
                         fVar62 * uStack_650._4_4_ + local_658._4_4_ * fVar51 * fRam0000000146b342fc
                         + (float)uStack_650 * fVar57 * fRam0000000146b342ec;
                fVar66 = (float)uStack_640 * fVar51 - local_648._4_4_ * fVar57;
                fVar52 = (float)local_648 * fVar57 - (float)uStack_640 * fVar50;
                fVar59 = local_648._4_4_ * fVar50 - (float)local_648 * fVar51;
                fVar56 = uStack_640._4_4_ * fVar62 - uStack_640._4_4_ * fVar62;
                fVar66 = fVar66 + fVar66;
                fVar52 = fVar52 + fVar52;
                fVar59 = fVar59 + fVar59;
                fVar56 = fVar56 + fVar56;
                fVar65 = (fVar59 * fVar51 - fVar52 * fVar57) + fVar62 * fVar66 + (float)local_648 +
                         pfVar21[4];
                fVar57 = (fVar66 * fVar57 - fVar59 * fVar50) + fVar62 * fVar52 + local_648._4_4_ +
                         pfVar21[5];
                fVar50 = (fVar52 * fVar50 - fVar66 * fVar51) + fVar62 * fVar59 + (float)uStack_640 +
                         pfVar21[6];
                fVar51 = (fVar56 * fVar62 - fVar56 * fVar62) + fVar62 * fVar56 + uStack_640._4_4_ +
                         pfVar21[7];
                uVar13 = 0;
              }
              else {
                fVar52 = *pfVar21;
                fVar59 = pfVar21[1];
                fVar56 = pfVar21[2];
                fVar61 = pfVar21[3];
                fVar53 = fVar59 + fVar59;
                fVar55 = fVar56 + fVar56;
                fVar73 = fVar72 * local_638;
                fVar74 = fVar68 * fStack_634;
                fVar75 = fVar64 * fStack_630;
                fVar60 = fVar52 * (fVar52 + fVar52);
                fVar54 = (fVar52 + fVar52) * fVar61;
                fStack_3f4 = (fVar55 * fVar61 + fVar53 * fVar52) * fVar72;
                fStack_3e0 = (fVar54 + fVar55 * fVar59) * fVar68;
                local_3d8 = (fVar53 * fVar61 + fVar55 * fVar52) * fVar64;
                local_3e8 = fVar68 * (fVar53 * fVar52 - fVar55 * fVar61);
                fStack_3d4 = fVar64 * (fVar55 * fVar59 - fVar54);
                fStack_3f0 = fVar72 * (fVar55 * fVar52 - fVar53 * fVar61);
                local_3f8 = (float)((uint)((_DAT_146b342c0 - (fVar56 * fVar55 + fVar59 * fVar53)) *
                                          fVar72) & _DAT_146b342d0);
                fStack_3e4 = (float)((uint)((fRam0000000146b342c4 - (fVar56 * fVar55 + fVar60)) *
                                           fVar68) & uRam0000000146b342d4);
                fStack_3d0 = (float)((uint)((fRam0000000146b342c8 - (fVar59 * fVar53 + fVar60)) *
                                           fVar64) & uRam0000000146b342d8);
                fStack_3ec = (float)((uint)((fRam0000000146b342cc - (fVar60 + fVar60)) * fVar71) &
                                    uRam0000000146b342dc);
                fVar52 = local_658._4_4_ + local_658._4_4_;
                fVar56 = (float)uStack_650 + (float)uStack_650;
                local_3c8 = pfVar21[4];
                fStack_3c4 = pfVar21[5];
                fStack_3c0 = pfVar21[6];
                fVar61 = ((float)local_658 + (float)local_658) * (float)local_658;
                fVar59 = ((float)local_658 + (float)local_658) * uStack_650._4_4_;
                fStack_3bc = fRam0000000146b342cc;
                fStack_3b4 = (fVar56 * uStack_650._4_4_ + fVar52 * (float)local_658) * local_638;
                fStack_3a0 = (fVar59 + fVar56 * local_658._4_4_) * fStack_634;
                local_398 = (fVar52 * uStack_650._4_4_ + fVar56 * (float)local_658) * fStack_630;
                local_3a8 = fStack_634 * (fVar52 * (float)local_658 - fVar56 * uStack_650._4_4_);
                fStack_394 = fStack_630 * (fVar56 * local_658._4_4_ - fVar59);
                fStack_3b0 = local_638 * (fVar56 * (float)local_658 - fVar52 * uStack_650._4_4_);
                local_3b8 = (float)((uint)((_DAT_146b342c0 -
                                           (fVar56 * (float)uStack_650 + fVar52 * local_658._4_4_))
                                          * local_638) & _DAT_146b342d0);
                fStack_3a4 = (float)((uint)((fRam0000000146b342c4 -
                                            (fVar56 * (float)uStack_650 + fVar61)) * fStack_634) &
                                    uRam0000000146b342d4);
                fStack_390 = (float)((uint)((fRam0000000146b342c8 -
                                            (fVar52 * local_658._4_4_ + fVar61)) * fStack_630) &
                                    uRam0000000146b342d8);
                fStack_3ac = (float)((uint)((fRam0000000146b342cc - (fVar61 + fVar61)) * fStack_62c)
                                    & uRam0000000146b342dc);
                local_388 = (float)local_648;
                fStack_384 = local_648._4_4_;
                fStack_380 = (float)uStack_640;
                fStack_37c = fRam0000000146b342cc;
                local_7a8 = fStack_3b4 * local_3e8 + local_3b8 * local_3f8 + fStack_3b0 * local_3d8
                            + fStack_3ac * local_3c8;
                fStack_7a4 = fStack_3b4 * fStack_3e4 + local_3b8 * fStack_3f4 +
                             fStack_3b0 * fStack_3d4 + fStack_3ac * fStack_3c4;
                fStack_7a0 = fStack_3b4 * fStack_3e0 + local_3b8 * fStack_3f0 +
                             fStack_3b0 * fStack_3d0 + fStack_3ac * fStack_3c0;
                fStack_79c = fStack_3b4 * fStack_3ec + local_3b8 * fStack_3ec +
                             fStack_3b0 * fStack_3ec + fStack_3ac * fRam0000000146b342cc;
                local_798 = fStack_3a4 * local_3e8 + local_3a8 * local_3f8 + fStack_3a0 * local_3d8
                            + fStack_3ac * local_3c8;
                fStack_794 = fStack_3a4 * fStack_3e4 + local_3a8 * fStack_3f4 +
                             fStack_3a0 * fStack_3d4 + fStack_3ac * fStack_3c4;
                fStack_790 = fStack_3a4 * fStack_3e0 + local_3a8 * fStack_3f0 +
                             fStack_3a0 * fStack_3d0 + fStack_3ac * fStack_3c0;
                fStack_78c = fStack_3a4 * fStack_3ec + local_3a8 * fStack_3ec +
                             fStack_3a0 * fStack_3ec + fStack_3ac * fRam0000000146b342cc;
                local_788 = fStack_394 * local_3e8 + local_398 * local_3f8 + fStack_390 * local_3d8
                            + fStack_3ac * local_3c8;
                fStack_784 = fStack_394 * fStack_3e4 + local_398 * fStack_3f4 +
                             fStack_390 * fStack_3d4 + fStack_3ac * fStack_3c4;
                fStack_780 = fStack_394 * fStack_3e0 + local_398 * fStack_3f0 +
                             fStack_390 * fStack_3d0 + fStack_3ac * fStack_3c0;
                fStack_77c = fStack_394 * fStack_3ec + local_398 * fStack_3ec +
                             fStack_390 * fStack_3ec + fStack_3ac * fRam0000000146b342cc;
                local_778 = local_648._4_4_ * local_3e8 + (float)local_648 * local_3f8 +
                            (float)uStack_640 * local_3d8 + fRam0000000146b342cc * local_3c8;
                fStack_774 = local_648._4_4_ * fStack_3e4 + (float)local_648 * fStack_3f4 +
                             (float)uStack_640 * fStack_3d4 + fRam0000000146b342cc * fStack_3c4;
                fStack_770 = local_648._4_4_ * fStack_3e0 + (float)local_648 * fStack_3f0 +
                             (float)uStack_640 * fStack_3d0 + fRam0000000146b342cc * fStack_3c0;
                fStack_76c = local_648._4_4_ * fStack_3ec + (float)local_648 * fStack_3ec +
                             (float)uStack_640 * fStack_3ec +
                             fRam0000000146b342cc * fRam0000000146b342cc;
                fStack_3dc = fStack_3ec;
                fStack_3cc = fStack_3ec;
                fStack_39c = fStack_3ac;
                fStack_38c = fStack_3ac;
                FMatrix::RemoveScaling(&local_7a8);
                fVar50 = (float)(-(uint)(fVar62 <= fVar73) & (_DAT_146b34310 ^ (uint)fVar50) ^
                                _DAT_146b34310);
                fVar51 = (float)(-(uint)(fVar65 <= fVar74) & (uRam0000000146b34314 ^ (uint)fVar51) ^
                                uRam0000000146b34314);
                fVar57 = (float)(-(uint)(fVar66 <= fVar75) & (uRam0000000146b34318 ^ (uint)fVar57) ^
                                uRam0000000146b34318);
                local_7a8 = local_7a8 * fVar50;
                fStack_7a4 = fStack_7a4 * fVar50;
                fStack_7a0 = fStack_7a0 * fVar50;
                fStack_794 = fStack_794 * fVar51;
                fStack_790 = fStack_790 * fVar51;
                local_798 = local_798 * fVar51;
                fStack_784 = fStack_784 * fVar57;
                fStack_780 = fStack_780 * fVar57;
                local_788 = local_788 * fVar57;
                uVar13 = FQuat::FQuat(&local_838,&local_7a8);
                local_868 = CONCAT44(local_868._4_4_,0x322bcc77);
                auVar45._0_4_ = local_838 * local_838 + fStack_830 * fStack_830;
                auVar45._4_4_ = fStack_834 * fStack_834 + fStack_82c * fStack_82c;
                auVar45._8_4_ = fStack_830 * fStack_830 + local_838 * local_838;
                auVar45._12_4_ = fStack_82c * fStack_82c + fStack_834 * fStack_834;
                fVar66 = auVar45._4_4_ + auVar45._0_4_;
                fVar52 = auVar45._8_4_ + auVar45._4_4_;
                fVar59 = auVar45._12_4_ + auVar45._8_4_;
                fVar56 = auVar45._0_4_ + auVar45._12_4_;
                auVar5._4_4_ = fVar52;
                auVar5._0_4_ = fVar66;
                auVar5._8_4_ = fVar59;
                auVar5._12_4_ = fVar56;
                auVar41 = rsqrtps(auVar45,auVar5);
                fVar50 = auVar41._0_4_;
                fVar57 = auVar41._4_4_;
                fVar62 = auVar41._8_4_;
                fVar65 = auVar41._12_4_;
                fVar50 = (fVar63 - fVar50 * fVar50 * fVar66 * fVar63) * fVar50 + fVar50;
                fVar57 = (fVar69 - fVar57 * fVar57 * fVar52 * fVar69) * fVar57 + fVar57;
                fVar62 = (fVar48 - fVar62 * fVar62 * fVar59 * fVar48) * fVar62 + fVar62;
                fVar65 = (fVar49 - fVar65 * fVar65 * fVar56 * fVar49) * fVar65 + fVar65;
                fVar51 = 0.0;
                fVar61 = (float)(((uint)(((fVar63 - fVar50 * fVar50 * fVar66 * fVar63) * fVar50 +
                                         fVar50) * local_838) ^ _DAT_146b342a0) &
                                 -(uint)(1e-08 <= fVar66) ^ _DAT_146b342a0);
                fVar53 = (float)(((uint)(((fVar69 - fVar57 * fVar57 * fVar52 * fVar69) * fVar57 +
                                         fVar57) * fStack_834) ^ uRam0000000146b342a4) &
                                 -(uint)(1e-08 <= fVar52) ^ uRam0000000146b342a4);
                fVar54 = (float)(((uint)(((fVar48 - fVar62 * fVar62 * fVar59 * fVar48) * fVar62 +
                                         fVar62) * fStack_830) ^ uRam0000000146b342a8) &
                                 -(uint)(1e-08 <= fVar59) ^ uRam0000000146b342a8);
                fVar55 = (float)(((uint)(((fVar49 - fVar65 * fVar65 * fVar56 * fVar49) * fVar65 +
                                         fVar65) * fStack_82c) ^ uRam0000000146b342ac) &
                                 -(uint)(1e-08 <= fVar56) ^ uRam0000000146b342ac);
                local_888._4_4_ = fRam0000000146b34324;
                local_888._0_4_ = _DAT_146b34320;
                uStack_880._0_4_ = fRam0000000146b34328;
                uStack_880._4_4_ = fRam0000000146b3432c;
                fVar65 = local_778;
                fVar57 = fStack_774;
                fVar50 = fStack_770;
                local_838 = fVar61;
                fStack_834 = fVar53;
                fStack_830 = fVar54;
                fStack_82c = fVar55;
              }
              fVar52 = fRam0000000146b342c8;
              fVar66 = fRam0000000146b342c4;
              fVar62 = _DAT_146b342c0;
              fStack_634 = fVar68 * fVar70;
              local_638 = fVar72 * fVar67;
              fStack_630 = fVar64 * fVar58;
              fStack_62c = fVar71 * fVar47;
              fVar72 = local_1b8._0_4_;
              fVar68 = local_1b8._4_4_;
              fVar64 = local_1b8._8_4_;
              fVar71 = local_1b8._12_4_;
              auVar38._4_4_ = fStack_634;
              auVar38._0_4_ = local_638;
              auVar38._8_4_ = fStack_630;
              auVar38._12_4_ = fStack_62c;
              auVar41 = minps(auVar38,local_1b8);
              auVar39._4_4_ = -(uint)(auVar41._4_4_ < fRam0000000146b34324);
              auVar39._0_4_ = -(uint)(auVar41._0_4_ < _DAT_146b34320);
              auVar39._8_4_ = -(uint)(auVar41._8_4_ < fRam0000000146b34328);
              auVar39._12_4_ = -(uint)(auVar41._12_4_ < fRam0000000146b3432c);
              iVar12 = movmskps(uVar13,auVar39);
              local_648 = CONCAT44(fVar57,fVar65);
              uStack_640 = CONCAT44(fVar51,fVar50);
              local_658 = CONCAT44(fVar53,fVar61);
              uStack_650 = CONCAT44(fVar55,fVar54);
              if (iVar12 == 0) {
                fVar65 = fVar72 * fVar65;
                fVar57 = fVar68 * fVar57;
                fVar50 = fVar64 * fVar50;
                fVar51 = fVar71 * fVar51;
                fVar62 = local_1d8 * fVar55 * _DAT_146b34300 + fStack_1cc * fVar61 +
                         fStack_1d4 * fVar54 * _DAT_146b342f0 + fStack_1d0 * fVar53 * _DAT_146b342e0
                ;
                fVar66 = local_1d8 * fVar54 * fRam0000000146b34304 + fStack_1cc * fVar53 +
                         fStack_1d4 * fVar55 * fRam0000000146b342f4 +
                         fStack_1d0 * fVar61 * fRam0000000146b342e4;
                fVar67 = local_1d8 * fVar53 * fRam0000000146b34308 + fStack_1cc * fVar54 +
                         fStack_1d4 * fVar61 * fRam0000000146b342f8 +
                         fStack_1d0 * fVar55 * fRam0000000146b342e8;
                fVar70 = local_1d8 * fVar61 * fRam0000000146b3430c + fStack_1cc * fVar55 +
                         fStack_1d4 * fVar53 * fRam0000000146b342fc +
                         fStack_1d0 * fVar54 * fRam0000000146b342ec;
                fVar63 = fVar50 * fStack_1d4 - fVar57 * fStack_1d0;
                fVar69 = fVar65 * fStack_1d0 - fVar50 * local_1d8;
                fVar48 = fVar57 * local_1d8 - fVar65 * fStack_1d4;
                fVar49 = fVar51 * fStack_1cc - fVar51 * fStack_1cc;
                fVar63 = fVar63 + fVar63;
                fVar69 = fVar69 + fVar69;
                fVar48 = fVar48 + fVar48;
                fVar49 = fVar49 + fVar49;
                local_5f8._0_4_ = fVar72 * local_638;
                local_5f8._4_4_ = fVar68 * fStack_634;
                fStack_5f0 = fVar64 * fStack_630;
                fStack_5ec = fVar71 * fStack_62c;
                local_608 = (fVar48 * fStack_1d4 - fVar69 * fStack_1d0) +
                            fStack_1cc * fVar63 + fVar65 + local_1c8;
                fStack_604 = (fVar63 * fStack_1d0 - fVar48 * local_1d8) +
                             fStack_1cc * fVar69 + fVar57 + fStack_1c4;
                fStack_600 = (fVar69 * local_1d8 - fVar63 * fStack_1d4) +
                             fStack_1cc * fVar48 + fVar50 + fStack_1c0;
                fStack_5fc = (fVar49 * fStack_1cc - fVar49 * fStack_1cc) +
                             fStack_1cc * fVar49 + fVar51 + fStack_1bc;
              }
              else {
                fVar70 = fStack_1d4 + fStack_1d4;
                fVar58 = fStack_1d0 + fStack_1d0;
                fStack_810 = fVar64 * fStack_630;
                fStack_80c = fVar71 * fStack_62c;
                fVar47 = (local_1d8 + local_1d8) * local_1d8;
                local_818 = (int *)CONCAT44(fVar68 * fStack_634,fVar72 * local_638);
                fVar51 = (local_1d8 + local_1d8) * fStack_1cc;
                fStack_374 = (fVar58 * fStack_1cc + fVar70 * local_1d8) * fVar72;
                fStack_360 = (fVar51 + fVar58 * fStack_1d4) * fVar68;
                local_358 = (fVar70 * fStack_1cc + fVar58 * local_1d8) * fVar64;
                local_368 = fVar68 * (fVar70 * local_1d8 - fVar58 * fStack_1cc);
                fStack_354 = fVar64 * (fVar58 * fStack_1d4 - fVar51);
                fStack_370 = fVar72 * (fVar58 * local_1d8 - fVar70 * fStack_1cc);
                fVar51 = fVar53 + fVar53;
                fVar67 = fVar54 + fVar54;
                local_378 = (float)((uint)((_DAT_146b342c0 -
                                           (fVar58 * fStack_1d0 + fVar70 * fStack_1d4)) * fVar72) &
                                   _DAT_146b342d0);
                fStack_364 = (float)((uint)((fRam0000000146b342c4 - (fVar58 * fStack_1d0 + fVar47))
                                           * fVar68) & uRam0000000146b342d4);
                fStack_350 = (float)((uint)((fRam0000000146b342c8 - (fVar70 * fStack_1d4 + fVar47))
                                           * fVar64) & uRam0000000146b342d8);
                fStack_36c = (float)((uint)((fRam0000000146b342cc - (fVar47 + fVar47)) * fVar71) &
                                    uRam0000000146b342dc);
                fVar68 = (fVar61 + fVar61) * fVar61;
                fVar72 = (fVar61 + fVar61) * fVar55;
                local_348 = local_1c8;
                fStack_344 = fStack_1c4;
                fStack_340 = fStack_1c0;
                fStack_33c = fRam0000000146b342cc;
                fStack_334 = (fVar67 * fVar55 + fVar51 * fVar61) * local_638;
                fStack_320 = (fVar72 + fVar67 * fVar53) * fStack_634;
                local_318 = (fVar51 * fVar55 + fVar67 * fVar61) * fStack_630;
                local_328 = fStack_634 * (fVar51 * fVar61 - fVar67 * fVar55);
                fStack_314 = fStack_630 * (fVar67 * fVar53 - fVar72);
                fStack_330 = local_638 * (fVar67 * fVar61 - fVar51 * fVar55);
                local_338 = (float)((uint)((_DAT_146b342c0 - (fVar67 * fVar54 + fVar51 * fVar53)) *
                                          local_638) & _DAT_146b342d0);
                fStack_324 = (float)((uint)((fRam0000000146b342c4 - (fVar67 * fVar54 + fVar68)) *
                                           fStack_634) & uRam0000000146b342d4);
                fStack_310 = (float)((uint)((fRam0000000146b342c8 - (fVar51 * fVar53 + fVar68)) *
                                           fStack_630) & uRam0000000146b342d8);
                fStack_32c = (float)((uint)((fRam0000000146b342cc - (fVar68 + fVar68)) * fStack_62c)
                                    & uRam0000000146b342dc);
                local_6e8 = fStack_334 * local_368 + local_338 * local_378 + fStack_330 * local_358
                            + fStack_32c * local_1c8;
                fStack_6e4 = fStack_334 * fStack_364 + local_338 * fStack_374 +
                             fStack_330 * fStack_354 + fStack_32c * fStack_1c4;
                fStack_6e0 = fStack_334 * fStack_360 + local_338 * fStack_370 +
                             fStack_330 * fStack_350 + fStack_32c * fStack_1c0;
                fStack_6dc = fStack_334 * fStack_36c + local_338 * fStack_36c +
                             fStack_330 * fStack_36c + fStack_32c * fRam0000000146b342cc;
                fStack_2fc = fRam0000000146b342cc;
                local_6d8 = fStack_324 * local_368 + local_328 * local_378 + fStack_320 * local_358
                            + fStack_32c * local_1c8;
                fStack_6d4 = fStack_324 * fStack_364 + local_328 * fStack_374 +
                             fStack_320 * fStack_354 + fStack_32c * fStack_1c4;
                fStack_6d0 = fStack_324 * fStack_360 + local_328 * fStack_370 +
                             fStack_320 * fStack_350 + fStack_32c * fStack_1c0;
                fStack_6cc = fStack_324 * fStack_36c + local_328 * fStack_36c +
                             fStack_320 * fStack_36c + fStack_32c * fRam0000000146b342cc;
                local_6c8 = fStack_314 * local_368 + local_318 * local_378 + fStack_310 * local_358
                            + fStack_32c * local_1c8;
                fStack_6c4 = fStack_314 * fStack_364 + local_318 * fStack_374 +
                             fStack_310 * fStack_354 + fStack_32c * fStack_1c4;
                fStack_6c0 = fStack_314 * fStack_360 + local_318 * fStack_370 +
                             fStack_310 * fStack_350 + fStack_32c * fStack_1c0;
                fStack_6bc = fStack_314 * fStack_36c + local_318 * fStack_36c +
                             fStack_310 * fStack_36c + fStack_32c * fRam0000000146b342cc;
                local_6b8 = fVar57 * local_368 + fVar65 * local_378 + fVar50 * local_358 +
                            fRam0000000146b342cc * local_1c8;
                fStack_6b4 = fVar57 * fStack_364 + fVar65 * fStack_374 + fVar50 * fStack_354 +
                             fRam0000000146b342cc * fStack_1c4;
                fStack_6b0 = fVar57 * fStack_360 + fVar65 * fStack_370 + fVar50 * fStack_350 +
                             fRam0000000146b342cc * fStack_1c0;
                fStack_6ac = fVar57 * fStack_36c + fVar65 * fStack_36c + fVar50 * fStack_36c +
                             fRam0000000146b342cc * fRam0000000146b342cc;
                fStack_35c = fStack_36c;
                fStack_34c = fStack_36c;
                fStack_31c = fStack_32c;
                fStack_30c = fStack_32c;
                local_308 = fVar65;
                fStack_304 = fVar57;
                fStack_300 = fVar50;
                FMatrix::RemoveScaling(&local_6e8);
                fVar72 = (float)(-(uint)((float)local_888._0_4_ <= (float)local_818) &
                                 (_DAT_146b34310 ^ (uint)fVar62) ^ _DAT_146b34310);
                fVar68 = (float)(-(uint)((float)local_888._4_4_ <= local_818._4_4_) &
                                 (uRam0000000146b34314 ^ (uint)fVar66) ^ uRam0000000146b34314);
                fVar64 = (float)(-(uint)((float)uStack_880 <= fStack_810) &
                                 (uRam0000000146b34318 ^ (uint)fVar52) ^ uRam0000000146b34318);
                local_6e8 = local_6e8 * fVar72;
                fStack_6e4 = fStack_6e4 * fVar72;
                fStack_6e0 = fStack_6e0 * fVar72;
                fStack_6d4 = fStack_6d4 * fVar68;
                fStack_6d0 = fStack_6d0 * fVar68;
                local_6d8 = local_6d8 * fVar68;
                fStack_6c4 = fStack_6c4 * fVar64;
                fStack_6c0 = fStack_6c0 * fVar64;
                local_6c8 = local_6c8 * fVar64;
                FQuat::FQuat(&local_668,&local_6e8);
                local_868 = CONCAT44(local_868._4_4_,0x322bcc77);
                auVar46._0_4_ = local_668 * local_668 + fStack_660 * fStack_660;
                auVar46._4_4_ = fStack_664 * fStack_664 + fStack_65c * fStack_65c;
                auVar46._8_4_ = fStack_660 * fStack_660 + local_668 * local_668;
                auVar46._12_4_ = fStack_65c * fStack_65c + fStack_664 * fStack_664;
                fVar50 = auVar46._4_4_ + auVar46._0_4_;
                fVar51 = auVar46._8_4_ + auVar46._4_4_;
                fVar57 = auVar46._12_4_ + auVar46._8_4_;
                fVar65 = auVar46._0_4_ + auVar46._12_4_;
                auVar6._4_4_ = fVar51;
                auVar6._0_4_ = fVar50;
                auVar6._8_4_ = fVar57;
                auVar6._12_4_ = fVar65;
                auVar41 = rsqrtps(auVar46,auVar6);
                fVar72 = auVar41._0_4_;
                fVar68 = auVar41._4_4_;
                fVar64 = auVar41._8_4_;
                fVar71 = auVar41._12_4_;
                fVar72 = (fVar63 - fVar72 * fVar72 * fVar50 * fVar63) * fVar72 + fVar72;
                fVar68 = (fVar69 - fVar68 * fVar68 * fVar51 * fVar69) * fVar68 + fVar68;
                fVar64 = (fVar48 - fVar64 * fVar64 * fVar57 * fVar48) * fVar64 + fVar64;
                fVar71 = (fVar49 - fVar71 * fVar71 * fVar65 * fVar49) * fVar71 + fVar71;
                fStack_5fc = 0.0;
                fVar62 = (float)(((uint)(((fVar63 - fVar72 * fVar72 * fVar50 * fVar63) * fVar72 +
                                         fVar72) * local_668) ^ _DAT_146b342a0) &
                                 -(uint)(1e-08 <= fVar50) ^ _DAT_146b342a0);
                fVar66 = (float)(((uint)(((fVar69 - fVar68 * fVar68 * fVar51 * fVar69) * fVar68 +
                                         fVar68) * fStack_664) ^ uRam0000000146b342a4) &
                                 -(uint)(1e-08 <= fVar51) ^ uRam0000000146b342a4);
                fVar67 = (float)(((uint)(((fVar48 - fVar64 * fVar64 * fVar57 * fVar48) * fVar64 +
                                         fVar64) * fStack_660) ^ uRam0000000146b342a8) &
                                 -(uint)(1e-08 <= fVar57) ^ uRam0000000146b342a8);
                fVar70 = (float)(((uint)(((fVar49 - fVar71 * fVar71 * fVar65 * fVar49) * fVar71 +
                                         fVar71) * fStack_65c) ^ uRam0000000146b342ac) &
                                 -(uint)(1e-08 <= fVar65) ^ uRam0000000146b342ac);
                local_608 = local_6b8;
                fStack_604 = fStack_6b4;
                fStack_600 = fStack_6b0;
                local_5f8._0_4_ = (float)local_818;
                local_5f8._4_4_ = local_818._4_4_;
                fStack_5f0 = fStack_810;
                fStack_5ec = fStack_80c;
                local_668 = fVar62;
                fStack_664 = fVar66;
                fStack_660 = fVar67;
                fStack_65c = fVar70;
              }
              local_618 = CONCAT44(fVar66,fVar62);
              uStack_610 = CONCAT44(fVar70,fVar67);
              FUN_142d98f90(&local_688,local_628,iVar19);
              iVar29 = iVar29 + 1;
              lVar22 = lVar22 + 4;
            } while (iVar29 < (int)puVar28[6]);
            iVar12 = (int)local_670;
          }
        }
        plVar1 = local_850;
        if (*(char *)((longlong)(int)puVar28[1] * 0x40 + *(longlong *)(param_1 + 0x1f8)) != '\0') {
          lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)(int)puVar28[1] * 8);
          uVar18 = P2UTransform(local_118,
                                (longlong)*(int *)(lVar24 + 0x38) * 0x60 + 0x30 +
                                *(longlong *)(*(longlong *)(lVar24 + 0x30) + 0x50));
          FUN_14162bfb0(lVar24,local_178,uVar18);
          FUN_14162bcf0(local_178,&local_1a8,param_1 + 0x700);
          lVar24 = FUN_140611730(local_7f8,*puVar28);
          auVar2 = SUB1612(*(undefined1 (*) [16])(lVar24 + 0x20),0);
          local_188._12_4_ = 0;
          local_188._0_12_ = auVar2;
          local_5c8 = *puVar28;
          local_5b8 = local_1a8;
          uStack_5b0 = uStack_1a0;
          local_5a8 = local_198;
          uStack_5a0 = uStack_190;
          local_598._12_4_ = 0;
          local_598._0_12_ = auVar2;
          iVar19 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar19 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar19 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_3,iVar19);
          }
          puVar28 = (undefined4 *)((longlong)iVar19 * 0x40 + *param_3);
          *puVar28 = local_5c8;
          *(undefined8 *)(puVar28 + 4) = local_5b8;
          *(undefined8 *)(puVar28 + 6) = uStack_5b0;
          puVar28[8] = (undefined4)local_5a8;
          puVar28[9] = local_5a8._4_4_;
          puVar28[10] = (undefined4)uStack_5a0;
          puVar28[0xb] = uStack_5a0._4_4_;
          *(undefined1 (*) [16])(puVar28 + 0xc) = local_598;
        }
        uVar31 = (ulonglong)(iVar12 + 1U);
        local_850 = plVar1 + 4;
        local_670 = uVar31;
      } while ((int)(iVar12 + 1U) < *(int *)(param_1 + 0x1d0));
    }
    AlgoImpl::
    IntroSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
              (*param_3,(longlong)(int)param_3[1],local_878[0],local_878);
  }
  return;
}



// FUNCTION 142da58d0 FUN_142da58d0 body=2597 status=ok
// SIG undefined FUN_142da58d0(void)

void FUN_142da58d0(longlong param_1,longlong param_2,char param_3)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_res20;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [40];
  undefined1 local_a0;
  ushort local_9e;
  undefined4 local_9c;
  ulonglong uVar15;
  
  if (param_3 != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar5 = FUN_1428dfc70();
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar12 = lVar6;
  if (lVar6 == 0) {
    return;
  }
  while (lVar12 != lVar5) {
    lVar12 = *(longlong *)(lVar12 + 0x30);
    if (lVar12 == 0) {
      return;
    }
  }
  if (lVar6 == 0) {
    return;
  }
  lVar6 = FUN_1429f11d0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (!bVar16) {
    return;
  }
  plVar8 = *(longlong **)(param_1 + 0x28);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar6 = plVar8[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar6 = plVar8[0x1f];
    if (lVar6 == 0) {
      return;
    }
  }
  bVar1 = *(byte *)(lVar6 + 0x92);
  iVar4 = FUN_142340f30(param_2);
  if ((bVar1 & 0x40) == 0) {
    bVar16 = iVar4 == 1;
  }
  else {
    bVar16 = iVar4 == 3;
  }
  if (bVar16) {
    return;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_c8);
  local_9e = local_9e | 2;
  uVar15 = 0;
  local_a0 = 1;
  local_9c = 0x40;
  uVar13 = uVar15;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar7 = FUN_1428dfc70();
    for (uVar2 = *(ulonglong *)(param_1 + 0x28);
        (uVar13 = uVar15, uVar2 != 0 && (uVar13 = *(ulonglong *)(param_1 + 0x28), uVar2 != uVar7));
        uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
    }
  }
  lVar6 = *(longlong *)(param_2 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_2);
  }
  plVar8 = (longlong *)FUN_142550d00(lVar6,uVar13,param_2 + 0x210,local_c8);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  if (0.0 < *(float *)(param_1 + 0xe8)) {
    (**(code **)(*plVar8 + 0x3a0))(plVar8);
  }
  plVar9 = (longlong *)AGameStateBase::OnRep_GameModeClass(plVar8,*(undefined8 *)(param_2 + 0x10));
  if (plVar9 != (longlong *)0x0) {
    lVar6 = FUN_1429f11d0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar16) {
      (**(code **)(*plVar9 + 0x500))(plVar9,2);
      lVar6 = FUN_1429bed90();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if (bVar16) {
        lVar6 = FUN_142a232e0();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if (bVar16) {
          (**(code **)(*plVar9 + 0x928))(plVar9,*(undefined8 *)(param_2 + 0x728));
        }
        else {
          lVar6 = FUN_142a07000();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if (bVar16) {
            (**(code **)(*plVar9 + 0x930))
                      (plVar9,*(undefined8 *)(param_2 + 0x718),
                       CONCAT71((int7)((ulonglong)(lVar6 + 0x88) >> 8),1));
          }
        }
        local_d8 = 0;
        local_d0 = 0;
        FUN_142ceec20(param_2,&local_d8);
        uVar13 = uVar15;
        if (0 < (int)(float)local_d0) {
          do {
            (**(code **)(*plVar9 + 0x568))(plVar9,uVar15,*(undefined8 *)(local_d8 + uVar13));
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
            uVar13 = uVar13 + 8;
          } while ((int)uVar14 < (int)(float)local_d0);
        }
        if (local_d8 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  plVar8 = (longlong *)plVar8[0x2d];
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar6 = FUN_1429f11d0();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (!bVar16) {
    return;
  }
  local_e0 = SUB164(*(undefined1 (*) [16])(param_2 + 0x230),8);
  local_d0 = CONCAT44(local_d0._4_4_,local_e0);
  local_d8 = SUB168(*(undefined1 (*) [16])(param_2 + 0x230),0);
  (**(code **)(*plVar8 + 0x3f8))(plVar8,&local_d8);
  bVar1 = *(byte *)(param_1 + 0x31);
  local_108 = 0;
  local_100 = 0.0;
  if (bVar1 < 2) {
    fVar23 = *(float *)(param_2 + 0x218);
    fVar19 = fVar23 + fVar23;
    fVar20 = -*(float *)(param_2 + 0x214);
    fVar20 = fVar20 + fVar20;
    local_100 = *(float *)(param_2 + 0x21c) * fVar20 + *(float *)(param_2 + 0x210) * fVar19;
    local_108 = CONCAT44(*(float *)(param_2 + 0x21c) * fVar19 - *(float *)(param_2 + 0x210) * fVar20
                         ,(*(float *)(param_2 + 0x214) * fVar20 - fVar23 * fVar19) + 1.0);
  }
  else if (bVar1 == 2) {
    fVar23 = *(float *)(param_2 + 0x210);
    fVar19 = fVar23 + fVar23;
    fVar20 = -*(float *)(param_2 + 0x218);
    fVar20 = fVar20 + fVar20;
    local_100 = *(float *)(param_2 + 0x21c) * fVar19 - *(float *)(param_2 + 0x214) * fVar20;
    local_108 = CONCAT44((*(float *)(param_2 + 0x218) * fVar20 - fVar23 * fVar19) + 1.0,
                         *(float *)(param_2 + 0x21c) * fVar20 + *(float *)(param_2 + 0x214) * fVar19
                        );
  }
  else if (bVar1 == 3) {
    fVar23 = *(float *)(param_2 + 0x214);
    fVar20 = -*(float *)(param_2 + 0x210);
    fVar20 = fVar20 + fVar20;
    fVar19 = fVar23 + fVar23;
    local_100 = (*(float *)(param_2 + 0x210) * fVar20 - fVar23 * fVar19) + 1.0;
    local_108 = CONCAT44(*(float *)(param_2 + 0x21c) * fVar20 + *(float *)(param_2 + 0x218) * fVar19
                         ,*(float *)(param_2 + 0x21c) * fVar19 -
                          *(float *)(param_2 + 0x218) * fVar20);
  }
  fVar23 = *(float *)(param_1 + 0x88);
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    fVar19 = *(float *)(param_1 + 0x8c);
    iVar4 = rand();
    fVar23 = (float)iVar4 * 3.051851e-05 * (fVar19 - fVar23) + fVar23;
  }
  local_res20 = 0;
  FUN_142da9940(param_1 + 0x38,&local_e8,&local_108,*(undefined8 *)(param_2 + 0x118),&local_res20,0)
  ;
  fVar19 = local_e8 * fVar23;
  fVar20 = local_e4 * fVar23;
  fVar23 = local_e0 * fVar23;
  local_d8 = CONCAT44(fVar20,fVar19);
  local_d0._0_4_ = fVar23;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    pfVar10 = (float *)(**(code **)(**(longlong **)(param_2 + 0x118) + 0x308))
                                 (*(longlong **)(param_2 + 0x118),&local_f8);
    local_d0._0_4_ = fVar23 + pfVar10[2];
    local_d8 = CONCAT44(fVar20 + pfVar10[1],fVar19 + *pfVar10);
  }
  local_res20 = 0;
  cVar3 = (**(code **)(*plVar8 + 0x400))(plVar8,0);
  if (cVar3 == '\0') {
    (**(code **)(*plVar8 + 0x5b8))(plVar8,1);
  }
  local_f0 = (float)local_d0;
  local_f8 = local_d8;
  (**(code **)(*plVar8 + 0x620))(plVar8,&local_f8,0);
  fVar23 = *(float *)(param_1 + 0xe0);
  if (fVar23 == 0.0) {
    if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
      return;
    }
    if (*(float *)(param_1 + 0xe4) == 0.0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x90) == '\0') {
    if (ABS(local_e0) < 0.9999) {
      fVar24 = local_e4 * DAT_1464aa7a0 - local_e0 * DAT_1464aa798._4_4_;
      fVar22 = local_e0 * (float)DAT_1464aa798 - local_e8 * DAT_1464aa7a0;
      fVar17 = fVar24 * fVar24;
      fVar18 = fVar22 * fVar22;
      fVar19 = (float)DAT_1464aa798;
      fVar20 = DAT_1464aa798._4_4_;
    }
    else {
      fVar24 = local_e4 * DAT_1464aa7b0 - local_e0 * DAT_1464aa7a8._4_4_;
      fVar18 = fVar24 * fVar24;
      fVar22 = local_e0 * (float)DAT_1464aa7a8 - local_e8 * DAT_1464aa7b0;
      fVar17 = fVar22 * fVar22;
      fVar19 = (float)DAT_1464aa7a8;
      fVar20 = DAT_1464aa7a8._4_4_;
    }
    local_d0._0_4_ = local_e8 * fVar20 - local_e4 * fVar19;
    fVar19 = fVar18 + fVar17 + (float)local_d0 * (float)local_d0;
    if (fVar19 != 1.0) {
      if (fVar19 < 1e-08) {
        local_f0 = DAT_1468b5d98;
        local_f8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_d8 = local_f8;
        local_d0._0_4_ = DAT_1468b5d98;
        goto LAB_142da61e8;
      }
      auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar20 = auVar21._0_4_;
      fVar20 = fVar20 + fVar20 * (0.5 - fVar19 * 0.5 * fVar20 * fVar20);
      fVar20 = fVar20 + fVar20 * (0.5 - fVar19 * 0.5 * fVar20 * fVar20);
      fVar24 = fVar24 * fVar20;
      fVar22 = fVar22 * fVar20;
      local_d0._0_4_ = (float)local_d0 * fVar20;
    }
    local_f8 = CONCAT44(fVar22,fVar24);
    local_d8 = local_f8;
    local_f0 = (float)local_d0;
  }
  else {
    local_res20 = 0;
    puVar11 = (undefined8 *)
              FUN_142da9940((char *)(param_1 + 0x90),&local_f8,&local_e8,
                            *(undefined8 *)(param_2 + 0x118),&local_res20,0);
    fVar23 = *(float *)(param_1 + 0xe0);
    local_d8 = *puVar11;
    local_d0._0_4_ = *(float *)(puVar11 + 1);
  }
LAB_142da61e8:
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    fVar19 = *(float *)(param_1 + 0xe4);
    iVar4 = rand();
    if (fVar19 <= fVar23) {
      fVar23 = (float)iVar4 * 3.051851e-05 * (fVar23 - fVar19) + fVar19;
    }
    else {
      fVar23 = (float)iVar4 * 3.051851e-05 * (fVar19 - fVar23) + fVar23;
    }
  }
  local_d8 = CONCAT44(local_d8._4_4_ * fVar23 * 0.017453292,(float)local_d8 * fVar23 * 0.017453292);
  local_d0 = CONCAT44(local_d0._4_4_,(float)local_d0 * fVar23 * 0.017453292);
  (**(code **)(*plVar8 + 0x778))(plVar8,&local_d8,0);
  return;
}



// FUNCTION 142da6300 FUN_142da6300 body=5394 status=ok
// SIG undefined FUN_142da6300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142da6300(longlong param_1,float param_2)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  float *pfVar18;
  longlong *plVar19;
  int *piVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  float fVar51;
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
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  undefined8 *local_400;
  undefined1 *local_3f8;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined8 local_3e0;
  float *local_3d8;
  undefined1 *local_3d0;
  undefined1 *local_3c8;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined4 local_350;
  float local_348;
  longlong *local_340;
  longlong *local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined4 local_318;
  longlong *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  longlong *local_288;
  undefined1 local_280 [24];
  undefined8 local_268;
  undefined8 uStack_260;
  int local_248;
  int iStack_244;
  int iStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  int iStack_22c;
  undefined8 local_228;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [28];
  undefined1 local_18c [28];
  undefined1 local_170 [40];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
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
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  if (*(char *)(param_1 + 0x340) != '\0') {
    *(undefined1 *)(param_1 + 0x340) = 0;
    *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) & 0x10;
    if (((*(longlong *)(param_1 + 0x338) != 0) &&
        (local_2f0 = *(longlong *)(param_1 + 0x330), local_2f0 != 0)) &&
       (*(longlong *)(local_2f0 + 0x718) != 0)) {
      local_2e8 = (longlong)*(int *)(local_2f0 + 0x76c) << 4;
      local_348 = param_2;
      FUN_142da2440();
      if (*(char *)(param_1 + 0x211) == '\x02') {
        FUN_142db8550(param_1);
      }
      plVar21 = (longlong *)0x0;
      plVar23 = plVar21;
      plVar19 = plVar21;
      if (0 < *(int *)(param_1 + 0x2f0)) {
        do {
          iVar24 = (int)plVar19;
          if (((-1 < iVar24) && (iVar24 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8))) &&
             ((lVar14 = *(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xbf0) +
                         (longlong)plVar23 * 8), lVar14 != 0 &&
              (lVar12 = FWeakObjectPtr::Get(lVar14 + 0x140), lVar12 != 0)))) {
            piVar20 = (int *)((longlong)plVar23 * 0x100 + *(longlong *)(param_1 + 0x2f8));
            cVar8 = FBodyInstance::IsValidBodyInstance(lVar14);
            if ((cVar8 != '\0') && (piVar20[0x1b] != 0)) {
              *(undefined1 *)(param_1 + 0x340) = 1;
              if ((*(char *)(lVar12 + 0x98) != '\x02') && ((*(byte *)(param_1 + 0x210) & 1) == 0)) {
                *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) | 1;
              }
              pcVar1 = (char *)(*(longlong *)(param_1 + 0x2d8) + (longlong)piVar20[9] * 0x18);
              lVar12 = FUN_142dab3f0(param_1,pcVar1);
              local_378._0_8_ = lVar12;
              if ((lVar12 != 0) &&
                 (local_288 = *(longlong **)(lVar12 + 8), local_288 != (longlong *)0x0)) {
                if (piVar20[0x1b] == 2) {
                  fVar54 = (float)piVar20[0x16];
                }
                else {
                  fVar54 = 0.0;
                }
                fVar54 = 1.0 - fVar54;
                if (fVar54 <= 0.0) {
                  fVar54 = 0.0;
                }
                if ((piVar20[1] == -1) && ((*(byte *)(piVar20 + 0xe) & 1) != 0)) {
LAB_142da6637:
                  fVar25 = 0.0;
                }
                else {
                  if (*pcVar1 == '\0') {
                    plVar15 = *(longlong **)(pcVar1 + 8);
                  }
                  else {
                    iVar10 = *(int *)(pcVar1 + 8);
                    plVar15 = plVar21;
                    if (((iVar10 != -1) && (-1 < iVar10)) &&
                       (iVar10 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xc08))) {
                      plVar15 = *(longlong **)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xc00) +
                                 (longlong)iVar10 * 8);
                    }
                  }
                  plVar15 = (longlong *)plVar15[1];
                  (**(code **)(*plVar15 + 0x158))(plVar15,&local_2a8);
                  local_310 = (longlong *)0x0;
                  local_340 = (longlong *)0x0;
                  (**(code **)(*plVar15 + 0x30))(plVar15,&local_310,&local_340);
                  if ((local_310 == (longlong *)0x0) || (local_340 == (longlong *)0x0))
                  goto LAB_142da6637;
                  (**(code **)(*local_310 + 0xa0))(local_310,&local_268);
                  (**(code **)(*local_340 + 0xa0))(local_340,local_368);
                  (**(code **)(*plVar15 + 0x40))(plVar15,&local_2d0,0);
                  (**(code **)(*plVar15 + 0x40))(plVar15,&local_330,1);
                  local_408 = &local_330;
                  fVar25 = (float)FUN_142d9eab0(&local_2a8,&local_268,local_368,&local_2d0);
                }
                lVar13 = (longlong)piVar20[9];
                lVar12 = *(longlong *)(param_1 + 0x2d8);
                if (*(char *)(lVar12 + lVar13 * 0x18) == '\0') {
                  plVar15 = *(longlong **)(lVar12 + 8 + lVar13 * 0x18);
                }
                else {
                  iVar10 = *(int *)(lVar12 + 8 + lVar13 * 0x18);
                  plVar15 = plVar21;
                  if (((iVar10 != -1) && (-1 < iVar10)) &&
                     (iVar10 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xc08))) {
                    plVar15 = *(longlong **)
                               (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xc00) +
                               (longlong)iVar10 * 8);
                  }
                }
                plVar15 = (longlong *)plVar15[1];
                (**(code **)(*plVar15 + 0x168))(plVar15,local_1e8,local_1f8);
                local_308 = (longlong *)0x0;
                local_300 = (longlong *)0x0;
                (**(code **)(*plVar15 + 0x30))(plVar15,&local_308,&local_300);
                if ((local_308 != (longlong *)0x0) && (local_300 != (longlong *)0x0)) {
                  plVar15 = plVar21;
                  if ((short)local_308[1] == 6) {
                    plVar15 = local_308;
                  }
                  plVar16 = plVar21;
                  if ((short)local_300[1] == 6) {
                    plVar16 = local_300;
                  }
                  (**(code **)(*plVar15 + 0x138))(plVar15,local_1d8);
                  (**(code **)(*plVar16 + 0x138))(plVar16,local_1c8);
                }
                local_228 = *(undefined8 *)(piVar20 + 0x14);
                iStack_22c = piVar20[0x13];
                local_248 = piVar20[0xc];
                iStack_244 = piVar20[0xd];
                iStack_240 = piVar20[0xe];
                fStack_23c = (1.0 / param_2) * fVar54;
                fStack_234 = (float)piVar20[0x11] * fStack_23c;
                fStack_23c = (float)piVar20[0xf] * fStack_23c;
                fVar54 = (1.0 - fVar25) * (1.0 / param_2) * fVar54;
                local_238 = (float)piVar20[0x10] * fVar54;
                fStack_230 = (float)piVar20[0x12] * fVar54;
                FUN_142db6eb0(param_1,local_378._0_8_,
                              *(longlong *)(param_1 + 0x2e8) + (longlong)iVar24 * 0x28,&local_248);
                if (((float)piVar20[0x19] <= fVar25 && fVar25 != (float)piVar20[0x19]) &&
                   ((*(byte *)(param_1 + 0x210) & 4) == 0)) {
                  *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) | 4;
                }
                FUN_142699720(lVar14,&local_2e0);
                if ((500.0 < local_2e0 * local_2e0 + local_2dc * local_2dc + local_2d8 * local_2d8)
                   && ((*(byte *)(param_1 + 0x210) & 2) == 0)) {
                  *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) | 2;
                }
                if (piVar20[0x1b] == 2) {
                  fVar54 = (float)piVar20[0x16];
                  if (((-1e-08 <= fVar54) && (fVar25 = (float)piVar20[0x17], 0.0 <= fVar25)) ||
                     ((fVar54 <= 1.0 && (fVar25 = (float)piVar20[0x17], fVar25 <= 0.0)))) {
                    piVar20[0x16] = (int)(fVar54 - param_2 * fVar25);
                  }
                  else if (fVar54 <= -1e-08) {
                    piVar20[0x16] = 0;
                  }
                  if ((*(byte *)(param_1 + 0x210) & 8) == 0) {
                    *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) | 8;
                  }
                }
                lVar14 = FUN_142697a40(lVar14);
                if (lVar14 != 0) {
                  if ((*(byte *)(piVar20 + 0xe) & 1) == 0) {
                    lVar14 = *(longlong *)(param_1 + 0x2d8);
                    cVar8 = *(char *)(lVar14 + (longlong)plVar23 * 0x18);
                    if (cVar8 == '\0') {
                      plVar15 = *(longlong **)(lVar14 + 8 + (longlong)plVar23 * 0x18);
                    }
                    else {
                      iVar10 = *(int *)(lVar14 + 8 + (longlong)plVar23 * 0x18);
                      plVar15 = plVar21;
                      if (((iVar10 != -1) && (-1 < iVar10)) &&
                         (iVar10 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xc08))) {
                        plVar15 = *(longlong **)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xc00) +
                                   (longlong)iVar10 * 8);
                      }
                    }
                    plVar15 = (longlong *)plVar15[1];
                    if (cVar8 == '\0') {
                      plVar16 = *(longlong **)(lVar14 + 0x10 + (longlong)plVar23 * 0x18);
                    }
                    else {
                      iVar10 = *(int *)(lVar14 + 0x10 + (longlong)plVar23 * 0x18);
                      plVar16 = plVar21;
                      if (iVar10 != -1) {
                        plVar16 = (longlong *)
                                  FUN_142697a40(*(undefined8 *)
                                                 (*(longlong *)
                                                   (*(longlong *)(param_1 + 0x330) + 0xbf0) +
                                                 (longlong)iVar10 * 8));
                      }
                    }
                    local_408 = &local_330;
                    FUN_142da0c70(param_1 + 0x2f8,plVar19,
                                  *(undefined8 *)(local_2e8 + 0x728 + local_2f0),
                                  *(longlong *)(param_1 + 0x330) + 0x210);
                    (**(code **)(*plVar16 + 0x1b0))(plVar16,&local_330);
                    local_358 = 0;
                    local_368._0_8_ = 0;
                    local_368._8_8_ = 0x3f80000000000000;
                    local_350 = 0;
                    (**(code **)(*plVar15 + 0x38))(plVar15,0,local_368);
                    local_358 = 0;
                    local_368 = ZEXT816(0x3f80000000000000) << 0x40;
                    local_350 = 0;
                    (**(code **)(*plVar15 + 0x38))(plVar15,1,local_368);
                  }
                  else {
                    lVar14 = *(longlong *)(param_1 + 0x2d8);
                    lVar12 = *(longlong *)(param_1 + 0x330);
                    lVar13 = *(longlong *)(lVar12 + 0x718);
                    if (*(char *)(lVar14 + (longlong)plVar23 * 0x18) == '\0') {
                      plVar19 = *(longlong **)(lVar14 + 8 + (longlong)plVar23 * 0x18);
                    }
                    else {
                      iVar10 = *(int *)(lVar14 + 8 + (longlong)plVar23 * 0x18);
                      plVar19 = plVar21;
                      if (((iVar10 != -1) && (-1 < iVar10)) && (iVar10 < *(int *)(lVar12 + 0xc08)))
                      {
                        plVar19 = *(longlong **)
                                   (*(longlong *)(lVar12 + 0xc00) + (longlong)iVar10 * 8);
                      }
                    }
                    plVar19 = (longlong *)plVar19[1];
                    (**(code **)(*plVar19 + 0x40))(plVar19,&local_2d0,0);
                    (**(code **)(*plVar19 + 0x40))(plVar19,&local_330,1);
                    local_2f8 = (longlong *)0x0;
                    local_338 = (longlong *)0x0;
                    (**(code **)(*plVar19 + 0x30))(plVar19,&local_2f8,&local_338);
                    if ((local_2f8 != (longlong *)0x0) && (local_338 != (longlong *)0x0)) {
                      (**(code **)(*local_2f8 + 0xa0))(local_2f8,&local_268);
                      (**(code **)(*local_338 + 0xa0))(local_338,local_368);
                      local_3c8 = local_280;
                      local_3d0 = local_1b8;
                      local_3e0 = *(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0xa88);
                      local_3d8 = &local_2a8;
                      local_3e8 = &local_330;
                      local_3f0 = &local_2d0;
                      local_3f8 = local_368;
                      local_400 = &local_268;
                      local_408 = (undefined8 *)CONCAT44(local_408._4_4_,iVar24);
                      FUN_142d9f000(*(longlong *)(param_1 + 0x338) + 0x68,lVar13 + 0x138,param_2,
                                    param_1 + 0x2f8);
                      (**(code **)(*plVar19 + 0x150))(plVar19,&local_2a8);
                      (**(code **)(*plVar19 + 0x160))(plVar19,local_280,local_280);
                    }
                  }
                  lVar12 = local_2e8;
                  lVar14 = local_2f0;
                  iVar10 = *piVar20;
                  if ((iVar10 != -1) && (*(char *)(param_1 + 0x1a8) != '\0')) {
                    fVar54 = 1.0;
                    if (piVar20[0x1b] == 4) {
                      fVar54 = (float)piVar20[0x3d] - param_2;
LAB_142da6b6d:
                      if (fVar54 <= 0.0) {
                        fVar54 = 0.0;
                      }
                    }
                    else if (piVar20[0x1b] == 2) {
                      fVar54 = 1.0 - (float)piVar20[0x16];
                      goto LAB_142da6b6d;
                    }
                    lVar13 = *(longlong *)(param_1 + 0x330);
                    lVar22 = *(longlong *)(local_2e8 + 0x728 + local_2f0);
                    local_148 = 0.0;
                    fStack_144 = 0.0;
                    fStack_140 = 0.0;
                    fStack_13c = fRam0000000146b342cc;
                    local_128 = (float)((uint)_DAT_146b342c0 & _DAT_146b342d0);
                    fStack_124 = (float)((uint)fRam0000000146b342c4 & uRam0000000146b342d4);
                    fStack_120 = (float)((uint)fRam0000000146b342c8 & uRam0000000146b342d8);
                    fStack_11c = (float)((uint)fRam0000000146b342cc & uRam0000000146b342dc);
                    pfVar18 = (float *)((longlong)piVar20[10] * 0x30 + lVar22);
                    _local_138 = ZEXT816(0);
                    auVar26 = *(undefined1 (*) [16])(lVar13 + 0x230);
                    fVar25 = auVar26._0_4_;
                    fVar3 = auVar26._4_4_;
                    fVar4 = auVar26._8_4_;
                    fVar5 = auVar26._12_4_;
                    local_2a8 = _DAT_146b34320;
                    fStack_2a4 = fRam0000000146b34324;
                    fStack_2a0 = fRam0000000146b34328;
                    fStack_29c = fRam0000000146b3432c;
                    local_378 = *(undefined1 (*) [16])(pfVar18 + 8);
                    fVar2 = local_378._0_4_;
                    fVar6 = local_378._12_4_;
                    fVar32 = local_378._4_4_;
                    fVar33 = local_378._8_4_;
                    auVar26 = minps(local_378,auVar26);
                    auVar27._4_4_ = -(uint)(auVar26._4_4_ < fRam0000000146b34324);
                    auVar27._0_4_ = -(uint)(auVar26._0_4_ < _DAT_146b34320);
                    auVar27._8_4_ = -(uint)(auVar26._8_4_ < fRam0000000146b34328);
                    auVar27._12_4_ = -(uint)(auVar26._12_4_ < fRam0000000146b3432c);
                    iVar9 = movmskps(piVar20[10],auVar27);
                    local_268 = _DAT_146b342b0;
                    uStack_260 = uRam0000000146b342b8;
                    if (iVar9 == 0) {
                      fVar43 = *(float *)(lVar13 + 0x210);
                      fVar44 = *(float *)(lVar13 + 0x214);
                      fVar45 = *(float *)(lVar13 + 0x218);
                      fVar36 = *(float *)(lVar13 + 0x21c);
                      fVar48 = *pfVar18;
                      fVar51 = pfVar18[1];
                      fVar29 = pfVar18[2];
                      fVar38 = pfVar18[3];
                      fVar39 = fVar25 * pfVar18[4];
                      fVar37 = fVar3 * pfVar18[5];
                      fVar34 = fVar4 * pfVar18[6];
                      fVar41 = fVar5 * pfVar18[7];
                      local_148 = fVar38 * fVar43 * _DAT_146b34300 + fVar48 * fVar36 +
                                  fVar44 * fVar29 * _DAT_146b342f0 +
                                  fVar45 * fVar51 * _DAT_146b342e0;
                      fStack_144 = fVar29 * fVar43 * fRam0000000146b34304 + fVar51 * fVar36 +
                                   fVar44 * fVar38 * fRam0000000146b342f4 +
                                   fVar45 * fVar48 * fRam0000000146b342e4;
                      fStack_140 = fVar51 * fVar43 * fRam0000000146b34308 + fVar29 * fVar36 +
                                   fVar44 * fVar48 * fRam0000000146b342f8 +
                                   fVar45 * fVar38 * fRam0000000146b342e8;
                      fStack_13c = fVar48 * fVar43 * fRam0000000146b3430c + fVar38 * fVar36 +
                                   fVar44 * fVar51 * fRam0000000146b342fc +
                                   fVar45 * fVar29 * fRam0000000146b342ec;
                      fVar48 = fVar34 * fVar44 - fVar37 * fVar45;
                      fVar51 = fVar39 * fVar45 - fVar34 * fVar43;
                      fVar29 = fVar37 * fVar43 - fVar39 * fVar44;
                      fVar38 = fVar41 * fVar36 - fVar41 * fVar36;
                      fVar48 = fVar48 + fVar48;
                      fVar51 = fVar51 + fVar51;
                      fVar29 = fVar29 + fVar29;
                      fVar38 = fVar38 + fVar38;
                      local_138._4_4_ =
                           (fVar48 * fVar45 - fVar29 * fVar43) + fVar51 * fVar36 + fVar37 +
                           *(float *)(lVar13 + 0x224);
                      local_138._0_4_ =
                           (fVar29 * fVar44 - fVar51 * fVar45) + fVar48 * fVar36 + fVar39 +
                           *(float *)(lVar13 + 0x220);
                      fStack_130 = (fVar51 * fVar43 - fVar48 * fVar44) + fVar29 * fVar36 + fVar34 +
                                   *(float *)(lVar13 + 0x228);
                      fStack_12c = (fVar38 * fVar36 - fVar38 * fVar36) + fVar38 * fVar36 + fVar41 +
                                   *(float *)(lVar13 + 0x22c);
                    }
                    else {
                      fVar43 = *(float *)(lVar13 + 0x220);
                      fVar44 = *(float *)(lVar13 + 0x224);
                      fVar45 = *(float *)(lVar13 + 0x228);
                      fVar36 = *(float *)(lVar13 + 0x210);
                      fVar48 = *(float *)(lVar13 + 0x214);
                      fVar51 = *(float *)(lVar13 + 0x218);
                      fVar29 = *(float *)(lVar13 + 0x21c);
                      fVar37 = fVar48 + fVar48;
                      fVar39 = fVar51 + fVar51;
                      fVar41 = (fVar36 + fVar36) * fVar36;
                      fVar38 = (fVar36 + fVar36) * fVar29;
                      fVar58 = (fVar39 * fVar29 + fVar37 * fVar36) * fVar25;
                      fVar60 = (fVar38 + fVar39 * fVar48) * fVar3;
                      fVar62 = (fVar37 * fVar29 + fVar39 * fVar36) * fVar4;
                      fVar46 = fVar3 * (fVar37 * fVar36 - fVar39 * fVar29);
                      fVar49 = fVar4 * (fVar39 * fVar48 - fVar38);
                      fVar52 = fVar25 * (fVar39 * fVar36 - fVar37 * fVar29);
                      fVar38 = (float)((uint)((_DAT_146b342c0 - (fVar39 * fVar51 + fVar37 * fVar48))
                                             * fVar25) & _DAT_146b342d0);
                      fVar39 = (float)((uint)((fRam0000000146b342c4 - (fVar39 * fVar51 + fVar41)) *
                                             fVar3) & uRam0000000146b342d4);
                      fVar34 = (float)((uint)((fRam0000000146b342c8 - (fVar37 * fVar48 + fVar41)) *
                                             fVar4) & uRam0000000146b342d8);
                      fVar35 = (float)((uint)((fRam0000000146b342cc - (fVar41 + fVar41)) * fVar5) &
                                      uRam0000000146b342dc);
                      fVar36 = *pfVar18;
                      fVar48 = pfVar18[1];
                      fVar51 = pfVar18[2];
                      fVar29 = pfVar18[3];
                      fVar41 = fVar48 + fVar48;
                      fVar40 = fVar51 + fVar51;
                      fVar42 = (fVar36 + fVar36) * fVar36;
                      fVar37 = (fVar36 + fVar36) * fVar29;
                      fVar55 = (fVar40 * fVar29 + fVar41 * fVar36) * fVar2;
                      fVar56 = (fVar37 + fVar40 * fVar48) * fVar32;
                      fVar57 = (fVar41 * fVar29 + fVar40 * fVar36) * fVar33;
                      fVar47 = fVar32 * (fVar41 * fVar36 - fVar40 * fVar29);
                      fVar50 = fVar33 * (fVar40 * fVar48 - fVar37);
                      fVar53 = fVar2 * (fVar40 * fVar36 - fVar41 * fVar29);
                      fVar29 = (float)((uint)((_DAT_146b342c0 - (fVar40 * fVar51 + fVar41 * fVar48))
                                             * fVar2) & _DAT_146b342d0);
                      fVar37 = (float)((uint)((fRam0000000146b342c4 - (fVar40 * fVar51 + fVar42)) *
                                             fVar32) & uRam0000000146b342d4);
                      fVar41 = (float)((uint)((fRam0000000146b342c8 - (fVar41 * fVar48 + fVar42)) *
                                             fVar33) & uRam0000000146b342d8);
                      fVar40 = (float)((uint)((fRam0000000146b342cc - (fVar42 + fVar42)) * fVar6) &
                                      uRam0000000146b342dc);
                      fVar36 = pfVar18[4];
                      fVar48 = pfVar18[5];
                      fVar51 = pfVar18[6];
                      local_3b8 = fVar55 * fVar46 + fVar29 * fVar38 + fVar53 * fVar62 +
                                  fVar40 * fVar43;
                      fStack_3b4 = fVar55 * fVar39 + fVar29 * fVar58 + fVar53 * fVar49 +
                                   fVar40 * fVar44;
                      fStack_3b0 = fVar55 * fVar60 + fVar29 * fVar52 + fVar53 * fVar34 +
                                   fVar40 * fVar45;
                      fStack_3ac = fVar55 * fVar35 + fVar29 * fVar35 + fVar53 * fVar35 +
                                   fVar40 * fRam0000000146b342cc;
                      local_3a8 = fVar37 * fVar46 + fVar47 * fVar38 + fVar56 * fVar62 +
                                  fVar40 * fVar43;
                      fStack_3a4 = fVar37 * fVar39 + fVar47 * fVar58 + fVar56 * fVar49 +
                                   fVar40 * fVar44;
                      fStack_3a0 = fVar37 * fVar60 + fVar47 * fVar52 + fVar56 * fVar34 +
                                   fVar40 * fVar45;
                      fStack_39c = fVar37 * fVar35 + fVar47 * fVar35 + fVar56 * fVar35 +
                                   fVar40 * fRam0000000146b342cc;
                      local_398 = fVar50 * fVar46 + fVar57 * fVar38 + fVar41 * fVar62 +
                                  fVar40 * fVar43;
                      fStack_394 = fVar50 * fVar39 + fVar57 * fVar58 + fVar41 * fVar49 +
                                   fVar40 * fVar44;
                      fStack_390 = fVar50 * fVar60 + fVar57 * fVar52 + fVar41 * fVar34 +
                                   fVar40 * fVar45;
                      fStack_38c = fVar50 * fVar35 + fVar57 * fVar35 + fVar41 * fVar35 +
                                   fVar40 * fRam0000000146b342cc;
                      local_388 = fVar48 * fVar46 + fVar36 * fVar38 + fVar51 * fVar62 +
                                  fRam0000000146b342cc * fVar43;
                      fStack_384 = fVar48 * fVar39 + fVar36 * fVar58 + fVar51 * fVar49 +
                                   fRam0000000146b342cc * fVar44;
                      fStack_380 = fVar48 * fVar60 + fVar36 * fVar52 + fVar51 * fVar34 +
                                   fRam0000000146b342cc * fVar45;
                      fStack_37c = fVar48 * fVar35 + fVar36 * fVar35 + fVar51 * fVar35 +
                                   fRam0000000146b342cc * fRam0000000146b342cc;
                      FMatrix::RemoveScaling(&local_3b8);
                      fVar43 = (float)(-(uint)(local_2a8 <= fVar25 * fVar2) &
                                       (_DAT_146b34310 ^ (uint)_DAT_146b342c0) ^ _DAT_146b34310);
                      fVar44 = (float)(-(uint)(fStack_2a4 <= fVar3 * fVar32) &
                                       (uRam0000000146b34314 ^ (uint)fRam0000000146b342c4) ^
                                      uRam0000000146b34314);
                      fVar45 = (float)(-(uint)(fStack_2a0 <= fVar4 * fVar33) &
                                       (uRam0000000146b34318 ^ (uint)fRam0000000146b342c8) ^
                                      uRam0000000146b34318);
                      local_3b8 = local_3b8 * fVar43;
                      fStack_3b4 = fStack_3b4 * fVar43;
                      fStack_3b0 = fStack_3b0 * fVar43;
                      fStack_3a4 = fStack_3a4 * fVar44;
                      fStack_3a0 = fStack_3a0 * fVar44;
                      local_3a8 = local_3a8 * fVar44;
                      fStack_394 = fStack_394 * fVar45;
                      fStack_390 = fStack_390 * fVar45;
                      local_398 = local_398 * fVar45;
                      FQuat::FQuat(&local_218,&local_3b8);
                      lVar13 = *(longlong *)(param_1 + 0x330);
                      iVar10 = *piVar20;
                      lVar22 = *(longlong *)(lVar12 + 0x728 + lVar14);
                      auVar30._0_4_ = local_218 * local_218 + fStack_210 * fStack_210;
                      auVar30._4_4_ = fStack_214 * fStack_214 + fStack_20c * fStack_20c;
                      auVar30._8_4_ = fStack_210 * fStack_210 + local_218 * local_218;
                      auVar30._12_4_ = fStack_20c * fStack_20c + fStack_214 * fStack_214;
                      fVar48 = auVar30._4_4_ + auVar30._0_4_;
                      fVar51 = auVar30._8_4_ + auVar30._4_4_;
                      fVar29 = auVar30._12_4_ + auVar30._8_4_;
                      fVar38 = auVar30._0_4_ + auVar30._12_4_;
                      auVar26._4_4_ = fVar51;
                      auVar26._0_4_ = fVar48;
                      auVar26._8_4_ = fVar29;
                      auVar26._12_4_ = fVar38;
                      auVar26 = rsqrtps(auVar30,auVar26);
                      fVar43 = auVar26._0_4_;
                      fVar44 = auVar26._4_4_;
                      fVar45 = auVar26._8_4_;
                      fVar36 = auVar26._12_4_;
                      fVar43 = ((float)local_268 - fVar43 * fVar43 * fVar48 * (float)local_268) *
                               fVar43 + fVar43;
                      fVar44 = (local_268._4_4_ - fVar44 * fVar44 * fVar51 * local_268._4_4_) *
                               fVar44 + fVar44;
                      fVar45 = ((float)uStack_260 - fVar45 * fVar45 * fVar29 * (float)uStack_260) *
                               fVar45 + fVar45;
                      fVar36 = (uStack_260._4_4_ - fVar36 * fVar36 * fVar38 * uStack_260._4_4_) *
                               fVar36 + fVar36;
                      local_138._4_4_ = fStack_384;
                      local_138._0_4_ = local_388;
                      fStack_130 = fStack_380;
                      local_218 = (float)(((uint)((((float)local_268 -
                                                   fVar43 * fVar43 * fVar48 * (float)local_268) *
                                                   fVar43 + fVar43) * local_218) ^ _DAT_146b342a0) &
                                          -(uint)(1e-08 <= fVar48) ^ _DAT_146b342a0);
                      fStack_214 = (float)(((uint)(((local_268._4_4_ -
                                                    fVar44 * fVar44 * fVar51 * local_268._4_4_) *
                                                    fVar44 + fVar44) * fStack_214) ^
                                           uRam0000000146b342a4) & -(uint)(1e-08 <= fVar51) ^
                                          uRam0000000146b342a4);
                      fStack_210 = (float)(((uint)((((float)uStack_260 -
                                                    fVar45 * fVar45 * fVar29 * (float)uStack_260) *
                                                    fVar45 + fVar45) * fStack_210) ^
                                           uRam0000000146b342a8) & -(uint)(1e-08 <= fVar29) ^
                                          uRam0000000146b342a8);
                      fStack_20c = (float)(((uint)(((uStack_260._4_4_ -
                                                    fVar36 * fVar36 * fVar38 * uStack_260._4_4_) *
                                                    fVar36 + fVar36) * fStack_20c) ^
                                           uRam0000000146b342ac) & -(uint)(1e-08 <= fVar38) ^
                                          uRam0000000146b342ac);
                      fStack_12c = 0.0;
                      local_148 = local_218;
                      fStack_144 = fStack_214;
                      fStack_140 = fStack_210;
                      fStack_13c = fStack_20c;
                    }
                    fVar45 = fRam0000000146b342c8;
                    fVar44 = fRam0000000146b342c4;
                    fVar43 = _DAT_146b342c0;
                    fStack_11c = fVar5 * fVar6;
                    fStack_120 = fVar4 * fVar33;
                    fStack_124 = fVar3 * fVar32;
                    local_128 = fVar25 * fVar2;
                    local_118 = 0.0;
                    fStack_114 = 0.0;
                    fStack_110 = 0.0;
                    fStack_10c = fRam0000000146b342cc;
                    local_108 = ZEXT816(0);
                    local_f8 = (float)((uint)_DAT_146b342c0 & _DAT_146b342d0);
                    fStack_f4 = (float)((uint)fRam0000000146b342c4 & uRam0000000146b342d4);
                    fStack_f0 = (float)((uint)fRam0000000146b342c8 & uRam0000000146b342d8);
                    fStack_ec = (float)((uint)fRam0000000146b342cc & uRam0000000146b342dc);
                    pfVar18 = (float *)((longlong)
                                        *(int *)((longlong)iVar10 * 0x100 + 0x28 +
                                                *(longlong *)(param_1 + 0x2f8)) * 0x30 + lVar22);
                    local_368 = *(undefined1 (*) [16])(lVar13 + 0x230);
                    fVar25 = local_368._0_4_;
                    fVar3 = local_368._4_4_;
                    fVar5 = local_368._8_4_;
                    fVar32 = local_368._12_4_;
                    local_378 = *(undefined1 (*) [16])(pfVar18 + 8);
                    fVar2 = local_378._0_4_;
                    fVar4 = local_378._4_4_;
                    fVar6 = local_378._8_4_;
                    fVar33 = local_378._12_4_;
                    auVar26 = minps(local_378,local_368);
                    auVar28._4_4_ = -(uint)(auVar26._4_4_ < fRam0000000146b34324);
                    auVar28._0_4_ = -(uint)(auVar26._0_4_ < _DAT_146b34320);
                    auVar28._8_4_ = -(uint)(auVar26._8_4_ < fRam0000000146b34328);
                    auVar28._12_4_ = -(uint)(auVar26._12_4_ < fRam0000000146b3432c);
                    iVar10 = movmskps((int)*(longlong *)(param_1 + 0x2f8),auVar28);
                    local_2a8 = _DAT_146b34320;
                    fStack_2a4 = fRam0000000146b34324;
                    fStack_2a0 = fRam0000000146b34328;
                    fStack_29c = fRam0000000146b3432c;
                    if (iVar10 == 0) {
                      fVar43 = *(float *)(lVar13 + 0x210);
                      fVar44 = *(float *)(lVar13 + 0x214);
                      fVar45 = *(float *)(lVar13 + 0x218);
                      fVar36 = *(float *)(lVar13 + 0x21c);
                      fVar48 = *pfVar18;
                      fVar51 = pfVar18[1];
                      fVar29 = pfVar18[2];
                      fVar38 = pfVar18[3];
                      fVar39 = fVar25 * pfVar18[4];
                      fVar37 = fVar3 * pfVar18[5];
                      fVar34 = fVar5 * pfVar18[6];
                      fVar41 = fVar32 * pfVar18[7];
                      local_118 = fVar38 * fVar43 * _DAT_146b34300 + fVar36 * fVar48 +
                                  fVar44 * fVar29 * _DAT_146b342f0 +
                                  fVar45 * fVar51 * _DAT_146b342e0;
                      fStack_114 = fVar29 * fVar43 * fRam0000000146b34304 + fVar36 * fVar51 +
                                   fVar44 * fVar38 * fRam0000000146b342f4 +
                                   fVar45 * fVar48 * fRam0000000146b342e4;
                      fStack_110 = fVar51 * fVar43 * fRam0000000146b34308 + fVar36 * fVar29 +
                                   fVar44 * fVar48 * fRam0000000146b342f8 +
                                   fVar45 * fVar38 * fRam0000000146b342e8;
                      fStack_10c = fVar48 * fVar43 * fRam0000000146b3430c + fVar36 * fVar38 +
                                   fVar44 * fVar51 * fRam0000000146b342fc +
                                   fVar45 * fVar29 * fRam0000000146b342ec;
                      fVar48 = fVar34 * fVar44 - fVar37 * fVar45;
                      fVar51 = fVar39 * fVar45 - fVar34 * fVar43;
                      fVar29 = fVar37 * fVar43 - fVar39 * fVar44;
                      fVar38 = fVar41 * fVar36 - fVar41 * fVar36;
                      fVar48 = fVar48 + fVar48;
                      fVar51 = fVar51 + fVar51;
                      fVar29 = fVar29 + fVar29;
                      fVar38 = fVar38 + fVar38;
                      local_108._0_4_ =
                           (fVar29 * fVar44 - fVar51 * fVar45) + fVar48 * fVar36 + fVar39 +
                           *(float *)(lVar13 + 0x220);
                      local_108._4_4_ =
                           (fVar48 * fVar45 - fVar29 * fVar43) + fVar51 * fVar36 + fVar37 +
                           *(float *)(lVar13 + 0x224);
                      local_108._8_4_ =
                           (fVar51 * fVar43 - fVar48 * fVar44) + fVar29 * fVar36 + fVar34 +
                           *(float *)(lVar13 + 0x228);
                      local_108._12_4_ =
                           (fVar38 * fVar36 - fVar38 * fVar36) + fVar38 * fVar36 + fVar41 +
                           *(float *)(lVar13 + 0x22c);
                    }
                    else {
                      fVar36 = *(float *)(lVar13 + 0x210);
                      fVar48 = *(float *)(lVar13 + 0x214);
                      fVar51 = *(float *)(lVar13 + 0x218);
                      fVar29 = *(float *)(lVar13 + 0x21c);
                      fVar38 = *(float *)(lVar13 + 0x220);
                      fVar39 = *(float *)(lVar13 + 0x224);
                      fVar37 = *(float *)(lVar13 + 0x228);
                      fVar46 = fVar48 + fVar48;
                      fVar47 = fVar51 + fVar51;
                      fVar49 = fVar36 * (fVar36 + fVar36);
                      fVar42 = (fVar36 + fVar36) * fVar29;
                      fVar34 = *pfVar18;
                      fVar41 = pfVar18[1];
                      fVar35 = pfVar18[2];
                      fVar40 = pfVar18[3];
                      fVar59 = (fVar47 * fVar29 + fVar46 * fVar36) * fVar25;
                      fVar61 = (fVar42 + fVar47 * fVar48) * fVar3;
                      fVar63 = (fVar46 * fVar29 + fVar47 * fVar36) * fVar5;
                      fVar50 = fVar3 * (fVar46 * fVar36 - fVar47 * fVar29);
                      fVar53 = fVar5 * (fVar47 * fVar48 - fVar42);
                      fVar56 = fVar25 * (fVar47 * fVar36 - fVar46 * fVar29);
                      fVar29 = (float)((uint)((_DAT_146b342c0 - (fVar51 * fVar47 + fVar48 * fVar46))
                                             * fVar25) & _DAT_146b342d0);
                      fVar42 = (float)((uint)((fRam0000000146b342c4 - (fVar51 * fVar47 + fVar49)) *
                                             fVar3) & uRam0000000146b342d4);
                      fVar46 = (float)((uint)((fRam0000000146b342c8 - (fVar48 * fVar46 + fVar49)) *
                                             fVar5) & uRam0000000146b342d8);
                      fVar47 = (float)((uint)((fRam0000000146b342cc - (fVar49 + fVar49)) * fVar32) &
                                      uRam0000000146b342dc);
                      fVar36 = fVar41 + fVar41;
                      fVar48 = fVar35 + fVar35;
                      fVar49 = (fVar34 + fVar34) * fVar34;
                      fVar51 = fVar40 * (fVar34 + fVar34);
                      fVar58 = (fVar40 * fVar48 + fVar34 * fVar36) * fVar2;
                      fVar60 = (fVar51 + fVar41 * fVar48) * fVar4;
                      fVar62 = (fVar40 * fVar36 + fVar34 * fVar48) * fVar6;
                      fVar52 = fVar4 * (fVar34 * fVar36 - fVar40 * fVar48);
                      fVar55 = fVar6 * (fVar41 * fVar48 - fVar51);
                      fVar57 = fVar2 * (fVar34 * fVar48 - fVar40 * fVar36);
                      fVar34 = (float)((uint)((_DAT_146b342c0 - (fVar48 * fVar35 + fVar36 * fVar41))
                                             * fVar2) & _DAT_146b342d0);
                      fVar35 = (float)((uint)((fRam0000000146b342c4 - (fVar48 * fVar35 + fVar49)) *
                                             fVar4) & uRam0000000146b342d4);
                      fVar41 = (float)((uint)((fRam0000000146b342c8 - (fVar36 * fVar41 + fVar49)) *
                                             fVar6) & uRam0000000146b342d8);
                      fVar40 = (float)((uint)((fRam0000000146b342cc - (fVar49 + fVar49)) * fVar33) &
                                      uRam0000000146b342dc);
                      fVar36 = pfVar18[4];
                      fVar48 = pfVar18[5];
                      fVar51 = pfVar18[6];
                      local_3b8 = fVar58 * fVar50 + fVar34 * fVar29 + fVar57 * fVar63 +
                                  fVar40 * fVar38;
                      fStack_3b4 = fVar58 * fVar42 + fVar34 * fVar59 + fVar57 * fVar53 +
                                   fVar40 * fVar39;
                      fStack_3b0 = fVar58 * fVar61 + fVar34 * fVar56 + fVar57 * fVar46 +
                                   fVar40 * fVar37;
                      fStack_3ac = fVar58 * fVar47 + fVar34 * fVar47 + fVar57 * fVar47 +
                                   fVar40 * fRam0000000146b342cc;
                      local_3a8 = fVar35 * fVar50 + fVar52 * fVar29 + fVar60 * fVar63 +
                                  fVar40 * fVar38;
                      fStack_3a4 = fVar35 * fVar42 + fVar52 * fVar59 + fVar60 * fVar53 +
                                   fVar40 * fVar39;
                      fStack_3a0 = fVar35 * fVar61 + fVar52 * fVar56 + fVar60 * fVar46 +
                                   fVar40 * fVar37;
                      fStack_39c = fVar35 * fVar47 + fVar52 * fVar47 + fVar60 * fVar47 +
                                   fVar40 * fRam0000000146b342cc;
                      local_398 = fVar55 * fVar50 + fVar62 * fVar29 + fVar41 * fVar63 +
                                  fVar40 * fVar38;
                      fStack_394 = fVar55 * fVar42 + fVar62 * fVar59 + fVar41 * fVar53 +
                                   fVar40 * fVar39;
                      fStack_390 = fVar55 * fVar61 + fVar62 * fVar56 + fVar41 * fVar46 +
                                   fVar40 * fVar37;
                      fStack_38c = fVar55 * fVar47 + fVar62 * fVar47 + fVar41 * fVar47 +
                                   fVar40 * fRam0000000146b342cc;
                      local_388 = fVar48 * fVar50 + fVar36 * fVar29 + fVar51 * fVar63 +
                                  fRam0000000146b342cc * fVar38;
                      fStack_384 = fVar48 * fVar42 + fVar36 * fVar59 + fVar51 * fVar53 +
                                   fRam0000000146b342cc * fVar39;
                      fStack_380 = fVar48 * fVar61 + fVar36 * fVar56 + fVar51 * fVar46 +
                                   fRam0000000146b342cc * fVar37;
                      fStack_37c = fVar48 * fVar47 + fVar36 * fVar47 + fVar51 * fVar47 +
                                   fRam0000000146b342cc * fRam0000000146b342cc;
                      FMatrix::RemoveScaling(&local_3b8);
                      fVar43 = (float)(-(uint)(local_2a8 <= fVar25 * fVar2) &
                                       (_DAT_146b34310 ^ (uint)fVar43) ^ _DAT_146b34310);
                      fVar44 = (float)(-(uint)(fStack_2a4 <= fVar3 * fVar4) &
                                       (uRam0000000146b34314 ^ (uint)fVar44) ^ uRam0000000146b34314)
                      ;
                      fVar45 = (float)(-(uint)(fStack_2a0 <= fVar5 * fVar6) &
                                       (uRam0000000146b34318 ^ (uint)fVar45) ^ uRam0000000146b34318)
                      ;
                      local_3b8 = local_3b8 * fVar43;
                      fStack_3b4 = fStack_3b4 * fVar43;
                      fStack_3b0 = fStack_3b0 * fVar43;
                      fStack_3a4 = fStack_3a4 * fVar44;
                      fStack_3a0 = fStack_3a0 * fVar44;
                      local_3a8 = local_3a8 * fVar44;
                      fStack_394 = fStack_394 * fVar45;
                      fStack_390 = fStack_390 * fVar45;
                      local_398 = local_398 * fVar45;
                      FQuat::FQuat(&local_208,&local_3b8);
                      local_378._0_4_ = 0x322bcc77;
                      auVar31._0_4_ = local_208 * local_208 + fStack_200 * fStack_200;
                      auVar31._4_4_ = fStack_204 * fStack_204 + fStack_1fc * fStack_1fc;
                      auVar31._8_4_ = fStack_200 * fStack_200 + local_208 * local_208;
                      auVar31._12_4_ = fStack_1fc * fStack_1fc + fStack_204 * fStack_204;
                      fVar48 = auVar31._4_4_ + auVar31._0_4_;
                      fVar51 = auVar31._8_4_ + auVar31._4_4_;
                      fVar29 = auVar31._12_4_ + auVar31._8_4_;
                      fVar38 = auVar31._0_4_ + auVar31._12_4_;
                      auVar7._4_4_ = fVar51;
                      auVar7._0_4_ = fVar48;
                      auVar7._8_4_ = fVar29;
                      auVar7._12_4_ = fVar38;
                      auVar26 = rsqrtps(auVar31,auVar7);
                      fVar43 = auVar26._0_4_;
                      fVar44 = auVar26._4_4_;
                      fVar45 = auVar26._8_4_;
                      fVar36 = auVar26._12_4_;
                      fVar43 = ((float)local_268 - fVar43 * fVar43 * fVar48 * (float)local_268) *
                               fVar43 + fVar43;
                      fVar44 = (local_268._4_4_ - fVar44 * fVar44 * fVar51 * local_268._4_4_) *
                               fVar44 + fVar44;
                      fVar45 = ((float)uStack_260 - fVar45 * fVar45 * fVar29 * (float)uStack_260) *
                               fVar45 + fVar45;
                      fVar36 = (uStack_260._4_4_ - fVar36 * fVar36 * fVar38 * uStack_260._4_4_) *
                               fVar36 + fVar36;
                      local_108._4_4_ = fStack_384;
                      local_108._0_4_ = local_388;
                      local_108._8_4_ = fStack_380;
                      local_208 = (float)(((uint)((((float)local_268 -
                                                   fVar43 * fVar43 * fVar48 * (float)local_268) *
                                                   fVar43 + fVar43) * local_208) ^ _DAT_146b342a0) &
                                          -(uint)(1e-08 <= fVar48) ^ _DAT_146b342a0);
                      fStack_204 = (float)(((uint)(((local_268._4_4_ -
                                                    fVar44 * fVar44 * fVar51 * local_268._4_4_) *
                                                    fVar44 + fVar44) * fStack_204) ^
                                           uRam0000000146b342a4) & -(uint)(1e-08 <= fVar51) ^
                                          uRam0000000146b342a4);
                      fStack_200 = (float)(((uint)((((float)uStack_260 -
                                                    fVar45 * fVar45 * fVar29 * (float)uStack_260) *
                                                    fVar45 + fVar45) * fStack_200) ^
                                           uRam0000000146b342a8) & -(uint)(1e-08 <= fVar29) ^
                                          uRam0000000146b342a8);
                      fStack_1fc = (float)(((uint)(((uStack_260._4_4_ -
                                                    fVar36 * fVar36 * fVar38 * uStack_260._4_4_) *
                                                    fVar36 + fVar36) * fStack_1fc) ^
                                           uRam0000000146b342ac) & -(uint)(1e-08 <= fVar38) ^
                                          uRam0000000146b342ac);
                      local_108._12_4_ = 0.0;
                      local_118 = local_208;
                      fStack_114 = fStack_204;
                      fStack_110 = fStack_200;
                      fStack_10c = fStack_1fc;
                    }
                    fStack_ec = fVar32 * fVar33;
                    fStack_f0 = fVar5 * fVar6;
                    fStack_f4 = fVar3 * fVar4;
                    local_f8 = fVar25 * fVar2;
                    local_2c0 = 0;
                    local_2d0 = 0;
                    uStack_2c8 = 0x3f80000000000000;
                    local_2b8 = 0;
                    local_330 = 0;
                    uStack_328 = 0x3f80000000000000;
                    local_320 = 0;
                    local_318 = 0;
                    puVar17 = (undefined8 *)U2PTransform(local_18c,&local_148);
                    local_408 = (undefined8 *)U2PTransform(local_170,&local_118);
                    piVar20[0x3d] = (int)fVar54;
                    local_400 = puVar17;
                    FUN_142da01f0(piVar20 + 0x2f,local_1a8,&local_330,&local_2d0);
                    (**(code **)(*local_288 + 0x38))(local_288,0,local_1a8);
                    param_2 = local_348;
                  }
                }
              }
            }
          }
          plVar23 = (longlong *)((longlong)plVar23 + 1);
          plVar19 = (longlong *)(ulonglong)(iVar24 + 1U);
        } while ((int)(iVar24 + 1U) < *(int *)(param_1 + 0x2f0));
      }
      if (*(longlong *)(param_1 + 0x330) != 0) {
        lVar14 = *(longlong *)(param_1 + 0x2f8);
        lVar12 = (longlong)*(int *)(param_1 + 0x300) * 0x100 + lVar14;
        plVar23 = plVar21;
        if (lVar14 != lVar12) {
          do {
            if (*(int *)(lVar14 + 0x6c) != 0) {
              iVar24 = *(int *)(lVar14 + 0x24);
              if ((((-1 < iVar24) && (iVar24 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8))) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xbf0) + (longlong)iVar24 * 8)
                   != 0)) &&
                 ((cVar8 = FBodyInstance::IsValidBodyInstance(), cVar8 != '\0' &&
                  (*(float *)(lVar14 + 0x58) < 1.0)))) {
                if (1e-08 < *(float *)(lVar14 + 0x58)) {
                  plVar23 = (longlong *)(ulonglong)((int)plVar23 + 1);
                }
                else {
                  uVar11 = (uint)plVar21 + 1;
                  if (*(float *)(lVar14 + 0x5c) < 1e-08) {
                    uVar11 = (uint)plVar21;
                  }
                  plVar21 = (longlong *)(ulonglong)uVar11;
                }
              }
            }
            lVar14 = lVar14 + 0x100;
          } while (lVar14 != lVar12);
          if ((int)plVar23 != 0) {
            return;
          }
          if ((int)plVar21 != 0) {
            return;
          }
        }
      }
      *(undefined1 *)(param_1 + 0x340) = 0;
    }
  }
  return;
}



// FUNCTION 142da7820 FUN_142da7820 body=472 status=ok
// SIG undefined FUN_142da7820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142da7820(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  int local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined ***local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined ***local_50;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar6 = *(longlong *)(param_1 + 0x5c0);
  if (lVar6 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x600);
    lVar5 = (longlong)*(int *)(param_1 + 0x608) * 0x100 + lVar3;
    if (lVar3 != lVar5) {
      do {
        *(undefined4 *)(lVar3 + 0x6c) = 0;
        lVar3 = lVar3 + 0x100;
      } while (lVar3 != lVar5);
      lVar6 = *(longlong *)(param_1 + 0x5c0);
    }
    plVar8 = *(longlong **)(lVar6 + 0x30);
    plVar9 = plVar8 + (longlong)*(int *)(lVar6 + 0x38) * 4;
    iVar1 = local_88[0];
    for (; plVar8 != plVar9; plVar8 = plVar8 + 4) {
      lVar6 = *plVar8;
      if (*(int *)(param_1 + 0x658) != *(int *)(param_1 + 0x684)) {
        lVar3 = *(longlong *)(param_1 + 0x690);
        if (*(longlong *)(param_1 + 0x690) == 0) {
          lVar3 = param_1 + 0x688;
        }
        iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                 (longlong)*(int *)(param_1 + 0x698) - 1U) * 4);
        if (iVar2 != -1) {
          do {
            piVar7 = (int *)(*(longlong *)(param_1 + 0x650) + (longlong)iVar2 * 0x18);
            if (*(longlong *)(*(longlong *)(param_1 + 0x650) + (longlong)iVar2 * 0x18) == lVar6) {
              if (iVar2 != -1) goto LAB_142da7934;
              break;
            }
            iVar2 = piVar7[4];
          } while (iVar2 != -1);
        }
      }
      piVar7 = (int *)0x0;
LAB_142da7934:
      piVar4 = piVar7 + 2;
      if (piVar7 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      local_88[0] = iVar1;
      if (piVar4 != (int *)0x0) {
        local_70 = &local_68;
        local_80._0_4_ = (undefined4)param_1;
        local_80._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_78._0_4_ = SUB84(plVar8,0);
        uStack_78._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
        local_30 = &local_68;
        local_50 = local_70;
        local_60 = (undefined4)local_80;
        uStack_5c = local_80._4_4_;
        uStack_58 = (undefined4)uStack_78;
        uStack_54 = uStack_78._4_4_;
        local_68 = &PTR_LAB_1458a5d60;
        local_88[0] = *piVar4;
        local_80 = param_1;
        uStack_78 = plVar8;
        if (local_88[0] != -1) {
          FUN_142dbfa40(&local_68,local_88);
          iVar1 = local_88[0];
        }
        local_88[0] = iVar1;
        if (local_30 != (undefined ***)0x0) {
          (*(code *)(*local_30)[4])
                    (local_30,CONCAT71((int7)((ulonglong)&local_68 >> 8),local_30 != &local_68));
        }
      }
      iVar1 = local_88[0];
    }
  }
  return;
}



// FUNCTION 142da7a00 FUN_142da7a00 body=525 status=ok
// SIG undefined FUN_142da7a00(void)

void FUN_142da7a00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (param_2 != 0) {
    plVar7 = *(longlong **)(param_2 + 0x40);
    plVar1 = plVar7 + *(int *)(param_2 + 0x48);
    if (plVar7 != plVar1) {
      plVar8 = (longlong *)0x0;
      do {
        lVar5 = *plVar7;
        if (*(char *)(lVar5 + 0x98) == '\x02') {
          plVar6 = *(longlong **)(lVar5 + 0x310);
          plVar9 = plVar6 + (longlong)*(int *)(lVar5 + 0x318) * 6;
          for (; (plVar10 = plVar8, plVar6 != plVar9 &&
                 (plVar10 = plVar6, *(longlong *)(param_1 + 0x5d0) != *plVar6)); plVar6 = plVar6 + 6
              ) {
          }
          lVar5 = *(longlong *)(lVar5 + 0x90);
          if (*(int *)(param_1 + 0x658) != *(int *)(param_1 + 0x684)) {
            lVar4 = *(longlong *)(param_1 + 0x690);
            if (*(longlong *)(param_1 + 0x690) == 0) {
              lVar4 = param_1 + 0x688;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                                     (longlong)*(int *)(param_1 + 0x698) - 1U) * 4);
            if (iVar3 != -1) {
              do {
                plVar6 = (longlong *)(*(longlong *)(param_1 + 0x650) + (longlong)iVar3 * 0x18);
                if (*(longlong *)(*(longlong *)(param_1 + 0x650) + (longlong)iVar3 * 0x18) == lVar5)
                {
                  if (iVar3 != -1) goto LAB_142da7b03;
                  break;
                }
                iVar3 = (int)plVar6[2];
              } while (iVar3 != -1);
            }
          }
          plVar6 = plVar8;
LAB_142da7b03:
          plVar9 = plVar6 + 1;
          if (plVar6 == (longlong *)0x0) {
            plVar9 = plVar8;
          }
          if ((plVar9 != (longlong *)0x0) && ((int)*plVar9 != -1)) {
            lVar5 = (longlong)(int)*plVar9 * 0x100 + *(longlong *)(param_1 + 0x600);
            if (plVar10 == (longlong *)0x0) {
              *(undefined4 *)(lVar5 + 0x4c) = 0;
              *(undefined4 *)
               ((longlong)(int)*plVar9 * 0x100 + 0x50 + *(longlong *)(param_1 + 0x600)) = 0;
              *(undefined4 *)
               ((longlong)(int)*plVar9 * 0x100 + 0x48 + *(longlong *)(param_1 + 0x600)) = 0;
              *(undefined4 *)
               ((longlong)(int)*plVar9 * 0x100 + 0x44 + *(longlong *)(param_1 + 0x600)) = 0;
              *(undefined4 *)
               ((longlong)(int)*plVar9 * 0x100 + 0x3c + *(longlong *)(param_1 + 0x600)) = 0;
              *(undefined4 *)
               ((longlong)(int)*plVar9 * 0x100 + 0x40 + *(longlong *)(param_1 + 0x600)) = 0;
              pbVar2 = (byte *)((longlong)(int)*plVar9 * 0x100 + 0x38 +
                               *(longlong *)(param_1 + 0x600));
              *pbVar2 = *pbVar2 | 1;
              *(undefined4 *)
               ((longlong)(int)*plVar9 * 0x100 + 0x6c + *(longlong *)(param_1 + 0x600)) = 0;
            }
            else {
              lVar4 = plVar10[2];
              *(longlong *)(lVar5 + 0x30) = plVar10[1];
              *(longlong *)(lVar5 + 0x38) = lVar4;
              lVar4 = plVar10[4];
              *(longlong *)(lVar5 + 0x40) = plVar10[3];
              *(longlong *)(lVar5 + 0x48) = lVar4;
              *(longlong *)(lVar5 + 0x50) = plVar10[5];
              *(undefined4 *)
               ((longlong)(int)*plVar9 * 0x100 + 0x6c + *(longlong *)(param_1 + 0x600)) = 3;
            }
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
  }
  return;
}



// FUNCTION 142da7c10 FUN_142da7c10 body=49 status=ok
// SIG undefined FUN_142da7c10(void)

longlong * FUN_142da7c10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x2f0);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x2f8) * 0xe;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 0xe) {
      if (*plVar1 == param_2) {
        return plVar1;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142da7c50 FUN_142da7c50 body=180 status=ok
// SIG undefined FUN_142da7c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142da7c50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_142d96c20(param_1,local_38,0);
    plVar3 = local_38;
    if (local_28 != (longlong *)0x0) {
      plVar3 = local_28;
    }
    plVar1 = plVar3 + (int)local_20;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x2e0) & 2) != 0)) {
        if (local_28 != (longlong *)0x0) {
          FMemory::Free(local_28);
        }
        return lVar2;
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return 0;
}



// FUNCTION 142da7d10 FUN_142da7d10 body=75 status=ok
// SIG undefined FUN_142da7d10(void)

longlong FUN_142da7d10(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x178);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x180) * 6;
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2))))
    break;
    plVar2 = plVar2 + 6;
  }
  return plVar2[2];
}



// FUNCTION 142da7d60 FUN_142da7d60 body=107 status=ok
// SIG undefined FUN_142da7d60(void)

longlong FUN_142da7d60(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x178);
  plVar2 = plVar1;
  while( true ) {
    if (plVar2 == plVar1 + (longlong)*(int *)(param_1 + 0x180) * 6) {
      return 0xffffffff;
    }
    if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2))))
    break;
    plVar2 = plVar2 + 6;
  }
  return ((longlong)plVar2 - (longlong)plVar1) / 0x30;
}



// FUNCTION 142da7dd0 FUN_142da7dd0 body=227 status=ok
// SIG undefined FUN_142da7dd0(void)

void FUN_142da7dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = FUN_142c1f5b0();
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_142df90a0();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    if (((int)(uint)*(byte *)(lVar5 + 0x48) < *(int *)(lVar3 + 0xd8)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xd0) + (ulonglong)*(byte *)(lVar5 + 0x48) * 8),
       lVar3 != 0)) {
      iVar2 = *(int *)(lVar3 + 0x188);
      *(int *)(lVar3 + 0x188) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x18c) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar3 + 0x180,iVar2);
      }
      lVar5 = *(longlong *)(lVar3 + 0x180);
      puVar1 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x18);
      *puVar1 = 0x100000000;
      puVar1[1] = param_2;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) = param_3;
      *(undefined4 *)(lVar3 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 142da7ec0 FUN_142da7ec0 body=1516 status=ok
// SIG undefined FUN_142da7ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142da7ec0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  void *_Src;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  longlong local_118 [2];
  undefined4 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  byte local_ef;
  code *local_e8;
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar4 = *param_4;
  local_138 = *(undefined4 *)(lVar4 + 0x20);
  uStack_134 = *(undefined4 *)(lVar4 + 0x24);
  uStack_130 = *(undefined4 *)(lVar4 + 0x28);
  uStack_12c = *(undefined4 *)(lVar4 + 0x2c);
  local_128 = *(float *)(lVar4 + 0x30);
  fStack_124 = *(float *)(lVar4 + 0x34);
  fStack_120 = *(float *)(lVar4 + 0x38);
  uStack_11c = *(undefined4 *)(lVar4 + 0x3c);
  local_178 = param_2;
  lVar4 = FUN_1426e1a80(param_2);
  local_190 = lVar4;
  lVar5 = FUN_1426e1a80(param_3);
  if (lVar4 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  fVar12 = local_128 * local_128 + fStack_124 * fStack_124 + fStack_120 * fStack_120;
  local_168 = (**(code **)(*param_1 + 0x148))(param_1);
  if (local_168 == 0) {
    return;
  }
  if (fVar12 <= *(float *)(param_1 + 5) * *(float *)(param_1 + 5)) {
    return;
  }
  lVar4 = param_1[8];
  if (lVar4 == 0) {
    plVar6 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
    lVar4 = plVar6[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar4 = plVar6[0x1f];
    }
    param_1[8] = lVar4;
  }
  local_170 = param_2 + 8;
  lVar7 = FWeakObjectPtr::Get(local_170);
  if (lVar7 != 0) {
    uVar8 = UDamageableInterface::GetPrivateStaticClass();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined4 *)(param_2 + 0x10));
      goto LAB_142da8109;
    }
  }
  lVar7 = FWeakObjectPtr::Get(param_3 + 8);
  if (lVar7 != 0) {
    uVar8 = UDamageableInterface::GetPrivateStaticClass();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined4 *)(param_3 + 0x10));
      goto LAB_142da8109;
    }
  }
  local_188 = FUN_142698570(local_190);
  local_180 = FUN_142698570();
  if (*(int *)(lVar4 + 0x80) != *(int *)(lVar4 + 0xac)) {
    iVar3 = FCrc::MemCrc32(&local_188,0x10);
    lVar7 = *(longlong *)(lVar4 + 0xb8);
    if (*(longlong *)(lVar4 + 0xb8) == 0) {
      lVar7 = lVar4 + 0xb0;
    }
    iVar3 = *(int *)(lVar7 + ((longlong)*(int *)(lVar4 + 0xc0) - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar7 = *(longlong *)(lVar4 + 0x78);
      do {
        lVar10 = (longlong)iVar3 * 0x20;
        if (((*(longlong *)(lVar10 + lVar7) == local_188) &&
            (*(longlong *)(lVar10 + 8 + lVar7) == local_180)) ||
           ((*(longlong *)(lVar10 + lVar7) == local_180 &&
            (*(longlong *)(lVar10 + 8 + lVar7) == local_188)))) {
          if ((iVar3 != -1) && (lVar7 = (longlong)iVar3 * 0x20 + lVar7, lVar7 != 0)) {
            lVar7 = *(longlong *)(lVar7 + 0x10);
            goto LAB_142da8109;
          }
          break;
        }
        iVar3 = *(int *)(lVar10 + 0x18 + lVar7);
      } while (iVar3 != -1);
    }
  }
  lVar7 = 0;
LAB_142da8109:
  local_ef = local_ef & 0xfe;
  local_98 = 0;
  uStack_90 = 0x3f80000000000000;
  local_78 = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_108 = (undefined4 *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0x40;
  local_b8 = (longlong *)0x0;
  local_a8 = 0;
  local_e8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_88 = 0x3f800000;
  local_84 = 0x3f800000;
  local_80 = 0;
  local_74 = 0x3f800000;
  if (*(void **)(lVar4 + 0x118) != (void *)0x0) {
    uStack_1b0 = 0;
    fVar12 = SQRT(fVar12);
    local_100 = 1;
    local_1b8 = *(void **)(lVar4 + 0x118);
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_108,0);
    uVar11 = (undefined4)((ulonglong)local_1a8 >> 0x20);
    *local_108 = (undefined4)local_1b8;
    local_108[1] = local_1b8._4_4_;
    local_108[2] = (undefined4)uStack_1b0;
    local_108[3] = uStack_1b0._4_4_;
    *(ulonglong *)(local_108 + 4) = CONCAT44(uVar11,fVar12);
    local_1a8 = CONCAT44(uVar11,fVar12);
  }
  if (lVar7 == 0) {
    lVar7 = FUN_142da9730(lVar4,CONCAT44(uStack_134,local_138));
    lVar10 = FUN_142da9730(lVar4,CONCAT44(uStack_12c,uStack_130));
    if ((((lVar7 != 0) && (*(char *)(lVar7 + 0x31a) != '\0')) ||
        ((lVar10 != 0 && (*(char *)(lVar10 + 0x31a) != '\0')))) &&
       (*(void **)(lVar4 + 0x120) != (void *)0x0)) {
      uStack_1b0 = 0;
      local_1b8 = *(void **)(lVar4 + 0x120);
      uVar11 = FUN_142dab3a0(local_190,lVar5);
      uVar2 = local_100;
      lVar4 = (longlong)(int)local_100;
      local_1a8 = CONCAT44(local_1a8._4_4_,uVar11);
      iVar3 = (int)local_100 + 1;
      local_100 = CONCAT44(local_100._4_4_,iVar3);
      if (local_100._4_4_ < iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_108,uVar2 & 0xffffffff);
      }
      puVar1 = local_108 + lVar4 * 6;
      *puVar1 = (undefined4)local_1b8;
      puVar1[1] = local_1b8._4_4_;
      puVar1[2] = (undefined4)uStack_1b0;
      puVar1[3] = uStack_1b0._4_4_;
      *(longlong *)(local_108 + lVar4 * 6 + 4) = local_1a8;
    }
    if (lVar7 != 0) {
      uVar8 = FWeakObjectPtr::Get(param_3 + 8);
      uVar9 = FWeakObjectPtr::Get(local_178);
      local_1c0 = local_118;
      local_1c8 = 0;
      FUN_142d6a870(lVar7,uVar9,param_4,uVar8);
    }
    if (lVar10 != 0) {
      iVar3 = (int)param_4[1];
      _Src = (void *)*param_4;
      local_1b8 = (void *)0x0;
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,iVar3);
      if (iVar3 == 0) {
        uStack_1b0 = 0;
      }
      else {
        TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(&local_1b8,iVar3,0);
        _guard_xfg_dispatch_icall_nop(local_1b8,_Src,(longlong)iVar3 << 6);
      }
      local_1a8 = param_4[2];
      local_1a0 = (undefined4)param_4[3];
      local_19c = *(undefined8 *)((longlong)param_4 + 0x1c);
      local_194 = *(undefined4 *)((longlong)param_4 + 0x24);
      FUN_1426ede30(&local_1b8);
      uVar8 = FWeakObjectPtr::Get(local_170);
      uVar9 = FWeakObjectPtr::Get(param_3);
      local_1c0 = local_118;
      local_1c8 = 0;
      FUN_142d6a870(lVar10,uVar9,&local_1b8,uVar8);
      if (local_1b8 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    if ((*(char *)(lVar7 + 0x31a) != '\0') && (*(void **)(lVar4 + 0x120) != (void *)0x0)) {
      uStack_1b0 = 0;
      local_1b8 = *(void **)(lVar4 + 0x120);
      uVar11 = FUN_142dab3a0(local_190,lVar5);
      uVar2 = local_100;
      lVar4 = (longlong)(int)local_100;
      local_1a8 = CONCAT44(local_1a8._4_4_,uVar11);
      iVar3 = (int)local_100 + 1;
      local_100 = CONCAT44(local_100._4_4_,iVar3);
      if (local_100._4_4_ < iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_108,uVar2 & 0xffffffff);
      }
      puVar1 = local_108 + lVar4 * 6;
      *puVar1 = (undefined4)local_1b8;
      puVar1[1] = local_1b8._4_4_;
      puVar1[2] = (undefined4)uStack_1b0;
      puVar1[3] = uStack_1b0._4_4_;
      *(longlong *)(local_108 + lVar4 * 6 + 4) = local_1a8;
    }
    uVar8 = FWeakObjectPtr::Get(param_3 + 8);
    uVar9 = FWeakObjectPtr::Get(param_2);
    local_1c0 = local_118;
    local_1c8 = 0;
    FUN_142d6a870(lVar7,uVar9,param_4,uVar8);
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(local_168 + 0x790);
  if (local_a8 != 0) {
    plVar6 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar6 = local_b8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_108 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142da84b0 FUN_142da84b0 body=1280 status=ok
// SIG undefined FUN_142da84b0(void)

void FUN_142da84b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 local_a8 [24];
  float local_90;
  undefined1 local_8c [8];
  float local_84;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined1 local_68;
  
  FRotator::Vector((longlong)param_2 + 0x1c,local_a8);
  local_res8 = 0;
  FUN_142da9940(param_1 + 0x40,&local_d8,local_a8,*param_2,&local_res8,0);
  uVar2 = *(uint *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x34);
  if ((uVar2 & 1) != 0) {
    fVar10 = *(float *)(param_1 + 0x38);
    iVar1 = rand();
    uVar2 = *(uint *)(param_1 + 0x30);
    fVar7 = (float)iVar1 * 3.051851e-05 * (fVar10 - fVar7) + fVar7;
  }
  local_b0 = local_d0 * fVar7;
  *(byte *)(param_3 + 3) = ~(byte)(uVar2 >> 2) & 1;
  *(ulonglong *)((longlong)param_3 + 0xc) = CONCAT44(fStack_d4 * fVar7,local_d8 * fVar7);
  *(float *)((longlong)param_3 + 0x14) = local_b0;
  if ((*(byte *)(param_1 + 0x30) & 0x20) != 0) {
    fVar7 = SQRT(*(float *)(param_2 + 5) * *(float *)(param_2 + 5) +
                 *(float *)((longlong)param_2 + 0x2c) * *(float *)((longlong)param_2 + 0x2c) +
                 *(float *)(param_2 + 6) * *(float *)(param_2 + 6));
    *(float *)((longlong)param_3 + 0xc) = fVar7 * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 2) = fVar7 * *(float *)(param_3 + 2);
    *(float *)((longlong)param_3 + 0x14) = fVar7 * *(float *)((longlong)param_3 + 0x14);
  }
  *param_3 = param_2[2];
  *(int *)(param_3 + 1) = (int)param_2[3];
  if (((*(byte *)(param_1 + 0x30) & 0x10) != 0) && (*param_2 != 0)) {
    FUN_14222da00(*param_2,1,&local_b8,&local_c8);
    fVar7 = local_c8 * *(float *)(param_1 + 0xe8);
    fStack_c4 = fStack_c4 * *(float *)(param_1 + 0xec);
    local_c0 = local_c0 * *(float *)(param_1 + 0xf0);
    _local_c8 = CONCAT44(fStack_c4,fVar7);
    if ((0.0001 < ABS(fVar7)) || ((0.0001 < ABS(fStack_c4) || (0.0001 < ABS(local_c0))))) {
      local_68 = 1;
      local_84 = local_c0 + local_b0;
      local_90 = local_b0 - local_c0;
      local_80 = CONCAT44(local_b4 - fStack_c4,local_b8 - fVar7);
      local_74 = CONCAT44(fStack_c4 + local_b4,fVar7 + local_b8);
      local_78 = local_90;
      local_6c = local_84;
      plVar3 = (longlong *)FMath::RandPointInBox(local_8c,&local_80);
      *param_3 = *plVar3;
      *(int *)(param_3 + 1) = (int)plVar3[1];
    }
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x90);
  if ((uVar2 & 2) != 0) {
    fVar10 = *(float *)(param_1 + 0x94);
    iVar1 = rand();
    uVar2 = *(uint *)(param_1 + 0x30);
    fVar7 = (float)iVar1 * 3.051851e-05 * (fVar10 - fVar7) + fVar7;
  }
  *(byte *)(param_3 + 5) = ~(byte)(uVar2 >> 3) & 1;
  if (fVar7 == 0.0) {
    *(ulonglong *)((longlong)param_3 + 0x1c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar7 = DAT_1468b5d98;
    goto LAB_142da8981;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (ABS(local_d0) < 0.9999) {
      fVar11 = fStack_d4 * DAT_1464aa7a0 - DAT_1464aa798._4_4_ * local_d0;
      fVar6 = (float)DAT_1464aa798;
      fVar8 = DAT_1464aa798._4_4_;
      fVar10 = DAT_1464aa7a0;
    }
    else {
      fVar11 = fStack_d4 * DAT_1464aa7b0 - DAT_1464aa7a8._4_4_ * local_d0;
      fVar6 = (float)DAT_1464aa7a8;
      fVar8 = DAT_1464aa7a8._4_4_;
      fVar10 = DAT_1464aa7b0;
    }
    fVar12 = fVar6 * local_d0 - local_d8 * fVar10;
    fVar10 = local_d8 * fVar8 - fStack_d4 * fVar6;
    fVar6 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar6 != 1.0) {
      if (fVar6 < 1e-08) {
        uVar5 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fVar10 = DAT_1468b5d98;
        goto LAB_142da8936;
      }
      auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
      fVar11 = fVar11 * fVar8;
      fVar12 = fVar12 * fVar8;
      fVar10 = fVar10 * fVar8;
    }
    uVar5 = CONCAT44(fVar12,fVar11);
  }
  else {
    local_res8 = 0;
    puVar4 = (undefined8 *)
             FUN_142da9940((char *)(param_1 + 0x98),local_8c,&local_d8,*param_2,&local_res8,0);
    uVar5 = *puVar4;
    fVar10 = *(float *)(puVar4 + 1);
  }
LAB_142da8936:
  local_c8 = (float)uVar5;
  fStack_c4 = (float)((ulonglong)uVar5 >> 0x20);
  *(ulonglong *)((longlong)param_3 + 0x1c) = CONCAT44(fStack_c4 * fVar7,local_c8 * fVar7);
  fVar7 = fVar10 * fVar7;
LAB_142da8981:
  *(float *)((longlong)param_3 + 0x24) = fVar7;
  return;
}



// FUNCTION 142da89b0 FUN_142da89b0 body=61 status=ok
// SIG undefined FUN_142da89b0(void)

undefined8 FUN_142da89b0(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      return *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0xd0);
    }
  }
  return 0;
}



// FUNCTION 142da89f0 FUN_142da89f0 body=329 status=ok
// SIG undefined FUN_142da89f0(void)

char FUN_142da89f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0x330) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2f8);
    iVar8 = 0;
    lVar9 = (longlong)*(int *)(param_1 + 0x300) * 0x100 + lVar4;
    iVar5 = iVar8;
    iVar7 = iVar8;
    if (lVar4 != lVar9) {
      do {
        iVar2 = iVar8;
        iVar6 = iVar5;
        if (*(int *)(lVar4 + 0x6c) != 0) {
          iVar1 = *(int *)(lVar4 + 0x24);
          if ((((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8))) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xbf0) + (longlong)iVar1 * 8) != 0))
             && (cVar3 = FBodyInstance::IsValidBodyInstance(), cVar3 != '\0')) {
            if (*(float *)(lVar4 + 0x58) < 1.0) {
              if (1e-08 < *(float *)(lVar4 + 0x58)) {
                iVar7 = iVar7 + 1;
              }
              else {
                iVar6 = iVar5 + 1;
                if (*(float *)(lVar4 + 0x5c) < 1e-08) {
                  iVar6 = iVar5;
                }
              }
            }
            else {
              iVar2 = iVar8 + 1;
              if (-1e-08 < *(float *)(lVar4 + 0x5c)) {
                iVar2 = iVar8;
              }
            }
          }
        }
        iVar8 = iVar2;
        lVar4 = lVar4 + 0x100;
        iVar5 = iVar6;
      } while (lVar4 != lVar9);
      if (iVar7 != 0) {
        return '\x03';
      }
      if (iVar6 != 0) {
        return (iVar8 != 0) + '\x01';
      }
    }
  }
  return '\0';
}



// FUNCTION 142da8b40 FUN_142da8b40 body=1696 status=ok
// SIG undefined FUN_142da8b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142da8b40(longlong param_1,float *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar24 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar2 = *(longlong *)(param_1 + 0x330);
  if (lVar2 == 0) {
    uVar11 = CONCAT44(fRam00000001468b5b7c,fRam00000001468b5b78);
    uVar12 = CONCAT44(fRam00000001468b5b84,_DAT_1468b5b80);
    uVar13 = CONCAT44(fRam00000001468b5b8c,fRam00000001468b5b88);
    *(ulonglong *)param_2 = CONCAT44(fRam00000001468b5b74,_DAT_1468b5b70);
    *(undefined8 *)(param_2 + 2) = uVar11;
    uVar11 = CONCAT44(fRam00000001468b5b9c,fRam00000001468b5b98);
    *(ulonglong *)(param_2 + 8) = CONCAT44(fRam00000001468b5b94,_DAT_1468b5b90);
    *(undefined8 *)(param_2 + 10) = uVar11;
    *(undefined8 *)(param_2 + 4) = uVar12;
    *(undefined8 *)(param_2 + 6) = uVar13;
    return param_2;
  }
  lVar3 = *(longlong *)(lVar2 + 0x718);
  iVar1 = *(int *)((longlong)param_3 * 0x100 + 0x28 + *(longlong *)(param_1 + 0x2f8));
  lVar4 = *(longlong *)(lVar3 + 0x158);
  iVar15 = *(int *)(lVar4 + 8 + (longlong)iVar1 * 0x10);
  fVar23 = _DAT_1468b5b70;
  fVar28 = fRam00000001468b5b74;
  fVar26 = fRam00000001468b5b78;
  fVar31 = fRam00000001468b5b7c;
  fVar43 = _DAT_1468b5b80;
  fVar45 = fRam00000001468b5b84;
  fVar47 = fRam00000001468b5b88;
  fVar41 = fRam00000001468b5b8c;
  fVar55 = _DAT_1468b5b90;
  fVar56 = fRam00000001468b5b94;
  fVar57 = fRam00000001468b5b98;
  fVar58 = fRam00000001468b5b9c;
  while (iVar15 != -1) {
    lVar17 = (longlong)iVar15;
    iVar14 = UPhysicsAsset::FindBodyIndex
                       (*(undefined8 *)(param_1 + 0x338),*(undefined8 *)(lVar4 + lVar17 * 0x10));
    fVar39 = fRam0000000146b34328;
    fVar38 = fRam0000000146b34324;
    fVar32 = _DAT_146b34320;
    fVar29 = fRam0000000146b342c8;
    fVar21 = fRam0000000146b342c4;
    fVar48 = _DAT_146b342c0;
    if ((iVar15 == iVar1) || (iVar14 != -1)) break;
    auVar18._4_4_ = fVar56;
    auVar18._0_4_ = fVar55;
    auVar18._8_4_ = fVar57;
    auVar18._12_4_ = fVar58;
    pfVar16 = (float *)(lVar17 * 0x30 + *(longlong *)(lVar2 + 0xa88));
    auVar19 = *(undefined1 (*) [16])(pfVar16 + 8);
    fVar5 = auVar19._0_4_;
    fVar6 = auVar19._4_4_;
    fVar7 = auVar19._8_4_;
    fVar8 = auVar19._12_4_;
    fVar22 = *pfVar16;
    fVar27 = pfVar16[1];
    fVar25 = pfVar16[2];
    fVar30 = pfVar16[3];
    auVar19 = minps(auVar18,auVar19);
    auVar20._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146b34324);
    auVar20._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146b34320);
    auVar20._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146b34328);
    auVar20._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146b3432c);
    iVar15 = movmskps(0xffffffff,auVar20);
    if (iVar15 == 0) {
      fVar38 = fVar22 * fVar28;
      fVar39 = fVar22 * fVar23;
      fVar43 = fVar5 * fVar43;
      fVar45 = fVar6 * fVar45;
      fVar47 = fVar7 * fVar47;
      fVar41 = fVar8 * fVar41;
      fVar29 = fVar27 * fVar23;
      fVar32 = fVar27 * fVar28;
      fVar48 = fVar25 * fVar23;
      fVar21 = fVar25 * fVar26;
      fVar23 = fVar22 * fVar31 * _DAT_146b34300 + fVar30 * fVar23 + fVar27 * fVar26 * _DAT_146b342f0
               + fVar25 * fVar28 * _DAT_146b342e0;
      fVar28 = fVar22 * fVar26 * fRam0000000146b34304 + fVar30 * fVar28 +
               fVar27 * fVar31 * fRam0000000146b342f4 + fVar48 * fRam0000000146b342e4;
      fVar26 = fVar38 * fRam0000000146b34308 + fVar30 * fVar26 + fVar29 * fRam0000000146b342f8 +
               fVar25 * fVar31 * fRam0000000146b342e8;
      fVar31 = fVar39 * fRam0000000146b3430c + fVar30 * fVar31 + fVar32 * fRam0000000146b342fc +
               fVar21 * fRam0000000146b342ec;
      fVar48 = fVar47 * fVar27 - fVar45 * fVar25;
      fVar21 = fVar43 * fVar25 - fVar47 * fVar22;
      fVar29 = fVar45 * fVar22 - fVar43 * fVar27;
      fVar32 = fVar41 * fVar30 - fVar41 * fVar30;
      fVar48 = fVar48 + fVar48;
      fVar21 = fVar21 + fVar21;
      fVar29 = fVar29 + fVar29;
      fVar32 = fVar32 + fVar32;
      fVar43 = (fVar29 * fVar27 - fVar21 * fVar25) + fVar30 * fVar48 + fVar43 + pfVar16[4];
      fVar45 = (fVar48 * fVar25 - fVar29 * fVar22) + fVar30 * fVar21 + fVar45 + pfVar16[5];
      fVar47 = (fVar21 * fVar22 - fVar48 * fVar27) + fVar30 * fVar29 + fVar47 + pfVar16[6];
      fVar41 = (fVar32 * fVar30 - fVar32 * fVar30) + fVar30 * fVar32 + fVar41 + pfVar16[7];
    }
    else {
      fVar33 = fVar27 + fVar27;
      fVar36 = fVar25 + fVar25;
      fVar41 = pfVar16[4];
      fVar9 = pfVar16[5];
      fVar10 = pfVar16[6];
      fVar40 = fVar22 * (fVar22 + fVar22);
      fVar34 = (fVar22 + fVar22) * fVar30;
      fVar35 = fVar28 + fVar28;
      fVar37 = fVar26 + fVar26;
      fVar52 = (fVar36 * fVar30 + fVar33 * fVar22) * fVar5;
      fVar53 = (fVar34 + fVar36 * fVar27) * fVar6;
      fVar54 = (fVar33 * fVar30 + fVar36 * fVar22) * fVar7;
      fVar42 = fVar6 * (fVar33 * fVar22 - fVar36 * fVar30);
      fVar44 = fVar7 * (fVar36 * fVar27 - fVar34);
      fVar46 = fVar5 * (fVar36 * fVar22 - fVar33 * fVar30);
      fVar34 = (fVar23 + fVar23) * fVar23;
      fVar22 = (float)((uint)((_DAT_146b342c0 - (fVar25 * fVar36 + fVar27 * fVar33)) * fVar5) &
                      _DAT_146b342d0);
      fVar25 = (float)((uint)((fRam0000000146b342c4 - (fVar25 * fVar36 + fVar40)) * fVar6) &
                      uRam0000000146b342d4);
      fVar27 = (float)((uint)((fRam0000000146b342c8 - (fVar27 * fVar33 + fVar40)) * fVar7) &
                      uRam0000000146b342d8);
      fVar30 = (float)((uint)((fRam0000000146b342cc - (fVar40 + fVar40)) * fVar8) &
                      uRam0000000146b342dc);
      fVar33 = (fVar23 + fVar23) * fVar31;
      fVar49 = (fVar37 * fVar31 + fVar35 * fVar23) * fVar55;
      fVar50 = (fVar33 + fVar37 * fVar28) * fVar56;
      fVar51 = (fVar35 * fVar31 + fVar37 * fVar23) * fVar57;
      fVar36 = fVar56 * (fVar35 * fVar23 - fVar37 * fVar31);
      fVar33 = fVar57 * (fVar37 * fVar28 - fVar33);
      fVar40 = fVar55 * (fVar37 * fVar23 - fVar35 * fVar31);
      fVar23 = (float)((uint)((_DAT_146b342c0 - (fVar37 * fVar26 + fVar35 * fVar28)) * fVar55) &
                      _DAT_146b342d0);
      fVar26 = (float)((uint)((fRam0000000146b342c4 - (fVar37 * fVar26 + fVar34)) * fVar56) &
                      uRam0000000146b342d4);
      fVar28 = (float)((uint)((fRam0000000146b342c8 - (fVar35 * fVar28 + fVar34)) * fVar57) &
                      uRam0000000146b342d8);
      fVar31 = (float)((uint)((fRam0000000146b342cc - (fVar34 + fVar34)) * fVar58) &
                      uRam0000000146b342dc);
      local_118 = fVar49 * fVar42 + fVar23 * fVar22 + fVar40 * fVar54 + fVar31 * fVar41;
      fStack_114 = fVar49 * fVar25 + fVar23 * fVar52 + fVar40 * fVar44 + fVar31 * fVar9;
      fStack_110 = fVar49 * fVar53 + fVar23 * fVar46 + fVar40 * fVar27 + fVar31 * fVar10;
      fStack_10c = fVar49 * fVar30 + fVar23 * fVar30 + fVar40 * fVar30 +
                   fVar31 * fRam0000000146b342cc;
      local_108 = fVar26 * fVar42 + fVar36 * fVar22 + fVar50 * fVar54 + fVar31 * fVar41;
      fStack_104 = fVar26 * fVar25 + fVar36 * fVar52 + fVar50 * fVar44 + fVar31 * fVar9;
      fStack_100 = fVar26 * fVar53 + fVar36 * fVar46 + fVar50 * fVar27 + fVar31 * fVar10;
      fStack_fc = fVar26 * fVar30 + fVar36 * fVar30 + fVar50 * fVar30 +
                  fVar31 * fRam0000000146b342cc;
      local_f8 = fVar33 * fVar42 + fVar51 * fVar22 + fVar28 * fVar54 + fVar31 * fVar41;
      fStack_f4 = fVar33 * fVar25 + fVar51 * fVar52 + fVar28 * fVar44 + fVar31 * fVar9;
      fStack_f0 = fVar33 * fVar53 + fVar51 * fVar46 + fVar28 * fVar27 + fVar31 * fVar10;
      fStack_ec = fVar33 * fVar30 + fVar51 * fVar30 + fVar28 * fVar30 +
                  fVar31 * fRam0000000146b342cc;
      local_e8 = fVar45 * fVar42 + fVar43 * fVar22 + fVar47 * fVar54 + fRam0000000146b342cc * fVar41
      ;
      fStack_e4 = fVar45 * fVar25 + fVar43 * fVar52 + fVar47 * fVar44 + fRam0000000146b342cc * fVar9
      ;
      fStack_e0 = fVar45 * fVar53 + fVar43 * fVar46 + fVar47 * fVar27 +
                  fRam0000000146b342cc * fVar10;
      fStack_dc = fVar45 * fVar30 + fVar43 * fVar30 + fVar47 * fVar30 +
                  fRam0000000146b342cc * fRam0000000146b342cc;
      FMatrix::RemoveScaling(&local_118);
      fVar23 = (float)(-(uint)(fVar32 <= fVar5 * fVar55) & (_DAT_146b34310 ^ (uint)fVar48) ^
                      _DAT_146b34310);
      fVar28 = (float)(-(uint)(fVar38 <= fVar6 * fVar56) & (uRam0000000146b34314 ^ (uint)fVar21) ^
                      uRam0000000146b34314);
      fVar26 = (float)(-(uint)(fVar39 <= fVar7 * fVar57) & (uRam0000000146b34318 ^ (uint)fVar29) ^
                      uRam0000000146b34318);
      local_118 = local_118 * fVar23;
      fStack_114 = fStack_114 * fVar23;
      fStack_110 = fStack_110 * fVar23;
      fStack_104 = fStack_104 * fVar28;
      fStack_100 = fStack_100 * fVar28;
      local_108 = local_108 * fVar28;
      fStack_f4 = fStack_f4 * fVar26;
      fStack_f0 = fStack_f0 * fVar26;
      local_f8 = local_f8 * fVar26;
      FQuat::FQuat(&local_128,&local_118);
      auVar24._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
      auVar24._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
      auVar24._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
      auVar24._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
      fVar43 = auVar24._4_4_ + auVar24._0_4_;
      fVar45 = auVar24._8_4_ + auVar24._4_4_;
      fVar47 = auVar24._12_4_ + auVar24._8_4_;
      fVar48 = auVar24._0_4_ + auVar24._12_4_;
      auVar19._4_4_ = fVar45;
      auVar19._0_4_ = fVar43;
      auVar19._8_4_ = fVar47;
      auVar19._12_4_ = fVar48;
      auVar19 = rsqrtps(auVar24,auVar19);
      fVar23 = auVar19._0_4_;
      fVar28 = auVar19._4_4_;
      fVar26 = auVar19._8_4_;
      fVar31 = auVar19._12_4_;
      fVar23 = (_DAT_146b342b0 - fVar23 * fVar23 * fVar43 * _DAT_146b342b0) * fVar23 + fVar23;
      fVar28 = (fRam0000000146b342b4 - fVar28 * fVar28 * fVar45 * fRam0000000146b342b4) * fVar28 +
               fVar28;
      fVar26 = (fRam0000000146b342b8 - fVar26 * fVar26 * fVar47 * fRam0000000146b342b8) * fVar26 +
               fVar26;
      fVar31 = (fRam0000000146b342bc - fVar31 * fVar31 * fVar48 * fRam0000000146b342bc) * fVar31 +
               fVar31;
      fVar41 = 0.0;
      fVar23 = (float)(((uint)(((_DAT_146b342b0 - fVar23 * fVar23 * fVar43 * _DAT_146b342b0) *
                                fVar23 + fVar23) * local_128) ^ _DAT_146b342a0) &
                       -(uint)(1e-08 <= fVar43) ^ _DAT_146b342a0);
      fVar28 = (float)(((uint)(((fRam0000000146b342b4 -
                                fVar28 * fVar28 * fVar45 * fRam0000000146b342b4) * fVar28 + fVar28)
                              * fStack_124) ^ uRam0000000146b342a4) & -(uint)(1e-08 <= fVar45) ^
                      uRam0000000146b342a4);
      fVar26 = (float)(((uint)(((fRam0000000146b342b8 -
                                fVar26 * fVar26 * fVar47 * fRam0000000146b342b8) * fVar26 + fVar26)
                              * fStack_120) ^ uRam0000000146b342a8) & -(uint)(1e-08 <= fVar47) ^
                      uRam0000000146b342a8);
      fVar31 = (float)(((uint)(((fRam0000000146b342bc -
                                fVar31 * fVar31 * fVar48 * fRam0000000146b342bc) * fVar31 + fVar31)
                              * fStack_11c) ^ uRam0000000146b342ac) & -(uint)(1e-08 <= fVar48) ^
                      uRam0000000146b342ac);
      fVar43 = local_e8;
      fVar45 = fStack_e4;
      fVar47 = fStack_e0;
      local_128 = fVar23;
      fStack_124 = fVar28;
      fStack_120 = fVar26;
      fStack_11c = fVar31;
    }
    fVar58 = fVar8 * fVar58;
    fVar57 = fVar7 * fVar57;
    fVar56 = fVar6 * fVar56;
    fVar55 = fVar5 * fVar55;
    lVar4 = *(longlong *)(lVar3 + 0x158);
    iVar15 = *(int *)(lVar4 + 8 + lVar17 * 0x10);
  }
  *param_2 = fVar23;
  param_2[1] = fVar28;
  param_2[2] = fVar26;
  param_2[3] = fVar31;
  param_2[4] = fVar43;
  param_2[5] = fVar45;
  param_2[6] = fVar47;
  param_2[7] = fVar41;
  param_2[8] = fVar55;
  param_2[9] = fVar56;
  param_2[10] = fVar57;
  param_2[0xb] = fVar58;
  return param_2;
}



// FUNCTION 142da91e0 FUN_142da91e0 body=58 status=ok
// SIG undefined FUN_142da91e0(void)

undefined4 FUN_142da91e0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  lVar2 = (longlong)*(int *)(param_1 + 0x300) * 0x100 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0xffffffff;
    }
    if (*(int *)(lVar1 + 0x28) == param_2) break;
    lVar1 = lVar1 + 0x100;
  }
  return *(undefined4 *)(lVar1 + 0x24);
}



// FUNCTION 142da9220 FUN_142da9220 body=20 status=ok
// SIG undefined FUN_142da9220(void)

undefined4 FUN_142da9220(longlong param_1,int param_2)

{
  return *(undefined4 *)((longlong)param_2 * 0x100 + 0x28 + *(longlong *)(param_1 + 0x2f8));
}



// FUNCTION 142da9240 FUN_142da9240 body=250 status=ok
// SIG undefined FUN_142da9240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142da9240(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 local_60;
  float fStack_58;
  uint local_48;
  
  if (param_3 == 0) {
    fVar4 = (float)_DAT_1468b5d90;
    fVar3 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
    local_60 = _DAT_1468b5d90;
    fStack_58 = DAT_1468b5d98;
    local_48 = local_48 & 0xffffff00;
    fVar1 = DAT_1468b5d98;
  }
  else {
    pfVar2 = (float *)UStaticMesh::GetBounds(param_3,&local_60);
    fVar4 = *pfVar2 + pfVar2[3];
    fStack_58 = pfVar2[2] - pfVar2[5];
    fVar3 = pfVar2[1] + pfVar2[4];
    local_60 = CONCAT44(pfVar2[1] - pfVar2[4],*pfVar2 - pfVar2[3]);
    local_48 = CONCAT31(local_48._1_3_,1);
    fVar1 = pfVar2[2] + pfVar2[5];
  }
  *param_2 = local_60;
  param_2[1] = CONCAT44(fVar4,fStack_58);
  param_2[2] = CONCAT44(fVar1,fVar3);
  *(uint *)(param_2 + 3) = local_48;
  return param_2;
}



// FUNCTION 142da9340 FUN_142da9340 body=355 status=ok
// SIG undefined FUN_142da9340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142da9340(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_38;
  float local_30;
  
  fVar1 = DAT_1468b5d98;
  if ((*(longlong *)(param_3 + 0x220) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x220) + 0x4d0), lVar4 != 0)) {
    uVar7 = *(uint *)(lVar4 + 0x230) & _DAT_146b34350;
    uVar8 = *(uint *)(lVar4 + 0x234) & uRam0000000146b34354;
    uVar9 = *(uint *)(lVar4 + 0x238) & uRam0000000146b34358;
    uVar10 = *(uint *)(lVar4 + 0x23c) & uRam0000000146b3435c;
    auVar12._4_4_ = uVar8;
    auVar12._0_4_ = uVar7;
    auVar12._8_4_ = uVar9;
    auVar12._12_4_ = uVar10;
    auVar13._4_4_ = uVar9;
    auVar13._0_4_ = uVar8;
    auVar13._8_4_ = uVar7;
    auVar13._12_4_ = uVar10;
    auVar13 = minps(auVar12,auVar13);
    auVar5._4_4_ = uVar7;
    auVar5._0_4_ = uVar9;
    auVar5._8_4_ = uVar8;
    auVar5._12_4_ = uVar10;
    auVar13 = minps(auVar13,auVar5);
    fVar1 = *(float *)(lVar4 + 0x710);
    if (*(longlong *)(param_3 + 0x1188) == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)(*(longlong *)(param_3 + 0x1188) + 0x4c);
    }
    fVar11 = fVar11 + *(float *)(param_1 + 0xa4);
    pfVar6 = (float *)FUN_142dab710(param_1 + -0x458,&local_38);
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    lVar4 = *(longlong *)(param_1 + -0x2f0);
    if (lVar4 == 0) {
      local_38 = _DAT_1468b5d90;
      local_30 = DAT_1468b5d98;
    }
    else {
      local_38 = *(undefined8 *)(lVar4 + 0x220);
      local_30 = *(float *)(lVar4 + 0x228);
    }
    *param_2 = fVar11 * *pfVar6 + (float)local_38;
    param_2[1] = fVar11 * fVar2 + (float)((ulonglong)local_38 >> 0x20);
    param_2[2] = fVar11 * fVar3 + local_30 + auVar13._0_4_ * fVar1;
    return param_2;
  }
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  param_2[2] = fVar1;
  return param_2;
}



// FUNCTION 142da94b0 FUN_142da94b0 body=288 status=ok
// SIG undefined FUN_142da94b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142da94b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  fVar10 = DAT_1468b5d98;
  if ((*(longlong *)(param_3 + 0x220) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x220) + 0x4d0), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + -0x2f0);
    if (lVar2 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_28 = *(undefined8 *)(lVar2 + 0x220);
      local_20 = *(float *)(lVar2 + 0x228);
    }
    local_10 = local_20;
    local_18 = local_28;
    if (*(longlong *)(param_3 + 0x1188) == 0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(*(longlong *)(param_3 + 0x1188) + 0x54);
    }
    uVar4 = *(uint *)(lVar1 + 0x230) & _DAT_146b34350;
    uVar5 = *(uint *)(lVar1 + 0x234) & uRam0000000146b34354;
    uVar6 = *(uint *)(lVar1 + 0x238) & uRam0000000146b34358;
    uVar7 = *(uint *)(lVar1 + 0x23c) & uRam0000000146b3435c;
    auVar8._4_4_ = uVar5;
    auVar8._0_4_ = uVar4;
    auVar8._8_4_ = uVar6;
    auVar8._12_4_ = uVar7;
    auVar9._4_4_ = uVar6;
    auVar9._0_4_ = uVar5;
    auVar9._8_4_ = uVar4;
    auVar9._12_4_ = uVar7;
    auVar9 = minps(auVar8,auVar9);
    auVar3._4_4_ = uVar4;
    auVar3._0_4_ = uVar6;
    auVar3._8_4_ = uVar5;
    auVar3._12_4_ = uVar7;
    auVar9 = minps(auVar9,auVar3);
    FUN_142dab9e0(param_1 + -0x458,&local_18,
                  (local_20 - auVar9._0_4_ * *(float *)(lVar1 + 0x710)) + fVar10);
    *param_2 = local_18;
    *(float *)(param_2 + 1) = local_10;
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(float *)(param_2 + 1) = fVar10;
  return param_2;
}



// FUNCTION 142da95d0 FUN_142da95d0 body=318 status=ok
// SIG undefined FUN_142da95d0(void)

float * FUN_142da95d0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined4 in_EAX;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50 [24];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  lVar5 = *(longlong *)(param_1 + -0x2f0);
  if (lVar5 == 0) {
    uVar10 = (undefined4)DAT_1468b5da0;
    uVar11 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_54 = DAT_1468b5da8;
  }
  else {
    local_38 = *(float *)(lVar5 + 0x210);
    fStack_34 = *(float *)(lVar5 + 0x214);
    fStack_30 = *(float *)(lVar5 + 0x218);
    fStack_2c = *(float *)(lVar5 + 0x21c);
    auVar6._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_34);
    auVar6._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_38);
    auVar6._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_30);
    auVar6._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_2c);
    iVar7 = movmskps(in_EAX,auVar6);
    if (iVar7 != 0) {
      *(float *)(lVar5 + 0x250) = local_38;
      *(float *)(lVar5 + 0x254) = fStack_34;
      *(float *)(lVar5 + 600) = fStack_30;
      *(float *)(lVar5 + 0x25c) = fStack_2c;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_38,local_50);
      *(undefined8 *)(lVar5 + 0x260) = *puVar8;
      *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    uVar10 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
    local_54 = *(undefined4 *)(lVar5 + 0x268);
  }
  local_5c = CONCAT44(uVar11,uVar10);
  pfVar9 = (float *)FRotator::Quaternion(&local_5c,local_28);
  fVar13 = -*pfVar9 + -*pfVar9;
  fVar12 = pfVar9[1] + pfVar9[1];
  fVar1 = *pfVar9;
  fVar2 = pfVar9[3];
  fVar3 = pfVar9[1];
  fVar4 = pfVar9[2];
  *param_2 = fVar12 * pfVar9[3] - fVar13 * pfVar9[2];
  param_2[1] = fVar13 * fVar2 + fVar12 * fVar4;
  param_2[2] = (fVar13 * fVar1 - fVar12 * fVar3) + 1.0;
  return param_2;
}



// FUNCTION 142da9730 FUN_142da9730 body=73 status=ok
// SIG undefined FUN_142da9730(void)

undefined8 FUN_142da9730(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 200),local_res8,param_2);
  if ((local_res8[0] != -1) &&
     (lVar1 = *(longlong *)(param_1 + 200) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 142da9780 FUN_142da9780 body=436 status=ok
// SIG undefined FUN_142da9780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142da9780(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  fVar1 = DAT_1468b5d98;
  if ((*(longlong *)(param_3 + 0x220) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x220) + 0x4d0) != 0)) {
    lVar4 = *(longlong *)(param_3 + 0x178);
    if (lVar4 == 0) {
      local_58 = DAT_1466ad740;
      local_50 = DAT_1466ad748;
    }
    else {
      local_58 = *(undefined8 *)(lVar4 + 0x220);
      local_50 = *(float *)(lVar4 + 0x228) - *(float *)(lVar4 + 0x1e4);
    }
    local_40 = local_50;
    local_48 = local_58;
    FUN_142dab9e0(param_1 + -0x458,&local_58,local_50);
    lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x220) + 0x4d0);
    uVar7 = *(uint *)(lVar4 + 0x230) & _DAT_146b34350;
    uVar8 = *(uint *)(lVar4 + 0x234) & uRam0000000146b34354;
    uVar9 = *(uint *)(lVar4 + 0x238) & uRam0000000146b34358;
    uVar10 = *(uint *)(lVar4 + 0x23c) & uRam0000000146b3435c;
    fVar1 = *(float *)(lVar4 + 0x710);
    auVar12._4_4_ = uVar8;
    auVar12._0_4_ = uVar7;
    auVar12._8_4_ = uVar9;
    auVar12._12_4_ = uVar10;
    auVar13._4_4_ = uVar9;
    auVar13._0_4_ = uVar8;
    auVar13._8_4_ = uVar7;
    auVar13._12_4_ = uVar10;
    auVar13 = minps(auVar12,auVar13);
    auVar5._4_4_ = uVar7;
    auVar5._0_4_ = uVar9;
    auVar5._8_4_ = uVar8;
    auVar5._12_4_ = uVar10;
    auVar13 = minps(auVar13,auVar5);
    fVar11 = auVar13._0_4_ * *(float *)(lVar4 + 0x714);
    pfVar6 = (float *)FUN_142dab710(param_1 + -0x458,&local_48);
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[1];
    *param_2 = (float)local_58 - fVar11 * *pfVar6;
    param_2[1] = local_58._4_4_ - fVar11 * fVar3;
    param_2[2] = fVar1 * auVar13._0_4_ + (local_50 - fVar11 * fVar2);
    return param_2;
  }
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  param_2[2] = fVar1;
  return param_2;
}



// FUNCTION 142da9940 FUN_142da9940 body=5742 status=ok
// SIG undefined FUN_142da9940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_142da9940(undefined1 *param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4,
             longlong *param_5,longlong param_6)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 uVar18;
  float *pfVar19;
  ulonglong *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auStack_4f8 [32];
  undefined8 local_4d8;
  float local_4d0;
  ulonglong local_4c8;
  float fStack_4c0;
  undefined8 local_4b8;
  float local_4b0;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498 [4];
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  undefined1 local_478 [64];
  undefined1 local_438 [912];
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  *param_2 = *param_3;
  *(int *)(param_2 + 1) = (int)param_3[1];
  if (param_4 == (longlong *)0x0) goto LAB_142daac39;
  switch(*param_1) {
  case 1:
    local_4d8 = 0;
    if ((*param_5 == 0) || (plVar2 = (longlong *)param_4[0x2d], plVar2 == (longlong *)0x0)) {
      lVar16 = param_4[0x2d];
      local_4d0 = DAT_1468b5da8;
      local_4b8 = DAT_1468b5da0;
      if (lVar16 != 0) {
        local_4a8 = *(float *)(lVar16 + 0x210);
        fStack_4a4 = *(float *)(lVar16 + 0x214);
        fStack_4a0 = *(float *)(lVar16 + 0x218);
        fStack_49c = *(float *)(lVar16 + 0x21c);
        auVar21._4_4_ = -(uint)(*(float *)(lVar16 + 0x254) != fStack_4a4);
        auVar21._0_4_ = -(uint)(*(float *)(lVar16 + 0x250) != local_4a8);
        auVar21._8_4_ = -(uint)(*(float *)(lVar16 + 600) != fStack_4a0);
        auVar21._12_4_ = -(uint)(*(float *)(lVar16 + 0x25c) != fStack_49c);
        iVar13 = movmskps(0,auVar21);
        if (iVar13 != 0) {
          *(float *)(lVar16 + 0x250) = local_4a8;
          *(float *)(lVar16 + 0x254) = fStack_4a4;
          *(float *)(lVar16 + 600) = fStack_4a0;
          *(float *)(lVar16 + 0x25c) = fStack_49c;
          puVar14 = (undefined8 *)FQuat::Rotator(&local_4a8,&local_4c8);
          *(undefined8 *)(lVar16 + 0x260) = *puVar14;
          *(undefined4 *)(lVar16 + 0x268) = *(undefined4 *)(puVar14 + 1);
        }
        local_4d0 = *(float *)(lVar16 + 0x268);
        local_4b8 = *(ulonglong *)(lVar16 + 0x260);
      }
      pfVar17 = local_498;
      puVar20 = &local_4d8;
      local_4d8 = local_4b8;
      local_4b0 = local_4d0;
    }
    else {
      puVar20 = (ulonglong *)(**(code **)(*plVar2 + 0x430))(plVar2,&local_4c8,*param_5);
      pfVar17 = (float *)&local_4b8;
    }
    goto LAB_142da9a2b;
  case 2:
    local_4d8 = 0;
    if ((*param_5 == 0) || (plVar2 = (longlong *)param_4[0x2d], plVar2 == (longlong *)0x0)) {
      lVar16 = param_4[0x2d];
      fStack_4c0 = DAT_1468b5da8;
      local_4c8 = DAT_1468b5da0;
      if (lVar16 != 0) {
        local_488 = *(float *)(lVar16 + 0x210);
        fStack_484 = *(float *)(lVar16 + 0x214);
        fStack_480 = *(float *)(lVar16 + 0x218);
        fStack_47c = *(float *)(lVar16 + 0x21c);
        auVar22._4_4_ = -(uint)(*(float *)(lVar16 + 0x254) != fStack_484);
        auVar22._0_4_ = -(uint)(*(float *)(lVar16 + 0x250) != local_488);
        auVar22._8_4_ = -(uint)(*(float *)(lVar16 + 600) != fStack_480);
        auVar22._12_4_ = -(uint)(*(float *)(lVar16 + 0x25c) != fStack_47c);
        iVar13 = movmskps(0,auVar22);
        if (iVar13 != 0) {
          *(float *)(lVar16 + 0x250) = local_488;
          *(float *)(lVar16 + 0x254) = fStack_484;
          *(float *)(lVar16 + 600) = fStack_480;
          *(float *)(lVar16 + 0x25c) = fStack_47c;
          puVar14 = (undefined8 *)FQuat::Rotator(&local_488,local_498);
          *(undefined8 *)(lVar16 + 0x260) = *puVar14;
          *(undefined4 *)(lVar16 + 0x268) = *(undefined4 *)(puVar14 + 1);
        }
        fStack_4c0 = *(float *)(lVar16 + 0x268);
        local_4c8 = *(ulonglong *)(lVar16 + 0x260);
      }
      local_4b8 = local_4c8;
      local_4b0 = fStack_4c0;
      pfVar17 = (float *)FRotator::Vector(&local_4c8,&local_4a8);
      goto LAB_142da9cd5;
    }
    puVar20 = (ulonglong *)(**(code **)(*plVar2 + 0x430))(plVar2,local_498,*param_5);
    pfVar17 = (float *)&local_4c8;
    goto LAB_142da9b1b;
  case 3:
    local_4d8 = 0;
    if ((*param_5 == 0) || (plVar2 = (longlong *)param_4[0x2d], plVar2 == (longlong *)0x0)) {
      lVar16 = param_4[0x2d];
      fStack_4c0 = DAT_1468b5da8;
      local_4c8 = DAT_1468b5da0;
      if (lVar16 != 0) {
        local_488 = *(float *)(lVar16 + 0x210);
        fStack_484 = *(float *)(lVar16 + 0x214);
        fStack_480 = *(float *)(lVar16 + 0x218);
        fStack_47c = *(float *)(lVar16 + 0x21c);
        auVar23._4_4_ = -(uint)(*(float *)(lVar16 + 0x254) != fStack_484);
        auVar23._0_4_ = -(uint)(*(float *)(lVar16 + 0x250) != local_488);
        auVar23._8_4_ = -(uint)(*(float *)(lVar16 + 600) != fStack_480);
        auVar23._12_4_ = -(uint)(*(float *)(lVar16 + 0x25c) != fStack_47c);
        iVar13 = movmskps(0,auVar23);
        if (iVar13 != 0) {
          *(float *)(lVar16 + 0x250) = local_488;
          *(float *)(lVar16 + 0x254) = fStack_484;
          *(float *)(lVar16 + 600) = fStack_480;
          *(float *)(lVar16 + 0x25c) = fStack_47c;
          puVar14 = (undefined8 *)FQuat::Rotator(&local_488,&local_4a8);
          *(undefined8 *)(lVar16 + 0x260) = *puVar14;
          *(undefined4 *)(lVar16 + 0x268) = *(undefined4 *)(puVar14 + 1);
        }
        fStack_4c0 = *(float *)(lVar16 + 0x268);
        local_4c8 = *(ulonglong *)(lVar16 + 0x260);
      }
      local_4b8 = local_4c8;
      local_4b0 = fStack_4c0;
      puVar20 = (ulonglong *)FRotator::Vector(&local_4b8,local_498);
      fVar25 = -*(float *)(puVar20 + 1);
      *param_2 = *puVar20 ^ 0x8000000080000000;
      fStack_4c0 = fVar25;
    }
    else {
      uVar18 = (**(code **)(*plVar2 + 0x430))(plVar2,&local_4a8,*param_5);
      puVar20 = (ulonglong *)FRotator::Vector(uVar18,local_498);
      fVar25 = -*(float *)(puVar20 + 1);
      *param_2 = *puVar20 ^ 0x8000000080000000;
      fStack_4c0 = fVar25;
    }
    break;
  case 4:
    pfVar17 = (float *)(**(code **)(*param_4 + 0x308))(param_4,&local_4a8);
    fVar24 = DAT_1468b5d98;
    fVar25 = pfVar17[1];
    fVar30 = *pfVar17;
    fVar38 = pfVar17[2];
    fVar29 = fVar30 * fVar30 + fVar25 * fVar25 + fVar38 * fVar38;
    if (fVar29 == 1.0) {
      fVar25 = pfVar17[2];
      *param_2 = *(ulonglong *)pfVar17;
      *(float *)(param_2 + 1) = fVar25;
    }
    else if (1e-08 <= fVar29) {
      auVar34._8_8_ = 0;
      auVar34._0_8_ = CONCAT44(0,fVar29);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = CONCAT44(0,fVar29);
      auVar32 = rsqrtss(auVar34,auVar8);
      fVar24 = auVar32._0_4_;
      fVar24 = fVar24 + fVar24 * (0.5 - fVar29 * 0.5 * fVar24 * fVar24);
      fVar24 = fVar24 + fVar24 * (0.5 - fVar29 * 0.5 * fVar24 * fVar24);
      local_4d0 = fVar24 * fVar38;
      local_4d8 = CONCAT44(fVar24 * fVar25,fVar24 * fVar30);
      *param_2 = local_4d8;
      *(float *)(param_2 + 1) = local_4d0;
    }
    else {
      local_4d0 = DAT_1468b5d98;
      local_4d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *param_2 = local_4d8;
      *(float *)(param_2 + 1) = fVar24;
    }
    goto LAB_142daac39;
  case 5:
    pfVar17 = (float *)(**(code **)(*param_4 + 0x308))(param_4,&local_4a8);
LAB_142da9cd5:
    fVar25 = DAT_1468b5d98;
    fVar30 = pfVar17[1];
    fVar38 = *pfVar17;
    local_4d8 = *(ulonglong *)pfVar17;
    fVar24 = fVar38 * fVar38 + fVar30 * fVar30;
    if (fVar24 == 1.0) {
      if (pfVar17[2] == 0.0) {
        local_4d8 = *(ulonglong *)pfVar17;
        fVar25 = pfVar17[2];
        *param_2 = local_4d8;
        local_4d0 = fVar25;
      }
      else {
LAB_142da9ddd:
        local_4d0 = 0.0;
        fVar25 = 0.0;
        *param_2 = local_4d8;
      }
    }
    else {
      if (1e-08 <= fVar24) {
        auVar33._8_8_ = 0;
        auVar33._0_8_ = CONCAT44(0,fVar24);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = CONCAT44(0,fVar24);
        auVar32 = rsqrtss(auVar33,auVar7);
        fVar25 = auVar32._0_4_;
        fVar25 = fVar25 + fVar25 * (0.5 - fVar24 * 0.5 * fVar25 * fVar25);
        fVar25 = fVar25 + fVar25 * (0.5 - fVar24 * 0.5 * fVar25 * fVar25);
        local_4d8 = CONCAT44(fVar25 * fVar30,fVar25 * fVar38);
        goto LAB_142da9ddd;
      }
      local_4d0 = DAT_1468b5d98;
      local_4d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *param_2 = local_4d8;
    }
    break;
  case 6:
    pfVar17 = (float *)(**(code **)(*param_4 + 0x308))(param_4,&local_4a8);
    fVar30 = pfVar17[1];
    fVar38 = *pfVar17;
    fVar24 = pfVar17[2];
    fVar29 = fVar38 * fVar38 + fVar30 * fVar30 + fVar24 * fVar24;
    if (fVar29 == 1.0) {
      local_4d8 = *(ulonglong *)pfVar17;
      local_4d0 = pfVar17[2];
      fVar26 = (float)local_4d8;
      fVar25 = local_4d0;
      fVar27 = (float)(local_4d8 >> 0x20);
    }
    else {
      fVar26 = DAT_1468b5d90;
      fVar25 = DAT_1468b5d98;
      fVar27 = DAT_1468b5d94;
      if (1e-08 <= fVar29) {
        auVar28._8_8_ = 0;
        auVar28._0_8_ = CONCAT44(0,fVar29);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = CONCAT44(0,fVar29);
        auVar32 = rsqrtss(auVar28,auVar6);
        fVar27 = auVar32._0_4_;
        fVar27 = fVar27 + fVar27 * (0.5 - fVar29 * 0.5 * fVar27 * fVar27);
        fVar27 = fVar27 + fVar27 * (0.5 - fVar29 * 0.5 * fVar27 * fVar27);
        local_4d8 = CONCAT44(local_4d8._4_4_,fVar27);
        fVar26 = fVar27 * fVar38;
        fVar25 = fVar27 * fVar24;
        fVar27 = fVar27 * fVar30;
      }
    }
    fVar25 = -fVar25;
    *param_2 = CONCAT44(fVar27,fVar26) ^ 0x8000000080000000;
    fStack_4c0 = fVar25;
    break;
  case 7:
    pfVar17 = (float *)(**(code **)(*param_4 + 0x308))(param_4,&local_4a8);
    fVar25 = pfVar17[1];
    fVar30 = *pfVar17;
    fVar38 = fVar30 * fVar30 + fVar25 * fVar25;
    if (fVar38 == 1.0) {
      if (pfVar17[2] == 0.0) {
        local_4d8 = *(ulonglong *)pfVar17;
        local_4d0 = pfVar17[2];
        fVar24 = local_4d0;
        fVar29 = (float)(local_4d8 >> 0x20);
        fVar26 = (float)local_4d8;
      }
      else {
LAB_142daa2c2:
        fVar24 = 0.0;
        fVar29 = fVar25;
        fVar26 = fVar30;
      }
    }
    else {
      fVar24 = DAT_1468b5d98;
      fVar29 = DAT_1468b5d94;
      fVar26 = DAT_1468b5d90;
      if (1e-08 <= fVar38) {
        auVar35._8_8_ = 0;
        auVar35._0_8_ = CONCAT44(0,fVar38);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = CONCAT44(0,fVar38);
        auVar32 = rsqrtss(auVar35,auVar5);
        fVar24 = auVar32._0_4_;
        fVar24 = fVar24 + fVar24 * (0.5 - fVar38 * 0.5 * fVar24 * fVar24);
        fVar24 = fVar24 + fVar24 * (0.5 - fVar38 * 0.5 * fVar24 * fVar24);
        local_4d8 = CONCAT44(local_4d8._4_4_,fVar24);
        fVar30 = fVar24 * fVar30;
        fVar25 = fVar24 * fVar25;
        goto LAB_142daa2c2;
      }
    }
    goto LAB_142daa2c5;
  case 8:
    iVar13 = rand();
    iVar12 = rand();
    fVar25 = (float)iVar12 * 0.010986663;
    local_4d8._4_4_ = (float)iVar13 * 0.010986663;
    goto LAB_142daa31f;
  case 9:
    iVar13 = rand();
    iVar12 = rand();
    fVar25 = (float)iVar12 * 0.0054933317;
    local_4d8._4_4_ = (float)iVar13 * 0.010986663;
    goto LAB_142daa31f;
  case 10:
    iVar13 = rand();
    iVar12 = rand();
    fVar25 = (float)iVar12 * 0.0054933317 - 180.0;
    local_4d8._4_4_ = (float)iVar13 * 0.010986663;
LAB_142daa31f:
    local_4d8 = CONCAT44(local_4d8._4_4_,fVar25);
LAB_142daa325:
    local_4d0 = 0.0;
    pfVar17 = &local_4a8;
    puVar20 = &local_4d8;
LAB_142da9a2b:
    puVar20 = (ulonglong *)FRotator::Vector(puVar20,pfVar17);
    *param_2 = *puVar20;
    fVar25 = *(float *)(puVar20 + 1);
    break;
  case 0xb:
    iVar13 = rand();
    local_4d8 = (ulonglong)(uint)((float)iVar13 * 0.010986663) << 0x20;
    goto LAB_142daa325;
  case 0xc:
    fStack_4c0 = 1.0;
    fVar25 = 1.0;
    *param_2 = 0;
    break;
  case 0xd:
    fStack_4c0 = -1.0;
    fVar25 = -1.0;
    *param_2 = 0;
    break;
  case 0xe:
    if (param_6 != 0) {
      lVar16 = param_4[0x2d];
      if (lVar16 == 0) {
        local_4c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        puVar20 = &local_4c8;
        fStack_4c0 = DAT_1468b5d98;
      }
      else {
        puVar20 = &local_4b8;
        local_4b0 = *(float *)(lVar16 + 0x228);
        local_4b8 = *(ulonglong *)(lVar16 + 0x220);
      }
      local_4d0 = *(float *)(puVar20 + 1);
      lVar16 = *(longlong *)(param_6 + 0x168);
      local_4d8 = *puVar20;
      if (lVar16 == 0) {
        fStack_4c0 = DAT_1468b5d98;
        goto LAB_142daa543;
      }
LAB_142daa514:
      puVar20 = &local_4b8;
      local_4b0 = *(float *)(lVar16 + 0x228);
      local_4b8 = *(ulonglong *)(lVar16 + 0x220);
LAB_142daa54e:
      local_4c8 = *puVar20;
      fStack_4c0 = *(float *)(puVar20 + 1);
      fVar30 = (float)(local_4c8 >> 0x20) - local_4d8._4_4_;
      local_4d8._0_4_ = (float)local_4c8 - (float)local_4d8;
      fVar25 = fStack_4c0 - local_4d0;
      fVar38 = fVar30 * fVar30 + (float)local_4d8 * (float)local_4d8 + fVar25 * fVar25;
      if (fVar38 == 1.0) {
        local_4d8 = CONCAT44(fVar30,(float)local_4d8);
        *param_2 = local_4d8;
        local_4d0 = fVar25;
      }
      else {
        if (fVar38 < 1e-08) goto LAB_142daa5d7;
        auVar32 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
        fVar24 = auVar32._0_4_;
        fVar24 = fVar24 + fVar24 * (0.5 - fVar38 * 0.5 * fVar24 * fVar24);
        fVar24 = fVar24 + fVar24 * (0.5 - fVar38 * 0.5 * fVar24 * fVar24);
        fVar30 = fVar24 * fVar30;
        local_4d0 = fVar24 * fVar25;
LAB_142daa668:
        fVar24 = fVar24 * (float)local_4d8;
LAB_142daa678:
        local_4d8 = CONCAT44(fVar30,fVar24);
        *param_2 = local_4d8;
        fVar25 = local_4d0;
      }
      break;
    }
    lVar16 = FUN_142ddddc0(param_4);
    if (lVar16 != 0) {
      FUN_142dc1ad0(local_438);
      cVar11 = FUN_142dcd6e0(lVar16,local_438,0);
      if (cVar11 != '\0') {
        local_4d8 = 0;
        if ((*param_5 == 0) || (plVar2 = (longlong *)param_4[0x2d], plVar2 == (longlong *)0x0)) {
          lVar16 = param_4[0x2d];
          if (lVar16 == 0) {
            fStack_4c0 = DAT_1468b5d98;
            puVar20 = &local_4c8;
            local_4c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          }
          else {
            puVar20 = &local_4b8;
            local_4b0 = *(float *)(lVar16 + 0x228);
            local_4b8 = *(ulonglong *)(lVar16 + 0x220);
          }
          local_4d0 = *(float *)(puVar20 + 1);
          puVar15 = &local_4d8;
          local_4d8 = *puVar20;
        }
        else {
          puVar15 = (ulonglong *)(**(code **)(*plVar2 + 0x428))(plVar2,&local_4a8,*param_5);
        }
        uVar1 = *puVar15;
        fStack_4c0 = *(float *)(puVar15 + 1);
        pfVar17 = (float *)FUN_142dcd4d0(local_438,&local_4a8,0,0);
        local_4d8._0_4_ = *pfVar17 - (float)uVar1;
        fVar30 = pfVar17[1] - (float)(uVar1 >> 0x20);
        fVar25 = pfVar17[2] - fStack_4c0;
        fVar38 = fVar30 * fVar30 + (float)local_4d8 * (float)local_4d8 + fVar25 * fVar25;
        local_4c8 = uVar1;
        if (fVar38 == 1.0) {
          local_4d8 = CONCAT44(fVar30,(float)local_4d8);
          *param_2 = local_4d8;
          local_4d0 = fVar25;
          break;
        }
        if (1e-08 <= fVar38) {
          auVar36._8_8_ = 0;
          auVar36._0_8_ = CONCAT44(0,fVar38);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,fVar38);
          auVar32 = rsqrtss(auVar36,auVar4);
          fVar24 = auVar32._0_4_;
          fVar24 = fVar24 + fVar24 * (0.5 - fVar38 * 0.5 * fVar24 * fVar24);
          fVar24 = fVar24 + fVar24 * (0.5 - fVar38 * 0.5 * fVar24 * fVar24);
          fVar30 = fVar24 * fVar30;
          local_4d0 = fVar24 * fVar25;
          goto LAB_142daa668;
        }
LAB_142daa5d7:
        local_4d0 = DAT_1468b5d98;
        fVar30 = DAT_1468b5d94;
        fVar24 = DAT_1468b5d90;
        goto LAB_142daa678;
      }
    }
    goto LAB_142daac39;
  case 0xf:
    if (param_6 != 0) {
      lVar16 = *(longlong *)(param_6 + 0x168);
      if (lVar16 == 0) {
        local_4c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        puVar20 = &local_4c8;
        fStack_4c0 = DAT_1468b5d98;
      }
      else {
        puVar20 = &local_4b8;
        local_4b0 = *(float *)(lVar16 + 0x228);
        local_4b8 = *(ulonglong *)(lVar16 + 0x220);
      }
      local_4d0 = *(float *)(puVar20 + 1);
      lVar16 = param_4[0x2d];
      local_4d8 = *puVar20;
      if (lVar16 != 0) goto LAB_142daa514;
      fStack_4c0 = DAT_1468b5d98;
LAB_142daa543:
      local_4c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      puVar20 = &local_4c8;
      goto LAB_142daa54e;
    }
    lVar16 = FUN_142ddddc0(param_4);
    if (lVar16 != 0) {
      FUN_142dc1ad0(local_438);
      cVar11 = FUN_142dcd6e0(lVar16,local_438,0);
      if (cVar11 != '\0') {
        lVar16 = param_4[0x2d];
        if (lVar16 == 0) {
          fStack_4c0 = DAT_1468b5d98;
          puVar20 = &local_4c8;
          local_4c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          puVar20 = &local_4b8;
          local_4b0 = *(float *)(lVar16 + 0x228);
          local_4b8 = *(ulonglong *)(lVar16 + 0x220);
        }
        uVar1 = *puVar20;
        fStack_4c0 = *(float *)(puVar20 + 1);
        pfVar17 = (float *)FUN_142dcd4d0(local_438,&local_4a8,0,0);
        fVar24 = (float)uVar1 - *pfVar17;
        fVar38 = (float)(uVar1 >> 0x20) - pfVar17[1];
        fVar25 = fStack_4c0 - pfVar17[2];
        fVar30 = fVar38 * fVar38 + fVar24 * fVar24 + fVar25 * fVar25;
        local_4c8 = uVar1;
        if (fVar30 != 1.0) {
          if (fVar30 < 1e-08) goto LAB_142daa5d7;
          auVar32 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
          fVar29 = auVar32._0_4_;
          fVar29 = fVar29 + fVar29 * (0.5 - fVar30 * 0.5 * fVar29 * fVar29);
          fVar29 = fVar29 + fVar29 * (0.5 - fVar30 * 0.5 * fVar29 * fVar29);
          fVar24 = fVar24 * fVar29;
          fVar38 = fVar38 * fVar29;
          fVar25 = fVar25 * fVar29;
        }
        local_4d8 = CONCAT44(fVar38,fVar24);
        *param_2 = local_4d8;
        local_4d0 = fVar25;
        break;
      }
    }
    goto LAB_142daac39;
  case 0x10:
    (**(code **)(*param_4 + 0x648))(param_4,&local_4a8,&local_4c8);
    pfVar17 = local_498;
    puVar20 = &local_4c8;
    goto LAB_142da9a2b;
  case 0x11:
    (**(code **)(*param_4 + 0x648))(param_4,&local_4a8,&local_4c8);
    puVar20 = (ulonglong *)FRotator::Vector(&local_4c8,local_498);
    fVar30 = *(float *)(puVar20 + 1);
    *param_2 = *puVar20 ^ 0x8000000080000000;
    fVar25 = -fVar30;
    fStack_4c0 = -fVar30;
    break;
  case 0x12:
    (**(code **)(*param_4 + 0x648))(param_4,&local_4a8,&local_4c8);
    pfVar17 = local_498;
    puVar20 = &local_4c8;
LAB_142da9b1b:
    pfVar17 = (float *)FRotator::Vector(puVar20,pfVar17);
LAB_142da9b20:
    fVar25 = DAT_1468b5d98;
    fVar30 = pfVar17[1];
    fVar38 = *pfVar17;
    fVar24 = fVar38 * fVar38 + fVar30 * fVar30;
    if (fVar24 == 1.0) {
      if (pfVar17[2] == 0.0) {
        local_4d8 = *(ulonglong *)pfVar17;
        fVar25 = pfVar17[2];
        *param_2 = local_4d8;
        local_4d0 = fVar25;
      }
      else {
LAB_142da9c0c:
        local_4d8 = CONCAT44(fVar30,fVar38);
        local_4d0 = 0.0;
        *param_2 = local_4d8;
        fVar25 = 0.0;
      }
    }
    else {
      if (1e-08 <= fVar24) {
        auVar31._8_8_ = 0;
        auVar31._0_8_ = CONCAT44(0,fVar24);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = CONCAT44(0,fVar24);
        auVar32 = rsqrtss(auVar31,auVar3);
        fVar25 = auVar32._0_4_;
        fVar25 = fVar25 + fVar25 * (0.5 - fVar24 * 0.5 * fVar25 * fVar25);
        fVar25 = fVar25 + fVar25 * (0.5 - fVar24 * 0.5 * fVar25 * fVar25);
        fVar38 = fVar38 * fVar25;
        fVar30 = fVar30 * fVar25;
        goto LAB_142da9c0c;
      }
      local_4d0 = DAT_1468b5d98;
      local_4d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *param_2 = local_4d8;
    }
    break;
  case 0x13:
    (**(code **)(*param_4 + 0x648))(param_4,&local_4a8,&local_4c8);
    pfVar17 = (float *)FRotator::Vector(&local_4c8,local_498);
    fVar25 = pfVar17[1];
    fVar30 = *pfVar17;
    fVar38 = fVar30 * fVar30 + fVar25 * fVar25;
    if (fVar38 == 1.0) {
      if (pfVar17[2] != 0.0) goto LAB_142daa2c2;
      local_4b8 = *(ulonglong *)pfVar17;
      local_4b0 = pfVar17[2];
      fVar24 = local_4b0;
      fVar29 = (float)(local_4b8 >> 0x20);
      fVar26 = (float)local_4b8;
    }
    else {
      fVar24 = DAT_1468b5d98;
      fVar29 = DAT_1468b5d94;
      fVar26 = DAT_1468b5d90;
      if (1e-08 <= fVar38) {
        auVar37._8_8_ = 0;
        auVar37._0_8_ = CONCAT44(0,fVar38);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = CONCAT44(0,fVar38);
        auVar32 = rsqrtss(auVar37,auVar32);
        fVar24 = auVar32._0_4_;
        fVar24 = fVar24 + fVar24 * (0.5 - fVar38 * 0.5 * fVar24 * fVar24);
        fVar24 = fVar24 + fVar24 * (0.5 - fVar38 * 0.5 * fVar24 * fVar24);
        local_4d8 = CONCAT44(local_4d8._4_4_,fVar24);
        fVar30 = fVar30 * fVar24;
        fVar25 = fVar25 * fVar24;
        goto LAB_142daa2c2;
      }
    }
LAB_142daa2c5:
    *param_2 = CONCAT44(fVar29,fVar26) ^ 0x8000000080000000;
    fVar25 = -fVar24;
    fStack_4c0 = -fVar24;
    break;
  case 0x14:
    lVar16 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
        lVar16 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((!bVar10) || (param_4[0x99] == 0)) goto LAB_142daac39;
    pfVar17 = (float *)AMAU_BehaviorPlayer::GetVelocityAnimation(param_4[0x99],&local_4a8);
    goto LAB_142da9b20;
  case 0x15:
    uVar18 = FUN_142e39920();
    lVar16 = (**(code **)(*param_4 + 0x628))(param_4,uVar18);
    if (lVar16 != 0) {
      uVar18 = FUN_142cec500(lVar16,&local_4a8);
      puVar20 = (ulonglong *)FRotator::UnrotateVector(uVar18,local_498,param_3);
      *param_2 = *puVar20;
      fVar25 = *(float *)(puVar20 + 1);
      break;
    }
    goto LAB_142daac39;
  default:
    *param_2 = *param_3;
    fVar25 = *(float *)(param_3 + 1);
  }
  *(float *)(param_2 + 1) = fVar25;
LAB_142daac39:
  fVar25 = *(float *)(param_1 + 0x40);
  fVar30 = (float)(int)(fVar25 * 0.0027777778) * 360.0;
  if (ABS(fVar25) < ABS(fVar30)) {
    fVar30 = fVar25;
  }
  fVar25 = fVar25 - fVar30;
  if (fVar25 < 0.0) {
    fVar25 = fVar25 + 360.0;
  }
  if (fVar25 == 0.0) {
    fVar25 = *(float *)(param_1 + 0x44);
    fVar30 = (float)(int)(fVar25 * 0.0027777778) * 360.0;
    if (ABS(fVar25) < ABS(fVar30)) {
      fVar30 = fVar25;
    }
    fVar25 = fVar25 - fVar30;
    if (fVar25 < 0.0) {
      fVar25 = fVar25 + 360.0;
    }
    if (fVar25 == 0.0) {
      fVar25 = *(float *)(param_1 + 0x48);
      fVar30 = (float)(int)(fVar25 * 0.0027777778) * 360.0;
      if (ABS(fVar25) < ABS(fVar30)) {
        fVar30 = fVar25;
      }
      fVar25 = fVar25 - fVar30;
      if (fVar25 < 0.0) {
        fVar25 = fVar25 + 360.0;
      }
      if (fVar25 == 0.0) {
        bVar10 = true;
        goto LAB_142daad31;
      }
    }
  }
  bVar10 = false;
LAB_142daad31:
  if (!bVar10) {
    pfVar17 = (float *)FRotator::Quaternion(param_1 + 0x40,&local_4b8);
    uVar18 = FVector::Rotation(param_2,&local_4a8);
    pfVar19 = (float *)FRotator::Quaternion(uVar18,&local_4d8);
    fVar25 = *pfVar17;
    fVar30 = pfVar17[1];
    fVar38 = pfVar17[2];
    fVar24 = pfVar17[3];
    fVar29 = *pfVar19;
    fVar26 = pfVar19[1];
    fVar27 = pfVar19[2];
    fVar9 = pfVar19[3];
    local_488 = fVar29 * fVar24 * _DAT_146b34300 + fVar9 * fVar25 + fVar26 * fVar38 * _DAT_146b342f0
                + fVar27 * fVar30 * _DAT_146b342e0;
    fStack_484 = fVar29 * fVar38 * fRam0000000146b34304 + fVar9 * fVar30 +
                 fVar26 * fVar24 * fRam0000000146b342f4 + fVar27 * fVar25 * fRam0000000146b342e4;
    fStack_480 = fVar29 * fVar30 * fRam0000000146b34308 + fVar9 * fVar38 +
                 fVar26 * fVar25 * fRam0000000146b342f8 + fVar27 * fVar24 * fRam0000000146b342e8;
    fStack_47c = fVar29 * fVar25 * fRam0000000146b3430c + fVar9 * fVar24 +
                 fVar26 * fVar30 * fRam0000000146b342fc + fVar27 * fVar38 * fRam0000000146b342ec;
    uVar18 = FQuat::Rotator(&local_488,local_498);
    puVar20 = (ulonglong *)FRotator::Vector(uVar18,&local_4c8);
    *param_2 = *puVar20;
    *(int *)(param_2 + 1) = (int)puVar20[1];
  }
  fVar25 = (float)FUN_142c98860(param_1 + 8,param_4);
  if (0.0001 < fVar25) {
    iVar13 = rand();
    fVar30 = 0.5 - (float)iVar13 * 3.051851e-05;
    iVar13 = rand();
    local_4b0 = 0.0;
    local_4b8 = CONCAT44((float)(int)(fVar30 * fVar25),
                         (float)(int)((0.5 - (float)iVar13 * 3.051851e-05) *
                                      SQRT(1.0 - (fVar30 + fVar30) * (fVar30 + fVar30)) * fVar25));
    pfVar17 = (float *)FRotator::Vector(&local_4b8,&local_4a8);
    uVar18 = FVector::Rotation(param_2,local_498);
    pfVar19 = (float *)FRotationMatrix::FRotationMatrix(local_478,uVar18);
    fVar25 = *pfVar17;
    fVar30 = pfVar17[1];
    fVar38 = pfVar17[2];
    fVar24 = pfVar19[0xe];
    fVar29 = pfVar19[10];
    fVar26 = pfVar19[6];
    fVar27 = pfVar19[2];
    *param_2 = CONCAT44(pfVar19[0xd] * 0.0 + fVar38 * pfVar19[9] +
                        fVar30 * pfVar19[5] + fVar25 * pfVar19[1],
                        pfVar19[0xc] * 0.0 + fVar38 * pfVar19[8] +
                        fVar30 * pfVar19[4] + fVar25 * *pfVar19);
    *(float *)(param_2 + 1) = fVar24 * 0.0 + fVar38 * fVar29 + fVar30 * fVar26 + fVar25 * fVar27;
  }
  return param_2;
}



// FUNCTION 142dab010 GetInstance body=193 status=ok
// SIG undefined GetInstance(void)

longlong UInputDeviceManager::GetInstance(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (DAT_146b34620 == 0) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar6 = 0;
    uVar4 = FUN_142e1a500();
    DAT_146b34620 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    iVar1 = *(int *)(DAT_146b34620 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
  }
  return DAT_146b34620;
}



// FUNCTION 142dab0e0 FUN_142dab0e0 body=680 status=ok
// SIG undefined FUN_142dab0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142dab0e0(longlong param_1,float *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 3) = _DAT_1468b5d90;
  fVar3 = DAT_1468b5d98;
  param_2[5] = DAT_1468b5d98;
  *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 3);
  param_2[2] = fVar3;
  *(undefined1 *)(param_2 + 6) = 0;
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FUN_142da9240((int)*(undefined8 *)(param_2 + 3),&local_68);
    uStack_54 = 0;
    fStack_60 = (float)FUN_142dab430(param_1);
    fStack_60 = -fStack_60;
    if (*(char *)(param_2 + 6) == '\0') {
      if (local_50._0_1_ != '\0') {
        *param_2 = local_68;
        param_2[1] = fStack_64;
        param_2[2] = fStack_60;
        param_2[3] = fStack_5c;
        *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_54,local_58);
        param_2[6] = local_50;
      }
    }
    else if (local_50._0_1_ != '\0') {
      fVar3 = fStack_60;
      if (param_2[2] <= fStack_60) {
        fVar3 = param_2[2];
      }
      fVar5 = *param_2;
      if (local_68 <= *param_2) {
        fVar5 = local_68;
      }
      fVar4 = param_2[1];
      if (fStack_64 <= param_2[1]) {
        fVar4 = fStack_64;
      }
      param_2[2] = fVar3;
      fVar3 = fStack_5c;
      if (fStack_5c <= param_2[3]) {
        fVar3 = param_2[3];
      }
      *param_2 = fVar5;
      fVar5 = param_2[4];
      if (param_2[4] <= local_58) {
        fVar5 = local_58;
      }
      param_2[1] = fVar4;
      param_2[3] = fVar3;
      fVar3 = param_2[5];
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      param_2[4] = fVar5;
      param_2[5] = fVar3;
    }
  }
  uVar2 = 0;
  if (((*(byte *)(param_1 + 0x514) & 2) == 0) && (*(longlong *)(param_1 + 0x4a0) != 0)) {
    FUN_142da9240(param_1,&local_68);
    fVar3 = (float)FUN_142dab430(param_1);
    fVar3 = -fVar3;
    if ((*(byte *)(param_1 + 0x514) & 2) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x4a0);
    }
    fStack_60 = fVar3;
    lVar1 = UStaticMesh::GetBounds(uVar2,local_48);
    fVar5 = *(float *)(lVar1 + 0x14);
    fVar4 = (float)FUN_142dab430(param_1);
    fVar4 = (fVar5 + fVar5) - fVar4;
    if (*(char *)(param_2 + 6) == '\0') {
      if (local_50._0_1_ != '\0') {
        *(ulonglong *)param_2 = CONCAT44(fStack_64,local_68);
        *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_5c,fStack_60);
        *(ulonglong *)(param_2 + 4) = CONCAT44(fVar4,local_58);
        param_2[6] = local_50;
      }
    }
    else if (local_50._0_1_ != '\0') {
      if (param_2[2] <= fVar3) {
        fVar3 = param_2[2];
      }
      if (fVar4 <= param_2[5]) {
        fVar4 = param_2[5];
      }
      param_2[2] = fVar3;
      param_2[5] = fVar4;
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  fVar3 = *(float *)(param_1 + 0x4f0) * 0.5;
  fVar5 = *(float *)(param_1 + 0x4ec) * 0.5;
  param_2[4] = fVar3;
  fVar3 = -fVar3;
  param_2[1] = fVar3;
  fVar5 = fVar5 + fVar5;
  param_2[3] = fVar5;
  *param_2 = *(float *)(param_1 + 0x500);
  param_2[1] = fVar3 + *(float *)(param_1 + 0x504);
  param_2[2] = *(float *)(param_1 + 0x508) + param_2[2];
  param_2[3] = fVar5 + *(float *)(param_1 + 0x500);
  param_2[4] = *(float *)(param_1 + 0x504) + param_2[4];
  fVar3 = *(float *)(param_1 + 0x508) + param_2[5];
  param_2[5] = fVar3;
  param_2[5] = *(float *)(param_1 + 0x4f4) + fVar3;
  param_2[2] = param_2[2] - *(float *)(param_1 + 0x4f8);
  return param_2;
}



// FUNCTION 142dab3a0 FUN_142dab3a0 body=74 status=ok
// SIG undefined FUN_142dab3a0(void)

float FUN_142dab3a0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_142696270();
  fVar2 = (float)FUN_142696270(param_2);
  fVar3 = fVar2;
  if (fVar1 <= fVar2) {
    fVar3 = fVar1;
  }
  if (fVar3 == 0.0) {
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    return fVar2;
  }
  return fVar3;
}



// FUNCTION 142dab3f0 FUN_142dab3f0 body=56 status=ok
// SIG undefined FUN_142dab3f0(void)

undefined8 FUN_142dab3f0(longlong param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 == '\0') {
    return *(undefined8 *)(param_2 + 8);
  }
  iVar1 = *(int *)(param_2 + 8);
  if (((iVar1 != -1) && (-1 < iVar1)) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xc08)))
  {
    return *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xc00) + (longlong)iVar1 * 8);
  }
  return 0;
}



// FUNCTION 142dab430 FUN_142dab430 body=151 status=ok
// SIG undefined FUN_142dab430(void)

float FUN_142dab430(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  undefined1 local_38 [48];
  
  if (((*(byte *)(param_1 + 0x514) & 2) == 0) && (*(longlong *)(param_1 + 0x4a0) != 0)) {
    lVar1 = UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x4a0),local_38);
    fVar2 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
  }
  else {
    fVar2 = 0.0;
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    lVar1 = UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x468),local_38);
    fVar2 = fVar2 + (float)(*(int *)(param_1 + 0x510) + -1) * *(float *)(param_1 + 0x4b8) +
                    *(float *)(lVar1 + 0x14) * 2.0 * (float)*(int *)(param_1 + 0x510);
  }
  return fVar2;
}



// FUNCTION 142dab4d0 FUN_142dab4d0 body=232 status=ok
// SIG undefined FUN_142dab4d0(void)

void FUN_142dab4d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b34618) && (_Init_thread_header(&DAT_146b34618), DAT_146b34618 == -1))
  {
    uVar1 = UGCombatTextWidget::GetPrivateStaticClass();
    UGCombatTextWidget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TargetActor",1);
    DAT_146b34610 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34618);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b34610 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34610 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34610 + 0x30));
  }
  return;
}



// FUNCTION 142dab5c0 FUN_142dab5c0 body=232 status=ok
// SIG undefined FUN_142dab5c0(void)

void FUN_142dab5c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b34608) && (_Init_thread_header(&DAT_146b34608), DAT_146b34608 == -1))
  {
    uVar1 = ATroiCaoGateActor::GetPrivateStaticClass();
    ATroiCaoGateActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedState",1);
    DAT_146b34600 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34608);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b34600 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34600 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34600 + 0x30));
  }
  return;
}



// FUNCTION 142dab6b0 FUN_142dab6b0 body=82 status=ok
// SIG undefined FUN_142dab6b0(void)

longlong * FUN_142dab6b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 800);
    if (*(longlong **)(param_1 + 800) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x310);
    }
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x328) * 2;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
      if (*plVar1 == param_2) {
        return plVar1;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142dab710 FUN_142dab710 body=243 status=ok
// SIG undefined FUN_142dab710(void)

uint * FUN_142dab710(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 == 0) {
    uVar7 = (undefined4)DAT_1468b5da0;
    uVar8 = (uint)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_30 = DAT_1468b5da8;
  }
  else {
    local_18 = *(float *)(lVar2 + 0x210);
    fStack_14 = *(float *)(lVar2 + 0x214);
    fStack_10 = *(float *)(lVar2 + 0x218);
    fStack_c = *(float *)(lVar2 + 0x21c);
    auVar3._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_14);
    auVar3._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_18);
    auVar3._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_10);
    auVar3._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_c);
    iVar4 = movmskps(in_EAX,auVar3);
    if (iVar4 != 0) {
      *(float *)(lVar2 + 0x250) = local_18;
      *(float *)(lVar2 + 0x254) = fStack_14;
      *(float *)(lVar2 + 600) = fStack_10;
      *(float *)(lVar2 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
      *(undefined8 *)(lVar2 + 0x260) = *puVar5;
      *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    uVar7 = (undefined4)*(undefined8 *)(lVar2 + 0x260);
    uVar8 = (uint)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
    local_30 = *(undefined4 *)(lVar2 + 0x268);
  }
  local_28 = CONCAT44(uVar8,uVar7);
  local_38 = (ulonglong)uVar8 << 0x20;
  local_20 = local_30;
  puVar6 = (uint *)FRotator::Vector(&local_38,&local_28);
  uVar8 = puVar6[2];
  *param_2 = *puVar6 ^ 0x80000000;
  uVar1 = puVar6[1];
  param_2[2] = uVar8 ^ 0x80000000;
  param_2[1] = uVar1 ^ 0x80000000;
  return param_2;
}



// FUNCTION 142dab810 FUN_142dab810 body=311 status=ok
// SIG undefined FUN_142dab810(void)

float * FUN_142dab810(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined4 in_EAX;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50 [24];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  lVar4 = *(longlong *)(param_1 + -0x2f0);
  if (lVar4 == 0) {
    uVar9 = (undefined4)DAT_1468b5da0;
    uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_54 = DAT_1468b5da8;
  }
  else {
    local_38 = *(float *)(lVar4 + 0x210);
    fStack_34 = *(float *)(lVar4 + 0x214);
    fStack_30 = *(float *)(lVar4 + 0x218);
    fStack_2c = *(float *)(lVar4 + 0x21c);
    auVar5._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_34);
    auVar5._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_38);
    auVar5._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_30);
    auVar5._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_2c);
    iVar6 = movmskps(in_EAX,auVar5);
    if (iVar6 != 0) {
      *(float *)(lVar4 + 0x250) = local_38;
      *(float *)(lVar4 + 0x254) = fStack_34;
      *(float *)(lVar4 + 600) = fStack_30;
      *(float *)(lVar4 + 0x25c) = fStack_2c;
      puVar7 = (undefined8 *)FQuat::Rotator(&local_38,local_50);
      *(undefined8 *)(lVar4 + 0x260) = *puVar7;
      *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar7 + 1);
    }
    uVar9 = (undefined4)*(undefined8 *)(lVar4 + 0x260);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x260) >> 0x20);
    local_54 = *(undefined4 *)(lVar4 + 0x268);
  }
  local_5c = CONCAT44(uVar10,uVar9);
  pfVar8 = (float *)FRotator::Quaternion(&local_5c,local_28);
  fVar1 = pfVar8[2];
  fVar12 = -pfVar8[1];
  fVar12 = fVar12 + fVar12;
  fVar11 = fVar1 + fVar1;
  fVar2 = pfVar8[3];
  fVar3 = *pfVar8;
  *param_2 = (fVar12 * pfVar8[1] - fVar11 * fVar1) + 1.0;
  fVar1 = pfVar8[3];
  param_2[2] = fVar12 * fVar2 + fVar11 * *pfVar8;
  param_2[1] = fVar11 * fVar1 - fVar12 * fVar3;
  return param_2;
}



// FUNCTION 142dab970 FUN_142dab970 body=29 status=ok
// SIG undefined FUN_142dab970(void)

undefined4 FUN_142dab970(longlong param_1,int param_2)

{
  if (param_2 != -1) {
    return *(undefined4 *)((longlong)param_2 * 0x100 + *(longlong *)(param_1 + 0x2f8));
  }
  return 0xffffffff;
}



// FUNCTION 142dab990 FUN_142dab990 body=77 status=ok
// SIG undefined FUN_142dab990(void)

void FUN_142dab990(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e11920();
  *param_3 = uVar1;
  uVar1 = FUN_142e11d50(param_1,param_2);
  *param_4 = uVar1;
  return;
}



// FUNCTION 142dab9e0 FUN_142dab9e0 body=520 status=ok
// SIG undefined FUN_142dab9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142dab9e0(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_98;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined8 local_78;
  float local_70;
  
  fVar8 = (float)FUN_142dab430();
  pfVar7 = (float *)(**(code **)(*(longlong *)(param_1 + 0x458) + 0x10))(param_1 + 0x458,&local_78);
  lVar5 = *(longlong *)(param_1 + 0x168);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  if (lVar5 == 0) {
    local_98 = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
  }
  else {
    local_98 = *(undefined8 *)(lVar5 + 0x220);
    local_90 = *(float *)(lVar5 + 0x228);
  }
  fVar9 = (float)local_98;
  uVar6 = (ulonglong)local_98 >> 0x20;
  fVar11 = local_90 - fVar8 * pfVar7[2];
  if (lVar5 == 0) {
    local_98 = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
  }
  else {
    local_98 = *(undefined8 *)(lVar5 + 0x220);
    local_90 = *(float *)(lVar5 + 0x228);
  }
  local_70 = local_90;
  local_78 = local_98;
  (**(code **)(*(longlong *)(param_1 + 0x458) + 0x10))(param_1 + 0x458,&local_88);
  fVar12 = fVar11;
  if ((fVar11 <= param_3) && (fVar12 = param_3, local_70 <= param_3)) {
    fVar12 = local_70;
  }
  fVar3 = *(float *)(param_1 + 0x50c);
  fVar10 = (fVar12 - fVar11) / local_80;
  pfVar7 = (float *)FUN_142dab710(param_1,&local_78);
  fVar11 = pfVar7[2];
  fVar4 = pfVar7[1];
  *param_2 = (local_88 * fVar10 + (fVar9 - fVar8 * fVar1)) - fVar3 * *pfVar7;
  param_2[2] = fVar12 - fVar3 * fVar11;
  param_2[1] = (local_84 * fVar10 + ((float)uVar6 - fVar8 * fVar2)) - fVar3 * fVar4;
  return param_2;
}



// FUNCTION 142dabbf0 FUN_142dabbf0 body=42 status=ok
// SIG undefined FUN_142dabbf0(void)

undefined8 FUN_142dabbf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x330);
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x2a8) < *(int *)(lVar1 + 0xbf8))) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 0xbf0) + (longlong)*(int *)(param_1 + 0x2a8) * 8);
  }
  return 0;
}



// FUNCTION 142dabc20 FUN_142dabc20 body=99 status=ok
// SIG undefined FUN_142dabc20(void)

void FUN_142dabc20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    uVar1 = UDamageableInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if ((plVar2 != (longlong *)0x0) &&
       (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), lVar3 != 0)) {
      return;
    }
  }
  FUN_142c20460(param_1,param_2);
  return;
}



// FUNCTION 142dabc90 FUN_142dabc90 body=92 status=ok
// SIG undefined FUN_142dabc90(void)

longlong * FUN_142dabc90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = FUN_142df53d0();
    for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        *param_2 = *(longlong *)(param_1 + 0x48);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142dabcf0 FUN_142dabcf0 body=26 status=ok
// SIG undefined FUN_142dabcf0(void)

undefined8 * FUN_142dabcf0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142df95d0();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142dabd40 ToString body=72 status=ok
// SIG undefined ToString(void)

wchar_t * EClientLoginState::ToString(int param_1)

{
  if (param_1 == 0) {
    return L"Unknown";
  }
  if (param_1 == 1) {
    return L"Insignificant";
  }
  if (param_1 == 2) {
    return L"DistantAndInvisible";
  }
  if (param_1 != 3) {
    if (param_1 != 4) {
      return L"<UNDEFINED>";
    }
    return L"Significant";
  }
  return L"DistantAndVisible";
}



// FUNCTION 142dabda0 FUN_142dabda0 body=40 status=ok
// SIG undefined FUN_142dabda0(void)

undefined8 FUN_142dabda0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x210);
  uStack_14 = *(undefined4 *)(param_1 + 0x214);
  uStack_10 = *(undefined4 *)(param_1 + 0x218);
  uStack_c = *(undefined4 *)(param_1 + 0x21c);
  FQuat::Rotator(&local_18);
  return param_2;
}



// FUNCTION 142dabdd0 FUN_142dabdd0 body=203 status=ok
// SIG undefined FUN_142dabdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dabdd0(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
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
  ulonglong local_18;
  
  uVar2 = uRam00000001468b5b78;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x218);
    *param_2 = *(undefined8 *)(param_1 + 0x210);
    param_2[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x228);
    param_2[2] = *(undefined8 *)(param_1 + 0x220);
    param_2[3] = uVar2;
    uVar4 = *(undefined4 *)(param_1 + 0x230);
    uVar5 = *(undefined4 *)(param_1 + 0x234);
    uVar6 = *(undefined4 *)(param_1 + 0x238);
    uVar7 = *(undefined4 *)(param_1 + 0x23c);
  }
  else {
    if ((param_4 == 1) && (*(longlong *)(param_1 + 0x118) != 0)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar1 == 0) {
        puVar3 = (undefined8 *)&DAT_1468b5b70;
      }
      else {
        puVar3 = (undefined8 *)(lVar1 + 0x210);
      }
      local_48 = *puVar3;
      uStack_40 = puVar3[1];
      local_38 = *(undefined4 *)(puVar3 + 2);
      uStack_34 = *(undefined4 *)((longlong)puVar3 + 0x14);
      uStack_30 = *(undefined4 *)(puVar3 + 3);
      uStack_2c = *(undefined4 *)((longlong)puVar3 + 0x1c);
      local_28 = *(undefined4 *)(puVar3 + 4);
      uStack_24 = *(undefined4 *)((longlong)puVar3 + 0x24);
      uStack_20 = *(undefined4 *)(puVar3 + 5);
      uStack_1c = *(undefined4 *)((longlong)puVar3 + 0x2c);
      FUN_14162bcf0(param_1 + 0x210,local_38,&local_48);
      return param_2;
    }
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar2;
    uVar2 = uRam00000001468b5b88;
    param_2[2] = _DAT_1468b5b80;
    param_2[3] = uVar2;
    uVar4 = _DAT_1468b5b90;
    uVar5 = uRam00000001468b5b94;
    uVar6 = uRam00000001468b5b98;
    uVar7 = uRam00000001468b5b9c;
  }
  *(undefined4 *)(param_2 + 4) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar5;
  *(undefined4 *)(param_2 + 5) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar7;
  return param_2;
}



// FUNCTION 142dabea0 FUN_142dabea0 body=165 status=ok
// SIG undefined FUN_142dabea0(void)

undefined8 * FUN_142dabea0(char *param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  if (*param_1 == '\x01') {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *param_2 = 0;
      param_2[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
      return param_2;
    }
    local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    FName::ToString(local_res8,param_2);
    return param_2;
  }
  if (*param_1 != '\x02') {
    FString::SanitizeFloat(param_2,(double)*(float *)(param_1 + 0x18),1);
    return param_2;
  }
  FName::ToString(param_1 + 8,param_2);
  return param_2;
}



// FUNCTION 142dabf50 FUN_142dabf50 body=167 status=ok
// SIG undefined FUN_142dabf50(void)

byte * FUN_142dabf50(byte param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar6 = plVar2[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar6 = plVar2[0x1f];
  }
  if (*(int *)(lVar6 + 0x30) != *(int *)(lVar6 + 0x5c)) {
    lVar3 = *(longlong *)(lVar6 + 0x68);
    if (*(longlong *)(lVar6 + 0x68) == 0) {
      lVar3 = lVar6 + 0x60;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)*(int *)(lVar6 + 0x70) - 1U & (ulonglong)param_1) * 4);
    if (iVar1 != -1) {
      do {
        pbVar5 = (byte *)((longlong)iVar1 * 0x20 + *(longlong *)(lVar6 + 0x28));
        if (*pbVar5 == param_1) {
          if (iVar1 != -1) goto LAB_142dabfe1;
          break;
        }
        iVar1 = *(int *)(pbVar5 + 0x18);
      } while (iVar1 != -1);
    }
  }
  pbVar5 = (byte *)0x0;
LAB_142dabfe1:
  pbVar4 = pbVar5 + 8;
  if (pbVar5 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  return pbVar4;
}



// FUNCTION 142dac000 FUN_142dac000 body=113 status=ok
// SIG undefined FUN_142dac000(void)

float * FUN_142dac000(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = _guard_xfg_dispatch_icall_nop((param_3 * *param_1 + param_1[2]) * 0.017453292);
  fVar3 = param_1[3];
  fVar1 = param_1[5];
  *param_2 = fVar2 * param_1[1];
  fVar3 = _guard_xfg_dispatch_icall_nop((param_3 * fVar3 + fVar1) * 0.017453292);
  param_2[1] = fVar3 * param_1[4];
  return param_2;
}



// FUNCTION 142dac080 FUN_142dac080 body=149 status=ok
// SIG undefined FUN_142dac080(void)

float * FUN_142dac080(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = _guard_xfg_dispatch_icall_nop((param_3 * *param_1 + param_1[2]) * 0.017453292);
  *param_2 = fVar2 * param_1[1];
  fVar3 = _guard_xfg_dispatch_icall_nop((param_3 * param_1[3] + param_1[5]) * 0.017453292);
  fVar2 = param_1[6];
  fVar1 = param_1[8];
  param_2[1] = fVar3 * param_1[4];
  fVar2 = _guard_xfg_dispatch_icall_nop((param_3 * fVar2 + fVar1) * 0.017453292);
  param_2[2] = fVar2 * param_1[7];
  return param_2;
}



// FUNCTION 142dac130 FUN_142dac130 body=310 status=ok
// SIG undefined FUN_142dac130(void)

void FUN_142dac130(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      plVar6 = *(longlong **)(param_1 + 0x2f0);
      plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x2f8) * 0xe;
      if (plVar6 != plVar7) {
        while (*plVar6 != param_2) {
          plVar6 = plVar6 + 0xe;
          if (plVar6 == plVar7) {
            return;
          }
        }
        cVar2 = FUN_142db7ee0(param_1,plVar6);
        if (cVar2 == '\0') {
          FUN_142dbb590(plVar6);
        }
        if (((*(longlong *)(param_2 + 0x6f0) != 0) &&
            ((*(uint *)(*(longlong *)(param_2 + 0x6f0) + 0x14c) >> 1 & 1) == 0)) &&
           (0 < (int)plVar6[0xd])) {
          plVar7 = (longlong *)plVar6[0xc];
          if ((longlong *)plVar6[0xc] == (longlong *)0x0) {
            plVar7 = plVar6 + 10;
          }
          lVar4 = FUN_142dab6b0(param_1,*plVar7);
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) == *(longlong *)(param_2 + 0x18))) {
            FUN_142db7230(param_1,*plVar7,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142dac270 FUN_142dac270 body=163 status=ok
// SIG undefined FUN_142dac270(void)

void FUN_142dac270(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (iVar4 = 0, 0 < (int)param_2[1])) {
    lVar5 = 0;
    do {
      if (*(float *)(lVar2 + 0x790) - *(float *)(param_1 + 7) < *(float *)((longlong)param_1 + 0x2c)
         ) {
        return;
      }
      lVar3 = *param_2 + lVar5;
      cVar1 = FCollisionNotifyInfo::IsValidForNotify(lVar3);
      if ((cVar1 != '\0') && (0 < *(int *)(lVar3 + 0x50))) {
        FUN_142da7ec0(param_1,lVar3 + 8,lVar3 + 0x28,lVar3 + 0x48);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x70;
    } while (iVar4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142dac320 FUN_142dac320 body=162 status=ok
// SIG undefined FUN_142dac320(void)

void FUN_142dac320(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) && (param_3 != 0)) &&
        (*(longlong *)(param_2 + 0x2d8) == param_3)) &&
       ((lVar4 = FUN_142da7c10(param_1,param_2), lVar4 != 0 &&
        (cVar2 = FUN_142db7ee0(param_1,lVar4), cVar2 == '\0')))) {
      FUN_142dbb590(lVar4);
    }
  }
  return;
}



// FUNCTION 142dac3d0 FUN_142dac3d0 body=251 status=ok
// SIG undefined FUN_142dac3d0(void)

bool FUN_142dac3d0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  iVar2 = (int)param_1[1];
  iVar8 = 0;
  if (iVar2 != 0) {
    iVar8 = 0;
    cVar4 = FWeakObjectPtr::IsValid(*param_1);
    bVar9 = cVar4 != '\0';
    iVar6 = 0;
    do {
      iVar3 = iVar6;
      do {
        iVar3 = iVar3 + 1;
        if (iVar2 <= iVar3) break;
        cVar4 = FWeakObjectPtr::IsValid(*param_1 + (longlong)iVar3 * 8);
      } while (bVar9 == (cVar4 != '\0'));
      if (bVar9 != false) {
        if (iVar8 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + (longlong)iVar8 * 8),
                     (void *)(*param_1 + (longlong)iVar6 * 8),(longlong)(iVar3 - iVar6) << 3);
        }
        iVar8 = iVar8 + (iVar3 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar3;
    } while (iVar3 < iVar2);
    *(int *)(param_1 + 1) = iVar8;
  }
  lVar7 = *param_1;
  lVar1 = lVar7 + (longlong)iVar8 * 8;
  for (; lVar7 != lVar1; lVar7 = lVar7 + 8) {
    lVar5 = FWeakObjectPtr::Get(lVar7);
    if (*(longlong *)(lVar5 + 0x490) == 0) goto LAB_142dac4be;
  }
  lVar7 = 0;
LAB_142dac4be:
  return lVar7 != 0;
}



// FUNCTION 142dac4d0 FUN_142dac4d0 body=214 status=ok
// SIG undefined FUN_142dac4d0(void)

void FUN_142dac4d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  char param_5)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (plVar3 = (longlong *)(**(code **)(*param_1 + 0x668))(), plVar3 != (longlong *)0x0)) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_5 == '\0') {
        if (((*(uint *)((longlong)plVar3 + 0x4cc) >> 1 & 1) == 0) ||
           (cVar2 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
      }
      else if ((char)plVar3[0x25] != '\x03') {
        return;
      }
      if (plVar3[0x12f] != 0) {
        FUN_142e724b0(plVar3[0x12f],param_2,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 142dac5b0 FUN_142dac5b0 body=352 status=ok
// SIG undefined FUN_142dac5b0(void)

undefined8 FUN_142dac5b0(ulonglong *param_1,undefined8 *param_2)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res10 [2];
  undefined1 local_58 [16];
  short *local_48;
  ulonglong local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_1c;
  
  psVar1 = (short *)*param_2;
  local_40 = 0;
  local_48 = (short *)0x0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar1[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_40 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)(int)uVar3 * 2);
    if ((((int)local_40 != 0) && (0 < (int)local_40 + -1)) && (*local_48 != 0x28)) {
      cVar2 = FDefaultValueHelper::ParseFloat(&local_48,local_res10);
      uVar3 = local_38;
      if (cVar2 != '\0') {
        local_28 = 0;
        local_38 = local_38 & 0xffffff00;
        uVar5 = 1;
        uStack_30 = 0;
        *param_1 = CONCAT44(uStack_34,uVar3) & 0xffffffffffffff00;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_1c;
        *(undefined4 *)(param_1 + 3) = local_res10[0];
        *(undefined1 *)param_1 = 0;
        goto LAB_142dac6e7;
      }
      cVar2 = FUN_141655a70(&local_48,local_58);
      if (cVar2 != '\0') {
        local_28 = 0;
        local_38 = local_38 & 0xffffff00;
        uVar5 = 1;
        uStack_30 = 0;
        *(uint *)param_1 = local_38;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_34;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_1c;
        *(undefined4 *)(param_1 + 3) = 0;
        *(undefined1 *)param_1 = 0;
        goto LAB_142dac6e7;
      }
    }
  }
  uVar5 = 0;
LAB_142dac6e7:
  if (local_48 != (short *)0x0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 142dac710 FUN_142dac710 body=507 status=ok
// SIG undefined FUN_142dac710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dac710(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_148 [32];
  longlong local_128;
  ulonglong local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (DAT_146b34270 != 1) {
    uVar12 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    uVar4 = UDamageableInterface::GetPrivateStaticClass();
    (**(code **)(*param_2 + 0x660))(param_2,uVar4,local_118);
    plVar10 = local_118;
    if (local_58 != (longlong *)0x0) {
      plVar10 = local_58;
    }
    uVar13 = (longlong)(int)local_50 & 0x1fffffffffffffff;
    if (plVar10 + (int)local_50 < plVar10) {
      uVar13 = uVar12;
    }
    uVar9 = uVar12;
    if (uVar13 != 0) {
      do {
        lVar3 = *plVar10;
        if ((*(byte *)(lVar3 + 0xb8) & 0x20) == 0) {
          uVar4 = UDamageableInterface::GetPrivateStaticClass();
          uVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
          FUN_142350b20(lVar3,0);
          if (lVar3 == 0) {
            uVar5 = uVar12;
          }
          if (DAT_146b34270 != 1) {
            plVar6 = (longlong *)*param_1;
            iVar2 = (int)param_1[1];
            uVar11 = uVar5;
            if (lVar3 == 0) {
              uVar11 = uVar12;
            }
            plVar1 = plVar6 + (longlong)iVar2 * 3;
            for (; plVar6 != plVar1; plVar6 = plVar6 + 3) {
              uVar8 = uVar12;
              if (*plVar6 != 0) {
                uVar8 = plVar6[1];
              }
              uVar7 = uVar11;
              if (lVar3 == 0) {
                uVar7 = uVar12;
              }
              if ((uVar8 == uVar7) && (*plVar6 == lVar3)) goto LAB_142dac89f;
            }
            *(int *)(param_1 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1,iVar2);
            }
            local_128 = lVar3;
            local_120 = uVar5;
            FUN_142d97b90(*param_1 + (longlong)iVar2 * 0x18,&local_128);
          }
        }
LAB_142dac89f:
        plVar10 = plVar10 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar13);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142dac910 operator= body=5 status=ok
// SIG undefined operator=(void)

void FWeakObjectPtr::operator=(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xc);
    uVar1 = FUN_141784380(&DAT_1469e91a0);
    param_1[1] = uVar1;
    return;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return;
}



// FUNCTION 142dac920 FUN_142dac920 body=1328 status=ok
// SIG undefined FUN_142dac920(void)

void FUN_142dac920(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 local_res8;
  longlong *local_68;
  int local_60;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar9 = *(ulonglong *)(param_1 + 0x330);
  uVar15 = 0;
  if (uVar9 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x118);
    if (lVar6 == 0) {
LAB_142dac9c5:
      uVar9 = uVar15;
    }
    else {
      lVar5 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) || (uVar9 = *(ulonglong *)(lVar6 + 0x4c0), uVar9 == 0)) goto LAB_142dac9c5;
      lVar6 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142dac9c5;
    }
    *(ulonglong *)(param_1 + 0x330) = uVar9;
  }
  if ((((*(byte *)(param_1 + 200) & 0x10) != 0) || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
     (uVar9 == 0)) goto LAB_142dacadc;
  FTickFunction::AddPrerequisite(param_1 + 0x30,uVar9,uVar9 + 0x30);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  local_68 = (longlong *)0x0;
  local_38 = FUN_142db53a0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_30._4_4_;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143f77bd0;
  }
  puVar8 = (undefined8 *)FUN_1423b84e0(*(undefined8 *)(param_1 + 0x330),&local_res8,&local_68);
  *(undefined8 *)(param_1 + 0x2d0) = *puVar8;
  if (local_60 == 0) {
LAB_142dacac0:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
    goto LAB_142dacac0;
  }
  FUN_142340f20(param_1);
  uVar9 = *(ulonglong *)(param_1 + 0x330);
LAB_142dacadc:
  if (uVar9 == 0) {
    plVar7 = (longlong *)0x0;
    uVar9 = uVar15;
  }
  else {
    uVar9 = FUN_1423af5a0();
    plVar7 = *(longlong **)(param_1 + 0x330);
  }
  *(ulonglong *)(param_1 + 0x338) = uVar9;
  if (plVar7 != (longlong *)0x0) {
    local_res8 = 0;
    lVar6 = (**(code **)(*plVar7 + 0x6d0))(plVar7,0,1);
    if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x338) != 0)) {
      local_res8 = 0;
      uVar10 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x6d0))
                         (*(longlong **)(param_1 + 0x330),0,1);
      uVar4 = FUN_1426982f0(uVar10,0xffffffff);
      *(undefined4 *)(param_1 + 0x328) = uVar4;
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x330) + 800))();
      if (cVar3 == '\0') {
        return;
      }
      local_48[0] = 0;
      local_48[1] = 0;
      local_38 = (code *)0x0;
      uStack_30 = 0;
      FUN_142da18d0(*(longlong *)(param_1 + 0x330) + 0xbf0,*(longlong *)(param_1 + 0x330) + 0xc00,
                    local_48,&local_38);
      FUN_142dad520(param_1,local_48,&local_38);
      if (*(longlong *)(param_1 + 0x338) != 0) {
        FUN_142dbe2d0(param_1);
      }
      lVar6 = *(longlong *)(param_1 + 0x330);
      uVar9 = uVar15;
      uVar16 = uVar15;
      if (0 < *(int *)(lVar6 + 0xbf8)) {
        do {
          lVar6 = *(longlong *)(uVar9 + *(longlong *)(lVar6 + 0xbf0));
          if (((lVar6 != 0) && (cVar3 = FBodyInstance::IsValidBodyInstance(lVar6), cVar3 != '\0'))
             && (cVar3 = FWeakObjectPtr::IsValid(lVar6 + 0x140), lVar5 = local_48[0], cVar3 != '\0')
             ) {
            uVar4 = FUN_142696270(lVar6);
            *(undefined4 *)(uVar16 + 0x10 + lVar5) = uVar4;
            pfVar11 = (float *)FUN_142696110(lVar6,&local_68);
            *(float *)(uVar16 + 0x14 + local_48[0]) =
                 SQRT(*pfVar11 * *pfVar11 + pfVar11[1] * pfVar11[1] + pfVar11[2] * pfVar11[2]);
          }
          lVar6 = *(longlong *)(param_1 + 0x330);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          uVar9 = uVar9 + 8;
          uVar16 = uVar16 + 0x18;
        } while ((int)uVar14 < *(int *)(lVar6 + 0xbf8));
      }
      FUN_142dad7c0(local_48,&local_38,param_1 + 0x2f8,param_1 + 0x2e8);
      FUN_142dace70(param_1);
      lVar6 = *(longlong *)(param_1 + 0x2f8);
      lVar5 = (longlong)*(int *)(param_1 + 0x300) * 0x100 + lVar6;
      if (lVar6 != lVar5) {
        puVar13 = (undefined4 *)(lVar6 + 0xd4);
        do {
          if (((puVar13[-0x34] != -1) &&
              (lVar1 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xc00) +
                        (longlong)(int)puVar13[-0x34] * 8), lVar1 != 0)) &&
             (plVar7 = *(longlong **)(lVar1 + 8), plVar7 != (longlong *)0x0)) {
            puVar12 = (undefined4 *)(**(code **)(*plVar7 + 0x40))(plVar7,&local_68,0);
            puVar13[-6] = *puVar12;
            puVar13[-5] = puVar12[1];
            puVar13[-4] = puVar12[2];
            puVar13[-3] = puVar12[3];
            puVar13[-2] = puVar12[4];
            puVar13[-1] = puVar12[5];
            *puVar13 = puVar12[6];
            puVar12 = (undefined4 *)
                      (**(code **)(**(longlong **)(lVar1 + 8) + 0x40))
                                (*(longlong **)(lVar1 + 8),&local_68);
            puVar13[1] = *puVar12;
            puVar13[2] = puVar12[1];
            puVar13[3] = puVar12[2];
            puVar13[4] = puVar12[3];
            puVar13[5] = puVar12[4];
            puVar13[6] = puVar12[5];
            puVar13[7] = puVar12[6];
          }
          lVar6 = lVar6 + 0x100;
          puVar13 = puVar13 + 0x40;
        } while (lVar6 != lVar5);
      }
      lVar6 = *(longlong *)(param_1 + 0x330);
      *(byte *)(param_1 + 0x1d4) = *(byte *)(lVar6 + 0x24c) >> 2 & 1;
      *(byte *)(param_1 + 0x1e4) = *(byte *)(lVar6 + 0x24c) >> 3 & 1;
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(lVar6 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar6 + 500);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar6 + 0x1f8);
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar6 + 0x200);
      if (local_38 != (code *)0x0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  FUN_142db7df0(param_1,*(undefined1 *)(param_1 + 0x340));
  return;
}



// FUNCTION 142dace70 FUN_142dace70 body=470 status=ok
// SIG undefined FUN_142dace70(void)

void FUN_142dace70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (((*(longlong *)(param_1 + 0x330) != 0) && (lVar3 = FUN_1423af5a0(), lVar3 != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x718) != 0)) {
    iVar7 = *(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x2e0);
    plVar1 = (longlong *)(param_1 + 0x2d8);
    iVar6 = *(int *)(param_1 + 0x2e0);
    iVar2 = iVar6 + iVar7;
    *(int *)(param_1 + 0x2e0) = iVar2;
    if (*(int *)(param_1 + 0x2e4) < iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar6 * 0x18),0,(longlong)iVar7 * 0x18);
    plVar4 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x328));
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x358))
                (plVar4,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
                 ,0x26d);
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x2f0)) {
        lVar3 = 0;
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)(param_1 + 0x2e8) + lVar10;
          pcVar8 = (char *)(*plVar1 + lVar3);
          FUN_142da1dd0(pcVar8,(longlong)iVar6 * 0x100 + *(longlong *)(param_1 + 0x2f8),lVar9,
                        *(undefined8 *)(param_1 + 0x330),plVar4,~*(byte *)(lVar9 + 8) & 1);
          if (*pcVar8 == '\0') {
            uVar5 = *(undefined8 *)(pcVar8 + 8);
          }
          else {
            iVar2 = *(int *)(pcVar8 + 8);
            if (((iVar2 == -1) || (iVar2 < 0)) ||
               (*(int *)(*(longlong *)(param_1 + 0x330) + 0xc08) <= iVar2)) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xc00) + (longlong)iVar2 * 8)
              ;
            }
          }
          FUN_142db6f60(param_1,uVar5,lVar9,0);
          iVar6 = iVar6 + 1;
          lVar10 = lVar10 + 0x28;
          lVar3 = lVar3 + 0x18;
        } while (iVar6 < *(int *)(param_1 + 0x2f0));
      }
      (**(code **)(*plVar4 + 0x360))(plVar4);
    }
  }
  return;
}



// FUNCTION 142dad050 FUN_142dad050 body=1227 status=ok
// SIG undefined FUN_142dad050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dad050(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar20;
  int local_res10;
  ulonglong uVar19;
  
  FUN_142da28f0(param_4,(int)param_2[1]);
  iVar14 = (int)param_2[1];
  iVar20 = (int)param_4[1];
  *(int *)(param_4 + 1) = iVar20 + iVar14;
  if (*(int *)((longlong)param_4 + 0xc) < iVar20 + iVar14) {
    FUN_140921040(param_4,iVar20);
  }
  uVar11 = 0;
  puVar9 = (undefined4 *)((longlong)iVar20 * 0x100 + *param_4);
  if (iVar14 != 0) {
    puVar8 = puVar9 + 5;
    do {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 0x40;
      puVar8[-4] = 0xffffffff;
      *(undefined8 *)(puVar8 + -3) = 0;
      *(undefined8 *)(puVar8 + -1) = 0;
      puVar8[1] = 0xffffffff;
      puVar8[2] = 0xbf800000;
      *(undefined8 *)(puVar8 + 3) = 0xffffffffbf800000;
      puVar8[5] = 0xffffffff;
      puVar8[6] = 0xbf800000;
      *(undefined8 *)(puVar8 + 7) = 0;
      *(byte *)(puVar8 + 9) = *(byte *)(puVar8 + 9) | 1;
      *(undefined8 *)(puVar8 + 10) = 0;
      *(undefined8 *)(puVar8 + 0xc) = 0;
      *(undefined8 *)(puVar8 + 0xe) = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0x3f800000;
      puVar8[0x13] = 0x3dcccccd;
      puVar8[0x14] = 0x3f000000;
      *(undefined8 *)(puVar8 + 0x15) = 0x41200000;
      *(undefined1 *)(puVar8 + 0x17) = 0;
      uVar2 = uRam00000001468b5b78;
      *(undefined8 *)(puVar8 + 0x1b) = _DAT_1468b5b70;
      *(undefined8 *)(puVar8 + 0x1d) = uVar2;
      uVar2 = uRam00000001468b5b88;
      *(undefined8 *)(puVar8 + 0x1f) = _DAT_1468b5b80;
      *(undefined8 *)(puVar8 + 0x21) = uVar2;
      uVar5 = uRam00000001468b5b9c;
      uVar4 = uRam00000001468b5b98;
      uVar3 = uRam00000001468b5b94;
      puVar8[0x23] = _DAT_1468b5b90;
      puVar8[0x24] = uVar3;
      puVar8[0x25] = uVar4;
      puVar8[0x26] = uVar5;
      *(undefined8 *)(puVar8 + 0x27) = _DAT_1468b5d90;
      puVar8[0x29] = DAT_1468b5d98;
      puVar8[0x38] = 0x3f800000;
      iVar14 = iVar14 + -1;
      puVar8 = puVar8 + 0x40;
    } while (iVar14 != 0);
  }
  iVar14 = (int)param_2[1];
  uVar12 = uVar11;
  uVar15 = uVar11;
  uVar17 = uVar11;
  if (0 < iVar14) {
    do {
      lVar13 = *param_4;
      *(int *)(uVar12 + 0x24 + lVar13) = (int)uVar15;
      uVar16 = (int)uVar15 + 1;
      *(int *)(uVar12 + 0x28 + lVar13) = (int)*(short *)(*param_2 + -0x18 + uVar17 + 0x18);
      *(undefined4 *)(uVar12 + 4 + lVar13) = 0xffffffff;
      iVar14 = (int)param_2[1];
      uVar12 = uVar12 + 0x100;
      uVar15 = (ulonglong)uVar16;
      uVar17 = uVar17 + 0x18;
    } while ((int)uVar16 < iVar14);
  }
  local_res10 = 0;
  uVar12 = uVar11;
  if (0 < iVar14) {
    do {
      lVar13 = *param_4;
      iVar14 = *(int *)(uVar12 + 0x28 + lVar13);
      *(undefined4 *)(uVar12 + lVar13) = 0xffffffff;
      iVar20 = *(int *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)iVar14 * 0x10);
      if (iVar20 != -1) {
        uVar16 = *(uint *)(param_2 + 1);
        do {
          uVar18 = 0;
          if (0 < (int)uVar16) {
            piVar10 = (int *)(*param_4 + 0x28);
            uVar15 = uVar11;
            uVar17 = uVar11;
            uVar19 = uVar11;
            do {
              uVar18 = (uint)uVar19;
              if ((*piVar10 == iVar20) && (*(longlong *)(*param_2 + 8 + uVar15) != 0)) break;
              uVar18 = uVar18 + 1;
              uVar19 = (ulonglong)uVar18;
              uVar17 = uVar17 + 1;
              piVar10 = piVar10 + 0x40;
              uVar15 = uVar15 + 0x18;
            } while ((longlong)uVar17 < (longlong)(int)uVar16);
          }
          if (iVar14 == iVar20) {
            *(undefined4 *)(uVar12 + lVar13) = 0xffffffff;
            break;
          }
          if (uVar18 != uVar16) {
            *(uint *)(uVar12 + lVar13) = uVar18;
            break;
          }
          iVar20 = *(int *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)iVar20 * 0x10);
        } while (iVar20 != -1);
      }
      iVar14 = (int)param_2[1];
      local_res10 = local_res10 + 1;
      uVar12 = uVar12 + 0x100;
    } while (local_res10 < iVar14);
  }
  uVar12 = uVar11;
  uVar15 = uVar11;
  if (0 < iVar14) {
    do {
      iVar14 = *(int *)(*param_4 + uVar12);
      iVar20 = (int)uVar15;
      if (iVar14 != -1) {
        lVar13 = (longlong)iVar14 * 0x100 + *param_4;
        piVar10 = *(int **)(lVar13 + 8);
        iVar14 = *(int *)(lVar13 + 0x10);
        for (piVar6 = piVar10; piVar6 != piVar10 + iVar14; piVar6 = piVar6 + 1) {
          if (*piVar6 == iVar20) {
            if ((int)((longlong)piVar6 - (longlong)piVar10 >> 2) != -1) goto LAB_142dad36f;
            break;
          }
        }
        *(int *)(lVar13 + 0x10) = iVar14 + 1;
        if (*(int *)(lVar13 + 0x14) < iVar14 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar13 + 8);
        }
        *(int *)(*(longlong *)(lVar13 + 8) + (longlong)iVar14 * 4) = iVar20;
      }
LAB_142dad36f:
      iVar14 = (int)param_2[1];
      uVar12 = uVar12 + 0x100;
      uVar15 = (ulonglong)(iVar20 + 1U);
    } while ((int)(iVar20 + 1U) < iVar14);
  }
  uVar12 = uVar11;
  uVar15 = uVar11;
  if (0 < (int)param_3[1]) {
    do {
      if (0 < (int)param_2[1]) {
        plVar7 = (longlong *)(*param_2 + 8);
        uVar17 = uVar11;
        do {
          if (*plVar7 == *(longlong *)(uVar15 + *param_3)) {
            *(int *)(uVar17 * 0x100 + 4 + *param_4) = (int)uVar12;
            break;
          }
          uVar17 = uVar17 + 1;
          plVar7 = plVar7 + 3;
        } while ((longlong)uVar17 < (longlong)(int)param_2[1]);
      }
      uVar16 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar16;
      uVar15 = uVar15 + 0x10;
    } while ((int)uVar16 < (int)param_3[1]);
    iVar14 = (int)param_2[1];
  }
  iVar20 = *(int *)((longlong)param_5 + 0xc);
  *(undefined4 *)(param_5 + 1) = 0;
  uVar12 = uVar11;
  if (iVar20 != iVar14) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_5);
    uVar12 = (ulonglong)*(uint *)(param_5 + 1);
    iVar20 = *(int *)((longlong)param_5 + 0xc);
  }
  iVar14 = (int)param_2[1] + (int)uVar12;
  *(int *)(param_5 + 1) = iVar14;
  if (iVar20 < iVar14) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_5,uVar12);
    iVar14 = (int)param_5[1];
  }
  uVar12 = uVar11;
  uVar15 = uVar11;
  uVar17 = uVar11;
  if (0 < iVar14) {
    do {
      lVar13 = *param_5;
      uVar2 = *(undefined8 *)(*param_2 + 8 + uVar17);
      pbVar1 = (byte *)(uVar15 + 8 + lVar13);
      *pbVar1 = *pbVar1 | 1;
      *(undefined8 *)(uVar15 + lVar13) = uVar2;
      *(undefined4 *)(uVar15 + 0x10 + lVar13) = 0x3f800000;
      *(undefined4 *)(uVar15 + 0xc + lVar13) = 0x3f800000;
      *(undefined4 *)(uVar15 + 0x18 + lVar13) = 0x3f800000;
      *(undefined4 *)(uVar15 + 0x14 + lVar13) = 0x3f800000;
      *(undefined4 *)(uVar15 + 0x20 + lVar13) = 0x7f7fffff;
      *(undefined4 *)(uVar15 + 0x1c + lVar13) = 0x7f7fffff;
      lVar13 = *param_4;
      uVar2 = *(undefined8 *)(*param_2 + 8 + uVar17);
      pbVar1 = (byte *)(uVar12 + 0x38 + lVar13);
      *pbVar1 = *pbVar1 | 1;
      *(undefined8 *)(uVar12 + 0x30 + lVar13) = uVar2;
      *(undefined4 *)(uVar12 + 0x40 + lVar13) = 0x3f800000;
      *(undefined4 *)(uVar12 + 0x3c + lVar13) = 0x3f800000;
      *(undefined4 *)(uVar12 + 0x48 + lVar13) = 0x3f800000;
      *(undefined4 *)(uVar12 + 0x44 + lVar13) = 0x3f800000;
      *(undefined4 *)(uVar12 + 0x50 + lVar13) = 0x7f7fffff;
      *(undefined4 *)(uVar12 + 0x4c + lVar13) = 0x7f7fffff;
      if (*(int *)(uVar12 + *param_4) == -1) {
        pbVar1 = (byte *)(uVar12 + 0x38 + *param_4);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      uVar16 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar16;
      uVar12 = uVar12 + 0x100;
      uVar15 = uVar15 + 0x28;
      uVar17 = uVar17 + 0x18;
    } while ((int)uVar16 < (int)param_5[1]);
  }
  return;
}



// FUNCTION 142dad520 FUN_142dad520 body=657 status=ok
// SIG undefined FUN_142dad520(void)

void FUN_142dad520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  
  FUN_142dad050(*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x718) + 0x138,param_2,param_3,
                param_1 + 0x2f8,(longlong *)(param_1 + 0x2e8));
  if (*(int *)(param_1 + 0x300) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x330);
    uVar13 = 0;
    *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(lVar9 + 0xb90);
    uVar14 = uVar13;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar8 = UPhysicsAsset::FindBodyIndex
                          (*(undefined8 *)(param_1 + 0x338),
                           *(undefined8 *)
                            (*(longlong *)(param_1 + 0x198) + (longlong)(int)uVar14 * 8));
        if (iVar8 != -1) {
          *(undefined1 *)((longlong)iVar8 * 0x100 + 0x70 + *(longlong *)(param_1 + 0x2f8)) = 1;
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x2e8) + 8 + (longlong)iVar8 * 0x28);
          *pbVar1 = *pbVar1 & 0xfe;
          iVar3 = *(int *)(param_1 + 0x208);
          *(int *)(param_1 + 0x208) = iVar3 + 1;
          if (*(int *)(param_1 + 0x20c) < iVar3 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x200,iVar3);
          }
          *(int *)(*(longlong *)(param_1 + 0x200) + (longlong)iVar3 * 4) = iVar8;
        }
        uVar15 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar15;
      } while ((int)uVar15 < *(int *)(param_1 + 0x1a0));
      lVar9 = *(longlong *)(param_1 + 0x330);
    }
    uVar14 = uVar13;
    uVar17 = uVar13;
    if (0 < *(int *)(lVar9 + 0xbf8)) {
      do {
        cVar7 = FWeakObjectPtr::IsValid
                          (*(longlong *)(uVar14 + *(longlong *)(lVar9 + 0xbf0)) + 0x140);
        if ((cVar7 != '\0') &&
           (lVar9 = FWeakObjectPtr::Get(*(longlong *)
                                         (uVar14 + *(longlong *)
                                                    (*(longlong *)(param_1 + 0x330) + 0xbf0)) +
                                        0x140), *(char *)(lVar9 + 0x98) == '\x02')) {
          lVar10 = UGCombatTextWidget::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            plVar11 = (longlong *)FName::FName(local_res8,L"PartialRagdoll",1);
            plVar12 = *(longlong **)(lVar9 + 0x310);
            plVar16 = plVar12 + (longlong)*(int *)(lVar9 + 0x318) * 6;
            for (; plVar12 != plVar16; plVar12 = plVar12 + 6) {
              if (*plVar11 == *plVar12) {
                if (plVar12 != (longlong *)0x0) {
                  lVar10 = plVar12[2];
                  lVar9 = *(longlong *)(param_1 + 0x2f8);
                  plVar11 = (longlong *)(lVar9 + 0x30 + uVar13);
                  *plVar11 = plVar12[1];
                  plVar11[1] = lVar10;
                  uVar4 = *(undefined4 *)((longlong)plVar12 + 0x1c);
                  lVar10 = plVar12[4];
                  uVar5 = *(undefined4 *)((longlong)plVar12 + 0x24);
                  puVar2 = (undefined4 *)(lVar9 + 0x40 + uVar13);
                  *puVar2 = (int)plVar12[3];
                  puVar2[1] = uVar4;
                  puVar2[2] = (int)lVar10;
                  puVar2[3] = uVar5;
                  *(longlong *)(lVar9 + 0x50 + uVar13) = plVar12[5];
                  FUN_142db76e0(param_1,uVar17,3);
                  *(undefined1 *)(param_1 + 0x340) = 1;
                }
                break;
              }
            }
          }
        }
        lVar9 = *(longlong *)(param_1 + 0x330);
        uVar15 = (int)uVar17 + 1;
        uVar13 = uVar13 + 0x100;
        uVar14 = uVar14 + 8;
        uVar17 = (ulonglong)uVar15;
      } while ((int)uVar15 < *(int *)(lVar9 + 0xbf8));
    }
  }
  return;
}



// FUNCTION 142dad7c0 FUN_142dad7c0 body=682 status=ok
// SIG undefined FUN_142dad7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dad7c0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  undefined1 auStack_108 [32];
  float *local_e8;
  uint local_d8;
  undefined4 local_d0 [2];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  undefined ***local_a0;
  undefined **local_98;
  longlong *local_90;
  undefined8 uStack_88;
  undefined ***local_80;
  undefined ***local_60;
  ulonglong local_58;
  ulonglong uVar8;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar5 = 0;
  local_d8 = 0;
  uVar6 = uVar5;
  uVar11 = uVar5;
  local_c0 = param_4;
  local_b8 = param_1;
  if (0 < (int)param_4[1]) {
    do {
      uVar8 = 0;
      local_c8 = *local_c0;
      local_a0 = &local_98;
      local_98 = &PTR_LAB_1458a5d90;
      *(undefined4 *)(uVar6 + 0x18 + *param_3) = 0;
      local_80 = local_a0;
      local_60 = &local_98;
      *(undefined4 *)(uVar6 + 0x1c + *param_3) = 0;
      local_90 = param_3;
      uStack_88 = local_b8;
      *(undefined4 *)(uVar6 + 0x20 + *param_3) = 0;
      lVar3 = *param_3;
      pfVar12 = (float *)(lVar3 + 0x20 + uVar6);
      piVar2 = (int *)(uVar6 + lVar3 + 0x18);
      *piVar2 = *piVar2 + *(int *)(uVar6 + 0x10 + lVar3);
      lVar10 = *param_3;
      uVar9 = uVar8;
      uVar4 = (uint)uVar5;
      local_b0 = param_3;
      uStack_a8 = local_b8;
      if (0 < *(int *)(uVar6 + 0x10 + lVar10)) {
        do {
          local_d0[0] = *(undefined4 *)
                         ((longlong)*(int *)(*(longlong *)(uVar6 + 8 + lVar10) + uVar9) * 0x100 +
                          0x24 + lVar10);
          if (local_60 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_guard_xfg_dispatch_icall_nop();
          }
          local_e8 = pfVar12;
          (*(code *)(*local_60)[2])(local_60,local_d0,uVar6 + lVar3 + 0x18);
          lVar10 = *param_3;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar9 = uVar9 + 4;
          uVar4 = local_d8;
        } while ((int)uVar7 < *(int *)(uVar6 + 0x10 + lVar10));
      }
      lVar10 = local_c8;
      pfVar1 = (float *)(uVar6 + lVar3 + 0x1c);
      if (*pfVar1 <= 1e-08 && *pfVar1 != 1e-08) {
        *(undefined4 *)(uVar6 + lVar3 + 0x1c) = 0x3f800000;
      }
      if (*pfVar12 <= 1e-08 && *pfVar12 != 1e-08) {
        *pfVar12 = 1.0;
      }
      if (local_60 != (undefined ***)0x0) {
        (*(code *)(*local_60)[4])
                  (local_60,CONCAT71((int7)((ulonglong)&local_98 >> 8),local_60 != &local_98));
        uVar4 = local_d8;
      }
      lVar3 = *param_3;
      local_d8 = uVar4 + 1;
      uVar5 = (ulonglong)local_d8;
      *(float *)(lVar10 + 0x10 + uVar11) =
           (float)(*(int *)(uVar6 + 0x18 + lVar3) + 1) * *(float *)(lVar10 + 0x10 + uVar11);
      *(float *)(lVar10 + 0xc + uVar11) =
           (float)(*(int *)(uVar6 + 0x18 + lVar3) + 1) * *(float *)(uVar6 + 0x20 + lVar3) *
           *(float *)(lVar10 + 0xc + uVar11);
      *(float *)(lVar10 + 0x18 + uVar11) =
           (float)(*(int *)(uVar6 + 0x18 + lVar3) + 1) * *(float *)(lVar10 + 0x18 + uVar11);
      *(float *)(lVar10 + 0x14 + uVar11) =
           (float)(*(int *)(uVar6 + 0x18 + lVar3) + 1) * *(float *)(uVar6 + 0x1c + lVar3) *
           *(float *)(lVar10 + 0x14 + uVar11);
      uVar11 = uVar11 + 0x28;
      *(undefined4 *)(uVar6 + 0x2c + lVar3) = 0x3f800000;
      uVar6 = uVar6 + 0x100;
    } while ((int)local_d8 < (int)local_c0[1]);
  }
  return;
}



// FUNCTION 142dada70 FUN_142dada70 body=5023 status=ok
// SIG undefined FUN_142dada70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dada70(ulonglong param_1,longlong param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  int *piVar14;
  int iVar15;
  void *_Dst;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  int iVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong **pplVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  longlong *local_1a8;
  ulonglong local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float fStack_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  float local_158;
  longlong *local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_140;
  undefined8 local_138;
  void *local_130;
  uint local_128;
  int local_124;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  int local_104;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  float *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  float local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  
  local_res18 = *(longlong *)(param_2 + 0x20);
  local_res20 = *(longlong *)(param_1 + 0x140);
  lVar28 = *(longlong *)(local_res18 + 0x718);
  if (local_res20 == 0) {
    local_res20 = FUN_1423af5a0();
  }
  lVar7 = *(longlong *)(param_2 + 0x28);
  local_68 = lVar7;
  iVar4 = FUN_1422ac1a0(lVar7,lVar28);
  plVar27 = (longlong *)(param_1 + 0x1e8);
  uVar17 = 0;
  local_120 = (longlong)iVar4 * 0x20 + *(longlong *)(lVar7 + 0x2e0);
  uVar6 = *(uint *)(lVar7 + 0x80);
  uVar23 = (ulonglong)uVar6;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  local_res10[0] = uVar6;
  if (*(int *)(param_1 + 500) < (int)uVar6) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar27,uVar6);
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(uint *)(param_1 + 500) != uVar6) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar27,uVar6);
  }
  if (0 < (int)uVar6) {
    do {
      iVar4 = *(int *)(param_1 + 0x1f0);
      *(int *)(param_1 + 0x1f0) = iVar4 + 1;
      if (*(int *)(param_1 + 500) < iVar4 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar27,iVar4);
      }
      puVar21 = (undefined4 *)(*plVar27 + (longlong)iVar4 * 4);
      if (puVar21 != (undefined4 *)0x0) {
        *puVar21 = 0xffffffff;
      }
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  if (((local_res20 != 0) && (local_res18 != 0)) &&
     ((*(longlong *)(local_res18 + 0x120) != 0 || (lVar7 = FUN_1423407b0(), lVar7 != 0)))) {
    lVar7 = *(longlong *)(param_1 + 0x1c0);
    if (lVar7 != 0) {
      FUN_14094a130(lVar7);
      FMemory::operator_delete(lVar7,0x2a0);
    }
    lVar7 = operator_new(0x2a0);
    uVar23 = uVar17;
    if (lVar7 != 0) {
      uVar23 = ImmediatePhysics::FSimulation::FSimulation(lVar7);
    }
    *(ulonglong *)(param_1 + 0x1c0) = uVar23;
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_f0 = 0;
    local_e8 = 0;
    plVar27 = *(longlong **)(local_res18 + 0x204);
    local_158 = *(float *)(local_res18 + 0x20c);
    if (SUB84(plVar27,0) == 0.0) {
      local_198 = 3.4e+38;
    }
    else {
      local_198 = 1.0 / SUB84(plVar27,0);
    }
    local_160._4_4_ = (float)((ulonglong)plVar27 >> 0x20);
    if (local_160._4_4_ == 0.0) {
      local_194 = 3.4e+38;
    }
    else {
      local_194 = 1.0 / local_160._4_4_;
    }
    if (local_158 == 0.0) {
      local_190 = 3.4e+38;
    }
    else {
      local_190 = 1.0 / local_158;
    }
    if (*(int *)(param_1 + 0x188) == 1) {
      pplVar25 = &local_78;
      local_160 = plVar27;
      local_78 = plVar27;
      local_70 = local_158;
    }
    else {
      pplVar25 = (longlong **)&local_160;
      local_160 = (longlong *)0x3f8000003f800000;
      local_158 = 1.0;
    }
    FUN_1427e09a0(local_res18,local_res20,pplVar25,&local_1a8,&local_f0,0,0,0xffffffff,0);
    uVar23 = local_1a0;
    iVar4 = (int)local_1a0;
    local_160 = (longlong *)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    if (*(int *)(param_1 + 0x1e4) != (int)local_1a0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(local_160,local_1a0 & 0xffffffff);
    }
    *(undefined4 *)(param_1 + 0x230) = 0;
    if ((*(int *)(param_1 + 0x234) < 0) && (*(int *)(param_1 + 0x234) != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x228,0);
    }
    *(undefined4 *)(param_1 + 600) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    iVar5 = *(int *)(param_1 + 0x250) + 0x1f;
    _Dst = *(void **)(param_1 + 0x248);
    if (*(void **)(param_1 + 0x248) == (void *)0x0) {
      _Dst = (void *)(param_1 + 0x238);
    }
    _guard_xfg_dispatch_icall_nop
              (_Dst,0,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2);
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (0 < (int)*(uint *)(param_1 + 0x270)) {
      uVar26 = (ulonglong)*(uint *)(param_1 + 0x270);
      do {
        lVar7 = *(longlong *)(param_1 + 0x268);
        if (*(longlong *)(param_1 + 0x268) == 0) {
          lVar7 = param_1 + 0x260;
        }
        uVar8 = (longlong)*(int *)(param_1 + 0x270) - 1U & uVar17;
        uVar17 = uVar17 + 1;
        *(undefined4 *)(lVar7 + uVar8 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    plVar27 = (longlong *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x200) = 0;
    local_78 = plVar27;
    if (*(int *)(param_1 + 0x204) < iVar4) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar27,uVar23 & 0xffffffff);
    }
    iVar5 = *(int *)(param_1 + 0x200);
    *(int *)(param_1 + 0x200) = iVar5 + iVar4;
    if (*(int *)(param_1 + 0x204) < iVar5 + iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar27,iVar5);
    }
    uVar34 = uRam0000000146b342dc;
    uVar33 = uRam0000000146b342d8;
    uVar32 = uRam0000000146b342d4;
    uVar6 = _DAT_146b342d0;
    uVar17 = uVar23 & 0xffffffff;
    puVar16 = (undefined1 *)((longlong)iVar5 * 0x40 + *plVar27);
    if (iVar4 != 0) {
      puVar9 = (uint *)(puVar16 + 0x30);
      do {
        *puVar16 = 0;
        *(undefined1 *)((longlong)puVar9 + -0x2f) = 0;
        uVar29 = uRam0000000146b342cc;
        puVar16 = puVar16 + 0x40;
        puVar9[-8] = 0;
        puVar9[-7] = 0;
        puVar9[-6] = 0;
        puVar9[-5] = uVar29;
        puVar9[-4] = 0;
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        uVar29 = uRam0000000146b342c4 & uVar32;
        uVar30 = uRam0000000146b342c8 & uVar33;
        uVar31 = uRam0000000146b342cc & uVar34;
        *puVar9 = _DAT_146b342c0 & uVar6;
        puVar9[1] = uVar29;
        puVar9[2] = uVar30;
        puVar9[3] = uVar31;
        uVar29 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar29;
        puVar9 = puVar9 + 0x10;
      } while (uVar29 != 0);
    }
    plVar27 = (longlong *)(param_1 + 0x620);
    *(undefined4 *)(param_1 + 0x628) = 0;
    if (*(int *)(param_1 + 0x62c) < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar27,uVar23 & 0xffffffff);
      uVar6 = _DAT_146b342d0;
      uVar32 = uRam0000000146b342d4;
      uVar33 = uRam0000000146b342d8;
      uVar34 = uRam0000000146b342dc;
    }
    iVar5 = *(int *)(param_1 + 0x628);
    *(int *)(param_1 + 0x628) = iVar5 + iVar4;
    if (*(int *)(param_1 + 0x62c) < iVar5 + iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar27,iVar5);
      uVar6 = _DAT_146b342d0;
      uVar32 = uRam0000000146b342d4;
      uVar33 = uRam0000000146b342d8;
      uVar34 = uRam0000000146b342dc;
    }
    puVar21 = (undefined4 *)((longlong)iVar5 * 0x30 + *plVar27);
    uVar29 = uRam0000000146b342cc;
    for (; uRam0000000146b342cc = uVar29, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[3] = uVar29;
      *(undefined8 *)(puVar21 + 4) = 0;
      *(undefined8 *)(puVar21 + 6) = 0;
      uVar29 = uRam0000000146b342c4 & uVar32;
      uVar30 = uRam0000000146b342c8 & uVar33;
      uVar31 = uRam0000000146b342cc & uVar34;
      puVar21[8] = _DAT_146b342c0 & uVar6;
      puVar21[9] = uVar29;
      puVar21[10] = uVar30;
      puVar21[0xb] = uVar31;
      puVar21 = puVar21 + 0xc;
      uVar29 = uRam0000000146b342cc;
    }
    *(undefined4 *)(param_1 + 0x288) = 0;
    if ((*(int *)(param_1 + 0x5c8) == 1) && (lVar7 = *(longlong *)(param_1 + 0x5c0), lVar7 != 0)) {
      plVar27 = *(longlong **)(lVar7 + 0x30);
      plVar12 = plVar27 + (longlong)*(int *)(lVar7 + 0x38) * 4;
      local_150 = plVar12;
      if (plVar27 != plVar12) {
        iVar4 = (int)local_1a0;
        do {
          if (0 < iVar4) {
            lVar7 = 0;
            iVar5 = 1;
            do {
              lVar20 = *(longlong *)((longlong)local_1a8 + lVar7);
              if (lVar20 != 0) {
                cVar3 = FWeakObjectPtr::IsValid(lVar20 + 0x140);
                if (((cVar3 == '\0') ||
                    (lVar10 = FWeakObjectPtr::Get(lVar20 + 0x140),
                    *(longlong *)(lVar10 + 0x90) != *plVar27)) ||
                   (FUN_1426a9140(lVar20,1,0), (char)plVar27[1] == '\0')) {
                  iVar4 = (int)local_1a0;
                }
                else {
                  iVar4 = (int)local_1a0;
                  lVar10 = lVar7;
                  iVar22 = iVar5;
                  if (iVar5 < (int)local_1a0) {
                    do {
                      piVar14 = *(int **)((longlong)local_1a8 + lVar10 + 8);
                      if (piVar14 != (int *)0x0) {
                        sVar1 = *(short *)(lVar20 + 4);
                        if ((int)sVar1 < *piVar14) {
                          iVar15 = *(int *)(*(longlong *)(lVar28 + 0x158) + 8 +
                                           (longlong)*piVar14 * 0x10);
                          do {
                            if (iVar15 == sVar1) {
                              FUN_1426a9140(piVar14,CONCAT71((uint7)(uint3)(int3)(char)((ushort)
                                                  sVar1 >> 8),1),0);
                              iVar4 = (int)local_1a0;
                              break;
                            }
                            iVar15 = *(int *)(*(longlong *)(lVar28 + 0x158) + 8 +
                                             (longlong)iVar15 * 0x10);
                          } while (iVar15 != -1);
                        }
                      }
                      iVar22 = iVar22 + 1;
                      lVar10 = lVar10 + 8;
                    } while (iVar22 < iVar4);
                  }
                }
              }
              lVar7 = lVar7 + 8;
              bVar2 = iVar5 < iVar4;
              plVar12 = local_150;
              iVar5 = iVar5 + 1;
            } while (bVar2);
          }
          plVar27 = plVar27 + 4;
        } while (plVar27 != plVar12);
      }
    }
    plVar27 = (longlong *)(param_1 + 0x6a0);
    FUN_1406c5d90(plVar27,0);
    local_60 = 0;
    local_58 = 0;
    local_100 = 0;
    local_f8 = 0;
    FUN_142d9ed70(&local_100);
    iVar4 = (int)local_f8;
    lVar7 = (longlong)(int)local_f8;
    plVar12 = (longlong *)(param_1 + 0x6f0);
    uVar23 = 0;
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    uVar17 = uVar23;
    local_150 = plVar12;
    if (*(int *)(param_1 + 0x6fc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar12);
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x6f8);
    }
    iVar4 = iVar4 + (int)uVar17;
    *(int *)(param_1 + 0x6f8) = iVar4;
    if (*(int *)(param_1 + 0x6fc) < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar12 + (longlong)(int)uVar17 * 8),0,lVar7 << 3);
    uVar6 = local_res10[0];
    lVar7 = (longlong)(int)local_res10[0];
    local_130 = (void *)0x0;
    local_124 = 0;
    local_128 = local_res10[0];
    if (0 < (int)local_res10[0]) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_130);
    }
    _guard_xfg_dispatch_icall_nop(local_130,0,lVar7 << 3);
    uVar17 = (ulonglong)((longlong)(local_1a8 + (int)local_1a0) + (7 - (longlong)local_1a8)) >> 3;
    if (local_1a8 + (int)local_1a0 < local_1a8) {
      uVar17 = uVar23;
    }
    plVar24 = local_1a8;
    if (uVar17 != 0) {
      do {
        lVar7 = *plVar24;
        cVar3 = FBodyInstance::IsValidBodyInstance(lVar7);
        if (cVar3 != '\0') {
          *(longlong *)((longlong)local_130 + (longlong)*(short *)(lVar7 + 4) * 8) = lVar7;
          FUN_1426b0300(lVar7);
        }
        plVar24 = plVar24 + 1;
        uVar23 = uVar23 + 1;
        uVar6 = local_res10[0];
      } while (uVar23 != uVar17);
    }
    lVar7 = local_120;
    local_d8 = &local_100;
    uStack_d0 = &local_130;
    local_c8 = (uint *)&local_res20;
    local_b8 = &local_res18;
    local_a8 = &local_198;
    local_a0 = local_120 + 0x10;
    local_98 = &local_60;
    local_b0 = param_1;
    uStack_c0 = lVar28 + 0x138;
    FUN_142d99ec0(&local_d8,1);
    FUN_142d99ec0(&local_d8,0);
    local_128 = 0;
    if (local_124 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_130,0);
    }
    local_140 = 0;
    local_138 = 0;
    if (uVar6 != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_140,uVar6);
      if (0 < (int)uVar6) {
        uVar17 = (ulonglong)uVar6;
        do {
          uVar23 = local_138;
          lVar20 = (longlong)(int)local_138;
          iVar4 = (int)local_138 + 1;
          local_138 = CONCAT44(local_138._4_4_,iVar4);
          if (local_138._4_4_ < iVar4) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_140,uVar23 & 0xffffffff);
          }
          piVar14 = (int *)(local_140 + lVar20 * 4);
          if (piVar14 != (int *)0x0) {
            *piVar14 = uVar6 - 1;
          }
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
    lVar10 = 0;
    iVar4 = 0;
    lVar20 = lVar10;
    if (0 < (int)local_f8) {
      do {
        *(int *)(local_140 + (ulonglong)*(ushort *)(local_100 + -2 + lVar20 + 2) * 4) = iVar4;
        iVar4 = iVar4 + 1;
        lVar20 = lVar20 + 2;
      } while (iVar4 < (int)local_f8);
    }
    local_188 = &local_140;
    uStack_180 = lVar28 + 0x138;
    AlgoImpl::
    IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
              (local_f0,(longlong)(int)local_e8,param_1 & 0xff,&local_188);
    if (0 < *(int *)(param_1 + 0x6a8) - *(int *)(param_1 + 0x6d4)) {
      iVar4 = 0;
      if (0 < (int)local_e8) {
        do {
          lVar28 = *(longlong *)(local_f0 + lVar10);
          lVar7 = *(longlong *)(lVar28 + 0x20);
          if (*(int *)(param_1 + 0x6a8) != *(int *)(param_1 + 0x6d4)) {
            lVar20 = *(longlong *)(param_1 + 0x6e0);
            if (*(longlong *)(param_1 + 0x6e0) == 0) {
              lVar20 = param_1 + 0x6d8;
            }
            iVar5 = *(int *)(lVar20 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                                      (longlong)*(int *)(param_1 + 0x6e8) - 1U) * 4);
            if (iVar5 != -1) {
              lVar20 = *plVar27;
              do {
                lVar18 = (longlong)iVar5;
                if (*(longlong *)(lVar20 + lVar18 * 0x18) == lVar7) {
                  if ((iVar5 != -1) && (lVar20 = lVar20 + lVar18 * 0x18, lVar20 != 0)) {
                    lVar7 = *(longlong *)(lVar20 + 8);
                    goto LAB_142dae357;
                  }
                  break;
                }
                iVar5 = *(int *)(lVar20 + 0x10 + lVar18 * 0x18);
              } while (iVar5 != -1);
            }
          }
          lVar7 = 0;
LAB_142dae357:
          lVar18 = 0;
          lVar20 = *(longlong *)(lVar28 + 0x28);
          if (*(int *)(param_1 + 0x6a8) != *(int *)(param_1 + 0x6d4)) {
            lVar11 = *(longlong *)(param_1 + 0x6e0);
            if (*(longlong *)(param_1 + 0x6e0) == 0) {
              lVar11 = param_1 + 0x6d8;
            }
            iVar5 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar20 >> 0x20) + (int)lVar20) &
                                      (longlong)*(int *)(param_1 + 0x6e8) - 1U) * 4);
            if (iVar5 != -1) {
              lVar11 = *plVar27;
              do {
                lVar19 = (longlong)iVar5;
                if (*(longlong *)(lVar11 + lVar19 * 0x18) == lVar20) {
                  if ((iVar5 != -1) && (lVar11 = lVar11 + lVar19 * 0x18, lVar11 != 0)) {
                    lVar18 = *(longlong *)(lVar11 + 8);
                  }
                  break;
                }
                iVar5 = *(int *)(lVar11 + 0x10 + lVar19 * 0x18);
              } while (iVar5 != -1);
            }
          }
          if (((lVar7 != 0) && (lVar18 != 0)) &&
             ((*(uint *)(lVar7 + 0x38) < *(uint *)(*(longlong *)(lVar7 + 0x30) + 0x168) ||
              (*(uint *)(lVar18 + 0x38) < *(uint *)(*(longlong *)(lVar18 + 0x30) + 0x168))))) {
            if (*(int *)(param_1 + 0x188) != 1) {
              (**(code **)(**(longlong **)(lVar28 + 8) + 0x40))
                        (*(longlong **)(lVar28 + 8),&local_188,0);
              fStack_170 = fStack_170 * local_190;
              uStack_178 = (uint *)CONCAT44(uStack_178._4_4_ * local_194,
                                            (float)uStack_178 * local_198);
              (**(code **)(**(longlong **)(lVar28 + 8) + 0x38))
                        (*(longlong **)(lVar28 + 8),0,&local_188);
              plVar12 = (longlong *)
                        (**(code **)(**(longlong **)(lVar28 + 8) + 0x40))
                                  (*(longlong **)(lVar28 + 8),&local_d8,1);
              local_188 = (longlong *)*plVar12;
              uStack_180 = plVar12[1];
              fStack_170 = *(float *)(plVar12 + 3) * local_190;
              uStack_178 = (uint *)CONCAT44(*(float *)((longlong)plVar12 + 0x14) * local_194,
                                            *(float *)(plVar12 + 2) * local_198);
              (**(code **)(**(longlong **)(lVar28 + 8) + 0x38))
                        (*(longlong **)(lVar28 + 8),1,&local_188);
            }
            ImmediatePhysics::FSimulation::CreateJoint
                      (*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(lVar28 + 8),lVar7,lVar18);
          }
          FUN_1426ce340(lVar28);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar28 + 0x1a8);
          FMemory::operator_delete(lVar28,0x1b8);
          iVar4 = iVar4 + 1;
          lVar10 = lVar10 + 8;
          plVar12 = local_150;
          lVar7 = local_120;
        } while (iVar4 < (int)local_e8);
      }
      *(undefined1 *)(param_1 + 0x5bc) = 2;
    }
    local_110 = 0;
    local_108 = 0;
    local_188 = (longlong *)(local_res20 + 0xb8);
    uStack_178 = (uint *)(local_res20 + 200);
    iVar4 = *(int *)(local_res20 + 0xe0);
    local_d8 = (longlong *)0x100000000;
    local_c8._4_4_ = 0;
    uStack_c0._0_4_ = 0;
    if (iVar4 != 0) {
      puVar9 = *(uint **)(local_res20 + 0xd8);
      if (*(uint **)(local_res20 + 0xd8) == (uint *)0x0) {
        puVar9 = uStack_178;
      }
      uVar6 = *puVar9;
      iVar5 = 0;
      while (uVar6 == 0) {
        uStack_c0._0_4_ = (uint)uStack_c0 + 0x20;
        uVar17 = (ulonglong)local_d8 >> 0x20;
        local_d8 = (longlong *)CONCAT44((int)uVar17,iVar5 + 1);
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142dae632;
        uVar6 = puVar9[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_d8 = (longlong *)CONCAT44(uVar6,SUB84(local_d8,0));
      if (uVar6 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_c8._4_4_ = ((uint)uStack_c0 - iVar5) + 0x1f;
      if (iVar4 < local_c8._4_4_) {
LAB_142dae632:
        local_c8._4_4_ = iVar4;
      }
    }
    fStack_170 = -NAN;
    iStack_16c = local_c8._4_4_;
    iStack_168 = (uint)uStack_c0;
    uStack_164 = uStack_c0._4_4_;
    uStack_180 = (longlong)local_d8;
    uStack_d0 = (void **)local_d8;
    local_b8 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0);
    uStack_c0._0_4_ = 0xffffffff;
    uStack_c0._4_4_ = local_c8._4_4_;
    bVar2 = local_c8._4_4_ < iVar4;
    local_104 = local_108;
    local_d8 = local_188;
    local_c8 = uStack_178;
    iVar4 = 0;
    if (bVar2) {
      do {
        local_188 = *(longlong **)
                     (*plVar12 +
                     (longlong)*(int *)(*local_d8 + (longlong)uStack_c0._4_4_ * 0x14) * 8);
        uStack_180 = *(undefined8 *)
                      (*plVar12 +
                      (longlong)*(int *)(*local_d8 + 4 + (longlong)uStack_c0._4_4_ * 0x14) * 8);
        local_108 = iVar4 + 1;
        if (local_104 < local_108) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_110,iVar4);
        }
        puVar21 = (undefined4 *)(local_110 + (longlong)iVar4 * 0x10);
        *puVar21 = (undefined4)local_188;
        puVar21[1] = local_188._4_4_;
        puVar21[2] = (undefined4)uStack_180;
        puVar21[3] = uStack_180._4_4_;
        uStack_c0._0_4_ = (uint)uStack_c0 & ~uStack_d0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
        iVar4 = local_108;
      } while (uStack_c0._4_4_ < (int)local_c8[6]);
    }
    ImmediatePhysics::FSimulation::SetIgnoreCollisionPairTable
              (*(undefined8 *)(param_1 + 0x1c0),&local_110);
    ImmediatePhysics::FSimulation::SetIgnoreCollisionActors
              (*(undefined8 *)(param_1 + 0x1c0),&local_60);
    FUN_142d9c800(param_1,lVar7,*(longlong *)(local_res18 + 0x718) + 0x138);
    lVar28 = local_68;
    local_80 = 0;
    local_118 = 0;
    local_120 = 0;
    local_88 = 0;
    FUN_142da13b0(local_68 + 0x58,param_1 + 0x1e8,param_1 + 0x650,plVar27,
                  *(longlong *)(param_1 + 0x1c0) + 0x30,&local_88,&local_120);
    plVar27 = (longlong *)(param_1 + 0x610);
    FUN_142dad050(lVar28 + 0x58,&local_88,&local_120,param_1 + 0x600,plVar27);
    FUN_142dad7c0(&local_88,&local_120,param_1 + 0x600,plVar27);
    lVar7 = *plVar27;
    lVar28 = lVar7 + (longlong)*(int *)(param_1 + 0x618) * 0x28;
    for (; lVar7 != lVar28; lVar7 = lVar7 + 0x28) {
      *(undefined4 *)(lVar7 + 0x10) = 0x42c80000;
      *(undefined4 *)(lVar7 + 0xc) = 0x447a0000;
      *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
      *(undefined4 *)(lVar7 + 0x14) = 0x447a0000;
    }
    if (*(int *)(param_1 + 0x5c8) == 0) {
      FUN_142da7a00(param_1,local_res20);
    }
    else if (*(int *)(param_1 + 0x5c8) == 1) {
      FUN_142da7820(param_1);
    }
    uVar13 = FUN_14094d610(*(undefined8 *)(param_1 + 0x1c0),0,&DAT_1468b5b70);
    plVar27 = (longlong *)(param_1 + 0x640);
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x648) = 0;
    if (*(int *)(param_1 + 0x64c) != *(int *)(param_1 + 0x608)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar27);
      iVar4 = *(int *)(param_1 + 0x648);
    }
    iVar5 = *(int *)(param_1 + 0x608);
    iVar22 = iVar5 + iVar4;
    *(int *)(param_1 + 0x648) = iVar22;
    if (*(int *)(param_1 + 0x64c) < iVar22) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar27);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar27 + (longlong)iVar4 * 4),0,(longlong)iVar5 << 2);
    lVar28 = *(longlong *)(param_1 + 0x600);
    lVar7 = (longlong)*(int *)(param_1 + 0x608) * 0x100 + lVar28;
    if (lVar28 != lVar7) {
      puVar21 = (undefined4 *)(lVar28 + 0xd4);
      do {
        lVar20 = (longlong)(int)puVar21[-0x2c];
        if (*(char *)(lVar20 * 0x40 + *local_78) != '\0') {
          if (puVar21[-0x34] == -1) {
            *(byte *)(puVar21 + -0x27) = *(byte *)(puVar21 + -0x27) & 0xfe;
          }
          else {
            lVar10 = (longlong)(int)puVar21[-0x34] * 0x1e0 +
                     *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x138);
            puVar21[-6] = *(undefined4 *)(lVar10 + 0x10);
            puVar21[-5] = *(undefined4 *)(lVar10 + 0x14);
            puVar21[-4] = *(undefined4 *)(lVar10 + 0x18);
            puVar21[-3] = *(undefined4 *)(lVar10 + 0x1c);
            puVar21[-2] = *(undefined4 *)(lVar10 + 0x20);
            puVar21[-1] = *(undefined4 *)(lVar10 + 0x24);
            *puVar21 = *(undefined4 *)(lVar10 + 0x28);
            puVar21[1] = *(undefined4 *)(lVar10 + 0x2c);
            puVar21[2] = *(undefined4 *)(lVar10 + 0x30);
            puVar21[3] = *(undefined4 *)(lVar10 + 0x34);
            puVar21[4] = *(undefined4 *)(lVar10 + 0x38);
            puVar21[5] = *(undefined4 *)(lVar10 + 0x3c);
            puVar21[6] = *(undefined4 *)(lVar10 + 0x40);
            puVar21[7] = *(undefined4 *)(lVar10 + 0x44);
          }
          if (local_1a8[lVar20] == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = FUN_1426979f0(local_1a8[lVar20]);
          }
          if (lVar10 != 0) {
            uStack_178 = (uint *)0x0;
            local_188 = (longlong *)0x0;
            uStack_180 = 0x3f80000000000000;
            fStack_170 = 0.0;
            local_d8 = (longlong *)0x0;
            uStack_d0 = (void **)0x3f80000000000000;
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0;
            uStack_c0._0_4_ = 0;
            plVar12 = (longlong *)
                      physx::PxD6JointCreate(DAT_146b08400,0,&local_d8,lVar10,&local_188);
            (**(code **)(*plVar12 + 0xe8))(plVar12,0,2);
            (**(code **)(*plVar12 + 0xe8))(plVar12,1,2);
            (**(code **)(*plVar12 + 0xe8))(plVar12,2,2);
            (**(code **)(*plVar12 + 0xe8))(plVar12,3,2);
            (**(code **)(*plVar12 + 0xe8))(plVar12,4,2);
            (**(code **)(*plVar12 + 0xe8))(plVar12,5,2);
            local_150 = (longlong *)0x3f8000003f800000;
            local_148 = 0x7f7fffff;
            local_144 = 1;
            if ((*(byte *)(puVar21 + -0x27) & 1) == 0) {
              (**(code **)(*plVar12 + 0x140))(plVar12,0,&local_150);
              (**(code **)(*plVar12 + 0x140))(plVar12,1,&local_150);
              (**(code **)(*plVar12 + 0x140))(plVar12,2,&local_150);
            }
            (**(code **)(*plVar12 + 0x140))(plVar12,3,&local_150);
            (**(code **)(*plVar12 + 0x140))(plVar12,4,&local_150);
            lVar10 = ImmediatePhysics::FSimulation::CreateJoint
                               (*(undefined8 *)(param_1 + 0x1c0),plVar12,uVar13,
                                *(undefined8 *)(*local_160 + lVar20 * 8));
            *(undefined4 *)(*plVar27 + lVar20 * 4) = *(undefined4 *)(lVar10 + 8);
            lVar10 = (longlong)*(int *)(lVar10 + 8) * 0x1e0;
            lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x138);
            *(undefined8 *)(lVar10 + 0x2c + lVar20) = 0;
            *(undefined4 *)(lVar10 + 0x34 + lVar20) = 0;
            *(undefined8 *)(lVar10 + 0x38 + lVar20) = 0x3f800000;
            *(undefined8 *)(lVar10 + 0x40 + lVar20) = 0;
          }
        }
        lVar28 = lVar28 + 0x100;
        puVar21 = puVar21 + 0x40;
      } while (lVar28 != lVar7);
    }
    iVar4 = *(int *)(param_1 + 0x1e0);
    if (((((iVar4 == *(int *)(param_1 + 0x608)) && (iVar4 == *(int *)(param_1 + 0x618))) &&
         ((int)local_1a0 == *(int *)(param_1 + 0x200))) &&
        ((iVar4 == *(int *)(param_1 + 0x638) &&
         (iVar4 == *(int *)(param_1 + 0x658) - *(int *)(param_1 + 0x684))))) &&
       ((iVar4 == *(int *)(param_1 + 0x6a8) - *(int *)(param_1 + 0x6d4) &&
        (iVar4 = 0, 0 < *(int *)(param_1 + 0x638))))) {
      lVar28 = 0;
      lVar7 = 0;
      do {
        lVar20 = *(longlong *)(param_1 + 0x630);
        plVar27 = local_1a8 + (int)local_1a0;
        for (plVar12 = local_1a8; plVar12 != plVar27; plVar12 = plVar12 + 1) {
          if (*plVar12 != 0) {
            lVar10 = *plVar12 + 0x140;
            cVar3 = FWeakObjectPtr::IsValid(lVar10);
            if (cVar3 != '\0') {
              lVar18 = FWeakObjectPtr::Get(lVar10);
              lVar10 = *(longlong *)(lVar7 + lVar20);
              if (*(longlong *)(lVar18 + 0x90) == lVar10) {
                if ((plVar12 != (longlong *)0x0) && (*plVar12 != 0)) {
                  lVar20 = *(longlong *)(param_1 + 0x600);
                  if (lVar10 != *(longlong *)
                                 (*(longlong *)(local_68 + 0x78) +
                                 (longlong)*(int *)(lVar20 + 0x28 + lVar28) * 0x10))
                  goto LAB_142daed03;
                  FUN_140c74540((longlong *)(param_1 + 0x650),local_res10);
                  if (local_res10[0] == 0xffffffff) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *(longlong *)(param_1 + 0x650) + (longlong)(int)local_res10[0] * 0x18;
                  }
                  piVar14 = (int *)(lVar10 + 8);
                  if (lVar10 == 0) {
                    piVar14 = (int *)0x0;
                  }
                  if ((*piVar14 != iVar4) || (*(int *)(lVar20 + 0x24 + lVar28) != iVar4))
                  goto LAB_142daed03;
                }
                break;
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
        lVar7 = lVar7 + 8;
        lVar28 = lVar28 + 0x100;
      } while (iVar4 < *(int *)(param_1 + 0x638));
    }
LAB_142daed03:
    iVar4 = 0;
    if (0 < (int)local_1a0) {
      lVar28 = 0;
      do {
        lVar7 = *(longlong *)((longlong)local_1a8 + lVar28);
        if (lVar7 != 0) {
          FUN_1426adfd0(lVar7);
          FUN_14061f570(lVar7);
          FMemory::operator_delete(lVar7,0x1b0);
        }
        iVar4 = iVar4 + 1;
        lVar28 = lVar28 + 8;
      } while (iVar4 < (int)local_1a0);
    }
    uVar17 = local_1a0 >> 0x20;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    if ((int)uVar17 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1a8,0);
    }
    FUN_142db7010(param_1);
    if (local_120 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (local_140 != 0) {
      FMemory::Free();
    }
    if (local_130 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142daee10 FUN_142daee10 body=328 status=ok
// SIG undefined FUN_142daee10(void)

float FUN_142daee10(longlong param_1,undefined8 *param_2,undefined8 param_3,float param_4,
                   float param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  if ((*(longlong **)(param_1 + 0x188) != (longlong *)0x0) &&
     (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x148))(), lVar4 != 0)) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 500) = *param_2;
    *(undefined4 *)(param_1 + 0x1fc) = uVar2;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x148))();
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(lVar4 + 0x790);
    if (param_4 < 0.0) {
      param_4 = 1.0;
    }
    if (param_5 < 0.0) {
      param_5 = 1.0;
    }
    if (85.0 <= param_5) {
      param_5 = 85.0;
    }
    pfVar1 = (float *)(param_1 + 0x214);
    FUN_142d9d300(param_1,param_2,param_3,param_4,param_5,pfVar1,param_1 + 0x20c,param_1 + 0x200);
    iVar3 = _isnan((double)*pfVar1);
    if ((iVar3 == 0) && (iVar3 = _finite((double)*pfVar1), iVar3 != 0)) {
      fVar5 = *pfVar1;
    }
    else {
      *pfVar1 = 0.0;
      fVar5 = 0.0;
    }
    *(bool *)(param_1 + 0x17d) = 0.0 < fVar5;
    return fVar5;
  }
  return 0.0;
}



// FUNCTION 142daef60 FUN_142daef60 body=265 status=ok
// SIG undefined FUN_142daef60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142daef60(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             float param_5,undefined4 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  if ((*(longlong **)(param_1 + 0x188) != (longlong *)0x0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x148))(), uVar3 = _DAT_1468b5d90,
     uVar1 = DAT_1468b5d98, lVar2 != 0)) {
    uVar1 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 500) = *param_3;
    *(undefined4 *)(param_1 + 0x1fc) = uVar1;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x148))();
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(lVar2 + 0x790);
    *(float *)(param_1 + 0x214) = param_5;
    *(undefined4 *)(param_1 + 0x20c) = param_6;
    if (0.0 < param_5) {
      param_5 = 1.0;
    }
    *(undefined1 *)(param_1 + 0x17d) = 1;
    FUN_142d9d4e0(param_1,param_3,param_4,param_5,param_6,(undefined8 *)(param_1 + 0x200));
    uVar3 = *(undefined8 *)(param_1 + 0x200);
    uVar1 = *(undefined4 *)(param_1 + 0x208);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142daf070 FUN_142daf070 body=276 status=ok
// SIG undefined FUN_142daf070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142daf070(longlong param_1,float *param_2,float param_3,byte param_4,char param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_18;
  float local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x188);
  if ((lVar3 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x168), lVar4 != 0)) {
    if (param_5 != '\0') {
      param_2[2] = 0.0;
    }
    if (param_3 <= 0.0) {
      if (param_6 != '\0') {
        fVar1 = param_2[1];
        *(float *)(lVar4 + 0x1ec) = *param_2 + *(float *)(lVar4 + 0x1ec);
        fVar2 = param_2[2];
        *(float *)(lVar4 + 0x1f0) = fVar1 + *(float *)(lVar4 + 0x1f0);
        *(float *)(lVar4 + 500) = fVar2 + *(float *)(lVar4 + 500);
        return;
      }
      local_18 = *(undefined8 *)param_2;
      local_10 = param_2[2];
      FUN_142221b50(lVar3,&local_18,0,0,0);
      return;
    }
    fVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0x1b4) = fVar1;
    *(float *)(param_1 + 0x1a4) = param_3;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_1468b5d98;
    *(char *)(param_1 + 0x180) = param_6;
    *(byte *)(param_1 + 0x1a0) = (param_4 ^ 1) + 1;
    *(undefined1 *)(param_1 + 0x179) = 0;
  }
  return;
}



// FUNCTION 142daf190 FUN_142daf190 body=602 status=ok
// SIG undefined FUN_142daf190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142daf190(longlong param_1,float *param_2,float param_3,byte param_4,char param_5,
                  char param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x168), lVar2 != 0)) {
    fVar13 = 0.0;
    if (0.0 < param_3) {
      uVar1 = *(undefined8 *)param_2;
      *(float *)(param_1 + 0x1c8) = param_3;
      fVar13 = param_2[1];
      *(char *)(param_1 + 0x17c) = param_5;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(undefined8 *)(param_1 + 0x1dc) = DAT_1468b5da0;
      *(undefined4 *)(param_1 + 0x1e4) = DAT_1468b5da8;
      fVar12 = param_2[2];
      auVar10._4_4_ = fVar13;
      auVar10._0_4_ = (float)uVar1;
      auVar10._8_4_ = fVar12;
      auVar10._12_4_ = 0;
      *(byte *)(param_1 + 0x1c4) = (param_4 ^ 1) + 1;
      fVar4 = (float)DAT_146b34290;
      fVar5 = DAT_146b34290._4_4_;
      fVar6 = DAT_146b34290._8_4_;
      auVar10 = divps(auVar10,_DAT_146b34290);
      fVar11 = (float)uVar1 - (float)(int)auVar10._0_4_ * fVar4;
      fVar13 = fVar13 - (float)(int)auVar10._4_4_ * fVar5;
      fVar12 = fVar12 - (float)(int)auVar10._8_4_ * fVar6;
      fVar11 = (float)(((uint)(fVar11 + fVar4) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar4));
      fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar5));
      fVar12 = (float)(((uint)(fVar12 + fVar6) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar6));
      bVar3 = fRam0000000146b34288 < fVar12;
      *(ulonglong *)(param_1 + 0x1d0) =
           CONCAT44(((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146b34284 < fVar13)
                    ^ (uint)fVar13,
                    ((uint)(fVar11 - fVar4) ^ (uint)fVar11) & -(uint)(_DAT_146b34280 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(param_1 + 0x1d8) =
           ((uint)(fVar12 - fVar6) ^ (uint)fVar12) & -(uint)bVar3 ^ (uint)fVar12;
      *(char *)(param_1 + 0x180) = param_6;
    }
    else {
      if (param_5 == '\0') {
        fVar13 = *param_2;
        fVar12 = param_2[2];
      }
      else {
        in_EAX = 0;
        fVar12 = 0.0;
        param_2[2] = 0.0;
        *param_2 = 0.0;
      }
      if (param_6 == '\0') {
        local_38 = *(float *)(lVar2 + 0x210);
        fStack_34 = *(float *)(lVar2 + 0x214);
        fStack_30 = *(float *)(lVar2 + 0x218);
        fStack_2c = *(float *)(lVar2 + 0x21c);
        auVar9._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_34);
        auVar9._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_38);
        auVar9._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_30);
        auVar9._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_2c);
        iVar7 = movmskps(in_EAX,auVar9);
        if (iVar7 != 0) {
          *(float *)(lVar2 + 0x250) = local_38;
          *(float *)(lVar2 + 0x254) = fStack_34;
          *(float *)(lVar2 + 600) = fStack_30;
          *(float *)(lVar2 + 0x25c) = fStack_2c;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_38,&local_48);
          *(undefined8 *)(lVar2 + 0x260) = *puVar8;
          *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        local_40 = (float)*(undefined4 *)(lVar2 + 0x268);
        puVar8 = &local_48;
        local_48 = *(undefined8 *)(lVar2 + 0x260);
      }
      else {
        local_58 = *(undefined8 *)(lVar2 + 0x1f8);
        local_50 = (float)*(undefined4 *)(lVar2 + 0x200);
        puVar8 = &local_58;
      }
      local_40 = *(float *)(puVar8 + 1);
      local_50 = fVar12 + local_40;
      local_58 = CONCAT44((float)((ulonglong)*puVar8 >> 0x20) + param_2[1],(float)*puVar8 + fVar13);
      FUN_142db7190(param_1,&local_58,param_6);
    }
  }
  return;
}



// FUNCTION 142daf3f0 FUN_142daf3f0 body=408 status=ok
// SIG undefined FUN_142daf3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142daf3f0(longlong param_1,float param_2,float param_3,byte param_4,char param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float *in_RDX;
  float fVar7;
  float fVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x188);
  if ((lVar4 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x168), lVar5 != 0)) {
    if (param_6 == '\0') {
      fVar7 = *(float *)(lVar5 + 0x220);
      param_2 = *(float *)(lVar5 + 0x224);
      fVar6 = *(float *)(lVar5 + 0x228);
      fVar8 = param_2;
    }
    else {
      fVar7 = *(float *)(lVar5 + 0x1ec);
      fVar6 = *(float *)(lVar5 + 500);
      fVar8 = *(float *)(lVar5 + 0x1f0);
    }
    if (param_5 != '\0') {
      in_RDX[2] = fVar6;
    }
    if (param_3 <= 0.0) {
      if (param_6 != '\0') {
        *(float *)(lVar5 + 0x1ec) = *in_RDX + *(float *)(lVar5 + 0x1ec);
        *(float *)(lVar5 + 0x1f0) = in_RDX[1] + *(float *)(lVar5 + 0x1f0);
        *(float *)(lVar5 + 500) = in_RDX[2] + *(float *)(lVar5 + 500);
        return;
      }
      FUN_14223c850(lVar4,param_2,0,0,0);
      return;
    }
    fVar1 = *in_RDX;
    fVar2 = in_RDX[2];
    fVar3 = in_RDX[1];
    *(float *)(param_1 + 0x1a4) = param_3;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(ulonglong *)(param_1 + 0x1ac) = CONCAT44(fVar3 - fVar8,fVar1 - fVar7);
    *(float *)(param_1 + 0x1b4) = fVar2 - fVar6;
    *(undefined8 *)(param_1 + 0x1b8) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_1468b5d98;
    *(byte *)(param_1 + 0x1a0) = (param_4 ^ 1) + 1;
    *(undefined1 *)(param_1 + 0x179) = 0;
    *(char *)(param_1 + 0x180) = param_6;
  }
  return;
}



// FUNCTION 142daf590 FUN_142daf590 body=555 status=ok
// SIG undefined FUN_142daf590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142daf590(longlong param_1,float *param_2,float param_3,byte param_4,char param_5,
                  char param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x168), lVar2 != 0)) {
    if (0.0 < param_3) {
      if (param_6 == '\0') {
        local_38 = *(float *)(lVar2 + 0x210);
        fStack_34 = *(float *)(lVar2 + 0x214);
        fStack_30 = *(float *)(lVar2 + 0x218);
        fStack_2c = *(float *)(lVar2 + 0x21c);
        auVar10._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_34);
        auVar10._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_38);
        auVar10._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_30);
        auVar10._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_2c);
        iVar7 = movmskps(in_EAX,auVar10);
        if (iVar7 != 0) {
          *(float *)(lVar2 + 0x250) = local_38;
          *(float *)(lVar2 + 0x254) = fStack_34;
          *(float *)(lVar2 + 600) = fStack_30;
          *(float *)(lVar2 + 0x25c) = fStack_2c;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_38,local_48);
          *(undefined8 *)(lVar2 + 0x260) = *puVar8;
          *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        uVar1 = *(undefined8 *)(lVar2 + 0x260);
        fVar11 = *(float *)(lVar2 + 0x268);
      }
      else {
        uVar1 = *(undefined8 *)(lVar2 + 0x1f8);
        fVar11 = *(float *)(lVar2 + 0x200);
      }
      fVar12 = param_2[1];
      fVar13 = *param_2 - (float)uVar1;
      *(char *)(param_1 + 0x17c) = param_5;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(float *)(param_1 + 0x1c8) = param_3;
      *(undefined8 *)(param_1 + 0x1dc) = DAT_1468b5da0;
      fVar14 = param_2[2];
      fVar12 = fVar12 - (float)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)(param_1 + 0x1e4) = DAT_1468b5da8;
      *(byte *)(param_1 + 0x1c4) = (param_4 ^ 1) + 1;
      auVar10 = _DAT_146b34290;
      fVar4 = (float)DAT_146b34290;
      fVar5 = DAT_146b34290._4_4_;
      fVar6 = DAT_146b34290._8_4_;
      *(char *)(param_1 + 0x180) = param_6;
      auVar9._4_4_ = fVar12;
      auVar9._0_4_ = fVar13;
      auVar9._8_4_ = fVar14 - fVar11;
      auVar9._12_4_ = 0;
      auVar10 = divps(auVar9,auVar10);
      fVar13 = fVar13 - (float)(int)auVar10._0_4_ * fVar4;
      fVar12 = fVar12 - (float)(int)auVar10._4_4_ * fVar5;
      fVar14 = (fVar14 - fVar11) - (float)(int)auVar10._8_4_ * fVar6;
      fVar11 = (float)(((uint)(fVar13 + fVar4) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar4));
      fVar12 = (float)(((uint)(fVar12 + fVar5) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar5));
      fVar14 = (float)(((uint)(fVar14 + fVar6) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                      (uint)(fVar14 + fVar6));
      bVar3 = fRam0000000146b34288 < fVar14;
      *(ulonglong *)(param_1 + 0x1d0) =
           CONCAT44(((uint)(fVar12 - fVar5) ^ (uint)fVar12) & -(uint)(fRam0000000146b34284 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar4) ^ (uint)fVar11) & -(uint)(_DAT_146b34280 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(param_1 + 0x1d8) =
           ((uint)(fVar14 - fVar6) ^ (uint)fVar14) & -(uint)bVar3 ^ (uint)fVar14;
    }
    else {
      if (param_5 != '\0') {
        param_2[2] = 0.0;
        *param_2 = 0.0;
      }
      FUN_142db7190(param_1,param_2,param_6);
    }
  }
  return;
}



// FUNCTION 142daf7c0 FUN_142daf7c0 body=15 status=ok
// SIG undefined FUN_142daf7c0(void)

void FUN_142daf7c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}



// FUNCTION 142daf7d0 FUN_142daf7d0 body=237 status=ok
// SIG undefined FUN_142daf7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142daf7d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  ulonglong in_RAX;
  float fVar3;
  undefined4 local_30;
  
  lVar1 = *(longlong *)(param_2 + 0x220);
  if (lVar1 != 0) {
    if (*(longlong *)(param_2 + 0x1188) == 0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)(*(longlong *)(param_2 + 0x1188) + 0x50);
    }
    if (*(longlong *)(lVar1 + 0x168) == 0) {
      local_30 = DAT_1468b5d98;
    }
    else {
      local_30 = *(float *)(*(longlong *)(lVar1 + 0x168) + 0x228);
    }
    fVar2 = local_30;
    if (*(longlong *)(param_1 + -0x2f0) == 0) {
      local_30 = DAT_1468b5d98;
    }
    else {
      local_30 = *(float *)(*(longlong *)(param_1 + -0x2f0) + 0x228);
    }
    in_RAX = (ulonglong)(uint)local_30;
    if (local_30 < fVar2 + *(float *)(lVar1 + 0x464) + fVar3) {
      return CONCAT71((uint7)(uint3)((uint)local_30 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142daf8c0 FUN_142daf8c0 body=223 status=ok
// SIG undefined FUN_142daf8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_142daf8c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_30;
  
  if (*(longlong *)(param_2 + 0x1188) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(*(longlong *)(param_2 + 0x1188) + 0x58);
  }
  lVar1 = *(longlong *)(param_2 + 0x178);
  if (lVar1 == 0) {
    local_30 = DAT_1466ad748;
  }
  else {
    local_30 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
  }
  fVar2 = local_30;
  if (*(longlong *)(param_1 + -0x2f0) == 0) {
    local_30 = DAT_1468b5d98;
  }
  else {
    local_30 = *(float *)(*(longlong *)(param_1 + -0x2f0) + 0x228);
  }
  return CONCAT31((int3)((uint)local_30 >> 8),local_30 < fVar2 + fVar3);
}



// FUNCTION 142daf9a0 FUN_142daf9a0 body=213 status=ok
// SIG undefined FUN_142daf9a0(void)

bool FUN_142daf9a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float *pfVar2;
  undefined8 local_48;
  float local_40;
  float local_38;
  float local_34;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_2 + 0x178);
  if (lVar1 == 0) {
    local_48 = DAT_1466ad740;
    local_40 = DAT_1466ad748;
  }
  else {
    local_48 = *(undefined8 *)(lVar1 + 0x220);
    local_40 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
  }
  FUN_142dab9e0(param_1 + -0x458,&local_38,local_40);
  pfVar2 = (float *)FUN_142dab710(param_1 + -0x458,local_28);
  return ((float)((ulonglong)local_48 >> 0x20) - local_34) * pfVar2[1] +
         ((float)local_48 - local_38) * *pfVar2 + pfVar2[2] * 0.0 < 0.0;
}



// FUNCTION 142dafa80 FUN_142dafa80 body=20 status=ok
// SIG undefined FUN_142dafa80(void)

undefined1 FUN_142dafa80(char *param_1)

{
  if ((*param_1 == '\0') && (*(float *)(param_1 + 0x18) == 0.0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142dafaa0 FUN_142dafaa0 body=33 status=ok
// SIG undefined FUN_142dafaa0(void)

undefined1 FUN_142dafaa0(longlong param_1)

{
  if (((*(char *)(param_1 + 0x1a0) == '\0') && (*(char *)(param_1 + 0x1c4) == '\0')) &&
     (*(char *)(param_1 + 0x17d) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142dafb10 FUN_142dafb10 body=68 status=ok
// SIG undefined FUN_142dafb10(void)

ulonglong FUN_142dafb10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 8);
  }
  plVar1 = plVar2 + *(int *)(param_1 + 0x90);
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 == *param_2) {
        return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 142dafb60 FUN_142dafb60 body=68 status=ok
// SIG undefined FUN_142dafb60(void)

undefined8 FUN_142dafb60(char *param_1)

{
  longlong *plVar1;
  longlong local_res8 [3];
  longlong local_res20;
  
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,local_res8,&local_res20);
      if ((local_res8[0] == 0) || (local_res20 == 0)) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142dafbc0 FUN_142dafbc0 body=181 status=ok
// SIG undefined FUN_142dafbc0(void)

void FUN_142dafbc0(undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x90);
    plVar1 = (longlong *)(param_1 + 8);
    plVar4 = *(longlong **)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
      plVar4 = plVar1;
    }
    plVar2 = plVar4 + iVar3;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
      if (*plVar4 == *param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x90) = iVar3 + 1;
    if (*(int *)(param_1 + 0x94) < iVar3 + 1) {
      TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(plVar1);
    }
    plVar4 = *(longlong **)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
      plVar4 = plVar1;
    }
    plVar4[iVar3] = *param_2;
    *param_1 = 1;
  }
  return;
}



// FUNCTION 142dafc80 FUN_142dafc80 body=78 status=ok
// SIG undefined FUN_142dafc80(void)

void FUN_142dafc80(longlong param_1,float param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    *(float *)(param_1 + 8) = param_2 + *(float *)(lVar1 + 0x790);
    *(undefined8 *)(param_1 + 0xc) = *param_3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 1);
  }
  return;
}



// FUNCTION 142dafcd0 FUN_142dafcd0 body=670 status=ok
// SIG undefined FUN_142dafcd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dafcd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined1 local_48 [64];
  
  FUN_142dba120();
  FUN_142dba420(param_1,param_2);
  if ((*(char *)(param_1 + 0x17d) != '\0') && (*(longlong **)(param_1 + 0x188) != (longlong *)0x0))
  {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x148))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x148))();
      fVar3 = *(float *)(param_1 + 0x214);
      fVar4 = *(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0x210);
      if (fVar3 <= fVar4) {
        *(undefined1 *)(param_1 + 0x17d) = 0;
        fVar4 = fVar3;
      }
      if (0.0 <= fVar4) {
        if (fVar4 <= fVar3) {
          fVar3 = fVar4;
        }
      }
      else {
        fVar3 = 0.0;
      }
      local_58._0_4_ = (float)*(undefined8 *)(param_1 + 0x200);
      local_58._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x200) >> 0x20);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x168);
      fVar4 = (float)local_58 * fVar3;
      fVar5 = local_58._4_4_ * fVar3;
      if (lVar1 == 0) {
        local_58 = _DAT_1468b5d90;
        local_50 = DAT_1468b5d98;
      }
      else {
        local_58 = *(undefined8 *)(lVar1 + 0x220);
        local_50 = *(float *)(lVar1 + 0x228);
      }
      local_60 = (*(float *)(param_1 + 0x1fc) +
                 (*(float *)(param_1 + 0x20c) * 0.5 * fVar3 + *(float *)(param_1 + 0x208)) * fVar3)
                 - local_50;
      local_68 = CONCAT44((*(float *)(param_1 + 0x1f8) + fVar5) -
                          (float)((ulonglong)local_58 >> 0x20),
                          (*(float *)(param_1 + 500) + fVar4) - (float)local_58);
      local_58 = local_68;
      local_50 = local_60;
      FUN_142221b50(*(longlong *)(param_1 + 0x188),&local_58,0,0,0);
      if ((*(char *)(param_1 + 0x17e) != '\0') &&
         ((((float)local_68 != 0.0 || (local_68._4_4_ != 0.0)) || (local_60 != 0.0)))) {
        puVar2 = (undefined8 *)FVector::Rotation(&local_68,local_48);
        local_58 = *puVar2;
        local_50 = *(float *)(puVar2 + 1);
        AActor::SetActorRotation(*(undefined8 *)(param_1 + 0x188),&local_58,0);
      }
    }
  }
  if (((*(char *)(param_1 + 0x1a0) == '\0') && (*(char *)(param_1 + 0x1c4) == '\0')) &&
     (*(char *)(param_1 + 0x17d) == '\0')) {
    if ((*(char *)(param_1 + 0x17f) != '\0') && (*(longlong *)(param_1 + 0x188) != 0)) {
      local_58 = *(undefined8 *)(param_1 + 0x1e8);
      local_50 = *(float *)(param_1 + 0x1f0);
      AActor::SetActorRotation(*(longlong *)(param_1 + 0x188),&local_58,0);
    }
    if (*(char *)(param_1 + 0x178) != '\0') {
      FUN_142359580(param_1);
    }
  }
  return;
}



// FUNCTION 142daff70 FUN_142daff70 body=218 status=ok
// SIG undefined FUN_142daff70(void)

void FUN_142daff70(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x168);
    if (lVar1 == 0) {
      uVar6 = (undefined4)DAT_1468b5da0;
      uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar4 = DAT_1468b5da8;
    }
    else {
      local_18 = *(float *)(lVar1 + 0x210);
      fStack_14 = *(float *)(lVar1 + 0x214);
      fStack_10 = *(float *)(lVar1 + 0x218);
      fStack_c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
      iVar3 = movmskps(in_EAX,auVar2);
      if (iVar3 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      uVar4 = *(undefined4 *)(lVar1 + 0x268);
    }
    *(ulonglong *)(param_1 + 0x1e8) = CONCAT44(uVar7,uVar6);
    *(undefined4 *)(param_1 + 0x1f0) = uVar4;
    *(undefined1 *)(param_1 + 0x17e) = 1;
    *(undefined1 *)(param_1 + 0x17f) = param_2;
  }
  return;
}



// FUNCTION 142db0050 FUN_142db0050 body=5385 status=ok
// SIG undefined FUN_142db0050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142db13c6) */

uint * FUN_142db0050(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint **ppuVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  byte bVar19;
  uint uVar20;
  undefined4 *puVar21;
  longlong lVar22;
  byte *pbVar23;
  longlong *plVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  longlong lVar29;
  longlong *plVar30;
  byte *pbVar31;
  undefined1 auStack_548 [32];
  byte local_528;
  byte local_527;
  short local_524 [2];
  undefined1 local_520 [8];
  longlong *local_518;
  longlong *local_510;
  uint local_508;
  uint *local_500;
  uint local_4f8;
  byte *local_4f0;
  undefined8 uStack_4e8;
  uint *puStack_4e0;
  undefined1 auStack_4d8 [16];
  undefined8 local_4c8;
  longlong *plStack_4c0;
  int local_4b8 [2];
  undefined8 local_4b0;
  undefined8 local_4a8;
  uint *local_4a0;
  longlong *local_498;
  undefined8 local_490;
  uint *local_488;
  uint local_480;
  uint uStack_47c;
  uint *puStack_478;
  undefined4 local_470;
  uint uStack_46c;
  uint uStack_468;
  undefined4 uStack_464;
  int local_460;
  uint uStack_45c;
  uint *puStack_458;
  undefined4 local_450;
  uint uStack_44c;
  int iStack_448;
  undefined4 uStack_444;
  uint local_440;
  uint uStack_43c;
  uint *puStack_438;
  undefined4 local_430;
  int iStack_42c;
  uint uStack_428;
  undefined4 uStack_424;
  uint local_420;
  uint uStack_41c;
  uint *puStack_418;
  undefined4 local_410;
  undefined8 uStack_40c;
  undefined4 uStack_404;
  longlong *local_400;
  undefined8 uStack_3f8;
  uint *local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  byte *local_3d8;
  undefined8 uStack_3d0;
  uint *local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8 [16];
  byte *local_3a8;
  char local_3a0;
  char cStack_39f;
  byte *local_398;
  undefined8 uStack_390;
  uint *local_388;
  undefined8 uStack_380;
  undefined1 local_378 [12];
  undefined4 uStack_36c;
  longlong *local_368;
  undefined1 local_360 [8];
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  longlong *local_340;
  longlong *local_338;
  undefined1 local_330 [4];
  undefined1 local_32c [4];
  longlong *local_328;
  byte local_320 [8];
  longlong local_318;
  uint local_300;
  uint uStack_2fc;
  uint local_2e0;
  uint uStack_2dc;
  byte local_2d0 [8];
  longlong local_2c8;
  byte local_2c0 [8];
  longlong local_2b8;
  longlong *local_2b0;
  undefined1 local_2a8;
  longlong local_298;
  longlong *local_290;
  longlong local_208;
  undefined1 local_1d8 [144];
  longlong local_148;
  undefined1 local_118 [144];
  longlong local_88;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_548;
  puVar14 = (uint *)0x0;
  local_4f8 = 0;
  local_518 = param_1;
  if (param_2[10] == 0) {
    if ((int *)param_2[0xc] != (int *)0x0) {
      iVar7 = *(int *)param_2[0xc];
      plVar15 = param_1 + 3;
      uVar26 = *(uint *)(param_1 + 8);
      puVar10 = (uint *)(param_1 + 5);
      local_460 = 0;
      uStack_45c = 1;
      uStack_44c = 0;
      iStack_448 = 0;
      if (uVar26 != 0) {
        puVar25 = (uint *)param_1[7];
        if ((uint *)param_1[7] == (uint *)0x0) {
          puVar25 = puVar10;
        }
        uVar20 = *puVar25;
        iStack_448 = 0;
        local_460 = 0;
        while (uVar20 == 0) {
          lVar22 = (longlong)local_460;
          iStack_448 = iStack_448 + 0x20;
          iVar16 = local_460 + 1;
          bVar4 = (int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_460;
          local_460 = iVar16;
          if (bVar4) goto LAB_142db036d;
          uVar20 = puVar25[lVar22 + 1];
        }
        uStack_45c = -uVar20 & uVar20;
        iVar16 = 0x1f;
        if (uStack_45c != 0) {
          for (; uStack_45c >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (uStack_45c == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        uStack_44c = (iStack_448 - iVar16) + 0x1f;
        if ((int)uVar26 < (int)uStack_44c) {
LAB_142db036d:
          uStack_44c = uVar26;
        }
      }
      local_450 = 0xffffffff;
      uStack_2dc = *(uint *)(param_1 + 8);
      uStack_3f8 = CONCAT44(uStack_45c,local_460);
      uStack_3e8 = CONCAT44(uStack_44c,0xffffffff);
      local_3e0 = CONCAT44(uStack_444,iStack_448);
      local_2e0 = -1 << ((byte)uStack_2dc & 0x1f);
      uVar28 = uStack_2dc & 0xffffffe0;
      uStack_4e8 = CONCAT44(uStack_45c,local_460);
      auStack_4d8._8_8_ = local_3e0;
      auStack_4d8._0_8_ = uStack_3e8;
      local_510 = plVar15;
      local_4f0 = (byte *)plVar15;
      puStack_4e0 = puVar10;
      local_4b8[0] = iVar7;
      puStack_458 = puVar10;
      local_400 = plVar15;
      local_3f0 = puVar10;
      uVar20 = uStack_2dc;
      if (uStack_2dc != uVar26) {
        puVar25 = (uint *)param_1[7];
        if ((uint *)param_1[7] == (uint *)0x0) {
          puVar25 = puVar10;
        }
        uVar20 = puVar25[(int)uStack_2dc >> 5] & local_2e0;
        iVar16 = (int)uStack_2dc >> 5;
        while (uVar20 == 0) {
          uVar28 = uVar28 + 0x20;
          if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar16)
          goto LAB_142db0449;
          uVar20 = puVar25[(longlong)iVar16 + 1];
          local_2e0 = 0xffffffff;
          iVar16 = iVar16 + 1;
        }
        uVar20 = -uVar20 & uVar20;
        iVar16 = 0x1f;
        if (uVar20 != 0) {
          for (; uVar20 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (uVar20 == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        uStack_2dc = (uVar28 - iVar16) + 0x1f;
        uVar20 = uStack_2dc;
        if ((int)uVar26 < (int)uStack_2dc) {
LAB_142db0449:
          uStack_2dc = uVar26;
          uVar20 = uVar26;
        }
      }
LAB_142db0460:
      if (((auStack_4d8._4_4_ == uVar20) && (puStack_4e0 == puVar10)) &&
         (local_4f0 == (byte *)plVar15)) {
        return puVar14;
      }
      lVar22 = (longlong)(int)auStack_4d8._4_4_ * 0xd0 + *(longlong *)local_4f0;
      if (*(int *)(lVar22 + 0x68) != *(int *)(lVar22 + 0x94)) {
        lVar11 = *(longlong *)(lVar22 + 0xa0);
        if (*(longlong *)(lVar22 + 0xa0) == 0) {
          lVar11 = lVar22 + 0x98;
        }
        iVar16 = *(int *)(lVar11 + ((longlong)*(int *)(lVar22 + 0xa8) - 1U & (longlong)iVar7) * 4);
        plVar15 = local_510;
        if (iVar16 != -1) {
          lVar11 = *(longlong *)(lVar22 + 0x60);
          do {
            if (*(int *)(lVar11 + (longlong)iVar16 * 0xc) == iVar7) {
              if (iVar16 != -1) {
                lVar29 = *(longlong *)(lVar22 + 0xa0);
                if (*(longlong *)(lVar22 + 0xa0) == 0) {
                  lVar29 = lVar22 + 0x98;
                }
                uVar9 = (longlong)*(int *)(lVar22 + 0xa8) - 1;
                iVar16 = *(int *)(lVar29 + ((longlong)iVar7 & uVar9) * 4);
                goto joined_r0x000142db0524;
              }
              break;
            }
            iVar16 = *(int *)(lVar11 + 4 + (longlong)iVar16 * 0xc);
          } while (iVar16 != -1);
        }
      }
      goto LAB_142db05ba;
    }
    if (((char)param_2[8] == '\0') || ((int)param_1[4] - *(int *)((longlong)param_1 + 0x4c) < 1)) {
      plVar15 = (longlong *)*param_2;
      uVar26 = *(uint *)(param_1 + 1);
      local_527 = 0;
      local_4f8 = uVar26;
      if (plVar15 == (longlong *)0x0) {
        if (uVar26 == 0) {
          plVar15 = (longlong *)param_2[1];
          *(undefined1 *)((longlong)param_2 + 0x43) = 1;
          if (plVar15 == (longlong *)0x0) {
            return (uint *)0x1;
          }
          puVar10 = (uint *)operator_new(0x20);
          if (puVar10 != (uint *)0x0) {
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
            puVar10[5] = 0;
            *puVar10 = 0;
            local_358 = 0;
            local_350 = 0;
            local_348 = 0;
            TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                      (puVar10 + 2,&local_350);
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar14 = puVar10;
          }
          uVar20 = (int)plVar15[0x14] - (int)plVar15[0x15];
          *puVar14 = uVar20;
          uVar26 = puVar14[4];
          uVar20 = (int)(uVar20 + 7) >> 3;
          if ((int)uVar26 < (int)uVar20) {
            puVar14[4] = uVar20;
            if ((int)puVar14[5] < (int)uVar20) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar14 + 2,uVar26);
            }
          }
          else if ((int)uVar20 < (int)uVar26) {
            TArray<unsigned_char,FDefaultAllocator>::RemoveAtImpl
                      (puVar14 + 2,uVar20,uVar26 - uVar20,1);
          }
          (**(code **)(*plVar15 + 0x58))
                    (plVar15,*(undefined8 *)(puVar14 + 2),(longlong)(int)*puVar14);
          lVar22 = local_518[2];
          if (lVar22 != 0) {
            for (lVar11 = *(longlong *)(lVar22 + 0x18); lVar11 != 0;
                lVar11 = *(longlong *)(lVar11 + 0x18)) {
              lVar22 = lVar11;
            }
            *(uint **)(lVar22 + 0x18) = puVar14;
            return (uint *)0x1;
          }
          local_518[2] = (longlong)puVar14;
          return (uint *)0x1;
        }
        piVar2 = (int *)param_1[2];
        lVar22 = param_2[1];
        local_340 = param_2;
        local_338 = param_1;
        if (piVar2 != (int *)0x0) {
          FNetBitReader::FNetBitReader
                    (local_1d8,param_2[4],*(undefined8 *)(piVar2 + 2),(longlong)*piVar2);
          param_2[1] = (longlong)local_1d8;
          cVar6 = FUN_142d98df0(&local_340);
          param_2[1] = lVar22;
          if (cVar6 == '\0') {
            FUN_142da23c0(local_518);
            if (local_148 != 0) {
              FMemory::Free();
            }
            FArchive::~FArchive(local_1d8);
            return (uint *)0x0;
          }
          local_518[2] = *(longlong *)(piVar2 + 6);
          if (*(longlong *)(piVar2 + 2) != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(piVar2,0x20);
          if (local_148 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(local_1d8);
        }
        if ((lVar22 != 0) && (cVar6 = FUN_142d98df0(&local_340), cVar6 == '\0')) {
          return (uint *)0x0;
        }
      }
      else {
        if (uVar26 == 0) {
          return (uint *)0x0;
        }
        puVar10 = (uint *)param_2[3];
        local_508 = *(uint *)(param_2 + 0xd);
        local_500 = puVar10;
        if (puVar10 == (uint *)0x0) {
          puVar10 = (uint *)operator_new(0x18);
          if (puVar10 != (uint *)0x0) {
            *(undefined ***)puVar10 = &PTR__scalar_deleting_destructor__1458a0b10;
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar14 = puVar10;
          }
          FUN_142d9b770(puVar14 + 2);
          puVar10 = puVar14;
          local_500 = puVar14;
        }
        else if ((int)puVar10[4] < (int)(uVar26 & 0xff)) {
          FUN_142d9b770(puVar10 + 2);
        }
        uVar9 = 0;
        local_528 = 0;
        plVar30 = local_518;
        if ((char)uVar26 != '\0') {
          do {
            bVar19 = (byte)uVar9;
            puVar25 = (uint *)0x0;
            plVar1 = (longlong *)(*plVar30 + (ulonglong)local_528 * 0x18);
            local_328 = plVar1;
            if ((*(longlong *)(*plVar30 + (ulonglong)local_528 * 0x18) != 0) &&
               (plVar24 = (longlong *)plVar1[1], local_510 = plVar24, plVar24 != (longlong *)0x0)) {
              lVar22 = plVar1[2];
              if (lVar22 != 0) {
                if ((*(byte *)(lVar22 + 0xb8) & 8) != 0) goto LAB_142db1288;
                if ((local_508 & 2) == 0) {
                  cVar6 = FUN_1424869e0(lVar22 + 0x140,
                                        *(undefined4 *)(*(longlong *)(puVar10 + 2) + uVar9 * 0x18));
                  if (cVar6 == '\0') {
                    plVar30 = local_518;
                    bVar19 = local_528;
                    if ((puVar14 != (uint *)0x0) && ((int)(uint)local_528 < (int)puVar14[4])) {
                      FRigVMRuntimeSettings::operator=
                                (*(longlong *)(puVar14 + 2) + (ulonglong)local_528 * 0x18,
                                 *(longlong *)(puVar10 + 2) + (ulonglong)local_528 * 0x18);
                      plVar30 = local_518;
                      bVar19 = local_528;
                    }
                    goto LAB_142db1288;
                  }
                  uVar9 = (ulonglong)local_528;
                }
                *(undefined4 *)(*(longlong *)(puVar10 + 2) + uVar9 * 0x18) =
                     *(undefined4 *)(plVar1[2] + 0x148);
                uVar9 = (ulonglong)local_528;
              }
              puVar27 = puVar10 + 2;
              if (*(longlong *)(*(longlong *)puVar27 + 8 + uVar9 * 0x18) == 0) {
                lVar22 = *plVar1;
                lVar11 = FUN_14178ca30(lVar22);
                if (lVar11 != 0) {
                  lVar22 = lVar11;
                }
                uVar12 = (**(code **)(*local_510 + 0x10))();
                local_490 = uVar12;
                puVar13 = (uint *)operator_new(0x18);
                local_488 = puVar25;
                if (puVar13 != (uint *)0x0) {
                  puVar13[2] = 1;
                  *(undefined ***)puVar13 = &PTR_FUN_143f3f2e0;
                  puVar13[3] = 1;
                  *(undefined8 *)(puVar13 + 4) = uVar12;
                  local_488 = puVar13;
                }
                SharedPointerInternals::EnableSharedFromThis(&local_490,uVar12,uVar12);
                puVar18 = (undefined8 *)(*(longlong *)puVar27 + ((ulonglong)local_528 * 3 + 1) * 8);
                if (puVar18 != &local_490) {
                  *puVar18 = local_490;
                  local_490 = 0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=(puVar18 + 1,&local_488);
                }
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                          (&local_490);
                plVar30 = *(longlong **)(*(longlong *)puVar27 + 8 + (ulonglong)local_528 * 0x18);
                (**(code **)(*plVar30 + 0x18))(plVar30,lVar22);
                plVar24 = local_510;
              }
              local_2b8 = plVar15[0x14];
              plVar30 = (longlong *)plVar15[1];
              local_2c0[0] = *(byte *)(plVar15 + 5) >> 7;
              if ((byte *)plVar30[1] < (byte *)*plVar30 + 1) {
                (**(code **)(*plVar15 + 0x50))(plVar15,&local_528,1);
              }
              else {
                local_528 = *(byte *)*plVar30;
                *plVar30 = *plVar30 + 1;
              }
              local_318 = plVar15[0x14];
              plVar30 = (longlong *)plVar15[1];
              local_320[0] = *(byte *)(plVar15 + 5) >> 7;
              local_524[0] = 0;
              if ((short *)plVar30[1] < (short *)*plVar30 + 1) {
                (**(code **)(*plVar15 + 0x50))(plVar15,local_524,2);
                if ((*(byte *)((longlong)plVar15 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(plVar15,local_524,2);
                }
              }
              else {
                local_524[0] = *(short *)*plVar30;
                *plVar30 = *plVar30 + 2;
              }
              param_2[3] = *(longlong *)(*(longlong *)puVar27 + 8 + (ulonglong)local_528 * 0x18);
              lVar22 = plVar15[0x14];
              local_2a8 = 0;
              local_2b0 = param_2;
              (**(code **)(*plVar24 + 0x18))(plVar24,&local_2b0);
              local_527 = local_527 | lVar22 < plVar15[0x14];
              if (lVar22 < plVar15[0x14]) {
                plVar30 = (longlong *)plVar15[1];
                local_520[0] = 0xff;
                if ((undefined1 *)plVar30[1] < (undefined1 *)*plVar30 + 1) {
                  (**(code **)(*plVar15 + 0x50))(plVar15,local_520,1);
                }
                else {
                  local_520[0] = *(undefined1 *)*plVar30;
                  *plVar30 = *plVar30 + 1;
                }
                local_2c8 = plVar15[0x14];
                local_524[0] = ((short)local_2c8 - (short)local_318) + -0x10;
                local_2d0[0] = *(byte *)(plVar15 + 5) >> 7;
                FBitWriterMark::PopWithoutClear(local_320,plVar15);
                plVar30 = (longlong *)plVar15[1];
                if ((short *)plVar30[1] < (short *)*plVar30 + 1) {
                  (**(code **)(*plVar15 + 0x50))(plVar15,local_524,2);
                  if ((*(byte *)((longlong)plVar15 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(plVar15,local_524,2);
                  }
                }
                else {
                  local_524[0] = *(short *)*plVar30;
                  *plVar30 = *plVar30 + 2;
                }
                FBitWriterMark::PopWithoutClear(local_2d0,plVar15);
                if (puVar14 == (uint *)0x0) {
                  puVar14 = (uint *)operator_new(0x18);
                  if (puVar14 != (uint *)0x0) {
                    *(undefined ***)puVar14 = &PTR__scalar_deleting_destructor__1458a0b10;
                    puVar14[2] = 0;
                    puVar14[3] = 0;
                    puVar14[4] = 0;
                    puVar14[5] = 0;
                    puVar25 = puVar14;
                  }
                  puVar13 = puVar25 + 2;
                  puVar14 = puVar25;
                  if (puVar13 != puVar27) {
                    uVar26 = puVar25[4];
                    if (uVar26 != 0) {
                      lVar22 = *(longlong *)puVar13 + 8;
                      do {
                        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                                  (lVar22);
                        lVar22 = lVar22 + 0x18;
                        uVar26 = uVar26 - 1;
                      } while (uVar26 != 0);
                    }
                    uVar26 = puVar10[4];
                    lVar22 = *(longlong *)puVar27;
                    puVar25[4] = uVar26;
                    if ((uVar26 == 0) && (puVar25[5] == 0)) {
                      puVar25[5] = 0;
                      plVar24 = local_510;
                    }
                    else {
                      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar13,uVar26);
                      puVar21 = *(undefined4 **)puVar13;
                      plVar24 = local_510;
                      if (uVar26 != 0) {
                        puVar18 = (undefined8 *)(lVar22 + 8);
                        do {
                          *puVar21 = *(undefined4 *)(puVar18 + -1);
                          *(undefined8 *)(puVar21 + 2) = *puVar18;
                          lVar22 = puVar18[1];
                          *(longlong *)(puVar21 + 4) = lVar22;
                          if (lVar22 != 0) {
                            LOCK();
                            *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
                            UNLOCK();
                          }
                          puVar21 = puVar21 + 6;
                          puVar18 = puVar18 + 3;
                          uVar26 = uVar26 - 1;
                        } while (uVar26 != 0);
                      }
                    }
                  }
                }
                if (puVar14 == local_500) {
                  lVar22 = *(longlong *)puVar27 + (ulonglong)local_528 * 0x18;
                  puVar18 = (undefined8 *)
                            (*(longlong *)(puVar14 + 2) + ((ulonglong)local_528 * 3 + 1) * 8);
                  plVar30 = *(longlong **)(lVar22 + 0x10);
                  uVar12 = *(undefined8 *)(lVar22 + 8);
                  if (plVar30 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
                    UNLOCK();
                  }
                  local_4c8 = uVar12;
                  plStack_4c0 = plVar30;
                  if (&local_4c8 != puVar18) {
                    local_4c8 = *puVar18;
                    plStack_4c0 = (longlong *)puVar18[1];
                    *puVar18 = uVar12;
                    puVar18[1] = plVar30;
                    local_58 = uVar12;
                    plStack_50 = plVar30;
                  }
                  plVar30 = plStack_4c0;
                  if (plStack_4c0 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_4c0 + 1;
                    lVar22 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar22 == 1) {
                      (**(code **)*plStack_4c0)(plStack_4c0);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar30 + 0xc);
                      iVar7 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar7 == 1) {
                        (**(code **)(*plStack_4c0 + 8))(plStack_4c0,1);
                      }
                    }
                  }
                }
                else {
                  uVar12 = (**(code **)(*plVar24 + 0x10))(plVar24);
                  local_4b0 = uVar12;
                  local_4a8 = FUN_1404f6ae0(uVar12);
                  SharedPointerInternals::EnableSharedFromThis(&local_4b0,uVar12,uVar12);
                  puVar18 = (undefined8 *)
                            (*(longlong *)(puVar14 + 2) + ((ulonglong)local_528 * 3 + 1) * 8);
                  if (puVar18 != &local_4b0) {
                    *puVar18 = local_4b0;
                    local_4b0 = 0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar18 + 1,&local_4a8);
                  }
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_4b0);
                }
                plVar30 = *(longlong **)
                           (*(longlong *)(puVar14 + 2) + 8 + (ulonglong)local_528 * 0x18);
                (**(code **)(*plVar30 + 0x18))(plVar30,*local_328);
                plVar30 = local_518;
                bVar19 = local_528;
              }
              else {
                if (puVar14 != (uint *)0x0) {
                  FRigVMRuntimeSettings::operator=
                            (*(longlong *)(puVar14 + 2) + (ulonglong)local_528 * 0x18,
                             *(longlong *)puVar27 + (ulonglong)local_528 * 0x18);
                }
                FBitWriterMark::PopWithoutClear(local_2c0,plVar15);
                plVar30 = local_518;
                bVar19 = local_528;
              }
            }
LAB_142db1288:
            local_528 = bVar19 + 1;
            uVar9 = (ulonglong)local_528;
            puVar10 = local_500;
          } while (local_528 < (byte)local_4f8);
        }
        puVar10 = (uint *)0x0;
        if (local_500 != puVar14) {
          puVar10 = local_500;
        }
        param_2[3] = (longlong)puVar10;
        if (puVar14 != (uint *)0x0) {
          local_4a0 = puVar14;
          plVar15 = (longlong *)FUN_1404f6ae0(puVar14);
          local_498 = plVar15;
          SharedPointerInternals::EnableSharedFromThis(&local_4a0,puVar14,puVar14);
          ppuVar3 = (uint **)param_2[2];
          if (ppuVar3 != &local_4a0) {
            *ppuVar3 = local_4a0;
            local_4a0 = (uint *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(ppuVar3 + 1,&local_498);
            plVar15 = local_498;
          }
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar30 = plVar15 + 1;
            lVar22 = *plVar30;
            *(int *)plVar30 = (int)*plVar30 + -1;
            UNLOCK();
            if ((int)lVar22 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
        }
      }
      return (uint *)(ulonglong)local_527;
    }
    local_500 = (uint *)param_2[1];
    local_4f0 = (byte *)(param_1 + 3);
    iVar7 = (int)param_1[8];
    puStack_4e0 = (uint *)(param_1 + 5);
    local_440 = 0;
    uStack_43c = 1;
    iStack_42c = 0;
    uStack_428 = 0;
    if (iVar7 != 0) {
      puVar10 = (uint *)param_1[7];
      if ((uint *)param_1[7] == (uint *)0x0) {
        puVar10 = puStack_4e0;
      }
      uVar26 = *puVar10;
      puVar25 = puVar14;
      while (uVar26 == 0) {
        iVar16 = (int)puVar14;
        uStack_428 = (int)puVar25 + 0x20;
        puVar25 = (uint *)(ulonglong)uStack_428;
        local_440 = iVar16 + 1;
        puVar14 = (uint *)(ulonglong)local_440;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar16) goto LAB_142db06af;
        uVar26 = puVar10[(longlong)iVar16 + 1];
      }
      uStack_43c = -uVar26 & uVar26;
      iVar16 = 0x1f;
      if (uStack_43c != 0) {
        for (; uStack_43c >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      if (uStack_43c == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = 0x1f - iVar16;
      }
      iStack_42c = (uStack_428 - iVar16) + 0x1f;
      if (iVar7 < iStack_42c) {
LAB_142db06af:
        iStack_42c = iVar7;
      }
    }
    local_430 = 0xffffffff;
    uStack_3c0 = CONCAT44(iStack_42c,0xffffffff);
    auStack_4d8._8_4_ = uStack_428;
    auStack_4d8._0_8_ = uStack_3c0;
    auStack_4d8._12_4_ = uStack_424;
    uStack_4e8 = CONCAT44(uStack_43c,local_440);
    local_3a0 = '\0';
    cStack_39f = '\0';
    local_378._8_4_ = SUB84(local_4f0,0);
    uStack_36c = (undefined4)((ulonglong)local_4f0 >> 0x20);
    local_378._0_8_ = auStack_4d8._8_8_;
    local_3b8._8_4_ = local_378._8_4_;
    local_3b8._0_8_ = auStack_4d8._8_8_;
    local_3b8._12_4_ = uStack_36c;
    iVar7 = iStack_42c;
    puStack_438 = puStack_4e0;
    local_3d8 = local_4f0;
    uStack_3d0 = uStack_4e8;
    local_3c8 = puStack_4e0;
    local_3a8 = local_4f0;
    if (iStack_42c < (int)param_1[8]) {
      do {
        puVar14 = local_500;
        pbVar23 = (byte *)((longlong)iVar7 * 0xd0 + *(longlong *)local_3d8);
        bVar19 = *pbVar23;
        uVar26 = (uint)bVar19;
        if (pbVar23[8] == 0) {
          if (((*(int *)(pbVar23 + 0x18) != *(int *)(pbVar23 + 0x44)) ||
              (*(int *)(pbVar23 + 0x68) != *(int *)(pbVar23 + 0x94))) &&
             ((int)uVar26 < (int)local_518[1])) {
            local_510 = (longlong *)((ulonglong)bVar19 * 0x18);
            if ((*(longlong *)((longlong)local_510 + *local_518) != 0) &&
               (*(longlong *)((longlong)local_510 + *local_518 + 8) != 0)) {
              uVar26 = 0;
              uStack_41c = 1;
              pbVar31 = pbVar23 + 0x10;
              local_420 = 0;
              iVar16 = *(int *)(pbVar23 + 0x38);
              puStack_4e0 = (uint *)(pbVar23 + 0x20);
              bVar4 = false;
              uStack_40c = 0;
              if (iVar16 != 0) {
                puVar14 = *(uint **)(pbVar23 + 0x30);
                if (*(uint **)(pbVar23 + 0x30) == (uint *)0x0) {
                  puVar14 = puStack_4e0;
                }
                uVar20 = *puVar14;
                local_420 = uVar26;
                while (uVar20 == 0) {
                  lVar22 = (longlong)(int)local_420;
                  uVar26 = uVar26 + 0x20;
                  uVar20 = local_420 + 1;
                  uStack_40c = (ulonglong)uVar26 << 0x20;
                  bVar5 = (int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_420;
                  local_420 = uVar20;
                  if (bVar5) goto LAB_142db08ff;
                  uVar20 = puVar14[lVar22 + 1];
                }
                uStack_41c = -uVar20 & uVar20;
                iVar8 = 0x1f;
                if (uStack_41c != 0) {
                  for (; uStack_41c >> iVar8 == 0; iVar8 = iVar8 + -1) {
                  }
                }
                if (uStack_41c == 0) {
                  iVar8 = 0x20;
                }
                else {
                  iVar8 = 0x1f - iVar8;
                }
                iVar8 = (uVar26 - iVar8) + 0x1f;
                uStack_40c._4_4_ = (undefined4)((ulonglong)uStack_40c >> 0x20);
                uStack_40c = CONCAT44(uStack_40c._4_4_,iVar8);
                if (iVar16 < iVar8) {
LAB_142db08ff:
                  uStack_40c = CONCAT44(uStack_40c._4_4_,iVar16);
                }
              }
              local_410 = 0xffffffff;
              uStack_4e8 = CONCAT44(uStack_41c,local_420);
              auStack_4d8._4_4_ = (int)uStack_40c;
              auStack_4d8._0_4_ = 0xffffffff;
              auStack_4d8._8_4_ = uStack_40c._4_4_;
              auStack_4d8._12_4_ = uStack_404;
              local_378._4_4_ = uStack_404;
              local_378._0_4_ = uStack_40c._4_4_;
              stack0xfffffffffffffc90 = pbVar31;
              uStack_380 = auStack_4d8._0_8_;
              iVar8 = (int)uStack_40c;
              local_4f0 = pbVar31;
              puStack_418 = puStack_4e0;
              local_398 = pbVar31;
              uStack_390 = uStack_4e8;
              local_388 = puStack_4e0;
              if ((int)uStack_40c < iVar16) {
                while( true ) {
                  puVar14 = (uint *)(*(longlong *)local_398 + (longlong)iVar8 * 0xc);
                  cVar6 = (**(code **)(*(longlong *)param_2[4] + 0x2e8))
                                    ((longlong *)param_2[4],puVar14,0);
                  if (cVar6 == '\0') {
                    lVar22 = (**(code **)(*(longlong *)param_2[4] + 0x2d8))
                                       ((longlong *)param_2[4],puVar14,0);
                    if (lVar22 != 0) {
                      if ((*puVar14 != 0) && ((*puVar14 & 1) == 0)) {
                        FUN_140ac3dd0(pbVar23 + 0x60,local_32c,puVar14,0);
                      }
                      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
                      Remove(pbVar31,iVar8);
                      bVar4 = true;
                    }
                  }
                  else {
                    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                              (pbVar31,iVar8);
                  }
                  uStack_380 = CONCAT44(uStack_380._4_4_,(uint)uStack_380 & ~uStack_390._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_390);
                  if ((int)local_388[6] <= uStack_380._4_4_) break;
                  pbVar31 = stack0xfffffffffffffc90;
                  iVar8 = uStack_380._4_4_;
                }
              }
              plVar30 = local_510;
              plVar15 = (longlong *)0x0;
              param_1 = local_518;
              if (bVar4) {
                *(undefined1 *)((longlong)param_2 + 0x41) = 1;
                if (*(char *)((longlong)param_2 + 0x42) == '\0') {
                  (**(code **)(*(longlong *)param_2[9] + 0x1d8))();
                  *(undefined1 *)((longlong)param_2 + 0x42) = 1;
                }
                FNetBitReader::FNetBitReader(&local_298,param_2[4],*(undefined8 *)(pbVar23 + 0xb8));
                param_2[1] = (longlong)&local_298;
                local_360[0] = 0;
                local_368 = param_2;
                if ((undefined1 *)local_290[1] < (undefined1 *)*local_290 + 1) {
                  (**(code **)(local_298 + 0x50))(&local_298,local_360,1);
                }
                else {
                  local_360[0] = *(undefined1 *)*local_290;
                  *local_290 = *local_290 + 1;
                }
                param_1 = local_518;
                if (*(longlong *)((longlong)plVar30 + *local_518) != 0) {
                  plVar15 = *(longlong **)((longlong)plVar30 + *local_518 + 8);
                }
                (**(code **)(*plVar15 + 0x18))(plVar15,&local_368);
                param_2[1] = (longlong)local_500;
                if (local_208 != 0) {
                  FMemory::Free();
                }
                FArchive::~FArchive(&local_298);
              }
              if ((*(int *)(pbVar23 + 0x18) == *(int *)(pbVar23 + 0x44)) &&
                 (*(int *)(pbVar23 + 0x68) == *(int *)(pbVar23 + 0x94))) {
                FUN_142db56f0(local_3b8._8_8_,iVar7);
                local_3a0 = '\x01';
              }
              goto LAB_142db0b5c;
            }
          }
LAB_142db0b41:
          FUN_142db56f0(local_3b8._8_8_,iVar7);
          local_3a0 = '\x01';
          param_1 = local_518;
        }
        else {
          param_1 = local_518;
          if ((int)uVar26 < (int)local_518[1]) {
            if ((*(longlong *)(*local_518 + (ulonglong)bVar19 * 0x18) == 0) ||
               (*(longlong *)(*local_518 + 8 + (ulonglong)bVar19 * 0x18) == 0)) goto LAB_142db0b41;
            FNetBitReader::FNetBitReader(local_118,param_2[4],*(undefined8 *)(pbVar23 + 0xb8));
            param_1 = local_518;
            param_2[1] = (longlong)local_118;
            FUN_142db4a80(local_518,param_2,uVar26);
            param_2[1] = (longlong)puVar14;
            if (local_88 != 0) {
              FMemory::Free();
            }
            FArchive::~FArchive(local_118);
          }
        }
LAB_142db0b5c:
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(uint)uStack_3c0 & ~uStack_3d0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3d0);
        iVar7 = uStack_3c0._4_4_;
      } while (uStack_3c0._4_4_ < (int)local_3c8[6]);
      if ((local_3a0 != '\0') && (cStack_39f != '\0')) {
        FUN_142da1250(local_3a8,*(int *)(local_3a8 + 8) - *(int *)(local_3a8 + 0x34),1);
      }
    }
    if ((0 < (int)param_1[4] - *(int *)((longlong)param_1 + 0x4c)) || (param_1[2] != 0)) {
      *(undefined1 *)((longlong)param_2 + 0x43) = 1;
      return (uint *)0x1;
    }
  }
  else {
    plVar15 = param_1 + 3;
    uStack_47c = 1;
    uVar26 = *(uint *)(param_1 + 8);
    puVar10 = (uint *)(param_1 + 5);
    local_480 = 0;
    uStack_46c = 0;
    uStack_468 = 0;
    if (uVar26 != 0) {
      puVar25 = (uint *)param_1[7];
      if ((uint *)param_1[7] == (uint *)0x0) {
        puVar25 = puVar10;
      }
      uVar20 = *puVar25;
      puVar27 = puVar14;
      while (uVar20 == 0) {
        iVar7 = (int)puVar14;
        uStack_468 = (int)puVar27 + 0x20;
        puVar27 = (uint *)(ulonglong)uStack_468;
        local_480 = iVar7 + 1;
        puVar14 = (uint *)(ulonglong)local_480;
        if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142db014c;
        uVar20 = puVar25[(longlong)iVar7 + 1];
      }
      uStack_47c = -uVar20 & uVar20;
      iVar7 = 0x1f;
      if (uStack_47c != 0) {
        for (; uStack_47c >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_47c == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_46c = (uStack_468 - iVar7) + 0x1f;
      if ((int)uVar26 < (int)uStack_46c) {
LAB_142db014c:
        uStack_46c = uVar26;
      }
    }
    local_470 = 0xffffffff;
    uStack_2fc = *(uint *)(param_1 + 8);
    uStack_4e8 = CONCAT44(uStack_47c,local_480);
    uStack_3e8 = CONCAT44(uStack_46c,0xffffffff);
    local_3e0 = CONCAT44(uStack_464,uStack_468);
    local_300 = -1 << ((byte)uStack_2fc & 0x1f);
    uVar28 = uStack_2fc & 0xffffffe0;
    auStack_4d8._8_8_ = local_3e0;
    auStack_4d8._0_8_ = uStack_3e8;
    uStack_3f8._0_4_ = local_480;
    uStack_3f8._4_4_ = uStack_47c;
    local_4f0 = (byte *)plVar15;
    puStack_4e0 = puVar10;
    puStack_478 = puVar10;
    local_400 = plVar15;
    local_3f0 = puVar10;
    uVar20 = uStack_2fc;
    if (uStack_2fc != uVar26) {
      puVar14 = (uint *)param_1[7];
      if ((uint *)param_1[7] == (uint *)0x0) {
        puVar14 = puVar10;
      }
      uVar20 = puVar14[(int)uStack_2fc >> 5] & local_300;
      iVar7 = (int)uStack_2fc >> 5;
      while (uVar20 == 0) {
        uVar28 = uVar28 + 0x20;
        if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142db0227;
        uVar20 = puVar14[(longlong)iVar7 + 1];
        local_300 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar20 = -uVar20 & uVar20;
      iVar7 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar20 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_2fc = (uVar28 - iVar7) + 0x1f;
      uVar20 = uStack_2fc;
      if ((int)uVar26 < (int)uStack_2fc) {
LAB_142db0227:
        uStack_2fc = uVar26;
        uVar20 = uVar26;
      }
    }
    while( true ) {
      if (((uStack_3e8._4_4_ == uVar20) && (local_3f0 == puVar10)) && (local_400 == plVar15)) break;
      lVar22 = (longlong)(int)uStack_3e8._4_4_ * 0xd0 + *local_400;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(param_2[10],lVar22 + 0x10);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(param_2[10],lVar22 + 0x60);
      piVar2 = (int *)param_2[0xb];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + *(int *)(lVar22 + 0xc0);
      }
      uStack_3e8 = CONCAT44(uStack_3e8._4_4_,(uint)uStack_3e8 & ~uStack_3f8._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3f8);
    }
  }
  return (uint *)0x1;
joined_r0x000142db0524:
  if (iVar16 == -1) goto LAB_142db059b;
  lVar17 = (longlong)iVar16;
  if (*(int *)(lVar11 + lVar17 * 0xc) == iVar7) {
    uVar9 = (longlong)*(int *)(lVar11 + 8 + lVar17 * 0xc) & uVar9;
    puVar21 = (undefined4 *)(lVar29 + uVar9 * 4);
    iVar8 = *(int *)(lVar29 + uVar9 * 4);
    goto joined_r0x000142db0564;
  }
  iVar16 = *(int *)(lVar11 + 4 + lVar17 * 0xc);
  goto joined_r0x000142db0524;
joined_r0x000142db0564:
  if (iVar8 == -1) goto LAB_142db058c;
  if (iVar8 == iVar16) {
    *puVar21 = *(undefined4 *)(lVar11 + lVar17 * 0xc + 4);
    goto LAB_142db058c;
  }
  lVar29 = (longlong)iVar8 * 3 + 1;
  iVar8 = *(int *)(lVar11 + lVar29 * 4);
  puVar21 = (undefined4 *)(lVar11 + lVar29 * 4);
  goto joined_r0x000142db0564;
LAB_142db058c:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(lVar22 + 0x60,iVar16,1);
LAB_142db059b:
  FUN_140ac3dd0(lVar22 + 0x10,local_330,local_4b8);
  puVar14 = (uint *)0x1;
  plVar15 = local_510;
LAB_142db05ba:
  auStack_4d8._0_4_ = auStack_4d8._0_4_ & ~uStack_4e8._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_4e8);
  goto LAB_142db0460;
}



// FUNCTION 142db1570 FUN_142db1570 body=118 status=ok
// SIG undefined FUN_142db1570(void)

void FUN_142db1570(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_3 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_3 + 0x670))(param_3), lVar2 != 0)
     ) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      uVar4 = UInputDeviceManager::GetInstance();
      FUN_142d9b7e0(uVar4,lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 142db15f0 FUN_142db15f0 body=158 status=ok
// SIG undefined FUN_142db15f0(void)

void FUN_142db15f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x4a4) != '\0') && (param_4 != 0)) &&
     (*(char *)(param_4 + 0x24c) < '\0')) {
    lVar1 = FUN_142df3580(param_3);
    if (lVar1 == 0) {
      return;
    }
    if (*(char *)(lVar1 + 0x68) == '\0') {
      return;
    }
    if ((*(uint *)(param_1 + 0x4a8) >> (*(byte *)(lVar1 + 0x69) & 0x1f) & 1) == 0) {
      return;
    }
  }
  FUN_1426e7060(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 142db1690 FUN_142db1690 body=118 status=ok
// SIG undefined FUN_142db1690(void)

void FUN_142db1690(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_3 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_3 + 0x670))(param_3), lVar2 != 0)
     ) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      uVar4 = UInputDeviceManager::GetInstance();
      FUN_142db5810(uVar4,lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 142db1710 FUN_142db1710 body=2790 status=ok
// SIG undefined FUN_142db1710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142db1710(longlong param_1)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined1 local_140;
  longlong local_138;
  float local_130;
  longlong local_128;
  float local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float local_104;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar9 = *(longlong **)(param_1 + 0x520);
  uVar14 = 0;
  local_138 = param_1;
  if (((*(byte *)(param_1 + 0x514) & 1) == 0) && (*(longlong *)(param_1 + 0x480) != 0)) {
    if (plVar9 == (longlong *)0x0) {
LAB_142db17b7:
      puVar8 = (undefined8 *)FName::FName(&local_128,L"TopMesh",1);
      plVar9 = (longlong *)FUN_142d99d30(&local_138,*puVar8);
      *(longlong **)(param_1 + 0x520) = plVar9;
    }
    else {
      iVar5 = *(int *)((longlong)plVar9 + 0xc);
      uVar10 = uVar14;
      if (iVar5 < (int)DAT_1469e91c4) {
        uVar13 = iVar5 >> 0x1f & 0xffff;
        uVar7 = iVar5 + uVar13;
        uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
      }
      if ((*(uint *)(uVar10 + 8) >> 0x1d & 1) != 0) goto LAB_142db17b7;
    }
    if ((*(longlong *)(param_1 + 0x518) != 0) && (plVar9[0x32] == *(longlong *)(param_1 + 0x518))) {
      *(byte *)((longlong)plVar9 + 0x24d) = *(byte *)((longlong)plVar9 + 0x24d) & 0xfd;
      local_128 = 0;
      FUN_142382f60(*(undefined8 *)(param_1 + 0x520),*(undefined8 *)(param_1 + 0x168),&DAT_146532180
                    ,0);
      plVar9 = *(longlong **)(param_1 + 0x520);
    }
    uVar10 = uVar14;
    if ((*(byte *)(param_1 + 0x514) & 1) == 0) {
      uVar10 = *(ulonglong *)(param_1 + 0x480);
    }
    (**(code **)(*plVar9 + 0x928))(plVar9,uVar10);
    TArray<FName,FDefaultAllocator>::operator=
              (*(longlong *)(param_1 + 0x520) + 0x6f0,param_1 + 0x488);
    local_d8 = _DAT_1468b5b70;
    uStack_d0 = uRam00000001468b5b78;
    local_b8 = _DAT_1468b5b90;
    uStack_b0 = uRam00000001468b5b98;
    local_c8._12_4_ = 0;
    local_c8._0_12_ = *(undefined1 (*) [12])(param_1 + 0x4cc);
    local_128 = (ulonglong)*(uint *)(param_1 + 0x4d8) << 0x20;
    local_120 = 0.0;
    puVar8 = (undefined8 *)FRotator::Quaternion(&local_128,&local_118);
    local_148 = local_148 & 0xffffffffffffff00;
    local_d8 = *puVar8;
    uStack_d0 = puVar8[1];
    FUN_142398770(*(undefined8 *)(param_1 + 0x520),&local_d8,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x830))(*(longlong **)(param_1 + 0x520),2);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x520) + 0x2ee);
    *pbVar1 = *pbVar1 ^ (*(byte *)(param_1 + 0x49c) ^
                        *(byte *)(*(longlong *)(param_1 + 0x520) + 0x2ee)) & 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x520) + 0x2dc) = *(undefined4 *)(param_1 + 0x498);
  }
  else if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x3b0))(plVar9,0);
    *(undefined8 *)(param_1 + 0x520) = 0;
  }
  plVar9 = *(longlong **)(param_1 + 0x528);
  if (((*(byte *)(param_1 + 0x514) & 2) != 0) || (*(longlong *)(param_1 + 0x4a0) == 0)) {
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x3b0))(plVar9,0);
      *(undefined8 *)(param_1 + 0x528) = 0;
    }
    goto LAB_142db1b57;
  }
  if (plVar9 == (longlong *)0x0) {
LAB_142db19bc:
    puVar8 = (undefined8 *)FName::FName(&local_128,L"BottomMesh",1);
    plVar9 = (longlong *)FUN_142d99d30(&local_138,*puVar8);
    *(longlong **)(param_1 + 0x528) = plVar9;
  }
  else {
    iVar5 = *(int *)((longlong)plVar9 + 0xc);
    uVar10 = uVar14;
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar13 = iVar5 >> 0x1f & 0xffff;
      uVar7 = iVar5 + uVar13;
      uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
    }
    if ((*(uint *)(uVar10 + 8) >> 0x1d & 1) != 0) goto LAB_142db19bc;
  }
  if ((*(longlong *)(param_1 + 0x518) != 0) && (plVar9[0x32] == *(longlong *)(param_1 + 0x518))) {
    *(byte *)((longlong)plVar9 + 0x24d) = *(byte *)((longlong)plVar9 + 0x24d) & 0xfd;
    local_138 = 0;
    FUN_142382f60(*(undefined8 *)(param_1 + 0x528),*(undefined8 *)(param_1 + 0x168),&DAT_146532180,0
                 );
    plVar9 = *(longlong **)(param_1 + 0x528);
  }
  uVar10 = uVar14;
  if ((*(byte *)(param_1 + 0x514) & 2) == 0) {
    uVar10 = *(ulonglong *)(param_1 + 0x4a0);
  }
  (**(code **)(*plVar9 + 0x928))(plVar9,uVar10);
  TArray<FName,FDefaultAllocator>::operator=(*(longlong *)(param_1 + 0x528) + 0x6f0,param_1 + 0x4a8)
  ;
  uVar7 = *(uint *)(param_1 + 0x4e8);
  fVar15 = (float)FUN_142dab430(param_1);
  local_b8 = _DAT_1468b5b90;
  uStack_b0 = uRam00000001468b5b98;
  local_d8 = _DAT_1468b5b70;
  uStack_d0 = uRam00000001468b5b78;
  local_138 = (ulonglong)uVar7 << 0x20;
  local_130 = 0.0;
  local_c8._4_4_ = *(float *)(param_1 + 0x4e0) + 0.0;
  local_c8._0_4_ = *(float *)(param_1 + 0x4dc) + 0.0;
  local_c8._8_4_ = *(float *)(param_1 + 0x4e4) + -fVar15;
  local_c8._12_4_ = 0;
  puVar8 = (undefined8 *)FRotator::Quaternion(&local_138,&local_118);
  local_148 = local_148 & 0xffffffffffffff00;
  local_d8 = *puVar8;
  uStack_d0 = puVar8[1];
  FUN_142398770(*(undefined8 *)(param_1 + 0x528),&local_d8,0,0);
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x528) + 0x2ee);
  *pbVar1 = *pbVar1 ^ (*(byte *)(param_1 + 0x49c) ^
                      *(byte *)(*(longlong *)(param_1 + 0x528) + 0x2ee)) & 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x528) + 0x2dc) = *(undefined4 *)(param_1 + 0x498);
LAB_142db1b57:
  plVar9 = *(longlong **)(param_1 + 0x518);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x928))(plVar9,*(undefined8 *)(param_1 + 0x468));
    TArray<FName,FDefaultAllocator>::operator=
              (*(longlong *)(param_1 + 0x518) + 0x6f0,param_1 + 0x470);
    local_148 = local_148 & 0xffffffffffffff00;
    FUN_142398770(*(undefined8 *)(param_1 + 0x518),&DAT_1468b5b70,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x518) + 0x9a0))();
    if ((*(longlong *)(param_1 + 0x468) != 0) && (uVar10 = uVar14, 0 < *(int *)(param_1 + 0x510))) {
      do {
        if (*(longlong *)(param_1 + 0x468) == 0) {
          fVar15 = 0.0;
          uVar12 = uVar14;
        }
        else {
          lVar11 = UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x468),local_f8);
          fVar15 = *(float *)(lVar11 + 0x14) + *(float *)(lVar11 + 0x14) +
                   *(float *)(param_1 + 0x4b8);
          uVar12 = *(ulonglong *)(param_1 + 0x468);
        }
        lVar11 = UStaticMesh::GetBounds(uVar12,&local_d8);
        local_130 = 0.0;
        local_88 = _DAT_1468b5b90;
        uStack_80 = uRam00000001468b5b98;
        local_a8 = _DAT_1468b5b70;
        uStack_a0 = uRam00000001468b5b78;
        local_138 = (ulonglong)*(uint *)(param_1 + 0x4c8) << 0x20;
        local_98._4_4_ = *(float *)(param_1 + 0x4c0) + 0.0;
        local_98._0_4_ = *(float *)(param_1 + 0x4bc) + 0.0;
        local_98._8_4_ =
             *(float *)(param_1 + 0x4c4) +
             (*(float *)(lVar11 + 0x14) * -2.0 - (float)(int)uVar10 * fVar15);
        local_98._12_4_ = 0;
        puVar8 = (undefined8 *)FRotator::Quaternion(&local_138,&local_118);
        local_a8 = *puVar8;
        uStack_a0 = puVar8[1];
        (**(code **)(**(longlong **)(param_1 + 0x518) + 0x980))
                  (*(longlong **)(param_1 + 0x518),&local_a8);
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 0x510));
    }
  }
  FUN_142dab0e0(param_1,&local_118);
  fVar15 = local_118._4_4_;
  if (*(longlong *)(param_1 + 0x530) != 0) {
    fVar3 = (float)uStack_110;
    local_130 = (local_104 - (float)uStack_110) * 0.5;
    local_138 = CONCAT44((local_108 - local_118._4_4_) * 0.5,
                         (uStack_110._4_4_ - (float)local_118) * 0.5);
    local_120 = local_130;
    FUN_14234fd70(*(longlong *)(param_1 + 0x530),&local_138,1);
    local_148 = local_148 & 0xffffffffffffff00;
    FUN_142398770(*(undefined8 *)(param_1 + 0x530),&DAT_1468b5b70,0,0);
    lVar11 = *(longlong *)(param_1 + 0x530);
    pfVar2 = (float *)(lVar11 + 0x280);
    local_120 = (fVar3 + local_104) * 0.5;
    local_128 = CONCAT44((local_118._4_4_ + local_108) * 0.5,
                         ((float)local_118 + uStack_110._4_4_) * 0.5);
    if (((*(float *)(lVar11 + 0x1f8) != *pfVar2) ||
        (*(float *)(lVar11 + 0x1fc) != *(float *)(lVar11 + 0x284))) ||
       (local_130 = local_120, *(float *)(lVar11 + 0x200) != *(float *)(lVar11 + 0x288))) {
      local_138 = *(longlong *)*(undefined1 (*) [12])(lVar11 + 0x1f8);
      auVar16._12_4_ = 0;
      auVar16._0_12_ = *(undefined1 (*) [12])(lVar11 + 0x1f8);
      fVar3 = (float)DAT_146b34290;
      fVar4 = DAT_146b34290._4_4_;
      fVar19 = DAT_146b34290._8_4_;
      auVar16 = divps(auVar16,_DAT_146b34290);
      fVar18 = (float)local_138 - (float)(int)auVar16._0_4_ * fVar3;
      fVar20 = (float)((ulonglong)local_138 >> 0x20) - (float)(int)auVar16._4_4_ * fVar4;
      fVar21 = *(float *)(lVar11 + 0x200) - (float)(int)auVar16._8_4_ * fVar19;
      fVar18 = (float)(((uint)(fVar18 + fVar3) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                      (uint)(fVar18 + fVar3));
      fVar20 = (float)(((uint)(fVar20 + fVar4) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                      (uint)(fVar20 + fVar4));
      local_130 = (float)(((uint)(fVar21 + fVar19) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                         (uint)(fVar21 + fVar19));
      local_130 = (float)(((uint)(local_130 - fVar19) ^ (uint)local_130) &
                          -(uint)(fRam0000000146b34288 < local_130) ^ (uint)local_130);
      *(ulonglong *)pfVar2 =
           CONCAT44(((uint)(fVar20 - fVar4) ^ (uint)fVar20) & -(uint)(fRam0000000146b34284 < fVar20)
                    ^ (uint)fVar20,
                    ((uint)(fVar18 - fVar3) ^ (uint)fVar18) & -(uint)(_DAT_146b34280 < fVar18) ^
                    (uint)fVar18);
      *(float *)(lVar11 + 0x288) = local_130;
      puVar8 = (undefined8 *)FRotator::Quaternion(pfVar2,&local_138);
      uVar6 = puVar8[1];
      *(undefined8 *)(lVar11 + 0x270) = *puVar8;
      *(undefined8 *)(lVar11 + 0x278) = uVar6;
    }
    local_118 = *(undefined8 *)(lVar11 + 0x270);
    uStack_110 = *(undefined8 *)(lVar11 + 0x278);
    local_140 = 0;
    local_148 = 0;
    FUN_142397be0(lVar11,&local_128,&local_118,0);
    (**(code **)(**(longlong **)(param_1 + 0x530) + 0x4b8))();
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    fVar3 = *(float *)(param_1 + 0x4fc);
    fVar4 = *(float *)(param_1 + 0x500);
    local_130 = *(float *)(param_1 + 0x4f4) * 0.5;
    uStack_110 = CONCAT44(uStack_110._4_4_,local_130);
    local_138 = CONCAT44((local_108 - fVar15) * 0.5,fVar3);
    local_120 = local_130;
    FUN_14234fd70(*(longlong *)(param_1 + 0x538),&local_138,1);
    local_148 = local_148 & 0xffffffffffffff00;
    FUN_142398770(*(undefined8 *)(param_1 + 0x538),&DAT_1468b5b70,0,0);
    lVar11 = *(longlong *)(param_1 + 0x538);
    local_128 = CONCAT44((fVar15 + local_108) * 0.5,fVar4 - fVar3);
    pfVar2 = (float *)(lVar11 + 0x280);
    local_120 = (float)uStack_110;
    if (((*(float *)(lVar11 + 0x1f8) != *pfVar2) ||
        (*(float *)(lVar11 + 0x1fc) != *(float *)(lVar11 + 0x284))) ||
       (*(float *)(lVar11 + 0x200) != *(float *)(lVar11 + 0x288))) {
      local_138 = *(longlong *)*(undefined1 (*) [12])(lVar11 + 0x1f8);
      auVar17._12_4_ = 0;
      auVar17._0_12_ = *(undefined1 (*) [12])(lVar11 + 0x1f8);
      fVar15 = (float)DAT_146b34290;
      fVar3 = DAT_146b34290._4_4_;
      fVar4 = DAT_146b34290._8_4_;
      auVar16 = divps(auVar17,_DAT_146b34290);
      fVar19 = (float)local_138 - (float)(int)auVar16._0_4_ * fVar15;
      fVar18 = (float)((ulonglong)local_138 >> 0x20) - (float)(int)auVar16._4_4_ * fVar3;
      fVar20 = *(float *)(lVar11 + 0x200) - (float)(int)auVar16._8_4_ * fVar4;
      fVar19 = (float)(((uint)(fVar19 + fVar15) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                      (uint)(fVar19 + fVar15));
      fVar18 = (float)(((uint)(fVar18 + fVar3) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                      (uint)(fVar18 + fVar3));
      local_130 = (float)(((uint)(fVar20 + fVar4) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                         (uint)(fVar20 + fVar4));
      local_130 = (float)(((uint)(local_130 - fVar4) ^ (uint)local_130) &
                          -(uint)(fRam0000000146b34288 < local_130) ^ (uint)local_130);
      *(ulonglong *)pfVar2 =
           CONCAT44(((uint)(fVar18 - fVar3) ^ (uint)fVar18) & -(uint)(fRam0000000146b34284 < fVar18)
                    ^ (uint)fVar18,
                    ((uint)(fVar19 - fVar15) ^ (uint)fVar19) & -(uint)(_DAT_146b34280 < fVar19) ^
                    (uint)fVar19);
      *(float *)(lVar11 + 0x288) = local_130;
      puVar8 = (undefined8 *)FRotator::Quaternion(pfVar2,&local_138);
      uVar6 = puVar8[1];
      *(undefined8 *)(lVar11 + 0x270) = *puVar8;
      *(undefined8 *)(lVar11 + 0x278) = uVar6;
    }
    local_118 = *(undefined8 *)(lVar11 + 0x270);
    uStack_110 = *(undefined8 *)(lVar11 + 0x278);
    local_140 = 0;
    local_148 = 0;
    FUN_142397be0(lVar11,&local_128,&local_118,0);
    (**(code **)(**(longlong **)(param_1 + 0x538) + 0x4b8))();
  }
  plVar9 = *(longlong **)(param_1 + 0x168);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x500))(plVar9,*(undefined1 *)(param_1 + 0x460));
  }
  plVar9 = *(longlong **)(param_1 + 0x520);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x500))(plVar9,*(undefined1 *)(param_1 + 0x460));
  }
  plVar9 = *(longlong **)(param_1 + 0x528);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x500))(plVar9,*(undefined1 *)(param_1 + 0x460));
  }
  plVar9 = *(longlong **)(param_1 + 0x518);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x500))(plVar9,*(undefined1 *)(param_1 + 0x460));
  }
  plVar9 = *(longlong **)(param_1 + 0x530);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x500))(plVar9,*(undefined1 *)(param_1 + 0x460));
  }
  plVar9 = *(longlong **)(param_1 + 0x538);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x500))(plVar9,*(undefined1 *)(param_1 + 0x460));
  }
  return;
}



// FUNCTION 142db2200 FUN_142db2200 body=199 status=ok
// SIG undefined FUN_142db2200(void)

void FUN_142db2200(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong local_res8;
  code *local_18;
  longlong *plStack_10;
  
  FUN_1423da200();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) &&
     ((((*(byte *)(lVar1 + 0x92) & 0x40) == 0 || ((*(byte *)(lVar1 + 0x90) & 0x10) == 0)) &&
      (cVar2 = FBodyInstance::IsValidBodyInstance(param_1 + 0x3b0), cVar2 != '\0')))) {
    if (*(char *)(param_1 + 0x3e6) == '\x02') {
      FUN_1426a9e30(param_1 + 0x3b0,0xe,1);
    }
    if (*(char *)(param_1 + 999) == '\x02') {
      FUN_1426a9e30(param_1 + 0x3b0,0xf,1);
    }
    plStack_10 = &local_res8;
    local_18 = FUN_142d9d8f0;
    local_res8 = param_1;
    FUN_142693730(param_1 + 0x3b0,&local_18);
  }
  return;
}



// FUNCTION 142db22d0 FUN_142db22d0 body=332 status=ok
// SIG undefined FUN_142db22d0(void)

void FUN_142db22d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  if ((((param_3 != 0) && (param_2 != 0)) && (lVar1 = *(longlong *)(param_3 + 0x20), lVar1 != 0)) &&
     (((*(longlong *)(lVar1 + 0x718) != 0 &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x718) + 0x48) != 0)) &&
      ((lVar9 = *(longlong *)(param_1 + 0x140), lVar9 != 0 ||
       (lVar9 = FUN_1423af5a0(lVar1), lVar9 != 0)))))) {
    iVar10 = 0;
    if (0 < *(int *)(lVar9 + 0x48)) {
      lVar11 = 0;
      do {
        lVar2 = *(longlong *)(lVar11 + *(longlong *)(lVar9 + 0x40));
        if (lVar2 == 0) {
          return;
        }
        iVar8 = FUN_1423ac950(lVar1,*(undefined8 *)(lVar2 + 0x90));
        if (iVar8 == -1) {
          return;
        }
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (iVar10 < *(int *)(lVar9 + 0x48));
    }
    uVar3 = *(undefined4 *)(lVar1 + 0x210);
    uVar4 = *(undefined4 *)(lVar1 + 0x214);
    uVar5 = *(undefined4 *)(lVar1 + 0x218);
    uVar6 = *(undefined4 *)(lVar1 + 0x21c);
    *(undefined4 *)(param_1 + 0x580) = uVar3;
    *(undefined4 *)(param_1 + 0x584) = uVar4;
    *(undefined4 *)(param_1 + 0x588) = uVar5;
    *(undefined4 *)(param_1 + 0x58c) = uVar6;
    uVar7 = *(undefined8 *)(lVar1 + 0x228);
    *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(lVar1 + 0x220);
    *(undefined8 *)(param_1 + 0x598) = uVar7;
    uVar7 = *(undefined8 *)(lVar1 + 0x238);
    *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(lVar1 + 0x230);
    *(undefined8 *)(param_1 + 0x5a8) = uVar7;
    *(undefined4 *)(param_1 + 0x700) = uVar3;
    *(undefined4 *)(param_1 + 0x704) = uVar4;
    *(undefined4 *)(param_1 + 0x708) = uVar5;
    *(undefined4 *)(param_1 + 0x70c) = uVar6;
    *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(param_1 + 0x590);
    *(undefined8 *)(param_1 + 0x718) = *(undefined8 *)(param_1 + 0x598);
    *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(param_1 + 0x5a0);
    *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(param_1 + 0x5a4);
    *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_1 + 0x5a8);
    *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_1 + 0x5ac);
    *(float *)(param_1 + 0x5f8) = *(float *)(param_1 + 0x5e0) * *(float *)(param_1 + 0x5e0);
    FUN_142dada70(param_1,param_3);
  }
  return;
}



// FUNCTION 142db2490 FUN_142db2490 body=33 status=ok
// SIG undefined FUN_142db2490(void)

void FUN_142db2490(longlong param_1,longlong param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Remove(param_1 + 0x98,local_res8);
  return;
}



// FUNCTION 142db24c0 FUN_142db24c0 body=405 status=ok
// SIG undefined FUN_142db24c0(void)

void FUN_142db24c0(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  int local_res10;
  undefined4 uStackX_14;
  int *local_res18 [2];
  undefined1 local_28 [8];
  undefined8 local_20;
  
  local_res8[0] = *(int *)(param_2 + 0x2c);
  if ((*(uint *)(param_2 + 8) >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) == 0) {
    FUN_1407663a0(param_1 + 0xa8,local_res8);
    return;
  }
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_2);
  local_28[0] = *(undefined1 *)(param_1 + 0x48);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  lVar5 = (**(code **)(*plVar4 + 0x400))(plVar4,local_28);
  if (lVar5 != 0) {
    lVar6 = FUN_142df99c0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142db2557;
  }
  lVar5 = 0;
LAB_142db2557:
  plVar4 = (longlong *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar6 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar6 = param_1 + 0xe0;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)local_res8[0]) * 4
                    );
    if (iVar3 != -1) {
      do {
        lVar6 = *plVar4 + (longlong)iVar3 * 0x14;
        if (*(int *)(*plVar4 + (longlong)iVar3 * 0x14) == local_res8[0]) {
          if ((iVar3 != -1) && (lVar6 != 0)) goto LAB_142db25f5;
          break;
        }
        iVar3 = *(int *)(lVar6 + 0xc);
      } while (iVar3 != -1);
    }
  }
  local_res18[0] = local_res8;
  FUN_142d968e0(plVar4,&local_res10,local_res18,0);
  lVar6 = *plVar4 + (longlong)local_res10 * 0x14;
LAB_142db25f5:
  uVar1 = *(uint *)(lVar5 + 0x54);
  uStackX_14 = CONCAT31(uStackX_14._1_3_,
                        ((byte)(uVar1 >> 1) & 1 | ((byte)uVar1 & 1) * '\x02') * '\x02' |
                        (byte)(uVar1 >> 2) & 1);
  *(ulonglong *)(lVar6 + 4) =
       CONCAT44(uStackX_14,*(float *)(lVar5 + 0x50) * *(float *)(lVar5 + 0x50));
  return;
}



// FUNCTION 142db2660 FUN_142db2660 body=61 status=ok
// SIG undefined FUN_142db2660(void)

void FUN_142db2660(longlong param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Remove(param_1 + 0x98,local_res8);
  FUN_142db2790(param_1,param_2);
  return;
}



// FUNCTION 142db26a0 FUN_142db26a0 body=227 status=ok
// SIG undefined FUN_142db26a0(void)

void FUN_142db26a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  float local_res18;
  byte local_res1c;
  undefined4 *local_28;
  float *local_20;
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_2);
  local_28 = (undefined4 *)CONCAT71(local_28._1_7_,*(undefined1 *)(param_1 + 0x48));
  local_20 = *(float **)(param_1 + 0x50);
  lVar4 = (**(code **)(*plVar3 + 0x400))(plVar3,&local_28);
  if (lVar4 != 0) {
    lVar5 = FUN_142df99c0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142db2717;
  }
  lVar4 = 0;
LAB_142db2717:
  local_res18 = *(float *)(lVar4 + 0x50) * *(float *)(lVar4 + 0x50);
  uVar1 = *(uint *)(lVar4 + 0x54);
  local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
  local_res1c = ((byte)(uVar1 >> 1) & 1 | ((byte)uVar1 & 1) * '\x02') * '\x02' |
                (byte)(uVar1 >> 2) & 1;
  local_28 = local_res8;
  local_20 = &local_res18;
  FUN_142d96a80(param_1 + 0xa8,local_res10,&local_28,0);
  return;
}



// FUNCTION 142db2790 FUN_142db2790 body=256 status=ok
// SIG undefined FUN_142db2790(void)

void FUN_142db2790(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10;
  byte local_res11;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_28;
  undefined1 *local_20;
  
  cVar3 = FWeakObjectPtr::IsValid(param_2);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_2);
    local_20 = *(undefined1 **)(param_1 + 0x50);
    local_28 = (undefined4 *)CONCAT71(local_28._1_7_,*(undefined1 *)(param_1 + 0x48));
    lVar5 = (**(code **)(*plVar4 + 0x400))(plVar4,&local_28);
    if (lVar5 != 0) {
      lVar6 = UAISenseConfig_Damage::StaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_res10 = DAT_146690f0c;
        uVar1 = *(uint *)(lVar5 + 0x48);
        local_res18[0] = *(undefined4 *)(param_2 + 0x2c);
        local_res11 = ((byte)(uVar1 >> 1) & 1 | ((byte)uVar1 & 1) * '\x02') * '\x02' |
                      (byte)(uVar1 >> 2) & 1;
        local_28 = local_res18;
        local_20 = &local_res10;
        FUN_140748240(param_1 + 0x98,local_res20,&local_28,0);
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142db2890 FUN_142db2890 body=9 status=ok
// SIG undefined FUN_142db2890(void)

void FUN_142db2890(longlong param_1)

{
  FUN_141efa480(param_1 + 0x28);
  return;
}



// FUNCTION 142db28a0 FUN_142db28a0 body=8 status=ok
// SIG undefined FUN_142db28a0(void)

void FUN_142db28a0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x198) = 1;
  return;
}



// FUNCTION 142db28b0 FUN_142db28b0 body=135 status=ok
// SIG undefined FUN_142db28b0(void)

void FUN_142db28b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_142343b00();
  plVar1 = *(longlong **)(param_1 + 0x118);
  *(longlong **)(param_1 + 0x188) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = (**(code **)(*plVar1 + 0x6e8))(plVar1);
      *(undefined8 *)(param_1 + 0x198) = uVar4;
      *(longlong *)(param_1 + 400) = plVar1[0x92];
    }
  }
  return;
}



// FUNCTION 142db2940 FUN_142db2940 body=27 status=ok
// SIG undefined FUN_142db2940(void)

void FUN_142db2940(undefined8 param_1)

{
  FUN_142da1c40();
  FUN_142db6a60(param_1);
  return;
}



// FUNCTION 142db2960 FUN_142db2960 body=54 status=ok
// SIG undefined FUN_142db2960(void)

void FUN_142db2960(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  *(longlong *)(param_1 + 0x178) = param_2;
  if (param_2 != lVar1) {
    *(longlong *)(param_1 + 0x178) = lVar1;
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
    *(undefined1 *)(param_1 + 0x318) = 0;
  }
  return;
}



// FUNCTION 142db29a0 FUN_142db29a0 body=465 status=ok
// SIG undefined FUN_142db29a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142db29a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_58 [48];
  ulonglong local_28;
  undefined8 uStack_20;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_28;
  puVar13 = auStack_58;
  if ((((param_2 != 0) && (puVar13 = auStack_58, DAT_146b17150 != 0)) &&
      (plVar1 = *(longlong **)(param_2 + 0x118), puVar13 = auStack_58, plVar1 != (longlong *)0x0))
     && (puVar13 = auStack_58, (char)plVar1[0x25] != '\x03')) {
    lVar6 = (**(code **)(*plVar1 + 0x148))();
    puVar11 = (undefined8 *)0x0;
    puVar14 = puVar11;
    if (lVar6 != 0) {
      puVar14 = *(undefined8 **)(lVar6 + 0x218);
    }
    puVar13 = auStack_58;
    if ((puVar14 != (undefined8 *)0x0) && (lVar6 = puVar14[0xb], puVar13 = auStack_58, lVar6 != 0))
    {
      iVar15 = *(int *)(param_1 + 0x10);
      puVar13 = auStack_58;
      if (iVar15 != 0) {
        lVar16 = (longlong)iVar15 * 8;
        puVar12 = puVar11;
        puVar13 = auStack_58;
        if (lVar16 != 0) {
          uVar8 = lVar16 + 0x1e;
          if (uVar8 <= lVar16 + 0xfU) {
            uVar8 = 0xffffffffffffff0;
          }
          puVar12 = (undefined8 *)((longlong)&uStack_20 + -(uVar8 & 0xfffffffffffffff0));
          puVar13 = auStack_58 + -(uVar8 & 0xfffffffffffffff0);
        }
        lVar16 = (longlong)iVar15 * 0x40;
        puVar18 = puVar11;
        if (lVar16 != 0) {
          uVar8 = lVar16 + 0x1e;
          if (uVar8 <= lVar16 + 0xfU) {
            uVar8 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar13 + -8) = 0x142db2abb;
          puVar17 = puVar13 + -(uVar8 & 0xfffffffffffffff0) + 0x3f;
          puVar13 = puVar13 + -(uVar8 & 0xfffffffffffffff0);
          puVar18 = (undefined8 *)((ulonglong)puVar17 & 0xfffffffffffffff0);
        }
        puVar19 = puVar11;
        puVar20 = puVar12;
        if (0 < iVar15) {
          do {
            *puVar20 = *(undefined8 *)
                        (*(longlong *)(param_1 + 8) + -0x10 + (longlong)(puVar19 + 10));
            iVar10 = (int)puVar11;
            puVar11 = (undefined8 *)(ulonglong)(iVar10 + 1U);
            puVar9 = puVar18 + (longlong)iVar10 * 8;
            puVar7 = (undefined8 *)((longlong)iVar10 * 0x50 + *(longlong *)(param_1 + 8));
            uVar5 = puVar7[1];
            *puVar9 = *puVar7;
            puVar9[1] = uVar5;
            uVar5 = puVar7[3];
            puVar9[2] = puVar7[2];
            puVar9[3] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar7 + 0x24);
            uVar3 = *(undefined4 *)(puVar7 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar7 + 0x2c);
            *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar7 + 4);
            *(undefined4 *)((longlong)puVar9 + 0x24) = uVar2;
            *(undefined4 *)(puVar9 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar4;
            uVar5 = puVar7[7];
            puVar9[6] = puVar7[6];
            puVar9[7] = uVar5;
            iVar15 = *(int *)(param_1 + 0x10);
            puVar19 = puVar19 + 10;
            puVar20 = puVar20 + 1;
          } while ((int)(iVar10 + 1U) < iVar15);
          lVar6 = puVar14[0xb];
        }
        *(int *)(puVar13 + 0x20) = iVar15;
        *(undefined8 *)(puVar13 + -8) = 0x142db2b4b;
        FUN_1426eb490(lVar6,param_2,puVar12);
      }
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x142db2b57;
  return;
}



// FUNCTION 142db2b80 FUN_142db2b80 body=305 status=ok
// SIG undefined FUN_142db2b80(void)

void FUN_142db2b80(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_58 [16];
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_10;
  
  if ((((param_2 != 0) && (DAT_146b17150 != 0)) && (*(longlong *)(param_2 + 0x118) != 0)) &&
     (*(char *)(*(longlong *)(param_2 + 0x118) + 0x128) != '\x03')) {
    piVar5 = (int *)*param_1;
    piVar6 = piVar5 + (longlong)*(int *)(param_1 + 1) * 7;
    for (; piVar5 != piVar6; piVar5 = piVar5 + 7) {
      iVar1 = *piVar5;
      if (((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0xbf8))) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_2 + 0xbf0) + (longlong)iVar1 * 8), lVar4 != 0))
      {
        lVar4 = lVar4 + 0x140;
        lVar2 = FWeakObjectPtr::Get(lVar4);
        if (lVar2 != 0) {
          local_40 = piVar5[3];
          local_38 = 0;
          uStack_30 = 0x3f80000000000000;
          local_48 = *(undefined8 *)(piVar5 + 1);
          local_28 = 0;
          uStack_20 = 0;
          local_18 = 0;
          local_10 = 3;
          puVar3 = (undefined8 *)FRotator::Quaternion(piVar5 + 4,local_58);
          local_38 = *puVar3;
          uStack_30 = puVar3[1];
          lVar4 = FWeakObjectPtr::Get(lVar4);
          FUN_142718320(param_2,&local_48,*(undefined8 *)(lVar4 + 0x90));
        }
      }
    }
  }
  return;
}



// FUNCTION 142db2cc0 FUN_142db2cc0 body=373 status=ok
// SIG undefined FUN_142db2cc0(void)

void FUN_142db2cc0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar8 = *(longlong **)(param_1 + 0x1b8);
  plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x1c0) * 2;
  do {
    if (plVar8 == plVar7) {
      if (param_2 != param_4) {
        *(undefined4 *)(param_1 + 0x1b0) = 0;
      }
      return;
    }
    lVar6 = 0;
    if ((*plVar8 != 0) && (plVar8[1] != 0)) {
      piVar1 = (int *)(plVar8[1] + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        plVar3 = (longlong *)plVar8[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (lVar6 = 0, !bVar9) {
            LOCK();
            bVar9 = iVar5 == (int)plVar3[1];
            if (bVar9) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar9) {
              lVar6 = *plVar8;
              LOCK();
              plVar2 = plVar3 + 1;
              lVar4 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
              break;
            }
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar9 = iVar5 == 0;
            if (bVar9) {
              *(int *)(plVar3 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
        }
        local_40 = *(undefined4 *)(param_5 + 1);
        local_48 = *param_5;
        FUN_142d679c0(lVar6,param_2,param_3,param_4,&local_48,param_6);
      }
    }
    plVar8 = plVar8 + 2;
  } while( true );
}



// FUNCTION 142db2e40 FUN_142db2e40 body=379 status=ok
// SIG undefined FUN_142db2e40(void)

void FUN_142db2e40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  lVar7 = *plVar1;
  lVar10 = (longlong)*(int *)(param_1 + 0x180) * 0x30 + lVar7;
  lVar9 = lVar7;
  if (lVar7 != lVar10) {
    while (*(longlong **)(lVar9 + 0x10) != param_2) {
      lVar9 = lVar9 + 0x30;
      if (lVar9 == lVar10) {
        return;
      }
    }
    if ((lVar9 != lVar10) &&
       (lVar7 = (lVar9 - lVar7) / 6 + (lVar9 - lVar7 >> 0x3f),
       iVar8 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f), iVar8 != -1)) {
      if ((*(byte *)(*plVar1 + 0x25 + (longlong)iVar8 * 0x30) & 2) == 0) {
        (**(code **)(*param_2 + 0x358))(param_2,0);
      }
      else {
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UScreenParticleManagerComponent::OnScreenParticleFinished",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x115,param_1,local_res8);
        (**(code **)(*param_2 + 0x3b0))(param_2,0);
        iVar4 = *(int *)(param_1 + 0x180);
        iVar6 = (iVar4 - iVar8) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar8 * 0x30),
                     (void *)((longlong)(iVar8 + 1) * 0x30 + *plVar1),(longlong)iVar6 * 0x30);
          iVar4 = *(int *)(param_1 + 0x180);
        }
        *(int *)(param_1 + 0x180) = iVar4 + -1;
        TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 142db2fc0 FUN_142db2fc0 body=747 status=ok
// SIG undefined FUN_142db2fc0(void)

void FUN_142db2fc0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *_Src;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong *local_res18;
  ulonglong local_res20;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  void *pvStack_90;
  ulonglong uStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  plVar14 = (longlong *)(param_1 + 0x28);
  uStack_b4 = 1;
  uVar2 = *(uint *)(param_1 + 0x50);
  puVar1 = (uint *)(param_1 + 0x38);
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar2 != 0) {
    puVar12 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar3 = *puVar12;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar6 = local_b8 + 1;
      bVar15 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar6;
      if (bVar15) goto LAB_142db308c;
      uVar3 = puVar12[lVar8 + 1];
    }
    uStack_b4 = -uVar3 & uVar3;
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
    uStack_a4 = (iStack_a0 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_142db308c:
      uStack_a4 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_a4;
  uStack_78 = CONCAT44(uStack_9c,iStack_a0);
  uVar11 = uVar3 & 0xffffffe0;
  uStack_88 = (ulonglong)uVar3 << 0x20;
  iStack_68 = local_b8;
  uStack_64 = uStack_b4;
  if (uVar3 != uVar2) {
    puVar12 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142db3152;
      uVar7 = puVar12[(longlong)iVar6 + 1];
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
    uVar3 = (uVar11 - iVar6) + 0x1f;
    uStack_88 = (ulonglong)uVar3 << 0x20;
    if ((int)uVar2 < (int)uVar3) {
LAB_142db3152:
      uStack_88 = (ulonglong)uVar2 << 0x20;
    }
  }
  local_res20 = uStack_88 >> 0x20;
  local_res10 = param_2;
  local_res18 = plVar14;
  local_60 = puVar1;
  local_50 = uStack_78;
  local_70 = plVar14;
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  do {
    if (((uStack_54 == (uint)local_res20) && (local_60 == puVar1)) && (local_70 == plVar14)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (!bVar15) {
      return;
    }
    pvVar9 = (void *)0x0;
    lVar8 = (longlong)(int)uStack_54 * 0x20 + *local_70;
    pvStack_90 = (void *)0x0;
    iVar6 = *(int *)(lVar8 + 0x10);
    _Src = *(void **)(lVar8 + 8);
    uStack_88 = CONCAT44(uStack_88._4_4_,iVar6);
    iVar10 = 0;
    if (iVar6 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&pvStack_90,iVar6,0);
      pvVar9 = pvStack_90;
      _guard_xfg_dispatch_icall_nop(pvStack_90,_Src,(longlong)iVar6 << 3);
      iVar10 = (int)uStack_88;
    }
    FWeakObjectPtr::operator=(local_res8,param_2);
    if (iVar10 != 0) {
      iVar13 = 0;
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(pvVar9,local_res8);
      bVar15 = cVar5 == '\0';
      iVar6 = 0;
      do {
        iVar4 = iVar6;
        do {
          iVar4 = iVar4 + 1;
          if (iVar10 <= iVar4) break;
          cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            ((void *)((longlong)pvVar9 + (longlong)iVar4 * 8),local_res8);
        } while (bVar15 == (cVar5 == '\0'));
        if (bVar15 != false) {
          if (iVar13 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)pvVar9 + (longlong)iVar13 * 8),
                       (void *)((longlong)pvVar9 + (longlong)iVar6 * 8),
                       (longlong)(iVar4 - iVar6) << 3);
          }
          iVar13 = iVar13 + (iVar4 - iVar6);
        }
        bVar15 = (bool)(bVar15 ^ 1);
        param_2 = local_res10;
        plVar14 = local_res18;
        iVar6 = iVar4;
      } while (iVar4 < iVar10);
    }
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
  } while( true );
}



// FUNCTION 142db32b0 FUN_142db32b0 body=687 status=ok
// SIG undefined FUN_142db32b0(void)

void FUN_142db32b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  FUN_142238430();
  lVar3 = *(longlong *)(param_1 + 0x470);
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AFXVolume::OnActorEnteredVolume",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_res10,pwVar5 + 2,1);
  lVar8 = local_res10;
  plVar1 = (longlong *)(lVar3 + 0x570);
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_48,param_1);
  local_40 = lVar8;
  if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_40);
  }
  piVar9 = (int *)*plVar1;
  iVar2 = *(int *)(lVar3 + 0x578);
  for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar2 * 4; piVar10 = piVar10 + 4) {
    if ((((*piVar10 == local_48) && (piVar10[1] == local_44)) ||
        ((cVar6 = FWeakObjectPtr::IsValid(piVar10), cVar6 == '\0' &&
         (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) &&
       (*(longlong *)(piVar10 + 2) == local_40)) {
      if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_142db340f;
      break;
    }
  }
  iVar2 = *(int *)(lVar3 + 0x578);
  *(int *)(lVar3 + 0x578) = iVar2 + 1;
  if (*(int *)(lVar3 + 0x57c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  piVar9 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
  *piVar9 = local_48;
  piVar9[1] = local_44;
  *(longlong *)(piVar9 + 2) = local_40;
LAB_142db340f:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AFXVolume::OnActorLeftVolume",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_res10,pwVar5 + 2,1);
  plVar1 = (longlong *)(lVar3 + 0x580);
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_48,param_1);
  local_40 = local_res10;
  if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_40);
  }
  piVar9 = (int *)*plVar1;
  iVar2 = *(int *)(lVar3 + 0x588);
  piVar10 = piVar9;
  do {
    if (piVar10 == piVar9 + (longlong)iVar2 * 4) {
LAB_142db3509:
      iVar2 = *(int *)(lVar3 + 0x588);
      *(int *)(lVar3 + 0x588) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x58c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar9 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar9 = local_48;
      piVar9[1] = local_44;
      *(longlong *)(piVar9 + 2) = local_40;
LAB_142db353f:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar10 == local_48) && (piVar10[1] == local_44)) ||
        ((cVar6 = FWeakObjectPtr::IsValid(piVar10), cVar6 == '\0' &&
         (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) &&
       (*(longlong *)(piVar10 + 2) == local_40)) {
      if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_142db353f;
      goto LAB_142db3509;
    }
    piVar10 = piVar10 + 4;
  } while( true );
}



// FUNCTION 142db3560 FUN_142db3560 body=42 status=ok
// SIG undefined FUN_142db3560(void)

void FUN_142db3560(longlong param_1)

{
  FUN_1422384a0();
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FUN_1417510e0();
    return;
  }
  return;
}



// FUNCTION 142db3590 FUN_142db3590 body=123 status=ok
// SIG undefined FUN_142db3590(void)

void FUN_142db3590(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  FUN_1423daa60();
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&URigidBodyComponent::SetKinematic",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1 + 0x5a0,param_1,local_res8);
  return;
}



// FUNCTION 142db3610 FUN_142db3610 body=105 status=ok
// SIG undefined FUN_142db3610(void)

void FUN_142db3610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_2 != 0) {
    FUN_140956010();
    plVar1 = *(longlong **)(param_2 + 0x20);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0);
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0x5f4) != '\0')) {
      *(undefined1 *)(param_1 + 0x5fc) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x5fc) = 1;
  return;
}



// FUNCTION 142db3680 FUN_142db3680 body=1225 status=ok
// SIG undefined FUN_142db3680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142db3680(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,uint *param_6,uint param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined4 local_168;
  longlong local_160;
  uint *local_158;
  undefined8 local_148 [2];
  undefined1 auStack_138 [56];
  longlong local_100;
  longlong local_e0;
  undefined8 local_c8 [9];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  puVar6 = local_c8;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_158 = param_6;
  local_168 = 0;
  if (param_7 <= *param_6) {
    param_1[2] = (float)param_1[2] + 1.0;
    return 0;
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  local_190 = 0;
  local_188 = 0;
  local_160 = param_4;
  lVar1 = FWeakObjectPtr::Get(param_5);
  *(longlong *)(param_2 + 2) = lVar1;
  plVar4 = *(longlong **)(param_5 + 8);
  if (plVar4 == (longlong *)0x0) {
    local_190 = _DAT_1468b5d90;
    local_188 = DAT_1468b5d98;
    local_174 = _DAT_1468b5d90;
    local_16c = DAT_1468b5d98;
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      if (lVar1 == 0) {
        local_178 = DAT_1468b5d98;
        local_180 = _DAT_1468b5d90;
      }
      else {
        local_190 = *(undefined8 *)(lVar1 + 0x220);
        local_188 = *(undefined4 *)(lVar1 + 0x228);
        local_180 = local_190;
        local_178 = local_188;
        local_174 = local_190;
        local_16c = local_188;
      }
    }
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_190);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146b34630) &&
     (_Init_thread_header(&DAT_146b34630), DAT_146b34630 == -1)) {
    FName::FName(&DAT_146b34628,L"AILineOfSight",1);
    _Init_thread_footer(&DAT_146b34630);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146b34640) &&
     (_Init_thread_header(&DAT_146b34640), DAT_146b34640 == -1)) {
    FName::FName(&DAT_146b34638,L"PlayerLineOfSight",1);
    _Init_thread_footer(&DAT_146b34640);
  }
  local_1a8 = 0;
  bVar7 = (*(byte *)(param_1 + 8) & 2) == 0;
  if (bVar7) {
    FUN_1422ffb20(local_148,DAT_146b34628,local_198,0);
    puVar6 = local_148;
  }
  else {
    FUN_1422ffb20(puVar6,DAT_146b34638,local_198,0);
  }
  *(undefined8 *)(param_2 + 4) = *puVar6;
  *(undefined8 *)(param_2 + 6) = puVar6[1];
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(puVar6 + 2);
  *(undefined1 *)((longlong)param_2 + 0x21) = *(undefined1 *)((longlong)puVar6 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x22) = *(undefined1 *)((longlong)puVar6 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x23) = *(undefined1 *)((longlong)puVar6 + 0x13);
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)((longlong)puVar6 + 0x14);
  *(undefined1 *)((longlong)param_2 + 0x25) = *(undefined1 *)((longlong)puVar6 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x26) = *(undefined1 *)((longlong)puVar6 + 0x16);
  param_2[10] = *(undefined4 *)(puVar6 + 3);
  *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)((longlong)puVar6 + 0x1c);
  param_2[0xc] = *(undefined4 *)(puVar6 + 4);
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)((longlong)puVar6 + 0x24);
  *(undefined1 *)((longlong)param_2 + 0x35) = *(undefined1 *)((longlong)puVar6 + 0x25);
  if ((undefined8 *)(param_2 + 0xe) != puVar6 + 5) {
    lVar1 = puVar6[9];
    if (lVar1 == 0) {
      _guard_xfg_dispatch_icall_nop(param_2 + 0xe,puVar6 + 5,0x20);
      lVar1 = puVar6[9];
    }
    if (*(longlong *)(param_2 + 0x16) != 0) {
      FMemory::Free();
      lVar1 = puVar6[9];
    }
    *(longlong *)(param_2 + 0x16) = lVar1;
    puVar6[9] = 0;
    param_2[0x18] = *(undefined4 *)(puVar6 + 10);
    param_2[0x19] = *(undefined4 *)((longlong)puVar6 + 0x54);
    puVar6[10] = 0;
  }
  if ((undefined8 *)(param_2 + 0x1a) != puVar6 + 0xb) {
    lVar1 = puVar6[0xd];
    if (lVar1 == 0) {
      _guard_xfg_dispatch_icall_nop(param_2 + 0x1a,puVar6 + 0xb,0x10);
    }
    if (*(longlong *)(param_2 + 0x1e) != 0) {
      FMemory::Free();
      lVar1 = puVar6[0xd];
    }
    *(longlong *)(param_2 + 0x1e) = lVar1;
    puVar6[0xd] = 0;
    param_2[0x20] = *(undefined4 *)(puVar6 + 0xe);
    param_2[0x21] = *(undefined4 *)((longlong)puVar6 + 0x74);
    puVar6[0xe] = 0;
  }
  if (bVar7) {
    if (local_e0 != 0) {
      FMemory::Free();
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
  }
  if (!bVar7) {
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  lVar1 = local_160;
  FWeakObjectPtr::IsValid(local_160);
  uVar2 = FWeakObjectPtr::Get(lVar1);
  lVar3 = FUN_142c1f500(uVar2);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_14222e250(lVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        (**(code **)(*plVar4 + 0xa78))(plVar4,param_2 + 4,1);
        goto LAB_142db3a53;
      }
    }
    FCollisionQueryParams::AddIgnoredActor(param_2 + 4,lVar3);
  }
LAB_142db3a53:
  *(undefined8 *)(param_2 + 0x23) = *(undefined8 *)(lVar1 + 0xc);
  param_2[0x25] = *(undefined4 *)(lVar1 + 0x14);
  *(undefined8 *)(param_2 + 0x26) = local_190;
  param_2[0x28] = local_188;
  param_1[2] = 0;
  *local_158 = *local_158 + 1;
  return 1;
}



// FUNCTION 142db3b50 FUN_142db3b50 body=1061 status=ok
// SIG undefined FUN_142db3b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142db3b50(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  int *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [88];
  undefined8 local_70;
  undefined4 local_68;
  
  plVar10 = (longlong *)UAISense::GetListeners();
  piVar18 = *(int **)(param_1 + 0x170);
  local_f8 = piVar18 + (longlong)*(int *)(param_1 + 0x178) * 0x2c;
  if (piVar18 != local_f8) {
    do {
      bVar3 = *(byte *)((longlong)piVar18 + 0x89);
      iVar9 = *(int *)(param_1 + 0x140);
      piVar17 = *(int **)(param_1 + 0x138);
      bVar4 = *(byte *)(piVar18 + 0x22);
      uVar7 = (uint)bVar4;
      if (((iVar9 <= (int)uVar7) || (piVar17[(ulonglong)bVar4 * 9] != *piVar18)) ||
         (piVar17[(ulonglong)bVar4 * 9 + 1] != piVar18[1])) {
        piVar1 = piVar17 + (longlong)iVar9 * 9;
        if (piVar17 != piVar1) {
          piVar16 = piVar17;
          do {
            if ((*piVar18 == *piVar16) && (piVar18[1] == piVar16[1])) {
              if (piVar16 != piVar1) {
                uVar7 = (uint)(((longlong)piVar16 - (longlong)piVar17) / 0x24);
                goto LAB_142db3c68;
              }
              break;
            }
            piVar16 = piVar16 + 9;
          } while (piVar16 != piVar1);
        }
        uVar7 = 0xffffffff;
      }
LAB_142db3c68:
      if ((-1 < (int)uVar7) && ((int)uVar7 < iVar9)) {
        lVar5 = *(longlong *)(param_1 + 0x138);
        lVar11 = (longlong)(int)uVar7;
        if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
          iVar9 = *(int *)(lVar5 + lVar11 * 0x24);
          plVar12 = (longlong *)plVar10[8];
          if ((longlong *)plVar10[8] == (longlong *)0x0) {
            plVar12 = plVar10 + 7;
          }
          iVar8 = *(int *)((longlong)plVar12 +
                          ((longlong)(int)plVar10[9] - 1U & (longlong)iVar9) * 4);
          if (iVar8 != -1) {
            do {
              piVar17 = (int *)((longlong)iVar8 * 0x3c + *plVar10);
              if (*piVar17 == iVar9) {
                if (iVar8 != -1) goto LAB_142db3d00;
                break;
              }
              iVar8 = piVar17[0xd];
            } while (iVar8 != -1);
          }
        }
        piVar17 = (int *)0x0;
LAB_142db3d00:
        FWeakObjectPtr::IsValid();
        if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
          iVar9 = *(int *)(lVar5 + 4 + lVar11 * 0x24);
          lVar13 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar13 = param_1 + 0xd0;
          }
          iVar8 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0xe0) - 1U & (longlong)iVar9) * 4)
          ;
          if (iVar8 != -1) {
            do {
              if (*(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar8 * 0x28) == iVar9) break;
              iVar8 = *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar8 * 0x28 + 0x20);
            } while (iVar8 != -1);
          }
        }
        lVar13 = FWeakObjectPtr::Get();
        if (lVar13 == 0) {
          local_d0 = DAT_1468b5d98;
          puVar15 = &local_d8;
          local_d8 = _DAT_1468b5d90;
        }
        else {
          lVar6 = *(longlong *)(lVar13 + 0x168);
          if (lVar6 == 0) {
            local_e8 = DAT_1468b5d98;
            puVar14 = &local_f0;
            local_f0 = _DAT_1468b5d90;
          }
          else {
            puVar14 = (undefined8 *)&local_108;
            local_108 = *(undefined4 *)(lVar6 + 0x220);
            local_100 = *(undefined4 *)(lVar6 + 0x228);
            uStack_104 = *(undefined4 *)(lVar6 + 0x224);
          }
          local_dc = *(undefined4 *)(puVar14 + 1);
          puVar15 = &local_e4;
          local_e4 = *puVar14;
        }
        local_118 = *puVar15;
        local_110 = *(undefined4 *)(puVar15 + 1);
        if ((bVar3 & 1) == 0) {
          if ((*(byte *)(lVar5 + 0x20 + lVar11 * 0x24) & 1) == 0) goto LAB_142db3f24;
          FUN_142c1a410(local_c8,param_1,0,&local_118,piVar17 + 4,1,0);
          local_70 = local_118;
          local_68 = local_110;
          FUN_142c24730(piVar17 + 1,lVar13,local_c8);
          puVar2 = (uint *)(lVar5 + 0x20 + lVar11 * 0x24);
          *puVar2 = *puVar2 & 0xfffffffe;
          *(undefined8 *)(lVar5 + 0x14 + lVar11 * 0x24) = DAT_1466ad800;
          iVar9 = DAT_1466ad808;
        }
        else {
          FUN_142c1a410(local_c8,param_1,0x3f800000,piVar18 + 0x29,piVar17 + 4,0,0);
          local_70 = local_118;
          local_68 = local_110;
          FUN_142c24730(piVar17 + 1,lVar13,local_c8);
          puVar2 = (uint *)(lVar5 + 0x20 + lVar11 * 0x24);
          *puVar2 = *puVar2 | 1;
          *(undefined8 *)(lVar5 + 0x14 + lVar11 * 0x24) = *(undefined8 *)(piVar18 + 0x29);
          iVar9 = piVar18[0x2b];
        }
        *(int *)(lVar5 + 0x1c + lVar11 * 0x24) = iVar9;
      }
LAB_142db3f24:
      piVar18 = piVar18 + 0x2c;
    } while (piVar18 != local_f8);
  }
  return;
}



// FUNCTION 142db3f80 FUN_142db3f80 body=92 status=ok
// SIG undefined FUN_142db3f80(void)

void FUN_142db3f80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [8];
  
  puVar2 = (undefined8 *)FUN_142340170(param_1,local_res10);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 1) = 2;
  return;
}



// FUNCTION 142db3fe0 FUN_142db3fe0 body=2705 status=ok
// SIG undefined FUN_142db3fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142db3fe0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  longlong *plVar17;
  float *pfVar18;
  float *pfVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_3e8 [32];
  float *local_3c8;
  undefined4 *local_3c0;
  undefined8 local_3b8;
  longlong *local_3a8;
  undefined1 local_3a0 [4];
  int local_39c;
  undefined8 local_398;
  float local_390;
  undefined4 local_388;
  int local_384;
  undefined4 local_380;
  int local_37c;
  float local_378;
  float *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  LARGE_INTEGER local_340;
  longlong local_338;
  LARGE_INTEGER local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined1 *local_318 [2];
  longlong local_308 [4];
  longlong *local_2e8;
  int local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 *local_2b8 [2];
  undefined1 local_2a8 [32];
  undefined8 local_288;
  undefined4 local_278;
  undefined1 local_268 [32];
  undefined1 local_248 [88];
  undefined8 local_1f0;
  float local_1e8;
  undefined1 local_1d8 [88];
  undefined8 local_180;
  float local_178;
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  longlong local_110;
  undefined8 local_108;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  byte local_df;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  local_3a8 = param_2;
  local_338 = (**(code **)(*param_1 + 0x148))();
  if (local_338 != 0) {
    iVar14 = 0;
    local_380 = 0;
    QueryPerformanceCounter(&local_340);
    iVar8 = (int)param_1[0x28];
    dVar4 = (double)local_340.QuadPart * DAT_1468b02f8;
    dVar3 = (double)param_1[0x2a];
    if (iVar8 != 0) {
      iVar14 = (int)param_1[0x33] % iVar8;
    }
    *(int *)(param_1 + 0x33) = iVar14;
    iVar14 = *(int *)((longlong)param_1 + 0x17c);
    lVar11 = param_1[0x2e];
    iVar16 = (int)param_1[0x2f];
    local_39c = iVar8;
    if (iVar14 < 0) {
      if (iVar16 != 0) {
        plVar17 = (longlong *)(lVar11 + 0x58);
        do {
          if (plVar17[4] != 0) {
            FMemory::Free();
          }
          if (*plVar17 != 0) {
            FMemory::Free();
          }
          plVar17 = plVar17 + 0x16;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        iVar14 = *(int *)((longlong)param_1 + 0x17c);
      }
      *(undefined4 *)(param_1 + 0x2f) = 0;
      if (iVar14 != 0) {
        TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1 + 0x2e,0);
      }
    }
    else {
      if (iVar16 != 0) {
        plVar17 = (longlong *)(lVar11 + 0x58);
        do {
          if (plVar17[4] != 0) {
            FMemory::Free();
          }
          if (*plVar17 != 0) {
            FMemory::Free();
          }
          plVar17 = plVar17 + 0x16;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      *(undefined4 *)(param_1 + 0x2f) = 0;
    }
    local_384 = (int)param_1[0x33];
    if (local_384 < iVar8) {
      local_370 = *(float **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        pfVar15 = (float *)0x0;
        local_37c = (int)param_1[0x33];
        pfVar2 = (float *)(param_1[0x27] + (longlong)local_37c * 0x24);
        *(int *)(param_1 + 0x33) = (local_37c + 1) % iVar8;
        if (((int)local_370[0xe] < DAT_146b2c938) &&
           (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1)) {
          DAT_146b2c934 = -NAN;
          _Init_thread_footer(&DAT_146b2c938);
        }
        fVar21 = *pfVar2;
        if ((fVar21 != DAT_146b2c934) && (pfVar2[1] != -NAN)) {
          if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
            plVar17 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar17 = param_2 + 7;
            }
            fVar22 = *(float *)((longlong)plVar17 +
                               ((longlong)(int)param_2[9] - 1U & (longlong)(int)fVar21) * 4);
            if (fVar22 != -NAN) {
              do {
                pfVar13 = (float *)((longlong)(int)fVar22 * 0x3c + *param_2);
                if (*pfVar13 == fVar21) {
                  if (fVar22 != -NAN) goto LAB_142db4271;
                  break;
                }
                fVar22 = pfVar13[0xd];
              } while (fVar22 != -NAN);
            }
          }
          pfVar13 = pfVar15;
LAB_142db4271:
          pfVar18 = pfVar13 + 1;
          if (pfVar13 == (float *)0x0) {
            pfVar18 = pfVar15;
          }
          if (pfVar18 != (float *)0x0) {
            FWeakObjectPtr::IsValid(pfVar18);
            if ((int)param_1[0x14] != *(int *)((longlong)param_1 + 0xcc)) {
              plVar17 = (longlong *)param_1[0x1b];
              if ((longlong *)param_1[0x1b] == (longlong *)0x0) {
                plVar17 = param_1 + 0x1a;
              }
              fVar21 = *(float *)((longlong)plVar17 +
                                 ((longlong)(int)param_1[0x1c] - 1U & (longlong)(int)pfVar2[1]) * 4)
              ;
              if (fVar21 != -NAN) {
                do {
                  pfVar13 = (float *)(param_1[0x13] + (longlong)(int)fVar21 * 0x28);
                  if (*(float *)(param_1[0x13] + (longlong)(int)fVar21 * 0x28) == pfVar2[1]) {
                    if (fVar21 != -NAN) goto LAB_142db4303;
                    break;
                  }
                  fVar21 = pfVar13[8];
                } while (fVar21 != -NAN);
              }
            }
            pfVar13 = pfVar15;
LAB_142db4303:
            pfVar19 = pfVar13 + 2;
            if (pfVar13 == (float *)0x0) {
              pfVar19 = pfVar15;
            }
            param_2 = local_3a8;
            if (pfVar19 != (float *)0x0) {
              cVar6 = FWeakObjectPtr::IsValid(pfVar19);
              cVar7 = FWeakObjectPtr::IsValid(pfVar18);
              param_2 = local_3a8;
              if ((cVar6 != '\0') && (cVar7 != '\0')) {
                lVar9 = FWeakObjectPtr::Get(pfVar19);
                lVar11 = *(longlong *)(lVar9 + 0x168);
                if (lVar11 == 0) {
                  local_320 = DAT_1468b5d98;
                  puVar12 = &local_328;
                  local_328 = _DAT_1468b5d90;
                }
                else {
                  puVar12 = (undefined8 *)&local_350;
                  local_350 = *(undefined4 *)(lVar11 + 0x220);
                  local_2c8 = *(undefined4 *)(lVar11 + 0x220);
                  uStack_2c4 = *(undefined4 *)(lVar11 + 0x224);
                  uStack_2c0 = *(undefined4 *)(lVar11 + 0x228);
                  uStack_2bc = *(undefined4 *)(lVar11 + 0x22c);
                  local_348 = *(undefined4 *)(lVar11 + 0x228);
                  uStack_34c = *(undefined4 *)(lVar11 + 0x224);
                }
                local_398 = *puVar12;
                local_390 = *(float *)(puVar12 + 1);
                if ((int)param_1[0x1e] != *(int *)((longlong)param_1 + 0x11c)) {
                  plVar17 = (longlong *)param_1[0x25];
                  if ((longlong *)param_1[0x25] == (longlong *)0x0) {
                    plVar17 = param_1 + 0x24;
                  }
                  fVar21 = *(float *)((longlong)plVar17 +
                                     ((longlong)(int)param_1[0x26] - 1U & (longlong)(int)*pfVar2) *
                                     4);
                  if (fVar21 != -NAN) {
                    do {
                      pfVar15 = (float *)((longlong)(int)fVar21 * 0x20 + param_1[0x1d]);
                      if (*pfVar15 == *pfVar2) {
                        if (fVar21 != -NAN) goto LAB_142db4410;
                        break;
                      }
                      fVar21 = pfVar15[6];
                    } while (fVar21 != -NAN);
                  }
                }
                pfVar15 = (float *)0x0;
LAB_142db4410:
                pfVar13 = pfVar15 + 1;
                if (((uint)pfVar2[8] & 1) == 0) {
                  fVar21 = pfVar15[2];
                }
                else {
                  fVar21 = pfVar15[4];
                }
                local_3c0 = &local_388;
                pfVar15 = pfVar18 + 3;
                local_388 = 0x3f800000;
                local_3c8 = (float *)lVar9;
                cVar6 = (**(code **)(*param_1 + 0x2d0))(param_1,pfVar13,pfVar2,pfVar18);
                if (cVar6 == '\0') {
                  fVar24 = (float)local_398 - *pfVar15;
                  fVar25 = local_398._4_4_ - pfVar18[4];
                  fVar26 = local_390 - pfVar18[5];
                  fVar22 = fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26;
                  if (fVar22 <= fVar21) {
                    auVar23 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
                    local_378 = auVar23._0_4_;
                    local_378 = local_378 + local_378 * (0.5 - fVar22 * 0.5 * local_378 * local_378)
                    ;
                    local_378 = local_378 + local_378 * (0.5 - fVar22 * 0.5 * local_378 * local_378)
                    ;
                    fVar22 = local_378 * fVar25 * pfVar18[7] + local_378 * fVar24 * pfVar18[6] +
                             local_378 * fVar26 * pfVar18[8];
                    if (*pfVar13 <= fVar22 && fVar22 != *pfVar13) {
                      uVar10 = FWeakObjectPtr::Get(pfVar18);
                      lVar11 = FUN_142c1f500(uVar10);
                      if (lVar11 == 0) {
LAB_142db45e3:
                        bVar20 = true;
                      }
                      else {
                        uVar10 = UDamageableInterface::GetPrivateStaticClass();
                        plVar17 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar10)
                        ;
                        if (plVar17 == (longlong *)0x0) goto LAB_142db45e3;
                        iVar8 = (**(code **)(*plVar17 + 0x10))(plVar17);
                        bVar20 = iVar8 != 1;
                      }
                      if (bVar20) {
                        local_df = local_df & 0xfe;
                        local_158 = 0;
                        local_d4 = DAT_1468b5d98;
                        local_c8 = DAT_1468b5d98;
                        local_bc = DAT_1468b5d98;
                        local_3b8 = CONCAT44(local_3b8._4_4_,(int)param_1[0x29]);
                        local_3c0 = &local_380;
                        local_168[0] = 0xffffffff;
                        local_160 = 0;
                        local_150 = 0;
                        local_110 = 0;
                        local_108 = 0;
                        local_f0 = 0;
                        local_e8 = 0;
                        local_148 = 0x10000;
                        local_140 = 0;
                        local_360 = 0;
                        local_144 = 0;
                        local_134 = 0x101;
                        local_13c = 0;
                        local_142 = 0;
                        local_138 = 0;
                        local_e0 = 0;
                        local_dc = _DAT_1468b5d90;
                        local_d0 = _DAT_1468b5d90;
                        local_c4 = _DAT_1468b5d90;
                        local_3c8 = pfVar19;
                        cVar6 = FUN_142db3680(pfVar2,local_168,local_338,pfVar18);
                        if (cVar6 != '\0') {
                          if (local_37c < 0) {
                            local_e0 = 0;
                          }
                          else {
                            local_e0 = 0xff;
                            if (local_37c < 0xffff) {
                              local_e0 = (char)local_37c;
                            }
                          }
                          iVar8 = (int)param_1[0x2f];
                          *(int *)(param_1 + 0x2f) = iVar8 + 1;
                          if (*(int *)((longlong)param_1 + 0x17c) < iVar8 + 1) {
                            TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
                                      (param_1 + 0x2e,iVar8);
                          }
                          FUN_142d977b0((longlong)iVar8 * 0xb0 + param_1[0x2e],local_168);
                        }
                        if (local_f0 != 0) {
                          FMemory::Free();
                        }
                        if (local_110 != 0) {
                          FMemory::Free();
                        }
                        goto LAB_142db47ce;
                      }
                    }
                  }
                  local_3b8 = 0;
                  local_3c0 = (undefined4 *)CONCAT44(local_3c0._4_4_,1);
                  local_358 = 0;
                  local_3c8 = pfVar15;
                  FUN_142c1a410(local_1d8,param_1,0,&local_398);
                  local_180 = local_398;
                  local_178 = local_390;
                  FUN_142c24730(pfVar18,lVar9,local_1d8);
                  pfVar2[8] = (float)((uint)pfVar2[8] & 0xfffffffe);
                }
                else {
                  local_3b8 = 0;
                  local_3c0 = (undefined4 *)((ulonglong)local_3c0 & 0xffffffff00000000);
                  local_368 = 0;
                  local_3c8 = pfVar15;
                  FUN_142c1a410(local_248,param_1,local_388,pfVar2 + 5);
                  local_1f0 = local_398;
                  local_1e8 = local_390;
                  FUN_142c24730(pfVar18,lVar9,local_248);
                  pfVar2[8] = (float)((uint)pfVar2[8] | 1);
                }
LAB_142db47ce:
                fVar21 = (float)FUN_142c1cee0(param_1,pfVar18,&local_398,fVar21);
                pfVar2[4] = fVar21;
                pfVar2[3] = fVar21 + pfVar2[2];
                QueryPerformanceCounter(&local_330);
                param_2 = local_3a8;
                iVar8 = local_39c;
                if (dVar4 + 16777216.0 + dVar3 <
                    (double)local_330.QuadPart * DAT_1468b02f8 + 16777216.0) break;
              }
            }
          }
        }
        local_384 = local_384 + 1;
      } while (local_384 < iVar8);
    }
    local_2e8 = (longlong *)0x0;
    local_2d8 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_308);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = param_1;
      *puVar12 = &PTR_FUN_143f77b70;
    }
    local_318[0] = &LAB_142d9da50;
    plVar17 = (longlong *)FUN_140596960(local_268,0,0xff);
    lVar11 = *plVar17;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar11 + 0x10,local_318);
    *(undefined4 *)(lVar11 + 0x60) = 0x10ff;
    lVar11 = *plVar17;
    lVar5 = plVar17[2];
    lVar9 = plVar17[1];
    local_3a8 = *(longlong **)(lVar11 + 0x78);
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3a8 + 9) = (int)local_3a8[9] + 1;
      UNLOCK();
    }
    FUN_1405ab110(lVar11,lVar9,(int)lVar5,1);
    if (local_2d8 != 0) {
      plVar17 = local_308;
      if (local_2e8 != (longlong *)0x0) {
        plVar17 = local_2e8;
      }
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x10))(plVar17,0);
      }
    }
    if (local_2e8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_288 = 0;
    local_278 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_2a8);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = param_1;
      *puVar12 = &PTR_FUN_143f77b70;
    }
    local_3c8 = (float *)CONCAT44(local_3c8._4_4_,2);
    local_2b8[0] = &LAB_142d9da20;
    plVar17 = (longlong *)FUN_1406a5f30(&local_370,local_2b8,local_3a0,&local_3a8);
    param_1 = param_1 + 0x32;
    if (param_1 != plVar17) {
      lVar11 = *param_1;
      *param_1 = *plVar17;
      *plVar17 = 0;
      if (lVar11 != 0) {
        LOCK();
        piVar1 = (int *)(lVar11 + 0x48);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    if (local_370 != (float *)0x0) {
      LOCK();
      pfVar2 = local_370 + 0x12;
      fVar21 = *pfVar2;
      *pfVar2 = (float)((int)*pfVar2 + -1);
      UNLOCK();
      if (fVar21 == 1.4013e-45) {
        FGraphEvent::Recycle();
      }
    }
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_3a8 + 9;
      lVar11 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        FGraphEvent::Recycle(local_3a8);
      }
    }
  }
  return;
}


