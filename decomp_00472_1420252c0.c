// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1420252c0 FUN_1420252c0 body=97 status=ok
// SIG undefined FUN_1420252c0(void)

undefined8 * FUN_1420252c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f710f0;
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



// FUNCTION 142025330 FUN_142025330 body=97 status=ok
// SIG undefined FUN_142025330(void)

undefined8 * FUN_142025330(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f71100;
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



// FUNCTION 1420253a0 FUN_1420253a0 body=97 status=ok
// SIG undefined FUN_1420253a0(void)

undefined8 * FUN_1420253a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f71700;
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



// FUNCTION 142025410 FUN_142025410 body=97 status=ok
// SIG undefined FUN_142025410(void)

undefined8 * FUN_142025410(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f716f0;
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



// FUNCTION 142025480 FUN_142025480 body=99 status=ok
// SIG undefined FUN_142025480(void)

RefCountImplCore * FUN_142025480(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1420254f0 FUN_1420254f0 body=99 status=ok
// SIG undefined FUN_1420254f0(void)

RefCountImplCore * FUN_1420254f0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f70d18;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142025560 FUN_142025560 body=160 status=ok
// SIG undefined FUN_142025560(void)

RefCountImplCore * FUN_142025560(RefCountImplCore *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142025600 FUN_142025600 body=52 status=ok
// SIG undefined FUN_142025600(void)

undefined8 FUN_142025600(undefined8 param_1,ulonglong param_2)

{
  FUN_14201c030();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142025640 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFileIoStore::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14201c0a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 142025680 FUN_142025680 body=71 status=ok
// SIG undefined FUN_142025680(void)

undefined8 * FUN_142025680(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144f70e20;
  Scaleform::GFx::System::Destroy();
  Scaleform::System::Destroy();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1420256d0 FUN_1420256d0 body=116 status=ok
// SIG undefined FUN_1420256d0(void)

RefCountImplCore * FUN_1420256d0(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142025750 FUN_142025750 body=361 status=ok
// SIG undefined FUN_142025750(void)

longlong FUN_142025750(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1f8);
  FUN_1432ccda0(param_1 + 0x178);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xe0,0);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_14201bd50(param_1 + 0x60);
  FUN_14201bc80(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
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
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x218);
    }
  }
  return param_1;
}



// FUNCTION 1420258c0 FUN_1420258c0 body=78 status=ok
// SIG undefined FUN_1420258c0(void)

undefined8 FUN_1420258c0(undefined8 param_1,ulonglong param_2)

{
  FUN_14201c4e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 142025910 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FAkAudioEventEvaluationData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FAkAudioEventEvaluationData();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142025950 FUN_142025950 body=99 status=ok
// SIG undefined FUN_142025950(void)

RefCountImplCore * FUN_142025950(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f70d18;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420259c0 FUN_1420259c0 body=90 status=ok
// SIG undefined FUN_1420259c0(void)

undefined8 * FUN_1420259c0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144f712d0;
  if ((RefCountImpl *)param_1[1] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[1]);
  }
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a58;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142025a20 FUN_142025a20 body=154 status=ok
// SIG undefined FUN_142025a20(void)

longlong FUN_142025a20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if ((*(uint *)(param_1 + 0x50) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))
              (*(longlong **)(param_1 + 0x48),param_1 + 0x38,*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(uint *)(param_1 + 0x20) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
              (*(longlong **)(param_1 + 0x18),param_1 + 8,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142025ac0 FUN_142025ac0 body=52 status=ok
// SIG undefined FUN_142025ac0(void)

undefined8 FUN_142025ac0(undefined8 param_1,ulonglong param_2)

{
  FUN_14201c750();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142025b00 FUN_142025b00 body=126 status=ok
// SIG undefined FUN_142025b00(void)

RefCountImplCore * FUN_142025b00(RefCountImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f70d38;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142025b80 FUN_142025b80 body=99 status=ok
// SIG undefined FUN_142025b80(void)

RefCountImplCore * FUN_142025b80(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f70d28;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142025bf0 FUN_142025bf0 body=89 status=ok
// SIG undefined FUN_142025bf0(void)

undefined8 FUN_142025bf0(undefined8 param_1,ulonglong param_2)

{
  Scaleform::Log::~Log();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142025c50 FUN_142025c50 body=189 status=ok
// SIG undefined FUN_142025c50(void)

RefCountImplCore * FUN_142025c50(RefCountImplCore *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_144f70df0;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x10),0,0);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_144f70d28;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142025d10 FUN_142025d10 body=89 status=ok
// SIG undefined FUN_142025d10(void)

undefined8 FUN_142025d10(undefined8 param_1,ulonglong param_2)

{
  FUN_1432caa70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142025d70 FUN_142025d70 body=109 status=ok
// SIG undefined FUN_142025d70(void)

RefCountImplCore * FUN_142025d70(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x288) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x288));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 142025de0 FUN_142025de0 body=43 status=ok
// SIG undefined FUN_142025de0(void)

undefined8 * FUN_142025de0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f70d00;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142025e10 FUN_142025e10 body=43 status=ok
// SIG undefined FUN_142025e10(void)

undefined8 * FUN_142025e10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f70d00;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142025e40 FUN_142025e40 body=99 status=ok
// SIG undefined FUN_142025e40(void)

RefCountImplCore * FUN_142025e40(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142025eb0 FUN_142025eb0 body=99 status=ok
// SIG undefined FUN_142025eb0(void)

undefined8 * FUN_142025eb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f70d58;
  param_1[0xd] = &PTR_LAB_144f70db0;
  param_1[0xe] = &PTR_LAB_144f70de0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x16);
  FUN_142062bb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142025f20 FUN_142025f20 body=89 status=ok
// SIG undefined FUN_142025f20(void)

undefined8 FUN_142025f20(undefined8 param_1,ulonglong param_2)

{
  FUN_1432caa70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142025f80 FUN_142025f80 body=43 status=ok
// SIG undefined FUN_142025f80(void)

undefined8 * FUN_142025f80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f70a58;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142025fb0 FUN_142025fb0 body=59 status=ok
// SIG undefined FUN_142025fb0(void)

void FUN_142025fb0(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  BOOL BVar1;
  
  while( true ) {
    BVar1 = TryEnterCriticalSection(param_1);
    if (BVar1 != 0) break;
    (**(code **)(*param_2 + 0x48))(param_2);
    FUN_1416b1810(0);
  }
  return;
}



// FUNCTION 142025ff0 FUN_142025ff0 body=513 status=ok
// SIG undefined FUN_142025ff0(void)

longlong * FUN_142025ff0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *local_48;
  int local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if ((cVar5 != '\0') &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x4a0))(plVar6,&local_48,param_3);
    plVar7 = local_48 + (longlong)local_40 * 2;
    for (plVar6 = local_48; plVar3 = local_48, iVar8 = local_40, plVar6 != plVar7;
        plVar6 = plVar6 + 2) {
      local_28 = *param_4;
      local_20 = param_4[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_142026790(param_1,&local_38,plVar6,&local_28,0);
      plVar3 = local_30;
      if (local_38 != 0) {
        *param_2 = local_38;
        param_2[1] = (longlong)local_30;
        plVar6 = local_48;
        for (iVar8 = local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
        goto LAB_142026151;
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_142026151:
  plVar6 = (longlong *)param_4[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142026200 FUN_142026200 body=1041 status=ok
// SIG undefined FUN_142026200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142026200(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  ulonglong local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  code *local_e8;
  undefined1 local_d8 [32];
  ulonglong local_b8;
  int local_a8;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_118 = (longlong *)0x0;
  local_110 = 0;
  FUN_141594550(param_3,&local_118,&DAT_144f66ccc,1);
  local_120 = (longlong *)param_4[1];
  local_128 = *param_4;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_120 + 1) = (int)local_120[1] + 1;
    UNLOCK();
  }
  uVar7 = (ulonglong)(int)local_110;
  plVar11 = local_118 + uVar7 * 2;
  if (local_118 != plVar11) {
    plVar9 = local_118;
    do {
      plVar5 = local_120;
      FString::FString(local_f8,plVar9);
      local_68 = (longlong *)0x0;
      local_58 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_88);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_CopyToEmptyStorage_144f71988;
        FString::FString(puVar3 + 1,local_f8);
      }
      local_98 = FUN_14202bff0;
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
      if (local_128 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
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
        plVar11 = local_120;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar5 + 1;
          lVar2 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_120 + 8))(local_120,1);
            }
          }
        }
        plVar11 = local_118;
        for (iVar8 = (int)local_110; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_118 != (longlong *)0x0) {
          FMemory::Free(local_118);
        }
        plVar11 = (longlong *)param_4[1];
        if (plVar11 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar9 = plVar11 + 1;
        lVar2 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar2 != 1) {
          return param_2;
        }
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return param_2;
        }
        (**(code **)(*plVar11 + 8))(plVar11,1);
        return param_2;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        plVar5 = local_120;
      }
      local_b8 = 0;
      local_a8 = 0;
      if (local_58 == 0) {
LAB_14202635a:
        local_e8 = FUN_1407c3030;
      }
      else {
        plVar4 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar4 = local_68;
        }
        if (plVar4 == (longlong *)0x0) goto LAB_14202635a;
        plVar4 = (longlong *)(**(code **)*plVar4)(plVar4,local_d8);
        (**(code **)(*plVar4 + 8))(plVar4);
        local_e8 = local_98;
      }
      local_100 = (longlong *)0x0;
      if (local_a8 != 0) {
        puVar10 = local_d8;
        if (local_b8 != 0) {
          puVar10 = (undefined1 *)0x0;
        }
        plVar4 = (longlong *)((ulonglong)puVar10 | local_b8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
      plVar4 = local_120;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar5 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      local_128 = 0;
      local_108 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_120,&local_100);
      plVar5 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_100 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
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
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar11);
    uVar7 = local_110 & 0xffffffff;
  }
  *param_2 = local_128;
  param_2[1] = (longlong)local_120;
  uVar6 = (uint)uVar7;
  plVar11 = local_118;
  while (uVar6 != 0) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  plVar11 = (longlong *)param_4[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    lVar2 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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



// FUNCTION 142026620 FUN_142026620 body=359 status=ok
// SIG undefined FUN_142026620(void)

undefined8 *
FUN_142026620(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong local_48 [6];
  
  lVar4 = *param_4;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if ((cVar5 != '\0') &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70), plVar6 != (longlong *)0x0)) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    cVar5 = (**(code **)(*plVar6 + 0x490))(plVar6,param_3,local_48,lVar4 + 0x28);
    if (cVar5 != '\0') {
      FUN_1420390f0(param_1,param_2,local_48 + 2);
      if (local_48[4] != 0) {
        FMemory::Free();
      }
      if (local_48[2] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
      return param_2;
    }
    if (local_48[4] != 0) {
      FMemory::Free();
    }
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)param_4[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142026790 FUN_142026790 body=800 status=ok
// SIG undefined FUN_142026790(void)

longlong * FUN_142026790(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  void *pvVar11;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  longlong *local_40;
  
  local_60 = *(int *)(*param_4 + 0x30);
  lVar10 = (longlong)local_60;
  pvVar9 = *(void **)(*param_4 + 0x28);
  local_68 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_68,(2 - (uint)(local_60 != 0)) + local_60,0);
  pvVar11 = local_68;
  _guard_xfg_dispatch_icall_nop(local_68,pvVar9,lVar10 * 2);
  iVar8 = local_60;
  lVar10 = (longlong)local_60;
  local_60 = (2 - (uint)(local_60 != 0)) + local_60;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar8);
    pvVar11 = local_68;
  }
  pvVar9 = (void *)0x0;
  lVar10 = (lVar10 - (ulonglong)(iVar8 != 0)) * 2;
  *(undefined2 *)(lVar10 + (longlong)pvVar11) = 0x2e;
  *(undefined2 *)(lVar10 + 2 + (longlong)pvVar11) = 0;
  local_50 = *(int *)(param_3 + 1);
  lVar10 = (longlong)local_50;
  if (local_60 < 2) {
    local_58 = (void *)0x0;
    pvVar3 = (void *)*param_3;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50);
      pvVar9 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,pvVar3,lVar10 * 2);
    }
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
  }
  else {
    iVar8 = local_50 + -1;
    if (local_50 == 0) {
      iVar8 = 0;
    }
    if ((local_60 != 0) || (iVar7 = 1, iVar8 == 0)) {
      iVar7 = 0;
    }
    local_78 = pvVar11;
    local_70 = local_60;
    local_6c = local_5c;
    if (local_5c < iVar7 + iVar8 + local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    }
    iVar7 = local_70;
    pvVar11 = (void *)*param_3;
    pvVar9 = local_78;
    local_58 = local_78;
    local_50 = local_70;
    local_4c = local_6c;
    if (iVar8 != 0) {
      lVar10 = (longlong)local_70;
      local_70 = iVar8 + (uint)(local_70 == 0) + local_70;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar7,0);
      }
      iVar5 = local_70;
      pvVar9 = local_78;
      pvVar3 = (void *)((longlong)local_78 + (lVar10 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,pvVar11,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar3) = 0;
      local_58 = pvVar9;
      local_50 = iVar5;
      local_4c = local_6c;
    }
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if (cVar6 != '\0') {
    FWeakObjectPtr::Get(param_1 + 0x70);
  }
  FUN_1420390f0(param_1,&local_48,&local_58);
  plVar4 = local_40;
  if (local_48 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      pvVar9 = local_58;
      if ((int)lVar10 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        pvVar9 = local_58;
        if (iVar8 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          pvVar9 = local_58;
        }
      }
    }
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    plVar4 = (longlong *)param_4[1];
  }
  else {
    *param_2 = local_48;
    param_2[1] = (longlong)local_40;
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    plVar4 = (longlong *)param_4[1];
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142026ab0 FUN_142026ab0 body=2159 status=ok
// SIG undefined FUN_142026ab0(void)

longlong * FUN_142026ab0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if ((cVar5 != '\0') &&
     (plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70), plVar7 != (longlong *)0x0)) {
    uVar6 = (**(code **)(*plVar7 + 0x498))(plVar7);
    switch(uVar6) {
    case 2:
      local_88 = *param_4;
      local_80 = param_4[1];
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      FUN_142026620(param_1,&local_148,param_3,&local_88,7);
      plVar7 = local_140;
      if (local_148 != 0) {
        *param_2 = local_148;
        param_2[1] = (longlong)local_140;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
    case 4:
      local_78 = *param_4;
      local_70 = param_4[1];
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      FUN_142026790(param_1,&local_138,param_3,&local_78,7);
      plVar7 = local_130;
      if (local_138 != 0) {
        *param_2 = local_138;
        param_2[1] = (longlong)local_130;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_130 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
    case 1:
      local_68 = *param_4;
      local_60 = param_4[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_142026620(param_1,&local_128,param_3,&local_68,7);
      plVar7 = local_120;
      if (local_128 != 0) {
        *param_2 = local_128;
        param_2[1] = (longlong)local_120;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
    case 0:
      local_58 = *param_4;
      local_50 = param_4[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      FUN_142025ff0(param_1,&local_118,param_3,&local_58,7);
      plVar7 = local_110;
      if (local_118 != 0) {
        *param_2 = local_118;
        param_2[1] = (longlong)local_110;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
    case 3:
      local_48 = *param_4;
      local_40 = param_4[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_142026790(param_1,&local_108,param_3,&local_48,7);
      plVar7 = local_100;
      if (local_108 != 0) {
        *param_2 = local_108;
        param_2[1] = (longlong)local_100;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_100 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
    case 5:
      local_38 = *param_4;
      local_30 = param_4[1];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_142027340(param_1,&local_f8,param_3,&local_38,7);
      plVar7 = local_f0;
      if (local_f8 != 0) {
        *param_2 = local_f8;
        param_2[1] = (longlong)local_f0;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      break;
    case 6:
      local_28 = *param_4;
      local_20 = param_4[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_142026200(param_1,&local_e8,param_3,&local_28,7);
      plVar7 = local_e0;
      if (local_e8 != 0) {
        *param_2 = local_e8;
        param_2[1] = (longlong)local_e0;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      break;
    case 7:
      local_d8 = *param_4;
      local_d0 = param_4[1];
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      FUN_142026790(param_1,local_168,param_3,&local_d8,3);
      local_c8 = *param_4;
      local_c0 = param_4[1];
      if (local_c0 != 0) {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
      FUN_142026620(param_1,local_178,param_3,&local_c8,3);
      local_b8 = *param_4;
      local_b0 = param_4[1];
      if (local_b0 != 0) {
        LOCK();
        *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
        UNLOCK();
      }
      FUN_142025ff0(param_1,local_188,param_3,&local_b8,3);
      local_a8 = *param_4;
      local_a0 = param_4[1];
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      FUN_142026200(param_1,local_198,param_3,&local_a8,3);
      local_98 = *param_4;
      local_90 = param_4[1];
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      FUN_142027340(param_1,&local_158,param_3,&local_98,7);
      plVar1 = local_150;
      plVar7 = local_190;
      if (local_158 != 0) {
        *param_2 = local_158;
        param_2[1] = (longlong)local_150;
        if (local_190 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_190 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_190)(local_190);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_190 + 8))(local_190,1);
            }
          }
        }
        plVar7 = local_180;
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_180 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_180)(local_180);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_180 + 8))(local_180,1);
            }
          }
        }
        plVar7 = local_170;
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_170 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_170 + 8))(local_170,1);
            }
          }
        }
        plVar7 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_160 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return param_2;
      }
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_150 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_150 + 8))(local_150,1);
          }
        }
      }
      plVar7 = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_190 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      plVar7 = local_180;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_180 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      plVar7 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_170 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_170 + 8))(local_170,1);
          }
        }
      }
      plVar7 = local_160;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_160 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      break;
    default:
      uVar8 = UEnum::GetPrivateStaticClass();
      FUN_141799410(uVar8,0xffffffffffffffff,L"EGbxGFxMovieGetChildStrategy",1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  plVar7 = (longlong *)param_4[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  return param_2;
}



// FUNCTION 142027340 FUN_142027340 body=973 status=ok
// SIG undefined FUN_142027340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142027340(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_4e8 [32];
  undefined1 *local_4c8;
  undefined1 local_4b8 [16];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  longlong *local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined1 local_478 [8];
  longlong *local_470;
  undefined1 local_468 [1024];
  undefined1 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if (cVar5 != '\0') {
    FWeakObjectPtr::Get(param_1 + 0x70);
  }
  local_498 = (longlong *)0x0;
  local_490 = 0;
  FUN_141594550(param_3,&local_498,&DAT_144f666a4,1);
  local_4a8 = *param_4;
  uStack_4a0 = (longlong *)param_4[1];
  if (uStack_4a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_4a0 + 1) = (int)uStack_4a0[1] + 1;
    UNLOCK();
  }
  plVar12 = local_498 + (longlong)(int)local_490 * 2;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  plVar9 = local_498;
  puVar10 = (undefined1 *)0x0;
  if (local_498 != plVar12) {
    do {
      if (local_4a8 == 0) {
        *param_2 = 0;
        puVar10 = local_468;
        if (local_68 != (undefined1 *)0x0) {
          puVar10 = local_68;
        }
        param_2[1] = 0;
        if ((int)local_60 != 0) {
          plVar9 = (longlong *)(puVar10 + 8);
          iVar7 = (int)local_60;
          do {
            plVar12 = (longlong *)*plVar9;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar12 + 1;
              lVar4 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
            plVar9 = plVar9 + 2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (local_68 != (undefined1 *)0x0) {
          FMemory::Free();
        }
        plVar9 = uStack_4a0;
        if (uStack_4a0 != (longlong *)0x0) {
          LOCK();
          plVar12 = uStack_4a0 + 1;
          lVar4 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*uStack_4a0)(uStack_4a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*uStack_4a0 + 8))(uStack_4a0,1);
            }
          }
        }
        plVar9 = local_498;
        for (iVar7 = (int)local_490; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_498 != (longlong *)0x0) {
          FMemory::Free(local_498);
        }
        plVar9 = (longlong *)param_4[1];
        if (plVar9 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar12 = plVar9 + 1;
        lVar4 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return param_2;
        }
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 != 1) {
          return param_2;
        }
        (**(code **)(*plVar9 + 8))(plVar9,1);
        return param_2;
      }
      local_488 = (undefined4)local_4a8;
      uStack_484 = local_4a8._4_4_;
      uStack_480 = (undefined4)uStack_4a0;
      uStack_47c = uStack_4a0._4_4_;
      if (uStack_4a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_4a0 + 1) = (int)uStack_4a0[1] + 1;
        UNLOCK();
      }
      local_4c8 = local_468;
      plVar6 = (longlong *)FUN_14201fb90(local_4b8,local_478,&local_488,plVar9);
      if (&local_4a8 != plVar6) {
        local_4a8 = *plVar6;
        *plVar6 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_4a0,plVar6 + 1);
      }
      plVar6 = local_470;
      if (local_470 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_470 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_470)(local_470);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar12);
    puVar10 = (undefined1 *)(local_60 & 0xffffffff);
  }
  *param_2 = local_4a8;
  puVar8 = local_468;
  if (local_68 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)0x0;
  }
  param_2[1] = (longlong)uStack_4a0;
  if ((int)puVar10 != 0) {
    plVar9 = (longlong *)(((ulonglong)puVar8 | (ulonglong)local_68) + 8);
    do {
      plVar12 = (longlong *)*plVar9;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar9 = plVar9 + 2;
      uVar11 = (int)puVar10 - 1;
      puVar10 = (undefined1 *)(ulonglong)uVar11;
    } while (uVar11 != 0);
  }
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  plVar9 = local_498;
  for (iVar7 = (int)local_490; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_498 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar9 = (longlong *)param_4[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar4 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142027710 FUN_142027710 body=1555 status=ok
// SIG undefined FUN_142027710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142027710(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  int *piVar2;
  void *_Dst;
  undefined1 uVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong **pplVar10;
  int iVar11;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  short *psVar19;
  int iVar20;
  undefined1 auStack_288 [32];
  longlong local_268;
  undefined8 local_260;
  undefined1 local_258;
  longlong *local_248;
  int local_240;
  int local_23c;
  longlong *local_238;
  int local_230;
  int local_22c;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  int local_208;
  int local_204;
  undefined8 local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  short *local_1e8;
  int local_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [80];
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  longlong *plVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  plVar12 = (longlong *)0x0;
  iVar11 = 0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar6 = *pcVar1;
  if (cVar6 == '\0') {
    *pcVar1 = '\0';
    cVar6 = '\0';
  }
  UNLOCK();
  if (cVar6 < '\x06') {
    local_228 = param_1;
    local_1f0 = param_2;
    cVar6 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar6 == '\0') {
      puVar7 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_1c8);
      plVar15 = (longlong *)puVar7[1];
      uVar8 = *puVar7;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
        UNLOCK();
      }
      plVar18 = (longlong *)param_2[1];
      lVar14 = *param_2;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      local_188 = 0;
      local_178 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x30,local_1a8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_144f71b70;
        puVar7[1] = local_228;
        puVar7[2] = lVar14;
        puVar7[3] = plVar18;
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
          UNLOCK();
        }
        puVar7[4] = uVar8;
        puVar7[5] = plVar15;
        plVar15 = plVar12;
      }
      local_1b8[0] = &LAB_14202c0f0;
      if (*(int *)(*param_2 + 0x20) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = *(undefined2 **)(*param_2 + 0x18);
      }
      FString::PrintfImpl(&local_1e8,L"FGFxObject::AddChild(%s)",puVar17);
      local_200 = 0;
      psVar19 = &DAT_143f3eda8;
      if (local_1e0 != 0) {
        psVar19 = local_1e8;
      }
      local_1f8 = 0;
      if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
        lVar14 = -1;
        do {
          lVar14 = lVar14 + 1;
        } while (psVar19[lVar14] != 0);
        uVar16 = (int)lVar14 + 1;
        local_1f8 = (ulonglong)uVar16;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
        }
        FGenericPlatformString::Memcpy(local_200,psVar19,(longlong)(int)uVar16 * 2);
      }
      FUN_1410b2c00(local_118,&local_200,local_1b8);
      if (local_1e8 != (short *)0x0) {
        FMemory::Free();
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar18 + 1;
        lVar14 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_1c0 + 1;
        lVar14 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)local_1c0 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
      uVar8 = FUN_1410ca7e0(local_118,local_168);
      FUN_1420326d0(local_228,uVar8);
      FUN_140d1b3a0(local_118);
      cVar6 = *(char *)(local_58 + 0x58);
      while (cVar6 == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))
                  (*(longlong **)(local_58 + 0x50),0x5d638865,0);
        cVar6 = *(char *)(local_58 + 0x58);
      }
      uVar3 = *(undefined1 *)(local_58 + 0x60);
      FUN_140ce1dc0(local_118);
      return uVar3;
    }
    uVar16 = *(uint *)(param_1 + 0xa0) & 0x8f;
    if (uVar16 - 8 < 4) {
      local_258 = uVar16 == 10;
      local_268 = *param_2 + 0x88;
      local_260 = 1;
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),0,"addChild"
                        );
      if (cVar6 != '\0') {
        puVar7 = (undefined8 *)
                 TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_1d8);
        local_218 = (longlong *)puVar7[1];
        local_220 = *puVar7;
        if (local_218 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_218 + 1) = (int)local_218[1] + 1;
          UNLOCK();
        }
        lVar14 = *param_2;
        puVar7 = (undefined8 *)(lVar14 + 0xd0);
        if (puVar7 != &local_220) {
          *puVar7 = local_220;
          local_220 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar14 + 0xd8,&local_218);
        }
        plVar15 = local_218;
        if (local_218 != (longlong *)0x0) {
          LOCK();
          plVar18 = local_218 + 1;
          lVar14 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_218)(local_218);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            iVar20 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*local_218 + 8))(local_218,1);
            }
          }
        }
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1d0 + 1;
          lVar14 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar2 = (int *)((longlong)local_1d0 + 0xc);
            iVar20 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*local_1d0 + 8))(local_1d0,1);
            }
          }
        }
        TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
        ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                  (param_1 + 0xe0,param_2);
        local_240 = *(int *)(param_1 + 0x30);
        lVar13 = (longlong)local_240;
        lVar14 = *param_2;
        pvVar4 = *(void **)(param_1 + 0x28);
        local_248 = (longlong *)0x0;
        local_228 = lVar14;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_248,(2 - (uint)(local_240 != 0)) + local_240,0);
        plVar15 = local_248;
        _guard_xfg_dispatch_icall_nop(local_248,pvVar4,lVar13 * 2);
        iVar20 = local_240;
        lVar13 = (longlong)local_240;
        local_240 = (2 - (uint)(local_240 != 0)) + local_240;
        if (local_23c < local_240) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,iVar20);
          plVar15 = local_248;
        }
        lVar13 = lVar13 - (ulonglong)(iVar20 != 0);
        *(undefined2 *)((longlong)plVar15 + lVar13 * 2) = 0x2e;
        *(undefined2 *)((longlong)plVar15 + lVar13 * 2 + 2) = 0;
        iVar20 = *(int *)(lVar14 + 0x20);
        if (local_240 < 2) {
          pvVar4 = *(void **)(lVar14 + 0x18);
          local_210 = (longlong *)0x0;
          local_208 = iVar20;
          if (iVar20 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_210,iVar20,0);
            plVar12 = local_210;
            _guard_xfg_dispatch_icall_nop(local_210,pvVar4,(longlong)iVar20 * 2);
            iVar20 = local_208;
            iVar11 = local_204;
          }
        }
        else {
          iVar9 = iVar20 + -1;
          if (iVar20 == 0) {
            iVar9 = iVar11;
          }
          if ((local_240 != 0) || (plVar18 = (longlong *)0x1, iVar9 == 0)) {
            plVar18 = plVar12;
          }
          local_248 = (longlong *)0x0;
          local_238 = plVar15;
          local_230 = local_240;
          local_22c = local_23c;
          if (local_23c < local_240 + (int)plVar18 + iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_238);
          }
          iVar5 = local_230;
          pvVar4 = *(void **)(local_228 + 0x18);
          plVar15 = plVar12;
          plVar12 = local_238;
          iVar20 = local_230;
          iVar11 = local_22c;
          if (iVar9 != 0) {
            lVar14 = (longlong)local_230;
            local_230 = local_230 + (uint)(local_230 == 0) + iVar9;
            if (local_22c < local_230) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,iVar5);
            }
            iVar20 = local_230;
            plVar12 = local_238;
            _Dst = (void *)((longlong)local_238 + (lVar14 - (ulonglong)(iVar5 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,pvVar4,(longlong)iVar9 * 2);
            *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
            plVar15 = local_248;
            iVar11 = local_22c;
          }
        }
        lVar14 = *local_1f0;
        pplVar10 = (longlong **)(lVar14 + 0x28);
        if (pplVar10 == &local_210) {
          if (plVar12 != (longlong *)0x0) {
            FMemory::Free(plVar12);
          }
        }
        else {
          if (*pplVar10 != (longlong *)0x0) {
            FMemory::Free();
          }
          *pplVar10 = plVar12;
          *(int *)(lVar14 + 0x30) = iVar20;
          *(int *)(lVar14 + 0x34) = iVar11;
        }
        if (plVar15 != (longlong *)0x0) {
          FMemory::Free(plVar15);
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142027d30 FUN_142027d30 body=1604 status=ok
// SIG undefined FUN_142027d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142027d30(longlong param_1,longlong *param_2,undefined4 param_3)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  void *pvVar5;
  void *_Src;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  void **ppvVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  undefined1 **ppuVar14;
  short *psVar15;
  void *pvVar16;
  undefined1 uVar17;
  longlong lVar18;
  void *pvVar19;
  undefined2 *puVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined4 local_2a8 [2];
  void *local_2a0;
  longlong *local_298;
  void *local_290;
  int local_288;
  int local_284;
  void *local_280;
  int local_278;
  int local_274;
  void *local_270;
  int local_268;
  int local_264;
  undefined8 local_260;
  ulonglong local_258;
  longlong *local_250;
  longlong *plStack_248;
  longlong local_240;
  longlong *local_238;
  short *local_230;
  int local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined1 *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [80];
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  pvVar16 = (void *)0x0;
  iVar21 = 0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar7 = *pcVar1;
  if (cVar7 == '\0') {
    *pcVar1 = '\0';
    cVar7 = '\0';
  }
  UNLOCK();
  if ('\x05' < cVar7) {
    return 0;
  }
  local_2a8[0] = param_3;
  local_238 = param_2;
  cVar7 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
  if (cVar7 == '\0') {
    plStack_248 = (longlong *)local_2a8;
    local_188 = 0;
    local_178 = 0;
    local_250 = param_2;
    local_240 = param_1;
    puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_1a8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = local_250;
      puVar9[2] = plStack_248;
      *puVar9 = &PTR_FUN_143f4d0b0;
      puVar9[3] = local_240;
    }
    local_1b8[0] = &LAB_14202bf10;
    if (*(int *)(*param_2 + 0x20) == 0) {
      puVar20 = &DAT_143f3eda8;
    }
    else {
      puVar20 = *(undefined2 **)(*param_2 + 0x18);
    }
    FString::PrintfImpl(&local_230,L"FGFxObject::AddChildAtTask(%s, %d)",puVar20,local_2a8[0]);
    local_260 = 0;
    psVar15 = &DAT_143f3eda8;
    if (local_228 != 0) {
      psVar15 = local_230;
    }
    local_258 = 0;
    if ((psVar15 != (short *)0x0) && (*psVar15 != 0)) {
      lVar22 = -1;
      do {
        lVar22 = lVar22 + 1;
      } while (psVar15[lVar22] != 0);
      uVar12 = (int)lVar22 + 1;
      local_258 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
      }
      FGenericPlatformString::Memcpy(local_260,psVar15,(longlong)(int)uVar12 * 2);
    }
    FUN_1410b2c00(local_118,&local_260,local_1b8);
    if (local_230 != (short *)0x0) {
      FMemory::Free();
    }
    uVar11 = FUN_1410ca7e0(local_118,local_168);
    FUN_1420326d0(param_1,uVar11);
    FUN_140d1b3a0(local_118);
    cVar7 = *(char *)(local_58 + 0x58);
    while (cVar7 == '\0') {
      (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))
                (*(longlong **)(local_58 + 0x50),0x5d638865,0);
      cVar7 = *(char *)(local_58 + 0x58);
    }
    uVar17 = *(undefined1 *)(local_58 + 0x60);
    FUN_140ce1dc0(local_118);
    return uVar17;
  }
  lVar22 = *param_2;
  local_218 = 0xffffffffffffffff;
  uStack_210 = 0xffffffffffffffff;
  local_208 = (longlong *)0x0;
  local_200 = *(undefined4 *)(lVar22 + 0xa0);
  local_1f8 = *(undefined8 *)(lVar22 + 0xa8);
  local_1f0 = *(undefined8 *)(lVar22 + 0xb0);
  if ((*(uint *)(lVar22 + 0xa0) >> 6 & 1) != 0) {
    local_208 = *(longlong **)(lVar22 + 0x98);
    (**(code **)(*local_208 + 8))(local_208,&local_218);
  }
  lVar22 = 2;
  uVar12 = *(uint *)(param_1 + 0xa0) & 0x8f;
  local_1c8 = local_2a8[0];
  local_1e8 = 0xffffffffffffffff;
  uStack_1e0 = 0xffffffffffffffff;
  local_1d8 = 0;
  local_1d0 = 3;
  if (uVar12 - 8 < 4) {
    local_2b8 = uVar12 == 10;
    local_2c8 = &local_218;
    local_2c0 = 2;
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                      (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),0,"addChildAt"
                      );
    if (cVar7 != '\0') {
      puVar9 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,&local_250);
      local_298 = (longlong *)puVar9[1];
      local_2a0 = (void *)*puVar9;
      if (local_298 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_298 + 1) = (int)local_298[1] + 1;
        UNLOCK();
      }
      lVar18 = *param_2;
      ppvVar10 = (void **)(lVar18 + 0xd0);
      if (ppvVar10 != &local_2a0) {
        *ppvVar10 = local_2a0;
        local_2a0 = (void *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar18 + 0xd8,&local_298);
      }
      plVar4 = local_298;
      if (local_298 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_298 + 1;
        lVar18 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_298)(local_298);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_298 + 8))(local_298,1);
          }
        }
      }
      if (plStack_248 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_248 + 1;
        lVar18 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plStack_248)(plStack_248);
          LOCK();
          piVar3 = (int *)((longlong)plStack_248 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_248 + 8))(plStack_248,1);
          }
        }
      }
      TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
      ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                (param_1 + 0xe0,param_2);
      local_288 = *(int *)(param_1 + 0x30);
      lVar18 = (longlong)local_288;
      pvVar5 = (void *)*param_2;
      _Src = *(void **)(param_1 + 0x28);
      local_290 = (void *)0x0;
      local_2a0 = pvVar5;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_290,(2 - (uint)(local_288 != 0)) + local_288,0);
      pvVar19 = local_290;
      _guard_xfg_dispatch_icall_nop(local_290,_Src,lVar18 * 2);
      iVar8 = local_288;
      lVar18 = (longlong)local_288;
      local_288 = (2 - (uint)(local_288 != 0)) + local_288;
      if (local_284 < local_288) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,iVar8);
        pvVar19 = local_290;
      }
      lVar18 = lVar18 - (ulonglong)(iVar8 != 0);
      *(undefined2 *)((longlong)pvVar19 + lVar18 * 2) = 0x2e;
      *(undefined2 *)((longlong)pvVar19 + lVar18 * 2 + 2) = 0;
      iVar8 = *(int *)((longlong)pvVar5 + 0x20);
      if (local_288 < 2) {
        pvVar5 = *(void **)((longlong)pvVar5 + 0x18);
        local_270 = (void *)0x0;
        local_268 = iVar8;
        if (iVar8 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,iVar8,0);
          pvVar16 = local_270;
          _guard_xfg_dispatch_icall_nop(local_270,pvVar5,(longlong)iVar8 * 2);
          iVar21 = local_264;
          iVar8 = local_268;
        }
      }
      else {
        iVar13 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar13 = iVar21;
        }
        if ((local_288 != 0) || (iVar8 = 1, iVar13 == 0)) {
          iVar8 = iVar21;
        }
        local_290 = (void *)0x0;
        local_280 = pvVar19;
        local_278 = local_288;
        local_274 = local_284;
        if (local_284 < local_288 + iVar8 + iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_280);
        }
        iVar6 = local_278;
        local_2a0 = *(void **)((longlong)local_2a0 + 0x18);
        pvVar19 = pvVar16;
        pvVar16 = local_280;
        iVar21 = local_274;
        iVar8 = local_278;
        if (iVar13 != 0) {
          lVar18 = (longlong)local_278;
          local_278 = local_278 + (uint)(local_278 == 0) + iVar13;
          if (local_274 < local_278) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,iVar6);
          }
          iVar8 = local_278;
          pvVar16 = local_280;
          pvVar5 = (void *)((longlong)local_280 + (lVar18 - (ulonglong)(iVar6 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar5,local_2a0,(longlong)iVar13 * 2);
          *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar5) = 0;
          pvVar19 = local_290;
          iVar21 = local_274;
        }
      }
      lVar18 = *local_238;
      ppvVar10 = (void **)(lVar18 + 0x28);
      if (ppvVar10 == &local_270) {
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
      }
      else {
        if (*ppvVar10 != (void *)0x0) {
          FMemory::Free();
        }
        *ppvVar10 = pvVar16;
        *(int *)(lVar18 + 0x30) = iVar8;
        *(int *)(lVar18 + 0x34) = iVar21;
      }
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
      }
      uVar17 = 1;
      goto LAB_14202817b;
    }
  }
  uVar17 = 0;
LAB_14202817b:
  ppuVar14 = local_1b8;
  do {
    lVar22 = lVar22 + -1;
    if ((*(uint *)(ppuVar14 + -3) >> 6 & 1) != 0) {
      (**(code **)(*(longlong *)ppuVar14[-4] + 0x10))(ppuVar14[-4],ppuVar14 + -6,ppuVar14[-2]);
      ppuVar14[-4] = (undefined1 *)0x0;
    }
    *(undefined4 *)(ppuVar14 + -3) = 0;
    ppuVar14 = ppuVar14 + -6;
  } while (lVar22 != 0);
  return uVar17;
}



// FUNCTION 142028380 FUN_142028380 body=1421 status=ok
// SIG undefined FUN_142028380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142028380(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  
  lVar3 = FUN_141607f00();
  plVar7 = (longlong *)(lVar3 + 0xd8);
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar4[1] = (longlong)FUN_14204a0b0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  uVar9 = 0;
  uVar8 = uVar9;
  if (plVar4 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = *(int *)(lVar3 + 0xe0);
    uVar8 = *puVar6;
    *(int *)(lVar3 + 0xe0) = iVar1 + 1;
    if (*(int *)(lVar3 + 0xe4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 0x298) = uVar8;
  plVar7 = (longlong *)FUN_14244d3d0();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  uVar8 = uVar9;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar4[1] = (longlong)FUN_1420488f0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar3;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar7[1];
    uVar8 = *puVar6;
    *(int *)(plVar7 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar7 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 0x2a0) = uVar8;
  lVar3 = FUN_14244d3d0();
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  uVar8 = uVar9;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar7[1] = (longlong)FUN_1420488f0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar5;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x18,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar1 = *(int *)(lVar3 + 0x20);
    uVar8 = *puVar6;
    *(int *)(lVar3 + 0x20) = iVar1 + 1;
    if (*(int *)(lVar3 + 0x24) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x18,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x18));
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 0x2a8) = uVar8;
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  uVar8 = uVar9;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar7[1] = (longlong)FUN_142048800;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar3;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af070,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar1 = DAT_1464af078;
    lVar3 = (longlong)DAT_1464af078;
    uVar8 = *puVar6;
    DAT_1464af078 = DAT_1464af078 + 1;
    if (DAT_1464af07c < DAT_1464af078) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af070,iVar1);
    }
    puVar6 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af070);
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 0x260) = uVar8;
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  uVar8 = uVar9;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar7[1] = (longlong)FUN_1420489f0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar3;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af088,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar1 = DAT_1464af090;
    lVar3 = (longlong)DAT_1464af090;
    uVar8 = *puVar6;
    DAT_1464af090 = DAT_1464af090 + 1;
    if (DAT_1464af094 < DAT_1464af090) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af088,iVar1);
    }
    puVar6 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af088);
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 0x268) = uVar8;
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  uVar8 = uVar9;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar7[1] = (longlong)FUN_142048da0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar3;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af0a0,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar1 = DAT_1464af0a8;
    lVar3 = (longlong)DAT_1464af0a8;
    uVar8 = *puVar6;
    DAT_1464af0a8 = DAT_1464af0a8 + 1;
    if (DAT_1464af0ac < DAT_1464af0a8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af0a0,iVar1);
    }
    puVar6 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af0a0);
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 0x270) = uVar8;
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  uVar8 = uVar9;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar7[1] = (longlong)FUN_142048f10;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar3;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af0b8,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar1 = DAT_1464af0c0;
    lVar3 = (longlong)DAT_1464af0c0;
    uVar8 = *puVar6;
    DAT_1464af0c0 = DAT_1464af0c0 + 1;
    if (DAT_1464af0c4 < DAT_1464af0c0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af0b8,iVar1);
    }
    puVar6 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af0b8);
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 0x278) = uVar8;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar6 = (undefined8 *)operator_new(0x20,&local_38);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_144f71160;
    puVar6[1] = FUN_142049310;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[3] = uVar8;
    *puVar6 = &PTR_GetPoolName_144f711a8;
  }
  iVar1 = local_30;
  plVar7 = local_38;
  if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af118,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar2 = DAT_1464af120;
    lVar3 = (longlong)DAT_1464af120;
    uVar9 = *puVar6;
    DAT_1464af120 = DAT_1464af120 + 1;
    if (DAT_1464af124 < DAT_1464af120) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af118,iVar2);
    }
    local_38 = (longlong *)0x0;
    puVar6 = (undefined8 *)(lVar3 * 0x10 + DAT_1464af118);
    local_30 = 0;
    *puVar6 = plVar7;
    *(int *)(puVar6 + 1) = iVar1;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  *(undefined8 *)(param_1 + 0x280) = uVar9;
  puVar6 = (undefined8 *)FUN_142016d50(&DAT_1464af148,local_res8,FUN_14204a180);
  *(undefined8 *)(param_1 + 0x288) = *puVar6;
  puVar6 = (undefined8 *)FUN_142016d50(&DAT_1464af160,local_res8,FUN_14204a1c0);
  *(undefined8 *)(param_1 + 0x290) = *puVar6;
  return;
}



// FUNCTION 142028910 FUN_142028910 body=2164 status=ok
// SIG undefined FUN_142028910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142028910(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  RefCountImpl *param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  RefCountImpl *this;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined1 local_3d8;
  longlong *local_3c8;
  longlong *local_3c0;
  longlong *local_3b8;
  longlong local_3b0;
  RefCountImpl *local_3a8;
  undefined8 *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong *local_388;
  uint local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  longlong *local_358;
  uint local_350;
  undefined1 local_348;
  undefined7 uStack_347;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  longlong *local_328;
  uint local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong *local_2f8;
  uint local_2f0;
  undefined1 local_2e8;
  undefined7 uStack_2e7;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  longlong *local_2c8;
  uint local_2c0;
  undefined8 local_2b8;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [48];
  undefined8 local_270;
  undefined1 local_268 [256];
  longlong local_168;
  short *local_160;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_408;
  local_3a8 = param_5;
  local_3b8 = param_2;
  local_3b0 = param_1;
  local_3a0 = param_4;
  if ((*(uint *)(*param_2 + 0xa0) & 0x8f) - 8 < 4) {
    plVar5 = (longlong *)operator_new(0x78);
    plVar8 = (longlong *)0x0;
    plVar7 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      if ((*(int *)(param_5 + 8) != 0) &&
         (plVar9 = *(longlong **)param_5, plVar7 = (longlong *)0x0, plVar9 != (longlong *)0x0)) {
        puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_2a8);
        plVar7 = (longlong *)*puVar6;
      }
      *plVar5 = (longlong)plVar7;
      plVar5[1] = -1;
      plVar5[2] = -1;
      plVar5[3] = 0;
      *(undefined4 *)(plVar5 + 4) = 0;
      plVar5[7] = -1;
      plVar5[8] = -1;
      plVar5[9] = 0;
      *(undefined4 *)(plVar5 + 10) = 0;
      plVar5[0xd] = 0;
      plVar5[0xe] = 0;
      plVar7 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    local_3c0 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_144f71db0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar7;
      local_3c0 = plVar5;
    }
    local_3c8 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_3c8,plVar7,plVar7);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_268,param_3);
    plVar7 = local_3c8;
    if ((short *)local_3c8[0xd] != local_160) {
      plVar5 = plVar8;
      if ((local_160 != (short *)0x0) && (*local_160 != 0)) {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (local_160[lVar11] != 0);
        plVar5 = (longlong *)(ulonglong)((int)lVar11 + 1);
      }
      *(undefined4 *)(local_3c8 + 0xe) = 0;
      iVar4 = (int)plVar5;
      plVar9 = plVar8;
      if (*(int *)((longlong)local_3c8 + 0x74) != iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_3c8 + 0xd,plVar5);
        plVar9 = (longlong *)(ulonglong)*(uint *)(plVar7 + 0xe);
      }
      iVar3 = (int)plVar9 + iVar4;
      *(int *)(plVar7 + 0xe) = iVar3;
      if (*(int *)((longlong)plVar7 + 0x74) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar7 + 0xd);
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)plVar7[0xd],local_160,(longlong)iVar4 * 2);
      }
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
    this = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
    if (this == (RefCountImpl *)0x0) {
      this = (RefCountImpl *)0x0;
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      *(undefined ***)this = &PTR_FUN_144f70a50;
      *(undefined ***)this = &PTR_FUN_144f70df0;
      *(undefined4 *)(this + 8) = 1;
      *(longlong *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      if (((param_5 != this + 0x10) && (*(int *)(param_5 + 8) != 0)) &&
         (*(longlong **)param_5 != (longlong *)0x0)) {
        (**(code **)(**(longlong **)param_5 + 0x30))();
      }
    }
    lVar11 = local_3b0;
    local_3e8 = (undefined8 *)((ulonglong)local_3e8._4_4_ << 0x20);
    FUN_142031710(local_3b0,local_3c8 + 1,"Object",0);
    FUN_1420308d0(lVar11,local_3c8 + 7,this,0);
    local_2d8 = 0xffffffffffffffff;
    uStack_2d0 = 0xffffffffffffffff;
    local_2c8 = (longlong *)0x0;
    local_2c0 = 6;
    local_3e8 = (undefined8 *)CONCAT71(local_3e8._1_7_,((byte)(int)local_3c8[10] & 0x8f) == 10);
    local_2b8 = param_3;
    (**(code **)(*(longlong *)local_3c8[9] + 0x28))
              ((longlong *)local_3c8[9],local_3c8[0xb],"eventName",&local_2d8);
    if ((local_2c0 >> 6 & 1) != 0) {
      (**(code **)(*local_2c8 + 0x10))(local_2c8,&local_2d8,local_2b8);
    }
    local_3e8 = (undefined8 *)CONCAT71(local_3e8._1_7_,((byte)(int)local_3c8[4] & 0x8f) == 10);
    (**(code **)(*(longlong *)local_3c8[3] + 0x28))
              ((longlong *)local_3c8[3],local_3c8[5],param_3,local_3c8 + 7);
    lVar10 = 5;
    local_148 = 0xffffffffffffffff;
    uStack_140 = 0xffffffffffffffff;
    local_138 = 0;
    local_118 = 0xffffffffffffffff;
    uStack_110 = 0xffffffffffffffff;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0xffffffffffffffff;
    uStack_e0 = 0xffffffffffffffff;
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    local_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    local_130 = 6;
    local_120 = local_270;
    local_128 = param_3;
    if ((*(longlong *)(lVar11 + 0x78) == 0) ||
       (iVar4 = Scaleform::GFx::Movie::GetAVMVersion(), iVar4 != 1)) {
      FUN_1410b5e10(&local_118,local_3c8 + 7);
      local_358 = (longlong *)0x0;
      local_350 = 2;
      local_348 = 0;
      local_368 = 0xffffffffffffffff;
      uStack_360 = 0xffffffffffffffff;
      if ((local_d0 >> 6 & 1) != 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8,&local_e8,local_c8);
        local_d8 = (longlong *)0x0;
      }
      uVar13 = CONCAT71(uStack_347,local_348);
      local_c0 = local_340;
      local_d0 = local_350;
      local_c8 = uVar13;
      if ((local_350 >> 6 & 1) != 0) {
        local_d8 = local_358;
        (**(code **)(*local_358 + 8))(local_358,&local_e8);
        uVar13 = CONCAT71(uStack_347,local_348);
      }
      if ((local_350 >> 6 & 1) != 0) {
        (**(code **)(*local_358 + 0x10))(local_358,&local_368,uVar13);
      }
      local_338 = 0xffffffffffffffff;
      uStack_330 = 0xffffffffffffffff;
      local_328 = (longlong *)0x0;
      local_318 = 0;
      local_320 = 5;
      if ((local_a0 >> 6 & 1) != 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,local_98);
        local_a8 = (longlong *)0x0;
      }
      local_90 = local_310;
      local_98 = local_318;
      local_a0 = local_320;
      if ((local_320 >> 6 & 1) != 0) {
        local_a8 = local_328;
        (**(code **)(*local_328 + 8))(local_328,&local_b8);
      }
      if ((local_320 >> 6 & 1) != 0) {
        (**(code **)(*local_328 + 0x10))(local_328,&local_338,local_318);
      }
      local_2f8 = (longlong *)0x0;
      local_2f0 = 2;
      local_2e8 = 0;
      local_308 = 0xffffffffffffffff;
      uStack_300 = 0xffffffffffffffff;
      if ((local_70 >> 6 & 1) != 0) {
        (**(code **)(*local_78 + 0x10))(local_78,&local_88,local_68);
        local_78 = (longlong *)0x0;
      }
      uVar13 = CONCAT71(uStack_2e7,local_2e8);
      local_60 = local_2e0;
      local_70 = local_2f0;
      local_68 = uVar13;
      if ((local_2f0 >> 6 & 1) != 0) {
        local_78 = local_2f8;
        (**(code **)(*local_2f8 + 8))(local_2f8,&local_88);
        uVar13 = CONCAT71(uStack_2e7,local_2e8);
      }
      if ((local_2f0 >> 6 & 1) != 0) {
        (**(code **)(*local_2f8 + 0x10))(local_2f8,&local_308,uVar13);
      }
      local_3e0 = 5;
    }
    else {
      FUN_1410b5e10(&local_118,local_3c8 + 1);
      local_388 = (longlong *)0x0;
      local_380 = 6;
      local_398 = 0xffffffffffffffff;
      uStack_390 = 0xffffffffffffffff;
      local_378 = param_3;
      if ((local_d0 >> 6 & 1) != 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8,&local_e8,local_c8);
        local_d8 = (longlong *)0x0;
      }
      local_c0 = local_370;
      local_d0 = local_380;
      local_c8 = local_378;
      if ((local_380 >> 6 & 1) != 0) {
        local_d8 = local_388;
        (**(code **)(*local_388 + 8))(local_388,&local_e8,local_378);
      }
      if ((local_380 >> 6 & 1) != 0) {
        (**(code **)(*local_388 + 0x10))(local_388,&local_398,local_378);
      }
      local_3e0 = 3;
    }
    param_2 = local_3b8;
    lVar11 = *local_3b8;
    local_3d8 = ((byte)*(undefined4 *)(lVar11 + 0xa0) & 0x8f) == 10;
    local_3e8 = &local_148;
    cVar2 = (**(code **)(**(longlong **)(lVar11 + 0x98) + 0x30))
                      (*(longlong **)(lVar11 + 0x98),*(undefined8 *)(lVar11 + 0xa8),0,
                       "addEventListener");
    if (cVar2 != '\0') {
      lVar11 = *param_2;
      iVar4 = *(int *)(lVar11 + 200);
      *(int *)(lVar11 + 200) = iVar4 + 1;
      if (*(int *)(lVar11 + 0xcc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0xc0,iVar4);
      }
      puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar11 + 0xc0));
      *puVar6 = local_3c8;
      puVar6[1] = local_3c0;
      if (local_3c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_3c0 + 1) = (int)local_3c0[1] + 1;
        UNLOCK();
      }
      if ((*(int *)(local_3a8 + 8) != 0) &&
         (plVar7 = *(longlong **)local_3a8, plVar7 != (longlong *)0x0)) {
        puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_2a0);
        plVar8 = (longlong *)*puVar6;
      }
      *local_3a0 = plVar8;
    }
    puVar12 = local_58;
    do {
      lVar10 = lVar10 + -1;
      if (((uint)puVar12[-3] >> 6 & 1) != 0) {
        (**(code **)(*(longlong *)puVar12[-4] + 0x10))
                  ((longlong *)puVar12[-4],puVar12 + -6,puVar12[-2]);
        puVar12[-4] = 0;
      }
      *(undefined4 *)(puVar12 + -3) = 0;
      puVar12 = puVar12 + -6;
    } while (lVar10 != 0);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
    plVar8 = local_3c0;
    if (local_3c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_3c0 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_3c0)(local_3c0);
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
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 142029190 FUN_142029190 body=537 status=ok
// SIG undefined FUN_142029190(void)

void FUN_142029190(longlong param_1,undefined8 param_2,longlong *param_3,longlong **param_4)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [24];
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar8 = *pcVar1;
  if (cVar8 == '\0') {
    *pcVar1 = '\0';
    cVar8 = '\0';
  }
  UNLOCK();
  if (cVar8 < '\x06') {
    cVar8 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar8 == '\0') {
      puVar10 = (undefined8 *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_90);
      uVar4 = *puVar10;
      plVar5 = (longlong *)puVar10[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      if (((param_4 != &local_a8) && (*(int *)(param_4 + 1) != 0)) &&
         (plVar6 = *param_4, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
      }
      local_38 = 0;
      local_28 = 0;
      local_98 = param_3;
      puVar10 = (undefined8 *)FUN_140438ef0(0x40,local_58);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &PTR_FUN_144f71c30;
        puVar10[1] = param_1;
        puVar10[2] = uVar4;
        puVar10[3] = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        puVar10[4] = param_2;
        puVar10[5] = (longlong *)0x0;
        *(undefined4 *)(puVar10 + 6) = 0;
        if (((&local_a8 != (longlong **)(puVar10 + 5)) && (local_a0 != 0)) &&
           (local_a8 != (longlong *)0x0)) {
          (**(code **)(*local_a8 + 0x30))();
        }
        puVar10[7] = local_98;
      }
      local_68[0] = FUN_14202be40;
      FUN_1420326d0(param_1,local_68);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_88 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
    }
    else if (*param_3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_80);
      FUN_142028910(uVar4,uVar9,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 1420293b0 FUN_1420293b0 body=621 status=ok
// SIG undefined FUN_1420293b0(void)

bool FUN_1420293b0(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_14203ce90(&local_48,param_1);
  if (local_48 == 0) {
    lVar3 = operator_new(0x50);
    plVar7 = (longlong *)0x0;
    plVar4 = plVar7;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_142018950(lVar3,param_1);
    }
    plVar5 = (longlong *)operator_new(0x18);
    plVar6 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    plVar5 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    local_38 = plVar4;
    local_30 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      if ((*plVar5 != 0) && (plVar5[1] != 0)) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) goto LAB_1420294f2;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      *plVar5 = (longlong)plVar4;
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
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        plVar5[1] = (longlong)plVar6;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
    }
LAB_1420294f2:
    FUN_142058970(&local_38);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar4 = (longlong *)FUN_14203ce90(local_28,param_1);
    if (&local_48 != plVar4) {
      local_48 = *plVar4;
      *plVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,plVar4 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    bVar8 = true;
    if (local_48 == 0) goto LAB_1420295c1;
  }
  LOCK();
  *(int *)(local_48 + 0x34) = *(int *)(local_48 + 0x34) + 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(local_48 + 0x38) = param_2;
  UNLOCK();
  bVar8 = local_48 == 0;
LAB_1420295c1:
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return !bVar8;
}



// FUNCTION 142029620 FUN_142029620 body=621 status=ok
// SIG undefined FUN_142029620(void)

bool FUN_142029620(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_14203ce90(&local_48,param_1);
  if (local_48 == 0) {
    lVar3 = operator_new(0x50);
    plVar7 = (longlong *)0x0;
    plVar4 = plVar7;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_142018950(lVar3,param_1);
    }
    plVar5 = (longlong *)operator_new(0x18);
    plVar6 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    plVar5 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    local_38 = plVar4;
    local_30 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      if ((*plVar5 != 0) && (plVar5[1] != 0)) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) goto LAB_142029762;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      *plVar5 = (longlong)plVar4;
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
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        plVar5[1] = (longlong)plVar6;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
    }
LAB_142029762:
    FUN_142058970(&local_38);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar4 = (longlong *)FUN_14203ce90(local_28,param_1);
    if (&local_48 != plVar4) {
      local_48 = *plVar4;
      *plVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,plVar4 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    bVar8 = true;
    if (local_48 == 0) goto LAB_142029831;
  }
  LOCK();
  *(int *)(local_48 + 0x30) = *(int *)(local_48 + 0x30) + 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(local_48 + 0x38) = param_2;
  UNLOCK();
  bVar8 = local_48 == 0;
LAB_142029831:
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return !bVar8;
}



// FUNCTION 142029890 FUN_142029890 body=356 status=ok
// SIG undefined FUN_142029890(void)

bool FUN_142029890(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_14203d100(&local_28,*param_1 + 0x18);
  if (local_28 == 0) {
    FUN_142058970(param_1);
    plVar5 = (longlong *)FUN_14203d100(local_18,*param_1 + 0x18);
    if (&local_28 != plVar5) {
      local_28 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_20,plVar5 + 1);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_10 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    bVar6 = true;
    if (local_28 == 0) goto LAB_142029963;
  }
  LOCK();
  *(int *)(local_28 + 0x30) = *(int *)(local_28 + 0x30) + 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(local_28 + 0x38) = param_2;
  UNLOCK();
  bVar6 = local_28 == 0;
LAB_142029963:
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  return !bVar6;
}



// FUNCTION 142029a00 FUN_142029a00 body=88 status=ok
// SIG undefined FUN_142029a00(void)

bool FUN_142029a00(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146accc20;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142029a60 FUN_142029a60 body=143 status=ok
// SIG undefined FUN_142029a60(void)

void FUN_142029a60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = FUN_142039c70();
  if (lVar5 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x120));
    TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
    ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
              (lVar5 + 0x110,param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x120));
  }
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 142029af0 FUN_142029af0 body=1222 status=ok
// SIG undefined FUN_142029af0(void)

void FUN_142029af0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  int local_res10;
  int local_res14;
  LARGE_INTEGER local_res18;
  undefined4 local_68;
  undefined1 local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  lVar6 = FUN_142039c70();
  if (lVar6 == 0) {
    return;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    bVar10 = *(int *)(lVar6 + 0x60) == 0;
  }
  else {
    if (*(longlong *)(lVar6 + 0x198) == 0) {
      return;
    }
    bVar10 = DAT_14653517c == '\0';
  }
  if (bVar10) {
    return;
  }
  LOCK();
  bVar10 = *(int *)(param_1 + 0x90) == 0;
  uVar9 = 0;
  if (bVar10) {
    *(int *)(param_1 + 0x90) = 0;
  }
  UNLOCK();
  if (bVar10) {
    return;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  LOCK();
  cVar3 = *(char *)(param_1 + 0x30);
  if (cVar3 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar3 = '\0';
  }
  UNLOCK();
  if (cVar3 < '\x05') {
    return;
  }
  LOCK();
  bVar10 = *(int *)(param_1 + 0x1e0) == 0;
  if (bVar10) {
    *(int *)(param_1 + 0x1e0) = 0;
  }
  UNLOCK();
  if (!bVar10) {
    return;
  }
  LOCK();
  cVar3 = *(char *)(param_1 + 0x30);
  if (cVar3 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar3 = '\0';
  }
  UNLOCK();
  if ('\x05' < cVar3) {
    return;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x1bc);
  if (cVar3 == '\0') {
    return;
  }
  iVar5 = FUN_14203ce50(param_1);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x1bc);
  if (iVar5 == 1) {
    fVar14 = *(float *)(lVar6 + 0x798);
  }
  else {
    fVar14 = *(float *)(lVar6 + 0x790);
  }
  lVar6 = FUN_142039c70();
  if ((((((lVar6 == 0) ||
         (puVar7 = (undefined8 *)FUN_142874a50(DAT_146b17150,*(undefined8 *)(DAT_146b17150 + 0x7b0))
         , *(int *)(puVar7 + 1) < 1)) ||
        ((*(longlong *)*puVar7 == 0 ||
         ((lVar6 = *(longlong *)(*(longlong *)*puVar7 + 0x30), lVar6 == 0 ||
          (lVar6 = *(longlong *)(lVar6 + 0x520), lVar6 == 0)))))) ||
       ((*(byte *)(lVar6 + 0x460) & 2) == 0)) && ((*(byte *)(param_2 + 8) & 1) == 0)) ||
     (cVar3 = (**(code **)(*param_2 + 0x418))(param_2), cVar3 == '\0')) goto LAB_142029f2b;
  LOCK();
  bVar10 = *(int *)(param_1 + 0x1dc) == 0;
  if (bVar10) {
    *(int *)(param_1 + 0x1dc) = 0;
  }
  UNLOCK();
  if (bVar10) {
    LOCK();
    bVar10 = *(int *)(param_1 + 0xa8) == 0;
    if (bVar10) {
      *(int *)(param_1 + 0xa8) = 0;
    }
    UNLOCK();
    if (!bVar10) {
      fVar11 = fVar14 - *(float *)(param_1 + 0x1c4);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (fVar11 < *(float *)(param_1 + 0x1b8)) goto LAB_142029f2b;
    }
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1f8);
  lVar6 = DAT_146accb98;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar8 = 4;
    if (DVar4 == DAT_1468c21c0) goto LAB_142029d2a;
  }
  else {
LAB_142029d2a:
    lVar8 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1c8);
  if (((uVar1 != 0) && (*(uint *)(lVar8 + lVar6) != 0)) && (uVar1 < *(uint *)(lVar8 + lVar6))) {
    uVar9 = uVar1;
  }
  *(uint *)(param_1 + 0x1c8) = uVar9 + 1;
  uVar12 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xc0))();
  *(undefined4 *)(param_1 + 0x1b8) = uVar12;
  fVar11 = (float)(**(code **)(*param_2 + 0x420))(param_2);
  *(float *)(param_1 + 0x1b8) = fVar11 * *(float *)(param_1 + 0x1b8);
  (**(code **)(*param_2 + 0x3d8))(param_2);
  *(float *)(param_1 + 0x1c4) = fVar14;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    LOCK();
    bVar10 = *(int *)(param_1 + 0x9c) == 0;
    if (bVar10) {
      *(int *)(param_1 + 0x9c) = 0;
    }
    UNLOCK();
    if (!bVar10) {
      LOCK();
      bVar10 = *(int *)(param_1 + 0xa4) == 0;
      if (bVar10) {
        *(int *)(param_1 + 0xa4) = 0;
      }
      UNLOCK();
      if (!bVar10) {
        LOCK();
        bVar10 = *(int *)(param_1 + 0x98) == 0;
        if (bVar10) {
          *(int *)(param_1 + 0x98) = 0;
        }
        UNLOCK();
        if (((!bVar10) && (*(longlong *)(param_1 + 0x80) != 0)) &&
           (*(longlong *)(param_1 + 0x78) != 0)) {
          LOCK();
          cVar3 = *(char *)(param_1 + 0x30);
          if (cVar3 == '\0') {
            *(char *)(param_1 + 0x30) = '\0';
            cVar3 = '\0';
          }
          UNLOCK();
          if ((('\x04' < cVar3) && ((*(uint *)(param_2 + 8) & 0x500) != 0)) &&
             (plVar2 = *(longlong **)(param_1 + 0x78), plVar2 != (longlong *)0x0)) {
            local_60 = (float)DAT_146ace8b8;
            local_64 = 0;
            local_68 = 1;
            local_58 = 0;
            local_50 = 0;
            local_5c = (float)DAT_146ace8bc;
            (**(code **)(*plVar2 + 0x118))(plVar2,&local_68);
          }
        }
      }
    }
  }
  LOCK();
  iVar5 = *(int *)(param_1 + 0x1ec);
  *(int *)(param_1 + 0x1ec) = 1;
  UNLOCK();
  if (iVar5 == 0) {
    LOCK();
    *(uint *)(param_1 + 0x1e8) = *(uint *)(param_2 + 8) >> 0x14 & 1;
    UNLOCK();
    *(uint *)(param_1 + 0x1f0) = (uint)*(byte *)((longlong)param_2 + 0x44);
  }
  FUN_142071690(&local_res10);
  LOCK();
  bVar10 = *(int *)(param_1 + 0x1e8) == 0;
  if (bVar10) {
    *(int *)(param_1 + 0x1e8) = 0;
  }
  UNLOCK();
  if ((!bVar10) &&
     ((*(int *)(param_1 + 0x134) != local_res10 || (*(int *)(param_1 + 0x138) != local_res14)))) {
    LOCK();
    iVar5 = *(int *)(param_1 + 0x1e4);
    *(int *)(param_1 + 0x1e4) = 1;
    UNLOCK();
    if (iVar5 == 0) {
      *(int *)(param_1 + 0x134) = local_res10;
      *(int *)(param_1 + 0x138) = local_res14;
      if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x130))();
        LOCK();
        *(uint *)(param_1 + 0x130) = (uint)(cVar3 != '\0');
        UNLOCK();
      }
    }
    else {
      LOCK();
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      UNLOCK();
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xa8) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  UNLOCK();
LAB_142029f2b:
  QueryPerformanceCounter(&local_res18);
  lVar6 = local_res18.QuadPart - *(longlong *)(param_1 + 0x1d0);
  dVar13 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
  dVar15 = (double)lVar6;
  if (lVar6 < 0) {
    dVar15 = dVar15 + 1.8446744073709552e+19;
  }
  fVar14 = (float)(dVar13 * dVar15);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  (**(code **)(*param_2 + 0x3e0))(param_2,fVar14);
  ((LARGE_INTEGER *)(param_1 + 0x1d0))->QuadPart = (LONGLONG)local_res18;
  return;
}



// FUNCTION 142029fc0 FUN_142029fc0 body=88 status=ok
// SIG undefined FUN_142029fc0(void)

bool FUN_142029fc0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146accc50;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 14202a020 FUN_14202a020 body=88 status=ok
// SIG undefined FUN_14202a020(void)

bool FUN_14202a020(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146accc38;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 14202a080 FUN_14202a080 body=88 status=ok
// SIG undefined FUN_14202a080(void)

bool FUN_14202a080(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146acccc8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 14202a0e0 FUN_14202a0e0 body=2795 status=ok
// SIG undefined FUN_14202a0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_14202a0e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             ulonglong *param_5,undefined8 param_6,longlong *param_7)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  longlong **pplVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  void *pvVar19;
  ulonglong *puVar20;
  int iVar21;
  bool bVar22;
  undefined8 local_res10 [3];
  undefined1 auStack_538 [32];
  undefined4 local_518;
  undefined8 local_510;
  longlong local_508;
  longlong *local_4f8;
  longlong *plStack_4f0;
  void *local_4e8;
  int local_4e0;
  int local_4dc;
  ulonglong *local_4d8;
  void *local_4d0;
  int local_4c8;
  int local_4c4;
  longlong *local_4c0;
  longlong *local_4b8;
  void *local_4b0;
  undefined8 local_4a8;
  longlong *local_4a0;
  longlong *local_498;
  longlong *plStack_490;
  longlong *local_488;
  longlong *local_480;
  undefined8 local_478;
  undefined8 local_470;
  void *local_468;
  int local_460;
  longlong *local_458;
  longlong *plStack_450;
  longlong *local_448;
  longlong *plStack_440;
  longlong **local_438;
  longlong **pplStack_430;
  undefined8 *local_428;
  ulonglong *puStack_420;
  longlong *local_418;
  longlong lStack_410;
  undefined8 *local_408;
  undefined1 *puStack_400;
  longlong *local_3f8;
  longlong *plStack_3f0;
  longlong *local_3e8;
  longlong *plStack_3e0;
  longlong *local_3d8;
  longlong *plStack_3d0;
  longlong *local_3c8;
  longlong *plStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 *local_3a8 [2];
  undefined1 local_398 [32];
  undefined8 local_378;
  undefined4 local_368;
  undefined1 local_358 [80];
  undefined1 local_308 [192];
  longlong local_248;
  undefined1 local_238 [128];
  longlong local_1b8;
  undefined1 local_198 [256];
  longlong local_98;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  plVar15 = (longlong *)0x0;
  local_4d8 = param_5;
  local_4a0 = param_7;
  local_4a8 = param_4;
  local_4b0 = (void *)((ulonglong)local_4b0 & 0xffffffff00000000);
  plVar10 = plVar15;
  local_res10[0] = param_2;
  local_508 = param_1;
  if (param_3 == 0) {
    pplVar8 = &local_448;
    local_448 = (longlong *)0x0;
    plStack_440 = (longlong *)0x0;
    bVar4 = false;
    bVar22 = true;
  }
  else {
    if ((*(longlong *)(param_3 + 0x28) == 0) || (*(longlong *)(param_3 + 0x30) == 0)) {
LAB_14202a1cd:
      pplVar8 = &local_458;
      local_458 = (longlong *)0x0;
      plStack_450 = (longlong *)0x0;
      bVar4 = false;
      bVar22 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_3 + 0x30) + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 < 1) goto LAB_14202a1cd;
      local_4b8 = *(longlong **)(param_3 + 0x30);
      local_4c0 = (longlong *)0x0;
      if (local_4b8 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_4b8[1];
        bVar22 = iVar6 == 0;
        if (bVar22) {
          *(int *)(local_4b8 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar22) {
          LOCK();
          bVar22 = iVar6 == (int)local_4b8[1];
          if (bVar22) {
            *(int *)(local_4b8 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar22) {
            local_4c0 = *(longlong **)(param_3 + 0x28);
            pplVar8 = &local_4c0;
            bVar4 = true;
            bVar22 = false;
            plVar10 = local_4c0;
            goto LAB_14202a1e1;
          }
          LOCK();
          iVar6 = (int)local_4b8[1];
          bVar22 = iVar6 == 0;
          if (bVar22) {
            *(int *)(local_4b8 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_4b8 = (longlong *)0x0;
      }
      pplVar8 = &local_4c0;
      bVar4 = true;
      bVar22 = false;
      plVar10 = (longlong *)0x0;
    }
LAB_14202a1e1:
    plVar2 = pplVar8[1];
    pplVar8[1] = (longlong *)0x0;
    plVar17 = plStack_450;
    local_480 = plVar2;
    *pplVar8 = (longlong *)0x0;
    local_488 = plVar10;
    if ((bVar22) && (plStack_450 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_450 + 1;
      lVar18 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plStack_450)(plStack_450);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_450 + 8))(plStack_450,1);
        }
      }
    }
    plVar2 = local_4b8;
    if ((bVar4) && (local_4b8 != (longlong *)0x0)) {
      LOCK();
      plVar17 = local_4b8 + 1;
      lVar18 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_4b8)(local_4b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_4b8 + 8))(local_4b8,1);
        }
      }
    }
    bVar4 = true;
    bVar22 = false;
    pplVar8 = &local_488;
  }
  plVar2 = pplVar8[1];
  pplVar8[1] = (longlong *)0x0;
  plVar17 = plStack_440;
  *pplVar8 = (longlong *)0x0;
  if ((bVar22) && (plStack_440 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_440 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_440)(plStack_440);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_440 + 8))(plStack_440,1);
      }
    }
  }
  plVar17 = local_480;
  if ((bVar4) && (local_480 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_480 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_480)(local_480);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_480 + 8))(local_480,1);
      }
    }
  }
  if (plVar10 == (longlong *)0x0) {
    plStack_490 = *(longlong **)(param_1 + 0xd8);
    plVar10 = *(longlong **)(param_1 + 0xd0);
    if (plStack_490 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_490 + 1) = (int)plStack_490[1] + 1;
      UNLOCK();
    }
    bVar4 = false;
    bVar22 = true;
    plVar17 = plStack_490;
  }
  else {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    bVar4 = true;
    bVar22 = false;
    plStack_490 = plVar2;
    plVar17 = local_4a0;
  }
  if (plStack_490 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_490 + 1) = (int)plStack_490[1] + 1;
    UNLOCK();
  }
  local_498 = plVar10;
  if ((bVar22) && (plVar17 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar17 + 1;
    lVar18 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  if ((bVar4) && (plVar2 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar2 + 1;
    lVar18 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
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
  local_4e8 = (void *)0x0;
  local_4e0 = (int)local_498[6];
  lVar18 = (longlong)local_4e0;
  pvVar3 = (void *)local_498[5];
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_4e8,(2 - (uint)(local_4e0 != 0)) + local_4e0,0);
  pvVar19 = local_4e8;
  _guard_xfg_dispatch_icall_nop(local_4e8,pvVar3,lVar18 * 2);
  iVar6 = local_4e0;
  lVar18 = (longlong)local_4e0;
  local_4e0 = (2 - (uint)(local_4e0 != 0)) + local_4e0;
  if (local_4dc < local_4e0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4e8,iVar6);
    pvVar19 = local_4e8;
  }
  lVar18 = lVar18 - (ulonglong)(iVar6 != 0);
  *(undefined2 *)((longlong)pvVar19 + lVar18 * 2) = 0x2e;
  *(undefined2 *)((longlong)pvVar19 + lVar18 * 2 + 2) = 0;
  iVar6 = (int)local_4d8[1];
  if (local_4e0 < 2) {
    pvVar3 = (void *)*local_4d8;
    local_468 = (void *)0x0;
    local_460 = iVar6;
    if (iVar6 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_468,iVar6,0);
      _guard_xfg_dispatch_icall_nop(local_468,pvVar3,(longlong)iVar6 * 2);
    }
    if (pvVar19 != (void *)0x0) {
      FMemory::Free(pvVar19);
    }
  }
  else {
    iVar21 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar21 = 0;
    }
    if ((local_4e0 != 0) || (iVar6 = 1, iVar21 == 0)) {
      iVar6 = 0;
    }
    iVar6 = iVar6 + iVar21 + local_4e0;
    local_4d0 = pvVar19;
    local_4c8 = local_4e0;
    local_4c4 = local_4dc;
    if (local_4dc < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4d0,iVar6);
    }
    iVar6 = local_4c8;
    local_4b0 = (void *)*local_4d8;
    local_468 = local_4d0;
    if (iVar21 != 0) {
      local_4c8 = (uint)(local_4c8 == 0) + iVar21 + local_4c8;
      if (local_4c4 < local_4c8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d0,iVar6);
      }
      pvVar19 = local_4d0;
      pvVar3 = (void *)((longlong)local_4d0 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,local_4b0,(longlong)iVar21 * 2);
      *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar3) = 0;
      local_468 = pvVar19;
    }
  }
  lVar18 = FMemory::Malloc(0x108,0);
  puVar20 = local_4d8;
  plVar10 = plVar15;
  if (lVar18 != 0) {
    local_3f8 = local_498;
    plStack_3f0 = plStack_490;
    if (plStack_490 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_490 + 1) = (int)plStack_490[1] + 1;
      UNLOCK();
    }
    uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_508,local_3b8);
    puVar20 = local_4d8;
    plVar10 = (longlong *)FUN_142019d80(lVar18,uVar9,&local_3f8,local_4d8);
  }
  plVar11 = (longlong *)operator_new(0x18);
  plVar17 = plVar15;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_143f3f2d0;
    plVar11[2] = (longlong)plVar10;
    plVar17 = plVar11;
  }
  plVar11 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar11 = plVar15;
  }
  local_4f8 = plVar10;
  plStack_4f0 = plVar17;
  if (plVar11 != (longlong *)0x0) {
    if ((*plVar11 != 0) && (plVar11[1] != 0)) {
      piVar1 = (int *)(plVar11[1] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) goto LAB_14202a6e6;
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    *plVar11 = (longlong)plVar10;
    plVar10 = (longlong *)plVar11[1];
    if (plVar17 != plVar10) {
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)plVar11[1];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      plVar11[1] = (longlong)plVar17;
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar17 + 1;
      lVar18 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
  }
LAB_14202a6e6:
  cVar5 = FUN_142056970();
  lVar18 = local_508;
  if (cVar5 == '\0') {
    if (*(longlong *)(local_508 + 0x88) != 0) {
      cVar5 = FUN_1420794b0();
      goto LAB_14202a748;
    }
  }
  else {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    lVar18 = local_508;
    if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      cVar5 = DVar7 == DAT_1468c21c0;
      lVar18 = local_508;
LAB_14202a748:
      if (cVar5 == '\0') {
        local_438 = &local_498;
        pplStack_430 = &local_4f8;
        local_418 = local_4a0;
        local_428 = &local_4a8;
        local_408 = local_res10;
        puStack_400 = (undefined1 *)&param_6;
        local_378 = 0;
        local_368 = 0;
        puStack_420 = puVar20;
        lStack_410 = lVar18;
        puVar12 = (undefined8 *)FUN_140438ef0(0x48,local_398);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &PTR_FUN_144ebe6d8;
          puVar12[1] = local_438;
          puVar12[2] = pplStack_430;
          puVar12[3] = local_428;
          puVar12[4] = puStack_420;
          puVar12[5] = local_418;
          puVar12[6] = lStack_410;
          puVar12[7] = local_408;
          puVar12[8] = puStack_400;
        }
        local_478 = 0;
        local_3a8[0] = &LAB_14202c020;
        local_470 = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,0);
        local_518 = CONCAT22(local_518._2_2_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>(local_478,0x17,"FGFxMovie::AttachMovie");
        FUN_140fe55e0(local_308,&local_478,local_3a8);
        uVar9 = FUN_140ff5760(local_308,local_358);
        FUN_142032420(lVar18,uVar9);
        lVar18 = local_248;
        if (local_248 != 0) {
          while ((lVar18 = local_248, local_248 != 0 && (*(char *)(local_248 + 0x58) == '\0'))) {
            cVar5 = FUN_1415ad720(&DAT_1468e2448);
            if ((cVar5 == '\0') &&
               ((DAT_1468c21ae != '\0' && (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0))))
            {
              ppuVar13 = (undefined **)FUN_14203ca70();
              if (ppuVar13 != (undefined **)0x0) goto LAB_14202a8e5;
            }
            else {
              ppuVar13 = &PTR_PTR_1464f05c0;
LAB_14202a8e5:
              FUN_1420714f0(ppuVar13);
            }
            lVar18 = local_248;
            if (local_248 == 0) break;
            if (*(char *)(local_248 + 0x58) == '\0') {
              (**(code **)(**(longlong **)(local_248 + 0x50) + 0x20))
                        (*(longlong **)(local_248 + 0x50),5);
            }
          }
        }
        cVar5 = *(char *)(lVar18 + 0x58);
        while (cVar5 == '\0') {
          (**(code **)(**(longlong **)(lVar18 + 0x50) + 0x20))
                    (*(longlong **)(lVar18 + 0x50),0x5d638865,0);
          cVar5 = *(char *)(lVar18 + 0x58);
        }
        plVar15 = *(longlong **)(lVar18 + 0x60);
        FUN_140ce1dc0(local_308);
        goto LAB_14202aadd;
      }
    }
  }
  if ((int)puVar20[1] == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*puVar20;
  }
  lVar14 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                     (local_238,puVar16);
  uVar9 = *(undefined8 *)(lVar14 + 0x88);
  local_3e8 = local_4f8;
  plStack_3e0 = plStack_4f0;
  if (plStack_4f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_4f0 + 1) = (int)plStack_4f0[1] + 1;
    UNLOCK();
  }
  local_510 = 0;
  local_518 = 0xffffffff;
  cVar5 = FUN_14202abd0(local_498,&local_3e8,local_4a8,uVar9);
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_198,local_4a8);
    if (local_98 != 0) {
      FMemory::Free();
      plVar15 = (longlong *)0x0;
    }
  }
  else {
    FUN_14204d040(local_4f8);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_4f8 + 0x1e,local_4a0);
    local_3d8 = local_4f8;
    plStack_3d0 = plStack_4f0;
    if (plStack_4f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_4f0 + 1) = (int)plStack_4f0[1] + 1;
      UNLOCK();
    }
    FUN_14202bd00(lVar18,&local_3d8);
    local_3c8 = local_4f8;
    plStack_3c0 = plStack_4f0;
    if (plStack_4f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_4f0 + 1) = (int)plStack_4f0[1] + 1;
      UNLOCK();
    }
    cVar5 = FWeakObjectPtr::IsValid(lVar18 + 0x70,0,1);
    if (cVar5 != '\0') {
      plVar15 = (longlong *)FWeakObjectPtr::Get(lVar18 + 0x70);
    }
    plVar15 = (longlong *)FUN_142030610(plVar15,local_res10[0],&local_3c8);
  }
LAB_14202aadd:
  plVar10 = plStack_4f0;
  if (plStack_4f0 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_4f0 + 1;
    lVar18 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_4f0)(plStack_4f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (local_468 != (void *)0x0) {
    FMemory::Free();
  }
  plVar10 = plStack_490;
  if (plStack_490 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_490 + 1;
    lVar18 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_490)(plStack_490);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar2 + 1;
    lVar18 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
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
  return plVar15;
}



// FUNCTION 14202abd0 FUN_14202abd0 body=761 status=ok
// SIG undefined FUN_14202abd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14202abd0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5,undefined8 param_6)

{
  byte *pbVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  short *psVar13;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  ulonglong local_450;
  undefined8 local_448;
  short *local_440;
  int local_438;
  longlong local_430;
  longlong *plStack_428;
  undefined8 *local_420;
  undefined8 *puStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  code *local_3f8 [2];
  undefined1 local_3e8 [32];
  undefined8 local_3c8;
  undefined4 local_3b8;
  undefined1 local_3a8 [80];
  undefined1 local_358 [192];
  longlong local_298;
  undefined1 local_288 [256];
  longlong local_188;
  undefined8 local_180;
  undefined1 local_168 [256];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  local_448 = param_6;
  uVar10 = 0;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  bVar7 = *pbVar1;
  if (bVar7 == 0) {
    *pbVar1 = 0;
  }
  else {
    uVar10 = (ulonglong)bVar7;
  }
  UNLOCK();
  local_468 = param_3;
  local_460 = param_4;
  if ((char)uVar10 < '\x06') {
    cVar6 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar6 == '\0') {
      local_420 = &local_468;
      puStack_418 = &local_460;
      local_410 = &param_5;
      local_3c8 = 0;
      uStack_408 = &local_448;
      local_3b8 = 0;
      local_430 = param_1;
      plStack_428 = param_2;
      puVar8 = (undefined8 *)FUN_140438ef0(0x38,local_3e8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_1442e7fc0;
        puVar8[1] = local_430;
        puVar8[2] = plStack_428;
        puVar8[3] = local_420;
        puVar8[4] = puStack_418;
        *(undefined4 *)(puVar8 + 5) = (undefined4)local_410;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = local_410._4_4_;
        *(undefined4 *)(puVar8 + 6) = (undefined4)uStack_408;
        *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_408._4_4_;
      }
      local_3f8[0] = FUN_14202c2b0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,local_468);
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,local_460);
      FString::PrintfImpl(&local_440,L"FGFxObject::AttachMovie(Instance - %s, Symbol - %s)",
                          local_180,local_60);
      local_458 = 0;
      psVar13 = &DAT_143f3eda8;
      if (local_438 != 0) {
        psVar13 = local_440;
      }
      local_450 = 0;
      if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (psVar13[lVar12] != 0);
        uVar11 = (int)lVar12 + 1;
        local_450 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_458,0);
        }
        FGenericPlatformString::Memcpy(local_458,psVar13,(longlong)(int)uVar11 * 2);
      }
      FUN_1410b2c00(local_358,&local_458,local_3f8);
      if (local_440 != (short *)0x0) {
        FMemory::Free();
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      uVar9 = FUN_1410ca7e0(local_358,local_3a8);
      FUN_1420326d0(param_1,uVar9);
      FUN_140d1b3a0(local_358);
      cVar6 = *(char *)(local_298 + 0x58);
      while (cVar6 == '\0') {
        (**(code **)(**(longlong **)(local_298 + 0x50) + 0x20))
                  (*(longlong **)(local_298 + 0x50),0x5d638865,0);
        cVar6 = *(char *)(local_298 + 0x58);
      }
      bVar7 = *(byte *)(local_298 + 0x60);
      FUN_140ce1dc0(local_358);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      uVar10 = (ulonglong)bVar7;
    }
    else {
      local_478 = local_448;
      local_480 = param_5;
      local_488 = local_460;
      bVar7 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x140))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                         *param_2 + 0x88,local_468);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      uVar10 = (ulonglong)bVar7;
    }
  }
  else {
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      uVar11 = (int)lVar12 - 1;
      uVar10 = (ulonglong)uVar11;
      if (uVar11 == 0) {
        uVar10 = (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          uVar10 = (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uVar10 = uVar10 & 0xffffffffffffff00;
  }
  return uVar10;
}



// FUNCTION 14202aed0 FUN_14202aed0 body=2077 status=ok
// SIG undefined FUN_14202aed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_14202aed0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             ulonglong *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  void *pvVar15;
  int iVar16;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined8 local_4a0;
  longlong local_498;
  longlong *plStack_490;
  void *local_488;
  int local_480;
  int local_47c;
  void *local_478;
  int local_470;
  int local_46c;
  longlong local_468;
  longlong *plStack_460;
  undefined8 local_458;
  longlong *local_450;
  void *local_448;
  int local_440;
  void *local_438;
  undefined8 local_430;
  undefined8 local_428;
  longlong *local_420;
  undefined8 local_418;
  undefined8 local_410;
  longlong *local_408;
  longlong *plStack_400;
  undefined8 *local_3f8;
  ulonglong *puStack_3f0;
  undefined4 *local_3e8;
  undefined8 *puStack_3e0;
  undefined8 local_3d8;
  longlong *plStack_3d0;
  longlong local_3c8;
  longlong *plStack_3c0;
  longlong local_3b8;
  longlong *plStack_3b0;
  longlong local_3a8;
  longlong *plStack_3a0;
  undefined1 local_398 [16];
  code *local_388 [2];
  undefined1 local_378 [32];
  undefined8 local_358;
  undefined4 local_348;
  undefined1 local_338 [80];
  undefined1 local_2e8 [208];
  undefined1 local_218 [128];
  longlong local_198;
  undefined1 local_178 [256];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  local_430 = param_7;
  local_428 = param_8;
  local_468 = *param_3;
  local_438 = (void *)((ulonglong)local_438 & 0xffffffff00000000);
  if (local_468 == 0) {
    plStack_460 = (longlong *)param_1[0x1b];
    local_468 = param_1[0x1a];
    if (plStack_460 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_460 + 1) = (int)plStack_460[1] + 1;
      UNLOCK();
    }
    bVar4 = false;
    bVar3 = true;
    plVar13 = param_1;
    plVar9 = plStack_460;
  }
  else {
    plStack_460 = (longlong *)param_3[1];
    if (plStack_460 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_460 + 1) = (int)plStack_460[1] + 1;
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = false;
    plVar13 = plStack_460;
    plVar9 = param_1;
  }
  if (plStack_460 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_460 + 1) = (int)plStack_460[1] + 1;
    UNLOCK();
  }
  local_458 = param_4;
  local_450 = param_1;
  local_420 = param_3;
  if ((bVar3) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if ((bVar4) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar13 + 1;
    lVar14 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  local_480 = *(int *)(local_468 + 0x30);
  lVar14 = (longlong)local_480;
  pvVar2 = *(void **)(local_468 + 0x28);
  local_488 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_488,(2 - (uint)(local_480 != 0)) + local_480,0);
  pvVar15 = local_488;
  _guard_xfg_dispatch_icall_nop(local_488,pvVar2,lVar14 * 2);
  iVar6 = local_480;
  lVar14 = (longlong)local_480;
  local_480 = (2 - (uint)(local_480 != 0)) + local_480;
  if (local_47c < local_480) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,iVar6);
    pvVar15 = local_488;
  }
  puVar12 = (undefined2 *)((longlong)pvVar15 + (lVar14 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar12 = 0x2e;
  puVar12[1] = 0;
  iVar6 = (int)param_5[1];
  if (local_480 < 2) {
    pvVar2 = (void *)*param_5;
    local_448 = (void *)0x0;
    local_440 = iVar6;
    if (iVar6 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_448,iVar6);
      _guard_xfg_dispatch_icall_nop(local_448,pvVar2,(longlong)iVar6 * 2);
    }
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
  }
  else {
    iVar16 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar16 = 0;
    }
    if ((local_480 != 0) || (iVar6 = 1, iVar16 == 0)) {
      iVar6 = 0;
    }
    iVar6 = iVar16 + local_480 + iVar6;
    local_478 = pvVar15;
    local_470 = local_480;
    local_46c = local_47c;
    if (local_47c < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_478,iVar6);
    }
    iVar6 = local_470;
    local_438 = (void *)*param_5;
    param_1 = local_450;
    local_448 = local_478;
    if (iVar16 != 0) {
      local_470 = (uint)(local_470 == 0) + local_470 + iVar16;
      if (local_46c < local_470) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,iVar6,0);
      }
      pvVar15 = local_478;
      pvVar2 = (void *)((longlong)local_478 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,local_438,(longlong)iVar16 * 2);
      *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar2) = 0;
      param_1 = local_450;
      local_448 = pvVar15;
    }
  }
  lVar14 = FMemory::Malloc(0x108,0);
  if (lVar14 == 0) {
    local_498 = 0;
  }
  else {
    local_3c8 = local_468;
    plStack_3c0 = plStack_460;
    if (plStack_460 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_460 + 1) = (int)plStack_460[1] + 1;
      UNLOCK();
    }
    uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_398);
    local_498 = FUN_142019d80(lVar14,uVar8,&local_3c8,param_5);
  }
  plVar13 = (longlong *)0x0;
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2d0;
    plVar9[2] = local_498;
    plVar13 = plVar9;
  }
  plVar9 = (longlong *)(local_498 + 8);
  if (local_498 == 0) {
    plVar9 = (longlong *)0x0;
  }
  plStack_490 = plVar13;
  if (plVar9 != (longlong *)0x0) {
    if ((*plVar9 != 0) && (plVar9[1] != 0)) {
      piVar1 = (int *)(plVar9[1] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) goto LAB_14202b2f3;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *plVar9 = local_498;
    plVar11 = (longlong *)plVar9[1];
    if (plVar13 != plVar11) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar11 = (longlong *)plVar9[1];
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      plVar9[1] = (longlong)plVar13;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar13 + 1;
      lVar14 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
LAB_14202b2f3:
  cVar5 = FUN_142056970();
  if (cVar5 == '\0') {
    if (param_1[0x11] != 0) {
      cVar5 = FUN_1420794b0();
      goto LAB_14202b342;
    }
  }
  else {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      cVar5 = DVar7 == DAT_1468c21c0;
LAB_14202b342:
      if (cVar5 == '\0') {
        local_408 = &local_468;
        plStack_400 = &local_498;
        local_3d8 = local_428;
        local_3f8 = &local_458;
        puStack_3f0 = param_5;
        local_3e8 = &param_6;
        puStack_3e0 = &local_430;
        local_358 = 0;
        local_348 = 0;
        plStack_3d0 = param_1;
        puVar10 = (undefined8 *)FUN_140438ef0(0x48,local_378);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_FUN_144ebe6d8;
          puVar10[1] = local_408;
          puVar10[2] = plStack_400;
          puVar10[3] = local_3f8;
          puVar10[4] = puStack_3f0;
          puVar10[5] = local_3e8;
          puVar10[6] = puStack_3e0;
          puVar10[7] = local_3d8;
          puVar10[8] = plStack_3d0;
        }
        local_418 = 0;
        local_388[0] = FUN_14202c650;
        local_410 = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_418,0);
        local_4a8 = CONCAT22(local_4a8._2_2_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>(local_418,0x1c,"FGFxMovie::AttachMovieBasic");
        FUN_14106d6c0(local_2e8,&local_418,local_388);
        uVar8 = FUN_1410817c0(local_2e8,local_338);
        FUN_142032420(param_1,uVar8);
        FUN_1420386f0(local_2e8,param_2);
        FUN_140ce1dc0(local_2e8);
        plVar13 = plStack_490;
        if (plStack_490 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_490 + 1;
          lVar14 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plStack_490)(plStack_490);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        if (local_448 != (void *)0x0) {
          FMemory::Free();
        }
        plVar13 = plStack_460;
        if (plStack_460 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_460 + 1;
          lVar14 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plStack_460)(plStack_460);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        plVar13 = (longlong *)local_420[1];
        if (plVar13 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar9 = plVar13 + 1;
        lVar14 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar14 != 1) {
          return param_2;
        }
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return param_2;
        }
        (**(code **)(*plVar13 + 8))(plVar13,1);
        return param_2;
      }
    }
  }
  if ((int)param_5[1] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_5;
  }
  lVar14 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                     (local_218,puVar12);
  uVar8 = *(undefined8 *)(lVar14 + 0x88);
  local_3b8 = local_498;
  plStack_3b0 = plStack_490;
  if (plStack_490 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_490 + 1) = (int)plStack_490[1] + 1;
    UNLOCK();
  }
  local_4a0 = local_430;
  local_4a8 = param_6;
  cVar5 = FUN_14202abd0(local_468,&local_3b8,local_458,uVar8);
  if (local_198 != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_178,local_458);
    if (local_78 != 0) {
      FMemory::Free();
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14204d040(local_498);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_498 + 0xf0,local_428);
    local_3a8 = local_498;
    plStack_3a0 = plStack_490;
    if (plStack_490 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_490 + 1) = (int)plStack_490[1] + 1;
      UNLOCK();
    }
    FUN_14202bd00(param_1,&local_3a8);
    *param_2 = local_498;
    param_2[1] = (longlong)plStack_490;
    if (plStack_490 == (longlong *)0x0) goto LAB_14202b67d;
    LOCK();
    *(int *)(plStack_490 + 1) = (int)plStack_490[1] + 1;
    UNLOCK();
  }
  plVar13 = plStack_490;
  if (plStack_490 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_490 + 1;
    lVar14 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_490)(plStack_490);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_14202b67d:
  if (local_448 != (void *)0x0) {
    FMemory::Free();
  }
  plVar13 = plStack_460;
  if (plStack_460 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_460 + 1;
    lVar14 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_460)(plStack_460);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_420);
  return param_2;
}



// FUNCTION 14202b6f0 FUN_14202b6f0 body=291 status=ok
// SIG undefined FUN_14202b6f0(void)

undefined8
FUN_14202b6f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_20 = puVar7[1];
  local_28 = *puVar7;
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FUN_14202aed0(uVar4,param_2,&local_28,param_3,param_4,param_5,param_6,param_7);
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
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 14202b820 FUN_14202b820 body=348 status=ok
// SIG undefined FUN_14202b820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14202b820(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,param_3);
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_f8);
  local_108 = *puVar7;
  local_100 = puVar7[1];
  if (local_100 != 0) {
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_110 = param_7;
  local_118 = param_6;
  local_120 = param_5;
  local_128 = param_4;
  FUN_14202aed0(uVar4,param_2,&local_108,local_60);
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
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f0 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14202b980 FUN_14202b980 body=891 status=ok
// SIG undefined FUN_14202b980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14202b980(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined2 *puVar10;
  undefined1 auStack_148 [32];
  undefined2 local_128;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined2 *local_100;
  int local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  cVar1 = Scaleform::GFx::URLBuilder::IsPathAbsolute
                    ((*(ulonglong *)(param_3 + 2) & 0xfffffffffffffffc) + 0xc);
  if (cVar1 == '\0') {
    if (*param_3 == 2) {
      iVar2 = strncmp((char *)((*(ulonglong *)(param_3 + 4) & 0xfffffffffffffffc) + 0xc),
                      "gamedir://",10);
      if (iVar2 != 0) {
        local_118 = 0;
        local_110 = 0;
        pcVar9 = (char *)((*(ulonglong *)(param_3 + 2) & 0xfffffffffffffffc) + 0xc);
        if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (pcVar9[lVar4] != '\0');
          uVar7 = (int)lVar4 + 1;
          local_110 = (ulonglong)uVar7;
          if (0 < (int)uVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
          }
          local_128 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_118,uVar7,pcVar9,uVar7);
        }
        FUN_141671940(&local_100,&local_118,1);
        if (local_118 != 0) {
          FMemory::Free();
        }
        puVar10 = &DAT_143f3eda8;
        if (local_f8 != 0) {
          puVar10 = local_100;
        }
        uVar5 = FUN_1432c3480(&local_118,puVar10);
        uVar6 = FUN_1432c3480(&local_e0,puVar10);
        uVar6 = FString::TrimQuotes(param_3 + 4,&local_e8,uVar6);
        uVar6 = FUN_1432c50d0(uVar6,&local_f0,&DAT_143f47cc0);
        uVar5 = FString::TrimQuotes(uVar6,&local_108,uVar5);
        FUN_1432c4d80(param_2,uVar5);
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_108 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_108 & 0xfffffffffffffffc);
        }
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_f0 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_f0 & 0xfffffffffffffffc);
        }
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_e8 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_e8 & 0xfffffffffffffffc);
        }
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_e0 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_e0 & 0xfffffffffffffffc);
        }
        uVar8 = local_118 & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar8 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
        }
        if (local_100 == (undefined2 *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
    FUN_1432bac60(param_1,param_2,param_3);
  }
  else {
    iVar2 = strncmp((char *)((*(ulonglong *)(param_3 + 2) & 0xfffffffffffffffc) + 0xc),"gamedir://",
                    10);
    if (iVar2 == 0) {
      puVar3 = (undefined8 *)FPaths::ProjectDir(&local_100);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar3;
      }
      lVar4 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,puVar10);
      Scaleform::String::operator=(param_2,*(undefined8 *)(lVar4 + 0x88));
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_100 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      lVar4 = FUN_1432c3580(param_3 + 2);
      uVar5 = FUN_1432c3de0(param_3 + 2,&local_108,10,lVar4 + 1);
      FUN_1432c4fd0(param_2,uVar5);
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_108 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_108 & 0xfffffffffffffffc);
      }
    }
    else {
      FUN_1432c4d80(param_2,param_3 + 2);
    }
  }
  return;
}



// FUNCTION 14202bd00 FUN_14202bd00 body=213 status=ok
// SIG undefined FUN_14202bd00(void)

void FUN_14202bd00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_18;
  longlong *local_10;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 200));
  iVar3 = *(int *)(*param_2 + 0x30);
  if (iVar3 == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(*param_2 + 0x28);
  }
  iVar7 = iVar3 * 2 + -2;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  local_res10 = FFnv::MemFnv64(puVar6,iVar7,1);
  local_18 = &local_res10;
  local_10 = param_2;
  FUN_1420170f0(param_1 + 0xe0,local_res8,&local_18,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 200));
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 14202bdf0 GetLocalSize body=12 status=ok
// SIG undefined GetLocalSize(void)

undefined8 * USlateBlueprintLibrary::GetLocalSize(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 14202be40 FUN_14202be40 body=83 status=ok
// SIG undefined FUN_14202be40(void)

void FUN_14202be40(longlong *param_1)

{
  longlong *plVar1;
  longlong local_18;
  longlong local_10;
  
  plVar1 = (longlong *)param_1[6];
  if (*plVar1 == 0) {
    local_18 = param_1[1];
    local_10 = param_1[2];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
      plVar1 = (longlong *)param_1[6];
    }
    FUN_142028910(*(undefined8 *)(*param_1 + 0x78),&local_18,param_1[3],plVar1,param_1 + 4);
  }
  return;
}



// FUNCTION 14202bea0 FUN_14202bea0 body=91 status=ok
// SIG undefined FUN_14202bea0(void)

ulonglong FUN_14202bea0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 local_18;
  longlong local_10;
  
  if ((param_1[4] != 0) && (param_1[5] != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(param_1[5] + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      local_18 = param_1[2];
      local_10 = param_1[3];
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      uVar3 = FUN_142038d80(*param_1,param_1[1],&local_18);
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14202bf70 FUN_14202bf70 body=69 status=ok
// SIG undefined FUN_14202bf70(void)

void FUN_14202bf70(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if ((int)param_1[10] != 0) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 4;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (*(code *)param_1[2])(uVar1);
  LOCK();
  *(int *)(*param_1 + 0x1d8) = *(int *)(*param_1 + 0x1d8) + -1;
  UNLOCK();
  return;
}



// FUNCTION 14202bff0 FUN_14202bff0 body=45 status=ok
// SIG undefined FUN_14202bff0(void)

void FUN_14202bff0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_14201d930(param_1,&local_18);
  return;
}



// FUNCTION 14202c030 FUN_14202c030 body=60 status=ok
// SIG undefined FUN_14202c030(void)

char FUN_14202c030(longlong *param_1)

{
  char cVar1;
  
  LOCK();
  cVar1 = *(char *)(*param_1 + 0x30);
  if (cVar1 == '\0') {
    *(char *)(*param_1 + 0x30) = '\0';
    cVar1 = '\0';
  }
  UNLOCK();
  if (cVar1 != '\t') {
    FUN_142058660();
  }
  LOCK();
  cVar1 = *(char *)(*param_1 + 0x210);
  if (cVar1 == '\x01') {
    *(char *)(*param_1 + 0x210) = '\0';
    cVar1 = '\x01';
  }
  UNLOCK();
  return cVar1;
}



// FUNCTION 14202c080 FUN_14202c080 body=97 status=ok
// SIG undefined FUN_14202c080(void)

void FUN_14202c080(undefined8 *param_1)

{
  int local_res8;
  int local_resc;
  undefined4 local_28;
  undefined1 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined8 local_14;
  
  FUN_142071690(&local_res8);
  local_20 = (float)local_res8;
  local_24 = 0;
  local_28 = 1;
  local_14 = 0;
  local_1c = (float)local_resc;
  local_18 = 0;
  FUN_14203e820(*param_1,&local_28);
  return;
}



// FUNCTION 14202c100 FUN_14202c100 body=104 status=ok
// SIG undefined FUN_14202c100(void)

undefined8 FUN_14202c100(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *param_1;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 200))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8));
    if (cVar3 != '\0') {
      plVar2 = *(longlong **)(*param_1 + 0x98);
      cVar3 = (**(code **)(*plVar2 + 0xe8))(plVar2,*(undefined8 *)(*param_1 + 0xa8),param_1[1]);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14202c1c0 FUN_14202c1c0 body=50 status=ok
// SIG undefined FUN_14202c1c0(void)

void FUN_14202c1c0(longlong *param_1)

{
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*param_1 != 0) {
    local_28 = 0;
    local_18 = 0;
    local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142081b30(*param_1,local_58);
  }
  return;
}



// FUNCTION 14202c210 FUN_14202c210 body=90 status=ok
// SIG undefined FUN_14202c210(void)

void FUN_14202c210(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = FUN_142039c70();
  if (lVar1 != 0) {
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = lVar1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_14202c930;
    FUN_14204c280(local_58);
  }
  return;
}



// FUNCTION 14202c2b0 FUN_14202c2b0 body=96 status=ok
// SIG undefined FUN_14202c2b0(void)

void FUN_14202c2b0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_1 + 0x98);
  (**(code **)(*plVar1 + 0x140))
            (plVar1,*(undefined8 *)(*param_1 + 0xa8),*(longlong *)param_1[1] + 0x88,
             *(undefined8 *)param_1[2],*(undefined8 *)param_1[3],*(undefined4 *)param_1[4],
             *(undefined8 *)param_1[5]);
  return;
}



// FUNCTION 14202c310 FUN_14202c310 body=67 status=ok
// SIG undefined FUN_14202c310(void)

void FUN_14202c310(longlong *param_1)

{
  longlong lVar1;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_1 + 0x468))();
    if (lVar1 != 0) {
      local_28 = 0;
      local_18 = 0;
      local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142081b30(lVar1,local_58);
    }
  }
  return;
}



// FUNCTION 14202c370 FUN_14202c370 body=77 status=ok
// SIG undefined FUN_14202c370(void)

void FUN_14202c370(longlong *param_1)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0x158);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_142033290(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00014202c3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14202c3c0 FUN_14202c3c0 body=47 status=ok
// SIG undefined FUN_14202c3c0(void)

void FUN_14202c3c0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*param_1);
    FUN_14208d760(uVar2);
    return;
  }
  return;
}



// FUNCTION 14202c490 FUN_14202c490 body=94 status=ok
// SIG undefined FUN_14202c490(void)

undefined8 FUN_14202c490(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  lVar1 = *param_1;
  uVar3 = *(uint *)(lVar1 + 0xa0) & 0x8f;
  if (uVar3 - 8 < 4) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x20))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),
                       *(undefined8 *)param_1[1],*(undefined8 *)param_1[2],uVar3 == 10);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14202c500 FUN_14202c500 body=102 status=ok
// SIG undefined FUN_14202c500(void)

void FUN_14202c500(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accc70);
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  iVar4 = iVar1 * 2 + -2;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  uVar2 = FFnv::MemFnv64(puVar3,iVar4,1);
  FUN_1407f9040(&DAT_1464f06f0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00014202c55f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accc70);
  return;
}



// FUNCTION 14202c570 FUN_14202c570 body=92 status=ok
// SIG undefined FUN_14202c570(void)

void FUN_14202c570(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  
  if (*(longlong *)(*param_1 + 0x78) != 0) {
    piVar1 = (int *)(*param_1 + 0xa4);
    LOCK();
    bVar2 = *piVar1 == 0;
    if (bVar2) {
      *piVar1 = 0;
    }
    UNLOCK();
    (**(code **)(**(longlong **)(*param_1 + 0x78) + 0x48))(*(longlong **)(*param_1 + 0x78),!bVar2);
    LOCK();
    bVar2 = *(int *)(*param_1 + 0xa4) == 0;
    if (bVar2) {
      *(int *)(*param_1 + 0xa4) = 0;
    }
    UNLOCK();
    if (!bVar2) {
      LOCK();
      *(undefined4 *)(*param_1 + 0x1dc) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14202c5d0 FUN_14202c5d0 body=116 status=ok
// SIG undefined FUN_14202c5d0(void)

undefined8 * FUN_14202c5d0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  
  plVar1 = *(longlong **)(*param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    local_res8 = (undefined4)param_2[1];
    local_resc = *(undefined4 *)((longlong)param_2 + 0xc);
    (**(code **)(*plVar1 + 0x1b0))(plVar1,&local_res10,&local_res8,0);
    *(undefined4 *)param_1 = local_res10;
    *(undefined4 *)((longlong)param_1 + 4) = local_res14;
    return param_1;
  }
  *param_1 = DAT_1468b5d88;
  return param_1;
}



// FUNCTION 14202c650 FUN_14202c650 body=32 status=ok
// SIG undefined FUN_14202c650(void)

undefined8 FUN_14202c650(undefined8 param_1,undefined8 param_2)

{
  FUN_14201f260(param_2,param_1);
  return param_1;
}



// FUNCTION 14202c680 FUN_14202c680 body=36 status=ok
// SIG undefined FUN_14202c680(void)

undefined8 FUN_14202c680(undefined8 param_1,undefined8 *param_2)

{
  FUN_14203d8c0(*param_2,param_1,param_2[1]);
  return param_1;
}



// FUNCTION 14202c720 FUN_14202c720 body=32 status=ok
// SIG undefined FUN_14202c720(void)

undefined8 FUN_14202c720(undefined8 param_1,undefined8 param_2)

{
  FUN_14201f4c0(param_2,param_1);
  return param_1;
}



// FUNCTION 14202c750 FUN_14202c750 body=32 status=ok
// SIG undefined FUN_14202c750(void)

undefined8 FUN_14202c750(undefined8 param_1,undefined8 param_2)

{
  FUN_14201f700(param_2,param_1);
  return param_1;
}



// FUNCTION 14202c7c0 FUN_14202c7c0 body=32 status=ok
// SIG undefined FUN_14202c7c0(void)

undefined8 FUN_14202c7c0(undefined8 param_1,undefined8 param_2)

{
  FUN_142020180(param_2,param_1);
  return param_1;
}



// FUNCTION 14202c7e0 FUN_14202c7e0 body=101 status=ok
// SIG undefined FUN_14202c7e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14202c7e0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    local_38 = (undefined4)param_1[2];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_30 = (undefined4)param_1[3];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_28 = (undefined4)param_1[4];
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_20 = (undefined4)param_1[5];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
    (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x118))
              (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),&local_38);
  }
  return;
}



// FUNCTION 14202c850 FUN_14202c850 body=70 status=ok
// SIG undefined FUN_14202c850(void)

undefined8 FUN_14202c850(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x110))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),param_1[1]);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14202c8f0 FUN_14202c8f0 body=32 status=ok
// SIG undefined FUN_14202c8f0(void)

undefined8 FUN_14202c8f0(undefined8 param_1,undefined8 param_2)

{
  FUN_142020b90(param_2,param_1);
  return param_1;
}



// FUNCTION 14202c950 FUN_14202c950 body=32 status=ok
// SIG undefined FUN_14202c950(void)

undefined8 FUN_14202c950(undefined8 param_1,undefined8 param_2)

{
  FUN_1420230a0(param_2,param_1);
  return param_1;
}



// FUNCTION 14202c990 thunk_FUN_1420231a0 body=5 status=ok
// SIG undefined thunk_FUN_1420231a0(void)

void thunk_FUN_1420231a0(void)

{
  FUN_1420231a0();
  return;
}



// FUNCTION 14202c9c0 FUN_14202c9c0 body=100 status=ok
// SIG undefined FUN_14202c9c0(void)

void FUN_14202c9c0(longlong *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  lVar1 = *param_1;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    FString::operator=(lVar1 + 0x38,lVar1 + 0x48);
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x40) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(lVar1 + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014202ca17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x128))
              (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),puVar2,0);
    return;
  }
  return;
}



// FUNCTION 14202ca40 FUN_14202ca40 body=71 status=ok
// SIG undefined FUN_14202ca40(void)

undefined8 FUN_14202ca40(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),
                       *(undefined8 *)param_1[1]);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14202caf0 FUN_14202caf0 body=36 status=ok
// SIG undefined FUN_14202caf0(void)

undefined8 FUN_14202caf0(undefined8 param_1,undefined8 *param_2)

{
  FUN_142048440(*param_2,param_1,param_2[1]);
  return param_1;
}



// FUNCTION 14202cb30 FUN_14202cb30 body=102 status=ok
// SIG undefined FUN_14202cb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14202cb30(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(*param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    local_38 = (undefined4)param_2[1];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_30 = (undefined4)param_2[2];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
    (**(code **)(*plVar1 + 0x1a8))(plVar1,&local_28,&local_38,0);
    *param_1 = local_28;
    param_1[1] = uStack_20;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



// FUNCTION 14202cbd0 FUN_14202cbd0 body=32 status=ok
// SIG undefined FUN_14202cbd0(void)

undefined8 FUN_14202cbd0(undefined8 param_1,undefined8 param_2)

{
  FUN_142024240(param_2,param_1);
  return param_1;
}



// FUNCTION 14202cc10 FUN_14202cc10 body=54 status=ok
// SIG undefined FUN_14202cc10(void)

void FUN_14202cc10(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if ((RefCountImpl *)param_1[1] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_1[1]);
    local_res8[0] = param_1[1];
  }
  FUN_14204cd70(*param_1,local_res8);
  return;
}



// FUNCTION 14202cc60 FUN_14202cc60 body=110 status=ok
// SIG undefined FUN_14202cc60(void)

void FUN_14202cc60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x148))
              (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),(int)param_1[1],0);
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x70) = 0;
    if (0x7fffffff < *(uint *)(lVar1 + 0x74)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar1 + 0x68,0);
    }
    if (*(undefined2 **)(lVar1 + 0x68) != (undefined2 *)0x0) {
      **(undefined2 **)(lVar1 + 0x68) = 0;
    }
  }
  return;
}



// FUNCTION 14202ccd0 FUN_14202ccd0 body=48 status=ok
// SIG undefined FUN_14202ccd0(void)

void FUN_14202ccd0(longlong *param_1)

{
  if (*(longlong *)(*param_1 + 0x78) != 0) {
    Scaleform::GFx::Movie::CreateObject
              (*(longlong *)(*param_1 + 0x78),param_1[1],param_1[2],param_1[3],(int)param_1[4]);
  }
  return;
}



// FUNCTION 14202cd10 FUN_14202cd10 body=110 status=ok
// SIG undefined FUN_14202cd10(void)

void FUN_14202cd10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x148))
              (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),(int)param_1[1],1);
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x70) = 0;
    if (0x7fffffff < *(uint *)(lVar1 + 0x74)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar1 + 0x68,0);
    }
    if (*(undefined2 **)(lVar1 + 0x68) != (undefined2 *)0x0) {
      **(undefined2 **)(lVar1 + 0x68) = 0;
    }
  }
  return;
}



// FUNCTION 14202cdc0 FUN_14202cdc0 body=87 status=ok
// SIG undefined FUN_14202cdc0(void)

undefined8 * FUN_14202cdc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 local_28 [32];
  
  uVar2 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    plVar4 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar4 = param_2 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  puVar3 = (undefined8 *)(*(code *)*param_2)(local_28,uVar2);
  uVar2 = puVar3[1];
  uVar1 = *(undefined4 *)(puVar3 + 2);
  *param_1 = *puVar3;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar1;
  return param_1;
}



// FUNCTION 14202ce20 FUN_14202ce20 body=83 status=ok
// SIG undefined FUN_14202ce20(void)

undefined8 * FUN_14202ce20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  uVar1 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 8))();
    }
  }
  puVar2 = (undefined8 *)(*(code *)*param_2)(local_res8,uVar1);
  *param_1 = *puVar2;
  return param_1;
}



// FUNCTION 14202ce80 FUN_14202ce80 body=94 status=ok
// SIG undefined FUN_14202ce80(void)

undefined4 * FUN_14202ce80(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  
  uVar1 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 8))();
    }
  }
  puVar2 = (undefined4 *)(*(code *)*param_2)(local_res8,uVar1);
  *param_1 = *puVar2;
  *puVar2 = 0xffffffff;
  FUN_1416f8340(local_res8[0]);
  return param_1;
}



// FUNCTION 14202cee0 FUN_14202cee0 body=83 status=ok
// SIG undefined FUN_14202cee0(void)

void FUN_14202cee0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((((*(int *)(param_2 + 0x28) != 0) &&
       (uVar1 = *(undefined8 *)(param_2 + 0x20), *(int *)(param_1 + 0x18) != 0)) &&
      (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x18) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x10);
    }
    (**(code **)(*plVar3 + 0x40))(plVar3,uVar1);
  }
  return;
}



// FUNCTION 14202cf40 FUN_14202cf40 body=791 status=ok
// SIG undefined FUN_14202cf40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14202cf40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1d8;
  longlong *plStack_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong local_198;
  longlong *plStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [256];
  longlong local_78;
  short *local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1a8 = param_5;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_178);
  local_1c8 = 0;
  local_1c0 = 0;
  lVar8 = -1;
  if ((local_70 != (short *)0x0) && (*local_70 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (local_70[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_1c0 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    }
    FGenericPlatformString::Memcpy(local_1c8,local_70,(longlong)(int)uVar7 * 2);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  FUN_1420390f0(param_1,&local_1d8,&local_1c8);
  plVar9 = plStack_1d0;
  if (local_1d8 == 0) {
    lVar3 = FMemory::Malloc(0x108);
    lVar8 = 0;
    if (lVar3 != 0) {
      uVar4 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_188);
      lVar8 = FUN_142019690(lVar3,uVar4,&local_1c8);
    }
    plVar5 = (longlong *)operator_new(0x18);
    plVar9 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2d0;
      plVar5[2] = lVar8;
      plVar9 = plVar5;
    }
    plVar5 = (longlong *)(lVar8 + 8);
    if (lVar8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    local_1b0 = plVar9;
    if (plVar5 != (longlong *)0x0) {
      if ((*plVar5 != 0) && (plVar5[1] != 0)) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) goto LAB_14202d123;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      *plVar5 = lVar8;
      plVar6 = (longlong *)plVar5[1];
      if (plVar9 != plVar6) {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar6 = (longlong *)plVar5[1];
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        plVar5[1] = (longlong)plVar9;
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
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
LAB_14202d123:
    local_1b8 = 0;
    local_1d8 = lVar8;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1d0,&local_1b0);
    plVar9 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1b0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    plVar9 = plStack_1d0;
    local_198 = local_1d8;
    plStack_190 = plStack_1d0;
    if (plStack_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1d0 + 1) = (int)plStack_1d0[1] + 1;
      UNLOCK();
    }
    FUN_14202bd00(param_1,&local_198);
    param_5 = local_1a8;
    if (local_1d8 == 0) goto LAB_14202d1f0;
  }
  if ((*(uint *)(local_1d8 + 0xa0) & 0x8f) - 8 < 4) {
    local_1e8 = (longlong)param_6;
    FUN_1420458d0(local_1d8,param_3,param_4,param_5);
  }
LAB_14202d1f0:
  plVar5 = plStack_1d0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_1d0)(plStack_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_1d0 + 8))(plStack_1d0,1);
      }
    }
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14202d260 FUN_14202d260 body=1080 status=ok
// SIG undefined FUN_14202d260(void)

void FUN_14202d260(undefined8 param_1,RefCountImpl *param_2,undefined8 param_3,longlong param_4,
                  uint param_5)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 *local_130;
  undefined8 local_128;
  uint *local_120;
  uint *local_118;
  RefCountImpl *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined4 local_ec;
  RefCountImpl *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  
  local_e8 = param_2;
  lVar3 = (**(code **)(*(longlong *)param_2 + 0x138))(param_2);
  local_138 = 0xffffffff;
  if (lVar3 != 0) {
    FUN_14170c210(&local_138,lVar3);
  }
  lVar3 = FUN_1416f8720(local_138);
  if (lVar3 == 0) goto LAB_14202d681;
  lVar3 = FUN_1416f8720(local_138);
  local_134 = 0xffffffff;
  if (*(longlong *)(lVar3 + 0x50) != 0) {
    FUN_14170c210(&local_134);
  }
  lVar3 = FUN_1416f8720(local_134);
  if (lVar3 != 0) {
    FName::FName(&local_e0,param_3,1);
    puVar8 = (uint *)0x0;
    local_130 = (undefined8 *)0x0;
    local_128 = 0;
    puVar6 = puVar8;
    if (param_5 != 0) {
      uVar13 = (ulonglong)param_5;
      puVar14 = (uint *)(param_4 + 0x18);
      do {
        puVar4 = (uint *)operator_new(0x30);
        puVar11 = puVar8;
        if (puVar4 != (uint *)0x0) {
          puVar4[0] = 0xffffffff;
          puVar4[1] = 0xffffffff;
          puVar4[2] = 0xffffffff;
          puVar4[3] = 0xffffffff;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar11 = puVar4;
        }
        puVar4 = (uint *)operator_new(0x18);
        local_118 = puVar8;
        if (puVar4 != (uint *)0x0) {
          puVar4[2] = 1;
          puVar4[3] = 1;
          *(undefined ***)puVar4 = &PTR_FUN_144f71da0;
          *(uint **)(puVar4 + 4) = puVar11;
          local_118 = puVar4;
        }
        local_120 = puVar11;
        SharedPointerInternals::EnableSharedFromThis(&local_120,puVar11,puVar11);
        puVar11 = local_120;
        if (local_120 != puVar14 + -6) {
          if ((local_120[6] >> 6 & 1) != 0) {
            (**(code **)(**(longlong **)(local_120 + 4) + 0x10))
                      (*(longlong **)(local_120 + 4),local_120,*(undefined8 *)(local_120 + 8));
            puVar11[4] = 0;
            puVar11[5] = 0;
          }
          puVar11[6] = *puVar14;
          *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar14 + 2);
          *(undefined8 *)(puVar11 + 10) = *(undefined8 *)(puVar14 + 4);
          if ((*puVar14 >> 6 & 1) != 0) {
            plVar9 = *(longlong **)(puVar14 + -2);
            *(longlong **)(puVar11 + 4) = plVar9;
            (**(code **)(*plVar9 + 8))(plVar9,puVar11);
          }
        }
        uVar12 = (int)puVar6 + 1;
        local_128 = CONCAT44(local_128._4_4_,uVar12);
        if (local_128._4_4_ < (int)uVar12) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_130,puVar6);
          uVar12 = (uint)local_128;
        }
        puVar11 = local_118;
        local_130[(longlong)(int)puVar6 * 2] = local_120;
        (local_130 + (longlong)(int)puVar6 * 2)[1] = local_118;
        if (local_118 != (uint *)0x0) {
          LOCK();
          local_118[2] = local_118[2] + 1;
          UNLOCK();
          if (local_118 != (uint *)0x0) {
            LOCK();
            puVar6 = local_118 + 2;
            uVar12 = *puVar6;
            *puVar6 = *puVar6 - 1;
            UNLOCK();
            if (uVar12 == 1) {
              (*(code *)**(undefined8 **)local_118)(local_118);
              LOCK();
              puVar6 = puVar11 + 3;
              uVar12 = *puVar6;
              *puVar6 = *puVar6 - 1;
              UNLOCK();
              if (uVar12 == 1) {
                (**(code **)(*(longlong *)puVar11 + 8))(puVar11,1);
              }
            }
          }
          uVar12 = (uint)local_128;
        }
        puVar6 = (uint *)(ulonglong)uVar12;
        puVar14 = puVar14 + 0xc;
        uVar13 = uVar13 - 1;
        param_2 = local_e8;
      } while (uVar13 != 0);
    }
    Scaleform::RefCountImpl::AddRef(param_2);
    local_108 = 0xffffffff;
    local_110 = param_2;
    uVar5 = FUN_1416f8720(local_138);
    FUN_14170c210(&local_108,uVar5);
    local_104 = 0xffffffff;
    uVar5 = FUN_1416f8720(local_134);
    FUN_14170c210(&local_104,uVar5);
    local_100 = local_e0;
    local_f8 = (undefined8 *)0x0;
    local_f0 = (int)puVar6;
    if (local_f0 == 0) {
      local_ec = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_f8,puVar6,0);
      puVar7 = local_130;
      puVar10 = local_f8;
      do {
        *puVar10 = *puVar7;
        lVar3 = puVar7[1];
        puVar10[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        puVar10 = puVar10 + 2;
        puVar7 = puVar7 + 2;
        uVar12 = (int)puVar6 - 1;
        puVar6 = (uint *)(ulonglong)uVar12;
      } while (uVar12 != 0);
    }
    lVar3 = DAT_146accde0;
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      puVar6 = (uint *)&DAT_00000004;
      if (DVar2 == DAT_1468c21c0) goto LAB_14202d5bc;
    }
    else {
LAB_14202d5bc:
      puVar6 = puVar8;
    }
    if (*(int *)(lVar3 + (longlong)puVar6) == 0) {
      puVar7 = (undefined8 *)FUN_142016aa0(local_88,&local_110);
      if (*(int *)(puVar7 + 8) != 0) {
        plVar9 = (longlong *)puVar7[6];
        if ((longlong *)puVar7[6] == (longlong *)0x0) {
          plVar9 = puVar7 + 2;
        }
        if (plVar9 != (longlong *)0x0) {
          puVar8 = (uint *)(**(code **)(*plVar9 + 8))();
        }
      }
      (*(code *)*puVar7)(puVar8);
      if (*(int *)(puVar7 + 8) != 0) {
        plVar9 = (longlong *)puVar7[6];
        if ((longlong *)puVar7[6] == (longlong *)0x0) {
          plVar9 = puVar7 + 2;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (puVar7[6] != 0) {
        FMemory::Free();
      }
    }
    else {
      uVar5 = FUN_142016aa0(local_d8);
      FUN_14204c280(uVar5);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_f8);
    FUN_1416f8340(local_104);
    FUN_1416f8340(local_108);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_130);
  }
  FUN_1416f8340(local_134);
LAB_14202d681:
  FUN_1416f8340(local_138);
  return;
}



// FUNCTION 14202d6a0 FUN_14202d6a0 body=678 status=ok
// SIG undefined FUN_14202d6a0(void)

void FUN_14202d6a0(undefined8 param_1,longlong *param_2,char *param_3,char *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *_Src;
  longlong lVar8;
  longlong *_Src_00;
  longlong local_58;
  ulonglong local_50;
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong local_30;
  
  lVar1 = (**(code **)(*param_2 + 0x138))(param_2);
  if (lVar1 == 0) {
    if (DAT_146b19a68 != 0) {
      UWorld::GetPlayerControllerIterator(DAT_146b19a68,&local_48);
      for (; (-1 < local_40 && (local_40 < (int)local_48[1])); local_40 = local_40 + 1) {
        local_50 = 0;
        local_58 = 0;
        if ((param_3 != (char *)0x0) && (lVar1 = -1, *param_3 != '\0')) {
          do {
            lVar8 = lVar1 + 1;
            lVar1 = lVar1 + 1;
          } while (param_3[lVar8] != '\0');
          uVar5 = (int)lVar1 + 1;
          local_50 = (ulonglong)uVar5;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          }
          FGenericPlatformString::Convert<char,wchar_t>(local_58,uVar5,param_3,uVar5,0x3f);
        }
        plVar2 = (longlong *)FWeakObjectPtr::Get(*local_48 + (longlong)local_40 * 8);
        (**(code **)(*plVar2 + 0xc60))(plVar2,&local_58,0,0);
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  else {
    plVar2 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    iVar4 = 0;
    local_3c = 0;
    lVar8 = -1;
    _Src = plVar2;
    iVar7 = iVar4;
    if ((param_4 != (char *)0x0) && (lVar6 = lVar8, _Src = (longlong *)0x0, *param_4 != '\0')) {
      do {
        lVar6 = lVar6 + 1;
      } while (param_4[lVar6] != '\0');
      iVar3 = (int)lVar6 + 1;
      local_40 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar7 = local_40;
      _Src = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar3,param_4,iVar3,0x3f);
    }
    local_48 = (longlong *)0x0;
    local_3c = 0;
    _Src_00 = plVar2;
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      do {
        lVar8 = lVar8 + 1;
      } while (param_3[lVar8] != '\0');
      iVar3 = (int)lVar8 + 1;
      local_40 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar4 = local_40;
      _Src_00 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar3,param_3,iVar3,0x3f);
    }
    local_48 = (longlong *)0x0;
    local_3c = 0;
    local_38 = (void *)0x0;
    local_30 = 0;
    local_40 = iVar4;
    if (iVar4 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar4);
      _guard_xfg_dispatch_icall_nop(local_48,_Src_00,(longlong)iVar4 * 2);
      plVar2 = (longlong *)(local_30 >> 0x20);
    }
    local_30 = CONCAT44(local_30._4_4_,iVar7);
    if ((iVar7 == 0) && ((int)plVar2 == 0)) {
      local_30 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar7);
      _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar7 * 2);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0xb0,&local_48);
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (_Src_00 != (longlong *)0x0) {
      FMemory::Free(_Src_00);
    }
    if (_Src != (longlong *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}



// FUNCTION 14202d950 FUN_14202d950 body=63 status=ok
// SIG undefined FUN_14202d950(void)

void FUN_14202d950(char param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  LOCK();
  if (DAT_146accf24 != 0) {
    iVar2 = DAT_146accf24;
  }
  UNLOCK();
  if (param_1 != '\0') {
    LOCK();
    bVar3 = DAT_146accf20 == 0;
    if (bVar3) {
      DAT_146accf20 = 0;
    }
    UNLOCK();
    iVar1 = 1;
    if (!bVar3) goto LAB_14202d977;
  }
  iVar1 = -1;
LAB_14202d977:
  iVar2 = iVar2 + iVar1;
  DAT_146accf24 = 0;
  if ((-1 < iVar2) && (DAT_146accf24 = 2, iVar2 < 2)) {
    DAT_146accf24 = iVar2;
  }
  LOCK();
  UNLOCK();
  return;
}



// FUNCTION 14202d990 FUN_14202d990 body=415 status=ok
// SIG undefined FUN_14202d990(void)

void FUN_14202d990(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x198);
  if (lVar4 != 0) {
    plVar3 = (longlong *)0x0;
    plVar2 = plVar3;
    if (*(int *)(lVar4 + 0xf0) != 0) {
      plVar2 = *(longlong **)(lVar4 + 0xe8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(lVar4 + 0xe8) != 0) {
        uVar1 = FMemory::Realloc(*(longlong *)(lVar4 + 0xe8),0,0);
        *(undefined8 *)(lVar4 + 0xe8) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0xf0) = 0;
      lVar4 = *(longlong *)(param_1 + 0x198);
    }
    plVar2 = plVar3;
    if (*(int *)(lVar4 + 0x100) != 0) {
      plVar2 = *(longlong **)(lVar4 + 0xf8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(lVar4 + 0xf8) != 0) {
        uVar1 = FMemory::Realloc(*(longlong *)(lVar4 + 0xf8),0,0);
        *(undefined8 *)(lVar4 + 0xf8) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x100) = 0;
      lVar4 = *(longlong *)(param_1 + 0x198);
    }
    plVar2 = plVar3;
    if (*(int *)(lVar4 + 0x110) != 0) {
      plVar2 = *(longlong **)(lVar4 + 0x108);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(lVar4 + 0x108) != 0) {
        uVar1 = FMemory::Realloc(*(longlong *)(lVar4 + 0x108),0,0);
        *(undefined8 *)(lVar4 + 0x108) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x110) = 0;
      lVar4 = *(longlong *)(param_1 + 0x198);
    }
    if (*(int *)(lVar4 + 0x120) != 0) {
      plVar3 = *(longlong **)(lVar4 + 0x118);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*(longlong *)(lVar4 + 0x118) != 0) {
        uVar1 = FMemory::Realloc(*(longlong *)(lVar4 + 0x118),0,0);
        *(undefined8 *)(lVar4 + 0x118) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x120) = 0;
      lVar4 = *(longlong *)(param_1 + 0x198);
    }
    if ((*(int *)(lVar4 + 0x130) != 0) &&
       (plVar3 = *(longlong **)(lVar4 + 0x128), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*(longlong *)(lVar4 + 0x128) != 0) {
        uVar1 = FMemory::Realloc(*(longlong *)(lVar4 + 0x128),0,0);
        *(undefined8 *)(lVar4 + 0x128) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x130) = 0;
    }
  }
  return;
}



// FUNCTION 14202db30 FUN_14202db30 body=732 status=ok
// SIG undefined FUN_14202db30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14202db30(longlong *param_1,int *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  uint local_98;
  undefined1 local_94 [4];
  undefined8 local_90;
  float local_88 [4];
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  undefined1 local_68 [32];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar2 + 8))(plVar2,5,"HAL::ClearSolidRectangle");
  FUN_1432dc6f0(param_1,0);
  local_90 = *(undefined8 *)((longlong)param_1 + 0x20c);
  uVar5 = 1;
  if (param_4 == '\0') {
    uVar5 = 0x10;
  }
  FUN_1432dafc0(param_1,uVar5,0,param_4);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
  local_98 = *param_3;
  puVar4 = (uint *)(**(code **)(*plVar3 + 0x38))(plVar3,local_94,&local_98);
  local_3c = 0.0;
  uVar1 = *puVar4;
  *param_3 = uVar1;
  if ((char)(uVar1 >> 0x10) == '\0') {
    local_48 = 0.0;
  }
  else {
    local_48 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
  }
  if ((char)(uVar1 >> 8) == '\0') {
    local_44 = 0.0;
  }
  else {
    local_44 = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
  }
  if ((char)uVar1 == '\0') {
    local_40 = 0.0;
  }
  else {
    local_40 = (float)(uVar1 & 0xff) * 0.003921569;
  }
  if ((char)(uVar1 >> 0x18) != '\0') {
    local_3c = (float)(uVar1 >> 0x18) * 0.003921569;
  }
  local_88[1] = 0.0;
  local_88[2] = 0.0;
  local_78 = 0;
  local_88[0] = (float)(param_2[2] - *param_2);
  local_70 = 0;
  local_88[3] = (float)*param_2;
  local_74 = (float)(param_2[3] - param_2[1]);
  local_6c = (float)param_2[1];
  FUN_1432be670(local_68,local_88,param_1[0x4b] + 0x1e0);
  plVar3 = param_1 + 0x3f2;
  (**(code **)(*plVar3 + 0x18))(plVar3,0x80002,param_1[0x60c]);
  if ((char)param_1[0x3fd] == '\0') {
    *(undefined1 *)(param_1 + 0x3fd) = 1;
    *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
    param_1[0x3f5] = 0;
    param_1[0x3f6] = 0;
    param_1[0x3f7] = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    param_1[0x3f9] = 0;
    param_1[0x3fa] = 0;
    param_1[0x3fb] = 0;
    param_1[0x3fc] = 0;
  }
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 8;
  FUN_142055c30(plVar3,param_1 + 0x5f3,0x10,local_68);
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 4;
  FUN_142055c30(plVar3,param_1 + 0x5f3,7,&local_48);
  FUN_1420709e0(plVar3,1);
  (**(code **)(*param_1 + 0x300))(param_1);
  Scaleform::Render::HAL::applyBlendMode(param_1,&local_90);
  FUN_1432dc6f0(param_1,*(undefined4 *)((longlong)param_1 + 0x204));
  (**(code **)(*plVar2 + 0x10))(plVar2,5);
  return;
}



// FUNCTION 14202de10 FUN_14202de10 body=498 status=ok
// SIG undefined FUN_14202de10(void)

void FUN_14202de10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_18,param_1 + 0xe0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  plVar5 = local_18 + (longlong)(int)local_10 * 2;
  for (plVar4 = local_18; plVar4 != plVar5; plVar4 = plVar4 + 2) {
    lVar1 = *plVar4;
    cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x70,0,1);
    if ((cVar2 != '\0') &&
       (plVar3 = (longlong *)FWeakObjectPtr::Get(lVar1 + 0x70), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x280))(plVar3);
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x108));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_18,param_1 + 0xf8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x108));
  plVar5 = local_18 + (longlong)(int)local_10 * 2;
  for (plVar4 = local_18; plVar4 != plVar5; plVar4 = plVar4 + 2) {
    lVar1 = *plVar4;
    cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x70,0,1);
    if ((cVar2 != '\0') &&
       (plVar3 = (longlong *)FWeakObjectPtr::Get(lVar1 + 0x70), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x280))(plVar3);
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x120));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_18,param_1 + 0x110);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x120));
  plVar5 = local_18 + (longlong)(int)local_10 * 2;
  for (plVar4 = local_18; plVar4 != plVar5; plVar4 = plVar4 + 2) {
    lVar1 = *plVar4;
    cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x70,0,1);
    if ((cVar2 != '\0') &&
       (plVar3 = (longlong *)FWeakObjectPtr::Get(lVar1 + 0x70), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x280))(plVar3);
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 14202e010 FUN_14202e010 body=178 status=ok
// SIG undefined FUN_14202e010(void)

void FUN_14202e010(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x108));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_18,param_1 + 0xf8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x108));
  plVar5 = local_18 + (longlong)(int)local_10 * 2;
  for (plVar4 = local_18; plVar4 != plVar5; plVar4 = plVar4 + 2) {
    lVar1 = *plVar4;
    cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x70,0,1);
    if ((cVar2 != '\0') &&
       (plVar3 = (longlong *)FWeakObjectPtr::Get(lVar1 + 0x70), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x280))(plVar3);
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 14202e0d0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FDiskCachedAssetData>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData,0>,FDefaultSetAllocator>
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



// FUNCTION 14202e180 FUN_14202e180 body=3032 status=ok
// SIG undefined FUN_14202e180(void)

void FUN_14202e180(undefined8 *param_1,undefined8 **param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  RefCountImpl *this;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *_Src;
  ulonglong uVar15;
  char *pcVar16;
  bool bVar17;
  undefined4 local_res8 [2];
  int local_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined1 local_14a;
  undefined8 *local_148;
  uint local_140;
  undefined4 local_13c;
  undefined8 *local_138;
  uint local_130;
  undefined4 local_12c;
  undefined8 *local_128;
  longlong *local_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 *local_50 [3];
  
  _Src = (undefined8 *)0x0;
  local_res8[0] = 0;
  FUN_14172a070(local_res8,0);
  uVar8 = *(uint *)(param_1 + 6);
  if ((1 < (int)uVar8) && (((byte)*(undefined4 *)(param_3 + 0x18) & 0x8f) == 9)) {
    uVar7 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x50))
                      (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    if (uVar7 < uVar8) {
      uVar8 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x50))
                        (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    }
    local_d0 = 0;
    local_d8 = (longlong *)0x0;
    local_e8 = 0xffffffffffffffff;
    uStack_e0 = 0xffffffffffffffff;
    if (uVar8 != 0) {
      do {
        (**(code **)(**(longlong **)(param_3 + 0x10) + 0x60))
                  (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),_Src,&local_e8);
        FUN_14202e180(param_1,(undefined1 *)
                              ((ulonglong)(uint)((int)_Src * *(int *)((longlong)param_1 + 0x34)) +
                              (longlong)param_2),&local_e8,param_4);
        uVar7 = (int)_Src + 1;
        _Src = (undefined8 *)(ulonglong)uVar7;
      } while (uVar7 < uVar8);
    }
    if ((local_d0 >> 6 & 1) != 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8,&local_e8,local_c8);
    }
    goto LAB_14202ed3a;
  }
  uVar8 = *(uint *)(param_3 + 0x18);
  if (((byte)uVar8 & 0x8f) == 2) {
    lVar10 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      cVar3 = *(char *)(param_3 + 0x20);
      lVar10 = UBoolProperty::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (!bVar17) {
        param_1 = _Src;
      }
      uVar15 = (ulonglong)*(byte *)((longlong)param_1 + 0x71);
      if (cVar3 == '\0') {
        *(byte *)(uVar15 + (longlong)param_2) =
             ~*(byte *)((longlong)param_1 + 0x73) & *(byte *)(uVar15 + (longlong)param_2);
      }
      else {
        *(byte *)(uVar15 + (longlong)param_2) =
             ~*(byte *)((longlong)param_1 + 0x73) & *(byte *)(uVar15 + (longlong)param_2) |
             *(byte *)((longlong)param_1 + 0x72);
      }
      goto LAB_14202ed3a;
    }
    uVar8 = *(uint *)(param_3 + 0x18);
  }
  uVar8 = uVar8 & 0x8f;
  if (uVar8 == 5) {
    lVar10 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      UByteProperty::GetPrivateStaticClass();
      *(char *)param_2 = (char)(int)*(double *)(param_3 + 0x20);
    }
    else {
      lVar10 = UIntProperty::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        UIntProperty::GetPrivateStaticClass();
        *(int *)param_2 = (int)*(double *)(param_3 + 0x20);
      }
      else {
        lVar10 = UFloatProperty::GetPrivateStaticClass();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          UFloatProperty::GetPrivateStaticClass();
          *(float *)param_2 = (float)*(double *)(param_3 + 0x20);
        }
      }
    }
    goto LAB_14202ed3a;
  }
  if (uVar8 == 3) {
    lVar10 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (!bVar17) {
      lVar10 = UIntProperty::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (!bVar17) {
        lVar10 = UFloatProperty::GetPrivateStaticClass();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          UFloatProperty::GetPrivateStaticClass();
          *(float *)param_2 = (float)*(int *)(param_3 + 0x20);
        }
        goto LAB_14202ed3a;
      }
LAB_14202e4b7:
      UIntProperty::GetPrivateStaticClass();
      *(undefined4 *)param_2 = *(undefined4 *)(param_3 + 0x20);
      goto LAB_14202ed3a;
    }
  }
  else {
    if (uVar8 != 4) {
      lVar10 = UStrProperty::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (!bVar17) {
        lVar10 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if ((bVar17) && (((byte)*(undefined4 *)(param_3 + 0x18) & 0x8f) == 9)) {
          uVar4 = *(undefined4 *)(param_1[0xe] + 0x34);
          *(undefined4 *)(param_2 + 1) = 0;
          if (*(int *)((longlong)param_2 + 0xc) != 0) {
            FScriptArray::ResizeTo(param_2,0,uVar4);
          }
          local_168 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x50))();
          iVar9 = *(int *)(param_2 + 1);
          iVar5 = *(int *)(param_1[0xe] + 0x34);
          *(int *)(param_2 + 1) = local_168 + iVar9;
          if (*(int *)((longlong)param_2 + 0xc) < local_168 + iVar9) {
            FScriptArray::ResizeGrow(param_2,iVar9,iVar5);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(iVar9 * iVar5) + (longlong)*param_2),0,
                     (longlong)(local_168 * iVar5));
          puVar13 = *param_2;
          local_b8 = 0xffffffffffffffff;
          uStack_b0 = 0xffffffffffffffff;
          local_a8 = (longlong *)0x0;
          local_a0 = 0;
          iVar9 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x50))
                            (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
          if (iVar9 != 0) {
            do {
              (**(code **)(**(longlong **)(param_3 + 0x10) + 0x60))
                        (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),_Src,
                         &local_b8);
              FUN_14202e180(param_1[0xe],
                            (ulonglong)(uint)(*(int *)(param_1[0xe] + 0x34) * (int)_Src) +
                            (longlong)puVar13,&local_b8,param_4);
              uVar7 = (int)_Src + 1;
              _Src = (undefined8 *)(ulonglong)uVar7;
              uVar8 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x50))
                                (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
            } while (uVar7 < uVar8);
          }
          if ((local_a0 >> 6 & 1) != 0) {
            (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,local_98);
          }
        }
        else {
          lVar10 = UStructProperty::GetPrivateStaticClass();
          if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
              lVar10 + 0x88)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if ((bVar17) && ((*(uint *)(param_3 + 0x18) & 0x8f) - 8 < 4)) {
            FName::FName(&local_168,L"_this",1);
            local_160 = param_1[0xe];
            if (local_160 == 0) {
              local_158 = 0;
            }
            else {
              local_158 = *(longlong *)(local_160 + 0x38);
            }
            local_14c = 0x101;
            local_150 = 0xffffffff;
            local_14a = 0;
            FUN_140472e10(&local_160);
            lVar10 = local_158;
            while (local_158 = lVar10, lVar10 != 0) {
              if (*(longlong *)(lVar10 + 0x18) == CONCAT44(uStack_164,local_168)) {
                FUN_14202e180(lVar10,(undefined1 *)
                                     ((longlong)*(int *)(lVar10 + 0x44) + (longlong)param_2),param_3
                              ,param_4);
              }
              local_158 = *(longlong *)(lVar10 + 0x28);
              FUN_140472e10(&local_160);
              lVar10 = local_158;
            }
            local_88 = &PTR_FUN_144f71710;
            local_80 = param_4;
            local_78 = param_2;
            local_70 = param_1;
            (**(code **)(**(longlong **)(param_3 + 0x10) + 0x48))
                      (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),&local_88,
                       ((byte)*(undefined4 *)(param_3 + 0x18) & 0x8f) == 10);
          }
          else {
            lVar10 = UObjectProperty::GetPrivateStaticClass();
            if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                lVar10 + 0x88)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            if (bVar17) {
              lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
              for (lVar10 = param_1[0xe]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
                if (lVar10 == lVar11) {
                  uVar8 = *(uint *)(param_3 + 0x18) & 0x8f;
                  puVar13 = _Src;
                  if (uVar8 - 8 < 4) {
                    this = (RefCountImpl *)
                           (**(code **)(**(longlong **)(param_3 + 0x10) + 0x168))
                                     (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20)
                                      ,uVar8 == 10);
                    if ((this != (RefCountImpl *)0x0) &&
                       (puVar13 = *(undefined8 **)(this + 0x28), puVar13[2] != param_1[0xe])) {
                      Scaleform::RefCountImpl::Release(this);
                      puVar13 = (undefined8 *)0x0;
                    }
                    bVar17 = param_4 == 0;
                    if (bVar17) {
                      plVar12 = &local_118;
                      local_118 = 0;
                      plStack_110 = (longlong *)0x0;
                      local_128 = _Src;
                    }
                    else {
                      plVar12 = (longlong *)FUN_140ad4c90(param_4,local_60);
                      local_128 = (undefined8 *)*plVar12;
                    }
                    local_120 = (longlong *)plVar12[1];
                    plVar12[1] = 0;
                    *plVar12 = 0;
                    plVar12 = plStack_110;
                    if ((bVar17) && (plStack_110 != (longlong *)0x0)) {
                      LOCK();
                      plVar1 = plStack_110 + 1;
                      lVar10 = *plVar1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)lVar10 == 1) {
                        (**(code **)*plStack_110)(plStack_110);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar12 + 0xc);
                        iVar9 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar9 == 1) {
                          (**(code **)(*plStack_110 + 8))(plStack_110,1);
                        }
                      }
                    }
                    if ((!bVar17) && (local_58 != (longlong *)0x0)) {
                      LOCK();
                      plVar12 = local_58 + 1;
                      lVar10 = *plVar12;
                      *(int *)plVar12 = (int)*plVar12 + -1;
                      UNLOCK();
                      if ((int)lVar10 == 1) {
                        (**(code **)*local_58)(local_58);
                        LOCK();
                        piVar2 = (int *)((longlong)local_58 + 0xc);
                        iVar9 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar9 == 1) {
                          (**(code **)(*local_58 + 8))(local_58,1);
                        }
                      }
                    }
                    puVar14 = local_128;
                    if (local_128 != (undefined8 *)0x0) {
                      local_108 = 0;
                      local_100 = 0;
                      local_f8 = 0;
                      local_f0 = 0;
                      local_68 = UPlatformInterfaceBase::GetPrivateStaticClass();
                      puVar13 = (undefined8 *)
                                FUN_14203ba40(puVar14,local_68,param_3,&local_108,&local_f8);
                      if (puVar13 == (undefined8 *)0x0) {
LAB_14202ec81:
                        puVar13 = _Src;
                      }
                      else {
                        lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
                        if ((*(int *)(puVar13[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                           (*(longlong *)
                             (*(longlong *)(puVar13[2] + 0x88) +
                             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                          bVar17 = false;
                        }
                        else {
                          bVar17 = true;
                        }
                        if (!bVar17) goto LAB_14202ec81;
                      }
                      if (local_108 != 0) {
                        FMemory::Free();
                      }
                    }
                    puVar14 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38)
                    ;
                    if (puVar14 != (undefined8 *)0x0) {
                      puVar14[1] = 0;
                      *puVar14 = &PTR_FUN_144f70a50;
                      *puVar14 = &PTR_FUN_144f70f28;
                      puVar14[6] = param_4;
                      *(undefined4 *)(puVar14 + 1) = 1;
                      puVar14[2] = 0;
                      puVar14[3] = 0;
                      *(undefined1 *)(puVar14 + 4) = 0;
                      puVar14[5] = puVar13;
                      _Src = puVar14;
                    }
                    FUN_14208edc0(puVar13,_Src);
                    plVar12 = local_120;
                    if (local_120 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_120 + 1;
                      lVar10 = *plVar1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)lVar10 == 1) {
                        (**(code **)*local_120)(local_120);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar12 + 0xc);
                        iVar9 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar9 == 1) {
                          (**(code **)(*local_120 + 8))(local_120,1);
                        }
                      }
                    }
                  }
                  *param_2 = puVar13;
                  break;
                }
              }
            }
          }
        }
        goto LAB_14202ed3a;
      }
      uVar8 = *(uint *)(param_3 + 0x18) & 0x8f;
      puVar13 = _Src;
      if (uVar8 == 6) {
        pcVar16 = *(char **)(param_3 + 0x20);
        if ((*(uint *)(param_3 + 0x18) >> 6 & 1) != 0) {
          pcVar16 = *(char **)pcVar16;
        }
        local_148 = (undefined8 *)0x0;
        local_13c = 0;
        if ((pcVar16 != (char *)0x0) && (puVar13 = (undefined8 *)0x0, *pcVar16 != '\0')) {
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (pcVar16[lVar10] != '\0');
          uVar8 = (int)lVar10 + 1;
          local_140 = uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
          }
          _Src = local_148;
          puVar13 = (undefined8 *)(ulonglong)local_140;
          FGenericPlatformString::Convert<char,wchar_t>(local_148,uVar8,pcVar16,uVar8,0x3f);
        }
        UStrProperty::GetPrivateStaticClass();
        if (param_2 != &local_148) {
          *(int *)(param_2 + 1) = (int)puVar13;
          if (((int)puVar13 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
          }
          else {
LAB_14202e784:
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,puVar13);
            _guard_xfg_dispatch_icall_nop(*param_2,_Src,(longlong)(int)puVar13 * 2);
          }
        }
      }
      else {
        if (uVar8 != 7) {
          UStrProperty::GetPrivateStaticClass();
          if (param_2 != local_50) {
            *(undefined4 *)(param_2 + 1) = 0;
            if (*(int *)((longlong)param_2 + 0xc) == 0) {
              *(undefined4 *)((longlong)param_2 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,0);
            }
          }
          goto LAB_14202ed3a;
        }
        psVar6 = *(short **)(param_3 + 0x20);
        local_138 = (undefined8 *)0x0;
        local_12c = 0;
        if ((psVar6 != (short *)0x0) && (puVar13 = (undefined8 *)0x0, *psVar6 != 0)) {
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (psVar6[lVar10] != 0);
          uVar8 = (int)lVar10 + 1;
          local_130 = uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
          }
          _Src = local_138;
          puVar13 = (undefined8 *)(ulonglong)local_130;
          FGenericPlatformString::Memcpy(local_138,psVar6,(longlong)(int)uVar8 * 2);
        }
        UStrProperty::GetPrivateStaticClass();
        if (param_2 != &local_138) {
          *(int *)(param_2 + 1) = (int)puVar13;
          if (((int)puVar13 != 0) || (*(int *)((longlong)param_2 + 0xc) != 0)) goto LAB_14202e784;
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
      }
      if (_Src != (undefined8 *)0x0) {
        FMemory::Free(_Src);
      }
      goto LAB_14202ed3a;
    }
    lVar10 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (!bVar17) {
      lVar10 = UIntProperty::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (!bVar17) {
        lVar10 = UFloatProperty::GetPrivateStaticClass();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          UFloatProperty::GetPrivateStaticClass();
          *(float *)param_2 = (float)*(uint *)(param_3 + 0x20);
        }
        goto LAB_14202ed3a;
      }
      goto LAB_14202e4b7;
    }
  }
  UByteProperty::GetPrivateStaticClass();
  *(undefined1 *)param_2 = *(undefined1 *)(param_3 + 0x20);
LAB_14202ed3a:
  FUN_14172a400(local_res8);
  return;
}



// FUNCTION 14202ed60 FUN_14202ed60 body=2378 status=ok
// SIG undefined FUN_14202ed60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14202ed60(ulonglong param_1,float *param_2,longlong param_3,longlong param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined1 local_180;
  undefined1 local_178 [8];
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  uint local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined2 *local_120;
  int local_118;
  undefined2 *local_110;
  int local_108;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  ulonglong uVar9;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FUN_14172a070(local_178,0);
  uVar10 = 0;
  if (((1 < *(int *)(param_1 + 0x30)) && (param_4 != 0)) &&
     (FNetworkPlatformFile::CreateDirectoryTree(param_4,param_3), uVar9 = uVar10,
     0 < *(int *)(param_1 + 0x30))) {
    do {
      local_180 = 0;
      local_158 = 0xffffffffffffffff;
      uStack_150 = 0xffffffffffffffff;
      local_148 = (longlong *)0x0;
      local_140 = 0;
      local_188 = local_188 & 0xffffff00;
      FUN_14202ed60(param_1,(longlong)(*(int *)(param_1 + 0x34) * (int)uVar9) + (longlong)param_2,
                    &local_158,0);
      (**(code **)(**(longlong **)(param_3 + 0x10) + 0x78))
                (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),&local_158);
      if ((local_140 >> 6 & 1) != 0) {
        (**(code **)(*local_148 + 0x10))(local_148,&local_158,local_138);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x30));
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar5 = UBoolProperty::GetPrivateStaticClass();
  if (lVar6 == lVar5) {
    bVar1 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + (longlong)param_2);
    bVar2 = *(byte *)(param_1 + 0x73);
    if ((*(uint *)(param_3 + 0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(param_3 + 0x10) + 0x10))
                (*(longlong **)(param_3 + 0x10),param_3,*(undefined8 *)(param_3 + 0x20));
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
    *(undefined4 *)(param_3 + 0x18) = 2;
    *(bool *)(param_3 + 0x20) = (bVar2 & bVar1) != 0;
  }
  else {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (param_4 != 0)) {
      lVar6 = *(longlong *)param_2;
      if (param_5 == '\0') {
        FNetworkPlatformFile::CreateDirectoryTree(param_4,param_3);
        if (0 < (int)param_2[2]) {
          do {
            local_158 = 0xffffffffffffffff;
            uStack_150 = 0xffffffffffffffff;
            local_148 = (longlong *)0x0;
            local_140 = 0;
            local_180 = 0;
            local_188 = local_188 & 0xffffff00;
            FUN_14202ed60(*(longlong *)(param_1 + 0x70),
                          *(int *)(*(longlong *)(param_1 + 0x70) + 0x34) * (int)uVar10 + lVar6,
                          &local_158,param_4);
            (**(code **)(**(longlong **)(param_3 + 0x10) + 0x78))
                      (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),&local_158);
            if ((local_140 >> 6 & 1) != 0) {
              (**(code **)(*local_148 + 0x10))(local_148,&local_158,local_138);
            }
            uVar8 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar8;
          } while ((int)uVar8 < (int)param_2[2]);
        }
      }
      else if ((((byte)*(undefined4 *)(param_3 + 0x18) & 0x8f) == 9) && (0 < (int)param_2[2])) {
        do {
          local_158 = 0xffffffffffffffff;
          uStack_150 = 0xffffffffffffffff;
          local_148 = (longlong *)0x0;
          local_140 = 0;
          (**(code **)(**(longlong **)(param_3 + 0x10) + 0x60))
                    (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),uVar10,
                     &local_158);
          local_180 = 0;
          local_188 = CONCAT31(local_188._1_3_,1);
          FUN_14202ed60(*(longlong *)(param_1 + 0x70),
                        *(int *)(*(longlong *)(param_1 + 0x70) + 0x34) * (int)uVar10 + lVar6,
                        &local_158,param_4);
          (**(code **)(**(longlong **)(param_3 + 0x10) + 0x68))
                    (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),uVar10,
                     &local_158);
          if ((local_140 >> 6 & 1) != 0) {
            (**(code **)(*local_148 + 0x10))(local_148,&local_158,local_138);
          }
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[2]);
      }
    }
    else {
      lVar6 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (param_4 != 0)) {
        if (param_5 == '\0') {
          local_188 = 0;
          Scaleform::GFx::Movie::CreateObject(param_4,param_3,0,0);
          local_170 = *(longlong *)(param_1 + 0x70);
          if (local_170 == 0) {
            local_168 = 0;
          }
          else {
            local_168 = *(longlong *)(local_170 + 0x38);
          }
          local_160 = 0xffffffff;
          local_15c = 0x101;
          local_15a = 0;
          FUN_140472e10(&local_170);
          lVar6 = local_168;
          while (local_168 = lVar6, lVar6 != 0) {
            local_158 = 0xffffffffffffffff;
            uStack_150 = 0xffffffffffffffff;
            local_148 = (longlong *)0x0;
            local_140 = 0;
            local_180 = 0;
            local_188 = local_188 & 0xffffff00;
            FUN_14202ed60(lVar6,(longlong)*(int *)(lVar6 + 0x44) + (longlong)param_2,&local_158,
                          param_4);
            local_128 = *(undefined8 *)(lVar6 + 0x18);
            FName::ToString(&local_128,&local_120);
            puVar11 = &DAT_143f3eda8;
            if (local_118 != 0) {
              puVar11 = local_120;
            }
            lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
                    TStringConversion<FTCHARToUTF8_Convert,128>(local_f8,puVar11);
            local_188 = CONCAT31(local_188._1_3_,
                                 ((byte)*(undefined4 *)(param_3 + 0x18) & 0x8f) == 10);
            (**(code **)(**(longlong **)(param_3 + 0x10) + 0x28))
                      (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),
                       *(undefined8 *)(lVar5 + 0x88),&local_158);
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_120 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if ((local_140 >> 6 & 1) != 0) {
              (**(code **)(*local_148 + 0x10))(local_148,&local_158,local_138);
            }
            local_168 = *(longlong *)(lVar6 + 0x28);
            FUN_140472e10(&local_170);
            lVar6 = local_168;
          }
        }
        else if ((*(uint *)(param_3 + 0x18) & 0x8f) - 8 < 4) {
          local_170 = *(longlong *)(param_1 + 0x70);
          if (local_170 == 0) {
            local_168 = 0;
          }
          else {
            local_168 = *(longlong *)(local_170 + 0x38);
          }
          local_160 = 0xffffffff;
          local_15c = 0x101;
          local_15a = 0;
          FUN_140472e10(&local_170);
          lVar6 = local_168;
          while (local_168 = lVar6, lVar6 != 0) {
            local_158 = 0xffffffffffffffff;
            uStack_150 = 0xffffffffffffffff;
            local_148 = (longlong *)0x0;
            local_140 = 0;
            local_128 = *(undefined8 *)(lVar6 + 0x18);
            FName::ToString(&local_128,&local_110);
            puVar11 = &DAT_143f3eda8;
            if (local_108 != 0) {
              puVar11 = local_110;
            }
            lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
                    TStringConversion<FTCHARToUTF8_Convert,128>(local_f8,puVar11);
            local_188 = CONCAT31(local_188._1_3_,
                                 ((byte)*(undefined4 *)(param_3 + 0x18) & 0x8f) == 10);
            cVar4 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x20))
                              (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),
                               *(undefined8 *)(lVar5 + 0x88),&local_158);
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_110 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            local_180 = 0;
            local_188 = local_188 & 0xffffff00;
            FUN_14202ed60(lVar6,(longlong)*(int *)(lVar6 + 0x44) + (longlong)param_2,&local_158,
                          param_4);
            if (cVar4 == '\0') {
              local_128 = *(undefined8 *)(lVar6 + 0x18);
              FName::ToString(&local_128,&local_120);
              puVar11 = &DAT_143f3eda8;
              if (local_118 != 0) {
                puVar11 = local_120;
              }
              lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
                      TStringConversion<FTCHARToUTF8_Convert,128>(local_f8,puVar11);
              local_188 = CONCAT31(local_188._1_3_,
                                   ((byte)*(undefined4 *)(param_3 + 0x18) & 0x8f) == 10);
              (**(code **)(**(longlong **)(param_3 + 0x10) + 0x28))
                        (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),
                         *(undefined8 *)(lVar5 + 0x88),&local_158);
              if (local_78 != 0) {
                FMemory::Free();
              }
              if (local_120 != (undefined2 *)0x0) {
                FMemory::Free();
              }
            }
            if ((local_140 >> 6 & 1) != 0) {
              (**(code **)(*local_148 + 0x10))(local_148,&local_158,local_138);
            }
            local_168 = *(longlong *)(lVar6 + 0x28);
            FUN_140472e10(&local_170);
            lVar6 = local_168;
          }
        }
      }
      else {
        lVar6 = UByteProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          UByteProperty::GetPrivateStaticClass();
          FUN_142052280(param_3,*(undefined1 *)param_2);
        }
        else {
          lVar6 = UIntProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            UIntProperty::GetPrivateStaticClass();
            FUN_142052280(param_3,*param_2);
          }
          else {
            lVar6 = UFloatProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              UFloatProperty::GetPrivateStaticClass();
              FUN_142052be0(param_3,(double)*param_2);
            }
            else {
              lVar6 = UStrProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                UStrProperty::GetPrivateStaticClass();
                if (param_2[2] == 0.0) {
                  puVar11 = &DAT_143f3eda8;
                }
                else {
                  puVar11 = *(undefined2 **)param_2;
                }
                if ((*(uint *)(param_3 + 0x18) >> 6 & 1) != 0) {
                  (**(code **)(**(longlong **)(param_3 + 0x10) + 0x10))
                            (*(longlong **)(param_3 + 0x10),param_3,*(undefined8 *)(param_3 + 0x20))
                  ;
                  *(undefined8 *)(param_3 + 0x10) = 0;
                }
                *(undefined4 *)(param_3 + 0x18) = 7;
                *(undefined2 **)(param_3 + 0x20) = puVar11;
              }
              else {
                lVar6 = UObjectProperty::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  lVar6 = UObjectProperty::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
                  if (!bVar3) {
                    param_1 = uVar10;
                  }
                  for (lVar5 = *(longlong *)(param_1 + 0x70); lVar5 != 0;
                      lVar5 = *(longlong *)(lVar5 + 0x30)) {
                    if (lVar5 == lVar6) {
                      UByteProperty::GetPrivateStaticClass();
                      uVar7 = FUN_142086ad0(*(undefined1 *)param_2);
                      FUN_1410b5e10(param_3,uVar7);
                      goto LAB_14202f682;
                    }
                  }
                  FUN_142052b90(param_3);
                }
                else {
                  lVar6 = UBoolProperty::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    lVar5 = UBoolProperty::GetPrivateStaticClass();
                    lVar6 = *(longlong *)(param_1 + 0x10);
                    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                        lVar5 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (!bVar3) {
                      param_1 = uVar10;
                    }
                    FUN_142050490(param_3,CONCAT71((int7)((ulonglong)lVar6 >> 8),
                                                   (*(byte *)(param_1 + 0x73) &
                                                   *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) +
                                                            (longlong)param_2)) != 0));
                  }
                  else {
                    FUN_142055bf0(param_3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14202f682:
  FUN_14172a400(local_178);
  return;
}



// FUNCTION 14202f6b0 FUN_14202f6b0 body=95 status=ok
// SIG undefined FUN_14202f6b0(void)

undefined8 * FUN_14202f6b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f71ae0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_1 + 0x60);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202f710 FUN_14202f710 body=136 status=ok
// SIG undefined FUN_14202f710(void)

undefined8 * FUN_14202f710(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71b58;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar2 + 2,uVar3);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202f7a0 FUN_14202f7a0 body=162 status=ok
// SIG undefined FUN_14202f7a0(void)

undefined8 * FUN_14202f7a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144f71c30;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar3[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    if ((((longlong *)(param_1 + 0x28) != puVar3 + 5) && (*(int *)(param_1 + 0x30) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202f850 FUN_14202f850 body=118 status=ok
// SIG undefined FUN_14202f850(void)

undefined8 * FUN_14202f850(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71c48;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202f8d0 FUN_14202f8d0 body=78 status=ok
// SIG undefined FUN_14202f8d0(void)

void FUN_14202f8d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71c18;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    puVar2[9] = uVar1;
    return;
  }
  return;
}



// FUNCTION 14202f920 CopyToEmptyStorage body=87 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_f191fa227473d62ee3ab26737a808419>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71a98;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202f980 FUN_14202f980 body=124 status=ok
// SIG undefined FUN_14202f980(void)

undefined8 * FUN_14202f980(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71d28;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fa00 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_8256096489d2c5e4f9ff31482a700bae>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71988;
    FString::FString(puVar1 + 1,param_1 + 8);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fa50 FUN_14202fa50 body=110 status=ok
// SIG undefined FUN_14202fa50(void)

undefined8 * FUN_14202fa50(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71b70;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fac0 FUN_14202fac0 body=87 status=ok
// SIG undefined FUN_14202fac0(void)

undefined8 * FUN_14202fac0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x100);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f71bb8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    FUN_142018820(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fb20 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144f71de0;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fb90 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144f71e28;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fc00 FUN_14202fc00 body=117 status=ok
// SIG undefined FUN_14202fc00(void)

undefined8 * FUN_14202fc00(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71c00;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x38);
    puVar2[7] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fc80 FUN_14202fc80 body=113 status=ok
// SIG undefined FUN_14202fc80(void)

undefined8 * FUN_14202fc80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f71ac8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    FString::FString(puVar1 + 3,param_1 + 0x18);
    FString::FString(puVar1 + 5,param_1 + 0x28);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 8,param_1 + 0x40);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fd00 FUN_14202fd00 body=70 status=ok
// SIG undefined FUN_14202fd00(void)

void FUN_14202fd00(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71be8;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = uVar1;
    return;
  }
  return;
}



// FUNCTION 14202fd50 FUN_14202fd50 body=252 status=ok
// SIG undefined FUN_14202fd50(void)

undefined8 * FUN_14202fd50(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71c60;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar2 + 2,uVar3);
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar2 + 0x14,uVar3);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = 0;
    iVar6 = *(int *)(param_1 + 0x28);
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    *(int *)(puVar2 + 5) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 4,iVar6,0);
      puVar4 = (undefined8 *)puVar2[4];
      do {
        *puVar4 = *puVar5;
        lVar1 = puVar5[1];
        puVar4[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fe50 FUN_14202fe50 body=79 status=ok
// SIG undefined FUN_14202fe50(void)

void FUN_14202fe50(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71ab0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 14202fea0 FUN_14202fea0 body=169 status=ok
// SIG undefined FUN_14202fea0(void)

undefined8 * FUN_14202fea0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71af8;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar2 + 4) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x20));
    FUN_14170c210(puVar2 + 4,uVar3);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 8,param_1 + 0x40);
    *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)(param_1 + 0x90);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202ff50 FUN_14202ff50 body=149 status=ok
// SIG undefined FUN_14202ff50(void)

undefined8 * FUN_14202ff50(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71b40;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar2 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar2 + 4) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x20));
    FUN_14170c210(puVar2 + 4,uVar3);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14202fff0 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144f71e10;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142030060 FUN_142030060 body=89 status=ok
// SIG undefined FUN_142030060(void)

void FUN_142030060(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144f71d10;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[5] = *(undefined8 *)(param_1 + 0x28);
    return;
  }
  return;
}



// FUNCTION 1420300c0 CopyToEmptyStorage body=47 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_864112e9194e61e857c6e3004369e7d1>_>::
     CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140438ef0(0x90);
  if (lVar1 != 0) {
    FUN_1420182e0(lVar1,param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 1420300f0 FUN_1420300f0 body=118 status=ok
// SIG undefined FUN_1420300f0(void)

undefined8 * FUN_1420300f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f71b10;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142030170 FUN_142030170 body=118 status=ok
// SIG undefined FUN_142030170(void)

undefined8 * FUN_142030170(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71b88;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420301f0 FUN_1420301f0 body=189 status=ok
// SIG undefined FUN_1420301f0(void)

undefined8 * FUN_1420301f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71b28;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      Scaleform::GFx::Resource::AddRef(*(longlong *)(param_1 + 0x18));
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    puVar2[3] = uVar3;
    uVar3 = 0;
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    puVar2[4] = uVar3;
    uVar3 = 0;
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
    }
    puVar2[5] = uVar3;
    uVar3 = 0;
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
    }
    puVar2[6] = uVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420302b0 FUN_1420302b0 body=184 status=ok
// SIG undefined FUN_1420302b0(void)

undefined8 * FUN_1420302b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_140438ef0(0x58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144f71ba0;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar3[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[5] = 0xffffffffffffffff;
    puVar3[6] = 0xffffffffffffffff;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(param_1 + 0x40);
    puVar3[9] = *(undefined8 *)(param_1 + 0x48);
    puVar3[10] = *(undefined8 *)(param_1 + 0x50);
    if ((*(uint *)(param_1 + 0x40) >> 6 & 1) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x38);
      puVar3[7] = plVar2;
      (**(code **)(*plVar2 + 8))();
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142030370 FUN_142030370 body=99 status=ok
// SIG undefined FUN_142030370(void)

undefined8 * FUN_142030370(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f71cf8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    uVar2 = 0;
    if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x10));
      uVar2 = *(undefined8 *)(param_1 + 0x10);
    }
    puVar1[2] = uVar2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420303e0 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144f71df8;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142030450 FUN_142030450 body=116 status=ok
// SIG undefined FUN_142030450(void)

undefined8 * FUN_142030450(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *puVar2 = &PTR_FUN_144f71bd0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)puVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    puVar2[2] = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420304d0 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71d40;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142030520 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71d58;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142030570 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71d70;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420305c0 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71d88;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142030610 FUN_142030610 body=221 status=ok
// SIG undefined FUN_142030610(void)

longlong * FUN_142030610(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_3;
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)FUN_142031ef0(param_1,param_2,&local_18);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x280))(plVar6);
    plVar4 = (longlong *)param_3[1];
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
    return plVar6;
  }
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1420306f0 FUN_1420306f0 body=177 status=ok
// SIG undefined FUN_1420306f0(void)

void FUN_1420306f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144f719a0;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 6,param_1 + 0x30);
    puVar2[0x10] = *(undefined8 *)(param_1 + 0x80);
    lVar1 = *(longlong *)(param_1 + 0x88);
    puVar2[0x11] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[0x12] = *(undefined8 *)(param_1 + 0x90);
    puVar2[0x15] = *(undefined8 *)(param_1 + 0xa8);
    *puVar2 = &PTR_GetPoolName_144f719e8;
  }
  return;
}



// FUNCTION 1420307b0 FUN_1420307b0 body=64 status=ok
// SIG undefined FUN_1420307b0(void)

void FUN_1420307b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144f71c78;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1420307f0 FUN_1420307f0 body=64 status=ok
// SIG undefined FUN_1420307f0(void)

void FUN_1420307f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144f71cb8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 142030830 FUN_142030830 body=66 status=ok
// SIG undefined FUN_142030830(void)

void FUN_142030830(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144f71160;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144f711a8;
  }
  return;
}



// FUNCTION 142030880 FUN_142030880 body=66 status=ok
// SIG undefined FUN_142030880(void)

void FUN_142030880(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144f711f0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144f71238;
  }
  return;
}



// FUNCTION 1420308d0 FUN_1420308d0 body=959 status=ok
// SIG undefined FUN_1420308d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420308d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2c8 [32];
  undefined2 local_2a8;
  longlong *local_298;
  longlong *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  LARGE_INTEGER local_258 [2];
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined1 *local_1a8 [2];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  longlong *local_158;
  longlong *local_150;
  undefined1 local_148 [16];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar7 = (longlong *)0x0;
  local_218 = 0;
  local_208 = 0;
  local_278 = param_1;
  uStack_270 = (longlong *)param_2;
  local_268 = param_3;
  uStack_260 = param_4;
  puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_238);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_278;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_278._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_270;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_270._4_4_;
    puVar3[3] = local_268;
    puVar3[4] = uStack_260;
  }
  local_288 = 0;
  local_248[0] = &LAB_14202c450;
  local_280 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  local_2a8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_288,0xf,"CreateFunction");
  FUN_140cdf730(local_f8,&local_288,local_248);
  QueryPerformanceCounter(local_258);
  local_f8[0] = local_258[0];
  lVar4 = operator_new(0x18);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140cdf810(lVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  local_298 = plVar5;
  local_290 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_298,plVar5,plVar5);
  *(undefined1 *)(local_298 + 2) = 1;
  uStack_270 = (longlong *)local_298[1];
  local_38 = *local_298;
  if (uStack_270 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_270 + 1) = (int)uStack_270[1] + 1;
    UNLOCK();
  }
  local_278 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&uStack_270);
  plVar7 = uStack_270;
  if (uStack_270 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_270 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*uStack_270)(uStack_270);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_270 + 8))(uStack_270,1);
      }
    }
  }
  local_178 = (longlong *)0x0;
  local_168 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_198);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = local_f8;
  }
  local_1a8[0] = &LAB_140cee980;
  local_158 = local_298;
  local_150 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_290 + 1) = (int)local_290[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_148,local_1a8);
  local_1c8 = 0;
  local_1b8 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar3[2] = local_158;
    puVar3[3] = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 4,local_148);
  }
  local_1f8[0] = &LAB_140cee8d0;
  if (local_108 != 0) {
    plVar7 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar7 = local_118;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_150 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_150)(local_150);
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
  if (local_168 != 0) {
    plVar7 = local_198;
    if (local_178 != (longlong *)0x0) {
      plVar7 = local_178;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_290 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_290)(local_290);
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
  FUN_142032420(param_1,local_1f8);
  FUN_140d1b3a0(local_f8);
  FUN_140ce1dc0(local_f8);
  return;
}



// FUNCTION 142030c90 FUN_142030c90 body=393 status=ok
// SIG undefined FUN_142030c90(void)

int FUN_142030c90(int param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_146accb00);
  for (piVar3 = DAT_146accb08; piVar3 != DAT_146accb08 + DAT_146accb10; piVar3 = piVar3 + 1) {
    if (*piVar3 == param_1) {
      if (piVar3 != DAT_146accb08 + DAT_146accb10) {
        iVar2 = (int)((longlong)piVar3 - (longlong)DAT_146accb08 >> 2);
        goto LAB_142030cdb;
      }
      break;
    }
  }
  iVar2 = -1;
LAB_142030cdb:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_146accb00);
  if (iVar2 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146acd008) &&
       (_Init_thread_header(&DAT_146acd008), DAT_146acd008 == -1)) {
      plVar1 = (longlong *)FUN_14208af10(0,0);
      DAT_146acd000 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Init_thread_footer(&DAT_146acd008);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accb00);
    (**(code **)(*DAT_146b62f28 + 8))(DAT_146b62f28,param_1,DAT_146acd000);
    iVar2 = DAT_146accb10;
    lVar4 = (longlong)DAT_146accb10;
    for (piVar3 = DAT_146accb08; piVar3 != DAT_146accb08 + lVar4; piVar3 = piVar3 + 1) {
      if (*piVar3 == param_1) {
        if ((int)((longlong)piVar3 - (longlong)DAT_146accb08 >> 2) != -1) goto LAB_142030db0;
        break;
      }
    }
    DAT_146accb10 = DAT_146accb10 + 1;
    if (DAT_146accb14 < DAT_146accb10) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146accb08,iVar2);
    }
    DAT_146accb08[lVar4] = param_1;
LAB_142030db0:
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accb00);
  }
  return param_1;
}



// FUNCTION 142030e20 FUN_142030e20 body=1236 status=ok
// SIG undefined FUN_142030e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142030e20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined1 auStack_168 [32];
  DWORD local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  longlong local_130;
  longlong local_128 [2];
  DWORD local_118;
  longlong local_110;
  undefined2 *local_108;
  int local_100;
  undefined1 local_f0 [24];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar19 = 0;
  LOCK();
  bVar25 = *(int *)(param_1 + 0x1e0) == 0;
  if (bVar25) {
    *(int *)(param_1 + 0x1e0) = 0;
  }
  UNLOCK();
  if (!bVar25) {
    return;
  }
  LOCK();
  cVar4 = *(char *)(param_1 + 0x30);
  if (cVar4 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar4 = '\0';
  }
  UNLOCK();
  if ('\x05' < cVar4) {
    return;
  }
  cVar4 = FUN_142055370(param_1,2);
  if (cVar4 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x88) == 0) {
    DVar5 = GetCurrentThreadId();
  }
  else {
    DVar5 = FUN_140953d20();
  }
  local_148 = DVar5;
  cVar4 = FUN_142056810();
  uVar23 = uVar19;
  if (((cVar4 == '\0') || (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x70), cVar4 == '\0')) ||
     (lVar10 = FWeakObjectPtr::Get(param_1 + 0x70), lVar12 = DAT_146acc888,
     (*(uint *)(lVar10 + 0x40) & 0x200000) == 0)) goto LAB_142030fe5;
  uVar22 = 0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    uVar11 = 4;
    if (DVar6 == DAT_1468c21c0) goto LAB_142030f27;
  }
  else {
LAB_142030f27:
    uVar11 = uVar19;
  }
  if (*(int *)(uVar11 + lVar12) != 0) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_146accb20);
    puVar18 = DAT_146accb30;
    LOCK();
    _DAT_146accb2c = _DAT_146accb2c + 1;
    UNLOCK();
    puVar24 = DAT_146accb30 + (longlong)DAT_146accb38 * 4;
    for (puVar21 = DAT_146accb30; puVar21 != puVar24; puVar21 = puVar21 + 4) {
      if (*(int *)(puVar21 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar21;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = *(undefined2 **)(param_1 + 0x10);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar16);
      if ((iVar7 == 0) && (DVar5 == *(DWORD *)(puVar21 + 3))) {
        uVar23 = uVar22;
        if ((puVar21 != puVar24) &&
           ((iVar7 = (int)((longlong)puVar21 - (longlong)puVar18 >> 5), -1 < iVar7 &&
            (iVar7 < DAT_146accb38)))) {
          uVar23 = DAT_146accb30[(longlong)iVar7 * 4 + 2];
        }
        break;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_146accb20);
    LOCK();
    _DAT_146accb2c = _DAT_146accb2c + -1;
    UNLOCK();
  }
LAB_142030fe5:
  *(ulonglong *)(param_1 + 0x80) = uVar23;
  if (uVar23 == 0) {
    cVar4 = FUN_1420594d0();
    if (cVar4 != '\0') {
      uVar8 = FUN_142030c90(DVar5);
      uVar19 = (ulonglong)uVar8;
    }
    puVar21 = (undefined8 *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*puVar21;
    }
    local_138 = puVar21;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar16);
    lVar12 = FUN_142039c70();
    plVar3 = *(longlong **)(lVar12 + 0x188);
    uVar14 = *(undefined8 *)(lVar12 + 0x180);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    uVar13 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_f0);
    uVar9 = FUN_14203aad0(uVar13);
    uVar14 = Scaleform::GFx::Loader::CreateMovie(uVar14,local_50,uVar9,uVar19);
    *(undefined8 *)(param_1 + 0x80) = uVar14;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    cVar4 = FUN_142056810();
    if ((((cVar4 != '\0') && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x70), cVar4 != '\0')) &&
        (lVar12 = FWeakObjectPtr::Get(param_1 + 0x70), (*(uint *)(lVar12 + 0x40) & 0x200000) != 0))
       && ((lVar12 = *(longlong *)(param_1 + 0x80), lVar12 != 0 &&
           (cVar4 = FUN_142056810(), cVar4 != '\0')))) {
      local_130 = lVar12;
      FString::FString(local_128,puVar21);
      local_118 = DVar5;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accb20);
      puVar18 = DAT_146accb30;
      LOCK();
      DAT_146accb28 = 1;
      UNLOCK();
      puVar20 = DAT_146accb30 + (longlong)DAT_146accb38 * 4;
      local_140 = DAT_146accb30;
      local_110 = local_130;
      FString::FString(&local_108,local_128);
      lVar10 = local_110;
      DVar5 = local_118;
      puVar24 = puVar18;
      for (; puVar18 != puVar20; puVar18 = puVar18 + 4) {
        if (DVar5 == *(DWORD *)(puVar18 + 3)) {
          puVar21 = local_138;
          puVar24 = local_140;
          if (lVar10 == puVar18[2]) break;
          if (*(int *)(puVar18 + 1) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)*puVar18;
          }
          puVar15 = &DAT_143f3eda8;
          if (local_100 != 0) {
            puVar15 = local_108;
          }
          iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar16);
          puVar21 = local_138;
          puVar24 = local_140;
          if (iVar7 == 0) break;
        }
        puVar21 = local_138;
        puVar24 = local_140;
      }
      if (local_108 != (undefined2 *)0x0) {
        FMemory::Free(local_108);
      }
      iVar7 = DAT_146accb38;
      lVar10 = (longlong)DAT_146accb38;
      if (((puVar18 == puVar20) ||
          (iVar17 = (int)((longlong)puVar18 - (longlong)puVar24 >> 5), iVar17 < 0)) ||
         (DAT_146accb38 <= iVar17)) {
        DAT_146accb38 = DAT_146accb38 + 1;
        if (DAT_146accb3c < DAT_146accb38) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&DAT_146accb30,iVar7);
        }
        puVar18 = DAT_146accb30 + lVar10 * 4;
        *puVar18 = 0;
        puVar18[1] = 0;
        *(undefined4 *)(puVar18 + 3) = 0;
        puVar18[2] = lVar12;
        FString::operator=(puVar18,puVar21);
        *(DWORD *)(puVar18 + 3) = local_148;
      }
      else {
        DAT_146accb30[(longlong)iVar17 * 4 + 2] = lVar12;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accb20);
      LOCK();
      DAT_146accb28 = 0;
      UNLOCK();
      Scaleform::GFx::Resource::AddRef(lVar12);
      if (local_128[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    Scaleform::GFx::Resource::AddRef(uVar23);
  }
  return;
}



// FUNCTION 142031300 FUN_142031300 body=1028 status=ok
// SIG undefined FUN_142031300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142031300(longlong param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  DWORD local_1d8 [2];
  DWORD local_1d0 [2];
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  undefined2 *local_1b8;
  int local_1b0;
  DWORD *local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198 [2];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined1 local_138 [16];
  undefined1 local_128 [96];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  puVar10 = (undefined8 *)0x0;
  LOCK();
  bVar14 = *(int *)(param_1 + 0x1e0) == 0;
  if (bVar14) {
    *(int *)(param_1 + 0x1e0) = 0;
  }
  UNLOCK();
  if (!bVar14) {
    return;
  }
  LOCK();
  cVar2 = *(char *)(param_1 + 0x30);
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if ('\x05' < cVar2) {
    return;
  }
  cVar2 = FUN_142055370(param_1,3);
  lVar11 = DAT_146accae0;
  if (cVar2 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    puVar7 = (undefined8 *)&DAT_00000004;
    if (DVar3 != DAT_1468c21c0) goto LAB_1420313a6;
  }
  puVar7 = puVar10;
LAB_1420313a6:
  if (*(int *)((longlong)puVar7 + lVar11) != 0) {
    uVar4 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_138);
    uVar5 = FUN_14203aad0(uVar4);
    if ((uVar5 & 1) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x68))(*(longlong **)(param_1 + 0x80),0);
    }
  }
  cVar2 = FUN_142059540();
  if (cVar2 == '\0') {
    lVar11 = FUN_142039c70();
    local_1e8 = (**(code **)(*(longlong *)(*(longlong *)(lVar11 + 0x40) + 0x10) + 0x20))
                          (*(longlong *)(lVar11 + 0x40) + 0x10);
    local_188 = 0x2000;
    uStack_180 = 0x2000;
    local_158 = 0x3e800000;
    local_198[0] = 0;
    local_190 = 0x10;
    local_178 = 0xffffffffffffffff;
    uStack_170 = 0;
    local_168 = 0;
    local_154 = 0xffffffffffffffff;
    local_14c = 0xffffffffffffffff;
    local_144 = 0xffffffffffffffff;
    local_160 = 0;
    plVar9 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x80) + 0xc0))
                       (*(longlong **)(param_1 + 0x80),local_198,1,0);
  }
  else {
    if (*(longlong *)(param_1 + 0x88) == 0) {
      DVar3 = GetCurrentThreadId();
    }
    else {
      DVar3 = FUN_140953d20();
    }
    FUN_142030c90(DVar3);
    plVar9 = *(longlong **)(param_1 + 0x80);
    local_1d8[0] = DVar3;
    AcquireSRWLockShared((PSRWLOCK)&DAT_146accb18);
    if (DAT_1464f06a8 != DAT_1464f06d4) {
      puVar6 = DAT_1464f06e0;
      if (DAT_1464f06e0 == (undefined *)0x0) {
        puVar6 = &DAT_1464f06d8;
      }
      iVar1 = *(int *)(puVar6 + ((longlong)DAT_1464f06e8 - 1U & (longlong)(int)local_1d8[0]) * 4);
      while (iVar1 != -1) {
        lVar11 = (longlong)iVar1;
        if (*(DWORD *)(DAT_1464f06a0 + lVar11 * 0x18) == local_1d8[0]) {
          puVar7 = (undefined8 *)(DAT_1464f06a0 + lVar11 * 0x18);
          if (iVar1 != -1) goto LAB_142031495;
          break;
        }
        iVar1 = *(int *)(DAT_1464f06a0 + (lVar11 * 3 + 2) * 8);
      }
    }
    puVar7 = puVar10;
LAB_142031495:
    puVar13 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      puVar13 = puVar10;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_146accb18);
    if (puVar13 == (undefined8 *)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accb18);
      local_1d0[0] = local_1d8[0];
      FUN_142023f70(local_1d0,local_128);
      FString::PrintfImpl(&local_1b8,L"AllMovieViews(%d)",local_1d8[0]);
      puVar12 = &DAT_143f3eda8;
      if (local_1b0 != 0) {
        puVar12 = local_1b8;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar12);
      local_1c8 = (**(code **)(*plVar9 + 0xb0))(plVar9,local_40,local_128,0);
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_1b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_1a8 = local_1d8;
      local_1a0 = &local_1c8;
      FUN_141711280(&DAT_1464f06a0,local_1c0,&local_1a8,0);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accb18);
      uVar4 = local_1c8;
    }
    else {
      uVar4 = *puVar13;
    }
    lVar8 = FUN_142039c70();
    lVar11 = **(longlong **)(param_1 + 0x80);
    local_1e8 = (**(code **)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x10) + 0x20))();
    plVar9 = (longlong *)(**(code **)(lVar11 + 0xb8))(*(undefined8 *)(param_1 + 0x80),uVar4,1,0);
  }
  *(longlong **)(param_1 + 0x78) = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FUN_1432de450(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0xd0))(plVar9);
    if ((RefCountImpl *)*puVar10 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*puVar10);
    }
    if (*(RefCountImpl **)(param_1 + 0x178) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x178));
    }
    *(undefined8 *)(param_1 + 0x178) = *puVar10;
    lVar11 = **(longlong **)(param_1 + 0x78);
    uVar4 = FUN_14203bcd0(param_1);
    (**(code **)(lVar11 + 0x140))(*(undefined8 *)(param_1 + 0x78),uVar4);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x50))();
    LOCK();
    *(uint *)(param_1 + 0xa4) = (uint)(cVar2 != '\0');
    UNLOCK();
  }
  return;
}



// FUNCTION 142031710 FUN_142031710 body=968 status=ok
// SIG undefined FUN_142031710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142031710(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2b8 [32];
  undefined2 local_298;
  longlong *local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong *local_260;
  LARGE_INTEGER local_258 [2];
  code *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined1 *local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  longlong *local_178;
  int local_168;
  longlong *local_158;
  longlong *local_150;
  undefined1 local_148 [16];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  plVar7 = (longlong *)0x0;
  local_188 = param_5;
  local_218 = 0;
  local_208 = 0;
  local_1a8 = param_1;
  uStack_1a0 = param_2;
  local_198 = param_3;
  uStack_190 = param_4;
  puVar3 = (undefined8 *)FUN_140438ef0(0x30,local_238);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f4d098;
    puVar3[1] = local_1a8;
    puVar3[2] = uStack_1a0;
    puVar3[3] = local_198;
    puVar3[4] = uStack_190;
    puVar3[5] = CONCAT44(uStack_184,local_188);
  }
  local_278 = 0;
  local_248[0] = FUN_14202ccd0;
  local_270 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
  local_298 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_278,0xd,"CreateObject");
  FUN_140cdf730(local_f8,&local_278,local_248);
  QueryPerformanceCounter(local_258);
  local_f8[0] = local_258[0];
  lVar4 = operator_new(0x18);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140cdf810(lVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  local_288 = plVar5;
  local_280 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_288,plVar5,plVar5);
  *(undefined1 *)(local_288 + 2) = 1;
  local_260 = (longlong *)local_288[1];
  local_38 = *local_288;
  if (local_260 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_260 + 1) = (int)local_260[1] + 1;
    UNLOCK();
  }
  local_268 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_260);
  plVar7 = local_260;
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_260 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_260 + 8))(local_260,1);
      }
    }
  }
  local_178 = (longlong *)0x0;
  local_168 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,&local_198);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = local_f8;
  }
  local_1a8 = &LAB_140cee980;
  local_158 = local_288;
  local_150 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_280 + 1) = (int)local_280[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_148,&local_1a8);
  local_1c8 = 0;
  local_1b8 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar3[2] = local_158;
    puVar3[3] = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 4,local_148);
  }
  local_1f8[0] = &LAB_140cee8d0;
  if (local_108 != 0) {
    plVar7 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar7 = local_118;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_150 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_150)(local_150);
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
  if (local_168 != 0) {
    plVar7 = &local_198;
    if (local_178 != (longlong *)0x0) {
      plVar7 = local_178;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_280 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_280)(local_280);
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
  FUN_142032420(param_1,local_1f8);
  FUN_140d1b3a0(local_f8);
  FUN_140ce1dc0(local_f8);
  return;
}



// FUNCTION 142031ae0 FUN_142031ae0 body=332 status=ok
// SIG undefined FUN_142031ae0(void)

undefined8 * FUN_142031ae0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144f71a30;
  *(undefined1 *)(plVar6 + 10) = 0;
  plVar6[0xb] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142031c30 FUN_142031c30 body=694 status=ok
// SIG undefined FUN_142031c30(void)

undefined8 * FUN_142031c30(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  RefCountImpl *this;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar3 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    puVar10 = (undefined8 *)0x0;
    uVar9 = 0;
    if (bVar12) {
      puVar1 = (undefined4 *)param_1[0x1b];
      uVar11 = uVar9;
      if (puVar1 != (undefined4 *)0x0) {
        uVar9 = puVar1[1];
        uVar11 = *puVar1;
      }
    }
    else {
      lVar3 = UTexture2D::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      uVar9 = local_res8;
      uVar11 = local_res8;
      if (bVar12) {
        uVar9 = *(undefined4 *)((longlong)param_1 + 0xc4);
        uVar11 = *(undefined4 *)(param_1 + 0x18);
      }
    }
    lVar3 = FUN_142039c70();
    if (((lVar3 != 0) &&
        (plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar3 + 0x40) + 0x128))(),
        plVar4 != (longlong *)0x0)) &&
       (local_res8 = uVar11, local_resc = uVar9,
       this = (RefCountImpl *)(**(code **)(*plVar4 + 0x100))(plVar4,param_1,&local_res8,0),
       this != (RefCountImpl *)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
      if (puVar5 != (undefined8 *)0x0) {
        lVar3 = UTexture2D::GetPrivateStaticClass();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        puVar6 = param_1;
        if (!bVar12) {
          puVar6 = puVar10;
        }
        lVar3 = UTexture2D::GetPrivateStaticClass();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        piVar7 = &DAT_1464fae60;
        iVar8 = DAT_1464fae60;
        if (!bVar12) {
          param_1 = puVar10;
        }
        while (iVar8 != 0) {
          if (puVar6 == (undefined8 *)0x0) {
            if (param_1 != (undefined8 *)0x0) {
              if (*(byte *)((longlong)param_1 + 0xe2) == 0) {
                uVar2 = FUN_14046e310(*(undefined1 *)((longlong)param_1 + 0xe1));
              }
              else {
                uVar2 = (uint)*(byte *)((longlong)param_1 + 0xe2);
              }
              bVar12 = piVar7[1] == uVar2;
              goto LAB_142031e45;
            }
          }
          else {
            if (puVar6[0x1b] == 0) {
              bVar12 = piVar7[1] == 0;
            }
            else {
              bVar12 = piVar7[1] == *(int *)(puVar6[0x1b] + 0xc);
            }
LAB_142031e45:
            if (bVar12) {
              iVar8 = *piVar7;
              goto LAB_142031e55;
            }
          }
          piVar7 = piVar7 + 8;
          iVar8 = *piVar7;
        }
        iVar8 = 2;
LAB_142031e55:
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_144f70a50;
        *(undefined4 *)(puVar5 + 1) = 1;
        *puVar5 = &PTR_FUN_144f70a80;
        puVar5[2] = this;
        puVar5[3] = 0;
        puVar5[4] = 0;
        Scaleform::RefCountImpl::AddRef(this);
        *puVar5 = &PTR_FUN_144f70b50;
        *(int *)(puVar5 + 5) = iVar8;
        *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar11;
        *(undefined4 *)(puVar5 + 6) = uVar9;
        *(undefined4 *)((longlong)puVar5 + 0x34) = 0x101;
        puVar10 = puVar5;
      }
      Scaleform::RefCountImpl::Release(this);
      return puVar10;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142031ef0 FUN_142031ef0 body=767 status=ok
// SIG undefined FUN_142031ef0(void)

longlong * FUN_142031ef0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_14172a070(local_res8,0);
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar13 = param_2;
    do {
      if (lVar13 == lVar6) {
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accb78);
        lVar13 = 0;
        LOCK();
        DAT_146accb80 = 1;
        UNLOCK();
        lVar7 = UPlatformInterfaceBase::GetPrivateStaticClass();
        lVar6 = param_2;
        goto LAB_142031fd2;
      }
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
  }
  FUN_14172a400(local_res8);
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  return (longlong *)0x0;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar14 = lVar13, lVar6 != 0) {
LAB_142031fd2:
    lVar14 = param_2;
    if (lVar6 == lVar7) break;
  }
  uVar8 = GetTransientPackage();
  FUN_1417846f0(uVar8,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  plVar9 = (longlong *)FUN_1417985e0(lVar14,uVar8,0,0x40,0,0,0,0,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accb78);
  LOCK();
  DAT_146accb80 = 0;
  UNLOCK();
  if (plVar9 != (longlong *)0x0) {
    lVar7 = *param_3;
    lVar6 = lVar7 + 0xb8;
    FWeakObjectPtr::operator=(lVar6,plVar9);
    cVar4 = FWeakObjectPtr::IsValid(lVar6);
    if (cVar4 != '\0') {
      puVar10 = (undefined8 *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar7 + 8,local_50);
      plVar3 = (longlong *)puVar10[1];
      uVar8 = *puVar10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar6 = FWeakObjectPtr::Get(lVar6);
      *(undefined8 *)(lVar6 + 0x28) = uVar8;
      plVar11 = *(longlong **)(lVar6 + 0x30);
      if (plVar3 != plVar11) {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          plVar11 = *(longlong **)(lVar6 + 0x30);
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
        *(longlong **)(lVar6 + 0x30) = plVar3;
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar3 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
    (**(code **)(*plVar9 + 0x298))(plVar9,param_1);
    FUN_142081520(param_1,plVar9,*param_3 + 0x28);
    iVar2 = *(int *)((longlong)plVar9 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar12 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar12;
      lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18;
    }
    *(uint *)(lVar13 + 8) = *(uint *)(lVar13 + 8) & 0xfbffffff;
  }
  FUN_14172a400(local_res8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return plVar9;
}



// FUNCTION 1420321f0 FUN_1420321f0 body=320 status=ok
// SIG undefined FUN_1420321f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420321f0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [80];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  longlong local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  LOCK();
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  UNLOCK();
  local_78 = param_1;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x70,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71a98;
    puVar1[2] = local_78;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 4,local_68);
  }
  local_c8[0] = FUN_14202bf70;
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_118,local_c8);
  FUN_142032330(local_118);
  if (local_88 != 0) {
    plVar2 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar2 = local_98;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142032330 FUN_142032330 body=228 status=ok
// SIG undefined FUN_142032330(void)

void FUN_142032330(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) goto LAB_142032384;
  }
  iVar3 = FUN_140953d20(&PTR_PTR_1464f05c0);
  if (iVar3 == 0) {
    FUN_14207abf0(&PTR_PTR_1464f05c0);
  }
LAB_142032384:
  local_28 = 0;
  local_18 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x60,local_48);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f81f0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,param_1);
  }
  local_58[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                Call;
  FUN_14207a090(&PTR_PTR_1464f05c0,local_58);
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142032420 FUN_142032420 body=688 status=ok
// SIG undefined FUN_142032420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142032420(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_228 [32];
  longlong local_208;
  code *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined1 local_1a8 [80];
  code *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  longlong local_108;
  undefined1 local_f8 [16];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined1 local_a8 [16];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  LOCK();
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar1 = '\0';
  }
  UNLOCK();
  local_208 = param_2;
  if (cVar1 < '\t') {
    LOCK();
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    UNLOCK();
    local_108 = param_1;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_f8);
    local_128 = (longlong *)0x0;
    local_118 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x70,local_148);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_144f71a98;
      puVar2[2] = local_108;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,local_f8);
    }
    local_158[0] = FUN_14202bf70;
    if (local_b8 != 0) {
      plVar4 = local_e8;
      if (local_c8 != (longlong *)0x0) {
        plVar4 = local_c8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x88) == 0) {
      FUN_14207a010(param_1 + 0x58,local_158);
    }
    else {
      cVar1 = FUN_142078ba0();
      while (cVar1 != '\0') {
        lVar3 = FUN_142079f60(param_1 + 0x58,local_a8);
        local_1c8 = 0;
        local_1b8 = 0;
        puVar2 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &PTR_FUN_144f71ae0;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 2,lVar3);
          *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(lVar3 + 0x50);
        }
        local_1f8[0] = UE4Function_Private::
                       TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>
                       ::Call;
        FUN_14207a090(*(undefined8 *)(param_1 + 0x88),local_1f8);
        if (local_68 != 0) {
          plVar4 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar4 = local_78;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        cVar1 = FUN_142078ba0(param_1 + 0x58);
        param_2 = local_208;
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1a8,local_158);
      FUN_14207a090(*(undefined8 *)(param_1 + 0x88),local_1a8);
    }
    if (local_118 != 0) {
      plVar4 = local_148;
      if (local_128 != (longlong *)0x0) {
        plVar4 = local_128;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_2 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420326d0 FUN_1420326d0 body=104 status=ok
// SIG undefined FUN_1420326d0(void)

void FUN_1420326d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_58 [80];
  
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58);
  FUN_142032420(*(undefined8 *)(param_1 + 0x78),local_58);
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_2 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142032740 FUN_142032740 body=172 status=ok
// SIG undefined FUN_142032740(void)

void FUN_142032740(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        local_68 = (undefined4)param_1;
        uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_60 = (undefined4)param_2;
        uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = local_68;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_64;
        *(undefined4 *)(puVar3 + 2) = uStack_60;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_5c;
      }
      local_58[0] = &LAB_14202cad0;
      FUN_14204c6c0(param_1,local_58);
    }
    else {
      FUN_1420327f0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1420327f0 FUN_1420327f0 body=460 status=ok
// SIG undefined FUN_1420327f0(void)

void FUN_1420327f0(longlong param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined2 *local_28;
  ulonglong local_20;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
                    (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,
                     ((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10);
  if (cVar2 != '\0') {
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_2[lVar8] != '\0');
      uVar6 = (int)lVar8 + 1;
      local_20 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_28,uVar6,param_2,uVar6,0x3f);
    }
    plVar1 = *(longlong **)(param_1 + 0xe0);
    iVar7 = *(int *)(param_1 + 0xe8);
    for (plVar9 = plVar1; plVar9 != plVar1 + (longlong)iVar7 * 2; plVar9 = plVar9 + 2) {
      puVar5 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar5 = local_28;
      }
      if (*(int *)(*plVar9 + 0x20) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)(*plVar9 + 0x18);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (iVar3 == 0) {
        if (plVar9 != plVar1 + (longlong)iVar7 * 2) {
          uVar10 = (longlong)plVar9 - (longlong)plVar1 >> 4;
          iVar7 = (int)uVar10;
          if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0xe8))) {
            (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar7 * 0x10))()
            ;
            TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                      (param_1 + 0xe0,uVar10 & 0xffffffff,1,1);
          }
        }
        break;
      }
    }
    uVar6 = *(uint *)(param_1 + 0xa0) & 0x8f;
    if (((uVar6 - 8 < 4) &&
        (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))
                           (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,
                            uVar6 == 10), cVar2 != '\0')) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x78), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x198))(plVar1,2);
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1420329c0 FUN_1420329c0 body=796 status=ok
// SIG undefined FUN_1420329c0(void)

ulonglong FUN_1420329c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong extraout_RAX;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 *local_58;
  undefined8 local_50;
  
  lVar6 = DAT_146accce0;
  local_res10 = 0;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  lVar10 = 4;
  if (((cVar7 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)) {
    lVar10 = 0;
  }
  iVar3 = *(int *)(lVar10 + lVar6);
  LOCK();
  bVar18 = DAT_146accd4c == 0;
  if (bVar18) {
    DAT_146accd4c = 0;
  }
  UNLOCK();
  lVar6 = DAT_146acccf8;
  while (DAT_146acccf8 = lVar6, !bVar18) {
    LOCK();
    bVar18 = DAT_146accd48 == 0;
    if (bVar18) {
      DAT_146accd48 = 0;
    }
    UNLOCK();
    if (((!bVar18) || (DAT_1468c217e != '\0')) &&
       (local_res10 = local_res10 + 1, local_res10 == iVar3)) break;
    iVar9 = FUN_140953d20(&PTR_PTR_1464f05c0);
    if (iVar9 == 0) {
      FUN_14207abf0(&PTR_PTR_1464f05c0);
    }
    FUN_14207c060(&PTR_PTR_1464f05c0);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x120));
    TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_58,param_1 + 0x110);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x120));
    puVar13 = local_58;
    iVar9 = (int)local_50;
    uVar15 = (ulonglong)(int)local_50;
    puVar16 = local_58 + uVar15 * 2;
    for (puVar12 = local_58; puVar12 != puVar16; puVar12 = puVar12 + 2) {
      FUN_1420371e0(*puVar12);
    }
    if (iVar9 != 0) {
      plVar17 = puVar13 + 1;
      do {
        plVar5 = (longlong *)*plVar17;
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
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar17 = plVar17 + 2;
        uVar14 = (int)uVar15 - 1;
        uVar15 = (ulonglong)uVar14;
        puVar13 = local_58;
      } while (uVar14 != 0);
    }
    if (puVar13 != (undefined8 *)0x0) {
      FMemory::Free(puVar13);
    }
    FUN_1416b1760(0x3cf83e10);
    LOCK();
    bVar18 = DAT_146accd4c == 0;
    if (bVar18) {
      DAT_146accd4c = 0;
    }
    UNLOCK();
    lVar6 = DAT_146acccf8;
  }
  uVar15 = 0;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar7 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar8 = GetCurrentThreadId(), uVar11 = 4, DVar8 == DAT_1468c21c0)) {
    uVar11 = uVar15;
  }
  iVar3 = *(int *)(uVar11 + lVar6);
  do {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x138));
    bVar18 = *(int *)(param_1 + 0x130) < 1;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x138));
    uVar11 = 0;
    LOCK();
    bVar19 = DAT_146accd4c == 0;
    if (bVar19) {
      DAT_146accd4c = 0;
    }
    else {
      uVar11 = (ulonglong)DAT_146accd4c;
    }
    UNLOCK();
    if (bVar19 && bVar18) {
      uVar11 = 0;
      LOCK();
      bVar20 = DAT_146accd48 == 0;
      if (bVar20) {
        DAT_146accd48 = 0;
      }
      else {
        uVar11 = (ulonglong)DAT_146accd48;
      }
      UNLOCK();
      if ((bVar20) && (DAT_1468c217e == '\0')) {
        return uVar11;
      }
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
      iVar9 = *(int *)(param_1 + 0xe8);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x120));
      iVar4 = *(int *)(param_1 + 0x118);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x120));
      uVar11 = extraout_RAX;
      if ((iVar9 < 1 && (bVar19 && bVar18)) && iVar4 < 1) {
        return extraout_RAX;
      }
    }
    if (iVar3 <= (int)uVar15) {
      return uVar11;
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
    FUN_142017d20(param_1 + 0x128,local_res8);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
    FUN_1416b1760(0x3dcccccd);
    uVar15 = (ulonglong)((int)uVar15 + 1);
  } while( true );
}



// FUNCTION 142032ce0 FUN_142032ce0 body=734 status=ok
// SIG undefined FUN_142032ce0(void)

void FUN_142032ce0(void)

{
  undefined8 *puVar1;
  char cVar2;
  DWORD DVar3;
  longlong *plVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar7 = DAT_146accd28;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  plVar10 = (longlong *)0x0;
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar3 = GetCurrentThreadId(), plVar4 = (longlong *)&DAT_00000004, DVar3 == DAT_1468c21c0)) {
    plVar4 = (longlong *)0x0;
  }
  if (*(int *)((longlong)plVar4 + lVar7) != 0) {
    FUN_142036e50();
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res10);
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
    lVar7 = DAT_146accdb0;
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar3 = GetCurrentThreadId(), plVar4 = (longlong *)&DAT_00000004, DVar3 == DAT_1468c21c0)) {
      plVar4 = plVar10;
    }
    if (*(int *)(lVar7 + (longlong)plVar4) == 0) {
      (**(code **)(*(longlong *)(DAT_146accd68 + 0x10) + 0x30))();
    }
    else {
      if (DAT_146accc80 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(DAT_146accc80);
      }
      DAT_146accc80 = (RefCountImpl *)0x0;
      DAT_146accd68 = 0;
    }
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10._0_4_);
  }
  else {
    pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar4 = TlsGetValue(*pDVar5);
    if (plVar4 == (longlong *)0x0) {
      plVar6 = (longlong *)operator_new(0x18);
      plVar4 = plVar10;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined4 *)(plVar6 + 2) = 0;
        plVar4 = plVar6;
      }
      TlsSetValue(*pDVar5,plVar4);
    }
    plVar6 = (longlong *)plVar4[1];
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)*plVar4;
      if (plVar6 == (longlong *)0x0) {
        lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
        plVar4[1] = lVar7;
        if (lVar7 == 0) {
          puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar4[1] = (longlong)puVar8;
          lVar7 = 0x1f;
          do {
            puVar1 = puVar8 + 0x20;
            *puVar8 = puVar1;
            lVar7 = lVar7 + -1;
            puVar8 = puVar1;
          } while (lVar7 != 0);
          *puVar1 = 0;
        }
        plVar6 = (longlong *)plVar4[1];
        iVar9 = 0x20;
        *(undefined4 *)(plVar4 + 2) = 0x20;
      }
      else {
        iVar9 = 0x20;
        plVar4[1] = (longlong)plVar6;
        *(undefined4 *)(plVar4 + 2) = 0x20;
        *plVar4 = 0;
      }
    }
    else {
      iVar9 = (int)plVar4[2];
    }
    plVar4[1] = *plVar6;
    local_res18 = 0;
    *(int *)(plVar4 + 2) = iVar9 + -1;
    *(undefined4 *)(plVar6 + 1) = 0xff;
    *plVar6 = (longlong)&PTR_FUN_143f3edd8;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144f71110;
    *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
    plVar6[3] = 0;
    FUN_140445370(plVar6,0,0xff,1);
  }
  FUN_141ee24f0(0);
  lVar7 = DAT_146accdb0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar3 = GetCurrentThreadId(), plVar4 = (longlong *)&DAT_00000004, DVar3 == DAT_1468c21c0)) {
    plVar4 = plVar10;
  }
  if (*(int *)(lVar7 + (longlong)plVar4) == 0) {
    if (DAT_146accc80 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(DAT_146accc80);
    }
    DAT_146accc80 = (RefCountImpl *)0x0;
    DAT_146accd68 = 0;
  }
  return;
}



// FUNCTION 142032fc0 FUN_142032fc0 body=51 status=ok
// SIG undefined FUN_142032fc0(void)

void FUN_142032fc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1415b5910();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
  return;
}



// FUNCTION 142033010 FUN_142033010 body=85 status=ok
// SIG undefined FUN_142033010(void)

void FUN_142033010(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014203305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 142033080 FUN_142033080 body=20 status=ok
// SIG undefined FUN_142033080(void)

void FUN_142033080(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142025a20(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1420330a0 FUN_1420330a0 body=101 status=ok
// SIG undefined FUN_1420330a0(void)

void FUN_1420330a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415b5910();
    *(undefined8 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x40) != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x30);
      if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
        plVar2 = (longlong *)(lVar1 + 0x10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x80);
    return;
  }
  return;
}



// FUNCTION 142033110 FUN_142033110 body=109 status=ok
// SIG undefined FUN_142033110(void)

void FUN_142033110(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1416f8340(*(undefined4 *)(lVar1 + 0x60));
    FUN_1415b5910();
    *(undefined8 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x40) != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x30);
      if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
        plVar2 = (longlong *)(lVar1 + 0x10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 142033180 FUN_142033180 body=20 status=ok
// SIG undefined FUN_142033180(void)

void FUN_142033180(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142025750(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1420331a0 FUN_1420331a0 body=81 status=ok
// SIG undefined FUN_1420331a0(void)

void FUN_1420331a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if ((*(uint *)(lVar1 + 0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x10))
                (*(longlong **)(lVar1 + 0x10),lVar1,*(undefined8 *)(lVar1 + 0x20));
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *(undefined4 *)(lVar1 + 0x18) = 0;
    FMemory::operator_delete(lVar1,0x30);
    return;
  }
  return;
}



// FUNCTION 142033200 FUN_142033200 body=47 status=ok
// SIG undefined FUN_142033200(void)

void FUN_142033200(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xb8) = local_res8;
  *(undefined4 *)(param_1 + 0xbc) = local_resc;
  return;
}



// FUNCTION 142033230 FUN_142033230 body=83 status=ok
// SIG undefined FUN_142033230(void)

void FUN_142033230(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_14202c430;
  FUN_14204c370(param_1,local_58);
  return;
}



// FUNCTION 142033290 FUN_142033290 body=438 status=ok
// SIG undefined FUN_142033290(void)

void FUN_142033290(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  RefCountImpl *this;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  RefCountImpl *this_00;
  bool bVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong local_res10;
  
  bVar6 = false;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar8 = param_2[4];
  lVar9 = param_2[1];
  iVar3 = (int)lVar8 + (int)lVar9;
  *(int *)(param_2 + 4) = iVar3;
  if (*(int *)((longlong)param_2 + 0x24) < iVar3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 3);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)(int)lVar8 + param_2[3]),0,(longlong)(int)lVar9);
  if ((*(longlong *)(param_1 + 0x40) != 0) && (iVar3 = 0, 0 < (int)param_2[1])) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      LOCK();
      bVar10 = DAT_146accd48 == 0;
      if (bVar10) {
        DAT_146accd48 = 0;
      }
      UNLOCK();
      if ((!bVar10) || (DAT_1468c217e != '\0')) break;
      lVar1 = *param_2;
      if (*(char *)((longlong)param_2 + 0x11) == '\0') {
LAB_1420333df:
        *(undefined1 *)(lVar9 + param_2[3]) = 1;
      }
      else {
        this_00 = (RefCountImpl *)0x0;
        if (*(RefCountImpl **)(param_1 + 0x40) == (RefCountImpl *)0x0) {
LAB_1420333b7:
          bVar10 = false;
        }
        else {
          Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x40));
          this_00 = *(RefCountImpl **)(param_1 + 0x40);
          if (this_00 == (RefCountImpl *)0x0) goto LAB_1420333b7;
          bVar6 = true;
          puVar7 = (ulonglong *)(*(longlong *)(lVar1 + lVar8) + 0x178);
          this = (RefCountImpl *)*puVar7;
          uVar4 = 0;
          if (this != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::AddRef(this);
            uVar4 = *puVar7;
          }
          local_res10 = uVar4;
          uVar5 = (**(code **)(*(longlong *)this_00 + 0x98))(this_00);
          cVar2 = FUN_1432ccdc0(&local_res10,uVar5,0);
          if (cVar2 == '\0') goto LAB_1420333b7;
          bVar10 = true;
        }
        if (bVar6) {
          bVar6 = false;
          FUN_1432ccda0(&local_res10);
        }
        if (this_00 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this_00);
        }
        if (bVar10) goto LAB_1420333df;
      }
      iVar3 = iVar3 + 1;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (iVar3 < (int)param_2[1]);
  }
  if ((longlong *)param_2[5] == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014203343d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_2[5] + 0x10))();
  return;
}



// FUNCTION 142033450 FUN_142033450 body=127 status=ok
// SIG undefined FUN_142033450(void)

void FUN_142033450(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_18 [2];
  
  uVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(local_18);
  lVar2 = FUN_142039c70();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 != 0)) {
    FUN_14207ab60(lVar2,uVar1);
    (**(code **)(*(longlong *)*param_1 + 8))();
    FUN_14207ab60(lVar2,0);
  }
  QueryPerformanceCounter(&local_res20);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_18[0]._0_4_);
  return;
}



// FUNCTION 1420334d0 FUN_1420334d0 body=207 status=ok
// SIG undefined FUN_1420334d0(void)

void FUN_1420334d0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = param_1[1];
  lVar4 = *param_1;
  cVar2 = IsInRenderingThread();
  if (cVar2 != '\0') {
    puVar3 = (undefined8 *)FUN_1432d8640(*(undefined8 *)(lVar4 + 0x40));
    uStack_60 = puVar3[1];
    local_58 = puVar3[2];
    uStack_50 = puVar3[3];
    local_48 = puVar3[4];
    uStack_40 = puVar3[5];
    local_38 = *(undefined4 *)(puVar3 + 6);
    uStack_34 = *(undefined4 *)((longlong)puVar3 + 0x34);
    uStack_30 = *(undefined4 *)(puVar3 + 7);
    uStack_2c = *(undefined4 *)((longlong)puVar3 + 0x3c);
    local_28 = puVar3[8];
    local_20 = *(undefined4 *)(puVar3 + 9);
    _local_68 = CONCAT44((int)lVar1,(int)*puVar3);
    Scaleform::Render::HAL::SetToleranceParams(*(undefined8 *)(lVar4 + 0x40),&local_68);
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x40) + 0x130))();
    (**(code **)(*(longlong *)(lVar4 + 8) + 0x18))(lVar4 + 8);
  }
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1420335a0 FUN_1420335a0 body=164 status=ok
// SIG undefined FUN_1420335a0(void)

void FUN_1420335a0(longlong *param_1)

{
  longlong lVar1;
  BOOL BVar2;
  longlong *plVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *param_1;
  if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x40) + 0x128))();
    while( true ) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x158));
      if (BVar2 != 0) break;
      (**(code **)(*plVar3 + 0x48))(plVar3);
      FUN_1416b1810(0);
    }
    (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x58))();
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x158));
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142033650 FUN_142033650 body=164 status=ok
// SIG undefined FUN_142033650(void)

void FUN_142033650(longlong *param_1)

{
  longlong lVar1;
  BOOL BVar2;
  longlong *plVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *param_1;
  if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x40) + 0x128))();
    while( true ) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x158));
      if (BVar2 != 0) break;
      (**(code **)(*plVar3 + 0x48))(plVar3);
      FUN_1416b1810(0);
    }
    (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x60))();
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x158));
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142033700 FUN_142033700 body=206 status=ok
// SIG undefined FUN_142033700(void)

void FUN_142033700(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_18 [2];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(local_18);
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  lVar1 = DAT_146accdb0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
      goto LAB_14203376f;
    }
  }
  lVar4 = 0;
LAB_14203376f:
  if (*(int *)(lVar4 + lVar1) == 0) {
    (**(code **)(*(longlong *)(DAT_146accd68 + 0x10) + 0x30))();
  }
  else {
    if (DAT_146accc80 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(DAT_146accc80);
    }
    DAT_146accc80 = (RefCountImpl *)0x0;
    DAT_146accd68 = 0;
  }
  QueryPerformanceCounter(&local_res20);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_18[0]._0_4_);
  return;
}



// FUNCTION 1420337d0 FUN_1420337d0 body=1659 status=ok
// SIG undefined FUN_1420337d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1420337d0(longlong param_1,longlong param_2,longlong *param_3)

{
  RefCountImpl *this;
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_398 [32];
  longlong local_378;
  int local_370;
  longlong local_368;
  undefined8 *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined2 local_2f0;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  longlong local_2d8 [24];
  undefined4 local_218;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  uVar12 = local_48;
  if ((*(longlong *)(param_1 + 0x198) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    uVar12 = 0;
    LOCK();
    bVar15 = DAT_146accd48 == 0;
    if (bVar15) {
      DAT_146accd48 = 0;
    }
    else {
      uVar12 = (ulonglong)DAT_146accd48;
    }
    UNLOCK();
    if ((bVar15) && (DAT_1468c217e == '\0')) {
      puVar11 = (undefined8 *)(param_1 + 0x40);
      plVar4 = *(longlong **)(param_1 + 0x40);
      local_360 = puVar11;
      local_308 = param_1;
      if ((plVar4 != (longlong *)0x0) && ((int)param_3[1] != 0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x128))();
        local_340 = plVar4;
        if (param_3[5] == 0) {
          FUN_142025fb0(param_1 + 0x158,plVar4);
          FUN_142033290(param_1,param_3);
        }
        else {
          do {
            (**(code **)(*plVar4 + 0x48))(plVar4);
            cVar1 = (**(code **)(*(longlong *)param_3[5] + 0x20))((longlong *)param_3[5],1);
          } while (cVar1 == '\0');
          FUN_142025fb0(param_1 + 0x158,plVar4);
        }
        FUN_14207ab60(*puVar11,param_2);
        cVar1 = '\0';
        if ((char)param_3[2] != '\0') {
          lVar5 = FUN_142039c70();
          *(int *)(lVar5 + 0xd8) = *(int *)(lVar5 + 0xd8) + 1;
          puVar6 = (undefined8 *)
                   (**(code **)(**(longlong **)(param_1 + 0x58) + 400))
                             (*(longlong **)(param_1 + 0x58),&local_368);
          uVar7 = FSceneRenderTargets::Get(param_2);
          plVar4 = (longlong *)FUN_141ce5960(uVar7,param_2,*puVar6);
          local_378 = *plVar4;
          if (local_378 != 0) {
            LOCK();
            *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
            UNLOCK();
          }
          plVar4 = (longlong *)
                   (**(code **)(*(longlong *)*puVar11 + 0x378))
                             ((longlong *)*puVar11,*(undefined8 *)(param_1 + 0x58),&local_378);
          (**(code **)(*(longlong *)*puVar11 + 0x18))((longlong *)*puVar11,plVar4,1);
          (**(code **)(*(longlong *)*puVar11 + 0x78))();
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_378);
          cVar1 = (char)param_3[2];
          plVar4 = local_340;
        }
        local_370 = 0;
        if (0 < (int)param_3[1]) {
          plVar8 = (longlong *)0x0;
          local_378 = 0;
          local_368 = 0;
          do {
            lVar10 = local_368;
            (**(code **)(*plVar4 + 0x48))(plVar4);
            lVar5 = *param_3;
            if (((char)param_3[2] == '\0') &&
               (plVar8 = (longlong *)FUN_14203c600(*(undefined8 *)(lVar10 + lVar5)),
               plVar8 != (longlong *)0x0)) {
              lVar14 = *(longlong *)(lVar10 + lVar5);
              plVar9 = (longlong *)FUN_142016bf0(local_2e8,puVar11);
              plVar4 = (longlong *)*plVar9;
              if (plVar4 != (longlong *)0x0) {
                lVar13 = **(longlong **)(lVar14 + 0xc0);
                if (lVar13 == 0) {
                  cVar1 = FWeakObjectPtr::IsValid(lVar14 + 0xb8);
                  if (cVar1 == '\0') {
                    lVar10 = 0;
                  }
                  else {
                    uVar7 = FWeakObjectPtr::Get(lVar14 + 0xb8);
                    lVar10 = UTextureRenderTarget::GetRenderTargetResource(uVar7);
                  }
                  lVar13 = lVar10 + 0x68;
                  if (lVar10 == 0) {
                    lVar13 = 0;
                  }
                  uVar7 = (**(code **)(*(longlong *)*plVar9 + 0x388))((longlong *)*plVar9,lVar13,1);
                  **(undefined8 **)(lVar14 + 0xc0) = uVar7;
                  plVar4 = (longlong *)*plVar9;
                  lVar13 = **(longlong **)(lVar14 + 0xc0);
                  lVar10 = local_368;
                }
                (**(code **)(*plVar4 + 0x18))(plVar4,lVar13,1);
                if ((RefCountImpl *)*plVar9 != (RefCountImpl *)0x0) {
                  Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar9);
                }
              }
              uVar2 = (**(code **)(*plVar8 + 0x48))(plVar8);
              uVar3 = (**(code **)(*plVar8 + 0x40))(plVar8);
              local_368 = CONCAT44(local_368._4_4_,uVar3);
              puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar11 = puVar6 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar6 + 5;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar11;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar6;
              *(undefined8 **)(param_2 + 8) = puVar6 + 1;
              puVar6[1] = 0;
              *puVar6 = &PTR_LAB_143f59420;
              *(undefined4 *)((longlong)puVar6 + 0x1c) = (undefined4)local_368;
              puVar6[2] = 0;
              *(undefined4 *)(puVar6 + 3) = 0;
              *(undefined4 *)(puVar6 + 4) = uVar2;
              *(undefined4 *)((longlong)puVar6 + 0x24) = 0x3f800000;
              puVar11 = (undefined8 *)(**(code **)(plVar8[0xd] + 8))();
              local_2f4 = 0xffffffff;
              local_2f8 = 0;
              local_2f0 = 0x102;
              local_300 = *puVar11;
              local_358 = 0;
              local_350 = 0;
              FUN_140c63b80(local_2d8,1,&local_300,&local_358);
              FRHICommandListBase::CacheActiveRenderTargets(param_2,local_218,local_2d8,local_148);
              puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar11 = puVar6 + 0x54;
              if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
                puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar6 + 0x54;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar11;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar6;
              *(undefined8 **)(param_2 + 8) = puVar6 + 1;
              puVar6[1] = 0;
              *puVar6 = &PTR_FUN_1444d5488;
              FUN_140c63680(puVar6 + 2,local_2d8);
              FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2d8);
              puVar11 = local_360;
            }
            if (*(char *)(local_378 + param_3[3]) != '\0') {
              lVar5 = *(longlong *)(lVar10 + lVar5);
              plVar4 = (longlong *)FUN_142016bf0(local_2e0,puVar11);
              lVar14 = *plVar4;
              if (lVar14 != 0) {
                this = *(RefCountImpl **)(lVar5 + 0x178);
                uVar7 = 0;
                if (this != (RefCountImpl *)0x0) {
                  Scaleform::RefCountImpl::AddRef(this);
                  uVar7 = *(undefined8 *)(lVar5 + 0x178);
                  lVar14 = *plVar4;
                }
                local_348 = uVar7;
                uVar7 = Scaleform::Render::ContextImpl::RTHandle::GetRenderEntry(&local_348);
                FUN_1432d9ea0(lVar14,uVar7);
                FUN_1432ccda0(&local_348);
                if ((RefCountImpl *)*plVar4 != (RefCountImpl *)0x0) {
                  Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar4);
                }
              }
            }
            if (plVar8 != (longlong *)0x0) {
              lVar5 = plVar8[6];
              local_338 = 0xffffffff00000000;
              uStack_330 = 0xffffffffffffffff;
              local_328 = 0xffffffffffffffff;
              uStack_320 = 0xffffffffffffffff;
              local_318 = 0xffffffff;
              uStack_310 = 0;
              puVar11 = (undefined8 *)(**(code **)(plVar8[0xd] + 8))();
              puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              plVar4 = (longlong *)*puVar11;
              puVar11 = puVar6 + 10;
              if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
                puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar6 + 10;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar11;
              plVar8 = (longlong *)0x0;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar6;
              *(undefined8 **)(param_2 + 8) = puVar6 + 1;
              puVar6[1] = 0;
              *puVar6 = &PTR_LAB_143f489f0;
              *(undefined4 *)(puVar6 + 2) = (undefined4)local_338;
              *(undefined4 *)((longlong)puVar6 + 0x14) = local_338._4_4_;
              *(undefined4 *)(puVar6 + 3) = (undefined4)uStack_330;
              *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_330._4_4_;
              *(undefined4 *)(puVar6 + 4) = (undefined4)local_328;
              *(undefined4 *)((longlong)puVar6 + 0x24) = local_328._4_4_;
              *(undefined4 *)(puVar6 + 5) = (undefined4)uStack_320;
              *(undefined4 *)((longlong)puVar6 + 0x2c) = uStack_320._4_4_;
              *(undefined4 *)(puVar6 + 6) = (undefined4)local_318;
              *(undefined4 *)((longlong)puVar6 + 0x34) = local_318._4_4_;
              *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_310;
              *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_310._4_4_;
              puVar6[8] = plVar4;
              puVar6[9] = lVar5;
              lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
              if ((lVar5 == 0) &&
                 (lVar5 = (**(code **)(*(longlong *)puVar6[8] + 0x18))(), lVar5 == 0)) {
                (**(code **)(*(longlong *)puVar6[8] + 0x20))();
              }
              lVar5 = (**(code **)(*(longlong *)puVar6[9] + 8))();
              if ((lVar5 == 0) &&
                 (lVar5 = (**(code **)(*(longlong *)puVar6[9] + 0x18))(), lVar5 == 0)) {
                (**(code **)(*(longlong *)puVar6[9] + 0x20))();
              }
            }
            local_368 = lVar10 + 0x10;
            local_378 = local_378 + 1;
            local_370 = local_370 + 1;
            plVar4 = local_340;
            puVar11 = local_360;
          } while (local_370 < (int)param_3[1]);
          cVar1 = (char)param_3[2];
          param_1 = local_308;
        }
        if (cVar1 != '\0') {
          (**(code **)(*(longlong *)*puVar11 + 0x80))();
          uVar7 = FSceneRenderTargets::Get(param_2);
          FUN_141cf3860(uVar7);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
        plVar4 = *(longlong **)(param_1 + 0x40);
      }
      uVar12 = 0;
      if (plVar4 != (longlong *)0x0) {
        uVar12 = FUN_14207ab60(plVar4,0);
      }
    }
  }
  return uVar12;
}



// FUNCTION 142033e50 FUN_142033e50 body=2393 status=ok
// SIG undefined FUN_142033e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142033e50(longlong *param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  Matrix3x4<float> *pMVar8;
  Matrix4x4<float> *pMVar9;
  longlong *plVar10;
  byte *pbVar11;
  longlong lVar12;
  undefined8 uVar13;
  IMAGE_DOS_HEADER *pIVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined *puVar19;
  uint *puVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_248 [32];
  longlong local_228;
  ulonglong local_220;
  undefined4 local_218;
  byte local_208;
  char local_207;
  uint local_204;
  longlong *local_200;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  undefined4 local_1ec [2];
  uint local_1e4;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  Matrix2x4<float> *local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [12];
  float local_13c;
  Matrix4x4<float> local_128 [32];
  Matrix3x4<float> local_108 [48];
  undefined1 local_d8 [32];
  Matrix4x4<float> local_b8 [64];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1d0 = param_2;
  local_1b8 = param_3;
  local_1a0 = param_1;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x118))();
  local_190 = plVar6;
  (**(code **)(*plVar6 + 8))(plVar6,10,"HAL::DrawProcessedComplexMeshes");
  lVar22 = *(longlong *)(param_2 + 0xa8);
  local_1d8 = lVar22;
  cVar3 = Scaleform::Render::HAL::checkState(param_1,8,"HAL::DrawProcessedComplexMeshes");
  if ((cVar3 != '\0') && (lVar22 != 0)) {
    local_1e4 = *(uint *)(param_2 + 0xe8);
    local_1a8 = *(longlong *)(param_2 + 0xf8);
    local_1f4 = *(uint *)(param_3 + 1);
    plVar10 = *(longlong **)(param_2 + 0xe0);
    local_1f8 = 0;
    local_200 = plVar10;
    if (local_1e4 != 0) {
      local_1e0 = param_1 + 0x3f2;
      plVar21 = local_1e0;
      do {
        uVar17 = local_1f4;
        local_200 = plVar10;
        (**(code **)(*param_1 + 0x340))(param_1,0);
        local_204 = *(uint *)((longlong)param_1 + 0x214);
        if (uVar17 != 0) {
          uVar23 = (ulonglong)uVar17;
          uVar17 = *(byte *)(**(longlong **)*param_3 + 0xf) & 0x10 | local_204;
          lVar22 = 0;
          local_204 = uVar17;
          do {
            lVar12 = param_3[2];
            lVar24 = *param_3;
            plVar6 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
            lVar12 = **(longlong **)(lVar22 * lVar12 + lVar24);
            bVar1 = *(byte *)(lVar12 + 0xf);
            if ((bVar1 & 1) == 0) {
              puVar19 = &DAT_1467ccfd0;
            }
            else {
              puVar19 = (undefined *)
                        (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(bVar1 & 0xf) * 5] + 1) *
                         0x10 + lVar12);
            }
            (**(code **)(*plVar6 + 0x60))(plVar6,local_148,puVar19);
            cVar3 = Scaleform::Render::Cxform::operator==(local_148,&DAT_1467ccfd0);
            if (cVar3 == '\0') {
              uVar17 = uVar17 | 8;
              local_204 = uVar17;
            }
            if (local_13c < 1.0) {
              uVar17 = uVar17 | 0x20;
              local_204 = uVar17;
            }
            lVar22 = lVar22 + 1;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          plVar21 = param_1 + 0x3f2;
          plVar10 = local_200;
        }
        uVar4 = (**(code **)(param_1[0x51] + 0x48))(param_1 + 0x51,*(undefined4 *)(*plVar10 + 0x10))
        ;
        lVar22 = plVar10[1];
        uVar5 = FUN_1420575f0(param_1 + 0x239,*plVar10,&local_204,0);
        (**(code **)(*plVar21 + 0x18))(plVar21,uVar5,lVar22);
        if ((char)plVar21[0xb] == '\0') {
          *(undefined1 *)(plVar21 + 0xb) = 1;
          *(undefined4 *)((longlong)plVar21 + 0x5c) = 1;
          plVar21[3] = 0;
          plVar21[4] = 0;
          plVar21[5] = 0;
          *(undefined4 *)(plVar21 + 6) = 0;
          plVar21[7] = 0;
          plVar21[8] = 0;
          plVar21[9] = 0;
          plVar21[10] = 0;
        }
        plVar6 = plVar21 + 0x201;
        plVar7 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
        (**(code **)(*plVar7 + 0x70))(plVar7,param_1,local_1d0,local_1f8);
        local_198 = (**(code **)(*param_1 + 800))(param_1,plVar10,0);
        uVar17 = local_204;
        if ((local_204 & 0x20) == 0) {
          lVar22 = *plVar10;
          switch(*(undefined4 *)(lVar22 + 0x10)) {
          case 2:
            if (*(char *)(lVar22 + 0x17) != -1) goto switchD_14203414f_caseD_3;
            pIVar14 = &IMAGE_DOS_HEADER_140000000;
            break;
          default:
            goto switchD_14203414f_caseD_3;
          case 5:
          case 9:
          case 0xb:
            iVar18 = 0;
            plVar7 = (longlong *)(lVar22 + 0x20);
            do {
              if ((longlong *)*plVar7 != (longlong *)0x0) {
                uVar5 = (**(code **)(*(longlong *)*plVar7 + 0x20))();
                switch(uVar5) {
                case 3:
                case 4:
                case 0x36:
                case 0x38:
                case 0x3f:
                case 200:
                  break;
                default:
                  plVar10 = local_200;
                  goto switchD_14203414f_caseD_3;
                }
              }
              iVar18 = iVar18 + 1;
              plVar7 = plVar7 + 1;
              plVar10 = local_200;
            } while (iVar18 < 2);
          case 0:
          case 1:
            pIVar14 = &IMAGE_DOS_HEADER_140000000;
          }
        }
        else {
switchD_14203414f_caseD_3:
          pIVar14 = (IMAGE_DOS_HEADER *)0x1;
        }
        (**(code **)(*param_1 + 0x2a0))(param_1,pIVar14);
        plVar7 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
        (**(code **)(*plVar7 + 0x68))(plVar7);
        if (*(int *)(*plVar10 + 0x10) < 5) {
          local_208 = 0;
        }
        else {
          local_208 = (*(int *)(*plVar10 + 0x10) - 9U < 2) + 1;
        }
        local_207 = FUN_1432d20f0(uVar4);
        local_1f0 = 0;
        plVar7 = plVar21;
        if (local_1f4 != 0) {
          local_1c0 = (Matrix2x4<float> *)(local_1d0 + 0xc0);
          local_1c8 = 0;
          do {
            lVar12 = local_1c8;
            lVar22 = param_1[0x4b];
            puVar16 = (undefined8 *)(local_1c8 * local_1b8[2] + *local_1b8);
            bVar1 = *(byte *)(*(longlong *)*puVar16 + 0xf);
            if ((bVar1 & 0x10) == 0) {
              FUN_1432be720(local_128,local_1c0,
                            ((ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(bVar1 & 0xf) * 5] + 1) *
                            0x10 + *(longlong *)*puVar16,lVar22 + 0x1e0);
              pMVar9 = local_128;
              local_228 = CONCAT44(local_228._4_4_,8);
            }
            else {
              pMVar8 = (Matrix3x4<float> *)FUN_1432c08b0(puVar16);
              Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(local_108,pMVar8,local_1c0);
              pMVar9 = (Matrix4x4<float> *)FUN_1432d6ca0(lVar22);
              Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(local_b8,pMVar9,local_108);
              pMVar9 = local_b8;
              local_228 = CONCAT44(local_228._4_4_,0x10);
            }
            local_218 = 0;
            local_220 = local_220 & 0xffffffff00000000;
            FUN_142055c30(plVar7,plVar6,0x10,pMVar9);
            if (local_207 == '\0') {
              if ((uVar17 & 8) != 0) {
                plVar10 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
                bVar1 = *(byte *)(*(longlong *)*puVar16 + 0xf);
                if ((bVar1 & 1) == 0) {
                  puVar19 = &DAT_1467ccfd0;
                }
                else {
                  puVar19 = (undefined *)
                            (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(bVar1 & 0xf) * 5] + 1) *
                             0x10 + *(longlong *)*puVar16);
                }
                lVar22 = (**(code **)(*plVar10 + 0x60))(plVar10,local_d8,puVar19);
                local_218 = 0;
                local_220 = local_220 & 0xffffffff00000000;
                local_228._0_4_ = 4;
                FUN_142055c30(plVar7,plVar6,7,lVar22);
                local_218 = 0;
                local_220 = local_220 & 0xffffffff00000000;
                local_228 = CONCAT44(local_228._4_4_,4);
                FUN_142055c30(plVar7,plVar6,6,lVar22 + 0x10);
              }
            }
            else {
              plVar10 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
              local_1ec[0] = *(undefined4 *)(*local_200 + 0x14);
              pbVar11 = (byte *)(**(code **)(*plVar10 + 0x50))(plVar10,local_1b0,local_1ec);
              local_218 = 0;
              local_220 = local_220 & 0xffffffff00000000;
              local_228 = CONCAT44(local_228._4_4_,4);
              local_78 = (float)pbVar11[2] * 0.003921569;
              local_74 = (float)pbVar11[1] * 0.003921569;
              local_6c = (float)pbVar11[3] * 0.003921569;
              local_70 = (float)*pbVar11 * 0.003921569;
              FUN_142055c30(plVar7,plVar6,7,&local_78);
              local_208 = 0;
            }
            uVar15 = 0;
            if (local_208 != 0) {
              lVar22 = 0x18;
              puVar20 = (uint *)((longlong)local_200 + 0x2c);
              iVar18 = 0;
              lVar24 = 0x20;
              do {
                local_218 = 0;
                local_228 = CONCAT44(local_228._4_4_,8);
                local_220._0_4_ = uVar15 * 2;
                FUN_142055c30(plVar7,plVar6,0x18,(ulonglong)*puVar20 * 0x20 + local_1a8);
                local_188 = *plVar6;
                lVar12 = *(longlong *)(*local_200 + lVar24);
                uVar2 = *(undefined2 *)(*local_200 + lVar22);
                local_180 = plVar21[0x202];
                local_178 = plVar21[0x203];
                if (local_178 != 0) {
                  LOCK();
                  *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
                  UNLOCK();
                }
                local_170 = plVar21[0x204];
                local_168 = plVar21[0x205];
                local_160 = plVar21[0x206];
                local_158 = plVar21[0x207];
                local_150 = plVar21[0x208];
                if (local_150 != 0) {
                  LOCK();
                  *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
                  UNLOCK();
                }
                local_220 = CONCAT44(local_220._4_4_,iVar18);
                local_228 = CONCAT62(local_228._2_6_,uVar2);
                FUN_14207b5e0(local_1e0,&local_188,0x17,lVar12);
                uVar15 = uVar15 + 1;
                iVar18 = iVar18 + (uint)*(byte *)(lVar12 + 0x45);
                puVar20 = puVar20 + 1;
                lVar24 = lVar24 + 8;
                lVar22 = lVar22 + 2;
                param_1 = local_1a0;
                plVar7 = local_1e0;
                lVar12 = local_1c8;
                uVar17 = local_204;
              } while (uVar15 < local_208);
            }
            FUN_1420709e0(plVar7,1);
            plVar10 = local_200;
            (**(code **)(*param_1 + 0x330))(param_1,local_200,0,local_1d8);
            local_228 = (ulonglong)*(uint *)(plVar10 + 3) + local_198;
            local_220 = 0;
            (**(code **)(*param_1 + 0x358))
                      (param_1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[5]);
            *(int *)(param_1 + 0x4e) = (int)param_1[0x4e] + 1;
            if ((local_1f0 != local_1f4 - 1) && ((char)param_1[0x3fd] == '\0')) {
              *(undefined1 *)(param_1 + 0x3fd) = 1;
              *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
              param_1[0x3f5] = 0;
              param_1[0x3f6] = 0;
              param_1[0x3f7] = 0;
              *(undefined4 *)(param_1 + 0x3f8) = 0;
              param_1[0x3f9] = 0;
              param_1[0x3fa] = 0;
              param_1[0x3fb] = 0;
              param_1[0x3fc] = 0;
            }
            local_1f0 = local_1f0 + 1;
            local_1c8 = lVar12 + 1;
          } while (local_1f0 < local_1f4);
        }
        local_1f8 = local_1f8 + 1;
        plVar10 = plVar10 + 7;
        param_3 = local_1b8;
        plVar6 = local_190;
        plVar21 = plVar7;
        lVar22 = local_1d8;
        local_200 = plVar10;
      } while (local_1f8 < local_1e4);
    }
    lVar12 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar12 != 0) {
      uVar13 = (**(code **)(*param_1 + 0xd0))(param_1);
      FUN_1432c2490(uVar13,lVar22 + 0x18);
    }
    lVar12 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar12 != 0) {
      uVar13 = (**(code **)(*param_1 + 0xd0))(param_1);
      FUN_1432c25b0(uVar13,1);
    }
    lVar12 = *(longlong *)(lVar22 + 0x38);
    *(undefined8 *)(*(longlong *)(lVar22 + 8) + 0x10) = *(undefined8 *)(lVar22 + 0x10);
    *(undefined8 *)(*(longlong *)(lVar22 + 0x10) + 8) = *(undefined8 *)(lVar22 + 8);
    *(undefined8 *)(lVar22 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar22 + 0x10) = 0xffffffffffffffff;
    plVar10 = (longlong *)(lVar12 + ((longlong)*(int *)(lVar22 + 0x40) + 1) * 0x18);
    *plVar10 = *plVar10 - *(longlong *)(lVar22 + 0x50);
    lVar12 = *(longlong *)(lVar22 + 0x38);
    *(undefined4 *)(lVar22 + 0x40) = 2;
    *(undefined8 *)(lVar22 + 0x10) = *(undefined8 *)(lVar12 + 0x40);
    *(longlong *)(lVar22 + 8) = lVar12 + 0x30;
    *(longlong *)(*(longlong *)(lVar12 + 0x40) + 8) = lVar22;
    *(longlong *)(lVar12 + 0x40) = lVar22;
    *(longlong *)(lVar12 + 0x48) = *(longlong *)(lVar12 + 0x48) + *(longlong *)(lVar22 + 0x50);
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,10);
  return;
}



// FUNCTION 1420348b0 FUN_1420348b0 body=855 status=ok
// SIG undefined FUN_1420348b0(void)

void FUN_1420348b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint local_res8 [2];
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar4 + 8))(plVar4,9,"HAL::DrawProcessedPrimitive");
  cVar3 = Scaleform::Render::HAL::checkState(param_1,8,"HAL::DrawProcessedPrimitive");
  if ((cVar3 != '\0') && (*(int *)(param_2 + 0x40) != 0)) {
    if (param_3 == 0) {
      param_3 = *(longlong *)(param_2 + 0x28);
    }
    iVar10 = 0;
    for (; param_3 != param_4; param_3 = *(longlong *)(param_3 + 8)) {
      lVar9 = *(longlong *)(param_3 + 0x20);
      uVar1 = *(uint *)(param_3 + 0x4c);
      iVar2 = *(int *)(param_3 + 0x48);
      if (lVar9 != 0) {
        local_res8[0] = *(uint *)((longlong)param_1 + 0x214);
        if (iVar2 != 0) {
          local_res8[0] =
               *(byte *)(*(longlong *)**(undefined8 **)(param_2 + 0x38) + 0xf) & 0x10 |
               local_res8[0];
        }
        if ((char)param_1[0x3fd] == '\0') {
          *(undefined1 *)(param_1 + 0x3fd) = 1;
          *(int *)((longlong)param_1 + 0x1fec) = iVar2;
          param_1[0x3f5] = 0;
          param_1[0x3f6] = 0;
          param_1[0x3f7] = 0;
          *(undefined4 *)(param_1 + 0x3f8) = 0;
          param_1[0x3f9] = 0;
          param_1[0x3fa] = 0;
          param_1[0x3fb] = 0;
          param_1[0x3fc] = 0;
        }
        plVar5 = (longlong *)
                 FUN_142053330(param_1 + 0x239,*(undefined8 *)(param_2 + 0x18),local_res8,
                               *(undefined4 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),iVar2
                               ,param_1[0x4b],
                               (ulonglong)uVar1 * 0x10 + *(longlong *)(param_2 + 0x38),
                               param_1 + 0x3f2);
        plVar6 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
        (**(code **)(*plVar6 + 0x78))(plVar6,param_1,param_2,iVar10);
        if (*(int *)(param_3 + 0x28) == 2) {
          (**(code **)(*param_1 + 0x348))
                    (param_1,*(undefined4 *)(param_3 + 0x48),*(undefined4 *)(lVar9 + 0x60));
        }
        else {
          (**(code **)(*param_1 + 0x340))();
        }
        FUN_1420709e0(param_1 + 0x3f2,iVar2);
        if (((((*(uint *)(param_1 + 0xb) & 0x20) != 0) && (*plVar5 != 0)) && (plVar5[3] != 0)) &&
           (plVar5[6] != 0)) {
          (**(code **)(*param_1 + 0x2a0))(param_1,local_res8[0] >> 5 & 0xffffff01);
          uVar7 = (**(code **)(*param_1 + 0x328))(param_1,param_3,lVar9);
          if (*(int *)(param_3 + 0x28) == 2) {
            (**(code **)(*param_1 + 0x360))
                      (param_1,*(undefined4 *)(lVar9 + 0x60),*(undefined4 *)(lVar9 + 0x5c),
                       *(undefined4 *)(param_3 + 0x48),uVar7,0);
          }
          else {
            (**(code **)(*param_1 + 0x358))();
          }
        }
        lVar8 = (**(code **)(*param_1 + 0xd0))(param_1);
        if (lVar8 != 0) {
          uVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
          FUN_1432c2490(uVar7,lVar9 + 0x18);
        }
        lVar8 = *(longlong *)(lVar9 + 0x38);
        *(undefined8 *)(*(longlong *)(lVar9 + 8) + 0x10) = *(undefined8 *)(lVar9 + 0x10);
        *(undefined8 *)(*(longlong *)(lVar9 + 0x10) + 8) = *(undefined8 *)(lVar9 + 8);
        *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
        plVar5 = (longlong *)(lVar8 + ((longlong)*(int *)(lVar9 + 0x40) + 1) * 0x18);
        *plVar5 = *plVar5 - *(longlong *)(lVar9 + 0x50);
        lVar8 = *(longlong *)(lVar9 + 0x38);
        *(undefined4 *)(lVar9 + 0x40) = 2;
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar8 + 0x40);
        *(longlong *)(lVar9 + 8) = lVar8 + 0x30;
        *(longlong *)(*(longlong *)(lVar8 + 0x40) + 8) = lVar9;
        *(longlong *)(lVar8 + 0x40) = lVar9;
        *(longlong *)(lVar8 + 0x48) = *(longlong *)(lVar8 + 0x48) + *(longlong *)(lVar9 + 0x50);
      }
      iVar10 = iVar10 + 1;
    }
    lVar9 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar9 != 0) {
      uVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
      FUN_1432c25b0(uVar7,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142034c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))(plVar4,9);
  return;
}



// FUNCTION 142034c10 FUN_142034c10 body=341 status=ok
// SIG undefined FUN_142034c10(void)

void FUN_142034c10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  int local_res8;
  int local_resc;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar8 + 8))(plVar8,0x12,"HAL::DrawableCompare");
  plVar1 = param_1 + 0x3f2;
  lVar6 = *(longlong *)(param_1[0x36] * 0x340 + -0x340 + param_1[0x35]);
  iVar2 = *(int *)(lVar6 + 0x38);
  iVar3 = *(int *)(lVar6 + 0x3c);
  iVar4 = *(int *)(lVar6 + 0x30);
  iVar5 = *(int *)(lVar6 + 0x34);
  cVar7 = (**(code **)(*plVar1 + 0x18))(plVar1,0x500000,param_1[0x609]);
  if (cVar7 != '\0') {
    if ((char)param_1[0x3fd] == '\0') {
      *(undefined1 *)(param_1 + 0x3fd) = 1;
      *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
      param_1[0x3f5] = 0;
      param_1[0x3f6] = 0;
      param_1[0x3f7] = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      param_1[0x3f9] = 0;
      param_1[0x3fa] = 0;
      param_1[0x3fb] = 0;
      param_1[0x3fc] = 0;
    }
    local_48 = 0x40000000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0xbf800000;
    local_38 = 0;
    uStack_34 = 0xc0000000;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    local_res8 = iVar2 - iVar4;
    local_resc = iVar3 - iVar5;
    FUN_142035250(param_1 + 0x239,2,param_2,param_3,&local_res8,&local_48,plVar1,0);
  }
  (**(code **)(*param_1 + 0x300))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142034d61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x10))(plVar8,0x12);
  return;
}



// FUNCTION 142034d80 FUN_142034d80 body=363 status=ok
// SIG undefined FUN_142034d80(void)

void FUN_142034d80(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,char param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  int iVar9;
  int local_res8;
  int local_resc;
  
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar8 + 8))(plVar8,0x13,"HAL::DrawableCopyPixels");
  plVar1 = param_1 + 0x3f2;
  lVar6 = *(longlong *)(param_1[0x36] * 0x340 + -0x340 + param_1[0x35]);
  iVar2 = *(int *)(lVar6 + 0x38);
  iVar3 = *(int *)(lVar6 + 0x30);
  iVar4 = *(int *)(lVar6 + 0x3c);
  iVar5 = *(int *)(lVar6 + 0x34);
  iVar9 = 0x400080;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    iVar9 = 0x400000;
  }
  if (param_6 == '\0') {
    iVar9 = iVar9 + 0x20;
  }
  else if (param_5 != '\0') {
    iVar9 = iVar9 + 0x40;
  }
  cVar7 = (**(code **)(*plVar1 + 0x18))(plVar1,iVar9,param_1[0x609]);
  if (cVar7 != '\0') {
    if ((char)param_1[0x3fd] == '\0') {
      *(undefined1 *)(param_1 + 0x3fd) = 1;
      *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
      param_1[0x3f5] = 0;
      param_1[0x3f6] = 0;
      param_1[0x3f7] = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      param_1[0x3f9] = 0;
      param_1[0x3fa] = 0;
      param_1[0x3fb] = 0;
      param_1[0x3fc] = 0;
    }
    local_res8 = iVar2 - iVar3;
    local_resc = iVar4 - iVar5;
    FUN_142035250(param_1 + 0x239,(*(longlong *)(param_2 + 0x10) != 0) + '\x02',param_2,param_3,
                  &local_res8,param_4,plVar1,0);
  }
  (**(code **)(*param_1 + 0x300))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142034ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x10))(plVar8,0x13);
  return;
}



// FUNCTION 142034ef0 FUN_142034ef0 body=475 status=ok
// SIG undefined FUN_142034ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142034ef0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined2 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar3 + 8))(plVar3,0x17,"HAL::DrawableCopyback");
  plVar1 = param_1 + 0x3f2;
  (**(code **)(*plVar1 + 0x18))(plVar1,3,param_1[0x609]);
  if ((char)param_1[0x3fd] == '\0') {
    *(undefined1 *)(param_1 + 0x3fd) = 1;
    *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
    param_1[0x3f5] = 0;
    param_1[0x3f6] = 0;
    param_1[0x3f7] = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    param_1[0x3f9] = 0;
    param_1[0x3fa] = 0;
    param_1[0x3fb] = 0;
    param_1[0x3fc] = 0;
  }
  local_68 = *param_3;
  uStack_60 = param_3[1];
  plVar2 = param_1 + 0x5f3;
  local_58 = *(undefined4 *)(param_3 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_50 = *(undefined4 *)(param_3 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 8;
  FUN_142055c30(plVar1,plVar2,0x10,&local_68);
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 8;
  FUN_142055c30(plVar1,plVar2,0x18,param_4);
  local_b0 = *plVar2;
  local_a8 = param_1[0x5f4];
  local_a0 = param_1[0x5f5];
  local_b8 = 1;
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
  }
  local_98 = param_1[0x5f6];
  local_90 = param_1[0x5f7];
  local_88 = param_1[0x5f8];
  local_80 = param_1[0x5f9];
  local_78 = param_1[0x5fa];
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  local_d0 = 0;
  local_d8 = CONCAT22(local_d8._2_2_,1);
  FUN_14207b5e0(plVar1,&local_b0,0x17,param_2);
  FUN_1420709e0(plVar1,1);
  (**(code **)(*param_1 + 0x300))(param_1);
  (**(code **)(*plVar3 + 0x10))(plVar3,0x17);
  return;
}



// FUNCTION 1420350d0 FUN_1420350d0 body=383 status=ok
// SIG undefined FUN_1420350d0(void)

void FUN_1420350d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  int local_res8;
  int local_resc;
  ulonglong in_stack_ffffffffffffff98;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar8 + 8))(plVar8,0x11,"HAL::DrawableCxform");
  plVar1 = param_1 + 0x3f2;
  lVar6 = *(longlong *)(param_1[0x36] * 0x340 + -0x340 + param_1[0x35]);
  iVar2 = *(int *)(lVar6 + 0x38);
  iVar3 = *(int *)(lVar6 + 0x3c);
  iVar4 = *(int *)(lVar6 + 0x30);
  iVar5 = *(int *)(lVar6 + 0x34);
  cVar7 = (**(code **)(*plVar1 + 0x18))(plVar1,0x13,param_1[0x609]);
  if (cVar7 != '\0') {
    if ((char)param_1[0x3fd] == '\0') {
      *(undefined1 *)(param_1 + 0x3fd) = 1;
      *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
      param_1[0x3f5] = 0;
      param_1[0x3f6] = 0;
      param_1[0x3f7] = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      param_1[0x3f9] = 0;
      param_1[0x3fa] = 0;
      param_1[0x3fb] = 0;
      param_1[0x3fc] = 0;
    }
    FUN_142050f40(plVar1,param_1 + 0x5f3,param_4,0,in_stack_ffffffffffffff98 & 0xffffffff00000000);
    local_48 = 0x40000000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0xbf800000;
    local_38 = 0;
    uStack_34 = 0xc0000000;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    local_res8 = iVar2 - iVar4;
    local_resc = iVar3 - iVar5;
    FUN_142035250(param_1 + 0x239,1,param_2,param_3,&local_res8,&local_48,plVar1,0);
  }
  (**(code **)(*param_1 + 0x300))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014203524b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x10))(plVar8,0x11);
  return;
}



// FUNCTION 142035250 FUN_142035250 body=563 status=ok
// SIG undefined FUN_142035250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142035250(undefined8 param_1,uint param_2,undefined8 *param_3,longlong param_4,int *param_5,
             undefined4 *param_6,longlong param_7,uint param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_d0;
  undefined4 local_c8;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_68 = *param_6;
  local_64 = (float)param_6[1];
  puVar1 = (undefined8 *)(param_7 + 0x1008);
  local_5c = (float)param_6[3];
  local_54 = (float)param_6[5];
  local_4c = (float)param_6[7];
  local_60 = param_6[2];
  local_58 = param_6[4];
  local_50 = param_6[6];
  if ((param_8 & 2) != 0) {
    local_5c = local_5c + local_64;
    local_50 = 0;
    local_64 = -local_64;
    local_4c = local_4c + local_54;
    local_54 = -local_54;
    local_60 = 0;
  }
  if ((param_8 & 1) != 0) {
    local_5c = local_5c - 1.0 / (float)*param_5;
    local_4c = 1.0 / (float)param_5[1] + local_4c;
  }
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 8;
  FUN_142055c30(param_7,puVar1,0x10,&local_68);
  uVar2 = 0;
  if (param_2 != 0) {
    local_b8 = 1;
    do {
      local_b0 = *puVar1;
      local_a8 = *(undefined8 *)(param_7 + 0x1010);
      local_a0 = *(longlong *)(param_7 + 0x1018);
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      local_98 = *(undefined8 *)(param_7 + 0x1020);
      local_90 = *(undefined8 *)(param_7 + 0x1028);
      local_88 = *(undefined8 *)(param_7 + 0x1030);
      local_80 = *(undefined8 *)(param_7 + 0x1038);
      local_78 = *(longlong *)(param_7 + 0x1040);
      if (local_78 != 0) {
        LOCK();
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
        UNLOCK();
      }
      local_d8 = CONCAT22(local_d8._2_2_,1);
      local_d0 = uVar2;
      FUN_14207b5e0(param_7,&local_b0,0x17,*param_3);
      local_d0 = uVar2 * 2;
      local_c8 = 0;
      local_d8 = 8;
      FUN_142055c30(param_7,puVar1,0x18,param_4);
      uVar2 = uVar2 + 1;
      param_4 = param_4 + 0x20;
      param_3 = param_3 + 1;
    } while (uVar2 < param_2);
  }
  FUN_1420709e0(param_7,1);
  return 1;
}



// FUNCTION 142035490 FUN_142035490 body=428 status=ok
// SIG undefined FUN_142035490(void)

void FUN_142035490(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  int local_res8;
  int local_resc;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  ulonglong in_stack_ffffffffffffff90;
  ulonglong in_stack_ffffffffffffff98;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_res10 = param_2;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x118))();
  (**(code **)(*plVar8 + 8))(plVar8,0x14,"HAL::DrawableMerge");
  plVar1 = param_1 + 0x3f2;
  lVar6 = *(longlong *)(param_1[0x36] * 0x340 + -0x340 + param_1[0x35]);
  iVar2 = *(int *)(lVar6 + 0x38);
  iVar3 = *(int *)(lVar6 + 0x3c);
  iVar4 = *(int *)(lVar6 + 0x30);
  iVar5 = *(int *)(lVar6 + 0x34);
  cVar7 = (**(code **)(*plVar1 + 0x18))(plVar1,0x480000,param_1[0x609]);
  if (cVar7 != '\0') {
    if ((char)param_1[0x3fd] == '\0') {
      *(undefined1 *)(param_1 + 0x3fd) = 1;
      *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
      param_1[0x3f5] = 0;
      param_1[0x3f6] = 0;
      param_1[0x3f7] = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      param_1[0x3f9] = 0;
      param_1[0x3fa] = 0;
      param_1[0x3fb] = 0;
      param_1[0x3fc] = 0;
    }
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
    in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffff00000000;
    FUN_142055c30(plVar1,param_1 + 0x5f3,7,param_4,CONCAT44(uVar9,0x10),in_stack_ffffffffffffff90,
                  in_stack_ffffffffffffff98);
    FUN_142055c30(plVar1,param_1 + 0x5f3,8,param_4 + 0x40,0x10,
                  in_stack_ffffffffffffff90 & 0xffffffff00000000,
                  in_stack_ffffffffffffff98 & 0xffffffff00000000);
    local_58 = 0x40000000;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0xbf800000;
    local_48 = 0;
    uStack_44 = 0xc0000000;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    local_res8 = iVar2 - iVar4;
    local_resc = iVar3 - iVar5;
    FUN_142035250(param_1 + 0x239,2,local_res10,param_3,&local_res8,&local_58,plVar1,0);
  }
  (**(code **)(*param_1 + 0x300))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142035638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x10))(plVar8,0x14);
  return;
}



// FUNCTION 142035640 FUN_142035640 body=940 status=ok
// SIG undefined FUN_142035640(void)

void FUN_142035640(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  RefCountImpl *this;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x118))();
  local_d8 = plVar7;
  (**(code **)(*plVar7 + 8))(plVar7,0x15,"HAL::DrawablePaletteMap");
  uVar9 = 0;
  local_c0 = 0x10000;
  local_b8 = &local_a8;
  local_c8 = 0;
  uVar13 = 1;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x128))(param_1);
  local_e0 = 0x100;
  local_dc = 4;
  lVar12 = *plVar8;
  uVar5 = (**(code **)(lVar12 + 0x78))(plVar8);
  uVar16 = 0;
  this = (RefCountImpl *)
         (**(code **)(lVar12 + 0x10))(plVar8,uVar5,1,&local_e0,CONCAT44(uVar15,0xc0),0,0);
  local_e8 = this;
  if (this != (RefCountImpl *)0x0) {
    cVar4 = (**(code **)(*(longlong *)this + 0x70))(this,&local_c8,0,1);
    uVar14 = uVar9;
    if (cVar4 != '\0') {
      do {
        uVar11 = 0;
        lVar12 = local_b8[1] * uVar9 + local_b8[3];
        puVar10 = param_6;
        if ((param_5 & uVar13) == 0) {
          do {
            FUN_1432c7e30(&local_c8,lVar12,uVar11,uVar11 << ((byte)uVar14 & 0x1f));
            uVar11 = uVar11 + 1;
          } while (uVar11 < 0x100);
        }
        else {
          do {
            FUN_1432c7e30(&local_c8,lVar12,uVar11,*puVar10);
            uVar11 = uVar11 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar11 < 0x100);
        }
        this = local_e8;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
        uVar11 = (int)uVar14 + 8;
        param_6 = param_6 + 0x100;
        uVar14 = (ulonglong)uVar11;
      } while ((int)uVar11 < 0x20);
      cVar4 = (**(code **)(*(longlong *)local_e8 + 0x78))(local_e8);
      plVar7 = local_d8;
      if (cVar4 != '\0') {
        FUN_1432dafc0(param_1,0x10,1);
        plVar7 = param_1 + 0x3f2;
        lVar12 = *(longlong *)(param_1[0x36] * 0x340 + -0x340 + param_1[0x35]);
        iVar6 = *(int *)(lVar12 + 0x38);
        iVar1 = *(int *)(lVar12 + 0x3c);
        iVar2 = *(int *)(lVar12 + 0x30);
        iVar3 = *(int *)(lVar12 + 0x34);
        cVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,0x580000,param_1[0x609]);
        if (cVar4 != '\0') {
          if ((char)param_1[0x3fd] == '\0') {
            *(undefined1 *)(param_1 + 0x3fd) = 1;
            *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
            param_1[0x3f5] = 0;
            param_1[0x3f6] = 0;
            param_1[0x3f7] = 0;
            *(undefined4 *)(param_1 + 0x3f8) = 0;
            param_1[0x3f9] = 0;
            param_1[0x3fa] = 0;
            param_1[0x3fb] = 0;
            param_1[0x3fc] = 0;
          }
          local_88 = param_1[0x5f3];
          local_80 = param_1[0x5f4];
          local_78 = param_1[0x5f5];
          if (local_78 != 0) {
            LOCK();
            *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
            UNLOCK();
          }
          local_70 = param_1[0x5f6];
          local_68 = param_1[0x5f7];
          local_60 = param_1[0x5f8];
          local_58 = param_1[0x5f9];
          local_50 = param_1[0x5fa];
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
          }
          FUN_14207b5e0(plVar7,&local_88,0x15,this,1,uVar16 & 0xffffffff00000000);
          local_e8 = (RefCountImpl *)CONCAT44(iVar1 - iVar3,iVar6 - iVar2);
          FUN_142035250(param_1 + 0x239,1,param_2,param_3,&local_e8,param_4,plVar7,0);
        }
        (**(code **)(*param_1 + 0x300))(param_1);
        plVar7 = local_d8;
      }
    }
    Scaleform::RefCountImpl::Release(this);
  }
  Scaleform::Render::ImageData::freePlanes(&local_c8);
  lVar12 = local_b0;
  if ((local_b0 != 0) &&
     (iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_b0,0xffffffff), iVar6 == 1
     )) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar12);
  }
  (**(code **)(*plVar7 + 0x10))(plVar7,0x15);
  return;
}



// FUNCTION 1420359f0 Empty body=117 status=ok
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
  cVar1 = FUN_1407f5a80(param_1,param_2);
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



// FUNCTION 142035a70 FUN_142035a70 body=153 status=ok
// SIG undefined FUN_142035a70(void)

void FUN_142035a70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_142049360(*(undefined8 *)(param_1 + 0x10),&local_18);
  if (cVar1 != '\0') {
    FUN_14204d040(*(undefined8 *)(param_1 + 0x18));
    uVar2 = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
      if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
        plVar3 = (longlong *)(param_1 + 0x40);
      }
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 8))();
      }
    }
    (**(code **)(param_1 + 0x30))(uVar2,param_2);
    FUN_14204e6f0(*(undefined8 *)(param_1 + 0x80),param_1 + 0x90);
  }
  return;
}



// FUNCTION 142035b10 FUN_142035b10 body=176 status=ok
// SIG undefined FUN_142035b10(void)

undefined1 FUN_142035b10(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  pcVar6 = *(code **)(param_1 + 0x10);
  iStack_10 = *(int *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 8);
  local_38 = *param_3;
  local_30 = param_3[1];
  local_28 = param_3[2];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar7 = (*pcVar6)(iStack_10 + lVar4,param_2,&local_38);
  plVar5 = (longlong *)param_3[2];
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
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 142035bc0 FUN_142035bc0 body=189 status=ok
// SIG undefined FUN_142035bc0(void)

undefined1
FUN_142035bc0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  pcVar6 = *(code **)(param_1 + 0x10);
  iStack_10 = *(int *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 8);
  local_38 = *param_3;
  local_30 = param_3[1];
  local_28 = param_3[2];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar7 = (*pcVar6)(iStack_10 + lVar4,param_2,&local_38,param_4,param_5);
  plVar5 = (longlong *)param_3[2];
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
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 142035c90 FUN_142035c90 body=155 status=ok
// SIG undefined FUN_142035c90(void)

undefined8 FUN_142035c90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_142049360(*(undefined8 *)(param_1 + 0x10),&local_18);
  if (cVar1 != '\0') {
    FUN_14204d040(*(undefined8 *)(param_1 + 0x18));
    uVar2 = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
      if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
        plVar3 = (longlong *)(param_1 + 0x40);
      }
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 8))();
      }
    }
    (**(code **)(param_1 + 0x30))(uVar2,param_2);
    FUN_14204e6f0(*(undefined8 *)(param_1 + 0x80),param_1 + 0x90);
  }
  return 1;
}



// FUNCTION 142035d30 ExecuteIfSafe body=17 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseStaticDelegateInstance<void___cdecl(float)>::ExecuteIfSafe(longlong param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 8))(param_2);
  return 1;
}



// FUNCTION 142035d50 ExecuteIfSafe body=20 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseStaticDelegateInstance<void___cdecl(bool)>::ExecuteIfSafe(longlong param_1,undefined1 param_2)

{
  (**(code **)(param_1 + 8))(param_2);
  return 1;
}



// FUNCTION 142035d70 FUN_142035d70 body=601 status=ok
// SIG undefined FUN_142035d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142035d70(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_158 [32];
  undefined1 *local_138 [2];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  code *local_e8 [2];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_38;
  
  lVar9 = DAT_146accaf8;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar7 = 4;
    if (DVar6 != DAT_1468c21c0) goto LAB_142035de5;
  }
  lVar7 = 0;
LAB_142035de5:
  uVar4 = *param_2;
  if (*(int *)(lVar7 + lVar9) == 0) {
    cVar5 = FUN_142078ba0(uVar4);
    while (cVar5 != '\0') {
      lVar9 = FUN_142079f60(*param_2,local_98);
      local_b8 = 0;
      local_a8 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x70,local_d8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_144f71ae0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,lVar9);
        *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(lVar9 + 0x50);
      }
      local_e8[0] = UE4Function_Private::
                    TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>
                    ::Call;
      (**(code **)(*param_1 + 0x48))(param_1,local_e8);
      if (local_58 != 0) {
        plVar10 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar10 = local_68;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      cVar5 = FUN_142078ba0(*param_2);
    }
  }
  else {
    plVar10 = (longlong *)param_2[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_108 = 0;
    local_f8 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_128);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_14461b758;
      puVar8[1] = uVar4;
      puVar8[2] = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
    }
    local_138[0] = &LAB_14202c1b0;
    (**(code **)(*param_1 + 0x48))(param_1,local_138);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142035fd0 FUN_142035fd0 body=247 status=ok
// SIG undefined FUN_142035fd0(void)

void FUN_142035fd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14201ef30(param_1 + 2,uVar3);
  FUN_14201b6f0(param_1 + 2);
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_144f71a30;
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



// FUNCTION 1420360d0 FUN_1420360d0 body=256 status=ok
// SIG undefined FUN_1420360d0(void)

void FUN_1420360d0(undefined8 *param_1)

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
  (**(code **)(*(longlong *)param_1[2] + 0x10))();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f70f38;
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



// FUNCTION 1420361d0 FUN_1420361d0 body=251 status=ok
// SIG undefined FUN_1420361d0(void)

void FUN_1420361d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142033450(param_1 + 2,param_3,param_1 + 4);
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144f712e8;
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



// FUNCTION 1420362d0 FUN_1420362d0 body=237 status=ok
// SIG undefined FUN_1420362d0(void)

void FUN_1420362d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1420334d0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144f716d0;
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



// FUNCTION 1420363c0 FUN_1420363c0 body=237 status=ok
// SIG undefined FUN_1420363c0(void)

void FUN_1420363c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1420335a0(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144f712b0;
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



// FUNCTION 1420364b0 FUN_1420364b0 body=278 status=ok
// SIG undefined FUN_1420364b0(void)

void FUN_1420364b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = param_1[2];
  cVar4 = IsInRenderingThread();
  plVar8 = (longlong *)0x0;
  if (cVar4 != '\0') {
    plVar6 = *(longlong **)(lVar3 + 0x40);
    *(undefined8 *)(lVar3 + 0x58) = 0;
    (**(code **)(*plVar6 + 0x18))(plVar6,0,0);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f716e0;
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
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
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



// FUNCTION 1420365d0 FUN_1420365d0 body=237 status=ok
// SIG undefined FUN_1420365d0(void)

void FUN_1420365d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142033650(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144f712c0;
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



// FUNCTION 1420366c0 FUN_1420366c0 body=237 status=ok
// SIG undefined FUN_1420366c0(void)

void FUN_1420366c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142033700(param_1 + 2,param_3,param_1 + 3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144f71110;
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



// FUNCTION 1420367b0 FUN_1420367b0 body=287 status=ok
// SIG undefined FUN_1420367b0(void)

void FUN_1420367b0(undefined8 *param_1)

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
  if (((DAT_146accd68 != 0) && (lVar3 = *(longlong *)(DAT_146accd68 + 0x40), lVar3 != 0)) &&
     (lVar3 != -0x3070)) {
    (**(code **)(*(longlong *)(lVar3 + 0x3078) + 0x18))(lVar3 + 0x3078);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f710f0;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
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



// FUNCTION 1420368d0 FUN_1420368d0 body=290 status=ok
// SIG undefined FUN_1420368d0(void)

void FUN_1420368d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  if (((DAT_146accd68 != 0) && (*(longlong **)(DAT_146accd68 + 0x40) != (longlong *)0x0)) &&
     (plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_146accd68 + 0x40) + 0x128))(),
     plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f71100;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
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
  plVar3 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar3;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar3 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142036a00 FUN_142036a00 body=327 status=ok
// SIG undefined FUN_142036a00(void)

void FUN_142036a00(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar4 = FUN_142039c70();
  if (lVar4 != 0) {
    FUN_1420337d0(lVar4,uVar3,param_1[2]);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  plVar8 = (longlong *)param_1[3];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144f71700;
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



// FUNCTION 142036b50 FUN_142036b50 body=282 status=ok
// SIG undefined FUN_142036b50(void)

void FUN_142036b50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD *pDVar6;
  longlong *lpTlsValue;
  longlong *plVar7;
  longlong *plVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar3 = param_1[3];
  lVar4 = param_1[2];
  cVar5 = IsInRenderingThread();
  if (cVar5 != '\0') {
    plVar8 = *(longlong **)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x58) = uVar3;
    (**(code **)(*plVar8 + 0x18))(plVar8,0,0);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f716f0;
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
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar6);
  plVar8 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar8;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      lpTlsValue = plVar7;
    }
    TlsSetValue(*pDVar6,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar8 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar6 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar8;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142036c70 FUN_142036c70 body=88 status=ok
// SIG undefined FUN_142036c70(void)

bool FUN_142036c70(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146accf80;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142036ce0 FUN_142036ce0 body=249 status=ok
// SIG undefined FUN_142036ce0(void)

ulonglong FUN_142036ce0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (*(int *)(param_2 + 0x60) < 1) {
    if (*(int *)(param_2 + 0x70) < 1) {
      uVar5 = FKey::~FKey(param_3);
      return uVar5 & 0xffffffffffffff00;
    }
    plVar6 = *(longlong **)(param_2 + 0x68);
    plVar3 = plVar6 + (longlong)*(int *)(param_2 + 0x70) * 3;
    if (plVar6 != plVar3) {
      do {
        if (*plVar6 == *param_3) {
          FKey::~FKey(param_3);
          return 1;
        }
        plVar6 = plVar6 + 3;
      } while (plVar6 != plVar3);
    }
    FKey::~FKey(param_3);
    return 0;
  }
  plVar6 = *(longlong **)(param_2 + 0x58);
  plVar3 = plVar6 + (longlong)*(int *)(param_2 + 0x60) * 3;
  if (plVar6 != plVar3) {
    do {
      if (*plVar6 == *param_3) {
        uVar5 = 0;
        goto LAB_142036d21;
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar3);
  }
  uVar5 = 1;
LAB_142036d21:
  plVar3 = (longlong *)param_3[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 142036de0 FUN_142036de0 body=12 status=ok
// SIG undefined FUN_142036de0(void)

void FUN_142036de0(void)

{
  FUN_1420714f0(&PTR_PTR_1464f05c0);
  return;
}



// FUNCTION 142036df0 FUN_142036df0 body=83 status=ok
// SIG undefined FUN_142036df0(void)

void FUN_142036df0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_14202c790;
  FUN_14204c370(param_1,local_58);
  return;
}



// FUNCTION 142036e50 FUN_142036e50 body=446 status=ok
// SIG undefined FUN_142036e50(void)

void FUN_142036e50(void)

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
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res10);
    if (((DAT_146accd68 != 0) && (lVar6 = *(longlong *)(DAT_146accd68 + 0x40), lVar6 != 0)) &&
       (lVar6 != -0x3070)) {
      (**(code **)(*(longlong *)(lVar6 + 0x3078) + 0x18))(lVar6 + 0x3078);
    }
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10._0_4_);
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
  local_res18 = 0;
  *(int *)(plVar5 + 2) = iVar9 + -1;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
  *plVar8 = (longlong)&PTR_FUN_144f710f0;
  *(undefined1 *)((longlong)plVar8 + 0x11) = 0;
  plVar8[3] = 0;
  FUN_140445370(plVar8,0,0xff,1);
  return;
}



// FUNCTION 142037010 FUN_142037010 body=460 status=ok
// SIG undefined FUN_142037010(void)

void FUN_142037010(void)

{
  undefined8 *puVar1;
  char cVar2;
  DWORD DVar3;
  longlong *plVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res10);
    if (((DAT_146accd68 != 0) && (*(longlong **)(DAT_146accd68 + 0x40) != (longlong *)0x0)) &&
       (plVar4 = (longlong *)(**(code **)(**(longlong **)(DAT_146accd68 + 0x40) + 0x128))(),
       plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4);
    }
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar4 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar4 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar4);
    plVar6 = plVar4;
  }
  plVar4 = (longlong *)plVar6[1];
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)*plVar6;
    if (plVar4 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar1 = puVar8 + 0x20;
          *puVar8 = puVar1;
          lVar7 = lVar7 + -1;
          puVar8 = puVar1;
        } while (lVar7 != 0);
        *puVar1 = 0;
      }
      plVar4 = (longlong *)plVar6[1];
      iVar9 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar9 = 0x20;
      plVar6[1] = (longlong)plVar4;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar9 = (int)plVar6[2];
  }
  plVar6[1] = *plVar4;
  local_res18 = 0;
  *(int *)(plVar6 + 2) = iVar9 + -1;
  *(undefined4 *)(plVar4 + 1) = 0xff;
  *plVar4 = (longlong)&PTR_FUN_143f3edd8;
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
  *plVar4 = (longlong)&PTR_FUN_144f71100;
  *(undefined1 *)((longlong)plVar4 + 0x11) = 0;
  plVar4[3] = 0;
  FUN_140445370(plVar4,0,0xff,1);
  return;
}



// FUNCTION 1420371e0 FUN_1420371e0 body=450 status=ok
// SIG undefined FUN_1420371e0(void)

ulonglong FUN_1420371e0(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 local_78 [8];
  longlong *local_70;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  uVar8 = 0;
  LOCK();
  bVar3 = *(byte *)(param_1 + 0x30);
  if (bVar3 == 0) {
    *(byte *)(param_1 + 0x30) = 0;
  }
  else {
    uVar8 = (ulonglong)bVar3;
  }
  UNLOCK();
  if ((char)uVar8 != '\t') {
    if (DAT_146acd048 == '\0') {
      LOCK();
      param_2 = (ulonglong)DAT_146accf28;
      UNLOCK();
      DAT_146acd048 = '\x01';
      DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    }
    LOCK();
    bVar10 = DAT_146accf28 == 0;
    if (bVar10) {
      DAT_146accf28 = 0;
    }
    UNLOCK();
    if (bVar10) {
      uVar8 = FUN_142058660(param_1,param_2);
      return uVar8;
    }
    uVar8 = FUN_14204b990();
    if ((char)uVar8 != '\0') {
      uVar8 = 0;
      LOCK();
      bVar3 = *(byte *)(param_1 + 0x210);
      if (bVar3 == 0) {
        *(byte *)(param_1 + 0x210) = 1;
      }
      else {
        uVar8 = (ulonglong)bVar3;
      }
      UNLOCK();
      if (bVar3 == 0) {
        puVar9 = (undefined8 *)
                 TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_78);
        plVar6 = (longlong *)puVar9[1];
        uVar7 = *puVar9;
        puVar1 = (uint *)(plVar6 + 1);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *puVar1 = *puVar1 + 1;
          UNLOCK();
        }
        local_38 = 0;
        local_28 = 0;
        puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_58);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_14461b758;
          puVar9[1] = uVar7;
          puVar9[2] = plVar6;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *puVar1 = *puVar1 + 1;
            UNLOCK();
          }
        }
        local_68[0] = FUN_14202c030;
        uVar8 = FUN_14204c370(param_1,local_68);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          uVar4 = *puVar1;
          uVar8 = (ulonglong)uVar4;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar4 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            puVar1 = (uint *)((longlong)plVar6 + 0xc);
            uVar4 = *puVar1;
            uVar8 = (ulonglong)uVar4;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if (uVar4 == 1) {
              uVar8 = (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          puVar1 = (uint *)(local_70 + 1);
          uVar4 = *puVar1;
          uVar8 = (ulonglong)uVar4;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar4 == 1) {
            uVar8 = (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)local_70 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              uVar8 = (**(code **)(*local_70 + 8))(local_70,1);
            }
          }
        }
      }
    }
  }
  return uVar8;
}



// FUNCTION 1420373b0 FUN_1420373b0 body=724 status=ok
// SIG undefined FUN_1420373b0(void)

void FUN_1420373b0(undefined8 param_1,longlong param_2,int param_3,uint param_4,float *param_5,
                  float *param_6,undefined4 *param_7,int param_8)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  
  uVar1 = (uint)(*(int *)(param_2 + 4) != 0);
  auVar4._0_4_ = (float)uVar1;
  auVar8._0_4_ = auVar4._0_4_ * *(float *)(param_2 + 8) * 0.05;
  iVar3 = (int)auVar8._0_4_;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar8._0_4_)) {
    auVar8._4_4_ = auVar8._0_4_;
    auVar8._8_8_ = 0;
    uVar1 = movmskps(uVar1,auVar8);
    uVar1 = uVar1 & 1;
    auVar8._0_4_ = (float)(int)(iVar3 - uVar1);
  }
  fVar11 = 1.0;
  if (auVar8._0_4_ <= 1.0) {
    auVar8._0_4_ = 1.0;
  }
  auVar4._0_4_ = auVar4._0_4_ * *(float *)(param_2 + 0xc) * 0.05;
  iVar3 = (int)auVar4._0_4_;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar4._0_4_)) {
    auVar4._4_4_ = auVar4._0_4_;
    auVar4._8_8_ = 0;
    uVar1 = movmskps(uVar1,auVar4);
    auVar4._0_4_ = (float)(int)(iVar3 - (uVar1 & 1));
  }
  if (auVar4._0_4_ <= 1.0) {
    auVar4._0_4_ = 1.0;
  }
  uVar2 = SUB84(param_6,0);
  if (param_3 - 0x280000U < 2) {
    if ((param_4 & 1) == 0) {
      auVar4._0_4_ = (auVar8._0_4_ - 1.0) * 0.5 * *param_6;
      param_5[1] = 0.0;
      *param_5 = auVar4._0_4_;
      auVar10._0_4_ = auVar4._0_4_ + auVar4._0_4_ + 1.0;
      iVar3 = (int)auVar10._0_4_;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar10._0_4_)) {
        auVar10._4_4_ = auVar10._0_4_;
        auVar10._8_8_ = 0;
        uVar1 = movmskps(uVar2,auVar10);
        auVar10._0_4_ = (float)(int)(iVar3 - (uVar1 & 1));
      }
      param_5[3] = 1.0 / auVar10._0_4_;
      param_7[1] = 0;
    }
    else {
      auVar4._0_4_ = (auVar4._0_4_ - 1.0) * 0.5 * param_6[5];
      param_5[1] = 0.0;
      *param_5 = auVar4._0_4_;
      auVar7._0_4_ = auVar4._0_4_ + auVar4._0_4_ + 1.0;
      iVar3 = (int)auVar7._0_4_;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar7._0_4_)) {
        auVar7._4_4_ = auVar7._0_4_;
        auVar7._8_8_ = 0;
        uVar1 = movmskps(uVar2,auVar7);
        auVar7._0_4_ = (float)(int)(iVar3 - (uVar1 & 1));
      }
      param_5[3] = 1.0 / auVar7._0_4_;
      *param_7 = 0;
    }
  }
  else if ((param_4 == param_8 - 1U) && (param_4 != 0)) {
    *param_5 = 0.0;
    auVar4._0_4_ = (auVar4._0_4_ - 1.0) * 0.5 * param_6[5];
    param_5[1] = auVar4._0_4_;
    auVar5._0_4_ = auVar4._0_4_ + auVar4._0_4_ + 1.0;
    iVar3 = (int)auVar5._0_4_;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar5._0_4_)) {
      auVar5._4_4_ = auVar5._0_4_;
      auVar5._8_8_ = 0;
      uVar1 = movmskps(uVar2,auVar5);
      auVar5._0_4_ = (float)(int)(iVar3 - (uVar1 & 1));
    }
    param_5[3] = 1.0 / auVar5._0_4_;
  }
  else {
    auVar8._0_4_ = (auVar8._0_4_ - 1.0) * 0.5 * *param_6;
    *param_5 = auVar8._0_4_;
    auVar4._0_4_ = (auVar4._0_4_ - 1.0) * 0.5 * param_6[5];
    auVar9._0_4_ = auVar8._0_4_ + auVar8._0_4_ + 1.0;
    param_5[1] = auVar4._0_4_;
    iVar3 = (int)auVar9._0_4_;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar9._0_4_)) {
      auVar9._4_4_ = auVar9._0_4_;
      auVar9._8_8_ = 0;
      uVar1 = movmskps(uVar2,auVar9);
      param_6 = (float *)(ulonglong)(uVar1 & 1);
      auVar9._0_4_ = (float)(int)(iVar3 - (uVar1 & 1));
    }
    auVar6._0_4_ = auVar4._0_4_ + auVar4._0_4_ + 1.0;
    iVar3 = (int)auVar6._0_4_;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar6._0_4_)) {
      auVar6._4_4_ = auVar6._0_4_;
      auVar6._8_8_ = 0;
      uVar1 = movmskps((int)param_6,auVar6);
      auVar6._0_4_ = (float)(int)(iVar3 - (uVar1 & 1));
    }
    param_5[3] = 1.0 / (auVar9._0_4_ * auVar6._0_4_);
  }
  if (param_4 == param_8 - 1U) {
    fVar11 = *(float *)(param_2 + 0x18);
  }
  auVar4._0_4_ = *param_5;
  if (auVar4._0_4_ <= 1e-12) {
    auVar4._0_4_ = 1e-12;
  }
  param_5[2] = fVar11;
  *param_5 = auVar4._0_4_;
  auVar4._0_4_ = param_5[1];
  if (auVar4._0_4_ <= 1e-12) {
    auVar4._0_4_ = 1e-12;
  }
  param_5[1] = auVar4._0_4_;
  return;
}



// FUNCTION 142037690 FUN_142037690 body=875 status=ok
// SIG undefined FUN_142037690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142037690(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x70);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_DestroyObject_144145d88;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = &LAB_14202c180;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_144f71e28;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_14202c770;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 142037a00 FUN_142037a00 body=875 status=ok
// SIG undefined FUN_142037a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142037a00(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x80);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_FUN_144f71dd0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = FUN_14202c750;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_144f71e10;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_14202c940;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 142037d70 FUN_142037d70 body=875 status=ok
// SIG undefined FUN_142037d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142037d70(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x70);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_DestroyObject_144145d88;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = FUN_14202cbd0;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_144f71df8;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_14202cc50;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 1420380e0 FUN_1420380e0 body=893 status=ok
// SIG undefined FUN_1420380e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420380e0(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x70);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0xffffffff;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_FUN_144f71dc0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = FUN_14202c720;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_144f71de0;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_14202c420;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 142038460 FUN_142038460 body=314 status=ok
// SIG undefined FUN_142038460(void)

undefined8 FUN_142038460(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  undefined **ppuVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if ((lVar5 != 0) && (cVar2 = FUN_140d022f0(), cVar2 == '\0')) {
    do {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
        ppuVar4 = (undefined **)FUN_14203ca70();
        if (ppuVar4 != (undefined **)0x0) goto LAB_1420384e5;
      }
      else {
        ppuVar4 = &PTR_PTR_1464f05c0;
LAB_1420384e5:
        FUN_1420714f0(ppuVar4);
      }
      cVar2 = FUN_140d022f0(param_1);
      if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x50);
        (**(code **)(*plVar1 + 0x20))(plVar1,5,0);
      }
      cVar2 = FUN_140d022f0(param_1);
    } while (cVar2 == '\0');
    lVar5 = *(longlong *)(param_1 + 0xc0);
  }
  cVar2 = *(char *)(lVar5 + 0x58);
  while (cVar2 == '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0);
    cVar2 = *(char *)(lVar5 + 0x58);
  }
  return *(undefined8 *)(lVar5 + 0x60);
}



// FUNCTION 1420385a0 FUN_1420385a0 body=326 status=ok
// SIG undefined FUN_1420385a0(void)

undefined8 * FUN_1420385a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  undefined **ppuVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if ((lVar5 != 0) && (cVar2 = FUN_140d022f0(), cVar2 == '\0')) {
    do {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
        ppuVar4 = (undefined **)FUN_14203ca70();
        if (ppuVar4 != (undefined **)0x0) goto LAB_142038631;
      }
      else {
        ppuVar4 = &PTR_PTR_1464f05c0;
LAB_142038631:
        FUN_1420714f0(ppuVar4);
      }
      cVar2 = FUN_140d022f0(param_1);
      if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x50);
        (**(code **)(*plVar1 + 0x20))(plVar1,5,0);
      }
      cVar2 = FUN_140d022f0(param_1);
    } while (cVar2 == '\0');
    lVar5 = *(longlong *)(param_1 + 0xc0);
  }
  cVar2 = *(char *)(lVar5 + 0x58);
  while (cVar2 == '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0);
    cVar2 = *(char *)(lVar5 + 0x58);
  }
  *param_2 = *(undefined8 *)(lVar5 + 0x60);
  return param_2;
}



// FUNCTION 1420386f0 FUN_1420386f0 body=341 status=ok
// SIG undefined FUN_1420386f0(void)

undefined8 * FUN_1420386f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  undefined **ppuVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if ((lVar5 != 0) && (cVar2 = FUN_140d022f0(), cVar2 == '\0')) {
    do {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
        ppuVar4 = (undefined **)FUN_14203ca70();
        if (ppuVar4 != (undefined **)0x0) goto LAB_142038781;
      }
      else {
        ppuVar4 = &PTR_PTR_1464f05c0;
LAB_142038781:
        FUN_1420714f0(ppuVar4);
      }
      cVar2 = FUN_140d022f0(param_1);
      if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x50);
        (**(code **)(*plVar1 + 0x20))(plVar1,5,0);
      }
      cVar2 = FUN_140d022f0(param_1);
    } while (cVar2 == '\0');
    lVar5 = *(longlong *)(param_1 + 0xc0);
  }
  cVar2 = *(char *)(lVar5 + 0x58);
  while (cVar2 == '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0);
    cVar2 = *(char *)(lVar5 + 0x58);
  }
  *param_2 = *(undefined8 *)(lVar5 + 0x60);
  lVar5 = *(longlong *)(lVar5 + 0x68);
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142038850 FUN_142038850 body=517 status=ok
// SIG undefined FUN_142038850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142038850(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_1f8 [32];
  undefined2 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong *local_1a0;
  longlong *local_198;
  undefined1 *local_188 [2];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_138 [80];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FUN_14203d100(&local_1a0,param_1);
  if ((local_1a0 != (longlong *)0x0) && (cVar6 = FUN_142057ba0(), cVar6 != '\0')) {
    if ((*local_1a0 != 0) && (lVar7 = *(longlong *)(*local_1a0 + 0x10), lVar7 != 0))
    goto LAB_1420389ea;
    local_1c8 = 0;
    if (local_1a0[1] != 0) {
      lVar7 = FUN_141796df0(local_1a0 + 1);
      if (lVar7 == 0) {
        local_1b8 = local_1a0[1];
        FString::FString(&local_1b0,local_1a0 + 2);
        local_158 = 0;
        local_148 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_178);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_CopyToEmptyStorage_144553d08;
          puVar8[1] = local_1b8;
          puVar8[2] = local_1b0;
          *(undefined4 *)(puVar8 + 3) = local_1a8;
          local_1b0 = 0;
          *(undefined4 *)((longlong)puVar8 + 0x1c) = local_1a4;
        }
        lVar7 = local_1b0;
        local_1c8 = 0;
        local_188[0] = &LAB_14202c6f0;
        local_1c0 = 0x3c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
        local_1d8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_1c8,0x3c,"Gearbox::GFxAsset::GetAssetLoadIfNecessary::TryLoadPathTask");
        FUN_140fe55e0(local_e8,&local_1c8,local_188);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
        uVar9 = FUN_140ff5760(local_e8,local_138);
        FUN_142032330(uVar9);
        lVar7 = FUN_142038460(local_e8);
        FUN_140ce1dc0(local_e8);
      }
      goto LAB_1420389ea;
    }
  }
  lVar7 = 0;
LAB_1420389ea:
  plVar5 = local_198;
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_198 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  return lVar7;
}



// FUNCTION 142038a60 FUN_142038a60 body=794 status=ok
// SIG undefined FUN_142038a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142038a60(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStack_218 [32];
  undefined2 local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  code *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [80];
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar12 = 0;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  bVar8 = *pbVar1;
  if (bVar8 == 0) {
    *pbVar1 = 0;
  }
  else {
    uVar12 = (ulonglong)bVar8;
  }
  UNLOCK();
  if ((char)uVar12 < '\x06') {
    cVar7 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar7 == '\0') {
      puVar10 = (undefined8 *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_1c8);
      plVar13 = (longlong *)puVar10[1];
      uVar11 = *puVar10;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
      }
      plVar4 = (longlong *)param_3[1];
      uVar5 = *param_3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_188 = 0;
      local_178 = 0;
      puVar10 = (undefined8 *)FUN_140438ef0(0x38,local_1a8);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &PTR_FUN_144f71c48;
        puVar10[1] = param_1;
        puVar10[2] = param_2;
        puVar10[3] = uVar5;
        puVar10[4] = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        puVar10[5] = uVar11;
        puVar10[6] = plVar13;
        plVar13 = (longlong *)0x0;
      }
      local_1e0 = 0x16;
      local_1b8[0] = FUN_14202bea0;
      local_1e8 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
      local_1f8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_1e8,0x16,"FGFxObject::GetBounds");
      FUN_1410b2c00(local_118,&local_1e8,local_1b8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar4 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_1c0 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)local_1c0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
      uVar11 = FUN_1410ca7e0(local_118,local_168);
      FUN_1420326d0(param_1,uVar11);
      FUN_140d1b3a0(local_118);
      cVar7 = *(char *)(local_58 + 0x58);
      while (cVar7 == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))
                  (*(longlong **)(local_58 + 0x50),0x5d638865,0);
        cVar7 = *(char *)(local_58 + 0x58);
      }
      bVar8 = *(byte *)(local_58 + 0x60);
      FUN_140ce1dc0(local_118);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
      uVar12 = (ulonglong)bVar8;
    }
    else {
      local_1d8 = *param_3;
      local_1d0 = param_3[1];
      if (local_1d0 != 0) {
        LOCK();
        *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
        UNLOCK();
      }
      bVar8 = FUN_142038d80(param_1,param_2,&local_1d8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
      uVar12 = (ulonglong)bVar8;
    }
  }
  else {
    plVar13 = (longlong *)param_3[1];
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar13 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      uVar9 = (int)lVar6 - 1;
      uVar12 = (ulonglong)uVar9;
      if (uVar9 == 0) {
        uVar12 = (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          uVar12 = (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    uVar12 = uVar12 & 0xffffffffffffff00;
  }
  return uVar12;
}



// FUNCTION 142038d80 FUN_142038d80 body=870 status=ok
// SIG undefined FUN_142038d80(void)

undefined8 FUN_142038d80(longlong param_1,float *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  uint local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  uint local_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  uint local_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  uint local_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint local_40;
  undefined8 local_38;
  
  local_100 = 0;
  lVar7 = *param_3;
  if (*param_3 == 0) {
    lVar7 = param_1;
  }
  local_108 = (longlong *)0x0;
  local_118 = 0xffffffffffffffff;
  uStack_110 = 0xffffffffffffffff;
  uVar6 = *(uint *)(param_1 + 0xa0) & 0x8f;
  if (((uVar6 - 8 < 4) &&
      (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                         (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),&local_118,
                          "getBounds",lVar7 + 0x88,1,uVar6 == 10), cVar5 != '\0')) &&
     ((local_100 & 0x8f) - 8 < 4)) {
    local_d8 = (longlong *)0x0;
    local_e8 = 0xffffffffffffffff;
    uStack_e0 = 0xffffffffffffffff;
    local_d0 = 0;
    cVar5 = (**(code **)(*local_108 + 0x20))
                      (local_108,local_f8,&DAT_144f66554,&local_e8,(local_100 & 0x8f) == 10);
    uVar9 = 0;
    uVar10 = 0;
    dVar8 = local_c8;
    if (cVar5 == '\0') {
      dVar8 = 0.0;
    }
    if ((local_d0 >> 6 & 1) != 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8,&local_e8,local_c8);
    }
    local_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    lVar7 = *local_108;
    param_2[1] = (float)dVar8;
    cVar5 = (**(code **)(lVar7 + 0x20))
                      (local_108,local_f8,&DAT_144f6655c,&local_b8,((byte)local_100 & 0x8f) == 10);
    dVar8 = local_98;
    if (cVar5 == '\0') {
      dVar8 = 0.0;
    }
    if ((local_a0 >> 6 & 1) != 0) {
      (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,local_98);
    }
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    lVar7 = *local_108;
    *param_2 = (float)dVar8;
    cVar5 = (**(code **)(lVar7 + 0x20))
                      (local_108,local_f8,"right",&local_88,((byte)local_100 & 0x8f) == 10);
    dVar8 = local_68;
    if (cVar5 == '\0') {
      dVar8 = 0.0;
    }
    if ((local_70 >> 6 & 1) != 0) {
      (**(code **)(*local_78 + 0x10))(local_78,&local_88,local_68);
    }
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    lVar7 = *local_108;
    param_2[3] = (float)dVar8;
    cVar5 = (**(code **)(lVar7 + 0x20))
                      (local_108,local_f8,"bottom",&local_58,((byte)local_100 & 0x8f) == 10);
    if (cVar5 != '\0') {
      uVar9 = (undefined4)local_38;
      uVar10 = (undefined4)((ulonglong)local_38 >> 0x20);
    }
    if ((local_40 >> 6 & 1) != 0) {
      (**(code **)(*local_48 + 0x10))(local_48,&local_58,local_38);
    }
    param_2[2] = (float)(double)CONCAT44(uVar10,uVar9);
    if ((local_100 >> 6 & 1) != 0) {
      (**(code **)(*local_108 + 0x10))(local_108,&local_118,local_f8);
      local_108 = (longlong *)0x0;
    }
    local_100 = 0;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    return 1;
  }
  if ((local_100 >> 6 & 1) != 0) {
    (**(code **)(*local_108 + 0x10))(local_108,&local_118,local_f8);
    local_108 = (longlong *)0x0;
  }
  plVar4 = (longlong *)param_3[1];
  local_100 = 0;
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
  return 0;
}



// FUNCTION 1420390f0 FUN_1420390f0 body=473 status=ok
// SIG undefined FUN_1420390f0(void)

longlong * FUN_1420390f0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *plStack_20;
  
  plVar9 = (longlong *)0x0;
  iVar11 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 200));
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
    iVar11 = *(int *)(param_3 + 1) + -1;
  }
  lVar4 = FFnv::MemFnv64(puVar6,iVar11 * 2,1);
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar5 = param_1 + 0x118;
    }
    iVar11 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                              (longlong)*(int *)(param_1 + 0x128) - 1U) * 4);
    if (iVar11 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar11 * 0x20 + *(longlong *)(param_1 + 0xe0));
        if (*plVar8 == lVar4) {
          if (iVar11 != -1) goto LAB_1420391c1;
          break;
        }
        iVar11 = (int)plVar8[3];
      } while (iVar11 != -1);
    }
  }
  plVar8 = plVar9;
LAB_1420391c1:
  plVar10 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar10 = plVar9;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 200));
  if (plVar10 == (longlong *)0x0) {
    pplVar7 = &local_28;
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    local_30 = (longlong *)plVar10[1];
    plVar9 = (longlong *)*plVar10;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    pplVar7 = &local_38;
    bVar3 = true;
    bVar2 = false;
    local_38 = plVar9;
  }
  plVar8 = pplVar7[1];
  pplVar7[1] = (longlong *)0x0;
  *param_2 = (longlong)plVar9;
  param_2[1] = (longlong)plVar8;
  *pplVar7 = (longlong *)0x0;
  plVar9 = plStack_20;
  if ((bVar2) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_20 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar9 = local_30;
  if ((bVar3) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420392d0 FUN_1420392d0 body=196 status=ok
// SIG undefined FUN_1420392d0(void)

undefined8 FUN_1420392d0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  local_28 = 0;
  local_20 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_3,(longlong)(int)uVar3 * 2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  FUN_142026ab0(uVar1,param_2,&local_28,uVar2,0);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1420393a0 FUN_1420393a0 body=466 status=ok
// SIG undefined FUN_1420393a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1420393a0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188 [2];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_138 [80];
  undefined1 local_e8 [192];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar3 = *pcVar1;
  if (cVar3 == '\0') {
    *pcVar1 = '\0';
    cVar3 = '\0';
  }
  UNLOCK();
  if (cVar3 < '\x06') {
    cVar3 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar3 == '\0') {
      local_158 = 0;
      local_148 = 0;
      local_198 = param_1;
      uStack_190 = param_2;
      puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_178);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar4 + 1) = (undefined4)local_198;
        *(undefined4 *)((longlong)puVar4 + 0xc) = local_198._4_4_;
        *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_190;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_190._4_4_;
      }
      local_1a8 = 0;
      local_188[0] = FUN_14202c850;
      local_1a0 = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
      FGenericPlatformString::Memcpy(local_1a8,L"FGFxObject::GetColorTransform",0x3c);
      FUN_1410b2c00(local_e8,&local_1a8,local_188);
      uVar5 = FUN_1410ca7e0(local_e8,local_138);
      FUN_1420326d0(param_1,uVar5);
      FUN_140d1b3a0(local_e8);
      cVar3 = *(char *)(local_28 + 0x58);
      while (cVar3 == '\0') {
        (**(code **)(**(longlong **)(local_28 + 0x50) + 0x20))
                  (*(longlong **)(local_28 + 0x50),0x5d638865,0);
        cVar3 = *(char *)(local_28 + 0x58);
      }
      uVar2 = *(undefined1 *)(local_28 + 0x60);
      FUN_140ce1dc0(local_e8);
      return uVar2;
    }
    if ((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x110))
                          (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2),
       cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142039580 FUN_142039580 body=97 status=ok
// SIG undefined FUN_142039580(void)

undefined4 FUN_142039580(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  cVar1 = FUN_14203acd0(0xffffffffffffffff,"currentFrame",&local_38);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_18;
  }
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT44(uStack_14,local_18));
  }
  return uVar2;
}



// FUNCTION 1420395f0 FUN_1420395f0 body=54 status=ok
// SIG undefined FUN_1420395f0(void)

undefined * FUN_1420395f0(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + 0xf);
  if ((bVar1 & 1) == 0) {
    return &DAT_1467ccfd0;
  }
  return (undefined *)
         (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(bVar1 & 0xf) * 5] + 1) * 0x10 +
         *(longlong *)*param_1);
}



// FUNCTION 142039630 FUN_142039630 body=462 status=ok
// SIG undefined FUN_142039630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142039630(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  code *local_188 [2];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_138 [80];
  undefined1 local_e8 [192];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar3 = *pcVar1;
  if (cVar3 == '\0') {
    *pcVar1 = '\0';
    cVar3 = '\0';
  }
  UNLOCK();
  if (cVar3 < '\x06') {
    local_1b8 = param_2;
    cVar3 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar3 == '\0') {
      uStack_198 = &local_1b8;
      local_158 = 0;
      local_148 = 0;
      local_1a0 = param_1;
      puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_178);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar4 + 1) = (undefined4)local_1a0;
        *(undefined4 *)((longlong)puVar4 + 0xc) = local_1a0._4_4_;
        *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_198;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_198._4_4_;
      }
      local_1b0 = 0;
      local_188[0] = FUN_14202ca40;
      local_1a8 = 0x1d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0);
      FGenericPlatformString::Memcpy(local_1b0,L"FGFxObject::GetDisplayInfo()",0x3a);
      FUN_1410b2c00(local_e8,&local_1b0,local_188);
      uVar5 = FUN_1410ca7e0(local_e8,local_138);
      FUN_1420326d0(param_1,uVar5);
      FUN_140d1b3a0(local_e8);
      cVar3 = *(char *)(local_28 + 0x58);
      while (cVar3 == '\0') {
        (**(code **)(**(longlong **)(local_28 + 0x50) + 0x20))
                  (*(longlong **)(local_28 + 0x50),0x5d638865,0);
        cVar3 = *(char *)(local_28 + 0x58);
      }
      uVar2 = *(undefined1 *)(local_28 + 0x60);
      FUN_140ce1dc0(local_e8);
      return uVar2;
    }
    if ((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                          (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_1b8)
       , cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142039800 FUN_142039800 body=1118 status=ok
// SIG undefined FUN_142039800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142039800(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_308 [32];
  longlong *local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  LARGE_INTEGER local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 *local_298 [2];
  longlong local_288 [4];
  longlong *local_268;
  int local_258;
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 local_1f8 [80];
  undefined1 *local_1a8 [2];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  longlong *local_158;
  longlong *local_150;
  undefined1 local_148 [16];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar9 = (longlong *)0x0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\0') {
    *pcVar1 = '\0';
    cVar4 = '\0';
  }
  UNLOCK();
  if (cVar4 < '\x06') {
    cVar4 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar4 == '\0') {
      local_218 = 0;
      local_208 = 0;
      local_2b0 = param_1;
      uStack_2a8 = param_2;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_238);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar5 + 1) = (undefined4)local_2b0;
        *(undefined4 *)((longlong)puVar5 + 0xc) = local_2b0._4_4_;
        *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_2a8;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_2a8._4_4_;
      }
      local_2d8 = 0;
      local_248[0] = &LAB_14202ca90;
      local_2d0 = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
      FGenericPlatformString::Memcpy(local_2d8,L"FGFxObject::GetDisplayMatrix()",0x3e);
      FUN_140cdf730(local_f8,&local_2d8,local_248);
      QueryPerformanceCounter(&local_2b8);
      local_f8[0] = local_2b8;
      lVar6 = operator_new(0x18);
      plVar7 = plVar9;
      if (lVar6 != 0) {
        plVar7 = (longlong *)FUN_140cdf810(lVar6);
      }
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *(undefined4 *)(plVar8 + 1) = 1;
        *plVar8 = (longlong)&PTR_DestroyObject_1444f8938;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        plVar8[2] = (longlong)plVar7;
        plVar9 = plVar8;
      }
      local_2e8 = plVar7;
      local_2e0 = plVar9;
      SharedPointerInternals::EnableSharedFromThis(&local_2e8,plVar7,plVar7);
      *(undefined1 *)(local_2e8 + 2) = 1;
      local_2c0 = (longlong *)local_2e8[1];
      local_38 = *local_2e8;
      if (local_2c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
        UNLOCK();
      }
      local_2c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_2c0);
      plVar9 = local_2c0;
      if (local_2c0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_2c0 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_2c0)(local_2c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_2c0 + 8))(local_2c0,1);
          }
        }
      }
      local_178 = (longlong *)0x0;
      local_168 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_198);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_1444f8620;
        puVar5[1] = local_f8;
      }
      local_1a8[0] = &LAB_140cee980;
      local_158 = local_2e8;
      local_150 = local_2e0;
      if (local_2e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_148,local_1a8);
      local_268 = (longlong *)0x0;
      local_258 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x70,local_288);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_CopyToEmptyStorage_1444f8578;
        puVar5[2] = local_158;
        puVar5[3] = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_150 + 1) = (int)local_150[1] + 1;
          UNLOCK();
        }
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 4,local_148);
      }
      local_298[0] = &LAB_140cee8d0;
      if (local_108 != 0) {
        plVar9 = local_138;
        if (local_118 != (longlong *)0x0) {
          plVar9 = local_118;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_118 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar9 = local_150;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_150 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_150)(local_150);
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
      if (local_168 != 0) {
        plVar9 = local_198;
        if (local_178 != (longlong *)0x0) {
          plVar9 = local_178;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_178 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar9 = local_2e0;
      if (local_2e0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_2e0 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_2e0)(local_2e0);
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
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1f8,local_298);
      FUN_14204c370(*(undefined8 *)(param_1 + 0x78),local_1f8);
      if (local_258 != 0) {
        plVar9 = local_288;
        if (local_268 != (longlong *)0x0) {
          plVar9 = local_268;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_268 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_140d1b3a0(local_f8);
      FUN_140ce1dc0(local_f8);
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0xf0))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2);
    }
  }
  return;
}



// FUNCTION 142039c60 thunk_FUN_142039c70 body=5 status=ok
// SIG undefined thunk_FUN_142039c70(void)

undefined8 * thunk_FUN_142039c70(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  if (DAT_146accd68 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    LOCK();
    bVar8 = DAT_146accd48 == 0;
    if (bVar8) {
      DAT_146accd48 = 0;
    }
    UNLOCK();
    if ((bVar8) && (DAT_1468c217e == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      plVar4 = (longlong *)GetMoviePlayer();
      cVar3 = (**(code **)(*plVar4 + 0xb8))(plVar4);
      if (cVar3 == '\0') {
        plVar4 = (longlong *)GetMoviePlayer();
        (**(code **)(*plVar4 + 0x50))(plVar4,0);
        lVar6 = DAT_146b17150;
        if (DAT_146b17150 != 0) {
          lVar5 = FUN_142937670();
          lVar1 = *(longlong *)(lVar6 + 0x10);
          if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            FUN_142463010(lVar6);
          }
        }
      }
      FUN_1432f41b0("Insert Scaleform License Key Here");
      lVar6 = operator_new(800);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)FUN_142018ac0(lVar6);
      }
      puVar2 = DAT_146accd68;
      DAT_146accd68 = puVar7;
      if (puVar2 == (undefined8 *)0x0) {
        return puVar7;
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return DAT_146accd68;
}



// FUNCTION 142039c70 FUN_142039c70 body=278 status=ok
// SIG undefined FUN_142039c70(void)

undefined8 * FUN_142039c70(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  if (DAT_146accd68 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    LOCK();
    bVar8 = DAT_146accd48 == 0;
    if (bVar8) {
      DAT_146accd48 = 0;
    }
    UNLOCK();
    if ((bVar8) && (DAT_1468c217e == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      plVar4 = (longlong *)GetMoviePlayer();
      cVar3 = (**(code **)(*plVar4 + 0xb8))(plVar4);
      if (cVar3 == '\0') {
        plVar4 = (longlong *)GetMoviePlayer();
        (**(code **)(*plVar4 + 0x50))(plVar4,0);
        lVar6 = DAT_146b17150;
        if (DAT_146b17150 != 0) {
          lVar5 = FUN_142937670();
          lVar1 = *(longlong *)(lVar6 + 0x10);
          if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            FUN_142463010(lVar6);
          }
        }
      }
      FUN_1432f41b0("Insert Scaleform License Key Here");
      lVar6 = operator_new(800);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)FUN_142018ac0(lVar6);
      }
      puVar2 = DAT_146accd68;
      DAT_146accd68 = puVar7;
      if (puVar2 == (undefined8 *)0x0) {
        return puVar7;
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return DAT_146accd68;
}



// FUNCTION 142039da0 getMaterialInfo body=195 status=ok
// SIG undefined getMaterialInfo(void)

undefined8 *
UBidstackCustomMeshAdUnitComponent::getMaterialInfo(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  iVar3 = *(int *)(param_1 + 0xf8);
  puVar4 = *(undefined8 **)(param_1 + 0xf0);
  *(int *)(param_2 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar3,0);
  puVar2 = (undefined8 *)*param_2;
  do {
    *puVar2 = 0;
    iVar1 = *(int *)(puVar4 + 1);
    _Src = (void *)*puVar4;
    *(int *)(puVar2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
    }
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_2;
}



// FUNCTION 142039e70 FUN_142039e70 body=951 status=ok
// SIG undefined FUN_142039e70(void)

longlong * FUN_142039e70(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  void **ppvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  void *pvVar12;
  void *local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  
  if ((param_2 == (longlong *)0x0) || (lVar5 = (**(code **)(*param_2 + 0x468))(param_2), lVar5 == 0)
     ) {
    local_38 = (void *)0x0;
    if ((int)param_2[6] < 2) {
      local_30 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"INVALID_SWF_PATH",0x22);
      ppvVar6 = &local_38;
      bVar4 = true;
      bVar3 = false;
      bVar2 = false;
      pvVar10 = local_38;
    }
    else {
      local_30 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pvVar10 = local_38;
      FGenericPlatformString::Convert<char,wchar_t>(local_38,0xb,"/ package/",0xb,0x3f);
      iVar8 = (int)param_2[6];
      if ((int)local_30 < 2) {
        pvVar12 = (void *)param_2[5];
        local_48 = (void *)0x0;
        local_40 = iVar8;
        if (iVar8 == 0) {
          local_3c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar8,0);
          _guard_xfg_dispatch_icall_nop(local_48,pvVar12,(longlong)iVar8 * 2);
        }
      }
      else {
        iVar7 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar7 = 0;
        }
        if (((int)local_30 != 0) || (iVar8 = 1, iVar7 == 0)) {
          iVar8 = 0;
        }
        local_48 = pvVar10;
        local_40 = (int)local_30;
        pvVar10 = (void *)0x0;
        local_3c = local_30._4_4_;
        iVar11 = (int)local_30;
        if (local_30._4_4_ < iVar8 + iVar7 + (int)local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
          iVar11 = local_40;
        }
        pvVar12 = (void *)param_2[5];
        iVar8 = iVar11;
        iVar9 = local_3c;
        if (iVar7 != 0) {
          local_40 = iVar11 + (uint)(iVar11 == 0) + iVar7;
          if (local_3c < local_40) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
          }
          iVar9 = local_3c;
          iVar8 = local_40;
          pvVar1 = (void *)((longlong)local_48 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar12,(longlong)iVar7 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
        }
        local_3c = iVar9;
        local_40 = iVar8;
      }
      ppvVar6 = &local_48;
      bVar4 = false;
      bVar3 = true;
      bVar2 = true;
    }
    *param_1 = (longlong)*ppvVar6;
    *ppvVar6 = (void *)0x0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(ppvVar6 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)ppvVar6 + 0xc);
    ppvVar6[1] = (void *)0x0;
    if ((bVar2) && (local_48 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar3) && (pvVar10 != (void *)0x0)) {
      FMemory::Free(pvVar10);
    }
    pvVar10 = local_38;
    if (!bVar4) {
      return param_1;
    }
  }
  else {
    if (((*(byte *)(lVar5 + 0x28) & 1) == 0) || ((int)param_2[6] < 2)) {
      FString::FString(param_1,lVar5 + 0x50);
      return param_1;
    }
    local_38 = (void *)0x0;
    local_30 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    pvVar10 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>(local_38,0xb,"/ package/",0xb,0x3f);
    if (1 < (int)local_30) {
      iVar8 = (int)param_2[6] + -1;
      if ((int)param_2[6] == 0) {
        iVar8 = 0;
      }
      if (((int)local_30 != 0) || (iVar7 = 1, iVar8 == 0)) {
        iVar7 = 0;
      }
      local_48 = pvVar10;
      local_40 = (int)local_30;
      local_3c = local_30._4_4_;
      iVar11 = (int)local_30;
      if (local_30._4_4_ < iVar8 + (int)local_30 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
        iVar11 = local_40;
      }
      pvVar10 = (void *)param_2[5];
      pvVar12 = local_48;
      iVar7 = iVar11;
      iVar9 = local_3c;
      if (iVar8 != 0) {
        local_40 = iVar11 + (uint)(iVar11 == 0) + iVar8;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
        }
        iVar9 = local_3c;
        iVar7 = local_40;
        pvVar12 = local_48;
        pvVar1 = (void *)((longlong)local_48 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar8 * 2) = 0;
      }
      *param_1 = (longlong)pvVar12;
      *(int *)(param_1 + 1) = iVar7;
      *(int *)((longlong)param_1 + 0xc) = iVar9;
      return param_1;
    }
    FString::FString(param_1,param_2 + 5);
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return param_1;
}



// FUNCTION 14203a230 FUN_14203a230 body=542 status=ok
// SIG undefined FUN_14203a230(void)

int FUN_14203a230(undefined8 param_1,longlong param_2,uint param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  
  iVar8 = *(int *)(param_2 + 0x10);
  if (iVar8 < 6) {
    fVar9 = *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20);
    iVar8 = *(int *)(param_2 + 0x1c);
    if (fVar9 < 12800.0) {
      if (iVar8 == 0) {
        iVar8 = 1;
      }
    }
    else {
      iVar8 = iVar8 * 2;
    }
    uVar2 = iVar8 - 1;
    if (iVar8 < 1) {
      uVar2 = 0;
    }
    uVar5 = 0;
    if (0 < (int)uVar2) {
      piVar7 = param_4;
      for (uVar4 = (ulonglong)uVar2; uVar5 = uVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar7 = ((fVar9 < 12800.0) + 0x14) * 0x20000;
        piVar7 = piVar7 + 1;
      }
    }
    uVar2 = *(uint *)(param_2 + 0x18) & 7;
    if (uVar2 - 1 < 5) {
      if (uVar2 < 3) {
        param_4[(int)uVar5] = 0x300000;
      }
      else if (uVar2 == 3) {
        param_4[(int)uVar5] = 0x350000;
      }
      else if (uVar2 == 4) {
        param_4[(int)uVar5] = 0x308000;
      }
      else if (uVar2 == 5) {
        param_4[(int)uVar5] = 0x344000;
      }
      bVar1 = (byte)*(uint *)(param_2 + 0x18);
      if ((*(uint *)(param_2 + 0x18) & 0x20) == 0) {
        if (((char)bVar1 < '\0') || ((uVar2 == 1 && ((bVar1 & 0x50) == 0x40)))) {
          iVar3 = param_4[(int)uVar5] + 0x400;
          param_4[(int)uVar5] = iVar3;
        }
        else {
          iVar3 = param_4[(int)uVar5];
        }
      }
      else {
        if ((((uint)param_4[(int)uVar5] >> 0x12 & 1) != 0) || (iVar3 = 0x800, uVar2 == 4)) {
          iVar3 = 0x1000;
        }
        iVar3 = param_4[(int)uVar5] + iVar3;
        param_4[(int)uVar5] = iVar3;
      }
      uVar2 = *(uint *)(param_2 + 0x18) & 0x50;
      iVar6 = iVar3;
      if (uVar2 != 0) {
        iVar6 = iVar3 + 0x2000;
      }
      param_4[(int)uVar5] = iVar6;
      if (uVar2 != 0) {
        iVar3 = iVar3 + 0x2000;
      }
      if ((param_3 & 1) != 0) {
        param_4[(int)uVar5] = iVar3 + 1;
        return iVar8;
      }
    }
    else {
      iVar3 = ((fVar9 < 12800.0) + 0x14) * 0x20000;
      param_4[(int)uVar5] = iVar3;
      if ((param_3 & 1) != 0) {
        param_4[(int)uVar5] = iVar3 + 1;
        return iVar8;
      }
    }
  }
  else if (iVar8 == 8) {
    iVar8 = 1;
    *param_4 = 0x200000;
    if ((param_3 & 1) != 0) {
      *param_4 = 0x200001;
      return 1;
    }
  }
  else if (iVar8 == 10) {
    *param_4 = 0x380000;
    iVar8 = 1;
    if (*(int *)(param_2 + 0x30) == 2) {
      *param_4 = 0x380200;
      return 1;
    }
    if (*(int *)(param_2 + 0x30) == 3) {
      *param_4 = 0x380100;
      return 1;
    }
  }
  else {
    iVar8 = 0;
  }
  return iVar8;
}



// FUNCTION 14203a450 FUN_14203a450 body=386 status=ok
// SIG undefined FUN_14203a450(void)

undefined8 * FUN_14203a450(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  iVar10 = 0;
  puVar6 = (undefined8 *)FUN_142874a50(DAT_146b17150,*(undefined8 *)(DAT_146b17150 + 0x7b0));
  iVar11 = 0;
  if (0 < *(int *)(puVar6 + 1)) {
    plVar7 = (longlong *)*puVar6;
    lVar8 = 0;
    do {
      if (*(int *)(*plVar7 + 0x108) == param_3) {
        iVar10 = iVar11;
        if (iVar11 < 0) goto LAB_14203a500;
        break;
      }
      iVar11 = iVar11 + 1;
      lVar8 = lVar8 + 1;
      plVar7 = plVar7 + 1;
    } while (lVar8 < *(int *)(puVar6 + 1));
  }
  if (iVar10 < *(int *)(param_1 + 0x148)) {
    puVar6 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x140));
    local_20 = (longlong *)puVar6[1];
    uVar9 = *puVar6;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    puVar6 = &local_28;
    bVar5 = true;
    bVar4 = false;
    local_28 = uVar9;
  }
  else {
LAB_14203a500:
    puVar6 = &local_18;
    local_18 = 0;
    plStack_10 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    uVar9 = 0;
  }
  uVar3 = puVar6[1];
  puVar6[1] = 0;
  *param_2 = uVar9;
  param_2[1] = uVar3;
  *puVar6 = 0;
  plVar7 = plStack_10;
  if ((bVar4) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar7 = local_20;
  if ((bVar5) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14203a5e0 FUN_14203a5e0 body=62 status=ok
// SIG undefined FUN_14203a5e0(void)

undefined8 * FUN_14203a5e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"ScaleformRenderer",0x24);
  return param_2;
}



// FUNCTION 14203a620 FUN_14203a620 body=477 status=ok
// SIG undefined FUN_14203a620(void)

undefined8 * FUN_14203a620(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar8 = DAT_146accbd8;
  plVar9 = (longlong *)0x0;
  plVar6 = plVar9;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    plVar5 = (longlong *)operator_new(0x50);
    if (plVar5 == (longlong *)0x0) goto LAB_14203a700;
    lVar8 = param_1 + 0x10;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      plVar5 = (longlong *)&DAT_00000004;
      if (DVar3 == DAT_1468c21c0) goto LAB_14203a686;
    }
    else {
LAB_14203a686:
      plVar5 = plVar9;
    }
    iVar4 = *(int *)((longlong)plVar5 + lVar8);
    plVar5 = (longlong *)operator_new(0x50);
    if (iVar4 != 0) {
      if (plVar5 != (longlong *)0x0) {
        plVar6 = (longlong *)FUN_142018900(plVar5,param_1 + 0x28);
      }
      goto LAB_14203a700;
    }
    if (plVar5 == (longlong *)0x0) goto LAB_14203a700;
    lVar8 = param_1 + 0x38;
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (longlong)&PTR_FUN_144f70cf8;
  FSoftObjectPath::ToString(lVar8,plVar5 + 3);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(plVar5 + 5,param_1);
  plVar6 = plVar5;
LAB_14203a700:
  plVar7 = (longlong *)operator_new(0x18);
  plVar5 = plVar9;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = (longlong)plVar6;
    plVar5 = plVar7;
  }
  *param_2 = plVar6;
  param_2[1] = plVar5;
  plVar7 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar9;
  }
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 != 0) {
      if (plVar7[1] != 0) {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) {
          return param_2;
        }
      }
      plVar5 = (longlong *)param_2[1];
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar6;
    plVar6 = (longlong *)plVar7[1];
    if (plVar5 != plVar6) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar7[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar7[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14203a810 FUN_14203a810 body=690 status=ok
// SIG undefined FUN_14203a810(void)

byte * FUN_14203a810(undefined8 param_1,byte *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  lVar3 = *param_3;
  *param_2 = 0x80;
  lVar3 = (**(code **)(lVar3 + 0x400))(param_3);
  if (lVar3 == 0) {
    return param_2;
  }
  plVar1 = *(longlong **)(lVar3 + 0xb0);
  if (plVar1 == (longlong *)0x0) {
    return param_2;
  }
  local_e8 = DAT_1469ea090;
  local_e0 = DAT_1469ea098;
  local_d8 = DAT_1469ea0a0;
  if (DAT_1469ea0a0 != 0) {
    LOCK();
    *(int *)(DAT_1469ea0a0 + 8) = *(int *)(DAT_1469ea0a0 + 8) + 1;
    UNLOCK();
  }
  cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_e8);
  if (cVar2 == '\0') {
    local_d0 = DAT_1469ea0a8;
    local_c8 = DAT_1469ea0b0;
    local_c0 = DAT_1469ea0b8;
    if (DAT_1469ea0b8 != 0) {
      LOCK();
      *(int *)(DAT_1469ea0b8 + 8) = *(int *)(DAT_1469ea0b8 + 8) + 1;
      UNLOCK();
    }
    cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_d0);
    if (cVar2 != '\0') goto LAB_14203a8d4;
  }
  else {
LAB_14203a8d4:
    *param_2 = *param_2 | 1;
  }
  local_b8 = DAT_1469ea0c0;
  local_b0 = DAT_1469ea0c8;
  local_a8 = DAT_1469ea0d0;
  if (DAT_1469ea0d0 != 0) {
    LOCK();
    *(int *)(DAT_1469ea0d0 + 8) = *(int *)(DAT_1469ea0d0 + 8) + 1;
    UNLOCK();
  }
  cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_b8);
  if (cVar2 == '\0') {
    local_a0 = DAT_1469ea0d8;
    local_98 = DAT_1469ea0e0;
    local_90 = DAT_1469ea0e8;
    if (DAT_1469ea0e8 != 0) {
      LOCK();
      *(int *)(DAT_1469ea0e8 + 8) = *(int *)(DAT_1469ea0e8 + 8) + 1;
      UNLOCK();
    }
    cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_a0);
    if (cVar2 != '\0') goto LAB_14203a953;
  }
  else {
LAB_14203a953:
    *param_2 = *param_2 | 2;
  }
  local_88 = DAT_1469ea0f0;
  local_80 = DAT_1469ea0f8;
  local_78 = DAT_1469ea100;
  if (DAT_1469ea100 != 0) {
    LOCK();
    *(int *)(DAT_1469ea100 + 8) = *(int *)(DAT_1469ea100 + 8) + 1;
    UNLOCK();
  }
  cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_88);
  if (cVar2 == '\0') {
    local_70 = DAT_1469ea108;
    local_68 = DAT_1469ea110;
    local_60 = DAT_1469ea118;
    if (DAT_1469ea118 != 0) {
      LOCK();
      *(int *)(DAT_1469ea118 + 8) = *(int *)(DAT_1469ea118 + 8) + 1;
      UNLOCK();
    }
    cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_70);
    if (cVar2 == '\0') goto LAB_14203a9d5;
  }
  *param_2 = *param_2 | 4;
LAB_14203a9d5:
  local_58 = DAT_1469ea0a8;
  local_50 = DAT_1469ea0b0;
  local_48 = DAT_1469ea0b8;
  if (DAT_1469ea0b8 != 0) {
    LOCK();
    *(int *)(DAT_1469ea0b8 + 8) = *(int *)(DAT_1469ea0b8 + 8) + 1;
    UNLOCK();
  }
  cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_58);
  if (cVar2 == '\0') {
    local_40 = DAT_1469ea0d8;
    local_38 = DAT_1469ea0e0;
    local_30 = DAT_1469ea0e8;
    if (DAT_1469ea0e8 != 0) {
      LOCK();
      *(int *)(DAT_1469ea0e8 + 8) = *(int *)(DAT_1469ea0e8 + 8) + 1;
      UNLOCK();
    }
    cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_40);
    if (cVar2 == '\0') {
      local_28 = DAT_1469ea108;
      local_20 = DAT_1469ea110;
      local_18 = DAT_1469ea118;
      if (DAT_1469ea118 != 0) {
        LOCK();
        *(int *)(DAT_1469ea118 + 8) = *(int *)(DAT_1469ea118 + 8) + 1;
        UNLOCK();
      }
      cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_28);
      if (cVar2 == '\0') {
        return param_2;
      }
    }
  }
  *param_2 = *param_2 | 0x40;
  return param_2;
}



// FUNCTION 14203aad0 FUN_14203aad0 body=157 status=ok
// SIG undefined FUN_14203aad0(void)

undefined4 FUN_14203aad0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  cVar4 = FWeakObjectPtr::IsValid(lVar7 + 0x70,0,1);
  if (cVar4 != '\0') {
    plVar6 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x70);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x468))(plVar6);
      if (lVar7 != 0) {
        uVar5 = FUN_142087000(lVar7);
        goto LAB_14203ab24;
      }
    }
  }
  uVar5 = 0;
LAB_14203ab24:
  plVar6 = (longlong *)param_1[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 14203ab70 FUN_14203ab70 body=81 status=ok
// SIG undefined FUN_14203ab70(void)

int FUN_14203ab70(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_142874a50(DAT_146b17150,*(undefined8 *)(DAT_146b17150 + 0x7b0));
  iVar1 = 0;
  if (0 < *(int *)(puVar2 + 1)) {
    plVar4 = (longlong *)*puVar2;
    lVar3 = 0;
    do {
      if (*(int *)(*plVar4 + 0x108) == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (lVar3 < *(int *)(puVar2 + 1));
  }
  return 0;
}



// FUNCTION 14203abd0 FUN_14203abd0 body=71 status=ok
// SIG undefined FUN_14203abd0(void)

undefined8 FUN_14203abd0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x100))
                      (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14203ac20 FUN_14203ac20 body=8 status=ok
// SIG undefined FUN_14203ac20(void)

undefined8 FUN_14203ac20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x250);
}



// FUNCTION 14203ac30 FUN_14203ac30 body=148 status=ok
// SIG undefined FUN_14203ac30(void)

ulonglong FUN_14203ac30(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    if (DAT_146ace89c == '\0') {
      DAT_146ace89c = '\x01';
    }
    return 1;
  }
  uVar3 = (*(byte *)(*(longlong *)**(undefined8 **)(param_2 + 0x38) + 0xf) & 0x10 | 0x20) >> 3;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x10);
    if (iVar2 - 5U < 6) {
      iVar2 = (iVar2 - 9U < 2) + 1;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = uVar3 + iVar2 * 2;
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x11c8) + 0x18))();
  uVar1 = (uVar1 & 0xffffffff) / (ulonglong)uVar3;
  if (0x18 < (uint)uVar1) {
    uVar1 = 0x18;
  }
  return uVar1;
}



// FUNCTION 14203acd0 FUN_14203acd0 body=483 status=ok
// SIG undefined FUN_14203acd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14203acd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_208 [32];
  undefined2 local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 *local_1a8;
  code *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  undefined1 local_148 [80];
  undefined1 local_f8 [192];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar3 = *pcVar1;
  if (cVar3 == '\0') {
    *pcVar1 = '\0';
    cVar3 = '\0';
  }
  UNLOCK();
  if (cVar3 < '\x06') {
    local_1d8 = param_2;
    local_1d0 = param_3;
    cVar3 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar3 == '\0') {
      uStack_1b0 = &local_1d8;
      local_1a8 = &local_1d0;
      local_168 = 0;
      local_158 = 0;
      local_1b8 = param_1;
      puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_188);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 1) = (undefined4)local_1b8;
        *(undefined4 *)((longlong)puVar4 + 0xc) = local_1b8._4_4_;
        *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_1b0;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_1b0._4_4_;
        *puVar4 = &PTR_FUN_143f4d0b0;
        puVar4[3] = local_1a8;
      }
      local_1c8 = 0;
      local_198[0] = FUN_14202c490;
      local_1c0 = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
      local_1e8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_1c8,0x16,"FGFxObject::GetMember");
      FUN_1410b2c00(local_f8,&local_1c8,local_198);
      uVar5 = FUN_1410ca7e0(local_f8,local_148);
      FUN_1420326d0(param_1,uVar5);
      FUN_140d1b3a0(local_f8);
      cVar3 = *(char *)(local_38 + 0x58);
      while (cVar3 == '\0') {
        (**(code **)(**(longlong **)(local_38 + 0x50) + 0x20))
                  (*(longlong **)(local_38 + 0x50),0x5d638865,0);
        cVar3 = *(char *)(local_38 + 0x58);
      }
      uVar2 = *(undefined1 *)(local_38 + 0x60);
      FUN_140ce1dc0(local_f8);
      return uVar2;
    }
    uVar6 = *(uint *)(param_1 + 0xa0) & 0x8f;
    if (uVar6 - 8 < 4) {
      local_1e8 = CONCAT11(local_1e8._1_1_,uVar6 == 10);
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_1d8,
                         local_1d0);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


