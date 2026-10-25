// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1420a14b0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f967e8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1500 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96928;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1550 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96a28;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a15a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f968a8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a15f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f969e8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1640 FUN_1420a1640 body=320 status=ok
// SIG undefined FUN_1420a1640(void)

undefined8 * FUN_1420a1640(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144f96270;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xf,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x10,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x11,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x12,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x13,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x16,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x17,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x17);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x16);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x14);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x13);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x12);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x11);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1420a1780 FUN_1420a1780 body=98 status=ok
// SIG undefined FUN_1420a1780(void)

undefined8 * FUN_1420a1780(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144f95ff0;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1420a17f0 FUN_1420a17f0 body=160 status=ok
// SIG undefined FUN_1420a17f0(void)

void FUN_1420a17f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 200);
  if (*(int *)(lVar3 + 0x300) <= param_3) {
    iVar4 = param_3 + 1;
    plVar1 = (longlong *)(lVar3 + 0x2f8);
    iVar2 = *(int *)(lVar3 + 0x300);
    if (iVar2 < iVar4) {
      *(int *)(lVar3 + 0x300) = iVar4;
      if (*(int *)(lVar3 + 0x304) < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar2 * 8),0,(longlong)(iVar4 - iVar2) << 3);
    }
    else if ((iVar4 < iVar2) && (iVar4 != iVar2)) {
      *(int *)(lVar3 + 0x300) = iVar4;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x2f8) + (longlong)param_3 * 8) = param_2;
  return;
}



// FUNCTION 1420a1890 FUN_1420a1890 body=664 status=ok
// SIG undefined FUN_1420a1890(void)

void FUN_1420a1890(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 uVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  longlong local_38;
  longlong lStack_30;
  longlong *local_28;
  longlong lStack_20;
  
  if (param_3 != '\0') {
    iVar12 = *(int *)(param_1 + 0x298);
    *(int *)(param_1 + 0x298) = iVar12 + 1;
    if (*(int *)(param_1 + 0x29c) < iVar12 + 1) {
      TArray<FRenderThreadUpdateContext,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                (param_1 + 0x250,iVar12);
    }
    lVar13 = param_2[1];
    lVar14 = *(longlong *)(param_1 + 0x290);
    if (*(longlong *)(param_1 + 0x290) == 0) {
      lVar14 = param_1 + 0x250;
    }
    plVar10 = (longlong *)(lVar14 + (longlong)iVar12 * 0x20);
    *plVar10 = *param_2;
    plVar10[1] = lVar13;
    lVar13 = param_2[3];
    plVar10 = (longlong *)(lVar14 + 0x10 + (longlong)iVar12 * 0x20);
    *plVar10 = param_2[2];
    plVar10[1] = lVar13;
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    local_38 = *param_2;
    lStack_30 = param_2[1];
    local_28 = (longlong *)param_2[2];
    lStack_20 = param_2[3];
    uVar7 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_40);
    (**(code **)(*local_28 + 0x20))(local_28,uVar7,lStack_30,local_38,(char)lStack_20);
    QueryPerformanceCounter(&local_48);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_48.s.LowPart - local_40._0_4_);
    return;
  }
  pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar9 = TlsGetValue(*pDVar8);
  plVar10 = (longlong *)0x0;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      *(undefined4 *)(plVar9 + 2) = 0;
      plVar10 = plVar9;
    }
    TlsSetValue(*pDVar8,plVar10);
    plVar9 = plVar10;
  }
  plVar10 = (longlong *)plVar9[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar9;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
      plVar9[1] = (longlong)plVar10;
      if (plVar10 == (longlong *)0x0) {
        puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar9[1] = (longlong)puVar11;
        lVar13 = 0x1f;
        do {
          puVar2 = puVar11 + 0x20;
          *puVar11 = puVar2;
          lVar13 = lVar13 + -1;
          puVar11 = puVar2;
        } while (lVar13 != 0);
        *puVar2 = 0;
        plVar10 = (longlong *)plVar9[1];
      }
      iVar12 = 0x20;
      *(undefined4 *)(plVar9 + 2) = 0x20;
    }
    else {
      iVar12 = 0x20;
      plVar9[1] = (longlong)plVar10;
      *(undefined4 *)(plVar9 + 2) = 0x20;
      *plVar9 = 0;
    }
  }
  else {
    iVar12 = (int)plVar9[2];
  }
  plVar9[1] = *plVar10;
  *(int *)(plVar9 + 2) = iVar12 + -1;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  local_38 = 0;
  local_28 = (longlong *)0x0;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *(undefined1 *)(plVar10 + 6) = 0;
  *plVar10 = (longlong)&PTR_FUN_144f96670;
  plVar10[7] = 0;
  lVar13 = param_2[1];
  plVar10[2] = *param_2;
  plVar10[3] = lVar13;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar13 = param_2[3];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(plVar10 + 4) = (int)param_2[2];
  *(undefined4 *)((longlong)plVar10 + 0x24) = uVar3;
  *(int *)(plVar10 + 5) = (int)lVar13;
  *(undefined4 *)((longlong)plVar10 + 0x2c) = uVar4;
  lVar13 = plVar10[7];
  piVar1 = (int *)(lVar13 + 0x48);
  if (lVar13 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_14048a640(plVar10,0,0xff,1);
  if (lVar13 != 0) {
    LOCK();
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FGraphEvent::Recycle(lVar13);
    }
  }
  return;
}



// FUNCTION 1420a1b30 AdjustProjectionMatrixForRHI body=740 status=ok
// SIG undefined AdjustProjectionMatrixForRHI(void)

float * AdjustProjectionMatrixForRHI(float *param_1,float *param_2)

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
  
  fVar3 = DAT_146ab62f8;
  fVar12 = *param_2;
  fVar20 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar4 = 1.0 - DAT_146ab62f8;
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar10 = param_2[6];
  fVar11 = param_2[7];
  fVar17 = fVar20 * 0.0 + fVar12 * 1.0 + fVar1 * 0.0 + fVar2 * 0.0;
  fVar18 = fVar20 * DAT_1464c9c24 + fVar12 * 0.0 + fVar1 * 0.0 + fVar2 * 0.0;
  fVar19 = fVar20 * 0.0 + fVar12 * 0.0 + fVar1 * fVar4 + fVar2 * 0.0;
  fVar21 = fVar20 * 0.0 + fVar12 * 0.0 + fVar1 * 0.0 + fVar2 * 1.0;
  fVar5 = fVar9 * 0.0 + fVar8 * 1.0 + fVar10 * 0.0 + fVar11 * 0.0;
  fVar6 = fVar9 * DAT_1464c9c24 + fVar8 * 0.0 + fVar10 * 0.0 + fVar11 * 0.0;
  fVar7 = fVar9 * 0.0 + fVar8 * 0.0 + fVar10 * fVar4 + fVar11 * 0.0;
  fVar8 = fVar9 * 0.0 + fVar8 * 0.0 + fVar10 * 0.0 + fVar11 * 1.0;
  fVar12 = param_2[8];
  fVar20 = param_2[9];
  fVar1 = param_2[10];
  fVar2 = param_2[0xb];
  fVar13 = fVar20 * 0.0 + fVar12 * 1.0 + fVar1 * 0.0 + fVar2 * 0.0;
  fVar14 = fVar20 * DAT_1464c9c24 + fVar12 * 0.0 + fVar1 * 0.0 + fVar2 * 0.0;
  fVar15 = fVar20 * 0.0 + fVar12 * 0.0 + fVar1 * fVar4 + fVar2 * 0.0;
  fVar16 = fVar20 * 0.0 + fVar12 * 0.0 + fVar1 * 0.0 + fVar2 * 1.0;
  fVar12 = param_2[0xc];
  fVar20 = param_2[0xd];
  fVar1 = param_2[0xe];
  fVar2 = param_2[0xf];
  fVar9 = fVar20 * 0.0 + fVar12 * 1.0 + fVar1 * 0.0 + fVar2 * 0.0;
  fVar10 = fVar20 * DAT_1464c9c24 + fVar12 * 0.0 + fVar1 * 0.0 + fVar2 * 0.0;
  fVar11 = fVar20 * 0.0 + fVar12 * 0.0 + fVar1 * fVar4 + fVar2 * 0.0;
  fVar12 = fVar20 * 0.0 + fVar12 * 0.0 + fVar1 * 0.0 + fVar2 * 1.0;
  fVar20 = fVar21 * DAT_146ab62f8;
  *param_1 = fVar18 * 0.0 + fVar17 * 1.0 + fVar19 * 0.0 + fVar21 * 0.0;
  param_1[1] = fVar18 * 1.0 + fVar17 * 0.0 + fVar19 * 0.0 + fVar21 * 0.0;
  param_1[2] = fVar18 * 0.0 + fVar17 * 0.0 + fVar19 * 1.0 + fVar20;
  param_1[3] = fVar18 * 0.0 + fVar17 * 0.0 + fVar19 * 0.0 + fVar21 * 1.0;
  param_1[4] = fVar6 * 0.0 + fVar5 * 1.0 + fVar7 * 0.0 + fVar8 * 0.0;
  param_1[5] = fVar6 * 1.0 + fVar5 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0;
  param_1[6] = fVar6 * 0.0 + fVar5 * 0.0 + fVar7 * 1.0 + fVar8 * fVar3;
  param_1[7] = fVar6 * 0.0 + fVar5 * 0.0 + fVar7 * 0.0 + fVar8 * 1.0;
  param_1[8] = fVar14 * 0.0 + fVar13 * 1.0 + fVar15 * 0.0 + fVar16 * 0.0;
  param_1[9] = fVar14 * 1.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar16 * 0.0;
  param_1[10] = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 1.0 + fVar16 * fVar3;
  param_1[0xb] = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar16 * 1.0;
  param_1[0xc] = fVar10 * 0.0 + fVar9 * 1.0 + fVar11 * 0.0 + fVar12 * 0.0;
  param_1[0xd] = fVar10 * 1.0 + fVar9 * 0.0 + fVar11 * 0.0 + fVar12 * 0.0;
  param_1[0xe] = fVar10 * 0.0 + fVar9 * 0.0 + fVar11 * 1.0 + fVar12 * fVar3;
  param_1[0xf] = fVar10 * 0.0 + fVar9 * 0.0 + fVar11 * 0.0 + fVar12 * 1.0;
  return param_1;
}



// FUNCTION 1420a1e20 FUN_1420a1e20 body=208 status=ok
// SIG undefined FUN_1420a1e20(void)

void FUN_1420a1e20(void)

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
  
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_1420a1e6a;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_1420a1e7b;
    }
LAB_1420a1e6a:
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FRHICommandList::BeginFrame(uVar9);
    return;
  }
LAB_1420a1e7b:
  plVar10 = (longlong *)FUN_1420a7e50(local_28,0,0xff);
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x18);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_140445370(lVar3,lVar4,(int)lVar6,1);
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



// FUNCTION 1420a1ef0 FUN_1420a1ef0 body=509 status=ok
// SIG undefined FUN_1420a1ef0(void)

void FUN_1420a1ef0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  
  param_1 = param_1 + -8;
  lVar3 = *(longlong *)(param_2 + 0x18);
  local_48 = (undefined4)param_1;
  uStack_40 = (undefined4)param_2;
  uStack_3c = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    local_20 = lVar3;
    local_30 = param_1;
    FUN_1420a9f30(&local_30,2,local_res8);
    return;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar8 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar8 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar8);
    plVar7 = plVar8;
  }
  plVar8 = (longlong *)plVar7[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar7;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
      plVar7[1] = (longlong)plVar8;
      if (plVar8 == (longlong *)0x0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar7[1] = (longlong)puVar9;
        lVar11 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar11 = lVar11 + -1;
          puVar9 = puVar2;
        } while (lVar11 != 0);
        *puVar2 = 0;
        plVar8 = (longlong *)plVar7[1];
      }
      iVar10 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar7[1] = (longlong)plVar8;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar10 = (int)plVar7[2];
  }
  plVar7[1] = *plVar8;
  *(int *)(plVar7 + 2) = iVar10 + -1;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  local_res18 = 0;
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
  *(undefined1 *)(plVar8 + 5) = 0;
  *plVar8 = (longlong)&PTR_FUN_144f966e8;
  plVar8[6] = 0;
  plVar8[2] = param_1;
  *(undefined4 *)(plVar8 + 3) = uStack_40;
  *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_3c;
  plVar8[4] = lVar3;
  lVar3 = plVar8[6];
  piVar1 = (int *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res10 = lVar3;
  FUN_14048a160(local_48,0,0xff,1);
  if (lVar3 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res10);
    }
  }
  return;
}



// FUNCTION 1420a20f0 BeginUpdate body=153 status=ok
// SIG undefined BeginUpdate(void)

undefined8 * FSlateUpdatableInstanceBuffer::BeginUpdate(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    puVar1[1] = uVar2;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DestroyObject_144f96da8;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar1;
  }
  *param_2 = puVar1;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
  return param_2;
}



// FUNCTION 1420a2190 FUN_1420a2190 body=7184 status=ok
// SIG undefined FUN_1420a2190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420a2190(longlong *param_1,longlong param_2,longlong *param_3,int *param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  longlong *local_400;
  float local_3f8;
  float local_3f0;
  float local_3e8;
  float local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined4 local_3c0;
  uint local_3b8;
  longlong local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  ulonglong *local_398;
  longlong *local_390;
  int local_388;
  int local_384;
  undefined8 local_380;
  undefined8 *local_378;
  undefined8 local_370;
  undefined8 *local_368;
  uint local_360;
  int local_35c;
  uint local_358;
  uint local_354;
  int local_350;
  int iStack_34c;
  longlong local_348;
  longlong *local_340;
  longlong local_338;
  float local_330;
  longlong *local_328;
  float local_318;
  undefined4 uStack_314;
  float fStack_310;
  float fStack_30c;
  float *local_308;
  int local_300;
  undefined4 local_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  int local_2d0;
  int local_2cc;
  longlong local_2c8;
  float *local_2c0;
  uint local_2b8;
  uint local_2b0 [2];
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int iStack_29c;
  int local_298;
  int iStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  int local_288;
  int iStack_284;
  int local_280;
  int iStack_27c;
  int local_278;
  int iStack_274;
  float local_268;
  float local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  longlong local_200;
  undefined8 *local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [16];
  longlong local_1b8;
  undefined8 *puStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  int local_164 [16];
  undefined1 auStack_124 [4];
  undefined8 local_120;
  undefined4 local_118;
  ulonglong local_114;
  undefined8 local_10c;
  undefined4 local_104;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  iVar5 = *param_4;
  fVar28 = (float)param_4[2];
  local_3b8 = 0;
  local_358 = (iVar5 + 1) / 2;
  local_330 = 0.0;
  local_308 = (float *)0x0;
  local_2fc = 0;
  local_2e0 = param_5;
  local_300 = (int)local_358 / 2;
  if ((local_358 & 1) != 0) {
    local_300 = (int)local_358 / 2 + 1;
  }
  local_3b0 = param_2;
  local_340 = param_1;
  local_328 = param_3;
  if (0 < local_300) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_308,0);
  }
  pfVar7 = (float *)GetWeightAndOffset(local_1d0);
  iVar20 = 3;
  fStack_310 = *pfVar7;
  fStack_30c = pfVar7[1];
  local_318 = 1.0 / SQRT(fVar28 * fVar28 * 6.2831855);
  uStack_314 = 0;
  *local_308 = local_318;
  local_308[1] = 0.0;
  local_308[2] = fStack_310;
  local_308[3] = fStack_30c;
  pfVar7 = local_308;
  if (3 < iVar5) {
    do {
      pfVar8 = (float *)GetWeightAndOffset(local_1c8);
      fVar28 = *pfVar8;
      fVar31 = pfVar8[1];
      pfVar8 = (float *)GetWeightAndOffset(&local_318);
      iVar20 = iVar20 + 4;
      local_2f8 = *pfVar8;
      fStack_2f4 = pfVar8[1];
      pfVar7[4] = local_2f8;
      pfVar7[5] = fStack_2f4;
      pfVar7[6] = fVar28;
      pfVar7[7] = fVar31;
      param_2 = local_3b0;
      pfVar7 = pfVar7 + 4;
      fStack_2f0 = fVar28;
      fStack_2ec = fVar31;
    } while (iVar20 < iVar5);
  }
  iVar5 = param_4[1];
  fVar28 = *(float *)((longlong)param_5 + 0x24) - *(float *)((longlong)param_5 + 0x1c);
  local_350 = (int)ROUND((*(float *)(param_5 + 4) - *(float *)(param_5 + 3)) +
                         (*(float *)(param_5 + 4) - *(float *)(param_5 + 3)) + 0.5) >> 1;
  iStack_34c = (int)ROUND(fVar28 + fVar28 + 0.5) >> 1;
  if (0 < iVar5) {
    local_350 = (local_350 + -1 + iVar5) / iVar5;
    iStack_34c = (iVar5 + -1 + iStack_34c) / iVar5;
  }
  lVar9 = *param_1;
  iVar20 = (int)param_5[5];
  if (local_350 <= (int)param_5[5]) {
    iVar20 = local_350;
  }
  iVar3 = *(int *)((longlong)param_5 + 0x2c);
  if (iStack_34c <= *(int *)((longlong)param_5 + 0x2c)) {
    iVar3 = iStack_34c;
  }
  local_380 = CONCAT44(iVar3,iVar20);
  local_370 = local_380;
  local_35c = iVar5;
  if ((((*(int *)(lVar9 + 100) < iVar20) || (*(int *)(lVar9 + 0x68) < iVar3)) ||
      ((*(int *)(lVar9 + 100) == DAT_1468b5ca0 && (*(int *)(lVar9 + 0x68) == DAT_1468b5ca4)))) ||
     (*(int *)(lVar9 + 0x58) == 0)) {
    if (*(char *)(lVar9 + 0x30) == '\0') {
      (**(code **)(*(longlong *)(lVar9 + 8) + 0x28))(lVar9 + 8);
    }
    FUN_1420bd830(lVar9,&local_380);
  }
  if (0 < iVar5) {
    local_408 = &local_370;
    FUN_1420aa230(param_1,param_2,param_3,param_5);
  }
  local_338 = FUN_141a156e0();
  if (local_338 != 0) {
    LOCK();
    *(int *)(local_338 + 8) = *(int *)(local_338 + 8) + 1;
    UNLOCK();
  }
  lVar9 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  plVar14 = (longlong *)0x0;
  local_1f0 = &DAT_146b09c50;
  local_1e8 = 0;
  plVar18 = (longlong *)(lVar9 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar18,&local_2d0,&local_1f0);
  plVar15 = plVar14;
  if (local_2d0 != -1) {
    plVar15 = (longlong *)((longlong)local_2d0 * 0x20 + *plVar18);
  }
  local_1d8 = 0;
  plVar10 = plVar15 + 2;
  if (plVar15 == (longlong *)0x0) {
    plVar10 = plVar14;
  }
  local_1e0 = &DAT_146ae4e40;
  local_348 = *plVar10;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar18,&local_2cc,&local_1e0);
  plVar15 = local_340;
  plVar10 = plVar14;
  if (local_2cc != -1) {
    plVar10 = (longlong *)((longlong)local_2cc * 0x20 + *plVar18);
  }
  local_2a8 = (int)param_5[5];
  local_2a4 = *(int *)((longlong)param_5 + 0x2c);
  plVar18 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar18 = plVar14;
  }
  lVar9 = *plVar18;
  iVar5 = (*(code *)**(undefined8 **)*local_340)();
  local_388 = iVar5;
  iVar20 = (**(code **)(*(longlong *)*plVar15 + 8))();
  local_384 = iVar20;
  lVar11 = (**(code **)(*param_3 + 0xe0))(param_3);
  local_2d8 = *(longlong *)(lVar11 + 0x30);
  if (local_2d8 != 0) {
    LOCK();
    *(int *)(local_2d8 + 8) = *(int *)(local_2d8 + 8) + 1;
    UNLOCK();
  }
  local_178 = 0;
  local_1b8 = 0;
  puStack_1b0 = (undefined8 *)0x0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_164[3] = 0;
  local_164[4] = 0;
  local_164[5] = 0;
  local_164[6] = 0;
  local_170 = 0;
  local_16c = 0x26;
  local_164[0] = 0;
  local_164[1] = 0;
  local_164[2] = 0;
  local_164[7] = 0;
  local_164[8] = 0;
  local_164[9] = 0;
  local_164[10] = 0;
  local_164[0xb] = 0;
  local_164[0xc] = 0;
  local_164[0xd] = 0;
  local_164[0xe] = 0;
  stack0xfffffffffffffed8 = 0;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_188 = FUN_1404a0ce0();
  uStack_180 = FUN_140985530();
  local_178 = FUN_1409853f0();
  local_398 = (ulonglong *)(param_2 + 0x30);
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar16 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(local_398);
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar16 + 5;
  }
  puVar24 = (ulonglong *)(param_2 + 0x30);
  *puVar24 = (ulonglong)puVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar16;
  *(undefined8 **)(param_2 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar16 + 2) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0;
  puVar16 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar16 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(puVar24);
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar16 + 5;
  }
  fVar28 = (float)iVar5;
  fVar31 = (float)iVar20;
  *(ulonglong *)(param_2 + 0x30) = (ulonglong)puVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  puVar12 = (undefined8 *)CONCAT44(uStack_314,local_318);
  **(undefined8 **)(param_2 + 8) = puVar16;
  *(undefined8 **)(param_2 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59420;
  puVar16[2] = 0;
  *(undefined4 *)(puVar16 + 3) = 0;
  *(int *)((longlong)puVar16 + 0x1c) = iVar5;
  puVar25 = (undefined8 *)CONCAT44(uStack_314,local_318);
  *(int *)(puVar16 + 4) = iVar20;
  puVar26 = (undefined8 *)CONCAT44(uStack_314,local_318);
  *(undefined4 *)((longlong)puVar16 + 0x24) = 0;
  puVar16 = (undefined8 *)CONCAT44(uStack_314,local_318);
  local_354 = 0;
  fVar34 = 1.0 / fVar28;
  fVar35 = 1.0 / fVar31;
  puVar24 = (ulonglong *)(param_2 + 0x30);
  local_330 = fVar31;
  local_2e8 = fVar28;
  do {
    if ((int)plVar14 == 0) {
      if (local_35c < 1) {
        uVar21 = local_3b8 | 2;
        puVar22 = (undefined8 *)*local_2e0;
        local_368 = puVar22;
        if (puVar22 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
        }
      }
      else {
        uVar21 = local_3b8 | 1;
        plVar18 = *(longlong **)(*local_340 + 0x50);
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)(*local_340 + 0x40);
        }
        puVar22 = (undefined8 *)*plVar18;
        local_378 = puVar22;
        if (puVar22 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
        }
      }
      if (puVar22 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
        UNLOCK();
      }
      local_3b8 = uVar21;
      if (((uVar21 & 2) != 0) &&
         (uVar21 = uVar21 & 0xfffffffd, local_3b8 = uVar21, local_368 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(local_368 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(local_368 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)local_368 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)local_368 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar6 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar11 + 8) = local_368;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*local_368)(local_368,1);
          }
        }
      }
      if (((uVar21 & 1) != 0) && (local_3b8 = uVar21 & 0xfffffffe, local_378 != (undefined8 *)0x0))
      {
        LOCK();
        piVar1 = (int *)(local_378 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(local_378 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)local_378 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)local_378 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar21 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar11 + 8) = local_378;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*local_378)(local_378,1);
          }
        }
      }
      lVar11 = *(longlong *)(*local_340 + 0x50);
      if (lVar11 == 0) {
        lVar11 = *local_340 + 0x40;
      }
      puVar2 = *(undefined8 **)(lVar11 + 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      local_3a8 = (longlong *)(*local_398 + 7 & 0xfffffffffffffff8);
      puVar13 = local_3a8 + 1;
      local_218 = puVar22;
      if ((undefined8 *)local_398[1] < puVar13) {
        FMemStackBase::AllocateNewChunk(local_398,0x10);
        local_3a8 = (longlong *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = local_3a8 + 1;
      }
      *local_398 = (ulonglong)puVar13;
      *local_3a8 = (longlong)local_218;
      puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar17 + 5;
      if ((undefined8 *)local_398[1] < puVar13) {
        FMemStackBase::AllocateNewChunk(local_398,0x30);
        puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar17 + 5;
      }
      *local_398 = (ulonglong)puVar13;
      *(int *)(local_3b0 + 0x14) = *(int *)(local_3b0 + 0x14) + 1;
      **(undefined8 **)(local_3b0 + 8) = puVar17;
      *(undefined8 **)(local_3b0 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *puVar17 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar17 + 2) = 1;
      puVar17[3] = local_3a8;
      *(undefined4 *)(puVar17 + 4) = 0;
      *(undefined1 *)((longlong)puVar17 + 0x24) = 0;
      local_3a8 = (longlong *)(*local_398 + 7 & 0xfffffffffffffff8);
      plVar18 = local_3a8 + 1;
      local_210 = puVar2;
      if ((longlong *)local_398[1] < plVar18) {
        FMemStackBase::AllocateNewChunk(local_398,0x10);
        local_3a8 = (longlong *)(*local_398 + 7 & 0xfffffffffffffff8);
        plVar18 = local_3a8 + 1;
      }
      *local_398 = (ulonglong)plVar18;
      *local_3a8 = (longlong)local_210;
      puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar17 + 5;
      if ((undefined8 *)local_398[1] < puVar13) {
        FMemStackBase::AllocateNewChunk(local_398,0x30);
        puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar17 + 5;
      }
      *local_398 = (ulonglong)puVar13;
      *(int *)(local_3b0 + 0x14) = *(int *)(local_3b0 + 0x14) + 1;
      **(undefined8 **)(local_3b0 + 8) = puVar17;
      *(undefined8 **)(local_3b0 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *puVar17 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar17 + 2) = 1;
      *(undefined4 *)(puVar17 + 4) = 1;
      puVar17[3] = local_3a8;
      *(undefined1 *)((longlong)puVar17 + 0x24) = 0;
      FUN_141a19150(local_3b0,puVar2,0,0);
      puVar13 = (undefined8 *)0x0;
      iVar5 = 0;
      uVar21 = *(uint *)(local_3b0 + 0x98);
      puVar17 = puVar13;
      if (uVar21 != 0) {
        do {
          lVar11 = *(longlong *)(local_3b0 + 0xa0 + (longlong)puVar17 * 0x18);
          if (lVar11 == 0) {
            local_164[(longlong)puVar17] = 0;
          }
          else {
            local_164[(longlong)puVar17] = *(int *)(lVar11 + 0x3c);
            local_164[(longlong)(puVar17 + 1)] = *(int *)(lVar11 + 0x40);
          }
          auStack_124[(longlong)puVar17] =
               *(undefined1 *)(local_3b0 + 0xb0 + (longlong)puVar17 * 0x18);
          *(undefined1 *)((longlong)&local_120 + 4 + (longlong)puVar17) =
               *(undefined1 *)(local_3b0 + 0xb1 + (longlong)puVar17 * 0x18);
          if (local_164[(longlong)puVar17] != 0) {
            local_104 = CONCAT22(local_104._2_2_,*(undefined2 *)(lVar11 + 0x38));
          }
          uVar6 = (int)puVar17 + 1;
          puVar17 = (undefined8 *)(ulonglong)uVar6;
        } while (uVar6 < uVar21);
      }
      lVar11 = *(longlong *)(local_3b0 + 0x160);
      if (lVar11 == 0) {
        local_114 = local_114 & 0xffffffff00000000;
      }
      else {
        iVar5 = *(int *)(lVar11 + 0x3c);
        local_114 = *(ulonglong *)(lVar11 + 0x3c);
      }
      local_10c = *(undefined8 *)(local_3b0 + 0x168);
      if (iVar5 != 0) {
        local_104 = CONCAT22(local_104._2_2_,*(undefined2 *)(lVar11 + 0x38));
      }
      local_1b8 = local_2d8;
      local_16c._4_4_ = uVar21;
      if (local_348 == 0) {
        local_3b8 = local_3b8 | 4;
        puVar16 = puVar13;
      }
      else {
        local_390 = *(longlong **)(local_348 + 0x48);
        if ((char)local_390[5] == '\0') {
          FUN_1419f3850(local_390);
        }
        puVar13 = (undefined8 *)local_390[7];
      }
      puStack_1b0 = puVar13;
      if (((local_3b8 & 4) != 0) &&
         (local_3b8 = local_3b8 & 0xfffffffb, puVar16 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(puVar16 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(puVar16 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)puVar16 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)puVar16 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar21 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar11 + 8) = puVar16;
              FLockFreePointerListLIFORoot<128,1>::Push();
            }
          }
          else {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      if (lVar9 == 0) {
        local_3b8 = local_3b8 | 8;
        local_198 = (undefined8 *)0x0;
        puVar12 = local_198;
      }
      else {
        local_390 = *(longlong **)(lVar9 + 0x48);
        if ((char)local_390[5] == '\0') {
          FUN_1419f3850(local_390);
        }
        local_198 = (undefined8 *)local_390[8];
      }
      if (((local_3b8 & 8) != 0) &&
         (local_3b8 = local_3b8 & 0xfffffff7, puVar12 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(puVar12 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(puVar12 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)puVar12 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)puVar12 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar21 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar11 + 8) = puVar12;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar12)(puVar12,1);
          }
        }
      }
      local_16c = (ulonglong)local_16c._4_4_ << 0x20;
      FUN_141ed6ac0(local_3b0,&local_1b8,2,1);
      local_2b0[0] = local_358;
      local_2c0 = local_308;
      local_390 = *(longlong **)(lVar9 + 0x48);
      if (*(char *)((longlong)local_390 + 0x28) == '\0') {
        FUN_1419f3850(local_390);
      }
      local_3a0 = *(undefined8 *)((longlong)local_390 + 0x40);
      local_360 = (uint)*(ushort *)(lVar9 + 0xe2);
      if (local_300 * 0x10 <= (int)(uint)*(ushort *)(lVar9 + 0xe2)) {
        local_360 = local_300 * 0x10;
      }
      if (0 < (int)local_360) {
        local_3a8 = (longlong *)CONCAT44(local_3a8._4_4_,(uint)*(ushort *)(lVar9 + 0xe0));
        local_2b8 = (uint)*(ushort *)(lVar9 + 0xde);
        local_2c8 = (longlong)(int)local_360;
        local_390 = (longlong *)(*local_398 + 0xf & 0xfffffffffffffff0);
        uVar19 = local_2c8 + (longlong)local_390;
        if (local_398[1] < uVar19) {
          FMemStackBase::AllocateNewChunk(local_398,local_360 + 0x10);
          local_390 = (longlong *)(*local_398 + 0xf & 0xfffffffffffffff0);
          uVar19 = local_2c8 + (longlong)local_390;
        }
        *local_398 = uVar19;
        _guard_xfg_dispatch_icall_nop(local_390,local_2c0,(ulonglong)local_360);
        puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar17 + 6;
        if ((undefined8 *)local_398[1] < puVar13) {
          FMemStackBase::AllocateNewChunk(local_398,0x38);
          puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar17 + 6;
        }
        *local_398 = (ulonglong)puVar13;
        *(int *)(local_3b0 + 0x14) = *(int *)(local_3b0 + 0x14) + 1;
        **(undefined8 **)(local_3b0 + 8) = puVar17;
        *(undefined8 **)(local_3b0 + 8) = puVar17 + 1;
        puVar17[1] = 0;
        *puVar17 = &PTR_LAB_143f594b0;
        puVar17[2] = local_3a0;
        puVar17[3] = local_390;
        *(uint *)(puVar17 + 4) = local_2b8;
        *(undefined4 *)((longlong)puVar17 + 0x24) = local_3a8._0_4_;
        *(uint *)(puVar17 + 5) = local_360;
      }
      local_3a0 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(local_3a0 + 0x28) == '\0') {
        FUN_1419f3850(local_3a0);
      }
      local_408 = (undefined8 *)((ulonglong)local_408 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (local_3b0,*(undefined8 *)(local_3a0 + 0x40),lVar9 + 0xe4,local_2b0);
      local_2c8 = local_338;
      if (local_338 != 0) {
        LOCK();
        *(int *)(local_338 + 8) = *(int *)(local_338 + 8) + 1;
        UNLOCK();
      }
      local_2c0 = (float *)local_338;
      local_3a0 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(local_3a0 + 0x28) == '\0') {
        FUN_1419f3850(local_3a0);
      }
      local_390 = *(longlong **)(local_3a0 + 0x40);
      if (*(short *)(lVar9 + 0xc2) != 0) {
        local_3a8 = (longlong *)CONCAT44(local_3a8._4_4_,(uint)*(ushort *)(lVar9 + 0xc0));
        puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar17 + 5;
        if ((undefined8 *)local_398[1] < puVar13) {
          FMemStackBase::AllocateNewChunk(local_398,0x30);
          puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar17 + 5;
        }
        *local_398 = (ulonglong)puVar13;
        *(int *)(local_3b0 + 0x14) = *(int *)(local_3b0 + 0x14) + 1;
        **(undefined8 **)(local_3b0 + 8) = puVar17;
        *(undefined8 **)(local_3b0 + 8) = puVar17 + 1;
        puVar17[1] = 0;
        *puVar17 = &PTR_LAB_143f59c80;
        puVar17[2] = local_390;
        *(undefined4 *)(puVar17 + 3) = local_3a8._0_4_;
        puVar17[4] = puVar22;
      }
      if (*(short *)(lVar9 + 0xc6) != 0) {
        local_3a8 = (longlong *)CONCAT44(local_3a8._4_4_,(uint)*(ushort *)(lVar9 + 0xc4));
        puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar17 + 5;
        if ((undefined8 *)local_398[1] < puVar13) {
          FMemStackBase::AllocateNewChunk(local_398,0x30);
          puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar17 + 5;
        }
        *local_398 = (ulonglong)puVar13;
        *(int *)(local_3b0 + 0x14) = *(int *)(local_3b0 + 0x14) + 1;
        **(undefined8 **)(local_3b0 + 8) = puVar17;
        *(undefined8 **)(local_3b0 + 8) = puVar17 + 1;
        puVar17[1] = 0;
        *puVar17 = &PTR_LAB_143f59c70;
        puVar17[2] = local_390;
        *(undefined4 *)(puVar17 + 3) = local_3a8._0_4_;
        puVar17[4] = local_2c0;
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c8);
      if (local_35c < 1) {
        fVar28 = 1.0 / (float)local_2a8;
        fVar31 = 1.0 / (float)local_2a4;
        fVar29 = fVar28 * *(float *)(local_2e0 + 3);
        local_240 = fVar28 * *(float *)(local_2e0 + 4);
        fVar30 = fVar31 * *(float *)((longlong)local_2e0 + 0x1c);
        local_23c = fVar31 * *(float *)((longlong)local_2e0 + 0x24);
        local_3a0 = *(longlong *)(lVar9 + 0x48);
        fVar32 = local_240 - fVar29;
        fVar33 = local_23c - fVar30;
        local_248 = fVar29;
        local_244 = fVar30;
        if (*(char *)(local_3a0 + 0x28) == '\0') {
          FUN_1419f3850(local_3a0);
        }
        local_408 = (undefined8 *)((ulonglong)local_408 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                  (local_3b0,*(undefined8 *)(local_3a0 + 0x40),lVar9 + 0xea,&local_248);
        local_3a0 = *(longlong *)(lVar9 + 0x48);
        local_230 = 0x3f800000;
        local_238 = fVar28;
        local_234 = fVar31;
        if (*(char *)(local_3a0 + 0x28) == '\0') {
          FUN_1419f3850(local_3a0);
        }
        local_408 = (undefined8 *)((ulonglong)local_408 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                  (local_3b0,*(undefined8 *)(local_3a0 + 0x40),lVar9 + 0xd8);
        local_3c0 = 0;
        local_290 = 1;
        uStack_28c = 1;
        local_288 = local_388;
        iStack_284 = local_384;
        local_3c8 = local_348;
        local_3d0 = 0x100000001;
        local_3d8 = CONCAT44(local_384,local_388);
        local_400 = (longlong *)CONCAT44(local_400._4_4_,(float)local_380._4_4_);
        local_408 = (undefined8 *)CONCAT44(local_408._4_4_,(float)(int)local_380);
        local_3f8 = fVar29;
        local_3f0 = fVar30;
        local_3e8 = fVar32;
        local_3e0 = fVar33;
        (**(code **)(*local_328 + 0xd8))(local_328,local_3b0,0,0);
        fVar28 = local_2e8;
        fVar31 = local_330;
      }
      else {
        local_3a0 = *(longlong *)(lVar9 + 0x48);
        local_258 = (undefined4)DAT_1468b5d88;
        fVar29 = (float)(int)local_370;
        fVar30 = (float)local_370._4_4_;
        local_254 = DAT_1468b5d88._4_4_;
        local_250 = (fVar29 - 0.5) / fVar28;
        local_24c = (fVar30 - 0.5) / fVar31;
        if (*(char *)(local_3a0 + 0x28) == '\0') {
          FUN_1419f3850(local_3a0);
        }
        local_408 = (undefined8 *)((ulonglong)local_408 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                  (local_3b0,*(undefined8 *)(local_3a0 + 0x40),lVar9 + 0xea,&local_258);
        local_3a0 = *(longlong *)(lVar9 + 0x48);
        local_260 = 0x3f800000;
        local_268 = fVar34;
        local_264 = fVar35;
        if (*(char *)(local_3a0 + 0x28) == '\0') {
          FUN_1419f3850(local_3a0);
        }
        local_408 = (undefined8 *)((ulonglong)local_408 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                  (local_3b0,*(undefined8 *)(local_3a0 + 0x40),lVar9 + 0xd8);
        local_3c0 = 0;
        local_2a0 = local_388;
        local_298 = local_388;
        local_3c8 = local_348;
        iStack_29c = local_384;
        local_3d0 = CONCAT44(local_384,local_388);
        iStack_294 = local_384;
        local_3d8 = CONCAT44(local_384,local_388);
        local_3f0 = 0.0;
        local_3f8 = 0.0;
        local_400 = (longlong *)CONCAT44(local_400._4_4_,fVar30);
        local_408 = (undefined8 *)CONCAT44(local_408._4_4_,fVar29);
        local_3e8 = fVar29;
        local_3e0 = fVar30;
        (**(code **)(*local_328 + 0xd8))(local_328,local_3b0,0,0);
      }
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar21 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar11 + 8) = puVar2;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2);
          }
        }
      }
      if (puVar22 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar22 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(puVar22 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)puVar22 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)puVar22 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar21 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar11 + 8) = puVar22;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
LAB_1420a3c8d:
            (**(code **)*puVar22)(puVar22);
          }
        }
      }
    }
    else {
      lVar11 = *plVar15;
      lVar23 = *(longlong *)(lVar11 + 0x50);
      if (*(longlong *)(lVar11 + 0x50) == 0) {
        lVar23 = lVar11 + 0x40;
      }
      puVar22 = *(undefined8 **)(lVar23 + 8);
      if (puVar22 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
        UNLOCK();
        lVar11 = *plVar15;
      }
      plVar18 = *(longlong **)(lVar11 + 0x50);
      if (*(longlong **)(lVar11 + 0x50) == (longlong *)0x0) {
        plVar18 = (longlong *)(lVar11 + 0x40);
      }
      puVar2 = (undefined8 *)*plVar18;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      local_390 = (longlong *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar13 = local_390 + 1;
      local_208 = puVar22;
      if ((undefined8 *)puVar24[1] < puVar13) {
        FMemStackBase::AllocateNewChunk(puVar24,0x10);
        local_390 = (longlong *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = local_390 + 1;
        puVar24 = local_398;
      }
      *puVar24 = (ulonglong)puVar13;
      *local_390 = (longlong)local_208;
      puVar17 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar17 + 5;
      if ((undefined8 *)puVar24[1] < puVar13) {
        FMemStackBase::AllocateNewChunk(puVar24,0x30);
        puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar17 + 5;
        puVar24 = local_398;
      }
      *puVar24 = (ulonglong)puVar13;
      *(int *)(local_3b0 + 0x14) = *(int *)(local_3b0 + 0x14) + 1;
      **(undefined8 **)(local_3b0 + 8) = puVar17;
      *(undefined8 **)(local_3b0 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *puVar17 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar17 + 2) = 1;
      puVar17[3] = local_390;
      *(undefined4 *)(puVar17 + 4) = 0;
      *(undefined1 *)((longlong)puVar17 + 0x24) = 0;
      local_390 = (longlong *)(*puVar24 + 7 & 0xfffffffffffffff8);
      plVar18 = local_390 + 1;
      local_1f8 = puVar2;
      if ((longlong *)puVar24[1] < plVar18) {
        FMemStackBase::AllocateNewChunk(puVar24,0x10);
        local_390 = (longlong *)(*local_398 + 7 & 0xfffffffffffffff8);
        plVar18 = local_390 + 1;
        puVar24 = local_398;
      }
      *puVar24 = (ulonglong)plVar18;
      *local_390 = (longlong)local_1f8;
      puVar17 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar17 + 5;
      if ((undefined8 *)puVar24[1] < puVar13) {
        FMemStackBase::AllocateNewChunk(puVar24,0x30);
        puVar17 = (undefined8 *)(*local_398 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar17 + 5;
        puVar24 = local_398;
      }
      *puVar24 = (ulonglong)puVar13;
      *(int *)(local_3b0 + 0x14) = *(int *)(local_3b0 + 0x14) + 1;
      **(undefined8 **)(local_3b0 + 8) = puVar17;
      *(undefined8 **)(local_3b0 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *puVar17 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar17 + 2) = 1;
      *(undefined4 *)(puVar17 + 4) = 1;
      puVar17[3] = local_390;
      *(undefined1 *)((longlong)puVar17 + 0x24) = 0;
      FUN_141a19150(local_3b0,puVar2,0,0);
      puVar13 = (undefined8 *)0x0;
      iVar5 = 0;
      uVar21 = *(uint *)(local_3b0 + 0x98);
      puVar17 = puVar13;
      if (uVar21 != 0) {
        do {
          lVar11 = *(longlong *)(local_3b0 + 0xa0 + (longlong)puVar17 * 0x18);
          if (lVar11 == 0) {
            local_164[(longlong)puVar17] = 0;
          }
          else {
            local_164[(longlong)puVar17] = *(int *)(lVar11 + 0x3c);
            local_164[(longlong)(puVar17 + 1)] = *(int *)(lVar11 + 0x40);
          }
          auStack_124[(longlong)puVar17] =
               *(undefined1 *)(local_3b0 + 0xb0 + (longlong)puVar17 * 0x18);
          *(undefined1 *)((longlong)&local_120 + 4 + (longlong)puVar17) =
               *(undefined1 *)(local_3b0 + 0xb1 + (longlong)puVar17 * 0x18);
          if (local_164[(longlong)puVar17] != 0) {
            local_104 = CONCAT22(local_104._2_2_,*(undefined2 *)(lVar11 + 0x38));
          }
          uVar6 = (int)puVar17 + 1;
          puVar17 = (undefined8 *)(ulonglong)uVar6;
        } while (uVar6 < uVar21);
      }
      lVar11 = *(longlong *)(local_3b0 + 0x160);
      if (lVar11 == 0) {
        local_114 = local_114 & 0xffffffff00000000;
      }
      else {
        iVar5 = *(int *)(lVar11 + 0x3c);
        local_114 = *(ulonglong *)(lVar11 + 0x3c);
      }
      local_10c = *(undefined8 *)(local_3b0 + 0x168);
      if (iVar5 != 0) {
        local_104 = CONCAT22(local_104._2_2_,*(undefined2 *)(lVar11 + 0x38));
      }
      local_1b8 = local_2d8;
      local_16c._4_4_ = uVar21;
      if (local_348 == 0) {
        local_3b8 = local_3b8 | 0x10;
        puVar25 = puVar13;
      }
      else {
        local_3a0 = *(longlong *)(local_348 + 0x48);
        if (*(char *)(local_3a0 + 0x28) == '\0') {
          FUN_1419f3850(local_3a0);
        }
        puVar13 = *(undefined8 **)(local_3a0 + 0x38);
      }
      puStack_1b0 = puVar13;
      if (((local_3b8 & 0x10) != 0) &&
         (local_3b8 = local_3b8 & 0xffffffef, puVar25 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(puVar25 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(puVar25 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)puVar25 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)puVar25 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar25);
            }
          }
          else {
            (**(code **)*puVar25)(puVar25,1);
          }
        }
      }
      if (lVar9 == 0) {
        local_3b8 = local_3b8 | 0x20;
        local_198 = (undefined8 *)0x0;
        puVar26 = local_198;
      }
      else {
        local_3a0 = *(longlong *)(lVar9 + 0x48);
        if (*(char *)(local_3a0 + 0x28) == '\0') {
          FUN_1419f3850(local_3a0);
        }
        local_198 = *(undefined8 **)(local_3a0 + 0x40);
      }
      if (((local_3b8 & 0x20) != 0) &&
         (local_3b8 = local_3b8 & 0xffffffdf, puVar26 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(puVar26 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(puVar26 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)puVar26 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)puVar26 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar26);
            }
          }
          else {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      local_16c = (ulonglong)local_16c._4_4_ << 0x20;
      FUN_141ed6ac0(local_3b0,&local_1b8,2,1);
      FUN_1420bf190(lVar9,local_3b0,&local_308,local_358);
      local_3a0 = *(longlong *)(lVar9 + 0x48);
      local_228 = (undefined4)DAT_1468b5d88;
      fVar29 = (float)(int)local_370;
      fVar30 = (float)local_370._4_4_;
      local_224 = DAT_1468b5d88._4_4_;
      local_220 = (fVar29 - 0.5) / fVar28;
      local_21c = (fVar30 - 0.5) / fVar31;
      if (*(char *)(local_3a0 + 0x28) == '\0') {
        FUN_1419f3850(local_3a0);
      }
      local_408 = (undefined8 *)((ulonglong)local_408 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (local_3b0,*(undefined8 *)(local_3a0 + 0x40),lVar9 + 0xea,&local_228);
      local_200 = local_338;
      if (local_338 != 0) {
        LOCK();
        *(int *)(local_338 + 8) = *(int *)(local_338 + 8) + 1;
        UNLOCK();
      }
      FUN_1420bf020(lVar9,local_3b0,puVar22,&local_200);
      local_3a0 = *(longlong *)(lVar9 + 0x48);
      fStack_2f0 = 0.0;
      fStack_2ec = 1.0;
      local_2f8 = fVar34;
      fStack_2f4 = fVar35;
      if (*(char *)(local_3a0 + 0x28) == '\0') {
        FUN_1419f3850(local_3a0);
      }
      local_408 = (undefined8 *)((ulonglong)local_408 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (local_3b0,*(undefined8 *)(local_3a0 + 0x40),lVar9 + 0xd8);
      local_3c0 = 0;
      local_280 = local_388;
      local_278 = local_388;
      local_3c8 = local_348;
      iStack_27c = local_384;
      local_3d0 = CONCAT44(local_384,local_388);
      iStack_274 = local_384;
      local_3d8 = CONCAT44(local_384,local_388);
      local_3f0 = 0.0;
      local_3f8 = 0.0;
      local_400 = (longlong *)CONCAT44(local_400._4_4_,fVar30);
      local_408 = (undefined8 *)CONCAT44(local_408._4_4_,fVar29);
      local_3e8 = fVar29;
      local_3e0 = fVar30;
      (**(code **)(*local_328 + 0xd8))(local_328,local_3b0,0,0);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2);
          }
        }
      }
      if (puVar22 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar22 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          if ((*(char *)(puVar22 + 2) != '\0') ||
             ((DAT_146ab62f5 == '\0' &&
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')))) goto LAB_1420a3c8d;
          LOCK();
          bVar27 = *(int *)((longlong)puVar22 + 0xc) == 0;
          if (bVar27) {
            *(int *)((longlong)puVar22 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar27) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
          }
        }
      }
    }
    local_354 = local_354 + 1;
    plVar14 = (longlong *)(ulonglong)local_354;
    plVar15 = local_340;
    puVar24 = local_398;
    if (1 < (int)local_354) {
      local_400 = &local_338;
      local_408 = &local_370;
      FUN_1420c0fe0(local_340,local_3b0,local_328,local_2e0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_338);
      if (local_308 != (float *)0x0) {
        FMemory::Free();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1420a3db0 Broadcast body=196 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,TSharedRef<ISessionInfo,0>_const_&,TSharedRef<ISessionInstanceInfo,0>_const_&,TSharedRef<FSessionLogMessage,0>_const_&>
     ::Broadcast(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1420a3e26:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1420a3e26;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1420a3e80 FUN_1420a3e80 body=907 status=ok
// SIG undefined FUN_1420a3e80(void)

undefined8 *
FUN_1420a3e80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 local_98 [24];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  
  lVar10 = operator_new(0x40);
  plVar14 = (longlong *)0x0;
  plVar11 = plVar14;
  if (lVar10 != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x200) + 8);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      plVar11 = plVar14;
    }
    plVar11 = (longlong *)FSlateRenderDataHandle::FSlateRenderDataHandle(lVar10,param_3,plVar11);
  }
  plVar12 = (longlong *)operator_new(0x18);
  plVar15 = plVar14;
  if (plVar12 != (longlong *)0x0) {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_143f3f2e0;
    plVar12[2] = (longlong)plVar11;
    plVar15 = plVar12;
  }
  *param_2 = plVar11;
  param_2[1] = plVar15;
  plVar12 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  if (plVar12 != (longlong *)0x0) {
    if (*plVar12 != 0) {
      if (plVar12[1] != 0) {
        piVar1 = (int *)(plVar12[1] + 8);
        LOCK();
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *piVar1 = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (0 < iVar8) goto LAB_1420a3fcc;
      }
      plVar15 = (longlong *)param_2[1];
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    *plVar12 = (longlong)plVar11;
    plVar11 = (longlong *)plVar12[1];
    if (plVar15 != plVar11) {
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
        UNLOCK();
        plVar11 = (longlong *)plVar12[1];
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      plVar12[1] = (longlong)plVar15;
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar15 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
  }
LAB_1420a3fcc:
  FUN_1417ffcd0(*(undefined8 *)(param_1 + 0x1f0),param_4);
  FSlateElementBatcher::ResetBatches(*(undefined8 *)(param_1 + 0x1f0));
  plVar11 = (longlong *)param_2[1];
  uVar13 = *(undefined8 *)(param_1 + 0x210);
  uVar3 = *param_2;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2d4);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_58 = uVar13;
  local_50 = param_4;
  local_48 = uVar3;
  local_40 = plVar11;
  local_38 = uVar2;
  if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_80 = uVar13;
      local_78 = param_4;
      local_70 = uVar3;
      local_68 = plVar11;
      local_60 = uVar2;
      uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_14209f340(&local_80,uVar13);
      plVar14 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_68 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
    else {
      plVar14 = (longlong *)FUN_1420a7130(local_98,0,0xff);
      lVar10 = *plVar14;
      *(undefined8 *)(lVar10 + 0x10) = uVar13;
      *(undefined8 *)(lVar10 + 0x18) = param_4;
      *(undefined8 *)(lVar10 + 0x20) = uVar3;
      *(longlong **)(lVar10 + 0x28) = plVar11;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(lVar10 + 0x30) = uVar2;
      lVar10 = *plVar14;
      lVar6 = plVar14[2];
      lVar4 = plVar14[1];
      lVar5 = *(longlong *)(lVar10 + 0x40);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
        UNLOCK();
      }
      FUN_14048a8b0(lVar10,lVar4,(int)lVar6,1);
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 0x48);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FGraphEvent::Recycle(lVar5);
        }
      }
    }
  }
  else {
    uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_14209f340(&local_58,uVar13);
  }
  plVar14 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_40 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar11 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420a4210 Call body=107 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_85dba51c3f9496254dbb655512744136>,void___cdecl(FRHICommandListImmediate_&,FGraphicsPipelineStateInitializer_&)>
     ::Call(undefined8 *param_1,undefined8 param_2)

{
  FUN_1420bfed0(param_2,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],*(undefined1 *)param_1[8],param_1[9],param_1[10],1);
  return;
}



// FUNCTION 1420a4290 CanRenderResource body=163 status=ok
// SIG undefined CanRenderResource(void)

undefined8 FSlateRHIRenderer::CanRenderResource(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = UTexture::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = USlateTextureAtlasInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
    if (lVar2 == 0) {
      lVar2 = UMaterialInterface::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1420a4340 FUN_1420a4340 body=341 status=ok
// SIG undefined FUN_1420a4340(void)

void FUN_1420a4340(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined1 local_28 [32];
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (lVar3 != 0) {
    cVar7 = IsInRenderingThread();
    if (cVar7 == '\0') {
      FUN_141edf360(lVar3 + 0x20);
    }
    else {
      (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x30))();
    }
    cVar7 = IsInRenderingThread();
    if (cVar7 == '\0') {
      FUN_141edf360(lVar3 + 0x68);
    }
    else {
      (**(code **)(*(longlong *)(lVar3 + 0x68) + 0x30))();
    }
  }
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 == DAT_1468c21c0) goto LAB_1420a43bf;
  }
  else {
LAB_1420a43bf:
    if (DAT_146ac3ac6 == '\0') {
LAB_1420a43d1:
      if (DAT_146ac3ac5 != '\0') {
LAB_1420a441a:
        plVar9 = (longlong *)FUN_1420a73d0(local_28,0,0xff);
        *(longlong *)(*plVar9 + 0x10) = param_1;
        lVar3 = *plVar9;
        lVar6 = plVar9[2];
        lVar4 = plVar9[1];
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
        goto LAB_1420a447d;
      }
      cVar7 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar8 = GetCurrentThreadId();
        if (DVar8 != DAT_1468c21c0) goto LAB_1420a441a;
      }
    }
    else {
      cVar7 = IsInRenderingThread();
      if (cVar7 == '\0') goto LAB_1420a43d1;
    }
    FBaseGraphTask::GetSmallTaskAllocator();
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x128,0);
LAB_1420a447d:
  BeginCleanup(param_1 + 0x18);
  return;
}



// FUNCTION 1420a44a0 FUN_1420a44a0 body=282 status=ok
// SIG undefined FUN_1420a44a0(void)

void FUN_1420a44a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined1 local_28 [32];
  
  cVar8 = FUN_1415e1500();
  if (cVar8 == '\0') {
    *(undefined4 *)(param_1 + 0x2d0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    if (*(int *)(param_1 + 0x2cc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2c0,0);
    }
    plVar3 = *(longlong **)(param_1 + 0x210);
    if (((DAT_146ac3ac6 != '\0') && (cVar8 = IsInRenderingThread(), cVar8 != '\0')) ||
       ((DAT_146ac3ac5 == '\0' &&
        (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
         (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))))) {
      FBaseGraphTask::GetSmallTaskAllocator();
                    /* WARNING: Could not recover jumptable at 0x0001420a4543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x28))(plVar3);
      return;
    }
    plVar10 = (longlong *)FUN_1420a7280(local_28,0,0xff);
    *(longlong **)(*plVar10 + 0x10) = plVar3;
    lVar4 = *plVar10;
    lVar7 = plVar10[2];
    lVar5 = plVar10[1];
    lVar6 = *(longlong *)(lVar4 + 0x20);
    piVar1 = (int *)(lVar6 + 0x48);
    if (lVar6 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(lVar4,lVar5,(int)lVar7,1);
    if (lVar6 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar6);
      }
    }
  }
  return;
}



// FUNCTION 1420a45f0 FUN_1420a45f0 body=530 status=ok
// SIG undefined FUN_1420a45f0(void)

void FUN_1420a45f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  undefined8 uStack_40;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  uStack_a4 = 1;
  plVar1 = (longlong *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x30);
  local_78 = (uint *)(param_1 + 0x18);
  local_a8 = 0;
  iStack_94 = 0;
  iStack_90 = 0;
  if (iVar4 != 0) {
    puVar11 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar11 = local_78;
    }
    uVar5 = *puVar11;
    local_a8 = 0;
    iStack_90 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar9 = local_a8 + 1;
      bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar9;
      if (bVar7) goto LAB_1420a46b2;
      uVar5 = puVar11[lVar10 + 1];
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
    iStack_94 = (iStack_90 - iVar9) + 0x1f;
    if (iVar4 < iStack_94) {
LAB_1420a46b2:
      iStack_94 = iVar4;
    }
  }
  uStack_70 = CONCAT44(iStack_94,0xffffffff);
  auStack_30._8_4_ = iStack_90;
  auStack_30._0_8_ = uStack_70;
  auStack_30._12_4_ = uStack_8c;
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  local_58 = plVar1;
  local_48 = plVar1;
  uStack_40 = uStack_80;
  puStack_38 = local_78;
  local_20 = plVar1;
  if (iStack_94 < *(int *)(param_1 + 0x30)) {
    do {
      lVar10 = *(longlong *)(*plVar1 + 8 + (longlong)iStack_94 * 0x18);
      if (lVar10 != 0) {
        if (*(undefined8 **)(lVar10 + 0x20) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar10 + 0x20) = 0;
        }
        plVar6 = *(longlong **)(lVar10 + 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        FMemory::operator_delete(lVar10,0x30);
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      iStack_94 = uStack_70._4_4_;
    } while (uStack_70._4_4_ < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  FUN_1406c5d90(plVar1,0);
  return;
}



// FUNCTION 1420a4810 FUN_1420a4810 body=2105 status=ok
// SIG undefined FUN_1420a4810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420a4810(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong *local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong local_218;
  undefined4 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  int local_1dc;
  uint local_1d8;
  float local_1d4;
  float local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined *local_150;
  undefined4 local_148;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  lVar9 = 0;
  local_1f0 = 0;
  lVar3 = *param_1;
  local_1d8 = 0;
  fVar14 = *(float *)((longlong)param_4 + 0x24) - *(float *)((longlong)param_4 + 0x1c);
  iVar8 = (int)ROUND((*(float *)(param_4 + 4) - *(float *)(param_4 + 3)) +
                     (*(float *)(param_4 + 4) - *(float *)(param_4 + 3)) + 0.5) >> 1;
  iVar2 = (int)ROUND(fVar14 + fVar14 + 0.5) >> 1;
  local_200 = CONCAT44(iVar2,iVar8);
  local_1c8 = local_200;
  local_180 = param_3;
  local_170 = param_4;
  local_168 = param_1;
  if ((((*(int *)(lVar3 + 100) < iVar8) || (*(int *)(lVar3 + 0x68) < iVar2)) ||
      ((*(int *)(lVar3 + 100) == DAT_1468b5ca0 && (*(int *)(lVar3 + 0x68) == DAT_1468b5ca4)))) ||
     (*(int *)(lVar3 + 0x58) == 0)) {
    if (*(char *)(lVar3 + 0x30) == '\0') {
      (**(code **)(*(longlong *)(lVar3 + 8) + 0x28))(lVar3 + 8);
    }
    FUN_1420bd830(lVar3,&local_1c8);
  }
  lVar3 = FUN_1404a0e20();
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  local_208 = lVar3;
  lVar4 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_158 = 0;
  local_160 = &DAT_146b09c50;
  plVar11 = (longlong *)(lVar4 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar11,&local_1e0,&local_160);
  if (local_1e0 != -1) {
    lVar9 = (longlong)local_1e0 * 0x20 + *plVar11;
  }
  plVar13 = (longlong *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    plVar13 = (longlong *)0x0;
  }
  local_148 = 0;
  local_150 = &DAT_146ae50e0;
  lVar9 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar11,&local_1dc,&local_150);
  if (local_1dc == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)local_1dc * 0x20 + *plVar11;
  }
  plVar11 = (longlong *)(lVar4 + 0x10);
  if (lVar4 == 0) {
    plVar11 = (longlong *)0x0;
  }
  lVar4 = *plVar11;
  local_1f8 = (*(code *)**(undefined8 **)*param_1)();
  local_1f4 = (**(code **)(*(longlong *)*param_1 + 8))();
  lVar5 = (**(code **)(*param_3 + 0xe0))(param_3);
  local_1b8 = *(longlong *)(lVar5 + 0x30);
  if (local_1b8 != 0) {
    LOCK();
    *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
    UNLOCK();
    lVar3 = local_208;
  }
  local_f0 = 0;
  local_e4 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_dc = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  local_ec = 0x26;
  local_108 = FUN_1404a0ce0();
  local_100 = FUN_140985530();
  local_f8 = FUN_1409853f0();
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar10 + 2) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = local_1f8;
  *(undefined4 *)(puVar10 + 4) = local_1f4;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
  local_200 = *param_4;
  if (local_200 != 0) {
    LOCK();
    *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
    UNLOCK();
    lVar3 = local_208;
  }
  plVar11 = *(longlong **)(*param_1 + 0x50);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)(*param_1 + 0x40);
  }
  lVar5 = *plVar11;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    lVar3 = local_208;
  }
  plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar11 = plVar13 + 1;
  local_1c0 = lVar5;
  local_1b0 = local_200;
  if (*(longlong **)(param_2 + 0x38) < plVar11) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar13 + 1;
  }
  *(longlong **)(param_2 + 0x30) = plVar11;
  *plVar13 = local_1b0;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[3] = plVar13;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar10 + 2) = 1;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined1 *)((longlong)puVar10 + 0x24) = 0;
  plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar11 = plVar13 + 1;
  local_1a8 = lVar5;
  if (*(longlong **)(param_2 + 0x38) < plVar11) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar13 + 1;
  }
  *(longlong **)(param_2 + 0x30) = plVar11;
  *plVar13 = local_1a8;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  uVar7 = 0;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  local_1a0 = 0;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar10 + 2) = 1;
  puVar10[3] = plVar13;
  *(undefined4 *)(puVar10 + 4) = 1;
  *(undefined1 *)((longlong)puVar10 + 0x24) = 0;
  FUN_141a19150(param_2,lVar5,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1a0);
  FUN_14049afe0(param_2,&local_138);
  local_138 = local_1b8;
  if (lVar9 == 0) {
    local_198 = 0;
    uVar12 = 1;
    uStack_130 = uVar7;
  }
  else {
    lVar5 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uStack_130 = *(undefined8 *)(lVar5 + 0x38);
    uVar12 = local_1d8;
  }
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  if (lVar4 == 0) {
    uVar12 = uVar12 | 2;
    local_190 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
  }
  local_118 = uVar7;
  if ((uVar12 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
  }
  local_ec = local_ec & 0xffffffff00000000;
  FUN_141ed6ac0(param_2,&local_138,2,1);
  iVar2 = DAT_146ae4894;
  cVar1 = DAT_146ae4891;
  lVar5 = *(longlong *)(lVar4 + 0x48);
  local_1d4 = (float)DAT_146ae4890;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  local_258 = (undefined8 *)((ulonglong)local_258._4_4_ << 0x20);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar5 + 0x40),lVar4 + 0xd8,&local_1d4);
  lVar5 = *(longlong *)(lVar4 + 0x48);
  local_1d0[0] = (float)iVar2;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  local_258 = (undefined8 *)((ulonglong)local_258 & 0xffffffff00000000);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar5 + 0x40),lVar4 + 0xde,local_1d0);
  if (cVar1 == '\0') {
    local_1e8 = 0;
  }
  else {
    local_1e8 = 0x3f800000;
  }
  lVar5 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  local_258 = (undefined8 *)((ulonglong)local_258 & 0xffffffff00000000);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar5 + 0x40),lVar4 + 0xe4,&local_1e8);
  if (DAT_146ae4892 == '\0') {
    local_1f0 = 0;
  }
  else {
    local_1f0 = 0x3f800000;
  }
  lVar5 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  local_258 = (undefined8 *)((ulonglong)local_258 & 0xffffffff00000000);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar5 + 0x40),lVar4 + 0xea,&local_1f0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  local_188 = lVar3;
  FUN_1420bf020(lVar4,param_2,local_200,&local_188);
  plVar11 = local_180;
  uVar7 = local_1c8;
  local_210 = 0;
  local_1e8 = local_1f8;
  uStack_1e4 = local_1f4;
  local_1f0 = 1;
  uStack_1ec = 1;
  local_220 = 0x100000001;
  local_228 = CONCAT44(local_1f4,local_1f8);
  local_230 = 0x3f800000;
  local_238 = 0x3f800000;
  local_240 = 0;
  local_248 = 0;
  local_250 = (longlong *)CONCAT44(local_250._4_4_,(float)local_1c8._4_4_);
  local_258 = (undefined8 *)CONCAT44(local_258._4_4_,(float)(int)local_1c8);
  local_218 = lVar9;
  (**(code **)(*local_180 + 0xd8))(local_180,param_2,0,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1c0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_200);
  local_250 = &local_208;
  local_178 = uVar7;
  local_258 = &local_178;
  FUN_1420c0fe0(local_168,param_2,plVar11,local_170);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_208);
  return;
}



// FUNCTION 1420a5050 Compact body=590 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = (int)param_1[1];
  uVar16 = 0;
  iVar17 = iVar3 - iVar2;
  lVar5 = *param_1;
  iVar12 = iVar3;
  iVar8 = (int)param_1[6];
  if ((int)param_1[6] != -1) {
    do {
      iVar14 = *(int *)((longlong)iVar8 * 0x28 + 4 + *param_1);
      if (iVar8 < iVar17) {
        bVar6 = (byte)iVar12 & 0x1f;
        uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        do {
          iVar13 = iVar12 + -1;
          uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
          iVar15 = iVar13;
          if (iVar13 < 0) {
            iVar15 = iVar12 + 0x1e;
          }
          iVar12 = iVar13;
        } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4) & uVar10) == 0);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x28 + lVar5),
                   (void *)(lVar5 + (longlong)iVar13 * 0x28),0x28);
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        iVar15 = iVar8;
        if (iVar8 < 0) {
          iVar15 = iVar8 + 0x1f;
        }
        uVar16 = 1;
        puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      }
      iVar8 = iVar14;
    } while (iVar14 != -1);
    iVar12 = (int)param_1[1];
  }
  iVar8 = (iVar12 - iVar17) - iVar2;
  if (iVar8 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar17 * 0x28),
               (void *)(*param_1 + (longlong)iVar3 * 0x28),(longlong)iVar8 * 0x28);
    iVar12 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar12 - iVar2;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeShrink
            (param_1);
  iVar12 = (int)param_1[5];
  if (iVar3 != iVar12) {
    iVar14 = 0;
    iVar8 = 0;
    iVar13 = 0;
    iVar15 = 0;
    uVar10 = 1;
    uVar11 = 1;
    if (0 < iVar12) {
      do {
        if ((iVar15 < iVar17) || (iVar3 <= iVar15)) {
          if (iVar8 != iVar15) {
            plVar9 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar9 = param_1 + 2;
            }
            uVar4 = *(uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            puVar1 = (uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            if ((*(uint *)((longlong)plVar9 + (longlong)iVar13 * 4) & uVar11) == 0) {
              *puVar1 = ~uVar10 & uVar4;
            }
            else {
              *puVar1 = uVar4 | uVar10;
            }
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 * 2;
          if (uVar10 == 0) {
            uVar10 = 1;
            iVar14 = iVar14 + 1;
          }
        }
        iVar12 = (int)param_1[5];
        uVar4 = uVar11 * 2;
        iVar15 = iVar15 + 1;
        iVar7 = iVar13 + 1;
        uVar11 = 1;
        if (uVar4 != 0) {
          iVar7 = iVar13;
          uVar11 = uVar4;
        }
        iVar13 = iVar7;
      } while (iVar15 < iVar12);
    }
  }
  *(int *)(param_1 + 5) = iVar12 - iVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return uVar16;
}



// FUNCTION 1420a52a0 FUN_1420a52a0 body=1084 status=ok
// SIG undefined FUN_1420a52a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420a52a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  plVar7 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar4 = operator_new(0x318);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_14209d230(lVar4);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = lVar4;
    }
    local_98 = lVar4;
    local_90 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_98,lVar4,lVar4);
    if (plVar7 != &local_98) {
      *plVar7 = lVar4;
      local_98 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_90);
      plVar5 = local_90;
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
    if (*plVar7 == 0) {
      _DAT_1469eaf18 = 0;
    }
    else {
      _DAT_1469eaf18 = *plVar7 + 0x10;
    }
  }
  plVar7 = (longlong *)(param_1 + 0x18);
  if (*plVar7 == 0) {
    lVar4 = operator_new(0x170);
    if (lVar4 == 0) {
      local_68 = 0;
    }
    else {
      lVar6 = operator_new(0x10);
      if (lVar6 == 0) {
        local_58 = 0;
      }
      else {
        local_58 = FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(lVar6);
      }
      local_50 = (undefined8 *)operator_new(0x18);
      if (local_50 != (undefined8 *)0x0) {
        *(undefined4 *)(local_50 + 1) = 1;
        *(undefined4 *)((longlong)local_50 + 0xc) = 1;
        *local_50 = &PTR_FUN_143fd0100;
        local_50[2] = local_58;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
      local_68 = FUN_1417ef550(lVar4,&local_58);
    }
    plStack_60 = (longlong *)operator_new(0x18);
    if (plStack_60 != (longlong *)0x0) {
      *(undefined4 *)(plStack_60 + 1) = 1;
      *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
      *plStack_60 = (longlong)&PTR_FUN_143f3f2e0;
      plStack_60[2] = local_68;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
    lVar4 = operator_new(0x170);
    if (lVar4 == 0) {
      local_78 = 0;
    }
    else {
      lVar6 = operator_new(0x10);
      if (lVar6 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(lVar6);
      }
      local_40 = (undefined8 *)operator_new(0x18);
      if (local_40 != (undefined8 *)0x0) {
        *(undefined4 *)(local_40 + 1) = 1;
        *(undefined4 *)((longlong)local_40 + 0xc) = 1;
        *local_40 = &PTR_FUN_143fd0100;
        local_40[2] = local_48;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
      local_78 = FUN_1417ef550(lVar4,&local_48);
    }
    plStack_70 = (longlong *)operator_new(0x18);
    if (plStack_70 != (longlong *)0x0) {
      *(undefined4 *)(plStack_70 + 1) = 1;
      *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
      *plStack_70 = (longlong)&PTR_FUN_143f3f2e0;
      plStack_70[2] = local_78;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
    lVar4 = operator_new(0x40);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      local_38 = local_78;
      plStack_30 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      local_28 = local_68;
      plStack_20 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      lVar4 = FUN_1417f00e0(lVar4,&local_28,&local_38);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_144f95618;
      plVar5[2] = lVar4;
    }
    local_88 = lVar4;
    local_80 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_88,lVar4,lVar4);
    if (plVar7 != &local_88) {
      *plVar7 = lVar4;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_80);
      plVar5 = local_80;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    plVar7 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_70 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar7 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_60 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1420a56e0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>,0>,FDefaultSetAllocator>
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



// FUNCTION 1420a5790 FUN_1420a5790 body=1100 status=ok
// SIG undefined FUN_1420a5790(void)

void FUN_1420a5790(longlong param_1,longlong param_2,uint param_3,uint param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  DWORD DVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  undefined1 local_res10 [8];
  undefined1 local_78 [64];
  
  lVar16 = 0;
  piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar17 < DAT_146ae6208) && (_Init_thread_header(&DAT_146ae6208), DAT_146ae6208 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar14 = lVar16;
    if (plVar13 != (longlong *)0x0) {
      lVar14 = (**(code **)(*plVar13 + 0x38))(plVar13);
    }
    DAT_146ae6200 = lVar14;
    _Init_thread_footer(&DAT_146ae6208);
  }
  if ((*piVar17 < DAT_146ae6218) && (_Init_thread_header(&DAT_146ae6218), DAT_146ae6218 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar14 = lVar16;
    if (plVar13 != (longlong *)0x0) {
      lVar14 = (**(code **)(*plVar13 + 0x38))(plVar13);
    }
    DAT_146ae6210 = lVar14;
    _Init_thread_footer(&DAT_146ae6218);
  }
  cVar6 = FUN_141ee41d0();
  lVar14 = DAT_146ae6200;
  iVar15 = 0;
  iVar18 = iVar15;
  if (DAT_146ae6200 == 0) goto LAB_1420a5845;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    lVar11 = 4;
    if (DVar9 == DAT_1468c21c0) goto LAB_1420a5839;
  }
  else {
LAB_1420a5839:
    lVar11 = lVar16;
  }
  iVar18 = *(int *)(lVar11 + lVar14);
LAB_1420a5845:
  lVar14 = DAT_146ae6210;
  if (DAT_146ae6210 != 0) {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar7 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar9 = GetCurrentThreadId(), lVar11 = 4, DVar9 == DAT_1468c21c0)) {
      lVar11 = lVar16;
    }
    iVar15 = *(int *)(lVar11 + lVar14);
  }
  if ((param_2 != 0) &&
     (((*(int *)(param_2 + 0xe4) == DAT_1464c9c38) != (bool)cVar6 ||
      (((cVar7 = IsRHIDeviceIntel(), cVar7 != '\0' || (cVar7 = IsRHIDeviceIntel(), cVar7 != '\0'))
       && ((cVar6 != '\0' &&
           ((*(int *)(param_2 + 0xec) != iVar18 || (lVar16 = 0, *(int *)(param_2 + 0xf0) != iVar15))
           )))))))) {
    lVar16 = 1;
  }
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if (((((cVar7 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)) &&
      ((cVar7 = FUN_1415e1500(), cVar7 == '\0' && (param_2 != 0)))) &&
     (((((char)lVar16 != '\0' ||
        ((*(uint *)(param_2 + 0xd4) != param_4 || (*(uint *)(param_2 + 0xd0) != param_3)))) ||
       (*(char *)(param_2 + 0xe1) != param_5)) || (*(longlong *)(param_2 + 0x70) == 0)))) {
    TBaseMulticastDelegate<void,bool>::Broadcast(&DAT_1464af148,1);
    (*(code *)PTR_StartProfileThreadUsage_1464aaa78)();
    FUN_141ee24f0(0);
    if (param_3 < 9) {
      param_3 = 8;
    }
    if (param_4 < 9) {
      param_4 = 8;
    }
    if (0x4000 < param_3) {
      param_3 = 0x4000;
    }
    *(uint *)(param_2 + 0xd0) = param_3;
    if (0x4000 < param_4) {
      param_4 = 0x4000;
    }
    *(uint *)(param_2 + 0xd8) = param_3;
    *(uint *)(param_2 + 0xd4) = param_4;
    *(uint *)(param_2 + 0xdc) = param_4;
    puVar12 = (undefined8 *)FSlateRHIRenderer::CreateProjectionMatrix(local_78,param_3,param_4);
    uVar5 = puVar12[1];
    *(undefined8 *)(param_2 + 0x30) = *puVar12;
    *(undefined8 *)(param_2 + 0x38) = uVar5;
    uVar5 = puVar12[3];
    *(undefined8 *)(param_2 + 0x40) = puVar12[2];
    *(undefined8 *)(param_2 + 0x48) = uVar5;
    uVar1 = *(undefined4 *)((longlong)puVar12 + 0x24);
    uVar2 = *(undefined4 *)(puVar12 + 5);
    uVar3 = *(undefined4 *)((longlong)puVar12 + 0x2c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(puVar12 + 4);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    uVar1 = *(undefined4 *)(puVar12 + 6);
    uVar2 = *(undefined4 *)((longlong)puVar12 + 0x34);
    uVar3 = *(undefined4 *)(puVar12 + 7);
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0x3c);
    *(char *)(param_2 + 0xe1) = param_5;
    *(undefined4 *)(param_2 + 0x60) = uVar1;
    *(undefined4 *)(param_2 + 100) = uVar2;
    *(undefined4 *)(param_2 + 0x68) = uVar3;
    *(undefined4 *)(param_2 + 0x6c) = uVar4;
    iVar10 = DAT_1464c9c38;
    if (cVar6 == '\0') {
      iVar10 = *(int *)(param_2 + 0xe8);
    }
    *(int *)(param_2 + 0xe4) = iVar10;
    *(int *)(param_2 + 0xec) = iVar18;
    *(int *)(param_2 + 0xf0) = iVar15;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x48);
    if (*(longlong *)(param_2 + 0x70) == 0) {
      (**(code **)(*DAT_146ab6358 + 0x3a8))
                (DAT_146ab6358,local_res10,*(undefined8 *)(param_2 + 200),param_3,param_4,param_5,
                 *(undefined4 *)(param_2 + 0xe4));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 0x70,local_res10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res10);
    }
    else {
      piVar17 = (int *)(*(longlong *)(param_2 + 0x70) + 8);
      LOCK();
      if (*piVar17 == 0) {
        *piVar17 = 0;
      }
      UNLOCK();
      (**(code **)(*DAT_146ab6358 + 0x3b0))
                (DAT_146ab6358,*(undefined8 *)(param_2 + 0x70),param_3,param_4,param_5,
                 *(undefined4 *)(param_2 + 0xe4));
    }
    uVar8 = (**(code **)(*DAT_146ab6358 + 0x398))(DAT_146ab6358,*(undefined8 *)(param_2 + 0x70));
    *(undefined1 *)(param_2 + 0xe1) = uVar8;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x60,param_2 + 0x70);
    TBaseMulticastDelegate<void,bool>::Broadcast(&DAT_1464af160,1);
    (*(code *)PTR_StartProfileThreadUsage_1464aaa80)();
  }
  return;
}



// FUNCTION 1420a5be0 FUN_1420a5be0 body=697 status=ok
// SIG undefined FUN_1420a5be0(void)

void FUN_1420a5be0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  void *_Dst;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  uint uVar11;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    cVar3 = IsInRenderingThread();
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    if (cVar3 != '\0') {
      (**(code **)(*plVar6 + 0x28))();
      uVar11 = 0;
      _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                               (DAT_146ab6358,&DAT_146ab6e78,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8),0,1,local_res8,0,
                                1);
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_1 + 8),
                 (ulonglong)
                 (uint)(*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x2c) *
                       *(int *)(param_1 + 0x28)));
      (**(code **)(*DAT_146ab6358 + 0x588))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8),0,
                 uVar11 & 0xffffff00,1);
      *(undefined1 *)(param_1 + 0x38) = 0;
      return;
    }
    plVar9 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      plVar6 = plVar9;
    }
    FUN_141edf270(plVar6);
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      local_res18 = param_1 + -8;
      FUN_1420aa160(&local_res18,2,local_res20);
      *(undefined1 *)(param_1 + 0x38) = 0;
      return;
    }
    pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar6 = TlsGetValue(*pDVar5);
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
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144f96640;
    *(undefined1 *)(plVar9 + 3) = 0;
    plVar9[4] = 0;
    plVar9[2] = param_1 + -8;
    lVar7 = plVar9[4];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res10 = lVar7;
    FUN_140445100(plVar9,0,0xff,1);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1420a5ea0 FUN_1420a5ea0 body=564 status=ok
// SIG undefined FUN_1420a5ea0(void)

void FUN_1420a5ea0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_48;
  longlong *local_40;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar11 = 0x20;
    lVar5 = operator_new(0x20);
    plVar10 = (longlong *)0x0;
    plVar6 = plVar10;
    if (lVar5 != 0) {
      plVar6 = (longlong *)
               FSlateTextureData::FSlateTextureData
                         (lVar5,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                          *(undefined4 *)(param_1 + 0x30),param_1 + 8);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      local_48 = param_1;
      local_40 = plVar6;
      FUN_1420aa060(&local_48,2,local_res8);
    }
    else {
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar10 = plVar8;
        }
        TlsSetValue(*pDVar7,plVar10);
        plVar8 = plVar10;
      }
      plVar10 = (longlong *)plVar8[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar8;
        if (plVar10 == (longlong *)0x0) {
          lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
          plVar8[1] = lVar5;
          if (lVar5 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar9;
            lVar5 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar5 = lVar5 + -1;
              puVar9 = puVar2;
            } while (lVar5 != 0);
            *puVar2 = 0;
          }
          plVar10 = (longlong *)plVar8[1];
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          plVar8[1] = (longlong)plVar10;
          *plVar8 = 0;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
      }
      else {
        iVar11 = (int)plVar8[2];
      }
      plVar8[1] = *plVar10;
      *(int *)(plVar8 + 2) = iVar11 + -1;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar10 + 1) = 0xff;
      local_res18 = 0;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144f966f8;
      *(undefined1 *)(plVar10 + 4) = 0;
      plVar10[5] = 0;
      plVar10[2] = param_1;
      plVar10[3] = (longlong)plVar6;
      lVar5 = plVar10[5];
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar5;
      FUN_1409421c0(plVar10,0,0xff,1);
      if (lVar5 != 0) {
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1420a60e0 FUN_1420a60e0 body=46 status=ok
// SIG undefined FUN_1420a60e0(void)

void FUN_1420a60e0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf0);
  if (lVar1 != 0) {
    FUN_14209c250(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1420a6110 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TSlateElementPS<1,1,1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FSlateElementPS::FSlateElementPS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f95880;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6160 FUN_1420a6160 body=77 status=ok
// SIG undefined FUN_1420a6160(void)

undefined8 * FUN_1420a6160(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14209c9b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144f956e8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a61b0 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TGPUSkinCacheCS<1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14209ca90(puVar1,param_1);
    *puVar1 = &PTR_FUN_144f956b8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6200 ConstructCompiledInstance body=160 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCompositeLUTGenerationPS::ConstructCompiledInstance(longlong param_1)

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
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutputDevice",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"OutputGamut",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a62a0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FSlateDebugBatchingPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FSlateElementPS::FSlateElementPS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f958b0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    FShaderParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"BatchColor",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6310 ConstructCompiledInstance body=200 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FSlateElementVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e826c8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ViewProjection",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"VertexShaderParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),
               L"SwitchVerticalAxisMultiplier",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a63e0 ConstructCompiledInstance body=160 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FSlateMaskingVS::ConstructCompiledInstance(longlong param_1)

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
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ViewProjection",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),
               L"SwitchVerticalAxisMultiplier",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6480 ConstructCompiledInstance body=248 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FSlatePostProcessBlurPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FSlateElementPS::FSlateElementPS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f958f8;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xde) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xee) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"BufferSizeAndDirection",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xde,*(undefined8 *)(param_1 + 0x18),L"WeightAndOffsets",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"SampleCount",0)
    ;
    FShaderParameter::Bind((longlong)puVar1 + 0xea,*(undefined8 *)(param_1 + 0x18),L"UVBounds",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6580 ConstructCompiledInstance body=248 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FSlatePostProcessColorDeficiencyPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FSlateElementPS::FSlateElementPS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f958f8;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xde) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xee) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"ColorVisionDeficiencyType",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xde,*(undefined8 *)(param_1 + 0x18),
               L"ColorVisionDeficiencySeverity",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"bCorrectDeficiency",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xea,*(undefined8 *)(param_1 + 0x18),
               L"bSimulateCorrectionWithDeficiency",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6680 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FSlatePostProcessDownsamplePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FSlateElementPS::FSlateElementPS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f959f8;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    FShaderParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"UVBounds",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a66f0 FUN_1420a66f0 body=107 status=ok
// SIG undefined FUN_1420a66f0(void)

undefined8 * FUN_1420a66f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f95c08;
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



// FUNCTION 1420a6760 ConstructSerializedInstance body=79 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 *
FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144f95880;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a67b0 ConstructSerializedInstance body=79 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TSlateElementPS<1,1,1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *puVar1 = &PTR_FUN_144f956e8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6800 FUN_1420a6800 body=72 status=ok
// SIG undefined FUN_1420a6800(void)

undefined8 * FUN_1420a6800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    puVar1[0x22] = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0;
    *puVar1 = &PTR_FUN_144f956b8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6850 ConstructSerializedInstance body=92 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FSlatePostProcessDownsamplePS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144f958b0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a68b0 ConstructSerializedInstance body=100 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FSlatePostProcessBlurPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144f958f8;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6920 ConstructSerializedInstance body=92 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FSlatePostProcessDownsamplePS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144f959f8;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420a6980 FUN_1420a6980 body=96 status=ok
// SIG undefined FUN_1420a6980(void)

void FUN_1420a6980(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f96d78;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    return;
  }
  return;
}



// FUNCTION 1420a69e0 CreateProjectionMatrix body=186 status=ok
// SIG undefined CreateProjectionMatrix(void)

undefined8 FSlateRHIRenderer::CreateProjectionMatrix(undefined8 param_1,uint param_2,uint param_3)

{
  float fVar1;
  float local_48 [6];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_48[4] = 0.0;
  local_30 = 0;
  local_c = 0x3f800000;
  fVar1 = 1.0 / (float)param_2;
  local_14 = 1.0 / (float)param_3;
  local_48[0] = fVar1 + fVar1;
  local_48[5] = local_14 * -2.0;
  local_18 = -(fVar1 * (float)param_2);
  local_14 = local_14 * (float)param_3;
  local_28 = 0;
  uStack_20 = 0xbba3d70a;
  local_10 = 0x3f000000;
  AdjustProjectionMatrixForRHI(0x3f000000,local_48);
  return param_1;
}



// FUNCTION 1420a6aa0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,0,2,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x20000;
  local_84 = 0x70001;
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



// FUNCTION 1420a6b70 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50100;
  local_84 = 0xf0501;
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



// FUNCTION 1420a6c40 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_84 = 0xf0107;
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



// FUNCTION 1420a6d10 FUN_1420a6d10 body=1055 status=ok
// SIG undefined FUN_1420a6d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1420a6d10(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_1808 [32];
  undefined8 *local_17e8;
  longlong local_17e0;
  undefined8 local_17d8;
  longlong local_17c8;
  undefined8 local_17c0;
  undefined1 local_17b8 [8];
  undefined8 local_17b0;
  undefined8 local_17a8;
  undefined1 local_17a0 [8];
  undefined1 local_1798 [1392];
  undefined8 local_1228;
  undefined4 local_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined4 local_11a8;
  undefined4 uStack_11a4;
  undefined4 uStack_11a0;
  undefined4 uStack_119c;
  undefined4 local_1158;
  undefined8 local_1108;
  undefined4 local_1100;
  undefined4 local_10fc;
  undefined8 local_10f8;
  undefined4 local_10f0;
  undefined4 local_10ec;
  longlong *local_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  undefined4 local_10d0;
  undefined8 local_10c8;
  undefined4 local_10c0;
  undefined4 uStack_10bc;
  undefined4 uStack_10b8;
  undefined4 uStack_10b4;
  undefined4 local_10b0;
  undefined4 uStack_10ac;
  undefined4 uStack_10a8;
  undefined4 uStack_10a4;
  undefined4 local_10a0;
  undefined4 uStack_109c;
  undefined4 uStack_1098;
  undefined4 uStack_1094;
  undefined8 local_1090;
  undefined4 local_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined4 local_1050;
  undefined4 local_104c;
  longlong local_1040;
  undefined4 local_1038;
  undefined1 local_1030 [64];
  longlong local_ff0;
  undefined4 local_fe8;
  char local_fe0;
  undefined8 local_fd8;
  undefined4 local_fd0;
  undefined4 local_fcc;
  undefined8 local_fc8;
  undefined4 local_fc0;
  undefined2 local_fbc;
  undefined4 local_fb8;
  undefined4 local_fb4;
  undefined8 local_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined1 local_f88;
  undefined8 local_f84;
  undefined4 local_f7c;
  undefined2 local_f78;
  undefined1 local_f76;
  undefined1 local_f68 [1120];
  undefined8 local_b08;
  undefined4 local_b00;
  undefined4 local_3d8;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1808;
  if (DAT_146b17150 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    local_17c8 = 0;
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,local_17a0);
    local_17a8 = *puVar2;
    local_1088 = 0x42c80000;
    local_fd0 = 0x3f800000;
    local_fa8 = 0;
    uStack_fa0 = 0;
    local_fcc = 0xbf800000;
    local_1228 = _DAT_1468b5d90;
    local_f98 = 0;
    uStack_f90 = 0;
    local_1218 = _DAT_1464aa7d0;
    uStack_1210 = _DAT_1464aa7d8;
    local_1208 = _DAT_1464aa7e0;
    uStack_1200 = _DAT_1464aa7e8;
    local_11f8 = _DAT_1464aa7f0;
    uStack_11f0 = _DAT_1464aa7f8;
    local_11d8 = *param_3;
    uStack_11d0 = param_3[1];
    local_11e8 = _DAT_1464aa800;
    uStack_11e0 = uRam00000001464aa808;
    local_11c8 = param_3[2];
    uStack_11c0 = param_3[3];
    local_11b8 = param_3[4];
    uStack_11b0 = param_3[5];
    local_11a8 = *(undefined4 *)(param_3 + 6);
    uStack_11a4 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_11a0 = *(undefined4 *)(param_3 + 7);
    uStack_119c = *(undefined4 *)((longlong)param_3 + 0x3c);
    local_17b0 = 0;
    local_17c0._4_4_ = (undefined4)((ulonglong)local_17a8 >> 0x20);
    local_1100 = (undefined4)local_17a8;
    local_1158 = 0;
    local_10e0 = 0;
    local_10d8 = 0;
    local_10d0 = 0xffffffff;
    local_10c8 = 0;
    local_10a0 = DAT_1464aa6c0;
    uStack_109c = DAT_1464aa6c4;
    uStack_1098 = DAT_1464aa6c8;
    uStack_1094 = DAT_1464aa6cc;
    local_1090 = 0;
    local_1080 = 0;
    local_1078 = 0;
    local_1060 = 0;
    local_1058 = 0;
    local_1050 = 0xffffffff;
    local_104c = 0;
    local_1040 = 0;
    local_1038 = 0;
    local_fe0 = '\0';
    local_fd8 = 0xffffffffffffffff;
    local_fc8 = 0;
    local_fc0 = 0;
    local_fbc = 0x100;
    local_fb8 = 0x42b40000;
    local_fb4 = 0x42b40000;
    local_fb0 = 0;
    local_f88 = 0;
    local_f84 = 0;
    local_f7c = 0;
    local_f78 = 1;
    local_f76 = 0;
    local_1108 = 0;
    local_10fc = local_17c0._4_4_;
    local_10f8 = 0;
    local_10ec = local_17c0._4_4_;
    local_1220 = DAT_1468b5d98;
    local_10c0 = DAT_1464aa6e0;
    uStack_10bc = DAT_1464aa6e4;
    uStack_10b8 = DAT_1464aa6e8;
    uStack_10b4 = DAT_1464aa6ec;
    local_10b0 = DAT_1464aa6c0;
    uStack_10ac = DAT_1464aa6c4;
    uStack_10a8 = DAT_1464aa6c8;
    uStack_10a4 = DAT_1464aa6cc;
    local_17c0 = local_17a8;
    local_10f0 = local_1100;
    local_10e8 = param_1;
    lVar3 = operator_new(0x1aa0);
    if (lVar3 != 0) {
      lVar4 = FUN_142742170(lVar3,&local_1228);
    }
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
    (**(code **)(*param_2 + 0x20))(param_2,local_17b8);
    FUN_142745180(local_f68);
    local_17d8 = FUN_1404546d0(local_1798);
    local_17e0 = lVar4 + 0x390;
    local_17e8 = &local_17b0;
    FUN_14275c280(lVar4,local_f68,local_17b8,1);
    local_b08 = *(undefined8 *)(lVar4 + 0x8dc);
    local_b00 = *(undefined4 *)(lVar4 + 0x8e4);
    local_3d8 = 0;
    FUN_141d79390(local_f68);
    local_17e8 = (undefined8 *)CONCAT44(local_17e8._4_4_,1);
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_17c8,local_f68,&DAT_146b09708);
    local_17c0 = local_17c8;
    if (local_17c8 != 0) {
      LOCK();
      *(int *)(local_17c8 + 8) = *(int *)(local_17c8 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_17c8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar4 + 0x20,&local_17c0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_17c0);
    if (local_fe0 != '\0') {
      local_fe0 = '\0';
      local_fe8 = 0;
      if (local_ff0 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_1030);
    }
    local_1038 = 0;
    if (local_1040 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_1080);
  }
  return lVar4;
}



// FUNCTION 1420a7130 FUN_1420a7130 body=332 status=ok
// SIG undefined FUN_1420a7130(void)

undefined8 * FUN_1420a7130(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96d58;
  *(undefined1 *)(plVar6 + 7) = 0;
  plVar6[8] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7280 FUN_1420a7280 body=332 status=ok
// SIG undefined FUN_1420a7280(void)

undefined8 * FUN_1420a7280(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96d48;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a73d0 FUN_1420a73d0 body=332 status=ok
// SIG undefined FUN_1420a73d0(void)

undefined8 * FUN_1420a73d0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96ca8;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7520 FUN_1420a7520 body=332 status=ok
// SIG undefined FUN_1420a7520(void)

undefined8 * FUN_1420a7520(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96d38;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7670 FUN_1420a7670 body=332 status=ok
// SIG undefined FUN_1420a7670(void)

undefined8 * FUN_1420a7670(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96d68;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a77c0 FUN_1420a77c0 body=332 status=ok
// SIG undefined FUN_1420a77c0(void)

undefined8 * FUN_1420a77c0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96cd8;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7910 FUN_1420a7910 body=332 status=ok
// SIG undefined FUN_1420a7910(void)

undefined8 * FUN_1420a7910(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96cc8;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7a60 FUN_1420a7a60 body=332 status=ok
// SIG undefined FUN_1420a7a60(void)

undefined8 * FUN_1420a7a60(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96ce8;
  *(undefined1 *)(plVar6 + 7) = 0;
  plVar6[8] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7bb0 FUN_1420a7bb0 body=332 status=ok
// SIG undefined FUN_1420a7bb0(void)

undefined8 * FUN_1420a7bb0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96cf8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7d00 FUN_1420a7d00 body=332 status=ok
// SIG undefined FUN_1420a7d00(void)

undefined8 * FUN_1420a7d00(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96d08;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7e50 FUN_1420a7e50 body=332 status=ok
// SIG undefined FUN_1420a7e50(void)

undefined8 * FUN_1420a7e50(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96d18;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a7fa0 FUN_1420a7fa0 body=332 status=ok
// SIG undefined FUN_1420a7fa0(void)

undefined8 * FUN_1420a7fa0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96d28;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a80f0 FUN_1420a80f0 body=332 status=ok
// SIG undefined FUN_1420a80f0(void)

undefined8 * FUN_1420a80f0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f96cb8;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1420a8240 CreateTextures body=1673 status=ok
// SIG undefined CreateTextures(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSlateRHIResourceManager::CreateTextures(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  undefined1 local_1b8 [4];
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong *local_188;
  int local_180;
  uint uStack_17c;
  uint *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148 [2];
  ulonglong *local_138;
  undefined8 uStack_130;
  uint *local_128;
  uint uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  longlong *local_110;
  longlong *local_108;
  undefined1 *local_100;
  undefined1 **local_f8;
  undefined1 ***local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  longlong local_d0 [2];
  ulonglong *local_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined8 local_90;
  uint local_88 [4];
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  uVar11 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_1a0 = DAT_1464ca78c;
  local_1ac = 0;
  local_108 = param_2;
  if (0 < (int)param_2[1]) {
    local_1a8 = 0;
    local_198 = 0;
    local_158 = 0;
    uVar12 = uVar11;
    uVar16 = uVar11;
    do {
      uVar15 = (uint)uVar16;
      lVar7 = *(longlong *)(local_158 + *local_108);
      local_160 = *(longlong *)(lVar7 + 0x50);
      if ((local_160 == 0) && (*(longlong *)(lVar7 + 0x48) != 0)) {
        local_160 = *(longlong *)(*(longlong *)(lVar7 + 0x48) + 0x18);
      }
      if ((((local_160 != 0) && (*(longlong *)(lVar7 + 0x48) == 0)) &&
          ((*(byte *)(lVar7 + 0x80) & 2) == 0)) && ((*(byte *)(lVar7 + 0x80) & 1) == 0)) {
        iVar9 = (int)((ulonglong)local_160 >> 0x20);
        if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
          plVar14 = (longlong *)param_1[0xb];
          if ((longlong *)param_1[0xb] == (longlong *)0x0) {
            plVar14 = param_1 + 10;
          }
          iVar5 = *(int *)((longlong)plVar14 +
                          ((longlong)(iVar9 + (int)local_160) & (longlong)(int)param_1[0xc] - 1U) *
                          4);
          if (iVar5 != -1) {
            do {
              if (*(longlong *)(param_1[3] + (longlong)iVar5 * 0x18) == local_160) {
                if (iVar5 != -1) goto LAB_1420a8627;
                break;
              }
              iVar5 = *(int *)(param_1[3] + 0x10 + (longlong)iVar5 * 0x18);
            } while (iVar5 != -1);
          }
        }
        if ((int)local_90 != local_64) {
          puVar6 = local_60;
          if (uVar12 != 0) {
            puVar6 = (undefined1 *)0x0;
          }
          iVar9 = *(int *)(((ulonglong)puVar6 | uVar12) +
                          (longlong)(int)(iVar9 + (int)local_160 & local_50 - 1U) * 4);
          while (iVar9 != -1) {
            lVar13 = (longlong)iVar9 * 0x28;
            if (*(longlong *)(uVar11 + (longlong)iVar9 * 0x28) == local_160) {
              if ((iVar9 != -1) && (lVar13 = uVar11 + lVar13, lVar13 != 0)) goto LAB_1420a845e;
              break;
            }
            iVar9 = *(int *)(uVar11 + 0x20 + lVar13);
          }
        }
        local_110 = &local_160;
        FUN_14209afb0(&local_98,&local_1a8,&local_110,0);
        lVar13 = local_98 + (longlong)(int)local_1a8 * 0x28;
LAB_1420a845e:
        cVar4 = *(char *)(lVar7 + 0x6f);
        plVar14 = (longlong *)(lVar13 + 8);
        *(bool *)(lVar13 + 0x19) = cVar4 != '\x02';
        if (((*(char *)(lVar7 + 0x6d) == '\0') && (cVar4 != '\x02')) && ((int)param_1[0x46] != 0)) {
          bVar3 = 1;
        }
        else {
          bVar3 = 0;
        }
        *(byte *)(lVar13 + 0x18) = *(byte *)(lVar13 + 0x18) & bVar3;
        uVar11 = local_98;
        uVar12 = local_58;
        if (*plVar14 == 0) {
          local_1c8 = local_148;
          local_1b4 = 0;
          local_1b0 = 0;
          local_148[0] = 0;
          local_148[1] = 0;
          cVar4 = (**(code **)(*param_1 + 0x28))(param_1,lVar7,&local_1b4,&local_1b0);
          lVar7 = operator_new(0x20);
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            local_1c8 = local_148;
            lVar7 = FSlateTextureData::FSlateTextureData(lVar7,local_1b4,local_1b0,local_1a0);
          }
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            *(undefined4 *)(plVar8 + 1) = 1;
            *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
            *plVar8 = (longlong)&PTR_FUN_144f96db8;
            plVar8[2] = lVar7;
          }
          local_190 = lVar7;
          local_188 = plVar8;
          SharedPointerInternals::EnableSharedFromThis(&local_190,lVar7,lVar7);
          if (plVar14 != &local_190) {
            *plVar14 = lVar7;
            local_190 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar13 + 0x10,&local_188);
            plVar8 = local_188;
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if ((((local_1b4 < *(uint *)((longlong)param_1 + 0x234)) &&
               (local_1b0 < *(uint *)(param_1 + 0x47))) && (local_1b4 < *(uint *)(param_1 + 0x46)))
             && (local_1b0 < *(uint *)(param_1 + 0x46))) {
            bVar3 = 1;
          }
          else {
            bVar3 = 0;
          }
          *(byte *)(lVar13 + 0x18) = *(byte *)(lVar13 + 0x18) & bVar3;
          if ((cVar4 == '\0') || (*(int *)(*plVar14 + 8) < 1)) {
            TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>
            ::Remove(&local_98,local_160);
          }
          uVar11 = local_98;
          uVar12 = local_58;
          uVar15 = local_1ac;
          if (local_148[0] != 0) {
            FMemory::Free();
            uVar11 = local_98;
            uVar12 = local_58;
            uVar15 = local_1ac;
          }
        }
      }
LAB_1420a8627:
      local_1ac = uVar15 + 1;
      uVar16 = (ulonglong)local_1ac;
      local_158 = local_158 + 8;
    } while ((int)local_1ac < (int)local_108[1]);
  }
  iVar9 = 0x20;
  local_100 = local_1b8;
  local_f8 = &local_100;
  if (0 < (int)local_90 - local_64) {
    TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(&local_98);
    local_f0 = &local_f8;
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FNewTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>_>
              (local_98,(longlong)((int)local_90 - local_64),local_1b8[0],&local_f0);
  }
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::Rehash(&local_98);
  puStack_178 = local_88;
  local_180 = 0;
  uStack_17c = 1;
  iStack_16c = 0;
  iStack_168 = 0;
  if ((int)local_70 != 0) {
    puVar10 = local_88;
    if (local_78 != (uint *)0x0) {
      puVar10 = local_78;
    }
    uVar15 = *puVar10;
    iStack_168 = 0;
    while (uVar15 == 0) {
      iStack_168 = iStack_168 + 0x20;
      if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_180) {
        iStack_16c = (int)local_70;
        local_180 = local_180 + 1;
        goto LAB_1420a8773;
      }
      uVar15 = puVar10[(longlong)local_180 + 1];
      local_180 = local_180 + 1;
    }
    uStack_17c = -uVar15 & uVar15;
    iVar5 = 0x1f;
    if (uStack_17c != 0) {
      for (; uStack_17c >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_17c != 0) {
      iVar9 = 0x1f - iVar5;
    }
    iStack_16c = (iStack_168 - iVar9) + 0x1f;
    if ((int)local_70 < iStack_16c) {
      iStack_16c = (int)local_70;
    }
  }
LAB_1420a8773:
  local_170 = 0xffffffff;
  local_138 = &local_98;
  uStack_130 = CONCAT44(uStack_17c,local_180);
  uStack_a8 = 0xffffffff;
  iStack_a4 = iStack_16c;
  iStack_a0 = iStack_168;
  uStack_9c = uStack_164;
  uStack_120 = 0xffffffff;
  iStack_11c = iStack_16c;
  local_118 = iStack_168;
  uStack_114 = uStack_164;
  local_128 = puStack_178;
  local_c0 = local_138;
  uStack_b8 = uStack_130;
  puStack_b0 = puStack_178;
  if (iStack_16c < (int)local_70) {
    local_e0 = &local_150;
    local_d8 = &local_e8;
    do {
      lVar7 = (longlong)iStack_11c;
      uVar11 = *local_138;
      local_150 = *(undefined8 *)(uVar11 + lVar7 * 0x28);
      FName::ToString(&local_150,local_d0);
      local_e8 = FUN_1420b5320(param_1,uVar11 + lVar7 * 0x28 + 8);
      FUN_141711540(param_1 + 3,&local_198,&local_e0,0);
      if (local_d0[0] != 0) {
        FMemory::Free();
      }
      uStack_120 = uStack_120 & ~uStack_130._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
    } while (iStack_11c < (int)local_128[6]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_98,0);
  if (local_78 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420a88d0 CreateUpdatableTexture body=160 status=ok
// SIG undefined CreateUpdatableTexture(void)

longlong *
FSlateRHIRenderer::CreateUpdatableTexture(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar2 = operator_new(0x78);
  plVar5 = (longlong *)0x0;
  plVar3 = plVar5;
  if (lVar2 != 0) {
    local_18 = 0;
    uStack_10 = 0;
    plVar3 = (longlong *)FUN_1427ee790(lVar2,param_2,param_3,2,&local_18,0x100,1);
  }
  plVar4 = plVar3 + 4;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    if (plVar3 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    FUN_141edf270(plVar4);
  }
  else {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plVar4 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = plVar5;
  }
  return plVar4;
}



// FUNCTION 1420a8970 FUN_1420a8970 body=952 status=ok
// SIG undefined FUN_1420a8970(void)

void FUN_1420a8970(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined1 uVar10;
  int *piVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  undefined1 local_c8 [8];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 **local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [72];
  
  FUN_141ee24f0(0);
  lVar3 = *param_2;
  local_b8 = param_1 + 0xc0;
  piVar11 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                   ::FindId(local_b8,local_res10,lVar3);
  if (*piVar11 == -1) {
    pfVar12 = (float *)(lVar3 + 0x380);
    if (*pfVar12 == 0.0) {
      pfVar12 = (float *)(lVar3 + 0x378);
    }
    iVar16 = (int)*pfVar12;
    if ((int)*pfVar12 < 9) {
      iVar16 = 8;
    }
    iVar2 = (int)pfVar12[1];
    if ((int)pfVar12[1] < 9) {
      iVar2 = 8;
    }
    if ((0x4000 < iVar16) || (iVar15 = iVar2, 0x4000 < iVar2)) {
      if (iVar16 < 8) {
        iVar15 = 8;
      }
      else {
        iVar15 = 0x4000;
        if (iVar16 < 0x4000) {
          iVar15 = iVar16;
        }
      }
      iVar16 = iVar15;
      if (iVar2 < 8) {
        iVar15 = 8;
      }
      else {
        iVar15 = 0x4000;
        if (iVar2 < 0x4000) {
          iVar15 = iVar2;
        }
      }
    }
    puVar13 = (undefined8 *)operator_new();
    local_res20 = (undefined8 *)0x0;
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar13 + 1) = 4;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *(undefined1 *)(puVar13 + 5) = 0;
      *puVar13 = &PTR_FUN_144f96270;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      puVar13[0x12] = 0;
      puVar13[0x13] = 0;
      puVar13[0x14] = 0;
      puVar13[0x15] = 0;
      puVar13[0x16] = 0;
      puVar13[0x17] = 0;
      puVar13[0x18] = 0;
      puVar13[0x19] = 0;
      puVar13[0x1a] = 0;
      puVar13[0x1b] = 0;
      *(undefined2 *)(puVar13 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar13 + 0xe4) = 0;
      *(undefined8 *)((longlong)puVar13 + 0xec) = 0;
      puVar13[0x1f] = 0;
      local_res20 = puVar13;
    }
    puVar13 = (undefined8 *)FUN_14183ac60(*param_2,local_a0);
    plVar4 = (longlong *)puVar13[1];
    plVar5 = (longlong *)*puVar13;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar11 = (int *)((longlong)local_98 + 0xc);
        iVar2 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    uVar14 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    local_res20[0x19] = uVar14;
    *(int *)(local_res20 + 0x1a) = iVar16;
    *(int *)((longlong)local_res20 + 0xd4) = iVar15;
    *(int *)(local_res20 + 0x1b) = iVar16;
    *(int *)((longlong)local_res20 + 0xdc) = iVar15;
    puVar13 = (undefined8 *)FSlateRHIRenderer::CreateProjectionMatrix(local_88,iVar16,iVar15);
    uVar14 = puVar13[1];
    local_res20[6] = *puVar13;
    local_res20[7] = uVar14;
    uVar14 = puVar13[3];
    local_res20[8] = puVar13[2];
    local_res20[9] = uVar14;
    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x24);
    uVar7 = *(undefined4 *)(puVar13 + 5);
    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x2c);
    *(undefined4 *)(local_res20 + 10) = *(undefined4 *)(puVar13 + 4);
    *(undefined4 *)((longlong)local_res20 + 0x54) = uVar6;
    *(undefined4 *)(local_res20 + 0xb) = uVar7;
    *(undefined4 *)((longlong)local_res20 + 0x5c) = uVar8;
    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x34);
    uVar7 = *(undefined4 *)(puVar13 + 7);
    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x3c);
    *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(puVar13 + 6);
    *(undefined4 *)((longlong)local_res20 + 100) = uVar6;
    *(undefined4 *)(local_res20 + 0xd) = uVar7;
    *(undefined4 *)((longlong)local_res20 + 0x6c) = uVar8;
    *(undefined4 *)(local_res20 + 0x1d) = *(undefined4 *)((longlong)local_res20 + 0xe4);
    cVar9 = FUN_141ee41d0();
    if (cVar9 != '\0') {
      *(undefined4 *)((longlong)local_res20 + 0xe4) = DAT_1464c9c38;
    }
    uVar10 = FSlateRenderer::IsViewportFullscreen(param_1,*param_2);
    (**(code **)(*DAT_146ab6358 + 0x3a8))
              (DAT_146ab6358,local_c8,local_res20[0x19],iVar16,iVar15,uVar10,
               *(undefined4 *)((longlong)local_res20 + 0xe4));
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_res20 + 0xe,local_c8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_c8);
    *(undefined1 *)((longlong)local_res20 + 0xe1) = uVar10;
    local_c0 = *param_2;
    local_b0 = &local_c0;
    local_a8 = &local_res20;
    FUN_140a9d130(local_b8,local_res18,&local_b0,0);
    FUN_141edf270(local_res20);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar11 = (int *)((longlong)plVar4 + 0xc);
        iVar16 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar11 = (int *)((longlong)plVar4 + 0xc);
      iVar16 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1420a8d30 DeleteBrushResourcesCommand body=73 status=ok
// SIG undefined DeleteBrushResourcesCommand(void)

void FSlateRHIResourceManager::DeleteBrushResourcesCommand(longlong param_1)

{
  BOOL BVar1;
  
  FUN_141ee24f0(0);
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  }
  FUN_1420a93a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001420a8d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return;
}



// FUNCTION 1420a8d80 FUN_1420a8d80 body=1139 status=ok
// SIG undefined FUN_1420a8d80(void)

void FUN_1420a8d80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint local_148;
  uint uStack_144;
  int iStack_134;
  uint uStack_130;
  uint local_120;
  uint uStack_11c;
  int iStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  undefined2 local_c0;
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar10 = 0;
  uStack_11c = 1;
  plVar2 = (longlong *)(param_1 + 0x248);
  local_120 = 0;
  iVar9 = *(int *)(param_1 + 0x270);
  local_e8 = (uint *)(param_1 + 600);
  iStack_10c = 0;
  uStack_108 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)(param_1 + 0x268);
    if (*(uint **)(param_1 + 0x268) == (uint *)0x0) {
      puVar14 = local_e8;
    }
    uVar13 = *puVar14;
    local_120 = uVar10;
    uStack_108 = uVar10;
    while (uVar13 == 0) {
      lVar11 = (longlong)(int)local_120;
      uStack_108 = uStack_108 + 0x20;
      uVar13 = local_120 + 1;
      bVar4 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_120;
      local_120 = uVar13;
      if (bVar4) goto LAB_1420a8e52;
      uVar13 = puVar14[lVar11 + 1];
    }
    uStack_11c = -uVar13 & uVar13;
    iVar7 = 0x1f;
    if (uStack_11c != 0) {
      for (; uStack_11c >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_11c == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_10c = (uStack_108 - iVar7) + 0x1f;
    if (iVar9 < iStack_10c) {
LAB_1420a8e52:
      iStack_10c = iVar9;
    }
  }
  uStack_e0 = CONCAT44(iStack_10c,0xffffffff);
  auVar6._8_4_ = uStack_108;
  auVar6._0_8_ = uStack_e0;
  auVar6._12_4_ = uStack_104;
  uStack_50._0_4_ = SUB84(plVar2,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
  uStack_f0 = CONCAT44(uStack_11c,local_120);
  local_c0 = 0;
  uStack_58 = auVar6._8_8_;
  local_d8._8_4_ = (undefined4)uStack_50;
  local_d8._0_8_ = uStack_58;
  local_d8._12_4_ = uStack_50._4_4_;
  iVar9 = iStack_10c;
  local_c8 = plVar2;
  uStack_50 = plVar2;
  if (iStack_10c < *(int *)(param_1 + 0x270)) {
    do {
      puVar3 = *(undefined8 **)(*plVar2 + 8 + (longlong)iVar9 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        if (puVar3[0x13] != 0) {
          LOCK();
          piVar1 = (int *)(puVar3[0x13] + 0x48);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            FGraphEvent::Recycle();
          }
        }
        puVar3[9] = &PTR__scalar_deleting_destructor__143f48b30;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar3 + 0x10);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar3 + 0xf);
        FUN_141edd2d0(puVar3 + 9);
        *puVar3 = &PTR_FUN_143f48ad0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar3 + 6);
        FUN_141edd2d0(puVar3);
        FMemory::operator_delete(puVar3,0xa0);
      }
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
      iVar9 = uStack_e0._4_4_;
    } while (uStack_e0._4_4_ < (int)local_e8[6]);
    if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34),1);
    }
  }
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0);
  plVar2 = (longlong *)(param_1 + 0x298);
  iVar9 = *(int *)(param_1 + 0x2c0);
  local_a8 = (uint *)(param_1 + 0x2a8);
  local_148 = 0;
  uStack_144 = 1;
  iStack_134 = 0;
  uStack_130 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)(param_1 + 0x2b8);
    if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
      puVar14 = local_a8;
    }
    uVar13 = *puVar14;
    local_148 = uVar10;
    uStack_130 = uVar10;
    while (uVar13 == 0) {
      lVar11 = (longlong)(int)local_148;
      uStack_130 = uStack_130 + 0x20;
      uVar10 = local_148 + 1;
      bVar4 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_148;
      local_148 = uVar10;
      if (bVar4) goto LAB_1420a9065;
      uVar13 = puVar14[lVar11 + 1];
    }
    uStack_144 = -uVar13 & uVar13;
    iVar7 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_134 = (uStack_130 - iVar7) + 0x1f;
    if (iVar9 < iStack_134) {
LAB_1420a9065:
      iStack_134 = iVar9;
    }
  }
  uStack_a0 = CONCAT44(iStack_134,0xffffffff);
  auVar5._8_4_ = uStack_130;
  auVar5._0_8_ = uStack_a0;
  auVar5._12_4_ = iStack_10c;
  uStack_50._0_4_ = SUB84(plVar2,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
  uStack_58 = auVar5._8_8_;
  uStack_70 = local_148;
  uStack_6c = uStack_144;
  local_80 = 0;
  uStack_b0 = local_148;
  uStack_ac = uStack_144;
  local_98._8_4_ = (undefined4)uStack_50;
  local_98._0_8_ = uStack_58;
  local_98._12_4_ = uStack_50._4_4_;
  local_b8 = plVar2;
  local_88 = plVar2;
  local_78 = plVar2;
  puStack_68 = local_a8;
  uStack_60 = uStack_a0;
  uStack_50 = plVar2;
  if (iStack_134 < *(int *)(param_1 + 0x2c0)) {
    do {
      uVar15 = 0;
      uVar8 = (ulonglong)*(int *)((longlong)iStack_134 * 0x20 + 0x10 + *local_b8);
      plVar12 = *(longlong **)((longlong)iStack_134 * 0x20 + 8 + *local_b8);
      uVar16 = uVar8 & 0x1fffffffffffffff;
      if (plVar12 + uVar8 < plVar12) {
        uVar16 = uVar15;
      }
      if (uVar16 != 0) {
        do {
          puVar3 = (undefined8 *)*plVar12;
          if (puVar3 != (undefined8 *)0x0) {
            if (puVar3[0x13] != 0) {
              LOCK();
              piVar1 = (int *)(puVar3[0x13] + 0x48);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                FGraphEvent::Recycle();
              }
            }
            puVar3[9] = &PTR__scalar_deleting_destructor__143f48b30;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar3 + 0x10);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar3 + 0xf);
            FUN_141edd2d0(puVar3 + 9);
            *puVar3 = &PTR_FUN_143f48ad0;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar3 + 6);
            FUN_141edd2d0(puVar3);
            FMemory::operator_delete(puVar3,0xa0);
          }
          plVar12 = plVar12 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar16);
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_ac);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
      iStack_134 = uStack_a0._4_4_;
    } while (uStack_a0._4_4_ < (int)local_a8[6]);
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
    }
  }
  TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0);
  return;
}



// FUNCTION 1420a9200 FUN_1420a9200 body=406 status=ok
// SIG undefined FUN_1420a9200(void)

void FUN_1420a9200(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  BOOL BVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar8 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar8 + *(longlong *)(param_1 + 0x210));
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x218));
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x228)) {
    lVar8 = 0;
    do {
      plVar9 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x220));
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9,1);
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x228));
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x210,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(int *)(param_1 + 0x22c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x220,0);
  }
  iVar7 = *(int *)(param_1 + 0x1f8);
  if (iVar7 != 0) {
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + 8);
    do {
      plVar5 = (longlong *)*plVar9;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      plVar9 = plVar9 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1f0,0);
  }
  FUN_1420a45f0(param_1 + 0x10);
  FUN_1420a93a0(param_1);
  FUN_1420a8d80(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001420a938f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return;
}



// FUNCTION 1420a93a0 FUN_1420a93a0 body=353 status=ok
// SIG undefined FUN_1420a93a0(void)

void FUN_1420a93a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xf0,0);
  TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x140,0);
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xa0,0);
  iVar6 = *(int *)(param_1 + 0x208);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x200) + 8);
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
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x200,0);
  }
  iVar6 = *(int *)(param_1 + 0x1e8);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
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
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(int *)(param_1 + 0x1ec) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1e0,0);
  }
  return;
}



// FUNCTION 1420a9510 FUN_1420a9510 body=1434 status=ok
// SIG undefined FUN_1420a9510(void)

void FUN_1420a9510(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  uint local_148;
  uint uStack_144;
  int iStack_134;
  uint uStack_130;
  undefined4 local_120;
  undefined4 uStack_11c;
  int local_118;
  uint uStack_114;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  longlong *plStack_e8;
  longlong local_e0;
  longlong *plStack_d8;
  undefined8 local_d0;
  longlong *plStack_c8;
  undefined8 local_c0;
  longlong *aplStack_b8 [2];
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  longlong *local_38;
  undefined2 local_30;
  
  plVar4 = (longlong *)(param_1 + 0x210);
  *(undefined1 *)(param_1 + 0xb9) = 1;
  lVar14 = *plVar4;
  cVar10 = IsInRenderingThread();
  if (cVar10 == '\0') {
    FUN_141edf360(lVar14 + 0x20);
  }
  else {
    (**(code **)(*(longlong *)(lVar14 + 0x20) + 0x30))();
  }
  cVar10 = IsInRenderingThread();
  if (cVar10 == '\0') {
    FUN_141edf360(lVar14 + 0x68);
  }
  else {
    (**(code **)(*(longlong *)(lVar14 + 0x68) + 0x30))();
  }
  puVar5 = (undefined8 *)(param_1 + 0x200);
  FUN_1420bc490(*puVar5);
  FSlateFontServices::ReleaseResources();
  plVar6 = (longlong *)(param_1 + 0xc0);
  local_118 = 0;
  uStack_114 = 1;
  iVar12 = *(int *)(param_1 + 0xe8);
  local_98 = (uint *)(param_1 + 0xd0);
  iStack_104 = 0;
  iStack_100 = 0;
  if (iVar12 != 0) {
    puVar15 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar15 = local_98;
    }
    uVar13 = *puVar15;
    local_118 = 0;
    iStack_100 = 0;
    while (uVar13 == 0) {
      lVar14 = (longlong)local_118;
      iStack_100 = iStack_100 + 0x20;
      iVar11 = local_118 + 1;
      bVar7 = (int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_118;
      local_118 = iVar11;
      if (bVar7) goto LAB_1420a9655;
      uVar13 = puVar15[lVar14 + 1];
    }
    uStack_114 = -uVar13 & uVar13;
    iVar11 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_104 = (iStack_100 - iVar11) + 0x1f;
    if (iVar12 < iStack_104) {
LAB_1420a9655:
      iStack_104 = iVar12;
    }
  }
  uStack_90 = CONCAT44(iStack_104,0xffffffff);
  auVar9._8_4_ = iStack_100;
  auVar9._0_8_ = uStack_90;
  auVar9._12_4_ = uStack_fc;
  local_120 = SUB84(plVar6,0);
  uStack_11c = (undefined4)((ulonglong)plVar6 >> 0x20);
  local_70 = 0;
  iStack_a0 = local_118;
  uStack_9c = uStack_114;
  local_88._8_4_ = local_120;
  local_88._0_8_ = auVar9._8_8_;
  local_88._12_4_ = uStack_11c;
  iVar12 = iStack_104;
  local_a8 = plVar6;
  local_78 = plVar6;
  if (iStack_104 < *(int *)(param_1 + 0xe8)) {
    do {
      FUN_141edf360(*(undefined8 *)(*local_a8 + 8 + (longlong)iVar12 * 0x18));
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
      iVar12 = uStack_90._4_4_;
    } while (uStack_90._4_4_ < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  FUN_141ee24f0(0);
  local_f0 = 0;
  plStack_e8 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1f0) != &local_f0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1f8,&plStack_e8);
    plVar3 = plStack_e8;
    if (plStack_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e8 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_e8)(plStack_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_e8 + 8))(plStack_e8,1);
        }
      }
    }
  }
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  if (plVar4 != &local_e0) {
    *plVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x218,&plStack_d8);
    plVar4 = plStack_d8;
    if (plStack_d8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_d8 + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_d8)(plStack_d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_d8 + 8))(plStack_d8,1);
        }
      }
    }
  }
  local_d0 = 0;
  plStack_c8 = (longlong *)0x0;
  if (puVar5 != &local_d0) {
    *puVar5 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x208,&plStack_c8);
    plVar4 = plStack_c8;
    if (plStack_c8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_c8 + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_c8)(plStack_c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_c8 + 8))(plStack_c8,1);
        }
      }
    }
  }
  local_c0 = 0;
  aplStack_b8[0] = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 8) != &local_c0) {
    *(undefined8 *)(param_1 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,aplStack_b8);
    plVar4 = aplStack_b8[0];
    if (aplStack_b8[0] != (longlong *)0x0) {
      LOCK();
      plVar3 = aplStack_b8[0] + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*aplStack_b8[0])(aplStack_b8[0]);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*aplStack_b8[0] + 8))(aplStack_b8[0],1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    TArray<FRenderThreadUpdateContext,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo
              (param_1 + 0x250,0);
  }
  iVar12 = *(int *)(param_1 + 0xe8);
  local_58 = (uint *)(param_1 + 0xd0);
  local_148 = 0;
  uStack_144 = 1;
  iStack_134 = 0;
  uStack_130 = 0;
  if (iVar12 != 0) {
    puVar15 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar15 = local_58;
    }
    uVar13 = *puVar15;
    local_148 = 0;
    uStack_130 = 0;
    while (uVar13 == 0) {
      lVar14 = (longlong)(int)local_148;
      uStack_130 = uStack_130 + 0x20;
      uVar13 = local_148 + 1;
      bVar7 = (int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_148;
      local_148 = uVar13;
      if (bVar7) goto LAB_1420a9991;
      uVar13 = puVar15[lVar14 + 1];
    }
    uStack_144 = -uVar13 & uVar13;
    iVar11 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_134 = (uStack_130 - iVar11) + 0x1f;
    if (iVar12 < iStack_134) {
LAB_1420a9991:
      iStack_134 = iVar12;
    }
  }
  uStack_50 = CONCAT44(iStack_134,0xffffffff);
  auVar8._8_4_ = uStack_130;
  auVar8._0_8_ = uStack_50;
  auVar8._12_4_ = iStack_104;
  local_30 = 0;
  uStack_60 = local_148;
  uStack_5c = uStack_144;
  local_48._8_4_ = local_120;
  local_48._0_8_ = auVar8._8_8_;
  local_48._12_4_ = uStack_11c;
  local_68 = plVar6;
  local_38 = plVar6;
  if (iStack_134 < *(int *)(param_1 + 0xe8)) {
    do {
      puVar5 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_134 * 0x18);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 & ~uStack_5c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      iStack_134 = uStack_50._4_4_;
    } while (uStack_50._4_4_ < (int)local_58[6]);
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_38,(int)local_38[1] - *(int *)((longlong)local_38 + 0x34),1);
    }
  }
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(plVar6,0);
  *(undefined4 *)(param_1 + 0x2d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(int *)(param_1 + 0x2cc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2c0,0);
  }
  return;
}



// FUNCTION 1420a9ab0 FUN_1420a9ab0 body=52 status=ok
// SIG undefined FUN_1420a9ab0(void)

void FUN_1420a9ab0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x20);
    return;
  }
  return;
}



// FUNCTION 1420a9af0 FUN_1420a9af0 body=77 status=ok
// SIG undefined FUN_1420a9af0(void)

void FUN_1420a9af0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FSlateShaderResourceProxy::_scalar_deleting_destructor_(*plVar1,1);
    }
    plVar2 = (longlong *)plVar1[1];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
    }
    FMemory::operator_delete(plVar1,0x10);
    return;
  }
  return;
}



// FUNCTION 1420a9b40 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlateElementBatcher,SharedPointerInternals::DefaultDeleter<FSlateElementBatcher>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
    FMemory::operator_delete(lVar1,0x48);
    return;
  }
  return;
}



// FUNCTION 1420a9b70 DestroyObject body=66 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlateInstanceBufferUpdate,SharedPointerInternals::DefaultDeleter<FSlateInstanceBufferUpdate>_>
     ::DestroyObject(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((longlong)puVar1 + 0x14) == '\0') {
      (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,*(undefined4 *)(puVar1[1] + 8))
      ;
      *(undefined1 *)((longlong)puVar1 + 0x14) = 1;
    }
    FMemory::operator_delete(puVar1,0x18);
    return;
  }
  return;
}



// FUNCTION 1420a9bc0 DestroyObject body=89 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlatePostProcessor,SharedPointerInternals::DefaultDeleter<FSlatePostProcessor>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    lVar3 = lVar2 + 8;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    FUN_141edf360(lVar3);
    lVar3 = lVar2 + 0x38;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    BeginCleanup(lVar3);
    FMemory::operator_delete(plVar1,8);
  }
  return;
}



// FUNCTION 1420a9c20 FUN_1420a9c20 body=480 status=ok
// SIG undefined FUN_1420a9c20(void)

void FUN_1420a9c20(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_48 [2];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(local_48);
  iVar8 = *(int *)(*param_1 + 0x2f0) + -1;
  if (-1 < iVar8) {
    lVar9 = (longlong)iVar8 * 8;
    lVar10 = (longlong)*(int *)(*param_1 + 0x2f0) << 3;
    lVar11 = lVar9;
    do {
      plVar2 = *(longlong **)(lVar11 + *(longlong *)(*param_1 + 0x2e8));
      LOCK();
      uVar6 = *(ulonglong *)(plVar2[0x13] + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(plVar2[0x13] + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      if ((uVar6 >> 0x1a & 1) != 0) {
        cVar4 = IsInRenderingThread();
        if (cVar4 == '\0') {
          FUN_141edf360(plVar2);
        }
        else {
          (**(code **)(*plVar2 + 0x30))();
        }
        cVar4 = IsInRenderingThread();
        if (cVar4 == '\0') {
          FUN_141edf360(plVar2 + 9);
        }
        else {
          (**(code **)(plVar2[9] + 0x30))();
        }
        if (plVar2[0x13] != 0) {
          LOCK();
          piVar1 = (int *)(plVar2[0x13] + 0x48);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar2[9] = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2 + 0x10);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2 + 0xf);
        FUN_141edd2d0(plVar2 + 9);
        *plVar2 = (longlong)&PTR_FUN_143f48ad0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2 + 6);
        FUN_141edd2d0(plVar2);
        FMemory::operator_delete(plVar2,0xa0);
        lVar3 = *param_1;
        iVar5 = *(int *)(lVar3 + 0x2f0);
        iVar7 = (iVar5 - iVar8) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + *(longlong *)(lVar3 + 0x2e8)),
                     (void *)(lVar10 + *(longlong *)(lVar3 + 0x2e8)),(longlong)iVar7 << 3);
          iVar5 = *(int *)(lVar3 + 0x2f0);
        }
        *(int *)(lVar3 + 0x2f0) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar3 + 0x2e8);
      }
      lVar10 = lVar10 + -8;
      lVar9 = lVar9 + -8;
      lVar11 = lVar11 + -8;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  QueryPerformanceCounter(&local_res20);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_48[0]._0_4_);
  return;
}



// FUNCTION 1420a9e00 FUN_1420a9e00 body=159 status=ok
// SIG undefined FUN_1420a9e00(void)

void FUN_1420a9e00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  puVar2 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar2 = param_1;
  }
  puVar3 = puVar2 + (longlong)*(int *)(param_1 + 9) * 4;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
    (**(code **)(*(longlong *)puVar2[2] + 0x20))
              ((longlong *)puVar2[2],uVar1,puVar2[1],*puVar2,*(undefined1 *)(puVar2 + 3));
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1420a9ea0 FUN_1420a9ea0 body=133 status=ok
// SIG undefined FUN_1420a9ea0(void)

void FUN_1420a9ea0(longlong *param_1)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  longlong local_18;
  longlong local_10;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    local_10 = param_1[2];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FSlateTexture2DRHIRef::SetTextureData(*(undefined8 *)(*param_1 + 8),&local_18,2);
  }
  (**(code **)(*(longlong *)(*(longlong *)(*param_1 + 8) + 0x20) + 0x28))
            (*(longlong *)(*param_1 + 8) + 0x20);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1420a9f30 FUN_1420a9f30 body=295 status=ok
// SIG undefined FUN_1420a9f30(void)

void FUN_1420a9f30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar7 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  plVar1 = (longlong *)(lVar4 + 0x248);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,&local_res8,lVar5);
  if (((local_res8.s.LowPart != 0xffffffff) &&
      (lVar2 = *plVar1 + (longlong)(int)local_res8.s.LowPart * 0x18, lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x298,&local_res8,lVar6);
    plVar8 = (longlong *)0x0;
    if (local_res8.s.LowPart != 0xffffffff) {
      plVar8 = (longlong *)
               ((longlong)(int)local_res8.s.LowPart * 0x20 + *(longlong *)(lVar4 + 0x298));
    }
    plVar9 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    if (plVar9 == (longlong *)0x0) {
      FUN_1420bb800(lVar4,uVar7,lVar2);
    }
    else {
      iVar3 = (int)plVar9[1];
      *(int *)(plVar9 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar9 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      *(longlong *)(*plVar9 + (longlong)iVar3 * 8) = lVar2;
    }
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(plVar1,lVar5);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1420aa060 FUN_1420aa060 body=251 status=ok
// SIG undefined FUN_1420aa060(void)

void FUN_1420aa060(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  longlong lVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  uint uVar4;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  plVar1 = (longlong *)param_1[1];
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x40);
  if (*(char *)(lVar3 + 0x48) == '\0') {
    (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x28))(lVar3 + 0x20);
    lVar3 = *(longlong *)(lVar2 + 0x40);
  }
  uVar4 = 0;
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                           (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar3 + 8),0,1,&local_res8,
                            0,1);
  _guard_xfg_dispatch_icall_nop
            (_Dst,(void *)*plVar1,
             (ulonglong)(uint)((int)plVar1[3] * *(int *)((longlong)plVar1 + 0x14) * (int)plVar1[2]))
  ;
  (**(code **)(*DAT_146ab6358 + 0x588))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 8),0,
             uVar4 & 0xffffff00,1);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  FMemory::operator_delete(plVar1,0x20);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1420aa160 FUN_1420aa160 body=198 status=ok
// SIG undefined FUN_1420aa160(void)

void FUN_1420aa160(longlong *param_1)

{
  longlong lVar1;
  void *_Dst;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  uint uVar2;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar2 = 0;
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                           (DAT_146ab6358,&DAT_146ab6e78,
                            *(undefined8 *)(*(longlong *)(*param_1 + 0x48) + 8),0,1,local_res8,0,1);
  lVar1 = *param_1;
  _guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)(lVar1 + 0x10),
             (ulonglong)
             (uint)(*(int *)(lVar1 + 0x38) * *(int *)(lVar1 + 0x34) * *(int *)(lVar1 + 0x30)));
  (**(code **)(*DAT_146ab6358 + 0x588))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(*param_1 + 0x48) + 8),0,
             uVar2 & 0xffffff00,1);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1420aa230 FUN_1420aa230 body=1911 status=ok
// SIG undefined FUN_1420aa230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420aa230(longlong *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_2c8 [32];
  float local_2a8;
  float local_2a0;
  float local_298;
  float local_290;
  float local_288;
  float local_280;
  undefined8 local_278;
  undefined8 local_270;
  longlong local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_254;
  int local_250;
  longlong *local_248;
  uint local_240;
  undefined4 uStack_23c;
  int local_238;
  int local_234;
  int local_230;
  longlong local_228;
  longlong local_220;
  float local_218;
  float local_214;
  undefined8 local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  int *local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  ulonglong local_14c;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar13 = (longlong *)0x0;
  local_1c0 = param_5;
  local_240 = 0;
  local_230 = *(int *)(param_4 + 5);
  local_250 = *(int *)((longlong)param_4 + 0x2c);
  local_248 = param_3;
  local_258 = (*(code *)**(undefined8 **)*param_1)();
  local_254 = (**(code **)(*(longlong *)*param_1 + 8))();
  lVar6 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_1b0 = 0;
  local_1b8 = &DAT_146b09c50;
  plVar11 = (longlong *)(lVar6 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar11,&local_238,&local_1b8);
  plVar15 = plVar13;
  if (local_238 != -1) {
    plVar15 = (longlong *)((longlong)local_238 * 0x20 + *plVar11);
  }
  plVar16 = plVar15 + 2;
  if (plVar15 == (longlong *)0x0) {
    plVar16 = plVar13;
  }
  lVar6 = *plVar16;
  lVar7 = FUN_141a156e0();
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *(longlong **)(*param_1 + 0x50);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)(*param_1 + 0x40);
  }
  lVar9 = *plVar15;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  local_1a0 = 0;
  local_1a8 = &DAT_146ae4f90;
  local_228 = lVar7;
  local_220 = lVar9;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar11,&local_234,&local_1a8);
  plVar15 = plVar13;
  if (local_234 != -1) {
    plVar15 = (longlong *)((longlong)local_234 * 0x20 + *plVar11);
  }
  local_1f8 = *param_4;
  plVar11 = plVar15 + 2;
  if (plVar15 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar5 = *plVar11;
  puVar8 = puVar14 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar14 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *puVar14 = local_1f8;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[3] = puVar14;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar10 + 2) = 1;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined1 *)((longlong)puVar10 + 0x24) = 0;
  plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar11 = plVar15 + 1;
  local_1f0 = lVar9;
  if (*(longlong **)(param_2 + 0x38) < plVar11) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar15 + 1;
  }
  *(longlong **)(param_2 + 0x30) = plVar11;
  *plVar15 = local_1f0;
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar14 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar14 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  fVar18 = (float)local_230;
  **(undefined8 **)(param_2 + 8) = puVar14;
  *(undefined8 **)(param_2 + 8) = puVar14 + 1;
  puVar14[3] = plVar15;
  puVar14[1] = 0;
  *(undefined4 *)(puVar14 + 2) = 1;
  *puVar14 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar14 + 4) = 1;
  *(undefined1 *)((longlong)puVar14 + 0x24) = 0;
  fVar1 = *(float *)(param_4 + 4);
  fVar2 = *(float *)((longlong)param_4 + 0x24);
  fVar3 = *(float *)(param_4 + 3);
  fVar4 = *(float *)((longlong)param_4 + 0x1c);
  fVar17 = (float)local_250;
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  fVar22 = 1.0 / fVar18;
  puVar8 = puVar14 + 5;
  fVar21 = 1.0 / fVar17;
  fVar19 = fVar3 * fVar22;
  fVar20 = fVar4 * fVar21;
  fVar23 = fVar1 * fVar22;
  fVar24 = fVar2 * fVar21;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar14 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar14;
  *(undefined8 **)(param_2 + 8) = puVar14 + 1;
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = local_258;
  *(undefined4 *)(puVar14 + 4) = local_254;
  puVar14[2] = 0;
  *(undefined4 *)(puVar14 + 3) = 0;
  *(undefined4 *)((longlong)puVar14 + 0x24) = 0;
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar14 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar14 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  local_1e0 = 0;
  **(undefined8 **)(param_2 + 8) = puVar14;
  *(undefined8 **)(param_2 + 8) = puVar14 + 1;
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar14 + 2) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
  FUN_141a19150(param_2,lVar9,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1e0);
  local_158 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_150 = 0;
  local_14c = 0x26;
  local_144 = 0;
  local_13c = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  FUN_14049afe0(param_2,&local_198);
  local_168 = FUN_1404a0ce0();
  uStack_160 = FUN_140985530();
  local_158 = FUN_1409853f0();
  plVar11 = local_248;
  lVar9 = (**(code **)(*local_248 + 0xe0))(local_248);
  local_198 = *(undefined8 *)(lVar9 + 0x30);
  if (lVar6 == 0) {
    uStack_190 = 0;
    uVar12 = 1;
    local_1d8 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1419f3850(lVar9);
    }
    uStack_190 = *(undefined8 *)(lVar9 + 0x38);
    uVar12 = local_240;
  }
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d8);
  }
  if (lVar5 == 0) {
    uVar12 = uVar12 | 2;
    local_178 = 0;
    local_1d0 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1419f3850(lVar9);
    }
    local_178 = *(undefined8 *)(lVar9 + 0x40);
    plVar11 = local_248;
  }
  if ((uVar12 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d0);
  }
  local_14c = local_14c & 0xffffffff00000000;
  FUN_141ed6ac0(param_2,&local_198,2,1);
  lVar9 = *(longlong *)(lVar5 + 0x48);
  local_210 = 0;
  local_218 = fVar22;
  local_214 = fVar21;
  if (*(char *)(lVar9 + 0x28) == '\0') {
    FUN_1419f3850(lVar9);
  }
  local_2a8 = 0.0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar9 + 0x40),lVar5 + 200,&local_218);
  lVar9 = *(longlong *)(lVar5 + 0x48);
  local_208 = fVar19;
  local_204 = fVar20;
  local_200 = fVar23;
  local_1fc = fVar24;
  if (*(char *)(lVar9 + 0x28) == '\0') {
    FUN_1419f3850(lVar9);
  }
  local_2a8 = 0.0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar9 + 0x40),lVar5 + 0xd8,&local_208);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  local_1c8 = lVar7;
  FUN_1420bf020(lVar5,param_2,*param_4,&local_1c8);
  local_260 = 0;
  local_240 = local_258;
  uStack_23c = local_254;
  local_248 = (longlong *)0x100000001;
  local_270 = 0x100000001;
  local_278 = CONCAT44(local_254,local_258);
  local_2a0 = (float)local_1c0[1];
  local_2a8 = (float)*local_1c0;
  local_298 = fVar19;
  local_290 = fVar20;
  local_288 = (fVar1 - fVar3) / fVar18;
  local_280 = (fVar2 - fVar4) / fVar17;
  local_268 = lVar6;
  (**(code **)(*plVar11 + 0xd8))(plVar11,param_2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_220);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_228);
  return;
}



// FUNCTION 1420aa9b0 FUN_1420aa9b0 body=13087 status=ok
// SIG undefined FUN_1420aa9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420aacca) */
/* WARNING: Removing unreachable block (ram,0x0001420aad6a) */

void FUN_1420aa9b0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6,float *param_7)

{
  ushort uVar1;
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
  longlong lVar18;
  float *pfVar19;
  char cVar20;
  char cVar21;
  DWORD DVar22;
  int iVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 uVar27;
  longlong lVar28;
  longlong lVar29;
  WriteBytesMem *pWVar30;
  uchar *puVar31;
  int *piVar32;
  undefined4 *puVar33;
  undefined1 *puVar34;
  undefined8 *puVar35;
  undefined1 *puVar36;
  undefined8 *puVar37;
  undefined4 uVar38;
  int iVar39;
  undefined *puVar40;
  longlong *plVar41;
  longlong *plVar42;
  WriteBytesMem *pWVar43;
  ulonglong uVar44;
  WriteBytesMem *pWVar45;
  undefined4 uVar46;
  undefined8 *puVar47;
  uint uVar48;
  longlong *plVar50;
  bool bVar51;
  double dVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_908 [32];
  WriteBytesMem *local_8e8;
  longlong local_8e0;
  longlong local_8d8;
  undefined1 *local_8d0;
  undefined8 *local_8c8;
  char local_8c0;
  undefined8 *local_8b8;
  float *local_8b0;
  undefined1 local_8a8;
  byte local_898;
  byte local_897;
  char local_896;
  char local_895;
  longlong local_890;
  uint local_888;
  undefined8 local_880;
  WriteBytesMem *local_878;
  longlong *local_870;
  undefined8 local_868;
  longlong *local_860;
  byte local_858;
  uint local_854;
  int local_850;
  undefined4 local_84c;
  longlong *local_848;
  longlong local_840;
  int local_838;
  longlong local_830;
  undefined4 local_828 [2];
  longlong *local_820;
  undefined8 local_818;
  undefined8 uStack_810;
  float *local_808;
  longlong local_800;
  int local_7f8;
  undefined4 local_7f0;
  WriteBytesMem *local_7e8;
  longlong *local_7e0;
  longlong local_7d8;
  undefined4 local_7d0 [2];
  longlong local_7c8;
  longlong *local_7c0;
  int local_7b8;
  int local_7b4;
  WriteBytesMem *local_7b0;
  longlong *local_7a8;
  longlong *local_7a0;
  longlong local_798;
  undefined1 local_790 [8];
  undefined1 local_788 [8];
  longlong local_780;
  undefined1 local_778 [8];
  longlong local_770;
  WriteBytesMem *local_768;
  longlong local_760;
  undefined8 local_758;
  longlong local_750;
  longlong local_748;
  undefined8 local_740;
  longlong local_738;
  undefined1 local_730 [8];
  longlong local_728;
  undefined1 local_720 [8];
  longlong *local_718;
  longlong *local_710;
  undefined8 local_708;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined4 local_6e0;
  uint local_6dc;
  int local_6d8;
  int local_6d4;
  undefined4 local_6d0;
  undefined8 local_6c8;
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float local_6b4;
  undefined4 local_6b0;
  undefined4 local_6ac;
  float local_6a8;
  float local_6a4;
  undefined8 local_6a0;
  undefined4 *local_698;
  undefined4 *puStack_690;
  longlong *local_688;
  undefined8 *puStack_680;
  longlong local_678;
  longlong lStack_670;
  undefined1 *local_668;
  undefined8 *puStack_660;
  char *local_658;
  undefined8 *puStack_650;
  float *local_648;
  LARGE_INTEGER local_638;
  longlong local_630;
  longlong local_628;
  undefined8 local_620;
  WriteBytesMem *local_618;
  longlong *local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined8 local_5f0;
  float local_5e8;
  float local_5e4;
  float local_5e0;
  float local_5dc;
  undefined4 local_5d8;
  uint local_5d4;
  longlong local_5d0;
  undefined4 *puStack_5c8;
  undefined *local_5c0;
  undefined4 local_5b8;
  undefined1 local_5a8 [8];
  undefined1 local_5a0 [8];
  undefined1 local_598 [8];
  undefined1 local_590 [8];
  undefined1 local_588 [8];
  undefined1 local_580 [8];
  undefined1 local_578 [8];
  undefined1 local_570 [8];
  undefined1 local_568 [8];
  undefined1 local_560 [8];
  undefined1 local_558 [16];
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  float local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined1 local_508 [16];
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
  code *local_4b8 [2];
  undefined1 local_4a8 [32];
  undefined8 local_488;
  undefined4 local_478;
  undefined1 local_468 [24];
  undefined1 local_450 [24];
  undefined1 local_438 [24];
  undefined1 local_420 [24];
  undefined1 local_408 [32];
  undefined8 local_3e8;
  WriteBytesMem *pWStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  WriteBytesMem *local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined8 local_394;
  undefined4 local_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_344;
  undefined8 local_33c;
  undefined4 local_334;
  undefined1 local_328 [24];
  undefined1 *local_310;
  ulonglong local_308;
  undefined1 local_300 [24];
  undefined1 *local_2e8;
  ulonglong local_2e0;
  undefined1 local_2d8 [40];
  undefined1 local_2b0;
  longlong local_2a8;
  char local_298;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined4 local_25c;
  code *local_258 [6];
  undefined8 local_228;
  undefined4 local_218;
  code *local_208 [6];
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined8 local_158;
  undefined4 local_148;
  code *local_138;
  undefined8 local_108;
  undefined4 local_f8;
  ulonglong local_e8;
  ulonglong uVar49;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_908;
  local_808 = param_7;
  local_7f0 = 0;
  local_7c0 = param_6;
  local_888 = 0;
  local_820 = param_3;
  local_800 = param_1;
  local_7e0 = param_2;
  local_760 = param_4;
  if (DAT_146af2458 != 0) {
    uVar24 = FUN_14240d6a0(0);
    lVar25 = AAIController::GetPerceptionComponent(uVar24);
    if ((lVar25 != 0) && (lVar25 != *(longlong *)(param_1 + 0xf8))) {
      lVar26 = FArchive::operator<<(lVar25);
      plVar42 = (longlong *)(param_1 + 0xe8);
      if (plVar42 != (longlong *)(lVar26 + 0x28)) {
        iVar23 = *(int *)(lVar26 + 0x30);
        lVar26 = *(longlong *)(lVar26 + 0x28);
        *(int *)(param_1 + 0xf0) = iVar23;
        if ((iVar23 == 0) && (*(int *)(param_1 + 0xf4) == 0)) {
          *(undefined4 *)(param_1 + 0xf4) = 0;
        }
        else {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(plVar42,iVar23);
          if (iVar23 != 0) {
            puVar33 = (undefined4 *)(*plVar42 + 8);
            lVar26 = lVar26 - *plVar42;
            do {
              *(undefined1 *)(puVar33 + -2) = *(undefined1 *)(lVar26 + -8 + (longlong)puVar33);
              puVar33[-1] = *(undefined4 *)(lVar26 + -4 + (longlong)puVar33);
              *puVar33 = *(undefined4 *)(lVar26 + (longlong)puVar33);
              puVar33[1] = *(undefined4 *)(lVar26 + 4 + (longlong)puVar33);
              puVar33[2] = *(undefined4 *)(lVar26 + 8 + (longlong)puVar33);
              puVar33[3] = *(undefined4 *)(lVar26 + 0xc + (longlong)puVar33);
              *(undefined1 *)(puVar33 + 4) = *(undefined1 *)(lVar26 + 0x10 + (longlong)puVar33);
              puVar33[5] = *(undefined4 *)(lVar26 + 0x14 + (longlong)puVar33);
              *(undefined1 *)(puVar33 + 6) = *(undefined1 *)(lVar26 + 0x18 + (longlong)puVar33);
              puVar33[7] = *(undefined4 *)(lVar26 + 0x1c + (longlong)puVar33);
              puVar33[8] = *(undefined4 *)(lVar26 + 0x20 + (longlong)puVar33);
              puVar33[9] = *(undefined4 *)(lVar26 + 0x24 + (longlong)puVar33);
              puVar33[10] = *(undefined4 *)(lVar26 + 0x28 + (longlong)puVar33);
              puVar33[0xb] = *(undefined4 *)(lVar26 + 0x2c + (longlong)puVar33);
              puVar33[0xc] = *(undefined4 *)(lVar26 + 0x30 + (longlong)puVar33);
              puVar33[0xd] = *(undefined4 *)(lVar26 + 0x34 + (longlong)puVar33);
              *(undefined8 *)(puVar33 + 0xe) = *(undefined8 *)(lVar26 + 0x38 + (longlong)puVar33);
              *(undefined8 *)(puVar33 + 0x10) = *(undefined8 *)(lVar26 + 0x40 + (longlong)puVar33);
              puVar33 = puVar33 + 0x14;
              iVar23 = iVar23 + -1;
            } while (iVar23 != 0);
          }
        }
      }
      *(longlong *)(param_1 + 0xf8) = lVar25;
    }
  }
  uVar24 = DAT_146ae4b98;
  uVar27 = FUN_14168dc80();
  local_740 = FModuleManager::GetModule(uVar27,uVar24);
  dVar52 = DAT_1468b5a78 - DAT_1468e2430;
  fVar53 = (float)DAT_1464a97d0;
  QueryPerformanceCounter(&local_638);
  fVar54 = (float)(((double)local_638.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae66a4) && (_Init_thread_header(&DAT_146ae66a4), DAT_146ae66a4 == -1))
  {
    DAT_146ae66a0 = 0xffffffff;
    DAT_146ae6698 = 0xf9ffffffffffffff;
    _Init_thread_footer(&DAT_146ae66a4);
  }
  if (DAT_146b17150 == 0) {
    fVar55 = 2.2;
  }
  else {
    fVar55 = *(float *)(DAT_146b17150 + 0x8fc);
  }
  if (*(char *)(param_1 + 0xd8) == '\0') {
    fVar55 = 1.0;
  }
  iVar23 = *(int *)(*(longlong *)(param_1 + 200) + 0x300);
  local_2e8 = (undefined1 *)0x0;
  local_2e0 = 0;
  uVar48 = iVar23 + 1;
  local_838 = iVar23;
  if ((int)uVar48 < 1) {
    if (((int)uVar48 < 0) && (uVar48 != 0)) {
      local_2e0 = (ulonglong)uVar48;
      TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::ResizeShrink
                (local_300);
    }
  }
  else {
    local_2e0 = (ulonglong)uVar48;
    TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
              (local_300);
    puVar36 = local_300;
    if (local_2e8 != (undefined1 *)0x0) {
      puVar36 = local_2e8;
    }
    _guard_xfg_dispatch_icall_nop(puVar36,0,(longlong)(int)uVar48 << 3);
  }
  local_310 = (undefined1 *)0x0;
  local_308 = 0;
  if ((int)uVar48 < 1) {
    if (((int)uVar48 < 0) && (uVar48 != 0)) {
      local_308 = (ulonglong)uVar48;
      TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::ResizeShrink
                (local_328);
    }
  }
  else {
    local_308 = (ulonglong)uVar48;
    TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
              (local_328);
    puVar36 = local_328;
    if (local_310 != (undefined1 *)0x0) {
      puVar36 = local_310;
    }
    _guard_xfg_dispatch_icall_nop(puVar36,0,(longlong)(int)uVar48 << 3);
  }
  pfVar19 = local_808;
  uVar44 = 0;
  uVar49 = uVar44;
  if (0 < *(int *)(*(longlong *)(param_1 + 200) + 0x300)) {
    do {
      lVar25 = 0;
      lVar26 = operator_new(0xb0);
      if (lVar26 != 0) {
        local_6dc = local_6dc & 0xfffffff4 | 4;
        local_710 = *(longlong **)(uVar44 + *(longlong *)(*(longlong *)(param_1 + 200) + 0x2f8));
        local_708 = DAT_146ae6698;
        local_700 = DAT_146ae66a0;
        local_6fc = 0xffffffff;
        local_6f8 = 0;
        local_6e0 = 0;
        local_6f0 = 0;
        uStack_6e8 = 0x3f80000000000000;
        local_718 = param_3;
        if (((local_710 != (longlong *)0x0) &&
            (lVar25 = (**(code **)(*local_710 + 0x208))(local_710), lVar25 != 0)) &&
           ((cVar20 = FUN_1415ad720(&DAT_1468e2448), cVar20 != '\0' ||
            ((DAT_1468c21ae == '\0' || (DVar22 = GetCurrentThreadId(), DVar22 == DAT_1468c21c0))))))
        {
          local_6f0 = CONCAT44(*(undefined4 *)(lVar25 + 0x7b0),*(undefined4 *)(lVar25 + 0x790));
          local_6dc = local_6dc | 8;
          uStack_6e8 = CONCAT44(uStack_6e8._4_4_,*(undefined4 *)(lVar25 + 0x798));
          local_6e0 = FUN_1428ccc70(lVar25);
        }
        local_6dc = local_6dc | 9;
        local_6f0 = CONCAT44(fVar53,(float)dVar52);
        uStack_6e8 = CONCAT44(fVar55,fVar54);
        FUN_142743490(lVar26,&local_718);
        lVar25 = lVar26;
      }
      puVar36 = local_328;
      if (local_310 != (undefined1 *)0x0) {
        puVar36 = local_310;
      }
      *(longlong *)(puVar36 + uVar44) = lVar25;
      puVar36 = local_2e8;
      puVar34 = local_328;
      if (local_310 != (undefined1 *)0x0) {
        puVar34 = local_310;
      }
      uVar24 = FUN_1420a6d10(*(undefined8 *)(puVar34 + uVar44),param_3,pfVar19);
      puVar34 = local_300;
      if (puVar36 != (undefined1 *)0x0) {
        puVar34 = puVar36;
      }
      uVar48 = (int)uVar49 + 1;
      uVar49 = (ulonglong)uVar48;
      *(undefined8 *)(puVar34 + uVar44) = uVar24;
      uVar44 = uVar44 + 8;
      param_2 = local_7e0;
      iVar23 = local_838;
    } while ((int)uVar48 < *(int *)(*(longlong *)(param_1 + 200) + 0x300));
  }
  lVar26 = operator_new(0xb0);
  lVar25 = 0;
  if (lVar26 != 0) {
    local_5d4 = local_5d4 & 0xfffffffd | 0xd;
    local_5f8 = DAT_146ae66a0;
    local_608 = 0;
    local_600 = DAT_146ae6698;
    local_5f4 = 0xffffffff;
    local_5f0 = 0;
    local_5d8 = 0;
    local_610 = param_3;
    local_5e8 = (float)dVar52;
    local_5e4 = fVar53;
    local_5e0 = fVar54;
    local_5dc = fVar55;
    FUN_142743490(lVar26,&local_610);
    lVar25 = lVar26;
  }
  pfVar19 = local_808;
  lVar26 = (longlong)iVar23;
  puVar36 = local_328;
  if (local_310 != (undefined1 *)0x0) {
    puVar36 = local_310;
  }
  *(longlong *)(puVar36 + lVar26 * 8) = lVar25;
  puVar36 = local_2e8;
  puVar34 = local_328;
  if (local_310 != (undefined1 *)0x0) {
    puVar34 = local_310;
  }
  uVar24 = FUN_1420a6d10(*(undefined8 *)(puVar34 + lVar26 * 8),param_3,local_808);
  puVar34 = local_300;
  if (puVar36 != (undefined1 *)0x0) {
    puVar34 = puVar36;
  }
  *(undefined8 *)(puVar34 + lVar26 * 8) = uVar24;
  local_5c0 = &DAT_146ae4ba0;
  plVar41 = (longlong *)0x0;
  local_5b8 = 0;
  lVar25 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar25 + 0x38,&local_7b4);
  plVar42 = plVar41;
  if (local_7b4 != -1) {
    plVar42 = (longlong *)((longlong)local_7b4 * 0x20 + *(longlong *)(lVar25 + 0x38));
  }
  plVar50 = plVar42 + 2;
  if (plVar42 == (longlong *)0x0) {
    plVar50 = plVar41;
  }
  lVar25 = *plVar50;
  local_7e8 = (WriteBytesMem *)FUN_141a156e0();
  if (local_7e8 != (WriteBytesMem *)0x0) {
    LOCK();
    *(int *)(local_7e8 + 8) = *(int *)(local_7e8 + 8) + 1;
    UNLOCK();
  }
  local_3a8 = 0;
  local_840 = param_1 + 0x20;
  local_3e8 = 0;
  pWStack_3e0 = (WriteBytesMem *)0x0;
  local_830 = param_1 + 0x68;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = (WriteBytesMem *)0x0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3a0 = 0;
  local_39c = 0x26;
  local_394 = 0;
  local_38c = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_344 = 0;
  local_33c = 0;
  local_334 = 0;
  local_630 = local_840;
  local_628 = local_830;
  FUN_14049afe0(param_2,&local_3e8);
  local_7e0 = (longlong *)0x0;
  local_620 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_850 = *(int *)(DAT_146ae4b90 + 4);
  if ((*(char *)(pfVar19 + 0x12) == '\0') ||
     ((2 < (&DAT_1464c9c48)[DAT_1464c9c14] - 8 && ((&DAT_1464c9c48)[DAT_1464c9c14] != 0x18)))) {
    local_896 = '\0';
  }
  else {
    local_896 = '\x01';
  }
  puVar35 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_298 = '\0';
  local_84c = 0;
  local_828[0] = 0;
  puVar47 = puVar35 + 5;
  if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
    FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
    puVar35 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar47 = puVar35 + 5;
  }
  *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
  *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
  **(undefined8 **)((longlong)param_2 + 8) = puVar35;
  *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
  puVar35[1] = 0;
  *puVar35 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar35 + 2) = 0;
  *(undefined8 *)((longlong)puVar35 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar35 + 0x1c) = 0;
  local_3a8 = FUN_1409853f0();
  local_758 = *(undefined8 *)(pfVar19 + 0x10);
  local_7f8 = 0;
  if (0 < (int)local_7c0[1]) {
    local_750 = 0;
    pWVar43 = local_7b0;
    pWVar45 = local_7b0;
    do {
      puVar47 = (undefined8 *)(local_750 * 0xf0 + *local_7c0);
      plVar42 = (longlong *)puVar47[0xd];
      lVar26 = local_840;
      lVar29 = local_830;
      if (plVar42 != plVar41) {
        local_7e0 = plVar42;
        if (plVar42 == (longlong *)0x0) {
          local_840 = local_630;
          lVar26 = local_840;
          lVar29 = local_628;
        }
        else {
          plVar42 = (longlong *)(*(longlong *)(local_800 + 200) + 0x248);
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(plVar42,&local_7b8);
          if ((local_7b8 == -1) || (lVar26 = *plVar42 + (longlong)local_7b8 * 0x18, lVar26 == 0)) {
            lVar26 = 0;
          }
          else {
            lVar26 = *(longlong *)(lVar26 + 8);
          }
          lVar29 = lVar26 + 0x48;
          if (lVar26 == 0) {
            lVar26 = local_840;
            lVar29 = local_830;
          }
        }
      }
      local_830 = lVar29;
      local_840 = lVar26;
      local_848 = (longlong *)puVar47[6];
      local_897 = *(byte *)(puVar47 + 0xf);
      cVar20 = *(char *)((longlong)puVar47 + 0x79);
      local_898 = *(byte *)((longlong)puVar47 + 0x7b);
      local_858 = local_897 & 0x10;
      lVar26 = DAT_146864320;
      local_895 = cVar20;
      if (local_858 == 0) {
        lVar29 = DAT_146864320;
        if (DAT_146864320 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar21 = IsInRenderingThread();
            if (cVar21 == '\0') {
              FScopedEvent::FScopedEvent(local_720);
              plVar42 = (longlong *)FUN_14049e3d0(local_450,0,0xff);
              lVar26 = *plVar42;
              *(undefined1 **)(lVar26 + 0x10) = &LAB_140985690;
              *(undefined1 **)(lVar26 + 0x18) = local_720;
              lVar26 = *plVar42;
              lVar29 = plVar42[1];
              lVar28 = *(longlong *)(lVar26 + 0x28);
              local_878 = (WriteBytesMem *)(lVar28 + 0x48);
              if (lVar28 != 0) {
                LOCK();
                *(int *)local_878 = *(int *)local_878 + 1;
                UNLOCK();
              }
              local_728 = lVar28;
              FUN_1404a4fe0(lVar26,lVar29);
              if (lVar28 != 0) {
                LOCK();
                iVar23 = *(int *)local_878;
                *(int *)local_878 = *(int *)local_878 + -1;
                UNLOCK();
                if (iVar23 == 1) {
                  FGraphEvent::Recycle(local_728);
                }
              }
              FScopedEvent::~FScopedEvent(local_720);
              lVar29 = DAT_146864320;
              lVar26 = DAT_146864320;
              cVar20 = local_895;
            }
            else {
              lVar28 = operator_new(0x38);
              lVar29 = 0;
              lVar26 = 0;
              if (lVar28 != 0) {
                lVar29 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar28);
                lVar26 = lVar29;
              }
            }
          }
          else {
            lVar26 = operator_new(0x38);
            if (lVar26 == 0) {
              LOCK();
              if (DAT_146864320 == 0) {
                DAT_146864320 = 0;
              }
              UNLOCK();
              lVar29 = DAT_146864320;
              lVar26 = DAT_146864320;
            }
            else {
              lVar26 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar26);
              LOCK();
              if (DAT_146864320 != 0) {
                lVar26 = DAT_146864320;
              }
              DAT_146864320 = lVar26;
              UNLOCK();
              lVar29 = DAT_146864320;
              lVar26 = DAT_146864320;
            }
          }
        }
      }
      else {
        lVar29 = DAT_146a0e898;
        if (DAT_146a0e898 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar21 = IsInRenderingThread();
            if (cVar21 == '\0') {
              FScopedEvent::FScopedEvent(local_730);
              plVar42 = (longlong *)FUN_14049e3d0(local_468,0,0xff);
              lVar26 = *plVar42;
              *(undefined1 **)(lVar26 + 0x10) = &LAB_141ac0fb0;
              *(undefined1 **)(lVar26 + 0x18) = local_730;
              lVar26 = *plVar42;
              lVar29 = plVar42[1];
              lVar28 = *(longlong *)(lVar26 + 0x28);
              local_878 = (WriteBytesMem *)(lVar28 + 0x48);
              if (lVar28 != 0) {
                LOCK();
                *(int *)local_878 = *(int *)local_878 + 1;
                UNLOCK();
              }
              local_738 = lVar28;
              FUN_1404a4fe0(lVar26,lVar29);
              if (lVar28 != 0) {
                LOCK();
                iVar23 = *(int *)local_878;
                *(int *)local_878 = *(int *)local_878 + -1;
                UNLOCK();
                if (iVar23 == 1) {
                  FGraphEvent::Recycle(local_738);
                }
              }
              FScopedEvent::~FScopedEvent(local_730);
              lVar29 = DAT_146a0e898;
              lVar26 = DAT_146864320;
              cVar20 = local_895;
            }
            else {
              lVar26 = operator_new(0x38);
              if (lVar26 == 0) {
                lVar29 = 0;
                lVar26 = DAT_146864320;
                DAT_146a0e898 = lVar29;
              }
              else {
                lVar29 = TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar26);
                lVar26 = DAT_146864320;
                DAT_146a0e898 = lVar29;
              }
            }
          }
          else {
            lVar26 = operator_new(0x38);
            if (lVar26 == 0) {
              LOCK();
              if (DAT_146a0e898 == 0) {
                DAT_146a0e898 = 0;
              }
              UNLOCK();
              lVar29 = DAT_146a0e898;
              lVar26 = DAT_146864320;
            }
            else {
              lVar26 = TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar26);
              LOCK();
              if (DAT_146a0e898 != 0) {
                lVar26 = DAT_146a0e898;
              }
              DAT_146a0e898 = lVar26;
              UNLOCK();
              lVar29 = DAT_146a0e898;
              lVar26 = DAT_146864320;
            }
          }
        }
      }
      DAT_146864320 = lVar26;
      uStack_3b0 = *(undefined8 *)(lVar29 + 0x30);
      if ((puVar47[9] == 0) || (puVar47[10] == 0)) {
LAB_1420ab6ce:
        bVar51 = false;
      }
      else {
        piVar32 = (int *)(puVar47[10] + 8);
        LOCK();
        iVar23 = *piVar32;
        if (iVar23 == 0) {
          *piVar32 = 0;
          iVar23 = 0;
        }
        UNLOCK();
        if (iVar23 < 1) goto LAB_1420ab6ce;
        bVar51 = true;
      }
      if (bVar51) {
        local_7a8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>(&local_7a0,puVar47 + 10);
        local_870 = local_7a0;
        if (local_7a0 != (longlong *)0x0) {
          local_7a8 = (longlong *)puVar47[9];
        }
        plVar42 = local_7a8;
        if (local_7a8 != (longlong *)0x0) {
          puVar35 = (undefined8 *)
                    (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar47 = puVar35 + 5;
          if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
            FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
            puVar35 = (undefined8 *)
                      (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar47 = puVar35 + 5;
          }
          *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
          *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
          **(undefined8 **)((longlong)param_2 + 8) = puVar35;
          *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
          puVar35[1] = 0;
          *puVar35 = &PTR_LAB_143f59430;
          *(undefined1 *)(puVar35 + 2) = 0;
          *(undefined8 *)((longlong)puVar35 + 0x14) = 0;
          *(undefined8 *)((longlong)puVar35 + 0x1c) = 0;
          if (local_298 != '\0') {
            local_298 = '\0';
            if (local_2a8 != 0) {
              FMemory::Free();
            }
            local_2b0 = 0;
          }
          lVar26 = *plVar42;
          (**(code **)(*local_820 + 8))();
          (**(code **)(lVar26 + 8))(plVar42,param_2);
          plVar42 = local_820;
          local_828[0] = 0;
          lVar26 = (**(code **)(*local_820 + 0x20))(local_820,local_580);
          uVar38 = *(undefined4 *)(lVar26 + 4);
          puVar33 = (undefined4 *)(**(code **)(*plVar42 + 0x20))(plVar42,local_578);
          puVar35 = (undefined8 *)
                    (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar46 = *puVar33;
          puVar47 = puVar35 + 5;
          if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
            FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
            puVar35 = (undefined8 *)
                      (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar47 = puVar35 + 5;
          }
          *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
          *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
          **(undefined8 **)((longlong)param_2 + 8) = puVar35;
          *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
          puVar35[1] = 0;
          *puVar35 = &PTR_LAB_143f59420;
          puVar35[2] = 0;
          *(undefined4 *)(puVar35 + 3) = 0;
          *(undefined4 *)((longlong)puVar35 + 0x1c) = uVar46;
          *(undefined4 *)(puVar35 + 4) = uVar38;
          *(undefined4 *)((longlong)puVar35 + 0x24) = 0;
          uVar24 = *(undefined8 *)(local_840 + 0x30);
          puVar35 = (undefined8 *)
                    (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar47 = puVar35 + 5;
          if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
            FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
            puVar35 = (undefined8 *)
                      (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar47 = puVar35 + 5;
          }
          *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
          *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
          **(undefined8 **)((longlong)param_2 + 8) = puVar35;
          *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
          puVar35[1] = 0;
          *puVar35 = &PTR_LAB_143f489e0;
          *(undefined4 *)(puVar35 + 2) = 0;
          puVar35[3] = uVar24;
          *(undefined4 *)(puVar35 + 4) = 0;
        }
        plVar42 = local_7a0;
        if (local_870 != (longlong *)0x0) {
          LOCK();
          plVar41 = local_870 + 1;
          lVar26 = *plVar41;
          *(int *)plVar41 = (int)*plVar41 + -1;
          UNLOCK();
          if ((int)lVar26 == 1) {
            (**(code **)*local_7a0)(local_7a0);
            LOCK();
            piVar32 = (int *)((longlong)plVar42 + 0xc);
            iVar23 = *piVar32;
            *piVar32 = *piVar32 + -1;
            UNLOCK();
            if (iVar23 == 1) {
              (**(code **)(*local_7a0 + 8))(local_7a0,1);
            }
          }
        }
      }
      else {
        fVar53 = *(float *)((longlong)puVar47 + 4);
        fVar54 = *(float *)(puVar47 + 1);
        local_518 = *(float *)((longlong)puVar47 + 4);
        uStack_514 = *(undefined4 *)(puVar47 + 1);
        fVar2 = local_808[4];
        fVar3 = local_808[5];
        fVar4 = local_808[6];
        fVar5 = local_808[7];
        fVar6 = *local_808;
        fVar7 = local_808[1];
        fVar8 = local_808[2];
        fVar9 = local_808[3];
        fVar10 = local_808[8];
        fVar11 = local_808[9];
        fVar12 = local_808[10];
        fVar13 = local_808[0xb];
        fVar14 = local_808[0xc];
        fVar15 = local_808[0xd];
        fVar16 = local_808[0xe];
        fVar17 = local_808[0xf];
        local_548 = 0x3f800000;
        uStack_544 = 0;
        uStack_540 = 0;
        uStack_53c = 0;
        local_538 = 0;
        uStack_534 = 0x3f800000;
        uStack_530 = 0;
        uStack_52c = 0;
        local_528 = 0;
        uStack_524 = 0;
        uStack_520 = 0x3f800000;
        uStack_51c = 0;
        local_4f8 = fVar6 * 1.0 + fVar2 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0;
        fStack_4f4 = fVar7 * 1.0 + fVar3 * 0.0 + fVar11 * 0.0 + fVar15 * 0.0;
        fStack_4f0 = fVar8 * 1.0 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
        fStack_4ec = fVar9 * 1.0 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
        local_4e8 = fVar6 * 0.0 + fVar2 * 1.0 + fVar10 * 0.0 + fVar14 * 0.0;
        fStack_4e4 = fVar7 * 0.0 + fVar3 * 1.0 + fVar11 * 0.0 + fVar15 * 0.0;
        fStack_4e0 = fVar8 * 0.0 + fVar4 * 1.0 + fVar12 * 0.0 + fVar16 * 0.0;
        fStack_4dc = fVar9 * 0.0 + fVar5 * 1.0 + fVar13 * 0.0 + fVar17 * 0.0;
        local_4d8 = fVar6 * 0.0 + fVar2 * 0.0 + fVar10 * 1.0 + fVar14 * 0.0;
        fStack_4d4 = fVar7 * 0.0 + fVar3 * 0.0 + fVar11 * 1.0 + fVar15 * 0.0;
        fStack_4d0 = fVar8 * 0.0 + fVar4 * 0.0 + fVar12 * 1.0 + fVar16 * 0.0;
        fStack_4cc = fVar9 * 0.0 + fVar5 * 0.0 + fVar13 * 1.0 + fVar17 * 0.0;
        uStack_510 = 0;
        uStack_50c = 0x3f800000;
        local_4c8 = fVar53 * fVar6 + fVar54 * fVar2 + fVar10 * 0.0 + fVar14 * 1.0;
        fStack_4c4 = fVar53 * fVar7 + fVar54 * fVar3 + fVar11 * 0.0 + fVar15 * 1.0;
        fStack_4c0 = fVar53 * fVar8 + fVar54 * fVar4 + fVar12 * 0.0 + fVar16 * 1.0;
        fStack_4bc = fVar53 * fVar9 + fVar54 * fVar5 + fVar13 * 0.0 + fVar17 * 1.0;
        local_8b0 = &local_4f8;
        local_8a8 = 0;
        local_8b8 = &local_3e8;
        local_8c0 = local_896;
        local_8c8 = &local_758;
        local_8d0 = local_2d8;
        local_8d8 = param_5;
        local_8e0 = local_760;
        local_8e8 = (WriteBytesMem *)puVar47;
        FUN_1420bfed0(param_2,&local_84c);
        local_854 = *(uint *)((longlong)puVar47 + 0xdc);
        if (*(char *)((longlong)puVar47 + 0x7a) != '\0') {
          local_854 = (uint)((ulonglong)local_854 * 0xaaaaaaab >> 0x20);
        }
        local_854 = local_854 >> 1;
        if (local_848 == (longlong *)0x0) {
          local_868 = CONCAT44(local_868._4_4_,4);
LAB_1420ab932:
          if (cVar20 != '\x05') {
            local_880 = FUN_1420b7db0(local_800,local_620,cVar20,local_898);
            if ((local_897 & 1) == 0) {
              if ((local_897 & 2) == 0) {
                local_3b8 = FUN_141e16070();
              }
              else {
                local_3b8 = FUN_1420b6160();
              }
            }
            else {
              lVar26 = DAT_146852b40;
              if (DAT_146852b40 == 0) {
                if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                  cVar20 = IsInRenderingThread();
                  if (cVar20 == '\0') {
                    FScopedEvent::FScopedEvent(local_790);
                    plVar42 = (longlong *)FUN_14049e3d0(local_438,0,0xff);
                    lVar26 = *plVar42;
                    *(undefined1 **)(lVar26 + 0x10) = &LAB_1404a0f60;
                    *(undefined1 **)(lVar26 + 0x18) = local_790;
                    lVar26 = *plVar42;
                    lVar18 = plVar42[2];
                    lVar29 = plVar42[1];
                    lVar28 = *(longlong *)(lVar26 + 0x28);
                    local_878 = (WriteBytesMem *)(lVar28 + 0x48);
                    if (lVar28 != 0) {
                      LOCK();
                      *(int *)local_878 = *(int *)local_878 + 1;
                      UNLOCK();
                    }
                    local_798 = lVar28;
                    FUN_1404a4fe0(lVar26,lVar29,(int)lVar18,1);
                    if (lVar28 != 0) {
                      LOCK();
                      iVar23 = *(int *)local_878;
                      *(int *)local_878 = *(int *)local_878 + -1;
                      UNLOCK();
                      if (iVar23 == 1) {
                        FGraphEvent::Recycle(local_798);
                      }
                    }
                    FScopedEvent::~FScopedEvent(local_790);
                    lVar26 = DAT_146852b40;
                  }
                  else {
                    lVar29 = operator_new(0x38);
                    lVar26 = 0;
                    if (lVar29 != 0) {
                      lVar26 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                               ::FStaticStateResource::FStaticStateResource(lVar29);
                    }
                  }
                }
                else {
                  lVar26 = operator_new(0x38);
                  if (lVar26 == 0) {
                    LOCK();
                    if (DAT_146852b40 == 0) {
                      DAT_146852b40 = 0;
                    }
                    UNLOCK();
                    lVar26 = DAT_146852b40;
                  }
                  else {
                    lVar26 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                             ::FStaticStateResource::FStaticStateResource(lVar26);
                    LOCK();
                    if (DAT_146852b40 != 0) {
                      lVar26 = DAT_146852b40;
                    }
                    DAT_146852b40 = lVar26;
                    UNLOCK();
                    lVar26 = DAT_146852b40;
                  }
                }
              }
              DAT_146852b40 = lVar26;
              local_3b8 = *(undefined8 *)(DAT_146852b40 + 0x30);
            }
            if ((local_858 == 0) && (*(char *)((longlong)local_808 + 0x49) == '\0')) {
              uStack_3b0 = FUN_140985530();
            }
            else {
              if (DAT_146a0e898 == 0) {
                if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                  cVar20 = IsInRenderingThread();
                  if (cVar20 == '\0') {
                    FScopedEvent::FScopedEvent(local_788);
                    plVar42 = (longlong *)FUN_14049e3d0(local_420,0,0xff);
                    lVar26 = *plVar42;
                    *(undefined1 **)(lVar26 + 0x10) = &LAB_141ac0fb0;
                    *(undefined1 **)(lVar26 + 0x18) = local_788;
                    lVar26 = *plVar42;
                    lVar18 = plVar42[2];
                    lVar29 = plVar42[1];
                    lVar28 = *(longlong *)(lVar26 + 0x28);
                    local_878 = (WriteBytesMem *)(lVar28 + 0x48);
                    if (lVar28 != 0) {
                      LOCK();
                      *(int *)local_878 = *(int *)local_878 + 1;
                      UNLOCK();
                    }
                    local_748 = lVar28;
                    FUN_1404a4fe0(lVar26,lVar29,(int)lVar18,1);
                    if (lVar28 != 0) {
                      LOCK();
                      iVar23 = *(int *)local_878;
                      *(int *)local_878 = *(int *)local_878 + -1;
                      UNLOCK();
                      if (iVar23 == 1) {
                        FGraphEvent::Recycle(local_748);
                      }
                    }
                    FScopedEvent::~FScopedEvent(local_788);
                  }
                  else {
                    lVar26 = operator_new(0x38);
                    if (lVar26 == 0) {
                      DAT_146a0e898 = 0;
                    }
                    else {
                      DAT_146a0e898 =
                           TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                           ::FStaticStateResource::FStaticStateResource(lVar26);
                    }
                  }
                }
                else {
                  lVar29 = operator_new(0x38);
                  lVar26 = 0;
                  if (lVar29 != 0) {
                    lVar26 = TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                             ::FStaticStateResource::FStaticStateResource(lVar29);
                  }
                  LOCK();
                  if (DAT_146a0e898 != 0) {
                    lVar26 = DAT_146a0e898;
                  }
                  DAT_146a0e898 = lVar26;
                  UNLOCK();
                }
              }
              uStack_3b0 = *(undefined8 *)(DAT_146a0e898 + 0x30);
              if (*(char *)((longlong)local_808 + 0x49) != '\0') {
                if (DAT_146852b40 == 0) {
                  if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                    cVar20 = IsInRenderingThread();
                    if (cVar20 == '\0') {
                      FScopedEvent::FScopedEvent(local_778);
                      plVar42 = (longlong *)FUN_14049e3d0(local_408,0,0xff);
                      lVar26 = *plVar42;
                      *(undefined1 **)(lVar26 + 0x10) = &LAB_1404a0f60;
                      *(undefined1 **)(lVar26 + 0x18) = local_778;
                      lVar26 = *plVar42;
                      lVar18 = plVar42[2];
                      lVar29 = plVar42[1];
                      lVar28 = *(longlong *)(lVar26 + 0x28);
                      local_878 = (WriteBytesMem *)(lVar28 + 0x48);
                      if (lVar28 != 0) {
                        LOCK();
                        *(int *)local_878 = *(int *)local_878 + 1;
                        UNLOCK();
                      }
                      local_780 = lVar28;
                      FUN_1404a4fe0(lVar26,lVar29,(int)lVar18,1);
                      if (lVar28 != 0) {
                        LOCK();
                        iVar23 = *(int *)local_878;
                        *(int *)local_878 = *(int *)local_878 + -1;
                        UNLOCK();
                        if (iVar23 == 1) {
                          FGraphEvent::Recycle(local_780);
                        }
                      }
                      FScopedEvent::~FScopedEvent(local_778);
                    }
                    else {
                      lVar26 = operator_new(0x38);
                      if (lVar26 == 0) {
                        DAT_146852b40 = 0;
                      }
                      else {
                        DAT_146852b40 =
                             TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                             ::FStaticStateResource::FStaticStateResource(lVar26);
                      }
                    }
                  }
                  else {
                    lVar26 = operator_new(0x38);
                    if (lVar26 == 0) {
                      LOCK();
                      if (DAT_146852b40 == 0) {
                        DAT_146852b40 = 0;
                      }
                      UNLOCK();
                    }
                    else {
                      lVar26 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                               ::FStaticStateResource::FStaticStateResource(lVar26);
                      LOCK();
                      if (DAT_146852b40 != 0) {
                        lVar26 = DAT_146852b40;
                      }
                      DAT_146852b40 = lVar26;
                      UNLOCK();
                    }
                  }
                }
                local_3b8 = *(undefined8 *)(DAT_146852b40 + 0x30);
              }
            }
            local_3e8 = DAT_146500ee0;
            if (lVar25 == 0) {
              local_888 = local_888 | 1;
              pWStack_3e0 = (WriteBytesMem *)0x0;
              pWVar45 = pWStack_3e0;
            }
            else {
              lVar26 = *(longlong *)(lVar25 + 0x48);
              if (*(char *)(lVar26 + 0x28) == '\0') {
                FUN_1419f3850(lVar26);
              }
              pWStack_3e0 = *(WriteBytesMem **)(lVar26 + 0x38);
            }
            uVar48 = local_888;
            if (((local_888 & 1) != 0) &&
               (uVar48 = local_888 & 0xfffffffe, local_888 = uVar48, pWVar45 != (WriteBytesMem *)0x0
               )) {
              LOCK();
              pWVar30 = pWVar45 + 8;
              iVar23 = *(int *)pWVar30;
              *(int *)pWVar30 = *(int *)pWVar30 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                if ((pWVar45[0x10] == (WriteBytesMem)0x0) &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar20 = FOutputDevice::CanBeUsedOnAnyThread(), cVar20 == '\0')))) {
                  LOCK();
                  bVar51 = *(int *)(pWVar45 + 0xc) == 0;
                  if (bVar51) {
                    *(int *)(pWVar45 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar51) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,pWVar45);
                  }
                }
                else {
                  (*(code *)**(undefined8 **)pWVar45)(pWVar45,1);
                }
              }
            }
            if (local_880 == 0) {
              local_888 = uVar48 | 2;
              local_3c8 = (WriteBytesMem *)0x0;
              pWVar43 = local_3c8;
            }
            else {
              lVar26 = *(longlong *)(local_880 + 0x48);
              if (*(char *)(lVar26 + 0x28) == '\0') {
                FUN_1419f3850(lVar26);
              }
              local_3c8 = *(WriteBytesMem **)(lVar26 + 0x40);
            }
            if (((local_888 & 2) != 0) &&
               (local_888 = local_888 & 0xfffffffd, pWVar43 != (WriteBytesMem *)0x0)) {
              LOCK();
              pWVar30 = pWVar43 + 8;
              iVar23 = *(int *)pWVar30;
              *(int *)pWVar30 = *(int *)pWVar30 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                if ((pWVar43[0x10] == (WriteBytesMem)0x0) &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar20 = FOutputDevice::CanBeUsedOnAnyThread(), cVar20 == '\0')))) {
                  LOCK();
                  bVar51 = *(int *)(pWVar43 + 0xc) == 0;
                  if (bVar51) {
                    *(int *)(pWVar43 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar51) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,pWVar43);
                  }
                }
                else {
                  (*(code *)**(undefined8 **)pWVar43)(pWVar43,1);
                }
              }
            }
            uVar38 = 0;
            if (*(char *)((longlong)puVar47 + 0x7a) == '\0') {
              uVar38 = 2;
            }
            local_39c = CONCAT44(local_39c._4_4_,uVar38);
            FUN_141ed6ac0(param_2,&local_3e8,2,1);
            uVar38 = local_84c;
            puVar37 = (undefined8 *)
                      (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar35 = puVar37 + 3;
            if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
              FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x20);
              puVar37 = (undefined8 *)
                        (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar35 = puVar37 + 3;
            }
            *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
            *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
            **(undefined8 **)((longlong)param_2 + 8) = puVar37;
            *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
            *(undefined4 *)(puVar37 + 2) = uVar38;
            puVar37[1] = 0;
            *puVar37 = &PTR_LAB_143f489c0;
            lVar26 = *(longlong *)(DAT_146ac3d68 + 0x30);
            pWVar30 = local_7e8;
            local_890 = lVar26;
            if (local_848 != (longlong *)0x0) {
              cVar20 = '\x01';
              lVar29 = local_848[1];
              if ((int)local_868 == 1) {
                if (lVar29 != 0) {
                  lVar26 = *(longlong *)(lVar29 + 0x60);
                  if (lVar26 == 0) {
                    local_770 = 0;
                  }
                  else {
                    *(double *)(lVar26 + 0x48) = DAT_1468b5a78;
                    local_770 = *(longlong *)(lVar26 + 0x30);
                    if (local_770 != 0) {
                      LOCK();
                      *(int *)(local_770 + 8) = *(int *)(local_770 + 8) + 1;
                      UNLOCK();
                    }
                  }
                  local_890 = local_770;
                  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_770);
                  cVar21 = *(char *)(lVar29 + 0x49);
                  cVar20 = '\0';
                  if (cVar21 == '\0') {
                    cVar20 = '\0';
                  }
                  else if (cVar21 == '\x01') {
                    cVar20 = '\x01';
                  }
                  else if (cVar21 == '\x02') {
                    cVar20 = '\x02';
                  }
                  else if ((int)(uint)*(byte *)(lVar29 + 0x4a) < *(int *)(local_800 + 0xf0)) {
                    cVar20 = *(char *)(*(longlong *)(local_800 + 0xe8) + 0x18 +
                                      (ulonglong)*(byte *)(lVar29 + 0x4a) * 0x50);
                  }
                }
              }
              else {
                local_890 = lVar29;
                if (lVar29 == 0) {
                  local_890 = lVar26;
                }
              }
              if ((local_897 & 0x60) == 0x60) {
                if (cVar20 == '\0') {
                  pWVar30 = (WriteBytesMem *)FUN_141ac0bb0();
                }
                else if (cVar20 == '\x02') {
                  pWVar30 = (WriteBytesMem *)FUN_141b33cc0();
                }
                else if (cVar20 == '\x03') {
                  pWVar30 = (WriteBytesMem *)FUN_1420b7060();
                }
                else if (cVar20 == '\x04') {
                  pWVar30 = (WriteBytesMem *)FUN_1420b7560();
                }
                else {
                  pWVar30 = (WriteBytesMem *)FUN_141b33a40();
                }
              }
              else if ((local_897 & 0x20) == 0) {
                if ((local_897 & 0x40) == 0) {
                  if (cVar20 == '\0') {
                    pWVar30 = (WriteBytesMem *)FUN_1404a0e20();
                  }
                  else if (cVar20 == '\x02') {
                    pWVar30 = (WriteBytesMem *)FUN_141b33b80();
                  }
                  else if (cVar20 == '\x03') {
                    pWVar30 = (WriteBytesMem *)FUN_1420b6ca0();
                  }
                  else if (cVar20 == '\x04') {
                    pWVar30 = (WriteBytesMem *)FUN_1420b71a0();
                  }
                  else {
                    pWVar30 = (WriteBytesMem *)FUN_141a156e0();
                  }
                }
                else if (cVar20 == '\0') {
                  pWVar30 = (WriteBytesMem *)FUN_1420b76a0();
                }
                else if (cVar20 == '\x02') {
                  pWVar30 = (WriteBytesMem *)FUN_1420b6a20();
                }
                else if (cVar20 == '\x03') {
                  pWVar30 = (WriteBytesMem *)FUN_1420b6de0();
                }
                else if (cVar20 == '\x04') {
                  pWVar30 = (WriteBytesMem *)FUN_1420b72e0();
                }
                else {
                  pWVar30 = (WriteBytesMem *)FUN_1420b67a0();
                }
              }
              else if (cVar20 == '\0') {
                pWVar30 = (WriteBytesMem *)FUN_1420b77e0();
              }
              else if (cVar20 == '\x02') {
                pWVar30 = (WriteBytesMem *)FUN_1420b6b60();
              }
              else if (cVar20 == '\x03') {
                pWVar30 = (WriteBytesMem *)FUN_1420b6f20();
              }
              else if (cVar20 == '\x04') {
                pWVar30 = (WriteBytesMem *)FUN_1420b7420();
              }
              else {
                pWVar30 = (WriteBytesMem *)FUN_1420b68e0();
              }
            }
            local_860 = *(longlong **)(lVar25 + 0x48);
            if (*(char *)((longlong)local_860 + 0x28) == '\0') {
              FUN_1419f3850();
            }
            local_8e8 = (WriteBytesMem *)((ulonglong)local_8e8 & 0xffffffff00000000);
            SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
                      (param_2,*(undefined8 *)((longlong)local_860 + 0x38),lVar25 + 0xc0,&local_4f8)
            ;
            if (local_896 == '\0') {
              local_7d0[0] = 0x3f800000;
            }
            else {
              local_7d0[0] = 0xbf800000;
            }
            local_860 = *(longlong **)(lVar25 + 0x48);
            if (*(char *)((longlong)local_860 + 0x28) == '\0') {
              FUN_1419f3850();
            }
            local_8e8 = (WriteBytesMem *)((ulonglong)local_8e8 & 0xffffffff00000000);
            FUN_1404986d0(param_2,*(undefined8 *)((longlong)local_860 + 0x38),lVar25 + 0xcc,
                          local_7d0);
            lVar26 = local_880;
            if (pWVar30 != (WriteBytesMem *)0x0) {
              LOCK();
              *(int *)(pWVar30 + 8) = *(int *)(pWVar30 + 8) + 1;
              UNLOCK();
            }
            local_618 = pWVar30;
            FUN_1420bf020(local_880,param_2,local_890,&local_618);
            lVar26 = *(longlong *)(lVar26 + 0x48);
            if (*(char *)(lVar26 + 0x28) == '\0') {
              FUN_1419f3850(lVar26);
            }
            local_8e8 = (WriteBytesMem *)((ulonglong)local_8e8 & 0xffffffff00000000);
            SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                      (param_2,*(undefined8 *)(lVar26 + 0x40),local_880 + 200,puVar47 + 2);
            if ((local_898 & 8) == 0) {
              local_6b0 = 0;
            }
            else {
              local_6b0 = 0x3f800000;
            }
            local_6b4 = fVar55;
            if ((local_897 & 4) != 0) {
              local_6b4 = 1.0;
            }
            local_6b4 = 1.0 / local_6b4;
            local_6ac = 0;
            local_6b8 = local_6b4 * 2.2;
            if (*(char *)(*(longlong *)(local_880 + 0x48) + 0x28) == '\0') {
              FUN_1419f3850(*(longlong *)(local_880 + 0x48));
            }
            local_8e8 = (WriteBytesMem *)((ulonglong)local_8e8 & 0xffffffff00000000);
            SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2);
            if (DAT_1464c9c23 == '\0') {
              if (local_850 == 0) {
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                local_860 = *(longlong **)(local_840 + 0x30);
                iVar23 = *(int *)(puVar47 + 0x1a);
                puVar35 = puVar37 + 5;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                  puVar37 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar35 = puVar37 + 5;
                }
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar37;
                *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
                puVar37[1] = 0;
                *puVar37 = &PTR_LAB_143f489e0;
                *(int *)(puVar37 + 4) = iVar23 * 0x28;
                uVar38 = 0;
                puVar37[3] = local_860;
                *(undefined4 *)(puVar37 + 2) = 0;
                local_860 = *(longlong **)(local_830 + 0x30);
                if (*(char *)((longlong)puVar47 + 0x7a) == '\0') {
                  uVar38 = 2;
                }
                local_868 = CONCAT44(local_868._4_4_,*(undefined4 *)(puVar47 + 8));
                uVar46 = *(undefined4 *)(puVar47 + 0x1b);
                local_880 = CONCAT44(local_880._4_4_,*(undefined4 *)((longlong)puVar47 + 0xd4));
                if (local_860 == (longlong *)0x0) {
                  LowLevelFatalErrorHandler
                            ("Unknown",0x8d8,
                             L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                  FDebug::AssertFailed(&DAT_143f3f584,"Unknown");
                }
                puVar35 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar47 = puVar35 + 7;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x40);
                  puVar35 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar47 = puVar35 + 7;
                }
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar35;
                *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
                puVar35[1] = 0;
                *puVar35 = &PTR_LAB_143f489d0;
                puVar35[2] = local_860;
                *(undefined4 *)(puVar35 + 5) = (undefined4)local_880;
                *(uint *)((longlong)puVar35 + 0x2c) = local_854;
                *(int *)(puVar35 + 6) = (int)local_868;
                *(undefined4 *)(puVar35 + 3) = uVar38;
                *(undefined8 *)((longlong)puVar35 + 0x1c) = 0;
                *(undefined4 *)((longlong)puVar35 + 0x24) = uVar46;
                goto LAB_1420ad82f;
              }
LAB_1420ac41e:
              uVar38 = 0;
            }
            else {
              if (local_850 != 0) goto LAB_1420ac41e;
              uVar38 = *(undefined4 *)(puVar47 + 0x1a);
            }
            local_868 = CONCAT44(local_868._4_4_,uVar38);
            puVar37 = (undefined8 *)
                      (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            uVar24 = *(undefined8 *)(local_840 + 0x30);
            puVar35 = puVar37 + 5;
            if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
              FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
              puVar37 = (undefined8 *)
                        (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar35 = puVar37 + 5;
            }
            *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
            *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
            **(undefined8 **)((longlong)param_2 + 8) = puVar37;
            *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
            puVar37[1] = 0;
            puVar37[3] = uVar24;
            uVar38 = 0;
            *puVar37 = &PTR_LAB_143f489e0;
            *(undefined4 *)(puVar37 + 2) = 0;
            *(undefined4 *)(puVar37 + 4) = 0;
            local_860 = *(longlong **)(local_830 + 0x30);
            if (*(char *)((longlong)puVar47 + 0x7a) == '\0') {
              uVar38 = 2;
            }
            local_890 = CONCAT44(local_890._4_4_,*(undefined4 *)(puVar47 + 8));
            uVar46 = *(undefined4 *)(puVar47 + 0x1b);
            local_880 = CONCAT44(local_880._4_4_,*(undefined4 *)((longlong)puVar47 + 0xd4));
            if (local_860 == (longlong *)0x0) {
              LowLevelFatalErrorHandler
                        ("Unknown",0x8d8,
                         L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
              FDebug::AssertFailed(&DAT_143f3f584,"Unknown");
            }
            puVar35 = (undefined8 *)
                      (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar47 = puVar35 + 7;
            if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
              FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x40);
              puVar35 = (undefined8 *)
                        (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar47 = puVar35 + 7;
            }
            *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
            *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
            **(undefined8 **)((longlong)param_2 + 8) = puVar35;
            *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
            puVar35[1] = 0;
            *puVar35 = &PTR_LAB_143f489d0;
            puVar35[2] = local_860;
            *(int *)((longlong)puVar35 + 0x1c) = (int)local_868;
            *(undefined4 *)(puVar35 + 5) = (undefined4)local_880;
            *(uint *)((longlong)puVar35 + 0x2c) = local_854;
            *(undefined4 *)(puVar35 + 6) = (undefined4)local_890;
            *(undefined4 *)(puVar35 + 3) = uVar38;
            *(undefined4 *)(puVar35 + 4) = 0;
            *(undefined4 *)((longlong)puVar35 + 0x24) = uVar46;
            goto LAB_1420ad82f;
          }
        }
        else {
          iVar23 = (**(code **)(*local_848 + 0x10))();
          local_868 = CONCAT44(local_868._4_4_,iVar23);
          if (iVar23 != 2) goto LAB_1420ab932;
        }
        if (((DAT_146b17150 == 0) || (local_848 == (longlong *)0x0)) ||
           (iVar23 = (**(code **)(*local_848 + 0x10))(), iVar23 != 2)) {
          if (cVar20 == '\x05') goto LAB_1420ad2b0;
        }
        else if (cVar20 == '\x05') {
LAB_1420ad2b0:
          plVar42 = local_820;
          local_288 = 0;
          local_228 = 0;
          local_218 = 0;
          local_1d8 = 0;
          local_1c8 = 0;
          local_208[0] = AK::MemoryMgr::StartProfileThreadUsage;
          local_258[0] = AK::MemoryMgr::StartProfileThreadUsage;
          local_280 = 0xbf800000;
          uStack_27c = 0xbf800000;
          uStack_278 = 0xbf800000bf800000;
          uStack_270 = 0xbf800000bf800000;
          uStack_268 = 0xbf800000bf800000;
          puVar35 = (undefined8 *)(**(code **)(*local_820 + 8))(local_820);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&local_288,*puVar35);
          lVar26 = (**(code **)(*plVar42 + 0x20))(plVar42,local_598);
          local_6c8 = 0;
          iVar23 = *(int *)(lVar26 + 4);
          piVar32 = (int *)(**(code **)(*plVar42 + 0x20))(plVar42,local_590);
          fStack_6c0 = (float)*piVar32;
          local_818 = puVar47[2];
          uStack_810 = puVar47[3];
          local_280 = (undefined4)local_6c8;
          uStack_27c = local_6c8._4_4_;
          uStack_278 = CONCAT44((float)iVar23,fStack_6c0);
          fStack_6bc = (float)iVar23;
          uStack_270 = local_818;
          uStack_268 = uStack_810;
          puVar33 = (undefined4 *)(**(code **)(*local_820 + 0x20))(local_820,local_588);
          local_488 = 0;
          local_260 = *puVar33;
          local_25c = puVar33[1];
          local_698 = &local_84c;
          puStack_690 = local_828;
          local_688 = local_820;
          local_678 = local_760;
          lStack_670 = param_5;
          local_668 = local_2d8;
          puStack_660 = &local_758;
          local_658 = &local_896;
          puStack_650 = &local_3e8;
          local_648 = local_808;
          local_478 = 0;
          puStack_680 = puVar47;
          puVar35 = (undefined8 *)FUN_140438ef0(0x60,local_4a8);
          if (puVar35 != (undefined8 *)0x0) {
            *puVar35 = &PTR_FUN_144f96d78;
            puVar35[1] = local_698;
            puVar35[2] = puStack_690;
            puVar35[3] = local_688;
            puVar35[4] = puStack_680;
            puVar35[5] = local_678;
            puVar35[6] = lStack_670;
            puVar35[7] = local_668;
            puVar35[8] = puStack_660;
            puVar35[9] = local_658;
            puVar35[10] = puStack_650;
            puVar35[0xb] = local_648;
          }
          local_4b8[0] = UE4Function_Private::
                         TFunctionRefCaller<<lambda_85dba51c3f9496254dbb655512744136>,void___cdecl(FRHICommandListImmediate_&,FGraphicsPipelineStateInitializer_&)>
                         ::Call;
          FUN_140cbcb50(local_4b8,local_258,0x50);
          FUN_1404bed90(local_4b8);
          puStack_5c8 = &local_84c;
          local_668 = (undefined1 *)0x0;
          local_658 = (char *)((ulonglong)local_658 & 0xffffffff00000000);
          local_5d0 = (longlong)param_2;
          puVar35 = (undefined8 *)FUN_140438ef0(0x18,&local_688);
          if (puVar35 != (undefined8 *)0x0) {
            *puVar35 = &PTR_FUN_143f77c18;
            puVar35[1] = local_5d0;
            puVar35[2] = puStack_5c8;
          }
          local_698 = (undefined4 *)&LAB_1420a4280;
          FUN_140cbcb50(&local_698,local_208,0x50);
          TFunction<void___cdecl(void)>::~TFunction<void___cdecl(void)>(&local_698);
          local_6d8 = (int)*(float *)(puVar47 + 4);
          local_6d0 = *(undefined4 *)((longlong)puVar47 + 0x24);
          local_6d4 = (int)*(float *)(puVar47 + 5);
          local_8e8 = (WriteBytesMem *)&local_288;
          FUN_1420a2190(*(undefined8 *)(local_800 + 0xb8),param_2);
          TFunction<void___cdecl(void)>::~TFunction<void___cdecl(void)>(local_208);
          FUN_1404bed90(local_258);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_288);
        }
        else {
          iVar23 = *(int *)(puVar47 + 0x1c);
          iVar39 = local_838;
          if ((iVar23 != -1) &&
             (iVar39 = iVar23, *(int *)(*(longlong *)(local_800 + 200) + 0x300) <= iVar23)) {
            iVar39 = local_838;
          }
          puVar36 = local_300;
          if (local_2e8 != (undefined1 *)0x0) {
            puVar36 = local_2e8;
          }
          lVar26 = *(longlong *)(puVar36 + (longlong)iVar39 * 8);
          local_7d8 = lVar26;
          if ((lVar26 == 0) || (plVar42 = (longlong *)local_848[1], plVar42 == (longlong *)0x0))
          goto LAB_1420ad82f;
          local_860 = (longlong *)(**(code **)(*plVar42 + 0x2a8))(plVar42,0);
          local_768 = (WriteBytesMem *)0x0;
          (**(code **)(*local_860 + 0x40))(local_860,*(undefined4 *)(lVar26 + 0x1a38));
          local_878 = local_768;
          puVar31 = AK::WriteBytesMem::Bytes(local_768);
          local_868 = 0;
          if (local_895 == '\0') {
            puVar40 = &DAT_146ae5a20;
            if ((local_898 & 0x20) == 0) {
              puVar40 = &DAT_146ae5b70;
            }
LAB_1420ac6aa:
            local_868 = FUN_1420b7ad0(puVar31,puVar40);
          }
          else {
            if (local_895 == '\x01') {
              puVar40 = &DAT_146ae5cc0;
              if ((local_898 & 0x20) == 0) {
                puVar40 = &DAT_146ae5e10;
              }
              goto LAB_1420ac6aa;
            }
            if (local_895 == '\x02') {
              puVar40 = &DAT_146ae5f60;
              if ((local_898 & 0x20) == 0) {
                puVar40 = &DAT_146ae60b0;
              }
              goto LAB_1420ac6aa;
            }
            if (local_895 == '\x04') {
              puVar40 = &DAT_146ae58d0;
              goto LAB_1420ac6aa;
            }
          }
          lVar26 = local_868;
          if ((*(int *)(puVar47 + 8) < 1) || (local_898 = 1, puVar47[7] == 0)) {
            local_898 = 0;
          }
          puVar31 = AK::WriteBytesMem::Bytes(local_878);
          puVar40 = &DAT_146ae5630;
          if (local_898 == 0) {
            puVar40 = &DAT_146ae5780;
          }
          local_880 = FUN_1420b7ad0(puVar31,puVar40);
          if ((local_880 != 0) && (lVar26 != 0)) {
            iVar23 = (**(code **)(*(longlong *)local_878 + 0x1e8))();
            if (iVar23 == 1) {
LAB_1420ac759:
              local_3b8 = FUN_1404a0ce0();
            }
            else if (iVar23 == 2) {
              local_3b8 = FUN_1420b62a0();
            }
            else if (iVar23 == 3) {
              local_3b8 = FUN_141b33400();
            }
            else if (iVar23 == 4) {
              local_3b8 = FUN_1420b6020();
            }
            else {
              if (iVar23 != 5) goto LAB_1420ac759;
              local_3b8 = FUN_1420b6160();
            }
            local_870 = (longlong *)local_848[3];
            if (local_870 != (longlong *)0x0) {
              local_3b8 = FUN_1420b62a0();
            }
            local_3e8 = DAT_146500ee0;
            if (local_898 != 0) {
              local_3e8 = DAT_146500f18;
            }
            pWStack_3e0 = (WriteBytesMem *)FShader::GetVertexShader(local_880);
            if ((local_888 & 4) != 0) {
              local_888 = local_888 & 0xfffffffb;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_5a8);
            }
            local_3c8 = (WriteBytesMem *)FShader::GetPixelShader(lVar26);
            if ((local_888 & 8) != 0) {
              local_888 = local_888 & 0xfffffff7;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_5a0);
            }
            uVar38 = 0;
            if (*(char *)((longlong)puVar47 + 0x7a) == '\0') {
              uVar38 = 2;
            }
            local_39c = CONCAT44(local_39c._4_4_,uVar38);
            FUN_141ed6ac0(param_2,&local_3e8,2);
            local_890 = CONCAT44(local_890._4_4_,local_84c);
            puVar37 = (undefined8 *)
                      (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar35 = puVar37 + 3;
            if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
              FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x20);
              puVar37 = (undefined8 *)
                        (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar35 = puVar37 + 3;
            }
            *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
            *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
            **(undefined8 **)((longlong)param_2 + 8) = puVar37;
            *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
            puVar37[1] = 0;
            *puVar37 = &PTR_LAB_143f489c0;
            *(undefined4 *)(puVar37 + 2) = (undefined4)local_890;
            local_848 = *(longlong **)(local_880 + 0x48);
            if (*(char *)((longlong)local_848 + 0x28) == '\0') {
              FUN_1419f3850();
            }
            local_8e8 = (WriteBytesMem *)((ulonglong)local_8e8 & 0xffffffff00000000);
            SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
                      (param_2,*(undefined8 *)((longlong)local_848 + 0x38),local_880 + 0x110,
                       &local_4f8);
            if (local_896 == '\0') {
              local_7f0 = 0x3f800000;
            }
            else {
              local_7f0 = 0xbf800000;
            }
            local_848 = *(longlong **)(local_880 + 0x48);
            if (*(char *)((longlong)local_848 + 0x28) == '\0') {
              FUN_1419f3850();
            }
            local_8e8 = (WriteBytesMem *)((ulonglong)local_8e8 & 0xffffffff00000000);
            FUN_1404986d0(param_2,*(undefined8 *)((longlong)local_848 + 0x38),local_880 + 0x116);
            local_848 = *(longlong **)(local_880 + 0x48);
            if ((char)local_848[5] == '\0') {
              FUN_1419f3850();
            }
            local_8d0 = (undefined1 *)((ulonglong)local_8d0 & 0xffffffff00000000);
            local_8d8 = local_7d8 + 0x20;
            local_8e0 = local_7d8;
            local_8e8 = local_878;
            FUN_141d85bd0(local_880,param_2,local_848[7],local_860);
            lVar26 = *(longlong *)(lVar26 + 0x48);
            if (*(char *)(lVar26 + 0x28) == '\0') {
              FUN_1419f3850(lVar26);
            }
            uVar24 = *(undefined8 *)(lVar26 + 0x40);
            local_8e8 = (WriteBytesMem *)((ulonglong)local_8e8 & 0xffffffff00000000);
            SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                      (param_2,uVar24,local_868 + 0x116,puVar47 + 2);
            lVar26 = local_868;
            local_8d0 = (undefined1 *)((ulonglong)local_8d0 & 0xffffffff00000000);
            local_8d8 = local_7d8 + 0x20;
            local_8e0 = local_7d8;
            local_8e8 = local_878;
            FUN_141d857a0(local_868,param_2,uVar24,local_860);
            local_6a4 = fVar55;
            if ((local_897 & 4) != 0) {
              local_6a4 = 1.0;
            }
            local_860 = *(longlong **)(lVar26 + 0x48);
            local_6a4 = 1.0 / local_6a4;
            local_6a0 = 0;
            local_6a8 = local_6a4 * 2.2;
            if ((char)local_860[5] == '\0') {
              FUN_1419f3850();
            }
            local_8e8 = (WriteBytesMem *)((ulonglong)local_8e8 & 0xffffffff00000000);
            SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,local_860[8]);
            if (local_870 != (longlong *)0x0) {
              local_7c8 = 0;
              TRefCountPtr<FRHIIndexBuffer>::operator=(&local_7c8);
              local_7b0 = local_7e8;
              if (local_7e8 != (WriteBytesMem *)0x0) {
                LOCK();
                *(int *)(local_7e8 + 8) = *(int *)(local_7e8 + 8) + 1;
                UNLOCK();
              }
              local_7d8 = local_7c8;
              local_878 = local_7e8;
              local_870 = *(longlong **)(lVar26 + 0x48);
              if ((char)local_870[5] == '\0') {
                FUN_1419f3850(local_870);
              }
              local_860 = (longlong *)local_870[8];
              if (*(short *)(lVar26 + 0x122) != 0) {
                local_890 = CONCAT44(local_890._4_4_,(uint)*(ushort *)(lVar26 + 0x120));
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar35 = puVar37 + 5;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                  puVar37 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar35 = puVar37 + 5;
                }
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar37;
                *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
                puVar37[1] = 0;
                *puVar37 = &PTR_LAB_143f59c80;
                puVar37[2] = local_860;
                *(undefined4 *)(puVar37 + 3) = (undefined4)local_890;
                puVar37[4] = local_7d8;
              }
              if (*(short *)(lVar26 + 0x11e) != 0) {
                uVar1 = *(ushort *)(lVar26 + 0x11c);
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar35 = puVar37 + 5;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                  puVar37 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar35 = puVar37 + 5;
                }
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar37;
                *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
                puVar37[1] = 0;
                *puVar37 = &PTR_LAB_143f59c70;
                puVar37[2] = local_860;
                puVar37[4] = local_878;
                *(uint *)(puVar37 + 3) = (uint)uVar1;
              }
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7b0);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7c8);
            }
            if (local_898 == 0) {
              puVar37 = (undefined8 *)
                        (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar35 = puVar37 + 5;
              if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar35 = puVar37 + 5;
              }
              *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
              *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
              **(undefined8 **)((longlong)param_2 + 8) = puVar37;
              *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
              puVar37[1] = 0;
              *puVar37 = &PTR_LAB_143f489e0;
              *(undefined4 *)(puVar37 + 2) = 1;
              puVar37[3] = 0;
              *(undefined4 *)(puVar37 + 4) = 0;
              if (DAT_1464c9c23 == '\0') {
                if (local_850 != 0) {
LAB_1420ad130:
                  local_880 = (ulonglong)local_880._4_4_ << 0x20;
                  goto LAB_1420ad140;
                }
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                local_870 = *(longlong **)(local_840 + 0x30);
                iVar23 = *(int *)(puVar47 + 0x1a);
                puVar35 = puVar37 + 5;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                  puVar37 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar35 = puVar37 + 5;
                }
                uVar38 = 0;
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar37;
                *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
                puVar37[1] = 0;
                *puVar37 = &PTR_LAB_143f489e0;
                *(int *)(puVar37 + 4) = iVar23 * 0x28;
                puVar37[3] = local_870;
                *(undefined4 *)(puVar37 + 2) = 0;
                local_870 = *(longlong **)(local_830 + 0x30);
                if (*(char *)((longlong)puVar47 + 0x7a) == '\0') {
                  uVar38 = 2;
                }
                uVar46 = *(undefined4 *)(puVar47 + 0x1b);
                local_890 = CONCAT44(local_890._4_4_,*(undefined4 *)((longlong)puVar47 + 0xd4));
                if (local_870 == (longlong *)0x0) {
                  LowLevelFatalErrorHandler
                            ("Unknown",0x8d8,
                             L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                  FDebug::AssertFailed(&DAT_143f3f584,"Unknown");
                }
                puVar35 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar47 = puVar35 + 7;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x40);
                  puVar35 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar47 = puVar35 + 7;
                }
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar35;
                *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
                puVar35[1] = 0;
                *puVar35 = &PTR_LAB_143f489d0;
                puVar35[2] = local_870;
                *(undefined8 *)((longlong)puVar35 + 0x1c) = 0;
              }
              else {
                if (local_850 != 0) goto LAB_1420ad130;
                local_880 = CONCAT44(local_880._4_4_,*(undefined4 *)(puVar47 + 0x1a));
LAB_1420ad140:
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                uVar24 = *(undefined8 *)(local_840 + 0x30);
                puVar35 = puVar37 + 5;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                  puVar37 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar35 = puVar37 + 5;
                }
                uVar38 = 0;
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar37;
                *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
                puVar37[1] = 0;
                puVar37[3] = uVar24;
                *puVar37 = &PTR_LAB_143f489e0;
                *(undefined4 *)(puVar37 + 2) = 0;
                *(undefined4 *)(puVar37 + 4) = 0;
                local_870 = *(longlong **)(local_830 + 0x30);
                if (*(char *)((longlong)puVar47 + 0x7a) == '\0') {
                  uVar38 = 2;
                }
                uVar46 = *(undefined4 *)(puVar47 + 0x1b);
                local_890 = CONCAT44(local_890._4_4_,*(undefined4 *)((longlong)puVar47 + 0xd4));
                if (local_870 == (longlong *)0x0) {
                  LowLevelFatalErrorHandler
                            ("Unknown",0x8d8,
                             L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                  FDebug::AssertFailed(&DAT_143f3f584,"Unknown");
                }
                puVar35 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar47 = puVar35 + 7;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x40);
                  puVar35 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar47 = puVar35 + 7;
                }
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar35;
                *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
                puVar35[1] = 0;
                *puVar35 = &PTR_LAB_143f489d0;
                puVar35[2] = local_870;
                *(undefined4 *)((longlong)puVar35 + 0x1c) = (undefined4)local_880;
                *(undefined4 *)(puVar35 + 4) = 0;
              }
              *(undefined4 *)(puVar35 + 3) = uVar38;
              *(undefined4 *)((longlong)puVar35 + 0x24) = uVar46;
              *(undefined4 *)(puVar35 + 5) = (undefined4)local_890;
              *(uint *)((longlong)puVar35 + 0x2c) = local_854;
              *(undefined4 *)(puVar35 + 6) = 1;
            }
            else {
              local_880 = CONCAT44(local_880._4_4_,*(undefined4 *)(puVar47 + 8));
              if (DAT_1464c9c6c == '\0') goto LAB_1420ad82f;
              iVar23 = *(int *)((longlong)puVar47 + 0x44);
              puVar37 = (undefined8 *)
                        (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_870 = *(longlong **)(puVar47[7] + 0x68);
              puVar35 = puVar37 + 5;
              if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar35 = puVar37 + 5;
              }
              *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
              *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
              **(undefined8 **)((longlong)param_2 + 8) = puVar37;
              *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
              puVar37[1] = 0;
              *puVar37 = &PTR_LAB_143f489e0;
              *(undefined4 *)(puVar37 + 2) = 1;
              puVar37[3] = local_870;
              *(int *)(puVar37 + 4) = iVar23 << 4;
              if (DAT_1464c9c23 == '\0') {
                if (local_850 != 0) {
LAB_1420acddc:
                  local_868 = (ulonglong)local_868._4_4_ << 0x20;
                  goto LAB_1420acdec;
                }
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                local_870 = *(longlong **)(local_840 + 0x30);
                iVar23 = *(int *)(puVar47 + 0x1a);
                puVar35 = puVar37 + 5;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                  puVar37 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar35 = puVar37 + 5;
                }
                uVar38 = 0;
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar37;
                *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
                puVar37[1] = 0;
                *puVar37 = &PTR_LAB_143f489e0;
                *(int *)(puVar37 + 4) = iVar23 * 0x28;
                puVar37[3] = local_870;
                *(undefined4 *)(puVar37 + 2) = 0;
                local_870 = *(longlong **)(local_830 + 0x30);
                if (*(char *)((longlong)puVar47 + 0x7a) == '\0') {
                  uVar38 = 2;
                }
                uVar46 = *(undefined4 *)(puVar47 + 0x1b);
                local_890 = CONCAT44(local_890._4_4_,*(undefined4 *)((longlong)puVar47 + 0xd4));
                if (local_870 == (longlong *)0x0) {
                  LowLevelFatalErrorHandler
                            ("Unknown",0x8d8,
                             L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                  FDebug::AssertFailed(&DAT_143f3f584,"Unknown");
                }
                puVar35 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar47 = puVar35 + 7;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x40);
                  puVar35 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar47 = puVar35 + 7;
                }
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar35;
                *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
                puVar35[1] = 0;
                *puVar35 = &PTR_LAB_143f489d0;
                puVar35[2] = local_870;
                *(undefined8 *)((longlong)puVar35 + 0x1c) = 0;
              }
              else {
                if (local_850 != 0) goto LAB_1420acddc;
                local_868 = CONCAT44(local_868._4_4_,*(undefined4 *)(puVar47 + 0x1a));
LAB_1420acdec:
                puVar37 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                uVar24 = *(undefined8 *)(local_840 + 0x30);
                puVar35 = puVar37 + 5;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar35) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30);
                  puVar37 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar35 = puVar37 + 5;
                }
                uVar38 = 0;
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar35;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar37;
                *(undefined8 **)((longlong)param_2 + 8) = puVar37 + 1;
                puVar37[1] = 0;
                puVar37[3] = uVar24;
                *puVar37 = &PTR_LAB_143f489e0;
                *(undefined4 *)(puVar37 + 2) = 0;
                *(undefined4 *)(puVar37 + 4) = 0;
                local_870 = *(longlong **)(local_830 + 0x30);
                if (*(char *)((longlong)puVar47 + 0x7a) == '\0') {
                  uVar38 = 2;
                }
                uVar46 = *(undefined4 *)(puVar47 + 0x1b);
                local_890 = CONCAT44(local_890._4_4_,*(undefined4 *)((longlong)puVar47 + 0xd4));
                if (local_870 == (longlong *)0x0) {
                  LowLevelFatalErrorHandler
                            ("Unknown",0x8d8,
                             L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                  FDebug::AssertFailed(&DAT_143f3f584,"Unknown");
                }
                puVar35 = (undefined8 *)
                          (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar47 = puVar35 + 7;
                if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
                  FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x40);
                  puVar35 = (undefined8 *)
                            (*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar47 = puVar35 + 7;
                }
                *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
                *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
                **(undefined8 **)((longlong)param_2 + 8) = puVar35;
                *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
                puVar35[1] = 0;
                *puVar35 = &PTR_LAB_143f489d0;
                puVar35[2] = local_870;
                *(int *)((longlong)puVar35 + 0x1c) = (int)local_868;
                *(undefined4 *)(puVar35 + 4) = 0;
              }
              *(undefined4 *)(puVar35 + 3) = uVar38;
              *(undefined4 *)((longlong)puVar35 + 0x24) = uVar46;
              *(undefined4 *)(puVar35 + 5) = (undefined4)local_890;
              *(uint *)((longlong)puVar35 + 0x2c) = local_854;
              *(undefined4 *)(puVar35 + 6) = (undefined4)local_880;
            }
          }
        }
      }
LAB_1420ad82f:
      local_7f8 = local_7f8 + 1;
      local_750 = local_750 + 1;
      plVar41 = local_7e0;
      param_3 = local_820;
    } while (local_7f8 < (int)local_7c0[1]);
  }
  if ((DAT_146ae4890 != '\0') && (0 < DAT_146ae4894)) {
    local_188 = AK::MemoryMgr::StartProfileThreadUsage;
    local_1b8 = 0;
    local_1b0 = 0xbf800000;
    uStack_1ac = 0xbf800000;
    uStack_1a8 = 0xbf800000bf800000;
    uStack_1a0 = 0xbf800000bf800000;
    fStack_198 = -1.0;
    fStack_194 = -1.0;
    local_158 = 0;
    local_148 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_138 = AK::MemoryMgr::StartProfileThreadUsage;
    puVar47 = (undefined8 *)(**(code **)(*param_3 + 8))(param_3);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_1b8,*puVar47);
    lVar25 = (**(code **)(*param_3 + 0x20))(param_3,local_570);
    local_818 = 0;
    iVar23 = *(int *)(lVar25 + 4);
    piVar32 = (int *)(**(code **)(*param_3 + 0x20))(param_3,local_568);
    uStack_810 = CONCAT44((float)iVar23,(float)*piVar32);
    local_1b0 = (undefined4)local_818;
    uStack_1ac = local_818._4_4_;
    uStack_1a8 = CONCAT44((float)iVar23,(float)*piVar32);
    lVar25 = (**(code **)(*param_3 + 0x20))(param_3,local_560);
    local_818 = 0;
    iVar23 = *(int *)(lVar25 + 4);
    piVar32 = (int *)(**(code **)(*param_3 + 0x20))(param_3,local_558);
    fStack_198 = (float)*piVar32;
    uStack_1a0 = local_818;
    fStack_194 = (float)iVar23;
    puVar33 = (undefined4 *)(**(code **)(*param_3 + 0x20))(param_3,local_508);
    local_190 = *puVar33;
    local_18c = puVar33[1];
    FUN_1420a4810(*(undefined8 *)(local_800 + 0xb8),param_2,local_740,&local_1b8);
    FPostProcessRectParams::~FPostProcessRectParams(&local_1b8);
  }
  puVar35 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar35 + 5;
  if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
    FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
    puVar35 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar47 = puVar35 + 5;
  }
  *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
  lVar25 = 0;
  *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
  **(undefined8 **)((longlong)param_2 + 8) = puVar35;
  *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
  puVar35[1] = 0;
  *puVar35 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar35 + 2) = 0;
  *(undefined8 *)((longlong)puVar35 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar35 + 0x1c) = 0;
  local_3a8 = FUN_1409853f0();
  iVar23 = local_838 + 1;
  puVar36 = local_310;
  if (0 < iVar23) {
    do {
      puVar34 = local_328;
      if (puVar36 != (undefined1 *)0x0) {
        puVar34 = puVar36;
      }
      lVar26 = *(longlong *)(puVar34 + lVar25 * 8);
      if (lVar26 != 0) {
        FUN_142745e10(lVar26);
        FMemory::operator_delete(lVar26,0xb0);
        puVar36 = local_310;
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < iVar23);
  }
  uVar49 = local_2e0 >> 0x20;
  local_2e0 = local_2e0 & 0xffffffff00000000;
  if ((int)uVar49 != 0) {
    TArray<FSceneView_*,TInlineAllocator<3,FDefaultAllocator>_>::ResizeTo(local_300,0);
  }
  uVar49 = local_308 >> 0x20;
  local_308 = local_308 & 0xffffffff00000000;
  if ((int)uVar49 != 0) {
    TArray<FSceneView_*,TInlineAllocator<3,FDefaultAllocator>_>::ResizeTo(local_328,0);
  }
  puVar35 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar35 + 5;
  if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar47) {
    FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
    puVar35 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar47 = puVar35 + 5;
  }
  *(undefined8 **)((longlong)param_2 + 0x30) = puVar47;
  *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
  **(undefined8 **)((longlong)param_2 + 8) = puVar35;
  *(undefined8 **)((longlong)param_2 + 8) = puVar35 + 1;
  puVar35[1] = 0;
  *puVar35 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar35 + 2) = 0;
  *(undefined8 *)((longlong)puVar35 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar35 + 0x1c) = 0;
  if (local_298 != '\0') {
    local_298 = '\0';
    if (local_2a8 != 0) {
      FMemory::Free();
    }
    local_2b0 = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7e8);
  if (local_310 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_2e8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420adce0 FUN_1420adce0 body=2837 status=ok
// SIG undefined FUN_1420adce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420adce0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong *puVar19;
  int iVar20;
  bool bVar21;
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
  undefined1 auStack_658 [32];
  ulonglong local_638;
  longlong local_630;
  float *local_628;
  undefined8 *local_620;
  longlong *local_618;
  longlong *local_610;
  undefined4 local_608;
  undefined8 *local_5f8;
  longlong local_5f0 [4];
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  longlong local_5c8 [2];
  longlong *local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined **local_578;
  undefined8 local_570;
  undefined8 local_568;
  longlong local_558;
  longlong *local_550;
  longlong local_548 [3];
  undefined4 local_530;
  undefined4 local_52c;
  undefined2 local_528;
  float local_518 [6];
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  float local_4e8;
  float local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined1 local_4d8 [8];
  longlong *local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  float local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
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
  float local_404;
  undefined2 local_400;
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
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined1 local_394;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined1 local_378 [192];
  undefined4 local_2b8;
  undefined1 local_2b4;
  undefined1 local_1e8 [256];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_658;
  iVar20 = 0;
  local_548[0] = 0;
  local_548[1] = 0;
  local_5f0[3] = 0;
  local_5b8 = param_4;
  local_5b0 = param_3;
  FScopedGPUStatEvent::Begin(local_548,param_2,&DAT_146ae48e0,local_5f0 + 3);
  local_558 = *(longlong *)(param_3 + 0xa8);
  if (local_558 != 0) {
    LOCK();
    *(int *)(local_558 + 8) = *(int *)(local_558 + 8) + 1;
    UNLOCK();
  }
  local_530 = 0;
  local_52c = 0xffffffff;
  local_528 = 0x102;
  local_5f0[1] = 0;
  local_5f0[2] = 0;
  local_5f0[0] = local_558;
  local_548[2] = local_558;
  FUN_140c63b80(local_378,1,local_548 + 2,local_5f0 + 1);
  puVar19 = (ulonglong *)(param_2 + 0x30);
  local_2b4 = param_5;
  plVar17 = (longlong *)(*puVar19 + 7 & 0xfffffffffffffff8);
  plVar13 = plVar17 + 1;
  if (*(longlong **)(param_2 + 0x38) < plVar13) {
    FMemStackBase::AllocateNewChunk(puVar19,0x10);
    plVar17 = (longlong *)(*puVar19 + 7 & 0xfffffffffffffff8);
    plVar13 = plVar17 + 1;
  }
  *puVar19 = (ulonglong)plVar13;
  *plVar17 = local_558;
  puVar16 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar16 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar19,0x30);
    puVar16 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 5;
  }
  *puVar19 = (ulonglong)puVar15;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar16;
  *(undefined8 **)(param_2 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  *(undefined4 *)(puVar16 + 4) = 1;
  puVar16[3] = plVar17;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  FRHICommandListBase::CacheActiveRenderTargets(param_2,local_2b8,local_378,local_1e8);
  puVar16 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x54;
  if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar19,0x2a8);
    puVar16 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x54;
  }
  *puVar19 = (ulonglong)puVar15;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar16;
  *(undefined8 **)(param_2 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar16 + 2,local_378);
  if (0 < (int)param_4[1]) {
    lVar18 = 0;
    do {
      lVar5 = *(longlong *)(lVar18 + *param_4);
      lVar14 = lVar5 + 0x28;
      FUN_141852560(lVar5);
      FSlateBatchData::CreateRenderBatches(lVar14,lVar5 + 0x98);
      if (0 < *(int *)(lVar5 + 0x80)) {
        lVar6 = *(longlong *)(param_1 + 0x100);
        local_638 = lVar6 + 0x68;
        FUN_1420c0c80(lVar6,param_2,lVar14,lVar6 + 0x20);
        lVar6 = local_5f0[0];
        local_518[1] = 0.0;
        local_518[2] = 0.0;
        local_518[3] = 0.0;
        local_518[4] = 0.0;
        fVar2 = *(float *)(local_5b8 + 5);
        fVar3 = *(float *)((longlong)local_5b8 + 0x2c);
        fVar8 = *(float *)(local_5b8 + 5);
        uVar9 = *(undefined4 *)((longlong)local_5b8 + 0x2c);
        local_500 = 0;
        local_4e0 = 0x3f000000;
        local_4dc = 0x3f800000;
        fVar22 = 1.0 / (float)*(uint *)(local_5f0[0] + 0x60);
        local_518[0] = fVar22 + fVar22;
        local_4e4 = 1.0 / (float)*(uint *)(local_5f0[0] + 100);
        local_4e8 = -(fVar22 * (float)*(uint *)(local_5f0[0] + 0x60));
        local_518[5] = local_4e4 * -2.0;
        local_4e4 = local_4e4 * (float)*(uint *)(local_5f0[0] + 100);
        local_4f8 = 0;
        uStack_4f0 = 0xbba3d70a;
        AdjustProjectionMatrixForRHI(&local_3f8,local_518);
        lVar10 = local_5b0;
        local_4c8 = 0x3f800000;
        uStack_4c4 = 0;
        uStack_4c0 = 0;
        uStack_4bc = 0;
        local_4b8 = 0;
        uStack_4b4 = 0x3f800000;
        uStack_4b0 = 0;
        uStack_4ac = 0;
        local_4a8 = 0;
        uStack_4a4 = 0;
        uStack_4a0 = 0x3f800000;
        uStack_49c = 0;
        fVar22 = local_3e8 * 0.0 + local_3f8 * 1.0 + local_3d8 * 0.0 + local_3c8 * 0.0;
        fVar23 = fStack_3e4 * 0.0 + fStack_3f4 * 1.0 + fStack_3d4 * 0.0 + fStack_3c4 * 0.0;
        fVar24 = fStack_3e0 * 0.0 + fStack_3f0 * 1.0 + fStack_3d0 * 0.0 + fStack_3c0 * 0.0;
        fVar25 = fStack_3dc * 0.0 + fStack_3ec * 1.0 + fStack_3cc * 0.0 + fStack_3bc * 0.0;
        puVar15 = (undefined8 *)(lVar6 + 0x60);
        local_5d0 = *(undefined4 *)puVar15;
        uStack_5cc = *(undefined4 *)(lVar6 + 100);
        local_568 = *puVar15;
        local_5c8[0] = *(longlong *)(local_5b0 + 0xa8);
        uStack_490 = 0;
        uStack_48c = 0x3f800000;
        fVar26 = local_3e8 * 1.0 + local_3f8 * 0.0 + local_3d8 * 0.0 + local_3c8 * 0.0;
        fVar27 = fStack_3e4 * 1.0 + fStack_3f4 * 0.0 + fStack_3d4 * 0.0 + fStack_3c4 * 0.0;
        fVar28 = fStack_3e0 * 1.0 + fStack_3f0 * 0.0 + fStack_3d0 * 0.0 + fStack_3c0 * 0.0;
        fVar29 = fStack_3dc * 1.0 + fStack_3ec * 0.0 + fStack_3cc * 0.0 + fStack_3bc * 0.0;
        fVar30 = local_3e8 * 0.0 + local_3f8 * 0.0 + local_3d8 * 1.0 + local_3c8 * 0.0;
        fVar31 = fStack_3e4 * 0.0 + fStack_3f4 * 0.0 + fStack_3d4 * 1.0 + fStack_3c4 * 0.0;
        fVar32 = fStack_3e0 * 0.0 + fStack_3f0 * 0.0 + fStack_3d0 * 1.0 + fStack_3c0 * 0.0;
        fVar33 = fStack_3dc * 0.0 + fStack_3ec * 0.0 + fStack_3cc * 1.0 + fStack_3bc * 0.0;
        fVar34 = fVar3 * local_3e8 + fVar2 * local_3f8 + local_3d8 * 0.0 + local_3c8 * 1.0;
        fVar35 = fVar3 * fStack_3e4 + fVar2 * fStack_3f4 + fStack_3d4 * 0.0 + fStack_3c4 * 1.0;
        fVar36 = fVar3 * fStack_3e0 + fVar2 * fStack_3f0 + fStack_3d0 * 0.0 + fStack_3c0 * 1.0;
        fVar37 = fVar3 * fStack_3dc + fVar2 * fStack_3ec + fStack_3cc * 0.0 + fStack_3bc * 1.0;
        if (local_5c8[0] != 0) {
          LOCK();
          *(int *)(local_5c8[0] + 8) = *(int *)(local_5c8[0] + 8) + 1;
          UNLOCK();
        }
        local_570 = 0;
        local_578 = &PTR__scalar_deleting_destructor__144f96230;
        local_498 = fVar8;
        uStack_494 = uVar9;
        local_488 = fVar22;
        fStack_484 = fVar23;
        fStack_480 = fVar24;
        fStack_47c = fVar25;
        local_478 = fVar26;
        fStack_474 = fVar27;
        fStack_470 = fVar28;
        fStack_46c = fVar29;
        local_468 = fVar30;
        fStack_464 = fVar31;
        fStack_460 = fVar32;
        fStack_45c = fVar33;
        local_458 = fVar34;
        fStack_454 = fVar35;
        fStack_450 = fVar36;
        fStack_44c = fVar37;
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_570,local_5c8[0]);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_5c8);
        local_5f8 = *(undefined8 **)(lVar10 + 0xa8);
        local_400 = 0;
        if (local_5f8 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_5f8 + 1) = *(int *)(local_5f8 + 1) + 1;
          UNLOCK();
        }
        local_448 = fVar22;
        fStack_444 = fVar23;
        fStack_440 = fVar24;
        fStack_43c = fVar25;
        local_438 = fVar26;
        fStack_434 = fVar27;
        fStack_430 = fVar28;
        fStack_42c = fVar29;
        local_428 = fVar30;
        fStack_424 = fVar31;
        fStack_420 = fVar32;
        fStack_41c = fVar33;
        local_418 = fVar34;
        fStack_414 = fVar35;
        fStack_410 = fVar36;
        fStack_40c = fVar37;
        local_408 = fVar2;
        local_404 = fVar3;
        cVar11 = FSlateBatchData::IsStencilClippingRequired(lVar14);
        if (cVar11 != '\0') {
          plVar13 = (longlong *)(param_1 + 0x128);
          lVar14 = *plVar13;
          if (((lVar14 == 0) || (*(int *)(local_5f8 + 0xc) != *(int *)(lVar14 + 0x60))) ||
             (*(int *)((longlong)local_5f8 + 100) != *(int *)(lVar14 + 100))) {
            TRefCountPtr<FRHIIndexBuffer>::operator=(plVar13,0);
            local_398 = DAT_1464c9cf8;
            local_608 = 1;
            local_610 = local_5c8 + 1;
            local_620 = &local_3b8;
            local_628 = (float *)((ulonglong)local_628 & 0xffffffffffffff00);
            local_5c8[1] = 0;
            local_3b8 = 0;
            uStack_3b0 = 0;
            local_3a8 = _DAT_1464c9ce8;
            uStack_3a4 = uRam00000001464c9cec;
            uStack_3a0 = uRam00000001464c9cf0;
            uStack_39c = uRam00000001464c9cf4;
            local_394 = 0;
            local_390 = 0;
            local_388 = 0;
            local_380 = 0;
            local_630 = CONCAT44(local_630._4_4_,4);
            local_638 = local_638 & 0xffffffff00000000;
            local_618 = plVar13;
            FUN_1404a2100(*(undefined4 *)(local_5f8 + 0xc),
                          *(undefined4 *)((longlong)local_5f8 + 100),0xb,1);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_5c8 + 1);
          }
        }
        local_628 = &local_448;
        local_630 = lVar5 + 0x78;
        local_638 = param_1 + 0x128;
        FUN_1420aa9b0(*(undefined8 *)(param_1 + 0x100),param_2,&local_578,&local_5f8);
        puVar15 = local_5f8;
        if (local_5f8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_5f8 + 1);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            if ((*(char *)(local_5f8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar11 = FOutputDevice::CanBeUsedOnAnyThread(), cVar11 == '\0')))) {
              LOCK();
              bVar21 = *(int *)((longlong)puVar15 + 0xc) == 0;
              if (bVar21) {
                *(int *)((longlong)puVar15 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar21) {
                uVar12 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar12 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar12 >> 0xe] + (ulonglong)(uVar12 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar15;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar15)(puVar15,1);
            }
          }
        }
        local_578 = &PTR_FUN_144dd5318;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_570);
      }
      iVar20 = iVar20 + 1;
      lVar18 = lVar18 + 0x10;
      param_4 = local_5b8;
    } while (iVar20 < (int)local_5b8[1]);
  }
  puVar19 = (ulonglong *)(param_2 + 0x30);
  FSlateEndDrawingWindowsCommand::EndDrawingWindows
            (param_2,param_4,*(undefined8 *)(param_1 + 0x100));
  lVar18 = local_5f0[0];
  local_5a8 = 0xffffffff00000000;
  uStack_5a0 = 0xffffffffffffffff;
  plVar13 = *(longlong **)(local_5b0 + 0xa8);
  local_598 = 0xffffffffffffffff;
  uStack_590 = 0xffffffffffffffff;
  local_588 = 0xffffffff;
  uStack_580 = 0;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  puVar16 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar16 + 10;
  local_550 = plVar13;
  if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar19,0x58);
    puVar16 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 10;
  }
  *puVar19 = (ulonglong)puVar15;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar16;
  *(undefined8 **)(param_2 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar16 + 2) = (undefined4)local_5a8;
  *(undefined4 *)((longlong)puVar16 + 0x14) = local_5a8._4_4_;
  *(undefined4 *)(puVar16 + 3) = (undefined4)uStack_5a0;
  *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_5a0._4_4_;
  *(undefined4 *)(puVar16 + 4) = (undefined4)local_598;
  *(undefined4 *)((longlong)puVar16 + 0x24) = local_598._4_4_;
  *(undefined4 *)(puVar16 + 5) = (undefined4)uStack_590;
  *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_590._4_4_;
  *(undefined4 *)(puVar16 + 6) = (undefined4)local_588;
  *(undefined4 *)((longlong)puVar16 + 0x34) = local_588._4_4_;
  *(undefined4 *)(puVar16 + 7) = (undefined4)uStack_580;
  *(undefined4 *)((longlong)puVar16 + 0x3c) = uStack_580._4_4_;
  puVar16[8] = plVar13;
  puVar16[9] = lVar18;
  lVar18 = (**(code **)(*plVar13 + 8))(plVar13);
  if ((lVar18 == 0) && (lVar18 = (**(code **)(*(longlong *)puVar16[8] + 0x18))(), lVar18 == 0)) {
    (**(code **)(*(longlong *)puVar16[8] + 0x20))();
  }
  lVar18 = (**(code **)(*(longlong *)puVar16[9] + 8))();
  if ((lVar18 == 0) && (lVar18 = (**(code **)(*(longlong *)puVar16[9] + 0x18))(), lVar18 == 0)) {
    (**(code **)(*(longlong *)puVar16[9] + 0x20))();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_550);
  puVar15 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_4d8);
  plVar13 = (longlong *)puVar15[1];
  uVar7 = *puVar15;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  if (local_4d0 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_4d0 + 1;
    lVar18 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_4d0)(local_4d0);
      LOCK();
      piVar1 = (int *)((longlong)local_4d0 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*local_4d0 + 8))(local_4d0,1);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar17 = plVar13 + 1;
    lVar18 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  puVar16 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar16 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar19,0x28);
    puVar16 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 4;
  }
  *puVar19 = (ulonglong)puVar15;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar16;
  *(undefined8 **)(param_2 + 8) = puVar16 + 1;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_144f96470;
  puVar16[2] = uVar7;
  puVar16[3] = plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar17 = plVar13 + 1;
    lVar18 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar17 = plVar13 + 1;
    lVar18 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_378);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_5f0);
  if (local_548[0] != 0) {
    FScopedGPUStatEvent::End(local_548);
  }
  return;
}



// FUNCTION 1420ae800 FUN_1420ae800 body=423 status=ok
// SIG undefined FUN_1420ae800(void)

void FUN_1420ae800(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  float local_res10;
  float local_res14;
  longlong *local_res18;
  
  local_res18 = (longlong *)(*(undefined8 **)(param_1 + 0xe0))[1];
  uVar3 = **(undefined8 **)(param_1 + 0xe0);
  if (local_res18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_res18 + 1) = (int)local_res18[1] + 1;
    UNLOCK();
  }
  uVar7 = 0;
  uVar9 = uVar7;
  if (0 < (int)param_2[1]) {
    do {
      lVar4 = *(longlong *)(uVar9 + *param_2);
      plVar5 = *(longlong **)(lVar4 + 0x18);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar5[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(plVar5 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)plVar5[1];
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (plVar5 != (longlong *)0x0) {
              if (((*(longlong *)(lVar4 + 0x10) != 0) &&
                  (FUN_14183dbb0(*(longlong *)(lVar4 + 0x10),&local_res10), 0.0 < local_res10)) &&
                 (0.0 < local_res14)) {
                FUN_1417ffcd0(*(undefined8 *)(param_1 + 0x110),lVar4);
                FSlateFontCache::UpdateCache(uVar3);
                FSlateElementBatcher::ResetBatches(*(undefined8 *)(param_1 + 0x110));
              }
              LOCK();
              plVar1 = plVar5 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar5[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar5 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar9 = uVar9 + 0x10;
    } while ((int)uVar8 < (int)param_2[1]);
  }
  plVar5 = local_res18;
  if (local_res18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_res18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_res18)(local_res18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1420ae9b0 FUN_1420ae9b0 body=10475 status=ok
// SIG undefined FUN_1420ae9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420ae9b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 param_5,char param_6)

{
  int *piVar1;
  int iVar2;
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
  undefined8 uVar27;
  bool bVar28;
  int iVar29;
  char cVar30;
  int iVar31;
  DWORD DVar32;
  longlong *plVar33;
  longlong lVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  longlong lVar38;
  undefined8 uVar39;
  undefined8 *puVar40;
  longlong lVar41;
  char *pcVar42;
  undefined8 *puVar43;
  longlong *plVar44;
  void *_Dst;
  longlong *plVar45;
  ulonglong _Size;
  code **ppcVar46;
  longlong *plVar47;
  uint uVar48;
  byte bVar49;
  uint uVar50;
  bool bVar51;
  undefined4 uVar52;
  undefined1 auStack_9c8 [32];
  code **local_9a8;
  ulonglong local_9a0;
  float *local_998;
  undefined8 *local_990;
  undefined8 *local_988;
  longlong *local_980;
  code *local_978;
  code **local_970;
  undefined4 local_960;
  char local_958;
  char local_957;
  char local_956;
  longlong *local_950;
  undefined1 local_948 [4];
  uint local_944;
  uint local_940;
  uint local_938 [2];
  longlong local_930;
  longlong *local_928;
  code **local_920;
  longlong local_918;
  longlong local_910;
  uint local_908 [2];
  code **local_900;
  longlong local_8f8;
  int local_8f0;
  uint local_8ec;
  undefined4 uStack_8e8;
  longlong local_8e0;
  longlong local_8d8;
  code *local_8c8;
  undefined8 uStack_8c0;
  uint local_8b8;
  int local_8a8;
  int local_8a4;
  int local_8a0 [2];
  undefined4 local_898 [2];
  longlong local_890;
  longlong local_888;
  longlong local_880;
  int local_878;
  int local_874;
  LARGE_INTEGER local_870;
  undefined8 local_868;
  undefined4 local_860;
  undefined4 local_85c;
  undefined8 local_858;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined4 local_838;
  undefined4 uStack_834;
  longlong local_830;
  undefined8 local_828;
  longlong local_820;
  longlong local_818;
  longlong local_810;
  undefined1 local_808 [8];
  longlong local_800;
  undefined8 local_7f8;
  longlong local_7f0;
  undefined8 local_7e8;
  longlong local_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined **local_748;
  undefined8 local_740;
  longlong *local_738;
  undefined4 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  longlong local_6d0;
  longlong local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  LARGE_INTEGER local_6a8;
  longlong local_6a0;
  undefined8 local_698;
  int local_690;
  undefined8 local_688;
  LARGE_INTEGER local_680;
  undefined8 local_678;
  longlong local_670;
  undefined4 local_668;
  undefined4 local_664;
  char local_660;
  undefined1 local_65f;
  undefined *local_658;
  undefined4 local_650;
  undefined *local_648;
  undefined4 local_640;
  undefined *local_638;
  undefined4 local_630;
  undefined *local_628;
  undefined4 local_620;
  undefined *local_618;
  undefined4 local_610;
  undefined *local_608;
  undefined4 local_600;
  code *local_5f8;
  undefined1 *puStack_5f0;
  code *local_5e8;
  undefined8 uStack_5e0;
  uint local_5d8;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
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
  undefined8 local_558;
  undefined1 local_550;
  undefined1 local_54f;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
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
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  ulonglong local_4bc;
  undefined8 local_4b4;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined8 local_45c;
  undefined4 local_454;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  undefined8 local_3f4;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a4;
  undefined8 local_39c;
  undefined4 local_394;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined8 uStack_36c;
  undefined1 local_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined1 local_348 [192];
  undefined4 local_288;
  undefined1 local_1b8 [256];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_9c8;
  local_8f0 = 0;
  lVar34 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_910 = param_3;
  local_8f8 = param_1;
  local_8d8 = param_4;
  if ((*(int *)(lVar34 + 0x38) < DAT_146ae6624) &&
     (_Init_thread_header(&DAT_146ae6624), DAT_146ae6624 == -1)) {
    QueryPerformanceCounter(&local_680);
    _DAT_146ae6620 = local_680.s.LowPart;
    _Init_thread_footer(&DAT_146ae6624);
  }
  FUN_1425a3670();
  plVar33 = (longlong *)GetRendererModule();
  (**(code **)(*plVar33 + 0x88))(plVar33,param_2);
  if ((*(int *)(lVar34 + 0x38) < DAT_146ae6630) &&
     (_Init_thread_header(&DAT_146ae6630), DAT_146ae6630 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar33 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.UI.CompositeMode");
    lVar34 = 0;
    if (plVar33 != (longlong *)0x0) {
      lVar34 = (**(code **)(*plVar33 + 0x38))(plVar33);
    }
    DAT_146ae6628 = lVar34;
    _Init_thread_footer(&DAT_146ae6630);
  }
  if ((DAT_146ab632a == '\0') || (DAT_1464c9c1a == '\0')) {
LAB_1420aeb56:
    bVar51 = false;
  }
  else {
    uVar50 = (&DAT_1464c9c48)[DAT_1464c9c14];
    iVar31 = FUN_1419ef5f0(uVar50);
    if (((iVar31 < 3) || (iVar31 < 2)) ||
       (((uVar50 < 0x1e && ((0x28e71800U >> (uVar50 & 0x1f) & 1) != 0)) &&
        ((iVar31 < 2 || ((0x1b < uVar50 || ((0x8c50000U >> (uVar50 & 0x1f) & 1) == 0))))))))
    goto LAB_1420aeb56;
    bVar51 = true;
  }
  uVar50 = *(uint *)(param_3 + 0xf0);
  local_8ec = *(uint *)(param_3 + 0xec);
  if ((*(uint *)(param_3 + 0xc0) != uVar50) ||
     (local_957 = '\0', *(uint *)(param_3 + 0xc4) != local_8ec)) {
    local_957 = '\x01';
  }
  *(uint *)(param_3 + 0xc0) = uVar50;
  *(uint *)(param_3 + 0xc4) = local_8ec;
  local_944 = uVar50;
  if ((((!bVar51) || (DAT_146ae6628 == 0)) || (*(int *)(DAT_146ae6628 + 4) == 0)) ||
     ((cVar30 = FUN_141ee41d0(), cVar30 == '\0' || (local_958 = '\x01', uVar50 == 0)))) {
    local_958 = '\0';
  }
  local_900 = (code **)0x0;
  local_956 = '\0';
  iVar31 = (**(code **)(*DAT_146ae4a00 + 0x68))();
  lVar34 = 0;
  if ((iVar31 == 0) && (lVar34 = 0, DAT_146b17150 != 0)) {
    if ((*(undefined8 **)(param_3 + 0xf8) == (undefined8 *)0x0) ||
       (lVar34 = (**(code **)**(undefined8 **)(param_3 + 0xf8))(), lVar34 == 0)) {
      local_830 = 0;
    }
    else {
      local_830 = *(longlong *)(lVar34 + 8);
      if (local_830 != 0) {
        LOCK();
        *(int *)(local_830 + 8) = *(int *)(local_830 + 8) + 1;
        UNLOCK();
      }
    }
    lVar34 = 1;
    if ((local_830 == 0) || (lVar34 = 1, *(longlong *)(DAT_146b17150 + 0xab8) == 0))
    goto LAB_1420aec44;
    bVar51 = true;
    lVar34 = 1;
  }
  else {
LAB_1420aec44:
    bVar51 = false;
  }
  uVar50 = (uint)lVar34;
  if (lVar34 != 0) {
    uVar50 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_830);
  }
  if (bVar51) {
    local_950 = *(longlong **)(param_4 + 0xa98);
    plVar33 = *(longlong **)(DAT_146b17150 + 0xab8);
    if ((*(undefined8 **)(param_3 + 0xf8) == (undefined8 *)0x0) ||
       (lVar34 = (**(code **)**(undefined8 **)(param_3 + 0xf8))(), lVar34 == 0)) {
      local_890 = 0;
    }
    else {
      local_890 = *(longlong *)(lVar34 + 8);
      if (local_890 != 0) {
        LOCK();
        *(int *)(local_890 + 8) = *(int *)(local_890 + 8) + 1;
        UNLOCK();
      }
    }
    lVar34 = local_890;
    (**(code **)(*DAT_146ab6358 + 0x348))(DAT_146ab6358,&local_828,*(undefined8 *)(param_3 + 0x70));
    local_9a8 = (code **)local_950;
    (**(code **)(*plVar33 + 0x68))(plVar33,param_2,local_828,lVar34);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_828);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_890);
    local_956 = '\x01';
  }
  lVar34 = param_4 + 0x28;
  local_918 = lVar34;
  FUN_141852560(param_4);
  FSlateBatchData::CreateRenderBatches(lVar34,param_4 + 0x98);
  local_940 = *(int *)(param_1 + 0x2d4);
  if (*(int *)(param_4 + 0x910) != local_940) {
    TSet<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>,FDefaultSetAllocator>
    ::Empty(param_4 + 0x8b8,0);
    local_928 = (longlong *)(param_4 + 0xb8);
    local_950 = (longlong *)0x100;
    do {
      local_920 = (code **)*local_928;
      iVar31 = *(int *)((longlong)local_920 + 0x1d0);
      lVar34 = *(longlong *)((longlong)local_920 + 0x1c0);
      if (*(longlong *)((longlong)local_920 + 0x1c0) == 0) {
        lVar34 = (longlong)local_920;
      }
      if (iVar31 != 0) {
        pcVar42 = (char *)(lVar34 + 0xd8);
        do {
          if (*pcVar42 != '\0') {
            *pcVar42 = '\0';
            if (*(longlong *)(pcVar42 + -0x10) != 0) {
              FMemory::Free();
            }
            if (pcVar42[-0x18] != '\0') {
              pcVar42[-0x18] = '\0';
            }
          }
          plVar33 = *(longlong **)(pcVar42 + -0xa8);
          if (plVar33 != (longlong *)0x0) {
            LOCK();
            plVar44 = plVar33 + 1;
            lVar34 = *plVar44;
            *(int *)plVar44 = (int)*plVar44 + -1;
            UNLOCK();
            if ((int)lVar34 == 1) {
              (**(code **)*plVar33)(plVar33);
              LOCK();
              piVar1 = (int *)((longlong)plVar33 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar33 + 8))(plVar33,1);
              }
            }
          }
          plVar33 = *(longlong **)(pcVar42 + -0xc0);
          if (plVar33 != (longlong *)0x0) {
            LOCK();
            plVar44 = plVar33 + 1;
            lVar34 = *plVar44;
            *(int *)plVar44 = (int)*plVar44 + -1;
            UNLOCK();
            if ((int)lVar34 == 1) {
              (**(code **)*plVar33)(plVar33);
              LOCK();
              piVar1 = (int *)((longlong)plVar33 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar33 + 8))(plVar33,1);
              }
            }
          }
          plVar33 = *(longlong **)(pcVar42 + -0xd0);
          if (plVar33 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar2 == 1) && (plVar33 != (longlong *)0x0)) {
              (**(code **)(*plVar33 + 8))(plVar33,1);
            }
          }
          pcVar42 = pcVar42 + 0xe0;
          iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
      }
      plVar33 = local_928;
      *(undefined4 *)((longlong)local_920 + 0x1d0) = 0;
      if (*(int *)((longlong)local_920 + 0x1d4) != 0) {
        TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo(local_920,0);
      }
      param_4 = local_8d8;
      param_3 = local_910;
      local_928 = plVar33 + 1;
      local_950 = (longlong *)((longlong)local_950 + -1);
    } while (local_950 != (longlong *)0x0);
    puVar35 = (undefined8 *)(local_8d8 + 0x98);
    *(undefined4 *)(local_8d8 + 0x90c) = 0;
    *(undefined4 *)(local_8d8 + 0x908) = 0xffffffff;
    *(undefined4 *)(local_8d8 + 0xb0) = 0;
    if (*(int *)(local_8d8 + 0xb4) != 0x100) {
      *(undefined4 *)(local_8d8 + 0xb4) = 0x100;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar35);
    }
    *(undefined4 *)(param_4 + 0xb0) = 0x100;
    lVar34 = param_4 + 0x28;
    puVar43 = *(undefined8 **)(param_4 + 0xa8);
    if (*(undefined8 **)(param_4 + 0xa8) == (undefined8 *)0x0) {
      puVar43 = puVar35;
    }
    *puVar43 = 0;
    puVar43[1] = 0;
    puVar43[2] = 0;
    puVar43[3] = 0;
    *(uint *)(param_4 + 0x910) = local_940;
  }
  lVar41 = *(longlong *)(local_8f8 + 0x210);
  local_9a8 = (code **)(lVar41 + 0x68);
  FUN_1420c0c80(lVar41,param_2,lVar34,lVar41 + 0x20);
  if (local_956 == '\0') {
    uVar50 = uVar50 | 4;
    if ((*(undefined8 **)(param_3 + 0xf8) == (undefined8 *)0x0) ||
       (lVar34 = (**(code **)**(undefined8 **)(param_3 + 0xf8))(), lVar34 == 0)) {
      local_8e0 = 0;
    }
    else {
      local_8e0 = *(longlong *)(lVar34 + 8);
      if (local_8e0 != 0) {
        LOCK();
        *(int *)(local_8e0 + 8) = *(int *)(local_8e0 + 8) + 1;
        UNLOCK();
      }
    }
    plVar33 = &local_8e0;
  }
  else {
    uVar50 = uVar50 | 2;
    local_820 = 0;
    plVar33 = &local_820;
  }
  lVar34 = *plVar33;
  *plVar33 = 0;
  local_7f0 = lVar34;
  if ((uVar50 & 4) != 0) {
    uVar50 = uVar50 & 0xfffffffb;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_8e0);
  }
  if ((uVar50 & 2) != 0) {
    uVar50 = uVar50 & 0xfffffffd;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_820);
  }
  if (lVar34 == 0) {
    (**(code **)(*DAT_146ab6358 + 0x350))(DAT_146ab6358,&local_818,*(undefined8 *)(param_3 + 0x70));
    plVar33 = &local_818;
    uVar48 = 0x10;
    lVar41 = lVar34;
  }
  else {
    local_810 = lVar34;
    LOCK();
    *(int *)(lVar34 + 8) = *(int *)(lVar34 + 8) + 1;
    UNLOCK();
    plVar33 = &local_810;
    uVar48 = 8;
    lVar41 = local_7f0;
  }
  local_930 = *plVar33;
  *plVar33 = 0;
  if ((uVar48 & 0x10) != 0) {
    uVar48 = uVar48 & 0xffffffef;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_818);
  }
  if ((uVar48 & 8) != 0) {
    uVar48 = uVar48 & 0xfffffff7;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_810);
  }
  uVar50 = uVar50 | uVar48;
  if (lVar34 == 0) {
    iVar31 = *(int *)(param_3 + 0xd0);
  }
  else {
    iVar31 = *(int *)(lVar41 + 0x60);
  }
  local_928 = (longlong *)CONCAT44(local_928._4_4_,iVar31);
  if (lVar34 == 0) {
    local_940 = *(uint *)(param_3 + 0xd4);
  }
  else {
    local_940 = *(uint *)(lVar41 + 100);
  }
  plVar33 = (longlong *)(param_3 + 0x88);
  if ((*plVar33 == 0) || (*(int *)(*plVar33 + 0x3c) == *(int *)(local_930 + 0x3c))) {
    bVar51 = false;
  }
  else {
    bVar51 = true;
  }
  if (local_958 == '\0') {
    if (*(longlong *)(param_3 + 0xa0) != 0) {
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x80);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar33);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0xb0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x90);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0xa0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0xa8);
      if (*(longlong *)(param_4 + 0x20) == 0) {
        plVar33 = *(longlong **)(param_4 + 0x18);
        uVar50 = uVar50 | 0x10000;
        lVar34 = 0;
        if (plVar33 != (longlong *)0x0) {
          LOCK();
          iVar31 = (int)plVar33[1];
          bVar51 = iVar31 == 0;
          if (bVar51) {
            *(int *)(plVar33 + 1) = 0;
            iVar31 = 0;
          }
          UNLOCK();
          while (lVar34 = 0, !bVar51) {
            LOCK();
            bVar51 = iVar31 == (int)plVar33[1];
            if (bVar51) {
              *(int *)(plVar33 + 1) = iVar31 + 1;
            }
            UNLOCK();
            if (bVar51) {
              if (plVar33 != (longlong *)0x0) {
                lVar34 = *(longlong *)(param_4 + 0x10);
              }
              goto LAB_1420af471;
            }
            LOCK();
            iVar31 = (int)plVar33[1];
            bVar51 = iVar31 == 0;
            if (bVar51) {
              *(int *)(plVar33 + 1) = 0;
              iVar31 = 0;
            }
            UNLOCK();
          }
          plVar33 = (longlong *)0x0;
        }
      }
      else {
        plVar33 = (longlong *)CONCAT44(local_870.s.HighPart,local_870.s.LowPart);
        lVar34 = *(longlong *)(param_4 + 0x20);
      }
LAB_1420af471:
      if ((uVar50 >> 0x10 != 0) && (uVar50 = uVar50 & 0xfffeffff, plVar33 != (longlong *)0x0)) {
        LOCK();
        plVar44 = plVar33 + 1;
        lVar41 = *plVar44;
        *(int *)plVar44 = (int)*plVar44 + -1;
        UNLOCK();
        if ((int)lVar41 == 1) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          iVar31 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar31 == 1) {
            (**(code **)(*plVar33 + 8))(plVar33,1);
          }
        }
      }
      TBaseMulticastDelegate<void,TSharedRef<ISessionInfo,0>_const_&,TSharedRef<ISessionInstanceInfo,0>_const_&,TSharedRef<FSessionLogMessage,0>_const_&>
      ::Broadcast(local_8f8 + 0x78,lVar34,0,0);
    }
  }
  else {
    lVar34 = *(longlong *)(param_3 + 0x80);
    if ((((lVar34 == 0) || (*(int *)(lVar34 + 0x60) != iVar31)) ||
        (*(uint *)(lVar34 + 100) != local_940)) || (bVar51)) {
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x80,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar33,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0xb0,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x90,0);
      puVar35 = (undefined8 *)(param_3 + 0xa0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(puVar35,0);
      plVar33 = (longlong *)(param_3 + 0xa8);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar33,0);
      uVar48 = local_940;
      local_364 = 0;
      local_360 = 0;
      local_978._0_4_ = 1;
      local_988 = (undefined8 *)(param_3 + 0x80);
      local_990 = &local_388;
      local_378 = 1;
      local_998 = (float *)((ulonglong)local_998 & 0xffffffffffffff00);
      local_9a0._0_4_ = 1;
      local_9a8 = (code **)((ulonglong)local_9a8 & 0xffffffff00000000);
      local_358 = 0;
      local_350 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_374 = _DAT_1468b5d78;
      uStack_36c = uRam00000001468b5d80;
      local_980 = (longlong *)(param_3 + 0x90);
      FUN_1404a2100((ulonglong)local_928 & 0xffffffff,local_940,2,1);
      local_990 = &local_388;
      local_978._0_4_ = 1;
      local_998 = (float *)((ulonglong)local_998 & 0xffffffffffffff00);
      local_9a0._0_4_ = 1;
      local_9a8 = (code **)((ulonglong)local_9a8 & 0xffffffff00000000);
      local_988 = puVar35;
      local_980 = plVar33;
      FUN_1404a2100((ulonglong)local_928 & 0xffffffff,uVar48,2,1);
      local_978 = (code *)CONCAT44(local_978._4_4_,1);
      local_980 = (longlong *)(param_3 + 0x98);
      local_988 = (undefined8 *)(param_3 + 0x88);
      local_990 = &local_388;
      local_998 = (float *)((ulonglong)local_998 & 0xffffffffffffff00);
      local_9a0 = CONCAT44(local_9a0._4_4_,1);
      local_9a8 = (code **)((ulonglong)local_9a8 & 0xffffffff00000000);
      FUN_1404a2100((ulonglong)local_928 & 0xffffffff,uVar48,*(undefined4 *)(local_930 + 0x3c),1);
      local_910 = *plVar33;
      uVar39 = *puVar35;
      if (*(longlong *)(local_8d8 + 0x20) == 0) {
        plVar33 = *(longlong **)(local_8d8 + 0x18);
        uVar50 = uVar50 | 0x8000;
        lVar34 = 0;
        if (plVar33 != (longlong *)0x0) {
          LOCK();
          iVar31 = (int)plVar33[1];
          bVar51 = iVar31 == 0;
          if (bVar51) {
            *(int *)(plVar33 + 1) = 0;
            iVar31 = 0;
          }
          UNLOCK();
          while (lVar34 = 0, !bVar51) {
            LOCK();
            bVar51 = iVar31 == (int)plVar33[1];
            if (bVar51) {
              *(int *)(plVar33 + 1) = iVar31 + 1;
            }
            UNLOCK();
            if (bVar51) {
              if (plVar33 != (longlong *)0x0) {
                lVar34 = *(longlong *)(local_8d8 + 0x10);
              }
              goto LAB_1420af2bb;
            }
            LOCK();
            iVar31 = (int)plVar33[1];
            bVar51 = iVar31 == 0;
            if (bVar51) {
              *(int *)(plVar33 + 1) = 0;
              iVar31 = 0;
            }
            UNLOCK();
          }
          plVar33 = (longlong *)0x0;
        }
      }
      else {
        plVar33 = (longlong *)CONCAT44(local_870.s.HighPart,local_870.s.LowPart);
        lVar34 = *(longlong *)(local_8d8 + 0x20);
      }
LAB_1420af2bb:
      if ((uVar50 >> 0xf != 0) && (uVar50 = uVar50 & 0xffff7fff, plVar33 != (longlong *)0x0)) {
        LOCK();
        plVar44 = plVar33 + 1;
        lVar41 = *plVar44;
        *(int *)plVar44 = (int)*plVar44 + -1;
        UNLOCK();
        if ((int)lVar41 == 1) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          iVar31 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar31 == 1) {
            (**(code **)(*plVar33 + 8))(plVar33,1);
          }
        }
      }
      TBaseMulticastDelegate<void,TSharedRef<ISessionInfo,0>_const_&,TSharedRef<ISessionInstanceInfo,0>_const_&,TSharedRef<FSessionLogMessage,0>_const_&>
      ::Broadcast(local_8f8 + 0x78,lVar34,uVar39,local_910);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0xb0,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0xb8,0);
      local_980 = &local_388;
      local_988 = (undefined8 *)CONCAT44(local_988._4_4_,9);
      local_990 = (undefined8 *)CONCAT44(local_990._4_4_,1);
      local_998 = (float *)CONCAT71(local_998._1_7_,10);
      local_9a0 = CONCAT44(local_9a0._4_4_,0x20);
      local_9a8 = (code **)CONCAT44(local_9a8._4_4_,0x20);
      (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,local_808,&DAT_146ab6e78,0x20);
      puVar35 = (undefined8 *)TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0xb8,local_808);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0xb0,*puVar35);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_808);
      local_957 = '\x01';
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(&local_900,local_930);
  ppcVar46 = local_900;
  local_920 = local_900;
  if (local_958 != '\0') {
    local_910 = *(longlong *)(param_3 + 0x88);
    param_6 = '\x01';
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_7d8 = 0xffffffff00000000;
    uStack_7d0 = 0xffffffffffffffff;
    puVar35 = puVar43 + 10;
    local_7c8 = 0xffffffffffffffff;
    uStack_7c0 = 0xffffffffffffffff;
    local_7b8 = 0xffffffff;
    uStack_7b0 = 0;
    if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar35 = puVar43 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar35;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar43;
    *(undefined8 **)(param_2 + 8) = puVar43 + 1;
    puVar43[1] = 0;
    *puVar43 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar43 + 2) = (undefined4)local_7d8;
    *(undefined4 *)((longlong)puVar43 + 0x14) = local_7d8._4_4_;
    *(undefined4 *)(puVar43 + 3) = (undefined4)uStack_7d0;
    *(undefined4 *)((longlong)puVar43 + 0x1c) = uStack_7d0._4_4_;
    *(undefined4 *)(puVar43 + 4) = (undefined4)local_7c8;
    *(undefined4 *)((longlong)puVar43 + 0x24) = local_7c8._4_4_;
    *(undefined4 *)(puVar43 + 5) = (undefined4)uStack_7c0;
    *(undefined4 *)((longlong)puVar43 + 0x2c) = uStack_7c0._4_4_;
    *(undefined4 *)(puVar43 + 6) = (undefined4)local_7b8;
    *(undefined4 *)((longlong)puVar43 + 0x34) = local_7b8._4_4_;
    *(undefined4 *)(puVar43 + 7) = (undefined4)uStack_7b0;
    *(undefined4 *)((longlong)puVar43 + 0x3c) = uStack_7b0._4_4_;
    puVar43[9] = local_910;
    puVar43[8] = ppcVar46;
    lVar34 = (**(code **)(*ppcVar46 + 8))(ppcVar46);
    if ((lVar34 == 0) && (lVar34 = (**(code **)(*(longlong *)puVar43[8] + 0x18))(), lVar34 == 0)) {
      (**(code **)(*(longlong *)puVar43[8] + 0x20))();
    }
    lVar34 = (**(code **)(*(longlong *)puVar43[9] + 8))();
    if ((lVar34 == 0) && (lVar34 = (**(code **)(*(longlong *)puVar43[9] + 0x18))(), lVar34 == 0)) {
      (**(code **)(*(longlong *)puVar43[9] + 0x20))();
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_930,*(undefined8 *)(param_3 + 0x80));
  }
  if (DAT_146ae489c != 0) {
    param_6 = '\x01';
  }
  local_688 = 0;
  FRHICommandList::BeginDrawingViewport(param_2,*(undefined8 *)(param_3 + 0x70),0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_688);
  puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar35 = puVar43 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar43 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar35;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar43;
  *(undefined8 **)(param_2 + 8) = puVar43 + 1;
  puVar43[1] = 0;
  *puVar43 = &PTR_LAB_143f59420;
  puVar43[2] = 0;
  *(undefined4 *)(puVar43 + 3) = 0;
  *(undefined4 *)((longlong)puVar43 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar43 + 0x1c) = local_928._0_4_;
  *(uint *)(puVar43 + 4) = local_940;
  plVar44 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_6a0 = local_930;
  plVar33 = plVar44 + 1;
  if (*(longlong **)(param_2 + 0x38) < plVar33) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    plVar44 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar33 = plVar44 + 1;
  }
  *(longlong **)(param_2 + 0x30) = plVar33;
  *plVar44 = local_6a0;
  puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar35 = puVar43 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar43 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar35;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar43;
  *(undefined8 **)(param_2 + 8) = puVar43 + 1;
  puVar43[1] = 0;
  *puVar43 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar43 + 2) = 1;
  puVar43[3] = plVar44;
  *(undefined4 *)(puVar43 + 4) = 1;
  *(undefined1 *)((longlong)puVar43 + 0x24) = 0;
  if (*(char *)(param_3 + 0xe0) == '\0') {
    local_9a0 = local_9a0 & 0xffffffffffffff00;
    local_708 = 0;
    local_730 = 0x22;
    local_9a8 = (code **)CONCAT44(local_9a8._4_4_,0x22);
    FUN_141ad74f0(param_2,local_930,0,-(param_6 != '\0') & 5);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_708);
  }
  else {
    local_670 = local_930;
    local_868 = *(undefined8 *)(param_3 + 0x78);
    local_668 = 0;
    local_660 = param_6 + '\x01';
    local_664 = 0xffffffff;
    local_65f = 1;
    local_860 = 0x1000000;
    local_85c = 0x22;
    FUN_140c63b80(local_348,1,&local_670,&local_868);
    FRHICommandListBase::CacheActiveRenderTargets(param_2,local_288,local_348,local_1b8);
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar43 + 0x54;
    if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
      puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar35 = puVar43 + 0x54;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar35;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar43;
    *(undefined8 **)(param_2 + 8) = puVar43 + 1;
    puVar43[1] = 0;
    *puVar43 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar43 + 2,local_348);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_348);
  }
  lVar34 = local_918;
  if (0 < *(int *)(local_918 + 0x58)) {
    local_950 = (longlong *)CONCAT44(local_940,(int)local_928);
    local_7e0 = local_930;
    if (local_930 != 0) {
      LOCK();
      *(int *)(local_930 + 8) = *(int *)(local_930 + 8) + 1;
      UNLOCK();
      local_920 = local_900;
      ppcVar46 = local_900;
    }
    local_740 = 0;
    local_748 = &PTR__scalar_deleting_destructor__144f96230;
    local_738 = local_950;
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_740,local_930);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7e0);
    fVar3 = *(float *)(param_3 + 0x40);
    fVar4 = *(float *)(param_3 + 0x44);
    fVar5 = *(float *)(param_3 + 0x48);
    fVar6 = *(float *)(param_3 + 0x4c);
    fVar7 = *(float *)(param_3 + 0x30);
    fVar8 = *(float *)(param_3 + 0x34);
    fVar9 = *(float *)(param_3 + 0x38);
    fVar10 = *(float *)(param_3 + 0x3c);
    fVar11 = *(float *)(param_3 + 0x50);
    fVar12 = *(float *)(param_3 + 0x54);
    fVar13 = *(float *)(param_3 + 0x58);
    fVar14 = *(float *)(param_3 + 0x5c);
    fVar15 = *(float *)(local_8f8 + 0x110);
    fVar16 = *(float *)(local_8f8 + 0x114);
    fVar17 = *(float *)(local_8f8 + 0x118);
    fVar18 = *(float *)(local_8f8 + 0x11c);
    fVar19 = *(float *)(local_8f8 + 0x140);
    fVar20 = *(float *)(local_8f8 + 0x144);
    fVar21 = *(float *)(local_8f8 + 0x148);
    fVar22 = *(float *)(local_8f8 + 0x14c);
    fVar23 = *(float *)(param_3 + 0x60);
    fVar24 = *(float *)(param_3 + 100);
    fVar25 = *(float *)(param_3 + 0x68);
    fVar26 = *(float *)(param_3 + 0x6c);
    local_598 = fVar15 * fVar7 + fVar16 * fVar3 + fVar17 * fVar11 + fVar18 * fVar23;
    fStack_594 = fVar15 * fVar8 + fVar16 * fVar4 + fVar17 * fVar12 + fVar18 * fVar24;
    fStack_590 = fVar15 * fVar9 + fVar16 * fVar5 + fVar17 * fVar13 + fVar18 * fVar25;
    fStack_58c = fVar15 * fVar10 + fVar16 * fVar6 + fVar17 * fVar14 + fVar18 * fVar26;
    fVar15 = *(float *)(local_8f8 + 0x120);
    fVar16 = *(float *)(local_8f8 + 0x124);
    fVar17 = *(float *)(local_8f8 + 0x128);
    fVar18 = *(float *)(local_8f8 + 300);
    local_588 = fVar15 * fVar7 + fVar16 * fVar3 + fVar17 * fVar11 + fVar18 * fVar23;
    fStack_584 = fVar15 * fVar8 + fVar16 * fVar4 + fVar17 * fVar12 + fVar18 * fVar24;
    fStack_580 = fVar15 * fVar9 + fVar16 * fVar5 + fVar17 * fVar13 + fVar18 * fVar25;
    fStack_57c = fVar15 * fVar10 + fVar16 * fVar6 + fVar17 * fVar14 + fVar18 * fVar26;
    fVar15 = *(float *)(local_8f8 + 0x130);
    fVar16 = *(float *)(local_8f8 + 0x134);
    fVar17 = *(float *)(local_8f8 + 0x138);
    fVar18 = *(float *)(local_8f8 + 0x13c);
    local_578 = fVar15 * fVar7 + fVar16 * fVar3 + fVar17 * fVar11 + fVar18 * fVar23;
    fStack_574 = fVar15 * fVar8 + fVar16 * fVar4 + fVar17 * fVar12 + fVar18 * fVar24;
    fStack_570 = fVar15 * fVar9 + fVar16 * fVar5 + fVar17 * fVar13 + fVar18 * fVar25;
    fStack_56c = fVar15 * fVar10 + fVar16 * fVar6 + fVar17 * fVar14 + fVar18 * fVar26;
    local_568 = fVar22 * fVar23 + fVar19 * fVar7 + fVar20 * fVar3 + fVar21 * fVar11;
    fStack_564 = fVar22 * fVar24 + fVar19 * fVar8 + fVar20 * fVar4 + fVar21 * fVar12;
    fStack_560 = fVar22 * fVar25 + fVar19 * fVar9 + fVar20 * fVar5 + fVar21 * fVar13;
    fStack_55c = fVar22 * fVar26 + fVar19 * fVar10 + fVar20 * fVar6 + fVar21 * fVar14;
    local_54f = DAT_146ae489c != 0;
    local_998 = &local_598;
    local_9a0 = lVar34 + 0x50;
    local_9a8 = (code **)(param_3 + 0x78);
    local_558 = 0;
    local_550 = 1;
    local_548 = local_598;
    fStack_544 = fStack_594;
    fStack_540 = fStack_590;
    fStack_53c = fStack_58c;
    local_538 = local_588;
    fStack_534 = fStack_584;
    fStack_530 = fStack_580;
    fStack_52c = fStack_57c;
    local_528 = local_578;
    fStack_524 = fStack_574;
    fStack_520 = fStack_570;
    fStack_51c = fStack_56c;
    local_518 = local_568;
    fStack_514 = fStack_564;
    fStack_510 = fStack_560;
    fStack_50c = fStack_55c;
    FUN_1420aa9b0(*(undefined8 *)(local_8f8 + 0x210),param_2,&local_748,&local_930);
    local_748 = &PTR_FUN_144dd5318;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_740);
  }
  if (local_958 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ae6640) &&
       (_Init_thread_header(&DAT_146ae6640), DAT_146ae6640 == -1)) {
      FName::FName(&DAT_146ae6638,"Renderer",1);
      _Init_thread_footer(&DAT_146ae6640);
    }
    uVar39 = DAT_146ae6638;
    uVar36 = FUN_14168dc80();
    local_950 = (longlong *)FModuleManager::GetModule(uVar36,uVar39);
    lVar34 = FUN_1419ef210();
    local_910 = lVar34;
    if (local_957 != '\0') {
      plVar44 = (longlong *)0x0;
      local_678 = 0;
      FUN_141a19150(param_2,*(undefined8 *)(param_3 + 0xb0),0,0);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_678);
      local_408 = 0;
      local_448 = 0;
      uStack_440 = 0;
      local_438 = 0;
      uStack_430 = 0;
      local_428 = 0;
      uStack_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_400 = 0;
      local_3fc = 0x26;
      local_3f4 = 0;
      local_3ec = 0;
      local_3d8 = 0;
      local_3d0 = 0;
      local_3c8 = 0;
      local_3c0 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_3a8 = 0;
      local_3a4 = 0;
      local_39c = 0;
      local_394 = 0;
      FUN_14049afe0(param_2,&local_448);
      local_418 = FUN_1404a0ce0();
      uStack_410 = FUN_140985530();
      local_408 = FUN_1409853f0();
      local_630 = 0;
      plVar47 = (longlong *)(lVar34 + 0x38);
      local_638 = &DAT_146b198c0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar47,&local_8a8,&local_638);
      plVar33 = plVar44;
      if (local_8a8 != -1) {
        plVar33 = (longlong *)((longlong)local_8a8 * 0x20 + *plVar47);
      }
      local_650 = 0;
      plVar45 = plVar33 + 2;
      if (plVar33 == (longlong *)0x0) {
        plVar45 = plVar44;
      }
      local_658 = &DAT_146b19770;
      lVar34 = *plVar45;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar47,&local_874,&local_658);
      if (local_874 != -1) {
        plVar44 = (longlong *)((longlong)local_874 * 0x20 + *plVar47);
      }
      plVar33 = plVar44 + 2;
      if (plVar44 == (longlong *)0x0) {
        plVar33 = (longlong *)0x0;
      }
      if (plVar33 == (longlong *)0x0) {
        lVar41 = 0;
      }
      else {
        lVar41 = *plVar33;
      }
      local_640 = 0;
      local_648 = &DAT_146ae4a10;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar47,&local_878,&local_648);
      if (local_878 == -1) {
        lVar38 = 0;
      }
      else {
        lVar38 = (longlong)local_878 * 0x20 + *plVar47;
      }
      plVar33 = (longlong *)(lVar38 + 0x10);
      uVar39 = 0;
      if (lVar38 == 0) {
        plVar33 = (longlong *)0x0;
      }
      lVar38 = *plVar33;
      local_838 = 0x20;
      uStack_834 = 0x20;
      local_448 = DAT_146534c78;
      local_848 = 0;
      uStack_840 = 0x2000000000;
      if (lVar34 == 0) {
        uVar50 = uVar50 | 0x20;
        local_728 = 0;
      }
      else {
        local_918 = *(longlong *)(lVar34 + 0x48);
        if (*(char *)(local_918 + 0x28) == '\0') {
          FUN_1419f3850(local_918);
        }
        uVar39 = *(undefined8 *)(local_918 + 0x38);
      }
      uStack_440 = uVar39;
      if ((uVar50 & 0x20) != 0) {
        uVar50 = uVar50 & 0xffffffdf;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_728);
      }
      if (lVar41 == 0) {
        uVar50 = uVar50 | 0x40;
        uStack_420 = 0;
        local_720 = 0;
      }
      else {
        local_918 = *(longlong *)(lVar41 + 0x48);
        if (*(char *)(local_918 + 0x28) == '\0') {
          FUN_1419f3850(local_918);
        }
        uStack_420 = *(undefined8 *)(local_918 + 0x58);
      }
      bVar49 = (byte)uVar50;
      if ((uVar50 & 0x40) != 0) {
        bVar49 = bVar49 & 0xbf;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_720);
      }
      if (lVar38 == 0) {
        bVar49 = bVar49 | 0x80;
        local_428 = 0;
        local_718 = 0;
      }
      else {
        local_918 = *(longlong *)(lVar38 + 0x48);
        if (*(char *)(local_918 + 0x28) == '\0') {
          FUN_1419f3850(local_918);
        }
        local_428 = *(undefined8 *)(local_918 + 0x40);
      }
      if ((char)bVar49 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_718);
      }
      local_3fc = CONCAT44(local_3fc._4_4_,1);
      FUN_141ed6ac0(param_2,&local_448,2,1);
      local_690 = uStack_840._4_4_ - (int)local_848;
      local_858 = CONCAT44(local_690,local_690);
      local_698 = local_858;
      local_9a8 = (code **)((ulonglong)local_9a8 & 0xffffffffffffff00);
      FUN_141c07860(lVar34,param_2,&local_848,&local_698);
      if (lVar41 != 0) {
        lVar34 = *(longlong *)(lVar41 + 0x48);
        local_898[0] = (undefined4)uStack_840;
        if (*(char *)(lVar34 + 0x28) == '\0') {
          FUN_1419f3850(lVar34);
        }
        local_918 = *(longlong *)(lVar34 + 0x58);
        uVar50 = (uint)*(ushort *)(lVar41 + 0xc4);
        if (3 < *(ushort *)(lVar41 + 0xc4)) {
          uVar50 = 4;
        }
        _Size = (ulonglong)uVar50;
        if (uVar50 != 0) {
          local_908[0] = (uint)*(ushort *)(lVar41 + 0xc2);
          local_938[0] = (uint)*(ushort *)(lVar41 + 0xc0);
          _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          uVar37 = _Size + (longlong)_Dst;
          if (*(ulonglong *)(param_2 + 0x38) < uVar37) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar50 + 0x10);
            _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
            uVar37 = _Size + (longlong)_Dst;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar37;
          _guard_xfg_dispatch_icall_nop(_Dst,local_898,_Size);
          puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar35 = puVar43 + 6;
          if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar35 = puVar43 + 6;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar35;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar43;
          *(undefined8 **)(param_2 + 8) = puVar43 + 1;
          puVar43[1] = 0;
          *puVar43 = &PTR_LAB_144e147b0;
          puVar43[2] = local_918;
          *(uint *)(puVar43 + 4) = local_938[0];
          *(uint *)((longlong)puVar43 + 0x24) = local_908[0];
          puVar43[3] = _Dst;
          *(uint *)(puVar43 + 5) = uVar50;
        }
      }
      local_908[0] = local_8ec;
      local_938[0] = local_944;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146ae6228) &&
         (_Init_thread_header(&DAT_146ae6228), DAT_146ae6228 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar33 = (longlong *)
                  (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
        lVar34 = 0;
        if (plVar33 != (longlong *)0x0) {
          lVar34 = (**(code **)(*plVar33 + 0x40))(plVar33);
        }
        DAT_146ae6220 = lVar34;
        _Init_thread_footer(&DAT_146ae6228);
      }
      uVar50 = local_938[0];
      if ((0.0 < *(float *)(DAT_146ae6220 + 4)) && (uVar50 = 2, 1 < (int)local_938[0])) {
        uVar50 = local_938[0];
      }
      local_938[0] = uVar50;
      lVar34 = *(longlong *)(lVar38 + 0x48);
      if (*(char *)(lVar34 + 0x28) == '\0') {
        FUN_1419f3850(lVar34);
      }
      local_9a8 = (code **)((ulonglong)local_9a8 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (param_2,*(undefined8 *)(lVar34 + 0x40),lVar38 + 0xc0,local_938);
      lVar34 = *(longlong *)(lVar38 + 0x48);
      if (*(char *)(lVar34 + 0x28) == '\0') {
        FUN_1419f3850(lVar34);
      }
      local_9a8 = (code **)((ulonglong)local_9a8 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (param_2,*(undefined8 *)(lVar34 + 0x40),lVar38 + 0xc6,local_908);
      local_5a8 = CONCAT44(uStack_834,local_838);
      local_5b8 = local_848;
      uStack_5b0 = uStack_840;
      FUN_1428d37c0(param_2,&local_5b8,0);
      uVar39 = *(undefined8 *)(param_3 + 0xb8);
      puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar33 = *(longlong **)(param_3 + 0xb0);
      local_7a8 = 0xffffffff00000000;
      uStack_7a0 = 0xffffffffffffffff;
      puVar35 = puVar43 + 10;
      local_798 = 0xffffffffffffffff;
      uStack_790 = 0xffffffffffffffff;
      local_788 = 0xffffffff;
      uStack_780 = 0;
      if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
        puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar35 = puVar43 + 10;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar35;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar43;
      *(undefined8 **)(param_2 + 8) = puVar43 + 1;
      puVar43[1] = 0;
      *puVar43 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar43 + 2) = (undefined4)local_7a8;
      *(undefined4 *)((longlong)puVar43 + 0x14) = local_7a8._4_4_;
      *(undefined4 *)(puVar43 + 3) = (undefined4)uStack_7a0;
      *(undefined4 *)((longlong)puVar43 + 0x1c) = uStack_7a0._4_4_;
      *(undefined4 *)(puVar43 + 4) = (undefined4)local_798;
      *(undefined4 *)((longlong)puVar43 + 0x24) = local_798._4_4_;
      *(undefined4 *)(puVar43 + 5) = (undefined4)uStack_790;
      *(undefined4 *)((longlong)puVar43 + 0x2c) = uStack_790._4_4_;
      *(undefined4 *)(puVar43 + 6) = (undefined4)local_788;
      *(undefined4 *)((longlong)puVar43 + 0x34) = local_788._4_4_;
      *(undefined4 *)(puVar43 + 7) = (undefined4)uStack_780;
      *(undefined4 *)((longlong)puVar43 + 0x3c) = uStack_780._4_4_;
      puVar43[8] = plVar33;
      puVar43[9] = uVar39;
      lVar34 = (**(code **)(*plVar33 + 8))(plVar33);
      if ((lVar34 == 0) && (lVar34 = (**(code **)(*(longlong *)puVar43[8] + 0x18))(), lVar34 == 0))
      {
        (**(code **)(*(longlong *)puVar43[8] + 0x20))();
      }
      lVar34 = (**(code **)(*(longlong *)puVar43[9] + 8))();
      if ((lVar34 == 0) && (lVar34 = (**(code **)(*(longlong *)puVar43[9] + 0x18))(), lVar34 == 0))
      {
        (**(code **)(*(longlong *)puVar43[9] + 0x20))();
      }
    }
    uVar39 = *(undefined8 *)(param_3 + 0x90);
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar33 = *(longlong **)(param_3 + 0x80);
    local_778 = 0xffffffff00000000;
    uStack_770 = 0xffffffffffffffff;
    puVar35 = puVar43 + 10;
    local_768 = 0xffffffffffffffff;
    uStack_760 = 0xffffffffffffffff;
    local_758 = 0xffffffff;
    uStack_750 = 0;
    if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar35 = puVar43 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar35;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar43;
    *(undefined8 **)(param_2 + 8) = puVar43 + 1;
    puVar43[1] = 0;
    *puVar43 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar43 + 2) = (undefined4)local_778;
    *(undefined4 *)((longlong)puVar43 + 0x14) = local_778._4_4_;
    *(undefined4 *)(puVar43 + 3) = (undefined4)uStack_770;
    *(undefined4 *)((longlong)puVar43 + 0x1c) = uStack_770._4_4_;
    *(undefined4 *)(puVar43 + 4) = (undefined4)local_768;
    *(undefined4 *)((longlong)puVar43 + 0x24) = local_768._4_4_;
    *(undefined4 *)(puVar43 + 5) = (undefined4)uStack_760;
    *(undefined4 *)((longlong)puVar43 + 0x2c) = uStack_760._4_4_;
    *(undefined4 *)(puVar43 + 6) = (undefined4)local_758;
    *(undefined4 *)((longlong)puVar43 + 0x34) = local_758._4_4_;
    *(undefined4 *)(puVar43 + 7) = (undefined4)uStack_750;
    *(undefined4 *)((longlong)puVar43 + 0x3c) = uStack_750._4_4_;
    puVar43[8] = plVar33;
    puVar43[9] = uVar39;
    lVar34 = (**(code **)(*plVar33 + 8))(plVar33);
    if ((lVar34 == 0) && (lVar34 = (**(code **)(*(longlong *)puVar43[8] + 0x18))(), lVar34 == 0)) {
      (**(code **)(*(longlong *)puVar43[8] + 0x20))();
    }
    lVar34 = (**(code **)(*(longlong *)puVar43[9] + 8))();
    if ((lVar34 == 0) && (lVar34 = (**(code **)(*(longlong *)puVar43[9] + 0x18))(), lVar34 == 0)) {
      (**(code **)(*(longlong *)puVar43[9] + 0x20))();
    }
    local_710 = *(undefined8 *)(param_3 + 0xa8);
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar43 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar35 = puVar43 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar35;
    *puVar43 = local_710;
    puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar40 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar35 = puVar40 + 5;
    }
    ppcVar46 = local_920;
    *(undefined8 **)(param_2 + 0x30) = puVar35;
    lVar41 = 0;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_858 = 0;
    **(undefined8 **)(param_2 + 8) = puVar40;
    *(undefined8 **)(param_2 + 8) = puVar40 + 1;
    puVar40[1] = 0;
    *puVar40 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar40 + 2) = 1;
    puVar40[3] = puVar43;
    *(undefined4 *)(puVar40 + 4) = 0;
    *(undefined1 *)((longlong)puVar40 + 0x24) = 0;
    FUN_141a19150(param_2,local_920,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_858);
    local_4c8 = 0;
    local_508 = 0;
    uStack_500 = 0;
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_4c0 = 0;
    local_4bc = 0x26;
    local_4b4 = 0;
    local_4ac = 0;
    local_498 = 0;
    local_490 = 0;
    local_488 = 0;
    local_480 = 0;
    local_478 = 0;
    local_470 = 0;
    local_468 = 0;
    local_464 = 0;
    local_45c = 0;
    local_454 = 0;
    FUN_14049afe0(param_2,&local_508);
    local_4d8 = FUN_1404a0ce0();
    uStack_4d0 = FUN_140985530();
    local_4c8 = FUN_1409853f0();
    lVar34 = local_910;
    FUN_141b8a540(&local_888,local_910);
    if (local_944 == 0) {
      uVar52 = 0x3f800000;
    }
    else {
      uVar52 = *(undefined4 *)(DAT_146ae49c0 + 4);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ae6650) &&
       (_Init_thread_header(&DAT_146ae6650), DAT_146ae6650 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar33 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.UseNativeNits");
      lVar38 = lVar41;
      if (plVar33 != (longlong *)0x0) {
        lVar38 = (**(code **)(*plVar33 + 0x38))(plVar33);
      }
      DAT_146ae6648 = lVar38;
      _Init_thread_footer(&DAT_146ae6650);
    }
    lVar38 = lVar34 + 0x38;
    if (*(int *)(DAT_146ae6648 + 4) == 1) {
      local_620 = 0;
      local_628 = &DAT_146ae64d0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar38,&local_8a4,&local_628);
      if (local_8a4 != -1) {
        lVar41 = (longlong)local_8a4 * 0x20 + *(longlong *)(lVar34 + 0x38);
      }
      plVar33 = (longlong *)(lVar41 + 0x10);
      if (lVar41 == 0) {
        plVar33 = (longlong *)0x0;
      }
      lVar34 = *plVar33;
      lVar41 = (**(code **)(*local_950 + 0xe0))();
      local_508 = *(undefined8 *)(lVar41 + 0x30);
      if (local_888 == 0) {
        uStack_500 = 0;
        local_700 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_700);
      }
      else {
        uStack_500 = FShader::GetVertexShader(local_888);
      }
      if (lVar34 == 0) {
        local_4e8 = 0;
        local_6f8 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6f8);
      }
      else {
        local_4e8 = FShader::GetPixelShader(lVar34);
      }
      local_4bc = local_4bc & 0xffffffff00000000;
      FUN_141ed6ac0(param_2,&local_508,2,1);
      local_990 = (undefined8 *)CONCAT44(local_990._4_4_,uVar52);
      local_998 = (float *)CONCAT44(local_998._4_4_,local_944);
      local_9a0 = *(undefined8 *)(param_3 + 0xa8);
      local_9a8 = *(code ***)(param_3 + 0xb8);
      FUN_1420be340(lVar34,param_2,*(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_3 + 0x98));
    }
    else if (local_944 - 5 < 2) {
      local_600 = 0;
      local_608 = &DAT_146ae6380;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar38,&local_8f0,&local_608);
      if (local_8f0 != -1) {
        lVar41 = (longlong)local_8f0 * 0x20 + *(longlong *)(lVar34 + 0x38);
      }
      plVar33 = (longlong *)(lVar41 + 0x10);
      if (lVar41 == 0) {
        plVar33 = (longlong *)0x0;
      }
      lVar34 = *plVar33;
      lVar41 = (**(code **)(*local_950 + 0xe0))();
      local_508 = *(undefined8 *)(lVar41 + 0x30);
      if (local_888 == 0) {
        uStack_500 = 0;
        local_6e0 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6e0);
      }
      else {
        uStack_500 = FShader::GetVertexShader(local_888);
      }
      if (lVar34 == 0) {
        local_4e8 = 0;
        local_6d8 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6d8);
      }
      else {
        local_4e8 = FShader::GetPixelShader(lVar34);
      }
      local_4bc = local_4bc & 0xffffffff00000000;
      FUN_141ed6ac0(param_2,&local_508,2,1);
      local_990 = (undefined8 *)CONCAT44(local_990._4_4_,uVar52);
      local_998 = (float *)CONCAT44(local_998._4_4_,local_944);
      local_9a0 = *(undefined8 *)(param_3 + 0xa8);
      local_9a8 = *(code ***)(param_3 + 0xb8);
      FUN_1420bdd10(lVar34,param_2,*(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_3 + 0x98));
    }
    else {
      local_610 = 0;
      local_618 = &DAT_146ae6230;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar38,local_8a0,&local_618);
      if (local_8a0[0] != -1) {
        lVar41 = (longlong)local_8a0[0] * 0x20 + *(longlong *)(lVar34 + 0x38);
      }
      plVar33 = (longlong *)(lVar41 + 0x10);
      if (lVar41 == 0) {
        plVar33 = (longlong *)0x0;
      }
      lVar34 = *plVar33;
      lVar41 = (**(code **)(*local_950 + 0xe0))();
      local_508 = *(undefined8 *)(lVar41 + 0x30);
      if (local_888 == 0) {
        uStack_500 = 0;
        local_6f0 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6f0);
      }
      else {
        uStack_500 = FShader::GetVertexShader(local_888);
      }
      if (lVar34 == 0) {
        local_4e8 = 0;
        local_6e8 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6e8);
      }
      else {
        local_4e8 = FShader::GetPixelShader(lVar34);
      }
      local_4bc = local_4bc & 0xffffffff00000000;
      FUN_141ed6ac0(param_2,&local_508,2,1);
      local_990 = (undefined8 *)CONCAT44(local_990._4_4_,uVar52);
      local_998 = (float *)CONCAT44(local_998._4_4_,local_944);
      local_9a0 = *(undefined8 *)(param_3 + 0xa8);
      local_9a8 = *(code ***)(param_3 + 0xb8);
      FUN_1420be970(lVar34,param_2,*(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_3 + 0x98));
    }
    local_8ec = *(uint *)(ppcVar46 + 0xc);
    uStack_8e8 = *(undefined4 *)((longlong)ppcVar46 + 100);
    local_978 = ppcVar46[0xc];
    local_960 = 1;
    local_970 = (code **)CONCAT44(local_940,(int)local_928);
    local_980 = (longlong *)CONCAT44(local_980._4_4_,(float)local_940);
    local_988 = (undefined8 *)CONCAT44(local_988._4_4_,(float)((ulonglong)local_928 & 0xffffffff));
    local_990 = (undefined8 *)((ulonglong)local_990 & 0xffffffff00000000);
    local_998 = (float *)((ulonglong)local_998 & 0xffffffff00000000);
    local_9a0 = CONCAT44(local_9a0._4_4_,(float)local_940);
    local_9a8 = (code **)CONCAT44(local_9a8._4_4_,(float)((ulonglong)local_928 & 0xffffffff));
    local_920 = local_970;
    (**(code **)(*local_950 + 0xd8))(local_950,param_2,0,0);
  }
  bVar51 = false;
  if ((local_956 == '\0') && (DAT_146b17150 != 0)) {
    bVar51 = true;
    if ((*(undefined8 **)(param_3 + 0xf8) == (undefined8 *)0x0) ||
       (lVar34 = (**(code **)**(undefined8 **)(param_3 + 0xf8))(), lVar34 == 0)) {
      local_800 = 0;
      goto LAB_1420b0c0b;
    }
    local_800 = *(longlong *)(lVar34 + 8);
    if (local_800 == 0) goto LAB_1420b0c0b;
    LOCK();
    *(int *)(local_800 + 8) = *(int *)(local_800 + 8) + 1;
    UNLOCK();
    ppcVar46 = local_900;
    if ((local_800 == 0) || (*(longlong *)(DAT_146b17150 + 0xab8) == 0)) goto LAB_1420b0c0b;
    bVar28 = true;
  }
  else {
LAB_1420b0c0b:
    bVar28 = false;
  }
  if (bVar51) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_800);
  }
  if (bVar28) {
    local_920 = *(code ***)(local_8d8 + 0xa98);
    plVar33 = *(longlong **)(DAT_146b17150 + 0xab8);
    if ((*(undefined8 **)(param_3 + 0xf8) == (undefined8 *)0x0) ||
       (lVar34 = (**(code **)**(undefined8 **)(param_3 + 0xf8))(), lVar34 == 0)) {
      local_880 = 0;
    }
    else {
      local_880 = *(longlong *)(lVar34 + 8);
      if (local_880 != 0) {
        LOCK();
        *(int *)(local_880 + 8) = *(int *)(local_880 + 8) + 1;
        UNLOCK();
        ppcVar46 = local_900;
      }
    }
    lVar34 = local_880;
    (**(code **)(*DAT_146ab6358 + 0x348))(DAT_146ab6358,&local_7f8,*(undefined8 *)(param_3 + 0x70));
    local_9a8 = local_920;
    (**(code **)(*plVar33 + 0x68))(plVar33,param_2,local_7f8,lVar34);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7f8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_880);
  }
  plVar44 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_6d0 = local_930;
  plVar33 = plVar44 + 1;
  if (*(longlong **)(param_2 + 0x38) < plVar33) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    plVar44 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar33 = plVar44 + 1;
  }
  *(longlong **)(param_2 + 0x30) = plVar33;
  *plVar44 = local_6d0;
  puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar35 = puVar43 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar43 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar35;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar43;
  *(undefined8 **)(param_2 + 8) = puVar43 + 1;
  puVar43[1] = 0;
  *puVar43 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar43 + 2) = 1;
  puVar43[3] = plVar44;
  *(undefined4 *)(puVar43 + 4) = 0;
  *(undefined1 *)((longlong)puVar43 + 0x24) = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_930);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7f0);
  lVar34 = DAT_146ae49f0;
  if (local_958 == '\0') goto LAB_1420b0fd3;
  cVar30 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar30 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar32 = GetCurrentThreadId();
    lVar41 = 4;
    if (DVar32 == DAT_1468c21c0) goto LAB_1420b0df2;
  }
  else {
LAB_1420b0df2:
    lVar41 = 0;
  }
  if ((*(int *)(lVar41 + lVar34) == 1) && (lVar34 = *(longlong *)(param_3 + 0xa0), lVar34 != 0)) {
    plVar44 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar33 = plVar44 + 1;
    local_6c8 = lVar34;
    if (*(longlong **)(param_2 + 0x38) < plVar33) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      plVar44 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar33 = plVar44 + 1;
    }
    *(longlong **)(param_2 + 0x30) = plVar33;
    *plVar44 = local_6c8;
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar43 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar35 = puVar43 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar35;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_9a0 = local_9a0 & 0xffffffffffffff00;
    local_6c0 = 0;
    **(undefined8 **)(param_2 + 8) = puVar43;
    *(undefined8 **)(param_2 + 8) = puVar43 + 1;
    puVar43[1] = 0;
    *puVar43 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar43 + 2) = 1;
    puVar43[3] = plVar44;
    *(undefined4 *)(puVar43 + 4) = 1;
    *(undefined1 *)((longlong)puVar43 + 0x24) = 0;
    local_9a8 = (code **)CONCAT44(local_9a8._4_4_,0x22);
    FUN_141ad74f0(param_2,*(undefined8 *)(param_3 + 0xa0),0,5);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_6c0);
    local_6b8 = *(undefined8 *)(param_3 + 0xa0);
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar43 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar35 = puVar43 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar35;
    *puVar43 = local_6b8;
    puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar40 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar35 = puVar40 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar35;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_6b0 = 0;
    **(undefined8 **)(param_2 + 8) = puVar40;
    *(undefined8 **)(param_2 + 8) = puVar40 + 1;
    puVar40[1] = 0;
    *puVar40 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar40 + 2) = 1;
    puVar40[3] = puVar43;
    *(undefined4 *)(puVar40 + 4) = 0;
    *(undefined1 *)((longlong)puVar40 + 0x24) = 0;
    FUN_141a19150(param_2,ppcVar46,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_6b0);
  }
LAB_1420b0fd3:
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_900);
  lVar34 = local_8f8;
  if (*(char *)(local_8f8 + 0x2a0) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x348))(DAT_146ab6358,&local_7e8,*(undefined8 *)(param_3 + 0x70));
    uVar36 = *(undefined8 *)(lVar34 + 0x2a4);
    uVar27 = *(undefined8 *)(lVar34 + 0x2ac);
    uStack_8c0 = (undefined1 *)CONCAT71(uStack_8c0._1_7_,1);
    uVar39 = *(undefined8 *)(lVar34 + 0x2b8);
    uStack_8c0 = (undefined1 *)CONCAT44(0x467a0000,(undefined4)uStack_8c0);
    local_8c8 = (code *)0x6;
    local_8b8 = (local_8b8 >> 8 & 0xff) << 8;
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    local_9a8 = &local_5e8;
    local_5d8 = local_8b8;
    local_5e8 = local_8c8;
    uStack_5e0 = uStack_8c0;
    local_5c8 = uVar36;
    uStack_5c0 = uVar27;
    (**(code **)(*DAT_146ab6358 + 0x310))(DAT_146ab6358,local_7e8,&local_5c8,uVar39);
    *(undefined1 *)(lVar34 + 0x2a0) = 0;
    *(undefined8 *)(lVar34 + 0x2b8) = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7e8);
  }
  QueryPerformanceCounter(&local_870);
  FUN_141ec2170(param_2,*(undefined8 *)(param_3 + 0x70),1,param_5);
  QueryPerformanceCounter(&local_6a8);
  local_948[0] = 0;
  DAT_146ac3b00 = local_6a8.s.LowPart - local_870._0_4_;
  uVar50 = local_6a8.s.LowPart - _DAT_146ae6620;
  uStack_8c0 = local_948;
  local_5f8 = FUN_1415a3f40;
  local_8c8 = FUN_1415a3f40;
  _DAT_146ae6620 = local_6a8.s.LowPart;
  puStack_5f0 = uStack_8c0;
  lVar34 = FUN_1415d8310(&local_8c8,&DAT_1464a8c00);
  iVar31 = *(int *)(lVar34 + 0x18);
  DAT_146ac3ad0 = DAT_146ac3ad0 + DAT_146ac3b00;
  DAT_146ac3ac8 = iVar31;
  *(undefined4 *)(lVar34 + 0x18) = 0;
  iVar29 = DAT_146ac3af4;
  iVar2 = DAT_146ac3ac8;
  DAT_146ac3adc = DAT_146ac3acc;
  DAT_146ac3ad8 = DAT_146ac3ac8;
  DAT_146ac3ac8 = 0;
  uVar48 = DAT_146ac3ad0 + DAT_146ac3acc + iVar2;
  _DAT_146ac3ae8 = 0;
  DAT_146ac3acc = 0;
  DAT_146ac3ae0 = DAT_146ac3ad0;
  DAT_146ac3ad0 = 0;
  _DAT_146ac3af0 = 0;
  DAT_146ac3ad4 = DAT_146ac3af4;
  DAT_146ac3ae4 = DAT_146ac3af4;
  if (uVar48 < uVar50) {
    DAT_146ac3ae4 = uVar50 - uVar48;
  }
  DAT_146ac3af4 = 0;
  FUN_1415b2410(iVar29,DAT_146ac3ae4,iVar31);
  puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar35 = puVar43 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar35) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar35 = puVar43 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar35;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar43;
  *(undefined8 **)(param_2 + 8) = puVar43 + 1;
  puVar43[1] = 0;
  *puVar43 = &PTR_LAB_144f96d90;
  return;
}



// FUNCTION 1420b12b0 FUN_1420b12b0 body=3622 status=ok
// SIG undefined FUN_1420b12b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420b12b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  DWORD *pDVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  void *_Src;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_2f8 [32];
  byte local_2d8;
  undefined1 local_2d0;
  uint local_2c8;
  uint local_2c4;
  undefined1 local_2c0;
  char local_2bf;
  longlong local_2b8;
  undefined1 local_2b0;
  undefined1 local_2af [3];
  int local_2ac;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  longlong local_290;
  undefined8 uStack_288;
  byte local_280;
  undefined1 uStack_27f;
  undefined6 uStack_27e;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  LARGE_INTEGER local_228;
  LARGE_INTEGER local_220;
  undefined8 local_218;
  longlong *local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong lStack_1c8;
  longlong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined8 local_d8 [8];
  undefined8 *local_98;
  int local_90;
  undefined4 local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_2c8 = 0;
  local_2ac = 0;
  if (0 < DAT_1468c21ec) {
    DAT_1468c21ec = DAT_1468c21ec + -1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x210);
  local_2b8 = param_1;
  local_238 = (longlong *)uVar10;
  local_208 = param_2;
  cVar4 = FUN_1424a3f80();
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0xb8) != '\0') {
      local_2c0 = 0;
      if ((DAT_146ac3ac6 == '\0') || (cVar4 = IsInRenderingThread(), cVar4 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
          uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_14209f700(&local_2b0,uVar11);
        }
        else {
          plVar14 = (longlong *)FUN_1420a7910(local_168,0,0xff);
          lVar27 = *plVar14;
          lVar23 = plVar14[2];
          lVar21 = plVar14[1];
          lVar19 = *(longlong *)(lVar27 + 0x18);
          piVar1 = (int *)(lVar19 + 0x48);
          if (lVar19 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_278 = lVar19;
          FUN_140445370(lVar27,lVar21,(int)lVar23,1);
          if (lVar19 != 0) {
            LOCK();
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              FGraphEvent::Recycle(local_278);
            }
          }
        }
      }
      else {
        uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_14209f700(&local_2c0,uVar11);
      }
    }
  }
  else {
    FUN_142498030(2);
  }
  if (((DAT_146ac3ac6 == '\0') || (cVar4 = IsInRenderingThread(), cVar4 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))))) {
    plVar14 = (longlong *)FUN_1420a77c0(local_150,0,0xff);
    *(undefined8 *)(*plVar14 + 0x10) = uVar10;
    lVar27 = *plVar14;
    lVar23 = plVar14[2];
    lVar21 = plVar14[1];
    lVar19 = *(longlong *)(lVar27 + 0x20);
    piVar1 = (int *)(lVar19 + 0x48);
    if (lVar19 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_270 = lVar19;
    FUN_140445100(lVar27,lVar21,(int)lVar23,1);
    if (lVar19 != 0) {
      LOCK();
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FGraphEvent::Recycle(local_270);
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
  }
  cVar4 = FUN_14182b000();
  uVar17 = 0;
  uVar22 = 0;
  if ((cVar4 != '\0') &&
     (lVar27 = *(longlong *)(param_1 + 0x200), uVar18 = uVar17, uVar25 = uVar17, uVar22 = local_2c8,
     0 < *(int *)(lVar27 + 0x218))) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(lVar27 + 0x210) + uVar18) + 8))();
      uVar24 = (int)uVar25 + 1;
      uVar18 = uVar18 + 8;
      param_1 = local_2b8;
      uVar25 = (ulonglong)uVar24;
      uVar22 = local_2c8;
    } while ((int)uVar24 < *(int *)(lVar27 + 0x218));
  }
  FUN_1418375f0(*(undefined8 *)(param_1 + 8),&local_218);
  local_2c4 = 0;
  if (0 < (int)param_2[1]) {
    plVar14 = (longlong *)CONCAT44(local_228.s.HighPart,local_228.s.LowPart);
    local_258 = 0;
    do {
      uVar24 = (uint)uVar17;
      lVar27 = *(longlong *)(*param_2 + local_258 * 0x10);
      local_2a8 = *(longlong *)(lVar27 + 0x20);
      if (local_2a8 == 0) {
        plVar13 = *(longlong **)(lVar27 + 0x18);
        uVar22 = uVar22 | 4;
        local_2a8 = 0;
        plVar14 = plVar13;
        local_2c8 = uVar22;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          iVar7 = (int)plVar13[1];
          bVar28 = iVar7 == 0;
          if (bVar28) {
            *(int *)(plVar13 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
          while (plVar14 = (longlong *)0x0, !bVar28) {
            LOCK();
            bVar28 = iVar7 == (int)plVar13[1];
            if (bVar28) {
              *(int *)(plVar13 + 1) = iVar7 + 1;
            }
            UNLOCK();
            if (bVar28) {
              plVar14 = plVar13;
              if (plVar13 != (longlong *)0x0) {
                local_2a8 = *(longlong *)(lVar27 + 0x10);
              }
              break;
            }
            LOCK();
            iVar7 = (int)plVar13[1];
            bVar28 = iVar7 == 0;
            if (bVar28) {
              *(int *)(plVar13 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
          }
        }
      }
      lVar21 = local_2a8;
      if (((uVar22 & 4) != 0) &&
         (uVar22 = uVar22 & 0xfffffffb, local_2c8 = uVar22, plVar14 != (longlong *)0x0)) {
        LOCK();
        plVar13 = plVar14 + 1;
        lVar19 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          uVar24 = local_2c4;
          if (iVar7 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
            uVar24 = local_2c4;
          }
        }
      }
      if (lVar21 != 0) {
        pfVar2 = (float *)(lVar21 + 0x380);
        pfVar9 = pfVar2;
        if (*pfVar2 == 0.0) {
          pfVar9 = (float *)(lVar21 + 0x378);
        }
        if ((DAT_146ab62cb != '\0') || ((uVar22 = local_2c8, 0.0 < *pfVar9 && (0.0 < pfVar9[1])))) {
          FUN_1417ffcd0(*(undefined8 *)(param_1 + 0x1f0),lVar27);
          FSlateFontCache::UpdateCache(local_218);
          bVar26 = *(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x45);
          cVar4 = FSlateBatchData::IsStencilClippingRequired(lVar27 + 0x28);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146ae6660) && (_Init_thread_header(&DAT_146ae6660), DAT_146ae6660 == -1)) {
            if (DAT_1468b1f88 == (longlong *)0x0) {
              IConsoleManager::SetupSingleton();
            }
            DAT_146ae6658 =
                 (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VSync");
            _Init_thread_footer(&DAT_146ae6660);
          }
          iVar7 = (**(code **)(*DAT_146ae6658 + 0x68))();
          bVar26 = bVar26 | iVar7 != 0;
          FSlateElementBatcher::ResetBatches(*(undefined8 *)(param_1 + 0x1f0));
          uVar22 = local_2c8;
          uVar24 = local_2c4;
          if (0 < *(int *)(param_1 + 200) - *(int *)(param_1 + 0xf4)) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0xc0,&local_2ac,lVar21);
            if (local_2ac == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = *(longlong *)(param_1 + 0xc0) + (longlong)local_2ac * 0x18;
            }
            lVar21 = *(longlong *)(lVar21 + 8);
            if (*pfVar2 == 0.0) {
              local_2d8 = FSlateRenderer::IsViewportFullscreen(local_2b8,local_2a8);
              FUN_1420a5790(local_2b8,lVar21,*(undefined4 *)(lVar21 + 0xd8),
                            *(undefined4 *)(lVar21 + 0xdc));
            }
            if (cVar4 != '\0') {
              iVar7 = *(int *)(lVar21 + 0xd8);
              iVar8 = *(int *)(lVar21 + 0xdc);
              uStack_298 = CONCAT44(iVar7,(undefined4)uStack_298);
              local_290 = CONCAT44(local_290._4_4_,iVar8);
              uStack_298 = CONCAT71(uStack_298._1_7_,cVar4);
              local_2a0 = lVar21;
              if ((DAT_146ac3ac6 == '\0') || (cVar5 = IsInRenderingThread(), cVar5 == '\0')) {
                if ((DAT_146ac3ac5 != '\0') ||
                   (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 == '\0' &&
                     (DAT_1468c21ae != '\0')) &&
                    (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
                  plVar13 = (longlong *)FUN_1420a80f0(local_138,0,0xff);
                  lVar19 = *plVar13;
                  *(undefined4 *)(lVar19 + 0x10) = (undefined4)local_2a0;
                  *(undefined4 *)(lVar19 + 0x14) = local_2a0._4_4_;
                  *(undefined4 *)(lVar19 + 0x18) = (undefined4)uStack_298;
                  *(undefined4 *)(lVar19 + 0x1c) = uStack_298._4_4_;
                  *(longlong *)(lVar19 + 0x20) = local_290;
                  lVar19 = *plVar13;
                  lVar3 = plVar13[2];
                  lVar23 = plVar13[1];
                  lVar20 = *(longlong *)(lVar19 + 0x30);
                  piVar1 = (int *)(lVar20 + 0x48);
                  if (lVar20 != 0) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  local_268 = lVar20;
                  FUN_14048a160(lVar19,lVar23,(int)lVar3,1);
                  if (lVar20 != 0) {
                    LOCK();
                    iVar7 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      FGraphEvent::Recycle(local_268);
                    }
                  }
                  goto LAB_1420b18a4;
                }
                local_1e8 = (undefined4)local_2a0;
                uStack_1e4 = local_2a0._4_4_;
                uStack_1e0 = (undefined4)uStack_298;
                uStack_1dc = uStack_298._4_4_;
                local_1d8 = local_290;
              }
              FBaseGraphTask::GetSmallTaskAllocator();
              if ((*(char *)(lVar21 + 0xe0) == '\0') ||
                 ((lVar19 = *(longlong *)(lVar21 + 0x78), lVar19 != 0 &&
                  ((*(int *)(lVar19 + 0x60) != iVar7 || (*(int *)(lVar19 + 100) != iVar8)))))) {
                *(char *)(lVar21 + 0xe0) = cVar4;
                FUN_1420bb350(lVar21);
              }
            }
LAB_1420b18a4:
            uVar10 = uStack_288;
            lVar19 = local_2b8;
            local_2a0 = local_2b8;
            local_2bf = *(char *)(local_2b8 + 0x2a0);
            uStack_27f = 0;
            uStack_298 = lVar21;
            local_290 = lVar27;
            local_280 = bVar26;
            if (((DAT_1468c2172 != '\0') && (DAT_1468b616c == '\0')) && (DAT_146ab62f7 == '\0')) {
              uVar11 = CONCAT62(uStack_27e,(ushort)bVar26);
              local_1d0 = local_2b8;
              uStack_1b8 = uStack_288;
              lStack_1c8 = lVar21;
              local_1c0 = lVar27;
              local_1b0 = uVar11;
              if ((DAT_146ac3ac6 == '\0') || (cVar4 = IsInRenderingThread(), cVar4 == '\0')) {
                if ((DAT_146ac3ac5 != '\0') ||
                   (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 == '\0' &&
                     (DAT_1468c21ae != '\0')) &&
                    (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
                  plVar13 = (longlong *)FUN_1420a7a60(local_120,0,0xff);
                  lVar23 = *plVar13;
                  *(longlong *)(lVar23 + 0x10) = lVar19;
                  *(longlong *)(lVar23 + 0x18) = lVar21;
                  *(longlong *)(lVar23 + 0x20) = lVar27;
                  *(undefined8 *)(lVar23 + 0x28) = uVar10;
                  *(undefined8 *)(lVar23 + 0x30) = uVar11;
                  lVar27 = *plVar13;
                  lVar20 = plVar13[2];
                  lVar19 = plVar13[1];
                  lVar23 = *(longlong *)(lVar27 + 0x40);
                  piVar1 = (int *)(lVar23 + 0x48);
                  if (lVar23 != 0) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  local_260 = lVar23;
                  FUN_14048a8b0(lVar27,lVar19,(int)lVar20,1);
                  lVar19 = local_2b8;
                  if (lVar23 != 0) {
                    LOCK();
                    iVar7 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      FGraphEvent::Recycle(local_260);
                      lVar19 = local_2b8;
                    }
                  }
                  goto LAB_1420b19fa;
                }
                local_1a8 = lVar19;
                uStack_190 = uVar10;
                lStack_1a0 = lVar21;
                local_198 = lVar27;
                local_188 = uVar11;
              }
              uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
              local_2d0 = 0;
              local_2d8 = bVar26;
              FUN_1420ae9b0(lVar19,uVar10,lVar21,lVar27);
            }
LAB_1420b19fa:
            lVar27 = local_2a8;
            *(int *)(lVar19 + 0x2c) = *(int *)(lVar19 + 0x2c) + 1;
            bVar28 = false;
            iVar7 = *(int *)(lVar19 + 0x2c);
            iVar8 = *(int *)(lVar19 + 0x20) + -1;
            lVar23 = (longlong)iVar8;
            param_1 = lVar19;
            if (-1 < iVar8) {
              lVar20 = lVar23 << 4;
              do {
                lVar3 = *(longlong *)(lVar19 + 0x18);
                if (((*(int *)(lVar20 + 8 + lVar3) == 0) ||
                    (plVar13 = *(longlong **)(lVar20 + lVar3), plVar13 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar13 + 0x40))(plVar13,lVar27,lVar21 + 0x70),
                   cVar4 == '\0')) {
                  bVar28 = true;
                }
                lVar20 = lVar20 + -0x10;
                lVar23 = lVar23 + -1;
              } while (-1 < lVar23);
              iVar7 = *(int *)(lVar19 + 0x2c);
              param_1 = local_2b8;
            }
            *(int *)(lVar19 + 0x2c) = iVar7 + -1;
            if (bVar28) {
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                        ((longlong *)(lVar19 + 0x18),0);
            }
            uVar22 = local_2c8;
            uVar24 = local_2c4;
            if (local_2bf != '\0') {
              FUN_141ee24f0(0);
              uVar22 = local_2c8;
              uVar24 = local_2c4;
            }
          }
        }
      }
      local_2c4 = uVar24 + 1;
      uVar17 = (ulonglong)local_2c4;
      local_258 = local_258 + 1;
      uVar10 = local_238;
      param_2 = local_208;
    } while ((int)local_2c4 < (int)local_208[1]);
  }
  local_238 = param_2;
  uStack_230 = uVar10;
  if ((DAT_146ac3ac6 == '\0') || (cVar4 = IsInRenderingThread(), cVar4 == '\0')) {
    if ((DAT_146ac3ac5 != '\0') ||
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 == '\0' && (DAT_1468c21ae != '\0')) &&
        (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
      plVar14 = (longlong *)FUN_1420a7bb0(local_108,0,0xff);
      lVar27 = *plVar14;
      *(undefined4 *)(lVar27 + 0x10) = (undefined4)local_238;
      *(undefined4 *)(lVar27 + 0x14) = local_238._4_4_;
      *(undefined4 *)(lVar27 + 0x18) = (undefined4)uStack_230;
      *(undefined4 *)(lVar27 + 0x1c) = uStack_230._4_4_;
      lVar27 = *plVar14;
      lVar23 = plVar14[2];
      lVar21 = plVar14[1];
      lVar19 = *(longlong *)(lVar27 + 0x28);
      piVar1 = (int *)(lVar19 + 0x48);
      if (lVar19 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_250 = lVar19;
      FUN_1409421c0(lVar27,lVar21,(int)lVar23,1);
      if (lVar19 != 0) {
        LOCK();
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FGraphEvent::Recycle(local_250);
        }
      }
      goto LAB_1420b1ba5;
    }
    local_178 = (undefined4)local_238;
    uStack_174 = local_238._4_4_;
    uStack_170 = (undefined4)uStack_230;
    uStack_16c = uStack_230._4_4_;
  }
  uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
  FSlateEndDrawingWindowsCommand::EndDrawingWindows(uVar11,param_2,uVar10);
LAB_1420b1ba5:
  cVar4 = FUN_1424a3f80();
  lVar27 = local_2b8;
  if (cVar4 == '\0') {
    if (*(char *)(local_2b8 + 0xb8) != '\0') {
      if ((DAT_146ac3ac6 == '\0') || (cVar4 = IsInRenderingThread(), cVar4 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
          uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_14209f670(local_2af,uVar10);
        }
        else {
          plVar14 = (longlong *)FUN_1420a7d00(local_f0,0,0xff);
          lVar21 = *plVar14;
          lVar20 = plVar14[2];
          lVar19 = plVar14[1];
          lVar23 = *(longlong *)(lVar21 + 0x18);
          piVar1 = (int *)(lVar23 + 0x48);
          if (lVar23 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_248 = lVar23;
          FUN_140445370(lVar21,lVar19,(int)lVar20,1);
          if (lVar23 != 0) {
            LOCK();
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              FGraphEvent::Recycle(local_248);
            }
          }
        }
      }
      else {
        lVar21 = FBaseGraphTask::GetSmallTaskAllocator();
        FRHICommandList::EndFrame(lVar21);
        uVar10 = FRealtimeGPUProfiler::Get();
        FRealtimeGPUProfiler::EndFrame(uVar10,lVar21);
        puVar16 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar16 + 2;
        if (*(undefined8 **)(lVar21 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(lVar21 + 0x30,0x18);
          puVar16 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar16 + 2;
        }
        *(undefined8 **)(lVar21 + 0x30) = puVar15;
        *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
        **(undefined8 **)(lVar21 + 8) = puVar16;
        *(undefined8 **)(lVar21 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f3edf8;
        AK::MemoryMgr::StartProfileThreadUsage((long)puVar16);
      }
    }
  }
  else {
    FUN_14249c9f0(2);
    lVar27 = local_2b8;
  }
  plVar14 = (longlong *)0x0;
  if (0 < *(int *)(lVar27 + 0x298)) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      local_90 = *(int *)(lVar27 + 0x298);
      lVar21 = (longlong)local_90;
      _Src = *(void **)(lVar27 + 0x290);
      local_98 = (undefined8 *)0x0;
      if (local_90 == 0) {
        local_8c = 0;
      }
      else {
        TArray<FRenderThreadUpdateContext,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
                  (local_d8,local_90,0);
        if (_Src == (void *)0x0) {
          _Src = (void *)(lVar27 + 0x250);
        }
        puVar15 = local_d8;
        if (local_98 != (undefined8 *)0x0) {
          puVar15 = local_98;
        }
        _guard_xfg_dispatch_icall_nop(puVar15,_Src,lVar21 << 5);
      }
      uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_228);
      puVar15 = local_d8;
      if (local_98 != (undefined8 *)0x0) {
        puVar15 = local_98;
      }
      puVar16 = puVar15 + (longlong)local_90 * 4;
      for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
        local_2d8 = *(byte *)(puVar15 + 3);
        (**(code **)(*(longlong *)puVar15[2] + 0x20))
                  ((longlong *)puVar15[2],uVar10,puVar15[1],*puVar15);
      }
      QueryPerformanceCounter(&local_220);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_220.s.LowPart - local_228._0_4_);
      if (local_98 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar13 = TlsGetValue(*pDVar12);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)operator_new(0x18);
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = 0;
          plVar13[1] = 0;
          *(undefined4 *)(plVar13 + 2) = 0;
          plVar14 = plVar13;
        }
        TlsSetValue(*pDVar12,plVar14);
        plVar13 = plVar14;
      }
      plVar14 = (longlong *)plVar13[1];
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)*plVar13;
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
          plVar13[1] = (longlong)plVar14;
          if (plVar14 == (longlong *)0x0) {
            puVar15 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar13[1] = (longlong)puVar15;
            lVar21 = 0x1f;
            do {
              puVar16 = puVar15 + 0x20;
              *puVar15 = puVar16;
              lVar21 = lVar21 + -1;
              puVar15 = puVar16;
            } while (lVar21 != 0);
            *puVar16 = 0;
            plVar14 = (longlong *)plVar13[1];
          }
          iVar7 = 0x20;
          *(undefined4 *)(plVar13 + 2) = 0x20;
        }
        else {
          iVar7 = 0x20;
          plVar13[1] = (longlong)plVar14;
          *(undefined4 *)(plVar13 + 2) = 0x20;
          *plVar13 = 0;
        }
      }
      else {
        iVar7 = (int)plVar13[2];
      }
      plVar13[1] = *plVar14;
      *(int *)(plVar13 + 2) = iVar7 + -1;
      *plVar14 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar14 + 1) = 0xff;
      local_200 = 0;
      local_1f8 = 0;
      *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
      *plVar14 = (longlong)&PTR_FUN_144f96650;
      *(undefined1 *)(plVar14 + 0xc) = 0;
      plVar14[0xd] = 0;
      if (((local_2c8 & 0x10) != 0) && (local_1f0 != 0)) {
        LOCK();
        piVar1 = (int *)(local_1f0 + 0x48);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FGraphEvent::Recycle();
        }
      }
      `FSlateRHIRenderer::DrawWindows_Private'::`37'::EURCMacro_DrawWidgetRendererImmediate::
      EURCMacro_DrawWidgetRendererImmediate(plVar14 + 2,lVar27 + 0x250);
      lVar21 = plVar14[0xd];
      piVar1 = (int *)(lVar21 + 0x48);
      if (lVar21 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_240 = lVar21;
      FUN_141c2c150(plVar14,0,0xff,1);
      if (lVar21 != 0) {
        LOCK();
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FGraphEvent::Recycle(local_240);
        }
      }
    }
    *(undefined4 *)(lVar27 + 0x298) = 0;
    if (*(int *)(lVar27 + 0x29c) != 0) {
      TArray<FRenderThreadUpdateContext,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo
                (lVar27 + 0x250,0);
    }
  }
  FUN_141805c00(local_218);
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_210 + 1;
    lVar27 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar27 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  return;
}



// FUNCTION 1420b20e0 Empty body=279 status=ok
// SIG undefined Empty(void)

longlong *
TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>::Empty
          (longlong *param_1,int param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  
  plVar7 = (longlong *)param_1[2];
  iVar8 = (int)param_1[3];
  plVar3 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar3 = param_1;
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar2 + 1);
      uVar5 = *puVar1;
      plVar7 = (longlong *)(ulonglong)uVar5;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar5 == 1) {
        if ((*(char *)(puVar2 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          plVar7 = (longlong *)0x0;
          LOCK();
          uVar5 = *(uint *)((longlong)puVar2 + 0xc);
          if (uVar5 == 0) {
            *(uint *)((longlong)puVar2 + 0xc) = 1;
          }
          else {
            plVar7 = (longlong *)(ulonglong)uVar5;
          }
          UNLOCK();
          if (uVar5 == 0) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar2;
            plVar7 = (longlong *)FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          plVar7 = (longlong *)(**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != param_2) {
    plVar7 = (longlong *)
             TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
             ::ResizeTo(param_1,param_2);
  }
  return plVar7;
}



// FUNCTION 1420b2200 Empty body=569 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint local_78;
  uint uStack_74;
  int iStack_64;
  uint uStack_60;
  uint local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  uint uStack_38;
  
  uVar9 = 0;
  iStack_64 = 0;
  uStack_60 = 0;
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  iVar11 = 1;
  uStack_74 = 1;
  local_78 = 0;
  iVar10 = 0x20;
  if (iVar3 != 0) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar5 = *puVar13;
    uVar12 = uVar9;
    uVar6 = uVar9;
    while (uVar5 == 0) {
      iVar7 = (int)uVar12;
      uStack_60 = (int)uVar6 + 0x20;
      uVar6 = (ulonglong)uStack_60;
      local_78 = iVar7 + 1;
      uVar12 = (ulonglong)local_78;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1420b22ca;
      uVar5 = puVar13[(longlong)iVar7 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar4 = iVar10;
    if (uStack_74 != 0) {
      iVar4 = 0x1f - iVar7;
    }
    iStack_64 = (uStack_60 - iVar4) + 0x1f;
    if (iVar3 < iStack_64) {
LAB_1420b22ca:
      iStack_64 = iVar3;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  uStack_38 = uStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar3) {
    do {
      lVar2 = *(longlong *)(*param_1 + 8 + (longlong)iStack_3c * 0x18);
      if (lVar2 != 0) {
        FUN_14209fa40(lVar2,1);
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(uint *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar5 = param_2 + 0x1f + ((int)(param_2 + 0x1f) >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (3 < param_2) {
    uVar5 = (param_2 >> 1) + 8;
    iVar3 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar11 = iVar10;
    if (uVar5 != 0) {
      iVar11 = 0x1f - iVar3;
    }
    uVar5 = (param_2 >> 1) + 7;
    iVar3 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar5 != 0) {
      iVar10 = 0x1f - iVar3;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - (char)iVar10 & 0x1f);
  }
  if (((int)param_2 < 1) ||
     (((iVar3 = (int)param_1[9], iVar3 != 0 && (iVar11 <= iVar3)) && (iVar3 <= iVar11)))) {
    if (0 < (int)*(uint *)(param_1 + 9)) {
      uVar12 = (ulonglong)*(uint *)(param_1 + 9);
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = param_1 + 7;
        }
        uVar6 = (longlong)(int)param_1[9] - 1U & uVar9;
        uVar9 = uVar9 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar6 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<int,UTexture2D_*>,TDefaultMapHashableKeyFuncs<int,UTexture2D_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
  return;
}



// FUNCTION 1420b2440 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1420b24c0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_1420b2540();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1420b2540 FUN_1420b2540 body=485 status=ok
// SIG undefined FUN_1420b2540(void)

void FUN_1420b2540(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_1420b2614;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_1420b2614:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x30 + *param_1 + 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1420b2730 EndDrawingWindows body=149 status=ok
// SIG undefined EndDrawingWindows(void)

void FSlateEndDrawingWindowsCommand::EndDrawingWindows
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  puVar2[2] = param_3;
  puVar2[3] = param_2;
  *puVar2 = &PTR_ExecuteAndDestruct_144f96460;
  return;
}



// FUNCTION 1420b27d0 FUN_1420b27d0 body=208 status=ok
// SIG undefined FUN_1420b27d0(void)

void FUN_1420b27d0(void)

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
  
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_1420b281a;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_1420b282b;
    }
LAB_1420b281a:
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FRHICommandList::EndFrame(uVar9);
    return;
  }
LAB_1420b282b:
  plVar10 = (longlong *)FUN_1420a7fa0(local_28,0,0xff);
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x18);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_140445370(lVar3,lVar4,(int)lVar6,1);
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



// FUNCTION 1420b28a0 FUN_1420b28a0 body=77 status=ok
// SIG undefined FUN_1420b28a0(void)

void FUN_1420b28a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 1420b28f0 ExecuteAndDestruct body=89 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FSlateEndDrawingWindowsCommand>::ExecuteAndDestruct(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  puVar2 = (undefined8 *)*plVar1;
  puVar3 = puVar2 + (longlong)(int)plVar1[1] * 2;
  if (puVar2 != puVar3) {
    do {
      FSlateWindowElementList::PostDraw_ParallelThread(*puVar2);
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar3);
    plVar1 = *(longlong **)(param_1 + 0x18);
  }
  FUN_14185f740(plVar1);
  return;
}



// FUNCTION 1420b2950 ExecuteAndDestruct body=118 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FSlateUpdateInstanceBufferCommand>::ExecuteAndDestruct(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x138))
                           (DAT_146ab6358,*(undefined8 *)(param_1 + 0x10),0,
                            *(int *)(*(longlong *)(param_1 + 0x18) + 8) << 4,1);
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,(void *)**(undefined8 **)(param_1 + 0x18),
             (longlong)*(int *)(*(undefined8 **)(param_1 + 0x18) + 1) << 4);
  (**(code **)(*DAT_146ab6358 + 0x140))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x10));
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  return;
}



// FUNCTION 1420b29d0 ExecuteAndDestruct body=225 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FSlateUpdateVertexAndIndexBuffers>::ExecuteAndDestruct(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 100);
  uVar2 = (**(code **)(*DAT_146ab6358 + 0x138))
                    (DAT_146ab6358,*(undefined8 *)(param_1 + 0x10),0,
                     *(int *)(*(longlong *)(param_1 + 0x20) + 0x60) * 0x28,1);
  uVar3 = (**(code **)(*DAT_146ab6358 + 0x120))
                    (DAT_146ab6358,*(undefined8 *)(param_1 + 0x18),0,iVar1 * 4,1);
  FUN_14182d350(*(undefined8 *)(param_1 + 0x20),uVar2,uVar3,*(undefined1 *)(param_1 + 0x28));
  (**(code **)(*DAT_146ab6358 + 0x140))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*DAT_146ab6358 + 0x128))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x18));
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  return;
}



// FUNCTION 1420b2af0 FUN_1420b2af0 body=291 status=ok
// SIG undefined FUN_1420b2af0(void)

void FUN_1420b2af0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  uVar4 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14209f340(param_1 + 2,uVar4);
  plVar8 = (longlong *)param_1[5];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_144f96d58;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar8 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    plVar6 = plVar8;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar6 = plVar7;
    }
    TlsSetValue(*pDVar5,plVar6);
  }
  if ((int)plVar6[2] < 0x20) {
    plVar8 = (longlong *)plVar6[1];
  }
  else {
    if (*plVar6 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *plVar6 = plVar6[1];
    plVar6[1] = 0;
    *(undefined4 *)(plVar6 + 2) = 0;
  }
  *param_1 = plVar8;
  *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
  plVar6[1] = (longlong)param_1;
  return;
}



// FUNCTION 1420b2c20 ExecuteTask body=236 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`BeginInitResource'::`2'::InitCommandName,<lambda_0d6f65198024fb7f9e31be238ea99812>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  (**(code **)(*(longlong *)param_1[2] + 0x28))();
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144f96d48;
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



// FUNCTION 1420b2d10 FUN_1420b2d10 body=244 status=ok
// SIG undefined FUN_1420b2d10(void)

void FUN_1420b2d10(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1[2] + 0x128,0);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144f96ca8;
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



// FUNCTION 1420b2e10 FUN_1420b2e10 body=250 status=ok
// SIG undefined FUN_1420b2e10(void)

void FUN_1420b2e10(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  if (*(int *)(param_1 + 4) != -1) {
    (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],param_1[3]);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144f96d38;
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



// FUNCTION 1420b2f10 ExecuteTask body=238 status=ok
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
  FUN_14209f890(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144f96d68;
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



// FUNCTION 1420b3000 FUN_1420b3000 body=226 status=ok
// SIG undefined FUN_1420b3000(void)

void FUN_1420b3000(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144f96cd8;
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



// FUNCTION 1420b30f0 FUN_1420b30f0 body=238 status=ok
// SIG undefined FUN_1420b30f0(void)

void FUN_1420b30f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14209f700(param_1 + 2,uVar3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144f96cc8;
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



// FUNCTION 1420b31e0 FUN_1420b31e0 body=262 status=ok
// SIG undefined FUN_1420b31e0(void)

void FUN_1420b31e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1420ae9b0(param_1[2],uVar3,param_1[3],param_1[4],*(undefined1 *)(param_1 + 6),
                *(undefined1 *)((longlong)param_1 + 0x31));
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_144f96ce8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
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



// FUNCTION 1420b32f0 FUN_1420b32f0 body=242 status=ok
// SIG undefined FUN_1420b32f0(void)

void FUN_1420b32f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FSlateEndDrawingWindowsCommand::EndDrawingWindows(uVar3,param_1[2],param_1[3]);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144f96cf8;
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



// FUNCTION 1420b33f0 FUN_1420b33f0 body=238 status=ok
// SIG undefined FUN_1420b33f0(void)

void FUN_1420b33f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14209f670(param_1 + 2,uVar3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144f96d08;
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



// FUNCTION 1420b34e0 FUN_1420b34e0 body=234 status=ok
// SIG undefined FUN_1420b34e0(void)

void FUN_1420b34e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FRHICommandList::BeginFrame(uVar3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144f96d18;
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



// FUNCTION 1420b35d0 FUN_1420b35d0 body=234 status=ok
// SIG undefined FUN_1420b35d0(void)

void FUN_1420b35d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FRHICommandList::EndFrame(uVar3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144f96d28;
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



// FUNCTION 1420b36c0 FUN_1420b36c0 body=290 status=ok
// SIG undefined FUN_1420b36c0(void)

void FUN_1420b36c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  if ((*(char *)(param_1 + 3) != '\0') &&
     ((lVar3 = param_1[2], *(char *)(lVar3 + 0xe0) == '\0' ||
      ((lVar4 = *(longlong *)(lVar3 + 0x78), lVar4 != 0 &&
       ((*(int *)(lVar4 + 0x60) != *(int *)((longlong)param_1 + 0x1c) ||
        (*(int *)(lVar4 + 100) != *(int *)(param_1 + 4))))))))) {
    *(char *)(lVar3 + 0xe0) = *(char *)(param_1 + 3);
    FUN_1420bb350(param_1[2]);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144f96cb8;
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



// FUNCTION 1420b37f0 FUN_1420b37f0 body=237 status=ok
// SIG undefined FUN_1420b37f0(void)

void FUN_1420b37f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1420a9c20(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144f966c8;
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



// FUNCTION 1420b38e0 FUN_1420b38e0 body=279 status=ok
// SIG undefined FUN_1420b38e0(void)

void FUN_1420b38e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)param_1[4] + 0x20))
            ((longlong *)param_1[4],uVar3,param_1[3],param_1[2],*(undefined1 *)(param_1 + 5));
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f96670;
  *(undefined1 *)(param_1 + 6) = 0;
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



// FUNCTION 1420b3a00 ExecuteTask body=251 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FSlateRHIRenderer::DrawWindows_Private'::`37'::EURCMacro_DrawWidgetRendererImmediate>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1420a9e00(param_1 + 2,param_3,param_1 + 0xd);
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_144f96650;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
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



// FUNCTION 1420b3b00 FUN_1420b3b00 body=290 status=ok
// SIG undefined FUN_1420b3b00(void)

void FUN_1420b3b00(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_1420a9ea0(param_1 + 2,param_3,param_1 + 6);
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
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144f966d8;
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



// FUNCTION 1420b3c30 FUN_1420b3c30 body=260 status=ok
// SIG undefined FUN_1420b3c30(void)

void FUN_1420b3c30(undefined8 *param_1)

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
  (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],param_1[3]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f96660;
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



// FUNCTION 1420b3d40 FUN_1420b3d40 body=237 status=ok
// SIG undefined FUN_1420b3d40(void)

void FUN_1420b3d40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1420a9f30(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144f966e8;
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



// FUNCTION 1420b3e30 FUN_1420b3e30 body=265 status=ok
// SIG undefined FUN_1420b3e30(void)

void FUN_1420b3e30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_1420bfcc0(param_1[2],uVar3,*(undefined4 *)(param_1 + 3));
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f96718;
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



// FUNCTION 1420b3f40 FUN_1420b3f40 body=237 status=ok
// SIG undefined FUN_1420b3f40(void)

void FUN_1420b3f40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1420aa060(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144f966f8;
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



// FUNCTION 1420b4030 FUN_1420b4030 body=237 status=ok
// SIG undefined FUN_1420b4030(void)

void FUN_1420b4030(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1420aa160(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144f96640;
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



// FUNCTION 1420b4120 FindId body=208 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        lVar4 = lVar4 + (longlong)iVar2 * 0x30;
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar4,param_3);
        if ((((cVar1 != '\0') && (*(float *)(param_3 + 8) == *(float *)(lVar4 + 8))) &&
            (*(float *)(param_3 + 0xc) == *(float *)(lVar4 + 0xc))) &&
           (*(int *)(lVar4 + 0x10) == *(int *)(param_3 + 0x10))) {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)(lVar4 + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1420b41f0 FUN_1420b41f0 body=556 status=ok
// SIG undefined FUN_1420b41f0(void)

longlong * FUN_1420b41f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *_Dst;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined8 **local_38;
  longlong **local_30;
  
  lVar5 = *param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x248,local_res8,lVar5);
  plVar6 = (longlong *)0x0;
  local_res10 = plVar6;
  if ((local_res8[0] != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x248) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
    local_res10 = *(longlong **)(lVar1 + 8);
  }
  if (local_res10 == (longlong *)0x0) {
    local_res18 = *(undefined8 *)(lVar5 + 0x18);
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x298);
    if ((local_res8[0] == -1) ||
       (lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x298), lVar5 == 0)) {
      local_res20 = &local_res18;
      FUN_14209ad40(param_1 + 0x298,local_res8,&local_res20,0);
      lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x298);
    }
    if (*(int *)(lVar5 + 0x10) == 0) {
      _Dst = (longlong *)operator_new(0xa0);
      if (_Dst != (longlong *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,0xa0);
        *(undefined4 *)(_Dst + 1) = 4;
        _Dst[3] = 0;
        *(undefined1 *)(_Dst + 5) = 0;
        _Dst[6] = 0;
        *_Dst = (longlong)&PTR__scalar_deleting_destructor__144f96080;
        *(undefined4 *)(_Dst + 7) = 0;
        *(undefined4 *)(_Dst + 8) = 0;
        *(undefined4 *)(_Dst + 10) = 4;
        _Dst[0xb] = 0;
        _Dst[0xc] = 0;
        *(undefined1 *)(_Dst + 0xe) = 0;
        _Dst[0xf] = 0;
        _Dst[0x10] = 0;
        _Dst[9] = (longlong)&PTR_FUN_144f96018;
        _Dst[0x11] = 0;
        *(undefined4 *)(_Dst + 0x12) = 0;
        _Dst[0x13] = 0;
        plVar6 = _Dst;
      }
      *(undefined4 *)((longlong)plVar6 + 0x3c) = 4000;
      local_res10 = plVar6;
      cVar2 = IsInRenderingThread();
      if (cVar2 == '\0') {
        FUN_141edf270(plVar6);
      }
      else {
        (**(code **)(*plVar6 + 0x28))();
      }
      plVar6 = local_res10;
      *(undefined4 *)((longlong)local_res10 + 0x8c) = 400;
      cVar2 = IsInRenderingThread();
      if (cVar2 == '\0') {
        FUN_141edf270(plVar6 + 9);
      }
      else {
        (**(code **)(plVar6[9] + 0x28))();
      }
    }
    else {
      local_res10 = (longlong *)**(undefined8 **)(lVar5 + 8);
      iVar3 = *(int *)(lVar5 + 0x10);
      iVar4 = iVar3 + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar5 + 8),
                   (void *)((longlong)*(void **)(lVar5 + 8) + (longlong)(iVar3 - iVar4) * 8),
                   (longlong)iVar4 << 3);
        iVar3 = *(int *)(lVar5 + 0x10);
      }
      *(int *)(lVar5 + 0x10) = iVar3 + -1;
    }
    local_res20 = (undefined8 *)*param_2;
    local_38 = &local_res20;
    local_30 = &local_res10;
    FUN_140a9d130(param_1 + 0x248,local_res8,&local_38,0);
  }
  return local_res10;
}



// FUNCTION 1420b4420 FUN_1420b4420 body=2120 status=ok
// SIG undefined FUN_1420b4420(void)

longlong * FUN_1420b4420(longlong *param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 **ppuVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res10;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 *puVar19;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 *local_148;
  longlong *local_140;
  undefined4 local_138 [2];
  undefined8 local_130;
  longlong local_128 [3];
  longlong local_110;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  longlong **local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined4 uVar20;
  
  local_160 = *(longlong *)(param_2 + 0x50);
  plVar7 = (longlong *)0x0;
  local_res10 = 0;
  if ((local_160 == 0) && (*(longlong *)(param_2 + 0x48) != 0)) {
    local_160 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x18);
  }
  lVar6 = FName::GetNames();
  iVar15 = (int)local_160;
  if ((iVar15 < 0) || (*(int *)(lVar6 + 0x400) <= iVar15)) {
LAB_1420b44cb:
    bVar2 = false;
  }
  else {
    uVar12 = iVar15 >> 0x1f & 0x3fff;
    uVar5 = iVar15 + uVar12;
    lVar13 = (longlong)((int)uVar5 >> 0xe);
    lVar16 = (longlong)(int)((uVar5 & 0x3fff) - uVar12);
    if ((*(longlong *)(*(longlong *)(lVar6 + lVar13 * 8) + lVar16 * 8) == 0) ||
       ((*(int *)(lVar6 + 0x400) <= iVar15 ||
        (*(longlong *)(*(longlong *)(lVar6 + lVar13 * 8) + lVar16 * 8) == 0)))) goto LAB_1420b44cb;
    bVar2 = true;
  }
  if ((!bVar2) || (local_130 = 0, local_160 == 0)) goto LAB_1420b4679;
  lVar6 = *(longlong *)(param_2 + 0x48);
  if (lVar6 == 0) {
    FUN_1420b5990(param_1 + 0x14,&local_148);
    if (local_148 == (undefined8 *)0x0) {
      lVar6 = *param_1;
      local_128[0] = 0;
      local_128[1] = 0;
      uVar8 = FName::ToString(&local_160,local_78);
      puVar19 = local_res20;
      cVar4 = (**(code **)(lVar6 + 0x30))(param_1,&local_160,uVar8,local_138,puVar19,local_128);
      uVar20 = (undefined4)((ulonglong)puVar19 >> 0x20);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      if (cVar4 != '\0') {
        ppuVar11 = (undefined8 **)
                   FSlateRHIResourceManager::MakeDynamicTextureResource
                             (param_1,local_68,local_160,local_138[0],
                              CONCAT44(uVar20,local_res20[0]),local_128);
        if (&local_148 != ppuVar11) {
          local_148 = *ppuVar11;
          *ppuVar11 = (undefined8 *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_140,ppuVar11 + 1);
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
      }
      if (local_128[0] != 0) {
        FMemory::Free();
      }
      plVar7 = local_140;
      if (local_148 == (undefined8 *)0x0) {
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_140 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 != 1) goto LAB_1420b4679;
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 != 1) goto LAB_1420b4679;
          goto LAB_1420b466e;
        }
        goto LAB_1420b4679;
      }
    }
    plVar9 = local_140;
    plVar7 = (longlong *)*local_148;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_140 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
  }
  else {
    lVar13 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
        != lVar13 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar8 = USlateTextureAtlasInterface::GetPrivateStaticClass();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar8);
      if ((plVar9 != (longlong *)0x0) &&
         ((**(code **)(*plVar9 + 0x10))(plVar9,local_128 + 2), local_128[2] != 0)) {
        FWeakObjectPtr::operator=(&local_e8);
        local_e0 = local_e8;
        TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x32,&local_res10,&local_e0);
        if (((int)local_res10 == -1) ||
           (lVar13 = (longlong)(int)local_res10 * 0x20 + param_1[0x32], lVar13 == 0)) {
          uStack_170 = (longlong *)0x0;
        }
        else {
          local_178 = *(longlong **)(lVar13 + 8);
          uStack_170 = *(longlong **)(lVar13 + 0x10);
          if (uStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_170 + 1) = (int)uStack_170[1] + 1;
            UNLOCK();
          }
          plVar9 = uStack_170;
          if (local_178 != (longlong *)0x0) goto LAB_1420b4907;
        }
        plVar9 = (longlong *)operator_new(0x60);
        plVar10 = plVar7;
        if (plVar9 != (longlong *)0x0) {
          plVar9[1] = local_128[2];
          *plVar9 = (longlong)&PTR_FUN_144f964a0;
          plVar9[2] = 0;
          plVar9[3] = 0;
          plVar9[6] = 0;
          plVar9[7] = 0;
          *(undefined4 *)(plVar9 + 8) = 0xffffffff;
          *(undefined4 *)((longlong)plVar9 + 0x44) = 0;
          plVar9[10] = 0;
          *(undefined4 *)(plVar9 + 0xb) = 0;
          plVar10 = plVar9;
        }
        plVar9 = (longlong *)operator_new(0x18);
        local_f8 = plVar7;
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 1;
          *plVar9 = (longlong)&PTR_FUN_143fd0100;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
          plVar9[2] = (longlong)plVar10;
          local_f8 = plVar9;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_100,plVar10,plVar10);
        local_100 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_170,&local_f8);
        plVar9 = local_f8;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_f8 + 1;
          lVar13 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_f8)(local_f8);
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
        plVar14 = uStack_170;
        if (uStack_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_170 + 1) = (int)uStack_170[1] + 1;
          UNLOCK();
        }
        if (local_128[2] != 0) {
          local_178._0_4_ = SUB84(plVar10,0);
          local_178._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
          local_a8 = (undefined4)local_178;
          uStack_a4 = local_178._4_4_;
          uStack_a0 = (undefined4)uStack_170;
          uStack_9c = uStack_170._4_4_;
          if (uStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_170 + 1) = (int)uStack_170[1] + 1;
            UNLOCK();
          }
          FWeakObjectPtr::operator=(local_d8);
          local_b8 = local_d8;
          local_b0 = &local_a8;
          FUN_14209b270(param_1 + 0x32,local_f0,&local_b8,0);
          plVar9 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar9 + 1;
            lVar13 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            plVar14 = uStack_170;
            if ((int)lVar13 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar14 = uStack_170;
              if (iVar15 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
                plVar14 = uStack_170;
              }
            }
          }
        }
        plVar3 = uStack_170;
        plVar9 = (longlong *)0x0;
        local_178 = plVar10;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar14 + 1;
          lVar13 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          plVar9 = uStack_170;
          if ((int)lVar13 == 1) {
            (**(code **)*uStack_170)(uStack_170);
            plVar9 = uStack_170;
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*uStack_170 + 8))(uStack_170,1);
            }
          }
        }
LAB_1420b4907:
        FWeakObjectPtr::operator=(&local_d0,lVar6);
        local_c8 = local_d0;
        TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::FindId(local_178 + 2,local_res18,&local_c8);
        local_168 = plVar7;
        if ((local_res18[0] != -1) &&
           (lVar13 = local_178[2] + (longlong)local_res18[0] * 0x18, lVar13 != 0)) {
          local_168 = *(longlong **)(lVar13 + 8);
        }
        if (local_168 == (longlong *)0x0) {
          fVar17 = (float)(**(code **)(*(longlong *)local_178[1] + 0x2b8))();
          fVar17 = fVar17 * fStack_104;
          fVar18 = (float)(**(code **)(*(longlong *)local_178[1] + 0x2b0))();
          fVar18 = fVar18 * local_108;
          plVar10 = (longlong *)operator_new(0x30);
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = 0;
            plVar10[2] = 0;
            *(undefined4 *)(plVar10 + 1) = 0x3f800000;
            *(undefined4 *)((longlong)plVar10 + 0xc) = 0x3f800000;
            plVar10[3] = 0;
            plVar10[4] = 0;
            plVar10[5] = 0;
            plVar7 = plVar10;
          }
          plVar7[2] = (longlong)local_178;
          *(int *)(plVar7 + 3) = (int)ROUND(fVar18 + fVar18 + 0.5) >> 1;
          *(int *)((longlong)plVar7 + 0x1c) = (int)ROUND(fVar17 + fVar17 + 0.5) >> 1;
          *plVar7 = local_110;
          plVar7[1] = CONCAT44(fStack_104,local_108);
          local_168 = plVar7;
          FWeakObjectPtr::operator=(local_c0,lVar6);
          local_98 = local_c0;
          local_90 = &local_168;
          FUN_141711030(local_178 + 2,local_ec,&local_98,0);
        }
        plVar7 = uStack_170;
        if (plVar9 == (longlong *)0x0) {
          return local_168;
        }
        LOCK();
        plVar9 = plVar9 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return local_168;
        }
        (**(code **)*uStack_170)(uStack_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 != 1) {
          return local_168;
        }
        (**(code **)(*uStack_170 + 8))(uStack_170,1);
        return local_168;
      }
      goto LAB_1420b4679;
    }
    FUN_1420b8030(param_1 + 0x14,&local_158,lVar6);
    lVar13 = local_158;
    if (local_158 == 0) {
      plVar7 = (longlong *)FUN_1420ba1c0(param_1,local_88,lVar6);
      if (&local_158 != plVar7) {
        local_158 = *plVar7;
        *plVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_150,plVar7 + 1);
        lVar13 = local_158;
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_80 + 1;
        lVar16 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        lVar13 = local_158;
        if ((int)lVar16 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar13 = local_158;
          if (iVar15 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
            lVar13 = local_158;
          }
        }
      }
      if (lVar13 != 0) goto LAB_1420b45dd;
    }
    else {
LAB_1420b45dd:
      if ((*(longlong *)(lVar13 + 8) != 0) && (*(longlong *)(*(longlong *)(lVar13 + 8) + 0x60) != 0)
         ) {
        FSlateUTextureResource::UpdateTexture(lVar13,lVar6);
        plVar9 = local_150;
        plVar7 = *(longlong **)(lVar13 + 0x10);
        if (local_150 == (longlong *)0x0) {
          return plVar7;
        }
        LOCK();
        plVar10 = local_150 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return plVar7;
        }
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 != 1) {
          return plVar7;
        }
        (**(code **)(*local_150 + 8))(local_150,1);
        return plVar7;
      }
    }
    plVar7 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_150 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_140 = local_150;
        if (iVar15 == 1) {
LAB_1420b466e:
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
LAB_1420b4679:
    plVar7 = (longlong *)0x0;
  }
  return plVar7;
}



// FUNCTION 1420b4c70 FUN_1420b4c70 body=72 status=ok
// SIG undefined FUN_1420b4c70(void)

void FUN_1420b4c70(void)

{
  char cVar1;
  DWORD DVar2;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      cVar1 = FUN_1415e1500();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  FUN_141ee24f0(0);
  return;
}



// FUNCTION 1420b4ce0 FUN_1420b4ce0 body=612 status=ok
// SIG undefined FUN_1420b4ce0(void)

undefined8 * FUN_1420b4ce0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong local_res18 [2];
  undefined4 *puVar11;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined4 uVar12;
  
  lVar10 = *(longlong *)(param_1 + 0x200);
  uVar9 = 0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_res18[0] = param_3;
  if (*(int *)(lVar10 + 0xa8) != *(int *)(lVar10 + 0xd4)) {
    lVar8 = *(longlong *)(lVar10 + 0xe0);
    if (*(longlong *)(lVar10 + 0xe0) == 0) {
      lVar8 = lVar10 + 0xd8;
    }
    iVar5 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(lVar10 + 0xe8) - 1U) * 4);
    if (iVar5 != -1) {
      lVar10 = *(longlong *)(lVar10 + 0xa0);
      do {
        lVar8 = (longlong)iVar5 * 0x20;
        if (*(longlong *)(lVar8 + lVar10) == param_3) {
          if ((iVar5 != -1) && (lVar10 = (longlong)iVar5 * 0x20 + lVar10, lVar10 != 0)) {
            plStack_70 = *(longlong **)(lVar10 + 0x10);
            local_78 = *(longlong **)(lVar10 + 8);
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
            }
            if (local_78 == (longlong *)0x0) goto LAB_1420b4da5;
            goto LAB_1420b4e83;
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x18 + lVar10);
      } while (iVar5 != -1);
    }
  }
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
LAB_1420b4da5:
  plVar3 = *(longlong **)(param_1 + 0x200);
  lVar10 = *plVar3;
  uVar6 = FName::ToString(local_res18,local_68 + 2);
  puVar11 = local_res8;
  cVar4 = (**(code **)(lVar10 + 0x30))(plVar3,local_res18,uVar6,local_res10,puVar11,local_68);
  uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (cVar4 != '\0') {
    pplVar7 = (longlong **)
              FSlateRHIResourceManager::MakeDynamicTextureResource
                        (*(undefined8 *)(param_1 + 0x200),local_48,local_res18[0],local_res10[0],
                         CONCAT44(uVar12,local_res8[0]),local_68);
    if (&local_78 != pplVar7) {
      local_78 = *pplVar7;
      *pplVar7 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_70,pplVar7 + 1);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
LAB_1420b4e83:
  plVar3 = plStack_70;
  if (local_78 == (longlong *)0x0) {
    local_res18[1] = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*local_78 + 0x18);
  }
  *param_2 = uVar9;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_70 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1420b4f50 FUN_1420b4f50 body=439 status=ok
// SIG undefined FUN_1420b4f50(void)

bool FUN_1420b4f50(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x200);
  if (*(int *)(lVar6 + 0xa8) != *(int *)(lVar6 + 0xd4)) {
    lVar5 = *(longlong *)(lVar6 + 0xe0);
    if (*(longlong *)(lVar6 + 0xe0) == 0) {
      lVar5 = lVar6 + 0xd8;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(lVar6 + 0xe8) - 1U) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(lVar6 + 0xa0);
      do {
        lVar5 = (longlong)iVar3 * 0x20;
        if (*(longlong *)(lVar5 + lVar6) == param_2) {
          if ((iVar3 != -1) && (lVar6 = (longlong)iVar3 * 0x20 + lVar6, lVar6 != 0)) {
            plStack_20 = *(longlong **)(lVar6 + 0x10);
            local_28 = *(longlong *)(lVar6 + 8);
            if (plStack_20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
              UNLOCK();
            }
            if (local_28 == 0) goto LAB_1420b4fe8;
            goto LAB_1420b506f;
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x18 + lVar6);
      } while (iVar3 != -1);
    }
  }
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
LAB_1420b4fe8:
  plVar4 = (longlong *)
           FSlateRHIResourceManager::MakeDynamicTextureResource
                     (*(undefined8 *)(param_1 + 0x200),local_18,param_2,param_3,param_4,param_5);
  if (&local_28 != plVar4) {
    local_28 = *plVar4;
    *plVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_20,plVar4 + 1);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
LAB_1420b506f:
  plVar4 = plStack_20;
  bVar7 = local_28 != 0;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return bVar7;
}



// FUNCTION 1420b5110 FUN_1420b5110 body=525 status=ok
// SIG undefined FUN_1420b5110(void)

bool FUN_1420b5110(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x200);
  if (*(int *)(lVar6 + 0xa8) != *(int *)(lVar6 + 0xd4)) {
    lVar5 = *(longlong *)(lVar6 + 0xe0);
    if (*(longlong *)(lVar6 + 0xe0) == 0) {
      lVar5 = lVar6 + 0xd8;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(lVar6 + 0xe8) - 1U) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(lVar6 + 0xa0);
      do {
        lVar5 = (longlong)iVar3 * 0x20;
        if (*(longlong *)(lVar5 + lVar6) == param_2) {
          if ((iVar3 != -1) && (lVar6 = (longlong)iVar3 * 0x20 + lVar6, lVar6 != 0)) {
            plStack_30 = *(longlong **)(lVar6 + 0x10);
            local_38 = *(longlong *)(lVar6 + 8);
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
              UNLOCK();
            }
            if (local_38 == 0) goto LAB_1420b51b6;
            goto LAB_1420b5248;
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x18 + lVar6);
      } while (iVar3 != -1);
    }
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
LAB_1420b51b6:
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_1420b9c20(*(undefined8 *)(param_1 + 0x200),local_18,param_2,&local_28);
  if (&local_38 != plVar4) {
    local_38 = *plVar4;
    *plVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_30,plVar4 + 1);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
LAB_1420b5248:
  plVar4 = plStack_30;
  bVar7 = local_38 != 0;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
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
  return bVar7;
}



// FUNCTION 1420b5320 FUN_1420b5320 body=964 status=ok
// SIG undefined FUN_1420b5320(void)

float * FUN_1420b5320(longlong param_1,longlong *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  longlong *plVar13;
  uint uVar14;
  float *pfVar15;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  fVar2 = *(float *)(*param_2 + 0x14);
  fVar3 = *(float *)(*param_2 + 0x10);
  if ((char)param_2[2] == '\0') {
    pfVar7 = (float *)operator_new(0x30);
    pfVar12 = (float *)0x0;
    pfVar8 = pfVar12;
    if (pfVar7 != (float *)0x0) {
      pfVar7[0] = 0.0;
      pfVar7[1] = 0.0;
      pfVar7[4] = 0.0;
      pfVar7[5] = 0.0;
      pfVar7[2] = 1.0;
      pfVar7[3] = 1.0;
      pfVar7[6] = 0.0;
      pfVar7[7] = 0.0;
      pfVar7[8] = 0.0;
      pfVar7[9] = 0.0;
      pfVar7[10] = 0.0;
      pfVar7[0xb] = 0.0;
      pfVar8 = pfVar7;
    }
    lVar9 = operator_new(0x78);
    pfVar7 = pfVar12;
    if (lVar9 != 0) {
      local_48 = *param_2;
      local_40 = param_2[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      pfVar7 = (float *)FUN_1427ee790(lVar9,fVar3,fVar2,2,&local_48,
                                      -(*(char *)((longlong)param_2 + 0x11) != '\0') & 0x10,0);
    }
    iVar5 = *(int *)(param_1 + 0x228);
    *(int *)(param_1 + 0x228) = iVar5 + 1;
    if (*(int *)(param_1 + 0x22c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x220,iVar5);
    }
    pfVar11 = pfVar7 + 8;
    if (pfVar7 == (float *)0x0) {
      pfVar11 = pfVar12;
    }
    *(float **)(*(longlong *)(param_1 + 0x220) + (longlong)iVar5 * 8) = pfVar7;
    FUN_141edf270(pfVar11);
    *(float **)(pfVar8 + 4) = pfVar7;
    pfVar8[0] = 0.0;
    pfVar8[1] = 0.0;
    pfVar8[2] = 1.0;
    pfVar8[3] = 1.0;
    pfVar8[6] = fVar3;
    pfVar8[7] = fVar2;
    return pfVar8;
  }
  pfVar12 = (float *)0x0;
  pfVar7 = pfVar12;
  pfVar8 = pfVar12;
  pfVar11 = pfVar12;
  pfVar15 = pfVar12;
  if (0 < *(int *)(param_1 + 0x218)) {
    do {
      if (pfVar7 != (float *)0x0) goto LAB_1420b54ce;
      pfVar8 = *(float **)((longlong)pfVar11 + *(longlong *)(param_1 + 0x210));
      pfVar7 = (float *)FSlateTextureAtlas::AddTexture(pfVar8,fVar3,fVar2,*param_2);
      uVar14 = (int)pfVar15 + 1;
      pfVar11 = pfVar11 + 2;
      pfVar15 = (float *)(ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_1 + 0x218));
    if (pfVar7 != (float *)0x0) goto LAB_1420b54ce;
  }
  pfVar8 = (float *)operator_new(0x48);
  fVar6 = DAT_1464ca214;
  if (pfVar8 == (float *)0x0) {
    pfVar8 = (float *)0x0;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x230);
    *(undefined ***)pfVar8 = &PTR__scalar_deleting_destructor__144d4e838;
    pfVar8[2] = 0.0;
    pfVar8[3] = 0.0;
    pfVar8[4] = 0.0;
    pfVar8[5] = 0.0;
    pfVar8[0xc] = fVar6;
    pfVar8[6] = 0.0;
    pfVar8[7] = 0.0;
    pfVar8[8] = 0.0;
    pfVar8[9] = 0.0;
    pfVar8[10] = fVar4;
    pfVar8[0xb] = fVar4;
    pfVar8[0xd] = 1.4013e-45;
    *(undefined2 *)(pfVar8 + 0xe) = 0;
    FSlateTextureAtlas::InitAtlasData(pfVar8);
    *(undefined ***)pfVar8 = &PTR__scalar_deleting_destructor__144f966b8;
    lVar9 = operator_new(0x78);
    if (lVar9 == 0) {
      pfVar8[0x10] = 0.0;
      pfVar8[0x11] = 0.0;
    }
    else {
      local_38 = 0;
      uStack_30 = 0;
      uVar10 = FUN_1427ee790(lVar9,fVar4,fVar4,2,&local_38,0x10,1);
      *(undefined8 *)(pfVar8 + 0x10) = uVar10;
    }
  }
  plVar13 = (longlong *)(param_1 + 0x210);
  iVar5 = *(int *)(param_1 + 0x218);
  *(int *)(param_1 + 0x218) = iVar5 + 1;
  if (*(int *)(param_1 + 0x21c) < iVar5 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar13,iVar5);
  }
  *(float **)(*plVar13 + (longlong)iVar5 * 8) = pfVar8;
  pfVar7 = (float *)FSlateTextureAtlas::AddTexture
                              (*(undefined8 *)
                                (*plVar13 + -8 + (longlong)*(int *)(param_1 + 0x218) * 8),fVar3,
                               fVar2,*param_2);
LAB_1420b54ce:
  pfVar11 = (float *)operator_new(0x30);
  if (pfVar11 != (float *)0x0) {
    pfVar11[0] = 0.0;
    pfVar11[1] = 0.0;
    pfVar11[4] = 0.0;
    pfVar11[5] = 0.0;
    pfVar11[2] = 1.0;
    pfVar11[3] = 1.0;
    pfVar11[6] = 0.0;
    pfVar11[7] = 0.0;
    pfVar11[8] = 0.0;
    pfVar11[9] = 0.0;
    pfVar11[10] = 0.0;
    pfVar11[0xb] = 0.0;
    pfVar12 = pfVar11;
  }
  *(undefined8 *)(pfVar12 + 4) = *(undefined8 *)(pfVar8 + 0x10);
  bVar1 = *(byte *)(pfVar7 + 8);
  fVar6 = pfVar7[5];
  fVar4 = pfVar8[0xb];
  *pfVar12 = (float)((int)pfVar7[4] + (uint)bVar1) / (float)(uint)pfVar8[10];
  pfVar12[1] = (float)((int)fVar6 + (uint)bVar1) / (float)(uint)fVar4;
  fVar6 = pfVar7[7];
  fVar4 = pfVar8[0xb];
  pfVar12[2] = (float)((int)pfVar7[6] + (uint)bVar1 * -2) / (float)(uint)pfVar8[10];
  pfVar12[3] = (float)((int)fVar6 + (uint)bVar1 * -2) / (float)(uint)fVar4;
  pfVar12[6] = fVar3;
  pfVar12[7] = fVar2;
  return pfVar12;
}



// FUNCTION 1420b5750 GetCurrentPathElement body=7 status=ok
// SIG undefined GetCurrentPathElement(void)

undefined4 UCrowdFollowingComponent::GetCurrentPathElement(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2d0);
}



// FUNCTION 1420b5760 GetDrawBuffer body=152 status=ok
// SIG undefined GetDrawBuffer(void)

longlong FSlate3DRenderer::GetDrawBuffer(longlong param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  
  bVar1 = *(char *)(param_1 + 0x120) + 1U & 3;
  *(byte *)(param_1 + 0x120) = bVar1;
  lVar4 = param_1 + 0x20 + (ulonglong)bVar1 * 0x30;
  cVar2 = FSlateDrawBuffer::Lock(lVar4);
  while (cVar2 == '\0') {
    FUN_141ee24f0(0);
    uVar3 = (*(byte *)(param_1 + 0x120) + 1) % 3;
    *(char *)(param_1 + 0x120) = (char)uVar3;
    lVar4 = param_1 + 0x20 + (ulonglong)uVar3 * 0x30;
    cVar2 = FSlateDrawBuffer::Lock();
  }
  FUN_141804c70(lVar4);
  return lVar4;
}



// FUNCTION 1420b5800 FUN_1420b5800 body=400 status=ok
// SIG undefined FUN_1420b5800(void)

longlong * FUN_1420b5800(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  
  uVar10 = (*(byte *)(param_1 + 0x3d) + 1) % 3;
  *(char *)(param_1 + 0x3d) = (char)uVar10;
  plVar8 = param_1 + (ulonglong)uVar10 * 6 + 0x2b;
  cVar6 = FSlateDrawBuffer::Lock(plVar8);
  while (cVar6 == '\0') {
    cVar6 = FUN_1415e1500();
    if (cVar6 == '\0') {
      (**(code **)(*param_1 + 0xc0))(param_1);
      bVar7 = (char)(*(byte *)(param_1 + 0x3d) + 1) +
              (char)((ulonglong)(*(byte *)(param_1 + 0x3d) + 1) / 3) * -3;
      *(byte *)(param_1 + 0x3d) = bVar7;
    }
    else {
      FUN_1416b1760(0x3a83126f);
      bVar7 = *(byte *)(param_1 + 0x3d);
    }
    plVar8 = param_1 + (ulonglong)bVar7 * 6 + 0x2b;
    cVar6 = FSlateDrawBuffer::Lock(plVar8);
  }
  plVar11 = param_1 + ((ulonglong)*(byte *)(param_1 + 0x3d) + 0x22) * 2;
  iVar12 = (int)plVar11[1];
  if (iVar12 != 0) {
    plVar9 = (longlong *)(*plVar11 + 8);
    do {
      plVar4 = (longlong *)*plVar9;
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
      plVar9 = plVar9 + 2;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  *(undefined4 *)(plVar11 + 1) = 0;
  if (*(int *)((longlong)plVar11 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar11,0);
  }
  FUN_141804c70(plVar8);
  FUN_14185f7c0(plVar8,*(undefined4 *)((longlong)param_1 + 0x2d4));
  return plVar8;
}



// FUNCTION 1420b5990 FUN_1420b5990 body=149 status=ok
// SIG undefined FUN_1420b5990(void)

longlong * FUN_1420b5990(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *param_1);
        if (*plVar3 == param_3) {
          if (iVar2 != -1) goto LAB_1420b59f1;
          break;
        }
        iVar2 = (int)plVar3[3];
      } while (iVar2 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1420b59f1:
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = plVar3[1];
    lVar1 = plVar3[2];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1420b5a50 GetFontShaderResource body=47 status=ok
// SIG undefined GetFontShaderResource(void)

undefined8
FSlateRHIResourceManager::GetFontShaderResource
          (longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    return param_3;
  }
  uVar1 = FUN_1420b5b60(param_1 + -0x10,param_4,0,param_3,param_2);
  return uVar1;
}



// FUNCTION 1420b5a80 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 *
TSlateElementVertexBuffer<FSlateVertex>::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"SlateElementVertices",0x2a);
  return param_2;
}



// FUNCTION 1420b5ac0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FSlateElementIndexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"SlateElementIndices",0x28);
  return param_2;
}



// FUNCTION 1420b5b00 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FSlateFontTextureRHIResource::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FSlateFontTextureRHIResource",0x3a);
  return param_2;
}



// FUNCTION 1420b5b40 FUN_1420b5b40 body=27 status=ok
// SIG undefined FUN_1420b5b40(void)

longlong FUN_1420b5b40(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 8) + 0x2b8))();
  return (longlong)fVar1;
}



// FUNCTION 1420b5b60 FUN_1420b5b60 body=1187 status=ok
// SIG undefined FUN_1420b5b60(void)

longlong *
FUN_1420b5b60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  float local_70;
  float local_6c;
  int local_68;
  
  pfVar5 = (float *)(param_3 + 8);
  if (param_3 == 0) {
    pfVar5 = (float *)&DAT_1468b5d88;
  }
  fVar13 = *pfVar5;
  fVar14 = pfVar5[1];
  local_res8 = fVar13;
  local_resc = fVar14;
  FWeakObjectPtr::operator=(local_78);
  plVar2 = (longlong *)(param_1 + 0x140);
  local_68 = param_5;
  local_70 = fVar13;
  local_6c = fVar14;
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    iVar4 = GetTypeHash(local_78);
    lVar6 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar6 = param_1 + 0x178;
    }
    iVar4 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      lVar6 = *plVar2;
      do {
        lVar12 = (longlong)iVar4 * 0x30;
        lVar6 = lVar12 + lVar6;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,local_78);
        if ((((cVar3 != '\0') && (local_70 == *(float *)(lVar6 + 8))) &&
            (local_6c == *(float *)(lVar6 + 0xc))) && (*(int *)(lVar6 + 0x10) == local_68)) {
          if ((iVar4 != -1) && (lVar12 = *plVar2 + lVar12, lVar12 != 0)) {
            local_c8 = *(longlong **)(lVar12 + 0x18);
            plVar9 = *(longlong **)(lVar12 + 0x20);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              fVar13 = local_res8;
              fVar14 = local_resc;
            }
            uStack_c0 = plVar9;
            if (local_c8 == (longlong *)0x0) goto LAB_1420b5cd5;
            FSlateMaterialResource::UpdateMaterial(local_c8,param_2,&local_res8,param_4);
            goto LAB_1420b5f96;
          }
          break;
        }
        lVar6 = *plVar2;
        iVar4 = *(int *)(lVar6 + 0x28 + lVar12);
      } while (iVar4 != -1);
    }
  }
  uStack_c0 = (longlong *)0x0;
LAB_1420b5cd5:
  plVar9 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x208) < 1) {
    plVar7 = (longlong *)operator_new(0x28);
    local_c8 = plVar9;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_2;
      *plVar7 = (longlong)&PTR_GetNumIndices_144f964c0;
      plVar8 = (longlong *)operator_new(0x30);
      plVar11 = plVar9;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = 0;
        plVar8[2] = 0;
        *(undefined4 *)(plVar8 + 1) = 0x3f800000;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 0x3f800000;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = 0;
        plVar8[4] = 0;
        plVar8[5] = 0;
        plVar11 = plVar8;
      }
      plVar7[3] = param_4;
      plVar7[2] = (longlong)plVar11;
      iVar10 = (int)ROUND(fVar13 * 2.0 + 0.5) >> 1;
      *(int *)(plVar7 + 4) = iVar10;
      iVar4 = (int)ROUND(fVar14 * 2.0 + 0.5) >> 1;
      *(int *)((longlong)plVar7 + 0x24) = iVar4;
      *(int *)(plVar11 + 3) = iVar10;
      *(int *)((longlong)plVar11 + 0x1c) = iVar4;
      *(longlong **)(plVar7[2] + 0x10) = plVar7;
      local_c8 = plVar7;
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = (longlong)&PTR_FUN_143fd0100;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      plVar7[2] = (longlong)local_c8;
      plVar9 = plVar7;
    }
    local_a0 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,local_c8,local_c8);
    local_a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_a0);
    plVar9 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_a0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x200);
    lVar12 = (longlong)*(int *)(param_1 + 0x208);
    local_b0 = *(longlong **)(lVar6 + -8 + lVar12 * 0x10);
    local_c8 = *(longlong **)(lVar6 + -0x10 + lVar12 * 0x10);
    *(undefined8 *)(lVar6 + -8 + lVar12 * 0x10) = 0;
    *(undefined8 *)(lVar6 + -0x10 + lVar12 * 0x10) = 0;
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((longlong *)(param_1 + 0x200),*(int *)(param_1 + 0x208) + -1,1,1);
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_b0);
    plVar9 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_b0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    FSlateMaterialResource::UpdateMaterial(local_c8,param_2,&local_res8,param_4);
  }
  plVar9 = uStack_c0;
  if (uStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
    UNLOCK();
  }
  local_88 = (undefined4)local_c8;
  uStack_84 = local_c8._4_4_;
  uStack_80 = (undefined4)uStack_c0;
  uStack_7c = uStack_c0._4_4_;
  if (uStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
    UNLOCK();
  }
  local_98 = local_78;
  local_90 = &local_88;
  FUN_14209b790(plVar2,&param_5,&local_98,0);
  plVar2 = (longlong *)CONCAT44(uStack_7c,uStack_80);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    plVar9 = uStack_c0;
    if ((int)lVar6 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = uStack_c0;
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
        plVar9 = uStack_c0;
      }
    }
  }
  plVar2 = uStack_c0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    plVar9 = uStack_c0;
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_c0)(uStack_c0);
      plVar9 = uStack_c0;
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_c0 + 8))(uStack_c0,1);
      }
    }
LAB_1420b5f96:
    plVar2 = uStack_c0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar9 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*uStack_c0 + 8))(uStack_c0,1);
        }
      }
    }
  }
  return local_c8;
}



// FUNCTION 1420b6020 FUN_1420b6020 body=320 status=ok
// SIG undefined FUN_1420b6020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6020(void)

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
  
  if (DAT_146ae77a0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7920;
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
        return *(undefined8 *)(DAT_146ae77a0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae77a0 = 0;
        return _DAT_00000030;
      }
      DAT_146ae77a0 =
           TStaticStateRHI<TStaticBlendState<7,0,0,2,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae77a0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,0,2,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae77a0 != 0) {
      lVar7 = DAT_146ae77a0;
    }
    DAT_146ae77a0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae77a0 + 0x30);
}



// FUNCTION 1420b6160 FUN_1420b6160 body=320 status=ok
// SIG undefined FUN_1420b6160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6160(void)

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
  
  if (DAT_146ae7798 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7930;
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
        return *(undefined8 *)(DAT_146ae7798 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae7798 = 0;
        return _DAT_00000030;
      }
      DAT_146ae7798 =
           TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae7798 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae7798 != 0) {
      lVar7 = DAT_146ae7798;
    }
    DAT_146ae7798 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae7798 + 0x30);
}



// FUNCTION 1420b62a0 FUN_1420b62a0 body=320 status=ok
// SIG undefined FUN_1420b62a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b62a0(void)

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
  
  if (DAT_146ae77a8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7940;
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
        return *(undefined8 *)(DAT_146ae77a8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae77a8 = 0;
        return _DAT_00000030;
      }
      DAT_146ae77a8 =
           TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae77a8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae77a8 != 0) {
      lVar7 = DAT_146ae77a8;
    }
    DAT_146ae77a8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae77a8 + 0x30);
}



// FUNCTION 1420b63e0 FUN_1420b63e0 body=320 status=ok
// SIG undefined FUN_1420b63e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b63e0(void)

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
  
  if (DAT_146ae76f0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7950;
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
        return *(undefined8 *)(DAT_146ae76f0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76f0 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76f0 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,1,4,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76f0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,1,4,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76f0 != 0) {
      lVar7 = DAT_146ae76f0;
    }
    DAT_146ae76f0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76f0 + 0x30);
}



// FUNCTION 1420b6520 FUN_1420b6520 body=320 status=ok
// SIG undefined FUN_1420b6520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6520(void)

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
  
  if (DAT_146ae7700 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7960;
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
        return *(undefined8 *)(DAT_146ae7700 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae7700 = 0;
        return _DAT_00000030;
      }
      DAT_146ae7700 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae7700 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae7700 != 0) {
      lVar7 = DAT_146ae7700;
    }
    DAT_146ae7700 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae7700 + 0x30);
}



// FUNCTION 1420b6660 FUN_1420b6660 body=320 status=ok
// SIG undefined FUN_1420b6660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6660(void)

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
  
  if (DAT_146ae76f8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7970;
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
        return *(undefined8 *)(DAT_146ae76f8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76f8 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76f8 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,3,1,7,0,0,3,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76f8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,3,1,7,0,0,3,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76f8 != 0) {
      lVar7 = DAT_146ae76f8;
    }
    DAT_146ae76f8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76f8 + 0x30);
}



// FUNCTION 1420b67a0 FUN_1420b67a0 body=320 status=ok
// SIG undefined FUN_1420b67a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b67a0(void)

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
  
  if (DAT_146ae7690 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7980;
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
        return *(undefined8 *)(DAT_146ae7690 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae7690 = 0;
        return _DAT_00000030;
      }
      DAT_146ae7690 =
           TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae7690 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae7690 != 0) {
      lVar7 = DAT_146ae7690;
    }
    DAT_146ae7690 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae7690 + 0x30);
}



// FUNCTION 1420b68e0 FUN_1420b68e0 body=320 status=ok
// SIG undefined FUN_1420b68e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b68e0(void)

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
  
  if (DAT_146ae76b8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7990;
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
        return *(undefined8 *)(DAT_146ae76b8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76b8 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76b8 =
           TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76b8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76b8 != 0) {
      lVar7 = DAT_146ae76b8;
    }
    DAT_146ae76b8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76b8 + 0x30);
}



// FUNCTION 1420b6a20 FUN_1420b6a20 body=320 status=ok
// SIG undefined FUN_1420b6a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6a20(void)

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
  
  if (DAT_146ae76a0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b79a0;
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
        return *(undefined8 *)(DAT_146ae76a0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76a0 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76a0 =
           TStaticStateRHI<TStaticSamplerState<2,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76a0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<2,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76a0 != 0) {
      lVar7 = DAT_146ae76a0;
    }
    DAT_146ae76a0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76a0 + 0x30);
}



// FUNCTION 1420b6b60 FUN_1420b6b60 body=320 status=ok
// SIG undefined FUN_1420b6b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6b60(void)

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
  
  if (DAT_146ae76c8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b79b0;
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
        return *(undefined8 *)(DAT_146ae76c8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76c8 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76c8 =
           TStaticStateRHI<TStaticSamplerState<2,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76c8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<2,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76c8 != 0) {
      lVar7 = DAT_146ae76c8;
    }
    DAT_146ae76c8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76c8 + 0x30);
}



// FUNCTION 1420b6ca0 FUN_1420b6ca0 body=320 status=ok
// SIG undefined FUN_1420b6ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6ca0(void)

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
  
  if (DAT_146ae7688 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b79c0;
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
        return *(undefined8 *)(DAT_146ae7688 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae7688 = 0;
        return _DAT_00000030;
      }
      DAT_146ae7688 =
           TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae7688 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae7688 != 0) {
      lVar7 = DAT_146ae7688;
    }
    DAT_146ae7688 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae7688 + 0x30);
}



// FUNCTION 1420b6de0 FUN_1420b6de0 body=320 status=ok
// SIG undefined FUN_1420b6de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6de0(void)

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
  
  if (DAT_146ae76a8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b79d0;
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
        return *(undefined8 *)(DAT_146ae76a8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76a8 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76a8 =
           TStaticStateRHI<TStaticSamplerState<3,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76a8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<3,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76a8 != 0) {
      lVar7 = DAT_146ae76a8;
    }
    DAT_146ae76a8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76a8 + 0x30);
}



// FUNCTION 1420b6f20 FUN_1420b6f20 body=320 status=ok
// SIG undefined FUN_1420b6f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b6f20(void)

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
  
  if (DAT_146ae76d0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b79e0;
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
        return *(undefined8 *)(DAT_146ae76d0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76d0 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76d0 =
           TStaticStateRHI<TStaticSamplerState<3,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76d0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<3,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76d0 != 0) {
      lVar7 = DAT_146ae76d0;
    }
    DAT_146ae76d0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76d0 + 0x30);
}



// FUNCTION 1420b7060 FUN_1420b7060 body=320 status=ok
// SIG undefined FUN_1420b7060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b7060(void)

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
  
  if (DAT_146ae76e8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b79f0;
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
        return *(undefined8 *)(DAT_146ae76e8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76e8 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76e8 =
           TStaticStateRHI<TStaticSamplerState<3,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76e8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<3,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76e8 != 0) {
      lVar7 = DAT_146ae76e8;
    }
    DAT_146ae76e8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76e8 + 0x30);
}



// FUNCTION 1420b71a0 FUN_1420b71a0 body=320 status=ok
// SIG undefined FUN_1420b71a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b71a0(void)

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
  
  if (DAT_146ae7680 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7a00;
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
        return *(undefined8 *)(DAT_146ae7680 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae7680 = 0;
        return _DAT_00000030;
      }
      DAT_146ae7680 =
           TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae7680 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae7680 != 0) {
      lVar7 = DAT_146ae7680;
    }
    DAT_146ae7680 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae7680 + 0x30);
}



// FUNCTION 1420b72e0 FUN_1420b72e0 body=320 status=ok
// SIG undefined FUN_1420b72e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b72e0(void)

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
  
  if (DAT_146ae7698 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7a10;
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
        return *(undefined8 *)(DAT_146ae7698 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae7698 = 0;
        return _DAT_00000030;
      }
      DAT_146ae7698 =
           TStaticStateRHI<TStaticSamplerState<4,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae7698 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<4,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae7698 != 0) {
      lVar7 = DAT_146ae7698;
    }
    DAT_146ae7698 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae7698 + 0x30);
}



// FUNCTION 1420b7420 FUN_1420b7420 body=320 status=ok
// SIG undefined FUN_1420b7420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b7420(void)

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
  
  if (DAT_146ae76c0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7a20;
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
        return *(undefined8 *)(DAT_146ae76c0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76c0 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76c0 =
           TStaticStateRHI<TStaticSamplerState<4,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76c0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<4,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76c0 != 0) {
      lVar7 = DAT_146ae76c0;
    }
    DAT_146ae76c0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76c0 + 0x30);
}



// FUNCTION 1420b7560 FUN_1420b7560 body=320 status=ok
// SIG undefined FUN_1420b7560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b7560(void)

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
  
  if (DAT_146ae76e0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7a30;
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
        return *(undefined8 *)(DAT_146ae76e0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76e0 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76e0 =
           TStaticStateRHI<TStaticSamplerState<4,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76e0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<4,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76e0 != 0) {
      lVar7 = DAT_146ae76e0;
    }
    DAT_146ae76e0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76e0 + 0x30);
}



// FUNCTION 1420b76a0 FUN_1420b76a0 body=320 status=ok
// SIG undefined FUN_1420b76a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b76a0(void)

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
  
  if (DAT_146ae76b0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7a40;
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
        return *(undefined8 *)(DAT_146ae76b0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76b0 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76b0 =
           TStaticStateRHI<TStaticSamplerState<0,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76b0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<0,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76b0 != 0) {
      lVar7 = DAT_146ae76b0;
    }
    DAT_146ae76b0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76b0 + 0x30);
}



// FUNCTION 1420b77e0 FUN_1420b77e0 body=320 status=ok
// SIG undefined FUN_1420b77e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420b77e0(void)

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
  
  if (DAT_146ae76d8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1420b7a50;
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
        return *(undefined8 *)(DAT_146ae76d8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146ae76d8 = 0;
        return _DAT_00000030;
      }
      DAT_146ae76d8 =
           TStaticStateRHI<TStaticSamplerState<0,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146ae76d8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<0,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146ae76d8 != 0) {
      lVar7 = DAT_146ae76d8;
    }
    DAT_146ae76d8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146ae76d8 + 0x30);
}



// FUNCTION 1420b7a70 GetResourceHandle body=35 status=ok
// SIG undefined GetResourceHandle(void)

undefined8 FSlateRHIRenderer::GetResourceHandle(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x10) + 0x10))();
  return param_2;
}



// FUNCTION 1420b7ad0 FUN_1420b7ad0 body=99 status=ok
// SIG undefined FUN_1420b7ad0(void)

undefined8 FUN_1420b7ad0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res18 [4];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res18,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res18[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res18[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 1420b7b40 FUN_1420b7b40 body=523 status=ok
// SIG undefined FUN_1420b7b40(void)

undefined8 FUN_1420b7b40(longlong param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar6 = *(longlong *)(param_2 + 0x48);
  if (lVar6 != 0) {
    iVar4 = *(int *)(lVar6 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar8 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) != 0) {
      return 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0xf & 1) != 0) {
      return 0;
    }
  }
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    if ((lVar6 == 0) && ((*(byte *)(param_2 + 0x80) & 2) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar5 = *(longlong *)(param_2 + 0x50);
      if ((lVar5 == 0) && (lVar6 != 0)) {
        lVar5 = *(longlong *)(lVar6 + 0x18);
      }
      if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
        return 0;
      }
      lVar6 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar6 = param_1 + 0x40;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                               (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
      if (iVar4 == -1) {
        return 0;
      }
      lVar6 = *(longlong *)(param_1 + 8);
      while (lVar9 = (longlong)iVar4, *(longlong *)(lVar6 + lVar9 * 0x18) != lVar5) {
        iVar4 = *(int *)(lVar6 + 0x10 + lVar9 * 0x18);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (iVar4 == -1) {
        return 0;
      }
      lVar6 = lVar6 + lVar9 * 0x18;
      if (lVar6 == 0) {
        return 0;
      }
      return *(undefined8 *)(lVar6 + 8);
    }
  }
  if (lVar6 != 0) {
    lVar5 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = FUN_1420b5b60(param_1 + -0x10,lVar6,param_2,0,0);
      return *(undefined8 *)(lVar6 + 0x10);
    }
  }
  bVar1 = *(byte *)(param_2 + 0x80);
  if ((bVar1 & 1) == 0) {
    if ((*(longlong *)(param_2 + 0x48) == 0) && ((bVar1 & 2) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
  }
  if ((*(longlong *)(param_2 + 0x48) == 0) && ((bVar1 & 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (lVar6 == 0)) {
    FUN_1420b9820(param_2);
  }
  uVar7 = FUN_1420b4420(param_1 + -0x10,param_2);
  return uVar7;
}



// FUNCTION 1420b7db0 FUN_1420b7db0 body=332 status=ok
// SIG undefined FUN_1420b7db0(void)

undefined8 FUN_1420b7db0(undefined8 param_1,longlong param_2,char param_3,byte param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int local_res20 [2];
  undefined *local_18;
  undefined4 local_10;
  
  bVar3 = ~(param_4 >> 6) & 1;
  if ((param_4 & 0x20) == 0) {
    if (param_3 == '\x01') {
      local_18 = &DAT_146ae7130;
      if (bVar3 == 0) {
        local_18 = &DAT_146ae7280;
      }
    }
    else if (param_3 == '\x02') {
      local_18 = &DAT_146ae73d0;
    }
    else if (param_3 == '\x03') {
      local_18 = &DAT_146ae7520;
    }
    else if (bVar3 == 0) {
      local_18 = &DAT_146ae6fe0;
    }
    else {
      local_18 = &DAT_146ae6e90;
    }
  }
  else if (param_3 == '\x01') {
    if (bVar3 == 0) {
      local_18 = &DAT_146ae6aa0;
    }
    else {
      local_18 = &DAT_146ae6950;
    }
  }
  else if (param_3 == '\x02') {
    local_18 = &DAT_146ae6bf0;
  }
  else if (param_3 == '\x03') {
    local_18 = &DAT_146ae6d40;
  }
  else if (bVar3 == 0) {
    local_18 = &DAT_146ae6800;
  }
  else {
    local_18 = &DAT_146ae66b0;
  }
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res20,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res20[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res20[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 1420b7f00 GetTypeHash body=303 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FCrc::MemCrc_DEPRECATED(param_1 + 2,8);
  uVar3 = param_1[4];
  uVar4 = iVar1 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar4 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar3 = (param_1[1] ^ *param_1) - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  return (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}



// FUNCTION 1420b8030 FUN_1420b8030 body=157 status=ok
// SIG undefined FUN_1420b8030(void)

undefined8 * FUN_1420b8030(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  if (param_3 != 0) {
    FWeakObjectPtr::operator=(&local_res20,param_3);
    local_18[0] = local_res20;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x50,local_res18,local_18);
    lVar1 = 0;
    if (local_res18[0] != -1) {
      lVar1 = (longlong)local_res18[0] * 0x20 + *(longlong *)(param_1 + 0x50);
    }
    if (lVar1 != 0) {
      *param_2 = *(undefined8 *)(lVar1 + 8);
      lVar1 = *(longlong *)(lVar1 + 0x10);
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1420b80d0 FUN_1420b80d0 body=246 status=ok
// SIG undefined FUN_1420b80d0(void)

longlong FUN_1420b80d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xc0,local_res8,param_2);
  plVar4 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res8[0] * 0x18);
  }
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = *plVar3;
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    uVar2 = FSlateRenderer::IsViewportFullscreen(param_1,param_2);
    (**(code **)(*DAT_146ab6358 + 0x3a8))
              (DAT_146ab6358,local_res8,*(undefined8 *)(lVar1 + 200),*(undefined4 *)(lVar1 + 0xd0),
               *(undefined4 *)(lVar1 + 0xd4),uVar2,*(undefined4 *)(lVar1 + 0xe4));
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x70,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return lVar1 + 0x70;
}



// FUNCTION 1420b81d0 GetWeightAndOffset body=235 status=ok
// SIG undefined GetWeightAndOffset(void)

float * GetWeightAndOffset(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = -0.5 / (param_3 * param_3);
  fVar3 = 1.0 / SQRT(param_3 * param_3 * 6.2831855);
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 * param_2 * fVar4);
  fVar5 = param_2 + 1.0;
  fVar1 = fVar1 * fVar3;
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 * fVar4);
  fVar4 = fVar4 * fVar3;
  fVar3 = 0.0;
  fVar2 = fVar4 + fVar1;
  if (0.0 < fVar2) {
    fVar3 = (fVar4 * fVar5 + fVar1 * param_2) / fVar2;
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  return param_1;
}



// FUNCTION 1420b82c0 FUN_1420b82c0 body=27 status=ok
// SIG undefined FUN_1420b82c0(void)

longlong FUN_1420b82c0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 8) + 0x2b0))();
  return (longlong)fVar1;
}



// FUNCTION 1420b82e0 GetId body=4 status=ok
// SIG undefined GetId(void)

undefined4 FSlateAccessibleWidget::GetId(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// FUNCTION 1420b82f0 FUN_1420b82f0 body=179 status=ok
// SIG undefined FUN_1420b82f0(void)

longlong * FUN_1420b82f0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  longlong *local_res18;
  undefined8 local_res20;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0xc0),local_res8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (local_res8[0] != -1) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res8[0] * 0x18);
  }
  plVar4 = plVar2 + 1;
  if (plVar2 == (longlong *)0x0) {
    plVar4 = plVar3;
  }
  if ((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) {
    bVar1 = false;
    local_res20 = 0;
    plVar4 = (longlong *)0x2;
    plVar2 = plVar3;
  }
  else {
    local_res18 = *(longlong **)(*plVar4 + 0xa0);
    if (local_res18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_res18 + 1) = (int)local_res18[1] + 1;
      UNLOCK();
    }
    bVar1 = true;
    plVar2 = local_res18;
    plVar4 = plVar3;
  }
  if ((int)plVar4 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  }
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  }
  return plVar2;
}



// FUNCTION 1420b83b0 FUN_1420b83b0 body=179 status=ok
// SIG undefined FUN_1420b83b0(void)

longlong * FUN_1420b83b0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  longlong *local_res18;
  undefined8 local_res20;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0xc0),local_res8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (local_res8[0] != -1) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res8[0] * 0x18);
  }
  plVar4 = plVar2 + 1;
  if (plVar2 == (longlong *)0x0) {
    plVar4 = plVar3;
  }
  if ((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) {
    bVar1 = false;
    local_res20 = 0;
    plVar4 = (longlong *)0x2;
    plVar2 = plVar3;
  }
  else {
    local_res18 = *(longlong **)(*plVar4 + 0xa8);
    if (local_res18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_res18 + 1) = (int)local_res18[1] + 1;
      UNLOCK();
    }
    bVar1 = true;
    plVar2 = local_res18;
    plVar4 = plVar3;
  }
  if ((int)plVar4 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  }
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  }
  return plVar2;
}



// FUNCTION 1420b8470 FUN_1420b8470 body=190 status=ok
// SIG undefined FUN_1420b8470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420b8470(longlong param_1)

{
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
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_70 = &local_58;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_48 = 1;
    local_58 = 0;
    uStack_50 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_78 = 2;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 1420b8530 FUN_1420b8530 body=188 status=ok
// SIG undefined FUN_1420b8530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420b8530(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 *local_78;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = *(undefined4 *)(param_1 + 0x44);
  local_78 = &local_58;
  *(undefined4 *)(param_1 + 0x40) = local_88;
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
  local_80 = 2;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_68,&DAT_146ab6e78,4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 1420b85f0 FUN_1420b85f0 body=398 status=ok
// SIG undefined FUN_1420b85f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420b85f0(longlong param_1)

{
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((*(int *)(param_1 + 0x68) != 0) && (local_d8 = *(int *)(param_1 + 0x6c), local_d8 != 0)) {
    local_b0 = &local_58;
    local_b8 = 0x100;
    local_58 = 0;
    uStack_50 = 0;
    local_c0 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_48 = 1;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_c8 = 1;
    local_d0 = 0x1b;
    (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_a8,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + -8,local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a8);
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,*(undefined8 *)(param_1 + -8));
    local_a0 = 0x10101;
    local_9c = 0;
    local_94 = 0;
    local_90 = 1;
    local_88 = 0;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_a8,&local_a0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a8);
    local_80 = 0x10101;
    local_7c = 0;
    local_74 = 0;
    local_70 = 1;
    local_68 = 0;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_a8,&local_80);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a8);
  }
  return;
}



// FUNCTION 1420b8780 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,0,2,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,0,2,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b87b0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b87e0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8810 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,1,4,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_14 = 0x1000000;
  local_10 = 4;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8870 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010700;
  local_14 = 0x1020000;
  local_10 = 0x2000007;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b88d0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,3,1,7,0,0,3,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010700;
  local_14 = 0x1030000;
  local_10 = 0x3000007;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8930 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x101;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b89a0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x10001;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8a10 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<2,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x102;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8a80 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<2,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x10002;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8af0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x1010103;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8b60 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<3,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x103;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8bd0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<3,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x10003;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8c40 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<3,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 3;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8cb0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x1010104;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8d20 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<4,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x104;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8d90 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<4,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x10004;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8e00 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<4,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 4;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8e70 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<0,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x100;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8ee0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<0,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x10000;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1420b8f60 FUN_1420b8f60 body=760 status=ok
// SIG undefined FUN_1420b8f60(void)

undefined8 FUN_1420b8f60(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_res8;
  uint uStackX_c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [3];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  
  plVar9 = (longlong *)0x0;
  local_res8 = 0;
  lVar4 = *(longlong *)(param_1 + 0x200);
  if (lVar4 != 0) {
    local_68[0] = 0;
    local_68[1] = 0;
    FSlateStyleRegistry::GetAllResources(local_68);
    FSlateRHIResourceManager::CreateTextures(lVar4,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  lVar4 = operator_new(0x100);
  plVar5 = plVar9;
  if (lVar4 != 0) {
    local_68[2] = *(undefined8 *)(param_1 + 0x200);
    local_50 = *(longlong *)(param_1 + 0x208);
    uStackX_c = uStackX_c & 0xffffff00;
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_48 = *(undefined8 *)(param_1 + 8);
    local_40 = *(longlong *)(param_1 + 0x10);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)FUN_14209cee0(lVar4,&local_48,local_68 + 2,&local_res8);
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar8 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar5;
    plVar8 = plVar6;
  }
  pplVar2 = (longlong **)(param_1 + 0x210);
  local_88 = plVar5;
  local_80 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_88,plVar5,plVar5);
  if (pplVar2 != &local_88) {
    *pplVar2 = plVar5;
    local_88 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x218,&local_80);
    plVar8 = local_80;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar4 = operator_new(0x48);
  if (lVar4 == 0) {
    plVar5 = (longlong *)CONCAT44(uStackX_c,local_res8);
    plVar8 = plVar9;
    plVar6 = plVar9;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x218);
    local_38 = *pplVar2;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_30 = plVar5;
    plVar6 = (longlong *)FUN_1417ef420(lVar4,&local_38);
    plVar8 = (longlong *)0x1;
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_144f96dd8;
    plVar7[2] = (longlong)plVar6;
    plVar9 = plVar7;
  }
  local_78 = plVar6;
  local_70 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_78,plVar6,plVar6);
  if ((longlong **)(param_1 + 0x1f0) != &local_78) {
    *(longlong **)(param_1 + 0x1f0) = plVar6;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1f8,&local_70);
    plVar9 = local_70;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if ((plVar8 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar5 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  *(undefined4 *)(param_1 + 0x2d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(int *)(param_1 + 0x2cc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2c0,0);
  }
  return 1;
}



// FUNCTION 1420b9260 FUN_1420b9260 body=63 status=ok
// SIG undefined FUN_1420b9260(void)

undefined8 * FUN_1420b9260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__144f95998;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420b92a0 FUN_1420b92a0 body=548 status=ok
// SIG undefined FUN_1420b92a0(void)

void FUN_1420b92a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  bool bVar13;
  uint local_a8;
  uint uStack_a4;
  int iStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  undefined8 uStack_40;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  uVar10 = 0;
  plVar2 = (longlong *)(param_1 + 0xc0);
  iStack_94 = 0;
  uStack_90 = 0;
  iVar3 = *(int *)(param_1 + 0xe8);
  local_78 = (uint *)(param_1 + 0xd0);
  local_a8 = 0;
  uStack_a4 = 1;
  if (iVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar12 = local_78;
    }
    uVar8 = *puVar12;
    uVar9 = uVar10;
    uVar11 = uVar10;
    while (uVar8 == 0) {
      iVar7 = (int)uVar9;
      uStack_90 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_90;
      local_a8 = iVar7 + 1;
      uVar9 = (ulonglong)local_a8;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1420b9362;
      uVar8 = puVar12[(longlong)iVar7 + 1];
    }
    uStack_a4 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_94 = (uStack_90 - iVar7) + 0x1f;
    if (iVar3 < iStack_94) {
LAB_1420b9362:
      iStack_94 = iVar3;
    }
  }
  uStack_70 = CONCAT44(iStack_94,0xffffffff);
  auStack_30._8_4_ = uStack_90;
  auStack_30._0_8_ = uStack_70;
  auStack_30._12_4_ = uStack_8c;
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar2,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  local_58 = plVar2;
  local_48 = plVar2;
  uStack_40 = uStack_80;
  puStack_38 = local_78;
  local_20 = plVar2;
  if (iStack_94 < *(int *)(param_1 + 0xe8)) {
    do {
      lVar4 = *(longlong *)(*plVar2 + 8 + (longlong)iStack_94 * 0x18);
      puVar5 = *(undefined8 **)(lVar4 + 0x70);
      *(undefined8 *)(lVar4 + 0x70) = 0;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(puVar5 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
            LOCK();
            bVar13 = *(int *)((longlong)puVar5 + 0xc) == 0;
            if (bVar13) {
              *(int *)((longlong)puVar5 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar13) {
              uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
              uVar9 = uVar10;
              if (uVar8 != 0) {
                uVar9 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(uVar9 + 8) = puVar5;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      iStack_94 = uStack_70._4_4_;
    } while (uStack_70._4_4_ < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1420b94d0 LoadStyleResources body=81 status=ok
// SIG undefined LoadStyleResources(void)

void FSlateRHIRenderer::LoadStyleResources(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong local_18 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 != 0) {
    local_18[0] = 0;
    local_18[1] = 0;
    (**(code **)(*param_2 + 0x10))(param_2,local_18);
    FSlateRHIResourceManager::CreateTextures(lVar1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1420b9530 LoadTexture body=193 status=ok
// SIG undefined LoadTexture(void)

undefined1
FSlateRHIResourceManager::LoadTexture
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined1 uVar1;
  longlong local_res8;
  longlong local_28 [2];
  
  local_res8 = *(longlong *)(param_2 + 0x50);
  if ((local_res8 == 0) && (*(longlong *)(param_2 + 0x48) != 0)) {
    local_res8 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x18);
  }
  FName::ToString(&local_res8,local_28);
  local_res8 = *(longlong *)(param_2 + 0x50);
  if ((local_res8 == 0) && (*(longlong *)(param_2 + 0x48) != 0)) {
    local_res8 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x18);
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_res8,local_28,param_3,param_4,param_5);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1420b9600 FUN_1420b9600 body=532 status=ok
// SIG undefined FUN_1420b9600(void)

undefined8
FUN_1420b9600(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int *param_4,int *param_5,
             undefined8 *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *local_res18;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38;
  longlong *local_30;
  longlong *local_28;
  
  uVar10 = 1;
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_3;
  }
  cVar4 = FUN_141676460(&local_40,puVar9,0);
  if (cVar4 == '\0') {
    uVar10 = 0;
    goto LAB_1420b97e6;
  }
  puVar6 = (undefined8 *)FName::FName(local_48,"ImageWrapper",1);
  uVar2 = *puVar6;
  uVar7 = FUN_14168dc80();
  plVar8 = (longlong *)FUN_141690010(uVar7,uVar2);
  cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8,local_40,local_38 & 0xffffffff);
  if (cVar4 == -1) {
    cVar4 = '\0';
  }
  (**(code **)(*plVar8 + 0x40))(plVar8,&local_30,cVar4,2,0);
  if (local_30 == (longlong *)0x0) {
LAB_1420b9799:
    uVar10 = 0;
  }
  else {
    cVar4 = (**(code **)*local_30)(local_30,local_40,local_38 & 0xffffffff);
    if (cVar4 == '\0') goto LAB_1420b9799;
    iVar5 = (**(code **)(*local_30 + 0x20))();
    *param_4 = iVar5;
    iVar5 = (**(code **)(*local_30 + 0x28))();
    local_res18 = (undefined8 *)0x0;
    *param_5 = iVar5;
    cVar4 = (**(code **)(*local_30 + 0x18))(local_30,2,8,&local_res18);
    if (cVar4 == '\0') goto LAB_1420b9799;
    iVar5 = *(int *)(param_6 + 1) + *param_4 * *param_5 * 4;
    *(int *)(param_6 + 1) = iVar5;
    if (*(int *)((longlong)param_6 + 0xc) < iVar5) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_6);
    }
    if (param_6 != local_res18) {
      iVar5 = *(int *)(local_res18 + 1);
      _Src = (void *)*local_res18;
      *(int *)(param_6 + 1) = iVar5;
      if ((iVar5 == 0) && (*(int *)((longlong)param_6 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_6 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_6,iVar5);
        _guard_xfg_dispatch_icall_nop((void *)*param_6,_Src,(longlong)iVar5);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_28 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
LAB_1420b97e6:
  if (local_40 != 0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 1420b9820 FUN_1420b9820 body=708 status=ok
// SIG undefined FUN_1420b9820(void)

void FUN_1420b9820(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  longlong local_res8;
  undefined2 *local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  bVar13 = false;
  local_res8 = *(longlong *)(param_1 + 0x50);
  if ((local_res8 == 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    local_res8 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18);
  }
  FName::ToString(&local_res8,&local_58);
  if (1 < local_50) {
    bVar13 = true;
    uVar8 = FSlateBrush::UTextureIdentifier(local_48);
    cVar6 = FString::StartsWith(&local_58,uVar8,1);
    if (cVar6 != '\0') {
      bVar4 = true;
      goto LAB_1420b98a0;
    }
  }
  bVar4 = false;
LAB_1420b98a0:
  if ((bVar13) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  if (bVar4) {
    lVar9 = FSlateBrush::UTextureIdentifier(local_38);
    iVar11 = *(int *)(lVar9 + 8) + -1;
    if (*(int *)(lVar9 + 8) == 0) {
      iVar11 = 0;
    }
    if (local_50 == 0) {
      puVar16 = &DAT_143f3eda8;
      local_50 = 0;
    }
    else {
      local_50 = local_50 + -1;
      puVar16 = local_58;
    }
    iVar11 = local_50 - iVar11;
    if (iVar11 < 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = local_50;
      if (iVar11 < local_50) {
        iVar12 = iVar11;
      }
    }
    puVar15 = (undefined2 *)0x0;
    uVar7 = 0;
    local_78 = (undefined2 *)0x0;
    local_70 = 0;
    psVar3 = puVar16 + ((longlong)local_50 - (longlong)iVar12);
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (psVar3[lVar9] != 0);
      uVar14 = (int)lVar9 + 1;
      local_70 = (ulonglong)uVar14;
      uVar7 = uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        uVar7 = (uint)local_70;
      }
      puVar15 = local_78;
      FGenericPlatformString::Memcpy(local_78,psVar3,(longlong)(int)uVar14 * 2);
    }
    lVar9 = 0;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    puVar16 = &DAT_143f3eda8;
    if (uVar7 != 0) {
      puVar16 = puVar15;
    }
    uVar8 = UTexture2D::GetPrivateStaticClass();
    lVar10 = FUN_141799c90(uVar8,0,puVar16,0,0,0,1);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146b17150 + 0x2c8);
    }
    else {
      iVar11 = *(int *)(lVar10 + 0xc);
      if (iVar11 < (int)DAT_1469e91c4) {
        uVar14 = iVar11 >> 0x1f & 0xffff;
        uVar7 = iVar11 + uVar14;
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
      }
      *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x40000000;
    }
    if (*(longlong *)(param_1 + 0x48) != lVar10) {
      *(longlong *)(param_1 + 0x48) = lVar10;
      local_60 = (longlong *)0x0;
      if ((undefined8 *)(param_1 + 0x70) != &local_68) {
        *(undefined8 *)(param_1 + 0x70) = 0;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_60);
        plVar5 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          puVar15 = local_78;
          if ((int)lVar9 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar15 = local_78;
            if (iVar11 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
              puVar15 = local_78;
            }
          }
        }
      }
    }
    if (puVar15 != (undefined2 *)0x0) {
      FMemory::Free(puVar15);
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420b9af0 MakeDynamicTextureResource body=290 status=ok
// SIG undefined MakeDynamicTextureResource(void)

undefined8
FSlateRHIResourceManager::MakeDynamicTextureResource
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar5 = operator_new(0x20);
  if (lVar5 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FSlateTextureData::FSlateTextureData(lVar5,param_4,param_5,DAT_1464ca214,param_6);
  }
  plStack_20 = (longlong *)operator_new(0x18);
  if (plStack_20 != (longlong *)0x0) {
    *(undefined4 *)(plStack_20 + 1) = 1;
    *plStack_20 = (longlong)&PTR_FUN_144f96db8;
    *(undefined4 *)((longlong)plStack_20 + 0xc) = 1;
    plStack_20[2] = local_28;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  local_18 = local_28;
  plStack_10 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1420b9c20(param_1,param_2,param_3,&local_18);
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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
  return param_2;
}



// FUNCTION 1420b9c20 FUN_1420b9c20 body=1425 status=ok
// SIG undefined FUN_1420b9c20(void)

longlong * FUN_1420b9c20(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 local_res10 [8];
  LARGE_INTEGER local_res18;
  longlong *local_res20;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  LARGE_INTEGER local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res20 = param_4;
  if (*(int *)(param_1 + 0x1f8) < 1) {
    lVar7 = operator_new(0x10);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_14209c840(lVar7,0);
    }
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144f96dc8;
      plVar9[2] = lVar7;
    }
    local_a8 = lVar7;
    local_a0 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,lVar7,lVar7);
    if (param_2 != &local_a8) {
      *param_2 = lVar7;
      local_a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_a0);
      plVar9 = local_a0;
    }
    if (plVar9 == (longlong *)0x0) goto LAB_1420b9dcd;
    LOCK();
    plVar15 = plVar9 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_1420b9dcd;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 != 1) goto LAB_1420b9dcd;
    lVar7 = *plVar9;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x1f0);
    lVar13 = (longlong)*(int *)(param_1 + 0x1f8);
    lVar10 = *(longlong *)(lVar7 + -0x10 + lVar13 * 0x10);
    plVar9 = *(longlong **)(lVar7 + -8 + lVar13 * 0x10);
    *(undefined8 *)(lVar7 + -8 + lVar13 * 0x10) = 0;
    *(undefined8 *)(lVar7 + -0x10 + lVar13 * 0x10) = 0;
    local_b8 = lVar10;
    local_b0 = plVar9;
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((longlong *)(param_1 + 0x1f0),*(int *)(param_1 + 0x1f8) + -1,1,0);
    if (param_2 != &local_b8) {
      *param_2 = lVar10;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_b0);
      plVar9 = local_b0;
    }
    plVar15 = local_b0;
    if (plVar9 == (longlong *)0x0) goto LAB_1420b9dcd;
    LOCK();
    plVar9 = plVar9 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_1420b9dcd;
    (**(code **)*local_b0)(local_b0);
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 != 1) goto LAB_1420b9dcd;
    lVar7 = *local_b0;
    plVar9 = local_b0;
  }
  (**(code **)(lVar7 + 8))(plVar9,1);
LAB_1420b9dcd:
  uVar4 = *(undefined4 *)(*param_4 + 0x14);
  lVar7 = *(longlong *)*param_2;
  *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(*param_4 + 0x10);
  *(undefined4 *)(lVar7 + 0x1c) = uVar4;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    plVar9 = (longlong *)param_4[1];
    lVar7 = *param_4;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    lVar10 = *param_2;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar9 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_98);
    if (lVar7 != 0) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_78 = lVar7;
      local_70 = plVar9;
      FSlateTexture2DRHIRef::SetTextureData(*(undefined8 *)(lVar10 + 8),&local_78,2);
    }
    (**(code **)(*(longlong *)(*(longlong *)(lVar10 + 8) + 0x20) + 0x28))();
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_98._0_4_);
    plVar14 = local_res20;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar9 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar14 = local_res20;
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
          plVar14 = local_res20;
        }
      }
    }
  }
  else {
    lVar7 = *param_2;
    pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar9 = TlsGetValue(*pDVar8);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)operator_new(0x18);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        *plVar9 = 0;
        plVar9[1] = 0;
        *(undefined4 *)(plVar9 + 2) = 0;
      }
      TlsSetValue(*pDVar8,plVar9);
    }
    plVar15 = (longlong *)plVar9[1];
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)*plVar9;
      if (plVar15 == (longlong *)0x0) {
        lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
        plVar9[1] = lVar10;
        if (lVar10 == 0) {
          puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar9[1] = (longlong)puVar11;
          lVar10 = 0x1f;
          do {
            puVar3 = puVar11 + 0x20;
            *puVar11 = puVar3;
            lVar10 = lVar10 + -1;
            puVar11 = puVar3;
          } while (lVar10 != 0);
          *puVar3 = 0;
        }
        plVar15 = (longlong *)plVar9[1];
        iVar12 = 0x20;
        *(undefined4 *)(plVar9 + 2) = 0x20;
      }
      else {
        iVar12 = 0x20;
        *plVar9 = 0;
        *(undefined4 *)(plVar9 + 2) = 0x20;
        plVar9[1] = (longlong)plVar15;
      }
    }
    else {
      iVar12 = (int)plVar9[2];
    }
    plVar14 = local_res20;
    plVar9[1] = *plVar15;
    *(int *)(plVar9 + 2) = iVar12 + -1;
    *(undefined4 *)(plVar15 + 1) = 0xff;
    *plVar15 = (longlong)&PTR_FUN_143f3edd8;
    local_58 = 0;
    local_50 = 0;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)&PTR_FUN_144f966d8;
    *(undefined1 *)(plVar15 + 5) = 0;
    plVar15[6] = 0;
    plVar9 = (longlong *)local_res20[1];
    lVar10 = *local_res20;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar15[2] = lVar7;
    plVar15[3] = lVar10;
    plVar15[4] = (longlong)plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    lVar7 = plVar15[6];
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
      UNLOCK();
    }
    FUN_14048a160(plVar15,0,0xff,1);
    if (lVar7 != 0) {
      LOCK();
      piVar1 = (int *)(lVar7 + 0x48);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        FGraphEvent::Recycle(lVar7);
      }
    }
  }
  plVar9 = (longlong *)param_2[1];
  local_88 = *param_2;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_68 = &local_90;
  local_60 = &local_88;
  local_90 = param_3;
  local_80 = plVar9;
  FUN_14209b9d0(param_1 + 0xa0,local_res10,&local_68,0);
  plVar15 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar9 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)plVar14[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar9 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420ba1c0 FUN_1420ba1c0 body=1097 status=ok
// SIG undefined FUN_1420ba1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001420ba4bc) */
/* WARNING: Removing unreachable block (ram,0x0001420ba4c8) */
/* WARNING: Removing unreachable block (ram,0x0001420ba4e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1420ba1c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  int local_d8 [2];
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined1 *local_80;
  longlong **local_78;
  longlong *local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  auVar3 = _DAT_146ae5620;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f8 = (longlong *)0x0;
  plStack_f0 = (longlong *)0x0;
  if (param_3 == (longlong *)0x0) {
    local_58 = (undefined4)DAT_146ae5620;
    uStack_54 = DAT_146ae5620._4_4_;
    uStack_50 = DAT_146ae5620._8_4_;
    uStack_4c = DAT_146ae5620._12_4_;
    plStack_f0 = DAT_146ae5620._8_8_;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
      UNLOCK();
    }
    local_b0 = ZEXT816(0);
    local_f8 = auVar3._0_8_;
  }
  else {
    FWeakObjectPtr::operator=(&local_98,param_3);
    local_90 = local_98;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xf0,local_d8,&local_90);
    if ((local_d8[0] == -1) ||
       (lVar7 = (longlong)local_d8[0] * 0x20 + *(longlong *)(param_1 + 0xf0), lVar7 == 0)) {
      local_e8 = 0;
      plStack_e0 = (longlong *)0x0;
    }
    else {
      local_e8 = *(longlong *)(lVar7 + 8);
      plStack_e0 = *(longlong **)(lVar7 + 0x10);
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
        UNLOCK();
      }
    }
    plVar6 = (longlong *)0x0;
    local_f8 = (longlong *)local_e8;
    local_e8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_f0,&plStack_e0);
    plVar4 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_e0 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
    if (local_f8 != (longlong *)0x0) {
      *param_2 = (longlong)local_f8;
      param_2[1] = (longlong)plStack_f0;
      return param_2;
    }
    if (*(int *)(param_1 + 0x1e8) < 1) {
      lVar7 = operator_new(0x18);
      plVar4 = plVar6;
      if (lVar7 != 0) {
        plVar4 = (longlong *)FUN_14209d8e0(lVar7,param_3);
      }
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *plVar5 = (longlong)&PTR_FUN_143fd0100;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        plVar5[2] = (longlong)plVar4;
        plVar6 = plVar5;
      }
      local_b8 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_c0,plVar4,plVar4);
      local_c0 = 0;
      local_f8 = plVar4;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_f0,&local_b8);
      plVar4 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b8 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x1e0);
      lVar8 = (longlong)*(int *)(param_1 + 0x1e8);
      local_c8 = *(longlong **)(lVar7 + -8 + lVar8 * 0x10);
      plVar4 = *(longlong **)(lVar7 + -0x10 + lVar8 * 0x10);
      *(undefined8 *)(lVar7 + -8 + lVar8 * 0x10) = 0;
      *(undefined8 *)(lVar7 + -0x10 + lVar8 * 0x10) = 0;
      TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((longlong *)(param_1 + 0x1e0),*(int *)(param_1 + 0x1e8) + -1,1);
      local_d0 = 0;
      local_f8 = plVar4;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_f0,&local_c8);
      plVar4 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_c8 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      FSlateUTextureResource::UpdateTexture(local_f8,param_3);
    }
    fVar9 = (float)(**(code **)(*param_3 + 0x2b8))(param_3);
    fVar10 = (float)(**(code **)(*param_3 + 0x2b0))(param_3);
    lVar7 = local_f8[2];
    *(int *)(lVar7 + 0x1c) = (int)fVar9;
    *(int *)(lVar7 + 0x18) = (int)fVar10;
  }
  plVar4 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
  }
  if (param_3 != (longlong *)0x0) {
    local_68 = local_f8;
    plStack_60 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
      UNLOCK();
    }
    FWeakObjectPtr::operator=(local_88,param_3);
    local_80 = local_88;
    local_78 = &local_68;
    FUN_14209b530(param_1 + 0xf0,local_a0,&local_80,0);
    plVar6 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_60 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      plVar4 = plStack_f0;
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar4 = plStack_f0;
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
          plVar4 = plStack_f0;
        }
      }
    }
  }
  plVar6 = plStack_f0;
  plVar5 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar4 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar5 = plStack_f0;
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_f0)(plStack_f0);
      plVar5 = plStack_f0;
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
      }
    }
  }
  *param_2 = (longlong)local_f8;
  param_2[1] = (longlong)plVar5;
  return param_2;
}



// FUNCTION 1420ba610 FUN_1420ba610 body=57 status=ok
// SIG undefined FUN_1420ba610(void)

void FUN_1420ba610(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCRGB_ENCODING",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCRGB_NATIVE_NITS",0);
  return;
}



// FUNCTION 1420ba650 FUN_1420ba650 body=60 status=ok
// SIG undefined FUN_1420ba650(void)

void FUN_1420ba650(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCRGB_ENCODING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCRGB_NATIVE_NITS",1);
  return;
}



// FUNCTION 1420ba690 FUN_1420ba690 body=54 status=ok
// SIG undefined FUN_1420ba690(void)

void FUN_1420ba690(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCRGB_ENCODING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCRGB_NATIVE_NITS",0);
  return;
}



// FUNCTION 1420ba6d0 ModifyCompilationEnvironment body=144 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<1,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420ba760 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<1,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420ba7f0 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<1,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420ba880 ModifyCompilationEnvironment body=138 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<1,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420ba910 ModifyCompilationEnvironment body=144 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<2,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420ba9a0 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<2,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420baa30 ModifyCompilationEnvironment body=144 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<3,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420baac0 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<3,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420bab50 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<0,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420babe0 ModifyCompilationEnvironment body=138 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<0,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420bac70 ModifyCompilationEnvironment body=138 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<0,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420bad00 ModifyCompilationEnvironment body=135 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateElementPS<0,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_TYPE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TEXTURE_ALPHA",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_MATERIALS",0);
  FUN_1420bb010(param_1,param_2);
  return;
}



// FUNCTION 1420bad90 FUN_1420bad90 body=69 status=ok
// SIG undefined FUN_1420bad90(void)

void FUN_1420bad90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb0e0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SHADER_TYPE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  return;
}



// FUNCTION 1420bade0 FUN_1420bade0 body=66 status=ok
// SIG undefined FUN_1420bade0(void)

void FUN_1420bade0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb0e0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SHADER_TYPE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  return;
}



// FUNCTION 1420bae30 FUN_1420bae30 body=69 status=ok
// SIG undefined FUN_1420bae30(void)

void FUN_1420bae30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb0e0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SHADER_TYPE",2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  return;
}



// FUNCTION 1420bae80 FUN_1420bae80 body=66 status=ok
// SIG undefined FUN_1420bae80(void)

void FUN_1420bae80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb0e0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SHADER_TYPE",2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  return;
}



// FUNCTION 1420baed0 FUN_1420baed0 body=66 status=ok
// SIG undefined FUN_1420baed0(void)

void FUN_1420baed0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb0e0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SHADER_TYPE",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  return;
}



// FUNCTION 1420baf20 FUN_1420baf20 body=66 status=ok
// SIG undefined FUN_1420baf20(void)

void FUN_1420baf20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb0e0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SHADER_TYPE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"DRAW_DISABLED_EFFECT",1);
  return;
}



// FUNCTION 1420baf70 FUN_1420baf70 body=63 status=ok
// SIG undefined FUN_1420baf70(void)

void FUN_1420baf70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb0e0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SHADER_TYPE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"DRAW_DISABLED_EFFECT",0);
  return;
}



// FUNCTION 1420bafb0 ModifyCompilationEnvironment body=44 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateMaterialShaderVS<1>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb150();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"USE_SLATE_INSTANCING",1);
  return;
}



// FUNCTION 1420bafe0 ModifyCompilationEnvironment body=41 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSlateMaterialShaderVS<0>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1420bb150();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"USE_SLATE_INSTANCING",0);
  return;
}



// FUNCTION 1420bb010 FUN_1420bb010 body=208 status=ok
// SIG undefined FUN_1420bb010(void)

void FUN_1420bb010(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = (int *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae7678) && (_Init_thread_header(&DAT_146ae7678), DAT_146ae7678 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar1 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    if (plVar1 != (longlong *)0x0) {
      piVar2 = (int *)(**(code **)(*plVar1 + 0x38))(plVar1);
    }
    DAT_146ae7670 = piVar2;
    _Init_thread_footer(&DAT_146ae7678);
  }
  if (DAT_146ae7670 == (int *)0x0) {
    bVar3 = true;
  }
  else {
    bVar3 = *DAT_146ae7670 == 1;
  }
  FUN_141a172f0(param_2,L"USE_709",bVar3);
  return;
}



// FUNCTION 1420bb0e0 FUN_1420bb0e0 body=107 status=ok
// SIG undefined FUN_1420bb0e0(void)

void FUN_1420bb0e0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_141a172f0(param_3,L"USE_MATERIALS",1);
  uVar1 = (**(code **)(*param_2 + 0x2e8))(param_2);
  FUN_141a172f0(param_3,L"NUM_CUSTOMIZED_UVS",uVar1);
  uVar1 = (**(code **)(*param_2 + 0x2f0))(param_2);
  FUN_141a172f0(param_3,L"NUM_CUSTOMIZED_COLORS",uVar1);
  return;
}



// FUNCTION 1420bb150 FUN_1420bb150 body=142 status=ok
// SIG undefined FUN_1420bb150(void)

void FUN_1420bb150(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_141a172f0(param_3,L"USE_MATERIALS",1);
  uVar2 = (**(code **)(*param_2 + 0x2e8))(param_2);
  FUN_141a172f0(param_3,L"NUM_CUSTOMIZED_UVS",uVar2);
  uVar2 = (**(code **)(*param_2 + 0x2f0))(param_2);
  FUN_141a172f0(param_3,L"NUM_CUSTOMIZED_COLORS",uVar2);
  uVar1 = (**(code **)(*param_2 + 0x2a0))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"HAS_SCREEN_POSITION",uVar1);
  return;
}



// FUNCTION 1420bb1e0 OnAppExit body=44 status=ok
// SIG undefined OnAppExit(void)

void FSlateRHIResourceManager::OnAppExit(undefined8 param_1)

{
  FUN_141ee24f0(0);
  FUN_1420bc490(param_1);
  FUN_141ee24f0(0);
  FUN_1420a9200(param_1);
  return;
}



// FUNCTION 1420bb220 FUN_1420bb220 body=186 status=ok
// SIG undefined FUN_1420bb220(void)

void FUN_1420bb220(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xc0,local_res8,*param_2);
  plVar2 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res8[0] * 0x18);
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x30,*plVar3 + 0x70);
    FUN_141ee24f0(0);
    FUN_141edf360(*plVar3);
    FUN_141ee24f0(1);
    puVar1 = (undefined8 *)*plVar3;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0xc0,*param_2);
  return;
}



// FUNCTION 1420bb2e0 FUN_1420bb2e0 body=41 status=ok
// SIG undefined FUN_1420bb2e0(void)

void FUN_1420bb2e0(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = GetMoviePlayer();
  if (lVar1 != 0) {
    plVar2 = (longlong *)GetMoviePlayer();
                    /* WARNING: Could not recover jumptable at 0x0001420bb2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xd8))(plVar2);
    return;
  }
  return;
}



// FUNCTION 1420bb350 FUN_1420bb350 body=251 status=ok
// SIG undefined FUN_1420bb350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420bb350(longlong param_1)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,0);
  if (*(char *)(param_1 + 0xe0) != '\0') {
    local_78 = 1;
    local_38 = DAT_1464c9cf8;
    local_80 = local_68;
    local_68[0] = 0;
    local_90 = &local_58;
    local_98 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_a0 = 4;
    local_a8 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = _DAT_1464c9ce8;
    uStack_44 = uRam00000001464c9cec;
    uStack_40 = uRam00000001464c9cf0;
    uStack_3c = uRam00000001464c9cf4;
    local_88 = param_1 + 0x78;
    FUN_1404a2100(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),0xb,1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 1420bb450 FUN_1420bb450 body=320 status=ok
// SIG undefined FUN_1420bb450(void)

undefined4 FUN_1420bb450(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong local_res10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined1 local_30 [24];
  
  local_res10 = param_2;
  if (param_2 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x2c0,&local_res10);
  }
  *(undefined4 *)(param_1 + 0x2d0) = uVar9;
  plVar3 = *(longlong **)(param_1 + 0x210);
  iVar2 = *(int *)(param_1 + 0x2d0);
  if (DAT_146ac3ac6 == '\0') {
LAB_1420bb4e0:
    if (DAT_146ac3ac5 != '\0') {
LAB_1420bb514:
      plVar11 = (longlong *)FUN_1420a7520(local_30,0,0xff);
      local_48 = SUB84(plVar3,0);
      uStack_44 = (undefined4)((ulonglong)plVar3 >> 0x20);
      uStack_40 = (undefined4)param_2;
      uStack_3c = (undefined4)((ulonglong)param_2 >> 0x20);
      lVar4 = *plVar11;
      *(undefined4 *)(lVar4 + 0x10) = local_48;
      *(undefined4 *)(lVar4 + 0x14) = uStack_44;
      *(undefined4 *)(lVar4 + 0x18) = uStack_40;
      *(undefined4 *)(lVar4 + 0x1c) = uStack_3c;
      *(ulonglong *)(lVar4 + 0x20) = CONCAT44(uStack_34,iVar2);
      lVar4 = *plVar11;
      lVar7 = plVar11[2];
      lVar5 = plVar11[1];
      lVar6 = *(longlong *)(lVar4 + 0x30);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
        UNLOCK();
      }
      FUN_14048a160(lVar4,lVar5,(int)lVar7,1);
      if (lVar6 != 0) {
        LOCK();
        piVar1 = (int *)(lVar6 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar6);
        }
      }
      goto LAB_1420bb574;
    }
    cVar8 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar10 = GetCurrentThreadId();
      if (DVar10 != DAT_1468c21c0) goto LAB_1420bb514;
    }
  }
  else {
    cVar8 = IsInRenderingThread();
    if (cVar8 == '\0') goto LAB_1420bb4e0;
  }
  FBaseGraphTask::GetSmallTaskAllocator();
  if (iVar2 != -1) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,iVar2);
  }
LAB_1420bb574:
  return *(undefined4 *)(param_1 + 0x2d0);
}



// FUNCTION 1420bb590 Rehash body=532 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1420bb6bf;
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
LAB_1420bb6bf:
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
        lVar6 = (longlong)iStack_2c * 0x30 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x28) =
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



// FUNCTION 1420bb7b0 FUN_1420bb7b0 body=71 status=ok
// SIG undefined FUN_1420bb7b0(void)

void FUN_1420bb7b0(longlong *param_1,char param_2)

{
  (**(code **)(*param_1 + 0x180))();
  if (param_2 != '\0') {
    *(int *)((longlong)param_1 + 0x2d4) = *(int *)((longlong)param_1 + 0x2d4) + 1;
    (**(code **)(*(longlong *)param_1[0x42] + 0x30))();
    (**(code **)(*param_1 + 0xc0))(param_1);
  }
  return;
}



// FUNCTION 1420bb800 FUN_1420bb800 body=281 status=ok
// SIG undefined FUN_1420bb800(void)

void FUN_1420bb800(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong local_18 [2];
  
  if (DAT_146ab6383 == '\0') {
    cVar4 = IsInRenderingThread();
    if (cVar4 == '\0') {
      FUN_141edf360(param_3);
    }
    else {
      (**(code **)(*param_3 + 0x30))();
    }
    cVar4 = IsInRenderingThread();
    if (cVar4 == '\0') {
      FUN_141edf360(param_3 + 9);
    }
    else {
      (**(code **)(param_3[9] + 0x30))();
    }
    if (param_3 != (longlong *)0x0) {
      FUN_1420a0620(param_3,1);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f0);
    *(int *)(param_1 + 0x2f0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2f4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x2e8),iVar2);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x2e8) + (longlong)iVar2 * 8) = param_3;
    plVar5 = (longlong *)FRHICommandListImmediate::RHIThreadFence(param_2,local_18,0);
    param_3 = param_3 + 0x13;
    if (param_3 != plVar5) {
      lVar3 = *param_3;
      *param_3 = *plVar5;
      *plVar5 = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    if (local_18[0] != 0) {
      LOCK();
      piVar1 = (int *)(local_18[0] + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1420bb920 FUN_1420bb920 body=313 status=ok
// SIG undefined FUN_1420bb920(void)

void FUN_1420bb920(longlong param_1,undefined8 param_2)

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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [48];
  
  uVar9 = *(undefined8 *)(param_1 + 0x210);
  local_58 = uVar9;
  uStack_50 = param_2;
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') {
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_14209f890(&local_58,uVar9);
      return;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_1420bb9c9;
    }
    local_48 = uVar9;
    uStack_40 = param_2;
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_14209f890(&local_48,uVar9);
    return;
  }
LAB_1420bb9c9:
  plVar10 = (longlong *)FUN_1420a7670(local_38,0,0xff);
  lVar3 = *plVar10;
  *(undefined8 *)(lVar3 + 0x10) = uVar9;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
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
  return;
}



// FUNCTION 1420bba60 ReleaseDynamicRHI body=33 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void TSlateElementVertexBuffer<FSlateVertex>::ReleaseDynamicRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1420bba90 FUN_1420bba90 body=33 status=ok
// SIG undefined FUN_1420bba90(void)

void FUN_1420bba90(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1420bbaf0 FUN_1420bbaf0 body=71 status=ok
// SIG undefined FUN_1420bbaf0(void)

void FUN_1420bbaf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  FUN_1420bbb40(*(undefined8 *)(param_1 + 0x200),param_2);
  return;
}



// FUNCTION 1420bbb40 FUN_1420bbb40 body=1362 status=ok
// SIG undefined FUN_1420bbb40(void)

void FUN_1420bbb40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  int local_58;
  
  if ((*(longlong *)(param_2 + 0x48) == 0) && ((*(byte *)(param_2 + 0x80) & 2) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) && ((*(byte *)(param_2 + 0x80) & 1) == 0)) {
    return;
  }
  lVar11 = 0;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  if ((undefined8 *)(param_2 + 0x70) != &local_88) {
    *(undefined8 *)(param_2 + 0x70) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x78,&plStack_80);
    plVar8 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
  }
  lVar7 = *(longlong *)(param_2 + 0x50);
  lVar10 = *(longlong *)(param_2 + 0x48);
  if ((lVar7 == 0) && (lVar10 != 0)) {
    lVar7 = *(longlong *)(lVar10 + 0x18);
  }
  lVar3 = param_1 + 0xa0;
  if (lVar10 == 0) {
    FUN_1420b5990(lVar3,&local_98,lVar7);
    if (local_98 != (longlong *)0x0) {
      if (*local_98 != 0) {
        lVar10 = *(longlong *)(*local_98 + 0x28);
        if (lVar10 != 0) {
          piVar2 = (int *)(lVar10 + 8);
          LOCK();
          iVar6 = *piVar2;
          if (iVar6 == 0) {
            *piVar2 = 0;
            iVar6 = 0;
          }
          UNLOCK();
          if (iVar6 == 1) goto LAB_1420bbfb4;
        }
        if (*(longlong *)(*local_98 + 0x20) != 0) goto LAB_1420bc024;
      }
LAB_1420bbfb4:
      lVar10 = local_98[1] + 0x20;
      if (local_98[1] == 0) {
        lVar10 = lVar11;
      }
      FUN_141edf360(lVar10);
      TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
      ::Remove(lVar3,lVar7);
      iVar6 = *(int *)(param_1 + 0x1f8);
      *(int *)(param_1 + 0x1f8) = iVar6 + 1;
      if (*(int *)(param_1 + 0x1fc) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1f0,iVar6);
      }
      puVar9 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x1f0));
      *puVar9 = local_98;
      puVar9[1] = local_90;
      if (local_90 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
LAB_1420bc024:
    plVar8 = local_90;
    if (local_90 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_90 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return;
    }
    (**(code **)*local_90)(local_90);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    goto joined_r0x0001420bc04d;
  }
  if (((*(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x174)) - *(int *)(param_1 + 0x124)) +
      *(int *)(param_1 + 0xf8) == 0) {
    return;
  }
  lVar7 = UTexture::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar7 = lVar10;
  if (!bVar4) {
    lVar7 = lVar11;
  }
  FUN_1420b8030(lVar3,&local_78,lVar7);
  if (local_78 == 0) {
    lVar7 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      lVar10 = lVar11;
    }
    FWeakObjectPtr::operator=(local_68,lVar10);
    local_60 = *(undefined8 *)(param_2 + 8);
    plVar8 = (longlong *)(param_1 + 0x140);
    local_58 = 0;
    if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
      iVar6 = GetTypeHash(local_68);
      lVar11 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar11 = param_1 + 0x178;
      }
      iVar6 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar11 = *plVar8;
        do {
          lVar7 = (longlong)iVar6;
          lVar11 = lVar11 + lVar7 * 0x30;
          cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar11,local_68);
          if (cVar5 == '\0') {
LAB_1420bbe2a:
            bVar4 = false;
          }
          else {
            if (((float)local_60 == *(float *)(lVar11 + 8)) &&
               (local_60._4_4_ == *(float *)(lVar11 + 0xc))) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((!bVar4) || (*(int *)(lVar11 + 0x10) != local_58)) goto LAB_1420bbe2a;
            bVar4 = true;
          }
          if (bVar4) {
            if ((iVar6 != -1) && (lVar11 = lVar7 * 0x30 + *plVar8, lVar11 != 0)) {
              local_a8 = *(longlong *)(lVar11 + 0x18);
              plStack_a0 = *(longlong **)(lVar11 + 0x20);
              if (plStack_a0 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                UNLOCK();
              }
              goto LAB_1420bbe50;
            }
            break;
          }
          lVar11 = *plVar8;
          iVar6 = *(int *)(lVar11 + 0x28 + lVar7 * 0x30);
        } while (iVar6 != -1);
      }
    }
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
LAB_1420bbe50:
    FUN_1420bc990(plVar8,local_68);
    if (local_a8 != 0) {
      FUN_1420bd620(local_a8);
      iVar6 = *(int *)(param_1 + 0x208);
      *(int *)(param_1 + 0x208) = iVar6 + 1;
      if (*(int *)(param_1 + 0x20c) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x200,iVar6);
      }
      plVar8 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x200));
      *plVar8 = local_a8;
      plVar8[1] = (longlong)plStack_a0;
      if (plStack_a0 == (longlong *)0x0) goto LAB_1420bbeef;
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
    }
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_a0 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plStack_a0 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
        }
      }
    }
  }
  else {
    if (*(longlong *)(local_78 + 8) != 0) {
      FWeakObjectPtr::operator=(&local_res18);
      local_res20 = local_res18;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0xf0,&local_res20);
    }
    FSlateUTextureResource::ResetTexture(local_78);
    iVar6 = *(int *)(param_1 + 0x1e8);
    *(int *)(param_1 + 0x1e8) = iVar6 + 1;
    if (*(int *)(param_1 + 0x1ec) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1e0,iVar6);
    }
    plVar8 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x1e0));
    *plVar8 = local_78;
    plVar8[1] = (longlong)local_70;
    if (local_70 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
LAB_1420bbeef:
  plVar8 = local_70;
  if (local_70 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar1 = local_70 + 1;
  lVar11 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar11 != 1) {
    return;
  }
  (**(code **)*local_70)(local_70);
  LOCK();
  piVar2 = (int *)((longlong)plVar8 + 0xc);
  iVar6 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  local_90 = local_70;
joined_r0x0001420bc04d:
  if (iVar6 == 1) {
    (**(code **)(*local_90 + 8))(local_90,1);
  }
  return;
}



// FUNCTION 1420bc0a0 FUN_1420bc0a0 body=36 status=ok
// SIG undefined FUN_1420bc0a0(void)

void FUN_1420bc0a0(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x70,0);
  return;
}



// FUNCTION 1420bc0d0 FUN_1420bc0d0 body=917 status=ok
// SIG undefined FUN_1420bc0d0(void)

void FUN_1420bc0d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint local_118;
  uint uStack_114;
  int iStack_104;
  uint uStack_100;
  undefined8 uStack_f8;
  uint local_f0;
  uint uStack_ec;
  int iStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  uint uStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  iVar11 = (int)param_1[5];
  local_b8 = (uint *)(param_1 + 2);
  uVar13 = 0;
  uStack_ec = 1;
  local_f0 = 0;
  iStack_dc = 0;
  uStack_d8 = 0;
  if (iVar11 != 0) {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = local_b8;
    }
    uVar3 = *puVar15;
    uVar12 = uVar13;
    uVar14 = uVar13;
    while (uVar3 == 0) {
      iVar10 = (int)uVar12;
      uStack_d8 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_d8;
      local_f0 = iVar10 + 1;
      uVar12 = (ulonglong)local_f0;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_1420bc1a6;
      uVar3 = puVar15[(longlong)iVar10 + 1];
    }
    uStack_ec = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (uStack_ec != 0) {
      for (; uStack_ec >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_ec == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_dc = (uStack_d8 - iVar10) + 0x1f;
    if (iVar11 < iStack_dc) {
LAB_1420bc1a6:
      iStack_dc = iVar11;
    }
  }
  uStack_b0 = CONCAT44(iStack_dc,0xffffffff);
  auVar8._8_4_ = uStack_d8;
  auVar8._0_8_ = uStack_b0;
  auVar8._12_4_ = uStack_d4;
  uStack_20._0_4_ = SUB84(param_1,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_c0 = local_f0;
  uStack_bc = uStack_ec;
  uStack_f8 = auVar8._8_8_;
  local_90 = 0;
  uStack_28 = uStack_f8;
  local_a8._8_4_ = (undefined4)uStack_20;
  local_a8._0_8_ = uStack_f8;
  local_a8._12_4_ = uStack_20._4_4_;
  iVar11 = iStack_dc;
  local_98 = param_1;
  if (iStack_dc < (int)param_1[5]) {
    do {
      lVar4 = *(longlong *)(*(longlong *)((longlong)iVar11 * 0x20 + 8 + *param_1) + 8);
      uVar12 = lVar4 + 0x20;
      if (lVar4 == 0) {
        uVar12 = uVar13;
      }
      FUN_141edf360(uVar12);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iVar11 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  local_88 = param_1 + 10;
  iVar11 = (int)param_1[0xf];
  local_78 = (uint *)(param_1 + 0xc);
  local_118 = 0;
  uStack_114 = 1;
  iStack_104 = 0;
  uStack_100 = 0;
  if (iVar11 != 0) {
    puVar15 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar15 = local_78;
    }
    uVar3 = *puVar15;
    uVar12 = uVar13;
    while (uVar3 == 0) {
      iVar10 = (int)uVar13;
      uStack_100 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_100;
      local_118 = iVar10 + 1;
      uVar13 = (ulonglong)local_118;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_1420bc322;
      uVar3 = puVar15[(longlong)iVar10 + 1];
    }
    uStack_114 = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_104 = (uStack_100 - iVar10) + 0x1f;
    if (iVar11 < iStack_104) {
LAB_1420bc322:
      iStack_104 = iVar11;
    }
  }
  uStack_70 = CONCAT44(iStack_104,0xffffffff);
  auVar7._8_4_ = uStack_100;
  auVar7._0_8_ = uStack_70;
  auVar7._12_4_ = iStack_dc;
  uStack_20._0_4_ = SUB84(local_88,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_28 = auVar7._8_8_;
  uStack_40 = local_118;
  uStack_3c = uStack_114;
  local_50 = 0;
  uStack_80 = local_118;
  uStack_7c = uStack_114;
  local_68._8_4_ = (undefined4)uStack_20;
  local_68._0_8_ = uStack_28;
  local_68._12_4_ = uStack_20._4_4_;
  local_58 = local_88;
  local_48 = local_88;
  puStack_38 = local_78;
  uStack_30 = uStack_70;
  uStack_20 = local_88;
  if (iStack_104 < (int)param_1[0xf]) {
    do {
      lVar4 = *(longlong *)((longlong)iStack_104 * 0x20 + 8 + *local_88);
      lVar5 = *(longlong *)(lVar4 + 0x10);
      *(undefined8 *)(lVar4 + 8) = 0;
      if (lVar5 != 0) {
        if (*(undefined8 **)(lVar5 + 0x20) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar5 + 0x20) = 0;
        }
        plVar6 = *(longlong **)(lVar5 + 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        FMemory::operator_delete(lVar5,0x30);
      }
      *(undefined8 *)(lVar4 + 0x10) = 0;
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      iStack_104 = uStack_70._4_4_;
    } while (uStack_70._4_4_ < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1420bc490 FUN_1420bc490 body=1097 status=ok
// SIG undefined FUN_1420bc490(void)

void FUN_1420bc490(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar17 = 0;
  uVar12 = uVar17;
  uVar10 = uVar17;
  if (0 < *(int *)(param_1 + 0x218)) {
    do {
      lVar2 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0x210));
      lVar3 = *(longlong *)(lVar2 + 0x40);
      *(undefined1 *)(lVar2 + 0x38) = 0;
      uVar11 = lVar3 + 0x20;
      if (lVar3 == 0) {
        uVar11 = uVar17;
      }
      FUN_141edf360(uVar11);
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
      uVar10 = uVar10 + 8;
    } while ((int)uVar13 < *(int *)(param_1 + 0x218));
  }
  uVar12 = uVar17;
  uVar10 = uVar17;
  if (0 < *(int *)(param_1 + 0x228)) {
    do {
      lVar2 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0x220));
      uVar11 = lVar2 + 0x20;
      if (lVar2 == 0) {
        uVar11 = uVar17;
      }
      FUN_141edf360(uVar11);
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
      uVar10 = uVar10 + 8;
    } while ((int)uVar13 < *(int *)(param_1 + 0x228));
  }
  FUN_1420bc0d0(param_1 + 0xa0);
  plVar14 = (longlong *)(param_1 + 0x248);
  iVar1 = *(int *)(param_1 + 0x270);
  puStack_38 = (uint *)(param_1 + 600);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar16 = *(uint **)(param_1 + 0x268);
    if (*(uint **)(param_1 + 0x268) == (uint *)0x0) {
      puVar16 = puStack_38;
    }
    uVar13 = *puVar16;
    uVar12 = uVar17;
    uVar10 = uVar17;
    while (uVar13 == 0) {
      iVar9 = (int)uVar12;
      uStack_70 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_70;
      local_88 = iVar9 + 1;
      uVar12 = (ulonglong)local_88;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1420bc5ec;
      uVar13 = puVar16[(longlong)iVar9 + 1];
    }
    uStack_84 = -uVar13 & uVar13;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_78._4_4_ = (uStack_70 - iVar9) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_1420bc5ec:
      local_78._4_4_ = iVar1;
    }
  }
  uStack_30 = CONCAT44(local_78._4_4_,0xffffffff);
  auVar6._8_4_ = uStack_70;
  auVar6._0_8_ = uStack_30;
  auVar6._12_4_ = iStack_6c;
  local_20._0_4_ = SUB84(plVar14,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  uStack_28 = auVar6._8_8_;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = uStack_28;
  local_68._12_4_ = local_20._4_4_;
  bVar5 = local_78._4_4_ < *(int *)(param_1 + 0x270);
  local_58 = plVar14;
  local_48 = plVar14;
  local_78 = puStack_38;
  local_20 = plVar14;
  if (bVar5) {
    do {
      plVar15 = *(longlong **)(*plVar14 + 8 + (longlong)iStack_6c * 0x18);
      FSlateRenderDataHandle::Disconnect(*(undefined8 *)(*plVar14 + (longlong)iStack_6c * 0x18));
      cVar8 = IsInRenderingThread();
      if (cVar8 == '\0') {
        FUN_141edf360(plVar15);
      }
      else {
        (**(code **)(*plVar15 + 0x30))();
      }
      cVar8 = IsInRenderingThread();
      if (cVar8 == '\0') {
        FUN_141edf360(plVar15 + 9);
      }
      else {
        (**(code **)(plVar15[9] + 0x30))();
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  plVar14 = (longlong *)(param_1 + 0x298);
  iVar1 = *(int *)(param_1 + 0x2c0);
  puStack_38 = (uint *)(param_1 + 0x2a8);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar16 = *(uint **)(param_1 + 0x2b8);
    if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
      puVar16 = puStack_38;
    }
    uVar13 = *puVar16;
    uVar12 = uVar17;
    uVar10 = uVar17;
    while (uVar13 == 0) {
      iVar9 = (int)uVar12;
      uStack_70 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_70;
      local_88 = iVar9 + 1;
      uVar12 = (ulonglong)local_88;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1420bc78a;
      uVar13 = puVar16[(longlong)iVar9 + 1];
    }
    uStack_84 = -uVar13 & uVar13;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_78._4_4_ = (uStack_70 - iVar9) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_1420bc78a:
      local_78._4_4_ = iVar1;
    }
  }
  uStack_30 = CONCAT44(local_78._4_4_,0xffffffff);
  auVar7._8_4_ = uStack_70;
  auVar7._0_8_ = uStack_30;
  auVar7._12_4_ = iStack_6c;
  local_20._0_4_ = SUB84(plVar14,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
  uStack_28 = auVar7._8_8_;
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = uStack_28;
  local_68._12_4_ = local_20._4_4_;
  bVar5 = local_78._4_4_ < *(int *)(param_1 + 0x2c0);
  local_58 = plVar14;
  local_48 = plVar14;
  local_20 = plVar14;
  local_78 = puStack_38;
  if (bVar5) {
    do {
      uVar10 = (ulonglong)*(int *)((longlong)iStack_6c * 0x20 + 0x10 + *plVar14);
      plVar15 = *(longlong **)((longlong)iStack_6c * 0x20 + 8 + *plVar14);
      uVar12 = uVar10 & 0x1fffffffffffffff;
      if (plVar15 + uVar10 < plVar15) {
        uVar12 = uVar17;
      }
      uVar10 = uVar17;
      if (uVar12 != 0) {
        do {
          plVar4 = (longlong *)*plVar15;
          cVar8 = IsInRenderingThread();
          if (cVar8 == '\0') {
            FUN_141edf360(plVar4);
          }
          else {
            (**(code **)(*plVar4 + 0x30))();
          }
          cVar8 = IsInRenderingThread();
          if (cVar8 == '\0') {
            FUN_141edf360(plVar4 + 9);
          }
          else {
            (**(code **)(plVar4[9] + 0x30))();
          }
          plVar15 = plVar15 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar12);
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1420bc8e0 ReleaseUpdatableTexture body=65 status=ok
// SIG undefined ReleaseUpdatableTexture(void)

void FSlateRHIRenderer::ReleaseUpdatableTexture(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))();
    (**(code **)(*plVar2 + 0x30))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001420bc915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001420bc91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2);
  return;
}


