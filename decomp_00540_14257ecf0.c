// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14257ecf0 FUN_14257ecf0 body=485 status=ok
// SIG undefined FUN_14257ecf0(void)

undefined8 * FUN_14257ecf0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  *param_1 = 0;
  iVar7 = (int)param_2[1];
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar7,0);
    puVar5 = (undefined8 *)*param_1;
    puVar6 = (undefined1 *)(lVar1 + 10);
    do {
      *puVar5 = *(undefined8 *)(puVar6 + -10);
      *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar6 + -2);
      *(undefined1 *)((longlong)puVar5 + 10) = *puVar6;
      *(undefined1 *)((longlong)puVar5 + 0xb) = puVar6[1];
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(puVar6 + 2);
      *(undefined1 *)(puVar5 + 2) = puVar6[6];
      *(undefined1 *)((longlong)puVar5 + 0x11) = puVar6[7];
      uVar2 = *(undefined4 *)(puVar6 + 0xe);
      uVar3 = *(undefined4 *)(puVar6 + 0x12);
      uVar4 = *(undefined4 *)(puVar6 + 0x16);
      *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(puVar6 + 10);
      *(undefined4 *)(puVar5 + 3) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar3;
      *(undefined4 *)(puVar5 + 4) = uVar4;
      iVar7 = iVar7 + -1;
      puVar5 = puVar5 + 5;
      puVar6 = puVar6 + 0x28;
    } while (iVar7 != 0);
  }
  param_1[2] = 0;
  iVar7 = (int)param_2[3];
  lVar1 = param_2[2];
  *(int *)(param_1 + 3) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar7,0);
    puVar5 = (undefined8 *)param_1[2];
    puVar6 = (undefined1 *)(lVar1 + 10);
    do {
      *puVar5 = *(undefined8 *)(puVar6 + -10);
      *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar6 + -2);
      *(undefined1 *)((longlong)puVar5 + 10) = *puVar6;
      *(undefined1 *)((longlong)puVar5 + 0xb) = puVar6[1];
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(puVar6 + 2);
      *(undefined1 *)(puVar5 + 2) = puVar6[6];
      *(undefined1 *)((longlong)puVar5 + 0x11) = puVar6[7];
      *(undefined1 *)((longlong)puVar5 + 0x12) = puVar6[8];
      *(undefined1 *)((longlong)puVar5 + 0x13) = puVar6[9];
      *(undefined1 *)((longlong)puVar5 + 0x14) = puVar6[10];
      uVar2 = *(undefined4 *)(puVar6 + 0x12);
      uVar3 = *(undefined4 *)(puVar6 + 0x16);
      uVar4 = *(undefined4 *)(puVar6 + 0x1a);
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar6 + 0xe);
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
      *(undefined4 *)(puVar5 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
      iVar7 = iVar7 + -1;
      puVar5 = puVar5 + 5;
      puVar6 = puVar6 + 0x28;
    } while (iVar7 != 0);
  }
  param_1[4] = 0;
  iVar7 = (int)param_2[5];
  lVar1 = param_2[4];
  *(int *)(param_1 + 5) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar7,0);
    puVar5 = (undefined8 *)param_1[4];
    puVar6 = (undefined1 *)(lVar1 + 10);
    do {
      *puVar5 = *(undefined8 *)(puVar6 + -10);
      *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar6 + -2);
      *(undefined1 *)((longlong)puVar5 + 10) = *puVar6;
      *(undefined1 *)((longlong)puVar5 + 0xb) = puVar6[1];
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(puVar6 + 2);
      *(undefined1 *)(puVar5 + 2) = puVar6[6];
      uVar2 = *(undefined4 *)(puVar6 + 0xe);
      uVar3 = *(undefined4 *)(puVar6 + 0x12);
      uVar4 = *(undefined4 *)(puVar6 + 0x16);
      *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(puVar6 + 10);
      *(undefined4 *)(puVar5 + 3) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar3;
      *(undefined4 *)(puVar5 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar5 + 0x24) = *(undefined4 *)(puVar6 + 0x1a);
      *(undefined1 *)(puVar5 + 5) = puVar6[0x1e];
      iVar7 = iVar7 + -1;
      puVar5 = puVar5 + 6;
      puVar6 = puVar6 + 0x30;
    } while (iVar7 != 0);
  }
  param_1[6] = 0;
  FUN_14257a590(param_1 + 6,param_2[6],(int)param_2[7],0,0);
  return param_1;
}



// FUNCTION 14257eee0 FUN_14257eee0 body=521 status=ok
// SIG undefined FUN_14257eee0(void)

undefined8 * FUN_14257eee0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  longlong local_18 [2];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145109d20;
  param_1[5] = &PTR_LAB_14510a220;
  param_1[6] = &PTR_LAB_14510a238;
  param_1[8] = 0;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffe;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffff0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_1425729f0(local_18,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    lVar2 = (long)local_18[0];
    if ((DAT_1464aaa49 == '\0') || (DAT_1468c21ab == '\0')) {
      FUN_142570f00();
      AK::MemoryMgr::StartProfileThreadUsage(lVar2);
    }
    if (DAT_146afe3a8 == 0) {
      uVar1 = UEnum::GetPrivateStaticClass();
      DAT_146afe3a8 = FUN_141799410(uVar1,0,L"/Script/Engine.EMaterialSamplerType",0);
    }
  }
  *param_1 = &PTR__scalar_deleting_destructor__14510aea0;
  param_1[5] = &PTR_LAB_14510b3b0;
  param_1[6] = &PTR_LAB_14510b3c8;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3eaaaa9f;
  *(undefined2 *)(param_1 + 0x1f) = 0x100;
  *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xfc) & 0xfffffc60;
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
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffffe;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  return param_1;
}



// FUNCTION 14257f0f0 FUN_14257f0f0 body=55 status=ok
// SIG undefined FUN_14257f0f0(void)

undefined8 * FUN_14257f0f0(undefined8 *param_1)

{
  FUN_14257eee0();
  *param_1 = &PTR__scalar_deleting_destructor__14510b950;
  param_1[5] = &PTR_LAB_14510b3b0;
  param_1[6] = &PTR_LAB_14510b3c8;
  return param_1;
}



// FUNCTION 14257f130 FUN_14257f130 body=114 status=ok
// SIG undefined FUN_14257f130(void)

undefined8 * FUN_14257f130(undefined8 *param_1)

{
  FUN_14257eee0();
  *param_1 = &PTR_FUN_14510b3f8;
  param_1[5] = &PTR_LAB_14510b908;
  param_1[6] = &PTR_LAB_14510b920;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  return param_1;
}



// FUNCTION 14257f1b0 UMaterialInterface body=213 status=ok
// SIG undefined UMaterialInterface(void)

undefined8 * UMaterialInterface::UMaterialInterface(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  longlong local_18 [2];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145109d20;
  param_1[5] = &PTR_LAB_14510a220;
  param_1[6] = &PTR_LAB_14510a238;
  param_1[8] = 0;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffe;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffff0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_1425729f0(local_18,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    lVar2 = (long)local_18[0];
    if ((DAT_1464aaa49 == '\0') || (DAT_1468c21ab == '\0')) {
      FUN_142570f00();
      AK::MemoryMgr::StartProfileThreadUsage(lVar2);
    }
    if (DAT_146afe3a8 == 0) {
      uVar1 = UEnum::GetPrivateStaticClass();
      DAT_146afe3a8 = FUN_141799410(uVar1,0,L"/Script/Engine.EMaterialSamplerType",0);
    }
  }
  return param_1;
}



// FUNCTION 14257f290 FUN_14257f290 body=159 status=ok
// SIG undefined FUN_14257f290(void)

void FUN_14257f290(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar5 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      lVar1 = *plVar5;
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar3 = GetCurrentThreadId();
        lVar4 = 0x9d;
        if (DVar3 == DAT_1468c21c0) goto LAB_14257f2f3;
      }
      else {
LAB_14257f2f3:
        lVar4 = 0x9c;
      }
      plVar5 = plVar5 + 1;
      *(undefined1 *)(lVar1 + lVar4) = 0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)*param_1;
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar5);
  return;
}



// FUNCTION 14257f330 ~TArray<FMaterialCustomOutputAttributeDefintion,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FMaterialCustomOutputAttributeDefintion,FDefaultAllocator>(void)

void TArray<FMaterialCustomOutputAttributeDefintion,FDefaultAllocator>::
     ~TArray<FMaterialCustomOutputAttributeDefintion,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (plVar2[9] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
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



// FUNCTION 14257f3a0 FUN_14257f3a0 body=109 status=ok
// SIG undefined FUN_14257f3a0(void)

void FUN_14257f3a0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_14257f410(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14257f410 FUN_14257f410 body=169 status=ok
// SIG undefined FUN_14257f410(void)

void FUN_14257f410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14510add8;
  FUN_14258c0c0();
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 7,0);
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14257f4c0 FUN_14257f4c0 body=54 status=ok
// SIG undefined FUN_14257f4c0(void)

void FUN_14257f4c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_1450f76b8;
  puVar1 = param_1;
  FMaterialShaderMap::RemovePendingMaterial();
  AK::MemoryMgr::StartProfileThreadUsage((long)puVar1);
  if (param_1[1] != 0) {
    FUN_14259f650();
    return;
  }
  return;
}



// FUNCTION 14257f500 ~FMaterialRenderProxy body=127 status=ok
// SIG undefined ~FMaterialRenderProxy(void)

void FMaterialRenderProxy::~FMaterialRenderProxy(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar3;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__14510ae30;
  if (*(char *)(param_1 + 5) != '\0') {
    FRenderResource::ReleaseResource();
  }
  lVar3 = 4;
  puVar1 = param_1 + 0x22;
  do {
    puVar2 = puVar1 + -7;
    lVar3 = lVar3 + -1;
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar2,0);
    if (puVar1[-4] != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + -5);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar2);
    puVar1 = puVar2;
  } while (lVar3 != 0);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 14257f580 FUN_14257f580 body=278 status=ok
// SIG undefined FUN_14257f580(void)

void FUN_14257f580(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14510ae08;
  iVar3 = 0;
  param_1[0x1b] = &PTR_LAB_14510ae20;
  if (0 < DAT_146afee28) {
    lVar4 = 0;
    lVar5 = DAT_146afee20;
    iVar1 = DAT_146afee28;
    do {
      if (*(undefined8 **)(lVar4 + lVar5) == param_1) {
        iVar2 = (iVar1 - iVar3) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + (longlong)iVar3 * 8),
                     (void *)(lVar5 + (longlong)(iVar1 - iVar2) * 8),(longlong)iVar2 << 3);
          iVar1 = DAT_146afee28;
        }
        DAT_146afee28 = iVar1 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146afee20);
        iVar3 = iVar3 + -1;
        lVar4 = lVar4 + -8;
        lVar5 = DAT_146afee20;
        iVar1 = DAT_146afee28;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < iVar1);
  }
  FUN_142580280(param_1 + 0x3f);
  FMaterialShaderMapId::~FMaterialShaderMapId(param_1 + 0x20);
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  FUN_14257f3a0(param_1 + 0x1c);
  param_1[0x1b] = &PTR_FUN_1440780a8;
  FUN_14257f410(param_1);
  return;
}



// FUNCTION 14257f6a0 ~FMaterialShaderMapId body=184 status=ok
// SIG undefined ~FMaterialShaderMapId(void)

void FMaterialShaderMapId::~FMaterialShaderMapId(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TArray<FStaticMaterialLayersParameter,FDefaultAllocator>::
  ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14257f760 FUN_14257f760 body=1893 status=ok
// SIG undefined FUN_14257f760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14257f760(code **param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar17;
  code **ppcVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  char local_158;
  char local_157;
  LARGE_INTEGER local_150;
  undefined8 local_148;
  code **ppcStack_140;
  int local_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  code *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  code **local_e0;
  undefined8 uStack_d8;
  code **ppcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 local_b8 [2];
  code **local_b0;
  code **ppcStack_a8;
  code **ppcStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  ulonglong uVar16;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  QueryPerformanceCounter(&local_150);
  local_157 = '\0';
  uVar19 = 0;
  uVar15 = 0;
  uVar17 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0;
  cVar2 = '\0';
  local_f8 = (code **)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
  if (uVar17 != 0) {
    do {
      local_157 = cVar2;
      uVar11 = -uVar17 & uVar17;
      iVar3 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar10 = 0;
      if (uVar11 != 0) {
        iVar10 = iVar3;
      }
      if (*(uint *)(param_1 + 0x16) == (&DAT_1464c9c48)[iVar10]) {
        local_157 = '\x01';
      }
      bVar20 = uVar11 != uVar17;
      uVar17 = uVar17 ^ uVar11;
      cVar2 = local_157;
    } while (bVar20);
    local_f8 = (code **)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
    if (local_157 != '\0') {
      if (*(char *)((longlong)param_1 + 0xb4) != '\0') {
        FUN_141ee24f0(0);
      }
      local_118 = 0;
      local_110 = 0;
      local_128 = (code *)0x0;
      local_120 = 0;
      if ((param_1[0x14] == (code *)0x0) && (param_1[0x15] == (code *)0x0)) {
        ppcStack_140 = param_1 + 2;
        local_158 = '\x01';
        uVar17 = *(uint *)(param_1 + 5);
        local_148 = (code **)0x100000000;
        uStack_134 = 0;
        if (uVar17 != 0) {
          ppcVar18 = (code **)param_1[4];
          if ((code **)param_1[4] == (code **)0x0) {
            ppcVar18 = ppcStack_140;
          }
          uVar11 = *(uint *)ppcVar18;
          uVar8 = uVar19;
          uVar16 = uVar19;
          while (uVar11 == 0) {
            iVar3 = (int)uVar8;
            uVar15 = (int)uVar16 + 0x20;
            uVar16 = (ulonglong)uVar15;
            uVar8 = (ulonglong)(iVar3 + 1U);
            uStack_134 = (ulonglong)uVar15 << 0x20;
            uVar1 = (ulonglong)local_148 >> 0x20;
            local_148 = (code **)CONCAT44((int)uVar1,iVar3 + 1U);
            if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
            goto LAB_14257f905;
            uVar11 = *(uint *)((longlong)ppcVar18 + ((longlong)iVar3 + 1) * 4);
          }
          uVar11 = -uVar11 & uVar11;
          iVar3 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          local_148 = (code **)CONCAT44(uVar11,SUB84(local_148,0));
          if (uVar11 == 0) {
            iVar3 = 0x20;
          }
          else {
            iVar3 = 0x1f - iVar3;
          }
          iVar3 = (uVar15 - iVar3) + 0x1f;
          uStack_134._4_4_ = (undefined4)((ulonglong)uStack_134 >> 0x20);
          uStack_134 = CONCAT44(uStack_134._4_4_,iVar3);
          if ((int)uVar17 < iVar3) {
LAB_14257f905:
            uStack_134 = CONCAT44(uStack_134._4_4_,uVar17);
          }
        }
        local_138 = 0xffffffff;
        uStack_c8 = (char *)CONCAT44((int)uStack_134,0xffffffff);
        uStack_c0 = (longlong *)CONCAT44(uStack_12c,uStack_134._4_4_);
        uStack_d8 = local_148;
        uStack_100 = local_148;
        local_e8 = uStack_134._4_4_;
        uStack_e4 = uStack_12c;
        uStack_f0 = 0xffffffff;
        iStack_ec = (int)uStack_134;
        local_108 = param_1;
        local_e0 = param_1;
        ppcStack_d0 = ppcStack_140;
        local_f8 = ppcStack_140;
        if ((int)uStack_134 < (int)uVar17) {
          do {
            lVar14 = *(longlong *)(*local_108 + (longlong)iStack_ec * 0x10);
            uVar8 = uVar19;
            uVar16 = uVar19;
            do {
              local_150.s.HighPart = (int)uVar8;
              local_150.s.LowPart = (int)uVar16;
              lVar4 = FUN_14256a620(lVar14 + 2000,&local_150);
              uVar1 = local_110;
              if (lVar4 != 0) {
                lVar13 = (longlong)(int)local_110;
                iVar3 = (int)local_110 + 1;
                local_110 = CONCAT44(local_110._4_4_,iVar3);
                if (local_110._4_4_ < iVar3) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_118,uVar1 & 0xffffffff);
                }
                *(longlong *)(local_118 + lVar13 * 8) = lVar4;
              }
              uVar15 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar15;
            } while (((int)uVar15 < 4) ||
                    (uVar15 = (int)uVar16 + 1, uVar16 = (ulonglong)uVar15, uVar8 = uVar19,
                    (int)uVar15 < 3));
            uStack_f0 = uStack_f0 & ~uStack_100._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
          } while (iStack_ec < (int)*(uint *)(local_f8 + 3));
        }
      }
      else {
        local_158 = '\0';
      }
      local_148 = (code **)0x0;
      ppcStack_140 = (code **)0x0;
      local_138 = -1;
      uVar5 = FUN_1429b6de0();
      local_168 = 0;
      FUN_1417a5560(uVar5,&local_148,1,0x10);
      uVar8 = (ulonglong)ppcStack_140 & 0xffffffff;
      do {
        local_138 = local_138 + 1;
        if ((int)ppcStack_140 <= local_138) break;
      } while (*(longlong *)((longlong)local_148 + (longlong)local_138 * 8) == 0);
      do {
        if ((local_138 < 0) || ((int)uVar8 <= local_138)) goto LAB_14257fc70;
        plVar9 = *(longlong **)((longlong)local_148 + (longlong)local_138 * 8);
        uVar5 = (**(code **)(*plVar9 + 0x290))(plVar9);
        piVar6 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                  (param_1,&local_150,uVar5);
        ppcVar18 = local_f8;
        if (*piVar6 != -1) {
          local_e0 = param_1 + 10;
          uVar15 = *(uint *)(param_1 + 0xf);
          uStack_100 = param_1 + 0xc;
          local_108 = (code **)0x100000000;
          local_f8._4_4_ = 0;
          uStack_f0 = 0;
          if (uVar15 != 0) {
            ppcVar18 = (code **)param_1[0xe];
            if ((code **)param_1[0xe] == (code **)0x0) {
              ppcVar18 = uStack_100;
            }
            uVar17 = *(uint *)ppcVar18;
            uVar8 = uVar19;
            uVar16 = uVar19;
            while (uVar17 == 0) {
              iVar3 = (int)uVar8;
              uStack_f0 = (int)uVar16 + 0x20;
              uVar16 = (ulonglong)uStack_f0;
              uVar8 = (ulonglong)(iVar3 + 1U);
              uVar1 = (ulonglong)local_108 >> 0x20;
              local_108 = (code **)CONCAT44((int)uVar1,iVar3 + 1U);
              if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
              goto LAB_14257fb6f;
              uVar17 = *(uint *)((longlong)ppcVar18 + ((longlong)iVar3 + 1) * 4);
            }
            uVar17 = -uVar17 & uVar17;
            iVar3 = 0x1f;
            if (uVar17 != 0) {
              for (; uVar17 >> iVar3 == 0; iVar3 = iVar3 + -1) {
              }
            }
            local_108 = (code **)CONCAT44(uVar17,SUB84(local_108,0));
            if (uVar17 == 0) {
              iVar3 = 0x20;
            }
            else {
              iVar3 = 0x1f - iVar3;
            }
            local_f8._4_4_ = (uStack_f0 - iVar3) + 0x1f;
            if ((int)uVar15 < (int)local_f8._4_4_) {
LAB_14257fb6f:
              local_f8._4_4_ = uVar15;
            }
          }
          local_f8._0_4_ = 0xffffffff;
          uStack_98 = 0xffffffff;
          uStack_94 = local_f8._4_4_;
          uStack_90 = uStack_f0;
          iStack_8c = iStack_ec;
          ppcStack_a8 = local_108;
          uStack_c8 = (char *)CONCAT44(local_f8._4_4_,0xffffffff);
          uStack_d8 = local_108;
          uStack_c0 = (longlong *)CONCAT44(iStack_ec,uStack_f0);
          uVar17 = local_f8._4_4_;
          ppcStack_d0 = uStack_100;
          local_b0 = local_e0;
          ppcStack_a0 = uStack_100;
          ppcVar18 = (code **)CONCAT44(local_f8._4_4_,0xffffffff);
          if ((int)local_f8._4_4_ < (int)uVar15) {
            do {
              cVar2 = (**(code **)(*plVar9 + 0x2a0))
                                (plVar9,*(undefined8 *)(*local_e0 + (longlong)(int)uVar17 * 0x10));
              uVar8 = local_120;
              if (cVar2 != '\0') {
                lVar14 = (longlong)(int)local_120;
                iVar3 = (int)local_120 + 1;
                local_120 = CONCAT44(local_120._4_4_,iVar3);
                if (local_120._4_4_ < iVar3) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_128,uVar8 & 0xffffffff);
                }
                *(longlong **)(local_128 + lVar14 * 8) = plVar9;
                ppcVar18 = (code **)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
                break;
              }
              uStack_c8 = (char *)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d8._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
              uVar17 = uStack_c8._4_4_;
              ppcVar18 = (code **)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
            } while ((int)uStack_c8._4_4_ < (int)*(uint *)(ppcStack_d0 + 3));
          }
        }
        local_f8 = ppcVar18;
        uVar8 = (ulonglong)ppcStack_140 & 0xffffffff;
        do {
          local_138 = local_138 + 1;
          if ((int)ppcStack_140 <= local_138) break;
        } while (*(longlong *)((longlong)local_148 + (longlong)local_138 * 8) == 0);
      } while( true );
    }
  }
  goto LAB_14257fe19;
LAB_14257fc70:
  if (local_148 != (code **)0x0) {
    FMemory::Free(local_148);
  }
  local_e0 = &local_128;
  local_b8[0] = 0;
  local_58 = (longlong *)0x0;
  ppcStack_d0 = (code **)local_b8;
  local_48 = 0;
  uStack_c8 = &local_158;
  uStack_c0 = &local_118;
  uStack_d8 = local_88;
  puVar7 = (undefined8 *)FUN_140438ef0(0x30,local_78);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_143f4d098;
    puVar7[1] = local_e0;
    puVar7[2] = uStack_d8;
    puVar7[3] = ppcStack_d0;
    puVar7[4] = uStack_c8;
    puVar7[5] = uStack_c0;
  }
  local_88[0] = FUN_1425887d0;
  while (0 < (int)local_120) {
    local_150 = *(LARGE_INTEGER *)(local_128 + (longlong)((int)local_120 + -1) * 8);
    uVar8 = uVar19;
    if (local_48 != 0) {
      plVar9 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar9 = local_58;
      }
      if (plVar9 != (longlong *)0x0) {
        uVar8 = (**(code **)(*plVar9 + 8))();
      }
    }
    (*local_88[0])(uVar8,&local_150);
  }
  if (local_158 == '\0') {
    pcVar12 = param_1[0x14];
    if (pcVar12 == (code *)0x0) {
      pcVar12 = param_1[0x15];
      if (pcVar12 == (code *)0x0) goto LAB_14257fdbd;
      param_1[0x15] = (code *)0x0;
      FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
                (pcVar12);
    }
    else {
      param_1[0x14] = (code *)0x0;
      FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(pcVar12);
    }
    FMemory::operator_delete(pcVar12,0x10);
  }
  else {
    plVar9 = (longlong *)GetRendererModule();
    (**(code **)(*plVar9 + 0x60))(plVar9,&local_118);
  }
LAB_14257fdbd:
  QueryPerformanceCounter(&local_150);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_128 != (code *)0x0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
LAB_14257fe19:
  pcVar12 = param_1[0x15];
  if (pcVar12 != (code *)0x0) {
    FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(pcVar12)
    ;
    FMemory::operator_delete(pcVar12,0x10);
  }
  pcVar12 = param_1[0x14];
  if (pcVar12 != (code *)0x0) {
    FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(pcVar12);
    FMemory::operator_delete(pcVar12,0x10);
  }
  *(uint *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != (code *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 10);
  *(uint *)(param_1 + 9) = 0;
  if (param_1[8] != (code *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 14257fed0 ~FShaderCompilerEnvironment body=467 status=ok
// SIG undefined ~FShaderCompilerEnvironment(void)

void FShaderCompilerEnvironment::~FShaderCompilerEnvironment(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x40,0);
  if (param_1[0x44] != 0) {
    FMemory::Free();
  }
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x36,0);
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x36] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FResourceTableEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x22,0);
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x18);
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  FUN_1404af4a0(param_1 + 0xc,0);
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  return;
}



// FUNCTION 1425800b0 ~FShaderCompilerInput body=225 status=ok
// SIG undefined ~FShaderCompilerInput(void)

void FShaderCompilerInput::~FShaderCompilerInput(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x2d8);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FShaderCompilerEnvironment::~FShaderCompilerEnvironment(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x50);
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (iVar4 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar3 = *(longlong **)(param_1 + 0x48);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425801a0 ~FShaderCompilerOutput body=220 status=ok
// SIG undefined ~FShaderCompilerOutput(void)

void FShaderCompilerOutput::~FShaderCompilerOutput(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  plVar1 = *(longlong **)(param_1 + 0xb0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0xb0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x60);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 142580280 FUN_142580280 body=184 status=ok
// SIG undefined FUN_142580280(void)

void FUN_142580280(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x29) != '\0') {
    *(undefined1 *)(param_1 + 0x29) = 0;
    FUniformBufferStruct::~FUniformBufferStruct();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 0xe);
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 0xc);
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 10);
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 8);
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 6);
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 4);
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 2);
  *param_1 = &PTR_FUN_1440104c8;
  return;
}



// FUNCTION 142580340 operator= body=156 status=ok
// SIG undefined operator=(void)

longlong FMaterialLayersFunctions::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  TArray<FName,FDefaultAllocator>::operator=();
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)(param_2 + 0x20)) {
    iVar2 = *(int *)(param_2 + 0x28);
    _Src = *(void **)(param_2 + 0x20);
    *(int *)(param_1 + 0x28) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2);
    }
  }
  FString::operator=(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1425803e0 operator= body=440 status=ok
// SIG undefined operator=(void)

undefined4 * FMaterialShaderMapId::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  FUN_1425805a0(param_1 + 8,param_2 + 8);
  FString::operator=(param_1 + 0x18,param_2 + 0x18);
  FUN_1408e22e0(param_1 + 0x1c,param_2 + 0x1c);
  FUN_1408e22e0(param_1 + 0x20,param_2 + 0x20);
  FUN_1408e22e0(param_1 + 0x24,param_2 + 0x24);
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)(param_2 + 0x28)) {
    iVar2 = param_2[0x2a];
    pvVar3 = *(void **)(param_2 + 0x28);
    param_1[0x2a] = iVar2;
    if ((iVar2 == 0) && (param_1[0x2b] == 0)) {
      param_1[0x2b] = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 5);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x2c);
  if (puVar1 != (undefined8 *)(param_2 + 0x2c)) {
    iVar2 = param_2[0x2e];
    pvVar3 = *(void **)(param_2 + 0x2c);
    param_1[0x2e] = iVar2;
    if ((iVar2 == 0) && (param_1[0x2f] == 0)) {
      param_1[0x2f] = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 5);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)(param_2 + 0x30)) {
    iVar2 = param_2[0x32];
    pvVar3 = *(void **)(param_2 + 0x30);
    param_1[0x32] = iVar2;
    if ((iVar2 == 0) && (param_1[0x33] == 0)) {
      param_1[0x33] = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 5);
    }
  }
  uVar7 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = uVar7;
  param_1[0x38] = param_2[0x38];
  uVar7 = *(undefined8 *)(param_2 + 0x3b);
  *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  *(undefined8 *)(param_1 + 0x3b) = uVar7;
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}



// FUNCTION 1425805a0 FUN_1425805a0 body=266 status=ok
// SIG undefined FUN_1425805a0(void)

undefined8 * FUN_1425805a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    FUN_14257a720(param_1,*param_2,*(undefined4 *)(param_2 + 1),
                  *(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  if (param_1 + 2 != param_2 + 2) {
    FUN_14257a4c0(param_1 + 2,param_2[2],*(undefined4 *)(param_2 + 3),
                  *(undefined4 *)((longlong)param_1 + 0x1c),0);
  }
  if (param_1 + 4 != param_2 + 4) {
    FUN_14257a7e0(param_1 + 4,param_2[4],*(undefined4 *)(param_2 + 5),
                  *(undefined4 *)((longlong)param_1 + 0x2c),0);
  }
  plVar1 = param_1 + 6;
  if (plVar1 != param_2 + 6) {
    iVar3 = *(int *)(param_1 + 7);
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*plVar1 + 0x30);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-2] != 0) {
          FMemory::Free();
        }
        if (plVar2[-4] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xd;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_14257a590(plVar1,param_2[6],*(undefined4 *)(param_2 + 7),
                  *(undefined4 *)((longlong)param_1 + 0x3c),0);
  }
  return param_1;
}



// FUNCTION 1425806b0 FUN_1425806b0 body=185 status=ok
// SIG undefined FUN_1425806b0(void)

longlong * FUN_1425806b0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x40))();
  puVar1 = *(undefined1 **)plVar3[1];
  if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0xb,1);
  }
  else {
    *(undefined1 *)(param_2 + 0xb) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
  }
  puVar2 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0xc,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar2;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  return param_1;
}



// FUNCTION 142580770 FUN_142580770 body=192 status=ok
// SIG undefined FUN_142580770(void)

longlong * FUN_142580770(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  iVar1 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
  if (iVar1 < 0x15) {
    (**(code **)(*param_1 + 0x40))();
  }
  else {
    FUN_1425806b0(param_1,param_2);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,param_2 + 0x10);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,param_2 + 0x11);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,param_2 + 0x12);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,param_2 + 0x13);
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2 + 0x14);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,uVar3);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_2 + 0x18);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 142580830 FUN_142580830 body=153 status=ok
// SIG undefined FUN_142580830(void)

undefined8 FUN_142580830(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  plVar2 = (longlong *)FUN_1425806b0();
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2 + 0x50);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,uVar3);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_2 + 0x54);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  FArchive::UsingCustomVersion(param_1,&DAT_1464af950);
  iVar1 = FArchive::CustomVer(param_1,&DAT_1464af950);
  if (10 < iVar1) {
    FMaterialLayersFunctions::SerializeForDDC(param_2 + 0x10,param_1);
  }
  return param_1;
}



// FUNCTION 1425808d0 FUN_1425808d0 body=150 status=ok
// SIG undefined FUN_1425808d0(void)

longlong * FUN_1425808d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  iVar1 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
  if (iVar1 < 0x15) {
    (**(code **)(*param_1 + 0x40))();
  }
  else {
    FUN_1425806b0(param_1,param_2);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,param_2 + 0x10);
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2 + 0x11);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,uVar3);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_2 + 0x14);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 142580970 FUN_142580970 body=284 status=ok
// SIG undefined FUN_142580970(void)

longlong * FUN_142580970(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b00e8);
  iVar2 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
  if (iVar2 < 0x15) {
    (**(code **)(*param_1 + 0x40))();
  }
  else {
    FUN_1425806b0(param_1,param_2);
  }
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0148);
  iVar2 = FArchive::CustomVer(param_1,&DAT_1464b0148);
  if (7 < iVar2) {
    (**(code **)(*param_1 + 8))(param_1,param_2 + 0x28);
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x24,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x24,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,param_2 + 0x10);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,uVar3);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_2 + 0x14);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 142580a90 FUN_142580a90 body=457 status=ok
// SIG undefined FUN_142580a90(void)

longlong * FUN_142580a90(longlong *param_1,longlong *param_2)

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
  undefined8 local_res10;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x66666 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_142580770(param_1,*param_2 + (longlong)(int)puVar6 * 0x28);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x28);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0x202ffff;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      local_res10 = 0;
      puVar5 = puVar1;
    }
    FUN_142580770(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142580c60 FUN_142580c60 body=664 status=ok
// SIG undefined FUN_142580c60(void)

longlong * FUN_142580c60(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  int local_res8 [2];
  undefined8 local_res10;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  iVar7 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar5 = (longlong *)param_1[1];
  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  iVar3 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x27628)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          FUN_142580830(param_1,(longlong)iVar7 * 0x68 + *param_2);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_2[1]);
      }
      return param_1;
    }
    iVar4 = (int)param_2[1];
    if (iVar4 != 0) {
      plVar5 = (longlong *)(*param_2 + 0x30);
      do {
        if (plVar5[2] != 0) {
          FMemory::Free();
        }
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        if (plVar5[-2] != 0) {
          FMemory::Free();
        }
        if (plVar5[-4] != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 0xd;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_2);
    }
    if (0 < local_res8[0]) {
      do {
        lVar2 = param_2[1];
        iVar3 = (int)lVar2 + 1;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2);
        }
        puVar6 = (undefined8 *)((longlong)(int)lVar2 * 0x68 + *param_2);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 0x202ffff;
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0xffffffff;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          iVar3 = *(int *)(puVar6 + 3);
          local_res10 = 0;
          iVar4 = iVar3 + 1;
          *(int *)(puVar6 + 3) = iVar4;
          if (*(int *)((longlong)puVar6 + 0x1c) < iVar4) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar6 + 2);
          }
          *(undefined8 *)(puVar6[2] + (longlong)iVar3 * 8) = 0;
          iVar3 = *(int *)(puVar6 + 7);
          *(int *)(puVar6 + 7) = iVar3 + 1;
          if (*(int *)((longlong)puVar6 + 0x3c) < iVar3 + 1) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar6 + 6,iVar3);
          }
          *(undefined1 *)((longlong)iVar3 + puVar6[6]) = 1;
          *(undefined1 *)(puVar6 + 10) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x5c) = 0;
        }
        FUN_142580830(param_1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 142580f00 FUN_142580f00 body=457 status=ok
// SIG undefined FUN_142580f00(void)

longlong * FUN_142580f00(longlong *param_1,longlong *param_2)

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
  undefined8 local_res10;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x66666 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1425808d0(param_1,*param_2 + (longlong)(int)puVar6 * 0x28);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x28);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0x202ffff;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
      *(undefined2 *)(puVar1 + 2) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
      local_res10 = 0;
      puVar5 = puVar1;
    }
    FUN_1425808d0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1425810d0 FUN_1425810d0 body=457 status=ok
// SIG undefined FUN_1425810d0(void)

longlong * FUN_1425810d0(longlong *param_1,longlong *param_2)

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
  undefined8 local_res10;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x55555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_142580970(param_1,(longlong)(int)puVar6 * 0x30 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x30 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0x202ffff;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0xffffffff;
      *(undefined1 *)(puVar4 + 2) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0xffffffff;
      *(undefined1 *)(puVar4 + 5) = 1;
      local_res10 = 0;
      puVar5 = puVar4;
    }
    FUN_142580970(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1425812a0 FUN_1425812a0 body=436 status=ok
// SIG undefined FUN_1425812a0(void)

longlong * FUN_1425812a0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  puVar8 = (undefined8 *)0x0;
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
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x80001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar7 = (longlong)(int)puVar8 * 0x20 + *param_2;
          FUN_1419db9e0(param_1,lVar7);
          uVar4 = FShaderResource::FilterShaderSourceHashForSerialization(param_1,lVar7 + 8);
          FUN_141661e90(param_1,uVar4);
          uVar9 = (int)puVar8 + 1;
          puVar8 = (undefined8 *)(ulonglong)uVar9;
        } while ((int)uVar9 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    puVar10 = puVar8;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x20 + *param_2);
        puVar6 = puVar8;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *(undefined4 *)(puVar5 + 3) = 0;
          puVar6 = puVar5;
        }
        FUN_1419db9e0(param_1,puVar6);
        uVar4 = FShaderResource::FilterShaderSourceHashForSerialization(param_1,puVar6 + 1);
        FUN_141661e90(param_1,uVar4);
        uVar9 = (int)puVar10 + 1;
        puVar10 = (undefined8 *)(ulonglong)uVar9;
      } while ((int)uVar9 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 142581460 FUN_142581460 body=405 status=ok
// SIG undefined FUN_142581460(void)

longlong * FUN_142581460(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x80000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_142581c10(param_1,(longlong)(int)puVar6 * 0x20 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x20 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
      puVar5 = puVar4;
    }
    FUN_142581c10(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142581600 FUN_142581600 body=462 status=ok
// SIG undefined FUN_142581600(void)

longlong * FUN_142581600(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  puVar8 = (undefined8 *)0x0;
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
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x80001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar9 = (longlong)(int)puVar8 * 0x20 + *param_2;
          uVar4 = FShaderResource::FilterShaderSourceHashForSerialization(param_1,lVar9 + 8);
          uVar5 = FUN_1419db920(param_1,lVar9);
          FUN_141661e90(uVar5,uVar4);
          uVar10 = (int)puVar8 + 1;
          puVar8 = (undefined8 *)(ulonglong)uVar10;
        } while ((int)uVar10 < (int)param_2[1]);
      }
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (param_2,local_res8[0]);
      }
      puVar11 = puVar8;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_2,iVar2);
          }
          puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *param_2);
          puVar7 = puVar8;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *(undefined4 *)(puVar6 + 3) = 0;
            puVar7 = puVar6;
          }
          uVar4 = FShaderResource::FilterShaderSourceHashForSerialization(param_1,puVar7 + 1);
          uVar5 = FUN_1419db920(param_1,puVar7);
          FUN_141661e90(uVar5,uVar4);
          uVar10 = (int)puVar11 + 1;
          puVar11 = (undefined8 *)(ulonglong)uVar10;
        } while ((int)uVar10 < local_res8[0]);
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1425817d0 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1425818a0();
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
      TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1425818a0 FUN_1425818a0 body=876 status=ok
// SIG undefined FUN_1425818a0(void)

longlong * FUN_1425818a0(longlong *param_1,longlong *param_2)

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
        (**(code **)(*param_1 + 0x30))(param_1);
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
      (**(code **)(*param_1 + 0x30))(param_1,lVar4);
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



// FUNCTION 142581c10 FUN_142581c10 body=183 status=ok
// SIG undefined FUN_142581c10(void)

longlong * FUN_142581c10(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b00e8);
  FUN_1419db7f0(param_1,param_2);
  uVar3 = FShaderResource::FilterShaderSourceHashForSerialization(param_1,param_2 + 0xc);
  FUN_141661e90(param_1,uVar3);
  iVar2 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
  if (0x18 < iVar2) {
    puVar1 = *(undefined4 **)param_1[1];
    if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
      *(undefined4 *)(param_2 + 8) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      return param_1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  return param_1;
}



// FUNCTION 142581cd0 operator== body=872 status=ok
// SIG undefined operator==(void)

ulonglong FMaterialShaderMapId::operator==(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int *piVar9;
  ulonglong *puVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  uVar6 = (ulonglong)param_2[6];
  if ((((param_1[6] == param_2[6]) &&
       (uVar6 = (ulonglong)(*param_2 ^ *param_1),
       ((param_2[3] == param_1[3] && param_2[2] == param_1[2]) && param_2[1] == param_1[1]) &&
       (*param_2 ^ *param_1) == 0)) && (uVar6 = (ulonglong)param_2[4], param_1[4] == param_2[4])) &&
     ((uVar6 = (ulonglong)param_2[5], param_1[5] == param_2[5] &&
      (uVar6 = FUN_142582040(param_1 + 8,param_2 + 8), (char)uVar6 != '\0')))) {
    uVar11 = param_2[0x1e];
    uVar7 = (ulonglong)(int)uVar11;
    uVar6 = uVar7;
    if (param_1[0x1e] == uVar11) {
      uVar1 = param_2[0x22];
      if (((param_1[0x22] == uVar1) && (uVar2 = param_1[0x2a], uVar2 == param_2[0x2a])) &&
         ((uVar3 = param_1[0x2e], uVar3 == param_2[0x2e] &&
          (uVar4 = param_1[0x32], uVar4 == param_2[0x32])))) {
        uVar13 = 0;
        if (0 < (int)uVar11) {
          piVar9 = *(int **)(param_1 + 0x1c);
          puVar12 = (uint *)(*(longlong *)(param_2 + 0x1c) + 8);
          lVar15 = *(longlong *)(param_2 + 0x1c) - (longlong)piVar9;
          uVar14 = uVar13;
          do {
            uVar6 = (ulonglong)(piVar9[2] ^ *puVar12);
            if (((puVar12[1] != piVar9[3] || puVar12[-1] != piVar9[1]) ||
                *(int *)(lVar15 + (longlong)piVar9) != *piVar9) || (piVar9[2] ^ *puVar12) != 0)
            goto LAB_142582017;
            uVar14 = uVar14 + 1;
            puVar12 = puVar12 + 4;
            piVar9 = piVar9 + 4;
          } while ((longlong)uVar14 < (longlong)uVar7);
        }
        if (0 < (int)uVar1) {
          piVar9 = *(int **)(param_1 + 0x20);
          puVar12 = (uint *)(*(longlong *)(param_2 + 0x20) + 8);
          lVar15 = *(longlong *)(param_2 + 0x20) - (longlong)piVar9;
          uVar7 = uVar13;
          do {
            uVar6 = (ulonglong)(piVar9[2] ^ *puVar12);
            if (((puVar12[1] != piVar9[3] || puVar12[-1] != piVar9[1]) ||
                *(int *)(lVar15 + (longlong)piVar9) != *piVar9) || (piVar9[2] ^ *puVar12) != 0)
            goto LAB_142582017;
            uVar7 = uVar7 + 1;
            puVar12 = puVar12 + 4;
            piVar9 = piVar9 + 4;
          } while ((longlong)uVar7 < (longlong)(int)uVar1);
        }
        if (0 < (int)uVar2) {
          puVar5 = *(ulonglong **)(param_2 + 0x28);
          puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + 0xc);
          puVar10 = puVar5;
          uVar7 = uVar13;
          do {
            uVar6 = *puVar10;
            if (*(ulonglong *)
                 ((*(longlong *)(param_1 + 0x28) - (longlong)puVar5) + (longlong)puVar10) != uVar6)
            goto LAB_142582017;
            uVar6 = *puVar8;
            lVar15 = (longlong)(int)uVar7 * 0x20;
            if (((uVar6 != *(ulonglong *)(lVar15 + 0xc + (longlong)puVar5)) ||
                (uVar6 = puVar8[1], uVar6 != *(ulonglong *)(lVar15 + 0x14 + (longlong)puVar5))) ||
               (uVar6 = (ulonglong)(uint)puVar8[2],
               (uint)puVar8[2] != *(uint *)(lVar15 + 0x1c + (longlong)puVar5))) goto LAB_142582017;
            uVar11 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar11;
            puVar8 = puVar8 + 4;
            puVar10 = puVar10 + 4;
          } while ((int)uVar11 < (int)uVar2);
        }
        if (0 < (int)uVar3) {
          puVar5 = *(ulonglong **)(param_2 + 0x2c);
          puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x2c) + 8);
          puVar10 = puVar5;
          uVar7 = uVar13;
          do {
            uVar6 = *puVar10;
            if (*(ulonglong *)
                 ((*(longlong *)(param_1 + 0x2c) - (longlong)puVar5) + (longlong)puVar10) != uVar6)
            goto LAB_142582017;
            uVar6 = *puVar8;
            lVar15 = (longlong)(int)uVar7;
            if (((uVar6 != puVar5[lVar15 * 4 + 1]) ||
                (uVar6 = puVar8[1], uVar6 != puVar5[lVar15 * 4 + 2])) ||
               (uVar6 = (ulonglong)(uint)puVar8[2], (uint)puVar8[2] != (uint)puVar5[lVar15 * 4 + 3])
               ) goto LAB_142582017;
            uVar11 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar11;
            puVar8 = puVar8 + 4;
            puVar10 = puVar10 + 4;
          } while ((int)uVar11 < (int)uVar3);
        }
        if (0 < (int)uVar4) {
          puVar5 = *(ulonglong **)(param_2 + 0x30);
          puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 8);
          puVar10 = puVar5;
          do {
            uVar6 = *puVar10;
            if (*(ulonglong *)
                 ((*(longlong *)(param_1 + 0x30) - (longlong)puVar5) + (longlong)puVar10) != uVar6)
            goto LAB_142582017;
            uVar6 = *puVar8;
            lVar15 = (longlong)(int)uVar13;
            if (((uVar6 != puVar5[lVar15 * 4 + 1]) ||
                (uVar6 = puVar8[1], uVar6 != puVar5[lVar15 * 4 + 2])) ||
               (uVar6 = (ulonglong)(uint)puVar8[2], (uint)puVar8[2] != (uint)puVar5[lVar15 * 4 + 3])
               ) goto LAB_142582017;
            uVar11 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar11;
            puVar8 = puVar8 + 4;
            puVar10 = puVar10 + 4;
          } while ((int)uVar11 < (int)uVar4);
        }
        uVar6 = *(ulonglong *)(param_1 + 0x34);
        if ((((uVar6 == *(ulonglong *)(param_2 + 0x34)) &&
             (uVar6 = *(ulonglong *)(param_1 + 0x36), uVar6 == *(ulonglong *)(param_2 + 0x36))) &&
            (uVar6 = (ulonglong)param_1[0x38], param_1[0x38] == param_2[0x38])) &&
           ((uVar6 = *(ulonglong *)(param_1 + 0x39), uVar6 == *(ulonglong *)(param_2 + 0x39) &&
            (uVar6 = *(ulonglong *)(param_1 + 0x3b), uVar6 == *(ulonglong *)(param_2 + 0x3b))))) {
          uVar11 = param_1[0x3d];
          uVar6 = (ulonglong)uVar11;
          if (uVar11 == param_2[0x3d]) {
            return CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
          }
        }
      }
    }
  }
LAB_142582017:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142582040 FUN_142582040 body=824 status=ok
// SIG undefined FUN_142582040(void)

undefined8 FUN_142582040(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == (int)param_2[1]) {
    iVar1 = (int)param_1[3];
    if (iVar1 == (int)param_2[3]) {
      iVar2 = (int)param_1[5];
      if ((iVar2 == (int)param_2[5]) && ((int)param_1[7] == (int)param_2[7])) {
        uVar7 = 0;
        if (0 < iVar3) {
          lVar11 = *param_1 - *param_2;
          piVar5 = (int *)(*param_2 + 0x20);
          uVar9 = uVar7;
          do {
            if (*(int *)((longlong)piVar5 + lVar11 + -0x20) != piVar5[-8]) {
              return 0;
            }
            if (*(int *)((longlong)piVar5 + lVar11 + -0x1c) != piVar5[-7]) {
              return 0;
            }
            if (*(char *)((longlong)piVar5 + lVar11 + -0x15) != *(char *)((longlong)piVar5 + -0x15))
            {
              return 0;
            }
            if (*(int *)((longlong)piVar5 + lVar11 + -0x14) != piVar5[-5]) {
              return 0;
            }
            if (((*(int *)((longlong)piVar5 + lVar11 + -0xc) != piVar5[-3] ||
                 *(int *)(lVar11 + -8 + (longlong)piVar5) != piVar5[-2]) ||
                *(int *)(lVar11 + -4 + (longlong)piVar5) != piVar5[-1]) ||
                *(int *)(lVar11 + (longlong)piVar5) != *piVar5) {
              return 0;
            }
            if (*(char *)((longlong)piVar5 + lVar11 + -0x10) != (char)piVar5[-4]) {
              return 0;
            }
            uVar9 = uVar9 + 1;
            piVar5 = piVar5 + 10;
          } while ((longlong)uVar9 < (longlong)iVar3);
        }
        if (0 < iVar1) {
          lVar11 = param_1[2] - param_2[2];
          piVar5 = (int *)(param_2[2] + 0x24);
          uVar9 = uVar7;
          do {
            if (*(int *)(lVar11 + -0x24 + (longlong)piVar5) != piVar5[-9]) {
              return 0;
            }
            if (*(int *)(lVar11 + -0x20 + (longlong)piVar5) != piVar5[-8]) {
              return 0;
            }
            if (*(char *)(lVar11 + -0x19 + (longlong)piVar5) != *(char *)((longlong)piVar5 + -0x19))
            {
              return 0;
            }
            if (*(int *)(lVar11 + -0x18 + (longlong)piVar5) != piVar5[-6]) {
              return 0;
            }
            if (((*(int *)(lVar11 + -0xc + (longlong)piVar5) != piVar5[-3] ||
                 *(int *)(lVar11 + -8 + (longlong)piVar5) != piVar5[-2]) ||
                *(int *)(lVar11 + -4 + (longlong)piVar5) != piVar5[-1]) ||
                *(int *)(lVar11 + (longlong)piVar5) != *piVar5) {
              return 0;
            }
            if (*(char *)(lVar11 + -0x14 + (longlong)piVar5) != (char)piVar5[-5]) {
              return 0;
            }
            if (*(char *)(lVar11 + -0x13 + (longlong)piVar5) != *(char *)((longlong)piVar5 + -0x13))
            {
              return 0;
            }
            if (*(char *)(lVar11 + -0x12 + (longlong)piVar5) != *(char *)((longlong)piVar5 + -0x12))
            {
              return 0;
            }
            if (*(char *)(lVar11 + -0x11 + (longlong)piVar5) != *(char *)((longlong)piVar5 + -0x11))
            {
              return 0;
            }
            uVar9 = uVar9 + 1;
            piVar5 = piVar5 + 10;
          } while ((longlong)uVar9 < (longlong)iVar1);
        }
        if (0 < iVar2) {
          lVar11 = param_1[4] - param_2[4];
          piVar5 = (int *)(param_2[4] + 0x20);
          uVar9 = uVar7;
          do {
            if (*(int *)(lVar11 + -0x20 + (longlong)piVar5) != piVar5[-8]) {
              return 0;
            }
            if (*(int *)(lVar11 + -0x1c + (longlong)piVar5) != piVar5[-7]) {
              return 0;
            }
            if (*(char *)(lVar11 + -0x15 + (longlong)piVar5) != *(char *)((longlong)piVar5 + -0x15))
            {
              return 0;
            }
            if (*(int *)(lVar11 + -0x14 + (longlong)piVar5) != piVar5[-5]) {
              return 0;
            }
            if (((*(int *)(lVar11 + -8 + (longlong)piVar5) != piVar5[-2] ||
                 *(int *)(lVar11 + -4 + (longlong)piVar5) != piVar5[-1]) ||
                *(int *)(lVar11 + -0xc + (longlong)piVar5) != piVar5[-3]) ||
                *(int *)(lVar11 + (longlong)piVar5) != *piVar5) {
              return 0;
            }
            if (*(int *)(lVar11 + 4 + (longlong)piVar5) != piVar5[1]) {
              return 0;
            }
            uVar9 = uVar9 + 1;
            piVar5 = piVar5 + 0xc;
          } while ((longlong)uVar9 < (longlong)iVar2);
        }
        uVar9 = uVar7;
        if (0 < (int)param_1[7]) {
          do {
            piVar5 = (int *)(param_2[6] + uVar7);
            piVar10 = (int *)(param_1[6] + uVar7);
            if (*piVar10 != *piVar5) {
              return 0;
            }
            if (piVar10[1] != piVar5[1]) {
              return 0;
            }
            if (*(char *)((longlong)piVar10 + 0xb) != *(char *)((longlong)piVar5 + 0xb)) {
              return 0;
            }
            if (piVar10[3] != piVar5[3]) {
              return 0;
            }
            if (((piVar10[0x18] != piVar5[0x18] || piVar10[0x17] != piVar5[0x17]) ||
                piVar10[0x16] != piVar5[0x16]) || piVar10[0x15] != piVar5[0x15]) {
              return 0;
            }
            if (piVar5[0x12] == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = *(undefined2 **)(piVar5 + 0x10);
            }
            if (piVar10[0x12] == 0) {
              puVar4 = &DAT_143f3eda8;
            }
            else {
              puVar4 = *(undefined2 **)(piVar10 + 0x10);
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar6);
            if (iVar3 != 0) {
              return 0;
            }
            uVar8 = (int)uVar9 + 1;
            uVar7 = uVar7 + 0x68;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < (int)param_1[7]);
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142582380 FUN_142582380 body=215 status=ok
// SIG undefined FUN_142582380(void)

void FUN_142582380(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar2 = (longlong)param_2;
  lVar3 = *(longlong *)*param_1;
  local_18 = *(undefined8 *)(lVar3 + lVar2 * 0x28);
  plVar1 = (longlong *)(lVar3 + lVar2 * 0x28);
  local_10 = *(undefined8 *)(lVar3 + 8 + lVar2 * 0x28);
  lVar3 = *plVar1;
  if ((*(byte *)(lVar3 + 0x110) & 8) != 0) {
    lVar2 = FUN_1428742e0();
    lVar3 = *plVar1;
    if ((*(int *)(lVar2 + 0xc) != *(int *)(lVar3 + 0x130)) && ((*(byte *)(lVar3 + 0x110) & 8) != 0))
    {
      *(byte *)(lVar3 + 0x110) = *(byte *)(lVar3 + 0x110) & 0xf7 | 0x10;
      lVar3 = *plVar1;
    }
  }
  if ((((*(byte *)(lVar3 + 0x110) & 6) == 6) && ((*(byte *)(lVar3 + 0x110) & 8) == 0)) &&
     (DAT_146533c40 != 0)) {
    FUN_1425870c0(lVar3,&local_18);
    lVar3 = *plVar1;
  }
  if ((*(byte *)(lVar3 + 0x110) & 0x18) == 0x18) {
    FUN_14258e0b0(lVar3,&local_18);
  }
  FUN_1425bc8f0(plVar1[2] + 0x1f8,&local_18,plVar1[3],(int)plVar1[4]);
  return;
}



// FUNCTION 142582460 FUN_142582460 body=469 status=ok
// SIG undefined FUN_142582460(void)

void FUN_142582460(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  int local_res8;
  int local_resc;
  
  lVar1 = *(longlong *)(param_2 + 0x90);
  if (lVar1 != 0) {
    plVar6 = *(longlong **)*param_1;
    plVar2 = plVar6 + (int)((longlong *)*param_1)[1];
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar1) {
        lVar3 = FUN_1429b6de0();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          FUN_142582750(param_1[1],lVar1);
        }
        break;
      }
    }
  }
  FUN_1425990a0(param_2);
  if (((*(byte *)(param_2 + 0x98) & 1) != 0) &&
     (*(int *)param_1[2] = *(int *)param_1[2] + 1, *(char *)param_1[3] != '\0')) {
    iVar7 = 0;
    do {
      iVar4 = 0;
      do {
        local_res8 = iVar7;
        local_resc = iVar4;
        lVar1 = FUN_14256a620(param_2 + 0x188,&local_res8);
        if (lVar1 != 0) {
          plVar2 = (longlong *)param_1[4];
          iVar5 = (int)plVar2[1];
          *(int *)(plVar2 + 1) = iVar5 + 1;
          if (*(int *)((longlong)plVar2 + 0xc) < iVar5 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar5);
          }
          *(longlong *)(*plVar2 + (longlong)iVar5 * 8) = lVar1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
  }
  param_1 = (longlong *)*param_1;
  lVar1 = (longlong)(int)param_1[1];
  if ((int)param_1[1] != 0) {
    iVar4 = 0;
    bVar8 = *(longlong *)*param_1 != param_2;
    lVar3 = 0;
    iVar7 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar7 + 1;
      if (lVar3 < lVar1) {
        plVar2 = (longlong *)(*param_1 + lVar3 * 8);
        do {
          if (bVar8 != (*plVar2 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar8 != false) {
        if (iVar4 != iVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + (longlong)iVar4 * 8),
                     (void *)(*param_1 + (longlong)iVar7 * 8),(longlong)(iVar5 - iVar7) << 3);
        }
        iVar4 = iVar4 + (iVar5 - iVar7);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar7 = iVar5;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 1) = iVar4;
  }
  return;
}



// FUNCTION 142582640 FUN_142582640 body=269 status=ok
// SIG undefined FUN_142582640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142582640(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  longlong *local_res18 [2];
  
  param_1 = (longlong *)*param_1;
  (**(code **)(*param_1 + 0x28))(param_1);
  local_res18[0] = param_1;
  FUN_14058c5a0(&DAT_146533cf0,local_res8,local_res18,0);
  uVar4 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0;
  if (uVar4 != 0) {
    do {
      plVar3 = param_1 + 6;
      plVar1 = param_1 + 0xc;
      lVar2 = 4;
      *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 0x10;
      do {
        *(undefined1 *)(plVar1 + -1) = 0;
        TRefCountPtr<FRHIIndexBuffer>::operator=(plVar3,0);
        plVar3 = plVar3 + 7;
        *plVar1 = 0;
        plVar1 = plVar1 + 7;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      bVar5 = uVar4 != (-uVar4 & uVar4);
      uVar4 = uVar4 ^ -uVar4 & uVar4;
    } while (bVar5);
  }
  if (DAT_146533c48 != 0) {
    return;
  }
  FUN_1425a3670();
  return;
}



// FUNCTION 142582750 FUN_142582750 body=70 status=ok
// SIG undefined FUN_142582750(void)

void FUN_142582750(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  
  uVar1 = 0;
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (*(code *)*param_1)(uVar1,local_res10);
  return;
}



// FUNCTION 1425827f0 FUN_1425827f0 body=97 status=ok
// SIG undefined FUN_1425827f0(void)

undefined8 * FUN_1425827f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bfb0;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142582860 FUN_142582860 body=97 status=ok
// SIG undefined FUN_142582860(void)

undefined8 * FUN_142582860(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bfc0;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1425828d0 FUN_1425828d0 body=97 status=ok
// SIG undefined FUN_1425828d0(void)

undefined8 * FUN_1425828d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bfa0;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142582940 FUN_142582940 body=97 status=ok
// SIG undefined FUN_142582940(void)

undefined8 * FUN_142582940(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bf90;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1425829b0 FUN_1425829b0 body=97 status=ok
// SIG undefined FUN_1425829b0(void)

undefined8 * FUN_1425829b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bf80;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142582a20 FUN_142582a20 body=97 status=ok
// SIG undefined FUN_142582a20(void)

undefined8 * FUN_142582a20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bfe0;
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



// FUNCTION 142582a90 FUN_142582a90 body=97 status=ok
// SIG undefined FUN_142582a90(void)

undefined8 * FUN_142582a90(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bfd0;
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



// FUNCTION 142582b00 FUN_142582b00 body=97 status=ok
// SIG undefined FUN_142582b00(void)

undefined8 * FUN_142582b00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bef0;
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



// FUNCTION 142582b70 FUN_142582b70 body=97 status=ok
// SIG undefined FUN_142582b70(void)

undefined8 * FUN_142582b70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bf00;
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



// FUNCTION 142582be0 FUN_142582be0 body=97 status=ok
// SIG undefined FUN_142582be0(void)

undefined8 * FUN_142582be0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bed0;
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



// FUNCTION 142582c50 FUN_142582c50 body=97 status=ok
// SIG undefined FUN_142582c50(void)

undefined8 * FUN_142582c50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bee0;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142582cc0 FUN_142582cc0 body=97 status=ok
// SIG undefined FUN_142582cc0(void)

undefined8 * FUN_142582cc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bf70;
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



// FUNCTION 142582d30 FUN_142582d30 body=97 status=ok
// SIG undefined FUN_142582d30(void)

undefined8 * FUN_142582d30(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14510bf10;
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



// FUNCTION 142582da0 FUN_142582da0 body=52 status=ok
// SIG undefined FUN_142582da0(void)

undefined8 FUN_142582da0(undefined8 param_1,ulonglong param_2)

{
  FUN_14257f410();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142582de0 `scalar_deleting_destructor' body=107 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCustomWebBrowser::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  FMaterialRenderProxy::~FMaterialRenderProxy(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 142582e50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FDefaultMaterialInstance::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FMaterialRenderProxy::~FMaterialRenderProxy();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 142582e90 FUN_142582e90 body=52 status=ok
// SIG undefined FUN_142582e90(void)

undefined8 FUN_142582e90(undefined8 param_1,ulonglong param_2)

{
  FUN_14257f580();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 142582ed0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14257f410();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142582f10 `scalar_deleting_destructor' body=128 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FShaderCompileJob::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (param_1[0x87] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x7f);
  FShaderCompilerOutput::~FShaderCompilerOutput(param_1 + 0x65);
  FShaderCompilerInput::~FShaderCompilerInput(param_1 + 6);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 142582f90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FShaderCompilerEnvironment::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FShaderCompilerEnvironment();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 142582fd0 `scalar_deleting_destructor' body=173 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShaderPipelineCompileJob::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14510bf48;
  if (0 < *(int *)(param_1 + 4)) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar2 + param_1[3]);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x24)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 3,0);
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142583080 FUN_142583080 body=52 status=ok
// SIG undefined FUN_142583080(void)

undefined8 FUN_142583080(undefined8 param_1,ulonglong param_2)

{
  FUN_142580280();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1425830c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141f0fa60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 142583100 FUN_142583100 body=105 status=ok
// SIG undefined FUN_142583100(void)

longlong FUN_142583100(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1e0);
  FUN_141f0fa60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 142583170 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UMaterialInterface::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~UMaterialInterface();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1425831b0 Add body=266 status=ok
// SIG undefined Add(void)

void FMaterialAttributeDefinitionMap::Add
               (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
               char param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 local_res20 [2];
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  char local_18;
  
  local_68 = *(undefined4 *)param_2;
  uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_60 = *(undefined4 *)(param_2 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_res20[0] = param_4;
  FString::FString(local_58,param_3);
  cVar4 = param_9;
  local_44 = param_5;
  local_18 = param_9;
  local_38 = *param_6;
  uStack_34 = param_6[1];
  uStack_30 = param_6[2];
  uStack_2c = param_6[3];
  local_28 = param_7;
  local_24 = param_8;
  local_20 = param_10;
  local_78 = local_res20;
  local_70 = &local_68;
  local_48 = param_4;
  FUN_14257b480(param_1,&param_9,&local_78,0);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (cVar4 == '\0') {
    iVar2 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x60),iVar2);
    }
    uVar3 = param_2[1];
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 1425832c0 AddAssetUserData body=307 status=ok
// SIG undefined AddAssetUserData(void)

void UMaterialInterface::AddAssetUserData(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(param_2 + 0x10));
    if ((lVar1 != 0) && (lVar2 = (longlong)(int)param_1[9], (int)param_1[9] != 0)) {
      iVar7 = 0;
      bVar8 = *(longlong *)param_1[8] != lVar1;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar2) {
          plVar3 = (longlong *)(param_1[8] + lVar4 * 8);
          do {
            if (bVar8 != (*plVar3 != lVar1)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar4 < lVar2);
        }
        if (bVar8 != false) {
          if (iVar7 != iVar5) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[8] + (longlong)iVar7 * 8),
                       (void *)(param_1[8] + (longlong)iVar5 * 8),(longlong)(iVar6 - iVar5) << 3);
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar2);
      *(int *)(param_1 + 9) = iVar7;
    }
    iVar5 = (int)param_1[9];
    *(int *)(param_1 + 9) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar5);
    }
    *(longlong *)(param_1[8] + (longlong)iVar5 * 8) = param_2;
  }
  return;
}



// FUNCTION 142583400 FUN_142583400 body=375 status=ok
// SIG undefined FUN_142583400(void)

void FUN_142583400(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  char local_28;
  longlong local_20 [3];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  FString::FString(local_68);
  local_58 = 0x21;
  local_38 = 3;
  local_48 = *param_5;
  uStack_44 = param_5[1];
  uStack_40 = param_5[2];
  uStack_3c = param_5[3];
  local_30 = param_6;
  local_34 = 0xffffffff;
  local_28 = '\0';
  local_54 = param_4;
  FString::FString(local_20,param_3);
  iVar5 = DAT_146533d98;
  lVar6 = (longlong)DAT_146533d98;
  DAT_146533d98 = DAT_146533d98 + 1;
  if (DAT_146533d9c < DAT_146533d98) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (&DAT_146533d90,iVar5);
  }
  puVar7 = (undefined4 *)(lVar6 * 0x70 + DAT_146533d90);
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  FString::FString(puVar7 + 4,local_68);
  puVar7[8] = local_58;
  puVar7[9] = local_54;
  puVar7[0x10] = local_38;
  puVar7[0x11] = local_34;
  *(undefined8 *)(puVar7 + 0x12) = local_30;
  *(char *)(puVar7 + 0x14) = local_28;
  puVar7[0xc] = local_48;
  puVar7[0xd] = uStack_44;
  puVar7[0xe] = uStack_40;
  puVar7[0xf] = uStack_3c;
  FString::FString(puVar7 + 0x16,local_20);
  iVar5 = DAT_146533da8;
  if (local_28 == '\0') {
    lVar6 = (longlong)DAT_146533da8;
    DAT_146533da8 = DAT_146533da8 + 1;
    if (DAT_146533dac < DAT_146533da8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533da0,iVar5);
    }
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    puVar7 = (undefined4 *)(DAT_146533da0 + lVar6 * 0x10);
    *puVar7 = *param_1;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
  }
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142583580 AddMaterial body=77 status=ok
// SIG undefined AddMaterial(void)

void FMaterialUpdateContext::AddMaterial(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = param_2;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
  Emplace<FObjectReplicator_*_const_&>(param_1,&local_res8,&local_res10,0);
  local_res8 = param_2;
  FUN_14058cbf0(param_1 + 0x50,&local_res10,&local_res8,0);
  return;
}



// FUNCTION 1425835d0 AddRef body=7 status=ok
// SIG undefined AddRef(void)

void FMaterialShaderMap::AddRef(longlong param_1)

{
  *(int *)(param_1 + 0x35c) = *(int *)(param_1 + 0x35c) + 1;
  return;
}



// FUNCTION 1425835e0 AddReferencedObjects body=65 status=ok
// SIG undefined AddReferencedObjects(void)

void FMaterialResource::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x28,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014258361d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x30,0,0);
  return;
}



// FUNCTION 142583630 FUN_142583630 body=157 status=ok
// SIG undefined FUN_142583630(void)

void FUN_142583630(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res8;
  int local_resc;
  
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    iVar3 = 0;
    do {
      iVar2 = 0;
      do {
        local_res8 = iVar3;
        local_resc = iVar2;
        plVar1 = (longlong *)FUN_14256a620(param_1 + 0x188,&local_res8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x338))(plVar1,param_2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1425836d0 FUN_1425836d0 body=124 status=ok
// SIG undefined FUN_1425836d0(void)

void FUN_1425836d0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong local_res8;
  undefined1 local_res18 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 *local_18;
  longlong *local_10;
  
  local_res8 = param_4;
  if (param_4 != 0) {
    FUN_1419e2a40(param_4);
  }
  local_18 = &local_28;
  local_10 = &local_res8;
  local_28 = param_2;
  local_20 = param_3;
  FUN_14257abd0(param_1 + 0x38,local_res18,&local_18,0);
  if (local_res8 != 0) {
    FShader::Release();
  }
  return;
}



// FUNCTION 142583750 InitDynamicRHI body=39 status=ok
// SIG undefined InitDynamicRHI(void)

void FMaterialRenderProxy::InitDynamicRHI(undefined8 param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  
  local_res10[0] = param_1;
  FUN_14058c5a0(&DAT_146533cf0,local_res8,local_res10,0);
  return;
}



// FUNCTION 142583780 AddUninitialized body=219 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<ATTLCharacterEditScene::MenuEditRef,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x108 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x108 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x108 + *param_1;
  return param_2;
}



// FUNCTION 142583860 UpdateAllCanvasSafeZoneData body=188 status=ok
// SIG undefined UpdateAllCanvasSafeZoneData(void)

void UCanvas::UpdateAllCanvasSafeZoneData(void)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar1 = FUN_1429b6de0();
  FUN_1417a5560(uVar1,&local_28,1,0x10,0);
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)local_20 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      FUN_142587a20(*(undefined8 *)(local_28 + (longlong)local_18 * 8));
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 142583920 FUN_142583920 body=36 status=ok
// SIG undefined FUN_142583920(void)

void FUN_142583920(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x38);
  if (lVar1 != 0) {
    FMaterialResource::FMaterialResource(lVar1);
    return;
  }
  return;
}



// FUNCTION 142583950 FUN_142583950 body=129 status=ok
// SIG undefined FUN_142583950(void)

bool FUN_142583950(void)

{
  int iVar1;
  longlong *plVar2;
  
  if (DAT_146afef1c == '\0') {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowDiscardLocalVertexFactory")
    ;
    if (DAT_146afef1c == '\0') {
      if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x68))(plVar2);
        DAT_146afef1c = 1;
        DAT_146afef1d = 0 < iVar1;
        return 0 < iVar1;
      }
      DAT_146afef1d = 0;
      DAT_146afef1c = 1;
      return false;
    }
  }
  return (bool)DAT_146afef1d;
}



// FUNCTION 1425839f0 AppendDDCKeyString body=1170 status=ok
// SIG undefined AppendDDCKeyString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FMaterialAttributeDefinitionMap::AppendDDCKeyString(longlong *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  uint *puVar15;
  longlong lVar16;
  undefined1 auStack_1d8 [32];
  undefined2 *local_1b8;
  uint local_1b0;
  uint local_1ac;
  void *local_1a8;
  longlong *local_1a0;
  longlong local_198 [2];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong local_160 [2];
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined *puStack_120;
  int local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  puVar11 = (undefined2 *)0x0;
  local_1a0 = param_1;
  if ((DAT_146533db8 == 0) || (DAT_146533db8 == 1)) {
    puStack_120 = &DAT_146533d50;
    local_1b8 = (undefined2 *)0x0;
    local_1ac = 0;
    local_128 = 0x100000000;
    uStack_114 = 0;
    uStack_110 = 0;
    if (DAT_146533d68 != 0) {
      puVar15 = DAT_146533d60;
      if (DAT_146533d60 == (uint *)0x0) {
        puVar15 = (uint *)&DAT_146533d50;
      }
      uVar5 = *puVar15;
      puVar10 = puVar11;
      puVar14 = puVar11;
      while (uVar5 == 0) {
        iVar6 = (int)puVar10;
        uStack_110 = (int)puVar14 + 0x20;
        puVar14 = (undefined2 *)(ulonglong)uStack_110;
        puVar10 = (undefined2 *)(ulonglong)(iVar6 + 1U);
        uVar2 = (ulonglong)local_128 >> 0x20;
        local_128 = CONCAT44((int)uVar2,iVar6 + 1U);
        if ((int)((DAT_146533d68 - 1) + ((int)(DAT_146533d68 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_142583b0c;
        uVar5 = puVar15[(longlong)iVar6 + 1];
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_128 = CONCAT44(uVar5,(undefined4)local_128);
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_114 = (uStack_110 - iVar6) + 0x1f;
      if ((int)DAT_146533d68 < (int)uStack_114) {
LAB_142583b0c:
        uStack_114 = DAT_146533d68;
      }
    }
    uStack_170 = CONCAT44(uStack_114,0xffffffff);
    local_168 = CONCAT44(uStack_10c,uStack_110);
    local_150 = &DAT_146533d40;
    local_118 = -1 << ((byte)DAT_146533d68 & 0x1f);
    uStack_148 = local_128;
    uVar4 = uStack_148;
    puStack_140 = &DAT_146533d50;
    uStack_148._0_4_ = (undefined4)local_128;
    uStack_148._4_4_ = (uint)((ulonglong)local_128 >> 0x20);
    uStack_114 = DAT_146533d68;
    local_1a8 = (void *)(ulonglong)DAT_146533d68;
    local_188 = 0x46533d40;
    uStack_184 = 1;
    uStack_180 = (undefined4)uStack_148;
    uStack_17c = uStack_148._4_4_;
    local_178 = &DAT_146533d50;
    puVar10 = puVar11;
    puVar14 = puVar11;
    uStack_148 = uVar4;
    uStack_138 = uStack_170;
    uStack_130 = local_168;
    while( true ) {
      iVar6 = (int)puVar11;
      if (((uStack_170._4_4_ == (int)local_1a8) && (local_178 == &DAT_146533d50)) &&
         ((longlong *)CONCAT44(uStack_184,local_188) == &DAT_146533d40)) break;
      puVar8 = (undefined8 *)
               FUN_141682af0(*(longlong *)CONCAT44(uStack_184,local_188) +
                             (longlong)uStack_170._4_4_ * 0x80 + 0x10,local_198,0);
      pvVar1 = (void *)*puVar8;
      iVar13 = *(int *)(puVar8 + 1) + -1;
      if (*(int *)(puVar8 + 1) == 0) {
        iVar13 = 0;
      }
      if (iVar13 != 0) {
        local_1b0 = iVar13 + (uint)(iVar6 == 0) + iVar6;
        if ((int)puVar14 < (int)local_1b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,puVar11);
          puVar14 = (undefined2 *)(ulonglong)local_1ac;
          puVar10 = local_1b8;
        }
        puVar11 = (undefined2 *)(ulonglong)local_1b0;
        ::_guard_xfg_dispatch_icall_nop
                  (puVar10 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),pvVar1,(longlong)iVar13 * 2
                  );
        (puVar10 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar13] = 0;
      }
      if (local_198[0] != 0) {
        FMemory::Free();
      }
      uStack_170 = CONCAT44(uStack_170._4_4_,(uint)uStack_170 & ~uStack_17c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_180);
    }
    lVar12 = (longlong)DAT_146533d98 * 0x70 + DAT_146533d90;
    lVar16 = DAT_146533d90;
    local_198[0] = lVar12;
    if (DAT_146533d90 != lVar12) {
      do {
        puVar9 = (ulonglong *)FUN_141682af0(lVar16,local_160,0);
        local_1a8 = (void *)*puVar9;
        iVar6 = (int)puVar9[1] + -1;
        if ((int)puVar9[1] == 0) {
          iVar6 = 0;
        }
        if (iVar6 != 0) {
          iVar13 = (int)puVar11;
          local_1b0 = iVar6 + (uint)(iVar13 == 0) + iVar13;
          if ((int)puVar14 < (int)local_1b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,puVar11);
            puVar14 = (undefined2 *)(ulonglong)local_1ac;
            puVar10 = local_1b8;
          }
          puVar11 = (undefined2 *)(ulonglong)local_1b0;
          ::_guard_xfg_dispatch_icall_nop
                    (puVar10 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)),local_1a8,
                     (longlong)iVar6 * 2);
          (puVar10 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)))[iVar6] = 0;
          lVar12 = local_198[0];
        }
        iVar6 = (int)puVar11;
        if (local_160[0] != 0) {
          FMemory::Free();
        }
        lVar16 = lVar16 + 0x70;
      } while (lVar16 != lVar12);
    }
    iVar13 = 0;
    FSHA1::FSHA1(local_108);
    if (iVar6 == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      iVar13 = iVar6 + -1;
      puVar11 = puVar10;
    }
    FSHA1::UpdateWithString(local_108,puVar11,iVar13);
    FSHA1::Final(local_108);
    local_128 = 0;
    puStack_120 = (undefined *)0x0;
    local_118 = 0;
    FSHA1::GetHash(local_108,&local_128);
    BytesToHex(&local_1b8,&local_128,0x14);
    if (DAT_146533db0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    DAT_146533db0 = local_1b8;
    DAT_146533db8 = local_1b0;
    _DAT_146533dbc = local_1ac;
    FSHA1::~FSHA1(local_108);
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  plVar3 = local_1a0;
  puVar11 = DAT_146533db0;
  iVar6 = DAT_146533db8 - 1;
  if (DAT_146533db8 == 0) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar13 = (int)local_1a0[1];
    iVar7 = (uint)(iVar13 == 0) + iVar6 + iVar13;
    *(int *)(local_1a0 + 1) = iVar7;
    if (*(int *)((longlong)local_1a0 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0,iVar13);
    }
    pvVar1 = (void *)(*plVar3 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,puVar11,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  return;
}



// FUNCTION 142583e90 FUN_142583e90 body=5275 status=ok
// SIG undefined FUN_142583e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142583e90(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  bool bVar3;
  uint *_Src;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  void *pvVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStack_358 [32];
  void *local_338;
  undefined8 local_330;
  uint *local_328;
  undefined8 local_320;
  longlong local_318;
  uint local_310 [2];
  uint *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  uint uStack_2f0;
  int iStack_2ec;
  undefined8 local_2e8;
  uint local_2e0;
  uint uStack_2dc;
  uint *puStack_2d8;
  undefined4 local_2d0;
  undefined8 uStack_2cc;
  int iStack_2c4;
  longlong local_2c0;
  uint *local_2b8;
  undefined8 uStack_2b0;
  uint *puStack_2a8;
  undefined8 uStack_2a0;
  uint uStack_298;
  int iStack_294;
  void *local_290;
  undefined8 local_288;
  void *local_280;
  undefined8 local_278;
  longlong *local_270;
  void *local_268;
  int local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248 [2];
  uint *local_238;
  uint *puStack_230;
  uint *puStack_228;
  undefined4 uStack_220;
  int iStack_21c;
  uint uStack_218;
  int iStack_214;
  undefined **local_208 [18];
  undefined8 local_178;
  uint **local_170;
  void *local_168;
  undefined **local_158 [18];
  longlong *local_c8;
  uint **local_c0;
  undefined8 local_b8;
  uint **local_b0;
  undefined8 local_a8;
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_318 = param_1;
  FUN_141682af0(param_1,&local_328,0);
  puVar14 = local_328;
  iVar17 = 0;
  iVar20 = 0;
  if ((int)local_320 != 0) {
    iVar20 = (int)local_320 + -1;
  }
  if (iVar20 != 0) {
    iVar5 = (int)param_2[1];
    iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar20;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    pvVar21 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar21,puVar14,(longlong)iVar20 * 2);
    *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar21) = 0;
  }
  if (local_328 != (uint *)0x0) {
    FMemory::Free();
  }
  iVar20 = (int)param_2[1];
  iVar5 = (2 - (uint)(iVar20 != 0)) + iVar20;
  *(int *)(param_2 + 1) = iVar5;
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar20);
  }
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
  *puVar1 = 0x5f;
  puVar1[1] = 0;
  local_280 = (void *)0x0;
  local_278 = 0;
  FName::ToString(&DAT_146afeea8 + (longlong)*(int *)(param_1 + 0x10) * 8,&local_280);
  pvVar2 = local_280;
  lVar12 = (longlong)(int)local_278;
  local_338 = (void *)0x0;
  local_330._0_4_ = (int)local_278;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_338,(2 - (uint)((int)local_278 != 0)) + (int)local_278,0);
  pvVar21 = local_338;
  _guard_xfg_dispatch_icall_nop(local_338,pvVar2,lVar12 * 2);
  iVar5 = (int)local_330;
  lVar12 = (longlong)(int)local_330;
  iVar20 = (2 - (uint)((int)local_330 != 0)) + (int)local_330;
  local_330 = CONCAT44(local_330._4_4_,iVar20);
  if (local_330._4_4_ < iVar20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,iVar5);
    pvVar21 = local_338;
    iVar20 = (int)local_330;
  }
  puVar1 = (undefined2 *)((longlong)pvVar21 + (lVar12 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar1 = 0x5f;
  puVar1[1] = 0;
  if ((iVar20 != 0) && (iVar20 = iVar20 + -1, iVar20 != 0)) {
    iVar5 = (int)param_2[1];
    iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar20;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
    *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar2) = 0;
  }
  if (pvVar21 != (void *)0x0) {
    FMemory::Free(pvVar21);
  }
  local_290 = (void *)0x0;
  local_288 = 0;
  GetFeatureLevelName(*(undefined4 *)(param_1 + 0x14),&local_290);
  pvVar2 = local_290;
  lVar12 = (longlong)(int)local_288;
  local_330._0_4_ = (int)local_288;
  iVar4 = 0;
  local_338 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_338,(2 - (uint)((int)local_288 != 0)) + (int)local_288,0);
  pvVar21 = local_338;
  _guard_xfg_dispatch_icall_nop(local_338,pvVar2,lVar12 * 2);
  iVar5 = (int)local_330;
  lVar12 = (longlong)(int)local_330;
  iVar20 = (2 - (uint)((int)local_330 != 0)) + (int)local_330;
  local_330 = CONCAT44(local_330._4_4_,iVar20);
  if (local_330._4_4_ < iVar20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,iVar5);
    pvVar21 = local_338;
    iVar20 = (int)local_330;
  }
  puVar1 = (undefined2 *)((longlong)pvVar21 + (lVar12 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar1 = 0x5f;
  puVar1[1] = 0;
  iVar5 = 0;
  if ((iVar20 != 0) && (iVar20 = iVar20 + -1, iVar20 != 0)) {
    iVar7 = (int)param_2[1];
    iVar6 = (uint)(iVar7 == 0) + iVar20 + iVar7;
    *(int *)(param_2 + 1) = iVar6;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
    *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar2) = 0;
  }
  if (pvVar21 != (void *)0x0) {
    FMemory::Free(pvVar21);
  }
  lVar12 = local_318;
  FStaticParameterSet::AppendKeyString(local_318 + 0x20,param_2);
  pvVar21 = *(void **)(lVar12 + 0x60);
  iVar20 = *(int *)(lVar12 + 0x68) + -1;
  if (*(int *)(lVar12 + 0x68) == 0) {
    iVar20 = iVar5;
  }
  if (iVar20 != 0) {
    iVar7 = (int)param_2[1];
    iVar6 = (uint)(iVar7 == 0) + iVar20 + iVar7;
    *(int *)(param_2 + 1) = iVar6;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
    *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar2) = 0;
    lVar12 = local_318;
  }
  iVar20 = (int)param_2[1];
  iVar7 = (2 - (uint)(iVar20 != 0)) + iVar20;
  *(int *)(param_2 + 1) = iVar7;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar20);
  }
  local_338 = (void *)0x0;
  local_330 = 0;
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
  *puVar1 = 0x5f;
  puVar1[1] = 0;
  FString::AppendInt(&local_338,*(undefined4 *)(lVar12 + 0x18));
  pvVar21 = local_338;
  iVar20 = iVar5;
  if ((int)local_330 != 0) {
    iVar20 = (int)local_330 + -1;
  }
  if (iVar20 != 0) {
    iVar7 = (int)param_2[1];
    iVar6 = (uint)(iVar7 == 0) + iVar20 + iVar7;
    *(int *)(param_2 + 1) = iVar6;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
    *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar2) = 0;
    lVar12 = local_318;
  }
  if (local_338 != (void *)0x0) {
    FMemory::Free();
  }
  iVar20 = (int)param_2[1];
  iVar7 = (2 - (uint)(iVar20 != 0)) + iVar20;
  *(int *)(param_2 + 1) = iVar7;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar20);
  }
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
  *puVar1 = 0x5f;
  puVar1[1] = 0;
  if (0 < *(int *)(lVar12 + 0x78)) {
    do {
      FUN_141682af0((longlong)iVar17 * 0x10 + *(longlong *)(lVar12 + 0x70),&local_328,0);
      puVar14 = local_328;
      iVar20 = iVar5;
      if ((int)local_320 != 0) {
        iVar20 = (int)local_320 + -1;
      }
      if (iVar20 != 0) {
        iVar7 = (int)param_2[1];
        iVar6 = (uint)(iVar7 == 0) + iVar20 + iVar7;
        *(int *)(param_2 + 1) = iVar6;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        pvVar21 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar21,puVar14,(longlong)iVar20 * 2);
        *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar21) = 0;
        lVar12 = local_318;
      }
      if (local_328 != (uint *)0x0) {
        FMemory::Free();
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar12 + 0x78));
  }
  iVar20 = (int)param_2[1];
  iVar17 = (2 - (uint)(iVar20 != 0)) + iVar20;
  *(int *)(param_2 + 1) = iVar17;
  if (*(int *)((longlong)param_2 + 0xc) < iVar17) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar20);
  }
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
  *puVar1 = 0x5f;
  puVar1[1] = 0;
  iVar20 = iVar4;
  if (0 < *(int *)(lVar12 + 0x88)) {
    do {
      FUN_141682af0((longlong)iVar20 * 0x10 + *(longlong *)(lVar12 + 0x80),&local_328,0);
      puVar14 = local_328;
      iVar17 = iVar5;
      if ((int)local_320 != 0) {
        iVar17 = (int)local_320 + -1;
      }
      if (iVar17 != 0) {
        iVar7 = (int)param_2[1];
        iVar6 = (uint)(iVar7 == 0) + iVar17 + iVar7;
        *(int *)(param_2 + 1) = iVar6;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        pvVar21 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar21,puVar14,(longlong)iVar17 * 2);
        *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar21) = 0;
        lVar12 = local_318;
      }
      if (local_328 != (uint *)0x0) {
        FMemory::Free();
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(lVar12 + 0x88));
  }
  puVar14 = (uint *)CONCAT44(local_2f8._4_4_,(undefined4)local_2f8);
  local_68 = 0xffffffff;
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (0 < *(int *)(lVar12 + 0xa8)) {
    local_2c0 = 0;
    do {
      iVar20 = (int)param_2[1];
      plVar18 = (longlong *)(*(longlong *)(lVar12 + 0xa0) + local_2c0);
      iVar17 = (2 - (uint)(iVar20 != 0)) + iVar20;
      *(int *)(param_2 + 1) = iVar17;
      local_2f8 = puVar14;
      if (*(int *)((longlong)param_2 + 0xc) < iVar17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar20);
      }
      lVar12 = -1;
      puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
      *puVar1 = 0x5f;
      puVar1[1] = 0;
      pvVar21 = *(void **)(*plVar18 + 0x10);
      do {
        lVar12 = lVar12 + 1;
      } while (*(short *)((longlong)pvVar21 + lVar12 * 2) != 0);
      iVar20 = (int)lVar12;
      if (iVar20 != 0) {
        iVar17 = (int)param_2[1];
        iVar5 = (uint)(iVar17 == 0) + iVar20 + iVar17;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
        }
        pvVar2 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
        *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar2) = 0;
      }
      BytesToHex(&local_328,(longlong)plVar18 + 0xc,0x14);
      puVar14 = local_328;
      if (((int)local_320 != 0) && (iVar20 = (int)local_320 + -1, iVar20 != 0)) {
        iVar17 = (int)param_2[1];
        iVar5 = (uint)(iVar17 == 0) + iVar20 + iVar17;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
        }
        pvVar21 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar21,puVar14,(longlong)iVar20 * 2);
        *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar21) = 0;
      }
      if (puVar14 != (uint *)0x0) {
        FMemory::Free(puVar14);
      }
      FSerializationHistory::AppendKeyString(*plVar18 + 0xb0,param_2);
      lVar12 = *plVar18;
      local_308 = (uint *)(lVar12 + 0xe0);
      uStack_2dc = 1;
      iVar20 = *(int *)(lVar12 + 0x108);
      puStack_2d8 = (uint *)(lVar12 + 0xf0);
      uVar15 = 0;
      local_2e0 = 0;
      uStack_2cc = 0;
      if (iVar20 != 0) {
        puVar14 = *(uint **)(lVar12 + 0x100);
        if (*(uint **)(lVar12 + 0x100) == (uint *)0x0) {
          puVar14 = puStack_2d8;
        }
        uVar10 = *puVar14;
        local_2e0 = 0;
        while (uVar10 == 0) {
          lVar12 = (longlong)(int)local_2e0;
          uVar15 = uVar15 + 0x20;
          uVar10 = local_2e0 + 1;
          uStack_2cc = (ulonglong)uVar15 << 0x20;
          bVar3 = (int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_2e0;
          local_2e0 = uVar10;
          if (bVar3) goto LAB_1425847b1;
          uVar10 = puVar14[lVar12 + 1];
        }
        uStack_2dc = -uVar10 & uVar10;
        iVar17 = 0x1f;
        if (uStack_2dc != 0) {
          for (; uStack_2dc >> iVar17 == 0; iVar17 = iVar17 + -1) {
          }
        }
        if (uStack_2dc == 0) {
          iVar17 = 0x20;
        }
        else {
          iVar17 = 0x1f - iVar17;
        }
        iVar17 = (uVar15 - iVar17) + 0x1f;
        uStack_2cc._4_4_ = (uint)((ulonglong)uStack_2cc >> 0x20);
        uStack_2cc = CONCAT44(uStack_2cc._4_4_,iVar17);
        if (iVar20 < iVar17) {
LAB_1425847b1:
          uStack_2cc = CONCAT44(uStack_2cc._4_4_,iVar20);
        }
      }
      local_2d0 = 0xffffffff;
      uStack_300 = (uint *)CONCAT44(uStack_2dc,local_2e0);
      uStack_2a0 = CONCAT44((int)uStack_2cc,0xffffffff);
      uStack_298 = uStack_2cc._4_4_;
      iStack_294 = iStack_2c4;
      local_2e8 = CONCAT44(iStack_2c4,uStack_2cc._4_4_);
      uStack_2f0 = 0xffffffff;
      iStack_2ec = (int)uStack_2cc;
      local_2b8 = local_308;
      uStack_2b0 = uStack_300;
      puStack_2a8 = puStack_2d8;
      puVar14 = puStack_2d8;
      local_2f8 = puStack_2d8;
      if ((int)uStack_2cc < iVar20) {
        do {
          local_338 = (void *)(*(longlong *)local_308 + (longlong)iStack_2ec * 0x20);
          local_330 = (longlong)local_338 + 8;
          FUN_1419cf0d0(local_98,local_310,&local_338,0);
          uStack_2f0 = uStack_2f0 & ~uStack_300._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_300);
          puVar14 = local_2f8;
        } while (iStack_2ec < (int)local_2f8[6]);
      }
      iVar4 = iVar4 + 1;
      local_2c0 = local_2c0 + 0x20;
      lVar12 = local_318;
    } while (iVar4 < *(int *)(local_318 + 0xa8));
  }
  iVar20 = 0;
  if (0 < *(int *)(lVar12 + 0xb8)) {
    local_2c0 = 0;
    do {
      iVar17 = (int)param_2[1];
      plVar18 = (longlong *)(*(longlong *)(lVar12 + 0xb0) + local_2c0);
      iVar5 = (2 - (uint)(iVar17 != 0)) + iVar17;
      *(int *)(param_2 + 1) = iVar5;
      local_2f8 = puVar14;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
      }
      lVar12 = -1;
      puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
      *puVar1 = 0x5f;
      puVar1[1] = 0;
      pvVar21 = *(void **)*plVar18;
      do {
        lVar12 = lVar12 + 1;
      } while (*(short *)((longlong)pvVar21 + lVar12 * 2) != 0);
      iVar17 = (int)lVar12;
      if (iVar17 != 0) {
        iVar5 = (int)param_2[1];
        iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar17;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        pvVar2 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar17 * 2);
        *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar2) = 0;
      }
      BytesToHex(&local_328,plVar18 + 1,0x14);
      _Src = local_328;
      if (((int)local_320 != 0) && (iVar17 = (int)local_320 + -1, iVar17 != 0)) {
        iVar5 = (int)param_2[1];
        iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar17;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        pvVar21 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar21,_Src,(longlong)iVar17 * 2);
        *(undefined2 *)((longlong)pvVar21 + (longlong)iVar17 * 2) = 0;
      }
      puVar14 = local_2f8;
      if (_Src != (uint *)0x0) {
        FMemory::Free(_Src);
        puVar14 = local_2f8;
      }
      uVar19 = 0;
      plVar13 = *(longlong **)(*plVar18 + 0x10);
      uVar8 = (ulonglong)*(int *)(*plVar18 + 0x18);
      uVar22 = uVar8 & 0x1fffffffffffffff;
      if (plVar13 + uVar8 < plVar13) {
        uVar22 = uVar19;
      }
      uVar8 = uVar19;
      if (uVar22 != 0) {
        do {
          lVar12 = *plVar13;
          local_308 = (uint *)(lVar12 + 0xe0);
          uVar15 = 0;
          local_2e0 = 0;
          iVar17 = *(int *)(lVar12 + 0x108);
          puStack_2d8 = (uint *)(lVar12 + 0xf0);
          uStack_2dc = 1;
          uStack_2cc = 0;
          if (iVar17 != 0) {
            puVar14 = *(uint **)(lVar12 + 0x100);
            if (*(uint **)(lVar12 + 0x100) == (uint *)0x0) {
              puVar14 = puStack_2d8;
            }
            uVar10 = *puVar14;
            uVar11 = uVar19;
            uVar16 = uVar19;
            while (uVar10 == 0) {
              iVar5 = (int)uVar11;
              uVar15 = (int)uVar16 + 0x20;
              uVar16 = (ulonglong)uVar15;
              local_2e0 = iVar5 + 1;
              uVar11 = (ulonglong)local_2e0;
              uStack_2cc = (ulonglong)uVar15 << 0x20;
              if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5)
              goto LAB_142584ad1;
              uVar10 = puVar14[(longlong)iVar5 + 1];
            }
            uStack_2dc = -uVar10 & uVar10;
            iVar5 = 0x1f;
            if (uStack_2dc != 0) {
              for (; uStack_2dc >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            if (uStack_2dc == 0) {
              iVar5 = 0x20;
            }
            else {
              iVar5 = 0x1f - iVar5;
            }
            iVar5 = (uVar15 - iVar5) + 0x1f;
            uStack_2cc._4_4_ = (uint)((ulonglong)uStack_2cc >> 0x20);
            uStack_2cc = CONCAT44(uStack_2cc._4_4_,iVar5);
            if (iVar17 < iVar5) {
LAB_142584ad1:
              uStack_2cc = CONCAT44(uStack_2cc._4_4_,iVar17);
            }
          }
          local_2d0 = 0xffffffff;
          uStack_300 = (uint *)CONCAT44(uStack_2dc,local_2e0);
          uStack_2a0 = CONCAT44((int)uStack_2cc,0xffffffff);
          uStack_298 = uStack_2cc._4_4_;
          iStack_294 = iStack_2c4;
          local_2e8 = CONCAT44(iStack_2c4,uStack_2cc._4_4_);
          uStack_2f0 = 0xffffffff;
          iStack_2ec = (int)uStack_2cc;
          local_2b8 = local_308;
          uStack_2b0 = uStack_300;
          puStack_2a8 = puStack_2d8;
          puVar14 = puStack_2d8;
          local_2f8 = puStack_2d8;
          if ((int)uStack_2cc < iVar17) {
            do {
              local_338 = (void *)(*(longlong *)local_308 + (longlong)iStack_2ec * 0x20);
              local_330 = (longlong)local_338 + 8;
              FUN_1419cf0d0(local_98,local_310,&local_338,0);
              uStack_2f0 = uStack_2f0 & ~uStack_300._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_300);
              puVar14 = local_2f8;
            } while (iStack_2ec < (int)local_2f8[6]);
          }
          plVar13 = plVar13 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar22);
      }
      iVar20 = iVar20 + 1;
      local_2c0 = local_2c0 + 0x20;
      lVar12 = local_318;
    } while (iVar20 < *(int *)(local_318 + 0xb8));
  }
  local_2f8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
  local_310[0] = 0;
  if (0 < *(int *)(lVar12 + 200)) {
    local_338 = (void *)0x0;
    do {
      pvVar21 = local_338;
      iVar20 = (int)param_2[1];
      iVar17 = (2 - (uint)(iVar20 != 0)) + iVar20;
      *(int *)(param_2 + 1) = iVar17;
      local_2f8 = puVar14;
      if (*(int *)((longlong)param_2 + 0xc) < iVar17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar20);
      }
      lVar12 = -1;
      puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
      *puVar1 = 0x5f;
      puVar1[1] = 0;
      plVar18 = (longlong *)(*(longlong *)(local_318 + 0xc0) + (longlong)pvVar21);
      pvVar21 = *(void **)(*plVar18 + 0x10);
      do {
        lVar12 = lVar12 + 1;
      } while (*(short *)((longlong)pvVar21 + lVar12 * 2) != 0);
      iVar20 = (int)lVar12;
      local_270 = plVar18;
      if (iVar20 != 0) {
        iVar17 = (int)param_2[1];
        iVar5 = (uint)(iVar17 == 0) + iVar17 + iVar20;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
        }
        pvVar2 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar20 * 2) = 0;
      }
      BytesToHex(&local_268,plVar18 + 1,0x14);
      pvVar21 = local_268;
      if ((local_260 != 0) && (iVar20 = local_260 + -1, iVar20 != 0)) {
        iVar17 = (int)param_2[1];
        iVar5 = (uint)(iVar17 == 0) + iVar17 + iVar20;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
        }
        pvVar2 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar20 * 2) = 0;
      }
      if (pvVar21 != (void *)0x0) {
        FMemory::Free(pvVar21);
      }
      lVar12 = 0;
      do {
        lVar23 = *plVar18 + lVar12;
        local_328 = (uint *)0x0;
        local_320 = 0;
        FString::AppendInt(&local_328,*(undefined4 *)(lVar23 + 0xd0));
        puVar14 = local_328;
        if ((int)local_320 == 0) {
          iVar20 = 0;
        }
        else {
          iVar20 = (int)local_320 + -1;
        }
        if (iVar20 != 0) {
          iVar17 = (int)param_2[1];
          iVar5 = (uint)(iVar17 == 0) + iVar20 + iVar17;
          *(int *)(param_2 + 1) = iVar5;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
          }
          pvVar21 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar21,puVar14,(longlong)iVar20 * 2);
          *(undefined2 *)((longlong)pvVar21 + (longlong)iVar20 * 2) = 0;
        }
        if (local_328 != (uint *)0x0) {
          FMemory::Free(local_328);
        }
        puVar9 = (undefined8 *)
                 BytesToHex(local_248,*(undefined8 *)(lVar23 + 0xc0),*(int *)(lVar23 + 200) * 4);
        pvVar21 = (void *)*puVar9;
        iVar20 = *(int *)(puVar9 + 1) + -1;
        if (*(int *)(puVar9 + 1) == 0) {
          iVar20 = 0;
        }
        if (iVar20 != 0) {
          iVar17 = (int)param_2[1];
          iVar5 = (uint)(iVar17 == 0) + iVar20 + iVar17;
          *(int *)(param_2 + 1) = iVar5;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
          }
          pvVar2 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
          *(undefined2 *)((longlong)pvVar2 + (longlong)iVar20 * 2) = 0;
        }
        if (local_248[0] != 0) {
          FMemory::Free();
        }
        puVar9 = (undefined8 *)
                 BytesToHex(&local_2e0,*(undefined8 *)(lVar23 + 0xd8),*(int *)(lVar23 + 0xe0) * 4);
        pvVar21 = (void *)*puVar9;
        iVar20 = *(int *)(puVar9 + 1) + -1;
        if (*(int *)(puVar9 + 1) == 0) {
          iVar20 = 0;
        }
        if (iVar20 != 0) {
          iVar17 = (int)param_2[1];
          iVar5 = (uint)(iVar17 == 0) + iVar20 + iVar17;
          *(int *)(param_2 + 1) = iVar5;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
          }
          pvVar2 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
          *(undefined2 *)((longlong)pvVar2 + (longlong)iVar20 * 2) = 0;
        }
        if (CONCAT44(uStack_2dc,local_2e0) != 0) {
          FMemory::Free();
        }
        lVar12 = lVar12 + 0x28;
        plVar18 = local_270;
      } while (lVar12 < 0xf0);
      lVar12 = *local_270;
      puVar14 = (uint *)(lVar12 + 0x68);
      local_308 = (uint *)0x100000000;
      local_2f8._0_4_ = 0xffffffff;
      local_2f8._4_4_ = 0;
      uStack_2f0 = 0;
      uStack_300 = (uint *)(lVar12 + 0x78);
      if (*(int *)(lVar12 + 0x90) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_308);
      }
      uStack_220 = (undefined4)local_2f8;
      iStack_21c = local_2f8._4_4_;
      uStack_218 = uStack_2f0;
      iStack_214 = iStack_2ec;
      puStack_230 = local_308;
      puStack_228 = uStack_300;
      uStack_2a0 = CONCAT44(local_2f8._4_4_,(undefined4)local_2f8);
      uStack_2b0 = local_308;
      uStack_298 = uStack_2f0;
      iStack_294 = iStack_2ec;
      puStack_2a8 = uStack_300;
      iVar20 = local_2f8._4_4_;
      local_2b8 = puVar14;
      local_238 = puVar14;
      if (local_2f8._4_4_ < (int)uStack_300[6]) {
        do {
          local_258 = *(longlong *)local_2b8 + (longlong)iVar20 * 0x20;
          local_250 = local_258 + 8;
          FUN_1419cf0d0(local_98,&local_2c0,&local_258,0);
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(uint)uStack_2a0 & ~uStack_2b0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2b0);
          iVar20 = uStack_2a0._4_4_;
        } while (uStack_2a0._4_4_ < (int)puStack_2a8[6]);
      }
      puVar14 = (uint *)CONCAT44(local_2f8._4_4_,(undefined4)local_2f8);
      local_310[0] = local_310[0] + 1;
      local_338 = (void *)((longlong)local_338 + 0x20);
      lVar12 = local_318;
    } while ((int)local_310[0] < *(int *)(local_318 + 200));
  }
  local_328 = (uint *)0x0;
  local_320 = 0;
  local_308 = (uint *)0x0;
  uStack_300 = (uint *)0x0;
  local_2f8._0_4_ = 0;
  uStack_2f0 = 0;
  iStack_2ec = 0;
  local_2e8 = 0;
  local_338 = (void *)0x0;
  FArchive::FArchive(local_208);
  local_178 = 0;
  local_208[0] = &PTR_FUN_143f4a100;
  local_170 = &local_328;
  local_168 = local_338;
  FArchive::SetIsSaving(local_208,1);
  FArchive::SetIsPersistent(local_208,1);
  FArchiveProxy::FArchiveProxy(local_158,local_208);
  local_c0 = &local_308;
  local_b8 = 0;
  local_b0 = &local_308;
  local_158[0] = &PTR_FUN_144d8dfd8;
  local_a8 = (*(code *)local_208[0][0x12])(local_208);
  FUN_141a0caf0(local_158,local_98);
  FSerializationHistory::AppendKeyString(&local_308,param_2);
  local_158[0] = &PTR_FUN_144d8dfd8;
  (**(code **)(*local_c8 + 0xa8))(local_c8,local_a8);
  FArchive::~FArchive(local_158);
  FArchive::~FArchive(local_208);
  if (CONCAT44(iStack_2ec,uStack_2f0) != 0) {
    FMemory::Free();
  }
  if (local_308 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_328 != (uint *)0x0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)BytesToHex(&local_2e0,lVar12 + 0xd0,0x14);
  pvVar21 = (void *)*puVar9;
  iVar20 = *(int *)(puVar9 + 1) + -1;
  if (*(int *)(puVar9 + 1) == 0) {
    iVar20 = 0;
  }
  if (iVar20 != 0) {
    iVar17 = (int)param_2[1];
    iVar5 = (uint)(iVar17 == 0) + iVar20 + iVar17;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar20 * 2) = 0;
    lVar12 = local_318;
  }
  if (CONCAT44(uStack_2dc,local_2e0) != 0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)BytesToHex(&local_2e0,lVar12 + 0xe4,0x14);
  pvVar21 = (void *)*puVar9;
  iVar20 = *(int *)(puVar9 + 1) + -1;
  if (*(int *)(puVar9 + 1) == 0) {
    iVar20 = 0;
  }
  if (iVar20 != 0) {
    iVar17 = (int)param_2[1];
    iVar5 = (uint)(iVar17 == 0) + iVar20 + iVar17;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar21,(longlong)iVar20 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar20 * 2) = 0;
  }
  if (CONCAT44(uStack_2dc,local_2e0) != 0) {
    FMemory::Free();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_98,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (local_290 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_280 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142585330 AppendKeyString body=764 status=ok
// SIG undefined AppendKeyString(void)

void FStaticMaterialLayersParameter::AppendKeyString(longlong param_1,longlong *param_2)

{
  size_t _Size;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  void *pvVar12;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  FUN_141682af0(param_1 + 0x54,&local_68,0);
  plVar2 = (longlong *)FUN_1425a33e0(param_1,local_58);
  pvVar10 = local_68;
  pvVar6 = (void *)0x0;
  iVar7 = (int)plVar2[1];
  iVar1 = 0;
  iVar11 = (int)local_60;
  if (iVar7 < 2) {
    iVar9 = local_60._4_4_;
    local_68 = (void *)0x0;
    local_60 = 0;
  }
  else {
    iVar4 = iVar1;
    if ((int)local_60 != 0) {
      iVar4 = (int)local_60 + -1;
    }
    if ((iVar7 != 0) || (iVar11 = 1, iVar4 == 0)) {
      iVar11 = iVar1;
    }
    local_78 = (void *)*plVar2;
    *plVar2 = 0;
    local_6c = *(int *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    local_70 = iVar7;
    if (local_6c < iVar7 + iVar11 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    }
    pvVar12 = local_68;
    iVar7 = local_70;
    pvVar10 = local_78;
    iVar11 = local_70;
    iVar9 = local_6c;
    if (iVar4 != 0) {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar4;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar7);
      }
      iVar9 = local_6c;
      iVar11 = local_70;
      pvVar10 = local_78;
      pvVar8 = (void *)((lVar5 - (ulonglong)(iVar7 != 0)) * 2 + (longlong)local_78);
      ::_guard_xfg_dispatch_icall_nop(pvVar8,pvVar12,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar8) = 0;
    }
  }
  puVar3 = (undefined8 *)FUN_14256e320(param_1 + 0x10,local_48);
  if (iVar11 < 2) {
    pvVar12 = (void *)*puVar3;
    *puVar3 = 0;
    iVar11 = *(int *)(puVar3 + 1);
    puVar3[1] = 0;
    pvVar6 = pvVar10;
  }
  else {
    iVar7 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar7 = iVar1;
    }
    if ((iVar11 != 0) || (iVar4 = 1, iVar7 == 0)) {
      iVar4 = iVar1;
    }
    local_78 = pvVar10;
    local_70 = iVar11;
    local_6c = iVar9;
    if (iVar9 < iVar11 + iVar7 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    }
    iVar1 = local_70;
    pvVar10 = (void *)*puVar3;
    pvVar12 = local_78;
    iVar11 = local_70;
    if (iVar7 != 0) {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar7;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar1);
      }
      iVar11 = local_70;
      pvVar12 = local_78;
      pvVar8 = (void *)((longlong)local_78 + (lVar5 - (ulonglong)(iVar1 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar8,pvVar10,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar8) = 0;
    }
  }
  if ((iVar11 != 0) && (iVar11 + -1 != 0)) {
    iVar7 = (int)param_2[1];
    iVar1 = (uint)(iVar7 == 0) + iVar11 + -1 + iVar7;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    pvVar10 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _Size = (longlong)iVar11 * 2 - 2;
    ::_guard_xfg_dispatch_icall_nop(pvVar10,pvVar12,_Size);
    *(undefined2 *)(_Size + (longlong)pvVar10) = 0;
  }
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142585630 AppendKeyString body=3670 status=ok
// SIG undefined AppendKeyString(void)

void FStaticParameterSet::AppendKeyString(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  size_t sVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  longlong lVar10;
  void *pvVar11;
  void *pvVar12;
  short *_Src;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_res18;
  void *local_res20;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  void *local_68;
  longlong local_60 [4];
  
  pvVar8 = (void *)0x0;
  iVar6 = 0;
  local_res18 = 0;
  iVar14 = 0;
  if (0 < (int)param_1[1]) {
    local_res20 = (void *)0x0;
    do {
      lVar10 = *param_1 + (longlong)local_res20;
      local_118 = (void *)0x0;
      local_110 = 0;
      FString::AppendInt(&local_118,*(undefined1 *)(lVar10 + 0x10));
      FUN_141682af0(lVar10 + 0x14,&local_108,0);
      puVar5 = (ulonglong *)FUN_1425a33e0(lVar10,&local_d8);
      pvVar11 = local_108;
      iVar13 = (int)local_100;
      if ((int)puVar5[1] < 2) {
        iVar15 = local_100._4_4_;
        local_108 = (void *)0x0;
        local_100 = 0;
      }
      else {
        iVar4 = iVar6;
        if ((int)local_100 != 0) {
          iVar4 = (int)local_100 + -1;
        }
        if (((int)puVar5[1] != 0) || (iVar13 = 1, iVar4 == 0)) {
          iVar13 = iVar6;
        }
        local_c8 = (void *)*puVar5;
        *puVar5 = 0;
        local_c0._0_4_ = (int)puVar5[1];
        local_c0._4_4_ = *(int *)((longlong)puVar5 + 0xc);
        puVar5[1] = 0;
        iVar3 = (int)local_c0;
        if (local_c0._4_4_ < iVar13 + iVar4 + (int)local_c0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
          iVar3 = (int)local_c0;
        }
        pvVar12 = local_108;
        pvVar11 = local_c8;
        iVar13 = iVar3;
        iVar15 = local_c0._4_4_;
        if (iVar4 != 0) {
          local_c0._0_4_ = iVar4 + (uint)(iVar3 == 0) + iVar3;
          if (local_c0._4_4_ < (int)local_c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar3);
          }
          iVar15 = local_c0._4_4_;
          iVar13 = (int)local_c0;
          pvVar11 = local_c8;
          pvVar9 = (void *)(((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2 + (longlong)local_c8);
          ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar12,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)pvVar9 + (longlong)iVar4 * 2) = 0;
        }
        local_c8 = (void *)0x0;
        local_c0 = 0;
      }
      pvVar12 = local_118;
      iVar4 = (int)local_110;
      if (iVar13 < 2) {
        local_118 = (void *)0x0;
        local_110 = 0;
      }
      else {
        iVar3 = iVar14;
        if ((int)local_110 != 0) {
          iVar3 = (int)local_110 + -1;
        }
        if ((iVar13 != 0) || (iVar4 = 1, iVar3 == 0)) {
          iVar4 = iVar6;
        }
        local_128 = pvVar11;
        local_120._4_4_ = iVar15;
        if (iVar15 < iVar4 + iVar13 + iVar3) {
          local_120._0_4_ = iVar13;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128);
          iVar13 = (int)local_120;
        }
        local_98 = local_118;
        pvVar12 = local_128;
        iVar4 = iVar13;
        if (iVar3 != 0) {
          iVar4 = iVar3 + (uint)(iVar13 == 0) + iVar13;
          local_120 = CONCAT44(local_120._4_4_,iVar4);
          if (local_120._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,iVar13);
            iVar4 = (int)local_120;
          }
          pvVar12 = local_128;
          pvVar11 = (void *)((longlong)local_128 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2
                            );
          ::_guard_xfg_dispatch_icall_nop(pvVar11,local_98,(longlong)iVar3 * 2);
          *(undefined2 *)((longlong)pvVar11 + (longlong)iVar3 * 2) = 0;
        }
        local_128 = (void *)0x0;
        local_120 = 0;
        pvVar11 = pvVar8;
      }
      if ((iVar4 != 0) && (iVar4 + -1 != 0)) {
        iVar13 = (int)param_2[1];
        iVar3 = (uint)(iVar13 == 0) + iVar4 + -1 + iVar13;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
        }
        pvVar9 = (void *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
        sVar1 = (longlong)iVar4 * 2 - 2;
        ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar12,sVar1);
        *(undefined2 *)((longlong)pvVar9 + sVar1) = 0;
      }
      if (pvVar12 != (void *)0x0) {
        FMemory::Free(pvVar12);
      }
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      local_res18 = local_res18 + 1;
      local_res20 = (void *)((longlong)local_res20 + 0x28);
    } while (local_res18 < (int)param_1[1]);
  }
  local_res18 = 0;
  if (0 < (int)param_1[3]) {
    local_98 = (void *)0x0;
    do {
      local_108 = (void *)0x0;
      lVar10 = param_1[2] + (longlong)local_98 * 0x28;
      local_100 = 0;
      FString::AppendInt(&local_108,*(undefined1 *)(param_1[2] + 0x13 + (longlong)local_98 * 0x28));
      local_118 = (void *)0x0;
      local_110 = 0;
      FString::AppendInt(&local_118,*(undefined1 *)(lVar10 + 0x12));
      local_e8 = (void *)0x0;
      local_e0 = 0;
      FString::AppendInt(&local_e8,*(undefined1 *)(lVar10 + 0x11));
      local_80 = (void *)0x0;
      local_78 = 0;
      FString::AppendInt(&local_80,*(undefined1 *)(lVar10 + 0x10));
      FUN_141682af0(lVar10 + 0x18,&local_d8,0);
      puVar5 = (ulonglong *)FUN_1425a33e0(lVar10,local_60);
      pvVar11 = local_d8;
      iVar13 = (int)local_d0;
      if ((int)puVar5[1] < 2) {
        iVar15 = local_d0._4_4_;
        local_68 = local_d8;
        local_d8 = (void *)0x0;
        local_d0 = 0;
      }
      else {
        iVar4 = iVar6;
        if ((int)local_d0 != 0) {
          iVar4 = (int)local_d0 + -1;
        }
        if (((int)puVar5[1] != 0) || (iVar13 = 1, iVar4 == 0)) {
          iVar13 = iVar14;
        }
        local_b8 = (void *)*puVar5;
        *puVar5 = 0;
        local_b0._0_4_ = (int)puVar5[1];
        local_b0._4_4_ = *(int *)((longlong)puVar5 + 0xc);
        puVar5[1] = 0;
        iVar3 = (int)local_b0;
        if (local_b0._4_4_ < iVar4 + (int)local_b0 + iVar13) {
          local_68 = local_b8;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
          iVar3 = (int)local_b0;
        }
        pvVar12 = local_d8;
        pvVar11 = local_b8;
        iVar13 = iVar3;
        iVar15 = local_b0._4_4_;
        local_68 = local_b8;
        if (iVar4 != 0) {
          local_b0._0_4_ = (uint)(iVar3 == 0) + iVar4 + iVar3;
          if (local_b0._4_4_ < (int)local_b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar3);
            local_68 = local_b8;
          }
          pvVar11 = local_68;
          iVar15 = local_b0._4_4_;
          iVar13 = (int)local_b0;
          pvVar9 = (void *)(((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2 + (longlong)local_68);
          local_b8 = local_68;
          ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar12,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)pvVar9 + (longlong)iVar4 * 2) = 0;
        }
        local_b8 = (void *)0x0;
        local_b0 = 0;
      }
      pvVar12 = local_80;
      iVar4 = (int)local_78;
      if (iVar13 < 2) {
        iVar15 = local_78._4_4_;
        local_70 = local_80;
        local_80 = (void *)0x0;
        local_78 = 0;
      }
      else {
        iVar3 = iVar6;
        if ((int)local_78 != 0) {
          iVar3 = (int)local_78 + -1;
        }
        if ((iVar13 != 0) || (iVar4 = 1, iVar3 == 0)) {
          iVar4 = iVar14;
        }
        local_68 = (void *)0x0;
        local_a8 = pvVar11;
        local_a0._4_4_ = iVar15;
        if (iVar15 < iVar3 + iVar13 + iVar4) {
          local_70 = pvVar11;
          local_a0._0_4_ = iVar13;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
          iVar13 = (int)local_a0;
        }
        pvVar11 = local_80;
        pvVar12 = local_a8;
        iVar4 = iVar13;
        iVar15 = local_a0._4_4_;
        local_70 = local_a8;
        if (iVar3 != 0) {
          local_a0._0_4_ = (uint)(iVar13 == 0) + iVar3 + iVar13;
          if (local_a0._4_4_ < (int)local_a0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar13);
            local_70 = local_a8;
          }
          pvVar12 = local_70;
          iVar15 = local_a0._4_4_;
          iVar4 = (int)local_a0;
          pvVar9 = (void *)(((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2 + (longlong)local_70);
          local_a8 = local_70;
          ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar11,(longlong)iVar3 * 2);
          *(undefined2 *)((longlong)pvVar9 + (longlong)iVar3 * 2) = 0;
        }
        local_a8 = (void *)0x0;
        local_a0 = 0;
      }
      iVar13 = (int)local_e0;
      if (iVar4 < 2) {
        iVar15 = local_e0._4_4_;
        local_res20 = local_e8;
        local_e8 = (void *)0x0;
        local_e0 = 0;
      }
      else {
        iVar3 = iVar6;
        if ((int)local_e0 != 0) {
          iVar3 = (int)local_e0 + -1;
        }
        if ((iVar4 != 0) || (iVar13 = 1, iVar3 == 0)) {
          iVar13 = iVar14;
        }
        local_70 = (void *)0x0;
        local_f8 = pvVar12;
        local_f0._4_4_ = iVar15;
        if (iVar15 < iVar4 + iVar3 + iVar13) {
          local_f0._0_4_ = iVar4;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
          iVar4 = (int)local_f0;
        }
        pvVar11 = local_e8;
        iVar13 = iVar4;
        iVar15 = local_f0._4_4_;
        local_res20 = local_f8;
        if (iVar3 != 0) {
          local_f0._0_4_ = (uint)(iVar4 == 0) + iVar3 + iVar4;
          if (local_f0._4_4_ < (int)local_f0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar4);
          }
          iVar15 = local_f0._4_4_;
          iVar13 = (int)local_f0;
          local_res20 = local_f8;
          pvVar12 = (void *)((longlong)local_f8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(pvVar12,pvVar11,(longlong)iVar3 * 2);
          *(undefined2 *)((longlong)pvVar12 + (longlong)iVar3 * 2) = 0;
        }
        local_f8 = (void *)0x0;
        local_f0 = 0;
      }
      pvVar12 = local_118;
      pvVar11 = local_res20;
      iVar4 = (int)local_110;
      if (iVar13 < 2) {
        iVar15 = local_110._4_4_;
        local_118 = (void *)0x0;
        local_110 = 0;
      }
      else {
        iVar3 = iVar6;
        if ((int)local_110 != 0) {
          iVar3 = (int)local_110 + -1;
        }
        if ((iVar13 != 0) || (iVar4 = 1, iVar3 == 0)) {
          iVar4 = iVar6;
        }
        local_res20 = (void *)0x0;
        local_128 = pvVar11;
        local_120._4_4_ = iVar15;
        if (iVar15 < iVar13 + iVar3 + iVar4) {
          local_120._0_4_ = iVar13;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128);
          iVar13 = (int)local_120;
        }
        pvVar11 = local_118;
        pvVar12 = local_128;
        iVar4 = iVar13;
        iVar15 = local_120._4_4_;
        if (iVar3 != 0) {
          local_120._0_4_ = (uint)(iVar13 == 0) + iVar3 + iVar13;
          if (local_120._4_4_ < (int)local_120) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,iVar13);
          }
          iVar15 = local_120._4_4_;
          iVar4 = (int)local_120;
          pvVar12 = local_128;
          pvVar9 = (void *)(((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2 + (longlong)local_128)
          ;
          ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar11,(longlong)iVar3 * 2);
          *(undefined2 *)((longlong)pvVar9 + (longlong)iVar3 * 2) = 0;
        }
        local_128 = (void *)0x0;
        local_120 = 0;
      }
      pvVar11 = local_108;
      iVar13 = (int)local_100;
      if (iVar4 < 2) {
        local_108 = (void *)0x0;
        local_100 = 0;
      }
      else {
        iVar3 = iVar6;
        if ((int)local_100 != 0) {
          iVar3 = (int)local_100 + -1;
        }
        if ((iVar4 != 0) || (iVar13 = 1, iVar3 == 0)) {
          iVar13 = iVar6;
        }
        local_90 = pvVar12;
        local_88._4_4_ = iVar15;
        if (iVar15 < iVar13 + iVar3 + iVar4) {
          local_88._0_4_ = iVar4;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90);
          iVar4 = (int)local_88;
        }
        local_c8 = local_108;
        pvVar11 = local_90;
        iVar13 = iVar4;
        if (iVar3 != 0) {
          iVar13 = (uint)(iVar4 == 0) + iVar3 + iVar4;
          local_88 = CONCAT44(local_88._4_4_,iVar13);
          if (local_88._4_4_ < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,iVar4);
            iVar13 = (int)local_88;
          }
          pvVar11 = local_90;
          pvVar12 = (void *)((longlong)local_90 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(pvVar12,local_c8,(longlong)iVar3 * 2);
          *(undefined2 *)((longlong)pvVar12 + (longlong)iVar3 * 2) = 0;
        }
        local_90 = (void *)0x0;
        local_88 = 0;
        pvVar12 = pvVar8;
      }
      if ((iVar13 != 0) && (iVar13 + -1 != 0)) {
        iVar4 = (int)param_2[1];
        iVar3 = (uint)(iVar4 == 0) + iVar13 + -1 + iVar4;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        pvVar9 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        sVar1 = (longlong)iVar13 * 2 - 2;
        ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar11,sVar1);
        *(undefined2 *)((longlong)pvVar9 + sVar1) = 0;
      }
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      if (pvVar12 != (void *)0x0) {
        FMemory::Free(pvVar12);
      }
      if (local_res20 != (void *)0x0) {
        FMemory::Free(local_res20);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_80 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free();
      }
      local_res18 = local_res18 + 1;
      local_98 = (void *)((longlong)local_98 + 1);
    } while (local_res18 < (int)param_1[3]);
  }
  local_res18 = 0;
  if (0 < (int)param_1[5]) {
    local_res20 = (void *)0x0;
    do {
      pvVar11 = (void *)(param_1[4] + (longlong)local_res20);
      local_118 = (void *)0x0;
      local_110 = 0;
      local_98 = pvVar11;
      FString::AppendInt(&local_118,*(undefined4 *)((longlong)pvVar11 + 0x24));
      FUN_141682af0((longlong)pvVar11 + 0x14,&local_e8,0);
      puVar5 = (ulonglong *)FUN_1425a33e0(pvVar11,local_60);
      pvVar11 = local_e8;
      iVar14 = (int)local_e0;
      if ((int)puVar5[1] < 2) {
        iVar3 = local_e0._4_4_;
        local_e8 = (void *)0x0;
        local_e0 = 0;
      }
      else {
        iVar13 = iVar6;
        if ((int)local_e0 != 0) {
          iVar13 = (int)local_e0 + -1;
        }
        if (((int)puVar5[1] != 0) || (iVar14 = 1, iVar13 == 0)) {
          iVar14 = iVar6;
        }
        local_128 = (void *)*puVar5;
        *puVar5 = 0;
        local_120._0_4_ = (int)puVar5[1];
        local_120._4_4_ = *(int *)((longlong)puVar5 + 0xc);
        puVar5[1] = 0;
        iVar4 = (int)local_120;
        if (local_120._4_4_ < (int)local_120 + iVar14 + iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128);
          iVar4 = (int)local_120;
        }
        pvVar12 = local_e8;
        pvVar11 = local_128;
        iVar14 = iVar4;
        iVar3 = local_120._4_4_;
        if (iVar13 != 0) {
          local_120._0_4_ = iVar4 + (uint)(iVar4 == 0) + iVar13;
          if (local_120._4_4_ < (int)local_120) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,iVar4);
          }
          iVar3 = local_120._4_4_;
          iVar14 = (int)local_120;
          pvVar11 = local_128;
          pvVar9 = (void *)(((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2 + (longlong)local_128);
          ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar12,(longlong)iVar13 * 2);
          *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar9) = 0;
        }
        local_128 = (void *)0x0;
        local_120 = 0;
      }
      pvVar12 = local_118;
      iVar13 = (int)local_110;
      if (iVar14 < 2) {
        iVar3 = local_110._4_4_;
        local_118 = (void *)0x0;
        local_110 = 0;
      }
      else {
        iVar4 = iVar6;
        if ((int)local_110 != 0) {
          iVar4 = (int)local_110 + -1;
        }
        if ((iVar14 != 0) || (iVar13 = 1, iVar4 == 0)) {
          iVar13 = iVar6;
        }
        local_f8 = pvVar11;
        local_f0._4_4_ = iVar3;
        if (iVar3 < iVar13 + iVar14 + iVar4) {
          local_f0._0_4_ = iVar14;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
          iVar14 = (int)local_f0;
        }
        local_c8 = local_118;
        pvVar12 = local_f8;
        iVar13 = iVar14;
        iVar3 = local_f0._4_4_;
        if (iVar4 != 0) {
          local_f0._0_4_ = iVar14 + (uint)(iVar14 == 0) + iVar4;
          if (local_f0._4_4_ < (int)local_f0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar14);
          }
          iVar3 = local_f0._4_4_;
          iVar13 = (int)local_f0;
          pvVar12 = local_f8;
          pvVar11 = (void *)((longlong)local_f8 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2)
          ;
          ::_guard_xfg_dispatch_icall_nop(pvVar11,local_c8,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar11) = 0;
        }
        local_f8 = (void *)0x0;
        local_f0 = 0;
        pvVar11 = pvVar8;
      }
      _Src = &DAT_145106094;
      local_d0 = CONCAT44(iVar3,iVar13);
      if (*(char *)((longlong)local_98 + 0x28) != '\0') {
        _Src = &DAT_145105d04;
      }
      local_d8 = pvVar12;
      if (*_Src == 0) {
        local_d0 = 0;
        pvVar9 = pvVar8;
      }
      else {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (_Src[lVar10] != 0);
        iVar14 = (int)lVar10;
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_108,&local_d8);
        uVar2 = local_100;
        pvVar12 = local_108;
        if (iVar14 != 0) {
          iVar13 = (int)local_100;
          lVar10 = (longlong)(int)local_100;
          iVar4 = (uint)((int)local_100 == 0) + (int)local_100 + iVar14;
          local_100 = CONCAT44(local_100._4_4_,iVar4);
          if (local_100._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar2 & 0xffffffff);
          }
          pvVar12 = local_108;
          pvVar9 = (void *)((longlong)local_108 + (lVar10 - (ulonglong)(iVar13 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(pvVar9,_Src,(longlong)iVar14 * 2);
          *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar9) = 0;
        }
        iVar13 = (int)local_100;
        local_100 = 0;
        local_108 = (void *)0x0;
        pvVar9 = local_d8;
      }
      if ((iVar13 != 0) && (iVar13 + -1 != 0)) {
        iVar14 = (int)param_2[1];
        iVar4 = (uint)(iVar14 == 0) + iVar13 + -1 + iVar14;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
        sVar1 = (longlong)iVar13 * 2 - 2;
        ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar12,sVar1);
        *(undefined2 *)(sVar1 + (longlong)_Dst) = 0;
      }
      if (pvVar12 != (void *)0x0) {
        FMemory::Free(pvVar12);
      }
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      local_res18 = local_res18 + 1;
      local_res20 = (void *)((longlong)local_res20 + 0x30);
    } while (local_res18 < (int)param_1[5]);
  }
  if (0 < (int)param_1[7]) {
    do {
      FStaticMaterialLayersParameter::AppendKeyString
                ((longlong)(int)pvVar8 * 0x68 + param_1[6],param_2);
      uVar7 = (int)pvVar8 + 1;
      pvVar8 = (void *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)param_1[7]);
  }
  return;
}



// FUNCTION 142586490 FUN_142586490 body=330 status=ok
// SIG undefined FUN_142586490(void)

void FUN_142586490(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x168);
  lVar5 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar7;
  if (lVar7 != lVar5) {
    piVar6 = (int *)(lVar7 + 0x28);
    do {
      uVar3 = 0;
      if ((char)piVar6[10] != '\0') {
        plVar2 = *(longlong **)(piVar6 + -6);
        uVar4 = (longlong)piVar6[-4] & 0x1fffffffffffffff;
        if (plVar2 + piVar6[-4] < plVar2) {
          uVar4 = uVar3;
        }
        if (uVar4 != 0) {
          do {
            plVar1 = (longlong *)*plVar2;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
            }
            plVar2 = plVar2 + 1;
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar4);
        }
        uVar4 = 0;
        plVar2 = *(longlong **)(piVar6 + -2);
        uVar3 = (longlong)*piVar6 & 0x1fffffffffffffff;
        if (plVar2 + *piVar6 < plVar2) {
          uVar3 = uVar4;
        }
        if (uVar3 != 0) {
          do {
            plVar1 = (longlong *)*plVar2;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
            }
            plVar2 = plVar2 + 1;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar3);
        }
      }
      lVar7 = lVar7 + 0x68;
      piVar6 = piVar6 + 0x1a;
    } while (lVar7 != lVar5);
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425865cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x3a0))(plVar2,param_2);
  return;
}



// FUNCTION 1425865e0 FUN_1425865e0 body=83 status=ok
// SIG undefined FUN_1425865e0(void)

void FUN_1425865e0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x208,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::AppendReferencedTextures");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x208,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::AppendReferencedTextures");
  return;
}



// FUNCTION 142586640 FUN_142586640 body=262 status=ok
// SIG undefined FUN_142586640(void)

undefined8 FUN_142586640(longlong param_1,longlong param_2,float param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar7 = *(longlong **)(param_1 + 0xa0);
  plVar1 = plVar7 + (longlong)*(int *)(param_1 + 0xa8) * 5;
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    if (*plVar7 == param_2) break;
    plVar7 = plVar7 + 5;
  }
  if (param_3 != *(float *)(plVar7 + 2)) {
    return 0;
  }
  *(undefined4 *)(plVar7 + 2) = param_4;
  FUN_14257c030(param_1,plVar7);
  FUN_142587880(param_1);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  lVar2 = DAT_146afe3e0;
  lVar6 = DAT_146afe3e0 + (longlong)DAT_146afe3e8 * 8;
  lVar5 = DAT_146afe3e0;
  do {
    if (lVar5 == lVar6) {
LAB_1425866f8:
      iVar3 = DAT_146afe3e8;
      lVar6 = (longlong)DAT_146afe3e8;
      DAT_146afe3e8 = DAT_146afe3e8 + 1;
      if (DAT_146afe3ec < DAT_146afe3e8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146afe3e0,iVar3);
      }
      lVar5 = DAT_146afe3e0;
      *(undefined4 *)(DAT_146afe3e0 + lVar6 * 8) = local_res8;
      *(undefined4 *)(lVar5 + 4 + lVar6 * 8) = local_resc;
      return 1;
    }
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res8);
    if (cVar4 != '\0') {
      if ((int)(lVar5 - lVar2 >> 3) != -1) {
        return 1;
      }
      goto LAB_1425866f8;
    }
    lVar5 = lVar5 + 8;
  } while( true );
}



// FUNCTION 142586750 FUN_142586750 body=310 status=ok
// SIG undefined FUN_142586750(void)

undefined8 FUN_142586750(longlong param_1,longlong param_2,float *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar10 = *(longlong **)(param_1 + 0xb0);
  plVar11 = plVar10 + (longlong)*(int *)(param_1 + 0xb8) * 6;
  while( true ) {
    if (plVar10 == plVar11) {
      return 0;
    }
    if (*plVar10 == param_2) break;
    plVar10 = plVar10 + 6;
  }
  if (*param_3 != *(float *)(plVar10 + 2)) {
    return 0;
  }
  if (param_3[1] != *(float *)((longlong)plVar10 + 0x14)) {
    return 0;
  }
  if (param_3[2] != *(float *)(plVar10 + 3)) {
    return 0;
  }
  if (param_3[3] != *(float *)((longlong)plVar10 + 0x1c)) {
    return 0;
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(plVar10 + 2) = uVar1;
  *(undefined4 *)((longlong)plVar10 + 0x14) = uVar2;
  *(undefined4 *)(plVar10 + 3) = uVar3;
  *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar4;
  FUN_14257c5e0(uVar1,plVar10);
  FUN_142587880(param_1);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  lVar5 = DAT_146afe3e0;
  lVar9 = DAT_146afe3e0 + (longlong)DAT_146afe3e8 * 8;
  lVar8 = DAT_146afe3e0;
  do {
    if (lVar8 == lVar9) {
LAB_142586838:
      iVar6 = DAT_146afe3e8;
      lVar9 = (longlong)DAT_146afe3e8;
      DAT_146afe3e8 = DAT_146afe3e8 + 1;
      if (DAT_146afe3ec < DAT_146afe3e8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146afe3e0,iVar6);
      }
      lVar8 = DAT_146afe3e0;
      *(undefined4 *)(DAT_146afe3e0 + lVar9 * 8) = local_res8;
      *(undefined4 *)(lVar8 + 4 + lVar9 * 8) = local_resc;
      return 1;
    }
    cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar8,&local_res8);
    if (cVar7 != '\0') {
      if ((int)(lVar8 - lVar5 >> 3) != -1) {
        return 1;
      }
      goto LAB_142586838;
    }
    lVar8 = lVar8 + 8;
  } while( true );
}



// FUNCTION 142586890 FUN_142586890 body=1621 status=ok
// SIG undefined FUN_142586890(void)

/* WARNING: Removing unreachable block (ram,0x000142586c95) */
/* WARNING: Removing unreachable block (ram,0x000142586ca1) */
/* WARNING: Removing unreachable block (ram,0x000142586cb0) */

void FUN_142586890(void)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong lVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong *local_70;
  int local_68;
  int iStack_64;
  longlong local_60;
  ulonglong local_58;
  int local_50;
  
  if (DAT_146afe3e8 != 0) {
    iVar13 = 0;
    plVar16 = (longlong *)0x0;
    local_68 = 0;
    iStack_64 = 0;
    local_70 = (longlong *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_50 = -1;
    uVar7 = FUN_1429b6de0();
    FUN_1417a5560(uVar7,&local_60,1,0x10,0);
    uVar17 = local_58 & 0xffffffff;
    do {
      local_50 = local_50 + 1;
      iVar19 = 0;
      if ((int)local_58 <= local_50) break;
    } while (*(longlong *)(local_60 + (longlong)local_50 * 8) == 0);
LAB_142586936:
    if ((local_50 < 0) || ((int)uVar17 <= local_50)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar11 = *(longlong *)(local_60 + (longlong)local_50 * 8);
      lVar8 = lVar11;
      do {
        lVar15 = DAT_146afe3e0 + (longlong)DAT_146afe3e8 * 8;
        for (lVar14 = DAT_146afe3e0; lVar14 != lVar15; lVar14 = lVar14 + 8) {
          cVar4 = FUN_14058c1e0(lVar14,lVar8);
          if (cVar4 != '\0') {
            if (lVar11 == 0) goto LAB_142586d35;
            lVar8 = FUN_1429ba110();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_142586d35;
            uVar18 = 0;
            plVar20 = (longlong *)(lVar11 + 0x110);
            goto LAB_142586b11;
          }
        }
        lVar15 = (longlong)iVar19;
        local_68 = iVar19 + 1;
        if (iVar13 < local_68) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70,iVar19);
          plVar16 = local_70;
          iVar13 = iStack_64;
        }
        iVar19 = local_68;
        plVar20 = plVar16 + lVar15;
        if (plVar20 != (longlong *)0x0) {
          *plVar20 = lVar8;
          cVar4 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
            GetCurrentThreadId();
          }
          lVar15 = *plVar20;
          cVar4 = FUN_1415ad720(&DAT_1468e2448);
          if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
             (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
            bVar5 = 1;
          }
          else {
            bVar5 = 0;
          }
          *(undefined1 *)((ulonglong)bVar5 + 0x9c + lVar15) = 1;
        }
        lVar8 = *(longlong *)(lVar8 + 0x90);
        if (lVar8 == 0) break;
        lVar15 = FUN_1429b6de0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) break;
        cVar4 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
           (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
          bVar5 = 1;
        }
        else {
          bVar5 = 0;
        }
      } while (*(char *)((ulonglong)bVar5 + 0x9c + lVar8) == '\0');
      goto LAB_142586d46;
    }
    if (local_60 != 0) {
      FMemory::Free(local_60);
    }
    DAT_146afe3e8 = 0;
    if (DAT_146afe3ec != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146afe3e0,0);
    }
    FUN_14257f290(&local_70);
  }
  return;
LAB_142586b11:
  do {
    plVar16 = (longlong *)0x0;
    if (*plVar20 != 0) {
      if (DAT_146ac3ac5 == '\0') {
        cVar4 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar6 = GetCurrentThreadId();
          bVar3 = false;
          if (DVar6 == DAT_1468c21c0) goto LAB_142586b4f;
        }
        else {
LAB_142586b4f:
          bVar3 = true;
        }
        if (bVar3) {
          lVar11 = *plVar20;
          FBaseGraphTask::GetSmallTaskAllocator();
          QueryPerformanceCounter(&local_res20);
          bVar5 = *(byte *)(lVar11 + 0x110);
          if ((bVar5 & 8) != 0) {
            *(byte *)(lVar11 + 0x110) = bVar5 & 0xf7 | 0x10;
          }
          QueryPerformanceCounter(&local_res18);
          DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
          goto LAB_142586d18;
        }
      }
      pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar10 = TlsGetValue(*pDVar9);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)operator_new(0x18);
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = 0;
          plVar10[1] = 0;
          *(undefined4 *)(plVar10 + 2) = 0;
          plVar16 = plVar10;
        }
        TlsSetValue(*pDVar9,plVar16);
        plVar10 = plVar16;
      }
      plVar16 = (longlong *)plVar10[1];
      if (plVar16 == (longlong *)0x0) {
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
        plVar16 = (longlong *)plVar10[1];
        iVar13 = 0x20;
        *(undefined4 *)(plVar10 + 2) = 0x20;
      }
      else {
        iVar13 = (int)plVar10[2];
      }
      plVar10[1] = *plVar16;
      *(int *)(plVar10 + 2) = iVar13 + -1;
      *plVar16 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar16 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
      *plVar16 = (longlong)&PTR_FUN_14510bf00;
      *(undefined1 *)(plVar16 + 3) = 0;
      plVar16[4] = 0;
      plVar16[2] = *plVar20;
      lVar11 = plVar16[4];
      piVar1 = (int *)(lVar11 + 0x48);
      if (lVar11 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_140445100(plVar16,0,0xff,1);
      if (lVar11 != 0) {
        LOCK();
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          FGraphEvent::Recycle(lVar11);
        }
      }
    }
LAB_142586d18:
    uVar18 = uVar18 + 1;
    plVar20 = plVar20 + 1;
    plVar16 = local_70;
    iVar13 = iStack_64;
    iVar19 = local_68;
  } while (uVar18 < 3);
LAB_142586d35:
  FUN_142587880(*(undefined8 *)(local_60 + (longlong)local_50 * 8));
LAB_142586d46:
  plVar20 = plVar16;
  if (iVar13 < 0) {
    for (; iVar19 != 0; iVar19 = iVar19 + -1) {
      lVar11 = *plVar20;
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      *(undefined1 *)((ulonglong)bVar5 + 0x9c + lVar11) = 0;
      plVar20 = plVar20 + 1;
    }
    local_68 = 0;
    if (iVar13 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_70,0);
      plVar16 = local_70;
      iVar13 = iStack_64;
    }
  }
  else {
    for (; iVar19 != 0; iVar19 = iVar19 + -1) {
      lVar11 = *plVar20;
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      *(undefined1 *)((ulonglong)bVar5 + 0x9c + lVar11) = 0;
      plVar20 = plVar20 + 1;
    }
    local_68 = 0;
  }
  uVar17 = local_58 & 0xffffffff;
  do {
    local_50 = local_50 + 1;
    iVar19 = local_68;
    if ((int)local_58 <= local_50) break;
  } while (*(longlong *)(local_60 + (longlong)local_50 * 8) == 0);
  goto LAB_142586936;
}



// FUNCTION 142586ef0 FUN_142586ef0 body=327 status=ok
// SIG undefined FUN_142586ef0(void)

undefined8 * FUN_142586ef0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **local_c8 [18];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar5 = puVar2;
  }
  FArchive::FArchive(local_c8);
  local_38 = 0;
  local_c8[0] = &PTR_FUN_143f4a100;
  local_28 = 0;
  local_30 = puVar5;
  FArchive::SetIsSaving(local_c8,1);
  FArchive::SetIsPersistent(local_c8,0);
  puVar2 = puVar4;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      FUN_1425a15a0(*(undefined8 *)((longlong)puVar2 + *(longlong *)(param_1 + 0xe0)),local_c8,1);
      lVar1 = *(longlong *)((longlong)puVar2 + *(longlong *)(param_1 + 0xe0));
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::Empty(lVar1 + 0x38,0);
      FUN_14258c0c0(lVar1);
      uVar3 = (int)puVar4 + 1;
      puVar4 = (undefined8 *)(ulonglong)uVar3;
      puVar2 = puVar2 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0xe8));
  }
  FUN_1425a15a0(param_1,local_c8,1);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x38,0);
  FUN_14258c0c0(param_1);
  FArchive::~FArchive(local_c8);
  return puVar5;
}



// FUNCTION 142587040 FUN_142587040 body=69 status=ok
// SIG undefined FUN_142587040(void)

void FUN_142587040(longlong param_1)

{
  FUN_141edede0(param_1 + 0x40,0);
  FUN_1417502d0(param_1);
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_141edf360(*(undefined8 *)(param_1 + 0x110));
  }
  FUN_141edede0(param_1 + 0x1d8,0);
  return;
}



// FUNCTION 142587090 BeginDestroy body=33 status=ok
// SIG undefined BeginDestroy(void)

void UMaterialInterface::BeginDestroy(longlong param_1)

{
  FUN_141edede0(param_1 + 0x40,0);
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1425870c0 FUN_1425870c0 body=1981 status=ok
// SIG undefined FUN_1425870c0(void)

void FUN_1425870c0(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  
  uVar18 = 0;
  plVar21 = (longlong *)(param_1 + 0x150);
  puVar7 = (undefined2 *)*plVar21;
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
  *plVar21 = 0;
  iVar5 = *(int *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if ((0 < *(int *)(lVar20 + 0x290)) && (*(int *)(lVar20 + 0x290) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar21);
  }
  plVar22 = *(longlong **)(lVar20 + 0x288);
  uVar23 = (longlong)*(int *)(lVar20 + 0x290) & 0x1fffffffffffffff;
  if (plVar22 + *(int *)(lVar20 + 0x290) < plVar22) {
    uVar23 = uVar18;
  }
  if (uVar23 != 0) {
    do {
      lVar19 = *plVar22;
      iVar12 = *(int *)(param_1 + 0x158);
      uVar2 = *(undefined1 *)(lVar19 + 0x1b);
      uVar8 = *(undefined8 *)(lVar19 + 0x10);
      uVar4 = *(undefined2 *)(lVar19 + 0x18);
      uVar3 = *(undefined1 *)(lVar19 + 0x1a);
      uVar6 = *(undefined4 *)(lVar19 + 0x1c);
      *(int *)(param_1 + 0x158) = iVar12 + 1;
      if (*(int *)(param_1 + 0x15c) < iVar12 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar21,iVar12);
      }
      lVar19 = *plVar21;
      plVar22 = plVar22 + 1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar18 = uVar18 + 1;
      *(undefined8 *)(lVar13 + lVar19) = uVar8;
      *(undefined2 *)(lVar13 + 8 + lVar19) = uVar4;
      *(undefined1 *)(lVar13 + 10 + lVar19) = uVar3;
      *(undefined1 *)(lVar13 + 0xb + lVar19) = uVar2;
      *(undefined4 *)(lVar13 + 0xc + lVar19) = uVar6;
      puVar16 = (undefined8 *)(lVar13 + 0x10 + lVar19);
      *puVar16 = 0;
      puVar16[1] = 0;
      *(short *)(lVar13 + 8 + *plVar21) = (short)iVar12;
    } while (uVar18 != uVar23);
  }
  if (puVar7 != puVar7 + (longlong)iVar5 * 0x10) {
    puVar17 = puVar7 + 4;
    do {
      if (*(char *)(puVar17 + 1) == '\x01') {
        piVar9 = (int *)*plVar21;
        piVar15 = piVar9 + (longlong)*(int *)(param_1 + 0x158) * 8;
        if (piVar9 != piVar15) {
          piVar14 = piVar9;
          do {
            if ((((*(int *)(puVar17 + -4) == *piVar14) && (*(int *)(puVar17 + -2) == piVar14[1])) &&
                (*(char *)((longlong)puVar17 + 3) == *(char *)((longlong)piVar14 + 0xb))) &&
               (*(int *)(puVar17 + 2) == piVar14[3])) {
              if (piVar14 != piVar15) {
                lVar19 = (longlong)piVar14 - (longlong)piVar9 >> 5;
                iVar12 = (int)lVar19;
                if (iVar12 != -1) {
                  *puVar17 = (short)lVar19;
                  puVar16 = (undefined8 *)((longlong)iVar12 * 0x20 + *plVar21);
                  *puVar16 = *(undefined8 *)(puVar17 + -4);
                  *(undefined2 *)(puVar16 + 1) = *puVar17;
                  *(undefined1 *)((longlong)puVar16 + 10) = *(undefined1 *)(puVar17 + 1);
                  *(undefined1 *)((longlong)puVar16 + 0xb) = *(undefined1 *)((longlong)puVar17 + 3);
                  *(undefined4 *)((longlong)puVar16 + 0xc) = *(undefined4 *)(puVar17 + 2);
                  uVar6 = *(undefined4 *)(puVar17 + 6);
                  uVar10 = *(undefined4 *)(puVar17 + 8);
                  uVar11 = *(undefined4 *)(puVar17 + 10);
                  *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar17 + 4);
                  *(undefined4 *)((longlong)puVar16 + 0x14) = uVar6;
                  *(undefined4 *)(puVar16 + 3) = uVar10;
                  *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar11;
                  goto LAB_1425872d9;
                }
              }
              break;
            }
            piVar14 = piVar14 + 8;
          } while (piVar14 != piVar15);
        }
        *puVar17 = 0xffff;
        iVar12 = *(int *)(param_1 + 0x158);
        *(int *)(param_1 + 0x158) = iVar12 + 1;
        if (*(int *)(param_1 + 0x15c) < iVar12 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar21,iVar12);
        }
        puVar16 = (undefined8 *)((longlong)iVar12 * 0x20 + *plVar21);
        *puVar16 = *(undefined8 *)(puVar17 + -4);
        *(undefined2 *)(puVar16 + 1) = *puVar17;
        *(undefined1 *)((longlong)puVar16 + 10) = *(undefined1 *)(puVar17 + 1);
        *(undefined1 *)((longlong)puVar16 + 0xb) = *(undefined1 *)((longlong)puVar17 + 3);
        *(undefined4 *)((longlong)puVar16 + 0xc) = *(undefined4 *)(puVar17 + 2);
        uVar6 = *(undefined4 *)(puVar17 + 6);
        uVar10 = *(undefined4 *)(puVar17 + 8);
        uVar11 = *(undefined4 *)(puVar17 + 10);
        *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar17 + 4);
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar6;
        *(undefined4 *)(puVar16 + 3) = uVar10;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar11;
      }
LAB_1425872d9:
      puVar1 = puVar17 + 0xc;
      puVar17 = puVar17 + 0x10;
    } while (puVar1 != puVar7 + (longlong)iVar5 * 0x10);
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  plVar21 = (longlong *)(param_1 + 0x160);
  puVar7 = (undefined2 *)*plVar21;
  uVar18 = 0;
  *plVar21 = 0;
  iVar5 = *(int *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  if ((0 < *(int *)(lVar20 + 0x280)) && (*(int *)(lVar20 + 0x280) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar21);
  }
  plVar22 = *(longlong **)(lVar20 + 0x278);
  uVar23 = (longlong)*(int *)(lVar20 + 0x280) & 0x1fffffffffffffff;
  if (plVar22 + *(int *)(lVar20 + 0x280) < plVar22) {
    uVar23 = uVar18;
  }
  if (uVar23 != 0) {
    do {
      lVar19 = *plVar22;
      iVar12 = *(int *)(param_1 + 0x168);
      lVar13 = (longlong)iVar12;
      uVar2 = *(undefined1 *)(lVar19 + 0x1b);
      uVar8 = *(undefined8 *)(lVar19 + 0x10);
      uVar4 = *(undefined2 *)(lVar19 + 0x18);
      uVar3 = *(undefined1 *)(lVar19 + 0x1a);
      uVar6 = *(undefined4 *)(lVar19 + 0x1c);
      *(int *)(param_1 + 0x168) = iVar12 + 1;
      if (*(int *)(param_1 + 0x16c) < iVar12 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar21,iVar12);
      }
      lVar19 = *plVar21;
      plVar22 = plVar22 + 1;
      uVar18 = uVar18 + 1;
      *(undefined8 *)(lVar19 + lVar13 * 0x18) = uVar8;
      *(undefined2 *)(lVar19 + 8 + lVar13 * 0x18) = uVar4;
      *(undefined1 *)(lVar19 + 10 + lVar13 * 0x18) = uVar3;
      *(undefined1 *)(lVar19 + 0xb + lVar13 * 0x18) = uVar2;
      *(undefined4 *)(lVar19 + 0xc + lVar13 * 0x18) = uVar6;
      *(undefined4 *)(lVar19 + 0x10 + lVar13 * 0x18) = 0;
      *(short *)(*plVar21 + 8 + lVar13 * 0x18) = (short)iVar12;
    } while (uVar18 != uVar23);
  }
  if (puVar7 != puVar7 + (longlong)iVar5 * 0xc) {
    puVar17 = puVar7 + 4;
    do {
      if (*(char *)(puVar17 + 1) == '\x01') {
        piVar15 = (int *)*plVar21;
        piVar9 = piVar15 + (longlong)*(int *)(param_1 + 0x168) * 6;
        if (piVar15 != piVar9) {
          piVar14 = piVar15;
          do {
            if (((*(int *)(puVar17 + -4) == *piVar14) && (*(int *)(puVar17 + -2) == piVar14[1])) &&
               ((*(char *)((longlong)puVar17 + 3) == *(char *)((longlong)piVar14 + 0xb) &&
                (*(int *)(puVar17 + 2) == piVar14[3])))) {
              if (piVar14 != piVar9) {
                lVar19 = ((longlong)piVar14 - (longlong)piVar15) / 0x18;
                iVar12 = (int)lVar19;
                if (iVar12 != -1) {
                  *puVar17 = (short)lVar19;
                  lVar19 = *plVar21;
                  lVar13 = (longlong)iVar12;
                  *(undefined8 *)(lVar19 + lVar13 * 0x18) = *(undefined8 *)(puVar17 + -4);
                  *(undefined2 *)(lVar19 + 8 + lVar13 * 0x18) = *puVar17;
                  *(undefined1 *)(lVar19 + 10 + lVar13 * 0x18) = *(undefined1 *)(puVar17 + 1);
                  *(undefined1 *)(lVar19 + 0xb + lVar13 * 0x18) =
                       *(undefined1 *)((longlong)puVar17 + 3);
                  *(undefined4 *)(lVar19 + 0xc + lVar13 * 0x18) = *(undefined4 *)(puVar17 + 2);
                  *(undefined4 *)(lVar19 + 0x10 + lVar13 * 0x18) = *(undefined4 *)(puVar17 + 4);
                  goto LAB_1425874ec;
                }
              }
              break;
            }
            piVar14 = piVar14 + 6;
          } while (piVar14 != piVar9);
        }
        *puVar17 = 0xffff;
        iVar12 = *(int *)(param_1 + 0x168);
        lVar19 = (longlong)iVar12;
        *(int *)(param_1 + 0x168) = iVar12 + 1;
        if (*(int *)(param_1 + 0x16c) < iVar12 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar21,iVar12);
        }
        lVar13 = *plVar21;
        *(undefined8 *)(lVar13 + lVar19 * 0x18) = *(undefined8 *)(puVar17 + -4);
        *(undefined2 *)(lVar13 + 8 + lVar19 * 0x18) = *puVar17;
        *(undefined1 *)(lVar13 + 10 + lVar19 * 0x18) = *(undefined1 *)(puVar17 + 1);
        *(undefined1 *)(lVar13 + 0xb + lVar19 * 0x18) = *(undefined1 *)((longlong)puVar17 + 3);
        *(undefined4 *)(lVar13 + 0xc + lVar19 * 0x18) = *(undefined4 *)(puVar17 + 2);
        *(undefined4 *)(lVar13 + 0x10 + lVar19 * 0x18) = *(undefined4 *)(puVar17 + 4);
      }
LAB_1425874ec:
      puVar1 = puVar17 + 8;
      puVar17 = puVar17 + 0xc;
    } while (puVar1 != puVar7 + (longlong)iVar5 * 0xc);
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  uVar18 = 0;
  plVar21 = (longlong *)(param_1 + 0x170);
  puVar7 = (undefined2 *)*plVar21;
  *plVar21 = 0;
  iVar5 = *(int *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if ((0 < *(int *)(lVar20 + 0x2a0)) && (*(int *)(lVar20 + 0x2a0) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar21);
  }
  plVar22 = *(longlong **)(lVar20 + 0x298);
  uVar23 = (longlong)*(int *)(lVar20 + 0x2a0) & 0x1fffffffffffffff;
  if (plVar22 + *(int *)(lVar20 + 0x2a0) < plVar22) {
    uVar23 = uVar18;
  }
  if (uVar23 != 0) {
    do {
      lVar20 = *plVar22;
      iVar12 = *(int *)(param_1 + 0x178);
      lVar19 = (longlong)iVar12;
      uVar2 = *(undefined1 *)(lVar20 + 0x23);
      uVar8 = *(undefined8 *)(lVar20 + 0x18);
      uVar4 = *(undefined2 *)(lVar20 + 0x20);
      uVar3 = *(undefined1 *)(lVar20 + 0x22);
      uVar6 = *(undefined4 *)(lVar20 + 0x24);
      *(int *)(param_1 + 0x178) = iVar12 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar12 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar21,iVar12);
      }
      lVar20 = *plVar21;
      plVar22 = plVar22 + 1;
      uVar18 = uVar18 + 1;
      *(undefined8 *)(lVar20 + lVar19 * 0x18) = uVar8;
      *(undefined2 *)(lVar20 + 8 + lVar19 * 0x18) = uVar4;
      *(undefined1 *)(lVar20 + 10 + lVar19 * 0x18) = uVar3;
      *(undefined1 *)(lVar20 + 0xb + lVar19 * 0x18) = uVar2;
      *(undefined4 *)(lVar20 + 0xc + lVar19 * 0x18) = uVar6;
      *(undefined8 *)(lVar20 + 0x10 + lVar19 * 0x18) = 0;
      *(short *)(*plVar21 + 8 + lVar19 * 0x18) = (short)iVar12;
    } while (uVar18 != uVar23);
  }
  if (puVar7 != puVar7 + (longlong)iVar5 * 0xc) {
    puVar17 = puVar7 + 4;
    do {
      if (*(char *)(puVar17 + 1) == '\x01') {
        piVar15 = (int *)*plVar21;
        piVar9 = piVar15 + (longlong)*(int *)(param_1 + 0x178) * 6;
        if (piVar15 != piVar9) {
          piVar14 = piVar15;
          do {
            if ((((*(int *)(puVar17 + -4) == *piVar14) && (*(int *)(puVar17 + -2) == piVar14[1])) &&
                (*(char *)((longlong)puVar17 + 3) == *(char *)((longlong)piVar14 + 0xb))) &&
               (*(int *)(puVar17 + 2) == piVar14[3])) {
              if (piVar14 != piVar9) {
                lVar20 = ((longlong)piVar14 - (longlong)piVar15) / 0x18;
                iVar12 = (int)lVar20;
                if (iVar12 != -1) {
                  *puVar17 = (short)lVar20;
                  lVar20 = *plVar21;
                  lVar19 = (longlong)iVar12;
                  *(undefined8 *)(lVar20 + lVar19 * 0x18) = *(undefined8 *)(puVar17 + -4);
                  *(undefined2 *)(lVar20 + 8 + lVar19 * 0x18) = *puVar17;
                  *(undefined1 *)(lVar20 + 10 + lVar19 * 0x18) = *(undefined1 *)(puVar17 + 1);
                  *(undefined1 *)(lVar20 + 0xb + lVar19 * 0x18) =
                       *(undefined1 *)((longlong)puVar17 + 3);
                  *(undefined4 *)(lVar20 + 0xc + lVar19 * 0x18) = *(undefined4 *)(puVar17 + 2);
                  *(undefined8 *)(lVar20 + 0x10 + lVar19 * 0x18) = *(undefined8 *)(puVar17 + 4);
                  goto LAB_1425876f8;
                }
              }
              break;
            }
            piVar14 = piVar14 + 6;
          } while (piVar14 != piVar9);
        }
        *puVar17 = 0xffff;
        iVar12 = *(int *)(param_1 + 0x178);
        lVar20 = (longlong)iVar12;
        *(int *)(param_1 + 0x178) = iVar12 + 1;
        if (*(int *)(param_1 + 0x17c) < iVar12 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar21,iVar12);
        }
        lVar19 = *plVar21;
        *(undefined8 *)(lVar19 + lVar20 * 0x18) = *(undefined8 *)(puVar17 + -4);
        *(undefined2 *)(lVar19 + 8 + lVar20 * 0x18) = *puVar17;
        *(undefined1 *)(lVar19 + 10 + lVar20 * 0x18) = *(undefined1 *)(puVar17 + 1);
        *(undefined1 *)(lVar19 + 0xb + lVar20 * 0x18) = *(undefined1 *)((longlong)puVar17 + 3);
        *(undefined4 *)(lVar19 + 0xc + lVar20 * 0x18) = *(undefined4 *)(puVar17 + 2);
        *(undefined8 *)(lVar19 + 0x10 + lVar20 * 0x18) = *(undefined8 *)(puVar17 + 4);
      }
LAB_1425876f8:
      puVar1 = puVar17 + 8;
      puVar17 = puVar17 + 0xc;
    } while (puVar1 != puVar7 + (longlong)iVar5 * 0xc);
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | 0x18;
  lVar20 = FUN_1428742e0();
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(lVar20 + 0xc);
  return;
}



// FUNCTION 142587880 FUN_142587880 body=407 status=ok
// SIG undefined FUN_142587880(void)

void FUN_142587880(longlong param_1)

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
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_28 [32];
  
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) &&
       (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar9 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar9,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      local_res8 = lVar3;
      if ((DAT_146ac3ac6 != '\0') && (cVar7 = IsInRenderingThread(), cVar7 != '\0')) {
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_142582640(&local_res8,uVar9);
        return;
      }
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        local_res18 = lVar3;
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_142582640(&local_res18,uVar9);
        return;
      }
      plVar10 = (longlong *)FUN_14258af50(local_28,0,0xff);
      *(longlong *)(*plVar10 + 0x10) = lVar3;
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
      local_res10 = lVar5;
      FUN_140445100(lVar3,lVar4,(int)lVar6,1);
      if (lVar5 != 0) {
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
  return;
}



// FUNCTION 142587a20 FUN_142587a20 body=567 status=ok
// SIG undefined FUN_142587a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142587a20(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res18;
  int local_res1c;
  longlong local_48;
  int local_40;
  int local_3c;
  
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    FUN_1425a4ac0();
  }
  FUN_1425a46e0(param_1);
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) &&
       (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar4 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar4,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      uVar6 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | *(uint *)(param_1 + 0x80) | _DAT_146afe3a0;
      lVar3 = FUN_1428742e0();
      local_48 = 0;
      local_3c = 0;
      uVar2 = *(undefined4 *)(lVar3 + 0xc);
      if (uVar6 != 0) {
        do {
          local_res18 = uVar2;
          uVar7 = -uVar6 & uVar6;
          iVar5 = 0x1f;
          if (uVar7 != 0) {
            for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          iVar8 = 0;
          if (uVar7 != 0) {
            iVar8 = iVar5;
          }
          local_res10 = (&DAT_1464c9c48)[iVar8];
          iVar5 = 0;
          if ((local_3c < 0) && (local_40 = 0, local_3c != 0)) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48,0);
            iVar5 = local_40;
          }
          iVar1 = local_3c;
          local_res1c = iVar8;
          TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x188,local_res8,&local_res18);
          if (local_res8[0] == -1) {
            lVar3 = 0;
          }
          else {
            lVar3 = *(longlong *)(param_1 + 0x188) + (longlong)local_res8[0] * 0x18;
          }
          local_40 = iVar5 + 1;
          if (iVar1 < local_40) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
          }
          *(undefined8 *)(local_48 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 + 8);
          FUN_142588300(param_1,local_res10,&local_48,1);
          bVar9 = uVar7 != uVar6;
          uVar6 = uVar6 ^ uVar7;
          uVar2 = local_res18;
        } while (bVar9);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  FUN_142598e80(param_1);
  return;
}



// FUNCTION 142587c60 FUN_142587c60 body=1397 status=ok
// SIG undefined FUN_142587c60(void)

undefined8 FUN_142587c60(longlong *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 **ppuVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  undefined2 *puVar17;
  int iVar18;
  undefined2 *puVar19;
  byte bVar20;
  undefined2 *puVar21;
  int local_res8 [2];
  int local_a8 [2];
  longlong local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [32];
  
  uVar16 = 0;
  puVar19 = (undefined2 *)0x0;
  if ((*(byte *)((longlong)param_1 + 0x24) & 1) == 0) {
    TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146afe420 + (longlong)param_3 * 10,local_res8,param_2);
    puVar21 = puVar19;
    if ((local_res8[0] != -1) &&
       (lVar7 = (longlong)local_res8[0] * 0x108 + (&DAT_146afe420)[(longlong)param_3 * 10],
       lVar7 != 0)) {
      puVar21 = *(undefined2 **)(lVar7 + 0xf8);
    }
    lVar7 = param_1[1];
    param_1[1] = (longlong)puVar21;
    if (puVar21 != (undefined2 *)0x0) {
      *(int *)(puVar21 + 0x1ae) = *(int *)(puVar21 + 0x1ae) + 1;
    }
    if (lVar7 != 0) {
      FUN_14259f650();
    }
    if (param_1[1] != 0) {
      FUN_14259b2e0(param_1[1],param_1,1);
    }
  }
  else if ((param_1[1] == 0) ||
          (lVar7 = FMaterialShaderMap::FindId(param_1[1] + 0x100,param_3), lVar7 == 0)) {
    if (param_1[1] != 0) {
      FUN_14259e740(param_1[1],param_3);
    }
  }
  else {
    lVar8 = param_1[1];
    param_1[1] = lVar7;
    *(int *)(lVar7 + 0x35c) = *(int *)(lVar7 + 0x35c) + 1;
    if (lVar8 != 0) {
      FUN_14259f650();
    }
  }
  lVar7 = (**(code **)(*param_1 + 0x330))(param_1);
  if (lVar7 == 0) {
LAB_142587dae:
    cVar5 = (**(code **)(*param_1 + 200))(param_1);
    if (cVar5 == '\0') goto LAB_142587dc6;
    bVar20 = 1;
    bVar3 = false;
  }
  else {
    lVar8 = FUN_1429b6de0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142587dae;
LAB_142587dc6:
    bVar20 = 0;
    bVar3 = true;
  }
  lVar7 = param_1[1];
  if (lVar7 == 0) {
LAB_142587e89:
    if (bVar20 != 0) {
      lVar7 = (**(code **)(*param_1 + 0x330))(param_1);
      local_98 = (undefined2 *)0x0;
      iVar18 = 0;
      local_90 = 0;
      if (lVar7 != 0) {
        ppuVar9 = (undefined2 **)UObjectBaseUtility::GetPathName(lVar7,local_78,0);
        iVar18 = 0;
        if (&local_98 != ppuVar9) {
          puVar19 = *ppuVar9;
          *ppuVar9 = (undefined2 *)0x0;
          iVar18 = *(int *)(ppuVar9 + 1);
          ppuVar9[1] = (undefined2 *)0x0;
          local_98 = puVar19;
          local_90 = iVar18;
        }
        if (local_78[0] != 0) {
          FMemory::Free(local_78[0]);
        }
      }
      local_a0 = param_1[1];
      puVar21 = &DAT_143f3eda8;
      puVar15 = &DAT_143f3eda8;
      if (iVar18 != 0) {
        puVar15 = puVar19;
      }
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_68);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar10;
      }
      pwVar14 = L"";
      if (bVar3) {
        pwVar14 = L" assumes map complete";
      }
      pwVar13 = L"null";
      if (local_a0 != 0) {
        pwVar13 = L"has";
      }
      pwVar11 = L"No";
      if ((*(byte *)((longlong)param_1 + 0x24) & 1) != 0) {
        pwVar11 = L"Contains";
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x76a,
                 L"Failed to find shader map for default material %s(%s)! Please make sure cooking was successful (%s inline shaders, %s GTSM%s)"
                 ,puVar17,puVar15,pwVar11,pwVar13,pwVar14);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      lVar7 = param_1[1];
      puVar15 = puVar19;
      if (iVar18 == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_58);
      if (*(int *)(puVar10 + 1) != 0) {
        puVar21 = (undefined2 *)*puVar10;
      }
      pwVar14 = L"";
      if (bVar3) {
        pwVar14 = L" assumes map complete";
      }
      pwVar13 = L"null";
      if (lVar7 != 0) {
        pwVar13 = L"has";
      }
      pwVar11 = L"No";
      if ((*(byte *)((longlong)param_1 + 0x24) & 1) != 0) {
        pwVar11 = L"Contains";
      }
      FDebug::AssertFailed
                (&DAT_1451039d6,"Unknown",0x76a,
                 L"Failed to find shader map for default material %s(%s)! Please make sure cooking was successful (%s inline shaders, %s GTSM%s)"
                 ,puVar21,puVar15,pwVar11,pwVar13,pwVar14);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
    }
    lVar7 = param_1[1];
    param_1[1] = 0;
    if (lVar7 != 0) {
      FUN_14259f650();
    }
  }
  else {
    *(int *)(lVar7 + 0x35c) = *(int *)(lVar7 + 0x35c) + 1;
    local_88 = lVar7;
    local_80 = param_1;
    TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146533c50,local_a8,&local_88);
    if ((local_a8[0] == -1) ||
       (lVar8 = (longlong)local_a8[0] * 0x20 + DAT_146533c50, puVar21 = (undefined2 *)(lVar8 + 8),
       lVar8 == 0)) {
      puVar21 = puVar19;
    }
    FUN_14259f650(lVar7);
    if (puVar21 == (undefined2 *)0x0) {
      if ((param_1[1] == 0) ||
         ((!bVar3 && (cVar5 = FUN_14259b2e0(param_1[1],param_1,bVar20 ^ 1), cVar5 == '\0'))))
      goto LAB_142587e89;
    }
    else {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(puVar21,&local_80);
      lVar7 = param_1[1];
      param_1[1] = 0;
      if (lVar7 != 0) {
        FUN_14259f650();
        uVar16 = 1;
        goto LAB_1425880be;
      }
    }
    uVar16 = 1;
  }
LAB_1425880be:
  if ((DAT_146ac3ac6 != '\0') && (cVar5 = IsInRenderingThread(), cVar5 != '\0')) {
    FBaseGraphTask::GetSmallTaskAllocator();
    param_1[2] = param_1[1];
    return uVar16;
  }
  if (DAT_146ac3ac5 != '\0') goto LAB_142588168;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    bVar3 = false;
    if (DVar6 == DAT_1468c21c0) goto LAB_142588147;
  }
  else {
LAB_142588147:
    bVar3 = true;
  }
  if (bVar3) {
    FBaseGraphTask::GetSmallTaskAllocator();
    param_1[2] = param_1[1];
    return uVar16;
  }
LAB_142588168:
  plVar12 = (longlong *)FUN_14258b0a0(local_48,0,0xff);
  *(longlong **)(*plVar12 + 0x10) = param_1;
  lVar7 = *plVar12;
  lVar4 = plVar12[2];
  lVar8 = plVar12[1];
  lVar2 = *(longlong *)(lVar7 + 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    UNLOCK();
  }
  local_a0 = lVar2;
  FUN_140445100(lVar7,lVar8,(int)lVar4,1);
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0x48);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      FGraphEvent::Recycle(local_a0);
    }
  }
  return uVar16;
}



// FUNCTION 1425881e0 FUN_1425881e0 body=283 status=ok
// SIG undefined FUN_1425881e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1425881e0(longlong *param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_118 = 1;
  local_128 = 0;
  local_120 = 0;
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
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_114 = 2;
  (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_128);
  local_138 = param_4;
  uVar1 = FUN_142587c60(param_1,&local_128,param_2 & 0xffffffff,param_3);
  FMaterialShaderMapId::~FMaterialShaderMapId(&local_128);
  return uVar1;
}



// FUNCTION 142588300 FUN_142588300 body=543 status=ok
// SIG undefined FUN_142588300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142588300(longlong *param_1,undefined4 param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar2 = (**(code **)(*param_1 + 0x290))();
  FUN_142567ff0(uVar2);
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (*(int *)((longlong)param_1 + 0x134) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x25,0);
  }
  (**(code **)(*param_1 + 0x3a0))(param_1,param_1 + 0x25);
  uVar5 = uVar3;
  if (0 < (int)param_3[1]) {
    do {
      plVar1 = *(longlong **)(uVar3 + *param_3);
      local_148 = 0;
      local_140 = 0;
      local_138 = 1;
      local_134 = 2;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
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
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,&local_148);
      local_158 = 0;
      FUN_142587c60(plVar1,&local_148,param_2,param_4);
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
      if (local_a8 != 0) {
        FMemory::Free();
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      if (local_e8 != 0) {
        FMemory::Free();
      }
      TArray<FStaticMaterialLayersParameter,FDefaultAllocator>::
      ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(&local_f8);
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 142588520 FUN_142588520 body=269 status=ok
// SIG undefined FUN_142588520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142588520(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  longlong *local_res10;
  
  (**(code **)(*param_1 + 0x28))();
  local_res10 = param_1;
  FUN_14058c5a0(&DAT_146533cf0,local_res8,&local_res10,0);
  uVar4 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0;
  if (uVar4 != 0) {
    do {
      plVar3 = param_1 + 6;
      plVar1 = param_1 + 0xc;
      lVar2 = 4;
      *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 0x10;
      do {
        *(undefined1 *)(plVar1 + -1) = 0;
        TRefCountPtr<FRHIIndexBuffer>::operator=(plVar3,0);
        plVar3 = plVar3 + 7;
        *plVar1 = 0;
        plVar1 = plVar1 + 7;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      bVar5 = uVar4 != (-uVar4 & uVar4);
      uVar4 = uVar4 ^ -uVar4 & uVar4;
    } while (bVar5);
  }
  if (DAT_146533c48 != 0) {
    return;
  }
  FUN_1425a3670();
  return;
}



// FUNCTION 142588630 FUN_142588630 body=394 status=ok
// SIG undefined FUN_142588630(void)

void FUN_142588630(undefined8 param_1)

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
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 local_28 [32];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar9 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar9,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    local_res10 = param_1;
    if ((DAT_146ac3ac6 != '\0') && (cVar7 = IsInRenderingThread(), cVar7 != '\0')) {
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142582640(&local_res10,uVar9);
      return;
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      local_res20 = param_1;
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142582640(&local_res20,uVar9);
      return;
    }
    plVar10 = (longlong *)FUN_14258af50(local_28,0,0xff);
    *(undefined8 *)(*plVar10 + 0x10) = param_1;
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
    local_res18 = lVar5;
    FUN_140445100(lVar3,lVar4,(int)lVar6,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_res18);
      }
    }
  }
  return;
}



// FUNCTION 1425887d0 FUN_1425887d0 body=8 status=ok
// SIG undefined FUN_1425887d0(void)

void FUN_1425887d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_142582460(param_1,*param_2);
  return;
}



// FUNCTION 1425887e0 FUN_1425887e0 body=105 status=ok
// SIG undefined FUN_1425887e0(void)

undefined1 FUN_1425887e0(longlong *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  char local_res8 [8];
  
  lVar2 = (**(code **)(*param_1 + 0x290))();
  if (lVar2 != 0) {
    local_res8[0] = '\0';
    uVar1 = FUN_142578380(lVar2,local_res8,param_2,param_1);
    if (local_res8[0] != '\0') {
      FUN_142587a20(param_1);
      UObjectBaseUtility::MarkPackageDirty(param_1);
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 142588850 FUN_142588850 body=85 status=ok
// SIG undefined FUN_142588850(void)

undefined1 FUN_142588850(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x197,L"Pure virtual not implemented (%s)",L"UMaterialInterface::CheckMaterialUsage");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x197,L"Pure virtual not implemented (%s)",L"UMaterialInterface::CheckMaterialUsage");
  return 0;
}



// FUNCTION 1425888b0 FUN_1425888b0 body=765 status=ok
// SIG undefined FUN_1425888b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1425888b0(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  longlong *local_c0 [2];
  longlong *local_b0;
  longlong *local_a8;
  undefined1 local_98 [24];
  undefined1 local_80 [64];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar12 = (longlong *)0x0;
  local_40 = 0;
  local_38 = 0;
  lVar9 = (**(code **)(*param_1 + 0x298))(param_1,local_80);
  if (lVar9 == 0) {
    uVar7 = 0;
  }
  else {
    local_c8[0] = 0;
    cVar6 = FUN_142572ad0(lVar9,local_c8,param_2);
    uVar7 = local_c8[0];
    if (cVar6 != '\0') {
      cVar6 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
        plVar10 = (longlong *)operator_new(0x10);
        local_b0 = plVar12;
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = (longlong)param_1;
          *(undefined4 *)(plVar10 + 1) = param_2;
          local_b0 = plVar10;
        }
        plVar10 = (longlong *)operator_new(0x18);
        if (plVar10 != (longlong *)0x0) {
          *(undefined4 *)(plVar10 + 1) = 1;
          *plVar10 = (longlong)&PTR_FUN_1451036e8;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          plVar10[2] = (longlong)local_b0;
          plVar12 = plVar10;
        }
        local_a8 = plVar12;
        SharedPointerInternals::EnableSharedFromThis(&local_b0,local_b0,local_b0);
        plVar10 = local_a8;
        plVar12 = local_b0;
        local_c8[0] = 0;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
          UNLOCK();
        }
        plVar11 = (longlong *)FMemory::Realloc(0,0x30);
        local_c0[0] = plVar11;
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = (longlong)&PTR_GetPoolName_145103658;
          plVar11[1] = (longlong)plVar12;
          plVar11[2] = (longlong)plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
          }
          plVar11[3] = (longlong)&LAB_142578ac0;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar11[5] = lVar9;
          *plVar11 = (longlong)&PTR_GetPoolName_1451036a0;
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar10 + 1;
          lVar9 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          plVar11 = local_c0[0];
          if ((int)lVar9 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar11 = local_c0[0];
            if (iVar2 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
              plVar11 = local_c0[0];
            }
          }
        }
        plVar12 = (longlong *)FUN_141d29000(local_98,0,0xff);
        lVar9 = *plVar12;
        pplVar13 = (longlong **)(lVar9 + 0x10);
        *pplVar13 = (longlong *)0x0;
        *(undefined4 *)(lVar9 + 0x18) = 0;
        if ((local_c0 != pplVar13) && (plVar11 != (longlong *)0x0)) {
          (**(code **)(*plVar11 + 0x30))(plVar11,pplVar13);
        }
        *(undefined4 *)(lVar9 + 0x20) = 0x102;
        lVar9 = *plVar12;
        lVar5 = plVar12[2];
        lVar3 = plVar12[1];
        lVar4 = *(longlong *)(lVar9 + 0x30);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
          plVar11 = local_c0[0];
        }
        FUN_1409691d0(lVar9,lVar3,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar11 = local_c0[0];
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
            plVar11 = local_c0[0];
          }
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11,0);
          local_c0[0] = (longlong *)FMemory::Realloc(plVar11,0,0);
          if (local_c0[0] != (longlong *)0x0) {
            FMemory::Free(local_c0[0]);
          }
        }
        plVar12 = local_a8;
        uVar7 = local_c8[0];
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_a8 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar7 = local_c8[0];
            if (iVar2 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
              uVar7 = local_c8[0];
            }
          }
        }
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x2e8))(param_1,param_2);
      }
    }
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142588bb0 IsAvailable body=85 status=ok
// SIG undefined IsAvailable(void)

undefined1 UNetDriver::IsAvailable(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x19b,L"Pure virtual not implemented (%s)",L"UMaterialInterface::CheckMaterialUsage");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x19b,L"Pure virtual not implemented (%s)",L"UMaterialInterface::CheckMaterialUsage");
  return 0;
}



// FUNCTION 142588c10 thunk_FUN_142588c20 body=7 status=ok
// SIG undefined thunk_FUN_142588c20(void)

void thunk_FUN_142588c20(undefined8 param_1)

{
  FUN_142588c20(param_1,1);
  return;
}



// FUNCTION 142588c20 FUN_142588c20 body=834 status=ok
// SIG undefined FUN_142588c20(void)

/* WARNING: Removing unreachable block (ram,0x000142588eae) */
/* WARNING: Removing unreachable block (ram,0x000142588ebb) */
/* WARNING: Removing unreachable block (ram,0x000142588eca) */

void FUN_142588c20(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *lpTlsValue;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *plVar13;
  
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xa0,0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0xb0,0);
  }
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 200) = 0;
    if (*(int *)(param_1 + 0xcc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0xc0,0);
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (*(int *)(param_1 + 0xdc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0xd0,0);
    }
  }
  plVar11 = (longlong *)(param_1 + 0x110);
  plVar13 = (longlong *)0x0;
  do {
    if (*plVar11 != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
        lVar8 = *plVar11;
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res20);
        uVar3 = local_res20.s.LowPart;
        *(undefined4 *)(lVar8 + 0x158) = 0;
        if (0x7fffffff < *(uint *)(lVar8 + 0x15c)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo();
        }
        *(undefined4 *)(lVar8 + 0x168) = 0;
        if ((*(int *)(lVar8 + 0x16c) < 0) && (*(int *)(lVar8 + 0x16c) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo();
        }
        *(undefined4 *)(lVar8 + 0x178) = 0;
        if ((*(int *)(lVar8 + 0x17c) < 0) && (*(int *)(lVar8 + 0x17c) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo();
        }
        if ((*(byte *)(lVar8 + 0x110) & 8) != 0) {
          *(byte *)(lVar8 + 0x110) = *(byte *)(lVar8 + 0x110) & 0xf7 | 0x10;
        }
        FUN_14259b260(lVar8);
        QueryPerformanceCounter(&local_68);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_68.s.LowPart - uVar3);
      }
      else {
        pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        lpTlsValue = TlsGetValue(*pDVar6);
        if (lpTlsValue == (longlong *)0x0) {
          plVar7 = (longlong *)operator_new(0x18);
          lpTlsValue = (longlong *)0x0;
          if (plVar7 != (longlong *)0x0) {
            *plVar7 = 0;
            plVar7[1] = 0;
            *(undefined4 *)(plVar7 + 2) = 0;
            lpTlsValue = plVar7;
          }
          TlsSetValue(*pDVar6,lpTlsValue);
        }
        plVar7 = (longlong *)lpTlsValue[1];
        if (plVar7 == (longlong *)0x0) {
          if (*lpTlsValue == 0) {
            lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
            lpTlsValue[1] = lVar8;
            if (lVar8 == 0) {
              puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
              lpTlsValue[1] = (longlong)puVar9;
              lVar8 = 0x1f;
              do {
                puVar2 = puVar9 + 0x20;
                *puVar9 = puVar2;
                lVar8 = lVar8 + -1;
                puVar9 = puVar2;
              } while (lVar8 != 0);
              *puVar2 = 0;
            }
          }
          else {
            lpTlsValue[1] = *lpTlsValue;
            *lpTlsValue = 0;
          }
          plVar7 = (longlong *)lpTlsValue[1];
          iVar10 = 0x20;
          *(undefined4 *)(lpTlsValue + 2) = 0x20;
        }
        else {
          iVar10 = (int)lpTlsValue[2];
        }
        lpTlsValue[1] = *plVar7;
        *(int *)(lpTlsValue + 2) = iVar10 + -1;
        *plVar7 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar7 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)&PTR_FUN_14510bef0;
        *(undefined1 *)(plVar7 + 3) = 0;
        plVar7[4] = 0;
        local_58 = 0;
        local_60 = 0;
        plVar7[2] = *plVar11;
        lVar8 = plVar7[4];
        piVar1 = (int *)(lVar8 + 0x48);
        if (lVar8 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_140445100(plVar7,0,0xff,1);
        if (lVar8 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(lVar8);
          }
        }
      }
    }
    uVar12 = (int)plVar13 + 1;
    plVar13 = (longlong *)(ulonglong)uVar12;
    plVar11 = plVar11 + 1;
  } while (uVar12 < 3);
  FUN_142598e80(param_1);
  return;
}



// FUNCTION 142588f70 FUN_142588f70 body=216 status=ok
// SIG undefined FUN_142588f70(void)

void FUN_142588f70(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iStackX_14;
  
  uVar4 = 0;
  iVar5 = *(int *)(param_1 + 0xa8);
  if (0 < iVar5) {
    piVar1 = *(int **)(param_1 + 0xa0);
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    piVar2 = piVar1;
    uVar7 = uVar4;
    while ((((iVar6 = (int)uVar7, *piVar2 != (int)param_2 || (piVar2[1] != iStackX_14)) ||
            (*(char *)((longlong)piVar2 + 0xb) != '\x02')) || (piVar2[3] != -1))) {
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 10;
      if ((longlong)iVar5 <= (longlong)uVar4) {
        return;
      }
    }
    if (iVar6 != -1) {
      iVar3 = (iVar5 - iVar6) + -1;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (piVar1 + (longlong)iVar6 * 10,piVar1 + (longlong)(iVar5 - iVar3) * 10,
                   (longlong)iVar3 * 0x28);
        iVar5 = *(int *)(param_1 + 0xa8);
      }
      *(int *)(param_1 + 0xa8) = iVar5 + -1;
      FUN_14257b770(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142589050 FUN_142589050 body=222 status=ok
// SIG undefined FUN_142589050(void)

void FUN_142589050(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iStackX_14;
  
  uVar4 = 0;
  iVar5 = *(int *)(param_1 + 0xb8);
  if (0 < iVar5) {
    piVar1 = *(int **)(param_1 + 0xb0);
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    piVar2 = piVar1;
    uVar7 = uVar4;
    while ((((iVar6 = (int)uVar7, *piVar2 != (int)param_2 || (piVar2[1] != iStackX_14)) ||
            (*(char *)((longlong)piVar2 + 0xb) != '\x02')) || (piVar2[3] != -1))) {
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 0xc;
      if ((longlong)iVar5 <= (longlong)uVar4) {
        return;
      }
    }
    if (iVar6 != -1) {
      iVar3 = (iVar5 - iVar6) + -1;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (piVar1 + (longlong)iVar6 * 0xc,piVar1 + (longlong)(iVar5 - iVar3) * 0xc,
                   (longlong)iVar3 * 0x30);
        iVar5 = *(int *)(param_1 + 0xb8);
      }
      *(int *)(param_1 + 0xb8) = iVar5 + -1;
      FUN_14257ba20(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142589140 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
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



// FUNCTION 1425891f0 FUN_1425891f0 body=161 status=ok
// SIG undefined FUN_1425891f0(void)

undefined8 FUN_1425891f0(longlong param_1,uint param_2,char param_3)

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
      FUN_141a07520(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1425892a0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
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



// FUNCTION 142589350 FUN_142589350 body=1960 status=ok
// SIG undefined FUN_142589350(void)

void FUN_142589350(longlong *param_1,longlong *param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  int *piVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar6 = (**(code **)(*param_1 + 0x290))();
  lVar7 = (**(code **)(*param_2 + 0x290))(param_2);
  lVar14 = param_1[0x12];
  bVar15 = lVar6 == lVar7;
  if (lVar14 != 0) {
    lVar8 = FUN_1429b6de0();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142589407;
  }
  lVar14 = 0;
LAB_142589407:
  FUN_142568050(lVar6);
  FUN_142568050(lVar7);
  lVar7 = 0;
  local_78 = 0;
  local_70 = 0;
  lVar8 = (longlong)*(int *)(lVar6 + 0x878);
  if (0 < lVar8) {
    do {
      puVar13 = (undefined8 *)(*(longlong *)(lVar6 + 0x870) + lVar7);
      local_78 = puVar13[2];
      local_88 = *(int *)(lVar7 + 0x18 + *(longlong *)(lVar6 + 0x870));
      cVar4 = (**(code **)(*(longlong *)param_1[0x12] + 0x430))
                        ((longlong *)param_1[0x12],puVar13,&local_78,&local_88,1);
      if (((((cVar4 == '\0') || (param_3 == '\x02')) ||
           ((param_3 != '\0' &&
            ((lVar14 == 0 || (lVar9 = FUN_14257bcd0(lVar14 + 0xd0), lVar9 == 0)))))) &&
          (cVar4 = (**(code **)(*param_2 + 0x430))(param_2,puVar13,&local_70,&local_84,bVar15),
          cVar4 != '\0')) && ((local_70 != local_78 && (local_84 != local_88)))) {
        lVar9 = param_1[0x1b];
        iVar5 = (int)lVar9 + 1;
        *(int *)(param_1 + 0x1b) = iVar5;
        if (*(int *)((longlong)param_1 + 0xdc) < iVar5) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a);
        }
        puVar10 = (undefined8 *)((longlong)(int)lVar9 * 0x30 + param_1[0x1a]);
        if (puVar10 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          *(undefined4 *)(puVar10 + 1) = 0x202ffff;
          *puVar10 = 0;
          *(undefined4 *)((longlong)puVar10 + 0xc) = 0xffffffff;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          *(undefined4 *)(puVar10 + 5) = 0;
        }
        *puVar10 = *puVar13;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar13 + 1);
        *(undefined1 *)((longlong)puVar10 + 10) = *(undefined1 *)((longlong)puVar13 + 10);
        *(undefined1 *)((longlong)puVar10 + 0xb) = *(undefined1 *)((longlong)puVar13 + 0xb);
        *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)puVar13 + 0xc);
        *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
        puVar10[2] = local_70;
        *(int *)(puVar10 + 3) = local_84;
      }
      lVar7 = lVar7 + 0x20;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar7 = 0;
  lVar8 = (longlong)*(int *)(lVar6 + 0x848);
  if (0 < lVar8) {
    do {
      piVar12 = (int *)(*(longlong *)(lVar6 + 0x840) + lVar7);
      local_80 = (float)piVar12[4];
      cVar4 = (**(code **)(*(longlong *)param_1[0x12] + 1000))
                        ((longlong *)param_1[0x12],piVar12,&local_80,1);
      if ((cVar4 == '\0') || (param_3 == '\x02')) {
LAB_14258966b:
        cVar4 = (**(code **)(*param_2 + 1000))(param_2,piVar12,&local_7c,bVar15);
        if ((cVar4 != '\0') && (local_7c != local_80)) {
          iVar5 = (int)param_1[0x15];
          *(int *)(param_1 + 0x15) = iVar5 + 1;
          if (*(int *)((longlong)param_1 + 0xac) < iVar5 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x14,iVar5);
          }
          puVar13 = (undefined8 *)(param_1[0x14] + (longlong)iVar5 * 0x28);
          puVar10 = (undefined8 *)0x0;
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = 0;
            *(undefined4 *)(puVar13 + 1) = 0x202ffff;
            *(undefined4 *)((longlong)puVar13 + 0xc) = 0xffffffff;
            puVar13[2] = 0;
            puVar13[3] = 0;
            *(undefined4 *)(puVar13 + 4) = 0;
            puVar10 = puVar13;
          }
          *puVar10 = *(undefined8 *)piVar12;
          *(short *)(puVar10 + 1) = (short)piVar12[2];
          *(undefined1 *)((longlong)puVar10 + 10) = *(undefined1 *)((longlong)piVar12 + 10);
          *(undefined1 *)((longlong)puVar10 + 0xb) = *(undefined1 *)((longlong)piVar12 + 0xb);
          *(int *)((longlong)puVar10 + 0xc) = piVar12[3];
          *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar10 + 0x14) = 0;
          *(float *)(puVar10 + 2) = local_7c;
        }
      }
      else if (param_3 != '\0') {
        if (lVar14 != 0) {
          pcVar2 = *(char **)(lVar14 + 0xa0);
          if (pcVar2 != pcVar2 + (longlong)*(int *)(lVar14 + 0xa8) * 0x28) {
            pcVar11 = pcVar2 + 0xb;
            do {
              if ((*(int *)(pcVar11 + -0xb) == *piVar12) && (*(int *)(pcVar11 + -7) == piVar12[1]))
              {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (((bVar3) && (*pcVar11 == *(char *)((longlong)piVar12 + 0xb))) &&
                 (*(int *)(pcVar11 + 1) == piVar12[3])) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) goto LAB_142589734;
              pcVar1 = pcVar11 + 0x1d;
              pcVar11 = pcVar11 + 0x28;
            } while (pcVar1 != pcVar2 + (longlong)*(int *)(lVar14 + 0xa8) * 0x28);
          }
        }
        goto LAB_14258966b;
      }
LAB_142589734:
      lVar7 = lVar7 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar7 = (longlong)*(int *)(lVar6 + 0x858);
  if (0 < lVar7) {
    lVar8 = 0;
    do {
      piVar12 = (int *)(*(longlong *)(lVar6 + 0x850) + lVar8);
      local_58 = (float)piVar12[4];
      fStack_54 = (float)piVar12[5];
      fStack_50 = (float)piVar12[6];
      fStack_4c = (float)piVar12[7];
      cVar4 = (**(code **)(*(longlong *)param_1[0x12] + 0x400))
                        ((longlong *)param_1[0x12],piVar12,&local_58,1);
      if ((cVar4 == '\0') || (param_3 == '\x02')) {
LAB_142589813:
        cVar4 = (**(code **)(*param_2 + 0x400))(param_2,piVar12,&local_48,bVar15);
        if (cVar4 != '\0') {
          if (((local_48 == local_58) && (fStack_44 == fStack_54)) &&
             ((fStack_40 == fStack_50 && (fStack_3c == fStack_4c)))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar9 = param_1[0x17];
            iVar5 = (int)lVar9 + 1;
            *(int *)(param_1 + 0x17) = iVar5;
            if (*(int *)((longlong)param_1 + 0xbc) < iVar5) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x16);
            }
            puVar13 = (undefined8 *)((longlong)(int)lVar9 * 0x30 + param_1[0x16]);
            if (puVar13 == (undefined8 *)0x0) {
              puVar13 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(puVar13 + 1) = 0x202ffff;
              *puVar13 = 0;
              *(undefined4 *)((longlong)puVar13 + 0xc) = 0xffffffff;
              puVar13[2] = 0;
              puVar13[3] = 0;
              puVar13[4] = 0;
              puVar13[5] = 0;
            }
            *puVar13 = *(undefined8 *)piVar12;
            *(short *)(puVar13 + 1) = (short)piVar12[2];
            *(undefined1 *)((longlong)puVar13 + 10) = *(undefined1 *)((longlong)piVar12 + 10);
            *(undefined1 *)((longlong)puVar13 + 0xb) = *(undefined1 *)((longlong)piVar12 + 0xb);
            *(int *)((longlong)puVar13 + 0xc) = piVar12[3];
            puVar13[5] = 0;
            puVar13[4] = 0;
            *(float *)(puVar13 + 2) = local_48;
            *(float *)((longlong)puVar13 + 0x14) = fStack_44;
            *(float *)(puVar13 + 3) = fStack_40;
            *(float *)((longlong)puVar13 + 0x1c) = fStack_3c;
          }
        }
      }
      else if (param_3 != '\0') {
        if (lVar14 != 0) {
          pcVar2 = *(char **)(lVar14 + 0xb0);
          if (pcVar2 != pcVar2 + (longlong)*(int *)(lVar14 + 0xb8) * 0x30) {
            pcVar11 = pcVar2 + 0xb;
            do {
              if ((*(int *)(pcVar11 + -0xb) == *piVar12) && (*(int *)(pcVar11 + -7) == piVar12[1]))
              {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (((bVar3) && (*pcVar11 == *(char *)((longlong)piVar12 + 0xb))) &&
                 (*(int *)(pcVar11 + 1) == piVar12[3])) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) goto LAB_142589909;
              pcVar1 = pcVar11 + 0x25;
              pcVar11 = pcVar11 + 0x30;
            } while (pcVar1 != pcVar2 + (longlong)*(int *)(lVar14 + 0xb8) * 0x30);
          }
        }
        goto LAB_142589813;
      }
LAB_142589909:
      lVar8 = lVar8 + 0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = 0;
  local_68 = 0;
  local_60 = 0;
  lVar8 = (longlong)*(int *)(lVar6 + 0x868);
  if (0 < lVar8) {
    do {
      piVar12 = (int *)(*(longlong *)(lVar6 + 0x860) + lVar7);
      local_68 = *(longlong *)(piVar12 + 4);
      cVar4 = (**(code **)(*(longlong *)param_1[0x12] + 0x428))
                        ((longlong *)param_1[0x12],piVar12,&local_68,1);
      if ((cVar4 == '\0') || (param_3 == '\x02')) {
LAB_1425899e9:
        cVar4 = (**(code **)(*param_2 + 0x428))(param_2,piVar12,&local_60,bVar15);
        if ((cVar4 != '\0') && (local_60 != local_68)) {
          iVar5 = (int)param_1[0x19];
          *(int *)(param_1 + 0x19) = iVar5 + 1;
          if (*(int *)((longlong)param_1 + 0xcc) < iVar5 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar5);
          }
          puVar10 = (undefined8 *)0x0;
          puVar13 = (undefined8 *)(param_1[0x18] + (longlong)iVar5 * 0x28);
          if (puVar13 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar13 + 1) = 0x202ffff;
            *puVar13 = 0;
            *(undefined4 *)((longlong)puVar13 + 0xc) = 0xffffffff;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar10 = puVar13;
          }
          *puVar10 = *(undefined8 *)piVar12;
          *(short *)(puVar10 + 1) = (short)piVar12[2];
          *(undefined1 *)((longlong)puVar10 + 10) = *(undefined1 *)((longlong)piVar12 + 10);
          *(undefined1 *)((longlong)puVar10 + 0xb) = *(undefined1 *)((longlong)piVar12 + 0xb);
          *(int *)((longlong)puVar10 + 0xc) = piVar12[3];
          puVar10[4] = 0;
          puVar10[3] = 0;
          puVar10[2] = local_60;
        }
      }
      else if (param_3 != '\0') {
        if (lVar14 != 0) {
          pcVar2 = *(char **)(lVar14 + 0xc0);
          if (pcVar2 != pcVar2 + (longlong)*(int *)(lVar14 + 200) * 0x28) {
            pcVar11 = pcVar2 + 0xb;
            do {
              if ((*(int *)(pcVar11 + -0xb) == *piVar12) && (*(int *)(pcVar11 + -7) == piVar12[1]))
              {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (((bVar3) && (*pcVar11 == *(char *)((longlong)piVar12 + 0xb))) &&
                 (*(int *)(pcVar11 + 1) == piVar12[3])) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) goto LAB_142589ab1;
              pcVar1 = pcVar11 + 0x1d;
              pcVar11 = pcVar11 + 0x28;
            } while (pcVar1 != pcVar2 + (longlong)*(int *)(lVar14 + 200) * 0x28);
          }
        }
        goto LAB_1425899e9;
      }
LAB_142589ab1:
      lVar7 = lVar7 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  FUN_142598e80(param_1);
  return;
}



// FUNCTION 142589b00 FUN_142589b00 body=663 status=ok
// SIG undefined FUN_142589b00(void)

void FUN_142589b00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0xa0);
    puVar8 = puVar7 + (longlong)*(int *)(param_2 + 0xa8) * 5;
    for (; puVar7 != puVar8; puVar7 = puVar7 + 5) {
      local_48 = *puVar7;
      local_40 = 0x202ffff;
      local_3c = 0xffffffff;
      FUN_1425a2780(param_1,&local_48,*(undefined4 *)(puVar7 + 2));
    }
    puVar8 = *(undefined8 **)(param_2 + 0xb0);
    puVar7 = puVar8 + (longlong)*(int *)(param_2 + 0xb8) * 6;
    if (puVar8 != puVar7) {
      puVar9 = puVar8 + 2;
      do {
        local_38 = *puVar9;
        uStack_30 = *(undefined4 *)(puVar9 + 1);
        uStack_2c = *(undefined4 *)((longlong)puVar9 + 0xc);
        local_48 = *puVar8;
        local_40 = 0x202ffff;
        local_3c = 0xffffffff;
        FUN_1425a2c20(param_1,&local_48,&local_38);
        puVar8 = puVar8 + 6;
        puVar9 = puVar9 + 6;
      } while (puVar8 != puVar7);
    }
    puVar7 = *(undefined8 **)(param_2 + 0xc0);
    puVar8 = puVar7 + (longlong)*(int *)(param_2 + 200) * 5;
    for (; puVar7 != puVar8; puVar7 = puVar7 + 5) {
      FUN_1425a28b0(param_1,*puVar7,puVar7[2]);
    }
    puVar8 = *(undefined8 **)(param_2 + 0xd0);
    puVar7 = puVar8 + (longlong)*(int *)(param_2 + 0xd8) * 6;
    if (puVar8 != puVar7) {
      plVar1 = (longlong *)(param_1 + 0xd0);
      do {
        piVar11 = (int *)*plVar1;
        iVar2 = *(int *)(param_1 + 0xd8);
        uVar4 = *puVar8;
        lVar5 = puVar8[2];
        iVar3 = *(int *)(puVar8 + 3);
        piVar10 = piVar11 + (longlong)iVar2 * 0xc;
        if (piVar11 != piVar10) {
          local_38._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          do {
            if ((((*piVar11 == (int)uVar4) && (piVar11[1] == local_38._4_4_)) &&
                (*(char *)((longlong)piVar11 + 0xb) == '\x02')) && (piVar11[3] == -1))
            goto LAB_142589d33;
            piVar11 = piVar11 + 0xc;
          } while (piVar11 != piVar10);
        }
        *(int *)(param_1 + 0xd8) = iVar2 + 1;
        local_38 = uVar4;
        if (*(int *)(param_1 + 0xdc) < iVar2 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        piVar11 = (int *)0x0;
        piVar10 = (int *)(*plVar1 + (longlong)iVar2 * 0x30);
        if (piVar10 != (int *)0x0) {
          piVar10[4] = 0;
          piVar10[5] = 0;
          piVar10[6] = 0;
          piVar10[8] = 0;
          piVar10[9] = 0;
          piVar10[10] = 0;
          piVar11 = piVar10;
        }
        *(undefined8 *)piVar11 = uVar4;
        piVar11[3] = -1;
        piVar11[2] = 0x202ffff;
        piVar11[9] = 0;
        piVar11[10] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        lVar6 = UEngine::GetTinyFont();
        if (*(longlong *)(piVar11 + 4) != lVar6) {
          UEngine::GetTinyFont();
        }
        piVar11[6] = iVar3 + -1;
        uVar4 = local_38;
LAB_142589d33:
        local_38 = uVar4;
        if ((*(longlong *)(piVar11 + 4) != lVar5) || (piVar11[6] != iVar3)) {
          *(longlong *)(piVar11 + 4) = lVar5;
          piVar11[6] = iVar3;
          FUN_14257bd20(param_1,piVar11);
          FUN_142587880(param_1);
        }
        puVar8 = puVar8 + 6;
      } while (puVar8 != puVar7);
    }
  }
  return;
}



// FUNCTION 142589da0 FUN_142589da0 body=1395 status=ok
// SIG undefined FUN_142589da0(void)

void FUN_142589da0(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((param_2 != (longlong *)0x0) && (param_2 != param_1)) {
    FUN_142588c20(param_1,1);
    local_68 = (undefined1 *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    (**(code **)(*param_1 + 0x348))(param_1,&local_68,&local_58);
    puVar9 = local_68 + (longlong)(int)local_60 * 0x10;
    if (local_68 != puVar9) {
      puVar8 = local_68 + 10;
      do {
        local_res20 = 0;
        cVar5 = (**(code **)(*param_2 + 0x430))(param_2,puVar8 + -10,&local_res20,&local_res10,0);
        if (cVar5 != '\0') {
          iVar2 = (int)param_1[0x1b];
          *(int *)(param_1 + 0x1b) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xdc) < iVar2 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a,iVar2);
          }
          puVar6 = (undefined8 *)((longlong)iVar2 * 0x30 + param_1[0x1a]);
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            *(undefined4 *)(puVar6 + 1) = 0x202ffff;
            local_res18 = 0;
            *puVar6 = 0;
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0xffffffff;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0;
            *(undefined4 *)(puVar6 + 5) = 0;
          }
          *puVar6 = *(undefined8 *)(puVar8 + -10);
          *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar8 + -2);
          *(undefined1 *)((longlong)puVar6 + 10) = *puVar8;
          *(undefined1 *)((longlong)puVar6 + 0xb) = puVar8[1];
          *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)(puVar8 + 2);
          *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
          puVar6[2] = local_res20;
          *(undefined4 *)(puVar6 + 3) = (undefined4)local_res10;
        }
        puVar1 = puVar8 + 6;
        puVar8 = puVar8 + 0x10;
      } while (puVar1 != puVar9);
    }
    lVar3 = local_60;
    uVar4 = local_60._4_4_;
    local_60 = (ulonglong)local_60._4_4_ << 0x20;
    if ((lVar3 < 0) && (uVar4 != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_68,0);
    }
    lVar3 = local_50;
    uVar4 = local_50._4_4_;
    local_50 = (ulonglong)local_50._4_4_ << 0x20;
    if ((lVar3 < 0) && (uVar4 != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_58,0);
    }
    (**(code **)(*param_1 + 0x330))(param_1,&local_68,&local_58);
    puVar9 = local_68 + (longlong)(int)local_60 * 0x10;
    if (local_68 != puVar9) {
      puVar8 = local_68 + 10;
      do {
        local_res10 = CONCAT44(local_res10._4_4_,0x3f800000);
        cVar5 = (**(code **)(*param_2 + 1000))(param_2,puVar8 + -10,&local_res10,0);
        if (cVar5 != '\0') {
          iVar2 = (int)param_1[0x15];
          *(int *)(param_1 + 0x15) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xac) < iVar2 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x14,iVar2);
          }
          puVar7 = (undefined8 *)0x0;
          puVar6 = (undefined8 *)(param_1[0x14] + (longlong)iVar2 * 0x28);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar6 + 1) = 0x202ffff;
            *puVar6 = 0;
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0xffffffff;
            puVar6[2] = 0;
            puVar6[3] = 0;
            *(undefined4 *)(puVar6 + 4) = 0;
            local_res18 = 0;
            puVar7 = puVar6;
          }
          *puVar7 = *(undefined8 *)(puVar8 + -10);
          *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(puVar8 + -2);
          *(undefined1 *)((longlong)puVar7 + 10) = *puVar8;
          *(undefined1 *)((longlong)puVar7 + 0xb) = puVar8[1];
          *(undefined4 *)((longlong)puVar7 + 0xc) = *(undefined4 *)(puVar8 + 2);
          *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
          *(undefined4 *)(puVar7 + 2) = (undefined4)local_res10;
        }
        puVar1 = puVar8 + 6;
        puVar8 = puVar8 + 0x10;
      } while (puVar1 != puVar9);
    }
    lVar3 = local_60;
    uVar4 = local_60._4_4_;
    local_60 = (ulonglong)local_60._4_4_ << 0x20;
    if ((lVar3 < 0) && (uVar4 != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_68,0);
    }
    lVar3 = local_50;
    uVar4 = local_50._4_4_;
    local_50 = (ulonglong)local_50._4_4_ << 0x20;
    if ((lVar3 < 0) && (uVar4 != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_58,0);
    }
    (**(code **)(*param_1 + 0x338))(param_1,&local_68,&local_58);
    puVar9 = local_68 + (longlong)(int)local_60 * 0x10;
    if (local_68 != puVar9) {
      puVar8 = local_68 + 10;
      do {
        cVar5 = (**(code **)(*param_2 + 0x400))(param_2,puVar8 + -10,&local_48,0);
        if (cVar5 != '\0') {
          iVar2 = (int)param_1[0x17];
          *(int *)(param_1 + 0x17) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xbc) < iVar2 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar2);
          }
          puVar6 = (undefined8 *)((longlong)iVar2 * 0x30 + param_1[0x16]);
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            *(undefined4 *)(puVar6 + 1) = 0x202ffff;
            local_res10 = 0;
            *puVar6 = 0;
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0xffffffff;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
          }
          *puVar6 = *(undefined8 *)(puVar8 + -10);
          *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar8 + -2);
          *(undefined1 *)((longlong)puVar6 + 10) = *puVar8;
          *(undefined1 *)((longlong)puVar6 + 0xb) = puVar8[1];
          *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)(puVar8 + 2);
          puVar6[5] = 0;
          puVar6[4] = 0;
          *(undefined4 *)(puVar6 + 2) = local_48;
          *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_44;
          *(undefined4 *)(puVar6 + 3) = uStack_40;
          *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_3c;
        }
        puVar1 = puVar8 + 6;
        puVar8 = puVar8 + 0x10;
      } while (puVar1 != puVar9);
    }
    lVar3 = local_60;
    uVar4 = local_60._4_4_;
    local_60 = (ulonglong)local_60._4_4_ << 0x20;
    if ((lVar3 < 0) && (uVar4 != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_68,0);
    }
    lVar3 = local_50;
    uVar4 = local_50._4_4_;
    local_50 = (ulonglong)local_50._4_4_ << 0x20;
    if ((lVar3 < 0) && (uVar4 != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_58,0);
    }
    (**(code **)(*param_1 + 0x340))(param_1,&local_68,&local_58);
    puVar9 = local_68 + (longlong)(int)local_60 * 0x10;
    if (local_68 != puVar9) {
      puVar8 = local_68 + 10;
      do {
        local_res18 = 0;
        cVar5 = (**(code **)(*param_2 + 0x428))(param_2,puVar8 + -10,&local_res18,0);
        if (cVar5 != '\0') {
          iVar2 = (int)param_1[0x19];
          *(int *)(param_1 + 0x19) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xcc) < iVar2 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar2);
          }
          puVar7 = (undefined8 *)0x0;
          puVar6 = (undefined8 *)(param_1[0x18] + (longlong)iVar2 * 0x28);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar6 + 1) = 0x202ffff;
            *puVar6 = 0;
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0xffffffff;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0;
            local_res10 = 0;
            puVar7 = puVar6;
          }
          *puVar7 = *(undefined8 *)(puVar8 + -10);
          *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(puVar8 + -2);
          *(undefined1 *)((longlong)puVar7 + 10) = *puVar8;
          *(undefined1 *)((longlong)puVar7 + 0xb) = puVar8[1];
          *(undefined4 *)((longlong)puVar7 + 0xc) = *(undefined4 *)(puVar8 + 2);
          puVar7[4] = 0;
          puVar7[3] = 0;
          puVar7[2] = local_res18;
        }
        puVar1 = puVar8 + 6;
        puVar8 = puVar8 + 0x10;
      } while (puVar1 != puVar9);
    }
    FUN_142598e80(param_1);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14258a320 FUN_14258a320 body=1767 status=ok
// SIG undefined FUN_14258a320(void)

void FUN_14258a320(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  longlong local_48;
  undefined8 local_40;
  
  if ((param_2 != 0) && (param_2 != param_1)) {
    FUN_142588c20(param_1,1);
    uVar17 = 0;
    local_58 = 0;
    local_4c = 0;
    uVar19 = uVar17;
    uVar20 = uVar17;
    while( true ) {
      iVar16 = (int)uVar17;
      local_50 = iVar16 + 1;
      if ((int)uVar19 < (int)local_50) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,uVar17);
        uVar19 = (ulonglong)local_4c;
        uVar20 = local_58;
      }
      uVar18 = local_50;
      uVar17 = (ulonglong)local_50;
      *(longlong *)(uVar20 + (longlong)iVar16 * 8) = param_2;
      if (param_2 == 0) break;
      lVar7 = FUN_1429b6de0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((!bVar5) || (param_2 = *(longlong *)(param_2 + 0x90), param_2 == 0)) break;
    }
    lVar7 = (longlong)(int)(uVar18 - 1);
    if (-1 < (int)(uVar18 - 1)) {
      do {
        plVar2 = *(longlong **)(uVar20 + lVar7 * 8);
        if (plVar2 != (longlong *)0x0) {
          lVar8 = FUN_1429b6de0();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            plVar10 = (longlong *)plVar2[0x14];
            plVar9 = plVar10 + (longlong)(int)plVar2[0x15] * 5;
            for (; plVar10 != plVar9; plVar10 = plVar10 + 5) {
              plVar13 = *(longlong **)(param_1 + 0xa0);
              plVar15 = plVar13 + (longlong)*(int *)(param_1 + 0xa8) * 5;
              if (plVar13 != plVar15) {
                do {
                  if (*plVar13 == *plVar10) {
                    *(int *)(plVar13 + 2) = (int)plVar10[2];
                    break;
                  }
                  plVar13 = plVar13 + 5;
                } while (plVar13 != plVar15);
              }
            }
            plVar9 = (longlong *)plVar2[0x16];
            plVar10 = plVar9 + (longlong)(int)plVar2[0x17] * 6;
            if (plVar9 != plVar10) {
              plVar15 = plVar9 + 2;
              do {
                plVar13 = *(longlong **)(param_1 + 0xb0);
                plVar12 = plVar13 + (longlong)*(int *)(param_1 + 0xb8) * 6;
                if (plVar13 != plVar12) {
                  do {
                    if (*plVar13 == *plVar9) {
                      uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
                      lVar8 = plVar15[1];
                      uVar4 = *(undefined4 *)((longlong)plVar15 + 0xc);
                      *(int *)(plVar13 + 2) = (int)*plVar15;
                      *(undefined4 *)((longlong)plVar13 + 0x14) = uVar3;
                      *(int *)(plVar13 + 3) = (int)lVar8;
                      *(undefined4 *)((longlong)plVar13 + 0x1c) = uVar4;
                      break;
                    }
                    plVar13 = plVar13 + 6;
                  } while (plVar13 != plVar12);
                }
                plVar9 = plVar9 + 6;
                plVar15 = plVar15 + 6;
              } while (plVar9 != plVar10);
            }
            plVar9 = (longlong *)plVar2[0x18];
            plVar2 = plVar9 + (longlong)(int)plVar2[0x19] * 5;
            for (; plVar9 != plVar2; plVar9 = plVar9 + 5) {
              plVar15 = *(longlong **)(param_1 + 0xc0);
              plVar10 = plVar15 + (longlong)*(int *)(param_1 + 200) * 5;
              if (plVar15 != plVar10) {
                do {
                  if (*plVar15 == *plVar9) {
                    plVar15[2] = plVar9[2];
                    break;
                  }
                  plVar15 = plVar15 + 5;
                } while (plVar15 != plVar10);
              }
            }
          }
          else {
            lVar8 = ACineCameraActor::GetPrivateStaticClass();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) &&
               (((lVar8 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar8 != 0 &&
                 (plVar9 = (longlong *)
                           (**(code **)(*plVar2 + 0x300))(plVar2,*(undefined4 *)(lVar8 + 0x1c0),3),
                 plVar9 != (longlong *)0x0)) ||
                (plVar9 = (longlong *)(**(code **)(*plVar2 + 0x300))(plVar2,DAT_1464c9c14,3),
                plVar9 != (longlong *)0x0)))) {
              plVar10 = (longlong *)FUN_142597c00(plVar9);
              plVar15 = (longlong *)*plVar10;
              plVar10 = plVar15 + (int)plVar10[1];
              for (; plVar15 != plVar10; plVar15 = plVar15 + 1) {
                plVar13 = (longlong *)*plVar15;
                ppuVar11 = (undefined **)(**(code **)(*plVar13 + 8))(plVar13);
                if (ppuVar11 == &PTR_u_FMaterialUniformExpressionScalar_146533e58) {
                  iVar16 = *(int *)(param_1 + 0xa8);
                  *(int *)(param_1 + 0xa8) = iVar16 + 1;
                  if (*(int *)(param_1 + 0xac) < iVar16 + 1) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0xa0,iVar16);
                  }
                  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar16 * 0x28);
                  plVar14 = (longlong *)0x0;
                  if (plVar12 != (longlong *)0x0) {
                    *(undefined4 *)(plVar12 + 1) = 0x202ffff;
                    *(undefined4 *)((longlong)plVar12 + 0xc) = 0xffffffff;
                    *plVar12 = 0;
                    plVar12[2] = 0;
                    plVar12[3] = 0;
                    *(undefined4 *)(plVar12 + 4) = 0;
                    plVar14 = plVar12;
                  }
                  *plVar14 = plVar13[2];
                  *(int *)(plVar14 + 2) = (int)plVar13[4];
                }
              }
              plVar10 = (longlong *)FUN_142597cd0(plVar9);
              plVar15 = (longlong *)*plVar10;
              plVar10 = plVar15 + (int)plVar10[1];
              for (; plVar15 != plVar10; plVar15 = plVar15 + 1) {
                plVar13 = (longlong *)*plVar15;
                ppuVar11 = (undefined **)(**(code **)(*plVar13 + 8))(plVar13);
                if (ppuVar11 == &PTR_u_FMaterialUniformExpressionVector_146533e48) {
                  iVar16 = *(int *)(param_1 + 0xb8);
                  *(int *)(param_1 + 0xb8) = iVar16 + 1;
                  if (*(int *)(param_1 + 0xbc) < iVar16 + 1) {
                    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,iVar16);
                  }
                  plVar14 = (longlong *)((longlong)iVar16 * 0x30 + *(longlong *)(param_1 + 0xb0));
                  plVar12 = (longlong *)0x0;
                  if (plVar14 != (longlong *)0x0) {
                    *(undefined4 *)(plVar14 + 1) = 0x202ffff;
                    *(undefined4 *)((longlong)plVar14 + 0xc) = 0xffffffff;
                    *plVar14 = 0;
                    plVar14[2] = 0;
                    plVar14[3] = 0;
                    plVar14[4] = 0;
                    plVar14[5] = 0;
                    plVar12 = plVar14;
                  }
                  *plVar12 = plVar13[2];
                  uVar3 = *(undefined4 *)((longlong)plVar13 + 0x24);
                  lVar8 = plVar13[5];
                  uVar4 = *(undefined4 *)((longlong)plVar13 + 0x2c);
                  *(int *)(plVar12 + 2) = (int)plVar13[4];
                  *(undefined4 *)((longlong)plVar12 + 0x14) = uVar3;
                  *(int *)(plVar12 + 3) = (int)lVar8;
                  *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar4;
                }
              }
              local_48 = FUN_142597a60(plVar9);
              local_40 = FUN_142597b30(plVar9);
              uVar18 = 0;
              plVar10 = &local_48;
              do {
                plVar13 = *(longlong **)*plVar10;
                plVar15 = plVar13 + (int)((longlong *)*plVar10)[1];
                uVar20 = local_58;
                for (; local_58 = uVar20, plVar13 != plVar15; plVar13 = plVar13 + 1) {
                  plVar14 = (longlong *)0x0;
                  plVar12 = (longlong *)*plVar13;
                  ppuVar11 = (undefined **)(**(code **)(*plVar12 + 8))(plVar12);
                  if (ppuVar11 == &PTR_u_FMaterialUniformExpressionTextur_146533e68) {
                    iVar16 = *(int *)(param_1 + 200);
                    *(int *)(param_1 + 200) = iVar16 + 1;
                    if (*(int *)(param_1 + 0xcc) < iVar16 + 1) {
                      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0xc0,iVar16);
                    }
                    plVar1 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar16 * 0x28);
                    if (plVar1 != (longlong *)0x0) {
                      *(undefined4 *)(plVar1 + 1) = 0x202ffff;
                      *plVar1 = 0;
                      *(undefined4 *)((longlong)plVar1 + 0xc) = 0xffffffff;
                      plVar1[2] = 0;
                      plVar1[3] = 0;
                      plVar1[4] = 0;
                      plVar14 = plVar1;
                    }
                    plVar1 = plVar14 + 2;
                    *plVar14 = plVar12[3];
                    *plVar1 = 0;
                    cVar6 = FUN_1425b3950();
                    cVar6 = (**(code **)(*plVar2 + 0x428))(plVar2,plVar12 + 3,plVar1,cVar6 == '\0');
                    if (cVar6 == '\0') {
                      iVar16 = (int)plVar12[2];
                      plVar12 = (longlong *)(**(code **)(*plVar9 + 0x340))();
                      lVar8 = 0;
                      if ((iVar16 < 0) || ((int)plVar12[1] <= iVar16)) {
                        bVar5 = false;
                      }
                      else {
                        bVar5 = true;
                      }
                      if (bVar5) {
                        lVar8 = *(longlong *)(*plVar12 + (longlong)iVar16 * 8);
                      }
                      else if (DAT_146afeeec == '\0') {
                        DAT_146afeeec = '\x01';
                      }
                      *plVar1 = lVar8;
                    }
                  }
                  uVar20 = local_58;
                }
                uVar18 = uVar18 + 1;
                plVar10 = plVar10 + 1;
              } while (uVar18 < 2);
            }
          }
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_142598e80(param_1);
    if (uVar20 != 0) {
      FMemory::Free(uVar20);
    }
  }
  return;
}



// FUNCTION 14258aa10 FUN_14258aa10 body=218 status=ok
// SIG undefined FUN_14258aa10(void)

void FUN_14258aa10(longlong param_1,longlong param_2)

{
  FUN_142588c20(param_1,1);
  if (param_2 != 0) {
    if ((undefined8 *)(param_1 + 0xb0) != (undefined8 *)(param_2 + 0xb0)) {
      FUN_14257a950((undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0xb0),
                    *(undefined4 *)(param_2 + 0xb8),*(undefined4 *)(param_1 + 0xbc),0);
    }
    if ((undefined8 *)(param_1 + 0xa0) != (undefined8 *)(param_2 + 0xa0)) {
      FUN_14257a410((undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0xa0),
                    *(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_1 + 0xac),0);
    }
    if ((undefined8 *)(param_1 + 0xc0) != (undefined8 *)(param_2 + 0xc0)) {
      FUN_14257a8a0((undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0xc0),
                    *(undefined4 *)(param_2 + 200),*(undefined4 *)(param_1 + 0xcc),0);
    }
    if ((undefined8 *)(param_1 + 0xd0) != (undefined8 *)(param_2 + 0xd0)) {
      FUN_14257a350((undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_2 + 0xd0),
                    *(undefined4 *)(param_2 + 0xd8),*(undefined4 *)(param_1 + 0xdc),0);
    }
  }
  FUN_142598e80(param_1);
  return;
}



// FUNCTION 14258aaf0 FUN_14258aaf0 body=814 status=ok
// SIG undefined FUN_14258aaf0(void)

void FUN_14258aaf0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_48;
  int iStack_40;
  int iStack_3c;
  
  local_res10 = param_2;
  lVar5 = (**(code **)(*param_1 + 0x300))(param_1,param_3,3);
  if (lVar5 != 0) {
    local_48 = lVar5;
    FUN_142588c20(param_1,0);
    plVar6 = (longlong *)FUN_142597c00(lVar5);
    uVar4 = local_res10;
    lVar3 = plVar6[1];
    if (0 < (longlong)(int)lVar3) {
      lVar10 = 0;
      do {
        plVar11 = *(longlong **)(*plVar6 + lVar10 * 8);
        ppuVar7 = (undefined **)(**(code **)(*plVar11 + 8))(plVar11);
        if (ppuVar7 == &PTR_u_FMaterialUniformExpressionScalar_146533e58) {
          FUN_1425bf230(plVar11,uVar4,&local_res8);
          plVar8 = (longlong *)param_1[0x14];
          iVar1 = (int)param_1[0x15];
          plVar2 = plVar8 + (longlong)iVar1 * 5;
          if (plVar8 != plVar2) {
            do {
              if (((((int)*plVar8 == (int)plVar11[2]) &&
                   (*(int *)((longlong)plVar8 + 4) == *(int *)((longlong)plVar11 + 0x14))) &&
                  (*(char *)((longlong)plVar8 + 0xb) == *(char *)((longlong)plVar11 + 0x1b))) &&
                 (*(int *)((longlong)plVar8 + 0xc) == *(int *)((longlong)plVar11 + 0x1c)))
              goto LAB_14258ac7d;
              plVar8 = plVar8 + 5;
            } while (plVar8 != plVar2);
          }
          *(int *)(param_1 + 0x15) = iVar1 + 1;
          if (*(int *)((longlong)param_1 + 0xac) < iVar1 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x14);
          }
          plVar8 = (longlong *)(param_1[0x14] + (longlong)iVar1 * 0x28);
          if (plVar8 != (longlong *)0x0) {
            *(int *)(plVar8 + 1) = 0x202ffff;
            *plVar8 = 0;
            *(int *)((longlong)plVar8 + 0xc) = -1;
            plVar8[2] = 0;
            plVar8[3] = 0;
            *(int *)(plVar8 + 4) = 0;
          }
          *plVar8 = plVar11[2];
          *(short *)(plVar8 + 1) = (short)plVar11[3];
          *(undefined1 *)((longlong)plVar8 + 10) = *(undefined1 *)((longlong)plVar11 + 0x1a);
          *(undefined1 *)((longlong)plVar8 + 0xb) = *(undefined1 *)((longlong)plVar11 + 0x1b);
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar11 + 0x1c);
LAB_14258ac7d:
          *(int *)(plVar8 + 2) = (int)local_res8;
        }
        lVar10 = lVar10 + 1;
        param_2 = local_res10;
        lVar5 = local_48;
      } while (lVar10 < (int)lVar3);
    }
    plVar6 = (longlong *)FUN_142597cd0(lVar5);
    lVar5 = plVar6[1];
    if (0 < (longlong)(int)lVar5) {
      plVar11 = (longlong *)0x0;
      do {
        plVar2 = *(longlong **)(*plVar6 + (longlong)plVar11 * 8);
        ppuVar7 = (undefined **)(**(code **)(*plVar2 + 8))(plVar2);
        if (ppuVar7 == &PTR_u_FMaterialUniformExpressionVector_146533e48) {
          FUN_1425bf320(plVar2,param_2,&local_48);
          plVar9 = (longlong *)param_1[0x16];
          iVar1 = (int)param_1[0x17];
          plVar8 = plVar9 + (longlong)iVar1 * 6;
          if (plVar9 != plVar8) {
            do {
              if ((((int)*plVar9 == (int)plVar2[2]) &&
                  (*(int *)((longlong)plVar9 + 4) == *(int *)((longlong)plVar2 + 0x14))) &&
                 ((*(char *)((longlong)plVar9 + 0xb) == *(char *)((longlong)plVar2 + 0x1b) &&
                  (*(int *)((longlong)plVar9 + 0xc) == *(int *)((longlong)plVar2 + 0x1c)))))
              goto LAB_14258adcf;
              plVar9 = plVar9 + 6;
            } while (plVar9 != plVar8);
          }
          *(int *)(param_1 + 0x17) = iVar1 + 1;
          if (*(int *)((longlong)param_1 + 0xbc) < iVar1 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar1);
          }
          plVar8 = (longlong *)(param_1[0x16] + (longlong)iVar1 * 0x30);
          plVar9 = (longlong *)0x0;
          if (plVar8 != (longlong *)0x0) {
            *(int *)(plVar8 + 1) = 0x202ffff;
            *plVar8 = 0;
            *(int *)((longlong)plVar8 + 0xc) = -1;
            plVar8[2] = 0;
            plVar8[3] = 0;
            plVar8[4] = 0;
            plVar8[5] = 0;
            local_res8 = 0;
            plVar9 = plVar8;
          }
          *plVar9 = plVar2[2];
          *(short *)(plVar9 + 1) = (short)plVar2[3];
          *(undefined1 *)((longlong)plVar9 + 10) = *(undefined1 *)((longlong)plVar2 + 0x1a);
          *(undefined1 *)((longlong)plVar9 + 0xb) = *(undefined1 *)((longlong)plVar2 + 0x1b);
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar2 + 0x1c);
LAB_14258adcf:
          *(int *)(plVar9 + 2) = (int)local_48;
          *(int *)((longlong)plVar9 + 0x14) = local_48._4_4_;
          *(int *)(plVar9 + 3) = iStack_40;
          *(int *)((longlong)plVar9 + 0x1c) = iStack_3c;
        }
        plVar11 = (longlong *)((longlong)plVar11 + 1);
        param_2 = local_res10;
      } while ((longlong)plVar11 < (longlong)(int)lVar5);
    }
    FUN_142598e80(param_1);
  }
  return;
}



// FUNCTION 14258ae20 Create body=138 status=ok
// SIG undefined Create(void)

undefined8 UMaterialInstanceDynamic::Create(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_2 = GetTransientPackage();
  }
  FUN_1417846f0(param_2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_1429ba110();
  uVar1 = FUN_1417985e0(uVar1,param_2,0,0,0,0,0,0,0);
  FUN_1425a2490(uVar1,param_1,0);
  return uVar1;
}



// FUNCTION 14258aeb0 Create body=156 status=ok
// SIG undefined Create(void)

undefined8 UMaterialInstanceDynamic::Create(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_2 = GetTransientPackage();
  }
  if (param_3 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = FUN_1429ba110();
  uVar1 = FUN_1417985e0(uVar1,param_2,param_3,0,0,0,0,0,0);
  FUN_1425a2490(uVar1,param_1,0);
  return uVar1;
}



// FUNCTION 14258af50 FUN_14258af50 body=332 status=ok
// SIG undefined FUN_14258af50(void)

undefined8 * FUN_14258af50(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_14510bfe0;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14258b0a0 FUN_14258b0a0 body=332 status=ok
// SIG undefined FUN_14258b0a0(void)

undefined8 * FUN_14258b0a0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_14510bfd0;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14258b1f0 FUN_14258b1f0 body=422 status=ok
// SIG undefined FUN_14258b1f0(void)

void FUN_14258b1f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  uVar6 = 0;
  uVar10 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x18) < plVar8) {
    uVar10 = uVar6;
  }
  if (uVar10 != 0) {
    do {
      puVar1 = (undefined8 *)*plVar8;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar1[8];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        puVar1[8] = 0;
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar8 = plVar8 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar10);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  plVar11 = *(longlong **)(param_1 + 0x20);
  plVar8 = plVar11 + *(int *)(param_1 + 0x28);
  for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
    lVar3 = *plVar11;
    plVar9 = *(longlong **)(lVar3 + 8);
    plVar5 = plVar9 + *(int *)(lVar3 + 0x10);
    for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
      lVar4 = *plVar9;
      if (lVar4 != 0) {
        FUN_1419e2a40(lVar4);
      }
      puVar1 = *(undefined8 **)(lVar4 + 0x40);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(lVar4 + 0x40) = 0;
      FShader::Release(lVar4);
    }
    if (lVar3 != 0) {
      iVar7 = *(int *)(lVar3 + 0x10);
      plVar5 = *(longlong **)(lVar3 + 8);
      if (iVar7 != 0) {
        do {
          if (*plVar5 != 0) {
            FShader::Release();
          }
          plVar5 = plVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        plVar5 = *(longlong **)(lVar3 + 8);
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
      FMemory::operator_delete(lVar3,0x18);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  return;
}



// FUNCTION 14258b3a0 FUN_14258b3a0 body=200 status=ok
// SIG undefined FUN_14258b3a0(void)

void FUN_14258b3a0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  FUN_14258b1f0();
  uVar3 = 0;
  uVar5 = uVar3;
  if (0 < *(int *)(param_1 + 0xf8)) {
    do {
      uVar4 = (int)uVar5 + 1;
      *(undefined8 *)(uVar3 + *(longlong *)(param_1 + 0xf0)) = 0;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0xf8));
  }
  iVar2 = *(int *)(param_1 + 0xe8) + -1;
  lVar6 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar6 * 8) + 0x10))();
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  for (iVar2 = *(int *)(param_1 + 0xe8); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_14257f410(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0xe0),0);
  }
  return;
}



// FUNCTION 14258b470 DiscardShaderMap body=57 status=ok
// SIG undefined DiscardShaderMap(void)

void FMaterial::DiscardShaderMap(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    lVar1 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (lVar1 != 0) {
      FUN_14259f650();
      return;
    }
  }
  return;
}



// FUNCTION 14258b4b0 FUN_14258b4b0 body=113 status=ok
// SIG undefined FUN_14258b4b0(void)

void FUN_14258b4b0(undefined8 *param_1)

{
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_14257d820(*param_1,param_1 + 3);
  if (param_1[1] != 0) {
    FUN_14257d820(param_1[1],param_1 + 3);
  }
  if (param_1[2] != 0) {
    FUN_14257d820(param_1[2],param_1 + 3);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14258b530 FUN_14258b530 body=113 status=ok
// SIG undefined FUN_14258b530(void)

void FUN_14258b530(undefined8 *param_1)

{
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_14257d950(*param_1,param_1 + 3);
  if (param_1[1] != 0) {
    FUN_14257d950(param_1[1],param_1 + 3);
  }
  if (param_1[2] != 0) {
    FUN_14257d950(param_1[2],param_1 + 3);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14258b5b0 FUN_14258b5b0 body=135 status=ok
// SIG undefined FUN_14258b5b0(void)

void FUN_14258b5b0(undefined8 *param_1)

{
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_14257db90(*param_1,param_1 + 3,param_1 + 5);
  if (param_1[1] != 0) {
    FUN_14257db90(param_1[1],param_1 + 3,param_1 + 5);
  }
  if (param_1[2] != 0) {
    FUN_14257db90(param_1[2],param_1 + 3,param_1 + 5);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14258b640 FUN_14258b640 body=135 status=ok
// SIG undefined FUN_14258b640(void)

void FUN_14258b640(undefined8 *param_1)

{
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_14257da70(*param_1,param_1 + 3,param_1 + 5);
  if (param_1[1] != 0) {
    FUN_14257da70(param_1[1],param_1 + 3,param_1 + 5);
  }
  if (param_1[2] != 0) {
    FUN_14257da70(param_1[2],param_1 + 3,param_1 + 5);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14258b6d0 FUN_14258b6d0 body=135 status=ok
// SIG undefined FUN_14258b6d0(void)

void FUN_14258b6d0(undefined8 *param_1)

{
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_14257dca0(*param_1,param_1 + 3,param_1 + 5);
  if (param_1[1] != 0) {
    FUN_14257dca0(param_1[1],param_1 + 3,param_1 + 5);
  }
  if (param_1[2] != 0) {
    FUN_14257dca0(param_1[2],param_1 + 3,param_1 + 5);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14258b760 FUN_14258b760 body=192 status=ok
// SIG undefined FUN_14258b760(void)

void FUN_14258b760(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  LARGE_INTEGER local_res8;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res8);
  uVar2 = local_res8.s.LowPart;
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x158) = 0;
  if (0x7fffffff < *(uint *)(lVar1 + 0x15c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (lVar1 + 0x150,0);
  }
  *(undefined4 *)(lVar1 + 0x168) = 0;
  if ((*(int *)(lVar1 + 0x16c) < 0) && (*(int *)(lVar1 + 0x16c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (lVar1 + 0x160,0);
  }
  *(undefined4 *)(lVar1 + 0x178) = 0;
  if ((*(int *)(lVar1 + 0x17c) < 0) && (*(int *)(lVar1 + 0x17c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (lVar1 + 0x170,0);
  }
  if ((*(byte *)(lVar1 + 0x110) & 8) != 0) {
    *(byte *)(lVar1 + 0x110) = *(byte *)(lVar1 + 0x110) & 0xf7 | 0x10;
  }
  FUN_14259b260(lVar1);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - uVar2);
  return;
}



// FUNCTION 14258b820 FUN_14258b820 body=136 status=ok
// SIG undefined FUN_14258b820(void)

void FUN_14258b820(longlong *param_1)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x170) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x160) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x150) != 0) {
      FMemory::Free();
    }
    FMaterialRenderProxy::~FMaterialRenderProxy(lVar1);
    FMemory::operator_delete(lVar1,0x180);
  }
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14258b8b0 FUN_14258b8b0 body=150 status=ok
// SIG undefined FUN_14258b8b0(void)

void FUN_14258b8b0(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  *(longlong *)(*param_1 + 0x138) = param_1[1];
  pbVar1 = (byte *)(*param_1 + 0x110);
  *pbVar1 = *pbVar1 ^ ((char)param_1[2] << 5 ^ *(byte *)(*param_1 + 0x110)) & 0x20;
  pbVar1 = (byte *)(*param_1 + 0x110);
  *pbVar1 = *pbVar1 ^ (*(char *)((longlong)param_1 + 0x11) << 6 ^ *(byte *)(*param_1 + 0x110)) &
                      0x40;
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x110) & 8) != 0) {
    *(byte *)(lVar2 + 0x110) = *(byte *)(lVar2 + 0x110) & 0xf7 | 0x10;
    lVar2 = *param_1;
  }
  FUN_14259b260(lVar2);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14258b950 FUN_14258b950 body=274 status=ok
// SIG undefined FUN_14258b950(void)

void FUN_14258b950(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    uVar6 = *param_1;
    uVar7 = param_1[1];
    uVar8 = param_1[2];
    uVar9 = param_1[3];
    uVar10 = param_1[4];
    uVar11 = param_1[5];
    uVar12 = param_1[6];
    uVar13 = param_1[7];
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x44);
    uVar4 = *(undefined4 *)(param_1 + 9);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x4c);
    iVar14 = FSubsurfaceProfileTexture::FindAllocationId(&PTR_PTR_146534b70,lVar1);
    local_78 = (undefined4)uVar12;
    uStack_74 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uStack_70 = (undefined4)uVar13;
    uStack_6c = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_28 = local_78;
    uStack_24 = uStack_74;
    uStack_20 = uStack_70;
    uStack_1c = uStack_6c;
    local_58 = uVar6;
    uStack_50 = uVar7;
    local_48 = uVar8;
    uStack_40 = uVar9;
    local_38 = uVar10;
    uStack_30 = uVar11;
    local_18 = uVar2;
    uStack_14 = uVar3;
    uStack_10 = uVar4;
    uStack_c = uVar5;
    if (iVar14 == -1) {
      FSubsurfaceProfileTexture::AddProfile(&PTR_PTR_146534b70,&local_58,lVar1);
    }
    else {
      FSubsurfaceProfileTexture::UpdateProfile(&PTR_PTR_146534b70,iVar14,&local_58);
    }
  }
  *(undefined8 *)(param_1[0xb] + 0x118) = param_1[10];
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14258ba70 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
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



// FUNCTION 14258baf0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 14258bb70 FUN_14258bb70 body=540 status=ok
// SIG undefined FUN_14258bb70(void)

void FUN_14258bb70(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint *puVar9;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar4) goto LAB_14258bc41;
      uVar5 = puVar9[lVar6 + 1];
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
LAB_14258bc41:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      plVar7 = (longlong *)((longlong)iStack_2c * 0x20 + *param_1);
      if (plVar7[1] != 0) {
        FMemory::Free();
      }
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        piVar2 = (int *)(lVar6 + 0x35c);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          if ((*(byte *)(lVar6 + 0x364) & 1) != 0) {
            TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
            ::Remove(&DAT_146afe420 + (longlong)*(int *)(lVar6 + 0x30) * 10,lVar6 + 0x100);
            *(uint *)(lVar6 + 0x364) = *(uint *)(lVar6 + 0x364) & 0xfffffffe;
          }
          *(undefined1 *)(lVar6 + 0x360) = 1;
          BeginCleanup(lVar6 + 0xd8);
        }
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14258bd90 Empty body=399 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_14258be61;
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
LAB_14258be61:
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
      FMaterialShaderMapId::~FMaterialShaderMapId((longlong)iStack_1c * 0x108 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<264,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 14258bf20 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_14258bff1;
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
LAB_14258bff1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x80 + *param_1 + 0x20) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 14258c0c0 FUN_14258c0c0 body=545 status=ok
// SIG undefined FUN_14258c0c0(void)

void FUN_14258c0c0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
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
  
  plVar2 = (longlong *)(param_1 + 0x88);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0xb0);
  puVar1 = (uint *)(param_1 + 0x98);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar10 = puVar1;
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
      if (bVar5) goto LAB_14258c18c;
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
LAB_14258c18c:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xb0);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14258c252;
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
LAB_14258c252:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar8 = *(longlong *)(*plVar2 + 8 + (longlong)(int)uStack_4c * 0x18);
    if (lVar8 != 0) {
      FShaderPipeline::~FShaderPipeline(lVar8);
      FMemory::operator_delete(lVar8,0x30);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  TSet<TTuple<FShaderPipelineType_const_*,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FShaderPipelineType_const_*,FShaderPipeline_*,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0);
  return;
}



// FUNCTION 14258c2f0 Errorf body=150 status=ok
// SIG undefined Errorf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMaterialCompiler::Errorf
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1058 [32];
  undefined8 local_1038;
  undefined8 *local_1030;
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14258c30c;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1058;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)__local_stdio_printf_options();
  local_1038 = 0;
  local_1030 = &local_res18;
  __stdio_common_vswprintf(*puVar1 | 1,local_1028,0x7ff,param_2);
  (**(code **)(*param_1 + 0x48))(param_1,local_1028);
  return;
}



// FUNCTION 14258c390 FUN_14258c390 body=106 status=ok
// SIG undefined FUN_14258c390(void)

void FUN_14258c390(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x10);
  *(longlong *)(param_2 + 0x30) = lVar1;
  uVar2 = FUN_1425bb230(lVar1 + 0x1f8,local_res10,param_3,param_4,param_2 + 8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,uVar2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res10);
  FUN_1408e22e0(param_2 + 0x18,lVar1 + 0x2a8);
  *(undefined1 *)(param_2 + 0x28) = 1;
  return;
}



// FUNCTION 14258c400 FUN_14258c400 body=237 status=ok
// SIG undefined FUN_14258c400(void)

void FUN_14258c400(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b4b0(param_1 + 2,param_3,param_1 + 8);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_14510bfb0;
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



// FUNCTION 14258c4f0 FUN_14258c4f0 body=237 status=ok
// SIG undefined FUN_14258c4f0(void)

void FUN_14258c4f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b530(param_1 + 2,param_3,param_1 + 8);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_14510bfc0;
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



// FUNCTION 14258c5e0 ExecuteTask body=237 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayoutRenderCommand'::`2'::EURCMacro_SetSpectatorScreenTexture>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b5b0(param_1 + 2,param_3,param_1 + 9);
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14510bfa0;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
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



// FUNCTION 14258c6d0 ExecuteTask body=237 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayoutRenderCommand'::`2'::EURCMacro_SetSpectatorScreenTexture>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b640(param_1 + 2,param_3,param_1 + 9);
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14510bf90;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
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



// FUNCTION 14258c7c0 FUN_14258c7c0 body=237 status=ok
// SIG undefined FUN_14258c7c0(void)

void FUN_14258c7c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b6d0(param_1 + 2,param_3,param_1 + 10);
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_14510bf80;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
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



// FUNCTION 14258c8b0 FUN_14258c8b0 body=238 status=ok
// SIG undefined FUN_14258c8b0(void)

void FUN_14258c8b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142582640(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14510bfe0;
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



// FUNCTION 14258c9a0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FMaterial::CacheShaders'::`2'::UpdateRenderThreadShaderMapName,<lambda_a249083841aa919db4cc820cd75b24cd>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  *(undefined8 *)(param_1[2] + 0x10) = *(undefined8 *)(param_1[2] + 8);
  *param_1 = &PTR_FUN_14510bfd0;
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



// FUNCTION 14258ca90 FUN_14258ca90 body=237 status=ok
// SIG undefined FUN_14258ca90(void)

void FUN_14258ca90(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b760(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14510bef0;
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



// FUNCTION 14258cb80 FUN_14258cb80 body=271 status=ok
// SIG undefined FUN_14258cb80(void)

void FUN_14258cb80(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  bVar3 = *(byte *)(param_1[2] + 0x110);
  if ((bVar3 & 8) != 0) {
    *(byte *)(param_1[2] + 0x110) = bVar3 & 0xf7 | 0x10;
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14510bf00;
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



// FUNCTION 14258cc90 FUN_14258cc90 body=237 status=ok
// SIG undefined FUN_14258cc90(void)

void FUN_14258cc90(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b820(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14510bed0;
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



// FUNCTION 14258cd80 FUN_14258cd80 body=237 status=ok
// SIG undefined FUN_14258cd80(void)

void FUN_14258cd80(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b8b0(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14510bee0;
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



// FUNCTION 14258ce70 FUN_14258ce70 body=254 status=ok
// SIG undefined FUN_14258ce70(void)

void FUN_14258ce70(undefined8 *param_1)

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
  plVar5 = (longlong *)0x0;
  *(undefined8 *)(param_1[2] + 0x10) = 0;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14510bf70;
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



// FUNCTION 14258cf70 ExecuteTask body=237 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`UMaterialInterface::UpdateMaterialRenderProxy'::`6'::EURCMacro_UpdateMaterialRenderProxySubsurface>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14258b950(param_1 + 2,param_3,param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14510bf10;
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



// FUNCTION 14258d060 FindId body=178 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_3) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FMaterialShaderMapId::operator==(lVar3 + (longlong)iVar4 * 0x108,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar4;
          return param_2;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)((longlong)iVar4 * 0x108 + 0x100 + lVar3);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14258d120 FindId body=86 status=ok
// SIG undefined FindId(void)

undefined8 FMaterialShaderMap::FindId(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int local_res10 [6];
  
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146afe420 + (longlong)param_2 * 10,local_res10,param_1);
  if ((local_res10[0] != -1) &&
     (lVar1 = (longlong)local_res10[0] * 0x108 + (&DAT_146afe420)[(longlong)param_2 * 10],
     lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xf8);
  }
  return 0;
}



// FUNCTION 14258d180 FUN_14258d180 body=583 status=ok
// SIG undefined FUN_14258d180(void)

void FUN_14258d180(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
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
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_14258d8e0(*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  plVar2 = (longlong *)(param_1 + 0x188);
  local_88 = 0;
  uVar3 = *(uint *)(param_1 + 0x1b0);
  puVar1 = (uint *)(param_1 + 0x198);
  uStack_84 = 1;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x1a8);
    if (*(uint **)(param_1 + 0x1a8) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar6) goto LAB_14258d27d;
      uVar4 = puVar10[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14258d27d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x1b0);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x1a8);
    if (*(uint **)(param_1 + 0x1a8) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar8 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14258d342;
      uVar8 = puVar10[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14258d342:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    puVar5 = *(undefined8 **)(*plVar2 + 8 + (longlong)(int)uStack_4c * 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  FUN_142569920(plVar2,0);
  FUN_141755460(param_1);
  return;
}



// FUNCTION 14258d3d0 FUN_14258d3d0 body=1266 status=ok
// SIG undefined FUN_14258d3d0(void)

void FUN_14258d3d0(int param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  ulonglong uVar14;
  int local_res8 [2];
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  ulonglong local_98;
  int local_90 [2];
  undefined1 local_88 [8];
  longlong local_80;
  ulonglong local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong lStack_60;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  lVar4 = (longlong)param_1;
  local_a0 = 0;
  local_98 = 0;
  plVar10 = &DAT_146afe420 + lVar4 * 10;
  TMapBase<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
  ::GenerateKeyArray<FDefaultAllocator>(plVar10,&local_a0);
  local_d8 = 0;
  local_d0 = 0;
  if (*(int *)(&DAT_146afe428 + lVar4 * 10) != (&DAT_146afe454)[lVar4 * 0x14]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_d8);
  }
  iVar11 = *(int *)(&DAT_146afe448 + lVar4 * 10);
  puStack_58 = (uint *)(lVar4 * 0x50 + 0x146afe430);
  local_c8 = (longlong *)0x100000000;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  if (iVar11 != 0) {
    puVar13 = (uint *)(&DAT_146afe440)[lVar4 * 10];
    if ((uint *)(&DAT_146afe440)[lVar4 * 10] == (uint *)0x0) {
      puVar13 = puStack_58;
    }
    uVar2 = *puVar13;
    uStack_b0 = 0;
    iVar3 = 0;
    while (uVar2 == 0) {
      uStack_b0 = uStack_b0 + 0x20;
      uVar14 = (ulonglong)local_c8 >> 0x20;
      local_c8 = (longlong *)CONCAT44((int)uVar14,iVar3 + 1);
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_14258d4ef;
      uVar2 = puVar13[(longlong)iVar3 + 1];
      iVar3 = iVar3 + 1;
    }
    uVar2 = -uVar2 & uVar2;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    local_c8 = (longlong *)CONCAT44(uVar2,SUB84(local_c8,0));
    if (uVar2 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_b8._4_4_ = (uStack_b0 - iVar3) + 0x1f;
    if (iVar11 < local_b8._4_4_) {
LAB_14258d4ef:
      local_b8._4_4_ = iVar11;
    }
  }
  uStack_50 = 0xffffffff;
  iStack_4c = local_b8._4_4_;
  iStack_48 = uStack_b0;
  uStack_44 = iStack_ac;
  lStack_60 = (longlong)local_c8;
  uStack_c0 = (longlong)local_c8;
  local_a8 = uStack_b0;
  uStack_a4 = iStack_ac;
  uStack_b0 = 0xffffffff;
  iStack_ac = local_b8._4_4_;
  bVar1 = local_b8._4_4_ < iVar11;
  lVar4 = local_d8;
  local_c8 = plVar10;
  local_68 = plVar10;
  local_b8 = puStack_58;
  if (bVar1) {
    do {
      iVar11 = iStack_ac;
      uVar14 = local_d0;
      lVar9 = (longlong)(int)local_d0;
      iVar3 = (int)local_d0 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,iVar3);
      if (local_d0._4_4_ < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_d8,uVar14 & 0xffffffff);
        lVar4 = local_d8;
      }
      puVar6 = (undefined8 *)(lVar4 + lVar9 * 8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = *(undefined8 *)((longlong)iVar11 * 0x108 + 0xf8 + *local_c8);
      }
      uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    } while (iStack_ac < (int)local_b8[6]);
  }
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  ::Empty(plVar10,0);
  uVar14 = local_98 & 0xffffffff;
  if (0 < (int)local_98) {
    piVar12 = (int *)(local_a0 + 0xb8);
    local_80 = local_d8;
    local_78 = uVar14;
    do {
      iVar11 = 0;
      if (0 < piVar12[-4]) {
        lVar4 = 0;
        do {
          TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::FindId(param_2,local_res8,*(undefined8 *)(lVar4 + *(longlong *)(piVar12 + -6)));
          if (local_res8[0] == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)local_res8[0] * 0x20 + *param_2;
          }
          if (*(int *)(lVar9 + 0x10) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(lVar9 + 8);
          }
          uVar5 = FShaderType::GetShaderTypeByName(puVar8);
          iVar11 = iVar11 + 1;
          *(undefined8 *)(lVar4 + *(longlong *)(piVar12 + -6)) = uVar5;
          lVar4 = lVar4 + 0x20;
        } while (iVar11 < piVar12[-4]);
      }
      iVar11 = 0;
      if (0 < *piVar12) {
        lVar4 = 0;
        do {
          lVar9 = *(longlong *)(lVar4 + *(longlong *)(piVar12 + -2));
          if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
            if (lVar9 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(lVar9 + 0x68);
            }
            plVar7 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar7 = param_3 + 7;
            }
            iVar3 = *(int *)((longlong)plVar7 +
                            ((longlong)(int)param_3[9] - 1U & (longlong)iVar3) * 4);
            if (iVar3 != -1) {
              do {
                plVar7 = (longlong *)((longlong)iVar3 * 0x20 + *param_3);
                if (*plVar7 == lVar9) {
                  if (iVar3 != -1) goto LAB_14258d6c0;
                  break;
                }
                iVar3 = (int)plVar7[3];
              } while (iVar3 != -1);
            }
          }
          plVar7 = (longlong *)0x0;
LAB_14258d6c0:
          if ((int)plVar7[2] == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)plVar7[1];
          }
          puVar6 = (undefined8 *)FName::FName(local_70,puVar8,1);
          uVar5 = FShaderPipelineType::GetShaderPipelineTypeByName(*puVar6);
          iVar11 = iVar11 + 1;
          *(undefined8 *)(lVar4 + *(longlong *)(piVar12 + -2)) = uVar5;
          lVar4 = lVar4 + 0x20;
        } while (iVar11 < *piVar12);
      }
      iVar11 = 0;
      if (0 < piVar12[4]) {
        lVar4 = 0;
        do {
          TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::FindId(param_4,local_90,*(undefined8 *)(lVar4 + *(longlong *)(piVar12 + 2)));
          if (local_90[0] == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)local_90[0] * 0x20 + *param_4;
          }
          uVar5 = FVertexFactoryType::GetVFByName(lVar9 + 8);
          iVar11 = iVar11 + 1;
          *(undefined8 *)(lVar4 + *(longlong *)(piVar12 + 2)) = uVar5;
          lVar4 = lVar4 + 0x20;
        } while (iVar11 < piVar12[4]);
      }
      lVar4 = local_80;
      local_c8 = (longlong *)(piVar12 + -0x2e);
      uStack_c0 = local_80;
      TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&>_>
                (plVar10,local_88,&local_c8,0);
      local_80 = lVar4 + 8;
      piVar12 = piVar12 + 0x3e;
      local_78 = local_78 - 1;
    } while (local_78 != 0);
    uVar14 = local_98 & 0xffffffff;
    local_78 = 0;
  }
  if (local_d8 != 0) {
    FMemory::Free(local_d8);
  }
  if ((int)uVar14 != 0) {
    plVar10 = (longlong *)(local_a0 + 0x40);
    do {
      if (plVar10[0x10] != 0) {
        FMemory::Free();
      }
      if (plVar10[0xe] != 0) {
        FMemory::Free();
      }
      if (plVar10[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar10[10] != 0) {
        FMemory::Free();
      }
      if (plVar10[8] != 0) {
        FMemory::Free();
      }
      if (plVar10[6] != 0) {
        FMemory::Free();
      }
      if (plVar10[4] != 0) {
        FMemory::Free();
      }
      TArray<FStaticMaterialLayersParameter,FDefaultAllocator>::
      ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(plVar10 + 2);
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      if (plVar10[-2] != 0) {
        FMemory::Free();
      }
      if (plVar10[-4] != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 0x1f;
      uVar2 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar2;
    } while (uVar2 != 0);
  }
  if (local_a0 != 0) {
    FMemory::Free(local_a0);
  }
  return;
}



// FUNCTION 14258d8e0 FUN_14258d8e0 body=557 status=ok
// SIG undefined FUN_14258d8e0(void)

void FUN_14258d8e0(longlong param_1)

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
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    if (param_1 != 0) {
      if (*(longlong *)(param_1 + 0x170) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x160) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x150) != 0) {
        FMemory::Free();
      }
      FMaterialRenderProxy::~FMaterialRenderProxy(param_1);
      FMemory::operator_delete(param_1,0x180);
    }
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    return;
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
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_14510bed0;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_14048a3d0(plVar9,0,0xff,1,0,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
      return;
    }
  }
  return;
}



// FUNCTION 14258db10 GameThread_FindAllScalarParameterNames body=164 status=ok
// SIG undefined GameThread_FindAllScalarParameterNames(void)

void GameThread_FindAllScalarParameterNames(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    do {
      if (0 < (int)*(uint *)(param_1 + 0xa8)) {
        lVar3 = 0;
        uVar2 = (ulonglong)*(uint *)(param_1 + 0xa8);
        do {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                    (param_2,*(longlong *)(param_1 + 0xa0) + lVar3);
          lVar3 = lVar3 + 0x28;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_1 = *(longlong *)(param_1 + 0x90);
      if (param_1 == 0) {
        return;
      }
      lVar3 = FUN_1429b6de0();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    } while (bVar1);
  }
  return;
}



// FUNCTION 14258dbc0 GameThread_FindAllVectorParameterNames body=164 status=ok
// SIG undefined GameThread_FindAllVectorParameterNames(void)

void GameThread_FindAllVectorParameterNames(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    do {
      if (0 < (int)*(uint *)(param_1 + 0xb8)) {
        lVar3 = 0;
        uVar2 = (ulonglong)*(uint *)(param_1 + 0xb8);
        do {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                    (param_2,*(longlong *)(param_1 + 0xb0) + lVar3);
          lVar3 = lVar3 + 0x30;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_1 = *(longlong *)(param_1 + 0x90);
      if (param_1 == 0) {
        return;
      }
      lVar3 = FUN_1429b6de0();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    } while (bVar1);
  }
  return;
}



// FUNCTION 14258dc70 FUN_14258dc70 body=218 status=ok
// SIG undefined FUN_14258dc70(void)

int * FUN_14258dc70(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  longlong lVar4;
  int iStackX_14;
  
  if (param_1 != 0) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    do {
      piVar3 = *(int **)(param_1 + 0xa0);
      piVar1 = piVar3 + (longlong)*(int *)(param_1 + 0xa8) * 10;
      for (; piVar3 != piVar1; piVar3 = piVar3 + 10) {
        if ((*piVar3 == (int)param_2) && (piVar3[1] == iStackX_14)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (((bVar2) && (*(char *)((longlong)piVar3 + 0xb) == '\x02')) && (piVar3[3] == -1)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          return piVar3;
        }
      }
      param_1 = *(longlong *)(param_1 + 0x90);
      if (param_1 == 0) {
        return (int *)0x0;
      }
      lVar4 = FUN_1429b6de0();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    } while (bVar2);
  }
  return (int *)0x0;
}



// FUNCTION 14258dd50 FUN_14258dd50 body=218 status=ok
// SIG undefined FUN_14258dd50(void)

int * FUN_14258dd50(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int iStackX_14;
  
  if (param_1 != 0) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    do {
      piVar2 = *(int **)(param_1 + 0xb0);
      piVar4 = piVar2 + (longlong)*(int *)(param_1 + 0xb8) * 0xc;
      for (; piVar2 != piVar4; piVar2 = piVar2 + 0xc) {
        if ((*piVar2 == (int)param_2) && (piVar2[1] == iStackX_14)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (((bVar1) && (*(char *)((longlong)piVar2 + 0xb) == '\x02')) && (piVar2[3] == -1)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return piVar2;
        }
      }
      param_1 = *(longlong *)(param_1 + 0x90);
      if (param_1 == 0) {
        return (int *)0x0;
      }
      lVar3 = FUN_1429b6de0();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    } while (bVar1);
  }
  return (int *)0x0;
}



// FUNCTION 14258de30 FUN_14258de30 body=631 status=ok
// SIG undefined FUN_14258de30(void)

void FUN_14258de30(longlong param_1,longlong param_2,char param_3,char param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  DWORD DVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar4 = *(longlong *)(param_1 + 0x148);
  if (lVar4 != param_2) {
    *(longlong *)(param_1 + 0x148) = param_2;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_58);
      bVar3 = *(byte *)(param_1 + 0x110);
      bVar6 = bVar3 & 0xdf | param_3 << 5;
      *(longlong *)(param_1 + 0x138) = param_2;
      *(byte *)(param_1 + 0x110) = bVar6 & 0xbf | param_4 << 6;
      if ((bVar3 & 8) != 0) {
        *(byte *)(param_1 + 0x110) = bVar6 & 0xb7 | param_4 << 6 | 0x10;
      }
      FUN_14259b260(param_1);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_58._0_4_);
    }
    else {
      pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar9 = TlsGetValue(*pDVar8);
      plVar12 = (longlong *)0x0;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)operator_new(0x18);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          plVar9[1] = 0;
          *(undefined4 *)(plVar9 + 2) = 0;
          plVar12 = plVar9;
        }
        TlsSetValue(*pDVar8,plVar12);
        plVar9 = plVar12;
      }
      plVar12 = (longlong *)plVar9[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar9;
        if (plVar12 == (longlong *)0x0) {
          lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
          plVar9[1] = lVar10;
          if (lVar10 == 0) {
            puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar9[1] = (longlong)puVar11;
            lVar10 = 0x1f;
            do {
              puVar2 = puVar11 + 0x20;
              *puVar11 = puVar2;
              lVar10 = lVar10 + -1;
              puVar11 = puVar2;
            } while (lVar10 != 0);
            *puVar2 = 0;
          }
          plVar12 = (longlong *)plVar9[1];
          iVar13 = 0x20;
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
        else {
          iVar13 = 0x20;
          plVar9[1] = (longlong)plVar12;
          *(undefined4 *)(plVar9 + 2) = 0x20;
          *plVar9 = 0;
        }
      }
      else {
        iVar13 = (int)plVar9[2];
      }
      plVar9[1] = *plVar12;
      *(int *)(plVar9 + 2) = iVar13 + -1;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      local_50 = 0;
      local_48 = 0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *(undefined1 *)(plVar12 + 5) = 0;
      *plVar12 = (longlong)&PTR_FUN_14510bee0;
      plVar12[6] = 0;
      plVar12[2] = param_1;
      plVar12[3] = param_2;
      *(char *)(plVar12 + 4) = param_3;
      *(char *)((longlong)plVar12 + 0x21) = param_4;
      lVar10 = plVar12[6];
      piVar1 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar10;
      FUN_14048a160(plVar12,0,0xff,1);
      if (lVar10 != 0) {
        LOCK();
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
    if (lVar4 != 0) {
      FUN_141edede0(lVar4 + 0x40,0);
    }
  }
  return;
}



// FUNCTION 14258e0b0 FUN_14258e0b0 body=347 status=ok
// SIG undefined FUN_14258e0b0(void)

void FUN_14258e0b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar2 = *(longlong *)(param_1 + 0x150);
  lVar3 = (longlong)*(int *)(param_1 + 0x158) * 0x20 + lVar2;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    if (*(char *)(lVar2 + 10) == '\x02') {
      FUN_1425a7820(*(undefined8 *)
                     (*(longlong *)(lVar1 + 0x288) + (longlong)*(short *)(lVar2 + 8) * 8),param_2,
                    lVar2 + 0x10);
      *(undefined1 *)(lVar2 + 10) = 0;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x160);
  lVar2 = lVar3 + (longlong)*(int *)(param_1 + 0x168) * 0x18;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
    if (*(char *)(lVar3 + 10) == '\x02') {
      local_38 = 0;
      uStack_30 = 0;
      FUN_1425a7ae0(*(undefined8 *)
                     (*(longlong *)(lVar1 + 0x278) + (longlong)*(short *)(lVar3 + 8) * 8),param_2,
                    &local_38);
      *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_38;
      *(undefined1 *)(lVar3 + 10) = 0;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x170);
  lVar2 = lVar3 + (longlong)*(int *)(param_1 + 0x178) * 0x18;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
    if (*(char *)(lVar3 + 10) == '\x02') {
      local_res8[0] = 0;
      local_res10 = 0;
      FUN_1425a7df0(*(undefined8 *)
                     (*(longlong *)(lVar1 + 0x298) + (longlong)*(short *)(lVar3 + 8) * 8),param_2,
                    *(undefined8 *)(param_2 + 8),&local_res10,local_res8);
      *(undefined8 *)(lVar3 + 0x10) = local_res10;
      *(undefined1 *)(lVar3 + 10) = 0;
    }
  }
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xef;
  return;
}



// FUNCTION 14258e210 FUN_14258e210 body=124 status=ok
// SIG undefined FUN_14258e210(void)

void FUN_14258e210(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (lVar1 != 0) {
    FUN_142556500(lVar1,param_2,param_3,param_1 + 0x2d);
  }
  return;
}



// FUNCTION 14258e290 FUN_14258e290 body=83 status=ok
// SIG undefined FUN_14258e290(void)

void FUN_14258e290(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1ee,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllFontParameterInfo");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1ee,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllFontParameterInfo");
  return;
}



// FUNCTION 14258e2f0 FUN_14258e2f0 body=120 status=ok
// SIG undefined FUN_14258e2f0(void)

void FUN_14258e2f0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (lVar1 != 0) {
    FUN_142556d90(lVar1,param_2,param_3,0);
  }
  return;
}



// FUNCTION 14258e370 FUN_14258e370 body=83 status=ok
// SIG undefined FUN_14258e370(void)

void FUN_14258e370(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1f0,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllMaterialLayersParameterInfo");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1f0,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllMaterialLayersParameterInfo");
  return;
}



// FUNCTION 14258e3d0 FUN_14258e3d0 body=124 status=ok
// SIG undefined FUN_14258e3d0(void)

void FUN_14258e3d0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (lVar1 != 0) {
    FUN_1425575d0(lVar1,param_2,param_3,param_1 + 0x2d);
  }
  return;
}



// FUNCTION 14258e450 GetAllStaticSwitchParameterInfo body=83 status=ok
// SIG undefined GetAllStaticSwitchParameterInfo(void)

void UMaterialInterface::GetAllStaticSwitchParameterInfo(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1e8,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllScalarParameterInfo");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1e8,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllScalarParameterInfo");
  return;
}



// FUNCTION 14258e4b0 FUN_14258e4b0 body=160 status=ok
// SIG undefined FUN_14258e4b0(void)

void FUN_14258e4b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int local_res18;
  int local_res1c;
  
  iVar5 = 0;
  do {
    iVar4 = 0;
    do {
      local_res18 = iVar5;
      local_res1c = iVar4;
      lVar3 = FUN_14256a620(param_1 + 0x188,&local_res18);
      iVar1 = (int)param_2[1];
      uVar2 = *(undefined8 *)(lVar3 + 8);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      iVar4 = iVar4 + 1;
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
    } while (iVar4 < 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}



// FUNCTION 14258e550 FUN_14258e550 body=124 status=ok
// SIG undefined FUN_14258e550(void)

void FUN_14258e550(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (lVar1 != 0) {
    FUN_1425586f0(lVar1,param_2,param_3,param_1 + 0x2d);
  }
  return;
}



// FUNCTION 14258e5d0 AppendReferencedTextures body=83 status=ok
// SIG undefined AppendReferencedTextures(void)

void UMaterialInterface::AppendReferencedTextures(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,500,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllStaticComponentMaskParameterInfo");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,500,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllStaticComponentMaskParameterInfo");
  return;
}



// FUNCTION 14258e630 FUN_14258e630 body=124 status=ok
// SIG undefined FUN_14258e630(void)

void FUN_14258e630(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (lVar1 != 0) {
    FUN_142557e60(lVar1,param_2,param_3,param_1 + 0x2d);
  }
  return;
}



// FUNCTION 14258e6b0 LowLevelSend body=83 status=ok
// SIG undefined LowLevelSend(void)

void UNetConnection::LowLevelSend(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1f2,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllStaticSwitchParameterInfo");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1f2,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllStaticSwitchParameterInfo");
  return;
}



// FUNCTION 14258e710 FUN_14258e710 body=124 status=ok
// SIG undefined FUN_14258e710(void)

void FUN_14258e710(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (lVar1 != 0) {
    FUN_142558f80(lVar1,param_2,param_3,param_1 + 0x2d);
  }
  return;
}



// FUNCTION 14258e790 GetAllStaticSwitchParameterInfo body=83 status=ok
// SIG undefined GetAllStaticSwitchParameterInfo(void)

void UMaterialInterface::GetAllStaticSwitchParameterInfo(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1ec,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllTextureParameterInfo");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1ec,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllTextureParameterInfo");
  return;
}



// FUNCTION 14258e7f0 FUN_14258e7f0 body=124 status=ok
// SIG undefined FUN_14258e7f0(void)

void FUN_14258e7f0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (lVar1 != 0) {
    FUN_142559840(lVar1,param_2,param_3,param_1 + 0x2d);
  }
  return;
}



// FUNCTION 14258e870 GetAllStaticComponentMaskParameterInfo body=83 status=ok
// SIG undefined GetAllStaticComponentMaskParameterInfo(void)

void UMaterialInterface::GetAllStaticComponentMaskParameterInfo(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1ea,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllVectorParameterInfo");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1ea,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetAllVectorParameterInfo");
  return;
}



// FUNCTION 14258e8e0 GetAssetUserDataOfClass body=196 status=ok
// SIG undefined GetAssetUserDataOfClass(void)

longlong UMaterialInterface::GetAssetUserDataOfClass(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x40));
      if (lVar1 != 0) {
        if (param_2 != 0) {
          lVar3 = UAssetUserData::GetPrivateStaticClass();
          lVar4 = param_2;
          do {
            lVar5 = param_2;
            if (lVar4 == lVar3) goto LAB_14258e940;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
        }
        lVar5 = 0;
LAB_14258e940:
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
    } while (iVar7 < *(int *)(param_1 + 0x48));
  }
  return 0;
}



// FUNCTION 14258e9b0 FUN_14258e9b0 body=10 status=ok
// SIG undefined FUN_14258e9b0(void)

void FUN_14258e9b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014258e9b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x290))();
  return;
}



// FUNCTION 14258e9c0 GetBaseMaterialPathName body=30 status=ok
// SIG undefined GetBaseMaterialPathName(void)

undefined8 FMaterialResource::GetBaseMaterialPathName(longlong param_1,undefined8 param_2)

{
  UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0x28),param_2,0);
  return param_2;
}



// FUNCTION 14258e9e0 FUN_14258e9e0 body=1918 status=ok
// SIG undefined FUN_14258e9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14258e9e0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  undefined8 local_140;
  char local_138;
  char local_137;
  char local_136;
  char local_135;
  char local_134;
  char local_133;
  char local_132;
  char local_131;
  float local_130;
  int local_12c;
  int local_128 [4];
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x288))();
  FSHA1::FSHA1(local_118);
  bVar1 = false;
  local_130 = (float)(**(code **)(*param_1 + 0x448))(param_1);
  fVar8 = (float)(**(code **)(*plVar5 + 0x448))(plVar5);
  iVar7 = 0;
  if (1e-08 < ABS(local_130 - fVar8)) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_OpacityMaskClipValue",0x3e);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_130,4);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_138 = (**(code **)(*param_1 + 0x450))(param_1);
  cVar3 = (**(code **)(*plVar5 + 0x450))(plVar5);
  if (local_138 != cVar3) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x24;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_CastDynamicShadowAsMasked",0x48);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_138,1);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_12c = (**(code **)(*param_1 + 0x460))(param_1);
  iVar4 = (**(code **)(*plVar5 + 0x460))(plVar5);
  if (local_12c != iVar4) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_BlendMode",0x28);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_12c,4);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_128[0] = (**(code **)(*param_1 + 0x468))(param_1);
  iVar4 = (**(code **)(*plVar5 + 0x468))(plVar5);
  if (local_128[0] != iVar4) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_ShadingModel",0x2e);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,local_128,4);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_137 = (**(code **)(*param_1 + 0x470))(param_1);
  cVar3 = (**(code **)(*plVar5 + 0x470))(plVar5);
  if (local_137 != cVar3) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_TwoSided",0x26);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_137,1);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_136 = (**(code **)(*param_1 + 0x4a0))(param_1);
  cVar3 = (**(code **)(*plVar5 + 0x4a0))(plVar5);
  if (local_136 != cVar3) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_DitheredLODTransition",0x40);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_136,1);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x478))(param_1);
  local_135 = cVar3 == '\0';
  cVar3 = (**(code **)(*plVar5 + 0x478))(plVar5);
  if ((bool)local_135 != (cVar3 == '\0')) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_DisableEdgeDetection",0x3e);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_135,1);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_134 = (**(code **)(*param_1 + 0x480))(param_1);
  cVar3 = (**(code **)(*plVar5 + 0x480))(plVar5);
  if (local_134 != cVar3) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_ShouldDoOuterEdge",0x38);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_134,1);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_133 = (**(code **)(*param_1 + 0x488))(param_1);
  cVar3 = (**(code **)(*plVar5 + 0x488))(plVar5);
  if (local_133 != cVar3) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x24;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_EnableWorldPositionOffset",0x48);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_133,1);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_132 = (**(code **)(*param_1 + 0x490))(param_1);
  cVar3 = (**(code **)(*plVar5 + 0x490))(plVar5);
  if (local_132 != cVar3) {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_EnablePixelDepthOffset",0x42);
    if ((int)local_140 == 0) {
      puVar6 = &DAT_143f3eda8;
      iVar4 = iVar7;
    }
    else {
      puVar6 = puVar2;
      iVar4 = (int)local_140 + -1;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar4);
    FSHA1::Update(local_118,&local_132,1);
    bVar1 = true;
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_131 = (**(code **)(*param_1 + 0x498))(param_1);
  cVar3 = (**(code **)(*plVar5 + 0x498))(plVar5);
  if (local_131 == cVar3) {
    if (!bVar1) goto LAB_14258f137;
  }
  else {
    local_148 = (undefined2 *)0x0;
    local_140 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar2 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"bOverride_EnableRefraction",0x36);
    puVar6 = &DAT_143f3eda8;
    if ((int)local_140 != 0) {
      iVar7 = (int)local_140 + -1;
      puVar6 = puVar2;
    }
    FSHA1::UpdateWithString(local_118,puVar6,iVar7);
    FSHA1::Update(local_118,&local_131,1);
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  FSHA1::Final(local_118);
  FSHA1::GetHash(local_118,param_2);
LAB_14258f137:
  FSHA1::~FSHA1(local_118);
  return;
}



// FUNCTION 14258f1a0 FUN_14258f1a0 body=725 status=ok
// SIG undefined FUN_14258f1a0(void)

longlong * FUN_14258f1a0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case 0:
    if ((wchar_t *)*param_1 != L"BLEND_Opaque") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xd);
      iVar1 = (int)param_1[1] + 0xd;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"BLEND_Opaque",0xd);
      return param_1;
    }
    break;
  case 1:
    if ((wchar_t *)*param_1 != L"BLEND_Masked") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xd);
      iVar1 = (int)param_1[1] + 0xd;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"BLEND_Masked",0xd);
      return param_1;
    }
    break;
  case 2:
    if ((wchar_t *)*param_1 != L"BLEND_Translucent") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x12);
      iVar1 = (int)param_1[1] + 0x12;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"BLEND_Translucent",0x12);
      return param_1;
    }
    break;
  case 3:
    if ((wchar_t *)*param_1 != L"BLEND_Additive") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xf);
      iVar1 = (int)param_1[1] + 0xf;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"BLEND_Additive",0xf);
      return param_1;
    }
    break;
  case 4:
    if ((wchar_t *)*param_1 != L"BLEND_Modulate") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xf);
      iVar1 = (int)param_1[1] + 0xf;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"BLEND_Modulate",0xf);
      return param_1;
    }
    break;
  case 5:
    if ((wchar_t *)*param_1 != L"BLEND_AlphaComposite") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x15);
      iVar1 = (int)param_1[1] + 0x15;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"BLEND_AlphaComposite",0x15);
      return param_1;
    }
    break;
  default:
    if ((wchar_t *)*param_1 != L"Unknown") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,8);
      iVar1 = (int)param_1[1] + 8;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"Unknown",8);
    }
  }
  return param_1;
}



// FUNCTION 14258f520 FUN_14258f520 body=211 status=ok
// SIG undefined FUN_14258f520(void)

undefined8 * FUN_14258f520(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  *param_2 = 0;
  iVar4 = *(int *)(lVar2 + 0x728);
  puVar5 = *(undefined8 **)(lVar2 + 0x720);
  *(int *)(param_2 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar4,0);
  puVar3 = (undefined8 *)*param_2;
  do {
    *puVar3 = 0;
    iVar1 = *(int *)(puVar5 + 1);
    _Src = (void *)*puVar5;
    *(int *)(puVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
    }
    puVar3 = puVar3 + 2;
    puVar5 = puVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_2;
}



// FUNCTION 14258f600 FUN_14258f600 body=208 status=ok
// SIG undefined FUN_14258f600(void)

undefined8 FUN_14258f600(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  if (param_1[6] == 0) {
    (**(code **)(*param_1 + 0x388))();
  }
  else {
    local_res8 = *(undefined8 *)(param_1[6] + 0x18);
    FName::ToString(&local_res8,&local_28);
    puVar3 = &DAT_143f3eda8;
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x388))(param_1,local_18);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(param_2,L"%s (MI:%s)",puVar3,puVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 14258f6e0 FUN_14258f6e0 body=489 status=ok
// SIG undefined FUN_14258f6e0(void)

void FUN_14258f6e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x168);
  lVar4 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar9;
  if (lVar9 != lVar4) {
    piVar10 = (int *)(lVar9 + 0x28);
    do {
      uVar6 = 0;
      if ((char)piVar10[10] != '\0') {
        plVar8 = *(longlong **)(piVar10 + -6);
        uVar7 = (longlong)piVar10[-4] & 0x1fffffffffffffff;
        if (plVar8 + piVar10[-4] < plVar8) {
          uVar7 = uVar6;
        }
        if (uVar7 != 0) {
          do {
            lVar2 = *plVar8;
            if (lVar2 != 0) {
              plVar3 = (longlong *)*param_2;
              iVar1 = (int)param_2[1];
              for (plVar5 = plVar3; plVar5 != plVar3 + iVar1; plVar5 = plVar5 + 1) {
                if (*plVar5 == lVar2) {
                  if ((int)((longlong)plVar5 - (longlong)plVar3 >> 3) != -1) goto LAB_14258f7c6;
                  break;
                }
              }
              *(int *)(param_2 + 1) = iVar1 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
              }
              *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar2;
            }
LAB_14258f7c6:
            plVar8 = plVar8 + 1;
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar7);
        }
        uVar7 = 0;
        plVar8 = *(longlong **)(piVar10 + -2);
        uVar6 = (longlong)*piVar10 & 0x1fffffffffffffff;
        if (plVar8 + *piVar10 < plVar8) {
          uVar6 = uVar7;
        }
        if (uVar6 != 0) {
          do {
            lVar2 = *plVar8;
            if (lVar2 != 0) {
              plVar3 = (longlong *)*param_2;
              iVar1 = (int)param_2[1];
              for (plVar5 = plVar3; plVar5 != plVar3 + iVar1; plVar5 = plVar5 + 1) {
                if (*plVar5 == lVar2) {
                  if ((int)((longlong)plVar5 - (longlong)plVar3 >> 3) != -1) goto LAB_14258f859;
                  break;
                }
              }
              *(int *)(param_2 + 1) = iVar1 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
              }
              *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar2;
            }
LAB_14258f859:
            plVar8 = plVar8 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar6);
        }
      }
      lVar9 = lVar9 + 0x68;
      piVar10 = piVar10 + 0x1a;
    } while (lVar9 != lVar4);
  }
  plVar8 = *(longlong **)(param_1 + 0x90);
  if (plVar8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014258f8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x368))(plVar8,param_2);
    return;
  }
  return;
}



// FUNCTION 14258f8d0 SaveShaderStableKeysInner body=83 status=ok
// SIG undefined SaveShaderStableKeysInner(void)

void UMaterialInterface::SaveShaderStableKeysInner(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1f7,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetDependentFunctions");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1f7,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetDependentFunctions");
  return;
}



// FUNCTION 14258f930 FUN_14258f930 body=1744 status=ok
// SIG undefined FUN_14258f930(void)

void FUN_14258f930(longlong *param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *local_res8;
  undefined4 local_res10;
  longlong *local_res18;
  longlong *local_res20;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar4 = (**(code **)(*param_1 + 0x178))();
  puVar6 = (undefined8 *)FUN_1419f19e0();
  for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6)
  {
    lVar15 = puVar6[2];
    if ((*(byte *)(lVar15 + 0x28) & 1) != 0) {
      bVar1 = false;
      puVar7 = (undefined8 *)FUN_1419f19d0();
      for (puVar7 = (undefined8 *)*puVar7; puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)*puVar7) {
        lVar12 = 0;
        if (*(int *)(puVar7[2] + 8) == 2) {
          lVar12 = puVar7[2];
        }
        if ((((lVar12 != 0) && (cVar3 = (**(code **)(lVar12 + 0x138))(param_2), cVar3 != '\0')) &&
            (cVar3 = (**(code **)(*param_1 + 8))(param_1,param_2,lVar12,lVar15), cVar3 != '\0')) &&
           (cVar3 = (**(code **)(lVar15 + 0x38))(param_2), cVar3 != '\0')) {
          plVar18 = (longlong *)*param_3;
          iVar5 = (int)param_3[1];
          bVar1 = true;
          for (plVar19 = plVar18; plVar19 != plVar18 + iVar5; plVar19 = plVar19 + 1) {
            if (*plVar19 == lVar12) {
              param_1 = local_res8;
              if ((int)((longlong)plVar19 - (longlong)plVar18 >> 3) != -1) goto LAB_14258fa79;
              break;
            }
          }
          *(int *)(param_3 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
          }
          *(longlong *)((longlong)iVar5 * 8 + *param_3) = lVar12;
          param_1 = local_res8;
        }
LAB_14258fa79:
      }
      puVar7 = (undefined8 *)FUN_1419f19c0();
      param_1 = local_res8;
      uVar2 = local_res10;
      for (puVar7 = (undefined8 *)*puVar7; local_res8 = param_1, local_res10 = uVar2,
          puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
        uVar10 = 0;
        lVar12 = puVar7[2];
        puVar14 = *(ulonglong **)(lVar12 + 0x10);
        uVar11 = uVar10;
        if (*(int *)(*puVar14 + 8) == 2) {
          uVar11 = *puVar14;
        }
        if ((uVar11 != 0) && ((*(longlong *)(lVar12 + 0x30) != 0) == (iVar4 != 0))) {
          iVar5 = *(int *)(lVar12 + 0x18);
          iVar16 = 0;
          uVar11 = (longlong)iVar5 & 0x1fffffffffffffff;
          if (puVar14 + iVar5 < puVar14) {
            uVar11 = uVar10;
          }
          uVar17 = uVar10;
          if (uVar11 != 0) {
            do {
              uVar13 = 0;
              if (*(int *)(*puVar14 + 8) == 2) {
                uVar13 = *puVar14;
              }
              cVar3 = (**(code **)(uVar13 + 0x138))(uVar2,param_1,lVar15);
              if (((cVar3 != '\0') &&
                  (cVar3 = (**(code **)(*param_1 + 8))(param_1,uVar2,uVar13,lVar15), cVar3 != '\0'))
                 && (cVar3 = (**(code **)(lVar15 + 0x38))(uVar2,param_1,uVar13), cVar3 != '\0')) {
                uVar17 = (ulonglong)((int)uVar17 + 1);
              }
              iVar16 = (int)uVar17;
              puVar14 = puVar14 + 1;
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar11);
            iVar5 = *(int *)(lVar12 + 0x18);
            param_3 = local_res18;
          }
          plVar18 = local_res20;
          if (iVar16 == iVar5) {
            bVar1 = true;
            plVar19 = (longlong *)*local_res20;
            iVar5 = (int)local_res20[1];
            for (plVar8 = plVar19; plVar8 != plVar19 + iVar5; plVar8 = plVar8 + 1) {
              if (*plVar8 == lVar12) {
                if ((int)((longlong)plVar8 - (longlong)plVar19 >> 3) != -1) goto LAB_14258fbff;
                break;
              }
            }
            *(int *)(local_res20 + 1) = iVar5 + 1;
            if (*(int *)((longlong)local_res20 + 0xc) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_res20);
            }
            *(longlong *)((longlong)iVar5 * 8 + *plVar18) = lVar12;
LAB_14258fbff:
            plVar18 = *(longlong **)(lVar12 + 0x10);
            uVar10 = 0;
            uVar11 = (longlong)*(int *)(lVar12 + 0x18) & 0x1fffffffffffffff;
            if (plVar18 + *(int *)(lVar12 + 0x18) < plVar18) {
              uVar11 = uVar10;
            }
            if (uVar11 != 0) {
              do {
                plVar19 = (longlong *)*param_3;
                iVar5 = (int)param_3[1];
                lVar12 = *plVar18;
                for (plVar8 = plVar19; plVar8 != plVar19 + iVar5; plVar8 = plVar8 + 1) {
                  if (*plVar8 == lVar12) {
                    if ((int)((longlong)plVar8 - (longlong)plVar19 >> 3) != -1) goto LAB_14258fc8c;
                    break;
                  }
                }
                *(int *)(param_3 + 1) = iVar5 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
                }
                *(longlong *)((longlong)iVar5 * 8 + *param_3) = lVar12;
LAB_14258fc8c:
                plVar18 = plVar18 + 1;
                uVar10 = uVar10 + 1;
              } while (uVar10 != uVar11);
            }
          }
        }
        param_1 = local_res8;
        uVar2 = local_res10;
        param_2 = local_res10;
      }
      if (bVar1) {
        lVar12 = param_5[1];
        iVar5 = (int)lVar12 + 1;
        *(int *)(param_5 + 1) = iVar5;
        if (*(int *)((longlong)param_5 + 0xc) < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5);
        }
        *(longlong *)(*param_5 + (longlong)(int)lVar12 * 8) = lVar15;
        param_1 = local_res8;
      }
    }
    param_4 = local_res20;
  }
  puVar6 = (undefined8 *)FUN_1419f19d0();
  for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6)
  {
    lVar15 = 0;
    if (*(int *)(puVar6[2] + 8) == 1) {
      lVar15 = puVar6[2];
    }
    if (((lVar15 != 0) && (cVar3 = (**(code **)(lVar15 + 0x138))(param_2), cVar3 != '\0')) &&
       (cVar3 = (**(code **)(*param_1 + 8))(param_1,param_2,lVar15,0), cVar3 != '\0')) {
      lVar12 = param_3[1];
      iVar5 = (int)lVar12 + 1;
      *(int *)(param_3 + 1) = iVar5;
      if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
      }
      *(longlong *)(*param_3 + (longlong)(int)lVar12 * 8) = lVar15;
    }
  }
  puVar6 = (undefined8 *)FUN_1419f19c0();
  puVar6 = (undefined8 *)*puVar6;
  plVar18 = local_res8;
  uVar2 = local_res10;
  do {
    local_res8 = plVar18;
    local_res10 = uVar2;
    if (puVar6 == (undefined8 *)0x0) {
      AlgoImpl::
      IntroSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
                (*param_3,(longlong)(int)param_3[1],(ulonglong)plVar18 & 0xff,&local_res8);
      AlgoImpl::
      IntroSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
                (*param_5,(longlong)(int)param_5[1],(ulonglong)local_res8 & 0xff,&local_res8);
      AlgoImpl::
      IntroSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_>
                (*param_4,(longlong)(int)param_4[1],(ulonglong)local_res8 & 0xff,&local_res8);
      return;
    }
    lVar15 = puVar6[2];
    uVar10 = 0;
    puVar14 = *(ulonglong **)(lVar15 + 0x10);
    uVar11 = uVar10;
    if (*(int *)(*puVar14 + 8) == 1) {
      uVar11 = *puVar14;
    }
    if ((uVar11 != 0) && ((*(longlong *)(lVar15 + 0x30) != 0) == (iVar4 != 0))) {
      iVar5 = *(int *)(lVar15 + 0x18);
      iVar16 = 0;
      uVar11 = (longlong)iVar5 & 0x1fffffffffffffff;
      if (puVar14 + iVar5 < puVar14) {
        uVar11 = uVar10;
      }
      uVar17 = uVar10;
      if (uVar11 != 0) {
        do {
          uVar13 = 0;
          if (*(int *)(*puVar14 + 8) == 1) {
            uVar13 = *puVar14;
          }
          if (((uVar13 != 0) && (cVar3 = (**(code **)(uVar13 + 0x138))(uVar2), cVar3 != '\0')) &&
             (cVar3 = (**(code **)(*plVar18 + 8))(plVar18,uVar2,uVar13,0), cVar3 != '\0')) {
            uVar17 = (ulonglong)((int)uVar17 + 1);
          }
          iVar16 = (int)uVar17;
          puVar14 = puVar14 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
        iVar5 = *(int *)(lVar15 + 0x18);
        param_3 = local_res18;
      }
      plVar18 = local_res20;
      uVar11 = 0;
      if (iVar16 == iVar5) {
        plVar19 = *(longlong **)(lVar15 + 0x10);
        uVar10 = (longlong)iVar5 & 0x1fffffffffffffff;
        if (plVar19 + iVar5 < plVar19) {
          uVar10 = uVar11;
        }
        if (uVar10 != 0) {
          do {
            plVar8 = (longlong *)*plVar18;
            iVar5 = (int)plVar18[1];
            lVar12 = *plVar19;
            for (plVar9 = plVar8; plVar9 != plVar8 + iVar5; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar15) {
                if ((int)((longlong)plVar9 - (longlong)plVar8 >> 3) != -1) goto LAB_14258ff0a;
                break;
              }
            }
            *(int *)(plVar18 + 1) = iVar5 + 1;
            if (*(int *)((longlong)plVar18 + 0xc) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar18,iVar5);
            }
            *(longlong *)((longlong)iVar5 * 8 + *plVar18) = lVar15;
LAB_14258ff0a:
            plVar8 = (longlong *)*param_3;
            iVar5 = (int)param_3[1];
            for (plVar9 = plVar8; plVar9 != plVar8 + iVar5; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar12) {
                if ((int)((longlong)plVar9 - (longlong)plVar8 >> 3) != -1) goto LAB_14258ff61;
                break;
              }
            }
            *(int *)(param_3 + 1) = iVar5 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
            }
            *(longlong *)((longlong)iVar5 * 8 + *param_3) = lVar12;
LAB_14258ff61:
            plVar19 = plVar19 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar10);
        }
      }
    }
    puVar6 = (undefined8 *)*puVar6;
    param_4 = local_res20;
    plVar18 = local_res8;
    uVar2 = local_res10;
  } while( true );
}



// FUNCTION 1425900a0 FUN_1425900a0 body=83 status=ok
// SIG undefined FUN_1425900a0(void)

float FUN_1425900a0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x58) & 8) == 0) {
    if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
      return 1.0;
    }
    fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x90) + 0x3d8))();
  }
  else {
    fVar2 = *(float *)(param_1 + 0x54);
  }
  fVar1 = 0.1;
  if ((0.1 <= fVar2) && (fVar1 = fVar2, 10.0 <= fVar2)) {
    fVar1 = 10.0;
  }
  return fVar1;
}



// FUNCTION 142590100 GetFeatureLevelsToCompileForRendering body=29 status=ok
// SIG undefined GetFeatureLevelsToCompileForRendering(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint UMaterialInterface::GetFeatureLevelsToCompileForRendering(longlong param_1)

{
  return 1 << ((byte)DAT_1464c9c14 & 0x1f) | *(uint *)(param_1 + 0x80) | _DAT_146afe3a0;
}



// FUNCTION 142590120 FUN_142590120 body=463 status=ok
// SIG undefined FUN_142590120(void)

undefined8
FUN_142590120(longlong param_1,int *param_2,undefined8 *param_3,int *param_4,char param_5)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res10;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
    if (param_5 != '\0') {
      piVar5 = *(int **)(param_1 + 0xd0);
      piVar6 = piVar5 + (longlong)*(int *)(param_1 + 0xd8) * 0xc;
      if (piVar5 != piVar6) {
        do {
          if ((((*piVar5 == *param_2) && (piVar5[1] == param_2[1])) &&
              (*(char *)((longlong)piVar5 + 0xb) == '\x02')) && (piVar5[3] == param_2[3])) {
            *param_3 = *(undefined8 *)(piVar5 + 4);
            *param_4 = piVar5[6];
            return 1;
          }
          piVar5 = piVar5 + 0xc;
        } while (piVar5 != piVar6);
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x168);
    lVar8 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x68) {
      if (*(char *)(lVar7 + 0x50) != '\0') {
        plVar9 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar1 = param_2[3];
          plVar9 = (longlong *)0x0;
          if ((-1 < iVar1) && (iVar1 < *(int *)(lVar7 + 0x18))) {
            lVar3 = *(longlong *)(lVar7 + 0x10);
LAB_1425901b7:
            plVar9 = *(longlong **)(lVar3 + (longlong)iVar1 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar1 = param_2[3], -1 < iVar1)
                 ) && (iVar1 < *(int *)(lVar7 + 0x28))) {
          lVar3 = *(longlong *)(lVar7 + 0x20);
          goto LAB_1425901b7;
        }
        local_res10 = (longlong *)0x0;
        if (plVar9 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar9 + 0x2f8))(plVar9,param_2,param_3,param_4);
          if (cVar2 != '\0') {
            return 1;
          }
          cVar2 = FUN_14257ccb0(plVar9,param_2,local_38,&local_res10);
          if (cVar2 != '\0') {
            cVar2 = (**(code **)(*local_res10 + 0x2f8))(local_res10,param_2,param_3,param_4);
            if (cVar2 != '\0') {
              return 1;
            }
            UMaterialExpressionFontSampleParameter::IsNamedParameter
                      (local_38[0],param_2,param_3,param_4);
            return 1;
          }
        }
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if (plVar9 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar9 + 0x388))(plVar9,param_2,param_3,param_4,1);
  }
  return uVar4;
}



// FUNCTION 1425902f0 FUN_1425902f0 body=85 status=ok
// SIG undefined FUN_1425902f0(void)

undefined1 FUN_1425902f0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x200,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetFontParameterDefaultValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x200,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetFontParameterDefaultValue");
  return 0;
}



// FUNCTION 142590350 FUN_142590350 body=711 status=ok
// SIG undefined FUN_142590350(void)

byte FUN_142590350(longlong param_1,int *param_2,undefined8 *param_3,int *param_4,byte param_5)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_res8;
  undefined8 local_38 [2];
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar11 = 0x9d;
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar5 = 0x9d;
    if (DVar4 == DAT_1468c21c0) goto LAB_14259039e;
  }
  else {
LAB_14259039e:
    lVar5 = 0x9c;
  }
  if (*(char *)(lVar5 + param_1) != '\0') {
    return 0;
  }
  piVar7 = *(int **)(param_1 + 0xd0);
  piVar8 = piVar7 + (longlong)*(int *)(param_1 + 0xd8) * 0xc;
  if (piVar7 != piVar8) {
    do {
      if ((((*piVar7 == *param_2) && (piVar7[1] == param_2[1])) &&
          (*(char *)((longlong)piVar7 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar7[3] == param_2[3])) {
        *param_3 = *(undefined8 *)(piVar7 + 4);
        *param_4 = piVar7[6];
        return 1;
      }
      piVar7 = piVar7 + 0xc;
    } while (piVar7 != piVar8);
  }
  if (*(char *)((longlong)param_2 + 0xb) != '\x02') {
    lVar5 = *(longlong *)(param_1 + 0x168);
    local_38[0] = 0;
    lVar9 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar5;
    for (; lVar5 != lVar9; lVar5 = lVar5 + 0x68) {
      if (*(char *)(lVar5 + 0x50) != '\0') {
        plVar10 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar1 = param_2[3];
          plVar10 = (longlong *)0x0;
          if ((-1 < iVar1) && (iVar1 < *(int *)(lVar5 + 0x18))) {
            lVar6 = *(longlong *)(lVar5 + 0x10);
LAB_142590497:
            plVar10 = *(longlong **)(lVar6 + (longlong)iVar1 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar1 = param_2[3], -1 < iVar1)
                 ) && (iVar1 < *(int *)(lVar5 + 0x28))) {
          lVar6 = *(longlong *)(lVar5 + 0x20);
          goto LAB_142590497;
        }
        local_res8 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar10 + 0x2f8))(plVar10,param_2,param_3,param_4);
          if (cVar2 != '\0') {
            return 1;
          }
          cVar2 = FUN_14257ccb0(plVar10,param_2,local_38,&local_res8);
          if (cVar2 != '\0') {
            cVar2 = (**(code **)(*local_res8 + 0x2f8))(local_res8,param_2,param_3,param_4);
            if (cVar2 != '\0') {
              return 1;
            }
            UMaterialExpressionFontSampleParameter::IsNamedParameter
                      (local_38[0],param_2,param_3,param_4);
            return param_5 ^ 1;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar5 = 0x9d;
    if (DVar4 != DAT_1468c21c0) goto LAB_14259054b;
  }
  lVar5 = 0x9c;
LAB_14259054b:
  *(undefined1 *)(lVar5 + param_1) = 1;
  bVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x430))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4,param_5);
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar11 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar11) = 0;
  return bVar3;
}



// FUNCTION 142590620 FUN_142590620 body=44 status=ok
// SIG undefined FUN_142590620(void)

undefined8 FUN_142590620(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x18);
  FName::ToString(local_res8);
  return param_2;
}



// FUNCTION 142590650 FUN_142590650 body=412 status=ok
// SIG undefined FUN_142590650(void)

undefined8 * FUN_142590650(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  undefined8 local_res8;
  undefined8 local_res18;
  short *local_38;
  undefined8 local_30;
  short *local_28;
  int local_20;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_38 = (short *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
    }
    else {
      local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18);
      FName::ToString(&local_res8,&local_38);
    }
    psVar4 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      psVar4 = local_38;
    }
    *param_2 = 0;
    param_2[1] = 0;
    local_28 = local_38;
    if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (psVar4[lVar2] != 0);
      iVar1 = (int)lVar2 + 1;
      *(int *)(param_2 + 1) = iVar1;
      if (0 < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      FGenericPlatformString::Memcpy(*param_2,psVar4,(longlong)iVar1 * 2);
      local_28 = local_38;
    }
  }
  else {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FName::ToString(&local_res8,&local_28);
    psVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      psVar4 = local_28;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_30 = 5;
      local_38 = (short *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
    }
    else {
      local_res18 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18);
      FName::ToString(&local_res18,&local_38);
    }
    psVar3 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      psVar3 = local_38;
    }
    FString::PrintfImpl(param_2,L"%s::%s",psVar3,psVar4);
    if (local_38 != (short *)0x0) {
      FMemory::Free();
    }
  }
  if (local_28 != (short *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1425907f0 FUN_1425907f0 body=166 status=ok
// SIG undefined FUN_1425907f0(void)

void FUN_1425907f0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  *param_4 = 0;
  cVar2 = FUN_1425b3950();
  cVar2 = (**(code **)(*param_2 + 0x428))(param_2,param_1 + 0x18,param_4,cVar2 == '\0');
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x340))(param_3);
    if ((iVar1 < 0) || ((int)plVar3[1] <= iVar1)) {
      if (DAT_146afeeec == '\0') {
        DAT_146afeeec = '\x01';
      }
    }
    else {
      uVar4 = *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8);
    }
    *param_4 = uVar4;
  }
  return;
}



// FUNCTION 1425908d0 FUN_1425908d0 body=432 status=ok
// SIG undefined FUN_1425908d0(void)

undefined8 FUN_1425908d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar7 = 0x9d;
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 0x9d;
    if (DVar3 == DAT_1468c21c0) goto LAB_14259091b;
  }
  else {
LAB_14259091b:
    lVar4 = 0x9c;
  }
  if (*(char *)(param_1 + lVar4) != '\0') {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x168);
  lVar6 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x68) {
    if (*(char *)(lVar4 + 0x50) != '\0') {
      if (*(char *)(param_2 + 0xb) == '\0') {
        iVar1 = *(int *)(param_2 + 0xc);
        if ((-1 < iVar1) && (iVar1 < *(int *)(lVar4 + 0x18))) {
          lVar5 = *(longlong *)(lVar4 + 0x10);
LAB_14259098c:
          lVar5 = *(longlong *)(lVar5 + (longlong)iVar1 * 8);
          if ((lVar5 != 0) && (cVar2 = FUN_14256ce30(lVar5,param_2,param_3), cVar2 != '\0')) {
            return 1;
          }
        }
      }
      else if (((*(char *)(param_2 + 0xb) == '\x01') &&
               (iVar1 = *(int *)(param_2 + 0xc), -1 < iVar1)) && (iVar1 < *(int *)(lVar4 + 0x28))) {
        lVar5 = *(longlong *)(lVar4 + 0x20);
        goto LAB_14259098c;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 0x9d;
    if (DVar3 != DAT_1468c21c0) goto LAB_142590a10;
  }
  lVar4 = 0x9c;
LAB_142590a10:
  *(undefined1 *)(param_1 + lVar4) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x440))
            (*(longlong **)(param_1 + 0x90),param_2,param_3);
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
    lVar7 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar7) = 0;
  return 0;
}



// FUNCTION 142590a80 FUN_142590a80 body=78 status=ok
// SIG undefined FUN_142590a80(void)

undefined8 FUN_142590a80(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x280))();
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_142590aba;
    }
  }
  uVar3 = 0;
LAB_142590aba:
  if ((uVar1 & 0xc0) == 0xc0) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 142590ad0 FUN_142590ad0 body=85 status=ok
// SIG undefined FUN_142590ad0(void)

undefined1 FUN_142590ad0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x134,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetIgnoreCustomGlow")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x134,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetIgnoreCustomGlow")
  ;
  return 0;
}



// FUNCTION 142590b30 FUN_142590b30 body=87 status=ok
// SIG undefined FUN_142590b30(void)

bool FUN_142590b30(longlong param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  if ((*(longlong **)(param_1 + 0x90) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x278))(), cVar2 != '\0')) {
    return true;
  }
  return (uVar1 & 0x30) == 0x30;
}



// FUNCTION 142590b90 HasSection body=85 status=ok
// SIG undefined HasSection(void)

undefined1 UMovieSceneTrack::HasSection(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x133,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetIgnoreCustomMask")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x133,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetIgnoreCustomMask")
  ;
  return 0;
}



// FUNCTION 142590bf0 FUN_142590bf0 body=283 status=ok
// SIG undefined FUN_142590bf0(void)

undefined8 FUN_142590bf0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar5 = 0x9d;
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x9d;
    if (DVar2 == DAT_1468c21c0) goto LAB_142590c2f;
  }
  else {
LAB_142590c2f:
    lVar3 = 0x9c;
  }
  if (*(char *)(param_1 + lVar3) != '\0') {
    uVar4 = UMaterial::GetDefaultMaterial(0);
    return uVar4;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x9d;
    if (DVar2 == DAT_1468c21c0) goto LAB_142590c9c;
  }
  else {
LAB_142590c9c:
    lVar3 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar3) = 1;
  if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
    uVar4 = UMaterial::GetDefaultMaterial();
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x290))();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) goto LAB_142590cf4;
  }
  lVar5 = 0x9c;
LAB_142590cf4:
  *(undefined1 *)(param_1 + lVar5) = 0;
  return uVar4;
}



// FUNCTION 142590d10 FUN_142590d10 body=85 status=ok
// SIG undefined FUN_142590d10(void)

undefined8 FUN_142590d10(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x149,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetMaterial");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x149,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetMaterial");
  return 0;
}



// FUNCTION 142590d70 GetRenderProxy body=85 status=ok
// SIG undefined GetRenderProxy(void)

undefined8 UMaterialInterface::GetRenderProxy(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x14e,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetMaterial");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x14e,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetMaterial");
  return 0;
}



// FUNCTION 142590df0 GetMaterialHash body=457 status=ok
// SIG undefined GetMaterialHash(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMaterialShaderMapId::GetMaterialHash(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  undefined8 local_100;
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FSHA1::FSHA1(local_f8);
  FSHA1::Update(local_f8,param_1 + 0x18,4);
  FSHA1::Update(local_f8,param_1,0x10);
  iVar4 = 0;
  local_108 = (undefined2 *)0x0;
  local_100 = 0;
  FName::ToString(&DAT_146afeea8 + (longlong)*(int *)(param_1 + 0x10) * 8,&local_108);
  puVar3 = &DAT_143f3eda8;
  if ((int)local_100 == 0) {
    puVar1 = &DAT_143f3eda8;
    iVar2 = iVar4;
  }
  else {
    puVar1 = local_108;
    iVar2 = (int)local_100 + -1;
  }
  FSHA1::UpdateWithString(local_f8,puVar1,iVar2);
  FSHA1::Update(local_f8,param_1 + 0x14,4);
  FStaticParameterSet::UpdateHash(param_1 + 0x20,local_f8);
  iVar2 = iVar4;
  if (*(int *)(param_1 + 0x68) != 0) {
    puVar3 = *(undefined2 **)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x68) + -1;
  }
  FSHA1::UpdateWithString(local_f8,puVar3,iVar2);
  iVar2 = iVar4;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      FSHA1::Update(local_f8,(longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x70),0x10);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  if (0 < *(int *)(param_1 + 0x88)) {
    do {
      FSHA1::Update(local_f8,(longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x80),0x10);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x88));
  }
  FSHA1::Update(local_f8,param_1 + 0xd0,0x14);
  FSHA1::Update(local_f8,param_1 + 0xe4,0x14);
  FSHA1::Final(local_f8);
  FSHA1::GetHash(local_f8,param_2);
  if (local_108 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FSHA1::~FSHA1(local_f8);
  return;
}



// FUNCTION 142591000 FUN_142591000 body=413 status=ok
// SIG undefined FUN_142591000(void)

undefined1 FUN_142591000(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  DWORD DVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar8 = 0x9d;
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar5 = 0x9d;
    if (DVar4 == DAT_1468c21c0) goto LAB_142591051;
  }
  else {
LAB_142591051:
    lVar5 = 0x9c;
  }
  if (*(char *)(param_1 + lVar5) != '\0') {
    return 0;
  }
  piVar7 = *(int **)(param_1 + 0x168);
  piVar6 = piVar7 + (longlong)*(int *)(param_1 + 0x170) * 0x1a;
  for (; piVar7 != piVar6; piVar7 = piVar7 + 0x1a) {
    if (((((char)piVar7[0x14] != '\0') && (*piVar7 == *param_2)) && (piVar7[1] == param_2[1])) &&
       ((*(char *)((longlong)piVar7 + 0xb) == *(char *)((longlong)param_2 + 0xb) &&
        (piVar7[3] == param_2[3])))) {
      FMaterialLayersFunctions::operator=(param_3,piVar7 + 4);
      uVar1 = *(undefined8 *)(piVar7 + 0x17);
      *param_4 = *(undefined8 *)(piVar7 + 0x15);
      param_4[1] = uVar1;
      return 1;
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar5 = 0x9d;
    if (DVar4 != DAT_1468c21c0) goto LAB_142591111;
  }
  lVar5 = 0x9c;
LAB_142591111:
  *(undefined1 *)(param_1 + lVar5) = 1;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x328))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4);
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar8 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar8) = 0;
  return uVar3;
}



// FUNCTION 1425911a0 GetScalarParameterDefaultValue body=85 status=ok
// SIG undefined GetScalarParameterDefaultValue(void)

undefined1 UMaterialInterface::GetScalarParameterDefaultValue(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1e5,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetMaterialLayersParameterValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1e5,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetMaterialLayersParameterValue");
  return 0;
}



// FUNCTION 142591200 FUN_142591200 body=148 status=ok
// SIG undefined FUN_142591200(void)

undefined8 FUN_142591200(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar3 = *(longlong **)(param_1 + 0x138);
  if (plVar3 != (longlong *)0x0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x140) + 0x98) & 1) != 0) {
      lVar1 = FUN_1428742e0();
      local_res8 = *(undefined4 *)(lVar1 + 0xc);
      local_resc = param_2;
      uVar2 = FUN_14256a620(*(longlong *)(param_1 + 0x140) + 0x188,&local_res8);
      return uVar2;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2a8))(plVar3,0,0);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142591283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1425912a0 FUN_1425912a0 body=123 status=ok
// SIG undefined FUN_1425912a0(void)

undefined8 FUN_1425912a0(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res8;
  undefined4 local_resc;
  
  local_res8 = param_3;
  if (param_3 == 3) {
    lVar2 = FUN_1428742e0();
    local_res8 = *(int *)(lVar2 + 0xc);
  }
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    local_resc = param_2;
    uVar3 = FUN_14256a620(param_1 + 0x188,&local_res8);
    return uVar3;
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142591307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x300))(plVar1,param_2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 142591320 GetMaterialShaderMapKeyString body=787 status=ok
// SIG undefined GetMaterialShaderMapKeyString(void)

undefined8 GetMaterialShaderMapKeyString(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 *_Dst;
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined2 *local_res20;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  int local_6c;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_141eca160(&local_res8,param_3);
  plVar2 = (longlong *)GetTargetPlatformManagerRef();
  uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,local_res8);
  iVar7 = 0;
  local_88 = (undefined2 *)0x0;
  local_80 = 0;
  FString::AppendInt(&local_88,uVar1);
  puVar3 = (undefined8 *)FName::ToString(&local_res8);
  iVar8 = *(int *)(puVar3 + 1);
  local_78 = (undefined2 *)*puVar3;
  *puVar3 = 0;
  local_70 = *(int *)(puVar3 + 1);
  local_6c = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  iVar6 = local_70;
  if (local_6c < (int)((2 - (uint)(iVar8 != 0)) + local_70)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    iVar6 = local_70;
  }
  local_70 = (2 - (uint)(iVar6 != 0)) + iVar6;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
  }
  puVar4 = local_88;
  local_78[(longlong)iVar6 - (ulonglong)(iVar6 != 0)] = 0x5f;
  (local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[1] = 0;
  iVar8 = (int)local_80;
  if (local_70 < 2) {
    iVar9 = local_80._4_4_;
    local_88 = (undefined2 *)0x0;
    local_80 = 0;
    puVar5 = local_78;
  }
  else {
    if ((int)local_80 != 0) {
      iVar7 = (int)local_80 + -1;
    }
    if ((local_70 != 0) || (iVar8 = 1, iVar7 == 0)) {
      iVar8 = 0;
    }
    puVar5 = (undefined2 *)0x0;
    iVar6 = local_70;
    if (local_6c < iVar8 + iVar7 + local_70) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar6 = local_70;
    }
    local_res20 = local_88;
    puVar4 = local_78;
    iVar9 = local_6c;
    iVar8 = iVar6;
    if (iVar7 != 0) {
      local_70 = iVar6 + (uint)(iVar6 == 0) + iVar7;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
      }
      iVar9 = local_6c;
      iVar8 = local_70;
      puVar4 = local_78;
      _Dst = local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0));
      _guard_xfg_dispatch_icall_nop(_Dst,local_res20,(longlong)iVar7 * 2);
      _Dst[iVar7] = 0;
      param_3 = local_res18;
    }
  }
  local_78 = puVar4;
  local_6c = iVar9;
  if (iVar9 < (int)((2 - (uint)(iVar8 != 0)) + iVar8)) {
    local_70 = iVar8;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar8 = local_70;
  }
  local_70 = (2 - (uint)(iVar8 != 0)) + iVar8;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar8);
  }
  local_78[(longlong)iVar8 - (ulonglong)(iVar8 != 0)] = 0x5f;
  (local_78 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)))[1] = 0;
  local_68 = local_78;
  local_60 = local_70;
  local_5c = local_6c;
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_141a0d470(param_3,&local_68);
  FUN_142583e90(local_res10,&local_68);
  FMaterialAttributeDefinitionMap::AppendDDCKeyString(&local_68);
  puVar4 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  FString::PrintfImpl(&local_78,L"%s_%s_%s",L"MATSM",L"F1CC9C7A48F5422EB67E3ADC82465189",puVar4);
  puVar4 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar4 = local_78;
  }
  FUN_141efa6c0(param_1,puVar4);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142591640 FUN_142591640 body=1066 status=ok
// SIG undefined FUN_142591640(void)

longlong * FUN_142591640(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  void *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  uVar11 = (**(code **)(*param_1 + 0x1e8))();
  puVar15 = (undefined8 *)FUN_14258f1a0(local_38,uVar11);
  puVar18 = &DAT_143f3eda8;
  if (*(int *)(puVar15 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar15;
  }
  uVar11 = (**(code **)(*param_1 + 0x1f8))(param_1);
  puVar15 = (undefined8 *)FUN_142594d10(&local_48,uVar11);
  if (*(int *)(puVar15 + 1) != 0) {
    puVar18 = (undefined2 *)*puVar15;
  }
  FString::PrintfImpl(param_2,L"LightingModel=%s, BlendMode=%s, ",puVar18,puVar17);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  cVar4 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_1 + 0x2a8))(param_1);
    if (cVar4 == '\0') {
      iVar12 = (**(code **)(*param_1 + 0x178))(param_1);
      if (iVar12 == 0) {
        iVar12 = (**(code **)(*param_1 + 0x20))(param_1);
        if (iVar12 == 1) {
          iVar12 = (**(code **)(*param_1 + 0x2b8))(param_1);
          if (iVar12 == 0xc) goto LAB_14259173a;
        }
        uVar11 = 0;
        goto LAB_142591740;
      }
    }
  }
LAB_14259173a:
  uVar11 = 1;
LAB_142591740:
  uVar5 = FUN_141b196e0(param_1,0);
  uVar6 = (**(code **)(*param_1 + 0x220))(param_1);
  uVar7 = (**(code **)(*param_1 + 0x1d0))(param_1);
  uVar8 = (**(code **)(*param_1 + 0x40))(param_1);
  uVar9 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar10 = (**(code **)(*param_1 + 200))(param_1);
  FString::PrintfImpl(&local_48,
                      L"SpecialEngine=%d, TwoSided=%d, TSNormal=%d, Masked=%d, Distorted=%d, WritesEveryPixel=%d, ModifiesMeshPosition=%d, Usage={"
                      ,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar11);
  pvVar2 = local_48;
  if ((int)local_40 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = (int)local_40 + -1;
  }
  iVar16 = 0;
  if (iVar12 != 0) {
    iVar14 = (int)param_2[1];
    iVar13 = (uint)(iVar14 == 0) + iVar14 + iVar12;
    *(int *)(param_2 + 1) = iVar13;
    if (*(int *)((longlong)param_2 + 0xc) < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  bVar3 = true;
  do {
    cVar4 = FUN_14256ec20(param_1[5],iVar16);
    if (cVar4 != '\0') {
      if (!bVar3) {
        local_48 = (void *)0x0;
        local_40 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        pvVar2 = local_48;
        FGenericPlatformString::Memcpy(local_48,&DAT_145106cdc,4);
        if (((int)local_40 != 0) && (iVar12 = (int)local_40 + -1, iVar12 != 0)) {
          iVar14 = (int)param_2[1];
          iVar13 = (uint)(iVar14 == 0) + iVar14 + iVar12;
          *(int *)(param_2 + 1) = iVar13;
          if (*(int *)((longlong)param_2 + 0xc) < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar12 * 2);
          *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
      }
      puVar15 = (undefined8 *)FUN_14256eec0(param_1[5],local_38,iVar16);
      pvVar2 = (void *)*puVar15;
      iVar12 = *(int *)(puVar15 + 1) + -1;
      if (*(int *)(puVar15 + 1) == 0) {
        iVar12 = 0;
      }
      if (iVar12 != 0) {
        iVar14 = (int)param_2[1];
        iVar13 = (uint)(iVar14 == 0) + iVar14 + iVar12;
        *(int *)(param_2 + 1) = iVar13;
        if (*(int *)((longlong)param_2 + 0xc) < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      bVar3 = false;
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x12);
  local_48 = (void *)0x0;
  local_40 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  pvVar2 = local_48;
  FGenericPlatformString::Memcpy(local_48,&DAT_145106ff4,4);
  if (((int)local_40 != 0) && (iVar12 = (int)local_40 + -1, iVar12 != 0)) {
    iVar16 = (int)param_2[1];
    iVar14 = (uint)(iVar16 == 0) + iVar16 + iVar12;
    *(int *)(param_2 + 1) = iVar14;
    if (*(int *)((longlong)param_2 + 0xc) < iVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar16);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar16 - (ulonglong)(iVar16 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
  }
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return param_2;
}



// FUNCTION 142591a70 FUN_142591a70 body=212 status=ok
// SIG undefined FUN_142591a70(void)

void FUN_142591a70(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar3 = *(longlong **)(param_1 + 0x138);
  if (plVar3 == (longlong *)0x0) {
LAB_142591b04:
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(*(longlong *)(param_1 + 0x140) + 0x98) & 1) == 0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2a8))(plVar3,0,0);
      goto LAB_142591b1d;
    }
    lVar2 = FUN_1428742e0();
    local_res8 = *(undefined4 *)(lVar2 + 0xc);
    local_resc = param_2;
    plVar3 = (longlong *)FUN_14256a620(*(longlong *)(param_1 + 0x140) + 0x188,&local_res8);
    if (plVar3 == (longlong *)0x0) goto LAB_142591b04;
    if (plVar3[2] != 0) {
      *param_3 = param_1;
      *param_4 = plVar3;
      return;
    }
    uVar1 = (**(code **)(*plVar3 + 0x20))();
  }
  plVar3 = (longlong *)UMaterial::GetDefaultMaterial(uVar1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2a8))(plVar3,0,0);
LAB_142591b1d:
  (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 142591b50 FUN_142591b50 body=181 status=ok
// SIG undefined FUN_142591b50(void)

void FUN_142591b50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
LAB_142591be8:
    UMaterial::GetDefaultMaterial(0);
  }
  else {
    plVar3 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar3 = param_2;
    }
    iVar2 = (int)param_2[9];
    plVar1 = plVar3 + iVar2;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_1) goto LAB_142591be8;
    }
    *(int *)(param_2 + 9) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0x4c) < iVar2 + 1) {
      TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2);
    }
    plVar3 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar3 = param_2;
    }
    plVar3[iVar2] = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x298))(*(longlong **)(param_1 + 0x90),param_2);
  }
  return;
}



// FUNCTION 142591c10 FUN_142591c10 body=85 status=ok
// SIG undefined FUN_142591c10(void)

undefined8 FUN_142591c10(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x154,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetMaterial_Concurrent");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x154,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetMaterial_Concurrent");
  return 0;
}



// FUNCTION 142591c80 FUN_142591c80 body=16 status=ok
// SIG undefined FUN_142591c80(void)

undefined8 FUN_142591c80(longlong param_1,longlong param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + (longlong)*(int *)(param_2 + 8) * 8);
}



// FUNCTION 142591cf0 FUN_142591cf0 body=317 status=ok
// SIG undefined FUN_142591cf0(void)

longlong FUN_142591cf0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar5 = 0x9d;
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x9d;
    if (DVar2 == DAT_1468c21c0) goto LAB_142591d2f;
  }
  else {
LAB_142591d2f:
    lVar3 = 0x9c;
  }
  if (*(char *)(param_1 + lVar3) != '\0') {
    plVar4 = (longlong *)UMaterial::GetDefaultMaterial(0);
                    /* WARNING: Could not recover jumptable at 0x000142591d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
    return lVar5;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x9d;
    if (DVar2 == DAT_1468c21c0) goto LAB_142591da9;
  }
  else {
LAB_142591da9:
    lVar3 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar3) = 1;
  lVar3 = *(longlong *)(param_1 + 0x88);
  if (lVar3 == 0) {
    if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
      lVar3 = *(longlong *)(DAT_146b17150 + 0x6c8);
    }
    else {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2b0))();
    }
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) goto LAB_142591e16;
  }
  lVar5 = 0x9c;
LAB_142591e16:
  *(undefined1 *)(param_1 + lVar5) = 0;
  return lVar3;
}



// FUNCTION 142591e30 FUN_142591e30 body=85 status=ok
// SIG undefined FUN_142591e30(void)

undefined8 FUN_142591e30(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x16a,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetPhysicalMaterial")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x16a,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetPhysicalMaterial")
  ;
  return 0;
}



// FUNCTION 142591eb0 FUN_142591eb0 body=60 status=ok
// SIG undefined FUN_142591eb0(void)

longlong FUN_142591eb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x130) != 0)) {
    return lVar1 + 0x128;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = UMaterial::GetDefaultMaterial(0);
  }
  return lVar1 + 0x828;
}



// FUNCTION 142591f10 FUN_142591f10 body=375 status=ok
// SIG undefined FUN_142591f10(void)

ulonglong FUN_142591f10(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int iStack_14;
  
  iVar3 = UObjectBaseUtility::GetLinkerUE4Version();
  if (iVar3 < 0x120) {
    uVar4 = DAT_146afef10;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afef18) &&
       (_Init_thread_header(&DAT_146afef18), uVar4 = DAT_146afef10, DAT_146afef18 == -1)) {
      FName::FName(&DAT_146afef10,L"RefractionBias",1);
      _Init_thread_footer(&DAT_146afef18);
      uVar4 = DAT_146afef10;
    }
  }
  else {
    uVar4 = DAT_146afef00;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afef08) &&
       (_Init_thread_header(&DAT_146afef08), uVar4 = DAT_146afef00, DAT_146afef08 == -1)) {
      FName::FName(&DAT_146afef00,L"RefractionDepthBias",1);
      _Init_thread_footer(&DAT_146afef08);
      uVar4 = DAT_146afef00;
    }
  }
  piVar5 = *(int **)(param_1 + 0xa0);
  piVar1 = piVar5 + (longlong)*(int *)(param_1 + 0xa8) * 10;
  if (piVar5 != piVar1) {
    iStack_14 = (int)(uVar4 >> 0x20);
    do {
      if ((((*piVar5 == (int)uVar4) && (piVar5[1] == iStack_14)) &&
          (*(char *)((longlong)piVar5 + 0xb) == '\x02')) && (piVar5[3] == -1)) {
        iVar3 = piVar5[4];
        *param_2 = iVar3;
        return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
      }
      piVar5 = piVar5 + 10;
    } while (piVar5 != piVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  if (plVar2 == (longlong *)0x0) {
    return uVar4 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x000142592056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0x438))(plVar2,param_2);
  return uVar4;
}



// FUNCTION 142592090 FUN_142592090 body=69 status=ok
// SIG undefined FUN_142592090(void)

undefined8 FUN_142592090(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x288))();
  FUN_142592160(param_1,param_2,uVar1,param_3);
  return param_2;
}



// FUNCTION 1425920e0 FUN_1425920e0 body=121 status=ok
// SIG undefined FUN_1425920e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1425920e0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_38 = 0;
  local_30 = 0;
  uVar1 = (**(code **)(*param_1 + 0x298))(param_1,local_78);
  FUN_142592160(param_1,param_2,uVar1,param_3);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142592160 FUN_142592160 body=760 status=ok
// SIG undefined FUN_142592160(void)

undefined8 * FUN_142592160(longlong *param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  ushort uVar19;
  ushort uVar20;
  ushort uStackX_1c;
  ushort uStackX_1e;
  longlong lVar18;
  
  if (param_3 == (longlong *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  plVar17 = (longlong *)(**(code **)(*param_1 + 0x2f8))(param_1,param_4,3);
  if (plVar17 == (longlong *)0x0) {
    plVar17 = (longlong *)(**(code **)(*param_3 + 0x2f8))(param_3,param_4,3);
    if (plVar17 == (longlong *)0x0) {
      *param_2 = 0;
      return param_2;
    }
  }
  uVar15 = (**(code **)(*param_1 + 0x460))(param_1);
  bVar2 = 1 < uVar15;
  bVar3 = (**(code **)(*param_1 + 0x468))(param_1);
  iVar16 = (**(code **)(*plVar17 + 0x20))(plVar17);
  if (iVar16 == 1) {
    uStackX_1c = 0x800;
    uStackX_1e = 0;
    goto LAB_14259241b;
  }
  if (param_4 < 2) {
    bVar7 = (byte)(*(uint *)(param_3 + 0xd9) >> 1);
  }
  else {
    bVar7 = *(byte *)(param_3 + 0xd9);
  }
  bVar4 = (**(code **)(*param_1 + 0x4b0))(param_1);
  bVar5 = (**(code **)(*plVar17 + 0x220))(plVar17);
  uVar14 = 0;
  if ((!bVar2) || (uVar9 = 8, (bVar7 & 1) == 0)) {
    uVar9 = 0;
  }
  if ((!bVar2) || (uVar10 = 0x10, (bVar7 & 1) != 0)) {
    uVar10 = uVar14;
  }
  if ((!bVar2) || (uVar11 = 0x80, (*(byte *)(param_3 + 0xe1) & 1) == 0)) {
    uVar11 = uVar14;
  }
  if (bVar2) {
    cVar6 = FUN_14259fdf0(plVar17);
    uVar20 = 0x20;
    if (cVar6 == '\0') goto LAB_142592305;
  }
  else {
LAB_142592305:
    uVar20 = uVar14;
  }
  uVar1 = *(uint *)((longlong)param_3 + 0x71c);
  uVar12 = 0;
  if (uVar15 == 4) {
    uVar12 = 0x40;
  }
  lVar18 = plVar17[1];
  if (lVar18 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ushort)*(byte *)(lVar18 + 0x354);
  }
  if (lVar18 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = (ushort)*(byte *)(lVar18 + 0x352);
  }
  iVar16 = (**(code **)(*plVar17 + 0x200))(plVar17);
  if ((bVar2) && (uVar14 = 0, iVar16 - 4U < 2)) {
    uVar14 = 0x1000;
  }
  if (plVar17[1] == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)*(byte *)(plVar17[1] + 0x356);
  }
  bVar7 = (**(code **)(*plVar17 + 0xb0))(plVar17);
  bVar8 = FUN_14259fdf0(plVar17);
  iVar16 = (((uint)bVar8 * 2 | bVar7 & 1) * 2 | uVar15 & 1) << 0xd;
  uStackX_1c = (ushort)iVar16 |
               (uVar19 & 1) << 10 ^
               (uVar13 & 1) << 9 ^
               ((ushort)((uVar1 & 2) << 7) | uVar12 |
                ((bVar5 & 1) * 2 | bVar4 & 1) * 2 | bVar2 ^ 1 | uVar9 | uVar10 | uVar11 | uVar20) |
               uVar14;
  cVar6 = IsInParallelRenderingThread();
  if (((cVar6 != '\0') && (lVar18 = plVar17[2], lVar18 != 0)) ||
     (lVar18 = plVar17[1], uVar14 = 0, lVar18 != 0)) {
    uVar14 = (ushort)*(byte *)(lVar18 + 0x357);
  }
  uStackX_1e = (ushort)((uint)iVar16 >> 0x10);
  uStackX_1e = (uVar14 ^ uStackX_1e) & 1 ^ uStackX_1e;
LAB_14259241b:
  *param_2 = CONCAT26(uStackX_1e,CONCAT24(uStackX_1c,(uint)(ushort)(1 << (bVar3 & 0x1f))));
  return param_2;
}



// FUNCTION 142592490 FUN_142592490 body=85 status=ok
// SIG undefined FUN_142592490(void)

undefined8 FUN_142592490(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x163,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetRenderProxy");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x163,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetRenderProxy");
  return 0;
}



// FUNCTION 1425924f0 FUN_1425924f0 body=1874 status=ok
// SIG undefined FUN_1425924f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425924f0(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_218 [32];
  char local_1f8 [8];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  uint uStack_1d8;
  int iStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  uint *puStack_198;
  uint uStack_190;
  int iStack_18c;
  undefined8 uStack_188;
  ulonglong local_180;
  longlong *local_178;
  longlong local_168 [2];
  uint local_158 [4];
  uint *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  longlong local_118 [2];
  uint local_108 [4];
  uint *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  int iStack_ac;
  longlong lStack_a8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + 0x38;
  local_1c0 = *(longlong **)(param_1 + 8);
  uVar8 = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_f8 = (uint *)0x0;
  local_f0 = 0;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_168[0] = 0;
  local_168[1] = 0;
  local_148 = (uint *)0x0;
  local_140 = 0;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_14058cbf0(local_118,local_1c8,&local_1c0,0);
  puStack_198 = local_108;
  local_1f0._0_4_ = 0;
  local_1f0._4_4_ = 1;
  local_1e0._4_4_ = 0;
  uStack_1d8 = 0;
  if ((int)local_f0 != 0) {
    puVar12 = local_108;
    if (local_f8 != (uint *)0x0) {
      puVar12 = local_f8;
    }
    uVar5 = *puVar12;
    uVar14 = uVar8;
    uVar11 = uVar8;
    while (uVar5 == 0) {
      iVar4 = (int)uVar14;
      uStack_1d8 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_1d8;
      local_1f0._0_4_ = iVar4 + 1;
      uVar14 = (ulonglong)(uint)local_1f0;
      if ((int)((int)local_f0 + -1 + ((int)local_f0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
        local_1e0._4_4_ = (int)local_f0;
        goto LAB_142592696;
      }
      uVar5 = puVar12[(longlong)iVar4 + 1];
    }
    local_1f0._4_4_ = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (local_1f0._4_4_ != 0) {
      for (; local_1f0._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_1f0._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_1e0._4_4_ = (uStack_1d8 - iVar4) + 0x1f;
    if ((int)local_f0 < local_1e0._4_4_) {
      local_1e0._4_4_ = (int)local_f0;
    }
  }
LAB_142592696:
  uStack_1a0._0_4_ = (uint)local_1f0;
  uStack_1a0._4_4_ = local_1f0._4_4_;
  _uStack_190 = CONCAT44(local_1e0._4_4_,0xffffffff);
  uStack_188 = CONCAT44(iStack_1d4,uStack_1d8);
  uStack_1e8._0_4_ = (uint)local_1f0;
  uStack_1e8._4_4_ = local_1f0._4_4_;
  local_1d0 = uStack_1d8;
  uStack_1cc = iStack_1d4;
  uStack_1d8 = 0xffffffff;
  iStack_1d4 = local_1e0._4_4_;
  bVar3 = local_1e0._4_4_ < (int)local_f0;
  iVar4 = 0;
  local_1f0 = local_118;
  local_1a8 = local_118;
  local_1e0 = puStack_198;
  if (bVar3) {
    do {
      lVar1 = *(longlong *)(*local_1f0 + (longlong)iStack_1d4 * 0x10);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x340) == '\0') {
          iVar4 = 0x368;
        }
        else {
          iVar4 = (*(int *)(lVar1 + 0x324) + 0x15) * 0x30;
        }
        *(ulonglong *)(param_2 + 2) =
             *(longlong *)(param_2 + 2) +
             (ulonglong)
             (uint)(iVar4 + (*(int *)(lVar1 + 0x274) +
                             (*(int *)(lVar1 + 0xe8) * 0xe + *(int *)(lVar1 + 0x2b4)) * 2 +
                             *(int *)(lVar1 + 0x264) + *(int *)(lVar1 + 0x254) +
                             *(int *)(lVar1 + 0x244) + *(int *)(lVar1 + 0x234) +
                             *(int *)(lVar1 + 0x224) + *(int *)(lVar1 + 0x214) +
                             *(int *)(lVar1 + 0xfc) + *(int *)(lVar1 + 0xec)) * 8);
        if (*param_2 == 1) {
          FUN_142593e20(lVar1,local_168);
          FUN_142594a30(lVar1,&local_1b8);
        }
      }
      uStack_1d8 = uStack_1d8 & ~uStack_1e8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1e8);
    } while (iStack_1d4 < (int)local_1e0[6]);
    iVar4 = (int)local_1b0;
  }
  iVar7 = (int)local_140;
  uStack_1e8 = local_158;
  local_1f0 = (longlong *)0x100000000;
  local_1e0._4_4_ = 0;
  uStack_1d8 = 0;
  if ((int)local_140 != 0) {
    puVar12 = local_158;
    if (local_148 != (uint *)0x0) {
      puVar12 = local_148;
    }
    uVar5 = *puVar12;
    uVar14 = uVar8;
    uVar11 = uVar8;
    while (uVar5 == 0) {
      iVar10 = (int)uVar14;
      uStack_1d8 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_1d8;
      uVar14 = (ulonglong)(iVar10 + 1U);
      local_1f0._4_4_ = (uint)((ulonglong)local_1f0 >> 0x20);
      local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,iVar10 + 1U);
      if ((int)((int)local_140 + -1 + ((int)local_140 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) {
        local_1e0._4_4_ = (int)local_140;
        goto LAB_142592874;
      }
      uVar5 = puVar12[(longlong)iVar10 + 1];
    }
    uVar5 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    local_1f0 = (longlong *)CONCAT44(uVar5,(uint)local_1f0);
    if (uVar5 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    local_1e0._4_4_ = (uStack_1d8 - iVar10) + 0x1f;
    if ((int)local_140 < local_1e0._4_4_) {
      local_1e0._4_4_ = (int)local_140;
    }
  }
LAB_142592874:
  uStack_190 = 0xffffffff;
  iStack_18c = local_1e0._4_4_;
  uStack_188 = CONCAT44(iStack_1d4,uStack_1d8);
  local_1a8 = local_168;
  local_1e0._0_4_ = -1 << ((byte)local_140 & 0x1f);
  plStack_c0 = local_1f0;
  local_1e0._4_4_ = (int)local_140;
  uStack_1a0 = local_1f0;
  puStack_198 = uStack_1e8;
  local_c8 = local_1a8;
  puStack_b8 = uStack_1e8;
  lStack_a8 = uStack_188;
  uStack_b0 = uStack_190;
  iStack_ac = iStack_18c;
  while (((iStack_18c != iVar7 || (puStack_198 != local_158)) || (local_1a8 != local_168))) {
    plVar9 = *(longlong **)((longlong)iStack_18c * 0x88 + 0x78 + *local_1a8);
    if (plVar9 != (longlong *)0x0) {
      FShaderResource::GetId(plVar9[9],&local_c8);
      local_1f8[0] = '\0';
      FUN_1419ccd20(&local_88,local_1c8,&local_c8,local_1f8);
      uVar14 = uVar8;
      if (local_1f8[0] == '\0') {
        uVar14 = (ulonglong)(*(int *)(plVar9[9] + 0x7c) + 0xb8);
      }
      iVar10 = (**(code **)(*plVar9 + 0x28))(plVar9);
      iVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
      if (lStack_a8 != 0) {
        FMemory::Free();
      }
      *(ulonglong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + (uint)(iVar10 + iVar6) + uVar14;
    }
    uStack_190 = uStack_190 & ~uStack_1a0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a0);
  }
  local_1c0 = local_1b8;
  plVar9 = local_1b8 + iVar4;
  plVar13 = local_1b8;
  local_178 = plVar9;
  if (local_1b8 != plVar9) {
    do {
      lVar1 = *plVar13;
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x28);
        uVar8 = 0;
        local_1f0 = (longlong *)0x0;
        uStack_1e8 = (uint *)0x0;
        iVar4 = 0;
        local_1c0 = plVar13;
        if (lVar2 != 0) {
          uStack_1e8 = (uint *)0x1;
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
          uVar8 = (ulonglong)uStack_1e8 & 0xffffffff;
          *local_1f0 = lVar2;
          iVar4 = uStack_1e8._4_4_;
        }
        lVar2 = *(longlong *)(lVar1 + 0x20);
        if (lVar2 != 0) {
          iVar7 = (int)uVar8;
          uStack_1e8._0_4_ = iVar7 + 1;
          if (iVar4 < (int)(uint)uStack_1e8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1f0,uVar8);
            iVar4 = uStack_1e8._4_4_;
          }
          uVar8 = (ulonglong)(uint)uStack_1e8;
          local_1f0[iVar7] = lVar2;
        }
        iVar7 = (int)uVar8;
        if (*(longlong *)(lVar1 + 0x10) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x18);
          uStack_1e8._0_4_ = iVar7 + 1;
          iVar10 = (uint)uStack_1e8;
          if (iVar4 < (int)(uint)uStack_1e8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1f0,uVar8);
            iVar10 = (uint)uStack_1e8;
            iVar4 = uStack_1e8._4_4_;
          }
          uStack_1e8._0_4_ = iVar10 + 1;
          local_1f0[iVar7] = lVar2;
          lVar2 = *(longlong *)(lVar1 + 0x10);
          iVar7 = (uint)uStack_1e8;
          if (iVar4 < (int)(uint)uStack_1e8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1f0,iVar10);
            iVar7 = (uint)uStack_1e8;
            iVar4 = uStack_1e8._4_4_;
          }
          local_1f0[iVar10] = lVar2;
        }
        lVar1 = *(longlong *)(lVar1 + 8);
        iVar10 = iVar7 + 1;
        uStack_1e8 = (uint *)CONCAT44(uStack_1e8._4_4_,iVar10);
        if (iVar4 < iVar10) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1f0,iVar7);
          iVar10 = (uint)uStack_1e8;
        }
        local_1f0[iVar7] = lVar1;
        uVar14 = 0;
        uVar8 = (ulonglong)((longlong)(local_1f0 + iVar10) + (7 - (longlong)local_1f0)) >> 3;
        if (local_1f0 + iVar10 < local_1f0) {
          uVar8 = 0;
        }
        local_180 = uVar8;
        if (uVar8 != 0) {
          plVar9 = local_1f0;
          do {
            plVar13 = (longlong *)*plVar9;
            if (plVar13 != (longlong *)0x0) {
              FShaderResource::GetId(plVar13[9],&local_c8);
              local_1f8[0] = '\0';
              FUN_1419ccd20(&local_88,local_1c8,&local_c8,local_1f8);
              uVar8 = 0;
              if (local_1f8[0] == '\0') {
                uVar8 = (ulonglong)(*(int *)(plVar13[9] + 0x7c) + 0xb8);
              }
              iVar4 = (**(code **)(*plVar13 + 0x28))(plVar13);
              iVar7 = (**(code **)(*plVar13 + 0x20))(plVar13);
              if (lStack_a8 != 0) {
                FMemory::Free();
              }
              *(ulonglong *)(param_2 + 2) =
                   *(longlong *)(param_2 + 2) + (uint)(iVar4 + iVar7) + uVar8;
              uVar8 = local_180;
            }
            plVar9 = plVar9 + 1;
            uVar14 = uVar14 + 1;
            plVar13 = local_1c0;
          } while (uVar14 != uVar8);
        }
        if (local_1f0 != (longlong *)0x0) {
          FMemory::Free(local_1f0);
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + 0x30;
        plVar9 = local_178;
      }
      plVar13 = plVar13 + 1;
      local_1c0 = plVar13;
    } while (plVar13 != plVar9);
  }
  plVar9 = local_1b8;
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  local_120 = 0;
  if (local_128 != 0) {
    FMemory::Free();
  }
  FUN_1419d9810(local_168);
  local_d0 = 0;
  if (local_d8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_118);
  return;
}



// FUNCTION 142592c50 FUN_142592c50 body=433 status=ok
// SIG undefined FUN_142592c50(void)

void FUN_142592c50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int local_res8;
  int local_resc;
  
  FUN_141758340();
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    iVar3 = 0;
    do {
      iVar2 = 0;
      do {
        local_res8 = iVar3;
        local_resc = iVar2;
        lVar1 = FUN_14256a620(param_1 + 0x188,&local_res8);
        if (lVar1 != 0) {
          FUN_1425924f0(lVar1,param_2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x180;
    lVar1 = *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0xa8) * 0x18;
    *(longlong *)(param_2 + 8) = lVar1;
    lVar1 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar1;
    *(longlong *)(param_2 + 8) = lVar1;
    lVar1 = lVar1 + (longlong)*(int *)(param_1 + 200) * 0x18;
    *(longlong *)(param_2 + 8) = lVar1;
    *(longlong *)(param_2 + 8) = lVar1 + (longlong)*(int *)(param_1 + 0xd8) * 0x18;
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x180;
    lVar1 = *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0xa8) * 0x18;
    *(longlong *)(param_2 + 8) = lVar1;
    lVar1 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar1;
    *(longlong *)(param_2 + 8) = lVar1;
    lVar1 = lVar1 + (longlong)*(int *)(param_1 + 200) * 0x18;
    *(longlong *)(param_2 + 8) = lVar1;
    *(longlong *)(param_2 + 8) = lVar1 + (longlong)*(int *)(param_1 + 0xd8) * 0x18;
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x180;
    lVar1 = *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0xa8) * 0x18;
    *(longlong *)(param_2 + 8) = lVar1;
    lVar1 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar1;
    *(longlong *)(param_2 + 8) = lVar1;
    lVar1 = lVar1 + (longlong)*(int *)(param_1 + 200) * 0x18;
    *(longlong *)(param_2 + 8) = lVar1;
    *(longlong *)(param_2 + 8) = lVar1 + (longlong)*(int *)(param_1 + 0xd8) * 0x18;
  }
  return;
}



// FUNCTION 142592e10 FUN_142592e10 body=450 status=ok
// SIG undefined FUN_142592e10(void)

undefined8 FUN_142592e10(longlong param_1,int *param_2,int *param_3,undefined1 param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res10;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
    if (param_5 != '\0') {
      piVar6 = *(int **)(param_1 + 0xa0);
      piVar1 = piVar6 + (longlong)*(int *)(param_1 + 0xa8) * 10;
      if (piVar6 != piVar1) {
        do {
          if ((((*piVar6 == *param_2) && (piVar6[1] == param_2[1])) &&
              (*(char *)((longlong)piVar6 + 0xb) == '\x02')) && (piVar6[3] == param_2[3])) {
            *param_3 = piVar6[4];
            return 1;
          }
          piVar6 = piVar6 + 10;
        } while (piVar6 != piVar1);
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x168);
    lVar8 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x68) {
      if (*(char *)(lVar7 + 0x50) != '\0') {
        plVar9 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar2 = param_2[3];
          plVar9 = (longlong *)0x0;
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar7 + 0x18))) {
            lVar4 = *(longlong *)(lVar7 + 0x10);
LAB_142592eaf:
            plVar9 = *(longlong **)(lVar4 + (longlong)iVar2 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar2 = param_2[3], -1 < iVar2)
                 ) && (iVar2 < *(int *)(lVar7 + 0x28))) {
          lVar4 = *(longlong *)(lVar7 + 0x20);
          goto LAB_142592eaf;
        }
        local_res10 = (longlong *)0x0;
        if (plVar9 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar9 + 0x2e0))(plVar9,param_2,param_3);
          if (cVar3 != '\0') {
            return 1;
          }
          cVar3 = FUN_14255a0d0(plVar9,param_2,local_38,&local_res10);
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(*local_res10 + 0x2e0))(local_res10,param_2,param_3);
            if (cVar3 != '\0') {
              return 1;
            }
            UMaterialExpressionScalarParameter::IsNamedParameter(local_38[0],param_2,param_3);
            return 1;
          }
        }
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if (plVar9 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar9 + 0x370))(plVar9,param_2,param_3,param_4,1);
  }
  return uVar5;
}



// FUNCTION 142592fe0 GetStaticComponentMaskParameterDefaultValue body=85 status=ok
// SIG undefined GetStaticComponentMaskParameterDefaultValue(void)

undefined1 UMaterialInterface::GetStaticComponentMaskParameterDefaultValue(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1fa,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetScalarParameterDefaultValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1fa,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetScalarParameterDefaultValue");
  return 0;
}



// FUNCTION 142593040 FUN_142593040 body=1249 status=ok
// SIG undefined FUN_142593040(void)

ulonglong FUN_142593040(longlong param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  DWORD DVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  uVar8 = (ulonglong)bVar5;
  if (*(char *)(uVar8 + 0x9c + param_1) == '\0') {
    if (*(char *)((longlong)param_2 + 0xb) != '\x02') {
      uVar15 = *(ulonglong *)(param_1 + 0x168);
      uVar11 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + uVar15;
      uVar8 = (longlong)*(int *)(param_1 + 0x170);
      if (uVar15 != uVar11) {
        piVar12 = (int *)(uVar15 + 0x28);
        do {
          if ((char)piVar12[10] != '\0') {
            plVar19 = *(longlong **)(piVar12 + -6);
            plVar1 = plVar19 + piVar12[-4];
            for (; plVar19 != plVar1; plVar19 = plVar19 + 1) {
              if (((longlong *)*plVar19 != (longlong *)0x0) &&
                 (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar19 + 0x2b8))(),
                 plVar9 != (longlong *)0x0)) {
                local_58 = (undefined8 *)0x0;
                local_50 = 0;
                (**(code **)(*plVar9 + 0x2a0))(plVar9,&local_58);
                uVar8 = local_50;
                lVar18 = (longlong)(int)local_50;
                for (puVar13 = local_58; puVar13 != local_58 + lVar18; puVar13 = puVar13 + 1) {
                  if ((longlong *)*puVar13 == plVar9) {
                    if ((int)((longlong)puVar13 - (longlong)local_58 >> 3) != -1)
                    goto LAB_1425931b4;
                    break;
                  }
                }
                iVar7 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar7);
                if (local_50._4_4_ < iVar7) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_58,uVar8 & 0xffffffff);
                }
                local_58[lVar18] = plVar9;
LAB_1425931b4:
                puVar13 = local_58 + (int)local_50;
                for (puVar17 = local_58; puVar17 != puVar13; puVar17 = puVar17 + 1) {
                  plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar17 + 0x2c0))();
                  plVar16 = (longlong *)*plVar9;
                  plVar9 = plVar16 + (int)plVar9[1];
                  for (; plVar16 != plVar9; plVar16 = plVar16 + 1) {
                    lVar18 = *plVar16;
                    if (lVar18 != 0) {
                      lVar10 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      if ((bVar3) && (puVar14 = local_58, *(longlong *)(lVar18 + 0x40) == *param_2))
                      goto LAB_142593465;
                    }
                  }
                }
                if (local_58 != (undefined8 *)0x0) {
                  FMemory::Free(local_58);
                }
              }
            }
            plVar19 = *(longlong **)(piVar12 + -2);
            plVar1 = plVar19 + *piVar12;
            for (; plVar19 != plVar1; plVar19 = plVar19 + 1) {
              if (((longlong *)*plVar19 != (longlong *)0x0) &&
                 (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar19 + 0x2b8))(),
                 plVar9 != (longlong *)0x0)) {
                local_48 = (undefined8 *)0x0;
                local_40 = 0;
                (**(code **)(*plVar9 + 0x2a0))(plVar9,&local_48);
                uVar8 = local_40;
                lVar18 = (longlong)(int)local_40;
                for (puVar13 = local_48; puVar13 != local_48 + lVar18; puVar13 = puVar13 + 1) {
                  if ((longlong *)*puVar13 == plVar9) {
                    if ((int)((longlong)puVar13 - (longlong)local_48 >> 3) != -1)
                    goto LAB_142593316;
                    break;
                  }
                }
                iVar7 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar7);
                if (local_40._4_4_ < iVar7) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_48,uVar8 & 0xffffffff);
                }
                local_48[lVar18] = plVar9;
LAB_142593316:
                puVar13 = local_48 + (int)local_40;
                for (puVar17 = local_48; puVar17 != puVar13; puVar17 = puVar17 + 1) {
                  plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar17 + 0x2c0))();
                  plVar16 = (longlong *)*plVar9;
                  plVar9 = plVar16 + (int)plVar9[1];
                  for (; plVar16 != plVar9; plVar16 = plVar16 + 1) {
                    lVar18 = *plVar16;
                    if (lVar18 != 0) {
                      lVar10 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      if ((bVar3) && (puVar14 = local_48, *(longlong *)(lVar18 + 0x40) == *param_2))
                      {
LAB_142593465:
                        if (puVar14 != (undefined8 *)0x0) {
                          FMemory::Free();
                        }
                        *param_3 = *(undefined4 *)(lVar18 + 100);
                        uVar2 = *(undefined4 *)(lVar18 + 0x68);
                        *param_4 = uVar2;
                        return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
                      }
                    }
                  }
                }
                if (local_48 != (undefined8 *)0x0) {
                  FMemory::Free(local_48);
                }
              }
            }
          }
          uVar15 = uVar15 + 0x68;
          piVar12 = piVar12 + 0x1a;
          uVar8 = uVar11;
        } while (uVar15 != uVar11);
      }
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        GetCurrentThreadId();
      }
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      *(undefined1 *)((ulonglong)bVar5 + 0x9c + param_1) = 1;
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x3e0))
                        (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4);
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
        *(undefined1 *)(param_1 + 0x9d) = 0;
        return (ulonglong)bVar5;
      }
      *(undefined1 *)(param_1 + 0x9c) = 0;
      return (ulonglong)bVar5;
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 142593530 FUN_142593530 body=674 status=ok
// SIG undefined FUN_142593530(void)

byte FUN_142593530(longlong param_1,int *param_2,int *param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_res8;
  undefined8 local_38 [2];
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  lVar11 = 0x9d;
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 0x9d;
    if (DVar5 == DAT_1468c21c0) goto LAB_14259357f;
  }
  else {
LAB_14259357f:
    lVar6 = 0x9c;
  }
  if (*(char *)(lVar6 + param_1) != '\0') {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0xa0);
  piVar1 = piVar8 + (longlong)*(int *)(param_1 + 0xa8) * 10;
  if (piVar8 != piVar1) {
    do {
      if ((((*piVar8 == *param_2) && (piVar8[1] == param_2[1])) &&
          (*(char *)((longlong)piVar8 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar8[3] == param_2[3])) {
        *param_3 = piVar8[4];
        return 1;
      }
      piVar8 = piVar8 + 10;
    } while (piVar8 != piVar1);
  }
  if (*(char *)((longlong)param_2 + 0xb) != '\x02') {
    lVar6 = *(longlong *)(param_1 + 0x168);
    local_38[0] = 0;
    lVar9 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar6;
    for (; lVar6 != lVar9; lVar6 = lVar6 + 0x68) {
      if (*(char *)(lVar6 + 0x50) != '\0') {
        plVar10 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar2 = param_2[3];
          plVar10 = (longlong *)0x0;
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar6 + 0x18))) {
            lVar7 = *(longlong *)(lVar6 + 0x10);
LAB_14259366f:
            plVar10 = *(longlong **)(lVar7 + (longlong)iVar2 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar2 = param_2[3], -1 < iVar2)
                 ) && (iVar2 < *(int *)(lVar6 + 0x28))) {
          lVar7 = *(longlong *)(lVar6 + 0x20);
          goto LAB_14259366f;
        }
        local_res8 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar10 + 0x2e0))(plVar10,param_2,param_3);
          if (cVar3 != '\0') {
            return 1;
          }
          cVar3 = FUN_14255a0d0(plVar10,param_2,local_38,&local_res8);
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(*local_res8 + 0x2e0))(local_res8,param_2,param_3);
            if (cVar3 != '\0') {
              return 1;
            }
            UMaterialExpressionScalarParameter::IsNamedParameter(local_38[0],param_2,param_3);
            return param_4 ^ 1;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 0x9d;
    if (DVar5 != DAT_1468c21c0) goto LAB_142593720;
  }
  lVar6 = 0x9c;
LAB_142593720:
  *(undefined1 *)(lVar6 + param_1) = 1;
  bVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 1000))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4);
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
    lVar11 = 0x9c;
  }
  *(undefined1 *)(lVar11 + param_1) = 0;
  return bVar4;
}



// FUNCTION 1425937e0 FUN_1425937e0 body=448 status=ok
// SIG undefined FUN_1425937e0(void)

undefined8 FUN_1425937e0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int *piVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afeef8) && (_Init_thread_header(&DAT_146afeef8), DAT_146afeef8 == -1))
  {
    FName::FName(&DAT_146afeef0,L"__SubsurfaceProfile",1);
    _Init_thread_footer(&DAT_146afeef8);
  }
  lVar3 = *param_2;
  if (lVar3 == DAT_146afeef0) {
    if (*(longlong *)(param_1 + 0x118) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FSubsurfaceProfileTexture::FindAllocationId(&PTR_PTR_146534b70);
    }
    *param_3 = (float)iVar4 * 0.003921569;
    return 1;
  }
  if ((*(byte *)(param_1 + 0x110) & 8) != 0) {
    sVar2 = (short)param_2[1];
    if (((((-1 < sVar2) && ((int)sVar2 < *(int *)(param_1 + 0x168))) &&
         (piVar7 = (int *)(*(longlong *)(param_1 + 0x160) + (longlong)sVar2 * 0x18),
         *(int *)(*(longlong *)(param_1 + 0x160) + (longlong)sVar2 * 0x18) == (int)lVar3)) &&
        ((piVar7[1] == (int)((ulonglong)lVar3 >> 0x20) &&
         (*(char *)((longlong)piVar7 + 0xb) == *(char *)((longlong)param_2 + 0xb))))) &&
       (piVar7[3] == *(int *)((longlong)param_2 + 0xc))) {
      if (*(char *)((longlong)piVar7 + 10) != '\x02') {
LAB_1425938c3:
        if ((float *)(piVar7 + 4) != (float *)0x0) {
          *param_3 = (float)piVar7[4];
          return 1;
        }
      }
      goto LAB_142593917;
    }
  }
  piVar7 = *(int **)(param_1 + 0x160);
  piVar1 = piVar7 + (longlong)*(int *)(param_1 + 0x168) * 6;
  for (; piVar7 != piVar1; piVar7 = piVar7 + 6) {
    if (((*piVar7 == (int)lVar3) && (piVar7[1] == *(int *)((longlong)param_2 + 4))) &&
       ((*(char *)((longlong)piVar7 + 0xb) == *(char *)((longlong)param_2 + 0xb) &&
        (piVar7[3] == *(int *)((longlong)param_2 + 0xc))))) goto LAB_1425938c3;
  }
LAB_142593917:
  plVar5 = *(longlong **)(param_1 + 0x138);
  if (plVar5 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2a8))(plVar5,0,0);
    uVar6 = (**(code **)(*plVar5 + 0x60))(plVar5,param_2,param_3,param_4);
  }
  return uVar6;
}



// FUNCTION 1425939a0 FUN_1425939a0 body=1137 status=ok
// SIG undefined FUN_1425939a0(void)

longlong FUN_1425939a0(longlong *param_1,undefined2 *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined2 *puVar13;
  bool bVar14;
  uint local_res8 [2];
  undefined8 in_stack_fffffffffffffef0;
  undefined4 uVar15;
  undefined2 *puVar16;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar17;
  undefined2 *puVar18;
  undefined4 local_a4;
  undefined2 *local_98;
  int local_90;
  uint local_88;
  uint local_84;
  longlong local_80;
  undefined2 *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  undefined1 local_60 [8];
  longlong local_58 [2];
  longlong local_48 [2];
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  local_80 = *(longlong *)(*(longlong *)(param_1[2] + 0xf0) + (longlong)*(int *)(param_3 + 8) * 8);
  if (local_80 != 0) {
    plVar11 = (longlong *)(local_80 + 0x38);
    local_90 = 0;
    local_98 = param_2;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar11,local_res8,&local_98);
    plVar9 = (longlong *)0x0;
    if (local_res8[0] != 0xffffffff) {
      plVar9 = (longlong *)((longlong)(int)local_res8[0] * 0x20 + *plVar11);
    }
    plVar11 = plVar9 + 2;
    if (plVar9 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
      return *plVar11;
    }
  }
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    lVar12 = 0;
  }
  else {
    *(int *)(lVar2 + 0x35c) = *(int *)(lVar2 + 0x35c) + 1;
    lVar12 = *(longlong *)(*(longlong *)(lVar2 + 0xf0) + (longlong)*(int *)(param_3 + 8) * 8);
    if ((lVar12 != 0) && (lVar6 = FUN_1420b7ad0(lVar12,param_2,0), lVar6 != 0)) {
      local_a4 = 1;
      goto LAB_142593aa0;
    }
  }
  local_a4 = 0;
LAB_142593aa0:
  uVar1 = (&DAT_1464c9c48)[(int)param_1[4]];
  bVar3 = (**(code **)(*param_1 + 8))(param_1,uVar1,param_2,param_3);
  uVar4 = (**(code **)(param_3 + 0x38))(uVar1,param_1,param_2);
  uVar5 = (**(code **)(param_2 + 0x9c))(uVar1,param_1,param_3);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,uVar5);
  (**(code **)(*param_1 + 0x348))(param_1,&local_98);
  puVar10 = &DAT_143f3eda8;
  local_68 = &DAT_143f3eda8;
  if (local_90 != 0) {
    local_68 = local_98;
  }
  uVar7 = FUN_141eca160(local_60,uVar1);
  puVar8 = (undefined8 *)FName::ToString(uVar7,local_48);
  if (*(int *)(puVar8 + 1) == 0) {
    local_70 = &DAT_143f3eda8;
  }
  else {
    local_70 = (undefined2 *)*puVar8;
  }
  local_78 = *(undefined2 **)(param_3 + 0x10);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_58);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*puVar8;
  }
  local_88 = (uint)(lVar2 != 0);
  bVar14 = local_80 != 0;
  local_84 = (uint)(lVar12 != 0);
  local_80 = CONCAT44(local_80._4_4_,(uint)bVar14);
  puVar16 = local_78;
  puVar18 = local_68;
  LowLevelFatalErrorHandler
            ("Unknown",0x845,
             L"Couldn\'t find Shader %s for Material Resource %s!\n\t\tRenderMeshShaderMap %d, RenderThreadShaderMap %d\n\t\tGameMeshShaderMap %d, GameThreadShaderMap %d, bShaderWasFoundInGameShaderMap %d\n\t\tWith VF=%s, Platform=%s\n\t\tShouldCache: Mat=%u, VF=%u, Shader=%u \n\t\tMaterialUsageDesc: %s"
             ,*(undefined8 *)(param_2 + 8),puVar13,CONCAT44(uVar15,(uint)bVar14),param_1[2] != 0,
             local_84,local_88,local_a4,local_78,local_70,CONCAT44(uVar17,(uint)bVar3),uVar4,
             local_res8[0] & 0xff,local_68);
  uVar15 = (undefined4)((ulonglong)puVar16 >> 0x20);
  uVar17 = (undefined4)((ulonglong)puVar18 >> 0x20);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_78 = &DAT_143f3eda8;
  if (local_90 != 0) {
    local_78 = local_98;
  }
  uVar7 = FUN_141eca160(local_60,uVar1);
  puVar8 = (undefined8 *)FName::ToString(uVar7,local_58);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*puVar8;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_48);
  if (*(int *)(puVar8 + 1) != 0) {
    puVar10 = (undefined2 *)*puVar8;
  }
  FDebug::AssertFailed
            (&DAT_145103aee,"Unknown",0x845,
             L"Couldn\'t find Shader %s for Material Resource %s!\n\t\tRenderMeshShaderMap %d, RenderThreadShaderMap %d\n\t\tGameMeshShaderMap %d, GameThreadShaderMap %d, bShaderWasFoundInGameShaderMap %d\n\t\tWith VF=%s, Platform=%s\n\t\tShouldCache: Mat=%u, VF=%u, Shader=%u \n\t\tMaterialUsageDesc: %s"
             ,*(undefined8 *)(param_2 + 8),puVar10,(undefined4)local_80,param_1[2] != 0,local_84,
             local_88,CONCAT44(uVar15,local_a4),uVar7,puVar13,bVar3,uVar4,
             CONCAT44(uVar17,local_res8[0]) & 0xffffffff000000ff,local_78);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    FUN_14259f650(lVar2);
  }
  return 0;
}



// FUNCTION 142593e20 FUN_142593e20 body=887 status=ok
// SIG undefined FUN_142593e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142593e20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_var;
  uint extraout_var_00;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined1 auStack_188 [32];
  uint local_168;
  uint uStack_164;
  uint *puStack_160;
  undefined4 local_158;
  int iStack_154;
  uint uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  uint uStack_130;
  int iStack_12c;
  uint local_128;
  undefined1 local_120 [8];
  longlong local_118;
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  uint *puStack_100;
  uint uStack_f8;
  int iStack_f4;
  uint uStack_f0;
  int iStack_ec;
  longlong *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint *puStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar10 = 0;
  local_148 = (longlong *)(param_1 + 0x38);
  local_168 = 0;
  uStack_164 = 1;
  iVar1 = *(int *)(param_1 + 0x60);
  puStack_160 = (uint *)(param_1 + 0x48);
  iStack_154 = 0;
  uStack_150 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar9 = puStack_160;
    }
    uVar6 = *puVar9;
    uVar4 = uVar10;
    uVar7 = uVar10;
    while (uVar6 == 0) {
      iVar3 = (int)uVar7;
      uStack_150 = (int)uVar4 + 0x20;
      uVar4 = (ulonglong)uStack_150;
      local_168 = iVar3 + 1;
      uVar7 = (ulonglong)local_168;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_142593f02;
      uVar6 = puVar9[(longlong)iVar3 + 1];
    }
    uStack_164 = -uVar6 & uVar6;
    iVar3 = 0x1f;
    if (uStack_164 != 0) {
      for (; uStack_164 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_164 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    iStack_154 = (uStack_150 - iVar3) + 0x1f;
    if (iVar1 < iStack_154) {
LAB_142593f02:
      iStack_154 = iVar1;
    }
  }
  local_158 = 0xffffffff;
  _uStack_f8 = CONCAT44(iStack_154,0xffffffff);
  uStack_f0 = uStack_150;
  uStack_108 = local_168;
  uStack_104 = uStack_164;
  uStack_140._0_4_ = local_168;
  uStack_140._4_4_ = uStack_164;
  local_128 = uStack_150;
  uStack_130 = 0xffffffff;
  iStack_12c = iStack_154;
  local_110 = local_148;
  puStack_100 = puStack_160;
  local_138 = puStack_160;
  if (iStack_154 < iVar1) {
    do {
      lVar2 = *(longlong *)((longlong)iStack_12c * 0x20 + 0x10 + *local_148);
      if (lVar2 != 0) {
        local_118 = lVar2;
        FUN_1419ef3f0(lVar2,local_b8);
        puStack_160 = (uint *)&local_118;
        local_168 = extraout_EAX;
        uStack_164 = extraout_var;
        FUN_14257ae60(param_2,local_120,&local_168,0);
      }
      uStack_130 = uStack_130 & ~uStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_140);
    } while (iStack_12c < (int)local_138[6]);
  }
  uVar4 = uVar10;
  uVar7 = uVar10;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      local_148._0_4_ = 0;
      local_148._4_4_ = 1;
      lVar2 = *(longlong *)(uVar4 + *(longlong *)(param_1 + 0xe0));
      local_110 = (longlong *)(lVar2 + 0x38);
      local_138._4_4_ = 0;
      uStack_130 = 0;
      iVar1 = *(int *)(lVar2 + 0x60);
      uStack_140 = (uint *)(lVar2 + 0x48);
      if (iVar1 != 0) {
        puVar9 = *(uint **)(lVar2 + 0x58);
        if (*(uint **)(lVar2 + 0x58) == (uint *)0x0) {
          puVar9 = uStack_140;
        }
        uVar6 = *puVar9;
        uVar5 = uVar10;
        uVar8 = uVar10;
        while (uVar6 == 0) {
          iVar3 = (int)uVar5;
          uStack_130 = (int)uVar8 + 0x20;
          uVar8 = (ulonglong)uStack_130;
          local_148._0_4_ = iVar3 + 1;
          uVar5 = (ulonglong)(uint)local_148;
          if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_1425940a4;
          uVar6 = puVar9[(longlong)iVar3 + 1];
        }
        local_148._4_4_ = -uVar6 & uVar6;
        iVar3 = 0x1f;
        if (local_148._4_4_ != 0) {
          for (; local_148._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        if (local_148._4_4_ == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1f - iVar3;
        }
        local_138._4_4_ = (uStack_130 - iVar3) + 0x1f;
        if (iVar1 < local_138._4_4_) {
LAB_1425940a4:
          local_138._4_4_ = iVar1;
        }
      }
      local_138._0_4_ = 0xffffffff;
      uStack_d0 = 0xffffffff;
      iStack_cc = local_138._4_4_;
      uStack_c8 = uStack_130;
      iStack_c4 = iStack_12c;
      uStack_e0 = (uint)local_148;
      uStack_dc = local_148._4_4_;
      uStack_f8 = 0xffffffff;
      iStack_f4 = local_138._4_4_;
      uStack_108 = (uint)local_148;
      uStack_104 = local_148._4_4_;
      uStack_f0 = uStack_130;
      iStack_ec = iStack_12c;
      puStack_100 = uStack_140;
      local_e8 = local_110;
      puStack_d8 = uStack_140;
      if (local_138._4_4_ < iVar1) {
        do {
          lVar2 = *(longlong *)((longlong)iStack_f4 * 0x20 + 0x10 + *local_110);
          if (lVar2 != 0) {
            local_118 = lVar2;
            FUN_1419ef3f0(lVar2,local_b8);
            puStack_160 = (uint *)&local_118;
            local_168 = extraout_EAX_00;
            uStack_164 = extraout_var_00;
            FUN_14257ae60(param_2,local_120,&local_168,0);
          }
          uStack_f8 = uStack_f8 & ~uStack_104;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_108);
        } while (iStack_f4 < (int)puStack_100[6]);
      }
      uVar6 = (int)uVar7 + 1;
      uVar4 = uVar4 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0xe8));
  }
  return;
}



// FUNCTION 1425941a0 GetShaderMapBeingCompiled body=497 status=ok
// SIG undefined GetShaderMapBeingCompiled(void)

undefined8 FMaterialShaderMap::GetShaderMapBeingCompiled(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined4 local_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  undefined8 *local_48;
  undefined2 local_40;
  undefined8 *local_38;
  int iStack_30;
  uint uStack_2c;
  undefined *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 *local_10;
  
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  uStack_60 = 0;
  if (DAT_146533c78 != 0) {
    puVar8 = DAT_146533c70;
    if (DAT_146533c70 == (uint *)0x0) {
      puVar8 = (uint *)&DAT_146533c60;
    }
    uVar1 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar1 == 0) {
      lVar5 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar3 = (int)(DAT_146533c78 + -1 + (DAT_146533c78 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar3) goto LAB_142594261;
      uVar1 = puVar8[lVar5 + 1];
    }
    uStack_74 = -uVar1 & uVar1;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_64 = (uStack_60 - iVar7) + 0x1f;
    if (DAT_146533c78 < iStack_64) {
LAB_142594261:
      iStack_64 = DAT_146533c78;
    }
  }
  iVar7 = iStack_64;
  auStack_20._4_4_ = iStack_64;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  local_40 = 0;
  local_38 = &DAT_146533c50;
  local_10 = &DAT_146533c50;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  puStack_28 = &DAT_146533c60;
  local_48 = &DAT_146533c50;
  local_68 = 0x46533c60;
  iStack_64 = 1;
  uStack_60 = 0xffffffff;
  iStack_5c = iVar7;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = 0x46533c50;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = 1;
  if (iVar7 < DAT_146533c78) {
    do {
      lVar5 = DAT_146533c50 + (longlong)iStack_5c * 0x20;
      lVar6 = 0;
      iVar7 = *(int *)(lVar5 + 0x10);
      if (0 < iVar7) {
        plVar4 = *(longlong **)(lVar5 + 8);
        do {
          if (*plVar4 == param_1) {
            uVar2 = *(undefined8 *)((longlong)iStack_5c * 0x20 + DAT_146533c50);
            if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
              TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_48,*(int *)(local_48 + 1) -
                                           *(int *)((longlong)local_48 + 0x34),
                                  CONCAT71((uint7)(uint3)((uint)iStack_5c >> 8),1));
            }
            return uVar2;
          }
          lVar6 = lVar6 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar6 < iVar7);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < *(int *)(CONCAT44(iStack_64,local_68) + 0x18));
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,*(int *)(local_48 + 1) - *(int *)((longlong)local_48 + 0x34),
                          CONCAT71((uint7)(uint3)((uint)iStack_5c >> 8),1));
    }
  }
  return 0;
}



// FUNCTION 1425943a0 FUN_1425943a0 body=584 status=ok
// SIG undefined FUN_1425943a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425943a0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined2 *local_168;
  undefined8 local_160;
  longlong local_158 [8];
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if ((*(byte *)((longlong)param_1 + 0x24) & 2) == 0) {
    local_178 = local_158 + 2;
    uVar10 = 0;
    local_158[4] = 0;
    local_158[5] = 0;
    local_158[2] = 0;
    local_158[3] = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    FUN_14258f930(param_1,param_2,local_158 + 4,local_158);
    uVar4 = (**(code **)(*param_1 + 0x398))(param_1);
    param_3[6] = uVar4;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x3a0))(param_1,&local_168);
    uVar4 = puVar5[1];
    uVar1 = puVar5[2];
    uVar2 = puVar5[3];
    *param_3 = *puVar5;
    param_3[1] = uVar4;
    param_3[2] = uVar1;
    param_3[3] = uVar2;
    if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
      uVar4 = 3;
    }
    else {
      uVar4 = (undefined4)param_1[3];
    }
    param_3[4] = uVar4;
    param_3[5] = (int)param_1[4];
    FSHA1::FSHA1(local_118);
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x340))(param_1);
    uVar12 = uVar10;
    if (0 < (int)plVar6[1]) {
      do {
        puVar9 = (undefined2 *)0x0;
        if (*(longlong *)(uVar10 + *plVar6) == 0) {
LAB_1425944f7:
          iVar13 = 0;
          puVar8 = &DAT_143f3eda8;
        }
        else {
          local_158[6] = *(undefined8 *)(*(longlong *)(uVar10 + *plVar6) + 0x18);
          FName::ToString(local_158 + 6,&local_168);
          puVar8 = local_168;
          iVar13 = (int)local_160;
          local_168 = (undefined2 *)0x0;
          local_160 = 0;
          puVar9 = puVar8;
          if (iVar13 == 0) goto LAB_1425944f7;
          iVar13 = iVar13 + -1;
        }
        FSHA1::UpdateWithString(local_118,puVar8,iVar13);
        if (puVar9 != (undefined2 *)0x0) {
          FMemory::Free(puVar9);
        }
        uVar11 = (int)uVar12 + 1;
        uVar10 = uVar10 + 8;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)plVar6[1]);
    }
    uVar7 = UMaterialShaderQualitySettings::Get();
    cVar3 = UMaterialShaderQualitySettings::HasPlatformQualitySettings
                      (uVar7,param_2 & 0xffffffff,(int)param_1[3]);
    if (cVar3 != '\0') {
      uVar7 = UMaterialShaderQualitySettings::GetShaderPlatformQualitySettings
                        (uVar7,param_2 & 0xffffffff);
      UShaderPlatformQualitySettings::AppendToHashState(uVar7,(int)param_1[3],local_118);
    }
    FSHA1::Final(local_118);
    FSHA1::GetHash(local_118,param_3 + 0x34);
    FSHA1::~FSHA1(local_118);
    if (local_158[0] != 0) {
      FMemory::Free();
    }
    if (local_158[2] != 0) {
      FMemory::Free();
    }
    if (local_158[4] != 0) {
      FMemory::Free();
    }
  }
  else {
    FMaterialShaderMapId::operator=(param_3,param_1[1] + 0x100);
  }
  return;
}



// FUNCTION 1425945f0 FUN_1425945f0 body=155 status=ok
// SIG undefined FUN_1425945f0(void)

undefined8 FUN_1425945f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    if (param_2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x68);
    }
    lVar1 = *(longlong *)(param_1 + 200);
    if (*(longlong *)(param_1 + 200) == 0) {
      lVar1 = param_1 + 0xc0;
    }
    iVar4 = *(int *)(lVar1 + ((longlong)*(int *)(param_1 + 0xd0) - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      do {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x18) == param_2) {
          if (iVar4 != -1) goto LAB_142594673;
          break;
        }
        iVar4 = *(int *)(puVar3 + 2);
      } while (iVar4 != -1);
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_142594673:
  puVar2 = puVar3 + 1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar2;
}



// FUNCTION 142594690 FUN_142594690 body=914 status=ok
// SIG undefined FUN_142594690(void)

longlong FUN_142594690(longlong *param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  int local_res8 [2];
  undefined8 *local_res10;
  longlong local_res18;
  int local_88 [2];
  longlong local_80;
  ulonglong local_78;
  undefined2 *local_70;
  int local_68;
  longlong *local_60;
  undefined4 local_58;
  longlong *local_50;
  undefined4 local_48;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1[2] + 0xf0) + (longlong)*(int *)(param_3 + 8) * 8);
  local_res10 = param_2;
  local_res18 = param_3;
  if (lVar2 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_1425945f0(lVar2);
    if (local_80 != 0) {
      return local_80;
    }
  }
  if (param_4 != '\0') {
    uVar1 = (&DAT_1464c9c48)[(int)param_1[4]];
    (**(code **)(*param_1 + 0x348))(param_1);
    uVar15 = 0;
    plVar13 = (longlong *)param_2[2];
    local_78 = (longlong)*(int *)(param_2 + 3) & 0x1fffffffffffffff;
    if (plVar13 + *(int *)(param_2 + 3) < plVar13) {
      local_78 = uVar15;
    }
    if (local_78 != 0) {
      do {
        plVar3 = (longlong *)*plVar13;
        if (lVar2 == 0) {
          lVar10 = param_1[2];
          local_48 = 0;
          local_50 = plVar3;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar10 + 0x38,local_88,&local_50);
          if (local_88[0] == -1) goto LAB_1425947cf;
          lVar10 = (longlong)local_88[0] * 0x20 + *(longlong *)(lVar10 + 0x38);
        }
        else {
          local_58 = 0;
          local_60 = plVar3;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar2 + 0x38,local_res8,&local_60);
          if (local_res8[0] == -1) {
LAB_1425947cf:
            lVar10 = 0;
          }
          else {
            lVar10 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar2 + 0x38);
          }
        }
        lVar4 = local_res18;
        plVar6 = (longlong *)0x0;
        plVar5 = (longlong *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          plVar5 = plVar6;
        }
        if ((plVar5 != (longlong *)0x0) && (*plVar5 != 0)) {
          plVar5 = plVar6;
          if ((int)plVar3[1] == 2) {
            plVar5 = plVar3;
          }
          if (plVar5 == (longlong *)0x0) {
            plVar5 = plVar6;
            if ((int)plVar3[1] == 1) {
              plVar5 = plVar3;
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*param_1 + 8))(param_1,uVar1,plVar5,local_res18);
              if ((int)plVar3[1] == 1) {
                plVar6 = plVar3;
              }
              (*(code *)plVar6[0x27])(uVar1,param_1);
            }
          }
          else {
            (**(code **)(*param_1 + 8))(param_1,uVar1,plVar5,local_res18);
            plVar6 = (longlong *)0x0;
            if ((int)plVar3[1] == 2) {
              plVar6 = plVar3;
            }
            (**(code **)(lVar4 + 0x38))(uVar1,param_1,plVar6);
            plVar6 = (longlong *)0x0;
            if ((int)plVar3[1] == 2) {
              plVar6 = plVar3;
            }
            (*(code *)plVar6[0x27])(uVar1,param_1,lVar4);
          }
        }
        plVar13 = plVar13 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != local_78);
    }
    puVar11 = &DAT_143f3eda8;
    puVar14 = &DAT_143f3eda8;
    if (local_68 != 0) {
      puVar14 = local_70;
    }
    uVar7 = FUN_141eca160(local_res8,uVar1);
    puVar8 = (undefined8 *)FName::ToString(uVar7,&local_60);
    lVar2 = local_res18;
    if (*(int *)(puVar8 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar8;
    }
    uVar7 = *(undefined8 *)(local_res18 + 0x10);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,&local_50);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar8;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x87c,L"\t\tWith VF=%s, Platform=%s\n\t\tMaterialUsageDesc: %s",
               *local_res10,puVar9,uVar7,puVar12,puVar14);
    if (local_50 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free();
    }
    puVar14 = &DAT_143f3eda8;
    if (local_68 != 0) {
      puVar14 = local_70;
    }
    uVar7 = FUN_141eca160(&local_res18,uVar1);
    puVar8 = (undefined8 *)FName::ToString(uVar7,&local_60);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar8;
    }
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,&local_50);
    if (*(int *)(puVar8 + 1) != 0) {
      puVar11 = (undefined2 *)*puVar8;
    }
    FDebug::AssertFailed
              (L"","Unknown",0x87c,L"\t\tWith VF=%s, Platform=%s\n\t\tMaterialUsageDesc: %s",
               *local_res10,puVar11,uVar7,puVar12,puVar14);
    if (local_50 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_70 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return local_80;
}



// FUNCTION 142594a30 FUN_142594a30 body=662 status=ok
// SIG undefined FUN_142594a30(void)

void FUN_142594a30(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  uint uStack_84;
  
  FUN_1419f0970();
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    lVar11 = 0;
    do {
      iVar8 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar11);
      uStack_84 = 0;
      uVar1 = *(uint *)(lVar2 + 0xb0);
      if (uVar1 != 0) {
        puVar9 = *(uint **)(lVar2 + 0xa8);
        if (*(uint **)(lVar2 + 0xa8) == (uint *)0x0) {
          puVar9 = (uint *)(lVar2 + 0x98);
        }
        uVar5 = *puVar9;
        iVar6 = 0;
        while (uVar5 == 0) {
          iVar8 = iVar8 + 0x20;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_142594b4f;
          uVar5 = puVar9[(longlong)iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        uVar5 = -uVar5 & uVar5;
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uVar5 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_84 = (iVar8 - iVar6) + 0x1f;
        if ((int)uVar1 < (int)uStack_84) {
LAB_142594b4f:
          uStack_84 = uVar1;
        }
      }
      uVar4 = uStack_84;
      uStack_84 = *(uint *)(lVar2 + 0xb0);
      uVar5 = uStack_84 & 0xffffffe0;
      if (uStack_84 != uVar1) {
        puVar9 = *(uint **)(lVar2 + 0xa8);
        if (*(uint **)(lVar2 + 0xa8) == (uint *)0x0) {
          puVar9 = (uint *)(lVar2 + 0x98);
        }
        uVar7 = puVar9[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
        iVar8 = (int)uStack_84 >> 5;
        while (uVar7 == 0) {
          uVar5 = uVar5 + 0x20;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_142594c18;
          uVar7 = puVar9[(longlong)iVar8 + 1];
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
        uStack_84 = (uVar5 - iVar8) + 0x1f;
        if ((int)uVar1 < (int)uStack_84) {
LAB_142594c18:
          uStack_84 = uVar1;
        }
      }
      while (uVar4 != uStack_84) {
        iVar8 = (int)param_2[1];
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x88) + (longlong)(int)uVar4 * 0x18 + 8);
        *(int *)(param_2 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar8 * 8) = uVar3;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar10 < *(int *)(param_1 + 0xe8));
  }
  return;
}



// FUNCTION 142594d10 FUN_142594d10 body=967 status=ok
// SIG undefined FUN_142594d10(void)

longlong * FUN_142594d10(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case 0:
    if ((undefined *)*param_1 != &DAT_1451049d8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,10);
      iVar2 = (int)param_1[1] + 10;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      puVar1 = (undefined8 *)*param_1;
      *puVar1 = 0x5f004d0053004d;
      puVar1[1] = 0x69006c006e0055;
      *(undefined4 *)(puVar1 + 2) = 0x74;
      return param_1;
    }
    break;
  case 1:
    if ((wchar_t *)*param_1 != L"MSM_DefaultLit") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xf);
      iVar2 = (int)param_1[1] + 0xf;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"MSM_DefaultLit",0xf);
      return param_1;
    }
    break;
  case 2:
    if ((wchar_t *)*param_1 != L"MSM_Subsurface") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xf);
      iVar2 = (int)param_1[1] + 0xf;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"MSM_Subsurface",0xf);
      return param_1;
    }
    break;
  case 3:
    if ((wchar_t *)*param_1 != L"MSM_PreintegratedSkin") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x16);
      iVar2 = (int)param_1[1] + 0x16;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"MSM_PreintegratedSkin",0x16);
      return param_1;
    }
    break;
  case 4:
    if ((wchar_t *)*param_1 != L"MSM_ClearCoat") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xe);
      iVar2 = (int)param_1[1] + 0xe;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"MSM_ClearCoat",0xe);
      return param_1;
    }
    break;
  case 5:
    if ((wchar_t *)*param_1 != L"MSM_SubsurfaceProfile") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x16);
      iVar2 = (int)param_1[1] + 0x16;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"MSM_SubsurfaceProfile",0x16);
      return param_1;
    }
    break;
  case 6:
    if ((wchar_t *)*param_1 != L"MSM_TwoSidedFoliage") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x14);
      iVar2 = (int)param_1[1] + 0x14;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"MSM_TwoSidedFoliage",0x14);
      return param_1;
    }
    break;
  default:
    if ((wchar_t *)*param_1 != L"Unknown") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,8);
      iVar2 = (int)param_1[1] + 8;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"Unknown",8);
    }
    break;
  case 8:
    if ((wchar_t *)*param_1 != L"MSM_Cloth") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,10);
      iVar2 = (int)param_1[1] + 10;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"MSM_Cloth",10);
      return param_1;
    }
    break;
  case 9:
    if ((wchar_t *)*param_1 != L"MSM_Eye") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,8);
      iVar2 = (int)param_1[1] + 8;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"MSM_Eye",8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142595100 FUN_142595100 body=919 status=ok
// SIG undefined FUN_142595100(void)

undefined1
FUN_142595100(longlong param_1,int *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6,undefined8 *param_7,char param_8)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *local_res8;
  undefined8 local_38 [2];
  
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 0x9d;
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar7 = 0x9d;
    if (DVar6 == DAT_1468c21c0) goto LAB_14259514e;
  }
  else {
LAB_14259514e:
    lVar7 = 0x9c;
  }
  if (*(char *)(lVar7 + param_1) != '\0') {
    return 0;
  }
  local_38[0] = 0;
  if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
    if (param_8 != '\0') {
      piVar9 = *(int **)(param_1 + 0x148);
      piVar1 = piVar9 + (longlong)*(int *)(param_1 + 0x150) * 10;
      for (; piVar9 != piVar1; piVar9 = piVar9 + 10) {
        if (((((char)piVar9[5] != '\0') && (*piVar9 == *param_2)) && (piVar9[1] == param_2[1])) &&
           ((*(char *)((longlong)piVar9 + 0xb) == '\x02' && (piVar9[3] == param_2[3])))) {
          *param_3 = (char)piVar9[4];
          *param_4 = *(undefined1 *)((longlong)piVar9 + 0x11);
          *param_5 = *(undefined1 *)((longlong)piVar9 + 0x12);
          *param_6 = *(undefined1 *)((longlong)piVar9 + 0x13);
          uVar3 = *(undefined8 *)(piVar9 + 8);
          *param_7 = *(undefined8 *)(piVar9 + 6);
          param_7[1] = uVar3;
          return 1;
        }
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x168);
    lVar10 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar7;
    for (; lVar7 != lVar10; lVar7 = lVar7 + 0x68) {
      if (*(char *)(lVar7 + 0x50) != '\0') {
        plVar11 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar2 = param_2[3];
          plVar11 = (longlong *)0x0;
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar7 + 0x18))) {
            lVar8 = *(longlong *)(lVar7 + 0x10);
LAB_1425951f2:
            plVar11 = *(longlong **)(lVar8 + (longlong)iVar2 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar2 = param_2[3], -1 < iVar2)
                 ) && (iVar2 < *(int *)(lVar7 + 0x28))) {
          lVar8 = *(longlong *)(lVar7 + 0x20);
          goto LAB_1425951f2;
        }
        local_res8 = (longlong *)0x0;
        if (plVar11 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar11 + 0x308))
                            (plVar11,param_2,param_3,param_4,param_5,param_6,param_7);
          if (cVar4 != '\0') {
            return 1;
          }
          cVar4 = FUN_14255a410(plVar11,param_2,local_38,&local_res8);
          if (cVar4 != '\0') {
            cVar4 = (**(code **)(*local_res8 + 0x308))
                              (local_res8,param_2,param_3,param_4,param_5,param_6,param_7);
            if (cVar4 != '\0') {
              return 1;
            }
            UMaterialExpressionStaticComponentMaskParameter::IsNamedParameter
                      (local_38[0],param_2,param_3,param_4,param_5,param_6,param_7);
            return 1;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar7 = 0x9d;
    if (DVar6 != DAT_1468c21c0) goto LAB_1425952d7;
  }
  lVar7 = 0x9c;
LAB_1425952d7:
  *(undefined1 *)(lVar7 + param_1) = 1;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x398))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4,param_5,param_6,param_7,
                     1);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0x9c;
  }
  *(undefined1 *)(lVar12 + param_1) = 0;
  return uVar5;
}



// FUNCTION 1425954a0 FUN_1425954a0 body=85 status=ok
// SIG undefined FUN_1425954a0(void)

undefined1 FUN_1425954a0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x204,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetStaticComponentMaskParameterDefaultValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x204,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetStaticComponentMaskParameterDefaultValue");
  return 0;
}



// FUNCTION 142595500 FUN_142595500 body=1335 status=ok
// SIG undefined FUN_142595500(void)

byte FUN_142595500(longlong param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined1 *param_6,undefined8 *param_7,byte param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *local_50;
  undefined8 local_48;
  
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  if (*(char *)((ulonglong)bVar6 + 0x9c + param_1) == '\0') {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x150)) {
      piVar12 = *(int **)(param_1 + 0x148);
      do {
        if ((char)piVar12[5] != '\0') {
          if ((*piVar12 == (int)*param_2) && (piVar12[1] == *(int *)((longlong)param_2 + 4))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (((bVar5) && (*(char *)((longlong)piVar12 + 0xb) == *(char *)((longlong)param_2 + 0xb))
              ) && (piVar12[3] == *(int *)((longlong)param_2 + 0xc))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            *param_3 = (char)piVar12[4];
            *param_4 = *(undefined1 *)((longlong)piVar12 + 0x11);
            *param_5 = *(undefined1 *)((longlong)piVar12 + 0x12);
            *param_6 = *(undefined1 *)((longlong)piVar12 + 0x13);
            uVar2 = *(undefined8 *)(piVar12 + 8);
            *param_7 = *(undefined8 *)(piVar12 + 6);
            param_7[1] = uVar2;
            return 1;
          }
        }
        iVar10 = iVar10 + 1;
        piVar12 = piVar12 + 10;
      } while (iVar10 < *(int *)(param_1 + 0x150));
    }
    if (*(char *)((longlong)param_2 + 0xb) != '\x02') {
      lVar17 = *(longlong *)(param_1 + 0x168);
      lVar14 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar17;
      for (; lVar17 != lVar14; lVar17 = lVar17 + 0x68) {
        if (*(char *)(lVar17 + 0x50) != '\0') {
          if (*(char *)((longlong)param_2 + 0xb) == '\0') {
            iVar10 = *(int *)((longlong)param_2 + 0xc);
            if ((iVar10 < 0) || (*(int *)(lVar17 + 0x18) <= iVar10)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              lVar16 = *(longlong *)(lVar17 + 0x10);
LAB_1425956ad:
              plVar8 = *(longlong **)(lVar16 + (longlong)iVar10 * 8);
              if (plVar8 != (longlong *)0x0) {
                cVar4 = (**(code **)(*plVar8 + 0x308))
                                  (plVar8,param_2,param_3,param_4,param_5,param_6,param_7);
                if (cVar4 != '\0') {
                  return 1;
                }
                plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b8))();
                if (plVar8 != (longlong *)0x0) {
                  local_50 = (undefined8 *)0x0;
                  local_48 = 0;
                  (**(code **)(*plVar8 + 0x2a0))(plVar8,&local_50);
                  uVar3 = local_48;
                  lVar16 = (longlong)(int)local_48;
                  for (puVar11 = local_50; puVar11 != local_50 + lVar16; puVar11 = puVar11 + 1) {
                    if ((longlong *)*puVar11 == plVar8) {
                      if ((int)((longlong)puVar11 - (longlong)local_50 >> 3) != -1)
                      goto LAB_142595797;
                      break;
                    }
                  }
                  iVar10 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,iVar10);
                  if (local_48._4_4_ < iVar10) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_50,uVar3 & 0xffffffff);
                  }
                  local_50[lVar16] = plVar8;
LAB_142595797:
                  puVar11 = local_50 + (int)local_48;
                  for (puVar15 = local_50; puVar15 != puVar11; puVar15 = puVar15 + 1) {
                    plVar1 = (longlong *)*puVar15;
                    plVar8 = (longlong *)(**(code **)(*plVar1 + 0x2c0))();
                    plVar13 = (longlong *)*plVar8;
                    plVar8 = plVar13 + (int)plVar8[1];
                    for (; plVar13 != plVar8; plVar13 = plVar13 + 1) {
                      lVar16 = *plVar13;
                      if (lVar16 != 0) {
                        lVar9 = FUN_1429b4960();
                        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                          bVar5 = false;
                        }
                        else {
                          bVar5 = true;
                        }
                        if ((bVar5) && (*(longlong *)(lVar16 + 0x40) == *param_2)) {
                          if (local_50 != (undefined8 *)0x0) {
                            FMemory::Free();
                          }
                          cVar4 = (**(code **)(*plVar1 + 0x308))
                                            (plVar1,param_2,param_3,param_4,param_5,param_6,param_7)
                          ;
                          if (cVar4 != '\0') {
                            return 1;
                          }
                          UMaterialExpressionStaticComponentMaskParameter::IsNamedParameter
                                    (lVar16,param_2,param_3,param_4,param_5,param_6,param_7);
                          return param_8 ^ 1;
                        }
                      }
                    }
                  }
                  if (local_50 != (undefined8 *)0x0) {
                    FMemory::Free();
                  }
                }
              }
            }
          }
          else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
            iVar10 = *(int *)((longlong)param_2 + 0xc);
            if ((iVar10 < 0) || (*(int *)(lVar17 + 0x28) <= iVar10)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              lVar16 = *(longlong *)(lVar17 + 0x20);
              goto LAB_1425956ad;
            }
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        GetCurrentThreadId();
      }
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      *(undefined1 *)((ulonglong)bVar6 + 0x9c + param_1) = 1;
      bVar6 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x310))
                        (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4,param_5,param_6,
                         param_7,param_8);
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
        *(undefined1 *)(param_1 + 0x9d) = 0;
        return bVar6;
      }
      *(undefined1 *)(param_1 + 0x9c) = 0;
      return bVar6;
    }
  }
  return 0;
}



// FUNCTION 142595a40 GetTerrainLayerWeightParameterValue body=85 status=ok
// SIG undefined GetTerrainLayerWeightParameterValue(void)

undefined1 UMaterialInterface::GetTerrainLayerWeightParameterValue(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1bb,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetStaticComponentMaskParameterValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1bb,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetStaticComponentMaskParameterValue");
  return 0;
}



// FUNCTION 142595aa0 FUN_142595aa0 body=1700 status=ok
// SIG undefined FUN_142595aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142595aa0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  longlong local_res8;
  longlong local_res18;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff38;
  longlong local_a8;
  longlong local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar9 = 0;
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x290))();
    local_80 = 0;
    local_78 = 0;
    local_70[0] = 0;
    local_70[1] = 0;
    (**(code **)(*param_1 + 0x350))(param_1,&local_80,local_70);
    lVar12 = param_2[7];
    plVar20 = param_2 + 6;
    lVar14 = (longlong)(int)local_78;
    iVar5 = (int)lVar12 + (int)local_78;
    *(int *)(param_2 + 7) = iVar5;
    if (*(int *)((longlong)param_2 + 0x3c) < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar20);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)(int)lVar12 * 0x68 + *plVar20),0,lVar14 * 0x68)
    ;
    if (0 < (int)local_78) {
      local_a8 = 0;
      local_res20 = 0;
      do {
        puVar15 = (undefined8 *)(*plVar20 + local_res20);
        piVar19 = (int *)(local_80 + local_a8);
        puVar2 = (undefined4 *)(local_70[0] + local_a8);
        local_60 = *puVar2;
        uStack_5c = puVar2[1];
        uStack_58 = puVar2[2];
        uStack_54 = puVar2[3];
        *(undefined1 *)(puVar15 + 10) = 1;
        *puVar15 = *(undefined8 *)piVar19;
        *(short *)(puVar15 + 1) = (short)piVar19[2];
        *(undefined1 *)((longlong)puVar15 + 10) = *(undefined1 *)((longlong)piVar19 + 10);
        *(undefined1 *)((longlong)puVar15 + 0xb) = *(undefined1 *)((longlong)piVar19 + 0xb);
        *(int *)((longlong)puVar15 + 0xc) = piVar19[3];
        (**(code **)(*(longlong *)param_1[0x12] + 0x328))
                  ((longlong *)param_1[0x12],piVar19,puVar15 + 2,&local_60);
        *(undefined4 *)((longlong)puVar15 + 0x54) = local_60;
        *(undefined4 *)(puVar15 + 0xb) = uStack_5c;
        *(undefined4 *)((longlong)puVar15 + 0x5c) = uStack_58;
        *(undefined4 *)(puVar15 + 0xc) = uStack_54;
        piVar11 = (int *)param_1[0x2d];
        piVar6 = piVar11 + (longlong)(int)param_1[0x2e] * 0x1a;
        if (piVar11 != piVar6) {
          piVar10 = piVar11 + 0xc;
          do {
            if ((((*piVar19 == *piVar11) && (piVar19[1] == piVar10[-0xb])) &&
                (*(char *)((longlong)piVar19 + 0xb) == *(char *)((longlong)piVar10 + -0x25))) &&
               ((piVar19[3] == piVar10[-9] &&
                (*(char *)(puVar15 + 10) = (char)piVar10[8], (char)piVar10[8] != '\0')))) {
              TArray<FName,FDefaultAllocator>::operator=(puVar15 + 2,piVar10 + -8);
              TArray<FName,FDefaultAllocator>::operator=(puVar15 + 4,piVar10 + -4);
              piVar1 = (int *)(puVar15 + 6);
              if (piVar1 != piVar10) {
                iVar5 = piVar10[2];
                _Src = *(void **)piVar10;
                *(int *)(puVar15 + 7) = iVar5;
                if ((iVar5 == 0) && (*(int *)((longlong)puVar15 + 0x3c) == 0)) {
                  *(undefined4 *)((longlong)puVar15 + 0x3c) = 0;
                }
                else {
                  TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(piVar1,iVar5);
                  _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar5);
                }
              }
              FString::operator=(puVar15 + 8,piVar10 + 4);
            }
            piVar11 = piVar11 + 0x1a;
            piVar10 = piVar10 + 0x1a;
          } while (piVar11 != piVar6);
        }
        iVar9 = iVar9 + 1;
        local_res20 = local_res20 + 0x68;
        local_a8 = local_a8 + 0x10;
      } while (iVar9 < (int)local_78);
    }
    uVar13 = 0;
    (**(code **)(*param_1 + 0x358))(param_1,&local_80,local_70);
    lVar12 = param_2[1];
    lVar14 = (longlong)(int)local_78;
    iVar9 = (int)lVar12 + (int)local_78;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_2 + (longlong)(int)lVar12 * 0x28),0,lVar14 * 0x28)
    ;
    if (0 < (int)local_78) {
      local_res8 = 0;
      uVar18 = uVar13;
      uVar8 = uVar13;
      do {
        piVar11 = (int *)(local_80 + uVar18);
        in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffffffffff00;
        puVar15 = (undefined8 *)(*param_2 + local_res8);
        puVar2 = (undefined4 *)(local_70[0] + uVar18);
        local_60 = *puVar2;
        uStack_5c = puVar2[1];
        uStack_58 = puVar2[2];
        uStack_54 = puVar2[3];
        *(undefined1 *)((longlong)puVar15 + 0x11) = 0;
        *puVar15 = *(undefined8 *)piVar11;
        *(short *)(puVar15 + 1) = (short)piVar11[2];
        *(undefined1 *)((longlong)puVar15 + 10) = *(undefined1 *)((longlong)piVar11 + 10);
        *(undefined1 *)((longlong)puVar15 + 0xb) = *(undefined1 *)((longlong)piVar11 + 0xb);
        *(int *)((longlong)puVar15 + 0xc) = piVar11[3];
        (**(code **)(*param_1 + 0x308))
                  (param_1,piVar11,puVar15 + 2,&local_60,in_stack_ffffffffffffff38);
        *(ulonglong *)((longlong)puVar15 + 0x14) = CONCAT44(uStack_5c,local_60);
        *(ulonglong *)((longlong)puVar15 + 0x1c) = CONCAT44(uStack_54,uStack_58);
        uVar7 = uVar13;
        uVar17 = uVar13;
        if (0 < (int)param_1[0x28]) {
          do {
            piVar6 = (int *)(param_1[0x27] + uVar7);
            if ((((*piVar11 == *piVar6) && (piVar11[1] == piVar6[1])) &&
                (*(char *)((longlong)piVar11 + 0xb) == *(char *)((longlong)piVar6 + 0xb))) &&
               ((piVar11[3] == piVar6[3] &&
                (*(undefined1 *)((longlong)puVar15 + 0x11) =
                      *(undefined1 *)((longlong)piVar6 + 0x11),
                *(char *)((longlong)piVar6 + 0x11) != '\0')))) {
              *(char *)(puVar15 + 2) = (char)piVar6[4];
            }
            uVar16 = (int)uVar17 + 1;
            uVar7 = uVar7 + 0x28;
            uVar17 = (ulonglong)uVar16;
          } while ((int)uVar16 < (int)param_1[0x28]);
        }
        uVar16 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar16;
        local_res8 = local_res8 + 0x28;
        uVar18 = uVar18 + 0x10;
      } while ((int)uVar16 < (int)local_78);
    }
    (**(code **)(*param_1 + 0x360))(param_1,&local_80,local_70);
    lVar14 = (longlong)(int)local_78;
    plVar20 = param_2 + 2;
    lVar12 = param_2[3];
    iVar9 = (int)lVar12 + (int)local_78;
    *(int *)(param_2 + 3) = iVar9;
    if (*(int *)((longlong)param_2 + 0x1c) < iVar9) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar20);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar20 + (longlong)(int)lVar12 * 0x28),0,lVar14 * 0x28)
    ;
    if (0 < (int)local_78) {
      local_res18 = 0;
      local_res8 = 0;
      uVar18 = uVar13;
      do {
        puVar15 = (undefined8 *)(*plVar20 + local_res8);
        piVar11 = (int *)(local_80 + local_res18);
        puVar2 = (undefined4 *)(local_70[0] + local_res18);
        local_60 = *puVar2;
        uStack_5c = puVar2[1];
        uStack_58 = puVar2[2];
        uStack_54 = puVar2[3];
        *(undefined1 *)((longlong)puVar15 + 0x14) = 0;
        *puVar15 = *(undefined8 *)piVar11;
        *(short *)(puVar15 + 1) = (short)piVar11[2];
        *(undefined1 *)((longlong)puVar15 + 10) = *(undefined1 *)((longlong)piVar11 + 10);
        *(undefined1 *)((longlong)puVar15 + 0xb) = *(undefined1 *)((longlong)piVar11 + 0xb);
        *(int *)((longlong)puVar15 + 0xc) = piVar11[3];
        (**(code **)(*param_1 + 0x310))
                  (param_1,piVar11,puVar15 + 2,(longlong)puVar15 + 0x11,
                   (undefined1 *)((longlong)puVar15 + 0x12),(undefined1 *)((longlong)puVar15 + 0x13)
                   ,&local_60,0);
        puVar15[3] = CONCAT44(uStack_5c,local_60);
        puVar15[4] = CONCAT44(uStack_54,uStack_58);
        uVar8 = uVar13;
        uVar7 = uVar13;
        if (0 < (int)param_1[0x2a]) {
          do {
            piVar6 = (int *)(param_1[0x29] + uVar8);
            if (((*piVar11 == *piVar6) && (piVar11[1] == piVar6[1])) &&
               ((*(char *)((longlong)piVar11 + 0xb) == *(char *)((longlong)piVar6 + 0xb) &&
                ((piVar11[3] == piVar6[3] &&
                 (*(char *)((longlong)puVar15 + 0x14) = (char)piVar6[5], (char)piVar6[5] != '\0'))))
               )) {
              *(char *)(puVar15 + 2) = (char)piVar6[4];
              *(undefined1 *)((longlong)puVar15 + 0x11) = *(undefined1 *)((longlong)piVar6 + 0x11);
              *(undefined1 *)((longlong)puVar15 + 0x12) = *(undefined1 *)((longlong)piVar6 + 0x12);
              *(undefined1 *)((longlong)puVar15 + 0x13) = *(undefined1 *)((longlong)piVar6 + 0x13);
            }
            uVar16 = (int)uVar7 + 1;
            uVar8 = uVar8 + 0x28;
            uVar7 = (ulonglong)uVar16;
          } while ((int)uVar16 < (int)param_1[0x2a]);
        }
        uVar16 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar16;
        local_res8 = local_res8 + 0x28;
        local_res18 = local_res18 + 0x10;
      } while ((int)uVar16 < (int)local_78);
    }
    if (local_70[0] != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  uVar13 = 0;
  bVar3 = false;
  DAT_146533ddc = DAT_146533ddc + 1;
  lVar12 = (longlong)(DAT_146533dd0 + -1);
  if (-1 < DAT_146533dd0 + -1) {
    lVar14 = lVar12 << 4;
    bVar3 = false;
    do {
      if (((*(int *)(lVar14 + 8 + DAT_146533dc8) == 0) ||
          (plVar20 = *(longlong **)(lVar14 + DAT_146533dc8), plVar20 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar20 + 0x40))(plVar20,param_2,param_1), cVar4 == '\0')) {
        bVar3 = true;
      }
      lVar14 = lVar14 + -0x10;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  iVar9 = DAT_146533dd0;
  DAT_146533ddc = DAT_146533ddc + -1;
  if ((bVar3) && (DAT_146533ddc < 1)) {
    uVar18 = uVar13;
    if (0 < DAT_146533dd0) {
      do {
        if (((*(int *)(uVar13 + 8 + DAT_146533dc8) == 0) ||
            (*(longlong **)(uVar13 + DAT_146533dc8) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(uVar13 + DAT_146533dc8) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533dc8,uVar18,1,1);
        }
        else {
          uVar18 = (ulonglong)((int)uVar18 + 1);
          uVar13 = uVar13 + 0x10;
        }
      } while ((int)uVar18 < DAT_146533dd0);
    }
    _DAT_146533dd8 = DAT_146533dd0 * 2;
    if (_DAT_146533dd8 < 3) {
      _DAT_146533dd8 = 2;
    }
    if ((_DAT_146533dd8 < iVar9) && (DAT_146533dd4 != DAT_146533dd0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533dc8);
    }
  }
  return;
}



// FUNCTION 142596150 FUN_142596150 body=714 status=ok
// SIG undefined FUN_142596150(void)

undefined1
FUN_142596150(longlong param_1,int *param_2,undefined1 *param_3,undefined8 *param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *local_res8;
  undefined8 local_38 [2];
  
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 0x9d;
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar7 = 0x9d;
    if (DVar6 == DAT_1468c21c0) goto LAB_14259619e;
  }
  else {
LAB_14259619e:
    lVar7 = 0x9c;
  }
  if (*(char *)(lVar7 + param_1) != '\0') {
    return 0;
  }
  local_38[0] = 0;
  if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
    if (param_5 != '\0') {
      piVar9 = *(int **)(param_1 + 0x138);
      piVar1 = piVar9 + (longlong)*(int *)(param_1 + 0x140) * 10;
      for (; piVar9 != piVar1; piVar9 = piVar9 + 10) {
        if ((((*(char *)((longlong)piVar9 + 0x11) != '\0') && (*piVar9 == *param_2)) &&
            (piVar9[1] == param_2[1])) &&
           ((*(char *)((longlong)piVar9 + 0xb) == '\x02' && (piVar9[3] == param_2[3])))) {
          *param_3 = (char)piVar9[4];
          uVar3 = *(undefined8 *)(piVar9 + 7);
          *param_4 = *(undefined8 *)(piVar9 + 5);
          param_4[1] = uVar3;
          return 1;
        }
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x168);
    lVar10 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar7;
    for (; lVar7 != lVar10; lVar7 = lVar7 + 0x68) {
      if (*(char *)(lVar7 + 0x50) != '\0') {
        plVar11 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar2 = param_2[3];
          plVar11 = (longlong *)0x0;
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar7 + 0x18))) {
            lVar8 = *(longlong *)(lVar7 + 0x10);
LAB_142596236:
            plVar11 = *(longlong **)(lVar8 + (longlong)iVar2 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar2 = param_2[3], -1 < iVar2)
                 ) && (iVar2 < *(int *)(lVar7 + 0x28))) {
          lVar8 = *(longlong *)(lVar7 + 0x20);
          goto LAB_142596236;
        }
        local_res8 = (longlong *)0x0;
        if (plVar11 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar11 + 0x300))(plVar11,param_2,param_3,param_4);
          if (cVar4 != '\0') {
            return 1;
          }
          cVar4 = FUN_14255a270(plVar11,param_2,local_38,&local_res8);
          if (cVar4 != '\0') {
            cVar4 = (**(code **)(*local_res8 + 0x300))(local_res8,param_2,param_3,param_4);
            if (cVar4 != '\0') {
              return 1;
            }
            UMaterialExpressionStaticBoolParameter::IsNamedParameter
                      (local_38[0],param_2,param_3,param_4);
            return 1;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar7 = 0x9d;
    if (DVar6 != DAT_1468c21c0) goto LAB_1425962ee;
  }
  lVar7 = 0x9c;
LAB_1425962ee:
  *(undefined1 *)(lVar7 + param_1) = 1;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x390))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4,1);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar12) = 0;
  return uVar5;
}



// FUNCTION 142596420 FUN_142596420 body=85 status=ok
// SIG undefined FUN_142596420(void)

undefined1 FUN_142596420(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x202,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetStaticSwitchParameterDefaultValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x202,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetStaticSwitchParameterDefaultValue");
  return 0;
}



// FUNCTION 142596480 FUN_142596480 body=1132 status=ok
// SIG undefined FUN_142596480(void)

byte FUN_142596480(longlong param_1,longlong *param_2,undefined1 *param_3,undefined8 *param_4,
                  byte param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *local_50;
  undefined8 local_48;
  
  cVar4 = FUN_1415ad720();
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  if (*(char *)((ulonglong)bVar6 + param_1 + 0x9c) == '\0') {
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0x140)) {
      piVar10 = *(int **)(param_1 + 0x138);
      do {
        if (*(char *)((longlong)piVar10 + 0x11) != '\0') {
          if ((*piVar10 == (int)*param_2) && (piVar10[1] == *(int *)((longlong)param_2 + 4))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (((bVar5) && (*(char *)((longlong)piVar10 + 0xb) == *(char *)((longlong)param_2 + 0xb))
              ) && (piVar10[3] == *(int *)((longlong)param_2 + 0xc))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            *param_3 = (char)piVar10[4];
            uVar2 = *(undefined8 *)(piVar10 + 7);
            *param_4 = *(undefined8 *)(piVar10 + 5);
            param_4[1] = uVar2;
            return 1;
          }
        }
        iVar12 = iVar12 + 1;
        piVar10 = piVar10 + 10;
      } while (iVar12 < *(int *)(param_1 + 0x140));
    }
    if (*(char *)((longlong)param_2 + 0xb) != '\x02') {
      lVar17 = *(longlong *)(param_1 + 0x168);
      lVar14 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar17;
      for (; lVar17 != lVar14; lVar17 = lVar17 + 0x68) {
        if (*(char *)(lVar17 + 0x50) != '\0') {
          if (*(char *)((longlong)param_2 + 0xb) == '\0') {
            iVar12 = *(int *)((longlong)param_2 + 0xc);
            if ((iVar12 < 0) || (*(int *)(lVar17 + 0x18) <= iVar12)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              lVar16 = *(longlong *)(lVar17 + 0x10);
LAB_142596603:
              plVar8 = *(longlong **)(lVar16 + (longlong)iVar12 * 8);
              if (plVar8 != (longlong *)0x0) {
                cVar4 = (**(code **)(*plVar8 + 0x300))(plVar8,param_2,param_3,param_4);
                if (cVar4 != '\0') {
                  return 1;
                }
                plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b8))();
                if (plVar8 != (longlong *)0x0) {
                  local_50 = (undefined8 *)0x0;
                  local_48 = 0;
                  (**(code **)(*plVar8 + 0x2a0))(plVar8,&local_50);
                  uVar3 = local_48;
                  lVar16 = (longlong)(int)local_48;
                  for (puVar11 = local_50; puVar11 != local_50 + lVar16; puVar11 = puVar11 + 1) {
                    if ((longlong *)*puVar11 == plVar8) {
                      if ((int)((longlong)puVar11 - (longlong)local_50 >> 3) != -1)
                      goto LAB_1425966be;
                      break;
                    }
                  }
                  iVar12 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,iVar12);
                  if (local_48._4_4_ < iVar12) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_50,uVar3 & 0xffffffff);
                  }
                  local_50[lVar16] = plVar8;
LAB_1425966be:
                  puVar11 = local_50 + (int)local_48;
                  for (puVar15 = local_50; puVar15 != puVar11; puVar15 = puVar15 + 1) {
                    plVar1 = (longlong *)*puVar15;
                    plVar8 = (longlong *)(**(code **)(*plVar1 + 0x2c0))();
                    plVar13 = (longlong *)*plVar8;
                    plVar8 = plVar13 + (int)plVar8[1];
                    for (; plVar13 != plVar8; plVar13 = plVar13 + 1) {
                      lVar16 = *plVar13;
                      if (lVar16 != 0) {
                        lVar9 = FUN_1429b47b0();
                        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                          bVar5 = false;
                        }
                        else {
                          bVar5 = true;
                        }
                        if ((bVar5) && (*(longlong *)(lVar16 + 0x40) == *param_2)) {
                          if (local_50 != (undefined8 *)0x0) {
                            FMemory::Free();
                          }
                          cVar4 = (**(code **)(*plVar1 + 0x300))(plVar1,param_2,param_3,param_4);
                          if (cVar4 != '\0') {
                            return 1;
                          }
                          UMaterialExpressionStaticBoolParameter::IsNamedParameter
                                    (lVar16,param_2,param_3,param_4);
                          return param_5 ^ 1;
                        }
                      }
                    }
                  }
                  if (local_50 != (undefined8 *)0x0) {
                    FMemory::Free();
                  }
                }
              }
            }
          }
          else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
            iVar12 = *(int *)((longlong)param_2 + 0xc);
            if ((iVar12 < 0) || (*(int *)(lVar17 + 0x28) <= iVar12)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              lVar16 = *(longlong *)(lVar17 + 0x20);
              goto LAB_142596603;
            }
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        GetCurrentThreadId();
      }
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      *(undefined1 *)((ulonglong)bVar6 + 0x9c + param_1) = 1;
      bVar6 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x308))
                        (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4,param_5);
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
        *(undefined1 *)(param_1 + 0x9d) = 0;
        return bVar6;
      }
      *(undefined1 *)(param_1 + 0x9c) = 0;
      return bVar6;
    }
  }
  return 0;
}



// FUNCTION 1425968f0 GetTerrainLayerWeightParameterValue body=85 status=ok
// SIG undefined GetTerrainLayerWeightParameterValue(void)

undefined1 UMaterialInterface::GetTerrainLayerWeightParameterValue(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1b1,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetStaticSwitchParameterValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1b1,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetStaticSwitchParameterValue");
  return 0;
}


