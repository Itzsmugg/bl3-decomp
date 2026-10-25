// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1426d19c0 operator<FString,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_> body=120 status=ok
// SIG undefined operator<FString,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_>(void)

longlong TPairInitializer<FString_const_&,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_const_&>
         ::
         operator<FString,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_>
                   (undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  FString::FString(param_2,*param_1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2 + 0x10,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 0x10),_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 1426d1a40 FUN_1426d1a40 body=503 status=ok
// SIG undefined FUN_1426d1a40(void)

int * FUN_1426d1a40(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  uint *_Src;
  bool bVar8;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
  puVar2 = (uint *)*param_3;
  bVar8 = false;
  _Src = (uint *)((longlong)iVar6 * 0x20 + *param_1);
  *_Src = *puVar2;
  _Src[1] = puVar2[1];
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = _Src[1];
    local_res10 = *_Src;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1426d1c14;
    }
  }
  cVar4 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    uVar7 = (*_Src ^ _Src[1]) & (int)param_1[9] - 1U;
    _Src[7] = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar5 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1426d1c14:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1426d1c40 FUN_1426d1c40 body=757 status=ok
// SIG undefined FUN_1426d1c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1426d1c40(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  ulonglong *_Src;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      FUN_140822570(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar8 * 0xe0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xe0 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar9 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  uVar7 = uRam0000000146b0847c;
  _Src = (ulonglong *)((longlong)iVar8 * 0xe0 + *param_1);
  uVar10 = _DAT_146b08470 & _DAT_146b08480;
  uVar11 = uRam0000000146b08474 & uRam0000000146b08484;
  uVar12 = uRam0000000146b08478 & uRam0000000146b08488;
  uVar13 = uRam0000000146b0847c & uRam0000000146b0848c;
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0;
  _Src[7] = 0;
  _Src[8] = 0;
  _Src[9] = 0;
  _Src[10] = 0;
  _Src[0xe] = 0;
  _Src[0xf] = 0;
  *(uint *)(_Src + 0x10) = uVar10;
  *(uint *)((longlong)_Src + 0x84) = uVar11;
  *(uint *)(_Src + 0x11) = uVar12;
  *(uint *)((longlong)_Src + 0x8c) = uVar13;
  *(undefined4 *)(_Src + 0xc) = 0;
  *(undefined4 *)((longlong)_Src + 100) = 0;
  *(undefined4 *)(_Src + 0xd) = 0;
  *(uint *)((longlong)_Src + 0x6c) = uVar7;
  *(undefined4 *)(_Src + 0x12) = 0;
  *(undefined4 *)((longlong)_Src + 0x94) = 0;
  *(undefined4 *)(_Src + 0x13) = 0;
  *(uint *)((longlong)_Src + 0x9c) = uVar7;
  _Src[0x14] = 0;
  _Src[0x15] = 0;
  *(uint *)(_Src + 0x16) = uVar10;
  *(uint *)((longlong)_Src + 0xb4) = uVar11;
  *(uint *)(_Src + 0x17) = uVar12;
  *(uint *)((longlong)_Src + 0xbc) = uVar13;
  *(undefined1 *)(_Src + 0x18) = 0;
  *(undefined4 *)(_Src + 0x1a) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)local_res8[0] * 0xe0 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x40) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x30) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0xd0);
      TSparseArray<TSetElement<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1426d1f0c;
    }
  }
  cVar4 = FUN_1426dac30(param_1,iVar8,0);
  if (cVar4 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar11 = -(uVar10 + iVar8) ^ uVar10 >> 0xd;
    uVar7 = (iVar8 - uVar10) - uVar11 ^ uVar11 >> 0xc;
    uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 << 0x10;
    uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar10 >> 5;
    uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar11 >> 3;
    uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 << 10;
    uVar7 = ((uVar11 - uVar10) - uVar7 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xd4) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x1a) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1426d1f0c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1426d1f40 FUN_1426d1f40 body=577 status=ok
// SIG undefined FUN_1426d1f40(void)

int * FUN_1426d1f40(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar6 * 0x18);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  *(undefined4 *)(_Src + 1) = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = local_res8[0];
      goto LAB_1426d2158;
    }
  }
  cVar3 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    iVar6 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar10 = -(uVar8 + iVar6) ^ uVar8 >> 0xd;
    uVar7 = (iVar6 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1426d2158:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1426d2190 FUN_1426d2190 body=481 status=ok
// SIG undefined FUN_1426d2190(void)

int * FUN_1426d2190(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar5 * 0x90);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 0x90) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar7 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar7 = *puVar7 | 1 << ((byte)iVar5 & 0x1f);
  puVar7 = (uint *)((longlong)iVar5 * 0x90 + *param_1);
  TKeyInitializer<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_&>::
  operator<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>
            (param_3,puVar7);
  puVar7[0x20] = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar7[1];
    local_res10 = *puVar7;
    TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x90 + *param_1),puVar7,0x80)
      ;
      TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1426d234f;
    }
  }
  cVar2 = TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    uVar6 = (puVar7[1] ^ *puVar7) & (int)param_1[9] - 1U;
    puVar7[0x21] = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar7[0x20] = *(uint *)((longlong)plVar4 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1426d234f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1426d2380 FUN_1426d2380 body=558 status=ok
// SIG undefined FUN_1426d2380(void)

int * FUN_1426d2380(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  short *_Src;
  short sVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (short *)(*param_1 + (longlong)iVar7 * 0x18);
  puVar3 = (undefined8 *)param_3[1];
  sVar2 = *(short *)*param_3;
  *_Src = sVar2;
  *(undefined8 *)(_Src + 4) = *puVar3;
  _Src[8] = -1;
  _Src[9] = -1;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)sVar2) * 4);
      if (iVar5 != -1) {
        do {
          if (*(short *)(*param_1 + (longlong)iVar5 * 0x18) == sVar2) goto LAB_1426d24dc;
          iVar5 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1426d24dc:
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar5;
      goto LAB_1426d2585;
    }
  }
  cVar4 = FUN_1426dab80(param_1,iVar9,0);
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[9] - 1U & (int)*_Src;
    *(uint *)(_Src + 10) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1426d2585:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1426d25b0 FUN_1426d25b0 body=584 status=ok
// SIG undefined FUN_1426d25b0(void)

int * FUN_1426d25b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  undefined2 *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar7 * 0x18);
  puVar2 = (undefined2 *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined2 *)(_Src + 1) = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = local_res8[0];
      goto LAB_1426d27cf;
    }
  }
  cVar4 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar4 == '\0') {
    iVar7 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar11 = -(uVar9 + iVar7) ^ uVar9 >> 0xd;
    uVar8 = (iVar7 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 10;
    uVar8 = ((uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1426d27cf:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1426d2800 FUN_1426d2800 body=829 status=ok
// SIG undefined FUN_1426d2800(void)

int * FUN_1426d2800(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  char cVar18;
  int iVar19;
  undefined2 *puVar20;
  bool local_res8;
  
  iVar13 = 1;
  iVar19 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar16 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar16 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar16 * 0x28);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar16;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
  puVar3 = (undefined4 *)param_3[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar16 * 0x28);
  FString::FString(_Src,*param_3);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  local_res8 = false;
  puVar20 = &DAT_143f3eda8;
  *(undefined4 *)(_Src + 2) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar5;
  *(undefined4 *)(_Src + 3) = uVar6;
  *(undefined4 *)((longlong)_Src + 0x1c) = uVar7;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar16 = iVar19;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (*(int *)(_Src + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*_Src;
      }
      iVar8 = FUN_140438070(puVar12);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar8) * 4);
      if (iVar8 != -1) {
        lVar15 = *param_1;
        do {
          lVar2 = (longlong)iVar8 * 0x28;
          if (*(int *)(_Src + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*_Src;
          }
          if (*(int *)(lVar2 + 8 + lVar15) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = *(undefined2 **)(lVar2 + lVar15);
          }
          iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar12);
          iVar16 = iVar8;
          if (iVar9 == 0) break;
          lVar15 = *param_1;
          iVar8 = *(int *)(lVar15 + 0x20 + lVar2);
          iVar16 = iVar19;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar16 != -1;
    if (local_res8) {
      lVar15 = *param_1;
      if (*(longlong *)(lVar15 + (longlong)iVar16 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar15 + (longlong)iVar16 * 0x28),_Src,0x20);
      iVar13 = *param_2;
      bVar4 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar13;
      }
      lVar15 = *param_1;
      *(undefined4 *)(lVar15 + (longlong)iVar13 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar19 = (int)param_1[6];
      }
      *(int *)(lVar15 + 4 + (longlong)iVar13 * 0x28) = iVar19;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar16;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1426d2b14;
    }
  }
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar17) {
    uVar10 = (uVar17 >> 1) + 8;
    iVar19 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    iVar13 = 0x20;
    cVar18 = '\0';
    if (uVar10 != 0) {
      iVar13 = 0x1f - iVar19;
    }
    uVar10 = (uVar17 >> 1) + 7;
    iVar19 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    if (uVar10 != 0) {
      cVar18 = '\x1f' - (char)iVar19;
    }
    iVar13 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar18 & 0x1f);
  }
  if (((int)uVar17 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    iVar19 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar20 = (undefined2 *)*_Src;
    }
    uVar17 = FUN_140438070(puVar20);
    uVar17 = (int)param_1[9] - 1U & uVar17;
    *(uint *)((longlong)_Src + 0x24) = uVar17;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1426d2b14:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1426d2b40 Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_const_&>_> body=381 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_const_&>_>(void)

int * TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_const_&>_>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  bool bVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TPairInitializer<FString_const_&,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_const_&>::
  operator<FString,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<physx::PxBase_*,TSizedDefaultAllocator<32>_>_>
            (param_3,local_30);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  bVar6 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar6 = local_res8[0] != -1;
    if (bVar6) {
      plVar4 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res8[0] * 0x28) != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar4,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1426d2c99;
    }
  }
  cVar2 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*local_30;
    }
    uVar3 = FUN_140438070(puVar5);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 0x24) = uVar3;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar1
    ;
  }
LAB_1426d2c99:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1426d2cc0 FUN_1426d2cc0 body=1139 status=ok
// SIG undefined FUN_1426d2cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426d2cc0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_1426d2def;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_1426d2def:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1426d2eaf;
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
LAB_1426d2eaf:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = UEnvQueryTest::GetPrivateStaticClass();
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
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
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
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1426d2cc0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1426d3140 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<`FPhysxSharedData::DumpSharedMemoryUsage'::`2'::FSortBySize>_>_>_>_> body=500 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<`FPhysxSharedData::DumpSharedMemoryUsage'::`2'::FSortBySize>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<_FPhysxSharedData::DumpSharedMemoryUsage_::_2_::FSortBySize>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar4 = iVar11;
    iVar12 = iVar10;
joined_r0x0001426d316a:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar14 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          if ((ulonglong)param_1[(longlong)iVar14 * 5 + 2] <
              (ulonglong)param_1[(longlong)iVar11 * 5 + 0xc]) {
            iVar14 = iVar11;
          }
          iVar14 = iVar14 + 1;
        }
        puVar13 = param_1 + (longlong)iVar14 * 5;
        puVar1 = param_1 + (longlong)iVar10 * 5;
        if ((ulonglong)puVar13[2] < (ulonglong)param_1[(longlong)iVar10 * 5 + 2]) {
          if (puVar1 != puVar13) {
            uVar5 = puVar13[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            uVar3 = puVar1[4];
            *puVar1 = *puVar13;
            puVar1[1] = uVar5;
            uVar5 = puVar13[3];
            puVar1[2] = puVar13[2];
            puVar1[3] = uVar5;
            puVar1[4] = puVar13[4];
            *puVar13 = uVar6;
            puVar13[1] = uVar7;
            puVar13[2] = uVar8;
            puVar13[3] = uVar9;
            puVar13[4] = uVar3;
          }
          iVar11 = iVar14 * 2 + 1;
          iVar10 = iVar14;
          goto joined_r0x0001426d316a;
        }
      }
      iVar11 = iVar4 + -2;
      iVar10 = iVar12 + -1;
      iVar4 = iVar11;
      iVar12 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar13 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar13) {
        uVar5 = puVar13[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar3 = param_1[4];
        *param_1 = *puVar13;
        param_1[1] = uVar5;
        uVar5 = puVar13[3];
        param_1[2] = puVar13[2];
        param_1[3] = uVar5;
        param_1[4] = puVar13[4];
        *puVar13 = uVar6;
        puVar13[1] = uVar7;
        puVar13[2] = uVar8;
        puVar13[3] = uVar9;
        puVar13[4] = uVar3;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar10 * 2;
          iVar11 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if ((ulonglong)param_1[(longlong)iVar11 * 5 + 2] <
                (ulonglong)param_1[(longlong)iVar4 * 5 + 0xc]) {
              iVar11 = iVar4;
            }
            iVar11 = iVar11 + 1;
          }
          puVar1 = param_1 + (longlong)iVar11 * 5;
          puVar2 = param_1 + (longlong)iVar10 * 5;
          if ((ulonglong)param_1[(longlong)iVar10 * 5 + 2] <= (ulonglong)puVar1[2]) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            uVar3 = puVar2[4];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            uVar5 = puVar1[3];
            puVar2[2] = puVar1[2];
            puVar2[3] = uVar5;
            puVar2[4] = puVar1[4];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            puVar1[4] = uVar3;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar13 = puVar13 + -5;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1426d3340 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<`FPhysxSharedData::DumpSharedMemoryUsage'::`2'::FSortBySize>_>_>_>_> body=900 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<`FPhysxSharedData::DumpSharedMemoryUsage'::`2'::FSortBySize>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<_FPhysxSharedData::DumpSharedMemoryUsage_::_2_::FSortBySize>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x28 + -0x28;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_328 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar15 = &local_338;
    do {
      puVar14 = (undefined8 *)*plVar15;
      puVar9 = (undefined8 *)plVar15[1];
      lVar1 = plVar15[2];
      local_348._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar9 - (longlong)puVar14) / 0x28 + 1;
      puVar13 = puVar14;
      if ((int)local_348 != 0) {
LAB_1426d3430:
        if (8 < lVar8) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          puVar14 = puVar13 + (lVar8 >> 1) * 5;
          if (puVar14 != puVar13) {
            uVar3 = puVar13[1];
            uVar4 = *puVar14;
            uVar5 = puVar14[1];
            uVar6 = puVar14[2];
            uVar7 = puVar14[3];
            uVar2 = puVar14[4];
            *puVar14 = *puVar13;
            puVar14[1] = uVar3;
            uVar3 = puVar13[3];
            puVar14[2] = puVar13[2];
            puVar14[3] = uVar3;
            puVar14[4] = puVar13[4];
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            puVar13[2] = uVar6;
            puVar13[3] = uVar7;
            puVar13[4] = uVar2;
          }
          puVar11 = puVar9 + 5;
          puVar14 = puVar13;
LAB_1426d3490:
          puVar10 = puVar14;
          puVar14 = puVar10 + 5;
          if (puVar14 <= puVar9) goto code_r0x0001426d3499;
          goto LAB_1426d34a3;
        }
        for (; puVar11 = puVar13, puVar14 = puVar13, puVar13 < puVar9; puVar9 = puVar9 + -5) {
          while (puVar10 = puVar11, puVar14 = puVar14 + 5, puVar14 <= puVar9) {
            puVar11 = puVar14;
            if ((ulonglong)puVar10[2] <= (ulonglong)puVar14[2]) {
              puVar11 = puVar10;
            }
          }
          if (puVar10 != puVar9) {
            uVar3 = puVar9[1];
            uVar4 = *puVar10;
            uVar5 = puVar10[1];
            uVar6 = puVar10[2];
            uVar7 = puVar10[3];
            uVar2 = puVar10[4];
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            uVar3 = puVar9[3];
            puVar10[2] = puVar9[2];
            puVar10[3] = uVar3;
            puVar10[4] = puVar9[4];
            *puVar9 = uVar4;
            puVar9[1] = uVar5;
            puVar9[2] = uVar6;
            puVar9[3] = uVar7;
            puVar9[4] = uVar2;
          }
        }
        goto LAB_1426d35f9;
      }
LAB_1426d35ea:
      local_348 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<_FPhysxSharedData::DumpSharedMemoryUsage_::_2_::FSortBySize>_>_>_>_>
                (puVar14,lVar8,param_3,param_4);
LAB_1426d35f9:
      plVar15 = plVar15 + -3;
    } while (&local_338 <= plVar15);
  }
  return;
code_r0x0001426d3499:
  if ((ulonglong)puVar13[2] <= (ulonglong)puVar10[7]) goto LAB_1426d3490;
LAB_1426d34a3:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -5;
    if (puVar11 <= puVar13) break;
  } while ((ulonglong)puVar12[-3] <= (ulonglong)puVar13[2]);
  if (puVar14 <= puVar11) {
    if (puVar14 != puVar11) {
      uVar3 = puVar12[-4];
      uVar4 = *puVar14;
      uVar5 = puVar10[6];
      uVar6 = puVar10[7];
      uVar7 = puVar10[8];
      uVar2 = puVar10[9];
      *puVar14 = *puVar11;
      puVar10[6] = uVar3;
      uVar3 = puVar12[-2];
      puVar10[7] = puVar12[-3];
      puVar10[8] = uVar3;
      puVar10[9] = puVar12[-1];
      *puVar11 = uVar4;
      puVar12[-4] = uVar5;
      puVar12[-3] = uVar6;
      puVar12[-2] = uVar7;
      puVar12[-1] = uVar2;
    }
    goto LAB_1426d3490;
  }
  if (puVar13 != puVar11) {
    uVar3 = puVar12[-4];
    uVar4 = *puVar13;
    uVar5 = puVar13[1];
    uVar6 = puVar13[2];
    uVar7 = puVar13[3];
    uVar2 = puVar13[4];
    *puVar13 = *puVar11;
    puVar13[1] = uVar3;
    uVar3 = puVar12[-2];
    puVar13[2] = puVar12[-3];
    puVar13[3] = uVar3;
    puVar13[4] = puVar12[-1];
    *puVar11 = uVar4;
    puVar12[-4] = uVar5;
    puVar12[-3] = uVar6;
    puVar12[-2] = uVar7;
    puVar12[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  if (((longlong)puVar11 + (-0x28 - (longlong)puVar13)) / 0x28 <
      ((longlong)puVar9 - (longlong)puVar14) / 0x28) {
    if (puVar14 < puVar9) {
      *plVar15 = (longlong)puVar14;
      plVar15[1] = (longlong)puVar9;
      *(int *)(plVar15 + 2) = (int)local_348;
      plVar15 = plVar15 + 3;
    }
    if (puVar11 <= puVar13 + 5) goto LAB_1426d35f9;
    puVar9 = puVar12 + -10;
    puVar14 = puVar13;
  }
  else {
    if (puVar13 + 5 < puVar11) {
      *plVar15 = (longlong)puVar13;
      plVar15[1] = (longlong)(puVar12 + -10);
      *(int *)(plVar15 + 2) = (int)local_348;
      plVar15 = plVar15 + 3;
    }
    if (puVar9 <= puVar14) goto LAB_1426d35f9;
  }
  lVar8 = ((longlong)puVar9 - (longlong)puVar14) / 0x28 + 1;
  puVar13 = puVar14;
  if ((int)local_348 == 0) goto LAB_1426d35ea;
  goto LAB_1426d3430;
}



// FUNCTION 1426d36d0 FUN_1426d36d0 body=225 status=ok
// SIG undefined FUN_1426d36d0(void)

undefined8 * FUN_1426d36d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  FUN_1405c1220();
  uVar4 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__14516d000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x38) <
      DAT_146b08a60) {
    _Init_thread_header(&DAT_146b08a60);
    if (DAT_146b08a60 == -1) {
      FName::FName(&DAT_146534b10,L"Physics",1);
      _Init_thread_footer(&DAT_146b08a60);
    }
  }
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MyConstraintComp",1);
  uVar3 = *puVar1;
  uVar2 = AFGPoleHologram::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 1426d37c0 FUN_1426d37c0 body=119 status=ok
// SIG undefined FUN_1426d37c0(void)

undefined8 * FUN_1426d37c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1405c1220();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Thruster0",1);
  uVar3 = *puVar1;
  uVar2 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 1426d3840 FUN_1426d3840 body=308 status=ok
// SIG undefined FUN_1426d3840(void)

undefined8 * FUN_1426d3840(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1428c1a80();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__145094300;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x38) <
      DAT_146b08ad0) {
    _Init_thread_header(&DAT_146b08ad0);
    if (DAT_146b08ad0 == -1) {
      FName::FName(&DAT_146b08ac8,L"OverlapAllDynamic",1);
      _Init_thread_footer(&DAT_146b08ad0);
    }
  }
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146b08ac8);
  plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)(lVar2 + 0x40);
  plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)(lVar2 + 0x3c);
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef | 8;
  FUN_1423974f0(param_1[0x8e],1);
  return param_1;
}



// FUNCTION 1426d3980 FUN_1426d3980 body=714 status=ok
// SIG undefined FUN_1426d3980(void)

undefined8 * FUN_1426d3980(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14516c158;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  FUN_140a25a20(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x166) = 0;
  FUN_140a25a20(param_1 + 0x168);
  param_1[0x232] = 0;
  FUN_140a25a20(param_1 + 0x234);
  param_1[0x2fe] = 0;
  param_1[0x300] = 0;
  FUN_140a25a20(param_1 + 0x302);
  param_1[0x3cc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e74) = 0;
  *(undefined1 *)(param_1 + 0x3cf) = 1;
  *(uint *)(param_1 + 0x3d0) = *(uint *)(param_1 + 0x3d0) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x1e7c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x3d2) = 0;
  FUN_140a25a20(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x49e) = 0;
  FUN_140a25a20(param_1 + 0x4a0);
  pvVar4 = ThreadLocalStoragePointer;
  plVar1 = param_1 + 0x56c;
  uVar8 = (ulonglong)_tls_index;
  param_1[0x56a] = 0;
  param_1[0x56b] = 0;
  *plVar1 = 0;
  lVar3 = *(longlong *)((longlong)pvVar4 + uVar8 * 8);
  param_1[0x56d] = 0;
  param_1[0x574] = 0;
  param_1[0x575] = 0;
  param_1[0x57f] = 0;
  param_1[0x580] = 0;
  param_1[0x581] = 0;
  param_1[0x582] = 0;
  param_1[0x583] = 0;
  param_1[0x584] = 0;
  param_1[0x585] = 0;
  param_1[0x586] = 0;
  if (*(int *)(lVar3 + 0x38) < DAT_146b08ae8) {
    _Init_thread_header(&DAT_146b08ae8);
    if (DAT_146b08ae8 == -1) {
      FName::FName(&DAT_146b08ae0,L"Default",1);
      _Init_thread_footer(&DAT_146b08ae8);
    }
  }
  *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) & 0xfffffefd;
  *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) | 0x80;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(undefined4 *)(param_1 + 0x8e) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x58c) = 0x42a00000;
  *(undefined4 *)(param_1 + 0x90) = 0x3faaaa8f;
  *(undefined4 *)(param_1 + 0x8f) = 0x44000000;
  *(undefined4 *)(param_1 + 0x56e) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0x2c44) = 0xc2b3cccd;
  param_1[0x589] = 0x42b3cccd;
  *(undefined4 *)(param_1 + 0x58a) = 0x43b3ffdf;
  *(undefined4 *)((longlong)param_1 + 0x2c54) = 0xc2b3cccd;
  *(undefined4 *)(param_1 + 0x58b) = 0x42b3cccd;
  uVar7 = DAT_146b08ae0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) & 0xfffff7ff;
  param_1[0x8d] = uVar7;
  puVar5 = (undefined8 *)FName::FName(local_res8,L"TransformComponent0",1);
  uVar7 = *puVar5;
  uVar6 = FUN_1429ff160();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0x8c] = uVar7;
  param_1[0x2d] = uVar7;
  uVar7 = FUN_14290cf20();
  iVar2 = *(int *)(param_1 + 0x56d);
  *(int *)(param_1 + 0x56d) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x2b6c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar7;
  return param_1;
}



// FUNCTION 1426d3c50 FUN_1426d3c50 body=150 status=ok
// SIG undefined FUN_1426d3c50(void)

undefined8 * FUN_1426d3c50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1405c1220();
  *param_1 = &PTR_FUN_145170778;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ForceComponent0",1);
  uVar3 = *puVar1;
  uVar2 = UGFlipbookWidget::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 1426d3cf0 FUN_1426d3cf0 body=163 status=ok
// SIG undefined FUN_1426d3cf0(void)

undefined8 * FUN_1426d3cf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__14516f170;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Root",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  AActor::SetActorTickInterval(param_1,0x40a00000);
  AActor::SetActorTickEnabled(param_1,0);
  return param_1;
}



// FUNCTION 1426d3da0 FUN_1426d3da0 body=36 status=ok
// SIG undefined FUN_1426d3da0(void)

undefined1 * FUN_1426d3da0(undefined1 *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x1c; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = param_2;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1426d3dd0 FUN_1426d3dd0 body=30 status=ok
// SIG undefined FUN_1426d3dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1426d3dd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam0000000146aefe50;
  *param_1 = _DAT_146aefe48;
  param_1[1] = uVar1;
  uVar1 = uRam0000000146aefe60;
  param_1[2] = _DAT_146aefe58;
  param_1[3] = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1426d3df0 FUN_1426d3df0 body=321 status=ok
// SIG undefined FUN_1426d3df0(void)

undefined8 * FUN_1426d3df0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 local_res8 [4];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x358))
              (param_2,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
               ,0x725);
    local_res8[0] = 2;
    iVar5 = (**(code **)(*(longlong *)param_1[2] + 0x90))((longlong *)param_1[2],local_res8);
    if (iVar5 != 0) {
      iVar2 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar2 + iVar5;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
      }
      local_res8[0] = 2;
      (**(code **)(*(longlong *)param_1[2] + 0x98))
                ((longlong *)param_1[2],local_res8,*param_1,iVar5,0);
      plVar8 = (longlong *)*param_1;
      plVar1 = plVar8 + *(int *)(param_1 + 1);
      for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
        plVar3 = (longlong *)*plVar8;
        if (plVar3 != (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          if ((short)plVar3[1] == 6) {
            plVar7 = plVar3;
          }
          if (plVar7 != (longlong *)0x0) {
            cVar4 = (**(code **)(*plVar7 + 0x1f0))(plVar7);
            if ((cVar4 == '\0') &&
               (pbVar6 = (byte *)(**(code **)(*plVar7 + 0x178))(plVar7,local_res8),
               (*pbVar6 & 1) == 0)) {
              (**(code **)(*plVar7 + 0x248))(plVar7);
            }
            else {
              *plVar8 = 0;
            }
          }
        }
      }
    }
    (**(code **)(*param_2 + 0x360))(param_2);
  }
  return param_1;
}



// FUNCTION 1426d3f40 FUN_1426d3f40 body=189 status=ok
// SIG undefined FUN_1426d3f40(void)

undefined8 * FUN_1426d3f40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(uint *)((longlong)param_1 + 0x34) =
       *(uint *)((longlong)param_1 + 0x34) ^
       (*(uint *)((longlong)param_1 + 0x34) ^ *(uint *)((longlong)param_2 + 0x34)) & 1;
  *(uint *)((longlong)param_1 + 0x34) =
       *(uint *)((longlong)param_1 + 0x34) ^
       (*(uint *)((longlong)param_2 + 0x34) ^ *(uint *)((longlong)param_1 + 0x34)) & 2;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_140a25aa0(param_1 + 8,param_2 + 8);
  param_1[200] = param_2[200];
  *(uint *)(param_1 + 0xc9) =
       *(uint *)(param_1 + 0xc9) ^ (*(uint *)(param_2 + 0xc9) ^ *(uint *)(param_1 + 0xc9)) & 1;
  return param_1;
}



// FUNCTION 1426d4000 FUN_1426d4000 body=1495 status=ok
// SIG undefined FUN_1426d4000(void)

char * FUN_1426d4000(char *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  short *psVar14;
  uint uVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar16 = (undefined8 *)0x0;
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x02';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\x02';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\x02';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  param_1[0x9b] = '\0';
  param_1[0x9c] = '\0';
  param_1[0x9d] = '\0';
  param_1[0x9e] = '\0';
  param_1[0x9f] = '\0';
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  param_1[0xa8] = '\0';
  param_1[0xa9] = '\0';
  param_1[0xaa] = '\0';
  param_1[0xab] = '\0';
  param_1[0xac] = '\0';
  param_1[0xad] = '\0';
  param_1[0xae] = '\0';
  param_1[0xaf] = '\0';
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xb2] = '\0';
  param_1[0xb3] = '\0';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = '\0';
  param_1[0xb7] = '\0';
  param_1[0xb8] = '\0';
  param_1[0xb9] = '\0';
  param_1[0xba] = '\0';
  param_1[0xbb] = '\0';
  param_1[0xbc] = '\0';
  param_1[0xbd] = '\0';
  param_1[0xbe] = '\0';
  param_1[0xbf] = '\0';
  param_1[0xc0] = '\0';
  param_1[0xc1] = '\0';
  param_1[0xc2] = '\0';
  param_1[0xc3] = '\0';
  param_1[0xc4] = '\0';
  param_1[0xc5] = '\0';
  param_1[0xc6] = '\0';
  param_1[199] = '\0';
  param_1[200] = '\0';
  param_1[0xc9] = '\0';
  param_1[0xca] = '\0';
  param_1[0xcb] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xcd] = '\0';
  param_1[0xce] = '\0';
  param_1[0xcf] = '\0';
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[0xd4] = '\0';
  param_1[0xd5] = '\0';
  param_1[0xd6] = '\0';
  param_1[0xd7] = '\0';
  param_1[0xd8] = '\0';
  param_1[0xd9] = '\0';
  param_1[0xda] = '\0';
  param_1[0xdb] = '\0';
  param_1[0xe0] = '\0';
  param_1[0xe1] = '\0';
  param_1[0xe2] = '\0';
  param_1[0xe3] = '\0';
  param_1[0xe4] = '\0';
  param_1[0xe5] = '\0';
  param_1[0xe6] = '\0';
  param_1[0xe7] = '\0';
  param_1[0xe8] = '\0';
  param_1[0xe9] = '\0';
  param_1[0xea] = '\0';
  param_1[0xeb] = '\0';
  param_1[0xf0] = '\0';
  param_1[0xf1] = '\0';
  param_1[0xf2] = '\0';
  param_1[0xf3] = '\0';
  param_1[0xf4] = '\0';
  param_1[0xf5] = '\0';
  param_1[0xf6] = '\0';
  param_1[0xf7] = '\0';
  param_1[0xf8] = '\0';
  param_1[0xf9] = '\0';
  param_1[0xfa] = '\0';
  param_1[0xfb] = '\0';
  param_1[0x108] = '\0';
  param_1[0x109] = '\0';
  param_1[0x10a] = '\0';
  param_1[0x10b] = '\0';
  param_1[0x10c] = '\0';
  param_1[0x10d] = '\0';
  param_1[0x10e] = '\0';
  param_1[0x10f] = '\0';
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  param_1[0x120] = '\0';
  param_1[0x121] = '\0';
  param_1[0x122] = '\0';
  param_1[0x123] = '\0';
  param_1[0x124] = '\0';
  param_1[0x125] = '\0';
  param_1[0x126] = '\0';
  param_1[0x127] = '\0';
  param_1[0x128] = '\0';
  param_1[0x129] = '\0';
  param_1[0x12a] = '\0';
  param_1[299] = '\0';
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = '\0';
  param_1[0x12f] = '\0';
  param_1[0x130] = '\0';
  param_1[0x131] = '\0';
  param_1[0x132] = '\0';
  param_1[0x133] = '\0';
  param_1[0x134] = '\0';
  param_1[0x135] = '\0';
  param_1[0x136] = '\0';
  param_1[0x137] = '\0';
  param_1[0x138] = '\0';
  param_1[0x139] = '\0';
  param_1[0x13a] = '\0';
  param_1[0x13b] = '\0';
  param_1[0x13c] = '\0';
  param_1[0x13d] = '\0';
  param_1[0x13e] = '\0';
  param_1[0x13f] = '\0';
  param_1[0x140] = '\0';
  param_1[0x141] = '\0';
  param_1[0x142] = '\0';
  param_1[0x143] = '\0';
  param_1[0x144] = '\0';
  param_1[0x145] = '\0';
  param_1[0x146] = '\0';
  param_1[0x147] = '\0';
  param_1[0x148] = '\0';
  param_1[0x149] = '\0';
  param_1[0x14a] = '\0';
  param_1[0x14b] = '\0';
  param_1[0x14c] = '\0';
  param_1[0x14d] = '\0';
  param_1[0x14e] = '\0';
  param_1[0x14f] = '\0';
  param_1[0x150] = '\0';
  param_1[0x151] = '\0';
  param_1[0x152] = '\0';
  param_1[0x153] = '\0';
  param_1[0x154] = '\0';
  param_1[0x155] = '\0';
  param_1[0x156] = '\0';
  param_1[0x157] = '\0';
  param_1[0x100] = '\0';
  param_1[0x160] = '\0';
  param_1[0x161] = '\0';
  param_1[0x162] = '\0';
  param_1[0x163] = '\0';
  param_1[0x164] = '\0';
  param_1[0x165] = '\0';
  param_1[0x166] = '\0';
  param_1[0x167] = '\0';
  param_1[0x168] = '\0';
  param_1[0x169] = '\0';
  param_1[0x16a] = '\0';
  param_1[0x16b] = '\0';
  param_1[0x16c] = '\0';
  param_1[0x16d] = '\0';
  param_1[0x16e] = '\0';
  param_1[0x16f] = '\0';
  param_1[0x170] = '\0';
  param_1[0x171] = '\0';
  param_1[0x172] = '\0';
  param_1[0x173] = '\0';
  param_1[0x174] = '\0';
  param_1[0x175] = '\0';
  param_1[0x176] = '\0';
  param_1[0x177] = '\0';
  param_1[0x178] = '\0';
  param_1[0x179] = '\0';
  param_1[0x17a] = '\0';
  param_1[0x17b] = '\0';
  param_1[0x17c] = '\0';
  param_1[0x17d] = '\0';
  param_1[0x17e] = '\0';
  param_1[0x17f] = '\0';
  param_1[0x180] = '\0';
  param_1[0x181] = '\0';
  param_1[0x182] = '\0';
  param_1[0x183] = '\0';
  param_1[0x184] = '\0';
  param_1[0x185] = '\0';
  param_1[0x186] = '\0';
  param_1[0x187] = '\0';
  param_1[0x188] = '\0';
  param_1[0x189] = '\0';
  param_1[0x18a] = '\0';
  param_1[0x18b] = '\0';
  param_1[0x18c] = '\0';
  param_1[0x18d] = '\0';
  param_1[0x18e] = '\0';
  param_1[399] = '\0';
  param_1[400] = '\0';
  param_1[0x191] = '\0';
  param_1[0x192] = '\0';
  param_1[0x193] = '\0';
  param_1[0x194] = '\0';
  param_1[0x195] = '\0';
  param_1[0x196] = '\0';
  param_1[0x197] = '\0';
  param_1[0x198] = '\0';
  param_1[0x199] = '\0';
  param_1[0x19a] = '\0';
  param_1[0x19b] = '\0';
  param_1[0x19c] = '\0';
  param_1[0x19d] = '\0';
  param_1[0x19e] = '\0';
  param_1[0x19f] = '\0';
  param_1[0x1a0] = '\0';
  param_1[0x1a1] = '\0';
  param_1[0x1a2] = '\0';
  param_1[0x1a3] = '\0';
  param_1[0x1a4] = '\0';
  param_1[0x1a5] = '\0';
  param_1[0x1a6] = '\0';
  param_1[0x1a7] = '\0';
  param_1[0x1a8] = '\0';
  param_1[0x1a9] = '\0';
  param_1[0x1aa] = '\0';
  param_1[0x1ab] = '\0';
  param_1[0x1ac] = '\0';
  param_1[0x1ad] = '\0';
  param_1[0x1ae] = '\0';
  param_1[0x1af] = '\0';
  param_1[0x158] = '\0';
  param_1[0x1b8] = '\0';
  param_1[0x1b9] = '\0';
  param_1[0x1ba] = '\0';
  param_1[0x1bb] = '\0';
  param_1[0x1bc] = '\0';
  param_1[0x1bd] = '\0';
  param_1[0x1be] = '\0';
  param_1[0x1bf] = '\0';
  param_1[0x1c0] = '\0';
  param_1[0x1c1] = '\0';
  param_1[0x1c2] = '\0';
  param_1[0x1c3] = '\0';
  param_1[0x1c4] = '\0';
  param_1[0x1c5] = '\0';
  param_1[0x1c6] = '\0';
  param_1[0x1c7] = '\0';
  param_1[0x1c8] = '\0';
  param_1[0x1c9] = '\0';
  param_1[0x1ca] = '\0';
  param_1[0x1cb] = '\0';
  param_1[0x1cc] = '\0';
  param_1[0x1cd] = '\0';
  param_1[0x1ce] = '\0';
  param_1[0x1cf] = '\0';
  param_1[0x1d0] = '\0';
  param_1[0x1d1] = '\0';
  param_1[0x1d2] = '\0';
  param_1[0x1d3] = '\0';
  param_1[0x1d4] = '\0';
  param_1[0x1d5] = '\0';
  param_1[0x1d6] = '\0';
  param_1[0x1d7] = '\0';
  param_1[0x1d8] = '\0';
  param_1[0x1d9] = '\0';
  param_1[0x1da] = '\0';
  param_1[0x1db] = '\0';
  param_1[0x1dc] = '\0';
  param_1[0x1dd] = '\0';
  param_1[0x1de] = '\0';
  param_1[0x1df] = '\0';
  param_1[0x1e0] = '\0';
  param_1[0x1e1] = '\0';
  param_1[0x1e2] = '\0';
  param_1[0x1e3] = '\0';
  param_1[0x1e4] = '\0';
  param_1[0x1e5] = '\0';
  param_1[0x1e6] = '\0';
  param_1[0x1e7] = '\0';
  param_1[0x1e8] = '\0';
  param_1[0x1e9] = '\0';
  param_1[0x1ea] = '\0';
  param_1[0x1eb] = '\0';
  param_1[0x1ec] = '\0';
  param_1[0x1ed] = '\0';
  param_1[0x1ee] = '\0';
  param_1[0x1ef] = '\0';
  param_1[0x1f0] = '\0';
  param_1[0x1f1] = '\0';
  param_1[0x1f2] = '\0';
  param_1[499] = '\0';
  param_1[500] = '\0';
  param_1[0x1f5] = '\0';
  param_1[0x1f6] = '\0';
  param_1[0x1f7] = '\0';
  param_1[0x1f8] = '\0';
  param_1[0x1f9] = '\0';
  param_1[0x1fa] = '\0';
  param_1[0x1fb] = '\0';
  param_1[0x1fc] = '\0';
  param_1[0x1fd] = '\0';
  param_1[0x1fe] = '\0';
  param_1[0x1ff] = '\0';
  param_1[0x200] = '\0';
  param_1[0x201] = '\0';
  param_1[0x202] = '\0';
  param_1[0x203] = '\0';
  param_1[0x204] = '\0';
  param_1[0x205] = '\0';
  param_1[0x206] = '\0';
  param_1[0x207] = '\0';
  param_1[0x1b0] = '\0';
  param_1[0x280] = '\0';
  param_1[0x281] = '\0';
  param_1[0x282] = '\0';
  param_1[0x283] = '\0';
  param_1[0x284] = '\0';
  param_1[0x285] = '\0';
  param_1[0x286] = '\0';
  param_1[0x287] = '\0';
  param_1[0x288] = '\0';
  param_1[0x289] = '\0';
  param_1[0x28a] = '\0';
  param_1[0x28b] = '\0';
  param_1[0x28c] = '\0';
  param_1[0x28d] = '\0';
  param_1[0x28e] = '\0';
  param_1[0x28f] = '\0';
  param_1[0x290] = '\0';
  param_1[0x291] = '\0';
  param_1[0x292] = '\0';
  param_1[0x293] = '\0';
  param_1[0x294] = '\0';
  param_1[0x295] = '\0';
  param_1[0x296] = '\0';
  param_1[0x297] = '\0';
  param_1[0x298] = '\0';
  param_1[0x299] = '\0';
  param_1[0x29a] = '\0';
  param_1[0x29b] = '\0';
  param_1[0x29c] = '\0';
  param_1[0x29d] = '\0';
  param_1[0x29e] = '\0';
  param_1[0x29f] = '\0';
  param_1[0x2a0] = '\0';
  param_1[0x2a1] = '\0';
  param_1[0x2a2] = '\0';
  param_1[0x2a3] = '\0';
  param_1[0x2a4] = '\0';
  param_1[0x2a5] = '\0';
  param_1[0x2a6] = '\0';
  param_1[0x2a7] = '\0';
  param_1[0x2a8] = '\0';
  param_1[0x2a9] = '\0';
  param_1[0x2aa] = '\0';
  param_1[0x2ab] = '\0';
  param_1[0x2ac] = '\0';
  param_1[0x2ad] = '\0';
  param_1[0x2ae] = '\0';
  param_1[0x2af] = '\0';
  param_1[0x2b0] = '\0';
  param_1[0x2b1] = '\0';
  param_1[0x2b2] = '\0';
  param_1[0x2b3] = '\0';
  param_1[0x2b4] = '\0';
  param_1[0x2b5] = '\0';
  param_1[0x2b6] = '\0';
  param_1[0x2b7] = '\0';
  param_1[0x2b8] = '\0';
  param_1[0x2b9] = '\0';
  param_1[0x2ba] = '\0';
  param_1[699] = '\0';
  param_1[700] = '\0';
  param_1[0x2bd] = '\0';
  param_1[0x2be] = '\0';
  param_1[0x2bf] = '\0';
  param_1[0x2c0] = '\0';
  param_1[0x2c1] = '\0';
  param_1[0x2c2] = '\0';
  param_1[0x2c3] = '\0';
  param_1[0x2c4] = '\0';
  param_1[0x2c5] = '\0';
  param_1[0x2c6] = '\0';
  param_1[0x2c7] = '\0';
  param_1[0x2c8] = '\0';
  param_1[0x2c9] = '\0';
  param_1[0x2ca] = '\0';
  param_1[0x2cb] = '\0';
  param_1[0x2cc] = '\0';
  param_1[0x2cd] = '\0';
  param_1[0x2ce] = '\0';
  param_1[0x2cf] = '\0';
  param_1[0x2d0] = '\0';
  param_1[0x2d1] = '\0';
  param_1[0x2d2] = '\0';
  param_1[0x2d3] = '\0';
  param_1[0x2d4] = '\0';
  param_1[0x2d5] = '\0';
  param_1[0x2d6] = '\0';
  param_1[0x2d7] = '\0';
  param_1[0x2d8] = '\0';
  param_1[0x2d9] = '\0';
  param_1[0x2da] = '\0';
  param_1[0x2db] = '\0';
  param_1[0x2dc] = '\0';
  param_1[0x2dd] = '\0';
  param_1[0x2de] = '\0';
  param_1[0x2df] = '\0';
  param_1[0x2e0] = '\0';
  param_1[0x2e1] = '\0';
  param_1[0x2e2] = '\0';
  param_1[0x2e3] = '\0';
  param_1[0x2e8] = '\0';
  param_1[0x2e9] = '\0';
  param_1[0x2ea] = '\0';
  param_1[0x2eb] = '\0';
  param_1[0x2ec] = '\0';
  param_1[0x2ed] = '\0';
  param_1[0x2ee] = '\0';
  param_1[0x2ef] = '\0';
  param_1[0x308] = '\0';
  param_1[0x309] = '\0';
  param_1[0x30a] = '\0';
  param_1[0x30b] = '\0';
  param_1[0x30c] = '\0';
  param_1[0x30d] = '\0';
  param_1[0x30e] = '\0';
  param_1[0x30f] = '\0';
  param_1[0x310] = '\0';
  param_1[0x311] = '\0';
  param_1[0x312] = '\0';
  param_1[0x313] = '\0';
  param_1[0x314] = '\0';
  param_1[0x315] = '\0';
  param_1[0x316] = '\0';
  param_1[0x317] = '\0';
  param_1[0x318] = '\0';
  param_1[0x319] = '\0';
  param_1[0x31a] = '\0';
  param_1[0x31b] = '\0';
  param_1[0x31c] = '\0';
  param_1[0x31d] = '\0';
  param_1[0x31e] = '\0';
  param_1[799] = '\0';
  param_1[800] = '\0';
  param_1[0x321] = '\0';
  param_1[0x322] = '\0';
  param_1[0x323] = '\0';
  param_1[0x324] = '\0';
  param_1[0x325] = '\0';
  param_1[0x326] = '\0';
  param_1[0x327] = '\0';
  param_1[0x338] = '\0';
  param_1[0x339] = '\0';
  param_1[0x33a] = '\0';
  param_1[0x33b] = '\0';
  param_1[0x33c] = '\0';
  param_1[0x33d] = '\0';
  param_1[0x33e] = '\0';
  param_1[0x33f] = '\0';
  param_1[0x340] = '\0';
  param_1[0x341] = '\0';
  param_1[0x342] = '\0';
  param_1[0x343] = '\0';
  param_1[0x344] = '\0';
  param_1[0x345] = '\0';
  param_1[0x346] = '\0';
  param_1[0x347] = '\0';
  param_1[0x348] = -1;
  param_1[0x349] = -1;
  param_1[0x34a] = -1;
  param_1[0x34b] = -1;
  lVar11 = 3;
  param_1[0x34c] = '\0';
  param_1[0x34d] = '\0';
  param_1[0x34e] = '\0';
  param_1[0x34f] = '\0';
  param_1[0x358] = '\0';
  param_1[0x359] = '\0';
  param_1[0x35a] = '\0';
  param_1[0x35b] = '\0';
  param_1[0x35c] = '\0';
  param_1[0x35d] = '\0';
  param_1[0x35e] = '\0';
  param_1[0x35f] = '\0';
  param_1[0x360] = '\0';
  param_1[0x361] = '\0';
  param_1[0x362] = '\0';
  param_1[0x363] = '\0';
  pcVar10 = param_1 + 0x368;
  pcVar3 = param_1 + 0x394;
  do {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    pcVar10 = pcVar10 + 0x50;
    pcVar3[-0x24] = '\0';
    pcVar3[-0x23] = '\0';
    pcVar3[-0x22] = '\0';
    pcVar3[-0x21] = '\0';
    pcVar3[-0x20] = '\0';
    pcVar3[-0x1f] = '\0';
    pcVar3[-0x1e] = '\0';
    pcVar3[-0x1d] = '\0';
    pcVar3[-0xc] = '\0';
    pcVar3[-0xb] = '\0';
    pcVar3[-10] = '\0';
    pcVar3[-9] = '\0';
    pcVar3[-8] = '\0';
    pcVar3[-7] = '\0';
    pcVar3[-6] = '\0';
    pcVar3[-5] = '\0';
    pcVar3[-4] = '\0';
    pcVar3[-3] = '\0';
    pcVar3[-2] = '\0';
    pcVar3[-1] = '\0';
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = -1;
    pcVar3[5] = -1;
    pcVar3[6] = -1;
    pcVar3[7] = -1;
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    pcVar3[0x18] = '\0';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3 = pcVar3 + 0x50;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  param_1[0x458] = '\0';
  param_1[0x459] = '\0';
  param_1[0x45a] = '\0';
  param_1[0x45b] = '\0';
  param_1[0x45c] = '\0';
  param_1[0x45d] = '\0';
  param_1[0x45e] = '\0';
  param_1[0x45f] = '\0';
  param_1[0x460] = '\0';
  param_1[0x461] = '\0';
  param_1[0x462] = '\0';
  param_1[0x463] = '\0';
  param_1[0x464] = '\0';
  param_1[0x465] = '\0';
  param_1[0x466] = '\0';
  param_1[0x467] = '\0';
  param_1[0x478] = '\0';
  param_1[0x479] = '\0';
  param_1[0x47a] = '\0';
  param_1[0x47b] = '\0';
  param_1[0x47c] = '\0';
  param_1[0x47d] = '\0';
  param_1[0x47e] = '\0';
  param_1[0x47f] = '\0';
  param_1[0x480] = '\0';
  param_1[0x481] = '\0';
  param_1[0x482] = '\0';
  param_1[0x483] = '\0';
  param_1[0x484] = '\0';
  param_1[0x485] = '\0';
  param_1[0x486] = '\0';
  param_1[0x487] = '\0';
  param_1[0x488] = -1;
  param_1[0x489] = -1;
  param_1[0x48a] = -1;
  param_1[0x48b] = -1;
  param_1[0x48c] = '\0';
  param_1[0x48d] = '\0';
  param_1[0x48e] = '\0';
  param_1[0x48f] = '\0';
  param_1[0x498] = '\0';
  param_1[0x499] = '\0';
  param_1[0x49a] = '\0';
  param_1[0x49b] = '\0';
  param_1[0x49c] = '\0';
  param_1[0x49d] = '\0';
  param_1[0x49e] = '\0';
  param_1[0x49f] = '\0';
  param_1[0x4a0] = '\0';
  param_1[0x4a1] = '\0';
  param_1[0x4a2] = '\0';
  param_1[0x4a3] = '\0';
  param_1[0x4a8] = '\0';
  param_1[0x4a9] = '\0';
  param_1[0x4aa] = '\0';
  param_1[0x4ab] = '\0';
  param_1[0x4ac] = '\0';
  param_1[0x4ad] = '\0';
  param_1[0x4ae] = '\0';
  param_1[0x4af] = '\0';
  param_1[0x4b8] = '\0';
  param_1[0x4b9] = '\0';
  param_1[0x4ba] = '\0';
  param_1[0x4bb] = '\0';
  param_1[0x4bc] = '\0';
  param_1[0x4bd] = '\0';
  param_1[0x4be] = '\0';
  param_1[0x4bf] = '\0';
  param_1[0x4c0] = '\0';
  param_1[0x4c1] = '\0';
  param_1[0x4c2] = '\0';
  param_1[0x4c3] = '\0';
  param_1[0x4c4] = '\0';
  param_1[0x4c5] = '\0';
  param_1[0x4c6] = '\0';
  param_1[0x4c7] = '\0';
  param_1[0x4e0] = '\0';
  param_1[0x4e1] = '\0';
  param_1[0x4e2] = '\0';
  param_1[0x4e3] = '\0';
  param_1[0x4e4] = '\0';
  param_1[0x4e5] = '\0';
  param_1[0x4e6] = '\0';
  param_1[0x4e7] = '\0';
  param_1[0x4e8] = '\0';
  param_1[0x4e9] = '\0';
  param_1[0x4ea] = '\0';
  param_1[0x4eb] = '\0';
  param_1[0x4ec] = '\0';
  param_1[0x4ed] = '\0';
  param_1[0x4ee] = '\0';
  param_1[0x4ef] = '\0';
  param_1[0x4f0] = '\0';
  param_1[0x4f1] = '\0';
  param_1[0x4f2] = '\0';
  param_1[0x4f3] = '\0';
  param_1[0x4f4] = '\0';
  param_1[0x4f5] = '\0';
  param_1[0x4f6] = '\0';
  param_1[0x4f7] = '\0';
  param_1[0x4f8] = '\0';
  param_1[0x4f9] = '\0';
  param_1[0x4fa] = '\0';
  param_1[0x4fb] = '\0';
  param_1[0x4fc] = '\0';
  param_1[0x4fd] = '\0';
  param_1[0x4fe] = '\0';
  param_1[0x4ff] = '\0';
  param_1[0x500] = '\0';
  param_1[0x501] = '\0';
  param_1[0x502] = '\0';
  param_1[0x503] = '\0';
  param_1[0x504] = '\0';
  param_1[0x505] = '\0';
  param_1[0x506] = '\0';
  param_1[0x507] = '\0';
  param_1[0x508] = '\0';
  param_1[0x509] = '\0';
  param_1[0x50a] = '\0';
  param_1[0x50b] = '\0';
  param_1[0x50c] = '\0';
  param_1[0x50d] = '\0';
  param_1[0x50e] = '\0';
  param_1[0x50f] = '\0';
  uStack_50 = SUB84(param_1,0);
  uStack_4c = (undefined4)((ulonglong)param_1 >> 0x20);
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = '\0';
  param_1[0x53] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x2e0] = '\x03';
  param_1[0x2e1] = '\0';
  param_1[0x2e2] = '\0';
  param_1[0x2e3] = '\0';
  *(undefined4 *)(param_1 + 0x2e4) = uStack_54;
  *(undefined4 *)(param_1 + 0x2e8) = uStack_50;
  *(undefined4 *)(param_1 + 0x2ec) = uStack_4c;
  plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar11 = plVar4[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar11 = plVar4[0x1f];
  }
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar11 + 0xc4);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar11 + 200);
  param_1[1] = *(char *)(lVar11 + 0xb8);
  param_1[2] = *(char *)(lVar11 + 0xb9);
  cVar1 = *(char *)(lVar11 + 0x50);
  *param_1 = cVar1;
  *(uint *)(param_1 + 4) = (cVar1 != '\0') + 2;
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(lVar11 + 0xd0);
  puVar5 = puVar16;
  do {
    FUN_1426e3d00(param_1,puVar5,param_2);
    (param_1 + 0x66)[(longlong)puVar5] = '\0';
    (param_1 + 0x69)[(longlong)puVar5] = '\0';
    fVar17 = *(float *)(param_1 + (longlong)puVar5 * 4 + 0x78);
    *(undefined4 *)(param_1 + (longlong)puVar5 * 4 + 0x6c) = *(undefined4 *)(lVar11 + 0xcc);
    if (0.0 <= fVar17) {
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
    }
    else {
      fVar17 = 0.0;
    }
    uVar12 = (int)puVar5 + 1;
    *(float *)(param_1 + (longlong)puVar5 * 4 + 0x78) = fVar17;
    puVar5 = (undefined8 *)(ulonglong)uVar12;
  } while (uVar12 < *(uint *)(param_1 + 4));
  if (DAT_146b087b8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0xb0);
    puVar5 = puVar16;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_14516e338;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 10) = 0;
      puVar8[0xb] = param_1;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      *(undefined4 *)(puVar8 + 0x12) = 0xffffffff;
      *(undefined4 *)((longlong)puVar8 + 0x94) = 0;
      puVar8[0x14] = 0;
      *(undefined4 *)(puVar8 + 0x15) = 0;
      puVar5 = puVar8;
    }
  }
  else {
    puVar5 = (undefined8 *)(**(code **)*DAT_146b087b8)(DAT_146b087b8,param_1);
  }
  *(undefined8 **)(param_1 + 0x58) = puVar5;
  if (*param_1 == '\0') {
    param_1[100] = '\0';
    param_1[0x65] = '\0';
  }
  plVar4 = (longlong *)FUN_14178e3a0();
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  puVar5 = puVar16;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = (longlong)param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FPhysScene::WaitPhysScenes;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
    iVar2 = (int)plVar4[1];
    puVar5 = (undefined8 *)*puVar5;
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
    *puVar8 = plVar6;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  *(undefined8 **)(param_1 + 0x4a8) = puVar5;
  if (0 < *(int *)(lVar11 + 0x44)) {
    iVar2 = *(int *)(lVar11 + 0x44) + 0x3fff;
    puVar13 = (uint *)(param_1 + 0xd8);
    psVar14 = (short *)(param_1 + 0x60);
    uVar12 = (iVar2 >> 0x1f & 0x3fffU) + iVar2 & 0xffffc000;
    do {
      uVar15 = (uint)puVar16;
      if (((uVar15 < *(uint *)(param_1 + 4)) && (lVar11 = FUN_1426e2550((int)*psVar14), uVar15 != 1)
          ) && (lVar11 != 0)) {
        uVar9 = FMemory::Malloc((longlong)(int)uVar12,0x10);
        *(undefined8 *)(puVar13 + -2) = uVar9;
        *puVar13 = uVar12;
      }
      puVar16 = (undefined8 *)(ulonglong)(uVar15 + 1);
      psVar14 = psVar14 + 1;
      puVar13 = puVar13 + 4;
    } while (uVar15 + 1 < 3);
    param_1[0x510] = '\0';
    return param_1;
  }
  param_1[0x510] = '\0';
  return param_1;
}



// FUNCTION 1426d45e0 FUN_1426d45e0 body=128 status=ok
// SIG undefined FUN_1426d45e0(void)

longlong FUN_1426d45e0(longlong param_1,undefined8 param_2)

{
  FCookBodySetupInfo::FCookBodySetupInfo();
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
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  return param_1;
}



// FUNCTION 1426d4660 FUN_1426d4660 body=1315 status=ok
// SIG undefined FUN_1426d4660(void)

longlong * FUN_1426d4660(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  char local_res20 [8];
  char local_118 [4];
  int local_114;
  int local_110;
  int local_10c;
  undefined **local_108;
  longlong local_100;
  int local_f8;
  uint local_f4;
  longlong local_f0;
  undefined **local_e8;
  longlong *local_e0;
  byte local_bf;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  
  iVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar2 = FUN_14171efb0(param_2,1);
  local_f0 = lVar2;
  iVar1 = FUntypedBulkData::GetBulkDataSize(param_2);
  FArchive::FArchive(&local_e8);
  local_e8 = &PTR__scalar_deleting_destructor__143f600f0;
  local_50 = 0;
  bVar5 = 0;
  local_40 = '\0';
  local_58 = lVar2;
  local_48 = (longlong)iVar1;
  FArchive::SetIsLoading(&local_e8,1);
  FArchive::SetIsPersistent(&local_e8,0);
  local_e8 = &PTR__scalar_deleting_destructor__143f60308;
  local_res20[0] = '\x01';
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  if ((char *)local_e0[1] < (char *)*local_e0 + 1) {
    FBufferReaderBase::Serialize(&local_e8,local_res20,1);
  }
  else {
    local_res20[0] = *(char *)*local_e0;
    *local_e0 = *local_e0 + 1;
  }
  if (local_res20[0] == '\0') {
    bVar5 = 0x10;
  }
  local_bf = bVar5 | local_bf & 0xef;
  if ((int *)local_e0[1] < (int *)*local_e0 + 1) {
    (*(code *)local_e8[10])(&local_e8,&local_114,4);
    if ((local_bf & 0x10) != 0) {
      FArchive::ByteSwap(&local_e8,&local_114,4);
    }
  }
  else {
    local_114 = *(int *)*local_e0;
    *local_e0 = *local_e0 + 4;
  }
  if ((int *)local_e0[1] < (int *)*local_e0 + 1) {
    (*(code *)local_e8[10])(&local_e8,&local_110,4);
    if ((local_bf & 0x10) != 0) {
      FArchive::ByteSwap(&local_e8,&local_110,4);
    }
  }
  else {
    local_110 = *(int *)*local_e0;
    *local_e0 = *local_e0 + 4;
  }
  if ((int *)local_e0[1] < (int *)*local_e0 + 1) {
    (*(code *)local_e8[10])(&local_e8,&local_10c,4);
    if ((local_bf & 0x10) != 0) {
      FArchive::ByteSwap(&local_e8,&local_10c,4);
    }
  }
  else {
    local_10c = *(int *)*local_e0;
    *local_e0 = *local_e0 + 4;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_114) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,local_114);
  }
  lVar2 = local_f0;
  if (0 < local_114) {
    do {
      uVar3 = 0;
      iVar1 = FUntypedBulkData::GetBulkDataSize(param_2);
      local_118[0] = '\0';
      if ((char *)local_e0[1] < (char *)*local_e0 + 1) {
        (*(code *)local_e8[10])(&local_e8,local_118,1);
      }
      else {
        local_118[0] = *(char *)*local_e0;
        *local_e0 = *local_e0 + 1;
      }
      if (local_118[0] != '\0') {
        local_f8 = iVar1 - (int)local_50;
        local_100 = local_50 + lVar2;
        local_108 = &PTR_read_144eeacb0;
        local_f4 = 0;
        uVar3 = (**(code **)(*DAT_146b08400 + 0x58))(DAT_146b08400,&local_108);
        local_50 = local_50 + (ulonglong)local_f4;
      }
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      iVar6 = iVar6 + 1;
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
    } while (iVar6 < local_114);
  }
  iVar1 = 0;
  plVar4 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != local_110) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar4,local_110);
  }
  lVar2 = local_f0;
  if (0 < local_110) {
    do {
      uVar3 = 0;
      iVar6 = FUntypedBulkData::GetBulkDataSize(param_2);
      local_118[0] = '\0';
      if ((char *)local_e0[1] < (char *)*local_e0 + 1) {
        (*(code *)local_e8[10])(&local_e8,local_118,1);
      }
      else {
        local_118[0] = *(char *)*local_e0;
        *local_e0 = *local_e0 + 1;
      }
      if (local_118[0] != '\0') {
        local_f8 = iVar6 - (int)local_50;
        local_100 = local_50 + lVar2;
        local_108 = &PTR_read_144eeacb0;
        local_f4 = 0;
        uVar3 = (**(code **)(*DAT_146b08400 + 0x58))(DAT_146b08400,&local_108);
        local_50 = local_50 + (ulonglong)local_f4;
      }
      iVar6 = (int)param_1[3];
      *(int *)(param_1 + 3) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar6);
      }
      iVar1 = iVar1 + 1;
      *(undefined8 *)(*plVar4 + (longlong)iVar6 * 8) = uVar3;
    } while (iVar1 < local_110);
  }
  plVar4 = param_1 + 4;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != local_10c) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar4,local_10c);
  }
  lVar2 = local_f0;
  if (0 < local_10c) {
    do {
      local_f8 = FUntypedBulkData::GetBulkDataSize(param_2);
      local_f8 = local_f8 - (int)local_50;
      local_100 = local_50 + lVar2;
      local_108 = &PTR_read_144eeacb0;
      local_f4 = 0;
      uVar3 = (**(code **)(*DAT_146b08400 + 0x28))(DAT_146b08400,&local_108);
      iVar6 = (int)param_1[5];
      local_50 = local_50 + (ulonglong)local_f4;
      *(int *)(param_1 + 5) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0x2c) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar6);
      }
      iVar1 = iVar1 + 1;
      *(undefined8 *)(*plVar4 + (longlong)iVar6 * 8) = uVar3;
    } while (iVar1 < local_10c);
  }
  FUN_1408bda20(&local_e8,param_3);
  FUN_1408bddc0(&local_e8,param_3 + 0x10);
  FUN_1426d5ed0(&local_e8,param_3 + 0x20);
  FUntypedBulkData::Unlock(param_2);
  local_e8 = &PTR__scalar_deleting_destructor__143f600f0;
  if (local_40 != '\0') {
    FMemory::Free(local_58);
    local_58 = 0;
  }
  FArchive::~FArchive(&local_e8);
  return param_1;
}



// FUNCTION 1426d4b90 FUN_1426d4b90 body=883 status=ok
// SIG undefined FUN_1426d4b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1426d4b90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint local_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float local_68;
  uint uStack_64;
  float fStack_60;
  uint uStack_5c;
  float local_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  
  *(undefined8 *)(param_1 + 0x4c) = 0x3f800000;
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 300) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  fVar9 = *(float *)(param_2 + 1000);
  fVar10 = *(float *)(param_2 + 0x3e4);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  *(float *)(param_1 + 0x3c) = fVar9;
  uVar1 = *(undefined4 *)(param_2 + 0x3c8);
  fVar9 = fVar9 - fVar10;
  if (fVar9 <= 1e-05) {
    fVar9 = 1e-05;
  }
  *(ulonglong *)(param_1 + 0x60) = CONCAT44((1.0 / fVar9) * fVar10,1.0 / fVar9) ^ 0x8000000000000000
  ;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  fVar9 = *(float *)(param_2 + 0x3ec);
  if (0.1 <= fVar9) {
    if (89.9 <= fVar9) {
      fVar9 = 89.9;
    }
  }
  else {
    fVar9 = 0.1;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar9 * 0.017453292);
  fVar9 = *(float *)(param_2 + 0x3f0);
  fVar10 = 0.1;
  if ((0.1 <= fVar9) && (fVar10 = fVar9, 89.9 <= fVar9)) {
    fVar10 = 89.9;
  }
  fVar9 = _guard_xfg_dispatch_icall_nop(fVar10 * 0.017453292);
  fVar8 = fVar8 - fVar9;
  if (fVar8 <= 1e-05) {
    fVar8 = 1e-05;
  }
  *(float *)(param_1 + 0x6c) = 1.0 / fVar8;
  *(float *)(param_1 + 0x70) = -((1.0 / fVar8) * fVar9);
  uVar6 = *(undefined8 *)(param_2 + 0x418);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x410);
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x428);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x420);
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x438);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x430);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x448);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x440);
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x458);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0x450);
  *(undefined8 *)(param_1 + 200) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x468);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x460);
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x478);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0x470);
  *(undefined8 *)(param_1 + 0xe8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x488);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0x480);
  *(undefined8 *)(param_1 + 0xf8) = uVar6;
  *(undefined8 *)(param_1 + 0x100) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x110) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x118) = 0xffffffffffffffff;
  if (*(longlong *)(param_2 + 0x118) != 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x18);
  }
  *(undefined8 *)(param_1 + 0x150) = uVar7;
  fVar9 = *(float *)(param_2 + 0x210);
  fVar10 = *(float *)(param_2 + 0x214);
  fVar8 = *(float *)(param_2 + 0x218);
  fVar2 = *(float *)(param_2 + 0x21c);
  fVar11 = fVar10 + fVar10;
  fVar13 = fVar8 + fVar8;
  fVar14 = fVar9 * (fVar9 + fVar9);
  fVar12 = (fVar9 + fVar9) * fVar2;
  fVar3 = *(float *)(param_2 + 0x230);
  fVar4 = *(float *)(param_2 + 0x234);
  fVar5 = *(float *)(param_2 + 0x238);
  fStack_74 = (fVar13 * fVar2 + fVar11 * fVar9) * fVar3;
  fStack_60 = (fVar12 + fVar13 * fVar10) * fVar4;
  local_58 = (fVar11 * fVar2 + fVar13 * fVar9) * fVar5;
  local_68 = fVar4 * (fVar11 * fVar9 - fVar13 * fVar2);
  fStack_54 = fVar5 * (fVar13 * fVar10 - fVar12);
  fStack_70 = fVar3 * (fVar13 * fVar9 - fVar11 * fVar2);
  local_78 = (uint)((_DAT_146b08470 - (fVar8 * fVar13 + fVar10 * fVar11)) * fVar3) & _DAT_146b08480;
  uStack_64 = (uint)((fRam0000000146b08474 - (fVar8 * fVar13 + fVar14)) * fVar4) &
              uRam0000000146b08484;
  uStack_50 = (uint)((fRam0000000146b08478 - (fVar10 * fVar11 + fVar14)) * fVar5) &
              uRam0000000146b08488;
  uStack_6c = (uint)((fRam0000000146b0847c - (fVar14 + fVar14)) * *(float *)(param_2 + 0x23c)) &
              uRam0000000146b0848c;
  local_48 = *(undefined4 *)(param_2 + 0x220);
  uStack_44 = *(undefined4 *)(param_2 + 0x224);
  uStack_40 = *(undefined4 *)(param_2 + 0x228);
  fStack_3c = fRam0000000146b0847c;
  uStack_5c = uStack_6c;
  uStack_4c = uStack_6c;
  FUN_141c2f150(param_1,&local_78);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x3cc);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x3d0);
  return param_1;
}



// FUNCTION 1426d4f10 PhysXCompletionTask body=87 status=ok
// SIG undefined PhysXCompletionTask(void)

undefined8 *
PhysXCompletionTask::PhysXCompletionTask
          (undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__14516cd20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14516f120;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar1 = *param_2;
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
    UNLOCK();
  }
  param_1[7] = param_5;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[3] = 0;
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 1426d4f70 UPhysicsCollisionHandler body=40 status=ok
// SIG undefined UPhysicsCollisionHandler(void)

undefined8 * UPhysicsCollisionHandler::UPhysicsCollisionHandler(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3dcccccd;
  *param_1 = &PTR_FUN_14516cd78;
  return param_1;
}



// FUNCTION 1426d4fa0 FUN_1426d4fa0 body=125 status=ok
// SIG undefined FUN_1426d4fa0(void)

undefined8 * FUN_1426d4fa0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_14516d6e8;
  param_1[5] = &PTR_LAB_14516dc30;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  FUN_1426b5240(param_1 + 99);
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  return param_1;
}



// FUNCTION 1426d5020 UPhysicsConstraintTemplate body=70 status=ok
// SIG undefined UPhysicsConstraintTemplate(void)

undefined8 * UPhysicsConstraintTemplate::UPhysicsConstraintTemplate(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14516dca8;
  FUN_1426b5240(param_1 + 5);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FConstraintProfileProperties::FConstraintProfileProperties(param_1 + 0x3e);
  return param_1;
}



// FUNCTION 1426d5070 FUN_1426d5070 body=231 status=ok
// SIG undefined FUN_1426d5070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1426d5070(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__14516df20;
  param_1[5] = &PTR_LAB_1445e7280;
  param_1[0x30] = 0;
  uVar1 = uRam0000000146b0847c;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(uint *)((longlong)param_1 + 0x1ac) = uVar1;
  uVar1 = uRam0000000146b08474 & uRam0000000146b08484;
  uVar2 = uRam0000000146b08478 & uRam0000000146b08488;
  uVar3 = uRam0000000146b0847c & uRam0000000146b0848c;
  *(uint *)(param_1 + 0x38) = _DAT_146b08470 & _DAT_146b08480;
  *(uint *)((longlong)param_1 + 0x1c4) = uVar1;
  *(uint *)(param_1 + 0x39) = uVar2;
  *(uint *)((longlong)param_1 + 0x1cc) = uVar3;
  uVar1 = uRam0000000146b0847c;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(uint *)((longlong)param_1 + 0x1dc) = uVar1;
  uVar1 = uRam0000000146b08474 & uRam0000000146b08484;
  uVar2 = uRam0000000146b08478 & uRam0000000146b08488;
  uVar3 = uRam0000000146b0847c & uRam0000000146b0848c;
  *(uint *)(param_1 + 0x3e) = _DAT_146b08470 & _DAT_146b08480;
  *(uint *)((longlong)param_1 + 500) = uVar1;
  *(uint *)(param_1 + 0x3f) = uVar2;
  *(uint *)((longlong)param_1 + 0x1fc) = uVar3;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(uint *)((longlong)param_1 + 0x18c) = *(uint *)((longlong)param_1 + 0x18c) | 0xe;
  *(undefined4 *)(param_1 + 0x32) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x443b8000;
  *(undefined4 *)(param_1 + 0x33) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x40) = 0x42480000;
  return param_1;
}



// FUNCTION 1426d5160 FUN_1426d5160 body=525 status=ok
// SIG undefined FUN_1426d5160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1426d5160(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *(undefined4 *)(param_1 + 7) = 0xc4750000;
  *param_1 = &PTR_FUN_14516e348;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x457a0000;
  *(undefined4 *)(param_1 + 8) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40000;
  *(undefined4 *)(param_1 + 9) = 4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40a00000;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  param_1[0xd] = 0x43c80000;
  *(undefined4 *)(param_1 + 0xe) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x42c80000;
  *(undefined4 *)(param_1 + 0xf) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x10) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x11) = 4;
  *(undefined1 *)((longlong)param_1 + 0xad) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x45610000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x41000000;
  *(undefined4 *)(param_1 + 0x15) = 0x1ff01;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3d088889;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3c888889;
  param_1[0x18] = 6;
  *(undefined4 *)(param_1 + 0x19) = 0x3f7d70a4;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3c888889;
  *(undefined4 *)(param_1 + 0x1a) = 10;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x1f] = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x20) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xec) = param_1[0x1f];
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = 2;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x22) = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x466a6000;
  *(undefined4 *)(param_1 + 0x23) = 0x3d088889;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3e2aaaab;
  *(undefined4 *)(param_1 + 0x24) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f733333;
  param_1[0x25] = 0x42dc0000;
  FName::FName(local_res8,L"Physics",1);
  param_1[6] = local_res8[0];
  return param_1;
}



// FUNCTION 1426d5370 FUN_1426d5370 body=118 status=ok
// SIG undefined FUN_1426d5370(void)

undefined8 * FUN_1426d5370(undefined8 *param_1)

{
  FUN_14237f6c0();
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *param_1 = &PTR_FUN_14516e5e0;
  param_1[5] = &PTR_LAB_14504f3d8;
  *(undefined1 *)(param_1 + 7) = 4;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(undefined4 *)(param_1 + 0x5a) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x40400000;
  *(undefined4 *)(param_1 + 0x5b) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x41200000;
  *(undefined2 *)(param_1 + 0x5c) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  return param_1;
}



// FUNCTION 1426d53f0 FUN_1426d53f0 body=69 status=ok
// SIG undefined FUN_1426d53f0(void)

undefined8 * FUN_1426d53f0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_14516eb38;
  param_1[5] = &PTR_LAB_1442116d8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x42c80000;
  return param_1;
}



// FUNCTION 1426d5440 UPlayer body=44 status=ok
// SIG undefined UPlayer(void)

undefined8 * UPlayer::UPlayer(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14516ca48;
  param_1[5] = &PTR_LAB_14516ccc8;
  return param_1;
}



// FUNCTION 1426d5470 FUN_1426d5470 body=272 status=ok
// SIG undefined FUN_1426d5470(void)

longlong * FUN_1426d5470(longlong *param_1)

{
  int iVar1;
  undefined1 local_res8 [32];
  
  FUN_14237f6c0();
  *param_1 = (longlong)&PTR__scalar_deleting_destructor__1451701e8;
  param_1[5] = (longlong)&PTR_LAB_145170748;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2fc) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x43480000;
  *(undefined1 *)((longlong)param_1 + 0x2d4) = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(undefined4 *)(param_1 + 0x5b) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x5c) = 0x41200000;
  iVar1 = UEngineTypes::ConvertToTraceType(2);
  if (iVar1 != 0x20) {
    local_res8[0] = (undefined1)iVar1;
    (**(code **)(*param_1 + 0x550))(param_1,local_res8);
  }
  iVar1 = UEngineTypes::ConvertToTraceType(5);
  if (iVar1 != 0x20) {
    local_res8[0] = (undefined1)iVar1;
    (**(code **)(*param_1 + 0x550))(param_1,local_res8);
  }
  iVar1 = UEngineTypes::ConvertToTraceType(6);
  if (iVar1 != 0x20) {
    local_res8[0] = (undefined1)iVar1;
    (**(code **)(*param_1 + 0x550))(param_1,local_res8);
  }
  iVar1 = UEngineTypes::ConvertToTraceType(7);
  if (iVar1 != 0x20) {
    local_res8[0] = (undefined1)iVar1;
    (**(code **)(*param_1 + 0x550))(param_1,local_res8);
  }
  FUN_1426f06b0(param_1);
  return param_1;
}



// FUNCTION 1426d5580 FUN_1426d5580 body=90 status=ok
// SIG undefined FUN_1426d5580(void)

undefined8 * FUN_1426d5580(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142327780(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__14516f858;
  param_1[5] = &PTR_LAB_1450491d8;
  param_1[0x5a] = &PTR_LAB_145049208;
  FUN_1426a8bf0(param_1 + 0x76,0,1);
  return param_1;
}



// FUNCTION 1426d55e0 FUN_1426d55e0 body=350 status=ok
// SIG undefined FUN_1426d55e0(void)

void FUN_1426d55e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14516c158;
  if (param_1[0x585] != 0) {
    FMemory::Free();
  }
  if (param_1[0x583] != 0) {
    FMemory::Free();
  }
  if (param_1[0x581] != 0) {
    FMemory::Free();
  }
  FUN_140e409f0(param_1 + 0x57f);
  if (param_1[0x574] != 0) {
    FMemory::Free();
  }
  if (param_1[0x56c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x56a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x565] != 0) {
    FMemory::Free();
  }
  if (param_1[0x563] != 0) {
    FMemory::Free();
  }
  if (param_1[0x499] != 0) {
    FMemory::Free();
  }
  if (param_1[0x497] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3c7] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3c5] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2f9] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2f7] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x161] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15f] != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1426d5740 FUN_1426d5740 body=265 status=ok
// SIG undefined FUN_1426d5740(void)

void FUN_1426d5740(ulonglong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [16];
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x358))
              (plVar1,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
               ,0x744);
  }
  plVar7 = (longlong *)0x0;
  plVar5 = (longlong *)*param_1;
  plVar8 = (longlong *)((longlong)(int)param_1[1] & 0x1fffffffffffffff);
  if (plVar5 + (int)param_1[1] < plVar5) {
    plVar8 = plVar7;
  }
  plVar4 = plVar7;
  if (plVar8 != (longlong *)0x0) {
    do {
      plVar2 = (longlong *)*plVar5;
      if (plVar2 != (longlong *)0x0) {
        plVar6 = plVar7;
        if ((short)plVar2[1] == 6) {
          plVar6 = plVar2;
        }
        if ((plVar6 != (longlong *)0x0) &&
           (pbVar3 = (byte *)(**(code **)(*plVar6 + 0x178))(plVar6,local_res8), (*pbVar3 & 1) == 0))
        {
          (**(code **)(*plVar6 + 0x240))(plVar6);
        }
      }
      plVar5 = plVar5 + 1;
      plVar4 = (longlong *)((longlong)plVar4 + 1);
    } while (plVar4 != plVar8);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))(plVar1);
  }
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1426d5850 FUN_1426d5850 body=764 status=ok
// SIG undefined FUN_1426d5850(void)

void FUN_1426d5850(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar6;
  
  uVar4 = FUN_14178e3a0();
  TBaseMulticastDelegate<void>::Remove(uVar4,*(undefined8 *)(param_1 + 0x4a8));
  FPhysScene::WaitPhysScenes(param_1);
  if (DAT_146b087b8 == (longlong *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  else {
    (**(code **)(*DAT_146b087b8 + 8))(DAT_146b087b8,*(undefined8 *)(param_1 + 0x58));
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      FUN_1426ee8b0(param_1,uVar6);
      FUN_1426bd6d0(DAT_146b08410,*(undefined8 *)(param_1 + 0x208 + uVar6 * 8));
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 4));
  }
  lVar11 = 3;
  plVar8 = (longlong *)(param_1 + 0xd0);
  lVar10 = 3;
  do {
    if (*plVar8 != 0) {
      FMemory::Free();
      *plVar8 = 0;
      *(undefined4 *)(plVar8 + 1) = 0;
    }
    plVar8 = plVar8 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  lVar7 = 3;
  lVar10 = param_1 + 0x510;
  do {
    plVar8 = (longlong *)(lVar10 + -0x10);
    lVar10 = lVar10 + -0x10;
    lVar7 = lVar7 + -1;
    if (*plVar8 != 0) {
      FMemory::Free();
    }
  } while (lVar7 != 0);
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x458);
  lVar7 = 3;
  lVar10 = param_1 + 0x458;
  do {
    lVar7 = lVar7 + -1;
    *(undefined4 *)(lVar10 + -8) = 0;
    if (*(longlong *)(lVar10 + -0x10) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar10 + -0x50);
    lVar10 = lVar10 + -0x50;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x360) = 0;
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x318);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  lVar10 = 3;
  plVar8 = (longlong *)(param_1 + 0x2e0);
  do {
    iVar9 = (int)plVar8[-1];
    plVar8 = plVar8 + -2;
    lVar7 = *plVar8;
    lVar10 = lVar10 + -1;
    if (iVar9 != 0) {
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
        lVar7 = lVar7 + 0x18;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      lVar7 = *plVar8;
    }
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  } while (lVar10 != 0);
  lVar7 = 3;
  lVar10 = param_1 + 0x2b0;
  do {
    lVar10 = lVar10 + -0x10;
    TArray<FCollisionNotifyInfo,FDefaultAllocator>::~TArray<FCollisionNotifyInfo,FDefaultAllocator>
              (lVar10);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar10 = 3;
  plVar8 = (longlong *)(param_1 + 0x240);
  do {
    lVar10 = lVar10 + -1;
    if (plVar8[-9] != 0) {
      FMemory::Free();
    }
    if (plVar8[-0xb] != 0) {
      FMemory::Free();
    }
    if (plVar8[-0xd] != 0) {
      FMemory::Free();
    }
    if (plVar8[-0xf] != 0) {
      FMemory::Free();
    }
    if (plVar8[-0x11] != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + -0xb;
  } while (lVar10 != 0);
  plVar8 = (longlong *)(param_1 + 200);
  if (*plVar8 != 0) {
    LOCK();
    piVar1 = (int *)(*plVar8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  lVar10 = 3;
  do {
    plVar2 = plVar8 + -1;
    plVar8 = plVar8 + -1;
    lVar10 = lVar10 + -1;
    if (*plVar2 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar2 + 0x48);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle();
      }
    }
  } while (lVar10 != 0);
  lVar10 = param_1 + 0xb0;
  do {
    plVar8 = (longlong *)(lVar10 + -8);
    lVar10 = lVar10 + -8;
    lVar11 = lVar11 + -1;
    if (*plVar8 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar8 + 0x48);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle();
      }
    }
  } while (lVar11 != 0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x20);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  return;
}



// FUNCTION 1426d5b50 FUN_1426d5b50 body=695 status=ok
// SIG undefined FUN_1426d5b50(void)

undefined8 * FUN_1426d5b50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(uint *)(param_1 + 1) =
       *(uint *)(param_1 + 1) ^ (*(uint *)(param_2 + 1) ^ *(uint *)(param_1 + 1)) & 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  param_1[0x14] = param_2[0x14];
  *(uint *)(param_1 + 0x15) =
       *(uint *)(param_1 + 0x15) ^ (*(uint *)(param_2 + 0x15) ^ *(uint *)(param_1 + 0x15)) & 1;
  *(ushort *)((longlong)param_1 + 0xac) =
       *(ushort *)((longlong)param_1 + 0xac) ^
       (*(ushort *)((longlong)param_1 + 0xac) ^ *(ushort *)((longlong)param_2 + 0xac)) & 1;
  *(ushort *)((longlong)param_1 + 0xac) =
       (*(ushort *)((longlong)param_1 + 0xac) ^ *(ushort *)((longlong)param_2 + 0xac)) & 2 ^
       *(ushort *)((longlong)param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined8 *)((longlong)param_1 + 0xd4) = *(undefined8 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_1[0x1e] = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  uVar1 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  uVar1 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar1;
  uVar1 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar1;
  uVar1 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar1;
  param_1[0x28] = param_2[0x28];
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
  param_1[0x2a] = param_2[0x2a];
  return param_1;
}



// FUNCTION 1426d5e10 FUN_1426d5e10 body=189 status=ok
// SIG undefined FUN_1426d5e10(void)

undefined8 * FUN_1426d5e10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(uint *)((longlong)param_1 + 0x34) =
       *(uint *)((longlong)param_1 + 0x34) ^
       (*(uint *)((longlong)param_1 + 0x34) ^ *(uint *)((longlong)param_2 + 0x34)) & 1;
  *(uint *)((longlong)param_1 + 0x34) =
       *(uint *)((longlong)param_1 + 0x34) ^
       (*(uint *)((longlong)param_2 + 0x34) ^ *(uint *)((longlong)param_1 + 0x34)) & 2;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_140a296b0(param_1 + 8,param_2 + 8);
  param_1[200] = param_2[200];
  *(uint *)(param_1 + 0xc9) =
       *(uint *)(param_1 + 0xc9) ^ (*(uint *)(param_2 + 0xc9) ^ *(uint *)(param_1 + 0xc9)) & 1;
  return param_1;
}



// FUNCTION 1426d5ed0 FUN_1426d5ed0 body=421 status=ok
// SIG undefined FUN_1426d5ed0(void)

longlong * FUN_1426d5ed0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined8 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
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
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) != 0) {
      plVar8 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
      }
      puVar9 = puVar5;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
          puVar4 = puVar5;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar4 = puVar3;
          }
          FUN_1421e3710(param_1,puVar4);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1421e3710(param_1,(longlong)(int)puVar5 * 0x10 + *param_2);
        uVar7 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1426d6080 FUN_1426d6080 body=3073 status=ok
// SIG undefined FUN_1426d6080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426d6080(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  float *pfVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined1 *puVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_4a80;
  undefined1 auStack_4a78 [56];
  float afStack_4a40 [2];
  undefined8 local_4a38;
  float local_4a30 [2];
  undefined8 auStack_4a28 [1527];
  undefined8 uStack_1a70;
  undefined1 auStack_1a68 [56];
  undefined1 auStack_1a30 [20];
  undefined4 auStack_1a1c [1519];
  undefined8 uStack_260;
  undefined1 auStack_258 [32];
  undefined4 auStack_238 [4];
  char local_228;
  undefined1 uStack_227;
  undefined1 auStack_226 [2];
  undefined2 local_224;
  undefined2 local_222;
  uint local_220 [2];
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float local_200 [12];
  int local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  uint local_1b8;
  undefined4 local_1b4;
  longlong local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110;
  undefined1 local_108 [32];
  undefined1 local_e8 [24];
  ulonglong local_d0 [21];
  
  local_d0[4] = DAT_1468387a8 ^ (ulonglong)&local_228;
  uStack_260 = 0x1426d6118;
  local_118 = param_2;
  (**(code **)(*param_2 + 0x358))(param_2,0,0);
  local_218 = 8.5070587e+37;
  fStack_214 = 8.5070587e+37;
  fStack_210 = 8.5070587e+37;
  fStack_20c = -8.5070587e+37;
  local_208 = -8.5070587e+37;
  fStack_204 = -8.5070587e+37;
  uStack_260 = 0x1426d613e;
  iVar9 = (**(code **)(*param_2 + 800))(param_2);
  puVar19 = auStack_258;
  if (iVar9 == 0) {
    local_224 = 3;
    uStack_260 = 0x1426d6160;
    uVar10 = (**(code **)(*param_2 + 0x90))(param_2,&local_224);
    uVar25 = (ulonglong)uVar10;
    puVar19 = auStack_258;
    local_220[0] = uVar10;
    local_1b8 = uVar10;
    if (uVar10 != 0) {
      uVar29 = (ulonglong)uVar10;
      uVar14 = uVar25 * 8 + 0x1e;
      if (uVar14 <= uVar25 * 8 + 0xf) {
        uVar14 = 0xffffffffffffff0;
      }
      uStack_260 = 0x1426d619d;
      lVar4 = -(uVar14 & 0xfffffffffffffff0);
      local_222 = 3;
      lVar18 = *param_2;
      *(undefined4 *)((longlong)auStack_238 + lVar4) = 0;
      plVar21 = (longlong *)((longlong)local_220 + lVar4);
      pcVar2 = *(code **)(lVar18 + 0x98);
      local_1c8 = plVar21;
      local_110 = plVar21;
      *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d61db;
      (*pcVar2)(param_2,&local_222,plVar21,uVar10);
      if (uVar10 != 0) {
        do {
          plVar16 = (longlong *)0x0;
          if ((short)((longlong *)*plVar21)[1] == 6) {
            plVar16 = (longlong *)*plVar21;
          }
          if (plVar16 != (longlong *)0x0) {
            pcVar2 = *(code **)(*plVar16 + 0x178);
            *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d6213;
            pbVar12 = (byte *)(*pcVar2)(plVar16,&uStack_227);
            if ((*pbVar12 & 1) != 0) {
              pcVar2 = *(code **)(*plVar16 + 0x1b8);
              *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d622b;
              cVar8 = (*pcVar2)(plVar16,local_108);
              if (cVar8 != '\0') {
                pcVar2 = *(code **)(*plVar16 + 0xa8);
                *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d6245;
                (*pcVar2)(plVar16,local_108,1);
              }
            }
          }
          bVar5 = true;
          if (*DAT_146b088c0 == 1) {
            plVar16 = (longlong *)*plVar21;
            bVar5 = false;
            pcVar2 = *(code **)(*plVar16 + 0x20);
            *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d626e;
            cVar8 = (*pcVar2)(plVar16,"PxRigidActor");
            plVar23 = (longlong *)0x0;
            if (cVar8 != '\0') {
              plVar23 = plVar16;
            }
            if (plVar23 != (longlong *)0x0) {
              uVar10 = 0;
              pcVar2 = *(code **)(*plVar23 + 200);
              *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d6289;
              iVar9 = (*pcVar2)(plVar23);
              if (iVar9 != 0) {
                do {
                  local_1c0 = (longlong *)0x0;
                  pcVar2 = *(code **)(*plVar23 + 0xd0);
                  *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d62b1;
                  iVar9 = (*pcVar2)(plVar23,&local_1c0,1,uVar10);
                  plVar16 = local_1c0;
                  if (iVar9 != 0) {
                    pcVar2 = *(code **)(*local_1c0 + 0x108);
                    *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d62c6;
                    pbVar12 = (byte *)(*pcVar2)(plVar16,auStack_226);
                    if ((*pbVar12 & 1) != 0) {
                      bVar5 = true;
                      break;
                    }
                  }
                  uVar10 = uVar10 + 1;
                  pcVar2 = *(code **)(*plVar23 + 200);
                  *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d62d9;
                  uVar11 = (*pcVar2)(plVar23);
                } while (uVar10 < uVar11);
              }
            }
          }
          fVar32 = fStack_204;
          if (bVar5) {
            plVar16 = (longlong *)*plVar21;
            pcVar2 = *(code **)(*plVar16 + 0x48);
            *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d62fa;
            pfVar13 = (float *)(*pcVar2)(plVar16,local_e8,0x3f8147ae);
            if (*pfVar13 <= local_218) {
              local_218 = *pfVar13;
            }
            fVar32 = pfVar13[1];
            if (fStack_214 <= pfVar13[1]) {
              fVar32 = fStack_214;
            }
            fVar30 = pfVar13[2];
            if (fStack_210 <= pfVar13[2]) {
              fVar30 = fStack_210;
            }
            if (fStack_20c <= pfVar13[3]) {
              fStack_20c = pfVar13[3];
            }
            fVar33 = pfVar13[4];
            if (pfVar13[4] <= local_208) {
              fVar33 = local_208;
            }
            fStack_214 = fVar32;
            fStack_210 = fVar30;
            local_208 = fVar33;
            fVar32 = pfVar13[5];
            if (pfVar13[5] <= fStack_204) {
              fVar32 = fStack_204;
            }
          }
          fStack_204 = fVar32;
          plVar21 = plVar21 + 1;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        uVar25 = (ulonglong)local_220[0];
        plVar21 = local_1c8;
      }
      *(undefined8 *)(auStack_258 + lVar4 + -8) = 0x1426d6373;
      *(undefined8 *)((longlong)&uStack_1a70 + lVar4) = 0x1426d6399;
      uVar10 = physx::PxBroadPhaseExt::createRegionsFromWorldBounds
                         (auStack_1a30 + lVar4,&local_218,0x10);
      if (uVar10 != 0) {
        puVar17 = (undefined4 *)((longlong)auStack_1a1c + lVar4);
        uVar14 = (ulonglong)uVar10;
        do {
          local_178 = *(undefined8 *)(puVar17 + -5);
          uStack_170 = *(undefined8 *)(puVar17 + -3);
          local_160 = 0;
          local_164 = *puVar17;
          local_168 = puVar17[-1];
          pcVar2 = *(code **)(*param_2 + 0x330);
          *(undefined8 *)((longlong)&uStack_1a70 + lVar4) = 0x1426d63f2;
          (*pcVar2)(param_2,&local_178,0);
          puVar17 = puVar17 + 6;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      lVar18 = *param_1;
      pcVar2 = *(code **)(*param_2 + 0x70);
      *(undefined8 *)((longlong)&uStack_1a70 + lVar4) = 0x1426d641c;
      local_1b0 = lVar18;
      (*pcVar2)(param_2,plVar21,uVar25,0);
      pcVar2 = *(code **)(*param_2 + 0x60);
      *(undefined8 *)((longlong)&uStack_1a70 + lVar4) = 0x1426d642c;
      (*pcVar2)(param_2,plVar21,uVar25);
      pcVar2 = *(code **)(*param_2 + 0x360);
      *(undefined8 *)((longlong)&uStack_1a70 + lVar4) = 0x1426d6439;
      (*pcVar2)(param_2);
      uVar3 = *(undefined8 *)(lVar18 + 0x50);
      *(undefined8 *)((longlong)&uStack_1a70 + lVar4) = 0x1426d6445;
      FUN_1426deee0(lVar18,uVar3);
      pcVar2 = *(code **)(*param_2 + 0x358);
      *(undefined8 *)((longlong)&uStack_1a70 + lVar4) = 0x1426d6457;
      (*pcVar2)(param_2,0,0);
      puVar19 = auStack_1a68 + lVar4;
      if (*DAT_146b088a8 == 1) {
        *(undefined8 *)((longlong)&uStack_1a70 + lVar4) = 0x1426d6471;
        local_228 = '\0';
        fVar32 = *DAT_146b088f0;
        lVar18 = (longlong)afStack_4a40 + lVar4;
        fVar30 = *DAT_146b08908;
        local_1d0 = 0;
        do {
          local_1d0 = local_1d0 + 1;
          pcVar2 = *(code **)(*param_2 + 0x328);
          *(undefined8 *)((longlong)&uStack_4a80 + lVar4) = 0x1426d64de;
          (*pcVar2)(param_2,lVar18,0x100,0);
          local_d0[0] = 0;
          local_d0[1] = 0;
          local_d0[2] = 0;
          local_d0[3] = 0;
LAB_1426d6500:
          uVar25 = 0;
          uVar14 = 0xffffffff;
          pfVar13 = (float *)((longlong)local_4a30 + lVar4);
          uVar28 = 0xffffffff;
          uVar10 = 0xffffffff;
          bVar5 = false;
          uVar26 = 1;
          uVar29 = uVar25;
          uVar11 = uVar10;
          do {
            if ((*(char *)(pfVar13 + 6) != '\0') && ((local_d0[uVar29 >> 6] & uVar26) == 0)) {
              if (*(char *)((longlong)pfVar13 + 0x19) != '\0') {
                local_1b4 = 5;
              }
              fVar33 = pfVar13[-1] - pfVar13[-4];
              fVar34 = *pfVar13 - pfVar13[-3];
              if (fVar32 <= fVar33 * fVar34) {
                fVar31 = fVar34 / fVar33;
                if (fVar34 / fVar33 <= fVar33 / fVar34) {
                  fVar31 = fVar33 / fVar34;
                }
                if (fVar31 <= fVar30) {
                  uVar15 = (int)pfVar13[5] + (int)pfVar13[4];
                  if ((uVar15 != 0) || (bVar5)) {
                    uVar6 = (uint)uVar29;
                    uVar7 = (ulonglong)uVar15;
                    if (uVar15 <= (uint)uVar25) {
                      uVar6 = uVar11;
                      uVar7 = uVar25;
                    }
                    uVar25 = uVar7;
                    uVar11 = uVar6;
                    if (uVar15 < uVar10) {
                      uVar14 = uVar29;
                      uVar10 = uVar15;
                    }
                  }
                  else {
                    *(undefined1 *)(pfVar13 + 6) = 0;
                    bVar5 = true;
                    uVar28 = uVar29;
                  }
                }
              }
            }
            iVar9 = (int)uVar28;
            uVar15 = (uint)uVar29 + 1;
            uVar29 = (ulonglong)uVar15;
            uVar26 = uVar26 << 1 | (ulonglong)((longlong)uVar26 < 0);
            pfVar13 = pfVar13 + 0xc;
          } while (uVar15 < 0x100);
          uVar10 = (uint)uVar14;
          if (uVar10 == uVar11) {
            uVar14 = 0xffffffff;
            uVar11 = 0xffffffff;
          }
          else if (((uVar11 != 0xffffffff) && (uVar10 != 0xffffffff)) && (!bVar5)) {
            pfVar13 = (float *)((longlong)afStack_4a40 + lVar4 + 4);
            uVar15 = 0xffffffff;
            uVar25 = 2;
            do {
              uVar6 = (uint)uVar25;
              if ((((uVar6 - 2 != uVar10) && (uVar6 - 2 != uVar11)) &&
                  (((ABS(*(float *)(lVar18 + uVar14 * 0x30) - pfVar13[-1]) < 1e-08 &&
                    (ABS(*(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4 + -4) - pfVar13[2])
                     < 1e-08)) ||
                   ((ABS(*(float *)((longlong)afStack_4a40 + uVar14 * 0x30 + lVar4 + 4) - *pfVar13)
                     < 1e-08 &&
                    (ABS(*(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4) - pfVar13[3]) <
                     1e-08)))))) && ((uint)((int)pfVar13[8] + (int)pfVar13[7]) < uVar15)) {
                uVar28 = (ulonglong)(uVar6 - 2);
                uVar15 = (int)pfVar13[8] + (int)pfVar13[7];
              }
              if ((((uVar6 - 1 != uVar10) && (uVar6 - 1 != uVar11)) &&
                  (((ABS(*(float *)(lVar18 + uVar14 * 0x30) - pfVar13[0xb]) < 1e-08 &&
                    (ABS(*(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4 + -4) -
                         pfVar13[0xe]) < 1e-08)) ||
                   ((ABS(*(float *)((longlong)afStack_4a40 + uVar14 * 0x30 + lVar4 + 4) -
                         pfVar13[0xc]) < 1e-08 &&
                    (ABS(*(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4) - pfVar13[0xf]) <
                     1e-08)))))) && ((uint)((int)pfVar13[0x14] + (int)pfVar13[0x13]) < uVar15)) {
                uVar28 = (ulonglong)(uVar6 - 1);
                uVar15 = (int)pfVar13[0x14] + (int)pfVar13[0x13];
              }
              if ((((uVar6 != uVar10) && (uVar6 != uVar11)) &&
                  (((ABS(*(float *)(lVar18 + uVar14 * 0x30) - pfVar13[0x17]) < 1e-08 &&
                    (ABS(*(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4 + -4) -
                         pfVar13[0x1a]) < 1e-08)) ||
                   ((ABS(*(float *)((longlong)afStack_4a40 + uVar14 * 0x30 + lVar4 + 4) -
                         pfVar13[0x18]) < 1e-08 &&
                    (ABS(*(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4) - pfVar13[0x1b]) <
                     1e-08)))))) && ((uint)((int)pfVar13[0x20] + (int)pfVar13[0x1f]) < uVar15)) {
                uVar28 = uVar25;
                uVar15 = (int)pfVar13[0x20] + (int)pfVar13[0x1f];
              }
              uVar27 = uVar6 + 1;
              if ((((uVar27 != uVar10) && (uVar27 != uVar11)) &&
                  (((ABS(*(float *)(lVar18 + uVar14 * 0x30) - pfVar13[0x23]) < 1e-08 &&
                    (ABS(*(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4 + -4) -
                         pfVar13[0x26]) < 1e-08)) ||
                   ((ABS(*(float *)((longlong)afStack_4a40 + uVar14 * 0x30 + lVar4 + 4) -
                         pfVar13[0x24]) < 1e-08 &&
                    (ABS(*(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4) - pfVar13[0x27]) <
                     1e-08)))))) && ((uint)((int)pfVar13[0x2c] + (int)pfVar13[0x2b]) < uVar15)) {
                uVar28 = (ulonglong)uVar27;
                uVar15 = (int)pfVar13[0x2c] + (int)pfVar13[0x2b];
              }
              iVar9 = (int)uVar28;
              uVar25 = (ulonglong)(uVar6 + 4);
              pfVar13 = pfVar13 + 0x30;
            } while (uVar6 + 2 < 0x100);
          }
          iVar20 = (int)uVar14;
          if (iVar9 == -1) {
            if (uVar11 != 0xffffffff) {
              if (iVar20 == -1) goto LAB_1426d687a;
              local_d0[uVar11 >> 6] = local_d0[uVar11 >> 6] | 1L << (uVar11 & 0x3f);
            }
LAB_1426d6844:
            if (iVar20 == -1) goto LAB_1426d687a;
            uVar25 = 0;
            while ((local_d0[uVar25 >> 6] >> ((uint)uVar25 & 0x3f) & 1) != 0) {
              uVar10 = (uint)uVar25 + 1;
              uVar25 = (ulonglong)uVar10;
              if (0xff < (int)uVar10) goto LAB_1426d687a;
            }
            goto LAB_1426d6500;
          }
          if (iVar9 == -1) goto LAB_1426d6844;
          if ((uVar11 != 0xffffffff) && (iVar20 != -1)) {
            if (!bVar5) {
              pfVar13 = (float *)((longlong)iVar9 * 0x30 + lVar18);
              local_188 = *(float *)((longlong)&local_4a38 + uVar14 * 0x30 + lVar4);
              local_18c = *(float *)((longlong)afStack_4a40 + uVar14 * 0x30 + lVar4 + 4);
              local_1a4 = pfVar13[1];
              local_1a0 = pfVar13[2];
              if (local_1a4 <= local_18c) {
                local_18c = local_1a4;
              }
              local_1a8 = *pfVar13;
              if (local_1a0 <= local_188) {
                local_188 = local_1a0;
              }
              local_19c = pfVar13[3];
              local_198 = pfVar13[4];
              local_194 = pfVar13[5];
              local_17c = *(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4 + 4);
              if (local_17c <= local_194) {
                local_17c = local_194;
              }
              local_180 = *(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4);
              if (local_180 <= local_198) {
                local_180 = local_198;
              }
              local_184 = *(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4 + -4);
              if (local_184 <= local_19c) {
                local_184 = local_19c;
              }
              fVar33 = *(float *)(lVar18 + uVar14 * 0x30);
              local_190 = local_1a8;
              if (fVar33 <= local_1a8) {
                local_190 = fVar33;
              }
              *(float *)((longlong)afStack_4a40 + uVar14 * 0x30 + lVar4 + 4) = local_18c;
              *(float *)((longlong)&local_4a38 + uVar14 * 0x30 + lVar4) = local_188;
              *(float *)(lVar18 + uVar14 * 0x30) = local_190;
              *(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4 + -4) = local_184;
              *(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4) = local_180;
              *(float *)((longlong)local_4a30 + uVar14 * 0x30 + lVar4 + 4) = local_17c;
              local_140 = 0;
              *(undefined8 *)((longlong)auStack_4a28 + uVar14 * 0x30 + lVar4) = 0;
              local_158 = local_190;
              local_154 = local_18c;
              local_150 = local_188;
              local_14c = local_184;
              local_148 = local_180;
              local_144 = local_17c;
            }
            uVar25 = (ulonglong)uVar11;
            local_120 = 0;
            local_12c = *(float *)((longlong)local_4a30 + uVar25 * 0x30 + lVar4 + -4);
            local_128 = *(float *)((longlong)local_4a30 + uVar25 * 0x30 + lVar4);
            local_200[0] = *(float *)(lVar18 + uVar25 * 0x30);
            local_200[1] = *(float *)((longlong)afStack_4a40 + uVar25 * 0x30 + lVar4 + 4);
            local_200[2] = *(float *)((longlong)&local_4a38 + uVar25 * 0x30 + lVar4);
            local_200[5] = *(float *)((longlong)local_4a30 + uVar25 * 0x30 + lVar4 + 4);
            local_200[3] = local_12c;
            local_200[4] = local_128;
            local_200[9] = local_12c;
            local_200[10] = local_128;
            local_200[6] = local_200[0];
            local_200[7] = local_200[1];
            *(undefined8 *)((longlong)auStack_4a28 + uVar25 * 0x30 + lVar4) = 0;
            lVar24 = 4;
            if ((local_128 - local_200[1]) * 0.5 < (local_12c - local_200[0]) * 0.5) {
              lVar24 = 0;
            }
            fVar33 = *(float *)((longlong)local_200 + lVar24 + 0xc);
            fVar34 = *(float *)((longlong)local_200 + lVar24 + 0x18);
            *(float *)((longlong)local_200 + lVar24 + 0xc) =
                 fVar33 - (fVar33 - *(float *)((longlong)local_200 + lVar24)) * 0.5;
            fVar33 = *(float *)((longlong)local_200 + lVar24 + 0x24);
            puVar1 = (undefined8 *)(lVar18 + uVar25 * 0x30);
            *puVar1 = CONCAT44(local_200[1],local_200[0]);
            puVar1[1] = CONCAT44(local_200[3],local_200[2]);
            *(float *)((longlong)local_200 + lVar24 + 0x18) = (fVar33 - fVar34) * 0.5 + fVar34;
            local_138 = local_200[6];
            local_134 = local_200[7];
            *(float *)((longlong)local_4a30 + uVar25 * 0x30 + lVar4) = local_200[4];
            *(float *)((longlong)local_4a30 + uVar25 * 0x30 + lVar4 + 4) = local_200[5];
            pfVar13 = (float *)((longlong)iVar9 * 0x30 + lVar18);
            *pfVar13 = local_200[6];
            pfVar13[1] = local_200[7];
            pfVar13[2] = local_200[2];
            pfVar13[3] = local_12c;
            pfVar13[4] = local_128;
            pfVar13[5] = local_200[5];
            pfVar13[6] = 0.0;
            pfVar13[7] = 0.0;
            local_200[8] = local_200[2];
            local_200[0xb] = local_200[5];
            local_130 = local_200[2];
            local_124 = local_200[5];
            goto LAB_1426d6881;
          }
LAB_1426d687a:
          local_228 = '\x01';
LAB_1426d6881:
          cVar8 = local_228;
          uVar10 = 0xff;
          do {
            pcVar2 = *(code **)(*param_2 + 0x338);
            *(undefined8 *)((longlong)&uStack_4a80 + lVar4) = 0x1426d689f;
            (*pcVar2)(param_2,uVar10);
            uVar10 = uVar10 - 1;
          } while (uVar10 < 0x100);
          lVar22 = 0x100;
          lVar24 = lVar18;
          do {
            pcVar2 = *(code **)(*param_2 + 0x330);
            *(undefined8 *)((longlong)&uStack_4a80 + lVar4) = 0x1426d68c4;
            (*pcVar2)(param_2,lVar24,0);
            lVar24 = lVar24 + 0x30;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          pcVar2 = *(code **)(*param_2 + 0x70);
          *(undefined8 *)((longlong)&uStack_4a80 + lVar4) = 0x1426d68e3;
          (*pcVar2)(param_2,local_1c8,local_220[0]);
          pcVar2 = *(code **)(*param_2 + 0x60);
          *(undefined8 *)((longlong)&uStack_4a80 + lVar4) = 0x1426d68f5;
          (*pcVar2)(param_2,local_1c8,local_220[0]);
          pcVar2 = *(code **)(*param_2 + 0x360);
          *(undefined8 *)((longlong)&uStack_4a80 + lVar4) = 0x1426d6902;
          (*pcVar2)(param_2);
          uVar3 = *(undefined8 *)(local_1b0 + 0x50);
          *(undefined8 *)((longlong)&uStack_4a80 + lVar4) = 0x1426d6912;
          FUN_1426deee0(local_1b0,uVar3);
          pcVar2 = *(code **)(*param_2 + 0x358);
          *(undefined8 *)((longlong)&uStack_4a80 + lVar4) = 0x1426d6924;
          (*pcVar2)(param_2,0,0);
          puVar19 = auStack_4a78 + lVar4;
        } while ((cVar8 == '\0') && (puVar19 = auStack_4a78 + lVar4, local_1d0 < *DAT_146b088d8));
      }
    }
  }
  pcVar2 = *(code **)(*param_2 + 0x360);
  *(undefined8 *)(puVar19 + -8) = 0x1426d6948;
  (*pcVar2)(param_2);
  *(undefined8 *)(puVar19 + -8) = 0x1426d6957;
  return;
}



// FUNCTION 1426d6c90 FUN_1426d6c90 body=1401 status=ok
// SIG undefined FUN_1426d6c90(void)

void FUN_1426d6c90(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 (*pauVar6) [12];
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0 [136];
  
  plVar20 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  pauVar6 = (undefined1 (*) [12])*param_1;
  fVar28 = *(float *)*pauVar6;
  fVar29 = *(float *)(*pauVar6 + 4);
  fVar30 = *(float *)(*pauVar6 + 8);
  auVar10 = *pauVar6;
  puVar21 = (undefined8 *)FRotator::Quaternion(param_1[1],&local_138);
  uVar2 = *(undefined4 *)puVar21;
  uVar3 = *(undefined4 *)((longlong)puVar21 + 4);
  uVar4 = *(undefined4 *)(puVar21 + 1);
  uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
  uVar17 = *puVar21;
  uVar18 = puVar21[1];
  uVar15 = *puVar21;
  uVar16 = puVar21[1];
  uVar23 = *puVar21;
  uVar14 = puVar21[1];
  (**(code **)(*param_2 + 0xa0))(param_2,&local_f8);
  uVar13 = DAT_1464aa790;
  uVar12 = DAT_1464aa788._4_4_;
  uVar11 = (undefined4)DAT_1464aa788;
  lVar27 = param_1[2];
  auVar9._12_4_ = 0;
  auVar9._0_12_ = auVar10;
  *(undefined1 (*) [16])(lVar27 + 0x1e0) = auVar9;
  *(undefined8 *)(lVar27 + 0x1d0) = uVar23;
  *(undefined8 *)(lVar27 + 0x1d8) = uVar14;
  auVar8._4_4_ = uVar12;
  auVar8._0_4_ = uVar11;
  auVar8._8_4_ = uVar13;
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(lVar27 + 0x1f0) = auVar8;
  lVar26 = param_1[2];
  *(undefined8 *)(lVar26 + 0x1a0) = uVar17;
  *(undefined8 *)(lVar26 + 0x1a8) = uVar18;
  uVar11 = *(undefined4 *)(lVar27 + 0x1e4);
  uVar12 = *(undefined4 *)(lVar27 + 0x1e8);
  uVar13 = *(undefined4 *)(lVar27 + 0x1ec);
  *(undefined4 *)(lVar26 + 0x1b0) = *(undefined4 *)(lVar27 + 0x1e0);
  *(undefined4 *)(lVar26 + 0x1b4) = uVar11;
  *(undefined4 *)(lVar26 + 0x1b8) = uVar12;
  *(undefined4 *)(lVar26 + 0x1bc) = uVar13;
  uVar11 = *(undefined4 *)(lVar27 + 500);
  uVar12 = *(undefined4 *)(lVar27 + 0x1f8);
  uVar13 = *(undefined4 *)(lVar27 + 0x1fc);
  *(undefined4 *)(lVar26 + 0x1c0) = *(undefined4 *)(lVar27 + 0x1f0);
  *(undefined4 *)(lVar26 + 0x1c4) = uVar11;
  *(undefined4 *)(lVar26 + 0x1c8) = uVar12;
  *(undefined4 *)(lVar26 + 0x1cc) = uVar13;
  if (*(longlong *)(param_1[2] + 0x208) == 0) {
    local_138 = uVar15;
    uStack_130 = uVar16;
    local_118 = uVar2;
    local_114 = uVar3;
    local_110 = uVar4;
    local_10c = uVar5;
    local_108 = fVar28;
    local_104 = fVar29;
    local_100 = fVar30;
    plVar22 = (longlong *)(**(code **)(*plVar20 + 0x30))(plVar20);
    plVar22 = (longlong *)(**(code **)(*plVar22 + 0xb0))(plVar22,&local_118);
    (**(code **)(*plVar22 + 0x168))(plVar22,1,1);
    (**(code **)(*plVar22 + 0xf8))(plVar22,0x3f800000);
    local_138 = 0x3f8000003f800000;
    uStack_130 = CONCAT44(uStack_130._4_4_,0x3f800000);
    (**(code **)(*plVar22 + 0x110))(plVar22,&local_138);
    lVar27 = 0;
    plVar22[2] = 0;
    (**(code **)(*plVar20 + 0x50))(plVar20,plVar22);
    *(longlong **)(param_1[2] + 0x210) = plVar22;
    fVar34 = -local_f0;
    fVar35 = -local_f8;
    fVar33 = -local_f4;
    fVar31 = (local_108 - local_e8) + (local_108 - local_e8);
    fVar30 = (local_104 - local_e4) + (local_104 - local_e4);
    local_138 = CONCAT44(fVar33,fVar35);
    fVar29 = local_ec * local_ec - 0.5;
    fVar32 = (local_100 - local_e0) + (local_100 - local_e0);
    uStack_130 = CONCAT44(local_ec,fVar34);
    fVar28 = fVar33 * fVar30 + fVar35 * fVar31 + fVar34 * fVar32;
    puVar21 = (undefined8 *)physx::PxQuat::operator*(&local_138,local_a0,&local_118);
    local_138 = *puVar21;
    uStack_130 = puVar21[1];
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0x3f800000;
    local_c8 = 0;
    local_c0 = 0;
    local_128 = (fVar33 * fVar32 - fVar34 * fVar30) * local_ec + fVar29 * fVar31 + fVar28 * fVar35;
    local_124 = (fVar34 * fVar31 - fVar35 * fVar32) * local_ec + fVar29 * fVar30 + fVar28 * fVar33;
    local_120 = (fVar35 * fVar30 - fVar33 * fVar31) * local_ec + fVar29 * fVar32 + fVar28 * fVar34;
    uVar23 = (**(code **)(*plVar20 + 0x30))(plVar20);
    plVar22 = (longlong *)physx::PxD6JointCreate(uVar23,plVar22,&local_d8,param_2,&local_138);
    if (plVar22 == (longlong *)0x0) {
      *(undefined8 *)(param_1[2] + 0x208) = 0;
    }
    else {
      plVar22[2] = 0;
      *(longlong **)(param_1[2] + 0x208) = plVar22;
      piVar7 = (int *)plVar20[1];
      lVar26 = lVar27;
      if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
        lVar26 = *(longlong *)(piVar7 + 2);
      }
      cVar19 = FBodyInstance::UseAsyncScene(*(longlong *)param_1[3] + 0x3b0,lVar26);
      lVar24 = 0x60;
      if (cVar19 != '\0') {
        lVar24 = 100;
      }
      *(int *)(param_1[2] + 0x188) = (int)*(short *)(lVar24 + lVar26);
      uVar25 = *(uint *)(param_1[2] + 0x18c) >> 1 & 2;
      if (((*(uint *)(param_1[2] + 0x18c) & 2) != 0) || (*(char *)param_1[4] == '\0')) {
        lVar27 = 2;
      }
      (**(code **)(*plVar22 + 0xe8))(plVar22,0,uVar25);
      (**(code **)(*plVar22 + 0xe8))(plVar22,1,uVar25);
      (**(code **)(*plVar22 + 0xe8))(plVar22,2,uVar25);
      local_bc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0x3f800000;
      local_ac = 0;
      local_a4 = 0;
      (**(code **)(*plVar22 + 0x150))(plVar22,&local_bc);
      (**(code **)(*plVar22 + 0xe8))(plVar22,3,lVar27);
      (**(code **)(*plVar22 + 0xe8))(plVar22,4,lVar27);
      (**(code **)(*plVar22 + 0xe8))(plVar22,5,lVar27);
      puVar1 = (uint *)(param_1[2] + 0x18c);
      *puVar1 = *puVar1 ^ ((uint)*(byte *)param_1[4] ^ *(uint *)(param_1[2] + 0x18c)) & 1;
      (**(code **)(*(longlong *)param_1[2] + 0x408))();
    }
  }
  return;
}



// FUNCTION 1426d7210 FUN_1426d7210 body=256 status=ok
// SIG undefined FUN_1426d7210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1426d7210(undefined8 param_1,longlong *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  longlong *plStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (iVar1 == 5) {
    local_28 = 0;
    local_20 = (longlong *)0x0;
    uStack_2c = 0x3f800000;
    local_48 = 5;
    local_44 = 0x3f800000;
    plStack_40 = (longlong *)0x3f8000003f800000;
    uStack_38 = 0;
    local_34 = 0;
    uStack_30 = 0;
    (**(code **)(*param_2 + 0x70))(param_2,&local_48);
    uVar3 = (**(code **)(*local_20 + 0x48))();
    bVar4 = uVar3 < *param_3;
    bVar5 = uVar3 == *param_3;
  }
  else {
    if (iVar1 != 6) {
      return 0;
    }
    local_48 = 6;
    plStack_40 = (longlong *)0x0;
    uStack_38 = 0x3f800000;
    local_34 = 0x3f800000;
    uStack_30 = 0x3f800000;
    uStack_2c = 0;
    (**(code **)(*param_2 + 0x78))(param_2,&local_48);
    iVar1 = (**(code **)(*plStack_40 + 0x40))();
    iVar2 = (**(code **)(*plStack_40 + 0x38))();
    bVar4 = (uint)(iVar1 * iVar2) < *param_3 >> 1;
    bVar5 = iVar1 * iVar2 == *param_3 >> 1;
  }
  if (!bVar4 && !bVar5) {
    return 0;
  }
  return 1;
}



// FUNCTION 1426d7340 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FPhysXCPUDispatcher::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451701b8;
  TlsFree(*(DWORD *)(param_1 + 1));
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1426d7390 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FPhysXCPUDispatcher::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451701d0;
  TlsFree(*(DWORD *)(param_1 + 1));
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1426d73e0 FUN_1426d73e0 body=72 status=ok
// SIG undefined FUN_1426d73e0(void)

undefined8 * FUN_1426d73e0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1426d7430 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<FPhysXTask>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145170f90;
  if (param_1[0x16] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x16] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1426d74a0 FUN_1426d74a0 body=384 status=ok
// SIG undefined FUN_1426d74a0(void)

undefined8 * FUN_1426d74a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14516c158;
  if (param_1[0x585] != 0) {
    FMemory::Free();
  }
  if (param_1[0x583] != 0) {
    FMemory::Free();
  }
  if (param_1[0x581] != 0) {
    FMemory::Free();
  }
  FUN_140e409f0(param_1 + 0x57f);
  if (param_1[0x574] != 0) {
    FMemory::Free();
  }
  if (param_1[0x56c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x56a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x565] != 0) {
    FMemory::Free();
  }
  if (param_1[0x563] != 0) {
    FMemory::Free();
  }
  if (param_1[0x499] != 0) {
    FMemory::Free();
  }
  if (param_1[0x497] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3c7] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3c5] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2f9] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2f7] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x161] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15f] != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c70);
  }
  return param_1;
}



// FUNCTION 1426d7620 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAkAudioInputComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 1426d7670 FUN_1426d7670 body=43 status=ok
// SIG undefined FUN_1426d7670(void)

undefined8 * FUN_1426d7670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1426d76a0 FUN_1426d76a0 body=43 status=ok
// SIG undefined FUN_1426d76a0(void)

undefined8 * FUN_1426d76a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14410aec8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1426d76d0 FUN_1426d76d0 body=43 status=ok
// SIG undefined FUN_1426d76d0(void)

undefined8 * FUN_1426d76d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1426d7700 FUN_1426d7700 body=43 status=ok
// SIG undefined FUN_1426d7700(void)

undefined8 * FUN_1426d7700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144147258;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1426d7730 FUN_1426d7730 body=134 status=ok
// SIG undefined FUN_1426d7730(void)

undefined8 * FUN_1426d7730(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14516e338;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1426d77c0 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
PhysXCompletionTask::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
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
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14516cce8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1426d7820 FUN_1426d7820 body=43 status=ok
// SIG undefined FUN_1426d7820(void)

undefined8 * FUN_1426d7820(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14516cce8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1426d7850 `scalar_deleting_destructor' body=51 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
physx::PxLightCpuTask::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14516cce8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1426d7890 FUN_1426d7890 body=85 status=ok
// SIG undefined FUN_1426d7890(void)

longlong FUN_1426d7890(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c0);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d0);
  }
  return param_1;
}



// FUNCTION 1426d78f0 `scalar_deleting_destructor' body=85 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPhysicsConstraintTemplate::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1d0);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f8);
  }
  return param_1;
}



// FUNCTION 1426d7950 FUN_1426d7950 body=73 status=ok
// SIG undefined FUN_1426d7950(void)

longlong FUN_1426d7950(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 1426d79a0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPlayer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FExec::~FExec(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1426d79e0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGameViewportClientGunfire::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 1426d7a50 FUN_1426d7a50 body=45 status=ok
// SIG undefined FUN_1426d7a50(void)

void FUN_1426d7a50(longlong *param_1)

{
  FUN_14232c410();
                    /* WARNING: Could not recover jumptable at 0x0001426d7a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,*(byte *)((longlong)param_1 + 0xba) >> 2 & 1);
  return;
}



// FUNCTION 1426d7a80 Add body=19 status=ok
// SIG undefined Add(void)

void FPhysxSharedData::Add(undefined8 *param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001426d7a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_2,param_2);
    return;
  }
  return;
}



// FUNCTION 1426d7aa0 FUN_1426d7aa0 body=171 status=ok
// SIG undefined FUN_1426d7aa0(void)

void FUN_1426d7aa0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c00);
  *(int *)(param_1 + 0x2c00) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2c04) < iVar1 + 1) {
    FUN_140e5a9b0(param_1 + 0x2bf8,iVar1);
  }
  FUN_140a25aa0((longlong)iVar1 * 0x600 + *(longlong *)(param_1 + 0x2bf8),param_2);
  iVar1 = *(int *)(param_1 + 0x2c10);
  *(int *)(param_1 + 0x2c10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2c14) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x2c08,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2c08) + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 1426d7b50 FUN_1426d7b50 body=665 status=ok
// SIG undefined FUN_1426d7b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1426d7b50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_728 [32];
  undefined4 local_708;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined8 local_6e8;
  undefined4 local_6e0;
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  longlong local_6c0;
  undefined1 local_6b0;
  uint local_6ac;
  undefined1 local_6a8 [48];
  undefined8 local_678;
  undefined4 local_670;
  undefined8 local_66c;
  undefined4 local_664;
  longlong local_60;
  longlong local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_728;
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_14292bbb0();
    plVar4 = param_2;
    do {
      if (plVar4 == plVar2) {
        plVar2 = (longlong *)FUN_14292bbb0();
        plVar4 = param_2;
        goto LAB_1426d7bc3;
      }
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  return (longlong *)0x0;
  while (plVar4 = (longlong *)plVar4[6], plVar7 = plVar6, plVar4 != (longlong *)0x0) {
LAB_1426d7bc3:
    plVar6 = (longlong *)0x0;
    plVar7 = param_2;
    if (plVar4 == plVar2) break;
  }
  lVar3 = plVar7[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar3 = plVar7[0x1f];
  }
  if (((*(byte *)(lVar3 + 0x4f4) & 1) == 0) &&
     (plVar4 = (longlong *)(**(code **)(*param_1 + 0x808))(param_1,param_2),
     plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x708))(plVar4);
  }
  else {
    FActorSpawnParameters::FActorSpawnParameters(local_6d8);
    local_6c8 = (**(code **)(*(longlong *)param_1[0x8b] + 0x758))();
    local_6ac = local_6ac | 0x40;
    local_6c0 = param_1[0x2a];
    local_6b0 = 1;
    plVar2 = (longlong *)FUN_14292bbb0();
    plVar4 = param_2;
    do {
      plVar7 = param_2;
      if (plVar4 == plVar2) break;
      plVar4 = (longlong *)plVar4[6];
      plVar7 = plVar6;
    } while (plVar4 != (longlong *)0x0);
    lVar3 = plVar7[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar3 = plVar7[0x1f];
    }
    (**(code **)(*param_1 + 0x720))(param_1,&local_678);
    local_6e8 = local_678;
    local_6e0 = local_670;
    local_6f8 = local_66c;
    local_6f0 = local_664;
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    local_708 = (**(code **)(*param_1 + 0x778))(param_1);
    FUN_142605960(local_6a8,lVar3,&local_6e8,&local_6f8);
    plVar2 = (longlong *)FUN_14292bbb0();
    plVar4 = param_2;
    do {
      plVar7 = param_2;
      if (plVar4 == plVar2) break;
      plVar4 = (longlong *)plVar4[6];
      plVar7 = plVar6;
    } while (plVar4 != (longlong *)0x0);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar4 = (longlong *)FUN_142550d00(uVar5,plVar7,local_6a8,local_6d8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x700))(plVar4,param_1);
      iVar1 = (int)param_1[0x575];
      *(int *)(param_1 + 0x575) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x2bac) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x574,iVar1);
      }
      *(longlong **)(param_1[0x574] + (longlong)iVar1 * 8) = plVar4;
    }
  }
  return plVar4;
}



// FUNCTION 1426d7df0 FUN_1426d7df0 body=260 status=ok
// SIG undefined FUN_1426d7df0(void)

undefined8 FUN_1426d7df0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  void *_Src;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x2b58);
  uVar3 = 0;
  if (0 < iVar6) {
    plVar2 = *(longlong **)(param_1 + 0x2b50);
    uVar5 = uVar3;
    do {
      plVar1 = (longlong *)*plVar2;
      iVar4 = (int)uVar5;
      if (plVar1 != (longlong *)0x0) {
        if (plVar1 == param_2) {
          return 0;
        }
        if (*(byte *)((longlong)param_2 + 0x2c) <= *(byte *)((longlong)plVar1 + 0x2c)) {
          iVar6 = iVar4;
          if (((*(byte *)(param_2 + 5) & 2) != 0) &&
             (*(byte *)((longlong)param_2 + 0x2c) == *(byte *)((longlong)plVar1 + 0x2c))) {
            return 0;
          }
          break;
        }
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)uVar3 < (longlong)iVar6);
  }
  plVar2 = (longlong *)(param_1 + 0x2b50);
  iVar4 = *(int *)(param_1 + 0x2b58);
  *(int *)(param_1 + 0x2b58) = iVar4 + 1;
  if (*(int *)(param_1 + 0x2b5c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  _Src = (void *)(*plVar2 + (longlong)iVar6 * 8);
  _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 8),_Src,(longlong)(iVar4 - iVar6) << 3);
  *(longlong **)((longlong)iVar6 * 8 + *plVar2) = param_2;
  (**(code **)(*param_2 + 0x280))(param_2,param_1);
  return 1;
}



// FUNCTION 1426d7f00 FUN_1426d7f00 body=544 status=ok
// SIG undefined FUN_1426d7f00(void)

void FUN_1426d7f00(char *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  int local_98;
  int local_94;
  longlong local_90;
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
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  longlong *local_38 [2];
  
  lVar4 = FUN_1426979f0(param_2);
  if (lVar4 != 0) {
    if ((*param_1 == '\0') || (lVar5 = 2, (*(byte *)(param_2 + 0x12) & 8) == 0)) {
      lVar5 = 0;
    }
    if ((param_5 == '\0') || (cVar3 = FPhysScene::IsSubstepping(param_1,lVar5), cVar3 == '\0')) {
      local_88 = *(undefined4 *)param_4;
      local_84 = *(undefined4 *)((longlong)param_4 + 4);
      local_80 = *(undefined4 *)(param_4 + 1);
      local_7c = *(undefined4 *)param_3;
      local_78 = *(undefined4 *)((longlong)param_3 + 4);
      local_74 = *(undefined4 *)(param_3 + 1);
      if (param_6 == '\0') {
        physx::PxRigidBodyExt::addForceAtPos(lVar4,&local_7c,&local_88);
      }
      else {
        local_70 = local_88;
        local_6c = local_84;
        local_68 = local_80;
        local_64 = local_7c;
        local_60 = local_78;
        local_5c = local_74;
        physx::PxRigidBodyExt::addLocalForceAtLocalPos(lVar4,&local_64,&local_70,0,1);
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + lVar5 * 8 + 0x2f0);
      local_90 = param_2;
      cVar3 = FBodyInstance::IsNonKinematic(param_2);
      if (cVar3 != '\0') {
        uStack_50 = *(undefined4 *)(param_3 + 1);
        local_58 = *param_3;
        uStack_44 = *(undefined4 *)(param_4 + 1);
        local_40._0_3_ = CONCAT12(param_6,(undefined2)local_40);
        local_40 = CONCAT31(local_40._1_3_,1);
        uStack_4c = (undefined4)*param_4;
        uStack_48 = (undefined4)((ulonglong)*param_4 >> 0x20);
        piVar1 = (int *)(lVar4 + 0xac);
        LOCK();
        bVar7 = *piVar1 == 0;
        if (bVar7) {
          *piVar1 = 0;
        }
        UNLOCK();
        plVar6 = (longlong *)((ulonglong)!bVar7 * 0x50 + lVar4);
        TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
        ::FindId(plVar6,&local_98,local_90);
        if ((local_98 == -1) || (lVar4 = (longlong)local_98 * 0xe0 + *plVar6, lVar4 == 0)) {
          local_38[0] = &local_90;
          FUN_1426d1c40(plVar6,&local_94,local_38,0);
          lVar4 = (longlong)local_94 * 0xe0 + *plVar6;
        }
        iVar2 = *(int *)(lVar4 + 0x18);
        *(int *)(lVar4 + 0x18) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x1c) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow((longlong *)(lVar4 + 0x10),iVar2);
        }
        lVar4 = *(longlong *)(lVar4 + 0x10);
        lVar5 = (longlong)iVar2 * 0x1c;
        *(undefined8 *)(lVar5 + lVar4) = local_58;
        ((undefined8 *)(lVar5 + lVar4))[1] = CONCAT44(uStack_4c,uStack_50);
        *(ulonglong *)(lVar5 + 0x10 + lVar4) = CONCAT44(uStack_44,uStack_48);
        *(undefined4 *)(lVar5 + 0x18 + lVar4) = local_40;
      }
    }
  }
  return;
}



// FUNCTION 1426d8120 FUN_1426d8120 body=473 status=ok
// SIG undefined FUN_1426d8120(void)

void FUN_1426d8120(char *param_1,longlong param_2,undefined8 *param_3,char param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int local_68;
  int local_64;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  
  plVar4 = (longlong *)FUN_1426979f0(param_2);
  if (plVar4 != (longlong *)0x0) {
    if ((*param_1 == '\0') || (lVar5 = 2, (*(byte *)(param_2 + 0x12) & 8) == 0)) {
      lVar5 = 0;
    }
    if ((param_4 == '\0') || (cVar3 = FPhysScene::IsSubstepping(param_1,lVar5), cVar3 == '\0')) {
      local_50 = *(undefined4 *)param_3;
      local_4c = *(undefined4 *)((longlong)param_3 + 4);
      local_48 = *(undefined4 *)(param_3 + 1);
      (**(code **)(*plVar4 + 0x148))(plVar4,&local_50,-(param_5 != '\0') & 3,1);
    }
    else {
      lVar5 = *(longlong *)(param_1 + lVar5 * 8 + 0x2f0);
      local_60 = param_2;
      cVar3 = FBodyInstance::IsNonKinematic(param_2);
      if (cVar3 != '\0') {
        uStack_38 = *(undefined4 *)(param_3 + 1);
        local_40 = *param_3;
        local_28 = (uint)CONCAT21(local_28._2_2_,param_5) << 8;
        piVar1 = (int *)(lVar5 + 0xac);
        LOCK();
        bVar7 = *piVar1 == 0;
        if (bVar7) {
          *piVar1 = 0;
        }
        UNLOCK();
        plVar4 = (longlong *)((ulonglong)!bVar7 * 0x50 + lVar5);
        TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
        ::FindId(plVar4,&local_68,local_60);
        if ((local_68 == -1) || (lVar5 = (longlong)local_68 * 0xe0 + *plVar4, lVar5 == 0)) {
          local_58 = &local_60;
          FUN_1426d1c40(plVar4,&local_64,&local_58,0);
          lVar5 = (longlong)local_64 * 0xe0 + *plVar4;
        }
        iVar2 = *(int *)(lVar5 + 0x18);
        *(int *)(lVar5 + 0x18) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x1c) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow((longlong *)(lVar5 + 0x10),iVar2);
        }
        lVar5 = *(longlong *)(lVar5 + 0x10);
        lVar6 = (longlong)iVar2 * 0x1c;
        *(undefined8 *)(lVar6 + lVar5) = local_40;
        ((undefined8 *)(lVar6 + lVar5))[1] = CONCAT44(uStack_34,uStack_38);
        *(undefined8 *)(lVar6 + 0x10 + lVar5) = local_30;
        *(int *)(lVar6 + 0x18 + lVar5) = local_28;
      }
    }
  }
  return;
}



// FUNCTION 1426d8300 FUN_1426d8300 body=188 status=ok
// SIG undefined FUN_1426d8300(void)

longlong FUN_1426d8300(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  if (param_2 != 0) {
    lVar2 = UCameraModifier::GetPrivateStaticClass();
    lVar4 = param_2;
    do {
      lVar3 = param_2;
      if (lVar4 == lVar2) break;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      lVar3 = 0;
    } while (lVar4 != 0);
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(lVar3,param_1,0,0,0,0,0,0,0);
  if ((lVar3 != 0) && (cVar1 = (**(code **)(*param_1 + 0x760))(param_1,lVar3), cVar1 == '\x01')) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1426d83c0 BeginDestroy body=34 status=ok
// SIG undefined BeginDestroy(void)

void USequenceCameraShakeSequencePlayer::BeginDestroy(longlong param_1)

{
  FUN_140e96bb0(param_1 + 0x2e8);
  FUN_1426f06b0(param_1);
  return;
}



// FUNCTION 1426d83f0 FUN_1426d83f0 body=162 status=ok
// SIG undefined FUN_1426d83f0(void)

void FUN_1426d83f0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *local_res8;
  undefined8 local_res10;
  int local_res18 [2];
  
  param_1 = (longlong)param_4 * 0x50 + param_1;
  local_res10 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x368,local_res18,param_2);
  if ((local_res18[0] != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x368) + (longlong)local_res18[0] * 0x18, lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 8) = param_3;
    return;
  }
  local_res8 = &local_res10;
  FUN_1426d1f40(param_1 + 0x368,local_res18,&local_res8,0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x368) + 8 + (longlong)local_res18[0] * 0x18) = param_3;
  return;
}



// FUNCTION 1426d84a0 FUN_1426d84a0 body=472 status=ok
// SIG undefined FUN_1426d84a0(void)

void FUN_1426d84a0(char *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,char param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  int local_58;
  int local_54;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  
  lVar5 = FUN_1426979f0(param_2);
  if (lVar5 != 0) {
    if ((*param_1 == '\0') || (lVar7 = 2, (*(byte *)(param_2 + 0x12) & 8) == 0)) {
      lVar7 = 0;
    }
    if ((param_8 == '\0') || (cVar4 = FPhysScene::IsSubstepping(param_1,lVar7), cVar4 == '\0')) {
      FUN_1426d8680(lVar5,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      lVar5 = *(longlong *)(param_1 + lVar7 * 8 + 0x2f0);
      local_50 = param_2;
      cVar4 = FBodyInstance::IsNonKinematic(param_2);
      if (cVar4 != '\0') {
        uStack_38 = *(undefined4 *)(param_3 + 1);
        local_40 = *param_3;
        uStack_2c = param_6;
        uStack_2b = param_7;
        local_30 = param_5;
        piVar1 = (int *)(lVar5 + 0xac);
        LOCK();
        bVar8 = *piVar1 == 0;
        if (bVar8) {
          *piVar1 = 0;
        }
        UNLOCK();
        plVar6 = (longlong *)((ulonglong)!bVar8 * 0x50 + lVar5);
        uStack_34 = param_4;
        TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
        ::FindId(plVar6,&local_58,local_50);
        if ((local_58 == -1) || (lVar5 = (longlong)local_58 * 0xe0 + *plVar6, lVar5 == 0)) {
          local_48 = &local_50;
          FUN_1426d1c40(plVar6,&local_54,&local_48,0);
          lVar5 = (longlong)local_54 * 0xe0 + *plVar6;
        }
        iVar3 = *(int *)(lVar5 + 0x38);
        *(int *)(lVar5 + 0x38) = iVar3 + 1;
        if (*(int *)(lVar5 + 0x3c) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow((longlong *)(lVar5 + 0x30),iVar3);
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x18);
        *puVar2 = local_40;
        puVar2[1] = CONCAT44(uStack_34,uStack_38);
        *(ulonglong *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) =
             CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT14(uStack_2c,local_30)));
      }
    }
  }
  return;
}



// FUNCTION 1426d8680 FUN_1426d8680 body=759 status=ok
// SIG undefined FUN_1426d8680(void)

void FUN_1426d8680(longlong *param_1,float *param_2,float param_3,float param_4,char param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_d8 [28];
  undefined1 local_bc [180];
  
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x178))(param_1,local_res8);
  if ((*pbVar3 & 1) == 0) {
    (**(code **)(*param_1 + 0x100))(param_1);
    lVar4 = (**(code **)(*param_1 + 0xf0))(param_1,local_d8);
    pfVar5 = (float *)(**(code **)(*param_1 + 0xa0))(param_1,local_bc);
    fVar12 = *(float *)(lVar4 + 0x10) + *(float *)(lVar4 + 0x10);
    fVar9 = *(float *)(lVar4 + 0x14) + *(float *)(lVar4 + 0x14);
    fVar8 = pfVar5[1];
    fVar11 = *(float *)(lVar4 + 0x18) + *(float *)(lVar4 + 0x18);
    fVar6 = pfVar5[3];
    fVar1 = *pfVar5;
    fVar2 = pfVar5[2];
    fVar10 = fVar6 * fVar6 - 0.5;
    fVar7 = fVar8 * fVar9 + fVar1 * fVar12 + fVar2 * fVar11;
    local_e8 = ((fVar8 * fVar11 - fVar2 * fVar9) * fVar6 + fVar10 * fVar12 + fVar1 * fVar7 +
               pfVar5[4]) - *param_2;
    local_e0 = ((fVar1 * fVar9 - fVar8 * fVar12) * fVar6 + fVar10 * fVar11 + fVar2 * fVar7 +
               pfVar5[6]) - param_2[2];
    local_e4 = ((fVar2 * fVar12 - fVar1 * fVar11) * fVar6 + fVar10 * fVar9 + fVar8 * fVar7 +
               pfVar5[5]) - param_2[1];
    fVar8 = SQRT(local_e4 * local_e4 + local_e8 * local_e8 + local_e0 * local_e0);
    if (fVar8 <= param_3) {
      if (1e-20 <= fVar8) {
        fVar6 = 1.0 / fVar8;
        local_e8 = local_e8 * fVar6;
        local_e4 = local_e4 * fVar6;
        local_e0 = local_e0 * fVar6;
      }
      if ((param_5 == '\x01') && (1e-08 < param_3)) {
        param_4 = (1.0 - fVar8 / param_3) * param_4;
      }
      local_e8 = local_e8 * param_4;
      local_e4 = local_e4 * param_4;
      local_e0 = local_e0 * param_4;
      (**(code **)(*param_1 + 0x148))(param_1,&local_e8,-(param_6 != '\0') & 3,1);
    }
  }
  return;
}



// FUNCTION 1426d8980 FUN_1426d8980 body=757 status=ok
// SIG undefined FUN_1426d8980(void)

void FUN_1426d8980(longlong *param_1,float *param_2,float param_3,float param_4,char param_5,
                  byte param_6)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_d8 [28];
  undefined1 local_bc [180];
  
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x178))(param_1,local_res8);
  if ((*pbVar3 & 1) == 0) {
    (**(code **)(*param_1 + 0x100))(param_1);
    lVar4 = (**(code **)(*param_1 + 0xf0))(param_1,local_d8);
    pfVar5 = (float *)(**(code **)(*param_1 + 0xa0))(param_1,local_bc);
    fVar12 = *(float *)(lVar4 + 0x10) + *(float *)(lVar4 + 0x10);
    fVar9 = *(float *)(lVar4 + 0x14) + *(float *)(lVar4 + 0x14);
    fVar8 = pfVar5[1];
    fVar11 = *(float *)(lVar4 + 0x18) + *(float *)(lVar4 + 0x18);
    fVar6 = pfVar5[3];
    fVar1 = *pfVar5;
    fVar2 = pfVar5[2];
    fVar10 = fVar6 * fVar6 - 0.5;
    fVar7 = fVar1 * fVar12 + fVar8 * fVar9 + fVar2 * fVar11;
    local_e8 = ((fVar8 * fVar11 - fVar2 * fVar9) * fVar6 + fVar10 * fVar12 + fVar1 * fVar7 +
               pfVar5[4]) - *param_2;
    local_e0 = ((fVar1 * fVar9 - fVar8 * fVar12) * fVar6 + fVar10 * fVar11 + fVar2 * fVar7 +
               pfVar5[6]) - param_2[2];
    local_e4 = ((fVar2 * fVar12 - fVar1 * fVar11) * fVar6 + fVar10 * fVar9 + fVar8 * fVar7 +
               pfVar5[5]) - param_2[1];
    fVar8 = SQRT(local_e4 * local_e4 + local_e8 * local_e8 + local_e0 * local_e0);
    if (fVar8 <= param_3) {
      if (1e-20 <= fVar8) {
        fVar6 = 1.0 / fVar8;
        local_e8 = local_e8 * fVar6;
        local_e4 = local_e4 * fVar6;
        local_e0 = local_e0 * fVar6;
      }
      if ((param_5 == '\x01') && (1e-08 < param_3)) {
        param_4 = (1.0 - fVar8 / param_3) * param_4;
      }
      local_e8 = local_e8 * param_4;
      local_e4 = local_e4 * param_4;
      local_e0 = local_e0 * param_4;
      (**(code **)(*param_1 + 0x148))(param_1,&local_e8,param_6 + 1,1);
    }
  }
  return;
}



// FUNCTION 1426d8c80 FUN_1426d8c80 body=450 status=ok
// SIG undefined FUN_1426d8c80(void)

void FUN_1426d8c80(char *param_1,longlong param_2,undefined8 *param_3,char param_4,char param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int local_58;
  int local_54;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  plVar5 = (longlong *)FUN_1426979f0(param_2);
  if (plVar5 != (longlong *)0x0) {
    if ((*param_1 == '\0') || (lVar6 = 2, (*(byte *)(param_2 + 0x12) & 8) == 0)) {
      lVar6 = 0;
    }
    if ((param_4 == '\0') || (cVar4 = FPhysScene::IsSubstepping(param_1,lVar6), cVar4 == '\0')) {
      local_40 = *(undefined4 *)param_3;
      local_3c = *(undefined4 *)((longlong)param_3 + 4);
      local_38 = *(undefined4 *)(param_3 + 1);
      (**(code **)(*plVar5 + 0x150))(plVar5,&local_40,-(param_5 != '\0') & 3,1);
    }
    else {
      lVar6 = *(longlong *)(param_1 + lVar6 * 8 + 0x2f0);
      local_50 = param_2;
      cVar4 = FBodyInstance::IsNonKinematic(param_2);
      if (cVar4 != '\0') {
        uStack_28 = *(undefined4 *)(param_3 + 1);
        local_30 = *param_3;
        uStack_24 = CONCAT31(uStack_24._1_3_,param_5);
        piVar1 = (int *)(lVar6 + 0xac);
        LOCK();
        bVar7 = *piVar1 == 0;
        if (bVar7) {
          *piVar1 = 0;
        }
        UNLOCK();
        plVar5 = (longlong *)((ulonglong)!bVar7 * 0x50 + lVar6);
        TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
        ::FindId(plVar5,&local_58,local_50);
        if ((local_58 == -1) || (lVar6 = (longlong)local_58 * 0xe0 + *plVar5, lVar6 == 0)) {
          local_48 = &local_50;
          FUN_1426d1c40(plVar5,&local_54,&local_48,0);
          lVar6 = (longlong)local_54 * 0xe0 + *plVar5;
        }
        iVar3 = *(int *)(lVar6 + 0x28);
        *(int *)(lVar6 + 0x28) = iVar3 + 1;
        if (*(int *)(lVar6 + 0x2c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar6 + 0x20),iVar3);
        }
        puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar3 * 0x10);
        *puVar2 = local_30;
        puVar2[1] = CONCAT44(uStack_24,uStack_28);
      }
    }
  }
  return;
}



// FUNCTION 1426d8e50 FUN_1426d8e50 body=81 status=ok
// SIG undefined FUN_1426d8e50(void)

void FUN_1426d8e50(longlong *param_1)

{
  longlong lVar1;
  
  if (DAT_146b17150 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = UWorld::GetAudioDevice(lVar1);
      if (lVar1 != 0) {
        FAudioDevice::SetTransientMasterVolume(lVar1,1.0 - *(float *)((longlong)param_1 + 0x494));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1426d8eb0 FUN_1426d8eb0 body=1129 status=ok
// SIG undefined FUN_1426d8eb0(void)

void FUN_1426d8eb0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_res8;
  longlong local_res20;
  
  iVar9 = *(int *)(param_1 + 0x2c00);
  if (iVar9 != 0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x2bf8) + 0x5d8);
    do {
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 0xc0;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x2c00) = 0;
  if (*(int *)(param_1 + 0x2c04) != 0) {
    FUN_1422f8870((longlong *)(param_1 + 0x2bf8),0);
  }
  *(undefined4 *)(param_1 + 0x2c10) = 0;
  if (*(int *)(param_1 + 0x2c14) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x2c08,0);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x2b58)) {
    lVar7 = 0;
    do {
      plVar6 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x2b50));
      if (((plVar6 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar6 + 0x290))(), cVar3 == '\0'))
         && (plVar6 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x2b50)),
            cVar3 = (**(code **)(*plVar6 + 0x288))(plVar6,param_2,param_3), cVar3 != '\0')) break;
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x2b58));
  }
  local_res8 = 0;
  if (0 < *(int *)(param_1 + 0x2c20)) {
    local_res20 = 0;
    do {
      plVar6 = *(longlong **)(param_1 + 0x2c38);
      lVar7 = *(longlong *)(local_res20 + *(longlong *)(param_1 + 0x2c18));
      if ((plVar6 != (longlong *)0x0) && ((*(byte *)(lVar7 + 0x3c) & 1) == 0)) {
        (**(code **)(*plVar6 + 0x500))(plVar6,&DAT_1468b5d90,&DAT_1468b5da0,0,0);
        plVar4 = (longlong *)FUN_14290f280();
        lVar5 = plVar4[0x1f];
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x368))(plVar4);
          lVar5 = plVar4[0x1f];
          if (lVar5 != 0) goto LAB_1426d9074;
        }
        else {
LAB_1426d9074:
          *(undefined4 *)(plVar6[0x8c] + 0x2e4) =
               *(undefined4 *)(*(longlong *)(lVar5 + 0x460) + 0x2e4);
          *(undefined4 *)(plVar6[0x8c] + 0x2d0) =
               *(undefined4 *)(*(longlong *)(lVar7 + 0x28) + 0x54);
          FUN_140a296b0(plVar6[0x8c] + 0x300,*(longlong *)(lVar7 + 0x28) + 0x60);
          *(undefined4 *)(plVar6[0x8c] + 0x2f0) =
               *(undefined4 *)(*(longlong *)(lVar7 + 0x28) + 0x660);
        }
        UCameraAnimInst::AdvanceAnim(lVar7,param_2,0);
        if (0.0 < *(float *)(lVar7 + 0x5c)) {
          lVar5 = *(longlong *)(param_1 + 0x2c38);
          FUN_1422e4370(lVar7,param_3);
          lVar5 = *(longlong *)(lVar5 + 0x460);
          fVar1 = *(float *)(lVar5 + 0x2f0);
          if (0.0 < fVar1) {
            iVar9 = *(int *)(param_1 + 0x2c00);
            fVar2 = *(float *)(lVar7 + 0x5c);
            *(int *)(param_1 + 0x2c00) = iVar9 + 1;
            if (*(int *)(param_1 + 0x2c04) < iVar9 + 1) {
              FUN_140e5a9b0((longlong *)(param_1 + 0x2bf8),iVar9);
            }
            FUN_140a25aa0((longlong)iVar9 * 0x600 + *(longlong *)(param_1 + 0x2bf8),lVar5 + 0x300);
            iVar9 = *(int *)(param_1 + 0x2c10);
            *(int *)(param_1 + 0x2c10) = iVar9 + 1;
            if (*(int *)(param_1 + 0x2c14) < iVar9 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(param_1 + 0x2c08),iVar9);
            }
            *(float *)(*(longlong *)(param_1 + 0x2c08) + (longlong)iVar9 * 4) = fVar1 * fVar2;
          }
        }
      }
      *(undefined4 *)(lVar7 + 0x58) = 0x3f800000;
      if ((*(byte *)(lVar7 + 0x3c) & 1) != 0) {
        lVar5 = (longlong)*(int *)(param_1 + 0x2c20);
        if (*(int *)(param_1 + 0x2c20) != 0) {
          iVar11 = 0;
          lVar8 = 0;
          bVar12 = **(longlong **)(param_1 + 0x2c18) != lVar7;
          iVar9 = 0;
          do {
            lVar8 = lVar8 + 1;
            iVar10 = iVar9 + 1;
            if (lVar8 < lVar5) {
              plVar6 = (longlong *)(*(longlong *)(param_1 + 0x2c18) + lVar8 * 8);
              do {
                if (bVar12 != (*plVar6 != lVar7)) break;
                iVar10 = iVar10 + 1;
                lVar8 = lVar8 + 1;
                plVar6 = plVar6 + 1;
              } while (lVar8 < lVar5);
            }
            if (bVar12 != false) {
              if (iVar11 != iVar9) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(param_1 + 0x2c18) + (longlong)iVar11 * 8),
                           (void *)(*(longlong *)(param_1 + 0x2c18) + (longlong)iVar9 * 8),
                           (longlong)(iVar10 - iVar9) << 3);
              }
              iVar11 = iVar11 + (iVar10 - iVar9);
            }
            bVar12 = (bool)(bVar12 ^ 1);
            iVar9 = iVar10;
          } while (lVar8 < lVar5);
          *(int *)(param_1 + 0x2c20) = iVar11;
        }
        iVar9 = *(int *)(param_1 + 0x2c30);
        *(int *)(param_1 + 0x2c30) = iVar9 + 1;
        if (*(int *)(param_1 + 0x2c34) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x2c28,iVar9);
        }
        local_res8 = local_res8 + -1;
        local_res20 = local_res20 + -8;
        *(longlong *)(*(longlong *)(param_1 + 0x2c28) + (longlong)iVar9 * 8) = lVar7;
      }
      local_res8 = local_res8 + 1;
      local_res20 = local_res20 + 8;
    } while (local_res8 < *(int *)(param_1 + 0x2c20));
  }
  plVar6 = *(longlong **)(param_1 + 0x2c38);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x500))(plVar6,&DAT_1468b5d90,&DAT_1468b5da0,0,0);
  }
  return;
}



// FUNCTION 1426d9320 FUN_1426d9320 body=3293 status=ok
// SIG undefined FUN_1426d9320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1426d9320(undefined8 param_1,float param_2,undefined8 param_3,undefined8 *param_4,
                  float *param_5,float param_6)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  bool bVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_258 [32];
  float local_238;
  float local_228;
  float local_218;
  float local_210;
  float local_208;
  float fStack_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  float fStack_120;
  uint uStack_11c;
  undefined1 local_118 [4];
  undefined1 auStack_114 [4];
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float local_f4;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if (((DAT_146b07d6c == 0) && (local_1f8 = param_2, cVar3 = FUN_1426aaac0(param_3), cVar3 != '\0'))
     && (cVar3 = FBodyInstance::IsValidBodyInstance(param_3), cVar3 != '\0')) {
    local_148 = param_4[4];
    local_128 = *param_4;
    fVar22 = *(float *)(param_4 + 3);
    fVar8 = *(float *)((longlong)param_4 + 0x1c);
    fStack_120 = *(float *)(param_4 + 1);
    fVar14 = *(float *)(param_4 + 5);
    fVar15 = *(float *)((longlong)param_4 + 0x34);
    bVar1 = *(byte *)(param_4 + 7);
    fVar12 = *(float *)((longlong)param_4 + 0x14);
    auStack_114 = (undefined1  [4])fVar12;
    fVar7 = *(float *)(param_4 + 2);
    local_118 = (undefined1  [4])fVar7;
    uStack_110._0_4_ = fVar22;
    uStack_110._4_4_ = fVar8;
    local_108 = (float)local_148;
    fStack_104 = (float)((ulonglong)local_148 >> 0x20);
    local_1c8 = *(undefined8 *)((longlong)param_4 + 0x2c);
    fStack_fc = (float)local_1c8;
    fStack_f8 = (float)((ulonglong)local_1c8 >> 0x20);
    fVar22 = fVar12 * fVar12 + fVar7 * fVar7 + fVar22 * fVar22 + fVar8 * fVar8;
    fStack_100 = fVar14;
    local_f4 = fVar15;
    cVar3 = FUN_1426aaac0(param_3);
    if (((cVar3 == '\0') || (cVar3 = FBodyInstance::IsValidBodyInstance(param_3), cVar3 == '\0')) ||
       ((fVar22 < 0.0001 || (0.0001 < ABS(fVar22 - 1.0))))) {
      bVar5 = true;
    }
    else {
      fVar22 = DAT_1465349a4;
      if (DAT_1465349a4 < 0.0) {
        fVar22 = *param_5;
      }
      local_218 = DAT_1465349ac;
      if (DAT_1465349ac < 0.0) {
        local_218 = param_5[1];
      }
      local_1f4 = DAT_1465349b0;
      if (DAT_1465349b0 < 0.0) {
        local_1f4 = param_5[2];
      }
      local_238 = DAT_1465349c4;
      if (DAT_1465349c4 < 0.0) {
        local_238 = param_5[3];
      }
      local_1dc = DAT_1465349b4;
      if (DAT_1465349b4 < 0.0) {
        local_1dc = param_5[9];
      }
      local_1f0 = DAT_1465349b8;
      if (DAT_1465349b8 < 0.0) {
        local_1f0 = param_5[10];
      }
      local_1ec = DAT_1465349bc;
      if (DAT_1465349bc < 0.0) {
        local_1ec = param_5[0xb];
      }
      local_1d0 = DAT_1465349c8;
      if (DAT_1465349c8 < 0.0) {
        local_1d0 = param_5[5];
      }
      local_1d8 = DAT_1465349cc;
      if (DAT_1465349cc < 0.0) {
        local_1d8 = param_5[7];
      }
      local_210 = DAT_1465349d0;
      if (DAT_1465349d0 < 0.0) {
        local_210 = param_5[6];
      }
      local_1d4 = DAT_1465349d4;
      if (DAT_1465349d4 < 0.0) {
        local_1d4 = param_5[8];
      }
      local_1e0 = DAT_1465349c0;
      if (DAT_1465349c0 < 0.0) {
        local_1e0 = param_5[4];
      }
      local_178 = 0;
      uStack_170 = 0x3f80000000000000;
      local_168 = 0;
      uStack_160 = 0;
      local_188 = 0;
      local_180 = 0.0;
      local_158 = 0;
      local_150 = 0;
      FUN_142697f40(param_3,&local_188);
      local_1b8 = -(float)local_178;
      fStack_1b0 = -(float)uStack_170;
      fVar22 = fVar22 * param_6;
      fStack_1b4 = -local_178._4_4_;
      fStack_1ac = uStack_170._4_4_;
      local_208 = local_108 * fVar22 + (float)local_128;
      fStack_204 = fStack_104 * fVar22 + local_128._4_4_;
      local_200 = fStack_100 * fVar22 + fStack_120;
      fVar19 = SQRT(fStack_fc * fStack_fc + fStack_f8 * fStack_f8 + local_f4 * local_f4);
      fVar8 = DAT_1468b5d94;
      fVar12 = DAT_1468b5d98;
      fVar7 = DAT_1468b5d90;
      if (1e-08 < fVar19) {
        fVar7 = 1.0 / fVar19;
        fVar8 = fStack_f8 * fVar7;
        fVar12 = local_f4 * fVar7;
        fVar7 = fStack_fc * fVar7;
      }
      fVar22 = fVar19 * 0.008726646 * fVar22;
      if (fVar22 < 0.0) {
        fVar19 = fVar22 * 0.15915494 - 0.5;
      }
      else {
        fVar19 = fVar22 * 0.15915494 + 0.5;
      }
      fVar22 = fVar22 - (float)(int)fVar19 * 6.2831855;
      if (fVar22 <= 1.5707964) {
        if (-1.5707964 <= fVar22) {
          local_228 = 1.0;
        }
        else {
          fVar22 = -3.1415927 - fVar22;
          local_228 = -1.0;
        }
      }
      else {
        fVar22 = 3.1415927 - fVar22;
        local_228 = -1.0;
      }
      fVar29 = local_200 - local_180;
      fVar19 = fVar22 * fVar22;
      fVar22 = (((((2.7525562e-06 - fVar19 * 2.3889859e-08) * fVar19 - 0.00019840874) * fVar19 +
                 0.008333331) * fVar19 - 0.16666667) * fVar19 + 1.0) * fVar22;
      fVar7 = fVar22 * fVar7;
      fVar8 = fVar22 * fVar8;
      fVar22 = fVar22 * fVar12;
      fVar12 = (((((2.4760495e-05 - fVar19 * 2.6051615e-07) * fVar19 - 0.0013888378) * fVar19 +
                 0.041666638) * fVar19 - 0.5) * fVar19 + 1.0) * local_228;
      local_228 = (float)local_188;
      fVar19 = local_208 - (float)local_188;
      fVar28 = fStack_204 - local_188._4_4_;
      local_1e8 = local_188._4_4_;
      local_138 = uStack_110._4_4_ * fVar7 * _DAT_146b08610 + fVar12 * (float)local_118 +
                  (float)uStack_110 * fVar8 * _DAT_146b08600 +
                  (float)auStack_114 * fVar22 * _DAT_146b085f0;
      fStack_134 = (float)uStack_110 * fVar7 * fRam0000000146b08614 + fVar12 * (float)auStack_114 +
                   uStack_110._4_4_ * fVar8 * fRam0000000146b08604 +
                   (float)local_118 * fVar22 * fRam0000000146b085f4;
      fStack_130 = (float)auStack_114 * fVar7 * fRam0000000146b08618 + fVar12 * (float)uStack_110 +
                   (float)local_118 * fVar8 * fRam0000000146b08608 +
                   uStack_110._4_4_ * fVar22 * fRam0000000146b085f8;
      fStack_12c = (float)local_118 * fVar7 * fRam0000000146b0861c + fVar12 * uStack_110._4_4_ +
                   (float)auStack_114 * fVar8 * fRam0000000146b0860c +
                   (float)uStack_110 * fVar22 * fRam0000000146b085fc;
      local_1e4 = SQRT(fVar28 * fVar28 + fVar19 * fVar19 + fVar29 * fVar29);
      local_1a8 = local_1b8 * fStack_12c * _DAT_146b08610 + uStack_170._4_4_ * local_138 +
                  fStack_1b4 * fStack_130 * _DAT_146b08600 +
                  fStack_1b0 * fStack_134 * _DAT_146b085f0;
      fStack_1a4 = local_1b8 * fStack_130 * fRam0000000146b08614 + uStack_170._4_4_ * fStack_134 +
                   fStack_1b4 * fStack_12c * fRam0000000146b08604 +
                   fStack_1b0 * local_138 * fRam0000000146b085f4;
      fStack_1a0 = local_1b8 * fStack_134 * fRam0000000146b08618 + uStack_170._4_4_ * fStack_130 +
                   fStack_1b4 * local_138 * fRam0000000146b08608 +
                   fStack_1b0 * fStack_12c * fRam0000000146b085f8;
      fVar8 = local_1b8 * local_138 * fRam0000000146b0861c + uStack_170._4_4_ * fStack_12c +
              fStack_1b4 * fStack_134 * fRam0000000146b0860c +
              fStack_1b0 * fStack_130 * fRam0000000146b085fc;
      fVar22 = -1.0;
      if ((-1.0 <= fVar8) && (fVar22 = fVar8, 1.0 <= fVar8)) {
        fVar22 = 1.0;
      }
      fStack_19c = fVar8;
      fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
      fVar22 = fVar22 + fVar22;
      fVar8 = 1.0 - fVar8 * fVar8;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (SQRT(fVar8) < 0.0001) {
        fVar12 = 1.0;
        fVar7 = 0.0;
        fVar8 = 0.0;
      }
      else {
        fVar8 = 1.0 / SQRT(fVar8);
        fVar12 = local_1a8 * fVar8;
        fVar7 = fStack_1a4 * fVar8;
        fVar8 = fStack_1a0 * fVar8;
      }
      for (; 3.1415927 < fVar22; fVar22 = fVar22 + -6.2831855) {
      }
      for (; fVar22 < -3.1415927; fVar22 = fVar22 + 6.2831855) {
      }
      fVar22 = fVar22 * 57.295776;
      fVar9 = fVar22 * local_1f4 + local_1e4 * local_218;
      bVar5 = fVar9 < local_238;
      if (local_238 <= fVar9) {
        fVar16 = *(float *)(param_4 + 10) - *(float *)((longlong)param_4 + 0x5c);
        fVar27 = *(float *)((longlong)param_4 + 0x54) - *(float *)(param_4 + 0xc);
        fVar17 = *(float *)(param_4 + 0xb) - *(float *)((longlong)param_4 + 100);
        fVar13 = fVar27 * fVar27 + fVar16 * fVar16 + fVar17 * fVar17;
        fVar9 = fVar27;
        fVar18 = fVar16;
        fVar21 = fVar17;
        local_238 = fVar16;
        local_218 = fVar17;
        if ((fVar13 != 1.0) &&
           (fVar9 = DAT_1468b5d94, fVar18 = DAT_1468b5d90, fVar21 = DAT_1468b5d98, 1e-08 <= fVar13))
        {
          auVar11 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
          fVar20 = auVar11._0_4_;
          fVar20 = fVar20 + fVar20 * (0.5 - fVar13 * 0.5 * fVar20 * fVar20);
          fVar20 = fVar20 + fVar20 * (0.5 - fVar13 * 0.5 * fVar20 * fVar20);
          fVar9 = fVar27 * fVar20;
          fVar18 = fVar16 * fVar20;
          fVar21 = fVar17 * fVar20;
          local_238 = fVar16 * fVar20;
          local_218 = fVar17 * fVar20;
        }
        if ((local_1f0 <=
             (local_1e8 - *(float *)(param_4 + 0xc)) * fVar9 +
             (local_228 - *(float *)((longlong)param_4 + 0x5c)) * fVar18 +
             (local_180 - *(float *)((longlong)param_4 + 100)) * fVar21) ||
           (fVar27 * fVar28 + fVar16 * fVar19 + fVar17 * fVar29 <= local_1ec)) {
          fVar9 = *(float *)((longlong)param_4 + 0x4c) - local_1f8;
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
        }
        else {
          fVar9 = local_1f8 + *(float *)((longlong)param_4 + 0x4c);
        }
        *(float *)((longlong)param_4 + 0x4c) = fVar9;
      }
      else {
        fVar9 = 0.0;
        *(undefined4 *)((longlong)param_4 + 0x4c) = 0;
      }
      param_4[10] = CONCAT44(fStack_204,local_208);
      local_188 = CONCAT44(local_1e8,local_228);
      *(undefined8 *)((longlong)param_4 + 0x5c) = local_188;
      *(float *)(param_4 + 0xb) = local_200;
      *(float *)((longlong)param_4 + 100) = local_180;
      if (((local_1e0 < local_1e4) || (local_1dc < fVar9)) || (DAT_146b083b0 != 0)) {
        bVar2 = true;
        local_198 = local_148;
        bVar5 = true;
        fVar22 = 1.0;
        *(undefined4 *)((longlong)param_4 + 0x4c) = 0;
        local_1c0 = fVar15;
        local_190 = fVar14;
      }
      else {
        bVar2 = false;
        local_198 = CONCAT44(fVar28 * local_1d8 * local_1f8 + fStack_104,
                             fVar19 * local_1d8 * local_1f8 + local_108);
        local_200 = fVar8 * fVar22 * local_1d4 * local_1f8 + local_f4;
        local_1c8 = CONCAT44(fVar7 * fVar22 * local_1d4 * local_1f8 + fStack_f8,
                             fVar12 * fVar22 * local_1d4 * local_1f8 + fStack_fc);
        fVar22 = local_1d0;
        local_1c0 = local_200;
        local_190 = fVar29 * local_1d8 * local_1f8 + fStack_100;
      }
      fVar12 = fVar28 * fVar22 + local_1e8;
      fVar8 = fVar19 * fVar22 + local_228;
      fVar7 = fVar29 * fVar22 + local_180;
      fVar22 = 1.0;
      if (!bVar2) {
        fVar22 = local_210;
      }
      pfVar4 = (float *)FQuat::Slerp_NotNormalized(&local_1a8,&local_178,&local_138,fVar22);
      local_210 = 1e-08;
      local_1b8 = *pfVar4;
      fStack_1b4 = pfVar4[1];
      fStack_1b0 = pfVar4[2];
      fStack_1ac = pfVar4[3];
      auVar10._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
      auVar10._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
      auVar10._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
      auVar10._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
      fVar28 = auVar10._4_4_ + auVar10._0_4_;
      fVar29 = auVar10._8_4_ + auVar10._4_4_;
      fVar9 = auVar10._12_4_ + auVar10._8_4_;
      fVar18 = auVar10._0_4_ + auVar10._12_4_;
      auVar11._4_4_ = fVar29;
      auVar11._0_4_ = fVar28;
      auVar11._8_4_ = fVar9;
      auVar11._12_4_ = fVar18;
      auVar11 = rsqrtps(auVar10,auVar11);
      fVar22 = auVar11._0_4_;
      fVar14 = auVar11._4_4_;
      fVar15 = auVar11._8_4_;
      fVar19 = auVar11._12_4_;
      fVar22 = (_DAT_146b084a0 - fVar22 * fVar22 * fVar28 * _DAT_146b084a0) * fVar22 + fVar22;
      fVar14 = (fRam0000000146b084a4 - fVar14 * fVar14 * fVar29 * fRam0000000146b084a4) * fVar14 +
               fVar14;
      fVar15 = (fRam0000000146b084a8 - fVar15 * fVar15 * fVar9 * fRam0000000146b084a8) * fVar15 +
               fVar15;
      fVar19 = (fRam0000000146b084ac - fVar19 * fVar19 * fVar18 * fRam0000000146b084ac) * fVar19 +
               fVar19;
      uVar23 = ((uint)(((_DAT_146b084a0 - fVar22 * fVar22 * fVar28 * _DAT_146b084a0) * fVar22 +
                       fVar22) * local_1b8) ^ _DAT_146b08490) & -(uint)(1e-08 <= fVar28) ^
               _DAT_146b08490;
      uVar24 = ((uint)(((fRam0000000146b084a4 - fVar14 * fVar14 * fVar29 * fRam0000000146b084a4) *
                        fVar14 + fVar14) * fStack_1b4) ^ uRam0000000146b08494) &
               -(uint)(1e-08 <= fVar29) ^ uRam0000000146b08494;
      uVar25 = ((uint)(((fRam0000000146b084a8 - fVar15 * fVar15 * fVar9 * fRam0000000146b084a8) *
                        fVar15 + fVar15) * fStack_1b0) ^ uRam0000000146b08498) &
               -(uint)(1e-08 <= fVar9) ^ uRam0000000146b08498;
      uVar26 = ((uint)(((fRam0000000146b084ac - fVar19 * fVar19 * fVar18 * fRam0000000146b084ac) *
                        fVar19 + fVar19) * fStack_1ac) ^ uRam0000000146b0849c) &
               -(uint)(1e-08 <= fVar18) ^ uRam0000000146b0849c;
      cVar3 = FUN_14269c970(param_3);
      if ((DAT_146b083b4 != 0) || (uVar6 = 1, bVar2)) {
        uVar6 = 2;
      }
      local_128 = CONCAT44(uVar24,uVar23);
      auStack_114 = (undefined1  [4])fVar12;
      local_118 = (undefined1  [4])fVar8;
      uStack_110._0_4_ = fVar7;
      uStack_110._4_4_ = 0.0;
      local_108 = (float)(undefined4)DAT_1464aa788;
      fStack_104 = (float)DAT_1464aa788._4_4_;
      fStack_100 = (float)DAT_1464aa790;
      fStack_fc = 0.0;
      fStack_120 = (float)uVar25;
      uStack_11c = uVar26;
      FUN_1426a89c0(param_3,&local_128,uVar6);
      FUN_1426a9420(param_3,&local_198,0);
      local_208 = (float)local_1c8 * 0.017453292;
      local_200 = local_1c0 * 0.017453292;
      fStack_204 = local_1c8._4_4_ * 0.017453292;
      FUN_1426a85f0(param_3,&local_208,0);
      if (((bVar1 & 1) != 0) && (cVar3 == '\0')) {
        FUN_1426a4f30(param_3);
      }
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 1426da000 FUN_1426da000 body=463 status=ok
// SIG undefined FUN_1426da000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426da000(longlong *param_1,float *param_2)

{
  undefined1 auStack_cd8 [32];
  float local_cb8;
  float local_cb4;
  float local_cb0;
  longlong local_6a0;
  longlong local_690;
  float local_668;
  float local_664;
  float local_660;
  longlong local_50;
  longlong local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_cd8;
  FUN_142222f50();
  (**(code **)(*param_1 + 0x720))(param_1,&local_668);
  local_668 = local_668 + *param_2;
  local_664 = local_664 + param_2[1];
  local_660 = local_660 + param_2[2];
  (**(code **)(*param_1 + 0x710))(param_1,&local_668);
  (**(code **)(*param_1 + 0x728))(param_1,&local_cb8);
  local_cb8 = local_cb8 + *param_2;
  local_cb4 = local_cb4 + param_2[1];
  local_cb0 = local_cb0 + param_2[2];
  (**(code **)(*param_1 + 0x718))(param_1,&local_cb8);
  *(float *)(param_1 + 0x234) = *param_2 + *(float *)(param_1 + 0x234);
  *(float *)((longlong)param_1 + 0x11a4) = param_2[1] + *(float *)((longlong)param_1 + 0x11a4);
  *(float *)(param_1 + 0x235) = param_2[2] + *(float *)(param_1 + 0x235);
  *(float *)(param_1 + 0x302) = *param_2 + *(float *)(param_1 + 0x302);
  *(float *)((longlong)param_1 + 0x1814) = param_2[1] + *(float *)((longlong)param_1 + 0x1814);
  *(float *)(param_1 + 0x303) = param_2[2] + *(float *)(param_1 + 0x303);
  if (local_690 != 0) {
    FMemory::Free();
  }
  if (local_6a0 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426da1d0 FUN_1426da1d0 body=206 status=ok
// SIG undefined FUN_1426da1d0(void)

void FUN_1426da1d0(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 4) == 0) goto LAB_1426da27b;
    do {
      plVar1 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + uVar3 * 2));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x358))
                  (plVar1,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                   ,0x82e);
        local_24 = param_2[1] ^ 0x80000000;
        local_28 = *param_2 ^ 0x80000000;
        local_20 = param_2[2] ^ 0x80000000;
        (**(code **)(*plVar1 + 0x3a0))(plVar1,&local_28);
        (**(code **)(*plVar1 + 0x360))(plVar1);
      }
LAB_1426da27b:
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 1426da2a0 FUN_1426da2a0 body=266 status=ok
// SIG undefined FUN_1426da2a0(void)

void FUN_1426da2a0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  if ((param_2 != (longlong *)0x0) && (plVar1 = (longlong *)*param_3, param_2 != plVar1)) {
    *param_3 = (longlong)param_2;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x480);
    *(uint *)((longlong)param_3 + 0x44) =
         *(uint *)((longlong)param_3 + 0x44) ^
         (*(uint *)(param_1 + 0x2c40) >> 1 ^ *(uint *)((longlong)param_3 + 0x44)) & 1;
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 0x470);
    *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c60);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x5c0))(plVar1,*(undefined8 *)(param_1 + 0x458));
      param_2 = (longlong *)*param_3;
    }
    (**(code **)(*param_2 + 0x5b8))(param_2,*(undefined8 *)(param_1 + 0x458));
    if ((((*(uint *)((longlong)*(longlong **)(param_1 + 0x458) + 0x4cc) >> 1 & 1) == 0) ||
        (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x768))(), cVar2 == '\0')) &&
       (iVar3 = FUN_142235230(param_1), iVar3 != 3)) {
      local_14 = *(undefined1 *)(param_4 + 1);
      local_18 = *param_4;
      local_10 = param_4[2];
      local_c = local_c ^ (param_4[3] ^ local_c) & 1;
      FUN_1429e1110(*(undefined8 *)(param_1 + 0x458),*param_3,&local_18);
    }
  }
  return;
}



// FUNCTION 1426da3b0 FUN_1426da3b0 body=31 status=ok
// SIG undefined FUN_1426da3b0(void)

void FUN_1426da3b0(longlong param_1)

{
  FUN_1423850d0();
  FUN_1426ce340(param_1 + 0x318);
  return;
}



// FUNCTION 1426da3d0 FUN_1426da3d0 body=27 status=ok
// SIG undefined FUN_1426da3d0(void)

void FUN_1426da3d0(undefined8 param_1)

{
  FUN_142330a70();
  FUN_1426f06b0(param_1);
  return;
}



// FUNCTION 1426da3f0 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FUN_1426ce340(param_1 + 0x318);
  return;
}



// FUNCTION 1426da400 Broadcast body=196 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,FPhysScene_*,unsigned_int,float>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
LAB_1426da476:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1426da476;
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



// FUNCTION 1426da4d0 FUN_1426da4d0 body=1052 status=ok
// SIG undefined FUN_1426da4d0(void)

void FUN_1426da4d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  lVar5 = *param_1;
  lVar7 = 0;
  if (lVar5 == 0) {
    *param_1 = param_2;
LAB_1426da5cc:
    lVar5 = lVar7;
  }
  else {
    if (lVar5 == param_2) goto LAB_1426da5cc;
    lVar4 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar5 = *param_1;
      if (lVar5 != 0) {
        lVar4 = FUN_1429d7ab0();
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
          lVar5 = *(longlong *)(lVar5 + 0x478);
          goto LAB_1426da5cf;
        }
      }
      lVar5 = *param_1;
      if (lVar5 != 0) {
        lVar4 = AFGRailroadVehicle::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_1426da5cf;
      }
      goto LAB_1426da5cc;
    }
    lVar5 = *(longlong *)(lVar5 + 0x460);
  }
LAB_1426da5cf:
  param_1[0xcc] = lVar5;
  if (lVar5 == 0) {
LAB_1426da7f3:
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + 0xc);
      lVar5 = lVar7;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
        return;
      }
    }
  }
  else {
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) goto LAB_1426da7f3;
    lVar5 = *param_1;
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0xc);
      lVar4 = lVar7;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
        lVar4 = FUN_1429d7ab0();
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
          lVar5 = *param_1;
          if (lVar5 == 0) {
LAB_1426da6eb:
            lVar5 = lVar7;
          }
          else {
            lVar4 = FUN_1429d7ab0();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1426da6eb;
          }
          if (*(longlong *)(lVar5 + 0x478) == param_1[0xcc]) goto LAB_1426da7f3;
        }
      }
    }
    *param_1 = 0;
    lVar5 = *(longlong *)(param_1[0xcc] + 0x118);
    if (lVar5 != 0) {
      lVar4 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = *(longlong *)(lVar5 + 0x488);
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0xc);
          lVar4 = lVar7;
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar6 = iVar1 >> 0x1f & 0xffff;
            uVar3 = iVar1 + uVar6;
            lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
            local_c = local_c & 0xfffffffe;
            local_18 = 0;
            local_14 = 1;
            local_10 = 0x40000000;
            (**(code **)(**(longlong **)(param_2 + 0x528) + 0x738))
                      (*(longlong **)(param_2 + 0x528),lVar5,param_1,&local_18);
            goto LAB_1426da7f3;
          }
        }
        *param_1 = param_1[0xcc];
      }
      else {
        param_1[0xcc] = 0;
      }
      goto LAB_1426da7f3;
    }
    param_1[0xcc] = 0;
  }
  lVar5 = *(longlong *)(param_2 + 0x488);
  if (lVar5 != 0) {
    if ((*(byte *)(lVar5 + 0x94) & 2) == 0) {
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) goto LAB_1426da899;
      bVar2 = false;
    }
    else {
LAB_1426da899:
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1426da8a5;
  }
  lVar5 = param_2;
LAB_1426da8a5:
  local_c = local_c & 0xfffffffe;
  local_18 = 0;
  local_14 = 1;
  local_10 = 0x40000000;
  (**(code **)(**(longlong **)(param_2 + 0x528) + 0x738))
            (*(longlong **)(param_2 + 0x528),lVar5,param_1,&local_18);
  return;
}



// FUNCTION 1426da8f0 FUN_1426da8f0 body=134 status=ok
// SIG undefined FUN_1426da8f0(void)

void FUN_1426da8f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2ba8)) {
    lVar1 = 0;
    do {
      FUN_142227350(*(undefined8 *)(*(longlong *)(param_1 + 0x2ba0) + lVar1),0,1);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x2ba8));
  }
  *(undefined4 *)(param_1 + 0x2ba8) = 0;
  if (*(int *)(param_1 + 0x2bac) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2ba0,0);
  return;
}



// FUNCTION 1426da980 FUN_1426da980 body=47 status=ok
// SIG undefined FUN_1426da980(void)

void FUN_1426da980(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xb1a) & 4) != 0)) {
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x458);
    *(byte *)(param_2 + 0xb1a) = *(byte *)(param_2 + 0xb1a) & 0xfb;
  }
  return;
}



// FUNCTION 1426da9b0 FUN_1426da9b0 body=458 status=ok
// SIG undefined FUN_1426da9b0(void)

float * FUN_1426da9b0(longlong param_1,float *param_2,float *param_3,float param_4,float *param_5)

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
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  fVar5 = *(float *)(param_1 + 0x2d8);
  fVar6 = fVar2 * 0.0 - fVar3 * 0.0;
  fVar8 = fVar3 * 1.0 - fVar1 * 0.0;
  fVar10 = fVar1 * 0.0 - fVar2 * 1.0;
  fVar6 = fVar6 + fVar6;
  fVar8 = fVar8 + fVar8;
  fVar10 = fVar10 + fVar10;
  fVar7 = fVar2 * 0.0 - fVar3 * 0.0;
  fVar9 = fVar3 * 1.0 - fVar1 * 0.0;
  fVar11 = fVar1 * 0.0 - fVar2 * 1.0;
  fVar7 = fVar7 + fVar7;
  fVar9 = fVar9 + fVar9;
  fVar11 = fVar11 + fVar11;
  fVar13 = *param_3 -
           (*(float *)(param_1 + 0x220) +
           ((fVar11 * fVar2 - fVar9 * fVar3) + fVar4 * fVar7 + 1.0) * fVar5);
  fVar12 = param_3[1] -
           (*(float *)(param_1 + 0x224) +
           ((fVar7 * fVar3 - fVar11 * fVar1) + fVar4 * fVar9 + 0.0) * fVar5);
  fVar5 = param_3[2] -
          (*(float *)(param_1 + 0x228) +
          ((fVar9 * fVar1 - fVar7 * fVar2) + fVar4 * fVar11 + 0.0) * fVar5);
  fVar5 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar5 * fVar5);
  *param_5 = fVar5;
  fVar5 = -(((fVar5 - *(float *)(param_1 + 0x2e4)) / param_4) * *(float *)(param_1 + 0x2d4) +
           fVar5 * *(float *)(param_1 + 0x2d0));
  param_2[2] = ((fVar8 * fVar1 - fVar6 * fVar2) + fVar4 * fVar10 + 0.0) * fVar5;
  *param_2 = ((fVar10 * fVar2 - fVar8 * fVar3) + fVar4 * fVar6 + 1.0) * fVar5;
  param_2[1] = ((fVar6 * fVar3 - fVar10 * fVar1) + fVar4 * fVar8 + 0.0) * fVar5;
  return param_2;
}



// FUNCTION 1426dab80 FUN_1426dab80 body=161 status=ok
// SIG undefined FUN_1426dab80(void)

undefined8 FUN_1426dab80(longlong param_1,uint param_2,char param_3)

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
      FUN_1426e90c0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1426dac30 FUN_1426dac30 body=161 status=ok
// SIG undefined FUN_1426dac30(void)

undefined8 FUN_1426dac30(longlong param_1,uint param_2,char param_3)

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
      FUN_1426e92d0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1426dace0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
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



// FUNCTION 1426dad90 FUN_1426dad90 body=685 status=ok
// SIG undefined FUN_1426dad90(void)

longlong * FUN_1426dad90(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  wchar_t wVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  wchar_t *pwVar11;
  int iVar12;
  wchar_t *pwVar13;
  bool bVar14;
  wchar_t *local_a8;
  longlong local_98;
  longlong local_90;
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined2 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  
  if (param_1 == (longlong *)0x0) {
LAB_1426dae0f:
    bVar3 = false;
  }
  else {
    lVar6 = FUN_1429c30a0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((!bVar3) || (param_1[0x13] == 0)) || (bVar3 = true, param_1[6] != 0)) goto LAB_1426dae0f;
  }
  local_58 = 0;
  if (*(longlong *)(DAT_146b17150 + 0x7b0) != 0) {
    local_58 = *(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x50);
  }
  local_68 = 0;
  local_78 = &PTR__scalar_deleting_destructor__145086198;
  local_60 = 0;
  local_70 = 0;
  if ((param_4 == '\0') || (local_58 != 0)) {
    pppuVar7 = &local_78;
  }
  else {
    pppuVar7 = (undefined ***)FUN_141672640();
  }
  iVar12 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar12 = 0;
  }
  iVar5 = iVar12 + 1;
  lVar6 = FMemory::Malloc((longlong)iVar5 * 2,0);
  local_90 = lVar6;
  uVar8 = FMemory::Malloc((longlong)iVar5 * 2,0);
  iVar2 = *(int *)(param_3 + 1);
  if (iVar2 == 0) {
    local_a8 = L"";
  }
  else {
    local_a8 = (wchar_t *)*param_3;
  }
  iVar10 = iVar2 + -1;
  local_88 = (wchar_t *)0x0;
  local_7c = 0;
  if (iVar2 == 0) {
    iVar10 = 0;
  }
  if (iVar12 < 0) {
    iVar10 = 0;
  }
  else {
    if (iVar12 < iVar10) {
      iVar10 = iVar12;
    }
    local_80 = iVar10 + 1;
    if (iVar10 != 0) goto LAB_1426daef3;
  }
  local_80 = 0;
LAB_1426daef3:
  pwVar13 = (wchar_t *)0x0;
  bVar14 = local_80 == 0;
  local_98 = lVar6;
  if (0 < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    iVar12 = local_80;
    pwVar13 = local_88;
    bVar14 = local_80 == 0;
    if (0 < local_80) {
      wcsncpy(local_88,local_a8,(longlong)iVar10);
      pwVar13[iVar10] = L'\0';
      bVar14 = iVar12 == 0;
    }
  }
  pwVar11 = L"";
  if (!bVar14) {
    pwVar11 = pwVar13;
  }
  lVar6 = local_90 - (longlong)pwVar11;
  do {
    wVar1 = *pwVar11;
    *(wchar_t *)((longlong)pwVar11 + lVar6) = wVar1;
    pwVar11 = pwVar11 + 1;
  } while (wVar1 != L'\0');
  if (pwVar13 != (wchar_t *)0x0) {
    FMemory::Free(pwVar13);
  }
  cVar4 = FParse::Line(&local_98,uVar8,iVar5,0);
  while (cVar4 != '\0') {
    if ((bVar3) || (param_1[6] != 0)) {
      lVar6 = param_1[5];
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar4 = (**(code **)(lVar6 + 8))(param_1 + 5,uVar9,uVar8,pppuVar7);
      if (cVar4 == '\0') {
        FOutputDevice::LogfImpl(&local_78,L"Command not recognized: %s",uVar8);
      }
    }
    cVar4 = FParse::Line(&local_98,uVar8,iVar5,0);
  }
  FMemory::Free(local_90);
  FMemory::Free(uVar8);
  *param_2 = 0;
  if (param_4 == '\0') {
    *param_2 = local_68;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
  }
  else {
    param_2[1] = 0;
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 1426db040 FUN_1426db040 body=20 status=ok
// SIG undefined FUN_1426db040(void)

void FUN_1426db040(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1426db060 FUN_1426db060 body=7 status=ok
// SIG undefined FUN_1426db060(void)

void FUN_1426db060(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return;
}



// FUNCTION 1426db070 FUN_1426db070 body=324 status=ok
// SIG undefined FUN_1426db070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1426db070(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  longlong local_68 [4];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_40 = 1;
  local_48 = (longlong *)0x0;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_68,0);
  lVar3 = *param_4;
  plVar8 = local_68;
  if (local_48 != (longlong *)0x0) {
    plVar8 = local_48;
  }
  *plVar8 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)FUN_140960ab0(local_80,local_68,param_5);
  lVar3 = *plVar8;
  plVar9 = (longlong *)(lVar3 + 0x10);
  *plVar9 = 0;
  *(undefined4 *)(lVar3 + 0x18) = 0;
  if (((param_2 != plVar9) && ((int)param_2[1] != 0)) &&
     (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
    (**(code **)(*param_2 + 0x30))(param_2,plVar9);
  }
  *(undefined4 *)(lVar3 + 0x20) = param_6;
  lVar3 = *plVar8;
  lVar7 = plVar8[2];
  lVar4 = plVar8[1];
  lVar5 = *(longlong *)(lVar3 + 0x30);
  *param_1 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1409691d0(lVar3,lVar4,(int)lVar7,1);
  plVar8 = local_68;
  iVar6 = (int)local_40;
  if (local_48 != (longlong *)0x0) {
    plVar8 = local_48;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar8 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar8 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar8 = plVar8 + 1;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1426db1c0 FUN_1426db1c0 body=277 status=ok
// SIG undefined FUN_1426db1c0(void)

void FUN_1426db1c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 local_res10 [8];
  
  iVar6 = (int)param_2[1];
  if (*(int *)(param_1 + 0xac) < iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
    iVar6 = (int)param_2[1];
  }
  iVar9 = 0;
  if (0 < iVar6) {
    do {
      lVar4 = param_3[1];
      iVar6 = (int)lVar4 + 1;
      *(int *)(param_3 + 1) = iVar6;
      if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
      }
      *(undefined8 *)(*param_3 + (longlong)(int)lVar4 * 8) = 0;
      plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xf0) + 0x40))();
      lVar5 = param_3[1];
      lVar4 = *param_2;
      uVar1 = *(undefined1 *)(param_1 + 0x49);
      lVar2 = *plVar7;
      lVar3 = *param_3;
      puVar8 = (undefined8 *)FName::FName(local_res10,"PhysXPC",1);
      (**(code **)(lVar2 + 0x10))
                (plVar7,*puVar8,uVar1,(longlong)iVar9 * 0x10 + lVar4,
                 lVar3 + (longlong)((int)lVar5 + -1) * 8);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1426db2e0 FUN_1426db2e0 body=58 status=ok
// SIG undefined FUN_1426db2e0(void)

void FUN_1426db2e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451710c0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145171108;
  }
  return;
}



// FUNCTION 1426db320 FUN_1426db320 body=80 status=ok
// SIG undefined FUN_1426db320(void)

void FUN_1426db320(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145171030;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_145171078;
  }
  return;
}



// FUNCTION 1426db370 FUN_1426db370 body=82 status=ok
// SIG undefined FUN_1426db370(void)

void FUN_1426db370(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145170fa0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_145170fe8;
  }
  return;
}



// FUNCTION 1426db3d0 FUN_1426db3d0 body=206 status=ok
// SIG undefined FUN_1426db3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1426db3d0(byte *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined8 uVar33;
  byte *pbVar34;
  byte bVar35;
  uint uVar36;
  
  uVar33 = uRam0000000146aefe50;
  uVar36 = 0;
  *(undefined8 *)param_1 = _DAT_146aefe48;
  *(undefined8 *)(param_1 + 8) = uVar33;
  uVar33 = uRam0000000146aefe60;
  *(undefined8 *)(param_1 + 0x10) = _DAT_146aefe58;
  *(undefined8 *)(param_1 + 0x18) = uVar33;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (((param_2 + 0x1f < param_1) || (param_1 + 0x1f < param_2)) &&
     ((param_3 + 0x1f < param_1 || (param_1 + 0x1f < param_3)))) {
    pbVar34 = param_2;
    do {
      bVar35 = *pbVar34;
      bVar2 = pbVar34[1];
      bVar3 = pbVar34[2];
      bVar4 = pbVar34[3];
      bVar5 = pbVar34[4];
      bVar6 = pbVar34[5];
      bVar7 = pbVar34[6];
      bVar8 = pbVar34[7];
      bVar9 = pbVar34[8];
      bVar10 = pbVar34[9];
      bVar11 = pbVar34[10];
      bVar12 = pbVar34[0xb];
      bVar13 = pbVar34[0xc];
      bVar14 = pbVar34[0xd];
      bVar15 = pbVar34[0xe];
      bVar16 = pbVar34[0xf];
      uVar36 = uVar36 + 0x10;
      pbVar1 = pbVar34 + ((longlong)param_3 - (longlong)param_2);
      bVar17 = *pbVar1;
      bVar18 = pbVar1[1];
      bVar19 = pbVar1[2];
      bVar20 = pbVar1[3];
      bVar21 = pbVar1[4];
      bVar22 = pbVar1[5];
      bVar23 = pbVar1[6];
      bVar24 = pbVar1[7];
      bVar25 = pbVar1[8];
      bVar26 = pbVar1[9];
      bVar27 = pbVar1[10];
      bVar28 = pbVar1[0xb];
      bVar29 = pbVar1[0xc];
      bVar30 = pbVar1[0xd];
      bVar31 = pbVar1[0xe];
      bVar32 = pbVar1[0xf];
      pbVar34 = pbVar34 + 0x10;
      pbVar1 = pbVar34 + (longlong)(param_1 + (-0x10 - (longlong)param_2));
      *pbVar1 = (bVar17 < bVar35) * bVar17 | (bVar17 >= bVar35) * bVar35;
      pbVar1[1] = (bVar18 < bVar2) * bVar18 | (bVar18 >= bVar2) * bVar2;
      pbVar1[2] = (bVar19 < bVar3) * bVar19 | (bVar19 >= bVar3) * bVar3;
      pbVar1[3] = (bVar20 < bVar4) * bVar20 | (bVar20 >= bVar4) * bVar4;
      pbVar1[4] = (bVar21 < bVar5) * bVar21 | (bVar21 >= bVar5) * bVar5;
      pbVar1[5] = (bVar22 < bVar6) * bVar22 | (bVar22 >= bVar6) * bVar6;
      pbVar1[6] = (bVar23 < bVar7) * bVar23 | (bVar23 >= bVar7) * bVar7;
      pbVar1[7] = (bVar24 < bVar8) * bVar24 | (bVar24 >= bVar8) * bVar8;
      pbVar1[8] = (bVar25 < bVar9) * bVar25 | (bVar25 >= bVar9) * bVar9;
      pbVar1[9] = (bVar26 < bVar10) * bVar26 | (bVar26 >= bVar10) * bVar10;
      pbVar1[10] = (bVar27 < bVar11) * bVar27 | (bVar27 >= bVar11) * bVar11;
      pbVar1[0xb] = (bVar28 < bVar12) * bVar28 | (bVar28 >= bVar12) * bVar12;
      pbVar1[0xc] = (bVar29 < bVar13) * bVar29 | (bVar29 >= bVar13) * bVar13;
      pbVar1[0xd] = (bVar30 < bVar14) * bVar30 | (bVar30 >= bVar14) * bVar14;
      pbVar1[0xe] = (bVar31 < bVar15) * bVar31 | (bVar31 >= bVar15) * bVar15;
      pbVar1[0xf] = (bVar32 < bVar16) * bVar32 | (bVar32 >= bVar16) * bVar16;
    } while (uVar36 < 0x20);
    return param_1;
  }
  pbVar34 = param_2;
  do {
    bVar35 = pbVar34[(longlong)param_3 - (longlong)param_2];
    if (*pbVar34 <= pbVar34[(longlong)param_3 - (longlong)param_2]) {
      bVar35 = *pbVar34;
    }
    uVar36 = uVar36 + 1;
    pbVar34[(longlong)param_1 - (longlong)param_2] = bVar35;
    pbVar34 = pbVar34 + 1;
  } while (uVar36 < 0x20);
  return param_1;
}



// FUNCTION 1426db4a0 FUN_1426db4a0 body=490 status=ok
// SIG undefined FUN_1426db4a0(void)

void FUN_1426db4a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_48 [32];
  
  FUN_1426db1c0(param_1,param_1 + 0x50,param_1 + 0x90,0);
  FUN_1426db1c0(param_1,param_1 + 0x60,param_1 + 0xa0,1);
  if ((*(char *)(param_1 + 0x83) != '\0') && (*(char *)(param_1 + 0x85) == '\0')) {
    plVar14 = (longlong *)(param_1 + 0xb0);
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar11 = iVar4 + 1;
    *(int *)(param_1 + 0xb8) = iVar11;
    if (*(int *)(param_1 + 0xbc) < iVar11) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14);
    }
    *(undefined8 *)(*plVar14 + (longlong)iVar4 * 8) = 0;
    plVar12 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xf0) + 0x40))();
    lVar5 = *plVar14;
    bVar2 = *(byte *)(param_1 + 0x40);
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    lVar6 = *plVar12;
    puVar13 = (undefined8 *)FName::FName(local_res8,"PhysXPC",1);
    cVar10 = (**(code **)(lVar6 + 0x20))
                       (plVar12,*puVar13,uVar3,param_1,param_1 + 0x10,param_1 + 0x20,bVar2 & 1,lVar5
                       );
    if ((cVar10 != '\0') && (*(char *)(param_1 + 0x84) != '\0')) {
      FBodySetupUVInfo::FillFromTriMesh(param_1 + 0xc0,param_1);
    }
  }
  plVar14 = (longlong *)FUN_141d29000(local_48,0,0xff);
  lVar5 = *plVar14;
  plVar12 = (longlong *)(lVar5 + 0x10);
  *plVar12 = 0;
  *(undefined4 *)(lVar5 + 0x18) = 0;
  if (((param_2 != plVar12) && ((int)param_2[1] != 0)) &&
     (plVar7 = (longlong *)*param_2, plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x30))(plVar7,plVar12);
  }
  *(undefined4 *)(lVar5 + 0x20) = 2;
  lVar5 = *plVar14;
  lVar9 = plVar14[2];
  lVar6 = plVar14[1];
  lVar8 = *(longlong *)(lVar5 + 0x30);
  piVar1 = (int *)(lVar8 + 0x48);
  if (lVar8 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res10 = lVar8;
  FUN_1409691d0(lVar5,lVar6,(int)lVar9,1);
  if (lVar8 != 0) {
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FGraphEvent::Recycle(local_res10);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 1426db690 FUN_1426db690 body=315 status=ok
// SIG undefined FUN_1426db690(void)

undefined1 FUN_1426db690(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  
  FUN_1426db1c0(param_1,param_1 + 0x50,param_1 + 0x90,0);
  FUN_1426db1c0(param_1,param_1 + 0x60,param_1 + 0xa0,1);
  if ((*(char *)(param_1 + 0x83) != '\0') && (*(char *)(param_1 + 0x85) == '\0')) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar8 = iVar4 + 1;
    *(int *)(param_1 + 0xb8) = iVar8;
    if (*(int *)(param_1 + 0xbc) < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar4 * 8) = 0;
    plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xf0) + 0x40))();
    lVar5 = *plVar1;
    bVar2 = *(byte *)(param_1 + 0x40);
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    lVar6 = *plVar9;
    puVar10 = (undefined8 *)FName::FName(local_res8,"PhysXPC",1);
    cVar7 = (**(code **)(lVar6 + 0x20))
                      (plVar9,*puVar10,uVar3,param_1,param_1 + 0x10,param_1 + 0x20,bVar2 & 1,lVar5);
    if (cVar7 == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x84) != '\0') {
      FBodySetupUVInfo::FillFromTriMesh(param_1 + 0xc0,param_1);
    }
  }
  return 1;
}



// FUNCTION 1426db7d0 CreateTask body=378 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FPhysXTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__145170f90;
  *(undefined1 *)(plVar8 + 0x15) = 0;
  plVar8[0x16] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 1426db950 FUN_1426db950 body=45 status=ok
// SIG undefined FUN_1426db950(void)

void FUN_1426db950(longlong *param_1)

{
  FUN_142338f40();
                    /* WARNING: Could not recover jumptable at 0x0001426db976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,*(byte *)((longlong)param_1 + 0xba) >> 2 & 1);
  return;
}



// FUNCTION 1426db980 FUN_1426db980 body=667 status=ok
// SIG undefined FUN_1426db980(void)

void FUN_1426db980(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  float fVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
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
  
  puVar2 = (undefined8 *)*param_4;
  lVar5 = 0;
  local_88 = *puVar2;
  uStack_80 = puVar2[1];
  local_78 = puVar2[2];
  uStack_70 = puVar2[3];
  local_68 = puVar2[4];
  uStack_60 = puVar2[5];
  local_58 = *(undefined4 *)(puVar2 + 6);
  uStack_54 = *(undefined4 *)((longlong)puVar2 + 0x34);
  uStack_50 = *(undefined4 *)(puVar2 + 7);
  uStack_4c = *(undefined4 *)((longlong)puVar2 + 0x3c);
  cVar3 = FWeakObjectPtr::IsValid(param_2 + 8);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_2 + 8);
    lVar5 = (**(code **)(*plVar4 + 0x6d0))(plVar4,*(undefined8 *)(param_2 + 0x18),1);
  }
  lVar6 = 0;
  cVar3 = FWeakObjectPtr::IsValid(param_3 + 8);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_3 + 8);
    lVar6 = (**(code **)(*plVar4 + 0x6d0))(plVar4,*(undefined8 *)(param_3 + 0x18),1);
  }
  if ((lVar5 != 0) && (lVar6 != 0)) {
    FUN_142699640(lVar5,&local_b8,&local_88);
    pfVar7 = (float *)FUN_142699060(lVar5,&local_98);
    fVar11 = *pfVar7;
    fVar8 = pfVar7[1];
    fVar1 = pfVar7[2];
    FUN_142699640(lVar6,&local_c8,&local_88);
    pfVar7 = (float *)FUN_142699060(lVar6,&local_98);
    fVar10 = *pfVar7 * 57.295776 - fVar11 * 57.295776;
    fVar9 = pfVar7[1] * 57.295776 - fVar8 * 57.295776;
    fVar8 = pfVar7[2] * 57.295776 - fVar1 * 57.295776;
    fVar11 = ABS((local_c8 - local_b8) * uStack_80._4_4_ + (local_c4 - local_b4) * (float)local_78 +
                 (local_c0 - local_b0) * local_78._4_4_);
    fVar8 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) * 70.0;
    if (fVar11 <= fVar8) {
      fVar11 = fVar8;
    }
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if (((lVar5 != 0) && (param_1[6] != 0)) &&
       (*(float *)(param_1 + 5) <= fVar11 && fVar11 != *(float *)(param_1 + 5))) {
      local_a8 = DAT_1468b5da0;
      local_98 = (undefined4)local_88;
      uStack_94 = local_88._4_4_;
      local_90 = (undefined4)uStack_80;
      local_a0 = DAT_1468b5da8;
      FUN_142458510(lVar5,param_1[6],&local_98,&local_a8,0x3f800000,0x3f800000,0,0,0,0);
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar5 + 0x790);
    }
  }
  return;
}



// FUNCTION 1426dbc20 FUN_1426dbc20 body=162 status=ok
// SIG undefined FUN_1426dbc20(void)

void FUN_1426dbc20(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  
  if (param_4 < *(uint *)(param_1 + 4)) {
    plVar1 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + (ulonglong)param_4 * 2));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x358))
                (plVar1,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                 ,0xa54);
    }
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  FUN_1426dbcd0((longlong)(int)param_4 * 0x58 + 0x100 + param_1,param_2,param_3);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))(plVar1);
  }
  return;
}



// FUNCTION 1426dbcd0 FUN_1426dbcd0 body=185 status=ok
// SIG undefined FUN_1426dbcd0(void)

void FUN_1426dbcd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(byte *)(param_2 + 0xd) < 2) {
    *(undefined1 *)(param_2 + 0xd) = 1;
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_2;
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = param_3;
  }
  else if (*(byte *)(param_2 + 0xd) == 3) {
    *(undefined1 *)(param_2 + 0xd) = 2;
    TArray<FBodyInstance_*,FDefaultAllocator>::RemoveSingle(param_1 + 0x28,&local_res10);
    TArray<FBodyInstance_*,FDefaultAllocator>::RemoveSingle(param_1 + 0x38,&local_res18);
    return;
  }
  return;
}



// FUNCTION 1426dbd90 FUN_1426dbd90 body=162 status=ok
// SIG undefined FUN_1426dbd90(void)

void FUN_1426dbd90(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  
  if (param_4 < *(uint *)(param_1 + 4)) {
    plVar1 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + (ulonglong)param_4 * 2));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x358))
                (plVar1,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                 ,0xa93);
    }
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  FUN_1426dbe40((longlong)(int)param_4 * 0x58 + 0x100 + param_1,param_2,param_3);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))(plVar1);
  }
  return;
}



// FUNCTION 1426dbe40 FUN_1426dbe40 body=189 status=ok
// SIG undefined FUN_1426dbe40(void)

void FUN_1426dbe40(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if ((byte)(*(char *)(param_2 + 0xd) - 2U) < 2) {
    *(undefined1 *)(param_2 + 0xd) = 3;
    iVar1 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar1 + 1;
    if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = param_2;
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = param_3;
  }
  else if (*(char *)(param_2 + 0xd) == '\x01') {
    *(undefined1 *)(param_2 + 0xd) = 4;
    TArray<FBodyInstance_*,FDefaultAllocator>::RemoveSingle(param_1 + 8,&local_res10);
    TArray<FBodyInstance_*,FDefaultAllocator>::RemoveSingle(param_1 + 0x18,&local_res18);
    return;
  }
  return;
}



// FUNCTION 1426dbf00 FUN_1426dbf00 body=178 status=ok
// SIG undefined FUN_1426dbf00(void)

void FUN_1426dbf00(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 < *(uint *)(param_1 + 4)) {
    plVar2 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + (ulonglong)param_3 * 2));
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                 ,0xaa1);
    }
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  param_1 = (longlong)(int)param_3 * 0x58 + param_1;
  iVar1 = *(int *)(param_1 + 0x150);
  *(int *)(param_1 + 0x150) = iVar1 + 1;
  if (*(int *)(param_1 + 0x154) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x148,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8) = param_2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))(plVar2);
  }
  return;
}



// FUNCTION 1426dbfc0 FUN_1426dbfc0 body=80 status=ok
// SIG undefined FUN_1426dbfc0(void)

void FUN_1426dbfc0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(param_1 + 0x310);
  *(int *)(param_1 + 0x310) = iVar2 + 1;
  if (*(int *)(param_1 + 0x314) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x308),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar2 * 0x10);
  *puVar1 = CONCAT44(uStack_14,param_2);
  puVar1[1] = param_3;
  return;
}



// FUNCTION 1426dc010 DeferredPhysResourceCleanup body=479 status=ok
// SIG undefined DeferredPhysResourceCleanup(void)

void DeferredPhysResourceCleanup(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar3 = uVar4;
  uVar5 = uVar4;
  if (0 < DAT_146b089a8) {
    do {
      puVar1 = *(undefined8 **)(DAT_146b089a0 + uVar5 * 8);
      if (((puVar1 != (undefined8 *)0x0) && ((**(code **)*puVar1)(), -1 < (longlong)uVar5)) &&
         ((int)uVar3 < DAT_146b089a8)) {
        *(undefined8 *)(DAT_146b089a0 + uVar5 * 8) = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar5 = uVar5 + 1;
    } while ((int)uVar2 < DAT_146b089a8);
  }
  DAT_146b089a8 = 0;
  if ((DAT_146b089ac < 0) && (DAT_146b089ac != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b089a0,0);
  }
  uVar3 = uVar4;
  uVar5 = uVar4;
  if (0 < DAT_146b08998) {
    do {
      puVar1 = *(undefined8 **)(DAT_146b08990 + uVar5 * 8);
      if (((puVar1 != (undefined8 *)0x0) && ((**(code **)*puVar1)(), -1 < (longlong)uVar5)) &&
         ((int)uVar3 < DAT_146b08998)) {
        *(undefined8 *)(DAT_146b08990 + uVar5 * 8) = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar5 = uVar5 + 1;
    } while ((int)uVar2 < DAT_146b08998);
  }
  DAT_146b08998 = 0;
  if ((DAT_146b0899c < 0) && (DAT_146b0899c != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b08990,0);
  }
  uVar3 = uVar4;
  uVar5 = uVar4;
  if (0 < DAT_146b089b8) {
    do {
      puVar1 = *(undefined8 **)(DAT_146b089b0 + uVar5 * 8);
      if (((puVar1 != (undefined8 *)0x0) && ((**(code **)*puVar1)(), -1 < (longlong)uVar5)) &&
         ((int)uVar3 < DAT_146b089b8)) {
        *(undefined8 *)(DAT_146b089b0 + uVar5 * 8) = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar5 = uVar5 + 1;
    } while ((int)uVar2 < DAT_146b089b8);
  }
  DAT_146b089b8 = 0;
  if ((DAT_146b089bc < 0) && (DAT_146b089bc != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b089b0,0);
  }
  uVar3 = uVar4;
  if (0 < DAT_146b089c8) {
    do {
      puVar1 = *(undefined8 **)(DAT_146b089c0 + uVar3 * 8);
      if (((puVar1 != (undefined8 *)0x0) && ((**(code **)*puVar1)(), -1 < (longlong)uVar3)) &&
         ((int)uVar4 < DAT_146b089c8)) {
        *(undefined8 *)(DAT_146b089c0 + uVar3 * 8) = 0;
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      uVar3 = uVar3 + 1;
    } while ((int)uVar2 < DAT_146b089c8);
  }
  DAT_146b089c8 = 0;
  if ((DAT_146b089cc < 0) && (DAT_146b089cc != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b089c0,0);
    return;
  }
  return;
}



// FUNCTION 1426dc1f0 FUN_1426dc1f0 body=84 status=ok
// SIG undefined FUN_1426dc1f0(void)

void FUN_1426dc1f0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(param_1 + 0x310);
  *(int *)(param_1 + 0x310) = iVar2 + 1;
  if (*(int *)(param_1 + 0x314) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x308),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar2 * 0x10);
  *puVar1 = CONCAT44(uStack_14,param_2);
  puVar1[1] = 0;
  return;
}



// FUNCTION 1426dc250 DeleteGame body=141 status=ok
// SIG undefined DeleteGame(void)

undefined1 FGenericSaveGameSystem::DeleteGame(longlong *param_1,byte param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FUN_1415c3d50();
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,local_18,param_3);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,puVar4,1,0,param_2 ^ 1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1426dc2e0 Destroyed body=47 status=ok
// SIG undefined Destroyed(void)

void APhysicsVolume::Destroyed(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    UWorld::RemovePhysicsVolume(lVar1,param_1);
  }
  FUN_142227880(param_1);
  return;
}



// FUNCTION 1426dc310 DiagnosticMessage body=62 status=ok
// SIG undefined DiagnosticMessage(void)

undefined8 * FEndPhysicsTickFunction::DiagnosticMessage(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FEndPhysicsTickFunction",0x30);
  return param_2;
}



// FUNCTION 1426dc350 DiagnosticMessage body=62 status=ok
// SIG undefined DiagnosticMessage(void)

undefined8 *
FStartAsyncSimulationFunction::DiagnosticMessage(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FStartAsyncSimulationFunction",0x3c);
  return param_2;
}



// FUNCTION 1426dc390 DiagnosticMessage body=62 status=ok
// SIG undefined DiagnosticMessage(void)

undefined8 * FStartPhysicsTickFunction::DiagnosticMessage(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FStartPhysicsTickFunction",0x34);
  return param_2;
}



// FUNCTION 1426dc3f0 FUN_1426dc3f0 body=587 status=ok
// SIG undefined FUN_1426dc3f0(void)

void FUN_1426dc3f0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 local_b8 [152];
  undefined4 local_20;
  
  iVar9 = *(int *)(param_1 + 0x4c0);
  iVar10 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    do {
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x4b8) + lVar12);
      cVar1 = FWeakObjectPtr::IsValid(puVar11 + 1);
      if ((cVar1 != '\0') &&
         (plVar3 = (longlong *)FWeakObjectPtr::Get(puVar11 + 1), plVar3 != (longlong *)0x0)) {
        uVar8 = *(uint *)((longlong)plVar3 + 0xc);
        if ((int)uVar8 < (int)DAT_1469e91c4) {
          uVar2 = uVar8 & 0xffff;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0xffff;
            uVar2 = uVar2 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                  (longlong)(int)uVar2 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) && (plVar3[0x23] != 0)) &&
            ((*(byte *)(plVar3[0x23] + 0x93) & 8) != 0)) &&
           ((cVar1 = FWeakObjectPtr::IsValid(puVar11 + 3), cVar1 != '\0' &&
            (plVar5 = (longlong *)FWeakObjectPtr::Get(puVar11 + 3), plVar5 != (longlong *)0x0)))) {
          uVar8 = *(uint *)((longlong)plVar5 + 0xc);
          if ((int)uVar8 < (int)DAT_1469e91c4) {
            uVar2 = uVar8 & 0xffff;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0xffff;
              uVar2 = uVar2 - 0x10000;
            }
            lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                    (longlong)(int)uVar2 * 0x18;
          }
          else {
            lVar4 = 0;
          }
          if ((((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) && (plVar5[0x23] != 0)) &&
             ((*(byte *)(plVar5[0x23] + 0x93) & 8) != 0)) {
            puVar6 = (undefined4 *)(**(code **)(*plVar3 + 0x6d0))(plVar3,*puVar11,1);
            puVar7 = (undefined4 *)(**(code **)(*plVar5 + 0x6d0))(plVar5,puVar11[2],1);
            if ((puVar6 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) {
              FUN_14237ded0(local_b8,plVar5,*puVar7);
              local_20 = *puVar6;
              uVar8 = *(uint *)(puVar11 + 4);
              if ((uVar8 & 4) != 0) {
                FUN_1423847c0(plVar3,local_b8,1);
                uVar8 = *(uint *)(puVar11 + 4);
              }
              if ((uVar8 & 0x10) != 0) {
                FUN_142389e30(plVar3,local_b8,1,0);
              }
            }
          }
        }
      }
      iVar9 = *(int *)(param_1 + 0x4c0);
      iVar10 = iVar10 + 1;
      lVar12 = lVar12 + 0x28;
    } while (iVar10 < iVar9);
  }
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  if (*(int *)(param_1 + 0x4c4) != iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo();
  }
  return;
}



// FUNCTION 1426dc640 FUN_1426dc640 body=1611 status=ok
// SIG undefined FUN_1426dc640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426dc640(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong local_res10;
  uint local_118;
  uint uStack_114;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  uint *local_c8;
  undefined2 local_c0;
  uint local_b0;
  uint local_a4;
  uint *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  plVar20 = (longlong *)(param_1 + 0x280);
  local_res10 = 3;
  plVar13 = (longlong *)0x0;
  do {
    if ((*(longlong *)(param_1 + 0x50) != 0) &&
       (plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x60), plVar11 != (longlong *)0x0))
    {
      (**(code **)(*plVar11 + 0x278))(plVar11,plVar20);
    }
    iVar14 = (int)plVar20[1];
    plVar11 = plVar13;
    plVar12 = plVar13;
    if (0 < iVar14) {
      do {
        lVar9 = *plVar20;
        if (0 < *(int *)((longlong)plVar11 + lVar9 + 0x50)) {
          if (((*(char *)((longlong)plVar11 + lVar9) != '\0') &&
              (cVar6 = FWeakObjectPtr::IsValid(lVar9 + 0x10 + (longlong)plVar11), cVar6 != '\0')) &&
             (cVar6 = FWeakObjectPtr::IsValid(lVar9 + 0x30 + (longlong)plVar11), cVar6 != '\0')) {
            lVar19 = lVar9 + 8 + (longlong)plVar11;
            cVar6 = FWeakObjectPtr::IsValid(lVar19);
            if (cVar6 != '\0') {
              plVar8 = (longlong *)FWeakObjectPtr::Get(lVar19);
              (**(code **)(*plVar8 + 0x490))
                        (plVar8,lVar19,lVar9 + 0x28 + (longlong)plVar11,
                         lVar9 + 0x48 + (longlong)plVar11);
            }
          }
          if (((*(char *)((longlong)plVar11 + lVar9 + 1) != '\0') &&
              (cVar6 = FWeakObjectPtr::IsValid(lVar9 + 0x10 + (longlong)plVar11), cVar6 != '\0')) &&
             (cVar6 = FWeakObjectPtr::IsValid(lVar9 + 0x30 + (longlong)plVar11), cVar6 != '\0')) {
            lVar19 = lVar9 + 0x28 + (longlong)plVar11;
            cVar6 = FWeakObjectPtr::IsValid(lVar19);
            if (cVar6 != '\0') {
              plVar8 = plVar13;
              plVar17 = plVar13;
              if (0 < *(int *)((longlong)plVar11 + lVar9 + 0x50)) {
                do {
                  lVar2 = *(longlong *)((longlong)plVar11 + lVar9 + 0x48);
                  uVar10 = (int)plVar8 + 1;
                  uVar3 = *(undefined8 *)((longlong)plVar17 + lVar2 + 0x20);
                  local_b0 = *(uint *)((longlong)plVar17 + lVar2 + 0x14) ^ 0x80000000;
                  *(undefined8 *)((longlong)plVar17 + lVar2 + 0x20) =
                       *(undefined8 *)((longlong)plVar17 + lVar2 + 0x28);
                  *(undefined8 *)((longlong)plVar17 + lVar2 + 0x28) = uVar3;
                  *(ulonglong *)((longlong)plVar17 + lVar2 + 0xc) =
                       CONCAT44(*(undefined4 *)((longlong)plVar17 + lVar2 + 0x10),
                                *(undefined4 *)((longlong)plVar17 + lVar2 + 0xc)) ^
                       0x8000000080000000;
                  *(uint *)((longlong)plVar17 + lVar2 + 0x14) = local_b0;
                  local_a4 = *(uint *)((longlong)plVar17 + lVar2 + 0x38) ^ 0x80000000;
                  *(ulonglong *)((longlong)plVar17 + lVar2 + 0x30) =
                       CONCAT44(*(undefined4 *)((longlong)plVar17 + lVar2 + 0x34),
                                *(undefined4 *)((longlong)plVar17 + lVar2 + 0x30)) ^
                       0x8000000080000000;
                  *(uint *)((longlong)plVar17 + lVar2 + 0x38) = local_a4;
                  plVar8 = (longlong *)(ulonglong)uVar10;
                  plVar17 = plVar17 + 8;
                } while ((int)uVar10 < *(int *)((longlong)plVar11 + lVar9 + 0x50));
              }
              plVar8 = (longlong *)FWeakObjectPtr::Get(lVar19);
              (**(code **)(*plVar8 + 0x490))
                        (plVar8,lVar19,lVar9 + 8 + (longlong)plVar11,
                         (longlong)plVar11 + lVar9 + 0x48);
            }
          }
        }
        iVar14 = (int)plVar20[1];
        uVar10 = (int)plVar12 + 1;
        plVar11 = plVar11 + 0xe;
        plVar12 = (longlong *)(ulonglong)uVar10;
      } while ((int)uVar10 < iVar14);
    }
    iVar7 = *(int *)((longlong)plVar20 + 0xc);
    if (iVar7 < 0) {
      if (iVar14 != 0) {
        plVar11 = (longlong *)(*plVar20 + 0x48);
        do {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 0xe;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        iVar7 = *(int *)((longlong)plVar20 + 0xc);
      }
      *(undefined4 *)(plVar20 + 1) = 0;
      if (iVar7 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar20,0);
      }
    }
    else {
      if (iVar14 != 0) {
        plVar11 = (longlong *)(*plVar20 + 0x48);
        do {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 0xe;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      *(undefined4 *)(plVar20 + 1) = 0;
    }
    plVar20 = plVar20 + 2;
    local_res10 = local_res10 + -1;
  } while (local_res10 != 0);
  puVar18 = (uint *)(param_1 + 0x378);
  local_res10 = 3;
  do {
    uVar10 = puVar18[6];
    local_118 = 0;
    uStack_114 = 1;
    uStack_104 = 0;
    uStack_100 = 0;
    if (uVar10 != 0) {
      puVar16 = *(uint **)(puVar18 + 4);
      if (*(uint **)(puVar18 + 4) == (uint *)0x0) {
        puVar16 = puVar18;
      }
      uVar1 = *puVar16;
      plVar20 = plVar13;
      plVar11 = plVar13;
      while (uVar1 == 0) {
        iVar14 = (int)plVar20;
        uStack_100 = (int)plVar11 + 0x20;
        plVar11 = (longlong *)(ulonglong)uStack_100;
        local_118 = iVar14 + 1;
        plVar20 = (longlong *)(ulonglong)local_118;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
        goto LAB_1426dc995;
        uVar1 = puVar16[(longlong)iVar14 + 1];
      }
      uStack_114 = -uVar1 & uVar1;
      iVar14 = 0x1f;
      if (uStack_114 != 0) {
        for (; uStack_114 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uStack_114 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_104 = (uStack_100 - iVar14) + 0x1f;
      if ((int)uVar10 < (int)uStack_104) {
LAB_1426dc995:
        uStack_104 = uVar10;
      }
    }
    uStack_e0 = CONCAT44(uStack_104,0xffffffff);
    auStack_88._8_4_ = uStack_100;
    auStack_88._0_8_ = uStack_e0;
    auStack_88._12_4_ = uStack_fc;
    puVar16 = puVar18 + -4;
    local_c0 = 0;
    uStack_f0 = CONCAT44(uStack_114,local_118);
    local_58._8_4_ = SUB84(puVar16,0);
    local_58._12_4_ = (undefined4)((ulonglong)puVar16 >> 0x20);
    local_d8._8_4_ = local_58._8_4_;
    local_d8._0_8_ = auStack_88._8_8_;
    local_d8._12_4_ = local_58._12_4_;
    local_58._0_8_ = auStack_88._8_8_;
    local_e8 = puVar18;
    local_c8 = puVar16;
    local_a0 = puVar16;
    uStack_98 = uStack_f0;
    puStack_90 = puVar18;
    if ((int)uStack_104 < (int)uVar10) {
      do {
        piVar4 = *(int **)(*(longlong *)(*(longlong *)puVar16 + (longlong)(int)uStack_104 * 0x18) +
                          0x10);
        if (((piVar4 != (int *)0x0) && (*piVar4 == 1)) &&
           ((lVar9 = *(longlong *)(piVar4 + 2), lVar9 != 0 &&
            (lVar19 = FWeakObjectPtr::Get(lVar9 + 0x138), lVar19 != 0)))) {
          lVar9 = FWeakObjectPtr::Get(lVar9 + 0x140);
          FUN_142389c30(lVar19,*(undefined4 *)
                                (*(longlong *)puVar16 + 8 + (longlong)(int)uStack_104 * 0x18),
                        *(undefined8 *)(lVar9 + 0x90));
        }
        uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
        uStack_104 = uStack_e0._4_4_;
      } while ((int)uStack_e0._4_4_ < (int)local_e8[6]);
      if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_c8,local_c8[2] - local_c8[0xd],1);
      }
    }
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(puVar16,0);
    puVar18 = puVar18 + 0x14;
    local_res10 = local_res10 + -1;
    if (local_res10 == 0) {
      lVar9 = 3;
      plVar20 = (longlong *)(param_1 + 0x2b0);
      do {
        plVar12 = (longlong *)*plVar20;
        uVar15 = (ulonglong)(int)plVar20[1];
        plVar11 = plVar12 + uVar15 * 3;
        if (plVar12 != plVar11) {
          do {
            lVar19 = plVar12[2];
            if ((((int)plVar12[1] != 0) && ((longlong *)*plVar12 != (longlong *)0x0)) &&
               (cVar6 = (**(code **)(*(longlong *)*plVar12 + 0x18))(), cVar6 != '\0')) {
              plVar8 = plVar13;
              if ((int)plVar12[1] != 0) {
                plVar8 = (longlong *)*plVar12;
              }
              (**(code **)(*plVar8 + 0x40))(plVar8,(int)lVar19);
            }
            plVar12 = plVar12 + 3;
          } while (plVar12 != plVar11);
          uVar15 = (ulonglong)*(uint *)(plVar20 + 1);
          plVar12 = (longlong *)*plVar20;
        }
        uVar10 = (uint)uVar15;
        while (uVar10 != 0) {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar12);
          plVar12 = plVar12 + 3;
          uVar10 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar10;
        }
        *(undefined4 *)(plVar20 + 1) = 0;
        if (*(int *)((longlong)plVar20 + 0xc) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(plVar20,0);
        }
        plVar20 = plVar20 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      FUN_1426dc3f0(param_1);
      bVar5 = false;
      DAT_146534a54 = DAT_146534a54 + 1;
      lVar9 = (longlong)(DAT_146534a48 + -1);
      if (-1 < DAT_146534a48 + -1) {
        lVar19 = lVar9 << 4;
        bVar5 = false;
        do {
          if (((*(int *)(lVar19 + 8 + DAT_146534a40) == 0) ||
              (plVar20 = *(longlong **)(lVar19 + DAT_146534a40), plVar20 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar20 + 0x40))(plVar20,param_1), cVar6 == '\0')) {
            bVar5 = true;
          }
          lVar19 = lVar19 + -0x10;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
      iVar14 = DAT_146534a48;
      DAT_146534a54 = DAT_146534a54 + -1;
      if ((bVar5) && (DAT_146534a54 < 1)) {
        plVar20 = plVar13;
        if (0 < DAT_146534a48) {
          do {
            if (((*(int *)((longlong)plVar13 + DAT_146534a40 + 8) == 0) ||
                (*(longlong **)((longlong)plVar13 + DAT_146534a40) == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(**(longlong **)((longlong)plVar13 + DAT_146534a40) + 0x10))(),
               cVar6 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534a40,plVar20,1,1);
            }
            else {
              plVar20 = (longlong *)(ulonglong)((int)plVar20 + 1);
              plVar13 = plVar13 + 2;
            }
          } while ((int)plVar20 < DAT_146534a48);
        }
        _DAT_146534a50 = DAT_146534a48 * 2;
        if (_DAT_146534a50 < 3) {
          _DAT_146534a50 = 2;
        }
        if ((_DAT_146534a50 < iVar14) && (DAT_146534a4c != DAT_146534a48)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534a40);
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 1426dcc90 FUN_1426dcc90 body=3183 status=ok
// SIG undefined FUN_1426dcc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426dcc90(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_7b8 [32];
  double local_798;
  undefined2 *local_788;
  undefined8 local_780;
  undefined2 *local_778;
  undefined8 local_770;
  undefined4 local_768 [2];
  ulonglong local_760;
  longlong local_758 [2];
  undefined2 *local_748;
  int local_740;
  undefined4 local_73c;
  undefined2 *local_738;
  int local_730;
  undefined4 local_72c;
  void *local_728;
  int local_720;
  longlong *local_718;
  void *local_710;
  int local_708;
  void *local_700;
  int local_6f8;
  void *local_6f0;
  int local_6e8;
  void *local_6e0;
  int local_6d8;
  void *local_6d0;
  int local_6c8;
  float local_6b8;
  float local_6b4;
  float local_6b0;
  float local_6ac;
  float local_6a8;
  float local_6a4;
  float local_6a0;
  float local_688;
  longlong local_a0;
  longlong local_90;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_7b8;
  (**(code **)(*param_1 + 0x720))(param_1,&local_6b8);
  plVar16 = (longlong *)(param_2 + 0x98);
  local_758[0] = 0x3f8000003f800000;
  local_758[1] = 0x3f8000003f800000;
  local_718 = plVar16;
  (**(code **)(*plVar16 + 0x20))(plVar16,local_758);
  local_768[0] = 0;
  local_760 = *(ulonglong *)(param_1[0x232] + 0x18);
  FName::ToString(&local_760,&local_778);
  puVar14 = &DAT_143f3eda8;
  if ((int)local_770 != 0) {
    puVar14 = local_778;
  }
  puVar13 = (undefined8 *)FName::ToString(param_1 + 0x8d,local_758);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar13;
  }
  FString::PrintfImpl(&local_728,L"   Camera Style:%s main ViewTarget:%s",puVar17,puVar14);
  uVar9 = FUN_1428a6fb0(plVar16,&local_728,local_768);
  if (local_728 != (void *)0x0) {
    uVar9 = FMemory::Free();
  }
  if (local_758[0] != 0) {
    uVar9 = FMemory::Free();
  }
  if (local_778 != (undefined2 *)0x0) {
    uVar9 = FMemory::Free();
  }
  fVar1 = (float)DAT_146b08a50;
  fVar2 = DAT_146b08a50._4_4_;
  fVar3 = DAT_146b08a50._8_4_;
  fVar4 = DAT_146b08a50._12_4_;
  auVar19._4_4_ = local_6a8;
  auVar19._0_4_ = local_6ac;
  auVar19._8_4_ = local_6a4;
  auVar19._12_4_ = 0;
  local_768[0] = 0x38d1b717;
  auVar19 = divps(auVar19,_DAT_146b08a50);
  local_760 = local_760 & 0xffffffff00000000;
  fVar21 = local_6ac - (float)(int)auVar19._0_4_ * fVar1;
  fVar22 = local_6a8 - (float)(int)auVar19._4_4_ * fVar2;
  fVar23 = local_6a4 - (float)(int)auVar19._8_4_ * fVar3;
  fVar24 = 0.0 - (float)(int)auVar19._12_4_ * fVar4;
  fVar21 = (float)(((uint)(fVar21 + fVar1) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                  (uint)(fVar21 + fVar1));
  fVar22 = (float)(((uint)(fVar22 + fVar2) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                  (uint)(fVar22 + fVar2));
  fVar23 = (float)(((uint)(fVar23 + fVar3) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                  (uint)(fVar23 + fVar3));
  fVar24 = (float)(((uint)(fVar24 + fVar4) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                  (uint)(fVar24 + fVar4));
  auVar20._4_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar22 - fVar2) ^ (uint)fVar22) &
                                 -(uint)(fRam0000000146b08a44 < fVar22) ^ (uint)fVar22) &
                               uRam0000000146b084d4));
  auVar20._0_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar21 - fVar1) ^ (uint)fVar21) &
                                 -(uint)(_DAT_146b08a40 < fVar21) ^ (uint)fVar21) & _DAT_146b084d0))
  ;
  auVar20._8_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar23 - fVar3) ^ (uint)fVar23) &
                                 -(uint)(fRam0000000146b08a48 < fVar23) ^ (uint)fVar23) &
                               uRam0000000146b084d8));
  auVar20._12_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar24 - fVar4) ^ (uint)fVar24) &
                                 -(uint)(fRam0000000146b08a4c < fVar24) ^ (uint)fVar24) &
                               uRam0000000146b084dc));
  iVar10 = movmskps(uVar9,auVar20);
  if (iVar10 == 0) {
    FString::PrintfImpl(&local_738,L"R(0)");
  }
  else {
    local_788 = (undefined2 *)0x0;
    local_780 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,0);
    puVar14 = local_788;
    FGenericPlatformString::Memcpy(local_788,&DAT_145010374,6);
    bVar5 = true;
    iVar10 = 0;
    if (1e-08 < ABS(local_6ac)) {
      FString::PrintfImpl(&local_710,L"P=%.2f",(double)local_6ac);
      pvVar8 = local_710;
      uVar6 = local_780;
      iVar18 = iVar10;
      if (local_708 != 0) {
        iVar18 = local_708 + -1;
      }
      if (iVar18 != 0) {
        iVar12 = (int)local_780;
        lVar15 = (longlong)(int)local_780;
        iVar11 = (uint)((int)local_780 == 0) + (int)local_780 + iVar18;
        local_780 = CONCAT44(local_780._4_4_,iVar11);
        if (local_780._4_4_ < iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
          puVar14 = local_788;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar14 + (lVar15 - (ulonglong)(iVar12 != 0)),pvVar8,(longlong)iVar18 * 2);
        (puVar14 + (lVar15 - (ulonglong)(iVar12 != 0)))[iVar18] = 0;
      }
      if (local_710 != (void *)0x0) {
        FMemory::Free(local_710);
      }
      bVar5 = false;
    }
    if (1e-08 < ABS(local_6a8)) {
      if (!bVar5) {
        local_778 = (undefined2 *)0x0;
        local_770 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_778,0);
        puVar17 = local_778;
        FGenericPlatformString::Memcpy(local_778,&DAT_144063aa8,6);
        uVar6 = local_780;
        if (((int)local_770 != 0) && (iVar18 = (int)local_770 + -1, iVar18 != 0)) {
          iVar12 = (int)local_780;
          lVar15 = (longlong)(int)local_780;
          iVar11 = (uint)((int)local_780 == 0) + (int)local_780 + iVar18;
          local_780 = CONCAT44(local_780._4_4_,iVar11);
          if (local_780._4_4_ < iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
            puVar14 = local_788;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar14 + (lVar15 - (ulonglong)(iVar12 != 0)),puVar17,(longlong)iVar18 * 2);
          (puVar14 + (lVar15 - (ulonglong)(iVar12 != 0)))[iVar18] = 0;
        }
        if (puVar17 != (undefined2 *)0x0) {
          FMemory::Free(puVar17);
        }
      }
      FString::PrintfImpl(&local_700,L"Y=%.2f",(double)local_6a8);
      pvVar8 = local_700;
      uVar6 = local_780;
      iVar18 = iVar10;
      if (local_6f8 != 0) {
        iVar18 = local_6f8 + -1;
      }
      if (iVar18 != 0) {
        iVar12 = (int)local_780;
        lVar15 = (longlong)(int)local_780;
        iVar11 = (uint)((int)local_780 == 0) + (int)local_780 + iVar18;
        local_780 = CONCAT44(local_780._4_4_,iVar11);
        if (local_780._4_4_ < iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
          puVar14 = local_788;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar14 + (lVar15 - (ulonglong)(iVar12 != 0)),pvVar8,(longlong)iVar18 * 2);
        (puVar14 + (lVar15 - (ulonglong)(iVar12 != 0)))[iVar18] = 0;
      }
      if (local_700 != (void *)0x0) {
        FMemory::Free(local_700);
      }
      bVar5 = false;
    }
    if (1e-08 < ABS(local_6a4)) {
      if (!bVar5) {
        local_778 = (undefined2 *)0x0;
        local_770 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_778,0);
        puVar17 = local_778;
        FGenericPlatformString::Memcpy(local_778,&DAT_144063aa8,6);
        uVar6 = local_780;
        if (((int)local_770 != 0) && (iVar18 = (int)local_770 + -1, iVar18 != 0)) {
          iVar12 = (int)local_780;
          lVar15 = (longlong)(int)local_780;
          iVar11 = (uint)((int)local_780 == 0) + (int)local_780 + iVar18;
          local_780 = CONCAT44(local_780._4_4_,iVar11);
          if (local_780._4_4_ < iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
            puVar14 = local_788;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar14 + (lVar15 - (ulonglong)(iVar12 != 0)),puVar17,(longlong)iVar18 * 2);
          (puVar14 + (lVar15 - (ulonglong)(iVar12 != 0)))[iVar18] = 0;
        }
        if (puVar17 != (undefined2 *)0x0) {
          FMemory::Free(puVar17);
        }
      }
      FString::PrintfImpl(&local_6f0,L"R=%.2f",(double)local_6a4);
      pvVar8 = local_6f0;
      uVar6 = local_780;
      if (local_6e8 != 0) {
        iVar10 = local_6e8 + -1;
      }
      if (iVar10 != 0) {
        iVar18 = (int)local_780;
        lVar15 = (longlong)(int)local_780;
        iVar12 = (uint)((int)local_780 == 0) + (int)local_780 + iVar10;
        local_780 = CONCAT44(local_780._4_4_,iVar12);
        if (local_780._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
          puVar14 = local_788;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar14 + (lVar15 - (ulonglong)(iVar18 != 0)),pvVar8,(longlong)iVar10 * 2);
        (puVar14 + (lVar15 - (ulonglong)(iVar18 != 0)))[iVar10] = 0;
      }
      if (local_6f0 != (void *)0x0) {
        FMemory::Free(local_6f0);
      }
    }
    local_778 = (undefined2 *)0x0;
    local_770 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_778,0);
    puVar17 = local_778;
    FGenericPlatformString::Memcpy(local_778,&DAT_144063ad0,4);
    uVar6 = local_780;
    if (((int)local_770 != 0) && (iVar10 = (int)local_770 + -1, iVar10 != 0)) {
      iVar18 = (int)local_780;
      lVar15 = (longlong)(int)local_780;
      iVar12 = (uint)((int)local_780 == 0) + iVar10 + (int)local_780;
      local_780 = CONCAT44(local_780._4_4_,iVar12);
      if (local_780._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
        puVar14 = local_788;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar14 + (lVar15 - (ulonglong)(iVar18 != 0)),puVar17,(longlong)iVar10 * 2);
      (puVar14 + (lVar15 - (ulonglong)(iVar18 != 0)))[iVar10] = 0;
    }
    if (puVar17 != (undefined2 *)0x0) {
      FMemory::Free(puVar17);
    }
    local_730 = (int)local_780;
    local_72c = local_780._4_4_;
    local_738 = puVar14;
  }
  puVar14 = &DAT_143f3eda8;
  if (local_730 != 0) {
    puVar14 = local_738;
  }
  if (((0.0001 < ABS(local_6b8)) || (0.0001 < ABS(local_6b4))) || (0.0001 < ABS(local_6b0))) {
    local_780 = 3;
    local_788 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,0);
    puVar17 = local_788;
    FGenericPlatformString::Memcpy(local_788,&DAT_144063a8c,6);
    bVar5 = true;
    if (1e-08 < ABS(local_6b8)) {
      FString::PrintfImpl(&local_6e0,L"X=%.2f",(double)local_6b8);
      pvVar8 = local_6e0;
      uVar6 = local_780;
      iVar10 = 0;
      if (local_6d8 != 0) {
        iVar10 = local_6d8 + -1;
      }
      if (iVar10 != 0) {
        iVar18 = (int)local_780;
        lVar15 = (longlong)(int)local_780;
        iVar12 = (uint)((int)local_780 == 0) + iVar10 + (int)local_780;
        local_780 = CONCAT44(local_780._4_4_,iVar12);
        if (local_780._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
          puVar17 = local_788;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)),pvVar8,(longlong)iVar10 * 2);
        (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)))[iVar10] = 0;
      }
      if (local_6e0 != (void *)0x0) {
        FMemory::Free(local_6e0);
      }
      bVar5 = false;
    }
    if (1e-08 < ABS(local_6b4)) {
      if (!bVar5) {
        local_778 = (undefined2 *)0x0;
        local_770 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_778,0);
        puVar7 = local_778;
        FGenericPlatformString::Memcpy(local_778,&DAT_144063aa8,6);
        uVar6 = local_780;
        if (((int)local_770 != 0) && (iVar10 = (int)local_770 + -1, iVar10 != 0)) {
          iVar18 = (int)local_780;
          lVar15 = (longlong)(int)local_780;
          iVar12 = (uint)((int)local_780 == 0) + iVar10 + (int)local_780;
          local_780 = CONCAT44(local_780._4_4_,iVar12);
          if (local_780._4_4_ < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
            puVar17 = local_788;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)),puVar7,(longlong)iVar10 * 2);
          (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)))[iVar10] = 0;
        }
        if (puVar7 != (undefined2 *)0x0) {
          FMemory::Free(puVar7);
        }
      }
      FString::PrintfImpl(&local_6d0,L"Y=%.2f",(double)local_6b4);
      pvVar8 = local_6d0;
      uVar6 = local_780;
      iVar10 = 0;
      if (local_6c8 != 0) {
        iVar10 = local_6c8 + -1;
      }
      if (iVar10 != 0) {
        iVar18 = (int)local_780;
        lVar15 = (longlong)(int)local_780;
        iVar12 = (uint)((int)local_780 == 0) + iVar10 + (int)local_780;
        local_780 = CONCAT44(local_780._4_4_,iVar12);
        if (local_780._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
          puVar17 = local_788;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)),pvVar8,(longlong)iVar10 * 2);
        (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)))[iVar10] = 0;
      }
      if (local_6d0 != (void *)0x0) {
        FMemory::Free(local_6d0);
      }
      bVar5 = false;
    }
    if (1e-08 < ABS(local_6b0)) {
      if (!bVar5) {
        local_770 = 3;
        local_778 = (undefined2 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_778,0);
        puVar7 = local_778;
        FGenericPlatformString::Memcpy(local_778,&DAT_144063aa8,6);
        uVar6 = local_780;
        if (((int)local_770 != 0) && (iVar10 = (int)local_770 + -1, iVar10 != 0)) {
          iVar18 = (int)local_780;
          lVar15 = (longlong)(int)local_780;
          iVar12 = (uint)((int)local_780 == 0) + iVar10 + (int)local_780;
          local_780 = CONCAT44(local_780._4_4_,iVar12);
          if (local_780._4_4_ < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
            puVar17 = local_788;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)),puVar7,(longlong)iVar10 * 2);
          (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)))[iVar10] = 0;
        }
        if (puVar7 != (undefined2 *)0x0) {
          FMemory::Free(puVar7);
        }
      }
      FString::PrintfImpl(&local_728,L"Z=%.2f",(double)local_6b0);
      pvVar8 = local_728;
      uVar6 = local_780;
      if (local_720 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_720 + -1;
      }
      if (iVar10 != 0) {
        iVar18 = (int)local_780;
        lVar15 = (longlong)(int)local_780;
        iVar12 = (uint)((int)local_780 == 0) + iVar10 + (int)local_780;
        local_780 = CONCAT44(local_780._4_4_,iVar12);
        if (local_780._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
          puVar17 = local_788;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)),pvVar8,(longlong)iVar10 * 2);
        (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)))[iVar10] = 0;
      }
      if (local_728 != (void *)0x0) {
        FMemory::Free(local_728);
      }
    }
    local_770 = 2;
    local_778 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_778,0);
    puVar7 = local_778;
    FGenericPlatformString::Memcpy(local_778,&DAT_144063ad0,4);
    uVar6 = local_780;
    if (((int)local_770 != 0) && (iVar10 = (int)local_770 + -1, iVar10 != 0)) {
      iVar18 = (int)local_780;
      lVar15 = (longlong)(int)local_780;
      iVar12 = (uint)((int)local_780 == 0) + iVar10 + (int)local_780;
      local_780 = CONCAT44(local_780._4_4_,iVar12);
      if (local_780._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,uVar6 & 0xffffffff);
        puVar17 = local_788;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)),puVar7,(longlong)iVar10 * 2);
      (puVar17 + (lVar15 - (ulonglong)(iVar18 != 0)))[iVar10] = 0;
    }
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
    local_740 = (int)local_780;
    local_73c = local_780._4_4_;
    local_748 = puVar17;
  }
  else {
    FString::PrintfImpl(local_758 + 2,L"V(0)");
  }
  local_798 = (double)local_6a0;
  puVar17 = &DAT_143f3eda8;
  if (local_740 != 0) {
    puVar17 = local_748;
  }
  FString::PrintfImpl(local_758,L"   CamLoc:%s CamRot:%s FOV:%f",puVar17,puVar14);
  plVar16 = local_718;
  FUN_1428a6fb0(local_718,local_758,&local_760);
  if (local_758[0] != 0) {
    FMemory::Free();
  }
  if (local_748 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_738 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_760 = local_760 & 0xffffffff00000000;
  FString::PrintfImpl(local_758,L"   AspectRatio: %1.3f",(double)local_688);
  FUN_1428a6fb0(plVar16,local_758,&local_760);
  if (local_758[0] != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426dd900 FUN_1426dd900 body=1151 status=ok
// SIG undefined FUN_1426dd900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426dd900(longlong *param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  float _X;
  float fVar6;
  undefined1 auStack_6e8 [40];
  float local_6c0;
  undefined1 local_6b8 [1560];
  longlong local_a0;
  longlong local_90;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_6e8;
  FUN_1426d3f40(local_6b8,param_1 + 0x234);
  if ((*(byte *)(param_1 + 0x588) & 0x20) != 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar6 = (*(float *)(lVar3 + 0x790) - *(float *)(param_1 + 0x98)) /
            *(float *)((longlong)param_1 + 0x4bc);
    if (0.0 <= fVar6) {
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
    }
    else {
      fVar6 = 0.0;
    }
    local_6c0 = (*(float *)((longlong)param_1 + 0x4ac) - *(float *)(param_1 + 0x97)) * fVar6 +
                *(float *)(param_1 + 0x97);
    param_1[0x93] =
         CONCAT44((*(float *)(param_1 + 0x95) - *(float *)((longlong)param_1 + 0x4b4)) * fVar6 +
                  *(float *)((longlong)param_1 + 0x4b4),
                  (*(float *)((longlong)param_1 + 0x4a4) - *(float *)(param_1 + 0x96)) * fVar6 +
                  *(float *)(param_1 + 0x96));
    *(float *)(param_1 + 0x94) = local_6c0;
    if (fVar6 == 1.0) {
      *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) & 0xffffffdf;
    }
  }
  plVar1 = param_1 + 0x300;
  if ((*plVar1 == 0) || ((*(byte *)(param_1 + 0x3d0) & 1) == 0)) {
    FUN_1426da4d0(param_1 + 0x232,param_1[0x8b]);
    (**(code **)(*param_1 + 0x7e8))(param_1,param_1 + 0x232,param_2);
  }
  FUN_1426d5e10(local_6b8,param_1 + 0x234);
  uVar5 = 0;
  if (*plVar1 != 0) {
    *(float *)(param_1 + 0x3ce) = *(float *)(param_1 + 0x3ce) - param_2;
    FUN_1426da4d0(plVar1,param_1[0x8b]);
    (**(code **)(*param_1 + 0x7e8))(param_1,plVar1,param_2);
    if (*(float *)(param_1 + 0x3ce) <= 0.0) {
      param_1[0x232] = *plVar1;
      FUN_1426d5e10(param_1 + 0x234,param_1 + 0x302);
      param_1[0x2fe] = param_1[0x3cc];
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x3ce) = 0;
      FUN_1426d5e10(local_6b8,param_1 + 0x302);
    }
    else {
      cVar2 = (char)param_1[0x3cf];
      _X = (*(float *)((longlong)param_1 + 0x1e74) - *(float *)(param_1 + 0x3ce)) /
           *(float *)((longlong)param_1 + 0x1e74);
      fVar6 = _X;
      if (cVar2 != '\0') {
        if (cVar2 == '\x01') {
          fVar6 = _X * _X * _X;
          fVar6 = _X * _X * 3.0 - (fVar6 + fVar6);
        }
        else if (cVar2 == '\x02') {
          fVar6 = _guard_xfg_dispatch_icall_nop(_X,*(float *)((longlong)param_1 + 0x1e7c));
        }
        else if (cVar2 == '\x03') {
          fVar6 = _guard_xfg_dispatch_icall_nop(_X,1.0 / *(float *)((longlong)param_1 + 0x1e7c));
        }
        else {
          fVar6 = 0.0;
          if (cVar2 == '\x04') {
            if (0.5 <= _X) {
              fVar6 = _guard_xfg_dispatch_icall_nop
                                (1.0 - ((_X + _X) - 1.0),*(float *)((longlong)param_1 + 0x1e7c));
              fVar6 = ((1.0 - fVar6) + 1.0) * 0.5;
            }
            else {
              fVar6 = _guard_xfg_dispatch_icall_nop(_X + _X,*(float *)((longlong)param_1 + 0x1e7c));
              fVar6 = fVar6 * 0.5;
            }
          }
        }
      }
      FUN_1426d5e10(local_6b8,param_1 + 0x234);
      FUN_142302500(local_6b8,param_1 + 0x302,fVar6);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x588);
  if ((uVar4 & 4) != 0) {
    if ((uVar4 >> 0xd & 1) != 0) {
      param_2 = *(float *)(param_1 + 0x573) - param_2;
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      *(float *)(param_1 + 0x573) = param_2;
      if (0.0 < *(float *)((longlong)param_1 + 0x2b94)) {
        *(float *)((longlong)param_1 + 0x494) =
             (1.0 - param_2 / *(float *)((longlong)param_1 + 0x2b94)) *
             (*(float *)(param_1 + 0x572) - *(float *)((longlong)param_1 + 0x2b8c)) +
             *(float *)((longlong)param_1 + 0x2b8c);
      }
      if (((uVar4 >> 0xc & 1) == 0) && (param_2 <= 0.0)) {
        (**(code **)(*param_1 + 0x858))(param_1);
        uVar4 = *(uint *)(param_1 + 0x588);
      }
    }
    if ((uVar4 & 8) != 0) {
      (**(code **)(*param_1 + 0x7d8))(param_1);
    }
  }
  cVar2 = (**(code **)(*param_1 + 2000))(param_1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x7c0))(param_1,local_6b8);
    if (((*(uint *)(param_1 + 0x588) >> 10 & 1) != 0) || (cVar2 != '\0')) {
      uVar5 = 0x400;
    }
    *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) & 0xfffffbff | uVar5;
  }
  FUN_1426e0ae0(param_1,local_6b8);
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426ddd80 DoesSaveGameExist body=20 status=ok
// SIG undefined DoesSaveGameExist(void)

bool FGenericSaveGameSystem::DoesSaveGameExist(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  return iVar1 == 0;
}



// FUNCTION 1426ddda0 DoesSaveGameExistWithResult body=121 status=ok
// SIG undefined DoesSaveGameExistWithResult(void)

bool FGenericSaveGameSystem::DoesSaveGameExistWithResult(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_1415c3d50();
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  lVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,puVar4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return lVar3 < 0;
}



// FUNCTION 1426dde20 FUN_1426dde20 body=858 status=ok
// SIG undefined FUN_1426dde20(void)

void FUN_1426dde20(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined2 local_res10 [4];
  uint local_c8;
  uint uStack_c4;
  undefined *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined2 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 *local_30;
  
  uVar13 = 0;
  local_c8 = 0;
  uStack_c4 = 1;
  puStack_c0 = &DAT_146534a80;
  iStack_b4 = 0;
  uStack_b0 = 0;
  if (DAT_146534a98 != 0) {
    puVar12 = DAT_146534a90;
    if (DAT_146534a90 == (uint *)0x0) {
      puVar12 = (uint *)&DAT_146534a80;
    }
    uVar1 = *puVar12;
    uVar11 = uVar13;
    uVar9 = uVar13;
    while (uVar1 == 0) {
      iVar5 = (int)uVar11;
      uStack_b0 = (int)uVar9 + 0x20;
      uVar9 = (ulonglong)uStack_b0;
      local_c8 = iVar5 + 1;
      uVar11 = (ulonglong)local_c8;
      if ((int)(DAT_146534a98 + -1 + (DAT_146534a98 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5)
      goto LAB_1426ddef1;
      uVar1 = puVar12[(longlong)iVar5 + 1];
    }
    uStack_c4 = -uVar1 & uVar1;
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
    if (DAT_146534a98 < iStack_b4) {
LAB_1426ddef1:
      iStack_b4 = DAT_146534a98;
    }
  }
  local_b8 = 0xffffffff;
  uStack_80 = CONCAT44(iStack_b4,0xffffffff);
  auStack_40._8_4_ = uStack_b0;
  auStack_40._0_8_ = uStack_80;
  auStack_40._12_4_ = uStack_ac;
  local_60 = 0;
  uStack_90 = CONCAT44(uStack_c4,local_c8);
  local_58 = &DAT_146534a70;
  local_30 = &DAT_146534a70;
  puStack_48 = &DAT_146534a80;
  local_68 = &DAT_146534a70;
  local_88 = &DAT_146534a80;
  local_98 = &DAT_146534a70;
  local_78._8_4_ = 0x46534a70;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = 1;
  iVar5 = iStack_b4;
  uStack_50 = uStack_90;
  if (iStack_b4 < DAT_146534a98) {
    do {
      plVar6 = *(longlong **)(*local_98 + 8 + (longlong)iVar5 * 0x18);
      if ((plVar6 != (longlong *)0x0) &&
         (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(), plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x348))
                  (plVar6,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysUtils.cpp"
                   ,0x217);
        local_res10[0] = 3;
        iVar5 = (**(code **)(*plVar6 + 0x90))(plVar6);
        local_a8 = (longlong *)0x0;
        local_9c = 0;
        local_a0 = iVar5;
        if (0 < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8);
        }
        iVar4 = local_a0;
        plVar3 = local_a8;
        _guard_xfg_dispatch_icall_nop(local_a8,0,(longlong)iVar5 << 3);
        local_res10[0] = 3;
        (**(code **)(*plVar6 + 0x98))(plVar6,local_res10,plVar3,iVar5 * 8,0);
        FOutputDevice::LogfImpl(param_1,L"PhysX Actors: %d",iVar5);
        uVar11 = (ulonglong)((longlong)(plVar3 + iVar4) + (7 - (longlong)plVar3)) >> 3;
        if (plVar3 + iVar4 < plVar3) {
          uVar11 = uVar13;
        }
        uVar9 = uVar13;
        plVar10 = plVar3;
        if (uVar11 != 0) {
          do {
            piVar2 = *(int **)(*plVar10 + 0x10);
            if (((piVar2 != (int *)0x0) && (*piVar2 == 1)) && (*(longlong *)(piVar2 + 2) != 0)) {
              puVar7 = (undefined8 *)FUN_142695df0(*(longlong *)(piVar2 + 2),&local_c8);
              if (*(int *)(puVar7 + 1) == 0) {
                puVar8 = &DAT_143f3eda8;
              }
              else {
                puVar8 = (undefined2 *)*puVar7;
              }
              FOutputDevice::Log(param_1,puVar8);
              if (CONCAT44(uStack_c4,local_c8) != 0) {
                FMemory::Free();
              }
            }
            uVar9 = uVar9 + 1;
            plVar10 = plVar10 + 1;
          } while (uVar9 != uVar11);
        }
        if (plVar3 != (longlong *)0x0) {
          FMemory::Free(plVar3);
        }
        (**(code **)(*plVar6 + 0x350))(plVar6);
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      iVar5 = uStack_80._4_4_;
    } while (uStack_80._4_4_ < *(int *)(local_88 + 0x18));
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      FUN_1426dab80(local_68,*(int *)(local_68 + 1) - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1426de180 DumpSharedMemoryUsage body=2195 status=ok
// SIG undefined DumpSharedMemoryUsage(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FPhysxSharedData::DumpSharedMemoryUsage(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined2 *puVar14;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined1 local_378 [8];
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  uint uStack_358;
  int iStack_354;
  int local_350;
  int iStack_34c;
  undefined4 local_348 [2];
  undefined1 ***local_340;
  undefined1 **local_338;
  undefined1 *local_330;
  longlong local_328;
  ulonglong local_320;
  int local_318;
  int local_314;
  undefined8 *local_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  int iStack_2e0;
  uint uStack_2dc;
  uint *puStack_2d8;
  undefined4 uStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong local_2a8;
  undefined8 local_2a0;
  uint local_298 [4];
  uint *local_288;
  undefined8 local_280;
  undefined4 local_278;
  int local_274;
  longlong local_268;
  undefined4 local_260;
  longlong local_258;
  undefined8 local_250;
  uint local_248 [4];
  uint *local_238;
  undefined8 local_230;
  undefined4 local_228;
  int local_224;
  longlong local_218;
  undefined4 local_210;
  longlong local_208 [4];
  longlong local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  longlong local_1b8 [4];
  longlong local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  longlong local_178;
  undefined4 local_170;
  undefined1 local_168 [256];
  longlong local_68;
  short *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  iVar10 = 0;
  local_258 = 0;
  local_250 = 0;
  local_238 = (uint *)0x0;
  local_230 = 0;
  local_228 = 0xffffffff;
  local_224 = 0;
  local_218 = 0;
  local_210 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_288 = (uint *)0x0;
  local_280 = 0;
  local_278 = 0xffffffff;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  local_208[0] = 0;
  local_208[1] = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0xffffffff;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_300 = 0;
  local_348[0] = 0;
  iVar3 = (**(code **)(*(longlong *)*param_1 + 0x38))();
  if (0 < iVar3) {
    do {
      plVar4 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,iVar10);
      uVar5 = (**(code **)(*plVar4 + 8))(plVar4);
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,uVar5);
      psVar2 = local_60;
      local_328 = 0;
      local_320 = 0;
      if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
        lVar6 = -1;
        do {
          lVar7 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (local_60[lVar7] != 0);
        uVar11 = (int)lVar6 + 1;
        local_320 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
        }
        FGenericPlatformString::Memcpy(local_328,psVar2,(longlong)(int)uVar11 * 2);
      }
      plVar12 = (longlong *)0x0;
      if (local_68 != 0) {
        FMemory::Free();
      }
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(local_208,&local_318,&local_328);
      plVar8 = plVar12;
      if (local_318 != -1) {
        plVar8 = (longlong *)(local_208[0] + (longlong)local_318 * 0x28);
      }
      plVar9 = plVar8 + 2;
      if (plVar8 == (longlong *)0x0) {
        plVar9 = plVar12;
      }
      if (plVar9 == (longlong *)0x0) {
        local_2c0 = &local_328;
        local_2f8 = 0;
        local_2b8 = &local_2f8;
        local_2f0 = plVar9;
        TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
                  (local_208,&local_338,&local_2c0,0);
        if (local_2f8 != 0) {
          FMemory::Free();
        }
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(local_208,&local_314,&local_328);
        plVar9 = plVar12;
        if ((local_314 != -1) && (lVar6 = local_208[0] + (longlong)local_314 * 0x28, lVar6 != 0)) {
          plVar9 = (longlong *)(lVar6 + 0x10);
        }
      }
      iVar3 = (int)plVar9[1];
      *(int *)(plVar9 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar9 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      *(longlong **)(*plVar9 + (longlong)iVar3 * 8) = plVar4;
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 1,&local_340,plVar4);
      if ((int)local_340 == -1) {
        lVar6 = 0;
      }
      else {
        lVar6 = (longlong)(int)local_340 * 0x20 + param_1[1];
      }
      lVar7 = lVar6 + 8;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      if (lVar7 != 0) {
        local_310 = (undefined8 *)0x0;
        local_308 = 1;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_310,0);
        *local_310 = plVar4;
        uStack_368 = &local_310;
        local_370 = (longlong *)lVar7;
        TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_const_&>_>
                  (local_1b8,&local_330,&local_370);
        if (local_310 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
      if (local_328 != 0) {
        FMemory::Free();
      }
      iVar10 = iVar10 + 1;
      iVar3 = (**(code **)(*(longlong *)*param_1 + 0x38))();
    } while (iVar10 < iVar3);
  }
  HelperCollectUsage(local_208,&local_258,&local_300,local_348);
  HelperCollectUsage(local_1b8,&local_2a8,&local_338,&local_330);
  FOutputDevice::LogfImpl(param_2,&DAT_14516667c);
  FOutputDevice::LogfImpl(param_2,L"Shared Resources:");
  FOutputDevice::LogfImpl(param_2,&DAT_145166694);
  local_330 = local_378;
  local_338 = &local_330;
  if (0 < (int)local_250 - local_224) {
    TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(&local_258);
    local_340 = &local_338;
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<_FPhysxSharedData::DumpSharedMemoryUsage_::_2_::FSortBySize>_>_>_>_>
              (local_258,(longlong)((int)local_250 - local_224),local_378[0],&local_340);
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Rehash(&local_258);
  local_330 = local_378;
  local_338 = &local_330;
  if (0 < (int)local_2a0 - local_274) {
    TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(&local_2a8);
    local_340 = &local_338;
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FSharedResourceEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FSharedResourceEntry>,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FSharedResourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSharedResourceEntry,0>_>::FValueComparisonClass<_FPhysxSharedData::DumpSharedMemoryUsage_::_2_::FSortBySize>_>_>_>_>
              (local_2a8,(longlong)((int)local_2a0 - local_274),local_378[0],&local_340);
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Rehash(&local_2a8);
  local_388 = CONCAT44(local_388._4_4_,local_348[0]);
  FOutputDevice::LogfImpl(param_2,L"%-10d %s (%d)",local_300,L"Overall");
  puStack_2d8 = local_248;
  local_370._0_4_ = 0;
  local_370._4_4_ = 1;
  local_360._4_4_ = 0;
  uStack_358 = 0;
  if ((int)local_230 != 0) {
    puVar13 = local_248;
    if (local_238 != (uint *)0x0) {
      puVar13 = local_238;
    }
    uVar11 = *puVar13;
    local_370._0_4_ = 0;
    uStack_358 = 0;
    while (uVar11 == 0) {
      uStack_358 = uStack_358 + 0x20;
      if ((int)((int)local_230 + -1 + ((int)local_230 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_370)
      {
        local_360._4_4_ = (int)local_230;
        local_370._0_4_ = (int)local_370 + 1;
        goto LAB_1426de6ea;
      }
      uVar11 = puVar13[(longlong)(int)local_370 + 1];
      local_370._0_4_ = (int)local_370 + 1;
    }
    local_370._4_4_ = -uVar11 & uVar11;
    iVar3 = 0x1f;
    if (local_370._4_4_ != 0) {
      for (; local_370._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (local_370._4_4_ == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_360._4_4_ = (uStack_358 - iVar3) + 0x1f;
    if ((int)local_230 < local_360._4_4_) {
      local_360._4_4_ = (int)local_230;
    }
  }
LAB_1426de6ea:
  local_2e8 = &local_258;
  iStack_2e0 = (int)local_370;
  uStack_2dc = local_370._4_4_;
  uStack_2d0 = 0xffffffff;
  iStack_2cc = local_360._4_4_;
  iStack_2c8 = uStack_358;
  iStack_2c4 = iStack_354;
  uStack_368._0_4_ = (int)local_370;
  uStack_368._4_4_ = local_370._4_4_;
  local_350 = uStack_358;
  iStack_34c = iStack_354;
  uStack_358 = 0xffffffff;
  iStack_354 = local_360._4_4_;
  bVar1 = local_360._4_4_ < (int)local_230;
  local_370 = local_2e8;
  local_360 = puStack_2d8;
  if (bVar1) {
    do {
      lVar7 = (longlong)iStack_354;
      lVar6 = *local_370;
      if (*(int *)(lVar6 + 8 + lVar7 * 0x28) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = *(undefined2 **)(lVar6 + lVar7 * 0x28);
      }
      local_388 = *(undefined8 *)(lVar6 + 0x18 + lVar7 * 0x28);
      FOutputDevice::LogfImpl
                (param_2,L"%-10d %s (%d)",*(undefined8 *)(lVar6 + 0x10 + lVar7 * 0x28),puVar14);
      uStack_358 = uStack_358 & ~uStack_368._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_368);
    } while (iStack_354 < (int)local_360[6]);
  }
  FOutputDevice::LogfImpl(param_2,L"Detailed:");
  puStack_2d8 = local_298;
  local_370._0_4_ = 0;
  local_370._4_4_ = 1;
  local_360._4_4_ = 0;
  uStack_358 = 0;
  if ((int)local_280 != 0) {
    puVar13 = local_298;
    if (local_288 != (uint *)0x0) {
      puVar13 = local_288;
    }
    uVar11 = *puVar13;
    local_370._0_4_ = 0;
    uStack_358 = 0;
    while (uVar11 == 0) {
      uStack_358 = uStack_358 + 0x20;
      if ((int)((int)local_280 + -1 + ((int)local_280 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_370)
      {
        local_360._4_4_ = (int)local_280;
        local_370._0_4_ = (int)local_370 + 1;
        goto LAB_1426de868;
      }
      uVar11 = puVar13[(longlong)(int)local_370 + 1];
      local_370._0_4_ = (int)local_370 + 1;
    }
    local_370._4_4_ = -uVar11 & uVar11;
    iVar3 = 0x1f;
    if (local_370._4_4_ != 0) {
      for (; local_370._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (local_370._4_4_ == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_360._4_4_ = (uStack_358 - iVar3) + 0x1f;
    if ((int)local_280 < local_360._4_4_) {
      local_360._4_4_ = (int)local_280;
    }
  }
LAB_1426de868:
  iStack_2e0 = (int)local_370;
  uStack_2dc = local_370._4_4_;
  uStack_2d0 = 0xffffffff;
  iStack_2cc = local_360._4_4_;
  iStack_2c8 = uStack_358;
  iStack_2c4 = iStack_354;
  uStack_368._0_4_ = (int)local_370;
  uStack_368._4_4_ = local_370._4_4_;
  local_350 = uStack_358;
  iStack_34c = iStack_354;
  uStack_358 = 0xffffffff;
  iStack_354 = local_360._4_4_;
  bVar1 = local_360._4_4_ < (int)local_280;
  local_370 = &local_2a8;
  local_2e8 = &local_2a8;
  local_360 = puStack_2d8;
  if (bVar1) {
    do {
      lVar7 = (longlong)iStack_354;
      lVar6 = *local_370;
      if (*(int *)(lVar6 + 8 + lVar7 * 0x28) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = *(undefined2 **)(lVar6 + lVar7 * 0x28);
      }
      local_388 = *(undefined8 *)(lVar6 + 0x18 + lVar7 * 0x28);
      FOutputDevice::LogfImpl
                (param_2,L"%-10d %s (%d)",*(undefined8 *)(lVar6 + 0x10 + lVar7 * 0x28),puVar14);
      uStack_358 = uStack_358 & ~uStack_368._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_368);
    } while (iStack_354 < (int)local_360[6]);
  }
  local_170 = 0;
  if (local_178 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_1b8,0);
  if (local_198 != 0) {
    FMemory::Free();
  }
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
  local_1c0 = 0;
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_208,0);
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  local_260 = 0;
  if (local_268 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_2a8);
  local_210 = 0;
  if (local_218 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_258);
  return;
}



// FUNCTION 1426dea20 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FBodyInstance_*,FPhysTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = FUN_1426dac30(param_1,param_2);
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



// FUNCTION 1426deaa0 Empty body=479 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FBodyInstance_*,FPhysTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_1426deb71;
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
LAB_1426deb71:
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
      lVar5 = (longlong)iStack_2c * 0xe0 + *param_1;
      if (*(longlong *)(lVar5 + 0x40) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<224,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1426decb0 FUN_1426decb0 body=231 status=ok
// SIG undefined FUN_1426decb0(void)

void FUN_1426decb0(char *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  lVar3 = *(longlong *)(param_1 + 200);
  param_1[200] = '\0';
  param_1[0xc9] = '\0';
  param_1[0xca] = '\0';
  param_1[0xcb] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xcd] = '\0';
  param_1[0xce] = '\0';
  param_1[0xcf] = '\0';
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
  if (*(int *)(param_1 + 4) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60));
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x358))
                (plVar4,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                 ,0x701);
    }
  }
  if ((*param_1 != '\0') && (2 < *(uint *)(param_1 + 4))) {
    plVar5 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 100));
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x358))
                (plVar5,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                 ,0x702);
    }
  }
  FUN_1426dc640(param_1);
  FUN_1426e2ff0(param_1);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))(plVar5);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x360))(plVar4);
  }
  return;
}



// FUNCTION 1426deda0 FUN_1426deda0 body=231 status=ok
// SIG undefined FUN_1426deda0(void)

void FUN_1426deda0(longlong *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && ((UWorld::RemovePhysicsVolume(lVar2,param_1), param_2 == 3 || (param_2 == 0)))
     ) {
    lVar2 = param_1[0x8e];
    bVar1 = *(byte *)(lVar2 + 0x2ef);
    FUN_1423974f0(lVar2,0);
    lVar4 = *(longlong *)(lVar2 + 0x3a0);
    lVar5 = (longlong)*(int *)(lVar2 + 0x3a8) * 0xa0 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0xa0) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar4 + 0x7c);
      if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x24c) < '\0')) {
        (**(code **)(*plVar3 + 0x4c8))(plVar3,1);
      }
    }
    FUN_1423974f0(lVar2,bVar1 & 1);
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1426dee90 FUN_1426dee90 body=70 status=ok
// SIG undefined FUN_1426dee90(void)

void FUN_1426dee90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2c38) != 0) {
    if ((int)param_2 == 0) {
      FUN_142227350(*(longlong *)(param_1 + 0x2c38),param_2,1);
    }
    *(undefined8 *)(param_1 + 0x2c38) = 0;
  }
  FUN_14222a250(param_1,param_2 & 0xffffffff);
  return;
}



// FUNCTION 1426deee0 FUN_1426deee0 body=317 status=ok
// SIG undefined FUN_1426deee0(void)

void FUN_1426deee0(char *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 local_48 [24];
  undefined1 local_30 [40];
  
  FUN_1426eb240(param_1,5);
  uVar5 = 0;
  iVar4 = 0;
  uVar1 = uVar5;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_1426e2550((int)*(short *)(param_1 + 0x60));
  }
  FUN_1426d3df0(local_30,uVar1);
  uVar1 = uVar5;
  if ((*param_1 != '\0') && (2 < *(uint *)(param_1 + 4))) {
    uVar1 = FUN_1426e2550((int)*(short *)(param_1 + 100));
  }
  FUN_1426d3df0(local_48,uVar1);
  lVar3 = 6;
  do {
    FUN_1426ebd80(param_2,0x3dcccccd);
    FUN_1426ec9a0(param_1);
    FPhysScene::WaitPhysScenes(param_1);
    FUN_1426decb0(param_1,0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 4) == 0) goto LAB_1426defe3;
    do {
      iVar4 = (int)uVar5;
      plVar2 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + uVar5 * 2 + 0x60));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x358))
                  (plVar2,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                   ,0x78e);
        (**(code **)(*plVar2 + 0x2b0))(plVar2,*(undefined4 *)(param_1 + 0x4b0));
        (**(code **)(*plVar2 + 0x360))(plVar2);
      }
LAB_1426defe3:
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < *(uint *)(param_1 + 4));
  }
  FUN_1426d5740(local_48);
  FUN_1426d5740(local_30);
  return;
}



// FUNCTION 1426df020 FUN_1426df020 body=991 status=ok
// SIG undefined FUN_1426df020(void)

longlong * FUN_1426df020(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case 0:
    if ((wchar_t *)*param_1 != L"eNO_ERROR") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,10);
      iVar2 = (int)param_1[1] + 10;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"eNO_ERROR",10);
      return param_1;
    }
    break;
  case 1:
    if ((wchar_t *)*param_1 != L"eDEBUG_INFO") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xc);
      iVar2 = (int)param_1[1] + 0xc;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"eDEBUG_INFO",0xc);
      return param_1;
    }
    break;
  case 2:
    if ((wchar_t *)*param_1 != L"eDEBUG_WARNING") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xf);
      iVar2 = (int)param_1[1] + 0xf;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"eDEBUG_WARNING",0xf);
      return param_1;
    }
    break;
  default:
    if ((wchar_t *)*param_1 != L"UNKONWN") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,8);
      iVar2 = (int)param_1[1] + 8;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"UNKONWN",8);
    }
    break;
  case 4:
    if ((wchar_t *)*param_1 != L"eINVALID_PARAMETER") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x13);
      iVar2 = (int)param_1[1] + 0x13;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"eINVALID_PARAMETER",0x13);
      return param_1;
    }
    break;
  case 8:
    if ((wchar_t *)*param_1 != L"eINVALID_OPERATION") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x13);
      iVar2 = (int)param_1[1] + 0x13;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"eINVALID_OPERATION",0x13);
      return param_1;
    }
    break;
  case 0x10:
    if ((wchar_t *)*param_1 != L"eOUT_OF_MEMORY") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xf);
      iVar2 = (int)param_1[1] + 0xf;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"eOUT_OF_MEMORY",0xf);
      return param_1;
    }
    break;
  case 0x20:
    if ((wchar_t *)*param_1 != L"eINTERNAL_ERROR") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x10);
      iVar2 = (int)param_1[1] + 0x10;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"eINTERNAL_ERROR",0x10);
      return param_1;
    }
    break;
  case 0x40:
    if ((wchar_t *)*param_1 != L"eABORT") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,7);
      iVar2 = (int)param_1[1] + 7;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      puVar1 = (undefined8 *)*param_1;
      *puVar1 = 0x4f004200410065;
      *(undefined4 *)(puVar1 + 1) = 0x540052;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
      return param_1;
    }
    break;
  case 0x80:
    if ((wchar_t *)*param_1 != L"ePERF_WARNING") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xe);
      iVar2 = (int)param_1[1] + 0xe;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"ePERF_WARNING",0xe);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1426df4b0 FUN_1426df4b0 body=984 status=ok
// SIG undefined FUN_1426df4b0(void)

undefined8 FUN_1426df4b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_res18 [2];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [3];
  
  plVar11 = *(longlong **)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  local_res18[0] = param_3;
  if (plVar11 == (longlong *)0x0) {
    if (param_1 == 0x28) {
      return 0;
    }
    lVar7 = FUN_1429c30a0();
    if ((*(int *)(*(longlong *)(param_1 + -0x18) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + -0x18) + 0x88) +
         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      return 0;
    }
    plVar11 = *(longlong **)(param_1 + 0x70);
    if (plVar11 == (longlong *)0x0) {
      return 0;
    }
  }
  if ((DAT_146aeaf70 == '\0') && (puVar8 = (undefined8 *)FUN_14218c6a0(), puVar8 != &DAT_146aeaf58))
  {
    DAT_146aeaf58._0_4_ = *(undefined4 *)puVar8;
    DAT_146aeaf58._4_4_ = *(undefined4 *)((longlong)puVar8 + 4);
    uRam0000000146aeaf60 = *(undefined4 *)(puVar8 + 1);
    uRam0000000146aeaf64 = *(undefined4 *)((longlong)puVar8 + 0xc);
    DAT_146aeaf68 = puVar8[2];
    DAT_146aeaf70 = '\x01';
  }
  uVar4 = CONCAT44(DAT_146aeaf58._4_4_,(undefined4)DAT_146aeaf58);
  plVar10 = (longlong *)0x0;
  local_60 = 0;
  local_58 = 0;
  FUN_14217ba30(local_50,&local_60,L"console_command",uVar4);
  cVar6 = FUN_14218fca0(local_50[0]);
  if ((cVar6 != '\0') && (cVar6 = FUN_14218fca0(local_50[0]), cVar6 != '\0')) {
    iVar2 = *(int *)(local_50[0] + 0x2e0);
    *(int *)(local_50[0] + 0x2e0) = iVar2 + 1;
    if (*(int *)(local_50[0] + 0x2e4) < iVar2 + 1) {
      FUN_140ae1b70(local_50[0] + 0x38,iVar2);
    }
    lVar7 = *(longlong *)(local_50[0] + 0x2d8);
    if (*(longlong *)(local_50[0] + 0x2d8) == 0) {
      lVar7 = local_50[0] + 0x38;
    }
    FUN_1426d17b0((longlong)iVar2 * 0xa8 + lVar7,uVar4,local_50[0] + 8,local_res18,plVar1);
  }
  lVar7 = (**(code **)(*plVar11 + 0x148))(plVar11);
  if ((DAT_146b17150 != 0) && (param_1 != 0x28)) {
    lVar9 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + -0x18) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + -0x18) + 0x88) +
         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(longlong *)(param_1 + 0x48) != 0)) {
      bVar5 = false;
      goto LAB_1426df6aa;
    }
  }
  bVar5 = true;
LAB_1426df6aa:
  if (*plVar1 != 0) {
    plVar10 = (longlong *)FUN_14270d130();
  }
  if (((((((!bVar5) || (cVar6 = FUN_1428ca210(lVar7,lVar7,param_3,param_4), cVar6 == '\0')) &&
         ((*plVar1 == 0 ||
          ((plVar3 = *(longlong **)(*plVar1 + 0x5b8), plVar3 == (longlong *)0x0 ||
           (cVar6 = (**(code **)(*plVar3 + 0x220))(plVar3,param_3,param_4,plVar10), cVar6 == '\0')))
          ))) && (cVar6 = (**(code **)(*plVar11 + 0x220))(plVar11,param_3,param_4,plVar10),
                 cVar6 == '\0')) &&
       (((plVar10 == (longlong *)0x0 ||
         (cVar6 = (**(code **)(*plVar10 + 0x220))(plVar10,param_3,param_4,plVar10), cVar6 == '\0'))
        && ((*plVar1 == 0 ||
            ((plVar11 = *(longlong **)(*plVar1 + 0x520), plVar11 == (longlong *)0x0 ||
             (cVar6 = (**(code **)(*plVar11 + 0x220))(plVar11,param_3,param_4,plVar10),
             cVar6 == '\0')))))))) &&
      ((plVar11 = *(longlong **)(lVar7 + 0x140), plVar11 == (longlong *)0x0 ||
       (cVar6 = (**(code **)(*plVar11 + 0x220))(plVar11,param_3,param_4,plVar10), cVar6 == '\0'))))
     && (((((*plVar1 == 0 || (plVar11 = *(longlong **)(*plVar1 + 0x5a8), plVar11 == (longlong *)0x0)
            ) || (cVar6 = (**(code **)(*plVar11 + 0x220))(plVar11,param_3,param_4,plVar10),
                 cVar6 == '\0')) &&
          ((plVar11 = *(longlong **)(lVar7 + 0x148), plVar11 == (longlong *)0x0 ||
           (cVar6 = (**(code **)(*plVar11 + 0x220))(plVar11,param_3,param_4,plVar10), cVar6 == '\0')
           ))) && ((*plVar1 == 0 ||
                   ((plVar11 = *(longlong **)(*plVar1 + 0x528), plVar11 == (longlong *)0x0 ||
                    (cVar6 = (**(code **)(*plVar11 + 0x220))(plVar11,param_3,param_4,plVar10),
                    cVar6 == '\0')))))))) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    cVar6 = (**(code **)(*DAT_1468b1f88 + 0xb8))(DAT_1468b1f88,param_3,param_4,0,*plVar1);
    if (cVar6 == '\0') {
      FUN_14217ed90(local_50);
      return 0;
    }
  }
  FUN_14217ed90(local_50);
  return 1;
}



// FUNCTION 1426df890 FUN_1426df890 body=1228 status=ok
// SIG undefined FUN_1426df890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1426df890(longlong param_1,undefined8 param_2,short *param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  short *psVar11;
  undefined4 uVar12;
  undefined1 auStack_328 [32];
  bool local_308;
  char local_307 [3];
  float local_304;
  wchar_t *local_300;
  int local_2f8;
  undefined4 local_2f4;
  undefined8 local_2f0;
  wchar_t *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  longlong *local_2d8;
  char local_2c8;
  char local_2c7;
  longlong *local_280;
  longlong *local_270;
  undefined1 local_268;
  char local_267;
  longlong *local_210;
  undefined1 local_208;
  char local_207;
  longlong *local_1b0;
  undefined1 local_1a8 [128];
  longlong local_128;
  undefined8 local_120;
  undefined1 local_108 [128];
  longlong local_88;
  undefined8 local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_2f0 = param_4;
  local_2d8 = (longlong *)FUN_1426e19d0(*(undefined8 *)(param_1 + 0x218));
  if (local_2d8 == (longlong *)0x0) {
    return 0;
  }
  plVar4 = (longlong *)(**(code **)(*local_2d8 + 0xe0))(local_2d8);
  sVar2 = *param_3;
  local_267 = '\0';
  local_210 = plVar4;
  (**(code **)(*plVar4 + 0x80))(plVar4,"Enable",&local_268);
  local_308 = true;
  if (sVar2 == 0) {
    (**(code **)(*local_210 + 0xd0))(local_210,&local_268,&local_308);
    local_308 = local_308 == false;
  }
  if (local_267 == '\0') {
    (**(code **)(*local_210 + 0xd8))(local_210,&local_268);
  }
  local_207 = '\0';
  local_1b0 = plVar4;
  (**(code **)(*plVar4 + 0x80))(plVar4,"Scale",&local_208);
  uVar12 = 0;
  local_304 = 1.0;
  if (sVar2 == 0) {
    (**(code **)(*local_1b0 + 0x250))(local_1b0,&local_208,&local_304);
    if (local_304 <= 0.0) {
      local_304 = 1.0;
    }
    else {
      local_304 = 0.0;
    }
  }
  if (local_207 == '\0') {
    (**(code **)(*local_1b0 + 600))(local_1b0,&local_208);
  }
  sVar2 = *param_3;
  psVar11 = param_3;
  while ((sVar2 != 0 && (sVar2 != 0x2f))) {
    psVar1 = psVar11 + 1;
    psVar11 = psVar11 + 1;
    sVar2 = *psVar1;
  }
  pwVar7 = (wchar_t *)0x0;
  iVar3 = 0;
  if (sVar2 != 0) {
    local_300 = (wchar_t *)0x0;
    local_2f4 = 0;
    pwVar6 = pwVar7;
    iVar9 = iVar3;
    if (*param_3 != 0) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_3[lVar10] != 0);
      iVar8 = (int)lVar10 + 1;
      local_2f8 = iVar8;
      if (0 < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_300,0);
      }
      iVar9 = local_2f8;
      pwVar6 = local_300;
      FGenericPlatformString::Memcpy(local_300,param_3,(longlong)iVar8 * 2);
    }
    if (iVar9 == 0) {
      local_300 = L"";
      iVar9 = iVar3;
    }
    else {
      iVar9 = iVar9 + -1;
      local_300 = pwVar6;
    }
    iVar8 = (int)((longlong)psVar11 - (longlong)param_3 >> 1);
    if ((-1 < iVar8) && (iVar3 = iVar9, iVar8 < iVar9)) {
      iVar3 = iVar8;
    }
    local_2e8 = (wchar_t *)0x0;
    local_2dc = 0;
    iVar9 = iVar3 + 1;
    if (iVar3 == 0) {
      iVar9 = 0;
    }
    local_2e0 = iVar9;
    if ((0 < iVar9) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0), iVar9 = local_2e0,
       pwVar7 = local_2e8, 0 < local_2e0)) {
      wcsncpy(local_2e8,local_300,(longlong)iVar3);
      pwVar7[iVar3] = L'\0';
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FMemory::Free(pwVar6);
    }
    pwVar6 = L"";
    if (iVar9 != 0) {
      pwVar6 = pwVar7;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1a8,pwVar6);
    plVar4 = (longlong *)(**(code **)(*local_2d8 + 0xe8))(local_2d8,local_120);
    if (local_128 != 0) {
      FMemory::Free();
    }
    param_4 = local_2f0;
    if (pwVar7 != (wchar_t *)0x0) {
      FMemory::Free(pwVar7);
      param_4 = local_2f0;
    }
  }
  if (plVar4 == (longlong *)0x0) {
    uVar5 = FOutputDevice::LogfImpl
                      (param_4,L"Unknown APEX module requested for apex debug visualization.");
    return uVar5 & 0xffffffffffffff00;
  }
  if (*psVar11 != 0) {
    param_3 = psVar11 + 1;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_108,param_3);
  local_2c7 = '\0';
  local_270 = plVar4;
  (**(code **)(*plVar4 + 0x80))(plVar4,local_80,&local_2c8);
  if (local_2c8 == '\0') {
    pwVar7 = L"Unknown APEX visualization flag specified.";
LAB_1426dfd02:
    FOutputDevice::LogfImpl(param_4,pwVar7);
    uVar5 = 0;
  }
  else {
    iVar3 = (**(code **)(*local_280 + 0x60))();
    if (iVar3 == 0xf) {
      (**(code **)(*local_270 + 0x250))(local_270,&local_2c8,&local_300);
      if (local_300._0_4_ <= 0.0) {
        uVar12 = 0x3f800000;
      }
      if (local_2c7 == '\0') {
        (**(code **)(*local_270 + 600))(local_270,&local_2c8,uVar12);
        uVar5 = 1;
        goto LAB_1426dfd0c;
      }
    }
    else {
      iVar3 = (**(code **)(*local_280 + 0x60))();
      if (iVar3 == 0xd) {
        (**(code **)(*local_270 + 0x210))(local_270,&local_2c8,&local_300);
        if (local_2c7 == '\0') {
          (**(code **)(*local_270 + 0x218))(local_270,&local_2c8,local_300._0_4_ == 0.0);
          uVar5 = 1;
          goto LAB_1426dfd0c;
        }
      }
      else {
        iVar3 = (**(code **)(*local_280 + 0x60))();
        if (iVar3 != 3) {
          pwVar7 = L"Unknown APEX visualization flag type.";
          goto LAB_1426dfd02;
        }
        (**(code **)(*local_270 + 0xd0))(local_270,&local_2c8,local_307);
        if (local_2c7 == '\0') {
          (**(code **)(*local_270 + 0xd8))(local_270,&local_2c8,local_307[0] == '\0');
        }
      }
    }
    uVar5 = 1;
  }
LAB_1426dfd0c:
  if (local_88 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 1426dfd60 FUN_1426dfd60 body=1273 status=ok
// SIG undefined FUN_1426dfd60(void)

undefined1 FUN_1426dfd60(short *param_1,undefined8 param_2,longlong param_3)

{
  short *_Src;
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  short *_Dst;
  short *local_res8;
  undefined8 in_stack_ffffffffffffff98;
  short *local_50;
  undefined8 local_48;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_res8 = param_1;
  cVar1 = FParse::Command(&local_res8,L"PXVIS",1);
  if (cVar1 == '\0') {
    cVar1 = FParse::Command(&local_res8,L"APEXVIS",1);
    if (cVar1 == '\0') {
      if (((DAT_1468b616c == '\0') && (DAT_146b08400 != 0)) &&
         (cVar1 = FParse::Command(&local_res8,&DAT_1451678e8,1), cVar1 != '\0')) {
        if (DAT_146b08458 == (longlong *)0x0) {
          return 1;
        }
        cVar1 = FParse::Command(&local_res8,L"CONNECT",1);
        if (cVar1 != '\0') {
          cVar1 = FParse::Command(&local_res8,L"NODEBUG",1);
          cVar2 = FParse::Command(&local_res8,L"NOMEMORY",1);
          cVar3 = FParse::Command(&local_res8,L"NOPROFILE",1);
          local_48 = 10;
          iVar9 = 0;
          local_50 = (short *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
          _Dst = local_50;
          FGenericPlatformString::Memcpy(local_50,L"localhost",0x14);
          _Src = local_res8;
          if ((*local_res8 == 0) || (_Dst == local_res8)) {
            iVar9 = (int)local_48;
          }
          else {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (local_res8[lVar7] != 0);
            uVar4 = local_48._4_4_;
            uVar6 = (int)lVar7 + 1;
            local_48 = (ulonglong)local_48._4_4_ << 0x20;
            if (uVar4 != uVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_50,uVar6);
              iVar9 = (int)local_48;
              _Dst = local_50;
              uVar4 = local_48._4_4_;
            }
            iVar9 = iVar9 + uVar6;
            local_48 = CONCAT44(local_48._4_4_,iVar9);
            if ((int)uVar4 < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50);
              _Dst = local_50;
              iVar9 = (int)local_48;
            }
            if (uVar6 != 0) {
              _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(int)uVar6 * 2);
            }
          }
          local_50 = (short *)0x0;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          if (iVar9 == 0) {
            local_48 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,iVar9,0);
            _guard_xfg_dispatch_icall_nop(local_50,_Dst,(longlong)iVar9 * 2);
          }
          FUN_1426e8e60(&local_50,cVar1 == '\0',cVar2 == '\0',cVar3 == '\0',param_2);
          if (_Dst == (short *)0x0) {
            return 1;
          }
          FMemory::Free(_Dst);
          return 1;
        }
        cVar1 = FParse::Command(&local_res8,L"DISCONNECT",1);
        if (cVar1 == '\0') {
          return 1;
        }
        (**(code **)(*DAT_146b08458 + 0x20))();
        return 1;
      }
      cVar1 = FParse::Command(&local_res8,L"PHYSXSHARED",1);
      if (cVar1 != '\0') {
        FPhysxSharedData::DumpSharedMemoryUsage(DAT_146b08468,param_2);
        return 1;
      }
      cVar1 = FParse::Command(&local_res8,L"PHYSXINSTANCES",1);
      if (cVar1 != '\0') {
        FUN_1426dde20(param_2);
        return 1;
      }
      cVar1 = FParse::Command(&local_res8,L"PHYSXINFO",1);
      if (cVar1 != '\0') {
        FOutputDevice::LogfImpl(param_2,L"PhysX Info:");
        FOutputDevice::LogfImpl(param_2,L"  Version: %d.%d.%d",3,4,(ulonglong)uVar4 << 0x20);
        FOutputDevice::LogfImpl(param_2,L"  Configuration: RELEASE");
        lVar7 = GetPhysXCookingModule(1);
        pwVar5 = L"  Cooking Module: TRUE";
        if (lVar7 == 0) {
          pwVar5 = L"  Cooking Module: FALSE";
        }
        FOutputDevice::LogfImpl(param_2,pwVar5);
        return 1;
      }
      return 0;
    }
    if (*(longlong *)(param_3 + 0x218) == 0) {
      return 1;
    }
    cVar1 = FParse::Command(&local_res8,L"SYNC",1);
    cVar2 = FParse::Command(&local_res8,L"ASYNC",1);
    if ((cVar2 == '\0') || (**(char **)(param_3 + 0x218) == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if ((cVar1 == '\0') && (cVar2 == '\0')) {
      cVar1 = '\x01';
      cVar2 = **(char **)(param_3 + 0x218);
    }
    uVar8 = 0;
    if (cVar1 != '\0') {
      cVar1 = FUN_1426df890(param_3,0,local_res8,param_2);
      uVar8 = 0;
      if (cVar1 != '\0') {
        uVar8 = 1;
      }
    }
    if (cVar2 != '\0') {
      cVar1 = FUN_1426df890(param_3,2,local_res8,param_2);
      if (cVar1 != '\0') {
        uVar8 = 1;
      }
      return uVar8;
    }
  }
  else {
    if (*(longlong *)(param_3 + 0x218) == 0) {
      return 1;
    }
    cVar1 = FParse::Command(&local_res8,L"SYNC",1);
    cVar2 = FParse::Command(&local_res8,L"ASYNC",1);
    if ((cVar2 == '\0') || (**(char **)(param_3 + 0x218) == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if ((cVar1 == '\0') && (cVar2 == '\0')) {
      cVar1 = '\x01';
      cVar2 = **(char **)(param_3 + 0x218);
    }
    uVar8 = 0;
    if (cVar1 != '\0') {
      cVar1 = FUN_1426e0260(param_3,0,local_res8,param_2);
      uVar8 = 0;
      if (cVar1 != '\0') {
        uVar8 = 1;
      }
    }
    if ((cVar2 != '\0') && (cVar1 = FUN_1426e0260(param_3,2,local_res8,param_2), cVar1 != '\0')) {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// FUNCTION 1426e0260 FUN_1426e0260 body=832 status=ok
// SIG undefined FUN_1426e0260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1426e0260(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  uint uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128 [2];
  wchar_t *local_118;
  undefined4 local_110 [2];
  wchar_t *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  local_128[0] = param_3;
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x218) + 4)) {
    plVar4 = (longlong *)
             FUN_1426e2550((int)*(short *)(*(longlong *)(param_1 + 0x218) + 0x60 +
                                          (ulonglong)param_2 * 2));
  }
  local_118 = L"WORLDAXES";
  local_108 = L"BODYAXES";
  local_f8 = L"MASSAXES";
  local_e8 = L"CONTACTPOINT";
  local_d8 = L"CONTACTS";
  local_c8 = L"CONTACTERROR";
  local_b8 = L"CONTACTFORCE";
  local_a8 = L"JOINTLIMITS";
  local_98 = L"JOINTLOCALFRAMES";
  local_88 = L"COLLISION";
  local_78 = L"MBPREGIONS";
  local_bc = 0x42c80000;
  local_110[0] = 1;
  local_110[1] = 0x3f800000;
  local_100 = 2;
  local_fc = 0x3f800000;
  local_f0 = 3;
  local_ec = 0x3f800000;
  local_e0 = 7;
  local_dc = 0x3f800000;
  local_d0 = 8;
  local_cc = 0x3f800000;
  local_c0 = 9;
  local_b0 = 10;
  local_ac = 0x3f800000;
  local_a0 = 0x16;
  local_9c = 0x3f800000;
  local_90 = 0x15;
  local_8c = 0x3f800000;
  local_80 = 0xd;
  local_7c = 0x3f800000;
  local_70 = 0x24;
  local_6c = 0x3f800000;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x358))
              (plVar4,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysUtils.cpp"
               ,0x11e);
  }
  bVar1 = false;
  bVar2 = false;
  cVar3 = FParse::Command(local_128,L"PHYSX_CLEAR_ALL",1);
  if (cVar3 == '\0') {
    puVar8 = local_110;
    bVar1 = false;
    do {
      uVar10 = *puVar8;
      cVar3 = FParse::Command(local_128,*(undefined8 *)(puVar8 + -2),1);
      if (cVar3 != '\0') {
        fVar9 = (float)(**(code **)(*plVar4 + 0x260))(plVar4,uVar10);
        if (fVar9 == 0.0) {
          (**(code **)(*plVar4 + 600))(plVar4,uVar10,puVar8[1]);
          pwVar5 = L"Flag set.";
        }
        else {
          (**(code **)(*plVar4 + 600))(plVar4,uVar10,0);
          pwVar5 = L"Flag un-set.";
        }
        FOutputDevice::LogfImpl(param_4,pwVar5);
        bVar2 = true;
      }
      fVar9 = (float)(**(code **)(*plVar4 + 0x260))(plVar4,uVar10);
      if (0.0 < fVar9) {
        bVar1 = true;
      }
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      puVar8 = puVar8 + 4;
    } while (uVar6 < 0xb);
  }
  else {
    FOutputDevice::LogfImpl(param_4,L"Clearing all PhysX Debug Flags.");
    bVar2 = true;
    puVar8 = local_110;
    do {
      (**(code **)(*plVar4 + 600))(plVar4,*puVar8,0);
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      puVar8 = puVar8 + 4;
    } while (uVar6 < 0xb);
  }
  if (bVar1) {
    uVar10 = 0x41a00000;
  }
  else {
    uVar10 = 0;
  }
  (**(code **)(*plVar4 + 600))(plVar4,0,uVar10);
  if (!bVar2) {
    FOutputDevice::LogfImpl(param_4,L"Unknown PhysX visualization flag specified.");
  }
  (**(code **)(*plVar4 + 0x360))(plVar4);
  return 1;
}



// FUNCTION 1426e05d0 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  DeferredPhysResourceCleanup();
  return 1;
}



// FUNCTION 1426e05e0 FUN_1426e05e0 body=25 status=ok
// SIG undefined FUN_1426e05e0(void)

undefined8 FUN_1426e05e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x10))
            (*(undefined8 *)(param_1 + 8),param_2,param_3,*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1426e0600 FUN_1426e0600 body=25 status=ok
// SIG undefined FUN_1426e0600(void)

undefined8 FUN_1426e0600(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1426e0620 ExecuteTask body=370 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FPhysXTask>::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  TlsSetValue(*(DWORD *)(param_1[0x14] + 8),param_1 + 2);
  iVar2 = *(int *)(param_1 + 0x13);
  while (iVar2 != 0) {
    plVar6 = (longlong *)param_1[(longlong)*(int *)(param_1 + 0x12) + 2];
    (**(code **)(*plVar6 + 8))(plVar6);
    (**(code **)(*plVar6 + 0x30))(plVar6);
    uVar3 = *(int *)(param_1 + 0x12) + 1U & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    piVar1 = (int *)(param_1 + 0x13);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    *(uint *)(param_1 + 0x12) = uVar3;
  }
  TlsSetValue(*(DWORD *)(param_1[0x14] + 8),(LPVOID)0x0);
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_141591a60(param_1[0x16],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__145170f90;
  if (param_1[0x16] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x16] + 0x48);
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



// FUNCTION 1426e07a0 FUN_1426e07a0 body=757 status=ok
// SIG undefined FUN_1426e07a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426e07a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong **pplVar12;
  longlong lVar13;
  longlong *in_stack_00000028;
  undefined1 auStack_c8 [40];
  longlong *local_a0 [2];
  longlong *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [24];
  longlong local_60 [4];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_90 = in_stack_00000028;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x218);
  if (lVar4 == 0) {
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 200);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
    LOCK();
    uVar8 = *(ulonglong *)(lVar4 + 8);
    if (uVar8 == 0) {
      *(ulonglong *)(lVar4 + 8) = 0;
      uVar8 = 0;
    }
    UNLOCK();
    if ((uVar8 >> 0x1a & 1) == 0) {
      *(undefined4 *)(*in_stack_00000028 + 0x4c) = 2;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      local_88 = &LAB_1426e1130;
      uStack_80 = 0;
      plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_a0[0] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar9 + 1,uVar5);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_88;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_88._4_4_;
        *(undefined4 *)(plVar9 + 3) = uStack_80;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_7c;
        lVar10 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar10;
        *plVar9 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_40 = (longlong *)0x0;
      local_38 = 1;
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_60,0);
      plVar9 = local_60;
      if (local_40 != (longlong *)0x0) {
        plVar9 = local_40;
      }
      *plVar9 = lVar4;
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
      plVar11 = (longlong *)FUN_141d29000(local_78,local_60,0xff);
      plVar9 = local_a0[0];
      lVar10 = *plVar11;
      pplVar12 = (longlong **)(lVar10 + 0x10);
      *pplVar12 = (longlong *)0x0;
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if ((local_a0 != pplVar12) && (local_a0[0] != (longlong *)0x0)) {
        (**(code **)(*local_a0[0] + 0x30))(local_a0[0],pplVar12);
      }
      *(undefined4 *)(lVar10 + 0x20) = 2;
      lVar10 = *plVar11;
      lVar7 = plVar11[2];
      lVar13 = plVar11[1];
      lVar6 = *(longlong *)(lVar10 + 0x30);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
        UNLOCK();
        plVar9 = local_a0[0];
      }
      FUN_1409691d0(lVar10,lVar13,(int)lVar7,1);
      plVar11 = local_60;
      iVar3 = (int)local_38;
      if (local_40 != (longlong *)0x0) {
        plVar11 = local_40;
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar11 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar11 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar9 = local_a0[0];
        plVar11 = plVar11 + 1;
      }
      if (local_40 != (longlong *)0x0) {
        FMemory::Free();
      }
      lVar10 = *local_90;
      iVar3 = *(int *)(lVar10 + 0x40);
      *(int *)(lVar10 + 0x40) = iVar3 + 1;
      if (*(int *)(lVar10 + 0x44) < iVar3 + 1) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (lVar10 + 0x18,iVar3);
      }
      lVar13 = *(longlong *)(lVar10 + 0x38);
      if (*(longlong *)(lVar10 + 0x38) == 0) {
        lVar13 = lVar10 + 0x18;
      }
      plVar11 = (longlong *)((longlong)iVar3 * 8 + lVar13);
      if (plVar11 == (longlong *)0x0) {
LAB_1426e09de:
        if (lVar6 != 0) {
          LOCK();
          piVar1 = (int *)(lVar6 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = local_a0[0];
          if (iVar3 == 1) {
            FGraphEvent::Recycle(lVar6);
            plVar9 = local_a0[0];
          }
        }
      }
      else {
        *plVar11 = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
          UNLOCK();
          plVar9 = local_a0[0];
          goto LAB_1426e09de;
        }
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        local_a0[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
        if (local_a0[0] != (longlong *)0x0) {
          FMemory::Free(local_a0[0]);
        }
      }
      goto LAB_1426e0a4e;
    }
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x218);
  if (lVar10 != 0) {
    FUN_1426decb0(lVar10,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
  }
LAB_1426e0a4e:
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle(lVar4);
    }
  }
  return;
}



// FUNCTION 1426e0ae0 FUN_1426e0ae0 body=232 status=ok
// SIG undefined FUN_1426e0ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426e0ae0(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1560];
  longlong local_70;
  longlong local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  fVar1 = *(float *)(param_1 + 0x3d2);
  lVar3 = (**(code **)(*param_1 + 0x148))();
  fVar2 = *(float *)(lVar3 + 0x790);
  if (fVar1 != fVar2) {
    lVar3 = *param_1;
    uVar4 = (**(code **)(lVar3 + 0x720))(param_1,local_688);
    (**(code **)(lVar3 + 0x718))(param_1,uVar4);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
    *(float *)(param_1 + 0x49e) = fVar1;
  }
  (**(code **)(*param_1 + 0x710))(param_1,param_2);
  *(float *)(param_1 + 0x3d2) = fVar2;
  return;
}



// FUNCTION 1426e0bd0 Find body=201 status=ok
// SIG undefined Find(void)

ulonglong TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                    (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  plVar6 = plVar1;
  do {
    if (plVar6 == plVar1 + (int)lVar2) {
      return 0xffffffff;
    }
    if (*plVar6 != 0) {
      lVar3 = FUN_14292bbb0();
      lVar7 = *plVar6;
      for (lVar5 = lVar7; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar3) goto LAB_1426e0c30;
      }
    }
    lVar7 = 0;
LAB_1426e0c30:
    if (*param_2 != 0) {
      lVar4 = FUN_14292bbb0();
      lVar5 = *param_2;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) goto LAB_1426e0c60;
      }
    }
    lVar5 = 0;
LAB_1426e0c60:
    if (lVar7 == lVar5) {
      return (longlong)plVar6 - (longlong)plVar1 >> 3 & 0xffffffff;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 1426e0ca0 FUN_1426e0ca0 body=506 status=ok
// SIG undefined FUN_1426e0ca0(void)

longlong FUN_1426e0ca0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 local_res18 [2];
  
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x2ba8)) {
    lVar13 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2ba0) + lVar13);
      uVar2 = *(uint *)(lVar1 + 0xc);
      if ((int)uVar2 < (int)DAT_1469e91c4) {
        uVar11 = uVar2 & 0xffff;
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 0xffff;
          uVar11 = uVar11 - 0x10000;
        }
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)uVar11 * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
        plVar10 = *(longlong **)(lVar1 + 0x10);
        if (param_2 != (longlong *)0x0) {
          plVar5 = (longlong *)FUN_14292bbb0();
          plVar9 = param_2;
          do {
            plVar7 = param_2;
            if (plVar9 == plVar5) goto LAB_1426e0d64;
            plVar9 = (longlong *)plVar9[6];
          } while (plVar9 != (longlong *)0x0);
        }
        plVar7 = (longlong *)0x0;
LAB_1426e0d64:
        if (plVar10 == plVar7) {
          return lVar1;
        }
        plVar10 = *(longlong **)(lVar1 + 0x4f8);
        iVar3 = *(int *)(lVar1 + 0x500);
        for (plVar9 = plVar10; plVar9 != plVar10 + iVar3; plVar9 = plVar9 + 1) {
          if (*plVar9 != 0) {
            plVar6 = (longlong *)FUN_14292bbb0();
            plVar5 = (longlong *)*plVar9;
            for (plVar7 = plVar5; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[6]) {
              if (plVar7 == plVar6) goto LAB_1426e0db0;
            }
          }
          plVar5 = (longlong *)0x0;
LAB_1426e0db0:
          if (param_2 != (longlong *)0x0) {
            plVar6 = (longlong *)FUN_14292bbb0();
            plVar7 = param_2;
            do {
              plVar8 = param_2;
              if (plVar7 == plVar6) goto LAB_1426e0dd0;
              plVar7 = (longlong *)plVar7[6];
            } while (plVar7 != (longlong *)0x0);
          }
          plVar8 = (longlong *)0x0;
LAB_1426e0dd0:
          if (plVar5 == plVar8) {
            if ((int)((longlong)plVar9 - (longlong)plVar10 >> 3) != -1) {
              return lVar1;
            }
            break;
          }
        }
        local_res18[0] = *(undefined8 *)(lVar1 + 0x10);
        if (param_2 != (longlong *)0x0) {
          plVar9 = (longlong *)FUN_14292bbb0();
          plVar10 = param_2;
          do {
            plVar5 = param_2;
            if (plVar10 == plVar9) goto LAB_1426e0e30;
            plVar10 = (longlong *)plVar10[6];
          } while (plVar10 != (longlong *)0x0);
        }
        plVar5 = (longlong *)0x0;
LAB_1426e0e30:
        lVar4 = plVar5[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x368))(plVar5);
          lVar4 = plVar5[0x1f];
        }
        iVar3 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                          (lVar4 + 0x4f8,local_res18);
        if (iVar3 != -1) {
          return lVar1;
        }
      }
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 8;
    } while (iVar12 < *(int *)(param_1 + 0x2ba8));
  }
  return 0;
}



// FUNCTION 1426e0ea0 FUN_1426e0ea0 body=149 status=ok
// SIG undefined FUN_1426e0ea0(void)

longlong FUN_1426e0ea0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x2b50);
  plVar1 = plVar7 + *(int *)(param_1 + 0x2b58);
  do {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (param_2 != 0) {
      lVar4 = UCameraModifier::GetPrivateStaticClass();
      lVar5 = param_2;
      do {
        lVar6 = param_2;
        if (lVar5 == lVar4) goto LAB_1426e0f00;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar6 = 0;
LAB_1426e0f00:
    if (lVar3 == lVar6) {
      return lVar2;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 1426e0f40 FindId body=275 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
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
        if (*(ulonglong *)((longlong)iVar4 * 0xe0 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0xe0 + 0xd0 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1426e1060 FindId body=205 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        lVar3 = (longlong)iVar5;
        local_res8 = *param_3;
        local_res20 = *(undefined4 *)(lVar4 + lVar3 * 0x90);
        local_res24 = *(undefined4 *)(lVar4 + 4 + lVar3 * 0x90);
        local_resc = param_3[1];
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar1 != '\0') {
          *param_2 = iVar5;
          return param_2;
        }
        lVar4 = *param_1;
        iVar5 = *(int *)(lVar4 + 0x80 + lVar3 * 0x90);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1426e1170 FUN_1426e1170 body=1171 status=ok
// SIG undefined FUN_1426e1170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426e1170(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined8 *local_210;
  undefined1 *local_208;
  undefined1 local_1f8 [8];
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188;
  longlong local_150;
  longlong local_130;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1f0 = *(undefined4 *)(param_1 + 0x220);
  uStack_1ec = *(undefined4 *)(param_1 + 0x224);
  local_1e8 = *(undefined4 *)(param_1 + 0x228);
  uVar12 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b08ac0) && (_Init_thread_header(&DAT_146b08ac0), DAT_146b08ac0 == -1))
  {
    FName::FName(&DAT_146b08ab8,"FireImpulseOverlap",1);
    _Init_thread_footer(&DAT_146b08ac0);
  }
  local_218 = 0;
  FUN_1422ffb20(local_198,DAT_146b08ab8,local_1f8,0);
  local_188 = 1;
  if ((*(byte *)(param_1 + 0x2dc) & 2) != 0) {
    FCollisionQueryParams::AddIgnoredActor(local_198,*(undefined8 *)(param_1 + 0x118));
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  local_1c8 = CONCAT44(*(undefined4 *)(param_1 + 0x2d0),2);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  local_208 = local_198;
  local_218 = param_1 + 0x2f8;
  local_210 = &local_1c8;
  UWorld::OverlapMultiByObjectType(lVar4,&local_1e0,&local_1f0,&DAT_1464aa810);
  local_1b0 = (longlong *)0x0;
  local_1a8 = 0;
  if (0 < (int)local_1d8) {
    FUN_1407eed70(&local_1b8,local_1d8 & 0xffffffff);
  }
  lVar4 = local_1e0 + (longlong)(int)local_1d8 * 0x18;
  for (lVar10 = local_1e0; lVar10 != lVar4; lVar10 = lVar10 + 0x18) {
    lVar5 = FWeakObjectPtr::Get(lVar10 + 8);
    uVar13 = local_1a8;
    if (lVar5 != 0) {
      plVar6 = &local_1b8;
      if (local_1b0 != (longlong *)0x0) {
        plVar6 = local_1b0;
      }
      for (plVar9 = plVar6; plVar9 != plVar6 + (int)local_1a8; plVar9 = plVar9 + 1) {
        if (*plVar9 == lVar5) {
          if ((int)((longlong)plVar9 - (longlong)plVar6 >> 3) != -1) goto LAB_1426e1366;
          break;
        }
      }
      lVar11 = (longlong)(int)local_1a8;
      iVar3 = (int)local_1a8 + 1;
      local_1a8 = CONCAT44(local_1a8._4_4_,iVar3);
      if (local_1a8._4_4_ < iVar3) {
        FUN_1407eebb0(&local_1b8,uVar13 & 0xffffffff);
      }
      plVar6 = &local_1b8;
      if (local_1b0 != (longlong *)0x0) {
        plVar6 = local_1b0;
      }
      plVar6[lVar11] = lVar5;
    }
LAB_1426e1366:
  }
  plVar6 = &local_1b8;
  if (local_1b0 != (longlong *)0x0) {
    plVar6 = local_1b0;
  }
  uVar13 = (longlong)(int)local_1a8 & 0x1fffffffffffffff;
  if (plVar6 + (int)local_1a8 < plVar6) {
    uVar13 = uVar12;
  }
  if (uVar13 != 0) {
    do {
      plVar9 = (longlong *)*plVar6;
      if ((1e-08 < *(float *)(param_1 + 0x2e4)) && (plVar9 != (longlong *)0x0)) {
        uVar7 = UDestructibleInterface::GetPrivateStaticClass();
        plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar9,uVar7);
        if (plVar8 != (longlong *)0x0) {
          local_210 = (undefined8 *)CONCAT71(local_210._1_7_,*(char *)(param_1 + 0x2d4) == '\0');
          local_218 = CONCAT44(local_218._4_4_,*(undefined4 *)(param_1 + 0x2d8));
          (**(code **)(*plVar8 + 0x18))
                    (plVar8,*(undefined4 *)(param_1 + 0x2e4),&local_1f0,
                     *(undefined4 *)(param_1 + 0x2d0));
        }
      }
      local_1c8 = CONCAT44(uStack_1ec,local_1f0);
      local_210 = (undefined8 *)
                  (CONCAT71(local_210._1_7_,*(undefined1 *)(param_1 + 0x2dc)) & 0xffffffffffffff01);
      local_1c0 = local_1e8;
      local_218 = CONCAT44(local_218._4_4_,(uint)*(byte *)(param_1 + 0x2d4));
      (**(code **)(*plVar9 + 0x5f8))
                (plVar9,&local_1c8,*(undefined4 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2d8)
                );
      if ((*(byte *)(plVar9 + 0x5f) & 1) == 0) {
        local_58 = (longlong *)0x0;
        local_50 = 0;
        FUN_1426d2cc0(plVar9[0x23],local_118,0);
        plVar8 = local_118;
        if (local_58 != (longlong *)0x0) {
          plVar8 = local_58;
        }
        plVar1 = plVar8 + (int)local_50;
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          plVar2 = (longlong *)*plVar8;
          if ((longlong *)plVar2[0x2f] == plVar9) {
            local_210 = (undefined8 *)
                        (CONCAT71(local_210._1_7_,*(undefined1 *)(param_1 + 0x2dc)) &
                        0xffffffffffffff01);
            local_218 = CONCAT44(local_218._4_4_,(uint)*(byte *)(param_1 + 0x2d4));
            (**(code **)(*plVar2 + 0x4c0))
                      (plVar2,&local_1f0,*(undefined4 *)(param_1 + 0x2d0),
                       *(undefined4 *)(param_1 + 0x2d8));
            break;
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free(local_58);
        }
      }
      plVar6 = plVar6 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar13);
  }
  if (local_1b0 != (longlong *)0x0) {
    FMemory::Free(local_1b0);
  }
  if (local_130 != 0) {
    FMemory::Free();
  }
  if (local_150 != 0) {
    FMemory::Free();
  }
  if (local_1e0 != 0) {
    FMemory::Free(local_1e0);
  }
  return;
}



// FUNCTION 1426e1610 FUN_1426e1610 body=131 status=ok
// SIG undefined FUN_1426e1610(void)

void FUN_1426e1610(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  if (param_2 < *(uint *)(param_1 + 4)) {
    plVar1 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + (ulonglong)param_2 * 2));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x358))
                (plVar1,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                 ,0xaa9);
    }
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  FUN_1426e16a0((longlong)(int)param_2 * 0x58 + 0x100 + param_1,plVar1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))(plVar1);
  }
  return;
}



// FUNCTION 1426e16a0 FUN_1426e16a0 body=813 status=ok
// SIG undefined FUN_1426e16a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1426e16a0(char *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 *local_40;
  char *local_38;
  ulonglong local_30;
  ulonglong uVar8;
  
  puVar10 = auStack_68;
  local_30 = DAT_1468387a8 ^ (ulonglong)&local_48;
  uVar13 = 0;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x10)) {
    if (*param_1 == '\0') {
      (**(code **)(*param_2 + 0x60))
                (param_2,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    }
    else {
      puVar14 = *(undefined8 **)(param_1 + 0x18);
      uVar9 = (longlong)*(int *)(param_1 + 0x20) & 0x1fffffffffffffff;
      if (puVar14 + *(int *)(param_1 + 0x20) < puVar14) {
        uVar9 = uVar13;
      }
      uVar12 = uVar13;
      if (uVar9 != 0) {
        do {
          (**(code **)(*param_2 + 0x50))(param_2,*puVar14);
          uVar12 = uVar12 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar12 != uVar9);
      }
    }
    uVar12 = 0;
    plVar17 = *(longlong **)(param_1 + 8);
    uVar9 = (longlong)*(int *)(param_1 + 0x10) & 0x1fffffffffffffff;
    if (plVar17 + *(int *)(param_1 + 0x10) < plVar17) {
      uVar9 = uVar12;
    }
    if (uVar9 != 0) {
      do {
        *(undefined1 *)(*plVar17 + 0xd) = 2;
        lVar5 = FUN_142697a40();
        if (lVar5 != 0) {
          FUN_14269a620();
        }
        plVar17 = plVar17 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar9);
    }
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    if (*(int *)(param_1 + 0x14) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    }
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    if (*(int *)(param_1 + 0x24) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
    }
  }
  plVar17 = local_48;
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar9 = uVar13;
    uVar12 = uVar13;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        lVar5 = *(longlong *)(uVar9 + *(longlong *)(param_1 + 0x38));
        if (lVar5 != 0) {
          local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
          lVar6 = (**(code **)(*plVar17 + 0xa8))(plVar17,&local_48,0);
          if ((lVar6 != 0) && (uVar8 = uVar13, (uint)local_48 != 0)) {
            do {
              if (lVar5 == *(longlong *)(lVar6 + uVar8 * 8)) {
                *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
                break;
              }
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while (uVar7 < (uint)local_48);
          }
          (**(code **)**(undefined8 **)(uVar9 + *(longlong *)(param_1 + 0x38)))();
        }
        uVar7 = (int)uVar12 + 1;
        uVar9 = uVar9 + 8;
        uVar12 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 0x40));
    }
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    if (*(int *)(param_1 + 0x34) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
    }
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    if (*(int *)(param_1 + 0x44) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x48);
  local_38 = param_1 + 0x48;
  puVar14 = puVar16 + *(int *)(param_1 + 0x50);
  puVar11 = auStack_68;
  local_40 = puVar14;
  if (puVar16 != puVar14) {
    do {
      plVar2 = (longlong *)*puVar16;
      pcVar3 = *(code **)(*plVar2 + 0x48);
      *(undefined8 *)(puVar10 + -8) = 0x1426e18ad;
      uVar7 = (*pcVar3)(plVar2);
      if (uVar7 != 0) {
        lVar5 = (ulonglong)uVar7 * 8;
        uVar13 = (ulonglong)uVar7;
        if ((ulonglong)uVar7 == 0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          uVar9 = lVar5 + 0x1e;
          if (uVar9 <= lVar5 + 0xfU) {
            uVar9 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1426e18e6;
          plVar15 = (longlong *)
                    ((ulonglong)(puVar10 + -(uVar9 & 0xfffffffffffffff0) + 0x2f) &
                    0xfffffffffffffff0);
          puVar10 = puVar10 + -(uVar9 & 0xfffffffffffffff0);
        }
        pcVar3 = *(code **)(*plVar2 + 0x58);
        *(undefined8 *)(puVar10 + -8) = 0x1426e1908;
        (*pcVar3)(plVar2,plVar15,uVar7,0);
        if (uVar7 != 0) {
          do {
            puVar14 = (undefined8 *)*plVar15;
            local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
            pcVar3 = *(code **)(*plVar17 + 0xa8);
            *(undefined8 *)(puVar10 + -8) = 0x1426e192a;
            lVar5 = (*pcVar3)(plVar17,&local_48,0);
            if ((lVar5 != 0) && (uVar9 = 0, (uint)local_48 != 0)) {
              do {
                if (puVar14 == *(undefined8 **)(lVar5 + uVar9 * 8)) {
                  *(undefined8 *)(lVar5 + uVar9 * 8) = 0;
                  break;
                }
                uVar7 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar7;
              } while (uVar7 < (uint)local_48);
            }
            pcVar3 = *(code **)*puVar14;
            *(undefined8 *)(puVar10 + -8) = 0x1426e195d;
            (*pcVar3)(puVar14);
            plVar15 = plVar15 + 1;
            uVar13 = uVar13 - 1;
            puVar14 = local_40;
          } while (uVar13 != 0);
        }
      }
      pcVar3 = *(code **)*plVar2;
      *(undefined8 *)(puVar10 + -8) = 0x1426e197d;
      (*pcVar3)(plVar2);
      puVar16 = puVar16 + 1;
      puVar11 = puVar10;
    } while (puVar16 != puVar14);
  }
  pcVar4 = local_38;
  iVar1 = *(int *)(local_38 + 0xc);
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  if (iVar1 != 0) {
    *(undefined8 *)(puVar11 + -8) = 0x1426e19a7;
    TArray<void_*,FDefaultAllocator>::ResizeTo(pcVar4,0);
  }
  *(undefined8 *)(puVar11 + -8) = 0x1426e19b3;
  return;
}



// FUNCTION 1426e19d0 FUN_1426e19d0 body=168 status=ok
// SIG undefined FUN_1426e19d0(void)

undefined8 * FUN_1426e19d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    return (undefined8 *)0x0;
  }
  puVar7 = (undefined8 *)0x0;
  sVar2 = *(short *)(param_1 + 0x60 + (ulonglong)param_2 * 2);
  if (DAT_146534a78 != DAT_146534aa4) {
    puVar4 = DAT_146534ab0;
    if (DAT_146534ab0 == (undefined *)0x0) {
      puVar4 = &DAT_146534aa8;
    }
    iVar3 = *(int *)(puVar4 + ((longlong)DAT_146534ab8 - 1U & (longlong)sVar2) * 4);
    while (iVar3 != -1) {
      lVar1 = (longlong)iVar3 * 0x18;
      if (*(short *)(lVar1 + DAT_146534a70) == sVar2) {
        puVar6 = (undefined8 *)(lVar1 + DAT_146534a70);
        if (iVar3 != -1) goto LAB_1426e1a5e;
        break;
      }
      iVar3 = *(int *)(lVar1 + 0x10 + DAT_146534a70);
    }
  }
  puVar6 = puVar7;
LAB_1426e1a5e:
  puVar5 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = puVar7;
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar5;
  }
  return puVar7;
}



// FUNCTION 1426e1a80 FUN_1426e1a80 body=78 status=ok
// SIG undefined FUN_1426e1a80(void)

undefined8 FUN_1426e1a80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001426e1aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x6d0))(plVar2,*(undefined8 *)(param_1 + 0x18),1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1426e1ad0 FUN_1426e1ad0 body=381 status=ok
// SIG undefined FUN_1426e1ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1426e1ad0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1426e1e40(param_1,param_3);
  uVar2 = uRam00000001468b5b78;
  if (lVar4 == 0) {
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar2;
    uVar2 = uRam00000001468b5b88;
    param_2[2] = _DAT_1468b5b80;
    param_2[3] = uVar2;
    uVar2 = uRam00000001468b5b98;
    param_2[4] = _DAT_1468b5b90;
    param_2[5] = uVar2;
  }
  else {
    uVar7 = *(undefined4 *)(lVar4 + 0x210);
    uVar8 = *(undefined4 *)(lVar4 + 0x214);
    uVar9 = *(undefined4 *)(lVar4 + 0x218);
    uVar10 = *(undefined4 *)(lVar4 + 0x21c);
    uVar11 = *(undefined4 *)(lVar4 + 0x220);
    uVar12 = *(undefined4 *)(lVar4 + 0x224);
    uVar13 = *(undefined4 *)(lVar4 + 0x228);
    uVar14 = *(undefined4 *)(lVar4 + 0x22c);
    uVar15 = *(undefined4 *)(lVar4 + 0x230);
    uVar16 = *(undefined4 *)(lVar4 + 0x234);
    uVar17 = *(undefined4 *)(lVar4 + 0x238);
    uVar18 = *(undefined4 *)(lVar4 + 0x23c);
    lVar5 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_1423af5a0(lVar4);
      local_98 = 0;
      if ((param_4 == 0) && (lVar5 != 0)) {
        iVar3 = FUN_1427da5a0();
        if ((iVar3 < 0) || (*(int *)(lVar5 + 0x48) <= iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          param_4 = *(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x40) + (longlong)iVar3 * 8) + 0x90);
        }
      }
      iVar3 = FUN_1423ac950(lVar4,param_4);
      if (iVar3 != -1) {
        puVar6 = (undefined4 *)FUN_1423acfd0(lVar4,local_88,iVar3);
        uVar7 = *puVar6;
        uVar8 = puVar6[1];
        uVar9 = puVar6[2];
        uVar10 = puVar6[3];
        uVar11 = puVar6[4];
        uVar12 = puVar6[5];
        uVar13 = puVar6[6];
        uVar14 = puVar6[7];
        uVar15 = puVar6[8];
        uVar16 = puVar6[9];
        uVar17 = puVar6[10];
        uVar18 = puVar6[0xb];
      }
    }
    *(undefined4 *)param_2 = uVar7;
    *(undefined4 *)((longlong)param_2 + 4) = uVar8;
    *(undefined4 *)(param_2 + 1) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
    *(undefined4 *)(param_2 + 2) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar12;
    *(undefined4 *)(param_2 + 3) = uVar13;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar14;
    *(undefined4 *)(param_2 + 4) = uVar15;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar16;
    *(undefined4 *)(param_2 + 5) = uVar17;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar18;
  }
  return param_2;
}



// FUNCTION 1426e1c50 FUN_1426e1c50 body=21 status=ok
// SIG undefined FUN_1426e1c50(void)

void FUN_1426e1c50(longlong param_1,longlong *param_2,longlong *param_3)

{
  *param_2 = param_1 + 0x2bf8;
  *param_3 = param_1 + 0x2c08;
  return;
}



// FUNCTION 1426e1c70 FUN_1426e1c70 body=33 status=ok
// SIG undefined FUN_1426e1c70(void)

undefined8 FUN_1426e1c70(longlong param_1,undefined8 param_2)

{
  FUN_1426d3f40(param_2,param_1 + 0x1ea0);
  return param_2;
}



// FUNCTION 1426e1ca0 FUN_1426e1ca0 body=122 status=ok
// SIG undefined FUN_1426e1ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1426e1ca0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_688 [32];
  undefined1 local_668 [1560];
  longlong local_50;
  longlong local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x720))(param_1,local_668);
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1426e1d20 FUN_1426e1d20 body=123 status=ok
// SIG undefined FUN_1426e1d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1426e1d20(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_688 [32];
  undefined1 local_668 [1560];
  longlong local_50;
  longlong local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  lVar1 = (**(code **)(*param_1 + 0x720))(param_1,local_668);
  *param_2 = *(undefined8 *)(lVar1 + 0xc);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x14);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1426e1da0 FUN_1426e1da0 body=154 status=ok
// SIG undefined FUN_1426e1da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426e1da0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_688 [32];
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_65c;
  undefined4 local_654;
  longlong local_50;
  longlong local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  (**(code **)(*param_1 + 0x720))(param_1,&local_668);
  *param_2 = local_668;
  *(undefined4 *)(param_2 + 1) = local_660;
  *param_3 = local_65c;
  *(undefined4 *)(param_3 + 1) = local_654;
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426e1e40 FUN_1426e1e40 body=1038 status=ok
// SIG undefined FUN_1426e1e40(void)

ulonglong FUN_1426e1e40(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
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
  
  uVar8 = 0;
  uVar13 = 0;
  if (param_2 == 0) {
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x2f0);
    if (cVar6 != '\0') {
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x2f0);
      return uVar8;
    }
    lVar10 = *(longlong *)(param_1 + 0x2d8);
    lVar9 = *(longlong *)(param_1 + 0x2d0);
  }
  else {
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x2f8);
    if (cVar6 != '\0') {
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x2f8);
      return uVar8;
    }
    lVar10 = *(longlong *)(param_1 + 0x2e8);
    lVar9 = *(longlong *)(param_1 + 0x2e0);
  }
  if ((lVar9 != 0) || ((lVar10 != 0 && (lVar9 = *(longlong *)(param_1 + 0x118), lVar9 != 0)))) {
    if (lVar10 == 0) {
      uVar11 = *(ulonglong *)(lVar9 + 0x168);
      if (uVar11 != 0) {
        lVar10 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        uVar8 = uVar13;
        if (bVar5) {
          return uVar11;
        }
      }
    }
    else {
      plVar2 = (longlong *)(lVar9 + 0x2b0);
      uVar3 = *(uint *)(lVar9 + 0x2d8);
      puVar1 = (uint *)(lVar9 + 0x2c0);
      local_98 = 0;
      uStack_94 = 1;
      uStack_84 = 0;
      uStack_80 = 0;
      if (uVar3 != 0) {
        puVar16 = *(uint **)(lVar9 + 0x2d0);
        if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar4 = *puVar16;
        uVar11 = uVar8;
        uVar14 = uVar8;
        while (uVar4 == 0) {
          iVar7 = (int)uVar11;
          uStack_80 = (int)uVar14 + 0x20;
          uVar14 = (ulonglong)uStack_80;
          local_98 = iVar7 + 1;
          uVar11 = (ulonglong)local_98;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_1426e201e;
          uVar4 = puVar16[(longlong)iVar7 + 1];
        }
        uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
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
        uStack_84 = (uStack_80 - iVar7) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_1426e201e:
          uStack_84 = uVar3;
        }
      }
      uVar4 = *(uint *)(lVar9 + 0x2d8);
      uStack_60 = 0xffffffff;
      uStack_5c = uStack_84;
      local_58 = CONCAT44(uStack_7c,uStack_80);
      uStack_48 = CONCAT44(uStack_94,local_98);
      uVar15 = uVar4 & 0xffffffe0;
      uStack_70 = local_98;
      uStack_6c = uStack_94;
      local_68 = puVar1;
      local_50 = plVar2;
      puStack_40 = puVar1;
      uStack_30 = local_58;
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      uStack_84 = uVar4;
      if (uVar4 != uVar3) {
        puVar16 = *(uint **)(lVar9 + 0x2d0);
        if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar12 = puVar16[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
        iVar7 = (int)uVar4 >> 5;
        while (uVar12 == 0) {
          uVar15 = uVar15 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_1426e20f7;
          uVar12 = puVar16[(longlong)iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
        iVar7 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar12 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_84 = (uVar15 - iVar7) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_1426e20f7:
          uStack_84 = uVar3;
        }
      }
      while( true ) {
        if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          return 0;
        }
        uVar11 = *(ulonglong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
        if (*(longlong *)(uVar11 + 0x18) == lVar10) break;
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      }
      lVar10 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if ((*(longlong *)(uVar11 + 0x2d8) != 0) &&
           (uVar11 = *(ulonglong *)(*(longlong *)(uVar11 + 0x2d8) + 0x168), uVar11 != 0)) {
          lVar10 = FUN_1429f11d0();
          if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          uVar8 = uVar13;
          if (bVar5) {
            uVar8 = uVar11;
          }
        }
      }
      else {
        lVar10 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        uVar8 = uVar13;
        if (bVar5) {
          uVar8 = uVar11;
        }
      }
    }
  }
  return uVar8;
}



// FUNCTION 1426e2250 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::GetConstraintForce(param_1 + 0x318);
  return;
}



// FUNCTION 1426e2260 FUN_1426e2260 body=29 status=ok
// SIG undefined FUN_1426e2260(void)

float FUN_1426e2260(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1426c6630(param_1 + 0x318);
  return fVar1 * 57.295776;
}



// FUNCTION 1426e2280 FUN_1426e2280 body=29 status=ok
// SIG undefined FUN_1426e2280(void)

float FUN_1426e2280(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1426c6680(param_1 + 0x318);
  return fVar1 * 57.295776;
}



// FUNCTION 1426e22a0 FUN_1426e22a0 body=29 status=ok
// SIG undefined FUN_1426e22a0(void)

float FUN_1426e22a0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1426c66d0(param_1 + 0x318);
  return fVar1 * 57.295776;
}



// FUNCTION 1426e22c0 FUN_1426e22c0 body=61 status=ok
// SIG undefined FUN_1426e22c0(void)

float FUN_1426e22c0(longlong param_1)

{
  float fVar1;
  
  fVar1 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x470) * 0.008726646);
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1 / *(float *)(param_1 + 0x480));
  return fVar1 * 57.295776 + fVar1 * 57.295776;
}



// FUNCTION 1426e2300 FUN_1426e2300 body=154 status=ok
// SIG undefined FUN_1426e2300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1426e2300(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  undefined1 auStack_6a8 [32];
  undefined4 local_688;
  undefined1 local_678 [1560];
  longlong local_60;
  longlong local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  fVar1 = *(float *)((longlong)param_1 + 0x474);
  local_688 = 0;
  if (fVar1 <= 0.0) {
    lVar2 = (**(code **)(*param_1 + 0x720))(0,local_678);
    fVar1 = *(float *)(lVar2 + 0x18);
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
  }
  return fVar1;
}



// FUNCTION 1426e23a0 FUN_1426e23a0 body=153 status=ok
// SIG undefined FUN_1426e23a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1426e23a0(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_698 [32];
  undefined1 local_678 [28];
  float local_65c;
  longlong local_60;
  longlong local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_698;
  (**(code **)(*param_1 + 0x720))(param_1,local_678);
  uVar1 = (ulonglong)(uint)local_65c;
  if (local_65c <= 0.0) {
    uVar1 = (**(code **)(*param_1 + 0x778))(param_1);
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1426e2440 FUN_1426e2440 body=8 status=ok
// SIG undefined FUN_1426e2440(void)

undefined8 FUN_1426e2440(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



// FUNCTION 1426e2450 FUN_1426e2450 body=89 status=ok
// SIG undefined FUN_1426e2450(void)

ulonglong FUN_1426e2450(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uVar3 = FUN_1428cc5b0(lVar1);
    return uVar3;
  }
  plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar1 = plVar2[0x1f];
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar1 = plVar2[0x1f];
  }
  return (ulonglong)*(uint *)(lVar1 + 0x38);
}



// FUNCTION 1426e24b0 FUN_1426e24b0 body=33 status=ok
// SIG undefined FUN_1426e24b0(void)

undefined8 FUN_1426e24b0(longlong param_1,undefined8 param_2)

{
  FUN_1426d3f40(param_2,param_1 + 0x2500);
  return param_2;
}



// FUNCTION 1426e24e0 FUN_1426e24e0 body=37 status=ok
// SIG undefined FUN_1426e24e0(void)

float FUN_1426e24e0(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x2e4) / *(float *)(param_1 + 0x2d8);
  if (fVar1 < 0.0) {
    return 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  return fVar1;
}



// FUNCTION 1426e2530 FUN_1426e2530 body=20 status=ok
// SIG undefined FUN_1426e2530(void)

undefined8 FUN_1426e2530(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(uint *)(param_1 + 4)) {
    uVar1 = FUN_1426e2550((int)*(short *)(param_1 + 0x60 + (ulonglong)param_2 * 2));
    return uVar1;
  }
  return 0;
}



// FUNCTION 1426e2550 FUN_1426e2550 body=155 status=ok
// SIG undefined FUN_1426e2550(void)

undefined8 FUN_1426e2550(short param_1)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (DAT_146534a78 != DAT_146534aa4) {
    puVar3 = DAT_146534ab0;
    if (DAT_146534ab0 == (undefined *)0x0) {
      puVar3 = &DAT_146534aa8;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)DAT_146534ab8 - 1U & (longlong)param_1) * 4);
    while (iVar2 != -1) {
      lVar1 = (longlong)iVar2 * 0x18;
      if (*(short *)(lVar1 + DAT_146534a70) == param_1) {
        puVar4 = (undefined8 *)(lVar1 + DAT_146534a70);
        if (iVar2 != -1) goto LAB_1426e25ce;
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + DAT_146534a70);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_1426e25ce:
  puVar6 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  if (puVar6 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426e25e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*(longlong *)*puVar6 + 0x30))();
    return uVar5;
  }
  return 0;
}



// FUNCTION 1426e25f0 GetPhysxObjectSize body=172 status=ok
// SIG undefined GetPhysxObjectSize(void)

undefined4 GetPhysxObjectSize(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  PxCollection *pPVar2;
  undefined **local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)physx::PxSerialization::createSerializationRegistry(DAT_146b08400);
  pPVar2 = PxCreateCollection();
  (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_1,0);
  physx::PxSerialization::complete(pPVar2,plVar1,param_2,0);
  local_10 = 0;
  local_18 = &PTR_LAB_14516f0f8;
  physx::PxSerialization::serializeCollectionToBinary(&local_18,pPVar2,plVar1,param_2,0);
  (**(code **)(*(longlong *)pPVar2 + 0x70))(pPVar2);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  return local_10;
}



// FUNCTION 1426e26a0 GetPlayerController body=138 status=ok
// SIG undefined GetPlayerController(void)

longlong UPlayer::GetPlayerController(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  if (param_2 == 0) {
    return *(longlong *)(param_1 + 0x30);
  }
  UWorld::GetPlayerControllerIterator(param_2,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    lVar1 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if (lVar1 != 0) {
      lVar2 = FUN_14270bb10(lVar1);
      if (lVar2 == param_1) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 1426e2730 GetSaveGamePath body=91 status=ok
// SIG undefined GetSaveGamePath(void)

undefined8
FGenericSaveGameSystem::GetSaveGamePath(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_14167d0d0(local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%sSaveGames/%s.sav",puVar2,param_3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1426e2790 FUN_1426e2790 body=8 status=ok
// SIG undefined FUN_1426e2790(void)

undefined ** FUN_1426e2790(void)

{
  return &PTR_PTR_146534b18;
}



// FUNCTION 1426e27a0 FUN_1426e27a0 body=259 status=ok
// SIG undefined FUN_1426e27a0(void)

undefined8 * FUN_1426e27a0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_28;
  float local_20;
  
  if (*(float *)(param_1 + 0x2e4) == 0.0) {
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x214);
    fVar3 = *(float *)(param_1 + 0x218);
    fVar4 = *(float *)(param_1 + 0x21c);
    fVar5 = fVar2 * 0.0 - fVar3 * 0.0;
    fVar6 = fVar3 * 1.0 - fVar1 * 0.0;
    fVar7 = fVar1 * 0.0 - fVar2 * 1.0;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    local_20 = *(float *)(param_1 + 0x228) +
               ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 0.0) * *(float *)(param_1 + 0x2d8)
    ;
    local_28 = CONCAT44(((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 0.0) *
                        *(float *)(param_1 + 0x2d8) + *(float *)(param_1 + 0x224),
                        *(float *)(param_1 + 0x220) +
                        ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 1.0) *
                        *(float *)(param_1 + 0x2d8));
  }
  else {
    local_28 = *(undefined8 *)(param_1 + 0x2e8);
    local_20 = *(float *)(param_1 + 0x2f0);
  }
  *param_2 = local_28;
  *(float *)(param_2 + 1) = local_20;
  return param_2;
}



// FUNCTION 1426e28b0 FUN_1426e28b0 body=31 status=ok
// SIG undefined FUN_1426e28b0(void)

undefined8 FUN_1426e28b0(longlong param_1,undefined8 param_2)

{
  FUN_1426ec670(param_1,param_2,*(undefined4 *)(param_1 + 0x2d8));
  return param_2;
}



// FUNCTION 1426e28d0 GetStreamingStatus body=203 status=ok
// SIG undefined GetStreamingStatus(void)

void FGenericDVRStreamingSystem::GetStreamingStatus(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar2 = 0;
  param_2[1] = *(undefined1 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(undefined2 **)(param_2 + 8) != &DAT_143f3eda8) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    iVar1 = 0;
    if (*(int *)(param_2 + 0x14) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 8);
      iVar1 = *(int *)(param_2 + 0x10);
    }
    *(int *)(param_2 + 0x10) = iVar1;
    if (*(int *)(param_2 + 0x14) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 8);
    }
  }
  if (*(undefined2 **)(param_2 + 0x18) != &DAT_143f3eda8) {
    iVar1 = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    if (*(int *)(param_2 + 0x24) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0x18);
      iVar1 = *(int *)(param_2 + 0x20);
    }
    *(int *)(param_2 + 0x20) = iVar1;
    if (*(int *)(param_2 + 0x24) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 0x18);
    }
  }
  if (*(undefined2 **)(param_2 + 0x28) != &DAT_143f3eda8) {
    *(undefined4 *)(param_2 + 0x30) = 0;
    if (*(int *)(param_2 + 0x34) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0x28,0);
      iVar2 = *(int *)(param_2 + 0x30);
    }
    *(int *)(param_2 + 0x30) = iVar2;
    if (*(int *)(param_2 + 0x34) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 0x28,iVar2);
    }
  }
  return;
}



// FUNCTION 1426e29a0 FUN_1426e29a0 body=108 status=ok
// SIG undefined FUN_1426e29a0(void)

undefined ** FUN_1426e29a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b08ad4) {
    _Init_thread_header(&DAT_146b08ad4);
    if (DAT_146b08ad4 == -1) {
      atexit((_func_5014 *)&LAB_143eb79d0);
      _Init_thread_footer(&DAT_146b08ad4);
      return &PTR_PTR_146534b20;
    }
  }
  return &PTR_PTR_146534b20;
}



// FUNCTION 1426e2a10 FUN_1426e2a10 body=128 status=ok
// SIG undefined FUN_1426e2a10(void)

void FUN_1426e2a10(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x1a0);
  uStack_14 = *(undefined4 *)(param_1 + 0x1a4);
  uStack_10 = *(undefined4 *)(param_1 + 0x1a8);
  uStack_c = *(undefined4 *)(param_1 + 0x1ac);
  FQuat::Rotator(&local_18,&local_28);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  uVar1 = *(undefined4 *)(param_1 + 0x1b4);
  uVar2 = *(undefined4 *)(param_1 + 0x1b8);
  *param_2 = *(undefined4 *)(param_1 + 0x1b0);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return;
}



// FUNCTION 1426e2a90 FUN_1426e2a90 body=182 status=ok
// SIG undefined FUN_1426e2a90(void)

longlong FUN_1426e2a90(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = FUN_1429d7ab0();
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
      return lVar1;
    }
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = FUN_14291fb80();
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
      return *(longlong *)(lVar1 + 0x488);
    }
  }
  return 0;
}



// FUNCTION 1426e2b50 FUN_1426e2b50 body=108 status=ok
// SIG undefined FUN_1426e2b50(void)

undefined ** FUN_1426e2b50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b08ad8) {
    _Init_thread_header(&DAT_146b08ad8);
    if (DAT_146b08ad8 == -1) {
      atexit((_func_5014 *)&LAB_143eb79e0);
      _Init_thread_footer(&DAT_146b08ad8);
      return &PTR_PTR_146534b30;
    }
  }
  return &PTR_PTR_146534b30;
}



// FUNCTION 1426e2bc0 FUN_1426e2bc0 body=91 status=ok
// SIG undefined FUN_1426e2bc0(void)

longlong FUN_1426e2bc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1800) != 0) {
    FUN_1426da4d0(param_1 + 0x1800,*(undefined8 *)(param_1 + 0x458));
    if (*(longlong *)(param_1 + 0x1800) != 0) {
      return *(longlong *)(param_1 + 0x1800);
    }
  }
  FUN_1426da4d0(param_1 + 0x1190,*(undefined8 *)(param_1 + 0x458));
  return *(longlong *)(param_1 + 0x1190);
}



// FUNCTION 1426e2c20 FUN_1426e2c20 body=115 status=ok
// SIG undefined FUN_1426e2c20(void)

void FUN_1426e2c20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1800) != 0) {
    FUN_1426da4d0(param_1 + 0x1800,*(undefined8 *)(param_1 + 0x458));
    if (*(longlong *)(param_1 + 0x1800) != 0) {
      FUN_1426e2a90(param_1 + 0x1800);
      return;
    }
  }
  FUN_1426da4d0(param_1 + 0x1190,*(undefined8 *)(param_1 + 0x458));
  FUN_1426e2a90(param_1 + 0x1190);
  return;
}



// FUNCTION 1426e2cc0 FUN_1426e2cc0 body=391 status=ok
// SIG undefined FUN_1426e2cc0(void)

void FUN_1426e2cc0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  short sVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = (**(code **)(*param_2 + 0x6d0))(param_2,param_3,1), lVar1 != 0)) {
    local_68 = DAT_1468b5da0;
    local_60 = DAT_1468b5da8;
    plVar2 = *(longlong **)(lVar1 + 0x110);
    plVar6 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      plVar6 = *(longlong **)(lVar1 + 0x118);
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 == plVar2) {
        sVar5 = *(short *)(lVar1 + 6);
      }
      else {
        sVar5 = *(short *)(lVar1 + 8);
      }
      plVar2 = (longlong *)FUN_1426e2550((int)sVar5);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x358))
                  (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      plVar7 = (longlong *)0x0;
      if ((short)plVar6[1] == 6) {
        plVar7 = plVar6;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
        puVar3 = (undefined4 *)(**(code **)(*plVar7 + 0xa0))(plVar7,local_38);
        local_48 = *puVar3;
        uStack_44 = puVar3[1];
        uStack_40 = puVar3[2];
        uStack_3c = puVar3[3];
        puVar4 = (undefined8 *)FQuat::Rotator(&local_48,local_58);
        local_68 = *puVar4;
        local_60 = *(undefined4 *)(puVar4 + 1);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))(plVar2);
      }
    }
    (**(code **)(*param_1 + 0x410))(param_1,param_2,param_3,param_4,&local_68,param_5);
  }
  return;
}



// FUNCTION 1426e2e50 FUN_1426e2e50 body=35 status=ok
// SIG undefined FUN_1426e2e50(void)

void FUN_1426e2e50(longlong *param_1)

{
  (**(code **)(*param_1 + 0x410))();
  return;
}



// FUNCTION 1426e2e80 FUN_1426e2e80 body=34 status=ok
// SIG undefined FUN_1426e2e80(void)

void FUN_1426e2e80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x410))();
  return;
}



// FUNCTION 1426e2eb0 FUN_1426e2eb0 body=312 status=ok
// SIG undefined FUN_1426e2eb0(void)

void FUN_1426e2eb0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong *local_res10;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong **local_20;
  undefined1 *local_18;
  
  local_res10 = param_2;
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x400))();
  }
  if (local_res10 != (longlong *)0x0) {
    lVar2 = (**(code **)(*local_res10 + 0x6d0))(local_res10,param_3,1);
    if (lVar2 != 0) {
      local_30 = param_5;
      local_20 = &local_res10;
      local_18 = &stack0x00000030;
      lVar1 = *(longlong *)(lVar2 + 0x110);
      lVar5 = lVar1;
      if (lVar1 == 0) {
        lVar5 = *(longlong *)(lVar2 + 0x118);
      }
      if (lVar5 != 0) {
        if (lVar5 == lVar1) {
          sVar4 = *(short *)(lVar2 + 6);
        }
        else {
          sVar4 = *(short *)(lVar2 + 8);
        }
        local_38 = param_4;
        local_28 = param_1;
        plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x358))
                    (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0x136);
        }
        lVar2 = 0;
        if (*(short *)(lVar5 + 8) == 6) {
          lVar2 = lVar5;
        }
        if (lVar2 != 0) {
          FUN_1426d6c90(&local_38);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x360))(plVar3);
        }
      }
      param_1[0x2f] = (longlong)local_res10;
      param_1[0x30] = param_3;
    }
  }
  return;
}



// FUNCTION 1426e2ff0 FUN_1426e2ff0 body=675 status=ok
// SIG undefined FUN_1426e2ff0(void)

void FUN_1426e2ff0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int *piVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  
  piVar13 = (int *)(param_1 + 0x4e8);
  lVar11 = 3;
  do {
    plVar10 = *(longlong **)(piVar13 + -2);
    plVar12 = plVar10 + (longlong)*piVar13 * 2;
    for (; plVar10 != plVar12; plVar10 = plVar10 + 2) {
      plVar4 = (longlong *)*plVar10;
      if (plVar10[1] == 0) {
        local_res20 = 0;
        (**(code **)(*plVar4 + 0x58))(plVar4,&local_res20);
        piVar1 = *(int **)(local_res20 + 0x10);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
          lVar7 = *(longlong *)(piVar1 + 2);
LAB_1426e3074:
          if ((lVar7 != 0) &&
             (plVar4 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x138), plVar4 != (longlong *)0x0)) {
            if (plVar4[0x23] == 0) {
              (**(code **)(*plVar4 + 0x3b0))(plVar4,0);
            }
            else {
              FUN_142227350(plVar4[0x23]);
            }
          }
        }
      }
      else {
        plVar8 = (longlong *)0x0;
        if ((short)plVar4[1] == 6) {
          plVar8 = plVar4;
        }
        plVar9 = (longlong *)0x0;
        if ((short)plVar4[1] == 7) {
          plVar9 = plVar4;
        }
        if ((plVar8 == (longlong *)0x0) ||
           (pbVar5 = (byte *)(**(code **)(*plVar8 + 0x178))(plVar8,local_res10), (*pbVar5 & 1) != 0)
           ) {
          if ((plVar9 != (longlong *)0x0) ||
             ((plVar8 != (longlong *)0x0 &&
              (pbVar5 = (byte *)(**(code **)(*plVar8 + 0x178))(plVar8,local_res18),
              (*pbVar5 & 1) != 0)))) {
            plVar4 = (longlong *)*plVar10;
            lVar7 = plVar10[1];
            cVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,"PxRigidActor");
            piVar1 = (int *)plVar4[2];
            plVar8 = (longlong *)0x0;
            if (cVar2 != '\0') {
              plVar8 = plVar4;
            }
            if (((piVar1 == (int *)0x0) || (*piVar1 != 7)) || (*(longlong *)(piVar1 + 2) == 0)) {
              (**(code **)(*plVar8 + 0xc0))(plVar8,lVar7,0);
              iVar3 = (**(code **)(*plVar8 + 200))(plVar8);
              if (((iVar3 == 0) && (piVar1 = (int *)plVar4[2], piVar1 != (int *)0x0)) &&
                 ((*piVar1 == 1 &&
                  ((lVar7 = *(longlong *)(piVar1 + 2), lVar7 != 0 &&
                   (lVar6 = FWeakObjectPtr::Get(lVar7 + 0x138), lVar6 != 0)))))) {
                *(undefined8 *)(lVar7 + 0x110) = 0;
                *(undefined8 *)(lVar7 + 0x118) = 0;
                *(undefined8 *)(lVar7 + 0x120) = 0;
                (**(code **)*plVar4)(plVar4);
              }
            }
          }
        }
        else {
          plVar4 = (longlong *)*plVar10;
          lVar7 = plVar10[1];
          cVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,"PxRigidActor");
          piVar1 = (int *)plVar4[2];
          plVar8 = (longlong *)0x0;
          if (cVar2 != '\0') {
            plVar8 = plVar4;
          }
          if (((piVar1 == (int *)0x0) || (*piVar1 != 7)) || (*(longlong *)(piVar1 + 2) == 0)) {
            (**(code **)(*plVar8 + 0xc0))(plVar8,lVar7);
            iVar3 = (**(code **)(*plVar8 + 200))(plVar8);
            if (((iVar3 == 0) && (piVar1 = (int *)plVar4[2], piVar1 != (int *)0x0)) &&
               (*piVar1 == 1)) {
              lVar7 = *(longlong *)(piVar1 + 2);
              goto LAB_1426e3074;
            }
          }
        }
      }
    }
    *piVar13 = 0;
    if (piVar13[1] != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(piVar13 + -2,0);
    }
    piVar13 = piVar13 + 4;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 1426e32a0 FUN_1426e32a0 body=191 status=ok
// SIG undefined FUN_1426e32a0(void)

void FUN_1426e32a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(float *)(lVar2 + 0x790) - *(float *)(param_1 + 7) < *(float *)((longlong)param_1 + 0x2c)
         ) {
        return;
      }
      lVar2 = *param_2;
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x10 + lVar3);
      if (((cVar1 != '\0') && (cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x30 + lVar3), cVar1 != '\0')
          ) && (0 < *(int *)(lVar3 + 0x50 + lVar2))) {
        FUN_1426db980(param_1,lVar2 + 8 + lVar3,lVar2 + 0x28 + lVar3,lVar2 + 0x48 + lVar3);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x70;
    } while (iVar4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1426e3360 HelperCollectUsage body=610 status=ok
// SIG undefined HelperCollectUsage(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void HelperCollectUsage(longlong *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  PxCollection *pPVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  int local_b8 [2];
  longlong *local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined **local_90;
  uint local_88;
  longlong *local_80;
  int *local_78;
  longlong *local_70;
  ulonglong *local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  local_a0 = param_2;
  local_80 = param_3;
  local_78 = param_4;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,0>,0>_>
  ::GetKeys<FDefaultAllocator>(param_1,&local_b0);
  uVar1 = local_a0;
  iVar7 = (int)local_a8;
  plVar8 = local_b0;
  plVar2 = local_b0;
  if (0 < (int)local_a8) {
    local_68 = &local_60;
    uVar5 = local_a8 & 0xffffffff;
    do {
      local_98 = uVar5;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(param_1,local_b8,plVar8);
      plVar2 = (longlong *)0x0;
      if (local_b8[0] != -1) {
        plVar2 = (longlong *)(*param_1 + (longlong)local_b8[0] * 0x28);
      }
      plVar6 = plVar2 + 2;
      if (plVar2 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      plVar2 = (longlong *)physx::PxSerialization::createSerializationRegistry(DAT_146b08400);
      pPVar3 = PxCreateCollection();
      iVar7 = 0;
      if (0 < (int)plVar6[1]) {
        lVar4 = 0;
        do {
          (**(code **)(*(longlong *)pPVar3 + 8))(pPVar3,*(undefined8 *)(lVar4 + *plVar6),0);
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 8;
          uVar5 = local_98;
        } while (iVar7 < (int)plVar6[1]);
      }
      physx::PxSerialization::complete(pPVar3,plVar2,0,0);
      local_88 = 0;
      local_90 = &PTR_LAB_14516f0f8;
      local_c8 = 0;
      physx::PxSerialization::serializeCollectionToBinary(&local_90,pPVar3,plVar2);
      (**(code **)(*(longlong *)pPVar3 + 0x70))(pPVar3);
      (**(code **)(*plVar2 + 0x38))(plVar2);
      local_60 = (ulonglong)local_88;
      *local_80 = *local_80 + local_60;
      *local_78 = *local_78 + (int)plVar6[1];
      local_58 = (longlong)(int)plVar6[1];
      local_70 = plVar8;
      FUN_1426d2800(uVar1,&local_a0,&local_70);
      plVar8 = plVar8 + 2;
      uVar5 = uVar5 - 1;
      local_90 = &PTR__purecall_143f3ef70;
    } while (uVar5 != 0);
    local_98 = 0;
    iVar7 = (int)local_a8;
    plVar8 = local_b0;
    plVar2 = local_b0;
  }
  for (; plVar6 = local_b0, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_b0 = plVar2;
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
    plVar2 = local_b0;
    local_b0 = plVar6;
  }
  if (local_b0 != (longlong *)0x0) {
    local_b0 = plVar2;
    FMemory::Free(plVar6);
  }
  return;
}



// FUNCTION 1426e35d0 FUN_1426e35d0 body=331 status=ok
// SIG undefined FUN_1426e35d0(void)

void FUN_1426e35d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1426f0720();
  lVar3 = 0;
  plVar1 = (longlong *)FUN_1426e1e40(param_1,0);
  lVar2 = lVar3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x6d0))(plVar1,*(undefined8 *)(param_1 + 0x338),1);
  }
  plVar1 = (longlong *)FUN_1426e1e40(param_1,1);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar1 + 0x6d0))(plVar1,*(undefined8 *)(param_1 + 0x340),1);
  }
  if ((lVar2 != 0) || (lVar3 != 0)) {
    uStack_10 = 0;
    local_18 = FUN_1426e7100;
    local_28 = 0;
    local_20 = 0;
    puVar4 = (undefined8 *)operator_new(0x30,&local_28);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(puVar4 + 1,param_1);
      *(undefined4 *)(puVar4 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_18._4_4_;
      *(undefined4 *)(puVar4 + 3) = uStack_10;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_c;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[5] = uVar5;
      *puVar4 = &PTR_FUN_1442cc168;
    }
    fVar6 = ABS(*(float *)(param_1 + 0x234));
    if (ABS(*(float *)(param_1 + 0x230)) <= ABS(*(float *)(param_1 + 0x234))) {
      fVar6 = ABS(*(float *)(param_1 + 0x230));
    }
    if (ABS(*(float *)(param_1 + 0x238)) <= fVar6) {
      fVar6 = ABS(*(float *)(param_1 + 0x238));
    }
    FUN_1426caca0(param_1 + 0x318,lVar2,lVar3,fVar6,param_1,&local_28);
  }
  return;
}



// FUNCTION 1426e3720 FUN_1426e3720 body=1503 status=ok
// SIG undefined FUN_1426e3720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1426e3720(void)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PxCollection *pPVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_168 [32];
  PxPvd *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  PxFoundation *local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  char *local_c0;
  char *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  ushort local_88 [2];
  undefined4 local_84;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (DAT_146b08450 == (PxFoundation *)0x0) {
    cVar2 = PhysDLLHelper::LoadPhysXModules(0);
    if (cVar2 == '\0') {
      return 0;
    }
    puVar3 = (undefined8 *)operator_new(8);
    puVar10 = (undefined8 *)0x0;
    DAT_146b08408 = puVar10;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_14516f080;
      DAT_146b08408 = puVar3;
    }
    puVar4 = (undefined8 *)operator_new(8);
    puVar3 = puVar10;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_14516f098;
      puVar3 = puVar4;
    }
    DAT_146b08450 = (PxFoundation *)PxCreateFoundation(0x1000000,DAT_146b08408,puVar3);
    DAT_146b08458 = physx::PxCreatePvd(DAT_146b08450);
    local_124 = 0x447a0000;
    local_128 = *DAT_146b08638;
    local_120 = *DAT_146b08650;
    local_148 = DAT_146b08458;
    puVar4 = (undefined8 *)PxCreateBasePhysics(0x3040000,DAT_146b08450,&local_128,0);
    puVar3 = puVar10;
    if (puVar4 != (undefined8 *)0x0) {
      PxRegisterArticulations(puVar4);
      PxRegisterHeightFields(puVar4);
      PxRegisterCloth(puVar4);
      PxRegisterParticles(puVar4);
      puVar3 = puVar4;
    }
    DAT_146b08400 = puVar3;
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar3 = puVar10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(undefined4 *)(puVar4 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
      puVar4[9] = 0;
      *(undefined4 *)(puVar4 + 10) = 0;
      pPVar5 = PxCreateCollection();
      *puVar4 = pPVar5;
      puVar3 = puVar4;
    }
    DAT_146b08468 = puVar3;
    puVar4 = (undefined8 *)operator_new(0x10);
    puVar3 = puVar10;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar3 = puVar4;
    }
    DAT_146b08410 = puVar3;
    plVar6 = (longlong *)FUN_14178e3a0();
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    puVar4 = puVar10;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = (longlong)puVar3;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FPhysCommandHandler::Flush;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,&local_138);
      iVar1 = (int)plVar6[1];
      puVar4 = (undefined8 *)*puVar4;
      *(int *)(plVar6 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      lVar8 = *plVar6;
      *(longlong **)(lVar8 + (longlong)iVar1 * 0x10) = plVar7;
      *(undefined4 *)(lVar8 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
    DAT_146b08620 = puVar4;
    FUN_14327a0f0(DAT_146b08400,DAT_146b08458);
    if (*DAT_146b08668 == 0) {
      PxRegisterLegacyHeightFields(DAT_146b08400);
    }
    else {
      PxRegisterHeightFields();
    }
    uVar9 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar9,&DAT_14516bfc0);
    if (cVar2 != '\0') {
      local_138 = 0;
      local_130 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      FGenericPlatformString::Memcpy(local_138,L"localhost",0x14);
      local_148 = (PxPvd *)0x0;
      FUN_1426e8e60(&local_138,1,1);
    }
    plVar6 = (longlong *)GetPhysXCookingModule(1);
    if (plVar6 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6);
      puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x48))(plVar6);
    }
    local_108 = 0;
    local_b8 = "ApexSolidShaded";
    local_f8 = 0x3040000;
    local_c0 = "ApexWireframe";
    local_100 = DAT_146b08450;
    local_f0 = DAT_146b08400;
    local_d8 = &PTR_PTR_146534ac0;
    local_e0 = 0;
    local_d0 = &PTR_PTR_146534ac8;
    local_c8 = 0;
    local_b0 = 1;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_94 = 0x80;
    local_90 = 0;
    local_e8 = puVar10;
    DAT_146b08418 = (longlong *)_guard_xfg_dispatch_icall_nop(&local_108,local_118,1);
    (**(code **)(*DAT_146b08418 + 0x1d8))(DAT_146b08418,0);
    DAT_146b08420 = (**(code **)(*DAT_146b08418 + 0x48))(DAT_146b08418,"Legacy",0);
    DAT_146b08428 = (longlong *)(**(code **)(*DAT_146b08418 + 0x48))(DAT_146b08418,"Clothing",0);
    plVar6 = (longlong *)(**(code **)(*DAT_146b08428 + 0x40))(DAT_146b08428);
    local_84 = 0;
    local_40 = 0;
    local_38 = 0;
    local_88[0] = 0;
    local_30 = plVar6;
    local_40 = (**(code **)(*plVar6 + 0x78))(plVar6);
    local_30 = (longlong *)NvParameterized::findParam(plVar6,"maxUnusedPhysXResources",local_88);
    local_88[0] = local_88[0] & 0xff;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x218))(local_30,local_88,5);
    }
    NvParameterized::setParamBool(plVar6,"asyncFetchResults",0);
    NvParameterized::setParamBool(plVar6,"allowAsyncCooking",0);
    (**(code **)(*DAT_146b08428 + 0x28))(DAT_146b08428,plVar6);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b08a90) &&
       (_Init_thread_header(&DAT_146b08a90), DAT_146b08a90 == -1)) {
      plVar6 = (longlong *)FUN_14164bd40();
      plVar7 = (longlong *)FMemory::Realloc(0,0x20);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_GetPoolName_1451710c0;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[2] = lVar8;
        *plVar7 = (longlong)&PTR_GetPoolName_145171108;
      }
      _DAT_146b08a88 = 0;
      if (plVar7 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
        puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,&local_138);
        iVar1 = (int)plVar6[1];
        uVar9 = *puVar3;
        *(int *)(plVar6 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
        }
        puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
        *puVar3 = plVar7;
        *(undefined4 *)(puVar3 + 1) = 2;
        _DAT_146b08a88 = uVar9;
      }
      _Init_thread_footer(&DAT_146b08a90);
    }
  }
  return 1;
}



// FUNCTION 1426e3d00 FUN_1426e3d00 body=2735 status=ok
// SIG undefined FUN_1426e3d00(void)

void FUN_1426e3d00(ulonglong param_1,uint param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint local_res10 [2];
  ulonglong local_res18;
  ulonglong local_res20;
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  ulonglong *local_1a0;
  undefined4 local_198;
  code *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  float local_144;
  float local_140;
  uint local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  float local_ac;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 *local_58;
  longlong **local_50;
  
  puVar13 = (undefined8 *)0x0;
  uVar17 = (ulonglong)param_2;
  local_res20 = 0;
  local_res10[0] = param_2;
  uVar6 = FCommandLine::Get();
  FParse::Value(uVar6,L"physxDispatcher=",&local_res20);
  if (local_res20 == 0) {
    uVar6 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar6,L"physxDispatcher");
    if (cVar3 != '\0') {
      local_res20 = 4;
    }
  }
  cVar3 = FUN_141636a40();
  uVar18 = uVar17;
  if (((cVar3 == '\0') || (iVar4 = FUN_1416a5660(), iVar4 < 3)) ||
     (cVar3 = FUN_1415bac00(), cVar3 == '\0')) {
LAB_1426e3e75:
    puVar8 = (undefined8 *)operator_new(0x18);
    puVar7 = puVar13;
    if (param_2 == 1) {
      if (puVar8 == (undefined8 *)0x0) {
        uVar18 = 1;
      }
      else {
        *puVar8 = &PTR_submitTask_1451701a0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar7 = puVar8;
      }
    }
    else if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_submitTask_1451701a0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar7 = puVar8;
    }
    *(undefined8 **)(param_1 + 0x208 + uVar18 * 8) = puVar7;
  }
  else {
    uVar6 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar6,L"SingleThreadedPhysics");
    if (cVar3 != '\0') goto LAB_1426e3e75;
    if (local_res20 == 0) {
      puVar7 = (undefined8 *)operator_new(0x10);
      if (param_2 == 1) {
        if (puVar7 == (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x210) = 0;
          uVar18 = 1;
        }
        else {
          *puVar7 = &PTR_FUN_1451701b8;
          DVar5 = TlsAlloc();
          *(DWORD *)(puVar7 + 1) = DVar5;
          *(undefined8 **)(param_1 + 0x210) = puVar7;
          uVar18 = 1;
        }
      }
      else if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x208 + uVar17 * 8) = 0;
      }
      else {
        *puVar7 = &PTR_FUN_1451701d0;
        DVar5 = TlsAlloc();
        *(DWORD *)(puVar7 + 1) = DVar5;
        *(undefined8 **)(param_1 + 0x208 + uVar17 * 8) = puVar7;
      }
    }
    else {
      uVar6 = physx::PxDefaultCpuDispatcherCreate(local_res20 & 0xffffffff,0);
      *(undefined8 *)(param_1 + 0x208 + uVar17 * 8) = uVar6;
    }
  }
  local_1f0 = (undefined4 *)CONCAT44(local_1f0._4_4_,3);
  uStack_1e8._0_4_ = (int)param_1;
  uStack_1e8._4_4_ = (undefined4)(param_1 >> 0x20);
  *(undefined4 *)(param_1 + 0x2e0) = 3;
  *(undefined4 *)(param_1 + 0x2e4) = local_1f0._4_4_;
  *(int *)(param_1 + 0x2e8) = (int)uStack_1e8;
  *(undefined4 *)(param_1 + 0x2ec) = uStack_1e8._4_4_;
  uStack_1e8 = param_1;
  if (DAT_146b08788 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x18);
    puVar7 = puVar13;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_14516f0a8;
      *(uint *)(puVar8 + 2) = param_2;
      puVar7 = puVar8;
    }
  }
  else {
    puVar7 = (undefined8 *)(**(code **)*DAT_146b08788)(DAT_146b08788,param_1,param_2);
  }
  *(undefined8 **)(param_1 + 0x220 + uVar18 * 8) = puVar7;
  puVar7 = puVar13;
  if (DAT_146b08798 != (longlong *)0x0) {
    puVar7 = (undefined8 *)(**(code **)*DAT_146b08798)(DAT_146b08798,param_1,param_2);
  }
  *(undefined8 **)(param_1 + 0x238 + uVar18 * 8) = puVar7;
  if (DAT_146b087a8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x18);
    puVar7 = puVar13;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_14516f108;
      *(uint *)(puVar8 + 2) = param_2;
      puVar7 = puVar8;
    }
  }
  else {
    puVar7 = (undefined8 *)(**(code **)*DAT_146b087a8)(DAT_146b087a8,param_1,param_2);
  }
  *(undefined8 **)(param_1 + 0x4c8 + uVar18 * 8) = puVar7;
  puVar7 = puVar13;
  if (DAT_146b08798 != (longlong *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*DAT_146b08798 + 0x10))(DAT_146b08798,param_1,uVar17);
  }
  *(undefined8 **)(param_1 + 0x268 + uVar18 * 8) = puVar7;
  pfVar9 = (float *)(**(code **)(*DAT_146b08400 + 0x20))();
  local_1c8 = 0;
  local_1c0 = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_144 = *pfVar9 * 0.04;
  local_140 = *pfVar9 * 0.04;
  local_13c = 0x200;
  local_130 = 0;
  local_124 = 1;
  local_104 = 0x7f7fffff;
  local_11c = 0;
  local_118 = 0;
  local_110 = 0x80;
  local_108 = 0x10000;
  local_100 = 0x2000;
  local_f8 = 0x3ecccccc;
  uStack_f4 = 0xfe7fffff;
  uStack_f0 = 0xfe7fffff;
  uStack_ec = 0xfe7fffff;
  local_e8 = 0x7e7fffff;
  local_e4 = 0x7e7fffff;
  local_e0 = 0x7e7fffff;
  local_dc = 0x2000000;
  local_d8 = 0x1800000;
  local_d4 = 0x1000000;
  local_d0 = 0x80000;
  local_cc = 0x14000;
  local_c8 = 0x100000;
  local_c4 = 0x4000000;
  local_c0 = 0x40000;
  local_bc = 8;
  local_b4 = *(undefined8 *)pfVar9;
  local_ac = pfVar9[2];
  local_138 = *(undefined8 *)(param_1 + 0x208 + uVar18 * 8);
  local_1a0 = &local_a8;
  local_198 = 8;
  local_190 = FUN_1426e7a60;
  if (DAT_146aefa38 != (code *)0x0) {
    local_190 = DAT_146aefa38;
  }
  local_1b8 = *(undefined8 *)(param_1 + 0x220 + uVar18 * 8);
  local_1b0 = *(undefined8 *)(param_1 + 0x238 + uVar18 * 8);
  local_1a8 = *(undefined8 *)(param_1 + 0x268 + uVar18 * 8);
  local_178 = *(undefined8 **)(param_1 + 0x4c8 + uVar18 * 8);
  local_fc = *DAT_146b08890;
  local_a8 = param_1;
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  if (plVar10[0x1f] == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
  }
  if (*(char *)(plVar10[0x1f] + 0x52) == '\0') {
    local_13c = local_13c & 0xfffffdff;
  }
  else {
    local_13c = local_13c | 0x200;
  }
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar19 = plVar10[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar19 = plVar10[0x1f];
  }
  if (*(char *)(lVar19 + 0x53) == '\0') {
    local_13c = local_13c & 0xffffbfff;
  }
  else {
    local_13c = local_13c | 0x4000;
  }
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar19 = plVar10[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar19 = plVar10[0x1f];
  }
  local_148 = *(undefined4 *)(lVar19 + 0x8c);
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar19 = plVar10[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar19 = plVar10[0x1f];
  }
  if (*(char *)(lVar19 + 0x54) != '\0') {
    local_13c = local_13c | 0x1000;
  }
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar19 = plVar10[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar19 = plVar10[0x1f];
  }
  if (*(char *)(lVar19 + 0xad) == '\0') {
    local_13c = local_13c | 0x20001;
  }
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar19 = plVar10[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar19 = plVar10[0x1f];
  }
  if (*(char *)(lVar19 + 0xb0) == '\0') {
    local_13c = local_13c | 4;
  }
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar19 = plVar10[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar19 = plVar10[0x1f];
  }
  if ((*(char *)(lVar19 + 0xae) == '\0') && (DAT_146b07d60 == 0)) {
    local_13c = local_13c | 0x20;
  }
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar19 = plVar10[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar19 = plVar10[0x1f];
  }
  if ((*(char *)(lVar19 + 0xaf) == '\0') && (DAT_146b07d64 == 0)) {
    local_13c = local_13c | 0x40;
  }
  iVar4 = *DAT_146b08860;
  if (iVar4 == -1) {
    plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar19 = plVar10[0x1f];
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar19 = plVar10[0x1f];
    }
    iVar4 = *(int *)(lVar19 + 0x130);
  }
  lVar19 = 2;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      local_128 = 2;
      goto LAB_1426e4355;
    }
    if (iVar4 == 2) {
      local_128 = 0;
      goto LAB_1426e4355;
    }
  }
  local_128 = 1;
LAB_1426e4355:
  local_120 = *(undefined4 *)(param_1 + 0x4b0);
  plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar12 = plVar10[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar12 = plVar10[0x1f];
  }
  if (*(char *)(lVar12 + 0xb1) != '\0') {
    local_13c = local_13c | 0x100000;
  }
  physx::PxSceneDesc::isValid(&local_1c8);
  if ((param_3 == 0) || (*(char *)(param_3 + 0x620) == '\0')) {
    plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar12 = plVar10[0x1f];
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar12 = plVar10[0x1f];
    }
    pcVar15 = (char *)(lVar12 + 0xe8);
  }
  else {
    pcVar15 = (char *)(param_3 + 0x624);
  }
  cVar3 = *pcVar15;
  puVar7 = puVar13;
  if (cVar3 != '\0') {
    local_178 = (undefined8 *)operator_new(8);
    if (local_178 == (undefined8 *)0x0) {
      local_180 = 1;
      local_178 = (undefined8 *)0x0;
    }
    else {
      *local_178 = &PTR_FUN_14516f0e0;
      local_180 = 1;
      puVar7 = local_178;
    }
  }
  *(undefined8 **)(param_1 + 0x250 + uVar17 * 8) = puVar7;
  iVar4 = *DAT_146b08878;
  if (iVar4 == -1) {
    plVar10 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar12 = plVar10[0x1f];
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar12 = plVar10[0x1f];
    }
    iVar4 = *(int *)(lVar12 + 300);
  }
  if (iVar4 == 0) {
    local_180 = 0;
  }
  else if (iVar4 == 1) {
    local_180 = 1;
  }
  plVar10 = (longlong *)(**(code **)(*DAT_146b08400 + 0x90))(DAT_146b08400,&local_1c8);
  plVar11 = (longlong *)(**(code **)(*plVar10 + 0x3a8))(plVar10);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if (cVar3 != '\0') {
    uVar14 = *(uint *)(pcVar15 + 0x20);
    if (0 < (int)DAT_146b07d50) {
      uVar14 = DAT_146b07d50;
    }
    if (uVar14 == 0) {
      local_res18 = 1;
    }
    else {
      local_res18 = 0x10;
      if (uVar14 < 0x10) {
        local_res18 = (ulonglong)uVar14;
      }
    }
    local_1e0 = *(undefined8 *)(pcVar15 + 4);
    uStack_1d8 = *(undefined8 *)(pcVar15 + 0xc);
    local_1cc = *(undefined4 *)(pcVar15 + 0x18);
    local_1f0 = (undefined4 *)0x0;
    local_1d0 = *(undefined4 *)(pcVar15 + 0x14);
    uVar14 = (int)local_res18 * (int)local_res18;
    uStack_1e8 = (ulonglong)uVar14;
    if (0 < (int)uVar14) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_1f0);
    }
    puVar2 = local_1f0;
    _guard_xfg_dispatch_icall_nop(local_1f0,0,(longlong)(int)uVar14 * 0x18);
    physx::PxBroadPhaseExt::createRegionsFromWorldBounds(puVar2,&local_1e0,local_res18,2);
    lVar12 = (longlong)(int)uStack_1e8;
    if (puVar2 != puVar2 + lVar12 * 6) {
      puVar16 = puVar2 + 5;
      do {
        local_a0 = *(undefined8 *)(puVar16 + -5);
        uStack_98 = *(undefined8 *)(puVar16 + -3);
        local_8c = *puVar16;
        local_88 = 0;
        local_90 = puVar16[-1];
        (**(code **)(*plVar10 + 0x330))(plVar10,&local_a0,0);
        puVar1 = puVar16 + 1;
        puVar16 = puVar16 + 6;
      } while (puVar1 != puVar2 + lVar12 * 6);
      uVar17 = (ulonglong)local_res10[0];
    }
    if (puVar2 != (undefined4 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  local_80 = 0;
  local_70 = 0;
  local_60 = 0x1010000;
  local_68 = DAT_146b08448;
  local_78 = plVar10;
  local_1f8 = (longlong *)(**(code **)(*DAT_146b08418 + 0x28))(DAT_146b08418,&local_80);
  (**(code **)(*local_1f8 + 0xd8))(local_1f8,1);
  (**(code **)(*local_1f8 + 0x68))(local_1f8,1);
  local_58 = &DAT_1465349dc;
  local_50 = &local_1f8;
  FUN_1426d2380(&DAT_146534a70,&local_res18,&local_58,0);
  plVar10[1] = param_1 + 0x2e0;
  local_1f8[3] = param_1 + 0x2e0;
  *(short *)(param_1 + 0x60 + uVar17 * 2) = DAT_1465349dc;
  DAT_1465349dc = DAT_1465349dc + 1;
  if (((int)uVar17 != 1) && (puVar7 = (undefined8 *)operator_new(0xf0), puVar7 != (undefined8 *)0x0)
     ) {
    lVar12 = (longlong)puVar7 + 0x2c;
    do {
      *(undefined8 *)(lVar12 + -0x2c) = 0;
      *(undefined8 *)(lVar12 + -0x24) = 0;
      *(undefined8 *)(lVar12 + -0xc) = 0;
      *(undefined8 *)(lVar12 + -4) = 0;
      *(undefined4 *)(lVar12 + 4) = 0xffffffff;
      *(undefined4 *)(lVar12 + 8) = 0;
      *(undefined8 *)(lVar12 + 0x14) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
      lVar12 = lVar12 + 0x50;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    puVar7[0x14] = 0;
    *(undefined4 *)(puVar7 + 0x15) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xac) = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    puVar7[0x18] = 0;
    *(undefined4 *)(puVar7 + 0x19) = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1b] = param_1;
    *(int *)(puVar7 + 0x1c) = (int)uVar17;
    puVar7[0x1d] = local_1f8;
    puVar13 = puVar7;
  }
  *(undefined8 **)(param_1 + 0x2f0 + uVar17 * 8) = puVar13;
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x3a8))(plVar10);
  if (plVar10 != (longlong *)0x0) {
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,7);
    (**(code **)(*plVar10 + 8))(plVar10,local_res10);
  }
  TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
            (&DAT_146534a10,param_1,uVar17);
  return;
}



// FUNCTION 1426e47b0 FUN_1426e47b0 body=27 status=ok
// SIG undefined FUN_1426e47b0(void)

void FUN_1426e47b0(undefined8 param_1)

{
  FUN_142340f20();
  FUN_1426e35d0(param_1);
  return;
}



// FUNCTION 1426e47d0 FUN_1426e47d0 body=296 status=ok
// SIG undefined FUN_1426e47d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426e47d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_698 [32];
  undefined8 local_678;
  undefined4 local_670;
  uint local_66c;
  undefined1 local_668 [24];
  undefined4 local_650;
  undefined4 local_64c;
  longlong local_50;
  longlong local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_698;
  (**(code **)(*param_1 + 0x720))(param_1,local_668);
  local_650 = (undefined4)param_1[0x8e];
  local_64c = (undefined4)param_1[0x58c];
  (**(code **)(*param_1 + 0x710))(param_1,local_668);
  local_66c = local_66c & 0xfffffffe;
  local_670 = 0x40000000;
  param_1[0x8b] = param_2;
  local_678 = CONCAT35(local_678._5_3_,0x100000000);
  (**(code **)(*param_1 + 0x7f8))(param_1,param_2,&local_678);
  lVar1 = AActor::GetWorldSettings(param_1);
  local_678 = *(undefined8 *)(lVar1 + 0x4b0);
  local_670 = *(undefined4 *)(lVar1 + 0x4b8);
  (**(code **)(*param_1 + 0x7b0))(param_1,&local_678,0x40a00000);
  (**(code **)(*param_1 + 0x740))(param_1,0);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426e4900 FUN_1426e4900 body=495 status=ok
// SIG undefined FUN_1426e4900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426e4900(undefined8 param_1,longlong param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
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
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  float local_38;
  float local_34;
  float local_30;
  
  plVar8 = (longlong *)FUN_142697a40(param_3);
  if (0.0 <= param_4) {
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
  }
  else {
    param_4 = 0.0;
  }
  if (*(char *)(param_2 + 0xb0) != '\0') {
    cVar7 = FBodyInstance::IsNonKinematic(param_3);
    if (cVar7 == '\0') {
      fVar1 = *(float *)(param_2 + 0x90);
      fVar2 = *(float *)(param_2 + 0x94);
      fVar3 = *(float *)(param_2 + 0x98);
      fVar4 = *(float *)(param_2 + 0x60);
      fVar5 = *(float *)(param_2 + 100);
      fVar6 = *(float *)(param_2 + 0x68);
      local_78 = *(undefined4 *)(param_2 + 0x50);
      uStack_74 = *(undefined4 *)(param_2 + 0x54);
      uStack_70 = *(undefined4 *)(param_2 + 0x58);
      uStack_6c = *(undefined4 *)(param_2 + 0x5c);
      local_68 = *(undefined8 *)(param_2 + 0x80);
      uStack_60 = *(undefined8 *)(param_2 + 0x88);
      puVar9 = (undefined8 *)FQuat::Slerp_NotNormalized(local_58,&local_68,&local_78,param_4);
      local_88 = (float)*puVar9;
      fStack_84 = (float)((ulonglong)*puVar9 >> 0x20);
      fStack_80 = (float)puVar9[1];
      fStack_7c = (float)((ulonglong)puVar9[1] >> 0x20);
      auVar10._0_4_ = local_88 * local_88 + fStack_80 * fStack_80;
      auVar10._4_4_ = fStack_84 * fStack_84 + fStack_7c * fStack_7c;
      auVar10._8_4_ = fStack_80 * fStack_80 + local_88 * local_88;
      auVar10._12_4_ = fStack_7c * fStack_7c + fStack_84 * fStack_84;
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
      fVar12 = (_DAT_146b084a0 - fVar12 * fVar12 * fVar16 * _DAT_146b084a0) * fVar12 + fVar12;
      fVar13 = (fRam0000000146b084a4 - fVar13 * fVar13 * fVar17 * fRam0000000146b084a4) * fVar13 +
               fVar13;
      fVar14 = (fRam0000000146b084a8 - fVar14 * fVar14 * fVar18 * fRam0000000146b084a8) * fVar14 +
               fVar14;
      fVar15 = (fRam0000000146b084ac - fVar15 * fVar15 * fVar19 * fRam0000000146b084ac) * fVar15 +
               fVar15;
      local_48 = ((uint)(((_DAT_146b084a0 - fVar12 * fVar12 * fVar16 * _DAT_146b084a0) * fVar12 +
                         fVar12) * local_88) ^ _DAT_146b08490) & -(uint)(1e-08 <= fVar16) ^
                 _DAT_146b08490;
      local_44 = ((uint)(((fRam0000000146b084a4 - fVar13 * fVar13 * fVar17 * fRam0000000146b084a4) *
                          fVar13 + fVar13) * fStack_84) ^ uRam0000000146b08494) &
                 -(uint)(1e-08 <= fVar17) ^ uRam0000000146b08494;
      local_40 = ((uint)(((fRam0000000146b084a8 - fVar14 * fVar14 * fVar18 * fRam0000000146b084a8) *
                          fVar14 + fVar14) * fStack_80) ^ uRam0000000146b08498) &
                 -(uint)(1e-08 <= fVar18) ^ uRam0000000146b08498;
      local_3c = ((uint)(((fRam0000000146b084ac - fVar15 * fVar15 * fVar19 * fRam0000000146b084ac) *
                          fVar15 + fVar15) * fStack_7c) ^ uRam0000000146b0849c) &
                 -(uint)(1e-08 <= fVar19) ^ uRam0000000146b0849c;
      local_38 = (fVar4 - fVar1) * param_4 + fVar1;
      local_34 = (fVar5 - fVar2) * param_4 + fVar2;
      local_30 = (fVar6 - fVar3) * param_4 + fVar3;
      (**(code **)(*plVar8 + 0x1b0))(plVar8,&local_48);
    }
  }
  return;
}



// FUNCTION 1426e4af0 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FUN_1426cb260(param_1 + 0x318);
  return;
}



// FUNCTION 1426e4b00 FUN_1426e4b00 body=53 status=ok
// SIG undefined FUN_1426e4b00(void)

undefined1 FUN_1426e4b00(longlong param_1)

{
  char cVar1;
  
  cVar1 = FConstraintInstance::IsValidConstraintInstance(param_1 + 0x318);
  if (cVar1 != '\0') {
    cVar1 = FConstraintInstance::IsTerminated(param_1 + 0x318);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1426e4b40 FUN_1426e4b40 body=127 status=ok
// SIG undefined FUN_1426e4b40(void)

bool FUN_1426e4b40(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b08b58) {
    _Init_thread_header(&DAT_146b08b58);
    if (DAT_146b08b58 == -1) {
      FName::FName(&DAT_146b08b50,L"FirstPerson",1);
      _Init_thread_footer(&DAT_146b08b58);
    }
  }
  return *(longlong *)(param_1 + 0x468) == DAT_146b08b50;
}



// FUNCTION 1426e4bc0 FUN_1426e4bc0 body=238 status=ok
// SIG undefined FUN_1426e4bc0(void)

longlong FUN_1426e4bc0(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar3 < DAT_146b08b68) {
    _Init_thread_header(&DAT_146b08b68);
    if (DAT_146b08b68 == -1) {
      FName::FName(&DAT_146b08b60,L"FreeCam",1);
      _Init_thread_footer(&DAT_146b08b68);
    }
  }
  if (*piVar3 < DAT_146b08b78) {
    _Init_thread_header(&DAT_146b08b78);
    if (DAT_146b08b78 == -1) {
      FName::FName(&DAT_146b08b70,L"FreeCam_Default",1);
      _Init_thread_footer(&DAT_146b08b78);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x468);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != DAT_146b08b60) && (lVar1 != DAT_146b08b70)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1426e4cc0 FUN_1426e4cc0 body=258 status=ok
// SIG undefined FUN_1426e4cc0(void)

undefined8 FUN_1426e4cc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  float local_res8 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((*(byte *)(param_1 + 0x49c) & 2) != 0) {
    return 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x168);
  local_38 = 0;
  local_30 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1429f11d0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_28 = *(undefined4 *)(param_2 + 0x220);
      local_24 = *(undefined4 *)(param_2 + 0x224);
      local_20 = *(undefined4 *)(param_2 + 0x228);
      local_res8[0] = -1.0;
      cVar3 = (**(code **)(*plVar1 + 0x6d8))(plVar1,&local_28,local_res8,&local_38);
      if ((cVar3 == '\0') || (local_res8[0] != 0.0)) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1426e4dd0 IsRigidBodyKinematicAndInSimulationScene_AssumesLocked body=68 status=ok
// SIG undefined IsRigidBodyKinematicAndInSimulationScene_AssumesLocked(void)

undefined8 IsRigidBodyKinematicAndInSimulationScene_AssumesLocked(longlong *param_1)

{
  byte *pbVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  if (param_1 != (longlong *)0x0) {
    pbVar1 = (byte *)(**(code **)(*param_1 + 0x178))(param_1,local_res8);
    if ((*pbVar1 & 1) != 0) {
      pbVar1 = (byte *)(**(code **)(*param_1 + 0x60))(param_1,local_res10);
      if ((*pbVar1 & 8) == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1426e4e20 IsRigidBodyKinematic_AssumesLocked body=40 status=ok
// SIG undefined IsRigidBodyKinematic_AssumesLocked(void)

ulonglong IsRigidBodyKinematic_AssumesLocked(longlong *param_1)

{
  ulonglong in_RAX;
  byte *pbVar1;
  undefined1 local_res8 [32];
  
  if (param_1 != (longlong *)0x0) {
    pbVar1 = (byte *)(**(code **)(*param_1 + 0x178))(param_1,local_res8);
    return (ulonglong)(*pbVar1 & 1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1426e4e50 IsSubstepping body=88 status=ok
// SIG undefined IsSubstepping(void)

bool FPhysScene::IsSubstepping(longlong param_1,int param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar1 = UWorld::IsGameWorld();
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        return *(char *)(param_1 + 1) != '\0';
      }
      if (param_2 == 2) {
        return (bool)*(undefined1 *)(param_1 + 2);
      }
    }
  }
  return false;
}



// FUNCTION 1426e4eb0 IsValidForNotify body=51 status=ok
// SIG undefined IsValidForNotify(void)

undefined1 FCollisionNotifyInfo::IsValidForNotify(longlong param_1)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar1 != '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x30);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1426e4ef0 LimitViewPitch body=115 status=ok
// SIG undefined LimitViewPitch(void)

void APlayerCameraManager::LimitViewPitch(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FMath::ClampAngle();
  fVar2 = (float)(int)(fVar1 * 0.0027777778) * 360.0;
  if (ABS(fVar1) < ABS(fVar2)) {
    fVar2 = fVar1;
  }
  fVar1 = fVar1 - fVar2;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  *param_2 = fVar1;
  return;
}



// FUNCTION 1426e4f70 LimitViewRoll body=117 status=ok
// SIG undefined LimitViewRoll(void)

void APlayerCameraManager::LimitViewRoll(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FMath::ClampAngle();
  fVar2 = (float)(int)(fVar1 * 0.0027777778) * 360.0;
  if (ABS(fVar1) < ABS(fVar2)) {
    fVar2 = fVar1;
  }
  fVar1 = fVar1 - fVar2;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  *(float *)(param_2 + 8) = fVar1;
  return;
}



// FUNCTION 1426e4ff0 LimitViewYaw body=117 status=ok
// SIG undefined LimitViewYaw(void)

void APlayerCameraManager::LimitViewYaw(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FMath::ClampAngle();
  fVar2 = (float)(int)(fVar1 * 0.0027777778) * 360.0;
  if (ABS(fVar1) < ABS(fVar2)) {
    fVar2 = fVar1;
  }
  fVar1 = fVar1 - fVar2;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  *(float *)(param_2 + 4) = fVar1;
  return;
}



// FUNCTION 1426e5070 FUN_1426e5070 body=141 status=ok
// SIG undefined FUN_1426e5070(void)

void FUN_1426e5070(undefined1 param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [2];
  
  if (param_2 != 0) {
    uVar3 = 0;
    local_res10[0] = 0;
    uVar2 = uVar3;
    if (*(int *)(*(longlong *)(param_2 + 0x218) + 4) != 0) {
      uVar2 = FUN_1426e2550((int)*(short *)(*(longlong *)(param_2 + 0x218) + 0x60));
    }
    FUN_1426e5100(param_1,uVar2,local_res10);
    pcVar1 = *(char **)(param_2 + 0x218);
    if (*pcVar1 != '\0') {
      if (2 < *(uint *)(pcVar1 + 4)) {
        uVar3 = FUN_1426e2550((int)*(short *)(pcVar1 + 100));
      }
      FUN_1426e5100(param_1,uVar3,local_res10);
    }
  }
  return;
}



// FUNCTION 1426e5100 FUN_1426e5100 body=253 status=ok
// SIG undefined FUN_1426e5100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426e5100(char param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 auStack_4078 [32];
  undefined4 local_4058;
  undefined2 local_4048 [8];
  undefined8 local_4038 [2048];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1426e5112;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4078;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x348))
              (param_2,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysUtils.cpp"
               ,0x2d0);
  }
  local_4048[0] = 2;
  lVar5 = 0;
  local_4058 = 0;
  iVar3 = (**(code **)(*param_2 + 0x98))(param_2,local_4048,local_4038,0x800);
  if (0 < iVar3) {
    do {
      plVar1 = (longlong *)local_4038[lVar5];
      cVar2 = (**(code **)(*plVar1 + 0x1f0))(plVar1);
      if ((cVar2 == '\0') &&
         ((param_1 != '\0' ||
          (pcVar4 = (char *)(**(code **)(*plVar1 + 0x178))(plVar1,local_4048), *pcVar4 != '\x01'))))
      {
        *param_3 = *param_3 + 1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  (**(code **)(*param_2 + 0x350))(param_2);
  return;
}



// FUNCTION 1426e5200 FUN_1426e5200 body=536 status=ok
// SIG undefined FUN_1426e5200(void)

undefined8 FUN_1426e5200(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  wchar_t *pwVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong *in_R9;
  wchar_t *_Source;
  longlong *plVar13;
  wchar_t *local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  plVar4 = (longlong *)FUN_1415c3d50();
  puVar5 = (undefined8 *)FUN_14167d0d0(local_38);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar5;
  }
  FString::PrintfImpl(&local_58,L"%s/SaveGames",puVar12);
  pwVar7 = L"";
  if ((int)local_50 != 0) {
    pwVar7 = local_58;
  }
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_48,pwVar7,L"*.sav");
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  uVar9 = (ulonglong)(int)local_40;
  plVar13 = local_48 + uVar9 * 2;
  plVar4 = local_48;
  if (local_48 != plVar13) {
    do {
      iVar11 = -4;
      pwVar7 = (wchar_t *)0x0;
      iVar10 = (int)plVar4[1];
      iVar3 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar3 = -1;
        _Source = L"";
      }
      else {
        _Source = (wchar_t *)*plVar4;
        iVar11 = iVar10 + -5;
      }
      if (iVar10 == 0) {
        iVar3 = 0;
      }
      if (iVar11 < 0) {
        iVar3 = 0;
      }
      else if (iVar11 < iVar3) {
        iVar3 = iVar11;
      }
      local_58 = (wchar_t *)0x0;
      local_50 = (wchar_t *)(ulonglong)(iVar3 + 1);
      if (iVar3 == 0) {
        local_50 = pwVar7;
      }
      iVar10 = (int)local_50;
      if (0 < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        pwVar7 = local_58;
        iVar10 = (int)local_50;
        if (0 < (int)local_50) {
          wcsncpy(local_58,_Source,(longlong)iVar3);
          pwVar7[iVar3] = L'\0';
        }
      }
      lVar1 = in_R9[1];
      iVar3 = (int)lVar1 + 1;
      *(int *)(in_R9 + 1) = iVar3;
      if (*(int *)((longlong)in_R9 + 0xc) < iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(in_R9);
      }
      uVar2 = local_50._4_4_;
      plVar4 = plVar4 + 2;
      puVar6 = (ulonglong *)((longlong)(int)lVar1 * 0x10 + *in_R9);
      local_58 = (wchar_t *)0x0;
      local_50 = (wchar_t *)0x0;
      *puVar6 = (ulonglong)pwVar7;
      *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
      *(int *)(puVar6 + 1) = iVar10;
    } while (plVar4 != plVar13);
    uVar9 = local_40 & 0xffffffff;
  }
  uVar8 = (uint)uVar9;
  plVar4 = local_48;
  while (uVar8 != 0) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
    uVar8 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar8;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return 1;
}



// FUNCTION 1426e5420 LoadAPEXModule body=712 status=ok
// SIG undefined LoadAPEXModule(void)

undefined8 PhysDLLHelper::LoadAPEXModule(undefined8 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *local_38;
  uint local_30;
  int local_2c;
  
  pvVar1 = DAT_146b08950;
  pvVar6 = (void *)0x0;
  local_30 = *(uint *)(param_1 + 1);
  lVar11 = (longlong)(int)local_30;
  uVar8 = (uint)DAT_146b08958;
  iVar5 = 0;
  pvVar9 = pvVar6;
  if ((int)uVar8 < 2) {
    pvVar1 = (void *)*param_1;
    local_38 = (void *)0x0;
    if (local_30 == 0) {
      uVar12 = 0;
      iVar2 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
      pvVar9 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar11 * 2);
      uVar12 = (ulonglong)local_30;
      iVar2 = local_2c;
    }
  }
  else {
    iVar4 = local_30 - 1;
    if (local_30 == 0) {
      iVar4 = iVar5;
    }
    if ((uVar8 != 0) || (iVar2 = 1, iVar4 == 0)) {
      iVar2 = iVar5;
    }
    local_38 = (void *)0x0;
    uVar12 = DAT_146b08958 & 0xffffffff;
    if ((uVar8 == 0) && (iVar2 + iVar4 == 0)) {
      local_2c = 0;
    }
    else {
      local_30 = uVar8;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar2 + iVar4 + uVar8,0);
      pvVar9 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,(longlong)(int)uVar8 * 2);
      uVar12 = (ulonglong)local_30;
    }
    pvVar1 = (void *)*param_1;
    iVar2 = local_2c;
    if (iVar4 != 0) {
      iVar10 = (int)uVar12;
      local_30 = iVar10 + (uint)(iVar10 == 0) + iVar4;
      if (local_2c < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar12);
        pvVar9 = local_38;
      }
      iVar2 = local_2c;
      uVar12 = (ulonglong)local_30;
      pvVar7 = (void *)((longlong)pvVar9 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar7,pvVar1,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar7) = 0;
    }
  }
  pvVar1 = DAT_146b08980;
  local_30 = (uint)uVar12;
  iVar4 = (int)DAT_146b08988;
  if ((int)local_30 < 2) {
    local_38 = (void *)0x0;
    local_30 = iVar4;
    if (iVar4 == 0) {
      local_2c = 0;
      pvVar7 = pvVar6;
      pvVar6 = pvVar9;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,DAT_146b08988 & 0xffffffff,0);
      pvVar7 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,(longlong)iVar4 * 2);
      pvVar6 = pvVar9;
    }
  }
  else {
    iVar10 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar10 = iVar5;
    }
    if ((local_30 != 0) || (iVar4 = 1, iVar10 == 0)) {
      iVar4 = iVar5;
    }
    local_38 = pvVar9;
    local_2c = iVar2;
    if (iVar2 < (int)(iVar4 + local_30 + iVar10)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
      uVar12 = (ulonglong)local_30;
    }
    pvVar1 = DAT_146b08980;
    iVar5 = (int)uVar12;
    pvVar7 = local_38;
    local_30 = iVar5;
    if (iVar10 != 0) {
      local_30 = iVar5 + (uint)(iVar5 == 0) + iVar10;
      if (local_2c < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar12);
      }
      iVar4 = local_2c;
      uVar8 = local_30;
      pvVar7 = local_38;
      pvVar9 = (void *)(((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2 + (longlong)local_38);
      ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar1,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar9) = 0;
      local_38 = pvVar7;
      local_30 = uVar8;
      local_2c = iVar4;
    }
  }
  uVar3 = LoadPhysicsLibrary(&local_38);
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return uVar3;
}



// FUNCTION 1426e56f0 LoadGame body=75 status=ok
// SIG undefined LoadGame(void)

undefined1 FGenericSaveGameSystem::LoadGame(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined8 in_stack_00000028;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  uVar1 = FUN_141676460(in_stack_00000028,puVar3,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1426e5740 LoadPhysXModules body=5770 status=ok
// SIG undefined LoadPhysXModules(void)

undefined8 PhysDLLHelper::LoadPhysXModules(char param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  longlong lVar21;
  int iVar22;
  undefined2 *local_res10;
  undefined2 *local_res18;
  undefined4 in_stack_ffffffffffffff78;
  undefined2 uVar24;
  undefined4 uVar23;
  undefined2 *local_78;
  uint local_70;
  int local_6c;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  
  uVar24 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
  puVar11 = (undefined2 *)0x0;
  local_60 = 0xd;
  local_68 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  puVar10 = local_68;
  uVar23 = CONCAT22(uVar24,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_68,0xd,"PxFoundation",0xd,uVar23);
  pvVar1 = DAT_146b08960;
  uVar24 = (undefined2)((uint)uVar23 >> 0x10);
  uVar17 = (uint)DAT_146b08968;
  iVar6 = 0;
  if ((int)uVar17 < 2) {
    uVar19 = local_60 & 0xffffffff;
    puVar8 = puVar10;
    puVar10 = puVar11;
    iVar12 = local_60._4_4_;
  }
  else {
    iVar7 = iVar6;
    if ((int)local_60 != 0) {
      iVar7 = (int)local_60 + -1;
    }
    if ((uVar17 != 0) || (iVar12 = 1, iVar7 == 0)) {
      iVar12 = iVar6;
    }
    local_78 = (undefined2 *)0x0;
    if ((uVar17 == 0) && (iVar12 + iVar7 == 0)) {
      local_6c = 0;
      uVar19 = DAT_146b08968;
      puVar8 = puVar11;
    }
    else {
      local_70 = uVar17;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,uVar17 + iVar12 + iVar7,0);
      puVar8 = local_78;
      ::_guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)(int)uVar17 * 2);
      uVar19 = (ulonglong)local_70;
    }
    iVar12 = local_6c;
    if (iVar7 != 0) {
      iVar13 = (int)uVar19;
      local_70 = (uint)(iVar13 == 0) + iVar13 + iVar7;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
        puVar8 = local_78;
      }
      iVar12 = local_6c;
      uVar19 = (ulonglong)local_70;
      ::_guard_xfg_dispatch_icall_nop
                (puVar8 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)),puVar10,(longlong)iVar7 * 2)
      ;
      (puVar8 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)))[iVar7] = 0;
    }
  }
  pvVar1 = DAT_146b08970;
  local_70 = (uint)uVar19;
  iVar7 = (int)DAT_146b08978;
  if ((int)local_70 < 2) {
    local_78 = (undefined2 *)0x0;
    local_70 = iVar7;
    if (iVar7 == 0) {
      local_6c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,DAT_146b08978 & 0xffffffff,0);
      puVar11 = local_78;
      ::_guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)iVar7 * 2);
    }
  }
  else {
    iVar13 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar13 = iVar6;
    }
    if ((local_70 != 0) || (iVar6 = 1, iVar13 == 0)) {
      iVar6 = 0;
    }
    local_78 = puVar8;
    local_6c = iVar12;
    if (iVar12 < (int)(local_70 + iVar6 + iVar13)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      uVar19 = (ulonglong)local_70;
    }
    pvVar1 = DAT_146b08970;
    iVar7 = (int)uVar19;
    puVar11 = local_78;
    iVar6 = local_6c;
    uVar17 = iVar7;
    if (iVar13 != 0) {
      local_70 = (uint)(iVar7 == 0) + iVar7 + iVar13;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
      }
      iVar6 = local_6c;
      uVar17 = local_70;
      puVar11 = local_78;
      puVar8 = local_78 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar13 * 2);
      puVar8[iVar13] = 0;
    }
    puVar8 = (undefined2 *)0x0;
    local_78 = puVar11;
    local_70 = uVar17;
    local_6c = iVar6;
  }
  puVar20 = (undefined2 *)0x0;
  DAT_146b083b8 = LoadPhysicsLibrary(&local_78);
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  local_68 = (undefined2 *)0x0;
  local_60 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  puVar11 = local_68;
  uVar23 = CONCAT22(uVar24,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_68,0xd,"PhysX3Common",0xd,uVar23);
  pvVar1 = DAT_146b08940;
  uVar24 = (undefined2)((uint)uVar23 >> 0x10);
  uVar17 = (uint)DAT_146b08948;
  if ((int)uVar17 < 2) {
    uVar19 = local_60 & 0xffffffff;
    puVar10 = puVar11;
    puVar11 = puVar20;
    iVar7 = local_60._4_4_;
  }
  else {
    iVar6 = 0;
    if ((int)local_60 != 0) {
      iVar6 = (int)local_60 + -1;
    }
    if ((uVar17 != 0) || (iVar7 = 1, iVar6 == 0)) {
      iVar7 = 0;
    }
    local_78 = (undefined2 *)0x0;
    if ((uVar17 == 0) && (iVar7 + iVar6 == 0)) {
      local_6c = 0;
      uVar19 = DAT_146b08948;
      puVar10 = puVar20;
    }
    else {
      local_70 = uVar17;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,uVar17 + iVar7 + iVar6,0);
      puVar10 = local_78;
      ::_guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)(int)uVar17 * 2);
      uVar19 = (ulonglong)local_70;
    }
    iVar7 = local_6c;
    if (iVar6 != 0) {
      iVar12 = (int)uVar19;
      local_70 = (uint)(iVar12 == 0) + iVar12 + iVar6;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
        puVar10 = local_78;
      }
      iVar7 = local_6c;
      uVar19 = (ulonglong)local_70;
      ::_guard_xfg_dispatch_icall_nop
                (puVar10 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)),puVar11,(longlong)iVar6 * 2
                );
      (puVar10 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)))[iVar6] = 0;
    }
  }
  pvVar1 = DAT_146b08970;
  local_70 = (uint)uVar19;
  uVar17 = (uint)DAT_146b08978;
  if ((int)local_70 < 2) {
    local_78 = (undefined2 *)0x0;
    local_70 = uVar17;
    if (uVar17 == 0) {
      puVar8 = (undefined2 *)0x0;
      local_6c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,DAT_146b08978 & 0xffffffff,0);
      puVar8 = local_78;
      ::_guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  else {
    puVar8 = (undefined2 *)(ulonglong)(uVar17 - 1);
    if (uVar17 == 0) {
      puVar8 = puVar20;
    }
    iVar6 = (int)puVar8;
    if ((local_70 != 0) || (puVar8 = (undefined2 *)0x1, iVar6 == 0)) {
      puVar8 = puVar20;
    }
    local_78 = puVar10;
    local_6c = iVar7;
    if (iVar7 < (int)(local_70 + iVar6 + (int)puVar8)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      uVar19 = (ulonglong)local_70;
    }
    pvVar1 = DAT_146b08970;
    uVar18 = (uint)uVar19;
    puVar8 = local_78;
    iVar7 = local_6c;
    uVar17 = uVar18;
    if (iVar6 != 0) {
      local_70 = (uVar18 == 0) + uVar18 + iVar6;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
      }
      iVar7 = local_6c;
      uVar17 = local_70;
      puVar8 = local_78;
      puVar10 = local_78 + ((longlong)(int)uVar18 - (ulonglong)(uVar18 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar10,pvVar1,(longlong)iVar6 * 2);
      puVar10[iVar6] = 0;
    }
    puVar10 = (undefined2 *)0x0;
    local_78 = puVar8;
    local_70 = uVar17;
    local_6c = iVar7;
  }
  puVar20 = (undefined2 *)0x0;
  DAT_146b083c0 = LoadPhysicsLibrary(&local_78);
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  local_58 = (undefined2 *)0x0;
  local_50 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  puVar10 = local_58;
  uVar23 = CONCAT22(uVar24,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_58,7,"_1.dll",7,uVar23);
  uVar24 = (undefined2)((uint)uVar23 >> 0x10);
  local_68 = (undefined2 *)0x0;
  local_60 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  puVar11 = local_68;
  uVar23 = CONCAT22(uVar24,0x3f);
  local_res10 = local_68;
  FGenericPlatformString::Convert<char,wchar_t>(local_68,0xb,"nvToolsExt",0xb,uVar23);
  pvVar1 = DAT_146b08940;
  uVar24 = (undefined2)((uint)uVar23 >> 0x10);
  uVar17 = (uint)DAT_146b08948;
  if ((int)uVar17 < 2) {
    uVar19 = local_60 & 0xffffffff;
    local_res10 = (undefined2 *)0x0;
    puVar20 = puVar11;
    iVar7 = local_60._4_4_;
  }
  else {
    iVar6 = 0;
    if ((int)local_60 != 0) {
      iVar6 = (int)local_60 + -1;
    }
    if ((uVar17 != 0) || (iVar7 = 1, iVar6 == 0)) {
      iVar7 = 0;
    }
    local_78 = (undefined2 *)0x0;
    local_70 = uVar17;
    if ((uVar17 == 0) && (iVar6 + iVar7 == 0)) {
      local_6c = 0;
      uVar19 = DAT_146b08948;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar6 + iVar7 + uVar17,0);
      puVar20 = local_78;
      ::_guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)(int)uVar17 * 2);
      uVar19 = (ulonglong)local_70;
    }
    iVar7 = local_6c;
    if (iVar6 != 0) {
      iVar12 = (int)uVar19;
      local_70 = (uint)(iVar12 == 0) + iVar12 + iVar6;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
        puVar20 = local_78;
      }
      iVar7 = local_6c;
      uVar19 = (ulonglong)local_70;
      ::_guard_xfg_dispatch_icall_nop
                (puVar20 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)),puVar11,(longlong)iVar6 * 2
                );
      (puVar20 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)))[iVar6] = 0;
    }
  }
  pvVar1 = DAT_146534af0;
  puVar11 = (undefined2 *)0x0;
  uVar17 = (uint)uVar19;
  iVar6 = (int)DAT_146534af8;
  if ((int)uVar17 < 2) {
    local_res18 = (undefined2 *)0x0;
    local_48 = (undefined2 *)0x0;
    local_40 = CONCAT44(local_40._4_4_,iVar6);
    uVar19 = DAT_146534af8;
    puVar11 = puVar20;
    iVar7 = 0;
    if (iVar6 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,DAT_146534af8 & 0xffffffff,0);
      local_res18 = local_48;
      ::_guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)iVar6 * 2);
      uVar19 = local_40 & 0xffffffff;
      iVar7 = local_40._4_4_;
    }
  }
  else {
    iVar12 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar12 = 0;
    }
    if ((uVar17 != 0) || (puVar8 = (undefined2 *)0x1, iVar12 == 0)) {
      puVar8 = puVar11;
    }
    local_78 = puVar20;
    local_70 = uVar17;
    local_6c = iVar7;
    if (iVar7 < (int)(iVar12 + (int)puVar8 + uVar17)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      uVar19 = (ulonglong)local_70;
    }
    pvVar1 = DAT_146534af0;
    iVar7 = local_6c;
    local_res18 = local_78;
    if (iVar12 != 0) {
      iVar6 = (int)uVar19;
      local_70 = (uint)(iVar6 == 0) + iVar12 + iVar6;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
      }
      iVar7 = local_6c;
      local_res18 = local_78;
      uVar19 = (ulonglong)local_70;
      puVar8 = local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar12 * 2);
      puVar8[iVar12] = 0;
    }
  }
  puVar8 = local_res18;
  puVar20 = (undefined2 *)0x0;
  uVar18 = (uint)uVar19;
  uVar17 = (uint)local_50;
  if ((int)uVar18 < 2) {
    local_res18 = puVar10;
    local_48 = puVar10;
    local_40 = local_50;
    puVar10 = puVar20;
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    puVar8 = puVar20;
    if ((uint)local_50 != 0) {
      puVar8 = (undefined2 *)(ulonglong)((uint)local_50 - 1);
    }
    iVar6 = (int)puVar8;
    if ((uVar18 != 0) || (puVar8 = (undefined2 *)0x1, iVar6 == 0)) {
      puVar8 = puVar20;
    }
    local_78 = local_res18;
    local_70 = uVar18;
    local_6c = iVar7;
    if (iVar7 < (int)((int)puVar8 + iVar6 + uVar18)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      uVar19 = (ulonglong)local_70;
    }
    uVar18 = (uint)uVar19;
    iVar7 = local_6c;
    uVar17 = uVar18;
    local_res18 = local_78;
    if (iVar6 != 0) {
      local_70 = (uint)(uVar18 == 0) + iVar6 + uVar18;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
      }
      iVar7 = local_6c;
      uVar17 = local_70;
      local_res18 = local_78;
      puVar8 = local_78 + ((longlong)(int)uVar18 - (ulonglong)(uVar18 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar8,puVar10,(longlong)iVar6 * 2);
      puVar8[iVar6] = 0;
    }
    local_40 = CONCAT44(iVar7,uVar17);
    local_48 = local_res18;
  }
  puVar8 = (undefined2 *)0x0;
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (local_res10 != (undefined2 *)0x0) {
    FMemory::Free(local_res10);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  plVar9 = (longlong *)FUN_1415c3d50();
  puVar11 = &DAT_143f3eda8;
  if (uVar17 != 0) {
    puVar11 = local_res18;
  }
  cVar2 = (**(code **)(*plVar9 + 0x48))(plVar9,puVar11);
  if (cVar2 != '\0') {
    DAT_146b083e0 = LoadPhysicsLibrary(&local_48);
  }
  local_58 = (undefined2 *)0x0;
  local_50 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  puVar11 = local_58;
  uVar23 = CONCAT22(uVar24,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_58,9,"PxPvdSDK",9,uVar23);
  pvVar1 = DAT_146b08960;
  uVar24 = (undefined2)((uint)uVar23 >> 0x10);
  uVar17 = (uint)DAT_146b08968;
  if ((int)uVar17 < 2) {
    uVar19 = local_50 & 0xffffffff;
    puVar10 = puVar11;
    puVar11 = puVar8;
    iVar7 = local_50._4_4_;
  }
  else {
    puVar10 = puVar8;
    if ((uint)local_50 != 0) {
      puVar10 = (undefined2 *)(ulonglong)((uint)local_50 - 1);
    }
    iVar6 = (int)puVar10;
    if ((uVar17 != 0) || (puVar10 = (undefined2 *)0x1, iVar6 == 0)) {
      puVar10 = puVar8;
    }
    local_78 = (undefined2 *)0x0;
    iVar7 = (int)puVar10 + iVar6;
    if ((uVar17 == 0) && (iVar7 == 0)) {
      local_6c = 0;
      uVar19 = DAT_146b08968;
      puVar10 = puVar8;
    }
    else {
      local_70 = uVar17;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar7 + uVar17,0);
      puVar10 = local_78;
      ::_guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)(int)uVar17 * 2);
      uVar19 = (ulonglong)local_70;
    }
    iVar7 = local_6c;
    if (iVar6 != 0) {
      iVar12 = (int)uVar19;
      local_70 = (uint)(iVar12 == 0) + iVar6 + iVar12;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
        puVar10 = local_78;
      }
      iVar7 = local_6c;
      uVar19 = (ulonglong)local_70;
      ::_guard_xfg_dispatch_icall_nop
                (puVar10 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)),puVar11,(longlong)iVar6 * 2
                );
      (puVar10 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)))[iVar6] = 0;
    }
  }
  pvVar1 = DAT_146b08970;
  local_70 = (uint)uVar19;
  iVar6 = (int)DAT_146b08978;
  if ((int)local_70 < 2) {
    local_78 = (undefined2 *)0x0;
    local_70 = iVar6;
    if (iVar6 == 0) {
      local_6c = 0;
      puVar8 = (undefined2 *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,DAT_146b08978 & 0xffffffff,0);
      puVar8 = local_78;
      ::_guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)iVar6 * 2);
    }
  }
  else {
    iVar12 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar12 = 0;
    }
    if ((local_70 != 0) || (iVar6 = 1, iVar12 == 0)) {
      iVar6 = 0;
    }
    local_78 = puVar10;
    local_6c = iVar7;
    if (iVar7 < (int)(local_70 + iVar6 + iVar12)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      uVar19 = (ulonglong)local_70;
    }
    pvVar1 = DAT_146b08970;
    iVar7 = (int)uVar19;
    puVar8 = local_78;
    iVar6 = local_6c;
    uVar17 = iVar7;
    if (iVar12 != 0) {
      local_70 = (uint)(iVar7 == 0) + iVar7 + iVar12;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar19 & 0xffffffff);
      }
      iVar6 = local_6c;
      uVar17 = local_70;
      puVar8 = local_78;
      puVar10 = local_78 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar10,pvVar1,(longlong)iVar12 * 2);
      puVar10[iVar12] = 0;
    }
    puVar10 = (undefined2 *)0x0;
    local_78 = puVar8;
    local_70 = uVar17;
    local_6c = iVar6;
  }
  DAT_146b083d0 = LoadPhysicsLibrary(&local_78);
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  puVar10 = (undefined2 *)0x0;
  iVar6 = 0;
  iVar7 = 0;
  iVar12 = 0;
  iVar13 = 0;
  iVar14 = 0;
  iVar15 = 0;
  local_50 = 7;
  local_58 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  puVar11 = local_58;
  uVar23 = CONCAT22(uVar24,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_58,7,"PhysX3",7,uVar23);
  uVar24 = (undefined2)((uint)uVar23 >> 0x10);
  iVar22 = 0;
  if ((int)DAT_146b08948 < 2) {
    puVar8 = puVar11;
    puVar11 = puVar10;
    uVar18 = (uint)local_50;
    iVar3 = local_50._4_4_;
  }
  else {
    iVar5 = iVar22;
    if ((uint)local_50 != 0) {
      iVar5 = (uint)local_50 + -1;
    }
    if (((int)DAT_146b08948 != 0) || (iVar3 = 1, iVar5 == 0)) {
      iVar3 = iVar22;
    }
    iVar3 = iVar3 + iVar5;
    local_78 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
              (&local_78,DAT_146b08940,DAT_146b08948 & 0xffffffff,0,iVar3);
    uVar17 = local_70;
    uVar24 = (undefined2)((uint)iVar3 >> 0x10);
    puVar8 = local_78;
    uVar18 = local_70;
    iVar3 = local_6c;
    if (iVar5 != 0) {
      lVar21 = (longlong)(int)local_70;
      local_70 = local_70 + (local_70 == 0) + iVar5;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar17);
      }
      uVar18 = local_70;
      puVar8 = local_78;
      puVar20 = local_78 + (lVar21 - (ulonglong)(uVar17 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar20,puVar11,(longlong)iVar5 * 2);
      puVar20[iVar5] = 0;
      iVar3 = local_6c;
    }
  }
  pvVar1 = DAT_146b08970;
  local_40 = CONCAT44(iVar3,uVar18);
  iVar5 = (int)DAT_146b08978;
  local_48 = puVar8;
  if ((int)uVar18 < 2) {
    local_68 = (undefined2 *)0x0;
    local_60 = CONCAT44(local_60._4_4_,iVar5);
    if (iVar5 == 0) {
      local_60 = DAT_146b08978 & 0xffffffff;
      puVar20 = puVar10;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,DAT_146b08978 & 0xffffffff,0);
      puVar20 = local_68;
      ::_guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar5 * 2);
    }
  }
  else {
    iVar3 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar3 = 0;
    }
    if ((uVar18 != 0) || (iVar5 = 1, iVar3 == 0)) {
      iVar5 = iVar22;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_78,&local_48,iVar5 + iVar3);
    uVar17 = local_70;
    pvVar1 = DAT_146b08970;
    puVar20 = local_78;
    if (iVar3 != 0) {
      lVar21 = (longlong)(int)local_70;
      local_70 = (local_70 == 0) + local_70 + iVar3;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar17);
      }
      puVar20 = local_78;
      puVar8 = local_78 + (lVar21 - (ulonglong)(uVar17 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar3 * 2);
      puVar8[iVar3] = 0;
    }
    local_60 = CONCAT44(local_6c,local_70);
    puVar8 = local_48;
    local_68 = puVar20;
  }
  DAT_146b083c8 = LoadPhysicsLibrary(&local_68);
  if (puVar20 != (undefined2 *)0x0) {
    FMemory::Free(puVar20);
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (param_1 != '\0') {
    local_48 = (undefined2 *)0x0;
    local_40 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar11 = local_48;
    uVar23 = CONCAT22(uVar24,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_48,0xe,"PhysX3Cooking",0xe,uVar23);
    uVar24 = (undefined2)((uint)uVar23 >> 0x10);
    if ((int)DAT_146b08948 < 2) {
      puVar8 = puVar11;
      puVar11 = puVar10;
      uVar18 = (int)local_40;
      iVar3 = local_40._4_4_;
    }
    else {
      iVar5 = iVar22;
      if ((int)local_40 != 0) {
        iVar5 = (int)local_40 + -1;
      }
      if (((int)DAT_146b08948 != 0) || (iVar3 = 1, iVar5 == 0)) {
        iVar3 = iVar22;
      }
      iVar3 = iVar3 + iVar5;
      local_78 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
                (&local_78,DAT_146b08940,DAT_146b08948 & 0xffffffff,0,iVar3);
      uVar17 = local_70;
      uVar24 = (undefined2)((uint)iVar3 >> 0x10);
      puVar8 = local_78;
      uVar18 = local_70;
      iVar3 = local_6c;
      if (iVar5 != 0) {
        lVar21 = (longlong)(int)local_70;
        local_70 = local_70 + (local_70 == 0) + iVar5;
        if (local_6c < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar17);
        }
        uVar18 = local_70;
        puVar8 = local_78;
        puVar20 = local_78 + (lVar21 - (ulonglong)(uVar17 != 0));
        ::_guard_xfg_dispatch_icall_nop(puVar20,puVar11,(longlong)iVar5 * 2);
        puVar20[iVar5] = 0;
        iVar3 = local_6c;
      }
    }
    pvVar1 = DAT_146b08970;
    local_50 = CONCAT44(iVar3,uVar18);
    iVar5 = (int)DAT_146b08978;
    local_58 = puVar8;
    if ((int)uVar18 < 2) {
      local_78 = (undefined2 *)0x0;
      local_70 = iVar5;
      if (iVar5 == 0) {
        local_6c = 0;
        puVar20 = puVar10;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,DAT_146b08978 & 0xffffffff,0);
        puVar20 = local_78;
        ::_guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)iVar5 * 2);
      }
    }
    else {
      iVar3 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      if ((uVar18 != 0) || (iVar5 = 1, iVar3 == 0)) {
        iVar5 = iVar22;
      }
      TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                (&local_68,&local_58,iVar3 + iVar5);
      uVar19 = local_60;
      pvVar1 = DAT_146b08970;
      puVar20 = local_68;
      if (iVar3 != 0) {
        iVar5 = (int)local_60;
        lVar21 = (longlong)(int)local_60;
        iVar4 = (uint)((int)local_60 == 0) + (int)local_60 + iVar3;
        local_60 = CONCAT44(local_60._4_4_,iVar4);
        if (local_60._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar19 & 0xffffffff);
        }
        puVar20 = local_68;
        puVar8 = local_68 + (lVar21 - (ulonglong)(iVar5 != 0));
        ::_guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar3 * 2);
        puVar8[iVar3] = 0;
      }
      local_70 = (int)local_60;
      local_6c = local_60._4_4_;
      puVar8 = local_58;
      local_78 = puVar20;
    }
    DAT_146b083d8 = LoadPhysicsLibrary(&local_78);
    if (puVar20 != (undefined2 *)0x0) {
      FMemory::Free(puVar20);
    }
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar11 = local_48;
  uVar23 = CONCAT22(uVar24,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0xe,"APEXFramework",0xe,uVar23);
  uVar24 = (undefined2)((uint)uVar23 >> 0x10);
  if ((int)DAT_146b08958 < 2) {
    puVar8 = puVar11;
    puVar11 = puVar10;
    uVar18 = (int)local_40;
    iVar5 = local_40._4_4_;
  }
  else {
    if ((int)local_40 != 0) {
      iVar6 = (int)local_40 + -1;
    }
    if (((int)DAT_146b08958 != 0) || (iVar5 = 1, iVar6 == 0)) {
      iVar5 = iVar22;
    }
    iVar5 = iVar5 + iVar6;
    local_78 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
              (&local_78,DAT_146b08950,DAT_146b08958 & 0xffffffff,0,iVar5);
    uVar17 = local_70;
    uVar24 = (undefined2)((uint)iVar5 >> 0x10);
    puVar8 = local_78;
    uVar18 = local_70;
    iVar5 = local_6c;
    if (iVar6 != 0) {
      lVar21 = (longlong)(int)local_70;
      local_70 = iVar6 + (uint)(local_70 == 0) + local_70;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar17);
      }
      uVar18 = local_70;
      puVar8 = local_78;
      puVar20 = local_78 + (lVar21 - (ulonglong)(uVar17 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar20,puVar11,(longlong)iVar6 * 2);
      puVar20[iVar6] = 0;
      iVar5 = local_6c;
    }
  }
  local_50 = CONCAT44(iVar5,uVar18);
  local_58 = puVar8;
  if ((int)uVar18 < 2) {
    FString::FString(&local_48,&DAT_146b08980);
  }
  else {
    if ((int)DAT_146b08988 != 0) {
      iVar7 = (int)DAT_146b08988 + -1;
    }
    if ((uVar18 != 0) || (iVar6 = 1, iVar7 == 0)) {
      iVar6 = iVar22;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_68,&local_58,iVar6 + iVar7);
    uVar19 = local_60;
    pvVar1 = DAT_146b08980;
    puVar20 = local_68;
    if (iVar7 != 0) {
      iVar6 = (int)local_60;
      lVar21 = (longlong)(int)local_60;
      iVar5 = (uint)((int)local_60 == 0) + iVar7 + (int)local_60;
      local_60 = CONCAT44(local_60._4_4_,iVar5);
      if (local_60._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar19 & 0xffffffff);
      }
      puVar20 = local_68;
      puVar8 = local_68 + (lVar21 - (ulonglong)(iVar6 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar7 * 2);
      puVar8[iVar7] = 0;
    }
    local_40 = local_60;
    puVar8 = local_58;
    local_48 = puVar20;
  }
  puVar20 = local_48;
  DAT_146b083e8 = LoadPhysicsLibrary(&local_48);
  if (puVar20 != (undefined2 *)0x0) {
    FMemory::Free(puVar20);
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar11 = local_48;
  uVar23 = CONCAT22(uVar24,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0xc,"APEX_Legacy",0xc,uVar23);
  uVar24 = (undefined2)((uint)uVar23 >> 0x10);
  if ((int)DAT_146b08958 < 2) {
    puVar8 = puVar11;
    puVar11 = puVar10;
    uVar18 = (int)local_40;
    iVar6 = local_40._4_4_;
  }
  else {
    if ((int)local_40 != 0) {
      iVar12 = (int)local_40 + -1;
    }
    if (((int)DAT_146b08958 != 0) || (iVar6 = 1, iVar12 == 0)) {
      iVar6 = iVar22;
    }
    iVar6 = iVar6 + iVar12;
    local_78 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
              (&local_78,DAT_146b08950,DAT_146b08958 & 0xffffffff,0,iVar6);
    uVar17 = local_70;
    uVar24 = (undefined2)((uint)iVar6 >> 0x10);
    puVar8 = local_78;
    uVar18 = local_70;
    iVar6 = local_6c;
    if (iVar12 != 0) {
      lVar21 = (longlong)(int)local_70;
      local_70 = iVar12 + (uint)(local_70 == 0) + local_70;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar17);
      }
      uVar18 = local_70;
      puVar8 = local_78;
      puVar20 = local_78 + (lVar21 - (ulonglong)(uVar17 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar20,puVar11,(longlong)iVar12 * 2);
      puVar20[iVar12] = 0;
      iVar6 = local_6c;
    }
  }
  local_50 = CONCAT44(iVar6,uVar18);
  local_58 = puVar8;
  if ((int)uVar18 < 2) {
    FString::FString(&local_48,&DAT_146b08980);
  }
  else {
    if ((int)DAT_146b08988 != 0) {
      iVar13 = (int)DAT_146b08988 + -1;
    }
    if ((uVar18 != 0) || (iVar6 = 1, iVar13 == 0)) {
      iVar6 = iVar22;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_68,&local_58,iVar6 + iVar13);
    uVar19 = local_60;
    pvVar1 = DAT_146b08980;
    puVar20 = local_68;
    if (iVar13 != 0) {
      iVar6 = (int)local_60;
      lVar21 = (longlong)(int)local_60;
      iVar7 = (uint)((int)local_60 == 0) + (int)local_60 + iVar13;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      if (local_60._4_4_ < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar19 & 0xffffffff);
      }
      puVar20 = local_68;
      puVar8 = local_68 + (lVar21 - (ulonglong)(iVar6 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar13 * 2);
      puVar8[iVar13] = 0;
    }
    local_40 = local_60;
    puVar8 = local_58;
    local_48 = puVar20;
  }
  puVar20 = local_48;
  DAT_146b083f0 = LoadPhysicsLibrary(&local_48);
  if (puVar20 != (undefined2 *)0x0) {
    FMemory::Free(puVar20);
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar11 = local_48;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_48,0xe,"APEX_Clothing",0xe,CONCAT22(uVar24,0x3f));
  if ((int)DAT_146b08958 < 2) {
    puVar8 = puVar11;
    puVar11 = puVar10;
    uVar18 = (int)local_40;
    iVar6 = local_40._4_4_;
  }
  else {
    if ((int)local_40 != 0) {
      iVar14 = (int)local_40 + -1;
    }
    if (((int)DAT_146b08958 != 0) || (iVar6 = 1, iVar14 == 0)) {
      iVar6 = iVar22;
    }
    local_78 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
              (&local_78,DAT_146b08950,DAT_146b08958 & 0xffffffff,0,iVar6 + iVar14);
    uVar17 = local_70;
    puVar8 = local_78;
    uVar18 = local_70;
    iVar6 = local_6c;
    if (iVar14 != 0) {
      lVar21 = (longlong)(int)local_70;
      local_70 = local_70 + (local_70 == 0) + iVar14;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar17);
      }
      uVar18 = local_70;
      puVar8 = local_78;
      puVar10 = local_78 + (lVar21 - (ulonglong)(uVar17 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar10,puVar11,(longlong)iVar14 * 2);
      puVar10[iVar14] = 0;
      iVar6 = local_6c;
    }
  }
  local_50 = CONCAT44(iVar6,uVar18);
  local_58 = puVar8;
  if ((int)uVar18 < 2) {
    FString::FString(&local_48,&DAT_146b08980);
  }
  else {
    if ((int)DAT_146b08988 != 0) {
      iVar15 = (int)DAT_146b08988 + -1;
    }
    if ((uVar18 != 0) || (iVar6 = 1, iVar15 == 0)) {
      iVar6 = iVar22;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_68,&local_58,iVar6 + iVar15);
    uVar19 = local_60;
    pvVar1 = DAT_146b08980;
    puVar10 = local_68;
    if (iVar15 != 0) {
      iVar6 = (int)local_60;
      lVar21 = (longlong)(int)local_60;
      iVar7 = (uint)((int)local_60 == 0) + (int)local_60 + iVar15;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      if (local_60._4_4_ < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar19 & 0xffffffff);
      }
      puVar10 = local_68;
      puVar8 = local_68 + (lVar21 - (ulonglong)(iVar6 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar15 * 2);
      puVar8[iVar15] = 0;
    }
    local_40 = local_60;
    puVar8 = local_58;
    local_48 = puVar10;
  }
  puVar10 = local_48;
  DAT_146b083f8 = LoadPhysicsLibrary(&local_48);
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if ((((((DAT_146b083b8 == 0) || (DAT_146b083c0 == 0)) || (DAT_146b083d0 == 0)) ||
       (DAT_146b083c8 == 0)) ||
      (((cVar2 != '\0' && (DAT_146b083e0 == 0)) || ((param_1 != '\0' && (DAT_146b083d8 == 0)))))) ||
     (((DAT_146b083e8 == 0 || (DAT_146b083f0 == 0)) || (DAT_146b083f8 == 0)))) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  if (local_res18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar16;
}



// FUNCTION 1426e6dd0 LoadPhysicsLibrary body=258 status=ok
// SIG undefined LoadPhysicsLibrary(void)

longlong PhysDLLHelper::LoadPhysicsLibrary(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  lVar1 = FWindowsPlatformProcess::GetDllHandle(puVar5);
  if (lVar1 == 0) {
    iVar7 = 0;
    do {
      FUN_1416b1760(0x3f000000);
      if (*(int *)(param_1 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_1;
      }
      lVar1 = FWindowsPlatformProcess::GetDllHandle(puVar5);
      if (lVar1 != 0) {
        return lVar1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    uVar2 = FPlatformFileManager::Get();
    plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    (**(code **)(*plVar3 + 0x68))(plVar3,puVar5);
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    (**(code **)(*plVar3 + 0x70))(plVar3,puVar5);
    if (*(int *)(param_1 + 1) != 0) {
      puVar6 = (undefined2 *)*param_1;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0xb8))(plVar3,puVar6,0);
    lVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return lVar1;
}



// FUNCTION 1426e6ee0 FUN_1426e6ee0 body=294 status=ok
// SIG undefined FUN_1426e6ee0(void)

void FUN_1426e6ee0(longlong param_1,longlong param_2,char param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  longlong local_res10;
  undefined4 local_28;
  undefined1 local_24 [4];
  longlong *local_20;
  undefined4 *local_18;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    pcVar6 = (char *)0x0;
    pcVar3 = pcVar6;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      pcVar3 = (char *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                       (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18);
    }
    if ((*(uint *)(pcVar3 + 8) >> 0x1d & 1) == 0) {
      local_res10 = param_2;
      if ((*(byte *)(param_2 + 0xb1a) & 4) == 0) {
        local_20 = &local_res10;
        local_18 = &local_28;
        local_28._0_2_ = CONCAT11(param_4,param_3);
        FUN_1426d25b0(param_1 + 0x458,local_24,&local_20,0);
        *(byte *)(local_res10 + 0xb1a) = *(byte *)(local_res10 + 0xb1a) | 4;
      }
      else {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x458,&local_28);
        pcVar3 = pcVar6;
        if (local_28 != -1) {
          pcVar3 = (char *)(*(longlong *)(param_1 + 0x458) + (longlong)local_28 * 0x18);
        }
        pcVar4 = pcVar3 + 8;
        if (pcVar3 == (char *)0x0) {
          pcVar4 = pcVar6;
        }
        if ((*pcVar4 == '\0') && (param_3 == '\x01')) {
          *pcVar4 = '\x01';
        }
        if (param_4 != '\0') {
          pcVar4[1] = '\x01';
        }
      }
    }
  }
  return;
}



// FUNCTION 1426e7010 FUN_1426e7010 body=78 status=ok
// SIG undefined FUN_1426e7010(void)

void FUN_1426e7010(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_146b089c8;
  if (param_1 != 0) {
    lVar2 = (longlong)DAT_146b089c8;
    DAT_146b089c8 = DAT_146b089c8 + 1;
    if (DAT_146b089cc < DAT_146b089c8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b089c0,iVar1);
    }
    *(longlong *)(DAT_146b089c0 + lVar2 * 8) = param_1;
  }
  return;
}



// FUNCTION 1426e7060 FUN_1426e7060 body=25 status=ok
// SIG undefined FUN_1426e7060(void)

void FUN_1426e7060(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (*(char *)(param_4 + 0x24c) < '\0') {
    FUN_1423979d0(param_4,param_1,1);
    return;
  }
  return;
}



// FUNCTION 1426e7080 FUN_1426e7080 body=117 status=ok
// SIG undefined FUN_1426e7080(void)

void FUN_1426e7080(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  
  if (*(char *)(param_4 + 0x24c) < '\0') {
    plVar1 = (longlong *)FUN_14238cd00(param_4);
    if (plVar1 == param_1) {
      (**(code **)(*param_1 + 0x730))(param_1,param_3);
      FUN_1423979d0(param_4,0,1);
      return;
    }
    FUN_142395aa0(param_4,param_1);
  }
  return;
}



// FUNCTION 1426e7100 FUN_1426e7100 body=30 status=ok
// SIG undefined FUN_1426e7100(void)

void FUN_1426e7100(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x308,local_res10);
  return;
}



// FUNCTION 1426e7120 FUN_1426e7120 body=1828 status=ok
// SIG undefined FUN_1426e7120(void)

void FUN_1426e7120(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong **pplVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  float fVar24;
  undefined8 local_148;
  uint *puStack_140;
  undefined4 local_138;
  int iStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  longlong *local_e8;
  char local_e0;
  char cStack_df;
  longlong *local_d8;
  longlong *plStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_a8 [28];
  
  plVar7 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar19 = plVar7[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar19 = plVar7[0x1f];
  }
  uVar15 = 0;
  uVar14 = uVar15;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x58) + 0x50);
  }
  if (((uVar14 == 0) || (lVar8 = UWorld::GetFirstPlayerController(), lVar8 == 0)) ||
     (*(longlong *)(lVar8 + 0x460) == 0)) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = *(float *)(*(longlong *)(lVar8 + 0x460) + 0x498);
  }
  iVar22 = (int)param_3[5];
  puStack_140 = (uint *)(param_3 + 2);
  local_148 = (longlong *)0x100000000;
  iStack_134 = 0;
  uStack_130 = 0;
  if (iVar22 != 0) {
    puVar18 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar18 = puStack_140;
    }
    uVar5 = *puVar18;
    uVar14 = uVar15;
    uVar17 = uVar15;
    while (uVar5 == 0) {
      iVar6 = (int)uVar14;
      uStack_130 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uStack_130;
      uVar14 = (ulonglong)(iVar6 + 1U);
      local_148._4_4_ = (undefined4)((ulonglong)local_148 >> 0x20);
      local_148 = (longlong *)CONCAT44(local_148._4_4_,iVar6 + 1U);
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1426e7274;
      uVar5 = puVar18[(longlong)iVar6 + 1];
    }
    uVar5 = uVar5 - 1 & uVar5 ^ uVar5;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    local_148 = (longlong *)CONCAT44(uVar5,(undefined4)local_148);
    if (uVar5 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_134 = (uStack_130 - iVar6) + 0x1f;
    if (iVar22 < iStack_134) {
LAB_1426e7274:
      iStack_134 = iVar22;
    }
  }
  local_138 = 0xffffffff;
  uStack_100 = CONCAT44(iStack_134,0xffffffff);
  auVar1._8_4_ = uStack_130;
  auVar1._0_8_ = uStack_100;
  auVar1._12_4_ = uStack_12c;
  local_b0._0_4_ = SUB84(param_3,0);
  local_b0._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  plStack_d0 = local_148;
  local_e0 = '\0';
  cStack_df = '\0';
  uStack_110 = local_148;
  uStack_b8 = auVar1._8_8_;
  local_f8._8_4_ = (undefined4)local_b0;
  local_f8._0_8_ = uStack_b8;
  local_f8._12_4_ = local_b0._4_4_;
  iVar22 = iStack_134;
  local_118 = param_3;
  local_108 = puStack_140;
  local_e8 = param_3;
  local_d8 = param_3;
  puStack_c8 = puStack_140;
  uStack_c0 = uStack_100;
  if (iStack_134 < (int)param_3[5]) {
    do {
      plVar7 = local_118;
      lVar8 = (longlong)iVar22 * 0x90;
      plVar9 = (longlong *)FWeakObjectPtr::Get(*local_118 + lVar8);
      if ((plVar9 != (longlong *)0x0) &&
         (lVar10 = (**(code **)(*plVar9 + 0x6d0))(plVar9,*(undefined8 *)(lVar8 + 0x50 + *plVar7),1),
         lVar10 != 0)) {
        lVar8 = lVar8 + *plVar7;
        lVar21 = plVar9[0x23];
        if (lVar21 != 0) {
          if ((*(char *)(lVar21 + 0x128) == '\x02') && ((*(byte *)(plVar9 + 0x5f) & 8) != 0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (((*(char *)(lVar21 + 0x128) == '\x01') || (bVar3)) &&
             ((*(byte *)(lVar8 + 0x48) & 2) != 0)) {
            uVar11 = FUN_1429f9f00();
            plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar21,uVar11);
            if (plVar7 == (longlong *)0x0) {
              pplVar12 = &local_d8;
              local_d8 = *(longlong **)(lVar19 + 0x58);
              plStack_d0 = *(longlong **)(lVar19 + 0x60);
              puStack_c8 = *(uint **)(lVar19 + 0x68);
              uStack_c0 = *(undefined8 *)(lVar19 + 0x70);
              uStack_b8 = *(undefined8 *)(lVar19 + 0x78);
              local_b0._0_4_ = (undefined4)*(undefined8 *)(lVar19 + 0x80);
              local_b0._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x80) >> 0x20);
            }
            else {
              pplVar12 = (longlong **)(**(code **)(*plVar7 + 0x10))(plVar7,local_a8);
            }
            local_148 = *pplVar12;
            puStack_140 = (uint *)pplVar12[1];
            local_128 = *(undefined4 *)(pplVar12 + 4);
            uStack_124 = *(undefined4 *)((longlong)pplVar12 + 0x24);
            uStack_120 = *(undefined4 *)(pplVar12 + 5);
            uStack_11c = *(undefined4 *)((longlong)pplVar12 + 0x2c);
            local_138 = SUB84(pplVar12[2],0);
            iStack_134 = (int)((ulonglong)pplVar12[2] >> 0x20);
            uStack_130 = (uint)pplVar12[3];
            uStack_12c = (undefined4)((ulonglong)pplVar12[3] >> 0x20);
            cVar4 = FUN_1426d9320(param_1,param_2,lVar10,lVar8 + 0x10,&local_148,fVar24 * 0.0005);
            lVar8 = FUN_142a07000();
            iVar6 = *(int *)(lVar8 + 0x90);
            if ((*(int *)(plVar9[2] + 0x90) < iVar6) ||
               (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)iVar6 * 8) != lVar8 + 0x88
               )) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) {
              FUN_142719970(plVar9,CONCAT71((int7)(int3)((uint)iVar6 >> 8),1));
            }
            if (cVar4 != '\0') {
              TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
              ::Remove(local_f8._8_8_,iVar22);
              local_e0 = '\x01';
            }
          }
        }
      }
      uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
      iVar22 = uStack_100._4_4_;
    } while (uStack_100._4_4_ < (int)local_108[6]);
    if ((local_e0 != '\0') && (cStack_df != '\0')) {
      TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_e8,(int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34),1);
    }
  }
  local_118 = (longlong *)(param_1 + 0x60);
  iVar22 = *(int *)(param_1 + 0x88);
  puStack_140 = (uint *)(param_1 + 0x70);
  local_148 = (longlong *)0x100000000;
  iStack_134 = 0;
  uStack_130 = 0;
  if (iVar22 != 0) {
    puVar18 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar18 = puStack_140;
    }
    uVar5 = *puVar18;
    uVar14 = uVar15;
    while (uVar5 == 0) {
      iVar6 = (int)uVar14;
      uStack_130 = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)uStack_130;
      uVar14 = (ulonglong)(iVar6 + 1U);
      local_148._4_4_ = (undefined4)((ulonglong)local_148 >> 0x20);
      local_148 = (longlong *)CONCAT44(local_148._4_4_,iVar6 + 1U);
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1426e758d;
      uVar5 = puVar18[(longlong)iVar6 + 1];
    }
    uVar5 = -uVar5 & uVar5;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    local_148 = (longlong *)CONCAT44(uVar5,(undefined4)local_148);
    if (uVar5 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_134 = (uStack_130 - iVar6) + 0x1f;
    if (iVar22 < iStack_134) {
LAB_1426e758d:
      iStack_134 = iVar22;
    }
  }
  local_138 = 0xffffffff;
  uStack_100 = CONCAT44(iStack_134,0xffffffff);
  auVar2._8_4_ = uStack_130;
  auVar2._0_8_ = uStack_100;
  auVar2._12_4_ = uStack_12c;
  local_b0._0_4_ = SUB84(local_118,0);
  local_b0._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  plStack_d0 = local_148;
  local_e0 = '\0';
  cStack_df = '\0';
  uStack_110 = local_148;
  uStack_b8 = auVar2._8_8_;
  local_f8._8_4_ = (undefined4)local_b0;
  local_f8._0_8_ = uStack_b8;
  local_f8._12_4_ = local_b0._4_4_;
  iVar22 = iStack_134;
  local_108 = puStack_140;
  local_e8 = local_118;
  local_d8 = local_118;
  puStack_c8 = puStack_140;
  uStack_c0 = uStack_100;
  local_b0 = local_118;
  if (iStack_134 < *(int *)(param_1 + 0x88)) {
    do {
      plVar7 = local_118;
      plVar9 = (longlong *)FWeakObjectPtr::Get(*local_118 + (longlong)iVar22 * 0x20);
      if ((plVar9 != (longlong *)0x0) && (lVar8 = plVar9[0x23], lVar8 != 0)) {
        if ((*(char *)(lVar8 + 0x128) == '\x02') || (*(char *)(lVar8 + 0x128) == '\x01')) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          lVar10 = (longlong)iVar22 * 0x20 + *plVar7;
          iVar6 = *(int *)(lVar10 + 0x10) + -1;
          if (-1 < iVar6) {
            lVar20 = (longlong)iVar6 * 0x70;
            lVar21 = lVar20;
            do {
              lVar13 = (**(code **)(*plVar9 + 0x6d0))
                                 (plVar9,*(undefined8 *)(*(longlong *)(lVar10 + 8) + 0x40 + lVar20),
                                  1);
              if (lVar13 != 0) {
                lVar23 = *(longlong *)(lVar10 + 8) + lVar21;
                if ((*(byte *)(lVar23 + 0x38) & 2) != 0) {
                  uVar11 = FUN_1429f9f00();
                  plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar11);
                  if (plVar7 == (longlong *)0x0) {
                    local_d8 = *(longlong **)(lVar19 + 0x58);
                    plStack_d0 = *(longlong **)(lVar19 + 0x60);
                    plVar7 = *(longlong **)(lVar19 + 0x80);
                    pplVar12 = &local_d8;
                    puStack_c8 = *(uint **)(lVar19 + 0x68);
                    uStack_c0 = *(undefined8 *)(lVar19 + 0x70);
                    uStack_b8 = *(undefined8 *)(lVar19 + 0x78);
                    local_b0._0_4_ = SUB84(plVar7,0);
                    local_b0._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
                  }
                  else {
                    pplVar12 = (longlong **)(**(code **)(*plVar7 + 0x10))(plVar7,local_a8);
                    plVar7 = local_b0;
                  }
                  local_148 = *pplVar12;
                  puStack_140 = (uint *)pplVar12[1];
                  local_128 = *(undefined4 *)(pplVar12 + 4);
                  uStack_124 = *(undefined4 *)((longlong)pplVar12 + 0x24);
                  uStack_120 = *(undefined4 *)(pplVar12 + 5);
                  uStack_11c = *(undefined4 *)((longlong)pplVar12 + 0x2c);
                  local_138 = SUB84(pplVar12[2],0);
                  iStack_134 = (int)((ulonglong)pplVar12[2] >> 0x20);
                  uStack_130 = (uint)pplVar12[3];
                  uStack_12c = (undefined4)((ulonglong)pplVar12[3] >> 0x20);
                  local_b0 = plVar7;
                  cVar4 = FUN_1426d9320(param_1,param_2,lVar13,lVar23,&local_148,fVar24 * 0.0005);
                  if (cVar4 != '\0') {
                    iVar22 = *(int *)(lVar10 + 0x10);
                    iVar16 = (iVar22 - iVar6) + -1;
                    if (0 < iVar16) {
                      iVar16 = 1;
                    }
                    if (iVar16 != 0) {
                      _guard_xfg_dispatch_icall_nop
                                ((void *)(*(longlong *)(lVar10 + 8) + lVar20),
                                 (void *)((longlong)(iVar22 - iVar16) * 0x70 +
                                         *(longlong *)(lVar10 + 8)),(longlong)iVar16 * 0x70);
                      iVar22 = *(int *)(lVar10 + 0x10);
                    }
                    *(int *)(lVar10 + 0x10) = iVar22 + -1;
                    TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(lVar10 + 8);
                  }
                }
              }
              lVar20 = lVar20 + -0x70;
              lVar21 = lVar21 + -0x70;
              iVar6 = iVar6 + -1;
            } while (-1 < iVar6);
            iVar22 = uStack_100._4_4_;
          }
          FUN_142719970(plVar9,1);
          if (*(int *)(lVar10 + 0x10) == 0) {
            TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
            ::Remove(local_f8._8_8_,iVar22);
            local_e0 = '\x01';
          }
        }
      }
      uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
      iVar22 = uStack_100._4_4_;
    } while (uStack_100._4_4_ < (int)local_108[6]);
    if ((local_e0 != '\0') && (cStack_df != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_e8,(int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1426e7850 FUN_1426e7850 body=123 status=ok
// SIG undefined FUN_1426e7850(void)

void FUN_1426e7850(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_142394230();
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 == 0) {
    return;
  }
  if ((*(byte *)(lVar3 + 0x94) & 2) == 0) {
    iVar1 = *(int *)(lVar3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      return;
    }
  }
  FUN_1426ce340(param_1 + 0x318);
  return;
}



// FUNCTION 1426e78d0 FUN_1426e78d0 body=164 status=ok
// SIG undefined FUN_1426e78d0(void)

void FUN_1426e78d0(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x400))();
  }
  if ((param_1[0x41] != 0) &&
     (plVar1 = (longlong *)FUN_1426e2550((int)param_1[0x31]), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x358))
              (plVar1,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsHandleComponent.cpp"
               ,0x2a);
    (*(code *)**(undefined8 **)param_1[0x41])();
    param_1[0x41] = 0;
    (*(code *)**(undefined8 **)param_1[0x42])();
    param_1[0x42] = 0;
    (**(code **)(*plVar1 + 0x360))(plVar1);
  }
  FUN_142344780(param_1);
  return;
}



// FUNCTION 1426e7980 P2UTransform body=90 status=ok
// SIG undefined P2UTransform(void)

undefined8 * P2UTransform(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar6 = DAT_1464aa790;
  uVar5 = DAT_1464aa788._4_4_;
  auVar1._8_4_ = *(undefined4 *)(param_2 + 3);
  auVar1._0_8_ = uVar3;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar1;
  auVar2._4_4_ = uVar5;
  auVar2._0_4_ = (undefined4)DAT_1464aa788;
  auVar2._8_4_ = uVar6;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 4) = auVar2;
  return param_1;
}



// FUNCTION 1426e79e0 PhotographyCameraModify_Implementation body=116 status=ok
// SIG undefined PhotographyCameraModify_Implementation(void)

void APlayerCameraManager::PhotographyCameraModify_Implementation
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_4;
  local_30 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  uVar1 = FUN_1422efe50();
  FCameraPhotographyManager::DefaultConstrainCamera
            (uVar1,&local_18,&local_28,&local_38,param_5,param_1);
  return;
}



// FUNCTION 1426e7a60 FUN_1426e7a60 body=976 status=ok
// SIG undefined FUN_1426e7a60(void)

undefined2 *
FUN_1426e7a60(undefined2 *param_1,uint param_2,int *param_3,uint param_4,int *param_5,
             ushort *param_6,longlong *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  
  uVar1 = param_5[3];
  uVar17 = param_2 >> 4;
  uVar14 = param_3[3] & 0xffffff;
  uVar4 = param_4 >> 4;
  uVar21 = uVar1 & 0xffffff;
  if ((((param_2 | param_4) & 0x20) == 0) &&
     ((((byte)(uVar21 >> 8) | (byte)(uVar14 >> 8)) & 1) == 0)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if (((((uVar17 & 1) != 0) && ((uVar4 & 1) != 0)) && (!bVar22)) &&
     (((uVar21 | uVar14) & 0x40) == 0)) {
    *param_1 = (undefined2)DAT_1465349d8;
    return param_1;
  }
  uVar21 = uVar21 | uVar14;
  if (((((uVar17 & 1) != 0) || ((uVar4 & 1) != 0)) &&
      (((param_2 & 0xf) == 0 || ((param_4 & 0xf) == 0)))) && ((!bVar22 && ((uVar21 >> 9 & 1) == 0)))
     ) {
    *param_1 = (undefined2)DAT_1465349d8;
    return param_1;
  }
  iVar10 = param_5[2];
  if (param_3[2] == iVar10) {
    lVar13 = *param_7;
    if (*(int *)(lVar13 + 800) != *(int *)(lVar13 + 0x34c)) {
      lVar12 = *(longlong *)(lVar13 + 0x358);
      if (*(longlong *)(lVar13 + 0x358) == 0) {
        lVar12 = lVar13 + 0x350;
      }
      iVar9 = *(int *)(lVar12 + ((longlong)*(int *)(lVar13 + 0x360) - 1U & (longlong)iVar10) * 4);
      if (iVar9 != -1) {
        do {
          plVar11 = (longlong *)(*(longlong *)(lVar13 + 0x318) + (longlong)iVar9 * 0x18);
          if (*(int *)(*(longlong *)(lVar13 + 0x318) + (longlong)iVar9 * 0x18) == iVar10) {
            if (iVar9 != -1) goto LAB_1426e7be3;
            break;
          }
          iVar9 = (int)plVar11[2];
        } while (iVar9 != -1);
      }
    }
    plVar11 = (longlong *)0x0;
LAB_1426e7be3:
    plVar16 = plVar11 + 1;
    if (plVar11 == (longlong *)0x0) {
      plVar16 = (longlong *)0x0;
    }
    if (plVar16 != (longlong *)0x0) {
      iVar10 = *param_3;
      iVar9 = *param_5;
      plVar16 = (longlong *)*plVar16;
      iVar3 = iVar9;
      if (iVar10 <= iVar9) {
        iVar3 = iVar10;
      }
      if (iVar9 <= iVar10) {
        iVar9 = iVar10;
      }
      if ((int)plVar16[1] != *(int *)((longlong)plVar16 + 0x34)) {
        plVar11 = (longlong *)plVar16[8];
        if ((longlong *)plVar16[8] == (longlong *)0x0) {
          plVar11 = plVar16 + 7;
        }
        iVar10 = *(int *)((longlong)plVar11 +
                         ((longlong)(iVar9 * 0x17 + iVar3) & (longlong)(int)plVar16[9] - 1U) * 4);
        if (iVar10 != -1) {
          do {
            lVar13 = *plVar16 + (longlong)iVar10 * 0x14;
            if ((*(int *)(*plVar16 + (longlong)iVar10 * 0x14) == iVar3) &&
               (*(int *)(lVar13 + 4) == iVar9)) {
              if (iVar10 != -1) goto LAB_1426e7c8a;
              break;
            }
            iVar10 = *(int *)(lVar13 + 0xc);
          } while (iVar10 != -1);
        }
      }
      lVar13 = 0;
LAB_1426e7c8a:
      lVar12 = lVar13 + 8;
      if (lVar13 == 0) {
        lVar12 = 0;
      }
      if (lVar12 != 0) {
        *param_1 = 1;
        return param_1;
      }
    }
  }
  uVar14 = param_3[1];
  uVar19 = (uint)param_5[3] >> 0x17 & 0x1f;
  uVar18 = (uint)param_3[3] >> 0x17 & 0x1f;
  uVar15 = 1 << (sbyte)uVar18;
  uVar20 = 1 << (sbyte)uVar19 & uVar14;
  uVar8 = (undefined2)DAT_1465349d8;
  if (((uVar20 & 0xfffffff) == 0) || (uVar2 = param_5[1], (uVar15 & uVar2 & 0xfffffff) == 0)) {
    if (!bVar22) goto LAB_1426e7e0c;
LAB_1426e7df6:
    if (((param_5[1] & uVar15) == 0) && (uVar20 == 0)) goto LAB_1426e7e0c;
    *param_6 = 0x414;
  }
  else {
    if (bVar22) goto LAB_1426e7df6;
    if ((uVar17 & 1) == 0) {
      if ((uVar4 & 1) != 0) goto LAB_1426e7d23;
LAB_1426e7d36:
      uVar7 = 0x401;
    }
    else {
      if ((uVar4 & 1) == 0) {
LAB_1426e7d23:
        if (((param_2 & 0xf) != 0) && ((param_4 & 0xf) != 0)) goto LAB_1426e7d36;
      }
      uVar7 = 0x400;
    }
    *param_6 = uVar7;
    if ((uVar18 == 6) || (uVar19 == 6)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    if ((uVar18 == 7) || (uVar19 == 7)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((uVar18 == 5) || (uVar19 == 5)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((uVar17 & 1) == 0) {
      if ((((uVar4 & 1) != 0) || (!bVar22)) || ((!bVar5 && (!bVar6)))) {
LAB_1426e7d94:
        if ((uVar21 & 4) != 0) {
          *param_6 = uVar7 | 0x801;
        }
      }
    }
    else if ((uVar4 & 1) == 0) goto LAB_1426e7d94;
    bVar22 = (uVar21 & 8) != 0;
    if (bVar22) {
      *param_6 = *param_6 | 0x20c;
    }
    if ((uVar21 & 0x20) != 0) {
      *param_6 = *param_6 | 2;
    }
    if ((((param_3[3] & uVar2 | uVar1 & uVar14) & 0xf0000000) != 0) &&
       (*param_6 = *param_6 & 0xfffe, uVar8 = (undefined2)DAT_1465349d8, !bVar22))
    goto LAB_1426e7e0c;
  }
  uVar8 = 0;
LAB_1426e7e0c:
  *param_1 = uVar8;
  return param_1;
}



// FUNCTION 1426e7e30 FUN_1426e7e30 body=472 status=ok
// SIG undefined FUN_1426e7e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1426e7e30(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                      undefined4 param_9,undefined4 param_10,undefined8 *param_11)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((*(longlong *)(param_1 + 0x2c38) != 0) && (0 < *(int *)(param_1 + 0x2c30))) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0x2c28) + -8 + (longlong)*(int *)(param_1 + 0x2c30) * 8);
    *(int *)(param_1 + 0x2c30) = *(int *)(param_1 + 0x2c30) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
    if (lVar2 != 0) {
      plVar3 = (longlong *)UCameraAnimInst::GetPrivateStaticClass();
      lVar4 = plVar3[0x1f];
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar4 = plVar3[0x1f];
      }
      iVar1 = *(int *)(param_1 + 0x2c20);
      *(int *)(param_1 + 0x2c20) = iVar1 + 1;
      if (*(int *)(param_1 + 0x2c24) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x2c18,iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x2c18) + (longlong)iVar1 * 8) = lVar2;
      if (lVar4 != 0) {
        *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar4 + 0x58);
        *(undefined1 *)(lVar2 + 0x78) = *(undefined1 *)(lVar4 + 0x78);
      }
      if ((*(byte *)(param_2 + 0x50) & 2) == 0) {
        *(undefined4 *)(lVar2 + 0x100) = *(undefined4 *)(param_1 + 0x11b8);
      }
      *(undefined8 *)(lVar2 + 0xc0) = _DAT_1468b5d90;
      *(undefined4 *)(lVar2 + 200) = DAT_1468b5d98;
      FUN_1422f5010(lVar2,param_2,*(undefined8 *)(param_1 + 0x2c38),param_3,param_4,param_5,param_6,
                    param_7,param_8,param_9);
      local_48 = *param_11;
      local_40 = *(undefined4 *)(param_11 + 1);
      UCameraAnimInst::SetPlaySpace(lVar2,param_10,&local_48);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1426e8010 FUN_1426e8010 body=165 status=ok
// SIG undefined FUN_1426e8010(void)

undefined8
FUN_1426e8010(longlong param_1,longlong param_2,float param_3,undefined4 param_4,undefined8 *param_5
             )

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_2 != 0) {
    lVar2 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        plVar1 = *(longlong **)(param_1 + 0x2bb0);
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        if (param_3 <= 0.0) {
          return 0;
        }
        local_28 = *param_5;
        local_20 = *(undefined4 *)(param_5 + 1);
        (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,param_3,param_4,&local_28,0);
        return 0;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 1426e80c0 FUN_1426e80c0 body=193 status=ok
// SIG undefined FUN_1426e80c0(void)

void FUN_1426e80c0(longlong param_1,longlong param_2,undefined8 param_3,float param_4,
                  undefined4 param_5,undefined8 *param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_2 != 0) {
    lVar2 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        plVar1 = *(longlong **)(param_1 + 0x2bb0);
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        if (param_4 <= 0.0) {
          return;
        }
        local_28 = *param_6;
        local_20 = *(undefined4 *)(param_6 + 1);
        lVar3 = (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,param_4,param_5,&local_28,param_7);
        if (lVar3 == 0) {
          return;
        }
        FUN_1426d5b50(param_3,lVar3);
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1426e8190 FUN_1426e8190 body=827 status=ok
// SIG undefined FUN_1426e8190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426e8190(undefined8 param_1,undefined8 param_2,float *param_3,float param_4,float param_5,
                  float param_6,char param_7)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_7a8 [32];
  undefined8 *local_788;
  undefined8 local_778;
  float local_770;
  undefined8 local_768;
  float local_760;
  float local_758;
  float local_754;
  float local_750;
  longlong *local_748;
  int local_740;
  undefined8 local_738;
  undefined4 local_730;
  undefined8 local_728;
  undefined4 local_720;
  undefined1 local_718 [16];
  float local_708;
  float local_704;
  float local_700;
  longlong local_f0;
  longlong local_e0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_7a8;
  UWorld::GetPlayerControllerIterator(param_1,&local_748);
  for (; (-1 < local_740 && (local_740 < (int)local_748[1])); local_740 = local_740 + 1) {
    lVar5 = FWeakObjectPtr::Get(*local_748 + (longlong)local_740 * 8);
    if ((lVar5 != 0) && (plVar1 = *(longlong **)(lVar5 + 0x528), plVar1 != (longlong *)0x0)) {
      local_770 = param_3[2];
      local_778 = *(undefined8 *)param_3;
      puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x720))(plVar1,&local_708);
      local_768 = *puVar6;
      local_760 = *(float *)(puVar6 + 1);
      if (local_e0 != 0) {
        FMemory::Free();
      }
      if (local_f0 != 0) {
        FMemory::Free();
      }
      fVar8 = (local_778._4_4_ - local_768._4_4_) * (local_778._4_4_ - local_768._4_4_) +
              ((float)local_778 - (float)local_768) * ((float)local_778 - (float)local_768) +
              (local_770 - local_760) * (local_770 - local_760);
      if (param_5 <= param_4) {
        if (param_4 * param_4 <= fVar8) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = 1.0;
        }
      }
      else {
        fVar8 = (SQRT(fVar8) - param_4) / (param_5 - param_4);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        fVar8 = _guard_xfg_dispatch_icall_nop(1.0 - fVar8,param_6);
      }
      if ((param_7 == '\0') || (*(longlong *)(lVar5 + 0x488) == 0)) {
        uVar7 = 0;
        local_720 = DAT_1468b5da8;
        local_788 = &local_728;
        local_728 = DAT_1468b5da0;
      }
      else {
        (**(code **)(**(longlong **)(lVar5 + 0x528) + 0x720))
                  (*(longlong **)(lVar5 + 0x528),&local_708);
        fVar4 = local_700;
        fVar3 = local_704;
        fVar2 = local_708;
        if (local_e0 != 0) {
          FMemory::Free();
        }
        if (local_f0 != 0) {
          FMemory::Free();
        }
        local_758 = *param_3 - fVar2;
        local_754 = param_3[1] - fVar3;
        local_750 = param_3[2] - fVar4;
        puVar6 = (undefined8 *)FVector::Rotation(&local_758,local_718);
        uVar7 = 2;
        local_738 = *puVar6;
        local_730 = *(undefined4 *)(puVar6 + 1);
        local_788 = &local_738;
      }
      FUN_1429e0b80(lVar5,param_2,fVar8,uVar7);
    }
  }
  return;
}



// FUNCTION 1426e84d0 FUN_1426e84d0 body=111 status=ok
// SIG undefined FUN_1426e84d0(void)

void FUN_1426e84d0(longlong param_1)

{
  char cVar1;
  
  FUN_1417931d0();
  cVar1 = *(char *)(param_1 + 0x88);
  if (cVar1 != '\x04') {
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x89) = 0;
    }
    else if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x89) = 1;
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0x89) = 2;
    }
    else if (cVar1 == '\x03') {
      *(undefined1 *)(param_1 + 0x89) = 3;
    }
    *(undefined1 *)(param_1 + 0x88) = 4;
  }
  if (*(char *)(param_1 + 0xa9) == -1) {
    *(char *)(param_1 + 0xa9) = (*(char *)(param_1 + 0xaa) == '\0') + '\x01';
  }
  return;
}



// FUNCTION 1426e8540 FUN_1426e8540 body=408 status=ok
// SIG undefined FUN_1426e8540(void)

void FUN_1426e8540(longlong *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  FUN_142238430();
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::AddPhysicsVolume(uVar4,param_1);
  lVar1 = param_1[0x8e];
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&APhysicsVolume::OnActorEnteredVolume",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res10,pwVar3 + 2,1);
  lVar6 = local_res10;
  FWeakObjectPtr::operator=(local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(local_28,param_1);
  local_20 = lVar6;
  if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(local_28), lVar6 != 0)) {
    UObject::FindFunction(lVar6,local_20);
  }
  FUN_1406a5aa0(lVar1 + 0x570,local_28);
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&APhysicsVolume::OnActorLeftVolume",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res10,pwVar3 + 2,1);
  FWeakObjectPtr::operator=(local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(local_28), lVar6 != 0)) {
    UObject::FindFunction(lVar6,local_20);
  }
  FUN_1406a5aa0(lVar1 + 0x580,local_28);
  return;
}



// FUNCTION 1426e86e0 FUN_1426e86e0 body=470 status=ok
// SIG undefined FUN_1426e86e0(void)

void FUN_1426e86e0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong in_stack_ffffffffffffff78;
  undefined1 local_58 [16];
  longlong *local_48;
  longlong local_40;
  undefined1 local_30;
  uint local_2c;
  
  FUN_142238430();
  if (0 < (int)param_1[0x56d]) {
    plVar7 = (longlong *)param_1[0x56c];
    plVar8 = plVar7 + (int)param_1[0x56d];
    for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
      lVar9 = *plVar7;
      if (lVar9 != 0) {
        lVar3 = UCameraModifier::GetPrivateStaticClass();
        lVar5 = lVar9;
        do {
          if (lVar5 == lVar3) {
            lVar9 = (**(code **)(*param_1 + 0x748))(param_1,lVar9);
            if (lVar9 != 0) {
              lVar5 = FUN_14290cf20();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                param_1[0x576] = lVar9;
              }
            }
            break;
          }
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
      }
    }
  }
  plVar8 = param_1 + 0x577;
  lVar9 = 8;
  do {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = UCameraAnimInst::GetPrivateStaticClass();
    in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffffff00000000;
    lVar5 = FUN_1417985e0(uVar4,param_1,0,0,in_stack_ffffffffffffff78,0,0,0,0);
    *plVar8 = lVar5;
    iVar1 = (int)param_1[0x586];
    *(int *)(param_1 + 0x586) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x2c34) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x585,iVar1);
    }
    lVar5 = *plVar8;
    plVar8 = plVar8 + 1;
    *(longlong *)(param_1[0x585] + (longlong)iVar1 * 8) = lVar5;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FActorSpawnParameters::FActorSpawnParameters(local_58);
  local_40 = param_1[0x2a];
  local_2c = local_2c | 0x40;
  local_30 = 1;
  local_48 = param_1;
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar6 = FUN_14290f280();
  lVar9 = UWorld::SpawnActor(uVar4,uVar6,0,0,local_58);
  param_1[0x587] = lVar9;
  return;
}



// FUNCTION 1426e88c0 FUN_1426e88c0 body=66 status=ok
// SIG undefined FUN_1426e88c0(void)

void FUN_1426e88c0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_142238430();
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x218);
  }
  if (lVar1 != 0) {
    FUN_1426f1670(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1426e8910 FUN_1426e8910 body=110 status=ok
// SIG undefined FUN_1426e8910(void)

void FUN_1426e8910(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  
  FUN_1422384a0();
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar2 < 0xf6) && (*(longlong *)(param_1 + 0x458) != 0)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x2d0) = *(undefined8 *)(param_1 + 0x460);
    *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x2e0) = *(undefined8 *)(param_1 + 0x468);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x458) + 0x4a4);
    *pbVar1 = *pbVar1 ^ (*(byte *)(param_1 + 0x470) ^
                        *(byte *)(*(longlong *)(param_1 + 0x458) + 0x4a4)) & 1;
  }
  return;
}



// FUNCTION 1426e8980 FUN_1426e8980 body=205 status=ok
// SIG undefined FUN_1426e8980(void)

void FUN_1426e8980(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_142349c80();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar1 < 0xf6) && (*(longlong *)(param_1 + 0x300) != 0)) {
    FConstraintInstance::CopyConstraintParamsFrom
              (param_1 + 0x318,*(longlong *)(param_1 + 0x300) + 0x28);
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar1 < 0x15d) {
    plVar2 = (longlong *)FUN_1426e1e40(param_1,0);
    plVar3 = (longlong *)FUN_1426e1e40(param_1,1);
    if ((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 0x78) & 8) != 0)) {
      (**(code **)(*plVar2 + 0x808))(plVar2,*(undefined8 *)(param_1 + 0x338));
    }
    if ((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 0x78) & 8) != 0)) {
      (**(code **)(*plVar3 + 0x808))(plVar3,*(undefined8 *)(param_1 + 0x340));
    }
  }
  return;
}



// FUNCTION 1426e8a50 FUN_1426e8a50 body=27 status=ok
// SIG undefined FUN_1426e8a50(void)

void FUN_1426e8a50(undefined8 param_1)

{
  FUN_142349c80();
  FUN_1426f06b0(param_1);
  return;
}



// FUNCTION 1426e8a70 FUN_1426e8a70 body=475 status=ok
// SIG undefined FUN_1426e8a70(void)

void FUN_1426e8a70(longlong param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 local_res10 [2];
  
  uVar3 = DAT_1468e3590;
  uVar12 = (ulonglong)param_2;
  uVar6 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar6,"TotalPhysicsTime",uVar3);
  if (*(char *)(uVar12 + 0x66 + param_1) != '\0') {
    if (param_2 == 2) {
      lVar11 = *(longlong *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (lVar11 != 0) {
        LOCK();
        piVar1 = (int *)(lVar11 + 0x48);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    if (param_2 < *(uint *)(param_1 + 4)) {
      plVar7 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + uVar12 * 2));
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    local_res10[0] = 0;
    (**(code **)(*plVar7 + 0x358))(plVar7,0,0);
    plVar8 = (longlong *)FUN_1426e19d0(param_1,param_2);
    (**(code **)(*plVar7 + 0x1d8))(plVar7,1);
    *(undefined1 *)(uVar12 + 0x69 + param_1) = 1;
    (**(code **)(*plVar8 + 0x48))(plVar8,1,local_res10);
    FUN_1426edf10(param_1,param_2);
    (**(code **)(*plVar7 + 0x360))(plVar7);
    lVar11 = *(longlong *)(param_1 + 0x98 + uVar12 * 8);
    *(undefined8 *)(param_1 + 0x98 + uVar12 * 8) = 0;
    if (lVar11 != 0) {
      LOCK();
      piVar1 = (int *)(lVar11 + 0x48);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle();
      }
    }
    *(undefined1 *)(uVar12 + 0x66 + param_1) = 0;
    bVar2 = false;
    *(undefined1 *)(uVar12 + 0x69 + param_1) = 0;
    *(undefined1 *)(uVar12 * 0x58 + 0x100 + param_1) = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar9 = *(int *)(param_1 + 0x4c);
    iVar5 = *(int *)(param_1 + 0x40) + -1;
    lVar11 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar10 = lVar11 << 4;
      bVar2 = false;
      do {
        if ((*(int *)(lVar10 + 8 + *(longlong *)(param_1 + 0x38)) == 0) ||
           (plVar7 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x38)),
           plVar7 == (longlong *)0x0)) {
LAB_1426e8bf4:
          bVar2 = true;
        }
        else {
          cVar4 = (**(code **)(*plVar7 + 0x40))(plVar7,param_1,param_2);
          if (cVar4 == '\0') goto LAB_1426e8bf4;
        }
        lVar10 = lVar10 + -0x10;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
      iVar9 = *(int *)(param_1 + 0x4c);
    }
    *(int *)(param_1 + 0x4c) = iVar9 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x38,0);
    }
  }
  uVar6 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar6,"TotalPhysicsTime",uVar3);
  return;
}



// FUNCTION 1426e8c50 FUN_1426e8c50 body=524 status=ok
// SIG undefined FUN_1426e8c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426e8c50(longlong *param_1,undefined4 param_2,undefined1 (*param_3) [12],float *param_4)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar7 = 0;
  if (0 < (int)param_1[0x56b]) {
    lVar8 = 0;
    do {
      if (((*(longlong **)(lVar8 + param_1[0x56a]) != (longlong *)0x0) &&
          (cVar6 = (**(code **)(**(longlong **)(lVar8 + param_1[0x56a]) + 0x290))(), cVar6 == '\0'))
         && (cVar6 = (**(code **)(**(longlong **)(lVar8 + param_1[0x56a]) + 0x2b8))
                               (*(longlong **)(lVar8 + param_1[0x56a]),param_1[0x232],param_2,
                                param_3,param_4), cVar6 != '\0')) break;
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < (int)param_1[0x56b]);
  }
  *(float *)*param_3 = *(float *)*param_3 + *param_4;
  *(float *)(*param_3 + 4) = param_4[1] + *(float *)(*param_3 + 4);
  *(float *)(*param_3 + 8) = param_4[2] + *(float *)(*param_3 + 8);
  *(undefined8 *)param_4 = DAT_1468b5da0;
  param_4[2] = DAT_1468b5da8;
  if ((*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) &&
     (cVar6 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))(), cVar6 != '\0')) {
    fVar3 = (float)DAT_146b08a50;
    fVar4 = DAT_146b08a50._4_4_;
    fVar5 = DAT_146b08a50._8_4_;
    auVar9._12_4_ = 0;
    auVar9._0_12_ = *param_3;
    auVar9 = divps(auVar9,_DAT_146b08a50);
    fVar10 = *(float *)*param_3 - (float)(int)auVar9._0_4_ * fVar3;
    fVar11 = *(float *)(*param_3 + 4) - (float)(int)auVar9._4_4_ * fVar4;
    fVar12 = *(float *)(*param_3 + 8) - (float)(int)auVar9._8_4_ * fVar5;
    fVar10 = (float)(((uint)(fVar3 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar3 + fVar10));
    fVar11 = (float)(((uint)(fVar4 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar4 + fVar11));
    fVar12 = (float)(((uint)(fVar5 + fVar12) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar5 + fVar12));
    bVar1 = fRam0000000146b08a44 < fVar11;
    bVar2 = fRam0000000146b08a48 < fVar12;
    *(uint *)*param_3 =
         ((uint)(fVar10 - fVar3) ^ (uint)fVar10) & -(uint)(_DAT_146b08a40 < fVar10) ^ (uint)fVar10;
    *(uint *)(*param_3 + 8) = ((uint)(fVar12 - fVar5) ^ (uint)fVar12) & -(uint)bVar2 ^ (uint)fVar12;
    *(uint *)(*param_3 + 4) = ((uint)(fVar11 - fVar4) ^ (uint)fVar11) & -(uint)bVar1 ^ (uint)fVar11;
    return;
  }
  (**(code **)(*param_1 + 0x888))
            (param_1,param_3,*(undefined4 *)((longlong)param_1 + 0x2c44),(int)param_1[0x589]);
  (**(code **)(*param_1 + 0x898))
            (param_1,param_3,*(undefined4 *)((longlong)param_1 + 0x2c4c),(int)param_1[0x58a]);
                    /* WARNING: Could not recover jumptable at 0x0001426e8e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x890))
            (param_1,param_3,*(undefined4 *)((longlong)param_1 + 0x2c54),(int)param_1[0x58b]);
  return;
}



// FUNCTION 1426e8e60 FUN_1426e8e60 body=606 status=ok
// SIG undefined FUN_1426e8e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426e8e60(longlong *param_1,byte param_2,char param_3,char param_4,longlong param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  PxPvdTransport *pPVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  byte bVar10;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  byte local_198 [16];
  undefined1 local_188 [128];
  longlong local_108;
  char *local_100;
  undefined1 local_e8 [128];
  longlong local_68;
  char *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (((param_2 == 0) && (param_3 == '\0')) && (param_4 == '\0')) {
    lVar5 = *param_1;
    goto LAB_1426e9095;
  }
  puVar6 = &DAT_143f3eda8;
  bVar1 = param_2 | 4;
  if (param_3 == '\0') {
    bVar1 = param_2;
  }
  bVar10 = bVar1 | 2;
  if (param_4 == '\0') {
    bVar10 = bVar1;
  }
  if (param_5 != 0) {
    if ((int)param_1[1] == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_1;
    }
    FOutputDevice::LogfImpl(param_5,L"Host: %s",puVar7);
    local_1a8 = L"false";
    if (param_4 != '\0') {
      local_1a8 = L"true";
    }
    pwVar9 = L"false";
    if (param_3 != '\0') {
      pwVar9 = L"true";
    }
    pwVar8 = L"false";
    if (param_2 != 0) {
      pwVar8 = L"true";
    }
    FOutputDevice::LogfImpl(param_5,L"Visualization/Memory/Profile Enabled: %s/%s/%s",pwVar8,pwVar9)
    ;
  }
  local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,0xffffffff);
  iVar3 = FUN_141592950(param_1,L".pvd",1);
  if (iVar3 == -1) {
    local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,0xffffffff);
    iVar3 = FUN_141592950(param_1,L".pxd2",1,0);
    if (iVar3 != -1) goto LAB_1426e8fdb;
    if ((int)param_1[1] != 0) {
      puVar6 = (undefined2 *)*param_1;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_188,puVar6);
    pPVar4 = physx::PxDefaultPvdSocketTransportCreate(local_100,0x1531,100);
  }
  else {
LAB_1426e8fdb:
    if ((int)param_1[1] != 0) {
      puVar6 = (undefined2 *)*param_1;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar6);
    pPVar4 = physx::PxDefaultPvdFileTransportCreate(local_60);
    local_108 = local_68;
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  (**(code **)(*DAT_146b08458 + 0x20))();
  if (pPVar4 == (PxPvdTransport *)0x0) {
LAB_1426e9067:
    pwVar9 = L"Unable to connect to PVD.";
    if (param_5 == 0) goto LAB_1426e9073;
  }
  else {
    local_198[0] = bVar10;
    cVar2 = (**(code **)(*DAT_146b08458 + 0x18))(DAT_146b08458,pPVar4,local_198);
    if (cVar2 == '\0') goto LAB_1426e9067;
    cVar2 = (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4);
    if (cVar2 == '\0') goto LAB_1426e9067;
    cVar2 = (**(code **)(*DAT_146b08458 + 0x28))(DAT_146b08458,1);
    if (cVar2 == '\0') goto LAB_1426e9067;
LAB_1426e9073:
    pwVar9 = L"Connected to PVD.";
  }
  FOutputDevice::LogfImpl(param_5,pwVar9);
  lVar5 = *param_1;
LAB_1426e9095:
  if (lVar5 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426e90c0 FUN_1426e90c0 body=520 status=ok
// SIG undefined FUN_1426e90c0(void)

void FUN_1426e90c0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  short *psVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar9;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar9 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_1426e91ff;
        uVar9 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_1426e91ff:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        psVar3 = (short *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar9 = (int)*plVar2 - 1U & (int)*psVar3;
        *(uint *)(psVar3 + 10) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(psVar3 + 8) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1426e92d0 FUN_1426e92d0 body=640 status=ok
// SIG undefined FUN_1426e92d0(void)

void FUN_1426e92d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_1426e940f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_1426e940f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0xe0 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0xd4) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0x1a) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}


