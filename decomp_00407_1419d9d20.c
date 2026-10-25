// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1419d9d20 FUN_1419d9d20 body=1408 status=ok
// SIG undefined FUN_1419d9d20(void)

void FUN_1419d9d20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res8 [8];
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  ulonglong local_10;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d8e238;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x1a3],1);
  if (DAT_1469f59e4 != 0) {
    uVar1 = FUN_14167d0d0(&local_28);
    FUN_1419f00b0(&local_18,uVar1,*(undefined4 *)(param_1 + 0x56));
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
    local_28 = (void *)0x0;
    iVar3 = (int)local_10;
    local_20 = iVar3;
    if (iVar3 == 0) {
      local_1c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_10 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_28,local_18,(longlong)iVar3 * 2);
    }
    FUN_141a0ab40(&local_28,param_1 + 0x57);
    puVar2 = (undefined8 *)FName::FName(local_res8,"WindowsNoEditor",1);
    uVar1 = FUN_14167d0d0(&local_28);
    FShaderCache::SaveBinaryCache(uVar1,*puVar2);
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  if (param_1[0x1a1] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x199);
  *(undefined4 *)(param_1 + 0x179) = 0;
  if (param_1[0x178] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FShaderStreamingCache>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x170,0);
  if (param_1[0x174] != 0) {
    FMemory::Free();
  }
  if (param_1[0x170] != 0) {
    FMemory::Free();
  }
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 0x16e);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  if (param_1[0x16b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x163);
  *(undefined4 *)(param_1 + 0x162) = 0;
  if (param_1[0x161] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x159);
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (param_1[0x157] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x14f);
  *(undefined4 *)(param_1 + 0x14e) = 0;
  if (param_1[0x14d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x145);
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (param_1[0x143] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x13b);
  *(undefined4 *)(param_1 + 0x13a) = 0;
  if (param_1[0x139] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x131);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (param_1[0x12f] != 0) {
    FMemory::Free();
  }
  FUN_1419d9280(param_1 + 0x127);
  *(undefined4 *)(param_1 + 0x126) = 0;
  if (param_1[0x125] != 0) {
    FMemory::Free();
  }
  FUN_1419d9080(param_1 + 0x11d);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (param_1[0x11b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x113);
  *(undefined4 *)(param_1 + 0x112) = 0;
  if (param_1[0x111] != 0) {
    FMemory::Free();
  }
  FUN_1419d9410(param_1 + 0x109);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (param_1[0x107] != 0) {
    FMemory::Free();
  }
  FUN_1419d95a0(param_1 + 0xff);
  *(undefined4 *)(param_1 + 0xfe) = 0;
  if (param_1[0xfd] != 0) {
    FMemory::Free();
  }
  FUN_1419d95a0(param_1 + 0xf5);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (param_1[0xf3] != 0) {
    FMemory::Free();
  }
  FUN_1419d95a0(param_1 + 0xeb);
  *(undefined4 *)(param_1 + 0xea) = 0;
  if (param_1[0xe9] != 0) {
    FMemory::Free();
  }
  FUN_1419d95a0(param_1 + 0xe1);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (param_1[0xdf] != 0) {
    FMemory::Free();
  }
  FUN_1419d95a0(param_1 + 0xd7);
  *(undefined4 *)(param_1 + 0xd6) = 0;
  if (param_1[0xd5] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xcd,0);
  if (param_1[0xd1] != 0) {
    FMemory::Free();
  }
  if (param_1[0xcd] != 0) {
    FMemory::Free();
  }
  FShaderPlatformCache::~FShaderPlatformCache(param_1 + 0x57);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x55);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x54);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x53);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FMemory::Free();
  }
  FUN_1419ebf60(param_1 + 0x48,0);
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x48] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (param_1[0x46] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FMemory::Free();
  }
  FUN_1419ebda0(param_1 + 0x34,0);
  if (param_1[0x38] != 0) {
    FMemory::Free();
  }
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  FUN_140c64cd0(param_1);
  return;
}



// FUNCTION 1419da2a0 ~FShaderPipeline body=189 status=ok
// SIG undefined ~FShaderPipeline(void)

void FShaderPipeline::~FShaderPipeline(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    FShader::Release();
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    FShader::Release();
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    FShader::Release();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
    FShader::Release();
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    FShader::Release();
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar2 != 0) {
    FShader::Release(lVar2);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FShader::Release();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FShader::Release();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FShader::Release();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FShader::Release();
  }
  return;
}



// FUNCTION 1419da360 FUN_1419da360 body=1390 status=ok
// SIG undefined FUN_1419da360(void)

void FUN_1419da360(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined8 local_res8;
  undefined8 local_res10;
  
  *param_1 = &PTR_FUN_144d8e2f0;
  cVar6 = FUN_1419f08d0();
  if ((cVar6 != '\0') && (DAT_1469f59c8 != 0)) {
    FUN_141a0a7d0(DAT_1469f59c8,1);
  }
  cVar6 = FUN_1419efa30();
  if ((cVar6 != '\0') && (DAT_1469f59c8 != 0)) {
    FUN_141a0a7d0(DAT_1469f59c8,0);
  }
  do {
    LOCK();
    bVar17 = param_1[0x1a] == 0;
    if (bVar17) {
      param_1[0x1a] = 0;
    }
    UNLOCK();
    if (bVar17) {
      LOCK();
      bVar17 = param_1[0x19] == 0;
      if (bVar17) {
        param_1[0x19] = 0;
      }
      UNLOCK();
      if (bVar17) {
        LOCK();
        bVar17 = param_1[0x1b] == 0;
        if (bVar17) {
          param_1[0x1b] = 0;
        }
        UNLOCK();
        if (!bVar17) break;
      }
    }
  } while (param_1[0x2d] != 0);
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  FUN_1419e5120(param_1);
  lVar16 = param_1[2];
  lVar14 = (longlong)*(int *)(param_1 + 3) * 0x250 + lVar16;
  if (lVar16 != lVar14) {
    uVar15 = 0;
    do {
      lVar3 = *(longlong *)(lVar16 + 0x248);
      if (*(int *)(lVar3 + 0x140) != 0) {
        uVar11 = uVar15;
        do {
          local_res8 = 0;
          lVar10 = *(longlong *)(lVar3 + 0x130);
          if (*(longlong *)(lVar3 + 0x130) == 0) {
            lVar10 = lVar3 + 0x90;
          }
          puVar9 = (undefined8 *)(lVar10 + (longlong)(int)uVar11 * 0x50);
          uVar7 = uVar15;
          if (*(int *)(puVar9 + 8) != 0) {
            plVar8 = (longlong *)puVar9[6];
            if ((longlong *)puVar9[6] == (longlong *)0x0) {
              plVar8 = puVar9 + 2;
            }
            if (plVar8 != (longlong *)0x0) {
              uVar7 = (**(code **)(*plVar8 + 8))();
            }
          }
          (*(code *)*puVar9)(uVar7,&local_res8);
          uVar12 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(lVar3 + 0x140));
      }
      lVar16 = lVar16 + 0x250;
    } while (lVar16 != lVar14);
  }
  lVar16 = param_1[0x25];
  lVar14 = (longlong)*(int *)(param_1 + 0x26) * 0x250 + lVar16;
  if (lVar16 != lVar14) {
    uVar15 = 0;
    do {
      lVar3 = *(longlong *)(lVar16 + 0x248);
      if (*(int *)(lVar3 + 0x140) != 0) {
        uVar11 = uVar15;
        do {
          local_res10 = 0;
          lVar10 = *(longlong *)(lVar3 + 0x130);
          if (*(longlong *)(lVar3 + 0x130) == 0) {
            lVar10 = lVar3 + 0x90;
          }
          puVar9 = (undefined8 *)(lVar10 + (longlong)(int)uVar11 * 0x50);
          uVar7 = uVar15;
          if (*(int *)(puVar9 + 8) != 0) {
            plVar8 = (longlong *)puVar9[6];
            if ((longlong *)puVar9[6] == (longlong *)0x0) {
              plVar8 = puVar9 + 2;
            }
            if (plVar8 != (longlong *)0x0) {
              uVar7 = (**(code **)(*plVar8 + 8))();
            }
          }
          (*(code *)*puVar9)(uVar7,&local_res10);
          uVar12 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(lVar3 + 0x140));
      }
      lVar16 = lVar16 + 0x250;
    } while (lVar16 != lVar14);
  }
  uVar11 = 0;
  plVar8 = (longlong *)param_1[8];
  uVar15 = (longlong)*(int *)(param_1 + 9) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 9) < plVar8) {
    uVar15 = uVar11;
  }
  uVar7 = uVar11;
  if (uVar15 != 0) {
    do {
      plVar4 = (longlong *)*plVar8;
      plVar5 = (longlong *)plVar4[4];
      if ((plVar5 != (longlong *)0x0) && (*(char *)((longlong)plVar5 + 0x71) == '\0')) {
        (**(code **)(*plVar5 + 8))(plVar5,0);
      }
      puVar9 = (undefined8 *)plVar4[2];
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
      }
      plVar5 = (longlong *)plVar4[7];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = (longlong *)plVar4[5];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar4,0x40);
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar15);
  }
  plVar8 = (longlong *)param_1[0x27];
  uVar15 = (longlong)*(int *)(param_1 + 0x28) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x28) < plVar8) {
    uVar15 = uVar11;
  }
  if (uVar15 != 0) {
    do {
      plVar4 = (longlong *)*plVar8;
      plVar5 = (longlong *)plVar4[4];
      if ((plVar5 != (longlong *)0x0) && (*(char *)((longlong)plVar5 + 0x71) == '\0')) {
        (**(code **)(*plVar5 + 8))(plVar5,0);
      }
      puVar9 = (undefined8 *)plVar4[2];
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
      }
      plVar5 = (longlong *)plVar4[7];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = (longlong *)plVar4[5];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar4,0x40);
      plVar8 = plVar8 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar15);
    plVar8 = (longlong *)param_1[0x27];
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  iVar13 = *(int *)(param_1 + 0x26);
  lVar16 = param_1[0x25];
  if (iVar13 != 0) {
    do {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar16);
      lVar16 = lVar16 + 0x250;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    lVar16 = param_1[0x25];
  }
  if (lVar16 != 0) {
    FMemory::Free(lVar16);
  }
  TArray<FPipelineCachePSOHeader,FDefaultAllocator>::
  ~TArray<FPipelineCachePSOHeader,FDefaultAllocator>(param_1 + 0x23);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 10);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TArray<FPipelineCachePSOHeader,FDefaultAllocator>::
  ~TArray<FPipelineCachePSOHeader,FDefaultAllocator>(param_1 + 6);
  iVar13 = *(int *)(param_1 + 5);
  lVar16 = param_1[4];
  if (iVar13 != 0) {
    do {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar16);
      lVar16 = lVar16 + 0x250;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    lVar16 = param_1[4];
  }
  if (lVar16 != 0) {
    FMemory::Free(lVar16);
  }
  iVar13 = *(int *)(param_1 + 3);
  lVar16 = param_1[2];
  if (iVar13 != 0) {
    do {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar16);
      lVar16 = lVar16 + 0x250;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    lVar16 = param_1[2];
  }
  if (lVar16 != 0) {
    FMemory::Free(lVar16);
  }
  FUN_140c64cd0(param_1);
  return;
}



// FUNCTION 1419da8d0 ~FShaderPipelineType body=119 status=ok
// SIG undefined ~FShaderPipelineType(void)

void FShaderPipelineType::~FShaderPipelineType(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,*param_1,1);
  uVar1 = *puVar2;
  uVar3 = GetNameToTypeMap();
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (uVar3,uVar1);
  if (param_1[10] != 0) {
    *(undefined8 *)(param_1[10] + 8) = param_1[0xb];
  }
  if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xb] = param_1[10];
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419da950 ~FShaderPlatformCache body=611 status=ok
// SIG undefined ~FShaderPlatformCache(void)

void FShaderPlatformCache::~FShaderPlatformCache(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FShaderStreamingCache>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x358,0);
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x308,0);
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShaderCacheGraphicsPipelineState,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FShaderCacheGraphicsPipelineState,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2a8);
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x248);
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FUN_14106ecc0(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShaderDrawKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FShaderDrawKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 200);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FUN_1419eb7c0(param_1 + 0x68,0);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_140dde460(param_1 + 8);
  return;
}



// FUNCTION 1419dabc0 ~FShaderType body=261 status=ok
// SIG undefined ~FShaderType(void)

void FShaderType::~FShaderType(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d8dfd0;
  if (param_1[0x13] != 0) {
    *(undefined8 *)(param_1[0x13] + 8) = param_1[0x14];
  }
  if ((undefined8 *)param_1[0x14] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x14] = param_1[0x13];
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = param_1[3];
  uVar2 = GetNameToTypeMap();
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (uVar2,uVar1);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1c,0);
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  FUN_1419d9810(param_1 + 9);
  return;
}



// FUNCTION 1419dacd0 ~FVertexFactoryType body=216 status=ok
// SIG undefined ~FVertexFactoryType(void)

void FVertexFactoryType::~FVertexFactoryType(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d8e1c8;
  if (param_1[10] != 0) {
    *(undefined8 *)(param_1[10] + 8) = param_1[0xb];
  }
  if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xb] = param_1[10];
  }
  param_1[10] = 0;
  plVar2 = param_1 + 0x36;
  param_1[0xb] = 0;
  lVar3 = 6;
  do {
    plVar1 = plVar2 + -2;
    plVar2 = plVar2 + -5;
    lVar3 = lVar3 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xd,0);
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419dadb0 operator= body=259 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FPipelineCachePSOHeader,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    lVar2 = *param_1;
    for (iVar4 = (int)param_1[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)(lVar2 + 0x48) = 0;
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2);
      lVar2 = lVar2 + 0x58;
    }
    iVar4 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
      puVar5 = (undefined8 *)*param_1;
      if (iVar4 != 0) {
        lVar3 = (longlong)puVar5 + 0x2c;
        do {
          *puVar5 = 0;
          *(undefined8 *)(lVar3 + -0x24) = 0;
          *(undefined8 *)(lVar3 + -0xc) = 0;
          *(undefined8 *)(lVar3 + -4) = 0;
          *(undefined4 *)(lVar3 + 4) = 0xffffffff;
          *(undefined4 *)(lVar3 + 8) = 0;
          *(undefined8 *)(lVar3 + 0x14) = 0;
          *(undefined4 *)(lVar3 + 0x1c) = 0;
          TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=(puVar5,lVar2);
          puVar1 = (undefined4 *)(lVar2 + 0x50);
          lVar2 = lVar2 + 0x58;
          *(undefined4 *)(lVar3 + 0x24) = *puVar1;
          lVar3 = lVar3 + 0x58;
          puVar5 = puVar5 + 0xb;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1419daec0 FUN_1419daec0 body=506 status=ok
// SIG undefined FUN_1419daec0(void)

longlong * FUN_1419daec0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::ConditionalRehash
                      (param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1419db01b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_1419db01b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_14044be50(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0xc,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1419db0c0 FUN_1419db0c0 body=469 status=ok
// SIG undefined FUN_1419db0c0(void)

longlong * FUN_1419db0c0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1419db1fd;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_1419db1fd:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_1419cbd70(param_1,local_res8,(longlong)iStack_3c * 0x60 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1419db2a0 operator= body=502 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1419db3fb;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_1419db3fb:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_1419ccaa0(param_1,local_res8,(longlong)iStack_4c * 0x1c + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1419db4a0 operator= body=686 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<UEDCItem_*,FEDCItemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    local_78 = 0;
    uStack_74 = 1;
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
        if (bVar3) goto LAB_1419db57c;
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
LAB_1419db57c:
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
        goto LAB_1419db631;
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
LAB_1419db631:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      lVar6 = (longlong)(int)uStack_3c * 0x60 + *param_1;
      *(undefined4 *)(lVar6 + 0x50) = 0;
      if (*(longlong *)(lVar6 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar6 + 8);
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



// FUNCTION 1419db750 operator= body=152 status=ok
// SIG undefined operator=(void)

longlong * FSerializationHistory::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  plVar1 = param_1 + 3;
  plVar2 = param_2 + 3;
  *(int *)(param_1 + 2) = (int)param_2[2];
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  return param_1;
}



// FUNCTION 1419db7f0 FUN_1419db7f0 body=298 status=ok
// SIG undefined FUN_1419db7f0(void)

longlong * FUN_1419db7f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_res8;
  undefined8 local_res18 [2];
  
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    if (*param_2 == 0) {
      plVar3 = &local_res8;
      local_res8 = 0;
    }
    else {
      plVar3 = (longlong *)FName::FName(local_res18,*(undefined8 *)(*param_2 + 0x10),1);
    }
    local_res8 = *plVar3;
    (**(code **)(*param_1 + 0x40))(param_1,&local_res8);
    return param_1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_res8 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,&local_res8);
    lVar1 = local_res8;
    *param_2 = 0;
    local_res18[0] = 0;
    if (local_res8 != 0) {
      plVar3 = (longlong *)FShaderType::GetNameToTypeMap();
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
        plVar4 = (longlong *)plVar3[8];
        if ((longlong *)plVar3[8] == (longlong *)0x0) {
          plVar4 = plVar3 + 7;
        }
        iVar2 = *(int *)((longlong)plVar4 +
                        ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                        (longlong)(int)plVar3[9] - 1U) * 4);
        if (iVar2 != -1) {
          do {
            plVar4 = (longlong *)(*plVar3 + (longlong)iVar2 * 0x18);
            if (*(longlong *)(*plVar3 + (longlong)iVar2 * 0x18) == lVar1) {
              if (iVar2 != -1) goto LAB_1419db8f3;
              break;
            }
            iVar2 = (int)plVar4[2];
          } while (iVar2 != -1);
        }
      }
      plVar4 = (longlong *)0x0;
LAB_1419db8f3:
      plVar3 = plVar4 + 1;
      if (plVar4 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      if (plVar3 != (longlong *)0x0) {
        *param_2 = *plVar3;
      }
    }
  }
  return param_1;
}



// FUNCTION 1419db920 FUN_1419db920 body=182 status=ok
// SIG undefined FUN_1419db920(void)

longlong * FUN_1419db920(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 local_res18 [16];
  
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    if (*param_2 == 0) {
      local_res8 = 0;
      plVar2 = &local_res8;
    }
    else {
      plVar2 = (longlong *)FName::FName(local_res18,*(undefined8 *)(*param_2 + 0x10),1);
    }
    local_res8 = *plVar2;
    (**(code **)(*param_1 + 0x40))(param_1,&local_res8);
    return param_1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_res8 = 0;
    (**(code **)(*param_1 + 0x40))();
    for (puVar1 = DAT_1469f60a0; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      lVar3 = puVar1[2];
      if (*(longlong *)(lVar3 + 0x20) == local_res8) goto LAB_1419db9c5;
    }
    lVar3 = 0;
LAB_1419db9c5:
    *param_2 = lVar3;
  }
  return param_1;
}



// FUNCTION 1419db9e0 FUN_1419db9e0 body=181 status=ok
// SIG undefined FUN_1419db9e0(void)

longlong * FUN_1419db9e0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 local_res18 [16];
  
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
      local_res8 = 0;
      plVar2 = &local_res8;
    }
    else {
      plVar2 = (longlong *)FName::FName(local_res18,*(undefined8 *)*param_2,1);
    }
    local_res8 = *plVar2;
    (**(code **)(*param_1 + 0x40))(param_1,&local_res8);
    return param_1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_res8 = 0;
    (**(code **)(*param_1 + 0x40))();
    for (puVar1 = DAT_1469f5de0; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      lVar3 = puVar1[2];
      if (*(longlong *)(lVar3 + 8) == local_res8) goto LAB_1419dba84;
    }
    lVar3 = 0;
LAB_1419dba84:
    *param_2 = lVar3;
  }
  return param_1;
}



// FUNCTION 1419dbaa0 FUN_1419dbaa0 body=634 status=ok
// SIG undefined FUN_1419dbaa0(void)

longlong * FUN_1419dbaa0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  (**(code **)(*param_1 + 8))();
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 1),1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 2);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 3),1);
  }
  else {
    *(undefined1 *)(param_2 + 3) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,1);
  }
  else {
    *(undefined1 *)(param_2 + 4) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,1);
  }
  else {
    *(undefined1 *)(param_2 + 5) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,1);
  }
  else {
    *(undefined1 *)(param_2 + 6) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 7);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 8),1);
  }
  else {
    *(undefined1 *)(param_2 + 8) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 9,1);
  }
  else {
    *(undefined1 *)(param_2 + 9) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 10,1);
  }
  else {
    *(undefined1 *)(param_2 + 10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xb,1);
  }
  else {
    *(undefined1 *)(param_2 + 0xb) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,1);
  }
  else {
    *(undefined1 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *(undefined1 *)(param_2 + 0xd) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 0xd),1);
  return param_1;
}



// FUNCTION 1419dbd20 FUN_1419dbd20 body=682 status=ok
// SIG undefined FUN_1419dbd20(void)

longlong * FUN_1419dbd20(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,1);
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,1);
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x14,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x14,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    param_2[0x18] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x18,1);
  return param_1;
}



// FUNCTION 1419dbfd0 FUN_1419dbfd0 body=230 status=ok
// SIG undefined FUN_1419dbfd0(void)

longlong * FUN_1419dbfd0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined4 *)(param_2 + 0x1a8);
  uVar3 = FUN_1419de870();
  uVar3 = FUN_1419dc650(uVar3,param_2 + 0x108);
  uVar3 = FUN_1419dc650(uVar3,param_2 + 0x128);
  uVar3 = FUN_1419dc650(uVar3,param_2 + 0x148);
  uVar3 = FUN_1419dc650(uVar3,param_2 + 0x168);
  plVar4 = (longlong *)FUN_1419dc650(uVar3,param_2 + 0x188);
  puVar2 = *(undefined4 **)plVar4[1];
  if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,puVar1,4);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,puVar1,4);
    }
  }
  else {
    *puVar1 = *puVar2;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
  }
  return plVar4;
}



// FUNCTION 1419dc0c0 FUN_1419dc0c0 body=1420 status=ok
// SIG undefined FUN_1419dc0c0(void)

longlong * FUN_1419dc0c0(longlong *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar5 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0xbd,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0xbd) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x2f,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x2f) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar5 = param_2 + 0x2a;
  lVar4 = 8;
  puVar6 = param_2 + 0x20;
  do {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar6 + -8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar6 + -8,4);
      }
    }
    else {
      puVar6[-8] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar6,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar6,4);
      }
    }
    else {
      *puVar6 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar5 + -2,1);
    }
    else {
      *(undefined1 *)(puVar5 + -2) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar5,1);
    }
    else {
      *(undefined1 *)puVar5 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar6 = puVar6 + 1;
    puVar5 = (undefined4 *)((longlong)puVar5 + 1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar5 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x2c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x2c,4);
    }
  }
  else {
    param_2[0x2c] = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar5 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x2d,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x2d,4);
    }
  }
  else {
    param_2[0x2d] = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x2e,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x2e) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0xb9,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0xb9) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0xba,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0xba) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0xbb,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0xbb) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_1419e04e0(param_1,param_2 + 2);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x10);
  puVar5 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x11,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x11,4);
    }
  }
  else {
    param_2[0x11] = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar5 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x12,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x12,4);
    }
  }
  else {
    param_2[0x12] = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x13,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x13) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)((longlong)param_2 + 0x4d),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x4d) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x4e);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x4f);
  plVar3 = (longlong *)FUN_1419dbaa0(param_1,param_2 + 0x14);
  puVar5 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar5 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x30,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,param_2 + 0x30,4);
    }
  }
  else {
    param_2[0x30] = *puVar5;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  return plVar3;
}



// FUNCTION 1419dc650 FUN_1419dc650 body=177 status=ok
// SIG undefined FUN_1419dc650(void)

longlong * FUN_1419dc650(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  byte local_res8 [8];
  
  FUN_141661e90();
  plVar3 = (longlong *)param_1[1];
  local_res8[0] = *(byte *)(param_2 + 0x14);
  if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  *(uint *)(param_2 + 0x14) = (uint)local_res8[0];
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x1c);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    uVar4 = *(uint *)(param_2 + 0x18);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_2 + 0x1c);
      iVar2 = *(int *)(param_2 + 0x14);
      uVar4 = FCrc::MemCrc_DEPRECATED(param_2,0x14,0);
      uVar4 = uVar4 ^ iVar2 << 0x10 ^ (uint)bVar1;
    }
    *(uint *)(param_2 + 0x18) = uVar4;
  }
  return param_1;
}



// FUNCTION 1419dc710 FUN_1419dc710 body=331 status=ok
// SIG undefined FUN_1419dc710(void)

longlong * FUN_1419dc710(longlong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,8);
    }
  }
  else {
    *(undefined8 *)(param_2 + 2) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,4);
    }
  }
  else {
    param_2[4] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if (puVar3 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *(undefined1 *)(param_2 + 5) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,1);
  return param_1;
}



// FUNCTION 1419dc860 FUN_1419dc860 body=201 status=ok
// SIG undefined FUN_1419dc860(void)

longlong * FUN_1419dc860(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined4 *)(param_2 + 100);
  uVar3 = FUN_141661e90();
  uVar3 = FUN_141661e90(uVar3,param_2 + 0x14);
  uVar3 = FUN_141661e90(uVar3,param_2 + 0x28);
  uVar3 = FUN_141661e90(uVar3,param_2 + 0x3c);
  plVar4 = (longlong *)FUN_141661e90(uVar3,param_2 + 0x50);
  puVar2 = *(undefined4 **)plVar4[1];
  if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,puVar1,4);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,puVar1,4);
    }
  }
  else {
    *puVar1 = *puVar2;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
  }
  return plVar4;
}



// FUNCTION 1419dc930 FUN_1419dc930 body=823 status=ok
// SIG undefined FUN_1419dc930(void)

longlong * FUN_1419dc930(longlong *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong *puVar13;
  undefined4 *puVar14;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x378,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x378) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  uVar9 = 0;
  puVar14 = param_2 + 0x60;
  puVar13 = (ulonglong *)(param_2 + 0x360);
  lVar12 = 6;
  do {
    uVar8 = (uint)uVar9;
    lVar10 = 0x10;
    do {
      puVar11 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar11 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,param_2,4);
        }
      }
      else {
        *param_2 = *puVar11;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      param_2 = param_2 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar2 = *(ulonglong **)param_1[1];
    if ((ulonglong *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar13,8);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar13,8);
      }
    }
    else {
      *puVar13 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(ulonglong **)param_1[1];
    if ((ulonglong *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar13 + 6,8);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar13 + 6,8);
      }
    }
    else {
      puVar13[6] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    uVar4 = puVar13[6];
    if (uVar4 == 0) {
      uVar4 = *puVar13;
      uVar6 = 0x20;
      if (uVar4 < 0x100000000) {
        uVar6 = uVar8;
      }
      uVar5 = uVar4 >> 0x20;
      if (uVar4 < 0x100000000) {
        uVar5 = uVar4;
      }
      if (0xffff < uVar5) {
        uVar5 = uVar5 >> 0x10;
        uVar6 = uVar6 + 0x10;
      }
      uVar7 = uVar6 + 8;
      if (uVar5 < 0x100) {
        uVar7 = uVar6;
      }
      uVar4 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar4 = uVar5;
      }
      uVar6 = uVar7 + 4;
      if (uVar4 < 0x10) {
        uVar6 = uVar7;
      }
      uVar5 = uVar4 >> 4;
      if (uVar4 < 0x10) {
        uVar5 = uVar4;
      }
      uVar7 = uVar6 + 2;
      if (uVar5 < 4) {
        uVar7 = uVar6;
      }
      uVar4 = uVar5 >> 2;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      uVar6 = uVar7 + 1;
      if (uVar4 < 2) {
        uVar6 = uVar7;
      }
      if (uVar4 == 0) {
        uVar6 = uVar8;
      }
    }
    else {
      uVar6 = 0x20;
      uVar5 = uVar4 >> 0x20;
      if (uVar4 < 0x100000000) {
        uVar6 = uVar8;
        uVar5 = uVar4;
      }
      if (0xffff < uVar5) {
        uVar5 = uVar5 >> 0x10;
        uVar6 = uVar6 + 0x10;
      }
      uVar7 = uVar6 + 8;
      uVar4 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar7 = uVar6;
        uVar4 = uVar5;
      }
      uVar5 = uVar4 >> 4;
      uVar6 = uVar7 + 4;
      if (uVar4 < 0x10) {
        uVar5 = uVar4;
        uVar6 = uVar7;
      }
      uVar4 = uVar5 >> 2;
      uVar7 = uVar6 + 2;
      if (uVar5 < 4) {
        uVar4 = uVar5;
        uVar7 = uVar6;
      }
      uVar6 = uVar7 + 1;
      if (uVar4 < 2) {
        uVar6 = uVar7;
      }
      if (uVar4 == 0) {
        uVar6 = uVar8;
      }
      uVar6 = uVar6 + 0x3f;
    }
    if (uVar6 != 0) {
      uVar9 = (ulonglong)uVar6;
      puVar11 = puVar14;
      do {
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar11,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar11,4);
          }
        }
        else {
          *puVar11 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar11 = puVar11 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 0x80;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return param_1;
}



// FUNCTION 1419dcc70 FUN_1419dcc70 body=207 status=ok
// SIG undefined FUN_1419dcc70(void)

longlong * FUN_1419dcc70(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined4 *)(param_2 + 0xa0);
  uVar3 = FUN_1419dc650();
  uVar3 = FUN_1419dc650(uVar3,param_2 + 0x20);
  uVar3 = FUN_1419dc650(uVar3,param_2 + 0x40);
  uVar3 = FUN_1419dc650(uVar3,param_2 + 0x60);
  plVar4 = (longlong *)FUN_1419dc650(uVar3,param_2 + 0x80);
  puVar2 = *(undefined4 **)plVar4[1];
  if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,puVar1,4);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,puVar1,4);
    }
  }
  else {
    *puVar1 = *puVar2;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
  }
  return plVar4;
}



// FUNCTION 1419dcd40 FUN_1419dcd40 body=1381 status=ok
// SIG undefined FUN_1419dcd40(void)

longlong * FUN_1419dcd40(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte local_res8 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_48;
  undefined1 local_44 [4];
  longlong local_40;
  int *local_38;
  
  local_res18[0] = 0x10;
  local_res20[0] = DAT_1469f59d4;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_res18[0] = -1;
    local_res20[0] = -1;
  }
  plVar1 = (longlong *)param_1[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((-1 < (char)param_1[5]) && (local_res18[0] == 0x10)) {
    plVar1 = (longlong *)param_1[1];
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res20,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if ((-1 < (char)param_1[5]) && (local_res20[0] == DAT_1469f59d4)) {
      plVar1 = (longlong *)param_1[1];
      local_res8[0] = (byte)*param_2;
      if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,local_res8,1);
      }
      else {
        local_res8[0] = *(byte *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      *param_2 = (uint)local_res8[0];
      FUN_1419ddff0(param_1,param_2 + 0x16);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        TSet<TTuple<FGameplayTag,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FGameplayTag,FPrimaryAssetId,0>,FDefaultSetAllocator>
        ::Empty(param_2 + 2,param_2[0x18]);
        local_48 = 0;
        if (0 < (int)param_2[0x18]) {
          local_38 = &local_48;
          do {
            local_40 = (longlong)local_48 * 0x20 + *(longlong *)(param_2 + 0x16);
            FUN_1419d01d0(param_2 + 2,local_44,&local_40,0);
            local_48 = local_48 + 1;
          } while (local_48 < (int)param_2[0x18]);
        }
      }
      FUN_1419ddcd0(param_1,param_2 + 0x2e);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        FUN_1419eade0(param_2 + 0x1a,param_2[0x30]);
        local_48 = 0;
        if (0 < (int)param_2[0x30]) {
          local_38 = &local_48;
          do {
            local_40 = (longlong)local_48 * 0x1ac + *(longlong *)(param_2 + 0x2e);
            FUN_1419cf860(param_2 + 0x1a,local_44,&local_40,0);
            local_48 = local_48 + 1;
          } while (local_48 < (int)param_2[0x30]);
        }
      }
      FUN_1419de190(param_1,param_2 + 0x46);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        FUN_1419eafe0(param_2 + 0x32,param_2[0x48]);
        local_48 = 0;
        if (0 < (int)param_2[0x48]) {
          local_38 = &local_48;
          do {
            local_40 = (longlong)local_48 * 0xde8 + *(longlong *)(param_2 + 0x46);
            FUN_1419d09e0(param_2 + 0x32,local_44,&local_40,0);
            local_48 = local_48 + 1;
          } while (local_48 < (int)param_2[0x48]);
        }
      }
      FUN_1419de520(param_1,param_2 + 0x5e);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        FUN_1419eb160(param_2 + 0x4a,param_2[0x60]);
        local_48 = 0;
        if (0 < (int)param_2[0x60]) {
          local_38 = &local_48;
          do {
            local_40 = (longlong)local_48 * 0x2c + *(longlong *)(param_2 + 0x5e);
            FUN_1419d1220(param_2 + 0x4a,local_44,&local_40,0);
            local_48 = local_48 + 1;
          } while (local_48 < (int)param_2[0x60]);
        }
      }
      FUN_1419de6c0(param_1,param_2 + 0x76);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        FUN_1419eb2e0(param_2 + 0x62,param_2[0x78]);
        local_48 = 0;
        if (0 < (int)param_2[0x78]) {
          local_38 = &local_48;
          do {
            local_40 = (longlong)local_48 * 0x30 + *(longlong *)(param_2 + 0x76);
            FUN_1419d1790(param_2 + 0x62,local_44,&local_40,0);
            local_48 = local_48 + 1;
          } while (local_48 < (int)param_2[0x78]);
        }
      }
      FUN_1419ddb50(param_1,param_2 + 0x8e);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        TSet<TTuple<FPrimaryAssetId,UGCosmeticIconButton_*>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,UGCosmeticIconButton_*,0>,FDefaultSetAllocator>
        ::Empty(param_2 + 0x7a,param_2[0x90]);
        local_48 = 0;
        if (0 < (int)param_2[0x90]) {
          local_38 = &local_48;
          do {
            local_40 = (longlong)local_48 * 0x1c + *(longlong *)(param_2 + 0x8e);
            FUN_1419cf2d0(param_2 + 0x7a,local_44,&local_40,0);
            local_48 = local_48 + 1;
          } while (local_48 < (int)param_2[0x90]);
        }
      }
      FUN_1419de380(param_1,param_2 + 0xa6);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        FUN_1419eb0a0(param_2 + 0x92,param_2[0xa8]);
        local_48 = 0;
        if (0 < (int)param_2[0xa8]) {
          local_38 = &local_48;
          do {
            local_40 = *(longlong *)(param_2 + 0xa6) + (longlong)local_48 * 0xc;
            FUN_1419d0ca0(param_2 + 0x92,local_44,&local_40,0);
            local_48 = local_48 + 1;
          } while (local_48 < (int)param_2[0xa8]);
        }
      }
      FUN_1419ded30(param_1,param_2 + 0xc2);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (*(longlong *)(param_2 + 0xd2) != 0) {
          uVar2 = FMemory::Realloc(*(longlong *)(param_2 + 0xd2),0,0);
          *(undefined8 *)(param_2 + 0xd2) = uVar2;
        }
        param_2[0xd4] = 0;
        TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
        ::ConditionalRehash(param_2 + 0xc2,param_2[0xc4] - param_2[0xcf],0);
      }
      FUN_1419df110(param_1,param_2 + 0xd6);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (*(longlong *)(param_2 + 0xe6) != 0) {
          uVar2 = FMemory::Realloc(*(longlong *)(param_2 + 0xe6),0,0);
          *(undefined8 *)(param_2 + 0xe6) = uVar2;
        }
        param_2[0xe8] = 0;
        TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
        ::ConditionalRehash(param_2 + 0xd6,param_2[0xd8] - param_2[0xe3],0);
      }
      FUN_1419dde60(param_1,param_2 + 0xbe);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        FUN_1419eae60(param_2 + 0xaa,param_2[0xc0]);
        local_48 = 0;
        if (0 < (int)param_2[0xc0]) {
          local_38 = &local_48;
          do {
            local_40 = (longlong)local_48 * 200 + *(longlong *)(param_2 + 0xbe);
            FUN_1419cfb10(param_2 + 0xaa,local_44,&local_40,0);
            local_48 = local_48 + 1;
          } while (local_48 < (int)param_2[0xc0]);
        }
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1419dd2b0 FUN_1419dd2b0 body=196 status=ok
// SIG undefined FUN_1419dd2b0(void)

longlong * FUN_1419dd2b0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 1,4);
  }
  return param_1;
}



// FUNCTION 1419dd380 FUN_1419dd380 body=287 status=ok
// SIG undefined FUN_1419dd380(void)

longlong * FUN_1419dd380(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1419dd700();
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 0x24,4);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,param_2 + 0x24,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 0x28,4);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,param_2 + 0x28,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  puVar1 = *(undefined4 **)plVar2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)plVar2[1])[1]) {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
    return plVar2;
  }
  (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 0x20,4);
  if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(plVar2,param_2 + 0x20,4);
  }
  return plVar2;
}



// FUNCTION 1419dd4a0 FUN_1419dd4a0 body=354 status=ok
// SIG undefined FUN_1419dd4a0(void)

longlong * FUN_1419dd4a0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1419dd700();
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x24,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,param_2 + 0x24,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x28,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,param_2 + 0x28,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  puVar2 = *(undefined1 **)plVar3[1];
  if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,(undefined1 *)(param_2 + 0x2c),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x2c) = *puVar2;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,param_2 + 0x2d);
  puVar1 = *(undefined4 **)plVar3[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)plVar3[1])[1]) {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    return plVar3;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x20,4);
  if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(plVar3,param_2 + 0x20,4);
  }
  return plVar3;
}



// FUNCTION 1419dd610 FUN_1419dd610 body=237 status=ok
// SIG undefined FUN_1419dd610(void)

longlong * FUN_1419dd610(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  uint local_res8 [2];
  uint local_res10 [2];
  
  plVar1 = (longlong *)param_1[1];
  local_res10[0] = *param_2 & 7;
  local_res8[0] = *param_2 >> 3 & 0x1f;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1[1];
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = *param_2 & 0xffffff00;
    *param_2 = *param_2 | (local_res8[0] & 0x1f) << 3 | local_res10[0] & 7;
  }
  return param_1;
}



// FUNCTION 1419dd700 FUN_1419dd700 body=680 status=ok
// SIG undefined FUN_1419dd700(void)

longlong * FUN_1419dd700(longlong *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,1);
  }
  else {
    *(undefined1 *)(param_2 + 7) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x1d,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x1d) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 6,4);
    }
  }
  else {
    param_2[6] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 5,4);
    }
  }
  else {
    param_2[5] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,4);
    }
  }
  else {
    param_2[4] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2,4);
  }
  return param_1;
}



// FUNCTION 1419dd9b0 FUN_1419dd9b0 body=410 status=ok
// SIG undefined FUN_1419dd9b0(void)

longlong * FUN_1419dd9b0(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,1);
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,1);
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if (puVar2 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    *(undefined2 *)(param_2 + 6) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,2);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 6,2);
  }
  return param_1;
}



// FUNCTION 1419ddb50 FUN_1419ddb50 body=373 status=ok
// SIG undefined FUN_1419ddb50(void)

longlong * FUN_1419ddb50(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x92492 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1419dbd20(param_1,(longlong)iVar4 * 0x1c + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar2);
        }
        FUN_1419dbd20(param_1,(longlong)iVar2 * 0x1c + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1419ddcd0 FUN_1419ddcd0 body=392 status=ok
// SIG undefined FUN_1419ddcd0(void)

longlong * FUN_1419ddcd0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x1ac,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1ac);
  uVar5 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x991f < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1419dbfd0(param_1,(longlong)(int)uVar5 * 0x1ac + *param_2);
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    FUN_141a0a550(param_2,local_res8[0]);
  }
  uVar7 = uVar5;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      FUN_141a09e50(param_2,iVar2);
    }
    uVar4 = uVar5;
    if ((longlong)iVar2 * 0x1ac + *param_2 != 0) {
      uVar4 = FUN_1419d7270();
    }
    FUN_1419dbfd0(param_1,uVar4);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while ((int)uVar6 < local_res8[0]);
  return param_1;
}



// FUNCTION 1419dde60 FUN_1419dde60 body=392 status=ok
// SIG undefined FUN_1419dde60(void)

longlong * FUN_1419dde60(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 200,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 200);
  uVar5 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x147ae < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1419dc0c0(param_1,(longlong)(int)uVar5 * 200 + *param_2);
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<200,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_2,local_res8[0]);
  }
  uVar7 = uVar5;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      FUN_140ae1ad0(param_2,iVar2);
    }
    uVar4 = uVar5;
    if ((longlong)iVar2 * 200 + *param_2 != 0) {
      uVar4 = FUN_1419d74d0();
    }
    FUN_1419dc0c0(param_1,uVar4);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while ((int)uVar6 < local_res8[0]);
  return param_1;
}



// FUNCTION 1419ddff0 FUN_1419ddff0 body=405 status=ok
// SIG undefined FUN_1419ddff0(void)

longlong * FUN_1419ddff0(longlong *param_1,longlong *param_2)

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
        FUN_1419dc650(param_1,(longlong)(int)puVar6 * 0x20 + *param_2);
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
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 6;
      *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
      puVar5 = puVar4;
    }
    FUN_1419dc650(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1419de190 FUN_1419de190 body=488 status=ok
// SIG undefined FUN_1419de190(void)

longlong * FUN_1419de190(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  void *_Dst;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xde8,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xde8);
  pvVar5 = (void *)0x0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x1268 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1419dc930(param_1,(longlong)(int)pvVar5 * 0xde8 + *param_2);
        uVar6 = (int)pvVar5 + 1;
        pvVar5 = (void *)(ulonglong)uVar6;
      } while ((int)uVar6 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FShaderDrawKey,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  pvVar7 = pvVar5;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FShaderDrawKey,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    _Dst = (void *)((longlong)iVar2 * 0xde8 + *param_2);
    pvVar4 = pvVar5;
    if (_Dst != (void *)0x0) {
      *(undefined1 *)((longlong)_Dst + 0xde0) = 0;
      *(undefined4 *)((longlong)_Dst + 0xde4) = 0;
      _guard_xfg_dispatch_icall_nop(_Dst,0xff,0x180);
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + 0x180),0xff,0xc00);
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + 0xd80),0,0x60);
      pvVar4 = _Dst;
    }
    FUN_1419dc930(param_1,pvVar4);
    uVar6 = (int)pvVar7 + 1;
    pvVar7 = (void *)(ulonglong)uVar6;
  } while ((int)uVar6 < local_res8[0]);
  return param_1;
}



// FUNCTION 1419de380 FUN_1419de380 body=409 status=ok
// SIG undefined FUN_1419de380(void)

longlong * FUN_1419de380(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x155555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1419dd2b0(param_1,*param_2 + (longlong)(int)puVar6 * 0xc);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
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
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0xc);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0xffffffffffffffff;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar5 = puVar1;
    }
    FUN_1419dd2b0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1419de520 FUN_1419de520 body=405 status=ok
// SIG undefined FUN_1419de520(void)

longlong * FUN_1419de520(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x2c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x2c);
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x5d174 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1419dd380(param_1,(longlong)(int)puVar6 * 0x2c + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x2c + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x1c) = 0;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar5 = puVar4;
    }
    FUN_1419dd380(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1419de6c0 FUN_1419de6c0 body=425 status=ok
// SIG undefined FUN_1419de6c0(void)

longlong * FUN_1419de6c0(longlong *param_1,longlong *param_2)

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
        FUN_1419dd4a0(param_1,(longlong)(int)puVar6 * 0x30 + *param_2);
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
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x1c) = 0;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x2c) = 0;
      puVar5 = puVar4;
    }
    FUN_1419dd4a0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1419de870 FUN_1419de870 body=360 status=ok
// SIG undefined FUN_1419de870(void)

longlong * FUN_1419de870(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 0x100) << 3,
             (longlong)*(int *)(param_2 + 0x104) << 3);
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 0x100);
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
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 0x100) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1419dd9b0(param_1,param_2 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_2 + 0x100));
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x100) = 0;
    if (*(int *)(param_2 + 0x104) != local_res8[0]) {
      TArray<FVertexElement,TFixedAllocator<32>_>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < iVar2) {
      do {
        iVar2 = *(int *)(param_2 + 0x100);
        *(int *)(param_2 + 0x100) = iVar2 + 1;
        if (*(int *)(param_2 + 0x104) < iVar2 + 1) {
          TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar2);
        }
        FUN_1419dd9b0(param_1,param_2 + (longlong)iVar2 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
    }
  }
  return param_1;
}



// FUNCTION 1419de9e0 FUN_1419de9e0 body=841 status=ok
// SIG undefined FUN_1419de9e0(void)

longlong * FUN_1419de9e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
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
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
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
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
        }
        else {
          iVar7 = (int)param_2[6];
          iVar9 = *(int *)((longlong)param_2 + 0x34) + -1;
          iVar10 = *(int *)(*param_2 + 4 + (longlong)iVar7 * 0xc);
          *(int *)(param_2 + 6) = iVar10;
          *(int *)((longlong)param_2 + 0x34) = iVar9;
          if (iVar9 != 0) {
            *(undefined4 *)(*param_2 + (longlong)iVar10 * 0xc) = 0xffffffff;
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
        puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar10 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
        lVar4 = *param_2;
        *(undefined4 *)(lVar4 + 4 + (longlong)iVar7 * 0xc) = 0xffffffff;
        puVar3 = (undefined4 *)(lVar4 + (longlong)iVar7 * 0xc);
        puVar5 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar3,4);
          }
        }
        else {
          *puVar3 = *puVar5;
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
      puVar3 = (undefined4 *)(*local_48 + (longlong)local_2c * 0xc);
      puVar5 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,4);
        }
      }
      else {
        *puVar3 = *puVar5;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      local_30 = local_30 & ~local_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  return param_1;
}



// FUNCTION 1419ded30 FUN_1419ded30 body=989 status=ok
// SIG undefined FUN_1419ded30(void)

longlong * FUN_1419ded30(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
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
        puVar2 = *(undefined4 **)param_1[1];
        puVar9 = (undefined4 *)((longlong)local_3c * 0x60 + *local_58);
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar9,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar9,4);
          }
        }
        else {
          *puVar9 = *puVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_1419de9e0(param_1,puVar9 + 2);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          if (*(longlong *)(puVar9 + 0x12) != 0) {
            uVar7 = FMemory::Realloc(*(longlong *)(puVar9 + 0x12),0,0);
            *(undefined8 *)(puVar9 + 0x12) = uVar7;
          }
          puVar9[0x14] = 0;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::ConditionalRehash
                    (puVar9 + 2,puVar9[4] - puVar9[0xf]);
        }
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
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
  TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)((longlong)iVar4 * 0x60 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar6 * 0x60 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      puVar9 = (undefined4 *)((longlong)iVar4 * 0x60 + *param_2);
      *puVar9 = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 10) = 0;
      *(undefined8 *)(puVar9 + 0xc) = 0;
      puVar9[0xe] = 0xffffffff;
      puVar9[0xf] = 0;
      *(undefined8 *)(puVar9 + 0x12) = 0;
      puVar9[0x14] = 0;
      puVar9[0x16] = 0xffffffff;
      puVar2 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar9,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar9,4);
        }
      }
      else {
        *puVar9 = *puVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      FUN_1419de9e0(param_1,puVar9 + 2);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (*(longlong *)(puVar9 + 0x12) != 0) {
          uVar7 = FMemory::Realloc(*(longlong *)(puVar9 + 0x12),0,0);
          *(undefined8 *)(puVar9 + 0x12) = uVar7;
        }
        puVar9[0x14] = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::ConditionalRehash
                  (puVar9 + 2,puVar9[4] - puVar9[0xf],0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1419df110 FUN_1419df110 body=1005 status=ok
// SIG undefined FUN_1419df110(void)

longlong * FUN_1419df110(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
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
        puVar2 = *(undefined4 **)param_1[1];
        puVar9 = (undefined4 *)((longlong)local_3c * 0x60 + *local_58);
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar9,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar9,4);
          }
        }
        else {
          *puVar9 = *puVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_1419ded30(param_1,puVar9 + 2);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          if (*(longlong *)(puVar9 + 0x12) != 0) {
            uVar7 = FMemory::Realloc(*(longlong *)(puVar9 + 0x12),0,0);
            *(undefined8 *)(puVar9 + 0x12) = uVar7;
          }
          puVar9[0x14] = 0;
          TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(puVar9 + 2,puVar9[4] - puVar9[0xf]);
        }
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
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
  TSparseArray<TSetElement<TTuple<unsigned_int,FShaderStreamingCache>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)((longlong)iVar4 * 0x60 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar6 * 0x60 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      puVar9 = (undefined4 *)((longlong)iVar4 * 0x60 + *param_2);
      *puVar9 = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      *(undefined8 *)(puVar9 + 0xe) = 0;
      *(undefined8 *)(puVar9 + 0x10) = 0;
      *(undefined8 *)(puVar9 + 0x14) = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 10) = 0;
      *(undefined8 *)(puVar9 + 0xc) = 0;
      puVar9[0xe] = 0xffffffff;
      puVar9[0xf] = 0;
      *(undefined8 *)(puVar9 + 0x12) = 0;
      puVar9[0x14] = 0;
      puVar9[0x16] = 0xffffffff;
      puVar2 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar9,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar9,4);
        }
      }
      else {
        *puVar9 = *puVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      FUN_1419ded30(param_1,puVar9 + 2);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (*(longlong *)(puVar9 + 0x12) != 0) {
          uVar7 = FMemory::Realloc(*(longlong *)(puVar9 + 0x12),0,0);
          *(undefined8 *)(puVar9 + 0x12) = uVar7;
        }
        puVar9[0x14] = 0;
        TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
        ::ConditionalRehash(puVar9 + 2,puVar9[4] - puVar9[0xf],0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1419df500 FUN_1419df500 body=899 status=ok
// SIG undefined FUN_1419df500(void)

longlong * FUN_1419df500(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  iVar5 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar6 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2);
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
        lVar10 = (longlong)local_3c * 0x40 + *local_58;
        FUN_1419dc650(param_1,lVar10);
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,lVar10 + 0x20,4);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,lVar10 + 0x20,4);
          }
        }
        else {
          *(undefined4 *)(lVar10 + 0x20) = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_140d25120(param_1,lVar10 + 0x28);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar5 = 0;
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
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar6 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar6);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar6 = (int)param_2[6];
        iVar3 = *(int *)((longlong)iVar6 * 0x40 + 4 + *param_2);
        iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar3;
        *(int *)((longlong)param_2 + 0x34) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)((longlong)iVar3 * 0x40 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar7 = iVar6;
      if (iVar6 < 0) {
        iVar7 = iVar6 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
      puVar9 = (undefined8 *)((longlong)iVar6 * 0x40 + *param_2);
      *puVar9 = 0;
      puVar1 = puVar9 + 4;
      puVar9[1] = 0;
      *(undefined4 *)(puVar9 + 2) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x14) = 6;
      *(undefined1 *)((longlong)puVar9 + 0x1c) = 0;
      *puVar1 = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      *(undefined4 *)(puVar9 + 7) = 0xffffffff;
      FUN_1419dc650(param_1);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar1,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar1,4);
        }
      }
      else {
        *(undefined4 *)puVar1 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      FUN_140d25120(param_1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1419df890 FUN_1419df890 body=830 status=ok
// SIG undefined FUN_1419df890(void)

longlong * FUN_1419df890(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x78,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x78);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
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
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar10 = (longlong)local_2c * 0x78 + *local_48;
        FUN_1419dc650(param_1,lVar10);
        FUN_1419e0190(param_1,lVar10 + 0x20);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          if (*(longlong *)(lVar10 + 0x60) != 0) {
            uVar7 = FMemory::Realloc(*(longlong *)(lVar10 + 0x60),0,0);
            *(undefined8 *)(lVar10 + 0x60) = uVar7;
          }
          *(undefined4 *)(lVar10 + 0x68) = 0;
          FUN_1419e6240(lVar10 + 0x20,*(int *)(lVar10 + 0x28) - *(int *)(lVar10 + 0x54));
        }
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
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
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                    (param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)((longlong)iVar4 * 0x78 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar6 * 0x78 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar6 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
      puVar9 = (undefined8 *)((longlong)iVar4 * 0x78 + *param_2);
      *puVar9 = 0;
      puVar1 = puVar9 + 4;
      puVar9[1] = 0;
      *(undefined4 *)(puVar9 + 2) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x14) = 6;
      *(undefined1 *)((longlong)puVar9 + 0x1c) = 0;
      *puVar1 = 0;
      puVar9[5] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      *(undefined4 *)(puVar9 + 10) = 0xffffffff;
      *(undefined4 *)((longlong)puVar9 + 0x54) = 0;
      puVar9[0xc] = 0;
      *(undefined4 *)(puVar9 + 0xd) = 0;
      *(undefined4 *)(puVar9 + 0xe) = 0xffffffff;
      FUN_1419dc650(param_1);
      FUN_1419e0190(param_1,puVar1);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (puVar9[0xc] != 0) {
          uVar7 = FMemory::Realloc(puVar9[0xc],0,0);
          puVar9[0xc] = uVar7;
        }
        *(undefined4 *)(puVar9 + 0xd) = 0;
        FUN_1419e6240(puVar1,*(int *)(puVar9 + 5) - *(int *)((longlong)puVar9 + 0x54),0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1419dfbd0 FUN_1419dfbd0 body=727 status=ok
// SIG undefined FUN_1419dfbd0(void)

longlong * FUN_1419dfbd0(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
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
        lVar8 = (longlong)local_2c * 0x60 + *local_48;
        FUN_141661e90(param_1,lVar8);
        FUN_1419dc710(param_1,lVar8 + 0x18);
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
  TSparseArray<TSetElement<TTuple<FSHAHash,FShaderCodeEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0x60 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0x60 + *param_2) = 0xffffffff;
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
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x60 + *param_2);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = 0;
      *(undefined1 *)((longlong)puVar7 + 0x2c) = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      *(undefined4 *)(puVar7 + 8) = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      *(undefined4 *)(puVar7 + 0xb) = 0xffffffff;
      FUN_141661e90(param_1);
      FUN_1419dc710(param_1,puVar7 + 3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1419dfeb0 FUN_1419dfeb0 body=724 status=ok
// SIG undefined FUN_1419dfeb0(void)

longlong * FUN_1419dfeb0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  void *_Dst;
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
  plVar1 = param_2 + 2;
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
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
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        FUN_1419dc860(param_1,(longlong)local_2c * 0x70 + *local_48);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
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
  iVar4 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar5 = iVar4 + 0x1f + (iVar4 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar6 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar7 = *(int *)((longlong)iVar4 * 0x70 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar7;
        *(int *)((longlong)param_2 + 0x34) = iVar6;
        if (iVar6 != 0) {
          *(undefined4 *)((longlong)iVar7 * 0x70 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      iVar7 = iVar4;
      if (iVar4 < 0) {
        iVar7 = iVar4 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
      _Dst = (void *)((longlong)iVar4 * 0x70 + *param_2);
      _guard_xfg_dispatch_icall_nop(_Dst,0,100);
      *(undefined4 *)((longlong)_Dst + 100) = 0;
      *(undefined4 *)((longlong)_Dst + 0x68) = 0xffffffff;
      FUN_1419dc860(param_1,_Dst);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1419e0190 FUN_1419e0190 body=839 status=ok
// SIG undefined FUN_1419e0190(void)

longlong * FUN_1419e0190(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xac,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xac);
  plVar1 = param_2 + 2;
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar8 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar3 = 0;
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
    iVar4 = local_res8[0];
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<172,4>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    uVar5 = iVar4 + 0x1f + (iVar4 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_2 + 0x2c) != uVar5) {
      *(uint *)((longlong)param_2 + 0x2c) = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
    }
    if (0 < local_res8[0]) {
      do {
        if (*(int *)((longlong)param_2 + 0x34) == 0) {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<172,4>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar4);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
        }
        else {
          iVar4 = (int)param_2[6];
          iVar6 = *(int *)((longlong)param_2 + 0x34) + -1;
          iVar7 = *(int *)((longlong)iVar4 * 0xac + 4 + *param_2);
          *(int *)(param_2 + 6) = iVar7;
          *(int *)((longlong)param_2 + 0x34) = iVar6;
          if (iVar6 != 0) {
            *(undefined4 *)((longlong)iVar7 * 0xac + *param_2) = 0xffffffff;
          }
        }
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar7 = iVar4;
        if (iVar4 < 0) {
          iVar7 = iVar4 + 0x1f;
        }
        puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
        puVar9 = (undefined8 *)((longlong)iVar4 * 0xac + *param_2);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x14) = 6;
        *(undefined1 *)((longlong)puVar9 + 0x1c) = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined4 *)(puVar9 + 6) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x34) = 6;
        *(undefined1 *)((longlong)puVar9 + 0x3c) = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        *(undefined4 *)(puVar9 + 10) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x54) = 6;
        *(undefined1 *)((longlong)puVar9 + 0x5c) = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        *(undefined4 *)(puVar9 + 0xe) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x74) = 6;
        *(undefined1 *)((longlong)puVar9 + 0x7c) = 0;
        puVar9[0x10] = 0;
        puVar9[0x11] = 0;
        *(undefined4 *)(puVar9 + 0x12) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x94) = 6;
        *(undefined1 *)((longlong)puVar9 + 0x9c) = 0;
        *(undefined4 *)(puVar9 + 0x14) = 0;
        *(undefined4 *)((longlong)puVar9 + 0xa4) = 0xffffffff;
        FUN_1419dcc70(param_1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_res8[0]);
    }
    return param_1;
  }
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
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_48,param_2);
  if (local_2c < *(int *)(local_38 + 0x18)) {
    do {
      FUN_1419dcc70(param_1,(longlong)local_2c * 0xac + *local_48);
      local_30 = local_30 & ~local_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  return param_1;
}



// FUNCTION 1419e04e0 FUN_1419e04e0 body=420 status=ok
// SIG undefined FUN_1419e04e0(void)

longlong * FUN_1419e04e0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)(param_2 + 2);
  lVar2 = 8;
  do {
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar3 + -2,1);
    }
    else {
      puVar3[-2] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar3 + -1,1);
    }
    else {
      puVar3[-1] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar3,1);
    }
    else {
      *puVar3 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar3 + 1,1);
    }
    else {
      puVar3[1] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar3 + 2,1);
    }
    else {
      puVar3[2] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar3 + 3,1);
    }
    else {
      puVar3[3] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar3 + 4,1);
    }
    else {
      puVar3[4] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar3 = puVar3 + 7;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 1419e0690 FUN_1419e0690 body=352 status=ok
// SIG undefined FUN_1419e0690(void)

longlong * FUN_1419e0690(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b00e8);
  puVar5 = (undefined *)(param_2 + 0x8c);
  puVar4 = (undefined *)(param_2 + 0x38);
  if (param_1[0xe] != 0) {
    puVar5 = &DAT_1469f5b28;
    puVar4 = &DAT_1469f5b28;
  }
  uVar3 = FUN_141661e90(param_1,param_2);
  uVar3 = FUN_14158ce90(uVar3,param_2 + 0x18);
  uVar3 = FUN_14158ce90(uVar3,param_2 + 0x28);
  uVar3 = FUN_141661e90(uVar3,puVar4);
  uVar3 = FUN_1419e07f0(uVar3,param_2 + 0x50);
  uVar3 = FUN_14158ce90(uVar3,param_2 + 0x78);
  uVar3 = FUN_141661e90(uVar3,puVar5);
  uVar3 = FUN_1419e07f0(uVar3,param_2 + 0xa0);
  FUN_1419dd610(uVar3,param_2 + 200);
  iVar2 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
  if (0x18 < iVar2) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x88,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x88,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x88) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  return param_1;
}



// FUNCTION 1419e07f0 FUN_1419e07f0 body=145 status=ok
// SIG undefined FUN_1419e07f0(void)

undefined8 FUN_1419e07f0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1408bda20();
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 0x10,4);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,param_2 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  FUN_1408bda20(plVar2,param_2 + 0x18);
  return param_1;
}



// FUNCTION 1419e0890 FUN_1419e0890 body=431 status=ok
// SIG undefined FUN_1419e0890(void)

longlong * FUN_1419e0890(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int local_res8 [2];
  int local_res18 [2];
  
  local_res8[0] = 0x10;
  local_res18[0] = DAT_1469f59d4;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_res8[0] = -1;
    local_res18[0] = -1;
  }
  plVar1 = (longlong *)param_1[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((-1 < (char)param_1[5]) && (local_res8[0] == 0x10)) {
    plVar1 = (longlong *)param_1[1];
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if ((-1 < (char)param_1[5]) && (local_res18[0] == DAT_1469f59d4)) {
      FUN_1419df500(param_1,param_2 + 0x38);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (*(longlong *)(param_2 + 0x78) != 0) {
          uVar2 = FMemory::Realloc(*(longlong *)(param_2 + 0x78),0,0);
          *(undefined8 *)(param_2 + 0x78) = uVar2;
        }
        *(undefined4 *)(param_2 + 0x80) = 0;
        FUN_1419e5c10(param_2 + 0x38,*(int *)(param_2 + 0x40) - *(int *)(param_2 + 0x6c),0);
      }
      FUN_1419df890(param_1,param_2 + 0x88);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (*(longlong *)(param_2 + 200) != 0) {
          uVar2 = FMemory::Realloc(*(longlong *)(param_2 + 200),0,0);
          *(undefined8 *)(param_2 + 200) = uVar2;
        }
        *(undefined4 *)(param_2 + 0xd0) = 0;
        FUN_1419e5cc0(param_2 + 0x88,*(int *)(param_2 + 0x90) - *(int *)(param_2 + 0xbc),0);
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1419e0a40 FUN_1419e0a40 body=284 status=ok
// SIG undefined FUN_1419e0a40(void)

longlong * FUN_1419e0a40(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,2);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,2);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2,2);
  }
  return param_1;
}



// FUNCTION 1419e0b60 FUN_1419e0b60 body=190 status=ok
// SIG undefined FUN_1419e0b60(void)

longlong * FUN_1419e0b60(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,2);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 1,2);
  }
  return param_1;
}



// FUNCTION 1419e0c20 FUN_1419e0c20 body=475 status=ok
// SIG undefined FUN_1419e0c20(void)

undefined8 FUN_1419e0c20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  uVar5 = 0;
  FUN_1419db920(param_1,param_2 + 1);
  plVar1 = (longlong *)param_1[1];
  local_res8[0] = *(byte *)(param_2 + 2);
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(uint *)(param_2 + 2) = (uint)local_res8[0];
  }
  puVar4 = (undefined *)((longlong)param_2 + 0x14);
  if (param_1[0xe] != 0) {
    puVar4 = &DAT_1469f5b28;
  }
  FUN_141661e90(param_1,puVar4);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    puVar2 = (undefined8 *)*param_2;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (param_2[1] == 0) {
      uVar5 = 1;
      *param_2 = 0;
    }
    else {
      lVar3 = (**(code **)(param_2[1] + 0x30))((int)param_2[2]);
      *param_2 = lVar3;
    }
  }
  local_res10 = (**(code **)(*param_1 + 0x90))(param_1);
  plVar1 = (longlong *)param_1[1];
  if ((undefined8 *)plVar1[1] < (undefined8 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_res10,8);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_res10,8);
    }
  }
  else {
    local_res10 = *(undefined8 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      (**(code **)(*param_1 + 0xa8))(param_1,local_res10);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    local_res18 = (**(code **)(*param_1 + 0x90))(param_1);
    (**(code **)(*param_1 + 0xa8))(param_1,local_res10);
    plVar1 = (longlong *)param_1[1];
    if ((undefined8 *)plVar1[1] < (undefined8 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_res18,8);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_res18,8);
      }
    }
    else {
      local_res18 = *(undefined8 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    (**(code **)(*param_1 + 0xa8))(param_1,local_res18);
  }
  return uVar5;
}



// FUNCTION 1419e0e00 FUN_1419e0e00 body=520 status=ok
// SIG undefined FUN_1419e0e00(void)

ulonglong FUN_1419e0e00(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 == *(int *)(param_2 + 0x100)) {
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        in_RAX = *(ulonglong *)(param_1 + (longlong)iVar2 * 8);
        if (in_RAX != *(ulonglong *)(param_2 + (longlong)iVar2 * 8)) goto LAB_1419e1005;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    in_RAX = *(ulonglong *)(param_1 + 0x108);
    if ((((((((in_RAX == *(ulonglong *)(param_2 + 0x108)) &&
             (in_RAX = *(ulonglong *)(param_1 + 0x110), in_RAX == *(ulonglong *)(param_2 + 0x110)))
            && (in_RAX = (ulonglong)*(uint *)(param_1 + 0x118),
               *(uint *)(param_1 + 0x118) == *(uint *)(param_2 + 0x118))) &&
           (((in_RAX = (ulonglong)*(uint *)(param_2 + 0x11c),
             *(uint *)(param_1 + 0x11c) == *(uint *)(param_2 + 0x11c) &&
             (in_RAX = 0, *(char *)(param_1 + 0x124) == *(char *)(param_2 + 0x124))) &&
            ((in_RAX = *(ulonglong *)(param_1 + 0x128), in_RAX == *(ulonglong *)(param_2 + 0x128) &&
             ((in_RAX = *(ulonglong *)(param_1 + 0x130), in_RAX == *(ulonglong *)(param_2 + 0x130)
              && (in_RAX = (ulonglong)*(uint *)(param_1 + 0x138),
                 *(uint *)(param_1 + 0x138) == *(uint *)(param_2 + 0x138))))))))) &&
          (in_RAX = (ulonglong)*(uint *)(param_2 + 0x13c),
          *(uint *)(param_1 + 0x13c) == *(uint *)(param_2 + 0x13c))) &&
         (((((in_RAX = 0, *(char *)(param_1 + 0x144) == *(char *)(param_2 + 0x144) &&
             (in_RAX = *(ulonglong *)(param_1 + 0x148), in_RAX == *(ulonglong *)(param_2 + 0x148)))
            && (in_RAX = *(ulonglong *)(param_1 + 0x150), in_RAX == *(ulonglong *)(param_2 + 0x150))
            ) && ((in_RAX = (ulonglong)*(uint *)(param_1 + 0x158),
                  *(uint *)(param_1 + 0x158) == *(uint *)(param_2 + 0x158) &&
                  (in_RAX = (ulonglong)*(uint *)(param_2 + 0x15c),
                  *(uint *)(param_1 + 0x15c) == *(uint *)(param_2 + 0x15c))))) &&
          ((in_RAX = 0, *(char *)(param_1 + 0x164) == *(char *)(param_2 + 0x164) &&
           ((in_RAX = *(ulonglong *)(param_1 + 0x168), in_RAX == *(ulonglong *)(param_2 + 0x168) &&
            (in_RAX = *(ulonglong *)(param_1 + 0x170), in_RAX == *(ulonglong *)(param_2 + 0x170)))))
          )))) && ((in_RAX = (ulonglong)*(uint *)(param_1 + 0x178),
                   *(uint *)(param_1 + 0x178) == *(uint *)(param_2 + 0x178) &&
                   (((in_RAX = (ulonglong)*(uint *)(param_2 + 0x17c),
                     *(uint *)(param_1 + 0x17c) == *(uint *)(param_2 + 0x17c) &&
                     (in_RAX = 0, *(char *)(param_1 + 0x184) == *(char *)(param_2 + 0x184))) &&
                    (in_RAX = *(ulonglong *)(param_1 + 0x188),
                    in_RAX == *(ulonglong *)(param_2 + 0x188))))))) &&
       (((in_RAX = *(ulonglong *)(param_1 + 400), in_RAX == *(ulonglong *)(param_2 + 400) &&
         (in_RAX = (ulonglong)*(uint *)(param_1 + 0x198),
         *(uint *)(param_1 + 0x198) == *(uint *)(param_2 + 0x198))) &&
        ((in_RAX = (ulonglong)*(uint *)(param_2 + 0x19c),
         *(uint *)(param_1 + 0x19c) == *(uint *)(param_2 + 0x19c) &&
         (in_RAX = 0, *(char *)(param_1 + 0x1a4) == *(char *)(param_2 + 0x1a4))))))) {
      return 1;
    }
  }
LAB_1419e1005:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1419e1010 operator== body=373 status=ok
// SIG undefined operator==(void)

ulonglong operator==(uint *param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  
  uVar2 = (ulonglong)*param_2;
  if (((((((*param_1 == *param_2) && (uVar2 = (ulonglong)param_2[1], param_1[1] == param_2[1])) &&
         (uVar2 = 0, (char)param_1[0x2f] == (char)param_2[0x2f])) &&
        ((uVar2 = 0, *(char *)((longlong)param_1 + 0xbd) == *(char *)((longlong)param_2 + 0xbd) &&
         (uVar2 = (ulonglong)param_2[0x2c], param_1[0x2c] == param_2[0x2c])))) &&
       ((uVar2 = (ulonglong)param_2[0x2d], param_1[0x2d] == param_2[0x2d] &&
        ((uVar2 = 0, (char)param_1[0x2e] == (char)param_2[0x2e] &&
         (uVar2 = 0, *(char *)((longlong)param_1 + 0xb9) == *(char *)((longlong)param_2 + 0xb9))))))
       ) && (uVar2 = 0, *(char *)((longlong)param_1 + 0xba) == *(char *)((longlong)param_2 + 0xba)))
     && (uVar2 = 0, *(char *)((longlong)param_1 + 0xbb) == *(char *)((longlong)param_2 + 0xbb))) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x39);
    uVar2 = CONCAT44(extraout_var,iVar1);
    if ((((iVar1 == 0) &&
         (uVar2 = *(ulonglong *)(param_1 + 0x11), uVar2 == *(ulonglong *)(param_2 + 0x11))) &&
        (uVar2 = (ulonglong)param_1[0x13], param_1[0x13] == param_2[0x13])) &&
       (((uVar2 = *(ulonglong *)(param_1 + 0x14), uVar2 == *(ulonglong *)(param_2 + 0x14) &&
         (uVar2 = (ulonglong)param_1[0x16], param_1[0x16] == param_2[0x16])) &&
        (uVar2 = (ulonglong)(ushort)param_1[0x17], (ushort)param_1[0x17] == (ushort)param_2[0x17])))
       ) {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 0x18,param_2 + 0x18,0x20);
      uVar2 = CONCAT44(extraout_var_00,iVar1);
      if (iVar1 == 0) {
        iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 0x20,param_2 + 0x20,0x20);
        uVar2 = CONCAT44(extraout_var_01,iVar1);
        if (((iVar1 == 0) &&
            (uVar2 = *(ulonglong *)(param_1 + 0x28), uVar2 == *(ulonglong *)(param_2 + 0x28))) &&
           (uVar2 = *(ulonglong *)(param_1 + 0x2a), uVar2 == *(ulonglong *)(param_2 + 0x2a))) {
          return CONCAT71((int7)(uVar2 >> 8),1);
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1419e1190 operator== body=148 status=ok
// SIG undefined operator==(void)

ulonglong operator==(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if (((((uVar2 == *param_2) && (uVar2 = param_1[1], uVar2 == param_2[1])) &&
       (uVar2 = (ulonglong)(uint)param_1[2], (uint)param_1[2] == (uint)param_2[2])) &&
      ((((uVar2 = *(ulonglong *)((longlong)param_1 + 0x14),
         uVar2 == *(ulonglong *)((longlong)param_2 + 0x14) &&
         (uVar2 = *(ulonglong *)((longlong)param_1 + 0x1c),
         uVar2 == *(ulonglong *)((longlong)param_2 + 0x1c))) &&
        ((uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x24),
         *(uint *)((longlong)param_1 + 0x24) == *(uint *)((longlong)param_2 + 0x24) &&
         ((uVar2 = param_1[5], uVar2 == param_2[5] && (uVar2 = param_1[6], uVar2 == param_2[6]))))))
       && (uVar2 = (ulonglong)(uint)param_1[7], (uint)param_1[7] == (uint)param_2[7])))) &&
     ((((uVar2 = *(ulonglong *)((longlong)param_1 + 0x3c),
        uVar2 == *(ulonglong *)((longlong)param_2 + 0x3c) &&
        (uVar2 = *(ulonglong *)((longlong)param_1 + 0x44),
        uVar2 == *(ulonglong *)((longlong)param_2 + 0x44))) &&
       (uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x4c),
       *(uint *)((longlong)param_1 + 0x4c) == *(uint *)((longlong)param_2 + 0x4c))) &&
      ((uVar2 = param_1[10], uVar2 == param_2[10] && (uVar2 = param_1[0xb], uVar2 == param_2[0xb])))
      ))) {
    uVar1 = (uint)param_1[0xc];
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == (uint)param_2[0xc]) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1419e1230 operator== body=198 status=ok
// SIG undefined operator==(void)

ulonglong operator==(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(char *)((longlong)param_1 + 0xde0) == *(char *)((longlong)param_2 + 0xde0)) {
    iVar2 = _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)param_1 + 0xd80),(void *)((longlong)param_2 + 0xd80),0x30)
    ;
    uVar1 = DAT_1464c0ae4;
    uVar3 = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      if (0x40 < DAT_1464c0ae4) {
        iVar2 = _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)param_1 + 0xdb0),(void *)((longlong)param_2 + 0xdb0),
                           0x30);
        uVar3 = CONCAT44(extraout_var_00,iVar2);
        if (iVar2 != 0) goto LAB_1419e12e4;
      }
      iVar2 = _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)param_1 + 0x180),(void *)((longlong)param_2 + 0x180),
                         (ulonglong)(uVar1 * 6) << 2);
      uVar3 = CONCAT44(extraout_var_01,iVar2);
      if (iVar2 == 0) {
        iVar2 = _guard_xfg_dispatch_icall_nop(param_1,param_2,0x180);
        uVar3 = CONCAT44(extraout_var_02,iVar2);
        if (iVar2 == 0) {
          return CONCAT71((int7)(uVar3 >> 8),1);
        }
      }
    }
  }
LAB_1419e12e4:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1419e1300 operator== body=315 status=ok
// SIG undefined operator==(void)

ulonglong operator==(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((((((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
          (uVar1 = (ulonglong)(uint)param_1[2], (uint)param_1[2] == (uint)param_2[2])) &&
         (((uVar1 = (ulonglong)*(uint *)((longlong)param_2 + 0x14),
           *(uint *)((longlong)param_1 + 0x14) == *(uint *)((longlong)param_2 + 0x14) &&
           (uVar1 = 0, *(char *)((longlong)param_1 + 0x1c) == *(char *)((longlong)param_2 + 0x1c)))
          && ((uVar1 = param_1[4], uVar1 == param_2[4] &&
              ((uVar1 = param_1[5], uVar1 == param_2[5] &&
               (uVar1 = (ulonglong)(uint)param_1[6], (uint)param_1[6] == (uint)param_2[6])))))))) &&
        (uVar1 = (ulonglong)*(uint *)((longlong)param_2 + 0x34),
        *(uint *)((longlong)param_1 + 0x34) == *(uint *)((longlong)param_2 + 0x34))) &&
       (((((uVar1 = 0, *(char *)((longlong)param_1 + 0x3c) == *(char *)((longlong)param_2 + 0x3c) &&
           (uVar1 = param_1[8], uVar1 == param_2[8])) && (uVar1 = param_1[9], uVar1 == param_2[9]))
         && ((uVar1 = (ulonglong)(uint)param_1[10], (uint)param_1[10] == (uint)param_2[10] &&
             (uVar1 = (ulonglong)*(uint *)((longlong)param_2 + 0x54),
             *(uint *)((longlong)param_1 + 0x54) == *(uint *)((longlong)param_2 + 0x54))))) &&
        ((uVar1 = 0, *(char *)((longlong)param_1 + 0x5c) == *(char *)((longlong)param_2 + 0x5c) &&
         ((uVar1 = param_1[0xc], uVar1 == param_2[0xc] &&
          (uVar1 = param_1[0xd], uVar1 == param_2[0xd])))))))) &&
      ((uVar1 = (ulonglong)(uint)param_1[0xe], (uint)param_1[0xe] == (uint)param_2[0xe] &&
       (((uVar1 = (ulonglong)*(uint *)((longlong)param_2 + 0x74),
         *(uint *)((longlong)param_1 + 0x74) == *(uint *)((longlong)param_2 + 0x74) &&
         (uVar1 = 0, *(char *)((longlong)param_1 + 0x7c) == *(char *)((longlong)param_2 + 0x7c))) &&
        (uVar1 = param_1[0x10], uVar1 == param_2[0x10])))))) &&
     (((uVar1 = param_1[0x11], uVar1 == param_2[0x11] &&
       (uVar1 = (ulonglong)(uint)param_1[0x12], (uint)param_1[0x12] == (uint)param_2[0x12])) &&
      ((uVar1 = (ulonglong)*(uint *)((longlong)param_2 + 0x94),
       *(uint *)((longlong)param_1 + 0x94) == *(uint *)((longlong)param_2 + 0x94) &&
       (uVar1 = 0, *(char *)((longlong)param_1 + 0x9c) == *(char *)((longlong)param_2 + 0x9c)))))))
  {
    return 1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1419e1440 operator== body=72 status=ok
// SIG undefined operator==(void)

uint operator==(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4);
  if (((((*(uint *)(param_1 + 4) == uVar1) &&
        (uVar1 = *(uint *)(param_2 + 8), *(uint *)(param_1 + 8) == uVar1)) &&
       (uVar1 = *(uint *)(param_2 + 0xc), *(uint *)(param_1 + 0xc) == uVar1)) &&
      ((uVar1 = *(uint *)(param_2 + 0x10), *(uint *)(param_1 + 0x10) == uVar1 &&
       (uVar1 = *(uint *)(param_2 + 0x14), *(uint *)(param_1 + 0x14) == uVar1)))) &&
     ((uVar1 = *(uint *)(param_2 + 0x18), *(uint *)(param_1 + 0x18) == uVar1 &&
      ((uVar1 = 0, *(char *)(param_1 + 0x1c) == *(char *)(param_2 + 0x1c) &&
       (uVar1 = 0, *(char *)(param_1 + 0x1d) == *(char *)(param_2 + 0x1d))))))) {
    return 1;
  }
  return uVar1 & 0xffffff00;
}



// FUNCTION 1419e1490 operator== body=232 status=ok
// SIG undefined operator==(void)

ulonglong operator==(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if (((((uVar2 != *param_2) || (uVar2 = param_1[1], uVar2 != param_2[1])) ||
       (uVar2 = (ulonglong)(uint)param_1[2], (uint)param_1[2] != (uint)param_2[2])) ||
      ((uVar2 = param_2[3], param_1[3] != uVar2 || (uVar2 = param_2[4], param_1[4] != uVar2)))) ||
     ((uVar2 = param_1[5], uVar2 != param_2[5] ||
      ((uVar2 = param_1[6], uVar2 != param_2[6] ||
       (uVar2 = (ulonglong)(uint)param_1[7], (uint)param_1[7] != (uint)param_2[7]))))))
  goto LAB_1419e14fc;
  if (param_1[8] == 0) {
    if (param_2[8] != 0) goto LAB_1419e14fc;
  }
  else {
    if (param_2[8] == 0) goto LAB_1419e14fc;
    uVar2 = FSerializationHistory::operator==();
    if ((char)uVar2 == '\0') goto LAB_1419e14fc;
  }
  uVar2 = param_2[9];
  if ((((param_1[9] == uVar2) &&
       (uVar2 = (ulonglong)(uint)param_2[10], (uint)param_1[10] == (uint)param_2[10])) &&
      (uVar2 = *(ulonglong *)((longlong)param_1 + 0x54),
      uVar2 == *(ulonglong *)((longlong)param_2 + 0x54))) &&
     ((uVar2 = *(ulonglong *)((longlong)param_1 + 0x5c),
      uVar2 == *(ulonglong *)((longlong)param_2 + 0x5c) &&
      (uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 100),
      *(uint *)((longlong)param_1 + 100) == *(uint *)((longlong)param_2 + 100))))) {
    uVar2 = FSerializationHistory::operator==(param_1[0xd],param_2[0xd]);
    if ((char)uVar2 != '\0') {
      uVar1 = (uint)param_2[0xe] ^ (uint)param_1[0xe];
      uVar2 = (ulonglong)uVar1;
      if (((uVar1 & 7) == 0) && ((((uint)param_2[0xe] ^ (uint)param_1[0xe]) & 0xf8) == 0)) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
LAB_1419e14fc:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1419e1580 operator== body=113 status=ok
// SIG undefined operator==(void)

ulonglong operator==(uint *param_1,uint *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  longlong lVar5;
  short *psVar4;
  
  uVar3 = *param_2 ^ *param_1;
  psVar4 = (short *)(ulonglong)uVar3;
  if ((((((uVar3 & 7) == 0) && (((*param_2 ^ *param_1) & 0xf8) == 0)) &&
       (psVar4 = *(short **)(param_1 + 1), psVar4 == *(short **)(param_2 + 1))) &&
      ((psVar4 = *(short **)(param_1 + 3), psVar4 == *(short **)(param_2 + 3) &&
       (psVar4 = (short *)(ulonglong)param_1[5], param_1[5] == param_2[5])))) &&
     (psVar4 = (short *)(ulonglong)param_2[0xc], param_1[0xc] == param_2[0xc])) {
    psVar4 = *(short **)(param_1 + 6);
    if ((psVar4 != (short *)0x0) || (*(longlong *)(param_2 + 6) != 0)) {
      lVar5 = *(longlong *)(param_2 + 6) - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar5);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) goto LAB_1419e15ee;
    }
    return CONCAT71((int7)((ulonglong)psVar4 >> 8),1);
  }
LAB_1419e15ee:
  return (ulonglong)psVar4 & 0xffffffffffffff00;
}



// FUNCTION 1419e1600 operator== body=114 status=ok
// SIG undefined operator==(void)

ulonglong FSerializationHistory::operator==(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 1);
  if (*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) {
    iVar1 = ::_guard_xfg_dispatch_icall_nop((void *)*param_1,(void *)*param_2,uVar2 << 2);
    uVar2 = CONCAT44(extraout_var,iVar1);
    if (((iVar1 == 0) &&
        (uVar2 = (ulonglong)*(uint *)(param_2 + 2), *(uint *)(param_1 + 2) == *(uint *)(param_2 + 2)
        )) && (uVar2 = (ulonglong)*(int *)(param_1 + 4),
              *(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
      iVar1 = ::_guard_xfg_dispatch_icall_nop((void *)param_1[3],(void *)param_2[3],uVar2 << 2);
      uVar2 = CONCAT44(extraout_var_00,iVar1);
      if (iVar1 == 0) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1419e1720 operator* body=28 status=ok
// SIG undefined operator*(void)

undefined8
FShaderCodeLibraryImpl::FShaderCodeLibraryIterator::operator*(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  return param_2;
}



// FUNCTION 1419e1740 operator++ body=35 status=ok
// SIG undefined operator++(void)

longlong FShaderCacheLibrary::FShaderCacheLibraryIterator::operator++(longlong param_1)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & ~*(uint *)(param_1 + 0x2c);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
  return param_1;
}



// FUNCTION 1419e1770 operator++ body=35 status=ok
// SIG undefined operator++(void)

longlong FShaderCodeArchive::FShaderCodeLibraryIterator::operator++(longlong param_1)

{
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & ~*(uint *)(param_1 + 0x34);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
  return param_1;
}



// FUNCTION 1419e17a0 operator++ body=136 status=ok
// SIG undefined operator++(void)

longlong FShaderCodeLibraryImpl::FShaderCodeLibraryIterator::operator++(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))();
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
  if (cVar3 == '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    *piVar1 = *piVar1 + 1;
    if ((-1 < *piVar1) && (*(int *)(param_1 + 0x38) < (int)(*(longlong **)(param_1 + 0x30))[1])) {
      plVar2 = *(longlong **)
                (**(longlong **)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x38) * 8);
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      TRefCountPtr<FRHIIndexBuffer>::operator=
                (param_1 + 0x18,
                 *(undefined8 *)
                  (**(longlong **)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x38) * 8));
    }
  }
  return param_1;
}



// FUNCTION 1419e1830 operator() body=393 status=ok
// SIG undefined operator()(void)

void <lambda_45e7de7f1b75a8ceba72ef3f8146f214>::operator()(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  PSRWLOCK SRWLock;
  undefined1 local_res18 [8];
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  longlong local_28 [2];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (DAT_1469f59d8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(DAT_1469f59d8 + 0xcc0);
  }
  if ((DAT_1469f59f0 == 0) || (DAT_1469f59f4 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((DAT_1469f59f0 != 0) && ((int)param_1[7] != 0)) {
    SRWLock = (PSRWLOCK)(*param_1 + 0xca0);
    AcquireSRWLockShared(SRWLock);
    lVar1 = *(longlong *)(*param_1 + 0x660);
    if ((lVar1 == 0) ||
       (piVar3 = (int *)TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
                        ::FindId(lVar1 + 0x38,local_res18,param_1 + 1), *piVar3 != -1)) {
      ReleaseSRWLockShared(SRWLock);
    }
    else {
      ReleaseSRWLockShared(SRWLock);
      AcquireSRWLockExclusive(SRWLock);
      FUN_1419e35b0(lVar1,*(undefined1 *)((longlong)param_1 + 0x1c),param_1 + 1,param_1 + 6,
                    CONCAT44(uVar5,(int)param_1[5]));
      bVar2 = true;
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if (((*(byte *)(DAT_1469f59d8 + 0xbd0) & 1) == 0) && (bVar2)) {
    if (((int)param_1[7] == 0) || ((int)param_1[7] == (int)param_1[5])) {
      FUN_1419fdb30(*param_1,param_1 + 1,param_1 + 6,0,uVar4);
    }
    else {
      local_28[0] = 0;
      local_28[1] = 0;
      FShaderCacheHelperUncompressCode((int)param_1[5],param_1 + 6,local_28);
      FUN_1419fdb30(*param_1,param_1 + 1,local_28,0,uVar4);
      if (local_28[0] != 0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1419e19d0 FUN_1419e19d0 body=70 status=ok
// SIG undefined FUN_1419e19d0(void)

undefined8 * FUN_1419e19d0(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = &PTR_FUN_144d8e2e8;
  LOCK();
  *(undefined8 *)(param_1[2] + 0x168) = 0;
  UNLOCK();
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1419e1a20 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_75adb8cf8ab57e2f39d397b682af3181>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1419e1ab0 FUN_1419e1ab0 body=97 status=ok
// SIG undefined FUN_1419e1ab0(void)

undefined8 * FUN_1419e1ab0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144d8e5d8;
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1419e1b20 `scalar_deleting_destructor' body=208 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong *
FPipelineCacheFileFormatPSORead::_scalar_deleting_destructor_(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar5 = (longlong *)param_1[7];
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
  plVar5 = (longlong *)param_1[5];
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
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1419e1bf0 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRHIShaderLibrary::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d8df20;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1419e1c50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FShaderCache::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1419d9d20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd20);
  }
  return param_1;
}



// FUNCTION 1419e1c90 `scalar_deleting_destructor' body=257 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShaderCacheLibrary::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d8e280;
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x11,0);
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 7,0);
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144d8df20;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1419e1da0 FUN_1419e1da0 body=107 status=ok
// SIG undefined FUN_1419e1da0(void)

undefined8 * FUN_1419e1da0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0xb) != '\0') && (*(char *)((longlong)param_1 + 0x59) != '\0')) {
    lVar1 = param_1[10];
    FUN_1419e5c10(lVar1,*(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34),1);
  }
  *param_1 = &PTR__scalar_deleting_destructor__144d8df00;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1419e1e10 `scalar_deleting_destructor' body=240 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FShaderCodeArchive::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d8e338;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FSHAHash,FShaderCodeEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x10,0);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144d8df20;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1419e1f00 `scalar_deleting_destructor' body=107 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShaderCodeArchive::FShaderCodeLibraryIterator::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0xc) != '\0') && (*(char *)((longlong)param_1 + 0x61) != '\0')) {
    lVar1 = param_1[0xb];
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::ConditionalRehash(lVar1,*(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34),1);
  }
  *param_1 = &PTR__scalar_deleting_destructor__144d8df00;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1419e1f70 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShaderCodeLibraryImpl::FShaderCodeLibraryIterator::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  if (*(int *)(param_1 + 5) == 0) {
    ReleaseSRWLockShared((PSRWLOCK)param_1[4]);
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[4]);
  }
  *param_1 = &PTR__scalar_deleting_destructor__144d8df00;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1419e1fe0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRHIShaderLibrary::FShaderLibraryIterator::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d8df00;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1419e2030 FUN_1419e2030 body=52 status=ok
// SIG undefined FUN_1419e2030(void)

undefined8 FUN_1419e2030(undefined8 param_1,ulonglong param_2)

{
  FUN_1419da360();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 1419e2070 FUN_1419e2070 body=77 status=ok
// SIG undefined FUN_1419e2070(void)

undefined8 * FUN_1419e2070(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d8e3d0;
  FUN_1419d8b10(param_1 + 0x12);
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1419e20c0 `scalar_deleting_destructor' body=166 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FShaderResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d8df80;
  param_1[6] = &PTR_LAB_144d8dfc0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0xc);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  param_1[6] = &PTR_FUN_1440780a8;
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1419e2170 FUN_1419e2170 body=88 status=ok
// SIG undefined FUN_1419e2170(void)

undefined8 * FUN_1419e2170(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144d8dfd8;
  (**(code **)(*(longlong *)param_1[0x12] + 0xa8))((longlong *)param_1[0x12],param_1[0x16]);
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1419e21d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FShaderType::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FShaderType();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 1419e2210 FUN_1419e2210 body=56 status=ok
// SIG undefined FUN_1419e2210(void)

undefined8 * FUN_1419e2210(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d8e2e8;
  LOCK();
  *(undefined8 *)(param_1[1] + 0x168) = 0;
  UNLOCK();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1419e2250 `scalar_deleting_destructor' body=243 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVertexFactoryType::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d8e1c8;
  if (param_1[10] != 0) {
    *(undefined8 *)(param_1[10] + 8) = param_1[0xb];
  }
  if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xb] = param_1[10];
  }
  param_1[10] = 0;
  plVar2 = param_1 + 0x36;
  param_1[0xb] = 0;
  lVar3 = 6;
  do {
    plVar1 = plVar2 + -2;
    plVar2 = plVar2 + -5;
    lVar3 = lVar3 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xd,0);
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 1419e2350 FUN_1419e2350 body=38 status=ok
// SIG undefined FUN_1419e2350(void)

void FUN_1419e2350(longlong *param_1)

{
  FUN_141a10490(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0001419e2372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



// FUNCTION 1419e2380 FUN_1419e2380 body=372 status=ok
// SIG undefined FUN_1419e2380(void)

undefined1 * FUN_1419e2380(longlong param_1,undefined1 *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char cVar9;
  longlong lVar10;
  ushort uStack_50;
  undefined6 uStack_46;
  
  lVar5 = *param_3;
  bVar2 = *(byte *)((longlong)param_3 + 0xf);
  lVar6 = param_3[1];
  uStack_50 = (ushort)*(byte *)((longlong)param_3 + 0xd);
  if ((*(char *)(param_1 + 0x33a) == '\0') && ((byte)(param_4 - 0x10U) < 4)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  uVar3 = *(undefined1 *)((longlong)param_3 + 0xe);
  plVar1 = (longlong *)(param_1 + 0x340);
  uVar4 = *(uint *)(param_1 + 0x640);
  lVar10 = (longlong)(int)uVar4;
  plVar7 = plVar1;
  do {
    if (plVar7 == plVar1 + lVar10 * 3) {
LAB_1419e2471:
      *(uint *)(param_1 + 0x640) = uVar4 + 1;
      if (*(int *)(param_1 + 0x644) < (int)(uVar4 + 1)) {
        TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(plVar1,uVar4);
      }
      uVar8 = (ulonglong)uVar4;
      plVar1[lVar10 * 3] = lVar5;
      (plVar1 + lVar10 * 3)[1] = CONCAT44((int)lVar6,(uint)uStack_50);
      plVar1[lVar10 * 3 + 2] = CONCAT62(uStack_46,CONCAT11(cVar9,bVar2));
LAB_1419e24b0:
      param_2[1] = *(undefined1 *)((longlong)param_3 + 0xc);
      *param_2 = (char)uVar8;
      param_2[2] = uVar3;
      *(ushort *)(param_2 + 4) = uStack_50;
      *(ushort *)(param_2 + 6) = (ushort)(bVar2 & 1);
      param_2[3] = param_4;
      return param_2;
    }
    if ((((*(char *)((longlong)plVar7 + 0x11) == '\0') && (cVar9 == '\0')) && (*plVar7 == lVar5)) &&
       (((*(uint *)(plVar7 + 1) == (uint)*(byte *)((longlong)param_3 + 0xd) &&
         (*(int *)((longlong)plVar7 + 0xc) == (int)lVar6)) && (*(byte *)(plVar7 + 2) == bVar2)))) {
      uVar8 = ((longlong)plVar7 - (longlong)plVar1) / 0x18;
      if ((int)uVar8 != -1) goto LAB_1419e24b0;
      goto LAB_1419e2471;
    }
    plVar7 = plVar7 + 3;
  } while( true );
}



// FUNCTION 1419e2500 FUN_1419e2500 body=370 status=ok
// SIG undefined FUN_1419e2500(void)

undefined1 * FUN_1419e2500(longlong param_1,undefined1 *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char cVar9;
  longlong lVar10;
  ushort uStack_50;
  undefined6 uStack_46;
  
  lVar5 = *param_3;
  bVar2 = *(byte *)((longlong)param_3 + 0xf);
  lVar6 = param_3[1];
  uStack_50 = (ushort)*(byte *)((longlong)param_3 + 0xd);
  if ((*(char *)(param_1 + 0x33a) == '\0') && ((byte)(param_4 - 0x10U) < 4)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  uVar3 = *(undefined1 *)((longlong)param_3 + 0xe);
  plVar1 = (longlong *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x330);
  lVar10 = (longlong)(int)uVar4;
  plVar7 = plVar1;
  do {
    if (plVar7 == plVar1 + lVar10 * 3) {
LAB_1419e25ef:
      *(uint *)(param_1 + 0x330) = uVar4 + 1;
      if (*(int *)(param_1 + 0x334) < (int)(uVar4 + 1)) {
        TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(plVar1,uVar4);
      }
      uVar8 = (ulonglong)uVar4;
      plVar1[lVar10 * 3] = lVar5;
      (plVar1 + lVar10 * 3)[1] = CONCAT44((int)lVar6,(uint)uStack_50);
      plVar1[lVar10 * 3 + 2] = CONCAT62(uStack_46,CONCAT11(cVar9,bVar2));
LAB_1419e262e:
      param_2[1] = *(undefined1 *)((longlong)param_3 + 0xc);
      *param_2 = (char)uVar8;
      param_2[2] = uVar3;
      *(ushort *)(param_2 + 4) = uStack_50;
      *(ushort *)(param_2 + 6) = (ushort)(bVar2 & 1);
      param_2[3] = param_4;
      return param_2;
    }
    if ((((*(char *)((longlong)plVar7 + 0x11) == '\0') && (cVar9 == '\0')) && (*plVar7 == lVar5)) &&
       (((*(uint *)(plVar7 + 1) == (uint)*(byte *)((longlong)param_3 + 0xd) &&
         (*(int *)((longlong)plVar7 + 0xc) == (int)lVar6)) && (*(byte *)(plVar7 + 2) == bVar2)))) {
      uVar8 = ((longlong)plVar7 - (longlong)plVar1) / 0x18;
      if ((int)uVar8 != -1) goto LAB_1419e262e;
      goto LAB_1419e25ef;
    }
    plVar7 = plVar7 + 3;
  } while( true );
}



// FUNCTION 1419e2680 FUN_1419e2680 body=199 status=ok
// SIG undefined FUN_1419e2680(void)

int FUN_1419e2680(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined1 local_res18 [16];
  undefined8 local_28;
  int *local_20;
  
  TSet<TTuple<FShaderCacheGraphicsPipelineState,int>,TDefaultMapKeyFuncs<FShaderCacheGraphicsPipelineState,int,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  piVar1 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar1 = (int *)((longlong)local_res8[0] * 0xd4 + *param_1);
  }
  piVar2 = piVar1 + 0x32;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 == (int *)0x0) {
    local_res8[0] = (int)param_1[0xb];
    lVar3 = (longlong)local_res8[0];
    *(int *)(param_1 + 0xb) = local_res8[0] + 1;
    if (*(int *)((longlong)param_1 + 0x5c) < local_res8[0] + 1) {
      FUN_140ae1ad0(param_1 + 10,local_res8[0]);
    }
    FShaderCacheGraphicsPipelineState::FShaderCacheGraphicsPipelineState
              (lVar3 * 200 + param_1[10],param_2);
    local_20 = local_res8;
    local_28 = param_2;
    FUN_1419cfb10(param_1,local_res18,&local_28,0);
    return local_res8[0];
  }
  return *piVar2;
}



// FUNCTION 1419e2750 FUN_1419e2750 body=202 status=ok
// SIG undefined FUN_1419e2750(void)

int FUN_1419e2750(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int local_res8 [2];
  undefined1 local_res18 [16];
  undefined4 *local_28;
  int *local_20;
  
  TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  piVar6 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar6 = (int *)((longlong)local_res8[0] * 0x2c + *param_1);
  }
  piVar7 = piVar6 + 8;
  if (piVar6 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 == (int *)0x0) {
    local_res8[0] = (int)param_1[0xb];
    lVar8 = (longlong)local_res8[0];
    *(int *)(param_1 + 0xb) = local_res8[0] + 1;
    if (*(int *)((longlong)param_1 + 0x5c) < local_res8[0] + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 10,local_res8[0]);
    }
    lVar2 = param_1[10];
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = (undefined4 *)(lVar8 * 0x20 + lVar2);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    puVar1 = (undefined4 *)(lVar8 * 0x20 + 0x10 + lVar2);
    *puVar1 = param_2[4];
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    local_20 = local_res8;
    local_28 = param_2;
    FUN_1419d01d0(param_1,local_res18,&local_28,0);
    return local_res8[0];
  }
  return *piVar7;
}



// FUNCTION 1419e2820 FUN_1419e2820 body=254 status=ok
// SIG undefined FUN_1419e2820(void)

int FUN_1419e2820(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined1 local_res18 [16];
  undefined4 *local_28;
  int *local_20;
  
  TSet<TTuple<FShaderRenderTargetKey,int>,TDefaultMapKeyFuncs<FShaderRenderTargetKey,int,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  piVar1 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar1 = (int *)((longlong)local_res8[0] * 0x38 + *param_1);
  }
  piVar2 = piVar1 + 0xb;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 == (int *)0x0) {
    local_res8[0] = (int)param_1[0xb];
    lVar4 = (longlong)local_res8[0];
    *(int *)(param_1 + 0xb) = local_res8[0] + 1;
    if (*(int *)((longlong)param_1 + 0x5c) < local_res8[0] + 1) {
      TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
                (param_1 + 10,local_res8[0]);
    }
    puVar3 = (undefined4 *)(lVar4 * 0x2c + param_1[10]);
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    puVar3[2] = param_2[2];
    puVar3[3] = param_2[3];
    puVar3[4] = param_2[4];
    puVar3[5] = param_2[5];
    puVar3[6] = param_2[6];
    *(undefined1 *)(puVar3 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)((longlong)puVar3 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    puVar3[8] = param_2[8];
    puVar3[9] = param_2[9];
    puVar3[10] = param_2[10];
    local_20 = local_res8;
    local_28 = param_2;
    FUN_1419d1220(param_1,local_res18,&local_28,0);
    return local_res8[0];
  }
  return *piVar2;
}



// FUNCTION 1419e2920 FUN_1419e2920 body=279 status=ok
// SIG undefined FUN_1419e2920(void)

int FUN_1419e2920(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined1 local_res18 [16];
  undefined4 *local_28;
  int *local_20;
  
  TSet<TTuple<FShaderResourceKey,int>,TDefaultMapKeyFuncs<FShaderResourceKey,int,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  piVar1 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar1 = (int *)((longlong)local_res8[0] * 0x3c + *param_1);
  }
  piVar2 = piVar1 + 0xc;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 == (int *)0x0) {
    local_res8[0] = (int)param_1[0xb];
    lVar4 = (longlong)local_res8[0];
    *(int *)(param_1 + 0xb) = local_res8[0] + 1;
    if (*(int *)((longlong)param_1 + 0x5c) < local_res8[0] + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 10,local_res8[0]);
    }
    puVar3 = (undefined4 *)(lVar4 * 0x30 + param_1[10]);
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    puVar3[2] = param_2[2];
    puVar3[3] = param_2[3];
    puVar3[4] = param_2[4];
    puVar3[5] = param_2[5];
    puVar3[6] = param_2[6];
    *(undefined1 *)(puVar3 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)((longlong)puVar3 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    puVar3[8] = param_2[8];
    puVar3[9] = param_2[9];
    puVar3[10] = param_2[10];
    *(undefined1 *)(puVar3 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)((longlong)puVar3 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
    local_20 = local_res8;
    local_28 = param_2;
    FUN_1419d1790(param_1,local_res18,&local_28,0);
    return local_res8[0];
  }
  return *piVar2;
}



// FUNCTION 1419e2a40 FUN_1419e2a40 body=7 status=ok
// SIG undefined FUN_1419e2a40(void)

void FUN_1419e2a40(longlong param_1)

{
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  return;
}



// FUNCTION 1419e2a50 FUN_1419e2a50 body=1450 status=ok
// SIG undefined FUN_1419e2a50(void)

void FUN_1419e2a50(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  longlong lVar13;
  void **ppvVar14;
  int iVar15;
  int local_res8 [2];
  longlong *local_res10;
  longlong local_108;
  ulonglong local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  void **ppvStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  void **local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  void *local_88;
  int local_80;
  short *local_78;
  int local_70;
  longlong *local_68;
  longlong *plStack_60;
  void **ppvStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    FUN_1419e4da0(param_1 + 0xe0);
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  iVar15 = 0;
  local_c8 = (longlong *)(param_1 + 0xe0);
  local_f8 = (void *)0x0;
  iVar10 = *(int *)(param_1 + 0x108);
  ppvStack_e0 = (void **)(param_1 + 0xf0);
  iVar12 = 0;
  local_f0 = (ulonglong)(uint)local_f0;
  local_e8 = (longlong *)0x100000000;
  iStack_d4 = 0;
  iStack_d0 = 0;
  if (iVar10 != 0) {
    ppvVar14 = *(void ***)(param_1 + 0x100);
    if (*(void ***)(param_1 + 0x100) == (void **)0x0) {
      ppvVar14 = ppvStack_e0;
    }
    uVar6 = *(uint *)ppvVar14;
    iVar7 = iVar15;
    iStack_d0 = iVar15;
    while (uVar6 == 0) {
      iStack_d0 = iStack_d0 + 0x20;
      uVar3 = (ulonglong)local_e8 >> 0x20;
      local_e8 = (longlong *)CONCAT44((int)uVar3,iVar7 + 1);
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1419e2b64;
      uVar6 = *(uint *)((longlong)ppvVar14 + ((longlong)iVar7 + 1) * 4);
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_e8 = (longlong *)CONCAT44(uVar6,SUB84(local_e8,0));
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_d4 = (iStack_d0 - iVar7) + 0x1f;
    if (iVar10 < iStack_d4) {
LAB_1419e2b64:
      iStack_d4 = iVar10;
    }
  }
  local_d8 = 0xffffffff;
  uStack_b0 = CONCAT44(iStack_d4,0xffffffff);
  auStack_50._8_4_ = iStack_d0;
  auStack_50._0_8_ = uStack_b0;
  auStack_50._12_4_ = uStack_cc;
  plStack_60 = local_e8;
  local_90 = 0;
  local_40._0_4_ = SUB84(local_c8,0);
  local_40._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
  uStack_c0 = local_e8;
  local_a8._8_4_ = (undefined4)local_40;
  local_a8._0_8_ = auStack_50._8_8_;
  local_a8._12_4_ = local_40._4_4_;
  local_b8 = ppvStack_e0;
  local_98 = local_c8;
  local_68 = local_c8;
  ppvStack_58 = ppvStack_e0;
  local_40 = local_c8;
  if (iStack_d4 < *(int *)(param_1 + 0x108)) {
    local_e8 = &local_108;
    iVar10 = iStack_d4;
    iVar12 = iVar15;
    do {
      plVar5 = local_c8;
      lVar13 = (longlong)iVar10 * 0x20;
      FString::PrintfImpl(&local_88,L"#include \"/Engine/Generated/UniformBuffers/%s.ush\"\r\n",
                          *(undefined8 *)(*local_c8 + lVar13));
      pvVar4 = local_88;
      if (local_80 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_80 + -1;
      }
      if (iVar10 != 0) {
        iVar15 = iVar12 + (uint)(iVar12 == 0) + iVar10;
        local_f0 = CONCAT44(local_f0._4_4_,iVar15);
        if (local_f0._4_4_ < iVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar12);
          iVar15 = (uint)local_f0;
        }
        pvVar1 = (void *)((longlong)local_f8 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
        iVar12 = iVar15;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      FString::PrintfImpl(&local_78,L"/Engine/Generated/UniformBuffers/%s.ush",
                          *(undefined8 *)(*plVar5 + lVar13));
      local_100 = 0;
      psVar11 = &DAT_143f3eda8;
      if (local_70 != 0) {
        psVar11 = local_78;
      }
      local_108 = 0;
      if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
        lVar8 = -1;
        do {
          lVar2 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (psVar11[lVar2] != 0);
        uVar6 = (int)lVar8 + 1;
        local_100 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
        }
        FGenericPlatformString::Memcpy(local_108,psVar11,(longlong)(int)uVar6 * 2);
      }
      ppvStack_e0 = (void **)(*plVar5 + 8 + lVar13);
      TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
                (param_2 + 0x60,local_res8,&local_e8,0);
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (local_78 != (short *)0x0) {
        FMemory::Free();
      }
      puVar9 = (undefined8 *)FUniformBufferStruct::GetStructList();
      for (puVar9 = (undefined8 *)*puVar9; puVar9 != (undefined8 *)0x0;
          puVar9 = (undefined8 *)*puVar9) {
        if (*(longlong *)(lVar13 + *plVar5) == *(longlong *)(puVar9[2] + 0x10)) {
          FUniformBufferStruct::AddResourceTableEntries(puVar9[2],param_2 + 0x110,param_2 + 0x160);
        }
      }
      uStack_c0._4_4_ = (uint)((ulonglong)uStack_c0 >> 0x20);
      uStack_b0._4_4_ = (int)((ulonglong)uStack_b0 >> 0x20);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iVar10 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)*(uint *)(local_b8 + 3));
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<wchar_t_const_*,FCachedUniformBufferDeclaration>,TDefaultMapHashableKeyFuncs<wchar_t_const_*,FCachedUniformBufferDeclaration,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  pvVar4 = local_f8;
  local_108 = 0;
  local_100 = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_108,0x2e,"/Engine/Generated/GeneratedUniformBuffers.ush",0x2e,0x3f);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_2 + 0x10,local_res8,&local_108);
  if ((local_res8[0] == -1) ||
     (lVar13 = *(longlong *)(param_2 + 0x10) + (longlong)local_res8[0] * 0x28, lVar13 == 0)) {
    local_res10 = &local_108;
    FUN_141686d30(param_2 + 0x10,local_res8,&local_res10,0);
    lVar13 = *(longlong *)(param_2 + 0x10) + (longlong)local_res8[0] * 0x28;
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if ((iVar12 != 0) && (iVar12 = iVar12 + -1, iVar12 != 0)) {
    iVar10 = *(int *)(lVar13 + 0x18);
    iVar15 = (uint)(iVar10 == 0) + iVar10 + iVar12;
    *(int *)(lVar13 + 0x18) = iVar15;
    if (*(int *)(lVar13 + 0x1c) < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar13 + 0x10,iVar10);
    }
    pvVar1 = (void *)(*(longlong *)(lVar13 + 0x10) +
                     ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
  }
  iVar10 = FUN_1419ef5f0(param_4);
  if (1 < iVar10) {
    local_f8 = (void *)0x0;
    local_f0 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,&DAT_144d878ac,4);
    local_108 = 0;
    local_100 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"PLATFORM_SUPPORTS_SRV_UB",0x32);
    local_e8 = &local_108;
    ppvStack_e0 = &local_f8;
    FUN_140497620(param_2 + 0x200,local_res8,&local_e8,0);
    if (local_108 != 0) {
      FMemory::Free();
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  return;
}



// FUNCTION 1419e3000 FUN_1419e3000 body=1450 status=ok
// SIG undefined FUN_1419e3000(void)

void FUN_1419e3000(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  longlong lVar13;
  void **ppvVar14;
  int iVar15;
  int local_res8 [2];
  longlong *local_res10;
  longlong local_108;
  ulonglong local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  void **ppvStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  void **local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  void *local_88;
  int local_80;
  short *local_78;
  int local_70;
  longlong *local_68;
  longlong *plStack_60;
  void **ppvStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    FUN_1419e4da0(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  iVar15 = 0;
  local_c8 = (longlong *)(param_1 + 0x68);
  local_f8 = (void *)0x0;
  iVar10 = *(int *)(param_1 + 0x90);
  ppvStack_e0 = (void **)(param_1 + 0x78);
  iVar12 = 0;
  local_f0 = (ulonglong)(uint)local_f0;
  local_e8 = (longlong *)0x100000000;
  iStack_d4 = 0;
  iStack_d0 = 0;
  if (iVar10 != 0) {
    ppvVar14 = *(void ***)(param_1 + 0x88);
    if (*(void ***)(param_1 + 0x88) == (void **)0x0) {
      ppvVar14 = ppvStack_e0;
    }
    uVar6 = *(uint *)ppvVar14;
    iVar7 = iVar15;
    iStack_d0 = iVar15;
    while (uVar6 == 0) {
      iStack_d0 = iStack_d0 + 0x20;
      uVar3 = (ulonglong)local_e8 >> 0x20;
      local_e8 = (longlong *)CONCAT44((int)uVar3,iVar7 + 1);
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1419e3114;
      uVar6 = *(uint *)((longlong)ppvVar14 + ((longlong)iVar7 + 1) * 4);
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_e8 = (longlong *)CONCAT44(uVar6,SUB84(local_e8,0));
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_d4 = (iStack_d0 - iVar7) + 0x1f;
    if (iVar10 < iStack_d4) {
LAB_1419e3114:
      iStack_d4 = iVar10;
    }
  }
  local_d8 = 0xffffffff;
  uStack_b0 = CONCAT44(iStack_d4,0xffffffff);
  auStack_50._8_4_ = iStack_d0;
  auStack_50._0_8_ = uStack_b0;
  auStack_50._12_4_ = uStack_cc;
  plStack_60 = local_e8;
  local_90 = 0;
  local_40._0_4_ = SUB84(local_c8,0);
  local_40._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
  uStack_c0 = local_e8;
  local_a8._8_4_ = (undefined4)local_40;
  local_a8._0_8_ = auStack_50._8_8_;
  local_a8._12_4_ = local_40._4_4_;
  local_b8 = ppvStack_e0;
  local_98 = local_c8;
  local_68 = local_c8;
  ppvStack_58 = ppvStack_e0;
  local_40 = local_c8;
  if (iStack_d4 < *(int *)(param_1 + 0x90)) {
    local_e8 = &local_108;
    iVar10 = iStack_d4;
    iVar12 = iVar15;
    do {
      plVar5 = local_c8;
      lVar13 = (longlong)iVar10 * 0x20;
      FString::PrintfImpl(&local_88,L"#include \"/Engine/Generated/UniformBuffers/%s.ush\"\r\n",
                          *(undefined8 *)(*local_c8 + lVar13));
      pvVar4 = local_88;
      if (local_80 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_80 + -1;
      }
      if (iVar10 != 0) {
        iVar15 = iVar12 + (uint)(iVar12 == 0) + iVar10;
        local_f0 = CONCAT44(local_f0._4_4_,iVar15);
        if (local_f0._4_4_ < iVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar12);
          iVar15 = (uint)local_f0;
        }
        pvVar1 = (void *)((longlong)local_f8 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
        iVar12 = iVar15;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      FString::PrintfImpl(&local_78,L"/Engine/Generated/UniformBuffers/%s.ush",
                          *(undefined8 *)(*plVar5 + lVar13));
      local_100 = 0;
      psVar11 = &DAT_143f3eda8;
      if (local_70 != 0) {
        psVar11 = local_78;
      }
      local_108 = 0;
      if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
        lVar8 = -1;
        do {
          lVar2 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (psVar11[lVar2] != 0);
        uVar6 = (int)lVar8 + 1;
        local_100 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
        }
        FGenericPlatformString::Memcpy(local_108,psVar11,(longlong)(int)uVar6 * 2);
      }
      ppvStack_e0 = (void **)(*plVar5 + 8 + lVar13);
      TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
                (param_2 + 0x60,local_res8,&local_e8,0);
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (local_78 != (short *)0x0) {
        FMemory::Free();
      }
      puVar9 = (undefined8 *)FUniformBufferStruct::GetStructList();
      for (puVar9 = (undefined8 *)*puVar9; puVar9 != (undefined8 *)0x0;
          puVar9 = (undefined8 *)*puVar9) {
        if (*(longlong *)(lVar13 + *plVar5) == *(longlong *)(puVar9[2] + 0x10)) {
          FUniformBufferStruct::AddResourceTableEntries(puVar9[2],param_2 + 0x110,param_2 + 0x160);
        }
      }
      uStack_c0._4_4_ = (uint)((ulonglong)uStack_c0 >> 0x20);
      uStack_b0._4_4_ = (int)((ulonglong)uStack_b0 >> 0x20);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iVar10 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)*(uint *)(local_b8 + 3));
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<wchar_t_const_*,FCachedUniformBufferDeclaration>,TDefaultMapHashableKeyFuncs<wchar_t_const_*,FCachedUniformBufferDeclaration,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  pvVar4 = local_f8;
  local_108 = 0;
  local_100 = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_108,0x2e,"/Engine/Generated/GeneratedUniformBuffers.ush",0x2e,0x3f);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_2 + 0x10,local_res8,&local_108);
  if ((local_res8[0] == -1) ||
     (lVar13 = *(longlong *)(param_2 + 0x10) + (longlong)local_res8[0] * 0x28, lVar13 == 0)) {
    local_res10 = &local_108;
    FUN_141686d30(param_2 + 0x10,local_res8,&local_res10,0);
    lVar13 = *(longlong *)(param_2 + 0x10) + (longlong)local_res8[0] * 0x28;
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if ((iVar12 != 0) && (iVar12 = iVar12 + -1, iVar12 != 0)) {
    iVar10 = *(int *)(lVar13 + 0x18);
    iVar15 = (uint)(iVar10 == 0) + iVar10 + iVar12;
    *(int *)(lVar13 + 0x18) = iVar15;
    if (*(int *)(lVar13 + 0x1c) < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar13 + 0x10,iVar10);
    }
    pvVar1 = (void *)(*(longlong *)(lVar13 + 0x10) +
                     ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
  }
  iVar10 = FUN_1419ef5f0(param_4);
  if (1 < iVar10) {
    local_f8 = (void *)0x0;
    local_f0 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,&DAT_144d87d14,4);
    local_108 = 0;
    local_100 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"PLATFORM_SUPPORTS_SRV_UB",0x32);
    local_e8 = &local_108;
    ppvStack_e0 = &local_f8;
    FUN_140497620(param_2 + 0x200,local_res8,&local_e8,0);
    if (local_108 != 0) {
      FMemory::Free();
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  return;
}



// FUNCTION 1419e35b0 FUN_1419e35b0 body=765 status=ok
// SIG undefined FUN_1419e35b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001419e3650) */

bool FUN_1419e35b0(longlong param_1,byte param_2,undefined4 *param_3,undefined8 ****param_4,
                  uint param_5)

{
  uint uVar1;
  undefined8 ***_Src;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 ****ppppuVar5;
  undefined4 uVar6;
  int iVar7;
  size_t _Size;
  undefined8 ****ppppuVar8;
  int iVar9;
  undefined8 ****_Src_00;
  undefined8 ****ppppuVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  byte local_c8;
  uint local_c4;
  undefined8 ***local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined8 ***local_a8;
  int local_a0;
  longlong local_98;
  undefined4 *local_90;
  uint local_88 [2];
  undefined8 ***local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *(uint *)(param_4 + 1);
  ppppuVar8 = (undefined8 ****)0x0;
  bVar2 = false;
  uVar6 = 0;
  local_c0 = (undefined8 ****)0x0;
  local_b8 = (undefined8 ****)0x0;
  ppppuVar10 = ppppuVar8;
  local_c8 = param_2;
  local_a8 = param_4;
  local_98 = param_1;
  local_90 = param_3;
  if (uVar1 == param_5) {
    local_c4 = uVar1;
    if ((int)uVar1 < 1) {
      iVar7 = 0;
      if (((int)uVar1 < 0) && (ppppuVar10 = (undefined8 ****)local_c0, iVar7 = 0, uVar1 != 0)) {
        local_b8 = (undefined8 ****)(ulonglong)uVar1;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_c0);
        ppppuVar10 = (undefined8 ****)local_c0;
        iVar7 = (int)local_b8;
      }
    }
    else {
      local_b8 = (undefined8 ****)(ulonglong)uVar1;
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_c0);
      ppppuVar10 = (undefined8 ****)local_c0;
      _guard_xfg_dispatch_icall_nop(local_c0,0,(longlong)(int)uVar1);
      iVar7 = (int)local_b8;
    }
    local_d8 = *(undefined4 *)(param_4 + 1);
    local_d0 = 0xf;
    FUN_141645020(1,ppppuVar10,&local_c4,*param_4);
    if (iVar7 < (int)local_c4) {
      iVar9 = local_c4 - iVar7;
      iVar3 = iVar7 + iVar9;
      local_b8 = (undefined8 ****)CONCAT44(local_b8._4_4_,iVar3);
      if (local_b8._4_4_ < iVar3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_c0);
        ppppuVar10 = (undefined8 ****)local_c0;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 + (longlong)ppppuVar10),0,(longlong)iVar9);
    }
    else if (((int)local_c4 < iVar7) && (iVar3 = iVar7 - local_c4, iVar3 != 0)) {
      iVar9 = (iVar7 - iVar3) - local_c4;
      if (iVar9 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)ppppuVar10 + (longlong)(int)local_c4),
                   (void *)((longlong)(int)(iVar3 + local_c4) + (longlong)ppppuVar10),
                   (longlong)iVar9);
      }
      local_b8 = (undefined8 ****)CONCAT44(local_b8._4_4_,iVar7 - iVar3);
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_c0);
      ppppuVar10 = (undefined8 ****)local_c0;
    }
    if (local_c4 < param_5) {
      bVar2 = true;
    }
  }
  local_70._0_4_ = *local_90;
  local_70._4_4_ = local_90[1];
  uStack_68 = local_90[2];
  uStack_64 = local_90[3];
  local_5c = (uint)local_c8;
  local_60 = local_90[4];
  local_58 = 0;
  local_54 = 1;
  piVar4 = (int *)TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
                  ::FindId(local_98 + 0x38,&local_c4,&local_70);
  iVar7 = *piVar4;
  if (iVar7 == -1) {
    ppppuVar5 = &local_c0;
    if (!bVar2) {
      ppppuVar5 = (undefined8 ****)local_a8;
    }
    local_a8 = (undefined8 ****)0x0;
    local_a0 = *(int *)(ppppuVar5 + 1);
    _Size = (size_t)local_a0;
    _Src = *ppppuVar5;
    if (local_a0 == 0) {
      ppppuVar5 = ppppuVar8;
      iVar3 = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
      ppppuVar5 = (undefined8 ****)local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,_Src,_Size);
      iVar3 = local_a0;
    }
    local_c0 = (undefined8 ***)CONCAT44(local_c0._4_4_,param_5);
    local_b8 = (undefined8 ****)0x0;
    _Src_00 = ppppuVar8;
    local_b0 = iVar3;
    if (iVar3 != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar3,0);
      _Src_00 = local_b8;
      _guard_xfg_dispatch_icall_nop(local_b8,ppppuVar5,(longlong)iVar3);
      param_5 = (uint)local_c0;
    }
    iVar3 = local_b0;
    if (ppppuVar5 != (undefined8 ****)0x0) {
      FMemory::Free(ppppuVar5);
    }
    local_c0 = (undefined8 ****)0x0;
    if (iVar3 != 0) {
      local_b8._0_4_ = iVar3;
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_c0,iVar3,0);
      ppppuVar8 = (undefined8 ****)local_c0;
      _guard_xfg_dispatch_icall_nop(local_c0,_Src_00,(longlong)iVar3);
      uVar6 = local_b8._4_4_;
      iVar3 = (int)local_b8;
    }
    local_c0 = (undefined8 ***)&local_70;
    local_88[0] = param_5;
    local_b8 = (undefined8 ****)local_88;
    local_80 = ppppuVar8;
    local_78 = iVar3;
    local_74 = uVar6;
    FUN_1419cffa0(local_98 + 0x38,&local_c4,&local_c0,0);
    if ((undefined8 ****)local_80 != (undefined8 ****)0x0) {
      FMemory::Free();
    }
    if (_Src_00 != (undefined8 ****)0x0) {
      FMemory::Free(_Src_00);
    }
  }
  if (ppppuVar10 != (undefined8 ****)0x0) {
    FMemory::Free(ppppuVar10);
  }
  return iVar7 == -1;
}



// FUNCTION 1419e38b0 AddUninitialized body=220 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FFlareResourceDescription_*,ResourceVariation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1419e3990 AddUninitialized body=219 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0xd8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0xd8 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0xd8 + *param_1;
  return param_2;
}



// FUNCTION 1419e3a70 FUN_1419e3a70 body=219 status=ok
// SIG undefined FUN_1419e3a70(void)

int * FUN_1419e3a70(longlong *param_1,int *param_2)

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
      FUN_1404f33d0(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x118 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x118 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x118 + *param_1;
  return param_2;
}



// FUNCTION 1419e3b50 AddUninitialized body=210 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x70 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x70 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 1419e3c30 AddUninitialized body=219 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<172,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0xac + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0xac + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0xac + *param_1;
  return param_2;
}



// FUNCTION 1419e3d10 FUN_1419e3d10 body=2412 status=ok
// SIG undefined FUN_1419e3d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419e3d10(longlong *param_1,uint *param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  uint *puStack_2d0;
  undefined4 local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  longlong local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  undefined8 uStack_298;
  uint *local_290;
  undefined8 uStack_288;
  int local_280;
  undefined4 uStack_27c;
  uint local_278 [2];
  uint *local_270;
  undefined8 local_268;
  void *local_260;
  longlong local_258;
  uint *local_250;
  uint *local_248;
  void *local_240;
  int local_238;
  longlong *local_230;
  undefined8 uStack_228;
  uint *puStack_220;
  undefined4 uStack_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  undefined **local_208 [18];
  undefined8 local_178;
  uint **local_170;
  undefined8 local_168;
  undefined **local_158 [18];
  longlong *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  iVar12 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_2a8 = param_1;
  local_270 = param_2;
  if (0 < (int)param_1[1]) {
    local_2b0 = 0;
    do {
      uVar5 = param_2[2];
      plVar15 = (longlong *)(*local_2a8 + local_2b0);
      uVar4 = (2 - (uint)(uVar5 != 0)) + uVar5;
      param_2[2] = uVar4;
      if ((int)param_2[3] < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,uVar5);
      }
      lVar8 = -1;
      puVar1 = (undefined2 *)
               (*(longlong *)param_2 + ((longlong)(int)uVar5 - (ulonglong)(uVar5 != 0)) * 2);
      *puVar1 = 0x5f;
      puVar1[1] = 0;
      pvVar3 = *(void **)(*plVar15 + 0x10);
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)((longlong)pvVar3 + lVar8 * 2) != 0);
      iVar13 = (int)lVar8;
      iVar7 = 0;
      if (iVar13 != 0) {
        uVar5 = param_2[2];
        uVar4 = (uint)(uVar5 == 0) + iVar13 + uVar5;
        param_2[2] = uVar4;
        if ((int)param_2[3] < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,uVar5);
        }
        pvVar2 = (void *)(*(longlong *)param_2 +
                         ((longlong)(int)uVar5 - (ulonglong)(uVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar13 * 2) = 0;
      }
      FString::PrintfImpl(&local_240,&DAT_144d86a5c,(int)plVar15[1]);
      pvVar3 = local_240;
      if (local_238 != 0) {
        iVar7 = local_238 + -1;
      }
      if (iVar7 != 0) {
        uVar5 = param_2[2];
        uVar4 = (uint)(uVar5 == 0) + iVar7 + uVar5;
        param_2[2] = uVar4;
        if ((int)param_2[3] < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,uVar5);
        }
        pvVar2 = (void *)(*(longlong *)param_2 +
                         ((longlong)(int)uVar5 - (ulonglong)(uVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar7 * 2) = 0;
      }
      if (local_240 != (void *)0x0) {
        FMemory::Free(local_240);
      }
      BytesToHex(&local_260,(longlong)plVar15 + 0xc,0x14);
      pvVar3 = local_260;
      if (((int)local_258 != 0) && (iVar13 = (int)local_258 + -1, iVar13 != 0)) {
        uVar5 = param_2[2];
        uVar4 = (uint)(uVar5 == 0) + iVar13 + uVar5;
        param_2[2] = uVar4;
        if ((int)param_2[3] < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,uVar5);
        }
        pvVar2 = (void *)(*(longlong *)param_2 +
                         ((longlong)(int)uVar5 - (ulonglong)(uVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar13 * 2) = 0;
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      FSerializationHistory::AppendKeyString(*plVar15 + 0xb0,param_2);
      lVar8 = *plVar15;
      local_2a0 = (longlong *)(lVar8 + 0xe0);
      iVar13 = *(int *)(lVar8 + 0x108);
      puStack_2d0 = (uint *)(lVar8 + 0xf0);
      local_2d8 = 0x100000000;
      iStack_2c4 = 0;
      iStack_2c0 = 0;
      if (iVar13 != 0) {
        puVar11 = *(uint **)(lVar8 + 0x100);
        if (*(uint **)(lVar8 + 0x100) == (uint *)0x0) {
          puVar11 = puStack_2d0;
        }
        uVar5 = *puVar11;
        iVar7 = 0;
        while (uVar5 == 0) {
          iStack_2c0 = iStack_2c0 + 0x20;
          local_2d8._4_4_ = (undefined4)((ulonglong)local_2d8 >> 0x20);
          local_2d8 = CONCAT44(local_2d8._4_4_,iVar7 + 1);
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1419e4074;
          uVar5 = puVar11[(longlong)iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        uVar5 = -uVar5 & uVar5;
        iVar7 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        local_2d8 = CONCAT44(uVar5,(undefined4)local_2d8);
        if (uVar5 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        iStack_2c4 = (iStack_2c0 - iVar7) + 0x1f;
        if (iVar13 < iStack_2c4) {
LAB_1419e4074:
          iStack_2c4 = iVar13;
        }
      }
      local_2c8 = 0xffffffff;
      uStack_218 = 0xffffffff;
      iStack_214 = iStack_2c4;
      iStack_210 = iStack_2c0;
      uStack_20c = uStack_2bc;
      uStack_228 = local_2d8;
      uStack_288 = CONCAT44(iStack_2c4,0xffffffff);
      uStack_298 = local_2d8;
      local_280 = iStack_2c0;
      uStack_27c = uStack_2bc;
      iVar7 = iStack_2c4;
      local_290 = puStack_2d0;
      local_230 = local_2a0;
      puStack_220 = puStack_2d0;
      if (iStack_2c4 < iVar13) {
        do {
          local_250 = (uint *)(*local_2a0 + (longlong)iVar7 * 0x20);
          local_248 = local_250 + 2;
          FUN_1419cf0d0(local_98,local_278,&local_250,0);
          uStack_288 = CONCAT44(uStack_288._4_4_,(uint)uStack_288 & ~uStack_298._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_298);
          iVar7 = uStack_288._4_4_;
        } while (uStack_288._4_4_ < (int)local_290[6]);
      }
      iVar12 = iVar12 + 1;
      local_2b0 = local_2b0 + 0x20;
    } while (iVar12 < (int)local_2a8[1]);
  }
  iVar12 = 0;
  if (0 < (int)local_2a8[3]) {
    local_2b0 = 0;
    do {
      uVar5 = param_2[2];
      plVar15 = (longlong *)(local_2a8[2] + local_2b0);
      uVar4 = (2 - (uint)(uVar5 != 0)) + uVar5;
      param_2[2] = uVar4;
      if ((int)param_2[3] < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,uVar5);
      }
      lVar8 = -1;
      puVar1 = (undefined2 *)
               (*(longlong *)param_2 + ((longlong)(int)uVar5 - (ulonglong)(uVar5 != 0)) * 2);
      *puVar1 = 0x5f;
      puVar1[1] = 0;
      pvVar3 = *(void **)*plVar15;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)((longlong)pvVar3 + lVar8 * 2) != 0);
      iVar13 = (int)lVar8;
      if (iVar13 != 0) {
        uVar5 = param_2[2];
        uVar4 = (uint)(uVar5 == 0) + iVar13 + uVar5;
        param_2[2] = uVar4;
        if ((int)param_2[3] < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,uVar5);
        }
        pvVar2 = (void *)(*(longlong *)param_2 +
                         ((longlong)(int)uVar5 - (ulonglong)(uVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar13 * 2) = 0;
      }
      BytesToHex(&local_250,plVar15 + 1,0x14);
      puVar11 = local_250;
      if (((int)local_248 != 0) && (iVar13 = (int)local_248 + -1, iVar13 != 0)) {
        uVar5 = param_2[2];
        uVar4 = (uint)(uVar5 == 0) + iVar13 + uVar5;
        param_2[2] = uVar4;
        if ((int)param_2[3] < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,uVar5);
        }
        pvVar3 = (void *)(*(longlong *)param_2 +
                         ((longlong)(int)uVar5 - (ulonglong)(uVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar3,puVar11,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)pvVar3 + (longlong)iVar13 * 2) = 0;
      }
      if (puVar11 != (uint *)0x0) {
        FMemory::Free();
      }
      uVar9 = 0;
      plVar10 = *(longlong **)(*plVar15 + 0x10);
      uVar6 = (ulonglong)*(int *)(*plVar15 + 0x18);
      uVar14 = uVar6 & 0x1fffffffffffffff;
      if (plVar10 + uVar6 < plVar10) {
        uVar14 = uVar9;
      }
      if (uVar14 != 0) {
        do {
          lVar8 = *plVar10;
          local_2a0 = (longlong *)(lVar8 + 0xe0);
          iVar13 = *(int *)(lVar8 + 0x108);
          puStack_2d0 = (uint *)(lVar8 + 0xf0);
          local_2d8 = 0x100000000;
          iStack_2c4 = 0;
          iStack_2c0 = 0;
          if (iVar13 != 0) {
            puVar11 = *(uint **)(lVar8 + 0x100);
            if (*(uint **)(lVar8 + 0x100) == (uint *)0x0) {
              puVar11 = puStack_2d0;
            }
            uVar5 = *puVar11;
            iStack_2c0 = 0;
            iVar7 = 0;
            while (uVar5 == 0) {
              iStack_2c0 = iStack_2c0 + 0x20;
              local_2d8._4_4_ = (undefined4)((ulonglong)local_2d8 >> 0x20);
              local_2d8 = CONCAT44(local_2d8._4_4_,iVar7 + 1);
              if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7)
              goto LAB_1419e43a6;
              uVar5 = puVar11[(longlong)iVar7 + 1];
              iVar7 = iVar7 + 1;
            }
            uVar5 = -uVar5 & uVar5;
            iVar7 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            local_2d8 = CONCAT44(uVar5,(undefined4)local_2d8);
            if (uVar5 == 0) {
              iVar7 = 0x20;
            }
            else {
              iVar7 = 0x1f - iVar7;
            }
            iStack_2c4 = (iStack_2c0 - iVar7) + 0x1f;
            if (iVar13 < iStack_2c4) {
LAB_1419e43a6:
              iStack_2c4 = iVar13;
            }
          }
          local_2c8 = 0xffffffff;
          uStack_218 = 0xffffffff;
          iStack_214 = iStack_2c4;
          iStack_210 = iStack_2c0;
          uStack_20c = uStack_2bc;
          uStack_228 = local_2d8;
          uStack_288 = CONCAT44(iStack_2c4,0xffffffff);
          uStack_298 = local_2d8;
          local_280 = iStack_2c0;
          uStack_27c = uStack_2bc;
          iVar7 = iStack_2c4;
          local_290 = puStack_2d0;
          local_230 = local_2a0;
          puStack_220 = puStack_2d0;
          if (iStack_2c4 < iVar13) {
            do {
              local_260 = (void *)(*local_2a0 + (longlong)iVar7 * 0x20);
              local_258 = (longlong)local_260 + 8;
              FUN_1419cf0d0(local_98,local_278,&local_260,0);
              uStack_288 = CONCAT44(uStack_288._4_4_,(uint)uStack_288 & ~uStack_298._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_298);
              iVar7 = uStack_288._4_4_;
            } while (uStack_288._4_4_ < (int)local_290[6]);
          }
          plVar10 = plVar10 + 1;
          uVar9 = uVar9 + 1;
          param_2 = local_270;
        } while (uVar9 != uVar14);
      }
      iVar12 = iVar12 + 1;
      local_2b0 = local_2b0 + 0x20;
    } while (iVar12 < (int)local_2a8[3]);
  }
  local_270 = (uint *)0x0;
  local_268 = 0;
  local_2d8 = 0;
  puStack_2d0 = (uint *)0x0;
  local_2c8 = 0;
  iStack_2c0 = 0;
  uStack_2bc = 0;
  local_2b8 = 0;
  local_2a8 = (longlong *)0x0;
  FArchive::FArchive(local_208);
  local_178 = 0;
  local_208[0] = &PTR_FUN_143f4a100;
  local_170 = &local_270;
  local_168 = local_2a8;
  FArchive::SetIsSaving(local_208,1);
  FArchive::SetIsPersistent(local_208,1);
  FArchiveProxy::FArchiveProxy(local_158,local_208);
  local_c0 = &local_2d8;
  local_b8 = 0;
  local_b0 = &local_2d8;
  local_158[0] = &PTR_FUN_144d8dfd8;
  local_a8 = (*(code *)local_208[0][0x12])(local_208);
  FUN_141a0caf0(local_158,local_98);
  FSerializationHistory::AppendKeyString(&local_2d8,param_2);
  local_158[0] = &PTR_FUN_144d8dfd8;
  (**(code **)(*local_c8 + 0xa8))(local_c8,local_a8);
  FArchive::~FArchive(local_158);
  FArchive::~FArchive(local_208);
  if (CONCAT44(uStack_2bc,iStack_2c0) != 0) {
    FMemory::Free();
  }
  if (local_2d8 != 0) {
    FMemory::Free();
  }
  if (local_270 != (uint *)0x0) {
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
  return;
}



// FUNCTION 1419e4680 AppendKeyString body=509 status=ok
// SIG undefined AppendKeyString(void)

void FSerializationHistory::AppendKeyString(undefined8 *param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FString::AppendInt(&local_28,*(undefined4 *)(param_1 + 2));
  pvVar3 = local_28;
  iVar6 = 0;
  if ((int)local_20 != 0) {
    iVar6 = (int)local_20 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar6;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  puVar5 = (undefined8 *)BytesToHex(&local_28,*param_1,*(int *)(param_1 + 1) * 4);
  pvVar3 = (void *)*puVar5;
  iVar6 = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)BytesToHex(&local_28,param_1[3],*(int *)(param_1 + 4) * 4);
  pvVar3 = (void *)*puVar5;
  iVar6 = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419e4880 FUN_1419e4880 body=115 status=ok
// SIG undefined FUN_1419e4880(void)

undefined8 FUN_1419e4880(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = iVar1 + 1;
  if (*(int *)(param_1 + 0x144) < iVar1 + 1) {
    FUN_141a09f90(param_1 + 0x90,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x130) == 0) {
    lVar2 = param_1 + 0x90;
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            (lVar2 + (longlong)iVar1 * 0x50,param_2);
  return 1;
}



// FUNCTION 1419e4900 FUN_1419e4900 body=474 status=ok
// SIG undefined FUN_1419e4900(void)

void FUN_1419e4900(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  longlong local_res18 [2];
  undefined **local_e8 [18];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  plVar7 = (longlong *)0x0;
  piVar8 = &DAT_1464c9c48;
  do {
    iVar2 = *piVar8;
    if ((iVar2 < 0x20) &&
       (plVar1 = (longlong *)(&DAT_1469f5a10 + (longlong)iVar2 * 8),
       *(longlong *)(&DAT_1469f5a10 + (longlong)iVar2 * 8) != 0)) {
      plVar5 = (longlong *)operator_new(0x10);
      plVar6 = plVar7;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar6 = plVar5;
      }
      FArchive::FArchive(local_e8);
      local_58 = 0;
      local_48 = 0;
      local_e8[0] = &PTR_FUN_143f4a100;
      local_50 = plVar6;
      FArchive::SetIsSaving(local_e8,1);
      FArchive::SetIsPersistent(local_e8,0);
      FUN_141a0baa0(*plVar1,local_e8,1);
      (**(code **)(*(longlong *)*plVar1 + 8))();
      lVar3 = *plVar1;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::Empty(lVar3 + 0x38,0);
      FUN_1419ec0f0(lVar3);
      if (param_1 != local_res18) {
        plVar1 = (longlong *)*param_1;
        *param_1 = (longlong)plVar6;
        plVar6 = plVar7;
        if (plVar1 != (longlong *)0x0) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar1,0x10);
        }
      }
      FArchive::~FArchive(local_e8);
      if (plVar6 != (longlong *)0x0) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar6,0x10);
      }
    }
    piVar8 = piVar8 + 1;
    param_1 = param_1 + 1;
    puVar4 = DAT_1469f6098;
  } while ((longlong)piVar8 < 0x1464c9c58);
  for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    FUN_141edf5d0(puVar4[2]);
  }
  return;
}



// FUNCTION 1419e4ae0 Bind body=126 status=ok
// SIG undefined Bind(void)

void FShaderParameter::Bind(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  
  cVar1 = FShaderParameterMap::FindParameterAllocation
                    (param_2,param_3,param_1,param_1 + 2,param_1 + 4);
  if ((cVar1 == '\0') && (param_4 == 1)) {
    LowLevelFatalErrorHandler
              ("Unknown",0x19,
               L"Failure to bind non-optional shader parameter %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
               ,param_3);
    FDebug::AssertFailed
              (&DAT_144d85ad5,"Unknown",0x19,
               L"Failure to bind non-optional shader parameter %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
               ,param_3);
  }
  return;
}



// FUNCTION 1419e4b60 Bind body=127 status=ok
// SIG undefined Bind(void)

void FShaderResourceParameter::Bind
               (longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined1 local_18 [16];
  
  cVar1 = FShaderParameterMap::FindParameterAllocation(param_2,param_3,local_18,param_1,param_1 + 2)
  ;
  if ((cVar1 == '\0') && (param_4 == 1)) {
    LowLevelFatalErrorHandler
              ("Unknown",0x3e,
               L"Failure to bind non-optional shader resource parameter %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
               ,param_3);
    FDebug::AssertFailed
              (&DAT_144d85ad6,"Unknown",0x3e,
               L"Failure to bind non-optional shader resource parameter %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
               ,param_3);
  }
  return;
}



// FUNCTION 1419e4be0 Bind body=142 status=ok
// SIG undefined Bind(void)

void FShaderUniformBufferParameter::Bind
               (longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined1 local_28 [4];
  undefined1 local_24 [12];
  
  cVar1 = FShaderParameterMap::FindParameterAllocation
                    (param_2,param_3,param_1 + 4,local_24,local_28);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 6) = 0;
    if (param_4 == 1) {
      LowLevelFatalErrorHandler
                ("Unknown",0x75,
                 L"Failure to bind non-optional shader resource parameter %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
                 ,param_3);
      FDebug::AssertFailed
                (&DAT_144d85ad7,"Unknown",0x75,
                 L"Failure to bind non-optional shader resource parameter %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
                 ,param_3);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}



// FUNCTION 1419e4c70 BytesToHex body=299 status=ok
// SIG undefined BytesToHex(void)

longlong * BytesToHex(longlong *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_3 & 0x7fffffff) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    bVar4 = *param_2;
    sVar5 = 0x37;
    bVar1 = bVar4 >> 4;
    if (bVar1 < 10) {
      sVar5 = 0x30;
    }
    sVar5 = sVar5 + (ushort)bVar1;
    if (sVar5 != 0) {
      iVar2 = (int)param_1[1];
      iVar3 = iVar2 + -1;
      if (iVar2 < 1) {
        iVar3 = 0;
      }
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(short *)(*param_1 + (longlong)iVar3 * 2) = sVar5;
      *(undefined2 *)(*param_1 + 2 + (longlong)iVar3 * 2) = 0;
    }
    bVar4 = bVar4 & 0xf;
    sVar5 = 0x37;
    if (bVar4 < 10) {
      sVar5 = 0x30;
    }
    sVar5 = sVar5 + (ushort)bVar4;
    if (sVar5 != 0) {
      iVar2 = (int)param_1[1];
      iVar3 = iVar2 + -1;
      if (iVar2 < 1) {
        iVar3 = 0;
      }
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(short *)(*param_1 + (longlong)iVar3 * 2) = sVar5;
      *(undefined2 *)(*param_1 + 2 + (longlong)iVar3 * 2) = 0;
    }
    param_2 = param_2 + 1;
  }
  return param_1;
}



// FUNCTION 1419e4da0 FUN_1419e4da0 body=778 status=ok
// SIG undefined FUN_1419e4da0(void)

void FUN_1419e4da0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong **pplVar10;
  longlong *plVar11;
  longlong *local_d8;
  longlong *local_d0;
  uint local_c8;
  uint uStack_c4;
  uint *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  longlong local_38 [2];
  
  iVar2 = (int)param_1[5];
  puStack_c0 = (uint *)(param_1 + 2);
  plVar11 = (longlong *)0x0;
  uStack_c4 = 1;
  local_c8 = 0;
  iStack_b4 = 0;
  uStack_b0 = 0;
  if (iVar2 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puStack_c0;
    }
    uVar3 = *puVar9;
    plVar6 = plVar11;
    plVar8 = plVar11;
    while (uVar3 == 0) {
      iVar5 = (int)plVar6;
      uStack_b0 = (int)plVar8 + 0x20;
      plVar8 = (longlong *)(ulonglong)uStack_b0;
      local_c8 = iVar5 + 1;
      plVar6 = (longlong *)(ulonglong)local_c8;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1419e4e64;
      uVar3 = puVar9[(longlong)iVar5 + 1];
    }
    uStack_c4 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_b4 = (uStack_b0 - iVar5) + 0x1f;
    if (iVar2 < iStack_b4) {
LAB_1419e4e64:
      iStack_b4 = iVar2;
    }
  }
  local_b8 = 0xffffffff;
  uStack_90 = CONCAT44(iStack_b4,0xffffffff);
  auStack_50._8_4_ = uStack_b0;
  auStack_50._0_8_ = uStack_90;
  auStack_50._12_4_ = uStack_ac;
  uStack_a0 = CONCAT44(uStack_c4,local_c8);
  local_70 = 0;
  local_40._0_4_ = SUB84(param_1,0);
  local_40._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  iVar2 = iStack_b4;
  local_a8 = param_1;
  local_98 = puStack_c0;
  local_78 = param_1;
  local_68 = param_1;
  uStack_60 = uStack_a0;
  puStack_58 = puStack_c0;
  local_40 = param_1;
  if (iStack_b4 < (int)param_1[5]) {
    do {
      plVar8 = local_a8;
      pplVar10 = (longlong **)(*local_a8 + 8 + (longlong)iVar2 * 0x20);
      plVar6 = (longlong *)FUniformBufferStruct::GetStructList();
      plVar6 = (longlong *)*plVar6;
      if (plVar6 != (longlong *)0x0) {
        do {
          if (*(longlong *)((longlong)iVar2 * 0x20 + *plVar8) == *(longlong *)(plVar6[2] + 0x10)) {
            plVar7 = (longlong *)operator_new(0x10);
            plVar8 = plVar11;
            if (plVar7 != (longlong *)0x0) {
              *plVar7 = 0;
              plVar7[1] = 0;
              plVar8 = plVar7;
            }
            plVar6 = (longlong *)
                     CreateHLSLUniformBufferDeclaration(local_38,*(undefined8 *)(plVar6[2] + 0x10));
            if (plVar8 != plVar6) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              *plVar8 = *plVar6;
              *plVar6 = 0;
              *(int *)(plVar8 + 1) = (int)plVar6[1];
              *(undefined4 *)((longlong)plVar8 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
              plVar6[1] = 0;
            }
            if (local_38[0] != 0) {
              FMemory::Free();
            }
            plVar7 = (longlong *)operator_new(0x18);
            plVar6 = plVar11;
            if (plVar7 != (longlong *)0x0) {
              *(undefined4 *)(plVar7 + 1) = 1;
              *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
              *plVar7 = (longlong)&PTR_DestroyObject_14413b698;
              plVar7[2] = (longlong)plVar8;
              plVar6 = plVar7;
            }
            local_d8 = plVar8;
            local_d0 = plVar6;
            SharedPointerInternals::EnableSharedFromThis(&local_d8,plVar8,plVar8);
            if (pplVar10 != &local_d8) {
              *pplVar10 = plVar8;
              local_d8 = (longlong *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(pplVar10 + 1,&local_d0);
              plVar6 = local_d0;
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar6 + 1;
              lVar4 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            break;
          }
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)0x0);
      }
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      iVar2 = uStack_90._4_4_;
    } while (uStack_90._4_4_ < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<wchar_t_const_*,FCachedUniformBufferDeclaration>,TDefaultMapHashableKeyFuncs<wchar_t_const_*,FCachedUniformBufferDeclaration,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1419e50b0 FUN_1419e50b0 body=98 status=ok
// SIG undefined FUN_1419e50b0(void)

undefined8 FUN_1419e50b0(longlong param_1,double *param_2)

{
  double dVar1;
  longlong *plVar2;
  
  dVar1 = *param_2;
  if ((dVar1 < 0.0) && (*(char *)(*(longlong *)(param_1 + 0x10) + 0x71) == '\0')) {
    return 0;
  }
  if ((0.0 <= dVar1) &&
     (plVar2 = *(longlong **)(param_1 + 0x10), *(char *)((longlong)plVar2 + 0x71) == '\0')) {
    (**(code **)(*plVar2 + 8))(plVar2,(float)dVar1);
    if (*(char *)((longlong)plVar2 + 0x71) == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1419e5120 FUN_1419e5120 body=831 status=ok
// SIG undefined FUN_1419e5120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419e5120(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  BOOL BVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  short *psVar13;
  longlong local_28;
  ulonglong local_20;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  }
  uVar9 = 0;
  if (DAT_1468b6148 != 0) {
    local_20 = 0;
    psVar13 = &DAT_143f3eda8;
    if (DAT_1468e2428 != 0) {
      psVar13 = DAT_1468e2420;
    }
    lVar10 = -1;
    local_28 = 0;
    if ((psVar13 != (short *)0x0) && (lVar8 = lVar10, *psVar13 != 0)) {
      do {
        lVar8 = lVar8 + 1;
      } while (psVar13[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_20 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,psVar13,(longlong)(int)uVar7 * 2);
    }
    if (*(int *)(param_1 + 0xa8) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = *(undefined2 **)(param_1 + 0xa0);
    }
    FConfigCacheIni::SetString
              (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,
               PTR_u_LastOpened_1464c0de0,puVar12,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
    local_28 = 0;
    psVar13 = &DAT_143f3eda8;
    if (DAT_1468e2428 != 0) {
      psVar13 = DAT_1468e2420;
    }
    local_20 = 0;
    if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (psVar13[lVar10] != 0);
      uVar7 = (int)lVar10 + 1;
      local_20 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,psVar13,(longlong)(int)uVar7 * 2);
    }
    FConfigCacheIni::Flush(DAT_1468b6148,0,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  cVar4 = FUN_1419f08d0();
  if (cVar4 != '\0') {
    FUN_141a0a7d0(param_1,1);
  }
  cVar4 = FUN_1419efa30();
  if (cVar4 != '\0') {
    FUN_141a0a7d0(param_1,0);
  }
  FUN_1419ee620(param_1);
  plVar6 = DAT_1464c0cd0;
  while( true ) {
    if (plVar6 == DAT_1464c0cd0 + (longlong)DAT_1464c0cd8 * 2) goto LAB_1419e5428;
    if (((int)plVar6[1] != 0) && (*plVar6 != 0)) break;
    plVar6 = plVar6 + 2;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  DAT_1464c0ce4 = DAT_1464c0ce4 + 1;
  bVar2 = false;
  lVar10 = (longlong)(DAT_1464c0cd8 + -1);
  if (-1 < DAT_1464c0cd8 + -1) {
    lVar8 = lVar10 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar8 + 8 + (longlong)DAT_1464c0cd0) == 0) ||
          (plVar6 = *(longlong **)(lVar8 + (longlong)DAT_1464c0cd0), plVar6 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,param_1 + 0xa0,uVar1), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar8 = lVar8 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  iVar3 = DAT_1464c0cd8;
  DAT_1464c0ce4 = DAT_1464c0ce4 + -1;
  if ((bVar2) && (DAT_1464c0ce4 < 1)) {
    uVar11 = uVar9;
    if (0 < DAT_1464c0cd8) {
      do {
        if (((*(int *)(uVar11 + 8 + (longlong)DAT_1464c0cd0) == 0) ||
            (*(longlong **)(uVar11 + (longlong)DAT_1464c0cd0) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(uVar11 + (longlong)DAT_1464c0cd0) + 0x10))(),
           cVar4 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464c0cd0,uVar9,1,1);
        }
        else {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar11 = uVar11 + 0x10;
        }
      } while ((int)uVar9 < DAT_1464c0cd8);
    }
    _DAT_1464c0ce0 = DAT_1464c0cd8 * 2;
    if (_DAT_1464c0ce0 < 3) {
      _DAT_1464c0ce0 = 2;
    }
    if ((_DAT_1464c0ce0 < iVar3) && (DAT_1464c0cdc != DAT_1464c0cd8)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464c0cd0);
    }
  }
LAB_1419e5428:
  *(undefined1 *)(param_1 + 0xc1) = 0;
  FPipelineFileCache::ClosePipelineFileCache();
                    /* WARNING: Could not recover jumptable at 0x0001419e5458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  return;
}



// FUNCTION 1419e5460 FUN_1419e5460 body=17 status=ok
// SIG undefined FUN_1419e5460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419e5460(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  BOOL BVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  short *psVar14;
  longlong lStack_28;
  ulonglong uStack_20;
  
  lVar4 = DAT_1469f59c8;
  if (DAT_1469f59c8 == 0) {
    return;
  }
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_1469f59c8 + 0xf0));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0xf0));
  }
  uVar10 = 0;
  if (DAT_1468b6148 != 0) {
    uStack_20 = 0;
    psVar14 = &DAT_143f3eda8;
    if (DAT_1468e2428 != 0) {
      psVar14 = DAT_1468e2420;
    }
    lVar11 = -1;
    lStack_28 = 0;
    if ((psVar14 != (short *)0x0) && (lVar9 = lVar11, *psVar14 != 0)) {
      do {
        lVar9 = lVar9 + 1;
      } while (psVar14[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      uStack_20 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_28,0);
      }
      FGenericPlatformString::Memcpy(lStack_28,psVar14,(longlong)(int)uVar8 * 2);
    }
    if (*(int *)(lVar4 + 0xa8) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = *(undefined2 **)(lVar4 + 0xa0);
    }
    FConfigCacheIni::SetString
              (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,
               PTR_u_LastOpened_1464c0de0,puVar13,&lStack_28);
    if (lStack_28 != 0) {
      FMemory::Free();
    }
    lStack_28 = 0;
    psVar14 = &DAT_143f3eda8;
    if (DAT_1468e2428 != 0) {
      psVar14 = DAT_1468e2420;
    }
    uStack_20 = 0;
    if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
      do {
        lVar11 = lVar11 + 1;
      } while (psVar14[lVar11] != 0);
      uVar8 = (int)lVar11 + 1;
      uStack_20 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_28,0);
      }
      FGenericPlatformString::Memcpy(lStack_28,psVar14,(longlong)(int)uVar8 * 2);
    }
    FConfigCacheIni::Flush(DAT_1468b6148,0,&lStack_28);
    if (lStack_28 != 0) {
      FMemory::Free();
    }
  }
  cVar5 = FUN_1419f08d0();
  if (cVar5 != '\0') {
    FUN_141a0a7d0(lVar4,1);
  }
  cVar5 = FUN_1419efa30();
  if (cVar5 != '\0') {
    FUN_141a0a7d0(lVar4,0);
  }
  FUN_1419ee620(lVar4);
  plVar7 = DAT_1464c0cd0;
  while( true ) {
    if (plVar7 == DAT_1464c0cd0 + (longlong)DAT_1464c0cd8 * 2) goto LAB_1419e5428;
    if (((int)plVar7[1] != 0) && (*plVar7 != 0)) break;
    plVar7 = plVar7 + 2;
  }
  uVar1 = *(undefined4 *)(lVar4 + 0xb0);
  DAT_1464c0ce4 = DAT_1464c0ce4 + 1;
  bVar2 = false;
  lVar11 = (longlong)(DAT_1464c0cd8 + -1);
  if (-1 < DAT_1464c0cd8 + -1) {
    lVar9 = lVar11 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar9 + 8 + (longlong)DAT_1464c0cd0) == 0) ||
          (plVar7 = *(longlong **)(lVar9 + (longlong)DAT_1464c0cd0), plVar7 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar7 + 0x40))(plVar7,lVar4 + 0xa0,uVar1), cVar5 == '\0')) {
        bVar2 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar3 = DAT_1464c0cd8;
  DAT_1464c0ce4 = DAT_1464c0ce4 + -1;
  if ((bVar2) && (DAT_1464c0ce4 < 1)) {
    uVar12 = uVar10;
    if (0 < DAT_1464c0cd8) {
      do {
        if (((*(int *)(uVar12 + 8 + (longlong)DAT_1464c0cd0) == 0) ||
            (*(longlong **)(uVar12 + (longlong)DAT_1464c0cd0) == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)(uVar12 + (longlong)DAT_1464c0cd0) + 0x10))(),
           cVar5 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464c0cd0,uVar10,1,1);
        }
        else {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar12 = uVar12 + 0x10;
        }
      } while ((int)uVar10 < DAT_1464c0cd8);
    }
    _DAT_1464c0ce0 = DAT_1464c0cd8 * 2;
    if (_DAT_1464c0ce0 < 3) {
      _DAT_1464c0ce0 = 2;
    }
    if ((_DAT_1464c0ce0 < iVar3) && (DAT_1464c0cdc != DAT_1464c0cd8)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464c0cd0);
    }
  }
LAB_1419e5428:
  *(undefined1 *)(lVar4 + 0xc1) = 0;
  FPipelineFileCache::ClosePipelineFileCache();
                    /* WARNING: Could not recover jumptable at 0x0001419e5458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0xf0));
  return;
}



// FUNCTION 1419e5480 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
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



// FUNCTION 1419e5530 FUN_1419e5530 body=161 status=ok
// SIG undefined FUN_1419e5530(void)

undefined8 FUN_1419e5530(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<UObject_*,FHierarchyNode>,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e55e0 FUN_1419e55e0 body=161 status=ok
// SIG undefined FUN_1419e55e0(void)

undefined8 FUN_1419e55e0(longlong param_1,uint param_2,char param_3)

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
      FUN_141a04690(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5690 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FShaderPipelineType_const_*,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FShaderPipelineType_const_*,FShaderPipeline_*,0>,FDefaultSetAllocator>
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



// FUNCTION 1419e5740 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<wchar_t_const_*,FCachedUniformBufferDeclaration>,TDefaultMapHashableKeyFuncs<wchar_t_const_*,FCachedUniformBufferDeclaration,0>,FDefaultSetAllocator>
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



// FUNCTION 1419e57f0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
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



// FUNCTION 1419e58a0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FPrimaryAssetId,UGCosmeticIconButton_*>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,UGCosmeticIconButton_*,0>,FDefaultSetAllocator>
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



// FUNCTION 1419e5950 FUN_1419e5950 body=161 status=ok
// SIG undefined FUN_1419e5950(void)

undefined8 FUN_1419e5950(longlong param_1,uint param_2,char param_3)

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
      FUN_141a051f0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5a00 FUN_1419e5a00 body=161 status=ok
// SIG undefined FUN_1419e5a00(void)

undefined8 FUN_1419e5a00(longlong param_1,uint param_2,char param_3)

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
      FUN_141a05630(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5ab0 FUN_1419e5ab0 body=161 status=ok
// SIG undefined FUN_1419e5ab0(void)

undefined8 FUN_1419e5ab0(longlong param_1,uint param_2,char param_3)

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
      FUN_141a05850(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5b60 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGameplayTag,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FGameplayTag,FPrimaryAssetId,0>,FDefaultSetAllocator>
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
      FUN_141a05a70(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5c10 FUN_1419e5c10 body=161 status=ok
// SIG undefined FUN_1419e5c10(void)

undefined8 FUN_1419e5c10(longlong param_1,uint param_2,char param_3)

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
      FUN_141a05cb0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5cc0 FUN_1419e5cc0 body=161 status=ok
// SIG undefined FUN_1419e5cc0(void)

undefined8 FUN_1419e5cc0(longlong param_1,uint param_2,char param_3)

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
      FUN_141a06130(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5d70 FUN_1419e5d70 body=161 status=ok
// SIG undefined FUN_1419e5d70(void)

undefined8 FUN_1419e5d70(longlong param_1,uint param_2,char param_3)

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
      FUN_141a06370(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5e20 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
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
      FUN_141a06590(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5ed0 FUN_1419e5ed0 body=161 status=ok
// SIG undefined FUN_1419e5ed0(void)

undefined8 FUN_1419e5ed0(longlong param_1,uint param_2,char param_3)

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
      FUN_141a067a0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e5f80 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
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
      FUN_141a06a10(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e6030 FUN_1419e6030 body=161 status=ok
// SIG undefined FUN_1419e6030(void)

undefined8 FUN_1419e6030(longlong param_1,uint param_2,char param_3)

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
      FUN_141a06c80(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e60e0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
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



// FUNCTION 1419e6190 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FShaderCodeLibraryPipeline,DefaultKeyFuncs<FShaderCodeLibraryPipeline,0>,FDefaultSetAllocator>
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



// FUNCTION 1419e6240 FUN_1419e6240 body=161 status=ok
// SIG undefined FUN_1419e6240(void)

undefined8 FUN_1419e6240(longlong param_1,uint param_2,char param_3)

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
      FUN_141a07b70(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e62f0 FUN_1419e62f0 body=161 status=ok
// SIG undefined FUN_1419e62f0(void)

undefined8 FUN_1419e62f0(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<SlotInfo,StrongBlockIdentifier<65536,CacheSlotStrongType>_>,TDefaultMapHashableKeyFuncs<SlotInfo,StrongBlockIdentifier<65536,CacheSlotStrongType>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419e63a0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::ConditionalRehash
          (longlong param_1,uint param_2,char param_3)

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



// FUNCTION 1419e6450 ConsoleCommandLoadPipelineFileCache body=301 status=ok
// SIG undefined ConsoleCommandLoadPipelineFileCache(void)

void ConsoleCommandLoadPipelineFileCache(longlong *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  void *local_18;
  int local_10;
  int iStack_c;
  
  if (DAT_1469f59c8 != 0) {
    FUN_1419e5120();
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  iStack_c = 0;
  if (DAT_146299580 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while ((&DAT_146299580)[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    iStack_c = 0;
    local_10 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,&DAT_146299580,(longlong)iVar2 * 2);
  }
  if ((0 < (int)param_1[1]) && (ppvVar1 = (void **)*param_1, &local_18 != ppvVar1)) {
    local_10 = *(int *)(ppvVar1 + 1);
    lVar3 = (longlong)local_10;
    _Src = *ppvVar1;
    if ((local_10 != 0) || (iStack_c != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 * 2);
    }
  }
  if (DAT_1469f59c8 != 0) {
    FUN_141a00de0(DAT_1469f59c8,&local_18,DAT_146ab62cc);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419e6580 ConsoleCommandSavePipelineFileCache body=75 status=ok
// SIG undefined ConsoleCommandSavePipelineFileCache(void)

void ConsoleCommandSavePipelineFileCache(void)

{
  char cVar1;
  
  cVar1 = FUN_1419f08d0();
  if ((cVar1 != '\0') && (DAT_1469f59c8 != 0)) {
    FUN_141a0a7d0(DAT_1469f59c8,1);
  }
  cVar1 = FUN_1419efa30();
  if ((cVar1 != '\0') && (DAT_1469f59c8 != 0)) {
    FUN_141a0a7d0(DAT_1469f59c8,2);
    return;
  }
  return;
}



// FUNCTION 1419e65d0 FUN_1419e65d0 body=607 status=ok
// SIG undefined FUN_1419e65d0(void)

void FUN_1419e65d0(longlong *param_1)

{
  wchar_t wVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  DWORD DVar6;
  wchar_t *pwVar7;
  wint_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *local_38;
  int local_30;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  _Src = *(void **)*param_1;
  puVar11 = (undefined2 *)0x0;
  local_30 = *(int *)((undefined8 *)*param_1 + 1);
  lVar12 = (longlong)local_30;
  local_38 = (undefined2 *)0x0;
  puVar10 = puVar11;
  if (local_30 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    puVar10 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar12 * 2);
  }
  iVar2 = local_30;
  pwVar7 = L"Pause";
  puVar9 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar9 = puVar10;
  }
  do {
    wVar1 = *(wchar_t *)((longlong)(puVar9 + -0xa26c59c4) + (longlong)pwVar7);
    if ((wVar1 == L'\0') && (*pwVar7 == L'\0')) goto LAB_1419e66ab;
    if (wVar1 != *pwVar7) {
      wVar4 = towlower(wVar1);
      wVar5 = towlower(*pwVar7);
      if (wVar4 != wVar5) break;
    }
    pwVar7 = pwVar7 + 1;
  } while( true );
  if (wVar4 != wVar5) {
    pwVar7 = L"Background";
    puVar9 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar9 = puVar10;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar9 + -0xa26c52ec) + (longlong)pwVar7);
      if ((wVar1 == L'\0') && (*pwVar7 == L'\0')) goto LAB_1419e671b;
      if (wVar1 != *pwVar7) {
        wVar4 = towlower(wVar1);
        wVar5 = towlower(*pwVar7);
        if (wVar4 != wVar5) goto LAB_1419e6711;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_1419e66ab:
  if (DAT_1469f59c8 != 0) {
    *(undefined1 *)(DAT_1469f59c8 + 0xc0) = 1;
  }
  goto LAB_1419e67fa;
LAB_1419e67d3:
  if (wVar4 == wVar5) {
LAB_1419e67dd:
    FUN_141a0cce0(1);
    if (DAT_1469f59c8 != 0) {
      *(undefined1 *)(DAT_1469f59c8 + 0xc0) = 0;
    }
  }
  goto LAB_1419e67fa;
LAB_1419e6711:
  if (wVar4 != wVar5) {
    pwVar8 = &DAT_144d8b398;
    puVar11 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar11 = puVar10;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar11 + -0xa26c59cc) + (longlong)pwVar8);
      if ((wVar4 == 0) && (*pwVar8 == 0)) goto LAB_1419e67dd;
      if (wVar4 != *pwVar8) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar8);
        if (wVar4 != wVar5) goto LAB_1419e67d3;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
LAB_1419e671b:
  if (DAT_1469f59c8 != 0) {
    *(undefined4 *)(DAT_1469f59c8 + 0xbc) = 0;
    lVar12 = DAT_1469f5c88;
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
      puVar11 = (undefined2 *)&DAT_00000004;
    }
    *(undefined4 *)(DAT_1469f59c8 + 0xb4) = *(undefined4 *)(lVar12 + (longlong)puVar11);
    if (DAT_1469f59c8 != 0) {
      *(undefined1 *)(DAT_1469f59c8 + 0xc0) = 0;
    }
  }
LAB_1419e67fa:
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  return;
}



// FUNCTION 1419e6830 FUN_1419e6830 body=77 status=ok
// SIG undefined FUN_1419e6830(void)

undefined8 * FUN_1419e6830(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1419d6310(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f592a0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419e6880 FUN_1419e6880 body=4 status=ok
// SIG undefined FUN_1419e6880(void)

void FUN_1419e6880(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001419e6880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))();
  return;
}



// FUNCTION 1419e6890 FUN_1419e6890 body=242 status=ok
// SIG undefined FUN_1419e6890(void)

undefined8 * FUN_1419e6890(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR__scalar_deleting_destructor__143f592a0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
    puVar2[0x12] = 0;
    *(undefined4 *)(puVar2 + 0x13) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x9c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xa4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xac) = 0;
    *(uint *)(puVar2 + 0x16) = *(uint *)(puVar2 + 0x16) & 0xfffffff8;
    *(undefined8 *)((longlong)puVar2 + 0xb4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xbc) = 0xbd9922df;
    iVar1 = (&DAT_1464c9c48)[DAT_1464c9c14];
    *puVar2 = &PTR__scalar_deleting_destructor__143f592a0;
    *(uint *)(puVar2 + 0x16) =
         (iVar1 << 3 ^ *(uint *)(puVar2 + 0x16)) & 0xf8 ^ *(uint *)(puVar2 + 0x16);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419e6990 ContainsEntry body=81 status=ok
// SIG undefined ContainsEntry(void)

undefined8 FShaderCodeArchive::ContainsEntry(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x80),local_res8);
  lVar2 = 0;
  if (local_res8[0] != -1) {
    lVar2 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x80);
  }
  lVar1 = lVar2 + 0x18;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
}



// FUNCTION 1419e69f0 ContainsParameterAllocation body=344 status=ok
// SIG undefined ContainsParameterAllocation(void)

bool FShaderParameterMap::ContainsParameterAllocation(longlong *param_1,short *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  
  puVar11 = (undefined2 *)0x0;
  local_28 = (undefined2 *)0x0;
  local_1c = 0;
  puVar8 = puVar11;
  iVar10 = 0;
  if ((param_2 != (short *)0x0) && (puVar8 = (undefined2 *)0x0, iVar10 = 0, *param_2 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    iVar6 = (int)lVar7 + 1;
    local_20 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar10 = local_20;
    puVar8 = local_28;
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)iVar6 * 2);
  }
  puVar5 = puVar11;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    puVar3 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar3 = puVar8;
    }
    iVar6 = FUN_140438070(puVar3);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar7 = *param_1;
      do {
        lVar9 = (longlong)iVar6 * 0x20;
        puVar3 = &DAT_143f3eda8;
        if (iVar10 != 0) {
          puVar3 = puVar8;
        }
        if (*(int *)(lVar9 + 8 + lVar7) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(lVar9 + lVar7);
        }
        iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
        if (iVar1 == 0) {
          if (iVar6 != -1) {
            puVar5 = (undefined2 *)(*param_1 + lVar9);
          }
          break;
        }
        lVar7 = *param_1;
        iVar6 = *(int *)(lVar9 + 0x18 + lVar7);
      } while (iVar6 != -1);
    }
  }
  puVar3 = puVar5 + 8;
  if (puVar5 == (undefined2 *)0x0) {
    puVar3 = puVar11;
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return puVar3 != (undefined2 *)0x0;
}



// FUNCTION 1419e6b50 CopyToEmptyStorage body=87 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_20f55ff5a2e8ef0d5cd32bc411544c14>_>::
     CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144d8e5e8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 1419e6bb0 FUN_1419e6bb0 body=344 status=ok
// SIG undefined FUN_1419e6bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1419e6bb0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  int local_58 [2];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  local_30 = param_3[4];
  local_2c = 5;
  *param_2 = 0;
  local_24 = 1;
  TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_58,&local_40);
  piVar3 = (int *)0x0;
  if (local_58[0] != -1) {
    piVar3 = (int *)((longlong)local_58[0] * 0x40 + *(longlong *)(param_1 + 0x38));
  }
  piVar2 = piVar3 + 8;
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[4] != 0)) {
    if (*piVar2 == piVar2[4]) {
      (**(code **)(*DAT_146ab6358 + 0x558))(DAT_146ab6358,local_58,&DAT_146ab6e78);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_58);
    }
    else {
      local_50[0] = 0;
      local_50[1] = 0;
      FShaderCacheHelperUncompressCode(*piVar2,piVar2 + 2,local_50);
      (**(code **)(*DAT_146ab6358 + 0x558))(DAT_146ab6358,local_58,&DAT_146ab6e78,local_50);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_58);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_3c,local_40);
    *(ulonglong *)(lVar1 + 0x20) = CONCAT44(uStack_34,uStack_38);
    *(undefined4 *)(lVar1 + 0x28) = local_30;
  }
  return param_2;
}



// FUNCTION 1419e6d10 FUN_1419e6d10 body=300 status=ok
// SIG undefined FUN_1419e6d10(void)

undefined8 * FUN_1419e6d10(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_28 [2];
  
  *param_2 = 0;
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x80);
  }
  lVar5 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    if ((*(int *)(lVar5 + 0x28) == 0) && (*(int *)(lVar5 + 0x20) == 0)) {
      FUN_141a09310(param_1,param_3,0);
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (lVar5 + 0x18 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      uVar4 = FUN_1419ec6e0(*(undefined4 *)(param_1 + 0x18),uVar1,lVar5 + 0x18,local_28);
      (**(code **)(*DAT_146ab6358 + 0x558))(DAT_146ab6358,local_res8,&DAT_146ab6e78,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res8);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1419e6e40 FUN_1419e6e40 body=435 status=ok
// SIG undefined FUN_1419e6e40(void)

ulonglong *
FUN_1419e6e40(ulonglong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  uVar8 = 0;
  *param_1 = 0;
  if (DAT_1469f5a08 != 0) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_18 = param_3[4];
    uVar5 = FUN_1419e7000(DAT_1469f5a08,local_res8,param_2,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,uVar5);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8);
    uVar8 = *param_1;
  }
  if (uVar8 == 0) {
    (**(code **)(*DAT_146ab6358 + 0x558))(DAT_146ab6358,local_res8,&DAT_146ab6e78,param_4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_res8);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8);
    uVar8 = *param_1;
    uVar9 = 0;
    if (uVar8 == 0) goto LAB_1419e6ef5;
  }
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar1 = param_3[4];
  *(undefined4 *)(uVar8 + 0x18) = *param_3;
  *(undefined4 *)(uVar8 + 0x1c) = uVar2;
  *(undefined4 *)(uVar8 + 0x20) = uVar3;
  *(undefined4 *)(uVar8 + 0x24) = uVar4;
  *(undefined4 *)(uVar8 + 0x28) = uVar1;
  uVar9 = *param_1;
LAB_1419e6ef5:
  iVar7 = (int)(uVar9 >> 4);
  uVar11 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
  uVar6 = -(uVar11 + iVar7) ^ uVar11 >> 0xd;
  uVar10 = (iVar7 - uVar11) - uVar6 ^ uVar6 >> 0xc;
  uVar11 = (uVar11 - uVar10) - uVar6 ^ uVar10 << 0x10;
  uVar6 = (uVar6 - uVar11) - uVar10 ^ uVar11 >> 5;
  uVar10 = (uVar10 - uVar11) - uVar6 ^ uVar6 >> 3;
  uVar11 = (uVar11 - uVar10) - uVar6 ^ uVar10 << 10;
  FUN_141ebd0f0((uVar6 - uVar11) - uVar10 ^ uVar11 >> 0xf);
  uVar8 = *param_1;
  iVar7 = (int)(uVar8 >> 4);
  uVar11 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
  uVar6 = -(uVar11 + iVar7) ^ uVar11 >> 0xd;
  uVar10 = (iVar7 - uVar11) - uVar6 ^ uVar6 >> 0xc;
  uVar11 = (uVar11 - uVar10) - uVar6 ^ uVar10 << 0x10;
  uVar6 = (uVar6 - uVar11) - uVar10 ^ uVar11 >> 5;
  uVar10 = (uVar10 - uVar11) - uVar6 ^ uVar6 >> 3;
  uVar11 = (uVar11 - uVar10) - uVar6 ^ uVar10 << 10;
  uVar5 = FPipelineFileCache::RegisterPSOStats((uVar6 - uVar11) - uVar10 ^ uVar11 >> 0xf);
  *(undefined8 *)(uVar8 + 0x30) = uVar5;
  return param_1;
}



// FUNCTION 1419e7000 FUN_1419e7000 body=450 status=ok
// SIG undefined FUN_1419e7000(void)

undefined8 *
FUN_1419e7000(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  
  *param_2 = 0;
  lVar3 = FShaderCodeLibraryImpl::FindShaderLibrary(param_1,param_4);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x79) != '\0') {
      local_38 = (undefined4)param_4[2];
      local_48 = *param_4;
      lStack_40 = param_4[1];
      (**(code **)(*DAT_146ab6358 + 0x550))(DAT_146ab6358,&local_58,&DAT_146ab6e78,lVar3,&local_48);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_58);
      return param_2;
    }
    local_58 = 0;
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x80,&local_50,param_4);
    lVar4 = 0;
    if ((int)local_50 != -1) {
      lVar4 = (longlong)(int)local_50 * 0x60 + *(longlong *)(lVar3 + 0x80);
    }
    lVar6 = lVar4 + 0x18;
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      }
      if ((*(int *)(lVar6 + 0x28) == 0) && (*(int *)(lVar6 + 0x20) == 0)) {
        FUN_141a09310(lVar3,param_4,0);
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (lVar6 + 0x18 != 0) {
        local_48 = 0;
        lStack_40 = 0;
        uVar5 = FUN_1419ec6e0(*(undefined4 *)(lVar3 + 0x18),uVar1,lVar6 + 0x18,&local_48);
        (**(code **)(*DAT_146ab6358 + 0x558))(DAT_146ab6358,&local_50,&DAT_146ab6e78,uVar5);
        local_58 = local_50;
        local_50 = 0;
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_50);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_58);
  }
  return param_2;
}



// FUNCTION 1419e71d0 FUN_1419e71d0 body=344 status=ok
// SIG undefined FUN_1419e71d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1419e71d0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  int local_58 [2];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  local_30 = param_3[4];
  local_2c = 2;
  *param_2 = 0;
  local_24 = 1;
  TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_58,&local_40);
  piVar3 = (int *)0x0;
  if (local_58[0] != -1) {
    piVar3 = (int *)((longlong)local_58[0] * 0x40 + *(longlong *)(param_1 + 0x38));
  }
  piVar2 = piVar3 + 8;
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[4] != 0)) {
    if (*piVar2 == piVar2[4]) {
      (**(code **)(*DAT_146ab6358 + 0x578))(DAT_146ab6358,local_58,&DAT_146ab6e78);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
    }
    else {
      local_50[0] = 0;
      local_50[1] = 0;
      FShaderCacheHelperUncompressCode(*piVar2,piVar2 + 2,local_50);
      (**(code **)(*DAT_146ab6358 + 0x578))(DAT_146ab6358,local_58,&DAT_146ab6e78,local_50);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_3c,local_40);
    *(ulonglong *)(lVar1 + 0x20) = CONCAT44(uStack_34,uStack_38);
    *(undefined4 *)(lVar1 + 0x28) = local_30;
  }
  return param_2;
}



// FUNCTION 1419e7330 FUN_1419e7330 body=300 status=ok
// SIG undefined FUN_1419e7330(void)

undefined8 * FUN_1419e7330(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_28 [2];
  
  *param_2 = 0;
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x80);
  }
  lVar5 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    if ((*(int *)(lVar5 + 0x28) == 0) && (*(int *)(lVar5 + 0x20) == 0)) {
      FUN_141a09310(param_1,param_3,0);
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (lVar5 + 0x18 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      uVar4 = FUN_1419ec6e0(*(undefined4 *)(param_1 + 0x18),uVar1,lVar5 + 0x18,local_28);
      (**(code **)(*DAT_146ab6358 + 0x578))(DAT_146ab6358,local_res8,&DAT_146ab6e78,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1419e7460 FUN_1419e7460 body=202 status=ok
// SIG undefined FUN_1419e7460(void)

longlong *
FUN_1419e7460(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar3 = 0;
  *param_1 = 0;
  if (DAT_1469f5a08 != 0) {
    local_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_18 = *(undefined4 *)(param_3 + 2);
    uVar2 = FUN_1419e7530(DAT_1469f5a08,local_res8,param_2,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,uVar2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
  }
  if (lVar3 == 0) {
    (**(code **)(*DAT_146ab6358 + 0x578))(DAT_146ab6358,local_res8,&DAT_146ab6e78,param_4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  uVar2 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(lVar3 + 0x18) = *param_3;
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  *(undefined4 *)(lVar3 + 0x28) = uVar1;
  return param_1;
}



// FUNCTION 1419e7530 FUN_1419e7530 body=450 status=ok
// SIG undefined FUN_1419e7530(void)

undefined8 *
FUN_1419e7530(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  
  *param_2 = 0;
  lVar3 = FShaderCodeLibraryImpl::FindShaderLibrary(param_1,param_4);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x79) != '\0') {
      local_38 = (undefined4)param_4[2];
      local_48 = *param_4;
      lStack_40 = param_4[1];
      (**(code **)(*DAT_146ab6358 + 0x570))(DAT_146ab6358,&local_58,&DAT_146ab6e78,lVar3,&local_48);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
      return param_2;
    }
    local_58 = 0;
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x80,&local_50,param_4);
    lVar4 = 0;
    if ((int)local_50 != -1) {
      lVar4 = (longlong)(int)local_50 * 0x60 + *(longlong *)(lVar3 + 0x80);
    }
    lVar6 = lVar4 + 0x18;
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      }
      if ((*(int *)(lVar6 + 0x28) == 0) && (*(int *)(lVar6 + 0x20) == 0)) {
        FUN_141a09310(lVar3,param_4,0);
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (lVar6 + 0x18 != 0) {
        local_48 = 0;
        lStack_40 = 0;
        uVar5 = FUN_1419ec6e0(*(undefined4 *)(lVar3 + 0x18),uVar1,lVar6 + 0x18,&local_48);
        (**(code **)(*DAT_146ab6358 + 0x578))(DAT_146ab6358,&local_50,&DAT_146ab6e78,uVar5);
        local_58 = local_50;
        local_50 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  }
  return param_2;
}



// FUNCTION 1419e7700 FUN_1419e7700 body=344 status=ok
// SIG undefined FUN_1419e7700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1419e7700(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  int local_58 [2];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  local_30 = param_3[4];
  local_2c = 4;
  *param_2 = 0;
  local_24 = 1;
  TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_58,&local_40);
  piVar3 = (int *)0x0;
  if (local_58[0] != -1) {
    piVar3 = (int *)((longlong)local_58[0] * 0x40 + *(longlong *)(param_1 + 0x38));
  }
  piVar2 = piVar3 + 8;
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[4] != 0)) {
    if (*piVar2 == piVar2[4]) {
      (**(code **)(*DAT_146ab6358 + 0x538))(DAT_146ab6358,local_58,&DAT_146ab6e78);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
    }
    else {
      local_50[0] = 0;
      local_50[1] = 0;
      FShaderCacheHelperUncompressCode(*piVar2,piVar2 + 2,local_50);
      (**(code **)(*DAT_146ab6358 + 0x538))(DAT_146ab6358,local_58,&DAT_146ab6e78,local_50);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_3c,local_40);
    *(ulonglong *)(lVar1 + 0x20) = CONCAT44(uStack_34,uStack_38);
    *(undefined4 *)(lVar1 + 0x28) = local_30;
  }
  return param_2;
}



// FUNCTION 1419e7860 FUN_1419e7860 body=300 status=ok
// SIG undefined FUN_1419e7860(void)

undefined8 * FUN_1419e7860(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_28 [2];
  
  *param_2 = 0;
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x80);
  }
  lVar5 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    if ((*(int *)(lVar5 + 0x28) == 0) && (*(int *)(lVar5 + 0x20) == 0)) {
      FUN_141a09310(param_1,param_3,0);
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (lVar5 + 0x18 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      uVar4 = FUN_1419ec6e0(*(undefined4 *)(param_1 + 0x18),uVar1,lVar5 + 0x18,local_28);
      (**(code **)(*DAT_146ab6358 + 0x538))(DAT_146ab6358,local_res8,&DAT_146ab6e78,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1419e7990 FUN_1419e7990 body=202 status=ok
// SIG undefined FUN_1419e7990(void)

longlong *
FUN_1419e7990(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar3 = 0;
  *param_1 = 0;
  if (DAT_1469f5a08 != 0) {
    local_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_18 = *(undefined4 *)(param_3 + 2);
    uVar2 = FUN_1419e7a60(DAT_1469f5a08,local_res8,param_2,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,uVar2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
  }
  if (lVar3 == 0) {
    (**(code **)(*DAT_146ab6358 + 0x538))(DAT_146ab6358,local_res8,&DAT_146ab6e78,param_4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  uVar2 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(lVar3 + 0x18) = *param_3;
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  *(undefined4 *)(lVar3 + 0x28) = uVar1;
  return param_1;
}



// FUNCTION 1419e7a60 FUN_1419e7a60 body=450 status=ok
// SIG undefined FUN_1419e7a60(void)

undefined8 *
FUN_1419e7a60(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  
  *param_2 = 0;
  lVar3 = FShaderCodeLibraryImpl::FindShaderLibrary(param_1,param_4);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x79) != '\0') {
      local_38 = (undefined4)param_4[2];
      local_48 = *param_4;
      lStack_40 = param_4[1];
      (**(code **)(*DAT_146ab6358 + 0x530))(DAT_146ab6358,&local_58,&DAT_146ab6e78,lVar3,&local_48);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
      return param_2;
    }
    local_58 = 0;
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x80,&local_50,param_4);
    lVar4 = 0;
    if ((int)local_50 != -1) {
      lVar4 = (longlong)(int)local_50 * 0x60 + *(longlong *)(lVar3 + 0x80);
    }
    lVar6 = lVar4 + 0x18;
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      }
      if ((*(int *)(lVar6 + 0x28) == 0) && (*(int *)(lVar6 + 0x20) == 0)) {
        FUN_141a09310(lVar3,param_4,0);
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (lVar6 + 0x18 != 0) {
        local_48 = 0;
        lStack_40 = 0;
        uVar5 = FUN_1419ec6e0(*(undefined4 *)(lVar3 + 0x18),uVar1,lVar6 + 0x18,&local_48);
        (**(code **)(*DAT_146ab6358 + 0x538))(DAT_146ab6358,&local_50,&DAT_146ab6e78,uVar5);
        local_58 = local_50;
        local_50 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  }
  return param_2;
}



// FUNCTION 1419e7c30 FUN_1419e7c30 body=429 status=ok
// SIG undefined FUN_1419e7c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1419e7c30(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_78 [2];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  uStack_54 = param_3[3];
  local_50 = param_3[4];
  *param_2 = 0;
  local_4c = 4;
  local_44 = 1;
  TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_78,&local_60);
  piVar3 = (int *)0x0;
  if (local_78[0] != -1) {
    piVar3 = (int *)((longlong)local_78[0] * 0x40 + *(longlong *)(param_1 + 0x38));
  }
  piVar2 = piVar3 + 8;
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[4] != 0)) {
    local_98 = param_4;
    if (*piVar2 == piVar2[4]) {
      local_80 = param_7;
      local_88 = param_6;
      local_90 = param_5;
      (**(code **)(*DAT_146ab6358 + 0x548))(DAT_146ab6358,local_78,&DAT_146ab6e78);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_78);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
    }
    else {
      local_70[0] = 0;
      local_70[1] = 0;
      FShaderCacheHelperUncompressCode(*piVar2,piVar2 + 2,local_70);
      local_80 = param_7;
      local_88 = param_6;
      local_90 = param_5;
      (**(code **)(*DAT_146ab6358 + 0x548))(DAT_146ab6358,local_78,&DAT_146ab6e78,local_70);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_78);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
      if (local_70[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_5c,local_60);
    *(ulonglong *)(lVar1 + 0x20) = CONCAT44(uStack_54,uStack_58);
    *(undefined4 *)(lVar1 + 0x28) = local_50;
  }
  return param_2;
}



// FUNCTION 1419e7de0 FUN_1419e7de0 body=360 status=ok
// SIG undefined FUN_1419e7de0(void)

undefined8 *
FUN_1419e7de0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_38 [2];
  
  *param_2 = 0;
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x80);
  }
  lVar5 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    if ((*(int *)(lVar5 + 0x28) == 0) && (*(int *)(lVar5 + 0x20) == 0)) {
      FUN_141a09310(param_1,param_3,0);
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (lVar5 + 0x18 != 0) {
      local_38[0] = 0;
      local_38[1] = 0;
      uVar4 = FUN_1419ec6e0(*(undefined4 *)(param_1 + 0x18),uVar1,lVar5 + 0x18,local_38);
      (**(code **)(*DAT_146ab6358 + 0x548))
                (DAT_146ab6358,local_res8,&DAT_146ab6e78,uVar4,param_4,param_5,param_6,param_7);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1419e7f50 FUN_1419e7f50 body=515 status=ok
// SIG undefined FUN_1419e7f50(void)

undefined8 *
FUN_1419e7f50(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar9;
  undefined8 local_78;
  undefined8 local_70;
  int local_68 [4];
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  *param_2 = 0;
  local_70 = CONCAT44(local_70._4_4_,param_8);
  lVar2 = FShaderCodeLibraryImpl::FindShaderLibrary(param_1,param_4);
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x79) == '\0') {
      lVar3 = 0;
      local_78 = 0;
      TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
      ::FindId(lVar2 + 0x80,local_68,param_4);
      if (local_68[0] != -1) {
        lVar3 = (longlong)local_68[0] * 0x60 + *(longlong *)(lVar2 + 0x80);
      }
      lVar5 = lVar3 + 0x18;
      if (lVar3 == 0) {
        lVar5 = 0;
      }
      if (lVar5 != 0) {
        BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x58));
        if (BVar1 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x58));
        }
        if ((*(int *)(lVar5 + 0x28) == 0) && (*(int *)(lVar5 + 0x20) == 0)) {
          FUN_141a09310(lVar2,param_4,0);
        }
        uVar6 = *(undefined4 *)(lVar5 + 0x10);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x58));
        if (lVar5 + 0x18 != 0) {
          local_58 = 0;
          lStack_50 = 0;
          uVar4 = FUN_1419ec6e0(*(undefined4 *)(lVar2 + 0x18),uVar6,lVar5 + 0x18,&local_58);
          (**(code **)(*DAT_146ab6358 + 0x548))
                    (DAT_146ab6358,&local_70,&DAT_146ab6e78,uVar4,param_5,CONCAT44(uVar7,param_6),
                     param_7,CONCAT44(uVar9,(undefined4)local_70));
          local_78 = local_70;
          local_70 = 0;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_70);
          if (local_58 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    else {
      local_48 = (undefined4)param_4[2];
      local_58 = *param_4;
      lStack_50 = param_4[1];
      (**(code **)(*DAT_146ab6358 + 0x540))
                (DAT_146ab6358,&local_78,&DAT_146ab6e78,param_5,CONCAT44(uVar6,param_6),param_7,
                 CONCAT44(uVar8,param_8),lVar2,&local_58);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_78);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
  }
  return param_2;
}



// FUNCTION 1419e8160 CreateHLSLUniformBufferDeclaration body=802 status=ok
// SIG undefined CreateHLSLUniformBufferDeclaration(void)

undefined8 * CreateHLSLUniformBufferDeclaration(undefined8 *param_1,short *param_2,longlong param_3)

{
  void *pvVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int local_res20;
  undefined4 local_a4;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  
  if (0 < *(int *)(param_3 + 0x68)) {
    local_90 = (void *)0x0;
    local_88 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90);
    FGenericPlatformString::Memcpy(local_90,&DAT_144d85cc4,4);
    local_a0 = (void *)0x0;
    pvVar1 = (void *)0x0;
    pvVar11 = local_90;
    local_98 = local_88;
    if ((param_2 != (short *)0x0) && (pvVar1 = (void *)0x0, *param_2 != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      iVar6 = (int)lVar7 + 1;
      local_98._4_4_ = 0;
      iVar9 = local_98._4_4_;
      local_98._4_4_ = 0;
      local_98._0_4_ = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
        iVar9 = local_98._4_4_;
      }
      local_98._4_4_ = iVar9;
      iVar10 = local_98._4_4_;
      iVar9 = (int)local_98;
      pvVar1 = local_a0;
      FGenericPlatformString::Memcpy(local_a0,param_2,(longlong)iVar6 * 2);
      pvVar11 = local_90;
      local_98 = local_88;
      if (1 < iVar9) {
        iVar6 = 0;
        if ((int)local_88 != 0) {
          iVar6 = (int)local_88 + -1;
        }
        if ((iVar9 != 0) || (iVar2 = 1, iVar6 == 0)) {
          iVar2 = 0;
        }
        local_a0 = pvVar1;
        local_98._4_4_ = iVar10;
        if (iVar10 < iVar2 + iVar9 + iVar6) {
          local_98._0_4_ = iVar9;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0);
          iVar9 = (int)local_98;
        }
        pvVar11 = local_a0;
        iVar10 = iVar9;
        local_res20 = local_98._4_4_;
        if (iVar6 != 0) {
          local_98._0_4_ = iVar9 + (uint)(iVar9 == 0) + iVar6;
          if (local_98._4_4_ < (int)local_98) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
          }
          local_res20 = local_98._4_4_;
          iVar10 = (int)local_98;
          pvVar11 = local_a0;
          pvVar1 = (void *)((longlong)local_a0 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,local_90,(longlong)iVar6 * 2);
          *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
        }
        local_98 = CONCAT44(local_res20,iVar10);
        pvVar1 = local_90;
      }
    }
    local_a0 = pvVar11;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    local_78 = (undefined2 *)0x0;
    local_70 = 0;
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
    local_58 = (undefined2 *)0x0;
    local_50 = 0;
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    local_a4 = 0;
    FUN_1419e8490(param_3,&local_a0,0,&local_78,&local_a4);
    puVar5 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar5 = local_48;
    }
    puVar4 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar4 = local_58;
    }
    puVar3 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar3 = local_68;
    }
    puVar8 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar8 = local_78;
    }
    FString::PrintfImpl(param_1,
                        L"#ifndef __UniformBuffer_%s_Definition__\r\n#define __UniformBuffer_%s_Definition__\r\ncbuffer %s\r\n{\r\n%s}\r\n%sstatic const struct\r\n{\r\n%s} %s = %s;\r\n#endif\r\n"
                        ,param_2,param_2,param_2,puVar8,puVar3,puVar4,param_2,puVar5,param_2);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
  FGenericPlatformString::Memcpy(*param_1,&DAT_144d85d0c,4);
  return param_1;
}



// FUNCTION 1419e8490 FUN_1419e8490 body=4056 status=ok
// SIG undefined FUN_1419e8490(void)

void FUN_1419e8490(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4,uint *param_5)

{
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *_Src;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *local_148;
  undefined8 local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined2 *local_128;
  undefined8 local_120;
  undefined2 *local_118;
  longlong *local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined8 local_d8;
  int local_d0;
  void *local_c8;
  int local_c0;
  void *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  void *local_98;
  int local_90;
  void *local_88;
  int local_80;
  longlong local_78;
  undefined2 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58 [3];
  
  iVar10 = (int)param_4[7];
  plVar18 = param_4 + 6;
  iVar4 = (2 - (uint)(iVar10 != 0)) + iVar10;
  *(int *)(param_4 + 7) = iVar4;
  local_110 = plVar18;
  if (*(int *)((longlong)param_4 + 0x3c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar18,iVar10);
  }
  local_120 = 6;
  local_128 = (undefined2 *)0x0;
  puVar11 = (undefined2 *)(*plVar18 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
  *puVar11 = 0x7b;
  puVar11[1] = 0;
  local_d0 = (int)param_4[7] + -1;
  if ((int)param_4[7] == 0) {
    local_d0 = 0;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"float");
  iVar10 = *(int *)(param_1 + 0x68);
  local_138 = 0;
  if (0 < iVar10) {
    local_78 = 0;
    do {
      local_118 = (undefined2 *)0x0;
      puVar14 = (undefined8 *)(local_78 * 0x30 + *(longlong *)(param_1 + 0x60));
      local_12c = 0;
      local_60 = puVar14;
      if (*(int *)((longlong)puVar14 + 0x24) != 0) {
        FString::PrintfImpl(&local_70,L"[%u]");
        local_118 = local_70;
        local_70 = (undefined2 *)0x0;
        local_12c = (int)local_68;
        local_68 = 0;
      }
      iVar4 = local_12c;
      iVar10 = *(int *)((longlong)puVar14 + 0x14);
      if (iVar10 == 5) {
        plVar1 = param_4 + 4;
        iVar10 = (int)param_4[5];
        iVar5 = (0xb - (uint)(iVar10 != 0)) + iVar10;
        *(int *)(param_4 + 5) = iVar5;
        if (*(int *)((longlong)param_4 + 0x2c) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
        }
        lVar8 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
        builtin_wcsncpy((wchar_t *)(*plVar1 + lVar8 * 2),L"struct {",8);
        lVar8 = *plVar1 + lVar8 * 2;
        *(undefined4 *)(lVar8 + 0x10) = 0xa000d;
        *(undefined2 *)(lVar8 + 0x14) = 0;
        iVar10 = (int)plVar18[1];
        iVar5 = (2 - (uint)(iVar10 != 0)) + iVar10;
        *(int *)(plVar18 + 1) = iVar5;
        if (*(int *)((longlong)plVar18 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar18,iVar10);
        }
        puVar11 = (undefined2 *)(*plVar18 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
        *puVar11 = 0x2c;
        puVar11[1] = 0;
        iVar10 = *(int *)(puVar14 + 2);
        if (*(int *)(param_2 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*param_2;
        }
        FString::PrintfImpl(local_58,L"%s%s_",puVar11,*puVar14);
        FUN_1419e8490(puVar14[5],local_58,param_3 + iVar10,param_4,param_5);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        puVar11 = &DAT_143f3eda8;
        if (iVar4 != 0) {
          puVar11 = local_118;
        }
        FString::PrintfImpl(&local_c8,L"} %s%s;\r\n",*puVar14,puVar11);
        pvVar3 = local_c8;
        if (local_c0 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = local_c0 + -1;
        }
        if (iVar10 != 0) {
          iVar4 = (int)param_4[5];
          iVar5 = (uint)(iVar4 == 0) + iVar10 + iVar4;
          *(int *)(param_4 + 5) = iVar5;
          if (*(int *)((longlong)param_4 + 0x2c) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
          }
          pvVar2 = (void *)(*plVar1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
          *(undefined2 *)((longlong)pvVar2 + (longlong)iVar10 * 2) = 0;
        }
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
        }
LAB_1419e8ee8:
        if (local_118 != (undefined2 *)0x0) {
          FMemory::Free(local_118);
        }
      }
      else {
        if (3 < iVar10 - 6U) {
          local_148 = (undefined8 *)0x0;
          local_140 = 0;
          puVar16 = (undefined8 *)0x0;
          if (iVar10 == 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148,5);
            uVar13 = (uint)local_140 + 5;
            local_140 = CONCAT44(local_140._4_4_,uVar13);
            if (local_140._4_4_ < (int)uVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148);
              uVar13 = (uint)local_140;
            }
            puVar16 = (undefined8 *)(ulonglong)uVar13;
            *local_148 = 0x6c006f006f0062;
LAB_1419e8a1c:
            *(undefined2 *)(local_148 + 1) = 0;
            _Src = local_148;
          }
          else if (iVar10 == 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148,4);
            uVar13 = (uint)local_140 + 4;
            local_140 = CONCAT44(local_140._4_4_,uVar13);
            if (local_140._4_4_ < (int)uVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148);
              uVar13 = (uint)local_140;
            }
            puVar16 = (undefined8 *)(ulonglong)uVar13;
            *local_148 = 0x74006e0069;
            _Src = local_148;
          }
          else {
            if (iVar10 == 3) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148,5);
              uVar13 = (uint)local_140 + 5;
              local_140 = CONCAT44(local_140._4_4_,uVar13);
              if (local_140._4_4_ < (int)uVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148);
                uVar13 = (uint)local_140;
              }
              puVar16 = (undefined8 *)(ulonglong)uVar13;
              *local_148 = 0x74006e00690075;
              goto LAB_1419e8a1c;
            }
            if (iVar10 == 4) {
              iVar10 = *(int *)(puVar14 + 3);
              if (iVar10 == 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148,6);
                uVar13 = (uint)local_140 + 6;
                local_140 = CONCAT44(local_140._4_4_,uVar13);
                if (local_140._4_4_ < (int)uVar13) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148);
                  uVar13 = (uint)local_140;
                }
                puVar16 = (undefined8 *)(ulonglong)uVar13;
                *local_148 = 0x61006f006c0066;
                *(undefined4 *)(local_148 + 1) = 0x74;
                _Src = local_148;
              }
              else {
                if (iVar10 == 1) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148,5);
                  uVar13 = (uint)local_140 + 5;
                  local_140 = CONCAT44(local_140._4_4_,uVar13);
                  if (local_140._4_4_ < (int)uVar13) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148);
                    uVar13 = (uint)local_140;
                  }
                  puVar16 = (undefined8 *)(ulonglong)uVar13;
                  *local_148 = 0x66006c00610068;
                  goto LAB_1419e8a1c;
                }
                _Src = (undefined8 *)0x0;
                if (iVar10 == 2) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148,6);
                  uVar13 = (uint)local_140 + 6;
                  local_140 = CONCAT44(local_140._4_4_,uVar13);
                  if (local_140._4_4_ < (int)uVar13) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148);
                    uVar13 = (uint)local_140;
                  }
                  puVar16 = (undefined8 *)(ulonglong)uVar13;
                  *local_148 = 0x65007800690066;
                  *(undefined4 *)(local_148 + 1) = 100;
                  _Src = local_148;
                }
              }
            }
            else {
              LowLevelFatalErrorHandler
                        ("Unknown",0xd0,L"Unrecognized uniform buffer struct member base type.");
              FDebug::AssertFailed
                        (&DAT_144d85aea,"Unknown",0xd0,
                         L"Unrecognized uniform buffer struct member base type.");
              _Src = (undefined8 *)0x0;
              puVar16 = (undefined8 *)0x0;
            }
          }
          local_134 = 4;
          local_e8 = (undefined2 *)0x0;
          local_130 = 0;
          if (*(uint *)((longlong)puVar14 + 0x1c) < 2) {
            if (1 < *(uint *)(puVar14 + 4)) {
              FString::PrintfImpl(&local_108,&DAT_144d86c04);
              local_e8 = local_108;
              local_130 = (int)local_100;
              local_100 = 0;
              local_108 = (undefined2 *)0x0;
              local_134 = *(int *)(puVar14 + 4) << 2;
            }
          }
          else {
            FString::PrintfImpl(&local_e0,L"%ux%u",*(uint *)((longlong)puVar14 + 0x1c),
                                *(uint *)(puVar14 + 4));
            local_e8 = local_e0;
            local_e0 = (undefined2 *)0x0;
            local_130 = (int)local_d8;
            local_d8 = 0;
            local_134 = (*(int *)(puVar14 + 4) + *(int *)((longlong)puVar14 + 0x1c) * 4) * 4 + -0x10
            ;
          }
          if (*(int *)((longlong)puVar14 + 0x24) != 0) {
            local_134 = local_134 +
                        (local_134 + 0xfU & 0xfffffff0) * (*(int *)((longlong)puVar14 + 0x24) + -1);
          }
          uVar17 = param_3 + *(int *)(puVar14 + 2);
          uVar13 = *param_5;
          iVar10 = (int)puVar16;
          if (uVar13 < uVar17) {
            iVar10 = (int)local_120;
            do {
              if (*(int *)(param_2 + 1) == 0) {
                puVar11 = &DAT_143f3eda8;
              }
              else {
                puVar11 = (undefined2 *)*param_2;
              }
              puVar7 = &DAT_143f3eda8;
              if (iVar10 != 0) {
                puVar7 = local_128;
              }
              FString::PrintfImpl(&local_b8,L"\t%s PrePadding_%s%u;\r\n",puVar7,puVar11,uVar13);
              pvVar3 = local_b8;
              if (local_b0 == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = local_b0 + -1;
              }
              if (iVar4 != 0) {
                iVar5 = (int)param_4[1];
                iVar6 = (uint)(iVar5 == 0) + iVar4 + iVar5;
                *(int *)(param_4 + 1) = iVar6;
                if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar5);
                }
                pvVar2 = (void *)(*param_4 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar4 * 2);
                *(undefined2 *)((longlong)pvVar2 + (longlong)iVar4 * 2) = 0;
              }
              if (local_b8 != (void *)0x0) {
                FMemory::Free(local_b8);
              }
              uVar13 = *param_5 + 4;
              *param_5 = uVar13;
            } while (uVar13 < uVar17);
            puVar14 = local_60;
            _Src = local_148;
            iVar10 = (uint)local_140;
          }
          local_120 = CONCAT44(local_120._4_4_,iVar10);
          if ((iVar10 == 0) && (local_120._4_4_ == 0)) {
            local_120 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,iVar10);
            _guard_xfg_dispatch_icall_nop(local_128,_Src,(longlong)iVar10 * 2);
          }
          *param_5 = local_134 + uVar17;
          if (*(int *)(param_2 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*param_2;
          }
          FString::PrintfImpl(&local_f8,L"%s%s",puVar11,*puVar14);
          iVar4 = local_130;
          puVar11 = &DAT_143f3eda8;
          if (local_12c != 0) {
            puVar11 = local_118;
          }
          puVar7 = &DAT_143f3eda8;
          if (local_f0 != 0) {
            puVar7 = local_f8;
          }
          puVar12 = &DAT_143f3eda8;
          if (local_130 != 0) {
            puVar12 = local_e8;
          }
          puVar16 = (undefined8 *)&DAT_143f3eda8;
          if (iVar10 != 0) {
            puVar16 = _Src;
          }
          FString::PrintfImpl(&local_a8,L"\t%s%s %s%s;\r\n",puVar16,puVar12,puVar7,puVar11);
          pvVar3 = local_a8;
          if (local_a0 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = local_a0 + -1;
          }
          if (iVar5 != 0) {
            iVar4 = (int)param_4[1];
            iVar6 = (uint)(iVar4 == 0) + iVar5 + iVar4;
            *(int *)(param_4 + 1) = iVar6;
            if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
            }
            pvVar2 = (void *)(*param_4 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar5 * 2);
            *(undefined2 *)((longlong)pvVar2 + (longlong)iVar5 * 2) = 0;
            iVar4 = local_130;
          }
          if (local_a8 != (void *)0x0) {
            FMemory::Free(local_a8);
          }
          puVar11 = local_e8;
          puVar7 = &DAT_143f3eda8;
          if (local_12c != 0) {
            puVar7 = local_118;
          }
          puVar12 = &DAT_143f3eda8;
          if (iVar4 != 0) {
            puVar12 = local_e8;
          }
          puVar16 = (undefined8 *)&DAT_143f3eda8;
          if (iVar10 != 0) {
            puVar16 = _Src;
          }
          FString::PrintfImpl(&local_98,L"\t%s%s %s%s;\r\n",puVar16,puVar12,*puVar14,puVar7);
          pvVar3 = local_98;
          if (local_90 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = local_90 + -1;
          }
          iVar4 = 0;
          if (iVar10 != 0) {
            iVar5 = (int)param_4[5];
            iVar6 = (uint)(iVar5 == 0) + iVar10 + iVar5;
            *(int *)(param_4 + 5) = iVar6;
            if (*(int *)((longlong)param_4 + 0x2c) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4 + 4,iVar5);
            }
            pvVar2 = (void *)(param_4[4] + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
            *(undefined2 *)((longlong)pvVar2 + (longlong)iVar10 * 2) = 0;
          }
          if (local_98 != (void *)0x0) {
            FMemory::Free(local_98);
          }
          FString::PrintfImpl(&local_88,&DAT_144d88b40);
          pvVar3 = local_88;
          plVar18 = local_110;
          if (local_80 != 0) {
            iVar4 = local_80 + -1;
          }
          if (iVar4 != 0) {
            iVar10 = (int)local_110[1];
            iVar5 = (uint)(iVar10 == 0) + iVar4 + iVar10;
            *(int *)(local_110 + 1) = iVar5;
            if (*(int *)((longlong)local_110 + 0xc) < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_110,iVar10);
            }
            pvVar2 = (void *)(*plVar18 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar4 * 2);
            *(undefined2 *)((longlong)pvVar2 + (longlong)iVar4 * 2) = 0;
          }
          if (local_88 != (void *)0x0) {
            FMemory::Free(local_88);
          }
          if (local_f8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (puVar11 != (undefined2 *)0x0) {
            FMemory::Free(puVar11);
          }
          if (_Src != (undefined8 *)0x0) {
            FMemory::Free(_Src);
          }
          goto LAB_1419e8ee8;
        }
        if (local_118 != (undefined2 *)0x0) {
          FMemory::Free(local_118);
        }
      }
      local_138 = local_138 + 1;
      local_78 = local_78 + 1;
      iVar10 = *(int *)(param_1 + 0x68);
    } while (local_138 < iVar10);
  }
  uVar9 = 0;
  uVar15 = uVar9;
  if (0 < iVar10) {
    do {
      puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar15);
      if (*(int *)((longlong)puVar14 + 0x14) - 6U < 4) {
        iVar10 = 0;
        if (*(int *)((longlong)puVar14 + 0x14) == 6) {
          if (*(int *)(param_2 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*param_2;
          }
          FString::PrintfImpl(&local_f8,L"%s%s",puVar11,*puVar14);
          puVar11 = &DAT_143f3eda8;
          if (local_f0 != 0) {
            puVar11 = local_f8;
          }
          FString::PrintfImpl(&local_88,L"PLATFORM_SUPPORTS_SRV_UB_MACRO( %s %s; ) \r\n",puVar14[1],
                              puVar11);
          pvVar3 = local_88;
          if (local_80 != 0) {
            iVar10 = local_80 + -1;
          }
          if (iVar10 != 0) {
            iVar4 = (int)param_4[3];
            iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar10;
            *(int *)(param_4 + 3) = iVar5;
            if (*(int *)((longlong)param_4 + 0x1c) < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4 + 2,iVar4);
            }
            pvVar2 = (void *)(param_4[2] + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
            *(undefined2 *)((longlong)pvVar2 + (longlong)iVar10 * 2) = 0;
          }
          if (local_88 != (void *)0x0) {
            FMemory::Free(local_88);
          }
          FString::PrintfImpl(&local_98,L"\tPLATFORM_SUPPORTS_SRV_UB_MACRO( %s %s; ) \r\n",
                              puVar14[1],*puVar14);
          pvVar3 = local_98;
          if (local_90 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = local_90 + -1;
          }
          iVar4 = 0;
          if (iVar10 != 0) {
            iVar5 = (int)param_4[5];
            iVar6 = (uint)(iVar5 == 0) + iVar5 + iVar10;
            *(int *)(param_4 + 5) = iVar6;
            if (*(int *)((longlong)param_4 + 0x2c) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4 + 4,iVar5);
            }
            pvVar2 = (void *)(param_4[4] + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
            *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
          }
          if (local_98 != (void *)0x0) {
            FMemory::Free(local_98);
          }
          FString::PrintfImpl(&local_a8,L" PLATFORM_SUPPORTS_SRV_UB_MACRO( ,%s ) ");
          pvVar3 = local_a8;
          plVar18 = local_110;
          if (local_a0 != 0) {
            iVar4 = local_a0 + -1;
          }
          if (iVar4 != 0) {
            iVar10 = (int)local_110[1];
            iVar5 = (uint)(iVar10 == 0) + iVar10 + iVar4;
            *(int *)(local_110 + 1) = iVar5;
            if (*(int *)((longlong)local_110 + 0xc) < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_110,iVar10);
            }
            pvVar2 = (void *)(*plVar18 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar4 * 2);
            *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar2) = 0;
          }
          puVar11 = local_f8;
          if (local_a8 != (void *)0x0) {
            FMemory::Free(local_a8);
            puVar11 = local_f8;
          }
        }
        else {
          if (*(int *)(param_2 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*param_2;
          }
          FString::PrintfImpl(&local_108,L"%s%s",puVar11,*puVar14);
          puVar11 = &DAT_143f3eda8;
          if ((int)local_100 != 0) {
            puVar11 = local_108;
          }
          FString::PrintfImpl(&local_b8,L"%s %s;\r\n",puVar14[1],puVar11);
          pvVar3 = local_b8;
          if (local_b0 != 0) {
            iVar10 = local_b0 + -1;
          }
          if (iVar10 != 0) {
            iVar4 = (int)param_4[3];
            iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar10;
            *(int *)(param_4 + 3) = iVar5;
            if (*(int *)((longlong)param_4 + 0x1c) < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4 + 2,iVar4);
            }
            pvVar2 = (void *)(param_4[2] + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
            *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
          }
          if (local_b8 != (void *)0x0) {
            FMemory::Free(local_b8);
          }
          FString::PrintfImpl(&local_c8,L"\t%s %s;\r\n",puVar14[1],*puVar14);
          pvVar3 = local_c8;
          if (local_c0 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = local_c0 + -1;
          }
          iVar4 = 0;
          if (iVar10 != 0) {
            iVar5 = (int)param_4[5];
            iVar6 = (uint)(iVar5 == 0) + iVar5 + iVar10;
            *(int *)(param_4 + 5) = iVar6;
            if (*(int *)((longlong)param_4 + 0x2c) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4 + 4,iVar5);
            }
            pvVar2 = (void *)(param_4[4] + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
            *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free(local_c8);
          }
          FString::PrintfImpl(&local_e0,&DAT_144d88ca0);
          puVar11 = local_e0;
          plVar18 = local_110;
          if ((int)local_d8 != 0) {
            iVar4 = (int)local_d8 + -1;
          }
          if (iVar4 != 0) {
            iVar10 = (int)local_110[1];
            iVar5 = (uint)(iVar10 == 0) + iVar10 + iVar4;
            *(int *)(local_110 + 1) = iVar5;
            if (*(int *)((longlong)local_110 + 0xc) < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_110,iVar10);
            }
            pvVar3 = (void *)(*plVar18 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar3,puVar11,(longlong)iVar4 * 2);
            *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar3) = 0;
          }
          puVar11 = local_108;
          if (local_e0 != (undefined2 *)0x0) {
            FMemory::Free(local_e0);
            puVar11 = local_108;
          }
        }
        if (puVar11 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      uVar13 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar13;
      uVar15 = uVar15 + 0x30;
    } while ((int)uVar13 < *(int *)(param_1 + 0x68));
  }
  plVar18 = local_110;
  iVar10 = (int)local_110[1];
  iVar4 = (2 - (uint)(iVar10 != 0)) + iVar10;
  *(int *)(local_110 + 1) = iVar4;
  if (*(int *)((longlong)local_110 + 0xc) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_110,iVar10);
  }
  puVar11 = (undefined2 *)(*plVar18 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
  *puVar11 = 0x7d;
  puVar11[1] = 0;
  lVar8 = *plVar18;
  if (*(short *)(lVar8 + (longlong)local_d0 * 2) == 0x2c) {
    *(undefined2 *)(lVar8 + (longlong)local_d0 * 2) = 0x20;
  }
  if (local_128 != (undefined2 *)0x0) {
    FMemory::Free(local_128);
  }
  return;
}



// FUNCTION 1419e9470 FUN_1419e9470 body=344 status=ok
// SIG undefined FUN_1419e9470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1419e9470(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  int local_58 [2];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  local_30 = param_3[4];
  local_2c = 1;
  *param_2 = 0;
  local_24 = 1;
  TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_58,&local_40);
  piVar3 = (int *)0x0;
  if (local_58[0] != -1) {
    piVar3 = (int *)((longlong)local_58[0] * 0x40 + *(longlong *)(param_1 + 0x38));
  }
  piVar2 = piVar3 + 8;
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[4] != 0)) {
    if (*piVar2 == piVar2[4]) {
      (**(code **)(*DAT_146ab6358 + 0x568))(DAT_146ab6358,local_58,&DAT_146ab6e78);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
    }
    else {
      local_50[0] = 0;
      local_50[1] = 0;
      FShaderCacheHelperUncompressCode(*piVar2,piVar2 + 2,local_50);
      (**(code **)(*DAT_146ab6358 + 0x568))(DAT_146ab6358,local_58,&DAT_146ab6e78,local_50);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_3c,local_40);
    *(ulonglong *)(lVar1 + 0x20) = CONCAT44(uStack_34,uStack_38);
    *(undefined4 *)(lVar1 + 0x28) = local_30;
  }
  return param_2;
}



// FUNCTION 1419e95d0 FUN_1419e95d0 body=300 status=ok
// SIG undefined FUN_1419e95d0(void)

undefined8 * FUN_1419e95d0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_28 [2];
  
  *param_2 = 0;
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x80);
  }
  lVar5 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    if ((*(int *)(lVar5 + 0x28) == 0) && (*(int *)(lVar5 + 0x20) == 0)) {
      FUN_141a09310(param_1,param_3,0);
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (lVar5 + 0x18 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      uVar4 = FUN_1419ec6e0(*(undefined4 *)(param_1 + 0x18),uVar1,lVar5 + 0x18,local_28);
      (**(code **)(*DAT_146ab6358 + 0x568))(DAT_146ab6358,local_res8,&DAT_146ab6e78,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1419e9700 FUN_1419e9700 body=202 status=ok
// SIG undefined FUN_1419e9700(void)

longlong *
FUN_1419e9700(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar3 = 0;
  *param_1 = 0;
  if (DAT_1469f5a08 != 0) {
    local_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_18 = *(undefined4 *)(param_3 + 2);
    uVar2 = FUN_1419e97d0(DAT_1469f5a08,local_res8,param_2,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,uVar2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
  }
  if (lVar3 == 0) {
    (**(code **)(*DAT_146ab6358 + 0x568))(DAT_146ab6358,local_res8,&DAT_146ab6e78,param_4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  uVar2 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(lVar3 + 0x18) = *param_3;
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  *(undefined4 *)(lVar3 + 0x28) = uVar1;
  return param_1;
}



// FUNCTION 1419e97d0 FUN_1419e97d0 body=450 status=ok
// SIG undefined FUN_1419e97d0(void)

undefined8 *
FUN_1419e97d0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  
  *param_2 = 0;
  lVar3 = FShaderCodeLibraryImpl::FindShaderLibrary(param_1,param_4);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x79) != '\0') {
      local_38 = (undefined4)param_4[2];
      local_48 = *param_4;
      lStack_40 = param_4[1];
      (**(code **)(*DAT_146ab6358 + 0x560))(DAT_146ab6358,&local_58,&DAT_146ab6e78,lVar3,&local_48);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
      return param_2;
    }
    local_58 = 0;
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x80,&local_50,param_4);
    lVar4 = 0;
    if ((int)local_50 != -1) {
      lVar4 = (longlong)(int)local_50 * 0x60 + *(longlong *)(lVar3 + 0x80);
    }
    lVar6 = lVar4 + 0x18;
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      }
      if ((*(int *)(lVar6 + 0x28) == 0) && (*(int *)(lVar6 + 0x20) == 0)) {
        FUN_141a09310(lVar3,param_4,0);
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (lVar6 + 0x18 != 0) {
        local_48 = 0;
        lStack_40 = 0;
        uVar5 = FUN_1419ec6e0(*(undefined4 *)(lVar3 + 0x18),uVar1,lVar6 + 0x18,&local_48);
        (**(code **)(*DAT_146ab6358 + 0x568))(DAT_146ab6358,&local_50,&DAT_146ab6e78,uVar5);
        local_58 = local_50;
        local_50 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  }
  return param_2;
}



// FUNCTION 1419e99a0 FUN_1419e99a0 body=514 status=ok
// SIG undefined FUN_1419e99a0(void)

undefined8 * FUN_1419e99a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint local_78;
  uint uStack_74;
  int iStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar5 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)operator_new(0x60);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  else {
    local_28 = param_1 + 0x38;
    iVar1 = *(int *)(param_1 + 0x60);
    local_78 = 0;
    uStack_74 = 1;
    iStack_64 = 0;
    uStack_60 = 0;
    if (iVar1 != 0) {
      puVar7 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x48);
      }
      uVar2 = *puVar7;
      puVar6 = puVar5;
      while (uVar2 == 0) {
        iVar3 = (int)puVar6;
        uStack_60 = (int)puVar5 + 0x20;
        puVar5 = (undefined8 *)(ulonglong)uStack_60;
        local_78 = iVar3 + 1;
        puVar6 = (undefined8 *)(ulonglong)local_78;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_1419e9aa3;
        uVar2 = puVar7[(longlong)iVar3 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar3 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      iStack_64 = (uStack_60 - iVar3) + 0x1f;
      if (iVar1 < iStack_64) {
LAB_1419e9aa3:
        iStack_64 = iVar1;
      }
    }
    *puVar4 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined2 *)(puVar4 + 2) = 0x100;
    *puVar4 = &PTR__scalar_deleting_destructor__144d8df00;
    uStack_20 = uStack_20 & 0xffff0000;
    puVar4[3] = param_1;
    if (param_1 != 0) {
      LOCK();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      UNLOCK();
    }
    puVar4[4] = local_28;
    puVar4[5] = CONCAT44(uStack_74,local_78);
    puVar5 = (undefined8 *)0x1;
    puVar4[6] = (uint *)(param_1 + 0x48);
    puVar4[7] = CONCAT44(iStack_64,0xffffffff);
    *puVar4 = &PTR_FUN_144d8e260;
    *(uint *)(puVar4 + 8) = uStack_60;
    *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_5c;
    puVar4[9] = local_28;
    puVar4[10] = local_28;
    *(uint *)(puVar4 + 0xb) = uStack_20;
    *(undefined4 *)((longlong)puVar4 + 0x5c) = uStack_1c;
    uStack_20._1_1_ = '\0';
    uStack_20._0_1_ = '\0';
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  if (((puVar5 != (undefined8 *)0x0) && ((char)uStack_20 != '\0')) && (uStack_20._1_1_ != '\0')) {
    FUN_1419e5c10(local_28,*(int *)(local_28 + 8) - *(int *)(local_28 + 0x34),1);
  }
  return param_2;
}



// FUNCTION 1419e9bb0 CreateIterator body=514 status=ok
// SIG undefined CreateIterator(void)

undefined8 * FShaderCodeArchive::CreateIterator(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint local_78;
  uint uStack_74;
  int iStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar6 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)operator_new(0x68);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = puVar6;
  }
  else {
    local_28 = param_1 + 0x80;
    iVar1 = *(int *)(param_1 + 0xa8);
    local_78 = 0;
    uStack_74 = 1;
    iStack_64 = 0;
    uStack_60 = 0;
    if (iVar1 != 0) {
      puVar8 = *(uint **)(param_1 + 0xa0);
      if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x90);
      }
      uVar2 = *puVar8;
      puVar7 = puVar6;
      while (uVar2 == 0) {
        iVar4 = (int)puVar7;
        uStack_60 = (int)puVar6 + 0x20;
        puVar6 = (undefined8 *)(ulonglong)uStack_60;
        local_78 = iVar4 + 1;
        puVar7 = (undefined8 *)(ulonglong)local_78;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1419e9cb0;
        uVar2 = puVar8[(longlong)iVar4 + 1];
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
      iStack_64 = (uStack_60 - iVar4) + 0x1f;
      if (iVar1 < iStack_64) {
LAB_1419e9cb0:
        iStack_64 = iVar1;
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *puVar5 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined2 *)(puVar5 + 2) = 0x100;
    *puVar5 = &PTR__scalar_deleting_destructor__144d8df00;
    uStack_20 = uStack_20 & 0xffff0000;
    puVar5[3] = param_1;
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    puVar5[5] = local_28;
    puVar5[6] = CONCAT44(uStack_74,local_78);
    *puVar5 = &PTR__scalar_deleting_destructor__144d8e318;
    puVar6 = (undefined8 *)0x1;
    puVar5[7] = (uint *)(param_1 + 0x90);
    puVar5[8] = CONCAT44(iStack_64,0xffffffff);
    *(undefined4 *)(puVar5 + 4) = uVar3;
    *(uint *)(puVar5 + 9) = uStack_60;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_5c;
    puVar5[10] = local_28;
    puVar5[0xb] = local_28;
    *(uint *)(puVar5 + 0xc) = uStack_20;
    *(undefined4 *)((longlong)puVar5 + 100) = uStack_1c;
    uStack_20._1_1_ = '\0';
    uStack_20._0_1_ = '\0';
  }
  *param_2 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  if (((puVar6 != (undefined8 *)0x0) && ((char)uStack_20 != '\0')) && (uStack_20._1_1_ != '\0')) {
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::ConditionalRehash(local_28,*(int *)(local_28 + 8) - *(int *)(local_28 + 0x34),1);
  }
  return param_2;
}



// FUNCTION 1419e9dc0 FUN_1419e9dc0 body=344 status=ok
// SIG undefined FUN_1419e9dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1419e9dc0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  int local_58 [2];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  local_30 = param_3[4];
  local_2c = 3;
  *param_2 = 0;
  local_24 = 1;
  TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_58,&local_40);
  piVar3 = (int *)0x0;
  if (local_58[0] != -1) {
    piVar3 = (int *)((longlong)local_58[0] * 0x40 + *(longlong *)(param_1 + 0x38));
  }
  piVar2 = piVar3 + 8;
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[4] != 0)) {
    if (*piVar2 == piVar2[4]) {
      (**(code **)(*DAT_146ab6358 + 0x528))(DAT_146ab6358,local_58,&DAT_146ab6e78);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
    }
    else {
      local_50[0] = 0;
      local_50[1] = 0;
      FShaderCacheHelperUncompressCode(*piVar2,piVar2 + 2,local_50);
      (**(code **)(*DAT_146ab6358 + 0x528))(DAT_146ab6358,local_58,&DAT_146ab6e78,local_50);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_3c,local_40);
    *(ulonglong *)(lVar1 + 0x20) = CONCAT44(uStack_34,uStack_38);
    *(undefined4 *)(lVar1 + 0x28) = local_30;
  }
  return param_2;
}



// FUNCTION 1419e9f20 FUN_1419e9f20 body=300 status=ok
// SIG undefined FUN_1419e9f20(void)

undefined8 * FUN_1419e9f20(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_28 [2];
  
  *param_2 = 0;
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x80);
  }
  lVar5 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    if ((*(int *)(lVar5 + 0x28) == 0) && (*(int *)(lVar5 + 0x20) == 0)) {
      FUN_141a09310(param_1,param_3,0);
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (lVar5 + 0x18 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      uVar4 = FUN_1419ec6e0(*(undefined4 *)(param_1 + 0x18),uVar1,lVar5 + 0x18,local_28);
      (**(code **)(*DAT_146ab6358 + 0x528))(DAT_146ab6358,local_res8,&DAT_146ab6e78,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1419ea050 FUN_1419ea050 body=202 status=ok
// SIG undefined FUN_1419ea050(void)

longlong *
FUN_1419ea050(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar3 = 0;
  *param_1 = 0;
  if (DAT_1469f5a08 != 0) {
    local_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_18 = *(undefined4 *)(param_3 + 2);
    uVar2 = FUN_1419ea120(DAT_1469f5a08,local_res8,param_2,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,uVar2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
  }
  if (lVar3 == 0) {
    (**(code **)(*DAT_146ab6358 + 0x528))(DAT_146ab6358,local_res8,&DAT_146ab6e78,param_4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  uVar2 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(lVar3 + 0x18) = *param_3;
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  *(undefined4 *)(lVar3 + 0x28) = uVar1;
  return param_1;
}



// FUNCTION 1419ea120 FUN_1419ea120 body=450 status=ok
// SIG undefined FUN_1419ea120(void)

undefined8 *
FUN_1419ea120(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  
  *param_2 = 0;
  lVar3 = FShaderCodeLibraryImpl::FindShaderLibrary(param_1,param_4);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x79) != '\0') {
      local_38 = (undefined4)param_4[2];
      local_48 = *param_4;
      lStack_40 = param_4[1];
      (**(code **)(*DAT_146ab6358 + 0x520))(DAT_146ab6358,&local_58,&DAT_146ab6e78,lVar3,&local_48);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
      return param_2;
    }
    local_58 = 0;
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x80,&local_50,param_4);
    lVar4 = 0;
    if ((int)local_50 != -1) {
      lVar4 = (longlong)(int)local_50 * 0x60 + *(longlong *)(lVar3 + 0x80);
    }
    lVar6 = lVar4 + 0x18;
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      }
      if ((*(int *)(lVar6 + 0x28) == 0) && (*(int *)(lVar6 + 0x20) == 0)) {
        FUN_141a09310(lVar3,param_4,0);
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (lVar6 + 0x18 != 0) {
        local_48 = 0;
        lStack_40 = 0;
        uVar5 = FUN_1419ec6e0(*(undefined4 *)(lVar3 + 0x18),uVar1,lVar6 + 0x18,&local_48);
        (**(code **)(*DAT_146ab6358 + 0x528))(DAT_146ab6358,&local_50,&DAT_146ab6e78,uVar5);
        local_58 = local_50;
        local_50 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  }
  return param_2;
}



// FUNCTION 1419ea2f0 FUN_1419ea2f0 body=332 status=ok
// SIG undefined FUN_1419ea2f0(void)

undefined8 * FUN_1419ea2f0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144d8e5d8;
  *(undefined1 *)(plVar6 + 10) = 0;
  plVar6[0xb] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1419ea440 FUN_1419ea440 body=340 status=ok
// SIG undefined FUN_1419ea440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1419ea440(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  int local_58 [2];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  local_30 = param_3[4];
  *param_2 = 0;
  local_2c = 0;
  local_24 = 1;
  TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_58,&local_40);
  piVar3 = (int *)0x0;
  if (local_58[0] != -1) {
    piVar3 = (int *)((longlong)local_58[0] * 0x40 + *(longlong *)(param_1 + 0x38));
  }
  piVar2 = piVar3 + 8;
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[4] != 0)) {
    if (*piVar2 == piVar2[4]) {
      (**(code **)(*DAT_146ab6358 + 0x518))(DAT_146ab6358,local_58,&DAT_146ab6e78);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
    }
    else {
      local_50[0] = 0;
      local_50[1] = 0;
      FShaderCacheHelperUncompressCode(*piVar2,piVar2 + 2,local_50);
      (**(code **)(*DAT_146ab6358 + 0x518))(DAT_146ab6358,local_58,&DAT_146ab6e78,local_50);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_3c,local_40);
    *(ulonglong *)(lVar1 + 0x20) = CONCAT44(uStack_34,uStack_38);
    *(undefined4 *)(lVar1 + 0x28) = local_30;
  }
  return param_2;
}



// FUNCTION 1419ea5a0 FUN_1419ea5a0 body=300 status=ok
// SIG undefined FUN_1419ea5a0(void)

undefined8 * FUN_1419ea5a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_28 [2];
  
  *param_2 = 0;
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x80);
  }
  lVar5 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    if ((*(int *)(lVar5 + 0x28) == 0) && (*(int *)(lVar5 + 0x20) == 0)) {
      FUN_141a09310(param_1,param_3,0);
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (lVar5 + 0x18 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      uVar4 = FUN_1419ec6e0(*(undefined4 *)(param_1 + 0x18),uVar1,lVar5 + 0x18,local_28);
      (**(code **)(*DAT_146ab6358 + 0x518))(DAT_146ab6358,local_res8,&DAT_146ab6e78,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1419ea6d0 FUN_1419ea6d0 body=202 status=ok
// SIG undefined FUN_1419ea6d0(void)

longlong *
FUN_1419ea6d0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar3 = 0;
  *param_1 = 0;
  if (DAT_1469f5a08 != 0) {
    local_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_18 = *(undefined4 *)(param_3 + 2);
    uVar2 = FUN_1419ea7a0(DAT_1469f5a08,local_res8,param_2,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,uVar2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
  }
  if (lVar3 == 0) {
    (**(code **)(*DAT_146ab6358 + 0x518))(DAT_146ab6358,local_res8,&DAT_146ab6e78,param_4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  uVar2 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(lVar3 + 0x18) = *param_3;
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  *(undefined4 *)(lVar3 + 0x28) = uVar1;
  return param_1;
}



// FUNCTION 1419ea7a0 FUN_1419ea7a0 body=450 status=ok
// SIG undefined FUN_1419ea7a0(void)

undefined8 *
FUN_1419ea7a0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  
  *param_2 = 0;
  lVar3 = FShaderCodeLibraryImpl::FindShaderLibrary(param_1,param_4);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x79) != '\0') {
      local_38 = (undefined4)param_4[2];
      local_48 = *param_4;
      lStack_40 = param_4[1];
      (**(code **)(*DAT_146ab6358 + 0x510))(DAT_146ab6358,&local_58,&DAT_146ab6e78,lVar3,&local_48);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
      return param_2;
    }
    local_58 = 0;
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x80,&local_50,param_4);
    lVar4 = 0;
    if ((int)local_50 != -1) {
      lVar4 = (longlong)(int)local_50 * 0x60 + *(longlong *)(lVar3 + 0x80);
    }
    lVar6 = lVar4 + 0x18;
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      }
      if ((*(int *)(lVar6 + 0x28) == 0) && (*(int *)(lVar6 + 0x20) == 0)) {
        FUN_141a09310(lVar3,param_4,0);
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
      if (lVar6 + 0x18 != 0) {
        local_48 = 0;
        lStack_40 = 0;
        uVar5 = FUN_1419ec6e0(*(undefined4 *)(lVar3 + 0x18),uVar1,lVar6 + 0x18,&local_48);
        (**(code **)(*DAT_146ab6358 + 0x518))(DAT_146ab6358,&local_50,&DAT_146ab6e78,uVar5);
        local_58 = local_50;
        local_50 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_58);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  }
  return param_2;
}



// FUNCTION 1419ea970 DispatchComputeShader body=154 status=ok
// SIG undefined DispatchComputeShader(void)

void DispatchComputeShader
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

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
  *puVar2 = &PTR_LAB_144d8df70;
  *(undefined4 *)(puVar2 + 2) = param_3;
  *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
  *(undefined4 *)(puVar2 + 3) = param_5;
  return;
}



// FUNCTION 1419eaa10 DispatchComputeShader body=154 status=ok
// SIG undefined DispatchComputeShader(void)

void DispatchComputeShader
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

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
  *puVar2 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar2 + 2) = param_3;
  *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
  *(undefined4 *)(puVar2 + 3) = param_5;
  return;
}



// FUNCTION 1419eaab0 DispatchIndirectComputeShader body=148 status=ok
// SIG undefined DispatchIndirectComputeShader(void)

void DispatchIndirectComputeShader
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
  *(undefined4 *)(puVar2 + 3) = param_4;
  *puVar2 = &PTR_LAB_144d8df60;
  return;
}



// FUNCTION 1419eab50 Empty body=129 status=ok
// SIG undefined Empty(void)

void TArray<FPipelineCachePSOHeader,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1);
    lVar1 = lVar1 + 0x58;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1419eabe0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FShaderPipelineType_const_*,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FShaderPipelineType_const_*,FShaderPipeline_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

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
  cVar1 = ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 1419eaca0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 1419ead20 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FPrimaryAssetId,UGCosmeticIconButton_*>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,UGCosmeticIconButton_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 1419eade0 FUN_1419eade0 body=117 status=ok
// SIG undefined FUN_1419eade0(void)

void FUN_1419eade0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_1419eb7c0();
  cVar1 = FUN_1419e5950(param_1,param_2);
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



// FUNCTION 1419eae60 FUN_1419eae60 body=181 status=ok
// SIG undefined FUN_1419eae60(void)

void FUN_1419eae60(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<212,4>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_1419e5a00(param_1,param_2,1);
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



// FUNCTION 1419eaf20 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FGameplayTag,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FGameplayTag,FPrimaryAssetId,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 1419eafe0 FUN_1419eafe0 body=181 status=ok
// SIG undefined FUN_1419eafe0(void)

void FUN_1419eafe0(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<3576,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_1419e5d70(param_1,param_2,1);
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



// FUNCTION 1419eb0a0 FUN_1419eb0a0 body=181 status=ok
// SIG undefined FUN_1419eb0a0(void)

void FUN_1419eb0a0(longlong param_1,int param_2)

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



// FUNCTION 1419eb160 FUN_1419eb160 body=181 status=ok
// SIG undefined FUN_1419eb160(void)

void FUN_1419eb160(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_1419e5ed0(param_1,param_2,1);
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



// FUNCTION 1419eb220 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 1419eb2e0 FUN_1419eb2e0 body=181 status=ok
// SIG undefined FUN_1419eb2e0(void)

void FUN_1419eb2e0(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<60,4>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_1419e6030(param_1,param_2,1);
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



// FUNCTION 1419eb3a0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,0>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_1419ebc00();
  cVar1 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
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



// FUNCTION 1419eb420 Empty body=236 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = (longlong)local_1c * 0x60 + *local_38;
      *(undefined4 *)(lVar2 + 0x50) = 0;
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2 + 8);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  return;
}



// FUNCTION 1419eb510 Empty body=266 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FShaderStreamingCache>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = (longlong)local_1c * 0x60 + *local_38;
      *(undefined4 *)(lVar2 + 0x50) = 0;
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(lVar2 + 8,0);
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar2 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  return;
}



// FUNCTION 1419eb620 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1419eb6f1;
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
LAB_1419eb6f1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x20 + *param_1 + 0x10) != 0) {
        FShader::Release();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1419eb7c0 FUN_1419eb7c0 body=373 status=ok
// SIG undefined FUN_1419eb7c0(void)

void FUN_1419eb7c0(longlong param_1,int param_2)

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
  
  iVar2 = *(int *)(param_1 + 0x28);
  puVar1 = (uint *)(param_1 + 0x10);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x20);
    if (*(uint **)(param_1 + 0x20) == (uint *)0x0) {
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
      if (bVar3) goto LAB_1419eb886;
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
LAB_1419eb886:
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
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<440,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar4) {
    *(uint *)(param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1419eb940 Empty body=198 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (*(longlong *)((longlong)local_1c * 0x40 + *local_38 + 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 1419eba10 Empty body=232 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = (longlong)local_1c * 0x78 + *local_38;
      *(undefined4 *)(lVar2 + 0x68) = 0;
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2 + 0x20);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  return;
}



// FUNCTION 1419ebb00 Empty body=253 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FSHAHash,FShaderCodeEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar5 = (longlong)local_1c * 0x60 + *local_38;
      plVar3 = *(longlong **)(lVar5 + 0x50);
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
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar4) {
    *(uint *)(param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 1419ebc00 FUN_1419ebc00 body=408 status=ok
// SIG undefined FUN_1419ebc00(void)

void FUN_1419ebc00(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_1419ebcd1;
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
LAB_1419ebcd1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x30 + *param_1) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 1419ebda0 FUN_1419ebda0 body=446 status=ok
// SIG undefined FUN_1419ebda0(void)

void FUN_1419ebda0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1419ebe71;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1419ebe71:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x20 + *param_1;
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(lVar5 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar5 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar5);
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
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1419ebf60 FUN_1419ebf60 body=396 status=ok
// SIG undefined FUN_1419ebf60(void)

void FUN_1419ebf60(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_1419ec031;
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
LAB_1419ec031:
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
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0x10 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 1419ec0f0 FUN_1419ec0f0 body=723 status=ok
// SIG undefined FUN_1419ec0f0(void)

void FUN_1419ec0f0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_60;
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
  
  uVar13 = 0;
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0xb0);
  puVar1 = (uint *)(param_1 + 0x98);
  local_88 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    uVar8 = uVar13;
    uVar10 = uVar13;
    while (uVar4 == 0) {
      iVar7 = (int)uVar8;
      uStack_70 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_70;
      local_88 = iVar7 + 1;
      uVar8 = (ulonglong)local_88;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1419ec1cc;
      uVar4 = puVar12[(longlong)iVar7 + 1];
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
    uStack_74 = (uStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1419ec1cc:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xb0);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,uStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar4 & 0xffffffe0;
  uStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1419ec292;
      uVar9 = puVar12[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1419ec292:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar5 = *(longlong *)(*plVar2 + 8 + (longlong)(int)uStack_4c * 0x18);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 8);
      *(undefined8 *)(lVar5 + 8) = 0;
      if (lVar6 != 0) {
        FShader::Release();
      }
      lVar6 = *(longlong *)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x10) = 0;
      if (lVar6 != 0) {
        FShader::Release();
      }
      lVar6 = *(longlong *)(lVar5 + 0x18);
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (lVar6 != 0) {
        FShader::Release();
      }
      lVar6 = *(longlong *)(lVar5 + 0x20);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      if (lVar6 != 0) {
        FShader::Release();
      }
      lVar6 = *(longlong *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      uVar8 = uVar13;
      if (lVar6 != 0) {
        FShader::Release(lVar6);
        uVar8 = *(ulonglong *)(lVar5 + 0x28);
      }
      if (uVar8 != 0) {
        FShader::Release();
      }
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        FShader::Release();
      }
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FShader::Release();
      }
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FShader::Release();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FShader::Release();
      }
      FMemory::operator_delete(lVar5);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
  }
  TSet<TTuple<FShaderPipelineType_const_*,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FShaderPipelineType_const_*,FShaderPipeline_*,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0);
  return;
}



// FUNCTION 1419ec4a0 ExecuteTask body=252 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FShaderCache::InternalLogShader'::`5'::LogShaderName,<lambda_45e7de7f1b75a8ceba72ef3f8146f214>_>_>
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
  <lambda_45e7de7f1b75a8ceba72ef3f8146f214>::operator()(param_1 + 2,uVar3);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_144d8e5d8;
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 0x48);
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



// FUNCTION 1419ec5a0 FShaderCacheHelperUncompressCode body=151 status=ok
// SIG undefined FShaderCacheHelperUncompressCode(void)

void FShaderCacheHelperUncompressCode(int param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3[1];
  if (iVar1 < param_1) {
    *(int *)(param_3 + 1) = param_1;
    if (*(int *)((longlong)param_3 + 0xc) < param_1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *param_3),0,(longlong)(param_1 - iVar1));
  }
  else if ((param_1 < iVar1) && (param_1 != iVar1)) {
    *(int *)(param_3 + 1) = param_1;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3);
  }
  FUN_14165b8a0(1,*param_3,param_1,*param_2,*(undefined4 *)(param_2 + 1),0,0xf);
  return;
}



// FUNCTION 1419ec640 FShaderCodeLibraryPluginMountedCallback body=152 status=ok
// SIG undefined FShaderCodeLibraryPluginMountedCallback(void)

void FShaderCodeLibraryPluginMountedCallback(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_18);
      uVar3 = (**(code **)(*param_1 + 8))(param_1);
      FShaderCodeLibrary::OpenLibrary(uVar3,uVar2);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      uVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_18);
      uVar3 = (**(code **)(*param_1 + 8))(param_1);
      FShaderCodeLibrary::OpenLibrary(uVar3,uVar2);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1419ec6e0 FUN_1419ec6e0 body=200 status=ok
// SIG undefined FUN_1419ec6e0(void)

longlong * FUN_1419ec6e0(undefined8 param_1,int param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  
  if ((int)param_3[1] != param_2) {
    iVar1 = (int)param_4[1];
    if (iVar1 < param_2) {
      *(int *)(param_4 + 1) = param_2;
      if (*(int *)((longlong)param_4 + 0xc) < param_2) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_4);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar1 + *param_4),0,(longlong)(param_2 - iVar1));
    }
    else if ((param_2 < iVar1) && (param_2 != iVar1)) {
      *(int *)(param_4 + 1) = param_2;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_4);
    }
    FUN_14165b8a0(1,*param_4,param_2,*param_3,(int)param_3[1],0,0xf);
    return param_4;
  }
  return param_3;
}



// FUNCTION 1419ec7b0 FilterShaderSourceHashForSerialization body=17 status=ok
// SIG undefined FilterShaderSourceHashForSerialization(void)

undefined *
FShaderResource::FilterShaderSourceHashForSerialization(longlong param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1469f5b28;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    puVar1 = param_2;
  }
  return puVar1;
}



// FUNCTION 1419ec7d0 FUN_1419ec7d0 body=994 status=ok
// SIG undefined FUN_1419ec7d0(void)

undefined8 FUN_1419ec7d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  bool bVar12;
  undefined1 local_res20 [8];
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c) < 1) goto LAB_1419ecb86;
  FUN_141eca160(local_res20,*(undefined4 *)(param_1 + 0x18));
  lVar4 = FName::GetComparisonNameEntry(local_res20);
  pvVar11 = (void *)0x0;
  if (lVar4 == 0) {
    local_68 = (void *)0x0;
    local_60 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar4,&local_68);
  }
  iVar3 = (int)local_60;
  iVar2 = local_60._4_4_;
  bVar12 = (int)local_60 != 0;
  local_78 = local_68;
  local_68 = (void *)0x0;
  local_70 = (int)local_60;
  local_6c = local_60._4_4_;
  local_60 = 0;
  if (iVar2 < (int)((2 - (uint)bVar12) + iVar3)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    iVar3 = local_70;
  }
  local_70 = (2 - (uint)(iVar3 != 0)) + iVar3;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
  }
  pvVar10 = local_78;
  puVar6 = (undefined2 *)((longlong)local_78 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
  *puVar6 = 0x5f;
  puVar6[1] = 0;
  local_50 = *(int *)(param_1 + 0xe0);
  lVar4 = (longlong)local_50;
  if (local_70 < 2) {
    pvVar1 = *(void **)(param_1 + 0xd8);
    local_58 = (void *)0x0;
    if (local_50 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
      pvVar11 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar4 * 2);
      iVar9 = local_50;
      goto LAB_1419eca12;
    }
LAB_1419eca1d:
    iVar9 = 0;
  }
  else {
    iVar3 = local_50 + -1;
    if (local_50 == 0) {
      iVar3 = 0;
    }
    if ((local_70 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = 0;
    }
    pvVar10 = (void *)0x0;
    local_58 = local_78;
    local_50 = local_70;
    local_4c = local_6c;
    if (local_6c < iVar3 + iVar2 + local_70) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    }
    iVar2 = local_50;
    local_78 = *(void **)(param_1 + 0xd8);
    pvVar11 = local_58;
    iVar9 = local_50;
    if (iVar3 != 0) {
      lVar4 = (longlong)local_50;
      local_50 = local_50 + (uint)(local_50 == 0) + iVar3;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
      }
      iVar9 = local_50;
      pvVar11 = local_58;
      pvVar1 = (void *)((longlong)local_58 + (lVar4 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,local_78,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar3 * 2) = 0;
    }
LAB_1419eca12:
    if (iVar9 == 0) goto LAB_1419eca1d;
    iVar9 = iVar9 + -1;
  }
  local_40 = (int)param_2[1];
  lVar4 = (longlong)local_40;
  if ((local_40 != 0) || (iVar3 = 2, iVar9 == -1)) {
    iVar3 = 1;
  }
  pvVar1 = (void *)*param_2;
  local_48 = (undefined2 *)0x0;
  if ((local_40 == 0) && (iVar3 + iVar9 == 0)) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40 + iVar3 + iVar9,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar4 * 2);
  }
  FString::PathAppend(&local_48,pvVar11,iVar9);
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)FUN_1415c3d50();
  puVar6 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar6 = local_48;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,puVar6,0);
  if (plVar5 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    FUN_1419e0890(plVar5,param_1);
    (**(code **)(*plVar5 + 0xe0))(plVar5);
    (**(code **)*plVar5)(plVar5,1);
    if (param_3 != (longlong *)0x0) {
      iVar3 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar3);
      }
      puVar6 = local_48;
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_3);
      *puVar8 = 0;
      lVar4 = (longlong)local_40;
      *(int *)(puVar8 + 1) = local_40;
      if (local_40 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        uVar7 = 1;
        goto LAB_1419ecb6c;
      }
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,local_40,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,puVar6,lVar4 * 2);
    }
    uVar7 = 1;
  }
LAB_1419ecb6c:
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1419ecb86:
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1419ecbc0 FindId body=113 status=ok
// SIG undefined FindId(void)

int * TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xc) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar1 * 0xc);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ecc40 FindId body=117 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x60 + *param_1) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + 0x58 + *param_1);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419eccc0 FindId body=272 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x50) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ecdd0 FUN_1419ecdd0 body=275 status=ok
// SIG undefined FUN_1419ecdd0(void)

int * FUN_1419ecdd0(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x1c0 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x1c0 + 0x1b8 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ecef0 FindId body=275 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>,TDefaultMapHashableKeyFuncs<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0xd8 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0xd8 + 0xd0 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed010 FUN_1419ed010 body=275 status=ok
// SIG undefined FUN_1419ed010(void)

int * FUN_1419ed010(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x118 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x118 + 0x110 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed130 FindId body=388 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSamplerStateInitializerRHI,int>,FSamplerStateInitializerRHIKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_108;
  undefined8 local_100;
  undefined **local_f8 [18];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_48 [32];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FSamplerStateInitializerRHIKeyFuncs::GetKeyHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        if (DAT_1469f6068 == 0) {
          local_108 = 0;
          local_100 = 0;
          FArchive::FArchive(local_f8);
          local_60 = &local_108;
          local_68 = 0;
          local_f8[0] = &PTR_FUN_143f4a100;
          local_58 = 0;
          FArchive::SetIsSaving(local_f8,1);
          FArchive::SetIsPersistent(local_f8,0);
          FUN_1419dbd20(local_f8,local_48);
          DAT_1469f6068 = (uint)local_100;
          FArchive::~FArchive(local_f8);
          if (local_108 != 0) {
            FMemory::Free();
          }
        }
        iVar2 = ::_guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar1 * 0x28 + lVar4),param_3,(ulonglong)DAT_1469f6068
                          );
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)((longlong)iVar1 * 0x28 + 0x20 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed2c0 FUN_1419ed2c0 body=175 status=ok
// SIG undefined FUN_1419ed2c0(void)

int * FUN_1419ed2c0(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_1419f0cb0(param_3);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x1b8 + lVar1;
        cVar2 = FUN_1419e0e00(lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar5 + 0x1b0);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed370 FUN_1419ed370 body=175 status=ok
// SIG undefined FUN_1419ed370(void)

int * FUN_1419ed370(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_1419f0cb0(param_3);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x1c0 + lVar1;
        cVar2 = FUN_1419e0e00(lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar5 + 0x1b8);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed420 FindId body=175 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderCacheGraphicsPipelineState,int>,TDefaultMapKeyFuncs<FShaderCacheGraphicsPipelineState,int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_1419f0ed0(param_3);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0xd4 + lVar1;
        cVar2 = ::operator==(lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar5 + 0xcc);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed4d0 FindId body=175 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderCacheGraphicsPipelineState,TRefCountPtr<FRHIGraphicsPipelineState>_>,TDefaultMapHashableKeyFuncs<FShaderCacheGraphicsPipelineState,TRefCountPtr<FRHIGraphicsPipelineState>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_1419f0ed0(param_3);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0xd8 + lVar1;
        cVar2 = ::operator==(lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar5 + 0xd0);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed580 FindId body=262 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = *(uint *)(param_3 + 3);
    if (uVar3 == 0) {
      iVar4 = *(int *)((longlong)param_3 + 0x14);
      bVar1 = *(byte *)((longlong)param_3 + 0x1c);
      uVar3 = FCrc::MemCrc_DEPRECATED(param_3,0x14,0);
      uVar3 = uVar3 ^ iVar4 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_3 + 3) = uVar3;
    }
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4)
    ;
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar4 * 0x2c;
        if ((((*(longlong *)(lVar6 + lVar2) == *param_3) &&
             (*(longlong *)(lVar6 + 8 + lVar2) == param_3[1])) &&
            (*(int *)(lVar6 + 0x10 + lVar2) == (int)param_3[2])) &&
           ((*(int *)(lVar6 + 0x14 + lVar2) == *(int *)((longlong)param_3 + 0x14) &&
            (*(char *)(lVar6 + 0x1c + lVar2) == *(char *)((longlong)param_3 + 0x1c))))) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar6 + 0x24 + lVar2);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed690 FindId body=262 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = *(uint *)(param_3 + 3);
    if (uVar3 == 0) {
      iVar4 = *(int *)((longlong)param_3 + 0x14);
      bVar1 = *(byte *)((longlong)param_3 + 0x1c);
      uVar3 = FCrc::MemCrc_DEPRECATED(param_3,0x14,0);
      uVar3 = uVar3 ^ iVar4 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_3 + 3) = uVar3;
    }
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4)
    ;
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar4 * 0x40;
        if ((((*(longlong *)(lVar6 + lVar2) == *param_3) &&
             (*(longlong *)(lVar6 + 8 + lVar2) == param_3[1])) &&
            (*(int *)(lVar6 + 0x10 + lVar2) == (int)param_3[2])) &&
           ((*(int *)(lVar6 + 0x14 + lVar2) == *(int *)((longlong)param_3 + 0x14) &&
            (*(char *)(lVar6 + 0x1c + lVar2) == *(char *)((longlong)param_3 + 0x1c))))) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar6 + 0x38 + lVar2);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed7a0 FUN_1419ed7a0 body=265 status=ok
// SIG undefined FUN_1419ed7a0(void)

int * FUN_1419ed7a0(longlong *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = *(uint *)(param_3 + 3);
    if (uVar3 == 0) {
      iVar4 = *(int *)((longlong)param_3 + 0x14);
      bVar1 = *(byte *)((longlong)param_3 + 0x1c);
      uVar3 = FCrc::MemCrc_DEPRECATED(param_3,0x14,0);
      uVar3 = uVar3 ^ iVar4 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_3 + 3) = uVar3;
    }
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4)
    ;
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar4;
        if ((((*(longlong *)(lVar2 + lVar6 * 0x30) == *param_3) &&
             (*(longlong *)(lVar2 + 8 + lVar6 * 0x30) == param_3[1])) &&
            (*(int *)(lVar2 + 0x10 + lVar6 * 0x30) == (int)param_3[2])) &&
           ((*(int *)(lVar2 + 0x14 + lVar6 * 0x30) == *(int *)((longlong)param_3 + 0x14) &&
            (*(char *)(lVar2 + 0x1c + lVar6 * 0x30) == *(char *)((longlong)param_3 + 0x1c))))) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar2 + 0x28 + lVar6 * 0x30);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed8b0 FindId body=262 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = *(uint *)(param_3 + 3);
    if (uVar3 == 0) {
      iVar4 = *(int *)((longlong)param_3 + 0x14);
      bVar1 = *(byte *)((longlong)param_3 + 0x1c);
      uVar3 = FCrc::MemCrc_DEPRECATED(param_3,0x14,0);
      uVar3 = uVar3 ^ iVar4 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_3 + 3) = uVar3;
    }
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4)
    ;
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar4 * 0x78;
        if ((((*(longlong *)(lVar6 + lVar2) == *param_3) &&
             (*(longlong *)(lVar6 + 8 + lVar2) == param_3[1])) &&
            (*(int *)(lVar6 + 0x10 + lVar2) == (int)param_3[2])) &&
           ((*(int *)(lVar6 + 0x14 + lVar2) == *(int *)((longlong)param_3 + 0x14) &&
            (*(char *)(lVar6 + 0x1c + lVar2) == *(char *)((longlong)param_3 + 0x1c))))) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar6 + 0x70 + lVar2);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ed9c0 FindId body=175 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderDrawKey,int>,TDefaultMapKeyFuncs<FShaderDrawKey,int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = ::GetTypeHash(param_3);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0xdf8 + lVar1;
        cVar2 = ::operator==(lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar5 + 0xdf0);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419eda70 FindId body=319 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderRenderTargetKey,int>,TDefaultMapKeyFuncs<FShaderRenderTargetKey,int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = param_3[8];
    if (uVar5 == 0) {
      uVar5 = *param_3;
      if (uVar5 == 0) {
        uVar5 = (param_3[5] << 8 ^ param_3[6]) << 8 ^ (uint)(byte)param_3[7] << 0x18 ^
                (uint)*(byte *)((longlong)param_3 + 0x1d) ^ param_3[2] * 2 ^ param_3[1] * 3 ^
                param_3[4] ^ param_3[3];
        *param_3 = uVar5;
      }
      uVar5 = param_3[9] << 8 ^ param_3[10] ^ uVar5;
      param_3[8] = uVar5;
    }
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4)
    ;
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x38;
        if ((((((*(uint *)(lVar4 + 0x24 + lVar1) == param_3[9]) &&
               (*(uint *)(lVar4 + 0x28 + lVar1) == param_3[10])) &&
              (*(uint *)(lVar4 + 4 + lVar1) == param_3[1])) &&
             ((*(uint *)(lVar4 + 8 + lVar1) == param_3[2] &&
              (*(uint *)(lVar4 + 0xc + lVar1) == param_3[3])))) &&
            ((*(uint *)(lVar4 + 0x10 + lVar1) == param_3[4] &&
             ((*(uint *)(lVar4 + 0x14 + lVar1) == param_3[5] &&
              (*(uint *)(lVar4 + 0x18 + lVar1) == param_3[6])))))) &&
           ((*(char *)(lVar4 + 0x1c + lVar1) == (char)param_3[7] &&
            (*(char *)(lVar4 + 0x1d + lVar1) == *(char *)((longlong)param_3 + 0x1d))))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x30 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419edbb0 FindId body=301 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderRenderTargetKey,FRHITexture_*>,TDefaultMapHashableKeyFuncs<FShaderRenderTargetKey,FRHITexture_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = param_3[8];
    if (uVar4 == 0) {
      uVar4 = *param_3;
      if (uVar4 == 0) {
        uVar4 = (param_3[5] << 8 ^ param_3[6]) << 8 ^ (uint)(byte)param_3[7] << 0x18 ^
                (uint)*(byte *)((longlong)param_3 + 0x1d) ^ param_3[2] * 2 ^ param_3[1] * 3 ^
                param_3[4] ^ param_3[3];
        *param_3 = uVar4;
      }
      uVar4 = param_3[9] << 8 ^ param_3[10] ^ uVar4;
      param_3[8] = uVar4;
    }
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4)
    ;
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1 * 0x40 + *param_1;
        if ((((((*(uint *)(lVar3 + 0x24) == param_3[9]) && (*(uint *)(lVar3 + 0x28) == param_3[10]))
              && (*(uint *)(lVar3 + 4) == param_3[1])) &&
             ((*(uint *)(lVar3 + 8) == param_3[2] && (*(uint *)(lVar3 + 0xc) == param_3[3])))) &&
            ((*(uint *)(lVar3 + 0x10) == param_3[4] &&
             ((*(uint *)(lVar3 + 0x14) == param_3[5] && (*(uint *)(lVar3 + 0x18) == param_3[6]))))))
           && ((*(char *)(lVar3 + 0x1c) == (char)param_3[7] &&
               (*(char *)(lVar3 + 0x1d) == *(char *)((longlong)param_3 + 0x1d))))) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419edce0 FindId body=206 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderResourceKey,int>,TDefaultMapKeyFuncs<FShaderResourceKey,int,0>,FDefaultSetAllocator>
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
        lVar4 = lVar4 + (longlong)iVar2 * 0x3c;
        if ((((*(int *)(lVar4 + 0x24) == *(int *)(param_3 + 0x24)) &&
             (*(int *)(lVar4 + 0x28) == *(int *)(param_3 + 0x28))) &&
            (*(char *)(lVar4 + 0x2c) == *(char *)(param_3 + 0x2c))) &&
           ((*(char *)(lVar4 + 0x2d) == *(char *)(param_3 + 0x2d) &&
            (cVar1 = ::operator==(lVar4,param_3), cVar1 != '\0')))) {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x3c + 0x34 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419eddb0 FindId body=210 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderResourceKey,FShaderResourceViewBinding>,TDefaultMapHashableKeyFuncs<FShaderResourceKey,FShaderResourceViewBinding,0>,FDefaultSetAllocator>
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
        lVar4 = lVar4 + (longlong)iVar2 * 0x50;
        if ((((*(int *)(lVar4 + 0x24) == *(int *)(param_3 + 0x24)) &&
             (*(int *)(lVar4 + 0x28) == *(int *)(param_3 + 0x28))) &&
            (*(char *)(lVar4 + 0x2c) == *(char *)(param_3 + 0x2c))) &&
           ((*(char *)(lVar4 + 0x2d) == *(char *)(param_3 + 0x2d) &&
            (cVar1 = ::operator==(lVar4,param_3), cVar1 != '\0')))) {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x50 + 0x48 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ede90 FindId body=292 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderTextureKey,FRHITexture_*>,TDefaultMapHashableKeyFuncs<FShaderTextureKey,FRHITexture_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = *param_3;
    if (uVar5 == 0) {
      uVar5 = (param_3[5] << 8 ^ param_3[6]) << 8 ^ (uint)(byte)param_3[7] << 0x18 ^
              (uint)*(byte *)((longlong)param_3 + 0x1d) ^ param_3[2] * 2 ^ param_3[1] * 3 ^
              param_3[4] ^ param_3[3];
      *param_3 = uVar5;
    }
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4)
    ;
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if (((((*(uint *)(lVar1 + 4 + lVar4 * 0x30) == param_3[1]) &&
              (*(uint *)(lVar1 + 8 + lVar4 * 0x30) == param_3[2])) &&
             (*(uint *)(lVar1 + 0xc + lVar4 * 0x30) == param_3[3])) &&
            ((*(uint *)(lVar1 + 0x10 + lVar4 * 0x30) == param_3[4] &&
             (*(uint *)(lVar1 + 0x14 + lVar4 * 0x30) == param_3[5])))) &&
           ((*(uint *)(lVar1 + 0x18 + lVar4 * 0x30) == param_3[6] &&
            ((*(char *)(lVar1 + 0x1c + lVar4 * 0x30) == (char)param_3[7] &&
             (*(char *)(lVar1 + 0x1d + lVar4 * 0x30) == *(char *)((longlong)param_3 + 0x1d))))))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + lVar4 * 0x30);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419edfc0 FindId body=193 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
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
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x60;
        if (((*(longlong *)(lVar4 + lVar1) == *param_3) &&
            (*(longlong *)(lVar4 + 8 + lVar1) == param_3[1])) &&
           (*(int *)(lVar4 + 0x10 + lVar1) == (int)param_3[2])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x58 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ee090 FindId body=191 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FShaderId,FShader_*>,TDefaultMapHashableKeyFuncs<FShaderId,FShader_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FCrc::MemCrc_DEPRECATED(param_3,0x14);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x88 + lVar1;
        cVar2 = ::operator==(lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar5 + 0x80);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1419ee150 FUN_1419ee150 body=574 status=ok
// SIG undefined FUN_1419ee150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1419ee150(longlong param_1,longlong param_2,int param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  short *psVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  int local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(param_2 + 0x10);
  }
  local_70 = *(uint *)(param_1 + 0x70);
  local_6c = *(undefined4 *)(param_1 + 0x90);
  uStack_68 = *(undefined4 *)(param_1 + 0x94);
  uStack_64 = *(undefined4 *)(param_1 + 0x98);
  uStack_60 = *(undefined4 *)(param_1 + 0x9c);
  local_5c = *(int *)(param_1 + 0xa0);
  local_50 = 0;
  local_48 = 0;
  local_78 = param_3;
  local_40 = param_3;
  if (DAT_1464c0af8 != DAT_1464c0b24) {
    iVar4 = FCrc::MemCrc_DEPRECATED(&local_6c,0x14);
    puVar5 = DAT_1464c0b30;
    if (DAT_1464c0b30 == (undefined *)0x0) {
      puVar5 = &DAT_1464c0b28;
    }
    iVar4 = *(int *)(puVar5 + ((longlong)DAT_1464c0b38 - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = DAT_1464c0af0 + (longlong)iVar4 * 0x48;
        uVar3 = *(uint *)(DAT_1464c0af0 + (longlong)iVar4 * 0x48);
        if ((((((uVar3 & 7) == (local_70 & 7)) && (((uVar3 ^ local_70) & 0xf8) == 0)) &&
             (*(longlong *)(lVar6 + 4) == CONCAT44(uStack_68,local_6c))) &&
            ((*(longlong *)(lVar6 + 0xc) == CONCAT44(uStack_60,uStack_64) &&
             (*(int *)(lVar6 + 0x14) == local_5c)))) && (*(int *)(lVar6 + 0x30) == local_40)) {
          psVar7 = *(short **)(lVar6 + 0x18);
          if ((psVar7 != (short *)0x0) || (local_58 != 0)) {
            lVar8 = local_58 - (longlong)psVar7;
            do {
              sVar1 = *psVar7;
              sVar2 = *(short *)((longlong)psVar7 + lVar8);
              if (sVar1 != sVar2) break;
              psVar7 = psVar7 + 1;
            } while (sVar2 != 0);
            if (sVar1 != sVar2) goto LAB_1419ee2dc;
          }
          if ((iVar4 != -1) && (lVar6 != 0)) {
            lVar6 = *(longlong *)(lVar6 + 0x38);
            goto LAB_1419ee2ea;
          }
          break;
        }
LAB_1419ee2dc:
        iVar4 = *(int *)(lVar6 + 0x40);
      } while (iVar4 != -1);
    }
  }
  lVar6 = 0;
LAB_1419ee2ea:
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0xb0) == -0x239806c5)) {
    lVar6 = operator_new(0xb8);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_1419d83d0(lVar6,param_1,param_2,local_78);
    }
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return lVar6;
}



// FUNCTION 1419ee390 FindParameterAllocation body=402 status=ok
// SIG undefined FindParameterAllocation(void)

bool FShaderParameterMap::FindParameterAllocation
               (longlong *param_1,short *param_2,undefined2 *param_3,undefined2 *param_4,
               undefined2 *param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  puVar10 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  puVar8 = puVar10;
  iVar11 = 0;
  if ((param_2 != (short *)0x0) && (puVar8 = (undefined2 *)0x0, iVar11 = 0, *param_2 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    iVar6 = (int)lVar7 + 1;
    local_30 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar11 = local_30;
    puVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)iVar6 * 2);
  }
  puVar5 = puVar10;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    puVar3 = &DAT_143f3eda8;
    if (iVar11 != 0) {
      puVar3 = puVar8;
    }
    iVar6 = FUN_140438070(puVar3);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar7 = *param_1;
      do {
        lVar9 = (longlong)iVar6 * 0x20;
        puVar3 = &DAT_143f3eda8;
        if (iVar11 != 0) {
          puVar3 = puVar8;
        }
        if (*(int *)(lVar9 + 8 + lVar7) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(lVar9 + lVar7);
        }
        iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
        if (iVar1 == 0) {
          if (iVar6 != -1) {
            puVar5 = (undefined2 *)(lVar9 + *param_1);
          }
          break;
        }
        lVar7 = *param_1;
        iVar6 = *(int *)(lVar9 + 0x18 + lVar7);
      } while (iVar6 != -1);
    }
  }
  puVar3 = puVar5 + 8;
  if (puVar5 == (undefined2 *)0x0) {
    puVar3 = puVar10;
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar3 != (undefined2 *)0x0) {
    *param_3 = *puVar3;
    *param_4 = puVar3[1];
    *param_5 = puVar3[2];
    *(undefined1 *)((longlong)puVar3 + 7) = 1;
  }
  return puVar3 != (undefined2 *)0x0;
}



// FUNCTION 1419ee530 FindShaderById body=66 status=ok
// SIG undefined FindShaderById(void)

undefined8 FShaderType::FindShaderById(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res8 [8];
  
  TSet<TTuple<FShaderId,FShader_*>,TDefaultMapHashableKeyFuncs<FShaderId,FShader_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x48),local_res8,param_2);
  if ((local_res8[0] != -1) &&
     (lVar1 = (longlong)local_res8[0] * 0x88 + *(longlong *)(param_1 + 0x48), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x78);
  }
  return 0;
}



// FUNCTION 1419ee580 FindShaderLibrary body=150 status=ok
// SIG undefined FindShaderLibrary(void)

longlong * FShaderCodeLibraryImpl::FindShaderLibrary(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe));
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe));
  iVar3 = 0;
  if ((int)param_1[1] < 1) {
    return (longlong *)0x0;
  }
  lVar4 = 0;
  do {
    plVar1 = *(longlong **)(lVar4 + *param_1);
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    if (cVar2 != '\0') {
      return plVar1;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 8;
  } while (iVar3 < (int)param_1[1]);
  return (longlong *)0x0;
}



// FUNCTION 1419ee620 FUN_1419ee620 body=670 status=ok
// SIG undefined FUN_1419ee620(void)

void FUN_1419ee620(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  BOOL BVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  for (iVar5 = *(int *)(param_1 + 0x28); iVar5 != 0; iVar5 = iVar5 + -1) {
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar7);
    lVar7 = lVar7 + 0x250;
  }
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_141a0a4d0(param_1 + 0x20,0);
  }
  TArray<FPipelineCachePSOHeader,FDefaultAllocator>::Empty(param_1 + 0x30,0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x60,0);
  }
  if (0 < (int)*(uint *)(param_1 + 0x98)) {
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x98);
    uVar9 = uVar12;
    do {
      uVar4 = (longlong)*(int *)(param_1 + 0x98) - 1U & uVar9;
      lVar7 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar7 = param_1 + 0x88;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)(lVar7 + uVar4 * 4) = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  uVar9 = (ulonglong)*(int *)(param_1 + 0x18);
  lVar11 = uVar9 * 0x250 + lVar7;
  if (lVar7 != lVar11) {
    do {
      iVar5 = *(int *)(param_1 + 0x130);
      *(int *)(param_1 + 0x130) = iVar5 + 1;
      if (*(int *)(param_1 + 0x134) < iVar5 + 1) {
        TArray<Audio::FGrain,TSizedDefaultAllocator<32>_>::ResizeGrow(param_1 + 0x128,iVar5);
      }
      lVar8 = (longlong)iVar5 * 0x250 + *(longlong *)(param_1 + 0x128);
      FUN_141eb9840(lVar8,lVar7);
      puVar1 = (undefined8 *)(lVar7 + 0x248);
      lVar7 = lVar7 + 0x250;
      *(undefined8 *)(lVar8 + 0x248) = *puVar1;
    } while (lVar7 != lVar11);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x18);
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  uVar6 = (uint)uVar9;
  while (uVar6 != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar7);
    lVar7 = lVar7 + 0x250;
    uVar6 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar6;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_141a0a4d0(param_1 + 0x10,0);
  }
  plVar13 = *(longlong **)(param_1 + 0x40);
  uVar9 = (longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff;
  if (plVar13 + *(int *)(param_1 + 0x48) < plVar13) {
    uVar9 = uVar12;
  }
  if (uVar9 != 0) {
    do {
      lVar7 = *plVar13;
      plVar2 = *(longlong **)(lVar7 + 0x20);
      if (*(char *)((longlong)plVar2 + 0x73) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x73) = 1;
        *(undefined1 *)(plVar2 + 0xe) = 1;
        if (*(char *)((longlong)plVar2 + 0x71) == '\0') {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      iVar5 = *(int *)(param_1 + 0x140);
      *(int *)(param_1 + 0x140) = iVar5 + 1;
      if (*(int *)(param_1 + 0x144) < iVar5 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x138,iVar5);
      }
      plVar13 = plVar13 + 1;
      uVar12 = uVar12 + 1;
      *(longlong *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar5 * 8) = lVar7;
    } while (uVar12 != uVar9);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  LOCK();
  *(undefined8 *)(param_1 + 0xd0) = 0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001419ee8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  return;
}



// FUNCTION 1419ee8c0 OnDeactivate body=36 status=ok
// SIG undefined OnDeactivate(void)

void FSlateAccessibleMessageHandler::OnDeactivate(void)

{
  TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,0>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,0>,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464c0d90,0);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464c0d40,0);
  return;
}



// FUNCTION 1419ee8f0 FUN_1419ee8f0 body=814 status=ok
// SIG undefined FUN_1419ee8f0(void)

longlong *
FUN_1419ee8f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 local_res20;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_3;
  }
  local_res20 = param_4;
  FString::PrintfImpl(&local_58,L"ShaderArchive-%s-",puVar8);
  iVar6 = 0;
  if (local_50 != 0) {
    iVar6 = local_50 + -1;
  }
  iVar4 = *(int *)(param_2 + 1);
  if ((iVar4 != 0) || (iVar3 = 2, iVar6 == -1)) {
    iVar3 = 1;
  }
  pvVar10 = (void *)*param_2;
  local_78 = (void *)0x0;
  local_70 = CONCAT44(local_70._4_4_,iVar4);
  if ((iVar4 == 0) && (iVar3 + iVar6 == 0)) {
    local_70 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar4 + iVar3 + iVar6,0);
    _guard_xfg_dispatch_icall_nop(local_78,pvVar10,(longlong)iVar4 * 2);
  }
  FString::PathAppend(&local_78,local_58,iVar6);
  plVar5 = (longlong *)FName::ToString(&local_res20,local_48);
  if ((int)local_70 < 2) {
    pvVar10 = (void *)*plVar5;
    *plVar5 = 0;
    lVar7 = plVar5[1];
    plVar5[1] = 0;
    iVar3 = (int)lVar7;
    iVar9 = *(int *)((longlong)plVar5 + 0xc);
  }
  else {
    iVar6 = (int)plVar5[1] + -1;
    if ((int)plVar5[1] == 0) {
      iVar6 = 0;
    }
    if (((int)local_70 != 0) || (iVar4 = 1, iVar6 == 0)) {
      iVar4 = 0;
    }
    iVar3 = local_70._4_4_;
    iVar4 = iVar4 + iVar6 + (int)local_70;
    local_68 = local_78;
    local_78 = (void *)0x0;
    local_60 = (int)local_70;
    local_5c = local_70._4_4_;
    local_70 = 0;
    if (iVar3 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    }
    iVar4 = local_60;
    pvVar11 = (void *)*plVar5;
    pvVar10 = local_68;
    iVar3 = local_60;
    iVar9 = local_5c;
    if (iVar6 != 0) {
      lVar7 = (longlong)local_60;
      local_60 = (uint)(local_60 == 0) + iVar6 + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar4);
      }
      iVar9 = local_5c;
      iVar3 = local_60;
      pvVar10 = local_68;
      pvVar1 = (void *)((longlong)local_68 + (lVar7 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (iVar3 < 2) {
    *param_1 = 0;
    uVar2 = DAT_1464c0d10;
    pvVar11 = DAT_1464c0d08;
    iVar6 = (int)DAT_1464c0d10;
    *(int *)(param_1 + 1) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar2 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar11,(longlong)iVar6 * 2);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
  }
  else {
    iVar6 = (int)DAT_1464c0d10 + -1;
    if ((int)DAT_1464c0d10 == 0) {
      iVar6 = 0;
    }
    if ((iVar3 != 0) || (iVar4 = 1, iVar6 == 0)) {
      iVar4 = 0;
    }
    local_68 = pvVar10;
    local_60 = iVar3;
    local_5c = iVar9;
    if (iVar9 < iVar3 + iVar4 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    iVar4 = local_60;
    pvVar10 = DAT_1464c0d08;
    pvVar11 = local_68;
    iVar3 = local_60;
    iVar9 = local_5c;
    if (iVar6 != 0) {
      lVar7 = (longlong)local_60;
      local_60 = local_60 + (uint)(local_60 == 0) + iVar6;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar4);
      }
      iVar9 = local_5c;
      iVar3 = local_60;
      pvVar11 = local_68;
      pvVar1 = (void *)((longlong)local_68 + (lVar7 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    *param_1 = (longlong)pvVar11;
    *(int *)(param_1 + 1) = iVar3;
    *(int *)((longlong)param_1 + 0xc) = iVar9;
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1419eec20 FUN_1419eec20 body=417 status=ok
// SIG undefined FUN_1419eec20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1419eec20(longlong param_1,longlong *param_2,int param_3,undefined4 *param_4,undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  *param_2 = 0;
  local_68 = param_4[4];
  local_64 = 5;
  local_5c = 1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x848,local_c8,&local_78);
    if ((local_c8[0] == -1) ||
       (lVar1 = (longlong)local_c8[0] * 0x30 + *(longlong *)(param_1 + 0x848), lVar1 == 0)) {
      local_c0 = 0;
    }
    else {
      local_c0 = *(longlong *)(lVar1 + 0x20);
      if (local_c0 != 0) {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_c0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_c0);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (*param_2 != 0) {
      return param_2;
    }
  }
  local_98 = *param_4;
  uStack_94 = param_4[1];
  uStack_90 = param_4[2];
  uStack_8c = param_4[3];
  local_88 = param_4[4];
  uVar2 = FUN_1419e6e40(local_b0,param_3,&local_98,param_5);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,uVar2);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_b0);
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,&local_78);
    local_a8 = &local_78;
    local_a0 = param_2;
    FUN_1419d0420(param_1 + 0x848,local_b8,&local_a8,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  }
  return param_2;
}



// FUNCTION 1419eedd0 FUN_1419eedd0 body=536 status=ok
// SIG undefined FUN_1419eedd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1419eedd0(longlong param_1,longlong *param_2,int param_3,undefined4 *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0 [2];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_68 = param_4[4];
  *param_2 = 0;
  local_64 = 2;
  local_5c = 1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x7f8,local_d0,&local_78);
    if ((local_d0[0] == -1) ||
       (lVar5 = (longlong)local_d0[0] * 0x30 + *(longlong *)(param_1 + 0x7f8), lVar5 == 0)) {
      local_c8 = 0;
    }
    else {
      local_c8 = *(longlong *)(lVar5 + 0x20);
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_c8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (*param_2 != 0) {
      return param_2;
    }
  }
  local_d8 = 0;
  if (DAT_1469f5a08 == 0) {
LAB_1419eeefe:
    (**(code **)(*DAT_146ab6358 + 0x578))(DAT_146ab6358,&local_c0,&DAT_146ab6e78,param_5);
    lVar5 = local_c0;
    local_d8 = local_c0;
    local_c0 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c0);
    if (lVar5 == 0) goto LAB_1419eef46;
  }
  else {
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    local_88 = param_4[4];
    uVar6 = FUN_1419e7530(DAT_1469f5a08,local_b0,param_3,&local_98);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_d8,uVar6);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b0);
    lVar5 = local_d8;
    if (local_d8 == 0) goto LAB_1419eeefe;
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
LAB_1419eef46:
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_d8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
  lVar5 = *param_2;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,&local_78);
    local_a8 = &local_78;
    local_a0 = param_2;
    FUN_1419d0700(param_1 + 0x7f8,local_b8,&local_a8,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  }
  return param_2;
}



// FUNCTION 1419eeff0 FUN_1419eeff0 body=536 status=ok
// SIG undefined FUN_1419eeff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1419eeff0(longlong param_1,longlong *param_2,int param_3,undefined4 *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0 [2];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_68 = param_4[4];
  *param_2 = 0;
  local_64 = 4;
  local_5c = 1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x758,local_d0,&local_78);
    if ((local_d0[0] == -1) ||
       (lVar5 = (longlong)local_d0[0] * 0x30 + *(longlong *)(param_1 + 0x758), lVar5 == 0)) {
      local_c8 = 0;
    }
    else {
      local_c8 = *(longlong *)(lVar5 + 0x20);
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_c8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (*param_2 != 0) {
      return param_2;
    }
  }
  local_d8 = 0;
  if (DAT_1469f5a08 == 0) {
LAB_1419ef11e:
    (**(code **)(*DAT_146ab6358 + 0x538))(DAT_146ab6358,&local_c0,&DAT_146ab6e78,param_5);
    lVar5 = local_c0;
    local_d8 = local_c0;
    local_c0 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c0);
    if (lVar5 == 0) goto LAB_1419ef166;
  }
  else {
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    local_88 = param_4[4];
    uVar6 = FUN_1419e7a60(DAT_1469f5a08,local_b0,param_3,&local_98);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_d8,uVar6);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b0);
    lVar5 = local_d8;
    if (local_d8 == 0) goto LAB_1419ef11e;
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
LAB_1419ef166:
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_d8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
  lVar5 = *param_2;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,&local_78);
    local_a8 = &local_78;
    local_a0 = param_2;
    FUN_1419d0700(param_1 + 0x758,local_b8,&local_a8,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  }
  return param_2;
}



// FUNCTION 1419ef210 FUN_1419ef210 body=15 status=ok
// SIG undefined FUN_1419ef210(void)

undefined8 FUN_1419ef210(int param_1)

{
  return *(undefined8 *)(&DAT_1469f5a10 + (longlong)param_1 * 8);
}



// FUNCTION 1419ef220 FUN_1419ef220 body=453 status=ok
// SIG undefined FUN_1419ef220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1419ef220(longlong param_1,longlong *param_2,int param_3,undefined4 *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  longlong local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_68 = *param_4;
  uStack_64 = param_4[1];
  uStack_60 = param_4[2];
  uStack_5c = param_4[3];
  local_58 = param_4[4];
  *param_2 = 0;
  local_54 = 1;
  local_4c = 1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x7a8,local_98,&local_68);
    if ((local_98[0] == -1) ||
       (lVar5 = (longlong)local_98[0] * 0x30 + *(longlong *)(param_1 + 0x7a8), lVar5 == 0)) {
      local_90 = 0;
    }
    else {
      local_90 = *(longlong *)(lVar5 + 0x20);
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_90);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (*param_2 != 0) {
      return param_2;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x568))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_5);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  lVar5 = *param_2;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,&local_68);
    local_78 = &local_68;
    local_70 = param_2;
    FUN_1419d0700(param_1 + 0x7a8,local_80,&local_78,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  }
  return param_2;
}



// FUNCTION 1419ef3f0 FUN_1419ef3f0 body=195 status=ok
// SIG undefined FUN_1419ef3f0(void)

undefined8 * FUN_1419ef3f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  lVar3 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_2 + 100) = 0;
  param_2[0xd] = lVar1 + 0xb0;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *param_2 = *(undefined8 *)(param_1 + 0x50);
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x60);
  param_2[3] = *(undefined8 *)(param_1 + 0x68);
  param_2[4] = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  param_2[5] = *(undefined8 *)(param_1 + 0x78);
  param_2[6] = uVar2;
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70) + (ulonglong)(*(uint *)(param_1 + 0xb0) & 7) * 0x28 + 0xc0
    ;
  }
  param_2[8] = lVar3;
  param_2[9] = *(undefined8 *)(param_1 + 0x90);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa4);
  *(undefined8 *)((longlong)param_2 + 0x54) = *(undefined8 *)(param_1 + 0x9c);
  *(undefined8 *)((longlong)param_2 + 0x5c) = uVar2;
  *(undefined4 *)((longlong)param_2 + 100) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0xb0);
  return param_2;
}


