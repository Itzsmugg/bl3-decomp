// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142830940 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FAsyncTask<TextureInstanceTask::FDoWorkTask>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FAsyncTask<TextureInstanceTask::FDoWorkTask>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142830980 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<FAsyncAudioDecompressWorker>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451c0728;
  FUN_1415b5910(param_1[4]);
  param_1[4] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1428309e0 FUN_1428309e0 body=112 status=ok
// SIG undefined FUN_1428309e0(void)

undefined8 * FUN_1428309e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1[5] != 0) {
    FMemory::Free();
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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142830a50 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__1451c05d0;
  FUN_14282c9e0(this + 0x10);
  *(undefined ***)this = &PTR_FUN_1440104c8;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x40);
  }
  return this;
}



// FUNCTION 142830aa0 FUN_142830aa0 body=93 status=ok
// SIG undefined FUN_142830aa0(void)

undefined8 * FUN_142830aa0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_1451c05e0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142830b00 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TextureInstanceTask::TDoWorkTask<TextureInstanceTask::FRefreshFull>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451c05c8;
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142830b80 FUN_142830b80 body=112 status=ok
// SIG undefined FUN_142830b80(void)

undefined8 * FUN_142830b80(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_1451c05d8;
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142830bf0 FUN_142830bf0 body=97 status=ok
// SIG undefined FUN_142830bf0(void)

undefined8 * FUN_142830bf0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451c0600;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142830c60 FUN_142830c60 body=97 status=ok
// SIG undefined FUN_142830c60(void)

undefined8 * FUN_142830c60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451c0740;
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



// FUNCTION 142830cd0 `scalar_deleting_destructor' body=63 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong TextureInstanceTask::FDoWorkAsyncTask::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_1440104c8;
  FAsyncTask<TextureInstanceTask::FDoWorkTask>::~FAsyncTask<TextureInstanceTask::FDoWorkTask>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142830d10 FUN_142830d10 body=52 status=ok
// SIG undefined FUN_142830d10(void)

undefined8 FUN_142830d10(undefined8 param_1,ulonglong param_2)

{
  FUN_14282ca50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142830d50 `scalar_deleting_destructor' body=111 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FStaticTextureInstanceManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451c0428;
  FUN_1428441f0(param_1 + 2);
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FTextureInstanceStateTaskSync<FStaticTextureInstanceManager::FTasks>::
  ~FTextureInstanceStateTaskSync<FStaticTextureInstanceManager::FTasks>(param_1 + 1);
  *param_1 = &PTR_FUN_143f74a00;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142830dc0 `scalar_deleting_destructor' body=74 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FStreamableDelegateDelayHelper::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  TArray<FReactorTargetDataSet,TSizedDefaultAllocator<32>_>::
  ~TArray<FReactorTargetDataSet,TSizedDefaultAllocator<32>_>(param_1 + 8);
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142830e10 FUN_142830e10 body=183 status=ok
// SIG undefined FUN_142830e10(void)

longlong FUN_142830e10(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x80);
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x70);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x18);
  plVar3 = *(longlong **)(param_1 + 8);
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
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142830ed0 FUN_142830ed0 body=52 status=ok
// SIG undefined FUN_142830ed0(void)

undefined8 FUN_142830ed0(undefined8 param_1,ulonglong param_2)

{
  FUN_14282cc40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142830f10 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::FPBDRigidsEvolutionGBF::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14282ced0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9c0);
  }
  return param_1;
}



// FUNCTION 142830f50 FUN_142830f50 body=52 status=ok
// SIG undefined FUN_142830f50(void)

undefined8 FUN_142830f50(undefined8 param_1,ulonglong param_2)

{
  FUN_14282d110();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 142830f90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ADungeonDebug::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14282d180();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 142830fd0 FUN_142830fd0 body=52 status=ok
// SIG undefined FUN_142830fd0(void)

undefined8 FUN_142830fd0(undefined8 param_1,ulonglong param_2)

{
  FUN_14282d2c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142831010 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FPathTracingRG::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451c0750;
  FUN_14282d2c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 142831050 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FShaderCompilerEnvironment::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14282d390();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 142831090 FUN_142831090 body=52 status=ok
// SIG undefined FUN_142831090(void)

undefined8 FUN_142831090(undefined8 param_1,ulonglong param_2)

{
  FUN_14282d2c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1428310d0 `scalar_deleting_destructor' body=173 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FTextureInstanceState::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  FTextureInstanceView::~FTextureInstanceView(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 142831180 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FTextureInstanceView::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FTextureInstanceView();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1428311c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FExec::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FExec();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142831200 FUN_142831200 body=55 status=ok
// SIG undefined FUN_142831200(void)

void FUN_142831200(longlong param_1)

{
  FUN_142837a30(param_1 + 8);
  LOCK();
  *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014283122d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142831240 FUN_142831240 body=41 status=ok
// SIG undefined FUN_142831240(void)

void FUN_142831240(longlong param_1)

{
  FUN_1428378b0();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014283125f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142831270 FUN_142831270 body=41 status=ok
// SIG undefined FUN_142831270(void)

void FUN_142831270(longlong param_1)

{
  FUN_1428379a0();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014283128f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1428312a0 Abandon body=49 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<TextureInstanceTask::FDoWorkTask>::Abandon(longlong param_1)

{
  TextureInstanceTask::FDoWorkTask::DoWork(param_1 + 8);
  LOCK();
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428312c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1428312e0 FUN_1428312e0 body=71 status=ok
// SIG undefined FUN_1428312e0(void)

void FUN_1428312e0(longlong param_1)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
            (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),2);
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x1c);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014283131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142831330 FUN_142831330 body=287 status=ok
// SIG undefined FUN_142831330(void)

void FUN_142831330(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_res8;
  
  cVar3 = (**(code **)(*param_1 + 8))();
  if ((cVar3 != '\0') || (*(undefined1 *)(param_1 + 5) = 1, param_1[0x5b] == 0)) {
    return;
  }
  LOCK();
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  UNLOCK();
  plVar6 = param_1 + 0x3a;
  if (*plVar6 != 0) {
    FUN_142838870(*plVar6,1);
  }
  plVar4 = (longlong *)operator_new(0x28);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    *plVar4 = (longlong)&PTR_FUN_1451c0710;
    plVar4[1] = (longlong)param_1;
    *(undefined4 *)(plVar4 + 2) = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
  }
  if (plVar6 == &local_res8) {
    if (plVar4 == (longlong *)0x0) goto LAB_1428313e0;
    lVar5 = *plVar4;
  }
  else {
    plVar1 = (longlong *)*plVar6;
    *plVar6 = (longlong)plVar4;
    if (plVar1 == (longlong *)0x0) goto LAB_1428313e0;
    lVar5 = *plVar1;
    plVar4 = plVar1;
  }
  (**(code **)(lVar5 + 0x10))(plVar4,1);
LAB_1428313e0:
  lVar2 = DAT_1468b5010;
  lVar5 = *plVar6;
  LOCK();
  *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  UNLOCK();
  plVar6 = *(longlong **)(lVar5 + 0x18);
  *(longlong *)(lVar5 + 0x20) = lVar2;
  if (lVar2 != 0) {
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_1415ab270(1);
      *(longlong **)(lVar5 + 0x18) = plVar6;
    }
    (**(code **)(*plVar6 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00014283142b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x10))(*(longlong **)(lVar5 + 0x20),lVar5);
    return;
  }
  FUN_1415b5910();
  *(undefined8 *)(lVar5 + 0x18) = 0;
  FUN_1428378b0(lVar5);
  return;
}



// FUNCTION 142831450 FUN_142831450 body=287 status=ok
// SIG undefined FUN_142831450(void)

void FUN_142831450(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_res8;
  
  cVar3 = (**(code **)(*param_1 + 8))();
  if ((cVar3 != '\0') || (*(undefined1 *)(param_1 + 5) = 1, param_1[0x3f] == 0)) {
    return;
  }
  LOCK();
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  UNLOCK();
  plVar6 = param_1 + 0x2c;
  if (*plVar6 != 0) {
    FUN_142838900(*plVar6,1);
  }
  plVar4 = (longlong *)operator_new(0x28);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    *plVar4 = (longlong)&PTR_FUN_1451c07d0;
    plVar4[1] = (longlong)param_1;
    *(undefined4 *)(plVar4 + 2) = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
  }
  if (plVar6 == &local_res8) {
    if (plVar4 == (longlong *)0x0) goto LAB_142831500;
    lVar5 = *plVar4;
  }
  else {
    plVar1 = (longlong *)*plVar6;
    *plVar6 = (longlong)plVar4;
    if (plVar1 == (longlong *)0x0) goto LAB_142831500;
    lVar5 = *plVar1;
    plVar4 = plVar1;
  }
  (**(code **)(lVar5 + 0x10))(plVar4,1);
LAB_142831500:
  lVar2 = DAT_1468b5010;
  lVar5 = *plVar6;
  LOCK();
  *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  UNLOCK();
  plVar6 = *(longlong **)(lVar5 + 0x18);
  *(longlong *)(lVar5 + 0x20) = lVar2;
  if (lVar2 != 0) {
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_1415ab270(1);
      *(longlong **)(lVar5 + 0x18) = plVar6;
    }
    (**(code **)(*plVar6 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00014283154b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x10))(*(longlong **)(lVar5 + 0x20),lVar5);
    return;
  }
  FUN_1415b5910();
  *(undefined8 *)(lVar5 + 0x18) = 0;
  FUN_1428379a0(lVar5);
  return;
}



// FUNCTION 142831570 FUN_142831570 body=214 status=ok
// SIG undefined FUN_142831570(void)

undefined8 FUN_142831570(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined7 uStack_17;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar7 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) && ((*(uint *)(param_2 + 8) & 0x18000) == 0)) {
      bVar1 = *(byte *)(param_2 + 0x2ee);
      *(byte *)(param_2 + 0x2ee) = bVar1 | 0x10;
      if ((bVar1 & 0x20) == 0) {
        *(byte *)(param_2 + 0x2ee) = bVar1 | 0x30;
        puVar6 = (undefined8 *)operator_new(0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = CONCAT71(uStack_17,1);
          puVar6[2] = param_2;
          puVar3 = *(undefined8 **)(param_1 + 0x50);
          *(undefined8 **)(param_1 + 0x50) = puVar6;
          *puVar3 = puVar6;
        }
        *(byte *)(param_2 + 0x2ee) = *(byte *)(param_2 + 0x2ee) | 8;
      }
      return 2;
    }
  }
  return 0;
}



// FUNCTION 142831650 FUN_142831650 body=91 status=ok
// SIG undefined FUN_142831650(void)

undefined1 FUN_142831650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_1428441f0(param_1 + 0x10);
    uVar1 = FUN_142831aa0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1428316b0 AddBounds body=1006 status=ok
// SIG undefined AddBounds(void)

int FTextureInstanceState::AddBounds
              (longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,undefined4 *param_6,float param_7,float param_8,float param_9)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = -1;
  while (((iVar13 < 0 || (*(int *)(param_1 + 0xe0) <= iVar13)) && (0 < *(int *)(param_1 + 0xf0)))) {
    iVar13 = *(int *)(*(longlong *)(param_1 + 0xe8) + -4 + (longlong)*(int *)(param_1 + 0xf0) * 4);
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  }
  if ((iVar13 < 0) || (*(int *)(param_1 + 0xe0) <= iVar13)) {
    iVar6 = *(int *)(param_1 + 0x18);
    iVar13 = *(int *)(param_1 + 0x18) * 4;
    *(int *)(param_1 + 0x18) = iVar6 + 1;
    if (*(int *)(param_1 + 0x1c) < iVar6 + 1) {
      TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar6);
    }
    plVar1 = (longlong *)(param_1 + 0xd8);
    puVar11 = (undefined8 *)((longlong)iVar6 * 0xf0 + *(longlong *)(param_1 + 0x10));
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    puVar11[0x16] = 0;
    puVar11[0x17] = 0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    *(undefined4 *)(puVar11 + 0x1a) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar11 + 0xd4) = 0x7f7fffff;
    *(undefined4 *)(puVar11 + 0x1b) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar11 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar11 + 0x1c) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar11 + 0xe4) = 0xff7fffff;
    *(undefined4 *)(puVar11 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar11 + 0xec) = 0xff7fffff;
    iVar6 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar6 * 8) = 0;
    iVar6 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar6 * 8) = 0;
    iVar6 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar6 * 8) = 0;
    iVar6 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    plVar2 = (longlong *)(param_1 + 0xe8);
    *(undefined8 *)(*plVar1 + (longlong)iVar6 * 8) = 0;
    iVar6 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0xf0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar6 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
    }
    *(int *)(*plVar2 + (longlong)iVar6 * 4) = iVar13 + 3;
    iVar6 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0xf0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar6 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
    }
    *(int *)(*plVar2 + (longlong)iVar6 * 4) = iVar13 + 2;
    iVar6 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0xf0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar6 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
    }
    *(int *)(*plVar2 + (longlong)iVar6 * 4) = iVar13 + 1;
  }
  uVar3 = *param_6;
  uVar4 = param_6[1];
  uVar5 = param_6[2];
  uVar10 = iVar13 >> 0x1f & 3;
  uVar8 = iVar13 + uVar10;
  lVar9 = (longlong)(int)((uVar8 & 3) - uVar10);
  lVar12 = (longlong)((int)uVar8 >> 2) * 0xf0 + *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(lVar12 + lVar9 * 4) = *param_2;
  *(undefined4 *)(lVar12 + 0x10 + lVar9 * 4) = param_2[1];
  uVar7 = param_2[2];
  *(undefined4 *)(lVar12 + 0x30 + lVar9 * 4) = uVar3;
  *(undefined4 *)(lVar12 + 0x40 + lVar9 * 4) = uVar4;
  *(undefined4 *)(lVar12 + 0x50 + lVar9 * 4) = uVar5;
  *(undefined4 *)(lVar12 + 0x20 + lVar9 * 4) = uVar7;
  *(undefined4 *)(lVar12 + 0x60 + lVar9 * 4) = param_2[3];
  *(undefined4 *)(lVar12 + 0x70 + lVar9 * 4) = param_2[4];
  *(undefined4 *)(lVar12 + 0x80 + lVar9 * 4) = param_2[5];
  uVar3 = param_2[6];
  *(undefined4 *)(lVar12 + 0xa0 + lVar9 * 4) = param_3;
  *(float *)(lVar12 + 0xb0 + lVar9 * 4) = param_7 * param_7;
  *(undefined4 *)(lVar12 + 0x90 + lVar9 * 4) = uVar3;
  *(float *)(lVar12 + 0xc0 + lVar9 * 4) = param_8 * param_8;
  if (param_9 == 3.4028235e+38) {
    param_9 = 3.4028235e+38;
  }
  else {
    param_9 = param_9 * param_9;
  }
  *(float *)(lVar12 + 0xd0 + lVar9 * 4) = param_9;
  *(undefined4 *)(lVar12 + 0xe0 + lVar9 * 4) = param_5;
  *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar13 * 8) = param_4;
  return iVar13;
}



// FUNCTION 142831aa0 FUN_142831aa0 body=1269 status=ok
// SIG undefined FUN_142831aa0(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_142831aa0(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 local_d8 [8];
  ulonglong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4 [3];
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_88 [4];
  undefined4 local_68;
  
  uVar9 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14238d9b0(param_2,param_3,&local_c8);
  lVar10 = (longlong)(int)local_c0;
  if ((int)local_c0 == 0) {
LAB_142831b10:
    uVar8 = 0;
  }
  else {
    if (0.0 < param_4) {
      for (lVar5 = local_c8; lVar5 != lVar10 * 0x30 + local_c8; lVar5 = lVar5 + 0x30) {
        if (param_4 < *(float *)(lVar5 + 0x24)) {
          uVar8 = 1;
          goto LAB_142831f3b;
        }
      }
    }
    if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
      for (lVar5 = local_c8; lVar5 != lVar10 * 0x30 + local_c8; lVar5 = lVar5 + 0x30) {
        if (*(int *)(lVar5 + 0x28) == 0) goto LAB_142831b10;
      }
      local_d8[0] = 0;
      AlgoImpl::
      IntroSortInternal<FStreamingTexturePrimitiveInfo,FIdentityFunctor,TDereferenceWrapper<FStreamingTexturePrimitiveInfo,<lambda_b1e059310a2d34728f298c652144ef15>_>_>
                (local_c8,lVar10,0,local_d8);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x118),&local_d0,param_2);
      uVar11 = uVar9;
      if ((int)local_d0 != -1) {
        uVar11 = *(longlong *)(param_1 + 0x118) + (longlong)(int)local_d0 * 0x18;
      }
      local_d0 = uVar11 + 8;
      if (uVar11 == 0) {
        local_d0 = uVar9;
      }
      if (0 < (int)local_c0) {
        local_98 = 0;
        uStack_90 = 0x3f80000000000000;
        uVar11 = uVar9;
        do {
          iVar1 = (int)uVar11;
          iVar4 = iVar1 + 1;
          lVar5 = uVar9 * 0x30 + local_c8;
          iVar7 = 1;
          lVar10 = 1;
          if (iVar4 < (int)local_c0) {
            piVar6 = (int *)(local_c8 + 0x28 + (uVar9 + 1) * 0x30);
            do {
              if (*piVar6 != *(int *)(lVar5 + 0x28)) break;
              iVar7 = iVar7 + 1;
              lVar10 = lVar10 + 1;
              iVar4 = iVar4 + 1;
              piVar6 = piVar6 + 0xc;
            } while (iVar4 < (int)local_c0);
          }
          local_88[1] = 0;
          local_88[2] = 0;
          local_88[3] = 0;
          local_68 = 0;
          uVar2 = FTextureInstanceState::AddBounds
                            (param_1,local_88 + 1,*(undefined4 *)(lVar5 + 0x28),param_2,
                             *(undefined4 *)(param_2 + 0x370),&local_98,0,0,0x7f7fffff);
          local_a8 = (longlong)iVar1 * 0x30 + local_c8;
          local_a0 = iVar7;
          FUN_142832830(param_1,param_2,&local_a8,uVar2,&local_d0);
          iVar4 = *(int *)(param_1 + 0x110);
          *(int *)(param_1 + 0x110) = iVar4 + 1;
          if (*(int *)(param_1 + 0x114) < iVar4 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x108),iVar4);
          }
          uVar11 = (ulonglong)(uint)(iVar1 + iVar7);
          uVar9 = uVar9 + lVar10;
          *(undefined4 *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar4 * 4) = uVar2;
        } while (iVar1 + iVar7 < (int)local_c0);
      }
    }
    else {
      local_d8[0] = 0;
      AlgoImpl::
      IntroSortInternal<FStreamingTexturePrimitiveInfo,FIdentityFunctor,TDereferenceWrapper<FStreamingTexturePrimitiveInfo,<lambda_cd9e3e08255364e40340ae31e86fd32a>_>_>
                (local_c8,lVar10,0,local_d8);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x118),&local_d0,param_2);
      uVar11 = uVar9;
      if ((int)local_d0 != -1) {
        uVar11 = *(longlong *)(param_1 + 0x118) + (longlong)(int)local_d0 * 0x18;
      }
      local_b8 = 0x7f7fffff;
      local_88[0] = uVar11 + 8;
      if (uVar11 == 0) {
        local_88[0] = uVar9;
      }
      local_d0 = local_d0 & 0xffffffff00000000;
      local_b4[0] = 0;
      if (0 < (int)local_c0) {
        local_9c = 0x3f800000;
        uVar11 = uVar9;
        do {
          lVar10 = uVar11 * 0x30;
          iVar1 = (int)uVar9;
          iVar7 = iVar1 + 1;
          iVar4 = 1;
          lVar5 = 1;
          if (iVar7 < (int)local_c0) {
            pfVar3 = (float *)(local_c8 + 0x4c + lVar10);
            do {
              if ((((*(float *)(lVar10 + 8 + local_c8) != pfVar3[-5]) ||
                   (*(float *)(lVar10 + 0xc + local_c8) != pfVar3[-4])) ||
                  (*(float *)(lVar10 + 0x10 + local_c8) != pfVar3[-3])) ||
                 (((*(float *)(lVar10 + 0x14 + local_c8) != pfVar3[-2] ||
                   (*(float *)(lVar10 + 0x18 + local_c8) != pfVar3[-1])) ||
                  ((*(float *)(lVar10 + 0x1c + local_c8) != *pfVar3 ||
                   (*(float *)(lVar10 + 0x20 + local_c8) != pfVar3[1])))))) break;
              iVar4 = iVar4 + 1;
              lVar5 = lVar5 + 1;
              pfVar3 = pfVar3 + 0xc;
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)local_c0);
          }
          lVar10 = local_c8 + 8 + lVar10;
          FUN_14283a150(param_2,lVar10,&local_d0,local_b4,&local_b8);
          local_a8 = *(longlong *)(param_2 + 0x1d0);
          local_a0 = *(int *)(param_2 + 0x1d8);
          uVar2 = FTextureInstanceState::AddBounds
                            (param_1,lVar10,0xffff0000,param_2,*(undefined4 *)(param_2 + 0x370),
                             &local_a8,(int)local_d0,local_b4[0],local_b8);
          uStack_90 = CONCAT44(uStack_90._4_4_,iVar4);
          local_98 = (longlong)iVar1 * 0x30 + local_c8;
          FUN_142832830(param_1,param_2,&local_98,uVar2,local_88);
          uVar9 = (ulonglong)(uint)(iVar1 + iVar4);
          uVar11 = uVar11 + lVar5;
        } while (iVar1 + iVar4 < (int)local_c0);
      }
    }
    uVar8 = 2;
  }
LAB_142831f3b:
  if (local_c8 != 0) {
    FMemory::Free(local_c8);
  }
  return uVar8;
}



// FUNCTION 142831fa0 AddElement body=735 status=ok
// SIG undefined AddElement(void)

void FTextureInstanceState::AddElement
               (longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               float param_5,int param_6,longlong *param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  float fVar12;
  int local_res8;
  uint local_resc;
  undefined8 local_res10;
  longlong local_res18 [2];
  undefined8 local_98;
  int *local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  fVar6 = param_5;
  fVar12 = param_5;
  if (param_5 <= *(float *)(param_1 + 0xd0)) {
    fVar12 = *(float *)(param_1 + 0xd0);
  }
  *(float *)(param_1 + 0xd0) = fVar12;
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (*(int *)(param_1 + 0x100) == 0) {
    param_5 = *(float *)(param_1 + 0x28);
    lVar10 = (longlong)(int)param_5;
    uStack_74 = 0;
    local_78 = 0xffffffff;
    uStack_6c = 0xffffffff;
    uStack_68 = 0xffffffff;
    uStack_64 = 0xffffffff;
    *(int *)(param_1 + 0x28) = (int)param_5 + 1;
    if (*(int *)(param_1 + 0x2c) < (int)param_5 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,param_5);
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar10 * 0x28);
    *puVar3 = local_78;
    puVar3[1] = uStack_74;
    puVar3[2] = uStack_70;
    puVar3[3] = uStack_6c;
    *(ulonglong *)(lVar5 + 0x20 + lVar10 * 0x28) = CONCAT44(uStack_64,uStack_68);
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xf8) + -4 + (longlong)*(int *)(param_1 + 0x100) * 4);
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
    param_5 = (float)iVar4;
  }
  lVar5 = local_res18[0];
  lVar10 = *(longlong *)(param_1 + 0x20);
  lVar8 = (longlong)(int)param_5;
  *(undefined8 *)(lVar10 + lVar8 * 0x28) = local_res10;
  plVar2 = (longlong *)(lVar10 + 8 + lVar8 * 0x28);
  *plVar2 = local_res18[0];
  *(undefined1 *)(lVar10 + 0x18 + lVar8 * 0x28) = (undefined1)param_6;
  *(float *)(lVar10 + 0x14 + lVar8 * 0x28) = fVar6;
  *(undefined4 *)(lVar10 + 0x10 + lVar8 * 0x28) = param_4;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x30,&param_6);
  piVar9 = (int *)0x0;
  if (param_6 != -1) {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x30) + (longlong)param_6 * 0x18);
  }
  piVar11 = piVar9 + 2;
  if (piVar9 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  if (piVar11 == (int *)0x0) {
    local_res8 = (int)param_5;
    local_98 = local_res18;
    local_resc = (uint)*(byte *)(lVar5 + 0x4a);
    local_90 = &local_res8;
    TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
              (param_1 + 0x30,&param_6,&local_98,0);
  }
  else {
    iVar4 = *piVar11;
    lVar5 = *(longlong *)(param_1 + 0x20);
    *(int *)(lVar10 + 0x20 + lVar8 * 0x28) = iVar4;
    *(float *)(lVar5 + 0x1c + (longlong)iVar4 * 0x28) = param_5;
    *piVar11 = (int)param_5;
  }
  plVar7 = param_7;
  if ((undefined4 *)*param_7 == (undefined4 *)0x0) {
    local_98 = &local_res10;
    local_90 = (int *)&param_5;
    FUN_1409bf4b0(param_1 + 0x118,&param_6,&local_98,0);
    *plVar7 = *(longlong *)(param_1 + 0x118) + ((longlong)param_6 * 3 + 1) * 8;
  }
  else {
    *(undefined4 *)(lVar10 + 0x24 + lVar8 * 0x28) = *(undefined4 *)*param_7;
    *(float *)*param_7 = param_5;
  }
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    local_90 = (int *)CONCAT71(local_90._1_7_,*(undefined1 *)(lVar10 + 0x18 + lVar8 * 0x28));
    local_98 = (longlong *)
               CONCAT44(*(undefined4 *)(lVar10 + 0x14 + lVar8 * 0x28),
                        *(undefined4 *)(lVar10 + 0x10 + lVar8 * 0x28));
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x80,&param_6,*plVar2);
    if ((param_6 == -1) ||
       (lVar10 = (longlong)param_6 * 0x20 + *(longlong *)(param_1 + 0x80), lVar10 == 0)) {
      param_7 = plVar2;
      FUN_14209ad40(param_1 + 0x80,&param_6,&param_7,0);
      lVar10 = (longlong)param_6 * 0x20 + *(longlong *)(param_1 + 0x80);
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x10) = iVar4 + 1;
    if (*(int *)(lVar10 + 0x14) < iVar4 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow((longlong *)(lVar10 + 8),iVar4);
    }
    lVar10 = *(longlong *)(lVar10 + 8);
    *(longlong **)(lVar10 + (longlong)iVar4 * 0xc) = local_98;
    *(undefined4 *)(lVar10 + 8 + (longlong)iVar4 * 0xc) = local_90._0_4_;
  }
  return;
}



// FUNCTION 142832280 FUN_142832280 body=506 status=ok
// SIG undefined FUN_142832280(void)

void FUN_142832280(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  BOOL BVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  bool bVar11;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x970);
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar1 = (longlong *)(param_1 + 0x748);
  puVar9 = (undefined8 *)*plVar1;
  puVar3 = puVar9 + *(int *)(param_1 + 0x750);
  for (; puVar9 != puVar3; puVar9 = puVar9 + 1) {
    if (*(longlong *)*puVar9 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x000142832355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar5 = *(longlong *)(param_1 + 0x6a0);
  plVar6 = *(longlong **)(lVar5 + 0x58);
  if (plVar6 == (longlong *)0x0) {
    LOCK();
    bVar11 = *(int *)(lVar5 + 0x48) == 0;
    if (bVar11) {
      *(int *)(lVar5 + 0x48) = 0;
    }
    UNLOCK();
    if (!bVar11) {
      TextureInstanceTask::FDoWorkTask::DoWork(lVar5 + 8);
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + -1;
      UNLOCK();
    }
code_r0x000142832375:
    if (*(longlong *)(lVar5 + 0x58) == 0) goto LAB_142832391;
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0xffffffff,0);
  }
  else {
    cVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar5);
    if (cVar7 == '\0') goto code_r0x000142832375;
    TextureInstanceTask::FDoWorkTask::DoWork(lVar5 + 8);
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + -1;
    UNLOCK();
    if (*(longlong **)(lVar5 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x10))();
    }
  }
  *(undefined8 *)(lVar5 + 0x58) = 0;
LAB_142832391:
  uVar10 = FMemory::Malloc(0xb8,0);
  iVar4 = *(int *)(param_1 + 0x750);
  *(int *)(param_1 + 0x750) = iVar4 + 1;
  if (*(int *)(param_1 + 0x754) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar4 * 8) = uVar10;
  plVar1 = *(longlong **)(*plVar1 + (longlong)iVar4 * 8);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = *(longlong *)(param_1 + 0x6a0);
    *plVar1 = param_2;
    *(undefined1 *)(plVar1 + 1) = 0;
    FUN_14282a5a0(plVar1 + 2,lVar5 + 8);
    *(undefined1 *)(plVar1 + 8) = 0;
    plVar1[9] = 0;
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[0xc] = 0;
    plVar1[0xd] = 0;
    plVar1[0xe] = 0;
    plVar1[0x11] = 0;
    plVar1[0x12] = 0;
    *(undefined4 *)(plVar1 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)plVar1 + 0x9c) = 0;
    plVar1[0x15] = 0;
    *(undefined4 *)(plVar1 + 0x16) = 0;
    if (*plVar1 != 0) {
      pbVar2 = (byte *)(*plVar1 + 0x204);
      *pbVar2 = *pbVar2 & 0xf7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142832473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142832480 AddReferencedObjects body=738 status=ok
// SIG undefined AddReferencedObjects(void)

void FStreamableManager::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
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
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  uVar7 = 0;
  local_88 = 0;
  uStack_84 = 1;
  iVar1 = *(int *)(param_1 + 0x38);
  puStack_38 = (uint *)(param_1 + 0x20);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar9 = puStack_38;
    }
    uVar8 = *puVar9;
    local_88 = uVar7;
    uStack_70 = uVar7;
    while (uVar8 == 0) {
      lVar5 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      uVar8 = local_88 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88 = uVar8;
      if (bVar3) goto LAB_14283254a;
      uVar8 = puVar9[lVar5 + 1];
    }
    uStack_84 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_14283254a:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._4_4_ = iStack_6c;
  local_68._0_4_ = uStack_70;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  bVar3 = local_78._4_4_ < iVar1;
  local_48 = (longlong *)(param_1 + 0x10);
  local_78 = puStack_38;
  if (bVar3) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18 + (longlong)iStack_6c * 0x28);
      if (*plVar2 != 0) {
        (**(code **)(*param_2 + 0x38))(param_2,plVar2,0,0);
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  plVar2 = (longlong *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x88);
  puStack_38 = (uint *)(param_1 + 0x70);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar9 = puStack_38;
    }
    uVar8 = *puVar9;
    uStack_70 = uVar7;
    local_88 = uVar7;
    while (uVar8 == 0) {
      lVar5 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      uVar7 = local_88 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88 = uVar7;
      if (bVar3) goto LAB_142832676;
      uVar8 = puVar9[lVar5 + 1];
    }
    uStack_84 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_142832676:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar2,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x88);
  local_58 = plVar2;
  local_48 = plVar2;
  local_20 = plVar2;
  local_78 = puStack_38;
  if (bVar3) {
    do {
      plVar6 = (longlong *)((longlong)iStack_6c * 0x40 + *plVar2 + 0x30);
      if (*plVar6 != 0) {
        (**(code **)(*param_2 + 0x38))(param_2,plVar6,0,0);
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 142832770 FUN_142832770 body=188 status=ok
// SIG undefined FUN_142832770(void)

void FUN_142832770(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  local_res10 = param_2;
  puVar3 = (undefined8 *)operator_new(0x18);
  bVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uStack_10 = (undefined4)param_2;
    uStack_c = (undefined4)((ulonglong)param_2 >> 0x20);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = local_18;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_14;
    *(undefined4 *)(puVar3 + 2) = uStack_10;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_c;
    puVar1 = *(undefined8 **)(param_1 + 0x960);
    *(undefined8 **)(param_1 + 0x960) = puVar3;
    *puVar1 = puVar3;
  }
  if (*(char *)(param_1 + 0x78c) == '\0') {
    bVar4 = 4;
  }
  *(byte *)(local_res10 + 0xc4) = *(byte *)(local_res10 + 0xc4) & 0xfb;
  *(byte *)(local_res10 + 0xc4) = *(byte *)(local_res10 + 0xc4) | bVar4;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
  }
  FUN_1417a2a90(param_1 + 0x20,local_res8,&local_res10,0);
                    /* WARNING: Could not recover jumptable at 0x000142832825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
  return;
}



// FUNCTION 142832830 FUN_142832830 body=343 status=ok
// SIG undefined FUN_142832830(void)

void FUN_142832830(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  iVar4 = (int)param_3[1];
  iVar8 = 0;
  if (0 < iVar4) {
    lVar11 = 0;
    do {
      lVar3 = *param_3;
      iVar1 = iVar8 + 1;
      plVar10 = (longlong *)(lVar11 * 0x30 + lVar3);
      iVar7 = 1;
      lVar9 = 1;
      fVar12 = *(float *)((longlong)plVar10 + 0x24);
      if (fVar12 < 0.0) {
        if (iVar1 < iVar4) {
          lVar6 = (longlong)iVar1;
          plVar5 = (longlong *)(lVar6 * 0x30 + lVar3);
          fVar13 = fVar12;
          do {
            fVar12 = fVar13;
            if ((*plVar5 != *plVar10) || (fVar2 = *(float *)((longlong)plVar5 + 0x24), 0.0 <= fVar2)
               ) break;
            fVar12 = fVar2;
            if (fVar13 <= fVar2) {
              fVar12 = fVar13;
            }
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + 1;
            plVar5 = plVar5 + 6;
            fVar13 = fVar12;
          } while (lVar6 < iVar4);
        }
      }
      else if (iVar1 < iVar4) {
        lVar6 = (longlong)iVar1;
        plVar5 = (longlong *)(lVar6 * 0x30 + lVar3);
        fVar13 = fVar12;
        do {
          fVar12 = fVar13;
          if ((*plVar5 != *plVar10) || (fVar2 = *(float *)((longlong)plVar5 + 0x24), fVar2 < 0.0))
          break;
          fVar12 = fVar2;
          if (fVar2 <= fVar13) {
            fVar12 = fVar13;
          }
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 1;
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 6;
          fVar13 = fVar12;
        } while (lVar6 < iVar4);
      }
      FTextureInstanceState::AddElement
                (param_1,param_2,*plVar10,param_4,fVar12,*(byte *)(param_2 + 0x2f1) >> 2 & 1,param_5
                );
      iVar4 = (int)param_3[1];
      iVar8 = iVar8 + iVar7;
      lVar11 = lVar11 + lVar9;
    } while (iVar8 < iVar4);
  }
  return;
}



// FUNCTION 142832990 FUN_142832990 body=768 status=ok
// SIG undefined FUN_142832990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142832990(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 **local_100;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_142842060();
  cVar6 = (**(code **)(*param_1 + 8))(param_1);
  if ((cVar6 == '\0') && (param_2[1] != 0)) {
    lVar4 = *(longlong *)(*param_2 + 0xd8);
    iVar3 = *(int *)(param_2[1] + 0x78);
    for (lVar11 = (longlong)(int)param_1[2]; lVar11 < iVar3; lVar11 = lVar11 + 1) {
      puVar10 = *(undefined8 **)(param_2[1] + 0xf8);
      psVar5 = *(short **)(*(longlong *)(lVar4 + 0x10) + lVar11 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
      }
      iVar7 = CalcTextureMipMapSize
                        ((int)*psVar5,(int)psVar5[1],*(undefined4 *)((longlong)puVar10 + 0x3c),0);
      LOCK();
      piVar1 = (int *)(puVar10 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar10 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')
            ))) {
          LOCK();
          bVar13 = *(int *)((longlong)puVar10 + 0xc) == 0;
          if (bVar13) {
            *(int *)((longlong)puVar10 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar8 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar9 + 8) = puVar10;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
      lVar9 = FMemory::Malloc((longlong)iVar7,0);
      param_1[lVar11 + 0x1e] = lVar9;
    }
  }
  FUN_142842750(param_1,param_2);
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_143f77b70;
  }
  local_b8 = (longlong *)0x0;
  local_98[0] = &LAB_142833780;
  local_a8 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_143f77b70;
  }
  local_e8[0] = &LAB_1428337d0;
  local_100 = local_98;
  local_108 = 2;
  FUN_14283e460(param_1,param_2,2,local_e8);
  if (local_a8 != 0) {
    plVar12 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar12 = local_b8;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    plVar12 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar12 = local_68;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142832c90 FUN_142832c90 body=623 status=ok
// SIG undefined FUN_142832c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142832c90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short *psVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  code **local_110;
  int local_108;
  longlong *local_100;
  int local_f8;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  cVar3 = (**(code **)(*param_1 + 8))();
  if (((cVar3 == '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    local_e0 = *(longlong *)(param_2[1] + 0xf8);
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(*param_2 + 0xd8);
      psVar2 = *(short **)((longlong)(int)param_1[2] * 8 + *(longlong *)(lVar1 + 0x10));
      local_100 = param_1 + (longlong)(int)param_1[2] + 0x1e;
      local_f8 = (*(int *)(param_2[1] + 0x78) - *(int *)(lVar1 + 0x18)) +
                 *(int *)((longlong)param_1 + 0x14);
      local_108 = (*(byte *)(*param_2 + 0x4b) & 1 | 0x60) << 4;
      local_110 = (code **)CONCAT44(local_110._4_4_,*(int *)((longlong)param_1 + 0x14));
      local_118 = CONCAT31(local_118._1_3_,*(undefined1 *)(local_e0 + 0x3c));
      (**(code **)(*DAT_146ab6358 + 0x220))(DAT_146ab6358,local_e8,(int)*psVar2,(int)psVar2[1]);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_e8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_e8);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e0);
  }
  FUN_142837040(param_1,param_2);
  FUN_142834850(param_1,param_2);
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_a8 = (longlong *)0x0;
  local_88[0] = FUN_142833400;
  local_98 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_1428338c0;
  local_110 = local_88;
  local_118 = 1;
  FUN_14283e460(param_1,param_2,1,local_d8);
  if (local_98 != 0) {
    plVar5 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar5 = local_a8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    plVar5 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar5 = local_58;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142832f00 AsyncLoadCallbackWrapper body=226 status=ok
// SIG undefined AsyncLoadCallbackWrapper(void)

void FStreamableHandle::AsyncLoadCallbackWrapper(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *in_stack_00000028;
  undefined8 local_28;
  longlong local_20 [3];
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    local_28 = *in_stack_00000028;
    FString::FString(local_20,in_stack_00000028 + 1);
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    plVar2 = (longlong *)FStreamableManager::FindStreamable(uVar1,&local_28);
    if (plVar2 != (longlong *)0x0) {
      if ((char)plVar2[1] != '\0') {
        *(undefined1 *)(plVar2 + 1) = 0;
        if (*plVar2 == 0) {
          FUN_1428397d0(uVar1,&local_28,plVar2);
        }
        FUN_1428341e0(uVar1,&local_28,plVar2);
      }
      if (*plVar2 == 0) {
        *(undefined1 *)((longlong)plVar2 + 9) = 1;
      }
    }
    if (local_20[0] != 0) {
      FMemory::Free();
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_1428339a0(param_1);
    }
  }
  if (in_stack_00000028[1] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142832ff0 BindCompleteDelegate body=62 status=ok
// SIG undefined BindCompleteDelegate(void)

undefined1 FStreamableHandle::BindCompleteDelegate(longlong param_1,undefined8 param_2)

{
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0x12) == '\0')) {
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x18);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
    return 1;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return 0;
}



// FUNCTION 142833030 FUN_142833030 body=364 status=ok
// SIG undefined FUN_142833030(void)

int FUN_142833030(longlong param_1,float param_2)

{
  double dVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * DAT_1468b02f8;
  while( true ) {
    plVar5 = *(longlong **)(param_1 + 0x10);
    iVar7 = 0;
    plVar6 = plVar5 + (longlong)*(int *)(param_1 + 0x18) * 0x19;
    if (plVar5 == plVar6) {
      return 0;
    }
    do {
      if ((longlong *)*plVar5 == (longlong *)0x0) {
        *(uint *)((longlong)plVar5 + 0x54) = *(uint *)((longlong)plVar5 + 0x54) & 0xfffffffb;
        *(uint *)((longlong)plVar5 + 0x84) = *(uint *)((longlong)plVar5 + 0x84) & 0xfffffffe;
      }
      else {
        bVar3 = (**(code **)(*(longlong *)*plVar5 + 0x2e0))();
        *(uint *)((longlong)plVar5 + 0x54) = *(uint *)((longlong)plVar5 + 0x54) & 0xfffffffb;
        *(uint *)((longlong)plVar5 + 0x54) = *(uint *)((longlong)plVar5 + 0x54) | (bVar3 & 1) << 2;
        bVar3 = (**(code **)(*(longlong *)*plVar5 + 0x298))((longlong *)*plVar5,0);
        *(uint *)((longlong)plVar5 + 0x84) = *(uint *)((longlong)plVar5 + 0x84) & 0xfffffffe;
        *(uint *)((longlong)plVar5 + 0x84) = *(uint *)((longlong)plVar5 + 0x84) | bVar3 & 1;
        uVar4 = UTexture2D::GetNumResidentMips(*plVar5);
        *(undefined4 *)(plVar5 + 0xb) = uVar4;
        uVar4 = FUN_142853e40(*plVar5);
        *(undefined4 *)((longlong)plVar5 + 0x5c) = uVar4;
      }
      iVar2 = iVar7 + 1;
      if ((*(uint *)((longlong)plVar5 + 0x84) & 1) == 0) {
        iVar2 = iVar7;
      }
      iVar7 = iVar2;
      plVar5 = plVar5 + 0x19;
    } while (plVar5 != plVar6);
    if (iVar7 == 0) break;
    if ((param_2 != 0.0) &&
       (QueryPerformanceCounter(&local_res8),
       param_2 <= (float)((double)local_res8.QuadPart * DAT_1468b02f8 - dVar1))) {
      return iVar7;
    }
    FUN_141ee24f0(0);
    FUN_1416b1760(0x3c23d70a);
  }
  return 0;
}



// FUNCTION 1428331a0 FUN_1428331a0 body=563 status=ok
// SIG undefined FUN_1428331a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428331a0(longlong param_1,longlong param_2,float param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
    plVar11 = (longlong *)0x0;
    local_128 = (longlong *)0x0;
    local_120 = 0;
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_128,0x20);
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    FUN_140725150(param_2,local_118,0);
    puVar9 = local_58;
    plVar13 = plVar11;
    plVar14 = plVar11;
    if (0 < (int)local_50) {
      do {
        lVar3 = local_120;
        puVar5 = local_118;
        if (puVar9 != (undefined1 *)0x0) {
          puVar5 = puVar9;
        }
        plVar2 = *(longlong **)(puVar5 + (longlong)plVar14);
        if ((*(byte *)(plVar2 + 0x17) & 1) != 0) {
          uVar12 = local_120._4_4_;
          local_120 = (ulonglong)local_120._4_4_ << 0x20;
          if ((lVar3 < 0) && (uVar12 != 0)) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_128,0);
          }
          (**(code **)(*plVar2 + 0x6a8))(plVar2,&local_128,3);
          plVar2 = local_128 + (int)local_120;
          puVar9 = local_58;
          for (plVar10 = local_128; local_58 = puVar9, plVar10 != plVar2; plVar10 = plVar10 + 1) {
            lVar3 = *plVar10;
            if (lVar3 != 0) {
              lVar6 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                iVar1 = *(int *)(lVar3 + 0xb8);
                if ((iVar1 < 0) || (*(int *)(param_1 + 0x18) <= iVar1)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  plVar8 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10));
                  plVar7 = plVar11;
                  if (*plVar8 == lVar3) {
                    plVar7 = plVar8;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    fVar15 = *(float *)(plVar7 + 0x12);
                    if (*(float *)(plVar7 + 0x12) <= param_3) {
                      fVar15 = param_3;
                    }
                    *(float *)(plVar7 + 0x12) = fVar15;
                  }
                }
              }
            }
            puVar9 = local_58;
          }
        }
        uVar12 = (int)plVar13 + 1;
        plVar13 = (longlong *)(ulonglong)uVar12;
        plVar14 = plVar14 + 1;
      } while ((int)uVar12 < (int)local_50);
    }
    if (puVar9 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142833400 FUN_142833400 body=100 status=ok
// SIG undefined FUN_142833400(void)

void FUN_142833400(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  FUN_142837040(param_1);
  if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 == '\0') {
      FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  }
  return;
}



// FUNCTION 142833470 FUN_142833470 body=92 status=ok
// SIG undefined FUN_142833470(void)

void FUN_142833470(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 == '\0') {
      FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  }
  return;
}



// FUNCTION 142833510 FUN_142833510 body=111 status=ok
// SIG undefined FUN_142833510(void)

void FUN_142833510(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  FUN_142834850(param_1);
  FUN_142837770(param_1,param_2);
  if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 == '\0') {
      FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  }
  return;
}



// FUNCTION 142833580 FUN_142833580 body=111 status=ok
// SIG undefined FUN_142833580(void)

void FUN_142833580(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  FUN_142834710(param_1);
  FUN_1428375d0(param_1,param_2);
  if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 == '\0') {
      FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  }
  return;
}



// FUNCTION 142833620 FUN_142833620 body=72 status=ok
// SIG undefined FUN_142833620(void)

void FUN_142833620(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 142833680 FUN_142833680 body=100 status=ok
// SIG undefined FUN_142833680(void)

void FUN_142833680(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  FUN_142837770(param_1);
  if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 == '\0') {
      FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  }
  return;
}



// FUNCTION 142833700 FUN_142833700 body=100 status=ok
// SIG undefined FUN_142833700(void)

void FUN_142833700(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  FUN_1428375d0(param_1);
  if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 == '\0') {
      FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  }
  return;
}



// FUNCTION 1428337e0 FUN_1428337e0 body=100 status=ok
// SIG undefined FUN_1428337e0(void)

void FUN_1428337e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  FUN_142836f90(param_1);
  if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 == '\0') {
      FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  }
  return;
}



// FUNCTION 1428338b0 thunk_FUN_14282ec80 body=5 status=ok
// SIG undefined thunk_FUN_14282ec80(void)

void thunk_FUN_14282ec80(void)

{
  FUN_14282ec80();
  return;
}



// FUNCTION 1428339a0 FUN_1428339a0 body=400 status=ok
// SIG undefined FUN_1428339a0(void)

void FUN_1428339a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28 [16];
  
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x40) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x38);
    }
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_38);
  }
  plVar8 = (longlong *)puVar7[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x80);
  plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x88) * 2;
  do {
    if (plVar8 == plVar9) {
      return;
    }
    plVar3 = (longlong *)plVar8[1];
    lVar4 = *plVar8;
    if (plVar3 == (longlong *)0x0) {
LAB_142833aa8:
      if (plVar3 != (longlong *)0x0) {
        if (lVar4 != 0) {
          FUN_1428339a0(lVar4);
        }
        LOCK();
        plVar2 = plVar3 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar6 == (int)plVar3[1];
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar10) goto LAB_142833aa8;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    plVar8 = plVar8 + 2;
  } while( true );
}



// FUNCTION 142833b90 FUN_142833b90 body=60 status=ok
// SIG undefined FUN_142833b90(void)

undefined1 FUN_142833b90(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((((*(longlong *)(param_1 + 0x20) == 0) && (param_2 != 0)) &&
      (*(char *)(param_2 + 0x24e) == '\0')) && (*(longlong *)(param_2 + 0x118) != 0)) {
    cVar1 = FUN_142235f50();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142833bd0 FUN_142833bd0 body=143 status=ok
// SIG undefined FUN_142833bd0(void)

void FUN_142833bd0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  FUN_1428375d0();
  if (param_1[1] != 0) {
    (**(code **)(*DAT_146ab6358 + 0x708))
              (DAT_146ab6358,&DAT_146ab6e78,param_1[1],
               *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x78));
    if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
      cVar1 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar1 == '\0') {
        FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
    }
  }
  return;
}



// FUNCTION 142833c60 FUN_142833c60 body=143 status=ok
// SIG undefined FUN_142833c60(void)

void FUN_142833c60(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  FUN_142837770();
  if (param_1[1] != 0) {
    (**(code **)(*DAT_146ab6358 + 0x6f8))
              (DAT_146ab6358,&DAT_146ab6e78,param_1[1],
               *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x78));
    if ((param_1[1] != 0) && (*(longlong *)(param_2 + 8) != 0)) {
      cVar1 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar1 == '\0') {
        FUN_14285c310(*(undefined8 *)(param_2 + 8),param_1 + 1,(int)param_1[2]);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
    }
  }
  return;
}



// FUNCTION 142833cf0 FUN_142833cf0 body=234 status=ok
// SIG undefined FUN_142833cf0(void)

void FUN_142833cf0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      plVar2 = *(longlong **)(lVar3 + lVar1);
      if ((plVar2 != (longlong *)0x0) && (0.0 <= (float)((double)plVar2[0x1a] - DAT_1468b5a78))) {
        (**(code **)(*plVar2 + 0x2e8))(plVar2,0xbf800000,0);
        *(undefined8 *)(lVar3 + 0x88 + lVar1) = 0xc7efffffe0000000;
        if (*(longlong *)(*(longlong *)(lVar3 + lVar1) + 0x60) != 0) {
          UTexture2D::InvalidateLastRenderTimeForStreaming();
        }
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 200;
    } while (iVar4 < *(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x758) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x758) = 0;
  return;
}



// FUNCTION 142833de0 FUN_142833de0 body=1011 status=ok
// SIG undefined FUN_142833de0(void)

void FUN_142833de0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 *local_res10;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int local_70;
  undefined1 local_68 [8];
  longlong *plStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  if (((*(char *)(param_1 + 0x11) == '\0') && (*(char *)(param_1 + 0x12) == '\0')) &&
     (*(longlong *)(param_1 + 0x90) != 0)) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_14283ef20();
      return;
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
    TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_88);
    lVar12 = 0;
    if (CONCAT44(uStack_7c,uStack_80) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_7c,uStack_80) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar12 = CONCAT44(uStack_7c,uStack_80);
    }
    FUN_142838d00(param_1 + 0x28,local_58);
    FStreamableHandle::UnbindDelegates(param_1);
    lVar11 = *(longlong *)(param_1 + 0x60);
    lVar3 = lVar11 + (longlong)*(int *)(param_1 + 0x68) * 0x18;
    for (; lVar11 != lVar3; lVar11 = lVar11 + 0x18) {
      lVar9 = 0;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        UNLOCK();
        lVar9 = CONCAT44(uStack_7c,uStack_80);
      }
      FUN_1428403a0(*(undefined8 *)(param_1 + 0x90),lVar11,local_48);
      lVar12 = lVar9;
    }
    TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
              (*(longlong *)(param_1 + 0x90) + 0xb0,local_88);
    plVar7 = *(longlong **)(param_1 + 0x70);
    plVar10 = plVar7 + (longlong)*(int *)(param_1 + 0x78) * 2;
    if (plVar7 != plVar10) {
      local_res10 = local_68;
      do {
        plVar5 = (longlong *)plVar7[1];
        lVar12 = *plVar7;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        plStack_60 = (longlong *)CONCAT44(uStack_7c,uStack_80);
        if (CONCAT44(uStack_7c,uStack_80) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_7c,uStack_80) + 0xc);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        TArray<TWeakPtr<IBusListener,1>,FDefaultAllocator>::
        RemoveAll<<lambda_75c4bb420badbf6619ba8f8d778f9e7f>_>(lVar12 + 0x80,&local_res10);
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plStack_60 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar8 == 1) && (plStack_60 != (longlong *)0x0)) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar10);
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x70,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (0 < *(int *)(param_1 + 0x88)) {
      iVar8 = *(int *)(param_1 + 0x88);
      lVar12 = *(longlong *)(param_1 + 0x80);
      local_78 = (longlong *)0x0;
      local_70 = iVar8;
      if (iVar8 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_78,iVar8,0);
        lVar12 = lVar12 - (longlong)local_78;
        plVar7 = local_78;
        do {
          *plVar7 = *(longlong *)(lVar12 + (longlong)plVar7);
          lVar3 = *(longlong *)(lVar12 + 8 + (longlong)plVar7);
          plVar7[1] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
            UNLOCK();
          }
          plVar7 = plVar7 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      plVar10 = local_78 + (longlong)local_70 * 2;
      iVar8 = local_70;
      for (plVar7 = local_78; local_70 = iVar8, plVar7 != plVar10; plVar7 = plVar7 + 2) {
        plVar5 = (longlong *)plVar7[1];
        lVar12 = *plVar7;
        if (plVar5 == (longlong *)0x0) {
LAB_1428340a8:
          if (plVar5 != (longlong *)0x0) {
            if (lVar12 != 0) {
              FUN_142845c90(lVar12);
            }
            LOCK();
            plVar2 = plVar5 + 1;
            lVar12 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          LOCK();
          iVar8 = (int)plVar5[1];
          bVar13 = iVar8 == 0;
          if (bVar13) {
            *(int *)(plVar5 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
          while (!bVar13) {
            LOCK();
            bVar13 = iVar8 == (int)plVar5[1];
            if (bVar13) {
              *(int *)(plVar5 + 1) = iVar8 + 1;
            }
            UNLOCK();
            if (bVar13) goto LAB_1428340a8;
            LOCK();
            iVar8 = (int)plVar5[1];
            bVar13 = iVar8 == 0;
            if (bVar13) {
              *(int *)(plVar5 + 1) = 0;
              iVar8 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        iVar8 = local_70;
      }
      if (iVar8 != 0) {
        plVar7 = local_78 + 1;
        do {
          plVar10 = (longlong *)*plVar7;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar4 == 1) && (plVar10 != (longlong *)0x0)) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
          plVar7 = plVar7 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    if (CONCAT44(uStack_7c,uStack_80) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_7c,uStack_80) + 8);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        puVar6 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
        (**(code **)*puVar6)(puVar6);
        LOCK();
        piVar1 = (int *)((longlong)puVar6 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*(longlong *)CONCAT44(uStack_7c,uStack_80) + 8))
                    ((longlong *)CONCAT44(uStack_7c,uStack_80),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1428341e0 FUN_1428341e0 body=590 status=ok
// SIG undefined FUN_1428341e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428341e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  plVar8 = *(longlong **)(param_3 + 0x10);
  _DAT_146b167a0 = _DAT_146b167a0 + 1;
  plVar12 = plVar8 + (longlong)*(int *)(param_3 + 0x18) * 2;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  uVar5 = local_30;
  do {
    local_30 = uVar5;
    if (plVar8 == plVar12) {
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_3 + 0x10,0);
      puVar7 = local_28 + (longlong)(int)local_20 * 2;
      for (puVar9 = local_28; puVar9 != puVar7; puVar9 = puVar9 + 2) {
        plVar8 = (longlong *)puVar9[1];
        uVar4 = *puVar9;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        FUN_142834e40(uVar4);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar8 + 1;
          lVar3 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
      puVar7 = local_38 + (longlong)(int)local_30 * 2;
      for (puVar9 = local_38; puVar9 != puVar7; puVar9 = puVar9 + 2) {
        plVar8 = (longlong *)puVar9[1];
        uVar4 = *puVar9;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        FUN_14283ef20(uVar4);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar8 + 1;
          lVar3 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
      _DAT_146b167a0 = _DAT_146b167a0 + -1;
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_38);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
      return;
    }
    plVar2 = (longlong *)plVar8[1];
    lVar3 = *plVar8;
    plVar10 = plVar2 + 1;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar10 = (int)*plVar10 + 1;
      UNLOCK();
    }
    piVar1 = (int *)(lVar3 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(char *)(lVar3 + 0x14) != '\0') {
        local_30._0_4_ = (int)uVar5;
        lVar11 = (longlong)(int)local_30;
        local_30._0_4_ = (int)local_30 + 1;
        local_30._4_4_ = (int)(uVar5 >> 0x20);
        if (local_30._4_4_ < (int)local_30) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar5 & 0xffffffff);
        }
        local_38[lVar11 * 2] = lVar3;
        (local_38 + lVar11 * 2)[1] = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
      }
      uVar5 = local_20;
      lVar11 = (longlong)(int)local_20;
      iVar6 = (int)local_20 + 1;
      local_20 = CONCAT44(local_20._4_4_,iVar6);
      if (local_20._4_4_ < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_28,uVar5 & 0xffffffff);
      }
      local_28[lVar11 * 2] = lVar3;
      (local_28 + lVar11 * 2)[1] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar10 = (int)*plVar10 + 1;
        UNLOCK();
        goto LAB_1428342cc;
      }
    }
    else {
LAB_1428342cc:
      plVar10 = plVar2 + 1;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
    plVar8 = plVar8 + 2;
    uVar5 = local_30;
  } while( true );
}



// FUNCTION 142834430 FUN_142834430 body=734 status=ok
// SIG undefined FUN_142834430(void)

undefined4 FUN_142834430(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  float local_res8 [2];
  float local_res18 [2];
  float local_res20 [2];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  uVar10 = 0;
  piVar9 = *(int **)(param_1 + 0x108);
  uVar6 = (longlong)*(int *)(param_1 + 0x110) & 0x3fffffffffffffff;
  if (piVar9 + *(int *)(param_1 + 0x110) < piVar9) {
    uVar6 = uVar10;
  }
  if (uVar6 != 0) {
    do {
      iVar1 = *piVar9;
      if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xe0))) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar1 * 8), lVar3 != 0)) {
        if (((*(byte *)(lVar3 + 0xb8) & 1) == 0) ||
           (((*(byte *)(lVar3 + 0xb8) & 2) != 0 && (*(longlong *)(lVar3 + 0x640) == 0)))) {
          FTextureInstanceState::RemoveComponent(param_1,lVar3);
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
        }
        else {
          uVar5 = iVar1 >> 0x1f & 3;
          uVar4 = iVar1 + uVar5;
          lVar7 = (longlong)(int)((uVar4 & 3) - uVar5);
          lVar8 = (longlong)((int)uVar4 >> 2) * 0xf0 + *(longlong *)(param_1 + 0x10);
          iVar1 = *(int *)(lVar8 + 0xa0 + lVar7 * 4);
          if (iVar1 != 0) {
            UnpackRelativeBox(lVar3 + 0x1d0,iVar1,&local_70);
            local_res8[0] = 0.0;
            local_res18[0] = 0.0;
            local_res20[0] = 3.4028235e+38;
            FUN_14283a150(lVar3,&local_70,local_res8,local_res18,local_res20);
            *(undefined4 *)(lVar8 + lVar7 * 4) = local_70;
            *(undefined4 *)(lVar8 + 0x20 + lVar7 * 4) = local_68;
            *(undefined4 *)(lVar8 + 0x10 + lVar7 * 4) = local_6c;
            *(undefined4 *)(lVar8 + 0x30 + lVar7 * 4) = *(undefined4 *)(lVar3 + 0x1d0);
            *(undefined4 *)(lVar8 + 0x40 + lVar7 * 4) = *(undefined4 *)(lVar3 + 0x1d4);
            uVar2 = *(undefined4 *)(lVar3 + 0x1d8);
            *(undefined4 *)(lVar8 + 0x60 + lVar7 * 4) = local_64;
            *(undefined4 *)(lVar8 + 0x80 + lVar7 * 4) = local_5c;
            *(undefined4 *)(lVar8 + 0x70 + lVar7 * 4) = local_60;
            *(undefined4 *)(lVar8 + 0x50 + lVar7 * 4) = uVar2;
            *(undefined4 *)(lVar8 + 0x90 + lVar7 * 4) = local_58;
            *(undefined4 *)(lVar8 + 0xa0 + lVar7 * 4) = 0xffff0000;
            *(float *)(lVar8 + 0xb0 + lVar7 * 4) = local_res8[0] * local_res8[0];
            *(float *)(lVar8 + 0xc0 + lVar7 * 4) = local_res18[0] * local_res18[0];
            if (local_res20[0] == 3.4028235e+38) {
              *(undefined4 *)(lVar8 + 0xd0 + lVar7 * 4) = 0x7f7fffff;
            }
            else {
              *(float *)(lVar8 + 0xd0 + lVar7 * 4) = local_res20[0] * local_res20[0];
            }
          }
        }
      }
      piVar9 = piVar9 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar6);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x108,0);
  }
  return uVar2;
}



// FUNCTION 142834710 FUN_142834710 body=315 status=ok
// SIG undefined FUN_142834710(void)

void FUN_142834710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x2d8);
  if (puVar7 != (undefined8 *)0x0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(*(longlong *)(param_2 + 8) + 0x78);
    if (lVar5 < lVar2) {
      puVar7 = (undefined8 *)(param_1 + 0x1d8 + lVar5 * 0x10);
      lVar2 = lVar2 - lVar5;
      do {
        plVar4 = (longlong *)*puVar7;
        uVar6 = (longlong)*(int *)(puVar7 + 1) & 0x1fffffffffffffff;
        if (plVar4 + *(int *)(puVar7 + 1) < plVar4) {
          uVar6 = 0;
        }
        uVar3 = 0;
        if (uVar6 != 0) {
          do {
            plVar1 = (longlong *)*plVar4;
            *plVar4 = 0;
            if (plVar1 != (longlong *)0x0) {
              if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
                if (*(char *)((longlong)plVar1 + 0x73) == '\0') {
                  *(undefined1 *)((longlong)plVar1 + 0x73) = 1;
                  *(undefined1 *)(plVar1 + 0xe) = 1;
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  if (*(char *)((longlong)plVar1 + 0x71) != '\0') goto LAB_1428347dd;
                }
                (**(code **)(*plVar1 + 8))(plVar1,0);
              }
LAB_1428347dd:
              (**(code **)*plVar1)(plVar1,1);
            }
            plVar4 = plVar4 + 1;
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar6);
        }
        puVar7 = puVar7 + 2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      puVar7 = *(undefined8 **)(param_1 + 0x2d8);
    }
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  return;
}



// FUNCTION 142834850 FUN_142834850 body=222 status=ok
// SIG undefined FUN_142834850(void)

void FUN_142834850(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x1f8);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 8) + 0x78);
    if (lVar5 < lVar3) {
      lVar3 = lVar3 - lVar5;
      plVar4 = (longlong *)(param_1 + 0x168 + lVar5 * 8);
      do {
        plVar1 = (longlong *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (longlong *)0x0) {
          if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
            if (*(char *)((longlong)plVar1 + 0x73) == '\0') {
              *(undefined1 *)((longlong)plVar1 + 0x73) = 1;
              *(undefined1 *)(plVar1 + 0xe) = 1;
              (**(code **)(*plVar1 + 0x10))(plVar1);
              if (*(char *)((longlong)plVar1 + 0x71) != '\0') goto LAB_1428348e0;
            }
            (**(code **)(*plVar1 + 8))(plVar1,0);
          }
LAB_1428348e0:
          (**(code **)*plVar1)(plVar1,1);
        }
        plVar4 = plVar4 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x1f8);
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 142834930 FUN_142834930 body=214 status=ok
// SIG undefined FUN_142834930(void)

void FUN_142834930(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x50);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x70),0,0);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(code **)(param_1 + 0x40) = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar2 = *(longlong **)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xd0) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0xb0);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0xd0),0,0);
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(code **)(param_1 + 0xa0) = AK::MemoryMgr::StartProfileThreadUsage;
  LOCK();
  *(undefined4 *)(param_1 + 0x18) = 0;
  UNLOCK();
  return;
}



// FUNCTION 142834a10 CompileElements body=1057 status=ok
// SIG undefined CompileElements(void)

int FTextureInstanceState::CompileElements(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  int *piVar15;
  float fVar16;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  plVar2 = (longlong *)(param_1 + 0x80);
  TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0);
  piVar15 = (int *)0x0;
  plVar1 = (longlong *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  iVar8 = *(int *)(param_1 + 0x58);
  puStack_58 = (uint *)(param_1 + 0x40);
  local_a8 = 0;
  uStack_a4 = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar8 != 0) {
    puVar13 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar13 = puStack_58;
    }
    uVar12 = *puVar13;
    piVar11 = piVar15;
    piVar9 = piVar15;
    while (uVar12 == 0) {
      iVar7 = (int)piVar11;
      uStack_90 = (int)piVar9 + 0x20;
      piVar9 = (int *)(ulonglong)uStack_90;
      local_a8 = iVar7 + 1;
      piVar11 = (int *)(ulonglong)local_a8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142834aec;
      uVar12 = puVar13[(longlong)iVar7 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
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
    local_98._4_4_ = (uStack_90 - iVar7) + 0x1f;
    if (iVar8 < local_98._4_4_) {
LAB_142834aec:
      local_98._4_4_ = iVar8;
    }
  }
  auStack_50._4_4_ = local_98._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_90;
  auStack_50._12_4_ = iStack_8c;
  uStack_60 = local_a8;
  uStack_5c = uStack_a4;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._4_4_ = iStack_8c;
  local_88._0_4_ = uStack_90;
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  if (local_98._4_4_ < iVar8) {
    local_res18[0] = &local_res10;
    local_68 = plVar1;
    local_98 = puStack_58;
    do {
      local_res10 = *(undefined8 *)(*plVar1 + (longlong)iStack_8c * 0x18);
      FUN_14209ad40(plVar2,local_res8,local_res18,0);
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
  }
  iVar8 = *(int *)(param_1 + 0xa8);
  puStack_58 = (uint *)(param_1 + 0x90);
  local_a8 = 0;
  uStack_a4 = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar8 != 0) {
    puVar13 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar13 = puStack_58;
    }
    uVar12 = *puVar13;
    piVar11 = piVar15;
    piVar9 = piVar15;
    while (uVar12 == 0) {
      iVar7 = (int)piVar11;
      uStack_90 = (int)piVar9 + 0x20;
      piVar9 = (int *)(ulonglong)uStack_90;
      local_a8 = iVar7 + 1;
      piVar11 = (int *)(ulonglong)local_a8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142834c2a;
      uVar12 = puVar13[(longlong)iVar7 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
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
    local_98._4_4_ = (uStack_90 - iVar7) + 0x1f;
    if (iVar8 < local_98._4_4_) {
LAB_142834c2a:
      local_98._4_4_ = iVar8;
    }
  }
  auStack_50._4_4_ = local_98._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_90;
  auStack_50._12_4_ = iStack_8c;
  uStack_60 = local_a8;
  uStack_5c = uStack_a4;
  local_70 = 0;
  local_40._0_4_ = SUB84(plVar2,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  bVar6 = local_98._4_4_ < *(int *)(param_1 + 0xa8);
  local_78 = plVar2;
  local_68 = plVar2;
  local_40 = plVar2;
  local_98 = puStack_58;
  if (bVar6) {
    do {
      uVar5 = *(undefined8 *)((longlong)iStack_8c * 0x20 + *plVar2);
      lVar3 = (longlong)iStack_8c * 0x20 + *plVar2;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res8,uVar5);
      piVar11 = piVar15;
      if (local_res8[0] != -1) {
        piVar11 = (int *)(*plVar1 + (longlong)local_res8[0] * 0x18);
      }
      piVar9 = piVar11 + 2;
      if (piVar11 == (int *)0x0) {
        piVar9 = piVar15;
      }
      uVar12 = 0;
      if ((piVar9 != (int *)0x0) && (iVar8 = *piVar9, uVar12 = 0, iVar8 != -1)) {
        piVar11 = piVar15;
        do {
          uVar12 = (int)piVar11 + 1;
          piVar11 = (int *)(ulonglong)uVar12;
          iVar8 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x20 + (longlong)iVar8 * 0x28);
        } while (iVar8 != -1);
      }
      iVar8 = *(int *)(lVar3 + 0x10) + uVar12;
      *(int *)(lVar3 + 0x10) = iVar8;
      if (*(int *)(lVar3 + 0x14) < iVar8) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar3 + 8);
      }
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar1,&local_res10,uVar5);
      piVar11 = piVar15;
      if ((int)local_res10 != -1) {
        piVar11 = (int *)(*plVar1 + (longlong)(int)local_res10 * 0x18);
      }
      piVar9 = piVar11 + 2;
      if (piVar11 == (int *)0x0) {
        piVar9 = piVar15;
      }
      if ((piVar9 != (int *)0x0) && (iVar8 = *piVar9, iVar8 != -1)) {
        lVar14 = *(longlong *)(param_1 + 0x20);
        piVar11 = piVar15;
        do {
          piVar9 = piVar11 + 3;
          lVar10 = (longlong)iVar8;
          fVar4 = *(float *)(lVar14 + 0x14 + lVar10 * 0x28);
          fVar16 = *(float *)(param_1 + 0xd0);
          if (*(float *)(param_1 + 0xd0) <= fVar4) {
            fVar16 = fVar4;
          }
          *(float *)(param_1 + 0xd0) = fVar16;
          *(undefined4 *)((longlong)piVar11 + *(longlong *)(lVar3 + 8)) =
               *(undefined4 *)(lVar14 + 0x10 + lVar10 * 0x28);
          *(float *)(*(longlong *)(lVar3 + 8) + -8 + (longlong)piVar9) = fVar4;
          *(undefined1 *)(*(longlong *)(lVar3 + 8) + -4 + (longlong)piVar9) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x18 + lVar10 * 0x28);
          lVar14 = *(longlong *)(param_1 + 0x20);
          iVar8 = *(int *)(lVar14 + 0x20 + lVar10 * 0x28);
          piVar11 = piVar9;
        } while (iVar8 != -1);
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  return *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4);
}



// FUNCTION 142834e40 FUN_142834e40 body=610 status=ok
// SIG undefined FUN_142834e40(void)

void FUN_142834e40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    local_30 = puVar6[1];
    local_38 = *puVar6;
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_142838d00(param_1 + 0x18,&local_38);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_20 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    FStreamableHandle::UnbindDelegates(param_1);
    if (0 < *(int *)(param_1 + 0x88)) {
      iVar8 = *(int *)(param_1 + 0x88);
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_48 = (longlong *)0x0;
      local_40 = iVar8;
      if (iVar8 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar8,0);
        lVar10 = lVar10 - (longlong)local_48;
        plVar7 = local_48;
        do {
          *plVar7 = *(longlong *)(lVar10 + (longlong)plVar7);
          lVar4 = *(longlong *)(lVar10 + 8 + (longlong)plVar7);
          plVar7[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
          plVar7 = plVar7 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      plVar9 = local_48 + (longlong)local_40 * 2;
      iVar8 = local_40;
      for (plVar7 = local_48; local_40 = iVar8, plVar7 != plVar9; plVar7 = plVar7 + 2) {
        plVar5 = (longlong *)plVar7[1];
        lVar10 = *plVar7;
        if (plVar5 == (longlong *)0x0) {
LAB_142834fb8:
          if (plVar5 != (longlong *)0x0) {
            if (lVar10 != 0) {
              FUN_142845c90(lVar10);
            }
            LOCK();
            plVar2 = plVar5 + 1;
            lVar10 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          LOCK();
          iVar8 = (int)plVar5[1];
          bVar11 = iVar8 == 0;
          if (bVar11) {
            *(int *)(plVar5 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
          while (!bVar11) {
            LOCK();
            bVar11 = iVar8 == (int)plVar5[1];
            if (bVar11) {
              *(int *)(plVar5 + 1) = iVar8 + 1;
            }
            UNLOCK();
            if (bVar11) goto LAB_142834fb8;
            LOCK();
            iVar8 = (int)plVar5[1];
            bVar11 = iVar8 == 0;
            if (bVar11) {
              *(int *)(plVar5 + 1) = 0;
              iVar8 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        iVar8 = local_40;
      }
      if (iVar8 != 0) {
        plVar7 = local_48 + 1;
        do {
          plVar9 = (longlong *)*plVar7;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (plVar9 != (longlong *)0x0)) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
          plVar7 = plVar7 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
  return;
}



// FUNCTION 1428350b0 FUN_1428350b0 body=161 status=ok
// SIG undefined FUN_1428350b0(void)

undefined8 FUN_1428350b0(longlong param_1,uint param_2,char param_3)

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
      FUN_14283e900(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142835160 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
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



// FUNCTION 142835210 FUN_142835210 body=1484 status=ok
// SIG undefined FUN_142835210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142835210(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  BOOL BVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_148 [32];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar10 + 0x38) < DAT_146b167a8) &&
     (_Init_thread_header(&DAT_146b167a8), DAT_146b167a8 == -1)) {
    DAT_146b167a4 = DAT_146534ef0;
    _Init_thread_footer(&DAT_146b167a8);
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_146b167b0) &&
     (_Init_thread_header(&DAT_146b167b0), DAT_146b167b0 == -1)) {
    DAT_146b167ac = DAT_146534ef4;
    _Init_thread_footer(&DAT_146b167b0);
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_146b16ca4) &&
     (_Init_thread_header(&DAT_146b16ca4), DAT_146b16ca4 == -1)) {
    lVar10 = 9;
    puVar11 = (undefined8 *)((longlong)param_1 + 0x1b4);
    puVar12 = (undefined8 *)&DAT_146b167c0;
    do {
      puVar9 = puVar12;
      puVar8 = puVar11;
      uVar1 = puVar8[1];
      *puVar9 = *puVar8;
      puVar9[1] = uVar1;
      uVar1 = puVar8[3];
      puVar9[2] = puVar8[2];
      puVar9[3] = uVar1;
      uVar1 = puVar8[5];
      puVar9[4] = puVar8[4];
      puVar9[5] = uVar1;
      uVar1 = puVar8[7];
      puVar9[6] = puVar8[6];
      puVar9[7] = uVar1;
      uVar1 = puVar8[9];
      puVar9[8] = puVar8[8];
      puVar9[9] = uVar1;
      uVar1 = puVar8[0xb];
      puVar9[10] = puVar8[10];
      puVar9[0xb] = uVar1;
      uVar1 = puVar8[0xd];
      puVar9[0xc] = puVar8[0xc];
      puVar9[0xd] = uVar1;
      uVar1 = puVar8[0xf];
      puVar9[0xe] = puVar8[0xe];
      puVar9[0xf] = uVar1;
      lVar10 = lVar10 + -1;
      puVar11 = puVar8 + 0x10;
      puVar12 = puVar9 + 0x10;
    } while (lVar10 != 0);
    uVar1 = puVar8[0x11];
    puVar9[0x10] = puVar8[0x10];
    puVar9[0x11] = uVar1;
    uVar1 = puVar8[0x13];
    puVar9[0x12] = puVar8[0x12];
    puVar9[0x13] = uVar1;
    uVar1 = puVar8[0x15];
    puVar9[0x14] = puVar8[0x14];
    puVar9[0x15] = uVar1;
    uVar1 = puVar8[0x17];
    puVar9[0x16] = puVar8[0x16];
    puVar9[0x17] = uVar1;
    uVar2 = *(undefined4 *)((longlong)puVar8 + 0xc4);
    uVar3 = *(undefined4 *)(puVar8 + 0x19);
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0xcc);
    *(undefined4 *)(puVar9 + 0x18) = *(undefined4 *)(puVar8 + 0x18);
    *(undefined4 *)((longlong)puVar9 + 0xc4) = uVar2;
    *(undefined4 *)(puVar9 + 0x19) = uVar3;
    *(undefined4 *)((longlong)puVar9 + 0xcc) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar8 + 0xd4);
    uVar3 = *(undefined4 *)(puVar8 + 0x1b);
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0xdc);
    *(undefined4 *)(puVar9 + 0x1a) = *(undefined4 *)(puVar8 + 0x1a);
    *(undefined4 *)((longlong)puVar9 + 0xd4) = uVar2;
    *(undefined4 *)(puVar9 + 0x1b) = uVar3;
    *(undefined4 *)((longlong)puVar9 + 0xdc) = uVar4;
    *(undefined4 *)(puVar9 + 0x1c) = *(undefined4 *)(puVar8 + 0x1c);
    _Init_thread_footer(&DAT_146b16ca4);
  }
  if (((DAT_146b167a4 != DAT_146534ef0) || (DAT_146b167ac != DAT_146534ef4)) ||
     (iVar6 = _guard_xfg_dispatch_icall_nop
                        (&DAT_146b167c0,(void *)((longlong)param_1 + 0x1b4),0x4e0), iVar6 != 0)) {
    lVar10 = param_1[2];
    lVar15 = (longlong)(int)param_1[3] * 200 + lVar10;
    for (; lVar10 != lVar15; lVar10 = lVar10 + 200) {
      FUN_1428474e0(lVar10,(longlong)param_1 + 0x1b4);
      if (DAT_146b167f8 != *(int *)((longlong)param_1 + 0x1ec)) {
        *(undefined8 *)(lVar10 + 0x88) = DAT_1468b5a78;
      }
    }
    if (DAT_146b167f8 != *(int *)((longlong)param_1 + 0x1ec)) {
      uVar16 = 0;
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12e));
      if (BVar7 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12e));
      }
      puVar11 = (undefined8 *)param_1[0xe9];
      uVar14 = (longlong)(int)param_1[0xea] & 0x1fffffffffffffff;
      if (puVar11 + (int)param_1[0xea] < puVar11) {
        uVar14 = uVar16;
      }
      uVar17 = uVar16;
      if (uVar14 != 0) {
        do {
          uVar5 = local_40;
          lVar10 = (longlong)(int)local_40;
          puVar12 = (undefined8 *)*puVar11;
          iVar6 = (int)local_40 + 1;
          uVar1 = *puVar12;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          if (local_40._4_4_ < iVar6) {
            TArray<FInventoryItem_*,TInlineAllocator<32,FDefaultAllocator>_>::ResizeGrow
                      (local_148,uVar5 & 0xffffffff);
          }
          puVar8 = local_148;
          if (local_48 != (undefined8 *)0x0) {
            puVar8 = local_48;
          }
          puVar8[lVar10] = uVar1;
          FUN_14283f510(puVar12,0);
          puVar11 = puVar11 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar14);
      }
      TIndirectArray<FLevelTextureManager,FDefaultAllocator>::Empty(param_1 + 0xe9,0);
      puVar11 = local_148;
      if (local_48 != (undefined8 *)0x0) {
        puVar11 = local_48;
      }
      uVar14 = (longlong)(int)local_40 & 0x1fffffffffffffff;
      if (puVar11 + (int)local_40 < puVar11) {
        uVar14 = uVar16;
      }
      uVar17 = uVar16;
      if (uVar14 != 0) {
        do {
          (**(code **)(*param_1 + 0x48))(param_1,*puVar11);
          uVar17 = uVar17 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar17 != uVar14);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12e));
      local_158 = (undefined8 *)0x0;
      local_150 = 0;
      FDynamicTextureInstanceManager::FTasks::SyncResults(param_1 + 0xd8);
      FTextureInstanceState::GetReferencedComponents(param_1[0xd7],&local_158);
      puVar11 = local_158;
      uVar14 = (ulonglong)((longlong)(local_158 + (int)local_150) + (7 - (longlong)local_158)) >> 3;
      if (local_158 + (int)local_150 < local_158) {
        uVar14 = uVar16;
      }
      puVar12 = local_158;
      if (uVar14 != 0) {
        do {
          (**(code **)(*param_1 + 0x78))(param_1,*puVar12);
          uVar16 = uVar16 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar16 != uVar14);
      }
      if (puVar11 != (undefined8 *)0x0) {
        FMemory::Free(puVar11);
      }
      if (local_48 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    puVar13 = &DAT_146b16804;
    DAT_146b167a4 = DAT_146534ef0;
    _DAT_146b167c0 = *(undefined4 *)((longlong)param_1 + 0x1b4);
    lVar10 = 0x3b;
    _DAT_146b167c4 = (undefined4)param_1[0x37];
    _DAT_146b167c8 = *(undefined4 *)((longlong)param_1 + 0x1bc);
    _DAT_146b167cc = (undefined4)param_1[0x38];
    _DAT_146b167d0 = *(undefined4 *)((longlong)param_1 + 0x1c4);
    DAT_146b167ac = DAT_146534ef4;
    _DAT_146b167d4 = (undefined4)param_1[0x39];
    _DAT_146b167d8 = *(undefined4 *)((longlong)param_1 + 0x1cc);
    _DAT_146b167dc = (undefined4)param_1[0x3a];
    _DAT_146b167e0 = *(undefined4 *)((longlong)param_1 + 0x1d4);
    DAT_146b167e4 = (undefined1)param_1[0x3b];
    DAT_146b167e5 = *(undefined1 *)((longlong)param_1 + 0x1d9);
    DAT_146b167e6 = *(undefined1 *)((longlong)param_1 + 0x1da);
    DAT_146b167e7 = *(undefined1 *)((longlong)param_1 + 0x1db);
    DAT_146b167e8 = *(undefined1 *)((longlong)param_1 + 0x1dc);
    DAT_146b167e9 = *(undefined1 *)((longlong)param_1 + 0x1dd);
    DAT_146b167ea = *(undefined1 *)((longlong)param_1 + 0x1de);
    _DAT_146b167ec = (undefined4)param_1[0x3c];
    _DAT_146b167f0 = *(undefined4 *)((longlong)param_1 + 0x1e4);
    _DAT_146b167f4 = (undefined4)param_1[0x3d];
    DAT_146b167f8 = *(int *)((longlong)param_1 + 0x1ec);
    _DAT_146b167fc = (undefined4)param_1[0x3e];
    _DAT_146b16800 = *(undefined4 *)((longlong)param_1 + 500);
    do {
      FUN_14284e7f0(puVar13,(undefined *)((longlong)param_1 + (longlong)(puVar13 + -0x146b1660c)));
      puVar13 = puVar13 + 0x14;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _DAT_146b16ca0 = *(undefined4 *)((longlong)param_1 + 0x694);
  }
  return;
}



// FUNCTION 1428357e0 ConstructCompiledInstance body=248 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FStereoLayerVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e8aec8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InQuadAdjust",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"InUVAdjust",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"InViewProjection",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"InWorld",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428358e0 FUN_1428358e0 body=950 status=ok
// SIG undefined FUN_1428358e0(void)

undefined8 *
FUN_1428358e0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if ((int)param_3[1] < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar5 = (longlong *)operator_new(0x98);
  plVar9 = (longlong *)0x0;
  plVar10 = plVar9;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
    *(undefined2 *)((longlong)plVar5 + 0x14) = 0;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[5] = 0;
    *(undefined4 *)(plVar5 + 6) = 0;
    plVar5[7] = 0;
    *(undefined4 *)(plVar5 + 8) = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    plVar10 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_1451c0af8;
    plVar5[2] = (longlong)plVar10;
    plVar9 = plVar5;
  }
  if (plVar10 != (longlong *)0x0) {
    if ((*plVar10 != 0) && (plVar10[1] != 0)) {
      piVar1 = (int *)(plVar10[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_142835a75;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar10 = (longlong)plVar10;
    plVar5 = (longlong *)plVar10[1];
    if (plVar9 != plVar5) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar10[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar10[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar9)(plVar9);
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
LAB_142835a75:
  plVar10[0x12] = param_1;
  *(undefined1 *)((longlong)plVar10 + 0x15) = 1;
  FString::operator=(plVar10 + 9,param_4);
  plVar5 = (longlong *)*param_3;
  plVar6 = plVar5 + (longlong)(int)param_3[1] * 2;
  do {
    if (plVar5 == plVar6) {
      iVar4 = *(int *)(param_1 + 200);
      *(int *)(param_1 + 200) = iVar4 + 1;
      if (*(int *)(param_1 + 0xcc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xc0,iVar4);
      }
      puVar7 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xc0));
      *puVar7 = plVar10;
      puVar7[1] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      FUN_142845c90(plVar10);
      *param_2 = plVar10;
      param_2[1] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
LAB_142835bfa:
        LOCK();
        plVar10 = plVar9 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar9)(plVar9);
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
      return param_2;
    }
    plVar2 = (longlong *)plVar5[1];
    lVar3 = *plVar5;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (lVar3 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar2 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (plVar9 == (longlong *)0x0) {
        return param_2;
      }
      goto LAB_142835bfa;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(lVar3 + 0x88);
    *(int *)(lVar3 + 0x88) = iVar4 + 1;
    if (*(int *)(lVar3 + 0x8c) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar3 + 0x80),iVar4);
    }
    puVar7 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar3 + 0x80));
    *puVar7 = plVar10;
    puVar7[1] = plVar9;
    iVar4 = (int)plVar10[0xf];
    *(int *)(plVar10 + 0xf) = iVar4 + 1;
    if (*(int *)((longlong)plVar10 + 0x7c) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10 + 0xe,iVar4);
    }
    plVar8 = (longlong *)((longlong)iVar4 * 0x10 + plVar10[0xe]);
    *plVar8 = lVar3;
    plVar8[1] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar2 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



// FUNCTION 142835ca0 FUN_142835ca0 body=66 status=ok
// SIG undefined FUN_142835ca0(void)

void FUN_142835ca0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451c0a68;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1451c0ab0;
  }
  return;
}



// FUNCTION 142835cf0 FUN_142835cf0 body=66 status=ok
// SIG undefined FUN_142835cf0(void)

void FUN_142835cf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451c0948;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1451c0990;
  }
  return;
}



// FUNCTION 142835d40 FUN_142835d40 body=66 status=ok
// SIG undefined FUN_142835d40(void)

void FUN_142835d40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451c09d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1451c0a20;
  }
  return;
}



// FUNCTION 142835d90 CreateCopy body=139 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(float),TFunction<void___cdecl(float)>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = &PTR_GetPoolName_1451c08b8;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x40) == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar4)();
      (**(code **)(*plVar2 + 8))(plVar2);
      pcVar3 = *(code **)(param_1 + 0x10);
      goto LAB_142835dfa;
    }
  }
  pcVar3 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_142835dfa:
  puVar1[2] = pcVar3;
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  *puVar1 = &PTR_GetPoolName_1451c0900;
  return;
}



// FUNCTION 142835e20 FUN_142835e20 body=124 status=ok
// SIG undefined FUN_142835e20(void)

void FUN_142835e20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1451c0828;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    FString::FString(puVar2 + 5,param_1 + 0x28);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_1451c0870;
  }
  return;
}



// FUNCTION 142835ea0 CreateView body=360 status=ok
// SIG undefined CreateView(void)

undefined8 * FTextureInstanceView::CreateView(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0xd8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__1451c03e0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 100) = 0;
    puVar3[0xe] = 0;
    *(undefined4 *)(puVar3 + 0xf) = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    *(undefined4 *)(puVar3 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xb4) = 0;
    puVar3[0x18] = 0;
    *(undefined4 *)(puVar3 + 0x19) = 0;
    *(undefined4 *)(puVar3 + 0x1a) = 0x7f7fffff;
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  }
  puVar1 = puVar3 + 2;
  if (puVar1 != (undefined8 *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x18);
    _Src = *(void **)(param_2 + 0x10);
    *(int *)(puVar3 + 3) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)puVar3 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    }
    else {
      TArray<FTextureInstanceView::FBounds4,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0xf0);
    }
  }
  TArray<FSlateVertex,FDefaultAllocator>::operator=(puVar3 + 4,param_2 + 0x20);
  TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
  ::operator=(puVar3 + 6,param_2 + 0x30);
  *(undefined4 *)(puVar3 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  iVar2 = *(int *)(puVar3 + 1);
  *param_1 = puVar3;
  *(int *)(puVar3 + 1) = iVar2;
  if (iVar2 == 0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return param_1;
}



// FUNCTION 142836010 FUN_142836010 body=20 status=ok
// SIG undefined FUN_142836010(void)

void FUN_142836010(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142830e10(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 142836030 FUN_142836030 body=553 status=ok
// SIG undefined FUN_142836030(void)

void FUN_142836030(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  longlong lVar4;
  undefined8 *puVar5;
  short *psVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  
  cVar8 = (**(code **)(*param_1 + 8))();
  if ((cVar8 == '\0') && (param_2[1] != 0)) {
    lVar4 = *(longlong *)(*param_2 + 0xd8);
    lVar14 = (longlong)*(int *)(param_2[1] + 0x78);
    sVar3 = *(short *)(**(longlong **)(lVar4 + 0x10) + 4);
    iVar16 = (int)sVar3;
    if (param_1 + 0x1e != param_1 + 0x3a) {
      plVar12 = param_1 + 0x1f;
      do {
        iVar9 = (int)*plVar12;
        if (iVar9 < iVar16) {
          *(int *)plVar12 = iVar16;
          if (*(int *)((longlong)plVar12 + 4) < iVar16) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12 + -1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(plVar12[-1] + (longlong)iVar9 * 8),0,(longlong)(iVar16 - iVar9) << 3);
        }
        else if ((iVar16 < iVar9) && (iVar16 != iVar9)) {
          *(int *)plVar12 = iVar16;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar12 + -1);
        }
        plVar1 = plVar12 + 1;
        plVar12 = plVar12 + 2;
      } while (plVar1 != param_1 + 0x3a);
    }
    lVar15 = (longlong)(int)param_1[2];
    if (lVar15 < lVar14) {
      param_1 = param_1 + (lVar15 + 0xf) * 2;
      do {
        puVar5 = *(undefined8 **)(param_2[1] + 0xf8);
        psVar6 = *(short **)(*(longlong *)(lVar4 + 0x10) + lVar15 * 8);
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
          UNLOCK();
        }
        iVar9 = CalcTextureMipMapSize
                          ((int)*psVar6,(int)psVar6[1],*(undefined4 *)((longlong)puVar5 + 0x3c),0);
        LOCK();
        piVar2 = (int *)(puVar5 + 1);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          if ((*(char *)(puVar5 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
            LOCK();
            bVar17 = *(int *)((longlong)puVar5 + 0xc) == 0;
            if (bVar17) {
              *(int *)((longlong)puVar5 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar17) {
              uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar10 == 0) {
                lVar13 = 0;
              }
              else {
                lVar13 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar13 + 8) = puVar5;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        lVar13 = 0;
        if (0 < (longlong)sVar3) {
          do {
            lVar7 = *param_1;
            uVar11 = FMemory::Malloc((longlong)iVar9,0);
            *(undefined8 *)(lVar7 + lVar13 * 8) = uVar11;
            lVar13 = lVar13 + 1;
          } while (lVar13 < sVar3);
        }
        lVar15 = lVar15 + 1;
        param_1 = param_1 + 2;
      } while (lVar15 < lVar14);
    }
  }
  return;
}



// FUNCTION 142836260 FUN_142836260 body=546 status=ok
// SIG undefined FUN_142836260(void)

void FUN_142836260(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  short *psVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  longlong local_res18;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uVar11;
  
  cVar4 = (**(code **)(*param_1 + 8))();
  if (((cVar4 == '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    local_res18 = *(longlong *)(param_2[1] + 0xf8);
    if (local_res18 != 0) {
      LOCK();
      *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
      UNLOCK();
      uVar14 = 0;
      local_48 = 0;
      uStack_3c = 0;
      lVar2 = *(longlong *)(*param_2 + 0xd8);
      bVar1 = *(byte *)(*param_2 + 0x4b);
      psVar3 = *(short **)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)param_1[2] * 8);
      uVar5 = psVar3[2];
      iVar7 = (*(int *)(param_2[1] + 0x78) - *(int *)(lVar2 + 0x18)) +
              *(int *)((longlong)param_1 + 0x14);
      iStack_40 = (short)uVar5 * iVar7;
      uVar8 = uVar14;
      if (0 < iStack_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,0);
        uVar5 = psVar3[2];
        uVar8 = local_48;
      }
      uVar6 = (uint)uVar5;
      uVar11 = uVar14;
      if (0 < iVar7) {
        do {
          uVar5 = (ushort)uVar6;
          iVar13 = (int)uVar11;
          if (0 < (short)uVar5) {
            uVar6 = (uint)(short)uVar5;
            uVar11 = uVar14;
            uVar12 = uVar14;
            do {
              iVar9 = (int)uVar11;
              uVar10 = iVar9 + 1;
              uVar11 = (ulonglong)uVar10;
              *(undefined8 *)(uVar8 + (longlong)(int)(uVar6 * iVar13 + iVar9) * 8) =
                   *(undefined8 *)
                    (uVar12 + param_1[((longlong)((int)param_1[2] + iVar13) + 0xf) * 2]);
              uVar5 = psVar3[2];
              uVar6 = (uint)(short)uVar5;
              uVar12 = uVar12 + 8;
            } while ((int)uVar10 < (int)uVar6);
          }
          uVar11 = (ulonglong)(iVar13 + 1U);
        } while ((int)(iVar13 + 1U) < iVar7);
      }
      local_48._0_4_ = (undefined4)uVar8;
      local_48._4_4_ = (undefined4)(uVar8 >> 0x20);
      local_38 = (undefined4)local_48;
      uStack_34 = local_48._4_4_;
      uStack_2c = uStack_3c;
      local_48 = uVar8;
      iStack_30 = iStack_40;
      (**(code **)(*DAT_146ab6358 + 0x230))
                (DAT_146ab6358,local_res8,(int)*psVar3,(int)psVar3[1],(int)(short)uVar5,
                 *(undefined1 *)(local_res18 + 0x3c),*(undefined4 *)((longlong)param_1 + 0x14),
                 (bVar1 & 1 | 0x60) << 4,&local_38,iVar7);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
      if (uVar8 != 0) {
        FMemory::Free(uVar8);
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  }
  return;
}



// FUNCTION 142836490 FUN_142836490 body=228 status=ok
// SIG undefined FUN_142836490(void)

void FUN_142836490(longlong *param_1,longlong *param_2)

{
  short *psVar1;
  char cVar2;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (((cVar2 == '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    psVar1 = *(short **)
              (*(longlong *)(*(longlong *)(*param_2 + 0xd8) + 0x10) + (longlong)(int)param_1[2] * 8)
    ;
    LOCK();
    *(undefined4 *)(param_1 + 3) = 1;
    UNLOCK();
    local_res18[0] = *(longlong *)(param_2[1] + 0xf8);
    if (local_res18[0] != 0) {
      LOCK();
      *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*DAT_146ab6358 + 0x4d8))
              (DAT_146ab6358,local_res8,&DAT_146ab6e78,local_res18[0],(int)psVar1[2],
               *(undefined4 *)((longlong)param_1 + 0x14),(int)*psVar1,(int)psVar1[1],param_1 + 3);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 142836580 FUN_142836580 body=218 status=ok
// SIG undefined FUN_142836580(void)

void FUN_142836580(longlong *param_1,longlong *param_2)

{
  short *psVar1;
  char cVar2;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (((cVar2 == '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    psVar1 = *(short **)
              (*(longlong *)(*(longlong *)(*param_2 + 0xd8) + 0x10) + (longlong)(int)param_1[2] * 8)
    ;
    LOCK();
    *(undefined4 *)(param_1 + 3) = 1;
    UNLOCK();
    local_res18[0] = *(longlong *)(param_2[1] + 0xf8);
    if (local_res18[0] != 0) {
      LOCK();
      *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*DAT_146ab6358 + 0x4c0))
              (DAT_146ab6358,local_res8,&DAT_146ab6e78,local_res18[0],
               *(undefined4 *)((longlong)param_1 + 0x14),(int)*psVar1,(int)psVar1[1],param_1 + 3);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 142836660 FUN_142836660 body=511 status=ok
// SIG undefined FUN_142836660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142836660(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  undefined1 local_98;
  int local_90;
  uint local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined1 local_70 [8];
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
  cVar4 = (**(code **)(*param_1 + 8))();
  if ((((cVar4 == '\0') && (param_1[1] == 0)) && (*param_2 != 0)) && (param_2[1] != 0)) {
    lVar1 = *(longlong *)(param_2[1] + 0xf8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    local_78 = lVar1;
    if ((*(uint *)(lVar1 + 0x40) & 0x400000) != 0) {
      local_80 = &local_68;
      local_68 = *(undefined8 *)(param_2[1] + 0x68);
      local_88 = *(uint *)(*(longlong *)(param_2[1] + 0xf8) + 0x40) & 0xffbfffff;
      local_60 = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_58 = 1;
      local_54 = _DAT_1468b5d78;
      uStack_50 = uRam00000001468b5d7c;
      uStack_4c = uRam00000001468b5d80;
      uStack_48 = uRam00000001468b5d84;
      local_90 = *(int *)(*(longlong *)(*param_2 + 0xd8) + 0x18) - (int)param_1[2];
      psVar2 = *(short **)
                (*(longlong *)(*(longlong *)(*param_2 + 0xd8) + 0x10) +
                (longlong)(int)param_1[2] * 8);
      local_98 = *(undefined1 *)(lVar1 + 0x3c);
      local_a0 = (int)psVar2[2];
      local_a8 = (int)psVar2[1];
      (**(code **)(*DAT_146ab6358 + 0x5f0))(DAT_146ab6358,local_70,&DAT_146ab6e78,(int)*psVar2);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_70);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
      lVar3 = param_1[1];
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      (**(code **)(*DAT_146ab6358 + 0x238))(DAT_146ab6358,lVar3,lVar1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
      return 1;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
  }
  return 0;
}



// FUNCTION 142836860 FUN_142836860 body=507 status=ok
// SIG undefined FUN_142836860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142836860(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined1 local_a0;
  int local_98;
  undefined4 local_90;
  uint local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined1 local_70 [8];
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
  cVar4 = (**(code **)(*param_1 + 8))();
  if ((((cVar4 == '\0') && (param_1[1] == 0)) && (*param_2 != 0)) && (param_2[1] != 0)) {
    lVar1 = *(longlong *)(param_2[1] + 0xf8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    local_78 = lVar1;
    if ((*(uint *)(lVar1 + 0x40) & 0x400000) != 0) {
      local_68 = *(undefined8 *)(param_2[1] + 0x68);
      local_88 = *(uint *)(*(longlong *)(param_2[1] + 0xf8) + 0x40) & 0xffbfffff;
      local_60 = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_58 = 1;
      local_54 = _DAT_1468b5d78;
      uStack_50 = uRam00000001468b5d7c;
      uStack_4c = uRam00000001468b5d80;
      uStack_48 = uRam00000001468b5d84;
      local_98 = *(int *)(*(longlong *)(*param_2 + 0xd8) + 0x18) - (int)param_1[2];
      psVar2 = *(short **)
                (*(longlong *)(*(longlong *)(*param_2 + 0xd8) + 0x10) +
                (longlong)(int)param_1[2] * 8);
      local_a8 = (int)psVar2[1];
      local_80 = &local_68;
      local_90 = 1;
      local_a0 = *(undefined1 *)(lVar1 + 0x3c);
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_70,&DAT_146ab6e78,(int)*psVar2);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_70);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
      lVar3 = param_1[1];
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      (**(code **)(*DAT_146ab6358 + 0x228))(DAT_146ab6358,lVar3,lVar1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
      return 1;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
  }
  return 0;
}



// FUNCTION 142836a60 FUN_142836a60 body=659 status=ok
// SIG undefined FUN_142836a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142836a60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  char cVar5;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b0;
  undefined1 local_a8;
  undefined4 local_a0;
  uint local_98;
  undefined8 *local_90;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78 [2];
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar5 = (**(code **)(*param_1 + 8))();
  if (((cVar5 == '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    lVar2 = *(longlong *)(param_2[1] + 0xf8);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    local_78[0] = lVar2;
    if ((*(uint *)(lVar2 + 0x40) >> 0x16 & 1) == 0) {
      local_98 = *(uint *)(lVar2 + 0x40) | 0x400000;
      local_68 = *(undefined8 *)(param_2[1] + 0x68);
      local_60 = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_58 = 1;
      local_54 = _DAT_1468b5d78;
      uStack_50 = uRam00000001468b5d7c;
      uStack_4c = uRam00000001468b5d80;
      uStack_48 = uRam00000001468b5d84;
      psVar3 = (short *)**(undefined8 **)(*(longlong *)(*param_2 + 0xd8) + 0x10);
      local_b0 = (int)psVar3[2];
      local_b8 = (int)psVar3[1];
      local_90 = &local_68;
      local_a0 = *(undefined4 *)(*(longlong *)(*param_2 + 0xd8) + 0x18);
      local_a8 = *(undefined1 *)(lVar2 + 0x3c);
      (**(code **)(*DAT_146ab6358 + 0x5f0))(DAT_146ab6358,local_88,&DAT_146ab6e78,(int)*psVar3);
      plVar1 = param_1 + 1;
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar1,local_88);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
      (**(code **)(*DAT_146ab6358 + 0x708))
                (DAT_146ab6358,&DAT_146ab6e78,*plVar1,*(undefined4 *)(param_2[1] + 0x78));
      (**(code **)(*DAT_146ab6358 + 0x710))
                (DAT_146ab6358,&DAT_146ab6e78,*plVar1,*(undefined4 *)(param_2[1] + 0x78));
      lVar4 = *plVar1;
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      (**(code **)(*DAT_146ab6358 + 0x238))(DAT_146ab6358,lVar4,lVar2);
    }
    else {
      local_80 = *(longlong *)(param_2[1] + 0xf8);
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,&local_80);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_80);
    }
    (**(code **)(*DAT_146ab6358 + 0x708))(DAT_146ab6358,&DAT_146ab6e78,param_1[1],(int)param_1[2]);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  }
  return;
}



// FUNCTION 142836d00 FUN_142836d00 body=656 status=ok
// SIG undefined FUN_142836d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142836d00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  char cVar5;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  uint local_98;
  undefined8 *local_90;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78 [2];
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar5 = (**(code **)(*param_1 + 8))();
  if (((cVar5 == '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    lVar2 = *(longlong *)(param_2[1] + 0xf8);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    local_78[0] = lVar2;
    if ((*(uint *)(lVar2 + 0x40) >> 0x16 & 1) == 0) {
      local_98 = *(uint *)(lVar2 + 0x40) | 0x400000;
      local_68 = *(undefined8 *)(param_2[1] + 0x68);
      local_60 = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_58 = 1;
      local_54 = _DAT_1468b5d78;
      uStack_50 = uRam00000001468b5d7c;
      uStack_4c = uRam00000001468b5d80;
      uStack_48 = uRam00000001468b5d84;
      psVar3 = (short *)**(undefined8 **)(*(longlong *)(*param_2 + 0xd8) + 0x10);
      local_b8 = (int)psVar3[1];
      local_90 = &local_68;
      local_a8 = *(undefined4 *)(*(longlong *)(*param_2 + 0xd8) + 0x18);
      local_a0 = 1;
      local_b0 = *(undefined1 *)(lVar2 + 0x3c);
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_88,&DAT_146ab6e78,(int)*psVar3);
      plVar1 = param_1 + 1;
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar1,local_88);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
      (**(code **)(*DAT_146ab6358 + 0x6f8))
                (DAT_146ab6358,&DAT_146ab6e78,*plVar1,*(undefined4 *)(param_2[1] + 0x78));
      (**(code **)(*DAT_146ab6358 + 0x700))
                (DAT_146ab6358,&DAT_146ab6e78,*plVar1,*(undefined4 *)(param_2[1] + 0x78));
      lVar4 = *plVar1;
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      (**(code **)(*DAT_146ab6358 + 0x228))(DAT_146ab6358,lVar4,lVar2);
    }
    else {
      local_80 = *(longlong *)(param_2[1] + 0xf8);
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,&local_80);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_80);
    }
    (**(code **)(*DAT_146ab6358 + 0x6f8))(DAT_146ab6358,&DAT_146ab6e78,param_1[1],(int)param_1[2]);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  }
  return;
}



// FUNCTION 142836f90 FUN_142836f90 body=168 status=ok
// SIG undefined FUN_142836f90(void)

void FUN_142836f90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  if ((*(longlong *)(param_2 + 8) != 0) &&
     (uVar4 = (ulonglong)*(int *)(param_1 + 0x10),
     *(int *)(param_1 + 0x10) < *(int *)(*(longlong *)(param_2 + 8) + 0x78))) {
    puVar5 = (undefined8 *)((uVar4 + 0xf) * 0x10 + param_1);
    do {
      plVar2 = (longlong *)*puVar5;
      plVar1 = plVar2 + *(int *)(puVar5 + 1);
      for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
        if (*plVar2 != 0) {
          FMemory::Free();
          *plVar2 = 0;
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      puVar5 = puVar5 + 2;
    } while ((int)uVar3 < *(int *)(*(longlong *)(param_2 + 8) + 0x78));
  }
  return;
}



// FUNCTION 142837040 FUN_142837040 body=107 status=ok
// SIG undefined FUN_142837040(void)

void FUN_142837040(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_2 + 8) != 0) &&
     (uVar3 = (ulonglong)*(int *)(param_1 + 0x10),
     *(int *)(param_1 + 0x10) < *(int *)(*(longlong *)(param_2 + 8) + 0x78))) {
    plVar1 = (longlong *)(param_1 + 0xf0 + uVar3 * 8);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
        *plVar1 = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      plVar1 = plVar1 + 1;
    } while ((int)uVar2 < *(int *)(*(longlong *)(param_2 + 8) + 0x78));
  }
  return;
}



// FUNCTION 1428370b0 FUN_1428370b0 body=60 status=ok
// SIG undefined FUN_1428370b0(void)

int FUN_1428370b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    do {
      if (iVar2 != 0) {
        FUN_1416b1760(0);
      }
      iVar2 = *(int *)(param_1 + 0x2c);
    } while (iVar2 == 3);
    LOCK();
    iVar1 = *(int *)(param_1 + 0x2c);
    bVar3 = iVar2 == iVar1;
    if (bVar3) {
      *(int *)(param_1 + 0x2c) = 3;
      iVar1 = iVar2;
    }
    UNLOCK();
  } while (!bVar3);
  *(int *)(param_1 + 0x30) = iVar2;
  return iVar1;
}



// FUNCTION 1428370f0 FUN_1428370f0 body=625 status=ok
// SIG undefined FUN_1428370f0(void)

void FUN_1428370f0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 local_res18 [2];
  longlong local_res20;
  longlong local_48 [2];
  
  cVar3 = (**(code **)(*param_1 + 8))();
  if (((cVar3 == '\0') && (param_1[1] != 0)) && (lVar13 = param_2[1], lVar13 != 0)) {
    uVar2 = *(ushort *)(**(longlong **)(*(longlong *)(*param_2 + 0xd8) + 0x10) + 4);
    uVar11 = (uint)(short)uVar2;
    uVar12 = uVar11;
    if (param_1 + 0x1e != param_1 + 0x3a) {
      puVar8 = (uint *)(param_1 + 0x1f);
      do {
        uVar12 = *puVar8;
        if ((int)uVar12 < (int)uVar11) {
          *puVar8 = uVar11;
          if ((int)puVar8[1] < (int)uVar11) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar8 + -2);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(puVar8 + -2) + (longlong)(int)uVar12 * 8),0,
                     (longlong)(int)(uVar11 - uVar12) << 3);
        }
        else if (((int)uVar11 < (int)uVar12) && (uVar11 != uVar12)) {
          *puVar8 = uVar11;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar8 + -2);
        }
        puVar1 = puVar8 + 2;
        puVar8 = puVar8 + 4;
      } while (puVar1 != (uint *)(param_1 + 0x3a));
      lVar13 = param_2[1];
      uVar12 = (uint)uVar2;
    }
    local_48[0] = *(longlong *)(lVar13 + 0xf8);
    if (local_48[0] != 0) {
      LOCK();
      *(int *)(local_48[0] + 8) = *(int *)(local_48[0] + 8) + 1;
      UNLOCK();
      lVar13 = param_2[1];
    }
    iVar7 = (int)param_1[2];
    lVar9 = (longlong)iVar7;
    iVar10 = 0;
    if ((*(uint *)(local_48[0] + 0x40) >> 0x16 & 1) == 0) {
      iVar10 = iVar7;
    }
    if (lVar9 < *(int *)(lVar13 + 0x78)) {
      iVar7 = iVar7 - iVar10;
      plVar14 = param_1 + (lVar9 + 0xf) * 2;
      local_res20 = *(int *)(lVar13 + 0x78) - lVar9;
      do {
        iVar10 = 0;
        if (0 < (short)uVar12) {
          lVar13 = 0;
          do {
            lVar9 = DAT_146b17050;
            local_res18[0] = 0;
            cVar3 = FUN_1415ad720(&DAT_1468e2448);
            if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
              DVar4 = GetCurrentThreadId();
              lVar5 = 4;
              if (DVar4 == DAT_1468c21c0) goto LAB_1428372a0;
            }
            else {
LAB_1428372a0:
              lVar5 = 0;
            }
            uVar6 = (**(code **)(*DAT_146ab6358 + 0x598))
                              (DAT_146ab6358,&DAT_146ab6e78,param_1[1],iVar10,iVar7,1,local_res18,0,
                               0 < *(int *)(lVar5 + lVar9));
            iVar10 = iVar10 + 1;
            *(undefined8 *)(lVar13 + *plVar14) = uVar6;
            lVar13 = lVar13 + 8;
          } while (iVar10 < (int)uVar11);
          uVar12 = (uint)uVar2;
        }
        iVar7 = iVar7 + 1;
        plVar14 = plVar14 + 2;
        local_res20 = local_res20 + -1;
      } while (local_res20 != 0);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_48);
  }
  return;
}



// FUNCTION 142837370 FUN_142837370 body=350 status=ok
// SIG undefined FUN_142837370(void)

void FUN_142837370(longlong *param_1,longlong param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (((cVar1 == '\0') && (param_1[1] != 0)) && (lVar7 = *(longlong *)(param_2 + 8), lVar7 != 0)) {
    local_res18[0] = *(longlong *)(lVar7 + 0xf8);
    if (local_res18[0] != 0) {
      LOCK();
      *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
      UNLOCK();
      lVar7 = *(longlong *)(param_2 + 8);
    }
    iVar5 = (int)param_1[2];
    lVar6 = (longlong)iVar5;
    iVar4 = 0;
    if ((*(uint *)(local_res18[0] + 0x40) >> 0x16 & 1) == 0) {
      iVar4 = iVar5;
    }
    if (lVar6 < *(int *)(lVar7 + 0x78)) {
      iVar5 = iVar5 - iVar4;
      lVar7 = *(int *)(lVar7 + 0x78) - lVar6;
      plVar8 = param_1 + lVar6 + 0x1e;
      do {
        lVar6 = DAT_146b17050;
        local_res8[0] = 0;
        cVar1 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar2 = GetCurrentThreadId();
          lVar3 = 4;
          if (DVar2 == DAT_1468c21c0) goto LAB_14283744f;
        }
        else {
LAB_14283744f:
          lVar3 = 0;
        }
        lVar6 = (**(code **)(*DAT_146ab6358 + 0x580))
                          (DAT_146ab6358,&DAT_146ab6e78,param_1[1],iVar5,1,local_res8,0,
                           0 < *(int *)(lVar3 + lVar6));
        *plVar8 = lVar6;
        iVar5 = iVar5 + 1;
        plVar8 = plVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 1428374d0 FUN_1428374d0 body=219 status=ok
// SIG undefined FUN_1428374d0(void)

void FUN_1428374d0(void)

{
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_18 [3];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(local_18);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(0);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  (**(code **)(*DAT_146ab6358 + 0x380))();
  QueryPerformanceCounter(&local_res20);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_18[0]._0_4_);
  return;
}



// FUNCTION 1428375d0 FUN_1428375d0 body=414 status=ok
// SIG undefined FUN_1428375d0(void)

void FUN_1428375d0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong local_res8;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar9 = *(longlong *)(param_2 + 8), lVar9 != 0)) {
    local_res8 = *(longlong *)(lVar9 + 0xf8);
    if (local_res8 != 0) {
      LOCK();
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      UNLOCK();
      lVar9 = *(longlong *)(param_2 + 8);
    }
    iVar11 = *(int *)(param_1 + 0x10);
    lVar12 = (longlong)iVar11;
    uVar10 = 0;
    iVar2 = 0;
    if ((*(uint *)(local_res8 + 0x40) >> 0x16 & 1) == 0) {
      iVar2 = iVar11;
    }
    if (lVar12 < *(int *)(lVar9 + 0x78)) {
      iVar11 = iVar11 - iVar2;
      piVar6 = (int *)(param_1 + 0xf8 + lVar12 * 0x10);
      lVar12 = *(int *)(lVar9 + 0x78) - lVar12;
      do {
        uVar5 = uVar10;
        uVar8 = uVar10;
        if (0 < *piVar6) {
          do {
            lVar9 = DAT_146b17050;
            if (*(longlong *)(uVar5 + *(longlong *)(piVar6 + -2)) != 0) {
              cVar1 = FUN_1415ad720(&DAT_1468e2448);
              if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
                DVar3 = GetCurrentThreadId();
                uVar4 = 4;
                if (DVar3 == DAT_1468c21c0) goto LAB_1428376d6;
              }
              else {
LAB_1428376d6:
                uVar4 = uVar10;
              }
              (**(code **)(*DAT_146ab6358 + 0x5a0))
                        (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 8),uVar8,iVar11,0,
                         0 < *(int *)(uVar4 + lVar9));
              *(undefined8 *)(uVar5 + *(longlong *)(piVar6 + -2)) = 0;
            }
            uVar7 = (int)uVar8 + 1;
            uVar5 = uVar5 + 8;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < *piVar6);
        }
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  }
  return;
}



// FUNCTION 142837770 FUN_142837770 body=312 status=ok
// SIG undefined FUN_142837770(void)

void FUN_142837770(longlong param_1,longlong param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res8;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar8 = *(longlong *)(param_2 + 8), lVar8 != 0)) {
    local_res8 = *(longlong *)(lVar8 + 0xf8);
    if (local_res8 != 0) {
      LOCK();
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      UNLOCK();
      lVar8 = *(longlong *)(param_2 + 8);
    }
    iVar5 = *(int *)(param_1 + 0x10);
    lVar6 = (longlong)iVar5;
    iVar4 = 0;
    if ((*(uint *)(local_res8 + 0x40) >> 0x16 & 1) == 0) {
      iVar4 = iVar5;
    }
    if (lVar6 < *(int *)(lVar8 + 0x78)) {
      iVar5 = iVar5 - iVar4;
      plVar7 = (longlong *)(param_1 + 0xf0 + lVar6 * 8);
      lVar6 = *(int *)(lVar8 + 0x78) - lVar6;
      do {
        lVar8 = DAT_146b17050;
        if (*plVar7 != 0) {
          cVar1 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
            DVar2 = GetCurrentThreadId();
            lVar3 = 4;
            if (DVar2 == DAT_1468c21c0) goto LAB_14283783d;
          }
          else {
LAB_14283783d:
            lVar3 = 0;
          }
          (**(code **)(*DAT_146ab6358 + 0x588))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 8),iVar5,0,
                     0 < *(int *)(lVar3 + lVar8));
          *plVar7 = 0;
        }
        iVar5 = iVar5 + 1;
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  }
  return;
}



// FUNCTION 1428378b0 FUN_1428378b0 body=229 status=ok
// SIG undefined FUN_1428378b0(void)

void FUN_1428378b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  plVar3 = *(longlong **)(param_1 + 8);
  puVar7 = (ulonglong *)(plVar3 + 0x3b);
  if (puVar7 != (ulonglong *)(plVar3 + 0x57)) {
    do {
      plVar4 = (longlong *)*puVar7;
      uVar5 = (longlong)(int)puVar7[1] & 0x1fffffffffffffff;
      if (plVar4 + (int)puVar7[1] < plVar4) {
        uVar5 = 0;
      }
      uVar6 = 0;
      if (uVar5 != 0) {
        do {
          plVar2 = (longlong *)*plVar4;
          if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x73) == '\0')) {
            *(undefined1 *)((longlong)plVar2 + 0x73) = 1;
            *(undefined1 *)(plVar2 + 0xe) = 1;
            if (*(char *)((longlong)plVar2 + 0x71) == '\0') {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          plVar4 = plVar4 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar5);
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != (ulonglong *)(plVar3 + 0x57));
    plVar3 = *(longlong **)(param_1 + 8);
  }
  (**(code **)(*plVar3 + 0x38))();
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x1c);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  UNLOCK();
  return;
}



// FUNCTION 1428379a0 FUN_1428379a0 body=133 status=ok
// SIG undefined FUN_1428379a0(void)

void FUN_1428379a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  lVar4 = 0xe;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 8) + 0x168);
  do {
    plVar2 = (longlong *)*plVar3;
    if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x73) == '\0')) {
      *(undefined1 *)((longlong)plVar2 + 0x73) = 1;
      *(undefined1 *)(plVar2 + 0xe) = 1;
      if (*(char *)((longlong)plVar2 + 0x71) == '\0') {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x1c);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  UNLOCK();
  return;
}



// FUNCTION 142837a30 FUN_142837a30 body=764 status=ok
// SIG undefined FUN_142837a30(void)

void FUN_142837a30(ulonglong param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar17 = *(longlong *)(param_1 + 0x68);
  uVar18 = 0;
  lVar16 = lVar17 + 0x1b4;
  uVar11 = uVar18;
  uVar13 = uVar18;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x30) + uVar13;
      FUN_1428449a0(lVar9,param_1,*(undefined4 *)(param_1 + 0x40),lVar16);
      if (*(float *)(lVar9 + 0x18) <= *(float *)(lVar17 + 0x1e4)) {
        iVar2 = *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x60) = iVar2 + 1;
        if (*(int *)(param_1 + 100) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar2);
        }
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar2 + 1;
        if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar2);
        }
        lVar9 = *(longlong *)(param_1 + 0x48);
      }
      *(int *)(lVar9 + (longlong)iVar2 * 4) = (int)uVar11;
      uVar14 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar14;
      uVar13 = uVar13 + 0x20;
    } while ((int)uVar14 < *(int *)(param_1 + 0x38));
  }
  if (0.0 < *(float *)(lVar17 + 0x1e4)) {
    local_res8 = param_1;
    AlgoImpl::
    IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,<lambda_a15c90069571133b9c874bc1c99e287a>_>_>
              (*(undefined8 *)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x50),param_1 & 0xff,
               &local_res8);
  }
  FUN_1428449a0(param_1 + 0x10,param_1,*(undefined4 *)(param_1 + 0x40),lVar16);
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x78d);
  if (cVar1 != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x78d) = 0;
  }
  plVar10 = *(longlong **)(lVar17 + 0x10);
  plVar15 = plVar10 + (longlong)*(int *)(lVar17 + 0x18) * 0x19;
  while ((plVar10 != plVar15 && (*(char *)(param_1 + 0xa0) == '\0'))) {
    if ((cVar1 != '\0') && (*(int *)((longlong)plVar10 + 0x6c) != 2)) {
      *(undefined4 *)((longlong)plVar10 + 0x6c) = 0;
    }
    if ((((*plVar10 != 0) && ((int)plVar10[0xd] == (int)plVar10[0xb])) &&
        ((int)plVar10[0xd] < (int)plVar10[2])) && (*(int *)((longlong)plVar10 + 0x6c) == 0)) {
      *(undefined4 *)((longlong)plVar10 + 0x6c) = 1;
      plVar6 = (longlong *)FUN_1415c3d50();
      if ((int)plVar10[0xf] == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)plVar10[0xe];
      }
      cVar4 = (**(code **)(*plVar6 + 0x48))(plVar6,puVar7);
      if (cVar4 != '\0') {
        *(undefined4 *)((longlong)plVar10 + 0x6c) = 2;
      }
    }
    FUN_142846a80(param_1,plVar10,lVar16,0);
    *(undefined4 *)(plVar10 + 0x12) = 0x3f800000;
    plVar10 = plVar10 + 0x19;
  }
  FUN_142845270(param_1,&local_res18,&local_res10);
  FUN_1428462a0(param_1,local_res18,local_res10);
  lVar16 = *(longlong *)(param_1 + 0x68);
  plVar10 = (longlong *)(param_1 + 0x90);
  cVar1 = *(char *)(lVar16 + 0x78c);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar10);
  }
  uVar11 = uVar18;
  uVar13 = uVar18;
  if (0 < *(int *)(lVar16 + 0x18)) {
    do {
      if (*(char *)(param_1 + 0xa0) != '\0') break;
      lVar17 = *(longlong *)(lVar16 + 0x10);
      if ((*(int *)(param_1 + 8) < 1) && ((*(byte *)(uVar11 + 0x94 + lVar17) & 1) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar8 = uVar18;
      if ((cVar1 == '\0') &&
         ((*(int *)(uVar11 + 0x58 + lVar17) < *(int *)(uVar11 + 0xa8 + lVar17) || (!bVar3)))) {
        uVar8 = 1;
      }
      if ((*(uint *)(uVar11 + 0x84 + lVar17) >> 1 & 1) != (uint)uVar8) {
        iVar2 = *(int *)(param_1 + 0x98);
        iVar5 = iVar2 + 1;
        *(int *)(param_1 + 0x98) = iVar5;
        if (*(int *)(param_1 + 0x9c) < iVar5) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10);
        }
        *(int *)(*plVar10 + (longlong)iVar2 * 4) = (int)uVar13;
      }
      uVar14 = (int)uVar13 + 1;
      uVar11 = uVar11 + 200;
      uVar13 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(lVar16 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  lVar16 = *(longlong *)(param_1 + 0x30);
  lVar17 = (longlong)*(int *)(param_1 + 0x38) * 0x20 + lVar16;
  if (lVar16 != lVar17) {
    piVar12 = (int *)(lVar16 + 0x14);
    do {
      piVar12[-1] = 0;
      if (*piVar12 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar12 + -3,0);
      }
      lVar16 = lVar16 + 0x20;
      piVar12 = piVar12 + 8;
    } while (lVar16 != lVar17);
  }
  return;
}



// FUNCTION 142837d30 DoWork body=819 status=ok
// SIG undefined DoWork(void)

void TextureInstanceTask::FDoWorkTask::DoWork(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  
  uVar7 = 0;
  iVar10 = 1;
  uVar9 = uVar7;
  uVar8 = uVar7;
  if (0 < (int)param_1[1]) {
    do {
      iVar6 = (int)uVar9;
      lVar3 = *(longlong *)(uVar8 + *param_1);
      if (*(int *)(lVar3 + 8) == 1) {
        puVar4 = *(undefined8 **)((longlong)iVar6 * 8 + *param_1);
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        iVar2 = (int)param_1[1];
        iVar5 = (iVar2 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = iVar10;
        }
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + (longlong)iVar6 * 8),
                     (void *)(*param_1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
        iVar6 = iVar6 + -1;
        uVar8 = uVar8 - 8;
      }
      else {
        LOCK();
        bVar11 = *(int *)(lVar3 + 0x48) == 1;
        if (bVar11) {
          *(int *)(lVar3 + 0x48) = 2;
        }
        UNLOCK();
        if (bVar11) {
          FUN_1428303c0(lVar3 + 0x10,1);
          *(undefined4 *)(lVar3 + 0x48) = 3;
        }
      }
      uVar9 = (ulonglong)(iVar6 + 1U);
      uVar8 = uVar8 + 8;
    } while ((int)(iVar6 + 1U) < (int)param_1[1]);
  }
  uVar9 = uVar7;
  uVar8 = uVar7;
  if (0 < (int)param_1[7]) {
    do {
      iVar6 = (int)uVar9;
      lVar3 = *(longlong *)(param_1[6] + uVar8);
      if (*(int *)(lVar3 + 8) == 1) {
        puVar4 = *(undefined8 **)((longlong)iVar6 * 8 + param_1[6]);
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        iVar2 = (int)param_1[7];
        iVar5 = (iVar2 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = iVar10;
        }
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[6] + (longlong)iVar6 * 8),
                     (void *)(param_1[6] + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[7];
        }
        *(int *)(param_1 + 7) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 6);
        iVar6 = iVar6 + -1;
        uVar8 = uVar8 - 8;
      }
      else {
        LOCK();
        bVar11 = *(int *)(lVar3 + 0x38) == 1;
        if (bVar11) {
          *(int *)(lVar3 + 0x38) = 2;
        }
        UNLOCK();
        if (bVar11) {
          FCreateViewWithUninitializedBounds::operator()(lVar3 + 0x10,1);
          *(undefined4 *)(lVar3 + 0x38) = 3;
        }
      }
      uVar9 = (ulonglong)(iVar6 + 1U);
      uVar8 = uVar8 + 8;
    } while ((int)(iVar6 + 1U) < (int)param_1[7]);
  }
  uVar9 = uVar7;
  uVar8 = uVar7;
  if (0 < (int)param_1[3]) {
    do {
      iVar6 = (int)uVar9;
      lVar3 = *(longlong *)(param_1[2] + uVar8);
      if (*(int *)(lVar3 + 8) == 1) {
        puVar4 = *(undefined8 **)((longlong)iVar6 * 8 + param_1[2]);
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        iVar2 = (int)param_1[3];
        iVar5 = (iVar2 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = iVar10;
        }
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[2] + (longlong)iVar6 * 8),
                     (void *)(param_1[2] + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[3];
        }
        *(int *)(param_1 + 3) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 2);
        iVar6 = iVar6 + -1;
        uVar8 = uVar8 - 8;
      }
      else {
        LOCK();
        bVar11 = *(int *)(lVar3 + 0x30) == 1;
        if (bVar11) {
          *(int *)(lVar3 + 0x30) = 2;
        }
        UNLOCK();
        if (bVar11) {
          FUN_142830740(lVar3 + 0x10,1);
          *(undefined4 *)(lVar3 + 0x30) = 3;
        }
      }
      uVar9 = (ulonglong)(iVar6 + 1U);
      uVar8 = uVar8 + 8;
    } while ((int)(iVar6 + 1U) < (int)param_1[3]);
  }
  uVar9 = uVar7;
  if (0 < (int)param_1[5]) {
    do {
      iVar6 = (int)uVar7;
      lVar3 = *(longlong *)(uVar9 + param_1[4]);
      if (*(int *)(lVar3 + 8) == 1) {
        puVar4 = *(undefined8 **)((longlong)iVar6 * 8 + param_1[4]);
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        iVar2 = (int)param_1[5];
        iVar5 = (iVar2 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = iVar10;
        }
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[4] + (longlong)iVar6 * 8),
                     (void *)(param_1[4] + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[5];
        }
        *(int *)(param_1 + 5) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 4);
        iVar6 = iVar6 + -1;
        uVar9 = uVar9 - 8;
      }
      else {
        LOCK();
        bVar11 = *(int *)(lVar3 + 0x18) == 1;
        if (bVar11) {
          *(int *)(lVar3 + 0x18) = 2;
        }
        UNLOCK();
        if (bVar11) {
          FNormalizeLightmapTexelFactor::operator()(lVar3 + 0x10,1);
          *(undefined4 *)(lVar3 + 0x18) = 3;
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1U);
      uVar9 = uVar9 + 8;
    } while ((int)(iVar6 + 1U) < (int)param_1[5]);
  }
  return;
}



// FUNCTION 142838070 Empty body=130 status=ok
// SIG undefined Empty(void)

void TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::Empty
               (longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    plVar4 = (longlong *)(*param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142838100 Empty body=281 status=ok
// SIG undefined Empty(void)

void TIndirectArray<FLevelTextureManager,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  for (iVar4 = *(int *)(param_1 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar2 = *plVar5;
    *(undefined4 *)(lVar2 + 0xb0) = 0;
    if (*(longlong *)(lVar2 + 0xa8) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar2 + 0x68);
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      FMemory::Free();
    }
    *(undefined ***)(lVar2 + 0x10) = &PTR__scalar_deleting_destructor__1451c0428;
    FUN_1428441f0(lVar2 + 0x20);
    puVar3 = *(undefined8 **)(lVar2 + 0x30);
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FTextureInstanceStateTaskSync<FStaticTextureInstanceManager::FTasks>::
    ~FTextureInstanceStateTaskSync<FStaticTextureInstanceManager::FTasks>(lVar2 + 0x18);
    *(undefined ***)(lVar2 + 0x10) = &PTR_FUN_143f74a00;
    FMemory::Free(*plVar5);
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142838220 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo();
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



// FUNCTION 1428382e0 Empty body=448 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1428383b1;
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
LAB_1428383b1:
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
      lVar5 = (longlong)iStack_2c * 0x40 + *param_1;
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 1428384a0 FUN_1428384a0 body=797 status=ok
// SIG undefined FUN_1428384a0(void)

void FUN_1428384a0(char param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong *local_58;
  int local_50;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  lVar2 = (longlong)DAT_146b16380;
  if (param_1 == '\0') {
    if (DAT_146b16380 == (longlong *)0x0) {
      return;
    }
    FUN_140483870(&DAT_1464b57b8,DAT_146b16380);
    FUN_140483870(&DAT_1464b57d0,lVar2);
    local_20 = (longlong *)0x0;
    DAT_146b16380 = (longlong *)0x0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146b16388,&local_20);
    plVar6 = local_20;
    if (local_20 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar5 = local_20 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 != 1) {
      return;
    }
    (**(code **)*local_20)(local_20);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_20 + 8))(local_20,1);
    return;
  }
  plVar4 = (longlong *)operator_new(0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar5 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_144139dc0;
    plVar4[2] = (longlong)plVar5;
    plVar6 = plVar4;
  }
  local_30 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_1428385b6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar5;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
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
    }
  }
LAB_1428385b6:
  local_38 = 0;
  DAT_146b16380 = plVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146b16388,&local_30);
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  plVar6 = DAT_146b16380;
  plVar5 = (longlong *)FUN_1405317f0(&local_58,DAT_146b16380,FUN_14283da90);
  if (((int)plVar5[1] != 0) && (*plVar5 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464b57b8,local_res10,plVar5);
  }
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_142838691;
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
LAB_142838691:
  plVar6 = (longlong *)FUN_1405317f0(&local_48,plVar6,FUN_14283d080);
  if (((int)plVar6[1] != 0) && (*plVar6 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464b57d0,local_res18,plVar6);
  }
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(local_48);
  return;
}



// FUNCTION 1428387c0 FUN_1428387c0 body=175 status=ok
// SIG undefined FUN_1428387c0(void)

void FUN_1428387c0(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x100);
    if (plVar1 == (longlong *)0x0) {
      LOCK();
      bVar3 = *(int *)(param_1 + 0xf0) == 0;
      if (bVar3) {
        *(int *)(param_1 + 0xf0) = 0;
      }
      UNLOCK();
      if (!bVar3) {
        FUN_142837a30(param_1 + 8);
        LOCK();
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -1;
        UNLOCK();
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      if (cVar2 != '\0') {
        FUN_142837a30(param_1 + 8);
        LOCK();
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -1;
        UNLOCK();
        if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
          *(undefined8 *)(param_1 + 0x100) = 0;
          return;
        }
        goto LAB_14283885d;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x20))(*(longlong **)(param_1 + 0xf8),0xffffffff,0)
  ;
LAB_14283885d:
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}



// FUNCTION 142838870 FUN_142838870 body=138 status=ok
// SIG undefined FUN_142838870(void)

void FUN_142838870(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 == (longlong *)0x0) {
      LOCK();
      bVar3 = *(int *)(param_1 + 0x10) == 0;
      if (bVar3) {
        *(int *)(param_1 + 0x10) = 0;
      }
      UNLOCK();
      if (!bVar3) {
        FUN_1428378b0(param_1);
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      if (cVar2 != '\0') {
        FUN_1428378b0(param_1);
        if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
          *(undefined8 *)(param_1 + 0x20) = 0;
          return;
        }
        goto LAB_1428388eb;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),0xffffffff,0)
  ;
LAB_1428388eb:
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 142838900 FUN_142838900 body=138 status=ok
// SIG undefined FUN_142838900(void)

void FUN_142838900(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 == (longlong *)0x0) {
      LOCK();
      bVar3 = *(int *)(param_1 + 0x10) == 0;
      if (bVar3) {
        *(int *)(param_1 + 0x10) = 0;
      }
      UNLOCK();
      if (!bVar3) {
        FUN_1428379a0(param_1);
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      if (cVar2 != '\0') {
        FUN_1428379a0(param_1);
        if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
          *(undefined8 *)(param_1 + 0x20) = 0;
          return;
        }
        goto LAB_14283897b;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),0xffffffff,0)
  ;
LAB_14283897b:
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 142838990 FUN_142838990 body=194 status=ok
// SIG undefined FUN_142838990(void)

void FUN_142838990(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  
  if (param_2 != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 == (longlong *)0x0) {
      LOCK();
      bVar4 = *(int *)(param_1 + 0x18) == 0;
      if (bVar4) {
        *(int *)(param_1 + 0x18) = 0;
      }
      UNLOCK();
      if (!bVar4) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                  (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),2);
        LOCK();
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x1c);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        LOCK();
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        UNLOCK();
      }
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      if (cVar3 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                  (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),2);
        LOCK();
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x1c);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        LOCK();
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        UNLOCK();
        if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
          *(undefined8 *)(param_1 + 0x28) = 0;
          return;
        }
        goto LAB_142838a43;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(*(longlong **)(param_1 + 0x20),0xffffffff,0)
  ;
LAB_142838a43:
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 142838a80 FUN_142838a80 body=163 status=ok
// SIG undefined FUN_142838a80(void)

void FUN_142838a80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  int param_5,int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  puVar3 = (undefined4 *)*param_4;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar4 = (longlong)*(int *)(param_4 + 1) & 0x3fffffffffffffff;
  if (puVar3 + *(int *)(param_4 + 1) < puVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      FUN_142845160(uVar2,*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != uVar4);
  }
  *(undefined4 *)(lVar1 + 0x28) = param_3;
  if ((0 < *DAT_146b16f10) && (param_5 < param_6)) {
    *(int *)(lVar1 + 0x30) = param_5;
    *(int *)(lVar1 + 0x2c) = param_6;
  }
  return;
}



// FUNCTION 142838b30 Execute body=217 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(FTextureInstanceView_*),<lambda_4e6d133499cf43e335651246d2076612>_>
     ::Execute(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong local_res8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = param_2[2];
  lVar6 = *(longlong *)(lVar4 + 8);
  param_2[2] = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  uVar5 = param_2[3];
  param_2[3] = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = uVar5;
  uVar5 = param_2[4];
  param_2[4] = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x20) = uVar5;
  uVar5 = param_2[5];
  param_2[5] = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar5;
  FGenericPlatformMemory::MemswapGreaterThan8(param_2 + 6,lVar6 + 0x30,0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar6 + 0xd0);
  *(undefined4 *)(lVar6 + 0xd0) = uVar3;
  if (param_2 != (undefined8 *)0x0) {
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  }
  plVar1 = (longlong *)(lVar4 + 0x20);
  if (plVar1 == &local_res8) {
    if (param_2 == (undefined8 *)0x0) {
      return;
    }
    piVar2 = (int *)(param_2 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return;
    }
    puVar8 = (undefined8 *)*param_2;
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)param_2;
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    piVar2 = (int *)(puVar7 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return;
    }
    puVar8 = (undefined8 *)*puVar7;
    param_2 = puVar7;
  }
  (*(code *)*puVar8)(param_2,1);
  return;
}



// FUNCTION 142838c10 FUN_142838c10 body=225 status=ok
// SIG undefined FUN_142838c10(void)

void FUN_142838c10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  local_38 = *(undefined8 *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x18);
  FString::FString(local_30,param_1 + 0x28);
  (*pcVar3)(plVar7,param_2,param_3,param_4,&local_38);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 142838d00 FUN_142838d00 body=502 status=ok
// SIG undefined FUN_142838d00(void)

void FUN_142838d00(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  BOOL BVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 local_38;
  longlong *local_30;
  
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar6 != '\0')) {
    puVar8 = DAT_146b16788;
    if ((DAT_146b16788 == (undefined8 *)0x0) &&
       (puVar8 = (undefined8 *)operator_new(0x40), puVar8 != (undefined8 *)0x0)) {
      *puVar8 = &PTR__purecall_143f740d8;
      plVar9 = (longlong *)FUN_1404cfca0();
      iVar3 = (int)plVar9[1];
      *(int *)(plVar9 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar9 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      *(undefined8 **)(*plVar9 + (longlong)iVar3 * 8) = puVar8;
      *puVar8 = &PTR_FUN_1451c0398;
      puVar8[1] = 0;
      puVar8[2] = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar8 + 3));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar8 + 3),4000);
    }
    DAT_146b16788 = puVar8;
    plVar9 = (longlong *)param_2[1];
    uVar4 = *param_2;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    puVar8 = DAT_146b16788;
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b16788 + 3));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(puVar8 + 3));
    }
    iVar3 = *(int *)(puVar8 + 2);
    *(int *)(puVar8 + 2) = iVar3 + 1;
    if (*(int *)((longlong)puVar8 + 0x14) < iVar3 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(puVar8 + 1,iVar3);
    }
    lVar5 = puVar8[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_38 = uVar4;
    local_30 = plVar9;
    FUN_14282a500(lVar5 + (longlong)iVar3 * 0x28,param_1,&local_38);
    LeaveCriticalSection((LPCRITICAL_SECTION)(puVar8 + 3));
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
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
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  return;
}



// FUNCTION 142838f20 FUN_142838f20 body=165 status=ok
// SIG undefined FUN_142838f20(void)

undefined8
FUN_142838f20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             uint param_5,int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  puVar4 = (undefined4 *)*param_4;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar5 = (longlong)*(int *)(param_4 + 1) & 0x3fffffffffffffff;
  if (puVar4 + *(int *)(param_4 + 1) < puVar4) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      FUN_142845160(uVar2,*puVar4);
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != uVar5);
  }
  *(undefined4 *)(lVar1 + 0x28) = param_3;
  piVar3 = DAT_146b16f10;
  if ((0 < *DAT_146b16f10) && (piVar3 = (int *)(ulonglong)param_5, (int)param_5 < param_6)) {
    *(uint *)(lVar1 + 0x30) = param_5;
    *(int *)(lVar1 + 0x2c) = param_6;
  }
  return CONCAT71((int7)((ulonglong)piVar3 >> 8),1);
}



// FUNCTION 142838fd0 ExecuteIfSafe body=219 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseFunctorDelegateInstance<void___cdecl(FTextureInstanceView_*),<lambda_4e6d133499cf43e335651246d2076612>_>
::ExecuteIfSafe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong local_res8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = param_2[2];
  lVar6 = *(longlong *)(lVar4 + 8);
  param_2[2] = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  uVar5 = param_2[3];
  param_2[3] = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = uVar5;
  uVar5 = param_2[4];
  param_2[4] = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x20) = uVar5;
  uVar5 = param_2[5];
  param_2[5] = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar5;
  FGenericPlatformMemory::MemswapGreaterThan8(param_2 + 6,lVar6 + 0x30,0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar6 + 0xd0);
  *(undefined4 *)(lVar6 + 0xd0) = uVar3;
  if (param_2 != (undefined8 *)0x0) {
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  }
  plVar1 = (longlong *)(lVar4 + 0x20);
  if (plVar1 == &local_res8) {
    if (param_2 == (undefined8 *)0x0) {
      return 1;
    }
    piVar2 = (int *)(param_2 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return 1;
    }
    puVar8 = (undefined8 *)*param_2;
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)param_2;
    if (puVar7 == (undefined8 *)0x0) {
      return 1;
    }
    piVar2 = (int *)(puVar7 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return 1;
    }
    puVar8 = (undefined8 *)*puVar7;
    param_2 = puVar7;
  }
  (*(code *)*puVar8)(param_2,1);
  return 1;
}



// FUNCTION 1428390b0 FUN_1428390b0 body=376 status=ok
// SIG undefined FUN_1428390b0(void)

undefined8 FUN_1428390b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  plVar9 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar8 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar9[1];
    bVar10 = iVar4 == 0;
    if (bVar10) {
      *(int *)(plVar9 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar8 = plVar6, !bVar10) {
      LOCK();
      bVar10 = iVar4 == (int)plVar9[1];
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar8 = plVar9;
        if ((plVar9 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar8 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar8;
          if (plVar8 == (longlong *)0x0) goto LAB_1428391b1;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar8 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          plVar7 = plVar6;
          if (!bVar10) goto LAB_142839190;
          goto LAB_1428391b1;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar9 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = 0;
  plVar9 = plVar8;
  goto LAB_142839108;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar8[1];
    bVar10 = iVar4 == 0;
    if (bVar10) {
      *(int *)(plVar8 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar10) break;
LAB_142839190:
    LOCK();
    bVar10 = iVar4 == (int)plVar8[1];
    if (bVar10) {
      *(int *)(plVar8 + 1) = iVar4 + 1;
    }
    UNLOCK();
    if (bVar10) {
      plVar7 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        plVar6 = *(longlong **)(param_1 + 8);
      }
      break;
    }
  }
LAB_1428391b1:
  local_48 = *(undefined8 *)(param_1 + 0x20);
  pcVar2 = *(code **)(param_1 + 0x18);
  FString::FString(local_40,param_1 + 0x28);
  (*pcVar2)(plVar6,param_2,param_3,param_4,&local_48);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  uVar5 = 1;
LAB_142839108:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  return uVar5;
}



// FUNCTION 142839230 FUN_142839230 body=237 status=ok
// SIG undefined FUN_142839230(void)

void FUN_142839230(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1428374d0(param_1 + 2,param_3,param_1 + 3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_1451c0600;
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



// FUNCTION 142839320 FUN_142839320 body=277 status=ok
// SIG undefined FUN_142839320(void)

void FUN_142839320(undefined8 *param_1)

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
  (**(code **)(*(longlong *)param_1[3] + 0x20))((longlong *)param_1[3],param_1[2],1);
  LOCK();
  *(int *)(param_1[3] + 0x1c) = *(int *)(param_1[3] + 0x1c) + -1;
  UNLOCK();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1451c0740;
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



// FUNCTION 142839440 FUN_142839440 body=453 status=ok
// SIG undefined FUN_142839440(void)

int * FUN_142839440(longlong *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (int)((ulonglong)*param_3 >> 0x20) + (int)*param_3;
    uVar9 = uVar7 >> 0xd ^ -uVar7;
    uVar5 = (-0x61c88647 - uVar9) - uVar7 ^ uVar9 << 8;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 0xd;
    uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar9) - uVar7 ^ uVar9 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 5;
    uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar9) - uVar7 ^ uVar9 << 10;
    if (*(int *)(param_3 + 2) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)param_3[1];
    }
    uVar2 = FUN_140438070(puVar6);
    uVar5 = ((uVar7 - uVar5) - uVar9 ^ uVar5 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
    uVar9 = (uVar2 - uVar7) - uVar5 ^ uVar7 >> 0xd;
    uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar9 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 << 0x10;
    uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar9 >> 3;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar9 - uVar7) - uVar5) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FSoftObjectPath::operator==((longlong)iVar8 * 0x28 + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar8;
          return param_2;
        }
        lVar4 = *param_1;
        iVar8 = *(int *)((longlong)iVar8 * 0x28 + 0x20 + lVar4);
      } while (iVar8 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142839610 FindId body=445 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (int)((ulonglong)*param_3 >> 0x20) + (int)*param_3;
    uVar9 = uVar7 >> 0xd ^ -uVar7;
    uVar5 = (-0x61c88647 - uVar9) - uVar7 ^ uVar9 << 8;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 0xd;
    uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar9) - uVar7 ^ uVar9 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 5;
    uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar9) - uVar7 ^ uVar9 << 10;
    if (*(int *)(param_3 + 2) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)param_3[1];
    }
    uVar2 = FUN_140438070(puVar6);
    uVar5 = ((uVar7 - uVar5) - uVar9 ^ uVar5 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
    uVar9 = (uVar2 - uVar7) - uVar5 ^ uVar7 >> 0xd;
    uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar9 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 << 0x10;
    uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar9 >> 3;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar9 - uVar7) - uVar5) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FSoftObjectPath::operator==((longlong)iVar8 * 0x40 + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar8;
          return param_2;
        }
        lVar4 = *param_1;
        iVar8 = *(int *)((longlong)iVar8 * 0x40 + 0x38 + lVar4);
      } while (iVar8 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1428397d0 FUN_1428397d0 body=337 status=ok
// SIG undefined FUN_1428397d0(void)

void FUN_1428397d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  puVar4 = (undefined8 *)FSoftObjectPath::ToString(param_2,&local_38);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar4;
  }
  uVar5 = UObject::GetPrivateStaticClass();
  lVar6 = FUN_141799410(uVar5,0,puVar9,0);
  *param_3 = lVar6;
  if (local_38 != 0) {
    FMemory::Free();
  }
  lVar6 = *param_3;
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1b & 1) != 0) {
      *param_3 = 0;
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      lVar7 = UObjectRedirector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_38 = *param_2;
        FString::FString(local_30,param_2 + 1);
        uVar5 = FUN_14283ad90(param_1,local_20,lVar6,&local_38,param_3);
        FSoftObjectPath::operator=(param_2,uVar5);
      }
    }
  }
  if (*param_3 != 0) {
    *(undefined1 *)((longlong)param_3 + 9) = 0;
  }
  return;
}



// FUNCTION 142839930 FindStreamable body=263 status=ok
// SIG undefined FindStreamable(void)

undefined8 * FStreamableManager::FindStreamable(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res8 [2];
  undefined8 local_28;
  longlong local_20 [3];
  
  FUN_142839440(param_1 + 0x10,local_res8,param_2);
  if (((local_res8[0] == -1) ||
      (lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x28, lVar1 == 0)) ||
     (puVar2 = *(undefined8 **)(lVar1 + 0x18), puVar2 == (undefined8 *)0x0)) {
    TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x60,local_res8,param_2);
    puVar2 = (undefined8 *)0x0;
    puVar3 = puVar2;
    if (local_res8[0] != -1) {
      puVar3 = (undefined8 *)((longlong)local_res8[0] * 0x40 + *(longlong *)(param_1 + 0x60));
    }
    puVar4 = puVar3 + 3;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    if (puVar4 == (undefined8 *)0x0) {
      local_28 = *param_2;
    }
    else {
      local_28 = *puVar4;
      param_2 = puVar4;
    }
    FString::FString(local_20,param_2 + 1);
    FUN_142839440(param_1 + 0x10,local_res8,&local_28);
    if ((local_res8[0] != -1) &&
       (lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x28, lVar1 != 0)) {
      puVar2 = *(undefined8 **)(lVar1 + 0x18);
    }
    if (local_20[0] != 0) {
      FMemory::Free();
    }
  }
  return puVar2;
}



// FUNCTION 142839a40 FUN_142839a40 body=552 status=ok
// SIG undefined FUN_142839a40(void)

void FUN_142839a40(longlong *param_1,longlong param_2,longlong *param_3,char param_4,int param_5)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_2 != 0) {
    plVar1 = param_1 + 0x12a;
    plVar9 = (longlong *)*plVar1;
    plVar4 = plVar9 + (longlong)(int)param_1[299] * 4;
    if (plVar9 != plVar4) {
LAB_142839a90:
      if (*plVar9 != param_2) goto code_r0x000142839a99;
      plVar8 = (longlong *)plVar9[1];
      plVar4 = plVar8 + (int)plVar9[2];
      if (plVar8 != plVar4) {
        do {
          plVar6 = (longlong *)*param_3;
          while( true ) {
            if (plVar6 == (longlong *)*param_3 + (int)param_3[1]) {
              (**(code **)(*param_1 + 0x108))(param_1);
              goto LAB_142839aa2;
            }
            if (*plVar6 == *plVar8) break;
            plVar6 = plVar6 + 1;
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar4);
      }
      if ((*(char *)((longlong)plVar9 + 0x1c) == param_4) && ((int)plVar9[3] == param_5)) {
        return;
      }
      goto LAB_142839ada;
    }
LAB_142839aa2:
    lVar7 = param_1[299];
    iVar3 = (int)lVar7 + 1;
    *(int *)(param_1 + 299) = iVar3;
    if (*(int *)((longlong)param_1 + 0x95c) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1);
    }
    lVar5 = *plVar1;
    lVar7 = (longlong)(int)lVar7 * 0x20;
    *(undefined8 *)(lVar7 + 8 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x10 + lVar5) = 0;
    plVar9 = (longlong *)(*plVar1 + lVar7);
    *plVar9 = param_2;
LAB_142839ada:
    iVar3 = (int)param_3[1];
    if (*(int *)((longlong)plVar9 + 0x14) < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar9 + 1,iVar3);
      iVar3 = (int)param_3[1];
    }
    param_3 = (longlong *)*param_3;
    plVar1 = param_3 + iVar3;
    for (; param_3 != plVar1; param_3 = param_3 + 1) {
      lVar7 = *param_3;
      if (lVar7 != 0) {
        lVar5 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar4 = (longlong *)plVar9[1];
          iVar3 = (int)plVar9[2];
          for (plVar8 = plVar4; plVar8 != plVar4 + iVar3; plVar8 = plVar8 + 1) {
            if (*plVar8 == lVar7) {
              if ((int)((longlong)plVar8 - (longlong)plVar4 >> 3) != -1) goto LAB_142839c24;
              break;
            }
          }
          *(int *)(plVar9 + 2) = iVar3 + 1;
          if (*(int *)((longlong)plVar9 + 0x14) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9 + 1,iVar3);
          }
          *(longlong *)(plVar9[1] + (longlong)iVar3 * 8) = lVar7;
        }
      }
LAB_142839c24:
    }
    *(int *)(plVar9 + 3) = param_5;
    *(char *)((longlong)plVar9 + 0x1c) = param_4;
    FUN_14283e7e0(param_1,plVar9);
  }
  return;
code_r0x000142839a99:
  plVar9 = plVar9 + 4;
  if (plVar9 == plVar4) goto LAB_142839aa2;
  goto LAB_142839a90;
}



// FUNCTION 142839c70 FUN_142839c70 body=456 status=ok
// SIG undefined FUN_142839c70(void)

void FUN_142839c70(longlong param_1,longlong *param_2,char param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_38;
  ulonglong local_30;
  
  if (param_2 != (longlong *)0x0) {
    *(byte *)((longlong)param_2 + 0x2ee) = *(byte *)((longlong)param_2 + 0x2ee) | 0x40;
    plVar1 = (longlong *)(param_1 + 0x950);
    plVar7 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x958);
    plVar5 = plVar7 + (longlong)iVar2 * 4;
    for (; plVar7 != plVar5; plVar7 = plVar7 + 4) {
      if ((longlong *)*plVar7 == param_2) {
        if ((*(char *)((longlong)plVar7 + 0x1c) == param_3) && ((int)plVar7[3] == param_4)) {
          return;
        }
        goto LAB_142839e0a;
      }
    }
    *(int *)(param_1 + 0x958) = iVar2 + 1;
    if (*(int *)(param_1 + 0x95c) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1);
    }
    lVar3 = *plVar1;
    lVar6 = (longlong)iVar2 * 0x20;
    *(undefined8 *)(lVar6 + 8 + lVar3) = 0;
    *(undefined8 *)(lVar6 + 0x10 + lVar3) = 0;
    plVar7 = (longlong *)(*plVar1 + lVar6);
    *plVar7 = (longlong)param_2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_38,0x20);
    (**(code **)(*param_2 + 0x6a8))(param_2,&local_38,3);
    if (*(int *)((longlong)plVar7 + 0x14) < (int)local_30) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7 + 1,local_30 & 0xffffffff);
    }
    plVar1 = local_38 + (int)local_30;
    for (plVar5 = local_38; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        lVar6 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar2 = (int)plVar7[2];
          *(int *)(plVar7 + 2) = iVar2 + 1;
          if (*(int *)((longlong)plVar7 + 0x14) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 1,iVar2);
          }
          *(longlong *)(plVar7[1] + (longlong)iVar2 * 8) = lVar3;
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
LAB_142839e0a:
    *(char *)((longlong)plVar7 + 0x1c) = param_3;
    *(int *)(plVar7 + 3) = param_4;
    FUN_14283e7e0(param_1,plVar7);
  }
  return;
}



// FUNCTION 142839e40 GetAllocatedSize body=35 status=ok
// SIG undefined GetAllocatedSize(void)

int FDynamicTextureInstanceManager::GetAllocatedSize(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = FTextureInstanceState::GetAllocatedSize();
    return iVar1 + 0x168;
  }
  return 0;
}



// FUNCTION 142839e70 GetAllocatedSize body=490 status=ok
// SIG undefined GetAllocatedSize(void)

int FTextureInstanceState::GetAllocatedSize(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar4 = 0;
  iVar6 = 0;
  local_58 = 0;
  uStack_54 = 1;
  iVar3 = *(int *)(param_1 + 0xa8);
  puStack_20 = (uint *)(param_1 + 0x90);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar3 != 0) {
    puVar8 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar1 = *puVar8;
    uStack_40 = iVar4;
    local_58 = iVar4;
    while (uVar1 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar2 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar2) goto LAB_142839f3d;
      uVar1 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar1 & uVar1;
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
    local_48._4_4_ = (uStack_40 - iVar7) + 0x1f;
    if (iVar3 < local_48._4_4_) {
LAB_142839f3d:
      local_48._4_4_ = iVar3;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar2 = local_48._4_4_ < iVar3;
  local_30 = (longlong *)(param_1 + 0x80);
  local_48 = puStack_20;
  if (bVar2) {
    do {
      iVar6 = iVar4 + *(int *)((longlong)iStack_3c * 0x20 + 0x14 + *(longlong *)(param_1 + 0x80)) *
                      0xc;
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      iVar4 = iVar6;
    } while (iStack_3c < (int)local_48[6]);
  }
  iVar3 = *(int *)(param_1 + 0x144) + 0x1f;
  iVar4 = *(int *)(param_1 + 0xac) + 0x1f;
  iVar7 = *(int *)(param_1 + 0x5c) + 0x1f;
  return iVar6 + (((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) +
                  ((*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x1c) * 6) * 5 +
                   (*(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x3c)) * 3 +
                   *(int *)(param_1 + 0x8c) * 4 + *(int *)(param_1 + 0xe4)) * 2 +
                  ((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) +
                  ((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) + *(int *)(param_1 + 0x160) +
                  *(int *)(param_1 + 0x104) + *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 200) +
                 *(int *)(param_1 + 0x78)) * 4;
}



// FUNCTION 14283a060 GetAsyncView body=155 status=ok
// SIG undefined GetAsyncView(void)

longlong FDynamicTextureInstanceManager::GetAsyncView(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *local_res8;
  
  FTasks::SyncResults(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x20);
  if ((*(longlong *)(param_1 + 0x20) == 0) && (param_2 != '\0')) {
    plVar4 = (longlong *)FTextureInstanceView::CreateView(&local_res8,*(undefined8 *)(param_1 + 8));
    if (plVar1 != plVar4) {
      puVar3 = (undefined8 *)*plVar1;
      *plVar1 = *plVar4;
      *plVar4 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_res8 + 1);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return *plVar1;
}



// FUNCTION 14283a100 FUN_14283a100 body=75 status=ok
// SIG undefined FUN_14283a100(void)

undefined8 FUN_14283a100(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1428441f0(param_1 + 0x10);
  if ((*(longlong *)(param_1 + 0x20) == 0) && (param_2 != '\0')) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 0x20) = lVar1;
    uVar2 = 0;
    if (lVar1 == 0) goto LAB_14283a139;
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
LAB_14283a139:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return uVar2;
}



// FUNCTION 14283a150 FUN_14283a150 body=366 status=ok
// SIG undefined FUN_14283a150(void)

void FUN_14283a150(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_14238b970();
  fVar4 = param_2[1] - *(float *)(param_1 + 0x1d4);
  fVar2 = param_2[2] - *(float *)(param_1 + 0x1d8);
  fVar3 = *param_2 - *(float *)(param_1 + 0x1d0);
  fVar2 = (*(float *)(param_1 + 0x2d8) - SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2)) -
          param_2[6];
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_3 = fVar2;
  fVar2 = *(float *)(param_1 + 0x2d8);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_4 = fVar2;
  if (lVar1 == 0) {
    fVar2 = 3.4028235e+38;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1d4) - *(float *)(lVar1 + 0x1d4);
    fVar4 = *(float *)(param_1 + 0x1d0) - *(float *)(lVar1 + 0x1d0);
    fVar3 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x1d8);
    fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) + *(float *)(lVar1 + 0x2d8);
  }
  *param_5 = fVar2;
  if (lVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x1d8);
    fVar4 = *(float *)(param_1 + 0x1d4) - *(float *)(lVar1 + 0x1d4);
    fVar3 = *(float *)(param_1 + 0x1d0) - *(float *)(lVar1 + 0x1d0);
    *param_5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) + *(float *)(lVar1 + 0x2d8);
  }
  return;
}



// FUNCTION 14283a2c0 GetLoadedAsset body=61 status=ok
// SIG undefined GetLoadedAsset(void)

undefined8 FStreamableHandle::GetLoadedAsset(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  uVar1 = 0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_14283a300(param_1,&local_18);
  if (0 < (int)local_10) {
    uVar1 = *local_18;
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14283a300 FUN_14283a300 body=531 status=ok
// SIG undefined FUN_14283a300(void)

void FUN_14283a300(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar11 = *(longlong *)(param_1 + 0x60);
    lVar2 = lVar11 + (longlong)*(int *)(param_1 + 0x68) * 0x18;
    for (; lVar11 != lVar2; lVar11 = lVar11 + 0x18) {
      cVar5 = FStreamableHandle::IsActive(param_1);
      if (cVar5 == '\0') {
        uVar8 = FUN_141796df0(lVar11);
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar8;
      }
      else {
        plVar6 = (longlong *)
                 FStreamableManager::FindStreamable(*(undefined8 *)(param_1 + 0x90),lVar11);
        if ((plVar6 == (longlong *)0x0) || (lVar9 = *plVar6, lVar9 == 0)) {
          lVar9 = 0;
        }
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar9;
      }
    }
    plVar6 = *(longlong **)(param_1 + 0x70);
    plVar10 = plVar6 + (longlong)*(int *)(param_1 + 0x78) * 2;
    for (; plVar6 != plVar10; plVar6 = plVar6 + 2) {
      plVar4 = (longlong *)plVar6[1];
      lVar2 = *plVar6;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      lVar11 = *(longlong *)(lVar2 + 0x60);
      lVar2 = lVar11 + (longlong)*(int *)(lVar2 + 0x68) * 0x18;
      for (; lVar11 != lVar2; lVar11 = lVar11 + 0x18) {
        cVar5 = FStreamableHandle::IsActive(param_1);
        if (cVar5 == '\0') {
          uVar8 = FUN_141796df0(lVar11);
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar8;
        }
        else {
          plVar7 = (longlong *)
                   FStreamableManager::FindStreamable(*(undefined8 *)(param_1 + 0x90),lVar11);
          if ((plVar7 == (longlong *)0x0) || (lVar9 = *plVar7, lVar9 == 0)) {
            lVar9 = 0;
          }
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar9;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
    }
  }
  return;
}



// FUNCTION 14283a540 FUN_14283a540 body=1129 status=ok
// SIG undefined FUN_14283a540(void)

void FUN_14283a540(longlong param_1,longlong param_2,longlong *param_3)

{
  float *pfVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  longlong local_res10;
  int local_res20 [2];
  undefined4 local_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    lVar4 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar9 = *(longlong **)(param_1 + 0x748);
      uVar12 = 0;
      uVar13 = (longlong)*(int *)(param_1 + 0x750) & 0x1fffffffffffffff;
      if (plVar9 + *(int *)(param_1 + 0x750) < plVar9) {
        uVar13 = uVar12;
      }
      if (uVar13 != 0) {
        do {
          lVar4 = *plVar9;
          FUN_1428441f0(lVar4 + 0x20);
          lVar11 = *(longlong *)(lVar4 + 0x30);
          *(undefined4 *)(lVar4 + 0x38) = 0;
          if (lVar11 != 0) {
            iVar10 = -1;
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(lVar11 + 0x30,local_res20,local_res10);
            if (((local_res20[0] != -1) &&
                (lVar4 = *(longlong *)(lVar11 + 0x30) + (longlong)local_res20[0] * 0x18, lVar4 != 0)
                ) && (piVar5 = (int *)(lVar4 + 8), piVar5 != (int *)0x0)) {
              iVar10 = *piVar5;
            }
            if (iVar10 != -1) {
              lVar4 = *(longlong *)(lVar11 + 0x20);
              do {
                fVar14 = 0.0;
                fVar15 = 0.0;
                iVar6 = *(int *)(lVar4 + 0x10 + (longlong)iVar10 * 0x28);
                uVar8 = iVar6 >> 0x1f & 3;
                uVar3 = iVar6 + uVar8;
                iVar6 = (int)uVar3 >> 2;
                lVar4 = (longlong)(int)((uVar3 & 3) - uVar8);
                if ((iVar6 < 0) || (*(int *)(lVar11 + 0x18) <= iVar6)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  lVar7 = (longlong)iVar6 * 0xf0 + *(longlong *)(lVar11 + 0x10);
                  local_84 = *(float *)(lVar7 + lVar4 * 4);
                  fStack_80 = *(float *)(lVar7 + 0x10 + lVar4 * 4);
                  fStack_7c = *(float *)(lVar7 + 0x20 + lVar4 * 4);
                  fStack_78 = *(float *)(lVar7 + 0x60 + lVar4 * 4);
                  fVar14 = *(float *)(lVar7 + 0x70 + lVar4 * 4);
                  fVar15 = *(float *)(lVar7 + 0x80 + lVar4 * 4);
                }
                else {
                  fStack_78 = 0.0;
                  fStack_7c = 0.0;
                  fStack_80 = 0.0;
                  local_84 = 0.0;
                }
                iVar6 = (int)param_3[1];
                local_88 = CONCAT31(local_88._1_3_,1);
                *(int *)(param_3 + 1) = iVar6 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>
                  ::ResizeGrow(param_3,iVar6);
                }
                lVar4 = *param_3;
                lVar7 = (longlong)iVar6 * 0x1c;
                pfVar1 = (float *)(lVar7 + lVar4);
                *pfVar1 = local_84 - fStack_78;
                pfVar1[1] = fStack_80 - fVar14;
                pfVar1[2] = fStack_7c - fVar15;
                pfVar1[3] = fStack_78 + local_84;
                *(ulonglong *)(lVar7 + 0x10 + lVar4) =
                     CONCAT44(fVar15 + fStack_7c,fVar14 + fStack_80);
                *(undefined4 *)(lVar7 + 0x18 + lVar4) = local_88;
                lVar4 = *(longlong *)(lVar11 + 0x20);
                iVar10 = *(int *)(lVar4 + 0x20 + (longlong)iVar10 * 0x28);
              } while (iVar10 != -1);
            }
          }
          plVar9 = plVar9 + 1;
          uVar12 = uVar12 + 1;
          param_2 = local_res10;
        } while (uVar12 != uVar13);
      }
      FDynamicTextureInstanceManager::FTasks::SyncResults(param_1 + 0x6c0);
      lVar4 = *(longlong *)(param_1 + 0x6d0);
      *(undefined4 *)(param_1 + 0x6d8) = 0;
      if (lVar4 != 0) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar4 + 0x30,&local_res10,param_2);
        if ((((int)local_res10 != -1) &&
            (lVar11 = *(longlong *)(lVar4 + 0x30) + (longlong)(int)local_res10 * 0x18, lVar11 != 0))
           && ((piVar5 = (int *)(lVar11 + 8), piVar5 != (int *)0x0 &&
               (iVar10 = *piVar5, iVar10 != -1)))) {
          lVar11 = *(longlong *)(lVar4 + 0x20);
          do {
            fVar14 = 0.0;
            fVar15 = 0.0;
            iVar6 = *(int *)(lVar11 + 0x10 + (longlong)iVar10 * 0x28);
            uVar8 = iVar6 >> 0x1f & 3;
            uVar3 = iVar6 + uVar8;
            iVar6 = (int)uVar3 >> 2;
            lVar11 = (longlong)(int)((uVar3 & 3) - uVar8);
            if ((iVar6 < 0) || (*(int *)(lVar4 + 0x18) <= iVar6)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              lVar7 = (longlong)iVar6 * 0xf0 + *(longlong *)(lVar4 + 0x10);
              local_84 = *(float *)(lVar7 + lVar11 * 4);
              fStack_80 = *(float *)(lVar7 + 0x10 + lVar11 * 4);
              fStack_7c = *(float *)(lVar7 + 0x20 + lVar11 * 4);
              fStack_78 = *(float *)(lVar7 + 0x60 + lVar11 * 4);
              fVar14 = *(float *)(lVar7 + 0x70 + lVar11 * 4);
              fVar15 = *(float *)(lVar7 + 0x80 + lVar11 * 4);
            }
            else {
              fStack_78 = 0.0;
              fStack_7c = 0.0;
              fStack_80 = 0.0;
              local_84 = 0.0;
            }
            iVar6 = (int)param_3[1];
            local_88 = CONCAT31(local_88._1_3_,1);
            *(int *)(param_3 + 1) = iVar6 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
              ResizeGrow(param_3,iVar6);
            }
            lVar11 = *param_3;
            lVar7 = (longlong)iVar6 * 0x1c;
            *(undefined8 *)(lVar7 + lVar11) = CONCAT44(fStack_80 - fVar14,local_84 - fStack_78);
            ((undefined8 *)(lVar7 + lVar11))[1] = CONCAT44(fStack_78 + local_84,fStack_7c - fVar15);
            *(ulonglong *)(lVar7 + 0x10 + lVar11) = CONCAT44(fVar15 + fStack_7c,fVar14 + fStack_80);
            *(undefined4 *)(lVar7 + 0x18 + lVar11) = local_88;
            lVar11 = *(longlong *)(lVar4 + 0x20);
            iVar10 = *(int *)(lVar11 + 0x20 + (longlong)iVar10 * 0x28);
          } while (iVar10 != -1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14283a9c0 GetReferencedComponents body=401 status=ok
// SIG undefined GetReferencedComponents(void)

void FTextureInstanceState::GetReferencedComponents(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = *(int *)(param_1 + 0x140);
  local_58 = 0;
  uStack_54 = 1;
  puStack_20 = (uint *)(param_1 + 0x128);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar6 = *(uint **)(param_1 + 0x138);
    if (*(uint **)(param_1 + 0x138) == (uint *)0x0) {
      puVar6 = puStack_20;
    }
    uVar2 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar4 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar4;
      if (bVar3) goto LAB_14283aa7f;
      uVar2 = puVar6[lVar5 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
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
    if (iVar1 < local_48._4_4_) {
LAB_14283aa7f:
      local_48._4_4_ = iVar1;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar3 = local_48._4_4_ < iVar1;
  local_30 = (longlong *)(param_1 + 0x118);
  local_48 = puStack_20;
  if (bVar3) {
    do {
      iVar4 = iStack_3c;
      iVar1 = (int)param_2[1];
      lVar5 = *(longlong *)(param_1 + 0x118);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar5 + (longlong)iVar4 * 0x18);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 14283ab60 GetTexelSize body=555 status=ok
// SIG undefined GetTexelSize(void)

void FTextureInstanceAsyncView::GetTexelSize
               (longlong *param_1,undefined8 param_2,undefined8 param_3,float *param_4,
               longlong param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int local_68 [10];
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    if ((*(int *)(lVar5 + 0x88) == *(int *)(lVar5 + 0xb4)) || (param_5 != 0)) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar5 + 0x30,local_68,param_2);
      piVar9 = (int *)0x0;
      if (local_68[0] != -1) {
        piVar9 = (int *)(*(longlong *)(lVar5 + 0x30) + (longlong)local_68[0] * 0x18);
      }
      piVar6 = piVar9 + 2;
      if (piVar9 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      if (piVar6 != (int *)0x0) {
        iVar2 = *piVar6;
        while ((iVar2 != -1 && ((*param_4 <= 8192.0 && *param_4 != 8192.0 || (param_5 != 0))))) {
          lVar14 = *(longlong *)(lVar5 + 0x20);
          lVar7 = (longlong)iVar2;
          iVar2 = *(int *)(lVar14 + 0x10 + lVar7 * 0x28);
          if ((-1 < iVar2) && (iVar2 < (int)param_1[2])) {
            ProcessElement(param_1,param_1[1] + (longlong)iVar2 * 8,
                           *(undefined4 *)(lVar14 + 0x14 + lVar7 * 0x28),
                           *(undefined1 *)(lVar14 + 0x18 + lVar7 * 0x28),param_3,param_4);
            lVar14 = *(longlong *)(lVar5 + 0x20);
          }
          iVar2 = *(int *)(lVar14 + 0x20 + lVar7 * 0x28);
        }
      }
    }
    else {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(lVar5 + 0x80,local_68,param_2);
      puVar11 = (undefined8 *)0x0;
      uVar10 = 0;
      puVar8 = puVar11;
      if (local_68[0] != -1) {
        puVar8 = (undefined8 *)((longlong)local_68[0] * 0x20 + *(longlong *)(lVar5 + 0x80));
      }
      puVar12 = puVar8 + 1;
      if (puVar8 == (undefined8 *)0x0) {
        puVar12 = puVar11;
      }
      if (puVar12 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)*puVar12;
        iVar2 = *(int *)(puVar12 + 1);
        if (0 < (longlong)iVar2) {
          puVar13 = (undefined4 *)((longlong)puVar8 + 4);
          puVar12 = puVar11;
          do {
            uVar10 = (uint)puVar11;
            if (8192.0 < *param_4 || *param_4 == 8192.0) break;
            iVar3 = puVar13[-1];
            if ((-1 < iVar3) && (iVar3 < (int)param_1[2])) {
              ProcessElement(param_1,param_1[1] + (longlong)iVar3 * 8,*puVar13,
                             *(undefined1 *)(puVar13 + 1),param_3,param_4);
            }
            uVar10 = uVar10 + 1;
            puVar11 = (undefined8 *)(ulonglong)uVar10;
            puVar12 = (undefined8 *)((longlong)puVar12 + 1);
            puVar13 = puVar13 + 3;
          } while ((longlong)puVar12 < (longlong)iVar2);
        }
        if (((8192.0 < *param_4 || *param_4 == 8192.0) && (1 < (int)uVar10)) &&
           (puVar11 = (undefined8 *)((longlong)puVar8 + (longlong)(int)(uVar10 - 1) * 0xc),
           puVar8 != puVar11)) {
          uVar1 = *puVar8;
          uVar4 = *(undefined4 *)(puVar8 + 1);
          *puVar8 = *puVar11;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar11 + 1);
          *puVar11 = uVar1;
          *(undefined4 *)(puVar11 + 1) = uVar4;
        }
      }
    }
  }
  return;
}



// FUNCTION 14283ad90 FUN_14283ad90 body=823 status=ok
// SIG undefined FUN_14283ad90(void)

undefined8 *
FUN_14283ad90(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_a0 [2];
  longlong *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined1 local_38 [16];
  
  do {
    lVar2 = *param_5;
    if (lVar2 == 0) {
LAB_14283ae51:
      plVar6 = (longlong *)UObjectBaseUtility::GetPathName(*param_5,local_38,0);
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_88 = *plVar6;
      *plVar6 = 0;
      local_80 = (undefined4)plVar6[1];
      local_7c = *(undefined4 *)((longlong)plVar6 + 0xc);
      plVar6[1] = 0;
      FUN_1417978e0(&local_b8,&local_88);
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_58 = local_b8;
      FString::FString(local_50,&local_b0);
      local_70 = &local_58;
      local_78 = param_4;
      local_40 = param_3;
      FUN_142827c10(param_1 + 0x60,local_90,&local_78,0);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      plVar6 = (longlong *)(param_1 + 0x10);
      local_98 = plVar6;
      TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
      ::Remove(plVar6,param_4);
      FUN_142839440(plVar6,local_a0,&local_b8);
      plVar4 = param_5;
      if (((local_a0[0] != -1) && (lVar2 = *plVar6 + (longlong)local_a0[0] * 0x28, lVar2 != 0)) &&
         (plVar10 = (longlong *)(lVar2 + 0x18), plVar10 != (longlong *)0x0)) {
        lVar2 = *plVar10;
        iVar1 = *(int *)(lVar2 + 0x18);
        if (iVar1 != 0) {
          iVar9 = (int)param_5[3];
          if (*(int *)((longlong)param_5 + 0x1c) < iVar1 + iVar9) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_5 + 2);
            iVar9 = (int)plVar4[3];
          }
          puVar8 = *(undefined8 **)(lVar2 + 0x10);
          puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + plVar4[2]);
          iVar9 = iVar1;
          do {
            *puVar7 = *puVar8;
            lVar2 = puVar8[1];
            puVar7[1] = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 2;
            puVar8 = puVar8 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          *(int *)(plVar4 + 3) = (int)plVar4[3] + iVar1;
        }
        TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                  (*plVar10 + 0x10,0);
        plVar6 = param_5;
        lVar2 = *plVar10;
        iVar1 = *(int *)(lVar2 + 0x28);
        if (iVar1 != 0) {
          iVar9 = (int)param_5[5];
          if (*(int *)((longlong)param_5 + 0x2c) < iVar1 + iVar9) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_5 + 4);
            iVar9 = (int)plVar6[5];
          }
          puVar8 = *(undefined8 **)(lVar2 + 0x20);
          puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + plVar6[4]);
          iVar9 = iVar1;
          do {
            *puVar7 = *puVar8;
            lVar2 = puVar8[1];
            puVar7[1] = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 2;
            puVar8 = puVar8 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          *(int *)(plVar6 + 5) = (int)plVar6[5] + iVar1;
        }
        TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::Empty(*plVar10 + 0x20,0);
        lVar2 = *plVar10;
        plVar6 = local_98;
        if (lVar2 != 0) {
          FUN_14282cae0(lVar2);
          FMemory::operator_delete(lVar2,0x30);
          plVar6 = local_98;
        }
      }
      local_68 = &local_b8;
      local_60 = &param_5;
      TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FSoftObjectPath_const_&,FStreamable_*_&&>_>
                (plVar6,local_8c,&local_68,0);
      *param_2 = local_b8;
      param_2[1] = local_b0;
      *(undefined4 *)(param_2 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_a8._4_4_;
      local_a8 = 0;
      local_b0 = 0;
      goto LAB_14283b097;
    }
    lVar5 = UObjectRedirector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14283ae51;
    *param_5 = *(longlong *)(lVar2 + 0x28);
  } while (*param_5 != 0);
  *(undefined1 *)((longlong)param_5 + 9) = 1;
  *param_2 = *param_4;
  param_2[1] = 0;
  param_2[1] = param_4[1];
  param_4[1] = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_4 + 0x14);
  param_4[2] = 0;
LAB_14283b097:
  if (param_4[1] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14283b0d0 FUN_14283b0d0 body=65 status=ok
// SIG undefined FUN_14283b0d0(void)

void FUN_14283b0d0(void)

{
  longlong *plVar1;
  
  if ((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xab8) != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))();
    if (plVar1 != (longlong *)0x0) {
      *(undefined1 *)(plVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014283b108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14283b120 FUN_14283b120 body=1666 status=ok
// SIG undefined FUN_14283b120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14283b120(longlong *param_1,undefined8 param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  ulonglong local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 *local_168;
  longlong **local_160;
  undefined1 local_158 [48];
  longlong local_128 [24];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  lVar12 = DAT_146b16f58;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_180 = param_5;
  local_198 = param_4;
  local_168 = param_3;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  uVar14 = 0;
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    uVar13 = 4;
    if (DVar8 != DAT_1468c21c0) goto LAB_14283b1b3;
  }
  uVar13 = uVar14;
LAB_14283b1b3:
  uVar2 = *(undefined4 *)(uVar13 + lVar12);
  switch((char)param_1[8]) {
  case '\0':
    lVar12 = *param_1;
    if ((int)param_1[0xe] - *(int *)((longlong)param_1 + 0x9c) < *(int *)(lVar12 + 0x138)) {
      FUN_14199f410(param_1 + 0xd);
      lVar12 = *param_1;
    }
    local_190._0_4_ = 0;
    uVar6 = (uint)local_190;
    local_190._0_4_ = 0;
    if (0 < *(int *)(lVar12 + 0x138)) {
      local_160 = &local_190;
      do {
        local_168 = (undefined8 *)((longlong)(int)uVar14 * 0x10 + *(longlong *)(*param_1 + 0x130));
        FUN_1428276e0(param_1 + 0xd,&local_188,&local_168,0);
        lVar12 = *param_1;
        local_190._0_4_ = (uint)local_190 + 1;
        uVar14 = (ulonglong)(uint)local_190;
        uVar6 = (uint)local_190;
      } while ((int)(uint)local_190 < *(int *)(lVar12 + 0x138));
    }
    local_190._0_4_ = uVar6;
    *param_5 = *param_5 - (longlong)*(int *)(lVar12 + 0x138);
    *(undefined1 *)(param_1 + 8) = 1;
    puVar10 = (undefined8 *)FUN_14284d730(local_158,3,*param_1,param_1 + 0xd);
    puVar5 = param_3 + 3;
    *param_3 = *puVar10;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar10 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar10 + 0xc);
    param_3[2] = puVar10[2];
    if (puVar5 != puVar10 + 3) {
      iVar9 = *(int *)(puVar10 + 4);
      _Src = (void *)puVar10[3];
      *(int *)(param_3 + 4) = iVar9;
      if ((iVar9 == 0) && (*(int *)((longlong)param_3 + 0x24) == 0)) {
        *(undefined4 *)((longlong)param_3 + 0x24) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5,iVar9);
        _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar9 << 4);
      }
    }
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(puVar10 + 5);
    *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)((longlong)puVar10 + 0x2c);
    FUN_14284e370(local_158);
    break;
  case '\x01':
    lVar12 = *param_1;
    plVar15 = *(longlong **)(lVar12 + 0xa0);
    plVar11 = plVar15 + *(int *)(lVar12 + 0xa8);
    local_190 = plVar11;
    if (plVar15 != plVar11) {
      do {
        uVar14 = 0;
        lVar12 = *plVar15;
        if (lVar12 != 0) {
          local_170 = plVar15;
          local_198 = FUN_142235f50(lVar12);
          local_68 = (longlong *)0x0;
          local_60 = 0;
          FUN_140725150(lVar12,local_128,0);
          plVar11 = local_128;
          if (local_68 != (longlong *)0x0) {
            plVar11 = local_68;
          }
          uVar13 = (longlong)(int)local_60 & 0x1fffffffffffffff;
          if (plVar11 + (int)local_60 < plVar11) {
            uVar13 = 0;
          }
          cVar7 = local_198;
          local_188 = uVar13;
          if (uVar13 != 0) {
            do {
              lVar12 = *plVar11;
              if ((cVar7 == '\0') || (*(char *)(lVar12 + 0x24e) != '\0')) {
                *(byte *)(lVar12 + 0x2ee) = *(byte *)(lVar12 + 0x2ee) & 0xfb;
                if ((*(byte *)(lVar12 + 0x2ee) & 0x10) == 0) {
                  FUN_142831570(param_2,lVar12,param_3,0);
                  uVar13 = local_188;
                  cVar7 = local_198;
                }
              }
              else {
                *(byte *)(lVar12 + 0x2ee) = *(byte *)(lVar12 + 0x2ee) | 4;
                if ((*(byte *)(lVar12 + 0x2ee) & 0x10) != 0) {
                  FUN_14283f430(param_2,lVar12);
                  *(byte *)(lVar12 + 0x2ee) = *(byte *)(lVar12 + 0x2ee) & 0xef;
                }
                iVar9 = (int)param_1[10];
                *(int *)(param_1 + 10) = iVar9 + 1;
                if (*(int *)((longlong)param_1 + 0x54) < iVar9 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (param_1 + 9,iVar9);
                }
                *(longlong *)(param_1[9] + (longlong)iVar9 * 8) = lVar12;
                uVar13 = local_188;
                param_3 = local_168;
                cVar7 = local_198;
              }
              plVar11 = plVar11 + 1;
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar13);
            plVar15 = local_170;
          }
          param_5 = local_180;
          iVar9 = 1;
          if (0 < (int)local_60) {
            iVar9 = (int)local_60;
          }
          *local_180 = *local_180 - (longlong)iVar9;
          plVar11 = local_190;
          if (local_68 != (longlong *)0x0) {
            FMemory::Free();
            plVar11 = local_190;
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar11);
      lVar12 = *param_1;
    }
    iVar9 = 1;
    if (0 < *(int *)(lVar12 + 0xa8)) {
      iVar9 = *(int *)(lVar12 + 0xa8);
    }
    *param_5 = *param_5 - (longlong)iVar9;
    *(byte *)(*param_1 + 0x204) = *(byte *)(*param_1 + 0x204) | 8;
    *(undefined1 *)(param_1 + 8) = 2;
    break;
  case '\x02':
    bVar3 = *(byte *)(*param_1 + 0x204);
    while ((param_4 != '\0' || (0 < *param_5))) {
      iVar9 = (int)param_1[10];
      if (iVar9 == 0) goto LAB_14283b5a4;
      lVar12 = *(longlong *)(param_1[9] + -8 + (longlong)iVar9 * 8);
      *(int *)(param_1 + 10) = iVar9 + -1;
      if (param_1[6] == 0) {
        FUN_1428441f0(param_1 + 4);
        cVar7 = FUN_142831aa0(param_1[3],lVar12,param_3,uVar2);
        if (cVar7 == '\0') goto LAB_14283b55c;
        if (cVar7 != '\x02') goto LAB_14283b536;
LAB_14283b557:
        *param_5 = *param_5 + -1;
      }
      else {
LAB_14283b55c:
        if ((bVar3 & 0x10) != 0) {
LAB_14283b536:
          *(byte *)(lVar12 + 0x2ee) = *(byte *)(lVar12 + 0x2ee) & 0xfb;
          if ((*(byte *)(lVar12 + 0x2ee) & 0x10) == 0) {
            FUN_142831570(param_2,lVar12,param_3,0);
          }
          goto LAB_14283b557;
        }
        lVar4 = param_1[0xc];
        iVar9 = (int)lVar4 + 1;
        *(int *)(param_1 + 0xc) = iVar9;
        if (*(int *)((longlong)param_1 + 100) < iVar9) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
        }
        *(longlong *)(param_1[0xb] + (longlong)(int)lVar4 * 8) = lVar12;
        *param_5 = *param_5 + -1;
        param_3 = local_168;
        param_4 = local_198;
      }
    }
    if ((int)param_1[10] != 0) {
      return;
    }
LAB_14283b5a4:
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
    }
    *(undefined1 *)(param_1 + 8) = 3;
    break;
  case '\x03':
    if (param_1[6] == 0) {
      FUN_1428441f0(param_1 + 4);
      lVar12 = param_1[3];
      if (0 < *(int *)(lVar12 + 0xe0)) {
        lVar4 = param_1[5];
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = lVar12;
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        *(undefined4 *)(lVar4 + 0x18) = 1;
      }
    }
    *(undefined1 *)(param_1 + 8) = 4;
    break;
  case '\x04':
    FUN_1428441f0(param_1 + 4);
    iVar9 = FTextureInstanceState::CompileElements(param_1[3]);
    *param_5 = *param_5 - (longlong)iVar9;
    *(undefined1 *)(param_1 + 8) = 5;
    break;
  case '\x05':
    if ((*(byte *)(*param_1 + 0x204) & 0x10) != 0) {
      local_180 = (longlong *)0x0;
      local_178 = 0;
      FUN_1428441f0(param_1 + 4);
      iVar9 = FUN_142834430(param_1[3],&local_180);
      *param_5 = *param_5 - (longlong)iVar9;
      lVar12 = *param_5;
      uVar13 = (ulonglong)((longlong)(local_180 + (int)local_178) + (7 - (longlong)local_180)) >> 3;
      if (local_180 + (int)local_178 < local_180) {
        uVar13 = uVar14;
      }
      plVar11 = local_180;
      if (uVar13 != 0) {
        do {
          lVar12 = *plVar11;
          *(byte *)(lVar12 + 0x2ee) = *(byte *)(lVar12 + 0x2ee) & 0xfb;
          if ((*(byte *)(lVar12 + 0x2ee) & 0x10) == 0) {
            FUN_142831570(param_2,lVar12,param_3,0);
          }
          uVar14 = uVar14 + 1;
          plVar11 = plVar11 + 1;
        } while (uVar14 != uVar13);
        lVar12 = *param_5;
      }
      *param_5 = lVar12 - (int)param_1[0xc];
      iVar9 = (int)param_1[0xc];
      while (iVar9 != 0) {
        lVar12 = *(longlong *)(param_1[0xb] + -8 + (longlong)(int)param_1[0xc] * 8);
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + -1;
        if (param_1[6] == 0) {
          FUN_1428441f0(param_1 + 4);
          cVar7 = FUN_142831aa0(param_1[3],lVar12,param_3,uVar2);
          if (cVar7 != '\x02') goto LAB_14283b719;
        }
        else {
LAB_14283b719:
          *(byte *)(lVar12 + 0x2ee) = *(byte *)(lVar12 + 0x2ee) & 0xfb;
          if ((*(byte *)(lVar12 + 0x2ee) & 0x10) == 0) {
            FUN_142831570(param_2,lVar12,param_3,0);
          }
        }
        iVar9 = (int)param_1[0xc];
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)((longlong)param_1 + 100) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
      }
      TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
      ::Empty(param_1 + 0xd,0);
      *(undefined1 *)(param_1 + 8) = 6;
      if (local_180 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14283b7c0 FUN_14283b7c0 body=926 status=ok
// SIG undefined FUN_14283b7c0(void)

void FUN_14283b7c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  int local_res20 [2];
  longlong *in_stack_fffffffffffffef8;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [96];
  
  FDynamicTextureInstanceManager::FTasks::SyncResults(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(int *)(param_1 + 0x2c) != -1) && (*(int *)(param_1 + 0x30) != -1)) {
    cVar5 = FTextureInstanceState::MoveBound(lVar2);
    if (cVar5 != '\0') {
      FTextureInstanceState::TrimBounds(lVar2);
    }
    *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  }
  FUN_1428274f0(param_1 + 0x50,(ulonglong *)(param_1 + 0x38));
  plVar13 = *(longlong **)(param_1 + 0x38);
  uVar11 = 0;
  iVar9 = *(int *)(param_1 + 0x40);
  uVar12 = (longlong)iVar9 & 0x1fffffffffffffff;
  if (plVar13 + iVar9 < plVar13) {
    uVar12 = uVar11;
  }
  if (uVar12 != 0) {
    do {
      lVar8 = *plVar13;
      FTextureInstanceState::RemoveComponent(lVar2,lVar8);
      pbVar1 = (byte *)(lVar8 + 0x2ee);
      *pbVar1 = *pbVar1 & 0xd7;
      plVar13 = plVar13 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar12);
    iVar9 = *(int *)(param_1 + 0x40);
  }
  uVar4 = local_res8[0];
  uVar11 = 0;
  plVar13 = *(longlong **)(param_1 + 0x38);
  uVar12 = (longlong)iVar9 & 0x1fffffffffffffff;
  if (plVar13 + iVar9 < plVar13) {
    uVar12 = uVar11;
  }
  local_d0 = uVar12;
  if (uVar12 != 0) {
    do {
      lVar8 = 0;
      lVar3 = *plVar13;
      if ((*(byte *)(lVar3 + 0x2ee) & 8) == 0) {
        uVar6 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar10 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar10 = uVar10 - 0x10000;
          }
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar10 * 0x18;
        }
        if (((((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) && ((*(uint *)(lVar3 + 8) & 0x18000) == 0))
            && ((*(byte *)(lVar3 + 0xb8) & 1) != 0)) &&
           (((*(byte *)(lVar3 + 0xb8) & 2) == 0 || (*(longlong *)(lVar3 + 0x640) != 0)))) {
          FUN_14284d810(local_98,3,lVar3);
          local_c8 = 0;
          local_c0 = 0;
          FUN_14238d9b0(lVar3,local_98);
          uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
          if ((int)local_c0 == 0) {
            if (local_c8 != 0) {
              FMemory::Free();
            }
          }
          else {
            local_res8[0] = 0;
            AlgoImpl::
            IntroSortInternal<FStreamingTexturePrimitiveInfo,FIdentityFunctor,TDereferenceWrapper<FStreamingTexturePrimitiveInfo,<lambda_a3e892bf33f9075688d03348464c6441>_>_>
                      (local_c8,(longlong)(int)local_c0,uVar4,local_res8);
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(lVar2 + 0x118,local_res20,lVar3);
            if (local_res20[0] == -1) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(longlong *)(lVar2 + 0x118) + (longlong)local_res20[0] * 0x18;
            }
            local_d8 = lVar8 + 8;
            if (lVar8 == 0) {
              local_d8 = 0;
            }
            local_ac = 0x3f800000;
            local_b8 = *(undefined4 *)(lVar3 + 0x1d0);
            local_b4 = *(undefined4 *)(lVar3 + 0x1d4);
            local_b0 = *(undefined4 *)(lVar3 + 0x1d8);
            local_a8 = local_c8;
            local_a0 = (int)local_c0;
            uVar7 = FTextureInstanceState::AddBounds
                              (lVar2,(undefined4 *)(lVar3 + 0x1d0),0xffff0000,lVar3,
                               CONCAT44(uVar7,*(undefined4 *)(lVar3 + 0x370)),&local_b8,0,0,
                               0x7f7fffff);
            in_stack_fffffffffffffef8 = &local_d8;
            FUN_142832830(lVar2,lVar3,&local_a8,uVar7,in_stack_fffffffffffffef8);
            if (local_c8 != 0) {
              FMemory::Free();
            }
            *(byte *)(lVar3 + 0x2ee) = *(byte *)(lVar3 + 0x2ee) | 8;
            uVar12 = local_d0;
          }
          FUN_14284e370(local_98);
        }
      }
      plVar13 = plVar13 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar12);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x44)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  FDynamicTextureInstanceManager::Refresh(param_1,param_3);
  return;
}



// FUNCTION 14283bb60 FUN_14283bb60 body=511 status=ok
// SIG undefined FUN_14283bb60(void)

void FUN_14283bb60(longlong *param_1,undefined8 param_2,longlong param_3,int *param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  longlong *local_68;
  undefined1 local_60 [4];
  uint local_5c;
  longlong local_58;
  uint local_50;
  int local_4c;
  undefined1 local_40 [56];
  
  cVar7 = (char)param_1[8];
  if (cVar7 != '\x06') {
    if (((*(byte *)(*param_1 + 0x204) & 0x10) != 0) || ((cVar7 != '\x05' && (0 < *param_4)))) {
      FUN_14284d730(local_40,3,*param_1,param_1 + 0xd);
      lVar8 = *param_1;
      while( true ) {
        FUN_14283b120(param_1,param_2,local_40,*(byte *)(lVar8 + 0x204) >> 4 & 1,param_4);
        if ((char)param_1[8] == '\x06') break;
        lVar8 = *param_1;
        if (((*(byte *)(lVar8 + 0x204) & 0x10) == 0) &&
           (((char)param_1[8] == '\x05' || (*param_4 < 1)))) break;
      }
      FUN_14284e370(local_40);
      cVar7 = (char)param_1[8];
    }
    if (cVar7 != '\x06') {
      return;
    }
  }
  if ((*(byte *)(*param_1 + 0x204) & 0x10) == 0) {
    if ((char)param_1[1] != '\0') {
      FUN_1428441f0(param_1 + 4);
      FTextureInstanceView::FTextureIterator::FTextureIterator(&local_68,param_1[3]);
      if (local_4c < *(int *)(local_58 + 0x18)) {
        do {
          iVar3 = *(int *)(param_3 + 0x68);
          uVar6 = *(undefined8 *)(*local_68 + (longlong)local_4c * 0x18);
          *(int *)(param_3 + 0x68) = iVar3 + 1;
          if (*(int *)(param_3 + 0x6c) < iVar3 + 1) {
            TArray<UTexture2D_const_*,TInlineAllocator<12,FDefaultAllocator>_>::ResizeGrow
                      (param_3,iVar3);
          }
          lVar8 = *(longlong *)(param_3 + 0x60);
          if (*(longlong *)(param_3 + 0x60) == 0) {
            lVar8 = param_3;
          }
          local_50 = local_50 & ~local_5c;
          *(undefined8 *)(lVar8 + (longlong)iVar3 * 8) = uVar6;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_60);
        } while (local_4c < *(int *)(local_58 + 0x18));
      }
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
    FUN_1428441f0(param_1 + 4);
    lVar8 = param_1[3];
    iVar3 = (int)param_1[7];
    iVar2 = *(int *)(lVar8 + 0xe0);
    if (iVar3 < iVar2) {
      lVar4 = param_1[4];
      iVar9 = iVar3 - ((int)ROUND(-0.5 - ((float)iVar2 * param_5 + (float)iVar2 * param_5)) >> 1);
      if (iVar2 <= iVar9) {
        iVar9 = iVar2;
      }
      puVar5 = *(undefined8 **)(lVar4 + 0x20);
      *(longlong *)(lVar4 + 0x20) = lVar8;
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      *(int *)(lVar4 + 0x28) = iVar3;
      *(int *)(lVar4 + 0x2c) = iVar9;
      *(undefined4 *)(lVar4 + 0x30) = 1;
    }
  }
  return;
}



// FUNCTION 14283bd60 FUN_14283bd60 body=357 status=ok
// SIG undefined FUN_14283bd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14283bd60(longlong param_1,undefined4 param_2,char param_3)

{
  BOOL BVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0 [96];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar3 = 0;
  local_50 = 0;
  local_48 = 0;
  local_b8 = (longlong)*DAT_146b16ef8;
  if (local_b8 < 1) {
    local_b8 = 0x7fffffffffffffff;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x970));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x970));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x748);
  uVar4 = (longlong)*(int *)(param_1 + 0x750) & 0x1fffffffffffffff;
  if (puVar2 + *(int *)(param_1 + 0x750) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      local_c0 = *(undefined1 *)(param_1 + 0x760);
      local_c8 = param_2;
      FUN_14283bb60(*puVar2,param_1 + 0x6b0,local_b0,&local_b8);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x970));
  if ((param_3 != '\0') && (*(char *)(param_1 + 0x760) != '\0')) {
    FUN_14283b7c0(param_1 + 0x6b0,local_b0,param_2);
  }
  FUN_142842e80(param_1,local_b0);
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14283bed0 FUN_14283bed0 body=623 status=ok
// SIG undefined FUN_14283bed0(void)

void FUN_14283bed0(longlong *param_1,longlong *param_2,undefined4 param_3,ulonglong *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong local_58;
  longlong local_50 [5];
  
  puVar9 = (undefined8 *)0x0;
  if (param_1 != param_2) {
    TArray<FStreamingViewInfo,FDefaultAllocator>::CopyToEmpty<FStreamingViewInfo>
              (param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  puVar10 = param_5;
  *(undefined4 *)(param_1 + 8) = param_3;
  FDynamicTextureInstanceManager::FTasks::SyncResults(param_5 + 2);
  plVar1 = puVar10 + 4;
  if (puVar10[4] == 0) {
    plVar5 = (longlong *)FTextureInstanceView::CreateView(&param_5,puVar10[1]);
    if (plVar1 != plVar5) {
      puVar7 = (undefined8 *)*plVar1;
      *plVar1 = *plVar5;
      *plVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar7 + 1);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
    if (param_5 != (undefined8 *)0x0) {
      piVar2 = (int *)(param_5 + 1);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*param_5)(param_5,1);
      }
    }
  }
  puVar7 = (undefined8 *)*plVar1;
  *(undefined4 *)(puVar10 + 5) = 0;
  if (puVar7 != (undefined8 *)0x0) {
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  }
  plVar1 = param_1 + 2;
  if (plVar1 != &local_58) {
    puVar10 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)puVar7;
    puVar7 = puVar9;
    if (puVar10 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar10 + 1);
      *piVar2 = *piVar2 + -1;
      puVar7 = (undefined8 *)0x0;
      if (*piVar2 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  }
  plVar1 = param_1 + 3;
  if (plVar1 != local_50) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = 0;
    param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0x7f7fffff;
  if (puVar7 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar7 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  plVar1 = param_1 + 6;
  TArray<FTextureInstanceAsyncView,FDefaultAllocator>::Reset(plVar1,0);
  *(undefined4 *)(param_1 + 10) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x54)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(int *)((longlong)param_1 + 100) < 0) && (*(int *)((longlong)param_1 + 100) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
  }
  plVar5 = (longlong *)*param_4;
  puVar10 = (undefined8 *)((longlong)(int)param_4[1] & 0x1fffffffffffffff);
  if (plVar5 + (int)param_4[1] < plVar5) {
    puVar10 = puVar9;
  }
  if (puVar10 != (undefined8 *)0x0) {
    do {
      plVar6 = (longlong *)*plVar5;
      if ((((char)plVar6[1] != '\0') && ((*(byte *)(*plVar6 + 0x204) & 0x10) != 0)) &&
         (0 < *(int *)(plVar6[3] + 0xe0))) {
        FUN_1428441f0(plVar6 + 4);
        lVar8 = plVar6[6];
        if (lVar8 == 0) {
          lVar4 = plVar6[3];
          plVar6[6] = lVar4;
          lVar8 = 0;
          if (lVar4 != 0) {
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            lVar8 = plVar6[6];
          }
        }
        *(undefined4 *)(plVar6 + 7) = 0;
        if (lVar8 != 0) {
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        }
        iVar3 = (int)param_1[7];
        *(int *)(param_1 + 7) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x3c) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar1,iVar3);
        }
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *plVar1);
        *plVar6 = lVar8;
        plVar6[1] = 0;
        plVar6[2] = 0;
        *(undefined4 *)(plVar6 + 3) = 0x7f7fffff;
      }
      plVar5 = plVar5 + 1;
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
    } while (puVar9 != puVar10);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14283c140 IsActive body=18 status=ok
// SIG undefined IsActive(void)

undefined1 FStreamableHandle::IsActive(longlong param_1)

{
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14283c180 IsDone body=93 status=ok
// SIG undefined IsDone(void)

undefined8 FAsyncTask<FAsyncSaveTask>::IsDone(longlong param_1)

{
  bool bVar1;
  
  LOCK();
  bVar1 = *(int *)(param_1 + 0xf0) == 0;
  if (bVar1) {
    *(int *)(param_1 + 0xf0) = 0;
  }
  UNLOCK();
  if (bVar1) {
    if (*(longlong *)(param_1 + 0x100) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x20))
                (*(longlong **)(param_1 + 0xf8),0xffffffff,0);
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14283c1e0 FUN_14283c1e0 body=120 status=ok
// SIG undefined FUN_14283c1e0(void)

undefined8 FUN_14283c1e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 local_res10 [24];
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x2ee) & 8) != 0)) {
    piVar2 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(*(longlong *)(param_1 + 8) + 0x118,local_res10,param_2);
    if (*piVar2 != -1) {
      return 1;
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    plVar1 = plVar3 + *(int *)(param_1 + 0x40);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14283c260 IsReferenced body=39 status=ok
// SIG undefined IsReferenced(void)

bool FStaticTextureInstanceManager::IsReferenced(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 local_res8 [32];
  
  piVar1 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(*(longlong *)(param_1 + 8) + 0x118,local_res8,param_2);
  return *piVar1 != -1;
}



// FUNCTION 14283c290 FUN_14283c290 body=659 status=ok
// SIG undefined FUN_14283c290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14283c290(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 (*param_4) [16])

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined1 local_a8 [16];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60 [2];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar8 = (undefined8 *)FSoftObjectPath::ToString(param_2,local_50);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(local_60,L"LoadSynchronous of %s",puVar12);
  local_88 = *param_2;
  FString::FString(local_80,param_2 + 1);
  uVar11 = 0;
  local_b0 = 1;
  local_b8 = (undefined8 *)0x0;
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_b8,1,0);
  *local_b8 = local_88;
  FString::FString(local_b8 + 1,local_80);
  cVar6 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  if (((cVar6 == '\0') && (cVar6 = FUN_1416fbb40(), cVar6 == '\0')) &&
     (cVar6 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)(), cVar6 != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = uVar7;
  local_d0 = local_60;
  local_70 = 0;
  local_d8 = 0;
  local_e8 = 100;
  local_68 = 0;
  local_e0 = param_3;
  FUN_142840b00(param_1,&local_c8,&local_b8,&local_70);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (local_c8 != 0) {
    FUN_142847970(local_c8,0);
  }
  puVar8 = local_b8;
  if (local_b0 != 0) {
    plVar9 = local_b8 + 1;
    iVar10 = local_b0;
    do {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (puVar8 != (undefined8 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (param_4 != (undefined1 (*) [16])0x0) {
    local_a8._8_8_ = plStack_c0;
    local_a8._0_8_ = local_c8;
    uVar2 = (undefined4)((ulonglong)local_c8 >> 0x20);
    uVar3 = (undefined4)((ulonglong)plStack_c0 >> 0x20);
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
    }
    if (&local_a8 != param_4) {
      local_a8 = *param_4;
      *(int *)*param_4 = (int)local_c8;
      *(undefined4 *)(*param_4 + 4) = uVar2;
      *(int *)(*param_4 + 8) = (int)plStack_c0;
      *(undefined4 *)(*param_4 + 0xc) = uVar3;
      local_40 = (int)local_c8;
      uStack_3c = uVar2;
      uStack_38 = (int)plStack_c0;
      uStack_34 = uVar3;
    }
    uVar5 = local_a8._8_8_;
    if ((undefined8 *)local_a8._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8._8_8_ + 8);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_a8._8_8_)(local_a8._8_8_);
        LOCK();
        piVar1 = (int *)(uVar5 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*(longlong *)local_a8._8_8_ + 8))(local_a8._8_8_,1);
        }
      }
    }
  }
  if (local_c8 != 0) {
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_14283a300(local_c8,&local_98);
    if ((int)local_90 < 1) {
      if (local_98 == (undefined8 *)0x0) goto LAB_14283c4cd;
    }
    else {
      uVar11 = *local_98;
    }
    FMemory::Free();
  }
LAB_14283c4cd:
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_c0 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_c0 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  return uVar11;
}



// FUNCTION 14283c530 MoveBound body=481 status=ok
// SIG undefined MoveBound(void)

ulonglong FTextureInstanceState::MoveBound(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_RAX;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res18 [2];
  
  lVar9 = (longlong)param_2;
  if (-1 < param_3) {
    uVar2 = *(uint *)(param_1 + 0xe0);
    in_RAX = (ulonglong)uVar2;
    if ((((param_3 < (int)uVar2) && (-1 < param_2)) && (param_2 < (int)uVar2)) &&
       ((in_RAX = *(ulonglong *)(param_1 + 0xd8), *(longlong *)(in_RAX + (longlong)param_3 * 8) == 0
        && (*(longlong *)(in_RAX + lVar9 * 8) != 0)))) {
      piVar6 = *(int **)(param_1 + 0xe8);
      in_RAX = (ulonglong)*(int *)(param_1 + 0xf0);
      for (piVar4 = piVar6; piVar4 != piVar6 + in_RAX; piVar4 = piVar4 + 1) {
        if (*piVar4 == param_3) {
          iVar3 = (int)((longlong)piVar4 - (longlong)piVar6 >> 2);
          if (iVar3 != -1) {
            piVar6[iVar3] = param_2;
            lVar8 = *(longlong *)(param_1 + 0xd8);
            uVar1 = *(undefined8 *)(lVar8 + lVar9 * 8);
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0x118,local_res18,uVar1);
            piVar6 = (int *)0x0;
            if (local_res18[0] != -1) {
              piVar6 = (int *)(*(longlong *)(param_1 + 0x118) + (longlong)local_res18[0] * 0x18);
            }
            piVar4 = piVar6 + 2;
            if (piVar6 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            if ((piVar4 != (int *)0x0) && (iVar3 = *piVar4, iVar3 != -1)) {
              do {
                lVar5 = (longlong)iVar3;
                lVar8 = *(longlong *)(param_1 + 0x20);
                if (*(int *)(lVar8 + 0x10 + lVar5 * 0x28) == param_2) {
                  *(int *)(lVar8 + 0x10 + lVar5 * 0x28) = param_3;
                }
                iVar3 = *(int *)(lVar8 + 0x24 + lVar5 * 0x28);
              } while (iVar3 != -1);
              lVar8 = *(longlong *)(param_1 + 0xd8);
            }
            *(undefined8 *)(lVar8 + (longlong)param_3 * 8) = uVar1;
            *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + lVar9 * 8) = 0;
            FUN_142845160(param_1,param_3);
            uVar7 = param_2 >> 0x1f & 3;
            uVar2 = param_2 + uVar7;
            iVar3 = (uVar2 & 3) - uVar7;
            lVar9 = (longlong)iVar3;
            lVar8 = (longlong)((int)uVar2 >> 2) * 0xf0 + *(longlong *)(param_1 + 0x10);
            *(undefined4 *)(lVar8 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x10 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x20 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x30 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x40 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x50 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x60 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x70 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x80 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0x90 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0xa0 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0xb0 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0xc0 + lVar9 * 4) = 0;
            *(undefined4 *)(lVar8 + 0xd0 + lVar9 * 4) = 0x7f7fffff;
            *(undefined4 *)(lVar8 + 0xe0 + lVar9 * 4) = 0xff7fffff;
            return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
          }
          break;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14283c720 FUN_14283c720 body=1324 status=ok
// SIG undefined FUN_14283c720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14283c720(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_208 [32];
  int local_1e8 [2];
  longlong *local_1e0;
  longlong local_1d8;
  undefined1 *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined1 local_198 [96];
  undefined1 *local_138;
  undefined8 local_130;
  longlong local_128 [24];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar12 = 0;
  local_138 = (undefined1 *)0x0;
  local_130 = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_1c8 = param_1;
  FUN_140725150(param_2,local_128,0);
  lVar8 = (longlong)(int)local_60;
  local_1a0 = 0;
  if ((int)local_60 != 0) {
    plVar7 = local_128;
    if (local_68 != (longlong *)0x0) {
      plVar7 = local_68;
    }
    bVar21 = *plVar7 != 0;
    uVar11 = uVar12;
    plVar7 = local_68;
    uVar18 = uVar12;
    do {
      iVar15 = (int)uVar11;
      uVar12 = uVar12 + 1;
      uVar11 = (ulonglong)(iVar15 + 1);
      if ((longlong)uVar12 < lVar8) {
        plVar10 = local_128;
        if (plVar7 != (longlong *)0x0) {
          plVar10 = plVar7;
        }
        plVar10 = plVar10 + uVar12;
        do {
          if (bVar21 != (*plVar10 != 0)) break;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar12 = uVar12 + 1;
          plVar10 = plVar10 + 1;
        } while ((longlong)uVar12 < lVar8);
      }
      iVar20 = (int)uVar11 - iVar15;
      if (bVar21 != false) {
        iVar17 = (int)uVar18;
        if (iVar17 != iVar15) {
          plVar10 = local_128;
          if (plVar7 != (longlong *)0x0) {
            plVar10 = plVar7;
          }
          _guard_xfg_dispatch_icall_nop(plVar10 + iVar17,plVar10 + iVar15,(longlong)iVar20 << 3);
          plVar7 = local_68;
        }
        uVar18 = (ulonglong)(uint)(iVar17 + iVar20);
      }
      bVar21 = (bool)(bVar21 ^ 1);
    } while ((longlong)uVar12 < lVar8);
    local_60 = CONCAT44(local_60._4_4_,(int)uVar18);
  }
  lVar8 = AActor::GetLevel(param_2);
  local_1e0 = *(longlong **)(local_1c8 + 0x748);
  plVar7 = local_1e0 + *(int *)(local_1c8 + 0x750);
  plVar10 = local_68;
  local_1d8 = lVar8;
  local_1c0 = plVar7;
  if (local_1e0 != plVar7) {
    do {
      uVar12 = 0;
      plVar1 = (longlong *)*local_1e0;
      if ((lVar8 == 0) || (*plVar1 == lVar8)) {
        plVar19 = local_128;
        if (plVar10 != (longlong *)0x0) {
          plVar19 = plVar10;
        }
        uVar11 = (longlong)(int)local_60 & 0x1fffffffffffffff;
        if (plVar19 + (int)local_60 < plVar19) {
          uVar11 = uVar12;
        }
        lVar8 = local_1d8;
        if (uVar11 != 0) {
          do {
            puVar16 = (undefined1 *)*plVar19;
            local_1d0 = puVar16;
            FUN_1428441f0(plVar1 + 4);
            lVar8 = plVar1[3];
            if (plVar1[6] == 0) {
              FTextureInstanceState::RemoveComponent(lVar8,puVar16,local_198);
            }
            else {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(lVar8 + 0x118,local_1e8,puVar16);
              if (local_1e8[0] == -1) {
                lVar9 = 0;
              }
              else {
                lVar9 = *(longlong *)(lVar8 + 0x118) + (longlong)local_1e8[0] * 0x18;
              }
              piVar3 = (int *)(lVar9 + 8);
              if (lVar9 == 0) {
                piVar3 = (int *)0x0;
              }
              if (piVar3 != (int *)0x0) {
                iVar15 = *piVar3;
                while (iVar15 != -1) {
                  lVar9 = *(longlong *)(lVar8 + 0x20);
                  lVar4 = (longlong)iVar15;
                  iVar15 = *(int *)(lVar9 + 0x10 + lVar4 * 0x28);
                  if (iVar15 != -1) {
                    *(undefined8 *)(*(longlong *)(lVar8 + 0xd8) + (longlong)iVar15 * 8) = 0;
                  }
                  iVar15 = *(int *)(lVar9 + 0x24 + lVar4 * 0x28);
                  *(undefined8 *)(lVar9 + lVar4 * 0x28) = 0;
                }
                TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
                ::Remove(lVar8 + 0x118,puVar16);
              }
            }
            TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap
                      (plVar1 + 9,&local_1d0,1);
            TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap
                      (plVar1 + 0xb,&local_1d0,1);
            plVar19 = plVar19 + 1;
            uVar12 = uVar12 + 1;
            lVar8 = local_1d8;
            plVar10 = local_68;
            plVar7 = local_1c0;
          } while (uVar12 != uVar11);
        }
      }
      local_1e0 = local_1e0 + 1;
    } while (local_1e0 != plVar7);
  }
  lVar8 = local_1c8;
  plVar7 = local_128;
  if (plVar10 != (longlong *)0x0) {
    plVar7 = plVar10;
  }
  plVar1 = plVar7 + (int)local_60;
  lVar9 = DAT_1468b5a78;
  puVar16 = local_138;
  for (; DAT_1468b5a78 = lVar9, local_138 = puVar16, plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar9 = *plVar7;
    if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x2ee) & 8) != 0)) {
      local_1c0 = (longlong *)((ulonglong)local_1c0 & 0xffffffffffffff00);
      uStack_1b8 = lVar9;
      puVar5 = (undefined8 *)operator_new(0x18);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = (undefined4)local_1c0;
        *(undefined4 *)((longlong)puVar5 + 0xc) = local_1c0._4_4_;
        *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_1b8;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_1b8._4_4_;
        puVar2 = *(undefined8 **)(lVar8 + 0x700);
        *(undefined8 **)(lVar8 + 0x700) = puVar5;
        *puVar2 = puVar5;
      }
      *(byte *)(lVar9 + 0x2ee) = *(byte *)(lVar9 + 0x2ee) & 0xdf;
      bVar13 = *(byte *)(lVar9 + 0x2ee);
      piVar3 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                      ::FindId(*(longlong *)(lVar8 + 0x6b8) + 0x118,&local_1e0,lVar9);
      if (*piVar3 != -1) {
        FDynamicTextureInstanceManager::FTasks::SyncResults(lVar8 + 0x6c0);
        FTextureInstanceState::RemoveComponent(*(undefined8 *)(lVar8 + 0x6b8),lVar9,local_198);
        bVar13 = *(byte *)(lVar9 + 0x2ee);
      }
      *(byte *)(lVar9 + 0x2ee) = bVar13 & 0xf7;
    }
    *(byte *)(lVar9 + 0x2ee) = *(byte *)(lVar9 + 0x2ee) & 0xfb;
    plVar10 = local_68;
    lVar9 = DAT_1468b5a78;
    puVar16 = local_138;
  }
  uVar11 = 0;
  uVar12 = uVar11;
  iVar15 = (int)local_130;
  if (0 < (int)local_130) {
    do {
      puVar6 = local_198;
      if (puVar16 != (undefined1 *)0x0) {
        puVar6 = puVar16;
      }
      lVar4 = *(longlong *)(puVar6 + uVar12);
      piVar3 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                (lVar8 + 0x20,&local_1d8,lVar4);
      if ((*piVar3 != -1) && (lVar4 != 0)) {
        iVar20 = *(int *)(lVar4 + 0xb8);
        if ((-1 < iVar20) && (iVar20 < *(int *)(lVar8 + 0x18))) {
          plVar10 = (longlong *)((longlong)iVar20 * 200 + *(longlong *)(lVar8 + 0x10));
          plVar7 = (longlong *)0x0;
          if (*plVar10 == lVar4) {
            plVar7 = plVar10;
          }
          if (plVar7 != (longlong *)0x0) {
            plVar7[0x11] = lVar9;
            puVar16 = local_138;
            iVar15 = (int)local_130;
          }
        }
      }
      uVar14 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar14;
      plVar10 = local_68;
      uVar12 = uVar12 + 8;
    } while ((int)uVar14 < iVar15);
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free();
    puVar16 = local_138;
  }
  if (puVar16 != (undefined1 *)0x0) {
    FMemory::Free(puVar16);
  }
  return;
}



// FUNCTION 14283cc50 FUN_14283cc50 body=253 status=ok
// SIG undefined FUN_14283cc50(void)

void FUN_14283cc50(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  plVar5 = *(longlong **)(param_1 + 0x748);
  plVar1 = plVar5 + *(int *)(param_1 + 0x750);
  if (plVar5 != plVar1) {
    while (plVar2 = (longlong *)*plVar5, *plVar2 != param_2) {
      plVar5 = plVar5 + 1;
      if (plVar5 == plVar1) {
        return;
      }
    }
    if ((char)plVar2[8] == '\x06') {
      FUN_1428441f0(plVar2 + 4);
      lVar3 = plVar2[3];
      if ((lVar3 != 0) && (iVar9 = 0, 0 < *(int *)(lVar3 + 0xe0))) {
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar10 + *(longlong *)(lVar3 + 0xd8)) != 0) {
            uVar7 = iVar9 >> 0x1f & 3;
            uVar4 = iVar9 + uVar7;
            lVar6 = (longlong)(int)((uVar4 & 3) - uVar7);
            lVar8 = (longlong)((int)uVar4 >> 2) * 0xf0 + *(longlong *)(lVar3 + 0x10);
            *(float *)(lVar8 + lVar6 * 4) = *(float *)(lVar8 + lVar6 * 4) + *param_3;
            *(float *)(lVar8 + 0x10 + lVar6 * 4) = param_3[1] + *(float *)(lVar8 + 0x10 + lVar6 * 4)
            ;
            *(float *)(lVar8 + 0x20 + lVar6 * 4) = param_3[2] + *(float *)(lVar8 + 0x20 + lVar6 * 4)
            ;
          }
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar9 < *(int *)(lVar3 + 0xe0));
      }
    }
  }
  return;
}



// FUNCTION 14283cd50 FUN_14283cd50 body=477 status=ok
// SIG undefined FUN_14283cd50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14283cd50(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [96];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  if (param_2 == 0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_2 + 0x2ee) & 0xc) == 0) {
    return;
  }
  uVar7 = 0;
  local_48 = 0;
  local_40 = 0;
  if ((*(byte *)(param_2 + 0x2ee) & 4) != 0) {
    lVar3 = FUN_14233ccd0(param_2);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0xc);
      uVar5 = uVar7;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar4 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar4;
        uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
      }
      if (((*(uint *)(uVar5 + 8) >> 0x1d & 1) != 0) || ((*(uint *)(lVar3 + 8) & 0x18000) != 0)) {
        (**(code **)(*param_1 + 0x50))(param_1,lVar3);
        goto LAB_14283ced7;
      }
    }
    iVar1 = *(int *)(param_2 + 0xc);
    uVar5 = uVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if (((*(uint *)(uVar5 + 8) >> 0x1d & 1) != 0) || ((*(uint *)(param_2 + 8) & 0x18000) != 0)) {
      puVar6 = (undefined8 *)param_1[0xe9];
      uVar5 = (longlong)(int)param_1[0xea] & 0x1fffffffffffffff;
      if (puVar6 + (int)param_1[0xea] < puVar6) {
        uVar5 = uVar7;
      }
      if (uVar5 != 0) {
        do {
          if ((lVar3 == 0) || (*(longlong *)*puVar6 == lVar3)) {
            FLevelTextureManager::RemoveComponentReferences((longlong *)*puVar6,param_2,local_a8);
          }
          puVar6 = puVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar5);
      }
      *(byte *)(param_2 + 0x2ee) = *(byte *)(param_2 + 0x2ee) & 0xfb;
    }
  }
LAB_14283ced7:
  FUN_14283f430(param_1 + 0xd6,param_2,local_a8);
  FUN_142842e80(param_1,local_a8);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14283cf30 FUN_14283cf30 body=155 status=ok
// SIG undefined FUN_14283cf30(void)

void FUN_14283cf30(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 local_38 [48];
  
  if (((*(char *)(param_1 + 0x760) != '\0') && (param_2 != 0)) &&
     (bVar1 = *(byte *)(param_2 + 0x2ee), (bVar1 & 0x20) == 0)) {
    bVar2 = *(byte *)(param_2 + 0xb8);
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 4) == 0) {
        return;
      }
      FUN_1428404a0();
      *(byte *)(param_2 + 0x2ee) = *(byte *)(param_2 + 0x2ee) | 0x10;
    }
    if ((bVar2 & 0x43) == 3) {
      FUN_14284d810(local_38,3,param_2);
      FUN_142831570(param_1 + 0x6b0,param_2,local_38,0);
      FUN_14284e370(local_38);
    }
  }
  return;
}



// FUNCTION 14283cfd0 FUN_14283cfd0 body=151 status=ok
// SIG undefined FUN_14283cfd0(void)

void FUN_14283cfd0(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_38 [48];
  
  if ((*(char *)(param_1 + 0x760) != '\0') && (param_2 != 0)) {
    FUN_14284d730(local_38,3,0);
    LOCK();
    bVar1 = *(int *)(param_1 + 0x948) == 0;
    if (bVar1) {
      *(int *)(param_1 + 0x948) = 1;
    }
    UNLOCK();
    while (!bVar1) {
      FUN_1416b1760(0);
      LOCK();
      bVar1 = *(int *)(param_1 + 0x948) == 0;
      if (bVar1) {
        *(int *)(param_1 + 0x948) = 1;
      }
      UNLOCK();
    }
    FUN_142831570(param_1 + 0x6b0,param_2,local_38,0);
    *(undefined4 *)(param_1 + 0x948) = 0;
    FUN_14284e370(local_38);
  }
  return;
}



// FUNCTION 14283d080 FUN_14283d080 body=65 status=ok
// SIG undefined FUN_14283d080(void)

void FUN_14283d080(void)

{
  longlong *plVar1;
  
  if ((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xab8) != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))();
    if (plVar1 != (longlong *)0x0) {
      *(undefined1 *)(plVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014283d0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14283d0d0 FUN_14283d0d0 body=385 status=ok
// SIG undefined FUN_14283d0d0(void)

void FUN_14283d0d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  FUN_1428274f0(param_1 + 0x50,param_1 + 0x38);
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar11 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x38);
      lVar2 = *(longlong *)(lVar11 + lVar1);
      if ((*(byte *)(lVar2 + 0xb8) & 1) == 0) {
LAB_14283d186:
        iVar7 = *(int *)(param_1 + 0x40);
        iVar4 = (iVar7 - iVar9) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar9 * 8),
                     (void *)(lVar1 + (longlong)(iVar7 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar7 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
        *(byte *)(lVar2 + 0x2ee) = *(byte *)(lVar2 + 0x2ee) & 0xdf;
        bVar10 = *(byte *)(lVar2 + 0x2ee);
        iVar9 = iVar9 + -1;
        lVar11 = lVar11 + -8;
        piVar6 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                        ::FindId(*(longlong *)(param_1 + 8) + 0x118,local_res8,lVar2);
        if (*piVar6 != -1) {
          FDynamicTextureInstanceManager::FTasks::SyncResults(param_1 + 0x10);
          FTextureInstanceState::RemoveComponent(*(undefined8 *)(param_1 + 8),lVar2,param_2);
          bVar10 = *(byte *)(lVar2 + 0x2ee);
        }
        *(byte *)(lVar2 + 0x2ee) = bVar10 & 0xf7;
      }
      else {
        uVar3 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar3 < (int)DAT_1469e91c4) {
          uVar8 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar8 = uVar8 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)uVar8 * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) || ((*(uint *)(lVar2 + 8) & 0x18000) != 0))
        goto LAB_14283d186;
      }
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 14283d260 FUN_14283d260 body=1412 status=ok
// SIG undefined FUN_14283d260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14283d260(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  uint *puStack_170;
  undefined8 uStack_168;
  int iStack_160;
  int iStack_15c;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  uint *puStack_138;
  undefined8 local_130;
  int iStack_128;
  int iStack_124;
  undefined8 uStack_120;
  uint *local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  uint *local_e8;
  char local_e0;
  char cStack_df;
  uint *local_d8;
  undefined8 uStack_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  uint *local_a8;
  undefined2 local_a0;
  int local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_178 = (uint *)(param_1 + 0x10);
  puStack_138 = (uint *)(param_1 + 0x20);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar10 = *(int *)(param_1 + 0x38);
  local_140 = (uint *)0x100000000;
  local_130._4_4_ = 0;
  iStack_128 = 0;
  if (iVar10 != 0) {
    puVar14 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar14 = puStack_138;
    }
    uVar6 = *puVar14;
    iVar7 = 0;
    while (uVar6 == 0) {
      iStack_128 = iStack_128 + 0x20;
      uVar5 = (ulonglong)local_140 >> 0x20;
      local_140 = (uint *)CONCAT44((int)uVar5,iVar7 + 1);
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14283d375;
      uVar6 = puVar14[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    local_98 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> local_98 == 0; local_98 = local_98 + -1) {
      }
    }
    local_140 = (uint *)CONCAT44(uVar6,SUB84(local_140,0));
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_98;
    }
    local_130._4_4_ = (iStack_128 - iVar7) + 0x1f;
    if (iVar10 < local_130._4_4_) {
LAB_14283d375:
      local_130._4_4_ = iVar10;
    }
  }
  local_130._0_4_ = 0xffffffff;
  uStack_100 = CONCAT44(local_130._4_4_,0xffffffff);
  auVar4._8_4_ = iStack_128;
  auVar4._0_8_ = uStack_100;
  auVar4._12_4_ = iStack_124;
  local_150._0_4_ = SUB84(local_178,0);
  local_150._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
  iStack_160 = -1;
  iStack_15c = local_130._4_4_;
  puStack_170 = local_140;
  local_e0 = '\0';
  cStack_df = '\0';
  uStack_110 = local_140;
  uStack_158 = auVar4._8_8_;
  local_f8._8_4_ = (undefined4)local_150;
  local_f8._0_8_ = uStack_158;
  local_f8._12_4_ = local_150._4_4_;
  iVar10 = local_130._4_4_;
  local_148 = param_1;
  local_118 = local_178;
  local_108 = puStack_138;
  local_e8 = local_178;
  uStack_168 = puStack_138;
  local_150 = local_178;
  if (local_130._4_4_ < *(int *)(param_1 + 0x38)) {
    do {
      lVar1 = *(longlong *)((longlong)iVar10 * 0x28 + 0x18 + *(longlong *)local_118);
      iVar7 = *(int *)(lVar1 + 0x28);
      iVar13 = iVar7 + -1;
      iVar9 = iVar10;
      if (-1 < iVar13) {
        lVar15 = (longlong)iVar13 << 4;
        lVar16 = lVar15;
        do {
          lVar2 = *(longlong *)(lVar1 + 0x20);
          plVar12 = *(longlong **)(lVar2 + 8 + lVar15);
          plVar11 = plVar12;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            iVar7 = (int)plVar12[1];
            bVar17 = iVar7 == 0;
            if (bVar17) {
              *(int *)(plVar12 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
            while (plVar11 = (longlong *)0x0, !bVar17) {
              LOCK();
              bVar17 = iVar7 == (int)plVar12[1];
              if (bVar17) {
                *(int *)(plVar12 + 1) = iVar7 + 1;
              }
              UNLOCK();
              if (bVar17) {
                plVar11 = plVar12;
                if ((plVar12 != (longlong *)0x0) && (*(longlong *)(lVar2 + lVar15) != 0))
                goto LAB_14283d4fd;
                break;
              }
              LOCK();
              iVar7 = (int)plVar12[1];
              bVar17 = iVar7 == 0;
              if (bVar17) {
                *(int *)(plVar12 + 1) = 0;
                iVar7 = 0;
              }
              UNLOCK();
            }
          }
          plVar12 = *(longlong **)(lVar16 + 8 + *(longlong *)(lVar1 + 0x20));
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            piVar8 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if ((iVar7 == 1) && (plVar12 != (longlong *)0x0)) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
          iVar7 = *(int *)(lVar1 + 0x28);
          iVar9 = (iVar7 - iVar13) + -1;
          if (0 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar1 + 0x20) + lVar16),
                       (void *)((longlong)(iVar7 - iVar9) * 0x10 + *(longlong *)(lVar1 + 0x20)),
                       (longlong)iVar9 << 4);
            iVar7 = *(int *)(lVar1 + 0x28);
          }
          *(int *)(lVar1 + 0x28) = iVar7 + -1;
          plVar12 = plVar11;
LAB_14283d4fd:
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar12 + 1;
            lVar2 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar8 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          lVar16 = lVar16 + -0x10;
          lVar15 = lVar15 + -0x10;
          iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
        iVar7 = *(int *)(lVar1 + 0x28);
        iVar9 = uStack_100._4_4_;
      }
      if (iVar7 == 0) {
        FUN_1422b78e0(&local_88,local_90,*(longlong *)local_118 + (longlong)iVar10 * 0x28,0);
        FUN_14282cae0(lVar1);
        FMemory::operator_delete(lVar1,0x30);
        TSet<TTuple<USoundWave_*,FWaveRequest>,TDefaultMapHashableKeyFuncs<USoundWave_*,FWaveRequest,0>,FDefaultSetAllocator>
        ::Remove(local_f8._8_8_,iVar9);
        local_e0 = '\x01';
      }
      uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      iVar10 = uStack_100._4_4_;
    } while (uStack_100._4_4_ < (int)local_108[6]);
    if ((local_e0 != '\0') && (cStack_df != '\0')) {
      FUN_1428350b0(local_e8,local_e8[2] - local_e8[0xd]);
    }
  }
  puVar14 = uStack_168;
  local_130 = (uint *)CONCAT44(local_130._4_4_,(undefined4)local_130);
  if (0 < (int)local_80 - local_54) {
    local_140 = (uint *)(local_148 + 0x60);
    local_178 = (uint *)0x100000000;
    iVar10 = *(int *)(local_148 + 0x88);
    puStack_170 = (uint *)(local_148 + 0x70);
    uStack_168._4_4_ = 0;
    iStack_160 = 0;
    if (iVar10 != 0) {
      puVar14 = *(uint **)(local_148 + 0x80);
      if (*(uint **)(local_148 + 0x80) == (uint *)0x0) {
        puVar14 = puStack_170;
      }
      uVar6 = *puVar14;
      iStack_160 = 0;
      iVar7 = 0;
      while (uVar6 == 0) {
        iStack_160 = iStack_160 + 0x20;
        uVar5 = (ulonglong)local_178 >> 0x20;
        local_178 = (uint *)CONCAT44((int)uVar5,iVar7 + 1);
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14283d6b2;
        uVar6 = puVar14[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_178 = (uint *)CONCAT44(uVar6,SUB84(local_178,0));
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_168._4_4_ = (iStack_160 - iVar7) + 0x1f;
      if (iVar10 < uStack_168._4_4_) {
LAB_14283d6b2:
        uStack_168._4_4_ = iVar10;
      }
    }
    uStack_168._0_4_ = 0xffffffff;
    uStack_c0 = (uint *)CONCAT44(uStack_168._4_4_,0xffffffff);
    auVar3._8_4_ = iStack_160;
    auVar3._0_8_ = uStack_c0;
    auVar3._12_4_ = iStack_15c;
    local_150._0_4_ = SUB84(local_140,0);
    local_150._4_4_ = (undefined4)((ulonglong)local_140 >> 0x20);
    iStack_128 = -1;
    iStack_124 = uStack_168._4_4_;
    uStack_120 = auVar3._8_8_;
    puStack_138 = local_178;
    local_a0 = 0;
    uStack_d0 = local_178;
    local_b8._8_4_ = (undefined4)local_150;
    local_b8._0_8_ = uStack_120;
    local_b8._12_4_ = local_150._4_4_;
    iVar10 = uStack_168._4_4_;
    local_d8 = local_140;
    local_c8 = puStack_170;
    local_a8 = local_140;
    puVar14 = uStack_c0;
    local_150 = local_140;
    local_130 = puStack_170;
    if (uStack_168._4_4_ < *(int *)(local_148 + 0x88)) {
      do {
        piVar8 = (int *)TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                        ::FindId(&local_88,local_8c,
                                 *(longlong *)local_d8 + 0x18 + (longlong)iVar10 * 0x40);
        if (*piVar8 != -1) {
          TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
          ::Remove(local_b8._8_8_,iVar10);
          local_a0 = CONCAT11(local_a0._1_1_,1);
        }
        uStack_c0 = (uint *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
        iVar10 = uStack_c0._4_4_;
      } while (uStack_c0._4_4_ < (int)local_c8[6]);
      puVar14 = (uint *)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
      if (((char)local_a0 != '\0') &&
         (puVar14 = (uint *)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168),
         local_a0._1_1_ != '\0')) {
        TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_a8,local_a8[2] - local_a8[0xd],1);
        puVar14 = (uint *)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
      }
    }
  }
  local_40 = 0;
  uStack_168 = puVar14;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}



// FUNCTION 14283d7f0 FUN_14283d7f0 body=662 status=ok
// SIG undefined FUN_14283d7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14283d7f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [96];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  local_40 = 0;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x970));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x970));
  }
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x750)) {
    lVar12 = 0;
    plVar2 = (longlong *)(param_1 + 0x748);
    do {
      uVar8 = *(uint *)(**(longlong **)(lVar12 + *plVar2) + 0xc);
      if ((int)uVar8 < (int)DAT_1469e91c4) {
        uVar11 = uVar8 & 0xffff;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0xffff;
          uVar11 = uVar11 - 0x10000;
        }
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                 (longlong)(int)uVar11 * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) {
        FUN_14283f510(*(longlong **)(lVar12 + *plVar2),local_a8);
        lVar4 = *plVar2;
        lVar10 = (longlong)iVar13 * 8;
        lVar5 = *(longlong *)(lVar4 + lVar10);
        *(undefined4 *)(lVar5 + 0xb0) = 0;
        if (*(longlong *)(lVar5 + 0xa8) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (lVar5 + 0x68);
        if (*(longlong *)(lVar5 + 0x58) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar5 + 0x48) != 0) {
          FMemory::Free();
        }
        *(undefined ***)(lVar5 + 0x10) = &PTR__scalar_deleting_destructor__1451c0428;
        FUN_1428441f0(lVar5 + 0x20);
        puVar6 = *(undefined8 **)(lVar5 + 0x30);
        if (puVar6 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar6 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
        FTextureInstanceStateTaskSync<FStaticTextureInstanceManager::FTasks>::
        ~FTextureInstanceStateTaskSync<FStaticTextureInstanceManager::FTasks>(lVar5 + 0x18);
        *(undefined ***)(lVar5 + 0x10) = &PTR_FUN_143f74a00;
        FMemory::Free(*(undefined8 *)(lVar4 + lVar10));
        iVar3 = *(int *)(param_1 + 0x750);
        iVar9 = (iVar3 - iVar13) + -1;
        if (0 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar2 + lVar10),(void *)(*plVar2 + (longlong)(iVar3 - iVar9) * 8),
                     (longlong)iVar9 << 3);
          iVar3 = *(int *)(param_1 + 0x750);
        }
        *(int *)(param_1 + 0x750) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar2);
        iVar13 = iVar13 + -1;
        lVar12 = lVar12 + -8;
      }
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 8;
    } while (iVar13 < *(int *)(param_1 + 0x750));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x970));
  FUN_14283d0d0(param_1 + 0x6b0,local_a8);
  FUN_142842e80(param_1,local_a8);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14283da90 FUN_14283da90 body=65 status=ok
// SIG undefined FUN_14283da90(void)

void FUN_14283da90(void)

{
  longlong *plVar1;
  
  if ((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xab8) != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))();
    if (plVar1 != (longlong *)0x0) {
      *(undefined1 *)(plVar1 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014283dac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14283db10 FUN_14283db10 body=530 status=ok
// SIG undefined FUN_14283db10(void)

void FUN_14283db10(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x698);
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_18 = 0;
  uStack_10 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x1f0))(DAT_146ab6358,&local_68);
  if ((((local_38 < 1) || (param_2 != '\0')) || (*(char *)(param_1 + 0x1db) != '\0')) ||
     (*(char *)(param_1 + 0x1da) != '\0')) {
    *(undefined8 *)(lVar1 + 0xb8) = local_48;
    *(undefined8 *)(lVar1 + 0xc0) = 0x2000000000;
    *(undefined8 *)(lVar1 + 200) = 0x1000000000;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0x1000000000;
    *(undefined1 *)(lVar1 + 0xa8) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1f0) < 0) {
      lVar2 = *(longlong *)(param_1 + 0x768);
    }
    else {
      lVar2 = (longlong)(*(int *)(param_1 + 0x1f0) << 0x14);
    }
    FUN_142841400(lVar1 + 8,uStack_50,local_48,local_38,
                  (longlong)(*(int *)(param_1 + 0x1b8) << 0x14),lVar2,*(undefined4 *)(param_1 + 500)
                 );
  }
  iVar4 = DAT_146af1318;
  lVar2 = DAT_146af1310;
  local_78 = 0;
  local_70 = DAT_146af1318;
  if (DAT_146af1318 == 0) {
    local_6c = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
              (&local_78,DAT_146af1318,0);
    lVar2 = lVar2 - local_78;
    puVar3 = (undefined4 *)(local_78 + 0xc);
    do {
      *(undefined8 *)(puVar3 + -3) = *(undefined8 *)(lVar2 + -0xc + (longlong)puVar3);
      puVar3[-1] = *(undefined4 *)(lVar2 + -4 + (longlong)puVar3);
      *puVar3 = *(undefined4 *)(lVar2 + (longlong)puVar3);
      puVar3[1] = *(undefined4 *)(lVar2 + 4 + (longlong)puVar3);
      puVar3[2] = *(undefined4 *)(lVar2 + 8 + (longlong)puVar3);
      puVar3[3] = *(undefined4 *)(lVar2 + 0xc + (longlong)puVar3);
      *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(lVar2 + 0x10 + (longlong)puVar3);
      puVar3[5] = *(undefined4 *)(lVar2 + 0x14 + (longlong)puVar3);
      puVar3[6] = *(undefined4 *)(lVar2 + 0x18 + (longlong)puVar3);
      puVar3 = puVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_14283bed0(lVar1 + 8,&local_78,*(undefined4 *)(param_1 + 0x790),param_1 + 0x748,param_1 + 0x6b0
               );
  return;
}



// FUNCTION 14283dd30 PrepareAsyncView body=224 status=ok
// SIG undefined PrepareAsyncView(void)

void FDynamicTextureInstanceManager::PrepareAsyncView(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  FTasks::SyncResults(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  Refresh(param_1,0x3f800000);
  lVar6 = *(longlong *)(param_1 + 0x20);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 8);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (iVar5 != 1) {
    lVar6 = 0;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0x28);
  *(longlong *)(lVar3 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(lVar3 + 0x30);
  *(longlong *)(lVar3 + 0x30) = lVar6;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(undefined4 *)(lVar3 + 0x38) = 1;
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}



// FUNCTION 14283de10 FUN_14283de10 body=462 status=ok
// SIG undefined FUN_14283de10(void)

void FUN_14283de10(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  plVar1 = (longlong *)(param_1 + 0x710);
  FUN_1428274f0(param_1 + 0x960,plVar1);
  iVar6 = *(int *)(param_1 + 0x718);
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18) + iVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<200,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x10);
    iVar6 = *(int *)(param_1 + 0x718);
  }
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < iVar6) {
    do {
      lVar4 = *(longlong *)(uVar8 + *plVar1);
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0xb8) = *(undefined4 *)(param_1 + 0x18);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar5 = iVar6 + 1;
        *(int *)(param_1 + 0x18) = iVar5;
        if (*(int *)(param_1 + 0x1c) < iVar5) {
          FUN_140ae1ad0(param_1 + 0x10);
        }
        plVar7 = (longlong *)((longlong)iVar6 * 200 + *(longlong *)(param_1 + 0x10));
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = lVar4;
          plVar7[0xe] = 0;
          plVar7[0xf] = 0;
          FUN_1428474e0(plVar7,param_1 + 0x1b4);
          FUN_142845ea0(plVar7,param_1 + 200,param_1 + 0x1b4,0);
          if (*plVar7 != 0) {
            FUN_142846740(plVar7);
          }
          plVar7[0x11] = DAT_1468b5a78;
          *(undefined4 *)(plVar7 + 0x12) = 0x3f800000;
          bVar2 = *(byte *)(lVar4 + 0xc4);
          *(undefined8 *)((longlong)plVar7 + 0xbc) = 0;
          *(uint *)((longlong)plVar7 + 0x84) =
               *(uint *)((longlong)plVar7 + 0x84) ^
               ((uint)(bVar2 >> 1) ^ *(uint *)((longlong)plVar7 + 0x84)) & 2;
          uVar3 = (undefined4)plVar7[0xc];
          *(uint *)((longlong)plVar7 + 0x94) = *(uint *)((longlong)plVar7 + 0x94) & 0xfffffff8;
          *(undefined4 *)((longlong)plVar7 + 0x9c) = uVar3;
          *(undefined4 *)(plVar7 + 0x14) = uVar3;
          *(undefined4 *)(plVar7 + 0x15) = uVar3;
          *(undefined4 *)(plVar7 + 0x16) = uVar3;
          *(undefined4 *)(plVar7 + 0x13) = 0;
          *(undefined4 *)((longlong)plVar7 + 0xa4) = 0;
          *(undefined4 *)((longlong)plVar7 + 0xac) = 0;
          *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
        }
      }
      uVar9 = (int)uVar10 + 1;
      uVar8 = uVar8 + 8;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x718));
  }
  *(undefined4 *)(param_1 + 0x718) = 0;
  if (*(int *)(param_1 + 0x71c) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  return;
}



// FUNCTION 14283dfe0 ProcessElement body=195 status=ok
// SIG undefined ProcessElement(void)

void FTextureInstanceAsyncView::ProcessElement
               (undefined8 param_1,float *param_2,float param_3,char param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 3.4028235e+38;
  if (param_3 == 3.4028235e+38) {
    if (*param_2 <= 0.0) {
      fVar2 = *param_5;
    }
    else {
      fVar2 = 3.4028235e+38;
    }
    *param_5 = fVar2;
    if (param_2[1] <= 0.0) {
      fVar1 = *param_6;
    }
    *param_6 = fVar1;
    return;
  }
  if (param_3 < 0.0) {
    param_3 = -param_3;
    fVar1 = *param_5;
    if (*param_5 <= param_3) {
      fVar1 = param_3;
    }
    *param_5 = fVar1;
    fVar1 = *param_6;
    if (*param_6 <= param_3) {
      fVar1 = param_3;
    }
    *param_6 = fVar1;
    if (param_4 == '\0') {
      return;
    }
    if ((*param_2 <= 0.0) && (param_2[1] <= 0.0)) {
      return;
    }
    *param_5 = 3.4028235e+38;
    param_5 = param_6;
  }
  else {
    fVar1 = param_3 * *param_2;
    if (param_3 * *param_2 <= *param_5) {
      fVar1 = *param_5;
    }
    *param_5 = fVar1;
    fVar1 = param_3 * param_2[1];
    if (param_3 * param_2[1] <= *param_6) {
      fVar1 = *param_6;
    }
    *param_6 = fVar1;
    if (param_4 == '\0') {
      return;
    }
    if (*param_2 <= 0.0) {
      if (param_2[1] <= 0.0) {
        return;
      }
      *param_5 = 3.4028235e+38;
      return;
    }
  }
  *param_5 = 3.4028235e+38;
  return;
}



// FUNCTION 14283e0b0 FUN_14283e0b0 body=449 status=ok
// SIG undefined FUN_14283e0b0(void)

void FUN_14283e0b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  BOOL BVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  
  if ((*DAT_146b166d8 != 0) && (iVar8 = *DAT_146b166f0, 0 < iVar8)) {
    bVar4 = true;
    do {
      iVar1 = *(int *)(param_1 + 0x740);
      if (*(int *)(param_1 + 0x738) <= iVar1) {
        return;
      }
      plVar10 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x730));
      *(int *)(param_1 + 0x740) = iVar1 + 1;
      if (*plVar10 != 0) {
        iVar1 = (int)plVar10[1];
        if (((iVar1 < 0) || (*(int *)(param_1 + 0x18) <= iVar1)) ||
           (plVar7 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10)),
           *plVar7 != *plVar10)) {
          BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
          if (BVar5 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
          }
          lVar3 = *plVar10;
          piVar6 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                    (param_1 + 0x20,local_res10,lVar3);
          plVar7 = (longlong *)0x0;
          if (*piVar6 != -1) {
            iVar1 = *(int *)(lVar3 + 0xb8);
            if (((-1 < iVar1) && (plVar7 = (longlong *)0x0, iVar1 < *(int *)(param_1 + 0x18))) &&
               (plVar7 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10)),
               *plVar7 != lVar3)) {
              plVar7 = (longlong *)0x0;
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
        }
        if ((plVar7 != (longlong *)0x0) && ((bVar4 || (*(int *)((longlong)plVar7 + 0x14) <= iVar8)))
           ) {
          uVar2 = *(uint *)(plVar7 + 0x17);
          iVar1 = *(int *)((longlong)plVar7 + 0xbc);
          if ((*plVar7 != 0) && (iVar1 != (int)plVar7[0xb])) {
            if ((((uVar2 & 1) == 0) && ((*(byte *)((longlong)plVar7 + 0x54) & 3) == 0)) ||
               ((int)plVar7[0x18] < iVar1)) {
              uVar9 = 0;
            }
            else {
              uVar9 = 1;
            }
            if (iVar1 < (int)plVar7[0xb]) {
              FUN_14285b240();
            }
            else {
              FUN_14285b010(*plVar7,iVar1,uVar9);
            }
            FUN_142847790(plVar7,0);
            FOutputDevice::CanBeUsedOnAnyThread(plVar7,*plVar7,uVar2 & 1,param_1);
          }
          bVar4 = false;
          if (*(int *)((longlong)plVar7 + 0x14) < 2) {
            iVar8 = iVar8 + -1;
          }
          else {
            iVar8 = iVar8 - *(int *)((longlong)plVar7 + 0x14);
          }
        }
      }
    } while (0 < iVar8);
  }
  return;
}



// FUNCTION 14283e280 FUN_14283e280 body=466 status=ok
// SIG undefined FUN_14283e280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14283e280(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148 [32];
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar9 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_3c = 0;
  puVar5 = (undefined8 *)param_1[0xe9];
  uVar8 = (longlong)(int)param_1[0xea] & 0x1fffffffffffffff;
  if (puVar5 + (int)param_1[0xea] < puVar5) {
    uVar8 = uVar9;
  }
  uVar3 = uVar9;
  uVar6 = uVar9;
  uVar7 = uVar9;
  if (uVar8 != 0) {
    while( true ) {
      puVar1 = (undefined8 *)*puVar5;
      local_40 = (int)uVar7 + 1;
      uVar2 = *puVar1;
      if ((int)uVar3 < (int)local_40) {
        TArray<FInventoryItem_*,TInlineAllocator<32,FDefaultAllocator>_>::ResizeGrow
                  (local_148,uVar7);
      }
      puVar4 = local_148;
      if (local_48 != (undefined8 *)0x0) {
        puVar4 = local_48;
      }
      puVar4[(int)uVar7] = uVar2;
      FUN_14283f510(puVar1,0);
      puVar5 = puVar5 + 1;
      if (uVar6 + 1 == uVar8) break;
      uVar3 = (ulonglong)local_3c;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)local_40;
    }
  }
  TIndirectArray<FLevelTextureManager,FDefaultAllocator>::Empty(param_1 + 0xe9,0);
  puVar5 = local_148;
  if (local_48 != (undefined8 *)0x0) {
    puVar5 = local_48;
  }
  uVar8 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (puVar5 + (int)local_40 < puVar5) {
    uVar8 = uVar9;
  }
  if (uVar8 != 0) {
    do {
      (**(code **)(*param_1 + 0x48))(param_1,*puVar5);
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar9 != uVar8);
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14283e460 FUN_14283e460 body=538 status=ok
// SIG undefined FUN_14283e460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14283e460(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,int param_5,
                  undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138 [80];
  undefined1 local_e8 [80];
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  cVar1 = *(char *)(param_1 + 0x28);
  iVar8 = param_5;
  if (cVar1 == '\0') {
    iVar8 = param_3;
  }
  LOCK();
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x18) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (((iVar4 < 1) && ((DAT_146b16cd4 < 1 || (iVar8 != 1)))) &&
     ((*(int *)(param_2 + 0x10) != 2 || (cVar3 = FUN_141636a40(), cVar3 != '\0')))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (iVar8 == 0) {
    return;
  }
  if ((!bVar2) || (*(int *)(param_2 + 0x10) != iVar8)) {
    *(int *)(param_1 + 0x34) = param_3;
    uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_138,param_4);
    TFunction<void___cdecl(int)>::operator=(param_1 + 0x40,uVar6);
    *(int *)(param_1 + 0x90) = param_5;
    uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_e8,param_6);
    TFunction<void___cdecl(int)>::operator=(param_1 + 0xa0,uVar6);
    if (bVar2) {
      FUN_142841910(param_1,param_2,iVar8);
      return;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    return;
  }
  local_68 = (longlong *)0x0;
  local_58 = 0;
  if (cVar1 == '\0') {
    param_6 = param_4;
  }
  if (*(int *)(param_6 + 8) == 0) {
LAB_14283e58b:
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    puVar7 = (undefined8 *)param_6[6];
    if ((undefined8 *)param_6[6] == (undefined8 *)0x0) {
      puVar7 = param_6 + 2;
    }
    if (puVar7 == (undefined8 *)0x0) goto LAB_14283e58b;
    plVar5 = (longlong *)(**(code **)*puVar7)(puVar7,local_88);
    (**(code **)(*plVar5 + 8))(plVar5);
    local_98 = (code *)*param_6;
    if (local_58 != 0) {
      plVar5 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar5 = local_68;
      }
      if (plVar5 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 8))();
        goto LAB_14283e59f;
      }
    }
  }
  uVar6 = 0;
LAB_14283e59f:
  (*local_98)(uVar6,param_2);
  if (local_58 != 0) {
    plVar5 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar5 = local_68;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14283e680 Refresh body=172 status=ok
// SIG undefined Refresh(void)

void FDynamicTextureInstanceManager::Refresh(longlong param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  FTasks::SyncResults(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(lVar4 + 0xe0);
  if (iVar2 < iVar3) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    iVar7 = iVar2 - ((int)ROUND(-0.5 - ((float)iVar3 * param_2 + (float)iVar3 * param_2)) >> 1);
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0x38);
    *(longlong *)(lVar5 + 0x38) = lVar4;
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    *(int *)(lVar5 + 0x44) = iVar7;
    *(undefined8 *)(lVar5 + 0x20) = 0xffffffffffffffff;
    *(int *)(lVar5 + 0x40) = iVar2;
    *(undefined4 *)(lVar5 + 0x48) = 1;
  }
  return;
}



// FUNCTION 14283e730 Refresh body=164 status=ok
// SIG undefined Refresh(void)

void FStaticTextureInstanceManager::Refresh(longlong param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  FUN_1428441f0(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(lVar4 + 0xe0);
  if (iVar2 < iVar3) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    iVar7 = iVar2 - ((int)ROUND(-0.5 - ((float)iVar3 * param_2 + (float)iVar3 * param_2)) >> 1);
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0x20);
    *(longlong *)(lVar5 + 0x20) = lVar4;
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    *(int *)(lVar5 + 0x2c) = iVar7;
    *(int *)(lVar5 + 0x28) = iVar2;
    *(undefined4 *)(lVar5 + 0x30) = 1;
  }
  return;
}



// FUNCTION 14283e7e0 FUN_14283e7e0 body=285 status=ok
// SIG undefined FUN_14283e7e0(void)

void FUN_14283e7e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)param_2[1];
  plVar1 = plVar10 + (int)param_2[2];
  do {
    if (plVar10 == plVar1) {
      return;
    }
    bVar8 = *(byte *)((longlong)param_2 + 0x1c);
    plVar3 = (longlong *)*plVar10;
    iVar7 = (int)param_2[3];
    if (bVar8 == 0) {
      plVar6 = *(longlong **)(param_1 + 0x950);
      plVar9 = plVar6 + (longlong)*(int *)(param_1 + 0x958) * 4;
      if (plVar6 != plVar9) {
        do {
          iVar4 = iVar7;
          if (*param_2 != *plVar6) {
            plVar5 = (longlong *)plVar6[1];
            plVar2 = plVar5 + (int)plVar6[2];
            for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
              if ((longlong *)*plVar5 == plVar3) {
                bVar8 = bVar8 | *(byte *)((longlong)plVar6 + 0x1c);
                iVar4 = (int)plVar6[3];
                if (iVar7 <= (int)plVar6[3]) {
                  iVar4 = iVar7;
                }
                break;
              }
            }
          }
          iVar7 = iVar4;
          plVar6 = plVar6 + 4;
        } while (plVar6 != plVar9);
      }
    }
    (**(code **)(*plVar3 + 0x2e8))(plVar3,0xbf800000,0);
    *(byte *)((longlong)plVar3 + 0x4b) = *(byte *)((longlong)plVar3 + 0x4b) & 0xf7;
    *(byte *)((longlong)plVar3 + 0xc4) = *(byte *)((longlong)plVar3 + 0xc4) | 8;
    plVar10 = plVar10 + 1;
    *(byte *)((longlong)plVar3 + 0x4b) = *(byte *)((longlong)plVar3 + 0x4b) | (bVar8 & 1) << 3;
    *(int *)(plVar3 + 0x1e) = iVar7;
  } while( true );
}



// FUNCTION 14283e900 FUN_14283e900 body=782 status=ok
// SIG undefined FUN_14283e900(void)

void FUN_14283e900(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar14 = 0;
      uVar16 = (ulonglong)uVar10;
      do {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar14;
        uVar14 = uVar14 + 1;
        *(undefined4 *)((longlong)plVar12 + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar17 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar17 = puStack_38;
      }
      uVar10 = *puVar17;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar10 == 0) {
        lVar7 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar5) goto LAB_14283ea2f;
        uVar10 = puVar17[lVar7 + 1];
      }
      uStack_64 = -uVar10 & uVar10;
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
LAB_14283ea2f:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        iVar4 = iStack_2c;
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_2c * 0x28);
        uVar15 = (int)((ulonglong)*puVar3 >> 0x20) + (int)*puVar3;
        uVar13 = uVar15 >> 0xd ^ -uVar15;
        uVar10 = (-0x61c88647 - uVar13) - uVar15 ^ uVar13 << 8;
        uVar15 = (uVar15 - uVar10) - uVar13 ^ uVar10 >> 0xd;
        uVar13 = (uVar13 - uVar10) - uVar15 ^ uVar15 >> 0xc;
        uVar10 = (uVar10 - uVar13) - uVar15 ^ uVar13 << 0x10;
        uVar15 = (uVar15 - uVar10) - uVar13 ^ uVar10 >> 5;
        uVar13 = (uVar13 - uVar10) - uVar15 ^ uVar15 >> 3;
        uVar10 = (uVar10 - uVar13) - uVar15 ^ uVar13 << 10;
        if (*(int *)(puVar3 + 2) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)puVar3[1];
        }
        uVar6 = FUN_140438070(puVar11);
        uVar13 = ((uVar15 - uVar10) - uVar13 ^ uVar10 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
        uVar10 = (-0x61c88647 - uVar13) - uVar6 ^ uVar13 << 8;
        uVar15 = (uVar6 - uVar10) - uVar13 ^ uVar10 >> 0xd;
        uVar13 = (uVar13 - uVar10) - uVar15 ^ uVar15 >> 0xc;
        uVar10 = (uVar10 - uVar13) - uVar15 ^ uVar13 << 0x10;
        uVar15 = (uVar15 - uVar10) - uVar13 ^ uVar10 >> 5;
        uVar13 = (uVar13 - uVar10) - uVar15 ^ uVar15 >> 3;
        uVar10 = (uVar10 - uVar13) - uVar15 ^ uVar13 << 10;
        uVar10 = ((uVar15 - uVar10) - uVar13 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar3 + 0x24) = uVar10;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)(puVar3 + 4) =
             *(undefined4 *)
              ((longlong)plVar12 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(int *)((longlong)plVar12 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iVar4;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14283ec10 Rehash body=778 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint *puVar17;
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
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar13 = 0;
      uVar16 = (ulonglong)uVar9;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        uVar7 = (longlong)(int)*plVar2 - 1U & uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)plVar11 + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar17 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar17 = puStack_38;
      }
      uVar9 = *puVar17;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14283ed3f;
        uVar9 = puVar17[lVar6 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
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
LAB_14283ed3f:
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
        puVar15 = (undefined8 *)((longlong)iStack_2c * 0x40 + *param_1);
        uVar14 = (int)((ulonglong)*puVar15 >> 0x20) + (int)*puVar15;
        uVar12 = uVar14 >> 0xd ^ -uVar14;
        uVar9 = (-0x61c88647 - uVar12) - uVar14 ^ uVar12 << 8;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 0xc;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 0x10;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 5;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 3;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 10;
        if (*(int *)(puVar15 + 2) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)puVar15[1];
        }
        uVar5 = FUN_140438070(puVar10);
        uVar12 = ((uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar5 ^ uVar12 << 8;
        uVar14 = (uVar5 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 0xc;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 0x10;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 5;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 3;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 10;
        uVar9 = ((uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x3c) = uVar9;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(puVar15 + 7) =
             *(undefined4 *)
              ((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14283ef20 FUN_14283ef20 body=527 status=ok
// SIG undefined FUN_14283ef20(void)

void FUN_14283ef20(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(char *)(param_1 + 0x11) == '\0') && (*(char *)(param_1 + 0x12) == '\0')) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined1 *)(param_1 + 0x14) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
    TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,&local_48);
    lVar8 = *(longlong *)(param_1 + 0x60);
    lVar2 = lVar8 + (longlong)*(int *)(param_1 + 0x68) * 0x18;
    if (lVar8 != lVar2) {
      lVar7 = CONCAT44(uStack_3c,uStack_40);
      do {
        local_28 = local_48;
        uStack_24 = uStack_44;
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
          lVar7 = CONCAT44(uStack_3c,uStack_40);
        }
        FUN_1428403a0(*(undefined8 *)(param_1 + 0x90),lVar8,&local_28);
        lVar8 = lVar8 + 0x18;
      } while (lVar8 != lVar2);
    }
    TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
              (*(longlong *)(param_1 + 0x90) + 0xb0,&local_48);
    plVar9 = *(longlong **)(param_1 + 0x70);
    plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x78) * 2;
    if (plVar9 != plVar10) {
      local_res8 = &local_38;
      do {
        plVar4 = (longlong *)plVar9[1];
        lVar2 = *plVar9;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_38 = local_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        if (CONCAT44(uStack_3c,uStack_40) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 0xc);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        TArray<TWeakPtr<IBusListener,1>,FDefaultAllocator>::
        RemoveAll<<lambda_75c4bb420badbf6619ba8f8d778f9e7f>_>(lVar2 + 0x80,&local_res8);
        plVar6 = (longlong *)CONCAT44(uStack_2c,uStack_30);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar10);
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x70,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (CONCAT44(uStack_3c,uStack_40) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        puVar5 = (undefined8 *)CONCAT44(uStack_3c,uStack_40);
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)CONCAT44(uStack_3c,uStack_40) + 8))
                    ((longlong *)CONCAT44(uStack_3c,uStack_40),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14283f130 Remove body=565 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar15 = (int)((ulonglong)*param_2 >> 0x20) + (int)*param_2;
  uVar13 = uVar15 >> 0xd ^ -uVar15;
  uVar10 = (-0x61c88647 - uVar13) - uVar15 ^ uVar13 << 8;
  uVar15 = (uVar15 - uVar10) - uVar13 ^ uVar10 >> 0xd;
  uVar13 = (uVar13 - uVar10) - uVar15 ^ uVar15 >> 0xc;
  uVar10 = (uVar10 - uVar13) - uVar15 ^ uVar13 << 0x10;
  uVar15 = (uVar15 - uVar10) - uVar13 ^ uVar10 >> 5;
  uVar13 = (uVar13 - uVar10) - uVar15 ^ uVar15 >> 3;
  uVar10 = (uVar10 - uVar13) - uVar15 ^ uVar13 << 10;
  if (*(int *)(param_2 + 2) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)param_2[1];
  }
  uVar8 = FUN_140438070(puVar11);
  uVar13 = ((uVar15 - uVar10) - uVar13 ^ uVar10 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
  uVar15 = (-0x61c88647 - uVar13) - uVar8 ^ uVar13 << 8;
  uVar10 = (uVar8 - uVar15) - uVar13 ^ uVar15 >> 0xd;
  uVar13 = (uVar13 - uVar15) - uVar10 ^ uVar10 >> 0xc;
  uVar15 = (uVar15 - uVar13) - uVar10 ^ uVar13 << 0x10;
  uVar10 = (uVar10 - uVar15) - uVar13 ^ uVar15 >> 5;
  uVar13 = (uVar13 - uVar15) - uVar10 ^ uVar10 >> 3;
  uVar15 = (uVar15 - uVar13) - uVar10 ^ uVar13 << 10;
  uVar14 = ((longlong)(int)((uVar10 - uVar15) - uVar13) ^ (ulonglong)(uVar15 >> 0xf)) &
           (longlong)((int)param_1[9] + -1);
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar9 + uVar14 * 4);
  iVar4 = *(int *)((longlong)plVar9 + uVar14 * 4);
  while( true ) {
    if (iVar4 == -1) {
      return 0;
    }
    lVar2 = *param_1 + (longlong)iVar4 * 0x28;
    cVar7 = FSoftObjectPath::operator==(lVar2,param_2);
    if (cVar7 != '\0') break;
    iVar4 = *(int *)(lVar2 + 0x20);
    piVar1 = (int *)(lVar2 + 0x20);
  }
  iVar4 = *piVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar2 = lVar6 + (longlong)iVar4 * 0x28;
    lVar12 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x24));
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar3 = (undefined4 *)((longlong)plVar9 + lVar12 * 4);
    iVar5 = *(int *)((longlong)plVar9 + lVar12 * 4);
    while (iVar5 != -1) {
      if (iVar5 == iVar4) {
        *puVar3 = *(undefined4 *)(lVar2 + 0x20);
        break;
      }
      lVar12 = (longlong)iVar5 * 5 + 4;
      puVar3 = (undefined4 *)(lVar6 + lVar12 * 8);
      iVar5 = *(int *)(lVar6 + lVar12 * 8);
    }
  }
  if (*(longlong *)(*param_1 + 8 + (longlong)iVar4 * 0x28) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar4,1);
  return 1;
}



// FUNCTION 14283f370 Remove body=190 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar6 = (longlong)param_2 * 0x40;
    lVar3 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x3c + lVar5));
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    piVar4 = (int *)((longlong)plVar2 + lVar3 * 4);
    iVar1 = *(int *)((longlong)plVar2 + lVar3 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar4 = *(int *)(lVar6 + 0x38 + lVar5);
        break;
      }
      piVar4 = (int *)(lVar5 + 0x38 + (longlong)iVar1 * 0x40);
      iVar1 = *piVar4;
    }
  }
  lVar5 = (longlong)param_2 * 0x40 + *param_1;
  if (*(longlong *)(lVar5 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar5 + 8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 14283f430 FUN_14283f430 body=212 status=ok
// SIG undefined FUN_14283f430(void)

void FUN_14283f430(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  byte bVar4;
  undefined1 local_res10 [8];
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x2ee) & 8) != 0)) {
    local_18 = local_18 & 0xffffff00;
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 != (undefined8 *)0x0) {
      uStack_10 = (undefined4)param_2;
      uStack_c = (undefined4)((ulonglong)param_2 >> 0x20);
      *puVar2 = 0;
      *(uint *)(puVar2 + 1) = local_18;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_14;
      *(undefined4 *)(puVar2 + 2) = uStack_10;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_c;
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x50) = puVar2;
      *puVar1 = puVar2;
    }
    *(byte *)(param_2 + 0x2ee) = *(byte *)(param_2 + 0x2ee) & 0xdf;
    bVar4 = *(byte *)(param_2 + 0x2ee);
    piVar3 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(*(longlong *)(param_1 + 8) + 0x118,local_res10,param_2);
    if (*piVar3 != -1) {
      FDynamicTextureInstanceManager::FTasks::SyncResults(param_1 + 0x10);
      FTextureInstanceState::RemoveComponent(*(undefined8 *)(param_1 + 8),param_2,param_3);
      bVar4 = *(byte *)(param_2 + 0x2ee);
    }
    *(byte *)(param_2 + 0x2ee) = bVar4 & 0xf7;
  }
  return;
}



// FUNCTION 14283f510 FUN_14283f510 body=515 status=ok
// SIG undefined FUN_14283f510(void)

void FUN_14283f510(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *local_68;
  int local_60;
  int iStack_5c;
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  local_68 = (longlong *)0x0;
  local_60 = 0;
  iStack_5c = 0;
  FTextureInstanceState::GetReferencedComponents(param_1[3],&local_68);
  iVar2 = (int)param_1[10];
  plVar9 = local_68;
  if (iVar2 != 0) {
    if (iStack_5c < local_60 + iVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_68);
    }
    iVar7 = local_60;
    plVar9 = local_68;
    _guard_xfg_dispatch_icall_nop(local_68 + local_60,(void *)param_1[9],(longlong)iVar2 << 3);
    local_60 = iVar7 + iVar2;
  }
  iVar2 = (int)param_1[0xc];
  iVar7 = local_60;
  if (iVar2 != 0) {
    if (iStack_5c < local_60 + iVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_68);
      plVar9 = local_68;
    }
    iVar7 = local_60;
    _guard_xfg_dispatch_icall_nop(plVar9 + local_60,(void *)param_1[0xb],(longlong)iVar2 << 3);
    iVar7 = iVar7 + iVar2;
  }
  uVar6 = 0;
  uVar8 = (ulonglong)((longlong)(plVar9 + iVar7) + (7 - (longlong)plVar9)) >> 3;
  if (plVar9 + iVar7 < plVar9) {
    uVar8 = uVar6;
  }
  plVar4 = plVar9;
  if (uVar8 != 0) {
    do {
      if (*plVar4 != 0) {
        pbVar1 = (byte *)(*plVar4 + 0x2ee);
        *pbVar1 = *pbVar1 & 0xfb;
      }
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar8);
  }
  if (param_2 != 0) {
    FUN_1428441f0(param_1 + 4);
    FTextureInstanceView::FTextureIterator::FTextureIterator(&local_58,param_1[3]);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        iVar2 = *(int *)(param_2 + 0x68);
        uVar3 = *(undefined8 *)(*local_58 + (longlong)local_3c * 0x18);
        *(int *)(param_2 + 0x68) = iVar2 + 1;
        if (*(int *)(param_2 + 0x6c) < iVar2 + 1) {
          TArray<UTexture2D_const_*,TInlineAllocator<12,FDefaultAllocator>_>::ResizeGrow
                    (param_2,iVar2);
        }
        lVar5 = *(longlong *)(param_2 + 0x60);
        if (*(longlong *)(param_2 + 0x60) == 0) {
          lVar5 = param_2;
        }
        local_40 = local_40 & ~local_4c;
        *(undefined8 *)(lVar5 + (longlong)iVar2 * 8) = uVar3;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
  }
  TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xd,0);
  *(undefined1 *)(param_1 + 1) = 0;
  if (*param_1 != 0) {
    pbVar1 = (byte *)(*param_1 + 0x204);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  return;
}



// FUNCTION 14283f720 Remove body=231 status=ok
// SIG undefined Remove(void)

void FStaticTextureInstanceManager::Remove(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int local_res8 [2];
  
  FUN_1428441f0(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FTextureInstanceState::RemoveComponent(lVar3,param_2,param_3);
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x118,local_res8,param_2);
    piVar5 = (int *)0x0;
    if (local_res8[0] != -1) {
      piVar5 = (int *)(*(longlong *)(lVar3 + 0x118) + (longlong)local_res8[0] * 0x18);
    }
    piVar4 = piVar5 + 2;
    if (piVar5 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      while (iVar2 != -1) {
        puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar2 * 0x28);
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x20) + 0x10 + (longlong)iVar2 * 0x28);
        if (iVar2 != -1) {
          *(undefined8 *)(*(longlong *)(lVar3 + 0xd8) + (longlong)iVar2 * 8) = 0;
        }
        iVar2 = *(int *)((longlong)puVar1 + 0x24);
        *puVar1 = 0;
      }
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(lVar3 + 0x118,param_2);
    }
  }
  return;
}



// FUNCTION 14283f810 FUN_14283f810 body=264 status=ok
// SIG undefined FUN_14283f810(void)

void FUN_14283f810(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = *param_1 + (longlong)param_2 * 0x28;
    iVar6 = param_3;
    do {
      plVar3 = *(longlong **)(lVar7 + 0x18);
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
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      lVar7 = lVar7 + 0x28;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x28),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar5 * 0x28);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14283f920 RemoveAtSwap body=272 status=ok
// SIG undefined RemoveAtSwap(void)

void TIndirectArray<FLevelTextureManager,FDefaultAllocator>::RemoveAtSwap
               (longlong *param_1,uint param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(int)param_2;
  plVar5 = (longlong *)(*param_1 + uVar6 * 8);
  iVar4 = param_3;
  if (param_3 != 0) {
    do {
      lVar2 = *plVar5;
      *(undefined4 *)(lVar2 + 0xb0) = 0;
      if (*(longlong *)(lVar2 + 0xa8) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2 + 0x68);
      if (*(longlong *)(lVar2 + 0x58) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        FMemory::Free();
      }
      *(undefined ***)(lVar2 + 0x10) = &PTR__scalar_deleting_destructor__1451c0428;
      FUN_1428441f0(lVar2 + 0x20);
      puVar3 = *(undefined8 **)(lVar2 + 0x30);
      if (puVar3 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      FTextureInstanceStateTaskSync<FStaticTextureInstanceManager::FTasks>::
      ~FTextureInstanceStateTaskSync<FStaticTextureInstanceManager::FTasks>(lVar2 + 0x18);
      *(undefined ***)(lVar2 + 0x10) = &PTR_FUN_143f74a00;
      FMemory::Free(*plVar5);
      plVar5 = plVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar6 = (ulonglong)param_2;
  }
  TArray<void_*,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (param_1,uVar6 & 0xffffffff,param_3,param_4);
  return;
}



// FUNCTION 14283fa30 RemoveAtSwapImpl body=126 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<void_*,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = (int)param_1[1];
    iVar1 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 8),
                 (void *)(*param_1 + (longlong)(iVar2 - iVar1) * 8),(longlong)iVar1 << 3);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14283fab0 RemoveBounds body=433 status=ok
// SIG undefined RemoveBounds(void)

void FTextureInstanceState::RemoveBounds(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xe0))) {
    piVar1 = *(int **)(param_1 + 0x108);
    for (piVar7 = piVar1; piVar7 != piVar1 + *(int *)(param_1 + 0x110); piVar7 = piVar7 + 1) {
      if (*piVar7 == param_2) {
        iVar6 = (int)((longlong)piVar7 - (longlong)piVar1 >> 2);
        if (iVar6 != -1) {
          piVar1[iVar6] = -1;
        }
        break;
      }
    }
    if (param_2 < *(int *)(param_1 + 0xe0)) {
      if (*(int *)(param_1 + 0xf0) + 1 != *(int *)(param_1 + 0x18) << 2) {
        iVar6 = *(int *)(param_1 + 0xf0);
        *(int *)(param_1 + 0xf0) = iVar6 + 1;
        if (*(int *)(param_1 + 0xf4) < iVar6 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xe8,iVar6);
        }
        *(int *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar6 * 4) = param_2;
        uVar4 = param_2 >> 0x1f & 3;
        uVar2 = param_2 + uVar4;
        lVar3 = (longlong)(int)((uVar2 & 3) - uVar4);
        lVar5 = (longlong)((int)uVar2 >> 2) * 0xf0 + *(longlong *)(param_1 + 0x10);
        *(undefined4 *)(lVar5 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x10 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x20 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x30 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x40 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x50 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x60 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x70 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x80 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0x90 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0xa0 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0xb0 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0xc0 + lVar3 * 4) = 0;
        *(undefined4 *)(lVar5 + 0xd0 + lVar3 * 4) = 0x7f7fffff;
        *(undefined4 *)(lVar5 + 0xe0 + lVar3 * 4) = 0xff7fffff;
        *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + (longlong)param_2 * 8) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (*(int *)(param_1 + 0x1c) != 0) {
        TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      if (*(int *)(param_1 + 0xe4) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xd8,0);
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if (*(int *)(param_1 + 0xf4) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xe8,0);
      }
    }
  }
  return;
}



// FUNCTION 14283fc70 RemoveComponent body=435 status=ok
// SIG undefined RemoveComponent(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FTextureInstanceState::RemoveComponent(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  int local_98;
  int local_94;
  longlong local_90;
  int local_88 [12];
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  piVar7 = (int *)0x0;
  local_50 = 0;
  local_58 = (int *)0x0;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x118,&local_98,param_2);
  piVar5 = piVar7;
  if (local_98 != -1) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x118) + 8 + (longlong)local_98 * 0x18);
    local_98 = iVar1;
    TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x118);
    piVar5 = local_58;
    while (local_58 = piVar5, iVar1 != -1) {
      local_a8 = &local_90;
      local_94 = -1;
      local_90 = 0;
      RemoveElement(param_1,iVar1,&local_98,&local_94);
      uVar2 = local_50;
      iVar1 = local_94;
      if (local_94 != -1) {
        piVar5 = local_88;
        if (local_58 != (int *)0x0) {
          piVar5 = local_58;
        }
        for (piVar9 = piVar5; piVar9 != piVar5 + (int)local_50; piVar9 = piVar9 + 1) {
          if (*piVar9 == local_94) {
            if ((int)((longlong)piVar9 - (longlong)piVar5 >> 2) != -1) goto LAB_14283fd8f;
            break;
          }
        }
        lVar6 = (longlong)(int)local_50;
        iVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar3);
        if (local_50._4_4_ < iVar3) {
          TArray<int,TInlineAllocator<12,FDefaultAllocator>_>::ResizeGrow
                    (local_88,uVar2 & 0xffffffff);
        }
        piVar5 = local_88;
        if (local_58 != (int *)0x0) {
          piVar5 = local_58;
        }
        piVar5[lVar6] = iVar1;
      }
LAB_14283fd8f:
      iVar1 = local_98;
      piVar5 = local_58;
      if ((local_90 != 0) && (param_3 != 0)) {
        TArray<UTexture2D_const_*,TInlineAllocator<12,FDefaultAllocator>_>::
        AddUniqueImpl<UTexture2D_const_*_const_&>(param_3,&local_90);
        iVar1 = local_98;
        piVar5 = local_58;
      }
    }
  }
  piVar9 = piVar7;
  if (0 < (int)local_50) {
    do {
      piVar4 = local_88;
      if (piVar5 != (int *)0x0) {
        piVar4 = piVar5;
      }
      RemoveBounds(param_1,*(undefined4 *)((longlong)piVar4 + (longlong)piVar7));
      piVar7 = piVar7 + 1;
      uVar8 = (int)piVar9 + 1;
      piVar5 = local_58;
      piVar9 = (int *)(ulonglong)uVar8;
    } while ((int)uVar8 < (int)local_50);
  }
  if (piVar5 != (int *)0x0) {
    FMemory::Free(piVar5);
  }
  return;
}



// FUNCTION 14283fe30 RemoveComponentReferences body=278 status=ok
// SIG undefined RemoveComponentReferences(void)

void FLevelTextureManager::RemoveComponentReferences
               (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int local_res8 [2];
  undefined8 *local_res10;
  
  local_res10 = param_2;
  FUN_1428441f0(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FTextureInstanceState::RemoveComponent(lVar3,param_2,param_3);
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x118,local_res8,param_2);
    piVar5 = (int *)0x0;
    if (local_res8[0] != -1) {
      piVar5 = (int *)(*(longlong *)(lVar3 + 0x118) + (longlong)local_res8[0] * 0x18);
    }
    piVar4 = piVar5 + 2;
    if (piVar5 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      while (iVar2 != -1) {
        puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar2 * 0x28);
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x20) + 0x10 + (longlong)iVar2 * 0x28);
        if (iVar2 != -1) {
          *(undefined8 *)(*(longlong *)(lVar3 + 0xd8) + (longlong)iVar2 * 8) = 0;
        }
        iVar2 = *(int *)((longlong)puVar1 + 0x24);
        *puVar1 = 0;
      }
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(lVar3 + 0x118,param_2);
    }
  }
  TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap(param_1 + 0x48,&local_res10,1);
  TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap(param_1 + 0x58,&local_res10,1);
  return;
}



// FUNCTION 14283ff50 RemoveElement body=743 status=ok
// SIG undefined RemoveElement(void)

void FTextureInstanceState::RemoveElement
               (longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 uStack_60;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar13 = (longlong)param_2;
  *param_3 = *(undefined4 *)(lVar5 + 0x24 + lVar13 * 0x28);
  *param_4 = *(undefined4 *)(lVar5 + 0x10 + lVar13 * 0x28);
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    iVar11 = *(int *)(lVar5 + 0x10 + lVar13 * 0x28);
    cVar4 = *(char *)(lVar5 + 0x18 + lVar13 * 0x28);
    fVar3 = *(float *)(lVar5 + 0x14 + lVar13 * 0x28);
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x80,local_res8,*(undefined8 *)(lVar5 + 8 + lVar13 * 0x28));
    if (local_res8[0] == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x80);
    }
    piVar8 = *(int **)(lVar10 + 8);
    iVar12 = *(int *)(lVar10 + 0x10);
    for (piVar6 = piVar8; piVar6 != piVar8 + (longlong)iVar12 * 3; piVar6 = piVar6 + 3) {
      if (((*piVar6 == iVar11) && (fVar3 == (float)piVar6[1])) && ((char)piVar6[2] == cVar4)) {
        lVar9 = ((longlong)piVar6 - (longlong)piVar8) / 6 +
                ((longlong)piVar6 - (longlong)piVar8 >> 0x3f);
        iVar11 = (int)(lVar9 >> 1) - (int)(lVar9 >> 0x3f);
        if (iVar11 != -1) {
          iVar7 = (iVar12 - iVar11) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      (piVar8 + (longlong)iVar11 * 3,piVar8 + (longlong)(iVar12 - iVar7) * 3,
                       (longlong)iVar7 * 0xc);
            iVar12 = *(int *)(lVar10 + 0x10);
          }
          *(int *)(lVar10 + 0x10) = iVar12 + -1;
        }
        break;
      }
    }
  }
  iVar11 = local_res10[0];
  lVar10 = *(longlong *)(lVar5 + 8 + lVar13 * 0x28);
  if (lVar10 != 0) {
    iVar12 = *(int *)(lVar5 + 0x1c + lVar13 * 0x28);
    if (iVar12 == -1) {
      iVar12 = *(int *)(lVar5 + 0x20 + lVar13 * 0x28);
      if (iVar12 == -1) {
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x30);
        FUN_141efa480(param_1 + 0x80,*(undefined8 *)(lVar5 + 8 + lVar13 * 0x28));
        *param_5 = *(undefined8 *)(lVar5 + 8 + lVar13 * 0x28);
      }
      else {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x30,local_res10,lVar10);
        piVar8 = (int *)0x0;
        if (local_res10[0] != -1) {
          piVar8 = (int *)(*(longlong *)(param_1 + 0x30) + (longlong)local_res10[0] * 0x18);
        }
        piVar6 = piVar8 + 2;
        if (piVar8 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        *piVar6 = iVar12;
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x20) + 0x1c +
         (longlong)*(int *)(lVar5 + 0x20 + lVar13 * 0x28) * 0x28) = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20 + (longlong)iVar12 * 0x28) =
           *(undefined4 *)(lVar5 + 0x20 + lVar13 * 0x28);
      iVar12 = *(int *)(lVar5 + 0x20 + lVar13 * 0x28);
      if (iVar12 != -1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c + (longlong)iVar12 * 0x28) =
             *(undefined4 *)(lVar5 + 0x1c + lVar13 * 0x28);
      }
    }
  }
  if (*(int *)(param_1 + 0x100) + 1 != *(int *)(param_1 + 0x28)) {
    iVar12 = *(int *)(param_1 + 0x100);
    *(int *)(param_1 + 0x100) = iVar12 + 1;
    if (*(int *)(param_1 + 0x104) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0xf8),iVar12);
    }
    *(int *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar12 * 4) = iVar11;
    puVar1 = (undefined8 *)(lVar5 + lVar13 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar13 * 0x28);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    puVar2[2] = uStack_60;
    puVar2[3] = 0xffffffff;
    *(undefined8 *)(lVar5 + 0x20 + lVar13 * 0x28) = 0xffffffffffffffff;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x20,0);
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xf8,0);
  }
  return;
}



// FUNCTION 142840240 FUN_142840240 body=350 status=ok
// SIG undefined FUN_142840240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142840240(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar6 = 0;
  uVar4 = uVar6;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar7;
    uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
  }
  if ((((*(uint *)(uVar4 + 8) >> 0x1d & 1) != 0) || ((*(uint *)(param_2 + 8) & 0x18000) != 0)) &&
     (0 < *(int *)(param_1 + 0x750))) {
    puVar5 = *(undefined8 **)(param_1 + 0x748);
    uVar4 = uVar6;
    do {
      if (*(longlong *)*puVar5 == param_2) {
        local_28 = 0;
        local_20 = 0;
        FUN_14283f510((longlong *)*puVar5,local_88);
        FUN_142842e80(param_1,local_88);
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x970);
        BVar3 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar3 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        TIndirectArray<FLevelTextureManager,FDefaultAllocator>::RemoveAtSwap
                  ((undefined8 *)(param_1 + 0x748),uVar4,1,1);
        LeaveCriticalSection(lpCriticalSection);
        if (local_28 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x750));
  }
  return;
}



// FUNCTION 1428403a0 FUN_1428403a0 body=255 status=ok
// SIG undefined FUN_1428403a0(void)

void FUN_1428403a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *local_res10;
  longlong local_18;
  longlong *local_10;
  
  local_res10 = (longlong *)0x0;
  if (*param_2 == 0) {
    plVar3 = (longlong *)param_3[1];
  }
  else {
    lVar5 = FStreamableManager::FindStreamable();
    if (lVar5 != 0) {
      local_18 = *param_3;
      local_10 = (longlong *)param_3[1];
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
        UNLOCK();
      }
      local_res10 = &local_18;
      TArray<TWeakPtr<IBusListener,1>,FDefaultAllocator>::
      RemoveAll<<lambda_75c4bb420badbf6619ba8f8d778f9e7f>_>(lVar5 + 0x20,&local_res10);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_10 != (longlong *)0x0)) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
      iVar4 = TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
                        (lVar5 + 0x10,param_3);
      if ((0 < iVar4) &&
         (*(int *)(*param_3 + 0x5c) = *(int *)(*param_3 + 0x5c) - iVar4, *(int *)(lVar5 + 0x18) == 0
         )) {
        *(undefined1 *)(lVar5 + 8) = 0;
      }
    }
    plVar3 = (longlong *)param_3[1];
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1428404a0 FUN_1428404a0 body=505 status=ok
// SIG undefined FUN_1428404a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428404a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  undefined8 *local_b0;
  undefined8 local_a8 [12];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(byte *)((longlong)param_2 + 0x2ee) & 4) != 0) {
    uVar10 = 0;
    local_48 = 0;
    local_40 = 0;
    lVar5 = FUN_14233ccd0(param_2);
    plVar8 = *(longlong **)(param_1 + 0x748);
    uVar9 = (longlong)*(int *)(param_1 + 0x750) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0x750) < plVar8) {
      uVar9 = uVar10;
    }
    if (uVar9 != 0) {
      do {
        plVar3 = (longlong *)*plVar8;
        if ((lVar5 == 0) || (*plVar3 == lVar5)) {
          local_b0 = param_2;
          FUN_1428441f0(plVar3 + 4);
          lVar4 = plVar3[3];
          if (plVar3[6] == 0) {
            FTextureInstanceState::RemoveComponent(lVar4,param_2,local_a8);
          }
          else {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(lVar4 + 0x118,local_b8,param_2);
            piVar7 = (int *)0x0;
            if (local_b8[0] != -1) {
              piVar7 = (int *)(*(longlong *)(lVar4 + 0x118) + (longlong)local_b8[0] * 0x18);
            }
            piVar6 = piVar7 + 2;
            if (piVar7 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            if (piVar6 != (int *)0x0) {
              iVar2 = *piVar6;
              while (iVar2 != -1) {
                puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar2 * 0x28);
                iVar2 = *(int *)(*(longlong *)(lVar4 + 0x20) + 0x10 + (longlong)iVar2 * 0x28);
                if (iVar2 != -1) {
                  *(undefined8 *)(*(longlong *)(lVar4 + 0xd8) + (longlong)iVar2 * 8) = 0;
                }
                iVar2 = *(int *)((longlong)puVar1 + 0x24);
                *puVar1 = 0;
              }
              TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
              ::Remove(lVar4 + 0x118,param_2);
            }
          }
          TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap(plVar3 + 9,&local_b0,1);
          TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap
                    (plVar3 + 0xb,&local_b0,1);
        }
        plVar8 = plVar8 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar9);
    }
    *(byte *)((longlong)param_2 + 0x2ee) = *(byte *)((longlong)param_2 + 0x2ee) & 0xfb;
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1428406a0 FUN_1428406a0 body=438 status=ok
// SIG undefined FUN_1428406a0(void)

void FUN_1428406a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  BOOL BVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar11 = *(int *)(param_2 + 0xb8);
  lVar9 = 0;
  if ((-1 < iVar11) && (iVar11 < *(int *)(param_1 + 0x18))) {
    if (*(longlong *)((longlong)iVar11 * 200 + *(longlong *)(param_1 + 0x10)) == param_2) {
      *(undefined8 *)((longlong)iVar11 * 200 + *(longlong *)(param_1 + 0x10)) = 0;
      iVar4 = *(int *)(param_1 + 0x728);
      *(int *)(param_1 + 0x728) = iVar4 + 1;
      if (*(int *)(param_1 + 0x72c) < iVar4 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x720,iVar4);
      }
      *(int *)(*(longlong *)(param_1 + 0x720) + (longlong)iVar4 * 4) = iVar11;
      goto LAB_142840753;
    }
  }
  local_28 = local_28 & 0xffffff00;
  puVar5 = (undefined8 *)operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    uStack_20 = (undefined4)param_2;
    uStack_1c = (undefined4)((ulonglong)param_2 >> 0x20);
    *puVar5 = 0;
    *(uint *)(puVar5 + 1) = local_28;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_24;
    *(undefined4 *)(puVar5 + 2) = uStack_20;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_1c;
    puVar1 = *(undefined8 **)(param_1 + 0x960);
    *(undefined8 **)(param_1 + 0x960) = puVar5;
    *puVar1 = puVar5;
  }
LAB_142840753:
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
  }
  *(byte *)(param_2 + 0xc4) = *(byte *)(param_2 + 0xc4) & 0xfb;
  *(undefined4 *)(param_2 + 0xb8) = 0xffffffff;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x20,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x998));
  lVar8 = (longlong)*(int *)(param_1 + 0x958);
  if (0 < lVar8) {
    do {
      lVar10 = *(longlong *)(param_1 + 0x950) + lVar9;
      plVar2 = *(longlong **)(lVar10 + 8);
      iVar11 = *(int *)(lVar10 + 0x10);
      for (plVar6 = plVar2; plVar6 != plVar2 + iVar11; plVar6 = plVar6 + 1) {
        if (*plVar6 == param_2) {
          iVar4 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
          if (iVar4 != -1) {
            iVar7 = (iVar11 - iVar4) + -1;
            if (0 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar2 + iVar4,plVar2 + (iVar11 - iVar7),(longlong)iVar7 << 3);
              iVar11 = *(int *)(lVar10 + 0x10);
            }
            *(int *)(lVar10 + 0x10) = iVar11 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar10 + 8);
          }
          break;
        }
      }
      lVar9 = lVar9 + 0x20;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 142840860 RequestAsyncLoad body=163 status=ok
// SIG undefined RequestAsyncLoad(void)

undefined8
FStreamableManager::RequestAsyncLoad
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  lVar1 = operator_new(0x70,&local_18);
  if (lVar1 != 0) {
    FUN_14282a0f0(lVar1,param_4);
  }
  RequestAsyncLoad(param_1,param_2,param_3,&local_18,param_5,param_6,param_7,param_8);
  return param_2;
}



// FUNCTION 142840910 RequestAsyncLoad body=317 status=ok
// SIG undefined RequestAsyncLoad(void)

undefined8
FStreamableManager::RequestAsyncLoad
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [3];
  
  local_28 = *param_3;
  FString::FString(local_20,param_3 + 1);
  local_38 = 0;
  local_30 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_38,param_4);
  local_48 = (undefined8 *)0x0;
  local_40 = 1;
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_48,1,0);
  *local_48 = local_28;
  FString::FString(local_48 + 1,local_20);
  FUN_142840b00(param_1,param_2,&local_48,&local_38,param_5,param_6,param_7,param_8);
  puVar1 = local_48;
  if (local_40 != 0) {
    plVar2 = local_48 + 1;
    iVar3 = local_40;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_2;
}



// FUNCTION 142840a50 RequestAsyncLoad body=163 status=ok
// SIG undefined RequestAsyncLoad(void)

undefined8
FStreamableManager::RequestAsyncLoad
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  lVar1 = operator_new(0x70,&local_18);
  if (lVar1 != 0) {
    FUN_14282a0f0(lVar1,param_4);
  }
  FUN_142840b00(param_1,param_2,param_3,&local_18,param_5,param_6,param_7,param_8);
  return param_2;
}



// FUNCTION 142840b00 FUN_142840b00 body=1901 status=ok
// SIG undefined FUN_142840b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142840b00(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5,char param_6,char param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Dst;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_168 [32];
  char local_148;
  int local_144;
  ulonglong local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  undefined8 *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong local_f0;
  int local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0 [2];
  longlong local_c0 [3];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  ulonglong uVar14;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_128 = param_3;
  local_120 = param_2;
  local_108 = param_1;
  local_100 = param_4;
  local_110 = (longlong *)operator_new(0x98);
  uVar8 = 0;
  if (local_110 == (longlong *)0x0) {
    local_110 = (longlong *)0x0;
  }
  else {
    *local_110 = 0;
    local_110[1] = 0;
    *(undefined4 *)(local_110 + 2) = 0;
    *(undefined2 *)((longlong)local_110 + 0x14) = 0;
    local_110[3] = 0;
    *(undefined4 *)(local_110 + 4) = 0;
    local_110[5] = 0;
    *(undefined4 *)(local_110 + 6) = 0;
    local_110[7] = 0;
    *(undefined4 *)(local_110 + 8) = 0;
    local_110[9] = 0;
    local_110[10] = 0;
    local_110[0xb] = 0;
    local_110[0xc] = 0;
    local_110[0xd] = 0;
    local_110[0xe] = 0;
    local_110[0xf] = 0;
    local_110[0x10] = 0;
    local_110[0x11] = 0;
    local_110[0x12] = 0;
  }
  plVar16 = local_110;
  local_118 = (longlong *)operator_new(0x18);
  if (local_118 == (longlong *)0x0) {
    local_118 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_118 + 1) = 1;
    *(undefined4 *)((longlong)local_118 + 0xc) = 1;
    *local_118 = (longlong)&PTR_FUN_1451c0af8;
    local_118[2] = (longlong)plVar16;
  }
  plVar9 = local_118;
  if (plVar16 != (longlong *)0x0) {
    if ((*plVar16 != 0) && (plVar16[1] != 0)) {
      piVar1 = (int *)(plVar16[1] + 8);
      LOCK();
      iVar10 = *piVar1;
      if (iVar10 == 0) {
        *piVar1 = 0;
        iVar10 = 0;
      }
      UNLOCK();
      if (0 < iVar10) goto LAB_142840ca0;
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    *plVar16 = (longlong)plVar16;
    plVar7 = (longlong *)plVar16[1];
    if (local_118 != plVar7) {
      if (local_118 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_118 + 0xc) = *(int *)((longlong)local_118 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar16[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar16[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar15 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_142840ca0:
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar16 + 3,local_100);
  plVar16[0x12] = param_1;
  plVar7 = plVar16 + 0xc;
  TArray<FSoftObjectPath,FDefaultAllocator>::operator=(plVar7,param_3);
  FString::operator=(plVar16 + 9,param_8);
  *(undefined4 *)(plVar16 + 0xb) = param_5;
  iVar12 = (int)plVar16[0xd];
  iVar10 = iVar12 + -1;
  if (-1 < iVar10) {
    local_130 = 0;
    lVar15 = (longlong)iVar10 * 0x18;
    local_144 = iVar12;
    do {
      lVar11 = *plVar7;
      if (*(longlong *)(lVar11 + lVar15) == 0) {
        local_130 = (longlong)iVar10 * 0x18;
        if (*(longlong *)(lVar11 + 8 + (longlong)iVar10 * 0x18) != 0) {
          FMemory::Free();
        }
        iVar12 = (int)plVar16[0xd];
        iVar3 = (iVar12 - iVar10) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar7 + local_130),(void *)(*plVar7 + (longlong)local_144 * 0x18),
                     (longlong)iVar3 * 0x18);
          iVar12 = (int)plVar16[0xd];
        }
        *(int *)(plVar16 + 0xd) = iVar12 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar7);
      }
      else {
        uVar4 = FSoftObjectPath::ToString(lVar11 + lVar15,local_d0);
        local_148 = FPackageName::IsShortPackageName(uVar4);
        if (local_d0[0] != 0) {
          FMemory::Free();
        }
        if (local_148 != '\0') {
          FUN_142833de0(plVar16);
          *local_120 = 0;
          local_120[1] = 0;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar9 + 1;
            lVar15 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          goto LAB_14284123e;
        }
      }
      lVar15 = lVar15 + -0x18;
      local_144 = local_144 + -1;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    iVar12 = (int)plVar16[0xd];
    param_3 = local_128;
  }
  if (iVar12 == 0) {
    FUN_142833de0(plVar16);
    *local_120 = 0;
    local_120[1] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar9 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  else {
    if (iVar12 != (int)param_3[1]) {
      lVar15 = *param_3;
      local_140 = 0;
      lVar11 = (longlong)(int)param_3[1] * 0x18 + lVar15;
      local_138 = 0;
      local_130 = lVar11;
      if (lVar15 != lVar11) {
        local_138._4_4_ = 0;
        uVar14 = uVar8;
        iVar10 = local_138._4_4_;
        do {
          iVar12 = (int)uVar14;
          if (1 < iVar12) {
            uVar13 = (3 - (uint)(iVar12 != 0)) + iVar12;
            local_138 = CONCAT44(local_138._4_4_,uVar13);
            if (iVar10 < (int)uVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,uVar14);
              uVar8 = local_140;
              iVar10 = local_138._4_4_;
              uVar13 = (uint)local_138;
            }
            uVar14 = (ulonglong)uVar13;
            puVar2 = (undefined4 *)(uVar8 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
            *puVar2 = 0x20002c;
            *(undefined2 *)(puVar2 + 1) = 0;
          }
          puVar5 = (undefined8 *)FSoftObjectPath::ToString(lVar15,local_c0);
          local_128 = (longlong *)*puVar5;
          local_144 = *(int *)(puVar5 + 1) + -1;
          if (*(int *)(puVar5 + 1) == 0) {
            local_144 = 0;
          }
          if (local_144 != 0) {
            iVar12 = (int)uVar14;
            uVar13 = local_144 + (uint)(iVar12 == 0) + iVar12;
            local_138 = CONCAT44(local_138._4_4_,uVar13);
            if (iVar10 < (int)uVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,uVar14);
              uVar8 = local_140;
              iVar10 = local_138._4_4_;
              uVar13 = (uint)local_138;
            }
            uVar14 = (ulonglong)uVar13;
            _Dst = (void *)(uVar8 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
            lVar11 = (longlong)local_144;
            _guard_xfg_dispatch_icall_nop(_Dst,local_128,lVar11 * 2);
            *(undefined2 *)(lVar11 * 2 + (longlong)_Dst) = 0;
            lVar11 = local_130;
          }
          if (local_c0[0] != 0) {
            FMemory::Free();
          }
          plVar16 = local_110;
          plVar9 = local_118;
          lVar15 = lVar15 + 0x18;
        } while (lVar15 != lVar11);
        if (uVar8 != 0) {
          FMemory::Free(local_140);
        }
      }
      plVar7 = plVar16 + 0xc;
    }
    local_a8 = 0;
    local_78 = 0xffffffff;
    local_a0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    iVar10 = (int)plVar7[1];
    if (0 < iVar10) {
      FUN_14089d3b0(&local_a8,iVar10);
      iVar10 = (int)plVar7[1];
    }
    lVar11 = *plVar7;
    lVar15 = lVar11 + (longlong)iVar10 * 0x18;
    for (; lVar11 != lVar15; lVar11 = lVar11 + 0x18) {
      FUN_1422b78e0(&local_a8,local_f8,lVar11,0);
    }
    if ((int)local_a0 - local_74 != (int)plVar16[0xd]) {
      local_128 = (longlong *)
                  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
                  Array(&local_a8,&local_f0);
      if (plVar7 != local_128) {
        iVar10 = (int)plVar7[1];
        lVar15 = *plVar7;
        if (iVar10 != 0) {
          plVar6 = (longlong *)(lVar15 + 8);
          do {
            if (*plVar6 != 0) {
              FMemory::Free();
            }
            plVar6 = plVar6 + 3;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          lVar15 = *plVar7;
        }
        plVar6 = local_128;
        if (lVar15 != 0) {
          FMemory::Free();
        }
        *plVar7 = *plVar6;
        *plVar6 = 0;
        *(int *)(plVar7 + 1) = (int)plVar6[1];
        *(undefined4 *)((longlong)plVar7 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
        plVar6[1] = 0;
      }
      if (local_e8 != 0) {
        plVar7 = (longlong *)(local_f0 + 8);
        iVar10 = local_e8;
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (local_f0 != 0) {
        FMemory::Free();
      }
    }
    lVar15 = local_108;
    if (param_6 != '\0') {
      iVar10 = *(int *)(local_108 + 0xb8);
      *(int *)(local_108 + 0xb8) = iVar10 + 1;
      if (*(int *)(local_108 + 0xbc) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_108 + 0xb0,iVar10);
      }
      puVar5 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar15 + 0xb0));
      *puVar5 = plVar16;
      puVar5[1] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
    }
    if (param_7 == '\0') {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_e0 = plVar16;
      local_d8 = plVar9;
      FUN_142842fa0(lVar15,&local_e0);
    }
    else {
      *(undefined1 *)((longlong)plVar16 + 0x13) = 1;
    }
    *local_120 = plVar16;
    local_120[1] = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_60 = 0;
    if (local_68 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_a8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar9 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_14284123e:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_100);
  return local_120;
}



// FUNCTION 142841270 RequestSyncLoad body=182 status=ok
// SIG undefined RequestSyncLoad(void)

longlong *
FStreamableManager::RequestSyncLoad
          (longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
          undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  if (cVar1 == '\0') {
    cVar1 = FUN_1416fbb40();
    if (cVar1 == '\0') {
      cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
      if (cVar1 != '\0') {
        uVar2 = 0;
        goto LAB_1428412b4;
      }
    }
  }
  uVar2 = 1;
LAB_1428412b4:
  *(undefined1 *)(param_1 + 0xd0) = uVar2;
  local_18 = 0;
  local_10 = 0;
  FUN_142840b00(param_1,param_2,param_3,&local_18,100,param_4,0,param_5);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (*param_2 != 0) {
    FUN_142847970(*param_2,0);
  }
  return param_2;
}



// FUNCTION 142841330 Reset body=204 status=ok
// SIG undefined Reset(void)

void TArray<FTextureInstanceAsyncView,FDefaultAllocator>::Reset(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  plVar4 = (longlong *)*param_1;
  iVar5 = *(int *)(param_1 + 1);
  if (iVar3 < param_2) {
    if (iVar5 != 0) {
      do {
        if (plVar4[1] != 0) {
          FMemory::Free();
        }
        puVar2 = (undefined8 *)*plVar4;
        if (puVar2 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
        plVar4 = plVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar3 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar3 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (plVar4[1] != 0) {
        FMemory::Free();
      }
      puVar2 = (undefined8 *)*plVar4;
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar4 = plVar4 + 4;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 142841400 FUN_142841400 body=102 status=ok
// SIG undefined FUN_142841400(void)

void FUN_142841400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,float param_7)

{
  float fVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  *(longlong *)(param_1 + 0xc0) = param_5;
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  *(undefined8 *)(param_1 + 200) = param_6;
  fVar1 = 0.0;
  if ((0.0 <= param_7) && (fVar1 = param_7, 1.0 <= param_7)) {
    fVar1 = 1.0;
  }
  *(longlong *)(param_1 + 0xe0) = (longlong)((float)param_5 * fVar1);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 142841480 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<int,TInlineAllocator<12,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x38);
  if (uVar1 < 0xd) {
    uVar2 = 0xc;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x3c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x3c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x30);
  if (uVar2 < 0xd) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 2,0);
        *(void **)((longlong)param_1 + 0x30) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar5;
  return;
}



// FUNCTION 142841570 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<UTexture2D_const_*,TInlineAllocator<12,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x68);
  if (uVar1 < 0xd) {
    uVar2 = 0xc;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x6c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x6c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x60);
  if (uVar2 < 0xd) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x60);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x60) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar5;
  return;
}



// FUNCTION 142841660 ResizeShrink body=171 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FRemnantQuestEntry,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 200) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 200,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 7);
      }
      goto LAB_1428416da;
    }
    if (iVar5 == 0) goto LAB_1428416da;
  }
  iVar5 = iVar6;
LAB_1428416da:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 200,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142841710 FUN_142841710 body=460 status=ok
// SIG undefined FUN_142841710(void)

void FUN_142841710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  
  if (param_2 != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x958);
    iVar16 = 0;
    if (0 < *(int *)(param_1 + 0x958)) {
      lVar11 = 0;
      plVar1 = (longlong *)(param_1 + 0x950);
      plVar7 = (longlong *)*plVar1;
      do {
        if (*plVar7 == param_2) {
          plVar17 = (longlong *)plVar7[1];
          plVar7 = plVar17 + (int)plVar7[2];
          do {
            if (plVar17 == plVar7) {
              if (*(longlong *)((longlong)iVar16 * 0x20 + 8 + *plVar1) != 0) {
                FMemory::Free();
              }
              iVar12 = *(int *)(param_1 + 0x958);
              iVar9 = (iVar12 - iVar16) + -1;
              if (0 < iVar9) {
                iVar9 = 1;
              }
              if (iVar9 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar1 + (longlong)iVar16 * 0x20),
                           (void *)((longlong)(iVar12 - iVar9) * 0x20 + *plVar1),
                           (longlong)iVar9 << 5);
                iVar12 = *(int *)(param_1 + 0x958);
              }
              *(int *)(param_1 + 0x958) = iVar12 + -1;
              TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
              return;
            }
            lVar3 = *plVar17;
            bVar4 = false;
            bVar10 = 0;
            lVar13 = 0;
            iVar12 = 0x7fffffff;
            if (0 < lVar6) {
              lVar15 = 0;
              bVar4 = false;
              do {
                iVar9 = iVar12;
                if (lVar11 != lVar13) {
                  lVar14 = *plVar1 + lVar15;
                  plVar8 = *(longlong **)(lVar14 + 8);
                  plVar2 = plVar8 + *(int *)(lVar14 + 0x10);
                  for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
                    if (*plVar8 == lVar3) {
                      bVar4 = true;
                      bVar10 = bVar10 | *(byte *)(lVar14 + 0x1c);
                      iVar9 = *(int *)(lVar14 + 0x18);
                      if (iVar12 <= *(int *)(lVar14 + 0x18)) {
                        iVar9 = iVar12;
                      }
                      break;
                    }
                  }
                }
                iVar12 = iVar9;
                lVar13 = lVar13 + 1;
                lVar15 = lVar15 + 0x20;
              } while (lVar13 < lVar6);
            }
            bVar5 = *(byte *)(lVar3 + 0x4b) & 0xf7;
            if (bVar4) {
              bVar5 = (bVar10 & 1) << 3 | bVar5;
            }
            else {
              *(byte *)(lVar3 + 0xc4) = *(byte *)(lVar3 + 0xc4) & 0xf7;
              iVar12 = 0;
            }
            plVar17 = plVar17 + 1;
            *(byte *)(lVar3 + 0x4b) = bVar5;
            *(int *)(lVar3 + 0xf0) = iVar12;
          } while( true );
        }
        iVar16 = iVar16 + 1;
        lVar11 = lVar11 + 1;
        plVar7 = plVar7 + 4;
      } while (lVar11 < lVar6);
    }
  }
  return;
}



// FUNCTION 142841910 FUN_142841910 body=891 status=ok
// SIG undefined FUN_142841910(void)

ulonglong FUN_142841910(longlong *param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  ulonglong uVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  if (((int)param_2[2] == 2) && (uVar8 = FUN_141636a40(), (char)uVar8 == '\0')) {
    *(undefined4 *)(param_1 + 6) = 1;
    return uVar8;
  }
  if (param_3 == 1) {
    LOCK();
    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
    UNLOCK();
    *(undefined4 *)(param_1 + 6) = 2;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      lVar11 = *param_2;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_38);
      (**(code **)(*param_1 + 0x20))(param_1,lVar11,1);
      LOCK();
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
      UNLOCK();
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_38._0_4_);
      return (ulonglong)(local_res10.s.LowPart - local_38._0_4_);
    }
    pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar10 = TlsGetValue(*pDVar9);
    plVar14 = (longlong *)0x0;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)operator_new(0x18);
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = 0;
        plVar10[1] = 0;
        *(undefined4 *)(plVar10 + 2) = 0;
        plVar14 = plVar10;
      }
      TlsSetValue(*pDVar9,plVar14);
      plVar10 = plVar14;
    }
    plVar14 = (longlong *)plVar10[1];
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)*plVar10;
      if (plVar14 == (longlong *)0x0) {
        lVar11 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
        plVar10[1] = lVar11;
        if (lVar11 == 0) {
          puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar10[1] = (longlong)puVar12;
          lVar11 = 0x1f;
          do {
            puVar3 = puVar12 + 0x20;
            *puVar12 = puVar3;
            lVar11 = lVar11 + -1;
            puVar12 = puVar3;
          } while (lVar11 != 0);
          *puVar3 = 0;
        }
        plVar14 = (longlong *)plVar10[1];
        iVar15 = 0x20;
        *(undefined4 *)(plVar10 + 2) = 0x20;
      }
      else {
        iVar15 = 0x20;
        plVar10[1] = (longlong)plVar14;
        *(undefined4 *)(plVar10 + 2) = 0x20;
        *plVar10 = 0;
      }
    }
    else {
      iVar15 = (int)plVar10[2];
    }
    plVar10[1] = *plVar14;
    *(int *)(plVar10 + 2) = iVar15 + -1;
    *plVar14 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar14 + 1) = 0xff;
    local_30 = 0;
    local_28 = 0;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_1451c0740;
    *(undefined1 *)(plVar14 + 4) = 0;
    plVar14[5] = 0;
    lVar11 = *param_2;
    plVar14[3] = (longlong)param_1;
    plVar14[2] = lVar11;
    lVar11 = plVar14[5];
    puVar1 = (uint *)(lVar11 + 0x48);
    if (lVar11 != 0) {
      LOCK();
      *puVar1 = *puVar1 + 1;
      UNLOCK();
    }
    uVar8 = FUN_1409421c0(plVar14,0,0xff,1);
    if (lVar11 == 0) {
      return uVar8;
    }
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar4 != 1) {
      return (ulonglong)uVar4;
    }
    uVar8 = FGraphEvent::Recycle(lVar11);
    return uVar8;
  }
  plVar14 = param_1 + 4;
  plVar10 = (longlong *)0x0;
  if (param_1[4] != 0) {
    uVar8 = 0;
    puVar1 = (uint *)(param_1[4] + 0x18);
    LOCK();
    uVar4 = *puVar1;
    if (uVar4 == 0) {
      *puVar1 = 0;
    }
    else {
      uVar8 = (ulonglong)uVar4;
    }
    UNLOCK();
    if (uVar4 != 0) {
      *(undefined4 *)(param_1 + 6) = 1;
      return uVar8;
    }
  }
  LOCK();
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  UNLOCK();
  *(undefined4 *)(param_1 + 6) = 2;
  if (*plVar14 != 0) {
    FUN_142838990(*plVar14,1);
  }
  plVar13 = (longlong *)operator_new(0x30);
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = (longlong)&PTR_FUN_1451c0728;
    plVar13[1] = *param_2;
    plVar13[2] = (longlong)param_1;
    *(undefined4 *)(plVar13 + 3) = 0;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar10 = plVar13;
  }
  if (plVar14 == &local_20) {
    if (plVar10 == (longlong *)0x0) goto LAB_142841bff;
    lVar11 = *plVar10;
  }
  else {
    plVar13 = (longlong *)*plVar14;
    *plVar14 = (longlong)plVar10;
    if (plVar13 == (longlong *)0x0) goto LAB_142841bff;
    lVar11 = *plVar13;
    plVar10 = plVar13;
  }
  (**(code **)(lVar11 + 0x10))(plVar10,1);
LAB_142841bff:
  lVar5 = DAT_1468b5010;
  lVar11 = *plVar14;
  LOCK();
  *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
  UNLOCK();
  plVar14 = *(longlong **)(lVar11 + 0x20);
  *(longlong *)(lVar11 + 0x28) = lVar5;
  if (lVar5 == 0) {
    FUN_1415b5910();
    *(undefined8 *)(lVar11 + 0x20) = 0;
    (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x20))
              (*(longlong **)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 8),2);
    uVar8 = *(ulonglong *)(lVar11 + 0x10);
    LOCK();
    piVar2 = (int *)(uVar8 + 0x1c);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
    UNLOCK();
    return uVar8;
  }
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)FUN_1415ab270(1);
    *(longlong **)(lVar11 + 0x20) = plVar14;
  }
  (**(code **)(*plVar14 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x000142841c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x10))(*(longlong **)(lVar11 + 0x28),lVar11)
  ;
  return uVar8;
}



// FUNCTION 142841c90 FUN_142841c90 body=969 status=ok
// SIG undefined FUN_142841c90(void)

void FUN_142841c90(longlong param_1,longlong *param_2)

{
  void **ppvVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  void **ppvVar15;
  void *pvVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 uStack_7c;
  void *local_78;
  undefined8 local_70;
  longlong local_68 [2];
  void *local_58 [3];
  ulonglong uVar21;
  
  bVar6 = false;
  bVar5 = false;
  lVar4 = *(longlong *)(*param_2 + 0xd8);
  uVar19 = *(uint *)(param_1 + 0x10);
  uVar20 = (ulonglong)(int)uVar19;
  iVar3 = *(int *)(param_2[1] + 0x78);
  uVar21 = uVar20;
  do {
    if ((longlong)iVar3 <= (longlong)uVar20) {
LAB_142842022:
      if (*(int *)(param_1 + 0x2c8) < 2) {
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
      return;
    }
    uVar17 = (uint)uVar21;
    lVar11 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar20 * 8);
    cVar7 = FUntypedBulkData::IsStoredCompressedOnDisk(lVar11 + 8);
    if ((cVar7 != '\0') || (iVar8 = FUntypedBulkData::GetBulkDataSize(lVar11 + 8), iVar8 < 1)) {
LAB_142841fdd:
      *(undefined4 *)(param_1 + 0x2c8) = 0;
      if ((*(int *)(param_1 + 0x2cc) < 0) && (*(int *)(param_1 + 0x2cc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x2c0,0);
      }
      if (*(undefined2 **)(param_1 + 0x2c0) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x2c0) = 0;
      }
      goto LAB_142842022;
    }
    bVar2 = *(byte *)(lVar11 + 6);
    if (uVar17 == *(uint *)(param_1 + 0x10)) {
      if ((int)(uint)bVar2 < *(int *)(lVar4 + 0x28)) {
        bVar6 = true;
        puVar9 = (undefined8 *)((ulonglong)bVar2 * 0x10 + *(longlong *)(lVar4 + 0x20));
        local_88 = (void *)0x0;
        iVar8 = *(int *)(puVar9 + 1);
        pvVar16 = (void *)*puVar9;
        local_80 = iVar8;
        if (iVar8 == 0) {
          uStack_7c = 0;
          ppvVar15 = &local_88;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar8,0);
          _guard_xfg_dispatch_icall_nop(local_88,pvVar16,(longlong)iVar8 * 2);
          ppvVar15 = &local_88;
        }
      }
      else {
        bVar5 = true;
        local_78 = (void *)0x0;
        local_70 = 0;
        ppvVar15 = &local_78;
      }
      ppvVar1 = (void **)(param_1 + 0x2c0);
      if (ppvVar1 != ppvVar15) {
        if (*ppvVar1 != (void *)0x0) {
          FMemory::Free();
        }
        *ppvVar1 = *ppvVar15;
        *ppvVar15 = (void *)0x0;
        *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(ppvVar15 + 1);
        *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)((longlong)ppvVar15 + 0xc);
        ppvVar15[1] = (void *)0x0;
      }
      if ((bVar5) && (bVar5 = false, local_78 != (void *)0x0)) {
        FMemory::Free(local_78);
      }
      if ((bVar6) && (bVar6 = false, local_88 != (void *)0x0)) {
        FMemory::Free(local_88);
      }
      if ((DAT_1468c21ab != '\0') &&
         ((cVar7 = FString::EndsWith(ppvVar1,L".uasset"), cVar7 != '\0' ||
          (cVar7 = FString::EndsWith(ppvVar1), cVar7 != '\0')))) {
        plVar10 = (longlong *)FUN_1415c3d50();
        if (*(int *)(param_1 + 0x2c8) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = *ppvVar1;
        }
        lVar11 = (**(code **)(*plVar10 + 0xe8))(plVar10,puVar13);
        *(longlong *)(param_1 + 0x2d0) = -lVar11;
        puVar9 = (undefined8 *)FUN_141671940(local_68);
        iVar8 = *(int *)(puVar9 + 1);
        local_98 = (void *)*puVar9;
        *puVar9 = 0;
        local_90._0_4_ = *(int *)(puVar9 + 1);
        local_90._4_4_ = *(int *)((longlong)puVar9 + 0xc);
        puVar9[1] = 0;
        iVar18 = (int)local_90;
        if (local_90._4_4_ < (int)((6 - (uint)(iVar8 != 0)) + (int)local_90)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
          iVar18 = (int)local_90;
        }
        local_90._0_4_ = (6 - (uint)(iVar18 != 0)) + iVar18;
        pvVar16 = local_98;
        iVar8 = local_90._4_4_;
        iVar14 = (int)local_90;
        if (local_90._4_4_ < (int)local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
          pvVar16 = local_98;
          iVar8 = local_90._4_4_;
          iVar14 = (int)local_90;
        }
        local_98 = (void *)0x0;
        local_90 = 0;
        puVar9 = (undefined8 *)
                 ((longlong)pvVar16 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
        *puVar9 = 0x7800650075002e;
        *(undefined2 *)(puVar9 + 1) = 0x70;
        *(undefined2 *)((longlong)puVar9 + 10) = 0;
        if (ppvVar1 == local_58) {
          if (pvVar16 != (void *)0x0) {
            FMemory::Free(pvVar16);
          }
        }
        else {
          if (*ppvVar1 != (void *)0x0) {
            FMemory::Free();
          }
          *ppvVar1 = pvVar16;
          *(int *)(param_1 + 0x2c8) = iVar14;
          *(int *)(param_1 + 0x2cc) = iVar8;
        }
        uVar17 = uVar19;
        if (local_68[0] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      puVar9 = (undefined8 *)((ulonglong)bVar2 * 0x10 + *(longlong *)(lVar4 + 0x20));
      if (*(int *)(puVar9 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar9;
      }
      if (*(int *)(param_1 + 0x2c8) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = *(undefined2 **)(param_1 + 0x2c0);
      }
      iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
      if (iVar8 != 0) goto LAB_142841fdd;
    }
    uVar19 = uVar17 + 1;
    uVar21 = (ulonglong)uVar19;
    uVar20 = uVar20 + 1;
  } while( true );
}



// FUNCTION 142842060 FUN_142842060 body=969 status=ok
// SIG undefined FUN_142842060(void)

void FUN_142842060(longlong param_1,longlong *param_2)

{
  void **ppvVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  void **ppvVar15;
  void *pvVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 uStack_7c;
  void *local_78;
  undefined8 local_70;
  longlong local_68 [2];
  void *local_58 [3];
  ulonglong uVar21;
  
  bVar6 = false;
  bVar5 = false;
  lVar4 = *(longlong *)(*param_2 + 0xd8);
  uVar19 = *(uint *)(param_1 + 0x10);
  uVar20 = (ulonglong)(int)uVar19;
  iVar3 = *(int *)(param_2[1] + 0x78);
  uVar21 = uVar20;
  do {
    if ((longlong)iVar3 <= (longlong)uVar20) {
LAB_1428423f2:
      if (*(int *)(param_1 + 0x1e8) < 2) {
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
      return;
    }
    uVar17 = (uint)uVar21;
    lVar11 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar20 * 8);
    cVar7 = FUntypedBulkData::IsStoredCompressedOnDisk(lVar11 + 8);
    if ((cVar7 != '\0') || (iVar8 = FUntypedBulkData::GetBulkDataSize(lVar11 + 8), iVar8 < 1)) {
LAB_1428423ad:
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      if ((*(int *)(param_1 + 0x1ec) < 0) && (*(int *)(param_1 + 0x1ec) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1e0,0);
      }
      if (*(undefined2 **)(param_1 + 0x1e0) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x1e0) = 0;
      }
      goto LAB_1428423f2;
    }
    bVar2 = *(byte *)(lVar11 + 6);
    if (uVar17 == *(uint *)(param_1 + 0x10)) {
      if ((int)(uint)bVar2 < *(int *)(lVar4 + 0x28)) {
        bVar6 = true;
        puVar9 = (undefined8 *)((ulonglong)bVar2 * 0x10 + *(longlong *)(lVar4 + 0x20));
        local_88 = (void *)0x0;
        iVar8 = *(int *)(puVar9 + 1);
        pvVar16 = (void *)*puVar9;
        local_80 = iVar8;
        if (iVar8 == 0) {
          uStack_7c = 0;
          ppvVar15 = &local_88;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar8,0);
          _guard_xfg_dispatch_icall_nop(local_88,pvVar16,(longlong)iVar8 * 2);
          ppvVar15 = &local_88;
        }
      }
      else {
        bVar5 = true;
        local_78 = (void *)0x0;
        local_70 = 0;
        ppvVar15 = &local_78;
      }
      ppvVar1 = (void **)(param_1 + 0x1e0);
      if (ppvVar1 != ppvVar15) {
        if (*ppvVar1 != (void *)0x0) {
          FMemory::Free();
        }
        *ppvVar1 = *ppvVar15;
        *ppvVar15 = (void *)0x0;
        *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(ppvVar15 + 1);
        *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)((longlong)ppvVar15 + 0xc);
        ppvVar15[1] = (void *)0x0;
      }
      if ((bVar5) && (bVar5 = false, local_78 != (void *)0x0)) {
        FMemory::Free(local_78);
      }
      if ((bVar6) && (bVar6 = false, local_88 != (void *)0x0)) {
        FMemory::Free(local_88);
      }
      if ((DAT_1468c21ab != '\0') &&
         ((cVar7 = FString::EndsWith(ppvVar1,L".uasset"), cVar7 != '\0' ||
          (cVar7 = FString::EndsWith(ppvVar1), cVar7 != '\0')))) {
        plVar10 = (longlong *)FUN_1415c3d50();
        if (*(int *)(param_1 + 0x1e8) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = *ppvVar1;
        }
        lVar11 = (**(code **)(*plVar10 + 0xe8))(plVar10,puVar13);
        *(longlong *)(param_1 + 0x1f0) = -lVar11;
        puVar9 = (undefined8 *)FUN_141671940(local_68);
        iVar8 = *(int *)(puVar9 + 1);
        local_98 = (void *)*puVar9;
        *puVar9 = 0;
        local_90._0_4_ = *(int *)(puVar9 + 1);
        local_90._4_4_ = *(int *)((longlong)puVar9 + 0xc);
        puVar9[1] = 0;
        iVar18 = (int)local_90;
        if (local_90._4_4_ < (int)((6 - (uint)(iVar8 != 0)) + (int)local_90)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
          iVar18 = (int)local_90;
        }
        local_90._0_4_ = (6 - (uint)(iVar18 != 0)) + iVar18;
        pvVar16 = local_98;
        iVar8 = local_90._4_4_;
        iVar14 = (int)local_90;
        if (local_90._4_4_ < (int)local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
          pvVar16 = local_98;
          iVar8 = local_90._4_4_;
          iVar14 = (int)local_90;
        }
        local_98 = (void *)0x0;
        local_90 = 0;
        puVar9 = (undefined8 *)
                 ((longlong)pvVar16 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
        *puVar9 = 0x7800650075002e;
        *(undefined2 *)(puVar9 + 1) = 0x70;
        *(undefined2 *)((longlong)puVar9 + 10) = 0;
        if (ppvVar1 == local_58) {
          if (pvVar16 != (void *)0x0) {
            FMemory::Free(pvVar16);
          }
        }
        else {
          if (*ppvVar1 != (void *)0x0) {
            FMemory::Free();
          }
          *ppvVar1 = pvVar16;
          *(int *)(param_1 + 0x1e8) = iVar14;
          *(int *)(param_1 + 0x1ec) = iVar8;
        }
        uVar17 = uVar19;
        if (local_68[0] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      puVar9 = (undefined8 *)((ulonglong)bVar2 * 0x10 + *(longlong *)(lVar4 + 0x20));
      if (*(int *)(puVar9 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar9;
      }
      if (*(int *)(param_1 + 0x1e8) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = *(undefined2 **)(param_1 + 0x1e0);
      }
      iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
      if (iVar8 != 0) goto LAB_1428423ad;
    }
    uVar19 = uVar17 + 1;
    uVar21 = (ulonglong)uVar19;
    uVar20 = uVar20 + 1;
  } while( true );
}



// FUNCTION 142842430 FUN_142842430 body=796 status=ok
// SIG undefined FUN_142842430(void)

void FUN_142842430(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uchar *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int local_res10;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  
  lVar2 = *param_2;
  uVar6 = *(undefined4 *)((longlong)param_2 + 4);
  lVar15 = param_2[1];
  lVar12 = param_2[2];
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x28,local_88);
  if (puVar9 != (undefined8 *)0x0) {
    local_c0 = SUB84(param_1,0);
    uStack_bc = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar9 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar9 + 1) = local_c0;
    *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_bc;
    *(int *)(puVar9 + 2) = (int)lVar2;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uVar6;
    puVar9[3] = lVar15;
    puVar9[4] = lVar12;
  }
  local_98[0] = &LAB_1428337a0;
  FGenericPlatformMemory::MemswapGreaterThan8(local_98,param_1 + 0x5c,0x50);
  if (local_58 != 0) {
    plVar11 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar11 = local_68;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar10 = FPlatformFileManager::Get();
  plVar11 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar10);
  if ((int)param_1[0x59] == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)param_1[0x58];
  }
  lVar12 = (**(code **)(*plVar11 + 0x100))(plVar11,puVar14);
  param_1[0x5b] = lVar12;
  if (lVar12 != 0) {
    lVar15 = (longlong)(int)param_1[2];
    lVar12 = *(longlong *)(*param_2 + 0xd8);
    iVar1 = *(int *)(param_2[1] + 0x78);
    if (lVar15 < iVar1) {
      plVar11 = param_1 + (lVar15 + 0x1e) * 2;
      do {
        cVar7 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar7 != '\0') {
          return;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar15 * 8);
        iVar16 = (int)*(short *)(lVar2 + 4);
        iVar8 = FUntypedBulkData::GetBulkDataSize(lVar2 + 8);
        iVar17 = (int)*plVar11;
        if (iVar17 < iVar16) {
          *(int *)plVar11 = iVar16;
          if (*(int *)((longlong)plVar11 + 4) < iVar16) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11 + -1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(plVar11[-1] + (longlong)iVar17 * 8),0,(longlong)(iVar16 - iVar17) << 3
                    );
        }
        else if ((iVar16 < iVar17) && (iVar16 != iVar17)) {
          *(int *)plVar11 = iVar16;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar11 + -1);
        }
        iVar17 = 0;
        if (0 < *(short *)(lVar2 + 4)) {
          lVar18 = 0;
          local_res10 = 0;
          do {
            LOCK();
            *(int *)(param_1 + 3) = (int)param_1[3] + 1;
            UNLOCK();
            lVar3 = plVar11[-0x1e];
            lVar4 = plVar11[-1];
            lVar5 = *(longlong *)param_1[0x5b];
            puVar13 = AK::WriteBytesMem::Bytes((WriteBytesMem *)(lVar2 + 8));
            uVar10 = (**(code **)(lVar5 + 0x10))
                               (param_1[0x5b],puVar13 + param_1[0x5a] + (longlong)local_res10,
                                (longlong)(iVar8 / iVar16),((char)param_1[0x57] != '\0') + '\x01',
                                param_1 + 0x5c,*(undefined8 *)(lVar3 + lVar18));
            *(undefined8 *)(lVar4 + lVar18) = uVar10;
            iVar17 = iVar17 + 1;
            lVar18 = lVar18 + 8;
            local_res10 = local_res10 + iVar8 / iVar16;
          } while (iVar17 < *(short *)(lVar2 + 4));
        }
        lVar15 = lVar15 + 1;
        plVar11 = plVar11 + 2;
      } while (lVar15 < iVar1);
    }
    return;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 142842750 FUN_142842750 body=600 status=ok
// SIG undefined FUN_142842750(void)

void FUN_142842750(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uchar *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  lVar12 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  lVar14 = param_2[1];
  lVar10 = param_2[2];
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar7 != (undefined8 *)0x0) {
    local_a8 = SUB84(param_1,0);
    uStack_a4 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar7 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar7 + 1) = local_a8;
    *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_a4;
    *(int *)(puVar7 + 2) = (int)lVar12;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
    puVar7[3] = lVar14;
    puVar7[4] = lVar10;
  }
  local_88[0] = &LAB_1428337a0;
  FGenericPlatformMemory::MemswapGreaterThan8(local_88,param_1 + 0x40,0x50);
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
  uVar8 = FPlatformFileManager::Get();
  plVar9 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar8);
  if ((int)param_1[0x3d] == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)param_1[0x3c];
  }
  lVar10 = (**(code **)(*plVar9 + 0x100))(plVar9,puVar13);
  param_1[0x3f] = lVar10;
  if (lVar10 != 0) {
    lVar14 = (longlong)(int)param_1[2];
    lVar10 = *(longlong *)(*param_2 + 0xd8);
    iVar1 = *(int *)(param_2[1] + 0x78);
    if (lVar14 < iVar1) {
      plVar9 = param_1 + lVar14 + 0x2d;
      do {
        cVar5 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar5 != '\0') {
          return;
        }
        lVar12 = *(longlong *)
                  ((longlong)plVar9 + *(longlong *)(lVar10 + 0x10) + (-0x168 - (longlong)param_1));
        LOCK();
        *(int *)(param_1 + 3) = (int)param_1[3] + 1;
        UNLOCK();
        lVar4 = param_1[0x3b];
        lVar2 = *(longlong *)param_1[0x3f];
        iVar6 = FUntypedBulkData::GetBulkDataSize(lVar12 + 8);
        puVar11 = AK::WriteBytesMem::Bytes((WriteBytesMem *)(lVar12 + 8));
        lVar12 = (**(code **)(lVar2 + 0x10))
                           (param_1[0x3f],puVar11 + param_1[0x3e],(longlong)iVar6,
                            ((char)lVar4 != '\0') + '\x01',param_1 + 0x40,plVar9[-0xf]);
        lVar14 = lVar14 + 1;
        *plVar9 = lVar12;
        plVar9 = plVar9 + 1;
      } while (lVar14 < iVar1);
    }
    return;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 1428429b0 FUN_1428429b0 body=171 status=ok
// SIG undefined FUN_1428429b0(void)

void FUN_1428429b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x750)) {
    lVar4 = 0;
    do {
      if (((**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x748)) == 0) ||
          (lVar2 = ULevel::GetWorld(), lVar2 == 0)) || (cVar1 = FUN_14254a160(lVar2), cVar1 != '\0')
         ) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = *(float *)(lVar2 + 0x790);
        if (0.0 < fVar5) goto LAB_142842a31;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x750));
    if (0.0 < fVar5) {
LAB_142842a31:
      *(float *)(param_1 + 0x790) = fVar5 - 0.5;
    }
  }
  return;
}



// FUNCTION 142842a60 FUN_142842a60 body=808 status=ok
// SIG undefined FUN_142842a60(void)

void FUN_142842a60(longlong param_1,float param_2,float param_3,byte param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  if ((param_2 == 3.4028235e+38) || (uVar3 = 0, param_3 == 3.4028235e+38)) {
    uVar3 = 1;
  }
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfffffffe;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | uVar3;
  if (param_3 <= 1.0) {
    param_3 = 1.0;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_1468509dc) &&
     (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
    DAT_1468509d8 = 1.442695;
    _Init_thread_footer(&DAT_1468509dc);
  }
  fVar5 = _guard_xfg_dispatch_icall_nop(param_3);
  fVar5 = fVar5 * DAT_1468509d8 + 1.0;
  iVar2 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
  iVar4 = *(int *)(param_1 + 0x60);
  if ((*(int *)(param_1 + 0x60) <= iVar2) &&
     (iVar4 = *(int *)(param_1 + 100), iVar2 < *(int *)(param_1 + 100))) {
    iVar4 = iVar2;
  }
  uVar3 = (uint)param_4 << 2 | *(uint *)(param_1 + 0x94) & 0xfffffffb;
  *(int *)(param_1 + 0x9c) = iVar4;
  *(uint *)(param_1 + 0x94) = uVar3;
  if (((*(byte *)(param_1 + 0x54) & 2) == 0) && ((uVar3 & 5) == 0)) {
    fVar5 = param_2 * *(float *)(param_5 + 0x10);
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
    if ((*(int *)(lVar1 + 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar5);
    fVar5 = fVar5 * DAT_1468509d8 + 1.0;
    iVar2 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
    iVar4 = *(int *)(param_1 + 0x60);
    if ((*(int *)(param_1 + 0x60) <= iVar2) &&
       (iVar4 = *(int *)(param_1 + 100), iVar2 < *(int *)(param_1 + 100))) {
      iVar4 = iVar2;
    }
    *(int *)(param_1 + 0xa0) = iVar4;
    if (param_2 <= 1.0) {
      param_2 = 1.0;
    }
    if ((*(int *)(lVar1 + 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    fVar5 = _guard_xfg_dispatch_icall_nop(param_2);
    fVar5 = fVar5 * DAT_1468509d8 + 1.0;
    iVar2 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
    iVar4 = *(int *)(param_1 + 0x60);
    if ((*(int *)(param_1 + 0x60) <= iVar2) &&
       (iVar4 = *(int *)(param_1 + 100), iVar2 < *(int *)(param_1 + 100))) {
      iVar4 = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0xa0);
    if (*(int *)(param_1 + 0xa0) <= *(int *)(param_1 + 0x9c)) {
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    uVar3 = 0;
    if (-1 < iVar4 - iVar2) {
      uVar3 = iVar4 - iVar2;
    }
  }
  else {
    if (param_2 <= 1.0) {
      param_2 = 1.0;
    }
    if ((*(int *)(lVar1 + 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    fVar5 = _guard_xfg_dispatch_icall_nop(param_2);
    fVar5 = fVar5 * DAT_1468509d8 + 1.0;
    iVar2 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
    iVar4 = *(int *)(param_1 + 0x60);
    if ((*(int *)(param_1 + 0x60) <= iVar2) &&
       (iVar4 = *(int *)(param_1 + 100), iVar2 < *(int *)(param_1 + 100))) {
      iVar4 = iVar2;
    }
    *(int *)(param_1 + 0xa0) = iVar4;
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x98) = uVar3;
  return;
}



// FUNCTION 142842d90 FUN_142842d90 body=233 status=ok
// SIG undefined FUN_142842d90(void)

void FUN_142842d90(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_38 [6];
  
  if ((((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xab8) != (longlong *)0x0)) &&
      (plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))(),
      plVar2 != (longlong *)0x0)) && ((param_1 != 0 && (*(longlong *)(param_1 + 0x60) != 0)))) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x30);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)((longlong)plVar2 + 9) = param_4;
    local_38[0] = plVar1;
    TRefCountPtr<FRHIIndexBuffer>::operator=(plVar2 + 2,0);
    if (plVar1 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar2 + 2,uVar3);
      plVar2[4] = param_3;
      plVar2[5] = param_2;
    }
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_38);
    if (param_5 != '\0') {
      *(undefined1 *)(plVar2 + 1) = 1;
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
  }
  return;
}



// FUNCTION 142842e80 FUN_142842e80 body=200 status=ok
// SIG undefined FUN_142842e80(void)

void FUN_142842e80(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  
  lVar3 = DAT_1468b5a78;
  iVar7 = 0;
  if (0 < (int)param_2[0xd]) {
    plVar8 = (longlong *)param_2[0xc];
    if ((longlong *)param_2[0xc] == (longlong *)0x0) {
      plVar8 = param_2;
    }
    do {
      lVar2 = *plVar8;
      piVar4 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                (param_1 + 0x20,local_res10,lVar2);
      if ((*piVar4 != -1) && (lVar2 != 0)) {
        iVar1 = *(int *)(lVar2 + 0xb8);
        if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x18))) {
          plVar6 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10));
          plVar5 = (longlong *)0x0;
          if (*plVar6 == lVar2) {
            plVar5 = plVar6;
          }
          if (plVar5 != (longlong *)0x0) {
            plVar5[0x11] = lVar3;
          }
        }
      }
      iVar7 = iVar7 + 1;
      plVar8 = plVar8 + 1;
    } while (iVar7 < (int)param_2[0xd]);
  }
  return;
}



// FUNCTION 142842f50 FUN_142842f50 body=65 status=ok
// SIG undefined FUN_142842f50(void)

void FUN_142842f50(void)

{
  longlong *plVar1;
  
  if ((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xab8) != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))();
    if (plVar1 != (longlong *)0x0) {
      *(undefined1 *)(plVar1 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142842f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142842fa0 FUN_142842fa0 body=622 status=ok
// SIG undefined FUN_142842fa0(void)

void FUN_142842fa0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  
  lVar3 = *param_2;
  iVar8 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (0 < *(int *)(lVar3 + 0x68)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_58);
    lVar3 = *param_2;
  }
  if (0 < *(int *)(lVar3 + 0x68)) {
    do {
      local_40 = param_2[1];
      lVar6 = lVar3;
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
        lVar6 = *param_2;
      }
      local_48 = lVar3;
      lVar3 = FUN_142843250(param_1,*(longlong *)(lVar6 + 0x60) + (longlong)iVar8 * 0x18,
                            *(undefined4 *)(lVar6 + 0x58),&local_48);
      uVar2 = local_50;
      lVar6 = (longlong)(int)local_50;
      iVar5 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (local_50._4_4_ < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_58,uVar2 & 0xffffffff);
      }
      local_58[lVar6] = lVar3;
      plVar7 = (longlong *)param_2[1];
      lVar6 = *param_2;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
      }
      iVar5 = *(int *)(lVar3 + 0x28);
      *(int *)(lVar3 + 0x28) = iVar5 + 1;
      if (*(int *)(lVar3 + 0x2c) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x20,iVar5);
      }
      plVar4 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar3 + 0x20));
      *plVar4 = lVar6;
      plVar4[1] = (longlong)plVar7;
      iVar5 = *(int *)(lVar3 + 0x18);
      *(int *)(lVar3 + 0x18) = iVar5 + 1;
      if (*(int *)(lVar3 + 0x1c) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x10,iVar5);
      }
      plVar4 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar3 + 0x10));
      *plVar4 = lVar6;
      plVar4[1] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      lVar3 = *param_2;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar3 + 0x68));
  }
  iVar8 = 0;
  plVar7 = local_58;
  if (0 < *(int *)(lVar3 + 0x68)) {
    do {
      plVar4 = (longlong *)*plVar7;
      if ((plVar4 != (longlong *)0x0) &&
         ((*plVar4 != 0 || (*(char *)((longlong)plVar4 + 9) != '\0')))) {
        *(undefined1 *)(plVar4 + 1) = 0;
        FUN_1428341e0(param_1,*(longlong *)(*param_2 + 0x60) + (longlong)iVar8 * 0x18,plVar4);
        lVar3 = *param_2;
      }
      iVar8 = iVar8 + 1;
      plVar7 = plVar7 + 1;
    } while (iVar8 < *(int *)(lVar3 + 0x68));
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 142843210 StartStalledHandle body=62 status=ok
// SIG undefined StartStalledHandle(void)

void FStreamableHandle::StartStalledHandle(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  if (((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x12) == '\0')) &&
     (*(char *)(param_1 + 0x11) == '\0')) {
    *(undefined1 *)(param_1 + 0x13) = 0;
    uVar1 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
    FUN_142842fa0(*(undefined8 *)(param_1 + 0x90),uVar1);
  }
  return;
}



// FUNCTION 142843250 FUN_142843250 body=1390 status=ok
// SIG undefined FUN_142843250(void)

longlong *
FUN_142843250(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res8 [8];
  undefined8 in_stack_fffffffffffffe68;
  uint uVar17;
  undefined4 uVar18;
  wchar_t *local_178;
  int local_170;
  undefined4 local_16c;
  wchar_t *local_168;
  int local_160;
  undefined4 local_15c;
  undefined8 local_158;
  longlong local_150 [2];
  int local_140;
  int local_13c;
  int local_138 [2];
  wchar_t *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong local_110 [2];
  undefined8 local_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  longlong local_e0 [2];
  undefined8 local_d0;
  longlong local_c8 [2];
  undefined8 *local_b8;
  wchar_t **local_b0;
  code *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78 [2];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  uVar17 = (uint)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x60,&local_140,param_2);
  if (((local_140 == -1) ||
      (lVar8 = (longlong)local_140 * 0x40 + *(longlong *)(param_1 + 0x60), lVar8 == 0)) ||
     (puVar9 = (undefined8 *)(lVar8 + 0x18), puVar9 == (undefined8 *)0x0)) {
    local_158 = *param_2;
  }
  else {
    local_158 = *puVar9;
    param_2 = puVar9;
  }
  FString::FString(local_150,param_2 + 1);
  FUN_142839440(param_1 + 0x10,&local_13c,&local_158);
  pwVar11 = (wchar_t *)0x0;
  iVar16 = 0;
  if (((local_13c == -1) ||
      (lVar8 = *(longlong *)(param_1 + 0x10) + (longlong)local_13c * 0x28, lVar8 == 0)) ||
     (plVar12 = *(longlong **)(lVar8 + 0x18), plVar12 == (longlong *)0x0)) {
    pwVar13 = (wchar_t *)operator_new(0x30);
    local_130 = pwVar11;
    if (pwVar13 != (wchar_t *)0x0) {
      pwVar13[0] = L'\0';
      pwVar13[1] = L'\0';
      pwVar13[2] = L'\0';
      pwVar13[3] = L'\0';
      pwVar13[4] = L'\0';
      pwVar13[8] = L'\0';
      pwVar13[9] = L'\0';
      pwVar13[10] = L'\0';
      pwVar13[0xb] = L'\0';
      pwVar13[0xc] = L'\0';
      pwVar13[0xd] = L'\0';
      pwVar13[0xe] = L'\0';
      pwVar13[0xf] = L'\0';
      pwVar13[0x10] = L'\0';
      pwVar13[0x11] = L'\0';
      pwVar13[0x12] = L'\0';
      pwVar13[0x13] = L'\0';
      pwVar13[0x14] = L'\0';
      pwVar13[0x15] = L'\0';
      pwVar13[0x16] = L'\0';
      pwVar13[0x17] = L'\0';
      local_130 = pwVar13;
    }
    local_b8 = &local_158;
    local_b0 = &local_130;
    TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FSoftObjectPath_const_&,FStreamable_*_&&>_>
              (param_1 + 0x10,local_138,&local_b8,0);
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18 + (longlong)local_138[0] * 0x28);
  }
  else {
    if ((char)plVar12[1] != '\0') {
      (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
    }
    if (*plVar12 != 0) {
      if (local_150[0] != 0) {
        FMemory::Free();
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
      return plVar12;
    }
  }
  if ((char)plVar12[1] == '\0') {
    FUN_1428397d0(param_1,&local_158,plVar12);
  }
  if (*plVar12 == 0) {
    puStack_a0 = local_res8;
    *(undefined1 *)((longlong)plVar12 + 9) = 0;
    local_res8[0] = 0;
    local_a8 = FUN_1406ddef0;
    local_98 = 0x406ddef0;
    uStack_94 = 1;
    uStack_90 = puStack_a0;
    lVar8 = FUN_1415d8310(&local_98,&DAT_14622e6dc);
    iVar15 = 0;
    if (((DAT_1464aaa49 == '\0') && (*(int *)(lVar8 + 0x5c) < 1)) &&
       (*(char *)(param_1 + 0xd0) == '\0')) {
      FSoftObjectPath::ToString(&local_158,&local_178);
      uVar6 = CONCAT44(uVar17,0xffffffff);
      iVar5 = FUN_141592950(&local_178,&DAT_1451bce9c,1,0,uVar6);
      uVar18 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (iVar5 != -1) {
        if (local_170 == 0) {
          pwVar13 = L"";
          iVar10 = iVar15;
        }
        else {
          pwVar13 = local_178;
          iVar10 = local_170 + -1;
        }
        local_168 = (wchar_t *)0x0;
        local_15c = 0;
        if (-1 < iVar5) {
          iVar15 = iVar10;
          if (iVar5 < iVar10) {
            iVar15 = iVar5;
          }
          if (iVar15 != 0) {
            iVar16 = iVar15 + 1;
          }
        }
        local_160 = iVar16;
        if (0 < iVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
          iVar16 = local_160;
          pwVar11 = local_168;
          if (0 < local_160) {
            wcsncpy(local_168,pwVar13,(longlong)iVar15);
            pwVar11[iVar15] = L'\0';
          }
        }
        if (local_178 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_16c = local_15c;
        local_178 = pwVar11;
        local_170 = iVar16;
      }
      *(undefined2 *)(plVar12 + 1) = 1;
      local_d0 = local_158;
      FString::FString(local_c8,local_150);
      plVar3 = (longlong *)param_4[1];
      local_128 = 0;
      local_120 = 0;
      uVar6 = *param_4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_e8 = local_d0;
      local_88 = uVar6;
      FString::FString(local_e0,local_c8);
      puVar9 = (undefined8 *)operator_new(0x40,&local_128);
      if (puVar9 != (undefined8 *)0x0) {
        local_100 = local_e8;
        FString::FString(local_f8,local_e0);
        local_118 = local_100;
        FString::FString(local_110,local_f8);
        *puVar9 = &PTR_GetPoolName_1451c0828;
        puVar9[1] = uVar6;
        puVar9[2] = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
        }
        puVar9[3] = FStreamableHandle::AsyncLoadCallbackWrapper;
        puVar9[4] = local_118;
        FString::FString(puVar9 + 5,local_110);
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar9[7] = uVar6;
        if (local_110[0] != 0) {
          FMemory::Free();
        }
        *puVar9 = &PTR_GetPoolName_1451c0870;
        if (local_f8[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_e0[0] != 0) {
        FMemory::Free();
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
      FUN_1416fec20(&local_178,&local_128,param_3,0,CONCAT44(uVar18,0xffffffff));
      if (local_178 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    else {
      puVar9 = (undefined8 *)FSoftObjectPath::ToString(&local_158,local_78);
      if (*(int *)(puVar9 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar9;
      }
      uVar6 = UObject::GetPrivateStaticClass();
      lVar8 = FUN_141799c90(uVar6,0,puVar14,0,(ulonglong)uVar17 << 0x20,0,1);
      *plVar12 = lVar8;
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      lVar8 = *plVar12;
      if (lVar8 != 0) {
        lVar7 = UObjectRedirector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_68 = local_158;
          FString::FString(local_60,local_150);
          uVar6 = FUN_14283ad90(param_1,local_50,lVar8,&local_68,plVar12);
          FSoftObjectPath::operator=(&local_158,uVar6);
        }
      }
      if (*plVar12 == 0) {
        *(undefined1 *)((longlong)plVar12 + 9) = 1;
      }
      *(undefined1 *)(plVar12 + 1) = 0;
    }
  }
  if (local_150[0] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_4[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return plVar12;
}



// FUNCTION 1428437c0 FUN_1428437c0 body=1133 status=ok
// SIG undefined FUN_1428437c0(void)

/* WARNING: Removing unreachable block (ram,0x000142843b78) */
/* WARNING: Removing unreachable block (ram,0x000142843b85) */
/* WARNING: Removing unreachable block (ram,0x000142843b94) */

undefined8 FUN_1428437c0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 local_res18 [16];
  ulonglong local_b8;
  longlong local_b0;
  uint local_a8;
  int local_a4;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar14 = 0;
  local_98 = (longlong)((int)param_1[0x37] << 0x14);
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x78c);
  *(undefined1 *)((longlong)param_1 + 0x78c) = 1;
  iVar10 = (int)param_1[0xeb];
  while (iVar10 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0,0);
    iVar10 = (int)param_1[0xeb];
  }
  FUN_1428387c0(param_1[0xd3],1);
  lVar18 = param_1[0xd4];
  plVar12 = *(longlong **)(lVar18 + 0x58);
  if (plVar12 == (longlong *)0x0) {
    LOCK();
    bVar19 = *(int *)(lVar18 + 0x48) == 0;
    if (bVar19) {
      *(int *)(lVar18 + 0x48) = 0;
    }
    UNLOCK();
    if (!bVar19) {
      TextureInstanceTask::FDoWorkTask::DoWork(lVar18 + 8);
      LOCK();
      *(int *)(lVar18 + 0x48) = *(int *)(lVar18 + 0x48) + -1;
      UNLOCK();
    }
code_r0x00014284389b:
    if (*(longlong *)(lVar18 + 0x58) == 0) goto LAB_1428438b7;
    (**(code **)(**(longlong **)(lVar18 + 0x50) + 0x20))(*(longlong **)(lVar18 + 0x50),0xffffffff,0)
    ;
  }
  else {
    cVar4 = (**(code **)(*plVar12 + 0x18))(plVar12,lVar18);
    if (cVar4 == '\0') goto code_r0x00014284389b;
    TextureInstanceTask::FDoWorkTask::DoWork(lVar18 + 8);
    LOCK();
    *(int *)(lVar18 + 0x48) = *(int *)(lVar18 + 0x48) + -1;
    UNLOCK();
    if (*(longlong **)(lVar18 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar18 + 0x50) + 0x10))();
    }
  }
  *(undefined8 *)(lVar18 + 0x58) = 0;
LAB_1428438b7:
  FUN_1428467a0(param_1,0);
  local_b0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  iVar10 = 0;
  uVar11 = uVar14;
  if ((int)param_1[3] != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_b0,(int)param_1[3]);
    iVar10 = (int)param_1[3];
    uVar11 = (ulonglong)local_a8;
  }
  iVar9 = (int)uVar11;
  uVar13 = uVar14;
  uVar16 = uVar14;
  if (0 < iVar10) {
    do {
      iVar10 = *(int *)(uVar13 + 8 + param_1[2]);
      if (((iVar10 != 0x1d) && (3 < iVar10 - 0x30U)) &&
         ((*(byte *)(uVar13 + 0x54 + param_1[2]) & 0x12) == 0)) {
        iVar10 = (int)uVar11;
        local_a8 = iVar10 + 1;
        if (local_a4 < (int)local_a8) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_b0,uVar11);
        }
        uVar11 = (ulonglong)local_a8;
        *(int *)(local_b0 + (longlong)iVar10 * 4) = (int)uVar16;
      }
      iVar9 = (int)uVar11;
      uVar15 = (int)uVar16 + 1;
      uVar13 = uVar13 + 200;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)param_1[3]);
  }
  local_a0 = param_1 + 2;
  AlgoImpl::
  IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,FCompareTextureByRetentionPriority>_>
            (local_b0,(longlong)iVar9,uVar3,&local_a0);
  local_b8 = 0;
  lVar18 = (longlong)(iVar9 + -1);
  uVar11 = uVar14;
  if (-1 < iVar9 + -1) {
    do {
      if (param_2 <= (longlong)uVar11) break;
      iVar10 = *(int *)(local_b0 + lVar18 * 4);
      if (((-1 < iVar10) && (iVar10 < (int)param_1[3])) &&
         (plVar12 = (longlong *)((longlong)iVar10 * 200 + param_1[2]), *plVar12 != 0)) {
        iVar10 = *(int *)((longlong)plVar12 + (longlong)(int)plVar12[0xc] * 4 + 0x18);
        iVar9 = *(int *)((longlong)plVar12 + (longlong)(int)plVar12[0xb] * 4 + 0x18);
        cVar4 = FUN_14285b240();
        uVar11 = local_b8;
        if (cVar4 != '\0') {
          uVar14 = uVar14 + (longlong)iVar10;
          local_b8 = local_b8 + (longlong)(iVar9 - iVar10);
          FUN_142847790(plVar12,0);
          uVar11 = local_b8;
          if (local_98 <= (longlong)uVar14) {
            if ((DAT_146ac3ac5 == '\0') &&
               (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0'))
                || (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
              local_90 = 0;
              FUN_1428374d0(local_res18,2,&local_90);
              FUN_141ee24f0(0);
              uVar14 = 0;
            }
            else {
              pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
              plVar12 = TlsGetValue(*pDVar6);
              if (plVar12 == (longlong *)0x0) {
                plVar12 = (longlong *)operator_new(0x18);
                if (plVar12 == (longlong *)0x0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  *(undefined4 *)(plVar12 + 2) = 0;
                }
                TlsSetValue(*pDVar6,plVar12);
              }
              plVar17 = (longlong *)plVar12[1];
              if (plVar17 == (longlong *)0x0) {
                if (*plVar12 == 0) {
                  lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
                  plVar12[1] = lVar7;
                  if (lVar7 == 0) {
                    puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
                    plVar12[1] = (longlong)puVar8;
                    lVar7 = 0x1f;
                    do {
                      puVar2 = puVar8 + 0x20;
                      *puVar8 = puVar2;
                      lVar7 = lVar7 + -1;
                      puVar8 = puVar2;
                    } while (lVar7 != 0);
                    *puVar2 = 0;
                  }
                }
                else {
                  plVar12[1] = *plVar12;
                  *plVar12 = 0;
                }
                plVar17 = (longlong *)plVar12[1];
                iVar10 = 0x20;
                *(undefined4 *)(plVar12 + 2) = 0x20;
              }
              else {
                iVar10 = (int)plVar12[2];
              }
              plVar12[1] = *plVar17;
              *(int *)(plVar12 + 2) = iVar10 + -1;
              *plVar17 = (longlong)&PTR_FUN_143f3edd8;
              *(undefined4 *)(plVar17 + 1) = 0xff;
              *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
              *plVar17 = (longlong)&PTR_FUN_1451c0600;
              *(undefined1 *)((longlong)plVar17 + 0x11) = 0;
              plVar17[3] = 0;
              local_58 = 0xff;
              local_60 = 0;
              local_80 = 0;
              local_88 = 0;
              lVar7 = plVar17[3];
              if (lVar7 != 0) {
                LOCK();
                *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
                UNLOCK();
              }
              local_70 = lVar7;
              local_68 = plVar17;
              FUN_140445370(plVar17,0,0xff,1);
              if (lVar7 != 0) {
                LOCK();
                piVar1 = (int *)(lVar7 + 0x48);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  FGraphEvent::Recycle(lVar7);
                }
              }
              FUN_141ee24f0(0);
              uVar14 = 0;
            }
          }
        }
      }
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  *(undefined1 *)((longlong)param_1 + 0x78c) = uVar3;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142843c30 FUN_142843c30 body=845 status=ok
// SIG undefined FUN_142843c30(void)

void FUN_142843c30(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int *piVar11;
  byte bVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  uVar10 = 0;
  lVar3 = *(longlong *)(param_1 + 0x698);
  if ((*(char *)(param_1 + 0x78c) == '\0') || (param_2 != '\0')) {
    piVar11 = *(int **)(lVar3 + 0x88);
    uVar14 = (longlong)*(int *)(lVar3 + 0x90) & 0x3fffffffffffffff;
    if (piVar11 + *(int *)(lVar3 + 0x90) < piVar11) {
      uVar14 = uVar10;
    }
    if (uVar14 != 0) {
      do {
        iVar1 = *piVar11;
        if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x18))) &&
           (plVar8 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10)),
           *plVar8 != 0)) {
          FUN_142850190();
          FUN_142847790(plVar8,0);
        }
        piVar11 = piVar11 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar14);
    }
    uVar10 = 0;
    if (((param_2 == '\0') && (*DAT_146b166d8 != 0)) && (0 < *DAT_146b166f0)) {
      plVar8 = (longlong *)(param_1 + 0x730);
      *(undefined4 *)(param_1 + 0x738) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x73c)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar8,0);
      }
      *(undefined4 *)(param_1 + 0x740) = 0;
      piVar11 = *(int **)(lVar3 + 0x78);
      uVar14 = (longlong)*(int *)(lVar3 + 0x80) & 0x3fffffffffffffff;
      if (piVar11 + *(int *)(lVar3 + 0x80) < piVar11) {
        uVar14 = uVar10;
      }
      if (uVar14 != 0) {
        do {
          iVar1 = *piVar11;
          if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x18))) &&
             (plVar9 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10)),
             *plVar9 != 0)) {
            *(uint *)(plVar9 + 0x17) = *(uint *)(plVar9 + 0x17) & 0xfffffffe;
            *(uint *)(plVar9 + 0x17) =
                 *(uint *)(plVar9 + 0x17) | *(uint *)((longlong)plVar9 + 0x94) & 1;
            *(int *)((longlong)plVar9 + 0xbc) = (int)plVar9[0x16];
            *(undefined4 *)(plVar9 + 0x18) = *(undefined4 *)((longlong)plVar9 + 0x9c);
            iVar2 = *(int *)(param_1 + 0x738);
            *(int *)(param_1 + 0x738) = iVar2 + 1;
            if (*(int *)(param_1 + 0x73c) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
            }
            plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *plVar8);
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = *plVar9;
              *(int *)(plVar6 + 1) = iVar1;
            }
          }
          piVar11 = piVar11 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar14);
      }
    }
    else {
      piVar11 = *(int **)(lVar3 + 0x78);
      uVar14 = (longlong)*(int *)(lVar3 + 0x80) & 0x3fffffffffffffff;
      if (piVar11 + *(int *)(lVar3 + 0x80) < piVar11) {
        uVar14 = uVar10;
      }
      if (uVar14 != 0) {
        do {
          iVar1 = *piVar11;
          if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x18))) {
            plVar8 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10));
            uVar15 = *(uint *)((longlong)plVar8 + 0x94) & 1;
            iVar1 = (int)plVar8[0x16];
            if ((*plVar8 != 0) && (iVar1 != (int)plVar8[0xb])) {
              if (((uVar15 == 0) && ((*(byte *)((longlong)plVar8 + 0x54) & 3) == 0)) ||
                 (*(int *)((longlong)plVar8 + 0x9c) < iVar1)) {
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
              if (iVar1 < (int)plVar8[0xb]) {
                FUN_14285b240();
              }
              else {
                FUN_14285b010(*plVar8,iVar1,uVar13);
              }
              FUN_142847790(plVar8,0);
              FOutputDevice::CanBeUsedOnAnyThread(plVar8,*plVar8,uVar15,param_1);
            }
          }
          piVar11 = piVar11 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar14);
      }
    }
  }
  piVar7 = *(int **)(lVar3 + 0x98);
  piVar11 = piVar7 + *(int *)(lVar3 + 0xa0);
  for (; piVar7 != piVar11; piVar7 = piVar7 + 1) {
    iVar1 = *piVar7;
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x18))) {
      plVar8 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10));
      if ((*(int *)(lVar3 + 0x10) < 1) && ((*(byte *)((longlong)plVar8 + 0x94) & 1) == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((*(char *)(param_1 + 0x78c) != '\0') ||
         (((int)plVar8[0x15] <= (int)plVar8[0xb] && (bVar5)))) {
        bVar12 = 0;
        uVar15 = 0;
      }
      else {
        bVar12 = 4;
        uVar15 = 2;
      }
      *(uint *)((longlong)plVar8 + 0x84) = *(uint *)((longlong)plVar8 + 0x84) & 0xfffffffd;
      *(uint *)((longlong)plVar8 + 0x84) = *(uint *)((longlong)plVar8 + 0x84) | uVar15;
      lVar4 = *plVar8;
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0xc4) = *(byte *)(lVar4 + 0xc4) & 0xfb;
        *(byte *)(lVar4 + 0xc4) = *(byte *)(lVar4 + 0xc4) | bVar12;
      }
    }
  }
  return;
}



// FUNCTION 142843f80 StreamWantedMips body=137 status=ok
// SIG undefined StreamWantedMips(void)

void FStreamingTexture::StreamWantedMips(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)param_1[0x16];
  uVar2 = *(uint *)((longlong)param_1 + 0x94) & 1;
  if ((*param_1 != 0) && (iVar1 != (int)param_1[0xb])) {
    if (((uVar2 == 0) && ((*(byte *)((longlong)param_1 + 0x54) & 3) == 0)) ||
       (*(int *)((longlong)param_1 + 0x9c) < iVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    if (iVar1 < (int)param_1[0xb]) {
      FUN_14285b240();
    }
    else {
      FUN_14285b010(*param_1,iVar1,uVar3);
    }
    FUN_142847790(param_1,0);
    FOutputDevice::CanBeUsedOnAnyThread(param_1,*param_1,uVar2,param_2);
  }
  return;
}



// FUNCTION 142844010 Sync body=143 status=ok
// SIG undefined Sync(void)

void TextureInstanceTask::FCreateViewWithUninitializedBounds::Sync(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)*param_1;
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1[2]);
  puVar2 = (undefined8 *)param_1[2];
  param_1[2] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142844096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1428440a0 FUN_1428440a0 body=127 status=ok
// SIG undefined FUN_1428440a0(void)

void FUN_1428440a0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)*param_1;
  }
  (**(code **)(*plVar3 + 0x38))
            (plVar3,*(undefined4 *)(param_1 + 6),*(undefined4 *)((longlong)param_1 + 0x34),
             param_1 + 3,*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14));
  puVar2 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x24)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 3,0);
  }
  return;
}



// FUNCTION 142844120 SyncResults body=204 status=ok
// SIG undefined SyncResults(void)

void FDynamicTextureInstanceManager::FTasks::SyncResults(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = param_1[1];
  LOCK();
  bVar3 = *(int *)(lVar2 + 0x48) == 1;
  if (bVar3) {
    *(int *)(lVar2 + 0x48) = 2;
  }
  UNLOCK();
  if (bVar3) {
    FUN_1428303c0(lVar2 + 0x10,0);
    *(undefined4 *)(lVar2 + 0x48) = 3;
  }
  lVar2 = *param_1;
  LOCK();
  bVar3 = *(int *)(lVar2 + 0x38) == 1;
  if (bVar3) {
    *(int *)(lVar2 + 0x38) = 2;
  }
  UNLOCK();
  if (bVar3) {
    TextureInstanceTask::FCreateViewWithUninitializedBounds::operator()(lVar2 + 0x10,0);
    *(undefined4 *)(lVar2 + 0x38) = 3;
  }
  lVar2 = param_1[1];
  if (*(int *)(lVar2 + 0x48) != 0) {
    iVar1 = *(int *)(lVar2 + 0x48);
    while (iVar1 != 3) {
      FUN_1416b1760(0);
      iVar1 = *(int *)(lVar2 + 0x48);
    }
    FUN_1428440a0(lVar2 + 0x10);
  }
  *(undefined4 *)(lVar2 + 0x48) = 0;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x38) != 0) {
    iVar1 = *(int *)(lVar2 + 0x38);
    while (iVar1 != 3) {
      FUN_1416b1760(0);
      iVar1 = *(int *)(lVar2 + 0x38);
    }
    TextureInstanceTask::FCreateViewWithUninitializedBounds::Sync(lVar2 + 0x10);
  }
  *(undefined4 *)(lVar2 + 0x38) = 0;
  return;
}



// FUNCTION 1428441f0 FUN_1428441f0 body=272 status=ok
// SIG undefined FUN_1428441f0(void)

void FUN_1428441f0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar3 = *param_1;
  LOCK();
  bVar6 = *(int *)(lVar3 + 0x30) == 1;
  if (bVar6) {
    *(int *)(lVar3 + 0x30) = 2;
  }
  UNLOCK();
  if (bVar6) {
    FUN_142830740(lVar3 + 0x10,0);
    *(undefined4 *)(lVar3 + 0x30) = 3;
  }
  lVar3 = param_1[1];
  LOCK();
  bVar6 = *(int *)(lVar3 + 0x18) == 1;
  if (bVar6) {
    *(int *)(lVar3 + 0x18) = 2;
  }
  UNLOCK();
  if (bVar6) {
    TextureInstanceTask::FNormalizeLightmapTexelFactor::operator()(lVar3 + 0x10,0);
    *(undefined4 *)(lVar3 + 0x18) = 3;
  }
  lVar3 = *param_1;
  plVar5 = (longlong *)0x0;
  if (*(int *)(lVar3 + 0x30) != 0) {
    iVar2 = *(int *)(lVar3 + 0x30);
    while (iVar2 != 3) {
      FUN_1416b1760(0);
      iVar2 = *(int *)(lVar3 + 0x30);
    }
    if (*(int *)(lVar3 + 0x18) != 0) {
      plVar5 = *(longlong **)(lVar3 + 0x10);
    }
    (**(code **)(*plVar5 + 0x38))
              (plVar5,*(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x2c));
    puVar4 = *(undefined8 **)(lVar3 + 0x20);
    *(undefined8 *)(lVar3 + 0x20) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  *(undefined4 *)(lVar3 + 0x30) = 0;
  lVar3 = param_1[1];
  if (*(int *)(lVar3 + 0x18) != 0) {
    iVar2 = *(int *)(lVar3 + 0x18);
    while (iVar2 != 3) {
      FUN_1416b1760(0);
      iVar2 = *(int *)(lVar3 + 0x18);
    }
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  *(undefined4 *)(lVar3 + 0x18) = 0;
  return;
}



// FUNCTION 142844300 FUN_142844300 body=537 status=ok
// SIG undefined FUN_142844300(void)

void FUN_142844300(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar6 = *(int *)(param_1 + 0x10);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    if (0 < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (&local_48,iVar6);
      iVar6 = *(int *)(param_1 + 0x10);
    }
    iVar10 = 0;
    plVar12 = local_48;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar3 = local_40;
        lVar2 = *(longlong *)(param_1 + 8);
        piVar1 = (int *)(lVar8 + 0x20 + lVar2);
        *piVar1 = *piVar1 + -1;
        if (*(int *)(lVar8 + 0x20 + lVar2) < 1) {
          lVar9 = (longlong)(int)local_40;
          lVar2 = *(longlong *)(param_1 + 8);
          iVar6 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          plVar11 = plVar12;
          if (local_40._4_4_ < iVar6) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_48,uVar3 & 0xffffffff);
            plVar11 = local_48;
          }
          local_38 = *(undefined8 *)(lVar8 + 0x10 + lVar2);
          local_30 = *(longlong *)(lVar8 + 0x18 + lVar2);
          plVar12 = plVar11;
          if (local_30 != 0) {
            LOCK();
            *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
            UNLOCK();
            plVar12 = local_48;
          }
          FUN_14282a500(plVar11 + lVar9 * 5,lVar2 + (longlong)iVar10 * 0x28,&local_38);
          FUN_14283f810(param_1 + 8,iVar10,1,1);
          iVar10 = iVar10 + -1;
          lVar8 = lVar8 + -0x28;
        }
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 0x28;
      } while (iVar10 < *(int *)(param_1 + 0x10));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    lVar8 = (longlong)(int)local_40;
    for (plVar11 = plVar12; plVar11 != plVar12 + lVar8 * 5; plVar11 = plVar11 + 5) {
      if ((((int)plVar11[1] != 0) && ((longlong *)*plVar11 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*(longlong *)*plVar11 + 0x18))(), cVar4 != '\0')) {
        if ((int)plVar11[1] == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)*plVar11;
        }
        (**(code **)(*plVar7 + 0x40))();
      }
    }
    plVar11 = plVar12;
    for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
      plVar11 = (longlong *)plVar12[3];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar11 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar12);
      plVar12 = plVar12 + 5;
      plVar11 = local_48;
    }
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
  }
  return;
}



// FUNCTION 142844530 FUN_142844530 body=519 status=ok
// SIG undefined FUN_142844530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142844530(longlong *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  int local_88;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
    return;
  }
  uVar4 = 0;
  LOCK();
  iVar3 = (int)param_1[3];
  if (iVar3 == 0) {
    *(int *)(param_1 + 3) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  uVar5 = uVar4;
  if ((0 < iVar3) && (param_3 == 0)) {
    return;
  }
  do {
    while( true ) {
      if ((int)uVar5 != 0) {
        FUN_1416b1760(0);
      }
      uVar1 = *(uint *)((longlong)param_1 + 0x2c);
      uVar5 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        return;
      }
      if (uVar1 != 3) break;
      if (param_3 == 0) {
        return;
      }
      if ((param_3 == 1) && (DAT_146ac3ac5 == '\0')) {
        return;
      }
    }
    LOCK();
    bVar8 = uVar1 == *(uint *)((longlong)param_1 + 0x2c);
    if (bVar8) {
      *(uint *)((longlong)param_1 + 0x2c) = 3;
    }
    UNLOCK();
  } while (!bVar8);
  *(uint *)(param_1 + 6) = uVar1;
  LOCK();
  iVar3 = (int)param_1[3];
  if (iVar3 == 0) {
    *(int *)(param_1 + 3) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  if ((iVar3 < 1) && ((DAT_146b16cd4 < 1 || (param_3 != 1)))) {
    local_90 = *(undefined8 *)(param_2 + 0x60);
    if ((char)param_1[5] == '\0') {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
    }
    else {
      iVar3 = (int)param_1[0x12];
    }
    local_98 = param_2;
    local_88 = param_3;
    if (iVar3 == 0) {
      FUN_142834930(param_1);
      goto LAB_142844703;
    }
    if (param_3 == iVar3) {
      lVar7 = 0x40;
      if ((char)param_1[5] != '\0') {
        lVar7 = 0xa0;
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                (local_78,lVar7 + (longlong)param_1);
      FUN_142834930(param_1);
      if (local_38 != 0) {
        plVar6 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar6 = local_48;
        }
        if (plVar6 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar6 + 8))();
        }
      }
      (*local_78[0])(uVar4,&local_98);
      if (local_38 != 0) {
        plVar6 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar6 = local_48;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      goto LAB_142844703;
    }
    if (((int)param_1[6] == 2) && (param_3 == 0)) {
      *(undefined4 *)(param_1 + 6) = 2;
      goto LAB_142844703;
    }
    if ((param_3 != 2) || (cVar2 = FUN_141636a40(), cVar2 != '\0')) {
      FUN_142841910(param_1,&local_98,iVar3);
      goto LAB_142844703;
    }
  }
  *(undefined4 *)(param_1 + 6) = 1;
LAB_142844703:
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 142844740 TrimBounds body=429 status=ok
// SIG undefined TrimBounds(void)

void FTextureInstanceState::TrimBounds(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  bVar2 = false;
  while( true ) {
    iVar6 = *(int *)(param_1 + 0xe0);
    if ((iVar6 + -8 < 0) || (iVar6 <= iVar6 + -8)) break;
    lVar4 = (longlong)iVar6 + -8;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xd8) + lVar4 * 8);
    do {
      if (*plVar5 != 0) goto LAB_14284482b;
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (lVar4 < iVar6);
    iVar6 = *(int *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x18) + -2;
    iVar3 = (iVar6 - iVar7) + -2;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 * 0xf0 + *(longlong *)(param_1 + 0x10)),
                 (void *)((longlong)*(int *)(param_1 + 0x18) * 0xf0 + *(longlong *)(param_1 + 0x10))
                 ,(longlong)iVar3 * 0xf0);
      iVar6 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar6 + -2;
    iVar6 = *(int *)(param_1 + 0xe0);
    iVar7 = *(int *)(param_1 + 0xe0) + -8;
    iVar3 = (iVar6 - iVar7) + -8;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar7 * 8),
                 (void *)(*(longlong *)(param_1 + 0xd8) + (longlong)*(int *)(param_1 + 0xe0) * 8),
                 (longlong)iVar3 << 3);
      iVar6 = *(int *)(param_1 + 0xe0);
    }
    bVar2 = true;
    *(int *)(param_1 + 0xe0) = iVar6 + -8;
  }
LAB_14284482b:
  if ((bVar2) && (iVar6 = 0, 0 < *(int *)(param_1 + 0xf0))) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0xe8);
      if (*(int *)(param_1 + 0xe0) <= *(int *)(lVar4 + lVar1)) {
        iVar3 = *(int *)(param_1 + 0xf0);
        iVar7 = (iVar3 - iVar6) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar6 * 4),
                     (void *)(lVar1 + (longlong)(iVar3 - iVar7) * 4),(longlong)iVar7 << 2);
          iVar3 = *(int *)(param_1 + 0xf0);
        }
        *(int *)(param_1 + 0xf0) = iVar3 + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0xe8);
        iVar6 = iVar6 + -1;
        lVar4 = lVar4 + -4;
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 4;
    } while (iVar6 < *(int *)(param_1 + 0xf0));
  }
  return;
}



// FUNCTION 1428448f0 UnbindDelegates body=174 status=ok
// SIG undefined UnbindDelegates(void)

void FStreamableHandle::UnbindDelegates(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x28),0,0);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x38),0,0);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x18),0,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1428449a0 FUN_1428449a0 body=1974 status=ok
// SIG undefined FUN_1428449a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428449a0(longlong *param_1,longlong *param_2,float param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  uint uVar30;
  uint uVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar24;
  uint uVar32;
  undefined1 auVar29 [16];
  float fVar33;
  uint uVar34;
  float fVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar42;
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
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  float local_118 [8];
  float *local_f8;
  uint local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 0x18);
    lVar16 = (longlong)iVar1;
    pfVar21 = (float *)0x0;
    uVar2 = *(uint *)(param_2 + 1);
    local_158._4_4_ = param_3;
    local_158._0_4_ = param_3;
    fStack_150 = param_3;
    fStack_14c = param_3;
    local_f8 = (float *)0x0;
    local_ec = 0;
    fVar54 = 1.0 / param_4[6];
    local_f0 = uVar2;
    if (0 < (int)uVar2) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_118);
    }
    pfVar14 = local_118;
    if (local_f8 != (float *)0x0) {
      pfVar14 = pfVar21;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)pfVar14 | (ulonglong)local_f8),0,(longlong)(int)uVar2 << 3);
    auVar25._0_12_ = ZEXT812(0x3f000000);
    auVar25._12_4_ = 0.0;
    lVar22 = (longlong)(int)uVar2;
    fVar55 = auVar25._0_4_;
    pfVar14 = pfVar21;
    if (3 < lVar22) {
      pfVar13 = pfVar21;
      do {
        lVar20 = *param_2;
        fVar56 = *param_4;
        pfVar19 = local_118;
        if (local_f8 != (float *)0x0) {
          pfVar19 = local_f8;
        }
        fVar49 = *(float *)((longlong)pfVar13 + lVar20 + 0xc);
        pfVar19 = pfVar19 + (longlong)pfVar14 * 2;
        fVar23 = fVar49;
        if ((0.0 < fVar56) && (fVar23 = fVar56, fVar49 <= fVar56)) {
          fVar23 = fVar49;
        }
        *pfVar19 = fVar23 * 0.5;
        pfVar19[1] = 1.0;
        fVar56 = *(float *)((longlong)pfVar13 + lVar20 + 0x14);
        if (fVar56 <= param_4[6]) {
          *pfVar19 = fVar56 * *pfVar19;
        }
        else {
          *pfVar19 = param_4[6] * *pfVar19;
          pfVar19[1] = fVar54 * *(float *)((longlong)pfVar13 + lVar20 + 0x14);
        }
        lVar20 = *param_2;
        fVar56 = *param_4;
        pfVar19 = local_118;
        if (local_f8 != (float *)0x0) {
          pfVar19 = local_f8;
        }
        fVar49 = *(float *)((longlong)pfVar13 + lVar20 + 0x34);
        fVar23 = fVar49;
        if ((0.0 < fVar56) && (fVar23 = fVar56, fVar49 <= fVar56)) {
          fVar23 = fVar49;
        }
        fVar23 = fVar23 * 0.5;
        pfVar19[(longlong)pfVar14 * 2 + 2] = fVar23;
        pfVar19[(longlong)pfVar14 * 2 + 3] = 1.0;
        fVar56 = *(float *)((longlong)pfVar13 + lVar20 + 0x3c);
        if (fVar56 <= param_4[6]) {
          pfVar19[(longlong)pfVar14 * 2 + 2] = fVar23 * fVar56;
        }
        else {
          pfVar19[(longlong)pfVar14 * 2 + 2] = param_4[6] * fVar23;
          pfVar19[(longlong)pfVar14 * 2 + 3] =
               fVar54 * *(float *)((longlong)pfVar13 + lVar20 + 0x3c);
        }
        lVar20 = *param_2;
        fVar56 = *param_4;
        pfVar19 = local_118;
        if (local_f8 != (float *)0x0) {
          pfVar19 = local_f8;
        }
        fVar49 = *(float *)((longlong)pfVar13 + lVar20 + 0x5c);
        fVar23 = fVar49;
        if ((0.0 < fVar56) && (fVar23 = fVar56, fVar49 <= fVar56)) {
          fVar23 = fVar49;
        }
        pfVar19[(longlong)pfVar14 * 2 + 4] = fVar23 * fVar55;
        pfVar19[(longlong)pfVar14 * 2 + 5] = 1.0;
        fVar56 = *(float *)((longlong)pfVar13 + lVar20 + 100);
        if (fVar56 <= param_4[6]) {
          pfVar19[(longlong)pfVar14 * 2 + 4] = fVar56 * pfVar19[(longlong)pfVar14 * 2 + 4];
        }
        else {
          pfVar19[(longlong)pfVar14 * 2 + 4] = param_4[6] * pfVar19[(longlong)pfVar14 * 2 + 4];
          pfVar19[(longlong)pfVar14 * 2 + 5] = fVar54 * *(float *)((longlong)pfVar13 + lVar20 + 100)
          ;
        }
        lVar20 = *param_2;
        fVar56 = *param_4;
        pfVar19 = local_118;
        if (local_f8 != (float *)0x0) {
          pfVar19 = local_f8;
        }
        fVar49 = *(float *)((longlong)pfVar13 + lVar20 + 0x84);
        pfVar19 = pfVar19 + (longlong)pfVar14 * 2 + 6;
        fVar23 = fVar49;
        if ((0.0 < fVar56) && (fVar23 = fVar56, fVar49 <= fVar56)) {
          fVar23 = fVar49;
        }
        *pfVar19 = fVar23 * fVar55;
        pfVar19[1] = 1.0;
        fVar56 = *(float *)((longlong)pfVar13 + lVar20 + 0x8c);
        if (fVar56 <= param_4[6]) {
          *pfVar19 = fVar56 * *pfVar19;
        }
        else {
          *pfVar19 = param_4[6] * *pfVar19;
          pfVar19[1] = fVar54 * *(float *)((longlong)pfVar13 + lVar20 + 0x8c);
        }
        pfVar14 = pfVar14 + 1;
        pfVar13 = pfVar13 + 0x28;
      } while ((longlong)pfVar14 < lVar22 + -3);
    }
    if ((longlong)pfVar14 < lVar22) {
      lVar20 = (longlong)pfVar14 * 0x28;
      do {
        lVar3 = *param_2;
        fVar56 = *param_4;
        pfVar13 = local_118;
        if (local_f8 != (float *)0x0) {
          pfVar13 = local_f8;
        }
        fVar49 = *(float *)(lVar20 + 0xc + lVar3);
        fVar23 = fVar49;
        if ((0.0 < fVar56) && (fVar23 = fVar56, fVar49 <= fVar56)) {
          fVar23 = fVar49;
        }
        pfVar13[(longlong)pfVar14 * 2 + 1] = 1.0;
        fVar23 = fVar23 * fVar55;
        pfVar13[(longlong)pfVar14 * 2] = fVar23;
        fVar56 = *(float *)(lVar20 + 0x14 + lVar3);
        if (fVar56 <= param_4[6]) {
          pfVar13[(longlong)pfVar14 * 2] = fVar56 * fVar23;
        }
        else {
          pfVar13[(longlong)pfVar14 * 2] = fVar23 * param_4[6];
          pfVar13[(longlong)pfVar14 * 2 + 1] = fVar54 * *(float *)(lVar20 + 0x14 + lVar3);
        }
        pfVar14 = (float *)((longlong)pfVar14 + 1);
        lVar20 = lVar20 + 0x28;
      } while ((longlong)pfVar14 < lVar22);
    }
    iVar18 = iVar1 * 4;
    *(undefined4 *)(param_1 + 2) = 0;
    pfVar14 = pfVar21;
    if (*(int *)((longlong)param_1 + 0x14) != iVar18) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 1,iVar18);
      pfVar14 = (float *)(ulonglong)*(uint *)(param_1 + 2);
    }
    iVar18 = iVar18 + (int)pfVar14;
    *(int *)(param_1 + 2) = iVar18;
    if (*(int *)((longlong)param_1 + 0x14) < iVar18) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1);
    }
    uVar11 = uRam0000000146b1679c;
    uVar10 = uRam0000000146b16798;
    uVar9 = uRam0000000146b16794;
    uVar8 = _DAT_146b16790;
    auVar26 = ZEXT816(0);
    pfVar14 = pfVar21;
    fVar54 = param_3;
    fVar55 = param_3;
    fVar56 = param_3;
    local_148 = auVar26;
    if (0 < iVar1) {
      do {
        uVar32 = 0;
        uVar31 = 0;
        uVar30 = 0;
        uVar24 = 0;
        pfVar13 = (float *)((longlong)(int)pfVar14 * 0xf0 + *(longlong *)(*param_1 + 0x10));
        uVar34 = uVar24;
        uVar38 = uVar30;
        uVar40 = uVar31;
        uVar42 = uVar32;
        if (0 < (int)uVar2) {
          pfVar19 = (float *)*param_2;
          local_138 = -(uint)(pfVar13[0x28] != 0.0);
          uStack_134 = -(uint)(pfVar13[0x29] != 0.0);
          uStack_130 = -(uint)(pfVar13[0x2a] != 0.0);
          uStack_12c = -(uint)(pfVar13[0x2b] != 0.0);
          pfVar15 = local_118;
          if (local_f8 != (float *)0x0) {
            pfVar15 = local_f8;
          }
          local_128 = -(uint)(param_3 < pfVar13[0x38]);
          uStack_124 = -(uint)(fVar54 < pfVar13[0x39]);
          uStack_120 = -(uint)(fVar55 < pfVar13[0x3a]);
          uStack_11c = -(uint)(fVar56 < pfVar13[0x3b]);
          pfVar12 = pfVar19 + 2;
          uVar17 = (ulonglong)uVar2;
          do {
            fVar54 = pfVar12[-1];
            fVar49 = *pfVar15;
            fVar23 = pfVar15[1];
            fVar45 = *pfVar19;
            fVar47 = *pfVar12;
            fVar50 = fVar54 - pfVar13[4];
            fVar51 = fVar54 - pfVar13[5];
            fVar52 = fVar54 - pfVar13[6];
            fVar53 = fVar54 - pfVar13[7];
            if (*(char *)((longlong)param_4 + 0x25) == '\0') {
              fVar43 = fVar45 - *pfVar13;
              fVar44 = fVar45 - pfVar13[1];
              fVar46 = fVar45 - pfVar13[2];
              fVar48 = fVar45 - pfVar13[3];
              fVar33 = fVar47 - pfVar13[8];
              fVar37 = fVar47 - pfVar13[9];
              fVar39 = fVar47 - pfVar13[10];
              fVar41 = fVar47 - pfVar13[0xb];
              fVar50 = (fVar50 * fVar50 + fVar43 * fVar43 + fVar33 * fVar33) -
                       pfVar13[0x24] * pfVar13[0x24];
              fVar51 = (fVar51 * fVar51 + fVar44 * fVar44 + fVar37 * fVar37) -
                       pfVar13[0x25] * pfVar13[0x25];
              fVar52 = (fVar52 * fVar52 + fVar46 * fVar46 + fVar39 * fVar39) -
                       pfVar13[0x26] * pfVar13[0x26];
              fVar53 = (fVar53 * fVar53 + fVar48 * fVar48 + fVar41 * fVar41) -
                       pfVar13[0x27] * pfVar13[0x27];
            }
            else {
              fVar43 = (float)((uint)(fVar45 - *pfVar13) & uVar8);
              fVar44 = (float)((uint)(fVar45 - pfVar13[1]) & uVar9);
              auVar26._4_4_ = fVar44;
              auVar26._0_4_ = fVar43;
              fVar46 = (float)((uint)(fVar45 - pfVar13[2]) & uVar10);
              fVar48 = (float)((uint)(fVar45 - pfVar13[3]) & uVar11);
              auVar26._8_4_ = fVar46;
              auVar26._12_4_ = fVar48;
              fVar33 = (float)((uint)(fVar47 - pfVar13[8]) & uVar8);
              fVar37 = (float)((uint)(fVar47 - pfVar13[9]) & uVar9);
              auVar27._4_4_ = fVar37;
              auVar27._0_4_ = fVar33;
              fVar39 = (float)((uint)(fVar47 - pfVar13[10]) & uVar10);
              fVar41 = (float)((uint)(fVar47 - pfVar13[0xb]) & uVar11);
              auVar25 = minps(auVar26,*(undefined1 (*) [16])(pfVar13 + 0x18));
              fVar43 = fVar43 - auVar25._0_4_;
              fVar44 = fVar44 - auVar25._4_4_;
              fVar46 = fVar46 - auVar25._8_4_;
              fVar48 = fVar48 - auVar25._12_4_;
              auVar29._4_4_ = (uint)fVar51 & uVar9;
              auVar29._0_4_ = (uint)fVar50 & uVar8;
              auVar29._8_4_ = (uint)fVar52 & uVar10;
              auVar29._12_4_ = (uint)fVar53 & uVar11;
              auVar26 = minps(auVar29,*(undefined1 (*) [16])(pfVar13 + 0x1c));
              auVar25._0_4_ = fVar43 * fVar43;
              auVar25._4_4_ = fVar44 * fVar44;
              auVar25._8_4_ = fVar46 * fVar46;
              auVar25._12_4_ = fVar48 * fVar48;
              fVar50 = (float)((uint)fVar50 & uVar8) - auVar26._0_4_;
              fVar51 = (float)((uint)fVar51 & uVar9) - auVar26._4_4_;
              fVar52 = (float)((uint)fVar52 & uVar10) - auVar26._8_4_;
              fVar53 = (float)((uint)fVar53 & uVar11) - auVar26._12_4_;
              auVar27._8_4_ = fVar39;
              auVar27._12_4_ = fVar41;
              auVar26 = minps(auVar27,*(undefined1 (*) [16])(pfVar13 + 0x20));
              fVar33 = fVar33 - auVar26._0_4_;
              fVar37 = fVar37 - auVar26._4_4_;
              fVar39 = fVar39 - auVar26._8_4_;
              fVar41 = fVar41 - auVar26._12_4_;
              fVar50 = fVar50 * fVar50 + auVar25._0_4_ + fVar33 * fVar33;
              fVar51 = fVar51 * fVar51 + auVar25._4_4_ + fVar37 * fVar37;
              fVar52 = fVar52 * fVar52 + auVar25._8_4_ + fVar39 * fVar39;
              fVar53 = fVar53 * fVar53 + auVar25._12_4_ + fVar41 * fVar41;
            }
            auVar4._4_4_ = fVar51;
            auVar4._0_4_ = fVar50;
            auVar4._8_4_ = fVar52;
            auVar4._12_4_ = fVar53;
            auVar26 = maxps(*(undefined1 (*) [16])(pfVar13 + 0x2c),auVar4);
            pfVar19 = pfVar19 + 10;
            pfVar12 = pfVar12 + 10;
            pfVar15 = pfVar15 + 2;
            auVar26 = maxps(auVar26,_DAT_146b16360);
            auVar25 = rsqrtps(auVar25,auVar26);
            fVar50 = (fVar54 - pfVar13[0x10]) * (fVar54 - pfVar13[0x10]) +
                     (fVar45 - pfVar13[0xc]) * (fVar45 - pfVar13[0xc]) +
                     (fVar47 - pfVar13[0x14]) * (fVar47 - pfVar13[0x14]);
            fVar51 = (fVar54 - pfVar13[0x11]) * (fVar54 - pfVar13[0x11]) +
                     (fVar45 - pfVar13[0xd]) * (fVar45 - pfVar13[0xd]) +
                     (fVar47 - pfVar13[0x15]) * (fVar47 - pfVar13[0x15]);
            fVar52 = (fVar54 - pfVar13[0x12]) * (fVar54 - pfVar13[0x12]) +
                     (fVar45 - pfVar13[0xe]) * (fVar45 - pfVar13[0xe]) +
                     (fVar47 - pfVar13[0x16]) * (fVar47 - pfVar13[0x16]);
            fVar53 = (fVar54 - pfVar13[0x13]) * (fVar54 - pfVar13[0x13]) +
                     (fVar45 - pfVar13[0xf]) * (fVar45 - pfVar13[0xf]) +
                     (fVar47 - pfVar13[0x17]) * (fVar47 - pfVar13[0x17]);
            fVar54 = auVar25._0_4_ * fVar49;
            fVar45 = auVar25._4_4_ * fVar49;
            auVar28._4_4_ = fVar45;
            auVar28._0_4_ = fVar54;
            fVar47 = auVar25._8_4_ * fVar49;
            fVar49 = auVar25._12_4_ * fVar49;
            auVar28._8_4_ = fVar47;
            auVar28._12_4_ = fVar49;
            auVar25._0_4_ = fVar54 * fVar23;
            auVar25._4_4_ = fVar45 * fVar23;
            auVar25._8_4_ = fVar47 * fVar23;
            auVar25._12_4_ = fVar49 * fVar23;
            auVar6._4_4_ = uVar30;
            auVar6._0_4_ = uVar24;
            auVar6._8_4_ = uVar31;
            auVar6._12_4_ = uVar32;
            auVar26 = maxps(auVar28,auVar6);
            uVar24 = auVar26._0_4_;
            uVar30 = auVar26._4_4_;
            uVar31 = auVar26._8_4_;
            uVar32 = auVar26._12_4_;
            auVar35._0_4_ = uVar24 & local_138;
            auVar35._4_4_ = uVar30 & uStack_134;
            auVar35._8_4_ = uVar31 & uStack_130;
            auVar35._12_4_ = uVar32 & uStack_12c;
            auVar26 = maxps(local_148,auVar35);
            auVar5._4_4_ = fVar51;
            auVar5._0_4_ = fVar50;
            auVar5._8_4_ = fVar52;
            auVar5._12_4_ = fVar53;
            auVar29 = maxps(*(undefined1 (*) [16])(pfVar13 + 0x30),auVar5);
            auVar29 = minps(*(undefined1 (*) [16])(pfVar13 + 0x34),auVar29);
            auVar36._0_4_ = -(uint)(auVar29._0_4_ == fVar50) & (uint)auVar25._0_4_ & local_128;
            auVar36._4_4_ = -(uint)(auVar29._4_4_ == fVar51) & (uint)auVar25._4_4_ & uStack_124;
            auVar36._8_4_ =
                 -(uint)(auVar29._8_4_ == fVar52) & (uint)auVar25._8_4_ &
                 -(uint)(fVar55 < pfVar13[0x3a]);
            auVar36._12_4_ =
                 -(uint)(auVar29._12_4_ == fVar53) & (uint)auVar25._12_4_ &
                 -(uint)(fVar56 < pfVar13[0x3b]);
            auVar7._4_4_ = uVar38;
            auVar7._0_4_ = uVar34;
            auVar7._8_4_ = uVar40;
            auVar7._12_4_ = uVar42;
            auVar29 = maxps(auVar36,auVar7);
            uVar34 = auVar29._0_4_;
            uVar38 = auVar29._4_4_;
            uVar40 = auVar29._8_4_;
            uVar42 = auVar29._12_4_;
            uVar17 = uVar17 - 1;
            local_148 = auVar26;
          } while (uVar17 != 0);
          param_3 = (float)local_158._0_4_;
          fVar54 = (float)local_158._4_4_;
          fVar55 = fStack_150;
          fVar56 = fStack_14c;
        }
        lVar22 = param_1[1];
        *(uint *)((longlong)pfVar21 + lVar22 + 8) = uVar30;
        *(uint *)((longlong)pfVar21 + lVar22 + 0xc) = uVar38;
        *(uint *)((longlong)pfVar21 + lVar22) = uVar24;
        *(uint *)((longlong)pfVar21 + lVar22 + 4) = uVar34;
        *(uint *)((longlong)pfVar21 + lVar22 + 0x18) = uVar32;
        *(uint *)((longlong)pfVar21 + lVar22 + 0x1c) = uVar42;
        *(uint *)((longlong)pfVar21 + lVar22 + 0x10) = uVar31;
        *(uint *)((longlong)pfVar21 + lVar22 + 0x14) = uVar40;
        pfVar21 = pfVar21 + 8;
        lVar16 = lVar16 + -1;
        pfVar14 = (float *)(ulonglong)((int)pfVar14 + 1);
      } while (lVar16 != 0);
    }
    if (0.0 < param_4[0xc]) {
      fVar54 = auVar26._4_4_;
      if (auVar26._4_4_ <= auVar26._0_4_) {
        fVar54 = auVar26._0_4_;
      }
      if (fVar54 < auVar26._8_4_) {
        fVar54 = auVar26._8_4_;
      }
      fStack_14c = auVar26._12_4_;
      if (fStack_14c <= fVar54) {
        fStack_14c = fVar54;
      }
      *(float *)(param_1 + 3) = fStack_14c * *(float *)(*param_1 + 0xd0);
      _local_158 = auVar26;
    }
    if (local_f8 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142845160 FUN_142845160 body=258 status=ok
// SIG undefined FUN_142845160(void)

ulonglong FUN_142845160(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xe0))) {
    in_RAX = *(ulonglong *)(param_1 + 0xd8);
    lVar2 = *(longlong *)(in_RAX + (longlong)param_2 * 8);
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(lVar2 + 0x370);
      uVar5 = param_2 >> 0x1f & 3;
      uVar3 = param_2 + uVar5;
      lVar4 = (longlong)(int)((uVar3 & 3) - uVar5);
      lVar6 = (longlong)((int)uVar3 >> 2) * 0xf0 + *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(lVar6 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1d0);
      *(undefined4 *)(lVar6 + 0x10 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1d4);
      *(undefined4 *)(lVar6 + 0x20 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1d8);
      *(undefined4 *)(lVar6 + 0x30 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1d0);
      *(undefined4 *)(lVar6 + 0x40 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1d4);
      *(undefined4 *)(lVar6 + 0x50 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1d8);
      *(undefined4 *)(lVar6 + 0x60 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1dc);
      *(undefined4 *)(lVar6 + 0x70 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1e0);
      *(undefined4 *)(lVar6 + 0x80 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1e4);
      *(undefined4 *)(lVar6 + 0x90 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x1e8);
      *(undefined4 *)(lVar6 + 0xb0 + lVar4 * 4) = 0;
      *(undefined4 *)(lVar6 + 0xc0 + lVar4 * 4) = 0;
      *(undefined4 *)(lVar6 + 0xe0 + lVar4 * 4) = uVar1;
      *(undefined4 *)(lVar6 + 0xa0 + lVar4 * 4) = 0xffff0000;
      *(undefined4 *)(lVar6 + 0xd0 + lVar4 * 4) = 0x7f7fffff;
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142845270 FUN_142845270 body=2580 status=ok
// SIG undefined FUN_142845270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142845270(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  longlong local_res18;
  longlong local_a8;
  longlong local_a0;
  longlong *local_88;
  longlong *local_80;
  int *local_78;
  undefined8 local_70;
  
  lVar15 = 0;
  lVar10 = param_1[0xd];
  *param_2 = 0;
  *param_3 = 0;
  lVar16 = DAT_146b16fa0;
  plVar1 = (longlong *)(lVar10 + 0x10);
  local_78 = (int *)0x0;
  local_70 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_res18 = 0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar20 = 4;
    if (DVar5 == DAT_1468c21c0) goto LAB_14284531d;
  }
  else {
LAB_14284531d:
    lVar20 = lVar15;
  }
  fVar23 = *(float *)(lVar16 + lVar20);
  lVar16 = *plVar1;
  lVar19 = (longlong)*(int *)(lVar10 + 0x18) * 200 + lVar16;
  lVar20 = lVar15;
  while ((lVar16 != lVar19 && ((char)param_1[0x14] == '\0'))) {
    iVar6 = FUN_142847380(lVar16,lVar10 + 0x1b4);
    lVar15 = lVar15 + iVar6;
    lVar14 = (longlong)*(int *)(lVar16 + 0x18 + (longlong)*(int *)(lVar16 + 100) * 4);
    local_a8 = local_a8 + lVar14;
    local_a0 = local_a0 + *(int *)(lVar16 + 0x18 + (longlong)*(int *)(lVar16 + 0x60) * 4);
    *param_2 = *param_2 + (longlong)*(int *)(lVar16 + 0x18 + (longlong)*(int *)(lVar16 + 0x58) * 4);
    lVar8 = lVar20 + iVar6;
    if (fVar23 <= *(float *)(lVar16 + 0x80)) {
      lVar8 = lVar20;
    }
    lVar14 = lVar14 + local_res18;
    if (fVar23 <= *(float *)(lVar16 + 0x80)) {
      lVar14 = local_res18;
    }
    if (*(int *)(lVar16 + 0x58) != *(int *)(lVar16 + 0x5c)) {
      *param_3 = *param_3 +
                 (longlong)*(int *)(lVar16 + 0x18 + (longlong)*(int *)(lVar16 + 0x5c) * 4);
    }
    lVar16 = lVar16 + 200;
    lVar20 = lVar8;
    local_res18 = lVar14;
  }
  bVar21 = false;
  if (param_1[0x18] + param_1[0x19] < param_1[0x1b] - lVar15) {
    bVar21 = true;
LAB_142845428:
    param_1[0x1b] = lVar15;
  }
  else if (param_1[0x1b] < lVar15) goto LAB_142845428;
  iVar6 = 0;
  lVar16 = 0;
  if (-1 < param_1[0x16] - *param_2) {
    lVar16 = param_1[0x16] - *param_2;
  }
  lVar8 = (param_1[0x17] - param_1[0x19]) - lVar16;
  lVar19 = 0;
  if (-1 < lVar8) {
    lVar19 = lVar8;
  }
  if ((0 < DAT_146ab6310) && (0 < param_1[0x15])) {
    lVar8 = (longlong)DAT_146ab6310 * param_1[0x15];
    lVar8 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar8),8) + lVar8;
    lVar16 = ((((lVar8 >> 6) - (lVar8 >> 0x3f)) + (longlong)DAT_146ab6304 * -0x400) - param_1[0x19])
             - lVar16;
    lVar8 = 0;
    if (-1 < lVar16) {
      lVar8 = lVar16;
    }
    if (((0 < lVar8) && (*(char *)(lVar10 + 0x1d8) != '\0')) && (lVar8 < lVar19)) {
      lVar19 = lVar8;
    }
  }
  lVar16 = 0;
  if (-1 < lVar19) {
    lVar16 = lVar19;
  }
  lVar19 = param_1[0x1a];
  param_1[0x1a] = lVar16;
  if (lVar19 < lVar16) {
    bVar21 = true;
  }
  if (*(char *)(lVar10 + 0x1dd) != '\0') {
    lVar16 = *plVar1;
    lVar19 = (longlong)*(int *)(lVar10 + 0x18) * 200 + lVar16;
    while ((lVar16 != lVar19 && ((char)param_1[0x14] == '\0'))) {
      if (bVar21) {
LAB_14284553d:
        if (0 < *(int *)(lVar16 + 0xb4)) {
          *(undefined4 *)(lVar16 + 0xb4) = 0;
        }
      }
      else {
        iVar11 = *(int *)(lVar16 + 0xa0) + *(int *)(lVar16 + 0x98);
        if (iVar11 <= *(int *)(lVar16 + 0x9c)) {
          iVar11 = *(int *)(lVar16 + 0x9c);
        }
        if (iVar11 < *(int *)(lVar16 + 100)) goto LAB_14284553d;
      }
      lVar16 = lVar16 + 200;
    }
  }
  lVar16 = DAT_146b166a8;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    lVar19 = 4;
  }
  else {
    lVar19 = 0;
  }
  lVar8 = DAT_146b16690;
  lVar14 = 4;
  fVar23 = *(float *)(lVar16 + lVar19);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
    lVar14 = 0;
  }
  if ((*(int *)(lVar8 + lVar14) == 0) || (fVar23 <= 0.0)) {
LAB_142845704:
    DAT_146534ed4 = 1.0;
  }
  else {
    lVar16 = param_1[0x1a];
    if (local_a8 < lVar16) {
      DAT_146534ed4 = fVar23 * 32.0;
    }
    else {
      if (lVar16 < local_a0) goto LAB_142845704;
      if ((0 < lVar16) && (0 < lVar20)) {
        fVar24 = (float)((double)lVar20 / (double)lVar16);
        fVar23 = (float)((double)lVar20 / (double)local_res18);
        if ((fVar24 < _DAT_146534ed8) && (fVar23 < DAT_146534ee0 - DAT_146534ee4)) {
          DAT_146534ed4 = DAT_146534ed4 + 0.125;
          if (1.0 <= DAT_146534ed4) {
            if (32.0 <= DAT_146534ed4) {
              DAT_146534ed4 = 32.0;
            }
          }
          else {
            DAT_146534ed4 = 1.0;
          }
          lVar16 = param_1[0x1a];
        }
        if ((((_DAT_146534edc < fVar24) || (DAT_146534ee4 + DAT_146534ee0 < fVar23)) ||
            (lVar16 < lVar15)) &&
           ((fVar23 = DAT_146534ed4 - 0.125, DAT_146534ed4 = 1.0, 1.0 <= fVar23 &&
            (DAT_146534ed4 = fVar23, 32.0 <= fVar23)))) {
          DAT_146534ed4 = 32.0;
        }
      }
    }
  }
  lVar16 = param_1[0x1a];
  bVar22 = SBORROW8(lVar15,lVar16);
  bVar21 = lVar15 - lVar16 < 0;
  if (lVar16 < lVar15) {
    if ((char)param_1[0x14] == '\0') {
      local_70 = local_70 & 0xffffffff00000000;
      if ((*(int *)(lVar10 + 0x18) != 0) &&
         (TArray<float,FDefaultAllocator>::ResizeTo(&local_78,*(int *)(lVar10 + 0x18)),
         0 < *(int *)(lVar10 + 0x18))) {
        lVar16 = 0;
        do {
          uVar3 = local_70;
          if ((char)param_1[0x14] != '\0') break;
          lVar20 = *plVar1;
          if ((((*(longlong *)(lVar16 + lVar20) != 0) &&
               (iVar11 = *(int *)(lVar16 + 8 + lVar20), iVar11 != 0x1d)) && (3 < iVar11 - 0x30U)) &&
             (((*(byte *)(lVar16 + 0x54 + lVar20) & 0x12) == 0 &&
              (*(int *)(lVar16 + 0x60 + lVar20) < *(int *)(lVar16 + 0xa8 + lVar20))))) {
            lVar20 = (longlong)(int)local_70;
            iVar11 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar11);
            if (local_70._4_4_ < iVar11) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,uVar3 & 0xffffffff);
            }
            local_78[lVar20] = iVar6;
          }
          iVar6 = iVar6 + 1;
          lVar16 = lVar16 + 200;
        } while (iVar6 < *(int *)(lVar10 + 0x18));
      }
      local_88 = plVar1;
      AlgoImpl::
      IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,FCompareTextureByRetentionPriority>_>
                (local_78,(longlong)(int)local_70,(ulonglong)param_2 & 0xff,&local_88);
      if (*(char *)(lVar10 + 0x1dd) != '\0') {
        if (0 < (int)param_1[1]) {
          lVar16 = 0;
          pfVar9 = (float *)(*param_1 + 0x14);
          do {
            if (*(float *)(param_1[0xd] + 0x1c8) < *pfVar9) goto LAB_1428459a1;
            lVar16 = lVar16 + 1;
            pfVar9 = pfVar9 + 10;
          } while (lVar16 < (int)param_1[1]);
        }
        iVar6 = 0;
        lVar16 = lVar15;
        if (0 < *(int *)(lVar10 + 0x1d0)) {
          while( true ) {
            lVar20 = param_1[0x1a];
            bVar22 = SBORROW8(lVar16,lVar20);
            bVar21 = lVar16 - lVar20 < 0;
            lVar15 = lVar16;
            if (lVar16 <= lVar20) goto LAB_142845a6f;
            if (((char)param_1[0x14] != '\0') ||
               (lVar20 = (longlong)((int)local_70 + -1), (int)local_70 + -1 < 0)) break;
            do {
              if ((lVar15 <= param_1[0x1a]) || ((char)param_1[0x14] != '\0')) break;
              if (local_78[lVar20] != -1) {
                plVar17 = (longlong *)((longlong)local_78[lVar20] * 200 + *plVar1);
                iVar11 = (int)plVar17[0x15];
                lVar19 = (longlong)iVar11;
                if ((int)plVar17[0xc] < iVar11) {
                  iVar13 = *(int *)((longlong)plVar17 + 100);
                  iVar2 = *(int *)((longlong)plVar17 + 0xb4);
                  if ((iVar13 - iVar6) + iVar2 <= iVar11) {
                    iVar12 = (iVar6 - iVar2) + 1;
                    if (*plVar17 == 0) {
LAB_14284597c:
                      lVar19 = 0;
                    }
                    else {
                      iVar7 = (iVar13 - (int)plVar17[0xc]) + -1;
                      if (iVar7 <= iVar12) {
                        iVar12 = iVar7;
                      }
                      if (iVar12 < 1) {
                        *(int *)(plVar17 + 0x15) = iVar11 + -1;
                        lVar19 = (longlong)
                                 (*(int *)((longlong)plVar17 + lVar19 * 4 + 0x18) -
                                 *(int *)((longlong)plVar17 + lVar19 * 4 + 0x14));
                      }
                      else {
                        iVar13 = iVar13 - iVar12;
                        *(int *)((longlong)plVar17 + 100) = iVar13;
                        *(int *)((longlong)plVar17 + 0xb4) = iVar12 + iVar2;
                        if (iVar11 <= iVar13) goto LAB_14284597c;
                        iVar11 = *(int *)((longlong)plVar17 + lVar19 * 4 + 0x18);
                        iVar2 = *(int *)((longlong)plVar17 + (longlong)iVar13 * 4 + 0x18);
                        *(int *)(plVar17 + 0x15) = iVar13;
                        iVar12 = iVar13;
                        if (*(int *)((longlong)plVar17 + 0x9c) <= iVar13) {
                          iVar12 = *(int *)((longlong)plVar17 + 0x9c);
                        }
                        *(int *)((longlong)plVar17 + 0x9c) = iVar12;
                        if ((int)plVar17[0x14] <= iVar13) {
                          iVar13 = (int)plVar17[0x14];
                        }
                        lVar19 = (longlong)(iVar11 - iVar2);
                        *(int *)(plVar17 + 0x14) = iVar13;
                      }
                    }
                    lVar15 = lVar15 - lVar19;
                  }
                }
                else {
                  local_78[lVar20] = -1;
                }
              }
              lVar20 = lVar20 + -1;
            } while (-1 < lVar20);
            if ((lVar16 == lVar15) ||
               (iVar6 = iVar6 + 1, lVar16 = lVar15, *(int *)(lVar10 + 0x1d0) <= iVar6)) break;
          }
        }
      }
LAB_1428459a1:
      lVar16 = param_1[0x1a];
      bVar22 = SBORROW8(lVar15,lVar16);
      bVar21 = lVar15 - lVar16 < 0;
      lVar20 = lVar15;
      if (lVar15 <= lVar16) goto LAB_142845a6f;
      while ((lVar15 = lVar20, (char)param_1[0x14] == '\0' &&
             (lVar16 = (longlong)((int)local_70 + -1), -1 < (int)local_70 + -1))) {
        do {
          if ((lVar15 <= param_1[0x1a]) || ((char)param_1[0x14] != '\0')) break;
          if (local_78[lVar16] != -1) {
            plVar17 = (longlong *)((longlong)local_78[lVar16] * 200 + *plVar1);
            iVar6 = (int)plVar17[0x15];
            if ((int)plVar17[0xc] < iVar6) {
              if ((int)plVar17[0x13] < 1) {
                if (*plVar17 == 0) {
                  lVar19 = 0;
                }
                else {
                  *(int *)(plVar17 + 0x15) = iVar6 + -1;
                  lVar19 = (longlong)
                           (*(int *)((longlong)plVar17 + (longlong)iVar6 * 4 + 0x18) -
                           *(int *)((longlong)plVar17 + (longlong)iVar6 * 4 + 0x14));
                }
                lVar15 = lVar15 - lVar19;
              }
              else {
                *(int *)(plVar17 + 0x13) = (int)plVar17[0x13] + -1;
              }
            }
            else {
              local_78[lVar16] = -1;
            }
          }
          lVar16 = lVar16 + -1;
        } while (-1 < lVar16);
        if ((lVar20 == lVar15) || (lVar20 = lVar15, lVar15 <= param_1[0x1a])) break;
      }
    }
    bVar22 = SBORROW8(lVar15,param_1[0x1a]);
    bVar21 = lVar15 - param_1[0x1a] < 0;
  }
LAB_142845a6f:
  if ((bVar22 != bVar21) && ((char)param_1[0x14] == '\0')) {
    iVar6 = *(int *)(lVar10 + 0x18);
    uVar3 = local_70 >> 0x20;
    local_70 = local_70 & 0xffffffff00000000;
    if ((int)uVar3 != iVar6) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_78,iVar6);
      iVar6 = *(int *)(lVar10 + 0x18);
    }
    lVar16 = param_1[0x1a];
    iVar11 = 0;
    if (0 < iVar6) {
      lVar20 = 0;
      do {
        uVar3 = local_70;
        if ((char)param_1[0x14] != '\0') break;
        plVar17 = (longlong *)(*plVar1 + lVar20);
        if (((*plVar17 != 0) && (iVar6 = (int)plVar17[0x15], iVar6 < (int)plVar17[0xb])) &&
           ((longlong)
            (*(int *)((longlong)plVar17 + (longlong)iVar6 * 4 + 0x1c) -
            *(int *)((longlong)plVar17 + (longlong)iVar6 * 4 + 0x18)) <= lVar16 - lVar15)) {
          lVar19 = (longlong)(int)local_70;
          iVar6 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar6);
          if (local_70._4_4_ < iVar6) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,uVar3 & 0xffffffff);
          }
          local_78[lVar19] = iVar11;
        }
        iVar11 = iVar11 + 1;
        lVar20 = lVar20 + 200;
      } while (iVar11 < *(int *)(lVar10 + 0x18));
    }
    local_80 = plVar1;
    AlgoImpl::
    IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,FCompareTextureByRetentionPriority>_>
              (local_78,(longlong)(int)local_70,(ulonglong)param_2 & 0xff,&local_80);
    bVar21 = true;
    if (lVar15 < param_1[0x1a]) {
      do {
        if ((!bVar21) || ((char)param_1[0x14] != '\0')) break;
        bVar21 = false;
        iVar6 = 0;
        piVar18 = local_78;
        if (0 < (int)local_70) {
          do {
            if (param_1[0x1a] <= lVar15) goto LAB_142845c35;
            if ((char)param_1[0x14] != '\0') break;
            if (*piVar18 != -1) {
              plVar17 = (longlong *)((longlong)*piVar18 * 200 + *plVar1);
              if (*plVar17 != 0) {
                iVar11 = (int)plVar17[0x15];
                iVar13 = *(int *)((longlong)plVar17 + 100);
                if ((int)plVar17[0xb] <= *(int *)((longlong)plVar17 + 100)) {
                  iVar13 = (int)plVar17[0xb];
                }
                if (iVar11 < iVar13) {
                  *(int *)(plVar17 + 0x15) = iVar11 + 1;
                  iVar13 = *(int *)((longlong)plVar17 + (longlong)iVar11 * 4 + 0x1c) -
                           *(int *)((longlong)plVar17 + (longlong)iVar11 * 4 + 0x18);
                  if (0 < iVar13) {
                    lVar10 = iVar13 + lVar15;
                    if (lVar10 <= param_1[0x1a]) {
                      bVar21 = true;
                      lVar15 = lVar10;
                      goto LAB_142845c17;
                    }
                    if ((int)plVar17[0xc] < iVar11 + 1) {
                      *(int *)(plVar17 + 0x15) = iVar11;
                    }
                  }
                }
              }
              *piVar18 = -1;
            }
LAB_142845c17:
            iVar6 = iVar6 + 1;
            piVar18 = piVar18 + 1;
          } while (iVar6 < (int)local_70);
        }
      } while (lVar15 < param_1[0x1a]);
    }
  }
LAB_142845c35:
  if (local_78 != (int *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142845c90 FUN_142845c90 body=526 status=ok
// SIG undefined FUN_142845c90(void)

void FUN_142845c90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) &&
     (*(char *)(param_1 + 0x15) != '\0')) {
    plVar12 = *(longlong **)(param_1 + 0x70);
    plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0x78) * 2;
    bVar8 = true;
    bVar10 = true;
    if (plVar12 != plVar13) {
      do {
        plVar5 = (longlong *)plVar12[1];
        lVar6 = *plVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = *(char *)(lVar6 + 0x12);
        if ((*(char *)(lVar6 + 0x10) == '\0') && (cVar4 == '\0')) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        bVar9 = false;
        if (!bVar7) {
          bVar9 = bVar10;
        }
        bVar7 = false;
        if (cVar4 != '\0') {
          bVar7 = bVar8;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)();
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
        plVar12 = plVar12 + 2;
        bVar8 = bVar7;
        bVar10 = bVar9;
      } while (plVar12 != plVar13);
      if (!bVar7) {
        if (!bVar9) {
          return;
        }
        if (*(longlong *)(param_1 + 0x90) != 0) {
          uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_38);
          TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
                    (*(longlong *)(param_1 + 0x90) + 0xc0,uVar11);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_30 + 1;
            lVar6 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar2 = (int *)((longlong)local_30 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
        }
        FUN_142834e40(param_1);
        if (*(char *)(param_1 + 0x14) == '\0') {
          return;
        }
        FUN_14283ef20(param_1);
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
      TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
                (*(longlong *)(param_1 + 0x90) + 0xc0,uVar11);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_20 + 1;
        lVar6 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    FUN_142833de0(param_1);
  }
  return;
}



// FUNCTION 142845ea0 FUN_142845ea0 body=701 status=ok
// SIG undefined FUN_142845ea0(void)

void FUN_142845ea0(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  
  if (*param_1 == 0) {
    *(uint *)((longlong)param_1 + 0x84) = *(uint *)((longlong)param_1 + 0x84) & 0xfffffffe;
    *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xffffffe3;
    *(undefined4 *)(param_1 + 0x10) = 0x7f7fffff;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    return;
  }
  FUN_142847790(param_1,param_4);
  fVar13 = (float)UTexture2D::GetLastRenderTimeForStreaming(*param_1);
  if (DAT_1468b5a78 <= (double)fVar13) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = (float)(DAT_1468b5a78 - (double)fVar13);
  }
  *(float *)(param_1 + 0x10) = fVar13;
  bVar2 = UTexture2D::ShouldMipLevelsBeForcedResident(*param_1);
  uVar7 = *(uint *)((longlong)param_1 + 0x54) & 0xfffffff7 | (uint)bVar2 * 8;
  lVar12 = *param_1;
  *(uint *)((longlong)param_1 + 0x54) = uVar7;
  uVar7 = (*(byte *)(lVar12 + 0xc4) ^ uVar7) & 0x10 ^ uVar7;
  *(uint *)((longlong)param_1 + 0x54) = uVar7;
  iVar9 = 0;
  iVar10 = iVar9;
  if (((uVar7 & 8) != 0) && ((*(byte *)(lVar12 + 0x4b) & 8) != 0)) {
    iVar10 = *(int *)(lVar12 + 0x44);
  }
  iVar11 = iVar9;
  if (((uVar7 & 8) != 0) && (0 < *(int *)(lVar12 + 0xf0))) {
    *(uint *)((longlong)param_1 + 0x54) = uVar7 & 0xfffffff7;
    iVar11 = *(int *)(lVar12 + 0xf0);
  }
  if (*(char *)(param_3 + 0x28) == '\0') {
    iVar4 = UGameUserSettings::GetFoliageQuality(lVar12);
    uVar7 = *(uint *)(param_1 + 1);
    if (-1 < iVar4 - iVar10) {
      iVar9 = iVar4 - iVar10;
    }
    if ((((uVar7 != 0x1d) && (3 < uVar7 - 0x30)) &&
        ((*(byte *)((longlong)param_1 + 0x54) & 0x12) == 0)) && (*(char *)(param_3 + 0x29) == '\0'))
    {
      iVar9 = iVar9 + *(int *)(param_3 + 0x1c);
    }
    iVar9 = iVar9 + *(int *)((longlong)param_1 + 0xb4);
    lVar12 = DAT_146b16768;
    if ((uVar7 < 3) || (lVar12 = DAT_146b16780, uVar7 - 3 < 3)) {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar5 = GetCurrentThreadId();
        lVar6 = 4;
        if (DVar5 == DAT_1468c21c0) goto LAB_142846002;
      }
      else {
LAB_142846002:
        lVar6 = 0;
      }
      iVar9 = iVar9 + *(int *)(lVar6 + lVar12);
    }
  }
  iVar10 = (int)param_1[2];
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar1 = DAT_1464c9c0c;
  if (iVar10 - iVar9 <= DAT_1464c9c0c) {
    iVar1 = iVar10 - iVar9;
  }
  iVar9 = iVar4;
  if ((iVar4 <= iVar1) && (iVar9 = iVar10, iVar1 < iVar10)) {
    iVar9 = iVar1;
  }
  iVar1 = (int)param_1[0xd];
  iVar8 = iVar9;
  if ((iVar1 < iVar10) &&
     ((((int)param_1[0xb] < iVar1 || (*(int *)((longlong)param_1 + 0x6c) != 2)) &&
      (iVar8 = iVar1, iVar9 <= iVar1)))) {
    iVar8 = iVar9;
  }
  *(int *)((longlong)param_1 + 100) = iVar8;
  if (iVar11 < 1) {
    iVar9 = *(int *)(param_2 + (longlong)(int)param_1[1] * 4);
    if (((0 < iVar9) && (iVar10 = iVar10 - iVar9, iVar4 <= iVar10)) &&
       (iVar4 = iVar8, iVar10 < iVar8)) {
      iVar4 = iVar10;
    }
  }
  else if (iVar4 <= iVar8 - iVar11) {
    iVar4 = iVar8 - iVar11;
  }
  *(int *)(param_1 + 0xc) = iVar4;
  lVar12 = DAT_146b16750;
  if (1.1 < *(float *)(param_3 + 0x4e0)) {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar5 = GetCurrentThreadId(), lVar6 = 4, DVar5 == DAT_1468c21c0)) {
      lVar6 = 0;
    }
    if (0 < *(int *)(lVar6 + lVar12)) {
      fVar13 = (float)FUN_142853820(((longlong)(int)param_1[1] * 5 + 0x11) * 4 + param_3);
      *(float *)(param_1 + 0x12) = fVar13;
      fVar13 = fVar13 * *(float *)(param_3 + 0x4e0);
      goto LAB_142846114;
    }
  }
  fVar13 = *(float *)(param_3 + 0x4e0);
LAB_142846114:
  *(float *)(param_1 + 0x12) = fVar13;
  return;
}



// FUNCTION 142846160 FUN_142846160 body=311 status=ok
// SIG undefined FUN_142846160(void)

void FUN_142846160(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  uVar4 = IStreamingManager::Get();
  cVar3 = FStreamingManagerCollection::IsStreamingEnabled(uVar4);
  if (cVar3 == '\0') {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_1428387c0(*(undefined8 *)(param_1 + 0x698),1);
  lVar2 = *(longlong *)(param_1 + 0x6a0);
  plVar6 = *(longlong **)(lVar2 + 0x58);
  if (plVar6 == (longlong *)0x0) {
    LOCK();
    bVar7 = *(int *)(lVar2 + 0x48) == 0;
    if (bVar7) {
      *(int *)(lVar2 + 0x48) = 0;
    }
    UNLOCK();
    if (!bVar7) {
      TextureInstanceTask::FDoWorkTask::DoWork(lVar2 + 8);
      LOCK();
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + -1;
      UNLOCK();
    }
code_r0x0001428461fc:
    if (*(longlong *)(lVar2 + 0x58) == 0) goto LAB_142846218;
    (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x20))(*(longlong **)(lVar2 + 0x50),0xffffffff,0);
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar2);
    if (cVar3 == '\0') goto code_r0x0001428461fc;
    TextureInstanceTask::FDoWorkTask::DoWork(lVar2 + 8);
    LOCK();
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + -1;
    UNLOCK();
    if (*(longlong **)(lVar2 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x10))();
    }
  }
  *(undefined8 *)(lVar2 + 0x58) = 0;
LAB_142846218:
  FUN_1428467a0(param_1,0);
  iVar1 = *(int *)(param_2 + 0xb8);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x18))) {
    plVar5 = (longlong *)((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x10));
    plVar6 = (longlong *)0x0;
    if (*plVar5 == param_2) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_142845ea0(plVar6,param_1 + 200,param_1 + 0x1b4,0);
      if ((*(byte *)((longlong)plVar6 + 0x54) & 8) != 0) {
        *(undefined4 *)(plVar6 + 0x15) = *(undefined4 *)((longlong)plVar6 + 100);
        *(undefined4 *)(plVar6 + 0x16) = *(undefined4 *)((longlong)plVar6 + 100);
      }
      FStreamingTexture::StreamWantedMips(plVar6,param_1);
    }
  }
  return;
}



// FUNCTION 1428462a0 FUN_1428462a0 body=852 status=ok
// SIG undefined FUN_1428462a0(void)

void FUN_1428462a0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  undefined1 local_res8;
  longlong *local_res10;
  longlong *local_res20;
  int *local_50;
  undefined8 local_48;
  
  lVar11 = *(longlong *)(param_1 + 0x68);
  iVar13 = 0;
  plVar1 = (longlong *)(lVar11 + 0x10);
  local_50 = (int *)0x0;
  local_48 = 0;
  iVar6 = 0;
  if (*(int *)(lVar11 + 0x18) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_50,*(int *)(lVar11 + 0x18));
    iVar6 = *(int *)(lVar11 + 0x18);
  }
  iVar9 = iVar13;
  if (0 < iVar6) {
    do {
      if (*(char *)(param_1 + 0xa0) != '\0') break;
      cVar5 = FUN_142846600((longlong)iVar9 * 200 + *plVar1,*(undefined4 *)(lVar11 + 0x1e0),
                            lVar11 + 0x1b4);
      uVar4 = local_48;
      if (cVar5 != '\0') {
        lVar10 = (longlong)(int)local_48;
        iVar6 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar6);
        if (local_48._4_4_ < iVar6) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_50,uVar4 & 0xffffffff);
        }
        local_50[lVar10] = iVar9;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar11 + 0x18));
  }
  local_res20 = plVar1;
  AlgoImpl::
  IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,FCompareTextureByLoadOrderPriority>_>
            (local_50,(longlong)(int)local_48,local_res8,&local_res20);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  plVar2 = (longlong *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar2,0);
  }
  piVar12 = local_50;
  local_res10 = param_2;
  if (0 < (int)local_48) {
    do {
      if (*(char *)(param_1 + 0xa0) != '\0') break;
      iVar6 = *piVar12;
      lVar11 = (longlong)iVar6 * 200 + *plVar1;
      if ((*(byte *)(lVar11 + 0x84) & 1) == 0) {
LAB_142846481:
        iVar9 = *(int *)(lVar11 + 0xb0);
        iVar3 = *(int *)(lVar11 + 0x58);
        if ((iVar9 < iVar3) && (param_3 < *(longlong *)(param_1 + 0xc0))) {
          iVar9 = *(int *)(lVar11 + 0x18 + (longlong)iVar9 * 4);
          lVar10 = param_3 + iVar9;
          local_res20 = (longlong *)
                        (longlong)(iVar9 - *(int *)(lVar11 + 0x18 + (longlong)iVar3 * 4));
          if ((lVar10 <= *(longlong *)(param_1 + 0xc0)) || (*(int *)(param_1 + 0x78) == 0)) {
            iVar9 = *(int *)(param_1 + 0x78);
            *(int *)(param_1 + 0x78) = iVar9 + 1;
            if (*(int *)(param_1 + 0x7c) < iVar9 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar9);
            }
            *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 4) = iVar6;
            param_2 = (longlong *)((longlong)local_res10 - (longlong)local_res20);
            param_3 = lVar10;
            local_res10 = param_2;
          }
        }
        else if ((iVar3 < iVar9) &&
                (((longlong)param_2 < *(longlong *)(param_1 + 0xd0) &&
                 (param_3 < *(longlong *)(param_1 + 0xc0))))) {
          iVar9 = *(int *)(lVar11 + 0x18 + (longlong)iVar9 * 4);
          local_res20 = (longlong *)
                        ((longlong)(iVar9 - *(int *)(lVar11 + 0x18 + (longlong)iVar3 * 4)) +
                        (longlong)param_2);
          if (((longlong)local_res20 <= *(longlong *)(param_1 + 0xd0)) &&
             ((lVar11 = param_3 + iVar9, lVar11 <= *(longlong *)(param_1 + 0xc0) ||
              (*(int *)(param_1 + 0x78) == 0)))) {
            iVar9 = *(int *)(param_1 + 0x78);
            *(int *)(param_1 + 0x78) = iVar9 + 1;
            if (*(int *)(param_1 + 0x7c) < iVar9 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar9);
            }
            *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 4) = iVar6;
            param_2 = local_res20;
            param_3 = lVar11;
            local_res10 = local_res20;
          }
        }
      }
      else {
        iVar9 = *(int *)(lVar11 + 0x5c);
        iVar3 = *(int *)(lVar11 + 0x58);
        if (iVar9 == iVar3) goto LAB_142846481;
        iVar8 = *(int *)(lVar11 + 0xb0);
        iVar7 = iVar8 + 1;
        if (iVar8 + 1 <= iVar3) {
          iVar7 = iVar3;
        }
        if (iVar7 < iVar9) {
LAB_14284644a:
          iVar9 = *(int *)(param_1 + 0x88);
          *(int *)(param_1 + 0x88) = iVar9 + 1;
          if (*(int *)(param_1 + 0x8c) < iVar9 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar9);
          }
          *(int *)(*plVar2 + (longlong)iVar9 * 4) = iVar6;
          param_2 = local_res10;
        }
        else {
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
          if (iVar9 < iVar8) goto LAB_14284644a;
        }
      }
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar13 < (int)local_48);
  }
  if (local_50 == (int *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142846600 FUN_142846600 body=307 status=ok
// SIG undefined FUN_142846600(void)

longlong FUN_142846600(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x9c);
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  if (((((int)uVar1 <= (int)param_1[0xb]) || ((int)param_1[0x15] <= (int)uVar1)) ||
      ((int)param_1[0x15] < param_2)) || ((*(byte *)((longlong)param_1 + 0x54) & 2) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x15);
  }
  *(uint *)(param_1 + 0x16) = uVar1;
  if ((((*(uint *)((longlong)param_1 + 0x54) & 4) != 0) && (*param_1 != 0)) &&
     (uVar1 != *(uint *)((longlong)param_1 + 0x5c))) {
    iVar5 = (int)param_1[0xb];
    if (((*(uint *)((longlong)param_1 + 0x94) & 1) == 0) &&
       ((*(uint *)((longlong)param_1 + 0x54) & 3) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar4 = *(int *)((longlong)param_1 + 0xac);
    if (iVar5 < *(int *)((longlong)param_1 + 0x9c)) {
      iVar4 = iVar4 + 0x400;
      *(int *)((longlong)param_1 + 0xac) = iVar4;
    }
    if (bVar2) {
      iVar4 = iVar4 + 0x200;
      *(int *)((longlong)param_1 + 0xac) = iVar4;
    }
    if ((int)(2 - (uint)((*(uint *)((longlong)param_1 + 0x94) & 4) != 0)) < (int)(uVar1 - iVar5)) {
      iVar4 = iVar4 + 0x100;
      *(int *)((longlong)param_1 + 0xac) = iVar4;
    }
    if (*(int *)((longlong)param_1 + 0x9c) <= iVar5) {
      iVar5 = 0xff - (int)*(float *)(param_1 + 0x10);
      if (iVar5 < 1) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0xff;
        if (iVar5 < 0xff) {
          iVar3 = iVar5;
        }
      }
      iVar4 = iVar4 + iVar3;
      *(int *)((longlong)param_1 + 0xac) = iVar4;
    }
    iVar4 = *(int *)(param_3 + ((longlong)(int)param_1[1] + 4) * 0x14) + iVar4;
    *(int *)((longlong)param_1 + 0xac) = iVar4;
    return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
  }
  return (ulonglong)(uVar1 >> 8) << 8;
}



// FUNCTION 142846740 FUN_142846740 body=91 status=ok
// SIG undefined FUN_142846740(void)

void FUN_142846740(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  
  if ((((*param_1 != 0) && ((int)param_1[0xd] == (int)param_1[0xb])) &&
      ((int)param_1[0xd] < (int)param_1[2])) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
    plVar2 = (longlong *)FUN_1415c3d50();
    if ((int)param_1[0xf] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)param_1[0xe];
    }
    cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,puVar3);
    if (cVar1 != '\0') {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 2;
    }
  }
  return;
}



// FUNCTION 1428467a0 FUN_1428467a0 body=731 status=ok
// SIG undefined FUN_1428467a0(void)

void FUN_1428467a0(longlong param_1,char param_2)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar9 = DAT_146ab6308;
  if (*DAT_146b16d60 == 0) {
    if (*DAT_146b16d78 == -1) {
      local_88 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_78 = 0xffffffffffffffff;
      lStack_70 = -1;
      local_38 = 0;
      uStack_30 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      (**(code **)(*DAT_146ab6358 + 0x1f0))(DAT_146ab6358,&local_88);
      if ((0 < DAT_146ab6310) && (0 < lStack_70)) {
        lVar9 = DAT_146ab6310 * lStack_70 +
                SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(DAT_146ab6310 * lStack_70),8);
        lVar9 = (lVar9 >> 6) - (lVar9 >> 0x3f);
      }
    }
    else {
      lVar9 = (longlong)*DAT_146b16d78 << 0x14;
    }
    if (lVar9 != DAT_146ab6308) {
      DAT_146ab6308 = lVar9;
    }
  }
  piVar10 = *(int **)(param_1 + 0x720);
  piVar2 = piVar10 + *(int *)(param_1 + 0x728);
  do {
    if (piVar10 == piVar2) {
      *(undefined4 *)(param_1 + 0x728) = 0;
      if (*(int *)(param_1 + 0x72c) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x720,0);
      }
      FUN_14283de10(param_1);
      FUN_14285baf0(param_1 + 0x1b4);
      lVar9 = DAT_146af1310 + (longlong)DAT_146af1318 * 0x28;
      if (DAT_146af1310 != lVar9) {
        lVar8 = DAT_146af1310;
        fVar5 = *(float *)(param_1 + 0x694);
        do {
          pfVar1 = (float *)(lVar8 + 0x14);
          lVar8 = lVar8 + 0x28;
          fVar4 = *pfVar1;
          if (*pfVar1 <= fVar5) {
            fVar4 = fVar5;
          }
          *(float *)(param_1 + 0x694) = fVar4;
          fVar5 = fVar4;
        } while (lVar8 != lVar9);
      }
      FUN_142835210(param_1);
      FUN_14283bd60(param_1);
      if (param_2 != '\0') {
        FDynamicTextureInstanceManager::PrepareAsyncView(param_1 + 0x6b0);
      }
      return;
    }
    iVar3 = *piVar10;
    while (-1 < iVar3) {
      if (*(int *)(param_1 + 0x18) <= iVar3) {
LAB_142846962:
        if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x18))) {
          *(int *)(*(longlong *)((longlong)iVar3 * 200 + *(longlong *)(param_1 + 0x10)) + 0xb8) =
               iVar3;
        }
        break;
      }
      lVar9 = (longlong)iVar3 * 200;
      if (*(longlong *)(lVar9 + *(longlong *)(param_1 + 0x10)) != 0) goto LAB_142846962;
      if (*(longlong *)(lVar9 + 0x70 + *(longlong *)(param_1 + 0x10)) != 0) {
        FMemory::Free();
      }
      iVar6 = *(int *)(param_1 + 0x18);
      iVar7 = (iVar6 - iVar3) + -1;
      if (0 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar9 + *(longlong *)(param_1 + 0x10)),
                   (void *)((longlong)(iVar6 - iVar7) * 200 + *(longlong *)(param_1 + 0x10)),
                   (longlong)iVar7 * 200);
        iVar6 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar6 + -1;
      TArray<FRemnantQuestEntry,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
    }
    piVar10 = piVar10 + 1;
  } while( true );
}



// FUNCTION 142846a80 FUN_142846a80 body=1012 status=ok
// SIG undefined FUN_142846a80(void)

void FUN_142846a80(longlong param_1,longlong *param_2,longlong param_3)

{
  float *pfVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  ulonglong local_88;
  float local_80 [22];
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    local_80[0] = 0.0;
    local_88 = local_88 & 0xffffffff00000000;
    if (*(char *)(param_3 + 0x26) == '\0') {
      if (*(char *)(param_3 + 0x27) == '\0') {
        if ((int)param_2[0xc] != *(int *)((longlong)param_2 + 100)) {
          FTextureInstanceAsyncView::GetTexelSize(param_1 + 0x10,lVar4,local_80,&local_88,0);
          piVar10 = *(int **)(param_1 + 0x48);
          piVar3 = piVar10 + *(int *)(param_1 + 0x50);
          while (((piVar10 != piVar3 &&
                  (lVar8 = (longlong)*piVar10 * 0x20 + *(longlong *)(param_1 + 0x30),
                  (float)local_88 < 8192.0)) &&
                 ((pfVar1 = (float *)(lVar8 + 0x18),
                  (float)local_88 < *pfVar1 || (float)local_88 == *pfVar1 ||
                  (*(float *)(param_3 + 0x30) <= 0.0))))) {
            FTextureInstanceAsyncView::GetTexelSize(lVar8,lVar4,local_80,&local_88,0);
            piVar10 = piVar10 + 1;
          }
          fVar13 = local_80[0];
          fVar12 = (float)local_88;
          if ((((0.0 < local_80[0]) || (0.0 < (float)local_88)) && (local_80[0] != 3.4028235e+38))
             && ((float)local_88 != 3.4028235e+38)) {
            fVar13 = local_80[0] * *(float *)(param_2 + 0x12) * *(float *)(param_2 + 3);
            fVar12 = (float)local_88 * *(float *)(param_2 + 0x12) * *(float *)(param_2 + 3);
          }
          if (((fVar13 != 0.0) || (fVar12 != 0.0)) ||
             (uVar6 = 2, fVar13 = (float)(DAT_1468b5a78 - (double)param_2[0x11]) - 5.0,
             fVar13 < *(float *)(param_2 + 0x10) || fVar13 == *(float *)(param_2 + 0x10))) {
            uVar6 = 0;
          }
          uVar11 = *(uint *)((longlong)param_2 + 0x94) & 0xfffffffd;
          *(uint *)((longlong)param_2 + 0x94) = uVar11 | uVar6;
          if (uVar6 != 0) {
            piVar10 = *(int **)(param_1 + 0x58);
            piVar3 = piVar10 + *(int *)(param_1 + 0x60);
            if (piVar10 != piVar3) {
              local_88 = *(ulonglong *)(param_1 + 0x30);
              do {
                lVar8 = *(longlong *)((longlong)*piVar10 * 0x20 + local_88);
                if (lVar8 != 0) {
                  plVar2 = (longlong *)(lVar8 + 0x30);
                  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(plVar2,local_80,lVar4);
                  piVar9 = (int *)0x0;
                  if (local_80[0] != -NAN) {
                    piVar9 = (int *)(*plVar2 + (longlong)(int)local_80[0] * 0x18);
                  }
                  piVar7 = piVar9 + 2;
                  if (piVar9 == (int *)0x0) {
                    piVar7 = (int *)0x0;
                  }
                  if ((piVar7 != (int *)0x0) && (*piVar7 != -1)) {
                    *(uint *)((longlong)param_2 + 0x94) = uVar11;
                    break;
                  }
                }
                piVar10 = piVar10 + 1;
              } while (piVar10 != piVar3);
            }
          }
        }
      }
      else {
        cVar5 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
          GetCurrentThreadId();
        }
      }
    }
    FUN_142842a60(param_2);
  }
  return;
}



// FUNCTION 142846e80 FUN_142846e80 body=1277 status=ok
// SIG undefined FUN_142846e80(void)

void FUN_142846e80(longlong param_1,float param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_48;
  longlong local_40 [5];
  
  lVar1 = *(longlong *)(param_1 + 0x6a0);
  uVar10 = 0;
  plVar7 = *(longlong **)(lVar1 + 0x58);
  if (plVar7 == (longlong *)0x0) {
    LOCK();
    bVar12 = *(int *)(lVar1 + 0x48) == 0;
    if (bVar12) {
      *(int *)(lVar1 + 0x48) = 0;
    }
    UNLOCK();
    if (!bVar12) {
      TextureInstanceTask::FDoWorkTask::DoWork(lVar1 + 8);
      LOCK();
      *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + -1;
      UNLOCK();
    }
code_r0x000142846ef2:
    if (*(longlong *)(lVar1 + 0x58) != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x20))(*(longlong **)(lVar1 + 0x50),0xffffffff,0)
      ;
      goto LAB_142846f0a;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,lVar1);
    if (cVar3 == '\0') goto code_r0x000142846ef2;
    TextureInstanceTask::FDoWorkTask::DoWork(lVar1 + 8);
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + -1;
    UNLOCK();
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x10))();
    }
LAB_142846f0a:
    *(undefined8 *)(lVar1 + 0x58) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x75c);
  if ((iVar4 < 1) || (param_3 != '\0')) {
    cVar3 = FAsyncTask<FAsyncSaveTask>::IsDone(*(undefined8 *)(param_1 + 0x698));
    if (cVar3 == '\0') {
      FUN_1428387c0(*(undefined8 *)(param_1 + 0x698),1);
    }
    *(undefined4 *)(param_1 + 0x758) = 0;
    iVar4 = 0;
    if (-1 < *DAT_146b16708) {
      iVar4 = *DAT_146b16708;
    }
    *(int *)(param_1 + 0x75c) = iVar4;
    FUN_1428429b0(param_1);
    FUN_142847820(param_1,0,1);
    FUN_1428467a0(param_1,1);
    FUN_14283db10(param_1,param_3);
    lVar1 = *(longlong *)(param_1 + 0x698);
    LOCK();
    *(int *)(lVar1 + 0xf0) = *(int *)(lVar1 + 0xf0) + 1;
    UNLOCK();
    *(undefined8 *)(lVar1 + 0x100) = 0;
    FUN_1415b5910(*(undefined8 *)(lVar1 + 0xf8));
    *(undefined8 *)(lVar1 + 0xf8) = 0;
    FUN_142837a30(lVar1 + 8);
    LOCK();
    *(int *)(lVar1 + 0xf0) = *(int *)(lVar1 + 0xf0) + -1;
    UNLOCK();
    FUN_142843c30(param_1,param_3);
    if (param_3 != '\0') goto LAB_14284727e;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x758);
    if (iVar5 == 0) {
      iVar4 = 0;
      if (-1 < *DAT_146b16708) {
        iVar4 = *DAT_146b16708;
      }
      *(int *)(param_1 + 0x75c) = iVar4;
      cVar3 = FAsyncTask<FAsyncSaveTask>::IsDone(*(undefined8 *)(param_1 + 0x698));
      if (cVar3 == '\0') {
        FUN_1428387c0(*(undefined8 *)(param_1 + 0x698),1);
      }
      FUN_1428467a0(param_1,0);
      FUN_14283db10(param_1,0);
      lVar1 = *(longlong *)(param_1 + 0x698);
      lVar8 = DAT_1468b5010;
      if (*DAT_146b16720 != 0) {
        lVar8 = DAT_1468b5028;
      }
      LOCK();
      *(int *)(lVar1 + 0xf0) = *(int *)(lVar1 + 0xf0) + 1;
      UNLOCK();
      *(longlong *)(lVar1 + 0x100) = lVar8;
      plVar7 = *(longlong **)(lVar1 + 0xf8);
      if (lVar8 == 0) {
        FUN_1415b5910();
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        FUN_142837a30(lVar1 + 8);
        LOCK();
        *(int *)(lVar1 + 0xf0) = *(int *)(lVar1 + 0xf0) + -1;
        UNLOCK();
        *(int *)(param_1 + 0x758) = *(int *)(param_1 + 0x758) + 1;
      }
      else {
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)FUN_1415ab270(1);
          *(longlong **)(lVar1 + 0xf8) = plVar7;
        }
        (**(code **)(*plVar7 + 0x18))();
        (**(code **)(**(longlong **)(lVar1 + 0x100) + 0x10))(*(longlong **)(lVar1 + 0x100),lVar1);
        *(int *)(param_1 + 0x758) = *(int *)(param_1 + 0x758) + 1;
      }
    }
    else if (iVar4 < iVar5) {
      cVar3 = FAsyncTask<FAsyncSaveTask>::IsDone(*(undefined8 *)(param_1 + 0x698));
      if (cVar3 != '\0') {
        piVar9 = *(int **)(param_1 + 0x8e8);
        uVar11 = (longlong)*(int *)(param_1 + 0x8f0) & 0x3fffffffffffffff;
        if (piVar9 + *(int *)(param_1 + 0x8f0) < piVar9) {
          uVar11 = uVar10;
        }
        if (uVar11 != 0) {
          do {
            FUN_142847790((longlong)*piVar9 * 200 + *(longlong *)(param_1 + 0x10),0.0 < param_2);
            uVar10 = uVar10 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar10 != uVar11);
        }
        FUN_142843c30(param_1,0);
        lVar1 = *(longlong *)(param_1 + 0x698);
        plVar7 = (longlong *)(lVar1 + 0x18);
        if (plVar7 != &local_48) {
          puVar2 = (undefined8 *)*plVar7;
          *plVar7 = 0;
          if (puVar2 != (undefined8 *)0x0) {
            piVar9 = (int *)(puVar2 + 1);
            *piVar9 = *piVar9 + -1;
            if (*piVar9 == 0) {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
        }
        plVar7 = (longlong *)(lVar1 + 0x20);
        if (plVar7 != local_40) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          *plVar7 = 0;
          *(undefined8 *)(lVar1 + 0x28) = 0;
        }
        *(undefined4 *)(lVar1 + 0x30) = 0x7f7fffff;
        TArray<FTextureInstanceAsyncView,FDefaultAllocator>::Reset(lVar1 + 0x38,0);
        iVar5 = *(int *)(param_1 + 0x75c) + -1;
        iVar4 = 1;
        if (0 < iVar5) {
          iVar4 = iVar5;
        }
        FUN_14283bd60(param_1,1.0 / (float)iVar4,1);
        FDynamicTextureInstanceManager::PrepareAsyncView(param_1 + 0x6b0);
        *(undefined4 *)(param_1 + 0x758) = 0;
      }
    }
    else {
      if (iVar5 == 1) {
        FUN_1428429b0(param_1);
        iVar4 = *(int *)(param_1 + 0x75c);
        iVar5 = *(int *)(param_1 + 0x758);
      }
      FUN_142847820(param_1,iVar5 + -1,iVar4,0.0 < param_2);
      iVar5 = *(int *)(param_1 + 0x75c) + -1;
      iVar4 = 1;
      if (0 < iVar5) {
        iVar4 = iVar5;
      }
      FUN_14283bd60(param_1,1.0 / (float)iVar4,1);
      *(int *)(param_1 + 0x758) = *(int *)(param_1 + 0x758) + 1;
    }
  }
  FUN_14283e0b0(param_1);
LAB_14284727e:
  cVar3 = FUN_141636a40();
  if (cVar3 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x6a0);
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
    UNLOCK();
    *(undefined8 *)(lVar1 + 0x58) = 0;
    FUN_1415b5910(*(undefined8 *)(lVar1 + 0x50));
    *(undefined8 *)(lVar1 + 0x50) = 0;
    TextureInstanceTask::FDoWorkTask::DoWork(lVar1 + 8);
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + -1;
    UNLOCK();
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x970);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar1 = *(longlong *)(param_1 + 0x6a0);
  lVar8 = DAT_1468b5010;
  if (*DAT_146b16720 != 0) {
    lVar8 = DAT_1468b5028;
  }
  LOCK();
  *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
  UNLOCK();
  *(longlong *)(lVar1 + 0x58) = lVar8;
  plVar7 = *(longlong **)(lVar1 + 0x50);
  if (lVar8 == 0) {
    FUN_1415b5910();
    *(undefined8 *)(lVar1 + 0x50) = 0;
    TextureInstanceTask::FDoWorkTask::DoWork(lVar1 + 8);
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + -1;
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000142847342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_1415ab270(1);
    *(longlong **)(lVar1 + 0x50) = plVar7;
  }
  (**(code **)(*plVar7 + 0x18))();
  (**(code **)(**(longlong **)(lVar1 + 0x58) + 0x10))(*(longlong **)(lVar1 + 0x58),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00014284731b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142847380 FUN_142847380 body=338 status=ok
// SIG undefined FUN_142847380(void)

longlong FUN_142847380(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1[0x14];
  iVar4 = *(int *)((longlong)param_1 + 0x9c);
  iVar1 = iVar6;
  if (iVar6 <= iVar4) {
    iVar1 = iVar4;
  }
  iVar5 = 0;
  *(int *)(param_1 + 0x15) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  if (*param_1 != 0) {
    iVar3 = 1;
    if (0 < *(int *)((longlong)param_1 + 0x14)) {
      iVar3 = *(int *)((longlong)param_1 + 0x14);
    }
    iVar3 = *(int *)((longlong)param_1 + (longlong)iVar1 * 4 + 0x18) / iVar3;
    if (((iVar3 < 0x800000) || ((int)param_1[1] == 0x11)) || ((int)param_1[1] == 0x16)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((*(uint *)((longlong)param_1 + 0x54) & 2) != 0) ||
        ((*(uint *)((longlong)param_1 + 0x94) & 1) != 0)) ||
       (((*(uint *)((longlong)param_1 + 0x94) & 4) != 0 && (!bVar2)))) {
      iVar5 = 0x800;
      *(undefined4 *)((longlong)param_1 + 0xa4) = 0x800;
    }
    if (iVar6 <= iVar4) {
      iVar5 = iVar5 + 0x400;
      *(int *)((longlong)param_1 + 0xa4) = iVar5;
    }
    if (!bVar2) {
      iVar5 = iVar5 + 0x200;
      *(int *)((longlong)param_1 + 0xa4) = iVar5;
    }
    if (((*(uint *)((longlong)param_1 + 0x54) & 1) != 0) || (iVar3 < 0x32001)) {
      iVar5 = iVar5 + 0x100;
      *(int *)((longlong)param_1 + 0xa4) = iVar5;
    }
    if (iVar4 < iVar6) {
      iVar4 = 0xff - (int)*(float *)(param_1 + 0x10);
      iVar6 = 1;
      if ((0 < iVar4) && (iVar6 = 0xff, iVar4 < 0xff)) {
        iVar6 = iVar4;
      }
      iVar5 = iVar5 + iVar6;
      *(int *)((longlong)param_1 + 0xa4) = iVar5;
    }
    *(int *)((longlong)param_1 + 0xa4) =
         *(int *)(param_2 + 0x4c + (longlong)(int)param_1[1] * 0x14) + iVar5;
    return (longlong)*(int *)((longlong)param_1 + (longlong)iVar1 * 4 + 0x18);
  }
  return 0;
}



// FUNCTION 1428474e0 FUN_1428474e0 body=679 status=ok
// SIG undefined FUN_1428474e0(void)

void FUN_1428474e0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  uVar11 = 0;
  if ((undefined *)param_1[0xe] != &DAT_1451bd184) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    uVar8 = 0;
    if (*(int *)((longlong)param_1 + 0x7c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0xf);
    }
    *(int *)(param_1 + 0xf) = (int)uVar8;
    if (*(int *)((longlong)param_1 + 0x7c) < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xe);
    }
  }
  if (*param_1 == 0) {
    *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffc;
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    param_1[3] = 0x3f800000;
    param_1[0xd] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    return;
  }
  *(uint *)(param_1 + 1) = (uint)*(byte *)(*param_1 + 0x4a);
  uVar3 = FUN_142853db0();
  lVar12 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  uVar4 = uVar11;
  if (*(longlong *)(lVar12 + 0xd8) != 0) {
    uVar4 = *(uint *)(*(longlong *)(lVar12 + 0xd8) + 0x18);
  }
  *(uint *)(param_1 + 2) = uVar4;
  iVar10 = 1;
  uVar4 = uVar11;
  if (*(longlong *)(lVar12 + 0xd8) != 0) {
    uVar5 = *(uint *)(*(longlong *)(lVar12 + 0xd8) + 8) & 0x7fffffff;
    uVar4 = 1;
    if (uVar5 != 0) {
      uVar4 = uVar5;
    }
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar4;
  iVar7 = (int)param_1[1];
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  if (*(char *)(param_2 + 0x25) == '\0') {
    fVar14 = 1.0;
  }
  else {
    fVar14 = 0.71;
  }
  fVar13 = fVar14;
  if (1 < iVar7 - 0x18U) {
    if (iVar7 == 0x11) {
      fVar13 = DAT_146534ef0;
      if (fVar14 <= DAT_146534ef0) {
        fVar13 = fVar14;
      }
    }
    else if ((iVar7 == 0x16) && (fVar13 = DAT_146534ef4, fVar14 <= DAT_146534ef4)) {
      fVar13 = fVar14;
    }
  }
  *(float *)(param_1 + 3) = fVar13;
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) | (uint)(iVar7 - 3U < 3)
  ;
  bVar1 = FDeferredDecalPS::ShouldCompilePermutationImpl
                    (param_2 + (ulonglong)*(byte *)(lVar12 + 0x4a) * 0x14 + 0x44);
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) | (uint)bVar1;
  fVar14 = (float)FCG2DialogueNodeLocalAudioDelay::GetFaceFXDelay
                            (param_2 + (ulonglong)*(byte *)(*param_1 + 0x4a) * 0x14 + 0x44);
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffd;
  *(float *)(param_1 + 3) = fVar14 * *(float *)(param_1 + 3);
  lVar12 = DAT_146b16738;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    uVar8 = 4;
    if (DVar6 != DAT_1468c21c0) goto LAB_142847686;
  }
  uVar8 = 0;
LAB_142847686:
  if (0 < *(int *)(uVar8 + lVar12)) {
    uVar4 = 2;
    if (1 < (int)param_1[1] - 0x18U) {
      uVar4 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffd;
    *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) | uVar4;
  }
  iVar7 = FUN_14284fc40(*param_1);
  puVar9 = (undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(int *)(param_1 + 0xd) = (int)param_1[2] - iVar7;
  lVar12 = 0xe;
  do {
    iVar7 = (int)param_1[2];
    if (iVar10 <= (int)param_1[2]) {
      iVar7 = iVar10;
    }
    uVar3 = (**(code **)(*(longlong *)*param_1 + 0x2d8))((longlong *)*param_1,iVar7);
    iVar10 = iVar10 + 1;
    *puVar9 = uVar3;
    puVar9 = puVar9 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar10 = (int)param_1[2] - (int)param_1[0xd];
  lVar12 = *(longlong *)(*param_1 + 0xd8);
  if (((lVar12 != 0) && (iVar10 + -1 < *(int *)(lVar12 + 0x18))) && (0 < iVar10)) {
    FString::operator=(param_1 + 0xe,
                       (ulonglong)
                       *(byte *)(*(longlong *)
                                  (*(longlong *)(lVar12 + 0x10) + -8 + (longlong)iVar10 * 8) + 6) *
                       0x10 + *(longlong *)(lVar12 + 0x20));
  }
  return;
}



// FUNCTION 142847790 FUN_142847790 body=139 status=ok
// SIG undefined FUN_142847790(void)

void FUN_142847790(longlong *param_1,undefined1 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    bVar1 = (**(code **)(*(longlong *)*param_1 + 0x2e0))();
    *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffb;
    *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) | (bVar1 & 1) << 2;
    bVar1 = (**(code **)(*(longlong *)*param_1 + 0x298))((longlong *)*param_1,param_2);
    *(uint *)((longlong)param_1 + 0x84) = *(uint *)((longlong)param_1 + 0x84) & 0xfffffffe;
    *(uint *)((longlong)param_1 + 0x84) = *(uint *)((longlong)param_1 + 0x84) | bVar1 & 1;
    uVar2 = UTexture2D::GetNumResidentMips(*param_1);
    *(undefined4 *)(param_1 + 0xb) = uVar2;
    uVar2 = FUN_142853e40(*param_1);
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
    return;
  }
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffb;
  *(uint *)((longlong)param_1 + 0x84) = *(uint *)((longlong)param_1 + 0x84) & 0xfffffffe;
  return;
}



// FUNCTION 142847820 FUN_142847820 body=335 status=ok
// SIG undefined FUN_142847820(void)

ulonglong FUN_142847820(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0x8f0) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x8f4)) {
      TArray<float,FDefaultAllocator>::ResizeTo();
    }
  }
  uVar2 = (longlong)((param_2 + 1) * *(int *)(param_1 + 0x18)) / (longlong)param_3;
  uVar4 = uVar2 & 0xffffffff;
  uVar7 = (ulonglong)*(int *)(param_1 + 0xc0);
  iVar3 = (int)uVar2;
  if ((longlong)uVar7 < (longlong)iVar3) {
    lVar8 = uVar7 * 200;
    lVar9 = (longlong)iVar3 - uVar7;
    do {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar8);
      iVar6 = (int)uVar7;
      if ((iVar6 < iVar3 + -1) && (plVar5[0x19] != 0)) {
        uVar4 = *(ulonglong *)(plVar5[0x19] + 0xd8);
      }
      if ((*plVar5 != 0) &&
         (uVar4 = FUN_142845ea0(plVar5,param_1 + 200,param_1 + 0x1b4,param_4),
         (*(byte *)((longlong)plVar5 + 0x84) & 1) != 0)) {
        iVar1 = *(int *)(param_1 + 0x8f0);
        *(int *)(param_1 + 0x8f0) = iVar1 + 1;
        if (*(int *)(param_1 + 0x8f4) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x8e8,iVar1);
        }
        uVar4 = *(ulonglong *)(param_1 + 0x8e8);
        *(int *)(uVar4 + (longlong)iVar1 * 4) = iVar6;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      lVar8 = lVar8 + 200;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 0xc0) = iVar3;
  return uVar4;
}



// FUNCTION 142847970 FUN_142847970 body=813 status=ok
// SIG undefined FUN_142847970(void)

undefined4 FUN_142847970(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  undefined1 local_58 [32];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    return 2;
  }
  iVar12 = 0;
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_78);
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,0);
  *local_98 = *puVar9;
  lVar4 = puVar9[1];
  local_98[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (0 < (int)local_90) {
    local_a8 = 0;
    do {
      plVar5 = *(longlong **)(local_a8 + 8 + (longlong)local_98);
      lVar4 = *(longlong *)(local_a8 + (longlong)local_98);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (((*(char *)(lVar4 + 0x13) != '\0') && (*(char *)(lVar4 + 0x12) == '\0')) &&
         (*(char *)(lVar4 + 0x11) == '\0')) {
        *(undefined1 *)(lVar4 + 0x13) = 0;
        uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar4,local_58);
        FUN_142842fa0(*(undefined8 *)(lVar4 + 0x90),uVar10);
      }
      plVar13 = *(longlong **)(lVar4 + 0x70);
      plVar11 = plVar13 + (longlong)*(int *)(lVar4 + 0x78) * 2;
      uVar7 = local_90;
      for (; local_90 = uVar7, plVar13 != plVar11; plVar13 = plVar13 + 2) {
        plVar6 = (longlong *)plVar13[1];
        lVar4 = *plVar13;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (lVar4 == 0) {
LAB_142847b6f:
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar6 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
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
          }
        }
        else {
          plVar2 = plVar6 + 1;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_90._0_4_ = (int)uVar7;
          lVar14 = (longlong)(int)local_90;
          local_90._0_4_ = (int)local_90 + 1;
          local_90._4_4_ = (int)(uVar7 >> 0x20);
          if (local_90._4_4_ < (int)local_90) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,uVar7 & 0xffffffff);
          }
          local_98[lVar14 * 2] = lVar4;
          (local_98 + lVar14 * 2)[1] = plVar6;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar2 = (int)*plVar2 + 1;
            UNLOCK();
            LOCK();
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
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
            goto LAB_142847b6f;
          }
        }
        uVar7 = local_90;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar5 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
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
      iVar12 = iVar12 + 1;
      local_a8 = local_a8 + 0x10;
    } while (iVar12 < (int)local_90);
  }
  plStack_80 = &local_a0;
  local_88 = &LAB_1428333e0;
  local_68 = 0x428333e0;
  uStack_64 = 1;
  local_a0 = param_1;
  plStack_60 = plStack_80;
  uVar8 = FUN_141703840(&local_68,param_2);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_98);
  return uVar8;
}



// FUNCTION 142847ca0 operator_new<FTexture2DMipMap,FDefaultAllocator> body=91 status=ok
// SIG undefined operator_new<FTexture2DMipMap,FDefaultAllocator>(void)

undefined8 operator_new<FTexture2DMipMap,FDefaultAllocator>(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FMemory::Malloc(param_1,0);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)((longlong)iVar1 * 8 + *param_2) = uVar2;
  return *(undefined8 *)((longlong)iVar1 * 8 + *param_2);
}



// FUNCTION 142847d00 FUN_142847d00 body=649 status=ok
// SIG undefined FUN_142847d00(void)

int * FUN_142847d00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x30);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x30) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  bVar11 = false;
  plVar10 = (longlong *)((longlong)iVar9 * 0x30 + *param_1);
  *plVar10 = *(longlong *)*param_3;
  *(undefined4 *)(plVar10 + 1) = *puVar2;
  *(undefined4 *)((longlong)plVar10 + 0xc) = puVar2[1];
  *(undefined1 *)(plVar10 + 2) = *(undefined1 *)(puVar2 + 2);
  *(undefined1 *)((longlong)plVar10 + 0x11) = *(undefined1 *)((longlong)puVar2 + 9);
  plVar10[3] = 0;
  plVar10[3] = *(longlong *)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined4 *)(plVar10 + 4) = puVar2[6];
  *(undefined4 *)((longlong)plVar10 + 0x24) = puVar2[7];
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined4 *)(plVar10 + 5) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    lVar3 = *plVar10;
    if (iVar9 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x30) == lVar3) goto LAB_142847e9e;
          iVar7 = *(int *)(*param_1 + 0x28 + (longlong)iVar7 * 0x30);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_142847e9e:
    bVar11 = iVar7 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar7 * 0x30 + *param_1);
      TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
      ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>((longlong)_Dst + 0x18);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar10,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_142847f5e;
    }
  }
  cVar4 = TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar4 == '\0') {
    uVar8 = (int)((ulonglong)*plVar10 >> 0x20) * 0x17 + (int)*plVar10 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar10 + 0x2c) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar10 + 5) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_142847f5e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142847f90 FUN_142847f90 body=21150 status=ok
// SIG undefined FUN_142847f90(void)

void FUN_142847f90(undefined8 param_1)

{
  char cVar1;
  longlong local_c58 [394];
  
  local_c58[1] = 0xf;
  local_c58[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58,0);
  FGenericPlatformString::Memcpy(local_c58[0],L"PostProcessing",0x1e);
  cVar1 = FUN_142857ea0(param_1,0,local_c58);
  if (local_c58[0] != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    local_c58[2] = 0;
    local_c58[3] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 2,0);
    FGenericPlatformString::Memcpy(local_c58[2],L"Bloom",0xc);
    cVar1 = FUN_142857ea0(param_1,1,local_c58 + 2);
    if (local_c58[2] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_c58[4] = 0;
      local_c58[5] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 4,0);
      FGenericPlatformString::Memcpy(local_c58[4],L"Tonemapper",0x16);
      cVar1 = FUN_142857ea0(param_1,2,local_c58 + 4);
      if (local_c58[4] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_c58[6] = 0;
        local_c58[7] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 6,0);
        FGenericPlatformString::Memcpy(local_c58[6],L"AntiAliasing",0x1a);
        cVar1 = FUN_142857ea0(param_1,3,local_c58 + 6);
        if (local_c58[6] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          local_c58[8] = 0;
          local_c58[9] = 0xb;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 8,0);
          FGenericPlatformString::Memcpy(local_c58[8],L"TemporalAA",0x16);
          cVar1 = FUN_142857ea0(param_1,4,local_c58 + 8);
          if (local_c58[8] != 0) {
            FMemory::Free();
          }
          if (cVar1 != '\0') {
            local_c58[10] = 0;
            local_c58[0xb] = 0xe;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 10,0);
            FGenericPlatformString::Memcpy(local_c58[10],L"EdgeDetection",0x1c);
            cVar1 = FUN_142857ea0(param_1,5,local_c58 + 10);
            if (local_c58[10] != 0) {
              FMemory::Free();
            }
            if (cVar1 != '\0') {
              local_c58[0xc] = 0;
              local_c58[0xd] = 0xf;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0xc,0);
              FGenericPlatformString::Memcpy(local_c58[0xc],L"AmbientCubemap",0x1e);
              cVar1 = FUN_142857ea0(param_1,6,local_c58 + 0xc);
              if (local_c58[0xc] != 0) {
                FMemory::Free();
              }
              if (cVar1 != '\0') {
                local_c58[0xe] = 0;
                local_c58[0xf] = 0xe;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0xe,0);
                FGenericPlatformString::Memcpy(local_c58[0xe],L"EyeAdaptation",0x1c);
                cVar1 = FUN_142857ea0(param_1,7,local_c58 + 0xe);
                if (local_c58[0xe] != 0) {
                  FMemory::Free();
                }
                if (cVar1 != '\0') {
                  local_c58[0x10] = 0;
                  local_c58[0x11] = 0xd;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x10,0);
                  FGenericPlatformString::Memcpy(local_c58[0x10],L"VisualizeHDR",0x1a);
                  cVar1 = FUN_142857ea0(param_1,8,local_c58 + 0x10);
                  if (local_c58[0x10] != 0) {
                    FMemory::Free();
                  }
                  if (cVar1 != '\0') {
                    local_c58[0x12] = 0;
                    local_c58[0x13] = 0xb;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x12,0);
                    FGenericPlatformString::Memcpy(local_c58[0x12],L"LensFlares",0x16);
                    cVar1 = FUN_142857ea0(param_1,9,local_c58 + 0x12);
                    if (local_c58[0x12] != 0) {
                      FMemory::Free();
                    }
                    if (cVar1 != '\0') {
                      local_c58[0x14] = 0;
                      local_c58[0x15] = 0x13;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x14,0);
                      FGenericPlatformString::Memcpy(local_c58[0x14],L"GlobalIllumination",0x26);
                      cVar1 = FUN_142857ea0(param_1,10,local_c58 + 0x14);
                      if (local_c58[0x14] != 0) {
                        FMemory::Free();
                      }
                      if (cVar1 != '\0') {
                        local_c58[0x16] = 0;
                        local_c58[0x17] = 9;
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x16,0);
                        FGenericPlatformString::Memcpy(local_c58[0x16],L"Vignette",0x12);
                        cVar1 = FUN_142857ea0(param_1,0xb,local_c58 + 0x16);
                        if (local_c58[0x16] != 0) {
                          FMemory::Free();
                        }
                        if (cVar1 != '\0') {
                          local_c58[0x18] = 0;
                          local_c58[0x19] = 6;
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x18,0);
                          FGenericPlatformString::Memcpy(local_c58[0x18],L"Grain",0xc);
                          cVar1 = FUN_142857ea0(param_1,0xc,local_c58 + 0x18);
                          if (local_c58[0x18] != 0) {
                            FMemory::Free();
                          }
                          if (cVar1 != '\0') {
                            local_c58[0x1a] = 0;
                            local_c58[0x1b] = 0x11;
                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x1a,0);
                            FGenericPlatformString::Memcpy(local_c58[0x1a],L"AmbientOcclusion",0x22)
                            ;
                            cVar1 = FUN_142857ea0(param_1,0xd,local_c58 + 0x1a);
                            if (local_c58[0x1a] != 0) {
                              FMemory::Free();
                            }
                            if (cVar1 != '\0') {
                              local_c58[0x1c] = 0;
                              local_c58[0x1d] = 7;
                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x1c,0);
                              FGenericPlatformString::Memcpy(local_c58[0x1c],L"Decals",0xe);
                              cVar1 = FUN_142857ea0(param_1,0xe,local_c58 + 0x1c);
                              if (local_c58[0x1c] != 0) {
                                FMemory::Free();
                              }
                              if (cVar1 != '\0') {
                                local_c58[0x1e] = 0;
                                local_c58[0x1f] = 0x14;
                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x1e,0);
                                FGenericPlatformString::Memcpy
                                          (local_c58[0x1e],L"CameraImperfections",0x28);
                                cVar1 = FUN_142857ea0(param_1,0xf,local_c58 + 0x1e);
                                if (local_c58[0x1e] != 0) {
                                  FMemory::Free();
                                }
                                if (cVar1 != '\0') {
                                  local_c58[0x20] = 0;
                                  local_c58[0x21] = 0xe;
                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c58 + 0x20,0);
                                  FGenericPlatformString::Memcpy
                                            (local_c58[0x20],L"OnScreenDebug",0x1c);
                                  cVar1 = FUN_142857ea0(param_1,0x10,local_c58 + 0x20);
                                  if (local_c58[0x20] != 0) {
                                    FMemory::Free();
                                  }
                                  if (cVar1 != '\0') {
                                    local_c58[0x22] = 0;
                                    local_c58[0x23] = 0x1b;
                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                              (local_c58 + 0x22,0);
                                    FGenericPlatformString::Memcpy
                                              (local_c58[0x22],L"OverrideDiffuseAndSpecular",0x36);
                                    cVar1 = FUN_142857ea0(param_1,0x11,local_c58 + 0x22);
                                    if (local_c58[0x22] != 0) {
                                      FMemory::Free();
                                    }
                                    if (cVar1 != '\0') {
                                      local_c58[0x24] = 0;
                                      local_c58[0x25] = 0x13;
                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                (local_c58 + 0x24,0);
                                      FGenericPlatformString::Memcpy
                                                (local_c58[0x24],L"ReflectionOverride",0x26);
                                      cVar1 = FUN_142857ea0(param_1,0x12,local_c58 + 0x24);
                                      if (local_c58[0x24] != 0) {
                                        FMemory::Free();
                                      }
                                      if (cVar1 != '\0') {
                                        local_c58[0x26] = 0;
                                        local_c58[0x27] = 0x10;
                                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                  (local_c58 + 0x26,0);
                                        FGenericPlatformString::Memcpy
                                                  (local_c58[0x26],L"VisualizeBuffer",0x20);
                                        cVar1 = FUN_142857ea0(param_1,0x13,local_c58 + 0x26);
                                        if (local_c58[0x26] != 0) {
                                          FMemory::Free();
                                        }
                                        if (cVar1 != '\0') {
                                          local_c58[0x28] = 0;
                                          local_c58[0x29] = 0xf;
                                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                    (local_c58 + 0x28,0);
                                          FGenericPlatformString::Memcpy
                                                    (local_c58[0x28],L"DirectLighting",0x1e);
                                          cVar1 = FUN_142857ea0(param_1,0x14,local_c58 + 0x28);
                                          if (local_c58[0x28] != 0) {
                                            FMemory::Free();
                                          }
                                          if (cVar1 != '\0') {
                                            local_c58[0x2a] = 0;
                                            local_c58[0x2b] = 0x12;
                                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                      (local_c58 + 0x2a,0);
                                            FGenericPlatformString::Memcpy
                                                      (local_c58[0x2a],L"DirectionalLights",0x24);
                                            cVar1 = FUN_142857ea0(param_1,0x15,local_c58 + 0x2a);
                                            if (local_c58[0x2a] != 0) {
                                              FMemory::Free();
                                            }
                                            if (cVar1 != '\0') {
                                              local_c58[0x2c] = 0;
                                              local_c58[0x2d] = 0xc;
                                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                        (local_c58 + 0x2c,0);
                                              FGenericPlatformString::Memcpy
                                                        (local_c58[0x2c],L"PointLights",0x18);
                                              cVar1 = FUN_142857ea0(param_1,0x16,local_c58 + 0x2c);
                                              if (local_c58[0x2c] != 0) {
                                                FMemory::Free();
                                              }
                                              if (cVar1 != '\0') {
                                                local_c58[0x2e] = 0;
                                                local_c58[0x2f] = 0xb;
                                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                          (local_c58 + 0x2e,0);
                                                FGenericPlatformString::Memcpy
                                                          (local_c58[0x2e],L"SpotLights",0x16);
                                                cVar1 = FUN_142857ea0(param_1,0x17,local_c58 + 0x2e)
                                                ;
                                                if (local_c58[0x2e] != 0) {
                                                  FMemory::Free();
                                                }
                                                if (cVar1 != '\0') {
                                                  local_c58[0x30] = 0;
                                                  local_c58[0x31] = 0xb;
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0x30,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0x30],L"RectLights",0x16);
                                                  cVar1 = FUN_142857ea0(param_1,0x18,
                                                                        local_c58 + 0x30);
                                                  if (local_c58[0x30] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x32] = 0;
                                                    local_c58[0x33] = 0xd;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x32,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x32],L"ColorGrading",0x1a)
                                                    ;
                                                    cVar1 = FUN_142857ea0(param_1,0x19,
                                                                          local_c58 + 0x32);
                                                    if (local_c58[0x32] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x34] = 0;
                                                      local_c58[0x35] = 0xd;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x34,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x34],L"VectorFields",
                                                                 0x1a);
                                                      cVar1 = FUN_142857ea0(param_1,0x1a,
                                                                            local_c58 + 0x34);
                                                      if (local_c58[0x34] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x36] = 0;
                                                        local_c58[0x37] = 0xd;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x36,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x36],L"DepthOfField",
                                                                   0x1a);
                                                        cVar1 = FUN_142857ea0(param_1,0x1b,
                                                                              local_c58 + 0x36);
                                                        if (local_c58[0x36] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x38] = 0;
                                                          local_c58[0x39] = 0xd;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x38,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x38],L"GBufferHints"
                                                                     ,0x1a);
                                                          cVar1 = FUN_142857ea0(param_1,0x1c,
                                                                                local_c58 + 0x38);
                                                          if (local_c58[0x38] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x3a] = 0;
                                                            local_c58[0x3b] = 0xb;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x3a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x3a],L"MotionBlur"
                                                                       ,0x16);
                                                            cVar1 = FUN_142857ea0(param_1,0x1d,
                                                                                  local_c58 + 0x3a);
                                                            if (local_c58[0x3a] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x3c] = 0;
                                                              local_c58[0x3d] = 0x1a;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x3c,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x3c],
                                                                                                                                                  
                                                  L"CompositeEditorPrimitives",0x34);
                                                  cVar1 = FUN_142857ea0(param_1,0x1e,
                                                                        local_c58 + 0x3c);
                                                  if (local_c58[0x3c] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x3e] = 0;
                                                    local_c58[0x3f] = 0x11;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x3e,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x3e],L"GbxDevPrimitives",
                                                               0x22);
                                                    cVar1 = FUN_142857ea0(param_1,0x1f,
                                                                          local_c58 + 0x3e);
                                                    if (local_c58[0x3e] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x40] = 0;
                                                      local_c58[0x41] = 10;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x40,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x40],L"TestImage",0x14);
                                                      cVar1 = FUN_142857ea0(param_1,0x20,
                                                                            local_c58 + 0x40);
                                                      if (local_c58[0x40] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x42] = 0;
                                                        local_c58[0x43] = 0xd;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x42,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x42],L"VisualizeDOF",
                                                                   0x1a);
                                                        cVar1 = FUN_142857ea0(param_1,0x21,
                                                                              local_c58 + 0x42);
                                                        if (local_c58[0x42] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x44] = 0;
                                                          local_c58[0x45] = 0x15;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x44,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x44],
                                                                     L"VisualizeAdaptiveDOF",0x2a);
                                                          cVar1 = FUN_142857ea0(param_1,0x22,
                                                                                local_c58 + 0x44);
                                                          if (local_c58[0x44] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x46] = 0;
                                                            local_c58[0x47] = 0xd;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x46,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x46],
                                                                       L"VertexColors",0x1a);
                                                            cVar1 = FUN_142857ea0(param_1,0x23,
                                                                                  local_c58 + 0x46);
                                                            if (local_c58[0x46] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x48] = 0;
                                                              local_c58[0x49] = 0xb;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x48,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x48],
                                                                         L"Refraction",0x16);
                                                              cVar1 = FUN_142857ea0(param_1,0x24,
                                                                                    local_c58 + 0x48
                                                                                   );
                                                              if (local_c58[0x48] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x4a] = 0;
                                                                local_c58[0x4b] = 0x14;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x4a,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x4a],
                                                                           L"CameraInterpolation",
                                                                           0x28);
                                                                cVar1 = FUN_142857ea0(param_1,0x25,
                                                                                      local_c58 +
                                                                                      0x4a);
                                                                if (local_c58[0x4a] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x4c] = 0;
                                                                  local_c58[0x4d] = 0x11;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x4c,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x4c],
                                                                             L"SceneColorFringe",
                                                                             0x22);
                                                                  cVar1 = FUN_142857ea0(param_1,0x26
                                                                                        ,local_c58 +
                                                                                         0x4c);
                                                                  if (local_c58[0x4c] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0x4e] = 0;
                                                                    local_c58[0x4f] = 0x15;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0x4e,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0x4e],L"SeparateTranslucency"
                                                             ,0x2a);
                                                  cVar1 = FUN_142857ea0(param_1,0x27,
                                                                        local_c58 + 0x4e);
                                                  if (local_c58[0x4e] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x50] = 0;
                                                    local_c58[0x51] = 0x11;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x50,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x50],L"ScreenPercentage",
                                                               0x22);
                                                    cVar1 = FUN_142857ea0(param_1,0x28,
                                                                          local_c58 + 0x50);
                                                    if (local_c58[0x50] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x52] = 0;
                                                      local_c58[0x53] = 0x14;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x52,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x52],
                                                                 L"VisualizeMotionBlur",0x28);
                                                      cVar1 = FUN_142857ea0(param_1,0x29,
                                                                            local_c58 + 0x52);
                                                      if (local_c58[0x52] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x54] = 0;
                                                        local_c58[0x55] = 0x16;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x54,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x54],
                                                                   L"ReflectionEnvironment",0x2c);
                                                        cVar1 = FUN_142857ea0(param_1,0x2a,
                                                                              local_c58 + 0x54);
                                                        if (local_c58[0x54] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x56] = 0;
                                                          local_c58[0x57] = 0x1b;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x56,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x56],
                                                                     L"VisualizeOutOfBoundsPixels",
                                                                     0x36);
                                                          cVar1 = FUN_142857ea0(param_1,0x2b,
                                                                                local_c58 + 0x56);
                                                          if (local_c58[0x56] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x58] = 0;
                                                            local_c58[0x59] = 8;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x58,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x58],L"Diffuse",
                                                                       0x10);
                                                            cVar1 = FUN_142857ea0(param_1,0x2c,
                                                                                  local_c58 + 0x58);
                                                            if (local_c58[0x58] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x5a] = 0;
                                                              local_c58[0x5b] = 9;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x5a,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x5a],L"Specular"
                                                                         ,0x12);
                                                              cVar1 = FUN_142857ea0(param_1,0x2d,
                                                                                    local_c58 + 0x5a
                                                                                   );
                                                              if (local_c58[0x5a] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x5c] = 0;
                                                                local_c58[0x5d] = 0x11;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x5c,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x5c],
                                                                           L"SelectionOutline",0x22)
                                                                ;
                                                                cVar1 = FUN_142857ea0(param_1,0x2e,
                                                                                      local_c58 +
                                                                                      0x5c);
                                                                if (local_c58[0x5c] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x5e] = 0;
                                                                  local_c58[0x5f] = 0x17;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x5e,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x5e],
                                                                                                                                                          
                                                  L"ScreenSpaceReflections",0x2e);
                                                  cVar1 = FUN_142857ea0(param_1,0x2f,
                                                                        local_c58 + 0x5e);
                                                  if (local_c58[0x5e] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x60] = 0;
                                                    local_c58[0x61] = 0xf;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x60,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x60],L"ContactShadows",
                                                               0x1e);
                                                    cVar1 = FUN_142857ea0(param_1,0x30,
                                                                          local_c58 + 0x60);
                                                    if (local_c58[0x60] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x62] = 0;
                                                      local_c58[99] = 0x1e;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x62,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x62],
                                                                 L"RayTracedDistanceFieldShadows",
                                                                 0x3c);
                                                      cVar1 = FUN_142857ea0(param_1,0x31,
                                                                            local_c58 + 0x62);
                                                      if (local_c58[0x62] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[100] = 0;
                                                        local_c58[0x65] = 0xf;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 100,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[100],L"CapsuleShadows",
                                                                   0x1e);
                                                        cVar1 = FUN_142857ea0(param_1,0x32,
                                                                              local_c58 + 100);
                                                        if (local_c58[100] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x66] = 0;
                                                          local_c58[0x67] = 0x15;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x66,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x66],
                                                                     L"SubsurfaceScattering",0x2a);
                                                          cVar1 = FUN_142857ea0(param_1,0x33,
                                                                                local_c58 + 0x66);
                                                          if (local_c58[0x66] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x68] = 0;
                                                            local_c58[0x69] = 0xd;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x68,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x68],
                                                                       L"VisualizeSSS",0x1a);
                                                            cVar1 = FUN_142857ea0(param_1,0x34,
                                                                                  local_c58 + 0x68);
                                                            if (local_c58[0x68] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x6a] = 0;
                                                              local_c58[0x6b] = 0x13;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x6a,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x6a],
                                                                         L"VolumetricLightmap",0x26)
                                                              ;
                                                              cVar1 = FUN_142857ea0(param_1,0x35,
                                                                                    local_c58 + 0x6a
                                                                                   );
                                                              if (local_c58[0x6a] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x6c] = 0;
                                                                local_c58[0x6d] = 0x16;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x6c,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x6c],
                                                                           L"IndirectLightingCache",
                                                                           0x2c);
                                                                cVar1 = FUN_142857ea0(param_1,0x36,
                                                                                      local_c58 +
                                                                                      0x6c);
                                                                if (local_c58[0x6c] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x6e] = 0;
                                                                  local_c58[0x6f] = 8;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x6e,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x6e],
                                                                             L"DebugAI",0x10);
                                                                  cVar1 = FUN_142857ea0(param_1,0x37
                                                                                        ,local_c58 +
                                                                                         0x6e);
                                                                  if (local_c58[0x6e] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0x70] = 0;
                                                                    local_c58[0x71] = 7;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0x70,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0x70],L"VisLog",0xe);
                                                  cVar1 = FUN_142857ea0(param_1,0x38,
                                                                        local_c58 + 0x70);
                                                  if (local_c58[0x70] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x72] = 0;
                                                    local_c58[0x73] = 0xb;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x72,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x72],L"Navigation",0x16);
                                                    cVar1 = FUN_142857ea0(param_1,0x39,
                                                                          local_c58 + 0x72);
                                                    if (local_c58[0x72] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x74] = 0;
                                                      local_c58[0x75] = 0xe;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x74,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x74],L"GameplayDebug",
                                                                 0x1c);
                                                      cVar1 = FUN_142857ea0(param_1,0x3a,
                                                                            local_c58 + 0x74);
                                                      if (local_c58[0x74] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x76] = 0;
                                                        local_c58[0x77] = 0x16;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x76,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x76],
                                                                   L"TexturedLightProfiles",0x2c);
                                                        cVar1 = FUN_142857ea0(param_1,0x3b,
                                                                              local_c58 + 0x76);
                                                        if (local_c58[0x76] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x78] = 0;
                                                          local_c58[0x79] = 0xf;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x78,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x78],
                                                                     L"LightFunctions",0x1e);
                                                          cVar1 = FUN_142857ea0(param_1,0x3c,
                                                                                local_c58 + 0x78);
                                                          if (local_c58[0x78] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x7a] = 0;
                                                            local_c58[0x7b] = 0xd;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x7a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x7a],
                                                                       L"Tessellation",0x1a);
                                                            cVar1 = FUN_142857ea0(param_1,0x3d,
                                                                                  local_c58 + 0x7a);
                                                            if (local_c58[0x7a] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x7c] = 0;
                                                              local_c58[0x7d] = 0x16;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x7c,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x7c],
                                                                         L"InstancedStaticMeshes",
                                                                         0x2c);
                                                              cVar1 = FUN_142857ea0(param_1,0x3e,
                                                                                    local_c58 + 0x7c
                                                                                   );
                                                              if (local_c58[0x7c] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x7e] = 0;
                                                                local_c58[0x7f] = 0x11;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x7e,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x7e],
                                                                           L"InstancedFoliage",0x22)
                                                                ;
                                                                cVar1 = FUN_142857ea0(param_1,0x3f,
                                                                                      local_c58 +
                                                                                      0x7e);
                                                                if (local_c58[0x7e] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x80] = 0;
                                                                  local_c58[0x81] = 0x15;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x80,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x80],
                                                                             L"HISMCOcclusionBounds"
                                                                             ,0x2a);
                                                                  cVar1 = FUN_142857ea0(param_1,0x40
                                                                                        ,local_c58 +
                                                                                         0x80);
                                                                  if (local_c58[0x80] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0x82] = 0;
                                                                    local_c58[0x83] = 0x11;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0x82,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0x82],L"HISMCClusterTree",
                                                             0x22);
                                                  cVar1 = FUN_142857ea0(param_1,0x41,
                                                                        local_c58 + 0x82);
                                                  if (local_c58[0x82] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x84] = 0;
                                                    local_c58[0x85] = 0xf;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x84,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x84],L"InstancedGrass",
                                                               0x1e);
                                                    cVar1 = FUN_142857ea0(param_1,0x42,
                                                                          local_c58 + 0x84);
                                                    if (local_c58[0x84] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x86] = 0;
                                                      local_c58[0x87] = 0xf;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x86,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x86],L"DynamicShadows",
                                                                 0x1e);
                                                      cVar1 = FUN_142857ea0(param_1,0x43,
                                                                            local_c58 + 0x86);
                                                      if (local_c58[0x86] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x88] = 0;
                                                        local_c58[0x89] = 10;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x88,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x88],L"Particles",0x14
                                                                  );
                                                        cVar1 = FUN_142857ea0(param_1,0x44,
                                                                              local_c58 + 0x88);
                                                        if (local_c58[0x88] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x8a] = 0;
                                                          local_c58[0x8b] = 0xf;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x8a,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x8a],
                                                                     L"SkeletalMeshes",0x1e);
                                                          cVar1 = FUN_142857ea0(param_1,0x45,
                                                                                local_c58 + 0x8a);
                                                          if (local_c58[0x8a] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x8c] = 0;
                                                            local_c58[0x8d] = 0xd;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x8c,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x8c],
                                                                       L"BuilderBrush",0x1a);
                                                            cVar1 = FUN_142857ea0(param_1,0x46,
                                                                                  local_c58 + 0x8c);
                                                            if (local_c58[0x8c] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x8e] = 0;
                                                              local_c58[0x8f] = 0xd;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x8e,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x8e],
                                                                         L"Translucency",0x1a);
                                                              cVar1 = FUN_142857ea0(param_1,0x47,
                                                                                    local_c58 + 0x8e
                                                                                   );
                                                              if (local_c58[0x8e] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x90] = 0;
                                                                local_c58[0x91] = 0x11;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x90,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x90],
                                                                           L"BillboardSprites",0x22)
                                                                ;
                                                                cVar1 = FUN_142857ea0(param_1,0x48,
                                                                                      local_c58 +
                                                                                      0x90);
                                                                if (local_c58[0x90] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x92] = 0;
                                                                  local_c58[0x93] = 4;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x92,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x92],
                                                                             &DAT_1450b79e8,8);
                                                                  cVar1 = FUN_142857ea0(param_1,0x49
                                                                                        ,local_c58 +
                                                                                         0x92);
                                                                  if (local_c58[0x92] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0x94] = 0;
                                                                    local_c58[0x95] = 0x10;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0x94,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0x94],L"LightComplexity",0x20
                                                            );
                                                  cVar1 = FUN_142857ea0(param_1,0x4a,
                                                                        local_c58 + 0x94);
                                                  if (local_c58[0x94] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x96] = 0;
                                                    local_c58[0x97] = 0x11;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x96,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x96],L"ShaderComplexity",
                                                               0x22);
                                                    cVar1 = FUN_142857ea0(param_1,0x4b,
                                                                          local_c58 + 0x96);
                                                    if (local_c58[0x96] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x98] = 0;
                                                      local_c58[0x99] = 0x17;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x98,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x98],
                                                                 L"VertexShaderComplexity",0x2e);
                                                      cVar1 = FUN_142857ea0(param_1,0x4c,
                                                                            local_c58 + 0x98);
                                                      if (local_c58[0x98] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x9a] = 0;
                                                        local_c58[0x9b] = 0x17;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x9a,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x9a],
                                                                   L"StationaryLightOverlap",0x2e);
                                                        cVar1 = FUN_142857ea0(param_1,0x4d,
                                                                              local_c58 + 0x9a);
                                                        if (local_c58[0x9a] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x9c] = 0;
                                                          local_c58[0x9d] = 0x10;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x9c,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x9c],
                                                                     L"LightMapDensity",0x20);
                                                          cVar1 = FUN_142857ea0(param_1,0x4e,
                                                                                local_c58 + 0x9c);
                                                          if (local_c58[0x9c] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x9e] = 0;
                                                            local_c58[0x9f] = 0x10;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x9e,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x9e],
                                                                       L"StreamingBounds",0x20);
                                                            cVar1 = FUN_142857ea0(param_1,0x4f,
                                                                                  local_c58 + 0x9e);
                                                            if (local_c58[0x9e] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0xa0] = 0;
                                                              local_c58[0xa1] = 0xc;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0xa0,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0xa0],
                                                                         L"Constraints",0x18);
                                                              cVar1 = FUN_142857ea0(param_1,0x50,
                                                                                    local_c58 + 0xa0
                                                                                   );
                                                              if (local_c58[0xa0] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0xa2] = 0;
                                                                local_c58[0xa3] = 0xf;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0xa2,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0xa2],
                                                                           L"MassProperties",0x1e);
                                                                cVar1 = FUN_142857ea0(param_1,0x51,
                                                                                      local_c58 +
                                                                                      0xa2);
                                                                if (local_c58[0xa2] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0xa4] = 0;
                                                                  local_c58[0xa5] = 0xf;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0xa4,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0xa4],
                                                                             L"CameraFrustums",0x1e)
                                                                  ;
                                                                  cVar1 = FUN_142857ea0(param_1,0x52
                                                                                        ,local_c58 +
                                                                                         0xa4);
                                                                  if (local_c58[0xa4] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0xa6] = 0;
                                                                    local_c58[0xa7] = 0xc;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0xa6,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0xa6],L"AudioRadius",0x18);
                                                  cVar1 = FUN_142857ea0(param_1,0x53,
                                                                        local_c58 + 0xa6);
                                                  if (local_c58[0xa6] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0xa8] = 0;
                                                    local_c58[0xa9] = 0x14;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0xa8,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0xa8],
                                                               L"ForceFeedbackRadius",0x28);
                                                    cVar1 = FUN_142857ea0(param_1,0x54,
                                                                          local_c58 + 0xa8);
                                                    if (local_c58[0xa8] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0xaa] = 0;
                                                      local_c58[0xab] = 9;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0xaa,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0xaa],L"BSPSplit",0x12);
                                                      cVar1 = FUN_142857ea0(param_1,0x55,
                                                                            local_c58 + 0xaa);
                                                      if (local_c58[0xaa] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0xac] = 0;
                                                        local_c58[0xad] = 8;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0xac,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0xac],L"Brushes",0x10);
                                                        cVar1 = FUN_142857ea0(param_1,0x56,
                                                                              local_c58 + 0xac);
                                                        if (local_c58[0xac] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0xae] = 0;
                                                          local_c58[0xaf] = 9;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0xae,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0xae],L"Lighting",
                                                                     0x12);
                                                          cVar1 = FUN_142857ea0(param_1,0x57,
                                                                                local_c58 + 0xae);
                                                          if (local_c58[0xae] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0xb0] = 0;
                                                            local_c58[0xb1] = 0x11;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0xb0,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0xb0],
                                                                       L"DeferredLighting",0x22);
                                                            cVar1 = FUN_142857ea0(param_1,0x58,
                                                                                  local_c58 + 0xb0);
                                                            if (local_c58[0xb0] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0xb2] = 0;
                                                              local_c58[0xb3] = 7;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0xb2,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0xb2],L"Editor",
                                                                         0xe);
                                                              cVar1 = FUN_142857ea0(param_1,0x59,
                                                                                    local_c58 + 0xb2
                                                                                   );
                                                              if (local_c58[0xb2] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0xb4] = 0;
                                                                local_c58[0xb5] = 0xd;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0xb4,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0xb4],
                                                                           L"BSPTriangles",0x1a);
                                                                cVar1 = FUN_142857ea0(param_1,0x5a,
                                                                                      local_c58 +
                                                                                      0xb4);
                                                                if (local_c58[0xb4] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0xb6] = 0;
                                                                  local_c58[0xb7] = 0xe;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0xb6,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0xb6],
                                                                             L"LargeVertices",0x1c);
                                                                  cVar1 = FUN_142857ea0(param_1,0x5b
                                                                                        ,local_c58 +
                                                                                         0xb6);
                                                                  if (local_c58[0xb6] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0xb8] = 0;
                                                                    local_c58[0xb9] = 5;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0xb8,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0xb8],L"Grid",10);
                                                  cVar1 = FUN_142857ea0(param_1,0x5c,
                                                                        local_c58 + 0xb8);
                                                  if (local_c58[0xb8] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0xba] = 0;
                                                    local_c58[0xbb] = 5;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0xba,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0xba],L"Snap",10);
                                                    cVar1 = FUN_142857ea0(param_1,0x5d,
                                                                          local_c58 + 0xba);
                                                    if (local_c58[0xba] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0xbc] = 0;
                                                      local_c58[0xbd] = 10;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0xbc,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0xbc],L"MeshEdges",0x14);
                                                      cVar1 = FUN_142857ea0(param_1,0x5e,
                                                                            local_c58 + 0xbc);
                                                      if (local_c58[0xbc] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0xbe] = 0;
                                                        local_c58[0xbf] = 6;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0xbe,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0xbe],L"Cover",0xc);
                                                        cVar1 = FUN_142857ea0(param_1,0x5f,
                                                                              local_c58 + 0xbe);
                                                        if (local_c58[0xbe] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0xc0] = 0;
                                                          local_c58[0xc1] = 8;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0xc0,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0xc0],L"Splines",0x10
                                                                    );
                                                          cVar1 = FUN_142857ea0(param_1,0x60,
                                                                                local_c58 + 0xc0);
                                                          if (local_c58[0xc0] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0xc2] = 0;
                                                            local_c58[0xc3] = 10;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0xc2,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0xc2],L"Selection",
                                                                       0x14);
                                                            cVar1 = FUN_142857ea0(param_1,0x61,
                                                                                  local_c58 + 0xc2);
                                                            if (local_c58[0xc2] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0xc4] = 0;
                                                              local_c58[0xc5] = 0xc;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0xc4,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0xc4],
                                                                         L"ModeWidgets",0x18);
                                                              cVar1 = FUN_142857ea0(param_1,0x62,
                                                                                    local_c58 + 0xc4
                                                                                   );
                                                              if (local_c58[0xc4] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0xc6] = 0;
                                                                local_c58[199] = 7;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0xc6,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0xc6],L"Bounds"
                                                                           ,0xe);
                                                                cVar1 = FUN_142857ea0(param_1,99,
                                                                                      local_c58 +
                                                                                      0xc6);
                                                                if (local_c58[0xc6] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[200] = 0;
                                                                  local_c58[0xc9] = 0xb;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 200,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[200],
                                                                             L"HitProxies",0x16);
                                                                  cVar1 = FUN_142857ea0(param_1,100,
                                                                                        local_c58 +
                                                                                        200);
                                                                  if (local_c58[200] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0xca] = 0;
                                                                    local_c58[0xcb] = 0x13;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0xca,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0xca],L"PropertyColoration",
                                                             0x26);
                                                  cVar1 = FUN_142857ea0(param_1,0x65,
                                                                        local_c58 + 0xca);
                                                  if (local_c58[0xca] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0xcc] = 0;
                                                    local_c58[0xcd] = 0x10;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0xcc,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0xcc],L"LightInfluences",
                                                               0x20);
                                                    cVar1 = FUN_142857ea0(param_1,0x66,
                                                                          local_c58 + 0xcc);
                                                    if (local_c58[0xcc] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0xce] = 0;
                                                      local_c58[0xcf] = 6;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0xce,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0xce],L"Pivot",0xc);
                                                      cVar1 = FUN_142857ea0(param_1,0x67,
                                                                            local_c58 + 0xce);
                                                      if (local_c58[0xce] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0xd0] = 0;
                                                        local_c58[0xd1] = 0xf;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0xd0,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0xd0],L"ShadowFrustums"
                                                                   ,0x1e);
                                                        cVar1 = FUN_142857ea0(param_1,0x68,
                                                                              local_c58 + 0xd0);
                                                        if (local_c58[0xd0] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0xd2] = 0;
                                                          local_c58[0xd3] = 10;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0xd2,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0xd2],L"Wireframe",
                                                                     0x14);
                                                          cVar1 = FUN_142857ea0(param_1,0x69,
                                                                                local_c58 + 0xd2);
                                                          if (local_c58[0xd2] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0xd4] = 0;
                                                            local_c58[0xd5] = 10;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0xd4,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0xd4],L"Materials",
                                                                       0x14);
                                                            cVar1 = FUN_142857ea0(param_1,0x6a,
                                                                                  local_c58 + 0xd4);
                                                            if (local_c58[0xd4] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0xd6] = 0;
                                                              local_c58[0xd7] = 0xd;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0xd6,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0xd6],
                                                                         L"StaticMeshes",0x1a);
                                                              cVar1 = FUN_142857ea0(param_1,0x6b,
                                                                                    local_c58 + 0xd6
                                                                                   );
                                                              if (local_c58[0xd6] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0xd8] = 0;
                                                                local_c58[0xd9] = 10;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0xd8,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0xd8],
                                                                           L"Landscape",0x14);
                                                                cVar1 = FUN_142857ea0(param_1,0x6c,
                                                                                      local_c58 +
                                                                                      0xd8);
                                                                if (local_c58[0xd8] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0xda] = 0;
                                                                  local_c58[0xdb] = 0xc;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0xda,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0xda],
                                                                             L"LightRadius",0x18);
                                                                  cVar1 = FUN_142857ea0(param_1,0x6d
                                                                                        ,local_c58 +
                                                                                         0xda);
                                                                  if (local_c58[0xda] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0xdc] = 0;
                                                                    local_c58[0xdd] = 4;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0xdc,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0xdc],&DAT_144dc72e0,8);
                                                  cVar1 = FUN_142857ea0(param_1,0x6e,
                                                                        local_c58 + 0xdc);
                                                  if (local_c58[0xdc] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0xde] = 0;
                                                    local_c58[0xdf] = 8;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0xde,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0xde],L"Volumes",0x10);
                                                    cVar1 = FUN_142857ea0(param_1,0x6f,
                                                                          local_c58 + 0xde);
                                                    if (local_c58[0xde] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0xe0] = 0;
                                                      local_c58[0xe1] = 5;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0xe0,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0xe0],L"Game",10);
                                                      cVar1 = FUN_142857ea0(param_1,0x70,
                                                                            local_c58 + 0xe0);
                                                      if (local_c58[0xe0] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0xe2] = 0;
                                                        local_c58[0xe3] = 0x10;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0xe2,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0xe2],
                                                                   L"LevelColoration",0x20);
                                                        cVar1 = FUN_142857ea0(param_1,0x71,
                                                                              local_c58 + 0xe2);
                                                        if (local_c58[0xe2] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0xe4] = 0;
                                                          local_c58[0xe5] = 4;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0xe4,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0xe4],&DAT_1450b7dc0,
                                                                     8);
                                                          cVar1 = FUN_142857ea0(param_1,0x72,
                                                                                local_c58 + 0xe4);
                                                          if (local_c58[0xe4] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0xe6] = 0;
                                                            local_c58[0xe7] = 10;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0xe6,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0xe6],L"Collision",
                                                                       0x14);
                                                            cVar1 = FUN_142857ea0(param_1,0x73,
                                                                                  local_c58 + 0xe6);
                                                            if (local_c58[0xe6] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0xe8] = 0;
                                                              local_c58[0xe9] = 0x14;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0xe8,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0xe8],
                                                                         L"CollisionVisibility",0x28
                                                                        );
                                                              cVar1 = FUN_142857ea0(param_1,0x74,
                                                                                    local_c58 + 0xe8
                                                                                   );
                                                              if (local_c58[0xe8] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0xea] = 0;
                                                                local_c58[0xeb] = 0xe;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0xea,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0xea],
                                                                           L"CollisionPawn",0x1c);
                                                                cVar1 = FUN_142857ea0(param_1,0x75,
                                                                                      local_c58 +
                                                                                      0xea);
                                                                if (local_c58[0xea] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0xec] = 0;
                                                                  local_c58[0xed] = 0xc;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0xec,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0xec],
                                                                             L"LightShafts",0x18);
                                                                  cVar1 = FUN_142857ea0(param_1,0x76
                                                                                        ,local_c58 +
                                                                                         0xec);
                                                                  if (local_c58[0xec] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0xee] = 0;
                                                                    local_c58[0xef] = 0x14;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0xee,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0xee],L"PostProcessMaterial",
                                                             0x28);
                                                  cVar1 = FUN_142857ea0(param_1,0x77,
                                                                        local_c58 + 0xee);
                                                  if (local_c58[0xee] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0xf0] = 0;
                                                    local_c58[0xf1] = 0xf;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0xf0,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0xf0],L"AtmosphericFog",
                                                               0x1e);
                                                    cVar1 = FUN_142857ea0(param_1,0x78,
                                                                          local_c58 + 0xf0);
                                                    if (local_c58[0xf0] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0xf2] = 0;
                                                      local_c58[0xf3] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0xf2,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0xf2],
                                                                 L"CameraAspectRatioBars",0x2c);
                                                      cVar1 = FUN_142857ea0(param_1,0x79,
                                                                            local_c58 + 0xf2);
                                                      if (local_c58[0xf2] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0xf4] = 0;
                                                        local_c58[0xf5] = 0x11;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0xf4,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0xf4],
                                                                   L"CameraSafeFrames",0x22);
                                                        cVar1 = FUN_142857ea0(param_1,0x7a,
                                                                              local_c58 + 0xf4);
                                                        if (local_c58[0xf4] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0xf6] = 0;
                                                          local_c58[0xf7] = 0xb;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0xf6,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0xf6],L"TextRender",
                                                                     0x16);
                                                          cVar1 = FUN_142857ea0(param_1,0x7b,
                                                                                local_c58 + 0xf6);
                                                          if (local_c58[0xf6] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0xf8] = 0;
                                                            local_c58[0xf9] = 10;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0xf8,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0xf8],L"Rendering",
                                                                       0x14);
                                                            cVar1 = FUN_142857ea0(param_1,0x7c,
                                                                                  local_c58 + 0xf8);
                                                            if (local_c58[0xf8] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0xfa] = 0;
                                                              local_c58[0xfb] = 0x16;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0xfa,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0xfa],
                                                                         L"HighResScreenshotMask",
                                                                         0x2c);
                                                              cVar1 = FUN_142857ea0(param_1,0x7d,
                                                                                    local_c58 + 0xfa
                                                                                   );
                                                              if (local_c58[0xfa] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0xfc] = 0;
                                                                local_c58[0xfd] = 0xe;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0xfc,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0xfc],
                                                                           L"HMDDistortion",0x1c);
                                                                cVar1 = FUN_142857ea0(param_1,0x7e,
                                                                                      local_c58 +
                                                                                      0xfc);
                                                                if (local_c58[0xfc] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0xfe] = 0;
                                                                  local_c58[0xff] = 0x10;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0xfe,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0xfe],
                                                                             L"StereoRendering",0x20
                                                                            );
                                                                  cVar1 = FUN_142857ea0(param_1,0x7f
                                                                                        ,local_c58 +
                                                                                         0xfe);
                                                                  if (local_c58[0xfe] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0x100] = 0;
                                                                    local_c58[0x101] = 0x19;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0x100,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0x100],
                                                             L"DistanceCulledPrimitives",0x32);
                                                  cVar1 = FUN_142857ea0(param_1,0x80,
                                                                        local_c58 + 0x100);
                                                  if (local_c58[0x100] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x102] = 0;
                                                    local_c58[0x103] = 0x16;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x102,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x102],
                                                               L"VisualizeLightCulling",0x2c);
                                                    cVar1 = FUN_142857ea0(param_1,0x81,
                                                                          local_c58 + 0x102);
                                                    if (local_c58[0x102] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x104] = 0;
                                                      local_c58[0x105] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x104,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x104],
                                                                 L"PrecomputedVisibility",0x2c);
                                                      cVar1 = FUN_142857ea0(param_1,0x82,
                                                                            local_c58 + 0x104);
                                                      if (local_c58[0x104] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x106] = 0;
                                                        local_c58[0x107] = 0xc;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x106,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x106],L"SkyLighting",
                                                                   0x18);
                                                        cVar1 = FUN_142857ea0(param_1,0x83,
                                                                              local_c58 + 0x106);
                                                        if (local_c58[0x106] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x108] = 0;
                                                          local_c58[0x109] = 0xd;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x108,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x108],
                                                                     L"VisualizeLPV",0x1a);
                                                          cVar1 = FUN_142857ea0(param_1,0x84,
                                                                                local_c58 + 0x108);
                                                          if (local_c58[0x108] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x10a] = 0;
                                                            local_c58[0x10b] = 0x18;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x10a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x10a],
                                                                       L"PreviewShadowsIndicator",
                                                                       0x30);
                                                            cVar1 = FUN_142857ea0(param_1,0x85,
                                                                                  local_c58 + 0x10a)
                                                            ;
                                                            if (local_c58[0x10a] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x10c] = 0;
                                                              local_c58[0x10d] = 0x1b;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x10c,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x10c],
                                                                                                                                                  
                                                  L"PrecomputedVisibilityCells",0x36);
                                                  cVar1 = FUN_142857ea0(param_1,0x86,
                                                                        local_c58 + 0x10c);
                                                  if (local_c58[0x10c] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x10e] = 0;
                                                    local_c58[0x10f] = 0x1c;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x10e,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x10e],
                                                               L"VisualizeVolumetricLightmap",0x38);
                                                    cVar1 = FUN_142857ea0(param_1,0x87,
                                                                          local_c58 + 0x10e);
                                                    if (local_c58[0x10e] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x110] = 0;
                                                      local_c58[0x111] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x110,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x110],
                                                                 L"VolumeLightingSamples",0x2c);
                                                      cVar1 = FUN_142857ea0(param_1,0x88,
                                                                            local_c58 + 0x110);
                                                      if (local_c58[0x110] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x112] = 0;
                                                        local_c58[0x113] = 0xf;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x112,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x112],
                                                                   L"Paper2DSprites",0x1e);
                                                        cVar1 = FUN_142857ea0(param_1,0x89,
                                                                              local_c58 + 0x112);
                                                        if (local_c58[0x112] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x114] = 0;
                                                          local_c58[0x115] = 0x19;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x114,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x114],
                                                                     L"VisualizeDistanceFieldAO",
                                                                     0x32);
                                                          cVar1 = FUN_142857ea0(param_1,0x8a,
                                                                                local_c58 + 0x114);
                                                          if (local_c58[0x114] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x116] = 0;
                                                            local_c58[0x117] = 0x19;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x116,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x116],
                                                                       L"VisualizeDistanceFieldGI",
                                                                       0x32);
                                                            cVar1 = FUN_142857ea0(param_1,0x8b,
                                                                                  local_c58 + 0x116)
                                                            ;
                                                            if (local_c58[0x116] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x118] = 0;
                                                              local_c58[0x119] = 0x1c;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x118,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x118],
                                                                                                                                                  
                                                  L"VisualizeMeshDistanceFields",0x38);
                                                  cVar1 = FUN_142857ea0(param_1,0x8c,
                                                                        local_c58 + 0x118);
                                                  if (local_c58[0x118] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x11a] = 0;
                                                    local_c58[0x11b] = 0x1d;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x11a,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x11a],
                                                               L"VisualizeGlobalDistanceField",0x3a)
                                                    ;
                                                    cVar1 = FUN_142857ea0(param_1,0x8d,
                                                                          local_c58 + 0x11a);
                                                    if (local_c58[0x11a] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x11c] = 0;
                                                      local_c58[0x11d] = 0xe;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x11c,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x11c],L"ScreenSpaceAO",
                                                                 0x1c);
                                                      cVar1 = FUN_142857ea0(param_1,0x8e,
                                                                            local_c58 + 0x11c);
                                                      if (local_c58[0x11c] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x11e] = 0;
                                                        local_c58[0x11f] = 0x10;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x11e,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x11e],
                                                                   L"DistanceFieldAO",0x20);
                                                        cVar1 = FUN_142857ea0(param_1,0x8f,
                                                                              local_c58 + 0x11e);
                                                        if (local_c58[0x11e] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x120] = 0;
                                                          local_c58[0x121] = 0x10;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x120,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x120],
                                                                     L"DistanceFieldGI",0x20);
                                                          cVar1 = FUN_142857ea0(param_1,0x90,
                                                                                local_c58 + 0x120);
                                                          if (local_c58[0x120] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x122] = 0;
                                                            local_c58[0x123] = 0xe;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x122,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x122],
                                                                       L"VolumetricFog",0x1c);
                                                            cVar1 = FUN_142857ea0(param_1,0x91,
                                                                                  local_c58 + 0x122)
                                                            ;
                                                            if (local_c58[0x122] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x124] = 0;
                                                              local_c58[0x125] = 0xd;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x124,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x124],
                                                                         L"VisualizeSSR",0x1a);
                                                              cVar1 = FUN_142857ea0(param_1,0x92,
                                                                                    local_c58 +
                                                                                    0x124);
                                                              if (local_c58[0x124] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x126] = 0;
                                                                local_c58[0x127] = 0x17;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x126,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x126],
                                                                           L"VisualizeShadingModels"
                                                                           ,0x2e);
                                                                cVar1 = FUN_142857ea0(param_1,0x93,
                                                                                      local_c58 +
                                                                                      0x126);
                                                                if (local_c58[0x126] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x128] = 0;
                                                                  local_c58[0x129] = 0x10;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x128,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x128],
                                                                             L"VisualizeSenses",0x20
                                                                            );
                                                                  cVar1 = FUN_142857ea0(param_1,0x94
                                                                                        ,local_c58 +
                                                                                         0x128);
                                                                  if (local_c58[0x128] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0x12a] = 0;
                                                                    local_c58[299] = 0xf;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0x12a,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0x12a],L"VisualizeBloom",0x1e
                                                            );
                                                  cVar1 = FUN_142857ea0(param_1,0x95,
                                                                        local_c58 + 0x12a);
                                                  if (local_c58[0x12a] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[300] = 0;
                                                    local_c58[0x12d] = 0xe;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 300,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[300],L"LODColoration",0x1c)
                                                    ;
                                                    cVar1 = FUN_142857ea0(param_1,0x96,
                                                                          local_c58 + 300);
                                                    if (local_c58[300] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x12e] = 0;
                                                      local_c58[0x12f] = 0xf;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x12e,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x12e],L"HLODColoration",
                                                                 0x1e);
                                                      cVar1 = FUN_142857ea0(param_1,0x97,
                                                                            local_c58 + 0x12e);
                                                      if (local_c58[0x12e] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x130] = 0;
                                                        local_c58[0x131] = 0xd;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x130,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x130],L"QuadOverdraw",
                                                                   0x1a);
                                                        cVar1 = FUN_142857ea0(param_1,0x98,
                                                                              local_c58 + 0x130);
                                                        if (local_c58[0x130] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x132] = 0;
                                                          local_c58[0x133] = 0x21;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x132,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x132],
                                                                                                                                          
                                                  L"ShaderComplexityWithQuadOverdraw",0x42);
                                                  cVar1 = FUN_142857ea0(param_1,0x99,
                                                                        local_c58 + 0x132);
                                                  if (local_c58[0x132] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x134] = 0;
                                                    local_c58[0x135] = 0x1a;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x134,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x134],
                                                               L"PrimitiveDistanceAccuracy",0x34);
                                                    cVar1 = FUN_142857ea0(param_1,0x9a,
                                                                          local_c58 + 0x134);
                                                    if (local_c58[0x134] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x136] = 0;
                                                      local_c58[0x137] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x136,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x136],
                                                                 L"MeshUVDensityAccuracy",0x2c);
                                                      cVar1 = FUN_142857ea0(param_1,0x9b,
                                                                            local_c58 + 0x136);
                                                      if (local_c58[0x136] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x138] = 0;
                                                        local_c58[0x139] = 0x1d;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x138,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x138],
                                                                   L"MaterialTextureScaleAccuracy",
                                                                   0x3a);
                                                        cVar1 = FUN_142857ea0(param_1,0x9c,
                                                                              local_c58 + 0x138);
                                                        if (local_c58[0x138] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x13a] = 0;
                                                          local_c58[0x13b] = 0x1c;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x13a,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x13a],
                                                                     L"OutputMaterialTextureScales",
                                                                     0x38);
                                                          cVar1 = FUN_142857ea0(param_1,0x9d,
                                                                                local_c58 + 0x13a);
                                                          if (local_c58[0x13a] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x13c] = 0;
                                                            local_c58[0x13d] = 0x1a;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x13c,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x13c],
                                                                       L"RequiredTextureResolution",
                                                                       0x34);
                                                            cVar1 = FUN_142857ea0(param_1,0x9e,
                                                                                  local_c58 + 0x13c)
                                                            ;
                                                            if (local_c58[0x13c] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x13e] = 0;
                                                              local_c58[0x13f] = 0x11;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x13e,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x13e],
                                                                         L"WidgetComponents",0x22);
                                                              cVar1 = FUN_142857ea0(param_1,0x9f,
                                                                                    local_c58 +
                                                                                    0x13e);
                                                              if (local_c58[0x13e] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x140] = 0;
                                                                local_c58[0x141] = 6;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x140,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x140],L"Bones"
                                                                           ,0xc);
                                                                cVar1 = FUN_142857ea0(param_1,0xa0,
                                                                                      local_c58 +
                                                                                      0x140);
                                                                if (local_c58[0x140] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x142] = 0;
                                                                  local_c58[0x143] = 0xc;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x142,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x142],
                                                                             L"MediaPlanes",0x18);
                                                                  cVar1 = FUN_142857ea0(param_1,0xa1
                                                                                        ,local_c58 +
                                                                                         0x142);
                                                                  if (local_c58[0x142] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                  if (cVar1 != '\0') {
                                                                    local_c58[0x144] = 0;
                                                                    local_c58[0x145] = 0xb;
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c58 + 0x144,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c58[0x144],L"ScreenSize",0x16);
                                                  cVar1 = FUN_142857ea0(param_1,0xa2,
                                                                        local_c58 + 0x144);
                                                  if (local_c58[0x144] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x146] = 0;
                                                    local_c58[0x147] = 0x16;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x146,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x146],
                                                               L"VisualizeLightMapBase",0x2c);
                                                    cVar1 = FUN_142857ea0(param_1,0xa3,
                                                                          local_c58 + 0x146);
                                                    if (local_c58[0x146] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x148] = 0;
                                                      local_c58[0x149] = 0x1b;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x148,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x148],
                                                                 L"VisualizeLightMapTimeOfDay",0x36)
                                                      ;
                                                      cVar1 = FUN_142857ea0(param_1,0xa4,
                                                                            local_c58 + 0x148);
                                                      if (local_c58[0x148] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x14a] = 0;
                                                        local_c58[0x14b] = 0x17;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x14a,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x14a],
                                                                   L"VisualizeSkyBentNormal",0x2e);
                                                        cVar1 = FUN_142857ea0(param_1,0xa5,
                                                                              local_c58 + 0x14a);
                                                        if (local_c58[0x14a] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x14c] = 0;
                                                          local_c58[0x14d] = 0x16;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x14c,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x14c],
                                                                     L"VisualizeSkyOcclusion",0x2c);
                                                          cVar1 = FUN_142857ea0(param_1,0xa6,
                                                                                local_c58 + 0x14c);
                                                          if (local_c58[0x14c] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x14e] = 0;
                                                            local_c58[0x14f] = 0x18;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x14e,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x14e],
                                                                       L"VisualizeAOMaterialMask",
                                                                       0x30);
                                                            cVar1 = FUN_142857ea0(param_1,0xa7,
                                                                                  local_c58 + 0x14e)
                                                            ;
                                                            if (local_c58[0x14e] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x150] = 0;
                                                              local_c58[0x151] = 0x18;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x150,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x150],
                                                                         L"VisualizeLightMapTexels",
                                                                         0x30);
                                                              cVar1 = FUN_142857ea0(param_1,0xa8,
                                                                                    local_c58 +
                                                                                    0x150);
                                                              if (local_c58[0x150] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x152] = 0;
                                                                local_c58[0x153] = 0xe;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x152,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x152],
                                                                           L"DebugLight_GI",0x1c);
                                                                cVar1 = FUN_142857ea0(param_1,0xa9,
                                                                                      local_c58 +
                                                                                      0x152);
                                                                if (local_c58[0x152] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x154] = 0;
                                                                  local_c58[0x155] = 0x17;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x154,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x154],
                                                                                                                                                          
                                                  L"DebugLight_GI_LightMap",0x2e);
                                                  cVar1 = FUN_142857ea0(param_1,0xaa,
                                                                        local_c58 + 0x154);
                                                  if (local_c58[0x154] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x156] = 0;
                                                    local_c58[0x157] = 0x1c;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x156,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x156],
                                                               L"DebugLight_GI_LightMap_Base",0x38);
                                                    cVar1 = FUN_142857ea0(param_1,0xab,
                                                                          local_c58 + 0x156);
                                                    if (local_c58[0x156] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x158] = 0;
                                                      local_c58[0x159] = 0x21;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x158,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x158],
                                                                 L"DebugLight_GI_LightMap_TimeOfDay"
                                                                 ,0x42);
                                                      cVar1 = FUN_142857ea0(param_1,0xac,
                                                                            local_c58 + 0x158);
                                                      if (local_c58[0x158] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x15a] = 0;
                                                        local_c58[0x15b] = 0x15;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x15a,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x15a],
                                                                   L"DebugLight_GI_Volume",0x2a);
                                                        cVar1 = FUN_142857ea0(param_1,0xad,
                                                                              local_c58 + 0x15a);
                                                        if (local_c58[0x15a] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x15c] = 0;
                                                          local_c58[0x15d] = 0x1a;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x15c,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x15c],
                                                                     L"DebugLight_GI_Volume_Base",
                                                                     0x34);
                                                          cVar1 = FUN_142857ea0(param_1,0xae,
                                                                                local_c58 + 0x15c);
                                                          if (local_c58[0x15c] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x15e] = 0;
                                                            local_c58[0x15f] = 0x1f;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x15e,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x15e],
                                                                                                                                              
                                                  L"DebugLight_GI_Volume_TimeOfDay",0x3e);
                                                  cVar1 = FUN_142857ea0(param_1,0xaf,
                                                                        local_c58 + 0x15e);
                                                  if (local_c58[0x15e] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x160] = 0;
                                                    local_c58[0x161] = 0x12;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x160,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x160],L"DebugLight_GI_Sky"
                                                               ,0x24);
                                                    cVar1 = FUN_142857ea0(param_1,0xb0,
                                                                          local_c58 + 0x160);
                                                    if (local_c58[0x160] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x162] = 0;
                                                      local_c58[0x163] = 0x14;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x162,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x162],
                                                                 L"DebugLight_Emissive",0x28);
                                                      cVar1 = FUN_142857ea0(param_1,0xb1,
                                                                            local_c58 + 0x162);
                                                      if (local_c58[0x162] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x164] = 0;
                                                        local_c58[0x165] = 0x11;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x164,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x164],
                                                                   L"DebugLight_Light",0x22);
                                                        cVar1 = FUN_142857ea0(param_1,0xb2,
                                                                              local_c58 + 0x164);
                                                        if (local_c58[0x164] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x166] = 0;
                                                          local_c58[0x167] = 0x12;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x166,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x166],
                                                                     L"DebugLight_EnvMap",0x24);
                                                          cVar1 = FUN_142857ea0(param_1,0xb3,
                                                                                local_c58 + 0x166);
                                                          if (local_c58[0x166] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x168] = 0;
                                                            local_c58[0x169] = 0x16;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x168,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x168],
                                                                       L"DebugLight_EnvMap_SSR",0x2c
                                                                      );
                                                            cVar1 = FUN_142857ea0(param_1,0xb4,
                                                                                  local_c58 + 0x168)
                                                            ;
                                                            if (local_c58[0x168] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x16a] = 0;
                                                              local_c58[0x16b] = 0x17;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x16a,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x16a],
                                                                         L"DebugLight_EnvMap_Cube",
                                                                         0x2e);
                                                              cVar1 = FUN_142857ea0(param_1,0xb5,
                                                                                    local_c58 +
                                                                                    0x16a);
                                                              if (local_c58[0x16a] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x16c] = 0;
                                                                local_c58[0x16d] = 0x1c;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x16c,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x16c],
                                                                                                                                                      
                                                  L"DebugLight_EnvMap_Cube_Base",0x38);
                                                  cVar1 = FUN_142857ea0(param_1,0xb6,
                                                                        local_c58 + 0x16c);
                                                  if (local_c58[0x16c] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x16e] = 0;
                                                    local_c58[0x16f] = 0x1e;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x16e,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x16e],
                                                               L"DebugLight_EnvMap_Cube_SunInf",0x3c
                                                              );
                                                    cVar1 = FUN_142857ea0(param_1,0xb7,
                                                                          local_c58 + 0x16e);
                                                    if (local_c58[0x16e] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x170] = 0;
                                                      local_c58[0x171] = 0x1e;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x170,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x170],
                                                                 L"DebugLight_EnvMap_Cube_SkyInf",
                                                                 0x3c);
                                                      cVar1 = FUN_142857ea0(param_1,0xb8,
                                                                            local_c58 + 0x170);
                                                      if (local_c58[0x170] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x172] = 0;
                                                        local_c58[0x173] = 0x1b;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x172,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x172],
                                                                   L"DebugLight_EnvMap_Cube_Sky",
                                                                   0x36);
                                                        cVar1 = FUN_142857ea0(param_1,0xb9,
                                                                              local_c58 + 0x172);
                                                        if (local_c58[0x172] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x174] = 0;
                                                          local_c58[0x175] = 0x1b;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x174,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x174],
                                                                     L"DebugLight_EnvMap_Cube_Fog",
                                                                     0x36);
                                                          cVar1 = FUN_142857ea0(param_1,0xba,
                                                                                local_c58 + 0x174);
                                                          if (local_c58[0x174] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x176] = 0;
                                                            local_c58[0x177] = 0x1f;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x176,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x176],
                                                                                                                                              
                                                  L"DebugLight_EnvMap_Cube_Ambient",0x3e);
                                                  cVar1 = FUN_142857ea0(param_1,0xbb,
                                                                        local_c58 + 0x176);
                                                  if (local_c58[0x176] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x178] = 0;
                                                    local_c58[0x179] = 0x24;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x178,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x178],
                                                                                                                              
                                                  L"DebugLight_Display_EnvMap_ProbeCube",0x48);
                                                  cVar1 = FUN_142857ea0(param_1,0xbc,
                                                                        local_c58 + 0x178);
                                                  if (local_c58[0x178] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c58[0x17a] = 0;
                                                    local_c58[0x17b] = 0x22;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c58 + 0x17a,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c58[0x17a],
                                                               L"DebugLight_Display_EnvMap_SkyCube",
                                                               0x44);
                                                    cVar1 = FUN_142857ea0(param_1,0xbd,
                                                                          local_c58 + 0x17a);
                                                    if (local_c58[0x17a] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c58[0x17c] = 0;
                                                      local_c58[0x17d] = 0x13;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c58 + 0x17c,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c58[0x17c],
                                                                 L"ForceWhiteSunLight",0x26);
                                                      cVar1 = FUN_142857ea0(param_1,0xbe,
                                                                            local_c58 + 0x17c);
                                                      if (local_c58[0x17c] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c58[0x17e] = 0;
                                                        local_c58[0x17f] = 0x13;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c58 + 0x17e,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c58[0x17e],
                                                                   L"ForceWhiteSkyLight",0x26);
                                                        cVar1 = FUN_142857ea0(param_1,0xbf,
                                                                              local_c58 + 0x17e);
                                                        if (local_c58[0x17e] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c58[0x180] = 0;
                                                          local_c58[0x181] = 0x14;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c58 + 0x180,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c58[0x180],
                                                                     L"QueryOnlyVisibility",0x28);
                                                          cVar1 = FUN_142857ea0(param_1,0xc0,
                                                                                local_c58 + 0x180);
                                                          if (local_c58[0x180] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c58[0x182] = 0;
                                                            local_c58[0x183] = 0x16;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c58 + 0x182,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c58[0x182],
                                                                       L"PhysicsOnlyVisibility",0x2c
                                                                      );
                                                            cVar1 = FUN_142857ea0(param_1,0xc1,
                                                                                  local_c58 + 0x182)
                                                            ;
                                                            if (local_c58[0x182] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c58[0x184] = 0;
                                                              local_c58[0x185] = 0x17;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c58 + 0x184,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c58[0x184],
                                                                         L"ForceAxisVisualization",
                                                                         0x2e);
                                                              cVar1 = FUN_142857ea0(param_1,0xc2,
                                                                                    local_c58 +
                                                                                    0x184);
                                                              if (local_c58[0x184] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c58[0x186] = 0;
                                                                local_c58[0x187] = 0x13;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c58 + 0x186,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c58[0x186],
                                                                           L"GbxBlockingVolumes",
                                                                           0x26);
                                                                cVar1 = FUN_142857ea0(param_1,0xc3,
                                                                                      local_c58 +
                                                                                      0x186);
                                                                if (local_c58[0x186] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c58[0x188] = 0;
                                                                  local_c58[0x189] = 7;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c58 + 0x188,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c58[0x188],
                                                                             L"Flight",0xe);
                                                                  FUN_142857ea0(param_1,0xc4,
                                                                                local_c58 + 0x188);
                                                                  if (local_c58[0x188] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14284d230 FUN_14284d230 body=126 status=ok
// SIG undefined FUN_14284d230(void)

undefined8 * FUN_14284d230(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_143fe15b8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 14284d2b0 FBuildPromotionImportWorkflowSettings body=251 status=ok
// SIG undefined FBuildPromotionImportWorkflowSettings(void)

undefined8 *
FBuildPromotionImportWorkflowSettings::FBuildPromotionImportWorkflowSettings(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
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
  return param_1;
}



// FUNCTION 14284d3b0 FUN_14284d3b0 body=892 status=ok
// SIG undefined FUN_14284d3b0(void)

undefined8 * FUN_14284d3b0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  longlong *plVar3;
  longlong lVar4;
  short *psVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *_Src;
  undefined8 uVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  longlong local_res18;
  ulonglong uVar15;
  
  *(undefined4 *)(param_1 + 1) = 4;
  uVar18 = 0;
  uVar17 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xc7efffffe0000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar14 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_1451c8e68;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = param_2;
  uVar8 = uVar14;
  if (*(uint **)(param_2 + 0xb8) != (uint *)0x0) {
    uVar8 = **(uint **)(param_2 + 0xb8);
  }
  *(uint *)(param_1 + 0x4a) = uVar8;
  uVar8 = uVar14;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar8 = *(uint *)(*(longlong *)(param_2 + 0xb8) + 4);
  }
  *(uint *)((longlong)param_1 + 0x254) = uVar8;
  uVar8 = uVar14;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar8 = *(uint *)(*(longlong *)(param_2 + 0xb8) + 8) & 0x7fffffff;
  }
  *(uint *)(param_1 + 0x4b) = uVar8;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar14 = *(uint *)(*(longlong *)(param_2 + 0xb8) + 0x18);
  }
  *(uint *)((longlong)param_1 + 0x25c) = uVar14;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar17 = *(undefined4 *)(*(longlong *)(param_2 + 0xb8) + 0xc);
  }
  *(undefined4 *)((longlong)param_1 + 0x264) = uVar17;
  puVar1 = param_1 + 0xe;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
  lVar4 = *(longlong *)(param_2 + 0xb8);
  iVar9 = *(int *)(lVar4 + 0x18);
  if (*(int *)((longlong)param_1 + 0x23c) < iVar9) {
    FUN_1428597e0(puVar1,iVar9);
    iVar9 = *(int *)(lVar4 + 0x18);
  }
  uVar15 = uVar18;
  if (0 < iVar9) {
    do {
      iVar9 = *(int *)(param_1 + 0x47);
      lVar16 = (longlong)iVar9;
      *(int *)(param_1 + 0x47) = iVar9 + 1;
      if (*(int *)((longlong)param_1 + 0x23c) < iVar9 + 1) {
        FUN_142859750(puVar1,iVar9);
      }
      puVar12 = (undefined8 *)param_1[0x46];
      if ((undefined8 *)param_1[0x46] == (undefined8 *)0x0) {
        puVar12 = puVar1;
      }
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      *(undefined4 *)(puVar12 + lVar16 * 4) = 0;
      *(undefined4 *)((longlong)puVar12 + lVar16 * 0x20 + 4) = 0;
      *(undefined4 *)(puVar12 + lVar16 * 4 + 1) = 0;
      puVar12[lVar16 * 4 + 2] = 0;
      puVar12[lVar16 * 4 + 3] = 0;
      iVar9 = *(int *)(lVar4 + 0x18);
    } while ((int)uVar14 < iVar9);
  }
  if (-1 < iVar9 + -1) {
    local_res18 = 0;
    do {
      psVar5 = *(short **)(*(longlong *)(lVar4 + 0x10) + uVar18 * 8);
      psVar2 = psVar5 + 4;
      iVar10 = FUntypedBulkData::GetBulkDataSize(psVar2);
      if (0 < iVar10) {
        uVar14 = FUntypedBulkData::GetBulkDataSize(psVar2);
        _Src = (void *)FUN_14171efb0(psVar2);
        puVar12 = (undefined8 *)param_1[0x46];
        if ((undefined8 *)param_1[0x46] == (undefined8 *)0x0) {
          puVar12 = puVar1;
        }
        piVar13 = (int *)((longlong)puVar12 + local_res18);
        plVar3 = (longlong *)(piVar13 + 4);
        *piVar13 = (int)*psVar5;
        piVar13[1] = (int)psVar5[1];
        piVar13[2] = (int)psVar5[2];
        uVar8 = piVar13[6];
        if ((int)uVar8 < (int)uVar14) {
          piVar13[6] = uVar14;
          if (piVar13[7] < (int)uVar14) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar3);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(int)uVar8 + *plVar3),0,(longlong)(int)(uVar14 - uVar8));
        }
        else if (((int)uVar14 < (int)uVar8) && (uVar14 != uVar8)) {
          piVar13[6] = uVar14;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar3);
        }
        _guard_xfg_dispatch_icall_nop((void *)*plVar3,_Src,(ulonglong)uVar14);
        FUntypedBulkData::Unlock(psVar2);
      }
      local_res18 = local_res18 + 0x20;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 <= (longlong)(iVar9 + -1));
  }
  uVar11 = FUN_14240d6a0(0);
  uVar11 = AAIController::GetPerceptionComponent(uVar11);
  uVar11 = FArchive::operator<<(uVar11);
  bVar6 = UTextureLODSettings::GetSamplerFilter(uVar11,param_2);
  *(uint *)(param_1 + 0x4d) = (uint)bVar6;
  if (((*(byte *)(param_1[0x49] + 0x4b) & 1) == 0) && (*(char *)(param_1[0x49] + 0x48) != '\x06')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x65) = uVar7;
  *(byte *)((longlong)param_1 + 0x66) = *(byte *)(param_2 + 0x4b) & 1;
  return param_1;
}



// FUNCTION 14284d730 FUN_14284d730 body=218 status=ok
// SIG undefined FUN_14284d730(void)

longlong * FUN_14284d730(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1464c9c14;
  if (param_3 != 0) {
    lVar4 = ULevel::GetWorld(param_3);
    if (lVar4 != 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar4 + 0x1c0);
    }
    if (((param_4 != 0) && (0 < *(int *)(param_3 + 0x138))) &&
       (*(int *)(param_3 + 0x138) == *(int *)(param_4 + 8) - *(int *)(param_4 + 0x34))) {
      bVar1 = *(byte *)(param_3 + 0x204);
      *param_1 = param_4;
      *(byte *)(param_1 + 1) = ~(bVar1 >> 2) & 1;
      iVar2 = *(int *)(param_3 + 0x138);
      lVar4 = param_1[4];
      iVar3 = (int)lVar4 + iVar2;
      *(int *)(param_1 + 4) = iVar3;
      if (*(int *)((longlong)param_1 + 0x24) < iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 3);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(int)lVar4 * 0x10 + param_1[3]),0,(longlong)iVar2 << 4);
    }
  }
  return param_1;
}



// FUNCTION 14284d810 FUN_14284d810 body=92 status=ok
// SIG undefined FUN_14284d810(void)

undefined8 * FUN_14284d810(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1464c9c14;
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0x120);
    if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(param_3), lVar1 == 0)) {
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar1 + 0x1c0);
  }
  return param_1;
}



// FUNCTION 14284d870 FUN_14284d870 body=497 status=ok
// SIG undefined FUN_14284d870(void)

undefined8 * FUN_14284d870(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  lVar9 = 6;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xc7efffffe0000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451c8ec8;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[99] = param_2;
  puVar4 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 100) = 0;
  uVar7 = uVar11;
  puVar8 = puVar4;
  do {
    do {
      puVar4[-1] = 0;
      uVar6 = (int)uVar7 + 0xe;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4 = puVar4 + 0xe;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < 0xe);
    puVar4 = puVar8 + 0xe;
    lVar9 = lVar9 + -1;
    uVar7 = uVar11;
    puVar8 = puVar4;
  } while (lVar9 != 0);
  lVar9 = *(longlong *)(param_2 + 0xb8);
  iVar2 = *(int *)(lVar9 + 0x18) + -1;
  if (-1 < iVar2) {
    do {
      uVar6 = 0;
      lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + uVar11 * 8) + 8;
      iVar3 = FUntypedBulkData::GetBulkDataSize(lVar10);
      if (0 < iVar3) {
        iVar3 = FUntypedBulkData::GetBulkDataSize(lVar10);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar3;
        iVar3 = FUntypedBulkData::GetBulkDataSize(lVar10);
        uVar1 = iVar3 / 6;
        lVar5 = FUN_14171efb0(lVar10,1);
        puVar4 = param_1 + uVar11 + 0xf;
        do {
          _Dst = (void *)FMemory::Malloc((ulonglong)uVar1,0);
          *puVar4 = _Dst;
          _guard_xfg_dispatch_icall_nop
                    (_Dst,(void *)((ulonglong)(uVar6 * uVar1) + lVar5),(ulonglong)uVar1);
          uVar6 = uVar6 + 1;
          puVar4 = puVar4 + 0xe;
        } while (uVar6 < 6);
        FUntypedBulkData::Unlock(lVar10);
      }
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 <= (longlong)iVar2);
  }
  return param_1;
}



// FUNCTION 14284da70 FUN_14284da70 body=24 status=ok
// SIG undefined FUN_14284da70(void)

undefined4 * FUN_14284da70(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  return param_1;
}



// FUNCTION 14284da90 FTextureSource body=42 status=ok
// SIG undefined FTextureSource(void)

undefined8 * FTextureSource::FTextureSource(undefined8 *param_1)

{
  FUntypedBulkData::FUntypedBulkData();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b90;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}


