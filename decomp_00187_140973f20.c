// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140973f20 ExecuteIfSafe body=94 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UPersistenceManager,void___cdecl(void),UPersistenceManager::FThreadJob_*>
::ExecuteIfSafe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,*(undefined8 *)(param_1 + 0x20));
    return 1;
  }
  return 0;
}



// FUNCTION 140973f80 FUN_140973f80 body=259 status=ok
// SIG undefined FUN_140973f80(void)

void FUN_140973f80(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_14097aa80(param_1[2],param_1[3]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1441726b8;
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 140974090 FUN_140974090 body=291 status=ok
// SIG undefined FUN_140974090(void)

void FUN_140974090(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  if ((*(int *)(param_1 + 3) < *(int *)(param_1[2] + 0x3a8)) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1[2] + 0x3a0) + (longlong)*(int *)(param_1 + 3) * 8)
     , lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x9d0) = *(undefined1 *)((longlong)param_1 + 0x1c);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1441726c8;
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 1409741c0 FUN_1409741c0 body=375 status=ok
// SIG undefined FUN_1409741c0(void)

void FUN_1409741c0(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  int iVar6;
  void *_Src;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *local_38;
  undefined8 local_30;
  
  uVar9 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  if (0 < *(int *)(param_1 + 0x778)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_38);
    uVar9 = local_30 & 0xffffffff;
  }
  _Src = local_38;
  uVar8 = (uint)uVar9;
  ppvVar1 = (void **)(param_1 + 0x770);
  plVar3 = *ppvVar1;
  plVar5 = plVar3;
  do {
    if (plVar5 == plVar3 + *(int *)(param_1 + 0x778)) {
LAB_140974306:
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
        return;
      }
      return;
    }
    if (*plVar5 == param_2) {
      iVar6 = (int)((longlong)plVar5 - (longlong)plVar3 >> 3);
      if (iVar6 != -1) {
        *(longlong *)(param_1 + 0x728) = param_2;
        FUN_14234b040(param_1);
        iVar6 = iVar6 + 1;
        if (iVar6 < *(int *)(param_1 + 0x778)) {
          lVar10 = (longlong)iVar6 * 8;
          do {
            pvVar4 = *ppvVar1;
            iVar7 = (int)uVar9;
            uVar8 = iVar7 + 1;
            local_30 = CONCAT44(local_30._4_4_,uVar8);
            if (local_30._4_4_ < (int)uVar8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar9);
              _Src = local_38;
              uVar8 = (uint)local_30;
            }
            uVar9 = (ulonglong)uVar8;
            puVar2 = (undefined8 *)(lVar10 + (longlong)pvVar4);
            iVar6 = iVar6 + 1;
            lVar10 = lVar10 + 8;
            *(undefined8 *)((longlong)_Src + (longlong)iVar7 * 8) = *puVar2;
          } while (iVar6 < *(int *)(param_1 + 0x778));
        }
        if (ppvVar1 != &local_38) {
          *(uint *)(param_1 + 0x778) = uVar8;
          if ((uVar8 == 0) && (*(int *)(param_1 + 0x77c) == 0)) {
            *(undefined4 *)(param_1 + 0x77c) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(ppvVar1,uVar8);
            _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)(int)uVar8 << 3);
          }
        }
      }
      goto LAB_140974306;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140974340 GenerateBoxMesh body=2463 status=ok
// SIG undefined GenerateBoxMesh(void)

void UKismetProceduralMeshLibrary::GenerateBoxMesh
               (ulonglong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
               longlong *param_5,longlong *param_6)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uStack_10c;
  
  uVar26 = *param_1;
  uVar25 = *param_1;
  uVar24 = *param_1;
  uVar23 = *param_1;
  uVar22 = *param_1;
  uVar21 = *param_1;
  uVar20 = *param_1;
  uVar19 = *param_1;
  uVar18 = *param_1;
  uVar17 = *param_1;
  uVar16 = *param_1;
  uVar15 = *param_1;
  uVar14 = *param_1;
  uVar13 = *param_1;
  uVar12 = *param_1;
  uVar11 = *param_1;
  uVar10 = *param_1;
  uVar9 = *param_1;
  uVar8 = *param_1;
  uVar7 = *param_1;
  uVar6 = *param_1;
  uVar1 = (uint)param_1[1];
  uVar31 = uVar1 ^ 0x80000000;
  uVar5 = *param_1 ^ 0x8000000080000000;
  *(undefined4 *)(param_3 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_3 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3);
  }
  iVar29 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if ((*(int *)((longlong)param_2 + 0xc) < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_2);
    iVar29 = (int)param_2[1];
  }
  *(int *)(param_2 + 1) = iVar29 + 0x18;
  if (*(int *)((longlong)param_2 + 0xc) < iVar29 + 0x18) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
  }
  iVar29 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  if ((*(int *)((longlong)param_4 + 0xc) < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_4);
    iVar29 = (int)param_4[1];
  }
  *(int *)(param_4 + 1) = iVar29 + 0x18;
  if (*(int *)((longlong)param_4 + 0xc) < iVar29 + 0x18) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4);
  }
  iVar29 = 0;
  *(undefined4 *)(param_6 + 1) = 0;
  if ((*(int *)((longlong)param_6 + 0xc) < 0) && (*(int *)((longlong)param_6 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_6);
    iVar29 = (int)param_6[1];
  }
  *(int *)(param_6 + 1) = iVar29 + 0x18;
  if (*(int *)((longlong)param_6 + 0xc) < iVar29 + 0x18) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_6);
  }
  puVar2 = (ulonglong *)*param_2;
  *puVar2 = uVar6 ^ 0x80000000;
  *(uint *)(puVar2 + 1) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xc) = uVar7;
  *(uint *)(lVar3 + 0x14) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x18) = uVar8 ^ 0x8000000000000000;
  *(uint *)(lVar3 + 0x20) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x24) = uVar9 ^ 0x8000000080000000;
  *(uint *)(lVar3 + 0x2c) = uVar1;
  ConvertQuadToTriangles(param_3,0,1,2,3);
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 0x20) = 0x3f800000;
  lVar3 = *param_4;
  uVar28 = uStack_10c >> 8;
  uStack_10c = uVar28 << 8;
  *(undefined8 *)(lVar3 + 0xc) = 0;
  *(undefined4 *)(lVar3 + 0x14) = 0x3f800000;
  puVar4 = (undefined8 *)*param_4;
  *puVar4 = 0;
  lVar27 = (ulonglong)uStack_10c << 0x20;
  *(undefined4 *)(puVar4 + 1) = 0x3f800000;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x30) = 0xbf80000000000000;
  *(longlong *)(lVar3 + 0x38) = lVar27;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x20) = 0xbf80000000000000;
  *(longlong *)(lVar3 + 0x28) = lVar27;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x10) = 0xbf80000000000000;
  *(longlong *)(lVar3 + 0x18) = lVar27;
  puVar4 = (undefined8 *)*param_6;
  *puVar4 = 0xbf80000000000000;
  puVar4[1] = lVar27;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x30) = uVar10 ^ 0x80000000;
  *(uint *)(lVar3 + 0x38) = uVar31;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x3c) = uVar11 ^ 0x80000000;
  *(uint *)(lVar3 + 0x44) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x48) = uVar12 ^ 0x8000000080000000;
  *(uint *)(lVar3 + 0x50) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x54) = uVar5;
  *(uint *)(lVar3 + 0x5c) = uVar31;
  ConvertQuadToTriangles(param_3,4,5,6,7);
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x54) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x5c) = 0;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x48) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x50) = 0;
  lVar3 = *param_4;
  uStack_10c = uVar28 << 8;
  *(undefined8 *)(lVar3 + 0x3c) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x44) = 0;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x30) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x38) = 0;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x70) = 0;
  *(undefined4 *)(lVar3 + 0x74) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x78) = 0;
  *(uint *)(lVar3 + 0x7c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x60) = 0;
  *(undefined4 *)(lVar3 + 100) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x68) = 0;
  *(uint *)(lVar3 + 0x6c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x50) = 0;
  *(undefined4 *)(lVar3 + 0x54) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x58) = 0;
  *(uint *)(lVar3 + 0x5c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x40) = 0;
  *(undefined4 *)(lVar3 + 0x44) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x48) = 0;
  *(uint *)(lVar3 + 0x4c) = uStack_10c;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x60) = uVar13;
  *(uint *)(lVar3 + 0x68) = uVar31;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x6c) = uVar14;
  *(uint *)(lVar3 + 0x74) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x78) = uVar15 ^ 0x80000000;
  *(uint *)(lVar3 + 0x80) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x84) = uVar16 ^ 0x80000000;
  *(uint *)(lVar3 + 0x8c) = uVar31;
  ConvertQuadToTriangles(param_3,8,9,10,0xb);
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x84) = 0x3f80000000000000;
  *(undefined4 *)(lVar3 + 0x8c) = 0;
  lVar3 = *param_4;
  uStack_10c = uVar28 << 8;
  *(undefined8 *)(lVar3 + 0x78) = 0x3f80000000000000;
  *(undefined4 *)(lVar3 + 0x80) = 0;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x6c) = 0x3f80000000000000;
  *(undefined4 *)(lVar3 + 0x74) = 0;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x60) = 0x3f80000000000000;
  *(undefined4 *)(lVar3 + 0x68) = 0;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0xb0) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0xb4) = 0;
  *(undefined4 *)(lVar3 + 0xb8) = 0;
  *(uint *)(lVar3 + 0xbc) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0xa0) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0xa4) = 0;
  *(undefined4 *)(lVar3 + 0xa8) = 0;
  *(uint *)(lVar3 + 0xac) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x90) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x94) = 0;
  *(undefined4 *)(lVar3 + 0x98) = 0;
  *(uint *)(lVar3 + 0x9c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x80) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x84) = 0;
  *(undefined4 *)(lVar3 + 0x88) = 0;
  *(uint *)(lVar3 + 0x8c) = uStack_10c;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x90) = uVar17 ^ 0x8000000000000000;
  *(uint *)(lVar3 + 0x98) = uVar31;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x9c) = uVar18 ^ 0x8000000000000000;
  *(uint *)(lVar3 + 0xa4) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xa8) = uVar19;
  *(uint *)(lVar3 + 0xb0) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xb4) = uVar20;
  *(uint *)(lVar3 + 0xbc) = uVar31;
  ConvertQuadToTriangles(param_3,0xc,0xd,0xe,0xf);
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0xb4) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0xbc) = 0;
  lVar3 = *param_4;
  uStack_10c = uVar28 << 8;
  *(undefined8 *)(lVar3 + 0xa8) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0xb0) = 0;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x9c) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0xa4) = 0;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x90) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x98) = 0;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0xf0) = 0;
  *(undefined4 *)(lVar3 + 0xf4) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0xf8) = 0;
  *(uint *)(lVar3 + 0xfc) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0xe0) = 0;
  *(undefined4 *)(lVar3 + 0xe4) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0xe8) = 0;
  *(uint *)(lVar3 + 0xec) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0xd0) = 0;
  *(undefined4 *)(lVar3 + 0xd4) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0xd8) = 0;
  *(uint *)(lVar3 + 0xdc) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0xc0) = 0;
  *(undefined4 *)(lVar3 + 0xc4) = 0x3f800000;
  *(undefined4 *)(lVar3 + 200) = 0;
  *(uint *)(lVar3 + 0xcc) = uStack_10c;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xc0) = uVar5;
  *(uint *)(lVar3 + 200) = uVar31;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xcc) = uVar21 ^ 0x8000000080000000;
  *(uint *)(lVar3 + 0xd4) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xd8) = uVar22 ^ 0x8000000000000000;
  *(uint *)(lVar3 + 0xe0) = uVar1;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xe4) = uVar23 ^ 0x8000000000000000;
  *(uint *)(lVar3 + 0xec) = uVar31;
  ConvertQuadToTriangles(param_3,0x10,0x11,0x12,0x13);
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0xe4) = 0xbf80000000000000;
  *(undefined4 *)(lVar3 + 0xec) = 0;
  lVar3 = *param_4;
  uStack_10c = uVar28 << 8;
  *(undefined8 *)(lVar3 + 0xd8) = 0xbf80000000000000;
  *(undefined4 *)(lVar3 + 0xe0) = 0;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0xcc) = 0xbf80000000000000;
  *(undefined4 *)(lVar3 + 0xd4) = 0;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0xc0) = 0xbf80000000000000;
  *(undefined4 *)(lVar3 + 200) = 0;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x130) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x134) = 0;
  *(undefined4 *)(lVar3 + 0x138) = 0;
  *(uint *)(lVar3 + 0x13c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x120) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x124) = 0;
  *(undefined4 *)(lVar3 + 0x128) = 0;
  *(uint *)(lVar3 + 300) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x110) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x114) = 0;
  *(undefined4 *)(lVar3 + 0x118) = 0;
  *(uint *)(lVar3 + 0x11c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x100) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x104) = 0;
  *(undefined4 *)(lVar3 + 0x108) = 0;
  *(uint *)(lVar3 + 0x10c) = uStack_10c;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xf0) = uVar5;
  *(uint *)(lVar3 + 0xf8) = uVar31;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0xfc) = uVar24 ^ 0x8000000000000000;
  *(uint *)(lVar3 + 0x104) = uVar31;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x108) = uVar25;
  *(uint *)(lVar3 + 0x110) = uVar31;
  lVar3 = *param_2;
  *(ulonglong *)(lVar3 + 0x114) = uVar26 ^ 0x80000000;
  *(uint *)(lVar3 + 0x11c) = uVar31;
  ConvertQuadToTriangles(param_3,0x14,0x15,0x16,0x17);
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0x114) = 0;
  *(undefined4 *)(lVar3 + 0x11c) = 0xbf800000;
  lVar3 = *param_4;
  uStack_10c = uVar28 << 8;
  *(undefined8 *)(lVar3 + 0x108) = 0;
  *(undefined4 *)(lVar3 + 0x110) = 0xbf800000;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x104) = 0xbf800000;
  lVar3 = *param_4;
  *(undefined8 *)(lVar3 + 0xf0) = 0;
  *(undefined4 *)(lVar3 + 0xf8) = 0xbf800000;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x170) = 0;
  *(undefined4 *)(lVar3 + 0x174) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x178) = 0;
  *(uint *)(lVar3 + 0x17c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x160) = 0;
  *(undefined4 *)(lVar3 + 0x164) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x168) = 0;
  *(uint *)(lVar3 + 0x16c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x150) = 0;
  *(undefined4 *)(lVar3 + 0x154) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x158) = 0;
  *(uint *)(lVar3 + 0x15c) = uStack_10c;
  lVar3 = *param_6;
  *(undefined4 *)(lVar3 + 0x140) = 0;
  *(undefined4 *)(lVar3 + 0x144) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x148) = 0;
  *(uint *)(lVar3 + 0x14c) = uStack_10c;
  iVar29 = *(int *)((longlong)param_5 + 0xc);
  *(undefined4 *)(param_5 + 1) = 0;
  if (iVar29 < 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_5,0);
    iVar30 = (int)param_5[1];
    iVar29 = *(int *)((longlong)param_5 + 0xc);
  }
  else {
    iVar30 = 0;
  }
  *(int *)(param_5 + 1) = iVar30 + 0x18;
  if (iVar29 < iVar30 + 0x18) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5);
  }
  *(undefined8 *)(*param_5 + 0xa0) = 0;
  *(undefined8 *)(*param_5 + 0x80) = 0;
  *(undefined8 *)(*param_5 + 0x60) = 0;
  *(undefined8 *)(*param_5 + 0x40) = 0;
  *(undefined8 *)(*param_5 + 0x20) = 0;
  *(undefined8 *)*param_5 = 0;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0xa8) = 0;
  *(undefined4 *)(lVar3 + 0xac) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x88) = 0;
  *(undefined4 *)(lVar3 + 0x8c) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x68) = 0;
  *(undefined4 *)(lVar3 + 0x6c) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x48) = 0;
  *(undefined4 *)(lVar3 + 0x4c) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 0xc) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0xb0) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0xb4) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x90) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x94) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x70) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x74) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x54) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x30) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x34) = 0x3f800000;
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 0x10) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x14) = 0x3f800000;
  *(undefined8 *)(*param_5 + 0xb8) = 0x3f800000;
  *(undefined8 *)(*param_5 + 0x98) = 0x3f800000;
  *(undefined8 *)(*param_5 + 0x78) = 0x3f800000;
  *(undefined8 *)(*param_5 + 0x58) = 0x3f800000;
  *(undefined8 *)(*param_5 + 0x38) = 0x3f800000;
  *(undefined8 *)(*param_5 + 0x18) = 0x3f800000;
  return;
}



// FUNCTION 140974ce0 FUN_140974ce0 body=39 status=ok
// SIG undefined FUN_140974ce0(void)

void FUN_140974ce0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x728) == 0) {
    uVar1 = FUN_140973690();
    *(undefined8 *)(param_1 + 0x728) = uVar1;
  }
  return;
}



// FUNCTION 140974d10 FUN_140974d10 body=1513 status=ok
// SIG undefined FUN_140974d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140974d10(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  bool bVar28;
  undefined4 uVar29;
  double dVar30;
  longlong local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  undefined4 local_2b0;
  int iStack_2ac;
  longlong *local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  longlong local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  uint local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208 [464];
  
  plVar27 = (longlong *)param_1[0x74];
  local_2a0 = 0;
  uVar19 = (longlong)(int)param_1[0x75] & 0x1fffffffffffffff;
  if (plVar27 + (int)param_1[0x75] < plVar27) {
    uVar19 = 0;
  }
  local_2c0 = uVar19;
  if (uVar19 != 0) {
    do {
      uVar25 = local_2a0;
      uVar23 = 0;
      puVar6 = (undefined8 *)*plVar27;
      if (((puVar6 != (undefined8 *)0x0) && (*(char *)(puVar6 + 0x13a) != '\0')) &&
         (local_2a8 = plVar27,
         local_298 = (**(code **)(*(longlong *)*puVar6 + 0x2a8))
                               ((longlong *)*puVar6,(*(uint *)(param_1 + 3) & 0x300) != 0,0),
         uVar19 = local_2c0, 0 < *(int *)(param_2 + 8))) {
        do {
          if ((param_4 >> (uVar23 & 0x1f) & 1) != 0) {
            iVar14 = FUN_1408bed80(param_5,1);
            lVar24 = (ulonglong)(uint)(iVar14 % 0x59) * 0xb8 +
                     *(longlong *)(*param_5 + (longlong)(iVar14 / 0x59) * 8);
            lVar26 = *(longlong *)(lVar24 + 0x78);
            if (*(longlong *)(lVar24 + 0x78) == 0) {
              lVar26 = lVar24;
            }
            *(undefined8 **)(lVar26 + 0x10) = puVar6 + 0x42;
            *(uint *)(lVar24 + 0x8c) = *(uint *)(lVar24 + 0x8c) & 0xfffffeff;
            *(undefined8 **)(lVar24 + 0xa0) = puVar6 + 0x4c;
            *(undefined8 *)(lVar24 + 0xa8) = local_298;
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x37c);
            lVar18 = param_1[0x6f];
            uVar15 = (**(code **)(*param_1 + 0x18))(param_1);
            lVar16 = 0;
            dVar3 = (double)param_1[0x72];
            local_278 = _DAT_1464aa7d0;
            uStack_270 = _DAT_1464aa7d8;
            local_268 = _DAT_1464aa7e0;
            uStack_260 = _DAT_1464aa7e8;
            dVar30 = 0.0;
            local_258 = _DAT_1464aa7f0;
            uStack_250 = _DAT_1464aa7f8;
            local_248 = _DAT_1464aa800;
            uStack_240 = uRam00000001464aa808;
            dVar4 = (double)param_1[0x71];
            local_228 = (uint)((char)uVar15 != '\0');
            lVar20 = (longlong)dVar4;
            local_21c = 0;
            local_238 = 0x3f80000000000000;
            uStack_230 = 0x3f8000003f800000;
            dVar10 = dVar4;
            if ((lVar20 != -0x8000000000000000) && (dVar30 = (double)lVar20, dVar30 != dVar4)) {
              auVar8._8_4_ = SUB84(dVar4,0);
              auVar8._0_8_ = dVar4;
              auVar8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              uVar15 = movmskpd(uVar15,auVar8);
              uVar15 = uVar15 & 1;
              dVar10 = (double)(longlong)(lVar20 - (ulonglong)uVar15);
            }
            lVar22 = (longlong)dVar10;
            dVar4 = (dVar4 - (double)lVar22) * 2147483647.0;
            lVar20 = (longlong)dVar4;
            if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar4)) {
              auVar11._8_4_ = SUB84(dVar4,0);
              auVar11._0_8_ = dVar4;
              auVar11._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              uVar15 = movmskpd(uVar15,auVar11);
              dVar4 = (double)(longlong)(lVar20 - (ulonglong)(uVar15 & 1));
            }
            lVar21 = (longlong)dVar4;
            lVar20 = lVar16;
            if ((-1 < lVar22) && (lVar20 = 0x7fffffff, lVar22 < 0x7fffffff)) {
              lVar20 = lVar22;
            }
            local_218 = (undefined4)lVar20;
            lVar20 = lVar16;
            if ((-1 < lVar21) && (lVar20 = 0x7fffffff, lVar21 < 0x7fffffff)) {
              lVar20 = lVar21;
            }
            lVar22 = (longlong)dVar3;
            local_214 = (uint)lVar20;
            uVar29 = 0;
            uVar15 = local_214;
            dVar4 = dVar3;
            if ((lVar22 != -0x8000000000000000) &&
               (uVar29 = SUB84((double)lVar22,0), (double)lVar22 != dVar3)) {
              auVar9._8_4_ = SUB84(dVar3,0);
              auVar9._0_8_ = dVar3;
              auVar9._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar15 = movmskpd(local_214,auVar9);
              uVar15 = uVar15 & 1;
              dVar4 = (double)(longlong)(lVar22 - (ulonglong)uVar15);
            }
            lVar22 = (longlong)dVar4;
            dVar3 = (dVar3 - (double)lVar22) * 2147483647.0;
            lVar20 = (longlong)dVar3;
            if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar3)) {
              auVar12._8_4_ = SUB84(dVar3,0);
              auVar12._0_8_ = dVar3;
              auVar12._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar15 = movmskpd(uVar15,auVar12);
              dVar3 = (double)(longlong)(lVar20 - (ulonglong)(uVar15 & 1));
            }
            lVar21 = (longlong)dVar3;
            lVar20 = lVar16;
            if ((-1 < lVar22) && (lVar20 = 0x7fffffff, lVar22 < 0x7fffffff)) {
              lVar20 = lVar22;
            }
            local_210 = (undefined4)lVar20;
            if ((-1 < lVar21) && (lVar16 = 0x7fffffff, lVar21 < 0x7fffffff)) {
              lVar16 = lVar21;
            }
            local_288 = param_1[0x18];
            local_20c = (undefined4)lVar16;
            local_280 = (undefined4)param_1[0x19];
            local_224 = (int)lVar18;
            local_220 = uVar2;
            uVar17 = FUN_1408c7250(local_208,uVar29,&local_288,dVar30,(longlong)param_1 + 0xdc,1,0,0
                                   ,0,0,0,(byte)(*(uint *)((longlong)param_1 + 0x1c) >> 0x14) & 1,1,
                                   0x3f800000,&local_278);
            (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_2b8,uVar17,&DAT_146b09668,2);
            lVar18 = local_2b8;
            local_2c8 = local_2b8;
            if (local_2b8 != 0) {
              LOCK();
              *(int *)(local_2b8 + 8) = *(int *)(local_2b8 + 8) + 1;
              UNLOCK();
            }
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2b8);
            plVar27 = (longlong *)(lVar26 + 8);
            if (plVar27 != &local_2c8) {
              puVar7 = (undefined8 *)*plVar27;
              *plVar27 = lVar18;
              lVar18 = 0;
              local_2c8 = 0;
              if (puVar7 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar7 + 1);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  if ((*(char *)(puVar7 + 2) == '\0') &&
                     ((DAT_146ab62f5 != '\0' ||
                      (cVar13 = FOutputDevice::CanBeUsedOnAnyThread(), cVar13 == '\0')))) {
                    LOCK();
                    bVar28 = *(int *)((longlong)puVar7 + 0xc) == 0;
                    if (bVar28) {
                      *(int *)((longlong)puVar7 + 0xc) = 1;
                    }
                    UNLOCK();
                    if (bVar28) {
                      uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                      if (uVar15 != 0) {
                        lVar18 = (&DAT_1468a81f8)[uVar15 >> 0xe] +
                                 (ulonglong)(uVar15 & 0x3fff) * 0x18;
                      }
                      *(undefined8 **)(lVar18 + 8) = puVar7;
                      FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                    }
                  }
                  else {
                    (**(code **)*puVar7)(puVar7,1);
                  }
                }
              }
            }
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c8);
            iVar14 = *(int *)(lVar26 + 0x38);
            iVar5 = *(int *)(puVar6 + 0x4b);
            local_2b0 = 0;
            iStack_2ac = iVar5 / 3 + (iVar5 >> 0x1f) +
                         (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >>
                              0x1f);
            *(int *)(lVar26 + 0x38) = iVar14 + 1;
            if (*(int *)(lVar26 + 0x3c) < iVar14 + 1) {
              TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
              ::ResizeGrow(lVar26 + 0x28,iVar14);
            }
            lVar18 = *(longlong *)(lVar26 + 0x30);
            if (*(longlong *)(lVar26 + 0x30) == 0) {
              lVar18 = lVar26 + 0x28;
            }
            *(ulonglong *)(lVar18 + (longlong)iVar14 * 8) = CONCAT44(iStack_2ac,local_2b0);
            *(undefined4 *)(lVar26 + 0x48) = 0;
            *(int *)(lVar26 + 0x4c) = *(int *)((longlong)puVar6 + 0x144) + -1;
            uVar15 = (*(byte *)(param_1 + 3) & 1) << 3 | *(uint *)(lVar24 + 0x8c) & 0xffc00ff7;
            *(uint *)(lVar24 + 0x8c) = uVar15;
            *(uint *)(lVar24 + 0x8c) =
                 (*(uint *)((longlong)param_1 + 0x1c) >> 0x11 ^ uVar15) & 0x200 ^ uVar15;
            FUN_142747330(param_5,uVar23);
          }
          uVar23 = uVar23 + 1;
          uVar19 = local_2c0;
          uVar25 = local_2a0;
          plVar27 = local_2a8;
        } while ((int)uVar23 < *(int *)(param_2 + 8));
      }
      plVar27 = plVar27 + 1;
      local_2a0 = uVar25 + 1;
    } while (local_2a0 != uVar19);
  }
  return;
}



// FUNCTION 140975300 GetNewBusSends body=8 status=ok
// SIG undefined GetNewBusSends(void)

longlong FActiveSound::GetNewBusSends(longlong param_1)

{
  return param_1 + 0x750;
}



// FUNCTION 140975310 FUN_140975310 body=193 status=ok
// SIG undefined FUN_140975310(void)

undefined8 FUN_140975310(longlong *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  
  *param_3 = 0;
  if (param_2 < 0) {
    return 0;
  }
  iVar6 = 0;
  iVar3 = 0;
  if (0 < (int)param_1[0xe7]) {
    lVar4 = 0;
    piVar5 = (int *)(param_1[0xe6] + 0x18);
    do {
      iVar1 = *piVar5;
      iVar6 = iVar6 + iVar1 / 3 + (iVar1 >> 0x1f) +
                      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)
      ;
      if (param_2 < iVar6) {
        uVar2 = (**(code **)(*param_1 + 0x560))(param_1,iVar3);
        *param_3 = iVar3;
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 1;
      piVar5 = piVar5 + 0x10;
    } while (lVar4 < (int)param_1[0xe7]);
    return 0;
  }
  return 0;
}



// FUNCTION 1409753f0 FUN_1409753f0 body=1417 status=ok
// SIG undefined FUN_1409753f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1409753f0(uint param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [14];
  unkbyte10 Var11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  longlong *plVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  ushort *puVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined2 uVar72;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar43 [16];
  undefined2 uVar73;
  undefined1 auVar47 [12];
  float fVar46;
  float fVar65;
  undefined1 auVar48 [16];
  undefined1 auVar61 [16];
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  undefined1 uVar66;
  undefined1 unaff_XMM8_Bc;
  undefined1 uVar67;
  undefined1 unaff_XMM8_Bd;
  undefined1 uVar68;
  undefined1 unaff_XMM8_Be;
  undefined1 unaff_XMM8_Bf;
  undefined1 uVar69;
  undefined1 unaff_XMM8_Bg;
  undefined1 uVar70;
  undefined1 unaff_XMM8_Bh;
  undefined1 uVar71;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_98;
  uint local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar34 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar52 [16];
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar15 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar15 = param_2 + 7;
    }
    uVar20 = *(uint *)((longlong)plVar15 +
                      ((longlong)(int)param_2[9] - 1U & (longlong)(int)param_1) * 4);
    if (uVar20 != 0xffffffff) {
      do {
        puVar19 = (uint *)((longlong)(int)uVar20 * 0x10 + *param_2);
        if (*puVar19 == param_1) {
          if (uVar20 != 0xffffffff) goto LAB_140975470;
          break;
        }
        uVar20 = puVar19[2];
      } while (uVar20 != 0xffffffff);
    }
  }
  puVar19 = (uint *)0x0;
LAB_140975470:
  puVar16 = puVar19 + 1;
  if (puVar19 == (uint *)0x0) {
    puVar16 = (uint *)0x0;
  }
  if (puVar16 == (uint *)0x0) {
    uVar20 = *(uint *)(param_4 + 1);
    puVar23 = (undefined8 *)
              ((ulonglong)(*(int *)(param_3 + 0x138) * param_1) + *(longlong *)(param_3 + 0x130));
    *(uint *)(param_4 + 1) = uVar20 + 1;
    local_res8[0] = param_1;
    if (*(int *)((longlong)param_4 + 0xc) < (int)(uVar20 + 1)) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,uVar20);
    }
    lVar2 = *param_4;
    uVar7 = CONCAT13(unaff_XMM8_Bd,CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ^
            CONCAT13(unaff_XMM8_Bd,CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba)));
    uVar66 = (undefined1)(uVar7 >> 8);
    uVar67 = (undefined1)(uVar7 >> 0x10);
    uVar68 = (undefined1)(uVar7 >> 0x18);
    uVar8 = CONCAT13(unaff_XMM8_Bh,CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ^
            CONCAT13(unaff_XMM8_Bh,CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be)));
    uVar69 = (undefined1)(uVar8 >> 8);
    uVar70 = (undefined1)(uVar8 >> 0x10);
    uVar71 = (undefined1)(uVar8 >> 0x18);
    local_78 = (uint *)0x0;
    uStack_70 = (uint *)((ulonglong)uStack_70._4_4_ << 0x20);
    *(undefined8 *)(lVar2 + (longlong)(int)uVar20 * 0xc) = *puVar23;
    *(undefined4 *)(lVar2 + 8 + (longlong)(int)uVar20 * 0xc) = *(undefined4 *)(puVar23 + 1);
    uVar3 = (undefined2)uVar7;
    uVar4 = (undefined2)(uVar7 >> 0x10);
    uVar5 = (undefined2)uVar8;
    uVar6 = (undefined2)(uVar8 >> 0x10);
    if (*(char *)(param_3 + 0xe1) == '\0') {
      uVar21 = *(uint *)(*(longlong *)(param_3 + 0xc0) + 4 + (ulonglong)local_res8[0] * 8);
      auVar60._0_15_ = ZEXT415(uVar21);
      auVar60[0xf] = uVar71;
      auVar59._14_2_ = auVar60._14_2_;
      auVar59._0_13_ = ZEXT413(uVar21);
      auVar59[0xd] = uVar70;
      auVar58._13_3_ = auVar59._13_3_;
      auVar58._0_13_ = ZEXT413(uVar21);
      auVar57._12_4_ = auVar58._12_4_;
      auVar57._4_7_ = 0;
      auVar57._0_4_ = uVar21;
      auVar57[0xb] = uVar69;
      auVar56._11_5_ = auVar57._11_5_;
      auVar56._4_7_ = 0;
      auVar56._0_4_ = uVar21;
      auVar55._10_6_ = auVar56._10_6_;
      auVar55._4_5_ = 0;
      auVar55._0_4_ = uVar21;
      auVar55[9] = (char)uVar8;
      auVar54._9_7_ = auVar55._9_7_;
      auVar54._4_5_ = 0;
      auVar54._0_4_ = uVar21;
      Var11 = CONCAT91(CONCAT81(auVar54._8_8_,uVar68),(char)(uVar21 >> 0x18));
      auVar53._6_10_ = Var11;
      auVar53[5] = uVar67;
      auVar53[4] = (char)(uVar21 >> 0x10);
      auVar53._0_4_ = uVar21;
      auVar10._2_12_ = auVar53._4_12_;
      auVar10[1] = uVar66;
      auVar10[0] = (char)(uVar21 >> 8);
      uVar73 = CONCAT11((char)uVar7,(char)uVar21);
      auVar52._2_14_ = auVar10;
      auVar64._0_12_ = auVar52._0_12_;
      auVar64._12_2_ = (short)Var11;
      auVar64._14_2_ = uVar6;
      auVar63._12_4_ = auVar64._12_4_;
      auVar63._0_10_ = auVar52._0_10_;
      auVar63._10_2_ = uVar5;
      auVar62._10_6_ = auVar63._10_6_;
      auVar62._0_8_ = auVar52._0_8_;
      auVar62._8_2_ = auVar53._4_2_;
      auVar47._4_8_ = auVar62._8_8_;
      auVar47._2_2_ = uVar4;
      auVar47._0_2_ = auVar10._0_2_;
      auVar61._0_4_ = CONCAT22(uVar3,uVar73);
      auVar61._4_12_ = auVar47;
      auVar30._0_4_ = -(uint)(0x7f < auVar61._0_4_);
      auVar30._4_4_ = -(uint)(0x7f < auVar47._0_4_);
      auVar30._8_4_ = -(uint)(0x7f < auVar62._8_4_);
      auVar30 = DAT_144101760._0_12_ & auVar30 | auVar61._0_12_;
      auVar47 = DAT_144101740._0_12_;
    }
    else {
      uVar18 = *(ulonglong *)(*(longlong *)(param_3 + 0xc0) + 8 + (ulonglong)local_res8[0] * 0x10);
      auVar51._8_4_ = 0;
      auVar51._0_8_ = uVar18;
      auVar51._12_2_ = (short)(uVar18 >> 0x30);
      auVar51._14_2_ = uVar6;
      auVar50._12_4_ = auVar51._12_4_;
      auVar50._8_2_ = 0;
      auVar50._0_8_ = uVar18;
      auVar50._10_2_ = uVar5;
      auVar49._10_6_ = auVar50._10_6_;
      auVar49._8_2_ = (short)(uVar18 >> 0x20);
      auVar49._0_8_ = uVar18;
      auVar9._4_8_ = auVar49._8_8_;
      auVar9._2_2_ = uVar4;
      auVar9._0_2_ = (short)(uVar18 >> 0x10);
      auVar48._0_4_ = CONCAT22(uVar3,(short)uVar18);
      auVar48._4_12_ = auVar9;
      auVar25._0_4_ = -(uint)(0x7fff < auVar48._0_4_);
      auVar25._4_4_ = -(uint)(0x7fff < auVar9._0_4_);
      auVar25._8_4_ = -(uint)(0x7fff < auVar49._8_4_);
      auVar30 = DAT_144116410._0_12_ & auVar25 | auVar48._0_12_;
      auVar47 = DAT_1441163e0._0_12_;
    }
    iVar22 = (int)param_5[1];
    local_90 = auVar47._0_4_ * (float)auVar30._0_4_;
    fStack_8c = auVar47._4_4_ * (float)auVar30._4_4_;
    local_88 = auVar47._8_4_ * (float)auVar30._8_4_;
    *(int *)(param_5 + 1) = iVar22 + 1;
    local_94 = uVar20;
    if (*(int *)((longlong)param_5 + 0xc) < iVar22 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar22);
    }
    lVar2 = *param_5;
    *(ulonglong *)(lVar2 + (longlong)iVar22 * 0xc) = CONCAT44(fStack_8c,local_90);
    *(float *)(lVar2 + 8 + (longlong)iVar22 * 0xc) = local_88;
    lVar2 = *(longlong *)(param_3 + 200);
    if (*(char *)(param_3 + 0xe0) == '\0') {
      puVar24 = (ushort *)
                ((ulonglong)local_res8[0] * (ulonglong)*(uint *)(param_3 + 0xd8) * 4 + lVar2);
      uVar18 = (ulonglong)_tls_index;
      uVar1 = puVar24[1];
      local_98 = (uVar1 & 0xffff8000) << 0x10;
      if ((uVar1 & 0x7c00) == 0) {
        uVar20 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar65 = _guard_xfg_dispatch_icall_nop((float)uVar20);
          iVar22 = 10 - (int)(fVar65 * DAT_1468509d8);
          uVar18 = (ulonglong)_tls_index;
          local_98 = uVar20 << ((char)iVar22 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar22 & 0xff) << 0x17 | local_98;
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_98 = local_98 | 0x477fe000;
      }
      else {
        local_98 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd | local_98;
      }
      uVar1 = *puVar24;
      uVar20 = (uVar1 & 0xffff8000) << 0x10;
      if ((uVar1 & 0x7c00) == 0) {
        uVar21 = uVar1 & 0x3ff;
        local_res10[0] = uVar20;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar65 = _guard_xfg_dispatch_icall_nop((float)uVar21);
          iVar22 = 10 - (int)(fVar65 * DAT_1468509d8);
          uVar20 = uVar21 << ((char)iVar22 + 0xdU & 0x1f) & 0x7fffff |
                   (0x71U - iVar22 & 0xff) << 0x17 | uVar20;
          local_res10[0] = uVar20;
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        uVar20 = uVar20 | 0x477fe000;
        local_res10[0] = uVar20;
      }
      else {
        uVar20 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd | uVar20;
        local_res10[0] = uVar20;
      }
    }
    else {
      lVar17 = (ulonglong)*(uint *)(param_3 + 0xd8) * (ulonglong)local_res8[0];
      uVar20 = *(uint *)(lVar2 + lVar17 * 8);
      local_98 = *(uint *)(lVar2 + 4 + lVar17 * 8);
    }
    iVar22 = (int)param_6[1];
    *(int *)(param_6 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_6 + 0xc) < iVar22 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_6,iVar22);
    }
    lVar2 = *param_6;
    *(uint *)(lVar2 + (longlong)iVar22 * 8) = uVar20;
    *(uint *)(lVar2 + 4 + (longlong)iVar22 * 8) = local_98;
    if (*(char *)(param_3 + 0xe1) == '\0') {
      uVar20 = *(uint *)(*(longlong *)(param_3 + 0xc0) + (ulonglong)local_res8[0] * 8);
      auVar42._0_15_ = ZEXT415(uVar20);
      auVar42[0xf] = uVar71;
      auVar41._14_2_ = auVar42._14_2_;
      auVar41._0_13_ = ZEXT413(uVar20);
      auVar41[0xd] = uVar70;
      auVar40._13_3_ = auVar41._13_3_;
      auVar40._0_13_ = ZEXT413(uVar20);
      auVar39._12_4_ = auVar40._12_4_;
      auVar39._4_7_ = 0;
      auVar39._0_4_ = uVar20;
      auVar39[0xb] = uVar69;
      auVar38._11_5_ = auVar39._11_5_;
      auVar38._4_7_ = 0;
      auVar38._0_4_ = uVar20;
      auVar37._10_6_ = auVar38._10_6_;
      auVar37._4_5_ = 0;
      auVar37._0_4_ = uVar20;
      auVar37[9] = (char)uVar8;
      auVar36._9_7_ = auVar37._9_7_;
      auVar36._4_5_ = 0;
      auVar36._0_4_ = uVar20;
      Var11 = CONCAT91(CONCAT81(auVar36._8_8_,uVar68),(char)(uVar20 >> 0x18));
      auVar35._6_10_ = Var11;
      auVar35[5] = uVar67;
      auVar35[4] = (char)(uVar20 >> 0x10);
      auVar35._0_4_ = uVar20;
      auVar13._2_12_ = auVar35._4_12_;
      auVar13[1] = uVar66;
      auVar13[0] = (char)(uVar20 >> 8);
      uVar72 = CONCAT11((char)uVar7,(char)uVar20);
      auVar34._2_14_ = auVar13;
      auVar45._0_12_ = auVar34._0_12_;
      auVar45._12_2_ = (short)Var11;
      auVar45._14_2_ = uVar6;
      auVar44._12_4_ = auVar45._12_4_;
      auVar44._0_10_ = auVar34._0_10_;
      auVar44._10_2_ = uVar5;
      auVar43._10_6_ = auVar44._10_6_;
      auVar43._0_8_ = auVar34._0_8_;
      auVar43._8_2_ = auVar35._4_2_;
      auVar14._4_8_ = auVar43._8_8_;
      auVar14._2_2_ = uVar4;
      auVar14._0_2_ = auVar13._0_2_;
      auVar29._0_4_ = CONCAT22(uVar3,uVar72);
      auVar29._4_12_ = auVar14;
      auVar28._0_4_ = -(uint)(0x7f < auVar29._0_4_);
      auVar28._4_4_ = -(uint)(0x7f < auVar14._0_4_);
      auVar28._8_4_ = -(uint)(0x7f < auVar43._8_4_);
      auVar28._12_4_ = -(uint)(0x7f < auVar44._12_4_);
      auVar29 = auVar28 & _DAT_144101760 | auVar29;
      fVar46 = (float)auVar29._0_4_ * 0.007874016;
      fVar65 = (float)auVar29._4_4_ * 0.007874016;
      local_88 = (float)auVar29._8_4_ * 0.007874016;
    }
    else {
      uVar18 = *(ulonglong *)(*(longlong *)(param_3 + 0xc0) + (ulonglong)local_res8[0] * 0x10);
      auVar33._8_4_ = 0;
      auVar33._0_8_ = uVar18;
      auVar33._12_2_ = (short)(uVar18 >> 0x30);
      auVar33._14_2_ = uVar6;
      auVar32._12_4_ = auVar33._12_4_;
      auVar32._8_2_ = 0;
      auVar32._0_8_ = uVar18;
      auVar32._10_2_ = uVar5;
      auVar31._10_6_ = auVar32._10_6_;
      auVar31._8_2_ = (short)(uVar18 >> 0x20);
      auVar31._0_8_ = uVar18;
      auVar12._4_8_ = auVar31._8_8_;
      auVar12._2_2_ = uVar4;
      auVar12._0_2_ = (short)(uVar18 >> 0x10);
      auVar27._0_4_ = CONCAT22(uVar3,(short)uVar18);
      auVar27._4_12_ = auVar12;
      auVar26._0_4_ = -(uint)(0x7fff < auVar27._0_4_);
      auVar26._4_4_ = -(uint)(0x7fff < auVar12._0_4_);
      auVar26._8_4_ = -(uint)(0x7fff < auVar31._8_4_);
      auVar26._12_4_ = -(uint)(0x7fff < auVar32._12_4_);
      auVar27 = auVar26 & _DAT_144116410 | auVar27;
      fVar46 = (float)auVar27._0_4_ * 3.051851e-05;
      fVar65 = (float)auVar27._4_4_ * 3.051851e-05;
      local_88 = (float)auVar27._8_4_ * 3.051851e-05;
    }
    iVar22 = (int)param_7[1];
    local_78 = (uint *)CONCAT44(fVar65,fVar46);
    uStack_70._0_5_ = (uint5)(uint)local_88;
    *(int *)(param_7 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_7 + 0xc) < iVar22 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_7,iVar22);
    }
    puVar23 = (undefined8 *)(*param_7 + (longlong)iVar22 * 0x10);
    *puVar23 = local_78;
    puVar23[1] = uStack_70;
    local_78 = local_res8;
    uStack_70 = &local_94;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>(param_2,local_res10,&local_78,0);
    return local_94;
  }
  return *puVar16;
}



// FUNCTION 140975980 FUN_140975980 body=7 status=ok
// SIG undefined FUN_140975980(void)

undefined4 FUN_140975980(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x738);
}



// FUNCTION 140975990 FUN_140975990 body=644 status=ok
// SIG undefined FUN_140975990(void)

undefined8 FUN_140975990(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int local_58;
  int local_54;
  
  iVar9 = 0;
  local_58 = 0;
  plVar7 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  puVar8 = (undefined8 *)plVar7[0x1f];
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(*plVar7 + 0x368))();
    puVar8 = (undefined8 *)plVar7[0x1f];
  }
  cVar1 = *(char *)((longlong)puVar8 + 0xac);
  if (cVar1 != '\0') {
    iVar11 = (int)param_2[7];
    *(int *)(param_2 + 7) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0x3c) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 6,iVar11);
    }
    puVar8 = (undefined8 *)((longlong)iVar11 * 0x10 + param_2[6]);
    *puVar8 = 0;
    puVar8[1] = 0;
  }
  local_54 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      plVar7 = (longlong *)((longlong)local_54 * 0x40 + *(longlong *)(param_1 + 0x18));
      if (*(char *)((longlong)plVar7 + 0x3c) != '\0') {
        iVar11 = 0;
        if (0 < (int)plVar7[1]) {
          lVar10 = 0;
          do {
            iVar9 = (int)param_2[1];
            lVar12 = *plVar7;
            *(int *)(param_2 + 1) = iVar9 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
            }
            lVar5 = *param_2;
            *(undefined8 *)(lVar5 + (longlong)iVar9 * 0xc) = *(undefined8 *)(lVar12 + lVar10);
            *(undefined4 *)(lVar5 + (longlong)iVar9 * 0xc + 8) =
                 *(undefined4 *)(lVar12 + 8 + lVar10);
            if (cVar1 != '\0') {
              plVar6 = (longlong *)param_2[6];
              lVar12 = *plVar7;
              iVar9 = (int)plVar6[1];
              *(int *)(plVar6 + 1) = iVar9 + 1;
              if (*(int *)((longlong)plVar6 + 0xc) < iVar9 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar9);
              }
              *(undefined8 *)(*plVar6 + (longlong)iVar9 * 8) =
                   *(undefined8 *)(lVar12 + 0x2c + lVar10);
            }
            iVar11 = iVar11 + 1;
            lVar10 = lVar10 + 0x4c;
            iVar9 = local_58;
          } while (iVar11 < (int)plVar7[1]);
        }
        iVar11 = (int)plVar7[3];
        puVar8 = (undefined8 *)
                 (((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f);
        iVar11 = iVar11 / 3 + (iVar11 >> 0x1f) + (int)puVar8;
        lVar10 = (longlong)iVar11;
        if (0 < iVar11) {
          lVar12 = 0;
          do {
            lVar5 = plVar7[2];
            iVar11 = *(int *)(lVar5 + lVar12);
            iVar2 = *(int *)(lVar5 + 8 + lVar12);
            iVar3 = *(int *)(lVar5 + 4 + lVar12);
            iVar4 = (int)param_2[3];
            *(int *)(param_2 + 3) = iVar4 + 1;
            if (*(int *)((longlong)param_2 + 0x1c) < iVar4 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2 + 2,iVar4);
            }
            lVar5 = param_2[2];
            *(ulonglong *)(lVar5 + (longlong)iVar4 * 0xc) = CONCAT44(iVar3 + iVar9,iVar11 + iVar9);
            *(int *)(lVar5 + 8 + (longlong)iVar4 * 0xc) = iVar2 + iVar9;
            iVar9 = (int)param_2[5];
            *(int *)(param_2 + 5) = iVar9 + 1;
            if (*(int *)((longlong)param_2 + 0x2c) < iVar9 + 1) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 4,iVar9);
            }
            puVar8 = (undefined8 *)param_2[4];
            lVar12 = lVar12 + 0xc;
            *(short *)((longlong)puVar8 + (longlong)iVar9 * 2) = (short)local_54;
            lVar10 = lVar10 + -1;
            iVar9 = local_58;
          } while (lVar10 != 0);
        }
        iVar9 = (int)param_2[1];
        local_58 = iVar9;
      }
      local_54 = local_54 + 1;
    } while (local_54 < *(int *)(param_1 + 0x20));
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 7;
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
}



// FUNCTION 140975c20 FUN_140975c20 body=26 status=ok
// SIG undefined FUN_140975c20(void)

longlong FUN_140975c20(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x738)) {
    return (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x730);
  }
  return 0;
}



// FUNCTION 140975c40 FUN_140975c40 body=535 status=ok
// SIG undefined FUN_140975c40(void)

void FUN_140975c40(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x738))) {
    iVar2 = (int)param_3[1];
    plVar10 = (longlong *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x730));
    iVar3 = (int)plVar10[1];
    if (iVar2 < iVar3) {
      *(int *)(param_3 + 1) = iVar3;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_3 + 1) = iVar3;
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_3);
    }
    iVar2 = (int)param_5[1];
    if (iVar2 < iVar3) {
      *(int *)(param_5 + 1) = iVar3;
      if (*(int *)((longlong)param_5 + 0xc) < iVar3) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
      }
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_5 + 1) = iVar3;
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_5);
    }
    iVar2 = (int)param_6[1];
    if (iVar2 < iVar3) {
      *(int *)(param_6 + 1) = iVar3;
      if (*(int *)((longlong)param_6 + 0xc) < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_6,iVar2);
      }
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_6 + 1) = iVar3;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_6);
    }
    iVar2 = (int)param_7[1];
    if (iVar2 < iVar3) {
      *(int *)(param_7 + 1) = iVar3;
      if (*(int *)((longlong)param_7 + 0xc) < iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_7,iVar2);
      }
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_7 + 1) = iVar3;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_7);
    }
    lVar9 = 0;
    lVar11 = lVar9;
    lVar12 = lVar9;
    lVar13 = lVar9;
    lVar14 = lVar9;
    if (0 < (longlong)iVar3) {
      do {
        lVar4 = *param_3;
        lVar12 = lVar12 + 0xc;
        puVar8 = (undefined8 *)(*plVar10 + lVar14);
        *(undefined8 *)(lVar4 + -0xc + lVar12) = *puVar8;
        *(undefined4 *)(lVar4 + -4 + lVar12) = *(undefined4 *)(puVar8 + 1);
        lVar4 = *param_5;
        *(undefined8 *)(lVar4 + -0xc + lVar12) = *(undefined8 *)((longlong)puVar8 + 0xc);
        *(undefined4 *)(lVar4 + -4 + lVar12) = *(undefined4 *)((longlong)puVar8 + 0x14);
        *(undefined8 *)(*param_6 + lVar11 * 8) = *(undefined8 *)((longlong)puVar8 + 0x2c);
        lVar11 = lVar11 + 1;
        uVar5 = *(undefined4 *)((longlong)puVar8 + 0x1c);
        uVar6 = *(undefined4 *)(puVar8 + 4);
        uVar7 = *(undefined4 *)((longlong)puVar8 + 0x24);
        puVar1 = (undefined4 *)(lVar13 + *param_7);
        *puVar1 = *(undefined4 *)(puVar8 + 3);
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        lVar13 = lVar13 + 0x10;
        lVar14 = lVar14 + 0x4c;
      } while (lVar11 < iVar3);
    }
    iVar2 = (int)plVar10[3];
    iVar3 = (int)param_4[1];
    if (iVar3 < iVar2) {
      *(int *)(param_4 + 1) = iVar2;
      if (*(int *)((longlong)param_4 + 0xc) < iVar2) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
      }
    }
    else if ((iVar2 < iVar3) && (iVar2 != iVar3)) {
      *(int *)(param_4 + 1) = iVar2;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_4);
    }
    if (0 < (longlong)iVar2) {
      do {
        *(undefined4 *)(*param_4 + lVar9 * 4) = *(undefined4 *)(plVar10[2] + lVar9 * 4);
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar2);
    }
  }
  return;
}



// FUNCTION 140975e60 FUN_140975e60 body=1769 status=ok
// SIG undefined FUN_140975e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140975e60(longlong param_1,int param_2,int param_3,longlong param_4,longlong *param_5,
                  longlong param_6,longlong param_7,longlong param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  longlong local_218;
  int local_208;
  longlong local_200;
  undefined1 local_1f8 [8];
  longlong local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  char local_1a4;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [40];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1e8 = param_6;
  local_1f0 = param_7;
  if (param_1 != 0) {
    local_208 = param_3;
    local_200 = param_4;
    if (*(char *)(param_1 + 0xb4) == '\0') {
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_e8,
                          L"but \'Allow CPU Access\' is not enabled. This is required for converting StaticMesh to ProceduralMeshComponent in cooked builds."
                          ,L"KismetProcMeshLibrary",L"GetSectionFromStaticMeshEnd");
      puVar12 = (undefined8 *)FUN_140973510(local_140,uVar11);
      local_1c0 = *puVar12;
      local_1b8 = (longlong *)puVar12[1];
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
        UNLOCK();
      }
      uVar11 = FText::FText(local_100);
      puVar12 = (undefined8 *)FUN_1416ed870(local_150,param_1,uVar11);
      local_1d0 = *puVar12;
      local_1c8 = (longlong *)puVar12[1];
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
        UNLOCK();
      }
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_118,L"Calling GetSectionFromStaticMesh on",L"KismetProcMeshLibrary",
                          L"GetSectionFromStaticMeshStart");
      puVar12 = (undefined8 *)FUN_140973510(local_160,uVar11);
      local_1e0 = *puVar12;
      local_1d8 = (longlong *)puVar12[1];
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
        UNLOCK();
      }
      FName::FName(local_1f8,&DAT_144171578,1);
      uVar11 = FText::FText(local_130);
      uVar13 = FUN_14161fb50(local_d0,local_1f8);
      puVar12 = (undefined8 *)FMessageLog::Warning(uVar13,local_170,uVar11);
      puVar12 = (undefined8 *)FUN_141621960(*puVar12,local_180,&local_1e0);
      puVar12 = (undefined8 *)FUN_141621960(*puVar12,local_190,&local_1d0);
      FUN_141621960(*puVar12,local_1a0,&local_1c0);
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_198 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)local_198 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_188 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar1 = (int *)((longlong)local_188 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_188 + 8))(local_188,1);
          }
        }
      }
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_178 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar1 = (int *)((longlong)local_178 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_168 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar1 = (int *)((longlong)local_168 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
      FMessageLog::~FMessageLog(local_d0);
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_128 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      plVar7 = local_1d8;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1d8 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_1d8)(local_1d8);
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
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_158 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar1 = (int *)((longlong)local_158 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
          }
        }
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_110 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      plVar7 = local_1c8;
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1c8 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_1c8)(local_1c8);
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
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_148 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_f8 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar1 = (int *)((longlong)local_f8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
          }
        }
      }
      plVar7 = local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1b8 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_1b8)(local_1b8);
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
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_138 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_e0 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
    }
    iVar4 = local_208;
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((((plVar7 != (longlong *)0x0) && (-1 < param_2)) && (param_2 < (int)plVar7[1])) &&
       ((lVar9 = *(longlong *)(*plVar7 + (longlong)param_2 * 8), -1 < local_208 &&
        (local_208 < *(int *)(lVar9 + 0x480))))) {
      *(undefined4 *)(local_200 + 8) = 0;
      if (0x7fffffff < *(uint *)(local_200 + 0xc)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (local_200,0);
      }
      *(undefined4 *)(param_5 + 1) = 0;
      if ((*(int *)((longlong)param_5 + 0xc) < 0) && (*(int *)((longlong)param_5 + 0xc) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_5,0);
      }
      *(undefined4 *)(param_6 + 8) = 0;
      if ((*(int *)(param_6 + 0xc) < 0) && (*(int *)(param_6 + 0xc) != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_6,0);
      }
      *(undefined4 *)(param_7 + 8) = 0;
      if ((*(int *)(param_7 + 0xc) < 0) && (*(int *)(param_7 + 0xc) != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_7,0);
      }
      *(undefined4 *)(param_8 + 8) = 0;
      if ((*(int *)(param_8 + 0xc) < 0) && (*(int *)(param_8 + 0xc) != 0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_8,0);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_74 = 0;
      local_68 = 0;
      local_60 = 0;
      local_78 = 0xffffffff;
      lVar3 = *(longlong *)(lVar9 + 0x478) + (longlong)iVar4 * 0x18;
      iVar4 = *(int *)(*(longlong *)(lVar9 + 0x478) + 8 + (longlong)iVar4 * 0x18);
      iVar5 = *(int *)(lVar3 + 4);
      FUN_14272be40(lVar9 + 0x208,&local_1b0);
      uVar15 = *(uint *)(lVar3 + 4);
      lVar3 = local_228;
      lVar8 = local_220;
      local_228 = param_6;
      local_220 = param_7;
      for (; uVar15 < (uint)(iVar4 * 3 + iVar5); uVar15 = uVar15 + 1) {
        if (local_1a4 == '\0') {
          uVar14 = (uint)*(ushort *)(local_1b0 + (longlong)(int)uVar15 * 2);
        }
        else {
          uVar14 = *(uint *)(local_1b0 + (longlong)(int)uVar15 * 4);
        }
        local_218 = param_8;
        uVar10 = FUN_1409753f0(uVar14,&local_a8,lVar9,local_200);
        iVar6 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        *(undefined4 *)(*param_5 + (longlong)iVar6 * 4) = uVar10;
        lVar3 = local_228;
        lVar8 = local_220;
        local_228 = local_1e8;
        local_220 = local_1f0;
      }
      local_60 = 0;
      local_228 = lVar3;
      local_220 = lVar8;
      if (local_68 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_a8);
    }
  }
  return;
}



// FUNCTION 140976550 GetType body=6 status=ok
// SIG undefined GetType(void)

undefined8 FTextToken::GetType(void)

{
  return 6;
}



// FUNCTION 140976570 GetUnitAxis body=370 status=ok
// SIG undefined GetUnitAxis(void)

float * FMatrix::GetUnitAxis(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = DAT_1468b5d98;
  if (param_3 == 1) {
    fVar4 = *param_1;
    fVar5 = param_1[1];
    fVar6 = param_1[2];
  }
  else if (param_3 == 2) {
    fVar4 = param_1[4];
    fVar5 = param_1[5];
    fVar6 = param_1[6];
  }
  else {
    fVar4 = DAT_1468b5d90;
    fVar5 = DAT_1468b5d94;
    fVar6 = DAT_1468b5d98;
    if (param_3 == 3) {
      fVar4 = param_1[8];
      fVar5 = param_1[9];
      fVar6 = param_1[10];
    }
  }
  fVar1 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
  if (fVar1 == 1.0) {
    *(ulonglong *)param_2 = CONCAT44(fVar5,fVar4);
    param_2[2] = fVar6;
  }
  else if (1e-08 <= fVar1) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    *param_2 = fVar2 * fVar4;
    param_2[1] = fVar2 * fVar5;
    param_2[2] = fVar2 * fVar6;
  }
  else {
    *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    param_2[2] = fVar2;
  }
  return param_2;
}



// FUNCTION 1409766f0 FUN_1409766f0 body=207 status=ok
// SIG undefined FUN_1409766f0(void)

undefined8 * FUN_1409766f0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10;
  bVar1 = FUN_142730880(param_1,param_3);
  uVar2 = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar1 << 0xb | 0x200;
  *(uint *)((longlong)param_2 + 4) = uVar2;
  uVar2 = ((*(uint *)(param_1 + 0x18) >> 0x15 & 0xff) << 0xd ^ uVar2) & 0x2000 ^ uVar2;
  *(uint *)((longlong)param_2 + 4) = uVar2;
  uVar3 = 0;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    uVar3 = 0x100000;
  }
  uVar3 = uVar3 | uVar2 & 0xffefffff;
  *(uint *)((longlong)param_2 + 4) = uVar3;
  *(uint *)((longlong)param_2 + 4) =
       ((*(uint *)(param_1 + 0x20) >> 1 & 0xff) << 0xc ^ uVar3) & 0x1000 ^ uVar3;
  FUN_1425a2630(param_1 + 0x3b8,param_2);
  return param_2;
}



// FUNCTION 1409767c0 FUN_1409767c0 body=772 status=ok
// SIG undefined FUN_1409767c0(void)

undefined8 * FUN_1409767c0(undefined8 *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  uVar8 = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[3] = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x29) = 0xffff;
  *(undefined1 *)(param_1 + 5) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x2b) = 0xff;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  iVar6 = _isnan((double)param_4);
  if ((iVar6 == 0) && (iVar6 = _finite((double)param_4), iVar6 != 0)) {
    fVar1 = param_3[2];
    fVar2 = param_2[2];
    fVar3 = param_2[2];
    *param_1 = CONCAT44((param_3[1] - param_2[1]) * param_4 + param_2[1],
                        (*param_3 - *param_2) * param_4 + *param_2);
    *(float *)(param_1 + 1) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[5];
    fVar2 = param_2[5];
    fVar3 = param_2[5];
    *(ulonglong *)((longlong)param_1 + 0xc) =
         CONCAT44((param_3[4] - param_2[4]) * param_4 + param_2[4],
                  (param_3[3] - param_2[3]) * param_4 + param_2[3]);
    *(float *)((longlong)param_1 + 0x14) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[8];
    fVar2 = param_2[8];
    fVar3 = param_2[8];
    param_1[3] = CONCAT44((param_3[7] - param_2[7]) * param_4 + param_2[7],
                          (param_3[6] - param_2[6]) * param_4 + param_2[6]);
    *(float *)(param_1 + 4) = (fVar1 - fVar2) * param_4 + fVar3;
    *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)(param_2 + 9);
    fVar1 = param_3[0xb];
    fVar2 = param_2[0xb];
    fVar3 = param_2[0xb];
    *(float *)(param_1 + 6) = (param_3[0xc] - param_2[0xc]) * param_4 + param_2[0xc];
    *(float *)((longlong)param_1 + 0x2c) = (fVar1 - fVar2) * param_4 + fVar3;
    iVar6 = (int)(((float)*(byte *)((longlong)param_3 + 0x2a) -
                  (float)*(byte *)((longlong)param_2 + 0x2a)) * param_4 +
                 (float)*(byte *)((longlong)param_2 + 0x2a));
    uVar5 = uVar8;
    if ((-1 < iVar6) && (uVar5 = 0xff, iVar6 < 0xff)) {
      uVar5 = (char)iVar6;
    }
    *(undefined1 *)((longlong)param_1 + 0x2a) = uVar5;
    iVar6 = (int)(((float)*(byte *)((longlong)param_3 + 0x29) -
                  (float)*(byte *)((longlong)param_2 + 0x29)) * param_4 +
                 (float)*(byte *)((longlong)param_2 + 0x29));
    uVar5 = uVar8;
    if ((-1 < iVar6) && (uVar5 = 0xff, iVar6 < 0xff)) {
      uVar5 = (char)iVar6;
    }
    *(undefined1 *)((longlong)param_1 + 0x29) = uVar5;
    iVar6 = (int)(((float)*(byte *)(param_3 + 10) - (float)*(byte *)(param_2 + 10)) * param_4 +
                 (float)*(byte *)(param_2 + 10));
    if ((-1 < iVar6) && (uVar8 = 0xff, iVar6 < 0xff)) {
      uVar8 = (undefined1)iVar6;
    }
    *(undefined1 *)(param_1 + 5) = uVar8;
    iVar7 = (int)(((float)*(byte *)((longlong)param_3 + 0x2b) -
                  (float)*(byte *)((longlong)param_2 + 0x2b)) * param_4 +
                 (float)*(byte *)((longlong)param_2 + 0x2b));
    iVar6 = 0;
    if ((-1 < iVar7) && (iVar6 = 0xff, iVar7 < 0xff)) {
      iVar6 = iVar7;
    }
    *(char *)((longlong)param_1 + 0x2b) = (char)iVar6;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 2);
    *param_1 = *(undefined8 *)param_3;
    param_1[1] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 6);
    param_1[2] = *(undefined8 *)(param_3 + 4);
    param_1[3] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 10);
    param_1[4] = *(undefined8 *)(param_3 + 8);
    param_1[5] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0xe);
    param_1[6] = *(undefined8 *)(param_3 + 0xc);
    param_1[7] = uVar4;
    param_1[8] = *(undefined8 *)(param_3 + 0x10);
    *(float *)(param_1 + 9) = param_3[0x12];
  }
  return param_1;
}



// FUNCTION 140976ad0 FUN_140976ad0 body=31 status=ok
// SIG undefined FUN_140976ad0(void)

ulonglong FUN_140976ad0(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  
  if (param_2 < *(int *)(param_1 + 0x738)) {
    return (ulonglong)*(byte *)((longlong)param_2 * 0x40 + 0x3d + *(longlong *)(param_1 + 0x730));
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140976af0 FUN_140976af0 body=253 status=ok
// SIG undefined FUN_140976af0(void)

undefined8 * FUN_140976af0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  plVar6 = (longlong *)0x0;
  if (param_3 != plVar1) {
    if (((int)param_3[1] == 0) || (plVar5 = (longlong *)*param_3, plVar5 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x20) != 0) &&
         (plVar5 = (longlong *)*plVar1, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar5 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar1[1];
    bVar7 = iVar3 == 0;
    if (bVar7) {
      *(int *)(plVar1 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar3 == (int)plVar1[1];
      if (bVar7) {
        *(int *)(plVar1 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar1[1];
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(plVar1 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = plVar6;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return param_2;
}



// FUNCTION 140976bf0 FUN_140976bf0 body=58 status=ok
// SIG undefined FUN_140976bf0(void)

void FUN_140976bf0(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  
  FUN_1423945d0();
  if (*(longlong *)(param_1 + 0x728) != 0) {
    cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if (cVar2 != '\0') {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x728) + 8);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}



// FUNCTION 140976c30 RemoveAtImpl body=198 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FProcMeshSection,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x40);
    iVar3 = param_3;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x40),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + *param_1),(longlong)iVar1 << 6);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140976d00 Reset body=104 status=ok
// SIG undefined Reset(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FProcMeshSection::Reset(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    TArray<FProcMeshVertex,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  *(undefined8 *)(param_1 + 0x2c) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x34) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0x100;
  return;
}



// FUNCTION 140976d70 FUN_140976d70 body=124 status=ok
// SIG undefined FUN_140976d70(void)

void FUN_140976d70(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x4c,0);
    iVar3 = (int)(uVar1 / 0x4c);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x4c,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140976df0 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FProcMeshVertex,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x4c,0);
  iVar4 = (int)(uVar3 / 0x4c);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x4c,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140976e80 ResizeTo body=112 status=ok
// SIG undefined ResizeTo(void)

void TArray<FProcMeshVertex,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x4c,0);
    iVar3 = (int)(uVar1 / 0x4c);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x4c,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140976ef0 FUN_140976ef0 body=602 status=ok
// SIG undefined FUN_140976ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140976ef0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Src;
  undefined8 *puVar2;
  void **ppvVar3;
  int iVar4;
  uint uVar5;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined1 local_140 [40];
  undefined **local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  byte local_fc;
  undefined4 local_f8;
  undefined ***local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uVar6;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar1 = (longlong *)(param_1 + 0x740);
  uVar6 = 0;
  local_148 = param_1;
  if (*(int *)(param_1 + 0x74c) < 0) {
    FUN_140973e50(plVar1,0);
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    for (iVar4 = *(int *)(param_1 + 0x748); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar2[0xc] != 0) {
        FMemory::Free();
      }
      *puVar2 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar2[10] != 0) {
        FMemory::Free();
      }
      puVar2 = puVar2 + 0x1a;
    }
    *(undefined4 *)(param_1 + 0x748) = 0;
  }
  lVar7 = param_1;
  uVar8 = uVar6;
  if (0 < (int)param_2[1]) {
    do {
      local_f0 = &local_118;
      local_fc = local_fc | 1;
      uStack_9c = (undefined4)_DAT_1468b5d90;
      uStack_98 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
      local_a8 = _DAT_1468b5d90;
      local_118 = &PTR_FUN_1440fbd68;
      uStack_94 = DAT_1468b5d98;
      ppvVar3 = (void **)(*param_2 + uVar8);
      uStack_a0 = DAT_1468b5d98;
      local_88 = _DAT_1468b5b70;
      uStack_80 = uRam00000001468b5b78;
      local_78 = _DAT_1468b5b80;
      uStack_70 = uRam00000001468b5b88;
      local_68 = _DAT_1468b5b90;
      uStack_64 = uRam00000001468b5b94;
      uStack_60 = uRam00000001468b5b98;
      uStack_5c = uRam00000001468b5b9c;
      local_110 = 0;
      local_108 = 0;
      local_100 = 3;
      local_f8 = 6;
      local_e8 = 3;
      local_e0 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_90 = local_90 & 0xffffff00;
      local_58 = 0;
      uStack_50 = 0;
      if (&local_b8 != ppvVar3) {
        uVar5 = *(uint *)(ppvVar3 + 1);
        _Src = *ppvVar3;
        local_b0 = (ulonglong)uVar5;
        if (uVar5 != 0) {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_b8,uVar5,0);
          _guard_xfg_dispatch_icall_nop(local_b8,_Src,(longlong)(int)uVar5 * 0xc);
        }
      }
      puVar2 = (undefined8 *)FBox::FBox(local_140,&local_b8);
      iVar4 = *(int *)(param_1 + 0x748);
      local_a8 = *puVar2;
      uStack_a0 = *(undefined4 *)(puVar2 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
      uStack_98 = (undefined4)puVar2[2];
      uStack_94 = (undefined4)((ulonglong)puVar2[2] >> 0x20);
      local_90 = *(uint *)(puVar2 + 3);
      *(int *)(param_1 + 0x748) = iVar4 + 1;
      if (*(int *)(param_1 + 0x74c) < iVar4 + 1) {
        TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
      }
      FUN_14080b9e0((longlong)iVar4 * 0xd0 + *plVar1,&local_118);
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
      }
      local_118 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (local_c8 != 0) {
        FMemory::Free();
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar7 = local_148;
      uVar8 = uVar8 + 0x10;
    } while ((int)uVar5 < (int)param_2[1]);
  }
  FUN_140979fa0(lVar7);
  return;
}



// FUNCTION 140977150 FUN_140977150 body=596 status=ok
// SIG undefined FUN_140977150(void)

void FUN_140977150(longlong param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 < *(int *)(param_1 + 0x738)) {
    *(undefined1 *)((longlong)param_2 * 0x40 + 0x3d + *(longlong *)(param_1 + 0x730)) = param_3;
    lVar11 = *(longlong *)(param_1 + 0x640);
    if (lVar11 != 0) {
      if (DAT_146ac3ac5 == '\0') {
        cVar3 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
           (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
          lVar11 = *(longlong *)(param_1 + 0x640);
          FBaseGraphTask::GetSmallTaskAllocator();
          QueryPerformanceCounter(&local_48);
          if ((param_2 < *(int *)(lVar11 + 0x3a8)) &&
             (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x3a0) + (longlong)param_2 * 8),
             lVar11 != 0)) {
            *(undefined1 *)(lVar11 + 0x9d0) = param_3;
          }
          QueryPerformanceCounter(&local_res20);
          DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_48._0_4_);
          return;
        }
        lVar11 = *(longlong *)(param_1 + 0x640);
      }
      pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar6 = TlsGetValue(*pDVar5);
      plVar9 = (longlong *)0x0;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)operator_new(0x18);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = 0;
          plVar6[1] = 0;
          *(undefined4 *)(plVar6 + 2) = 0;
          plVar9 = plVar6;
        }
        TlsSetValue(*pDVar5,plVar9);
        plVar6 = plVar9;
      }
      plVar9 = (longlong *)plVar6[1];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)*plVar6;
        if (plVar9 == (longlong *)0x0) {
          lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
          plVar6[1] = lVar7;
          if (lVar7 == 0) {
            puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar6[1] = (longlong)puVar8;
            lVar7 = 0x1f;
            do {
              puVar2 = puVar8 + 0x20;
              *puVar8 = puVar2;
              lVar7 = lVar7 + -1;
              puVar8 = puVar2;
            } while (lVar7 != 0);
            *puVar2 = 0;
          }
          plVar9 = (longlong *)plVar6[1];
          iVar10 = 0x20;
          *(undefined4 *)(plVar6 + 2) = 0x20;
        }
        else {
          iVar10 = 0x20;
          plVar6[1] = (longlong)plVar9;
          *(undefined4 *)(plVar6 + 2) = 0x20;
          *plVar6 = 0;
        }
      }
      else {
        iVar10 = (int)plVar6[2];
      }
      plVar6[1] = *plVar9;
      *(int *)(plVar6 + 2) = iVar10 + -1;
      *plVar9 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar9 + 1) = 0xff;
      local_40 = 0;
      local_38 = 0;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *(undefined1 *)(plVar9 + 4) = 0;
      *plVar9 = (longlong)&PTR_FUN_1441726c8;
      plVar9[5] = 0;
      plVar9[2] = lVar11;
      *(int *)(plVar9 + 3) = param_2;
      *(undefined1 *)((longlong)plVar9 + 0x1c) = param_3;
      lVar11 = plVar9[5];
      piVar1 = (int *)(lVar11 + 0x48);
      if (lVar11 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(plVar9,0,0xff,1);
      if (lVar11 != 0) {
        LOCK();
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle(lVar11);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409773b0 SetNum body=195 status=ok
// SIG undefined SetNum(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TArray<FProcMeshSection,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar1 = (int)param_1[1];
  iVar4 = (int)param_2;
  if (iVar1 < iVar4) {
    iVar6 = iVar4 - iVar1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    if (iVar6 != 0) {
      puVar3 = (undefined8 *)((longlong)puVar5 + 0x2c);
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 8;
        *(undefined8 *)((longlong)puVar3 + -0x24) = 0;
        *(undefined8 *)((longlong)puVar3 + -0x1c) = 0;
        *(undefined8 *)((longlong)puVar3 + -0x14) = 0;
        *puVar3 = _DAT_1468b5d90;
        uVar2 = DAT_1468b5d98;
        *(undefined4 *)(puVar3 + 1) = DAT_1468b5d98;
        *(undefined8 *)((longlong)puVar3 + -0xc) = *puVar3;
        *(undefined4 *)((longlong)puVar3 + -4) = uVar2;
        *(undefined1 *)((longlong)puVar3 + 0xc) = 0;
        *(undefined2 *)(puVar3 + 2) = 0x100;
        iVar6 = iVar6 + -1;
        puVar3 = puVar3 + 8;
      } while (iVar6 != 0);
    }
  }
  else if (iVar4 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar4,param_3);
    return;
  }
  return;
}



// FUNCTION 140977480 FUN_140977480 body=162 status=ok
// SIG undefined FUN_140977480(void)

void FUN_140977480(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x738) <= param_2) {
    TArray<FProcMeshSection,FDefaultAllocator>::SetNum(param_1 + 0x730,param_2 + 1,0);
  }
  lVar4 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x730);
  FUN_140970760(lVar4,param_3);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar4 + 0x10,param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 0x24);
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  uVar3 = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(lVar4 + 0x24) = uVar1;
  *(undefined4 *)(lVar4 + 0x28) = uVar2;
  *(undefined4 *)(lVar4 + 0x2c) = uVar3;
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)(lVar4 + 0x3c) = *(undefined1 *)(param_3 + 0x3c);
  *(undefined1 *)(lVar4 + 0x3d) = *(undefined1 *)(param_3 + 0x3d);
  FUN_14097a170(param_1);
  FUN_140979fa0(param_1);
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 140977530 FUN_140977530 body=599 status=ok
// SIG undefined FUN_140977530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140977530(longlong param_1,uint *param_2,void **param_3)

{
  uint uVar1;
  ulonglong uVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  uint local_128;
  uint uStack_124;
  uint local_120;
  undefined **local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  byte local_fc;
  undefined4 local_f8;
  undefined ***local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138 = 0;
  local_130 = 0;
  FUN_1423123c0(param_1,&local_138);
  uVar2 = local_130;
  lVar6 = (longlong)(int)local_130;
  if (3 < (int)local_130) {
    iVar4 = (int)local_130 + 1;
    local_128 = *param_2 ^ 0x80000000;
    local_120 = param_2[2] ^ 0x80000000;
    uStack_124 = param_2[1] ^ 0x80000000;
    uVar1 = param_2[3];
    local_130 = CONCAT44(local_130._4_4_,iVar4);
    if (local_130._4_4_ < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,uVar2 & 0xffffffff);
    }
    puVar5 = (undefined8 *)(lVar6 * 0x10 + local_138);
    *puVar5 = CONCAT44(uStack_124,local_128);
    *(uint *)(puVar5 + 1) = local_120;
    local_f0 = &local_118;
    *(uint *)((longlong)puVar5 + 0xc) = uVar1 ^ 0x80000000;
    local_fc = local_fc | 1;
    local_110 = 0;
    local_9c = _DAT_1468b5d90;
    local_a8 = _DAT_1468b5d90;
    local_88 = _DAT_1468b5b70;
    uStack_80 = uRam00000001468b5b78;
    local_78 = _DAT_1468b5b80;
    uStack_70 = uRam00000001468b5b88;
    local_118 = &PTR_FUN_1440fbd68;
    local_68 = _DAT_1468b5b90;
    uStack_64 = uRam00000001468b5b94;
    uStack_60 = uRam00000001468b5b98;
    uStack_5c = uRam00000001468b5b9c;
    local_108 = 0;
    local_100 = 3;
    local_f8 = 6;
    local_e8 = 3;
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_94 = DAT_1468b5d98;
    local_a0 = DAT_1468b5d98;
    local_90 = 0;
    local_58 = 0;
    uStack_50 = 0;
    cVar3 = FUN_142313730(&local_118,&local_138,param_1 + 0x60);
    _Src = local_b8;
    if ((cVar3 != '\0') && (param_3 != &local_b8)) {
      lVar6 = (longlong)(int)local_b0;
      *(int *)(param_3 + 1) = (int)local_b0;
      if (((int)local_b0 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_3,local_b0 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_3,_Src,lVar6 * 0xc);
      }
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    local_118 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (local_c8 != 0) {
      FMemory::Free();
    }
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140977790 FUN_140977790 body=8160 status=ok
// SIG undefined FUN_140977790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140977790(longlong *param_1,float *param_2,float *param_3,char param_4,longlong *param_5,
                  char param_6,longlong param_7)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 *puVar23;
  uint uVar24;
  int *piVar25;
  longlong *plVar26;
  float *pfVar27;
  int *piVar28;
  longlong *plVar29;
  uint **ppuVar30;
  void *pvVar31;
  longlong *plVar32;
  uint uVar33;
  undefined4 *puVar34;
  ulonglong uVar35;
  int iVar36;
  undefined1 *puVar37;
  longlong *plVar38;
  undefined4 *puVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 in_XMM3 [16];
  undefined1 auVar47 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  undefined1 auVar57 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auStack_438 [32];
  uint local_418;
  undefined8 local_410;
  undefined1 local_408;
  undefined8 local_400;
  undefined1 local_3f8;
  char local_3e8;
  int local_3e4;
  uint local_3e0;
  int local_3dc;
  int local_3d8;
  longlong local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  uint local_390;
  undefined2 local_38c;
  int local_388;
  undefined8 local_378;
  undefined8 uStack_370;
  longlong *local_368;
  undefined8 local_360;
  longlong local_358;
  undefined8 local_350;
  longlong local_348;
  longlong *local_340;
  longlong local_338;
  undefined8 *local_330;
  int local_328;
  int local_324;
  int local_320 [2];
  undefined4 *local_318;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined4 *local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined4 *local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 local_2a8;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  uint uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  int local_278 [2];
  longlong local_270;
  ulonglong local_268;
  float fStack_260;
  float fStack_25c;
  longlong local_258;
  longlong *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  undefined4 local_230;
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  uint *local_208;
  int *local_200;
  uint *local_1f8;
  int *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [8];
  undefined1 *local_1a8;
  int local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  undefined8 local_148;
  float local_140;
  int local_13c;
  undefined8 local_138;
  ulonglong local_130;
  undefined4 *local_128 [2];
  undefined4 *local_118;
  int aiStack_114 [9];
  undefined4 *local_f0 [3];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  local_250 = param_5;
  local_338 = param_7;
  if (param_1 != (longlong *)0x0) {
    auVar57 = *(undefined1 (*) [16])(param_1 + 0x46);
    fVar2 = auVar57._4_4_;
    fVar41 = auVar57._12_4_;
    auVar47 = rcpps(in_XMM3,auVar57);
    fVar52 = (float)((uint)(*param_2 - *(float *)(param_1 + 0x44)) & _DAT_146864120);
    fVar53 = (float)((uint)(param_2[1] - *(float *)((longlong)param_1 + 0x224)) &
                    uRam0000000146864124);
    fVar54 = (float)((uint)(param_2[2] - *(float *)(param_1 + 0x45)) & uRam0000000146864128);
    fVar55 = (float)((uint)(0.0 - *(float *)((longlong)param_1 + 0x22c)) & uRam000000014686412c);
    fVar59 = *(float *)(param_1 + 0x42) * _DAT_146864110;
    fVar60 = *(float *)((longlong)param_1 + 0x214) * fRam0000000146864114;
    fVar61 = *(float *)(param_1 + 0x43) * fRam0000000146864118;
    fVar62 = *(float *)((longlong)param_1 + 0x21c) * fRam000000014686411c;
    fVar40 = fVar54 * fVar60 - fVar53 * fVar61;
    fVar42 = fVar52 * fVar61 - fVar54 * fVar59;
    fVar43 = fVar53 * fVar59 - fVar52 * fVar60;
    fVar44 = fVar55 * fVar62 - fVar55 * fVar62;
    fVar45 = auVar47._0_4_;
    fVar48 = auVar47._4_4_;
    fVar46 = auVar47._8_4_;
    fVar49 = auVar47._12_4_;
    fVar40 = fVar40 + fVar40;
    fVar42 = fVar42 + fVar42;
    fVar43 = fVar43 + fVar43;
    fVar44 = fVar44 + fVar44;
    fVar56 = auVar57._0_4_;
    fVar58 = auVar57._8_4_;
    fVar45 = (fVar45 + fVar45) - fVar45 * fVar45 * fVar56;
    fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * fVar2;
    fVar50 = (fVar46 + fVar46) - fVar46 * fVar46 * fVar58;
    fVar51 = (fVar49 + fVar49) - fVar49 * fVar49 * fVar41;
    fVar46 = (fVar45 + fVar45) - fVar45 * fVar45 * fVar56;
    fVar49 = (fVar48 + fVar48) - fVar48 * fVar48 * fVar2;
    fVar50 = (fVar50 + fVar50) - fVar50 * fVar50 * fVar58;
    fVar51 = (fVar51 + fVar51) - fVar51 * fVar51 * fVar41;
    fVar45 = param_3[2];
    fVar48 = *param_3;
    fVar46 = ((fVar43 * fVar60 - fVar42 * fVar61) + fVar62 * fVar40 + fVar52) *
             (float)(-(uint)((float)((uint)fVar56 & _DAT_146864100) <= _DAT_1468640f0) &
                     (uint)fVar46 ^ (uint)fVar46);
    fVar49 = ((fVar40 * fVar61 - fVar43 * fVar59) + fVar62 * fVar42 + fVar53) *
             (float)(-(uint)((float)((uint)fVar2 & uRam0000000146864104) <= fRam00000001468640f4) &
                     (uint)fVar49 ^ (uint)fVar49);
    fVar43 = ((fVar42 * fVar59 - fVar40 * fVar60) + fVar62 * fVar43 + fVar54) *
             (float)(-(uint)((float)((uint)fVar58 & uRam0000000146864108) <= fRam00000001468640f8) &
                     (uint)fVar50 ^ (uint)fVar50);
    local_378 = (void *)CONCAT44(fVar49,fVar46);
    uStack_370 = CONCAT44(((fVar44 * fVar62 - fVar44 * fVar62) + fVar62 * fVar44 + fVar55) *
                          (float)(-(uint)((float)((uint)fVar41 & uRam000000014686410c) <=
                                         fRam00000001468640fc) & (uint)fVar51 ^ (uint)fVar51),fVar43
                         );
    fVar2 = param_3[1];
    fVar41 = fVar45 * fVar60 - fVar2 * fVar61;
    fVar40 = fVar48 * fVar61 - fVar45 * fVar59;
    fVar42 = fVar2 * fVar59 - fVar48 * fVar60;
    fVar41 = fVar41 + fVar41;
    fVar40 = fVar40 + fVar40;
    fVar42 = fVar42 + fVar42;
    local_308 = (fVar42 * fVar60 - fVar40 * fVar61) + fVar62 * fVar41 + fVar48;
    fStack_304 = (fVar41 * fVar61 - fVar42 * fVar59) + fVar62 * fVar40 + fVar2;
    local_140 = (fVar40 * fVar59 - fVar41 * fVar60) + fVar62 * fVar42 + fVar45;
    fVar45 = fStack_304 * fStack_304 + local_308 * local_308 + local_140 * local_140;
    if (fVar45 != 1.0) {
      if (1e-08 <= fVar45) {
        auVar57 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
        fVar48 = auVar57._0_4_;
        fVar48 = fVar48 + fVar48 * (0.5 - fVar45 * 0.5 * fVar48 * fVar48);
        fVar48 = fVar48 + fVar48 * (0.5 - fVar45 * 0.5 * fVar48 * fVar48);
        local_318 = (undefined4 *)CONCAT44(local_318._4_4_,fVar48);
        local_308 = fVar48 * local_308;
        local_140 = fVar48 * local_140;
        fStack_304 = fVar48 * fStack_304;
      }
      else {
        local_140 = DAT_1468b5d98;
        fStack_304 = DAT_1468b5d94;
        local_308 = DAT_1468b5d90;
      }
    }
    iVar9 = (int)param_1[0xe7];
    local_368 = (longlong *)CONCAT44(fStack_304,local_308);
    local_360 = CONCAT44(local_360._4_4_,local_140);
    local_348 = 0;
    local_358 = 0;
    local_3e4 = 0;
    local_350 = 0;
    local_330 = (undefined8 *)0x0;
    fStack_2fc = fVar49 * fStack_304 + fVar46 * local_308 + fVar43 * local_140;
    local_388 = 0;
    local_324 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_3dc = 0;
    local_3e8 = param_4;
    local_340 = param_1;
    fStack_300 = local_140;
    if (0 < iVar9) {
      do {
        iVar36 = local_3dc;
        iVar10 = local_3e4;
        plVar26 = (longlong *)0x0;
        if (local_3dc < iVar9) {
          local_268 = (longlong)local_3dc * 0x40;
          plVar32 = (longlong *)(param_1[0xe6] + local_268);
          local_2f0 = plVar32;
          if (((plVar32 != (longlong *)0x0) && (0 < (int)plVar32[3])) && (0 < (int)plVar32[1])) {
            local_248 = (undefined4)plVar32[4];
            uStack_244 = *(undefined4 *)((longlong)plVar32 + 0x24);
            uStack_240 = (undefined4)plVar32[5];
            uStack_23c = *(undefined4 *)((longlong)plVar32 + 0x2c);
            local_230 = (undefined4)plVar32[7];
            local_238 = plVar32[6];
            iVar9 = BoxPlaneCompare(&local_248,&local_308);
            if (iVar9 == -1) {
              if (param_4 != '\0') {
                local_3e4 = iVar10 + 1;
                local_350 = CONCAT44(local_350._4_4_,local_3e4);
                if (local_350._4_4_ < local_3e4) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_358,iVar10);
                  local_3e4 = (int)local_350;
                  local_348 = local_358;
                }
                FProcMeshSection::FProcMeshSection((longlong)iVar10 * 0x40 + local_348,plVar32);
                uVar12 = (**(code **)(*param_1 + 0x560))(param_1,iVar36);
                iVar9 = local_388;
                lVar20 = (longlong)local_388;
                local_388 = local_388 + 1;
                local_328 = local_388;
                if (local_324 < local_388) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_330,iVar9);
                }
                local_330[lVar20] = uVar12;
                param_1 = local_340;
                local_388 = local_328;
              }
              FUN_140972a40(param_1,iVar36);
            }
            else if (iVar9 != 1) {
              local_3a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              fStack_39c = DAT_1468b5d90;
              fStack_398 = DAT_1468b5d94;
              local_3c8 = 0;
              local_3c0 = 0;
              local_3b8 = 0;
              local_3b0 = 0;
              fStack_394 = DAT_1468b5d98;
              fStack_3a0 = DAT_1468b5d98;
              local_390 = local_390 & 0xffffff00;
              local_38c = 0x100;
              plVar21 = plVar26;
              if (param_4 != '\0') {
                fStack_29c = DAT_1468b5d90;
                fStack_298 = DAT_1468b5d94;
                fStack_294 = DAT_1468b5d98;
                local_3e4 = iVar10 + 1;
                fStack_2a0 = DAT_1468b5d98;
                uStack_290 = uStack_290 & 0xffffff00;
                local_350 = CONCAT44(local_350._4_4_,local_3e4);
                local_2a8 = local_3a8;
                if (local_350._4_4_ < local_3e4) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_358,iVar10);
                  local_3e4 = (int)local_350;
                  local_348 = local_358;
                }
                plVar21 = (longlong *)((longlong)iVar10 * 0x40 + local_348);
                *plVar21 = 0;
                plVar21[1] = 0;
                plVar21[2] = 0;
                plVar21[3] = 0;
                *(undefined4 *)(plVar21 + 4) = (undefined4)local_2a8;
                *(undefined4 *)((longlong)plVar21 + 0x24) = local_2a8._4_4_;
                *(float *)(plVar21 + 5) = fStack_2a0;
                *(float *)((longlong)plVar21 + 0x2c) = fStack_29c;
                *(undefined2 *)((longlong)plVar21 + 0x3c) = 0x100;
                plVar21[6] = CONCAT44(fStack_294,fStack_298);
                *(uint *)(plVar21 + 7) = uStack_290;
                uVar12 = (**(code **)(*param_1 + 0x560))(param_1,local_3dc);
                iVar9 = local_388;
                lVar20 = (longlong)local_388;
                local_388 = local_388 + 1;
                local_328 = local_388;
                if (local_324 < local_388) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_330,iVar9);
                }
                local_330[lVar20] = uVar12;
                local_388 = local_328;
              }
              uVar24 = *(uint *)(plVar32 + 1);
              local_1e8 = 0;
              local_1e0 = 0;
              local_1c8 = 0;
              local_1c0 = 0;
              local_1b8 = 0xffffffff;
              local_1b4 = 0;
              local_1a8 = (undefined1 *)0x0;
              local_1a0 = 0;
              local_198 = 0;
              local_190 = 0;
              local_178 = 0;
              local_170 = 0;
              local_168 = 0xffffffff;
              local_164 = 0;
              local_158 = (undefined1 *)0x0;
              local_150 = 0;
              local_378 = (void *)0x0;
              uStack_370 = (ulonglong)uVar24;
              if (0 < (int)uVar24) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_378,0);
              }
              local_3e0 = 0;
              pvVar31 = local_378;
              if (0 < (int)uVar24) {
                do {
                  uVar35 = local_3c0;
                  pfVar27 = (float *)((longlong)(int)plVar26 * 0x4c + *plVar32);
                  *(float *)((longlong)pvVar31 + (longlong)(int)plVar26 * 4) =
                       (local_308 * *pfVar27 + fStack_304 * pfVar27[1] + fStack_300 * pfVar27[2]) -
                       fStack_2fc;
                  if (*(float *)((longlong)pvVar31 + (longlong)(int)local_3e0 * 4) <= 0.0) {
                    if (plVar21 != (longlong *)0x0) {
                      iVar9 = (int)plVar21[1];
                      *(int *)(plVar21 + 1) = iVar9 + 1;
                      if (*(int *)((longlong)plVar21 + 0xc) < iVar9 + 1) {
                        TArray<FProcMeshVertex,FDefaultAllocator>::ResizeGrow(plVar21,iVar9);
                      }
                      uVar12 = *(undefined8 *)(pfVar27 + 2);
                      lVar20 = *plVar21;
                      lVar22 = (longlong)iVar9 * 0x4c;
                      *(undefined8 *)(lVar22 + lVar20) = *(undefined8 *)pfVar27;
                      ((undefined8 *)(lVar22 + lVar20))[1] = uVar12;
                      uVar12 = *(undefined8 *)(pfVar27 + 6);
                      puVar16 = (undefined8 *)(lVar22 + 0x10 + lVar20);
                      *puVar16 = *(undefined8 *)(pfVar27 + 4);
                      puVar16[1] = uVar12;
                      uVar12 = *(undefined8 *)(pfVar27 + 10);
                      puVar16 = (undefined8 *)(lVar22 + 0x20 + lVar20);
                      *puVar16 = *(undefined8 *)(pfVar27 + 8);
                      puVar16[1] = uVar12;
                      fVar45 = pfVar27[0xd];
                      fVar48 = pfVar27[0xe];
                      fVar2 = pfVar27[0xf];
                      pfVar1 = (float *)(lVar22 + 0x30 + lVar20);
                      *pfVar1 = pfVar27[0xc];
                      pfVar1[1] = fVar45;
                      pfVar1[2] = fVar48;
                      pfVar1[3] = fVar2;
                      *(undefined8 *)(lVar22 + 0x40 + lVar20) = *(undefined8 *)(pfVar27 + 0x10);
                      *(float *)(lVar22 + 0x48 + lVar20) = pfVar27[0x12];
                      if ((char)plVar21[7] == '\0') {
                        *(undefined8 *)((longlong)plVar21 + 0x2c) = *(undefined8 *)pfVar27;
                        fVar45 = pfVar27[2];
                        *(float *)((longlong)plVar21 + 0x34) = fVar45;
                        plVar21[4] = *(longlong *)((longlong)plVar21 + 0x2c);
                        *(float *)(plVar21 + 5) = fVar45;
                        *(undefined1 *)(plVar21 + 7) = 1;
                      }
                      else {
                        fVar45 = *pfVar27;
                        if (*(float *)(plVar21 + 4) <= *pfVar27) {
                          fVar45 = *(float *)(plVar21 + 4);
                        }
                        *(float *)(plVar21 + 4) = fVar45;
                        fVar45 = pfVar27[1];
                        if (*(float *)((longlong)plVar21 + 0x24) <= pfVar27[1]) {
                          fVar45 = *(float *)((longlong)plVar21 + 0x24);
                        }
                        *(float *)((longlong)plVar21 + 0x24) = fVar45;
                        fVar45 = pfVar27[2];
                        if (*(float *)(plVar21 + 5) <= pfVar27[2]) {
                          fVar45 = *(float *)(plVar21 + 5);
                        }
                        *(float *)(plVar21 + 5) = fVar45;
                        fVar45 = *pfVar27;
                        if (*pfVar27 <= *(float *)((longlong)plVar21 + 0x2c)) {
                          fVar45 = *(float *)((longlong)plVar21 + 0x2c);
                        }
                        *(float *)((longlong)plVar21 + 0x2c) = fVar45;
                        fVar45 = pfVar27[1];
                        if (pfVar27[1] <= *(float *)(plVar21 + 6)) {
                          fVar45 = *(float *)(plVar21 + 6);
                        }
                        *(float *)(plVar21 + 6) = fVar45;
                        fVar45 = pfVar27[2];
                        if (pfVar27[2] <= *(float *)((longlong)plVar21 + 0x34)) {
                          fVar45 = *(float *)((longlong)plVar21 + 0x34);
                        }
                        *(float *)((longlong)plVar21 + 0x34) = fVar45;
                      }
                      local_1f8 = &local_3e0;
                      ppuVar30 = &local_1f8;
                      local_1f0 = local_320;
                      puVar19 = local_228;
                      plVar26 = &local_198;
                      local_320[0] = iVar9;
                      goto LAB_1409780e0;
                    }
                  }
                  else {
                    iVar9 = (int)local_3c0;
                    lVar20 = (longlong)(int)local_3c0;
                    iVar10 = (int)local_3c0 + 1;
                    local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
                    if (local_3c0._4_4_ < iVar10) {
                      TArray<FProcMeshVertex,FDefaultAllocator>::ResizeGrow
                                (&local_3c8,uVar35 & 0xffffffff);
                    }
                    uVar12 = *(undefined8 *)(pfVar27 + 2);
                    lVar20 = lVar20 * 0x4c;
                    *(undefined8 *)(lVar20 + local_3c8) = *(undefined8 *)pfVar27;
                    ((undefined8 *)(lVar20 + local_3c8))[1] = uVar12;
                    uVar12 = *(undefined8 *)(pfVar27 + 6);
                    puVar16 = (undefined8 *)(lVar20 + 0x10 + local_3c8);
                    *puVar16 = *(undefined8 *)(pfVar27 + 4);
                    puVar16[1] = uVar12;
                    uVar12 = *(undefined8 *)(pfVar27 + 10);
                    puVar16 = (undefined8 *)(lVar20 + 0x20 + local_3c8);
                    *puVar16 = *(undefined8 *)(pfVar27 + 8);
                    puVar16[1] = uVar12;
                    uVar12 = *(undefined8 *)(pfVar27 + 0xe);
                    puVar16 = (undefined8 *)(lVar20 + 0x30 + local_3c8);
                    *puVar16 = *(undefined8 *)(pfVar27 + 0xc);
                    puVar16[1] = uVar12;
                    *(undefined8 *)(lVar20 + 0x40 + local_3c8) = *(undefined8 *)(pfVar27 + 0x10);
                    *(float *)(lVar20 + 0x48 + local_3c8) = pfVar27[0x12];
                    local_278[0] = iVar9;
                    if ((char)local_390 == '\0') {
                      local_3a8 = *(longlong *)pfVar27;
                      fStack_39c = (float)local_3a8;
                      fStack_398 = (float)((ulonglong)local_3a8 >> 0x20);
                      fStack_3a0 = pfVar27[2];
                      local_390 = CONCAT31(local_390._1_3_,1);
                      fStack_394 = fStack_3a0;
                    }
                    else {
                      fVar45 = *pfVar27;
                      if (fVar45 < (float)local_3a8) {
                        local_3a8 = CONCAT44(local_3a8._4_4_,fVar45);
                      }
                      fVar48 = pfVar27[1];
                      if (fVar48 < local_3a8._4_4_) {
                        local_3a8 = CONCAT44(fVar48,(float)local_3a8);
                      }
                      fVar2 = pfVar27[2];
                      if (fVar2 < fStack_3a0) {
                        fStack_3a0 = fVar2;
                      }
                      if (fStack_39c < fVar45) {
                        fStack_39c = fVar45;
                      }
                      if (fStack_398 < fVar48) {
                        fStack_398 = fVar48;
                      }
                      if (fStack_394 < fVar2) {
                        fStack_394 = fVar2;
                      }
                    }
                    local_208 = &local_3e0;
                    ppuVar30 = &local_208;
                    local_200 = local_278;
                    puVar19 = local_224;
                    plVar26 = &local_1e8;
LAB_1409780e0:
                    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<int_const_&,int_&&>_>(plVar26,puVar19,ppuVar30,0);
                    pvVar31 = local_378;
                  }
                  local_3e0 = local_3e0 + 1;
                  plVar26 = (longlong *)(ulonglong)local_3e0;
                } while ((int)local_3e0 < (int)uVar24);
              }
              local_3d8 = 0;
              local_270 = 0;
              lVar20 = local_1e8;
              lVar22 = local_198;
              puVar19 = local_158;
              puVar37 = local_1a8;
              if (0 < (int)plVar32[3]) {
                do {
                  puVar23 = (undefined4 *)0x0;
                  lVar17 = plVar32[2];
                  uVar24 = *(uint *)(lVar17 + local_270 * 4);
                  local_148 = (longlong *)CONCAT44(local_148._4_4_,uVar24);
                  if ((int)local_1e0 != local_1b4) {
                    puVar13 = local_1b0;
                    if (puVar37 != (undefined1 *)0x0) {
                      puVar13 = puVar37;
                    }
                    iVar9 = *(int *)(puVar13 + (longlong)(int)(local_1a0 - 1U & uVar24) * 4);
                    while (iVar9 != -1) {
                      lVar15 = (longlong)iVar9;
                      if (*(uint *)(lVar20 + lVar15 * 0x10) == uVar24) {
                        puVar14 = (undefined4 *)(lVar20 + lVar15 * 0x10);
                        if (iVar9 != -1) goto LAB_1409781b2;
                        break;
                      }
                      iVar9 = *(int *)(lVar20 + 8 + lVar15 * 0x10);
                    }
                  }
                  puVar14 = puVar23;
LAB_1409781b2:
                  local_2d8 = puVar14 + 1;
                  if (puVar14 == (undefined4 *)0x0) {
                    local_2d8 = puVar23;
                  }
                  local_f0[0] = local_2d8;
                  if (param_4 != '\0') {
                    if ((int)local_190 != local_164) {
                      puVar13 = local_160;
                      if (puVar19 != (undefined1 *)0x0) {
                        puVar13 = puVar19;
                      }
                      iVar9 = *(int *)(puVar13 + (longlong)(int)(local_150 - 1U & uVar24) * 4);
                      while (iVar9 != -1) {
                        lVar15 = (longlong)iVar9;
                        if (*(uint *)(lVar22 + lVar15 * 0x10) == uVar24) {
                          puVar14 = (undefined4 *)(lVar22 + lVar15 * 0x10);
                          if (iVar9 != -1) goto LAB_140978226;
                          break;
                        }
                        iVar9 = *(int *)(lVar22 + 8 + lVar15 * 0x10);
                      }
                    }
                    puVar14 = puVar23;
LAB_140978226:
                    local_128[0] = puVar14 + 1;
                    if (puVar14 == (undefined4 *)0x0) {
                      local_128[0] = puVar23;
                    }
                  }
                  uVar33 = *(uint *)(lVar17 + 4 + local_270 * 4);
                  local_148 = (longlong *)CONCAT44(uVar33,uVar24);
                  if ((int)local_1e0 != local_1b4) {
                    puVar13 = local_1b0;
                    if (puVar37 != (undefined1 *)0x0) {
                      puVar13 = puVar37;
                    }
                    iVar9 = *(int *)(puVar13 + (longlong)(int)(local_1a0 - 1U & uVar33) * 4);
                    while (iVar9 != -1) {
                      lVar15 = (longlong)iVar9 * 0x10;
                      if (*(uint *)(lVar20 + lVar15) == uVar33) {
                        puVar14 = (undefined4 *)(lVar15 + lVar20);
                        if (iVar9 != -1) goto LAB_1409782a5;
                        break;
                      }
                      iVar9 = *(int *)(lVar20 + 8 + lVar15);
                    }
                  }
                  puVar14 = puVar23;
LAB_1409782a5:
                  puVar34 = puVar14 + 1;
                  if (puVar14 == (undefined4 *)0x0) {
                    puVar34 = puVar23;
                  }
                  local_f0[1] = puVar34;
                  if (local_3e8 != '\0') {
                    if ((int)local_190 != local_164) {
                      puVar13 = local_160;
                      if (puVar19 != (undefined1 *)0x0) {
                        puVar13 = puVar19;
                      }
                      iVar9 = *(int *)(puVar13 + (longlong)(int)(local_150 - 1U & uVar33) * 4);
                      while (iVar9 != -1) {
                        lVar15 = (longlong)iVar9 * 0x10;
                        if (*(uint *)(lVar15 + lVar22) == uVar33) {
                          puVar14 = (undefined4 *)(lVar15 + lVar22);
                          if (iVar9 != -1) goto LAB_140978318;
                          break;
                        }
                        iVar9 = *(int *)(lVar15 + 8 + lVar22);
                      }
                    }
                    puVar14 = puVar23;
LAB_140978318:
                    local_128[1] = puVar14 + 1;
                    if (puVar14 == (undefined4 *)0x0) {
                      local_128[1] = puVar23;
                    }
                  }
                  local_140 = *(float *)(lVar17 + 8 + local_270 * 4);
                  if ((int)local_1e0 != local_1b4) {
                    puVar13 = local_1b0;
                    if (puVar37 != (undefined1 *)0x0) {
                      puVar13 = puVar37;
                    }
                    iVar9 = *(int *)(puVar13 + (longlong)(int)(local_1a0 - 1U & (uint)local_140) * 4
                                    );
                    while (iVar9 != -1) {
                      lVar17 = (longlong)iVar9 * 0x10;
                      if (*(float *)(lVar20 + lVar17) == local_140) {
                        puVar14 = (undefined4 *)(lVar17 + lVar20);
                        if (iVar9 != -1) goto LAB_1409783a4;
                        break;
                      }
                      iVar9 = *(int *)(lVar20 + 8 + lVar17);
                    }
                  }
                  puVar14 = puVar23;
LAB_1409783a4:
                  puVar39 = puVar14 + 1;
                  if (puVar14 == (undefined4 *)0x0) {
                    puVar39 = puVar23;
                  }
                  local_f0[2] = puVar39;
                  if (local_3e8 != '\0') {
                    if ((int)local_190 != local_164) {
                      puVar13 = local_160;
                      if (puVar19 != (undefined1 *)0x0) {
                        puVar13 = puVar19;
                      }
                      iVar9 = *(int *)(puVar13 +
                                      (longlong)(int)(local_150 - 1U & (uint)local_140) * 4);
                      while (iVar9 != -1) {
                        lVar17 = (longlong)iVar9 * 0x10;
                        if (*(float *)(lVar17 + lVar22) == local_140) {
                          puVar14 = (undefined4 *)(lVar17 + lVar22);
                          if (iVar9 != -1) goto LAB_140978425;
                          break;
                        }
                        iVar9 = *(int *)(lVar17 + 8 + lVar22);
                      }
                    }
                    puVar14 = puVar23;
LAB_140978425:
                    local_118 = puVar14 + 1;
                    if (puVar14 == (undefined4 *)0x0) {
                      local_118 = puVar23;
                    }
                  }
                  uVar12 = local_118;
                  local_318 = local_128[0];
                  local_2f8 = local_128[1];
                  if (local_2d8 == (undefined4 *)0x0) {
                    if ((puVar34 != (undefined4 *)0x0) || (puVar39 != (undefined4 *)0x0))
                    goto LAB_140978582;
                    if (plVar21 != (longlong *)0x0) {
                      iVar9 = (int)plVar21[3];
                      uVar11 = *local_128[0];
                      *(int *)(plVar21 + 3) = iVar9 + 1;
                      if (*(int *)((longlong)plVar21 + 0x1c) < iVar9 + 1) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21 + 2,iVar9);
                      }
                      *(undefined4 *)(plVar21[2] + (longlong)iVar9 * 4) = uVar11;
                      iVar9 = (int)plVar21[3];
                      uVar11 = *local_2f8;
                      *(int *)(plVar21 + 3) = iVar9 + 1;
                      if (*(int *)((longlong)plVar21 + 0x1c) < iVar9 + 1) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21 + 2,iVar9);
                      }
                      *(undefined4 *)(plVar21[2] + (longlong)iVar9 * 4) = uVar11;
                      iVar9 = (int)plVar21[3];
                      uVar11 = *(undefined4 *)uVar12;
                      *(int *)(plVar21 + 3) = iVar9 + 1;
                      if (*(int *)((longlong)plVar21 + 0x1c) < iVar9 + 1) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21 + 2,iVar9);
                      }
                      *(undefined4 *)(plVar21[2] + (longlong)iVar9 * 4) = uVar11;
                      lVar20 = local_1e8;
                      lVar22 = local_198;
                      puVar19 = local_158;
                      puVar37 = local_1a8;
                    }
                  }
                  else if ((puVar34 == (undefined4 *)0x0) || (puVar39 == (undefined4 *)0x0)) {
LAB_140978582:
                    piVar28 = (int *)((longlong)register0x00000020 + -0x114) + 1;
                    local_3e0 = 0;
                    local_2f8 = (undefined4 *)((ulonglong)local_128[1] & 0xffffffff00000000);
                    local_258 = 0;
                    piVar25 = (int *)((longlong)register0x00000020 + -0x114) + 5;
                    local_130 = CONCAT44(local_130._4_4_,
                                         *(undefined4 *)
                                          ((longlong)local_378 + (longlong)(int)local_140 * 4));
                    local_138 = (void *)CONCAT44(*(undefined4 *)
                                                  ((longlong)local_378 + (longlong)(int)uVar33 * 4),
                                                 *(undefined4 *)
                                                  ((longlong)local_378 + (longlong)(int)uVar24 * 4))
                    ;
                    local_2d8 = (undefined4 *)0x0;
                    puVar14 = puVar23;
                    puVar34 = puVar23;
                    do {
                      piVar4 = *(int **)((longlong)local_f0 + local_258);
                      if (piVar4 == (int *)0x0) {
                        if (local_3e8 != '\0') {
                          local_3e0 = (int)puVar23 + 1;
                          puVar23 = (undefined4 *)(ulonglong)local_3e0;
                          *piVar25 = **(int **)((longlong)local_128 + local_258);
                          piVar25 = piVar25 + 1;
                        }
                      }
                      else {
                        puVar34 = (undefined4 *)(ulonglong)((int)puVar34 + 1);
                        *piVar28 = *piVar4;
                        piVar28 = piVar28 + 1;
                      }
                      uVar24 = (int)puVar14 + 1;
                      puVar14 = (undefined4 *)(ulonglong)uVar24;
                      lVar20 = (longlong)
                               (int)(uVar24 + ((int)uVar24 / 3 + ((int)uVar24 >> 0x1f) +
                                              (int)(((longlong)(int)uVar24 / 3 +
                                                     ((longlong)(int)uVar24 >> 0x3f) & 0xffffffffU)
                                                   >> 0x1f)) * -3);
                      if ((piVar4 == (int *)0x0) != (local_f0[lVar20] == (undefined4 *)0x0)) {
                        FUN_1409767c0(&local_2c8,
                                      (longlong)*(int *)((longlong)&local_148 + (longlong)local_2d8)
                                      * 0x4c + *local_2f0,
                                      (longlong)*(int *)((longlong)&local_148 + lVar20 * 4) * 0x4c +
                                      *local_2f0);
                        uVar35 = local_3c0;
                        iVar9 = (int)local_3c0;
                        lVar20 = (longlong)(int)local_3c0;
                        iVar10 = (int)local_3c0 + 1;
                        local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
                        if (local_3c0._4_4_ < iVar10) {
                          TArray<FProcMeshVertex,FDefaultAllocator>::ResizeGrow
                                    (&local_3c8,uVar35 & 0xffffffff);
                        }
                        uVar8 = local_288;
                        lVar17 = local_2a8;
                        fVar41 = fStack_2bc;
                        fVar2 = fStack_2c0;
                        fVar48 = fStack_2c4;
                        fVar45 = local_2c8;
                        uVar12 = CONCAT44(fStack_2b4,local_2b8);
                        uVar5 = CONCAT44(fStack_2ac,fStack_2b0);
                        lVar22 = CONCAT44(fStack_29c,fStack_2a0);
                        uVar6 = CONCAT44(fStack_294,fStack_298);
                        uVar7 = CONCAT44(uStack_28c,uStack_290);
                        lVar20 = lVar20 * 0x4c;
                        pfVar27 = (float *)(lVar20 + local_3c8);
                        *pfVar27 = local_2c8;
                        pfVar27[1] = fStack_2c4;
                        pfVar27[2] = fStack_2c0;
                        pfVar27[3] = fStack_2bc;
                        puVar16 = (undefined8 *)(lVar20 + 0x10 + local_3c8);
                        *puVar16 = uVar12;
                        puVar16[1] = uVar5;
                        plVar26 = (longlong *)(lVar20 + 0x20 + local_3c8);
                        *plVar26 = local_2a8;
                        plVar26[1] = lVar22;
                        puVar16 = (undefined8 *)(lVar20 + 0x30 + local_3c8);
                        *puVar16 = uVar6;
                        puVar16[1] = uVar7;
                        *(undefined8 *)(lVar20 + 0x40 + local_3c8) = local_288;
                        *(undefined4 *)(lVar20 + 0x48 + local_3c8) = local_280;
                        if ((char)local_390 == '\0') {
                          fStack_39c = local_2c8;
                          fStack_398 = fStack_2c4;
                          fStack_394 = fStack_2c0;
                          fStack_3a0 = fStack_2c0;
                          local_3a8 = CONCAT44(fStack_2c4,local_2c8);
                          local_390 = CONCAT31(local_390._1_3_,1);
                        }
                        else {
                          if (local_2c8 < (float)local_3a8) {
                            local_3a8 = CONCAT44(local_3a8._4_4_,local_2c8);
                          }
                          if (fStack_2c4 < local_3a8._4_4_) {
                            local_3a8 = CONCAT44(fStack_2c4,(float)local_3a8);
                          }
                          if (fStack_2c0 < fStack_3a0) {
                            fStack_3a0 = fStack_2c0;
                          }
                          if (fStack_39c < local_2c8) {
                            fStack_39c = local_2c8;
                          }
                          if (fStack_398 < fStack_2c4) {
                            fStack_398 = fStack_2c4;
                          }
                          if (fStack_394 < fStack_2c0) {
                            fStack_394 = fStack_2c0;
                          }
                        }
                        *piVar28 = iVar9;
                        uVar33 = (int)puVar34 + 1;
                        piVar28 = piVar28 + 1;
                        local_318 = (undefined4 *)CONCAT44(local_318._4_4_,uVar33);
                        if (plVar21 != (longlong *)0x0) {
                          iVar9 = (int)plVar21[1];
                          *(int *)(plVar21 + 1) = iVar9 + 1;
                          if (*(int *)((longlong)plVar21 + 0xc) < iVar9 + 1) {
                            TArray<FProcMeshVertex,FDefaultAllocator>::ResizeGrow(plVar21,iVar9);
                          }
                          lVar20 = *plVar21;
                          lVar15 = (longlong)iVar9 * 0x4c;
                          pfVar27 = (float *)(lVar15 + lVar20);
                          *pfVar27 = fVar45;
                          pfVar27[1] = fVar48;
                          pfVar27[2] = fVar2;
                          pfVar27[3] = fVar41;
                          puVar16 = (undefined8 *)(lVar15 + 0x10 + lVar20);
                          *puVar16 = uVar12;
                          puVar16[1] = uVar5;
                          plVar26 = (longlong *)(lVar15 + 0x20 + lVar20);
                          *plVar26 = lVar17;
                          plVar26[1] = lVar22;
                          puVar16 = (undefined8 *)(lVar15 + 0x30 + lVar20);
                          *puVar16 = uVar6;
                          puVar16[1] = uVar7;
                          *(undefined8 *)(lVar15 + 0x40 + lVar20) = uVar8;
                          *(undefined4 *)(lVar15 + 0x48 + lVar20) = local_280;
                          if ((char)plVar21[7] == '\0') {
                            *(float *)((longlong)plVar21 + 0x2c) = fVar45;
                            *(float *)(plVar21 + 6) = fVar48;
                            *(float *)(plVar21 + 4) = fVar45;
                            *(float *)((longlong)plVar21 + 0x24) = fVar48;
                            *(float *)((longlong)plVar21 + 0x34) = fVar2;
                            *(float *)(plVar21 + 5) = fVar2;
                            *(undefined1 *)(plVar21 + 7) = 1;
                          }
                          else {
                            fVar41 = *(float *)(plVar21 + 4);
                            if (fVar45 <= *(float *)(plVar21 + 4)) {
                              fVar41 = fVar45;
                            }
                            fVar40 = *(float *)((longlong)plVar21 + 0x24);
                            if (fVar48 <= *(float *)((longlong)plVar21 + 0x24)) {
                              fVar40 = fVar48;
                            }
                            *(float *)(plVar21 + 4) = fVar41;
                            *(float *)((longlong)plVar21 + 0x24) = fVar40;
                            fVar41 = *(float *)(plVar21 + 5);
                            if (fVar2 <= *(float *)(plVar21 + 5)) {
                              fVar41 = fVar2;
                            }
                            fVar40 = *(float *)((longlong)plVar21 + 0x2c);
                            if (*(float *)((longlong)plVar21 + 0x2c) <= fVar45) {
                              fVar40 = fVar45;
                            }
                            *(float *)(plVar21 + 5) = fVar41;
                            *(float *)((longlong)plVar21 + 0x2c) = fVar40;
                            fVar41 = *(float *)(plVar21 + 6);
                            if (*(float *)(plVar21 + 6) <= fVar48) {
                              fVar41 = fVar48;
                            }
                            fVar40 = *(float *)((longlong)plVar21 + 0x34);
                            if (*(float *)((longlong)plVar21 + 0x34) <= fVar2) {
                              fVar40 = fVar2;
                            }
                            *(float *)(plVar21 + 6) = fVar41;
                            *(float *)((longlong)plVar21 + 0x34) = fVar40;
                          }
                          local_3e0 = local_3e0 + 1;
                          *piVar25 = iVar9;
                          piVar25 = piVar25 + 1;
                          uVar33 = (uint)local_318;
                        }
                        puVar34 = (undefined4 *)(ulonglong)uVar33;
                        puVar23 = (undefined4 *)(ulonglong)local_3e0;
                        if ((int)local_2f8 == 0) {
                          local_220 = fVar45;
                          fStack_21c = fVar48;
                          fStack_218 = fVar2;
                        }
                        else {
                          fStack_214 = fVar45;
                          fStack_210 = fVar48;
                          fStack_20c = fVar2;
                        }
                        local_2f8 = (undefined4 *)CONCAT44(local_2f8._4_4_,(int)local_2f8 + 1);
                      }
                      iVar9 = aiStack_114[1];
                      local_2d8 = local_2d8 + 1;
                      local_258 = local_258 + 8;
                    } while ((int)uVar24 < 3);
                    lVar20 = 2;
                    if (2 < (longlong)(int)puVar34) {
                      do {
                        lVar22 = (longlong)(int)local_3b0;
                        iVar10 = (int)local_3b0 + 1;
                        if (local_3b0._4_4_ < iVar10) {
                          uVar35 = local_3b0 & 0xffffffff;
                          local_3b0._0_4_ = iVar10;
                          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,uVar35);
                          iVar10 = (int)local_3b0;
                        }
                        iVar36 = ((int *)((longlong)register0x00000020 + -0x114))[lVar20];
                        *(int *)(local_3b8 + lVar22 * 4) = iVar9;
                        local_3b0._0_4_ = iVar10 + 1;
                        iVar18 = (int)local_3b0;
                        if (local_3b0._4_4_ < (int)local_3b0) {
                          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar10);
                          iVar18 = (int)local_3b0;
                        }
                        iVar3 = ((int *)((longlong)register0x00000020 + -0x114))[lVar20 + 1];
                        *(int *)(local_3b8 + (longlong)iVar10 * 4) = iVar36;
                        local_3b0 = CONCAT44(local_3b0._4_4_,iVar18 + 1);
                        if (local_3b0._4_4_ < iVar18 + 1) {
                          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar18);
                        }
                        lVar20 = lVar20 + 1;
                        *(int *)(local_3b8 + (longlong)iVar18 * 4) = iVar3;
                      } while (lVar20 < (int)puVar34);
                    }
                    iVar9 = aiStack_114[5];
                    if (plVar21 != (longlong *)0x0) {
                      lVar20 = (longlong)(int)local_3e0;
                      lVar22 = 2;
                      if (2 < lVar20) {
                        do {
                          iVar10 = (int)plVar21[3];
                          *(int *)(plVar21 + 3) = iVar10 + 1;
                          if (*(int *)((longlong)plVar21 + 0x1c) < iVar10 + 1) {
                            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21 + 2,iVar10);
                          }
                          iVar36 = ((int *)((longlong)register0x00000020 + -0x114))[lVar22 + 4];
                          *(int *)(plVar21[2] + (longlong)iVar10 * 4) = iVar9;
                          iVar10 = (int)plVar21[3];
                          *(int *)(plVar21 + 3) = iVar10 + 1;
                          if (*(int *)((longlong)plVar21 + 0x1c) < iVar10 + 1) {
                            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21 + 2,iVar10);
                          }
                          *(int *)(plVar21[2] + (longlong)iVar10 * 4) = iVar36;
                          iVar10 = (int)plVar21[3];
                          iVar36 = ((int *)((longlong)register0x00000020 + -0x114))[lVar22 + 5];
                          *(int *)(plVar21 + 3) = iVar10 + 1;
                          if (*(int *)((longlong)plVar21 + 0x1c) < iVar10 + 1) {
                            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21 + 2,iVar10);
                          }
                          lVar22 = lVar22 + 1;
                          *(int *)(plVar21[2] + (longlong)iVar10 * 4) = iVar36;
                        } while (lVar22 < lVar20);
                      }
                    }
                    uVar35 = local_2e0;
                    lVar20 = local_1e8;
                    lVar22 = local_198;
                    puVar19 = local_158;
                    puVar37 = local_1a8;
                    if ((int)local_2f8 == 2) {
                      lVar20 = (longlong)(int)local_2e0;
                      iVar9 = (int)local_2e0 + 1;
                      local_2e0 = CONCAT44(local_2e0._4_4_,iVar9);
                      if (local_2e0._4_4_ < iVar9) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                        ::ResizeGrow(&local_2e8,uVar35 & 0xffffffff);
                      }
                      pfVar27 = (float *)(local_2e8 + lVar20 * 0x18);
                      *pfVar27 = local_220;
                      pfVar27[1] = fStack_21c;
                      pfVar27[2] = fStack_218;
                      pfVar27[3] = fStack_214;
                      *(ulonglong *)(local_2e8 + 0x10 + lVar20 * 0x18) =
                           CONCAT44(fStack_20c,fStack_210);
                      lVar20 = local_1e8;
                      lVar22 = local_198;
                      puVar19 = local_158;
                      puVar37 = local_1a8;
                    }
                  }
                  else {
                    lVar20 = (longlong)(int)local_3b0;
                    uVar11 = *local_2d8;
                    iVar9 = (int)local_3b0 + 1;
                    if (local_3b0._4_4_ < iVar9) {
                      uVar35 = local_3b0 & 0xffffffff;
                      local_3b0._0_4_ = iVar9;
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,uVar35);
                      iVar9 = (int)local_3b0;
                    }
                    *(undefined4 *)(local_3b8 + lVar20 * 4) = uVar11;
                    local_3b0._0_4_ = iVar9 + 1;
                    uVar11 = *puVar34;
                    iVar10 = (int)local_3b0;
                    if (local_3b0._4_4_ < (int)local_3b0) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar9);
                      iVar10 = (int)local_3b0;
                    }
                    *(undefined4 *)(local_3b8 + (longlong)iVar9 * 4) = uVar11;
                    uVar11 = *puVar39;
                    local_3b0 = CONCAT44(local_3b0._4_4_,iVar10 + 1);
                    if (local_3b0._4_4_ < iVar10 + 1) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar10);
                    }
                    *(undefined4 *)(local_3b8 + (longlong)iVar10 * 4) = uVar11;
                    lVar20 = local_1e8;
                    lVar22 = local_198;
                    puVar19 = local_158;
                    puVar37 = local_1a8;
                  }
                  local_3d8 = local_3d8 + 3;
                  local_270 = local_270 + 3;
                  plVar32 = local_2f0;
                  param_4 = local_3e8;
                } while (local_3d8 < (int)local_2f0[3]);
              }
              lVar20 = local_348;
              iVar9 = local_3e4;
              if ((plVar21 != (longlong *)0x0) && (((int)plVar21[3] == 0 || ((int)plVar21[1] == 0)))
                 ) {
                iVar10 = local_3e4 + -1;
                plVar26 = (longlong *)((longlong)iVar10 * 0x40 + local_348);
                if (plVar26[2] != 0) {
                  FMemory::Free();
                }
                if (*plVar26 != 0) {
                  FMemory::Free();
                }
                iVar36 = (iVar9 - iVar10) + -1;
                if (iVar36 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (plVar26,(void *)((longlong)iVar9 * 0x40 + lVar20),(longlong)iVar36 << 6
                            );
                }
                local_350 = CONCAT44(local_350._4_4_,iVar10);
                TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(&local_358);
                local_3e4 = (int)local_350;
                local_348 = local_358;
                puVar19 = local_158;
              }
              param_1 = local_340;
              iVar36 = local_3dc;
              if (((int)local_3b0 < 1) || ((int)local_3c0 < 1)) {
                if (local_3dc < (int)local_340[0xe7]) {
                  FProcMeshSection::Reset(local_268 + local_340[0xe6]);
                  FUN_14097a170(param_1);
                  FUN_140979fa0(param_1);
                  FUN_1423424e0(param_1);
                  puVar19 = local_158;
                }
              }
              else {
                FUN_140977480(local_340,local_3dc,&local_3c8);
                puVar19 = local_158;
              }
              if (local_378 != (void *)0x0) {
                FMemory::Free();
                puVar19 = local_158;
              }
              local_150 = 0;
              if (puVar19 != (undefined1 *)0x0) {
                FMemory::Free(puVar19);
              }
              TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (&local_198);
              local_1a0 = 0;
              if (local_1a8 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (&local_1e8);
              if (local_3b8 != 0) {
                FMemory::Free();
              }
              if (local_3c8 != 0) {
                FMemory::Free();
              }
            }
          }
        }
        iVar9 = (int)param_1[0xe7];
        local_3dc = iVar36 + 1;
      } while (local_3dc < iVar9);
    }
    plVar26 = (longlong *)0x0;
    if ((param_6 != '\0') && (0 < (int)local_2e0)) {
      local_3a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fStack_39c = DAT_1468b5d90;
      fStack_398 = DAT_1468b5d94;
      local_3c8 = 0;
      local_3c0 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      fStack_394 = DAT_1468b5d98;
      fStack_3a0 = DAT_1468b5d98;
      local_390 = local_390 & 0xffffff00;
      local_38c = 0x100;
      plVar32 = plVar26;
      plVar21 = plVar26;
      if (param_6 == '\x02') {
        iVar10 = iVar9 + -1;
        if (iVar10 < iVar9) {
          plVar32 = (longlong *)((longlong)iVar10 * 0x40 + param_1[0xe6]);
        }
        FUN_140970760(&local_3c8,plVar32);
        TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(&local_3b8,plVar32 + 2);
        local_390 = *(uint *)(plVar32 + 7);
        local_3a8 = plVar32[4];
        fStack_3a0 = *(float *)(plVar32 + 5);
        fStack_39c = *(float *)((longlong)plVar32 + 0x2c);
        local_38c = *(undefined2 *)((longlong)plVar32 + 0x3c);
        fStack_398 = (float)plVar32[6];
        fStack_394 = (float)((ulonglong)plVar32[6] >> 0x20);
        plVar32 = (longlong *)(local_3b0 & 0xffffffff);
        plVar21 = (longlong *)(local_3c0 & 0xffffffff);
        iVar9 = iVar10;
      }
      local_378 = (void *)0x0;
      uStack_370 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      FGeomTools::ProjectEdges(&local_378,local_1d8,&local_2e8,&local_308);
      local_3dc = -1;
      FGeomTools::Buid2DPolysFromEdges(&local_1e8,&local_378,&local_3dc);
      local_3d8 = (int)plVar21;
      local_320[0] = (int)plVar32;
      plVar32 = plVar26;
      iVar10 = local_3d8;
      iVar36 = local_320[0];
      if (0 < (int)local_1e0) {
        do {
          lVar20 = (longlong)(int)plVar32 * 0x10;
          FGeomTools::GeneratePlanarTilingPolyUVs(local_1e8 + lVar20,0x42800000);
          Transform2DPolygonTo3D(local_1e8 + lVar20,local_1d8,&local_3c8,&local_3a8);
          TriangulatePoly(&local_3b8,&local_3c8,plVar21,&local_368);
          plVar21 = (longlong *)(local_3c0 & 0xffffffff);
          uVar24 = (int)plVar32 + 1;
          plVar32 = (longlong *)(ulonglong)uVar24;
        } while ((int)uVar24 < (int)local_1e0);
        iVar10 = (int)local_3c0;
        iVar36 = (int)local_3b0;
      }
      param_1 = local_340;
      FUN_140977480(local_340,iVar9,&local_3c8);
      if (param_6 == '\x01') {
        (**(code **)(*param_1 + 0x568))(param_1,iVar9,local_338);
      }
      iVar9 = local_3e4;
      if (local_3e8 != '\0') {
        iVar18 = local_3e4;
        if (param_6 == '\x01') {
          lVar20 = (longlong)local_3e4;
          local_2a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          fStack_29c = DAT_1468b5d90;
          fStack_298 = DAT_1468b5d94;
          iVar18 = local_3e4 + 1;
          fStack_294 = DAT_1468b5d98;
          fStack_2a0 = DAT_1468b5d98;
          uStack_290 = uStack_290 & 0xffffff00;
          local_350 = CONCAT44(local_350._4_4_,iVar18);
          if (local_350._4_4_ < iVar18) {
            local_3e4 = iVar18;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_358,iVar9);
            local_348 = local_358;
            iVar18 = (int)local_350;
          }
          lVar22 = (longlong)local_388;
          puVar16 = (undefined8 *)(lVar20 * 0x40 + local_348);
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          *(undefined4 *)(puVar16 + 4) = (undefined4)local_2a8;
          *(undefined4 *)((longlong)puVar16 + 0x24) = local_2a8._4_4_;
          *(float *)(puVar16 + 5) = fStack_2a0;
          *(float *)((longlong)puVar16 + 0x2c) = fStack_29c;
          *(undefined2 *)((longlong)puVar16 + 0x3c) = 0x100;
          puVar16[6] = CONCAT44(fStack_294,fStack_298);
          *(uint *)(puVar16 + 7) = uStack_290;
          local_328 = local_388 + 1;
          local_3e4 = iVar18;
          if (local_324 < local_328) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_330,local_388);
          }
          local_330[lVar22] = local_338;
        }
        plVar32 = (longlong *)((longlong)(iVar18 + -1) * 0x40 + local_348);
        lVar20 = plVar32[1];
        if (local_3d8 < iVar10) {
          pfVar27 = (float *)((longlong)local_3d8 * 0x4c + local_3c8);
          uVar35 = (ulonglong)(uint)(iVar10 - local_3d8);
          do {
            local_2b8 = pfVar27[4];
            fStack_2b4 = pfVar27[5];
            fStack_2b0 = pfVar27[6];
            fStack_2ac = pfVar27[7];
            local_2c8 = *pfVar27;
            fStack_2c4 = pfVar27[1];
            fStack_2c0 = pfVar27[2];
            iVar9 = (int)plVar32[1];
            fVar45 = pfVar27[8];
            fVar48 = pfVar27[9];
            fStack_2a0 = pfVar27[10];
            fStack_29c = pfVar27[0xb];
            local_318 = (undefined4 *)CONCAT44(local_318._4_4_,pfVar27[0x12]);
            uVar5 = *(undefined8 *)(pfVar27 + 0xc);
            uVar6 = *(undefined8 *)(pfVar27 + 0xe);
            uVar12 = *(undefined8 *)(pfVar27 + 0x10);
            fStack_2bc = pfVar27[3] * -1.0;
            *(int *)(plVar32 + 1) = iVar9 + 1;
            local_2b8 = local_2b8 * -1.0;
            fStack_2b4 = fStack_2b4 * -1.0;
            fStack_2ac = fStack_2ac * -1.0;
            fStack_2b0 = fStack_2b0 * -1.0;
            local_2a8 = CONCAT44(fVar48,fVar45 * -1.0);
            if (*(int *)((longlong)plVar32 + 0xc) < iVar9 + 1) {
              TArray<FProcMeshVertex,FDefaultAllocator>::ResizeGrow(plVar32,iVar9);
            }
            lVar22 = *plVar32;
            lVar17 = (longlong)iVar9 * 0x4c;
            *(undefined8 *)(lVar17 + lVar22) = CONCAT44(fStack_2c4,local_2c8);
            ((undefined8 *)(lVar17 + lVar22))[1] = CONCAT44(fStack_2bc,fStack_2c0);
            puVar16 = (undefined8 *)(lVar17 + 0x10 + lVar22);
            *puVar16 = CONCAT44(fStack_2b4,local_2b8);
            puVar16[1] = CONCAT44(fStack_2ac,fStack_2b0);
            puVar23 = (undefined4 *)(lVar17 + 0x20 + lVar22);
            *puVar23 = (undefined4)local_2a8;
            puVar23[1] = local_2a8._4_4_;
            puVar23[2] = fStack_2a0;
            puVar23[3] = fStack_29c;
            puVar16 = (undefined8 *)(lVar17 + 0x30 + lVar22);
            *puVar16 = uVar5;
            puVar16[1] = uVar6;
            *(undefined8 *)(lVar17 + 0x40 + lVar22) = uVar12;
            *(uint *)(lVar17 + 0x48 + lVar22) = (uint)local_318;
            if ((char)plVar32[7] == '\0') {
              *(longlong *)((longlong)plVar32 + 0x2c) = CONCAT44(fStack_2c4,local_2c8);
              plVar32[4] = CONCAT44(fStack_2c4,local_2c8);
              *(float *)((longlong)plVar32 + 0x34) = fStack_2c0;
              *(float *)(plVar32 + 5) = fStack_2c0;
              *(undefined1 *)(plVar32 + 7) = 1;
            }
            else {
              fVar45 = *(float *)(plVar32 + 4);
              if (local_2c8 <= *(float *)(plVar32 + 4)) {
                fVar45 = local_2c8;
              }
              fVar48 = *(float *)((longlong)plVar32 + 0x24);
              if (fStack_2c4 <= *(float *)((longlong)plVar32 + 0x24)) {
                fVar48 = fStack_2c4;
              }
              fVar2 = fStack_2c4;
              if (fStack_2c4 <= *(float *)(plVar32 + 6)) {
                fVar2 = *(float *)(plVar32 + 6);
              }
              *(float *)(plVar32 + 4) = fVar45;
              fVar45 = *(float *)(plVar32 + 5);
              if (fStack_2c0 <= *(float *)(plVar32 + 5)) {
                fVar45 = fStack_2c0;
              }
              *(float *)((longlong)plVar32 + 0x24) = fVar48;
              *(float *)(plVar32 + 6) = fVar2;
              *(float *)(plVar32 + 5) = fVar45;
              fVar45 = *(float *)((longlong)plVar32 + 0x2c);
              if (*(float *)((longlong)plVar32 + 0x2c) <= local_2c8) {
                fVar45 = local_2c8;
              }
              *(float *)((longlong)plVar32 + 0x2c) = fVar45;
              fVar45 = *(float *)((longlong)plVar32 + 0x34);
              if (*(float *)((longlong)plVar32 + 0x34) <= fStack_2c0) {
                fVar45 = fStack_2c0;
              }
              *(float *)((longlong)plVar32 + 0x34) = fVar45;
            }
            pfVar27 = pfVar27 + 0x13;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
        }
        iVar9 = (int)lVar20 - local_3d8;
        param_1 = local_340;
        if (local_320[0] < iVar36) {
          plVar21 = plVar32 + 2;
          piVar28 = (int *)(local_3b8 + 4 + (longlong)local_320[0] * 4);
          uVar35 = (ulonglong)(((iVar36 - local_320[0]) - 1U) / 3 + 1);
          do {
            iVar10 = (int)plVar32[3];
            iVar36 = piVar28[-1];
            *(int *)(plVar32 + 3) = iVar10 + 1;
            if (*(int *)((longlong)plVar32 + 0x1c) < iVar10 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21,iVar10);
            }
            *(int *)(*plVar21 + (longlong)iVar10 * 4) = iVar36 + iVar9;
            iVar10 = (int)plVar32[3];
            iVar36 = piVar28[1];
            *(int *)(plVar32 + 3) = iVar10 + 1;
            if (*(int *)((longlong)plVar32 + 0x1c) < iVar10 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21,iVar10);
            }
            *(int *)(*plVar21 + (longlong)iVar10 * 4) = iVar36 + iVar9;
            iVar10 = (int)plVar32[3];
            iVar36 = *piVar28;
            *(int *)(plVar32 + 3) = iVar10 + 1;
            if (*(int *)((longlong)plVar32 + 0x1c) < iVar10 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21,iVar10);
            }
            piVar28 = piVar28 + 3;
            *(int *)(*plVar21 + (longlong)iVar10 * 4) = iVar36 + iVar9;
            uVar35 = uVar35 - 1;
            param_1 = local_340;
          } while (uVar35 != 0);
        }
      }
      TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_1e8);
      if (local_378 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_3b8 != 0) {
        FMemory::Free(local_3b8);
      }
      if (local_3c8 != 0) {
        FMemory::Free(local_3c8);
      }
    }
    local_368 = (longlong *)0x0;
    local_360 = 0;
    local_148 = (longlong *)0x0;
    local_140 = 0.0;
    local_13c = 0;
    local_2f0 = (longlong *)(**(code **)(*param_1 + 0x6b8))(param_1);
    local_3d8 = 0;
    plVar32 = plVar26;
    plVar21 = plVar26;
    if (0 < *(int *)((longlong)local_2f0 + 0x60)) {
      local_338 = 0;
      plVar29 = plVar26;
      plVar38 = plVar26;
      do {
        lVar20 = *(longlong *)((longlong)local_2f0 + 0x58) + local_338;
        local_248 = *(undefined4 *)(lVar20 + 0x70);
        uStack_244 = *(undefined4 *)(lVar20 + 0x74);
        uStack_240 = *(undefined4 *)(lVar20 + 0x78);
        uStack_23c = *(undefined4 *)(lVar20 + 0x7c);
        local_230 = *(undefined4 *)(lVar20 + 0x88);
        local_238 = *(longlong *)(lVar20 + 0x80);
        iVar9 = BoxPlaneCompare(&local_248,&local_308);
        iVar10 = (int)plVar32;
        if (iVar9 == -1) {
          if (local_3e8 != '\0') {
            local_140 = (float)(iVar10 + 1);
            if (local_13c < (int)local_140) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_148,plVar32);
              plVar21 = local_148;
            }
            plVar32 = (longlong *)(ulonglong)(uint)local_140;
            plVar29 = plVar21 + (longlong)iVar10 * 2;
LAB_14097936b:
            *plVar29 = 0;
            iVar9 = *(int *)(lVar20 + 0x68);
            pvVar31 = *(void **)(lVar20 + 0x60);
            *(int *)(plVar29 + 1) = iVar9;
            if (iVar9 == 0) {
              *(undefined4 *)((longlong)plVar29 + 0xc) = 0;
            }
            else {
              TArray<FVector,FDefaultAllocator>::ResizeForCopy(plVar29,iVar9,0);
              _guard_xfg_dispatch_icall_nop((void *)*plVar29,pvVar31,(longlong)iVar9 * 0xc);
            }
            goto LAB_140979537;
          }
        }
        else {
          iVar36 = (int)plVar38;
          if (iVar9 == 1) {
            uVar24 = iVar36 + 1;
            local_360 = CONCAT44(local_360._4_4_,uVar24);
            if ((int)plVar29 < (int)uVar24) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_368,plVar38);
              uVar24 = (uint)local_360;
            }
            plVar38 = (longlong *)(ulonglong)uVar24;
            plVar29 = local_368 + (longlong)iVar36 * 2;
            goto LAB_14097936b;
          }
          local_378 = (void *)0x0;
          uStack_370 = 0;
          FUN_140977530(lVar20,&local_308,&local_378);
          uVar35 = uStack_370;
          iVar9 = (int)uStack_370;
          lVar22 = (longlong)(int)uStack_370;
          if (3 < (int)uStack_370) {
            uVar24 = iVar36 + 1;
            local_360 = CONCAT44(local_360._4_4_,uVar24);
            if (local_360._4_4_ < (int)uVar24) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_368,plVar38);
              uVar24 = (uint)local_360;
            }
            plVar38 = (longlong *)(ulonglong)uVar24;
            plVar29 = local_368 + (longlong)iVar36 * 2;
            *plVar29 = 0;
            *(int *)(plVar29 + 1) = iVar9;
            if (iVar9 == 0) {
              *(undefined4 *)((longlong)plVar29 + 0xc) = 0;
            }
            else {
              TArray<FVector,FDefaultAllocator>::ResizeForCopy(plVar29,uVar35 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop((void *)*plVar29,local_378,lVar22 * 0xc);
            }
          }
          if (local_3e8 != '\0') {
            fStack_260 = -fStack_300;
            fStack_25c = -fStack_2fc;
            local_138 = (void *)0x0;
            local_268 = CONCAT44(fStack_304,local_308) ^ 0x8000000080000000;
            local_130 = 0;
            FUN_140977530(lVar20,&local_268,&local_138);
            uVar35 = local_130;
            pvVar31 = local_138;
            iVar9 = (int)local_130;
            lVar20 = (longlong)(int)local_130;
            if (3 < (int)local_130) {
              local_140 = (float)(iVar10 + 1);
              if (local_13c < (int)local_140) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_148,plVar32);
                plVar21 = local_148;
              }
              plVar32 = (longlong *)(ulonglong)(uint)local_140;
              plVar29 = plVar21 + (longlong)iVar10 * 2;
              *plVar29 = 0;
              *(int *)(plVar29 + 1) = iVar9;
              if (iVar9 == 0) {
                *(undefined4 *)((longlong)plVar29 + 0xc) = 0;
              }
              else {
                TArray<FVector,FDefaultAllocator>::ResizeForCopy(plVar29,uVar35 & 0xffffffff,0);
                _guard_xfg_dispatch_icall_nop((void *)*plVar29,pvVar31,lVar20 * 0xc);
              }
            }
            if (pvVar31 != (void *)0x0) {
              FMemory::Free(pvVar31);
            }
          }
          if (local_378 != (void *)0x0) {
            FMemory::Free(local_378);
          }
LAB_140979537:
          plVar29 = (longlong *)(local_360 >> 0x20);
        }
        local_3d8 = local_3d8 + 1;
        local_338 = local_338 + 0xd0;
        param_1 = local_340;
      } while (local_3d8 < *(int *)((longlong)local_2f0 + 0x60));
    }
    FUN_140976ef0(param_1,&local_368);
    if (local_3e8 != '\0') {
      lVar20 = param_1[4];
      FUN_1417846f0(lVar20,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_338 = 0;
      uVar12 = UCheckBox::GetPrivateStaticClass();
      local_3f8 = 0;
      local_400 = 0;
      local_408 = 0;
      local_410 = 0;
      local_418 = 0;
      lVar20 = FUN_1417985e0(uVar12,lVar20,local_338,0);
      plVar32 = local_250;
      local_418 = local_418 & 0xffffff00;
      *local_250 = lVar20;
      FUN_142399d60(lVar20,param_1 + 0x42,0,0);
      iVar9 = local_3e4;
      puVar16 = local_330;
      lVar20 = local_348;
      if (0 < local_3e4) {
        do {
          FUN_140977480(*plVar32,plVar26,lVar20);
          (**(code **)(*(longlong *)*plVar32 + 0x568))((longlong *)*plVar32,plVar26,*puVar16);
          uVar24 = (int)plVar26 + 1;
          plVar26 = (longlong *)(ulonglong)uVar24;
          puVar16 = puVar16 + 1;
          lVar20 = lVar20 + 0x40;
        } while ((int)uVar24 < iVar9);
      }
      plVar26 = local_340;
      lVar20 = *(longlong *)*plVar32;
      puVar16 = (undefined8 *)UWorld::AddOnActorSpawnedHandler(local_340,&local_250);
      (**(code **)(lVar20 + 0x640))(*plVar32,*puVar16);
      lVar20 = *(longlong *)*plVar32;
      uVar11 = (**(code **)(*plVar26 + 0x4e8))(plVar26);
      (**(code **)(lVar20 + 0x638))(*plVar32,uVar11);
      *(char *)(*plVar32 + 0x720) = (char)plVar26[0xe4];
      FUN_140976ef0(*plVar32,&local_148);
      FUN_14234b150(*plVar32);
      plVar32 = (longlong *)(ulonglong)(uint)local_140;
      plVar21 = local_148;
    }
    uVar24 = (uint)plVar32;
    plVar26 = plVar21;
    while (uVar24 != 0) {
      if (*plVar26 != 0) {
        FMemory::Free();
      }
      plVar26 = plVar26 + 2;
      uVar24 = (int)plVar32 - 1;
      plVar32 = (longlong *)(ulonglong)uVar24;
    }
    if (plVar21 != (longlong *)0x0) {
      FMemory::Free(plVar21);
    }
    plVar32 = local_368;
    plVar26 = local_368;
    for (iVar9 = (uint)local_360; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar26 != 0) {
        FMemory::Free();
      }
      plVar26 = plVar26 + 2;
    }
    if (plVar32 != (longlong *)0x0) {
      FMemory::Free(plVar32);
    }
    if (local_2e8 != 0) {
      FMemory::Free();
    }
    if (local_330 != (undefined8 *)0x0) {
      FMemory::Free(local_330);
    }
    TArray<FProcMeshSection,FDefaultAllocator>::~TArray<FProcMeshSection,FDefaultAllocator>
              (&local_358);
  }
  return;
}



// FUNCTION 140979780 Transform2DPolygonTo3D body=776 status=ok
// SIG undefined Transform2DPolygonTo3D(void)

void Transform2DPolygonTo3D(longlong *param_1,float *param_2,longlong *param_3,float *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  puVar9 = (uint *)FMatrix::GetUnitAxis(param_2,&local_f8,3);
  local_d8 = *puVar9 ^ 0x80000000;
  local_d0 = puVar9[2] ^ 0x80000000;
  uStack_d4 = puVar9[1] ^ 0x80000000;
  puVar10 = (undefined8 *)FMatrix::GetUnitAxis(param_2,&local_f8,1);
  uVar8 = uStack_d4;
  uVar7 = local_d8;
  uVar6 = uStack_dc;
  iVar13 = 0;
  uStack_dc = uStack_dc & 0xffffff00;
  uVar2 = *puVar10;
  if (0 < (int)param_1[1]) {
    lVar12 = 0;
    uVar5 = CONCAT44(uVar6,*(undefined4 *)(puVar10 + 1)) & 0xffffff00ffffffff;
    fStack_f0 = 0.0;
    fStack_ec = 1.0;
    do {
      lVar4 = *param_1;
      iVar3 = (int)param_3[1];
      local_f8 = *(float *)(lVar12 + lVar4);
      fStack_f4 = *(float *)(lVar12 + 4 + lVar4);
      uStack_b4 = local_d0;
      local_a0 = *(undefined4 *)(lVar12 + 8 + lVar4);
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      local_9c = *(undefined4 *)(lVar12 + 0xc + lVar4);
      local_e8 = 0;
      uStack_e0 = 0;
      uStack_bc = uVar7;
      uStack_b8 = uVar8;
      fVar16 = fStack_f0 * param_2[8] + fStack_ec * param_2[0xc] +
               fStack_f4 * param_2[4] + local_f8 * *param_2;
      fVar17 = fStack_f0 * param_2[9] + fStack_ec * param_2[0xd] +
               fStack_f4 * param_2[5] + local_f8 * param_2[1];
      fVar18 = fStack_f0 * param_2[10] + fStack_ec * param_2[0xe] +
               fStack_f4 * param_2[6] + local_f8 * param_2[2];
      local_98 = *(undefined4 *)(lVar12 + 0x10 + lVar4);
      *(int *)(param_3 + 1) = iVar3 + 1;
      local_c8 = fVar16;
      fStack_c4 = fVar17;
      fStack_c0 = fVar18;
      uStack_b0 = uVar2;
      uStack_a8 = uVar5;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
        TArray<FProcMeshVertex,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
      }
      lVar4 = *param_3;
      lVar11 = (longlong)iVar3 * 0x4c;
      *(undefined8 *)(lVar11 + lVar4) = CONCAT44(fStack_c4,local_c8);
      ((undefined8 *)(lVar11 + lVar4))[1] = CONCAT44(uStack_bc,fStack_c0);
      puVar10 = (undefined8 *)(lVar11 + 0x10 + lVar4);
      *puVar10 = CONCAT44(uStack_b4,uStack_b8);
      puVar10[1] = uStack_b0;
      puVar1 = (ulonglong *)(lVar11 + 0x20 + lVar4);
      *puVar1 = uStack_a8;
      puVar1[1] = CONCAT44(local_9c,local_a0);
      puVar10 = (undefined8 *)(lVar11 + 0x30 + lVar4);
      *puVar10 = CONCAT44(uStack_94,local_98);
      puVar10[1] = CONCAT44(uStack_8c,uStack_90);
      *(ulonglong *)(lVar11 + 0x40 + lVar4) = CONCAT44(uStack_84,uStack_88);
      *(undefined4 *)(lVar11 + 0x48 + lVar4) = uStack_80;
      if (*(char *)(param_4 + 6) == '\0') {
        *(ulonglong *)(param_4 + 3) = CONCAT44(fStack_c4,local_c8);
        *(ulonglong *)param_4 = CONCAT44(fStack_c4,local_c8);
        param_4[5] = fStack_c0;
        param_4[2] = fStack_c0;
        *(undefined1 *)(param_4 + 6) = 1;
      }
      else {
        fVar14 = fVar16;
        if (*param_4 <= fVar16) {
          fVar14 = *param_4;
        }
        fVar15 = param_4[1];
        if (fVar17 <= param_4[1]) {
          fVar15 = fVar17;
        }
        *param_4 = fVar14;
        fVar14 = fVar18;
        if (param_4[2] <= fVar18) {
          fVar14 = param_4[2];
        }
        param_4[1] = fVar15;
        fVar15 = param_4[3];
        if (param_4[3] <= fVar16) {
          fVar15 = fVar16;
        }
        param_4[2] = fVar14;
        fVar16 = param_4[4];
        if (param_4[4] <= fVar17) {
          fVar16 = fVar17;
        }
        param_4[3] = fVar15;
        fVar17 = param_4[5];
        if (param_4[5] <= fVar18) {
          fVar17 = fVar18;
        }
        param_4[4] = fVar16;
        param_4[5] = fVar17;
      }
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x18;
    } while (iVar13 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 140979a90 TriangulatePoly body=1293 status=ok
// SIG undefined TriangulatePoly(void)

undefined8 TriangulatePoly(longlong *param_1,longlong *param_2,int param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  longlong local_80;
  uint local_78;
  undefined4 local_74;
  
  iVar2 = (int)param_1[1];
  uVar10 = (int)param_2[1] - param_3;
  if ((int)uVar10 < 3) {
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = 0;
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = 2;
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    lVar7 = *param_1;
    *(undefined4 *)(lVar7 + (longlong)iVar2 * 4) = 1;
    uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
  else {
    local_80 = 0;
    local_74 = 0;
    local_78 = uVar10;
    if (0 < (int)uVar10) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80,0);
    }
    iVar13 = 0;
    if ((0 < (int)uVar10) && (iVar13 = 0, 0xf < uVar10)) {
      uVar5 = uVar10 & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      piVar8 = (int *)(local_80 + 0x20);
      iVar15 = 8;
      do {
        piVar8[-8] = iVar13 + param_3;
        piVar8[-7] = iVar13 + 1 + param_3;
        piVar8[-6] = iVar13 + 2 + param_3;
        piVar8[-5] = iVar13 + 3 + param_3;
        iVar13 = iVar13 + 0x10;
        piVar8[-4] = iVar15 + -4 + param_3;
        piVar8[-3] = iVar15 + -3 + param_3;
        piVar8[-2] = iVar15 + -2 + param_3;
        piVar8[-1] = iVar15 + -1 + param_3;
        *piVar8 = iVar15 + param_3;
        piVar8[1] = iVar15 + 1 + param_3;
        piVar8[2] = iVar15 + 2 + param_3;
        piVar8[3] = iVar15 + 3 + param_3;
        piVar8[4] = iVar15 + 4 + param_3;
        piVar8[5] = iVar15 + 5 + param_3;
        piVar8[6] = iVar15 + 6 + param_3;
        piVar8[7] = iVar15 + 7 + param_3;
        piVar8 = piVar8 + 0x10;
        iVar15 = iVar15 + 0x10;
      } while (iVar13 < (int)(uVar10 - uVar5));
    }
    lVar7 = (longlong)iVar13;
    if (lVar7 < (int)uVar10) {
      iVar13 = iVar13 + param_3;
      do {
        *(int *)(local_80 + lVar7 * 4) = iVar13;
        iVar13 = iVar13 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uVar10);
    }
    if ((int)local_78 < 3) {
LAB_140979f47:
      uVar6 = 1;
      lVar7 = local_80;
    }
    else {
LAB_140979c90:
      uVar10 = local_78;
      lVar7 = local_80;
      lVar12 = 0;
      uVar5 = 0;
      if (0 < (int)local_78) {
        do {
          uVar1 = uVar10;
          if (uVar5 != 0) {
            uVar1 = uVar5;
          }
          lVar11 = *param_2;
          lVar14 = (longlong)(int)(uVar1 - 1);
          pfVar16 = (float *)((longlong)*(int *)(lVar7 + lVar14 * 4) * 0x4c + lVar11);
          uVar1 = uVar5 + 1;
          pfVar17 = (float *)((longlong)*(int *)(lVar7 + lVar12 * 4) * 0x4c + lVar11);
          lVar18 = (longlong)((int)uVar1 % (int)uVar10);
          pfVar9 = (float *)((longlong)*(int *)(lVar7 + lVar18 * 4) * 0x4c + lVar11);
          if (((pfVar9[2] - pfVar16[2]) * (pfVar17[1] - pfVar16[1]) -
              (pfVar9[1] - pfVar16[1]) * (pfVar17[2] - pfVar16[2])) * *param_4 +
              ((*pfVar9 - *pfVar16) * (pfVar17[2] - pfVar16[2]) -
              (pfVar9[2] - pfVar16[2]) * (*pfVar17 - *pfVar16)) * param_4[1] +
              ((pfVar9[1] - pfVar16[1]) * (*pfVar17 - *pfVar16) -
              (*pfVar9 - *pfVar16) * (pfVar17[1] - pfVar16[1])) * param_4[2] <= 0.0) {
            iVar13 = 0;
            lVar11 = 0;
            while ((((lVar11 == lVar14 || (lVar11 == lVar12)) || (lVar11 == lVar18)) ||
                   (cVar4 = FGeomTools::PointInTriangle
                                      (pfVar16,pfVar17,pfVar9,
                                       (longlong)*(int *)(lVar7 + lVar11 * 4) * 0x4c + *param_2,0),
                   cVar4 == '\0'))) {
              iVar13 = iVar13 + 1;
              lVar11 = lVar11 + 1;
              if ((int)uVar10 <= iVar13) {
                iVar13 = (int)param_1[1];
                uVar3 = *(undefined4 *)(lVar7 + lVar14 * 4);
                *(int *)(param_1 + 1) = iVar13 + 1;
                if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
                }
                *(undefined4 *)(*param_1 + (longlong)iVar13 * 4) = uVar3;
                iVar13 = (int)param_1[1];
                uVar3 = *(undefined4 *)(lVar7 + lVar18 * 4);
                *(int *)(param_1 + 1) = iVar13 + 1;
                if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
                }
                *(undefined4 *)(*param_1 + (longlong)iVar13 * 4) = uVar3;
                iVar13 = (int)param_1[1];
                uVar3 = *(undefined4 *)(lVar7 + lVar12 * 4);
                *(int *)(param_1 + 1) = iVar13 + 1;
                if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
                }
                *(undefined4 *)(*param_1 + (longlong)iVar13 * 4) = uVar3;
                iVar13 = (uVar10 - uVar5) + -1;
                if (iVar13 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar7 + (longlong)(int)uVar5 * 4),
                             (void *)(lVar7 + (longlong)(int)(uVar5 + 1) * 4),(longlong)iVar13 << 2)
                  ;
                }
                local_78 = uVar10 - 1;
                TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_80);
                if (2 < (int)local_78) goto LAB_140979c90;
                goto LAB_140979f47;
              }
            }
          }
          lVar12 = lVar12 + 1;
          uVar5 = uVar1;
        } while ((int)uVar1 < (int)uVar10);
      }
      iVar13 = (int)param_1[1];
      if (iVar13 < iVar2) {
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar13 * 4),0,(longlong)(iVar2 - iVar13) << 2);
        uVar6 = 0;
      }
      else {
        if ((iVar2 < iVar13) && (iVar13 != iVar2)) {
          *(int *)(param_1 + 1) = iVar2;
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1);
        }
        uVar6 = 0;
      }
    }
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  return uVar6;
}



// FUNCTION 140979fa0 FUN_140979fa0 body=455 status=ok
// SIG undefined FUN_140979fa0(void)

void FUN_140979fa0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0();
  }
  if (lVar8 != 0) {
    cVar7 = UWorld::IsGameWorld(lVar8);
    if ((cVar7 != '\0') && (*(char *)(param_1 + 0x721) != '\0')) {
      bVar6 = true;
      plVar10 = (longlong *)(param_1 + 0x770);
      uVar9 = FUN_140973690(param_1);
      iVar1 = *(int *)(param_1 + 0x778);
      *(int *)(param_1 + 0x778) = iVar1 + 1;
      if (*(int *)(param_1 + 0x77c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar1);
      }
      *(undefined8 *)(*plVar10 + (longlong)iVar1 * 8) = uVar9;
      plVar10 = *(longlong **)(*plVar10 + -8 + (longlong)*(int *)(param_1 + 0x778) * 8);
      goto LAB_14097a06a;
    }
  }
  bVar6 = false;
  *(undefined4 *)(param_1 + 0x778) = 0;
  if (*(int *)(param_1 + 0x77c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x770,0);
  }
  plVar10 = *(longlong **)(param_1 + 0x728);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)FUN_140973690(param_1);
    *(longlong **)(param_1 + 0x728) = plVar10;
  }
LAB_14097a06a:
  FUN_140970550(plVar10 + 0xb,param_1 + 0x740);
  *(byte *)((longlong)plVar10 + 0x9c) = -(*(char *)(param_1 + 0x720) != '\0') & 3;
  if (bVar6) {
    uStack_20 = 0;
    local_28 = FUN_1409741c0;
    local_38 = 0;
    local_30 = 0;
    puVar11 = (undefined8 *)operator_new(0x30,&local_38);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_1441726d8;
      FWeakObjectPtr::operator=(puVar11 + 1,param_1);
      *(undefined4 *)(puVar11 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_28._4_4_;
      *(undefined4 *)(puVar11 + 3) = uStack_20;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_1c;
      puVar11[4] = plVar10;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar11[5] = uVar9;
      *puVar11 = &PTR_FUN_144172720;
    }
    FUN_1426bcd80(plVar10,&local_38);
    return;
  }
  puVar12 = (undefined4 *)FGuid::NewGuid(&local_28);
  uVar2 = *puVar12;
  uVar3 = puVar12[1];
  uVar4 = puVar12[2];
  uVar5 = puVar12[3];
  *(byte *)((longlong)plVar10 + 0x9a) = *(byte *)((longlong)plVar10 + 0x9a) | 2;
  *(undefined4 *)(plVar10 + 0x1e) = uVar2;
  *(undefined4 *)((longlong)plVar10 + 0xf4) = uVar3;
  *(undefined4 *)(plVar10 + 0x1f) = uVar4;
  *(undefined4 *)((longlong)plVar10 + 0xfc) = uVar5;
  (**(code **)(*plVar10 + 0x290))(plVar10);
  (**(code **)(*plVar10 + 0x278))(plVar10);
  FUN_14234b040(param_1);
  return;
}



// FUNCTION 14097a170 FUN_14097a170 body=599 status=ok
// SIG undefined FUN_14097a170(void)

void FUN_14097a170(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  
  lVar2 = param_1[0xe6];
  lVar3 = (longlong)(int)param_1[0xe7] * 0x40 + lVar2;
  fVar5 = 0.0;
  if (lVar2 != lVar3) {
    pfVar1 = (float *)(lVar2 + 0x28);
    fVar4 = DAT_1468b5d90;
    fStack_60 = DAT_1468b5d94;
    fVar6 = DAT_1468b5d98;
    local_70 = DAT_1468b5d90;
    fStack_6c = DAT_1468b5d94;
    fStack_68 = DAT_1468b5d98;
    do {
      if (SUB41(fVar5,0) == '\0') {
        if (*(char *)(pfVar1 + 4) != '\0') {
          local_70 = pfVar1[-2];
          fStack_6c = pfVar1[-1];
          fStack_68 = *pfVar1;
          fVar4 = pfVar1[1];
          fVar5 = pfVar1[4];
          fVar6 = (float)((ulonglong)*(undefined8 *)(pfVar1 + 2) >> 0x20);
          fStack_60 = (float)*(undefined8 *)(pfVar1 + 2);
        }
      }
      else if (*(char *)(pfVar1 + 4) != '\0') {
        if (pfVar1[-2] < local_70) {
          local_70 = pfVar1[-2];
        }
        if (pfVar1[-1] < fStack_6c) {
          fStack_6c = pfVar1[-1];
        }
        if (*pfVar1 < fStack_68) {
          fStack_68 = *pfVar1;
        }
        if (fVar4 < pfVar1[1]) {
          fVar4 = pfVar1[1];
        }
        if (fStack_60 < pfVar1[2]) {
          fStack_60 = pfVar1[2];
        }
        if (fVar6 < pfVar1[3]) {
          fVar6 = pfVar1[3];
        }
      }
      lVar2 = lVar2 + 0x40;
      pfVar1 = pfVar1 + 0x10;
    } while (lVar2 != lVar3);
    if (SUB41(fVar5,0) != '\0') {
      fVar4 = fVar4 - local_70;
      fVar5 = fStack_60 - fStack_6c;
      fVar6 = fVar6 - fStack_68;
      fStack_64 = fVar4 * 0.5;
      fStack_60 = fVar5 * 0.5;
      fStack_5c = fVar6 * 0.5;
      local_70 = fStack_64 + local_70;
      fStack_6c = fStack_60 + fStack_6c;
      fStack_68 = fStack_5c + fStack_68;
      local_58 = SQRT((fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) * 0.25);
      goto LAB_14097a36b;
    }
  }
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  local_58 = 0.0;
LAB_14097a36b:
  *(float *)(param_1 + 0xea) = local_70;
  *(float *)((longlong)param_1 + 0x754) = fStack_6c;
  *(float *)(param_1 + 0xeb) = fStack_68;
  *(float *)((longlong)param_1 + 0x75c) = fStack_64;
  param_1[0xec] = CONCAT44(fStack_5c,fStack_60);
  *(float *)(param_1 + 0xed) = local_58;
  (**(code **)(*param_1 + 0x4b8))(param_1);
  UActorComponent::MarkRenderDynamicDataDirty(param_1);
  return;
}



// FUNCTION 14097a3d0 FUN_14097a3d0 body=1391 status=ok
// SIG undefined FUN_14097a3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14097a3d0(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  char cVar13;
  DWORD DVar14;
  int iVar15;
  int *piVar16;
  DWORD *pDVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  longlong lVar21;
  uint uVar22;
  int *piVar24;
  longlong *plVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong uVar23;
  
  if (param_2 < *(int *)(param_1 + 0x738)) {
    plVar25 = (longlong *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x730));
    iVar5 = (int)param_3[1];
    iVar6 = (int)plVar25[1];
    if (iVar5 == iVar6) {
      *(undefined8 *)((longlong)plVar25 + 0x2c) = _DAT_1468b5d90;
      uVar7 = DAT_1468b5d98;
      *(undefined4 *)((longlong)plVar25 + 0x34) = DAT_1468b5d98;
      plVar25[4] = *(longlong *)((longlong)plVar25 + 0x2c);
      *(undefined4 *)(plVar25 + 5) = uVar7;
      *(undefined1 *)(plVar25 + 7) = 0;
    }
    lVar27 = 0;
    if (0 < iVar6) {
      lVar29 = 0;
      lVar28 = 0;
      lVar21 = 0;
      do {
        lVar8 = *plVar25;
        if ((int)param_3[1] == iVar6) {
          lVar9 = *param_3;
          uVar4 = *(undefined8 *)(lVar28 + lVar9);
          *(undefined8 *)(lVar21 + lVar8) = uVar4;
          *(undefined4 *)(lVar21 + 8 + lVar8) = *(undefined4 *)(lVar28 + 8 + lVar9);
          if ((char)plVar25[7] == '\0') {
            *(undefined8 *)((longlong)plVar25 + 0x2c) = uVar4;
            uVar7 = *(undefined4 *)(lVar21 + 8 + lVar8);
            *(undefined4 *)((longlong)plVar25 + 0x34) = uVar7;
            plVar25[4] = *(longlong *)((longlong)plVar25 + 0x2c);
            *(undefined4 *)(plVar25 + 5) = uVar7;
            *(undefined1 *)(plVar25 + 7) = 1;
          }
          else {
            fVar30 = *(float *)(lVar21 + lVar8);
            if (*(float *)(plVar25 + 4) <= *(float *)(lVar21 + lVar8)) {
              fVar30 = *(float *)(plVar25 + 4);
            }
            *(float *)(plVar25 + 4) = fVar30;
            fVar30 = *(float *)(lVar21 + 4 + lVar8);
            fVar31 = *(float *)((longlong)plVar25 + 0x24);
            if (fVar30 <= *(float *)((longlong)plVar25 + 0x24)) {
              fVar31 = fVar30;
            }
            *(float *)((longlong)plVar25 + 0x24) = fVar31;
            fVar30 = *(float *)(lVar21 + 8 + lVar8);
            if (*(float *)(plVar25 + 5) <= fVar30) {
              fVar30 = *(float *)(plVar25 + 5);
            }
            *(float *)(plVar25 + 5) = fVar30;
            fVar30 = *(float *)(lVar21 + lVar8);
            if (*(float *)(lVar21 + lVar8) <= *(float *)((longlong)plVar25 + 0x2c)) {
              fVar30 = *(float *)((longlong)plVar25 + 0x2c);
            }
            *(float *)((longlong)plVar25 + 0x2c) = fVar30;
            fVar30 = *(float *)(lVar21 + 4 + lVar8);
            fVar31 = *(float *)(plVar25 + 6);
            if (*(float *)(plVar25 + 6) <= fVar30) {
              fVar31 = fVar30;
            }
            *(float *)(plVar25 + 6) = fVar31;
            fVar30 = *(float *)(lVar21 + 8 + lVar8);
            fVar31 = *(float *)((longlong)plVar25 + 0x34);
            if (*(float *)((longlong)plVar25 + 0x34) <= fVar30) {
              fVar31 = fVar30;
            }
            *(float *)((longlong)plVar25 + 0x34) = fVar31;
          }
        }
        if ((int)param_4[1] == iVar6) {
          lVar9 = *param_4;
          *(undefined8 *)(lVar21 + 0xc + lVar8) = *(undefined8 *)(lVar28 + lVar9);
          *(undefined4 *)(lVar21 + 0x14 + lVar8) = *(undefined4 *)(lVar28 + 8 + lVar9);
        }
        if ((int)param_10[1] == iVar6) {
          puVar2 = (undefined4 *)(lVar29 + *param_10);
          uVar7 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          puVar3 = (undefined4 *)(lVar21 + 0x18 + lVar8);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
        }
        if ((int)param_5[1] == iVar6) {
          *(undefined8 *)(lVar21 + 0x2c + lVar8) = *(undefined8 *)(*param_5 + lVar27 * 8);
        }
        if ((int)param_6[1] == iVar6) {
          *(undefined8 *)(lVar21 + 0x34 + lVar8) = *(undefined8 *)(*param_6 + lVar27 * 8);
        }
        if ((int)param_7[1] == iVar6) {
          *(undefined8 *)(lVar21 + 0x3c + lVar8) = *(undefined8 *)(*param_7 + lVar27 * 8);
        }
        if ((int)param_8[1] == iVar6) {
          *(undefined8 *)(lVar21 + 0x44 + lVar8) = *(undefined8 *)(*param_8 + lVar27 * 8);
        }
        if ((int)param_9[1] == iVar6) {
          *(undefined4 *)(lVar21 + 0x28 + lVar8) = *(undefined4 *)(*param_9 + lVar27 * 4);
        }
        lVar27 = lVar27 + 1;
        lVar21 = lVar21 + 0x4c;
        lVar28 = lVar28 + 0xc;
        lVar29 = lVar29 + 0x10;
      } while (lVar27 < iVar6);
    }
    piVar24 = (int *)0x0;
    if (*(longlong *)(param_1 + 0x640) != 0) {
      piVar16 = (int *)operator_new(0x18);
      if (piVar16 != (int *)0x0) {
        piVar16[2] = 0;
        piVar16[3] = 0;
        piVar16[4] = 0;
        piVar16[5] = 0;
        piVar24 = piVar16;
      }
      *piVar24 = param_2;
      FUN_140970760(piVar24 + 2,plVar25);
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar13 = FUN_1415ad720(&DAT_1468e2448), cVar13 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar14 = GetCurrentThreadId(), DVar14 == DAT_1468c21c0)))) {
        uVar4 = *(undefined8 *)(param_1 + 0x640);
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_68);
        FUN_14097aa80(uVar4,piVar24);
        QueryPerformanceCounter(&local_70);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_70.s.LowPart - local_68._0_4_);
      }
      else {
        lVar27 = *(longlong *)(param_1 + 0x640);
        pDVar17 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar18 = TlsGetValue(*pDVar17);
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)operator_new(0x18);
          if (plVar18 == (longlong *)0x0) {
            plVar18 = (longlong *)0x0;
          }
          else {
            *plVar18 = 0;
            plVar18[1] = 0;
            *(undefined4 *)(plVar18 + 2) = 0;
          }
          TlsSetValue(*pDVar17,plVar18);
        }
        plVar19 = (longlong *)plVar18[1];
        if (plVar19 == (longlong *)0x0) {
          plVar19 = (longlong *)*plVar18;
          if (plVar19 == (longlong *)0x0) {
            plVar19 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar17 + 2);
            plVar18[1] = (longlong)plVar19;
            if (plVar19 == (longlong *)0x0) {
              puVar20 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar18[1] = (longlong)puVar20;
              lVar21 = 0x1f;
              do {
                puVar1 = puVar20 + 0x20;
                *puVar20 = puVar1;
                lVar21 = lVar21 + -1;
                puVar20 = puVar1;
              } while (lVar21 != 0);
              *puVar1 = 0;
              plVar19 = (longlong *)plVar18[1];
            }
            iVar15 = 0x20;
            *(undefined4 *)(plVar18 + 2) = 0x20;
          }
          else {
            iVar15 = 0x20;
            plVar18[1] = (longlong)plVar19;
            *(undefined4 *)(plVar18 + 2) = 0x20;
            *plVar18 = 0;
          }
        }
        else {
          iVar15 = (int)plVar18[2];
        }
        plVar18[1] = *plVar19;
        *(int *)(plVar18 + 2) = iVar15 + -1;
        *plVar19 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar19 + 1) = 0xff;
        local_60 = 0;
        local_58 = 0;
        *(undefined4 *)((longlong)plVar19 + 0xc) = 1;
        *plVar19 = (longlong)&PTR_FUN_1441726b8;
        *(undefined1 *)(plVar19 + 4) = 0;
        plVar19[5] = 0;
        plVar19[3] = (longlong)piVar24;
        plVar19[2] = lVar27;
        lVar27 = plVar19[5];
        piVar24 = (int *)(lVar27 + 0x48);
        if (lVar27 != 0) {
          LOCK();
          *piVar24 = *piVar24 + 1;
          UNLOCK();
        }
        FUN_1409421c0(plVar19,0,0xff,1);
        if (lVar27 != 0) {
          LOCK();
          iVar15 = *piVar24;
          *piVar24 = *piVar24 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            FGraphEvent::Recycle(lVar27);
          }
        }
      }
    }
    if ((iVar5 == iVar6) && (*(char *)((longlong)plVar25 + 0x3c) != '\0')) {
      plVar25 = *(longlong **)(param_1 + 0x730);
      plVar18 = plVar25 + (longlong)*(int *)(param_1 + 0x738) * 8;
      local_50 = 0;
      local_48 = 0;
      for (; plVar25 != plVar18; plVar25 = plVar25 + 8) {
        uVar23 = 0;
        if ((*(char *)((longlong)plVar25 + 0x3c) != '\0') && (uVar26 = uVar23, 0 < (int)plVar25[1]))
        {
          do {
            uVar12 = local_48;
            lVar21 = (longlong)(int)local_48;
            lVar27 = *plVar25;
            iVar15 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar15);
            if (local_48._4_4_ < iVar15) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_50,uVar12 & 0xffffffff);
            }
            uVar22 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar22;
            *(undefined8 *)(local_50 + lVar21 * 0xc) = *(undefined8 *)(uVar26 + lVar27);
            *(undefined4 *)(local_50 + 8 + lVar21 * 0xc) = *(undefined4 *)(uVar26 + 8 + lVar27);
            uVar26 = uVar26 + 0x4c;
          } while ((int)uVar22 < (int)plVar25[1]);
        }
      }
      FBodyInstance::UpdateTriMeshVertices(param_1 + 0x3b0,&local_50);
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
    if (iVar5 == iVar6) {
      FUN_14097a170(param_1);
      UActorComponent::MarkRenderDynamicDataDirty(param_1);
    }
  }
  return;
}



// FUNCTION 14097a940 UpdateMeshSection_LinearColor body=313 status=ok
// SIG undefined UpdateMeshSection_LinearColor(void)

void UProceduralMeshComponent::UpdateMeshSection_LinearColor
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               longlong *param_9,undefined8 param_10)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *local_38;
  ulonglong local_30;
  
  plVar1 = param_9;
  puVar3 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_30 = 0;
  puVar4 = puVar3;
  if (0 < (int)*(uint *)(param_9 + 1)) {
    local_30 = (ulonglong)*(uint *)(param_9 + 1);
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar4 = local_38;
    puVar5 = local_38;
    if (0 < (int)plVar1[1]) {
      do {
        puVar2 = (undefined4 *)
                 FLinearColor::ToFColor((longlong)(int)puVar3 * 0x10 + *plVar1,&param_9,1);
        uVar6 = (int)puVar3 + 1;
        puVar3 = (undefined4 *)(ulonglong)uVar6;
        *puVar5 = *puVar2;
        puVar5 = puVar5 + 1;
      } while ((int)uVar6 < (int)plVar1[1]);
    }
  }
  FUN_14097a3d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_38,param_10);
  if (puVar4 != (undefined4 *)0x0) {
    FMemory::Free(puVar4);
  }
  return;
}



// FUNCTION 14097aa80 FUN_14097aa80 body=3839 status=ok
// SIG undefined FUN_14097aa80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14097aa80(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [14];
  unkbyte10 Var5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [14];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  int *piVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  void *pvVar18;
  undefined2 uVar19;
  int iVar20;
  ushort uVar21;
  undefined2 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined2 uVar70;
  undefined2 uVar71;
  char cVar58;
  undefined1 auVar44 [16];
  undefined1 auVar55 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 unaff_XMM7_Ba;
  undefined1 uVar62;
  undefined1 unaff_XMM7_Bb;
  undefined1 uVar63;
  undefined1 unaff_XMM7_Bc;
  undefined1 uVar64;
  undefined1 unaff_XMM7_Bd;
  undefined1 uVar65;
  undefined1 unaff_XMM7_Be;
  undefined1 uVar66;
  undefined1 unaff_XMM7_Bf;
  undefined1 uVar67;
  undefined1 unaff_XMM7_Bg;
  undefined1 uVar68;
  undefined1 unaff_XMM7_Bh;
  undefined1 uVar69;
  undefined1 auStack_1f8 [32];
  int local_1d8;
  undefined4 local_1d0;
  uint local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  int *local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  undefined8 local_fc;
  undefined4 local_f4 [3];
  ulonglong local_e8;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar45 [16];
  undefined1 auVar56 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar46 [16];
  undefined1 auVar57 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar43 [16];
  undefined1 auVar54 [16];
  undefined1 auVar36 [16];
  undefined1 auVar47 [16];
  
  if (param_2 != (int *)0x0) {
    local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
    local_158 = param_2;
    if ((*param_2 < *(int *)(param_1 + 0x3a8)) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3a0) + (longlong)*param_2 * 8), lVar2 != 0))
    {
      local_150 = (longlong)param_2[4];
      uVar28 = 0;
      iVar16 = 2;
      if (*(int *)(lVar2 + 0x200) < 3) {
        iVar16 = *(int *)(lVar2 + 0x200);
      }
      lVar30 = (longlong)iVar16;
      if (0 < local_150) {
        uVar13 = CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ^
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)));
        uVar62 = (undefined1)uVar13;
        uVar63 = (undefined1)(uVar13 >> 8);
        uVar64 = (undefined1)(uVar13 >> 0x10);
        uVar65 = (undefined1)(uVar13 >> 0x18);
        uVar13 = CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ^
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)));
        uVar66 = (undefined1)uVar13;
        uVar67 = (undefined1)(uVar13 >> 8);
        uVar68 = (undefined1)(uVar13 >> 0x10);
        uVar69 = (undefined1)(uVar13 >> 0x18);
        uVar27 = uVar28;
        uVar29 = uVar28;
        do {
          iVar16 = (int)uVar27;
          local_fc = 0;
          FUN_140972dd0(&local_148,(longlong)iVar16 * 0x4c + *(longlong *)(param_2 + 2));
          lVar23 = *(longlong *)(lVar2 + 0x138);
          uVar13 = iVar16 * *(int *)(lVar2 + 0x140);
          auVar43._0_15_ = ZEXT415(0);
          auVar43[0xf] = uVar69;
          auVar42._14_2_ = auVar43._14_2_;
          auVar42._0_13_ = ZEXT413(0);
          auVar42[0xd] = uVar68;
          auVar41._13_3_ = auVar42._13_3_;
          auVar41._0_13_ = ZEXT413(0);
          auVar40._12_4_ = auVar41._12_4_;
          auVar40._0_11_ = ZEXT411(0);
          auVar40[0xb] = uVar67;
          auVar39._11_5_ = auVar40._11_5_;
          auVar39._0_11_ = ZEXT411(0);
          auVar38._10_6_ = auVar39._10_6_;
          auVar38._0_9_ = (unkuint9)0;
          auVar38[9] = uVar66;
          auVar37._9_7_ = auVar38._9_7_;
          auVar37._0_9_ = (unkuint9)0;
          cVar58 = (char)((ulonglong)local_fc >> 0x38);
          Var5 = CONCAT91(CONCAT81(auVar37._8_8_,uVar65),cVar58);
          auVar9._2_10_ = Var5;
          auVar9[1] = uVar64;
          auVar9[0] = (char)((ulonglong)local_fc >> 0x30);
          auVar4._2_12_ = auVar9;
          auVar4[1] = uVar63;
          auVar4[0] = (char)((ulonglong)local_fc >> 0x28);
          uVar70 = CONCAT11(uVar62,(char)((ulonglong)local_fc >> 0x20));
          auVar36._2_14_ = auVar4;
          auVar46[0xf] = uVar69;
          auVar46[0xe] = uVar68;
          auVar46._0_12_ = auVar36._0_12_;
          auVar46._12_2_ = (short)Var5;
          auVar45._12_4_ = auVar46._12_4_;
          auVar45._0_10_ = auVar36._0_10_;
          auVar45[0xb] = uVar67;
          auVar45[10] = uVar66;
          auVar44._10_6_ = auVar45._10_6_;
          auVar44._0_8_ = auVar36._0_8_;
          auVar44._8_2_ = auVar9._0_2_;
          auVar6[3] = uVar65;
          auVar6[2] = uVar64;
          auVar6._4_8_ = auVar44._8_8_;
          auVar6._0_2_ = auVar4._0_2_;
          auVar33._0_4_ = CONCAT22(CONCAT11(uVar63,uVar62),uVar70);
          auVar33._4_12_ = auVar6;
          *(undefined8 *)((ulonglong)uVar13 + lVar23) = local_148;
          auVar32._0_4_ = -(uint)(0x7f < auVar33._0_4_);
          auVar32._4_4_ = -(uint)(0x7f < auVar6._0_4_);
          auVar32._8_4_ = -(uint)(0x7f < auVar44._8_4_);
          auVar32._12_4_ = -(uint)(0x7f < auVar45._12_4_);
          auVar33 = auVar32 & _DAT_144101760 | auVar33;
          *(undefined4 *)((ulonglong)uVar13 + 8 + lVar23) = local_140;
          lVar23 = *(longlong *)(lVar2 + 200);
          auVar54._0_15_ = ZEXT415(0);
          auVar54[0xf] = uVar69;
          auVar53._14_2_ = auVar54._14_2_;
          auVar53._0_13_ = ZEXT413(0);
          auVar53[0xd] = uVar68;
          auVar52._13_3_ = auVar53._13_3_;
          auVar52._0_13_ = ZEXT413(0);
          auVar51._12_4_ = auVar52._12_4_;
          auVar51._0_11_ = ZEXT411(0);
          auVar51[0xb] = uVar67;
          auVar50._11_5_ = auVar51._11_5_;
          auVar50._0_11_ = ZEXT411(0);
          auVar49._10_6_ = auVar50._10_6_;
          auVar49._0_9_ = (unkuint9)0;
          auVar49[9] = uVar66;
          auVar48._9_7_ = auVar49._9_7_;
          auVar48._0_9_ = (unkuint9)0;
          Var5 = CONCAT91(CONCAT81(auVar48._8_8_,uVar65),(char)((ulonglong)local_fc >> 0x18));
          auVar10._2_10_ = Var5;
          auVar10[1] = uVar64;
          auVar10[0] = (char)((ulonglong)local_fc >> 0x10);
          auVar7._2_12_ = auVar10;
          auVar7[1] = uVar63;
          auVar7[0] = (char)((ulonglong)local_fc >> 8);
          uVar71 = CONCAT11(uVar62,(char)local_fc);
          auVar47._2_14_ = auVar7;
          auVar57[0xf] = uVar69;
          auVar57[0xe] = uVar68;
          auVar57._0_12_ = auVar47._0_12_;
          auVar57._12_2_ = (short)Var5;
          auVar56._12_4_ = auVar57._12_4_;
          auVar56._0_10_ = auVar47._0_10_;
          auVar56[0xb] = uVar67;
          auVar56[10] = uVar66;
          auVar55._10_6_ = auVar56._10_6_;
          auVar55._0_8_ = auVar47._0_8_;
          auVar55._8_2_ = auVar10._0_2_;
          auVar8[3] = uVar65;
          auVar8[2] = uVar64;
          auVar8._4_8_ = auVar55._8_8_;
          auVar8._0_2_ = auVar7._0_2_;
          auVar35._0_4_ = CONCAT22(CONCAT11(uVar63,uVar62),uVar71);
          auVar35._4_12_ = auVar8;
          auVar34._0_4_ = -(uint)(0x7f < auVar35._0_4_);
          auVar34._4_4_ = -(uint)(0x7f < auVar8._0_4_);
          auVar34._8_4_ = -(uint)(0x7f < auVar55._8_4_);
          auVar34._12_4_ = -(uint)(0x7f < auVar56._12_4_);
          fVar59 = (float)auVar33._0_4_ * 0.007874016;
          fVar60 = (float)auVar33._4_4_ * 0.007874016;
          fVar61 = (float)auVar33._8_4_ * 0.007874016;
          fStack_19c = (float)auVar33._12_4_ * 0.007874016;
          auVar35 = auVar34 & _DAT_144101760 | auVar35;
          local_1b8 = (float)auVar35._0_4_ * 0.007874016;
          fStack_1b4 = (float)auVar35._4_4_ * 0.007874016;
          fStack_1b0 = (float)auVar35._8_4_ * 0.007874016;
          fStack_1ac = (float)auVar35._12_4_ * 0.007874016;
          local_180 = (float)(int)cVar58 * 0.007843138 - 1.0;
          local_188 = (fVar60 * fStack_1b0 - fVar61 * fStack_1b4) * local_180;
          local_184 = (fVar61 * local_1b8 - fVar59 * fStack_1b0) * local_180;
          local_180 = (fVar59 * fStack_1b4 - fVar60 * local_1b8) * local_180;
          local_1a8 = fVar59;
          fStack_1a4 = fVar60;
          fStack_1a0 = fVar61;
          local_198 = local_1b8;
          local_194 = fStack_1b4;
          local_190 = fStack_1b0;
          local_178 = fVar59;
          local_174 = fVar60;
          local_170 = fVar61;
          if (*(char *)(lVar2 + 0xe9) == '\0') {
            iVar14 = (int)ROUND(local_1b8 * 127.0 + local_1b8 * 127.0 + 0.5) >> 1;
            if (iVar14 < -0x80) {
              iVar20 = -0x80;
            }
            else {
              iVar20 = 0x7f;
              if (iVar14 < 0x7f) {
                iVar20 = iVar14;
              }
            }
            *(char *)(lVar23 + uVar29 * 8) = (char)iVar20;
            iVar14 = (int)ROUND(fStack_1b4 * 127.0 + fStack_1b4 * 127.0 + 0.5) >> 1;
            if (iVar14 < -0x80) {
              iVar20 = -0x80;
            }
            else {
              iVar20 = 0x7f;
              if (iVar14 < 0x7f) {
                iVar20 = iVar14;
              }
            }
            *(char *)(lVar23 + 1 + uVar29 * 8) = (char)iVar20;
            iVar14 = (int)ROUND(fStack_1b0 * 127.0 + fStack_1b0 * 127.0 + 0.5) >> 1;
            if (iVar14 < -0x80) {
              iVar20 = -0x80;
            }
            else {
              iVar20 = 0x7f;
              if (iVar14 < 0x7f) {
                iVar20 = iVar14;
              }
            }
            *(char *)(lVar23 + 2 + uVar29 * 8) = (char)iVar20;
            *(undefined1 *)(lVar23 + 3 + uVar29 * 8) = 0x7f;
            local_18c = 0;
            local_17c = 0;
            local_16c = 0;
            local_168 = 0;
            uStack_160 = 0x3f80000000000000;
            fVar31 = (float)FMatrix::Determinant(&local_198);
            if (0.0 <= fVar31) {
              fVar31 = 254.5;
            }
            else {
              fVar31 = -253.5;
            }
            iVar14 = (int)ROUND(fVar59 * 127.0 + fVar59 * 127.0 + 0.5) >> 1;
            if (iVar14 < -0x80) {
              iVar20 = -0x80;
            }
            else {
              iVar20 = 0x7f;
              if (iVar14 < 0x7f) {
                iVar20 = iVar14;
              }
            }
            *(char *)(lVar23 + 4 + uVar29 * 8) = (char)iVar20;
            fVar59 = fVar60 * 127.0 + fVar60 * 127.0 + 0.5;
            uVar62 = SUB41(fVar59,0);
            uVar63 = (undefined1)((uint)fVar59 >> 8);
            uVar64 = (undefined1)((uint)fVar59 >> 0x10);
            uVar65 = (undefined1)((uint)fVar59 >> 0x18);
            iVar14 = (int)ROUND(fVar59) >> 1;
            if (iVar14 < -0x80) {
              iVar20 = -0x80;
            }
            else {
              iVar20 = 0x7f;
              if (iVar14 < 0x7f) {
                iVar20 = iVar14;
              }
            }
            *(char *)(lVar23 + 5 + uVar29 * 8) = (char)iVar20;
            iVar14 = (int)ROUND(fVar61 * 127.0 + fVar61 * 127.0 + 0.5) >> 1;
            if (iVar14 < -0x80) {
              iVar20 = -0x80;
            }
            else {
              iVar20 = 0x7f;
              if (iVar14 < 0x7f) {
                iVar20 = iVar14;
              }
            }
            *(char *)(lVar23 + 6 + uVar29 * 8) = (char)iVar20;
            iVar14 = (int)ROUND(fVar31) >> 1;
            if (iVar14 < -0x80) {
              iVar20 = -0x80;
            }
            else {
              iVar20 = 0x7f;
              if (iVar14 < 0x7f) {
                iVar20 = iVar14;
              }
            }
            *(char *)(lVar23 + 7 + uVar29 * 8) = (char)iVar20;
          }
          else {
            puVar22 = (undefined2 *)(uVar29 * 0x10 + lVar23);
            iVar14 = (int)ROUND(local_1b8 * 32767.0 + local_1b8 * 32767.0 + 0.5) >> 1;
            if (iVar14 < -0x8000) {
              uVar19 = 0x8000;
            }
            else {
              uVar19 = 0x7fff;
              if (iVar14 < 0x7fff) {
                uVar19 = (undefined2)iVar14;
              }
            }
            *puVar22 = uVar19;
            iVar14 = (int)ROUND(fStack_1b4 * 32767.0 + fStack_1b4 * 32767.0 + 0.5) >> 1;
            if (iVar14 < -0x8000) {
              iVar20 = -0x8000;
            }
            else {
              iVar20 = 0x7fff;
              if (iVar14 < 0x7fff) {
                iVar20 = iVar14;
              }
            }
            puVar22[1] = (short)iVar20;
            iVar14 = (int)ROUND(fStack_1b0 * 32767.0 + fStack_1b0 * 32767.0 + 0.5) >> 1;
            if (iVar14 < -0x8000) {
              iVar20 = -0x8000;
            }
            else {
              iVar20 = 0x7fff;
              if (iVar14 < 0x7fff) {
                iVar20 = iVar14;
              }
            }
            puVar22[2] = (short)iVar20;
            puVar22[3] = 0x7fff;
            local_18c = 0;
            local_17c = 0;
            local_16c = 0;
            local_168 = 0;
            uStack_160 = 0x3f80000000000000;
            fVar31 = (float)FMatrix::Determinant(&local_198);
            if (0.0 <= fVar31) {
              fVar31 = 65534.5;
            }
            else {
              fVar31 = -65533.5;
            }
            iVar14 = (int)ROUND(fVar59 * 32767.0 + fVar59 * 32767.0 + 0.5) >> 1;
            if (iVar14 < -0x8000) {
              iVar20 = -0x8000;
            }
            else {
              iVar20 = 0x7fff;
              if (iVar14 < 0x7fff) {
                iVar20 = iVar14;
              }
            }
            puVar22[4] = (short)iVar20;
            fVar59 = fVar60 * 32767.0 + fVar60 * 32767.0 + 0.5;
            uVar62 = SUB41(fVar59,0);
            uVar63 = (undefined1)((uint)fVar59 >> 8);
            uVar64 = (undefined1)((uint)fVar59 >> 0x10);
            uVar65 = (undefined1)((uint)fVar59 >> 0x18);
            iVar14 = (int)ROUND(fVar59) >> 1;
            if (iVar14 < -0x8000) {
              iVar20 = -0x8000;
            }
            else {
              iVar20 = 0x7fff;
              if (iVar14 < 0x7fff) {
                iVar20 = iVar14;
              }
            }
            puVar22[5] = (short)iVar20;
            iVar14 = (int)ROUND(fVar61 * 32767.0 + fVar61 * 32767.0 + 0.5) >> 1;
            if (iVar14 < -0x8000) {
              iVar20 = -0x8000;
            }
            else {
              iVar20 = 0x7fff;
              if (iVar14 < 0x7fff) {
                iVar20 = iVar14;
              }
            }
            puVar22[6] = (short)iVar20;
            iVar14 = (int)ROUND(fVar31) >> 1;
            param_2 = local_158;
            if (iVar14 < -0x8000) {
              puVar22[7] = 0x8000;
            }
            else {
              iVar20 = 0x7fff;
              if (iVar14 < 0x7fff) {
                iVar20 = iVar14;
              }
              puVar22[7] = (short)iVar20;
            }
          }
          lVar23 = *(longlong *)(lVar2 + 0xd0);
          lVar25 = *(uint *)(lVar2 + 0xe0) * uVar29;
          if (*(char *)(lVar2 + 0xe8) == '\0') {
            uVar12 = (ushort)(local_13c >> 0x10);
            uVar21 = uVar12 & 0x8000;
            uVar13 = local_13c >> 0x17 & 0xff;
            if (uVar13 < 0x71) {
              iVar14 = -uVar13 + 0x7e;
              if ((iVar14 < 0x19) &&
                 (uVar15 = local_13c & 0x7fffff | 0x800000,
                 uVar21 = (ushort)(uVar15 >> ((byte)iVar14 & 0x1f)) & 0x3ff | uVar21,
                 (uVar15 >> ((char)-uVar13 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar21 = uVar21 + 1;
              }
            }
            else if (uVar13 < 0x8f) {
              uVar21 = uVar21 | (ushort)(local_13c >> 0xd) & 0x3ff |
                                ((uVar12 >> 7) - 0x10 & 0x1f) << 10;
            }
            else {
              uVar21 = uVar21 | 0x7bff;
            }
            *(ushort *)(lVar23 + lVar25 * 4) = uVar21;
            local_1c8 = local_138;
            uVar21 = (ushort)(local_138 >> 0x10);
            uVar12 = uVar21 & 0x8000;
            uVar13 = local_138 >> 0x17 & 0xff;
            if (uVar13 < 0x71) {
              iVar14 = -uVar13 + 0x7e;
              if ((iVar14 < 0x19) &&
                 (uVar15 = local_138 & 0x7fffff | 0x800000,
                 uVar12 = (ushort)(uVar15 >> ((byte)iVar14 & 0x1f)) & 0x3ff | uVar12,
                 (uVar15 >> ((char)-uVar13 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar12 = uVar12 + 1;
              }
            }
            else if (uVar13 < 0x8f) {
              uVar12 = uVar12 | (ushort)(local_138 >> 0xd) & 0x3ff |
                                ((uVar21 >> 7) - 0x10 & 0x1f) << 10;
            }
            else {
              uVar12 = uVar12 | 0x7bff;
            }
            *(ushort *)(lVar23 + 2 + lVar25 * 4) = uVar12;
          }
          else {
            *(uint *)(lVar23 + 4 + lVar25 * 8) = local_138;
            *(uint *)(lVar23 + lVar25 * 8) = local_13c;
          }
          lVar23 = *(longlong *)(lVar2 + 0xd0);
          lVar25 = *(uint *)(lVar2 + 0xe0) * uVar29;
          if (*(char *)(lVar2 + 0xe8) == '\0') {
            uVar12 = (ushort)(local_134 >> 0x10);
            uVar21 = uVar12 & 0x8000;
            uVar13 = local_134 >> 0x17 & 0xff;
            if (uVar13 < 0x71) {
              iVar14 = -uVar13 + 0x7e;
              if ((iVar14 < 0x19) &&
                 (uVar15 = local_134 & 0x7fffff | 0x800000,
                 uVar21 = (ushort)(uVar15 >> ((byte)iVar14 & 0x1f)) & 0x3ff | uVar21,
                 (uVar15 >> ((char)-uVar13 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar21 = uVar21 + 1;
              }
            }
            else if (uVar13 < 0x8f) {
              uVar21 = uVar21 | (ushort)(local_134 >> 0xd) & 0x3ff |
                                ((uVar12 >> 7) - 0x10 & 0x1f) << 10;
            }
            else {
              uVar21 = uVar21 | 0x7bff;
            }
            *(ushort *)(lVar23 + 4 + lVar25 * 4) = uVar21;
            local_1c8 = local_130;
            uVar21 = (ushort)(local_130 >> 0x10);
            uVar12 = uVar21 & 0x8000;
            uVar13 = local_130 >> 0x17 & 0xff;
            if (uVar13 < 0x71) {
              iVar14 = -uVar13 + 0x7e;
              if ((iVar14 < 0x19) &&
                 (uVar15 = local_130 & 0x7fffff | 0x800000,
                 uVar12 = (ushort)(uVar15 >> ((byte)iVar14 & 0x1f)) & 0x3ff | uVar12,
                 (uVar15 >> ((char)-uVar13 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar12 = uVar12 + 1;
              }
            }
            else if (uVar13 < 0x8f) {
              uVar12 = uVar12 | (ushort)(local_130 >> 0xd) & 0x3ff |
                                ((uVar21 >> 7) - 0x10 & 0x1f) << 10;
            }
            else {
              uVar12 = uVar12 | 0x7bff;
            }
            *(ushort *)(lVar23 + 6 + lVar25 * 4) = uVar12;
          }
          else {
            *(uint *)(lVar23 + 0xc + lVar25 * 8) = local_130;
            *(uint *)(lVar23 + 8 + lVar25 * 8) = local_134;
          }
          lVar23 = *(longlong *)(lVar2 + 0xd0);
          lVar25 = *(uint *)(lVar2 + 0xe0) * uVar29;
          if (*(char *)(lVar2 + 0xe8) == '\0') {
            uVar12 = (ushort)(local_12c >> 0x10);
            uVar21 = uVar12 & 0x8000;
            uVar13 = local_12c >> 0x17 & 0xff;
            if (uVar13 < 0x71) {
              iVar14 = -uVar13 + 0x7e;
              if ((iVar14 < 0x19) &&
                 (uVar15 = local_12c & 0x7fffff | 0x800000,
                 uVar21 = (ushort)(uVar15 >> ((byte)iVar14 & 0x1f)) & 0x3ff | uVar21,
                 (uVar15 >> ((char)-uVar13 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar21 = uVar21 + 1;
              }
            }
            else if (uVar13 < 0x8f) {
              uVar21 = uVar21 | (ushort)(local_12c >> 0xd) & 0x3ff |
                                ((uVar12 >> 7) - 0x10 & 0x1f) << 10;
            }
            else {
              uVar21 = uVar21 | 0x7bff;
            }
            *(ushort *)(lVar23 + 8 + lVar25 * 4) = uVar21;
            local_1c8 = local_128;
            uVar21 = (ushort)(local_128 >> 0x10);
            uVar12 = uVar21 & 0x8000;
            uVar13 = local_128 >> 0x17 & 0xff;
            if (uVar13 < 0x71) {
              iVar14 = -uVar13 + 0x7e;
              if ((iVar14 < 0x19) &&
                 (uVar15 = local_128 & 0x7fffff | 0x800000,
                 uVar12 = (ushort)(uVar15 >> ((byte)iVar14 & 0x1f)) & 0x3ff | uVar12,
                 (uVar15 >> ((char)-uVar13 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar12 = uVar12 + 1;
              }
            }
            else if (uVar13 < 0x8f) {
              uVar12 = uVar12 | (ushort)(local_128 >> 0xd) & 0x3ff |
                                ((uVar21 >> 7) - 0x10 & 0x1f) << 10;
            }
            else {
              uVar12 = uVar12 | 0x7bff;
            }
            *(ushort *)(lVar23 + 10 + lVar25 * 4) = uVar12;
          }
          else {
            *(uint *)(lVar23 + 0x14 + lVar25 * 8) = local_128;
            *(uint *)(lVar23 + 0x10 + lVar25 * 8) = local_12c;
          }
          lVar23 = *(longlong *)(lVar2 + 0xd0);
          lVar25 = *(uint *)(lVar2 + 0xe0) * uVar29;
          if (*(char *)(lVar2 + 0xe8) == '\0') {
            uVar12 = (ushort)(local_124 >> 0x10);
            uVar21 = uVar12 & 0x8000;
            uVar13 = local_124 >> 0x17 & 0xff;
            if (uVar13 < 0x71) {
              iVar14 = -uVar13 + 0x7e;
              if ((iVar14 < 0x19) &&
                 (uVar15 = local_124 & 0x7fffff | 0x800000,
                 uVar21 = (ushort)(uVar15 >> ((byte)iVar14 & 0x1f)) & 0x3ff | uVar21,
                 (uVar15 >> ((char)-uVar13 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar21 = uVar21 + 1;
              }
            }
            else if (uVar13 < 0x8f) {
              uVar21 = uVar21 | ((uVar12 >> 7) - 0x10 & 0x1f) << 10 |
                                (ushort)(local_124 >> 0xd) & 0x3ff;
            }
            else {
              uVar21 = uVar21 | 0x7bff;
            }
            local_1c8 = local_120;
            *(ushort *)(lVar23 + 0xc + lVar25 * 4) = uVar21;
            uVar21 = (ushort)(local_120 >> 0x10);
            uVar12 = uVar21 & 0x8000;
            uVar13 = local_120 >> 0x17 & 0xff;
            if (uVar13 < 0x71) {
              iVar14 = -uVar13 + 0x7e;
              if ((iVar14 < 0x19) &&
                 (uVar15 = local_120 & 0x7fffff | 0x800000,
                 uVar12 = (ushort)(uVar15 >> ((byte)iVar14 & 0x1f)) & 0x3ff | uVar12,
                 (uVar15 >> ((char)-uVar13 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar12 = uVar12 + 1;
              }
            }
            else if (uVar13 < 0x8f) {
              uVar12 = uVar12 | ((uVar21 >> 7) - 0x10 & 0x1f) << 10 |
                                (ushort)(local_120 >> 0xd) & 0x3ff;
            }
            else {
              uVar12 = uVar12 | 0x7bff;
            }
            *(ushort *)(lVar23 + 0xe + lVar25 * 4) = uVar12;
          }
          else {
            *(uint *)(lVar23 + 0x1c + lVar25 * 8) = local_120;
            *(uint *)(lVar23 + 0x18 + lVar25 * 8) = local_124;
          }
          if (0 < lVar30) {
            uVar26 = uVar28;
            uVar27 = uVar28;
            do {
              uVar27 = uVar27 + 0x58;
              puVar1 = local_f4 + uVar26;
              uVar26 = uVar26 + 1;
              uVar24 = (ulonglong)(*(ulonglong *)(lVar2 + 0x1f8) != 0) - 1 & lVar2 + 0x148U |
                       *(ulonglong *)(lVar2 + 0x1f8);
              *(undefined4 *)
               ((ulonglong)(uint)(*(int *)((uVar24 - 8) + uVar27) * iVar16) +
               *(longlong *)((uVar24 - 0x10) + uVar27)) = *puVar1;
            } while ((longlong)uVar26 < lVar30);
          }
          uVar27 = (ulonglong)(iVar16 + 1);
          uVar29 = uVar29 + 1;
          uVar13 = CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62))) ^
                   CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62)));
          uVar62 = (undefined1)uVar13;
          uVar63 = (undefined1)(uVar13 >> 8);
          uVar64 = (undefined1)(uVar13 >> 0x10);
          uVar65 = (undefined1)(uVar13 >> 0x18);
          uVar66 = 0;
          uVar67 = 0;
          uVar68 = 0;
          uVar69 = 0;
        } while ((longlong)uVar29 < local_150);
      }
      local_1d8 = *(int *)(lVar2 + 0x144) * *(int *)(lVar2 + 0x140);
      local_1d0 = 1;
      pvVar17 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                  (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0x120),0);
      _guard_xfg_dispatch_icall_nop
                (pvVar17,*(void **)(lVar2 + 0x138),
                 (ulonglong)(uint)(*(int *)(lVar2 + 0x144) * *(int *)(lVar2 + 0x140)));
      (**(code **)(*DAT_146ab6358 + 0x4b8))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0x120));
      if (0 < lVar30) {
        do {
          local_1d0 = 1;
          lVar23 = ((ulonglong)(*(ulonglong *)(lVar2 + 0x1f8) != 0) - 1 & lVar2 + 0x148U |
                   *(ulonglong *)(lVar2 + 0x1f8)) + uVar28;
          local_1d8 = *(int *)(lVar23 + 0x54) * *(int *)(lVar23 + 0x50);
          pvVar17 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                      (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar23 + 0x30),0
                                      );
          _guard_xfg_dispatch_icall_nop
                    (pvVar17,*(void **)(lVar23 + 0x48),
                     (ulonglong)(uint)(*(int *)(lVar23 + 0x54) * *(int *)(lVar23 + 0x50)));
          (**(code **)(*DAT_146ab6358 + 0x4b8))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar23 + 0x30));
          uVar28 = uVar28 + 0x58;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x68);
      lVar30 = lVar2 + 8;
      local_1d8 = FStaticMeshVertexBuffer::GetTangentSize(lVar30);
      local_1d0 = 1;
      pvVar18 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,&DAT_146ab6e78,uVar3,0);
      pvVar17 = *(void **)(lVar2 + 200);
      iVar16 = FStaticMeshVertexBuffer::GetTangentSize(lVar30);
      _guard_xfg_dispatch_icall_nop(pvVar18,pvVar17,(longlong)iVar16);
      (**(code **)(*DAT_146ab6358 + 0x4b8))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0x68));
      uVar3 = *(undefined8 *)(lVar2 + 0xa0);
      local_1d8 = FStaticMeshVertexBuffer::GetTexCoordSize(lVar30);
      local_1d0 = 1;
      pvVar18 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,&DAT_146ab6e78,uVar3,0);
      pvVar17 = *(void **)(lVar2 + 0xd0);
      iVar16 = FStaticMeshVertexBuffer::GetTexCoordSize(lVar30);
      _guard_xfg_dispatch_icall_nop(pvVar18,pvVar17,(longlong)iVar16);
      (**(code **)(*DAT_146ab6358 + 0x4b8))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0xa0));
    }
    piVar11 = local_158;
    if (*(longlong *)(local_158 + 2) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(piVar11,0x18);
  }
  return;
}



// FUNCTION 14097b990 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCheckBox::GetPrivateStaticClass(void)

{
  if (DAT_1468642a8 == 0) {
    FUN_14171ccd0(L"/Script/ProceduralMeshComponent",L"ProceduralMeshComponent",&DAT_1468642a8,
                  FUN_14097c330,0x780,0x10000000,0,L"Engine",&LAB_14097c000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429bed90,&LAB_140447700,0);
  }
  return DAT_1468642a8;
}



// FUNCTION 14097ba40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UKismetProceduralMeshLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146864210 == 0) {
    FUN_14171ccd0(L"/Script/ProceduralMeshComponent",L"KismetProceduralMeshLibrary",&DAT_146864210,
                  StaticRegisterNativesUKismetProceduralMeshLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146864210;
}



// FUNCTION 14097baf0 FUN_14097baf0 body=47 status=ok
// SIG undefined FUN_14097baf0(void)

longlong FUN_14097baf0(void)

{
  if (DAT_1468642b0 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_1468642b0,&PTR_s__Script_ProceduralMeshComponent_144174760);
  }
  return DAT_1468642b0;
}



// FUNCTION 14097bb20 FUN_14097bb20 body=47 status=ok
// SIG undefined FUN_14097bb20(void)

longlong FUN_14097bb20(void)

{
  if (DAT_146864208 == 0) {
    FUN_141786440(&DAT_146864208,&PTR_GetPrivateStaticClass_1441730f0);
  }
  return DAT_146864208;
}



// FUNCTION 14097bb50 FUN_14097bb50 body=47 status=ok
// SIG undefined FUN_14097bb50(void)

longlong FUN_14097bb50(void)

{
  if (DAT_1468641c8 == 0) {
    FUN_141786a30(&DAT_1468641c8,&PTR_FUN_14628d820);
  }
  return DAT_1468641c8;
}



// FUNCTION 14097bb80 FUN_14097bb80 body=47 status=ok
// SIG undefined FUN_14097bb80(void)

longlong FUN_14097bb80(void)

{
  if (DAT_1468641d0 == 0) {
    FUN_141786a30(&DAT_1468641d0,&PTR_FUN_14628d9b0);
  }
  return DAT_1468641d0;
}



// FUNCTION 14097bbb0 FUN_14097bbb0 body=47 status=ok
// SIG undefined FUN_14097bbb0(void)

longlong FUN_14097bbb0(void)

{
  if (DAT_1468641d8 == 0) {
    FUN_141786a30(&DAT_1468641d8,&PTR_FUN_14628daf0);
  }
  return DAT_1468641d8;
}



// FUNCTION 14097bbe0 FUN_14097bbe0 body=47 status=ok
// SIG undefined FUN_14097bbe0(void)

longlong FUN_14097bbe0(void)

{
  if (DAT_1468641e0 == 0) {
    FUN_141786a30(&DAT_1468641e0,&PTR_FUN_14628dc90);
  }
  return DAT_1468641e0;
}



// FUNCTION 14097bc10 FUN_14097bc10 body=47 status=ok
// SIG undefined FUN_14097bc10(void)

longlong FUN_14097bc10(void)

{
  if (DAT_1468641e8 == 0) {
    FUN_141786a30(&DAT_1468641e8,&PTR_FUN_14628df60);
  }
  return DAT_1468641e8;
}



// FUNCTION 14097bc40 FUN_14097bc40 body=47 status=ok
// SIG undefined FUN_14097bc40(void)

longlong FUN_14097bc40(void)

{
  if (DAT_1468641f0 == 0) {
    FUN_141786a30(&DAT_1468641f0,&PTR_FUN_14628e230);
  }
  return DAT_1468641f0;
}



// FUNCTION 14097bc70 FUN_14097bc70 body=47 status=ok
// SIG undefined FUN_14097bc70(void)

longlong FUN_14097bc70(void)

{
  if (DAT_1468641f8 == 0) {
    FUN_141786a30(&DAT_1468641f8,&PTR_FUN_14628e570);
  }
  return DAT_1468641f8;
}



// FUNCTION 14097bca0 FUN_14097bca0 body=47 status=ok
// SIG undefined FUN_14097bca0(void)

longlong FUN_14097bca0(void)

{
  if (DAT_146864200 == 0) {
    FUN_141786a30(&DAT_146864200,&PTR_FUN_14628e7e0);
  }
  return DAT_146864200;
}



// FUNCTION 14097bcf0 FUN_14097bcf0 body=47 status=ok
// SIG undefined FUN_14097bcf0(void)

longlong FUN_14097bcf0(void)

{
  if (DAT_1468642a0 == 0) {
    FUN_141786440(&DAT_1468642a0,&PTR_GetPrivateStaticClass_144173e80);
  }
  return DAT_1468642a0;
}



// FUNCTION 14097bd20 FUN_14097bd20 body=47 status=ok
// SIG undefined FUN_14097bd20(void)

longlong FUN_14097bd20(void)

{
  if (DAT_146864248 == 0) {
    FUN_141786a30(&DAT_146864248,&PTR_FUN_14628ee90);
  }
  return DAT_146864248;
}



// FUNCTION 14097bd50 FUN_14097bd50 body=47 status=ok
// SIG undefined FUN_14097bd50(void)

longlong FUN_14097bd50(void)

{
  if (DAT_146864250 == 0) {
    FUN_141786a30(&DAT_146864250,&PTR_FUN_14628eed0);
  }
  return DAT_146864250;
}



// FUNCTION 14097bd80 FUN_14097bd80 body=47 status=ok
// SIG undefined FUN_14097bd80(void)

longlong FUN_14097bd80(void)

{
  if (DAT_146864258 == 0) {
    FUN_141786a30(&DAT_146864258,&PTR_FUN_14628ef10);
  }
  return DAT_146864258;
}



// FUNCTION 14097bdb0 FUN_14097bdb0 body=47 status=ok
// SIG undefined FUN_14097bdb0(void)

longlong FUN_14097bdb0(void)

{
  if (DAT_146864260 == 0) {
    FUN_141786a30(&DAT_146864260,&PTR_FUN_14628ef50);
  }
  return DAT_146864260;
}



// FUNCTION 14097bde0 FUN_14097bde0 body=47 status=ok
// SIG undefined FUN_14097bde0(void)

longlong FUN_14097bde0(void)

{
  if (DAT_146864268 == 0) {
    FUN_141786a30(&DAT_146864268,&PTR_FUN_14628f230);
  }
  return DAT_146864268;
}



// FUNCTION 14097be10 FUN_14097be10 body=47 status=ok
// SIG undefined FUN_14097be10(void)

longlong FUN_14097be10(void)

{
  if (DAT_146864270 == 0) {
    FUN_141786a30(&DAT_146864270,&PTR_FUN_14628f720);
  }
  return DAT_146864270;
}



// FUNCTION 14097be40 FUN_14097be40 body=47 status=ok
// SIG undefined FUN_14097be40(void)

longlong FUN_14097be40(void)

{
  if (DAT_146864278 == 0) {
    FUN_141786a30(&DAT_146864278,&PTR_FUN_14628f7d0);
  }
  return DAT_146864278;
}



// FUNCTION 14097be70 FUN_14097be70 body=47 status=ok
// SIG undefined FUN_14097be70(void)

longlong FUN_14097be70(void)

{
  if (DAT_146864280 == 0) {
    FUN_141786a30(&DAT_146864280,&PTR_FUN_14628f890);
  }
  return DAT_146864280;
}



// FUNCTION 14097bea0 FUN_14097bea0 body=47 status=ok
// SIG undefined FUN_14097bea0(void)

longlong FUN_14097bea0(void)

{
  if (DAT_146864288 == 0) {
    FUN_141786a30(&DAT_146864288,&PTR_FUN_14628f950);
  }
  return DAT_146864288;
}



// FUNCTION 14097bed0 FUN_14097bed0 body=47 status=ok
// SIG undefined FUN_14097bed0(void)

longlong FUN_14097bed0(void)

{
  if (DAT_146864290 == 0) {
    FUN_141786a30(&DAT_146864290,&PTR_FUN_14628fc20);
  }
  return DAT_146864290;
}



// FUNCTION 14097bf00 FUN_14097bf00 body=47 status=ok
// SIG undefined FUN_14097bf00(void)

longlong FUN_14097bf00(void)

{
  if (DAT_146864298 == 0) {
    FUN_141786a30(&DAT_146864298,&PTR_FUN_146290020);
  }
  return DAT_146864298;
}



// FUNCTION 14097bf30 FUN_14097bf30 body=53 status=ok
// SIG undefined FUN_14097bf30(void)

void FUN_14097bf30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144174360;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14097bf70 FUN_14097bf70 body=53 status=ok
// SIG undefined FUN_14097bf70(void)

void FUN_14097bf70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4c;
    *puVar1 = &PTR_FUN_144174478;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14097bfb0 FUN_14097bfb0 body=53 status=ok
// SIG undefined FUN_14097bfb0(void)

void FUN_14097bfb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144174590;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14097c070 FUN_14097c070 body=89 status=ok
// SIG undefined FUN_14097c070(void)

undefined8 FUN_14097c070(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  param_2[3] = 0x3f800000;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined2 *)((longlong)param_2 + 0x29) = 0xffff;
  *(undefined1 *)(param_2 + 5) = 0xff;
  *(undefined1 *)((longlong)param_2 + 0x2b) = 0xff;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  return 0;
}



// FUNCTION 14097c0d0 Copy body=293 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FProcMeshSection>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  if (param_4 != 0) {
    puVar8 = (undefined8 *)(param_3 + 0x10);
    do {
      if (param_2 != puVar8 + -2) {
        iVar3 = *(int *)(puVar8 + -1);
        pvVar4 = (void *)puVar8[-2];
        *(int *)(param_2 + 1) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_140976d70(param_2,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar4,(longlong)iVar3 * 0x4c);
        }
      }
      puVar1 = param_2 + 2;
      if (puVar1 != puVar8) {
        iVar3 = *(int *)(puVar8 + 1);
        pvVar4 = (void *)*puVar8;
        *(int *)(param_2 + 3) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar3 << 2);
        }
      }
      uVar5 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uVar6 = *(undefined4 *)(puVar8 + 3);
      uVar7 = *(undefined4 *)((longlong)puVar8 + 0x1c);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar8 + 2);
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 5) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar7;
      param_2[6] = puVar8[4];
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)(puVar8 + 5);
      *(undefined1 *)((longlong)param_2 + 0x3c) = *(undefined1 *)((longlong)puVar8 + 0x2c);
      puVar2 = (undefined1 *)((longlong)puVar8 + 0x2d);
      puVar8 = puVar8 + 8;
      *(undefined1 *)((longlong)param_2 + 0x3d) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14097c260 EProcMeshSliceCapOption_StaticEnum body=85 status=ok
// SIG undefined EProcMeshSliceCapOption_StaticEnum(void)

void EProcMeshSliceCapOption_StaticEnum(void)

{
  if (DAT_146864178 == 0) {
    if (DAT_1468642b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1468642b0,&PTR_s__Script_ProceduralMeshComponent_144174760);
    }
    DAT_146864178 = GetStaticEnum(FUN_14097c4e0,DAT_1468642b0,L"EProcMeshSliceCapOption");
  }
  return;
}



// FUNCTION 14097c2c0 Get_Z_Construct_UScriptStruct_FProcMeshSection_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FProcMeshSection_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FProcMeshSection_CRC(void)

{
  return 0x58b15df9;
}



// FUNCTION 14097c2d0 Get_Z_Construct_UScriptStruct_FProcMeshTangent_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FProcMeshTangent_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FProcMeshTangent_CRC(void)

{
  return 0x18d1a267;
}



// FUNCTION 14097c2e0 Get_Z_Construct_UScriptStruct_FProcMeshVertex_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FProcMeshVertex_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FProcMeshVertex_CRC(void)

{
  return 0x3b5a564d;
}



// FUNCTION 14097c300 StaticRegisterNativesUKismetProceduralMeshLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUKismetProceduralMeshLibrary(void)

void UKismetProceduralMeshLibrary::StaticRegisterNativesUKismetProceduralMeshLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CalculateTangentsForMesh_1441742e0,8);
  return;
}



// FUNCTION 14097c330 FUN_14097c330 body=34 status=ok
// SIG undefined FUN_14097c330(void)

void FUN_14097c330(void)

{
  undefined8 uVar1;
  
  uVar1 = UCheckBox::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddCollisionConvexMesh_1441746b0,0xb);
  return;
}



// FUNCTION 14097c360 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FProcMeshSection::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146864218 == 0) {
    if (DAT_1468642b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1468642b0,&PTR_s__Script_ProceduralMeshComponent_144174760);
    }
    lVar1 = DAT_1468642b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FProcMeshSection_CRC();
    DAT_146864218 = GetStaticStruct(FUN_14097c510,lVar1,L"ProcMeshSection",0x40,uVar2);
  }
  return;
}



// FUNCTION 14097c3e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FProcMeshTangent::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146864238 == 0) {
    if (DAT_1468642b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1468642b0,&PTR_s__Script_ProceduralMeshComponent_144174760);
    }
    lVar1 = DAT_1468642b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FProcMeshTangent_CRC();
    DAT_146864238 = GetStaticStruct(FUN_14097c540,lVar1,L"ProcMeshTangent",0x10,uVar2);
  }
  return;
}



// FUNCTION 14097c460 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FProcMeshVertex::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146864228 == 0) {
    if (DAT_1468642b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1468642b0,&PTR_s__Script_ProceduralMeshComponent_144174760);
    }
    lVar1 = DAT_1468642b0;
    uVar2 = Get_Z_Construct_UScriptStruct_FProcMeshVertex_CRC();
    DAT_146864228 = GetStaticStruct(FUN_14097c570,lVar1,L"ProcMeshVertex",0x4c,uVar2);
  }
  return;
}



// FUNCTION 14097c4e0 FUN_14097c4e0 body=47 status=ok
// SIG undefined FUN_14097c4e0(void)

longlong FUN_14097c4e0(void)

{
  if (DAT_1468641c0 == 0) {
    FUN_1417866a0(&DAT_1468641c0,&PTR_FUN_14628d580);
  }
  return DAT_1468641c0;
}



// FUNCTION 14097c510 FUN_14097c510 body=47 status=ok
// SIG undefined FUN_14097c510(void)

longlong FUN_14097c510(void)

{
  if (DAT_146864220 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146864220,&PTR_FUN_14628ea10);
  }
  return DAT_146864220;
}



// FUNCTION 14097c540 FUN_14097c540 body=47 status=ok
// SIG undefined FUN_14097c540(void)

longlong FUN_14097c540(void)

{
  if (DAT_146864240 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146864240,&PTR_FUN_14628edd0);
  }
  return DAT_146864240;
}



// FUNCTION 14097c570 FUN_14097c570 body=47 status=ok
// SIG undefined FUN_14097c570(void)

longlong FUN_14097c570(void)

{
  if (DAT_146864230 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146864230,&PTR_FUN_14628ec90);
  }
  return DAT_146864230;
}



// FUNCTION 14097c5a0 execAddCollisionConvexMesh body=225 status=ok
// SIG undefined execAddCollisionConvexMesh(void)

void UProceduralMeshComponent::execAddCollisionConvexMesh(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 0xc);
  }
  FUN_1409709d0(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097c690 execCalculateTangentsForMesh body=573 status=ok
// SIG undefined execCalculateTangentsForMesh(void)

void UKismetProceduralMeshLibrary::execCalculateTangentsForMesh(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_68 [10];
  
  local_68[8] = 0;
  local_68[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 8);
  }
  local_68[6] = 0;
  local_68[7] = 0;
  plVar3 = local_68 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 6);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  plVar5 = local_68 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  plVar4 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  plVar1 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar2 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140970d30(plVar3,plVar5,plVar4,plVar1,plVar2);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[6] != 0) {
    FMemory::Free();
  }
  if (local_68[8] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097c910 FUN_14097c910 body=126 status=ok
// SIG undefined FUN_14097c910(void)

void FUN_14097c910(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140972a40(param_1,local_res10[0]);
  return;
}



// FUNCTION 14097c990 execConvertQuadToTriangles body=410 status=ok
// SIG undefined execConvertQuadToTriangles(void)

void UKismetProceduralMeshLibrary::execConvertQuadToTriangles(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20 [3];
  
  local_20[0] = 0;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  local_24 = 0;
  plVar1 = local_20;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  ConvertQuadToTriangles(plVar1,local_24,local_28,local_res20[0],local_res10[0]);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097cb30 execCopyProceduralMeshFromStaticMeshComponent body=302 status=ok
// SIG undefined execCopyProceduralMeshFromStaticMeshComponent(void)

void UKismetProceduralMeshLibrary::execCopyProceduralMeshFromStaticMeshComponent
               (undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140973070(local_10,local_res20[0],local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 14097cc60 execCreateGridMeshTriangles body=348 status=ok
// SIG undefined execCreateGridMeshTriangles(void)

void UKismetProceduralMeshLibrary::execCreateGridMeshTriangles(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  longlong local_20 [3];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_20[0] = 0;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  plVar1 = local_20;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  CreateGridMeshTriangles(local_28[0],local_res20[0],bVar2,plVar1);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097cdc0 execCreateMeshSection body=848 status=ok
// SIG undefined execCreateMeshSection(void)

void UProceduralMeshComponent::execCreateMeshSection(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res10 [2];
  undefined4 local_res20 [2];
  longlong local_a8 [14];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8 + 0xc);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 0xc);
  }
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  plVar4 = local_a8 + 0xc;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8 + 10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 10);
  }
  local_a8[8] = 0;
  local_a8[9] = 0;
  plVar3 = local_a8 + 10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8 + 8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 8);
  }
  local_a8[6] = 0;
  local_a8[7] = 0;
  plVar6 = local_a8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 6);
  }
  local_a8[4] = 0;
  local_a8[5] = 0;
  plVar5 = local_a8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 4);
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  plVar1 = local_a8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 2);
  }
  local_res10[0] = 0;
  plVar2 = local_a8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140973900(param_1,local_res20[0],plVar4,plVar3,plVar6,plVar5,local_a8,local_a8,local_a8,plVar1
                ,plVar2,local_res10[0] != 0);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (local_a8[6] != 0) {
    FMemory::Free();
  }
  if (local_a8[8] != 0) {
    FMemory::Free();
  }
  if (local_a8[10] != 0) {
    FMemory::Free();
  }
  if (local_a8[0xc] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097d110 execCreateMeshSection_LinearColor body=1121 status=ok
// SIG undefined execCreateMeshSection_LinearColor(void)

void UProceduralMeshComponent::execCreateMeshSection_LinearColor
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res10 [2];
  undefined4 local_res20 [2];
  longlong local_e8 [18];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_e8[0x10] = 0;
  local_e8[0x11] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8 + 0x10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 0x10);
  }
  local_e8[0xe] = 0;
  local_e8[0xf] = 0;
  local_40 = local_e8 + 0x10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_40 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8 + 0xe);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 0xe);
  }
  local_e8[0xc] = 0;
  local_e8[0xd] = 0;
  local_48 = local_e8 + 0xe;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_48 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8 + 0xc);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 0xc);
  }
  local_e8[10] = 0;
  local_e8[0xb] = 0;
  local_50 = local_e8 + 0xc;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_50 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8 + 10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 10);
  }
  local_e8[8] = 0;
  local_e8[9] = 0;
  local_58 = local_e8 + 10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_58 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8 + 8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 8);
  }
  local_e8[6] = 0;
  local_e8[7] = 0;
  plVar3 = local_e8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 6);
  }
  local_e8[4] = 0;
  local_e8[5] = 0;
  plVar2 = local_e8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 4);
  }
  local_e8[2] = 0;
  local_e8[3] = 0;
  plVar5 = local_e8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 2);
  }
  local_e8[0] = 0;
  local_e8[1] = 0;
  plVar4 = local_e8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  local_res10[0] = 0;
  plVar1 = local_e8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  CreateMeshSection_LinearColor
            (param_1,local_res20[0],local_40,local_48,local_50,local_58,plVar3,plVar2,plVar5,plVar4,
             plVar1,local_res10[0] != 0);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (local_e8[2] != 0) {
    FMemory::Free();
  }
  if (local_e8[4] != 0) {
    FMemory::Free();
  }
  if (local_e8[6] != 0) {
    FMemory::Free();
  }
  if (local_e8[8] != 0) {
    FMemory::Free();
  }
  if (local_e8[10] != 0) {
    FMemory::Free();
  }
  if (local_e8[0xc] != 0) {
    FMemory::Free();
  }
  if (local_e8[0xe] != 0) {
    FMemory::Free();
  }
  if (local_e8[0x10] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097d580 execGenerateBoxMesh body=649 status=ok
// SIG undefined execGenerateBoxMesh(void)

void UKismetProceduralMeshLibrary::execGenerateBoxMesh(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68 [10];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_68[8] = 0;
  local_68[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 8);
  }
  local_68[6] = 0;
  local_68[7] = 0;
  plVar3 = local_68 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 6);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  plVar5 = local_68 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  plVar4 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = local_88;
  plVar1 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_70 = local_80;
  GenerateBoxMesh(&local_78,plVar3,plVar5,plVar4,plVar2,plVar1);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[6] != 0) {
    FMemory::Free();
  }
  if (local_68[8] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097d810 FUN_14097d810 body=43 status=ok
// SIG undefined FUN_14097d810(void)

void FUN_14097d810(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140975980();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14097d840 execGetSectionFromProceduralMesh body=683 status=ok
// SIG undefined execGetSectionFromProceduralMesh(void)

void UKismetProceduralMeshLibrary::execGetSectionFromProceduralMesh
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  longlong local_78 [10];
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_78[8] = 0;
  local_78[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78 + 8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 8);
  }
  local_78[6] = 0;
  local_78[7] = 0;
  plVar3 = local_78 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 6);
  }
  local_78[4] = 0;
  local_78[5] = 0;
  plVar5 = local_78 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  plVar4 = local_78 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  plVar2 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar1 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140975c40(local_res20,local_res10[0],plVar3,plVar5,plVar4,plVar2,plVar1);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_78[6] != 0) {
    FMemory::Free();
  }
  if (local_78[8] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097daf0 execGetSectionFromStaticMesh body=743 status=ok
// SIG undefined execGetSectionFromStaticMesh(void)

void UKismetProceduralMeshLibrary::execGetSectionFromStaticMesh(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_88;
  longlong local_80 [11];
  
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_80[8] = 0;
  local_80[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80 + 8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 8);
  }
  local_80[6] = 0;
  local_80[7] = 0;
  plVar3 = local_80 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 6);
  }
  local_80[4] = 0;
  local_80[5] = 0;
  plVar5 = local_80 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 4);
  }
  local_80[2] = 0;
  local_80[3] = 0;
  plVar4 = local_80 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 2);
  }
  local_80[0] = 0;
  local_80[1] = 0;
  plVar2 = local_80 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar1 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140975e60(local_88,local_res20[0],local_res10[0],plVar3,plVar5,plVar4,plVar2,plVar1);
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if (local_80[2] != 0) {
    FMemory::Free();
  }
  if (local_80[4] != 0) {
    FMemory::Free();
  }
  if (local_80[6] != 0) {
    FMemory::Free();
  }
  if (local_80[8] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097dde0 execRemoveAt body=141 status=ok
// SIG undefined execRemoveAt(void)

void UMediaPlaylist::execRemoveAt(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140976ad0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14097de70 execOnControllerConnectionChanged body=192 status=ok
// SIG undefined execOnControllerConnectionChanged(void)

void UConsoleCompatGameInstance::execOnControllerConnectionChanged
               (undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140977150(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 14097df30 execSliceProceduralMesh body=550 status=ok
// SIG undefined execSliceProceduralMesh(void)

void UKismetProceduralMeshLibrary::execSliceProceduralMesh(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  int local_res20 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10[0] = 0;
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_38 = local_60;
  local_28 = local_50;
  local_30 = local_58;
  local_20 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140977790(local_68,&local_28,&local_38,bVar2,puVar1,local_res10[0],local_70);
  return;
}



// FUNCTION 14097e160 execUpdateMeshSection body=694 status=ok
// SIG undefined execUpdateMeshSection(void)

void UProceduralMeshComponent::execUpdateMeshSection(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res10 [2];
  longlong local_88 [12];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_88[10] = 0;
  local_88[0xb] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88 + 10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 10);
  }
  local_88[8] = 0;
  local_88[9] = 0;
  plVar5 = local_88 + 10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88 + 8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 8);
  }
  local_88[6] = 0;
  local_88[7] = 0;
  plVar4 = local_88 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 6);
  }
  local_88[4] = 0;
  local_88[5] = 0;
  plVar2 = local_88 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 4);
  }
  local_88[2] = 0;
  local_88[3] = 0;
  plVar3 = local_88 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  plVar1 = local_88 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14097a3d0(param_1,local_res10[0],plVar5,plVar4,plVar2,local_88,local_88,local_88,plVar3,plVar1
               );
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_88[2] != 0) {
    FMemory::Free();
  }
  if (local_88[4] != 0) {
    FMemory::Free();
  }
  if (local_88[6] != 0) {
    FMemory::Free();
  }
  if (local_88[8] != 0) {
    FMemory::Free();
  }
  if (local_88[10] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097e420 execUpdateMeshSection_LinearColor body=931 status=ok
// SIG undefined execUpdateMeshSection_LinearColor(void)

void UProceduralMeshComponent::execUpdateMeshSection_LinearColor
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 local_res10 [2];
  longlong local_c8 [16];
  longlong *local_48;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8 + 0xe);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 0xe);
  }
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_48 = local_c8 + 0xe;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_48 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8 + 0xc);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 0xc);
  }
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  plVar1 = local_c8 + 0xc;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8 + 10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 10);
  }
  local_c8[8] = 0;
  local_c8[9] = 0;
  plVar5 = local_c8 + 10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8 + 8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 8);
  }
  local_c8[6] = 0;
  local_c8[7] = 0;
  plVar4 = local_c8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 6);
  }
  local_c8[4] = 0;
  local_c8[5] = 0;
  plVar7 = local_c8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 4);
  }
  local_c8[2] = 0;
  local_c8[3] = 0;
  plVar6 = local_c8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 2);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  plVar3 = local_c8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  plVar2 = local_c8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UpdateMeshSection_LinearColor
            (param_1,local_res10[0],local_48,plVar1,plVar5,plVar4,plVar7,plVar6,plVar3,plVar2);
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  if (local_c8[2] != 0) {
    FMemory::Free();
  }
  if (local_c8[4] != 0) {
    FMemory::Free();
  }
  if (local_c8[6] != 0) {
    FMemory::Free();
  }
  if (local_c8[8] != 0) {
    FMemory::Free();
  }
  if (local_c8[10] != 0) {
    FMemory::Free();
  }
  if (local_c8[0xc] != 0) {
    FMemory::Free();
  }
  if (local_c8[0xe] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14097e7d0 FUN_14097e7d0 body=43 status=ok
// SIG undefined FUN_14097e7d0(void)

undefined8 * FUN_14097e7d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144174788;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14097e800 SetLightColor body=87 status=ok
// SIG undefined SetLightColor(void)

void FPS4Controllers::SetLightColor(longlong param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uStackX_19;
  undefined1 uStackX_1a;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  
  lVar2 = 0;
  piVar1 = (int *)(param_1 + 0x300);
  while (((char)piVar1[6] == '\0' || (*piVar1 != param_2))) {
    lVar2 = lVar2 + 1;
    piVar1 = piVar1 + 0x9a;
    if (3 < lVar2) {
      return;
    }
  }
  uStackX_1a = (undefined1)((uint)param_3 >> 0x10);
  local_res20 = uStackX_1a;
  uStackX_19 = (undefined1)((uint)param_3 >> 8);
  local_res21 = uStackX_19;
  local_res22 = (undefined1)param_3;
  FUN_143982820(piVar1[2],&local_res20);
  return;
}



// FUNCTION 14097e8a0 FUN_14097e8a0 body=137 status=ok
// SIG undefined FUN_14097e8a0(void)

undefined8 * FUN_14097e8a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1441747e0;
  plVar4 = (longlong *)param_1[0x153];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xab0);
  }
  return param_1;
}



// FUNCTION 14097e970 SendControllerEvents body=68 status=ok
// SIG undefined SendControllerEvents(void)

void FWinDualShock::SendControllerEvents(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_14097f1b0(param_1 + 0x18,iVar1,param_1 + 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



// FUNCTION 14097eab0 FUN_14097eab0 body=215 status=ok
// SIG undefined FUN_14097eab0(void)

undefined8 * FUN_14097eab0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1441747f8;
  Curl_ssl_cleanup();
  param_1[3] = &PTR_FUN_1441747e0;
  plVar4 = (longlong *)param_1[0x156];
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
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_144174788;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xac8);
  }
  return param_1;
}



// FUNCTION 14097eb90 FUN_14097eb90 body=409 status=ok
// SIG undefined FUN_14097eb90(void)

undefined8 * FUN_14097eb90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_18;
  undefined1 local_17 [15];
  
  puVar2 = (undefined8 *)operator_new(0xac8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_1441747f8;
    puVar2[1] = *param_3;
    lVar1 = param_3[1];
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    FPCDuallShockControllers::FPCDuallShockControllers(puVar2 + 3);
    local_res10[0] = 0;
    local_res20[0] = 0;
    local_18 = 0;
    local_17[0] = 0;
    if (DAT_1468b6148 != 0) {
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"PS4Application",L"bDS4TouchEvents",local_res10,&DAT_1468e2360);
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"PS4Application",L"bDS4TouchAxisButtons",local_res20,&DAT_1468e2360)
      ;
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"PS4Application",L"bDS4MouseEvents",&local_18,&DAT_1468e2360);
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"PS4Application",L"bDS4MotionEvents",local_17,&DAT_1468e2360);
    }
    *(undefined1 *)(puVar2 + 0x157) = local_res10[0];
    *(undefined1 *)((longlong)puVar2 + 0xab9) = local_res20[0];
    *(undefined1 *)((longlong)puVar2 + 0xaba) = local_18;
    *(undefined1 *)((longlong)puVar2 + 0xabb) = local_17[0];
  }
  *param_2 = puVar2;
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar2;
  }
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar2,puVar2);
  return param_2;
}



// FUNCTION 14097ed30 FPCDuallShockControllers body=811 status=ok
// SIG undefined FPCDuallShockControllers(void)

undefined8 * FPCDuallShockControllers::FPCDuallShockControllers(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = &PTR_FUN_1441747e0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar2 = (undefined8 *)((longlong)param_1 + 0x34c);
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
  lVar4 = 4;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 0x4d;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  *(undefined4 *)((longlong)param_1 + 0xaa4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x155) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x154) = 0;
  FUN_143982440();
  ::_guard_xfg_dispatch_icall_nop(param_1 + 0x1e,0,0x9a0);
  puVar2 = param_1 + 99;
  uVar6 = 0;
  do {
    if (*(int *)((longlong)puVar2 + -0xc) == 0) {
      ::_guard_xfg_dispatch_icall_nop(puVar2 + -0x45,0,0x268);
      *(uint *)(puVar2 + -3) = uVar6;
      *(uint *)((longlong)puVar2 + -0x14) = uVar6 + 1;
      puVar3 = (undefined4 *)((longlong)puVar2 + -0x1c);
      *(undefined4 *)((longlong)puVar2 + -0xc) = 1;
      uVar5 = 0;
      do {
        puVar3[-3] = 0xffffffff;
        uVar5 = uVar5 + 2;
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 6;
      } while (uVar5 < 2);
      uVar1 = FUN_1439824e0(uVar6 + 1,0,0,0);
      *(undefined4 *)(puVar2 + -2) = uVar1;
      *(undefined1 *)puVar2 = 0;
    }
    else {
      *(int *)((longlong)puVar2 + -0xc) = *(int *)((longlong)puVar2 + -0xc) + 1;
    }
    uVar6 = uVar6 + 1;
    puVar2 = puVar2 + 0x4d;
  } while ((int)uVar6 < 4);
  param_1[1] = DAT_1469e5b90;
  param_1[2] = DAT_1469e5bc8;
  param_1[3] = DAT_1469e5bd0;
  param_1[4] = DAT_1469e5bf0;
  param_1[5] = DAT_1469e5c38;
  param_1[6] = DAT_1469e5c48;
  param_1[7] = DAT_1469e5c40;
  param_1[8] = DAT_1469e5c50;
  param_1[9] = DAT_1469e5c28;
  param_1[10] = DAT_1469e5c30;
  param_1[0xb] = DAT_1469e5c18;
  param_1[0xc] = DAT_1469e5c20;
  param_1[0xd] = DAT_1469e5c10;
  param_1[0xe] = DAT_1469e5c00;
  param_1[0xf] = DAT_1469e5bf8;
  param_1[0x10] = DAT_1469e5c08;
  param_1[0x11] = DAT_1469e5b90;
  param_1[0x12] = DAT_1469e5b90;
  param_1[0x13] = DAT_1469e5b90;
  param_1[0x14] = DAT_1469e5b90;
  param_1[0x15] = DAT_1469e5bd8;
  param_1[0x16] = DAT_1469e5c70;
  param_1[0x17] = DAT_1469e5c68;
  param_1[0x18] = DAT_1469e5c58;
  param_1[0x19] = DAT_1469e5c60;
  param_1[0x1a] = DAT_1469e5c90;
  param_1[0x1b] = DAT_1469e5c88;
  param_1[0x1c] = DAT_1469e5c78;
  param_1[0x1d] = DAT_1469e5c80;
  return param_1;
}



// FUNCTION 14097f060 FUN_14097f060 body=274 status=ok
// SIG undefined FUN_14097f060(void)

void FUN_14097f060(longlong *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar6 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar9 = lVar7 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar9 + 8 + *param_1) == 0) ||
          (plVar1 = *(longlong **)(lVar9 + *param_1), plVar1 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4), cVar3 == '\0')) {
        bVar2 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar6 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar6 + -1;
  if ((bVar2) && (iVar6 + -1 < 1)) {
    iVar6 = (int)param_1[1];
    uVar8 = 0;
    uVar10 = uVar8;
    iVar4 = iVar6;
    if (0 < iVar6) {
      do {
        if (((*(int *)(uVar8 + 8 + *param_1) == 0) ||
            (plVar1 = *(longlong **)(uVar8 + *param_1), plVar1 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar1 + 0x10))(), cVar3 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1,uVar10,1,1);
        }
        else {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar8 = uVar8 + 0x10;
        }
        iVar4 = (int)param_1[1];
      } while ((int)uVar10 < iVar4);
    }
    iVar5 = iVar4 * 2;
    if (iVar5 < 3) {
      iVar5 = 2;
    }
    *(int *)(param_1 + 2) = iVar5;
    if ((iVar5 < iVar6) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
    }
  }
  return;
}



// FUNCTION 14097f180 FUN_14097f180 body=39 status=ok
// SIG undefined FUN_14097f180(void)

void FUN_14097f180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144174908;
    return;
  }
  return;
}



// FUNCTION 14097f1b0 FUN_14097f1b0 body=3357 status=ok
// SIG undefined FUN_14097f1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14097f1b0(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double *pdVar15;
  int *piVar16;
  ushort *puVar17;
  int *piVar18;
  char *pcVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  byte *pbVar23;
  char *pcVar24;
  double dVar25;
  undefined1 auStack_168 [32];
  int *local_148;
  int local_140;
  char local_138 [4];
  int local_134;
  char local_130 [8];
  undefined8 local_128;
  ulonglong local_120;
  int local_118;
  int local_114;
  undefined8 *local_110;
  char *local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  LARGE_INTEGER local_98;
  undefined8 local_90;
  longlong *plStack_88;
  byte local_80 [4];
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  byte local_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  piVar18 = (int *)(param_1 + 0xf0 + (longlong)param_2 * 0x268);
  local_114 = param_2;
  local_110 = param_3;
  iVar10 = FUN_143982570(piVar18[0x86],piVar18 + 0x1e);
  if (piVar18[0x1e] < 0) {
    if (*piVar18 < 0) {
      return;
    }
    piVar18[0x1e] = -0x80000000;
  }
  iVar21 = piVar18[0x8a];
  if ((iVar10 == 0) && ((char)piVar18[0x31] != '\0')) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  uVar22 = 0;
  *(char *)(piVar18 + 0x8a) = cVar9;
  if (cVar9 == '\0') {
    if ((char)iVar21 == '\0') {
      return;
    }
  }
  else {
    if ((char)iVar21 == '\0') {
      if (cVar9 != '\0') {
        iVar10 = FUN_1439822f0(piVar18[0x86],piVar18 + 0x8e);
        if (iVar10 == 0) {
          piVar18[0x8d] = 0;
          *(bool *)((longlong)piVar18 + 0x229) = *(char *)((longlong)piVar18 + 0x242) == '\x01';
          piVar18[0x8b] = (uint)*(ushort *)(piVar18 + 0x8f);
          piVar18[0x8c] = (uint)*(ushort *)((longlong)piVar18 + 0x23e);
        }
        FUN_14097f060(&DAT_1464aef50,1,piVar18[0x85]);
        uVar4 = piVar18[0x84];
        if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
          (&DAT_1468c21f8)[(int)uVar4] = 3;
          (&DAT_1468c2200)[(int)uVar4] = 1;
        }
      }
      goto LAB_14097f31b;
    }
    if (cVar9 != '\0') goto LAB_14097f31b;
  }
  FUN_14097f060(&DAT_1464aef50,0,piVar18[0x85]);
LAB_14097f31b:
  bVar3 = *(byte *)(piVar18 + 0x1f);
  if ((bVar3 != *(byte *)(piVar18 + 1)) || (0x80 < (byte)(bVar3 - 0x40))) {
    (**(code **)(*(longlong *)*param_3 + 0x80))
              ((longlong *)*param_3,DAT_1469e5b98,piVar18[0x84],((float)bVar3 - 128.0) * 0.0078125);
  }
  bVar3 = *(byte *)((longlong)piVar18 + 0x7d);
  if ((bVar3 != *(byte *)((longlong)piVar18 + 5)) || (0x80 < (byte)(bVar3 - 0x40))) {
    (**(code **)(*(longlong *)*param_3 + 0x80))
              ((longlong *)*param_3,DAT_1469e5ba0,piVar18[0x84],
               ((float)(int)(0xff - (uint)bVar3) - 128.0) * 0.0078125);
  }
  bVar3 = *(byte *)((longlong)piVar18 + 0x7e);
  if ((bVar3 != *(byte *)((longlong)piVar18 + 6)) || (0x80 < (byte)(bVar3 - 0x40))) {
    (**(code **)(*(longlong *)*param_3 + 0x80))
              ((longlong *)*param_3,DAT_1469e5ba8,piVar18[0x84],((float)bVar3 - 128.0) * 0.0078125);
  }
  bVar3 = *(byte *)((longlong)piVar18 + 0x7f);
  if ((bVar3 != *(byte *)((longlong)piVar18 + 7)) || (0x80 < (byte)(bVar3 - 0x40))) {
    (**(code **)(*(longlong *)*param_3 + 0x80))
              ((longlong *)*param_3,DAT_1469e5bb0,piVar18[0x84],
               ((float)(int)(0xff - (uint)bVar3) - 128.0) * 0.0078125);
  }
  if (*(byte *)(piVar18 + 0x20) != *(byte *)(piVar18 + 2)) {
    (**(code **)(*(longlong *)*param_3 + 0x80))
              ((longlong *)*param_3,DAT_1469e5bb8,piVar18[0x84],
               (float)*(byte *)(piVar18 + 0x20) * 0.003921569);
    uVar4 = piVar18[0x84];
    if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
      (&DAT_1468c21f8)[(int)uVar4] = 3;
      (&DAT_1468c2200)[(int)uVar4] = 1;
    }
  }
  if (*(byte *)((longlong)piVar18 + 0x81) != *(byte *)((longlong)piVar18 + 9)) {
    (**(code **)(*(longlong *)*param_3 + 0x80))
              ((longlong *)*param_3,DAT_1469e5bc0,piVar18[0x84],
               (float)*(byte *)((longlong)piVar18 + 0x81) * 0.003921569);
    uVar4 = piVar18[0x84];
    if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
      (&DAT_1468c21f8)[(int)uVar4] = 3;
      (&DAT_1468c2200)[(int)uVar4] = 1;
    }
  }
  if ((*(char *)(param_1 + 0xaa1) != '\0') && ((char)piVar18[0x2b] != '\0')) {
    puVar12 = (uint *)(piVar18 + 0x80);
    uVar13 = uVar22;
    uVar14 = uVar22;
    do {
      iVar10 = (int)uVar14;
      if (*puVar12 == (uint)*(byte *)(piVar18 + 0x2e)) {
        if ((piVar18[(longlong)iVar10 * 3 + 0x7f] == (uint)*(ushort *)((longlong)piVar18 + 0xb6)) ||
           (piVar18[(longlong)iVar10 * 3 + 0x7e] == (uint)*(ushort *)(piVar18 + 0x2d)))
        goto LAB_14097f5de;
        break;
      }
      uVar14 = (ulonglong)(iVar10 + 1);
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 3;
    } while ((longlong)uVar13 < 2);
    (**(code **)(*(longlong *)*param_3 + 0x80))
              ((longlong *)*param_3,DAT_1469e5be0,piVar18[0x84],
               (float)*(ushort *)(piVar18 + 0x2d) / (float)piVar18[0x8b]);
    uVar4 = piVar18[0x84];
    if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
      (&DAT_1468c21f8)[(int)uVar4] = 3;
      (&DAT_1468c2200)[(int)uVar4] = 1;
    }
LAB_14097f5de:
    (**(code **)(*(longlong *)*param_3 + 0x80))((longlong *)*param_3,DAT_1469e5be8,piVar18[0x84]);
    uVar4 = piVar18[0x84];
    if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
      (&DAT_1468c21f8)[(int)uVar4] = 3;
      (&DAT_1468c2200)[(int)uVar4] = 1;
    }
  }
  uStack_6b = *(byte *)(piVar18 + 0x1f) < 0x40;
  uStack_6a = 0xc0 < *(byte *)(piVar18 + 0x1f);
  uStack_69 = *(byte *)((longlong)piVar18 + 0x7d) < 0x40;
  local_68 = CONCAT13(*(byte *)((longlong)piVar18 + 0x7f) < 0x40,
                      CONCAT12(0xc0 < *(byte *)((longlong)piVar18 + 0x7e),
                               CONCAT11(*(byte *)((longlong)piVar18 + 0x7e) < 0x40,
                                        0xc0 < *(byte *)((longlong)piVar18 + 0x7d))));
  local_64 = 0xc0 < *(byte *)((longlong)piVar18 + 0x7f);
  QueryPerformanceCounter(&local_98);
  uVar4 = piVar18[0x1e];
  local_80[0] = (byte)uVar4 & 1;
  local_80[1] = (byte)(uVar4 >> 1) & 1;
  local_80[2] = (byte)(uVar4 >> 2) & 1;
  local_80[3] = (byte)(uVar4 >> 3) & 1;
  dVar25 = (double)local_98.QuadPart * DAT_1468b02f8 + 16777216.0;
  bStack_7c = (byte)(uVar4 >> 4) & 1;
  bStack_7b = (byte)(uVar4 >> 5) & 1;
  bStack_7a = (byte)(uVar4 >> 6) & 1;
  bStack_79 = (byte)(uVar4 >> 7) & 1;
  bStack_78 = (byte)(uVar4 >> 8) & 1;
  bStack_77 = (byte)(uVar4 >> 9) & 1;
  bStack_76 = (byte)(uVar4 >> 10) & 1;
  bStack_75 = (byte)(uVar4 >> 0xb) & 1;
  bStack_74 = (byte)(uVar4 >> 0xc) & 1;
  bStack_73 = (byte)(uVar4 >> 0xd) & 1;
  bStack_72 = (byte)(uVar4 >> 0xe) & 1;
  pbVar23 = local_80;
  pdVar15 = (double *)(piVar18 + 0x44);
  lVar20 = 0x1d;
  bStack_71 = (byte)(uVar4 >> 0xf) & 1;
  local_70 = (byte)(uVar4 >> 0x10) & 1;
  bStack_6f = (byte)(uVar4 >> 0x11) & 1;
  bStack_6e = (byte)(uVar4 >> 0x12) & 1;
  bStack_6d = (byte)(uVar4 >> 0x13) & 1;
  bStack_6c = (byte)(uVar4 >> 0x14) & 1;
  uVar13 = (longlong)piVar18 - (longlong)local_80;
  local_120 = uVar13;
  do {
    bVar3 = *pbVar23;
    if (bVar3 == pbVar23[uVar13 + 0xf0]) {
      if ((bVar3 != 0) && (*pdVar15 <= dVar25)) {
        (**(code **)(*(longlong *)*param_3 + 0x88))
                  ((longlong *)*param_3,*(undefined8 *)(uVar22 + 8 + param_1),piVar18[0x84]);
        uVar4 = piVar18[0x84];
        if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
          (&DAT_1468c21f8)[(int)uVar4] = 3;
          (&DAT_1468c2200)[(int)uVar4] = 1;
        }
        fVar2 = *(float *)(param_1 + 0xaa8);
        goto LAB_14097f897;
      }
    }
    else {
      lVar5 = *(longlong *)*param_3;
      if (bVar3 == 0) {
        (**(code **)(lVar5 + 0x90))
                  ((longlong *)*param_3,*(undefined8 *)(uVar22 + 8 + param_1),piVar18[0x84]);
        uVar4 = piVar18[0x84];
        uVar13 = local_120;
        if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
          (&DAT_1468c21f8)[(int)uVar4] = 3;
          (&DAT_1468c2200)[(int)uVar4] = 1;
        }
      }
      else {
        (**(code **)(lVar5 + 0x88))();
        uVar4 = piVar18[0x84];
        if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
          (&DAT_1468c21f8)[(int)uVar4] = 3;
          (&DAT_1468c2200)[(int)uVar4] = 1;
        }
        fVar2 = *(float *)(param_1 + 0xaa4);
LAB_14097f897:
        *pdVar15 = (double)fVar2 + dVar25;
        uVar13 = local_120;
      }
    }
    uVar22 = uVar22 + 8;
    pdVar15 = pdVar15 + 1;
    pbVar23 = pbVar23 + 1;
    lVar20 = lVar20 + -1;
    if (lVar20 == 0) {
      local_138[0] = '\0';
      local_138[1] = '\0';
      local_130[0] = '\0';
      local_130[1] = '\0';
      local_118 = 0;
      local_120 = local_120 & 0xffffffff00000000;
      local_134 = 0;
      if ((char)piVar18[0x2b] != '\0') {
        pcVar19 = local_130;
        puVar17 = (ushort *)(piVar18 + 0x2d);
        do {
          puVar12 = (uint *)(piVar18 + 0x7e);
          bVar7 = false;
          pcVar24 = local_138;
          iVar21 = 0;
          iVar10 = local_118;
          local_128 = pcVar19;
          do {
            if (bVar7) break;
            if (puVar12[2] == (uint)(byte)puVar17[2]) {
              if (*(char *)(param_1 + 0xaa0) != '\0') {
                local_100 = (float)*puVar17;
                local_fc = (float)puVar17[1];
                local_148 = (int *)CONCAT44(local_148._4_4_,piVar18[0x84]);
                lVar20 = *(longlong *)*local_110;
                (**(code **)(lVar20 + 0xc0))((longlong *)*local_110,&local_100,lVar20,iVar21);
                uVar4 = piVar18[0x84];
                pcVar19 = local_128;
                if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
                  (&DAT_1468c21f8)[(int)uVar4] = 3;
                  (&DAT_1468c2200)[(int)uVar4] = 1;
                }
              }
              bVar7 = true;
              if ((local_114 == 0) && (iVar21 == 0)) {
                iVar10 = (uint)*puVar17 - *puVar12;
                local_120 = CONCAT44(local_120._4_4_,(uint)puVar17[1] - puVar12[1]);
              }
              *puVar12 = (uint)*puVar17;
              puVar12[1] = (uint)puVar17[1];
              *pcVar24 = '\x01';
              *pcVar19 = '\x01';
            }
            iVar21 = iVar21 + 1;
            puVar12 = puVar12 + 3;
            pcVar24 = pcVar24 + 1;
          } while (iVar21 < 2);
          pcVar19 = pcVar19 + 1;
          local_134 = local_134 + 1;
          puVar17 = puVar17 + 4;
          local_118 = iVar10;
          local_128 = pcVar19;
          param_3 = local_110;
        } while (local_134 < (int)(uint)*(byte *)(piVar18 + 0x2b));
      }
      iVar10 = 0;
      pcVar19 = local_138;
      piVar16 = piVar18 + 0x80;
      do {
        if ((*pcVar19 == '\0') && (*piVar16 != -1)) {
          local_f8 = (float)piVar16[-2];
          local_f4 = (float)piVar16[-1];
          if (*(char *)(param_1 + 0xaa0) != '\0') {
            (**(code **)(*(longlong *)*param_3 + 0xd0))
                      ((longlong *)*param_3,&local_f8,iVar10,piVar18[0x84]);
            uVar4 = piVar18[0x84];
            if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
              (&DAT_1468c21f8)[(int)uVar4] = 3;
              (&DAT_1468c2200)[(int)uVar4] = 1;
            }
          }
          *piVar16 = -1;
        }
        puVar6 = local_110;
        iVar10 = iVar10 + 1;
        piVar16 = piVar16 + 3;
        pcVar19 = pcVar19 + 1;
      } while (iVar10 < 2);
      local_134 = 0;
      if ((char)piVar18[0x2b] != '\0') {
        local_108 = local_130;
        puVar17 = (ushort *)(piVar18 + 0x2d);
        do {
          iVar10 = local_134;
          if (*local_108 == '\0') {
            bVar7 = false;
            puVar12 = (uint *)(piVar18 + 0x80);
            lVar20 = 0;
            do {
              if (bVar7) break;
              if (*puVar12 == 0xffffffff) {
                if (*(char *)(param_1 + 0xaa0) != '\0') {
                  local_90 = 0;
                  plStack_88 = (longlong *)0x0;
                  local_f0 = (float)*puVar17;
                  local_140 = piVar18[0x84];
                  local_ec = (float)puVar17[1];
                  local_148 = (int *)CONCAT44(local_148._4_4_,iVar10);
                  (**(code **)(*(longlong *)*puVar6 + 0xb0))
                            ((longlong *)*puVar6,&local_90,&local_f0);
                  plVar8 = plStack_88;
                  if (plStack_88 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_88 + 1;
                    lVar5 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*plStack_88)(plStack_88);
                      LOCK();
                      piVar16 = (int *)((longlong)plVar8 + 0xc);
                      iVar10 = *piVar16;
                      *piVar16 = *piVar16 + -1;
                      UNLOCK();
                      if (iVar10 == 1) {
                        (**(code **)(*plVar8 + 8))(plVar8,1);
                      }
                    }
                  }
                  uVar4 = piVar18[0x84];
                  iVar10 = local_134;
                  if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
                    (&DAT_1468c21f8)[(int)uVar4] = 3;
                    (&DAT_1468c2200)[(int)uVar4] = 1;
                  }
                }
                bVar7 = true;
                *puVar12 = (uint)(byte)puVar17[2];
                puVar12[-2] = (uint)*puVar17;
                puVar12[-1] = (uint)puVar17[1];
                local_138[lVar20] = '\x01';
              }
              lVar20 = lVar20 + 1;
              puVar12 = puVar12 + 3;
            } while (lVar20 < 2);
          }
          local_108 = local_108 + 1;
          puVar17 = puVar17 + 4;
          local_134 = iVar10 + 1;
        } while (iVar10 + 1 < (int)(uint)*(byte *)(piVar18 + 0x2b));
      }
      iVar10 = local_118;
      if ((((*(char *)(param_1 + 0xaa2) != '\0') && (local_114 == 0)) &&
          (puVar6 = *(undefined8 **)(param_1 + 0xa90), puVar6 != (undefined8 *)0x0)) &&
         (piVar18[0x80] != -1)) {
        (**(code **)*puVar6)(puVar6,&local_128);
        iVar21 = (int)(local_128._4_4_ + (float)(int)local_120);
        local_128._0_4_ = (float)iVar10 + (float)local_128;
        local_128 = (char *)CONCAT44(local_128._4_4_ + (float)(int)local_120,(float)local_128);
        if (iVar21 < -0x14) {
          iVar10 = -0x14;
        }
        else {
          iVar10 = 0x44c;
          if (iVar21 < 0x44c) {
            iVar10 = iVar21;
          }
        }
        iVar11 = (int)(float)local_128;
        iVar21 = -0x14;
        if ((-0x15 < iVar11) && (iVar21 = 0x794, iVar11 < 0x794)) {
          iVar21 = iVar11;
        }
        (**(code **)(**(longlong **)(param_1 + 0xa90) + 8))
                  (*(longlong **)(param_1 + 0xa90),iVar21,iVar10);
      }
      if (*(char *)(param_1 + 0xaa3) != '\0') {
        local_a8 = *(undefined8 *)(piVar18 + 0x21);
        uStack_a0 = *(undefined8 *)(piVar18 + 0x23);
        FQuat::Rotator(&local_a8,&local_e8);
        local_d8 = piVar18[0x25];
        local_d4 = piVar18[0x26];
        local_d0 = piVar18[0x27];
        local_140 = piVar18[0x84];
        local_c0 = (float)piVar18[0x28] * 57.295776;
        local_148 = &local_d8;
        local_bc = (float)piVar18[0x29] * 57.295776;
        local_cc = 0;
        local_b8 = (float)piVar18[0x2a] * 57.295776;
        local_c4 = 0;
        local_b4 = local_e8;
        local_ac = local_e0;
        local_b0 = local_e4;
        (**(code **)(*(longlong *)*local_110 + 0xe0))
                  ((longlong *)*local_110,&local_b4,&local_c0,&local_cc);
        uVar4 = piVar18[0x84];
        if ((uVar4 < 8) && ((&DAT_1468c21f8)[(int)uVar4] != '\x03')) {
          (&DAT_1468c21f8)[(int)uVar4] = 3;
          (&DAT_1468c2200)[(int)uVar4] = 1;
        }
      }
      *(undefined8 *)piVar18 = *(undefined8 *)(piVar18 + 0x1e);
      *(undefined8 *)(piVar18 + 2) = *(undefined8 *)(piVar18 + 0x20);
      *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(piVar18 + 0x22);
      *(undefined8 *)(piVar18 + 6) = *(undefined8 *)(piVar18 + 0x24);
      *(undefined8 *)(piVar18 + 8) = *(undefined8 *)(piVar18 + 0x26);
      *(undefined8 *)(piVar18 + 10) = *(undefined8 *)(piVar18 + 0x28);
      *(undefined8 *)(piVar18 + 0xc) = *(undefined8 *)(piVar18 + 0x2a);
      *(undefined8 *)(piVar18 + 0xe) = *(undefined8 *)(piVar18 + 0x2c);
      *(undefined8 *)(piVar18 + 0x10) = *(undefined8 *)(piVar18 + 0x2e);
      *(undefined8 *)(piVar18 + 0x12) = *(undefined8 *)(piVar18 + 0x30);
      *(undefined8 *)(piVar18 + 0x14) = *(undefined8 *)(piVar18 + 0x32);
      *(undefined8 *)(piVar18 + 0x16) = *(undefined8 *)(piVar18 + 0x34);
      *(undefined8 *)(piVar18 + 0x18) = *(undefined8 *)(piVar18 + 0x36);
      *(undefined8 *)(piVar18 + 0x1a) = *(undefined8 *)(piVar18 + 0x38);
      *(undefined8 *)(piVar18 + 0x1c) = *(undefined8 *)(piVar18 + 0x3a);
      *(ulonglong *)(piVar18 + 0x3c) =
           CONCAT17(bStack_79,
                    CONCAT16(bStack_7a,
                             CONCAT15(bStack_7b,
                                      CONCAT14(bStack_7c,
                                               CONCAT13(local_80[3],
                                                        CONCAT12(local_80[2],
                                                                 CONCAT11(local_80[1],local_80[0])))
                                              ))));
      *(ulonglong *)(piVar18 + 0x3e) =
           CONCAT17(bStack_71,
                    CONCAT16(bStack_72,
                             CONCAT15(bStack_73,
                                      CONCAT14(bStack_74,
                                               CONCAT13(bStack_75,
                                                        CONCAT12(bStack_76,
                                                                 CONCAT11(bStack_77,bStack_78)))))))
      ;
      *(ulonglong *)(piVar18 + 0x40) =
           CONCAT17(uStack_69,
                    CONCAT16(uStack_6a,
                             CONCAT15(uStack_6b,
                                      CONCAT14(bStack_6c,
                                               CONCAT13(bStack_6d,
                                                        CONCAT12(bStack_6e,
                                                                 CONCAT11(bStack_6f,local_70)))))));
      piVar18[0x42] = local_68;
      *(undefined1 *)(piVar18 + 0x43) = local_64;
      return;
    }
  } while( true );
}



// FUNCTION 14097ff50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRuntimePhysXPlatformModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FPhysXPlatformModule::~FPhysXPlatformModule();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14097ff90 InitializeModule body=66 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FRuntimePhysXPlatformModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FPhysXPlatformModule::FPhysXPlatformModule(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144174968;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14097ffe0 FMediaSamples body=407 status=ok
// SIG undefined FMediaSamples(void)

undefined8 * FMediaSamples::FMediaSamples(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  *param_1 = &PTR_FetchAudio_144175430;
  param_1[4] = 0;
  param_1[2] = &PTR_Enqueue_144148060;
  param_1[3] = &PTR_Dequeue_144148080;
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[7] = puVar2;
  param_1[6] = puVar2;
  param_1[8] = &PTR_Enqueue_144148060;
  param_1[9] = &PTR_Dequeue_144148080;
  param_1[10] = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[0xd] = puVar2;
  param_1[0xc] = puVar2;
  param_1[0xe] = &PTR_Enqueue_144148060;
  param_1[0xf] = &PTR_Dequeue_144148080;
  param_1[0x10] = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[0x13] = puVar2;
  param_1[0x12] = puVar2;
  param_1[0x14] = &PTR_Enqueue_144148060;
  param_1[0x15] = &PTR_Dequeue_144148080;
  param_1[0x16] = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[0x19] = puVar2;
  param_1[0x18] = puVar2;
  param_1[0x1a] = &PTR_Enqueue_144148060;
  param_1[0x1b] = &PTR_Dequeue_144148080;
  param_1[0x1c] = 0;
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar3 = puVar2;
  }
  param_1[0x1f] = puVar3;
  param_1[0x1e] = puVar3;
  return param_1;
}



// FUNCTION 140980180 `scalar_deleting_destructor' body=355 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMediaSamples::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[0x1a] = &PTR_Enqueue_144148060;
  param_1[0x1b] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x1e);
  param_1[0x1b] = &PTR__purecall_143fcfdf8;
  param_1[0x1a] = &PTR__purecall_143fcfdf8;
  param_1[0x14] = &PTR_Enqueue_144148060;
  param_1[0x15] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x18);
  param_1[0x15] = &PTR__purecall_143fcfdf8;
  param_1[0x14] = &PTR__purecall_143fcfdf8;
  param_1[0xe] = &PTR_Enqueue_144148060;
  param_1[0xf] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x12);
  param_1[0xf] = &PTR__purecall_143fcfdf8;
  param_1[0xe] = &PTR__purecall_143fcfdf8;
  param_1[8] = &PTR_Enqueue_144148060;
  param_1[9] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0xc);
  param_1[9] = &PTR__purecall_143fcfdf8;
  param_1[8] = &PTR__purecall_143fcfdf8;
  param_1[2] = &PTR_Enqueue_144148060;
  param_1[3] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>(param_1 + 6)
  ;
  param_1[3] = &PTR__purecall_143fcfdf8;
  param_1[2] = &PTR__purecall_143fcfdf8;
  *param_1 = &PTR_CanBeUsedOnAnyThread_144146738;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1409802f0 FUN_1409802f0 body=150 status=ok
// SIG undefined FUN_1409802f0(void)

undefined8 * FUN_1409802f0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144175298;
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR_FUN_144175158;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140980390 FUN_140980390 body=43 status=ok
// SIG undefined FUN_140980390(void)

undefined8 * FUN_140980390(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_1441753d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409803c0 FUN_1409803c0 body=43 status=ok
// SIG undefined FUN_1409803c0(void)

undefined8 * FUN_1409803c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144175158;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409803f0 GetSize body=379 status=ok
// SIG undefined GetSize(void)

undefined8 * FMovieViewport::GetSize(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  uint uStackX_c;
  undefined8 local_res18;
  
  plVar10 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x20);
      plVar8 = plVar2;
      plVar9 = plVar10;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar10, plVar9 = (longlong *)0x0, !bVar11) {
          LOCK();
          bVar11 = iVar4 == (int)plVar2[1];
          if (bVar11) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar8 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar9 = *(longlong **)(param_1 + 0x18);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      plVar2 = *(longlong **)(param_1 + 0x20);
      plVar7 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar7 = plVar10, !bVar11) {
          LOCK();
          bVar11 = iVar4 == (int)plVar2[1];
          if (bVar11) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar10 = *(longlong **)(param_1 + 0x18);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
      uVar6 = (**(code **)*plVar10)(plVar10);
      plVar10 = (longlong *)0x3;
      local_res18 = CONCAT44(uVar5,uVar6);
      goto LAB_1409804de;
    }
  }
  plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
LAB_1409804de:
  *param_2 = local_res18;
  if ((((ulonglong)plVar10 & 2) != 0) &&
     (plVar10 = (longlong *)(ulonglong)((uint)plVar10 & 0xfffffffd), plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if ((((ulonglong)plVar10 & 1) != 0) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140980570 GetViewportRenderTargetTexture body=219 status=ok
// SIG undefined GetViewportRenderTargetTexture(void)

longlong * FMovieViewport::GetViewportRenderTargetTexture(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  uint uStackX_c;
  
  plVar4 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      plVar6 = *(longlong **)(param_1 + 0x20);
      if (plVar6 == (longlong *)0x0) {
LAB_1409805d9:
        plVar5 = (longlong *)0x1;
        plVar7 = plVar4;
      }
      else {
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(plVar6 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar3 == (int)plVar6[1];
          if (bVar8) {
            *(int *)(plVar6 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar8) {
            if (plVar6 != (longlong *)0x0) {
              plVar4 = *(longlong **)(param_1 + 0x18);
            }
            goto LAB_1409805d9;
          }
          LOCK();
          iVar3 = (int)plVar6[1];
          bVar8 = iVar3 == 0;
          if (bVar8) {
            *(int *)(plVar6 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        plVar5 = (longlong *)0x1;
        plVar6 = plVar4;
        plVar7 = plVar4;
      }
      goto LAB_1409805eb;
    }
  }
  plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar7 = (longlong *)0x0;
  plVar5 = plVar4;
LAB_1409805eb:
  if ((plVar5 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
    return plVar7;
  }
  return plVar7;
}



// FUNCTION 140980650 WriteToBuffer body=87 status=ok
// SIG undefined WriteToBuffer(void)

ulonglong FTextHistory::WriteToBuffer(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140980740 SetTexture body=193 status=ok
// SIG undefined SetTexture(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieViewport::SetTexture(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
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
  puVar1 = (undefined8 *)(param_1 + 0x18);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)uStack_30 + 0xc) = *(int *)((longlong)uStack_30 + 0xc) + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar4 = *(longlong **)(param_1 + 0x20);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x1c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x24) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar4;
  }
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)uStack_30 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*uStack_30 + 8))(uStack_30,1);
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 140980810 FUN_140980810 body=609 status=ok
// SIG undefined FUN_140980810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140980810(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [8];
  undefined **local_1a0;
  undefined4 *local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_178;
  undefined ***local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_138;
  undefined4 local_136;
  undefined2 local_132 [125];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_38 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,0);
  uVar1 = local_38;
  lVar3 = (longlong)(int)local_38;
  local_138 = 0;
  local_136 = 0x200004;
  local_132[0] = 0;
  iVar2 = (int)local_38 + 1;
  local_38 = CONCAT44(local_38._4_4_,iVar2);
  if (local_38._4_4_ < iVar2) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,uVar1 & 0xffffffff);
  }
  (&local_138)[lVar3 * 4] = 0x1000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x200102;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_1a8,&DAT_146ab6e78,&local_138);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_1a8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a8);
  local_198 = (undefined4 *)0x0;
  local_1a0 = &PTR_GetBoundProgramCounterForTimerManager_144177478;
  local_190 = 4;
  local_188 = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeGrow(&local_198,0);
  local_1b0 = &local_178;
  local_1b8 = 1;
  *local_198 = 0xbf800000;
  local_198[1] = 0x3f800000;
  local_198[2] = 0x3f800000;
  local_198[3] = 0x3f800000;
  *(undefined8 *)(local_198 + 4) = 0;
  local_198[8] = 0x3f800000;
  local_198[9] = 0x3f800000;
  local_198[10] = 0x3f800000;
  local_198[0xb] = 0x3f800000;
  *(undefined8 *)(local_198 + 0xc) = 0x3f800000;
  local_198[0x10] = 0xbf800000;
  local_198[0x11] = 0xbf800000;
  local_198[0x12] = 0x3f800000;
  local_198[0x13] = 0x3f800000;
  local_198[0x14] = 0;
  local_198[0x15] = 0x3f800000;
  local_198[0x18] = 0x3f800000;
  local_198[0x19] = 0xbf800000;
  local_198[0x1a] = 0x3f800000;
  local_198[0x1b] = 0x3f800000;
  local_198[0x1c] = 0x3f800000;
  local_198[0x1d] = 0x3f800000;
  local_170 = &local_1a0;
  local_178 = 0;
  local_164 = _DAT_1468b5d78;
  uStack_160 = uRam00000001468b5d7c;
  uStack_15c = uRam00000001468b5d80;
  uStack_158 = uRam00000001468b5d84;
  local_168 = 1;
  local_154 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_1a8,&DAT_146ab6e78,0x80);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_1a8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a8);
  if (local_198 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140980a80 ReleaseRHI body=36 status=ok
// SIG undefined ReleaseRHI(void)

void FRawStaticIndexBuffer16or32<unsigned_short>::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  return;
}



// FUNCTION 140980ab0 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDummyPrevTransformBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144177428;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140980b20 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FUdpMessageTransport>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 140980b90 SetAllowCPUAccess body=4 status=ok
// SIG undefined SetAllowCPUAccess(void)

void TResourceArray<FMediaElementVertex,0>::SetAllowCPUAccess(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 140980ba0 FUN_140980ba0 body=62 status=ok
// SIG undefined FUN_140980ba0(void)

longlong FUN_140980ba0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140980be0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441774b0;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__144177428;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140980c50 CreatePlayer body=178 status=ok
// SIG undefined CreatePlayer(void)

longlong * FWebMMediaModule::CreatePlayer(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)
             SharedPointerInternals::
             NewIntrusiveReferenceController<FWebMMediaPlayer,IMediaEventSink_&>(param_3);
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  *param_2 = (longlong)local_18;
  param_2[1] = (longlong)local_10;
  if (local_10 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(local_10 + 1) = (int)local_10[1] + 1;
  UNLOCK();
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140980d10 NewIntrusiveReferenceController<FMediaSamples> body=99 status=ok
// SIG undefined NewIntrusiveReferenceController<FMediaSamples>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<FMediaSamples>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x110);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144177890;
    ::_guard_xfg_dispatch_icall_nop(puVar1 + 2,0,0x100);
    FMediaSamples::FMediaSamples(puVar1 + 2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140980d80 NewIntrusiveReferenceController<FWebMMediaPlayer,IMediaEventSink_&> body=407 status=ok
// SIG undefined NewIntrusiveReferenceController<FWebMMediaPlayer,IMediaEventSink_&>(void)

undefined8 *
SharedPointerInternals::NewIntrusiveReferenceController<FWebMMediaPlayer,IMediaEventSink_&>
          (undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0xe8);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = &PTR_LAB_144177468;
    puVar6[2] = &PTR_Close_144177550;
    puVar6[3] = &PTR_FUN_1441775e8;
    puVar6[4] = &PTR_CanBeUsedOnAnyThread_144177600;
    puVar6[5] = &PTR_LAB_144177618;
    puVar6[6] = &PTR_GetAudioTrackFormat_144177678;
    puVar6[7] = &PTR_CanBeUsedOnAnyThread_1441776e0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = param_1;
    local_10 = (longlong *)NewIntrusiveReferenceController<FMediaSamples>();
    local_18 = local_10 + 2;
    EnableSharedFromThis(&local_18,local_18,local_18);
    plVar5 = local_10;
    puVar6[0xb] = local_18;
    puVar6[0xc] = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
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
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    *(undefined4 *)(puVar6 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xcc) = 0xffffffffffffffff;
    puVar6[0x1b] = 0;
    *(undefined2 *)(puVar6 + 0x1c) = 0;
    return puVar6;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140980f20 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144177838;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 140980fb0 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
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
  *param_1 = &PTR__scalar_deleting_destructor__1441777b8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000700;
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



// FUNCTION 140981060 FStaticStateResource body=165 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1441777f8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_14 = 0;
    local_18[0] = 2;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 140981110 ~FMediaSamples body=336 status=ok
// SIG undefined ~FMediaSamples(void)

void FMediaSamples::~FMediaSamples(undefined8 *param_1)

{
  param_1[0x1a] = &PTR_Enqueue_144148060;
  param_1[0x1b] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x1e);
  param_1[0x1b] = &PTR__purecall_143fcfdf8;
  param_1[0x1a] = &PTR__purecall_143fcfdf8;
  param_1[0x14] = &PTR_Enqueue_144148060;
  param_1[0x15] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x18);
  param_1[0x15] = &PTR__purecall_143fcfdf8;
  param_1[0x14] = &PTR__purecall_143fcfdf8;
  param_1[0xe] = &PTR_Enqueue_144148060;
  param_1[0xf] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x12);
  param_1[0xf] = &PTR__purecall_143fcfdf8;
  param_1[0xe] = &PTR__purecall_143fcfdf8;
  param_1[8] = &PTR_Enqueue_144148060;
  param_1[9] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0xc);
  param_1[9] = &PTR__purecall_143fcfdf8;
  param_1[8] = &PTR__purecall_143fcfdf8;
  param_1[2] = &PTR_Enqueue_144148060;
  param_1[3] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>(param_1 + 6)
  ;
  param_1[3] = &PTR__purecall_143fcfdf8;
  param_1[2] = &PTR__purecall_143fcfdf8;
  *param_1 = &PTR_CanBeUsedOnAnyThread_144146738;
  return;
}



// FUNCTION 140981260 ~FWebMMediaPlayer body=667 status=ok
// SIG undefined ~FWebMMediaPlayer(void)

void FWebMMediaPlayer::~FWebMMediaPlayer(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_Close_144177550;
  param_1[1] = &PTR_FUN_1441775e8;
  param_1[2] = &PTR_CanBeUsedOnAnyThread_144177600;
  param_1[3] = &PTR_LAB_144177618;
  param_1[4] = &PTR_GetAudioTrackFormat_144177678;
  param_1[5] = &PTR_CanBeUsedOnAnyThread_1441776e0;
  if (*(int *)(param_1 + 0x17) != 0) {
    uVar4 = param_1[0xb];
    param_1[0xb] = 0;
    FUN_1409817f0(param_1 + 0xb,uVar4);
    uVar4 = param_1[0xc];
    param_1[0xc] = 0;
    TDefaultDelete<FWebMAudioDecoder>::operator()(param_1 + 0xc,uVar4);
    *(undefined4 *)(param_1 + 0xe) = 0;
    if (*(int *)((longlong)param_1 + 0x74) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xd,0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)((longlong)param_1 + 0x84) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
    }
    plVar5 = (longlong *)param_1[0x11];
    param_1[0x11] = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
    }
    lVar6 = param_1[0x12];
    param_1[0x12] = 0;
    if (lVar6 != 0) {
      FUN_1439e5b10(lVar6);
      FMemory::operator_delete(lVar6,0xb8);
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    if (*(int *)((longlong)param_1 + 0xb4) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x15,0);
    }
    *(undefined4 *)(param_1 + 0x17) = 0;
    *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffffffffffff;
    param_1[0x19] = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    iVar3 = *(int *)(param_1 + 7);
    *(int *)(param_1 + 7) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar3);
    }
    *(undefined4 *)(param_1[6] + (longlong)iVar3 * 4) = 9;
    iVar3 = *(int *)(param_1 + 7);
    *(int *)(param_1 + 7) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar3);
    }
    *(undefined4 *)(param_1[6] + (longlong)iVar3 * 4) = 1;
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  lVar6 = param_1[0x12];
  if (lVar6 != 0) {
    FUN_1439e5b10(lVar6);
    FMemory::operator_delete(lVar6,0xb8);
  }
  plVar5 = (longlong *)param_1[0x11];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,1);
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TDefaultDelete<FWebMAudioDecoder>::operator()(param_1 + 0xc,param_1[0xc]);
  FUN_1409817f0(param_1 + 0xb,param_1[0xb]);
  plVar5 = (longlong *)param_1[10];
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
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[5] = &PTR_CanBeUsedOnAnyThread_1441467d8;
  param_1[4] = &PTR__purecall_144146770;
  param_1[3] = &PTR__purecall_144136680;
  param_1[2] = &PTR_CanBeUsedOnAnyThread_144146688;
  param_1[1] = &PTR__purecall_143f9a338;
  *param_1 = &PTR__purecall_1441466a0;
  return;
}



// FUNCTION 140981500 FUN_140981500 body=437 status=ok
// SIG undefined FUN_140981500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140981500(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 local_80;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar1 = param_1[1];
  lVar2 = *param_1;
  local_48 = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_70 = &local_58;
  local_98 = *(undefined4 *)(lVar1 + 0x1c);
  local_78 = 0x100;
  local_80 = 1;
  local_34 = 0;
  local_88 = 1;
  local_90 = 3;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(lVar1 + 0x50));
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar2 + 0x78,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  local_70 = &local_58;
  local_78 = 0x100;
  local_80 = 1;
  local_98 = *(uint *)(lVar1 + 0x1c) >> 1;
  local_88 = 1;
  local_90 = 3;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(lVar1 + 0x54));
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar2 + 0x80,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  local_70 = &local_58;
  local_78 = 0x100;
  local_80 = 1;
  local_98 = *(uint *)(lVar1 + 0x1c) >> 1;
  local_88 = 1;
  local_90 = 3;
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(lVar1 + 0x58));
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar2 + 0x88,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 1409816c0 operator() body=178 status=ok
// SIG undefined operator()(void)

void TDefaultDelete<FWebMAudioDecoder>::operator()(undefined8 param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    if (param_2[2] != 0) {
      puVar1 = (ulonglong *)(param_2[2] + 8);
      LOCK();
      uVar4 = *puVar1;
      if (uVar4 == 0) {
        *puVar1 = 0;
        uVar4 = 0;
      }
      UNLOCK();
      if ((uVar4 >> 0x1a & 1) == 0) {
        uVar5 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar5,param_2 + 2,0xff);
      }
    }
    if ((void *)param_2[6] != (void *)0x0) {
      opus_decoder_destroy((void *)param_2[6]);
    }
    if (param_2[3] != 0) {
      FMemory::Free();
    }
    if (param_2[2] != 0) {
      LOCK();
      piVar2 = (int *)(param_2[2] + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    FMemory::operator_delete(param_2[1],0x138);
    TDefaultDelete<FWebMMediaAudioSamplePool>::operator()(param_2,*param_2);
    FMemory::operator_delete(param_2,0x48);
  }
  return;
}



// FUNCTION 140981780 operator() body=107 status=ok
// SIG undefined operator()(void)

void TDefaultDelete<FWebMMediaAudioSamplePool>::operator()(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_2 + 8);
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
    FMemory::operator_delete(param_2,0x10);
  }
  return;
}



// FUNCTION 1409817f0 FUN_1409817f0 body=145 status=ok
// SIG undefined FUN_1409817f0(void)

void FUN_1409817f0(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    FUN_140982180(param_2);
    if (param_2[3].SpinCount != 0) {
      LOCK();
      piVar1 = (int *)(param_2[3].SpinCount + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_2[3].OwningThread);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_2[3].LockCount);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 3);
    TDefaultDelete<FWebMMediaAudioSamplePool>::operator()
              (&param_2[2].SpinCount,param_2[2].SpinCount);
    if (param_2[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FMemory::Free();
    }
    DeleteCriticalSection(param_2);
    FMemory::operator_delete(param_2,0xb0);
  }
  return;
}



// FUNCTION 1409818d0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_25927285f042988adfd0e68963c8afbe>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 3);
  if (param_1[2] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[2] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140981930 FUN_140981930 body=97 status=ok
// SIG undefined FUN_140981930(void)

undefined8 * FUN_140981930(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1441778a0;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1409819a0 FUN_1409819a0 body=97 status=ok
// SIG undefined FUN_1409819a0(void)

undefined8 * FUN_1409819a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1441778b0;
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



// FUNCTION 140981a10 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FMediaSamples>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 140981a40 FUN_140981a40 body=77 status=ok
// SIG undefined FUN_140981a40(void)

undefined8 * FUN_140981a40(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = mkvparser::IMkvReader::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140981a90 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144177838;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140981ae0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441777b8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140981b30 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441777f8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140981b80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWebMMediaPlayer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FWebMMediaPlayer();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 140981bc0 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWebMMediaTextureSample::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 2);
  param_1[1] = &PTR_StartProfileThreadUsage_144159528;
  *param_1 = &PTR__purecall_144146aa0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140981c10 FUN_140981c10 body=154 status=ok
// SIG undefined FUN_140981c10(void)

LPCRITICAL_SECTION FUN_140981c10(LPCRITICAL_SECTION param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection(param_1);
  if (BVar3 == 0) {
    EnterCriticalSection(param_1);
  }
  iVar1 = param_1[1].LockCount;
  while (iVar1 != 0) {
    plVar2 = *(longlong **)
              ((longlong)param_1[1].DebugInfo + (longlong)param_1[1].LockCount * 8 + -8);
    param_1[1].LockCount = param_1[1].LockCount + -1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,1);
    }
    iVar1 = param_1[1].LockCount;
  }
  LeaveCriticalSection(param_1);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FMemory::Free();
  }
  DeleteCriticalSection(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140981cb0 FUN_140981cb0 body=154 status=ok
// SIG undefined FUN_140981cb0(void)

LPCRITICAL_SECTION FUN_140981cb0(LPCRITICAL_SECTION param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection(param_1);
  if (BVar3 == 0) {
    EnterCriticalSection(param_1);
  }
  iVar1 = param_1[1].LockCount;
  while (iVar1 != 0) {
    plVar2 = *(longlong **)
              ((longlong)param_1[1].DebugInfo + (longlong)param_1[1].LockCount * 8 + -8);
    param_1[1].LockCount = param_1[1].LockCount + -1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,1);
    }
    iVar1 = param_1[1].LockCount;
  }
  LeaveCriticalSection(param_1);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FMemory::Free();
  }
  DeleteCriticalSection(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140981d50 AddAudioSampleFromDecodingThread body=236 status=ok
// SIG undefined AddAudioSampleFromDecodingThread(void)

void FWebMMediaPlayer::AddAudioSampleFromDecodingThread(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,local_res8);
  if (*plVar5 < *(longlong *)(param_1 + 0xc0)) {
    plVar5 = (longlong *)param_2[1];
  }
  else {
    local_18 = *param_2;
    local_10 = (longlong *)param_2[1];
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10);
    (**(code **)*puVar6)(puVar6,&local_18);
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = (longlong *)param_2[1];
  }
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
  return;
}



// FUNCTION 140981e40 FUN_140981e40 body=239 status=ok
// SIG undefined FUN_140981e40(void)

void FUN_140981e40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,local_res8);
  if (*plVar5 < *(longlong *)(param_1 + 0xc0)) {
    plVar5 = (longlong *)param_2[1];
  }
  else {
    local_18 = *param_2;
    local_10 = (longlong *)param_2[1];
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xd0);
    (**(code **)*puVar6)(puVar6,&local_18);
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = (longlong *)param_2[1];
  }
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
  return;
}



// FUNCTION 140981f30 FUN_140981f30 body=85 status=ok
// SIG undefined FUN_140981f30(void)

void FUN_140981f30(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (param_1[1] != 0) {
    puVar1 = (ulonglong *)(param_1[1] + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
      uVar2 = 0;
    }
    UNLOCK();
    if ((uVar2 >> 0x1a & 1) == 0) {
      uVar3 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar3,param_1 + 1,0xff);
    }
  }
  FUN_140984290(*param_1,param_1 + 2);
  return;
}



// FUNCTION 140981f90 FUN_140981f90 body=85 status=ok
// SIG undefined FUN_140981f90(void)

void FUN_140981f90(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (param_1[1] != 0) {
    puVar1 = (ulonglong *)(param_1[1] + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
      uVar2 = 0;
    }
    UNLOCK();
    if ((uVar2 >> 0x1a & 1) == 0) {
      uVar3 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar3,param_1 + 1,0xff);
    }
  }
  FUN_140983f70(*param_1,param_1 + 2);
  return;
}



// FUNCTION 140982030 Close body=331 status=ok
// SIG undefined Close(void)

void FWebMMediaPlayer::Close(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_1409817f0((undefined8 *)(param_1 + 0x58),uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    TDefaultDelete<FWebMAudioDecoder>::operator()((undefined8 *)(param_1 + 0x60),uVar2);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x78,0);
    }
    plVar3 = *(longlong **)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
    }
    lVar4 = *(longlong *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (lVar4 != 0) {
      FUN_1439e5b10(lVar4);
      FMemory::operator_delete(lVar4,0xb8);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xa8,0);
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0xffffffffffffffff;
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 4) = 9;
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 4) = 1;
  }
  return;
}



// FUNCTION 140982180 FUN_140982180 body=190 status=ok
// SIG undefined FUN_140982180(void)

void FUN_140982180(LPCRITICAL_SECTION param_1)

{
  ulonglong *puVar1;
  char cVar2;
  BOOL BVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  BVar3 = TryEnterCriticalSection(param_1);
  if (BVar3 == 0) {
    EnterCriticalSection(param_1);
  }
  if (param_1[3].SpinCount != 0) {
    puVar1 = (ulonglong *)(param_1[3].SpinCount + 8);
    LOCK();
    uVar5 = *puVar1;
    if (uVar5 == 0) {
      *puVar1 = 0;
      uVar5 = 0;
    }
    UNLOCK();
    if ((uVar5 >> 0x1a & 1) == 0) {
      uVar6 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar6,&param_1[3].SpinCount,0xff);
    }
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    FUN_141ee24f0(0);
  }
  if (*(char *)((longlong)&param_1[4].LockCount + 1) != '\0') {
    FUN_143989b40(&param_1[1].OwningThread);
    *(undefined1 *)((longlong)&param_1[4].LockCount + 1) = 0;
  }
  *(undefined1 *)&param_1[4].LockCount = 0;
                    /* WARNING: Could not recover jumptable at 0x000140982237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 140982240 FUN_140982240 body=4116 status=ok
// SIG undefined FUN_140982240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140982240(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  wchar_t wVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  void *pvVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  short *psVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_568 [32];
  longlong *local_548;
  int *local_540;
  undefined *local_538;
  undefined *local_530;
  undefined4 local_528;
  undefined8 *local_520;
  undefined1 local_518;
  uint local_514;
  int local_510 [6];
  undefined8 local_4f8;
  longlong *local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  longlong local_4e0;
  longlong *local_4d8;
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
  longlong local_468;
  longlong local_460;
  longlong local_458;
  longlong *local_450;
  longlong *local_448;
  undefined *local_440;
  undefined4 local_438;
  undefined *local_430;
  undefined4 local_428;
  longlong *local_420;
  longlong *local_418;
  undefined8 local_408;
  longlong *plStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  uint local_3b8;
  int local_3b4 [16];
  undefined1 auStack_374 [4];
  undefined8 local_370;
  undefined4 local_368;
  ulonglong local_364;
  undefined8 local_35c;
  undefined4 local_354;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_334;
  undefined8 uStack_32c;
  undefined1 local_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  longlong *local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined2 local_2f4;
  undefined1 local_2f0 [168];
  undefined8 local_248;
  undefined1 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_190 [168];
  undefined8 local_e8;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_568;
  local_510[0] = 0;
  plVar7 = (longlong *)param_2[1];
  plVar12 = (longlong *)*param_2;
  local_514 = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_520 = &local_348;
  local_528 = 0x119;
  local_348 = 0;
  uStack_340 = 0;
  local_324 = 0;
  local_530 = (undefined *)CONCAT44(local_530._4_4_,1);
  local_334 = _DAT_1468b5d78;
  uStack_32c = uRam00000001468b5d80;
  local_338 = 1;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_538 = (undefined *)CONCAT44(local_538._4_4_,1);
  local_540 = (int *)CONCAT71(local_540._1_7_,2);
  local_548 = (longlong *)CONCAT44(local_548._4_4_,*(undefined4 *)((longlong)plVar12 + 0x2c));
  local_4d8 = plVar12;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_4f8,&DAT_146ab6e78,(int)plVar12[5]);
  local_470 = local_4f8;
  local_4f8 = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(plVar12 + 2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4f8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_470);
  lVar13 = param_2[2];
  local_4e0 = lVar13;
  lVar11 = FBaseGraphTask::GetSmallTaskAllocator();
  if (lVar13 == 0) {
    plVar12 = (longlong *)(**(code **)(*plVar12 + 0x30))(plVar12);
    local_228 = 0xffffffffffffffff;
    uStack_220 = 0xffffffffffffffff;
    local_218 = 0xffffffffffffffff;
    uStack_210 = 0xffffffff;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_230 = 0;
    local_22c = 0xffffffff;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0xffffffff;
    local_1f4 = 0;
    local_1f0 = 0;
    local_1b8 = 0;
    local_300 = 0;
    local_2f8 = 0xffffffff;
    local_2f4 = 0x900;
    local_248 = 0;
    local_238 = 0;
    local_234 = 0;
    local_1b0 = 1 < *(uint *)(plVar12 + 7);
    local_308 = plVar12;
    _guard_xfg_dispatch_icall_nop(local_2f0,0,0xa8);
    uVar22 = *(longlong *)(lVar11 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar15 = uVar22 + 0x1a;
    if (*(ulonglong *)(lVar11 + 0x38) < uVar15) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x1c);
      uVar22 = *(longlong *)(lVar11 + 0x30) + 1U & 0xfffffffffffffffe;
      uVar15 = uVar22 + 0x1a;
    }
    psVar17 = &DAT_144176760;
    *(ulonglong *)(lVar11 + 0x30) = uVar15;
    do {
      sVar3 = *psVar17;
      *(short *)((uVar22 - 0x144176760) + (longlong)psVar17) = sVar3;
      psVar17 = psVar17 + 1;
    } while (sVar3 != 0);
    uVar18 = *(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8;
    uVar15 = uVar18 + 0x178;
    if (*(ulonglong *)(lVar11 + 0x38) < uVar15) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x180);
      uVar18 = *(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8;
      uVar15 = uVar18 + 0x178;
    }
    *(ulonglong *)(lVar11 + 0x30) = uVar15;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(ulonglong **)(lVar11 + 8) = uVar18;
    *(ulonglong *)(lVar11 + 8) = uVar18 + 8;
    FUN_140499730(uVar18,&local_308,uVar22);
    *(undefined1 *)(lVar11 + 0x1ac) = 1;
    FUN_14049c2a0(lVar11,&local_308);
    *(undefined1 *)(lVar11 + 0x1ac) = 1;
    puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar19 + 2;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x18);
      puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar19 + 2;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar16;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar19;
    *(undefined8 **)(lVar11 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f59460;
    *(undefined1 *)(lVar11 + 0x1ac) = 0;
    puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    local_4d0 = 0xffffffff00000000;
    uStack_4c8 = 0xffffffffffffffff;
    puVar16 = puVar19 + 10;
    local_4c0 = 0xffffffffffffffff;
    uStack_4b8 = 0xffffffffffffffff;
    local_4b0 = 0xffffffff;
    uStack_4a8 = 0;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x58);
      puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar19 + 10;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar16;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar19;
    *(undefined8 **)(lVar11 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar19 + 2) = (undefined4)local_4d0;
    *(undefined4 *)((longlong)puVar19 + 0x14) = local_4d0._4_4_;
    *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_4c8;
    *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_4c8._4_4_;
    *(undefined4 *)(puVar19 + 4) = (undefined4)local_4c0;
    *(undefined4 *)((longlong)puVar19 + 0x24) = local_4c0._4_4_;
    *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_4b8;
    *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_4b8._4_4_;
    *(undefined4 *)(puVar19 + 6) = (undefined4)local_4b0;
    *(undefined4 *)((longlong)puVar19 + 0x34) = local_4b0._4_4_;
    *(undefined4 *)(puVar19 + 7) = (undefined4)uStack_4a8;
    *(undefined4 *)((longlong)puVar19 + 0x3c) = uStack_4a8._4_4_;
    puVar19[8] = plVar12;
    puVar19[9] = plVar12;
    lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar19[8] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar19[8] + 0x20))();
    }
    lVar13 = (**(code **)(*(longlong *)puVar19[9] + 8))();
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar19[9] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar19[9] + 0x20))();
    }
    local_450 = local_4d8;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_448 = plVar7;
    (**(code **)**(undefined8 **)(param_1 + 0xa0))(*(undefined8 **)(param_1 + 0xa0),&local_450);
    LOCK();
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
    UNLOCK();
    FRHIRenderPassInfo::~FRHIRenderPassInfo(&local_308);
  }
  else {
    local_540 = local_510 + 1;
    lVar21 = 0;
    local_530 = (undefined *)CONCAT71(local_530._1_7_,1);
    local_510[1] = 0;
    local_538 = (undefined *)((ulonglong)local_538 & 0xffffffffffffff00);
    local_548 = (longlong *)CONCAT44(local_548._4_4_,1);
    pvVar14 = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                                (DAT_146ab6358,lVar11,*(undefined8 *)(param_1 + 0x78),0);
    if (pvVar14 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (pvVar14,*(void **)(lVar13 + 0x30),
                 (ulonglong)(uint)(*(int *)(lVar13 + 0x50) * *(int *)(lVar13 + 0x1c)));
      local_540 = (int *)CONCAT71(local_540._1_7_,1);
      local_548 = (longlong *)((ulonglong)local_548 & 0xffffffffffffff00);
      (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,lVar11,*(undefined8 *)(param_1 + 0x78),0);
    }
    local_540 = local_510 + 2;
    local_530 = (undefined *)CONCAT71(local_530._1_7_,1);
    local_510[2] = 0;
    local_538 = (undefined *)((ulonglong)local_538 & 0xffffffffffffff00);
    local_548 = (longlong *)CONCAT44(local_548._4_4_,1);
    pvVar14 = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                                (DAT_146ab6358,lVar11,*(undefined8 *)(param_1 + 0x80),0);
    if (pvVar14 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (pvVar14,*(void **)(lVar13 + 0x38),
                 (ulonglong)((uint)(*(int *)(lVar13 + 0x54) * *(int *)(lVar13 + 0x1c)) >> 1));
      local_540 = (int *)CONCAT71(local_540._1_7_,1);
      local_548 = (longlong *)((ulonglong)local_548 & 0xffffffffffffff00);
      (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,lVar11,*(undefined8 *)(param_1 + 0x80),0);
    }
    local_540 = local_510 + 3;
    local_530 = (undefined *)CONCAT71(local_530._1_7_,1);
    local_510[3] = 0;
    local_538 = (undefined *)((ulonglong)local_538 & 0xffffffffffffff00);
    local_548 = (longlong *)CONCAT44(local_548._4_4_,1);
    pvVar14 = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                                (DAT_146ab6358,lVar11,*(undefined8 *)(param_1 + 0x88),0);
    if (pvVar14 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (pvVar14,*(void **)(lVar13 + 0x40),
                 (ulonglong)((uint)(*(int *)(lVar13 + 0x58) * *(int *)(lVar13 + 0x1c)) >> 1));
      local_540 = (int *)CONCAT71(local_540._1_7_,1);
      local_548 = (longlong *)((ulonglong)local_548 & 0xffffffffffffff00);
      (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,lVar11,*(undefined8 *)(param_1 + 0x88),0);
    }
    local_4f0 = (longlong *)(**(code **)(*plVar12 + 0x30))(plVar12);
    local_c8 = 0xffffffffffffffff;
    uStack_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffff;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_d0 = 0;
    local_cc = 0xffffffff;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_90 = 0;
    local_58 = 0;
    local_1a0 = 0;
    local_198 = 0xffffffff;
    local_194 = 0x500;
    local_e8 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_50 = 1 < *(uint *)(local_4f0 + 7);
    local_1a8 = local_4f0;
    _guard_xfg_dispatch_icall_nop(local_190,0,0xa8);
    uVar22 = *(longlong *)(lVar11 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar15 = uVar22 + 0x22;
    if (*(ulonglong *)(lVar11 + 0x38) < uVar15) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x24);
      uVar22 = *(longlong *)(lVar11 + 0x30) + 1U & 0xfffffffffffffffe;
      uVar15 = uVar22 + 0x22;
    }
    pwVar20 = L"ConvertYUVtoRGBA";
    *(ulonglong *)(lVar11 + 0x30) = uVar15;
    do {
      wVar4 = *pwVar20;
      *(wchar_t *)((uVar22 - 0x144176780) + (longlong)pwVar20) = wVar4;
      pwVar20 = pwVar20 + 1;
    } while (wVar4 != L'\0');
    uVar18 = *(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8;
    uVar15 = uVar18 + 0x178;
    if (*(ulonglong *)(lVar11 + 0x38) < uVar15) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x180);
      uVar18 = *(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8;
      uVar15 = uVar18 + 0x178;
    }
    *(ulonglong *)(lVar11 + 0x30) = uVar15;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(ulonglong **)(lVar11 + 8) = uVar18;
    *(ulonglong *)(lVar11 + 8) = uVar18 + 8;
    FUN_140499730(uVar18,&local_1a8,uVar22);
    *(undefined1 *)(lVar11 + 0x1ac) = 1;
    FUN_14049c2a0(lVar11,&local_1a8);
    *(undefined1 *)(lVar11 + 0x1ac) = 1;
    lVar13 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    local_438 = 0;
    local_440 = &DAT_1469f7900;
    plVar23 = (longlong *)(lVar13 + 0x38);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar23,local_510 + 4,&local_440);
    if (local_510[4] != -1) {
      lVar21 = (longlong)local_510[4] * 0x20 + *plVar23;
    }
    plVar24 = (longlong *)(lVar21 + 0x10);
    if (lVar21 == 0) {
      plVar24 = (longlong *)0x0;
    }
    local_428 = 0;
    local_430 = &DAT_1469f68b0;
    lVar13 = *plVar24;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar23,local_510,&local_430);
    if (local_510[0] == -1) {
      lVar21 = 0;
    }
    else {
      lVar21 = (longlong)local_510[0] * 0x20 + *plVar23;
    }
    plVar24 = (longlong *)0x0;
    local_3b8 = *(uint *)(lVar11 + 0x98);
    plVar23 = (longlong *)(lVar21 + 0x10);
    if (lVar21 == 0) {
      plVar23 = plVar24;
    }
    lVar21 = *plVar23;
    local_408 = 0;
    plStack_400 = (longlong *)0x0;
    local_3f8 = 0;
    uStack_3f0 = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    local_3bc = 0x26;
    local_3b4[0] = 0;
    local_3b4[1] = 0;
    local_3b4[2] = 0;
    local_3b4[3] = 0;
    local_3b4[4] = 0;
    local_3b4[5] = 0;
    local_3b4[6] = 0;
    local_3b4[7] = 0;
    local_3b4[8] = 0;
    local_3b4[9] = 0;
    local_3b4[10] = 0;
    local_3b4[0xb] = 0;
    local_3b4[0xc] = 0;
    local_3b4[0xd] = 0;
    local_3b4[0xe] = 0;
    stack0xfffffffffffffc88 = 0;
    local_370 = 0;
    local_368 = 0;
    local_364 = 0;
    local_35c = 0;
    local_354 = 0;
    plVar23 = plVar24;
    if (local_3b8 != 0) {
      do {
        lVar8 = *(longlong *)(lVar11 + 0xa0 + (longlong)plVar23 * 0x18);
        if (lVar8 == 0) {
          local_3b4[(longlong)plVar23] = 0;
        }
        else {
          local_3b4[(longlong)plVar23] = *(int *)(lVar8 + 0x3c);
          local_3b4[(longlong)(plVar23 + 1)] = *(int *)(lVar8 + 0x40);
        }
        auStack_374[(longlong)plVar23] = *(undefined1 *)(lVar11 + 0xb0 + (longlong)plVar23 * 0x18);
        *(undefined1 *)((longlong)&local_370 + 4 + (longlong)plVar23) =
             *(undefined1 *)(lVar11 + 0xb1 + (longlong)plVar23 * 0x18);
        if (local_3b4[(longlong)plVar23] != 0) {
          local_354 = CONCAT22(local_354._2_2_,*(undefined2 *)(lVar8 + 0x38));
        }
        uVar25 = (int)plVar23 + 1;
        plVar23 = (longlong *)(ulonglong)uVar25;
      } while (uVar25 < local_3b8);
    }
    lVar8 = *(longlong *)(lVar11 + 0x160);
    if (lVar8 == 0) {
      local_364 = local_364 & 0xffffffff00000000;
    }
    else {
      plVar24 = (longlong *)(ulonglong)*(uint *)(lVar8 + 0x3c);
      local_364 = *(ulonglong *)(lVar8 + 0x3c);
    }
    local_35c = *(undefined8 *)(lVar11 + 0x168);
    if ((int)plVar24 != 0) {
      local_354 = CONCAT22(local_354._2_2_,*(undefined2 *)(lVar8 + 0x38));
    }
    local_3d8 = FUN_1409852b0();
    uStack_3d0 = FUN_140985530();
    local_3c8 = FUN_1409853f0();
    local_408 = DAT_146290340;
    if (lVar21 == 0) {
      plStack_400 = (longlong *)0x0;
      local_514 = 1;
      plVar23 = plStack_400;
    }
    else {
      lVar21 = *(longlong *)(lVar21 + 0x48);
      if (*(char *)(lVar21 + 0x28) == '\0') {
        FUN_1419f3850(lVar21);
      }
      plStack_400 = *(longlong **)(lVar21 + 0x38);
      plVar23 = local_4f0;
    }
    if (((local_514 & 1) != 0) && (local_514 = local_514 & 0xfffffffe, plVar23 != (longlong *)0x0))
    {
      LOCK();
      plVar24 = plVar23 + 1;
      lVar21 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)lVar21 == 1) {
        if (((char)plVar23[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' ||
            (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
          LOCK();
          bVar26 = *(int *)((longlong)plVar23 + 0xc) == 0;
          if (bVar26) {
            *(int *)((longlong)plVar23 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar26) {
            uVar25 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar25 == 0) {
              lVar21 = 0;
            }
            else {
              lVar21 = (&DAT_1468a81f8)[uVar25 >> 0xe] + (ulonglong)(uVar25 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar21 + 8) = plVar23;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar23)(plVar23,1);
        }
      }
    }
    if (lVar13 == 0) {
      local_514 = local_514 | 2;
      local_3e8 = 0;
      plVar23 = (longlong *)0x0;
    }
    else {
      lVar21 = *(longlong *)(lVar13 + 0x48);
      if (*(char *)(lVar21 + 0x28) == '\0') {
        FUN_1419f3850(lVar21);
      }
      local_3e8 = *(undefined8 *)(lVar21 + 0x40);
      plVar23 = local_4f0;
    }
    if (((local_514 & 2) != 0) && (plVar23 != (longlong *)0x0)) {
      LOCK();
      plVar24 = plVar23 + 1;
      lVar21 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)lVar21 == 1) {
        if (((char)plVar23[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' ||
            (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
          LOCK();
          bVar26 = *(int *)((longlong)plVar23 + 0xc) == 0;
          if (bVar26) {
            *(int *)((longlong)plVar23 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar26) {
            uVar25 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar25 == 0) {
              lVar21 = 0;
            }
            else {
              lVar21 = (&DAT_1468a81f8)[uVar25 >> 0xe] + (ulonglong)(uVar25 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar21 + 8) = plVar23;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar25);
          }
        }
        else {
          (**(code **)*plVar23)(plVar23,1);
        }
      }
    }
    local_3bc = 1;
    FUN_141ed6ac0(lVar11,&local_408,2,1);
    if (*(char *)(param_1 + 0xaa) == '\0') {
      local_518 = FUN_141ee42d0();
    }
    else {
      local_518 = 1;
    }
    plVar23 = *(longlong **)(param_1 + 0x80);
    plVar24 = *(longlong **)(param_1 + 0x78);
    local_4e8 = *(undefined4 *)(local_4e0 + 0x18);
    local_4e4 = *(undefined4 *)(local_4e0 + 0x1c);
    local_468 = (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
    if (local_468 != 0) {
      LOCK();
      *(int *)(local_468 + 8) = *(int *)(local_468 + 8) + 1;
      UNLOCK();
    }
    local_460 = (**(code **)(*plVar23 + 8))(plVar23);
    if (local_460 != 0) {
      LOCK();
      *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
      UNLOCK();
    }
    local_458 = (**(code **)(*plVar24 + 8))(plVar24);
    if (local_458 != 0) {
      LOCK();
      *(int *)(local_458 + 8) = *(int *)(local_458 + 8) + 1;
      UNLOCK();
    }
    local_528 = CONCAT31(local_528._1_3_,local_518);
    local_530 = &DAT_1464c1030;
    local_538 = &DAT_1464c0ef0;
    local_540 = &local_4e8;
    local_548 = &local_468;
    FUN_141a18920(lVar13,lVar11,&local_458,&local_460);
    puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = *(undefined4 *)(local_4e0 + 0x1c);
    uVar6 = *(undefined4 *)(local_4e0 + 0xc);
    puVar16 = puVar19 + 5;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x30);
      puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar19 + 5;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar16;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar19;
    *(undefined8 **)(lVar11 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f59420;
    puVar19[2] = 0;
    *(undefined4 *)(puVar19 + 3) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar6;
    *(undefined4 *)(puVar19 + 4) = uVar5;
    *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
    uVar9 = DAT_146290348;
    puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar19 + 5;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x30);
      puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar19 + 5;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar16;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar19;
    *(undefined8 **)(lVar11 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar19 + 2) = 0;
    puVar19[3] = uVar9;
    *(undefined4 *)(puVar19 + 4) = 0;
    puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar19 + 4;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x28);
      puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar19 + 4;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar16;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar19;
    *(undefined8 **)(lVar11 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f59410;
    puVar19[2] = 1;
    *(undefined4 *)(puVar19 + 3) = 2;
    *(undefined4 *)((longlong)puVar19 + 0x1c) = 1;
    FRHICommandList::EndRenderPass(lVar11);
    puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    local_4a0 = 0xffffffff00000000;
    uStack_498 = 0xffffffffffffffff;
    puVar16 = puVar19 + 10;
    local_490 = 0xffffffffffffffff;
    uStack_488 = 0xffffffffffffffff;
    local_480 = 0xffffffff;
    uStack_478 = 0;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x58);
      puVar19 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar19 + 10;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar16;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar19;
    *(undefined8 **)(lVar11 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar19 + 2) = (undefined4)local_4a0;
    *(undefined4 *)((longlong)puVar19 + 0x14) = local_4a0._4_4_;
    *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_498;
    *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_498._4_4_;
    *(undefined4 *)(puVar19 + 4) = (undefined4)local_490;
    *(undefined4 *)((longlong)puVar19 + 0x24) = local_490._4_4_;
    *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_488;
    *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_488._4_4_;
    *(undefined4 *)(puVar19 + 6) = (undefined4)local_480;
    *(undefined4 *)((longlong)puVar19 + 0x34) = local_480._4_4_;
    *(undefined4 *)(puVar19 + 7) = (undefined4)uStack_478;
    *(undefined4 *)((longlong)puVar19 + 0x3c) = uStack_478._4_4_;
    puVar19[8] = local_4f0;
    puVar19[9] = local_4f0;
    lVar13 = (**(code **)(*local_4f0 + 8))();
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar19[8] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar19[8] + 0x20))();
    }
    lVar13 = (**(code **)(*(longlong *)puVar19[9] + 8))();
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar19[9] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar19[9] + 0x20))();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_420 = plVar12;
    local_418 = plVar7;
    (**(code **)**(undefined8 **)(param_1 + 0xa0))(*(undefined8 **)(param_1 + 0xa0),&local_420);
    LOCK();
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
    UNLOCK();
    FRHIRenderPassInfo::~FRHIRenderPassInfo(&local_1a8);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 140983260 FUN_140983260 body=231 status=ok
// SIG undefined FUN_140983260(void)

undefined8 * FUN_140983260(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_FUN_144177878;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
    UNLOCK();
  }
  puVar2[3] = 0;
  iVar5 = *(int *)(param_1 + 0x20);
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    return puVar2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 3,iVar5,0);
  puVar3 = (undefined8 *)puVar2[3];
  do {
    *puVar3 = *puVar4;
    lVar1 = puVar4[1];
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return puVar2;
}



// FUNCTION 140983350 FUN_140983350 body=287 status=ok
// SIG undefined FUN_140983350(void)

longlong *
FUN_140983350(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined1 local_68 [40];
  
  plVar5 = (longlong *)FUN_140596960(local_68,param_4,0xff);
  lVar1 = *plVar5;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x50) = 0;
  if (param_2[6] == 0) {
    _guard_xfg_dispatch_icall_nop((longlong *)(lVar1 + 0x20),param_2 + 2,0x20);
  }
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(lVar1 + 0x40) = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(lVar1 + 0x50) != 0) {
    plVar7 = *(longlong **)(lVar1 + 0x40);
    if (*(longlong **)(lVar1 + 0x40) == (longlong *)0x0) {
      plVar7 = (longlong *)(lVar1 + 0x20);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))();
      pcVar6 = (code *)*param_2;
      goto LAB_1409833f7;
    }
  }
  pcVar6 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_1409833f7:
  *(code **)(lVar1 + 0x10) = pcVar6;
  *param_2 = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(lVar1 + 0x60) = param_5;
  lVar1 = *plVar5;
  lVar4 = plVar5[2];
  lVar2 = plVar5[1];
  lVar3 = *(longlong *)(lVar1 + 0x78);
  *param_1 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1405ab110(lVar1,lVar2,(int)lVar4,1);
  if (*(int *)(param_2 + 8) != 0) {
    plVar5 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar5 = param_2 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140983470 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>
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
  local_88 = 0x100;
  local_84 = 0xf0001;
  local_80 = 0x1000001;
  local_7c = 0x1000000;
  local_78 = 0x10000;
  local_74 = 0x10000;
  local_70 = 0x100;
  local_6c = 0x100;
  local_68 = 1;
  local_64 = 0x1000001;
  local_60 = 0x1000000;
  local_5c = 0x10000;
  local_58 = 0x10000;
  local_54 = 0x100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 140983540 FUN_140983540 body=332 status=ok
// SIG undefined FUN_140983540(void)

undefined8 * FUN_140983540(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1441778a0;
  *(undefined1 *)(plVar6 + 6) = 0;
  plVar6[7] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 140983690 FUN_140983690 body=332 status=ok
// SIG undefined FUN_140983690(void)

undefined8 * FUN_140983690(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1441778b0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1409837e0 FUN_1409837e0 body=541 status=ok
// SIG undefined FUN_1409837e0(void)

void FUN_1409837e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 local_res8;
  longlong local_res10;
  longlong local_90;
  undefined8 *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  iVar10 = (int)param_2[1];
  lVar4 = *param_2;
  local_88 = (undefined8 *)0x0;
  local_80 = iVar10;
  if (iVar10 == 0) {
    local_7c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_88,iVar10,0);
    puVar8 = local_88;
    do {
      *puVar8 = *(undefined8 *)((lVar4 - (longlong)local_88) + (longlong)puVar8);
      lVar5 = *(longlong *)((lVar4 - (longlong)local_88) + 8 + (longlong)puVar8);
      puVar8[1] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      puVar8 = puVar8 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = local_80;
  puVar8 = local_88;
  local_48 = 0;
  local_38 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_68);
  local_90 = lVar3;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_144177878;
    puVar9 = puVar6 + 3;
    puVar6[1] = param_1;
    puVar6[2] = lVar3;
    *puVar9 = 0;
    *(int *)(puVar6 + 4) = iVar10;
    local_90 = 0;
    if (iVar10 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar9,iVar10,0);
      puVar9 = (undefined8 *)*puVar9;
      do {
        *puVar9 = *puVar8;
        lVar4 = puVar8[1];
        puVar9[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        puVar8 = puVar8 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  local_78[0] = FUN_140981f90;
  plVar7 = (longlong *)FUN_140983350(&local_res10,local_78,local_res8,0,0xff);
  if (plVar1 != plVar7) {
    lVar4 = *plVar1;
    *plVar1 = *plVar7;
    *plVar7 = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0x48);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  if (local_res10 != 0) {
    LOCK();
    piVar2 = (int *)(local_res10 + 0x48);
    iVar10 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle();
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
  if (local_90 != 0) {
    LOCK();
    piVar2 = (int *)(local_90 + 0x48);
    iVar10 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_90);
    }
  }
  if (lVar3 != 0) {
    LOCK();
    piVar2 = (int *)(lVar3 + 0x48);
    iVar10 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar3);
    }
  }
  return;
}



// FUNCTION 140983a00 FUN_140983a00 body=541 status=ok
// SIG undefined FUN_140983a00(void)

void FUN_140983a00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 local_res8;
  longlong local_res10;
  longlong local_90;
  undefined8 *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  plVar2 = (longlong *)(param_1 + 0x98);
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  iVar10 = (int)param_2[1];
  lVar4 = *param_2;
  local_88 = (undefined8 *)0x0;
  local_80 = iVar10;
  if (iVar10 == 0) {
    local_7c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_88,iVar10,0);
    puVar8 = local_88;
    do {
      *puVar8 = *(undefined8 *)((lVar4 - (longlong)local_88) + (longlong)puVar8);
      lVar5 = *(longlong *)((lVar4 - (longlong)local_88) + 8 + (longlong)puVar8);
      puVar8[1] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      puVar8 = puVar8 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = local_80;
  puVar8 = local_88;
  local_48 = 0;
  local_38 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_68);
  local_90 = lVar3;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_144177878;
    puVar9 = puVar6 + 3;
    puVar6[1] = param_1;
    puVar6[2] = lVar3;
    *puVar9 = 0;
    *(int *)(puVar6 + 4) = iVar10;
    local_90 = 0;
    if (iVar10 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar9,iVar10,0);
      puVar9 = (undefined8 *)*puVar9;
      do {
        *puVar9 = *puVar8;
        lVar4 = puVar8[1];
        puVar9[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        puVar8 = puVar8 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  local_78[0] = FUN_140981f30;
  plVar7 = (longlong *)FUN_140983350(&local_res10,local_78,local_res8,0,0xff);
  if (plVar2 != plVar7) {
    lVar4 = *plVar2;
    *plVar2 = *plVar7;
    *plVar7 = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 0x48);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  if (local_res10 != 0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 0x48);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle();
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
  if (local_90 != 0) {
    LOCK();
    piVar1 = (int *)(local_90 + 0x48);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_90);
    }
  }
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar3);
    }
  }
  return;
}



// FUNCTION 140983c20 DecodeVorbis body=756 status=ok
// SIG undefined DecodeVorbis(void)

int FWebMAudioDecoder::DecodeVorbis(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong local_res8;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_68 = *(undefined8 *)*param_2;
  local_60 = (ulonglong)*(uint *)((undefined8 *)*param_2 + 1);
  iVar3 = ::_guard_xfg_dispatch_icall_nop(*(longlong *)(param_1 + 8) + 0xa8,&local_68);
  if ((iVar3 == 0) &&
     (iVar3 = ::_guard_xfg_dispatch_icall_nop
                        (*(longlong *)(param_1 + 8) + 0x28,*(longlong *)(param_1 + 8) + 0xa8),
     iVar3 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    iVar6 = 0;
    iVar3 = ::_guard_xfg_dispatch_icall_nop(*(longlong *)(param_1 + 8) + 0x28,&local_res8);
    while (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x3c) < iVar3) {
        iVar3 = *(int *)(param_1 + 0x3c);
      }
      iVar13 = 0;
      lVar12 = (longlong)iVar3;
      if (0 < iVar4) {
        lVar11 = 0;
        do {
          lVar9 = 0;
          lVar2 = *(longlong *)(lVar11 + local_res8);
          iVar5 = iVar13;
          if (3 < lVar12) {
            pfVar8 = (float *)(lVar2 + 8);
            lVar10 = (lVar12 - 4U >> 2) + 1;
            lVar9 = lVar10 * 4;
            do {
              iVar4 = (int)(pfVar8[-2] * 32767.0);
              if (iVar4 < -0x8000) {
                iVar7 = -0x8000;
              }
              else {
                iVar7 = 0x8000;
                if (iVar4 < 0x8000) {
                  iVar7 = iVar4;
                }
              }
              *(short *)(lVar1 + (longlong)(iVar5 + iVar6) * 2) = (short)iVar7;
              iVar5 = iVar5 + *(int *)(param_1 + 0x44);
              iVar4 = (int)(pfVar8[-1] * 32767.0);
              if (iVar4 < -0x8000) {
                iVar7 = -0x8000;
              }
              else {
                iVar7 = 0x8000;
                if (iVar4 < 0x8000) {
                  iVar7 = iVar4;
                }
              }
              *(short *)(lVar1 + (longlong)(iVar5 + iVar6) * 2) = (short)iVar7;
              iVar5 = iVar5 + *(int *)(param_1 + 0x44);
              iVar4 = (int)(*pfVar8 * 32767.0);
              if (iVar4 < -0x8000) {
                iVar7 = -0x8000;
              }
              else {
                iVar7 = 0x8000;
                if (iVar4 < 0x8000) {
                  iVar7 = iVar4;
                }
              }
              *(short *)(lVar1 + (longlong)(iVar5 + iVar6) * 2) = (short)iVar7;
              iVar5 = iVar5 + *(int *)(param_1 + 0x44);
              iVar4 = (int)(pfVar8[1] * 32767.0);
              if (iVar4 < -0x8000) {
                iVar7 = -0x8000;
              }
              else {
                iVar7 = 0x8000;
                if (iVar4 < 0x8000) {
                  iVar7 = iVar4;
                }
              }
              pfVar8 = pfVar8 + 4;
              *(short *)(lVar1 + (longlong)(iVar5 + iVar6) * 2) = (short)iVar7;
              iVar4 = *(int *)(param_1 + 0x44);
              iVar5 = iVar5 + iVar4;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          for (; lVar9 < lVar12; lVar9 = lVar9 + 1) {
            iVar4 = (int)(*(float *)(lVar2 + lVar9 * 4) * 32767.0);
            if (iVar4 < -0x8000) {
              iVar7 = -0x8000;
            }
            else {
              iVar7 = 0x8000;
              if (iVar4 < 0x8000) {
                iVar7 = iVar4;
              }
            }
            *(short *)(lVar1 + (longlong)(iVar5 + iVar6) * 2) = (short)iVar7;
            iVar4 = *(int *)(param_1 + 0x44);
            iVar5 = iVar5 + iVar4;
          }
          iVar13 = iVar13 + 1;
          lVar11 = lVar11 + 8;
        } while (iVar13 < iVar4);
      }
      ::_guard_xfg_dispatch_icall_nop(*(longlong *)(param_1 + 8) + 0x28,iVar3);
      iVar6 = iVar6 + iVar3;
      iVar3 = ::_guard_xfg_dispatch_icall_nop(*(longlong *)(param_1 + 8) + 0x28,&local_res8);
    }
    return iVar6;
  }
  return -1;
}



// FUNCTION 140983f70 FUN_140983f70 body=792 status=ok
// SIG undefined FUN_140983f70(void)

void FUN_140983f70(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  BOOL BVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  
  plVar14 = (longlong *)*param_2;
  plVar11 = plVar14 + (longlong)(int)param_2[1] * 2;
  do {
    if (plVar14 == plVar11) {
      return;
    }
    plVar13 = (longlong *)0x0;
    if ((int)param_1[7] == 0) {
      if (param_1[6] != 0) {
        iVar7 = opus_decode(param_1[6],*(undefined8 *)*plVar14,
                            *(undefined4 *)((undefined8 *)*plVar14 + 1),param_1[3],
                            *(undefined4 *)((longlong)param_1 + 0x3c),0);
        goto LAB_140984000;
      }
    }
    else {
      iVar7 = FWebMAudioDecoder::DecodeVorbis(param_1,plVar14);
LAB_140984000:
      if (0 < iVar7) {
        plVar10 = (longlong *)*param_1;
        lpCriticalSection = (LPCRITICAL_SECTION)*plVar10;
        BVar8 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar8 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        plVar12 = plVar13;
        if (0 < lpCriticalSection[1].LockCount) {
          plVar12 = *(longlong **)
                     ((longlong)lpCriticalSection[1].DebugInfo +
                     (longlong)lpCriticalSection[1].LockCount * 8 + -8);
          lpCriticalSection[1].LockCount = lpCriticalSection[1].LockCount + -1;
        }
        LeaveCriticalSection(lpCriticalSection);
        if ((plVar12 == (longlong *)0x0) &&
           (plVar9 = (longlong *)operator_new(0x40), plVar12 = plVar13, plVar9 != (longlong *)0x0))
        {
          *plVar9 = (longlong)&PTR_Bytes_144159540;
          plVar9[1] = (longlong)&PTR_StartProfileThreadUsage_144159580;
          plVar9[2] = 0;
          plVar9[3] = 0;
          *(undefined4 *)(plVar9 + 4) = 0;
          plVar9[5] = 0;
          *(undefined4 *)(plVar9 + 6) = 0;
          plVar9[7] = 0;
          plVar12 = plVar9;
        }
        (**(code **)plVar12[1])(plVar12 + 1);
        plVar9 = (longlong *)plVar10[1];
        lVar4 = *plVar10;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
        }
        plVar10 = (longlong *)operator_new(0x28);
        plStack_40 = plVar13;
        if (plVar10 != (longlong *)0x0) {
          plVar10[2] = lVar4;
          plVar10[3] = (longlong)plVar9;
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_144159b28;
          plVar10[4] = (longlong)plVar12;
          plStack_40 = plVar10;
          plVar9 = plVar13;
        }
        local_48 = plVar12;
        SharedPointerInternals::EnableSharedFromThis(&local_48,plVar12,plVar12);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (plVar9 != (longlong *)0x0)) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
        plVar13 = local_48;
        local_58 = (longlong *)param_1[3];
        lVar6 = param_1[8];
        lVar4 = *(longlong *)(*plVar14 + 0x10);
        iVar2 = *(int *)((longlong)param_1 + 0x44);
        *(undefined4 *)(local_48 + 3) = 0;
        iVar5 = iVar2 * iVar7 * 2;
        if (*(int *)((longlong)local_48 + 0x1c) < iVar5) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(local_48 + 2,iVar5);
        }
        iVar3 = (int)plVar13[3];
        *(int *)(plVar13 + 3) = iVar3 + iVar5;
        if (*(int *)((longlong)plVar13 + 0x1c) < iVar3 + iVar5) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar13 + 2,iVar3);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 + plVar13[2]),local_58,(longlong)iVar5);
        *(int *)(plVar13 + 4) = iVar2;
        *(int *)(plVar13 + 6) = (int)lVar6;
        plVar13[5] = ((longlong)iVar7 * 10000000) / (longlong)(int)lVar6;
        plVar13[7] = lVar4;
        local_58 = local_48;
        plStack_50 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)param_1[5] + 8))((longlong *)param_1[5],&local_58);
        plVar13 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_40 + 1;
          lVar4 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
      }
    }
    plVar14 = plVar14 + 2;
  } while( true );
}



// FUNCTION 140984290 FUN_140984290 body=2632 status=ok
// SIG undefined FUN_140984290(void)

void FUN_140984290(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPCRITICAL_SECTION p_Var4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  BOOL BVar11;
  DWORD DVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *local_1b0 [2];
  undefined8 *local_1a0;
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong *plStack_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 *local_158;
  longlong *plStack_150;
  undefined8 *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong *local_128;
  longlong local_120;
  undefined8 *local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  
  plVar19 = (longlong *)*param_2;
  local_128 = plVar19 + (longlong)(int)param_2[1] * 2;
  if (plVar19 != local_128) {
    do {
      iVar10 = FUN_143989d50(param_1 + 0x38,*(undefined8 *)*plVar19,
                             *(undefined4 *)((undefined8 *)*plVar19 + 1),0,0);
      if (iVar10 == 0) {
        local_160 = 0;
        lVar15 = FUN_143989db0(param_1 + 0x38,&local_160);
        while (lVar15 != 0) {
          if (*(char *)(param_1 + 0xa8) == '\0') {
            *(undefined1 *)(param_1 + 0xa8) = 1;
            local_138 = param_1;
            lStack_130 = lVar15;
            if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
              if ((DAT_146ac3ac5 == '\0') &&
                 (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0'))
                  || (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)))) {
                local_98 = local_138;
                lStack_90 = lStack_130;
                uVar16 = FBaseGraphTask::GetSmallTaskAllocator();
                FUN_140981500(&local_98,uVar16);
              }
              else {
                plVar17 = (longlong *)FUN_140983690(local_70,0,0xff);
                lVar5 = *plVar17;
                *(longlong *)(lVar5 + 0x10) = local_138;
                *(longlong *)(lVar5 + 0x18) = lStack_130;
                lVar5 = *plVar17;
                lVar8 = plVar17[2];
                lVar6 = plVar17[1];
                lVar7 = *(longlong *)(lVar5 + 0x28);
                piVar1 = (int *)(lVar7 + 0x48);
                if (lVar7 != 0) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                FUN_1409421c0(lVar5,lVar6,(int)lVar8,1);
                if (lVar7 != 0) {
                  LOCK();
                  iVar10 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    FGraphEvent::Recycle(lVar7);
                  }
                }
              }
            }
            else {
              uVar16 = FBaseGraphTask::GetSmallTaskAllocator();
              FUN_140981500(&local_138,uVar16);
            }
          }
          plVar17 = *(longlong **)(param_1 + 0x70);
          p_Var4 = (LPCRITICAL_SECTION)*plVar17;
          BVar11 = TryEnterCriticalSection(p_Var4);
          if (BVar11 == 0) {
            EnterCriticalSection(p_Var4);
          }
          puVar18 = (undefined8 *)0x0;
          if (0 < p_Var4[1].LockCount) {
            puVar18 = *(undefined8 **)
                       ((longlong)p_Var4[1].DebugInfo + (longlong)p_Var4[1].LockCount * 8 + -8);
            p_Var4[1].LockCount = p_Var4[1].LockCount + -1;
          }
          LeaveCriticalSection(p_Var4);
          if ((puVar18 == (undefined8 *)0x0) &&
             (puVar13 = (undefined8 *)operator_new(0x38), puVar18 = (undefined8 *)0x0,
             puVar13 != (undefined8 *)0x0)) {
            *puVar13 = &PTR_GetPoolName_144177738;
            puVar13[1] = &PTR_StartProfileThreadUsage_1441777a0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar18 = puVar13;
          }
          (**(code **)puVar18[1])(puVar18 + 1);
          plVar14 = (longlong *)plVar17[1];
          lVar5 = *plVar17;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
            UNLOCK();
          }
          plStack_140 = (longlong *)operator_new(0x28);
          if (plStack_140 == (longlong *)0x0) {
            plStack_140 = (longlong *)0x0;
          }
          else {
            plStack_140[2] = lVar5;
            plStack_140[3] = (longlong)plVar14;
            plVar14 = (longlong *)0x0;
            *(undefined4 *)(plStack_140 + 1) = 1;
            *(undefined4 *)((longlong)plStack_140 + 0xc) = 1;
            *plStack_140 = (longlong)&PTR_FUN_144159b18;
            plStack_140[4] = (longlong)puVar18;
          }
          local_148 = puVar18;
          SharedPointerInternals::EnableSharedFromThis(&local_148,puVar18,puVar18);
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar10 == 1) && (plVar14 != (longlong *)0x0)) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
          uVar2 = *(undefined4 *)(lVar15 + 0x18);
          uVar3 = *(undefined4 *)(lVar15 + 0x1c);
          uVar16 = *(undefined8 *)(*plVar19 + 0x18);
          local_148[3] = *(undefined8 *)(*plVar19 + 0x10);
          *(undefined4 *)(local_148 + 6) = uVar2;
          *(undefined4 *)((longlong)local_148 + 0x34) = uVar3;
          *(undefined4 *)(local_148 + 5) = uVar2;
          *(undefined4 *)((longlong)local_148 + 0x2c) = uVar3;
          local_148[4] = uVar16;
          plStack_170 = plStack_140;
          local_198[0] = (longlong *)0x0;
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
            UNLOCK();
          }
          local_1a0 = local_148;
          local_178 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(local_198,&plStack_170);
          plVar17 = plStack_170;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            plVar14 = plStack_170 + 1;
            lVar5 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_170)(plStack_170);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plStack_170 + 8))(plStack_170,1);
              }
            }
          }
          plVar17 = local_198[0];
          puVar18 = local_1a0;
          LOCK();
          *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
          UNLOCK();
          local_d8 = local_1a0;
          local_d0 = local_198[0];
          if (local_198[0] != (longlong *)0x0) {
            LOCK();
            *(int *)(local_198[0] + 1) = (int)local_198[0][1] + 1;
            UNLOCK();
          }
          local_e0 = param_1;
          local_c8 = lVar15;
          if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
            if ((DAT_146ac3ac5 == '\0') &&
               (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0'))
                || (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)))) {
              local_b8 = puVar18;
              local_b0 = plVar17;
              local_c0 = param_1;
              local_a8 = lVar15;
              FBaseGraphTask::GetSmallTaskAllocator();
              FUN_140982240(param_1,&local_b8);
              plVar14 = local_b0;
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                plVar17 = local_b0 + 1;
                lVar15 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                plVar17 = local_198[0];
                if ((int)lVar15 == 1) {
                  (**(code **)*local_b0)(local_b0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar10 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar17 = local_198[0];
                  if (iVar10 == 1) {
                    (**(code **)(*local_b0 + 8))(local_b0,1);
                    plVar17 = local_198[0];
                  }
                }
              }
            }
            else {
              plVar14 = (longlong *)FUN_140983540(local_58,0,0xff);
              lVar5 = *plVar14;
              *(longlong *)(lVar5 + 0x10) = param_1;
              *(undefined8 **)(lVar5 + 0x18) = puVar18;
              *(longlong **)(lVar5 + 0x20) = plVar17;
              *(longlong *)(lVar5 + 0x28) = lVar15;
              lVar15 = *plVar14;
              lVar7 = plVar14[2];
              lVar5 = plVar14[1];
              lVar6 = *(longlong *)(lVar15 + 0x38);
              piVar1 = (int *)(lVar6 + 0x48);
              if (lVar6 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
                plVar17 = local_198[0];
              }
              local_168 = lVar6;
              FUN_14048a640(lVar15,lVar5,(int)lVar7);
              if (lVar6 != 0) {
                LOCK();
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar17 = local_198[0];
                if (iVar10 == 1) {
                  FGraphEvent::Recycle(local_168);
                  plVar17 = local_198[0];
                }
              }
            }
          }
          else {
            FBaseGraphTask::GetSmallTaskAllocator();
            FUN_140982240(param_1,&local_d8);
            plVar14 = local_d0;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_d0 + 1;
              lVar15 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              plVar17 = local_198[0];
              if ((int)lVar15 == 1) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar17 = local_198[0];
                if (iVar10 == 1) {
                  (**(code **)(*local_d0 + 8))(local_d0,1);
                  plVar17 = local_198[0];
                }
              }
            }
          }
          plVar14 = local_198[0];
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar17 + 1;
            lVar15 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_198[0])(local_198[0]);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_198[0] + 8))(local_198[0],1);
              }
            }
          }
          plVar17 = plStack_140;
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            plVar14 = plStack_140 + 1;
            lVar15 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plStack_140)(plStack_140);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
          }
          lVar15 = FUN_143989db0(param_1 + 0x38);
        }
      }
      else {
        FUN_140986f30(param_1);
        plVar17 = *(longlong **)(param_1 + 0x70);
        p_Var4 = (LPCRITICAL_SECTION)*plVar17;
        BVar11 = TryEnterCriticalSection(p_Var4);
        if (BVar11 == 0) {
          EnterCriticalSection(p_Var4);
        }
        puVar18 = (undefined8 *)0x0;
        if (0 < p_Var4[1].LockCount) {
          puVar18 = *(undefined8 **)
                     ((longlong)p_Var4[1].DebugInfo + (longlong)p_Var4[1].LockCount * 8 + -8);
          p_Var4[1].LockCount = p_Var4[1].LockCount + -1;
        }
        LeaveCriticalSection(p_Var4);
        if ((puVar18 == (undefined8 *)0x0) &&
           (puVar13 = (undefined8 *)operator_new(0x38), puVar18 = (undefined8 *)0x0,
           puVar13 != (undefined8 *)0x0)) {
          *puVar13 = &PTR_GetPoolName_144177738;
          puVar13[1] = &PTR_StartProfileThreadUsage_1441777a0;
          puVar13[2] = 0;
          puVar13[3] = 0;
          puVar18 = puVar13;
        }
        (**(code **)puVar18[1])(puVar18 + 1);
        plVar14 = (longlong *)plVar17[1];
        lVar15 = *plVar17;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
          UNLOCK();
        }
        plStack_150 = (longlong *)operator_new(0x28);
        if (plStack_150 == (longlong *)0x0) {
          plStack_150 = (longlong *)0x0;
        }
        else {
          plStack_150[2] = lVar15;
          plStack_150[3] = (longlong)plVar14;
          plVar14 = (longlong *)0x0;
          *(undefined4 *)(plStack_150 + 1) = 1;
          *(undefined4 *)((longlong)plStack_150 + 0xc) = 1;
          *plStack_150 = (longlong)&PTR_FUN_144159b18;
          plStack_150[4] = (longlong)puVar18;
        }
        local_158 = puVar18;
        SharedPointerInternals::EnableSharedFromThis(&local_158,puVar18,puVar18);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar10 == 1) && (plVar14 != (longlong *)0x0)) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
        puVar18 = local_158;
        local_1b0[0] = (longlong *)0x0;
        uVar16 = *(undefined8 *)(*plVar19 + 0x18);
        local_158[3] = *(undefined8 *)(*plVar19 + 0x10);
        *(undefined4 *)(local_158 + 6) = 0x20;
        *(undefined4 *)((longlong)local_158 + 0x34) = 0x20;
        *(undefined4 *)(local_158 + 5) = 0x20;
        *(undefined4 *)((longlong)local_158 + 0x2c) = 0x20;
        local_158[4] = uVar16;
        plStack_180 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
          UNLOCK();
        }
        local_188 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_1b0,&plStack_180);
        plVar17 = plStack_180;
        if (plStack_180 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_180 + 1;
          lVar15 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plStack_180)(plStack_180);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plStack_180 + 8))(plStack_180,1);
            }
          }
        }
        plVar17 = local_1b0[0];
        LOCK();
        *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
        UNLOCK();
        local_118 = puVar18;
        local_110 = local_1b0[0];
        if (local_1b0[0] != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1b0[0] + 1) = (int)local_1b0[0][1] + 1;
          UNLOCK();
        }
        local_108 = 0;
        local_120 = param_1;
        if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
          if ((DAT_146ac3ac5 == '\0') &&
             (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
              (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)))) {
            local_f8 = puVar18;
            local_f0 = plVar17;
            local_e8 = 0;
            local_100 = param_1;
            FBaseGraphTask::GetSmallTaskAllocator();
            FUN_140982240(param_1,&local_f8);
            plVar14 = local_f0;
            if (local_f0 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_f0 + 1;
              lVar15 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              plVar17 = local_1b0[0];
              if ((int)lVar15 == 1) {
                (**(code **)*local_f0)(local_f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar17 = local_1b0[0];
                if (iVar10 == 1) {
                  (**(code **)(*local_f0 + 8))(local_f0,1);
                  plVar17 = local_1b0[0];
                }
              }
            }
          }
          else {
            plVar14 = (longlong *)FUN_140983540(local_88,0,0xff);
            lVar15 = *plVar14;
            *(longlong *)(lVar15 + 0x10) = param_1;
            *(undefined8 **)(lVar15 + 0x18) = puVar18;
            *(longlong **)(lVar15 + 0x20) = plVar17;
            *(undefined8 *)(lVar15 + 0x28) = 0;
            lVar15 = *plVar14;
            lVar7 = plVar14[2];
            lVar5 = plVar14[1];
            lVar6 = *(longlong *)(lVar15 + 0x38);
            piVar1 = (int *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              plVar17 = local_1b0[0];
            }
            FUN_14048a640(lVar15,lVar5,(int)lVar7);
            if (lVar6 != 0) {
              LOCK();
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar17 = local_1b0[0];
              if (iVar10 == 1) {
                FGraphEvent::Recycle(lVar6);
                plVar17 = local_1b0[0];
              }
            }
          }
        }
        else {
          FBaseGraphTask::GetSmallTaskAllocator();
          FUN_140982240(param_1,&local_118);
          plVar14 = local_110;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_110 + 1;
            lVar15 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            plVar17 = local_1b0[0];
            if ((int)lVar15 == 1) {
              (**(code **)*local_110)(local_110);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar17 = local_1b0[0];
              if (iVar10 == 1) {
                (**(code **)(*local_110 + 8))(local_110,1);
                plVar17 = local_1b0[0];
              }
            }
          }
        }
        plVar14 = local_1b0[0];
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar17 + 1;
          lVar15 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_1b0[0])(local_1b0[0]);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_1b0[0] + 8))(local_1b0[0],1);
            }
          }
        }
        plVar17 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_150 + 1;
          lVar15 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plStack_150)(plStack_150);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
      }
      plVar19 = plVar19 + 2;
    } while (plVar19 != local_128);
  }
  return;
}



// FUNCTION 140984ce0 EndRenderPass body=122 status=ok
// SIG undefined EndRenderPass(void)

void FRHICommandList::EndRenderPass(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 2;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x18);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 2;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_143f59460;
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  return;
}



// FUNCTION 140984d60 FUN_140984d60 body=292 status=ok
// SIG undefined FUN_140984d60(void)

void FUN_140984d60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_140982240(param_1[2],param_1 + 3);
  plVar7 = (longlong *)param_1[4];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_1441778a0;
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
  plVar5 = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 140984e90 ExecuteTask body=238 status=ok
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
  FUN_140981500(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1441778b0;
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



// FUNCTION 140984f80 FromMicroseconds body=159 status=ok
// SIG undefined FromMicroseconds(void)

longlong * FTimespan::FromMicroseconds(longlong *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  dVar3 = param_2 * 10.0 + 0.5;
  uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (0.0 <= dVar3) {
    lVar5 = (longlong)dVar3;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar3)) {
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar3;
      auVar2._12_4_ = uVar6;
      uVar4 = movmskpd(0,auVar2);
      dVar3 = (double)(longlong)(lVar5 - (ulonglong)(uVar4 & 1));
    }
  }
  else {
    lVar5 = (longlong)dVar3;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar3)) {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = uVar6;
      uVar4 = movmskpd(0,auVar1);
      *param_1 = (longlong)(double)(longlong)(lVar5 + (ulonglong)(uVar4 & 1 ^ 1));
      return param_1;
    }
  }
  *param_1 = (longlong)dVar3;
  return param_1;
}



// FUNCTION 140985020 GetAudioTrackFormat body=343 status=ok
// SIG undefined GetAudioTrackFormat(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FWebMMediaPlayer::GetAudioTrackFormat(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  short *_Src;
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (((param_3 == 0) && (param_2 != -1)) && (param_2 < *(int *)(param_1 + 0x60))) {
    lVar5 = (longlong)param_2;
    uVar1 = FDuplicateDataWriter::GetSerializeContext
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + lVar5 * 8));
    *param_4 = uVar1;
    uVar1 = ULevel::GetWorld(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + lVar5 * 8));
    param_4[1] = uVar1;
    dVar6 = (double)Electra::FHTTPResponseCache::FSynthesizedCacheResponse::GetTimeUntilNameResolved
                              (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + lVar5 * 8));
    param_4[2] = (int)(longlong)dVar6;
    FHdrImageWrapper::GetHeight(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + lVar5 * 8));
    lVar5 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_148);
    _Src = *(short **)(lVar5 + 0x108);
    if (*(short **)(param_4 + 4) != _Src) {
      iVar3 = 0;
      iVar4 = iVar3;
      if ((_Src != (short *)0x0) && (*_Src != 0)) {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (_Src[lVar5] != 0);
        iVar4 = (int)lVar5 + 1;
      }
      param_4[6] = 0;
      if (param_4[7] != iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4 + 4,iVar4);
        iVar3 = param_4[6];
      }
      param_4[6] = iVar3 + iVar4;
      if ((int)param_4[7] < iVar3 + iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4 + 4);
      }
      if (iVar4 != 0) {
        ::_guard_xfg_dispatch_icall_nop(*(void **)(param_4 + 4),_Src,(longlong)iVar4 * 2);
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140985180 GetDuration body=76 status=ok
// SIG undefined GetDuration(void)

undefined8 * FWebMMediaPlayer::GetDuration(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (1 < *(uint *)(param_1 + 0xa0)) {
    lVar1 = FUN_1439e7ac0(*(undefined8 *)(param_1 + 0x78));
    FTimespan::FromMicroseconds(param_2,(double)lVar1 * 0.001);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1409851d0 GetInfo body=62 status=ok
// SIG undefined GetInfo(void)

undefined8 * FWebMMediaPlayer::GetInfo(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"WebMMedia information not implemented yet",0x54);
  return param_2;
}



// FUNCTION 140985230 FUN_140985230 body=123 status=ok
// SIG undefined FUN_140985230(void)

undefined8 * FUN_140985230(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146864310) {
    _Init_thread_header(&DAT_146864310);
    if (DAT_146864310 == -1) {
      FName::FName(&DAT_146864308,L"WebMMedia",1);
      _Init_thread_footer(&DAT_146864310);
    }
  }
  *param_2 = DAT_146864308;
  return param_2;
}



// FUNCTION 1409852b0 FUN_1409852b0 body=320 status=ok
// SIG undefined FUN_1409852b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1409852b0(void)

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
  
  if (DAT_146864328 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_140985670;
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
        return *(undefined8 *)(DAT_146864328 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146864328 = 0;
        return _DAT_00000030;
      }
      DAT_146864328 =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146864328 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146864328 != 0) {
      lVar7 = DAT_146864328;
    }
    DAT_146864328 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146864328 + 0x30);
}



// FUNCTION 1409853f0 FUN_1409853f0 body=320 status=ok
// SIG undefined FUN_1409853f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1409853f0(void)

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
  
  if (DAT_146864318 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_140985680;
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
        return *(undefined8 *)(DAT_146864318 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146864318 = 0;
        return _DAT_00000030;
      }
      DAT_146864318 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146864318 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146864318 != 0) {
      lVar7 = DAT_146864318;
    }
    DAT_146864318 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146864318 + 0x30);
}



// FUNCTION 140985530 FUN_140985530 body=320 status=ok
// SIG undefined FUN_140985530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140985530(void)

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
  
  if (DAT_146864320 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_140985690;
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
        return *(undefined8 *)(DAT_146864320 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146864320 = 0;
        return _DAT_00000030;
      }
      DAT_146864320 =
           TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146864320 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146864320 != 0) {
      lVar7 = DAT_146864320;
    }
    DAT_146864320 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146864320 + 0x30);
}



// FUNCTION 1409856f0 GetStats body=62 status=ok
// SIG undefined GetStats(void)

undefined8 * FWebMMediaPlayer::GetStats(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x30;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"WebMMedia stats information not implemented yet",0x60);
  return param_2;
}



// FUNCTION 140985750 GetSupportedRates body=97 status=ok
// SIG undefined GetSupportedRates(void)

undefined8 * FWebMMediaPlayer::GetSupportedRates(undefined8 param_1,undefined8 *param_2)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  local_18[0] = 1;
  *param_2 = 0;
  param_2[1] = 0;
  local_14 = 0;
  local_10 = 1;
  local_c = 0;
  TRangeSet<float>::Add(param_2,local_18);
  local_18[0] = 1;
  local_14 = 0x3f800000;
  local_10 = 1;
  local_c = 0x3f800000;
  TRangeSet<float>::Add(param_2,local_18);
  return param_2;
}



// FUNCTION 1409857f0 GetTrackDisplayName body=55 status=ok
// SIG undefined GetTrackDisplayName(void)

undefined8 FWebMMediaPlayer::GetTrackDisplayName(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1,local_18);
  FText::FromString(param_2,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140985830 FUN_140985830 body=434 status=ok
// SIG undefined FUN_140985830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140985830(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  short *_Src;
  int iVar4;
  undefined1 auStack_178 [32];
  undefined1 local_158 [256];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  iVar4 = 0;
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Default",0x10);
  if (param_4 == -1) {
    return param_2;
  }
  iVar3 = iVar4;
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x60) <= param_4) {
      return param_2;
    }
    lVar2 = AAIController::GetPerceptionComponent
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)param_4 * 8));
    if (lVar2 == 0) {
      return param_2;
    }
    lVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_158,lVar2);
    _Src = *(short **)(lVar2 + 0x108);
    if ((short *)*param_2 == _Src) goto LAB_1409859af;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (_Src[lVar2] != 0);
      iVar3 = (int)lVar2 + 1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,iVar3);
      iVar4 = *(int *)(param_2 + 1);
    }
    iVar1 = iVar4 + iVar3;
  }
  else {
    if (param_3 != 6) {
      return param_2;
    }
    if (*(int *)(param_1 + 0x50) <= param_4) {
      return param_2;
    }
    lVar2 = AAIController::GetPerceptionComponent
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)param_4 * 8));
    if (lVar2 == 0) {
      return param_2;
    }
    lVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_158,lVar2);
    _Src = *(short **)(lVar2 + 0x108);
    if ((short *)*param_2 == _Src) goto LAB_1409859af;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (_Src[lVar2] != 0);
      iVar3 = (int)lVar2 + 1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,iVar3);
      iVar4 = *(int *)(param_2 + 1);
    }
    iVar1 = iVar3 + iVar4;
  }
  *(int *)(param_2 + 1) = iVar1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
  }
  if (iVar3 != 0) {
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar3 * 2);
  }
LAB_1409859af:
  if (local_58 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409859f0 GetTrackName body=677 status=ok
// SIG undefined GetTrackName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FWebMMediaPlayer::GetTrackName(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  short *psVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  ulonglong local_180;
  longlong local_178 [2];
  undefined4 local_168;
  undefined1 local_158 [256];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  *param_2 = 0;
  param_2[1] = 5;
  local_168 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"None",10);
  if (param_4 != -1) {
    if (param_3 == 0) {
      if (*(int *)(param_1 + 0x60) <= param_4) {
        return param_2;
      }
      lVar6 = (longlong)param_4 * 8;
      lVar4 = FGenericPlatformMemoryStats::GetAvailablePhysical
                        (*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x58)));
      if (lVar4 == 0) {
        FString::PrintfImpl(local_178,L"Track %d",param_4);
        plVar7 = local_178;
        uVar8 = 0;
        bVar3 = false;
        bVar2 = true;
      }
      else {
        uVar5 = FGenericPlatformMemoryStats::GetAvailablePhysical
                          (*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x58)));
        lVar6 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                TStringConversion<FUTF8ToTCHAR_Convert,128>(local_158,uVar5);
        local_188 = 0;
        local_180 = 0;
        psVar1 = *(short **)(lVar6 + 0x108);
        if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (psVar1[lVar6] != 0);
          uVar8 = (int)lVar6 + 1;
          local_180 = (ulonglong)uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
          }
          FGenericPlatformString::Memcpy(local_188,psVar1,(longlong)(int)uVar8 * 2);
        }
        plVar7 = &local_188;
        uVar8 = 3;
        bVar3 = true;
        bVar2 = false;
      }
      FString::operator=(param_2,plVar7);
      if ((bVar2) && (local_178[0] != 0)) {
        FMemory::Free();
      }
      if ((bVar3) && (uVar8 = uVar8 & 0xfffffffd, local_188 != 0)) {
        FMemory::Free();
      }
      uVar8 = uVar8 & 1;
    }
    else {
      if (param_3 != 6) {
        return param_2;
      }
      if (*(int *)(param_1 + 0x50) <= param_4) {
        return param_2;
      }
      lVar6 = (longlong)param_4 * 8;
      lVar4 = FGenericPlatformMemoryStats::GetAvailablePhysical
                        (*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x48)));
      if (lVar4 == 0) {
        FString::PrintfImpl(local_178,L"Track %d",param_4);
        plVar7 = local_178;
        uVar8 = 0;
        bVar3 = false;
        bVar2 = true;
      }
      else {
        uVar5 = FGenericPlatformMemoryStats::GetAvailablePhysical
                          (*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x48)));
        lVar6 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                TStringConversion<FUTF8ToTCHAR_Convert,128>(local_158,uVar5);
        local_188 = 0;
        local_180 = 0;
        psVar1 = *(short **)(lVar6 + 0x108);
        if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (psVar1[lVar6] != 0);
          uVar8 = (int)lVar6 + 1;
          local_180 = (ulonglong)uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
          }
          FGenericPlatformString::Memcpy(local_188,psVar1,(longlong)(int)uVar8 * 2);
        }
        plVar7 = &local_188;
        uVar8 = 0x18;
        bVar3 = true;
        bVar2 = false;
      }
      FString::operator=(param_2,plVar7);
      if ((bVar2) && (local_178[0] != 0)) {
        FMemory::Free();
      }
      if ((bVar3) && (uVar8 = uVar8 & 0xffffffef, local_188 != 0)) {
        FMemory::Free();
      }
      uVar8 = uVar8 & 8;
    }
    if ((uVar8 != 0) && (local_58 != 0)) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140985ca0 GetUrl body=33 status=ok
// SIG undefined GetUrl(void)

undefined8 FWebMMediaPlayer::GetUrl(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0xa8);
  return param_2;
}



// FUNCTION 140985cd0 GetVideoTrackFormat body=369 status=ok
// SIG undefined GetVideoTrackFormat(void)

undefined8
FWebMMediaPlayer::GetVideoTrackFormat(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  longlong *plVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong local_28;
  int local_20;
  int local_1c;
  
  if (((param_3 == 0) && (param_2 != -1)) && (param_2 < *(int *)(param_1 + 0x50))) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar9 = (longlong)param_2;
    uVar3 = ULevel::GetWorld(*(undefined8 *)(lVar7 + lVar9 * 8));
    uVar4 = FUN_1439e8440(*(undefined8 *)(lVar7 + lVar9 * 8));
    *param_4 = uVar4;
    param_4[1] = uVar3;
    dVar2 = (double)FUN_1439e7ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar9 * 8));
    param_4[2] = (float)dVar2;
    pcVar5 = (char *)FHdrImageWrapper::GetHeight
                               (*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar9 * 8));
    lVar7 = 0;
    local_28 = 0;
    iVar8 = 0;
    local_1c = 0;
    iVar10 = iVar8;
    if ((pcVar5 != (char *)0x0) && (iVar10 = 0, *pcVar5 != '\0')) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pcVar5[lVar7] != '\0');
      iVar6 = (int)lVar7 + 1;
      local_20 = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      iVar10 = local_1c;
      iVar8 = local_20;
      lVar7 = local_28;
      FGenericPlatformString::Convert<char,wchar_t>(local_28,iVar6,pcVar5,iVar6,0x3f);
    }
    plVar1 = (longlong *)(param_4 + 8);
    if (plVar1 == &local_28) {
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = lVar7;
      param_4[10] = iVar8;
      param_4[0xb] = iVar10;
    }
    *(undefined1 *)(param_4 + 3) = 1;
    param_4[4] = param_4[2];
    *(undefined1 *)(param_4 + 5) = 0;
    param_4[6] = param_4[2];
    return 1;
  }
  return 0;
}



// FUNCTION 140985e50 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 140985e80 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000700;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 140985ee0 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 2;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 140985f40 Initialize body=282 status=ok
// SIG undefined Initialize(void)

undefined8
FWebMAudioDecoder::Initialize
          (longlong param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res8 [2];
  
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    opus_decoder_destroy(*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar6 = 0;
  do {
    lVar7 = lVar6 + 1;
    if (param_2[lVar6] != (&DAT_144175f58)[lVar6]) {
      iVar4 = ::_guard_xfg_dispatch_icall_nop(param_2,"A_VORBIS");
      if (iVar4 != 0) {
        return 0;
      }
      uVar3 = 1;
      goto LAB_140985fb5;
    }
    lVar6 = lVar7;
  } while (lVar7 != 7);
  uVar3 = 0;
LAB_140985fb5:
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  if (*(int *)(param_1 + 0x38) == 0) {
    local_res8[0] = 0;
    uVar5 = opus_decoder_create(param_3,param_4,local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    *(int *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x40) * 0x78) / 1000;
  }
  else {
    cVar2 = InitializeVorbis(param_1,param_5,param_6);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x44) * 2;
  if (iVar4 < iVar1) {
    *(int *)(param_1 + 0x20) = iVar1;
    if (*(int *)(param_1 + 0x24) < iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
      return 1;
    }
  }
  else if ((iVar1 < iVar4) && (iVar1 != iVar4)) {
    *(int *)(param_1 + 0x20) = iVar1;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink();
  }
  return 1;
}



// FUNCTION 140986060 FUN_140986060 body=291 status=ok
// SIG undefined FUN_140986060(void)

undefined1 FUN_140986060(LPCRITICAL_SECTION param_1,char *param_2,undefined1 param_3)

{
  LPCRITICAL_SECTION p_Var1;
  undefined1 uVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  LONG LVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  LONG LVar8;
  PRTL_CRITICAL_SECTION_DEBUG local_28;
  LONG local_20;
  LONG local_1c;
  
  BVar3 = TryEnterCriticalSection(param_1);
  if (BVar3 == 0) {
    EnterCriticalSection(param_1);
  }
  FUN_140982180(param_1);
  p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_28 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  LVar6 = 0;
  local_1c = 0;
  LVar8 = LVar6;
  if ((param_2 != (char *)0x0) && (LVar8 = 0, *param_2 != '\0')) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != '\0');
    iVar4 = (int)lVar5 + 1;
    local_20 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    LVar8 = local_1c;
    LVar6 = local_20;
    p_Var7 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>(local_28,iVar4,param_2,iVar4,0x3f);
  }
  p_Var1 = param_1 + 1;
  if (p_Var1 == (LPCRITICAL_SECTION)&local_28) {
    if (p_Var7 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FMemory::Free(p_Var7);
    }
  }
  else {
    if (p_Var1->DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FMemory::Free();
    }
    p_Var1->DebugInfo = p_Var7;
    param_1[1].LockCount = LVar6;
    param_1[1].RecursionCount = LVar8;
  }
  *(undefined1 *)((longlong)&param_1[4].LockCount + 2) = param_3;
  uVar2 = FUN_140986f30(param_1);
  LeaveCriticalSection(param_1);
  return uVar2;
}



// FUNCTION 140986190 FUN_140986190 body=39 status=ok
// SIG undefined FUN_140986190(void)

void FUN_140986190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1441774f0;
    return;
  }
  return;
}



// FUNCTION 1409861c0 InitializeVorbis body=537 status=ok
// SIG undefined InitializeVorbis(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FWebMAudioDecoder::InitializeVorbis(longlong param_1,char *param_2,ulonglong param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  void *_Dst;
  void *pvVar9;
  uint uVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8 [4];
  char *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  char *local_90;
  undefined4 local_88;
  char *local_68;
  int local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar8 = local_38;
  if (((2 < param_3) && (param_2 != (char *)0x0)) && (*param_2 == '\x02')) {
    uVar12 = 1;
    pvVar11 = (void *)0x0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_d8[2] = 0;
    pvVar9 = pvVar11;
    do {
      uVar8 = 0;
      if (param_3 <= uVar12) goto LAB_1409863a6;
      bVar2 = param_2[uVar12];
      uVar12 = uVar12 + 1;
      local_d8[(longlong)pvVar9] = local_d8[(longlong)pvVar9] + (ulonglong)bVar2;
      lVar5 = local_d8[1];
      lVar4 = local_d8[0];
    } while ((bVar2 == 0xff) || (pvVar9 = (void *)((longlong)pvVar9 + 1), (longlong)pvVar9 < 2));
    lVar7 = (param_3 - local_d8[1]) - local_d8[0];
    lVar1 = local_d8[1] + local_d8[0];
    uVar8 = lVar7 + lVar1;
    if (uVar8 == param_3) {
      ::_guard_xfg_dispatch_icall_nop(&local_b8,0,0x78);
      local_b8 = param_2 + uVar12;
      local_b0 = (undefined4)lVar4;
      local_ac = 1;
      local_90 = param_2 + lVar4 + uVar12;
      local_88 = (undefined4)lVar5;
      local_68 = param_2 + uVar12 + lVar1;
      local_60 = (int)lVar7 - (int)uVar12;
      _Dst = (void *)operator_new(0x138);
      pvVar9 = pvVar11;
      if (_Dst != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x138);
        pvVar9 = _Dst;
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(void **)(param_1 + 8) = pvVar9;
      FMemory::operator_delete(uVar3,0x138);
      ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8));
      ::_guard_xfg_dispatch_icall_nop(local_d8);
      do {
        iVar6 = ::_guard_xfg_dispatch_icall_nop
                          (*(undefined8 *)(param_1 + 8),local_d8,
                           &local_b8 + (longlong)(int)pvVar11 * 5);
        if (iVar6 != 0) {
          uVar8 = ::_guard_xfg_dispatch_icall_nop(local_d8);
          goto LAB_1409863a6;
        }
        uVar10 = (int)pvVar11 + 1;
        pvVar11 = (void *)(ulonglong)uVar10;
      } while ((int)uVar10 < 3);
      ::_guard_xfg_dispatch_icall_nop(local_d8);
      uVar8 = ::_guard_xfg_dispatch_icall_nop(*(longlong *)(param_1 + 8) + 0x28);
      if ((int)uVar8 == 0) {
        lVar4 = *(longlong *)(param_1 + 8);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x44);
        if (((*(uint *)(lVar4 + 4) == *(uint *)(param_1 + 0x44)) &&
            (uVar8 = (ulonglong)*(uint *)(param_1 + 0x40),
            *(uint *)(lVar4 + 8) == *(uint *)(param_1 + 0x40))) &&
           (uVar8 = ::_guard_xfg_dispatch_icall_nop(lVar4 + 0x28,lVar4 + 0xa8), (int)uVar8 == 0)) {
          lVar4 = 0x1000 / (longlong)*(int *)(param_1 + 0x44);
          *(int *)(param_1 + 0x3c) = (int)lVar4;
          return CONCAT71((uint7)((ulonglong)lVar4 >> 8) & 0xffffff,1);
        }
      }
    }
  }
LAB_1409863a6:
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 1409863f0 Length body=133 status=ok
// SIG undefined Length(void)

undefined8 FMkvFileReader::Length(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),uVar1);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = uVar2;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = uVar2;
  }
  return 0;
}



// FUNCTION 140986480 MkvRead body=619 status=ok
// SIG undefined MkvRead(void)

undefined8 FWebMMediaPlayer::MkvRead(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *_Str1;
  longlong lVar7;
  int iVar8;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [64];
  
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  local_78 = 0;
  uVar3 = FUN_1439e5570(local_68);
  lVar4 = FUN_1439ea1b0(uVar3,uVar5,&local_78);
  FUN_1439e5aa0(local_68);
  if ((lVar4 == 0) &&
     (lVar4 = FUN_1439e6c00(*(undefined8 *)(param_1 + 0x88),local_78,&local_70), lVar4 == 0)) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = local_70;
    if (lVar4 != 0) {
      FUN_1439e5b10(lVar4);
      FMemory::operator_delete(lVar4,0xb8);
    }
    iVar1 = FUN_1439e8c40(*(undefined8 *)(param_1 + 0x90));
    if (-1 < iVar1) {
      uVar5 = FFileTable::GetUsedSize(*(undefined8 *)(param_1 + 0x90));
      iVar1 = FUN_1439e8330(uVar5);
      if (iVar1 != 0) {
        iVar8 = 0;
        if (0 < iVar1) {
LAB_140986590:
          uVar3 = FUN_1439e82f0(uVar5);
          iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(uVar3);
          if (iVar2 == 1) {
            lVar6 = FHdrImageWrapper::GetWidth();
            lVar4 = 0;
            do {
              lVar7 = lVar4 + 1;
              if (*(char *)(lVar6 + lVar4) != (&DAT_1441759c0)[lVar4]) {
                lVar6 = FHdrImageWrapper::GetWidth(uVar3);
                lVar4 = 0;
                goto LAB_1409865e0;
              }
              lVar4 = lVar7;
            } while (lVar7 != 6);
            goto LAB_1409865f7;
          }
          iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(uVar3);
          if (iVar2 == 2) {
            lVar6 = FHdrImageWrapper::GetWidth();
            lVar4 = 0;
            do {
              lVar7 = lVar4 + 1;
              if (*(char *)(lVar6 + lVar4) != (&DAT_144175a9c)[lVar4]) {
                _Str1 = (char *)FHdrImageWrapper::GetWidth(uVar3);
                iVar2 = ::_guard_xfg_dispatch_icall_nop(_Str1,"A_VORBIS");
                if (iVar2 != 0) goto LAB_140986699;
                break;
              }
              lVar4 = lVar7;
            } while (lVar7 != 7);
            iVar2 = *(int *)(param_1 + 0x80);
            *(int *)(param_1 + 0x80) = iVar2 + 1;
            if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x78,iVar2);
            }
            lVar4 = *(longlong *)(param_1 + 0x78);
            goto LAB_140986687;
          }
          goto LAB_140986699;
        }
LAB_1409866bd:
        if ((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x80) != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
  while (lVar4 = lVar7, lVar7 != 6) {
LAB_1409865e0:
    lVar7 = lVar4 + 1;
    if (*(char *)(lVar6 + lVar4) != (&DAT_1441759c8)[lVar4]) goto LAB_140986699;
  }
LAB_1409865f7:
  iVar2 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar2 + 1;
  if (*(int *)(param_1 + 0x74) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x68,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
LAB_140986687:
  *(undefined8 *)(lVar4 + (longlong)iVar2 * 8) = uVar3;
LAB_140986699:
  iVar8 = iVar8 + 1;
  if (iVar1 <= iVar8) goto LAB_1409866bd;
  goto LAB_140986590;
}



// FUNCTION 1409866f0 Open body=92 status=ok
// SIG undefined Open(void)

bool FMkvFileReader::Open(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = FPlatformFileManager::Get();
  plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
  lVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,param_2,0);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar4;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    lVar4 = *(longlong *)(param_1 + 8);
  }
  return lVar4 != 0;
}



// FUNCTION 140986750 FUN_140986750 body=1925 status=ok
// SIG undefined FUN_140986750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140986750(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  void *pvVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  PRTL_CRITICAL_SECTION_DEBUG p_Var10;
  PRTL_CRITICAL_SECTION_DEBUG p_Var11;
  PRTL_CRITICAL_SECTION_DEBUG p_Var12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined2 *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  double dVar25;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined2 *local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [4];
  
  uVar5 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x17) == 1) {
LAB_140986eb5:
    return uVar5 & 0xffffffffffffff00;
  }
  local_b8 = param_1;
  local_58[2] = uVar5;
  uVar5 = (**(code **)*param_1)();
  iVar24 = *(int *)(param_2 + 1);
  if (iVar24 < 2) goto LAB_140986eb5;
  puVar6 = param_1 + 0x15;
  puVar7 = (undefined8 *)0x0;
  iVar23 = 0;
  if (puVar6 != param_2) {
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 0x16) = iVar24;
    if ((iVar24 == 0) && (*(int *)((longlong)param_1 + 0xb4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar24);
      _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar2,(longlong)iVar24 * 2);
    }
  }
  uVar5 = FString::StartsWith(param_2,L"file://",1);
  if ((char)uVar5 == '\0') goto LAB_140986eb5;
  if (*(int *)(param_2 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
    iVar24 = iVar23;
  }
  else {
    puVar17 = (undefined2 *)*param_2;
    iVar24 = *(int *)(param_2 + 1) + -1;
  }
  iVar16 = iVar24 + -7;
  if ((-1 < iVar16) && (iVar23 = iVar24, iVar16 < iVar24)) {
    iVar23 = iVar16;
  }
  local_c0 = 0;
  psVar1 = puVar17 + ((longlong)iVar24 - (longlong)iVar23);
  local_c8 = (undefined2 *)0x0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar19 = -1;
    do {
      lVar19 = lVar19 + 1;
    } while (psVar1[lVar19] != 0);
    uVar18 = (int)lVar19 + 1;
    local_c0 = (ulonglong)uVar18;
    if (0 < (int)uVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    }
    FGenericPlatformString::Memcpy(local_c8,psVar1,(longlong)(int)uVar18 * 2);
  }
  FPaths::NormalizeFilename(&local_c8);
  puVar6 = (undefined8 *)operator_new(0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_Read_144177538;
    puVar6[1] = 0;
    puVar7 = puVar6;
  }
  plVar20 = (longlong *)param_1[0x11];
  param_1[0x11] = puVar7;
  if (plVar20 != (longlong *)0x0) {
    (**(code **)(*plVar20 + 0x10))(plVar20,1);
    puVar7 = (undefined8 *)param_1[0x11];
  }
  puVar17 = &DAT_143f3eda8;
  if ((int)local_c0 != 0) {
    puVar17 = local_c8;
  }
  cVar3 = FMkvFileReader::Open(puVar7,puVar17);
  if (cVar3 != '\0') {
    cVar3 = FWebMMediaPlayer::MkvRead(param_1);
    if (cVar3 != '\0') {
      local_98 = 0;
      local_90 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      FGenericPlatformString::Memcpy(local_98,L"2KLOGO",0xe);
      local_88 = 0;
      local_80 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      FGenericPlatformString::Memcpy(local_88,L"GBXLOGO",0x10);
      local_78 = 0;
      local_70 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      FGenericPlatformString::Memcpy(local_78,L"AMDLOGO",0x10);
      local_68 = 0;
      local_60 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"LOADING",0x10);
      local_58[0] = 0;
      local_58[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      FGenericPlatformString::Memcpy(local_58[0],L"MARCUS",0xe);
      local_a8 = (longlong *)0x0;
      local_a0 = 5;
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_a8,5,0);
      local_b0 = local_a8;
      lVar19 = (longlong)local_a8 - (longlong)&local_98;
      iVar24 = 5;
      puVar6 = &local_98;
      do {
        *(undefined8 *)(lVar19 + (longlong)puVar6) = 0;
        iVar23 = *(int *)(puVar6 + 1);
        pvVar2 = (void *)*puVar6;
        *(int *)(lVar19 + 8 + (longlong)puVar6) = iVar23;
        if (iVar23 == 0) {
          *(undefined4 *)(lVar19 + 0xc + (longlong)puVar6) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    ((undefined8 *)(lVar19 + (longlong)puVar6),iVar23,0);
          _guard_xfg_dispatch_icall_nop
                    (*(void **)(lVar19 + (longlong)puVar6),pvVar2,(longlong)iVar23 * 2);
        }
        puVar7 = local_b8;
        puVar6 = puVar6 + 2;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      plVar20 = local_58 + 2;
      lVar19 = 5;
      do {
        plVar21 = plVar20 + -2;
        plVar20 = plVar20 + -2;
        lVar19 = lVar19 + -1;
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        uVar18 = local_a0;
      } while (lVar19 != 0);
      uVar22 = (ulonglong)(int)local_a0;
      *(undefined1 *)((longlong)puVar7 + 0xd2) = 1;
      plVar21 = local_b0 + uVar22 * 2;
      for (plVar20 = local_b0; plVar20 != plVar21; plVar20 = plVar20 + 2) {
        if ((int)plVar20[1] == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*plVar20;
        }
        uVar5 = (ulonglong)local_d8 >> 0x20;
        local_d8 = CONCAT44((int)uVar5,0xffffffff);
        iVar24 = FUN_141592950(&local_c8,puVar17,1);
        if (iVar24 != -1) {
          *(undefined1 *)((longlong)puVar7 + 0xd2) = 0;
          break;
        }
      }
      lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0xb0);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        lpCriticalSection = (LPCRITICAL_SECTION)0x0;
      }
      else {
        InitializeCriticalSection(lpCriticalSection);
        SetCriticalSectionSpinCount(lpCriticalSection,4000);
        p_Var12 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        lpCriticalSection[1].LockCount = 0;
        lpCriticalSection[1].RecursionCount = 0;
        p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x10);
        if (p_Var8 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x38);
          p_Var10 = p_Var12;
          if (p_Var9 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)p_Var9);
            SetCriticalSectionSpinCount((LPCRITICAL_SECTION)p_Var9,4000);
            p_Var9->Flags = 0;
            p_Var9->CreatorBackTraceIndexHigh = 0;
            p_Var9->SpareWORD = 0;
            p_Var9[1].Type = 0;
            p_Var9[1].CreatorBackTraceIndex = 0;
            *(undefined4 *)&p_Var9[1].field_0x4 = 0;
            p_Var10 = p_Var9;
          }
          p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x18);
          if (p_Var9 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            *(LONG *)&p_Var9->CriticalSection = 1;
            *(undefined ***)&p_Var9->Type = &PTR_LAB_1441778d0;
            *(LONG *)((longlong)&p_Var9->CriticalSection + 4) = 1;
            (p_Var9->ProcessLocksList).Flink = (_LIST_ENTRY *)p_Var10;
            p_Var12 = p_Var9;
          }
          *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var8->Type = p_Var10;
          p_Var8->CriticalSection = (_RTL_CRITICAL_SECTION *)p_Var12;
          SharedPointerInternals::EnableSharedFromThis(p_Var8,p_Var10,p_Var10);
          p_Var12 = p_Var8;
        }
        lpCriticalSection[2].SpinCount = (ULONG_PTR)p_Var12;
        lpCriticalSection[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        lpCriticalSection[3].LockCount = 0;
        lpCriticalSection[3].RecursionCount = 0;
        lpCriticalSection[3].OwningThread = (HANDLE)0x0;
        *(undefined4 *)&lpCriticalSection[3].LockSemaphore = 0;
        lpCriticalSection[3].SpinCount = 0;
        lpCriticalSection[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)(puVar7 + 1);
        *(undefined2 *)&lpCriticalSection[4].LockCount = 0;
      }
      p_Var12 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      uVar14 = puVar7[0xb];
      puVar7[0xb] = lpCriticalSection;
      FUN_1409817f0(puVar7 + 0xb,uVar14);
      p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x48);
      if (p_Var8 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        p_Var10 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x10);
        if (p_Var10 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Var11 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x38);
          p_Var9 = p_Var12;
          if (p_Var11 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)p_Var11);
            SetCriticalSectionSpinCount((LPCRITICAL_SECTION)p_Var11,4000);
            p_Var11->Flags = 0;
            p_Var11->CreatorBackTraceIndexHigh = 0;
            p_Var11->SpareWORD = 0;
            p_Var11[1].Type = 0;
            p_Var11[1].CreatorBackTraceIndex = 0;
            *(undefined4 *)&p_Var11[1].field_0x4 = 0;
            p_Var9 = p_Var11;
          }
          p_Var11 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x18);
          if (p_Var11 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            *(LONG *)&p_Var11->CriticalSection = 1;
            *(undefined ***)&p_Var11->Type = &PTR_LAB_1441778c0;
            *(LONG *)((longlong)&p_Var11->CriticalSection + 4) = 1;
            (p_Var11->ProcessLocksList).Flink = (_LIST_ENTRY *)p_Var9;
            p_Var12 = p_Var11;
          }
          *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var10->Type = p_Var9;
          p_Var10->CriticalSection = (_RTL_CRITICAL_SECTION *)p_Var12;
          SharedPointerInternals::EnableSharedFromThis(p_Var10,p_Var9,p_Var9);
          p_Var12 = p_Var10;
        }
        *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var8->Type = p_Var12;
        p_Var8->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
        (p_Var8->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
        (p_Var8->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
        *(ULONG_PTR *)&p_Var8->EntryCount = 0;
        *(undefined8 **)&p_Var8->Flags = puVar7 + 1;
        p_Var8[1].Type = 0;
        p_Var8[1].CreatorBackTraceIndex = 0;
        *(undefined4 *)&p_Var8[1].field_0x4 = 0;
        p_Var12 = p_Var8;
      }
      uVar14 = puVar7[0xc];
      puVar7[0xc] = p_Var12;
      TDefaultDelete<FWebMAudioDecoder>::operator()(puVar7 + 0xc,uVar14);
      if (*(int *)((longlong)puVar7 + 0xbc) != -1) {
        uVar14 = *(undefined8 *)(puVar7[0xf] + (longlong)*(int *)((longlong)puVar7 + 0xbc) * 8);
        uVar13 = FUN_1439e7ab0(uVar14,&local_b8);
        uVar15 = puVar7[0xc];
        uVar4 = ULevel::GetWorld(uVar14);
        dVar25 = (double)Electra::FHTTPResponseCache::FSynthesizedCacheResponse::
                         GetTimeUntilNameResolved(uVar14);
        uVar14 = FHdrImageWrapper::GetWidth(uVar14);
        local_d0 = local_b8;
        local_d8 = uVar13;
        FWebMAudioDecoder::Initialize(uVar15,uVar14,(int)dVar25,uVar4);
      }
      if (*(int *)(puVar7 + 0x18) != -1) {
        uVar14 = puVar7[0xb];
        uVar15 = FHdrImageWrapper::GetWidth
                           (*(undefined8 *)(puVar7[0xd] + (longlong)*(int *)(puVar7 + 0x18) * 8));
        FUN_140986060(uVar14,uVar15,*(undefined1 *)((longlong)puVar7 + 0xd2));
      }
      *(undefined4 *)(puVar7 + 0x17) = 5;
      *(undefined1 *)(puVar7 + 0x1a) = 0;
      iVar24 = *(int *)(puVar7 + 7);
      *(int *)(puVar7 + 7) = iVar24 + 1;
      if (*(int *)((longlong)puVar7 + 0x3c) < iVar24 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar7 + 6,iVar24);
      }
      *(undefined4 *)(puVar7[6] + (longlong)iVar24 * 4) = 9;
      iVar24 = *(int *)(puVar7 + 7);
      *(int *)(puVar7 + 7) = iVar24 + 1;
      if (*(int *)((longlong)puVar7 + 0x3c) < iVar24 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar7 + 6,iVar24);
      }
      plVar21 = local_b0;
      uVar5 = 1;
      *(undefined4 *)(puVar7[6] + (longlong)iVar24 * 4) = 3;
      plVar20 = local_b0;
      while (uVar18 != 0) {
        if (*plVar20 != 0) {
          FMemory::Free();
        }
        plVar20 = plVar20 + 2;
        uVar18 = (int)uVar22 - 1;
        uVar22 = (ulonglong)uVar18;
      }
      if (plVar21 != (longlong *)0x0) {
        FMemory::Free(plVar21);
      }
      goto LAB_14098692d;
    }
    plVar20 = (longlong *)param_1[0x11];
    param_1[0x11] = 0;
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 0x10))(plVar20,1);
    }
  }
  uVar5 = 0;
LAB_14098692d:
  if (local_c8 == (undefined2 *)0x0) {
    return uVar5;
  }
  FMemory::Free();
  return uVar5;
}



// FUNCTION 140986ee0 Read body=68 status=ok
// SIG undefined Read(void)

undefined8 FMkvFileReader::Read(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),param_4,(longlong)param_3);
  return 0;
}



// FUNCTION 140986f30 FUN_140986f30 body=382 status=ok
// SIG undefined FUN_140986f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140986f30(LPCRITICAL_SECTION param_1)

{
  ushort uVar1;
  wint_t wVar2;
  BOOL BVar3;
  int iVar4;
  undefined8 uVar5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  char *pcVar7;
  PRTL_CRITICAL_SECTION_DEBUG p_Var8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  BVar3 = TryEnterCriticalSection(param_1);
  if (BVar3 == 0) {
    EnterCriticalSection(param_1);
  }
  if (*(char *)((longlong)&param_1[4].LockCount + 1) != '\0') {
    FUN_143989b40();
    *(undefined1 *)((longlong)&param_1[4].LockCount + 1) = 0;
  }
  p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)&DAT_143f3eda8;
  LOCK();
  *(undefined4 *)&param_1[3].LockSemaphore = 0;
  UNLOCK();
  local_30 = 1;
  local_28 = 0;
  if (param_1[1].LockCount == 0) {
    p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)&DAT_143f3eda8;
  }
  else {
    p_Var8 = param_1[1].DebugInfo;
  }
  pcVar7 = "V_VP8";
  do {
    uVar1 = p_Var8->Type;
    if ((uVar1 == 0) && (*pcVar7 == '\0')) goto LAB_140986ff5;
    if ((uint)uVar1 != (int)*pcVar7) {
      wVar2 = towlower(uVar1);
      iVar4 = tolower((int)*pcVar7);
      if ((uint)wVar2 != (int)(char)iVar4) goto LAB_140986ff1;
    }
    p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var8->CreatorBackTraceIndex;
    pcVar7 = pcVar7 + 1;
  } while( true );
LAB_14098704d:
  if ((uint)wVar2 != (int)(char)iVar4) {
    uVar5 = 0;
    goto LAB_14098707f;
  }
LAB_140987051:
  uVar5 = FUN_14398c320();
  goto LAB_140987056;
LAB_140986ff1:
  if ((uint)wVar2 != (int)(char)iVar4) {
    if (param_1[1].LockCount != 0) {
      p_Var6 = param_1[1].DebugInfo;
    }
    pcVar7 = "V_VP9";
    do {
      uVar1 = p_Var6->Type;
      if ((uVar1 == 0) && (*pcVar7 == '\0')) goto LAB_140987051;
      if ((uint)uVar1 != (int)*pcVar7) {
        wVar2 = towlower(uVar1);
        iVar4 = tolower((int)*pcVar7);
        if ((uint)wVar2 != (int)(char)iVar4) goto LAB_14098704d;
      }
      p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var6->CreatorBackTraceIndex;
      pcVar7 = pcVar7 + 1;
    } while( true );
  }
LAB_140986ff5:
  uVar5 = FUN_14398abb0();
LAB_140987056:
  local_48 = 10;
  FUN_143989c30(&param_1[1].OwningThread,uVar5,&local_30,0);
  *(undefined1 *)((longlong)&param_1[4].LockCount + 1) = 1;
  uVar5 = 1;
LAB_14098707f:
  LeaveCriticalSection(param_1);
  return uVar5;
}



// FUNCTION 1409870b0 FUN_1409870b0 body=376 status=ok
// SIG undefined FUN_1409870b0(void)

void FUN_1409870b0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 * 0x28;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x28;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 140987230 FUN_140987230 body=398 status=ok
// SIG undefined FUN_140987230(void)

undefined8 FUN_140987230(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_res8;
  
  if (((*(uint *)(param_1 + 0xa0) & 0xfffffffa) == 0) && (*(uint *)(param_1 + 0xa0) != 5)) {
    return 0;
  }
  lVar2 = 0;
  dVar6 = (double)*param_2 * 100.0;
  if ((9.223372036854776e+18 <= dVar6) &&
     (dVar6 = dVar6 - 9.223372036854776e+18, dVar6 < 9.223372036854776e+18)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = FUN_1439e7940(*(undefined8 *)(param_1 + 0x78),(longlong)dVar6 + lVar2);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
  if (*(int *)(param_1 + 0xa8) != -1) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = FHdrImageWrapper::GetWidth
                      (*(undefined8 *)
                        (*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0xa8) * 8));
    FUN_140986060(uVar3,uVar4,*(undefined1 *)(param_1 + 0xba));
  }
  if (*(int *)(param_1 + 0xa4) != -1) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0xa4) * 8);
    uVar5 = FUN_1439e7ab0(uVar3,&local_res8);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = ULevel::GetWorld(uVar3);
    dVar6 = (double)Electra::FHTTPResponseCache::FSynthesizedCacheResponse::GetTimeUntilNameResolved
                              (uVar3);
    uVar3 = FHdrImageWrapper::GetWidth(uVar3);
    FWebMAudioDecoder::Initialize(uVar4,uVar3,(int)dVar6,uVar1,uVar5,local_res8);
  }
  *(longlong *)(param_1 + 0xb0) = *param_2;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  (**(code **)**(undefined8 **)(param_1 + 0x28))(*(undefined8 **)(param_1 + 0x28),8);
  return 1;
}



// FUNCTION 1409873c0 FUN_1409873c0 body=336 status=ok
// SIG undefined FUN_1409873c0(void)

undefined8 FUN_1409873c0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_res20;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x9c);
    *(int *)(param_1 + 0x9c) = param_3;
  }
  else {
    if (param_2 != 6) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = param_3;
  }
  if (iVar1 != param_3) {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 3) {
      (**(code **)(*(longlong *)(param_1 + -8) + 0x40))(param_1 + -8,param_1 + 0xa8);
      iVar1 = *(int *)(param_1 + 0x98);
    }
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x9c) != -1) {
        uVar4 = *(undefined8 *)
                 (*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x9c) * 8);
        uVar3 = FUN_1439e7ab0(uVar4,&local_res20);
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        uVar2 = ULevel::GetWorld(uVar4);
        dVar6 = (double)Electra::FHTTPResponseCache::FSynthesizedCacheResponse::
                        GetTimeUntilNameResolved(uVar4);
        uVar4 = FHdrImageWrapper::GetWidth(uVar4);
        FWebMAudioDecoder::Initialize(uVar5,uVar4,(int)dVar6,uVar2,uVar3,local_res20);
      }
      if (*(int *)(param_1 + 0xa0) != -1) {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        uVar5 = FHdrImageWrapper::GetWidth
                          (*(undefined8 *)
                            (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0xa0) * 8)
                          );
        FUN_140986060(uVar4,uVar5,*(undefined1 *)(param_1 + 0xb2));
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 140987520 SetRate body=164 status=ok
// SIG undefined SetRate(void)

ulonglong FWebMMediaPlayer::SetRate(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  
  if (param_2 == 0.0) {
    *(undefined4 *)(param_1 + 0xa0) = 2;
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x18),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 7;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  if (param_2 == 1.0) {
    *(undefined4 *)(param_1 + 0xa0) = 3;
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x18),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 6;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409875e0 ShutdownPoolable body=34 status=ok
// SIG undefined ShutdownPoolable(void)

void FWebMMediaTextureSample::ShutdownPoolable(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 140987610 FUN_140987610 body=1825 status=ok
// SIG undefined FUN_140987610(void)

void FUN_140987610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 uVar21;
  double dVar22;
  undefined4 uVar23;
  longlong local_res20;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  
  if (*(int *)(param_1 + 0xb8) == 3) {
    param_2 = *(longlong *)(param_1 + 200) + param_2;
    *(longlong *)(param_1 + 200) = param_2;
    if (*(char *)(param_1 + 0xd0) == '\0') {
      FTimespan::FromSeconds(&local_res20,0);
      lVar17 = local_res20;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      lVar14 = param_2;
      if (param_2 < param_2 - (longlong)((double)local_res20 * 0.5)) {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
        lVar14 = *(longlong *)(param_1 + 200);
      }
      if (param_2 < lVar14 + lVar17) {
LAB_140987810:
        do {
          iVar9 = 0;
          plVar19 = (longlong *)(param_1 + 0xa0);
          if (*(longlong *)(param_1 + 0x98) == 0) {
            uVar13 = FUN_1439e7cf0(*(undefined8 *)(param_1 + 0x90));
            *(undefined8 *)(param_1 + 0x98) = uVar13;
            *plVar19 = 0;
LAB_14098783b:
            iVar10 = FUN_1439e7c80(*(undefined8 *)(param_1 + 0x98),plVar19);
          }
          else {
            if (((longlong *)*plVar19 == (longlong *)0x0) ||
               (iVar10 = (**(code **)(*(longlong *)*plVar19 + 0x10))(), iVar10 == 0))
            goto LAB_14098783b;
            iVar10 = FUN_1439e7f00(*(undefined8 *)(param_1 + 0x98),*plVar19,plVar19);
          }
          if (iVar10 != 0) break;
          if (((longlong *)*plVar19 != (longlong *)0x0) &&
             (iVar10 = (**(code **)(*(longlong *)*plVar19 + 0x10))(), iVar10 != 0)) {
            if (*(char *)(param_1 + 0xd0) != '\0') goto LAB_140987894;
            uVar13 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))();
            lVar14 = FUN_1439e8220(uVar13,*(undefined8 *)(param_1 + 0x98));
            uVar23 = 0;
            dVar5 = (double)lVar14 * 0.01 + 0.5;
            lVar20 = (longlong)dVar5;
            uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
            if (0.0 <= dVar5) {
              if ((lVar20 != -0x8000000000000000) &&
                 (uVar23 = SUB84((double)lVar20,0), (double)lVar20 != dVar5)) {
                auVar4._8_4_ = SUB84(dVar5,0);
                auVar4._0_8_ = dVar5;
                auVar4._12_4_ = uVar21;
                uVar11 = movmskpd((int)lVar14,auVar4);
                uVar16 = -(ulonglong)(uVar11 & 1);
                goto LAB_1409879ed;
              }
            }
            else if ((lVar20 != -0x8000000000000000) &&
                    (uVar23 = SUB84((double)lVar20,0), (double)lVar20 != dVar5)) {
              auVar3._8_4_ = SUB84(dVar5,0);
              auVar3._0_8_ = dVar5;
              auVar3._12_4_ = uVar21;
              uVar11 = movmskpd((int)lVar14,auVar3);
              uVar16 = (ulonglong)(uVar11 & 1 ^ 1);
LAB_1409879ed:
              dVar5 = (double)(longlong)(lVar20 + uVar16);
            }
            lVar14 = (longlong)dVar5;
            uVar13 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))
                               (*(longlong **)(param_1 + 0xa0),uVar23);
            iVar10 = FWmfMediaTextureSample::GetFormat(uVar13);
            if (0 < iVar10) {
              do {
                plVar19 = (longlong *)0x0;
                uVar13 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))();
                lVar17 = FUN_1439e7ed0(uVar13,iVar9);
                plVar18 = (longlong *)operator_new(0x30);
                if (plVar18 != (longlong *)0x0) {
                  *(undefined4 *)(plVar18 + 1) = 1;
                  *plVar18 = (longlong)&PTR_FUN_143f4cf38;
                  *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
                  plVar18[4] = 0;
                  plVar18[5] = 0;
                  plVar18[2] = 0;
                  plVar18[3] = 0;
                  plVar19 = plVar18;
                }
                local_98 = plVar19 + 2;
                local_90 = plVar19;
                SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
                plVar18 = local_90;
                plVar19 = local_98;
                if (local_90 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_90 + 1) = (int)local_90[1] + 1;
                  UNLOCK();
                  if (local_90 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_90 + 1;
                    lVar20 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar20 == 1) {
                      (**(code **)*local_90)(local_90);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar18 + 0xc);
                      iVar10 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar10 == 1) {
                        (**(code **)(*plVar18 + 8))(plVar18,1);
                      }
                    }
                  }
                }
                plVar19[2] = lVar14;
                iVar10 = *(int *)(lVar17 + 8);
                iVar12 = (int)plVar19[1];
                if (iVar12 < iVar10) {
                  *(int *)(plVar19 + 1) = iVar10;
                  if (*(int *)((longlong)plVar19 + 0xc) < iVar10) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar19,iVar12);
                  }
                }
                else if ((iVar10 < iVar12) && (iVar10 != iVar12)) {
                  *(int *)(plVar19 + 1) = iVar10;
                  TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar19);
                }
                FUN_1439edd60(lVar17,*(undefined8 *)(param_1 + 0x88),*plVar19);
                uVar13 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))();
                iVar10 = FUN_1439e8310(uVar13);
                if ((*(int *)(param_1 + 0xc0) == -1) ||
                   (iVar12 = BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse
                                       (*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x68) +
                                         (longlong)*(int *)(param_1 + 0xc0) * 8)), iVar12 != iVar10)
                   ) {
                  if ((*(int *)(param_1 + 0xbc) == -1) ||
                     (iVar12 = BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse
                                         (*(undefined8 *)
                                           (*(longlong *)(param_1 + 0x78) +
                                           (longlong)*(int *)(param_1 + 0xbc) * 8)),
                     uVar16 = local_a0, iVar12 != iVar10)) goto LAB_140987ca1;
                  lVar17 = (longlong)(int)local_a0;
                  iVar10 = (int)local_a0 + 1;
                  local_a0 = CONCAT44(local_a0._4_4_,iVar10);
                  if (local_a0._4_4_ < iVar10) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_a8,uVar16 & 0xffffffff);
                  }
                  puVar15 = (undefined8 *)(lVar17 * 0x10 + local_a8);
                  *puVar15 = plVar19;
                  puVar15[1] = plVar18;
                  if (plVar18 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                    UNLOCK();
                    goto LAB_140987ca1;
                  }
                }
                else {
                  dVar22 = (double)FUN_1439e7ee0(*(undefined8 *)
                                                  (*(longlong *)(param_1 + 0x68) +
                                                  (longlong)*(int *)(param_1 + 0xc0) * 8));
                  uVar16 = local_b0;
                  uVar21 = SUB84(dVar22,0);
                  dVar5 = 333333.0;
                  if (0.0 < dVar22) {
                    uVar21 = 0;
                    dVar5 = 10000000.0 / dVar22 + 0.5;
                    lVar17 = (longlong)dVar5;
                    uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
                    if (0.0 <= dVar5) {
                      if ((lVar17 != -0x8000000000000000) &&
                         (uVar21 = SUB84((double)lVar17,0), (double)lVar17 != dVar5)) {
                        auVar7._8_4_ = SUB84(dVar5,0);
                        auVar7._0_8_ = dVar5;
                        auVar7._12_4_ = uVar23;
                        uVar11 = movmskpd(0,auVar7);
                        dVar5 = (double)(longlong)(lVar17 - (ulonglong)(uVar11 & 1));
                      }
                    }
                    else if ((lVar17 != -0x8000000000000000) &&
                            (uVar21 = SUB84((double)lVar17,0), (double)lVar17 != dVar5)) {
                      auVar6._8_4_ = SUB84(dVar5,0);
                      auVar6._0_8_ = dVar5;
                      auVar6._12_4_ = uVar23;
                      uVar11 = movmskpd(0,auVar6);
                      dVar5 = (double)(longlong)(lVar17 + (ulonglong)(uVar11 & 1 ^ 1));
                    }
                  }
                  lVar17 = (longlong)(int)local_b0;
                  plVar19[3] = (longlong)dVar5;
                  iVar10 = (int)local_b0 + 1;
                  local_b0 = CONCAT44(local_b0._4_4_,iVar10);
                  if (local_b0._4_4_ < iVar10) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(uVar21,uVar16 & 0xffffffff);
                  }
                  puVar15 = (undefined8 *)(lVar17 * 0x10 + local_b8);
                  *puVar15 = plVar19;
                  puVar15[1] = plVar18;
                  if (plVar18 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                    UNLOCK();
                  }
                  lVar14 = lVar14 + plVar19[3];
LAB_140987ca1:
                  if (plVar18 != (longlong *)0x0) {
                    LOCK();
                    plVar19 = plVar18 + 1;
                    lVar17 = *plVar19;
                    *(int *)plVar19 = (int)*plVar19 + -1;
                    UNLOCK();
                    if ((int)lVar17 == 1) {
                      (**(code **)*plVar18)(plVar18);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar18 + 0xc);
                      iVar10 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar10 == 1) {
                        (**(code **)(*plVar18 + 8))(plVar18,1);
                      }
                    }
                  }
                }
                iVar9 = iVar9 + 1;
                uVar13 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))();
                iVar10 = FWmfMediaTextureSample::GetFormat(uVar13);
                lVar17 = local_res20;
              } while (iVar9 < iVar10);
            }
            if ((0x14 < (int)local_b0) || (*(longlong *)(param_1 + 200) + lVar17 <= lVar14))
            goto LAB_140987894;
            goto LAB_140987810;
          }
          *plVar19 = 0;
          uVar13 = FUN_1439e7f90(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0x98) = uVar13;
          cVar8 = FUN_1439e7400(uVar13);
        } while (cVar8 == '\0');
        *(undefined1 *)(param_1 + 0xd0) = 1;
LAB_140987894:
        if (0 < (int)local_b0) {
          FUN_140983a00(*(undefined8 *)(param_1 + 0x58),&local_b8);
        }
        if (0 < (int)local_a0) {
          FUN_1409837e0(*(undefined8 *)(param_1 + 0x60),&local_a8);
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_a8);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b8);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0xd0) + 8))();
      if ((iVar9 == 0) &&
         (iVar9 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 8))(),
         iVar9 == 0)) {
        if (*(char *)(param_1 + 0xd1) == '\0') {
          *(undefined4 *)(param_1 + 0xb8) = 5;
          lVar14 = FUN_1439e7ac0(*(undefined8 *)(param_1 + 0x90));
          puVar15 = (undefined8 *)
                    FTimespan::FromMicroseconds(local_c0,SUB84((double)lVar14 * 0.001,0));
          *(undefined8 *)(param_1 + 200) = *puVar15;
          iVar9 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar9 + 1;
          if (*(int *)(param_1 + 0x3c) < iVar9 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar9);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 4) = 5;
          iVar9 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar9 + 1;
          if (*(int *)(param_1 + 0x3c) < iVar9 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar9);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 4) = 7;
        }
        else {
          lVar14 = *(longlong *)(param_1 + 0x18);
          uVar13 = FTimespan::FromSeconds(local_c8,0);
          (**(code **)(lVar14 + 0x40))(param_1 + 0x18,uVar13);
        }
      }
    }
  }
  return;
}



// FUNCTION 140987d40 TickInput body=138 status=ok
// SIG undefined TickInput(void)

void FWebMMediaPlayer::TickInput(longlong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  uVar2 = (longlong)*(int *)(param_1 + 0x38) & 0x3fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x38) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)**(undefined8 **)(param_1 + 0x40))(*(undefined8 **)(param_1 + 0x40),*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
  }
  return;
}



// FUNCTION 140987dd0 CanPlayUrl body=1837 status=ok
// SIG undefined CanPlayUrl(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FWebMMediaFactoryModule::CanPlayUrl
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  wint_t *pwVar16;
  undefined8 *puVar17;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  undefined2 *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined4 *local_208;
  undefined4 *puStack_200;
  undefined4 *local_1f8;
  ulonglong *puStack_1f0;
  longlong local_1e8 [4];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined4 local_90 [4];
  undefined1 local_80 [8];
  longlong *local_78;
  char local_68;
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_238 = (undefined2 *)0x0;
  local_230 = 0;
  local_218 = 0;
  local_210 = 0;
  local_228 = 0;
  local_220 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  lVar11 = local_228;
  FGenericPlatformString::Memcpy(local_228,&DAT_144147308,8);
  local_240 = 0;
  local_248 = 0;
  cVar6 = FUN_1404e14f0(param_2,&local_228,&local_238,&local_218);
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
  if (cVar6 == '\0') {
    puVar3 = (undefined4 *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
    puVar4 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
    if (param_5 != (longlong *)0x0) {
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_158,L"No URI scheme found",L"FWebMMediaFactoryModule",
                          L"NoSchemeFound");
      iVar9 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar9 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar9);
      }
      FText::FText(*param_5 + (longlong)iVar9 * 0x18,uVar10);
      puVar4 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
      puVar3 = (undefined4 *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
      local_f0 = local_150;
joined_r0x00014098817c:
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_f0 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        puVar3 = (undefined4 *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
        puVar4 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
        if ((int)lVar11 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)local_f0 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          puVar3 = (undefined4 *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
          puVar4 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
          if (iVar9 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
            puVar3 = (undefined4 *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
            puVar4 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
          }
        }
      }
    }
  }
  else {
    puVar15 = *(undefined8 **)(param_1 + 0x30);
    puVar17 = puVar15 + (longlong)*(int *)(param_1 + 0x38) * 2;
    if (puVar15 != puVar17) {
      do {
        puVar14 = &DAT_143f3eda8;
        if ((int)local_230 != 0) {
          puVar14 = local_238;
        }
        if (*(int *)(puVar15 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar15;
        }
        iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
        if (iVar9 == 0) {
          pwVar16 = &DAT_144159bf0;
          puVar14 = &DAT_143f3eda8;
          if ((int)local_230 != 0) {
            puVar14 = local_238;
          }
          goto LAB_140988206;
        }
        puVar15 = puVar15 + 2;
      } while (puVar15 != puVar17);
    }
    puVar3 = (undefined4 *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
    puVar4 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
    if (param_5 != (longlong *)0x0) {
      lVar11 = FText::FromString(local_a8,&local_238);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_f8,L"The URI scheme \'{0}\' is not supported",
                          L"FWebMMediaFactoryModule",L"SchemeNotSupported");
      plVar12 = (longlong *)FTextFormat::FTextFormat(local_d0,uVar10);
      local_60[0] = 4;
      FText::FText(local_50,lVar11);
      local_208 = (undefined4 *)*plVar12;
      local_1f8 = local_60;
      puStack_1f0 = &local_30;
      puStack_200 = (undefined4 *)plVar12[1];
      local_38 = '\x01';
      if (puStack_200 != (undefined4 *)0x0) {
        LOCK();
        puStack_200[2] = puStack_200[2] + 1;
        UNLOCK();
      }
      local_1a8 = local_1f8;
      uStack_1a0 = puStack_1f0;
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_198,&local_1a8);
      uVar10 = FText::Format(local_110,&local_208,uVar10);
      FText::FText(local_170,uVar10);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_108 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar2 = (int *)((longlong)local_108 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_198);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar12 = (longlong *)plVar12[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = *(longlong **)(lVar11 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      iVar9 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar9 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar9);
      }
      FText::FText(*param_5 + (longlong)iVar9 * 0x18,local_170);
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_168 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar2 = (int *)((longlong)local_168 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
      puVar4 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
      puVar3 = (undefined4 *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
      goto joined_r0x00014098817c;
    }
  }
LAB_1409881a8:
  uVar10 = 0;
LAB_1409881aa:
  local_1c8 = puVar3;
  uStack_1c0 = puVar4;
  if (local_218 != 0) {
    FMemory::Free();
  }
  if (local_238 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar10;
LAB_140988206:
  wVar7 = *(wint_t *)((longlong)pwVar16 + (longlong)(puVar14 + -0xa20acdf8));
  if ((wVar7 == 0) && (*pwVar16 == 0)) goto LAB_140988247;
  if (wVar7 != *pwVar16) {
    wVar7 = towlower(wVar7);
    wVar8 = towlower(*pwVar16);
    if (wVar7 != wVar8) goto LAB_140988238;
  }
  pwVar16 = pwVar16 + 1;
  goto LAB_140988206;
LAB_140988238:
  if (wVar7 == wVar8) {
LAB_140988247:
    FUN_141672300(local_1e8,&local_218,0);
    cVar6 = TArray<FString,FDefaultAllocator>::Contains<FString>(param_1 + 0x10,local_1e8);
    if (cVar6 == '\0') {
      if (param_5 != (longlong *)0x0) {
        lVar11 = FText::FromString(local_c0,local_1e8);
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_128,L"The file extension \'{0}\' is not supported",
                            L"FWebMMediaFactoryModule",L"ExtensionNotSupported");
        plVar12 = (longlong *)FTextFormat::FTextFormat(local_e0,uVar10);
        local_90[0] = 4;
        FText::FText(local_80,lVar11);
        local_1f8 = (undefined4 *)*plVar12;
        local_208 = local_90;
        puStack_200 = local_60;
        puStack_1f0 = (ulonglong *)plVar12[1];
        local_68 = '\x01';
        if (puStack_1f0 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(puStack_1f0 + 1) = (int)puStack_1f0[1] + 1;
          UNLOCK();
        }
        local_1c8 = local_208;
        uStack_1c0 = puStack_200;
        uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
        uVar10 = FText::Format(local_140,&local_1f8,uVar10);
        FText::FText(local_188,uVar10);
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_138 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar2 = (int *)((longlong)local_138 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8);
        if ((local_68 != '\0') && (local_68 = '\0', local_78 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_78 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar2 = (int *)((longlong)local_78 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_78 + 8))(local_78,1);
            }
          }
        }
        plVar12 = (longlong *)plVar12[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar12 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        plVar12 = *(longlong **)(lVar11 + 8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar12 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        iVar9 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_5,iVar9);
        }
        FText::FText(*param_5 + (longlong)iVar9 * 0x18,local_188);
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_180 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_180)(local_180);
            LOCK();
            piVar2 = (int *)((longlong)local_180 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_180 + 8))(local_180,1);
            }
          }
        }
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_120 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar2 = (int *)((longlong)local_120 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_120 + 8))(local_120,1);
            }
          }
        }
      }
      puVar3 = local_1c8;
      puVar4 = uStack_1c0;
      if (local_1e8[0] != 0) {
        FMemory::Free();
        puVar3 = local_1c8;
        puVar4 = uStack_1c0;
      }
      goto LAB_1409881a8;
    }
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
  }
  puVar4 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
  puVar3 = (undefined4 *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
  uVar10 = 1;
  goto LAB_1409881aa;
}



// FUNCTION 140988500 CreatePlayer body=315 status=ok
// SIG undefined CreatePlayer(void)

undefined8 *
FWebMMediaFactoryModule::CreatePlayer(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 local_res10 [2];
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_res10[0] = 0;
  puVar5 = (undefined8 *)FName::FName(local_res10,"WebMMedia",1);
  uVar8 = *puVar5;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar8);
  bVar9 = plVar7 == (longlong *)0x0;
  if (bVar9) {
    puVar5 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,local_18,param_3);
    uVar8 = *puVar5;
  }
  *param_2 = uVar8;
  param_2[1] = puVar5[1];
  puVar5[1] = 0;
  *puVar5 = 0;
  plVar7 = plStack_20;
  if (bVar9) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((!bVar9) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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



// FUNCTION 140988640 GetDisplayName body=47 status=ok
// SIG undefined GetDisplayName(void)

undefined8 FWebMMediaFactoryModule::GetDisplayName(undefined8 param_1,undefined8 param_2)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,L"WebM Media",L"FWebMMediaFactoryModule",L"MediaPlayerDisplayName");
  return param_2;
}



// FUNCTION 140988670 FUN_140988670 body=123 status=ok
// SIG undefined FUN_140988670(void)

undefined8 * FUN_140988670(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146864338) {
    _Init_thread_header(&DAT_146864338);
    if (DAT_146864338 == -1) {
      FName::FName(&DAT_146864330,L"WebMMedia",1);
      _Init_thread_footer(&DAT_146864338);
    }
  }
  *param_2 = DAT_146864330;
  return param_2;
}



// FUNCTION 140988700 StartupModule body=596 status=ok
// SIG undefined StartupModule(void)

void FWebMMediaFactoryModule::StartupModule(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  short *psVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 5;
  uVar4 = 0;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  uVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"webm",10);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  *puVar6 = uVar2;
  *(uint *)(puVar6 + 1) = (uint)local_30;
  *(uint *)((longlong)puVar6 + 0xc) = local_30._4_4_;
  psVar3 = (short *)FGenericPlatformMisc::GetUBTPlatform();
  local_38 = 0;
  uVar10 = 0;
  local_30 = local_30 & 0xffffffff;
  uVar9 = uVar10;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar3[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_30 = (ulonglong)uVar7;
    uVar10 = uVar7;
    uVar9 = 0;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar10 = (uint)local_30;
      uVar9 = local_30._4_4_;
    }
    uVar4 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar3,(longlong)(int)uVar7 * 2);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  local_38 = 0;
  puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
  local_30 = 8;
  *puVar6 = uVar4;
  *(uint *)(puVar6 + 1) = uVar10;
  *(uint *)((longlong)puVar6 + 0xc) = uVar9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  uVar2 = local_38;
  FGenericPlatformString::Convert<char,wchar_t>(local_38,8,"Windows",8,0x3f);
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
  local_38 = 0;
  *puVar6 = uVar2;
  *(uint *)(puVar6 + 1) = (uint)local_30;
  *(uint *)((longlong)puVar6 + 0xc) = local_30._4_4_;
  local_30 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  uVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,&DAT_144159bf0,10);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  *puVar6 = uVar2;
  *(uint *)(puVar6 + 1) = (uint)local_30;
  *(uint *)((longlong)puVar6 + 0xc) = local_30._4_4_;
  puVar6 = (undefined8 *)FName::FName(local_res8,"Media",1);
  uVar2 = *puVar6;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FUN_141690010(uVar4,uVar2);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x68))(plVar5,param_1 + -8);
  }
  return;
}



// FUNCTION 140988960 FUN_140988960 body=116 status=ok
// SIG undefined FUN_140988960(void)

undefined8 * FUN_140988960(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_CanPlayUrl_1441778e8;
  puVar1[1] = &PTR_LAB_144177920;
  puVar1[2] = 0;
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar2;
}



// FUNCTION 1409889e0 FUN_1409889e0 body=22 status=ok
// SIG undefined FUN_1409889e0(void)

void FUN_1409889e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001409889f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 140988a00 FUN_140988a00 body=752 status=ok
// SIG undefined FUN_140988a00(void)

void FUN_140988a00(void)

{
  int *piVar1;
  int iVar2;
  LPCWSTR pWVar3;
  HMODULE pHVar4;
  HMODULE pHVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  char cVar11;
  LPCWSTR pWVar12;
  LPCWSTR local_78;
  undefined8 local_70;
  LPCWSTR local_68;
  undefined8 local_60;
  LPCWSTR local_58;
  undefined8 local_50;
  LPCWSTR local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong lStack_20;
  
  plVar9 = (longlong *)0x0;
  local_70 = 0xc;
  local_78 = (LPCWSTR)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  pWVar3 = local_78;
  FGenericPlatformString::Memcpy(local_78,L"shlwapi.dll",0x18);
  pWVar12 = L"";
  if ((int)local_70 != 0) {
    pWVar12 = pWVar3;
  }
  pHVar4 = LoadLibraryW(pWVar12);
  if (pHVar4 == (HMODULE)0x0) {
    GetLastError();
  }
  if (pWVar3 != (LPCWSTR)0x0) {
    FMemory::Free(pWVar3);
  }
  local_68 = (LPCWSTR)0x0;
  local_60 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  pWVar3 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"mf.dll",0xe);
  pWVar12 = L"";
  if ((int)local_60 != 0) {
    pWVar12 = pWVar3;
  }
  pHVar5 = LoadLibraryW(pWVar12);
  if (pHVar5 == (HMODULE)0x0) {
    GetLastError();
  }
  if (pWVar3 != (LPCWSTR)0x0) {
    FMemory::Free(pWVar3);
  }
  local_58 = (LPCWSTR)0x0;
  local_50 = 0xb;
  plVar7 = plVar9;
  if (pHVar5 != (HMODULE)0x0) {
    plVar7 = (longlong *)(ulonglong)(pHVar4 != (HMODULE)0x0);
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  pWVar3 = local_58;
  FGenericPlatformString::Memcpy(local_58,L"mfplat.dll",0x16);
  pWVar12 = L"";
  if ((int)local_50 != 0) {
    pWVar12 = pWVar3;
  }
  pHVar4 = LoadLibraryW(pWVar12);
  if (pHVar4 == (HMODULE)0x0) {
    GetLastError();
  }
  if (pWVar3 != (LPCWSTR)0x0) {
    FMemory::Free(pWVar3);
  }
  local_48 = (LPCWSTR)0x0;
  local_40 = 0xb;
  plVar8 = plVar9;
  if (pHVar4 != (HMODULE)0x0) {
    plVar8 = plVar7;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  pWVar3 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"mfplay.dll",0x16);
  pWVar12 = L"";
  if ((int)local_40 != 0) {
    pWVar12 = pWVar3;
  }
  pHVar4 = LoadLibraryW(pWVar12);
  if (pHVar4 == (HMODULE)0x0) {
    GetLastError();
  }
  if (pWVar3 != (LPCWSTR)0x0) {
    FMemory::Free(pWVar3);
  }
  cVar11 = '\0';
  if (pHVar4 != (HMODULE)0x0) {
    cVar11 = (char)plVar8;
  }
  if (cVar11 != '\0') {
    _guard_xfg_dispatch_icall_nop(0x20070,0);
    lVar6 = operator_new(0x88);
    plVar7 = plVar9;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_140988d90(lVar6);
    }
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_FUN_144177a00;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar7;
      plVar9 = plVar8;
    }
    local_30 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_38,plVar7,plVar7);
    local_38 = 0;
    DAT_146864380 = plVar7;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146864388,&local_30);
    plVar9 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
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
    puVar10 = (undefined8 *)GetMoviePlayer();
    local_28 = DAT_146864380;
    lStack_20 = DAT_146864388;
    if (DAT_146864388 != 0) {
      LOCK();
      *(int *)(DAT_146864388 + 8) = *(int *)(DAT_146864388 + 8) + 1;
      UNLOCK();
    }
    (**(code **)*puVar10)(puVar10,&local_28);
  }
  return;
}



// FUNCTION 140988cf0 FUN_140988cf0 body=151 status=ok
// SIG undefined FUN_140988cf0(void)

void FUN_140988cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_10;
  
  if (DAT_146864380 == 0) {
    return;
  }
  local_10 = (longlong *)0x0;
  DAT_146864380 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&DAT_146864388,&local_10,param_3,param_4,0);
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
  _guard_xfg_dispatch_icall_nop();
  return;
}



// FUNCTION 140988d90 FUN_140988d90 body=517 status=ok
// SIG undefined FUN_140988d90(void)

undefined8 * FUN_140988d90(undefined8 *param_1)

{
  longlong **pplVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_38;
  longlong *local_30;
  
  plVar7 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 9);
  *param_1 = &PTR_Init_144177c50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *pplVar1 = (longlong *)0x0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  plVar5 = (longlong *)operator_new(0x28);
  plVar8 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (longlong)&PTR_FUN_144175298;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar8 = plVar5;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar5 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar8;
    plVar5 = plVar6;
  }
  plVar6 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  local_38 = plVar8;
  local_30 = plVar5;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar2 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140988f17;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar8;
    plVar7 = (longlong *)plVar6[1];
    if (plVar5 != plVar7) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
LAB_140988f17:
  if (pplVar1 != &local_38) {
    *pplVar1 = plVar8;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 10,&local_30);
  }
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 140988fa0 FUN_140988fa0 body=392 status=ok
// SIG undefined FUN_140988fa0(void)

void FUN_140988fa0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  *param_1 = &PTR_Init_144177c50;
  FMediaFoundationMovieStreamer::CloseMovie();
  FMediaFoundationMovieStreamer::CleanupRenderingResources(param_1);
  FUN_141ee24f0(0);
  iVar6 = *(int *)(param_1 + 0xe);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(param_1[0xd] + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xd,0);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd);
  plVar7 = (longlong *)param_1[0xc];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = (longlong *)param_1[10];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 5);
  plVar7 = (longlong *)param_1[4];
  if (iVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)param_1[4];
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR__purecall_1441753d8;
  return;
}



// FUNCTION 140989130 FUN_140989130 body=97 status=ok
// SIG undefined FUN_140989130(void)

undefined8 * FUN_140989130(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144177d48;
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



// FUNCTION 1409891a0 FUN_1409891a0 body=97 status=ok
// SIG undefined FUN_1409891a0(void)

undefined8 * FUN_1409891a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144177d38;
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



// FUNCTION 140989210 FUN_140989210 body=52 status=ok
// SIG undefined FUN_140989210(void)

undefined8 FUN_140989210(undefined8 param_1,ulonglong param_2)

{
  FUN_140988fa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140989250 FUN_140989250 body=43 status=ok
// SIG undefined FUN_140989250(void)

undefined8 * FUN_140989250(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_144177cd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140989280 `scalar_deleting_destructor' body=155 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWmfMediaByteStream::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_144177db8;
  param_1[1] = &PTR_LAB_144177de8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  plVar4 = (longlong *)param_1[4];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140989320 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVideoPlayer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_144177ca8;
  Shutdown();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140989360 FUN_140989360 body=43 status=ok
// SIG undefined FUN_140989360(void)

undefined8 * FUN_140989360(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_144177d78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1409893a0 FUN_1409893a0 body=1498 status=ok
// SIG undefined FUN_1409893a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1409893a0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  IMFMediaType *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  int local_b8;
  int local_b4;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  int local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStackY_118;
  bVar1 = false;
  local_88 = param_5;
  local_c8 = 0;
  local_a8 = (longlong *)0x0;
  local_b0 = (longlong *)0x0;
  local_90 = param_2;
  local_80 = param_3;
  local_78 = param_1;
  local_70 = param_4;
  (**(code **)(*param_5 + 0x110))(param_5,&local_b0);
  (**(code **)(*local_b0 + 0x40))(local_b0,&local_68);
  uVar6 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar6,L"nosound");
  if (local_68 == 0x10000073647561) {
    if (local_60 == 0x719b3800aa000080) {
      if (cVar2 == '\0') {
        local_a0 = (longlong *)0x0;
        local_c0 = (longlong *)0x0;
        HVar3 = CoCreateInstance((IID *)&DAT_144177ea8,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_144177eb8,
                                 &local_a0);
        if ((-1 < HVar3) &&
           (iVar4 = (**(code **)(*local_a0 + 0x18))(local_a0,0,1,&local_c0), -1 < iVar4)) {
          (**(code **)(*local_c0 + 0x18))(local_c0,&local_e0);
          bVar1 = (int)local_e0 != 0;
        }
        if (local_a0 != (longlong *)0x0) {
          (**(code **)(*local_a0 + 0x10))();
          local_a0 = (longlong *)0x0;
        }
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
        }
        if (bVar1) goto LAB_140989501;
      }
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
        *param_2 = local_c8;
        return param_2;
      }
      goto LAB_1409897c9;
    }
LAB_140989501:
    if ((local_68 != 0x10000073647561) || (local_60 != 0x719b3800aa000080)) goto LAB_1409897f3;
    _guard_xfg_dispatch_icall_nop(&local_a8);
    piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    if ((*piVar13 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
      FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
      _Init_thread_footer(&DAT_146850178);
    }
    uVar6 = DAT_146850170;
    plVar7 = (longlong *)FUN_141593110();
    iVar4 = (**(code **)(*plVar7 + 8))(plVar7,uVar6);
    param_2 = local_90;
    if (0 < iVar4) {
      if ((*piVar13 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1))
      {
        FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
        _Init_thread_footer(&DAT_146850178);
      }
      uVar6 = DAT_146850170;
      plVar8 = (longlong *)FUN_141593110();
      plVar7 = (longlong *)0x0;
      iVar11 = 0;
      local_c0 = (longlong *)0x0;
      local_b4 = 0;
      iVar5 = (**(code **)(*plVar8 + 8))(plVar8,uVar6);
      iVar10 = 0;
      local_e0 = (IMFMediaType *)CONCAT44(local_e0._4_4_,iVar5);
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar6,iVar10);
          if (lVar9 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = lVar9 + -8;
          }
          local_b8 = iVar11 + 1;
          if (local_b4 < local_b8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c0,iVar11);
            plVar7 = local_c0;
          }
          iVar10 = iVar10 + 1;
          plVar7[iVar11] = lVar9;
          param_3 = local_80;
          iVar4 = local_b8;
          iVar11 = local_b8;
        } while (iVar10 < (int)local_e0);
      }
      AlgoImpl::
      IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                (plVar7,(longlong)iVar4,local_e8[0],local_e8);
      plVar8 = (longlong *)*plVar7;
      FMemory::Free(plVar7);
      (**(code **)(*plVar8 + 0x70))(plVar8,&local_a0);
      if (1 < local_98) {
        plVar7 = (longlong *)&DAT_143f3eda8;
        if (local_98 != 0) {
          plVar7 = local_a0;
        }
        (**(code **)(*local_a8 + 200))(local_a8,&DAT_144159260,plVar7);
      }
      param_2 = local_90;
      param_5 = local_88;
      param_4 = local_70;
      param_1 = local_78;
      if (local_a0 != (longlong *)0x0) {
        FMemory::Free();
        param_2 = local_90;
        param_5 = local_88;
        param_4 = local_70;
        param_1 = local_78;
      }
    }
  }
  else {
LAB_1409897f3:
    uVar12 = 0;
    if ((local_68 == 0x10000073646976) && (local_60 == 0x719b3800aa000080)) {
      local_c0 = (longlong *)0x0;
      (**(code **)(*local_b0 + 0x38))(local_b0,&local_c0);
      local_e0 = (IMFMediaType *)0x0;
      _guard_xfg_dispatch_icall_nop(&local_e0);
      iVar4 = (**(code **)(*local_c0 + 0x40))(local_c0,&DAT_145dc7e80,&local_80);
      plVar7 = (longlong *)0x0;
      if (-1 < iVar4) {
        uVar12 = (undefined4)((ulonglong)local_80 >> 0x20);
        plVar7 = local_80;
      }
      (*local_e0->lpVtbl->SetGUID)(local_e0,(GUID *)&DAT_145dc7e20,(GUID *)&DAT_145dc7f00);
      (*local_e0->lpVtbl->SetGUID)(local_e0,(GUID *)&DAT_145dc7e30,(GUID *)&DAT_145dc7a40);
      (*local_e0->lpVtbl->SetUINT32)(local_e0,(GUID *)&DAT_145dc7e40,1);
      _guard_xfg_dispatch_icall_nop(local_e0,param_6,&local_a8);
      if (local_e0 != (IMFMediaType *)0x0) {
        (*local_e0->lpVtbl->Release)(local_e0);
        local_e0 = (IMFMediaType *)0x0;
      }
      if (local_c0 != (longlong *)0x0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      local_c8 = CONCAT44((int)plVar7,uVar12);
      param_5 = local_88;
    }
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  local_d8 = (longlong *)0x0;
  _guard_xfg_dispatch_icall_nop(1,&local_d8);
  (**(code **)(*local_d8 + 0xd8))(local_d8,&DAT_1441591d0,*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*local_d8 + 0xd8))(local_d8,&DAT_1441591e0,param_4);
  (**(code **)(*local_d8 + 0xd8))(local_d8,&DAT_1441591f0,param_5);
  (**(code **)(*param_3 + 0x110))(param_3,local_d8);
  local_d0 = (longlong *)0x0;
  _guard_xfg_dispatch_icall_nop(0,&local_d0);
  (**(code **)(*local_d0 + 0x108))(local_d0,local_a8);
  (**(code **)(*local_d0 + 0xa8))(local_d0,&DAT_144159200,0);
  (**(code **)(*local_d0 + 0xa8))(local_d0,&DAT_144159210,0);
  (**(code **)(*param_3 + 0x110))(param_3,local_d0);
  (**(code **)(*local_d8 + 0x140))(local_d8,0,local_d0,0);
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
    local_d8 = (longlong *)0x0;
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
    local_d0 = (longlong *)0x0;
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
LAB_1409897c9:
  *param_2 = local_c8;
  return param_2;
}



// FUNCTION 140989980 BeginRead body=259 status=ok
// SIG undefined BeginRead(void)

HRESULT FWmfMediaByteStream::BeginRead
                  (longlong param_1,IUnknownVtbl *param_2,undefined4 param_3,
                  IMFAsyncCallback *param_4,IUnknown *param_5)

{
  HRESULT HVar1;
  IUnknown *punkObject;
  IMFAsyncResult *local_res20;
  
  if ((param_4 != (IMFAsyncCallback *)0x0) && (param_2 != (IUnknownVtbl *)0x0)) {
    punkObject = (IUnknown *)operator_new(0x20);
    if (punkObject != (IUnknown *)0x0) {
      punkObject[1].lpVtbl = (IUnknownVtbl *)0x0;
      punkObject->lpVtbl = (IUnknownVtbl *)&PTR_LAB_144177d78;
      punkObject[2].lpVtbl = param_2;
      *(undefined4 *)&punkObject[3].lpVtbl = param_3;
      *(undefined4 *)((longlong)&punkObject[3].lpVtbl + 4) = 0;
      FUN_1408fd010(punkObject);
      local_res20 = (IMFAsyncResult *)0x0;
      HVar1 = ::_guard_xfg_dispatch_icall_nop(punkObject,param_4,param_5,&local_res20);
      if (-1 < HVar1) {
        *(undefined1 *)(param_1 + 8) = 1;
        HVar1 = ::_guard_xfg_dispatch_icall_nop
                          (1,(IMFAsyncCallback *)(param_1 + -8),(IUnknown *)local_res20);
        (*local_res20->lpVtbl->Release)(local_res20);
      }
      (*punkObject->lpVtbl->Release)(punkObject);
      return HVar1;
    }
    return -0x7ff8fff2;
  }
  return -0x7ff8ffa9;
}



// FUNCTION 140989aa0 CleanupRenderingResources body=104 status=ok
// SIG undefined CleanupRenderingResources(void)

void FMediaFoundationMovieStreamer::CleanupRenderingResources(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar4 = uVar5;
  uVar6 = uVar5;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      lVar1 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x68));
      uVar2 = lVar1 + 0x20;
      if (lVar1 == 0) {
        uVar2 = uVar5;
      }
      FUN_141edf360(uVar2);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 0x10;
    } while ((int)uVar3 < *(int *)(param_1 + 0x70));
  }
  return;
}



// FUNCTION 140989b10 CloseMovie body=446 status=ok
// SIG undefined CloseMovie(void)

void FMediaFoundationMovieStreamer::CloseMovie(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_48;
  longlong *local_40;
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1,local_38);
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
  bVar2 = false;
  *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + 1;
  iVar4 = *(int *)((longlong)plVar6 + 0x14);
  iVar7 = (int)plVar6[1] + -1;
  lVar10 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar9 = lVar10 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar9 + 8 + *plVar6) == 0) ||
         (plVar8 = *(longlong **)(lVar9 + *plVar6), plVar8 == (longlong *)0x0)) {
LAB_140989b81:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar8 + 0x40))(plVar8,uVar5);
        if (cVar3 == '\0') goto LAB_140989b81;
      }
      lVar9 = lVar9 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
    iVar4 = *(int *)((longlong)plVar6 + 0x14);
  }
  *(int *)((longlong)plVar6 + 0x14) = iVar4 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,0);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  plVar6 = param_1 + 0xb;
  if (*plVar6 != 0) {
    iVar4 = (int)param_1[0xe];
    *(int *)(param_1 + 0xe) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0x74) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd,iVar4);
    }
    plVar8 = (longlong *)((longlong)iVar4 * 0x10 + param_1[0xd]);
    *plVar8 = *plVar6;
    lVar10 = param_1[0xc];
    plVar8[1] = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    local_28 = 0;
    uStack_20 = 0;
    FMovieViewport::SetTexture(param_1[9],&local_28);
    local_40 = (longlong *)0x0;
    if (plVar6 != &local_48) {
      *plVar6 = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc,&local_40);
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  if (param_1[0xf] != 0) {
    FVideoPlayer::Shutdown();
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
    param_1[0xf] = 0;
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
    param_1[0x10] = 0;
  }
  return;
}



// FUNCTION 140989cd0 FUN_140989cd0 body=260 status=ok
// SIG undefined FUN_140989cd0(void)

void FUN_140989cd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)(param_1[2] + 0x20) + 0x28))();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144177d48;
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 140989de0 FUN_140989de0 body=262 status=ok
// SIG undefined FUN_140989de0(void)

void FUN_140989de0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FSlateTexture2DRHIRef::Resize
            (param_1[2],*(undefined4 *)(param_1 + 3),*(undefined4 *)((longlong)param_1 + 0x1c));
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144177d38;
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 140989f00 GetAspectRatio body=76 status=ok
// SIG undefined GetAspectRatio(void)

float FMediaFoundationMovieStreamer::GetAspectRatio(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  piVar3 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2,local_res8);
  iVar1 = *piVar3;
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_res10);
  return (float)iVar1 / (float)*(int *)(lVar4 + 4);
}



// FUNCTION 140989f50 GetMovieName body=257 status=ok
// SIG undefined GetMovieName(void)

undefined8 * FMediaFoundationMovieStreamer::GetMovieName(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  void **ppvVar6;
  void *pvVar7;
  void *local_38;
  int local_30;
  undefined4 uStack_2c;
  void *local_28;
  undefined8 local_20;
  
  iVar1 = *(int *)(param_1 + 0x34);
  pvVar7 = (void *)0x0;
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x28) <= iVar1)) {
    local_20 = 0;
    ppvVar6 = &local_28;
    bVar4 = false;
    bVar3 = true;
    pvVar7 = (void *)0x0;
  }
  else {
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x20));
    local_38 = (void *)0x0;
    iVar1 = *(int *)(puVar5 + 1);
    _Src = (void *)*puVar5;
    local_30 = iVar1;
    if (iVar1 == 0) {
      ppvVar6 = &local_38;
      uStack_2c = 0;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
      pvVar7 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 * 2);
      ppvVar6 = &local_38;
      bVar4 = true;
      bVar3 = false;
    }
  }
  *ppvVar6 = (void *)0x0;
  uVar2 = *(undefined4 *)(ppvVar6 + 1);
  *param_2 = pvVar7;
  *(undefined4 *)(param_2 + 1) = uVar2;
  ppvVar6[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar6 + 0xc);
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_38 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14098a060 GetTexture body=115 status=ok
// SIG undefined GetTexture(void)

longlong * FMediaFoundationMovieStreamer::GetTexture(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar3 = 0;
    puVar4 = &local_res8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    puVar4 = &local_res10;
    bVar2 = true;
    bVar1 = false;
  }
  *param_2 = lVar3;
  *puVar4 = 0;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  }
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  return param_2;
}



// FUNCTION 14098a100 Init body=309 status=ok
// SIG undefined Init(void)

undefined8
FMediaFoundationMovieStreamer::Init(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*(int *)(param_2 + 1) != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x30) = *param_3;
    if (puVar3 != param_2) {
      plVar2 = (longlong *)*puVar3;
      for (iVar4 = *(int *)(param_1 + 0x28); iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
      }
      iVar4 = *(int *)(param_2 + 1);
      param_2 = (undefined8 *)*param_2;
      *(int *)(param_1 + 0x28) = iVar4;
      if ((iVar4 == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3,iVar4);
        puVar3 = (undefined8 *)*puVar3;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar3 = 0;
          iVar1 = *(int *)(param_2 + 1);
          _Src = (void *)*param_2;
          *(int *)(puVar3 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
          }
          puVar3 = puVar3 + 2;
          param_2 = param_2 + 2;
        }
      }
    }
    local_28 = 0;
    uStack_20 = 0;
    FMovieViewport::SetTexture(*(undefined8 *)(param_1 + 0x48),&local_28);
    FUN_14098a830(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 14098a240 FUN_14098a240 body=39 status=ok
// SIG undefined FUN_14098a240(void)

void FUN_14098a240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144177a10;
    return;
  }
  return;
}



// FUNCTION 14098a270 Invoke body=207 status=ok
// SIG undefined Invoke(void)

undefined8 FVideoPlayer::Invoke(longlong param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int local_res8 [2];
  longlong *local_res18;
  
  local_res18 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                    (*(longlong **)(param_1 + 0x10),param_2,&local_res18);
  if (iVar1 < 0) {
    (**(code **)(*local_res18 + 0x10))();
    return 0;
  }
  local_res8[0] = 0;
  iVar1 = (**(code **)(*local_res18 + 0x108))(local_res18,local_res8);
  (**(code **)(*local_res18 + 0x10))();
  if (iVar1 < 0) {
    return 0;
  }
  if (local_res8[0] != 0x6a) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                      (*(longlong **)(param_1 + 0x10),param_1,0);
    if (iVar1 < 0) {
      return 0;
    }
    LOCK();
    bVar2 = *(int *)(param_1 + 0x20) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0x20) = 0;
    }
    UNLOCK();
    if (!bVar2) {
      return 0;
    }
    if (local_res8[0] == 0xd3) {
      LOCK();
      *(undefined4 *)(param_1 + 0x20) = 1;
      UNLOCK();
      return 0;
    }
    if (local_res8[0] != 1) {
      return 0;
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x24) = 1;
  UNLOCK();
  return 0;
}



// FUNCTION 14098a350 OnProcessSample body=58 status=ok
// SIG undefined OnProcessSample(void)

undefined8 FSampleGrabberCallback::OnProcessSample(longlong param_1)

{
  bool bVar1;
  void *in_stack_00000030;
  uint in_stack_00000038;
  
  LOCK();
  bVar1 = *(int *)(param_1 + 0xc) == 0;
  if (bVar1) {
    *(int *)(param_1 + 0xc) = 0;
  }
  UNLOCK();
  if (bVar1) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)**(undefined8 **)(param_1 + 0x10),in_stack_00000030,
               (ulonglong)in_stack_00000038);
    LOCK();
    *(undefined4 *)(param_1 + 0xc) = 1;
    UNLOCK();
  }
  return 0;
}



// FUNCTION 14098a390 FUN_14098a390 body=1175 status=ok
// SIG undefined FUN_14098a390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_14098a390(longlong param_1,uint *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  short *psVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint local_res8 [2];
  uint *local_res10;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  longlong *local_b8;
  int local_b0 [2];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  short *local_90;
  int local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  uint *local_60;
  uint local_58;
  uint uStack_54;
  undefined8 *local_50;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar17 = (uint *)0x0;
  local_res8[0] = 0;
  *(longlong *)param_2 = _DAT_1468b5ca0;
  local_res10 = param_2;
  local_res20 = param_4;
  local_50 = puVar1;
  _guard_xfg_dispatch_icall_nop(0,puVar1);
  (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,param_1,0);
  local_a8 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  _guard_xfg_dispatch_icall_nop(&local_a8);
  if (*(int *)(param_3 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*param_3;
  }
  FString::PrintfImpl(&local_90,L"%s.%s",puVar15,&DAT_144177b98);
  local_res18[0] = 2;
  psVar8 = &DAT_143f3eda8;
  if (local_88 != 0) {
    psVar8 = local_90;
  }
  local_78 = 0;
  local_70 = 0;
  if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (psVar8[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    local_70 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    FGenericPlatformString::Memcpy(local_78,psVar8,(longlong)(int)uVar10 * 2);
  }
  cVar4 = FPaths::FileExists(&local_78);
  local_60 = puVar17;
  if (cVar4 == '\0') {
    puVar7 = (uint *)operator_new(0x18);
    if (puVar7 != (uint *)0x0) {
      puVar7[2] = 1;
      *(undefined ***)puVar7 = &PTR_FUN_143f3f2e0;
      puVar7[3] = 1;
      puVar7[4] = 0;
      puVar7[5] = 0;
      local_60 = puVar7;
    }
    lVar11 = 0;
  }
  else {
    plVar6 = (longlong *)FUN_1415c3d50();
    psVar8 = &DAT_143f3eda8;
    if (local_88 != 0) {
      psVar8 = local_90;
    }
    lVar11 = (**(code **)(*plVar6 + 0x18))(plVar6,psVar8,0);
    puVar7 = (uint *)operator_new(0x18);
    if (puVar7 != (uint *)0x0) {
      puVar7[2] = 1;
      *(undefined ***)puVar7 = &PTR_FUN_143f3f2e0;
      puVar7[3] = 1;
      *(longlong *)(puVar7 + 4) = lVar11;
      local_60 = puVar7;
    }
  }
  local_68 = lVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_68,lVar11,lVar11);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_68 == 0) {
    psVar8 = &DAT_143f3eda8;
    if (local_88 != 0) {
      psVar8 = local_90;
    }
    iVar5 = (**(code **)(*local_a8 + 0x18))(local_a8,psVar8,1,0,local_res18,&local_a0);
  }
  else {
    plVar6 = (longlong *)operator_new(0x58);
    puVar7 = local_60;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      puVar7 = local_res10;
    }
    else {
      if (local_60 != (uint *)0x0) {
        LOCK();
        local_60[2] = local_60[2] + 1;
        UNLOCK();
      }
      *(undefined1 *)(plVar6 + 2) = 0;
      *plVar6 = (longlong)&PTR_LAB_144177db8;
      plVar6[1] = (longlong)&PTR_LAB_144177de8;
      plVar6[3] = local_68;
      plVar6[4] = (longlong)local_60;
      if (local_60 != (uint *)0x0) {
        LOCK();
        local_60[2] = local_60[2] + 1;
        UNLOCK();
      }
      InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 5));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 5),4000);
      *(undefined4 *)(plVar6 + 10) = 0;
      puVar17 = (uint *)0x1;
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    if ((puVar17 != (uint *)0x0) && (puVar7 != (uint *)0x0)) {
      LOCK();
      puVar17 = puVar7 + 2;
      uVar10 = *puVar17;
      *puVar17 = *puVar17 - 1;
      UNLOCK();
      if (uVar10 == 1) {
        (*(code *)**(undefined8 **)puVar7)(puVar7);
        LOCK();
        puVar17 = puVar7 + 3;
        uVar10 = *puVar17;
        *puVar17 = *puVar17 - 1;
        UNLOCK();
        if (uVar10 == 1) {
          (**(code **)(*(longlong *)puVar7 + 8))(puVar7,1);
        }
      }
    }
    plVar9 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    psVar8 = &DAT_143f3eda8;
    if (local_88 != 0) {
      psVar8 = local_90;
    }
    iVar5 = (**(code **)(*local_a8 + 0x20))(local_a8,plVar9,psVar8,1,0,local_res18,&local_a0);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  uVar10 = 0;
  (**(code **)(*local_a8 + 0x10))();
  if (iVar5 < 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 1;
    UNLOCK();
  }
  else {
    (**(code **)*local_a0)(local_a0,&DAT_144159970,param_1 + 0x18);
    (**(code **)(*local_a0 + 0x10))();
    local_b8 = (longlong *)0x0;
    uVar16 = 0;
    uVar12 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))(*(longlong **)(param_1 + 0x18),&local_b8);
    local_98 = (longlong *)0x0;
    _guard_xfg_dispatch_icall_nop(&local_98);
    local_res8[0] = 0;
    (**(code **)(*local_b8 + 0x108))(local_b8,local_res8);
    FUN_14098b190(local_b8,local_res8[0]);
    uVar3 = local_res20;
    uVar13 = uVar10;
    uVar14 = uVar10;
    if (local_res8[0] != 0) {
      do {
        local_b0[0] = 0;
        local_80 = (longlong *)0x0;
        (**(code **)(*local_b8 + 0x110))(local_b8,uVar10,local_b0,&local_80);
        uVar16 = uVar14;
        uVar12 = uVar13;
        if ((local_b0[0] != 0) &&
           ((FUN_1409893a0(param_1,&local_58,local_98,local_b8,local_80,uVar3), local_58 != 0 ||
            (uStack_54 != 0)))) {
          uVar16 = local_58;
          uVar12 = uStack_54;
        }
        (**(code **)(*local_80 + 0x10))();
        uVar10 = uVar10 + 1;
        uVar13 = uVar12;
        uVar14 = uVar16;
      } while (uVar10 < local_res8[0]);
    }
    (**(code **)(*(longlong *)*local_50 + 0x38))((longlong *)*local_50,0,local_98);
    (**(code **)(*local_98 + 0x10))();
    (**(code **)(*local_b8 + 0x10))();
    *local_res10 = uVar16;
    local_res10[1] = uVar12;
  }
  puVar7 = local_60;
  puVar17 = local_res10;
  if (local_60 != (uint *)0x0) {
    LOCK();
    puVar2 = local_60 + 2;
    uVar10 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar10 == 1) {
      (*(code *)**(undefined8 **)local_60)(local_60);
      LOCK();
      puVar2 = puVar7 + 3;
      uVar10 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar10 == 1) {
        (**(code **)(*(longlong *)puVar7 + 8))(puVar7,1);
      }
    }
  }
  if (local_90 != (short *)0x0) {
    FMemory::Free();
  }
  return puVar17;
}



// FUNCTION 14098a830 FUN_14098a830 body=2168 status=ok
// SIG undefined FUN_14098a830(void)

undefined8 FUN_14098a830(longlong param_1)

{
  longlong **pplVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  DWORD *pDVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int *piVar19;
  int iVar20;
  undefined8 *puVar21;
  int iVar22;
  void *pvVar23;
  int iVar24;
  int local_res8;
  int iStackX_c;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  
  puVar21 = (undefined8 *)
            ((longlong)*(int *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x20));
  plVar9 = (longlong *)FPaths::ProjectContentDir(local_68);
  lVar10 = plVar9[1];
  local_f8 = (void *)*plVar9;
  *plVar9 = 0;
  local_f0._0_4_ = (int)plVar9[1];
  local_f0._4_4_ = *(int *)((longlong)plVar9 + 0xc);
  plVar9[1] = 0;
  iVar7 = (int)local_f0;
  if (local_f0._4_4_ < (int)((8 - (uint)((int)lVar10 != 0)) + (int)local_f0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
    iVar7 = (int)local_f0;
  }
  local_f0._0_4_ = (8 - (uint)(iVar7 != 0)) + iVar7;
  pvVar23 = local_f8;
  iVar24 = local_f0._4_4_;
  local_d0 = (int)local_f0;
  if (local_f0._4_4_ < (int)local_f0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar7);
    pvVar23 = local_f8;
    iVar24 = local_f0._4_4_;
    local_d0 = (int)local_f0;
  }
  local_f8 = (void *)0x0;
  local_f0 = 0;
  lVar10 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  *(undefined8 *)((longlong)pvVar23 + lVar10 * 2) = 0x690076006f004d;
  *(undefined4 *)((longlong)pvVar23 + lVar10 * 2 + 8) = 0x730065;
  *(undefined2 *)((longlong)pvVar23 + lVar10 * 2 + 0xc) = 0x2f;
  *(undefined2 *)((longlong)pvVar23 + lVar10 * 2 + 0xe) = 0;
  if (local_d0 < 2) {
    local_d8 = (void *)0x0;
    local_d0 = *(int *)(puVar21 + 1);
    lVar10 = (longlong)local_d0;
    pvVar3 = (void *)*puVar21;
    if (local_d0 == 0) {
      local_cc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar3,lVar10 * 2);
    }
    if (pvVar23 != (void *)0x0) {
      FMemory::Free(pvVar23);
    }
  }
  else {
    iVar7 = *(int *)(puVar21 + 1) + -1;
    if (*(int *)(puVar21 + 1) == 0) {
      iVar7 = 0;
    }
    if ((local_d0 != 0) || (iVar22 = 1, iVar7 == 0)) {
      iVar22 = 0;
    }
    local_e8 = pvVar23;
    local_e0._4_4_ = iVar24;
    if (iVar24 < iVar22 + iVar7 + local_d0) {
      local_e0._0_4_ = local_d0;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
      local_d0 = (int)local_e0;
    }
    pvVar23 = (void *)*puVar21;
    local_d8 = local_e8;
    local_cc = local_e0._4_4_;
    if (iVar7 != 0) {
      local_e0._0_4_ = iVar7 + (uint)(local_d0 == 0) + local_d0;
      if (local_e0._4_4_ < (int)local_e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,local_d0);
      }
      iVar22 = local_e0._4_4_;
      iVar24 = (int)local_e0;
      pvVar4 = local_e8;
      pvVar3 = (void *)((longlong)local_e8 + ((longlong)local_d0 - (ulonglong)(local_d0 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,pvVar23,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)pvVar3 + (longlong)iVar7 * 2) = 0;
      local_d8 = pvVar4;
      local_cc = iVar22;
      local_d0 = iVar24;
    }
    local_e8 = (void *)0x0;
    local_e0 = 0;
  }
  plVar9 = (longlong *)0x0;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_1415c92e0(&local_d8,&local_d8);
  plVar11 = (longlong *)operator_new(0x18);
  iVar7 = 0;
  plVar13 = plVar9;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *plVar11 = (longlong)&PTR_LAB_144177cd8;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
    plVar11[2] = param_1 + 0x38;
    plVar13 = plVar11;
  }
  *(longlong **)(param_1 + 0x80) = plVar13;
  plVar11 = (longlong *)operator_new(0x28);
  plVar13 = plVar9;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *plVar11 = (longlong)&PTR_LAB_144177ca8;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *(undefined4 *)(plVar11 + 4) = 0;
    *(undefined4 *)((longlong)plVar11 + 0x24) = 0;
    plVar13 = plVar11;
  }
  *(longlong **)(param_1 + 0x78) = plVar13;
  FUN_14098a390(plVar13,&local_res8,&local_d8,*(undefined8 *)(param_1 + 0x80));
  iVar22 = iStackX_c;
  iVar24 = local_res8;
  uVar18 = CONCAT44(iStackX_c,local_res8);
  if ((local_res8 == DAT_1468b5ca0) && (iStackX_c == DAT_1468b5ca4)) {
    uVar17 = 0;
    goto LAB_14098b083;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x38);
    iVar7 = *(int *)(param_1 + 0x40);
  }
  iVar20 = DAT_1464ca214 * iVar22 * iVar24;
  iVar6 = iVar7 + iVar20;
  *(int *)(param_1 + 0x40) = iVar6;
  if (*(int *)(param_1 + 0x44) < iVar6) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x38);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar7 + *(longlong *)(param_1 + 0x38)),0,(longlong)iVar20);
  if (*(int *)(param_1 + 0x70) < 1) {
    lVar10 = operator_new(0x78);
    plVar13 = plVar9;
    if (lVar10 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      plVar13 = (longlong *)FUN_1427ee790(lVar10,iVar24,iVar22,2,&local_58,0x101,1);
    }
    plVar15 = (longlong *)operator_new(0x18);
    plVar11 = plVar9;
    if (plVar15 != (longlong *)0x0) {
      *(undefined4 *)(plVar15 + 1) = 1;
      *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
      *plVar15 = (longlong)&PTR_FUN_143fd0100;
      plVar15[2] = (longlong)plVar13;
      plVar11 = plVar15;
    }
    pplVar1 = (longlong **)(param_1 + 0x58);
    local_b8 = plVar13;
    local_b0 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar13,plVar13);
    if (pplVar1 != &local_b8) {
      *pplVar1 = plVar13;
      local_b8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,&local_b0);
      plVar11 = local_b0;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar11 + 1;
      lVar10 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar19 = (int *)((longlong)plVar11 + 0xc);
        iVar7 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      plVar9 = *pplVar1;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_a8);
      (**(code **)(plVar9[4] + 0x28))(plVar9 + 4);
      QueryPerformanceCounter(&local_res20);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_a8._0_4_);
    }
    else {
      plVar13 = *pplVar1;
      pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar11 = TlsGetValue(*pDVar12);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = 0;
          plVar11[1] = 0;
          *(undefined4 *)(plVar11 + 2) = 0;
          plVar9 = plVar11;
        }
        TlsSetValue(*pDVar12,plVar9);
        plVar11 = plVar9;
      }
      plVar9 = (longlong *)plVar11[1];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)*plVar11;
        if (plVar9 == (longlong *)0x0) {
          lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
          plVar11[1] = lVar10;
          if (lVar10 == 0) {
            puVar21 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar11[1] = (longlong)puVar21;
            lVar10 = 0x1f;
            do {
              puVar2 = puVar21 + 0x20;
              *puVar21 = puVar2;
              lVar10 = lVar10 + -1;
              puVar21 = puVar2;
            } while (lVar10 != 0);
            *puVar2 = 0;
          }
          plVar9 = (longlong *)plVar11[1];
          iVar7 = 0x20;
          *(undefined4 *)(plVar11 + 2) = 0x20;
        }
        else {
          iVar7 = 0x20;
          plVar11[1] = (longlong)plVar9;
          *(undefined4 *)(plVar11 + 2) = 0x20;
          *plVar11 = 0;
        }
      }
      else {
        iVar7 = (int)plVar11[2];
      }
      plVar11[1] = *plVar9;
      *(int *)(plVar11 + 2) = iVar7 + -1;
      *plVar9 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar9 + 1) = 0xff;
      local_78 = 0;
      local_70 = 0;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144177d48;
      *(undefined1 *)(plVar9 + 3) = 0;
      plVar9[4] = 0;
      plVar9[2] = (longlong)plVar13;
      lVar10 = plVar9[4];
      piVar19 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar19 = *piVar19 + 1;
        UNLOCK();
      }
      FUN_140445100(plVar9,0,0xff,1);
LAB_14098b03a:
      if (lVar10 != 0) {
        LOCK();
        iVar7 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FGraphEvent::Recycle(lVar10);
        }
      }
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x68);
    lVar16 = (longlong)*(int *)(param_1 + 0x70);
    lVar14 = *(longlong *)(lVar10 + -0x10 + lVar16 * 0x10);
    plVar11 = *(longlong **)(lVar10 + -8 + lVar16 * 0x10);
    *(undefined8 *)(lVar10 + -8 + lVar16 * 0x10) = 0;
    *(undefined8 *)(lVar10 + -0x10 + lVar16 * 0x10) = 0;
    local_c8 = lVar14;
    local_c0 = plVar11;
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 0x68,*(int *)(param_1 + 0x70) + -1,1,1);
    plVar13 = (longlong *)(param_1 + 0x58);
    if (plVar13 != &local_c8) {
      *plVar13 = lVar14;
      local_c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,&local_c0);
      plVar11 = local_c0;
    }
    plVar15 = local_c0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar11 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar19 = (int *)((longlong)plVar15 + 0xc);
        iVar7 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
      uVar18 = CONCAT44(iStackX_c,local_res8);
      iVar22 = iStackX_c;
    }
    iVar7 = (*(code *)**(undefined8 **)*plVar13)();
    if ((iVar7 != (int)uVar18) ||
       (iVar7 = (**(code **)(*(longlong *)*plVar13 + 8))(), iVar7 != iVar22)) {
      if ((DAT_146ac3ac5 != '\0') ||
         (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 == '\0' && (DAT_1468c21ae != '\0')) &&
          (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))) {
        lVar10 = *plVar13;
        pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar13 = TlsGetValue(*pDVar12);
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)operator_new(0x18);
          if (plVar13 != (longlong *)0x0) {
            *plVar13 = 0;
            plVar13[1] = 0;
            *(undefined4 *)(plVar13 + 2) = 0;
            plVar9 = plVar13;
          }
          TlsSetValue(*pDVar12,plVar9);
          plVar13 = plVar9;
        }
        plVar9 = (longlong *)plVar13[1];
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)*plVar13;
          if (plVar9 == (longlong *)0x0) {
            lVar14 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
            plVar13[1] = lVar14;
            if (lVar14 == 0) {
              puVar21 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar13[1] = (longlong)puVar21;
              lVar14 = 0x1f;
              do {
                puVar2 = puVar21 + 0x20;
                *puVar21 = puVar2;
                lVar14 = lVar14 + -1;
                puVar21 = puVar2;
              } while (lVar14 != 0);
              *puVar2 = 0;
            }
            plVar9 = (longlong *)plVar13[1];
            iVar7 = 0x20;
            *(undefined4 *)(plVar13 + 2) = 0x20;
          }
          else {
            iVar7 = 0x20;
            plVar13[1] = (longlong)plVar9;
            *(undefined4 *)(plVar13 + 2) = 0x20;
            *plVar13 = 0;
          }
        }
        else {
          iVar7 = (int)plVar13[2];
        }
        plVar13[1] = *plVar9;
        *(int *)(plVar13 + 2) = iVar7 + -1;
        *plVar9 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar9 + 1) = 0xff;
        local_88 = 0;
        local_80 = 0;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *plVar9 = (longlong)&PTR_FUN_144177d38;
        *(undefined1 *)(plVar9 + 4) = 0;
        plVar9[5] = 0;
        plVar9[3] = uVar18;
        plVar9[2] = lVar10;
        lVar10 = plVar9[5];
        piVar19 = (int *)(lVar10 + 0x48);
        if (lVar10 != 0) {
          LOCK();
          *piVar19 = *piVar19 + 1;
          UNLOCK();
        }
        FUN_1409421c0(plVar9,0,0xff,1);
        goto LAB_14098b03a;
      }
      lVar10 = *plVar13;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      FSlateTexture2DRHIRef::Resize(lVar10,uVar18 & 0xffffffff,iVar22);
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res18._0_4_);
    }
  }
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x10);
  (**(code **)(*plVar9 + 0x48))(plVar9,&DAT_145ac6160,&local_a0);
  PropVariantClear((PROPVARIANT *)&local_a0);
  uVar17 = 1;
LAB_14098b083:
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar17;
}



// FUNCTION 14098b130 Release body=44 status=ok
// SIG undefined Release(void)

int FSampleGrabberCallback::Release(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if ((iVar3 == 0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x58))(param_1,(int)lVar2);
  }
  return iVar3;
}



// FUNCTION 14098b160 Release body=44 status=ok
// SIG undefined Release(void)

int FVideoPlayer::Release(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if ((iVar3 == 0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x28))(param_1,(int)lVar2);
  }
  return iVar3;
}



// FUNCTION 14098b190 FUN_14098b190 body=1412 status=ok
// SIG undefined FUN_14098b190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14098b190(longlong *param_1,uint param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  void *_Src;
  bool bVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  wint_t *pwVar11;
  longlong *plVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined2 *puVar15;
  char *pcVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_b8;
  int local_b0;
  ushort *local_a8;
  int local_a0;
  int local_98;
  uint local_94;
  longlong *local_90;
  undefined2 *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ushort *local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  wint_t local_40 [4];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  puVar13 = (ushort *)0x0;
  local_b8 = 0;
  local_94 = param_2;
  local_70 = param_1;
  lVar8 = FInternationalization::Get();
  plVar18 = *(longlong **)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x28);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  local_68 = plVar18;
  puVar9 = (undefined8 *)FUN_140511b50(uVar3);
  local_a8 = (ushort *)0x0;
  local_b0 = *(int *)(puVar9 + 1);
  lVar8 = (longlong)local_b0;
  _Src = (void *)*puVar9;
  local_a0 = local_b0;
  if (local_b0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_b0,0);
    puVar13 = local_a8;
    _guard_xfg_dispatch_icall_nop(local_a8,_Src,lVar8 * 2);
  }
  pcVar16 = "zh";
  puVar14 = &DAT_143f3eda8;
  local_b0 = local_a0;
  if (local_a0 != 0) {
    puVar14 = puVar13;
  }
  do {
    uVar2 = *puVar14;
    if ((uVar2 == 0) && (*pcVar16 == '\0')) goto LAB_14098b29b;
    if ((uint)uVar2 != (int)*pcVar16) {
      wVar5 = towlower(uVar2);
      iVar7 = tolower((int)*pcVar16);
      if ((uint)wVar5 != (int)(char)iVar7) break;
    }
    puVar14 = puVar14 + 1;
    pcVar16 = pcVar16 + 1;
  } while( true );
  if ((uint)wVar5 == (int)(char)iVar7) {
LAB_14098b29b:
    puVar9 = (undefined8 *)FUN_1415de5f0(uVar3);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (ushort *)*puVar9;
    }
    pcVar16 = "Hant";
    do {
      uVar2 = *puVar14;
      if ((uVar2 == 0) && (*pcVar16 == '\0')) goto LAB_14098b3e5;
      if ((uint)uVar2 != (int)*pcVar16) {
        wVar5 = towlower(uVar2);
        iVar7 = tolower((int)*pcVar16);
        if ((uint)wVar5 != (int)(char)iVar7) goto LAB_14098b301;
      }
      puVar14 = puVar14 + 1;
      pcVar16 = pcVar16 + 1;
    } while( true );
  }
  goto LAB_14098b447;
LAB_14098b301:
  if ((uint)wVar5 != (int)(char)iVar7) {
    puVar9 = (undefined8 *)FUN_1415de5f0(uVar3);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (ushort *)*puVar9;
    }
    pcVar16 = "Hans";
    do {
      uVar2 = *puVar14;
      if ((uVar2 == 0) && (*pcVar16 == '\0')) goto LAB_14098b447;
      if ((uint)uVar2 != (int)*pcVar16) {
        wVar5 = towlower(uVar2);
        iVar7 = tolower((int)*pcVar16);
        if ((uint)wVar5 != (int)(char)iVar7) goto LAB_14098b371;
      }
      puVar14 = puVar14 + 1;
      pcVar16 = pcVar16 + 1;
    } while( true );
  }
LAB_14098b3e5:
  local_58 = 3;
  local_60 = (ushort *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
  puVar14 = local_60;
  local_c8 = CONCAT62(local_c8._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_60,3,&DAT_144177bac);
  if (puVar13 != (ushort *)0x0) {
    FMemory::Free(puVar13);
  }
  local_b0 = (int)local_58;
  local_a0 = (int)local_58;
  local_a8 = puVar14;
  goto LAB_14098b447;
LAB_14098b3e1:
  if ((uint)wVar5 != (int)(char)iVar7) goto LAB_14098b3e5;
  goto LAB_14098b447;
LAB_14098b569:
  uVar19 = local_b8;
  if (wVar5 != wVar6) {
LAB_14098b577:
    uVar19 = local_b8;
    if (uVar10 != 0xffffffff) goto LAB_14098b63a;
    if (-1 < iVar7) {
      uVar19 = local_b8 | 1;
      local_80 = 3;
      local_88 = (undefined2 *)0x0;
      local_b8 = uVar19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      puVar17 = local_88;
      local_c8 = CONCAT62(local_c8._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_88,3,&DAT_144177be4);
      puVar15 = &DAT_143f3eda8;
      if ((int)local_80 != 0) {
        puVar15 = puVar17;
      }
      pwVar11 = local_40;
      do {
        wVar5 = *(wint_t *)(((longlong)puVar15 - (longlong)local_40) + (longlong)pwVar11);
        if ((wVar5 == 0) && (*pwVar11 == 0)) break;
        if (wVar5 != *pwVar11) {
          wVar5 = towlower(wVar5);
          wVar6 = towlower(*pwVar11);
          if (wVar5 != wVar6) goto LAB_14098b620;
        }
        pwVar11 = pwVar11 + 1;
      } while( true );
    }
  }
LAB_14098b632:
  bVar4 = true;
  goto LAB_14098b63c;
LAB_14098b620:
  if (wVar5 == wVar6) {
    bVar4 = true;
    goto LAB_14098b63c;
  }
LAB_14098b63a:
  bVar4 = false;
LAB_14098b63c:
  if (((uVar19 & 1) != 0) && (local_b8 = uVar19 & 0xfffffffe, puVar17 != (undefined2 *)0x0)) {
    FMemory::Free(puVar17);
  }
  plVar12 = local_70;
  uVar19 = local_94;
  if (bVar4) {
    uVar10 = uVar20;
  }
LAB_14098b667:
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
  uVar20 = uVar20 + 1;
  if (uVar19 <= uVar20) goto code_r0x00014098b686;
  goto LAB_14098b470;
code_r0x00014098b686:
  plVar18 = local_68;
  if (uVar10 != 0xffffffff) {
    (**(code **)(*plVar12 + 0x118))(plVar12,uVar10);
    plVar18 = local_68;
  }
  goto LAB_14098b6a4;
LAB_14098b371:
  if ((uint)wVar5 != (int)(char)iVar7) {
    puVar9 = (undefined8 *)FUN_140572fd0(uVar3);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (ushort *)*puVar9;
    }
    pcVar16 = "CN";
    do {
      uVar2 = *puVar14;
      if ((uVar2 == 0) && (*pcVar16 == '\0')) break;
      if ((uint)uVar2 != (int)*pcVar16) {
        wVar5 = towlower(uVar2);
        iVar7 = tolower((int)*pcVar16);
        if ((uint)wVar5 != (int)(char)iVar7) goto LAB_14098b3e1;
      }
      puVar14 = puVar14 + 1;
      pcVar16 = pcVar16 + 1;
    } while( true );
  }
LAB_14098b447:
  uVar20 = 0;
  uVar10 = 0xffffffff;
  plVar12 = local_70;
  puVar17 = local_88;
  uVar19 = local_94;
  if (local_94 != 0) {
LAB_14098b470:
    puVar13 = local_a8;
    local_98 = 0;
    local_90 = (longlong *)0x0;
    iVar7 = (**(code **)(*plVar12 + 0x110))(plVar12,uVar20,&local_98,&local_90);
    if (-1 < iVar7) {
      local_78 = (longlong *)0x0;
      (**(code **)(*local_90 + 0x110))(local_90,&local_78);
      (**(code **)(*local_78 + 0x40))(local_78,&local_50);
      if ((local_50 != 0x10000073647561) || (local_48 != 0x719b3800aa000080)) goto LAB_14098b667;
      if (local_98 != 0) {
        (**(code **)(*plVar12 + 0x120))(plVar12,uVar20);
      }
      local_c8 = 0;
      iVar7 = (**(code **)(*local_90 + 0x60))(local_90,&DAT_144159230,local_40,3);
      if (-1 < iVar7) {
        puVar14 = &DAT_143f3eda8;
        if (local_b0 != 0) {
          puVar14 = puVar13;
        }
        pwVar11 = local_40;
        do {
          wVar5 = *(wint_t *)(((longlong)puVar14 - (longlong)local_40) + (longlong)pwVar11);
          if ((wVar5 == 0) && (uVar19 = local_b8, *pwVar11 == 0)) goto LAB_14098b632;
          if (wVar5 != *pwVar11) {
            wVar5 = towlower(wVar5);
            wVar6 = towlower(*pwVar11);
            if (wVar5 != wVar6) goto LAB_14098b569;
          }
          pwVar11 = pwVar11 + 1;
        } while( true );
      }
      goto LAB_14098b577;
    }
    goto LAB_14098b667;
  }
LAB_14098b6a4:
  if (local_a8 != (ushort *)0x0) {
    FMemory::Free(local_a8);
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar18 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  return;
}



// FUNCTION 14098b720 Shutdown body=147 status=ok
// SIG undefined Shutdown(void)

void FVideoPlayer::Shutdown(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(), -1 < iVar1)) {
    LOCK();
    bVar2 = *(int *)(param_1 + 0x24) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0x24) = 0;
    }
    UNLOCK();
    while (bVar2) {
      FUN_1416b1760(0x3c23d70a);
      LOCK();
      bVar2 = *(int *)(param_1 + 0x24) == 0;
      if (bVar2) {
        *(int *)(param_1 + 0x24) = 0;
      }
      UNLOCK();
    }
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14098b7c0 FUN_14098b7c0 body=913 status=ok
// SIG undefined FUN_14098b7c0(void)

ulonglong FUN_14098b7c0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  void *_Dst;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar15;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar12 = 0;
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != (longlong *)0x0) {
    if ((char)plVar2[9] == '\0') {
      (**(code **)(plVar2[4] + 0x28))(plVar2 + 4);
    }
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + 0xc);
    LOCK();
    uVar13 = *puVar1;
    if (uVar13 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar13;
    }
    UNLOCK();
    if (uVar13 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1468643b4) &&
         (_Init_thread_header(&DAT_1468643b4), DAT_1468643b4 == -1)) {
        uVar9 = FCommandLine::Get();
        DAT_1468643b0 = FParse::Param(uVar9);
        _Init_thread_footer(&DAT_1468643b4);
      }
      lVar14 = DAT_1468643a8;
      if (DAT_1468643b0 == '\0') {
        cVar3 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar4 = GetCurrentThreadId();
          uVar8 = 4;
          if (DVar4 == DAT_1468c21c0) goto LAB_14098b898;
        }
        else {
LAB_14098b898:
          uVar8 = uVar12;
        }
        if (*(int *)(lVar14 + uVar8) == 0) goto LAB_14098b96f;
        iVar5 = (**(code **)*plVar2)(plVar2);
        local_48 = 0;
        local_40 = 0;
        iVar5 = iVar5 * DAT_1464ca214;
        local_38 = (**(code **)*plVar2)(plVar2);
        lVar14 = *(longlong *)(param_1 + 0x38);
        iVar6 = (**(code **)(*plVar2 + 8))(plVar2);
        if (iVar6 != 0) {
          do {
            uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
            iVar11 = (int)uVar12;
            local_44 = iVar11;
            iVar6 = (**(code **)(*plVar2 + 8))(plVar2);
            uVar13 = (uint)(0x400000 / (ulonglong)(iVar5 + 0x1ffU & 0xfffffe00));
            in_stack_ffffffffffffff70 = CONCAT44(uVar15,iVar5);
            local_34 = uVar13;
            if ((uint)(iVar6 - iVar11) <= uVar13) {
              local_34 = iVar6 - iVar11;
            }
            (**(code **)(*DAT_146ab6358 + 0x590))
                      (DAT_146ab6358,&DAT_146ab6e78,plVar2[1],0,&local_48,in_stack_ffffffffffffff70,
                       lVar14);
            uVar12 = (ulonglong)(iVar11 + uVar13);
            lVar14 = lVar14 + (ulonglong)(local_34 * iVar5);
            uVar7 = (**(code **)(*plVar2 + 8))(plVar2);
          } while (iVar11 + uVar13 < uVar7);
        }
      }
      else {
LAB_14098b96f:
        uVar12 = CONCAT44(uVar15,1);
        _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                                 (DAT_146ab6358,&DAT_146ab6e78,plVar2[1],0,uVar12,local_res8,
                                  in_stack_ffffffffffffff78 & 0xffffffffffffff00,1);
        _guard_xfg_dispatch_icall_nop
                  (_Dst,*(void **)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x40));
        (**(code **)(*DAT_146ab6358 + 0x588))
                  (DAT_146ab6358,&DAT_146ab6e78,plVar2[1],0,uVar12 & 0xffffffffffffff00,1);
      }
      lVar14 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
      if (lVar14 == 0) {
        local_78 = *(undefined8 *)(param_1 + 0x58);
        local_70 = *(longlong *)(param_1 + 0x60);
        if (local_70 != 0) {
          LOCK();
          *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
          UNLOCK();
        }
        FMovieViewport::SetTexture(*(undefined8 *)(param_1 + 0x48),&local_78);
      }
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + 0xc);
      uVar13 = *puVar1;
      *puVar1 = 0;
      in_RAX = (ulonglong)uVar13;
      UNLOCK();
    }
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 0x20);
    LOCK();
    uVar13 = *puVar1;
    if (uVar13 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar13;
    }
    UNLOCK();
    if (uVar13 != 0) {
      FMediaFoundationMovieStreamer::CloseMovie(param_1);
      iVar5 = *(int *)(param_1 + 0x34) + 1;
      if (iVar5 < *(int *)(param_1 + 0x28)) {
        *(int *)(param_1 + 0x34) = iVar5;
        in_RAX = FUN_14098a830(param_1);
        if ((char)in_RAX == '\0') goto LAB_14098bab0;
        local_68 = *(undefined8 *)(param_1 + 0x58);
        local_60 = *(longlong *)(param_1 + 0x60);
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + 1;
          UNLOCK();
        }
        puVar10 = &local_68;
      }
      else {
        if (*(char *)(param_1 + 0x30) == '\0') {
          return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
        }
        iVar5 = *(int *)(param_1 + 0x28) + -1;
        if (*(char *)(param_1 + 0x30) != '\x02') {
          iVar5 = 0;
        }
        *(int *)(param_1 + 0x34) = iVar5;
        in_RAX = FUN_14098a830(param_1);
        if ((char)in_RAX == '\0') goto LAB_14098bab0;
        local_58 = *(undefined8 *)(param_1 + 0x58);
        local_50 = *(longlong *)(param_1 + 0x60);
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
          UNLOCK();
        }
        puVar10 = &local_58;
      }
      in_RAX = FMovieViewport::SetTexture(*(undefined8 *)(param_1 + 0x48),puVar10);
    }
  }
LAB_14098bab0:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14098bb60 StartupModule body=23 status=ok
// SIG undefined StartupModule(void)

void FVaRestPlugin::StartupModule(void)

{
  UPlayFabJsonObject::GetPrivateStaticClass();
  UVaRestJsonValue::GetPrivateStaticClass();
  UPropertyValue::GetPrivateStaticClass();
  return;
}



// FUNCTION 14098bb80 FUN_14098bb80 body=192 status=ok
// SIG undefined FUN_14098bb80(void)

undefined8 * FUN_14098bb80(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_3;
    *plVar3 = (longlong)&PTR_GetPoolName_143f4c9a8;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  return param_2;
}



// FUNCTION 14098bc40 FUN_14098bc40 body=723 status=ok
// SIG undefined FUN_14098bc40(void)

uint * FUN_14098bc40(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  ulonglong *_Src;
  uint uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar9 * 0x40 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar9;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  puVar3 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)(int)uVar9 * 0x40 + *param_1);
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  _Src[1] = *puVar3;
  _Src[2] = puVar3[1];
  *(int *)(_Src + 3) = (int)puVar3[2];
  *(undefined4 *)((longlong)_Src + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0x14);
  _Src[4] = puVar3[3];
  _Src[5] = puVar3[4];
  _Src[6] = puVar3[5];
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    uVar5 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar8 * 0x40 + *param_1),_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar9,1);
      *param_2 = uVar5;
      goto LAB_14098bee5;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(iVar10 + uVar5) ^ uVar5 >> 0xd;
    uVar13 = (iVar10 - uVar5) - uVar12 ^ uVar12 >> 0xc;
    uVar5 = (uVar5 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar12 = (uVar12 - uVar5) - uVar13 ^ uVar5 >> 5;
    uVar13 = (uVar13 - uVar5) - uVar12 ^ uVar12 >> 3;
    uVar5 = (uVar5 - uVar13) - uVar12 ^ uVar13 << 10;
    uVar13 = ((uVar12 - uVar5) - uVar13 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x3c) = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14098bee5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14098bf20 GetKeys<FDefaultAllocator> body=596 status=ok
// SIG undefined GetKeys<FDefaultAllocator>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
TMapBase<FString,TSharedPtr<FLocMetadataValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,0>,0>_>
::GetKeys<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puStack_a8 = (uint *)(param_1 + 2);
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar1 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar1 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puStack_a8;
    }
    uVar2 = *puVar9;
    local_e8._0_4_ = 0;
    uStack_d0 = 0;
    while (uVar2 == 0) {
      lVar8 = (longlong)(int)local_e8;
      uStack_d0 = uStack_d0 + 0x20;
      iVar7 = (int)local_e8 + 1;
      bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_e8;
      local_e8._0_4_ = iVar7;
      if (bVar4) goto LAB_14098c021;
      uVar2 = puVar9[lVar8 + 1];
    }
    local_e8._4_4_ = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_d8._4_4_ = (uStack_d0 - iVar7) + 0x1f;
    if (iVar1 < local_d8._4_4_) {
LAB_14098c021:
      local_d8._4_4_ = iVar1;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  iStack_98 = uStack_d0;
  iStack_b0 = (int)local_e8;
  uStack_ac = local_e8._4_4_;
  iStack_e0 = (int)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar4 = local_d8._4_4_ < iVar1;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar4) {
    do {
      plVar5 = local_e8;
      lVar8 = (longlong)iStack_cc * 0x28;
      piVar6 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                (&local_88,local_c0,*local_e8 + lVar8);
      if (*piVar6 == -1) {
        iVar1 = (int)param_2[1];
        lVar3 = *plVar5;
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
        }
        FString::FString((longlong)iVar1 * 0x10 + *param_2,lVar8 + lVar3);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&local_88,local_bc,*plVar5 + lVar8,0);
      }
      uStack_d0 = uStack_d0 & ~uStack_dc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e0);
    } while (iStack_cc < (int)local_d8[6]);
  }
  lVar8 = param_2[1];
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return (int)lVar8;
}



// FUNCTION 14098c180 NewObject<UPlayFabJsonObject> body=89 status=ok
// SIG undefined NewObject<UPlayFabJsonObject>(void)

void NewObject<UPlayFabJsonObject>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UPlayFabJsonObject::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14098c1e0 NewObject<UVaRestJsonValue> body=89 status=ok
// SIG undefined NewObject<UVaRestJsonValue>(void)

void NewObject<UVaRestJsonValue>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UVaRestJsonValue::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}


