// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14249a820 FUN_14249a820 body=332 status=ok
// SIG undefined FUN_14249a820(void)

undefined8 * FUN_14249a820(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1450c7128;
  *(undefined1 *)(plVar6 + 6) = 0;
  plVar6[7] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14249a970 FUN_14249a970 body=282 status=ok
// SIG undefined FUN_14249a970(void)

undefined8 FUN_14249a970(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((*(char *)(param_1 + 0xd8) != '\0') && (param_2 != 0)) {
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      lVar5 = FUN_1424a2270(param_1);
      iVar2 = *(int *)(lVar5 + 0x18);
      plVar1 = (longlong *)(lVar5 + 0x10);
      iVar4 = iVar2 + 1;
      *(int *)(lVar5 + 0x18) = iVar4;
      if (*(int *)(lVar5 + 0x1c) < iVar4) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1);
      }
      lVar5 = (longlong)iVar2 * 0xa0;
      _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + lVar5),0,0xa0);
      lVar5 = lVar5 + *plVar1;
      FWeakObjectPtr::operator=(lVar5,param_2);
      FWeakObjectPtr::operator=(lVar5 + 8,param_3);
      FUN_140729f20(lVar5 + 0x10,param_4);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14249aa90 FUN_14249aa90 body=503 status=ok
// SIG undefined FUN_14249aa90(void)

undefined8 FUN_14249aa90(longlong param_1,longlong param_2,uint param_3,byte param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_2 + 0xc);
  lVar8 = 0;
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar6 = iVar3 >> 0x1f & 0xffff;
    uVar2 = iVar3 + uVar6;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
  }
  if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
    LOCK();
    iVar3 = *(int *)(param_2 + 0x2c8);
    if (iVar3 == 0) {
      *(int *)(param_2 + 0x2c8) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 == -1) {
      if (*(char *)(param_1 + 0xd9) == '\0') {
        uVar5 = 0;
      }
      else {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xe0);
        BVar4 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar4 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        plVar7 = (longlong *)(param_1 + 0x108);
        LOCK();
        *(undefined4 *)(param_2 + 0x2c8) = *(undefined4 *)(param_1 + 0x110);
        UNLOCK();
        iVar3 = *(int *)(param_1 + 0x110);
        lVar8 = (longlong)iVar3;
        *(int *)(param_1 + 0x110) = iVar3 + 1;
        if (*(int *)(param_1 + 0x114) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(plVar7,iVar3);
        }
        lVar1 = *plVar7;
        *(undefined4 *)(lVar1 + lVar8 * 0x14) = 0xffffffff;
        *(undefined8 *)(lVar1 + 4 + lVar8 * 0x14) = 0;
        *(undefined1 *)(lVar1 + 0xc + lVar8 * 0x14) = 0;
        *(undefined4 *)(lVar1 + 0x10 + lVar8 * 0x14) = 0xffffffff;
        lVar8 = *plVar7 + lVar8 * 0x14;
        FWeakObjectPtr::operator=(lVar8,param_2);
        *(uint *)(lVar8 + 8) = param_3;
        *(byte *)(lVar8 + 0xc) = param_4;
        LeaveCriticalSection(lpCriticalSection);
        uVar5 = 1;
      }
    }
    else {
      if ((*(char *)(param_1 + 0x118) == '\0') &&
         (BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0)), BVar4 == 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
      }
      lVar8 = *(longlong *)(param_1 + 0x108) + (longlong)iVar3 * 0x14;
      if ((param_3 & 2) != 0) {
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 2;
      }
      if ((param_3 & 1) == 0) {
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xfffffffe;
      }
      if ((param_3 & 4) == 0) {
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xfffffffb;
      }
      if (param_4 <= *(byte *)(lVar8 + 0xc)) {
        param_4 = *(byte *)(lVar8 + 0xc);
      }
      *(byte *)(lVar8 + 0xc) = param_4;
      if (*(char *)(param_1 + 0x118) == '\0') {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
      }
      uVar5 = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0xd9) == '\0') {
      LOCK();
      iVar3 = *(int *)(param_2 + 0x2c8);
      if (iVar3 == 0) {
        *(int *)(param_2 + 0x2c8) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (iVar3 == -1) {
        return 0;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 14249ac90 FUN_14249ac90 body=399 status=ok
// SIG undefined FUN_14249ac90(void)

undefined8 FUN_14249ac90(longlong param_1,longlong param_2,byte param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int local_res8 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28 [2];
  
  if ((*(char *)(param_1 + 0x119) != '\0') && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0xc);
    pbVar7 = (byte *)0x0;
    pbVar4 = pbVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      pbVar4 = (byte *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                       (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18);
    }
    if ((*(uint *)(pbVar4 + 8) >> 0x1d & 1) == 0) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x198));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x198));
      }
      FWeakObjectPtr::operator=(&local_38,param_2);
      local_30 = local_38;
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x1c0,local_res8,&local_30);
      pbVar4 = pbVar7;
      if (local_res8[0] != -1) {
        pbVar4 = (byte *)(*(longlong *)(param_1 + 0x1c0) + (longlong)local_res8[0] * 0x14);
      }
      pbVar6 = pbVar4 + 8;
      if (pbVar4 == (byte *)0x0) {
        pbVar6 = pbVar7;
      }
      if (pbVar6 == (byte *)0x0) {
        FWeakObjectPtr::operator=(&local_30,param_2);
        local_28[0] = &local_30;
        FUN_142492c50(param_1 + 0x1c0,local_res8,local_28,0);
        pbVar6 = (byte *)(*(longlong *)(param_1 + 0x1c0) + ((longlong)local_res8[0] * 5 + 2) * 4);
      }
      if (param_3 <= *pbVar6) {
        param_3 = *pbVar6;
      }
      *pbVar6 = param_3;
      if (param_4 != '\0') {
        pbVar6[1] = 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x198));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14249ae20 FUN_14249ae20 body=384 status=ok
// SIG undefined FUN_14249ae20(void)

undefined8 FUN_14249ae20(longlong param_1,longlong param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int local_res8 [2];
  undefined8 ***local_res20;
  undefined8 ***local_28 [2];
  
  if ((*(char *)(param_1 + 0x119) != '\0') && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0xc);
    pbVar7 = (byte *)0x0;
    pbVar4 = pbVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      pbVar4 = (byte *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                       (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18);
    }
    if ((*(uint *)(pbVar4 + 8) >> 0x1d & 1) == 0) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      }
      FWeakObjectPtr::operator=(&local_res20,param_2);
      local_28[0] = local_res20;
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x148,local_res8,local_28);
      pbVar4 = pbVar7;
      if (local_res8[0] != -1) {
        pbVar4 = (byte *)(*(longlong *)(param_1 + 0x148) + (longlong)local_res8[0] * 0x14);
      }
      pbVar6 = pbVar4 + 8;
      if (pbVar4 == (byte *)0x0) {
        pbVar6 = pbVar7;
      }
      if (pbVar6 == (byte *)0x0) {
        FWeakObjectPtr::operator=(&local_res20,param_2);
        local_28[0] = &local_res20;
        FUN_142492a70(param_1 + 0x148,local_res8,local_28,0);
        *(byte *)(*(longlong *)(param_1 + 0x148) + 8 + (longlong)local_res8[0] * 0x14) = param_3;
      }
      else {
        if (param_3 <= *pbVar6) {
          param_3 = *pbVar6;
        }
        *pbVar6 = param_3;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14249afa0 FUN_14249afa0 body=91 status=ok
// SIG undefined FUN_14249afa0(void)

void FUN_14249afa0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_2;
  fVar1 = *DAT_146af58f0;
  if (fVar3 <= 0.0) {
    fVar3 = ABS(*DAT_146af58d8);
  }
  *(float *)(param_1 + 0xf0) = fVar3;
  fVar2 = param_2[1];
  if (fVar2 <= 0.0) {
    fVar2 = ABS(fVar1);
  }
  *(float *)(param_1 + 0xf4) = fVar2;
  if (fVar2 <= 0.0) {
    *(float *)(param_1 + 0xf4) = fVar3;
  }
  return;
}



// FUNCTION 14249b000 FUN_14249b000 body=62 status=ok
// SIG undefined FUN_14249b000(void)

undefined8 * FUN_14249b000(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FGbxParallelMovementTickFunction",0x42);
  return param_2;
}



// FUNCTION 14249b040 FUN_14249b040 body=1707 status=ok
// SIG undefined FUN_14249b040(void)

void FUN_14249b040(longlong param_1,longlong param_2,undefined8 *param_3,void *param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *_Dst;
  ulonglong _Size;
  undefined8 local_res8;
  undefined8 *local_res18;
  void *local_res20;
  undefined8 local_48 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_48[0] = 0;
  local_res8 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_48);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = uVar3;
  local_res8 = param_3[5];
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *puVar9 = local_res8;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar10 + 2) = 1;
  puVar10[3] = puVar9;
  *(undefined4 *)(puVar10 + 4) = 2;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 3;
  puVar10[5] = 0;
  uVar4 = param_3[5];
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
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
    *puVar9 = &PTR_LAB_144d91e40;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
  }
  uVar4 = *param_3;
  uVar6 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0xde) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xdc);
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
    *puVar9 = &PTR_LAB_144d92090;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
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
    *puVar9 = &PTR_LAB_144dcb3b8;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0xe8);
  if (0xf < *(ushort *)(param_1 + 0xe8)) {
    uVar5 = 0x10;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe6);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(param_1 + 0xe4));
    uVar7 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,local_res20,_Size);
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
    *puVar9 = &PTR_LAB_144d92080;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    *(undefined4 *)(puVar9 + 4) = (undefined4)local_res8;
    puVar9[2] = uVar3;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 5) = uVar5;
    param_3 = local_res18;
  }
  DispatchComputeShader
            (param_2,param_1,*(uint *)(param_3[3] + 0x60) >> 3,*(uint *)(param_3[3] + 100) >> 3,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  local_res18 = (undefined8 *)0x0;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144dc9c50;
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
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
    *puVar9 = &PTR_LAB_144d91e40;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  local_res18 = (undefined8 *)param_3[5];
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *puVar9 = local_res18;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[3] = puVar9;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar10 + 2) = 1;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 3;
  puVar10[5] = uVar3;
  local_res18 = (undefined8 *)param_3[3];
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *puVar9 = local_res18;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar10 + 2) = 1;
  puVar10[3] = puVar9;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined1 *)((longlong)puVar10 + 0x24) = 0;
  return;
}



// FUNCTION 14249b6f0 FUN_14249b6f0 body=3966 status=ok
// SIG undefined FUN_14249b6f0(void)

void FUN_14249b6f0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  int param_5,void *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_48 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_48[0] = param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res18[0] = 0;
  local_res8 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res18);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e50;
  puVar7[2] = uVar3;
  local_50 = param_3[0x30];
  if (*(short *)(param_1 + 0xda) != 0) {
    local_res8 = param_3[2];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = puVar7;
    *(undefined4 *)(puVar8 + 4) = 2;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
    puVar8[5] = 0;
    uVar4 = param_3[2];
    if (*(short *)(param_1 + 0xda) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd8);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e40;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar4;
    }
  }
  if (*(short *)(param_1 + 0xde) != 0) {
    local_res8 = param_3[0xb];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = puVar7;
    *(undefined4 *)(puVar8 + 4) = 2;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
    puVar8[5] = 0;
    uVar4 = param_3[0xb];
    if (*(short *)(param_1 + 0xde) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xdc);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e40;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar4;
    }
  }
  if (*(short *)(param_1 + 0xe2) != 0) {
    local_res8 = param_3[0xe];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = puVar7;
    *(undefined4 *)(puVar8 + 4) = 2;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
    puVar8[5] = 0;
    uVar4 = param_3[0xe];
    if (*(short *)(param_1 + 0xe2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xe0);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e40;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar4;
    }
  }
  uVar4 = param_3[0x10];
  local_res8 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0xe6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe4);
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
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[2] = uVar3;
    puVar7[4] = uVar4;
  }
  uVar4 = local_res8;
  if (*(short *)(param_1 + 0xea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe8);
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
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0xf0);
  if (3 < *(ushort *)(param_1 + 0xf0)) {
    uVar10 = 4;
  }
  uVar11 = (ulonglong)uVar10;
  if (uVar10 != 0) {
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,(uint)*(ushort *)(param_1 + 0xee));
    pvVar9 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(param_1 + 0xec));
    uVar5 = (longlong)pvVar9 + uVar11;
    if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar10 + 0x10);
      pvVar9 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar5 = (longlong)pvVar9 + uVar11;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar5;
    _guard_xfg_dispatch_icall_nop(pvVar9,&param_5,uVar11);
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
    *(uint *)(puVar7 + 4) = (uint)local_res8;
    *(undefined4 *)((longlong)puVar7 + 0x24) = (undefined4)local_res18[0];
    puVar7[2] = uVar3;
    puVar7[3] = pvVar9;
    *(uint *)(puVar7 + 5) = uVar10;
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0xfc);
  if (7 < *(ushort *)(param_1 + 0xfc)) {
    uVar10 = 8;
  }
  uVar11 = (ulonglong)uVar10;
  if (uVar10 != 0) {
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,(uint)*(ushort *)(param_1 + 0xfa));
    pvVar9 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(param_1 + 0xf8));
    uVar5 = (longlong)pvVar9 + uVar11;
    if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar10 + 0x10);
      pvVar9 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar5 = (longlong)pvVar9 + uVar11;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar5;
    _guard_xfg_dispatch_icall_nop(pvVar9,local_48,uVar11);
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
    *(uint *)(puVar7 + 4) = (uint)local_res8;
    *(undefined4 *)((longlong)puVar7 + 0x24) = (undefined4)local_res18[0];
    puVar7[2] = uVar3;
    puVar7[3] = pvVar9;
    *(uint *)(puVar7 + 5) = uVar10;
  }
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xfe,&local_50,0);
  local_res8 = param_3[0x39];
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x104,&local_res8,0);
  uVar11 = param_3[0x30];
  local_res8._0_4_ =
       (uint)((longlong)((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) /
             (longlong)(int)param_3[0x39]);
  local_res8._4_4_ = (int)(uVar11 >> 0x20);
  local_res8._4_4_ = local_res8._4_4_ / (int)((ulonglong)param_3[0x39] >> 0x20);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x10a,&local_res8,0);
  if (0 < param_5) {
    uVar1 = *(ushort *)(param_1 + 0xf6);
    pvVar9 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,(uint)*(ushort *)(param_1 + 0xf4));
    uVar10 = (uint)uVar1;
    local_res8._0_4_ = (uint)*(ushort *)(param_1 + 0xf2);
    uVar11 = (longlong)pvVar9 + (longlong)(int)uVar10;
    if (*(ulonglong *)(param_2 + 0x38) < uVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar1 + 0x10);
      pvVar9 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar11 = (longlong)pvVar9 + (longlong)(int)uVar10;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar11;
    _guard_xfg_dispatch_icall_nop(pvVar9,param_6,(ulonglong)uVar1);
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
    *(uint *)(puVar7 + 4) = (uint)local_res8;
    *(uint *)(puVar7 + 5) = uVar10;
    *(undefined4 *)((longlong)puVar7 + 0x24) = (undefined4)local_res18[0];
    puVar7[2] = uVar3;
    puVar7[3] = pvVar9;
  }
  DispatchComputeShader(param_2,param_1,(uint)local_50 >> 4,local_50._4_4_ >> 4,1);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dc9c50;
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = 0;
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_res8 = param_3[2];
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[3] = puVar7;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
    puVar8[5] = uVar4;
    local_res8 = *param_3;
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = puVar7;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
  }
  if (*(short *)(param_1 + 0xde) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xdc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = 0;
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_res8 = param_3[0xb];
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[3] = puVar7;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
    puVar8[5] = uVar4;
    local_res8 = param_3[10];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
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
    *puVar8 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = puVar7;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
  }
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = 0;
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
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    local_res8 = param_3[0xe];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[3] = puVar7;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar8 + 2) = 1;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
    puVar8[5] = uVar3;
    local_res8 = param_3[0xd];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *puVar7 = local_res8;
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
    *puVar8 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = puVar7;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
  }
  return;
}



// FUNCTION 14249c670 FUN_14249c670 body=71 status=ok
// SIG undefined FUN_14249c670(void)

void FUN_14249c670(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_238 [560];
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    uVar2 = FUN_140a7a570(local_238,param_1 + 0x10);
    FUN_1424ad6e0(lVar1,uVar2);
  }
  return;
}



// FUNCTION 14249c6c0 FUN_14249c6c0 body=405 status=ok
// SIG undefined FUN_14249c6c0(void)

void FUN_14249c6c0(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_14249c791;
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
LAB_14249c791:
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
      if (*(longlong *)((longlong)iStack_1c * 0x40 + *param_1 + 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 14249c860 FUN_14249c860 body=68 status=ok
// SIG undefined FUN_14249c860(void)

ulonglong FUN_14249c860(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14294b490();
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    uVar2 = (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      return uVar2 & 0xffffffffffffff00;
    }
  }
  return (ulonglong)*(byte *)(lVar3 + 0x30);
}



// FUNCTION 14249c8b0 FUN_14249c8b0 body=308 status=ok
// SIG undefined FUN_14249c8b0(void)

void FUN_14249c8b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_14249efc0();
  for (plVar7 = (longlong *)(param_1 + 0x12); plVar7 != (longlong *)(param_1 + 0x22);
      plVar7 = plVar7 + 1) {
    lVar2 = *plVar7;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x28) = 0;
      if (0x7fffffff < *(uint *)(lVar2 + 0x2c)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar2 + 0x20,0);
      }
      FTickFunction::UnRegisterTickFunction(lVar2);
      puVar6 = *(undefined4 **)(lVar2 + 0x50);
      puVar1 = puVar6 + (longlong)*(int *)(lVar2 + 0x58) * 2;
      for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
        local_res8 = *puVar6;
        local_resc = puVar6[1];
        cVar3 = FWeakObjectPtr::IsValid(&local_res8);
        if (cVar3 != '\0') {
          uVar4 = FWeakObjectPtr::Get(param_1);
          lVar5 = FWeakObjectPtr::Get(&local_res8);
          FTickFunction::RemovePrerequisite(lVar5 + 0x30,uVar4,lVar2);
        }
      }
      *(undefined4 *)(lVar2 + 0x58) = 0;
      if ((*(int *)(lVar2 + 0x5c) < 0) && (*(int *)(lVar2 + 0x5c) != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2 + 0x50);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *param_1 = local_res8;
  param_1[1] = local_resc;
  return;
}



// FUNCTION 14249c9f0 FUN_14249c9f0 body=663 status=ok
// SIG undefined FUN_14249c9f0(void)

undefined8 FUN_14249c9f0(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  BOOL BVar9;
  DWORD DVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  if (BVar9 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  }
  iVar2 = DAT_146af5674;
  if ((param_1 != DAT_146af5674) || (DAT_146af5670 != 1)) {
    uVar11 = 0;
    goto LAB_14249cc70;
  }
  DAT_146af5670 = 2;
  local_res8[0] = DAT_146af5674;
  if (DAT_146ac3ac6 == '\0') {
LAB_14249ca73:
    if (DAT_146ac3ac5 == '\0') {
      cVar8 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar10 = GetCurrentThreadId();
        if (DVar10 != DAT_1468c21c0) goto LAB_14249cabf;
      }
      local_res10[0] = iVar2;
      uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142495d30(local_res10,uVar11);
    }
    else {
LAB_14249cabf:
      plVar12 = (longlong *)
                TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::UpdateSkyCaptureContents'::`10'::ClearCommandName,<lambda_0ddb857484b536f0cf87119d965ea51a>_>_>
                ::CreateTask(local_48,0,0xff);
      *(int *)(*plVar12 + 0x10) = iVar2;
      lVar3 = *plVar12;
      lVar6 = plVar12[2];
      lVar4 = plVar12[1];
      lVar5 = *(longlong *)(lVar3 + 0x18);
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_141d4e540(lVar3,lVar4,(int)lVar6,1);
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
    cVar8 = IsInRenderingThread();
    if (cVar8 == '\0') goto LAB_14249ca73;
    uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142495d30(local_res8,uVar11);
  }
  cVar8 = FUN_14249f850(DAT_146af5674);
  iVar2 = DAT_146af5674;
  if (cVar8 != '\0') {
    BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
    if (BVar9 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
    }
    if (DAT_146af5674 == 0) {
      FUN_1424aafa0(iVar2);
    }
    iVar7 = DAT_146af5674;
    if ((iVar2 == DAT_146af5674) && ((DAT_146af5670 & 0xfffffffd) == 0)) {
      DAT_146af5670 = 1;
      local_res18[0] = DAT_146af5674;
      if (DAT_146ac3ac6 != '\0') {
        cVar8 = IsInRenderingThread();
        if (cVar8 != '\0') {
          uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_142495430(local_res18,uVar11);
          goto LAB_14249cc58;
        }
      }
      if (DAT_146ac3ac5 == '\0') {
        cVar8 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar10 = GetCurrentThreadId();
          if (DVar10 != DAT_1468c21c0) goto LAB_14249cc07;
        }
        local_res20[0] = iVar7;
        uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_142495430(local_res20,uVar11);
      }
      else {
LAB_14249cc07:
        plVar12 = (longlong *)
                  TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::UpdateSkyCaptureContents'::`10'::ClearCommandName,<lambda_0ddb857484b536f0cf87119d965ea51a>_>_>
                  ::CreateTask(local_30,0,0xff);
        *(int *)(*plVar12 + 0x10) = iVar7;
        lVar3 = *plVar12;
        lVar6 = plVar12[2];
        lVar4 = plVar12[1];
        lVar5 = *(longlong *)(lVar3 + 0x18);
        piVar1 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_141d4e540(lVar3,lVar4,(int)lVar6,1);
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
LAB_14249cc58:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  }
  uVar11 = 1;
LAB_14249cc70:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  return uVar11;
}



// FUNCTION 14249cc90 FUN_14249cc90 body=880 status=ok
// SIG undefined FUN_14249cc90(void)

void FUN_14249cc90(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int local_res18 [2];
  longlong local_res20;
  undefined *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (DAT_146ab62f7 == '\0') {
    if (*(int *)((longlong)param_1 + 0xc) == 2) {
      lVar2 = *param_1;
      *(int *)(param_1 + 7) = DAT_1464aaa90;
      iVar1 = *(int *)(lVar2 + 0x90);
      *(int *)(lVar2 + 0x90) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x94) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x88,iVar1);
      }
      *(longlong **)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar1 * 8) = param_1;
      LOCK();
      *(int *)(*param_1 + 0x98) = *(int *)(*param_1 + 0x98) + 1;
      UNLOCK();
      if ((int)param_1[1] == 4) {
        local_80 = 0;
        local_88 = &DAT_146af61e0;
        lVar2 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2 + 0x38,local_res18,&local_88);
        puVar3 = (undefined8 *)0x0;
        if (local_res18[0] != -1) {
          puVar3 = (undefined8 *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar2 + 0x38));
        }
        puVar5 = puVar3 + 2;
        if (puVar3 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*param_1 + 0x1a0) + 0x48) +
                 (longlong)(int)param_1[6] * 8);
        local_78 = *(undefined8 *)(lVar2 + 0x20);
        uStack_70 = *(undefined8 *)(lVar2 + 0x28);
        FUN_14249b040(*puVar5,param_2,*param_1,&local_78);
        *(undefined4 *)((longlong)param_1 + 0xc) = 3;
      }
    }
    if ((*(int *)((longlong)param_1 + 0xc) == 2) ||
       ((*(int *)((longlong)param_1 + 0xc) == 3 &&
        (*(int *)(DAT_146af5908 + 4) <= DAT_1464aaa90 - (int)param_1[7])))) {
      local_res20 = param_1[4];
      plVar6 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar4 = plVar6 + 1;
      if (*(longlong **)(param_2 + 0x38) < plVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
        plVar6 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar4 = plVar6 + 1;
      }
      *(longlong **)(param_2 + 0x30) = plVar4;
      *plVar6 = local_res20;
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      local_68 = 0xffffffff00000000;
      uStack_60 = 0xffffffffffffffff;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      puVar5[3] = plVar6;
      *puVar5 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar5 + 2) = 1;
      *(undefined4 *)(puVar5 + 4) = 1;
      *(undefined1 *)((longlong)puVar5 + 0x24) = 0;
      lVar2 = param_1[4];
      plVar4 = (longlong *)param_1[3];
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_58 = 0xffffffffffffffff;
      uStack_50 = 0xffffffffffffffff;
      local_48 = 0xffffffff;
      uStack_40 = 0;
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
      *(undefined4 *)(puVar5 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar5 + 0x14) = local_68._4_4_;
      *(undefined4 *)(puVar5 + 3) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_60._4_4_;
      *(undefined4 *)(puVar5 + 4) = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar5 + 0x24) = local_58._4_4_;
      *(undefined4 *)(puVar5 + 5) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_50._4_4_;
      *(undefined4 *)(puVar5 + 6) = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar5 + 0x34) = local_48._4_4_;
      *(undefined4 *)(puVar5 + 7) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_40._4_4_;
      puVar5[8] = plVar4;
      puVar5[9] = lVar2;
      lVar2 = (**(code **)(*plVar4 + 8))(plVar4);
      if ((lVar2 == 0) && (lVar2 = (**(code **)(*(longlong *)puVar5[8] + 0x18))(), lVar2 == 0)) {
        (**(code **)(*(longlong *)puVar5[8] + 0x20))();
      }
      lVar2 = (**(code **)(*(longlong *)puVar5[9] + 8))();
      if ((lVar2 == 0) && (lVar2 = (**(code **)(*(longlong *)puVar5[9] + 0x18))(), lVar2 == 0)) {
        (**(code **)(*(longlong *)puVar5[9] + 0x20))();
      }
      *(int *)((longlong)param_1 + 0x3c) = DAT_1464aaa90;
      *(undefined4 *)((longlong)param_1 + 0xc) = 4;
    }
  }
  return;
}



// FUNCTION 14249d000 FUN_14249d000 body=107 status=ok
// SIG undefined FUN_14249d000(void)

void FUN_14249d000(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar2 = **(longlong **)(param_1 + 0x38);
  lVar1 = lVar2 + (longlong)(int)(*(longlong **)(param_1 + 0x38))[1] * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,lVar2);
  }
  AlgoImpl::IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
            (*param_2,(longlong)*(int *)(param_2 + 1),local_res8[0],local_res8);
  return;
}



// FUNCTION 14249d070 FUN_14249d070 body=444 status=ok
// SIG undefined FUN_14249d070(void)

void FUN_14249d070(longlong *param_1,longlong param_2,undefined8 param_3,uint *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_40 [8];
  
  lVar15 = *(longlong *)(param_2 + 0x20);
  lVar14 = (longlong)*(int *)(param_2 + 0x28) * 0x10 + lVar15;
  local_res18 = param_3;
  do {
    if (lVar15 == lVar14) {
      return;
    }
    cVar8 = FWeakObjectPtr::IsValid(lVar15,1,0);
    if ((((cVar8 != '\0') && (lVar5 = *(longlong *)(lVar15 + 8), lVar5 != 0)) &&
        (*(char *)(lVar5 + 0xd) != '\0')) && (*(char *)(lVar5 + 0xf) != '\0')) {
      plVar1 = param_1 + 0x12;
      plVar12 = (longlong *)*plVar1;
      iVar4 = (int)param_1[0x13];
      plVar2 = plVar12 + iVar4;
      for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
        if (*plVar12 == lVar5) goto LAB_14249d1ff;
      }
      *(int *)(param_1 + 0x13) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0x9c) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(longlong *)((longlong)iVar4 * 8 + *plVar1) = lVar5;
      uVar11 = (uint)*(byte *)(lVar5 + 8);
      if ((int)(uint)*(byte *)(lVar5 + 8) <= (int)*param_4) {
        uVar11 = *param_4;
      }
      *param_4 = uVar11;
      uVar9 = FWeakObjectPtr::Get(lVar15);
      FWeakObjectPtr::operator=(&local_48,uVar9);
      piVar10 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                       ::FindId(local_res18,local_res10,local_40);
      if (*piVar10 != -1) {
        lVar6 = *param_1;
        lVar7 = param_1[1];
        for (lVar13 = lVar6; lVar13 != lVar6 + (longlong)(int)lVar7 * 8; lVar13 = lVar13 + 8) {
          cVar8 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar13,&local_48);
          if (cVar8 != '\0') {
            if ((int)(lVar13 - lVar6 >> 3) != -1) goto LAB_14249d1e9;
            break;
          }
        }
        iVar4 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar4 * 8);
        *puVar3 = local_48;
        puVar3[1] = uStack_44;
      }
LAB_14249d1e9:
      FUN_14249d070(param_1,lVar5,local_res18,param_4);
    }
LAB_14249d1ff:
    lVar15 = lVar15 + 0x10;
  } while( true );
}



// FUNCTION 14249d230 FUN_14249d230 body=159 status=ok
// SIG undefined FUN_14249d230(void)

void FUN_14249d230(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  if (*(int *)(param_3 + 0x108) < 1) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    param_1 = param_1 + 0xa8;
    local_4c = *(undefined4 *)(param_3 + 0xd0);
    puVar1 = local_98;
    local_54 = *(undefined8 *)(param_3 + 200);
    local_8c = 0x3f800000;
    local_48 = *(undefined8 *)(param_3 + 0xd4);
    local_40 = *(undefined4 *)(param_3 + 0xdc);
  }
  else {
    puVar1 = *(undefined1 **)(param_3 + 0x100);
    param_1 = param_1 + 0x98;
  }
  FUN_14249d3e0(param_1,puVar1);
  return;
}



// FUNCTION 14249d2f0 FUN_14249d2f0 body=75 status=ok
// SIG undefined FUN_14249d2f0(void)

void FUN_14249d2f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  plVar1 = (longlong *)FWeakObjectPtr::Get();
  uVar2 = FUN_14178ac60(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x208))(plVar1,uVar2,&local_18);
  return;
}



// FUNCTION 14249d340 FUN_14249d340 body=153 status=ok
// SIG undefined FUN_14249d340(void)

undefined8 FUN_14249d340(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 8));
      if (lVar1 != 0) {
        local_18 = param_2;
        local_10 = param_3;
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,&local_18);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14249d3e0 FUN_14249d3e0 body=381 status=ok
// SIG undefined FUN_14249d3e0(void)

undefined8 FUN_14249d3e0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if (((*(longlong *)(param_1 + 8) != 0) && (lVar1 = FWeakObjectPtr::Get(), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 8)), lVar1 != 0)) {
    local_8c = *(undefined4 *)(param_2 + 0xc);
    local_88 = *(undefined4 *)(param_2 + 0x10);
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_1c = 0;
    local_98[0] = *param_2 & 3;
    local_84 = *(undefined8 *)(param_2 + 0x14);
    local_94 = *(undefined4 *)(param_2 + 4);
    local_78 = *(undefined8 *)(param_2 + 0x20);
    local_90 = *(uint *)(param_2 + 8) & 1;
    local_7c = *(undefined4 *)(param_2 + 0x1c);
    local_6c = *(undefined8 *)(param_2 + 0x2c);
    local_70 = *(undefined4 *)(param_2 + 0x28);
    local_64 = *(undefined4 *)(param_2 + 0x34);
    local_58 = *(undefined4 *)(param_2 + 0x40);
    local_4c = *(undefined4 *)(param_2 + 0x4c);
    local_40 = *(undefined4 *)(param_2 + 0x58);
    local_38 = *(undefined4 *)(param_2 + 0x60);
    local_34 = *(undefined4 *)(param_2 + 100);
    local_30 = *(undefined4 *)(param_2 + 0x68);
    local_2c = *(undefined4 *)(param_2 + 0x6c);
    local_28 = *(undefined4 *)(param_2 + 0x70);
    local_60 = *(undefined8 *)(param_2 + 0x38);
    local_24 = *(undefined4 *)(param_2 + 0x74);
    local_54 = *(undefined8 *)(param_2 + 0x44);
    local_20 = *(undefined4 *)(param_2 + 0x78);
    local_18 = *(undefined8 *)(param_2 + 0x80);
    local_48 = *(undefined8 *)(param_2 + 0x50);
    local_10 = *(undefined8 *)(param_2 + 0x88);
    local_3c = *(undefined4 *)(param_2 + 0x5c);
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,local_98);
    return 1;
  }
  return 0;
}



// FUNCTION 14249d560 FUN_14249d560 body=161 status=ok
// SIG undefined FUN_14249d560(void)

undefined8 FUN_14249d560(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  if (*(int *)(param_3 + 0x108) < 1) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    param_1 = param_1 + 0xa8;
    local_4c = *(undefined4 *)(param_3 + 0xd0);
    puVar1 = local_98;
    local_54 = *(undefined8 *)(param_3 + 200);
    local_8c = 0x3f800000;
    local_48 = *(undefined8 *)(param_3 + 0xd4);
    local_40 = *(undefined4 *)(param_3 + 0xdc);
  }
  else {
    puVar1 = *(undefined1 **)(param_3 + 0x100);
    param_1 = param_1 + 0x98;
  }
  FUN_14249d3e0(param_1,puVar1);
  return 1;
}



// FUNCTION 14249d610 FUN_14249d610 body=38 status=ok
// SIG undefined FUN_14249d610(void)

undefined8 FUN_14249d610(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 8))
            (param_2,param_3,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return 1;
}



// FUNCTION 14249d640 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
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
  FUN_142495dd0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1450c7148;
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



// FUNCTION 14249d730 ExecuteTask body=242 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FSlateUpdatableInstanceBuffer::UpdateRenderingData'::`5'::EURCMacro_SlateBeginDrawingWindowsCommand>
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
  FUN_14249e420(param_1[2],uVar3,*(undefined4 *)(param_1 + 3));
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1450c7138;
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



// FUNCTION 14249d830 FUN_14249d830 body=235 status=ok
// SIG undefined FUN_14249d830(void)

void FUN_14249d830(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1424a36a0(param_1[2]);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1450c7108;
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



// FUNCTION 14249d920 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FManaTextureResource::SubmitFrame'::`2'::EURCMacro_UpdateTexture>::ExecuteTask
               (undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14249cc90(param_1[2],uVar3);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1450c70e8;
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



// FUNCTION 14249da10 FUN_14249da10 body=238 status=ok
// SIG undefined FUN_14249da10(void)

void FUN_14249da10(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142495a50(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1450c70f8;
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



// FUNCTION 14249db00 FUN_14249db00 body=238 status=ok
// SIG undefined FUN_14249db00(void)

void FUN_14249db00(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142495980(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1450c7118;
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



// FUNCTION 14249dbf0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FRendererModule::TryForceFlushSceneTextures'::`2'::ForceFlushSceneBuffersName,<lambda_160132e205407c8bdccebc5daf20ad18>_>_>
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
  FUN_142495430(param_1 + 2,uVar3);
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = &PTR_FUN_1450c6f98;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 14249dce0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FRendererModule::TryForceFlushSceneTextures'::`2'::ForceFlushSceneBuffersName,<lambda_160132e205407c8bdccebc5daf20ad18>_>_>
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
  FUN_142495d30(param_1 + 2,uVar3);
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = &PTR_FUN_1450c6fa8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 14249ddd0 FUN_14249ddd0 body=240 status=ok
// SIG undefined FUN_14249ddd0(void)

void FUN_14249ddd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,0);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1450c6fb8;
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



// FUNCTION 14249dec0 FUN_14249dec0 body=285 status=ok
// SIG undefined FUN_14249dec0(void)

void FUN_14249dec0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_res8;
  
  uVar4 = FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = (longlong *)param_1[2];
  uVar3 = param_1[3];
  local_res8 = *plVar7;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
    plVar7 = (longlong *)param_1[2];
  }
  FUN_1424ad480(plVar7,uVar4,&local_res8,uVar3);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1450c7158;
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
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  plVar7 = (longlong *)0x0;
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



// FUNCTION 14249dfe0 FUN_14249dfe0 body=238 status=ok
// SIG undefined FUN_14249dfe0(void)

void FUN_14249dfe0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142495b40(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_1450c7128;
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



// FUNCTION 14249e0d0 FUN_14249e0d0 body=584 status=ok
// SIG undefined FUN_14249e0d0(void)

void FUN_14249e0d0(longlong param_1,float param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar3 = FUN_14247f500();
  FUN_14247c3a0(uVar3);
  puVar9 = *(undefined4 **)(param_1 + 0x50);
  puVar1 = puVar9 + (longlong)*(int *)(param_1 + 0x58) * 2;
  for (; puVar9 != puVar1; puVar9 = puVar9 + 2) {
    local_res8 = *puVar9;
    local_resc = puVar9[1];
    cVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(&local_res8);
      plVar5 = *(longlong **)(lVar4 + 0x118);
      if (((param_3 != 1) ||
          (lVar4 = FWeakObjectPtr::Get(&local_res8), (*(byte *)(lVar4 + 0xb9) & 0x20) != 0)) ||
         ((plVar5 != (longlong *)0x0 &&
          (cVar2 = (**(code **)(*plVar5 + 0x460))(plVar5), cVar2 != '\0')))) {
        if (plVar5 == (longlong *)0x0) {
          fVar12 = 1.0;
        }
        else {
          fVar12 = *(float *)(plVar5 + 0x1a);
        }
        plVar5 = (longlong *)FWeakObjectPtr::Get(&local_res8);
        lVar4 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*plVar5 + 0x350))(plVar5,fVar12 * param_2,param_3,lVar4 + 0x30);
      }
    }
  }
  lVar4 = FUN_1424a1490();
  *(undefined1 *)(lVar4 + 0xd8) = 1;
  uVar3 = FUN_14247f500();
  FUN_14247ecb0(uVar3);
  lVar4 = FUN_1424a1490();
  *(undefined1 *)(lVar4 + 0xd8) = 0;
  uVar3 = FUN_1424a1490();
  FUN_14249f3e0(uVar3);
  lVar4 = FUN_1424a1490();
  plVar10 = *(longlong **)(lVar4 + 0x38);
  plVar5 = plVar10 + *(int *)(lVar4 + 0x40);
  for (; plVar10 != plVar5; plVar10 = plVar10 + 1) {
    lVar4 = *plVar10;
    lVar8 = *(longlong *)(lVar4 + 0x10);
    lVar11 = (longlong)*(int *)(lVar4 + 0x18) * 0xa0 + lVar8;
    if (lVar8 != lVar11) {
      lVar7 = lVar8 + 8;
      do {
        cVar2 = FWeakObjectPtr::IsValid(lVar8);
        if ((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(lVar7), cVar2 != '\0')) {
          uVar3 = FWeakObjectPtr::Get(lVar7);
          uVar6 = FWeakObjectPtr::Get(lVar8);
          FUN_142388e70(uVar6,uVar3,lVar7 + 8);
        }
        lVar8 = lVar8 + 0xa0;
        lVar7 = lVar7 + 0xa0;
      } while (lVar8 != lVar11);
    }
    *(undefined4 *)(lVar4 + 0x18) = 0;
    if (0x7fffffff < *(uint *)(lVar4 + 0x1c)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
                (lVar4 + 0x10,0);
    }
  }
  return;
}



// FUNCTION 14249e320 FUN_14249e320 body=251 status=ok
// SIG undefined FUN_14249e320(void)

void FUN_14249e320(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  cVar7 = FUN_1424a40c0();
  if (cVar7 != '\0') {
    if (DAT_146ac3ac6 != '\0') {
      cVar7 = IsInRenderingThread();
      if (cVar7 != '\0') goto LAB_14249e38b;
    }
    if (DAT_146ac3ac5 == '\0') {
      cVar7 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar7 != '\0') || (DAT_1468c21ae == '\0')) {
LAB_14249e38b:
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_14249e420(param_1,uVar9,param_2);
        return;
      }
      DVar8 = GetCurrentThreadId();
      if (DVar8 == DAT_1468c21c0) goto LAB_14249e38b;
    }
    plVar10 = (longlong *)FUN_142499c50(local_28,0,0xff);
    local_38 = (undefined4)param_1;
    uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
    lVar3 = *plVar10;
    *(undefined4 *)(lVar3 + 0x10) = local_38;
    *(undefined4 *)(lVar3 + 0x14) = uStack_34;
    *(undefined4 *)(lVar3 + 0x18) = param_2;
    *(undefined4 *)(lVar3 + 0x1c) = uStack_2c;
    lVar3 = *plVar10;
    lVar6 = plVar10[2];
    lVar4 = plVar10[1];
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
  return;
}



// FUNCTION 14249e420 FUN_14249e420 body=599 status=ok
// SIG undefined FUN_14249e420(void)

void FUN_14249e420(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res20 [2];
  undefined *local_18;
  undefined4 local_10;
  
  if (DAT_146ab62f7 == '\0') {
    lVar1 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    if (param_3 == 3) {
      local_18 = &DAT_146af5df0;
      local_10 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar1 + 0x38),local_res20,&local_18);
      plVar3 = (longlong *)0x0;
      if (local_res20[0] != -1) {
        plVar3 = (longlong *)((longlong)local_res20[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
      }
      plVar2 = plVar3 + 2;
      if (plVar3 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
      }
      lVar1 = *plVar2;
      if (*(char *)(*(longlong *)(lVar1 + 0x48) + 0x28) == '\0') {
        FUN_1419f3850();
      }
      FUN_1424accd0(lVar1,param_2,param_1);
      DispatchComputeShader
                (param_2,lVar1,*(ulonglong *)(param_1 + 0x1c8) & 0xffffffff,
                 *(ulonglong *)(param_1 + 0x1c8) >> 0x20,1);
      FUN_1424af8a0(lVar1,param_2,param_1);
    }
    else if (param_3 == 4) {
      local_18 = &DAT_146af5f40;
      local_10 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar1 + 0x38),local_res20,&local_18);
      plVar3 = (longlong *)0x0;
      if (local_res20[0] != -1) {
        plVar3 = (longlong *)((longlong)local_res20[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
      }
      plVar2 = plVar3 + 2;
      if (plVar3 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
      }
      lVar1 = *plVar2;
      if (*(char *)(*(longlong *)(lVar1 + 0x48) + 0x28) == '\0') {
        FUN_1419f3850();
      }
      FUN_1424accd0(lVar1,param_2,param_1);
      DispatchComputeShader
                (param_2,lVar1,*(ulonglong *)(param_1 + 0x1c8) & 0xffffffff,
                 *(ulonglong *)(param_1 + 0x1c8) >> 0x20,1);
      FUN_1424af8a0(lVar1,param_2,param_1);
    }
    else if (param_3 == 5) {
      local_18 = &DAT_146af6090;
      local_10 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar1 + 0x38),local_res20,&local_18);
      plVar3 = (longlong *)0x0;
      if (local_res20[0] != -1) {
        plVar3 = (longlong *)((longlong)local_res20[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
      }
      plVar2 = plVar3 + 2;
      if (plVar3 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
      }
      lVar1 = *plVar2;
      if (*(char *)(*(longlong *)(lVar1 + 0x48) + 0x28) == '\0') {
        FUN_1419f3850();
      }
      FUN_1424accd0(lVar1,param_2,param_1);
      DispatchComputeShader
                (param_2,lVar1,*(ulonglong *)(param_1 + 0x1c8) & 0xffffffff,
                 *(ulonglong *)(param_1 + 0x1c8) >> 0x20,1);
      FUN_1424af8a0(lVar1,param_2,param_1);
    }
  }
  return;
}



// FUNCTION 14249e680 FUN_14249e680 body=80 status=ok
// SIG undefined FUN_14249e680(void)

void FUN_14249e680(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  *(int *)(param_1 + 0x78) = param_3;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = (int)uVar2 + 1;
      *(undefined8 *)(param_1 + uVar2 * 0x18) = *(undefined8 *)(param_2 + uVar2 * 0x18);
      *(undefined1 *)(param_1 + 8 + uVar2 * 0x18) = *(undefined1 *)(param_2 + 8 + uVar2 * 0x18);
      *(undefined1 *)(param_1 + 9 + uVar2 * 0x18) = *(undefined1 *)(param_2 + 9 + uVar2 * 0x18);
      *(undefined4 *)(param_1 + 0xc + uVar2 * 0x18) = *(undefined4 *)(param_2 + 0xc + uVar2 * 0x18);
      *(undefined4 *)(param_1 + 0x10 + uVar2 * 0x18) =
           *(undefined4 *)(param_2 + 0x10 + uVar2 * 0x18);
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x78));
  }
  return;
}



// FUNCTION 14249e6d0 FUN_14249e6d0 body=85 status=ok
// SIG undefined FUN_14249e6d0(void)

void FUN_14249e6d0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  LOCK();
  iVar2 = *(int *)(param_2 + 0x2c8);
  if (iVar2 == 0) {
    *(int *)(param_2 + 0x2c8) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x110))) {
    cVar1 = *(char *)(param_1 + 0x119);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x119) = 1;
    }
    FUN_1424a7060(param_1,iVar2);
    *(char *)(param_1 + 0x119) = cVar1;
  }
  return;
}



// FUNCTION 14249e730 FUN_14249e730 body=1103 status=ok
// SIG undefined FUN_14249e730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14249e730(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_8c8 [32];
  int local_8a8;
  longlong local_8a0;
  undefined1 *local_898;
  longlong local_890;
  undefined1 *local_888;
  undefined1 **ppuStack_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined8 uStack_870;
  undefined1 local_868 [16];
  undefined1 *local_858;
  undefined8 local_850;
  undefined1 local_848 [2048];
  undefined1 *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_8c8;
  cVar2 = *(char *)(param_1 + 0x119);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x119) = 1;
    cVar2 = '\x01';
  }
  iVar11 = 0;
  if (cVar2 == '\0') {
    if (0 < *(int *)(param_1 + 0x110)) {
      do {
        cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0x108) + (longlong)iVar11 * 0x14);
        if (cVar2 != '\0') {
          FUN_1424a7060(param_1,iVar11);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x110));
    }
  }
  else {
    local_40 = 0;
    local_48 = (undefined1 *)0x0;
    local_3c = 0;
    local_858 = (undefined1 *)0x0;
    local_850 = 0;
    local_8a8 = 0;
    if (0 < *(int *)(param_1 + 0x110)) {
      local_8a0 = 0;
      do {
        lVar5 = local_8a0;
        iVar11 = local_8a8;
        lVar4 = (longlong)local_8a8;
        cVar2 = FWeakObjectPtr::IsValid(lVar4 * 0x14 + *(longlong *)(param_1 + 0x108));
        if ((cVar2 != '\0') && (*(int *)(*(longlong *)(param_1 + 0x108) + 0x10 + lVar5) == -1)) {
          uVar6 = local_850._4_4_;
          bVar12 = local_850._4_4_ != 0;
          iVar8 = 0;
          if (((longlong)local_850 < 0) && (local_850 = (ulonglong)local_850._4_4_ << 0x20, bVar12))
          {
            TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(local_868,0);
            uVar6 = local_850._4_4_;
            iVar8 = (int)local_850;
          }
          local_850 = CONCAT44(local_850._4_4_,iVar8 + 1);
          if ((int)uVar6 < iVar8 + 1) {
            TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_868,iVar8);
          }
          puVar9 = local_868;
          if (local_858 != (undefined1 *)0x0) {
            puVar9 = local_858;
          }
          *(int *)(puVar9 + (longlong)iVar8 * 4) = iVar11;
          lVar5 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x108) + lVar4 * 0x14);
          uVar1 = local_850;
          iVar8 = local_40;
          for (lVar5 = *(longlong *)(lVar5 + 400); local_850 = uVar1, lVar5 != 0;
              lVar5 = *(longlong *)(lVar5 + 400)) {
            LOCK();
            iVar3 = *(int *)(lVar5 + 0x2c8);
            if (iVar3 == 0) {
              *(int *)(lVar5 + 0x2c8) = 0;
              iVar3 = 0;
            }
            UNLOCK();
            local_40 = iVar8;
            if (iVar3 != -1) {
              iVar8 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x10 + (longlong)iVar3 * 0x14);
              if (iVar8 != -1) goto LAB_14249e946;
              local_850._0_4_ = (int)uVar1;
              lVar4 = (longlong)(int)local_850;
              local_850._0_4_ = (int)local_850 + 1;
              local_850._4_4_ = (uint)(uVar1 >> 0x20);
              if ((int)local_850._4_4_ < (int)local_850) {
                TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (local_868,uVar1 & 0xffffffff);
              }
              puVar9 = local_868;
              if (local_858 != (undefined1 *)0x0) {
                puVar9 = local_858;
              }
              *(int *)(puVar9 + lVar4 * 4) = iVar3;
            }
            uVar1 = local_850;
            iVar8 = local_40;
          }
          local_40 = iVar8 + 1;
          if (local_3c < iVar8 + 1) {
            FUN_1424ab1f0(local_848,iVar8);
          }
          puVar9 = local_848;
          if (local_48 != (undefined1 *)0x0) {
            puVar9 = local_48;
          }
          *(undefined8 *)(puVar9 + (longlong)iVar8 * 0x20 + 0x10) = 0;
          *(undefined8 *)(puVar9 + (longlong)iVar8 * 0x20 + 0x18) = 0;
LAB_14249e946:
          puVar9 = local_848;
          if (local_48 != (undefined1 *)0x0) {
            puVar9 = local_48;
          }
          puVar9 = puVar9 + (longlong)iVar8 * 0x20;
          if (*(int *)(puVar9 + 0x1c) < *(int *)(puVar9 + 0x18) + (int)local_850) {
            TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(puVar9);
          }
          lVar4 = (longlong)((int)local_850 + -1);
          lVar5 = local_8a0;
          if (-1 < (int)local_850 + -1) {
            do {
              puVar7 = local_868;
              if (local_858 != (undefined1 *)0x0) {
                puVar7 = local_858;
              }
              iVar11 = *(int *)(puVar7 + lVar4 * 4);
              *(int *)(*(longlong *)(param_1 + 0x108) + 0x10 + (longlong)iVar11 * 0x14) = iVar8;
              iVar3 = *(int *)(puVar9 + 0x18);
              *(int *)(puVar9 + 0x18) = iVar3 + 1;
              if (*(int *)(puVar9 + 0x1c) < iVar3 + 1) {
                TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(puVar9,iVar3);
              }
              puVar7 = *(undefined1 **)(puVar9 + 0x10);
              if (*(undefined1 **)(puVar9 + 0x10) == (undefined1 *)0x0) {
                puVar7 = puVar9;
              }
              lVar4 = lVar4 + -1;
              *(int *)(puVar7 + (longlong)iVar3 * 4) = iVar11;
              lVar5 = local_8a0;
              iVar11 = local_8a8;
            } while (-1 < lVar4);
          }
        }
        local_8a8 = iVar11 + 1;
        local_8a0 = lVar5 + 0x14;
      } while (local_8a8 < *(int *)(param_1 + 0x110));
    }
    local_898 = local_848;
    *(undefined1 *)(param_1 + 0x118) = 1;
    ppuStack_880 = &local_898;
    local_888 = &LAB_1424981f0;
    local_878 = 0x424981f0;
    uStack_874 = 1;
    local_890 = param_1;
    uStack_870 = ppuStack_880;
    FUN_1406a7b10(local_40,&local_878,0);
    *(undefined1 *)(param_1 + 0x118) = 0;
    FUN_14249f3e0(param_1);
    if (local_858 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    puVar9 = local_848;
    if (local_48 != (undefined1 *)0x0) {
      puVar9 = local_48;
    }
    if (local_40 != 0) {
      plVar10 = (longlong *)(puVar9 + 0x10);
      iVar11 = local_40;
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (local_48 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if ((*(int *)(param_1 + 0x114) < 0) && (*(int *)(param_1 + 0x114) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x108,0);
  }
  *(undefined1 *)(param_1 + 0x119) = 0;
  return;
}



// FUNCTION 14249eb80 FUN_14249eb80 body=1079 status=ok
// SIG undefined FUN_14249eb80(void)

void FUN_14249eb80(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 local_res10;
  undefined4 local_res14;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar12 = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  plVar1 = (longlong *)(param_1 + 0x148);
  iVar2 = *(int *)(param_1 + 0x170);
  puStack_48 = (uint *)(param_1 + 0x158);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar15 = puStack_48;
    }
    uVar14 = *puVar15;
    local_98 = uVar12;
    uStack_80 = uVar12;
    while (uVar14 == 0) {
      lVar13 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar14 = local_98 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar14;
      if (bVar3) goto LAB_14249ec5b;
      uVar14 = puVar15[lVar13 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_88._4_4_ = (uStack_80 - iVar7) + 0x1f;
    if (iVar2 < local_88._4_4_) {
LAB_14249ec5b:
      local_88._4_4_ = iVar2;
    }
  }
  uStack_40 = CONCAT44(local_88._4_4_,0xffffffff);
  auVar4._8_4_ = uStack_80;
  auVar4._0_8_ = uStack_40;
  auVar4._12_4_ = iStack_7c;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  uStack_38 = auVar4._8_8_;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = uStack_38;
  local_78._12_4_ = local_30._4_4_;
  bVar3 = local_88._4_4_ < *(int *)(param_1 + 0x170);
  local_68 = plVar1;
  local_58 = plVar1;
  local_88 = puStack_48;
  local_30 = plVar1;
  if (bVar3) {
    do {
      lVar13 = (longlong)iStack_7c * 0x14;
      cVar6 = FWeakObjectPtr::IsValid(lVar13 + *plVar1);
      if (cVar6 != '\0') {
        plVar8 = (longlong *)FWeakObjectPtr::Get(*plVar1 + lVar13);
        cVar6 = (**(code **)(*plVar8 + 0x400))(plVar8,0);
        if (cVar6 != '\0') {
          lVar9 = FWeakObjectPtr::Get(*plVar1 + lVar13);
          if ((*(byte *)(lVar9 + 0xb8) & 4) != 0) {
            lVar9 = *plVar1;
            uVar10 = FWeakObjectPtr::Get(lVar13 + lVar9);
            FUN_142396370(uVar10,*(undefined1 *)(lVar13 + 8 + lVar9));
          }
          FWeakObjectPtr::operator=(&local_res10,0);
          lVar9 = *plVar1;
          *(undefined4 *)(lVar9 + lVar13) = local_res10;
          *(undefined4 *)(lVar9 + 4 + lVar13) = local_res14;
        }
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1c0);
  iVar2 = *(int *)(param_1 + 0x1e8);
  puStack_48 = (uint *)(param_1 + 0x1d0);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar15 = puStack_48;
    }
    uVar14 = *puVar15;
    local_98 = uVar12;
    uStack_80 = uVar12;
    while (uVar14 == 0) {
      lVar13 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar12 = local_98 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar12;
      if (bVar3) goto LAB_14249ee4c;
      uVar14 = puVar15[lVar13 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_88._4_4_ = (uStack_80 - iVar7) + 0x1f;
    if (iVar2 < local_88._4_4_) {
LAB_14249ee4c:
      local_88._4_4_ = iVar2;
    }
  }
  uStack_40 = CONCAT44(local_88._4_4_,0xffffffff);
  auVar5._8_4_ = uStack_80;
  auVar5._0_8_ = uStack_40;
  auVar5._12_4_ = iStack_7c;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_38 = auVar5._8_8_;
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = uStack_38;
  local_78._12_4_ = local_30._4_4_;
  bVar3 = local_88._4_4_ < *(int *)(param_1 + 0x1e8);
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar3) {
    do {
      lVar13 = (longlong)iStack_7c * 0x14;
      cVar6 = FWeakObjectPtr::IsValid(lVar13 + *plVar1);
      if (cVar6 != '\0') {
        plVar8 = (longlong *)FWeakObjectPtr::Get(*plVar1 + lVar13);
        cVar6 = (**(code **)(*plVar8 + 0x400))(plVar8,0);
        if (cVar6 != '\0') {
          lVar9 = *plVar1;
          lVar11 = FWeakObjectPtr::Get(lVar13 + lVar9);
          iVar2 = *(int *)(lVar11 + 0x770);
          uVar10 = FWeakObjectPtr::Get(*plVar1 + lVar13);
          FUN_1426ce440(uVar10,(longlong)iVar2 * 0x10 + lVar11 + 0x728,
                        *(undefined1 *)(lVar13 + 8 + lVar9),*(undefined1 *)(lVar13 + 9 + lVar9),0);
          FWeakObjectPtr::operator=(&local_res10,0);
          lVar9 = *plVar1;
          *(undefined4 *)(lVar9 + lVar13) = local_res10;
          *(undefined4 *)(lVar9 + 4 + lVar13) = local_res14;
        }
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 14249efc0 FUN_14249efc0 body=1043 status=ok
// SIG undefined FUN_14249efc0(void)

void FUN_14249efc0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  longlong *plVar15;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  plVar15 = (longlong *)(param_1 + 0x148);
  iVar1 = *(int *)(param_1 + 0x170);
  puStack_48 = (uint *)(param_1 + 0x158);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar1 != 0) {
    puVar14 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar14 = puStack_48;
    }
    uVar13 = *puVar14;
    local_98 = uVar11;
    uStack_80 = uVar11;
    while (uVar13 == 0) {
      lVar12 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar13 = local_98 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar13;
      if (bVar2) goto LAB_14249f09a;
      uVar13 = puVar14[lVar12 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_88._4_4_ = (uStack_80 - iVar6) + 0x1f;
    if (iVar1 < local_88._4_4_) {
LAB_14249f09a:
      local_88._4_4_ = iVar1;
    }
  }
  uStack_40 = CONCAT44(local_88._4_4_,0xffffffff);
  auVar3._8_4_ = uStack_80;
  auVar3._0_8_ = uStack_40;
  auVar3._12_4_ = iStack_7c;
  local_30._0_4_ = SUB84(plVar15,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  uStack_38 = auVar3._8_8_;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = uStack_38;
  local_78._12_4_ = local_30._4_4_;
  bVar2 = local_88._4_4_ < *(int *)(param_1 + 0x170);
  local_68 = plVar15;
  local_58 = plVar15;
  local_88 = puStack_48;
  local_30 = plVar15;
  if (bVar2) {
    do {
      lVar12 = (longlong)iStack_7c * 0x14;
      cVar5 = FWeakObjectPtr::IsValid(lVar12 + *plVar15);
      if (cVar5 != '\0') {
        plVar7 = (longlong *)FWeakObjectPtr::Get(*plVar15 + lVar12);
        cVar5 = (**(code **)(*plVar7 + 0x400))(plVar7,0);
        if (cVar5 == '\0') {
          lVar8 = FWeakObjectPtr::Get(*plVar15 + lVar12);
          if ((*(byte *)(lVar8 + 0xb8) & 4) != 0) {
            lVar8 = *plVar15;
            uVar9 = FWeakObjectPtr::Get(lVar12 + lVar8);
            FUN_142396370(uVar9,*(undefined1 *)(lVar12 + 8 + lVar8));
          }
        }
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::Empty(plVar15,0);
  plVar15 = (longlong *)(param_1 + 0x1c0);
  iVar1 = *(int *)(param_1 + 0x1e8);
  puStack_48 = (uint *)(param_1 + 0x1d0);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar1 != 0) {
    puVar14 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar14 = puStack_48;
    }
    uVar13 = *puVar14;
    local_98 = uVar11;
    uStack_80 = uVar11;
    while (uVar13 == 0) {
      lVar12 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar11 = local_98 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar11;
      if (bVar2) goto LAB_14249f27a;
      uVar13 = puVar14[lVar12 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_88._4_4_ = (uStack_80 - iVar6) + 0x1f;
    if (iVar1 < local_88._4_4_) {
LAB_14249f27a:
      local_88._4_4_ = iVar1;
    }
  }
  uStack_40 = CONCAT44(local_88._4_4_,0xffffffff);
  auVar4._8_4_ = uStack_80;
  auVar4._0_8_ = uStack_40;
  auVar4._12_4_ = iStack_7c;
  local_30._0_4_ = SUB84(plVar15,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
  uStack_38 = auVar4._8_8_;
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = uStack_38;
  local_78._12_4_ = local_30._4_4_;
  bVar2 = local_88._4_4_ < *(int *)(param_1 + 0x1e8);
  local_68 = plVar15;
  local_58 = plVar15;
  local_30 = plVar15;
  local_88 = puStack_48;
  if (bVar2) {
    do {
      lVar12 = (longlong)iStack_7c * 0x14;
      cVar5 = FWeakObjectPtr::IsValid(lVar12 + *plVar15);
      if (cVar5 != '\0') {
        plVar7 = (longlong *)FWeakObjectPtr::Get(*plVar15 + lVar12);
        cVar5 = (**(code **)(*plVar7 + 0x400))(plVar7,0);
        if (cVar5 == '\0') {
          lVar8 = *plVar15;
          lVar10 = FWeakObjectPtr::Get(lVar12 + lVar8);
          iVar1 = *(int *)(lVar10 + 0x770);
          uVar9 = FWeakObjectPtr::Get(*plVar15 + lVar12);
          FUN_1426ce440(uVar9,(longlong)iVar1 * 0x10 + lVar10 + 0x728,
                        *(undefined1 *)(lVar12 + 8 + lVar8),*(undefined1 *)(lVar12 + 9 + lVar8),0);
        }
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::Empty(plVar15,0);
  return;
}



// FUNCTION 14249f3e0 FUN_14249f3e0 body=374 status=ok
// SIG undefined FUN_14249f3e0(void)

void FUN_14249f3e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  plVar11 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar11 + *(int *)(param_1 + 0x40);
  if (plVar11 != plVar1) {
    do {
      plVar2 = (longlong *)*plVar11;
      puVar6 = (undefined8 *)*plVar2;
      uVar10 = (ulonglong)(int)plVar2[1];
      puVar8 = puVar6 + uVar10 * 10;
      if (puVar6 != puVar8) {
        plVar7 = puVar6 + 6;
        do {
          uVar4 = 0;
          if ((int)plVar7[2] != 0) {
            plVar5 = (longlong *)*plVar7;
            if ((longlong *)*plVar7 == (longlong *)0x0) {
              plVar5 = plVar7 + -4;
            }
            if (plVar5 != (longlong *)0x0) {
              uVar4 = (**(code **)(*plVar5 + 8))();
            }
          }
          (*(code *)*puVar6)(uVar4);
          puVar6 = puVar6 + 10;
          plVar7 = plVar7 + 10;
        } while (puVar6 != puVar8);
        puVar6 = (undefined8 *)*plVar2;
        uVar10 = (ulonglong)*(uint *)(plVar2 + 1);
      }
      iVar3 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar3 < 0) {
        if ((int)uVar10 != 0) {
          plVar7 = puVar6 + 6;
          do {
            if ((int)plVar7[2] != 0) {
              plVar5 = (longlong *)*plVar7;
              if ((longlong *)*plVar7 == (longlong *)0x0) {
                plVar5 = plVar7 + -4;
              }
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x10))(plVar5,0);
              }
            }
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 10;
            uVar9 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 != 0);
          iVar3 = *(int *)((longlong)plVar2 + 0xc);
        }
        *(undefined4 *)(plVar2 + 1) = 0;
        if (iVar3 != 0) {
          TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar2,0);
        }
      }
      else {
        if ((int)uVar10 != 0) {
          plVar7 = puVar6 + 6;
          do {
            if ((int)plVar7[2] != 0) {
              plVar5 = (longlong *)*plVar7;
              if ((longlong *)*plVar7 == (longlong *)0x0) {
                plVar5 = plVar7 + -4;
              }
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x10))();
              }
            }
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 10;
            uVar9 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 != 0);
        }
        *(undefined4 *)(plVar2 + 1) = 0;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  return;
}



// FUNCTION 14249f560 FUN_14249f560 body=752 status=ok
// SIG undefined FUN_14249f560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14249f560(undefined8 param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_198 [32];
  longlong local_178 [2];
  code *local_168;
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  code *local_118 [2];
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined4 local_d8;
  longlong local_c8 [16];
  longlong *local_48;
  uint local_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar8 = (longlong *)*param_2;
  plVar11 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uStack_3c = 0;
  plVar13 = (longlong *)((param_2[1] - (longlong)plVar8) + 7 >> 3);
  if ((longlong *)param_2[1] < plVar8) {
    plVar13 = plVar11;
  }
  plVar9 = plVar11;
  plVar5 = plVar11;
  plVar6 = plVar11;
  plVar12 = plVar11;
  if (plVar13 != (longlong *)0x0) {
    do {
      lVar1 = *plVar8;
      for (lVar2 = *(longlong *)(*plVar8 + 400); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 400)) {
        lVar1 = lVar2;
      }
      iVar10 = (int)plVar9;
      plVar7 = local_c8;
      if (plVar5 != (longlong *)0x0) {
        plVar7 = plVar11;
      }
      plVar7 = (longlong *)((ulonglong)plVar7 | (ulonglong)plVar5);
      for (plVar3 = plVar7; plVar3 != plVar7 + iVar10; plVar3 = plVar3 + 1) {
        if (*plVar3 == lVar1) {
          if ((int)((longlong)plVar3 - (longlong)plVar7 >> 3) != -1) goto LAB_14249f676;
          break;
        }
      }
      local_40 = iVar10 + 1;
      if ((int)plVar6 < (int)local_40) {
        TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_c8,plVar9);
        plVar5 = local_48;
      }
      plVar9 = local_c8;
      if (plVar5 != (longlong *)0x0) {
        plVar9 = plVar5;
      }
      plVar9[iVar10] = lVar1;
      plVar6 = (longlong *)(ulonglong)uStack_3c;
      plVar9 = (longlong *)(ulonglong)local_40;
      plVar5 = local_48;
LAB_14249f676:
      plVar8 = plVar8 + 1;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
    } while (plVar12 != plVar13);
  }
  local_138 = (longlong *)0x0;
  local_128 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_158);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_168 = FUN_142498200;
  plVar8 = local_c8;
  if (local_48 != (longlong *)0x0) {
    plVar8 = local_48;
  }
  plVar13 = (longlong *)((longlong)(int)local_40 & 0x1fffffffffffffff);
  if (plVar8 + (int)local_40 < plVar8) {
    plVar13 = plVar11;
  }
  plVar9 = plVar11;
  if (plVar13 != (longlong *)0x0) {
    do {
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        plVar5 = plVar11;
        local_178[0] = lVar1;
        if (local_128 != 0) {
          plVar6 = local_158;
          if (local_138 != (longlong *)0x0) {
            plVar6 = local_138;
          }
          if (plVar6 != (longlong *)0x0) {
            plVar5 = (longlong *)(**(code **)(*plVar6 + 8))();
          }
        }
        (*local_168)(plVar5,local_178);
        local_e8 = 0;
        local_d8 = 0;
        if (local_128 == 0) {
LAB_14249f797:
          local_118[0] = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          plVar5 = local_158;
          if (local_138 != (longlong *)0x0) {
            plVar5 = local_138;
          }
          if (plVar5 == (longlong *)0x0) goto LAB_14249f797;
          plVar5 = (longlong *)(**(code **)*plVar5)(plVar5,local_108);
          (**(code **)(*plVar5 + 8))(plVar5);
          local_118[0] = local_168;
        }
        FUN_142492e40(lVar1 + 0x1a0,local_118);
      }
      plVar8 = plVar8 + 1;
      plVar9 = (longlong *)((longlong)plVar9 + 1);
    } while (plVar9 != plVar13);
  }
  if (local_128 != 0) {
    plVar8 = local_158;
    if (local_138 != (longlong *)0x0) {
      plVar8 = local_138;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 14249f850 FUN_14249f850 body=324 status=ok
// SIG undefined FUN_14249f850(void)

undefined8 FUN_14249f850(int param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_146af5a2c) && (_Init_thread_header(&DAT_146af5a2c), DAT_146af5a2c == -1)) {
    uVar6 = FCommandLine::Get();
    DAT_146af5a28 = FParse::Param(uVar6,L"ForceGbxRenderFrameScopeOpen");
    _Init_thread_footer(&DAT_146af5a2c);
  }
  if ((*piVar7 < DAT_146af5a34) && (_Init_thread_header(&DAT_146af5a34), DAT_146af5a34 == -1)) {
    uVar6 = FCommandLine::Get();
    DAT_146af5a30 = FParse::Param(uVar6,L"NoGbxRenderFrameScopeOpen");
    _Init_thread_footer(&DAT_146af5a34);
  }
  lVar2 = DAT_146af5798;
  if (DAT_146af5a30 == '\0') {
    if (DAT_146af5a28 == '\0') {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
        lVar5 = 4;
      }
      else {
        lVar5 = 0;
      }
      iVar1 = *(int *)(lVar5 + lVar2);
      if (iVar1 == 1) {
        iVar1 = param_1;
      }
      if (iVar1 != 2) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14249f9a0 FUN_14249f9a0 body=2728 status=ok
// SIG undefined FUN_14249f9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14249f9a0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  byte *pbVar1;
  uint *puVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  longlong lVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  longlong *plVar14;
  byte *pbVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong *plVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  float fVar65;
  float fVar66;
  float fVar67;
  byte local_1a8;
  undefined1 local_1a7 [3];
  float local_1a4 [3];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [8];
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 local_158;
  uint local_150;
  undefined1 local_148 [8];
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  undefined8 local_120;
  longlong local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [176];
  
  fVar65 = 1.1;
  local_150 = *(uint *)(param_2 + 1);
  uVar17 = (ulonglong)(int)local_150;
  pbVar15 = (byte *)*param_2;
  local_118 = uVar17 * 0x90;
  local_1a4[0] = 1.1;
  local_1a8 = 0;
  pbVar1 = pbVar15 + local_118;
  for (; pbVar15 != pbVar1; pbVar15 = pbVar15 + 0x90) {
    if (((*pbVar15 & 1) != 0) && (fVar43 = *(float *)(pbVar15 + 0xc), fVar43 < fVar65)) {
      fVar65 = fVar43;
      local_1a4[0] = fVar43;
    }
  }
  plVar23 = *(longlong **)(*param_3 + 8);
  plVar14 = plVar23 + (longlong)*(int *)(*param_3 + 0x10) * 0xc;
  local_120 = param_4;
  if (plVar23 != plVar14) {
    pfVar22 = (float *)(plVar23 + 8);
    do {
      lVar20 = *plVar23;
      if ((lVar20 != 0) && ((*(byte *)(lVar20 + 0x94) & 2) == 0)) {
        uVar19 = *(uint *)(lVar20 + 0xc);
        if ((int)uVar19 < (int)DAT_1469e91c4) {
          uVar16 = uVar19 & 0xffff;
          uVar10 = uVar19;
          if ((int)uVar19 < 0) {
            uVar10 = uVar19 + 0xffff;
            uVar16 = uVar16 - 0x10000;
          }
          lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                   (longlong)(int)uVar16 * 0x18;
        }
        else {
          lVar20 = 0;
        }
        if ((*(uint *)(lVar20 + 8) >> 0x1d & 1) == 0) {
          puVar18 = *(uint **)(param_5 + 0x68);
          if (*(uint **)(param_5 + 0x68) == (uint *)0x0) {
            puVar18 = (uint *)(param_5 + 0x58);
          }
          puVar2 = puVar18 + *(int *)(param_5 + 0x70);
          for (; puVar18 != puVar2; puVar18 = puVar18 + 1) {
            if (*puVar18 == uVar19) goto LAB_1424a0315;
          }
          cVar9 = FMath::LineExtentBoxIntersection
                            (pfVar22 + -0xe,param_3 + 8,(longlong)param_3 + 0x4c,param_3 + 0xb,
                             local_e8,local_f8,local_148);
          fVar48 = fRam0000000146af5848;
          fVar46 = fRam0000000146af5844;
          fVar66 = _DAT_146af5840;
          fVar67 = fRam0000000146af5758;
          fVar43 = fRam0000000146af5754;
          fVar65 = _DAT_146af5750;
          if (cVar9 != '\0') {
            lVar21 = *plVar23;
            lVar20 = *(longlong *)(lVar21 + 0x168);
            if (lVar20 == 0) {
              fVar55 = 0.0;
              fVar56 = 0.0;
              fVar57 = 0.0;
              fVar28 = 0.0;
              fVar36 = 0.0;
              fVar44 = 0.0;
              fVar33 = 0.0;
              fVar27 = (float)((uint)_DAT_146af5750 & _DAT_146af5760);
              fVar32 = (float)((uint)fRam0000000146af5754 & uRam0000000146af5764);
              fVar34 = (float)((uint)fRam0000000146af5758 & uRam0000000146af5768);
              fVar37 = (float)((uint)fRam0000000146af575c & uRam0000000146af576c);
              fVar35 = fRam0000000146af575c;
            }
            else {
              fVar36 = *(float *)(lVar20 + 0x210);
              fVar44 = *(float *)(lVar20 + 0x214);
              fVar33 = *(float *)(lVar20 + 0x218);
              fVar55 = *(float *)(lVar20 + 0x220);
              fVar56 = *(float *)(lVar20 + 0x224);
              fVar57 = *(float *)(lVar20 + 0x228);
              fVar28 = *(float *)(lVar20 + 0x22c);
              fVar27 = *(float *)(lVar20 + 0x230);
              fVar32 = *(float *)(lVar20 + 0x234);
              fVar34 = *(float *)(lVar20 + 0x238);
              fVar37 = *(float *)(lVar20 + 0x23c);
              fVar35 = *(float *)(lVar20 + 0x21c);
            }
            auVar30 = *(undefined1 (*) [16])(pfVar22 + 4);
            fVar38 = auVar30._0_4_;
            fVar54 = auVar30._4_4_;
            fVar3 = auVar30._8_4_;
            auVar24._4_4_ = fVar32;
            auVar24._0_4_ = fVar27;
            auVar24._8_4_ = fVar34;
            auVar24._12_4_ = fVar37;
            auVar24 = minps(auVar30,auVar24);
            auVar25._4_4_ = -(uint)(auVar24._4_4_ < fRam0000000146af5844);
            auVar25._0_4_ = -(uint)(auVar24._0_4_ < _DAT_146af5840);
            auVar25._8_4_ = -(uint)(auVar24._8_4_ < fRam0000000146af5848);
            auVar25._12_4_ = -(uint)(auVar24._12_4_ < fRam0000000146af584c);
            iVar11 = movmskps((int)lVar20,auVar25);
            fVar61 = fVar38 * fVar27;
            fVar62 = fVar54 * fVar32;
            fVar63 = fVar3 * fVar34;
            fVar64 = auVar30._12_4_ * fVar37;
            if (iVar11 == 0) {
              fVar65 = pfVar22[-4];
              fVar43 = pfVar22[-3];
              fVar67 = pfVar22[-2];
              fVar66 = pfVar22[-1];
              fVar27 = *pfVar22 * fVar27;
              fVar32 = pfVar22[1] * fVar32;
              fVar34 = pfVar22[2] * fVar34;
              fVar37 = pfVar22[3] * fVar37;
              fVar46 = fVar66 * fVar36 * _DAT_146af5800 + fVar35 * fVar65 +
                       fVar67 * fVar44 * _DAT_146af57f0 + fVar43 * fVar33 * _DAT_146af57e0;
              fVar48 = fVar67 * fVar36 * fRam0000000146af5804 + fVar35 * fVar43 +
                       fVar66 * fVar44 * fRam0000000146af57f4 +
                       fVar65 * fVar33 * fRam0000000146af57e4;
              fVar38 = fVar43 * fVar36 * fRam0000000146af5808 + fVar35 * fVar67 +
                       fVar65 * fVar44 * fRam0000000146af57f8 +
                       fVar66 * fVar33 * fRam0000000146af57e8;
              fVar54 = fVar65 * fVar36 * fRam0000000146af580c + fVar35 * fVar66 +
                       fVar43 * fVar44 * fRam0000000146af57fc +
                       fVar67 * fVar33 * fRam0000000146af57ec;
              fVar65 = fVar34 * fVar44 - fVar32 * fVar33;
              fVar43 = fVar27 * fVar33 - fVar34 * fVar36;
              fVar67 = fVar32 * fVar36 - fVar27 * fVar44;
              fVar66 = fVar37 * fVar35 - fVar37 * fVar35;
              fVar65 = fVar65 + fVar65;
              fVar43 = fVar43 + fVar43;
              fVar67 = fVar67 + fVar67;
              fVar66 = fVar66 + fVar66;
              fVar55 = (fVar67 * fVar44 - fVar43 * fVar33) + fVar65 * fVar35 + fVar27 + fVar55;
              fVar56 = (fVar65 * fVar33 - fVar67 * fVar36) + fVar43 * fVar35 + fVar32 + fVar56;
              fVar57 = (fVar43 * fVar36 - fVar65 * fVar44) + fVar67 * fVar35 + fVar34 + fVar57;
              fVar28 = (fVar66 * fVar35 - fVar66 * fVar35) + fVar66 * fVar35 + fVar37 + fVar28;
            }
            else {
              fVar39 = fVar44 + fVar44;
              fVar41 = fVar33 + fVar33;
              fVar42 = fVar36 * (fVar36 + fVar36);
              fVar40 = (fVar36 + fVar36) * fVar35;
              fVar28 = pfVar22[-4];
              fVar5 = pfVar22[-3];
              fVar6 = pfVar22[-2];
              fVar50 = pfVar22[-1];
              fVar58 = (fVar41 * fVar35 + fVar39 * fVar36) * fVar27;
              fVar59 = (fVar40 + fVar41 * fVar44) * fVar32;
              fVar60 = (fVar39 * fVar35 + fVar41 * fVar36) * fVar34;
              fVar45 = fVar32 * (fVar39 * fVar36 - fVar41 * fVar35);
              fVar47 = fVar34 * (fVar41 * fVar44 - fVar40);
              fVar49 = fVar27 * (fVar41 * fVar36 - fVar39 * fVar35);
              fVar27 = (float)((uint)((_DAT_146af5750 - (fVar33 * fVar41 + fVar44 * fVar39)) *
                                     fVar27) & _DAT_146af5760);
              fVar32 = (float)((uint)((fRam0000000146af5754 - (fVar33 * fVar41 + fVar42)) * fVar32)
                              & uRam0000000146af5764);
              fVar35 = (float)((uint)((fRam0000000146af5758 - (fVar44 * fVar39 + fVar42)) * fVar34)
                              & uRam0000000146af5768);
              fVar39 = (float)((uint)((fRam0000000146af575c - (fVar42 + fVar42)) * fVar37) &
                              uRam0000000146af576c);
              fVar33 = fVar5 + fVar5;
              fVar36 = fVar6 + fVar6;
              fVar40 = fVar28 * (fVar28 + fVar28);
              fVar44 = fVar50 * (fVar28 + fVar28);
              fVar51 = (fVar50 * fVar36 + fVar28 * fVar33) * fVar38;
              fVar52 = (fVar44 + fVar5 * fVar36) * fVar54;
              fVar53 = (fVar50 * fVar33 + fVar28 * fVar36) * fVar3;
              fVar41 = fVar54 * (fVar28 * fVar33 - fVar50 * fVar36);
              fVar42 = fVar3 * (fVar5 * fVar36 - fVar44);
              fVar50 = fVar38 * (fVar28 * fVar36 - fVar50 * fVar33);
              fVar28 = (float)((uint)((_DAT_146af5750 - (fVar6 * fVar36 + fVar5 * fVar33)) * fVar38)
                              & _DAT_146af5760);
              fVar34 = (float)((uint)((fRam0000000146af5754 - (fVar6 * fVar36 + fVar40)) * fVar54) &
                              uRam0000000146af5764);
              fVar37 = (float)((uint)((fRam0000000146af5758 - (fVar5 * fVar33 + fVar40)) * fVar3) &
                              uRam0000000146af5768);
              fVar38 = (float)((uint)((fRam0000000146af575c - (fVar40 + fVar40)) * auVar30._12_4_) &
                              uRam0000000146af576c);
              fVar33 = *pfVar22;
              fVar36 = pfVar22[1];
              fVar44 = pfVar22[2];
              local_198._0_4_ =
                   fVar51 * fVar45 + fVar28 * fVar27 + fVar50 * fVar60 + fVar38 * fVar55;
              local_198._4_4_ =
                   fVar51 * fVar32 + fVar28 * fVar58 + fVar50 * fVar47 + fVar38 * fVar56;
              uStack_190._0_4_ =
                   fVar51 * fVar59 + fVar28 * fVar49 + fVar50 * fVar35 + fVar38 * fVar57;
              uStack_190._4_4_ =
                   fVar51 * fVar39 + fVar28 * fVar39 + fVar50 * fVar39 +
                   fVar38 * fRam0000000146af575c;
              local_188._4_4_ =
                   fVar34 * fVar32 + fVar41 * fVar58 + fVar52 * fVar47 + fVar38 * fVar56;
              local_188._0_4_ =
                   fVar34 * fVar45 + fVar41 * fVar27 + fVar52 * fVar60 + fVar38 * fVar55;
              uStack_180._0_4_ =
                   fVar34 * fVar59 + fVar41 * fVar49 + fVar52 * fVar35 + fVar38 * fVar57;
              uStack_180._4_4_ =
                   fVar34 * fVar39 + fVar41 * fVar39 + fVar52 * fVar39 +
                   fVar38 * fRam0000000146af575c;
              local_178 = fVar42 * fVar45 + fVar53 * fVar27 + fVar37 * fVar60 + fVar38 * fVar55;
              fStack_174 = fVar42 * fVar32 + fVar53 * fVar58 + fVar37 * fVar47 + fVar38 * fVar56;
              fStack_170 = fVar42 * fVar59 + fVar53 * fVar49 + fVar37 * fVar35 + fVar38 * fVar57;
              fStack_16c = fVar42 * fVar39 + fVar53 * fVar39 + fVar37 * fVar39 +
                           fVar38 * fRam0000000146af575c;
              local_168 = fVar36 * fVar45 + fVar33 * fVar27 + fVar44 * fVar60 +
                          fRam0000000146af575c * fVar55;
              fStack_164 = fVar36 * fVar32 + fVar33 * fVar58 + fVar44 * fVar47 +
                           fRam0000000146af575c * fVar56;
              fStack_160 = fVar36 * fVar59 + fVar33 * fVar49 + fVar44 * fVar35 +
                           fRam0000000146af575c * fVar57;
              fStack_15c = fVar36 * fVar39 + fVar33 * fVar39 + fVar44 * fVar39 +
                           fRam0000000146af575c * fRam0000000146af575c;
              FMatrix::RemoveScaling(&local_198);
              auVar30 = _local_188;
              fVar65 = (float)(-(uint)(fVar66 <= fVar61) & (_DAT_146af5830 ^ (uint)fVar65) ^
                              _DAT_146af5830);
              fVar66 = (float)(-(uint)(fVar46 <= fVar62) & (uRam0000000146af5834 ^ (uint)fVar43) ^
                              uRam0000000146af5834);
              fVar67 = (float)(-(uint)(fVar48 <= fVar63) & (uRam0000000146af5838 ^ (uint)fVar67) ^
                              uRam0000000146af5838);
              local_198 = CONCAT44(local_198._4_4_ * fVar65,(float)local_198 * fVar65);
              uStack_190 = CONCAT44(uStack_190._4_4_,(float)uStack_190 * fVar65);
              fVar65 = (float)uStack_180 * fVar66;
              fVar43 = (float)local_188._0_4_ * fVar66;
              auVar7._4_8_ = uStack_180;
              auVar7._0_4_ = (float)local_188._4_4_ * fVar66;
              local_188 = (undefined1  [8])(auVar7._0_8_ << 0x20);
              uStack_180._4_4_ = auVar30._12_4_;
              uStack_180._0_4_ = fVar65;
              fStack_174 = fStack_174 * fVar67;
              fStack_170 = fStack_170 * fVar67;
              local_178 = local_178 * fVar67;
              local_188._0_4_ = fVar43;
              FQuat::FQuat(&local_108,&local_198);
              lVar21 = *plVar23;
              local_158 = 0x322bcc77;
              auVar29._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
              auVar29._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
              auVar29._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
              auVar29._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
              fVar46 = auVar29._4_4_ + auVar29._0_4_;
              fVar48 = auVar29._8_4_ + auVar29._4_4_;
              fVar33 = auVar29._12_4_ + auVar29._8_4_;
              fVar36 = auVar29._0_4_ + auVar29._12_4_;
              auVar30._4_4_ = fVar48;
              auVar30._0_4_ = fVar46;
              auVar30._8_4_ = fVar33;
              auVar30._12_4_ = fVar36;
              auVar30 = rsqrtps(auVar29,auVar30);
              fVar65 = auVar30._0_4_;
              fVar43 = auVar30._4_4_;
              fVar67 = auVar30._8_4_;
              fVar66 = auVar30._12_4_;
              fVar65 = (_DAT_146af5820 - fVar65 * fVar65 * fVar46 * _DAT_146af5820) * fVar65 +
                       fVar65;
              fVar43 = (fRam0000000146af5824 - fVar43 * fVar43 * fVar48 * fRam0000000146af5824) *
                       fVar43 + fVar43;
              fVar67 = (fRam0000000146af5828 - fVar67 * fVar67 * fVar33 * fRam0000000146af5828) *
                       fVar67 + fVar67;
              fVar66 = (fRam0000000146af582c - fVar66 * fVar66 * fVar36 * fRam0000000146af582c) *
                       fVar66 + fVar66;
              fVar28 = 0.0;
              fVar46 = (float)(((uint)(((_DAT_146af5820 - fVar65 * fVar65 * fVar46 * _DAT_146af5820)
                                        * fVar65 + fVar65) * local_108) ^ _DAT_146af5810) &
                               -(uint)(1e-08 <= fVar46) ^ _DAT_146af5810);
              fVar48 = (float)(((uint)(((fRam0000000146af5824 -
                                        fVar43 * fVar43 * fVar48 * fRam0000000146af5824) * fVar43 +
                                       fVar43) * fStack_104) ^ uRam0000000146af5814) &
                               -(uint)(1e-08 <= fVar48) ^ uRam0000000146af5814);
              fVar38 = (float)(((uint)(((fRam0000000146af5828 -
                                        fVar67 * fVar67 * fVar33 * fRam0000000146af5828) * fVar67 +
                                       fVar67) * fStack_100) ^ uRam0000000146af5818) &
                               -(uint)(1e-08 <= fVar33) ^ uRam0000000146af5818);
              fVar54 = (float)(((uint)(((fRam0000000146af582c -
                                        fVar66 * fVar66 * fVar36 * fRam0000000146af582c) * fVar66 +
                                       fVar66) * fStack_fc) ^ uRam0000000146af581c) &
                               -(uint)(1e-08 <= fVar36) ^ uRam0000000146af581c);
              fVar55 = local_168;
              fVar56 = fStack_164;
              fVar57 = fStack_160;
              local_108 = fVar46;
              fStack_104 = fVar48;
              fStack_100 = fVar38;
              fStack_fc = fVar54;
            }
            iVar11 = (int)param_2[1];
            uVar17 = (ulonglong)iVar11;
            fVar66 = *(float *)(param_3 + 3) * fVar61;
            fVar33 = *(float *)((longlong)param_3 + 0x1c) * fVar62;
            fVar36 = *(float *)(param_3 + 4) * fVar63;
            fVar65 = fVar36 * fVar48 - fVar33 * fVar38;
            fVar43 = fVar66 * fVar38 - fVar36 * fVar46;
            fVar67 = fVar33 * fVar46 - fVar66 * fVar48;
            fVar65 = fVar65 + fVar65;
            fVar43 = fVar43 + fVar43;
            fVar67 = fVar67 + fVar67;
            local_130 = (fVar67 * fVar48 - fVar43 * fVar38) + fVar65 * fVar54 + fVar66 + fVar55;
            local_12c = (fVar65 * fVar38 - fVar67 * fVar46) + fVar43 * fVar54 + fVar33 + fVar56;
            local_128 = (fVar43 * fVar46 - fVar65 * fVar48) + fVar67 * fVar54 + fVar36 + fVar57;
            fVar33 = *(float *)((longlong)param_3 + 0x24) * fVar61;
            fVar36 = *(float *)(param_3 + 5) * fVar62;
            fVar44 = *(float *)((longlong)param_3 + 0x2c) * fVar63;
            fVar65 = fVar44 * fVar48 - fVar36 * fVar38;
            fVar43 = fVar33 * fVar38 - fVar44 * fVar46;
            fVar67 = fVar36 * fVar46 - fVar33 * fVar48;
            fVar66 = fVar64 * 0.0 * fVar54 - fVar64 * 0.0 * fVar54;
            auVar31._0_4_ = fVar65 + fVar65;
            auVar31._4_4_ = fVar43 + fVar43;
            auVar31._8_4_ = fVar67 + fVar67;
            auVar31._12_4_ = fVar66 + fVar66;
            local_140 = (auVar31._8_4_ * fVar48 - auVar31._4_4_ * fVar38) +
                        fVar54 * auVar31._0_4_ + fVar33 + fVar55;
            local_13c = (auVar31._0_4_ * fVar38 - auVar31._8_4_ * fVar46) +
                        fVar54 * auVar31._4_4_ + fVar36 + fVar56;
            local_138 = (auVar31._4_4_ * fVar46 - auVar31._0_4_ * fVar48) +
                        fVar54 * auVar31._8_4_ + fVar44 + fVar57;
            uVar12 = FUN_14222d370(lVar21,param_2,local_1a4,&local_130,&local_140,param_3 + 6,
                                   local_120,(longlong)param_3 + 100,param_5,0);
            local_1a8 = local_1a8 | (byte)uVar12;
            if ((iVar11 < (int)param_2[1]) && (*(char *)(param_5 + 0x24) == '\0')) {
              auVar26._4_4_ =
                   -(uint)(fRam0000000146af59f4 < (float)((uint)fVar62 & uRam0000000146af5a04));
              auVar26._0_4_ = -(uint)(_DAT_146af59f0 < (float)((uint)fVar61 & _DAT_146af5a00));
              auVar26._8_4_ =
                   -(uint)(fRam0000000146af59f8 < (float)((uint)fVar63 & uRam0000000146af5a08));
              auVar26._12_4_ =
                   -(uint)(fRam0000000146af59fc < (float)((uint)fVar64 & uRam0000000146af5a0c));
              iVar13 = movmskps(uVar12,auVar26);
              if (iVar13 == 0) {
                local_198 = _DAT_1468b5b70;
                uStack_190 = uRam00000001468b5b78;
                local_178 = _DAT_1468b5b90;
                fStack_174 = fRam00000001468b5b94;
                fStack_170 = fRam00000001468b5b98;
                fStack_16c = fRam00000001468b5b9c;
                _local_188 = _DAT_1468b5b80;
              }
              else {
                fVar46 = fVar46 * _DAT_146af59e0;
                fVar48 = fVar48 * fRam0000000146af59e4;
                fVar38 = fVar38 * fRam0000000146af59e8;
                fVar54 = fVar54 * fRam0000000146af59ec;
                auVar4._4_4_ = fVar62;
                auVar4._0_4_ = fVar61;
                auVar4._8_4_ = fVar63;
                auVar4._12_4_ = fVar64;
                auVar30 = rcpps(auVar31,auVar4);
                local_198 = CONCAT44(fVar48,fVar46);
                uStack_190 = CONCAT44(fVar54,fVar38);
                fVar65 = auVar30._0_4_;
                fVar43 = auVar30._4_4_;
                fVar67 = auVar30._8_4_;
                fVar66 = auVar30._12_4_;
                fVar65 = (fVar65 + fVar65) - fVar65 * fVar65 * fVar61;
                fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar62;
                fVar67 = (fVar67 + fVar67) - fVar67 * fVar67 * fVar63;
                fVar66 = (fVar66 + fVar66) - fVar66 * fVar66 * fVar64;
                fVar65 = (fVar65 + fVar65) - fVar65 * fVar65 * fVar61;
                fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar62;
                fVar67 = (fVar67 + fVar67) - fVar67 * fVar67 * fVar63;
                fVar66 = (fVar66 + fVar66) - fVar66 * fVar66 * fVar64;
                local_178 = (float)((-(uint)((float)((uint)fVar61 & _DAT_146af5a00) <=
                                            _DAT_146af59f0) & (uint)fVar65 ^ (uint)fVar65) &
                                   _DAT_146af5760);
                fStack_174 = (float)((-(uint)((float)((uint)fVar62 & uRam0000000146af5a04) <=
                                             fRam0000000146af59f4) & (uint)fVar43 ^ (uint)fVar43) &
                                    uRam0000000146af5764);
                fStack_170 = (float)((-(uint)((float)((uint)fVar63 & uRam0000000146af5a08) <=
                                             fRam0000000146af59f8) & (uint)fVar67 ^ (uint)fVar67) &
                                    uRam0000000146af5768);
                fStack_16c = (float)((-(uint)((float)((uint)fVar64 & uRam0000000146af5a0c) <=
                                             fRam0000000146af59fc) & (uint)fVar66 ^ (uint)fVar66) &
                                    uRam0000000146af576c);
                fVar55 = fVar55 * local_178;
                fVar56 = fVar56 * fStack_174;
                fVar57 = fVar57 * fStack_170;
                fVar28 = fVar28 * fStack_16c;
                fVar65 = fVar57 * fVar48 - fVar56 * fVar38;
                fVar43 = fVar55 * fVar38 - fVar57 * fVar46;
                fVar67 = fVar56 * fVar46 - fVar55 * fVar48;
                fVar66 = fVar28 * fVar54 - fVar28 * fVar54;
                fVar65 = fVar65 + fVar65;
                fVar43 = fVar43 + fVar43;
                fVar67 = fVar67 + fVar67;
                fVar66 = fVar66 + fVar66;
                local_188._4_4_ =
                     (uint)(0.0 - ((fVar65 * fVar38 - fVar67 * fVar46) + fVar54 * fVar43 + fVar56))
                     & uRam0000000146af5764;
                local_188._0_4_ =
                     (uint)(0.0 - ((fVar67 * fVar48 - fVar43 * fVar38) + fVar54 * fVar65 + fVar55))
                     & _DAT_146af5760;
                uStack_180._0_4_ =
                     (float)((uint)(0.0 - ((fVar43 * fVar46 - fVar65 * fVar48) +
                                          fVar54 * fVar67 + fVar57)) & uRam0000000146af5768);
                uStack_180._4_4_ =
                     (uint)(0.0 - ((fVar66 * fVar54 - fVar66 * fVar54) + fVar54 * fVar66 + fVar28))
                     & uRam0000000146af576c;
              }
              if (iVar11 < (int)param_2[1]) {
                lVar20 = uVar17 * 0x90;
                do {
                  puVar18 = (uint *)(lVar20 + 8 + *param_2);
                  *puVar18 = *puVar18 | 1;
                  FUN_1424aec00(&local_198);
                  uVar19 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar19;
                  lVar20 = lVar20 + 0x90;
                } while ((int)uVar19 < (int)param_2[1]);
              }
            }
          }
        }
      }
LAB_1424a0315:
      plVar23 = plVar23 + 0xc;
      pfVar22 = pfVar22 + 0x18;
    } while (plVar23 != plVar14);
    uVar17 = (ulonglong)local_150;
  }
  lVar20 = local_118;
  if ((int)param_2[1] <= (int)uVar17) {
    return local_1a8;
  }
  do {
    lVar8 = param_3[4];
    lVar20 = lVar20 + 0x90;
    lVar21 = *param_2;
    uVar19 = (int)uVar17 + 1;
    uVar17 = (ulonglong)uVar19;
    *(longlong *)(lVar21 + -0x4c + lVar20) = param_3[3];
    *(int *)(lVar21 + -0x44 + lVar20) = (int)lVar8;
    uVar12 = *(undefined4 *)((longlong)param_3 + 0x2c);
    lVar21 = *param_2;
    *(undefined8 *)(lVar21 + -0x40 + lVar20) = *(undefined8 *)((longlong)param_3 + 0x24);
    *(undefined4 *)(lVar21 + -0x38 + lVar20) = uVar12;
  } while ((int)uVar19 < (int)param_2[1]);
  if (*(char *)((longlong)param_3 + 0x75) != '\0') {
    FUN_1422feb30(*param_2,(longlong)(int)param_2[1],local_1a7[0],local_1a7);
    return local_1a8;
  }
  FUN_1423560b0(param_2);
  return local_1a8;
}



// FUNCTION 1424a0450 FUN_1424a0450 body=2453 status=ok
// SIG undefined FUN_1424a0450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1424a0450(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  char cVar17;
  longlong lVar18;
  float *pfVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  char local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [8];
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [12];
  float local_15c;
  
  cVar17 = '\0';
  local_228 = '\0';
  plVar15 = *(longlong **)(*param_3 + 8);
  plVar16 = plVar15 + (longlong)*(int *)(*param_3 + 0x10) * 0xc;
  if (plVar15 == plVar16) {
    cVar17 = '\0';
  }
  else {
    pfVar19 = (float *)(plVar15 + 8);
    local_1a8 = param_4;
    do {
      lVar12 = *plVar15;
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x94) & 2) == 0)) {
        uVar2 = *(uint *)(lVar12 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar13 = uVar2 & 0xffff;
          uVar9 = uVar2;
          if ((int)uVar2 < 0) {
            uVar9 = uVar2 + 0xffff;
            uVar13 = uVar13 - 0x10000;
          }
          lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                   (longlong)(int)uVar13 * 0x18;
        }
        else {
          lVar12 = 0;
        }
        if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) == 0) {
          puVar14 = *(uint **)(param_5 + 0x68);
          if (*(uint **)(param_5 + 0x68) == (uint *)0x0) {
            puVar14 = (uint *)(param_5 + 0x58);
          }
          puVar1 = puVar14 + *(int *)(param_5 + 0x70);
          for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
            if (*puVar14 == uVar2) goto LAB_1424a0d33;
          }
          cVar8 = FMath::LineExtentBoxIntersection
                            (pfVar19 + -0xe,param_3 + 8,(longlong)param_3 + 0x4c,param_3 + 0xb,
                             local_178,local_188,local_1b0);
          fVar44 = fRam0000000146af5848;
          fVar42 = fRam0000000146af5844;
          fVar62 = _DAT_146af5840;
          fVar63 = fRam0000000146af5758;
          fVar39 = fRam0000000146af5754;
          fVar61 = _DAT_146af5750;
          if (cVar8 != '\0') {
            lVar18 = *plVar15;
            lVar12 = *(longlong *)(lVar18 + 0x168);
            if (lVar12 == 0) {
              fVar51 = 0.0;
              fVar52 = 0.0;
              fVar53 = 0.0;
              fVar24 = 0.0;
              fVar32 = 0.0;
              fVar40 = 0.0;
              fVar29 = 0.0;
              fVar23 = (float)((uint)_DAT_146af5750 & _DAT_146af5760);
              fVar28 = (float)((uint)fRam0000000146af5754 & uRam0000000146af5764);
              fVar30 = (float)((uint)fRam0000000146af5758 & uRam0000000146af5768);
              fVar33 = (float)((uint)fRam0000000146af575c & uRam0000000146af576c);
              fVar31 = fRam0000000146af575c;
            }
            else {
              fVar32 = *(float *)(lVar12 + 0x210);
              fVar40 = *(float *)(lVar12 + 0x214);
              fVar29 = *(float *)(lVar12 + 0x218);
              fVar51 = *(float *)(lVar12 + 0x220);
              fVar52 = *(float *)(lVar12 + 0x224);
              fVar53 = *(float *)(lVar12 + 0x228);
              fVar24 = *(float *)(lVar12 + 0x22c);
              fVar23 = *(float *)(lVar12 + 0x230);
              fVar28 = *(float *)(lVar12 + 0x234);
              fVar30 = *(float *)(lVar12 + 0x238);
              fVar33 = *(float *)(lVar12 + 0x23c);
              fVar31 = *(float *)(lVar12 + 0x21c);
            }
            auVar26 = *(undefined1 (*) [16])(pfVar19 + 4);
            fVar34 = auVar26._0_4_;
            fVar50 = auVar26._4_4_;
            fVar3 = auVar26._8_4_;
            auVar20._4_4_ = fVar28;
            auVar20._0_4_ = fVar23;
            auVar20._8_4_ = fVar30;
            auVar20._12_4_ = fVar33;
            auVar20 = minps(auVar26,auVar20);
            auVar21._4_4_ = -(uint)(auVar20._4_4_ < fRam0000000146af5844);
            auVar21._0_4_ = -(uint)(auVar20._0_4_ < _DAT_146af5840);
            auVar21._8_4_ = -(uint)(auVar20._8_4_ < fRam0000000146af5848);
            auVar21._12_4_ = -(uint)(auVar20._12_4_ < fRam0000000146af584c);
            iVar10 = movmskps((int)lVar12,auVar21);
            fVar57 = fVar34 * fVar23;
            fVar58 = fVar50 * fVar28;
            fVar59 = fVar3 * fVar30;
            fVar60 = auVar26._12_4_ * fVar33;
            if (iVar10 == 0) {
              fVar61 = pfVar19[-4];
              fVar39 = pfVar19[-3];
              fVar63 = pfVar19[-2];
              fVar62 = pfVar19[-1];
              fVar23 = fVar23 * *pfVar19;
              fVar28 = fVar28 * pfVar19[1];
              fVar30 = fVar30 * pfVar19[2];
              fVar33 = fVar33 * pfVar19[3];
              fVar42 = fVar62 * fVar32 * _DAT_146af5800 + fVar31 * fVar61 +
                       fVar63 * fVar40 * _DAT_146af57f0 + fVar39 * fVar29 * _DAT_146af57e0;
              fVar44 = fVar63 * fVar32 * fRam0000000146af5804 + fVar31 * fVar39 +
                       fVar62 * fVar40 * fRam0000000146af57f4 +
                       fVar61 * fVar29 * fRam0000000146af57e4;
              fVar34 = fVar39 * fVar32 * fRam0000000146af5808 + fVar31 * fVar63 +
                       fVar61 * fVar40 * fRam0000000146af57f8 +
                       fVar62 * fVar29 * fRam0000000146af57e8;
              fVar50 = fVar61 * fVar32 * fRam0000000146af580c + fVar31 * fVar62 +
                       fVar39 * fVar40 * fRam0000000146af57fc +
                       fVar63 * fVar29 * fRam0000000146af57ec;
              fVar61 = fVar30 * fVar40 - fVar28 * fVar29;
              fVar39 = fVar23 * fVar29 - fVar30 * fVar32;
              fVar63 = fVar28 * fVar32 - fVar23 * fVar40;
              fVar62 = fVar33 * fVar31 - fVar33 * fVar31;
              fVar61 = fVar61 + fVar61;
              fVar39 = fVar39 + fVar39;
              fVar63 = fVar63 + fVar63;
              fVar62 = fVar62 + fVar62;
              fVar51 = (fVar63 * fVar40 - fVar39 * fVar29) + fVar61 * fVar31 + fVar23 + fVar51;
              fVar52 = (fVar61 * fVar29 - fVar63 * fVar32) + fVar39 * fVar31 + fVar28 + fVar52;
              fVar53 = (fVar39 * fVar32 - fVar61 * fVar40) + fVar63 * fVar31 + fVar30 + fVar53;
              fVar24 = (fVar62 * fVar31 - fVar62 * fVar31) + fVar62 * fVar31 + fVar33 + fVar24;
            }
            else {
              fVar35 = fVar40 + fVar40;
              fVar37 = fVar29 + fVar29;
              fVar38 = fVar32 * (fVar32 + fVar32);
              fVar36 = (fVar32 + fVar32) * fVar31;
              fVar24 = pfVar19[-4];
              fVar5 = pfVar19[-3];
              fVar6 = pfVar19[-2];
              fVar46 = pfVar19[-1];
              fVar54 = (fVar37 * fVar31 + fVar35 * fVar32) * fVar23;
              fVar55 = (fVar36 + fVar37 * fVar40) * fVar28;
              fVar56 = (fVar35 * fVar31 + fVar37 * fVar32) * fVar30;
              fVar41 = fVar28 * (fVar35 * fVar32 - fVar37 * fVar31);
              fVar43 = fVar30 * (fVar37 * fVar40 - fVar36);
              fVar45 = fVar23 * (fVar37 * fVar32 - fVar35 * fVar31);
              fVar23 = (float)((uint)((_DAT_146af5750 - (fVar29 * fVar37 + fVar40 * fVar35)) *
                                     fVar23) & _DAT_146af5760);
              fVar28 = (float)((uint)((fRam0000000146af5754 - (fVar29 * fVar37 + fVar38)) * fVar28)
                              & uRam0000000146af5764);
              fVar31 = (float)((uint)((fRam0000000146af5758 - (fVar40 * fVar35 + fVar38)) * fVar30)
                              & uRam0000000146af5768);
              fVar35 = (float)((uint)((fRam0000000146af575c - (fVar38 + fVar38)) * fVar33) &
                              uRam0000000146af576c);
              fVar29 = fVar5 + fVar5;
              fVar32 = fVar6 + fVar6;
              fVar36 = fVar24 * (fVar24 + fVar24);
              fVar40 = fVar46 * (fVar24 + fVar24);
              fVar47 = (fVar46 * fVar32 + fVar24 * fVar29) * fVar34;
              fVar48 = (fVar40 + fVar5 * fVar32) * fVar50;
              fVar49 = (fVar46 * fVar29 + fVar24 * fVar32) * fVar3;
              fVar37 = fVar50 * (fVar24 * fVar29 - fVar46 * fVar32);
              fVar38 = fVar3 * (fVar5 * fVar32 - fVar40);
              fVar46 = fVar34 * (fVar24 * fVar32 - fVar46 * fVar29);
              fVar24 = (float)((uint)((_DAT_146af5750 - (fVar6 * fVar32 + fVar5 * fVar29)) * fVar34)
                              & _DAT_146af5760);
              fVar30 = (float)((uint)((fRam0000000146af5754 - (fVar6 * fVar32 + fVar36)) * fVar50) &
                              uRam0000000146af5764);
              fVar33 = (float)((uint)((fRam0000000146af5758 - (fVar5 * fVar29 + fVar36)) * fVar3) &
                              uRam0000000146af5768);
              fVar34 = (float)((uint)((fRam0000000146af575c - (fVar36 + fVar36)) * auVar26._12_4_) &
                              uRam0000000146af576c);
              fVar29 = *pfVar19;
              fVar32 = pfVar19[1];
              fVar40 = pfVar19[2];
              local_218._0_4_ =
                   fVar47 * fVar41 + fVar24 * fVar23 + fVar46 * fVar56 + fVar34 * fVar51;
              local_218._4_4_ =
                   fVar47 * fVar28 + fVar24 * fVar54 + fVar46 * fVar43 + fVar34 * fVar52;
              uStack_210._0_4_ =
                   fVar47 * fVar55 + fVar24 * fVar45 + fVar46 * fVar31 + fVar34 * fVar53;
              uStack_210._4_4_ =
                   fVar47 * fVar35 + fVar24 * fVar35 + fVar46 * fVar35 +
                   fVar34 * fRam0000000146af575c;
              local_208._4_4_ =
                   fVar30 * fVar28 + fVar37 * fVar54 + fVar48 * fVar43 + fVar34 * fVar52;
              local_208._0_4_ =
                   fVar30 * fVar41 + fVar37 * fVar23 + fVar48 * fVar56 + fVar34 * fVar51;
              uStack_200._0_4_ =
                   fVar30 * fVar55 + fVar37 * fVar45 + fVar48 * fVar31 + fVar34 * fVar53;
              uStack_200._4_4_ =
                   fVar30 * fVar35 + fVar37 * fVar35 + fVar48 * fVar35 +
                   fVar34 * fRam0000000146af575c;
              local_1f8._0_4_ =
                   fVar38 * fVar41 + fVar49 * fVar23 + fVar33 * fVar56 + fVar34 * fVar51;
              local_1f8._4_4_ =
                   fVar38 * fVar28 + fVar49 * fVar54 + fVar33 * fVar43 + fVar34 * fVar52;
              uStack_1f0._0_4_ =
                   fVar38 * fVar55 + fVar49 * fVar45 + fVar33 * fVar31 + fVar34 * fVar53;
              uStack_1f0._4_4_ =
                   fVar38 * fVar35 + fVar49 * fVar35 + fVar33 * fVar35 +
                   fVar34 * fRam0000000146af575c;
              local_1e8 = fVar32 * fVar41 + fVar29 * fVar23 + fVar40 * fVar56 +
                          fRam0000000146af575c * fVar51;
              fStack_1e4 = fVar32 * fVar28 + fVar29 * fVar54 + fVar40 * fVar43 +
                           fRam0000000146af575c * fVar52;
              fStack_1e0 = fVar32 * fVar55 + fVar29 * fVar45 + fVar40 * fVar31 +
                           fRam0000000146af575c * fVar53;
              fStack_1dc = fVar32 * fVar35 + fVar29 * fVar35 + fVar40 * fVar35 +
                           fRam0000000146af575c * fRam0000000146af575c;
              FMatrix::RemoveScaling(&local_218);
              auVar26 = _local_208;
              fVar61 = (float)(-(uint)(fVar62 <= fVar57) & (_DAT_146af5830 ^ (uint)fVar61) ^
                              _DAT_146af5830);
              fVar62 = (float)(-(uint)(fVar42 <= fVar58) & (uRam0000000146af5834 ^ (uint)fVar39) ^
                              uRam0000000146af5834);
              fVar63 = (float)(-(uint)(fVar44 <= fVar59) & (uRam0000000146af5838 ^ (uint)fVar63) ^
                              uRam0000000146af5838);
              local_218 = CONCAT44(local_218._4_4_ * fVar61,(float)local_218 * fVar61);
              uStack_210 = CONCAT44(uStack_210._4_4_,(float)uStack_210 * fVar61);
              fVar61 = (float)uStack_200 * fVar62;
              fVar39 = (float)local_208._0_4_ * fVar62;
              auVar7._4_8_ = uStack_200;
              auVar7._0_4_ = (float)local_208._4_4_ * fVar62;
              local_208 = (undefined1  [8])(auVar7._0_8_ << 0x20);
              uStack_200._4_4_ = auVar26._12_4_;
              uStack_200._0_4_ = fVar61;
              uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0 * fVar63);
              local_208._0_4_ = fVar39;
              local_1f8 = CONCAT44(local_1f8._4_4_ * fVar63,(float)local_1f8 * fVar63);
              FQuat::FQuat(&local_198);
              lVar18 = *plVar15;
              local_1d8 = 0x322bcc77;
              auVar25._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
              auVar25._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
              auVar25._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
              auVar25._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
              fVar42 = auVar25._4_4_ + auVar25._0_4_;
              fVar44 = auVar25._8_4_ + auVar25._4_4_;
              fVar29 = auVar25._12_4_ + auVar25._8_4_;
              fVar32 = auVar25._0_4_ + auVar25._12_4_;
              auVar26._4_4_ = fVar44;
              auVar26._0_4_ = fVar42;
              auVar26._8_4_ = fVar29;
              auVar26._12_4_ = fVar32;
              auVar26 = rsqrtps(auVar25,auVar26);
              fVar61 = auVar26._0_4_;
              fVar39 = auVar26._4_4_;
              fVar63 = auVar26._8_4_;
              fVar62 = auVar26._12_4_;
              fVar61 = (_DAT_146af5820 - fVar61 * fVar61 * fVar42 * _DAT_146af5820) * fVar61 +
                       fVar61;
              fVar39 = (fRam0000000146af5824 - fVar39 * fVar39 * fVar44 * fRam0000000146af5824) *
                       fVar39 + fVar39;
              fVar63 = (fRam0000000146af5828 - fVar63 * fVar63 * fVar29 * fRam0000000146af5828) *
                       fVar63 + fVar63;
              fVar62 = (fRam0000000146af582c - fVar62 * fVar62 * fVar32 * fRam0000000146af582c) *
                       fVar62 + fVar62;
              fVar24 = 0.0;
              fVar42 = (float)(((uint)(((_DAT_146af5820 - fVar61 * fVar61 * fVar42 * _DAT_146af5820)
                                        * fVar61 + fVar61) * local_198) ^ _DAT_146af5810) &
                               -(uint)(1e-08 <= fVar42) ^ _DAT_146af5810);
              fVar44 = (float)(((uint)(((fRam0000000146af5824 -
                                        fVar39 * fVar39 * fVar44 * fRam0000000146af5824) * fVar39 +
                                       fVar39) * fStack_194) ^ uRam0000000146af5814) &
                               -(uint)(1e-08 <= fVar44) ^ uRam0000000146af5814);
              fVar34 = (float)(((uint)(((fRam0000000146af5828 -
                                        fVar63 * fVar63 * fVar29 * fRam0000000146af5828) * fVar63 +
                                       fVar63) * fStack_190) ^ uRam0000000146af5818) &
                               -(uint)(1e-08 <= fVar29) ^ uRam0000000146af5818);
              fVar50 = (float)(((uint)(((fRam0000000146af582c -
                                        fVar62 * fVar62 * fVar32 * fRam0000000146af582c) * fVar62 +
                                       fVar62) * fStack_18c) ^ uRam0000000146af581c) &
                               -(uint)(1e-08 <= fVar32) ^ uRam0000000146af581c);
              fVar51 = local_1e8;
              fVar52 = fStack_1e4;
              fVar53 = fStack_1e0;
              local_198 = fVar42;
              fStack_194 = fVar44;
              fStack_190 = fVar34;
              fStack_18c = fVar50;
            }
            fVar62 = *(float *)(param_3 + 3) * fVar57;
            fVar29 = *(float *)((longlong)param_3 + 0x1c) * fVar58;
            fVar32 = *(float *)(param_3 + 4) * fVar59;
            fVar61 = fVar32 * fVar44 - fVar29 * fVar34;
            fVar39 = fVar62 * fVar34 - fVar32 * fVar42;
            fVar63 = fVar29 * fVar42 - fVar62 * fVar44;
            fVar61 = fVar61 + fVar61;
            fVar39 = fVar39 + fVar39;
            fVar63 = fVar63 + fVar63;
            local_1c0 = (fVar63 * fVar44 - fVar39 * fVar34) + fVar61 * fVar50 + fVar62 + fVar51;
            local_1bc = (fVar61 * fVar34 - fVar63 * fVar42) + fVar39 * fVar50 + fVar29 + fVar52;
            local_1b8 = (fVar39 * fVar42 - fVar61 * fVar44) + fVar63 * fVar50 + fVar32 + fVar53;
            fVar62 = *(float *)((longlong)param_3 + 0x24) * fVar57;
            fVar29 = *(float *)(param_3 + 5) * fVar58;
            fVar32 = *(float *)((longlong)param_3 + 0x2c) * fVar59;
            fVar61 = fVar32 * fVar44 - fVar29 * fVar34;
            fVar39 = fVar62 * fVar34 - fVar32 * fVar42;
            fVar63 = fVar29 * fVar42 - fVar62 * fVar44;
            fVar61 = fVar61 + fVar61;
            fVar39 = fVar39 + fVar39;
            fVar63 = fVar63 + fVar63;
            local_1d0 = (fVar63 * fVar44 - fVar39 * fVar34) + fVar61 * fVar50 + fVar62 + fVar51;
            local_1cc = (fVar61 * fVar34 - fVar63 * fVar42) + fVar39 * fVar50 + fVar29 + fVar52;
            auVar27._8_4_ = (fVar39 * fVar42 - fVar61 * fVar44) + fVar63 * fVar50 + fVar32 + fVar53;
            auVar27._4_4_ = auVar27._8_4_;
            auVar27._0_4_ = auVar27._8_4_;
            auVar27._12_4_ = auVar27._8_4_;
            local_1c8 = auVar27._8_4_;
            _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
            local_15c = 1.0;
            cVar8 = FUN_14222d5a0(lVar18,local_168,&local_1c0,&local_1d0,param_3 + 6,local_1a8,
                                  (longlong)param_3 + 100,param_5,
                                  *(undefined1 *)((longlong)param_3 + 0x74));
            cVar17 = local_228;
            if ((cVar8 != '\0') && (local_15c < *(float *)(param_2 + 0xc))) {
              cVar17 = '\x01';
              local_228 = '\x01';
              uVar11 = FUN_140729f20(param_2);
              fVar62 = fRam0000000146af59fc;
              fVar63 = fRam0000000146af59f8;
              fVar39 = fRam0000000146af59f4;
              fVar61 = _DAT_146af59f0;
              if (*(char *)(param_5 + 0x24) == '\0') {
                fVar29 = (float)((uint)fVar57 & _DAT_146af5a00);
                fVar32 = (float)((uint)fVar58 & uRam0000000146af5a04);
                fVar40 = (float)((uint)fVar59 & uRam0000000146af5a08);
                fVar23 = (float)((uint)fVar60 & uRam0000000146af5a0c);
                *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
                auVar22._4_4_ = -(uint)(fVar39 < fVar32);
                auVar22._0_4_ = -(uint)(fVar61 < fVar29);
                auVar22._8_4_ = -(uint)(fVar63 < fVar40);
                auVar22._12_4_ = -(uint)(fVar62 < fVar23);
                iVar10 = movmskps(uVar11,auVar22);
                if (iVar10 == 0) {
                  local_218 = _DAT_1468b5b70;
                  uStack_210 = uRam00000001468b5b78;
                  local_1f8 = _DAT_1468b5b90;
                  uStack_1f0 = uRam00000001468b5b98;
                  _local_208 = _DAT_1468b5b80;
                }
                else {
                  fVar42 = fVar42 * _DAT_146af59e0;
                  fVar44 = fVar44 * fRam0000000146af59e4;
                  fVar34 = fVar34 * fRam0000000146af59e8;
                  fVar50 = fVar50 * fRam0000000146af59ec;
                  auVar4._4_4_ = fVar58;
                  auVar4._0_4_ = fVar57;
                  auVar4._8_4_ = fVar59;
                  auVar4._12_4_ = fVar60;
                  auVar26 = rcpps(auVar27,auVar4);
                  local_218 = CONCAT44(fVar44,fVar42);
                  uStack_210 = CONCAT44(fVar50,fVar34);
                  fVar28 = auVar26._0_4_;
                  fVar30 = auVar26._4_4_;
                  fVar33 = auVar26._8_4_;
                  fVar31 = auVar26._12_4_;
                  fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar57;
                  fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar58;
                  fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar59;
                  fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar60;
                  fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar57;
                  fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar58;
                  fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar59;
                  fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar60;
                  fVar61 = (float)((-(uint)(fVar29 <= fVar61) & (uint)fVar28 ^ (uint)fVar28) &
                                  _DAT_146af5760);
                  fVar39 = (float)((-(uint)(fVar32 <= fVar39) & (uint)fVar30 ^ (uint)fVar30) &
                                  uRam0000000146af5764);
                  fVar63 = (float)((-(uint)(fVar40 <= fVar63) & (uint)fVar33 ^ (uint)fVar33) &
                                  uRam0000000146af5768);
                  fVar62 = (float)((-(uint)(fVar23 <= fVar62) & (uint)fVar31 ^ (uint)fVar31) &
                                  uRam0000000146af576c);
                  fVar51 = fVar51 * fVar61;
                  fVar52 = fVar52 * fVar39;
                  fVar53 = fVar53 * fVar63;
                  fVar24 = fVar24 * fVar62;
                  local_1f8 = CONCAT44(fVar39,fVar61);
                  uStack_1f0 = CONCAT44(fVar62,fVar63);
                  fVar61 = fVar53 * fVar44 - fVar52 * fVar34;
                  fVar39 = fVar51 * fVar34 - fVar53 * fVar42;
                  fVar63 = fVar52 * fVar42 - fVar51 * fVar44;
                  fVar62 = fVar24 * fVar50 - fVar24 * fVar50;
                  fVar61 = fVar61 + fVar61;
                  fVar39 = fVar39 + fVar39;
                  fVar63 = fVar63 + fVar63;
                  fVar62 = fVar62 + fVar62;
                  local_208._4_4_ =
                       (uint)(0.0 - ((fVar61 * fVar34 - fVar63 * fVar42) + fVar50 * fVar39 + fVar52)
                             ) & uRam0000000146af5764;
                  local_208._0_4_ =
                       (uint)(0.0 - ((fVar63 * fVar44 - fVar39 * fVar34) + fVar50 * fVar61 + fVar51)
                             ) & _DAT_146af5760;
                  uStack_200._0_4_ =
                       (float)((uint)(0.0 - ((fVar39 * fVar42 - fVar61 * fVar44) +
                                            fVar50 * fVar63 + fVar53)) & uRam0000000146af5768);
                  uStack_200._4_4_ =
                       (uint)(0.0 - ((fVar62 * fVar50 - fVar62 * fVar50) + fVar50 * fVar62 + fVar24)
                             ) & uRam0000000146af576c;
                }
                FUN_1424aec00(&local_218);
              }
              if (*(char *)((longlong)param_3 + 0x74) != '\0') goto LAB_1424a0d49;
            }
          }
        }
      }
LAB_1424a0d33:
      plVar15 = plVar15 + 0xc;
      pfVar19 = pfVar19 + 0x18;
    } while (plVar15 != plVar16);
    if (cVar17 != '\0') {
LAB_1424a0d49:
      lVar12 = param_3[4];
      *(longlong *)(param_2 + 0x44) = param_3[3];
      *(int *)(param_2 + 0x4c) = (int)lVar12;
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)((longlong)param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x58) = uVar11;
    }
  }
  return cVar17;
}



// FUNCTION 1424a0df0 FUN_1424a0df0 body=717 status=ok
// SIG undefined FUN_1424a0df0(void)

ulonglong FUN_1424a0df0(longlong *param_1,float param_2,undefined8 param_3,float *param_4,
                       float *param_5,undefined8 *param_6,undefined8 param_7,undefined1 param_8,
                       longlong param_9,undefined8 param_10,int *param_11)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float *local_d8;
  float local_d0;
  float local_cc;
  float *local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined1 local_80 [12];
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined1 local_63;
  
  puVar3 = (undefined8 *)register0x00000020;
  if (0.0001 <= SQRT((param_5[1] - param_4[1]) * (param_5[1] - param_4[1]) +
                     (*param_5 - *param_4) * (*param_5 - *param_4) +
                     (param_5[2] - param_4[2]) * (param_5[2] - param_4[2]))) {
    pfVar6 = (float *)0x0;
    fVar8 = 0.0;
    if (((char)param_1[6] != '\0') &&
       (fVar7 = param_2 - *(float *)((longlong)param_1 + 0x3c), 0.0 < fVar7)) {
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x148))();
      fVar7 = *(float *)(puVar3 + 0xf3) - fVar7;
      local_d8 = pfVar6;
      if (0 < (int)param_1[0xe]) {
        pfVar2 = pfVar6;
        for (puVar3 = (undefined8 *)param_1[0xd]; pfVar6 = (float *)0x0, puVar3 != (undefined8 *)0x0
            ; puVar3 = (undefined8 *)puVar3[2]) {
          pfVar1 = (float *)*puVar3;
          if (*pfVar1 <= fVar7) {
            local_d8 = pfVar1;
            pfVar6 = pfVar2;
            if ((pfVar2 != (float *)0x0) && (*pfVar2 - fVar7 <= fVar7 - *pfVar1)) {
              local_d8 = pfVar2;
              pfVar6 = pfVar1;
            }
            if (local_d8 != (float *)0x0) goto LAB_1424a0f0e;
            break;
          }
          pfVar2 = pfVar1;
        }
        local_d8 = pfVar2;
        if (pfVar2 != (float *)0x0) {
LAB_1424a0f0e:
          fVar8 = *local_d8 - fVar7;
        }
      }
      if (local_d8 != (float *)0x0) {
        _guard_xfg_dispatch_icall_nop(&local_d8,0,0x80);
        local_f8 = *(undefined4 *)param_6;
        uStack_f4 = *(undefined4 *)((longlong)param_6 + 4);
        uStack_f0 = *(undefined4 *)(param_6 + 1);
        uStack_ec = *(undefined4 *)((longlong)param_6 + 0xc);
        FUN_142498770(param_7,&local_f8,local_80,&local_e8);
        local_b8 = param_4[2];
        local_c0 = *(undefined8 *)param_4;
        local_b4 = *(undefined8 *)param_5;
        local_a8 = *param_6;
        uStack_a0 = param_6[1];
        local_90 = local_e0 + param_4[2];
        local_e0 = local_e0 + param_5[2];
        local_ac = param_5[2];
        local_63 = *param_11 != 0;
        local_98 = CONCAT44(local_e4 + param_4[1],local_e8 + *param_4);
        local_8c = CONCAT44(local_e4 + param_5[1],local_e8 + *param_5);
        local_64 = 0;
        local_d0 = param_2;
        local_cc = fVar8;
        local_c8 = pfVar6;
        local_84 = local_e0;
        puVar4 = (undefined4 *)
                 FUN_142309ff0(&local_e8,param_8,*(undefined1 *)(param_9 + 0x11),param_10,param_9,
                               param_11,1);
        local_f8 = *puVar4;
        uStack_f4 = puVar4[1];
        uStack_f0 = puVar4[2];
        uStack_ec = puVar4[3];
        local_74 = local_f8;
        uStack_70 = uStack_f4;
        uStack_6c = uStack_f0;
        uStack_68 = uStack_ec;
        uVar5 = FUN_14249f9a0(param_1,param_3,&local_d8,param_7,param_9);
        return uVar5;
      }
    }
  }
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



// FUNCTION 1424a10c0 FUN_1424a10c0 body=849 status=ok
// SIG undefined FUN_1424a10c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1424a10c0(longlong *param_1,float param_2,undefined8 param_3,float *param_4,
                       float *param_5,undefined8 *param_6,undefined8 param_7,undefined1 param_8,
                       longlong param_9,undefined8 param_10,int *param_11,undefined1 param_12)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  int *local_1e0;
  undefined1 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  longlong local_1a8;
  int *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  float *local_188;
  float local_180;
  float local_17c;
  float *local_178;
  undefined8 local_170;
  float local_168;
  undefined8 local_164;
  float local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  float local_134;
  undefined1 local_130 [12];
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_108 [22];
  undefined1 local_f2;
  longlong local_c0;
  longlong local_a0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1a8 = param_9;
  local_198 = param_10;
  local_1a0 = param_11;
  if (0.0001 <= SQRT((param_5[1] - param_4[1]) * (param_5[1] - param_4[1]) +
                     (*param_5 - *param_4) * (*param_5 - *param_4) +
                     (param_5[2] - param_4[2]) * (param_5[2] - param_4[2]))) {
    pfVar5 = (float *)0x0;
    fVar7 = 0.0;
    if (((char)param_1[6] != '\0') &&
       (fVar6 = param_2 - *(float *)((longlong)param_1 + 0x3c), 0.0 < fVar6)) {
      local_190 = param_3;
      param_11 = (int *)(**(code **)(*param_1 + 0x148))();
      fVar6 = (float)param_11[0x1e6] - fVar6;
      local_188 = pfVar5;
      if (0 < (int)param_1[0xe]) {
        pfVar2 = pfVar5;
        for (param_11 = (int *)param_1[0xd]; pfVar5 = (float *)0x0, param_11 != (int *)0x0;
            param_11 = *(int **)(param_11 + 4)) {
          pfVar1 = *(float **)param_11;
          if (*pfVar1 <= fVar6) {
            local_188 = pfVar1;
            pfVar5 = pfVar2;
            if ((pfVar2 != (float *)0x0) && (*pfVar2 - fVar6 <= fVar6 - *pfVar1)) {
              local_188 = pfVar2;
              pfVar5 = pfVar1;
            }
            if (local_188 != (float *)0x0) goto LAB_1424a122e;
            break;
          }
          pfVar2 = pfVar1;
        }
        local_188 = pfVar2;
        if (pfVar2 != (float *)0x0) {
LAB_1424a122e:
          fVar7 = *local_188 - fVar6;
        }
      }
      if (local_188 != (float *)0x0) {
        FUN_140e3fc20(local_108);
        local_f2 = 1;
        _guard_xfg_dispatch_icall_nop(&local_188,0,0x80);
        local_1c8 = *(undefined4 *)param_6;
        uStack_1c4 = *(undefined4 *)((longlong)param_6 + 4);
        uStack_1c0 = *(undefined4 *)(param_6 + 1);
        uStack_1bc = *(undefined4 *)((longlong)param_6 + 0xc);
        FUN_142498770(param_7,&local_1c8,local_130,&local_1b8);
        local_168 = param_4[2];
        local_170 = *(undefined8 *)param_4;
        local_15c = param_5[2];
        local_164 = *(undefined8 *)param_5;
        local_158 = *param_6;
        uStack_150 = param_6[1];
        local_140 = local_1b0 + param_4[2];
        local_1b0 = local_1b0 + param_5[2];
        local_1d8 = 0;
        local_114 = param_12;
        local_1e0 = local_1a0;
        local_113 = *local_1a0 != 0;
        local_148 = CONCAT44(local_1b4 + param_4[1],local_1b8 + *param_4);
        local_13c = CONCAT44(local_1b4 + param_5[1],local_1b8 + *param_5);
        local_1e8 = local_108;
        local_180 = param_2;
        local_17c = fVar7;
        local_178 = pfVar5;
        local_134 = local_1b0;
        puVar4 = (undefined4 *)
                 FUN_142309ff0(&local_1b8,param_8,*(undefined1 *)(local_1a8 + 0x11),local_198);
        local_1c8 = *puVar4;
        uStack_1c4 = puVar4[1];
        uStack_1c0 = puVar4[2];
        uStack_1bc = puVar4[3];
        local_1e8 = local_108;
        local_124 = local_1c8;
        uStack_120 = uStack_1c4;
        uStack_11c = uStack_1c0;
        uStack_118 = uStack_1bc;
        bVar3 = FUN_1424a0450(param_1,local_190,&local_188,param_7);
        if (local_a0 != 0) {
          FMemory::Free();
        }
        if (local_c0 != 0) {
          FMemory::Free();
        }
        return (ulonglong)bVar3;
      }
    }
  }
  return (ulonglong)param_11 & 0xffffffffffffff00;
}



// FUNCTION 1424a1420 FUN_1424a1420 body=108 status=ok
// SIG undefined FUN_1424a1420(void)

undefined * FUN_1424a1420(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af5a70) {
    _Init_thread_header(&DAT_146af5a70);
    if (DAT_146af5a70 == -1) {
      atexit(FUN_143eae850);
      _Init_thread_footer(&DAT_146af5a70);
      return &DAT_146af5a40;
    }
  }
  return &DAT_146af5a40;
}



// FUNCTION 1424a1490 FUN_1424a1490 body=527 status=ok
// SIG undefined FUN_1424a1490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1424a1490(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af5a84) {
    _Init_thread_header(&DAT_146af5a84);
    if (DAT_146af5a84 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146532980);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146532980,4000);
      _DAT_146532a28 = 0xffffffff;
      _DAT_1465329a8 = 0;
      _DAT_1465329b0 = 0;
      _DAT_1465329f8 = 0;
      _DAT_146532a00 = 0;
      _DAT_146532a18 = 0;
      _DAT_146532a20 = 0;
      _DAT_146532a2c = 0;
      _DAT_146532a38 = 0;
      _DAT_146532a40 = 0;
      _DAT_146532a48 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146532a50);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146532a50,4000);
      _DAT_146532a78 = 0;
      _DAT_146532a80 = 0;
      _DAT_146532a88 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146532a90);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146532a90,4000);
      _DAT_146532ab8 = 0;
      _DAT_146532ac0 = 0;
      _DAT_146532ad8 = 0;
      _DAT_146532ae0 = 0;
      _DAT_146532ae8 = 0xffffffff;
      _DAT_146532aec = 0;
      _DAT_146532af8 = 0;
      _DAT_146532b00 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146532b08);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146532b08,4000);
      _DAT_146532b30 = 0;
      _DAT_1465329b8 = 0;
      _DAT_1465329c0 = 0;
      _DAT_1465329c8 = 0;
      _DAT_1465329d0 = 0;
      _DAT_1465329d8 = 0;
      _DAT_1465329e0 = 0;
      _DAT_1465329e8 = 0;
      _DAT_1465329f0 = 0;
      _DAT_146532b38 = 0;
      _DAT_146532b50 = 0;
      _DAT_146532b58 = 0;
      _DAT_146532b60 = 0xffffffff;
      _DAT_146532b64 = 0;
      _DAT_146532b70 = 0;
      _DAT_146532b78 = 0;
      _DAT_146532978 = TlsAlloc();
      atexit((_func_5014 *)&LAB_143eae910);
      _Init_thread_footer(&DAT_146af5a84);
      return &DAT_146532970;
    }
  }
  return &DAT_146532970;
}



// FUNCTION 1424a16a0 FUN_1424a16a0 body=366 status=ok
// SIG undefined FUN_1424a16a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1424a16a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af7610) && (_Init_thread_header(&DAT_146af7610), DAT_146af7610 == -1))
  {
    puVar2 = (undefined8 *)operator_new(0x10);
    puVar1 = (undefined8 *)0x0;
    _DAT_146af75c0 = puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      _DAT_146af75c0 = puVar2;
    }
    DAT_146af75c8 = _DAT_146af75c0;
    puVar2 = (undefined8 *)operator_new(0x10);
    _DAT_146af75d0 = puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      _DAT_146af75d0 = puVar2;
    }
    _DAT_146af7600 = 0;
    _DAT_146af7604 = 0;
    _DAT_146af7608 = 0;
    _DAT_146af760c = 0;
    DAT_146af75d8 = _DAT_146af75d0;
    DAT_146af75e8 = FUN_1415ab270(0);
    DAT_146af75f0 = FUN_1415ab270(0);
    DAT_146af75f8 = FUN_1415ab270(0);
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = &PTR_LAB_1450c5df8;
      puVar2[2] = &DAT_146af75c0;
      puVar1 = puVar2;
    }
    DAT_146af75e0 = FUN_1415d42a0(puVar1,L"ParticleAsyncDispatcher",0,0xffffffff,0xffffffffffffffff)
    ;
    FUN_1415b2540(DAT_146af75e0,6);
    atexit(FUN_143eae760);
    _Init_thread_footer(&DAT_146af7610);
    return &DAT_146af75c0;
  }
  return &DAT_146af75c0;
}



// FUNCTION 1424a1810 Get body=89 status=ok
// SIG undefined Get(void)

longlong UCollisionProfile::Get(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UGarbageCollectionSettings::StaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if (DAT_146af5b44 == '\0') {
    FUN_1424a4150(lVar2,0);
    DAT_146af5b44 = '\x01';
  }
  return lVar2;
}



// FUNCTION 1424a1870 FUN_1424a1870 body=635 status=ok
// SIG undefined FUN_1424a1870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1424a1870(longlong *param_1,float *param_2,float param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined1 auStack_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (((char)param_1[6] != '\0') &&
     (param_3 = param_3 - *(float *)((longlong)param_1 + 0x3c), 0.0 < param_3)) {
    lVar10 = (**(code **)(*param_1 + 0x148))();
    uVar7 = uRam0000000146af5a0c;
    uVar6 = uRam0000000146af5a08;
    uVar5 = uRam0000000146af5a04;
    uVar4 = _DAT_146af5a00;
    fVar27 = fRam0000000146af59fc;
    fVar26 = fRam0000000146af59f8;
    fVar25 = fRam0000000146af59f4;
    fVar24 = _DAT_146af59f0;
    uVar3 = uRam00000001468b5b78;
    param_3 = *(float *)(lVar10 + 0x798) - param_3;
    pfVar8 = (float *)0x0;
    if (0 < (int)param_1[0xe]) {
      for (puVar1 = (undefined8 *)param_1[0xd]; puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)puVar1[2]) {
        pfVar13 = (float *)*puVar1;
        if (*pfVar13 <= param_3) {
          if ((pfVar8 != (float *)0x0) && (*pfVar8 - param_3 <= param_3 - *pfVar13)) {
            pfVar13 = pfVar8;
          }
          if (pfVar13 != (float *)0x0) goto LAB_1424a1920;
          break;
        }
        pfVar8 = pfVar13;
      }
    }
    pfVar13 = pfVar8;
    if (pfVar13 != (float *)0x0) {
LAB_1424a1920:
      plVar11 = *(longlong **)(pfVar13 + 2);
      plVar12 = plVar11 + (longlong)(int)pfVar13[4] * 0xc;
      for (; plVar11 != plVar12; plVar11 = plVar11 + 0xc) {
        if (*plVar11 == param_4) {
          auVar17 = *(undefined1 (*) [16])(plVar11 + 10);
          fVar28 = auVar17._0_4_;
          fVar29 = auVar17._4_4_;
          fVar30 = auVar17._8_4_;
          fVar15 = auVar17._12_4_;
          auVar16._0_4_ = (float)((uint)fVar28 & _DAT_146af5a00);
          auVar16._4_4_ = (float)((uint)fVar29 & uRam0000000146af5a04);
          auVar16._8_4_ = (float)((uint)fVar30 & uRam0000000146af5a08);
          auVar16._12_4_ = (float)((uint)fVar15 & uRam0000000146af5a0c);
          auVar2._4_4_ = -(uint)(fRam0000000146af59f4 < auVar16._4_4_);
          auVar2._0_4_ = -(uint)(_DAT_146af59f0 < auVar16._0_4_);
          auVar2._8_4_ = -(uint)(fRam0000000146af59f8 < auVar16._8_4_);
          auVar2._12_4_ = -(uint)(fRam0000000146af59fc < auVar16._12_4_);
          iVar9 = movmskps(pfVar13[4],auVar2);
          if (iVar9 != 0) {
            fVar32 = *(float *)(plVar11 + 6) * _DAT_146af59e0;
            fVar33 = *(float *)((longlong)plVar11 + 0x34) * fRam0000000146af59e4;
            fVar34 = *(float *)(plVar11 + 7) * fRam0000000146af59e8;
            fVar35 = *(float *)((longlong)plVar11 + 0x3c) * fRam0000000146af59ec;
            fVar19 = *(float *)(plVar11 + 8);
            fVar21 = *(float *)((longlong)plVar11 + 0x44);
            fVar23 = *(float *)(plVar11 + 9);
            fVar31 = *(float *)((longlong)plVar11 + 0x4c);
            auVar17 = rcpps(auVar16,auVar17);
            fVar14 = auVar17._0_4_;
            fVar18 = auVar17._4_4_;
            fVar20 = auVar17._8_4_;
            fVar22 = auVar17._12_4_;
            *param_2 = fVar32;
            param_2[1] = fVar33;
            param_2[2] = fVar34;
            param_2[3] = fVar35;
            fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar28;
            fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar29;
            fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar30;
            fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar15;
            fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar28;
            fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar29;
            fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar30;
            fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar15;
            fVar24 = (float)((-(uint)((float)((uint)fVar28 & uVar4) <= fVar24) & (uint)fVar14 ^
                             (uint)fVar14) & _DAT_146af5760);
            fVar25 = (float)((-(uint)((float)((uint)fVar29 & uVar5) <= fVar25) & (uint)fVar18 ^
                             (uint)fVar18) & uRam0000000146af5764);
            fVar26 = (float)((-(uint)((float)((uint)fVar30 & uVar6) <= fVar26) & (uint)fVar20 ^
                             (uint)fVar20) & uRam0000000146af5768);
            fVar27 = (float)((-(uint)((float)((uint)fVar15 & uVar7) <= fVar27) & (uint)fVar22 ^
                             (uint)fVar22) & uRam0000000146af576c);
            fVar19 = fVar19 * fVar24;
            fVar21 = fVar21 * fVar25;
            fVar23 = fVar23 * fVar26;
            fVar31 = fVar31 * fVar27;
            param_2[8] = fVar24;
            param_2[9] = fVar25;
            param_2[10] = fVar26;
            param_2[0xb] = fVar27;
            fVar24 = fVar23 * fVar33 - fVar21 * fVar34;
            fVar25 = fVar19 * fVar34 - fVar23 * fVar32;
            fVar26 = fVar21 * fVar32 - fVar19 * fVar33;
            fVar27 = fVar31 * fVar35 - fVar31 * fVar35;
            fVar24 = fVar24 + fVar24;
            fVar25 = fVar25 + fVar25;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar28 = (float)((uint)(0.0 - ((fVar24 * fVar34 - fVar26 * fVar32) +
                                          fVar35 * fVar25 + fVar21)) & uRam0000000146af5764);
            fVar29 = (float)((uint)(0.0 - ((fVar25 * fVar32 - fVar24 * fVar33) +
                                          fVar35 * fVar26 + fVar23)) & uRam0000000146af5768);
            fVar27 = (float)((uint)(0.0 - ((fVar27 * fVar35 - fVar27 * fVar35) +
                                          fVar35 * fVar27 + fVar31)) & uRam0000000146af576c);
            param_2[4] = (float)((uint)(0.0 - ((fVar26 * fVar33 - fVar25 * fVar34) +
                                              fVar35 * fVar24 + fVar19)) & _DAT_146af5760);
            param_2[5] = fVar28;
            param_2[6] = fVar29;
            param_2[7] = fVar27;
            return param_2;
          }
          *(undefined8 *)param_2 = _DAT_1468b5b70;
          *(undefined8 *)(param_2 + 2) = uVar3;
          uVar3 = uRam00000001468b5b88;
          *(undefined8 *)(param_2 + 4) = _DAT_1468b5b80;
          *(undefined8 *)(param_2 + 6) = uVar3;
          uVar3 = uRam00000001468b5b98;
          *(undefined8 *)(param_2 + 8) = _DAT_1468b5b90;
          *(undefined8 *)(param_2 + 10) = uVar3;
          return param_2;
        }
      }
    }
  }
  lVar10 = *(longlong *)(param_4 + 0x168);
  if (lVar10 == 0) {
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar15 = (float)(_DAT_146af5750 & _DAT_146af5760);
    fVar19 = (float)(uRam0000000146af5754 & uRam0000000146af5764);
    fVar21 = (float)(uRam0000000146af5758 & uRam0000000146af5768);
    fVar23 = (float)((uint)fRam0000000146af575c & uRam0000000146af576c);
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar31 = fRam0000000146af575c;
  }
  else {
    fVar24 = *(float *)(lVar10 + 0x210);
    fVar25 = *(float *)(lVar10 + 0x214);
    fVar26 = *(float *)(lVar10 + 0x218);
    fVar27 = *(float *)(lVar10 + 0x220);
    fVar28 = *(float *)(lVar10 + 0x224);
    fVar29 = *(float *)(lVar10 + 0x228);
    fVar30 = *(float *)(lVar10 + 0x22c);
    fVar15 = *(float *)(lVar10 + 0x230);
    fVar19 = *(float *)(lVar10 + 0x234);
    fVar21 = *(float *)(lVar10 + 0x238);
    fVar23 = *(float *)(lVar10 + 0x23c);
    fVar31 = *(float *)(lVar10 + 0x21c);
  }
  *param_2 = fVar24;
  param_2[1] = fVar25;
  param_2[2] = fVar26;
  param_2[3] = fVar31;
  param_2[4] = fVar27;
  param_2[5] = fVar28;
  param_2[6] = fVar29;
  param_2[7] = fVar30;
  param_2[8] = fVar15;
  param_2[9] = fVar19;
  param_2[10] = fVar21;
  param_2[0xb] = fVar23;
  return param_2;
}



// FUNCTION 1424a1af0 FUN_1424a1af0 body=306 status=ok
// SIG undefined FUN_1424a1af0(void)

longlong * FUN_1424a1af0(longlong *param_1)

{
  short *_Dst;
  char cVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  FString::FString();
  _Dst = (short *)*param_1;
  iVar6 = (int)param_1[1];
  psVar4 = _Dst + iVar6;
  psVar2 = psVar4;
  do {
    if (psVar2 == _Dst) {
      iVar5 = -1;
      goto LAB_1424a1b29;
    }
    psVar2 = psVar2 + -1;
  } while (*psVar2 != 0x2f);
  iVar5 = (int)((longlong)psVar2 - (longlong)_Dst >> 1);
LAB_1424a1b29:
  if (iVar5 == -1) {
    do {
      if (psVar4 == _Dst) {
        iVar5 = -1;
        goto LAB_1424a1b58;
      }
      psVar4 = psVar4 + -1;
    } while (*psVar4 != 0x5c);
    iVar5 = (int)((longlong)psVar4 - (longlong)_Dst >> 1);
LAB_1424a1b58:
    if (iVar5 == -1) {
      return param_1;
    }
  }
  iVar5 = iVar5 + 1;
  if (iVar5 != 0) {
    if (iVar6 - iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,_Dst + iVar5,(longlong)(iVar6 - iVar5) * 2);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - iVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
  }
  cVar1 = FString::EndsWith(param_1,&DAT_1450bd2e4,1);
  if (cVar1 != '\0') {
    iVar5 = (int)param_1[1];
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    iVar3 = (iVar5 - (iVar6 + -2)) + -2;
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)(iVar6 + -2) * 2),
                 (void *)(*param_1 + (longlong)iVar6 * 2),(longlong)iVar3 * 2);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + -2;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
  }
  return param_1;
}



// FUNCTION 1424a1c30 FUN_1424a1c30 body=74 status=ok
// SIG undefined FUN_1424a1c30(void)

undefined8 FUN_1424a1c30(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"%ix%i [%s]",*(undefined4 *)(param_1 + 0xb8),
                      *(undefined4 *)(param_1 + 0xbc),
                      (&PTR_u_unknown_1464ca1b0)[(longlong)*(int *)(param_1 + 0xc0) * 5]);
  return param_2;
}



// FUNCTION 1424a1c80 FUN_1424a1c80 body=21 status=ok
// SIG undefined FUN_1424a1c80(void)

undefined4 * FUN_1424a1c80(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xf0);
  param_2[1] = *(undefined4 *)(param_1 + 0xf4);
  return param_2;
}



// FUNCTION 1424a1ca0 FUN_1424a1ca0 body=24 status=ok
// SIG undefined FUN_1424a1ca0(void)

longlong FUN_1424a1ca0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 400) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x10), lVar1 == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1424a1cd0 FUN_1424a1cd0 body=62 status=ok
// SIG undefined FUN_1424a1cd0(void)

undefined8 * FUN_1424a1cd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"GbxExternalTextureResource",0x36);
  return param_2;
}



// FUNCTION 1424a1d10 FUN_1424a1d10 body=12 status=ok
// SIG undefined FUN_1424a1d10(void)

longlong FUN_1424a1d10(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x38);
}



// FUNCTION 1424a1d30 FUN_1424a1d30 body=568 status=ok
// SIG undefined FUN_1424a1d30(void)

longlong FUN_1424a1d30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong local_res8;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  longlong *local_40;
  longlong lStack_38;
  undefined8 local_30;
  
  lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0xc);
  if (lVar4 != 0) {
    plVar5 = (longlong *)UField::GetOwnerStruct(lVar4);
    for (plVar1 = param_2; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar5) {
        return lVar4;
      }
    }
  }
  lVar4 = *param_1;
  if (((int)lVar4 != 0) || ((int)((ulonglong)lVar4 >> 0x20) != 0)) {
    if (param_2 == (longlong *)0x0) {
      lStack_50 = 0;
    }
    else {
      lStack_50 = param_2[7];
    }
    local_48 = 0xffffffff;
    uStack_44 = 0x101;
    uStack_42 = 0;
    local_58 = param_2;
    FUN_140472e10(&local_58);
    lVar6 = lStack_50;
    while (lStack_50 = lVar6, lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x18) == lVar4) goto LAB_1424a1f2c;
      lStack_50 = *(longlong *)(lVar6 + 0x28);
      FUN_140472e10(&local_58);
      lVar6 = lStack_50;
    }
  }
  if ((param_2 != (longlong *)0x0) &&
     (lVar4 = param_2[2], lVar6 = UUserDefinedStruct::GetPrivateStaticClass(), lVar4 == lVar6)) {
    local_res8 = *param_1;
    FName::ToString(&local_res8,&local_68);
    lStack_50 = param_2[7];
    local_48 = 0xffffffff;
    uStack_44 = 0x101;
    uStack_42 = 0;
    local_58 = param_2;
    FUN_140472e10(&local_58);
    lVar4 = lStack_50;
    local_30 = CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT24(uStack_44,local_48)));
    local_48 = 0xffffffff;
    local_40 = local_58;
    lStack_38 = lStack_50;
    uStack_44 = 0x101;
    local_58 = (longlong *)0x0;
    lStack_50 = 0;
    uStack_42 = 0;
    FUN_140472e10(&local_58);
    lVar2 = lStack_50;
    lVar6 = lStack_38;
    lStack_38 = lVar4;
    while (lStack_38 != lVar2) {
      lStack_38 = lVar6;
      puVar7 = (undefined8 *)
               (**(code **)(*param_2 + 0x2d8))(param_2,&local_58,*(undefined8 *)(lVar6 + 0x18));
      if (*(int *)(puVar7 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar7;
      }
      puVar8 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar8 = local_68;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (iVar3 == 0) {
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        goto LAB_1424a1f2c;
      }
      lStack_38 = *(longlong *)(lVar6 + 0x28);
      FUN_140472e10(&local_40);
      lVar6 = lStack_38;
    }
    lStack_38 = lVar6;
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  lVar6 = 0;
LAB_1424a1f2c:
  FWeakObjectPtr::operator=((longlong)param_1 + 0xc,lVar6);
  return lVar6;
}



// FUNCTION 1424a1f70 FUN_1424a1f70 body=187 status=ok
// SIG undefined FUN_1424a1f70(void)

longlong * FUN_1424a1f70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar2 = param_1 + 0x60;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      iVar4 = iVar1;
      do {
        if (*(longlong *)((longlong)iVar4 * 0x40 + lVar2) == param_2) {
          if (iVar4 == -1) {
            return (longlong *)0x0;
          }
          if (iVar1 == -1) goto LAB_1424a201c;
          while (plVar5 = (longlong *)((longlong)iVar1 * 0x40 + lVar2), *plVar5 != param_2) {
            iVar1 = (int)plVar5[7];
            if (iVar1 == -1) {
              return (longlong *)0x0;
            }
          }
          if (iVar1 == -1) {
LAB_1424a201c:
            plVar5 = (longlong *)0x0;
          }
          plVar3 = plVar5 + 1;
          if (plVar5 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
          }
          return plVar3;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + lVar2);
      } while (iVar4 != -1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1424a2030 FUN_1424a2030 body=64 status=ok
// SIG undefined FUN_1424a2030(void)

float * FUN_1424a2030(longlong param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  iVar2 = *(int *)(param_1 + 0xbc);
  param_2[2] = 1.0 / (float)iVar1;
  param_2[3] = 1.0 / (float)iVar2;
  *param_2 = (float)iVar1;
  param_2[1] = (float)iVar2;
  return param_2;
}



// FUNCTION 1424a2070 FUN_1424a2070 body=27 status=ok
// SIG undefined FUN_1424a2070(void)

longlong FUN_1424a2070(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 0x68) + 0x2b0))();
  return (longlong)fVar1;
}



// FUNCTION 1424a2090 FUN_1424a2090 body=79 status=ok
// SIG undefined FUN_1424a2090(void)

int * FUN_1424a2090(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 0x78) + 0x2b8))();
  fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x78) + 0x2b0))();
  param_2[1] = (int)fVar1;
  *param_2 = (int)fVar2;
  return param_2;
}



// FUNCTION 1424a20e0 FUN_1424a20e0 body=27 status=ok
// SIG undefined FUN_1424a20e0(void)

longlong FUN_1424a20e0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 0x68) + 0x2b8))();
  return (longlong)fVar1;
}



// FUNCTION 1424a2120 FUN_1424a2120 body=279 status=ok
// SIG undefined FUN_1424a2120(void)

ulonglong FUN_1424a2120(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  iVar1 = *param_2;
  if ((((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 8))) && (iVar2 = param_2[1], -1 < iVar2)) &&
     (iVar2 < *(int *)(param_1 + 0xc))) {
    fVar8 = ((float)iVar1 / (float)*(int *)(param_1 + 8)) * (float)*(int *)(param_1 + 0x38);
    iVar7 = (int)ROUND((fVar8 + fVar8) - 0.5) >> 1;
    fVar8 = ((float)iVar2 / (float)*(int *)(param_1 + 0xc)) * (float)*(int *)(param_1 + 0x3c);
    iVar6 = (int)ROUND((fVar8 + fVar8) - 0.5) >> 1;
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + 0x48) +
             (longlong)(*(int *)(param_1 + 0x38) * iVar6 + iVar7) * 8);
    iVar3 = *(int *)(lVar4 + 0x14);
    if ((iVar3 == 3) || (*(int *)(lVar4 + 0x58) == *(int *)(lVar4 + 0x30))) {
      return (ulonglong)
             *(byte *)((longlong)
                       (*(int *)(param_1 + 0x40) * (iVar2 - *(int *)(param_1 + 0x44) * iVar6) +
                       (iVar1 - *(int *)(param_1 + 0x40) * iVar7)) + *(longlong *)(lVar4 + 0x50));
    }
    in_RAX = (ulonglong)(iVar3 - 1U);
    if (1 < iVar3 - 1U) {
      uVar5 = 0x80;
      if (iVar3 == 4) {
        uVar5 = 0xff;
      }
      return uVar5;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1424a2240 FUN_1424a2240 body=36 status=ok
// SIG undefined FUN_1424a2240(void)

undefined8 FUN_1424a2240(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      return 1;
    }
    if (iVar1 != 0xd) {
      return 0;
    }
  }
  return 4;
}



// FUNCTION 1424a2270 FUN_1424a2270 body=184 status=ok
// SIG undefined FUN_1424a2270(void)

undefined8 * FUN_1424a2270(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined8 *lpTlsValue;
  
  lpTlsValue = TlsGetValue(*(DWORD *)(param_1 + 8));
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)operator_new(0x20);
    if (lpTlsValue != (undefined8 *)0x0) {
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      lpTlsValue[2] = 0;
      lpTlsValue[3] = 0;
    }
    TlsSetValue(*(DWORD *)(param_1 + 8),lpTlsValue);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = lpTlsValue;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return lpTlsValue;
}



// FUNCTION 1424a2330 GetNumVertices body=7 status=ok
// SIG undefined GetNumVertices(void)

undefined4 FStaticMeshLODResources::GetNumVertices(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// FUNCTION 1424a2340 FUN_1424a2340 body=636 status=ok
// SIG undefined FUN_1424a2340(void)

void FUN_1424a2340(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  iVar10 = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar9 = 0;
  if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x10)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x78);
  }
  iVar7 = *(int *)(param_1 + 0x10);
  iVar2 = iVar9 + iVar7;
  *(int *)(param_1 + 0x78) = iVar2;
  if (*(int *)(param_1 + 0x7c) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x70);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar9 + *(longlong *)(param_1 + 0x70)),0,(longlong)iVar7);
  FUN_1424a9c30(param_1);
  iVar9 = *(int *)(param_1 + 0x34);
  iVar7 = *(int *)(param_1 + 0x50);
  iVar2 = iVar7 + iVar9;
  *(int *)(param_1 + 0x50) = iVar2;
  if (*(int *)(param_1 + 0x54) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x48);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 8),0,(longlong)iVar9 << 3);
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar7 = 0;
      iVar9 = *(int *)(param_1 + 0x38);
      if (0 < iVar9) {
        do {
          plVar6 = (longlong *)0x0;
          iVar2 = *(int *)(param_1 + 0x44) * iVar10;
          iVar8 = *(int *)(param_1 + 0x40) * iVar7;
          iVar3 = iVar2 + *(int *)(param_1 + 0x44);
          iVar9 = iVar9 * iVar10 + iVar7;
          iVar11 = iVar8 + *(int *)(param_1 + 0x40);
          plVar4 = (longlong *)operator_new(0x78);
          if (plVar4 != (longlong *)0x0) {
            *plVar4 = param_1;
            *(int *)(plVar4 + 1) = iVar9;
            *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
            *(int *)(plVar4 + 3) = iVar11 - iVar8;
            iVar5 = iVar3 - iVar2;
            *(int *)((longlong)plVar4 + 0x1c) = iVar5;
            plVar4[4] = CONCAT44(iVar2,iVar8);
            plVar4[5] = CONCAT44(iVar3,iVar11);
            *(undefined8 *)((longlong)plVar4 + 0x34) = 0;
            *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
            *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
            *(int *)(plVar4 + 6) = iVar5 * (int)plVar4[3];
            plVar4[10] = 0;
            plVar4[0xb] = 0;
            plVar4[0xc] = 0;
            plVar4[0xd] = 0;
            *(undefined1 *)(plVar4 + 0xe) = 0;
            *(undefined4 *)((longlong)plVar4 + 0x74) = 0;
            iVar2 = *(int *)(*plVar4 + 0x38);
            *(int *)((longlong)plVar4 + 0xc) = iVar9 % iVar2;
            fVar12 = (float)iVar9 / (float)iVar2;
            *(int *)(plVar4 + 2) = (int)ROUND((fVar12 + fVar12) - 0.5) >> 1;
            *(undefined4 *)(plVar4 + 0xb) = 0;
            if (*(int *)((longlong)plVar4 + 0x5c) != (int)plVar4[6]) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar4 + 10);
              plVar6 = (longlong *)(ulonglong)*(uint *)(plVar4 + 0xb);
            }
            lVar1 = plVar4[6];
            iVar2 = (int)lVar1 + (int)plVar6;
            *(int *)(plVar4 + 0xb) = iVar2;
            if (*(int *)((longlong)plVar4 + 0x5c) < iVar2) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar4 + 10);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)(int)plVar6 + plVar4[10]),0,(longlong)(int)lVar1);
            plVar6 = plVar4;
          }
          iVar7 = iVar7 + 1;
          *(longlong **)(*(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 8) = plVar6;
          iVar9 = *(int *)(param_1 + 0x38);
        } while (iVar7 < iVar9);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x3c));
  }
  return;
}



// FUNCTION 1424a25c0 FUN_1424a25c0 body=2045 status=ok
// SIG undefined FUN_1424a25c0(void)

void FUN_1424a25c0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong **pplVar1;
  undefined4 uVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined2 *puVar20;
  longlong *plVar21;
  int iStackX_c;
  undefined8 local_res10;
  longlong *local_res18;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  longlong local_a0 [2];
  longlong local_90 [3];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  local_res10 = param_2;
  uVar12 = FName::ToString(&local_res10,local_90);
  puVar13 = (undefined8 *)FUN_1424a1af0(local_a0,uVar12);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*puVar13;
  }
  plVar14 = (longlong *)FName::FName(local_b0,puVar20,1);
  param_1[0x16] = *plVar14;
  if (local_a0[0] != 0) {
    FMemory::Free();
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == 0) {
    return;
  }
  lVar15 = operator_new(0x18);
  plVar14 = (longlong *)0x0;
  iVar11 = 0;
  plVar16 = plVar14;
  if (lVar15 != 0) {
    plVar16 = (longlong *)
              TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
              FInternalReferenceCollector(lVar15,param_3);
  }
  pplVar1 = (longlong **)(param_1 + 0x33);
  local_a8 = 0;
  if (pplVar1 == &local_res18) {
    local_res18 = plVar16;
    if (plVar16 != (longlong *)0x0) {
      puVar13 = (undefined8 *)*plVar16;
      goto LAB_1424a26ca;
    }
  }
  else {
    plVar17 = *pplVar1;
    *pplVar1 = plVar16;
    local_res18 = (longlong *)0x0;
    if (plVar17 != (longlong *)0x0) {
      puVar13 = (undefined8 *)*plVar17;
      plVar16 = plVar17;
LAB_1424a26ca:
      (*(code *)*puVar13)(plVar16,1);
    }
  }
  local_b8 = 0x4a000000;
  param_1[0x1f] = 0x4a0000004a000000;
  *(undefined4 *)(param_1 + 0x20) = 0x4a000000;
  param_1[0x21] = -0x4010000000000000;
  param_1[0x22] = -0x4010000000000000;
  param_1[0x23] = -0x4010000000000000;
  param_1[0x24] = -0x4010000000000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x11,0);
  }
  *(undefined4 *)((longlong)param_1 + 0xdc) = *DAT_146af5980;
  piVar3 = *(int **)(param_3 + 0xd8);
  iVar9 = iVar11;
  iVar8 = iVar11;
  if (piVar3 != (int *)0x0) {
    iVar9 = piVar3[1];
    iVar8 = *piVar3;
  }
  *(int *)((longlong)param_1 + 0x184) = iVar9;
  plVar16 = param_1 + 0x2e;
  *(int *)(param_1 + 0x30) = iVar8;
  *(int *)(param_1 + 0x31) = iVar9 * iVar8;
  uVar2 = *DAT_146af58a8;
  *(undefined4 *)(param_1 + 0x35) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar2;
  *(undefined4 *)(param_1 + 0x36) = uVar2;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar2;
  *(int *)((longlong)param_1 + 0x1b4) = *(int *)((longlong)param_1 + 0x1ac) * (int)param_1[0x36];
  uVar4 = param_1[0x30];
  iVar9 = (int)((longlong)((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
               (longlong)*(int *)((longlong)param_1 + 0x1ac));
  iStackX_c = (int)(uVar4 >> 0x20);
  *(int *)(param_1 + 0x39) = iVar9;
  iStackX_c = iStackX_c / (int)param_1[0x36];
  *(int *)((longlong)param_1 + 0x1cc) = iStackX_c;
  *(int *)(param_1 + 0x3a) = iStackX_c * iVar9;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (*(int *)((longlong)param_1 + 0x17c) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar16,0);
  }
  plVar17 = param_1 + 0x28;
  *(undefined4 *)(param_1 + 0x29) = 0;
  iVar9 = iVar11;
  if (*(int *)((longlong)param_1 + 0x14c) != (int)param_1[0x3a]) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar17);
    iVar9 = (int)param_1[0x29];
  }
  lVar15 = param_1[0x3a];
  iVar8 = iVar9 + (int)lVar15;
  *(int *)(param_1 + 0x29) = iVar8;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar17);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*plVar17 + (longlong)iVar9 * 4),0,(longlong)(int)lVar15 << 2);
  plVar17 = param_1 + 0x2a;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  plVar21 = plVar14;
  if (*(int *)((longlong)param_1 + 0x15c) != (int)param_1[0x3a]) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar17);
    plVar21 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x2b);
  }
  lVar15 = param_1[0x3a];
  iVar9 = (int)lVar15 + (int)plVar21;
  *(int *)(param_1 + 0x2b) = iVar9;
  if (*(int *)((longlong)param_1 + 0x15c) < iVar9) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar17);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*plVar17 + (longlong)(int)plVar21 * 4),0,(longlong)(int)lVar15 << 2);
  plVar17 = param_1 + 0x2c;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  plVar21 = plVar14;
  if (*(int *)((longlong)param_1 + 0x16c) != (int)param_1[0x3a]) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar17);
    plVar21 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x2d);
  }
  lVar15 = param_1[0x3a];
  iVar9 = (int)lVar15 + (int)plVar21;
  *(int *)(param_1 + 0x2d) = iVar9;
  if (*(int *)((longlong)param_1 + 0x16c) < iVar9) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar17);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*plVar17 + (longlong)(int)plVar21 * 4),0,(longlong)(int)lVar15 << 2);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (*(int *)((longlong)param_1 + 0x17c) != *(int *)((longlong)param_1 + 0x1b4)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar16);
  }
  iVar9 = *(int *)((longlong)param_1 + 0x1b4);
  lVar15 = param_1[0x2f];
  iVar8 = (int)lVar15 + iVar9;
  *(int *)(param_1 + 0x2f) = iVar8;
  if (*(int *)((longlong)param_1 + 0x17c) < iVar8) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar16);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)(int)lVar15 + *plVar16),0,(longlong)iVar9);
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  plVar17 = (longlong *)operator_new(0x80);
  plVar16 = plVar14;
  if (plVar17 != (longlong *)0x0) {
    plVar17[2] = 0;
    plVar17[6] = 0;
    *plVar17 = (longlong)param_1;
    plVar17[3] = 0;
    plVar17[4] = 0;
    plVar17[5] = 0;
    plVar17[7] = param_1[0x39];
    plVar17[8] = *(longlong *)((longlong)param_1 + 0x1ac);
    plVar17[9] = 0;
    plVar17[10] = 0;
    plVar17[0xb] = 0;
    plVar17[0xc] = 0;
    *(undefined4 *)((longlong)plVar17 + 0x6c) = 0;
    plVar17[0xe] = 0;
    plVar17[0xf] = 0;
    iVar8 = (int)plVar17[8] * (int)plVar17[7];
    iVar9 = *(int *)((longlong)plVar17 + 0x44) * *(int *)((longlong)plVar17 + 0x3c);
    *(int *)(plVar17 + 1) = iVar8;
    *(int *)((longlong)plVar17 + 0xc) = iVar9;
    *(int *)(plVar17 + 2) = iVar9 * iVar8;
    *(int *)((longlong)plVar17 + 0x34) = *(int *)((longlong)plVar17 + 0x3c) * (int)plVar17[7];
    FUN_1424a2340(plVar17);
    plVar16 = plVar17;
  }
  param_1[0x34] = (longlong)plVar16;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  if (((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar10 = GetCurrentThreadId(), DVar10 != DAT_1468c21c0)))))) {
    plVar16 = (longlong *)FUN_142499da0(local_68,0,0xff);
    *(longlong **)(*plVar16 + 0x10) = param_1;
    lVar15 = *plVar16;
    lVar6 = plVar16[2];
    lVar19 = plVar16[1];
    lVar5 = *(longlong *)(lVar15 + 0x20);
    piVar3 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    FUN_140445100(lVar15,lVar19,(int)lVar6,1);
    if (lVar5 != 0) {
      LOCK();
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
    FUN_1424a36a0(param_1);
  }
  FUN_141ee24f0(0);
  uVar12 = GetTransientPackage();
  FUN_1417846f0(uVar12,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar18 = UUserDefinedStruct::GetPrivateStaticClass();
  lVar15 = FUN_1417985e0(uVar18,uVar12,0,0,0,0,0,0,0);
  plVar16 = param_1 + 0x32;
  if (*plVar16 == 0) {
    if (lVar15 != 0) {
      lVar19 = operator_new(0x18);
      plVar17 = plVar14;
      if (lVar19 != 0) {
        plVar17 = (longlong *)
                  TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                  FInternalReferenceCollector(lVar19,lVar15);
      }
      if (plVar16 == &local_c0) {
        if (plVar17 == (longlong *)0x0) goto LAB_1424a2b9f;
        puVar13 = (undefined8 *)*plVar17;
      }
      else {
        plVar21 = (longlong *)*plVar16;
        *plVar16 = (longlong)plVar17;
        if (plVar21 == (longlong *)0x0) goto LAB_1424a2b9f;
        puVar13 = (undefined8 *)*plVar21;
        plVar17 = plVar21;
      }
      (*(code *)*puVar13)(plVar17,1);
    }
  }
  else {
    *(longlong *)(*plVar16 + 0x10) = lVar15;
  }
LAB_1424a2b9f:
  lVar15 = *param_1;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  if (*plVar16 != 0) {
    plVar14 = *(longlong **)(*plVar16 + 0x10);
  }
  local_c8 = lVar15;
  TRefCountPtr<FRHIIndexBuffer>::operator=(plVar14 + 0x1b,lVar15);
  if (lVar15 == 0) {
    *(undefined4 *)(plVar14 + 0x18) = 0;
    iVar9 = iVar11;
  }
  else {
    *(undefined4 *)(plVar14 + 0x18) = *(undefined4 *)(lVar15 + 0x3c);
    iVar11 = *(int *)(lVar15 + 0x60);
    iVar9 = *(int *)(lVar15 + 100);
  }
  *(int *)(plVar14 + 0x17) = iVar11;
  *(int *)((longlong)plVar14 + 0xbc) = iVar9;
  (**(code **)(*plVar14 + 0x278))(plVar14);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
  if (((param_4 == 0) || (cVar7 = FUN_142497ab0(param_1,param_4), cVar7 == '\0')) &&
     (cVar7 = FUN_1424a40c0(param_1), cVar7 != '\0')) {
    FUN_1424985d0(param_1[0x34],1);
    uStack_d0 = CONCAT31(uStack_d0._1_3_,1);
    local_d8 = param_1;
    if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
        local_78 = (undefined4)local_d8;
        uStack_74 = local_d8._4_4_;
        uStack_70 = uStack_d0;
        uStack_6c = uStack_cc;
        uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_142495dd0(&local_78,uVar12);
      }
      else {
        plVar14 = (longlong *)FUN_142499b00(local_50,0,0xff);
        lVar15 = *plVar14;
        *(undefined4 *)(lVar15 + 0x10) = (undefined4)local_d8;
        *(undefined4 *)(lVar15 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(lVar15 + 0x18) = uStack_d0;
        *(undefined4 *)(lVar15 + 0x1c) = uStack_cc;
        lVar15 = *plVar14;
        lVar6 = plVar14[2];
        lVar19 = plVar14[1];
        lVar5 = *(longlong *)(lVar15 + 0x28);
        piVar3 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        FUN_1409421c0(lVar15,lVar19,(int)lVar6,1);
        if (lVar5 != 0) {
          LOCK();
          iVar11 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            FGraphEvent::Recycle(lVar5);
          }
        }
      }
    }
    else {
      uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142495dd0(&local_d8,uVar12);
    }
    FUN_14249e320(param_1,3);
    FUN_14249e320(param_1,5);
  }
  FUN_14249e320(param_1,4);
  FUN_14249e320(param_1,3);
  FUN_14249e320(param_1,5);
  FUN_1424a95a0(param_1,1);
  FUN_1424a95a0(param_1,2);
  FUN_1424a95a0(param_1,3);
  return;
}



// FUNCTION 1424a2dd0 FUN_1424a2dd0 body=210 status=ok
// SIG undefined FUN_1424a2dd0(void)

void FUN_1424a2dd0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_28 = 0x1010102;
  local_24 = 0;
  local_1c = 0x7f7fffff;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  if (DAT_146ab62eb == '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0x3f800000;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    uVar1 = FExternalTextureRegistry::Get();
    FExternalTextureRegistry::RegisterExternalTexture
              (uVar1,param_1 + 0x78,param_1 + 0x30,param_1 + 0x38,&local_38,&local_48);
  }
  return;
}



// FUNCTION 1424a2eb0 FUN_1424a2eb0 body=1094 status=ok
// SIG undefined FUN_1424a2eb0(void)

void FUN_1424a2eb0(longlong param_1,longlong *param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float *pfVar7;
  longlong *plVar8;
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
  float local_b4;
  
  fVar2 = DAT_1468b5d98;
  fVar10 = DAT_1468b5d94;
  *param_3 = DAT_1468b5d90;
  param_3[1] = fVar10;
  param_3[2] = fVar2;
  param_3[3] = 0.0;
  param_3[4] = 0.0;
  param_3[5] = 0.0;
  param_3[6] = 0.0;
  plVar8 = *(longlong **)(param_1 + 0x48);
  plVar1 = plVar8 + (longlong)*(int *)(param_1 + 0x50) * 5;
  if (plVar8 != plVar1) {
    pfVar7 = (float *)((longlong)plVar8 + 0x1c);
    do {
      plVar4 = (longlong *)*param_2;
      if (plVar4 != plVar4 + (int)param_2[1]) {
        plVar6 = plVar4;
        do {
          if (*plVar6 == *plVar8) {
            if ((int)((longlong)plVar6 - (longlong)plVar4 >> 3) != -1) {
              if (0.0 < param_3[6]) {
                fVar10 = *param_3;
                fVar2 = param_3[2];
                fVar3 = param_3[1];
                fVar16 = fVar10 - param_3[3];
                fVar15 = fVar2 - param_3[5];
                fVar18 = fVar10 + param_3[3];
                fVar17 = fVar3 - param_3[4];
                fVar14 = fVar3 + param_3[4];
                fVar11 = fVar2 + param_3[5];
                fVar21 = fVar16;
                if (fVar18 < fVar16) {
                  fVar21 = fVar18;
                }
                fVar20 = fVar17;
                if (fVar14 < fVar17) {
                  fVar20 = fVar14;
                }
                fVar19 = fVar15;
                if (fVar11 < fVar15) {
                  fVar19 = fVar11;
                }
                if (fVar16 < fVar18) {
                  fVar16 = fVar18;
                }
                if (fVar17 < fVar14) {
                  fVar17 = fVar14;
                }
                if (fVar15 < fVar11) {
                  fVar15 = fVar11;
                }
                fVar11 = pfVar7[-5];
                fVar14 = pfVar7[-4];
                fVar12 = fVar11 - pfVar7[-2];
                fVar18 = pfVar7[-3];
                fVar9 = fVar14 - pfVar7[-1];
                fVar13 = fVar18 - *pfVar7;
                if (fVar12 < fVar21) {
                  fVar21 = fVar12;
                }
                if (fVar9 < fVar20) {
                  fVar20 = fVar9;
                }
                if (fVar13 < fVar19) {
                  fVar19 = fVar13;
                }
                if (fVar16 < fVar12) {
                  fVar16 = fVar12;
                }
                if (fVar17 < fVar9) {
                  fVar17 = fVar9;
                }
                if (fVar15 < fVar13) {
                  fVar15 = fVar13;
                }
                fVar13 = fVar11 + pfVar7[-2];
                fVar9 = fVar14 + pfVar7[-1];
                fVar12 = fVar18 + *pfVar7;
                if (fVar13 < fVar21) {
                  fVar21 = fVar13;
                }
                if (fVar9 < fVar20) {
                  fVar20 = fVar9;
                }
                if (fVar12 < fVar19) {
                  fVar19 = fVar12;
                }
                if (fVar16 < fVar13) {
                  fVar16 = fVar13;
                }
                if (fVar17 < fVar9) {
                  fVar17 = fVar9;
                }
                if (fVar15 < fVar12) {
                  fVar15 = fVar12;
                }
                fVar16 = fVar16 - fVar21;
                fVar17 = fVar17 - fVar20;
                fVar15 = fVar15 - fVar19;
                fVar21 = fVar21 + fVar16 * 0.5;
                fVar20 = fVar20 + fVar17 * 0.5;
                fVar19 = fVar19 + fVar15 * 0.5;
                fVar9 = SQRT((fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15) * 0.25);
                local_b4 = SQRT((fVar11 - fVar21) * (fVar11 - fVar21) +
                                (fVar14 - fVar20) * (fVar14 - fVar20) +
                                (fVar18 - fVar19) * (fVar18 - fVar19)) + pfVar7[1];
                fVar10 = SQRT((fVar3 - fVar20) * (fVar3 - fVar20) +
                              (fVar10 - fVar21) * (fVar10 - fVar21) +
                              (fVar2 - fVar19) * (fVar2 - fVar19)) + param_3[6];
                if (local_b4 <= fVar10) {
                  local_b4 = fVar10;
                }
                if (fVar9 <= local_b4) {
                  local_b4 = fVar9;
                }
                *(ulonglong *)param_3 = CONCAT44(fVar20,fVar21);
                *(ulonglong *)(param_3 + 2) = CONCAT44(fVar16 * 0.5,fVar19);
                *(ulonglong *)(param_3 + 4) = CONCAT44(fVar15 * 0.5,fVar17 * 0.5);
              }
              else {
                uVar5 = *(undefined8 *)(pfVar7 + -3);
                *(undefined8 *)param_3 = *(undefined8 *)(pfVar7 + -5);
                *(undefined8 *)(param_3 + 2) = uVar5;
                *(undefined8 *)(param_3 + 4) = *(undefined8 *)(pfVar7 + -1);
                local_b4 = pfVar7[1];
              }
              param_3[6] = local_b4;
            }
            break;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar4 + (int)param_2[1]);
      }
      plVar8 = plVar8 + 5;
      pfVar7 = pfVar7 + 10;
    } while (plVar8 != plVar1);
  }
  return;
}



// FUNCTION 1424a3300 FUN_1424a3300 body=924 status=ok
// SIG undefined FUN_1424a3300(void)

void FUN_1424a3300(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  void *_Src;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int local_res18;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  *(undefined8 *)(param_2 + 0x8f8) = *(undefined8 *)(param_1 + 0x30);
  plVar10 = *(longlong **)(param_2 + 0x900);
  for (iVar13 = *(int *)(param_2 + 0x908); iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  lVar14 = 0;
  *(undefined4 *)(param_2 + 0x908) = 0;
  if (*(int *)(param_2 + 0x90c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0x900,0);
  }
  *(undefined4 *)(param_2 + 0x918) = 0;
  if (*(int *)(param_2 + 0x91c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0x910,0);
  }
  *(undefined1 *)(param_2 + 0x95c) = 1;
  *(undefined8 *)(param_2 + 0x940) = 0;
  *(undefined8 *)(param_2 + 0x948) = 0;
  *(undefined8 *)(param_2 + 0x950) = 0;
  *(undefined4 *)(param_2 + 0x958) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar10 = (longlong *)(param_2 + 0x900);
    TArray<FString,FDefaultAllocator>::Empty(plVar10);
    iVar13 = *(int *)(param_1 + 0x40);
    iVar7 = *(int *)(param_2 + 0x908);
    iVar6 = iVar7 + iVar13;
    *(int *)(param_2 + 0x908) = iVar6;
    if (*(int *)(param_2 + 0x90c) < iVar6) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar7 * 0x10 + *plVar10),0,(longlong)iVar13 << 4);
    local_res18 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x38);
        iVar13 = 0;
        plVar15 = (longlong *)(*plVar10 + lVar14);
        if (0 < *(int *)(lVar8 + 8 + lVar14)) {
          lVar16 = 0;
          do {
            plVar12 = (longlong *)*param_3;
            lVar8 = *(longlong *)(lVar14 + lVar8);
            if (plVar12 != plVar12 + (int)param_3[1]) {
              plVar9 = plVar12;
              do {
                if (*plVar9 == *(longlong *)(lVar16 + lVar8)) {
                  if ((int)((longlong)plVar9 - (longlong)plVar12 >> 3) != -1) {
                    iVar7 = (int)plVar15[1];
                    lVar11 = (longlong)iVar7;
                    *(int *)(plVar15 + 1) = iVar7 + 1;
                    if (*(int *)((longlong)plVar15 + 0xc) < iVar7 + 1) {
                      TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar15,iVar7);
                    }
                    lVar4 = *plVar15;
                    lVar1 = lVar16 + lVar8;
                    *(undefined8 *)(lVar4 + lVar11 * 0xc) = 0;
                    *(undefined4 *)(lVar4 + 8 + lVar11 * 0xc) = 0;
                    lVar4 = *plVar15;
                    *(undefined4 *)(lVar4 + lVar11 * 0xc) = *(undefined4 *)(lVar16 + 8 + lVar8);
                    *(undefined4 *)(lVar4 + 4 + lVar11 * 0xc) =
                         *(undefined4 *)(lVar16 + 0xc + lVar8);
                    *(undefined4 *)(lVar4 + 8 + lVar11 * 0xc) =
                         *(undefined4 *)(lVar16 + 0x10 + lVar8);
                    if (((*(int *)(lVar1 + 0x20) != 0 || *(int *)(lVar1 + 0x1c) != 0) ||
                        *(int *)(lVar1 + 0x18) != 0) || *(int *)(lVar1 + 0x14) != 0) {
                      plVar12 = (longlong *)(param_2 + 0x930);
                      iVar7 = TArray<FGuid,FDefaultAllocator>::IndexOfByKey<FGuid>
                                        (plVar12,lVar1 + 0x14);
                      if (iVar7 == -1) {
                        iVar7 = *(int *)(param_2 + 0x938);
                        *(int *)(param_2 + 0x938) = iVar7 + 1;
                        if (*(int *)(param_2 + 0x93c) < iVar7 + 1) {
                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar7);
                        }
                        uVar5 = *(undefined8 *)(lVar1 + 0x1c);
                        puVar2 = (undefined8 *)(*plVar12 + (longlong)iVar7 * 0x10);
                        *puVar2 = *(undefined8 *)(lVar1 + 0x14);
                        puVar2[1] = uVar5;
                      }
                    }
                  }
                  break;
                }
                plVar9 = plVar9 + 1;
              } while (plVar9 != plVar12 + (int)param_3[1]);
            }
            iVar13 = iVar13 + 1;
            lVar16 = lVar16 + 0x28;
            lVar8 = *(longlong *)(param_1 + 0x38);
          } while (iVar13 < *(int *)(lVar8 + 8 + lVar14));
        }
        local_res18 = local_res18 + 1;
        lVar14 = lVar14 + 0x10;
      } while (local_res18 < *(int *)(param_1 + 0x40));
    }
    FUN_1424a2eb0(param_1,param_3,param_2 + 0x940);
  }
  plVar15 = *(longlong **)(param_1 + 0x68);
  plVar10 = plVar15 + (longlong)*(int *)(param_1 + 0x70) * 3;
  do {
    if (plVar15 == plVar10) {
      plVar10 = (longlong *)(param_2 + 0x920);
      if (plVar10 != param_3) {
        iVar13 = (int)param_3[1];
        _Src = (void *)*param_3;
        *(int *)(param_2 + 0x928) = iVar13;
        if ((iVar13 == 0) && (*(int *)(param_2 + 0x92c) == 0)) {
          *(undefined4 *)(param_2 + 0x92c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar10,iVar13);
          _guard_xfg_dispatch_icall_nop((void *)*plVar10,_Src,(longlong)iVar13 << 3);
        }
      }
      *(undefined1 *)(param_2 + 0x95c) = 0;
      return;
    }
    plVar9 = (longlong *)*param_3;
    plVar12 = plVar9 + (int)param_3[1];
    if (plVar9 != plVar12) {
      do {
        if (*plVar9 == *plVar15) {
          lVar14 = plVar15[1];
          iVar13 = *(int *)(param_2 + 0x918);
          lVar8 = plVar15[2];
          *(int *)(param_2 + 0x918) = iVar13 + 1;
          if (*(int *)(param_2 + 0x91c) < iVar13 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x910,iVar13);
          }
          local_68 = (undefined4)lVar8;
          uStack_64 = (undefined4)((ulonglong)lVar8 >> 0x20);
          uStack_60 = (undefined4)lVar14;
          uStack_5c = (undefined4)((ulonglong)lVar14 >> 0x20);
          puVar3 = (undefined4 *)(*(longlong *)(param_2 + 0x910) + (longlong)iVar13 * 0x10);
          *puVar3 = local_68;
          puVar3[1] = uStack_64;
          puVar3[2] = uStack_60;
          puVar3[3] = uStack_5c;
          break;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar12);
    }
    plVar15 = plVar15 + 3;
  } while( true );
}



// FUNCTION 1424a36a0 FUN_1424a36a0 body=1759 status=ok
// SIG undefined FUN_1424a36a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424a36a0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined1 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  wchar_t *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_48 = 1;
  local_30 = L"FODTexture";
  local_f0 = &local_58;
  local_34 = 0;
  local_110 = *(undefined1 *)(param_1 + 0x1b);
  local_f8 = 0x10008;
  local_58 = 0;
  uStack_50 = 0;
  local_100 = 1;
  local_28 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_20 = 0;
  local_108 = 1;
  local_118 = *(undefined4 *)((longlong)param_1 + 0x184);
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_e0,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x30));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_e0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_e0);
  local_118 = 0;
  (**(code **)(*DAT_146ab6358 + 0x610))(DAT_146ab6358,local_d8,&DAT_146ab6e78,*param_1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,local_d8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8);
  local_118 = local_118 & 0xffffff00;
  (**(code **)(*DAT_146ab6358 + 0x658))(DAT_146ab6358,local_d0,&DAT_146ab6e78,*param_1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_d0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d0);
  local_30 = L"FODReadbackTexture";
  local_f0 = &local_58;
  local_110 = *(undefined1 *)(param_1 + 0x1b);
  local_f8 = 0x10008;
  local_100 = 1;
  local_108 = 1;
  local_118 = *(uint *)(param_1 + 0x36);
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_c8,&DAT_146ab6e78,*(undefined4 *)((longlong)param_1 + 0x1ac));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 3,local_c8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_c8);
  local_118 = 0;
  (**(code **)(*DAT_146ab6358 + 0x610))(DAT_146ab6358,local_c0,&DAT_146ab6e78,param_1[3]);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 5,local_c0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_c0);
  local_118 = local_118 & 0xffffff00;
  (**(code **)(*DAT_146ab6358 + 0x658))(DAT_146ab6358,local_b8,&DAT_146ab6e78,param_1[3]);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 4,local_b8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b8);
  local_30 = L"FODReadbackCPUTexture";
  local_f0 = &local_58;
  local_110 = *(undefined1 *)(param_1 + 0x1b);
  local_f8 = 0x40000;
  local_100 = 1;
  local_108 = 1;
  local_118 = *(uint *)(param_1 + 0x36);
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_b0,&DAT_146ab6e78,*(undefined4 *)((longlong)param_1 + 0x1ac));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_b0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b0);
  local_30 = L"FODChunkMapValidTexelsTexture";
  local_f0 = &local_58;
  local_118 = *(undefined4 *)((longlong)param_1 + 0x1cc);
  local_f8 = 0x10008;
  local_100 = 1;
  local_108 = 1;
  local_110 = 0x1c;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_a8,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x39));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 7,local_a8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a8);
  local_118 = 0;
  (**(code **)(*DAT_146ab6358 + 0x610))(DAT_146ab6358,local_a0,&DAT_146ab6e78,param_1[7]);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,local_a0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a0);
  local_30 = L"FODChunkMapValidTexelsCPUTexture";
  local_f0 = &local_58;
  local_118 = *(undefined4 *)((longlong)param_1 + 0x1cc);
  local_f8 = 0x40000;
  local_100 = 1;
  local_108 = 1;
  local_110 = 0x1c;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_98,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x39));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 9,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  local_30 = L"FODChunkMapDiscoveredTexelsTexture";
  local_f0 = &local_58;
  local_118 = *(undefined4 *)((longlong)param_1 + 0x1cc);
  local_f8 = 0x10008;
  local_100 = 1;
  local_108 = 1;
  local_110 = 0x1c;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_90,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x39));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 10,local_90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90);
  local_118 = 0;
  (**(code **)(*DAT_146ab6358 + 0x610))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_1[10]);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xb,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  local_30 = L"FODChunkMapDiscoveredTexelsCPUTexture";
  local_f0 = &local_58;
  local_118 = *(undefined4 *)((longlong)param_1 + 0x1cc);
  local_f8 = 0x40000;
  local_100 = 1;
  local_108 = 1;
  local_110 = 0x1c;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_80,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x39));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xc,local_80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_80);
  local_30 = L"FODChunkMapAccumulatedDiscoveryTexture";
  local_f0 = &local_58;
  local_118 = *(undefined4 *)((longlong)param_1 + 0x1cc);
  local_f8 = 0x10008;
  local_100 = 1;
  local_108 = 1;
  local_110 = 0x1c;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_78,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x39));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xd,local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  local_118 = 0;
  (**(code **)(*DAT_146ab6358 + 0x610))(DAT_146ab6358,local_70,&DAT_146ab6e78,param_1[0xd]);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe,local_70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
  local_30 = L"FODChunkMapAccumulatedDiscoveryCPUTexture";
  local_f0 = &local_58;
  local_118 = *(undefined4 *)((longlong)param_1 + 0x1cc);
  local_f8 = 0x40000;
  local_100 = 1;
  local_108 = 1;
  local_110 = 0x1c;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x39));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xf,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  if (DAT_146ab62f7 == '\0') {
    if (((param_1[0x33] != 0) && (lVar3 = *(longlong *)(param_1[0x33] + 0x10), lVar3 != 0)) &&
       (lVar1 = *(longlong *)(lVar3 + 0x60), lVar1 != 0)) {
      local_e8 = 0;
      if ((lVar3 != 0) && (lVar1 != 0)) {
        plVar2 = *(longlong **)(lVar1 + 0x30);
        local_60 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
          if (lVar3 != 0) {
            uVar4 = (**(code **)(*plVar2 + 8))(plVar2);
            TRefCountPtr<FRHIIndexBuffer>::operator=(&local_e8,uVar4);
          }
        }
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_60);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x10,&local_e8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e8);
    }
    if (param_1[0x10] != 0) {
      *(undefined1 *)((longlong)param_1 + 0x9d) = 1;
    }
  }
  return;
}



// FUNCTION 1424a3d80 FUN_1424a3d80 body=251 status=ok
// SIG undefined FUN_1424a3d80(void)

void FUN_1424a3d80(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  float fVar7;
  
  (**(code **)(*param_1 + 0x148))();
  fVar7 = *(float *)(param_1 + 7);
  plVar1 = param_1 + 0xf;
  *(float *)(param_1 + 8) = 1.0 / fVar7;
  iVar2 = *(int *)((longlong)param_1 + 0x84);
  if (iVar2 < 0x100) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0x100);
    fVar7 = *(float *)(param_1 + 7);
    iVar2 = *(int *)((longlong)param_1 + 0x84);
  }
  fVar7 = fVar7 * *(float *)((longlong)param_1 + 0x34);
  uVar4 = -((int)ROUND(-0.5 - (fVar7 + fVar7)) >> 1);
  if (iVar2 < (int)uVar4) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,uVar4);
  }
  if (0 < (int)uVar4) {
    uVar6 = (ulonglong)uVar4;
    do {
      puVar3 = (undefined4 *)operator_new(0x18);
      puVar5 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        *puVar3 = 0xbf800000;
        *(undefined8 *)(puVar3 + 2) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        puVar5 = puVar3;
      }
      iVar2 = (int)param_1[0x10];
      *(int *)(param_1 + 0x10) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x84) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(undefined4 **)(*plVar1 + (longlong)iVar2 * 8) = puVar5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1424a3e80 FUN_1424a3e80 body=238 status=ok
// SIG undefined FUN_1424a3e80(void)

void FUN_1424a3e80(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_28 [32];
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x34) = DAT_1464aaa8c;
  *(undefined4 *)(param_1 + 0xc) = 2;
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_1424a3ee6;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_1424a3efb;
    }
LAB_1424a3ee6:
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_14249cc90(param_1,uVar9);
    return;
  }
LAB_1424a3efb:
  plVar10 = (longlong *)FUN_142499ef0(local_28,0,0xff);
  *(longlong *)(*plVar10 + 0x10) = param_1;
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x20);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_140445100(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 1424a3f70 FUN_1424a3f70 body=8 status=ok
// SIG undefined FUN_1424a3f70(void)

undefined1 FUN_1424a3f70(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x119);
}



// FUNCTION 1424a3f80 FUN_1424a3f80 body=313 status=ok
// SIG undefined FUN_1424a3f80(void)

bool FUN_1424a3f80(void)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_146af5a1c) {
    _Init_thread_header(&DAT_146af5a1c);
    if (DAT_146af5a1c == -1) {
      uVar3 = FCommandLine::Get();
      DAT_146af5a18 = FParse::Param(uVar3,L"ForceGbxRenderFrameScope");
      _Init_thread_footer(&DAT_146af5a1c);
    }
  }
  if (*piVar4 < DAT_146af5a24) {
    _Init_thread_header(&DAT_146af5a24);
    if (DAT_146af5a24 == -1) {
      uVar3 = FCommandLine::Get();
      DAT_146af5a20 = FParse::Param(uVar3,L"NoGbxRenderFrameScope");
      _Init_thread_footer(&DAT_146af5a24);
    }
  }
  piVar4 = DAT_146af5780;
  if (DAT_146af5a20 != '\0') {
    return false;
  }
  if (DAT_146af5a18 != '\0') {
    return true;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      return 0 < piVar4[1];
    }
  }
  return 0 < *piVar4;
}



// FUNCTION 1424a40c0 FUN_1424a40c0 body=107 status=ok
// SIG undefined FUN_1424a40c0(void)

ulonglong FUN_1424a40c0(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  
  lVar1 = DAT_146af5890;
  if (DAT_1468b616c != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_1424a4114;
    }
  }
  lVar5 = 0;
LAB_1424a4114:
  uVar4 = *(int *)(lVar5 + lVar1) - 1;
  return (ulonglong)CONCAT31((int3)(uVar4 >> 8),(uVar4 & 0xfffffffd) == 0);
}



// FUNCTION 1424a4130 FUN_1424a4130 body=26 status=ok
// SIG undefined FUN_1424a4130(void)

bool FUN_1424a4130(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1424a2120(*(undefined8 *)(param_1 + 0x1a0));
  return cVar1 == -1;
}



// FUNCTION 1424a4150 FUN_1424a4150 body=992 status=ok
// SIG undefined FUN_1424a4150(void)

void FUN_1424a4150(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 local_res8;
  undefined2 *local_c8;
  int local_c0;
  longlong local_b8 [18];
  
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,L"EGbxViewFlag",1);
  uVar14 = 0;
  local_b8[3] = 0xb;
  local_b8[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2,0);
  FGenericPlatformString::Memcpy(local_b8[2],L"EngineFlag",0x16);
  local_b8[0] = 0;
  local_b8[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],L"GameFlag",0x12);
  local_b8[0xe] = 0;
  local_b8[0xf] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 0xe,0);
  FGenericPlatformString::Memcpy(local_b8[0xe],L"DisplayName",0x18);
  local_b8[0xc] = 0;
  local_b8[0xd] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 0xc,0);
  FGenericPlatformString::Memcpy(local_b8[0xc],L"bOwner",0xe);
  local_b8[10] = 0;
  local_b8[0xb] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 10,0);
  FGenericPlatformString::Memcpy(local_b8[10],L"bOnlyOwner",0x16);
  local_b8[8] = 0;
  local_b8[9] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 8,0);
  FGenericPlatformString::Memcpy(local_b8[8],L"bOnlyViewportOwner",0x26);
  local_b8[6] = 0;
  local_b8[7] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 6,0);
  FGenericPlatformString::Memcpy(local_b8[6],&DAT_1450bd0ec,4);
  local_b8[4] = 0;
  local_b8[5] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 4,0);
  FGenericPlatformString::Memcpy(local_b8[4],L"Hidden",0xe);
  iVar3 = *(int *)(lVar5 + 0x48);
  lVar11 = (longlong)iVar3;
  uVar13 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != iVar3) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  iVar3 = iVar1 + iVar3;
  *(int *)(param_1 + 0x50) = iVar3;
  if (*(int *)(param_1 + 0x54) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x48);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8),0,lVar11 * 8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar10 = uVar14;
  uVar12 = uVar14;
  uVar7 = uVar13;
  uVar8 = uVar13;
  if (0 < lVar11) {
    do {
      FUN_1417392b0(lVar5,&local_c8,uVar12);
      puVar9 = &DAT_143f3eda8;
      if (local_c0 != 0) {
        puVar9 = local_c8;
      }
      FName::FName(&local_res8,puVar9,1);
      cVar2 = FString::StartsWith(&local_c8,local_b8 + 2,1);
      if (cVar2 == '\0') {
        FString::StartsWith(&local_c8,local_b8,1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar10 * 8) = local_res8;
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar10 = uVar10 + 1;
      uVar12 = (ulonglong)((int)uVar12 + 1);
    } while ((longlong)uVar10 < lVar11);
    uVar13 = *(uint *)(param_1 + 0x58);
    uVar7 = *(uint *)(param_1 + 0x5c);
    uVar8 = *(uint *)(param_1 + 0x60);
  }
  *(uint *)(param_1 + 0x58) = uVar13 | 0xf;
  *(uint *)(param_1 + 0x5c) = uVar7 | 5;
  *(uint *)(param_1 + 0x60) = uVar8 | 8;
  if (0 < *(int *)(param_1 + 0x40)) {
    local_res8 = 0;
    uVar10 = uVar14;
    do {
      lVar5 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(lVar5 + 8 + uVar10) != 0) {
        lVar11 = (ulonglong)*(byte *)(lVar5 + uVar10) * 8;
        FName::ToString(*(longlong *)(param_1 + 0x48) + lVar11,local_b8 + 0x10);
        FName::ToString(lVar5 + uVar10 + 8,&local_c8);
        lVar5 = *(longlong *)(param_1 + 0x48);
        puVar9 = &DAT_143f3eda8;
        if (local_c0 != 0) {
          puVar9 = local_c8;
        }
        puVar6 = (undefined8 *)FName::FName(&local_res8,puVar9,1);
        *(undefined8 *)(lVar5 + lVar11) = *puVar6;
        if (local_c8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_b8[0x10] != 0) {
          FMemory::Free();
        }
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar10 = uVar10 + 0x18;
    } while ((int)uVar13 < *(int *)(param_1 + 0x40));
  }
  if (local_b8[4] != 0) {
    FMemory::Free();
  }
  if (local_b8[6] != 0) {
    FMemory::Free();
  }
  if (local_b8[8] != 0) {
    FMemory::Free();
  }
  if (local_b8[10] != 0) {
    FMemory::Free();
  }
  if (local_b8[0xc] != 0) {
    FMemory::Free();
  }
  if (local_b8[0xe] != 0) {
    FMemory::Free();
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  if (local_b8[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424a4530 FUN_1424a4530 body=244 status=ok
// SIG undefined FUN_1424a4530(void)

void FUN_1424a4530(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",1);
  FUN_141d72970(param_2,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_UNKNOWN",0);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_CLEAR",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_TEXTURE",2);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_DISCOVERED",3);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_VALIDTEXELS",4);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_ACCUMULATED_DISCOVERY",5);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4630 FUN_1424a4630 body=244 status=ok
// SIG undefined FUN_1424a4630(void)

void FUN_1424a4630(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",1);
  FUN_141d72970(param_2,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE",2);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_UNKNOWN",0);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_CLEAR",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_TEXTURE",2);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_DISCOVERED",3);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_VALIDTEXELS",4);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_ACCUMULATED_DISCOVERY",5);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4730 FUN_1424a4730 body=244 status=ok
// SIG undefined FUN_1424a4730(void)

void FUN_1424a4730(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",1);
  FUN_141d72970(param_2,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE",3);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_UNKNOWN",0);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_CLEAR",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_TEXTURE",2);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_DISCOVERED",3);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_VALIDTEXELS",4);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_ACCUMULATED_DISCOVERY",5);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4830 FUN_1424a4830 body=244 status=ok
// SIG undefined FUN_1424a4830(void)

void FUN_1424a4830(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",1);
  FUN_141d72970(param_2,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE",4);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_UNKNOWN",0);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_CLEAR",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_TEXTURE",2);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_DISCOVERED",3);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_VALIDTEXELS",4);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_ACCUMULATED_DISCOVERY",5);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4930 FUN_1424a4930 body=244 status=ok
// SIG undefined FUN_1424a4930(void)

void FUN_1424a4930(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",1);
  FUN_141d72970(param_2,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE",5);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_UNKNOWN",0);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_CLEAR",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_FOD_TEXTURE",2);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_DISCOVERED",3);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_VALIDTEXELS",4);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_FILL_MODE_CHUNKMAP_ACCUMULATED_DISCOVERY",5);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4a30 FUN_1424a4a30 body=77 status=ok
// SIG undefined FUN_1424a4a30(void)

void FUN_1424a4a30(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",1);
  FUN_141d72970(param_2,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  return;
}



// FUNCTION 1424a4a80 FUN_1424a4a80 body=77 status=ok
// SIG undefined FUN_1424a4a80(void)

void FUN_1424a4a80(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",2);
  FUN_141d72970(param_2,L"THREADGROUP_Y",2);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  return;
}



// FUNCTION 1424a4ad0 FUN_1424a4ad0 body=77 status=ok
// SIG undefined FUN_1424a4ad0(void)

void FUN_1424a4ad0(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",4);
  FUN_141d72970(param_2,L"THREADGROUP_Y",4);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  return;
}



// FUNCTION 1424a4b20 FUN_1424a4b20 body=77 status=ok
// SIG undefined FUN_1424a4b20(void)

void FUN_1424a4b20(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",8);
  FUN_141d72970(param_2,L"THREADGROUP_Y",8);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  return;
}



// FUNCTION 1424a4b70 FUN_1424a4b70 body=77 status=ok
// SIG undefined FUN_1424a4b70(void)

void FUN_1424a4b70(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",0x10);
  FUN_141d72970(param_2,L"THREADGROUP_Y",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  return;
}



// FUNCTION 1424a4bc0 FUN_1424a4bc0 body=142 status=ok
// SIG undefined FUN_1424a4bc0(void)

void FUN_1424a4bc0(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",1);
  FUN_141d72970(param_2,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",1);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4c50 FUN_1424a4c50 body=139 status=ok
// SIG undefined FUN_1424a4c50(void)

void FUN_1424a4c50(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",1);
  FUN_141d72970(param_2,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",0);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4ce0 FUN_1424a4ce0 body=142 status=ok
// SIG undefined FUN_1424a4ce0(void)

void FUN_1424a4ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",2);
  FUN_141d72970(param_2,L"THREADGROUP_Y",2);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",1);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4d70 FUN_1424a4d70 body=139 status=ok
// SIG undefined FUN_1424a4d70(void)

void FUN_1424a4d70(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",2);
  FUN_141d72970(param_2,L"THREADGROUP_Y",2);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",0);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4e00 FUN_1424a4e00 body=142 status=ok
// SIG undefined FUN_1424a4e00(void)

void FUN_1424a4e00(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",4);
  FUN_141d72970(param_2,L"THREADGROUP_Y",4);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",1);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4e90 FUN_1424a4e90 body=139 status=ok
// SIG undefined FUN_1424a4e90(void)

void FUN_1424a4e90(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",4);
  FUN_141d72970(param_2,L"THREADGROUP_Y",4);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",0);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4f20 FUN_1424a4f20 body=142 status=ok
// SIG undefined FUN_1424a4f20(void)

void FUN_1424a4f20(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",8);
  FUN_141d72970(param_2,L"THREADGROUP_Y",8);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",1);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a4fb0 FUN_1424a4fb0 body=139 status=ok
// SIG undefined FUN_1424a4fb0(void)

void FUN_1424a4fb0(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",8);
  FUN_141d72970(param_2,L"THREADGROUP_Y",8);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",0);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a5040 FUN_1424a5040 body=142 status=ok
// SIG undefined FUN_1424a5040(void)

void FUN_1424a5040(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",0x10);
  FUN_141d72970(param_2,L"THREADGROUP_Y",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",1);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a50d0 FUN_1424a50d0 body=139 status=ok
// SIG undefined FUN_1424a50d0(void)

void FUN_1424a50d0(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"THREADGROUP_X",0x10);
  FUN_141d72970(param_2,L"THREADGROUP_Y",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MAX_SUPPORTED_POSITIONS",0x40);
  FUN_141a172f0(param_2,L"GBXZONEMAP_FOD_UPDATE_MULTIPLE",0);
  FUN_141bbc830(param_2,L"GBX_ZONEMAP_TEXEL_DISCOVERED_THRESHOLD",0x3f800000);
  return;
}



// FUNCTION 1424a5160 FUN_1424a5160 body=38 status=ok
// SIG undefined FUN_1424a5160(void)

void FUN_1424a5160(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  plVar1 = plVar2 + *(int *)(param_1 + 0x50);
  if (plVar2 == plVar1) {
    return;
  }
  do {
    if (*plVar2 == param_2) {
      FUN_1424af600();
      return;
    }
    plVar2 = plVar2 + 1;
  } while (plVar2 != plVar1);
  return;
}



// FUNCTION 1424a5190 FUN_1424a5190 body=242 status=ok
// SIG undefined FUN_1424a5190(void)

void FUN_1424a5190(longlong *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  uVar6 = uVar5;
  if (0 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    plVar7 = (longlong *)param_1[9];
    uVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
    do {
      lVar3 = *plVar7;
      if (*(int *)(lVar3 + 0x14) == 4) {
        *(int *)((longlong)param_1 + 0x1c) =
             *(int *)((longlong)param_1 + 0x1c) + *(int *)(lVar3 + 0x34);
        iVar4 = *(int *)(lVar3 + 0x38);
      }
      else {
        *(int *)((longlong)param_1 + 0x1c) =
             *(int *)((longlong)param_1 + 0x1c) + *(int *)(lVar3 + 0x3c);
        iVar4 = *(int *)(lVar3 + 0x44);
      }
      uVar5 = *(uint *)((longlong)param_1 + 0x1c);
      uVar6 = uVar6 + iVar4;
      plVar7 = plVar7 + 1;
      *(uint *)((longlong)param_1 + 0x24) = uVar6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x14);
  *(float *)((longlong)param_1 + 0x2c) = (float)uVar6 / (float)*(uint *)(param_1 + 3);
  if (uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
    goto LAB_1424a525a;
  }
  if (uVar5 != 0) {
    if ((uVar2 != 0) && (uVar5 == uVar2)) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 4;
      goto LAB_1424a525a;
    }
    if (uVar5 != 0) {
      if ((uVar2 != 0) && (uVar5 < uVar2)) {
        *(undefined4 *)((longlong)param_1 + 0x6c) = 3;
      }
      goto LAB_1424a525a;
    }
  }
  if (uVar2 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 2;
  }
LAB_1424a525a:
  if (((param_2 != '\0') && (uVar1 != 0)) && (uVar1 < uVar5)) {
    TBaseMulticastDelegate<void>::Broadcast(*param_1 + 0x1d8);
  }
  return;
}



// FUNCTION 1424a5290 Deinitialize body=46 status=ok
// SIG undefined Deinitialize(void)

void ULandscapeSubsystem::Deinitialize(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  FUN_1424a9d30(param_1);
  return;
}



// FUNCTION 1424a52c0 thunk_FUN_1424a1420 body=5 status=ok
// SIG undefined thunk_FUN_1424a1420(void)

undefined * thunk_FUN_1424a1420(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af5a70) {
    _Init_thread_header(&DAT_146af5a70);
    if (DAT_146af5a70 == -1) {
      atexit(FUN_143eae850);
      _Init_thread_footer(&DAT_146af5a70);
      return &DAT_146af5a40;
    }
  }
  return &DAT_146af5a40;
}



// FUNCTION 1424a52d0 CompatibleWith body=18 status=ok
// SIG undefined CompatibleWith(void)

longlong FEngineVersion::CompatibleWith(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1424a1420();
  return lVar1 + 0x20;
}



// FUNCTION 1424a52f0 FUN_1424a52f0 body=545 status=ok
// SIG undefined FUN_1424a52f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424a52f0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  lVar6 = FWeakObjectPtr::Get(param_2);
  if ((lVar6 != 0) && (lVar6 = FUN_1428cce50(lVar6), lVar6 != 0)) {
    lVar8 = *(longlong *)(lVar6 + 0x30);
    lVar6 = (longlong)*(int *)(lVar6 + 0x38) * 0x280 + lVar8;
    for (; lVar8 != lVar6; lVar8 = lVar8 + 0x280) {
      if ((*(int *)(lVar8 + 0x228) == param_3) && (*(int *)(lVar8 + 0x22c) == param_4)) {
        *(undefined1 *)(lVar8 + 0x271) = 3;
        pbVar9 = *(byte **)(param_2 + 0x100);
        pbVar7 = pbVar9 + (longlong)*(int *)(param_2 + 0x108) * 0x90;
        while( true ) {
          if (pbVar9 == pbVar7) {
            return;
          }
          if (((*pbVar9 & 1) != 0) && ((*pbVar9 & 2) == 0)) break;
          pbVar9 = pbVar9 + 0x90;
        }
        auVar1._12_4_ = 0;
        auVar1._0_12_ = *(undefined1 (*) [12])(pbVar9 + 0x20);
        *(undefined1 (*) [16])(lVar8 + 0x250) = auVar1;
        if (*(char *)(lVar8 + 0xa1) == '\0') {
          return;
        }
        fVar2 = *(float *)(lVar8 + 0x240);
        fVar3 = *(float *)(lVar8 + 0x244);
        fVar4 = *(float *)(lVar8 + 0x248);
        fVar5 = *(float *)(lVar8 + 0x24c);
        fVar15 = -fVar2 + -fVar2;
        fVar14 = fVar3 + fVar3;
        local_48 = fVar14 * fVar5 - fVar15 * fVar4;
        local_44 = fVar14 * fVar4 + fVar15 * fVar5;
        local_40 = (fVar15 * fVar2 - fVar14 * fVar3) + 1.0;
        FQuat::FindBetweenNormals(&local_38,&local_48,pbVar9 + 0x38);
        *(undefined1 *)(lVar8 + 0x271) = 2;
        fVar11 = fVar4 * local_38 * fRam0000000146af5804;
        fVar12 = fVar3 * local_38 * fRam0000000146af5808;
        fVar13 = fVar2 * local_38 * fRam0000000146af580c;
        fVar14 = fVar5 * fStack_34 * fRam0000000146af57f4;
        fVar15 = fVar2 * fStack_34 * fRam0000000146af57f8;
        fVar10 = fVar3 * fStack_34 * fRam0000000146af57fc;
        fVar16 = fVar2 * fStack_30 * fRam0000000146af57e4;
        fVar17 = fVar5 * fStack_30 * fRam0000000146af57e8;
        fVar18 = fVar4 * fStack_30 * fRam0000000146af57ec;
        *(float *)(lVar8 + 0x240) =
             fVar5 * local_38 * _DAT_146af5800 + fStack_2c * fVar2 +
             fVar4 * fStack_34 * _DAT_146af57f0 + fVar3 * fStack_30 * _DAT_146af57e0;
        *(float *)(lVar8 + 0x244) = fVar11 + fStack_2c * fVar3 + fVar14 + fVar16;
        *(float *)(lVar8 + 0x248) = fVar12 + fStack_2c * fVar4 + fVar15 + fVar17;
        *(float *)(lVar8 + 0x24c) = fVar13 + fStack_2c * fVar5 + fVar10 + fVar18;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1424a5520 FUN_1424a5520 body=18 status=ok
// SIG undefined FUN_1424a5520(void)

longlong FUN_1424a5520(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1424a1420();
  return lVar1 + 0x10;
}



// FUNCTION 1424a5540 FUN_1424a5540 body=751 status=ok
// SIG undefined FUN_1424a5540(void)

ulonglong FUN_1424a5540(longlong *param_1,float param_2,undefined8 param_3,undefined1 param_4,
                       undefined8 param_5,float *param_6,undefined1 param_7,longlong param_8,
                       undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  float *pfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 local_c0;
  float *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  fVar6 = 0.0;
  puVar2 = (undefined8 *)register0x00000020;
  if (((char)param_1[6] != '\0') &&
     (fVar5 = param_2 - *(float *)((longlong)param_1 + 0x3c), 0.0 < fVar5)) {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x148))();
    fVar5 = *(float *)(puVar2 + 0xf3) - fVar5;
    pfVar3 = (float *)0x0;
    if (0 < (int)param_1[0xe]) {
      pfVar1 = (float *)0x0;
      for (puVar2 = (undefined8 *)param_1[0xd]; puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)puVar2[2]) {
        pfVar3 = (float *)*puVar2;
        if (*pfVar3 <= fVar5) {
          if ((pfVar1 != (float *)0x0) && (*pfVar1 - fVar5 <= fVar5 - *pfVar3)) {
            pfVar3 = pfVar1;
          }
          if (pfVar3 != (float *)0x0) goto LAB_1424a5603;
          break;
        }
        pfVar1 = pfVar3;
      }
      pfVar3 = pfVar1;
      if (pfVar1 != (float *)0x0) {
LAB_1424a5603:
        fVar6 = *pfVar3 - fVar5;
      }
    }
    if (pfVar3 != (float *)0x0) {
      local_d8 = *param_6;
      fStack_d4 = param_6[1];
      fStack_d0 = param_6[2];
      fStack_cc = param_6[3];
      local_b8 = (float *)0x0;
      local_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      FUN_142498770(param_5,&local_d8,&local_f8,&local_e8);
      fStack_cc = param_6[4] + local_e8 + local_f8;
      fStack_c4 = param_6[6] + local_e0 + fStack_f0;
      fStack_d4 = (param_6[5] + local_e4) - fStack_f4;
      local_c0 = CONCAT31(local_c0._1_3_,1);
      fStack_c8 = param_6[5] + local_e4 + fStack_f4;
      local_b0 = CONCAT44(fVar6,param_2);
      local_d8 = (param_6[4] + local_e8) - local_f8;
      uStack_80._0_5_ = CONCAT14(param_4,(undefined4)uStack_80);
      fStack_f0 = (param_6[6] + local_e0) - fStack_f0;
      local_90 = CONCAT44(local_90._4_4_,local_c0);
      local_a8 = CONCAT44(fStack_d4,local_d8);
      uStack_a0 = CONCAT44(fStack_cc,fStack_f0);
      local_98 = CONCAT44(fStack_c4,fStack_c8);
      local_e0 = fStack_c4;
      fStack_d0 = fStack_f0;
      local_b8 = pfVar3;
      pfVar3 = (float *)FUN_142309ff0(&local_d8,param_7,*(undefined1 *)(param_8 + 0x11),param_9,
                                      param_8,param_10,param_11);
      local_f8 = *pfVar3;
      fStack_f4 = pfVar3[1];
      fStack_f0 = pfVar3[2];
      uStack_88 = *(undefined8 *)(pfVar3 + 1);
      fStack_ec = pfVar3[3];
      local_90 = CONCAT44(local_f8,(undefined4)local_90);
      uStack_80 = CONCAT44(uStack_80._4_4_,fStack_ec);
      uVar4 = FUN_1424a5830(param_1,param_3,&local_b8,param_5,param_6,param_8);
      return uVar4;
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}



// FUNCTION 1424a5830 FUN_1424a5830 body=3118 status=ok
// SIG undefined FUN_1424a5830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1424a5830(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  float *param_5,longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float *pfVar12;
  longlong *plVar13;
  byte bVar14;
  longlong *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auStack_1f8 [32];
  float *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined4 local_1b8;
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
  undefined8 local_168;
  undefined8 local_160;
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
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  bVar14 = 0;
  plVar13 = *(longlong **)(*param_3 + 8);
  plVar15 = plVar13 + (longlong)*(int *)(*param_3 + 0x10) * 0xc;
  if (plVar13 != plVar15) {
    pfVar12 = (float *)((longlong)plVar13 + 0xc);
    local_168 = param_4;
    local_160 = param_2;
    do {
      fVar46 = fRam0000000146af5848;
      fVar35 = fRam0000000146af5844;
      fVar41 = _DAT_146af5840;
      fVar63 = fRam0000000146af582c;
      fVar62 = fRam0000000146af5828;
      fVar61 = fRam0000000146af5824;
      fVar36 = _DAT_146af5820;
      fVar60 = fRam0000000146af5758;
      fVar59 = fRam0000000146af5754;
      fVar58 = _DAT_146af5750;
      lVar3 = *plVar13;
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x94) & 2) == 0)) {
        uVar2 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar10 = uVar2 & 0xffff;
          uVar6 = uVar2;
          if ((int)uVar2 < 0) {
            uVar6 = uVar2 + 0xffff;
            uVar10 = uVar10 - 0x10000;
          }
          lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar10 * 0x18;
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
          puVar11 = *(uint **)(param_6 + 0x68);
          if (*(uint **)(param_6 + 0x68) == (uint *)0x0) {
            puVar11 = (uint *)(param_6 + 0x58);
          }
          puVar1 = puVar11 + *(int *)(param_6 + 0x70);
          for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
            if (*puVar11 == uVar2) goto LAB_1424a63ca;
          }
          if ((((pfVar12[-1] <= *(float *)((longlong)param_3 + 0x1c)) &&
               (*(float *)(param_3 + 2) <= pfVar12[2])) && (*pfVar12 <= *(float *)(param_3 + 4))) &&
             (((*(float *)((longlong)param_3 + 0x14) <= pfVar12[3] &&
               (pfVar12[1] <= *(float *)((longlong)param_3 + 0x24))) &&
              (*(float *)(param_3 + 3) <= pfVar12[4])))) {
            lVar3 = *(longlong *)(lVar3 + 0x168);
            if (lVar3 == 0) {
              fVar44 = 0.0;
              fVar48 = 0.0;
              fVar50 = 0.0;
              fVar21 = 0.0;
              fVar29 = 0.0;
              fVar39 = 0.0;
              fVar26 = 0.0;
              fVar20 = (float)((uint)_DAT_146af5750 & _DAT_146af5760);
              fVar25 = (float)((uint)fRam0000000146af5754 & uRam0000000146af5764);
              fVar27 = (float)((uint)fRam0000000146af5758 & uRam0000000146af5768);
              fVar30 = (float)((uint)fRam0000000146af575c & uRam0000000146af576c);
              fVar28 = fRam0000000146af575c;
            }
            else {
              fVar29 = *(float *)(lVar3 + 0x210);
              fVar39 = *(float *)(lVar3 + 0x214);
              fVar26 = *(float *)(lVar3 + 0x218);
              fVar44 = *(float *)(lVar3 + 0x220);
              fVar48 = *(float *)(lVar3 + 0x224);
              fVar50 = *(float *)(lVar3 + 0x228);
              fVar21 = *(float *)(lVar3 + 0x22c);
              fVar20 = *(float *)(lVar3 + 0x230);
              fVar25 = *(float *)(lVar3 + 0x234);
              fVar27 = *(float *)(lVar3 + 0x238);
              fVar30 = *(float *)(lVar3 + 0x23c);
              fVar28 = *(float *)(lVar3 + 0x21c);
            }
            auVar23 = *(undefined1 (*) [16])(pfVar12 + 0x11);
            fVar31 = auVar23._0_4_;
            fVar38 = auVar23._4_4_;
            fVar42 = auVar23._8_4_;
            auVar16._4_4_ = fVar25;
            auVar16._0_4_ = fVar20;
            auVar16._8_4_ = fVar27;
            auVar16._12_4_ = fVar30;
            auVar16 = minps(auVar23,auVar16);
            fVar64 = fVar31 * fVar20;
            fVar65 = fVar38 * fVar25;
            fVar66 = fVar42 * fVar27;
            fVar67 = auVar23._12_4_ * fVar30;
            auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146af5844);
            auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146af5840);
            auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146af5848);
            auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146af584c);
            iVar7 = movmskps((int)lVar3,auVar17);
            local_148 = _DAT_146af5840;
            fStack_144 = fRam0000000146af5844;
            fStack_140 = fRam0000000146af5848;
            fStack_13c = fRam0000000146af584c;
            local_128 = _DAT_146af5820;
            fStack_124 = fRam0000000146af5824;
            fStack_120 = fRam0000000146af5828;
            fStack_11c = fRam0000000146af582c;
            if (iVar7 == 0) {
              fVar58 = pfVar12[9];
              fVar59 = pfVar12[10];
              fVar60 = pfVar12[0xb];
              fVar36 = pfVar12[0xc];
              fVar20 = pfVar12[0xd] * fVar20;
              fVar25 = pfVar12[0xe] * fVar25;
              fVar27 = pfVar12[0xf] * fVar27;
              fVar30 = pfVar12[0x10] * fVar30;
              fVar41 = fVar36 * fVar29 * _DAT_146af5800 + fVar28 * fVar58 +
                       fVar60 * fVar39 * _DAT_146af57f0 + fVar59 * fVar26 * _DAT_146af57e0;
              fVar61 = fVar60 * fVar29 * fRam0000000146af5804 + fVar28 * fVar59 +
                       fVar36 * fVar39 * fRam0000000146af57f4 +
                       fVar58 * fVar26 * fRam0000000146af57e4;
              fVar62 = fVar59 * fVar29 * fRam0000000146af5808 + fVar28 * fVar60 +
                       fVar58 * fVar39 * fRam0000000146af57f8 +
                       fVar36 * fVar26 * fRam0000000146af57e8;
              fVar63 = fVar58 * fVar29 * fRam0000000146af580c + fVar28 * fVar36 +
                       fVar59 * fVar39 * fRam0000000146af57fc +
                       fVar60 * fVar26 * fRam0000000146af57ec;
              fVar58 = fVar27 * fVar39 - fVar25 * fVar26;
              fVar59 = fVar20 * fVar26 - fVar27 * fVar29;
              fVar60 = fVar25 * fVar29 - fVar20 * fVar39;
              fVar36 = fVar30 * fVar28 - fVar30 * fVar28;
              fVar58 = fVar58 + fVar58;
              fVar59 = fVar59 + fVar59;
              fVar60 = fVar60 + fVar60;
              fVar36 = fVar36 + fVar36;
              fVar44 = (fVar60 * fVar39 - fVar59 * fVar26) + fVar58 * fVar28 + fVar20 + fVar44;
              fVar48 = (fVar58 * fVar26 - fVar60 * fVar29) + fVar59 * fVar28 + fVar25 + fVar48;
              fVar50 = (fVar59 * fVar29 - fVar58 * fVar39) + fVar60 * fVar28 + fVar27 + fVar50;
              fVar21 = (fVar36 * fVar28 - fVar36 * fVar28) + fVar36 * fVar28 + fVar30 + fVar21;
              uVar8 = 0;
            }
            else {
              fVar32 = fVar39 + fVar39;
              fVar34 = fVar26 + fVar26;
              fVar37 = fVar29 * (fVar29 + fVar29);
              fVar33 = (fVar29 + fVar29) * fVar28;
              fVar21 = pfVar12[9];
              fVar43 = pfVar12[10];
              fVar47 = pfVar12[0xb];
              fVar51 = pfVar12[0xc];
              fVar55 = (fVar34 * fVar28 + fVar32 * fVar29) * fVar20;
              fVar56 = (fVar33 + fVar34 * fVar39) * fVar25;
              fVar57 = (fVar32 * fVar28 + fVar34 * fVar29) * fVar27;
              fVar40 = fVar25 * (fVar32 * fVar29 - fVar34 * fVar28);
              fVar45 = fVar27 * (fVar34 * fVar39 - fVar33);
              fVar49 = fVar20 * (fVar34 * fVar29 - fVar32 * fVar28);
              fVar20 = (float)((uint)((_DAT_146af5750 - (fVar26 * fVar34 + fVar39 * fVar32)) *
                                     fVar20) & _DAT_146af5760);
              fVar25 = (float)((uint)((fRam0000000146af5754 - (fVar26 * fVar34 + fVar37)) * fVar25)
                              & uRam0000000146af5764);
              fVar28 = (float)((uint)((fRam0000000146af5758 - (fVar39 * fVar32 + fVar37)) * fVar27)
                              & uRam0000000146af5768);
              fVar32 = (float)((uint)((fRam0000000146af575c - (fVar37 + fVar37)) * fVar30) &
                              uRam0000000146af576c);
              fVar26 = fVar43 + fVar43;
              fVar29 = fVar47 + fVar47;
              fVar33 = fVar21 * (fVar21 + fVar21);
              fVar39 = fVar51 * (fVar21 + fVar21);
              fVar52 = (fVar51 * fVar29 + fVar21 * fVar26) * fVar31;
              fVar53 = (fVar39 + fVar43 * fVar29) * fVar38;
              fVar54 = (fVar51 * fVar26 + fVar21 * fVar29) * fVar42;
              fVar34 = fVar38 * (fVar21 * fVar26 - fVar51 * fVar29);
              fVar37 = fVar42 * (fVar43 * fVar29 - fVar39);
              fVar51 = fVar31 * (fVar21 * fVar29 - fVar51 * fVar26);
              fVar21 = (float)((uint)((_DAT_146af5750 - (fVar47 * fVar29 + fVar43 * fVar26)) *
                                     fVar31) & _DAT_146af5760);
              fVar27 = (float)((uint)((fRam0000000146af5754 - (fVar47 * fVar29 + fVar33)) * fVar38)
                              & uRam0000000146af5764);
              fVar30 = (float)((uint)((fRam0000000146af5758 - (fVar43 * fVar26 + fVar33)) * fVar42)
                              & uRam0000000146af5768);
              fVar31 = (float)((uint)((fRam0000000146af575c - (fVar33 + fVar33)) * auVar23._12_4_) &
                              uRam0000000146af576c);
              fVar26 = pfVar12[0xd];
              fVar29 = pfVar12[0xe];
              fVar39 = pfVar12[0xf];
              local_1a8 = fVar52 * fVar40 + fVar21 * fVar20 + fVar51 * fVar57 + fVar31 * fVar44;
              fStack_1a4 = fVar52 * fVar25 + fVar21 * fVar55 + fVar51 * fVar45 + fVar31 * fVar48;
              fStack_1a0 = fVar52 * fVar56 + fVar21 * fVar49 + fVar51 * fVar28 + fVar31 * fVar50;
              fStack_19c = fVar52 * fVar32 + fVar21 * fVar32 + fVar51 * fVar32 +
                           fVar31 * fRam0000000146af575c;
              local_198 = fVar27 * fVar40 + fVar34 * fVar20 + fVar53 * fVar57 + fVar31 * fVar44;
              fStack_194 = fVar27 * fVar25 + fVar34 * fVar55 + fVar53 * fVar45 + fVar31 * fVar48;
              fStack_190 = fVar27 * fVar56 + fVar34 * fVar49 + fVar53 * fVar28 + fVar31 * fVar50;
              fStack_18c = fVar27 * fVar32 + fVar34 * fVar32 + fVar53 * fVar32 +
                           fVar31 * fRam0000000146af575c;
              local_188 = fVar37 * fVar40 + fVar54 * fVar20 + fVar30 * fVar57 + fVar31 * fVar44;
              fStack_184 = fVar37 * fVar25 + fVar54 * fVar55 + fVar30 * fVar45 + fVar31 * fVar48;
              fStack_180 = fVar37 * fVar56 + fVar54 * fVar49 + fVar30 * fVar28 + fVar31 * fVar50;
              fStack_17c = fVar37 * fVar32 + fVar54 * fVar32 + fVar30 * fVar32 +
                           fVar31 * fRam0000000146af575c;
              local_178 = fVar29 * fVar40 + fVar26 * fVar20 + fVar39 * fVar57 +
                          fRam0000000146af575c * fVar44;
              fStack_174 = fVar29 * fVar25 + fVar26 * fVar55 + fVar39 * fVar45 +
                           fRam0000000146af575c * fVar48;
              fStack_170 = fVar29 * fVar56 + fVar26 * fVar49 + fVar39 * fVar28 +
                           fRam0000000146af575c * fVar50;
              fStack_16c = fVar29 * fVar32 + fVar26 * fVar32 + fVar39 * fVar32 +
                           fRam0000000146af575c * fRam0000000146af575c;
              FMatrix::RemoveScaling(&local_1a8);
              fVar58 = (float)(-(uint)(fVar41 <= fVar64) & (_DAT_146af5830 ^ (uint)fVar58) ^
                              _DAT_146af5830);
              fVar59 = (float)(-(uint)(fVar35 <= fVar65) & (uRam0000000146af5834 ^ (uint)fVar59) ^
                              uRam0000000146af5834);
              fVar60 = (float)(-(uint)(fVar46 <= fVar66) & (uRam0000000146af5838 ^ (uint)fVar60) ^
                              uRam0000000146af5838);
              local_1a8 = local_1a8 * fVar58;
              fStack_1a4 = fStack_1a4 * fVar58;
              fStack_1a0 = fStack_1a0 * fVar58;
              fStack_194 = fStack_194 * fVar59;
              fStack_190 = fStack_190 * fVar59;
              local_198 = local_198 * fVar59;
              fStack_184 = fStack_184 * fVar60;
              fStack_180 = fStack_180 * fVar60;
              local_188 = local_188 * fVar60;
              uVar8 = FQuat::FQuat(&local_158,&local_1a8);
              local_1b8 = 0x322bcc77;
              auVar22._0_4_ = local_158 * local_158 + fStack_150 * fStack_150;
              auVar22._4_4_ = fStack_154 * fStack_154 + fStack_14c * fStack_14c;
              auVar22._8_4_ = fStack_150 * fStack_150 + local_158 * local_158;
              auVar22._12_4_ = fStack_14c * fStack_14c + fStack_154 * fStack_154;
              fVar41 = auVar22._4_4_ + auVar22._0_4_;
              fVar46 = auVar22._8_4_ + auVar22._4_4_;
              fVar26 = auVar22._12_4_ + auVar22._8_4_;
              fVar29 = auVar22._0_4_ + auVar22._12_4_;
              auVar23._4_4_ = fVar46;
              auVar23._0_4_ = fVar41;
              auVar23._8_4_ = fVar26;
              auVar23._12_4_ = fVar29;
              auVar23 = rsqrtps(auVar22,auVar23);
              fVar58 = auVar23._0_4_;
              fVar59 = auVar23._4_4_;
              fVar60 = auVar23._8_4_;
              fVar35 = auVar23._12_4_;
              fVar58 = (fVar36 - fVar58 * fVar58 * fVar41 * fVar36) * fVar58 + fVar58;
              fVar59 = (fVar61 - fVar59 * fVar59 * fVar46 * fVar61) * fVar59 + fVar59;
              fVar60 = (fVar62 - fVar60 * fVar60 * fVar26 * fVar62) * fVar60 + fVar60;
              fVar35 = (fVar63 - fVar35 * fVar35 * fVar29 * fVar63) * fVar35 + fVar35;
              fVar21 = 0.0;
              fVar41 = (float)(((uint)(((fVar36 - fVar58 * fVar58 * fVar41 * fVar36) * fVar58 +
                                       fVar58) * local_158) ^ _DAT_146af5810) &
                               -(uint)(1e-08 <= fVar41) ^ _DAT_146af5810);
              fVar61 = (float)(((uint)(((fVar61 - fVar59 * fVar59 * fVar46 * fVar61) * fVar59 +
                                       fVar59) * fStack_154) ^ uRam0000000146af5814) &
                               -(uint)(1e-08 <= fVar46) ^ uRam0000000146af5814);
              fVar62 = (float)(((uint)(((fVar62 - fVar60 * fVar60 * fVar26 * fVar62) * fVar60 +
                                       fVar60) * fStack_150) ^ uRam0000000146af5818) &
                               -(uint)(1e-08 <= fVar26) ^ uRam0000000146af5818);
              fVar63 = (float)(((uint)(((fVar63 - fVar35 * fVar35 * fVar29 * fVar63) * fVar35 +
                                       fVar35) * fStack_14c) ^ uRam0000000146af581c) &
                               -(uint)(1e-08 <= fVar29) ^ uRam0000000146af581c);
              fVar44 = local_178;
              fVar48 = fStack_174;
              fVar50 = fStack_170;
              local_158 = fVar41;
              fStack_154 = fVar61;
              fStack_150 = fVar62;
              fStack_14c = fVar63;
            }
            fVar25 = fRam0000000146af5758;
            fVar20 = fRam0000000146af5754;
            fVar39 = _DAT_146af5750;
            auVar23 = *(undefined1 (*) [16])(param_5 + 8);
            fVar58 = auVar23._0_4_;
            fVar59 = auVar23._4_4_;
            fVar60 = auVar23._8_4_;
            fVar36 = auVar23._12_4_;
            fVar35 = *param_5;
            fVar46 = param_5[1];
            fVar26 = param_5[2];
            fVar29 = param_5[3];
            local_118 = 0.0;
            fStack_114 = 0.0;
            fStack_110 = 0.0;
            fStack_10c = fRam0000000146af575c;
            local_f8 = (float)((uint)_DAT_146af5750 & _DAT_146af5760);
            fStack_f4 = (float)((uint)fRam0000000146af5754 & uRam0000000146af5764);
            fStack_f0 = (float)((uint)fRam0000000146af5758 & uRam0000000146af5768);
            fStack_ec = (float)((uint)fRam0000000146af575c & uRam0000000146af576c);
            auVar18._4_4_ = fVar65;
            auVar18._0_4_ = fVar64;
            auVar18._8_4_ = fVar66;
            auVar18._12_4_ = fVar67;
            _local_108 = ZEXT816(0);
            auVar23 = minps(auVar18,auVar23);
            auVar19._4_4_ = -(uint)(auVar23._4_4_ < fRam0000000146af5844);
            auVar19._0_4_ = -(uint)(auVar23._0_4_ < _DAT_146af5840);
            auVar19._8_4_ = -(uint)(auVar23._8_4_ < fRam0000000146af5848);
            auVar19._12_4_ = -(uint)(auVar23._12_4_ < fRam0000000146af584c);
            iVar7 = movmskps(uVar8,auVar19);
            local_148 = _DAT_146af5840;
            fStack_144 = fRam0000000146af5844;
            fStack_140 = fRam0000000146af5848;
            fStack_13c = fRam0000000146af584c;
            if (iVar7 == 0) {
              fVar44 = fVar58 * fVar44;
              fVar48 = fVar59 * fVar48;
              fVar50 = fVar60 * fVar50;
              fVar21 = fVar36 * fVar21;
              local_118 = fVar63 * fVar35 * _DAT_146af5800 + fVar29 * fVar41 +
                          fVar62 * fVar46 * _DAT_146af57f0 + fVar61 * fVar26 * _DAT_146af57e0;
              fStack_114 = fVar62 * fVar35 * fRam0000000146af5804 + fVar29 * fVar61 +
                           fVar63 * fVar46 * fRam0000000146af57f4 +
                           fVar41 * fVar26 * fRam0000000146af57e4;
              fStack_110 = fVar61 * fVar35 * fRam0000000146af5808 + fVar29 * fVar62 +
                           fVar41 * fVar46 * fRam0000000146af57f8 +
                           fVar63 * fVar26 * fRam0000000146af57e8;
              fStack_10c = fVar41 * fVar35 * fRam0000000146af580c + fVar29 * fVar63 +
                           fVar61 * fVar46 * fRam0000000146af57fc +
                           fVar62 * fVar26 * fRam0000000146af57ec;
              fVar61 = fVar50 * fVar46 - fVar48 * fVar26;
              fVar62 = fVar44 * fVar26 - fVar50 * fVar35;
              fVar63 = fVar48 * fVar35 - fVar44 * fVar46;
              fVar41 = fVar21 * fVar29 - fVar21 * fVar29;
              fVar61 = fVar61 + fVar61;
              fVar62 = fVar62 + fVar62;
              fVar63 = fVar63 + fVar63;
              fVar41 = fVar41 + fVar41;
              local_108._4_4_ =
                   (fVar61 * fVar26 - fVar63 * fVar35) + fVar29 * fVar62 + fVar48 + param_5[5];
              local_108._0_4_ =
                   (fVar63 * fVar46 - fVar62 * fVar26) + fVar29 * fVar61 + fVar44 + param_5[4];
              fStack_100 = (fVar62 * fVar35 - fVar61 * fVar46) + fVar29 * fVar63 + fVar50 +
                           param_5[6];
              fStack_fc = (fVar41 * fVar29 - fVar41 * fVar29) + fVar29 * fVar41 + fVar21 +
                          param_5[7];
            }
            else {
              fVar27 = fVar46 + fVar46;
              fVar30 = fVar26 + fVar26;
              fVar28 = (fVar35 + fVar35) * fVar35;
              fVar21 = (fVar35 + fVar35) * fVar29;
              fVar45 = (fVar30 * fVar29 + fVar27 * fVar35) * fVar58;
              fVar49 = (fVar21 + fVar30 * fVar46) * fVar59;
              fVar52 = (fVar27 * fVar29 + fVar30 * fVar35) * fVar60;
              fVar42 = fVar59 * (fVar27 * fVar35 - fVar30 * fVar29);
              fVar47 = fVar60 * (fVar30 * fVar46 - fVar21);
              fVar32 = fVar58 * (fVar30 * fVar35 - fVar27 * fVar29);
              fVar29 = (float)((uint)((_DAT_146af5750 - (fVar30 * fVar26 + fVar27 * fVar46)) *
                                     fVar58) & _DAT_146af5760);
              fVar21 = (float)((uint)((fRam0000000146af5754 - (fVar30 * fVar26 + fVar28)) * fVar59)
                              & uRam0000000146af5764);
              fVar30 = (float)((uint)((fRam0000000146af5758 - (fVar27 * fVar46 + fVar28)) * fVar60)
                              & uRam0000000146af5768);
              fVar31 = (float)((uint)((fRam0000000146af575c - (fVar28 + fVar28)) * fVar36) &
                              uRam0000000146af576c);
              fVar35 = param_5[4];
              fVar46 = param_5[5];
              fVar26 = param_5[6];
              fVar27 = fVar61 + fVar61;
              fVar28 = fVar62 + fVar62;
              fVar38 = fVar41 * (fVar41 + fVar41);
              fVar51 = fVar63 * (fVar41 + fVar41);
              fVar34 = (fVar63 * fVar28 + fVar41 * fVar27) * fVar64;
              fVar37 = (fVar51 + fVar61 * fVar28) * fVar65;
              fVar40 = (fVar63 * fVar27 + fVar41 * fVar28) * fVar66;
              fVar43 = fVar65 * (fVar41 * fVar27 - fVar63 * fVar28);
              fVar51 = fVar66 * (fVar61 * fVar28 - fVar51);
              fVar33 = fVar64 * (fVar41 * fVar28 - fVar63 * fVar27);
              fVar63 = (float)((uint)((_DAT_146af5750 - (fVar62 * fVar28 + fVar61 * fVar27)) *
                                     fVar64) & _DAT_146af5760);
              fVar62 = (float)((uint)((fRam0000000146af5754 - (fVar62 * fVar28 + fVar38)) * fVar65)
                              & uRam0000000146af5764);
              fVar61 = (float)((uint)((fRam0000000146af5758 - (fVar61 * fVar27 + fVar38)) * fVar66)
                              & uRam0000000146af5768);
              fVar41 = (float)((uint)((fRam0000000146af575c - (fVar38 + fVar38)) * fVar67) &
                              uRam0000000146af576c);
              local_1a8 = fVar34 * fVar42 + fVar63 * fVar29 + fVar33 * fVar52 + fVar41 * fVar35;
              fStack_1a4 = fVar34 * fVar21 + fVar63 * fVar45 + fVar33 * fVar47 + fVar41 * fVar46;
              fStack_1a0 = fVar34 * fVar49 + fVar63 * fVar32 + fVar33 * fVar30 + fVar41 * fVar26;
              fStack_19c = fVar34 * fVar31 + fVar63 * fVar31 + fVar33 * fVar31 +
                           fVar41 * fRam0000000146af575c;
              local_198 = fVar62 * fVar42 + fVar43 * fVar29 + fVar37 * fVar52 + fVar41 * fVar35;
              fStack_194 = fVar62 * fVar21 + fVar43 * fVar45 + fVar37 * fVar47 + fVar41 * fVar46;
              fStack_190 = fVar62 * fVar49 + fVar43 * fVar32 + fVar37 * fVar30 + fVar41 * fVar26;
              fStack_18c = fVar62 * fVar31 + fVar43 * fVar31 + fVar37 * fVar31 +
                           fVar41 * fRam0000000146af575c;
              local_188 = fVar51 * fVar42 + fVar40 * fVar29 + fVar61 * fVar52 + fVar41 * fVar35;
              fStack_184 = fVar51 * fVar21 + fVar40 * fVar45 + fVar61 * fVar47 + fVar41 * fVar46;
              fStack_180 = fVar51 * fVar49 + fVar40 * fVar32 + fVar61 * fVar30 + fVar41 * fVar26;
              fStack_17c = fVar51 * fVar31 + fVar40 * fVar31 + fVar61 * fVar31 +
                           fVar41 * fRam0000000146af575c;
              local_178 = fVar48 * fVar42 + fVar44 * fVar29 + fVar50 * fVar52 +
                          fRam0000000146af575c * fVar35;
              fStack_174 = fVar48 * fVar21 + fVar44 * fVar45 + fVar50 * fVar47 +
                           fRam0000000146af575c * fVar46;
              fStack_170 = fVar48 * fVar49 + fVar44 * fVar32 + fVar50 * fVar30 +
                           fRam0000000146af575c * fVar26;
              fStack_16c = fVar48 * fVar31 + fVar44 * fVar31 + fVar50 * fVar31 +
                           fRam0000000146af575c * fRam0000000146af575c;
              FMatrix::RemoveScaling(&local_1a8);
              fVar61 = (float)(-(uint)(local_148 <= fVar58 * fVar64) &
                               (_DAT_146af5830 ^ (uint)fVar39) ^ _DAT_146af5830);
              fVar62 = (float)(-(uint)(fStack_144 <= fVar59 * fVar65) &
                               (uRam0000000146af5834 ^ (uint)fVar20) ^ uRam0000000146af5834);
              fVar63 = (float)(-(uint)(fStack_140 <= fVar60 * fVar66) &
                               (uRam0000000146af5838 ^ (uint)fVar25) ^ uRam0000000146af5838);
              local_1a8 = local_1a8 * fVar61;
              fStack_1a4 = fStack_1a4 * fVar61;
              fStack_1a0 = fStack_1a0 * fVar61;
              fStack_194 = fStack_194 * fVar62;
              fStack_190 = fStack_190 * fVar62;
              local_198 = local_198 * fVar62;
              fStack_184 = fStack_184 * fVar63;
              fStack_180 = fStack_180 * fVar63;
              local_188 = local_188 * fVar63;
              FQuat::FQuat(&local_138,&local_1a8);
              local_1b8 = 0x322bcc77;
              auVar24._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
              auVar24._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
              auVar24._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
              auVar24._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
              fVar35 = auVar24._4_4_ + auVar24._0_4_;
              fVar46 = auVar24._8_4_ + auVar24._4_4_;
              fVar26 = auVar24._12_4_ + auVar24._8_4_;
              fVar29 = auVar24._0_4_ + auVar24._12_4_;
              auVar4._4_4_ = fVar46;
              auVar4._0_4_ = fVar35;
              auVar4._8_4_ = fVar26;
              auVar4._12_4_ = fVar29;
              auVar23 = rsqrtps(auVar24,auVar4);
              fVar61 = auVar23._0_4_;
              fVar62 = auVar23._4_4_;
              fVar63 = auVar23._8_4_;
              fVar41 = auVar23._12_4_;
              fVar61 = (local_128 - fVar61 * fVar61 * fVar35 * local_128) * fVar61 + fVar61;
              fVar62 = (fStack_124 - fVar62 * fVar62 * fVar46 * fStack_124) * fVar62 + fVar62;
              fVar63 = (fStack_120 - fVar63 * fVar63 * fVar26 * fStack_120) * fVar63 + fVar63;
              fVar41 = (fStack_11c - fVar41 * fVar41 * fVar29 * fStack_11c) * fVar41 + fVar41;
              local_108._4_4_ = fStack_174;
              local_108._0_4_ = local_178;
              fStack_100 = fStack_170;
              local_138 = (float)(((uint)(((local_128 - fVar61 * fVar61 * fVar35 * local_128) *
                                           fVar61 + fVar61) * local_138) ^ _DAT_146af5810) &
                                  -(uint)(1e-08 <= fVar35) ^ _DAT_146af5810);
              fStack_134 = (float)(((uint)(((fStack_124 - fVar62 * fVar62 * fVar46 * fStack_124) *
                                            fVar62 + fVar62) * fStack_134) ^ uRam0000000146af5814) &
                                   -(uint)(1e-08 <= fVar46) ^ uRam0000000146af5814);
              fStack_130 = (float)(((uint)(((fStack_120 - fVar63 * fVar63 * fVar26 * fStack_120) *
                                            fVar63 + fVar63) * fStack_130) ^ uRam0000000146af5818) &
                                   -(uint)(1e-08 <= fVar26) ^ uRam0000000146af5818);
              fStack_12c = (float)(((uint)(((fStack_11c - fVar41 * fVar41 * fVar29 * fStack_11c) *
                                            fVar41 + fVar41) * fStack_12c) ^ uRam0000000146af581c) &
                                   -(uint)(1e-08 <= fVar29) ^ uRam0000000146af581c);
              fStack_fc = 0.0;
              local_118 = local_138;
              fStack_114 = fStack_134;
              fStack_110 = fStack_130;
              fStack_10c = fStack_12c;
            }
            fStack_ec = fVar36 * fVar67;
            fStack_f0 = fVar60 * fVar66;
            fStack_f4 = fVar59 * fVar65;
            local_f8 = fVar58 * fVar64;
            local_1d0 = (longlong)param_3 + 0x2c;
            local_1c8 = param_6;
            local_1d8 = &local_118;
            bVar5 = FUN_14222d190(*plVar13,local_160,*(undefined1 *)((longlong)param_3 + 0x3c),
                                  local_168);
            bVar14 = bVar14 | bVar5;
          }
        }
      }
LAB_1424a63ca:
      plVar13 = plVar13 + 0xc;
      pfVar12 = pfVar12 + 0x18;
    } while (plVar13 != plVar15);
  }
  return bVar14;
}



// FUNCTION 1424a6460 FUN_1424a6460 body=784 status=ok
// SIG undefined FUN_1424a6460(void)

undefined1 FUN_1424a6460(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 local_res10;
  longlong *local_58;
  uint local_50;
  int local_4c;
  
  plVar6 = (longlong *)0x0;
  iVar10 = 0;
  plVar5 = *(longlong **)(param_1 + 0x130);
  local_58 = (longlong *)0x0;
  local_4c = 0;
  local_res10 = 0;
  plVar16 = (longlong *)((longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff);
  if (plVar5 + *(int *)(param_1 + 0x138) < plVar5) {
    plVar16 = plVar6;
  }
  plVar9 = plVar6;
  plVar11 = plVar6;
  if (plVar16 != (longlong *)0x0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (*(int *)((longlong)plVar1 + 0xc) == 7) {
        iVar10 = (int)plVar1[1];
        *(undefined4 *)((longlong)plVar1 + 0xc) = 8;
        if (iVar10 == 4) {
          lVar2 = *plVar1;
          iVar10 = (int)plVar1[6];
          lVar4 = plVar1[2];
          cVar3 = FUN_1424a40c0(lVar2);
          plVar6 = local_58;
          if (cVar3 != '\0') {
            FUN_1424b0140(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(lVar2 + 0x1a0) + 0x48) +
                           (longlong)iVar10 * 8),lVar4,1);
            FUN_1424a6770(*(longlong *)(lVar2 + 0x1a0),*(longlong *)(lVar2 + 0x1a0) + 0x70,iVar10);
            *(int *)(lVar2 + 0x128) = iVar10;
            plVar6 = local_58;
          }
        }
        else if (iVar10 - 1U < 3) {
          lVar2 = *plVar1;
          lVar4 = plVar1[2];
          cVar3 = FUN_1424a40c0(lVar2);
          plVar6 = local_58;
          if (cVar3 != '\0') {
            FUN_1424b0290(*(undefined8 *)(lVar2 + 0x1a0),iVar10,lVar4);
            plVar6 = local_58;
          }
        }
        iVar10 = (int)plVar11;
        *(undefined4 *)((longlong)plVar1 + 0xc) = 9;
        local_50 = iVar10 + 1;
        if (local_4c < (int)local_50) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,plVar11);
          plVar6 = local_58;
        }
        plVar11 = (longlong *)(ulonglong)local_50;
        plVar6[iVar10] = (longlong)plVar1;
      }
      iVar10 = (int)plVar11;
      plVar5 = plVar5 + 1;
      plVar9 = (longlong *)((longlong)plVar9 + 1);
    } while (plVar9 != plVar16);
  }
  uVar17 = 0;
  uVar12 = (ulonglong)((longlong)(plVar6 + iVar10) + (7 - (longlong)plVar6)) >> 3;
  if (plVar6 + iVar10 < plVar6) {
    uVar12 = uVar17;
  }
  plVar5 = plVar6;
  if (uVar12 != 0) {
    local_res10 = 1;
    do {
      uVar7 = 0;
      lVar4 = (longlong)*(int *)(param_1 + 0x138);
      lVar2 = *plVar6;
      if (*(int *)(param_1 + 0x138) != 0) {
        bVar18 = **(longlong **)(param_1 + 0x130) != lVar2;
        uVar13 = uVar7;
        uVar15 = uVar7;
        do {
          iVar10 = (int)uVar13;
          uVar7 = uVar7 + 1;
          uVar13 = (ulonglong)(iVar10 + 1);
          if ((longlong)uVar7 < lVar4) {
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0x130) + uVar7 * 8);
            do {
              if (bVar18 != (*plVar5 != lVar2)) break;
              uVar13 = (ulonglong)((int)uVar13 + 1);
              uVar7 = uVar7 + 1;
              plVar5 = plVar5 + 1;
            } while ((longlong)uVar7 < lVar4);
          }
          iVar8 = (int)uVar13 - iVar10;
          if (bVar18 != false) {
            iVar14 = (int)uVar15;
            if (iVar14 != iVar10) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar14 * 8),
                         (void *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar10 * 8),
                         (longlong)iVar8 << 3);
            }
            uVar15 = (ulonglong)(uint)(iVar14 + iVar8);
          }
          bVar18 = (bool)(bVar18 ^ 1);
        } while ((longlong)uVar7 < lVar4);
        *(int *)(param_1 + 0x138) = (int)uVar15;
      }
      if (lVar2 != 0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x28);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x20);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x18);
        FMemory::operator_delete(lVar2,0x40);
      }
      plVar6 = plVar6 + 1;
      uVar17 = uVar17 + 1;
      plVar5 = local_58;
    } while (uVar17 != uVar12);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return local_res10;
}



// FUNCTION 1424a6770 FUN_1424a6770 body=333 status=ok
// SIG undefined FUN_1424a6770(void)

void FUN_1424a6770(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_res20;
  int local_res24;
  
  if (param_3 == -1) {
    iVar7 = *(int *)(param_1 + 0x10);
    iVar6 = 0;
    iVar5 = *(int *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar5 != iVar7) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2);
      iVar5 = *(int *)((longlong)param_2 + 0xc);
      iVar6 = (int)param_2[1];
    }
    iVar7 = *(int *)(param_1 + 0x10);
    iVar4 = iVar6 + iVar7;
    *(int *)(param_2 + 1) = iVar4;
    if (iVar5 < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 + *param_2),0,(longlong)iVar7);
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar5 = *(int *)(param_1 + 8);
      do {
        iVar6 = 0;
        local_res24 = iVar7;
        if (0 < iVar5) {
          do {
            lVar1 = *param_2;
            iVar5 = iVar5 * iVar7 + iVar6;
            local_res20 = iVar6;
            uVar3 = FUN_1424a2120(param_1,&local_res20);
            iVar6 = iVar6 + 1;
            *(undefined1 *)(iVar5 + lVar1) = uVar3;
            iVar5 = *(int *)(param_1 + 8);
          } while (iVar6 < iVar5);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0xc));
      return;
    }
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)param_3 * 8);
    iVar7 = *(int *)(lVar1 + 0x24);
    if (iVar7 < *(int *)(lVar1 + 0x2c)) {
      iVar5 = *(int *)(lVar1 + 0x28);
      do {
        iVar6 = *(int *)(lVar1 + 0x20);
        local_res24 = iVar7;
        if (iVar6 < iVar5) {
          do {
            lVar2 = *param_2;
            iVar5 = *(int *)(param_1 + 8) * iVar7 + iVar6;
            local_res20 = iVar6;
            uVar3 = FUN_1424a2120(param_1,&local_res20);
            iVar6 = iVar6 + 1;
            *(undefined1 *)(iVar5 + lVar2) = uVar3;
            iVar5 = *(int *)(lVar1 + 0x28);
          } while (iVar6 < iVar5);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar1 + 0x2c));
    }
  }
  return;
}



// FUNCTION 1424a68c0 FUN_1424a68c0 body=567 status=ok
// SIG undefined FUN_1424a68c0(void)

void FUN_1424a68c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res10;
  longlong *local_res18 [2];
  DWORD local_e8;
  int iStack_e4;
  int *local_e0;
  undefined **local_d8 [18];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    lVar3 = FName::ToString(plVar1,&local_e8);
    iVar5 = *(int *)(lVar3 + 8) + -1;
    if (*(int *)(lVar3 + 8) == 0) {
      iVar5 = 0;
    }
    if (CONCAT44(iStack_e4,local_e8) != 0) {
      FMemory::Free();
    }
    if (0 < iVar5) {
      lVar3 = *plVar1;
      if (*(int *)(param_2 + 0x30) != *(int *)(param_2 + 0x5c)) {
        lVar4 = *(longlong *)(param_2 + 0x68);
        if (*(longlong *)(param_2 + 0x68) == 0) {
          lVar4 = param_2 + 0x60;
        }
        iVar5 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                 (longlong)*(int *)(param_2 + 0x70) - 1U) * 4);
        if (iVar5 != -1) {
          do {
            plVar6 = (longlong *)((longlong)iVar5 * 0x40 + *(longlong *)(param_2 + 0x28));
            if (*plVar6 == lVar3) {
              if ((iVar5 != -1) && (plVar6 != (longlong *)0x0)) goto LAB_1424a69b7;
              break;
            }
            iVar5 = (int)plVar6[7];
          } while (iVar5 != -1);
        }
      }
      local_res18[0] = plVar1;
      FUN_140d1d100(param_2 + 0x28,&local_res10,local_res18,0);
      plVar6 = (longlong *)
               ((longlong)(int)local_res10.s.LowPart * 0x40 + *(longlong *)(param_2 + 0x28));
LAB_1424a69b7:
      plVar6[1] = *plVar1;
      *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)((longlong)plVar6 + 0x14) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x34);
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x2c);
      *(int *)(plVar6 + 4) = (int)plVar6[4] + 1;
      *(undefined4 *)(plVar6 + 3) = uVar2;
      *(undefined1 *)((longlong)plVar6 + 0x1c) =
           *(undefined1 *)(*(longlong *)(param_1 + 0x1a0) + 0x6c);
      QueryPerformanceCounter(&local_res10);
      local_e8 = local_res10.s.LowPart;
      local_e0 = &iStack_e4;
      iStack_e4 = 0;
      *(undefined4 *)(plVar6 + 6) = 0;
      if (*(int *)((longlong)plVar6 + 0x34) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar6 + 5,0);
      }
      local_res10.QuadPart = 0;
      FArchive::FArchive(local_d8);
      local_48 = 0;
      local_d8[0] = &PTR_FUN_143f4a100;
      local_38 = 0;
      local_40 = plVar6 + 5;
      FArchive::SetIsSaving(local_d8,1);
      FArchive::SetIsPersistent(local_d8,0);
      FUN_1424ac570(param_1,local_d8);
      QueryPerformanceCounter(&local_res10);
      if (local_e0 != (int *)0x0) {
        *local_e0 = *local_e0 + (local_res10.s.LowPart - local_e8);
      }
      *(int *)(param_1 + 0xa4) = (int)plVar6[6];
      local_e8 = local_res10.s.LowPart;
      FArchive::~FArchive(local_d8);
      QueryPerformanceCounter(&local_res10);
      *(double *)(param_1 + 0x108) = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
    }
  }
  return;
}



// FUNCTION 1424a6b00 FUN_1424a6b00 body=29 status=ok
// SIG undefined FUN_1424a6b00(void)

void FUN_1424a6b00(undefined8 param_1)

{
  FUN_1417931d0();
  FUN_1424a4150(param_1,1);
  return;
}



// FUNCTION 1424a6b20 thunk_FUN_14254bfa0 body=5 status=ok
// SIG undefined thunk_FUN_14254bfa0(void)

void thunk_FUN_14254bfa0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong alStack_18 [2];
  
  UObject::PostLoad();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  if (*(int *)(lVar2 + 0x708) != 3) {
    lVar2 = UObjectBaseUtility::GetOutermost(param_1);
    if (((*(uint *)(lVar2 + 0x50) >> 0x14 & 1) == 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      ULevelStreaming::GetWorldAssetPackageName(param_1,alStack_18);
      FUN_1416f0740(alStack_18,0,0,1);
      if (alStack_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1424a6b30 FUN_1424a6b30 body=291 status=ok
// SIG undefined FUN_1424a6b30(void)

void FUN_1424a6b30(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  UObject::PostLoad();
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x348) == 0) {
      *(longlong *)(lVar4 + 0x348) = param_1;
      lVar4 = *(longlong *)(param_1 + 0x30);
    }
    if (lVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x40);
      lVar4 = *(longlong *)(lVar4 + 0x40);
      if ((*(int *)(lVar4 + 0x20) == iVar3) && (iVar7 = iVar3 + -1, -1 < iVar7)) {
        lVar9 = (longlong)iVar7 * 0x1c;
        lVar6 = (longlong)iVar7 << 4;
        lVar8 = (longlong)iVar3 << 4;
        do {
          lVar1 = *(longlong *)(lVar4 + 0x18);
          bVar2 = FUN_142433a10();
          if (*(char *)(lVar9 + (ulonglong)bVar2 * 8 + lVar1) == '\0') {
            if (*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x38)) != 0) {
              FMemory::Free();
            }
            iVar3 = *(int *)(param_1 + 0x40);
            iVar5 = (iVar3 - iVar7) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar6 + *(longlong *)(param_1 + 0x38)),
                         (void *)(lVar8 + *(longlong *)(param_1 + 0x38)),(longlong)iVar5 << 4);
              iVar3 = *(int *)(param_1 + 0x40);
            }
            *(int *)(param_1 + 0x40) = iVar3 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x38);
          }
          lVar8 = lVar8 + -0x10;
          lVar6 = lVar6 + -0x10;
          lVar9 = lVar9 + -0x1c;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
  }
  return;
}



// FUNCTION 1424a6c80 FUN_1424a6c80 body=977 status=ok
// SIG undefined FUN_1424a6c80(void)

undefined4 FUN_1424a6c80(longlong *param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_10;
  ushort local_e;
  
  if (((*(char *)((longlong)param_1 + 0x272) != '\0') && (param_1[8] == 0)) ||
     ((*(char *)((longlong)param_1 + 0x273) != '\0' && (param_1[0xe] == 0)))) {
LAB_1424a6e4e:
    *(undefined4 *)((longlong)param_1 + 0x27c) = 2;
    return 2;
  }
  if (*(char *)((longlong)param_1 + 0x274) != '\0') {
    plVar8 = (longlong *)param_1[0xf];
    if (plVar8 == (longlong *)0x0) goto LAB_1424a6e4e;
    if ((char)param_1[0x13] != '\0') {
      lVar5 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (cVar4 = (**(code **)(*plVar8 + 0x950))(plVar8), cVar4 != '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) goto LAB_1424a6e4e;
    }
  }
  if ((((*(char *)((longlong)param_1 + 0x275) != '\0') && (param_1[0x10] == 0)) ||
      ((*(char *)((longlong)param_1 + 0x276) != '\0' &&
       (cVar4 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x17), cVar4 == '\0')))) ||
     ((*(char *)((longlong)param_1 + 0x277) != '\0' &&
      (cVar4 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x19), cVar4 == '\0'))))
  goto LAB_1424a6e4e;
  if ((char)param_1[0x4f] != '\0') {
    if ((((int)param_1[0x1c] == 0) || ((longlong *)param_1[0x1b] == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))(), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1424a6e4e;
  }
  if ((*(float *)(param_2 + 0x8c8) <= *(float *)(param_1 + 0x46) &&
       *(float *)(param_1 + 0x46) != *(float *)(param_2 + 0x8c8)) ||
     (cVar4 = FUN_1424982f0(param_1,param_2), cVar4 == '\0')) {
LAB_1424a7032:
    *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
    return 0;
  }
  if ((*(char *)((longlong)param_1 + 0x271) == '\x03') && ((char)param_1[0x14] != '\0')) {
    if ((char)param_1[0x4f] != '\0') {
      if ((int)param_1[0x1c] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[0x1b];
      }
      (**(code **)(*plVar8 + 0x38))
                (plVar8,0,param_1 + 0x48,*(undefined4 *)((longlong)param_1 + 0x22c));
    }
    if (*(char *)((longlong)param_1 + 0x277) != '\0') {
      FUN_14249d2f0(param_1 + 0x19,0,*(undefined4 *)((longlong)param_1 + 0x22c));
    }
    goto LAB_1424a6e4e;
  }
  if ((param_3 == '\0') &&
     (*(float *)(param_2 + 0x8c8) <= *(float *)((longlong)param_1 + 0x234) &&
      *(float *)((longlong)param_1 + 0x234) != *(float *)(param_2 + 0x8c8))) goto LAB_1424a7032;
  if (*(char *)((longlong)param_1 + 0x69) != '\0') {
    FUN_142498970(param_1);
  }
  FActorSpawnParameters::FActorSpawnParameters(&local_38);
  plVar8 = (longlong *)0x0;
  local_28 = param_1[0xe];
  if ((longlong *)param_1[0xf] == (longlong *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = (**(code **)(*(longlong *)param_1[0xf] + 0x688))();
  }
  local_30 = param_1[0x10];
  local_10 = *(undefined1 *)((longlong)param_1 + 0xa2);
  local_38 = param_1[0x15];
  if (((char)param_1[0x16] == '\0') && ((int)param_1[0x3e] < 1)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 4;
  }
  local_e = local_e & 0xfffb | uVar7;
  plVar9 = plVar8;
  if (*param_1 != 0) {
    plVar6 = (longlong *)FUN_1428dfc70();
    for (plVar2 = (longlong *)*param_1;
        (plVar9 = plVar8, plVar2 != (longlong *)0x0 &&
        (plVar9 = (longlong *)*param_1, plVar2 != plVar6)); plVar2 = (longlong *)plVar2[6]) {
    }
  }
  lVar5 = FUN_142550d00(param_2,plVar9,param_1 + 0x48,&local_38);
  *(uint *)((longlong)param_1 + 0x27c) = 2 - (uint)(lVar5 != 0);
  FUN_142497c70(param_1 + 0x1d,lVar5);
  if ((char)param_1[0x4f] != '\0') {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x22c);
    if ((((int)param_1[0x1c] == 0) || ((longlong *)param_1[0x1b] == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))(), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if ((int)param_1[0x1c] != 0) {
        plVar8 = (longlong *)param_1[0x1b];
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,lVar5,param_1 + 0x48,uVar1);
    }
  }
  if (lVar5 == 0) {
    if (*(char *)((longlong)param_1 + 0x277) == '\0') goto LAB_1424a702a;
    plVar8 = param_1 + 0x19;
    lVar5 = 0;
  }
  else {
    if ((*(byte *)(lVar5 + 0x93) & 4) == 0) {
      FUN_14222b9f0(lVar5,param_1 + 0x48,1,0);
    }
    if (*(char *)((longlong)param_1 + 0x276) == '\0') goto LAB_1424a702a;
    plVar8 = param_1 + 0x17;
  }
  FUN_14249d340(plVar8,lVar5,*(undefined4 *)((longlong)param_1 + 0x22c));
LAB_1424a702a:
  return *(undefined4 *)((longlong)param_1 + 0x27c);
}



// FUNCTION 1424a7060 FUN_1424a7060 body=202 status=ok
// SIG undefined FUN_1424a7060(void)

void FUN_1424a7060(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar2 = FWeakObjectPtr::Get();
  lVar2 = *(longlong *)(lVar2 + 400);
  do {
    if (lVar2 == 0) {
LAB_1424a70ce:
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x108) + (longlong)param_2 * 0x14);
      lVar2 = FWeakObjectPtr::Get(puVar4);
      LOCK();
      *(undefined4 *)(lVar2 + 0x2c8) = 0xffffffff;
      UNLOCK();
      uVar3 = FWeakObjectPtr::Get(puVar4);
      FUN_14239b420(uVar3,puVar4[2],*(undefined1 *)(puVar4 + 3),0);
      FWeakObjectPtr::operator=(&local_res8,0);
      *puVar4 = local_res8;
      puVar4[1] = local_resc;
      return;
    }
    LOCK();
    iVar1 = *(int *)(lVar2 + 0x2c8);
    if (iVar1 == 0) {
      *(int *)(lVar2 + 0x2c8) = 0;
      iVar1 = 0;
    }
    UNLOCK();
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x110))) {
      FUN_1424a7060(param_1,iVar1);
      goto LAB_1424a70ce;
    }
    lVar2 = *(longlong *)(lVar2 + 400);
  } while( true );
}



// FUNCTION 1424a7130 FUN_1424a7130 body=235 status=ok
// SIG undefined FUN_1424a7130(void)

void FUN_1424a7130(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0xd8) == '\0') && (*(char *)(param_1 + 0x118) == '\0')) {
    if (*(int *)(param_2 + 8) != 0) {
      plVar3 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar3 = param_2 + 2;
      }
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 8))();
        (*(code *)*param_2)(uVar2);
        goto LAB_1424a71d6;
      }
    }
    (*(code *)*param_2)(0);
  }
  else {
    plVar3 = (longlong *)FUN_1424a2270();
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar1 * 0x50 + *plVar3,param_2);
  }
LAB_1424a71d6:
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424a7220 FUN_1424a7220 body=3315 status=ok
// SIG undefined FUN_1424a7220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1424a7220(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [12];
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  byte *pbVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  float fVar59;
  float fVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  float fVar64;
  byte local_198;
  undefined1 local_188 [4];
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 local_128;
  uint local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  fVar55 = *(float *)((longlong)param_3 + 0x54) - *(float *)(param_3 + 9);
  fVar60 = *(float *)(param_3 + 10) - *(float *)((longlong)param_3 + 0x44);
  fVar64 = *(float *)((longlong)param_3 + 0x4c) - *(float *)(param_3 + 8);
  local_174 = 3.4e+38;
  local_198 = 0;
  if (fVar64 == 0.0) {
    local_170 = 3.4e+38;
  }
  else {
    local_170 = 1.0 / fVar64;
  }
  if (fVar60 == 0.0) {
    local_16c = 3.4e+38;
  }
  else {
    local_16c = 1.0 / fVar60;
  }
  if (fVar55 != 0.0) {
    local_174 = 1.0 / fVar55;
  }
  local_120 = *(uint *)(param_2 + 1);
  uVar16 = (ulonglong)(int)local_120;
  pbVar12 = (byte *)*param_2;
  fVar43 = 1.1;
  local_178 = 1.1;
  lVar22 = uVar16 * 0x90;
  pbVar1 = pbVar12 + lVar22;
  for (; pbVar12 != pbVar1; pbVar12 = pbVar12 + 0x90) {
    if (((*pbVar12 & 1) != 0) && (fVar39 = *(float *)(pbVar12 + 0xc), fVar39 < fVar43)) {
      fVar43 = fVar39;
      local_178 = fVar39;
    }
  }
  plVar20 = *(longlong **)(*param_3 + 8);
  plVar13 = plVar20 + (longlong)*(int *)(*param_3 + 0x10) * 0xc;
  local_184 = fVar55;
  local_180 = fVar60;
  local_17c = fVar64;
  if (plVar20 != plVar13) {
    pfVar21 = (float *)((longlong)plVar20 + 0x14);
    uVar15 = _DAT_146af5760;
    uVar61 = uRam0000000146af5764;
    uVar62 = uRam0000000146af5768;
    uVar63 = uRam0000000146af576c;
    do {
      fVar41 = fRam0000000146af5758;
      fVar39 = fRam0000000146af5754;
      fVar43 = _DAT_146af5750;
      lVar19 = *plVar20;
      if ((lVar19 != 0) && ((*(byte *)(lVar19 + 0x94) & 2) == 0)) {
        uVar18 = *(uint *)(lVar19 + 0xc);
        if ((int)uVar18 < (int)DAT_1469e91c4) {
          uVar14 = uVar18 & 0xffff;
          uVar7 = uVar18;
          if ((int)uVar18 < 0) {
            uVar7 = uVar18 + 0xffff;
            uVar14 = uVar14 - 0x10000;
          }
          lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)uVar14 * 0x18;
        }
        else {
          lVar11 = 0;
        }
        if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) {
          puVar17 = *(uint **)(param_4 + 0x68);
          if (*(uint **)(param_4 + 0x68) == (uint *)0x0) {
            puVar17 = (uint *)(param_4 + 0x58);
          }
          puVar2 = puVar17 + *(int *)(param_4 + 0x70);
          for (; puVar17 != puVar2; puVar17 = puVar17 + 1) {
            if (*puVar17 == uVar18) goto LAB_1424a7d8f;
          }
          fVar37 = *(float *)(param_3 + 8);
          bVar5 = false;
          fVar44 = pfVar21[-3];
          if (fVar37 < fVar44) {
            bVar5 = true;
            if (*(float *)((longlong)param_3 + 0x4c) <= fVar44 &&
                fVar44 != *(float *)((longlong)param_3 + 0x4c)) goto LAB_1424a7d8f;
            fVar23 = (fVar44 - fVar37) * local_170;
          }
          else {
            fVar23 = *pfVar21;
            if (fVar37 <= fVar23) {
              fVar23 = 0.0;
            }
            else {
              bVar5 = true;
              if (fVar23 < *(float *)((longlong)param_3 + 0x4c)) goto LAB_1424a7d8f;
              fVar23 = (fVar23 - fVar37) * local_170;
            }
          }
          fVar27 = *(float *)((longlong)param_3 + 0x44);
          fVar28 = pfVar21[-2];
          if (fVar28 <= fVar27) {
            fVar33 = pfVar21[1];
            if (fVar27 <= fVar33) {
              fVar33 = 0.0;
            }
            else {
              bVar5 = true;
              if (fVar33 < *(float *)(param_3 + 10)) goto LAB_1424a7d8f;
              fVar33 = (fVar33 - fVar27) * local_16c;
            }
          }
          else {
            bVar5 = true;
            if (*(float *)(param_3 + 10) <= fVar28 && fVar28 != *(float *)(param_3 + 10))
            goto LAB_1424a7d8f;
            fVar33 = (fVar28 - fVar27) * local_16c;
          }
          fVar34 = *(float *)(param_3 + 9);
          fVar36 = pfVar21[-1];
          if (fVar34 < fVar36) {
            if (fVar36 < *(float *)((longlong)param_3 + 0x54) ||
                fVar36 == *(float *)((longlong)param_3 + 0x54)) {
              fVar26 = (fVar36 - fVar34) * local_174;
              goto LAB_1424a757b;
            }
          }
          else {
            fVar26 = pfVar21[2];
            if (fVar26 < fVar34) {
              if (fVar26 < *(float *)((longlong)param_3 + 0x54)) goto LAB_1424a7d8f;
              fVar26 = (fVar26 - fVar34) * local_174;
LAB_1424a757b:
              if (fVar23 <= fVar33) {
                fVar23 = fVar33;
              }
              if (fVar23 <= fVar26) {
                fVar23 = fVar26;
              }
              if ((0.0 <= fVar23) && (fVar23 <= 1.0)) {
                fVar37 = fVar64 * fVar23 + fVar37;
                fVar27 = fVar60 * fVar23 + fVar27;
                fVar34 = fVar55 * fVar23 + fVar34;
                if ((fVar44 - 0.1 < fVar37) &&
                   ((((fVar37 < *pfVar21 + 0.1 && (fVar28 - 0.1 < fVar27)) &&
                     (fVar27 < pfVar21[1] + 0.1)) &&
                    ((fVar36 - 0.1 < fVar34 && (fVar34 < pfVar21[2] + 0.1)))))) goto LAB_1424a7625;
              }
            }
            else {
              fVar26 = 0.0;
              if (bVar5) goto LAB_1424a757b;
LAB_1424a7625:
              lVar11 = *(longlong *)(lVar19 + 0x168);
              if (lVar11 == 0) {
                fVar37 = 0.0;
                fVar44 = 0.0;
                fVar23 = 0.0;
                fVar27 = 0.0;
                fVar60 = 0.0;
                fVar64 = 0.0;
                fVar55 = 0.0;
                fVar28 = (float)((uint)_DAT_146af5750 & uVar15);
                fVar33 = (float)((uint)fRam0000000146af5754 & uVar61);
                fVar34 = (float)((uint)fRam0000000146af5758 & uVar62);
                fVar36 = (float)((uint)fRam0000000146af575c & uVar63);
                fVar26 = fRam0000000146af575c;
              }
              else {
                fVar60 = *(float *)(lVar11 + 0x210);
                fVar64 = *(float *)(lVar11 + 0x214);
                fVar55 = *(float *)(lVar11 + 0x218);
                fVar37 = *(float *)(lVar11 + 0x220);
                fVar44 = *(float *)(lVar11 + 0x224);
                fVar23 = *(float *)(lVar11 + 0x228);
                fVar27 = *(float *)(lVar11 + 0x22c);
                fVar28 = *(float *)(lVar11 + 0x230);
                fVar33 = *(float *)(lVar11 + 0x234);
                fVar34 = *(float *)(lVar11 + 0x238);
                fVar36 = *(float *)(lVar11 + 0x23c);
                fVar26 = *(float *)(lVar11 + 0x21c);
              }
              auVar30 = *(undefined1 (*) [16])(pfVar21 + 0xf);
              auVar24._4_4_ = fVar33;
              auVar24._0_4_ = fVar28;
              auVar24._8_4_ = fVar34;
              auVar24._12_4_ = fVar36;
              auVar24 = minps(auVar30,auVar24);
              fVar56 = auVar30._0_4_ * fVar28;
              fVar57 = auVar30._4_4_ * fVar33;
              fVar58 = auVar30._8_4_ * fVar34;
              fVar59 = auVar30._12_4_ * fVar36;
              auVar30._4_4_ = -(uint)(auVar24._4_4_ < fRam0000000146af5844);
              auVar30._0_4_ = -(uint)(auVar24._0_4_ < _DAT_146af5840);
              auVar30._8_4_ = -(uint)(auVar24._8_4_ < fRam0000000146af5848);
              auVar30._12_4_ = -(uint)(auVar24._12_4_ < fRam0000000146af584c);
              iVar8 = movmskps((int)lVar11,auVar30);
              local_e8 = _DAT_146af5840;
              fStack_e4 = fRam0000000146af5844;
              fStack_e0 = fRam0000000146af5848;
              fStack_dc = fRam0000000146af584c;
              if (iVar8 == 0) {
                fVar43 = pfVar21[7];
                fVar39 = pfVar21[8];
                fVar41 = pfVar21[9];
                fVar32 = pfVar21[10];
                fVar28 = pfVar21[0xb] * fVar28;
                fVar33 = pfVar21[0xc] * fVar33;
                fVar34 = pfVar21[0xd] * fVar34;
                fVar36 = pfVar21[0xe] * fVar36;
                fVar35 = fVar32 * fVar60 * _DAT_146af5800 + fVar43 * fVar26 +
                         fVar41 * fVar64 * _DAT_146af57f0 + fVar39 * fVar55 * _DAT_146af57e0;
                fVar38 = fVar41 * fVar60 * fRam0000000146af5804 + fVar39 * fVar26 +
                         fVar32 * fVar64 * fRam0000000146af57f4 +
                         fVar43 * fVar55 * fRam0000000146af57e4;
                fVar46 = fVar39 * fVar60 * fRam0000000146af5808 + fVar41 * fVar26 +
                         fVar43 * fVar64 * fRam0000000146af57f8 +
                         fVar32 * fVar55 * fRam0000000146af57e8;
                fVar40 = fVar43 * fVar60 * fRam0000000146af580c + fVar32 * fVar26 +
                         fVar39 * fVar64 * fRam0000000146af57fc +
                         fVar41 * fVar55 * fRam0000000146af57ec;
                fVar43 = fVar34 * fVar64 - fVar33 * fVar55;
                fVar39 = fVar28 * fVar55 - fVar34 * fVar60;
                fVar41 = fVar33 * fVar60 - fVar28 * fVar64;
                fVar32 = fVar36 * fVar26 - fVar36 * fVar26;
                fVar43 = fVar43 + fVar43;
                fVar39 = fVar39 + fVar39;
                fVar41 = fVar41 + fVar41;
                fVar32 = fVar32 + fVar32;
                fVar37 = (fVar41 * fVar64 - fVar39 * fVar55) + fVar43 * fVar26 + fVar28 + fVar37;
                fVar44 = (fVar43 * fVar55 - fVar41 * fVar60) + fVar39 * fVar26 + fVar33 + fVar44;
                fVar23 = (fVar39 * fVar60 - fVar43 * fVar64) + fVar41 * fVar26 + fVar34 + fVar23;
                fVar27 = (fVar32 * fVar26 - fVar32 * fVar26) + fVar32 * fVar26 + fVar36 + fVar27;
              }
              else {
                fVar27 = fVar64 + fVar64;
                fVar32 = fVar55 + fVar55;
                fVar35 = fVar60 * (fVar60 + fVar60);
                fVar46 = fVar26 * (fVar60 + fVar60);
                fVar52 = (fVar26 * fVar32 + fVar60 * fVar27) * fVar28;
                fVar53 = (fVar46 + fVar64 * fVar32) * fVar33;
                fVar54 = (fVar26 * fVar27 + fVar60 * fVar32) * fVar34;
                fVar38 = fVar33 * (fVar60 * fVar27 - fVar26 * fVar32);
                fVar40 = fVar34 * (fVar64 * fVar32 - fVar46);
                fVar42 = fVar28 * (fVar60 * fVar32 - fVar26 * fVar27);
                fVar28 = (float)((uint)((_DAT_146af5750 - (fVar55 * fVar32 + fVar64 * fVar27)) *
                                       fVar28) & uVar15);
                fVar33 = (float)((uint)((fRam0000000146af5754 - (fVar55 * fVar32 + fVar35)) * fVar33
                                       ) & uVar61);
                fVar26 = (float)((uint)((fRam0000000146af5758 - (fVar64 * fVar27 + fVar35)) * fVar34
                                       ) & uVar62);
                fVar32 = (float)((uint)((fRam0000000146af575c - (fVar35 + fVar35)) * fVar36) &
                                uVar63);
                fVar55 = pfVar21[7];
                fVar60 = pfVar21[8];
                fVar64 = pfVar21[9];
                fVar27 = pfVar21[10];
                fVar36 = fVar60 + fVar60;
                fVar35 = fVar64 + fVar64;
                fVar46 = fVar55 * (fVar55 + fVar55);
                fVar34 = (fVar55 + fVar55) * fVar27;
                fVar49 = (fVar35 * fVar27 + fVar36 * fVar55) * pfVar21[0xf];
                fVar50 = (fVar34 + fVar35 * fVar60) * pfVar21[0x10];
                fVar51 = (fVar36 * fVar27 + fVar35 * fVar55) * pfVar21[0x11];
                fVar45 = pfVar21[0x10] * (fVar36 * fVar55 - fVar35 * fVar27);
                fVar47 = pfVar21[0x11] * (fVar35 * fVar60 - fVar34);
                fVar48 = pfVar21[0xf] * (fVar35 * fVar55 - fVar36 * fVar27);
                fVar27 = (float)((uint)((_DAT_146af5750 - (fVar64 * fVar35 + fVar60 * fVar36)) *
                                       pfVar21[0xf]) & uVar15);
                fVar34 = (float)((uint)((fRam0000000146af5754 - (fVar64 * fVar35 + fVar46)) *
                                       pfVar21[0x10]) & uVar61);
                fVar36 = (float)((uint)((fRam0000000146af5758 - (fVar60 * fVar36 + fVar46)) *
                                       pfVar21[0x11]) & uVar62);
                fVar35 = (float)((uint)((fRam0000000146af575c - (fVar46 + fVar46)) * pfVar21[0x12])
                                & uVar63);
                fVar55 = pfVar21[0xb];
                fVar60 = pfVar21[0xc];
                fVar64 = pfVar21[0xd];
                local_168._0_4_ =
                     fVar49 * fVar38 + fVar27 * fVar28 + fVar48 * fVar54 + fVar35 * fVar37;
                local_168._4_4_ =
                     fVar49 * fVar33 + fVar27 * fVar52 + fVar48 * fVar40 + fVar35 * fVar44;
                uStack_160._0_4_ =
                     fVar49 * fVar53 + fVar27 * fVar42 + fVar48 * fVar26 + fVar35 * fVar23;
                uStack_160._4_4_ =
                     fVar49 * fVar32 + fVar27 * fVar32 + fVar48 * fVar32 +
                     fVar35 * fRam0000000146af575c;
                local_158._4_4_ =
                     fVar34 * fVar33 + fVar45 * fVar52 + fVar50 * fVar40 + fVar35 * fVar44;
                local_158._0_4_ =
                     fVar34 * fVar38 + fVar45 * fVar28 + fVar50 * fVar54 + fVar35 * fVar37;
                uStack_150._0_4_ =
                     fVar34 * fVar53 + fVar45 * fVar42 + fVar50 * fVar26 + fVar35 * fVar23;
                uStack_150._4_4_ =
                     fVar34 * fVar32 + fVar45 * fVar32 + fVar50 * fVar32 +
                     fVar35 * fRam0000000146af575c;
                local_148 = fVar47 * fVar38 + fVar51 * fVar28 + fVar36 * fVar54 + fVar35 * fVar37;
                fStack_144 = fVar47 * fVar33 + fVar51 * fVar52 + fVar36 * fVar40 + fVar35 * fVar44;
                fStack_140 = fVar47 * fVar53 + fVar51 * fVar42 + fVar36 * fVar26 + fVar35 * fVar23;
                fStack_13c = fVar47 * fVar32 + fVar51 * fVar32 + fVar36 * fVar32 +
                             fVar35 * fRam0000000146af575c;
                local_138 = fVar60 * fVar38 + fVar55 * fVar28 + fVar64 * fVar54 +
                            fRam0000000146af575c * fVar37;
                fStack_134 = fVar60 * fVar33 + fVar55 * fVar52 + fVar64 * fVar40 +
                             fRam0000000146af575c * fVar44;
                fStack_130 = fVar60 * fVar53 + fVar55 * fVar42 + fVar64 * fVar26 +
                             fRam0000000146af575c * fVar23;
                fStack_12c = fVar60 * fVar32 + fVar55 * fVar32 + fVar64 * fVar32 +
                             fRam0000000146af575c * fRam0000000146af575c;
                FMatrix::RemoveScaling(&local_168);
                auVar30 = _local_158;
                fVar55 = (float)(-(uint)(local_e8 <= fVar56) & (_DAT_146af5830 ^ (uint)fVar43) ^
                                _DAT_146af5830);
                fVar64 = (float)(-(uint)(fStack_e4 <= fVar57) &
                                 (uRam0000000146af5834 ^ (uint)fVar39) ^ uRam0000000146af5834);
                fVar43 = (float)(-(uint)(fStack_e0 <= fVar58) &
                                 (uRam0000000146af5838 ^ (uint)fVar41) ^ uRam0000000146af5838);
                local_168 = CONCAT44(local_168._4_4_ * fVar55,(float)local_168 * fVar55);
                uStack_160 = CONCAT44(uStack_160._4_4_,(float)uStack_160 * fVar55);
                fVar55 = (float)uStack_150 * fVar64;
                fVar60 = (float)local_158._0_4_ * fVar64;
                auVar6._4_8_ = uStack_150;
                auVar6._0_4_ = (float)local_158._4_4_ * fVar64;
                local_158 = (undefined1  [8])(auVar6._0_8_ << 0x20);
                uStack_150._4_4_ = auVar30._12_4_;
                uStack_150._0_4_ = fVar55;
                fStack_144 = fStack_144 * fVar43;
                fStack_140 = fStack_140 * fVar43;
                local_148 = local_148 * fVar43;
                local_158._0_4_ = fVar60;
                FQuat::FQuat(&local_f8,&local_168);
                lVar19 = *plVar20;
                local_128 = 0x322bcc77;
                auVar29._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
                auVar29._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
                auVar29._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
                auVar29._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
                fVar39 = auVar29._4_4_ + auVar29._0_4_;
                fVar41 = auVar29._8_4_ + auVar29._4_4_;
                fVar37 = auVar29._12_4_ + auVar29._8_4_;
                fVar44 = auVar29._0_4_ + auVar29._12_4_;
                auVar3._4_4_ = fVar41;
                auVar3._0_4_ = fVar39;
                auVar3._8_4_ = fVar37;
                auVar3._12_4_ = fVar44;
                auVar30 = rsqrtps(auVar29,auVar3);
                fVar55 = auVar30._0_4_;
                fVar60 = auVar30._4_4_;
                fVar64 = auVar30._8_4_;
                fVar43 = auVar30._12_4_;
                fVar55 = (_DAT_146af5820 - fVar55 * fVar55 * fVar39 * _DAT_146af5820) * fVar55 +
                         fVar55;
                fVar60 = (fRam0000000146af5824 - fVar60 * fVar60 * fVar41 * fRam0000000146af5824) *
                         fVar60 + fVar60;
                fVar64 = (fRam0000000146af5828 - fVar64 * fVar64 * fVar37 * fRam0000000146af5828) *
                         fVar64 + fVar64;
                fVar43 = (fRam0000000146af582c - fVar43 * fVar43 * fVar44 * fRam0000000146af582c) *
                         fVar43 + fVar43;
                fVar35 = (float)(((uint)(((_DAT_146af5820 -
                                          fVar55 * fVar55 * fVar39 * _DAT_146af5820) * fVar55 +
                                         fVar55) * local_f8) ^ _DAT_146af5810) &
                                 -(uint)(1e-08 <= fVar39) ^ _DAT_146af5810);
                fVar38 = (float)(((uint)(((fRam0000000146af5824 -
                                          fVar60 * fVar60 * fVar41 * fRam0000000146af5824) * fVar60
                                         + fVar60) * fStack_f4) ^ uRam0000000146af5814) &
                                 -(uint)(1e-08 <= fVar41) ^ uRam0000000146af5814);
                fVar46 = (float)(((uint)(((fRam0000000146af5828 -
                                          fVar64 * fVar64 * fVar37 * fRam0000000146af5828) * fVar64
                                         + fVar64) * fStack_f0) ^ uRam0000000146af5818) &
                                 -(uint)(1e-08 <= fVar37) ^ uRam0000000146af5818);
                fVar40 = (float)(((uint)(((fRam0000000146af582c -
                                          fVar43 * fVar43 * fVar44 * fRam0000000146af582c) * fVar43
                                         + fVar43) * fStack_ec) ^ uRam0000000146af581c) &
                                 -(uint)(1e-08 <= fVar44) ^ uRam0000000146af581c);
                fVar27 = 0.0;
                fVar37 = local_138;
                fVar44 = fStack_134;
                fVar23 = fStack_130;
                local_f8 = fVar35;
                fStack_f4 = fVar38;
                fStack_f0 = fVar46;
                fStack_ec = fVar40;
              }
              iVar8 = (int)param_2[1];
              uVar16 = (ulonglong)iVar8;
              fVar43 = *(float *)(param_3 + 3) * fVar56;
              fVar39 = *(float *)((longlong)param_3 + 0x1c) * fVar57;
              fVar41 = *(float *)(param_3 + 4) * fVar58;
              fVar55 = fVar41 * fVar38 - fVar39 * fVar46;
              fVar60 = fVar43 * fVar46 - fVar41 * fVar35;
              fVar64 = fVar39 * fVar35 - fVar43 * fVar38;
              fVar55 = fVar55 + fVar55;
              fVar60 = fVar60 + fVar60;
              fVar64 = fVar64 + fVar64;
              local_108 = (fVar64 * fVar38 - fVar60 * fVar46) + fVar40 * fVar55 + fVar43 + fVar37;
              local_104 = (fVar55 * fVar46 - fVar64 * fVar35) + fVar40 * fVar60 + fVar39 + fVar44;
              local_100 = (fVar60 * fVar35 - fVar55 * fVar38) + fVar40 * fVar64 + fVar41 + fVar23;
              fVar39 = *(float *)((longlong)param_3 + 0x24) * fVar56;
              fVar41 = *(float *)(param_3 + 5) * fVar57;
              fVar28 = *(float *)((longlong)param_3 + 0x2c) * fVar58;
              fVar55 = fVar28 * fVar38 - fVar41 * fVar46;
              fVar60 = fVar39 * fVar46 - fVar28 * fVar35;
              fVar64 = fVar41 * fVar35 - fVar39 * fVar38;
              fVar43 = fVar59 * 0.0 * fVar40 - fVar59 * 0.0 * fVar40;
              auVar31._0_4_ = fVar55 + fVar55;
              auVar31._4_4_ = fVar60 + fVar60;
              auVar31._8_4_ = fVar64 + fVar64;
              auVar31._12_4_ = fVar43 + fVar43;
              local_118 = (auVar31._8_4_ * fVar38 - auVar31._4_4_ * fVar46) +
                          fVar40 * auVar31._0_4_ + fVar39 + fVar37;
              local_114 = (auVar31._0_4_ * fVar46 - auVar31._8_4_ * fVar35) +
                          fVar40 * auVar31._4_4_ + fVar41 + fVar44;
              local_110 = (auVar31._4_4_ * fVar35 - auVar31._0_4_ * fVar38) +
                          fVar40 * auVar31._8_4_ + fVar28 + fVar23;
              uVar9 = FUN_142239e90(lVar19,param_2,&local_178,&local_108,&local_118,
                                    (longlong)param_3 + 100,param_4,0);
              uVar63 = uRam0000000146af576c;
              uVar62 = uRam0000000146af5768;
              uVar61 = uRam0000000146af5764;
              uVar15 = _DAT_146af5760;
              local_198 = local_198 | (byte)uVar9;
              fVar55 = local_184;
              fVar60 = local_180;
              fVar64 = local_17c;
              if ((iVar8 < (int)param_2[1]) && (*(char *)(param_4 + 0x24) == '\0')) {
                auVar25._4_4_ =
                     -(uint)(fRam0000000146af59f4 < (float)((uint)fVar57 & uRam0000000146af5a04));
                auVar25._0_4_ = -(uint)(_DAT_146af59f0 < (float)((uint)fVar56 & _DAT_146af5a00));
                auVar25._8_4_ =
                     -(uint)(fRam0000000146af59f8 < (float)((uint)fVar58 & uRam0000000146af5a08));
                auVar25._12_4_ =
                     -(uint)(fRam0000000146af59fc < (float)((uint)fVar59 & uRam0000000146af5a0c));
                iVar10 = movmskps(uVar9,auVar25);
                if (iVar10 == 0) {
                  local_168 = _DAT_1468b5b70;
                  uStack_160 = uRam00000001468b5b78;
                  local_148 = _DAT_1468b5b90;
                  fStack_144 = fRam00000001468b5b94;
                  fStack_140 = fRam00000001468b5b98;
                  fStack_13c = fRam00000001468b5b9c;
                  _local_158 = _DAT_1468b5b80;
                }
                else {
                  fVar35 = fVar35 * _DAT_146af59e0;
                  fVar38 = fVar38 * fRam0000000146af59e4;
                  fVar46 = fVar46 * fRam0000000146af59e8;
                  fVar40 = fVar40 * fRam0000000146af59ec;
                  auVar4._4_4_ = fVar57;
                  auVar4._0_4_ = fVar56;
                  auVar4._8_4_ = fVar58;
                  auVar4._12_4_ = fVar59;
                  auVar30 = rcpps(auVar31,auVar4);
                  local_168 = CONCAT44(fVar38,fVar35);
                  uStack_160 = CONCAT44(fVar40,fVar46);
                  fVar43 = auVar30._0_4_;
                  fVar39 = auVar30._4_4_;
                  fVar41 = auVar30._8_4_;
                  fVar28 = auVar30._12_4_;
                  fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar56;
                  fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar57;
                  fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar58;
                  fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar59;
                  fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar56;
                  fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar57;
                  fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar58;
                  fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar59;
                  local_148 = (float)(((uint)fVar43 &
                                       -(uint)((float)((uint)fVar56 & _DAT_146af5a00) <=
                                              _DAT_146af59f0) ^ (uint)fVar43) & _DAT_146af5760);
                  fStack_144 = (float)(((uint)fVar39 &
                                        -(uint)((float)((uint)fVar57 & uRam0000000146af5a04) <=
                                               fRam0000000146af59f4) ^ (uint)fVar39) &
                                      uRam0000000146af5764);
                  fStack_140 = (float)(((uint)fVar41 &
                                        -(uint)((float)((uint)fVar58 & uRam0000000146af5a08) <=
                                               fRam0000000146af59f8) ^ (uint)fVar41) &
                                      uRam0000000146af5768);
                  fStack_13c = (float)(((uint)fVar28 &
                                        -(uint)((float)((uint)fVar59 & uRam0000000146af5a0c) <=
                                               fRam0000000146af59fc) ^ (uint)fVar28) &
                                      uRam0000000146af576c);
                  fVar37 = fVar37 * local_148;
                  fVar44 = fVar44 * fStack_144;
                  fVar23 = fVar23 * fStack_140;
                  fVar27 = fVar27 * fStack_13c;
                  fVar43 = fVar23 * fVar38 - fVar44 * fVar46;
                  fVar39 = fVar37 * fVar46 - fVar23 * fVar35;
                  fVar41 = fVar44 * fVar35 - fVar37 * fVar38;
                  fVar28 = fVar27 * fVar40 - fVar27 * fVar40;
                  fVar43 = fVar43 + fVar43;
                  fVar39 = fVar39 + fVar39;
                  fVar41 = fVar41 + fVar41;
                  fVar28 = fVar28 + fVar28;
                  local_158._4_4_ =
                       (uint)(0.0 - ((fVar43 * fVar46 - fVar41 * fVar35) + fVar40 * fVar39 + fVar44)
                             ) & uRam0000000146af5764;
                  local_158._0_4_ =
                       (uint)(0.0 - ((fVar41 * fVar38 - fVar39 * fVar46) + fVar40 * fVar43 + fVar37)
                             ) & _DAT_146af5760;
                  uStack_150._0_4_ =
                       (float)((uint)(0.0 - ((fVar39 * fVar35 - fVar43 * fVar38) +
                                            fVar40 * fVar41 + fVar23)) & uRam0000000146af5768);
                  uStack_150._4_4_ =
                       (uint)(0.0 - ((fVar28 * fVar40 - fVar28 * fVar40) + fVar40 * fVar28 + fVar27)
                             ) & uRam0000000146af576c;
                }
                if (iVar8 < (int)param_2[1]) {
                  lVar19 = uVar16 * 0x90;
                  do {
                    puVar17 = (uint *)(*param_2 + 8 + lVar19);
                    *puVar17 = *puVar17 | 1;
                    FUN_1424aec00(&local_168);
                    uVar18 = (int)uVar16 + 1;
                    uVar16 = (ulonglong)uVar18;
                    lVar19 = lVar19 + 0x90;
                    fVar55 = local_184;
                    fVar60 = local_180;
                    fVar64 = local_17c;
                  } while ((int)uVar18 < (int)param_2[1]);
                }
              }
            }
          }
        }
      }
LAB_1424a7d8f:
      plVar20 = plVar20 + 0xc;
      pfVar21 = pfVar21 + 0x18;
    } while (plVar20 != plVar13);
    uVar16 = (ulonglong)local_120;
  }
  if ((int)param_2[1] <= (int)uVar16) {
    return local_198;
  }
  do {
    lVar19 = *param_2;
    lVar11 = param_3[4];
    *(longlong *)(lVar22 + 0x44 + lVar19) = param_3[3];
    *(int *)(lVar22 + 0x4c + lVar19) = (int)lVar11;
    lVar19 = *param_2;
    uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined8 *)(lVar22 + 0x50 + lVar19) = *(undefined8 *)((longlong)param_3 + 0x24);
    *(undefined4 *)(lVar22 + 0x58 + lVar19) = uVar9;
    if (*(char *)((longlong)param_3 + 0x75) != '\0') {
      *(byte *)(lVar22 + *param_2) = *(byte *)(lVar22 + *param_2) | 1;
    }
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    lVar22 = lVar22 + 0x90;
  } while ((int)uVar15 < (int)param_2[1]);
  if (*(char *)((longlong)param_3 + 0x75) == '\0') {
    FUN_1423560b0(param_2);
    return local_198;
  }
  FUN_1422feb30(*param_2,(longlong)(int)param_2[1],local_188[0],local_188);
  return local_198;
}



// FUNCTION 1424a7f20 FUN_1424a7f20 body=2626 status=ok
// SIG undefined FUN_1424a7f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1424a7f20(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong *plVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  float fVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  char local_218;
  float local_210;
  float local_20c;
  float local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined4 local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [12];
  float local_15c;
  
  local_1b0 = *(float *)((longlong)param_3 + 0x4c) - *(float *)(param_3 + 8);
  local_1ac = *(float *)(param_3 + 10) - *(float *)((longlong)param_3 + 0x44);
  local_1a8 = *(float *)((longlong)param_3 + 0x54) - *(float *)(param_3 + 9);
  local_218 = '\0';
  if (local_1b0 == 0.0) {
    local_210 = 3.4e+38;
  }
  else {
    local_210 = 1.0 / local_1b0;
  }
  if (local_1ac == 0.0) {
    local_20c = 3.4e+38;
  }
  else {
    local_20c = 1.0 / local_1ac;
  }
  if (local_1a8 == 0.0) {
    local_208 = 3.4e+38;
  }
  else {
    local_208 = 1.0 / local_1a8;
  }
  plVar18 = *(longlong **)(*param_3 + 8);
  plVar16 = plVar18 + (longlong)*(int *)(*param_3 + 0x10) * 0xc;
  if (plVar18 == plVar16) {
    cVar8 = '\0';
  }
  else {
    pfVar17 = (float *)(plVar18 + 8);
    uVar60 = _DAT_146af5760;
    uVar61 = uRam0000000146af5764;
    uVar62 = uRam0000000146af5768;
    uVar63 = uRam0000000146af576c;
    do {
      lVar15 = *plVar18;
      if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0x94) & 2) == 0)) {
        uVar2 = *(uint *)(lVar15 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar13 = uVar2 & 0xffff;
          uVar9 = uVar2;
          if ((int)uVar2 < 0) {
            uVar9 = uVar2 + 0xffff;
            uVar13 = uVar13 - 0x10000;
          }
          lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                   (longlong)(int)uVar13 * 0x18;
        }
        else {
          lVar12 = 0;
        }
        if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) == 0) {
          puVar14 = *(uint **)(param_4 + 0x68);
          if (*(uint **)(param_4 + 0x68) == (uint *)0x0) {
            puVar14 = (uint *)(param_4 + 0x58);
          }
          puVar1 = puVar14 + *(int *)(param_4 + 0x70);
          for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
            if (*puVar14 == uVar2) goto LAB_1424a88a0;
          }
          cVar8 = FMath::LineBoxIntersection
                            (pfVar17 + -0xe,param_3 + 8,(longlong)param_3 + 0x4c,&local_1b0,
                             &local_210);
          fVar43 = fRam0000000146af5848;
          fVar41 = fRam0000000146af5844;
          fVar65 = _DAT_146af5840;
          fVar66 = fRam0000000146af5758;
          fVar38 = fRam0000000146af5754;
          fVar64 = _DAT_146af5750;
          if (cVar8 != '\0') {
            lVar12 = *(longlong *)(lVar15 + 0x168);
            if (lVar12 == 0) {
              fVar50 = 0.0;
              fVar51 = 0.0;
              fVar52 = 0.0;
              fVar23 = 0.0;
              fVar31 = 0.0;
              fVar39 = 0.0;
              fVar28 = 0.0;
              fVar22 = (float)((uint)_DAT_146af5750 & uVar60);
              fVar27 = (float)((uint)fRam0000000146af5754 & uVar61);
              fVar29 = (float)((uint)fRam0000000146af5758 & uVar62);
              fVar32 = (float)((uint)fRam0000000146af575c & uVar63);
              fVar30 = fRam0000000146af575c;
            }
            else {
              fVar31 = *(float *)(lVar12 + 0x210);
              fVar39 = *(float *)(lVar12 + 0x214);
              fVar28 = *(float *)(lVar12 + 0x218);
              fVar50 = *(float *)(lVar12 + 0x220);
              fVar51 = *(float *)(lVar12 + 0x224);
              fVar52 = *(float *)(lVar12 + 0x228);
              fVar23 = *(float *)(lVar12 + 0x22c);
              fVar22 = *(float *)(lVar12 + 0x230);
              fVar27 = *(float *)(lVar12 + 0x234);
              fVar29 = *(float *)(lVar12 + 0x238);
              fVar32 = *(float *)(lVar12 + 0x23c);
              fVar30 = *(float *)(lVar12 + 0x21c);
            }
            auVar25 = *(undefined1 (*) [16])(pfVar17 + 4);
            fVar33 = auVar25._0_4_;
            fVar49 = auVar25._4_4_;
            fVar3 = auVar25._8_4_;
            auVar19._4_4_ = fVar27;
            auVar19._0_4_ = fVar22;
            auVar19._8_4_ = fVar29;
            auVar19._12_4_ = fVar32;
            auVar19 = minps(auVar25,auVar19);
            auVar20._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146af5844);
            auVar20._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146af5840);
            auVar20._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146af5848);
            auVar20._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146af584c);
            iVar10 = movmskps((int)lVar12,auVar20);
            fVar56 = fVar33 * fVar22;
            fVar57 = fVar49 * fVar27;
            fVar58 = fVar3 * fVar29;
            fVar59 = auVar25._12_4_ * fVar32;
            if (iVar10 == 0) {
              fVar64 = pfVar17[-4];
              fVar38 = pfVar17[-3];
              fVar66 = pfVar17[-2];
              fVar65 = pfVar17[-1];
              fVar22 = *pfVar17 * fVar22;
              fVar27 = pfVar17[1] * fVar27;
              fVar29 = pfVar17[2] * fVar29;
              fVar32 = pfVar17[3] * fVar32;
              fVar41 = fVar65 * fVar31 * _DAT_146af5800 + fVar30 * fVar64 +
                       fVar66 * fVar39 * _DAT_146af57f0 + fVar38 * fVar28 * _DAT_146af57e0;
              fVar43 = fVar66 * fVar31 * fRam0000000146af5804 + fVar30 * fVar38 +
                       fVar65 * fVar39 * fRam0000000146af57f4 +
                       fVar64 * fVar28 * fRam0000000146af57e4;
              fVar33 = fVar38 * fVar31 * fRam0000000146af5808 + fVar30 * fVar66 +
                       fVar64 * fVar39 * fRam0000000146af57f8 +
                       fVar65 * fVar28 * fRam0000000146af57e8;
              fVar49 = fVar64 * fVar31 * fRam0000000146af580c + fVar30 * fVar65 +
                       fVar38 * fVar39 * fRam0000000146af57fc +
                       fVar66 * fVar28 * fRam0000000146af57ec;
              fVar64 = fVar29 * fVar39 - fVar27 * fVar28;
              fVar38 = fVar22 * fVar28 - fVar29 * fVar31;
              fVar66 = fVar27 * fVar31 - fVar22 * fVar39;
              fVar65 = fVar32 * fVar30 - fVar32 * fVar30;
              fVar64 = fVar64 + fVar64;
              fVar38 = fVar38 + fVar38;
              fVar66 = fVar66 + fVar66;
              fVar65 = fVar65 + fVar65;
              fVar50 = (fVar66 * fVar39 - fVar38 * fVar28) + fVar64 * fVar30 + fVar22 + fVar50;
              fVar51 = (fVar64 * fVar28 - fVar66 * fVar31) + fVar38 * fVar30 + fVar27 + fVar51;
              fVar52 = (fVar38 * fVar31 - fVar64 * fVar39) + fVar66 * fVar30 + fVar29 + fVar52;
              fVar23 = (fVar65 * fVar30 - fVar65 * fVar30) + fVar65 * fVar30 + fVar32 + fVar23;
            }
            else {
              fVar34 = fVar39 + fVar39;
              fVar36 = fVar28 + fVar28;
              fVar37 = fVar31 * (fVar31 + fVar31);
              fVar35 = (fVar31 + fVar31) * fVar30;
              fVar23 = pfVar17[-4];
              fVar5 = pfVar17[-3];
              fVar6 = pfVar17[-2];
              fVar45 = pfVar17[-1];
              fVar53 = (fVar36 * fVar30 + fVar34 * fVar31) * fVar22;
              fVar54 = (fVar35 + fVar36 * fVar39) * fVar27;
              fVar55 = (fVar34 * fVar30 + fVar36 * fVar31) * fVar29;
              fVar40 = fVar27 * (fVar34 * fVar31 - fVar36 * fVar30);
              fVar42 = fVar29 * (fVar36 * fVar39 - fVar35);
              fVar44 = fVar22 * (fVar36 * fVar31 - fVar34 * fVar30);
              fVar22 = (float)((uint)((_DAT_146af5750 - (fVar28 * fVar36 + fVar39 * fVar34)) *
                                     fVar22) & uVar60);
              fVar27 = (float)((uint)((fRam0000000146af5754 - (fVar28 * fVar36 + fVar37)) * fVar27)
                              & uVar61);
              fVar30 = (float)((uint)((fRam0000000146af5758 - (fVar39 * fVar34 + fVar37)) * fVar29)
                              & uVar62);
              fVar34 = (float)((uint)((fRam0000000146af575c - (fVar37 + fVar37)) * fVar32) & uVar63)
              ;
              fVar28 = fVar5 + fVar5;
              fVar31 = fVar6 + fVar6;
              fVar35 = fVar23 * (fVar23 + fVar23);
              fVar39 = fVar45 * (fVar23 + fVar23);
              fVar46 = (fVar45 * fVar31 + fVar23 * fVar28) * fVar33;
              fVar47 = (fVar39 + fVar5 * fVar31) * fVar49;
              fVar48 = (fVar45 * fVar28 + fVar23 * fVar31) * fVar3;
              fVar36 = fVar49 * (fVar23 * fVar28 - fVar45 * fVar31);
              fVar37 = fVar3 * (fVar5 * fVar31 - fVar39);
              fVar45 = fVar33 * (fVar23 * fVar31 - fVar45 * fVar28);
              fVar23 = (float)((uint)((_DAT_146af5750 - (fVar6 * fVar31 + fVar5 * fVar28)) * fVar33)
                              & uVar60);
              fVar29 = (float)((uint)((fRam0000000146af5754 - (fVar6 * fVar31 + fVar35)) * fVar49) &
                              uVar61);
              fVar32 = (float)((uint)((fRam0000000146af5758 - (fVar5 * fVar28 + fVar35)) * fVar3) &
                              uVar62);
              fVar33 = (float)((uint)((fRam0000000146af575c - (fVar35 + fVar35)) * auVar25._12_4_) &
                              uVar63);
              fVar28 = *pfVar17;
              fVar31 = pfVar17[1];
              fVar39 = pfVar17[2];
              local_1f8._0_4_ =
                   fVar46 * fVar40 + fVar23 * fVar22 + fVar45 * fVar55 + fVar33 * fVar50;
              local_1f8._4_4_ =
                   fVar46 * fVar27 + fVar23 * fVar53 + fVar45 * fVar42 + fVar33 * fVar51;
              uStack_1f0._0_4_ =
                   fVar46 * fVar54 + fVar23 * fVar44 + fVar45 * fVar30 + fVar33 * fVar52;
              uStack_1f0._4_4_ =
                   fVar46 * fVar34 + fVar23 * fVar34 + fVar45 * fVar34 +
                   fVar33 * fRam0000000146af575c;
              local_1e8._4_4_ =
                   fVar29 * fVar27 + fVar36 * fVar53 + fVar47 * fVar42 + fVar33 * fVar51;
              local_1e8._0_4_ =
                   fVar29 * fVar40 + fVar36 * fVar22 + fVar47 * fVar55 + fVar33 * fVar50;
              uStack_1e0._0_4_ =
                   fVar29 * fVar54 + fVar36 * fVar44 + fVar47 * fVar30 + fVar33 * fVar52;
              uStack_1e0._4_4_ =
                   fVar29 * fVar34 + fVar36 * fVar34 + fVar47 * fVar34 +
                   fVar33 * fRam0000000146af575c;
              local_1d8._0_4_ =
                   fVar37 * fVar40 + fVar48 * fVar22 + fVar32 * fVar55 + fVar33 * fVar50;
              local_1d8._4_4_ =
                   fVar37 * fVar27 + fVar48 * fVar53 + fVar32 * fVar42 + fVar33 * fVar51;
              uStack_1d0._0_4_ =
                   fVar37 * fVar54 + fVar48 * fVar44 + fVar32 * fVar30 + fVar33 * fVar52;
              uStack_1d0._4_4_ =
                   fVar37 * fVar34 + fVar48 * fVar34 + fVar32 * fVar34 +
                   fVar33 * fRam0000000146af575c;
              local_1c8 = fVar31 * fVar40 + fVar28 * fVar22 + fVar39 * fVar55 +
                          fRam0000000146af575c * fVar50;
              fStack_1c4 = fVar31 * fVar27 + fVar28 * fVar53 + fVar39 * fVar42 +
                           fRam0000000146af575c * fVar51;
              fStack_1c0 = fVar31 * fVar54 + fVar28 * fVar44 + fVar39 * fVar30 +
                           fRam0000000146af575c * fVar52;
              fStack_1bc = fVar31 * fVar34 + fVar28 * fVar34 + fVar39 * fVar34 +
                           fRam0000000146af575c * fRam0000000146af575c;
              FMatrix::RemoveScaling(&local_1f8);
              auVar25 = _local_1e8;
              fVar64 = (float)(-(uint)(fVar65 <= fVar56) & (_DAT_146af5830 ^ (uint)fVar64) ^
                              _DAT_146af5830);
              fVar65 = (float)(-(uint)(fVar41 <= fVar57) & (uRam0000000146af5834 ^ (uint)fVar38) ^
                              uRam0000000146af5834);
              fVar66 = (float)(-(uint)(fVar43 <= fVar58) & (uRam0000000146af5838 ^ (uint)fVar66) ^
                              uRam0000000146af5838);
              local_1f8 = CONCAT44(local_1f8._4_4_ * fVar64,(float)local_1f8 * fVar64);
              uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0 * fVar64);
              fVar64 = (float)uStack_1e0 * fVar65;
              fVar38 = (float)local_1e8._0_4_ * fVar65;
              auVar7._4_8_ = uStack_1e0;
              auVar7._0_4_ = (float)local_1e8._4_4_ * fVar65;
              local_1e8 = (undefined1  [8])(auVar7._0_8_ << 0x20);
              uStack_1e0._4_4_ = auVar25._12_4_;
              uStack_1e0._0_4_ = fVar64;
              uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0 * fVar66);
              local_1e8._0_4_ = fVar38;
              local_1d8 = CONCAT44(local_1d8._4_4_ * fVar66,(float)local_1d8 * fVar66);
              FQuat::FQuat(&local_178);
              lVar15 = *plVar18;
              local_1b8 = 0x322bcc77;
              auVar24._0_4_ = local_178 * local_178 + fStack_170 * fStack_170;
              auVar24._4_4_ = fStack_174 * fStack_174 + fStack_16c * fStack_16c;
              auVar24._8_4_ = fStack_170 * fStack_170 + local_178 * local_178;
              auVar24._12_4_ = fStack_16c * fStack_16c + fStack_174 * fStack_174;
              fVar41 = auVar24._4_4_ + auVar24._0_4_;
              fVar43 = auVar24._8_4_ + auVar24._4_4_;
              fVar28 = auVar24._12_4_ + auVar24._8_4_;
              fVar31 = auVar24._0_4_ + auVar24._12_4_;
              auVar25._4_4_ = fVar43;
              auVar25._0_4_ = fVar41;
              auVar25._8_4_ = fVar28;
              auVar25._12_4_ = fVar31;
              auVar25 = rsqrtps(auVar24,auVar25);
              fVar64 = auVar25._0_4_;
              fVar38 = auVar25._4_4_;
              fVar66 = auVar25._8_4_;
              fVar65 = auVar25._12_4_;
              fVar64 = (_DAT_146af5820 - fVar64 * fVar64 * fVar41 * _DAT_146af5820) * fVar64 +
                       fVar64;
              fVar38 = (fRam0000000146af5824 - fVar38 * fVar38 * fVar43 * fRam0000000146af5824) *
                       fVar38 + fVar38;
              fVar66 = (fRam0000000146af5828 - fVar66 * fVar66 * fVar28 * fRam0000000146af5828) *
                       fVar66 + fVar66;
              fVar65 = (fRam0000000146af582c - fVar65 * fVar65 * fVar31 * fRam0000000146af582c) *
                       fVar65 + fVar65;
              fVar23 = 0.0;
              fVar41 = (float)(((uint)(((_DAT_146af5820 - fVar64 * fVar64 * fVar41 * _DAT_146af5820)
                                        * fVar64 + fVar64) * local_178) ^ _DAT_146af5810) &
                               -(uint)(1e-08 <= fVar41) ^ _DAT_146af5810);
              fVar43 = (float)(((uint)(((fRam0000000146af5824 -
                                        fVar38 * fVar38 * fVar43 * fRam0000000146af5824) * fVar38 +
                                       fVar38) * fStack_174) ^ uRam0000000146af5814) &
                               -(uint)(1e-08 <= fVar43) ^ uRam0000000146af5814);
              fVar33 = (float)(((uint)(((fRam0000000146af5828 -
                                        fVar66 * fVar66 * fVar28 * fRam0000000146af5828) * fVar66 +
                                       fVar66) * fStack_170) ^ uRam0000000146af5818) &
                               -(uint)(1e-08 <= fVar28) ^ uRam0000000146af5818);
              fVar49 = (float)(((uint)(((fRam0000000146af582c -
                                        fVar65 * fVar65 * fVar31 * fRam0000000146af582c) * fVar65 +
                                       fVar65) * fStack_16c) ^ uRam0000000146af581c) &
                               -(uint)(1e-08 <= fVar31) ^ uRam0000000146af581c);
              fVar50 = local_1c8;
              fVar51 = fStack_1c4;
              fVar52 = fStack_1c0;
              local_178 = fVar41;
              fStack_174 = fVar43;
              fStack_170 = fVar33;
              fStack_16c = fVar49;
            }
            fVar65 = *(float *)(param_3 + 3) * fVar56;
            fVar28 = *(float *)((longlong)param_3 + 0x1c) * fVar57;
            fVar31 = *(float *)(param_3 + 4) * fVar58;
            fVar64 = fVar31 * fVar43 - fVar28 * fVar33;
            fVar38 = fVar65 * fVar33 - fVar31 * fVar41;
            fVar66 = fVar28 * fVar41 - fVar65 * fVar43;
            fVar64 = fVar64 + fVar64;
            fVar38 = fVar38 + fVar38;
            fVar66 = fVar66 + fVar66;
            local_190 = (fVar66 * fVar43 - fVar38 * fVar33) + fVar64 * fVar49 + fVar65 + fVar50;
            local_18c = (fVar64 * fVar33 - fVar66 * fVar41) + fVar38 * fVar49 + fVar28 + fVar51;
            local_188 = (fVar38 * fVar41 - fVar64 * fVar43) + fVar66 * fVar49 + fVar31 + fVar52;
            fVar28 = *(float *)((longlong)param_3 + 0x24) * fVar56;
            fVar31 = *(float *)(param_3 + 5) * fVar57;
            fVar39 = *(float *)((longlong)param_3 + 0x2c) * fVar58;
            fVar64 = fVar39 * fVar43 - fVar31 * fVar33;
            fVar38 = fVar28 * fVar33 - fVar39 * fVar41;
            fVar66 = fVar31 * fVar41 - fVar28 * fVar43;
            fVar65 = fVar59 * 0.0 * fVar49 - fVar59 * 0.0 * fVar49;
            auVar26._0_4_ = fVar64 + fVar64;
            auVar26._4_4_ = fVar38 + fVar38;
            auVar26._8_4_ = fVar66 + fVar66;
            auVar26._12_4_ = fVar65 + fVar65;
            local_1a0 = (auVar26._8_4_ * fVar43 - auVar26._4_4_ * fVar33) +
                        fVar49 * auVar26._0_4_ + fVar28 + fVar50;
            local_19c = (auVar26._0_4_ * fVar33 - auVar26._8_4_ * fVar41) +
                        fVar49 * auVar26._4_4_ + fVar31 + fVar51;
            local_198 = (auVar26._4_4_ * fVar41 - auVar26._0_4_ * fVar43) +
                        fVar49 * auVar26._8_4_ + fVar39 + fVar52;
            _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
            local_15c = 1.0;
            cVar8 = FUN_14223a080(lVar15,local_168,&local_190,&local_1a0,(longlong)param_3 + 100,
                                  param_4,0);
            uVar60 = _DAT_146af5760;
            uVar61 = uRam0000000146af5764;
            uVar62 = uRam0000000146af5768;
            uVar63 = uRam0000000146af576c;
            if ((cVar8 != '\0') && (local_15c < *(float *)(param_2 + 0xc))) {
              local_218 = '\x01';
              uVar11 = FUN_140729f20(param_2);
              fVar65 = fRam0000000146af59fc;
              fVar66 = fRam0000000146af59f8;
              fVar38 = fRam0000000146af59f4;
              fVar64 = _DAT_146af59f0;
              uVar63 = uRam0000000146af576c;
              uVar62 = uRam0000000146af5768;
              uVar61 = uRam0000000146af5764;
              uVar60 = _DAT_146af5760;
              if (*(char *)(param_4 + 0x24) == '\0') {
                fVar28 = (float)((uint)fVar56 & _DAT_146af5a00);
                fVar31 = (float)((uint)fVar57 & uRam0000000146af5a04);
                fVar39 = (float)((uint)fVar58 & uRam0000000146af5a08);
                fVar22 = (float)((uint)fVar59 & uRam0000000146af5a0c);
                *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
                auVar21._4_4_ = -(uint)(fVar38 < fVar31);
                auVar21._0_4_ = -(uint)(fVar64 < fVar28);
                auVar21._8_4_ = -(uint)(fVar66 < fVar39);
                auVar21._12_4_ = -(uint)(fVar65 < fVar22);
                iVar10 = movmskps(uVar11,auVar21);
                if (iVar10 == 0) {
                  local_1f8 = _DAT_1468b5b70;
                  uStack_1f0 = uRam00000001468b5b78;
                  local_1d8 = _DAT_1468b5b90;
                  uStack_1d0 = uRam00000001468b5b98;
                  _local_1e8 = _DAT_1468b5b80;
                }
                else {
                  fVar41 = fVar41 * _DAT_146af59e0;
                  fVar43 = fVar43 * fRam0000000146af59e4;
                  fVar33 = fVar33 * fRam0000000146af59e8;
                  fVar49 = fVar49 * fRam0000000146af59ec;
                  auVar4._4_4_ = fVar57;
                  auVar4._0_4_ = fVar56;
                  auVar4._8_4_ = fVar58;
                  auVar4._12_4_ = fVar59;
                  auVar25 = rcpps(auVar26,auVar4);
                  local_1f8 = CONCAT44(fVar43,fVar41);
                  uStack_1f0 = CONCAT44(fVar49,fVar33);
                  fVar27 = auVar25._0_4_;
                  fVar29 = auVar25._4_4_;
                  fVar32 = auVar25._8_4_;
                  fVar30 = auVar25._12_4_;
                  fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar56;
                  fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar57;
                  fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar58;
                  fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar59;
                  fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar56;
                  fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar57;
                  fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar58;
                  fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar59;
                  fVar64 = (float)(((uint)fVar27 & -(uint)(fVar28 <= fVar64) ^ (uint)fVar27) &
                                  uVar60);
                  fVar38 = (float)(((uint)fVar29 & -(uint)(fVar31 <= fVar38) ^ (uint)fVar29) &
                                  uVar61);
                  fVar66 = (float)(((uint)fVar32 & -(uint)(fVar39 <= fVar66) ^ (uint)fVar32) &
                                  uVar62);
                  fVar65 = (float)(((uint)fVar30 & -(uint)(fVar22 <= fVar65) ^ (uint)fVar30) &
                                  uVar63);
                  fVar50 = fVar50 * fVar64;
                  fVar51 = fVar51 * fVar38;
                  fVar52 = fVar52 * fVar66;
                  fVar23 = fVar23 * fVar65;
                  local_1d8 = CONCAT44(fVar38,fVar64);
                  uStack_1d0 = CONCAT44(fVar65,fVar66);
                  fVar64 = fVar52 * fVar43 - fVar51 * fVar33;
                  fVar38 = fVar50 * fVar33 - fVar52 * fVar41;
                  fVar66 = fVar51 * fVar41 - fVar50 * fVar43;
                  fVar65 = fVar23 * fVar49 - fVar23 * fVar49;
                  fVar64 = fVar64 + fVar64;
                  fVar38 = fVar38 + fVar38;
                  fVar66 = fVar66 + fVar66;
                  fVar65 = fVar65 + fVar65;
                  local_1e8._4_4_ =
                       (uint)(0.0 - ((fVar64 * fVar33 - fVar66 * fVar41) + fVar49 * fVar38 + fVar51)
                             ) & uVar61;
                  local_1e8._0_4_ =
                       (uint)(0.0 - ((fVar66 * fVar43 - fVar38 * fVar33) + fVar49 * fVar64 + fVar50)
                             ) & uVar60;
                  uStack_1e0._0_4_ =
                       (float)((uint)(0.0 - ((fVar38 * fVar41 - fVar64 * fVar43) +
                                            fVar49 * fVar66 + fVar52)) & uVar62);
                  uStack_1e0._4_4_ =
                       (uint)(0.0 - ((fVar65 * fVar49 - fVar65 * fVar49) + fVar49 * fVar65 + fVar23)
                             ) & uVar63;
                }
                FUN_1424aec00(&local_1f8);
              }
              cVar8 = '\x01';
              if (*(char *)((longlong)param_3 + 0x74) != '\0') goto LAB_1424a88b6;
            }
          }
        }
      }
LAB_1424a88a0:
      plVar18 = plVar18 + 0xc;
      pfVar17 = pfVar17 + 0x18;
    } while (plVar18 != plVar16);
    cVar8 = local_218;
    if (local_218 != '\0') {
LAB_1424a88b6:
      lVar15 = param_3[4];
      *(longlong *)(param_2 + 0x44) = param_3[3];
      *(int *)(param_2 + 0x4c) = (int)lVar15;
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)((longlong)param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x58) = uVar11;
    }
  }
  return cVar8;
}



// FUNCTION 1424a8970 FUN_1424a8970 body=599 status=ok
// SIG undefined FUN_1424a8970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1424a8970(longlong *param_1,float param_2,undefined8 param_3,float *param_4,
                       float *param_5,undefined1 param_6,longlong param_7,undefined8 param_8,
                       int *param_9)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float *local_d8;
  float local_d0;
  float local_cc;
  float *local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined8 local_62;
  undefined2 local_5a;
  undefined1 local_58 [64];
  
  puVar3 = (undefined8 *)register0x00000020;
  if (0.0001 <= SQRT((param_5[1] - param_4[1]) * (param_5[1] - param_4[1]) +
                     (*param_5 - *param_4) * (*param_5 - *param_4) +
                     (param_5[2] - param_4[2]) * (param_5[2] - param_4[2]))) {
    pfVar6 = (float *)0x0;
    fVar8 = 0.0;
    if (((char)param_1[6] != '\0') &&
       (fVar7 = param_2 - *(float *)((longlong)param_1 + 0x3c), 0.0 < fVar7)) {
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x148))();
      fVar7 = *(float *)(puVar3 + 0xf3) - fVar7;
      local_d8 = pfVar6;
      if (0 < (int)param_1[0xe]) {
        pfVar2 = pfVar6;
        for (puVar3 = (undefined8 *)param_1[0xd]; pfVar6 = (float *)0x0, puVar3 != (undefined8 *)0x0
            ; puVar3 = (undefined8 *)puVar3[2]) {
          pfVar1 = (float *)*puVar3;
          if (*pfVar1 <= fVar7) {
            local_d8 = pfVar1;
            pfVar6 = pfVar2;
            if ((pfVar2 != (float *)0x0) && (*pfVar2 - fVar7 <= fVar7 - *pfVar1)) {
              local_d8 = pfVar2;
              pfVar6 = pfVar1;
            }
            if (local_d8 != (float *)0x0) goto LAB_1424a8a8f;
            break;
          }
          pfVar2 = pfVar1;
        }
        local_d8 = pfVar2;
        if (pfVar2 != (float *)0x0) {
LAB_1424a8a8f:
          fVar8 = *local_d8 - fVar7;
        }
      }
      if (local_d8 != (float *)0x0) {
        local_c0 = *(undefined8 *)param_4;
        local_98 = *(undefined8 *)param_4;
        local_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        local_62 = 0;
        local_5a = 0;
        local_b8 = param_4[2];
        local_ac = param_5[2];
        local_90 = param_4[2];
        local_b4 = *(undefined8 *)param_5;
        local_84 = param_5[2];
        local_a8 = _DAT_1464aa810;
        uStack_a0 = _DAT_1464aa818;
        local_63 = *param_9 != 0;
        local_8c = *(undefined8 *)param_5;
        local_64 = 0;
        local_d0 = param_2;
        local_cc = fVar8;
        local_c8 = pfVar6;
        puVar4 = (undefined4 *)
                 FUN_142309ff0(local_58,param_6,*(undefined1 *)(param_7 + 0x11),param_8,param_7,
                               param_9,1);
        uStack_70 = *(undefined8 *)(puVar4 + 1);
        uStack_68 = puVar4[3];
        local_78 = CONCAT44(*puVar4,(undefined4)local_78);
        uVar5 = FUN_1424a7220(param_1,param_3,&local_d8,param_7);
        return uVar5;
      }
    }
  }
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



// FUNCTION 1424a8bd0 FUN_1424a8bd0 body=713 status=ok
// SIG undefined FUN_1424a8bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1424a8bd0(longlong *param_1,float param_2,undefined8 param_3,float *param_4,
                       float *param_5,undefined1 param_6,longlong param_7,undefined8 *param_8,
                       int *param_9,undefined1 param_10)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  int *local_1d0;
  undefined1 local_1c8;
  undefined8 *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  float *local_198;
  float local_190;
  float local_18c;
  float *local_188;
  undefined8 local_180;
  float local_178;
  undefined8 local_174;
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  float local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 local_124;
  undefined1 local_123;
  undefined8 local_122;
  undefined2 local_11a;
  undefined1 local_118 [16];
  undefined1 local_108 [22];
  undefined1 local_f2;
  longlong local_c0;
  longlong local_a0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1b8 = param_8;
  if (0.0001 <= SQRT((param_5[1] - param_4[1]) * (param_5[1] - param_4[1]) +
                     (*param_5 - *param_4) * (*param_5 - *param_4) +
                     (param_5[2] - param_4[2]) * (param_5[2] - param_4[2]))) {
    pfVar5 = (float *)0x0;
    fVar7 = 0.0;
    if (((char)param_1[6] != '\0') &&
       (fVar6 = param_2 - *(float *)((longlong)param_1 + 0x3c), 0.0 < fVar6)) {
      local_1a8 = param_3;
      param_8 = (undefined8 *)(**(code **)(*param_1 + 0x148))();
      fVar6 = *(float *)(param_8 + 0xf3) - fVar6;
      local_198 = pfVar5;
      if (0 < (int)param_1[0xe]) {
        pfVar2 = pfVar5;
        for (param_8 = (undefined8 *)param_1[0xd]; pfVar5 = (float *)0x0,
            param_8 != (undefined8 *)0x0; param_8 = (undefined8 *)param_8[2]) {
          pfVar1 = (float *)*param_8;
          if (*pfVar1 <= fVar6) {
            local_198 = pfVar1;
            pfVar5 = pfVar2;
            if ((pfVar2 != (float *)0x0) && (*pfVar2 - fVar6 <= fVar6 - *pfVar1)) {
              local_198 = pfVar2;
              pfVar5 = pfVar1;
            }
            if (local_198 != (float *)0x0) goto LAB_1424a8d1e;
            break;
          }
          pfVar2 = pfVar1;
        }
        local_198 = pfVar2;
        if (pfVar2 != (float *)0x0) {
LAB_1424a8d1e:
          fVar7 = *local_198 - fVar6;
        }
      }
      if (local_198 != (float *)0x0) {
        FUN_140e3fc20(local_108,param_7);
        local_180 = *(undefined8 *)param_4;
        local_158 = *(undefined8 *)param_4;
        local_123 = *param_9 != 0;
        local_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        local_122 = 0;
        local_11a = 0;
        local_178 = param_4[2];
        local_16c = param_5[2];
        local_150 = param_4[2];
        local_174 = *(undefined8 *)param_5;
        local_144 = param_5[2];
        local_124 = param_10;
        local_1d8 = local_108;
        local_168 = _DAT_1464aa810;
        uStack_160 = _DAT_1464aa818;
        local_14c = *(undefined8 *)param_5;
        local_1c8 = 0;
        local_1d0 = param_9;
        local_f2 = 1;
        local_190 = param_2;
        local_18c = fVar7;
        local_188 = pfVar5;
        puVar4 = (undefined8 *)
                 FUN_142309ff0(local_118,param_6,*(undefined1 *)(param_7 + 0x11),local_1b8);
        local_1b8 = (undefined8 *)*puVar4;
        uStack_1b0 = *(undefined4 *)(puVar4 + 1);
        uStack_130 = *(undefined8 *)((longlong)puVar4 + 4);
        uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        local_138 = CONCAT44(*(undefined4 *)puVar4,(undefined4)local_138);
        uStack_128 = uStack_1ac;
        bVar3 = FUN_1424a7f20(param_1,local_1a8,&local_198,local_108);
        if (local_a0 != 0) {
          FMemory::Free();
        }
        if (local_c0 != 0) {
          FMemory::Free();
        }
        return (ulonglong)bVar3;
      }
    }
  }
  return (ulonglong)param_8 & 0xffffffffffffff00;
}



// FUNCTION 1424a8ea0 FUN_1424a8ea0 body=153 status=ok
// SIG undefined FUN_1424a8ea0(void)

void FUN_1424a8ea0(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  
  *(undefined4 *)(param_1 + 0xe4) = *DAT_146af5950;
  *(undefined4 *)(param_1 + 0xe8) = *DAT_146af5938;
  *(undefined4 *)(param_1 + 0xec) = *DAT_146af5968;
  *(undefined4 *)(param_1 + 0xdc) = *DAT_146af5980;
  puVar1 = DAT_146af5998;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      DAT_14653287c = puVar1[1];
      return;
    }
  }
  DAT_14653287c = *puVar1;
  return;
}



// FUNCTION 1424a8f40 FUN_1424a8f40 body=1620 status=ok
// SIG undefined FUN_1424a8f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424a8f40(longlong param_1,undefined8 param_2)

{
  float fVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  short *psVar6;
  short *psVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int local_res18 [2];
  int local_res20 [2];
  undefined2 *local_a0;
  undefined8 local_98;
  short *local_90;
  int local_88;
  undefined4 local_84;
  int local_80;
  longlong local_78;
  int local_70;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  DWORD local_58;
  uint local_54;
  uint *local_50;
  
  psVar11 = (short *)0x0;
  iVar10 = 0;
  local_res18[0] = 0;
  if (DAT_146ab62f7 != '\0') {
    return;
  }
  QueryPerformanceCounter(&local_68);
  local_58 = local_68.s.LowPart;
  local_50 = &local_54;
  local_54 = 0;
  if ((DAT_1464c9c54 < 0x1e) && ((0x303a0000U >> (DAT_1464c9c54 & 0x1f) & 1) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  local_68.s.LowPart = 0;
  if (!bVar4) {
    local_68.s.LowPart = *(DWORD *)(DAT_146af59b0 + 4);
  }
  local_80 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x60);
  local_res20[0] = 0;
  iVar17 = 4;
  if (*(int *)(param_1 + 8) == 4) {
    iVar17 = 1;
  }
  local_res18[0] = 0;
  local_78 = 0;
  if (local_68.s.LowPart == 0) {
    (**(code **)(*DAT_146ab6358 + 0x6b8))
              (DAT_146ab6358,param_2,*(undefined8 *)(param_1 + 0x20),&local_78,local_res20,
               local_res18);
  }
  else if (local_68.s.LowPart == 1) {
    (**(code **)(*DAT_146ab6358 + 0x318))
              (DAT_146ab6358,*(undefined8 *)(param_1 + 0x20),&local_78,local_res20,local_res18);
  }
  *(undefined4 *)(param_1 + 0xc) = 6;
  if (local_78 == 0) goto LAB_1424a9222;
  local_70 = local_res20[0] * iVar17;
  lVar19 = -1;
  local_60 = (LARGE_INTEGER)
             ((LARGE_INTEGER *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8))->
             QuadPart;
  if ((*(int *)(local_60.QuadPart + 0x38) < DAT_146af6334) &&
     (_Init_thread_header(&DAT_146af6334), DAT_146af6334 == -1)) {
    psVar7 = psVar11;
    psVar12 = local_90;
    if (DAT_146ab6358 == (longlong *)0x0) {
LAB_1424a9482:
      DAT_146af6330 = '\0';
    }
    else {
      local_a0 = (undefined2 *)0x0;
      local_98 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
      FGenericPlatformString::Memcpy(local_a0,L"D3D12",0xc);
      psVar7 = (short *)(**(code **)(*DAT_146ab6358 + 0x20))();
      local_90 = (short *)0x0;
      local_84 = 0;
      psVar12 = psVar11;
      iVar18 = iVar10;
      if ((psVar7 != (short *)0x0) && (lVar14 = lVar19, *psVar7 != 0)) {
        do {
          lVar14 = lVar14 + 1;
        } while (psVar7[lVar14] != 0);
        iVar13 = (int)lVar14 + 1;
        local_88 = iVar13;
        if (0 < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
        }
        iVar18 = local_88;
        psVar12 = local_90;
        FGenericPlatformString::Memcpy(local_90,psVar7,(longlong)iVar13 * 2);
      }
      puVar9 = &DAT_143f3eda8;
      if ((int)local_98 != 0) {
        puVar9 = local_a0;
      }
      psVar7 = (short *)0x3;
      psVar6 = &DAT_143f3eda8;
      if (iVar18 != 0) {
        psVar6 = psVar12;
      }
      lVar14 = (longlong)puVar9 - (longlong)psVar6;
      do {
        sVar2 = *psVar6;
        sVar3 = *(short *)((longlong)psVar6 + lVar14);
        if (sVar2 != sVar3) break;
        psVar6 = psVar6 + 1;
      } while (sVar3 != 0);
      if (sVar2 != sVar3) goto LAB_1424a9482;
      DAT_146af6330 = '\x01';
    }
    puVar9 = local_a0;
    if ((((ulonglong)psVar7 & 2) != 0) &&
       (psVar7 = (short *)(ulonglong)((uint)psVar7 & 0xfffffffd), psVar12 != (short *)0x0)) {
      FMemory::Free(psVar12);
    }
    if ((((ulonglong)psVar7 & 1) != 0) && (puVar9 != (undefined2 *)0x0)) {
      FMemory::Free(puVar9);
    }
    _Init_thread_footer(&DAT_146af6334);
  }
  bVar5 = false;
  bVar4 = false;
  if ((*(int *)(local_60.QuadPart + 0x38) < DAT_146af633c) &&
     (_Init_thread_header(&DAT_146af633c), DAT_146af633c == -1)) {
    psVar12 = local_90;
    if (DAT_146ab6358 == (longlong *)0x0) {
LAB_1424a955b:
      DAT_146af6338 = '\0';
    }
    else {
      local_a0 = (undefined2 *)0x0;
      local_98 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
      FGenericPlatformString::Memcpy(local_a0,L"Vulkan",0xe);
      bVar5 = true;
      bVar4 = true;
      psVar7 = (short *)(**(code **)(*DAT_146ab6358 + 0x20))();
      local_90 = (short *)0x0;
      local_84 = 0;
      psVar12 = psVar11;
      if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
        do {
          lVar19 = lVar19 + 1;
        } while (psVar7[lVar19] != 0);
        iVar18 = (int)lVar19 + 1;
        local_88 = iVar18;
        if (0 < iVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
        }
        iVar10 = local_88;
        psVar12 = local_90;
        FGenericPlatformString::Memcpy(local_90,psVar7,(longlong)iVar18 * 2);
      }
      puVar9 = &DAT_143f3eda8;
      if ((int)local_98 != 0) {
        puVar9 = local_a0;
      }
      psVar7 = &DAT_143f3eda8;
      if (iVar10 != 0) {
        psVar7 = psVar12;
      }
      lVar19 = (longlong)puVar9 - (longlong)psVar7;
      do {
        sVar2 = *psVar7;
        sVar3 = *(short *)((longlong)psVar7 + lVar19);
        if (sVar2 != sVar3) break;
        psVar7 = psVar7 + 1;
      } while (sVar3 != 0);
      if (sVar2 != sVar3) goto LAB_1424a955b;
      DAT_146af6338 = '\x01';
    }
    puVar9 = local_a0;
    if ((bVar4) && (psVar12 != (short *)0x0)) {
      FMemory::Free(psVar12);
    }
    if ((bVar5) && (puVar9 != (undefined2 *)0x0)) {
      FMemory::Free(puVar9);
    }
    _Init_thread_footer(&DAT_146af633c);
  }
  if ((DAT_146af6330 != '\0') || (iVar10 = local_70, DAT_146af6338 != '\0')) {
    iVar10 = 0x100;
  }
  lVar19 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 4) {
    if (0 < local_res18[0]) {
      psVar12 = psVar11;
      psVar7 = psVar11;
      do {
        pfVar15 = (float *)(local_78 + (longlong)((int)psVar12 * local_res20[0]) * 4);
        puVar8 = (undefined1 *)((int)psVar7 + lVar19);
        psVar6 = psVar11;
        if (0 < local_res20[0]) {
          do {
            fVar1 = *pfVar15;
            pfVar15 = pfVar15 + 1;
            uVar16 = (int)psVar6 + 1;
            psVar6 = (short *)(ulonglong)uVar16;
            *puVar8 = (char)(int)(fVar1 * 255.0);
            puVar8 = puVar8 + 1;
          } while ((int)uVar16 < local_res20[0]);
        }
        uVar16 = (int)psVar12 + 1;
        psVar12 = (short *)(ulonglong)uVar16;
        psVar7 = (short *)(ulonglong)(uint)((int)psVar7 + local_80 * iVar17);
      } while ((int)uVar16 < local_res18[0]);
    }
  }
  else if (0 < local_res18[0]) {
    iVar17 = local_80 * iVar17;
    psVar12 = psVar11;
    psVar7 = psVar11;
    do {
      _guard_xfg_dispatch_icall_nop
                ((void *)((int)psVar12 + lVar19),(void *)((int)psVar7 + local_78),(longlong)iVar17);
      uVar16 = (int)psVar11 + 1;
      psVar11 = (short *)(ulonglong)uVar16;
      psVar7 = (short *)(ulonglong)(uint)((int)psVar7 + iVar10);
      psVar12 = (short *)(ulonglong)(uint)((int)psVar12 + iVar17);
    } while ((int)uVar16 < local_res18[0]);
  }
LAB_1424a9222:
  if (local_68.s.LowPart == 0) {
    (**(code **)(*DAT_146ab6358 + 0x6c0))(DAT_146ab6358,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else if (local_68.s.LowPart == 1) {
    (**(code **)(*DAT_146ab6358 + 800))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0xc) = 7;
  QueryPerformanceCounter(&local_60);
  if (local_50 != (uint *)0x0) {
    *local_50 = *local_50 + (local_60.s.LowPart - local_58);
  }
  if (*(int *)(param_1 + 8) != 4) {
    _DAT_146532878 = 0.0;
    if (local_50 != (uint *)0x0) {
      _DAT_146532878 = (float)(DAT_1468b02f8 * 1000.0 * (double)*local_50);
    }
    return;
  }
  if (local_50 != (uint *)0x0) {
    _DAT_146532874 = (float)(DAT_1468b02f8 * 1000.0 * (double)*local_50);
    return;
  }
  _DAT_146532874 = 0.0;
  return;
}



// FUNCTION 1424a95a0 FUN_1424a95a0 body=541 status=ok
// SIG undefined FUN_1424a95a0(void)

void FUN_1424a95a0(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res18;
  longlong local_res20;
  LARGE_INTEGER local_38;
  longlong local_30;
  longlong local_28 [2];
  
  cVar2 = FUN_1424a40c0();
  lVar7 = DAT_146af59c8;
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar6 = 0;
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_1424a9604;
  }
  lVar4 = lVar6;
LAB_1424a9604:
  if (0 < *(int *)(lVar4 + lVar7)) {
    QueryPerformanceCounter(&local_38);
    local_res20 = 0;
    local_res18 = 0;
    *(double *)(param_1 + 0x118) = (double)local_38.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (param_2 == 1) {
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res20,*(undefined8 *)(param_1 + 0x38));
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res18,*(undefined8 *)(param_1 + 0x48));
      lVar7 = *(longlong *)(param_1 + 0x140);
    }
    else if (param_2 == 2) {
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res20,*(undefined8 *)(param_1 + 0x50));
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res18,*(undefined8 *)(param_1 + 0x60));
      lVar7 = *(longlong *)(param_1 + 0x150);
    }
    else {
      lVar7 = lVar6;
      if (param_2 == 3) {
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res20,*(undefined8 *)(param_1 + 0x68));
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res18,*(undefined8 *)(param_1 + 0x78));
        lVar7 = *(longlong *)(param_1 + 0x160);
      }
    }
    lVar4 = local_res18;
    lVar5 = operator_new(0x40);
    if (lVar5 != 0) {
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      local_28[0] = local_res20;
      if (local_res20 != 0) {
        LOCK();
        *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
        UNLOCK();
      }
      local_30 = lVar4;
      lVar6 = FUN_142494860(lVar5,param_1,param_2,lVar7,local_28,&local_30,0xffffffff);
    }
    iVar1 = *(int *)(param_1 + 0x138);
    *(int *)(param_1 + 0x138) = iVar1 + 1;
    if (*(int *)(param_1 + 0x13c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x130,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar1 * 8) = lVar6;
    FUN_1424a3e80(lVar6);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  }
  return;
}



// FUNCTION 1424a97c0 FUN_1424a97c0 body=355 status=ok
// SIG undefined FUN_1424a97c0(void)

void FUN_1424a97c0(longlong param_1,longlong param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_res18 [2];
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  if (param_2 != 0) {
    plVar8 = *(longlong **)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x50);
    plVar7 = plVar8 + iVar1;
    for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
      if (*plVar8 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x50) = iVar1 + 1;
    if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x48);
    }
    *(longlong *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x48)) = param_2;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGbxLagCompensationManager::OnActorEndPlay",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(local_res18,pwVar3 + 2,1);
    plVar7 = (longlong *)(param_2 + 0x2a0);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar5 = FWeakObjectPtr::Get(&local_28), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_20);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
    iVar1 = *(int *)(param_2 + 0x2a8);
    *(int *)(param_2 + 0x2a8) = iVar1 + 1;
    if (*(int *)(param_2 + 0x2ac) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
    }
    puVar6 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar7);
    *puVar6 = local_28;
    puVar6[1] = local_24;
    *(longlong *)(puVar6 + 2) = local_20;
  }
  return;
}



// FUNCTION 1424a9930 FUN_1424a9930 body=759 status=ok
// SIG undefined FUN_1424a9930(void)

void FUN_1424a9930(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar16;
  bool bVar17;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_58 [32];
  ulonglong uVar15;
  
  if (*(char *)(param_1 + 0x9c) != '\0') {
    FUN_141ee24f0(0);
    lVar8 = *(longlong *)(param_1 + 0x1a0);
    uVar11 = 0;
    if (lVar8 != 0) {
      FUN_1424a9c30(lVar8,0);
      if (*(longlong *)(lVar8 + 0x70) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar8 + 0x58) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar8,0x80);
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    plVar10 = *(longlong **)(param_1 + 0x130);
    uVar15 = (longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff;
    if (plVar10 + *(int *)(param_1 + 0x138) < plVar10) {
      uVar15 = uVar11;
    }
    uVar12 = uVar11;
    if (uVar15 != 0) {
      do {
        lVar8 = *plVar10;
        if (lVar8 != 0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar8 + 0x28);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar8 + 0x20);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar8 + 0x18);
          FMemory::operator_delete(lVar8,0x40);
        }
        plVar10 = plVar10 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar15);
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x13c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x130),0);
    }
    lVar8 = (longlong)DAT_146af5878;
    if (DAT_146af5878 != 0) {
      bVar17 = *DAT_146af5870 != param_1;
      uVar15 = uVar11;
      plVar10 = DAT_146af5870;
      uVar12 = uVar11;
      do {
        uVar13 = (uint)uVar15;
        uVar14 = uVar13;
        do {
          uVar11 = uVar11 + 1;
          uVar14 = uVar14 + 1;
          uVar15 = (ulonglong)uVar14;
          if (lVar8 <= (longlong)uVar11) break;
        } while (bVar17 == (plVar10[uVar11] != param_1));
        if (bVar17 != false) {
          uVar16 = (uint)uVar12;
          if (uVar16 != uVar13) {
            _guard_xfg_dispatch_icall_nop
                      (plVar10 + (int)uVar16,plVar10 + (int)uVar13,
                       (longlong)(int)(uVar14 - uVar13) << 3);
            plVar10 = DAT_146af5870;
          }
          uVar12 = (ulonglong)(uVar16 + (uVar14 - uVar13));
        }
        bVar17 = (bool)(bVar17 ^ 1);
      } while ((longlong)uVar11 < lVar8);
      DAT_146af5878 = (int)uVar12;
    }
    *(undefined1 *)(param_1 + 0x9c) = 0;
    if (*(longlong *)(param_1 + 400) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x10) = 0;
    }
    if (*(longlong *)(param_1 + 0x198) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x10) = 0;
    }
    local_res8 = param_1;
    if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
        local_res18 = param_1;
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_142495a50(&local_res18,uVar9);
      }
      else {
        plVar10 = (longlong *)FUN_14249a040(local_58,0,0xff);
        *(longlong *)(*plVar10 + 0x10) = param_1;
        lVar8 = *plVar10;
        lVar5 = plVar10[2];
        lVar3 = plVar10[1];
        lVar4 = *(longlong *)(lVar8 + 0x20);
        piVar1 = (int *)(lVar4 + 0x48);
        if (lVar4 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_res10 = lVar4;
        FUN_140445100(lVar8,lVar3,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(local_res10);
          }
        }
      }
    }
    else {
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142495a50(&local_res8,uVar9);
    }
    FUN_141ee24f0(0);
  }
  return;
}



// FUNCTION 1424a9c30 FUN_1424a9c30 body=180 status=ok
// SIG undefined FUN_1424a9c30(void)

void FUN_1424a9c30(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x48));
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0x60) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar1 + 0x50) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x50));
  }
  if (param_2 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) == iVar2) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo();
  return;
}



// FUNCTION 1424a9cf0 FUN_1424a9cf0 body=52 status=ok
// SIG undefined FUN_1424a9cf0(void)

void FUN_1424a9cf0(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_146ab62eb == '\0') {
    uVar1 = FExternalTextureRegistry::Get();
    FExternalTextureRegistry::UnregisterExternalTexture(uVar1,param_1 + 0x78);
    return;
  }
  return;
}



// FUNCTION 1424a9d30 FUN_1424a9d30 body=215 status=ok
// SIG undefined FUN_1424a9d30(void)

void FUN_1424a9d30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  for (plVar2 = *(longlong **)(param_1 + 0x60); plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)plVar2[1]) {
    lVar3 = *plVar2;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    if (0x7fffffff < *(uint *)(lVar3 + 0x14)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(lVar3 + 8,0);
    }
    iVar1 = *(int *)(param_1 + 0x80);
    iVar4 = iVar1 + 1;
    *(int *)(param_1 + 0x80) = iVar4;
    if (*(int *)(param_1 + 0x84) < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x78);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  while (lVar3 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
    FMemory::operator_delete(*(longlong *)(param_1 + 0x60),0x18);
    *(longlong *)(param_1 + 0x60) = lVar3;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001424a9e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x58) + 8))((longlong *)(param_1 + 0x58),0);
  return;
}



// FUNCTION 1424a9e10 FUN_1424a9e10 body=122 status=ok
// SIG undefined FUN_1424a9e10(void)

void FUN_1424a9e10(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar3 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar3 + param_2),(void *)((param_2 + param_3) + lVar3),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
    if (param_4 != '\0') {
      FUN_1424ab300(param_1);
    }
  }
  return;
}



// FUNCTION 1424a9e90 FUN_1424a9e90 body=238 status=ok
// SIG undefined FUN_1424a9e90(void)

void FUN_1424a9e90(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar2 = param_1;
    }
    plVar3 = (longlong *)(lVar2 + 0x10 + (longlong)param_2 * 0x20);
    iVar4 = param_3;
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)(param_1 + 0x108);
    iVar1 = (iVar4 - param_2) - param_3;
    if (iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar2 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + lVar2),(longlong)iVar1 << 5);
      iVar4 = *(int *)(param_1 + 0x108);
    }
    *(int *)(param_1 + 0x108) = iVar4 - param_3;
    if (param_4 != '\0') {
      FUN_1424ab390(param_1);
    }
  }
  return;
}



// FUNCTION 1424a9f80 FUN_1424a9f80 body=4121 status=ok
// SIG undefined FUN_1424a9f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424a9f80(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  short *psVar16;
  int iVar17;
  undefined2 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int *in_stack_00000028;
  undefined1 auStack_7a8 [32];
  undefined8 *local_788;
  undefined4 *local_780;
  undefined *local_778;
  double local_770;
  short *local_768;
  undefined8 local_760;
  int local_758;
  int local_754;
  float local_750;
  undefined8 local_748;
  int local_740;
  undefined8 local_73c;
  longlong local_730;
  ulonglong local_728;
  longlong local_720;
  ulonglong local_718;
  float local_710;
  float local_70c;
  undefined4 local_708;
  undefined4 local_704;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  float local_6e8;
  float local_6e4;
  float local_6e0;
  float local_6dc;
  float local_6d8;
  float local_6d4;
  float local_6d0;
  float local_6cc;
  longlong local_6c8 [2];
  LARGE_INTEGER local_6b8;
  longlong local_6b0;
  int *local_6a8;
  short *local_6a0;
  int local_698;
  undefined2 *local_690;
  int local_688;
  undefined2 *local_680;
  int local_678;
  undefined2 *local_670;
  int local_668;
  undefined2 *local_660;
  int local_658;
  longlong *local_650;
  longlong *local_648;
  longlong local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  longlong *local_600;
  undefined8 local_5f8;
  int local_5f0;
  undefined1 local_5ec;
  undefined1 local_5e8 [8];
  longlong *local_5e0;
  undefined1 local_5d0 [8];
  longlong *local_5c8;
  undefined **local_5b8 [2];
  undefined4 local_5a4;
  float local_580;
  float local_57c;
  undefined **local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined1 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  float local_4f8;
  longlong local_4c0;
  undefined8 local_4b8;
  undefined **local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined1 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_470;
  undefined4 local_46c;
  uint local_468;
  uint local_464;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined2 local_420;
  undefined1 local_41e;
  undefined8 local_41c;
  undefined8 uStack_414;
  undefined1 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined1 local_400 [136];
  undefined1 local_378 [24];
  longlong local_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  int local_310;
  undefined1 local_30c;
  undefined1 local_308;
  undefined1 local_2f8 [8];
  double local_2f0;
  double local_2b8;
  double local_240;
  undefined8 *local_150;
  ulonglong local_d8;
  longlong local_78 [10];
  
  lVar14 = DAT_146af5700;
  if (param_1 == 0) {
    return;
  }
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_7a8;
  local_6a8 = in_stack_00000028;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  if (DAT_1468b02d8 == 0) {
    return;
  }
  iVar13 = *DAT_146af56a0;
  local_6b0 = param_1;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar10 = 1;
    if (DVar5 == DAT_1468c21c0) goto LAB_1424aa029;
  }
  else {
LAB_1424aa029:
    lVar10 = 0;
  }
  iVar11 = *(int *)(lVar14 + lVar10 * 4);
  cVar4 = FUN_1415ad5c0();
  if (((cVar4 != '\0') && (0 < iVar11)) && (iVar13 <= iVar11)) {
    iVar13 = iVar11;
  }
  if (iVar13 == 0) {
    return;
  }
  local_740 = *in_stack_00000028;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),&local_758);
  if (*(char *)(param_1 + 0x94) == '\0') {
    fVar27 = *(float *)(param_1 + 0x138);
  }
  else {
    fVar27 = 1.0;
  }
  local_758 = (int)((float)local_758 / fVar27);
  if (*(char *)(param_1 + 0x94) == '\0') {
    fVar27 = *(float *)(param_1 + 0x138);
  }
  else {
    fVar27 = 1.0;
  }
  local_754 = (int)((float)local_754 / fVar27);
  if (0 < iVar13) {
    *in_stack_00000028 = (int)((float)local_754 * *DAT_146af5748);
  }
  uVar9 = UEngine::GetSubtitleFont();
  FUN_14244fa00(uVar9);
  FUN_1415a97c0(local_2f8,*DAT_146af5688 == 0);
  lVar14 = DAT_146af56b8;
  if (iVar13 < 1) goto LAB_1424aaf2b;
  local_748 = *(longlong *)(DAT_1469f4590 + 0x18);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar10 = 1;
    if (DVar5 == DAT_1468c21c0) goto LAB_1424aa1b5;
  }
  else {
LAB_1424aa1b5:
    lVar10 = 0;
  }
  iVar11 = *(int *)(lVar14 + lVar10 * 4);
  if (0x5a0 < local_754) {
    iVar11 = iVar11 + 4;
  }
  FUN_1417efd90(&local_638);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  local_638 = UEngine::GetSubtitleFont();
  local_2f0 = 1000.0 / local_2f0;
  if (999.89 <= local_2f0) {
    local_2f0 = 999.89;
  }
  fVar27 = (float)local_758;
  iVar6 = (int)DAT_146532900;
  fVar29 = (float)(DAT_1465328f8 * -3) + (float)(int)((ulonglong)DAT_146532900 >> 0x20);
  local_5f0 = iVar11;
  FString::PrintfImpl(&local_6a0,L"FPS %5.1f",local_2f0);
  psVar16 = &DAT_143f3eda8;
  if (local_698 != 0) {
    psVar16 = local_6a0;
  }
  local_768 = (short *)0x0;
  local_760 = 0;
  iVar11 = 0;
  if ((psVar16 != (short *)0x0) && (iVar11 = 0, *psVar16 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (psVar16[lVar14] != 0);
    uVar12 = (int)lVar14 + 1;
    local_760 = (ulonglong)uVar12;
    iVar11 = 0;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_768,0);
      iVar11 = local_760._4_4_;
    }
    FGenericPlatformString::Memcpy(local_768,psVar16,(longlong)(int)uVar12 * 2);
  }
  if (local_6a0 != (short *)0x0) {
    FMemory::Free();
  }
  iVar17 = 0;
  if (iVar13 == 2) {
    iVar13 = 1;
LAB_1424aa325:
    if (99.89 <= (double)local_150) {
      local_150 = (undefined8 *)0x4058f8f5c28f5c29;
    }
    uVar19 = SUB84(local_2b8,0);
    uVar21 = (undefined4)((ulonglong)local_2b8 >> 0x20);
    uVar20 = SUB84(local_240,0);
    uVar22 = (undefined4)((ulonglong)local_240 >> 0x20);
    if (iVar13 == 2) {
      if (99.99 <= local_2b8) {
        uVar19 = 0x28f5c28f;
        uVar21 = 0x4058ff5c;
      }
      if (99.99 <= local_240) {
        uVar20 = 0x28f5c28f;
        uVar22 = 0x4058ff5c;
      }
      local_788 = local_150;
      FString::PrintfImpl(&local_690,L" | GT %4.1f ms | RT %4.1f ms | GPU %4.1f ms",
                          CONCAT44(uVar21,uVar19),CONCAT44(uVar22,uVar20));
      uVar3 = local_760;
      lVar14 = -1;
      puVar18 = &DAT_143f3eda8;
      if (local_688 != 0) {
        puVar18 = local_690;
      }
      do {
        lVar14 = lVar14 + 1;
      } while (puVar18[lVar14] != 0);
      iVar13 = (int)lVar14;
      if (iVar13 != 0) {
        iVar8 = (int)local_760;
        lVar14 = (longlong)(int)local_760;
        iVar7 = (uint)((int)local_760 == 0) + (int)local_760 + iVar13;
        local_760 = CONCAT44(local_760._4_4_,iVar7);
        if (iVar11 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_768,uVar3 & 0xffffffff);
          iVar11 = local_760._4_4_;
        }
        psVar16 = local_768 + (lVar14 - (ulonglong)(iVar8 != 0));
        _guard_xfg_dispatch_icall_nop(psVar16,puVar18,(longlong)iVar13 * 2);
        psVar16[iVar13] = 0;
      }
LAB_1424aa4ce:
      if (local_690 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else if (iVar13 == 1) {
      if (local_240 <= local_2b8) {
        uVar20 = uVar19;
        uVar22 = uVar21;
      }
      if (99.89 <= (double)CONCAT44(uVar22,uVar20)) {
        uVar20 = 0xc28f5c29;
        uVar22 = 0x4058f8f5;
      }
      FString::PrintfImpl(&local_680,L" | CPU %4.1f ms | GPU %4.1f ms",CONCAT44(uVar22,uVar20),
                          local_150);
      uVar3 = local_760;
      lVar14 = -1;
      puVar18 = &DAT_143f3eda8;
      if (local_678 != 0) {
        puVar18 = local_680;
      }
      do {
        lVar14 = lVar14 + 1;
      } while (puVar18[lVar14] != 0);
      iVar13 = (int)lVar14;
      local_690 = local_680;
      if (iVar13 != 0) {
        iVar8 = (int)local_760;
        lVar14 = (longlong)(int)local_760;
        iVar7 = (uint)((int)local_760 == 0) + (int)local_760 + iVar13;
        local_760 = CONCAT44(local_760._4_4_,iVar7);
        if (iVar11 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_768,uVar3 & 0xffffffff);
          iVar11 = local_760._4_4_;
        }
        psVar16 = local_768 + (lVar14 - (ulonglong)(iVar8 != 0));
        _guard_xfg_dispatch_icall_nop(psVar16,puVar18,(longlong)iVar13 * 2);
        psVar16[iVar13] = 0;
        local_690 = local_680;
      }
      goto LAB_1424aa4ce;
    }
    if (iVar17 != 0) {
      QueryPerformanceCounter(&local_6b8);
      if (((DAT_146af5a10 == 0.0) ||
          (1.0 < ((double)local_6b8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_146af5a10)) &&
         (DAT_146ab6358 != (longlong *)0x0)) {
        (**(code **)(*DAT_146ab6358 + 0x1f0))(DAT_146ab6358,&DAT_146532910);
      }
      if (((DAT_146532910 < 0) || (DAT_146532918 < 0)) || (DAT_146532920 < 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (iVar17 == 2) {
          local_770 = (double)((float)DAT_146532910 * 9.313226e-10);
          local_778 = (undefined *)(double)((float)_DAT_146532930 * 9.313226e-10);
          local_780 = (undefined4 *)(double)((float)_DAT_146532950 * 9.313226e-10);
          local_788 = (undefined8 *)(double)((float)_DAT_146532960 * 9.313226e-10);
          FString::PrintfImpl(&local_670,
                              L" | VRAM Usage %.2f Res %.2f AvailRes %.2f Budget %.2f - Alloc %.2f Total %.2f"
                              ,(double)((float)_DAT_146532958 * 9.313226e-10),
                              (double)((float)_DAT_146532968 * 9.313226e-10));
          uVar3 = local_760;
          lVar14 = -1;
          puVar18 = &DAT_143f3eda8;
          if (local_668 != 0) {
            puVar18 = local_670;
          }
          do {
            lVar14 = lVar14 + 1;
          } while (puVar18[lVar14] != 0);
          iVar13 = (int)lVar14;
          if (iVar13 != 0) {
            iVar17 = (int)local_760;
            lVar14 = (longlong)(int)local_760;
            iVar8 = (uint)((int)local_760 == 0) + iVar13 + (int)local_760;
            local_760 = CONCAT44(local_760._4_4_,iVar8);
            if (iVar11 < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_768,uVar3 & 0xffffffff);
            }
            psVar16 = local_768 + (lVar14 - (ulonglong)(iVar17 != 0));
            _guard_xfg_dispatch_icall_nop(psVar16,puVar18,(longlong)iVar13 * 2);
            psVar16[iVar13] = 0;
          }
        }
        else {
          if (iVar17 != 1) goto LAB_1424aa75a;
          FString::PrintfImpl(&local_660,L" | VRAM %.2f / %.2f GB",
                              (double)((float)_DAT_146532958 * 9.313226e-10),
                              (double)((float)DAT_146532910 * 9.313226e-10));
          uVar3 = local_760;
          lVar14 = -1;
          puVar18 = &DAT_143f3eda8;
          if (local_658 != 0) {
            puVar18 = local_660;
          }
          do {
            lVar14 = lVar14 + 1;
          } while (puVar18[lVar14] != 0);
          iVar13 = (int)lVar14;
          local_670 = local_660;
          if (iVar13 != 0) {
            iVar17 = (int)local_760;
            lVar14 = (longlong)(int)local_760;
            iVar8 = (uint)((int)local_760 == 0) + iVar13 + (int)local_760;
            local_760 = CONCAT44(local_760._4_4_,iVar8);
            if (iVar11 < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_768,uVar3 & 0xffffffff);
            }
            psVar16 = local_768 + (lVar14 - (ulonglong)(iVar17 != 0));
            _guard_xfg_dispatch_icall_nop(psVar16,puVar18,(longlong)iVar13 * 2);
            psVar16[iVar13] = 0;
            local_670 = local_660;
          }
        }
        if (local_670 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  else {
    if (iVar13 == 10) {
      iVar13 = 2;
      goto LAB_1424aa325;
    }
    if (iVar13 == 0xb) {
      iVar13 = 1;
      iVar17 = iVar13;
      goto LAB_1424aa325;
    }
    if (iVar13 == 0xc) {
      iVar13 = 2;
      iVar17 = 1;
      goto LAB_1424aa325;
    }
    if (iVar13 == 0xd) {
      iVar13 = 2;
      iVar17 = iVar13;
      goto LAB_1424aa325;
    }
  }
LAB_1424aa75a:
  psVar16 = &DAT_143f3eda8;
  if ((int)local_760 != 0) {
    psVar16 = local_768;
  }
  local_728 = 0;
  local_730 = 0;
  if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (psVar16[lVar14] != 0);
    uVar12 = (int)lVar14 + 1;
    local_728 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_730,0);
    }
    FGenericPlatformString::Memcpy(local_730,psVar16,(longlong)(int)uVar12 * 2);
  }
  FUN_1418388a0(*(undefined8 *)(local_748 + 8),&local_650);
  local_788 = (undefined8 *)CONCAT44(local_788._4_4_,0x3f800000);
  (**(code **)(*local_650 + 0x18))(local_650,&local_710,&local_730,&local_638);
  if (local_648 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_648 + 1;
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_648)(local_648);
      LOCK();
      piVar1 = (int *)((longlong)local_648 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_648 + 8))(local_648,1);
      }
    }
  }
  if (local_730 != 0) {
    FMemory::Free();
  }
  local_6c8[0] = 0;
  local_6c8[1] = 0;
  local_73c = 0;
  fVar26 = (float)-((int)ROUND(-0.5 - (float)-((int)ROUND(-0.5 - local_70c * 2.0) >> 1)) >> 1);
  fVar28 = fVar26 + local_710;
  fVar27 = (fVar27 + (float)iVar6) - fVar28;
  local_750 = fVar26 + local_70c;
  uVar9 = FText::FromString(local_5e8,local_6c8);
  local_468 = local_468 & 0xfffffffc;
  local_464 = local_464 & 0xfffffffe;
  local_4a0 = local_73c;
  local_498 = 0;
  local_490 = 0;
  local_480 = _DAT_1464aa6c0;
  uStack_478 = _DAT_1464aa6c8;
  local_488 = 0;
  local_4a8 = &PTR__scalar_deleting_destructor__1444d54b8;
  local_460 = 0;
  uStack_458 = 0;
  local_470 = 0;
  local_430 = DAT_1468b5d88;
  uStack_428 = DAT_1468b5d88;
  local_46c = 0x3f800000;
  local_450 = 0;
  uStack_448 = 0;
  local_420 = 0;
  local_440 = DAT_1464aa6e0;
  uStack_43c = DAT_1464aa6e4;
  uStack_438 = DAT_1464aa6e8;
  uStack_434 = DAT_1464aa6ec;
  local_41e = 0;
  local_41c = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  uStack_414 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  local_40c = 1;
  FCanvasTileItem::FCanvasTileItem(local_400,&local_73c,&DAT_1468b5d88,s_fff_fff_fff__146532898);
  local_408 = 0x3f800000;
  local_404 = 0x3f800000;
  local_498 = CONCAT44(2,(undefined4)local_498);
  local_480._0_1_ = s_fff_fff_fff__146532898[0];
  local_480._1_1_ = s_fff_fff_fff__146532898[1];
  local_480._2_1_ = s_fff_fff_fff__146532898[2];
  local_480._3_1_ = s_fff_fff_fff__146532898[3];
  local_480._4_1_ = s_fff_fff_fff__146532898[4];
  local_480._5_1_ = s_fff_fff_fff__146532898[5];
  local_480._6_1_ = s_fff_fff_fff__146532898[6];
  local_480._7_1_ = s_fff_fff_fff__146532898[7];
  uStack_478 = ram0x0001465328a0;
  local_4a8 = &PTR_FUN_1444d5500;
  FText::FText(local_378,uVar9);
  local_360 = local_638;
  if (local_638 == 0) {
LAB_1424aaa14:
    local_360 = 0;
  }
  else {
    lVar10 = UFont::GetPrivateStaticClass();
    lVar14 = *(longlong *)(local_360 + 0x10);
    if ((*(int *)(lVar14 + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar14 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1424aaa14;
  }
  local_358 = local_638;
  local_350 = local_630;
  local_328 = local_608;
  local_320 = local_600;
  local_348 = local_628;
  uStack_340 = uStack_620;
  local_338 = local_618;
  uStack_330 = uStack_610;
  if (local_600 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_600 + 1) = (int)local_600[1] + 1;
    UNLOCK();
  }
  local_318 = local_5f8;
  local_310 = local_5f0;
  local_30c = local_5ec;
  local_308 = 1;
  local_498 = CONCAT44(0xb,(undefined4)local_498);
  if (local_5e0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_5e0 + 1;
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_5e0)(local_5e0);
      LOCK();
      piVar1 = (int *)((longlong)local_5e0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_5e0 + 8))(local_5e0,1);
      }
    }
  }
  if (local_6c8[0] != 0) {
    FMemory::Free();
  }
  local_41e = DAT_146532890;
  local_41c = _DAT_1465328a8;
  uStack_414 = uRam00000001465328b0;
  local_530 = 0;
  local_538 = &PTR_FUN_1444d5548;
  local_778 = &DAT_1465328b8;
  local_780 = &local_708;
  local_510 = _DAT_1465328c8;
  uStack_508 = uRam00000001465328d0;
  local_788 = &local_700;
  local_4f8 = (float)DAT_1465328f8;
  local_528 = 0;
  local_520 = 0;
  local_518 = 0;
  local_500 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_708 = 0x3f800000;
  local_704 = 0x3f800000;
  local_700 = 0;
  local_6f8 = 0;
  local_6f0 = 0;
  FCanvasTileItem::FCanvasTileItem(local_5b8,&local_6f0,DAT_146ac3d68,&local_6f8);
  lVar14 = local_6b0;
  fVar23 = (float)DAT_1465328f8;
  local_5a4 = 2;
  fVar25 = fVar23 + fVar23;
  fVar24 = fVar25 + fVar26 + local_70c;
  local_6e8 = fVar27 - fVar23;
  local_6e4 = fVar29 - fVar23;
  local_580 = fVar28 + fVar25;
  local_57c = fVar24;
  FUN_1428a6b00(local_6b0,local_5b8,&local_6e8);
  local_6e0 = fVar23 * 3.0;
  local_500 = CONCAT44(local_6e0 + local_6e0 + local_750,fVar28 + local_6e0 + local_6e0);
  local_510 = _DAT_1465328e8;
  uStack_508 = uRam00000001465328f0;
  local_6dc = fVar29 - local_6e0;
  local_6e0 = fVar27 - local_6e0;
  FUN_1428a6b00(lVar14,&local_538,&local_6e0);
  local_500 = CONCAT44(fVar25 + fVar25 + local_750,fVar28 + fVar25 + fVar25);
  local_510 = _DAT_1465328d8;
  uStack_508 = uRam00000001465328e0;
  local_6d4 = fVar29 - fVar25;
  local_6d8 = fVar27 - fVar25;
  FUN_1428a6b00(lVar14,&local_538,&local_6d8);
  local_510 = _DAT_1465328c8;
  uStack_508 = uRam00000001465328d0;
  local_500 = CONCAT44(fVar24,fVar28 + fVar25);
  local_6d0 = fVar27 - fVar23;
  local_6cc = fVar29 - fVar23;
  FUN_1428a6b00(lVar14,&local_538,&local_6d0);
  psVar16 = &DAT_143f3eda8;
  if ((int)local_760 != 0) {
    psVar16 = local_768;
  }
  local_720 = 0;
  local_718 = 0;
  if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar16[lVar10] != 0);
    uVar12 = (int)lVar10 + 1;
    local_718 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_720,0);
    }
    FGenericPlatformString::Memcpy(local_720,psVar16,(longlong)(int)uVar12 * 2);
  }
  uVar9 = FText::FromString(local_5d0,&local_720);
  FText::operator=(local_378,uVar9);
  if (local_5c8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_5c8 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5c8)(local_5c8);
      LOCK();
      piVar1 = (int *)((longlong)local_5c8 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_5c8 + 8))(local_5c8,1);
      }
    }
  }
  if (local_720 != 0) {
    FMemory::Free();
  }
  local_748 = CONCAT44(fVar26 * 0.5 + fVar29 + (float)(int)((ulonglong)DAT_146532908 >> 0x20),
                       fVar26 * 0.5 + fVar27 + (float)(int)DAT_146532908);
  FUN_1428a6b00(lVar14,&local_4a8,&local_748);
  local_5b8[0] = &PTR_FUN_143f4c5f0;
  if (local_4c0 != 0) {
    FMemory::Free();
  }
  local_538 = &PTR_FUN_143f4c5f0;
  FUN_140c64b70(&local_4a8);
  if (local_768 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_600 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_600 + 1;
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_600)(local_600);
      LOCK();
      piVar1 = (int *)((longlong)local_600 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_600 + 8))(local_600,1);
      }
    }
  }
  *local_6a8 = local_740;
LAB_1424aaf2b:
  lVar14 = 4;
  plVar15 = local_78;
  do {
    lVar14 = lVar14 + -1;
    *(undefined4 *)(plVar15 + -0xe) = 0;
    if (plVar15[-0xf] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (plVar15 + -0x17);
    plVar15 = plVar15 + -0xf;
  } while (lVar14 != 0);
  return;
}



// FUNCTION 1424aafa0 FUN_1424aafa0 body=443 status=ok
// SIG undefined FUN_1424aafa0(void)

undefined8 FUN_1424aafa0(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  BOOL BVar10;
  DWORD DVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 local_28 [32];
  
  if (DAT_146af5a38 == '\0') {
    FUN_1424a3f80();
    DAT_146af5a38 = '\x01';
  }
  uVar12 = FUN_1424a3f80();
  if ((char)uVar12 == '\0') {
    return uVar12;
  }
  BVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  if (BVar10 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  }
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar11 = GetCurrentThreadId();
    if (DVar11 == DAT_1468c21c0) goto LAB_1424ab024;
    bVar6 = false;
  }
  else {
LAB_1424ab024:
    bVar6 = true;
  }
  if (DAT_1468c21c8 == 0) {
LAB_1424ab042:
    bVar7 = false;
  }
  else {
    DVar11 = GetCurrentThreadId();
    if (DVar11 != DAT_1468c21c8) goto LAB_1424ab042;
    bVar7 = true;
  }
  iVar2 = DAT_146af5674;
  uVar12 = 0;
  if (((!bVar6) || (param_1 != 1)) && ((!bVar7 || (param_1 != 2)))) goto LAB_1424ab13b;
  uVar12 = 1;
  if (param_1 == DAT_146af5674) goto LAB_1424ab13b;
  DAT_146af5674 = param_1;
  if (DAT_146ac3ac6 == '\0') {
LAB_1424ab0a9:
    if (DAT_146ac3ac5 == '\0') {
      cVar9 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar11 = GetCurrentThreadId();
        if (DVar11 != DAT_1468c21c0) goto LAB_1424ab0dd;
      }
      goto LAB_1424ab091;
    }
LAB_1424ab0dd:
    plVar13 = (longlong *)FUN_14249a580(local_28,0,0xff);
    *(ulonglong *)(*plVar13 + 0x10) = CONCAT44(param_1,iVar2);
    lVar3 = *plVar13;
    lVar8 = plVar13[2];
    lVar4 = plVar13[1];
    lVar5 = *(longlong *)(lVar3 + 0x20);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    FUN_140445100(lVar3,lVar4,(int)lVar8,1);
    uVar12 = 1;
    if (lVar5 == 0) goto LAB_1424ab13b;
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_1424ab13b;
    FGraphEvent::Recycle(lVar5);
  }
  else {
    cVar9 = IsInRenderingThread();
    if (cVar9 == '\0') goto LAB_1424ab0a9;
LAB_1424ab091:
    FBaseGraphTask::GetSmallTaskAllocator();
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,0);
  }
  uVar12 = 1;
LAB_1424ab13b:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  return uVar12;
}



// FUNCTION 1424ab160 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FGameplayEffectExecutionScopedModifierInfo,TSizedDefaultAllocator<32>_>::ResizeGrow
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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x280,0);
  iVar4 = (int)(uVar3 / 0x280);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x280,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1424ab1f0 FUN_1424ab1f0 body=257 status=ok
// SIG undefined FUN_1424ab1f0(void)

void FUN_1424ab1f0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x808);
  if (uVar1 < 0x41) {
    uVar2 = 0x40;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x80c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 5,0);
    uVar2 = (uint)(uVar3 >> 5);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x80c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x800);
  if (uVar2 < 0x41) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 5);
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
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 5,0);
        *(void **)((longlong)param_1 + 0x800) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 5);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 5;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x800) = uVar5;
  return;
}



// FUNCTION 1424ab300 FUN_1424ab300 body=130 status=ok
// SIG undefined FUN_1424ab300(void)

void FUN_1424ab300(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar1 < 9) {
    uVar1 = 8;
    goto LAB_1424ab35b;
  }
  if ((0x3fff < uVar2 - uVar1) || ((int)(uVar1 * 3) < (int)(uVar2 * 2))) {
    if (0x40 < uVar2 - uVar1) {
      if (0 < (int)uVar1) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar1,0);
        uVar2 = *(uint *)(param_1 + 0x14);
      }
      goto LAB_1424ab35b;
    }
    if (uVar1 == 0) goto LAB_1424ab35b;
  }
  uVar1 = uVar2;
LAB_1424ab35b:
  if (uVar1 != uVar2) {
    *(uint *)(param_1 + 0x14) = uVar1;
    TInlineAllocator<8,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x10),uVar1,1);
    return;
  }
  return;
}



// FUNCTION 1424ab390 FUN_1424ab390 body=159 status=ok
// SIG undefined FUN_1424ab390(void)

void FUN_1424ab390(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x108);
  uVar3 = *(uint *)(param_1 + 0x10c);
  if (uVar2 < 9) {
    uVar2 = 8;
    goto LAB_1424ab402;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 5)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 5,0);
        uVar3 = *(uint *)(param_1 + 0x10c);
        uVar2 = (uint)(uVar1 >> 5);
      }
      goto LAB_1424ab402;
    }
    if (uVar2 == 0) goto LAB_1424ab402;
  }
  uVar2 = uVar3;
LAB_1424ab402:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x10c) = uVar2;
    TInlineAllocator<8,FDefaultAllocator>::ForElementType<FBlendedCurve>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x108),uVar2,0x20);
    return;
  }
  return;
}



// FUNCTION 1424ab430 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<640,16>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x280,0);
    iVar3 = (int)(uVar1 / 0x280);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x280,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1424ab4b0 FUN_1424ab4b0 body=74 status=ok
// SIG undefined FUN_1424ab4b0(void)

undefined2 * FUN_1424ab4b0(longlong param_1,undefined2 *param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0) {
    *param_2 = 0x100;
    return param_2;
  }
  FUN_1424ab540(param_2,param_1,*(undefined4 *)(param_1 + 0x78),param_3,
                *(undefined8 *)(param_4 + 0x10),param_4,param_4);
  return param_2;
}



// FUNCTION 1424ab500 FUN_1424ab500 body=61 status=ok
// SIG undefined FUN_1424ab500(void)

undefined8
FUN_1424ab500(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_1424ab540(param_2,param_1,*(undefined4 *)(param_1 + 0x78),param_3,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 1424ab540 FUN_1424ab540 body=796 status=ok
// SIG undefined FUN_1424ab540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 *
FUN_1424ab540(undefined2 *param_1,longlong param_2,uint param_3,longlong *param_4,longlong param_5,
             longlong param_6,longlong param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if ((param_5 == 0) || (param_6 == 0)) {
    *param_1 = 0x101;
  }
  else if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0x102;
  }
  else {
    uVar11 = 0;
    if (param_3 != 0) {
      local_48._0_4_ = (uint)param_4;
      pbVar12 = (byte *)(param_2 + 9);
      uVar10 = (uint)local_48;
      local_58 = param_3;
      local_48 = param_4;
      do {
        lVar5 = FUN_1424a1d30(pbVar12 + -9,param_5);
        if (lVar5 == 0) {
          *param_1 = 0x103;
          return param_1;
        }
        bVar4 = false;
        if (pbVar12[-1] != 0) {
          if (*(int *)(lVar5 + 0x30) < 2) {
            if ((*(uint *)(*(longlong *)(lVar5 + 0x10) + 0xb8) >> 0x15 & 1) == 0) {
              *param_1 = 0x105;
              return param_1;
            }
            plVar8 = (longlong *)(*(int *)(lVar5 + 0x44) + param_6);
            lVar5 = *(longlong *)(lVar5 + 0x70);
            if ((int)plVar8[1] <= (int)(uint)*pbVar12) goto LAB_1424ab82b;
            if ((int)plVar8[1] == 0) {
              param_6 = 0;
            }
            else {
              param_6 = (longlong)(int)(*(int *)(lVar5 + 0x34) * (uint)*pbVar12) + *plVar8;
            }
          }
          else {
            uVar10 = (uint)*pbVar12;
            if (*(int *)(lVar5 + 0x30) <= (int)uVar10) {
LAB_1424ab82b:
              *param_1 = 0x104;
              return param_1;
            }
            bVar4 = true;
          }
        }
        if (uVar11 < local_58 - 1) {
          if (lVar5 == 0) {
LAB_1424ab840:
            *param_1 = 0x106;
            return param_1;
          }
          lVar6 = UObjectProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            uVar7 = 0;
            if (bVar4) {
              uVar7 = uVar10;
            }
            param_6 = *(longlong *)
                       ((longlong)*(int *)(lVar5 + 0x44) +
                       (int)(*(int *)(lVar5 + 0x34) * uVar7) + param_6);
            if (param_6 == 0) {
LAB_1424ab839:
              *param_1 = 0x107;
              return param_1;
            }
            param_5 = *(longlong *)(param_6 + 0x10);
            param_7 = param_6;
          }
          else {
            lVar6 = UWeakObjectProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              uVar7 = 0;
              if (bVar4) {
                uVar7 = uVar10;
              }
              puVar9 = (undefined4 *)
                       ((longlong)*(int *)(lVar5 + 0x44) +
                       (int)(*(int *)(lVar5 + 0x34) * uVar7) + param_6);
              local_50 = *puVar9;
              local_4c = puVar9[1];
              param_6 = FWeakObjectPtr::Get(&local_50);
              if (param_6 == 0) goto LAB_1424ab839;
              param_5 = *(longlong *)(param_6 + 0x10);
              param_7 = param_6;
            }
            else {
              lVar6 = UStructProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) goto LAB_1424ab840;
              param_5 = *(longlong *)(lVar5 + 0x70);
              uVar7 = 0;
              if (bVar4) {
                uVar7 = uVar10;
              }
              param_6 = param_6 + *(int *)(lVar5 + 0x44) +
                        (longlong)(int)(*(int *)(lVar5 + 0x34) * uVar7);
            }
          }
        }
        else {
          uVar7 = 0;
          if (bVar4) {
            uVar7 = uVar10;
          }
          *local_48 = lVar5;
          iVar1 = *(int *)(lVar5 + 0x34);
          iVar2 = *(int *)(lVar5 + 0x44);
          local_48[2] = param_7;
          local_48[1] = (longlong)iVar2 + (int)(iVar1 * uVar7) + param_6;
        }
        uVar11 = uVar11 + 1;
        pbVar12 = pbVar12 + 0x18;
      } while (uVar11 < local_58);
    }
    *(undefined1 *)((longlong)param_1 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 1424ab860 FUN_1424ab860 body=61 status=ok
// SIG undefined FUN_1424ab860(void)

undefined8 FUN_1424ab860(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  while (cVar1 != '\0') {
    FUN_142601600(*(undefined8 *)(param_1 + 0x10));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x28);
    (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
    cVar1 = *(char *)(param_1 + 8);
  }
  return 0;
}



// FUNCTION 1424ab8a0 FUN_1424ab8a0 body=493 status=ok
// SIG undefined FUN_1424ab8a0(void)

undefined8 FUN_1424ab8a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [4];
  
  local_res8[0] = (int)param_1[0x21];
  plVar3 = (longlong *)param_2[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  iVar1 = (int)param_1[0x21];
  if (iVar1 < local_res8[0]) {
    *(int *)(param_1 + 0x21) = local_res8[0];
    iVar5 = local_res8[0] - iVar1;
    if (*(int *)((longlong)param_1 + 0x10c) < local_res8[0]) {
      TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
    }
    plVar3 = (longlong *)param_1[0x20];
    if ((longlong *)param_1[0x20] == (longlong *)0x0) {
      plVar3 = param_1;
    }
    if (iVar5 != 0) {
      plVar3 = plVar3 + (longlong)iVar1 * 4 + 3;
      do {
        plVar3[-1] = 0;
        *plVar3 = 0;
        plVar3 = plVar3 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (local_res8[0] < iVar1) {
    FUN_1424a9e90(param_1,local_res8[0],iVar1 - local_res8[0],1);
  }
  plVar3 = (longlong *)param_1[0x20];
  if ((longlong *)param_1[0x20] == (longlong *)0x0) {
    plVar3 = param_1;
  }
  plVar7 = plVar3 + (longlong)(int)param_1[0x21] * 4;
  if (plVar3 != plVar7) {
    plVar6 = plVar3 + 3;
    do {
      (**(code **)(*param_2 + 0x30))(param_2,plVar3);
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        iVar5 = *(int *)(lVar2 + 0x34) * *(int *)(lVar2 + 0x30);
        iVar1 = (int)*plVar6;
        if (iVar1 < iVar5) {
          *(int *)plVar6 = iVar5;
          if (*(int *)((longlong)plVar6 + 4) < iVar5) {
            TArray<unsigned_char,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>::ResizeGrow
                      (plVar6 + -2,iVar1);
          }
          plVar4 = (longlong *)plVar6[-1];
          if ((longlong *)plVar6[-1] == (longlong *)0x0) {
            plVar4 = plVar6 + -2;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)plVar4 + (longlong)iVar1),0,(longlong)(iVar5 - iVar1));
        }
        else if ((iVar5 < iVar1) && (iVar5 != iVar1)) {
          *(int *)plVar6 = iVar5;
          FUN_1424ab300(plVar6 + -2);
        }
        plVar4 = (longlong *)plVar6[-1];
        if ((longlong *)plVar6[-1] == (longlong *)0x0) {
          plVar4 = plVar6 + -2;
        }
        (**(code **)(*(longlong *)*plVar3 + 0x2c0))((longlong *)*plVar3,param_2,plVar4,0);
      }
      plVar3 = plVar3 + 4;
      plVar6 = plVar6 + 4;
    } while (plVar3 != plVar7);
  }
  return 1;
}



// FUNCTION 1424aba90 FUN_1424aba90 body=835 status=ok
// SIG undefined FUN_1424aba90(void)

undefined8 FUN_1424aba90(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  FUN_14217f6d0(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x40);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x50);
  FUN_14172b230(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x68);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x69);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x78);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x80);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x88,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x88,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x8c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x8c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x90,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x90,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x94,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x94,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x98);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x99);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x9c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x9c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x9c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xa0);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xa1);
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0xa2),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xa2) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xa8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xb0);
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 0xb8);
  (**(code **)(*plVar3 + 0x40))(plVar3,param_1 + 0xc0);
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 200);
  (**(code **)(*plVar3 + 0x40))(plVar3,param_1 + 0xd0);
  FUN_1424ab8a0(param_1 + 0xe8,param_2);
  FUN_142495270(param_2,param_1 + 0x1f8);
  return 1;
}



// FUNCTION 1424abde0 FUN_1424abde0 body=657 status=ok
// SIG undefined FUN_1424abde0(void)

undefined1 FUN_1424abde0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  
  cVar3 = FUN_1424aba90();
  if (cVar3 == '\0') {
    return 0;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x228,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x228,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x228) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x22c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x22c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x22c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x230,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x230,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x230) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x234,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x234,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14217f6d0(param_2,param_1 + 0x240);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x270);
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x271),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x271) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x272);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x273);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x274);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x275);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x276);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x277);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x278);
  puVar2 = *(undefined1 **)param_2[1];
  if (puVar2 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *(undefined1 *)(param_1 + 0x27c) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x27c),1);
  return 1;
}



// FUNCTION 1424ac080 FUN_1424ac080 body=794 status=ok
// SIG undefined FUN_1424ac080(void)

undefined8 FUN_1424ac080(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  char local_res8 [8];
  LARGE_INTEGER local_res10;
  undefined4 local_24;
  undefined4 *local_20;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x14,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x14,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x34,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x34,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_res8[0] = '\0';
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    local_res8[0] = (char)DAT_14653287c;
  }
  plVar2 = (longlong *)param_2[1];
  if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if (local_res8[0] == '\0') {
    FUN_140d25120(param_2,param_1 + 0x50);
  }
  else if (local_res8[0] != '\0') {
    QueryPerformanceCounter(&local_res10);
    uVar4 = 0;
    local_20 = &local_24;
    local_24 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar5 = uVar4;
    if (*(int *)(param_1 + 0x6c) != *(int *)(param_1 + 0x30)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x60,*(int *)(param_1 + 0x30));
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x68);
    }
    iVar3 = *(int *)(param_1 + 0x30) + (int)uVar5;
    *(int *)(param_1 + 0x68) = iVar3;
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x60);
    }
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if ((*(byte *)(param_2 + 5) & 2) == 0) {
        return 1;
      }
      if (local_res8[0] == '\x02') {
        bVar7 = *(int *)(param_1 + 0x14) == 3;
      }
      else {
        bVar7 = local_res8[0] == '\x01';
      }
      if (!bVar7) {
        return 1;
      }
      if (*(int *)(param_1 + 0x74) < 1) {
        FUN_1424b0600(param_1);
      }
      puVar1 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x74,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,param_1 + 0x74,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x74) = *puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      if (-1 < *(int *)(param_1 + 0x74)) {
        (**(code **)(*param_2 + 0x50))
                  (param_2,*(undefined8 *)(param_1 + 0x60),(longlong)*(int *)(param_1 + 0x74));
        return 1;
      }
    }
    else {
      if (local_res8[0] == '\x02') {
        if (*(int *)(param_1 + 0x14) != 3) {
          uVar5 = uVar4;
          if (*(int *)(param_1 + 0x58) < 1) {
            return 1;
          }
          do {
            if (*(int *)(param_1 + 0x14) == 4) {
              *(undefined1 *)(uVar4 + *(longlong *)(param_1 + 0x50)) = 0xff;
            }
            else if (*(int *)(param_1 + 0x14) - 1U < 2) {
              *(undefined1 *)(uVar4 + *(longlong *)(param_1 + 0x50)) = 0;
            }
            uVar6 = (int)uVar5 + 1;
            uVar4 = uVar4 + 1;
            uVar5 = (ulonglong)uVar6;
          } while ((int)uVar6 < *(int *)(param_1 + 0x58));
          return 1;
        }
      }
      else if (local_res8[0] != '\x01') {
        return 1;
      }
      puVar1 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x74,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,param_1 + 0x74,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x74) = *puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      if (*(int *)(param_1 + 0x74) != -1) {
        (**(code **)(*param_2 + 0x50))
                  (param_2,*(undefined8 *)(param_1 + 0x60),(longlong)*(int *)(param_1 + 0x74));
        FUN_14165b8a0(1,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x74),0,0xf);
        return 1;
      }
    }
    FUN_140d25120(param_2,param_1 + 0x50);
  }
  return 1;
}



// FUNCTION 1424ac3a0 FUN_1424ac3a0 body=455 status=ok
// SIG undefined FUN_1424ac3a0(void)

undefined8 FUN_1424ac3a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  FUN_140d66f10(param_2,param_1 + 0x40);
  FUN_140d66f10(param_2,param_1 + 0x38);
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x34,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x34,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    lVar11 = 0;
    do {
      plVar4 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0x48));
      FUN_1424ac080(plVar4,param_2);
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        iVar9 = 0;
        lVar5 = plVar4[10];
        iVar1 = *(int *)(*plVar4 + 0x40);
        iVar2 = *(int *)(*plVar4 + 0x38);
        if (0 < *(int *)((longlong)plVar4 + 0x1c)) {
          do {
            iVar8 = (int)plVar4[3];
            iVar10 = 0;
            if (0 < iVar8) {
              do {
                iVar6 = (int)plVar4[4] + iVar10;
                iVar8 = iVar8 * iVar9 + iVar10;
                iVar10 = iVar10 + 1;
                *(undefined1 *)
                 ((longlong)((*(int *)((longlong)plVar4 + 0x24) + iVar9) * iVar1 * iVar2 + iVar6) +
                 *(longlong *)(*plVar4 + 0x70)) = *(undefined1 *)(iVar8 + lVar5);
                iVar8 = (int)plVar4[3];
              } while (iVar10 < iVar8);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)((longlong)plVar4 + 0x1c));
        }
        *(undefined1 *)(plVar4 + 0xe) = 0;
        FUN_1424b0430(plVar4,1);
        *(undefined4 *)(plVar4 + 8) = *(undefined4 *)((longlong)plVar4 + 0x3c);
        *(undefined4 *)(plVar4 + 9) = *(undefined4 *)((longlong)plVar4 + 0x44);
      }
      iVar7 = iVar7 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x34));
  }
  FUN_1424a5190(param_1,0);
  return 1;
}



// FUNCTION 1424ac570 FUN_1424ac570 body=735 status=ok
// SIG undefined FUN_1424ac570(void)

undefined8 FUN_1424ac570(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_28 [2];
  
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_140d25120(param_2,local_28);
      lVar3 = local_28[0];
      pcVar4 = DAT_146af5860;
      do {
        if (*pcVar4 != pcVar4[local_28[0] - (longlong)DAT_146af5860]) goto LAB_1424ac833;
        pcVar4 = pcVar4 + 1;
      } while ((longlong)pcVar4 - (longlong)DAT_146af5860 < 6);
      plVar2 = (longlong *)param_2[1];
      local_res10[0] = 0;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if (local_res10[0] == DAT_146532868) {
        plVar2 = (longlong *)param_2[1];
        local_res18[0] = 0;
        if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,local_res18,4);
          }
        }
        else {
          local_res18[0] = *(uint *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        if (local_res18[0] == DAT_14653286c) {
          plVar2 = (longlong *)param_2[1];
          local_res20[0] = 0;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,local_res20,4);
            }
          }
          else {
            local_res20[0] = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          if (local_res20[0] == DAT_14653287c) {
            if (lVar3 != 0) {
              FMemory::Free(lVar3);
            }
            goto LAB_1424ac666;
          }
        }
      }
LAB_1424ac833:
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
      return 0;
    }
  }
  else {
    FUN_140d25120(param_2,&DAT_146af5860);
    puVar1 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&DAT_146532868,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&DAT_146532868,4);
      }
    }
    else {
      DAT_146532868 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&DAT_14653286c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&DAT_14653286c,4);
      }
    }
    else {
      DAT_14653286c = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&DAT_14653287c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&DAT_14653287c,4);
      }
    }
    else {
      DAT_14653287c = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
LAB_1424ac666:
  FUN_1424ac3a0(*(undefined8 *)(param_1 + 0x1a0),param_2);
  return 1;
}



// FUNCTION 1424ac850 Serialize body=5 status=ok
// SIG undefined Serialize(void)

void ULevelStreaming::Serialize(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_141763960();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    lVar1 = UObjectBaseUtility::GetOutermost(param_1);
    if ((*(uint *)(lVar1 + 0x50) >> 0x14 & 1) != 0) {
      lVar1 = UObjectBaseUtility::GetOutermost(param_1);
      if (*(int *)(lVar1 + 0x54) != -1) {
        lVar1 = UObjectBaseUtility::GetOutermost(param_1);
        RenameForPIE(param_1,*(undefined4 *)(lVar1 + 0x54));
      }
    }
  }
  return;
}



// FUNCTION 1424ac860 FUN_1424ac860 body=393 status=ok
// SIG undefined FUN_1424ac860(void)

void FUN_1424ac860(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  if (*(void **)(param_1 + 0x70) != (void *)*param_2) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x70),(void *)*param_2,(ulonglong)*(uint *)(param_1 + 0x7c));
  }
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = 0;
  if (0 < iVar1) {
    iVar6 = *(int *)(param_1 + 8);
    uVar5 = uVar3;
    do {
      iVar4 = (int)uVar5;
      if (0 < iVar6) {
        uVar5 = uVar3;
        do {
          iVar8 = (int)uVar5;
          fVar9 = ((float)iVar8 / (float)iVar6) * (float)*(int *)(param_1 + 0x38);
          uVar5 = (ulonglong)(iVar8 + 1U);
          iVar2 = (int)ROUND((fVar9 + fVar9) - 0.5) >> 1;
          fVar9 = ((float)iVar4 / (float)*(int *)(param_1 + 0xc)) * (float)*(int *)(param_1 + 0x3c);
          iVar1 = (int)ROUND((fVar9 + fVar9) - 0.5) >> 1;
          *(undefined1 *)
           ((longlong)
            (*(int *)(param_1 + 0x40) * (iVar4 - *(int *)(param_1 + 0x44) * iVar1) +
            (iVar8 - *(int *)(param_1 + 0x40) * iVar2)) +
           *(longlong *)
            (*(longlong *)
              (*(longlong *)(param_1 + 0x48) +
              (longlong)(*(int *)(param_1 + 0x38) * iVar1 + iVar2) * 8) + 0x50)) =
               *(undefined1 *)((longlong)(iVar6 * iVar4 + iVar8) + *param_2);
          iVar6 = *(int *)(param_1 + 8);
        } while ((int)(iVar8 + 1U) < iVar6);
        iVar1 = *(int *)(param_1 + 0xc);
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while ((int)(iVar4 + 1U) < iVar1);
  }
  uVar5 = uVar3;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      FUN_1424b0430(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar3),1);
      uVar7 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x34));
  }
  return;
}



// FUNCTION 1424ac9f0 FUN_1424ac9f0 body=81 status=ok
// SIG undefined FUN_1424ac9f0(void)

void FUN_1424ac9f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0xd0) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 200);
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (iVar1 != 0) {
    FString::operator=((undefined8 *)(param_1 + 200),param_2);
  }
  return;
}



// FUNCTION 1424aca50 FUN_1424aca50 body=509 status=ok
// SIG undefined FUN_1424aca50(void)

void FUN_1424aca50(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong *plVar11;
  void *pvVar12;
  void *pvVar13;
  size_t _Size;
  longlong *plVar14;
  longlong local_res18;
  longlong local_res20;
  longlong local_58;
  longlong *local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [32];
  
  cVar8 = FUN_1424a40c0();
  if (cVar8 != '\0') {
    FUN_1424ac860(param_1[0x34],param_2);
    local_40 = *(int *)(param_2 + 1);
    _Size = (size_t)local_40;
    pvVar12 = (void *)0x0;
    pvVar13 = (void *)*param_2;
    local_48 = (void *)0x0;
    local_50 = param_1;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
      pvVar12 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,pvVar13,_Size);
    }
    uVar7 = local_3c;
    iVar2 = local_40;
    plVar14 = local_50;
    if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
        uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
        local_58 = *plVar14;
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
          plVar14 = local_50;
        }
        FUN_1424ad480(plVar14,uVar10,&local_58,pvVar12);
        if (pvVar12 != (void *)0x0) {
          FMemory::Free(pvVar12);
        }
      }
      else {
        plVar11 = (longlong *)FUN_14249a6d0(local_38,0,0xff);
        lVar3 = *plVar11;
        *(longlong **)(lVar3 + 0x10) = plVar14;
        *(void **)(lVar3 + 0x18) = pvVar12;
        *(int *)(lVar3 + 0x20) = iVar2;
        *(undefined4 *)(lVar3 + 0x24) = uVar7;
        lVar3 = *plVar11;
        lVar6 = plVar11[2];
        lVar4 = plVar11[1];
        lVar5 = *(longlong *)(lVar3 + 0x30);
        piVar1 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_res20 = lVar5;
        FUN_14048a160(lVar3,lVar4,(int)lVar6,1);
        if (lVar5 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(local_res20);
          }
        }
      }
    }
    else {
      uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
      local_res18 = *plVar14;
      pvVar13 = pvVar12;
      if (local_res18 != 0) {
        LOCK();
        *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
        UNLOCK();
        pvVar13 = local_48;
        plVar14 = local_50;
      }
      FUN_1424ad480(plVar14,uVar10,&local_res18,pvVar12);
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
    }
  }
  return;
}



// FUNCTION 1424acc50 FUN_1424acc50 body=116 status=ok
// SIG undefined FUN_1424acc50(void)

void FUN_1424acc50(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = (int)param_2;
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 0x10) = iVar3;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      TArray<unsigned_char,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>::ResizeGrow();
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = param_1;
    }
    _guard_xfg_dispatch_icall_nop((void *)(lVar2 + iVar1),0,(longlong)(iVar3 - iVar1));
    return;
  }
  if (iVar3 < iVar1) {
    FUN_1424a9e10(param_1,param_2,iVar1 - iVar3,param_3);
  }
  return;
}



// FUNCTION 1424accd0 FUN_1424accd0 body=1954 status=ok
// SIG undefined FUN_1424accd0(void)

void FUN_1424accd0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res18[0] = 0;
  local_res8 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res18);
  FRHIComputeShader::UpdateStats(uVar3);
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
  *puVar8 = &PTR_LAB_144d91e50;
  puVar8[2] = uVar3;
  if (*(short *)(param_1 + 0xda) != 0) {
    local_res8 = *(undefined8 *)(param_3 + 0x10);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *puVar8 = local_res8;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar8;
    *(undefined4 *)(puVar9 + 4) = 2;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
    puVar9[5] = 0;
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    if (*(short *)(param_1 + 0xda) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd8);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d91e40;
      puVar8[2] = uVar3;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar4;
    }
  }
  if (*(short *)(param_1 + 0xde) != 0) {
    local_res8 = *(undefined8 *)(param_3 + 0x40);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *puVar8 = local_res8;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar8;
    *(undefined4 *)(puVar9 + 4) = 2;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
    puVar9[5] = 0;
    uVar4 = *(undefined8 *)(param_3 + 0x40);
    if (*(short *)(param_1 + 0xde) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xdc);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d91e40;
      puVar8[2] = uVar3;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar4;
    }
  }
  if (*(short *)(param_1 + 0xe2) != 0) {
    local_res8 = *(undefined8 *)(param_3 + 0x58);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *puVar8 = local_res8;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar8;
    *(undefined4 *)(puVar9 + 4) = 2;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
    puVar9[5] = 0;
    uVar4 = *(undefined8 *)(param_3 + 0x58);
    if (*(short *)(param_1 + 0xe2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xe0);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d91e40;
      puVar8[2] = uVar3;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar4;
    }
  }
  if (*(short *)(param_1 + 0xe6) != 0) {
    local_res8 = *(undefined8 *)(param_3 + 0x70);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *puVar8 = local_res8;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar8;
    *(undefined4 *)(puVar9 + 4) = 2;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
    puVar9[5] = 0;
    uVar4 = *(undefined8 *)(param_3 + 0x70);
    if (*(short *)(param_1 + 0xe6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xe4);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d91e40;
      puVar8[2] = uVar3;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar4;
    }
  }
  if (*(short *)(param_1 + 0xf8) != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x80);
    uVar6 = FUN_141b33cc0();
    if (*(short *)(param_1 + 0xf8) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf6);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d92090;
      puVar8[2] = uVar3;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar4;
    }
    if (*(short *)(param_1 + 0xfc) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfa);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[2] = uVar3;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar6;
    }
  }
  local_res8 = *(undefined8 *)(param_3 + 0x180);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xfe,&local_res8,0);
  local_res8 = *(undefined8 *)(param_3 + 0x1c8);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x104,&local_res8,0);
  uVar5 = *(ulonglong *)(param_3 + 0x180);
  local_res8._4_4_ = (int)(uVar5 >> 0x20);
  local_res8 = CONCAT44(local_res8._4_4_ /
                        (int)((ulonglong)*(undefined8 *)(param_3 + 0x1c8) >> 0x20),
                        (int)((longlong)
                              ((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) /
                             (longlong)(int)*(undefined8 *)(param_3 + 0x1c8)));
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x10a,&local_res8,0);
  return;
}



// FUNCTION 1424ad480 FUN_1424ad480 body=571 status=ok
// SIG undefined FUN_1424ad480(void)

void FUN_1424ad480(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint local_58 [8];
  
  if ((DAT_146ab62f7 == '\0') && (lVar4 = *param_3, lVar4 != 0)) {
    iVar2 = *(int *)(lVar4 + 0x60);
    uVar3 = *(uint *)(lVar4 + 100);
    uVar8 = (ulonglong)uVar3;
    local_58[0] = 0;
    uVar13 = 0;
    lVar4 = (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,param_2,lVar4,0,1,local_58,0,1);
    if ((lVar4 != 0) && (0 < (int)uVar3)) {
      pbVar7 = (byte *)(param_4 + 2);
      iVar12 = 0;
      do {
        iVar10 = 0;
        lVar11 = 0;
        if (3 < iVar2) {
          uVar3 = (iVar2 - 4U >> 2) + 1;
          uVar9 = (ulonglong)uVar3;
          iVar10 = uVar3 * 4;
          lVar11 = (ulonglong)uVar3 * 4;
          pfVar5 = (float *)(lVar4 + 8);
          pbVar6 = pbVar7;
          do {
            pfVar5[-2] = (float)pbVar6[-2] * 0.003921569;
            pfVar5[-1] = (float)pbVar6[-1] * 0.003921569;
            *pfVar5 = (float)*pbVar6 * 0.003921569;
            pfVar5[1] = (float)pbVar6[1] * 0.003921569;
            uVar9 = uVar9 - 1;
            pfVar5 = pfVar5 + 4;
            pbVar6 = pbVar6 + 4;
          } while (uVar9 != 0);
        }
        if (iVar10 < iVar2) {
          pbVar6 = (byte *)((iVar12 + iVar10) + param_4);
          uVar9 = (ulonglong)(uint)(iVar2 - iVar10);
          pfVar5 = (float *)(lVar4 + lVar11 * 4);
          do {
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            *pfVar5 = (float)bVar1 * 0.003921569;
            uVar9 = uVar9 - 1;
            pfVar5 = pfVar5 + 1;
          } while (uVar9 != 0);
        }
        uVar3 = FUN_1424a2240(param_1);
        iVar12 = iVar12 + iVar2;
        pbVar7 = pbVar7 + iVar2;
        lVar4 = lVar4 + ((ulonglong)local_58[0] / (ulonglong)uVar3) * 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,param_2,*param_3,0,uVar13 & 0xffffff00,1);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 1424ad6c0 thunk_FUN_142550ca0 body=5 status=ok
// SIG undefined thunk_FUN_142550ca0(void)

void thunk_FUN_142550ca0(void)

{
  FUN_142550ca0();
  return;
}



// FUNCTION 1424ad6e0 FUN_1424ad6e0 body=565 status=ok
// SIG undefined FUN_1424ad6e0(void)

int FUN_1424ad6e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_48;
  int local_40;
  
  iVar8 = -1;
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  iVar7 = 0;
  if (lVar3 != 0) {
    if ((*(char *)(param_2 + 0x99) != '\0') && (iVar2 = FUN_1428cf800(lVar3), iVar2 == 3)) {
      FUN_140a7c6c0(param_2);
      return -1;
    }
    lVar4 = FUN_1428cce50(lVar3);
    if (lVar4 != 0) {
      iVar8 = *(int *)(lVar4 + 0x40);
      iVar2 = 0;
      if (iVar8 < 0x7fffffff) {
        iVar2 = iVar8 + 1;
      }
      *(int *)(lVar4 + 0x40) = iVar2;
      iVar2 = *(int *)(param_2 + 0x90);
      if (iVar2 < 2) {
        iVar2 = *(int *)(lVar4 + 0x38);
        *(int *)(lVar4 + 0x38) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x3c) < iVar2 + 1) {
          TArray<FGameplayEffectExecutionScopedModifierInfo,TSizedDefaultAllocator<32>_>::ResizeGrow
                    (lVar4 + 0x30,iVar2);
        }
        FUN_142494030((longlong)iVar2 * 0x280 + *(longlong *)(lVar4 + 0x30),lVar3,param_2,iVar8,0);
      }
      else {
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        iVar9 = iVar7;
        if (0 < iVar2) {
          do {
            iVar1 = *(int *)(lVar4 + 0x38);
            *(int *)(lVar4 + 0x38) = iVar1 + 1;
            if (*(int *)(lVar4 + 0x3c) < iVar1 + 1) {
              TArray<FGameplayEffectExecutionScopedModifierInfo,TSizedDefaultAllocator<32>_>::
              ResizeGrow(lVar4 + 0x30,iVar1);
            }
            FUN_142494220((longlong)iVar1 * 0x280 + *(longlong *)(lVar4 + 0x30),lVar3,param_2,iVar8,
                          iVar9);
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + 0x88) = *(float *)(param_2 + 0x88) + *(float *)(param_2 + 0x94);
          } while (iVar9 < iVar2);
        }
      }
      if (iVar8 != -1) goto LAB_1424ad8c3;
    }
  }
  local_48 = 0;
  if (((*(longlong *)(param_2 + 0xd0) != 0) &&
      (lVar3 = FWeakObjectPtr::Get(param_2 + 200), lVar3 != 0)) &&
     (lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_2 + 0xd0)), lVar3 != 0)) {
    iVar2 = *(int *)(param_2 + 0x90);
    if (*(int *)(param_2 + 0x90) < 2) {
      iVar2 = 1;
    }
    if (0 < iVar2) {
      do {
        local_48 = 0;
        local_40 = iVar7;
        plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 200);
        uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(param_2 + 0xd0));
        (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,&local_48);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
LAB_1424ad8c3:
  if (*(longlong *)(param_2 + 0x218) != 0) {
    FMemory::Free();
  }
  FUN_1409f5970(param_2 + 0xe8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0xd8);
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FMemory::Free();
  }
  return iVar8;
}



// FUNCTION 1424ad920 FUN_1424ad920 body=691 status=ok
// SIG undefined FUN_1424ad920(void)

void FUN_1424ad920(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 *local_res20;
  
  FWeakObjectPtr::operator=();
  *(undefined1 *)(param_1 + 0xd9) = 0;
  if (*(char *)(param_1 + 0x119) == '\0') {
    *(undefined1 *)(param_1 + 0x119) = 1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af5b30) && (_Init_thread_header(&DAT_146af5b30), DAT_146af5b30 == -1))
  {
    atexit(FUN_143eae880);
    _Init_thread_footer(&DAT_146af5b30);
  }
  FUN_142496540(&DAT_146af5a90,param_1 + 0x88,param_3);
  lVar6 = FWeakObjectPtr::Get(param_1);
  iVar10 = 0;
  local_res20 = &DAT_146af5aa0;
  plVar11 = (longlong *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(lVar6 + 0x30);
  do {
    puVar12 = (undefined4 *)*local_res20;
    puVar1 = puVar12 + (longlong)*(int *)(local_res20 + 1) * 2;
    for (; puVar12 != puVar1; puVar12 = puVar12 + 2) {
      local_res8 = *puVar12;
      local_resc = puVar12[1];
      lVar6 = DAT_146af5a90 + (longlong)DAT_146af5a98 * 8;
      for (lVar9 = DAT_146af5a90; lVar9 != lVar6; lVar9 = lVar9 + 8) {
        cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar9,&local_res8);
        if (cVar5 != '\0') goto LAB_1424adb55;
      }
      lVar6 = *plVar11;
      if (lVar6 == 0) {
        puVar7 = (undefined8 *)operator_new(0x60);
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          FTickFunction::FTickFunction(puVar7);
          *puVar7 = &PTR__scalar_deleting_destructor__1450c5de0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
        }
        *plVar11 = (longlong)puVar7;
        *(char *)(puVar7 + 1) = (char)iVar10;
        *(char *)(*plVar11 + 9) = (char)iVar10;
        *(byte *)(*plVar11 + 0xc) = *(byte *)(*plVar11 + 0xc) | 2;
        FUN_14288e3d0(*plVar11,1);
        lVar6 = *plVar11;
      }
      FTickFunction::RegisterTickFunction(lVar6,uVar4);
      lVar9 = FWeakObjectPtr::Get(&local_res8);
      lVar6 = *(longlong *)(lVar9 + 0x50);
      lVar9 = (longlong)*(int *)(lVar9 + 0x58) * 0x10 + lVar6;
      for (; lVar6 != lVar9; lVar6 = lVar6 + 0x10) {
        cVar5 = FWeakObjectPtr::IsValid(lVar6,1,0);
        if ((cVar5 != '\0') && (*(longlong *)(lVar6 + 8) != 0)) {
          uVar8 = FWeakObjectPtr::Get(lVar6);
          FTickFunction::AddPrerequisite(*plVar11,uVar8);
        }
      }
      uVar8 = FWeakObjectPtr::Get(param_1);
      lVar6 = FWeakObjectPtr::Get(&local_res8);
      FTickFunction::AddPrerequisite(lVar6 + 0x30,uVar8);
      uVar8 = FWeakObjectPtr::Get(&local_res8);
      FWeakObjectPtr::operator=(&local_res10,uVar8);
      lVar6 = *plVar11;
      iVar3 = *(int *)(lVar6 + 0x58);
      *(int *)(lVar6 + 0x58) = iVar3 + 1;
      if (*(int *)(lVar6 + 0x5c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar6 + 0x50,iVar3);
      }
      puVar2 = (undefined4 *)(*(longlong *)(lVar6 + 0x50) + (longlong)iVar3 * 8);
      *puVar2 = local_res10;
      puVar2[1] = local_res14;
LAB_1424adb55:
    }
    local_res20 = local_res20 + 2;
    iVar10 = iVar10 + 1;
    plVar11 = plVar11 + 1;
    if (7 < iVar10) {
      return;
    }
  } while( true );
}



// FUNCTION 1424adc00 FUN_1424adc00 body=1704 status=ok
// SIG undefined FUN_1424adc00(void)

void FUN_1424adc00(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  DWORD DVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  longlong local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  longlong local_f0;
  longlong local_e8;
  LARGE_INTEGER local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [24];
  undefined1 local_90 [120];
  
  if (*(char *)(param_1 + 0x9c) == '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x9d) == '\0') && (DAT_146ab62f7 == '\0')) {
    return;
  }
  cVar9 = FUN_1424a40c0();
  if (cVar9 == '\0') {
    return;
  }
  FUN_14249afa0(param_1,param_4);
  FUN_1424a8ea0(param_1);
  bVar7 = false;
  QueryPerformanceCounter(&local_100);
  dVar5 = (double)local_100.QuadPart * DAT_1468b02f8 + 16777216.0;
  dVar2 = *(double *)(param_1 + 0x118);
  dVar3 = *(double *)(param_1 + 0x110);
  if ((((*(char *)(param_1 + 0xa8) != '\0') && (0 < *(int *)(param_1 + 0xdc))) &&
      ((*(float *)(param_1 + 0xec) == 0.0 ||
       ((double)*(float *)(param_1 + 0xec) <= dVar5 - *(double *)(param_1 + 0x120))))) &&
     (*(int *)(*(longlong *)(param_1 + 0x1a0) + 0x6c) != 4)) {
    uVar4 = *(undefined4 *)(param_3 + 1);
    fVar19 = *(float *)(param_1 + 0xf4);
    fVar20 = *(float *)(param_1 + 0xf0);
    uVar14 = *param_3;
    cVar9 = FUN_1424a40c0(param_1);
    if (cVar9 != '\0') {
      QueryPerformanceCounter(&local_f8);
      *(double *)(param_1 + 0x120) = (double)local_f8.QuadPart * DAT_1468b02f8 + 16777216.0;
      if (fVar20 <= 0.0) {
        fVar20 = *(float *)(param_1 + 0xf0);
      }
      if (fVar19 <= 0.0) {
        fVar19 = *(float *)(param_1 + 0xf4);
      }
      local_120 = param_1;
      uStack_118 = uVar14;
      local_110 = uVar4;
      fStack_10c = fVar20;
      fStack_108 = fVar19;
      if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
          local_c8 = local_120;
          uStack_c0 = uStack_118;
          local_b8 = local_110;
          fStack_b4 = fStack_10c;
          fStack_b0 = fStack_108;
          uStack_ac = uStack_104;
          uVar14 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_142495b40(&local_c8,uVar14);
        }
        else {
          plVar15 = (longlong *)FUN_14249a820(local_a8,0,0xff);
          lVar17 = *plVar15;
          *(longlong *)(lVar17 + 0x10) = local_120;
          *(undefined8 *)(lVar17 + 0x18) = uStack_118;
          *(undefined4 *)(lVar17 + 0x20) = local_110;
          *(float *)(lVar17 + 0x24) = fStack_10c;
          *(float *)(lVar17 + 0x28) = fStack_108;
          *(undefined4 *)(lVar17 + 0x2c) = uStack_104;
          lVar17 = *plVar15;
          lVar8 = plVar15[2];
          lVar18 = plVar15[1];
          lVar16 = *(longlong *)(lVar17 + 0x38);
          piVar1 = (int *)(lVar16 + 0x48);
          if (lVar16 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          FUN_14048a640(lVar17,lVar18,(int)lVar8,1);
          if (lVar16 != 0) {
            LOCK();
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              FGraphEvent::Recycle(lVar16);
            }
          }
        }
      }
      else {
        uVar14 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_142495b40(&local_120,uVar14);
      }
    }
    bVar7 = true;
    *(undefined8 *)(param_1 + 0xf8) = *param_3;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_3 + 1);
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    local_f0 = param_1;
    if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
        local_e8 = param_1;
        uVar14 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_142495980(&local_e8,uVar14);
      }
      else {
        plVar15 = (longlong *)FUN_14249a190(local_90,0,0xff);
        *(longlong *)(*plVar15 + 0x10) = param_1;
        lVar17 = *plVar15;
        lVar8 = plVar15[2];
        lVar18 = plVar15[1];
        lVar16 = *(longlong *)(lVar17 + 0x20);
        piVar1 = (int *)(lVar16 + 0x48);
        if (lVar16 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_140445100(lVar17,lVar18,(int)lVar8,1);
        if (lVar16 != 0) {
          LOCK();
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            FGraphEvent::Recycle(lVar16);
          }
        }
      }
    }
    else {
      uVar14 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142495980(&local_f0,uVar14);
    }
  }
  cVar9 = FUN_1424a6460(param_1);
  lVar17 = DAT_146af59c8;
  if (*(char *)(param_1 + 0xa8) == '\0') {
    return;
  }
  if (DAT_146ab62f7 != '\0') {
    return;
  }
  bVar6 = true;
  if ((((DAT_1464aaa8c < 0x14) || (cVar9 != '\0')) || (0 < *(int *)(param_1 + 0x138))) || (bVar7)) {
    bVar6 = false;
  }
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  lVar18 = 0;
  if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    lVar16 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_1424ae05d;
  }
  else {
LAB_1424ae05d:
    lVar16 = lVar18;
  }
  if (!bVar6) {
    return;
  }
  if (*(int *)(lVar16 + lVar17) < 1) {
    return;
  }
  iVar13 = *(int *)(*(longlong *)(param_1 + 0x1a0) + 0x60);
  if (iVar13 < 1) {
    if (*(int *)(*(longlong *)(param_1 + 0x1a0) + 0x6c) == 4) {
      return;
    }
    if (dVar5 - dVar2 <= (double)*(float *)(param_1 + 0xe4)) {
      return;
    }
    FUN_1424a95a0(param_1,3 - (uint)(DAT_146532b80 != '\0'));
    DAT_146532b80 = DAT_146532b80 == '\0';
    return;
  }
  if (dVar5 - dVar3 <= (double)*(float *)(param_1 + 0xe8)) {
    return;
  }
  iVar11 = rand();
  lVar17 = *(longlong *)(param_1 + 0x1a0);
  lVar16 = *(longlong *)(lVar17 + 0x58);
  iVar12 = (int)((float)iVar11 * 3.051851e-05 * (float)iVar13);
  iVar11 = iVar13 + -1;
  if (iVar12 <= iVar13 + -1) {
    iVar11 = iVar12;
  }
  uVar4 = *(undefined4 *)(lVar16 + (longlong)iVar11 * 4);
  iVar13 = *(int *)(lVar17 + 0x60);
  iVar12 = (iVar13 - iVar11) + -1;
  if (iVar12 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar16 + (longlong)iVar11 * 4),(void *)(lVar16 + (longlong)(iVar11 + 1) * 4)
               ,(longlong)iVar12 << 2);
    iVar13 = *(int *)(lVar17 + 0x60);
  }
  *(int *)(lVar17 + 0x60) = iVar13 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar17 + 0x58);
  cVar9 = FUN_1424a40c0(param_1);
  lVar17 = DAT_146af59c8;
  if (cVar9 == '\0') {
    return;
  }
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    lVar16 = 4;
    if (DVar10 != DAT_1468c21c0) goto LAB_1424ae15d;
  }
  lVar16 = lVar18;
LAB_1424ae15d:
  if (0 < *(int *)(lVar17 + lVar16)) {
    QueryPerformanceCounter(&local_e0);
    *(double *)(param_1 + 0x110) = (double)local_e0.QuadPart * DAT_1468b02f8 + 16777216.0;
    lVar17 = operator_new(0x40);
    if (lVar17 != 0) {
      local_d8 = *(longlong *)(param_1 + 0x30);
      if (local_d8 != 0) {
        LOCK();
        *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
        UNLOCK();
      }
      local_d0 = *(longlong *)(param_1 + 0x18);
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      lVar18 = FUN_142494860(lVar17,param_1,4,*(undefined8 *)(param_1 + 0x170),&local_d0,&local_d8,
                             uVar4);
    }
    iVar13 = *(int *)(param_1 + 0x138);
    *(int *)(param_1 + 0x138) = iVar13 + 1;
    if (*(int *)(param_1 + 0x13c) < iVar13 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x130,iVar13);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar13 * 8) = lVar18;
    FUN_1424a3e80(lVar18);
  }
  return;
}



// FUNCTION 1424ae2b0 FUN_1424ae2b0 body=576 status=ok
// SIG undefined FUN_1424ae2b0(void)

void FUN_1424ae2b0(longlong param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  
  if (*(char *)(param_1 + 8) != '\0') {
    lVar6 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
    if (lVar6 != 0) {
      puVar10 = (undefined4 *)0x0;
      fVar1 = *(float *)(lVar6 + 0x798);
      fVar11 = fVar1 - *(float *)(param_1 + 0xc);
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      while ((puVar8 != (undefined8 *)0x0 &&
             (pfVar3 = (float *)*puVar8, *pfVar3 <= fVar11 && fVar11 != *pfVar3))) {
        pfVar3[4] = 0.0;
        if (0x7fffffff < (uint)pfVar3[5]) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(pfVar3 + 2,0);
        }
        iVar2 = *(int *)(param_1 + 0x58);
        iVar5 = iVar2 + 1;
        *(int *)(param_1 + 0x58) = iVar5;
        if (*(int *)(param_1 + 0x5c) < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50);
        }
        *(float **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 8) = pfVar3;
        lVar6 = *(longlong *)(param_1 + 0x38);
        if (lVar6 != 0) {
          if (*(int *)(param_1 + 0x48) == 1) {
            TDoubleLinkedList<unsigned_int>::Empty(param_1 + 0x30);
          }
          else {
            lVar4 = *(longlong *)(lVar6 + 8);
            *(longlong *)(param_1 + 0x38) = lVar4;
            *(undefined8 *)(lVar4 + 0x10) = 0;
            FMemory::operator_delete(lVar6,0x18);
            (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
          }
        }
        puVar8 = *(undefined8 **)(param_1 + 0x38);
      }
      if ((0 < *(int *)(param_1 + 0x28)) &&
         ((*(int *)(param_1 + 0x48) == 0 ||
          (*(float *)(param_1 + 0x18) <= fVar1 - *(float *)**(undefined8 **)(param_1 + 0x40))))) {
        if (*(int *)(param_1 + 0x58) == 0) {
          puVar7 = (undefined4 *)operator_new(0x18);
          puVar9 = puVar10;
          if (puVar7 != (undefined4 *)0x0) {
            puVar7[1] = 0;
            *puVar7 = 0xbf800000;
            *(undefined8 *)(puVar7 + 2) = 0;
            *(undefined8 *)(puVar7 + 4) = 0;
            puVar9 = puVar7;
          }
          iVar2 = *(int *)(param_1 + 0x58);
          *(int *)(param_1 + 0x58) = iVar2 + 1;
          if (*(int *)(param_1 + 0x5c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar2);
          }
          *(undefined4 **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 8) = puVar9;
        }
        pfVar3 = *(float **)
                  (*(longlong *)(param_1 + 0x50) + -8 + (longlong)*(int *)(param_1 + 0x58) * 8);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
        *pfVar3 = fVar1;
        puVar8 = (undefined8 *)operator_new(0x18);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = pfVar3;
          puVar8[1] = 0;
          puVar8[2] = 0;
          if (*(longlong *)(param_1 + 0x40) == 0) {
            *(undefined8 **)(param_1 + 0x38) = puVar8;
          }
          else {
            *(undefined8 **)(*(longlong *)(param_1 + 0x40) + 8) = puVar8;
            puVar8[2] = *(undefined8 *)(param_1 + 0x40);
          }
          *(undefined8 **)(param_1 + 0x40) = puVar8;
          (**(code **)(*(longlong *)(param_1 + 0x30) + 8))
                    (param_1 + 0x30,*(int *)(param_1 + 0x48) + 1);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x20);
        puVar9 = (undefined4 *)((longlong)*(int *)(param_1 + 0x28) & 0x1fffffffffffffff);
        if (puVar8 + *(int *)(param_1 + 0x28) < puVar8) {
          puVar9 = puVar10;
        }
        if (puVar9 != (undefined4 *)0x0) {
          do {
            FUN_1424972e0(param_1 + -0x28,*puVar8,pfVar3);
            puVar10 = (undefined4 *)((longlong)puVar10 + 1);
            puVar8 = puVar8 + 1;
          } while (puVar10 != puVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 1424ae4f0 FUN_1424ae4f0 body=228 status=ok
// SIG undefined FUN_1424ae4f0(void)

void FUN_1424ae4f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
  if (lVar2 != 0) {
    lVar3 = UWorld::GetWorldSettings(lVar2,0,0);
    if (lVar3 == 0) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = *(float *)(lVar3 + 0x5e0);
      if (fVar6 <= 1.0) {
        fVar6 = 1.0;
      }
    }
    iVar4 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x10)) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x10);
      lVar3 = 0;
      do {
        iVar1 = FUN_1424a6c80(*(longlong *)(param_1 + 8) + lVar3,lVar2,
                              iVar4 < (int)ROUND(fVar6 + fVar6 + 0.5) >> 1);
        if (iVar1 == 1) {
          iVar4 = iVar4 + 1;
        }
        lVar3 = lVar3 + 0x280;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_142492fc0(param_1 + 8,local_res8);
  }
  return;
}



// FUNCTION 1424ae5e0 FUN_1424ae5e0 body=312 status=ok
// SIG undefined FUN_1424ae5e0(void)

void FUN_1424ae5e0(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  if ((*(char *)(param_1 + 0xd9) != '\0') && (param_2 == 3)) {
    *(undefined1 *)(param_1 + 0xd9) = 0;
    FUN_14249e730();
  }
  if (param_3 != '\0') {
    lVar7 = FUN_1424a16a0();
    LOCK();
    *(undefined4 *)(lVar7 + 0x40) = 1;
    UNLOCK();
    LOCK();
    iVar4 = *(int *)(lVar7 + 0x4c);
    if (iVar4 == 0) {
      *(int *)(lVar7 + 0x4c) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x10))();
      (**(code **)(**(longlong **)(lVar7 + 0x38) + 0x20))(*(longlong **)(lVar7 + 0x38),0xffffffff,0)
      ;
    }
    LOCK();
    iVar4 = *(int *)(lVar7 + 0x48);
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(lVar7 + 0x48) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (!bVar9) {
      while( true ) {
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x44);
        if (iVar5 == 0) {
          *(int *)(lVar7 + 0x44) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (lVar1 = **(longlong **)(lVar7 + 0x18), lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 8);
          uVar3 = *(undefined8 *)(lVar7 + 0x18);
          *(longlong *)(lVar7 + 0x18) = lVar1;
          *(undefined8 *)(lVar1 + 8) = 0;
          FMemory::operator_delete(uVar3,0x10);
          FUN_142602d20(uVar2);
          LOCK();
          *(int *)(lVar7 + 0x44) = *(int *)(lVar7 + 0x44) + 1;
          UNLOCK();
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x44);
        if (iVar6 == 0) {
          *(int *)(lVar7 + 0x44) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (iVar4 == iVar6) break;
        if (iVar5 == iVar6) {
          plVar8 = (longlong *)FTaskGraphInterface::Get();
          (**(code **)(*plVar8 + 0x30))(plVar8,2);
          (**(code **)(**(longlong **)(lVar7 + 0x30) + 0x20))
                    (*(longlong **)(lVar7 + 0x30),0xffffffff,0);
        }
      }
    }
    LOCK();
    *(undefined4 *)(lVar7 + 0x48) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(lVar7 + 0x44) = 0;
    UNLOCK();
    (**(code **)(**(longlong **)(lVar7 + 0x30) + 0x18))();
  }
  return;
}



// FUNCTION 1424ae720 FUN_1424ae720 body=29 status=ok
// SIG undefined FUN_1424ae720(void)

void FUN_1424ae720(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == 1) {
    FUN_14249eb80();
  }
  lVar1 = FUN_1424a16a0();
  LOCK();
  *(undefined4 *)(lVar1 + 0x40) = 0;
  UNLOCK();
  return;
}



// FUNCTION 1424ae740 FUN_1424ae740 body=1205 status=ok
// SIG undefined FUN_1424ae740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424ae740(longlong param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  undefined1 auStack_208 [32];
  char *local_1e8;
  uint *local_1e0;
  undefined4 *local_1d8;
  undefined1 *local_1d0;
  longlong **local_1c8;
  longlong **local_1c0;
  undefined4 local_1b8;
  undefined1 local_1a8 [4];
  uint local_1a4;
  undefined1 local_1a0;
  longlong *local_198;
  int local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  longlong local_168;
  longlong local_120;
  undefined1 local_b8 [16];
  undefined1 local_a8;
  undefined1 local_a5;
  undefined1 local_a4;
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar5 == 0) goto LAB_1424aeb65;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af5b40) && (_Init_thread_header(), DAT_146af5b40 == -1)) {
    FName::FName(&DAT_146af5b38,L"GbxTraceAsync",1);
    _Init_thread_footer();
  }
  if ((*(int *)(param_2 + 0x60) == 0) && (*(int *)(param_2 + 100) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pcVar8 = (char *)&DAT_146af5b38;
  if (!bVar2) {
    pcVar8 = param_2 + 0x60;
  }
  iVar9 = 0;
  local_1e8 = (char *)0x0;
  FUN_1422ffb20(local_b8,*(undefined8 *)pcVar8,local_1a8,param_2[0x48]);
  local_a4 = 1;
  plVar6 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
  }
  local_a5 = *(char *)(lVar7 + 0xab) == '\0';
  local_a8 = 1;
  if (0 < *(int *)(param_2 + 0x58)) {
    FCollisionQueryParams::AddIgnoredActors(local_b8,param_2 + 0x50);
  }
  if (param_2[0x49] != '\0') {
    for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x20)) {
      lVar7 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (bVar2 = true,
         *(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
          (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      if (bVar2) {
        FCollisionQueryParams::AddIgnoredActor(local_b8,param_1);
        break;
      }
    }
  }
  cVar1 = param_2[0x18];
  if (cVar1 == '\x01') {
    local_188 = 2;
LAB_1424ae91d:
    local_184 = *(undefined4 *)(param_2 + 0x34);
  }
  else {
    if (cVar1 == '\x02') {
      local_180 = *(undefined4 *)(param_2 + 0x38);
      local_188 = 3;
      goto LAB_1424ae91d;
    }
    if (cVar1 == '\x03') {
      local_184 = *(undefined4 *)(param_2 + 0x3c);
      local_180 = *(undefined4 *)(param_2 + 0x40);
      local_17c = *(undefined4 *)(param_2 + 0x44);
      local_188 = 1;
    }
    else {
      local_188 = 0;
    }
  }
  FUN_142494410(local_170,param_2);
  local_198 = (longlong *)0x0;
  local_198 = (longlong *)FMemory::Realloc(0,0xd0,0);
  local_190 = 0xd;
  if (local_198 != (longlong *)0x0) {
    FUN_142493ea0(local_198,local_170);
  }
  if (local_120 != 0) {
    FMemory::Free(local_120);
  }
  if (local_168 != 0) {
    FMemory::Free(local_168);
  }
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    uVar4 = UEngineTypes::ConvertToCollisionChannel(param_2[1]);
    local_1b8 = 0;
    local_1c0 = &local_198;
    local_1e8 = param_2 + 0x28;
    local_1c8 = (longlong **)&DAT_146aefe68;
    local_1d0 = local_b8;
    local_1d8 = &local_188;
    local_1e0 = (uint *)CONCAT44(local_1e0._4_4_,uVar4);
    FUN_1423305c0(lVar5,local_178,1,param_2 + 0x1c);
  }
  else if (cVar1 == '\x01') {
    local_1e8 = param_2 + 0x28;
    local_1a4 = 1 << (param_2[2] & 0x1fU);
    local_1c0 = (longlong **)((ulonglong)local_1c0 & 0xffffffff00000000);
    local_1c8 = &local_198;
    local_1d0 = local_b8;
    local_1d8 = &local_188;
    local_1a0 = 0;
    local_1e0 = &local_1a4;
    FUN_1423306f0(lVar5,local_178,1,param_2 + 0x1c);
  }
  else if (cVar1 == '\x02') {
    local_1a4 = 0;
    while( true ) {
      if ((iVar9 < 0) || (*(int *)(param_2 + 0x10) <= iVar9)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      uVar3 = UEngineTypes::ConvertToCollisionChannel
                        (*(undefined1 *)((longlong)iVar9 + *(longlong *)(param_2 + 8)));
      local_1a4 = local_1a4 | 1 << (uVar3 & 0x1f);
      iVar9 = iVar9 + 1;
    }
    local_1c0 = (longlong **)((ulonglong)local_1c0 & 0xffffffff00000000);
    local_1c8 = &local_198;
    local_1e8 = param_2 + 0x28;
    local_1d0 = local_b8;
    local_1a0 = 0;
    local_1d8 = &local_188;
    local_1e0 = &local_1a4;
    FUN_1423306f0(lVar5,local_178,1,param_2 + 0x1c);
  }
  if (local_190 == 0) {
LAB_1424aeb31:
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x28))(local_198,0);
    if (local_198 != (longlong *)0x0) {
      local_198 = (longlong *)FMemory::Realloc(local_198,0,0);
    }
    local_190 = 0;
    goto LAB_1424aeb31;
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
LAB_1424aeb65:
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424aec00 FUN_1424aec00 body=619 status=ok
// SIG undefined FUN_1424aec00(void)

void FUN_1424aec00(float *param_1,longlong param_2)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar9 = *(float *)(param_2 + 0x14) * param_1[8];
  fVar10 = *(float *)(param_2 + 0x18) * param_1[9];
  fVar11 = *(float *)(param_2 + 0x1c) * param_1[10];
  fVar5 = fVar11 * fVar2 - fVar10 * fVar3;
  fVar7 = fVar9 * fVar3 - fVar11 * fVar1;
  fVar8 = fVar10 * fVar1 - fVar9 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar6 = param_1[6];
  *(ulonglong *)(param_2 + 0x14) =
       CONCAT44((fVar5 * fVar3 - fVar8 * fVar1) + fVar4 * fVar7 + fVar10 + param_1[5],
                (fVar8 * fVar2 - fVar7 * fVar3) + fVar4 * fVar5 + fVar9 + param_1[4]);
  *(float *)(param_2 + 0x1c) = (fVar7 * fVar1 - fVar5 * fVar2) + fVar4 * fVar8 + fVar11 + fVar6;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar9 = *(float *)(param_2 + 0x20) * param_1[8];
  fVar10 = *(float *)(param_2 + 0x24) * param_1[9];
  fVar11 = *(float *)(param_2 + 0x28) * param_1[10];
  fVar5 = fVar11 * fVar2 - fVar10 * fVar3;
  fVar7 = fVar9 * fVar3 - fVar11 * fVar1;
  fVar8 = fVar10 * fVar1 - fVar9 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar6 = param_1[6];
  *(ulonglong *)(param_2 + 0x20) =
       CONCAT44((fVar5 * fVar3 - fVar8 * fVar1) + fVar4 * fVar7 + fVar10 + param_1[5],
                (fVar8 * fVar2 - fVar7 * fVar3) + fVar4 * fVar5 + fVar9 + param_1[4]);
  *(float *)(param_2 + 0x28) = (fVar7 * fVar1 - fVar5 * fVar2) + fVar4 * fVar8 + fVar11 + fVar6;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar8 = *(float *)(param_2 + 0x2c) * param_1[8];
  fVar9 = *(float *)(param_2 + 0x30) * param_1[9];
  fVar10 = *(float *)(param_2 + 0x34) * param_1[10];
  fVar6 = fVar10 * fVar2 - fVar9 * fVar3;
  fVar5 = fVar8 * fVar3 - fVar10 * fVar1;
  fVar7 = fVar9 * fVar1 - fVar8 * fVar2;
  fVar6 = fVar6 + fVar6;
  fVar5 = fVar5 + fVar5;
  fVar7 = fVar7 + fVar7;
  *(ulonglong *)(param_2 + 0x2c) =
       CONCAT44((fVar6 * fVar3 - fVar7 * fVar1) + fVar4 * fVar5 + fVar9,
                (fVar7 * fVar2 - fVar5 * fVar3) + fVar4 * fVar6 + fVar8);
  *(float *)(param_2 + 0x34) = (fVar5 * fVar1 - fVar6 * fVar2) + fVar4 * fVar7 + fVar10;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar8 = *(float *)(param_2 + 0x38) * param_1[8];
  fVar9 = *(float *)(param_2 + 0x3c) * param_1[9];
  fVar10 = *(float *)(param_2 + 0x40) * param_1[10];
  fVar6 = fVar10 * fVar2 - fVar9 * fVar3;
  fVar5 = fVar8 * fVar3 - fVar10 * fVar1;
  fVar7 = fVar9 * fVar1 - fVar8 * fVar2;
  fVar6 = fVar6 + fVar6;
  fVar5 = fVar5 + fVar5;
  fVar7 = fVar7 + fVar7;
  *(ulonglong *)(param_2 + 0x38) =
       CONCAT44((fVar6 * fVar3 - fVar7 * fVar1) + fVar4 * fVar5 + fVar9,
                (fVar7 * fVar2 - fVar5 * fVar3) + fVar4 * fVar6 + fVar8);
  *(float *)(param_2 + 0x40) = (fVar5 * fVar1 - fVar6 * fVar2) + fVar4 * fVar7 + fVar10;
  return;
}



// FUNCTION 1424aee70 FUN_1424aee70 body=1935 status=ok
// SIG undefined FUN_1424aee70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424aee70(longlong *param_1,float param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  float *pfVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  if (param_3 != 0) {
    local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_148;
    if (((char)param_1[6] != '\0') &&
       (param_2 = param_2 - *(float *)((longlong)param_1 + 0x3c), 0.0 < param_2)) {
      lVar12 = (**(code **)(*param_1 + 0x148))();
      fVar35 = fRam0000000146af5848;
      fVar33 = fRam0000000146af5844;
      fVar28 = _DAT_146af5840;
      uVar8 = uRam0000000146af576c;
      uVar7 = uRam0000000146af5768;
      uVar6 = uRam0000000146af5764;
      uVar5 = _DAT_146af5760;
      fVar59 = fRam0000000146af5758;
      fVar58 = fRam0000000146af5754;
      fVar57 = _DAT_146af5750;
      param_2 = *(float *)(lVar12 + 0x798) - param_2;
      pfVar9 = (float *)0x0;
      if (0 < (int)param_1[0xe]) {
        for (puVar1 = (undefined8 *)param_1[0xd]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[2]) {
          pfVar15 = (float *)*puVar1;
          if (*pfVar15 <= param_2) {
            if ((pfVar9 != (float *)0x0) && (*pfVar9 - param_2 <= param_2 - *pfVar15)) {
              pfVar15 = pfVar9;
            }
            if (pfVar15 != (float *)0x0) goto LAB_1424aef37;
            break;
          }
          pfVar9 = pfVar15;
        }
      }
      pfVar15 = pfVar9;
      if (pfVar15 != (float *)0x0) {
LAB_1424aef37:
        plVar13 = *(longlong **)(pfVar15 + 2);
        plVar14 = plVar13 + (longlong)(int)pfVar15[4] * 0xc;
        for (; plVar13 != plVar14; plVar13 = plVar13 + 0xc) {
          if (*plVar13 == param_3) {
            lVar12 = *(longlong *)(param_3 + 0x168);
            if (lVar12 == 0) {
              fVar47 = 0.0;
              fVar48 = 0.0;
              fVar49 = 0.0;
              fVar25 = 0.0;
              fVar38 = 0.0;
              fVar40 = 0.0;
              fVar37 = 0.0;
              fVar19 = (float)((uint)_DAT_146af5750 & _DAT_146af5760);
              fVar22 = (float)((uint)fRam0000000146af5754 & uRam0000000146af5764);
              fVar31 = (float)((uint)fRam0000000146af5758 & uRam0000000146af5768);
              fVar30 = (float)((uint)fRam0000000146af575c & uRam0000000146af576c);
              fVar23 = fRam0000000146af575c;
            }
            else {
              fVar38 = *(float *)(lVar12 + 0x210);
              fVar40 = *(float *)(lVar12 + 0x214);
              fVar37 = *(float *)(lVar12 + 0x218);
              fVar47 = *(float *)(lVar12 + 0x220);
              fVar48 = *(float *)(lVar12 + 0x224);
              fVar49 = *(float *)(lVar12 + 0x228);
              fVar25 = *(float *)(lVar12 + 0x22c);
              fVar19 = *(float *)(lVar12 + 0x230);
              fVar22 = *(float *)(lVar12 + 0x234);
              fVar31 = *(float *)(lVar12 + 0x238);
              fVar30 = *(float *)(lVar12 + 0x23c);
              fVar23 = *(float *)(lVar12 + 0x21c);
            }
            auVar21 = *(undefined1 (*) [16])(plVar13 + 10);
            fVar24 = auVar21._0_4_;
            fVar46 = auVar21._4_4_;
            fVar2 = auVar21._8_4_;
            auVar16._4_4_ = fVar22;
            auVar16._0_4_ = fVar19;
            auVar16._8_4_ = fVar31;
            auVar16._12_4_ = fVar30;
            auVar16 = minps(auVar21,auVar16);
            fVar53 = fVar19 * fVar24;
            fVar54 = fVar22 * fVar46;
            fVar55 = fVar31 * fVar2;
            fVar56 = fVar30 * auVar21._12_4_;
            auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146af5844);
            auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146af5840);
            auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146af5848);
            auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146af584c);
            iVar10 = movmskps((int)lVar12,auVar17);
            if (iVar10 == 0) {
              fVar57 = *(float *)(plVar13 + 6);
              fVar58 = *(float *)((longlong)plVar13 + 0x34);
              fVar59 = *(float *)(plVar13 + 7);
              fVar28 = *(float *)((longlong)plVar13 + 0x3c);
              fVar19 = *(float *)(plVar13 + 8) * fVar19;
              fVar22 = *(float *)((longlong)plVar13 + 0x44) * fVar22;
              fVar31 = *(float *)(plVar13 + 9) * fVar31;
              fVar30 = *(float *)((longlong)plVar13 + 0x4c) * fVar30;
              auVar21._4_4_ = fVar38;
              auVar21._0_4_ = fVar37;
              auVar21._8_4_ = fVar40;
              auVar21._12_4_ = fVar23;
              fVar33 = fVar38 * fVar28 * _DAT_146af5800 + fVar23 * fVar57 +
                       fVar40 * fVar59 * _DAT_146af57f0 + fVar37 * fVar58 * _DAT_146af57e0;
              fVar35 = fVar38 * fVar59 * fRam0000000146af5804 + fVar23 * fVar58 +
                       fVar40 * fVar28 * fRam0000000146af57f4 +
                       fVar37 * fVar57 * fRam0000000146af57e4;
              fVar24 = fVar38 * fVar58 * fRam0000000146af5808 + fVar23 * fVar59 +
                       fVar40 * fVar57 * fRam0000000146af57f8 +
                       fVar37 * fVar28 * fRam0000000146af57e8;
              fVar46 = fVar38 * fVar57 * fRam0000000146af580c + fVar23 * fVar28 +
                       fVar40 * fVar58 * fRam0000000146af57fc +
                       fVar37 * fVar59 * fRam0000000146af57ec;
              fVar57 = fVar31 * fVar40 - fVar22 * fVar37;
              fVar58 = fVar19 * fVar37 - fVar31 * fVar38;
              fVar59 = fVar22 * fVar38 - fVar19 * fVar40;
              fVar28 = fVar30 * fVar23 - fVar30 * fVar23;
              fVar57 = fVar57 + fVar57;
              fVar58 = fVar58 + fVar58;
              fVar59 = fVar59 + fVar59;
              fVar28 = fVar28 + fVar28;
              fVar47 = (fVar59 * fVar40 - fVar58 * fVar37) + fVar57 * fVar23 + fVar19 + fVar47;
              fVar48 = (fVar57 * fVar37 - fVar59 * fVar38) + fVar58 * fVar23 + fVar22 + fVar48;
              fVar49 = (fVar58 * fVar38 - fVar57 * fVar40) + fVar59 * fVar23 + fVar31 + fVar49;
              fVar25 = (fVar28 * fVar23 - fVar28 * fVar23) + fVar28 * fVar23 + fVar30 + fVar25;
              uVar11 = 0;
            }
            else {
              fVar25 = fVar40 + fVar40;
              fVar27 = fVar37 + fVar37;
              fVar29 = (fVar38 + fVar38) * fVar38;
              fVar26 = (fVar38 + fVar38) * fVar23;
              fVar50 = (fVar27 * fVar23 + fVar25 * fVar38) * fVar19;
              fVar51 = (fVar26 + fVar27 * fVar40) * fVar22;
              fVar52 = (fVar25 * fVar23 + fVar27 * fVar38) * fVar31;
              fVar32 = fVar22 * (fVar25 * fVar38 - fVar27 * fVar23);
              fVar34 = fVar31 * (fVar27 * fVar40 - fVar26);
              fVar36 = fVar19 * (fVar27 * fVar38 - fVar25 * fVar23);
              fVar19 = (float)((uint)((_DAT_146af5750 - (fVar27 * fVar37 + fVar25 * fVar40)) *
                                     fVar19) & _DAT_146af5760);
              fVar22 = (float)((uint)((fRam0000000146af5754 - (fVar27 * fVar37 + fVar29)) * fVar22)
                              & uRam0000000146af5764);
              fVar23 = (float)((uint)((fRam0000000146af5758 - (fVar25 * fVar40 + fVar29)) * fVar31)
                              & uRam0000000146af5768);
              fVar26 = (float)((uint)((fRam0000000146af575c - (fVar29 + fVar29)) * fVar30) &
                              uRam0000000146af576c);
              fVar37 = *(float *)(plVar13 + 6);
              fVar38 = *(float *)((longlong)plVar13 + 0x34);
              fVar40 = *(float *)(plVar13 + 7);
              fVar25 = *(float *)((longlong)plVar13 + 0x3c);
              fVar30 = fVar38 + fVar38;
              fVar27 = fVar40 + fVar40;
              fVar29 = (fVar37 + fVar37) * fVar37;
              fVar31 = (fVar37 + fVar37) * fVar25;
              fVar43 = (fVar27 * fVar25 + fVar30 * fVar37) * fVar24;
              fVar44 = (fVar31 + fVar27 * fVar38) * fVar46;
              fVar45 = (fVar30 * fVar25 + fVar27 * fVar37) * fVar2;
              fVar39 = fVar46 * (fVar30 * fVar37 - fVar27 * fVar25);
              fVar41 = fVar2 * (fVar27 * fVar38 - fVar31);
              fVar42 = fVar24 * (fVar27 * fVar37 - fVar30 * fVar25);
              fVar25 = (float)((uint)((_DAT_146af5750 - (fVar27 * fVar40 + fVar30 * fVar38)) *
                                     fVar24) & _DAT_146af5760);
              fVar31 = (float)((uint)((fRam0000000146af5754 - (fVar27 * fVar40 + fVar29)) * fVar46)
                              & uRam0000000146af5764);
              fVar30 = (float)((uint)((fRam0000000146af5758 - (fVar30 * fVar38 + fVar29)) * fVar2) &
                              uRam0000000146af5768);
              fVar24 = (float)((uint)((fRam0000000146af575c - (fVar29 + fVar29)) * auVar21._12_4_) &
                              uRam0000000146af576c);
              fVar37 = *(float *)(plVar13 + 8);
              fVar38 = *(float *)((longlong)plVar13 + 0x44);
              fVar40 = *(float *)(plVar13 + 9);
              local_128._0_4_ =
                   fVar43 * fVar32 + fVar25 * fVar19 + fVar42 * fVar52 + fVar24 * fVar47;
              local_128._4_4_ =
                   fVar43 * fVar22 + fVar25 * fVar50 + fVar42 * fVar34 + fVar24 * fVar48;
              uStack_120._0_4_ =
                   fVar43 * fVar51 + fVar25 * fVar36 + fVar42 * fVar23 + fVar24 * fVar49;
              uStack_120._4_4_ =
                   fVar43 * fVar26 + fVar25 * fVar26 + fVar42 * fVar26 +
                   fVar24 * fRam0000000146af575c;
              local_118._0_4_ =
                   fVar31 * fVar32 + fVar39 * fVar19 + fVar44 * fVar52 + fVar24 * fVar47;
              local_118._4_4_ =
                   fVar31 * fVar22 + fVar39 * fVar50 + fVar44 * fVar34 + fVar24 * fVar48;
              uStack_110._0_4_ =
                   fVar31 * fVar51 + fVar39 * fVar36 + fVar44 * fVar23 + fVar24 * fVar49;
              uStack_110._4_4_ =
                   fVar31 * fVar26 + fVar39 * fVar26 + fVar44 * fVar26 +
                   fVar24 * fRam0000000146af575c;
              local_108._0_4_ =
                   fVar41 * fVar32 + fVar45 * fVar19 + fVar30 * fVar52 + fVar24 * fVar47;
              local_108._4_4_ =
                   fVar41 * fVar22 + fVar45 * fVar50 + fVar30 * fVar34 + fVar24 * fVar48;
              uStack_100._0_4_ =
                   fVar41 * fVar51 + fVar45 * fVar36 + fVar30 * fVar23 + fVar24 * fVar49;
              uStack_100._4_4_ =
                   fVar41 * fVar26 + fVar45 * fVar26 + fVar30 * fVar26 +
                   fVar24 * fRam0000000146af575c;
              local_f8 = fVar38 * fVar32 + fVar37 * fVar19 + fVar40 * fVar52 +
                         fRam0000000146af575c * fVar47;
              fStack_f4 = fVar38 * fVar22 + fVar37 * fVar50 + fVar40 * fVar34 +
                          fRam0000000146af575c * fVar48;
              fStack_f0 = fVar38 * fVar51 + fVar37 * fVar36 + fVar40 * fVar23 +
                          fRam0000000146af575c * fVar49;
              fStack_ec = fVar38 * fVar26 + fVar37 * fVar26 + fVar40 * fVar26 +
                          fRam0000000146af575c * fRam0000000146af575c;
              FMatrix::RemoveScaling(&local_128);
              fVar57 = (float)(-(uint)(fVar28 <= fVar53) & (_DAT_146af5830 ^ (uint)fVar57) ^
                              _DAT_146af5830);
              fVar58 = (float)(-(uint)(fVar33 <= fVar54) & (uRam0000000146af5834 ^ (uint)fVar58) ^
                              uRam0000000146af5834);
              fVar59 = (float)(-(uint)(fVar35 <= fVar55) & (uRam0000000146af5838 ^ (uint)fVar59) ^
                              uRam0000000146af5838);
              local_128 = CONCAT44(local_128._4_4_ * fVar57,(float)local_128 * fVar57);
              uStack_120 = CONCAT44(uStack_120._4_4_,(float)uStack_120 * fVar57);
              uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar58);
              uStack_100 = CONCAT44(uStack_100._4_4_,(float)uStack_100 * fVar59);
              local_118 = CONCAT44(local_118._4_4_ * fVar58,(float)local_118 * fVar58);
              local_108 = CONCAT44(local_108._4_4_ * fVar59,(float)local_108 * fVar59);
              uVar11 = FQuat::FQuat(&local_d8,&local_128);
              local_e8 = 0x322bcc77;
              auVar20._0_4_ = local_d8 * local_d8 + fStack_d0 * fStack_d0;
              auVar20._4_4_ = fStack_d4 * fStack_d4 + fStack_cc * fStack_cc;
              auVar20._8_4_ = fStack_d0 * fStack_d0 + local_d8 * local_d8;
              auVar20._12_4_ = fStack_cc * fStack_cc + fStack_d4 * fStack_d4;
              fVar33 = auVar20._4_4_ + auVar20._0_4_;
              fVar35 = auVar20._8_4_ + auVar20._4_4_;
              fVar37 = auVar20._12_4_ + auVar20._8_4_;
              fVar38 = auVar20._0_4_ + auVar20._12_4_;
              auVar3._4_4_ = fVar35;
              auVar3._0_4_ = fVar33;
              auVar3._8_4_ = fVar37;
              auVar3._12_4_ = fVar38;
              auVar21 = rsqrtps(auVar20,auVar3);
              fVar57 = auVar21._0_4_;
              fVar58 = auVar21._4_4_;
              fVar59 = auVar21._8_4_;
              fVar28 = auVar21._12_4_;
              fVar57 = (_DAT_146af5820 - fVar57 * fVar57 * fVar33 * _DAT_146af5820) * fVar57 +
                       fVar57;
              fVar58 = (fRam0000000146af5824 - fVar58 * fVar58 * fVar35 * fRam0000000146af5824) *
                       fVar58 + fVar58;
              fVar59 = (fRam0000000146af5828 - fVar59 * fVar59 * fVar37 * fRam0000000146af5828) *
                       fVar59 + fVar59;
              fVar28 = (fRam0000000146af582c - fVar28 * fVar28 * fVar38 * fRam0000000146af582c) *
                       fVar28 + fVar28;
              auVar21 = ZEXT816(0);
              fVar25 = 0.0;
              fVar33 = (float)(((uint)(((_DAT_146af5820 - fVar57 * fVar57 * fVar33 * _DAT_146af5820)
                                        * fVar57 + fVar57) * local_d8) ^ _DAT_146af5810) &
                               -(uint)(1e-08 <= fVar33) ^ _DAT_146af5810);
              fVar35 = (float)(((uint)(((fRam0000000146af5824 -
                                        fVar58 * fVar58 * fVar35 * fRam0000000146af5824) * fVar58 +
                                       fVar58) * fStack_d4) ^ uRam0000000146af5814) &
                               -(uint)(1e-08 <= fVar35) ^ uRam0000000146af5814);
              fVar24 = (float)(((uint)(((fRam0000000146af5828 -
                                        fVar59 * fVar59 * fVar37 * fRam0000000146af5828) * fVar59 +
                                       fVar59) * fStack_d0) ^ uRam0000000146af5818) &
                               -(uint)(1e-08 <= fVar37) ^ uRam0000000146af5818);
              fVar46 = (float)(((uint)(((fRam0000000146af582c -
                                        fVar28 * fVar28 * fVar38 * fRam0000000146af582c) * fVar28 +
                                       fVar28) * fStack_cc) ^ uRam0000000146af581c) &
                               -(uint)(1e-08 <= fVar38) ^ uRam0000000146af581c);
              fVar47 = local_f8;
              fVar48 = fStack_f4;
              fVar49 = fStack_f0;
            }
            auVar18._4_4_ =
                 -(uint)(fRam0000000146af59f4 < (float)((uint)fVar54 & uRam0000000146af5a04));
            auVar18._0_4_ = -(uint)(_DAT_146af59f0 < (float)((uint)fVar53 & _DAT_146af5a00));
            auVar18._8_4_ =
                 -(uint)(fRam0000000146af59f8 < (float)((uint)fVar55 & uRam0000000146af5a08));
            auVar18._12_4_ =
                 -(uint)(fRam0000000146af59fc < (float)((uint)fVar56 & uRam0000000146af5a0c));
            iVar10 = movmskps(uVar11,auVar18);
            if (iVar10 == 0) {
              local_128 = _DAT_1468b5b70;
              uStack_120 = uRam00000001468b5b78;
              local_108 = _DAT_1468b5b90;
              uStack_100 = uRam00000001468b5b98;
              local_118 = _DAT_1468b5b80;
              uStack_110 = uRam00000001468b5b88;
            }
            else {
              fVar33 = fVar33 * _DAT_146af59e0;
              fVar35 = fVar35 * fRam0000000146af59e4;
              fVar24 = fVar24 * fRam0000000146af59e8;
              fVar46 = fVar46 * fRam0000000146af59ec;
              auVar4._4_4_ = fVar54;
              auVar4._0_4_ = fVar53;
              auVar4._8_4_ = fVar55;
              auVar4._12_4_ = fVar56;
              auVar21 = rcpps(auVar21,auVar4);
              local_128 = CONCAT44(fVar35,fVar33);
              uStack_120 = CONCAT44(fVar46,fVar24);
              fVar57 = auVar21._0_4_;
              fVar58 = auVar21._4_4_;
              fVar59 = auVar21._8_4_;
              fVar28 = auVar21._12_4_;
              fVar57 = (fVar57 + fVar57) - fVar57 * fVar57 * fVar53;
              fVar58 = (fVar58 + fVar58) - fVar58 * fVar58 * fVar54;
              fVar59 = (fVar59 + fVar59) - fVar59 * fVar59 * fVar55;
              fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar56;
              fVar57 = (fVar57 + fVar57) - fVar57 * fVar57 * fVar53;
              fVar58 = (fVar58 + fVar58) - fVar58 * fVar58 * fVar54;
              fVar59 = (fVar59 + fVar59) - fVar59 * fVar59 * fVar55;
              fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar56;
              fVar57 = (float)((-(uint)((float)((uint)fVar53 & _DAT_146af5a00) <= _DAT_146af59f0) &
                                (uint)fVar57 ^ (uint)fVar57) & uVar5);
              fVar58 = (float)((-(uint)((float)((uint)fVar54 & uRam0000000146af5a04) <=
                                       fRam0000000146af59f4) & (uint)fVar58 ^ (uint)fVar58) & uVar6)
              ;
              fVar59 = (float)((-(uint)((float)((uint)fVar55 & uRam0000000146af5a08) <=
                                       fRam0000000146af59f8) & (uint)fVar59 ^ (uint)fVar59) & uVar7)
              ;
              fVar28 = (float)((-(uint)((float)((uint)fVar56 & uRam0000000146af5a0c) <=
                                       fRam0000000146af59fc) & (uint)fVar28 ^ (uint)fVar28) & uVar8)
              ;
              fVar47 = fVar47 * fVar57;
              fVar48 = fVar48 * fVar58;
              fVar49 = fVar49 * fVar59;
              fVar25 = fVar25 * fVar28;
              local_108 = CONCAT44(fVar58,fVar57);
              uStack_100 = CONCAT44(fVar28,fVar59);
              fVar57 = fVar49 * fVar35 - fVar48 * fVar24;
              fVar58 = fVar47 * fVar24 - fVar49 * fVar33;
              fVar59 = fVar48 * fVar33 - fVar47 * fVar35;
              fVar28 = fVar25 * fVar46 - fVar25 * fVar46;
              fVar57 = fVar57 + fVar57;
              fVar58 = fVar58 + fVar58;
              fVar59 = fVar59 + fVar59;
              fVar28 = fVar28 + fVar28;
              local_118 = CONCAT44((uint)(0.0 - ((fVar57 * fVar24 - fVar59 * fVar33) +
                                                fVar46 * fVar58 + fVar48)) & uVar6,
                                   (uint)(0.0 - ((fVar59 * fVar35 - fVar58 * fVar24) +
                                                fVar46 * fVar57 + fVar47)) & uVar5);
              uStack_110 = CONCAT44((uint)(0.0 - ((fVar28 * fVar46 - fVar28 * fVar46) +
                                                 fVar46 * fVar28 + fVar25)) & uVar8,
                                    (uint)(0.0 - ((fVar58 * fVar33 - fVar57 * fVar35) +
                                                 fVar46 * fVar59 + fVar49)) & uVar7);
            }
            FUN_1424aec00(&local_128,param_4);
            *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | 1;
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1424af600 FUN_1424af600 body=672 status=ok
// SIG undefined FUN_1424af600(void)

void FUN_1424af600(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  uint uVar12;
  wchar_t *pwVar13;
  int iVar14;
  wchar_t *pwVar15;
  int iVar16;
  bool bVar17;
  uint local_res8;
  undefined4 uStackX_c;
  
  pwVar15 = (wchar_t *)0x0;
  lVar4 = (longlong)*(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x50) != 0) {
    local_res8 = 0;
    bVar17 = **(longlong **)(param_1 + 0x48) != param_2;
    pwVar8 = pwVar15;
    pwVar10 = pwVar15;
    pwVar13 = pwVar15;
    do {
      uVar12 = (uint)pwVar13;
      uVar9 = (uint)pwVar10;
      pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
      pwVar10 = (wchar_t *)(ulonglong)(uVar9 + 1);
      if ((longlong)pwVar8 < lVar4) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)pwVar8 * 8);
        do {
          if (bVar17 != (*plVar5 != param_2)) break;
          pwVar10 = (wchar_t *)(ulonglong)((int)pwVar10 + 1);
          pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
          plVar5 = plVar5 + 1;
        } while ((longlong)pwVar8 < lVar4);
      }
      iVar16 = (int)pwVar10 - uVar9;
      if (bVar17 != false) {
        if (uVar12 != uVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)uVar12 * 8),
                     (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)uVar9 * 8),
                     (longlong)iVar16 << 3);
          uVar12 = local_res8;
        }
        local_res8 = uVar12 + iVar16;
        pwVar13 = (wchar_t *)(ulonglong)local_res8;
      }
      bVar17 = (bool)(bVar17 ^ 1);
    } while ((longlong)pwVar8 < lVar4);
    *(int *)(param_1 + 0x50) = (int)pwVar13;
  }
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGbxLagCompensationManager::OnActorEndPlay",L"::");
  while (pwVar10 = pwVar8, pwVar10 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
    pwVar15 = pwVar10;
  }
  FName::FName(&local_res8,pwVar15 + 2,1);
  lVar7 = CONCAT44(uStackX_c,local_res8);
  plVar5 = (longlong *)(param_2 + 0x2a0);
  lVar4 = *plVar5;
  iVar16 = *(int *)(param_2 + 0x2a8);
  lVar11 = lVar4;
  do {
    if (lVar11 == (longlong)iVar16 * 0x10 + lVar4) {
LAB_1424af7b2:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar5);
      plVar5 = *(longlong **)(param_1 + 0x60);
      do {
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        lVar4 = *plVar5;
        plVar1 = *(longlong **)(lVar4 + 8);
        iVar16 = *(int *)(lVar4 + 0x10);
        plVar6 = plVar1 + (longlong)iVar16 * 0xc;
        do {
          if (plVar6 == plVar1) goto LAB_1424af876;
          plVar6 = plVar6 + -0xc;
        } while (*plVar6 != param_2);
        lVar7 = ((longlong)plVar6 - (longlong)plVar1) / 6 +
                ((longlong)plVar6 - (longlong)plVar1 >> 0x3f);
        iVar14 = (int)(lVar7 >> 4) - (int)(lVar7 >> 0x3f);
        if (iVar14 != -1) {
          iVar3 = (iVar16 - iVar14) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar1 + (longlong)iVar14 * 0xc,plVar1 + (longlong)(iVar16 - iVar3) * 0xc,
                       (longlong)iVar3 * 0x60);
            iVar16 = *(int *)(lVar4 + 0x10);
          }
          *(int *)(lVar4 + 0x10) = iVar16 + -1;
          TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(lVar4 + 8);
        }
LAB_1424af876:
        plVar5 = (longlong *)plVar5[1];
      } while( true );
    }
    if (((*(longlong *)(lVar11 + 8) == lVar7) && (param_1 != 0)) &&
       (lVar2 = FWeakObjectPtr::GetEvenIfUnreachable(lVar11), param_1 == lVar2)) {
      iVar16 = (int)(lVar11 - lVar4 >> 4);
      if (iVar16 != -1) {
        iVar14 = *(int *)(param_2 + 0x2a8);
        iVar3 = (iVar14 - iVar16) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar16 * 0x10 + *plVar5),
                     (void *)((longlong)(iVar14 - iVar3) * 0x10 + *plVar5),(longlong)iVar3 << 4);
          iVar14 = *(int *)(param_2 + 0x2a8);
        }
        *(int *)(param_2 + 0x2a8) = iVar14 + -1;
      }
      goto LAB_1424af7b2;
    }
    lVar11 = lVar11 + 0x10;
  } while( true );
}



// FUNCTION 1424af8a0 FUN_1424af8a0 body=2205 status=ok
// SIG undefined FUN_1424af8a0(void)

void FUN_1424af8a0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
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
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = 0;
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_res8 = param_3[2];
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_res8;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[3] = puVar7;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar6 + 2) = 1;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
    puVar6[5] = uVar4;
    local_res8 = *param_3;
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_res8;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = puVar7;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  }
  if (*(short *)(param_1 + 0xde) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xdc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = 0;
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_res8 = param_3[8];
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_res8;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[3] = puVar7;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar6 + 2) = 1;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
    puVar6[5] = uVar4;
    local_res8 = param_3[7];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_res8;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = puVar7;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  }
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = 0;
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_res8 = param_3[0xb];
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_res8;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[3] = puVar7;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar6 + 2) = 1;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
    puVar6[5] = uVar4;
    local_res8 = param_3[10];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_res8;
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
    *puVar6 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = puVar7;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  }
  if (*(short *)(param_1 + 0xe6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = 0;
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
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    local_res8 = param_3[0xe];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_res8;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[3] = puVar7;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar6 + 2) = 1;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
    puVar6[5] = uVar3;
    local_res8 = param_3[0xd];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_res8;
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
    *puVar6 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = puVar7;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  }
  return;
}



// FUNCTION 1424b0140 FUN_1424b0140 body=335 status=ok
// SIG undefined FUN_1424b0140(void)

void FUN_1424b0140(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar4 = 0;
  iVar8 = 0;
  iVar3 = *(int *)(*param_1 + 0x40);
  iVar1 = *(int *)(*param_1 + 0x38);
  if (0 < *(int *)((longlong)param_1 + 0x1c)) {
    do {
      iVar5 = (int)param_1[3];
      iVar6 = 0;
      if (0 < iVar5) {
        do {
          lVar7 = (longlong)(iVar5 * iVar8 + iVar6);
          *(undefined1 *)
           ((longlong)
            ((*(int *)((longlong)param_1 + 0x24) + iVar8) * iVar3 * iVar1 + (int)param_1[4] + iVar6)
           + *(longlong *)(*param_1 + 0x70)) = *(undefined1 *)(lVar7 + param_2);
          if (param_3 != '\0') {
            *(undefined1 *)(lVar7 + param_1[10]) = *(undefined1 *)(lVar7 + param_2);
          }
          iVar5 = (int)param_1[3];
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((longlong)param_1 + 0x1c));
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_1424b0430(param_1,1);
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((longlong)param_1 + 0x3c);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)((longlong)param_1 + 0x44);
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (*(int *)((longlong)param_1 + 0x6c) != (int)param_1[6]) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0xc);
      iVar4 = (int)param_1[0xd];
    }
    iVar3 = (int)param_1[6] + iVar4;
    *(int *)(param_1 + 0xd) = iVar3;
    if (*(int *)((longlong)param_1 + 0x6c) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xc,iVar4);
    }
    *(int *)((longlong)param_1 + 0x74) = (int)param_1[6];
    cVar2 = FUN_141645020(1,param_1[0xc],(longlong)param_1 + 0x74,param_1[10],(int)param_1[0xb],0xf)
    ;
    if (cVar2 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
    }
    FUN_1424a5190(*param_1,1);
  }
  return;
}



// FUNCTION 1424b0290 FUN_1424b0290 body=415 status=ok
// SIG undefined FUN_1424b0290(void)

void FUN_1424b0290(longlong param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 != 1) {
    if (param_2 == 2) {
      iVar4 = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (0 < *(int *)(param_1 + 0x34)) {
        lVar6 = 0;
        do {
          plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x48));
          if ((*(int *)((longlong)plVar2 + 0x14) == 4) || (*(int *)((longlong)plVar2 + 0x14) == 1))
          {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)((longlong)plVar2 + 0x34);
          }
          else {
            uVar3 = *param_3;
            if (*(uint *)(plVar2 + 8) < uVar3) {
              if ((char)plVar2[0xe] == '\0') {
                TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                          (*plVar2 + 0x58,plVar2 + 1);
              }
              *(undefined1 *)(plVar2 + 0xe) = 1;
            }
            *(uint *)(plVar2 + 8) = uVar3;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar3;
          }
          iVar4 = iVar4 + 1;
          lVar6 = lVar6 + 8;
          param_3 = param_3 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x34));
      }
    }
    else if (param_2 == 3) {
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (0 < *(int *)(param_1 + 0x34)) {
        lVar6 = 0;
        uVar5 = uVar3;
        uVar3 = 0;
        do {
          plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x48));
          if ((*(int *)((longlong)plVar2 + 0x14) == 4) || (*(int *)((longlong)plVar2 + 0x14) == 1))
          {
            uVar3 = uVar3 + (int)plVar2[7];
            *(uint *)(param_1 + 0x28) = uVar3;
          }
          else {
            uVar3 = *param_3;
            if (*(uint *)(plVar2 + 9) < uVar3) {
              if ((char)plVar2[0xe] == '\0') {
                TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                          (*plVar2 + 0x58,plVar2 + 1);
              }
              *(undefined1 *)(plVar2 + 0xe) = 1;
            }
            *(uint *)(plVar2 + 9) = uVar3;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar3;
            uVar3 = *(uint *)(param_1 + 0x28);
          }
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 8;
          param_3 = param_3 + 1;
        } while ((int)uVar5 < *(int *)(param_1 + 0x34));
      }
      *(float *)(param_1 + 0x30) = (float)uVar3 / (float)*(uint *)(param_1 + 0x18);
    }
    return;
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    lVar6 = 0;
    do {
      uVar3 = *param_3;
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x48));
      *(uint *)(lVar1 + 0x34) = uVar3;
      *(uint *)(lVar1 + 0x38) = uVar3 * 0xff;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar3;
      FUN_1424b0430(lVar1,CONCAT71((uint7)(uint3)(uVar3 >> 8),1));
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      param_3 = param_3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x34));
    iVar4 = *(int *)(param_1 + 0x14);
  }
  *(int *)(param_1 + 0x18) = iVar4 * 0xff;
  return;
}



// FUNCTION 1424b0430 FUN_1424b0430 body=449 status=ok
// SIG undefined FUN_1424b0430(void)

void FUN_1424b0430(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x14) != 4)) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (0 < (int)*(uint *)(param_1 + 0x58)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x58);
      lVar5 = 0;
      iVar6 = 0;
      do {
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0x50) + lVar5);
        if (bVar2 == 0xff) {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          bVar2 = *(byte *)(*(longlong *)(param_1 + 0x50) + lVar5);
        }
        lVar5 = lVar5 + 1;
        iVar6 = iVar6 + (uint)bVar2;
        *(int *)(param_1 + 0x44) = iVar6;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  uVar7 = *(uint *)(param_1 + 0x34);
  lVar5 = 4;
  if (uVar7 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    iVar6 = 1;
    goto LAB_1424b04ce;
  }
  if (*(uint *)(param_1 + 0x3c) == 0) {
    if (uVar7 == 0) {
LAB_1424b04bd:
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar6 = 4;
      goto LAB_1424b04ce;
    }
    iVar6 = 2;
  }
  else {
    if (uVar7 <= *(uint *)(param_1 + 0x3c)) goto LAB_1424b04bd;
    iVar6 = 3;
  }
  *(int *)(param_1 + 0x14) = iVar6;
LAB_1424b04ce:
  lVar1 = DAT_146af58c0;
  if (iVar6 == 3) {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar5 = 0;
    }
    uVar7 = *(uint *)(param_1 + 0x34);
    if ((*(float *)(lVar5 + lVar1) <= (float)*(uint *)(param_1 + 0x3c) / (float)uVar7) ||
       (*(float *)(lVar5 + lVar1) <= (float)*(uint *)(param_1 + 0x44) * (0.003921569 / (float)uVar7)
       )) {
      uVar8 = 0;
      if (0 < *(int *)(param_1 + 0x58)) {
        lVar5 = 0;
        do {
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          *(undefined1 *)(lVar5 + *(longlong *)(param_1 + 0x50)) = 0xff;
          lVar5 = lVar5 + 1;
        } while ((int)uVar7 < *(int *)(param_1 + 0x58));
        uVar7 = *(uint *)(param_1 + 0x34);
      }
      *(uint *)(param_1 + 0x3c) = uVar7;
      *(uint *)(param_1 + 0x40) = uVar7;
      iVar6 = 1;
      if (uVar7 != 0) {
        iVar6 = 4;
      }
      *(uint *)(param_1 + 0x44) = uVar7 * 0xff;
      *(uint *)(param_1 + 0x48) = uVar7 * 0xff;
      *(int *)(param_1 + 0x14) = iVar6;
      FUN_1424b0430(param_1,CONCAT71((int7)(uVar8 >> 8),1));
    }
  }
  if (*(int *)(param_1 + 0x14) == 4) {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
      return;
    }
  }
  return;
}



// FUNCTION 1424b0600 FUN_1424b0600 body=137 status=ok
// SIG undefined FUN_1424b0600(void)

void FUN_1424b0600(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != *(int *)(param_1 + 0x30)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x60,*(int *)(param_1 + 0x30));
    iVar2 = *(int *)(param_1 + 0x68);
  }
  iVar2 = *(int *)(param_1 + 0x30) + iVar2;
  *(int *)(param_1 + 0x68) = iVar2;
  if (*(int *)(param_1 + 0x6c) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x30);
  cVar1 = FUN_141645020(1,*(undefined8 *)(param_1 + 0x60),param_1 + 0x74,
                        *(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58),0xf);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  return;
}



// FUNCTION 1424b0690 FUN_1424b0690 body=422 status=ok
// SIG undefined FUN_1424b0690(void)

void FUN_1424b0690(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong *plVar11;
  LARGE_INTEGER local_res20;
  undefined8 local_78;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar8 = FUN_1424a40c0();
  if (cVar8 == '\0') {
    return;
  }
  QueryPerformanceCounter(&local_res20);
  *(double *)(param_1 + 0x120) = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
  local_78._0_4_ = (float)param_3;
  bVar6 = (float)local_78 <= 0.0;
  local_78 = param_3;
  if (bVar6) {
    local_78._4_4_ = (float)((ulonglong)param_3 >> 0x20);
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0xf0));
  }
  if (local_78._4_4_ <= 0.0) {
    local_78 = CONCAT44(*(undefined4 *)(param_1 + 0xf4),(float)local_78);
  }
  uStack_48 = *param_2;
  local_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = local_78;
  local_50 = param_1;
  if ((DAT_146ac3ac6 != '\0') && (cVar8 = IsInRenderingThread(), cVar8 != '\0')) {
    uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142495b40(&local_50,uVar10);
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
    local_30 = (undefined4)local_50;
    uStack_2c = local_50._4_4_;
    uStack_28 = (undefined4)uStack_48;
    uStack_24 = uStack_48._4_4_;
    local_20 = local_40;
    uStack_1c = (undefined4)uStack_3c;
    uStack_18 = uStack_3c._4_4_;
    uStack_14 = uStack_34;
    uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142495b40(&local_30,uVar10);
  }
  else {
    plVar11 = (longlong *)FUN_14249a820(local_68,0,0xff);
    lVar3 = *plVar11;
    *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_50;
    *(undefined4 *)(lVar3 + 0x14) = local_50._4_4_;
    *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_48;
    *(undefined4 *)(lVar3 + 0x1c) = uStack_48._4_4_;
    *(undefined4 *)(lVar3 + 0x20) = local_40;
    *(undefined4 *)(lVar3 + 0x24) = (undefined4)uStack_3c;
    *(undefined4 *)(lVar3 + 0x28) = uStack_3c._4_4_;
    *(undefined4 *)(lVar3 + 0x2c) = uStack_34;
    lVar3 = *plVar11;
    lVar7 = plVar11[2];
    lVar4 = plVar11[1];
    lVar5 = *(longlong *)(lVar3 + 0x38);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_14048a640(lVar3,lVar4,(int)lVar7,1);
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
  return;
}



// FUNCTION 1424b0840 FUN_1424b0840 body=79 status=ok
// SIG undefined FUN_1424b0840(void)

void FUN_1424b0840(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if (param_3 != '\0') {
    FWeakObjectPtr::operator=(local_res20);
    FUN_142400b00(param_1 + 0x88,local_res18,local_res20,0);
    return;
  }
  FWeakObjectPtr::operator=(local_res20);
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x88,local_res20);
  return;
}



// FUNCTION 1424b0890 FUN_1424b0890 body=719 status=ok
// SIG undefined FUN_1424b0890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1424b0890(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *_Dst;
  undefined8 *puVar10;
  size_t _Size;
  longlong lVar11;
  undefined1 auStack_1168 [40];
  undefined8 auStack_1140 [508];
  undefined8 uStack_160;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130 [32];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  puVar9 = auStack_158;
  local_20 = DAT_1468387a8 ^ (ulonglong)&local_138;
  _Dst = (undefined8 *)0x0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    uStack_160 = 0x1424b0912;
    FUN_14179aca0(param_2,local_130);
  }
  else {
    uStack_160 = 0x1424b08f5;
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  local_138 = (longlong *)0x0;
  puVar10 = local_130;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    uStack_160 = 0x1424b0958;
    FUN_14179aca0(param_2);
  }
  else {
    uStack_160 = 0x1424b093b;
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  plVar4 = local_138;
  if (local_138 == (longlong *)0x0) {
    uStack_160 = 0x1424b09d0;
    puVar9 = auStack_1168;
    _Size = 0xfff;
    _Dst = auStack_1140;
  }
  else {
    iVar6 = *(int *)((longlong)local_138 + 0x34) * (int)local_138[6];
    if (iVar6 != 0) {
      uVar7 = (longlong)(iVar6 + 0xf) + 0xf;
      if (uVar7 <= (ulonglong)(longlong)(iVar6 + 0xf)) {
        uVar7 = 0xffffffffffffff0;
      }
      uStack_160 = 0x1424b0995;
      puVar9 = auStack_158 + -(uVar7 & 0xfffffffffffffff0);
      _Dst = (undefined8 *)((longlong)local_130 + -(uVar7 & 0xfffffffffffffff0));
    }
    if ((*(uint *)(local_138 + 7) >> 9 & 1) == 0) {
      pcVar2 = *(code **)(*local_138 + 0x330);
      *(undefined8 *)(puVar9 + -8) = 0x1424b09c4;
      (*pcVar2)(plVar4,_Dst);
      goto LAB_1424b09ee;
    }
    _Size = (size_t)iVar6;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1424b09ee;
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
LAB_1424b09ee:
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    *(undefined8 *)(puVar9 + -8) = 0x1424b0a23;
    FUN_14179aca0(param_2);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar9 + -8) = 0x1424b0a07;
    FFrame::Step(param_2,uVar1,_Dst);
  }
  plVar4 = local_138;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((local_138 != (longlong *)0x0) && (_Dst != (undefined8 *)0x0)) {
    iVar6 = *(int *)(puVar10 + 0x21);
    iVar5 = iVar6 + 1;
    *(int *)(puVar10 + 0x21) = iVar5;
    if (*(int *)((longlong)puVar10 + 0x10c) < iVar5) {
      *(undefined8 *)(puVar9 + -8) = 0x1424b0a71;
      TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(puVar10);
    }
    lVar11 = (longlong)iVar6 * 0x20;
    uVar7 = (ulonglong)(puVar10[0x20] != 0) - 1 & (ulonglong)puVar10 | puVar10[0x20];
    *(undefined8 *)(uVar7 + 0x10 + lVar11) = 0;
    *(undefined8 *)(uVar7 + 0x18 + lVar11) = 0;
    puVar8 = (undefined8 *)
             (((ulonglong)(puVar10[0x20] != 0) - 1 & (ulonglong)puVar10 | puVar10[0x20]) + lVar11);
    *puVar8 = plVar4;
    lVar3 = plVar4[6];
    iVar6 = *(int *)((longlong)plVar4 + 0x34);
    *(undefined8 *)(puVar9 + -8) = 0x1424b0ad8;
    FUN_1424acc50(puVar8 + 1,(int)lVar3 * iVar6,CONCAT71((int7)((ulonglong)lVar11 >> 8),1));
    puVar10 = (undefined8 *)puVar8[2];
    if ((undefined8 *)puVar8[2] == (undefined8 *)0x0) {
      puVar10 = puVar8 + 1;
    }
    if (puVar10 != _Dst) {
      if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
        lVar3 = plVar4[6];
        pcVar2 = *(code **)(*plVar4 + 0x2e8);
        *(undefined8 *)(puVar9 + -8) = 0x1424b0b25;
        (*pcVar2)(plVar4,puVar10,_Dst,(int)lVar3);
      }
      else {
        iVar6 = *(int *)((longlong)plVar4 + 0x34);
        lVar3 = plVar4[6];
        *(undefined8 *)(puVar9 + -8) = 0x1424b0b0d;
        _guard_xfg_dispatch_icall_nop(puVar10,_Dst,(longlong)(iVar6 * (int)lVar3));
      }
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1424b0b2e;
  FUN_1409f5970(local_130);
  *(undefined8 *)(puVar9 + -8) = 0x1424b0b3d;
  return;
}



// FUNCTION 1424b0b60 Serialize body=374 status=ok
// SIG undefined Serialize(void)

undefined1 FBaseGPUSkinCacheCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd2);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xe4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xe8);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xec);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xf0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xe0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x104);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x108);
  FUN_1419e0a40(uVar1,param_1 + 0xc6);
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xf4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xfa);
  FUN_1419e0b60(uVar1,param_1 + 0x100);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x10e);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x112);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x116);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x11c);
  FUN_1419e0a40(uVar1,param_1 + 0x122);
  return 0;
}



// FUNCTION 1424b0ce0 Serialize body=297 status=ok
// SIG undefined Serialize(void)

undefined1 FBaseRecomputeTangents::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xca);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xce);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd2);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xd8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xdc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xe2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xe8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xee);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xf4);
  FUN_1419e0b60(uVar1,param_1 + 0xf8);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xfc);
  FUN_1419e0b60(uVar1,param_1 + 0x100);
  return 0;
}



// FUNCTION 1424b0e10 FUN_1424b0e10 body=1275 status=ok
// SIG undefined FUN_1424b0e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_1424b0e10(longlong param_1)

{
  int *piVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 **ppuVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar7 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar7 = DAT_1464c9c14;
  }
  pppuVar9 = (undefined8 ***)FUN_1419ef5f0((&DAT_1464c9c48)[iVar7]);
  if (2 < (int)pppuVar9) {
    lVar12 = 2;
    ppuVar13 = (undefined8 **)(param_1 + 0x30);
    lVar14 = 0;
    do {
      local_a0 = &local_78;
      local_68 = 1;
      local_64 = _DAT_1468b5d78;
      uStack_60 = uRam00000001468b5d7c;
      uStack_5c = uRam00000001468b5d80;
      uStack_58 = uRam00000001468b5d84;
      local_54 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_a8 = 0x209;
      (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_90,&DAT_146ab6e78,0x1000);
      if (ppuVar13 == &local_90) {
LAB_1424b0f8b:
        puVar4 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_90 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            if ((*(char *)(local_90 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar11 = lVar14;
                if (uVar8 != 0) {
                  lVar11 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar11 + 8) = puVar4;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
      }
      else {
        puVar4 = *ppuVar13;
        *ppuVar13 = local_90;
        local_90 = (undefined8 *)0x0;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            if ((*(char *)(puVar4 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar11 = lVar14;
                if (uVar8 != 0) {
                  lVar11 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar11 + 8) = puVar4;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
          goto LAB_1424b0f8b;
        }
      }
      local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,0x1c);
      local_a8 = 4;
      (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_88,&DAT_146ab6e78,*ppuVar13);
      ppuVar5 = ppuVar13 + 2;
      if (ppuVar5 == &local_88) {
LAB_1424b10e7:
        puVar4 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_88 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            if ((*(char *)(local_88 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar11 = lVar14;
                if (uVar8 != 0) {
                  lVar11 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar11 + 8) = puVar4;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
      }
      else {
        puVar4 = *ppuVar5;
        *ppuVar5 = local_88;
        local_88 = (undefined8 *)0x0;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            if ((*(char *)(puVar4 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar11 = lVar14;
                if (uVar8 != 0) {
                  lVar11 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar11 + 8) = puVar4;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
          goto LAB_1424b10e7;
        }
      }
      local_a8 = CONCAT31(local_a8._1_3_,0x1c);
      (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,&local_80,&DAT_146ab6e78,*ppuVar13);
      pppuVar9 = (undefined8 ***)local_80;
      pppuVar2 = (undefined8 ***)(ppuVar13 + 4);
      pppuVar10 = &local_80;
      if (pppuVar2 == &local_80) {
LAB_1424b123b:
        pppuVar9 = pppuVar10;
        ppuVar5 = local_80;
        if ((undefined8 ***)local_80 != (undefined8 ***)0x0) {
          LOCK();
          pppuVar2 = (undefined8 ***)(local_80 + 1);
          uVar8 = *(uint *)pppuVar2;
          pppuVar9 = (undefined8 ***)(ulonglong)uVar8;
          *(uint *)pppuVar2 = *(uint *)pppuVar2 - 1;
          UNLOCK();
          if (uVar8 == 1) {
            if ((*(char *)(local_80 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              pppuVar9 = (undefined8 ***)0x0;
              LOCK();
              uVar8 = *(uint *)((longlong)ppuVar5 + 0xc);
              if (uVar8 == 0) {
                *(uint *)((longlong)ppuVar5 + 0xc) = 1;
              }
              else {
                pppuVar9 = (undefined8 ***)(ulonglong)uVar8;
              }
              UNLOCK();
              if (uVar8 == 0) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar11 = lVar14;
                if (uVar8 != 0) {
                  lVar11 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(undefined8 ***)(lVar11 + 8) = ppuVar5;
                pppuVar9 = (undefined8 ***)FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940)
                ;
              }
            }
            else {
              pppuVar9 = (undefined8 ***)(*(code *)**ppuVar5)(ppuVar5,1);
            }
          }
        }
      }
      else {
        ppuVar5 = *pppuVar2;
        *pppuVar2 = local_80;
        local_80 = (undefined8 ***)0x0;
        if (ppuVar5 != (undefined8 **)0x0) {
          LOCK();
          ppuVar3 = ppuVar5 + 1;
          uVar8 = *(uint *)ppuVar3;
          *(uint *)ppuVar3 = *(uint *)ppuVar3 - 1;
          UNLOCK();
          pppuVar10 = (undefined8 ***)(ulonglong)uVar8;
          if (uVar8 == 1) {
            if ((*(char *)(ppuVar5 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              pppuVar10 = (undefined8 ***)0x0;
              LOCK();
              uVar8 = *(uint *)((longlong)ppuVar5 + 0xc);
              if (uVar8 == 0) {
                *(uint *)((longlong)ppuVar5 + 0xc) = 1;
              }
              else {
                pppuVar10 = (undefined8 ***)(ulonglong)uVar8;
              }
              UNLOCK();
              if (uVar8 == 0) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar11 = lVar14;
                if (uVar8 != 0) {
                  lVar11 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(undefined8 ***)(lVar11 + 8) = ppuVar5;
                pppuVar10 = (undefined8 ***)
                            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              pppuVar10 = (undefined8 ***)(*(code *)**ppuVar5)(ppuVar5,1);
            }
          }
          goto LAB_1424b123b;
        }
      }
      ppuVar13 = ppuVar13 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return pppuVar9;
}



// FUNCTION 1424b1310 ReleaseRHI body=72 status=ok
// SIG undefined ReleaseRHI(void)

void FSortOffsetBuffers::ReleaseRHI(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x40;
  lVar1 = 2;
  do {
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x10,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + -0x10);
    param_1 = param_1 + 8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1424b1360 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FSortOffsetBuffers>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450cd1b8;
  FRenderResource::ReleaseResource();
  FSortOffsetBuffers::~FSortOffsetBuffers(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1424b13b0 FUN_1424b13b0 body=305 status=ok
// SIG undefined FUN_1424b13b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424b13b0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar1 = DAT_1464c9c14;
  }
  iVar1 = FUN_1419ef5f0((&DAT_1464c9c48)[iVar1]);
  if (2 < iVar1) {
    local_70 = &local_58;
    local_48 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_78 = 0x204;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x20);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    local_70 = (undefined8 *)CONCAT71(local_70._1_7_,0x1c);
    local_78 = 4;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 1424b14f0 `scalar_deleting_destructor' body=88 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FRadixSortParametersBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450cd1f8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1424b1550 FUN_1424b1550 body=74 status=ok
// SIG undefined FUN_1424b1550(void)

undefined1 FUN_1424b1550(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  return 0;
}



// FUNCTION 1424b15f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x450);
  }
  return param_1;
}



// FUNCTION 1424b1630 FUN_1424b1630 body=33 status=ok
// SIG undefined FUN_1424b1630(void)

void FUN_1424b1630(longlong param_1)

{
  IsInRenderingThread();
  TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::DrainPool
            (param_1 + -0x450,0);
  return;
}



// FUNCTION 1424b1660 FUN_1424b1660 body=37 status=ok
// SIG undefined FUN_1424b1660(void)

void FUN_1424b1660(longlong param_1)

{
  FTickableObjectRenderThread::Unregister(param_1 + -0x10);
  TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::DrainPool
            (param_1 + -0x460,1);
  return;
}



// FUNCTION 1424b1690 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1424b16d0 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FBoneBufferPool::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450cd470;
  param_1[0x8a] = &PTR_LAB_1450cd478;
  param_1[0x8c] = &PTR_LAB_1450cd4a0;
  TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
  ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1424b1730 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TGlobalResource<FBoneBufferPool>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TGlobalResource<FBoneBufferPool>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1424b1770 FUN_1424b1770 body=98 status=ok
// SIG undefined FUN_1424b1770(void)

undefined8 * FUN_1424b1770(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x48);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[3] = 0;
      puVar1[8] = 0;
      *(undefined4 *)((longlong)puVar1 + 10) = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x1c) = 0;
      *puVar1 = &PTR_FUN_1450cda50;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424b17e0 FUN_1424b17e0 body=75 status=ok
// SIG undefined FUN_1424b17e0(void)

undefined8 * FUN_1424b17e0(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[3] = 0;
      *(undefined4 *)((longlong)puVar1 + 10) = 0;
      *puVar1 = &PTR_FUN_1450cd908;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x1c) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424b1830 FUN_1424b1830 body=623 status=ok
// SIG undefined FUN_1424b1830(void)

int * FUN_1424b1830(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x30) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar8 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar8 = *puVar8 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (undefined8 *)param_3[1];
  bVar9 = false;
  puVar8 = (uint *)((longlong)iVar7 * 0x30 + *param_1);
  *puVar8 = *(uint *)*param_3;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *(undefined8 *)(puVar8 + 2) = *puVar1;
  *puVar1 = 0;
  puVar8[4] = *(uint *)(puVar1 + 1);
  puVar8[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  puVar8[6] = *(uint *)(puVar1 + 2);
  puVar8[7] = *(uint *)((longlong)puVar1 + 0x14);
  puVar8[8] = *(uint *)(puVar1 + 3);
  puVar8[10] = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar8) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar5 * 0x30) == *puVar8) goto LAB_1424b19be;
          iVar5 = *(int *)(*param_1 + 0x28 + (longlong)iVar5 * 0x30);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1424b19be:
    bVar9 = iVar5 != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)iVar5 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar8,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1424b1a74;
    }
  }
  cVar2 = TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *puVar8;
    puVar8[0xb] = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar8[10] = *(uint *)((longlong)plVar4 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1424b1a74:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1424b1aa0 FUN_1424b1aa0 body=513 status=ok
// SIG undefined FUN_1424b1aa0(void)

int * FUN_1424b1aa0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar7 = (longlong *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *param_2 = local_38[0];
  *local_30 = *plVar7;
  local_30[1] = plVar7[1];
  lVar4 = plVar7[2];
  local_30[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_30 + 3) = *puVar3;
  bVar13 = false;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar10 = -1;
    iVar9 = iVar10;
    if (iVar12 != 0) {
      lVar4 = *local_30;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x28) == lVar4) break;
          iVar8 = *(int *)(*param_1 + 0x20 + (longlong)iVar8 * 0x28);
          iVar9 = iVar10;
        } while (iVar8 != -1);
      }
    }
    bVar13 = iVar9 != -1;
    if (bVar13) {
      lVar4 = *param_1;
      plVar7 = *(longlong **)(lVar4 + 0x10 + (longlong)iVar9 * 0x28);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar9 * 0x28),local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_1424b1c79;
    }
  }
  cVar6 = TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar12,0);
  if (cVar6 == '\0') {
    uVar11 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x24) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1424b1c79:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1424b1cb0 HeapSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_> body=338 status=ok
// SIG undefined HeapSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
               (undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x0001424b1cda:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar6 + 2) < *(int *)(param_1 + iVar7)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        piVar1 = (int *)(param_1 + iVar7);
        piVar2 = (int *)(param_1 + iVar5);
        if (*piVar2 < *piVar1) {
          if (piVar2 != piVar1) {
            uVar3 = *(undefined8 *)piVar2;
            *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
            *(undefined8 *)piVar1 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x0001424b1cda;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar3 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar4 + 2) < *(int *)(param_1 + iVar6)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          piVar1 = (int *)(param_1 + iVar6);
          piVar2 = (int *)(param_1 + iVar5);
          if (*piVar1 <= *piVar2) break;
          if (piVar2 != piVar1) {
            uVar3 = *(undefined8 *)piVar2;
            *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
            *(undefined8 *)piVar1 = uVar3;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1424b1e10 FUN_1424b1e10 body=347 status=ok
// SIG undefined FUN_1424b1e10(void)

void FUN_1424b1e10(undefined8 *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar9 = iVar4 * 2 + 1;
    iVar7 = iVar9;
    iVar10 = iVar4;
joined_r0x0001424b1e3a:
    do {
      if (iVar9 < param_2) {
        iVar5 = iVar4 * 2 + 1;
        iVar9 = iVar4 * 2 + 2;
        iVar6 = iVar5;
        if ((iVar9 < param_2) &&
           (iVar6 = iVar9,
           *(float *)(param_1 + iVar9) <= *(float *)(param_1 + iVar5) &&
           *(float *)(param_1 + iVar5) != *(float *)(param_1 + iVar9))) {
          iVar6 = iVar5;
        }
        pfVar1 = (float *)(param_1 + iVar4);
        pfVar2 = (float *)(param_1 + iVar6);
        if (*pfVar1 <= *(float *)(param_1 + iVar6) && *(float *)(param_1 + iVar6) != *pfVar1) {
          if (pfVar1 != pfVar2) {
            uVar3 = *(undefined8 *)pfVar1;
            *(undefined8 *)pfVar1 = *(undefined8 *)pfVar2;
            *(undefined8 *)pfVar2 = uVar3;
          }
          iVar9 = iVar6 * 2 + 1;
          iVar4 = iVar6;
          goto joined_r0x0001424b1e3a;
        }
      }
      iVar9 = iVar7 + -2;
      iVar4 = iVar10 + -1;
      iVar7 = iVar9;
      iVar10 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar8 = param_1 + param_2;
    do {
      if (param_1 != puVar8) {
        uVar3 = *param_1;
        *param_1 = *puVar8;
        *puVar8 = uVar3;
      }
      iVar4 = 0;
      if (1 < param_2) {
        do {
          iVar9 = iVar4 * 2 + 1;
          iVar10 = iVar4 * 2 + 2;
          iVar7 = iVar9;
          if ((iVar10 < param_2) &&
             (iVar7 = iVar10,
             *(float *)(param_1 + iVar10) <= *(float *)(param_1 + iVar9) &&
             *(float *)(param_1 + iVar9) != *(float *)(param_1 + iVar10))) {
            iVar7 = iVar9;
          }
          pfVar1 = (float *)(param_1 + iVar4);
          pfVar2 = (float *)(param_1 + iVar7);
          if (*(float *)(param_1 + iVar7) < *pfVar1 || *(float *)(param_1 + iVar7) == *pfVar1)
          break;
          if (pfVar1 != pfVar2) {
            uVar3 = *(undefined8 *)pfVar1;
            *(undefined8 *)pfVar1 = *(undefined8 *)pfVar2;
            *(undefined8 *)pfVar2 = uVar3;
          }
          iVar4 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar8 = puVar8 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1424b1f70 IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_> body=818 status=ok
// SIG undefined IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
               (longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 4;
    fVar14 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar14 = ::_guard_xfg_dispatch_icall_nop(fVar14);
    local_318 = (undefined4)(longlong)(fVar14 + fVar14);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar7 = &local_328;
    do {
      piVar5 = (int *)*plVar7;
      piVar12 = (int *)plVar7[1];
      local_338 = (int)plVar7[2];
      lVar9 = ((longlong)piVar12 - (longlong)piVar5 >> 2) + 1;
      piVar8 = piVar5;
      if (local_338 != 0) {
LAB_1424b2030:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          iVar13 = piVar8[lVar9 >> 1];
          piVar8[lVar9 >> 1] = *piVar8;
          piVar10 = piVar12 + 1;
          *piVar8 = iVar13;
          piVar5 = piVar8;
LAB_1424b2060:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar12) goto code_r0x0001424b2069;
          goto LAB_1424b2070;
        }
        for (; piVar10 = piVar8, piVar5 = piVar8, piVar8 < piVar12; piVar12 = piVar12 + -1) {
          while (piVar11 = piVar10, piVar5 = piVar5 + 1, piVar5 <= piVar12) {
            piVar10 = piVar5;
            if (*piVar11 <= *piVar5) {
              piVar10 = piVar11;
            }
          }
          iVar13 = *piVar11;
          *piVar11 = *piVar12;
          *piVar12 = iVar13;
        }
        goto LAB_1424b221a;
      }
LAB_1424b211e:
      iVar13 = (int)lVar9;
      iVar2 = (iVar13 + -2) / 2;
      if (-1 < iVar2) {
        iVar3 = iVar2 * 2 + 1;
        iVar1 = iVar3;
        iVar6 = iVar2;
joined_r0x0001424b2138:
        do {
          if (iVar3 < iVar13) {
            iVar3 = iVar2 * 2;
            iVar4 = iVar3 + 1;
            if (iVar3 + 2 < iVar13) {
              if (piVar5[iVar4] < piVar5[(longlong)iVar3 + 2]) {
                iVar4 = iVar3;
              }
              iVar4 = iVar4 + 1;
            }
            iVar3 = piVar5[iVar2];
            if (piVar5[iVar4] < iVar3) {
              piVar5[iVar2] = piVar5[iVar4];
              piVar5[iVar4] = iVar3;
              iVar3 = iVar4 * 2 + 1;
              iVar2 = iVar4;
              goto joined_r0x0001424b2138;
            }
          }
          iVar3 = iVar1 + -2;
          iVar2 = iVar6 + -1;
          iVar1 = iVar3;
          iVar6 = iVar2;
        } while (-1 < iVar2);
      }
      iVar13 = iVar13 + -1;
      lVar9 = (longlong)iVar13;
      if (0 < iVar13) {
        do {
          iVar2 = *piVar5;
          iVar3 = 0;
          *piVar5 = piVar5[lVar9];
          piVar5[lVar9] = iVar2;
          if (1 < iVar13) {
            do {
              iVar1 = iVar3 * 2;
              iVar2 = iVar1 + 1;
              if (iVar1 + 2 < iVar13) {
                if (piVar5[iVar2] < piVar5[(longlong)iVar1 + 2]) {
                  iVar2 = iVar1;
                }
                iVar2 = iVar2 + 1;
              }
              iVar1 = piVar5[iVar3];
              if (iVar1 <= piVar5[iVar2]) break;
              piVar5[iVar3] = piVar5[iVar2];
              piVar5[iVar2] = iVar1;
              iVar3 = iVar2;
            } while (iVar2 * 2 + 1 < iVar13);
          }
          iVar13 = iVar13 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_1424b221a:
      plVar7 = plVar7 + -3;
    } while (&local_328 <= plVar7);
  }
  return;
code_r0x0001424b2069:
  if (*piVar8 <= *piVar5) goto LAB_1424b2060;
LAB_1424b2070:
  do {
    piVar11 = piVar10;
    iVar13 = piVar11[-1];
    piVar10 = piVar11 + -1;
    if (piVar10 <= piVar8) break;
  } while (iVar13 <= *piVar8);
  if (piVar5 <= piVar10) {
    iVar2 = *piVar5;
    *piVar5 = iVar13;
    *piVar10 = iVar2;
    goto LAB_1424b2060;
  }
  iVar2 = *piVar8;
  local_338 = local_338 + -1;
  *piVar8 = iVar13;
  *piVar10 = iVar2;
  if ((longlong)((longlong)piVar10 + (-4 - (longlong)piVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar12 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar12) {
      *plVar7 = (longlong)piVar5;
      plVar7[1] = (longlong)piVar12;
      *(int *)(plVar7 + 2) = local_338;
      plVar7 = plVar7 + 3;
    }
    if (piVar10 <= piVar8 + 1) goto LAB_1424b221a;
    piVar12 = piVar11 + -2;
    piVar5 = piVar8;
  }
  else {
    if (piVar8 + 1 < piVar10) {
      *plVar7 = (longlong)piVar8;
      plVar7[1] = (longlong)(piVar11 + -2);
      *(int *)(plVar7 + 2) = local_338;
      plVar7 = plVar7 + 3;
    }
    if (piVar12 <= piVar5) goto LAB_1424b221a;
  }
  lVar9 = ((longlong)piVar12 - (longlong)piVar5 >> 2) + 1;
  piVar8 = piVar5;
  if (local_338 == 0) goto LAB_1424b211e;
  goto LAB_1424b2030;
}



// FUNCTION 1424b22b0 IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_> body=607 status=ok
// SIG undefined IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar10 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar10 = fVar10 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar10 = ::_guard_xfg_dispatch_icall_nop(fVar10);
    local_318 = (undefined4)(longlong)(fVar10 + fVar10);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar5 = &local_328;
    do {
      piVar4 = (int *)*plVar5;
      piVar8 = (int *)plVar5[1];
      lVar1 = plVar5[2];
      local_338._0_4_ = (int)lVar1;
      lVar3 = ((longlong)piVar8 - (longlong)piVar4 >> 3) + 1;
      piVar9 = piVar4;
      if ((int)local_338 != 0) {
LAB_1424b2370:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          piVar4 = piVar9 + (lVar3 >> 1) * 2;
          if (piVar4 != piVar9) {
            uVar2 = *(undefined8 *)piVar4;
            *(undefined8 *)piVar4 = *(undefined8 *)piVar9;
            *(undefined8 *)piVar9 = uVar2;
          }
          piVar6 = piVar8 + 2;
          piVar4 = piVar9;
LAB_1424b23a7:
          piVar4 = piVar4 + 2;
          if (piVar4 <= piVar8) goto code_r0x0001424b23b0;
          goto LAB_1424b23b7;
        }
        for (; piVar6 = piVar9, piVar4 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -2) {
          while (piVar7 = piVar6, piVar4 = piVar4 + 2, piVar4 <= piVar8) {
            piVar6 = piVar4;
            if (*piVar4 <= *piVar7) {
              piVar6 = piVar7;
            }
          }
          if (piVar7 != piVar8) {
            uVar2 = *(undefined8 *)piVar7;
            *(undefined8 *)piVar7 = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = uVar2;
          }
        }
        goto LAB_1424b2488;
      }
LAB_1424b2479:
      local_338 = lVar1;
      HeapSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
                (piVar4,lVar3,param_3,param_4);
LAB_1424b2488:
      plVar5 = plVar5 + -3;
    } while (&local_328 <= plVar5);
  }
  return;
code_r0x0001424b23b0:
  if (*piVar4 <= *piVar9) goto LAB_1424b23a7;
LAB_1424b23b7:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -2;
    if (piVar6 <= piVar9) break;
  } while (*piVar9 <= *piVar6);
  if (piVar4 <= piVar6) {
    if (piVar4 != piVar6) {
      uVar2 = *(undefined8 *)piVar4;
      *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
      *(undefined8 *)piVar6 = uVar2;
    }
    goto LAB_1424b23a7;
  }
  if (piVar9 != piVar6) {
    uVar2 = *(undefined8 *)piVar9;
    *(undefined8 *)piVar9 = *(undefined8 *)piVar6;
    *(undefined8 *)piVar6 = uVar2;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)piVar6 + (-8 - (longlong)piVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffff8U)) {
    if (piVar4 < piVar8) {
      *plVar5 = (longlong)piVar4;
      plVar5[1] = (longlong)piVar8;
      *(int *)(plVar5 + 2) = (int)local_338;
      plVar5 = plVar5 + 3;
    }
    if (piVar6 <= piVar9 + 2) goto LAB_1424b2488;
    piVar8 = piVar7 + -4;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 2 < piVar6) {
      *plVar5 = (longlong)piVar9;
      plVar5[1] = (longlong)(piVar7 + -4);
      *(int *)(plVar5 + 2) = (int)local_338;
      plVar5 = plVar5 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_1424b2488;
  }
  lVar3 = ((longlong)piVar8 - (longlong)piVar4 >> 3) + 1;
  piVar9 = piVar4;
  if ((int)local_338 == 0) goto LAB_1424b2479;
  goto LAB_1424b2370;
}



// FUNCTION 1424b2510 FUN_1424b2510 body=617 status=ok
// SIG undefined FUN_1424b2510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424b2510(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  float *pfVar4;
  longlong *plVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar10 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar10 = fVar10 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
    local_318 = (undefined4)(longlong)(fVar10 + fVar10);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar5 = &local_328;
    do {
      pfVar4 = (float *)*plVar5;
      pfVar8 = (float *)plVar5[1];
      lVar1 = plVar5[2];
      local_338._0_4_ = (int)lVar1;
      lVar3 = ((longlong)pfVar8 - (longlong)pfVar4 >> 3) + 1;
      pfVar9 = pfVar4;
      if ((int)local_338 != 0) {
LAB_1424b25d0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          pfVar4 = pfVar9 + (lVar3 >> 1) * 2;
          if (pfVar4 != pfVar9) {
            uVar2 = *(undefined8 *)pfVar4;
            *(undefined8 *)pfVar4 = *(undefined8 *)pfVar9;
            *(undefined8 *)pfVar9 = uVar2;
          }
          pfVar6 = pfVar8 + 2;
          pfVar4 = pfVar9;
LAB_1424b2607:
          pfVar4 = pfVar4 + 2;
          if (pfVar4 <= pfVar8) goto code_r0x0001424b2610;
          goto LAB_1424b2620;
        }
        for (; pfVar6 = pfVar9, pfVar4 = pfVar9, pfVar9 < pfVar8; pfVar8 = pfVar8 + -2) {
          while (pfVar4 = pfVar4 + 2, pfVar4 <= pfVar8) {
            if (*pfVar6 < *pfVar4) {
              pfVar6 = pfVar4;
            }
          }
          if (pfVar6 != pfVar8) {
            uVar2 = *(undefined8 *)pfVar6;
            *(undefined8 *)pfVar6 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = uVar2;
          }
        }
        goto LAB_1424b26f4;
      }
LAB_1424b26e5:
      local_338 = lVar1;
      FUN_1424b1e10(pfVar4,lVar3,param_3,param_4);
LAB_1424b26f4:
      plVar5 = plVar5 + -3;
    } while (&local_328 <= plVar5);
  }
  return;
code_r0x0001424b2610:
  if (*pfVar4 < *pfVar9 || *pfVar4 == *pfVar9) goto LAB_1424b2607;
LAB_1424b2620:
  do {
    pfVar7 = pfVar6;
    pfVar6 = pfVar7 + -2;
    if (pfVar6 <= pfVar9) break;
  } while (*pfVar9 < *pfVar6 || *pfVar9 == *pfVar6);
  if (pfVar4 <= pfVar6) {
    if (pfVar4 != pfVar6) {
      uVar2 = *(undefined8 *)pfVar4;
      *(undefined8 *)pfVar4 = *(undefined8 *)pfVar6;
      *(undefined8 *)pfVar6 = uVar2;
    }
    goto LAB_1424b2607;
  }
  if (pfVar9 != pfVar6) {
    uVar2 = *(undefined8 *)pfVar9;
    *(undefined8 *)pfVar9 = *(undefined8 *)pfVar6;
    *(undefined8 *)pfVar6 = uVar2;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)pfVar6 + (-8 - (longlong)pfVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pfVar8 - (longlong)pfVar4 & 0xfffffffffffffff8U)) {
    if (pfVar4 < pfVar8) {
      *plVar5 = (longlong)pfVar4;
      plVar5[1] = (longlong)pfVar8;
      *(int *)(plVar5 + 2) = (int)local_338;
      plVar5 = plVar5 + 3;
    }
    if (pfVar6 <= pfVar9 + 2) goto LAB_1424b26f4;
    pfVar8 = pfVar7 + -4;
    pfVar4 = pfVar9;
  }
  else {
    if (pfVar9 + 2 < pfVar6) {
      *plVar5 = (longlong)pfVar9;
      plVar5[1] = (longlong)(pfVar7 + -4);
      *(int *)(plVar5 + 2) = (int)local_338;
      plVar5 = plVar5 + 3;
    }
    if (pfVar8 <= pfVar4) goto LAB_1424b26f4;
  }
  lVar3 = ((longlong)pfVar8 - (longlong)pfVar4 >> 3) + 1;
  pfVar9 = pfVar4;
  if ((int)local_338 == 0) goto LAB_1424b26e5;
  goto LAB_1424b25d0;
}



// FUNCTION 1424b2780 Traverse<1> body=1085 status=ok
// SIG undefined Traverse<1>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FHierarchicalStaticMeshSceneProxy::Traverse<1>
               (undefined8 param_1,char *param_2,int param_3,int param_4,int param_5,char param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  longlong *plVar10;
  int *piVar11;
  float *pfVar12;
  longlong lVar13;
  char cVar14;
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
  int local_res20 [2];
  
  pfVar12 = (float *)((longlong)param_3 * 0x40 + **(longlong **)(param_2 + 0x290));
  if (param_6 == '\0') {
    fVar15 = pfVar12[4];
    pfVar9 = *(float **)(param_2 + 0x250);
    if (*(float **)(param_2 + 0x250) == (float *)0x0) {
      pfVar9 = (float *)(param_2 + 0x1d0);
    }
    fVar22 = (fVar15 - *pfVar12) * 0.5;
    fVar23 = (pfVar12[5] - pfVar12[1]) * 0.5;
    fVar24 = (pfVar12[6] - pfVar12[2]) * 0.5;
    fVar15 = (fVar15 + *pfVar12) * 0.5;
    fVar16 = (pfVar12[5] + pfVar12[1]) * 0.5;
    fVar17 = (pfVar12[6] + pfVar12[2]) * 0.5;
    fVar18 = (fVar16 * pfVar9[4] + fVar15 * *pfVar9 + fVar17 * pfVar9[8]) - pfVar9[0xc];
    fVar19 = (fVar16 * pfVar9[5] + fVar15 * pfVar9[1] + fVar17 * pfVar9[9]) - pfVar9[0xd];
    fVar20 = (fVar16 * pfVar9[6] + fVar15 * pfVar9[2] + fVar17 * pfVar9[10]) - pfVar9[0xe];
    fVar21 = (fVar16 * pfVar9[7] + fVar15 * pfVar9[3] + fVar17 * pfVar9[0xb]) - pfVar9[0xf];
    fVar15 = fVar23 * (float)((uint)pfVar9[4] & _DAT_146af7640) +
             fVar22 * (float)((uint)*pfVar9 & _DAT_146af7640) +
             fVar24 * (float)((uint)pfVar9[8] & _DAT_146af7640);
    fVar16 = fVar23 * (float)((uint)pfVar9[5] & uRam0000000146af7644) +
             fVar22 * (float)((uint)pfVar9[1] & uRam0000000146af7644) +
             fVar24 * (float)((uint)pfVar9[9] & uRam0000000146af7644);
    fVar17 = fVar23 * (float)((uint)pfVar9[6] & uRam0000000146af7648) +
             fVar22 * (float)((uint)pfVar9[2] & uRam0000000146af7648) +
             fVar24 * (float)((uint)pfVar9[10] & uRam0000000146af7648);
    fVar22 = fVar23 * (float)((uint)pfVar9[7] & uRam0000000146af764c) +
             fVar22 * (float)((uint)pfVar9[3] & uRam0000000146af764c) +
             fVar24 * (float)((uint)pfVar9[0xb] & uRam0000000146af764c);
    auVar2._4_4_ = -(uint)(0.0 - fVar16 < fVar19);
    auVar2._0_4_ = -(uint)(0.0 - fVar15 < fVar18);
    auVar2._8_4_ = -(uint)(0.0 - fVar17 < fVar20);
    auVar2._12_4_ = -(uint)(0.0 - fVar22 < fVar21);
    iVar6 = movmskps((int)(param_2 + 0x1d0),auVar2);
    param_6 = iVar6 == 0;
    auVar3._4_4_ = -(uint)(fVar16 < fVar19);
    auVar3._0_4_ = -(uint)(fVar15 < fVar18);
    auVar3._8_4_ = -(uint)(fVar17 < fVar20);
    auVar3._12_4_ = -(uint)(fVar22 < fVar21);
    iVar6 = movmskps(iVar6,auVar3);
    if (iVar6 != 0) {
      return;
    }
  }
  cVar14 = param_6;
  local_res20[0] = param_4;
  if ((param_4 != param_5) &&
     (CalcLOD(local_res20,&param_5,pfVar12,pfVar12 + 4,param_2 + 0x2a0,param_2 + 0x2ac,
              param_2 + 0x2dc,param_2 + 700,0x3f800000), *(int *)(param_2 + 0x2b8) <= local_res20[0]
     )) {
    return;
  }
  iVar7 = param_5;
  iVar1 = local_res20[0];
  iVar6 = *(int *)(param_2 + 0x2fc);
  if (((iVar6 <= param_3) && (param_3 <= *(int *)(param_2 + 0x300))) &&
     (*(char *)((longlong)((*(int *)(param_2 + 0x310) - iVar6) + param_3) +
               **(longlong **)(param_2 + 0x308)) != '\0')) {
    return;
  }
  fVar15 = pfVar12[3];
  if ((int)fVar15 < 0) {
LAB_1424b29b9:
    bVar4 = true;
  }
  else {
    if (((int)pfVar12[9] - (int)pfVar12[8]) + 1 <
        *(int *)(param_2 + (longlong)local_res20[0] * 4 + 0x270)) {
      cVar5 = CanGroup(pfVar12,pfVar12 + 4,param_2 + 0x2a0,param_2 + 0x2ac,
                       *(undefined4 *)(param_2 + (longlong)*(int *)(param_2 + 0x2b8) * 4 + 0x2b8));
      iVar6 = *(int *)(param_2 + 0x2fc);
      if (cVar5 != '\0') goto LAB_1424b29b9;
    }
    bVar4 = false;
  }
  if ((((cVar14 != '\0') && (iVar7 <= iVar1)) && (iVar6 <= param_3)) || (bVar4)) {
    fVar15 = pfVar12[9];
    iVar6 = *(int *)(param_2 + 0x2b8) + -1;
    if (iVar7 <= *(int *)(param_2 + 0x2b8) + -1) {
      iVar6 = iVar7;
    }
    fVar16 = pfVar12[8];
    if (*param_2 != '\0') {
      iVar7 = iVar1;
      if (param_2[2] != '\0') {
        iVar7 = iVar6;
      }
      if (iVar7 < 8) {
        lVar8 = (longlong)iVar7;
        iVar7 = *(int *)(param_2 + lVar8 * 0x10 + 0x90);
        lVar13 = (longlong)iVar7;
        if ((iVar7 == 0) ||
           ((float)(*(int *)(*(longlong *)(param_2 + lVar8 * 0x10 + 0x88) + -4 + lVar13 * 4) + 1) !=
            fVar16)) {
          *(int *)(param_2 + lVar8 * 0x10 + 0x90) = iVar7 + 1;
          if (*(int *)(param_2 + lVar8 * 0x10 + 0x94) < iVar7 + 1) {
            TArray<int,TMemStackAllocator<0>_>::ResizeGrow(param_2 + lVar8 * 0x10 + 0x88,iVar7);
          }
          *(float *)(*(longlong *)(param_2 + lVar8 * 0x10 + 0x88) + lVar13 * 4) = fVar16;
          iVar7 = *(int *)(param_2 + lVar8 * 0x10 + 0x90);
          *(int *)(param_2 + lVar8 * 0x10 + 0x90) = iVar7 + 1;
          if (*(int *)(param_2 + lVar8 * 0x10 + 0x94) < iVar7 + 1) {
            TArray<int,TMemStackAllocator<0>_>::ResizeGrow(param_2 + lVar8 * 0x10 + 0x88,iVar7);
          }
          *(float *)(*(longlong *)(param_2 + lVar8 * 0x10 + 0x88) + (longlong)iVar7 * 4) = fVar15;
        }
        else {
          *(float *)(*(longlong *)(param_2 + lVar8 * 0x10 + 0x88) + -4 + lVar13 * 4) = fVar15;
        }
        *(int *)(param_2 + lVar8 * 4 + 0x108) =
             *(int *)(param_2 + lVar8 * 4 + 0x108) + ((int)fVar15 - (int)fVar16) + 1;
      }
    }
    if (param_2[1] != '\0') {
      lVar8 = (longlong)iVar1;
      if (lVar8 <= iVar6) {
        plVar10 = (longlong *)(param_2 + lVar8 * 0x10 + 8);
        piVar11 = (int *)(param_2 + lVar8 * 4 + 0x128);
        do {
          if (lVar8 < 8) {
            *piVar11 = *piVar11 + ((int)fVar15 - (int)fVar16) + 1;
            iVar1 = (int)plVar10[1];
            lVar13 = (longlong)iVar1;
            if ((iVar1 == 0) || ((float)(*(int *)(*plVar10 + -4 + lVar13 * 4) + 1) != fVar16)) {
              *(int *)(plVar10 + 1) = iVar1 + 1;
              if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
                TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar10,iVar1);
              }
              *(float *)(*plVar10 + lVar13 * 4) = fVar16;
              iVar1 = (int)plVar10[1];
              *(int *)(plVar10 + 1) = iVar1 + 1;
              if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
                TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar10,iVar1);
              }
              *(float *)(*plVar10 + (longlong)iVar1 * 4) = fVar15;
            }
            else {
              *(float *)(*plVar10 + -4 + lVar13 * 4) = fVar15;
            }
          }
          lVar8 = lVar8 + 1;
          piVar11 = piVar11 + 1;
          plVar10 = plVar10 + 2;
        } while (lVar8 <= iVar6);
      }
    }
  }
  else if ((int)fVar15 <= (int)pfVar12[7]) {
    do {
      Traverse<1>(param_1,param_2,fVar15,iVar1,iVar7,cVar14);
      fVar15 = (float)((int)fVar15 + 1);
      cVar14 = param_6;
    } while ((int)fVar15 <= (int)pfVar12[7]);
  }
  return;
}



// FUNCTION 1424b2bc0 FUN_1424b2bc0 body=1084 status=ok
// SIG undefined FUN_1424b2bc0(void)

void FUN_1424b2bc0(undefined8 param_1,char *param_2,int param_3,int param_4,int param_5,char param_6
                  )

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  longlong *plVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  int local_res20 [2];
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  
  pfVar10 = (float *)((longlong)param_3 * 0x40 + **(longlong **)(param_2 + 0x290));
  local_res20[0] = param_4;
  if (param_6 == '\0') {
    local_78 = (pfVar10[4] + *pfVar10) * 0.5;
    local_88 = (pfVar10[4] - *pfVar10) * 0.5;
    local_70 = (pfVar10[6] + pfVar10[2]) * 0.5;
    local_84 = (pfVar10[5] - pfVar10[1]) * 0.5;
    local_74 = (pfVar10[5] + pfVar10[1]) * 0.5;
    local_80 = (pfVar10[6] - pfVar10[2]) * 0.5;
    cVar3 = FConvexVolume::IntersectBox(param_2 + 0x150,&local_78,&local_88,&param_6);
    if (cVar3 == '\0') {
      return;
    }
  }
  cVar3 = param_6;
  if ((param_4 != param_5) &&
     (CalcLOD(local_res20,&param_5,pfVar10,pfVar10 + 4,param_2 + 0x2a0,param_2 + 0x2ac,
              param_2 + 0x2dc,param_2 + 700,0x3f800000), param_4 = local_res20[0],
     *(int *)(param_2 + 0x2b8) <= local_res20[0])) {
    return;
  }
  iVar5 = param_5;
  iVar11 = *(int *)(param_2 + 0x2fc);
  if (((iVar11 <= param_3) && (param_3 <= *(int *)(param_2 + 0x300))) &&
     (*(char *)((longlong)((*(int *)(param_2 + 0x310) - iVar11) + param_3) +
               **(longlong **)(param_2 + 0x308)) != '\0')) {
    return;
  }
  fVar7 = pfVar10[3];
  if ((int)fVar7 < 0) {
LAB_1424b2df7:
    bVar2 = true;
  }
  else {
    if (((int)pfVar10[9] - (int)pfVar10[8]) + 1 < *(int *)(param_2 + (longlong)param_4 * 4 + 0x270))
    {
      cVar4 = CanGroup(pfVar10,pfVar10 + 4,param_2 + 0x2a0,param_2 + 0x2ac,
                       *(undefined4 *)(param_2 + (longlong)*(int *)(param_2 + 0x2b8) * 4 + 0x2b8));
      iVar11 = *(int *)(param_2 + 0x2fc);
      if (cVar4 != '\0') goto LAB_1424b2df7;
    }
    bVar2 = false;
  }
  if ((((cVar3 != '\0') && (iVar5 <= param_4)) && (iVar11 <= param_3)) || (bVar2)) {
    fVar7 = pfVar10[8];
    iVar11 = *(int *)(param_2 + 0x2b8) + -1;
    if (iVar5 <= *(int *)(param_2 + 0x2b8) + -1) {
      iVar11 = iVar5;
    }
    fVar1 = pfVar10[9];
    if (*param_2 != '\0') {
      iVar5 = param_4;
      if (param_2[2] != '\0') {
        iVar5 = iVar11;
      }
      if (iVar5 < 8) {
        lVar6 = (longlong)iVar5;
        iVar5 = *(int *)(param_2 + lVar6 * 0x10 + 0x90);
        lVar12 = (longlong)iVar5;
        if ((iVar5 == 0) ||
           ((float)(*(int *)(*(longlong *)(param_2 + lVar6 * 0x10 + 0x88) + -4 + lVar12 * 4) + 1) !=
            fVar7)) {
          *(int *)(param_2 + lVar6 * 0x10 + 0x90) = iVar5 + 1;
          if (*(int *)(param_2 + lVar6 * 0x10 + 0x94) < iVar5 + 1) {
            TArray<int,TMemStackAllocator<0>_>::ResizeGrow(param_2 + lVar6 * 0x10 + 0x88,iVar5);
          }
          *(float *)(*(longlong *)(param_2 + lVar6 * 0x10 + 0x88) + lVar12 * 4) = fVar7;
          iVar5 = *(int *)(param_2 + lVar6 * 0x10 + 0x90);
          *(int *)(param_2 + lVar6 * 0x10 + 0x90) = iVar5 + 1;
          if (*(int *)(param_2 + lVar6 * 0x10 + 0x94) < iVar5 + 1) {
            TArray<int,TMemStackAllocator<0>_>::ResizeGrow(param_2 + lVar6 * 0x10 + 0x88,iVar5);
          }
          *(float *)(*(longlong *)(param_2 + lVar6 * 0x10 + 0x88) + (longlong)iVar5 * 4) = fVar1;
        }
        else {
          *(float *)(*(longlong *)(param_2 + lVar6 * 0x10 + 0x88) + -4 + lVar12 * 4) = fVar1;
        }
        *(int *)(param_2 + lVar6 * 4 + 0x108) =
             *(int *)(param_2 + lVar6 * 4 + 0x108) + ((int)fVar1 - (int)fVar7) + 1;
      }
    }
    if (param_2[1] != '\0') {
      lVar6 = (longlong)param_4;
      if (lVar6 <= iVar11) {
        plVar8 = (longlong *)(param_2 + lVar6 * 0x10 + 8);
        piVar9 = (int *)(param_2 + lVar6 * 4 + 0x128);
        do {
          if (lVar6 < 8) {
            *piVar9 = *piVar9 + ((int)fVar1 - (int)fVar7) + 1;
            iVar5 = (int)plVar8[1];
            lVar12 = (longlong)iVar5;
            if ((iVar5 == 0) || ((float)(*(int *)(*plVar8 + -4 + lVar12 * 4) + 1) != fVar7)) {
              *(int *)(plVar8 + 1) = iVar5 + 1;
              if (*(int *)((longlong)plVar8 + 0xc) < iVar5 + 1) {
                TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar8,iVar5);
              }
              *(float *)(*plVar8 + lVar12 * 4) = fVar7;
              iVar5 = (int)plVar8[1];
              *(int *)(plVar8 + 1) = iVar5 + 1;
              if (*(int *)((longlong)plVar8 + 0xc) < iVar5 + 1) {
                TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar8,iVar5);
              }
              *(float *)(*plVar8 + (longlong)iVar5 * 4) = fVar1;
            }
            else {
              *(float *)(*plVar8 + -4 + lVar12 * 4) = fVar1;
            }
          }
          lVar6 = lVar6 + 1;
          piVar9 = piVar9 + 1;
          plVar8 = plVar8 + 2;
        } while (lVar6 <= iVar11);
      }
    }
  }
  else if ((int)fVar7 <= (int)pfVar10[7]) {
    do {
      FUN_1424b2bc0(param_1,param_2,fVar7,param_4,iVar5,cVar3);
      fVar7 = (float)((int)fVar7 + 1);
      cVar3 = param_6;
    } while ((int)fVar7 <= (int)pfVar10[7]);
  }
  return;
}



// FUNCTION 1424b3000 FUN_1424b3000 body=122 status=ok
// SIG undefined FUN_1424b3000(void)

undefined8 FUN_1424b3000(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0xf8);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1436ea4c0(lVar2,0);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1424b3080 FUN_1424b3080 body=75 status=ok
// SIG undefined FUN_1424b3080(void)

undefined8 FUN_1424b3080(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_14370c030();
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FUN_14370c150();
  }
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_14370c150(lVar1);
  }
  return 0;
}



// FUNCTION 1424b30d0 TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double> body=256 status=ok
// SIG undefined TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double>(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double>
::
TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double>
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  plVar4 = (longlong *)param_4[1];
  uVar8 = *param_4;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_1450cece0;
  FWeakObjectPtr::operator=(param_1 + 1);
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar8;
  param_1[5] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  param_1[6] = param_5;
  uVar8 = FDelegateHandle::GenerateNewID();
  param_1[7] = uVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  *param_1 = &PTR_FUN_1450ced28;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 1424b31d0 FUN_1424b31d0 body=45 status=ok
// SIG undefined FUN_1424b31d0(void)

undefined8 * FUN_1424b31d0(undefined8 *param_1)

{
  FUN_1424b4080();
  *param_1 = &PTR_FUN_1450cd868;
  FUN_1424b3ed0(param_1 + 0xd7);
  return param_1;
}



// FUNCTION 1424b3200 FUN_1424b3200 body=146 status=ok
// SIG undefined FUN_1424b3200(void)

longlong * FUN_1424b3200(longlong *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar2 = AUGCompanionAIController::GetPrivateStaticClass();
  FUN_1417a5560(uVar2,param_1,param_3,param_2,param_4);
  iVar1 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 < (int)param_1[1]) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar1 * 8) != 0) {
        return param_1;
      }
      iVar1 = iVar1 + 1;
      *(int *)(param_1 + 2) = iVar1;
    } while (iVar1 < (int)param_1[1]);
  }
  return param_1;
}



// FUNCTION 1424b32a0 FUN_1424b32a0 body=926 status=ok
// SIG undefined FUN_1424b32a0(void)

undefined8 * FUN_1424b32a0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450cd3f8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x16] = 0;
  param_1[0x17] = 0;
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
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
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
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
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
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  return param_1;
}



// FUNCTION 1424b3640 FBaseGPUSkinCacheCS body=747 status=ok
// SIG undefined FBaseGPUSkinCacheCS(void)

undefined8 * FBaseGPUSkinCacheCS::FBaseGPUSkinCacheCS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__1450ccaf0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xde) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"NumVertices",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xd2,*(undefined8 *)(param_2 + 0x18),L"SkinCacheStart",0);
  FShaderResourceParameter::Bind(param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"BoneMatrices",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"TangentInputBuffer",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"PositionInputBuffer",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18),L"InputStreamStart",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"InputWeightStart",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfa,*(undefined8 *)(param_2 + 0x18),L"InputWeightStride",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"InputWeightStream",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"PositionBufferUAV",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"TangentBufferUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"MorphBuffer",0);
  FShaderParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"MorphBufferOffset",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),L"SkinCacheDebug",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x10e,*(undefined8 *)(param_2 + 0x18),L"ClothBuffer",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x112,*(undefined8 *)(param_2 + 0x18),
             L"ClothPositionsAndNormalsBuffer",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x116,*(undefined8 *)(param_2 + 0x18),L"ClothBlendWeight",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"ClothLocalToWorld",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x122,*(undefined8 *)(param_2 + 0x18),L"ClothWorldToLocal",0);
  return param_1;
}



// FUNCTION 1424b3930 FBaseGPUSkinCacheCS body=138 status=ok
// SIG undefined FBaseGPUSkinCacheCS(void)

undefined8 * FBaseGPUSkinCacheCS::FBaseGPUSkinCacheCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__1450ccaf0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xde) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 1424b39c0 FBaseRecomputeTangents body=563 status=ok
// SIG undefined FBaseRecomputeTangents(void)

undefined8 * FBaseRecomputeTangents::FBaseRecomputeTangents(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__1450ccdf8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  FShaderResourceParameter::Bind
            (param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"IntermediateAccumBufferUAV",0);
  FShaderParameter::Bind((longlong)param_1 + 0xc4,*(undefined8 *)(param_2 + 0x18),L"NumTriangles",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xca,*(undefined8 *)(param_2 + 0x18),L"GPUPositionCacheBuffer",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xce,*(undefined8 *)(param_2 + 0x18),L"GPUTangentCacheBuffer",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xd2,*(undefined8 *)(param_2 + 0x18),L"SkinCacheStart",0);
  FShaderResourceParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"IndexBuffer",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),L"IndexBufferOffset",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xe2,*(undefined8 *)(param_2 + 0x18),L"InputStreamStart",0);
  FShaderParameter::Bind(param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"NumTexCoords",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18),L"SelectedTexCoord",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"TangentInputBuffer",0);
  FShaderResourceParameter::Bind(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"UVsInputBuffer",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),L"DuplicatedIndices",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"DuplicatedIndicesIndices",0);
  return param_1;
}



// FUNCTION 1424b3c00 FBaseRecomputeTangents body=97 status=ok
// SIG undefined FBaseRecomputeTangents(void)

undefined8 * FBaseRecomputeTangents::FBaseRecomputeTangents(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__1450ccdf8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1424b3c70 FUN_1424b3c70 body=191 status=ok
// SIG undefined FUN_1424b3c70(void)

undefined4 *
FUN_1424b3c70(undefined4 *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = (int)param_2[1];
  uVar4 = param_3[1];
  *(undefined8 *)(param_1 + 2) = *param_3;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 6) = param_3[2];
  param_1[8] = *(undefined4 *)(param_3 + 3);
  param_1[0xc] = 0;
  param_1[0xf] = param_5;
  param_1[0xe] = param_6;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(longlong *)(param_1 + 0x18) = *param_2;
  *param_2 = 0;
  param_1[0x1a] = (int)param_2[1];
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  param_1[0x1c] = *param_4;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  param_1[0x20] = param_4[4];
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1424b3d30 FUN_1424b3d30 body=300 status=ok
// SIG undefined FUN_1424b3d30(void)

int * FUN_1424b3d30(int *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 1;
  if (0 < param_2) {
    iVar3 = param_2;
  }
  *param_1 = iVar3;
  lVar1 = DAT_146af9e68;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar6 = 4;
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 == DAT_1468c21c0) goto LAB_1424b3d89;
    lVar5 = 4;
  }
  else {
LAB_1424b3d89:
    lVar5 = 0;
  }
  param_1[1] = *(int *)(lVar5 + lVar1);
  lVar1 = DAT_146af9e50;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 == DAT_1468c21c0) goto LAB_1424b3dc8;
    lVar5 = 4;
  }
  else {
LAB_1424b3dc8:
    lVar5 = 0;
  }
  param_1[2] = *(int *)(lVar5 + lVar1);
  lVar1 = DAT_146af9e38;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 == DAT_1468c21c0) goto LAB_1424b3e07;
    lVar5 = 4;
  }
  else {
LAB_1424b3e07:
    lVar5 = 0;
  }
  param_1[3] = *(int *)(lVar5 + lVar1);
  lVar1 = DAT_146af9ca8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) goto LAB_1424b3e43;
  }
  lVar6 = 0;
LAB_1424b3e43:
  param_1[4] = *(int *)(lVar6 + lVar1);
  return param_1;
}



// FUNCTION 1424b3e60 FUN_1424b3e60 body=102 status=ok
// SIG undefined FUN_1424b3e60(void)

longlong FUN_1424b3e60(longlong param_1)

{
  FUN_1424b3ed0();
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  return param_1;
}



// FUNCTION 1424b3ed0 FUN_1424b3ed0 body=176 status=ok
// SIG undefined FUN_1424b3ed0(void)

undefined8 * FUN_1424b3ed0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 1424b3f80 FFoliageRenderInstanceParams body=251 status=ok
// SIG undefined FFoliageRenderInstanceParams(void)

undefined1 *
FFoliageRenderInstanceParams::FFoliageRenderInstanceParams
          (undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  return param_1;
}



// FUNCTION 1424b4080 FUN_1424b4080 body=168 status=ok
// SIG undefined FUN_1424b4080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424b4080(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x67) = 1;
  *(undefined1 *)((longlong)param_1 + 0x33a) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450cd700;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xd1] = 0;
  _DAT_146af7630 = DAT_146532b9c;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = param_3;
  return param_1;
}



// FUNCTION 1424b4130 FGPUSkinCache body=54 status=ok
// SIG undefined FGPUSkinCache(void)

undefined8 * FGPUSkinCache::FGPUSkinCache(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1424b4170 FUN_1424b4170 body=541 status=ok
// SIG undefined FUN_1424b4170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1424b4170(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  
  *param_1 = param_4;
  uVar10 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar7 = (**(code **)(*param_3 + 0x58))(param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  lVar8 = FSkeletalMeshObject::GetRenderSections(param_3);
  iVar1 = *(int *)(param_1 + 5);
  iVar11 = *(int *)(lVar8 + 8);
  iVar9 = iVar1 + iVar11;
  *(int *)(param_1 + 5) = iVar9;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar9) {
    FUN_1407d8cb0(param_1 + 4);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x140 + param_1[4]);
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
    puVar3[0xb] = 1;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    uVar2 = _DAT_1464aa7d8;
    puVar3[0x12] = _DAT_1464aa7d0;
    puVar3[0x13] = uVar2;
    uVar2 = _DAT_1464aa7e8;
    puVar3[0x14] = _DAT_1464aa7e0;
    puVar3[0x15] = uVar2;
    uVar2 = CONCAT44(uRam00000001464aa7fc,DAT_1464aa7f8);
    puVar3[0x16] = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
    puVar3[0x17] = uVar2;
    uVar2 = uRam00000001464aa808;
    puVar3[0x18] = _DAT_1464aa800;
    puVar3[0x19] = uVar2;
    uVar2 = _DAT_1464aa7d8;
    puVar3[0x1a] = _DAT_1464aa7d0;
    puVar3[0x1b] = uVar2;
    uVar2 = _DAT_1464aa7e8;
    puVar3[0x1c] = _DAT_1464aa7e0;
    puVar3[0x1d] = uVar2;
    uVar5 = uRam00000001464aa7fc;
    uVar4 = DAT_1464aa7f8;
    uVar7 = DAT_1464aa7f4;
    *(undefined4 *)(puVar3 + 0x1e) = DAT_1464aa7f0;
    *(undefined4 *)((longlong)puVar3 + 0xf4) = uVar7;
    *(undefined4 *)(puVar3 + 0x1f) = uVar4;
    *(undefined4 *)((longlong)puVar3 + 0xfc) = uVar5;
    uVar6 = uRam00000001464aa808;
    uVar2 = _DAT_1464aa800;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x20] = uVar2;
    puVar3[0x21] = uVar6;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3 = puVar3 + 0x28;
  }
  iVar1 = *(int *)(lVar8 + 8);
  iVar11 = *(int *)(param_1 + 3);
  iVar9 = iVar11 + iVar1;
  *(int *)(param_1 + 3) = iVar9;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar9) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar11 * 0x10 + param_1[2]),0,(longlong)iVar1 << 4);
  uVar13 = uVar10;
  if (0 < *(int *)(lVar8 + 8)) {
    do {
      *(undefined8 **)(uVar10 + param_1[2]) = param_1;
      *(int *)(param_1[2] + -8 + uVar10 + 0x10) = (int)uVar13;
      uVar12 = (int)uVar13 + 1;
      uVar10 = uVar10 + 0x10;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(lVar8 + 8));
  }
  lVar8 = FUN_1427dcb60(param_1[6],*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar8 + 0x58);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,*(undefined8 *)(lVar8 + 0x38));
  return param_1;
}



// FUNCTION 1424b4390 FHDRLoadHelper body=377 status=ok
// SIG undefined FHDRLoadHelper(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FHDRLoadHelper::FHDRLoadHelper(undefined8 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 auStack_148 [32];
  byte local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  *param_1 = 0;
  param_1[1] = 0;
  if (10 < param_3) {
    uVar6 = 0;
    pbVar9 = param_2;
    do {
      pbVar8 = pbVar9;
      bVar1 = *pbVar8;
      if ((bVar1 < 0xe) && ((0x2401U >> (bVar1 & 0x1f) & 1) != 0)) break;
      pbVar8[(longlong)(local_128 + -(longlong)param_2)] = bVar1;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      pbVar9 = pbVar8 + 1;
    } while (uVar5 < 0xff);
    pbVar8 = pbVar8 + 1;
    local_128[uVar6] = 0;
    iVar2 = ::_guard_xfg_dispatch_icall_nop((char *)local_128,"#?RADIANCE");
    if (iVar2 == 0) {
      do {
        pbVar9 = local_128;
        uVar6 = 0;
        do {
          pbVar7 = pbVar8;
          bVar1 = *pbVar7;
          if ((bVar1 < 0xe) && ((0x2401U >> (bVar1 & 0x1f) & 1) != 0)) break;
          *pbVar9 = bVar1;
          pbVar9 = pbVar9 + 1;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          pbVar8 = pbVar7 + 1;
        } while (uVar5 < 0xff);
        pbVar8 = pbVar7 + 1;
        local_128[uVar6] = 0;
        pcVar3 = ::_guard_xfg_dispatch_icall_nop((char *)local_128,"-Y ");
        pcVar4 = ::_guard_xfg_dispatch_icall_nop((char *)local_128,"+X ");
      } while ((pcVar3 == (char *)0x0) || (pcVar4 == (char *)0x0));
      pcVar4[-1] = '\0';
      iVar2 = atoi(pcVar3 + 3);
      *(int *)((longlong)param_1 + 0xc) = iVar2;
      iVar2 = atoi(pcVar4 + 3);
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = pbVar8;
    }
  }
  return param_1;
}



// FUNCTION 1424b4510 FUN_1424b4510 body=840 status=ok
// SIG undefined FUN_1424b4510(void)

undefined8 * FUN_1424b4510(undefined8 *param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_res10 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_24;
  
  puVar7 = (undefined8 *)0x0;
  local_68 = 0;
  *param_1 = &PTR_FUN_1450cdcd0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x1ffff;
  param_1[5] = 0;
  param_1[1] = &PTR_FUN_1450cdca0;
  param_1[4] = &PTR_LAB_1450cdcb8;
  param_1[6] = param_1 + 8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000020;
  *(undefined1 *)((longlong)param_1 + 0x262) = 0;
  local_60 = 0;
  TArray<wchar_t,FDefaultAllocator>::DebugGet(&local_68,0);
  MXCSR = MXCSR | 0x8000;
  FUN_142d2e650(local_res10,0,0x8000);
  uVar2 = FUN_14370d970(param_1,local_res10);
  FUN_14370cbc0(uVar2,0,0);
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x80);
  puVar6 = puVar7;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_14370e9d0(puVar4,0,0);
    *(undefined4 *)(puVar4 + 0xf) = 0;
    *puVar4 = &PTR_FUN_1450cdd50;
    FUN_14370ee10(puVar4,0x49d11cab,0);
    FUN_14370ee10(puVar4,0xf0456567,0);
    FUN_14370ee10(puVar4,0xf0456535,0);
    FUN_14370ee10(puVar4,0x28d514c1,0);
    puVar6 = puVar4;
  }
  puVar4 = DAT_146b81f68;
  if ((puVar6 != DAT_146b81f68) && (puVar4 = puVar6, DAT_146b81f68 != (undefined8 *)0x0)) {
    FUN_14370c150();
  }
  DAT_146b81f68 = puVar4;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  pvVar3 = TlsGetValue(DAT_146b8198c);
  FUN_14370d4e0(pvVar3,0);
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar3 + 0x58),0x3a0);
  puVar6 = puVar7;
  if (lVar5 != 0) {
    local_58 = 0;
    local_50 = 0x40;
    local_48 = 0;
    puVar6 = (undefined8 *)FUN_143710be0(lVar5,&local_58);
  }
  param_1[0x4a] = puVar6;
  *(undefined2 *)(param_1 + 0x4c) = 0x8100;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  }
  puVar6 = puVar7;
  puVar4 = puVar7;
  if (0 < DAT_146af9c78) {
    do {
      (**(code **)(**(longlong **)(DAT_146af9c70 + (longlong)puVar6) + 8))();
      uVar8 = (int)puVar4 + 1;
      puVar6 = puVar6 + 1;
      puVar4 = (undefined8 *)(ulonglong)uVar8;
    } while ((int)uVar8 < DAT_146af9c78);
  }
  FUN_14370db50(local_40);
  local_3c = FUN_1416a5660();
  local_24 = 0;
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar3 + 0x58),0x168);
  puVar6 = puVar7;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_14370da90(lVar5,local_40,0);
  }
  param_1[0x4b] = puVar6;
  puVar6 = puVar7;
  if (0 < DAT_146af9c78) {
    do {
      FUN_14370e260(param_1[0x4b],&LAB_1406ea9b0,*(undefined8 *)(DAT_146af9c70 + (longlong)puVar7));
      (**(code **)(*(longlong *)param_1[0x4b] + 0x40))();
      uVar8 = (int)puVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar8;
    } while ((int)uVar8 < DAT_146af9c78);
  }
  uVar2 = FUN_143703a50();
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(uVar2,local_38,4,local_2c & 0x3fffffff);
  }
  local_38 = 0;
  local_2c = 0x80000000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  return param_1;
}



// FUNCTION 1424b4860 FUN_1424b4860 body=732 status=ok
// SIG undefined FUN_1424b4860(void)

undefined8 * FUN_1424b4860(undefined8 *param_1,undefined1 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uVar8;
  
  FUN_142817110(param_1,param_3,1);
  *param_1 = &PTR_FUN_1450ce980;
  param_1[0x7c] = param_3[0xe5];
  FUN_1424b4b40(param_1 + 0x7d,param_3);
  uVar10 = 0;
  uVar12 = uVar10;
  if (0 < *(int *)(param_1 + 0x77)) {
    do {
      uVar8 = 0;
      lVar1 = *(longlong *)(uVar12 + param_1[0x76]);
      uVar9 = uVar8;
      if (0 < *(int *)(lVar1 + 0x30)) {
        do {
          puVar11 = (undefined8 *)(*(longlong *)(lVar1 + 0x28) + uVar9);
          plVar2 = (longlong *)*puVar11;
          cVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,7);
          if (cVar3 == '\0') {
            uVar6 = UMaterial::GetDefaultMaterial(0);
            *puVar11 = uVar6;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar9 = uVar9 + 0x10;
        } while ((int)uVar7 < *(int *)(lVar1 + 0x30));
      }
      uVar7 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar7;
      uVar12 = uVar12 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x77));
  }
  bVar13 = DAT_1464c9c6c == '\0';
  param_1[0x85] = *(undefined8 *)(param_3[0xe5] + 0x38);
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)((longlong)param_3 + 0x7bc);
  *(int *)((longlong)param_1 + 0x434) = (int)param_3[0xf8];
  *(undefined4 *)(param_1 + 0x87) = *(undefined4 *)((longlong)param_1 + 0x3cc);
  *(undefined2 *)((longlong)param_1 + 0x43c) = 0x101;
  puVar11 = (undefined8 *)0x0;
  if (bVar13) {
    puVar11 = param_1 + 0x7d;
  }
  param_1[0x84] = puVar11;
  *param_1 = &PTR_FUN_1450ceb20;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((longlong)param_1 + 0x444) = *(undefined4 *)((longlong)param_1 + 0x424);
  *(undefined4 *)(param_1 + 0x89) = *(undefined4 *)(param_1 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x44c) = *(undefined4 *)((longlong)param_1 + 0x42c);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)((longlong)param_1 + 0x424);
  *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(param_1 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x46c) = *(undefined4 *)((longlong)param_1 + 0x42c);
  *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(param_1 + 0x86);
  *(undefined4 *)((longlong)param_1 + 0x454) = *(undefined4 *)((longlong)param_1 + 0x434);
  *(undefined4 *)(param_1 + 0x8b) = *(undefined4 *)(param_1 + 0x87);
  *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)((longlong)param_1 + 0x43c);
  *(undefined1 *)((longlong)param_1 + 0x45d) = 0;
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(param_1 + 0x86);
  *(undefined4 *)((longlong)param_1 + 0x474) = *(undefined4 *)((longlong)param_1 + 0x434);
  *(undefined4 *)(param_1 + 0x8f) = *(undefined4 *)(param_1 + 0x87);
  *(undefined4 *)((longlong)param_1 + 0x47c) = *(undefined4 *)((longlong)param_1 + 0x43c);
  *(undefined1 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x90] = param_3[0x108];
  lVar1 = param_3[0x109];
  param_1[0x91] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x92] = param_3[0x108];
  param_1[0x93] = 0;
  iVar5 = (int)param_3[0x115];
  _Src = (void *)param_3[0x114];
  *(int *)(param_1 + 0x94) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  }
  else {
    TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(param_1 + 0x93,iVar5,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x93],_Src,(longlong)iVar5 * 0x1c);
  }
  iVar5 = (int)param_3[0x10c];
  if (iVar5 < 1) {
    iVar5 = *(int *)((longlong)param_3 + 0x864);
  }
  *(int *)(param_1 + 0x95) = iVar5;
  *(int *)((longlong)param_1 + 0x4ac) = (int)param_3[0x11f];
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa3) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0xffffffff;
  uVar4 = (**(code **)(*param_3 + 0x968))(param_3);
  *(undefined1 *)(param_1 + 0xa4) = uVar4;
  FUN_1424d36c0(param_1,param_3);
  return param_1;
}



// FUNCTION 1424b4b40 FUN_1424b4b40 body=662 status=ok
// SIG undefined FUN_1424b4b40(void)

longlong * FUN_1424b4b40(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  bool bVar17;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [24];
  
  *param_1 = param_2;
  param_1[1] = *(longlong *)(param_2 + 0x7e8);
  lVar13 = *(longlong *)(param_2 + 0x7f0);
  param_1[2] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  puVar14 = (undefined8 *)0x0;
  param_1[3] = 0;
  plVar1 = param_1 + 3;
  param_1[4] = 0;
  lVar13 = *param_1;
  lVar4 = *(longlong *)(*(longlong *)(lVar13 + 0x728) + 0x38);
  param_1[5] = lVar4;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)(param_2 + 0x7d8);
  bVar17 = DAT_1464c9c6c == '\0';
  puVar15 = puVar14;
  if (0 < *(int *)(lVar4 + 8)) {
    do {
      puVar11 = puVar14;
      if (bVar17) {
        puVar10 = (undefined8 *)operator_new(0x8d0);
        if (puVar10 != (undefined8 *)0x0) {
          FUN_1424b4de0(puVar10,(int)param_1[6]);
          *puVar10 = &PTR_FUN_1450ce910;
          puVar11 = puVar10;
        }
      }
      else {
        cVar8 = *(char *)((longlong)param_1 + 0x34);
        puVar10 = (undefined8 *)operator_new(0x8d0);
        if (cVar8 == '\0') {
          if (puVar10 != (undefined8 *)0x0) {
            puVar11 = (undefined8 *)FUN_1424b4de0(puVar10,(int)param_1[6]);
          }
        }
        else if (puVar10 != (undefined8 *)0x0) {
          FUN_1424b4de0(puVar10,(int)param_1[6]);
          *puVar10 = &PTR_FUN_1450ce8a0;
          puVar11 = puVar10;
        }
      }
      iVar3 = (int)param_1[4];
      *(int *)(param_1 + 4) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x24) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      uVar16 = (int)puVar15 + 1;
      *(undefined8 **)(*plVar1 + (longlong)iVar3 * 8) = puVar11;
      puVar15 = (undefined8 *)(ulonglong)uVar16;
    } while ((int)uVar16 < *(int *)(param_1[5] + 8));
    lVar13 = *param_1;
  }
  uVar5 = *(undefined8 *)(lVar13 + 0x728);
  if (((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))))) {
    plVar12 = (longlong *)FUN_1424c0200(local_40,0,0xff);
    uStack_50 = SUB84(param_1,0);
    uStack_4c = (undefined4)((ulonglong)param_1 >> 0x20);
    lVar13 = *plVar12;
    *(longlong **)(lVar13 + 0x10) = plVar1;
    *(undefined4 *)(lVar13 + 0x18) = uStack_50;
    *(undefined4 *)(lVar13 + 0x1c) = uStack_4c;
    *(undefined8 *)(lVar13 + 0x20) = uVar5;
    lVar13 = *plVar12;
    lVar7 = plVar12[2];
    lVar4 = plVar12[1];
    lVar6 = *(longlong *)(lVar13 + 0x30);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
      UNLOCK();
    }
    FUN_1423792d0(lVar13,lVar4,(int)lVar7,1);
    if (lVar6 != 0) {
      LOCK();
      piVar2 = (int *)(lVar6 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle(lVar6);
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
    FUN_1424fc990(plVar1,param_1,uVar5);
  }
  if ((*(longlong *)(*(longlong *)(*param_1 + 0x728) + 0xf8) != 0) &&
     (puVar15 = puVar14, 0 < *(int *)(param_1[5] + 8))) {
    do {
      plVar12 = (longlong *)FUN_14233fea0(*param_1);
      (**(code **)(*plVar12 + 0x1d0))
                (plVar12,*(undefined8 *)((longlong)puVar14 + *plVar1),
                 *(undefined8 *)(*param_1 + 0x728));
      puVar14 = puVar14 + 1;
      uVar16 = (int)puVar15 + 1;
      puVar15 = (undefined8 *)(ulonglong)uVar16;
    } while ((int)uVar16 < *(int *)(param_1[5] + 8));
  }
  return param_1;
}



// FUNCTION 1424b4de0 FUN_1424b4de0 body=474 status=ok
// SIG undefined FUN_1424b4de0(void)

undefined8 * FUN_1424b4de0(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x67) = 1;
  *(undefined1 *)((longlong)param_1 + 0x33a) = 0;
  param_1[200] = 0;
  puVar2 = param_1 + 0xfb;
  if (param_1 + 0xee == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = param_1 + 0xcb;
  }
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0xe9) = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = puVar2;
  puVar2 = param_1 + 0xec;
  *(undefined1 *)((longlong)param_1 + 0x339) = 1;
  lVar1 = 2;
  if (puVar2 <= param_1 + 0xed) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined4 *)puVar2 = 0xffffffff;
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
    }
  }
  *param_1 = &PTR_FUN_1450ce830;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x119) = 0;
  return param_1;
}



// FUNCTION 1424b4fc0 FUN_1424b4fc0 body=511 status=ok
// SIG undefined FUN_1424b4fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424b4fc0(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  lVar1 = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x7c) = param_3;
  puVar2 = param_1;
  do {
    local_a0 = &local_68;
    local_68 = 0;
    local_58 = 1;
    local_44 = 0;
    *(int *)(puVar2 + 3) = *(int *)(param_1 + 0xf) * 0xc;
    local_38 = 0;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_30 = 0;
    local_60 = 0;
    local_40 = 0;
    local_a8 = 0x209;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_88,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar2,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    local_a8 = CONCAT31(local_a8._1_3_,0xd);
    (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,local_80,&DAT_146ab6e78,*puVar2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar2 + 1,local_80);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_80);
    local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,0xd);
    local_a8 = 4;
    (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_78,&DAT_146ab6e78,*puVar2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar2 + 2,local_78);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
    puVar2 = puVar2 + 5;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    local_98 = 0;
    local_a0 = (undefined8 *)0x0;
    local_a8 = 1;
    FUN_141ac25e0(param_1 + 10,8,*(int *)(param_1 + 0xf) * 2,0x3f);
  }
  return param_1;
}



// FUNCTION 1424b51c0 FUN_1424b51c0 body=21 status=ok
// SIG undefined FUN_1424b51c0(void)

undefined8 * FUN_1424b51c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1424b51e0 FUN_1424b51e0 body=47 status=ok
// SIG undefined FUN_1424b51e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424b51e0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xbf800000;
  *param_1 = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x43800000;
  param_1[1] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 1424b5210 FUN_1424b5210 body=547 status=ok
// SIG undefined FUN_1424b5210(void)

longlong FUN_1424b5210(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BOOL BVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_143703810();
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  plVar5 = (longlong *)FUN_14370d950();
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1,"hkWorkerThreadContext",3);
  FUN_14370ce50(param_1);
  plVar5 = (longlong *)FTaskGraphInterface::Get();
  iVar1 = (**(code **)(*plVar5 + 0x10))(plVar5,0);
  puVar8 = (undefined8 *)0x0;
  if (iVar1 == 0xff) {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
    goto LAB_1424b52ba;
  }
  if (iVar1 < 4) {
LAB_1424b529f:
    uVar3 = 0;
  }
  else {
    plVar5 = (longlong *)FTaskGraphInterface::Get();
    iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
    uVar3 = 1;
    if (iVar2 + 4 <= iVar1) goto LAB_1424b529f;
  }
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | uVar3;
LAB_1424b52ba:
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    puVar6 = (undefined8 *)operator_new(0x18);
    puVar9 = puVar8;
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = 0;
      puVar6[2] = param_1;
      *puVar6 = &PTR_FUN_1450cdd48;
      FUN_1415e3190(puVar6);
      puVar9 = puVar6;
    }
    *(undefined8 **)(param_1 + 0xb0) = puVar9;
  }
  else {
    FUN_14370d4e0(param_1 + 0x78,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  TlsSetValue(DAT_146b8198c,(LPVOID)(param_1 + 0x78));
  MXCSR = MXCSR | 0x8000;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  }
  iVar1 = DAT_146af9c18;
  lVar7 = (longlong)DAT_146af9c18;
  DAT_146af9c18 = DAT_146af9c18 + 1;
  if (DAT_146af9c1c < DAT_146af9c18) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af9c10,iVar1);
  }
  *(longlong *)(DAT_146af9c10 + lVar7 * 8) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  }
  puVar9 = (undefined8 *)
           ((ulonglong)((longlong)(DAT_146af9c70 + DAT_146af9c78) + (7 - (longlong)DAT_146af9c70))
           >> 3);
  if (DAT_146af9c70 + DAT_146af9c78 < DAT_146af9c70) {
    puVar9 = puVar8;
  }
  puVar6 = DAT_146af9c70;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      (**(code **)(*(longlong *)*puVar6 + 0x18))();
      puVar8 = (undefined8 *)((longlong)puVar8 + 1);
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar9);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  return param_1;
}



// FUNCTION 1424b5440 FUN_1424b5440 body=459 status=ok
// SIG undefined FUN_1424b5440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424b5440(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_1424df150();
  *param_1 = &PTR_FUN_1450cddc8;
  param_1[5] = &PTR_LAB_1450ce7a8;
  param_1[0x5a] = &PTR_LAB_1450ce7d8;
  puVar2 = (undefined8 *)operator_new(0x10);
  puVar3 = (undefined8 *)0x0;
  puVar4 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar4 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_DestroyObject_14413b698;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar4;
    puVar3 = puVar2;
  }
  param_1[0x108] = puVar4;
  param_1[0x109] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x108,puVar4,puVar4);
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x112] = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x113) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x884) = param_1[0x112];
  *(undefined4 *)((longlong)param_1 + 0x88c) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x89c) = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  *(uint *)(param_1 + 0x116) = *(uint *)(param_1 + 0x116) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11e) = 0x1000000;
  *(undefined4 *)(param_1 + 0x11f) = 0;
  param_1[0x121] = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x122) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x8fc) = param_1[0x121];
  *(undefined4 *)((longlong)param_1 + 0x904) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x914) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0x10;
  *(undefined4 *)(param_1 + 0x11c) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x8e4) = 6;
  *(undefined4 *)(param_1 + 0x11d) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x8ec) = 0x10;
  return param_1;
}



// FUNCTION 1424b5610 FUN_1424b5610 body=107 status=ok
// SIG undefined FUN_1424b5610(void)

void FUN_1424b5610(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      FUN_141ace450(lVar1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 1424b5680 ~TArray<FGPUSkinCacheEntry::FSectionDispatchData,FDefaultAllocator> body=141 status=ok
// SIG undefined ~TArray<FGPUSkinCacheEntry::FSectionDispatchData,FDefaultAllocator>(void)

void TArray<FGPUSkinCacheEntry::FSectionDispatchData,FDefaultAllocator>::
     ~TArray<FGPUSkinCacheEntry::FSectionDispatchData,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x130;
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + -0xc0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + -200);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + -0xd0);
      lVar1 = lVar1 + 0x140;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424b5710 ~TGlobalResource<FBoneBufferPool> body=119 status=ok
// SIG undefined ~TGlobalResource<FBoneBufferPool>(void)

void TGlobalResource<FBoneBufferPool>::~TGlobalResource<FBoneBufferPool>(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450cd4e0;
  param_1[0x8a] = &PTR_LAB_1450cd4e8;
  param_1[0x8c] = &PTR_LAB_1450cd510;
  FRenderResource::ReleaseResource(param_1 + 0x8c);
  *param_1 = &PTR__scalar_deleting_destructor__1450cd470;
  param_1[0x8a] = &PTR_LAB_1450cd478;
  param_1[0x8c] = &PTR_LAB_1450cd4a0;
  TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
  ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>(param_1);
  return;
}



// FUNCTION 1424b5790 FUN_1424b5790 body=211 status=ok
// SIG undefined FUN_1424b5790(void)

void FUN_1424b5790(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    lVar1 = *plVar3;
    if (*(longlong *)(lVar1 + 0x880) != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x758);
    if (*(longlong *)(lVar1 + 0x700) != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x650);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x648);
    FUN_141edd2d0(lVar1);
    FMemory::Free(*plVar3);
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424b5870 ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> body=103 status=ok
// SIG undefined ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>(void)

void TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
     ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>
               (undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450cd400;
  param_1[0x8a] = &PTR_LAB_1450cd408;
  param_1[0x8c] = &PTR_LAB_1450cd430;
  FUN_141edd2d0();
  param_1[0x8a] = &PTR__scalar_deleting_destructor__1444d8080;
  FTickableObjectRenderThread::Unregister(param_1 + 0x8a);
  TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
  ~TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>(param_1);
  return;
}



// FUNCTION 1424b58e0 ~TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> body=235 status=ok
// SIG undefined ~TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>(void)

void TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
     ~TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450cd3f8;
  DrainPool(param_1,1);
  lVar2 = 0x33;
  plVar3 = param_1 + 0x8a;
  do {
    iVar4 = (int)plVar3[-1];
    plVar3 = plVar3 + -2;
    lVar1 = *plVar3;
    lVar2 = lVar2 + -1;
    if (iVar4 != 0) {
      do {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
        lVar1 = lVar1 + 0x18;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar1 = *plVar3;
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  } while (lVar2 != 0);
  lVar2 = 0x11;
  plVar3 = param_1 + 0x24;
  do {
    iVar4 = (int)plVar3[-1];
    plVar3 = plVar3 + -2;
    lVar1 = *plVar3;
    lVar2 = lVar2 + -1;
    if (iVar4 != 0) {
      do {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
        lVar1 = lVar1 + 0x18;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar1 = *plVar3;
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1424b59d0 ~TSparseArray<TSetElement<TTuple<unsigned_int,FFoliageOcclusionResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=401 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<unsigned_int,FFoliageOcclusionResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FFoliageOcclusionResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<unsigned_int,FFoliageOcclusionResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1424b5a91;
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
LAB_1424b5a91:
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
      if (*(longlong *)((longlong)iStack_1c * 0x30 + *param_1 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 1424b5b70 FUN_1424b5b70 body=247 status=ok
// SIG undefined FUN_1424b5b70(void)

void FUN_1424b5b70(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)plVar1[4];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)plVar1[2];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    FMemory::operator_delete(plVar1,0x38);
  }
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x38);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424b5c70 ~FGPUBaseSkinAPEXClothVertexFactory body=99 status=ok
// SIG undefined ~FGPUBaseSkinAPEXClothVertexFactory(void)

void FGPUBaseSkinAPEXClothVertexFactory::~FGPUBaseSkinAPEXClothVertexFactory(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450cd7a0;
  lVar2 = 2;
  puVar1 = param_1 + 8;
  do {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + -1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + -2);
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + -2;
  } while (lVar2 != 0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  return;
}



// FUNCTION 1424b5ce0 FUN_1424b5ce0 body=138 status=ok
// SIG undefined FUN_1424b5ce0(void)

void FUN_1424b5ce0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450cd700;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd1);
  lVar2 = 2;
  puVar1 = param_1 + 0xcf;
  do {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + -1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + -2);
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + -2;
  } while (lVar2 != 0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xca);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc9);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 1424b5d70 FUN_1424b5d70 body=299 status=ok
// SIG undefined FUN_1424b5d70(void)

void FUN_1424b5d70(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar4 = 0;
  if (0 < (int)param_1[10]) {
    lVar6 = 0;
    do {
      plVar5 = (longlong *)(param_1[9] + lVar6);
      if (*plVar5 != 0) {
        piVar1 = (int *)(*plVar5 + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if ((iVar3 == 1) && (lVar2 = *plVar5, *(char *)(lVar2 + 0x11) != '\0')) {
          if (DAT_146ab62f3 != '\0') {
            (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar2);
          }
          *(undefined1 *)(lVar2 + 0x11) = 0;
        }
      }
      *(undefined4 *)(plVar5 + 3) = 0;
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5,0);
      TRefCountPtr<FRHITexture>::operator=(plVar5 + 1);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5 + 2);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x28;
    } while (iVar4 < (int)param_1[10]);
  }
  iVar4 = (int)param_1[5];
  while (0 < iVar4) {
    FUN_1424cdf70(*(undefined8 *)(param_1[4] + -8 + (longlong)(int)param_1[5] * 8));
    iVar4 = (int)param_1[5];
  }
  FUN_1424b5610(param_1 + 9);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424b5ea0 FUN_1424b5ea0 body=508 status=ok
// SIG undefined FUN_1424b5ea0(void)

void FUN_1424b5ea0(longlong param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  iVar3 = DAT_146af9c18;
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
    iVar3 = DAT_146af9c18;
  }
  while (0 < iVar3) {
    lVar4 = *DAT_146af9c10;
    if (lVar4 != 0) {
      FUN_1424b63f0(lVar4);
      FMemory::operator_delete(lVar4,0xc0);
      iVar3 = DAT_146af9c18;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  }
  if ((*(longlong *)(param_1 + 600) != 0) && (iVar3 = 0, 0 < DAT_146af9c78)) {
    lVar4 = 0;
    do {
      FUN_14370e260(*(undefined8 *)(param_1 + 600),FUN_1409e2cd0,
                    *(undefined8 *)(lVar4 + DAT_146af9c70));
      (**(code **)(**(longlong **)(param_1 + 600) + 0x40))();
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < DAT_146af9c78);
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_143787a80();
    FUN_14370c150(*(undefined8 *)(param_1 + 0x240));
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_14370c150();
  }
  iVar3 = 0;
  if (0 < DAT_146af9c78) {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + DAT_146af9c70) + 0x10))();
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < DAT_146af9c78);
  }
  FUN_14370cf10();
  FUN_14370d9d0();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x30),0x10,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_1437876f0(param_1 + 0x20);
  FUN_14370c000(param_1 + 8);
  FUN_143702b50(param_1);
  return;
}



// FUNCTION 1424b60a0 FUN_1424b60a0 body=278 status=ok
// SIG undefined FUN_1424b60a0(void)

void FUN_1424b60a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  plVar4 = (longlong *)param_1[0x26];
  uVar9 = 0;
  *param_1 = &PTR_FUN_1450ce980;
  if ((((plVar4 != (longlong *)0x0) && (lVar5 = param_1[0x7c], lVar5 != 0)) &&
      (*(longlong *)(lVar5 + 0xf8) != 0)) &&
     (uVar6 = uVar9, uVar8 = uVar9, 0 < *(int *)(param_1 + 0x81))) {
    do {
      (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(param_1[0x80] + uVar6),lVar5);
      uVar7 = (int)uVar8 + 1;
      uVar6 = uVar6 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x81));
  }
  uVar6 = uVar9;
  if (0 < *(int *)(param_1 + 0x81)) {
    do {
      (**(code **)(**(longlong **)(uVar9 + param_1[0x80]) + 0x30))();
      uVar7 = (int)uVar6 + 1;
      uVar9 = uVar9 + 8;
      uVar6 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x81));
  }
  FUN_1424b5790(param_1 + 0x80);
  plVar4 = (longlong *)param_1[0x7f];
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
  FUN_1428181b0(param_1);
  return;
}



// FUNCTION 1424b61c0 ~FSortOffsetBuffers body=548 status=ok
// SIG undefined ~FSortOffsetBuffers(void)

void FSortOffsetBuffers::~FSortOffsetBuffers(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar7 = 2;
  lVar8 = param_1 + 0x60;
  lVar9 = 2;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
  } while (lVar9 != 0);
  lVar9 = 2;
  lVar8 = param_1 + 0x50;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
  } while (lVar9 != 0);
  lVar8 = param_1 + 0x40;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar7 = lVar7 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar9 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar7 != 0);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 1424b63f0 FUN_1424b63f0 body=492 status=ok
// SIG undefined FUN_1424b63f0(void)

void FUN_1424b63f0(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  }
  uVar8 = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x10) = 0;
    FUN_1415d5100(*(undefined8 *)(param_1 + 0xb0));
    puVar10 = *(undefined8 **)(param_1 + 0xb0);
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,1);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
    }
    uVar11 = (longlong)DAT_146af9c78 & 0x1fffffffffffffff;
    if (DAT_146af9c70 + DAT_146af9c78 < DAT_146af9c70) {
      uVar11 = uVar8;
    }
    uVar9 = uVar8;
    puVar10 = DAT_146af9c70;
    if (uVar11 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar10 + 0x20))();
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar9 != uVar11);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  }
  uVar11 = uVar8;
  lVar12 = DAT_146af9c10;
  iVar4 = DAT_146af9c18;
  if (0 < DAT_146af9c18) {
    do {
      iVar7 = (int)uVar8;
      if (*(longlong *)(uVar11 + lVar12) == param_1) {
        iVar6 = (iVar4 - iVar7) + -1;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar12 + (longlong)iVar7 * 8),
                     (void *)(lVar12 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
          iVar4 = DAT_146af9c18;
        }
        DAT_146af9c18 = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146af9c10);
        iVar7 = iVar7 + -1;
        uVar11 = uVar11 - 8;
        lVar12 = DAT_146af9c10;
        iVar4 = DAT_146af9c18;
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      uVar11 = uVar11 + 8;
    } while ((int)(iVar7 + 1U) < iVar4);
  }
  plVar5 = (longlong *)FUN_14370d950();
  (**(code **)(*plVar5 + 0x20))(plVar5,param_1,3);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  thunk_FUN_14370d1d0(param_1 + 0x78);
  FUN_143702b50(param_1);
  return;
}



// FUNCTION 1424b65e0 FUN_1424b65e0 body=191 status=ok
// SIG undefined FUN_1424b65e0(void)

void FUN_1424b65e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1[0xfc] = 0;
  *param_1 = &PTR_FUN_1450cddc8;
  param_1[5] = &PTR_LAB_1450ce7a8;
  param_1[0x5a] = &PTR_LAB_1450ce7d8;
  FUN_14158cb50(param_1 + 0x123);
  if (param_1[0x114] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10a] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x109];
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
  FUN_1424e16f0(param_1);
  return;
}



// FUNCTION 1424b66a0 FUN_1424b66a0 body=119 status=ok
// SIG undefined FUN_1424b66a0(void)

void FUN_1424b66a0(longlong param_1)

{
  undefined8 uVar1;
  
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),4,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x18,uVar1);
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x18);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1424b6720 operator= body=170 status=ok
// SIG undefined operator=(void)

longlong TArray<FVertexStreamComponent,TFixedAllocator<4>_>::operator=
                   (longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = *(int *)(param_2 + 0x40);
    *(int *)(param_1 + 0x40) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x44) == 0)) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      return param_1;
    }
    ResizeForCopy(param_1,iVar2);
    if (iVar2 != 0) {
      puVar1 = (undefined1 *)(param_1 + 0xc);
      param_2 = param_2 - param_1;
      do {
        *(undefined8 *)(puVar1 + -0xc) = *(undefined8 *)(puVar1 + param_2 + -0xc);
        *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar1 + param_2 + -4);
        *puVar1 = puVar1[param_2];
        puVar1[1] = puVar1[param_2 + 1];
        puVar1[2] = puVar1[param_2 + 2];
        puVar1[3] = puVar1[param_2 + 3];
        puVar1 = puVar1 + 0x10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return param_1;
}


