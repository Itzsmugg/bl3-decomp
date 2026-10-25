// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424067d0 FUN_1424067d0 body=649 status=ok
// SIG undefined FUN_1424067d0(void)

longlong * FUN_1424067d0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
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
        FUN_14158ce90(param_1,*local_48 + (longlong)local_2c * 0x18);
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
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)(*param_2 + 4 + (longlong)iVar4 * 0x18);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
      lVar7 = (longlong)iVar4;
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + lVar7 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar7 * 0x18) = 0;
      *(undefined4 *)(lVar2 + lVar7 * 0x18 + 0x10) = 0xffffffff;
      FUN_14158ce90(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 142406a60 operator() body=372 status=ok
// SIG undefined operator()(void)

void <lambda_e75e50148eb1bd7b6ba3731e2edbb0ad>::operator()(void)

{
  void *_Src;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong local_res18 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  int local_20;
  
  local_res18[0] = local_res18[0] & 0xffffffff00000000;
  lVar3 = FUN_14240d6a0(0);
  pvVar6 = (void *)0x0;
  local_38 = (void *)0x0;
  local_30 = *(int *)(DAT_146af2798 + 1);
  lVar8 = (longlong)local_30;
  _Src = (void *)*DAT_146af2798;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pvVar6 = local_38;
    ::_guard_xfg_dispatch_icall_nop(local_38,_Src,lVar8 * 2);
  }
  bVar7 = false;
  if ((local_30 != 0) && (bVar7 = false, 0 < local_30 + -1)) {
    local_res18[0] = *(ulonglong *)(*(longlong *)(lVar3 + 0x50) + 0x18);
    FName::ToString(local_res18,&local_28);
    bVar7 = true;
    puVar5 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar5 = local_28;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pvVar6,puVar5);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_142406b20;
    }
  }
  bVar1 = false;
LAB_142406b20:
  if ((bVar7) && (local_28 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (bVar1) {
    lVar8 = UDeviceProfileManager::FindProfile(lVar3,&local_38,1);
    FUN_14241f1f0(lVar3);
    *(longlong *)(DAT_146af2458 + 0x50) = lVar8;
    local_res18[0] = *(ulonglong *)(lVar8 + 0x18);
    FName::ToString(local_res18,&local_28);
    uVar4 = FUN_14168db40();
    FCsvProfiler::SetDeviceProfileName(uVar4,&local_28);
    FUN_142414670(1);
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    (**(code **)(*DAT_1468b1f88 + 0x38))();
    pvVar6 = local_38;
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return;
}



// FUNCTION 142406be0 operator() body=122 status=ok
// SIG undefined operator()(void)

bool <lambda_f34bf2750abe2b63b4e62b5d67307e3c>::operator()
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  FUN_141682af0(param_3,&local_18,0);
  FUN_141682af0(param_2,&local_28,0);
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return iVar1 < 0;
}



// FUNCTION 142406c60 FUN_142406c60 body=201 status=ok
// SIG undefined FUN_142406c60(void)

void FUN_142406c60(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res10;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*(longlong *)*param_2 + 0x90))();
    local_res10 = (lVar3 - param_2[1]) + -8;
    (**(code **)(*(longlong *)*param_2 + 0xa8))();
    plVar1 = (longlong *)*param_2;
    plVar2 = *(longlong **)plVar1[1];
    if ((longlong *)((longlong *)plVar1[1])[1] < plVar2 + 1) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_res10,8);
      if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar1,&local_res10,8);
      }
    }
    else {
      local_res10 = *plVar2;
      *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 8;
    }
    (**(code **)(*(longlong *)*param_2 + 0xa8))((longlong *)*param_2,lVar3);
    FMemory::operator_delete(param_2,0x10);
  }
  return;
}



// FUNCTION 142406db0 FUN_142406db0 body=97 status=ok
// SIG undefined FUN_142406db0(void)

undefined8 * FUN_142406db0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450961f8;
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



// FUNCTION 142406e20 FUN_142406e20 body=97 status=ok
// SIG undefined FUN_142406e20(void)

undefined8 * FUN_142406e20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145096208;
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



// FUNCTION 142406e90 FUN_142406e90 body=66 status=ok
// SIG undefined FUN_142406e90(void)

longlong FUN_142406e90(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e8);
  }
  return param_1;
}



// FUNCTION 142406ee0 `scalar_deleting_destructor' body=116 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FDistanceFieldVolumeTextureAtlas::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142406f60 FUN_142406f60 body=107 status=ok
// SIG undefined FUN_142406f60(void)

undefined8 * FUN_142406f60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  *param_1 = &PTR_FUN_145094ff8;
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
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142406fd0 FUN_142406fd0 body=98 status=ok
// SIG undefined FUN_142406fd0(void)

undefined8 * FUN_142406fd0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_145094ff8;
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
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142407040 FUN_142407040 body=98 status=ok
// SIG undefined FUN_142407040(void)

undefined8 * FUN_142407040(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_145094ff8;
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
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1424070b0 FUN_1424070b0 body=98 status=ok
// SIG undefined FUN_1424070b0(void)

undefined8 * FUN_1424070b0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_145094ff8;
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
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142407120 FUN_142407120 body=205 status=ok
// SIG undefined FUN_142407120(void)

longlong FUN_142407120(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1988);
  plVar1 = *(longlong **)(param_1 + 0x1980);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x1980);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x1978);
  plVar1 = *(longlong **)(param_1 + 0x1970);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x1970);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_1404bfa80(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1990);
  }
  return param_1;
}



// FUNCTION 1424071f0 FUN_1424071f0 body=52 status=ok
// SIG undefined FUN_1424071f0(void)

undefined8 FUN_1424071f0(undefined8 param_1,ulonglong param_2)

{
  FUN_142405310();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb78);
  }
  return param_1;
}



// FUNCTION 142407230 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDemoPendingNetGame::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FURL::~FURL(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142407290 `scalar_deleting_destructor' body=197 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDeviceProfile::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0x80);
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x78);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142407360 `scalar_deleting_destructor' body=116 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDialogueSoundWaveProxy::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1424073e0 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDialogueWave::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_142404cf0(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142407440 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDistributionVectorUniformCurve::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142407490 AddConstantVector body=149 status=ok
// SIG undefined AddConstantVector(void)

void FComposableVectorDistribution::AddConstantVector(longlong param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 3);
  pfVar5 = *(float **)(param_1 + 0x10);
  if (*(byte *)(param_1 + 1) != 0) {
    bVar2 = *(byte *)(param_1 + 2);
    uVar6 = (ulonglong)*(byte *)(param_1 + 1);
    do {
      lVar4 = (ulonglong)(bVar1 != 0) + 1;
      pfVar3 = pfVar5;
      do {
        *pfVar3 = *pfVar3 + *param_2;
        pfVar3[1] = param_2[1] + pfVar3[1];
        pfVar3[2] = param_2[2] + pfVar3[2];
        pfVar3 = pfVar3 + bVar1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      pfVar5 = pfVar5 + bVar2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 142407530 FUN_142407530 body=122 status=ok
// SIG undefined FUN_142407530(void)

void FUN_142407530(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 local_38;
  undefined8 local_34;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x2a8))(param_2), cVar1 != '\0')) {
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_34 = 0;
    FUN_1424006e0(&local_38,param_2);
    AddLookupTableToLookupTable(param_1,&local_38);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1424075b0 AddLookupTableToLookupTable body=2015 status=ok
// SIG undefined AddLookupTableToLookupTable(void)

void AddLookupTableToLookupTable(char *param_1,char *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  void *pvVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  char local_res8;
  int local_res20;
  int local_f4;
  longlong local_e8;
  void *local_c0;
  int local_b8;
  longlong local_a8;
  
  bVar8 = param_1[1];
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res8 = *param_1;
  bVar9 = param_1[2];
  bVar10 = param_1[3];
  local_b8 = *(int *)(param_1 + 0x18);
  lVar21 = (longlong)local_b8;
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  pvVar31 = (void *)*plVar1;
  local_c0 = (void *)0x0;
  if (local_b8 != 0) {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8,0);
    _guard_xfg_dispatch_icall_nop(local_c0,pvVar31,lVar21 << 2);
  }
  if (fVar5 == 0.0) {
    fVar33 = 0.0;
  }
  else {
    fVar33 = 1.0 / fVar5;
  }
  if (*(float *)(param_2 + 4) == 0.0) {
    fVar34 = 0.0;
  }
  else {
    fVar34 = 1.0 / *(float *)(param_2 + 4);
  }
  fVar35 = *(float *)(param_2 + 8);
  fVar36 = fVar35;
  if (fVar6 <= fVar35) {
    fVar36 = fVar6;
  }
  uVar16 = (uint)bVar9;
  fVar35 = (float)(int)((byte)param_2[1] - 1) * fVar34 + fVar35;
  fVar33 = (float)(int)(bVar8 - 1) * fVar33 + fVar6;
  if (fVar35 <= fVar33) {
    fVar35 = fVar33;
  }
  iVar20 = (int)(float)(int)(uVar16 - bVar10);
  iVar32 = (int)(float)(int)((uint)(byte)param_2[2] - (uint)(byte)param_2[3]);
  if (local_res8 == '\x01') {
    local_res8 = *param_2;
  }
  *param_1 = local_res8;
  iVar11 = iVar20 * 2;
  param_1[1] = -0x80;
  cVar12 = (char)iVar20;
  if (local_res8 == '\x01') {
    cVar12 = '\0';
    iVar11 = iVar20;
  }
  param_1[2] = (char)iVar11;
  param_1[3] = cVar12;
  fVar33 = (fVar35 - fVar36) * 0.007874016;
  if (fVar33 <= 0.0) {
    fVar34 = 0.0;
  }
  else {
    fVar34 = 1.0 / fVar33;
  }
  *(float *)(param_1 + 4) = fVar34;
  *(float *)(param_1 + 8) = fVar36;
  iVar17 = 0;
  iVar22 = iVar11 * 0x80;
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  if (*(int *)(param_1 + 0x1c) != iVar22) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar17 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar17 + iVar22;
  if (*(int *)(param_1 + 0x1c) < iVar17 + iVar22) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar17 * 4),0,(longlong)iVar22 << 2);
  uVar24 = bVar8 - 1;
  local_a8 = (longlong)iVar11 * 4;
  local_f4 = 0;
  local_res20 = 0;
  local_e8 = 8;
  do {
    fVar35 = (float)local_f4 * fVar33 + fVar36;
    fVar34 = (fVar35 - fVar6) * fVar5;
    if (fVar34 < 0.0) {
      fVar34 = 0.0;
    }
    fVar35 = (fVar35 - *(float *)(param_2 + 8)) * *(float *)(param_2 + 4);
    uVar13 = (uint)fVar34;
    uVar28 = uVar24;
    if (uVar13 <= uVar24) {
      uVar28 = uVar13;
    }
    iVar17 = uVar28 * uVar16;
    fVar34 = fVar34 - (float)(int)fVar34;
    uVar28 = uVar24;
    if (uVar13 + 1 <= uVar24) {
      uVar28 = uVar13 + 1;
    }
    pvVar31 = (void *)((longlong)local_c0 + (longlong)(int)(uVar28 * uVar16) * 4);
    if (fVar35 < 0.0) {
      fVar35 = 0.0;
    }
    uVar28 = (byte)param_2[1] - 1;
    uVar18 = (uint)fVar35;
    uVar13 = uVar28;
    if (uVar18 <= uVar28) {
      uVar13 = uVar18;
    }
    if (uVar18 + 1 <= uVar28) {
      uVar28 = uVar18 + 1;
    }
    iVar22 = 0;
    lVar25 = 0;
    fVar35 = fVar35 - (float)(int)fVar35;
    lVar21 = *(longlong *)(param_2 + 0x10) + (longlong)(int)(uVar13 * (byte)param_2[2]) * 4;
    lVar23 = *(longlong *)(param_2 + 0x10) + (longlong)(int)(uVar28 * (byte)param_2[2]) * 4;
    if (3 < iVar20) {
      pfVar26 = (float *)((longlong)pvVar31 + 4);
      lVar27 = (longlong)local_c0 + ((longlong)iVar17 * 4 - (longlong)pvVar31);
      iVar30 = 2;
      lVar25 = (ulonglong)((iVar20 - 4U >> 2) + 1) << 2;
      lVar29 = local_e8;
      iVar19 = iVar22;
      do {
        iVar22 = iVar19 + 4;
        lVar14 = (longlong)(iVar19 % iVar32);
        *(float *)(*plVar1 + -8 + lVar29) =
             (*(float *)(lVar23 + lVar14 * 4) - *(float *)(lVar21 + lVar14 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar14 * 4) +
             (pfVar26[-1] - *(float *)(lVar27 + -4 + (longlong)pfVar26)) * fVar34 +
             *(float *)(lVar27 + -4 + (longlong)pfVar26);
        lVar14 = (longlong)((iVar30 + -1) % iVar32);
        *(float *)(*plVar1 + -4 + lVar29) =
             (*(float *)(lVar23 + lVar14 * 4) - *(float *)(lVar21 + lVar14 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar14 * 4) +
             (*pfVar26 - *(float *)(lVar27 + (longlong)pfVar26)) * fVar34 +
             *(float *)(lVar27 + (longlong)pfVar26);
        lVar14 = (longlong)(iVar30 % iVar32);
        *(float *)(*plVar1 + lVar29) =
             (*(float *)(lVar23 + lVar14 * 4) - *(float *)(lVar21 + lVar14 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar14 * 4) +
             (pfVar26[1] - *(float *)(lVar27 + 4 + (longlong)pfVar26)) * fVar34 +
             *(float *)(lVar27 + 4 + (longlong)pfVar26);
        iVar19 = iVar30 + 1;
        pfVar2 = pfVar26 + 2;
        pfVar3 = (float *)(lVar27 + 8 + (longlong)pfVar26);
        iVar30 = iVar30 + 4;
        lVar14 = (longlong)(iVar19 % iVar32);
        pfVar4 = (float *)(lVar27 + 8 + (longlong)pfVar26);
        pfVar26 = pfVar26 + 4;
        *(float *)(*plVar1 + 4 + lVar29) =
             (*(float *)(lVar23 + lVar14 * 4) - *(float *)(lVar21 + lVar14 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar14 * 4) + (*pfVar2 - *pfVar3) * fVar34 + *pfVar4;
        lVar29 = lVar29 + 0x10;
        iVar19 = iVar22;
      } while (iVar22 < iVar20 + -3);
    }
    if (iVar22 < iVar20) {
      pfVar26 = (float *)((longlong)pvVar31 + lVar25 * 4);
      lVar25 = (longlong)(local_res20 + iVar22) << 2;
      lVar29 = (longlong)local_c0 + ((longlong)iVar17 * 4 - (longlong)pvVar31);
      do {
        fVar7 = *pfVar26;
        pfVar2 = (float *)(lVar29 + (longlong)pfVar26);
        iVar30 = iVar22 + 1;
        lVar27 = (longlong)(iVar22 % iVar32);
        pfVar3 = (float *)(lVar29 + (longlong)pfVar26);
        pfVar26 = pfVar26 + 1;
        *(float *)(lVar25 + *plVar1) =
             (*(float *)(lVar23 + lVar27 * 4) - *(float *)(lVar21 + lVar27 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar27 * 4) + (fVar7 - *pfVar2) * fVar34 + *pfVar3;
        lVar25 = lVar25 + 4;
        iVar22 = iVar30;
      } while (iVar30 < iVar20);
    }
    if (local_res8 != '\x01') {
      iVar22 = 0;
      lVar25 = (ulonglong)bVar10 * 4;
      lVar29 = 0;
      pvVar31 = (void *)((longlong)pvVar31 + lVar25);
      lVar25 = lVar25 + (longlong)iVar17 * 4;
      lVar21 = lVar21 + (ulonglong)(byte)param_2[3] * 4;
      lVar23 = lVar23 + (ulonglong)(byte)param_2[3] * 4;
      if (3 < iVar20) {
        lVar14 = (longlong)local_c0 + (lVar25 - (longlong)pvVar31);
        pfVar26 = (float *)((longlong)pvVar31 + 4);
        iVar17 = 2;
        lVar27 = local_e8 + (longlong)iVar20 * 4;
        lVar29 = (ulonglong)((iVar20 - 4U >> 2) + 1) << 2;
        iVar30 = iVar22;
        do {
          iVar22 = iVar30 + 4;
          lVar15 = (longlong)(iVar30 % iVar32);
          *(float *)(*plVar1 + -8 + lVar27) =
               (*(float *)(lVar23 + lVar15 * 4) - *(float *)(lVar21 + lVar15 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar15 * 4) +
               (pfVar26[-1] - *(float *)(lVar14 + -4 + (longlong)pfVar26)) * fVar34 +
               *(float *)(lVar14 + -4 + (longlong)pfVar26);
          lVar15 = (longlong)((iVar17 + -1) % iVar32);
          *(float *)(*plVar1 + -4 + lVar27) =
               (*(float *)(lVar23 + lVar15 * 4) - *(float *)(lVar21 + lVar15 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar15 * 4) +
               (*pfVar26 - *(float *)(lVar14 + (longlong)pfVar26)) * fVar34 +
               *(float *)(lVar14 + (longlong)pfVar26);
          lVar15 = (longlong)(iVar17 % iVar32);
          *(float *)(*plVar1 + lVar27) =
               (*(float *)(lVar23 + lVar15 * 4) - *(float *)(lVar21 + lVar15 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar15 * 4) +
               (pfVar26[1] - *(float *)(lVar14 + 4 + (longlong)pfVar26)) * fVar34 +
               *(float *)(lVar14 + 4 + (longlong)pfVar26);
          iVar30 = iVar17 + 1;
          pfVar2 = pfVar26 + 2;
          pfVar3 = (float *)(lVar14 + 8 + (longlong)pfVar26);
          iVar17 = iVar17 + 4;
          lVar15 = (longlong)(iVar30 % iVar32);
          pfVar4 = (float *)(lVar14 + 8 + (longlong)pfVar26);
          pfVar26 = pfVar26 + 4;
          *(float *)(*plVar1 + 4 + lVar27) =
               (*(float *)(lVar23 + lVar15 * 4) - *(float *)(lVar21 + lVar15 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar15 * 4) + (*pfVar2 - *pfVar3) * fVar34 + *pfVar4;
          lVar27 = lVar27 + 0x10;
          iVar30 = iVar22;
        } while (iVar22 < iVar20 + -3);
      }
      if (iVar22 < iVar20) {
        pfVar26 = (float *)((longlong)pvVar31 + lVar29 * 4);
        lVar29 = (longlong)(local_res20 + iVar22 + iVar20) << 2;
        lVar25 = (longlong)local_c0 + (lVar25 - (longlong)pvVar31);
        do {
          fVar7 = *pfVar26;
          pfVar2 = (float *)((longlong)pfVar26 + lVar25);
          iVar17 = iVar22 + 1;
          lVar27 = (longlong)(iVar22 % iVar32);
          pfVar3 = (float *)((longlong)pfVar26 + lVar25);
          pfVar26 = pfVar26 + 1;
          *(float *)(lVar29 + *plVar1) =
               (*(float *)(lVar23 + lVar27 * 4) - *(float *)(lVar21 + lVar27 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar27 * 4) + (fVar7 - *pfVar2) * fVar34 + *pfVar3;
          lVar29 = lVar29 + 4;
          iVar22 = iVar17;
        } while (iVar17 < iVar20);
      }
    }
    local_e8 = local_e8 + local_a8;
    local_f4 = local_f4 + 1;
    local_res20 = local_res20 + iVar11;
  } while (local_f4 < 0x80);
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}



// FUNCTION 142407d90 FUN_142407d90 body=171 status=ok
// SIG undefined FUN_142407d90(void)

void FUN_142407d90(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_38 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x70))();
  uVar4 = FUN_1428d4fe0(local_38,param_2);
  FString::FString(&local_28,uVar4);
  iVar2 = *(int *)(param_1 + 0xa08);
  *(int *)(param_1 + 0xa08) = iVar2 + 1;
  if (*(int *)(param_1 + 0xa0c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xa00,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xa00) + (longlong)iVar2 * 0x18);
  *puVar1 = local_28;
  *(undefined4 *)(puVar1 + 1) = local_20;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_1c;
  *(undefined4 *)(puVar1 + 2) = uVar3;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142407e40 FUN_142407e40 body=265 status=ok
// SIG undefined FUN_142407e40(void)

void FUN_142407e40(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint local_res8;
  uint uStackX_c;
  
  FWeakObjectPtr::operator=(&local_res8);
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (*(int *)(lVar2 + 0x1608) != *(int *)(lVar2 + 0x1634)) {
    lVar4 = *(longlong *)(lVar2 + 0x1640);
    if (*(longlong *)(lVar2 + 0x1640) == 0) {
      lVar4 = lVar2 + 0x1638;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)(int)(uStackX_c ^ local_res8) &
                             (longlong)*(int *)(lVar2 + 0x1648) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x1600) + (longlong)iVar3 * 0x18);
        if ((*(uint *)(*(longlong *)(lVar2 + 0x1600) + (longlong)iVar3 * 0x18) == local_res8) &&
           (*(uint *)((longlong)plVar6 + 4) == uStackX_c)) {
          if (iVar3 != -1) goto LAB_142407ee9;
          break;
        }
        iVar3 = (int)plVar6[2];
      } while (iVar3 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_142407ee9:
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if ((plVar5 != (longlong *)0x0) && (*plVar5 != 0)) {
    uVar1 = *(undefined4 *)(*plVar5 + 0x70);
    iVar3 = *(int *)(param_1 + 0x8a8);
    *(int *)(param_1 + 0x8a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x8ac) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x8a0,iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x8a0) + (longlong)iVar3 * 4) = uVar1;
  }
  return;
}



// FUNCTION 142407f50 AddPoint body=286 status=ok
// SIG undefined AddPoint(void)

uint FInterpCurve<FTwoVectors>::AddPoint(longlong *param_1,float param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar3 = (int)param_1[1];
  uVar7 = 0;
  uVar9 = 0;
  if (0 < iVar3) {
    pfVar6 = (float *)*param_1;
    uVar10 = uVar7;
    do {
      uVar9 = (uint)uVar10;
      if (param_2 < *pfVar6 || param_2 == *pfVar6) break;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 0x14;
    } while ((longlong)uVar7 < (longlong)iVar3);
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar8 = (longlong)(int)uVar9 * 0x50;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar8 + 0x50),(void *)(*param_1 + lVar8),
             (longlong)(int)(iVar3 - uVar9) * 0x50);
  lVar4 = *param_1;
  uVar5 = param_3[1];
  uVar2 = param_3[2];
  puVar1 = (undefined8 *)(lVar8 + 4 + lVar4);
  *puVar1 = *param_3;
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar8 + 0x14 + lVar4) = uVar2;
  *(float *)(lVar8 + lVar4) = param_2;
  puVar1 = (undefined8 *)(lVar8 + 0x1c + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + 0x2c + lVar4) = 0;
  puVar1 = (undefined8 *)(lVar8 + 0x34 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + 0x44 + lVar4) = 0;
  *(undefined1 *)(lVar8 + 0x4c + lVar4) = 0;
  return uVar9;
}



// FUNCTION 142408070 AddPoint body=229 status=ok
// SIG undefined AddPoint(void)

uint FInterpCurve<FVector2D>::AddPoint(longlong *param_1,float param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar2 = (int)param_1[1];
  uVar5 = 0;
  uVar7 = 0;
  if (0 < iVar2) {
    pfVar4 = (float *)*param_1;
    uVar8 = uVar5;
    do {
      uVar7 = (uint)uVar8;
      if (param_2 < *pfVar4 || param_2 == *pfVar4) break;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 8;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar2);
  }
  lVar6 = (longlong)(int)uVar7 * 0x20;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar6 + 0x20),(void *)(*param_1 + lVar6),
             (longlong)(int)(iVar2 - uVar7) << 5);
  uVar1 = *param_3;
  lVar3 = *param_1;
  *(int *)(lVar6 + 8 + lVar3) = (int)((ulonglong)uVar1 >> 0x20);
  *(int *)(lVar6 + 4 + lVar3) = (int)uVar1;
  *(float *)(lVar6 + lVar3) = param_2;
  *(undefined8 *)(lVar6 + 0xc + lVar3) = 0;
  *(undefined8 *)(lVar6 + 0x14 + lVar3) = 0;
  *(undefined1 *)(lVar6 + 0x1c + lVar3) = 0;
  return uVar7;
}



// FUNCTION 142408160 FUN_142408160 body=360 status=ok
// SIG undefined FUN_142408160(void)

void FUN_142408160(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar4 = (longlong *)operator_new(0x18);
  plVar6 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
    plVar4[2] = param_2;
    plVar6 = plVar4;
  }
  plVar4 = (longlong *)(param_2 + 8);
  if (param_2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    if ((*plVar4 != 0) && (plVar4[1] != 0)) {
      piVar1 = (int *)(plVar4[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_142408257;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar4 = param_2;
    plVar5 = (longlong *)plVar4[1];
    if (plVar6 != plVar5) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar4[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar4[1] = (longlong)plVar6;
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
LAB_142408257:
  iVar3 = *(int *)(param_1 + 0x8b8);
  *(int *)(param_1 + 0x8b8) = iVar3 + 1;
  if (*(int *)(param_1 + 0x8bc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x8b0,iVar3);
  }
  plVar4 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x8b0));
  *plVar4 = param_2;
  plVar4[1] = (longlong)plVar6;
  if ((*(int *)(param_1 + 0x8b8) < 1) && (*(longlong *)(param_1 + 0x8c0) == 0)) {
    FUN_14241b8c0(param_1);
  }
  return;
}



// FUNCTION 1424082d0 FUN_1424082d0 body=23 status=ok
// SIG undefined FUN_1424082d0(void)

void FUN_1424082d0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x568) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424082df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x568) + 0x1c8))();
    return;
  }
  return;
}



// FUNCTION 1424082f0 AutoSetTangents body=1448 status=ok
// SIG undefined AutoSetTangents(void)

void FInterpCurve<FTwoVectors>::AutoSetTangents(longlong *param_1,float param_2,char param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_res20;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint local_140;
  longlong local_130;
  longlong local_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_100;
  float local_f4;
  float local_e8;
  float local_dc;
  
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  local_140 = iVar2 - 1;
  if (0 < iVar2) {
    lVar16 = 0;
    lVar13 = (longlong)(int)local_140;
    local_res20 = 1;
    local_130 = lVar13;
    local_128 = lVar5;
    do {
      uVar9 = 0;
      if (lVar16 == 0) {
        uVar4 = uVar9;
        if ((char)param_1[2] != '\0') {
          uVar4 = local_140;
        }
      }
      else {
        uVar4 = local_res20 - 2;
      }
      uVar11 = local_res20;
      if ((lVar16 == lVar13) && (uVar11 = local_140, (char)param_1[2] != '\0')) {
        uVar11 = uVar9;
      }
      lVar6 = *param_1;
      pfVar8 = (float *)(lVar16 * 0x50 + lVar6);
      pfVar7 = (float *)((longlong)(int)uVar4 * 0x50 + lVar6);
      pfVar12 = (float *)((longlong)(int)uVar11 * 0x50 + lVar6);
      cVar1 = *(char *)(pfVar8 + 0x13);
      if ((cVar1 - 1U & 0xfb) == 0) {
        if ((param_3 == '\0') ||
           ((lVar16 != 0 && ((lVar16 != lVar13 || ((char)param_1[2] != '\0')))))) {
          if ((*(char *)(pfVar7 + 0x13) == '\x01') || ((byte)(*(char *)(pfVar7 + 0x13) - 3U) < 3)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            fStack_148 = 0.0;
            fStack_144 = 0.0;
            local_158 = 0;
            fStack_150 = 0.0;
            fStack_14c = 0.0;
            if (((char)param_1[2] == '\0') || (lVar16 != 0)) {
              fVar21 = *pfVar7;
              fVar19 = *pfVar8;
            }
            else {
              fVar19 = *pfVar8;
              fVar21 = fVar19 - *(float *)((longlong)param_1 + 0x14);
            }
            if (((char)param_1[2] == '\0') || (lVar16 != lVar13)) {
              fVar20 = *pfVar12;
            }
            else {
              fVar20 = fVar19 + *(float *)((longlong)param_1 + 0x14);
            }
            pfVar10 = pfVar7 + 1;
            if (cVar1 == '\x05') {
              lVar6 = (longlong)&local_158 - (longlong)pfVar10;
              lVar15 = (longlong)(pfVar8 + 1) - (longlong)pfVar10;
              lVar14 = (longlong)(pfVar12 + 1) - (longlong)pfVar10;
              do {
                fVar17 = (float)ClampFloatTangent(*pfVar10,fVar21,
                                                  *(undefined4 *)((longlong)pfVar10 + lVar15),fVar19
                                                  ,*(undefined4 *)(lVar14 + (longlong)pfVar10),
                                                  fVar20);
                uVar9 = uVar9 + 4;
                *(float *)(lVar6 + (longlong)pfVar10) = fVar17 * (1.0 - param_2);
                pfVar10 = pfVar10 + 1;
                lVar13 = local_130;
                lVar5 = local_128;
              } while (uVar9 < 0x18);
            }
            else {
              fVar20 = fVar20 - fVar21;
              fVar19 = pfVar8[1];
              fStack_118 = 1.0 - param_2;
              fStack_114 = ((pfVar8[4] - pfVar7[4]) + (pfVar12[4] - pfVar8[4])) * fStack_118;
              fStack_110 = ((pfVar8[5] - pfVar7[5]) + (pfVar12[5] - pfVar8[5])) * fStack_118;
              fStack_10c = ((pfVar8[6] - pfVar7[6]) + (pfVar12[6] - pfVar8[6])) * fStack_118;
              local_120 = ((fVar19 - *pfVar10) + (pfVar12[1] - fVar19)) * fStack_118;
              fStack_11c = ((pfVar8[2] - pfVar7[2]) + (pfVar12[2] - pfVar8[2])) * fStack_118;
              fStack_118 = ((pfVar8[3] - pfVar7[3]) + (pfVar12[3] - pfVar8[3])) * fStack_118;
              if (fVar20 <= 0.0001) {
                fVar20 = 0.0001;
              }
              fVar20 = 1.0 / fVar20;
              local_158 = CONCAT44(fStack_11c * fVar20,fVar20 * local_120);
              fStack_150 = fStack_118 * fVar20;
              fStack_14c = fStack_114 * fVar20;
              fStack_148 = fStack_110 * fVar20;
              fStack_144 = fStack_10c * fVar20;
              local_e8 = fStack_118;
              local_dc = fStack_10c;
            }
            uVar18 = CONCAT44(fStack_144,fStack_148);
            *(undefined8 *)(pfVar8 + 7) = local_158;
            *(ulonglong *)(pfVar8 + 9) = CONCAT44(fStack_14c,fStack_150);
            *(undefined8 *)(pfVar8 + 0xb) = uVar18;
            *(undefined8 *)(pfVar8 + 0xd) = local_158;
            *(ulonglong *)(pfVar8 + 0xf) = CONCAT44(fStack_14c,fStack_150);
          }
          else {
            uVar18 = *(undefined8 *)(pfVar7 + 9);
            *(undefined8 *)(pfVar8 + 7) = *(undefined8 *)(pfVar7 + 7);
            *(undefined8 *)(pfVar8 + 9) = uVar18;
            *(undefined8 *)(pfVar8 + 0xb) = *(undefined8 *)(pfVar7 + 0xb);
            fVar19 = pfVar7[0xe];
            fVar21 = pfVar7[0xf];
            fVar20 = pfVar7[0x10];
            pfVar8[0xd] = pfVar7[0xd];
            pfVar8[0xe] = fVar19;
            pfVar8[0xf] = fVar21;
            pfVar8[0x10] = fVar20;
            uVar18 = *(undefined8 *)(pfVar7 + 0x11);
          }
          goto LAB_1424087ed;
        }
LAB_1424084f4:
        pfVar8[7] = 0.0;
        pfVar8[8] = 0.0;
        pfVar8[9] = 0.0;
        pfVar8[10] = 0.0;
        pfVar8[0xb] = 0.0;
        pfVar8[0xc] = 0.0;
        pfVar8[0xd] = 0.0;
        pfVar8[0xe] = 0.0;
        pfVar8[0xf] = 0.0;
        pfVar8[0x10] = 0.0;
        pfVar8[0x11] = 0.0;
        pfVar8[0x12] = 0.0;
      }
      else if (cVar1 == '\0') {
        fVar19 = pfVar12[1];
        local_f4 = pfVar12[6] - pfVar8[6];
        fVar21 = pfVar12[4];
        fVar20 = pfVar12[2];
        local_100 = pfVar12[3] - pfVar8[3];
        uVar18 = CONCAT44(local_f4,pfVar12[5] - pfVar8[5]);
        pfVar8[7] = fVar19 - pfVar8[1];
        pfVar8[8] = fVar20 - pfVar8[2];
        pfVar8[9] = local_100;
        pfVar8[10] = fVar21 - pfVar8[4];
        *(undefined8 *)(pfVar8 + 0xb) = uVar18;
        pfVar8[0xd] = fVar19 - pfVar8[1];
        pfVar8[0xe] = fVar20 - pfVar8[2];
        pfVar8[0xf] = local_100;
        pfVar8[0x10] = fVar21 - pfVar8[4];
LAB_1424087ed:
        *(undefined8 *)(pfVar8 + 0x11) = uVar18;
      }
      else if (cVar1 == '\x02') goto LAB_1424084f4;
      local_res20 = local_res20 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < lVar5);
  }
  return;
}



// FUNCTION 1424088a0 AutoSetTangents body=895 status=ok
// SIG undefined AutoSetTangents(void)

void FInterpCurve<FVector2D>::AutoSetTangents(longlong *param_1,float param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_res8;
  float local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  
  iVar2 = (int)param_1[1];
  lVar3 = (longlong)iVar2;
  uVar6 = iVar2 - 1;
  if (0 < iVar2) {
    lVar11 = 0;
    lVar13 = (longlong)(int)uVar6;
    local_res8 = 1;
    local_c0 = lVar13;
    local_b8 = lVar3;
    do {
      uVar10 = 0;
      if (lVar11 == 0) {
        uVar4 = uVar10;
        if ((char)param_1[2] != '\0') {
          uVar4 = uVar6;
        }
      }
      else {
        uVar4 = local_res8 - 2;
      }
      uVar7 = local_res8;
      if ((lVar11 == lVar13) && (uVar7 = uVar6, (char)param_1[2] != '\0')) {
        uVar7 = uVar10;
      }
      lVar14 = *param_1;
      pfVar9 = (float *)(lVar11 * 0x20 + lVar14);
      pfVar5 = (float *)((longlong)(int)uVar4 * 0x20 + lVar14);
      cVar1 = *(char *)(pfVar9 + 7);
      pfVar8 = (float *)((longlong)(int)uVar7 * 0x20 + lVar14);
      if ((cVar1 - 1U & 0xfb) == 0) {
        if ((param_3 == '\0') ||
           ((lVar11 != 0 && ((lVar11 != lVar13 || ((char)param_1[2] != '\0')))))) {
          if ((*(char *)(pfVar5 + 7) == '\x01') || ((byte)(*(char *)(pfVar5 + 7) - 3U) < 3)) {
            if (((char)param_1[2] == '\0') || (lVar11 != 0)) {
              fVar19 = *pfVar5;
              fVar20 = *pfVar9;
            }
            else {
              fVar20 = *pfVar9;
              fVar19 = fVar20 - *(float *)((longlong)param_1 + 0x14);
            }
            if (((char)param_1[2] == '\0') || (lVar11 != lVar13)) {
              fVar18 = *pfVar8;
            }
            else {
              fVar18 = fVar20 + *(float *)((longlong)param_1 + 0x14);
            }
            fVar21 = 1.0 - param_2;
            pfVar12 = pfVar5 + 1;
            if (cVar1 == '\x05') {
              lVar14 = (longlong)(pfVar9 + 1) - (longlong)pfVar12;
              lVar15 = (longlong)local_c8 - (longlong)pfVar12;
              lVar16 = (longlong)(pfVar8 + 1) - (longlong)pfVar12;
              do {
                fVar17 = (float)ClampFloatTangent(*pfVar12,fVar19,
                                                  *(undefined4 *)((longlong)pfVar12 + lVar14),fVar20
                                                  ,*(undefined4 *)((longlong)pfVar12 + lVar16),
                                                  fVar18);
                uVar10 = uVar10 + 4;
                *(float *)((longlong)pfVar12 + lVar15) = fVar17 * fVar21;
                pfVar12 = pfVar12 + 1;
                lVar13 = local_c0;
                lVar3 = local_b8;
              } while (uVar10 < 8);
            }
            else {
              fVar20 = pfVar9[1];
              fVar17 = fVar18 - fVar19;
              if (fVar18 - fVar19 <= 0.0001) {
                fVar17 = 0.0001;
              }
              local_c8[0] = ((pfVar8[1] - fVar20) + (fVar20 - *pfVar12)) * fVar21 * (1.0 / fVar17);
              local_c8[1] = ((pfVar9[2] - pfVar5[2]) + (pfVar8[2] - pfVar9[2])) * fVar21 *
                            (1.0 / fVar17);
            }
            pfVar9[3] = local_c8[0];
            pfVar9[4] = local_c8[1];
            pfVar9[5] = local_c8[0];
            pfVar9[6] = local_c8[1];
          }
          else {
            *(undefined8 *)(pfVar9 + 3) = *(undefined8 *)(pfVar5 + 3);
            *(undefined8 *)(pfVar9 + 5) = *(undefined8 *)(pfVar5 + 5);
          }
        }
        else {
LAB_142408a10:
          pfVar9[3] = 0.0;
          pfVar9[4] = 0.0;
          pfVar9[5] = 0.0;
          pfVar9[6] = 0.0;
        }
      }
      else if (cVar1 == '\0') {
        fVar20 = pfVar8[1];
        fVar19 = pfVar8[2];
        pfVar9[3] = fVar20 - pfVar9[1];
        pfVar9[4] = fVar19 - pfVar9[2];
        pfVar9[5] = fVar20 - pfVar9[1];
        pfVar9[6] = fVar19 - pfVar9[2];
      }
      else if (cVar1 == '\x02') goto LAB_142408a10;
      local_res8 = local_res8 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar3);
  }
  return;
}



// FUNCTION 142408c20 BlockUntilBuildComplete body=156 status=ok
// SIG undefined BlockUntilBuildComplete(void)

void FDistanceFieldAsyncQueue::BlockUntilBuildComplete(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8;
  
  bVar3 = false;
  while( true ) {
    bVar2 = false;
    lVar4 = 0;
    if ((longlong)*(int *)(param_1 + 0x20) < 1) {
      return;
    }
    do {
      if (((bVar2) ||
          (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8),
          *(longlong *)(lVar1 + 0x10) == param_2)) || (*(longlong *)(lVar1 + 0x18) == param_2)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x20));
    if (!bVar2) break;
    if (!bVar3) {
      QueryPerformanceCounter(&local_res8);
    }
    bVar3 = true;
    FUN_1416b1760(0x3c23d70a);
  }
  return;
}



// FUNCTION 142408cc0 BuildConstantLookupTable body=298 status=ok
// SIG undefined BuildConstantLookupTable(void)

void BuildConstantLookupTable(undefined2 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar2 = 0;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0xe) != param_2) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,param_2);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = iVar2 + param_2;
  if (*(int *)(param_1 + 0xe) < iVar2 + param_2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 8);
  }
  *param_1 = 0x101;
  *(char *)(param_1 + 1) = (char)param_2;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  if (3 < param_2) {
    uVar1 = (param_2 - 4U >> 2) + 1;
    uVar5 = (ulonglong)uVar1;
    iVar6 = uVar1 * 4;
    puVar4 = (undefined4 *)(param_3 + 8);
    do {
      *(undefined4 *)((longlong)puVar4 + *(longlong *)(param_1 + 8) + -param_3 + -8) = puVar4[-2];
      *(undefined4 *)((longlong)puVar4 + *(longlong *)(param_1 + 8) + -param_3 + -4) = puVar4[-1];
      *(undefined4 *)((longlong)puVar4 + (*(longlong *)(param_1 + 8) - param_3)) = *puVar4;
      *(undefined4 *)((longlong)puVar4 + *(longlong *)(param_1 + 8) + (4 - param_3)) = puVar4[1];
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar5 != 0);
  }
  if (iVar6 < param_2) {
    uVar5 = (ulonglong)(uint)(param_2 - iVar6);
    lVar3 = (longlong)iVar6 * 4;
    do {
      *(undefined4 *)(lVar3 + *(longlong *)(param_1 + 8)) = *(undefined4 *)(lVar3 + param_3);
      uVar5 = uVar5 - 1;
      lVar3 = lVar3 + 4;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 142408e00 FUN_142408e00 body=109 status=ok
// SIG undefined FUN_142408e00(void)

void FUN_142408e00(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_2 + 8) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0xfffffffffffffffe;
    return;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x568) + 0x38))();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// FUNCTION 142408e70 FUN_142408e70 body=292 status=ok
// SIG undefined FUN_142408e70(void)

void FUN_142408e70(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 8) != 0) {
      cVar1 = FWeakObjectPtr::IsValid();
      if (cVar1 != '\0') {
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
        *(undefined4 *)(lVar2 + 0x548) = *(undefined4 *)(param_1 + 0x20);
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
        if ((*(int *)(lVar2 + 0x8e8) != 0) && (*(longlong **)(lVar2 + 0x8e0) != (longlong *)0x0)) {
          cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x8e0) + 0x18))();
          if (cVar1 != '\0') {
            if (*(int *)(lVar2 + 0x8e8) == 0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              plVar4 = *(longlong **)(lVar2 + 0x8e0);
            }
            (**(code **)(*plVar4 + 0x40))(plVar4,0);
          }
        }
        if ((*(int *)(lVar2 + 0x8e8) != 0) &&
           (plVar4 = *(longlong **)(lVar2 + 0x8e0), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*(longlong *)(lVar2 + 0x8e0) != 0) {
            uVar3 = FMemory::Realloc(*(longlong *)(lVar2 + 0x8e0),0,0);
            *(undefined8 *)(lVar2 + 0x8e0) = uVar3;
          }
          *(undefined4 *)(lVar2 + 0x8e8) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0xfffffffffffffffe;
      return;
    }
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x568) + 0x38))();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// FUNCTION 142408fa0 FUN_142408fa0 body=850 status=ok
// SIG undefined FUN_142408fa0(void)

void FUN_142408fa0(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
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
  
  local_res10 = *(undefined8 *)(param_1 + 0xd0);
  plVar2 = (longlong *)(param_1 + 0xa18);
  uVar5 = *(uint *)(param_1 + 0xa40);
  puVar4 = (uint *)(param_1 + 0xa28);
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar5 != 0) {
    puVar17 = *(uint **)(param_1 + 0xa38);
    if (*(uint **)(param_1 + 0xa38) == (uint *)0x0) {
      puVar17 = puVar4;
    }
    uVar6 = *puVar17;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar6 == 0) {
      lVar13 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar15 = local_a8 + 1;
      bVar8 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar15;
      if (bVar8) goto LAB_14240907b;
      uVar6 = puVar17[lVar13 + 1];
    }
    uStack_a4 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar15 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_94 = (iStack_90 - iVar15) + 0x1f;
    if ((int)uVar5 < (int)uStack_94) {
LAB_14240907b:
      uStack_94 = uVar5;
    }
  }
  uVar6 = *(uint *)(param_1 + 0xa40);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar16 = uVar6 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar4;
  local_60 = plVar2;
  puStack_50 = puVar4;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar6;
  if (uVar6 != uVar5) {
    puVar17 = *(uint **)(param_1 + 0xa38);
    if (*(uint **)(param_1 + 0xa38) == (uint *)0x0) {
      puVar17 = puVar4;
    }
    uVar12 = puVar17[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
    iVar15 = (int)uVar6 >> 5;
    while (uVar12 == 0) {
      uVar16 = uVar16 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
      goto LAB_142409155;
      uVar12 = puVar17[(longlong)iVar15 + 1];
      iVar15 = iVar15 + 1;
    }
    uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar15 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_94 = (uVar16 - iVar15) + 0x1f;
    if ((int)uVar5 < (int)uStack_94) {
LAB_142409155:
      uStack_94 = uVar5;
    }
  }
  do {
    if ((uStack_6c == uStack_94) && (local_78 == puVar4)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(plVar2,0);
      return;
    }
    plVar7 = *(longlong **)(param_1 + 0xe0);
    piVar3 = (int *)(*plVar2 + (longlong)(int)uStack_6c * 0xc);
    if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
      iVar15 = *piVar3;
      plVar10 = (longlong *)plVar7[8];
      if ((longlong *)plVar7[8] == (longlong *)0x0) {
        plVar10 = plVar7 + 7;
      }
      iVar9 = *(int *)((longlong)plVar10 + ((longlong)(int)plVar7[9] - 1U & (longlong)iVar15) * 4);
      if (iVar9 != -1) {
        lVar13 = *plVar7;
        do {
          lVar14 = (longlong)iVar9 * 0x40;
          if (*(int *)(lVar14 + lVar13) == iVar15) {
            if ((((iVar9 != -1) && (lVar13 = (longlong)iVar9 * 0x40 + lVar13, lVar13 != 0)) &&
                (puVar1 = (undefined4 *)(lVar13 + 8), puVar1 != (undefined4 *)0x0)) &&
               (lVar14 = FWeakObjectPtr::Get(puVar1), lVar14 != 0)) {
              lVar11 = FUN_1428dfc70();
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (bVar8) {
                FUN_142543860(local_res10,lVar14,0,1);
                local_resc = *(undefined4 *)(lVar13 + 0xc);
                local_res8 = *puVar1;
                TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                ::Remove(*(longlong *)(param_1 + 0xe0) + 0x50,&local_res8);
                TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
                ::Remove(*(undefined8 *)(param_1 + 0xe0),piVar3);
                *(byte *)(lVar13 + 0x30) = *(byte *)(lVar13 + 0x30) & 0xfe;
              }
            }
            break;
          }
          iVar9 = *(int *)(lVar14 + 0x38 + lVar13);
        } while (iVar9 != -1);
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  } while( true );
}



// FUNCTION 142409300 FUN_142409300 body=200 status=ok
// SIG undefined FUN_142409300(void)

void FUN_142409300(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa68);
  for (iVar2 = *(int *)(param_1 + 0xa70); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 3;
  }
  *(undefined4 *)(param_1 + 0xa70) = 0;
  if (*(int *)(param_1 + 0xa74) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xa68,0);
  }
  TSet<TTuple<FString,AHomeCharacter_*>,TDefaultMapHashableKeyFuncs<FString,AHomeCharacter_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xa78,0);
  *(undefined4 *)(param_1 + 0xad0) = 0;
  if (*(int *)(param_1 + 0xad4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xac8,0);
  }
  TSet<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xae8,0);
  *(undefined4 *)(param_1 + 0xb40) = 0;
  if (*(int *)(param_1 + 0xb44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb38,0);
  }
  *(undefined4 *)(param_1 + 0xb48) = 0;
  return;
}



// FUNCTION 1424093d0 FUN_1424093d0 body=38 status=ok
// SIG undefined FUN_1424093d0(void)

undefined1 FUN_1424093d0(longlong param_1)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x58) + 0x540) < 3) {
    cVar1 = FUN_1425b6610();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142409400 FUN_142409400 body=165 status=ok
// SIG undefined FUN_142409400(void)

undefined8 FUN_142409400(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (((0 < *(int *)(param_1 + 0xa0)) && (**(longlong **)(param_1 + 0x98) != 0)) &&
     (*(int *)(**(longlong **)(param_1 + 0x98) + 300) != 1)) {
    lVar4 = *param_2;
    lVar1 = lVar4 + (longlong)(int)param_2[1] * 0x28;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
      lVar3 = FWeakObjectPtr::Get(lVar4);
      if ((lVar3 == 0) ||
         (cVar2 = FUN_14271c280(*(undefined8 *)(lVar4 + 8),0,lVar3,*(undefined8 *)(lVar4 + 0x18),2),
         cVar2 != '\0')) {
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  return 0;
}



// FUNCTION 1424094b0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
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



// FUNCTION 142409560 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
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
      TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142409610 FUN_142409610 body=315 status=ok
// SIG undefined FUN_142409610(void)

undefined8 * FUN_142409610(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if ((((*(int *)(param_1 + 0xa0) < 1) || (**(longlong **)(param_1 + 0x98) == 0)) ||
      (*(int *)(**(longlong **)(param_1 + 0x98) + 300) == 1)) ||
     (*(char *)(param_1 + 0xae0) == '\0')) {
    *param_2 = 0;
  }
  else {
    lVar3 = UObjectBaseUtility::GetOutermost(param_3);
    local_res8 = *(undefined8 *)(lVar3 + 0x18);
    FName::ToString(&local_res8,local_28);
    FUN_1428d4fe0(local_18,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    lVar3 = FUN_14240d2f0(param_1,local_18);
    iVar1 = *(int *)(lVar3 + 0x10);
    plVar2 = (longlong *)**(longlong **)(param_1 + 0x98);
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      *plVar4 = (longlong)plVar2;
      lVar3 = plVar2[0x2fd];
      *(int *)(plVar4 + 2) = iVar1 + 1;
      lVar5 = 0x1980;
      if ((char)lVar3 == '\0') {
        lVar5 = 0x1970;
      }
      plVar4[1] = lVar5 + (longlong)plVar2;
      (**(code **)(*plVar2 + 0x2c8))(plVar2,0);
      *(undefined4 *)((longlong)plVar4 + 0x14) = *(undefined4 *)(plVar4[1] + 8);
    }
    *param_2 = plVar4;
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142409750 FUN_142409750 body=246 status=ok
// SIG undefined FUN_142409750(void)

void FUN_142409750(undefined4 param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28 [4];
  
  lVar1 = DAT_146af2760;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_14240979f;
    }
  }
  lVar5 = 0;
LAB_14240979f:
  if (*(int *)(lVar5 + lVar1) != 0) {
    uVar6 = FEngineVersion::Current();
    uVar4 = FEngineVersionBase::GetChangelist(uVar6);
    FString::PrintfImpl(local_28,L"Current CL: %lu | Recorded CL: %lu | Time: %f",uVar4,param_1,
                        (double)param_2);
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142409850 FUN_142409850 body=224 status=ok
// SIG undefined FUN_142409850(void)

undefined8 FUN_142409850(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (0 < *(int *)(param_1 + 0xa0)) {
    plVar1 = *(longlong **)(param_1 + 0x98);
    if (((*plVar1 != 0) && (*(int *)(*plVar1 + 300) != 1)) && (*(char *)(param_1 + 0x9f9) != '\0'))
    {
      *(int *)(param_1 + 0x558) = *(int *)(param_1 + 0x558) + 1;
      *(undefined1 *)(param_1 + 0x9f9) = 0;
      if (*(longlong *)(param_1 + 0x560) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x560) + 0x508) = 0;
        FUN_142543860(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x560),1);
        plVar1 = *(longlong **)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x560) = 0;
      }
      FUN_142422c50(param_1,*plVar1,param_2);
      *(double *)(param_1 + 0x748) = (double)-*DAT_146af2640;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142409930 FUN_142409930 body=58 status=ok
// SIG undefined FUN_142409930(void)

void FUN_142409930(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1450989c8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145098a10;
  }
  return;
}



// FUNCTION 142409970 FUN_142409970 body=58 status=ok
// SIG undefined FUN_142409970(void)

void FUN_142409970(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145098a58;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145098aa0;
  }
  return;
}



// FUNCTION 1424099b0 CreateCopy body=91 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,AFlarePlayerController,TTypeWrapper<void>___cdecl(void),enum_EFlareCombatTactic::Type>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145098928;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_145098970;
  }
  return;
}



// FUNCTION 142409a40 CreateNewKey body=115 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UDistributionFloatConstantCurve::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  local_res8[0] = FInterpCurve<float>::Eval(param_1 + 0x10,param_2,local_res8);
  uVar1 = FInterpCurve<float>::AddPoint(param_1 + 0x10,param_2,local_res8);
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return uVar1;
}



// FUNCTION 142409ac0 CreateNewKey body=111 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UDistributionFloatUniformCurve::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_res8 [8];
  
  FInterpCurve<FVector2D>::Eval(param_1 + 0x10,local_res8,param_2,&DAT_1468b5d88);
  uVar1 = FInterpCurve<FVector2D>::AddPoint(param_1 + 0x10,param_2,local_res8);
  FInterpCurve<FVector2D>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return uVar1;
}



// FUNCTION 142409b30 CreateNewKey body=111 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UDistributionVectorConstantCurve::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [32];
  
  FInterpCurve<FVector>::Eval(param_1 + 0x10,local_28,param_2,&DAT_1468b5d90);
  uVar1 = FInterpCurve<FVector>::AddPoint(param_1 + 0x10,param_2,local_28);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return uVar1;
}



// FUNCTION 142409ba0 CreateNewKey body=122 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UDistributionVectorUniformCurve::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [40];
  
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FInterpCurve<FTwoVectors>::Eval(param_1 + 0x10,local_30,param_2,&local_48);
  uVar1 = FInterpCurve<FTwoVectors>::AddPoint(param_1 + 0x10,param_2,local_30);
  FInterpCurve<FTwoVectors>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return uVar1;
}



// FUNCTION 142409c20 CreateProfile body=1047 status=ok
// SIG undefined CreateProfile(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UDeviceProfileManager::CreateProfile
                   (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                   short *param_5)

{
  void *_Src;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined2 **ppuVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined1 auStack_218 [32];
  short *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined2 *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined2 *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined2 *local_190;
  int local_188;
  undefined1 local_178 [288];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  puVar17 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  local_1a0 = param_3;
  local_198 = param_1;
  uVar4 = GetTransientPackage();
  uVar5 = UDeviceProfile::GetPrivateStaticClass();
  lVar6 = FUN_141799410(uVar5,uVar4,puVar10,0);
  if (lVar6 == 0) {
    FConfigFile::FConfigFile(local_178);
    local_1f8 = (short *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    FConfigCacheIni::LoadLocalIniFile(local_178,L"DeviceProfiles",1,param_5);
    local_1c0 = *(int *)(param_4 + 1);
    lVar6 = (longlong)local_1c0;
    uVar15 = 0;
    _Src = (void *)*param_4;
    local_1c8 = (undefined2 *)0x0;
    if (local_1c0 == 0) {
      local_1bc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_1c0,0);
      ::_guard_xfg_dispatch_icall_nop(local_1c8,_Src,lVar6 * 2);
    }
    if ((local_1c0 == 0) || (local_1c0 == 1)) {
      lVar6 = UDeviceProfile::GetPrivateStaticClass();
      local_1b8 = *(undefined8 *)(lVar6 + 0x18);
      FName::ToString(&local_1b8,&local_1b0);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_1a8 != 0) {
        puVar10 = local_1b0;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*param_2;
      }
      FString::PrintfImpl(&local_190,L"%s %s",puVar16,puVar10);
      if (local_1b0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar10 = &DAT_143f3eda8;
      if (local_188 != 0) {
        puVar10 = local_190;
      }
      FConfigFile::GetString(local_178,puVar10,L"BaseProfileName",&local_1c8);
      if (local_190 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    uVar7 = uVar15;
    if ((local_1c0 != 0) && (0 < local_1c0 + -1)) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*param_2;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(local_1c8,puVar10);
      uVar7 = 0;
      if (iVar1 != 0) {
        puVar10 = &DAT_143f3eda8;
        if (local_1c0 != 0) {
          puVar10 = local_1c8;
        }
        uVar4 = GetTransientPackage();
        uVar5 = UDeviceProfile::GetPrivateStaticClass();
        uVar7 = FUN_141799410(uVar5,uVar4,puVar10,0);
        if (uVar7 == 0) {
          FUN_142423560(param_2,&local_1c8,local_178);
          local_1b0 = (undefined2 *)0x0;
          local_1a8 = 0;
          local_1f8 = param_5;
          uVar7 = CreateProfile(local_198,&local_1c8,local_1a0,&local_1b0);
          if (local_1b0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar17 = (undefined2 *)*param_2;
    }
    plVar8 = (longlong *)FName::FName(&local_1b0,puVar17,1);
    lVar6 = *plVar8;
    uVar4 = GetTransientPackage();
    local_1b8 = 0;
    if (lVar6 == 0) {
      FUN_1417846f0(uVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar5 = UDeviceProfile::GetPrivateStaticClass();
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = 0;
    local_1f0 = 0;
    local_1f8 = (short *)((ulonglong)local_1f8 & 0xffffffff00000000);
    lVar6 = FUN_1417985e0(uVar5,uVar4,lVar6,0);
    if (param_5 != (short *)0x0) {
      if (*(short **)(lVar6 + 0x68) != param_5) {
        uVar14 = uVar15;
        if (*param_5 != 0) {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (param_5[lVar13] != 0);
          uVar14 = (ulonglong)((int)lVar13 + 1);
        }
        *(undefined4 *)(lVar6 + 0x70) = 0;
        iVar1 = (int)uVar14;
        uVar11 = uVar15;
        if (*(int *)(lVar6 + 0x74) != iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar6 + 0x68,uVar14);
          uVar11 = (ulonglong)*(uint *)(lVar6 + 0x70);
        }
        iVar2 = iVar1 + (int)uVar11;
        *(int *)(lVar6 + 0x70) = iVar2;
        if (*(int *)(lVar6 + 0x74) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar6 + 0x68);
        }
        if (iVar1 != 0) {
          ::_guard_xfg_dispatch_icall_nop(*(void **)(lVar6 + 0x68),param_5,(longlong)iVar1 * 2);
        }
      }
      local_1f8 = (short *)0x0;
      FUN_14175be70(lVar6,0,0,0);
      FUN_142427640(lVar6);
    }
    if (*(int *)(lVar6 + 0x40) < 2) {
      FString::operator=(lVar6 + 0x38,local_1a0);
    }
    if ((*(int *)(lVar6 + 0x50) == 0) ||
       (ppuVar12 = (undefined2 **)(lVar6 + 0x48), *(int *)(lVar6 + 0x50) + -1 < 1)) {
      ppuVar12 = &local_1c8;
    }
    FString::operator=((undefined2 **)(lVar6 + 0x48),ppuVar12);
    lVar13 = local_198;
    iVar1 = *(int *)(lVar6 + 0xc);
    *(ulonglong *)(lVar6 + 0x58) = uVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar9;
      uVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
    }
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) | 0x40000000;
    iVar1 = *(int *)(local_198 + 0x30);
    *(int *)(local_198 + 0x30) = iVar1 + 1;
    if (*(int *)(local_198 + 0x34) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_198 + 0x28,iVar1);
    }
    *(longlong *)(*(longlong *)(lVar13 + 0x28) + (longlong)iVar1 * 8) = lVar6;
    TBaseMulticastDelegate<void>::Broadcast(lVar13 + 0x38);
    if (local_1c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FConfigFile::~FConfigFile(local_178);
  }
  return lVar6;
}



// FUNCTION 14240a040 FUN_14240a040 body=461 status=ok
// SIG undefined FUN_14240a040(void)

longlong * FUN_14240a040(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  lVar4 = operator_new(0x368);
  puVar9 = (undefined8 *)0x0;
  puVar5 = puVar9;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FObjectReplicator::FObjectReplicator(lVar4);
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  puVar7 = puVar9;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_DestroyObject_145098af8;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar5;
    puVar7 = puVar6;
  }
  *param_2 = (longlong)puVar5;
  param_2[1] = (longlong)puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (param_3 != (undefined8 *)0x0) {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar9 = param_3;
    }
  }
  if ((((lVar4 == 0) || (*(char *)(lVar4 + 0x89c) == '\0')) || (puVar9 == (undefined8 *)0x0)) ||
     (cVar3 = UAbilityTask::IsWaitingOnRemotePlayerdata(puVar9), cVar3 == '\0')) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  FUN_1423f1670(*param_2,param_3,param_1,bVar10 ^ 1);
  if (((bVar10 != 0) && (lVar4 = *param_2, *(longlong *)(lVar4 + 0x2b0) != 0)) &&
     (plVar1 = (longlong *)param_3[2], plVar1 != (longlong *)0x0)) {
    lVar8 = plVar1[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar8 = plVar1[0x1f];
      lVar4 = *param_2;
    }
    FUN_14271c320(*(undefined8 *)(lVar4 + 0x2b0),0,param_3,lVar8,1);
    if ((puVar9 != (undefined8 *)0x0) && (*(char *)(puVar9 + 0x25) == '\x03')) {
      FUN_14223f9d0(puVar9);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if ((((plVar1 != (longlong *)0x0) && (puVar9 != (undefined8 *)0x0)) &&
      (*(char *)((longlong)puVar9 + 0x129) == '\x04')) &&
     ((cVar3 = UAbilityTask::IsWaitingOnRemotePlayerdata(puVar9), cVar3 != '\0' &&
      ((*(byte *)((longlong)puVar9 + 0x91) & 4) == 0)))) {
    (**(code **)(*plVar1 + 0x410))(plVar1,puVar9);
  }
  return param_2;
}



// FUNCTION 14240a210 DeleteKey body=119 status=ok
// SIG undefined DeleteKey(void)

void UDistributionFloatConstantCurve::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = (iVar2 - param_2) + -1;
  if (iVar1 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 0x14),
               (void *)(*(longlong *)(param_1 + 0x10) + (longlong)(param_2 + 1) * 0x14),
               (longlong)iVar1 * 0x14);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 14240a290 DeleteKey body=115 status=ok
// SIG undefined DeleteKey(void)

void UDistributionFloatUniformCurve::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = (iVar2 - param_2) + -1;
  if (iVar1 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x10)),
               (void *)((longlong)(param_2 + 1) * 0x20 + *(longlong *)(param_1 + 0x10)),
               (longlong)iVar1 << 5);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  FInterpCurve<FVector2D>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 14240a310 DeleteKey body=111 status=ok
// SIG undefined DeleteKey(void)

void UDistributionVectorConstantCurve::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = (iVar2 - param_2) + -1;
  if (iVar1 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_2 * 0x2c + *(longlong *)(param_1 + 0x10)),
               (void *)((longlong)(param_2 + 1) * 0x2c + *(longlong *)(param_1 + 0x10)),
               (longlong)iVar1 * 0x2c);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 14240a380 DeleteKey body=123 status=ok
// SIG undefined DeleteKey(void)

void UDistributionVectorUniformCurve::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = (iVar2 - param_2) + -1;
  if (iVar1 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x10)),
               (void *)((longlong)(param_2 + 1) * 0x50 + *(longlong *)(param_1 + 0x10)),
               (longlong)iVar1 * 0x50);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  FInterpCurve<FTwoVectors>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 14240a400 FUN_14240a400 body=521 status=ok
// SIG undefined FUN_14240a400(void)

ulonglong FUN_14240a400(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  uint local_res10;
  uint uStackX_14;
  undefined1 local_28 [16];
  
  if ((*(char *)(param_2 + 0x129) == '\x04') &&
     (uVar6 = UAbilityTask::IsWaitingOnRemotePlayerdata(param_2), (char)uVar6 != '\0')) {
    return uVar6 & 0xffffffffffffff00;
  }
  bVar11 = false;
  FUN_1423e5be0(local_28,param_2);
  if ((*(char *)(param_2 + 0x95) == '\0') && ((*(byte *)(param_2 + 0x90) & 0x20) == 0))
  goto LAB_14240a5ef;
  if (param_2 != param_3[6]) {
    lVar7 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14240a5ef;
  }
  if ((((*(byte *)(param_2 + 0x91) & 2) == 0) || ((*(byte *)(param_2 + 0x90) & 0x20) != 0)) ||
     ((cVar4 = UAbilityTask::IsWaitingOnRemotePlayerdata(param_2), cVar4 != '\0' &&
      (cVar4 = (**(code **)(*param_3 + 0x348))(param_3,param_2), cVar4 == '\0')))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FWeakObjectPtr::operator=(&local_res10,param_2);
  plVar9 = (longlong *)0x0;
  if ((int)param_3[0x2c1] != *(int *)((longlong)param_3 + 0x1634)) {
    plVar8 = (longlong *)param_3[0x2c8];
    if ((longlong *)param_3[0x2c8] == (longlong *)0x0) {
      plVar8 = param_3 + 0x2c7;
    }
    iVar5 = *(int *)((longlong)plVar8 +
                    ((longlong)(int)(uStackX_14 ^ local_res10) & (longlong)(int)param_3[0x2c9] - 1U)
                    * 4);
    if (iVar5 != -1) {
      lVar7 = param_3[0x2c0];
      do {
        lVar10 = (longlong)iVar5;
        lVar1 = lVar7 + lVar10 * 0x18;
        if ((*(uint *)(lVar7 + lVar10 * 0x18) == local_res10) &&
           (*(uint *)(lVar1 + 4) == uStackX_14)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          plVar9 = (longlong *)0x0;
          if ((iVar5 != -1) && (lVar7 = lVar7 + lVar10 * 0x18, lVar7 != 0)) {
            plVar9 = *(longlong **)(lVar7 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  if (bVar2) {
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)FUN_1425b9f20(param_3,2,1,0xffffffff);
      if (plVar9 == (longlong *)0x0) goto LAB_14240a5ef;
      FUN_1423fcda0(plVar9,param_2);
      goto LAB_14240a5b1;
    }
  }
  else {
LAB_14240a5b1:
    if (plVar9 == (longlong *)0x0) goto LAB_14240a5ef;
  }
  if ((*(byte *)(plVar9 + 6) & 2) == 0) {
    lVar7 = FUN_1423f9930(plVar9);
    bVar11 = 0 < lVar7;
    if ((!bVar2) && ((char)param_3[0x2fd] == '\0')) {
      (**(code **)(*plVar9 + 0x288))(plVar9);
    }
  }
LAB_14240a5ef:
  FUN_1423e62c0(local_28);
  return (ulonglong)bVar11;
}



// FUNCTION 14240a610 FUN_14240a610 body=106 status=ok
// SIG undefined FUN_14240a610(void)

void FUN_14240a610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (((plVar1 != (longlong *)0x0) && (param_2 != 0)) && (*(char *)(param_2 + 0x129) == '\x04')) {
    cVar2 = UAbilityTask::IsWaitingOnRemotePlayerdata(param_2);
    if ((cVar2 != '\0') && ((*(byte *)(param_2 + 0x91) & 4) == 0)) {
      (**(code **)(*plVar1 + 0x410))(plVar1,param_2);
    }
  }
  FUN_1425bbac0(param_1,param_2);
  return;
}



// FUNCTION 14240a680 FUN_14240a680 body=9 status=ok
// SIG undefined FUN_14240a680(void)

void FUN_14240a680(longlong param_1)

{
  FUN_1423e6020(param_1 + 0x10);
  return;
}



// FUNCTION 14240a690 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FObjectReplicator,SharedPointerInternals::DefaultDeleter<FObjectReplicator>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1423e6020(lVar1);
    FMemory::operator_delete(lVar1,0x368);
    return;
  }
  return;
}



// FUNCTION 14240a6c0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FRepState,SharedPointerInternals::DefaultDeleter<FRepState>_>::
     DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14271eb50(lVar1);
    FMemory::operator_delete(lVar1,0x510);
    return;
  }
  return;
}



// FUNCTION 14240a6f0 FUN_14240a6f0 body=249 status=ok
// SIG undefined FUN_14240a6f0(void)

void FUN_14240a6f0(LARGE_INTEGER *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  undefined4 local_28;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  local_res8[0] = (LARGE_INTEGER)param_1->QuadPart;
  FUN_142416790(&PTR_PTR_146532040);
  TArray<FName,FDefaultAllocator>::Remove(&DAT_146532118,local_res8);
  plVar2 = DAT_146532128;
  do {
    if (plVar2 == DAT_146532128 + DAT_146532130) {
LAB_14240a7c7:
      QueryPerformanceCounter(local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
      return;
    }
    if ((longlong *)*plVar2 == (longlong *)local_res8[0].QuadPart) {
      uVar1 = *(undefined8 *)(*(longlong *)local_res8[0] + 0x18);
      local_28 = (undefined4)uVar1;
      FTextureLayout3d::RemoveElement
                (&DAT_146532080,*(ulonglong *)(local_res8[0].QuadPart + 8) & 0xffffffff,
                 *(ulonglong *)(local_res8[0].QuadPart + 8) >> 0x20,
                 *(undefined4 *)(local_res8[0].QuadPart + 0x10),local_28,
                 (int)((ulonglong)uVar1 >> 0x20),*(undefined4 *)(*(longlong *)local_res8[0] + 0x20))
      ;
      TArray<FName,FDefaultAllocator>::Remove(&DAT_146532128,local_res8);
      goto LAB_14240a7c7;
    }
    plVar2 = plVar2 + 1;
  } while( true );
}



// FUNCTION 14240a7f0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
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



// FUNCTION 14240a870 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
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



// FUNCTION 14240a930 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
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



// FUNCTION 14240a9b0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
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



// FUNCTION 14240aa70 Empty body=229 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  if ((uint)param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (uint)(param_2 >> 1) & 0x7fffffff;
    uVar1 = uVar2 + 8;
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar1 != 0) {
      iVar7 = 0x1f - iVar3;
    }
    uVar2 = uVar2 + 7;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar3) & 0x1f);
    }
  }
  if ((0 < (int)(uint)param_2) &&
     (((iVar7 = *(int *)(param_1 + 0x48), iVar7 == 0 || (iVar7 < iVar3)) || (iVar3 < iVar7)))) {
    *(int *)(param_1 + 0x48) = iVar3;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
    return;
  }
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar6 = 0;
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      uVar4 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar6;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar5 + uVar4 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 14240ab60 Empty body=229 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  FUN_1404af4a0();
  if ((uint)param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (uint)(param_2 >> 1) & 0x7fffffff;
    uVar1 = uVar2 + 8;
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar1 != 0) {
      iVar7 = 0x1f - iVar3;
    }
    uVar2 = uVar2 + 7;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar3) & 0x1f);
    }
  }
  if ((0 < (int)(uint)param_2) &&
     (((iVar7 = *(int *)(param_1 + 0x48), iVar7 == 0 || (iVar7 < iVar3)) || (iVar3 < iVar7)))) {
    *(int *)(param_1 + 0x48) = iVar3;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    return;
  }
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar6 = 0;
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      uVar4 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar6;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar5 + uVar4 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 14240ac50 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
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
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
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



// FUNCTION 14240ad10 Empty body=236 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 14240ae00 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_14240aed1;
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
LAB_14240aed1:
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
      TIndirectArray<FReplayExternalData,FDefaultAllocator>::
      ~TIndirectArray<FReplayExternalData,FDefaultAllocator>
                ((longlong)iStack_1c * 0x20 + 8 + *param_1);
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



// FUNCTION 14240af90 Eval body=1289 status=ok
// SIG undefined Eval(void)

undefined8 *
FInterpCurve<FTwoVectors>::Eval
          (undefined8 *param_1,undefined8 *param_2,float param_3,undefined8 *param_4)

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
  undefined8 uVar15;
  float *pfVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  float *pfVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  iVar20 = *(int *)(param_1 + 1);
  uVar24 = (ulonglong)iVar20;
  uVar23 = iVar20 - 1;
  if (iVar20 == 0) {
    uVar17 = param_4[1];
    uVar15 = param_4[2];
    *param_2 = *param_4;
    param_2[1] = uVar17;
    param_2[2] = uVar15;
    return param_2;
  }
  pfVar16 = (float *)*param_1;
  uVar25 = iVar20 - 1;
  if (*pfVar16 <= param_3) {
    lVar21 = uVar24 - 1;
    if (param_3 < pfVar16[lVar21 * 0x14]) {
      uVar25 = 0;
      while (1 < iVar20) {
        uVar19 = (int)((int)uVar24 + uVar25) / 2;
        uVar24 = uVar24 & 0xffffffff;
        if (param_3 < pfVar16[(longlong)(int)uVar19 * 0x14]) {
          uVar24 = (ulonglong)uVar19;
          uVar19 = uVar25;
        }
        uVar25 = uVar19;
        iVar20 = (int)uVar24 - uVar19;
      }
    }
    if (uVar25 != 0xffffffff) {
      if (uVar25 == uVar23) {
        if (*(char *)(param_1 + 2) == '\0') {
          uVar17 = *(undefined8 *)(pfVar16 + lVar21 * 0x14 + 1 + 2);
          uVar15 = *(undefined8 *)(pfVar16 + lVar21 * 0x14 + 5);
          *param_2 = *(undefined8 *)(pfVar16 + lVar21 * 0x14 + 1);
          param_2[1] = uVar17;
          param_2[2] = uVar15;
          return param_2;
        }
        if (*(float *)((longlong)param_1 + 0x14) + pfVar16[lVar21 * 0x14] <= param_3)
        goto LAB_14240b47c;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (uVar25 != uVar23)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      lVar21 = (longlong)(int)uVar25;
      iVar20 = 0;
      if (!bVar18) {
        iVar20 = uVar25 + 1;
      }
      pfVar22 = pfVar16 + (longlong)iVar20 * 0x14;
      if (bVar18) {
        fVar32 = *(float *)((longlong)param_1 + 0x14);
      }
      else {
        fVar32 = *pfVar22 - pfVar16[lVar21 * 0x14];
      }
      if ((0.0 < fVar32) && (*(char *)(pfVar16 + lVar21 * 0x14 + 0x13) != '\x02')) {
        fVar31 = (param_3 - pfVar16[lVar21 * 0x14]) / fVar32;
        if (*(char *)(pfVar16 + lVar21 * 0x14 + 0x13) == '\0') {
          fVar32 = pfVar22[6];
          fVar1 = pfVar16[lVar21 * 0x14 + 6];
          fVar2 = pfVar22[4];
          fVar3 = pfVar16[lVar21 * 0x14 + 4];
          fVar4 = pfVar22[5];
          fVar26 = pfVar16[lVar21 * 0x14 + 5];
          fVar29 = pfVar16[lVar21 * 0x14 + 6];
          fVar5 = pfVar16[lVar21 * 0x14 + 4];
          fVar6 = pfVar22[3];
          fVar7 = pfVar16[lVar21 * 0x14 + 3];
          fVar8 = pfVar16[lVar21 * 0x14 + 5];
          fVar9 = pfVar16[lVar21 * 0x14 + 3];
          *param_2 = CONCAT44((pfVar22[2] - pfVar16[lVar21 * 0x14 + 2]) * fVar31 +
                              pfVar16[lVar21 * 0x14 + 2],
                              (pfVar22[1] - pfVar16[lVar21 * 0x14 + 1]) * fVar31 +
                              pfVar16[lVar21 * 0x14 + 1]);
          *(float *)(param_2 + 1) = (fVar6 - fVar7) * fVar31 + fVar9;
          *(ulonglong *)((longlong)param_2 + 0xc) =
               CONCAT44((fVar4 - fVar26) * fVar31 + fVar8,(fVar2 - fVar3) * fVar31 + fVar5);
          *(float *)((longlong)param_2 + 0x14) = (fVar32 - fVar1) * fVar31 + fVar29;
          return param_2;
        }
        fVar26 = fVar31 * fVar31;
        fVar1 = pfVar16[lVar21 * 0x14 + 0xf];
        fVar2 = pfVar16[lVar21 * 0x14 + 0x10];
        fVar3 = pfVar16[lVar21 * 0x14 + 0x11];
        fVar4 = pfVar16[lVar21 * 0x14 + 0x12];
        fVar29 = fVar26 * fVar31;
        fVar27 = fVar29 - fVar26;
        fVar30 = fVar26 * 3.0 - (fVar29 + fVar29);
        fVar28 = ((fVar29 + fVar29) - fVar26 * 3.0) + 1.0;
        fVar31 = (fVar29 - (fVar26 + fVar26)) + fVar31;
        fVar26 = pfVar22[3];
        fVar29 = pfVar16[lVar21 * 0x14 + 3];
        fVar5 = pfVar22[9];
        fVar6 = pfVar16[lVar21 * 0x14 + 4];
        fVar7 = pfVar22[4];
        fVar8 = pfVar22[10];
        fVar9 = pfVar22[0xb];
        fVar10 = pfVar16[lVar21 * 0x14 + 5];
        fVar11 = pfVar22[5];
        fVar12 = pfVar22[0xc];
        fVar13 = pfVar16[lVar21 * 0x14 + 6];
        fVar14 = pfVar22[6];
        *param_2 = CONCAT44(fVar32 * pfVar16[lVar21 * 0x14 + 0xe] * fVar31 +
                            fVar28 * pfVar16[lVar21 * 0x14 + 2] + fVar32 * pfVar22[8] * fVar27 +
                            fVar30 * pfVar22[2],
                            fVar32 * pfVar16[lVar21 * 0x14 + 0xd] * fVar31 +
                            fVar28 * pfVar16[lVar21 * 0x14 + 1] + fVar32 * pfVar22[7] * fVar27 +
                            fVar30 * pfVar22[1]);
        *(float *)(param_2 + 1) =
             fVar32 * fVar1 * fVar31 + fVar28 * fVar29 + fVar32 * fVar5 * fVar27 + fVar30 * fVar26;
        *(ulonglong *)((longlong)param_2 + 0xc) =
             CONCAT44(fVar32 * fVar3 * fVar31 + fVar28 * fVar10 + fVar32 * fVar9 * fVar27 +
                      fVar30 * fVar11,
                      fVar32 * fVar2 * fVar31 + fVar28 * fVar6 + fVar32 * fVar8 * fVar27 +
                      fVar30 * fVar7);
        *(float *)((longlong)param_2 + 0x14) =
             fVar32 * fVar4 * fVar31 + fVar28 * fVar13 + fVar32 * fVar12 * fVar27 + fVar30 * fVar14;
        return param_2;
      }
      uVar17 = *(undefined8 *)(pfVar16 + lVar21 * 0x14 + 1 + 2);
      uVar15 = *(undefined8 *)(pfVar16 + lVar21 * 0x14 + 5);
      *param_2 = *(undefined8 *)(pfVar16 + lVar21 * 0x14 + 1);
      param_2[1] = uVar17;
      param_2[2] = uVar15;
      return param_2;
    }
  }
LAB_14240b47c:
  uVar17 = *(undefined8 *)(pfVar16 + 3);
  uVar15 = *(undefined8 *)(pfVar16 + 5);
  *param_2 = *(undefined8 *)(pfVar16 + 1);
  param_2[1] = uVar17;
  param_2[2] = uVar15;
  return param_2;
}



// FUNCTION 14240b4a0 Eval body=676 status=ok
// SIG undefined Eval(void)

float * FInterpCurve<FVector2D>::Eval
                  (undefined8 *param_1,float *param_2,float param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar8 = *(int *)(param_1 + 1);
  uVar12 = (ulonglong)iVar8;
  uVar11 = iVar8 - 1;
  if (iVar8 == 0) {
    *(undefined8 *)param_2 = *param_4;
    return param_2;
  }
  pfVar5 = (float *)*param_1;
  uVar13 = iVar8 - 1;
  if (*pfVar5 <= param_3) {
    lVar10 = uVar12 - 1;
    if (param_3 < pfVar5[lVar10 * 8]) {
      uVar13 = 0;
      while (1 < iVar8) {
        uVar7 = (int)((int)uVar12 + uVar13) / 2;
        uVar12 = uVar12 & 0xffffffff;
        if (param_3 < pfVar5[(longlong)(int)uVar7 * 8]) {
          uVar12 = (ulonglong)uVar7;
          uVar7 = uVar13;
        }
        uVar13 = uVar7;
        iVar8 = (int)uVar12 - uVar7;
      }
    }
    if (uVar13 != 0xffffffff) {
      if (uVar13 == uVar11) {
        if (*(char *)(param_1 + 2) == '\0') {
          *(undefined8 *)param_2 = *(undefined8 *)(pfVar5 + lVar10 * 8 + 1);
          return param_2;
        }
        if (*(float *)((longlong)param_1 + 0x14) + pfVar5[lVar10 * 8] <= param_3)
        goto LAB_14240b734;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (uVar13 != uVar11)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      lVar10 = (longlong)(int)uVar13;
      iVar8 = 0;
      if (!bVar6) {
        iVar8 = uVar13 + 1;
      }
      pfVar9 = pfVar5 + (longlong)iVar8 * 8;
      if (bVar6) {
        fVar19 = *(float *)((longlong)param_1 + 0x14);
      }
      else {
        fVar19 = *pfVar9 - pfVar5[lVar10 * 8];
      }
      if ((0.0 < fVar19) && (*(char *)(pfVar5 + lVar10 * 8 + 7) != '\x02')) {
        fVar18 = (param_3 - pfVar5[lVar10 * 8]) / fVar19;
        if (*(char *)(pfVar5 + lVar10 * 8 + 7) == '\0') {
          fVar19 = pfVar9[2];
          fVar1 = pfVar5[lVar10 * 8 + 2];
          fVar2 = pfVar5[lVar10 * 8 + 2];
          *param_2 = (pfVar9[1] - pfVar5[lVar10 * 8 + 1]) * fVar18 + pfVar5[lVar10 * 8 + 1];
          param_2[1] = (fVar19 - fVar1) * fVar18 + fVar2;
          return param_2;
        }
        fVar14 = fVar18 * fVar18;
        fVar16 = fVar14 * fVar18;
        fVar17 = fVar14 * 3.0 - (fVar16 + fVar16);
        fVar18 = (fVar16 - (fVar14 + fVar14)) + fVar18;
        fVar15 = ((fVar16 + fVar16) - fVar14 * 3.0) + 1.0;
        fVar1 = pfVar5[lVar10 * 8 + 2];
        fVar2 = pfVar9[2];
        fVar3 = pfVar5[lVar10 * 8 + 6];
        fVar4 = pfVar9[4];
        *param_2 = fVar19 * pfVar5[lVar10 * 8 + 5] * fVar18 + fVar15 * pfVar5[lVar10 * 8 + 1] +
                   fVar19 * pfVar9[3] * (fVar16 - fVar14) + fVar17 * pfVar9[1];
        param_2[1] = fVar19 * fVar3 * fVar18 + fVar15 * fVar1 + fVar19 * fVar4 * (fVar16 - fVar14) +
                     fVar17 * fVar2;
        return param_2;
      }
      *(undefined8 *)param_2 = *(undefined8 *)(pfVar5 + lVar10 * 8 + 1);
      return param_2;
    }
  }
LAB_14240b734:
  *(undefined8 *)param_2 = *(undefined8 *)(pfVar5 + 1);
  return param_2;
}



// FUNCTION 14240b750 EvalSub body=35 status=ok
// SIG undefined EvalSub(void)

void UDistributionFloatConstantCurve::EvalSub
               (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  FInterpCurve<float>::Eval(param_1 + 0x10,param_3,local_res8);
  return;
}



// FUNCTION 14240b790 EvalSub body=57 status=ok
// SIG undefined EvalSub(void)

undefined4 UDistributionFloatUniformCurve::EvalSub(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FInterpCurve<FVector2D>::Eval(param_1 + 0x10,&local_res8,param_3,&DAT_1468b5d88);
  if (param_2 == 0) {
    return local_res8;
  }
  return local_resc;
}



// FUNCTION 14240b7e0 EvalSub body=74 status=ok
// SIG undefined EvalSub(void)

undefined4
UDistributionVectorConstantCurve::EvalSub(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FInterpCurve<FVector>::Eval(param_1 + 0x10,&local_18,param_3,&DAT_1468b5d90);
  if (param_2 == 0) {
    return local_18;
  }
  if (param_2 == 1) {
    return local_14;
  }
  return local_10;
}



// FUNCTION 14240b830 FUN_14240b830 body=203 status=ok
// SIG undefined FUN_14240b830(void)

undefined4 FUN_14240b830(longlong param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = 0;
  uStack_18 = 0;
  FInterpCurve<FTwoVectors>::Eval(param_1 + 0x10,&local_38,param_3,&local_20);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2c8))(param_1 + -0x28,&local_38);
  iVar1 = (int)param_2 / 2;
  if ((param_2 & 1) != 0) {
    if (iVar1 == 0) {
      return local_2c;
    }
    if (iVar1 == 1) {
      return local_28;
    }
    return local_24;
  }
  if (iVar1 == 0) {
    return local_38;
  }
  if (iVar1 == 1) {
    return local_34;
  }
  return local_30;
}



// FUNCTION 14240b910 FUN_14240b910 body=23 status=ok
// SIG undefined FUN_14240b910(void)

void FUN_14240b910(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14240d6a0(0);
  FUN_14241f1f0(uVar1);
  return;
}



// FUNCTION 14240b930 Execute body=74 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UDemoNetDriver,TTypeWrapper<void>___cdecl(FDownloadHeaderResult_const_&),int>
     ::Execute(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014240b977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,*(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14240b980 ExecuteIfSafe body=20 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),<lambda_e75e50148eb1bd7b6ba3731e2edbb0ad>_>
::ExecuteIfSafe(longlong param_1)

{
  <lambda_e75e50148eb1bd7b6ba3731e2edbb0ad>::operator()(param_1 + 8);
  return 1;
}



// FUNCTION 14240b9a0 FUN_14240b9a0 body=26 status=ok
// SIG undefined FUN_14240b9a0(void)

undefined1 FUN_14240b9a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14240d6a0(0);
  FUN_14241f1f0(uVar1);
  return 1;
}



// FUNCTION 14240b9c0 ExecuteIfSafe body=115 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UDemoNetDriver,void___cdecl(FDownloadHeaderResult_const_&),int>
::ExecuteIfSafe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,*(undefined4 *)(param_1 + 0x20))
    ;
    return 1;
  }
  return 0;
}



// FUNCTION 14240ba40 FUN_14240ba40 body=284 status=ok
// SIG undefined FUN_14240ba40(void)

void FUN_14240ba40(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_res8;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_28 [2];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(local_28);
  local_res8 = param_1[2];
  FUN_142416790(&PTR_PTR_146532040);
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(&DAT_146532118,&local_res8);
  QueryPerformanceCounter(&local_res20);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_28[0]._0_4_);
  *param_1 = &PTR_FUN_1450961f8;
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



// FUNCTION 14240bb60 FUN_14240bb60 body=237 status=ok
// SIG undefined FUN_14240bb60(void)

void FUN_14240bb60(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14240a6f0(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_145096208;
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



// FUNCTION 14240bc50 FUN_14240bc50 body=3780 status=ok
// SIG undefined FUN_14240bc50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14240bc50(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  int *piVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  longlong *plVar20;
  float *pfVar21;
  uint *puVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 auStack_3d8 [32];
  float *local_3b8;
  ulonglong local_3a8;
  undefined1 local_3a0 [8];
  longlong *local_398;
  undefined8 local_390;
  longlong *local_388;
  int local_380;
  longlong *local_378;
  undefined8 uStack_370;
  uint *puStack_368;
  undefined1 auStack_360 [16];
  float *local_350;
  undefined8 local_348;
  longlong local_340;
  float local_338;
  int local_334;
  float local_330 [2];
  undefined8 local_328;
  char local_320;
  undefined8 local_318;
  longlong *local_310;
  int local_308;
  uint uStack_304;
  uint *puStack_300;
  undefined4 local_2f8;
  int iStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  uint local_2e8;
  uint uStack_2e4;
  uint *puStack_2e0;
  undefined4 local_2d8;
  undefined8 uStack_2d4;
  undefined4 uStack_2cc;
  longlong local_2c8;
  undefined2 *local_2c0;
  int local_2b8;
  longlong *local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  uint uStack_298;
  int iStack_294;
  undefined1 local_290 [12];
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  uint *puStack_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  longlong *local_258;
  undefined8 uStack_250;
  uint *local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  longlong *local_228;
  undefined2 local_220;
  undefined1 local_218 [4];
  undefined1 local_214 [4];
  undefined1 local_210 [8];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  int iStack_1e0;
  int iStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8 [2];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  undefined8 local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  int local_124;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  FUN_14241a8a0(param_1,0);
  if (*(int *)(param_1 + 0x8b8) < 1) {
    local_2c8 = 0;
    plVar8 = &local_2c8;
  }
  else {
    plVar8 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x8b0) + 0x18))
                       ((longlong *)**(undefined8 **)(param_1 + 0x8b0),local_1b8);
  }
  if (*plVar8 == DAT_146af2778) {
    local_310 = (longlong *)0x0;
    puVar9 = &local_318;
    if ((undefined8 *)(param_1 + 0x8c0) != puVar9) {
      *(undefined8 *)(param_1 + 0x8c0) = 0;
      local_318 = 0;
      puVar9 = (undefined8 *)
               SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8c8,&local_310);
      plVar8 = local_310;
      if (local_310 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_310 + 1;
        lVar16 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        uVar6 = (int)lVar16 - 1;
        puVar9 = (undefined8 *)(ulonglong)uVar6;
        if (uVar6 == 0) {
          puVar9 = (undefined8 *)(**(code **)*local_310)(local_310);
          LOCK();
          piVar12 = (int *)((longlong)plVar8 + 0xc);
          iVar7 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            puVar9 = (undefined8 *)(**(code **)(*local_310 + 8))(local_310,1);
          }
        }
      }
    }
    return (ulonglong)puVar9 & 0xffffffffffffff00;
  }
  iVar7 = *(int *)(param_1 + 0xaf0);
  iVar13 = *(int *)(param_1 + 0xb1c);
  local_1a8 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_168 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_14c = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (0 < iVar7 - iVar13) {
    FUN_14089d230(&local_1a8,iVar7 - iVar13);
    iVar7 = *(int *)(param_1 + 0xaf0);
    iVar13 = *(int *)(param_1 + 0xb1c);
  }
  if (local_150 - local_124 < (iVar7 - iVar13) * 4) {
    FUN_1405effc0(&local_158);
  }
  uStack_304 = 1;
  iVar7 = *(int *)(param_1 + 0xb10);
  puStack_368 = (uint *)(param_1 + 0xaf8);
  local_308 = 0;
  iStack_2f4 = 0;
  iStack_2f0 = 0;
  if (iVar7 != 0) {
    puVar22 = *(uint **)(param_1 + 0xb08);
    if (*(uint **)(param_1 + 0xb08) == (uint *)0x0) {
      puVar22 = puStack_368;
    }
    uVar6 = *puVar22;
    while (uVar6 == 0) {
      lVar16 = (longlong)local_308;
      iStack_2f0 = iStack_2f0 + 0x20;
      iVar13 = local_308 + 1;
      bVar4 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_308;
      local_308 = iVar13;
      if (bVar4) goto LAB_14240beff;
      uVar6 = puVar22[lVar16 + 1];
    }
    uStack_304 = -uVar6 & uVar6;
    iVar13 = 0x1f;
    if (uStack_304 != 0) {
      for (; uStack_304 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_304 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    iStack_2f4 = (iStack_2f0 - iVar13) + 0x1f;
    if (iVar7 < iStack_2f4) {
LAB_14240beff:
      iStack_2f4 = iVar7;
    }
  }
  local_2f8 = 0xffffffff;
  local_378 = (longlong *)(param_1 + 0xae8);
  uStack_240 = CONCAT44(iStack_2f4,0xffffffff);
  auStack_360._8_4_ = iStack_2f0;
  auStack_360._0_8_ = uStack_240;
  auStack_360._12_4_ = uStack_2ec;
  uStack_370 = CONCAT44(uStack_304,local_308);
  local_290._8_4_ = SUB84(local_378,0);
  uStack_284 = (undefined4)((ulonglong)local_378 >> 0x20);
  local_220 = 0;
  local_290._0_8_ = auStack_360._8_8_;
  local_238._8_4_ = local_290._8_4_;
  local_238._0_8_ = auStack_360._8_8_;
  local_238._12_4_ = uStack_284;
  puStack_300 = puStack_368;
  local_258 = local_378;
  uStack_250 = uStack_370;
  local_248 = puStack_368;
  local_228 = local_378;
  if (iStack_2f4 < *(int *)(param_1 + 0xb10)) {
    uVar17 = 0;
    iVar7 = iStack_2f4;
    do {
      plVar8 = local_258;
      lVar26 = (longlong)iVar7 * 0x60;
      lVar16 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(lVar26 + *local_258));
      local_208 = *(undefined8 *)(lVar16 + 0x18);
      FName::ToString(&local_208,local_1c8);
      FUN_1428d4fe0(&local_2c0,local_1c8);
      if (local_1c8[0] != 0) {
        FMemory::Free();
      }
      uVar6 = 0;
      uVar25 = uVar17;
      if (*(int *)(param_1 + 0xa80) != *(int *)(param_1 + 0xaac)) {
        puVar14 = &DAT_143f3eda8;
        if (local_2b8 != 0) {
          puVar14 = local_2c0;
        }
        iVar7 = FUN_140438070(puVar14);
        lVar16 = *(longlong *)(param_1 + 0xab8);
        if (*(longlong *)(param_1 + 0xab8) == 0) {
          lVar16 = param_1 + 0xab0;
        }
        iVar7 = *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0xac0) - 1U & (longlong)iVar7) * 4);
        if (iVar7 != -1) {
          lVar16 = *(longlong *)(param_1 + 0xa78);
          do {
            lVar19 = (longlong)iVar7 * 0x20;
            puVar14 = &DAT_143f3eda8;
            if (local_2b8 != 0) {
              puVar14 = local_2c0;
            }
            if (*(int *)(lVar19 + 8 + lVar16) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar19 + lVar16);
            }
            iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar14);
            if (iVar13 == 0) {
              if (iVar7 != -1) {
                uVar25 = *(longlong *)(param_1 + 0xa78) + lVar19;
              }
              break;
            }
            lVar16 = *(longlong *)(param_1 + 0xa78);
            iVar7 = *(int *)(lVar19 + 0x18 + lVar16);
          } while (iVar7 != -1);
        }
      }
      iVar7 = *(int *)(uVar25 + 0x10);
      lVar16 = *(longlong *)(param_1 + 0xa68);
      if (local_2c0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_14044be50(&local_1a8,local_218,lVar16 + 0x10 + (longlong)iVar7 * 0x18,0);
      *(undefined1 *)(lVar16 + 0x14 + (longlong)iVar7 * 0x18) = 1;
      local_2e8 = 0;
      plVar8 = (longlong *)(*plVar8 + 8 + lVar26);
      uStack_2e4 = 1;
      iVar7 = (int)plVar8[5];
      puStack_368 = (uint *)(plVar8 + 2);
      uStack_2d4 = 0;
      if (iVar7 != 0) {
        puVar22 = (uint *)plVar8[4];
        if ((uint *)plVar8[4] == (uint *)0x0) {
          puVar22 = puStack_368;
        }
        uVar3 = *puVar22;
        uVar25 = uVar17;
        uVar24 = uVar17;
        while (uVar3 == 0) {
          iVar13 = (int)uVar25;
          uVar6 = (int)uVar24 + 0x20;
          uVar24 = (ulonglong)uVar6;
          local_2e8 = iVar13 + 1;
          uVar25 = (ulonglong)local_2e8;
          uStack_2d4 = (ulonglong)uVar6 << 0x20;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) goto LAB_14240c1b7;
          uVar3 = puVar22[(longlong)iVar13 + 1];
        }
        uStack_2e4 = -uVar3 & uVar3;
        iVar13 = 0x1f;
        if (uStack_2e4 != 0) {
          for (; uStack_2e4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
          }
        }
        if (uStack_2e4 == 0) {
          iVar13 = 0x20;
        }
        else {
          iVar13 = 0x1f - iVar13;
        }
        iVar13 = (uVar6 - iVar13) + 0x1f;
        uStack_2d4._4_4_ = (undefined4)((ulonglong)uStack_2d4 >> 0x20);
        uStack_2d4 = CONCAT44(uStack_2d4._4_4_,iVar13);
        if (iVar7 < iVar13) {
LAB_14240c1b7:
          uStack_2d4 = CONCAT44(uStack_2d4._4_4_,iVar7);
        }
      }
      local_2d8 = 0xffffffff;
      uStack_370 = CONCAT44(uStack_2e4,local_2e8);
      auStack_360._4_4_ = (int)uStack_2d4;
      auStack_360._0_4_ = 0xffffffff;
      auStack_360._8_4_ = uStack_2d4._4_4_;
      auStack_360._12_4_ = uStack_2cc;
      local_290._4_4_ = uStack_2cc;
      local_290._0_4_ = uStack_2d4._4_4_;
      stack0xfffffffffffffd78 = plVar8;
      uStack_298 = 0xffffffff;
      iStack_294 = (int)uStack_2d4;
      plVar20 = plVar8;
      local_378 = plVar8;
      puStack_2e0 = puStack_368;
      local_2b0 = plVar8;
      uStack_2a8 = uStack_370;
      local_2a0 = puStack_368;
      if ((int)uStack_2d4 < iVar7) {
        while( true ) {
          iVar7 = iStack_294;
          cVar5 = FWeakObjectPtr::IsValid((longlong)iStack_294 * 0x10 + *local_2b0);
          if (cVar5 == '\0') {
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Remove(plVar20,iVar7);
          }
          uStack_298 = uStack_298 & ~uStack_2a8._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2a8);
          if ((int)local_2a0[6] <= iStack_294) break;
          plVar20 = stack0xfffffffffffffd78;
        }
      }
      FUN_141b1d480(&local_98,local_214,*local_258 + lVar26);
      TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Append<FDefaultSetAllocator>(&local_158,plVar8);
      uStack_240 = CONCAT44(uStack_240._4_4_,(uint)uStack_240 & ~uStack_250._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_250);
      iVar7 = uStack_240._4_4_;
    } while (uStack_240._4_4_ < (int)local_248[6]);
    if (((char)local_220 != '\0') && (local_220._1_1_ != '\0')) {
      TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_228,(int)local_228[1] - *(int *)((longlong)local_228 + 0x34),1);
    }
  }
  uVar17 = 0;
  TSet<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0xae8);
  local_338 = *(float *)(param_1 + 0xad8);
  local_330[0] = 0.0;
  local_350 = (float *)0x0;
  local_348 = 0;
  local_334 = 0;
  local_328 = 0;
  local_320 = '\0';
  local_340 = param_1;
  lVar16 = (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar16 != 0) {
    uVar2 = *(undefined1 *)(param_1 + 0x89c);
    *(undefined1 *)(param_1 + 0x89c) = 1;
    plVar8 = (longlong *)param_2[1];
    local_3a8 = 0;
    if ((ulonglong *)plVar8[1] < (ulonglong *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_3a8,8);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_3a8,8);
      }
    }
    else {
      local_3a8 = *(ulonglong *)*plVar8;
      *plVar8 = *plVar8 + 8;
    }
    lVar16 = *param_2;
    lVar26 = (**(code **)(lVar16 + 0x90))(param_2);
    (**(code **)(lVar16 + 0xa8))(param_2,lVar26 + local_3a8);
    cVar5 = FUN_14241cdb0(&local_350,param_2);
    if ((cVar5 == '\0') && (local_320 != '\0')) {
      FUN_142419e60(param_1,0);
      uVar17 = 0;
      *(undefined1 *)(param_1 + 0x89c) = uVar2;
      goto LAB_14240ca5f;
    }
    *(undefined1 *)(param_1 + 0x89c) = uVar2;
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x568) + 0x30))();
  do {
    cVar5 = (**(code **)(*plVar8 + 0xa0))(plVar8);
    if (cVar5 != '\0') goto LAB_14240c48c;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x78))();
    if (cVar5 == '\0') goto LAB_14240c48c;
    local_328 = (**(code **)(*plVar8 + 0x90))(plVar8);
    local_334 = (int)local_348;
    local_3b8 = local_330;
    cVar5 = FUN_14241c620(local_340,plVar8,&local_350,1);
    if (cVar5 == '\0') {
      local_320 = '\x01';
      FUN_142419e60(param_1,0);
      uVar17 = 0;
      goto LAB_14240ca5f;
    }
  } while (local_330[0] <= local_338);
  (**(code **)(*plVar8 + 0xa8))(plVar8,local_328);
  if (local_334 != 0) {
    FUN_14241dcf0(&local_350,local_334,(int)local_348 - local_334,1);
  }
LAB_14240c48c:
  if (local_320 != '\0') {
    FUN_142419e60(param_1,0);
    uVar17 = 0;
    goto LAB_14240ca5f;
  }
  local_108 = *(undefined8 *)(param_1 + 0xd0);
  local_100 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xffffffff;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::operator=
            (&local_100,&local_98);
  local_a8 = 0;
  local_b0 = &local_158;
  local_388 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_380 = 3;
  local_388 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_1446fea78;
    plVar8[1] = (longlong)&local_108;
    plVar8[2] = (longlong)`UDemoNetDriver::FastForwardLevels'::`2'::FDynamicActorTracker::TrackActor
    ;
    lVar16 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar16;
    *plVar8 = (longlong)&PTR_GetPoolName_1446feac0;
  }
  puVar9 = (undefined8 *)UWorld::AddOnActorSpawnedHandler(local_108,local_1b0,&local_388);
  local_a8 = *puVar9;
  if (local_380 == 0) {
LAB_14240c5ec:
    if (local_388 != (longlong *)0x0) {
      FMemory::Free(local_388);
    }
  }
  else if (local_388 != (longlong *)0x0) {
    (**(code **)(*local_388 + 0x28))(local_388,0);
    if (local_388 != (longlong *)0x0) {
      local_388 = (longlong *)FMemory::Realloc(local_388,0,0);
    }
    local_380 = 0;
    goto LAB_14240c5ec;
  }
  uVar2 = *(undefined1 *)(param_1 + 0x899);
  *(undefined1 *)(param_1 + 0x899) = 1;
  FWeakObjectPtr::operator=(local_3a0,*(undefined8 *)(param_1 + 0x90));
  cVar5 = FWeakObjectPtr::IsValid(local_3a0);
  if (cVar5 != '\0') {
    uVar10 = FWeakObjectPtr::Get(local_3a0);
    FUN_1425d1160(uVar10,1);
  }
  pfVar21 = local_350 + (longlong)(int)local_348 * 8;
  if (local_350 != pfVar21) {
    pfVar18 = local_350 + 4;
    lVar16 = local_1a8;
    puVar23 = local_168;
    do {
      if (pfVar18[2] != 0.0) {
        if (*(float *)(param_1 + 0x548) < *pfVar18) break;
        if ((int)local_1a0 != local_174) {
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa68) + 0x10 +
                           (longlong)
                           *(int *)(*(longlong *)(param_1 + 0xac8) + -4 +
                                   (longlong)(int)pfVar18[2] * 4) * 0x18);
          puVar11 = local_170;
          if (puVar23 != (undefined1 *)0x0) {
            puVar11 = puVar23;
          }
          for (iVar7 = *(int *)(puVar11 + (longlong)(int)(local_160 - 1U & uVar6) * 4); iVar7 != -1;
              iVar7 = *(int *)(lVar16 + 4 + (longlong)iVar7 * 0xc)) {
            if (*(uint *)(lVar16 + (longlong)iVar7 * 0xc) == uVar6) {
              if (iVar7 != -1) {
                cVar5 = FUN_14241b6e0(param_1,*(undefined8 *)(pfVar18 + -4),pfVar18[-2]);
                lVar16 = local_1a8;
                puVar23 = local_168;
                if (cVar5 == '\0') {
                  cVar5 = FWeakObjectPtr::IsValid(local_3a0);
                  if (cVar5 != '\0') {
                    uVar10 = FWeakObjectPtr::Get(local_3a0);
                    FUN_1425d1160(uVar10,0);
                  }
                  *(undefined1 *)(param_1 + 0x899) = uVar2;
                  uVar17 = 0;
                  goto LAB_14240ca28;
                }
              }
              break;
            }
          }
        }
      }
      pfVar1 = pfVar18 + 4;
      pfVar18 = pfVar18 + 8;
    } while (pfVar1 != pfVar21);
  }
  cVar5 = FWeakObjectPtr::IsValid(local_3a0);
  if (cVar5 != '\0') {
    uVar10 = FWeakObjectPtr::Get(local_3a0);
    FUN_1425d1160(uVar10,0);
  }
  *(undefined1 *)(param_1 + 0x899) = uVar2;
  lVar16 = *(longlong *)(param_1 + 0x90);
  if (lVar16 != 0) {
    local_398 = (longlong *)0x0;
    local_390 = 0;
    if (0 < local_150 - local_124) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_398);
      lVar16 = *(longlong *)(param_1 + 0x90);
      uVar17 = local_390 & 0xffffffff;
    }
    iVar7 = (int)uVar17;
    plVar8 = *(longlong **)(lVar16 + 0x70);
    uVar24 = 0;
    uVar25 = (longlong)*(int *)(lVar16 + 0x78) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(lVar16 + 0x78) < plVar8) {
      uVar25 = uVar24;
    }
    plVar20 = local_398;
    local_3a8 = uVar25;
    if (uVar25 != 0) {
      do {
        lVar16 = *plVar8;
        if (((lVar16 != 0) && (*(int *)(lVar16 + 0x44) == 2)) &&
           (lVar26 = *(longlong *)(lVar16 + 0x68), lVar26 != 0)) {
          FWeakObjectPtr::operator=(&local_200,lVar26);
          local_1f8 = local_200;
          piVar12 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                           ::FindId(&local_158,local_210,&local_1f8);
          uVar25 = local_3a8;
          if (*piVar12 != -1) {
            iVar7 = (int)uVar17;
            uVar6 = iVar7 + 1;
            local_390 = CONCAT44(local_390._4_4_,uVar6);
            if (local_390._4_4_ < (int)uVar6) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_398);
              plVar20 = local_398;
              uVar6 = (uint)local_390;
            }
            uVar17 = (ulonglong)uVar6;
            plVar20[iVar7] = lVar16;
            lVar16 = *(longlong *)(lVar16 + 0x90);
            uVar25 = local_3a8;
            if (lVar16 != 0) {
              local_3b8 = (float *)CONCAT44(local_3b8._4_4_,1);
              FUN_14271c1e0(*(undefined8 *)(lVar16 + 0x2b0),*(undefined8 **)(lVar16 + 0x2c0) + 0xe,
                            **(undefined8 **)(lVar16 + 0x2c0),lVar26);
              uVar25 = local_3a8;
            }
          }
        }
        iVar7 = (int)uVar17;
        plVar8 = plVar8 + 1;
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar25);
    }
    uVar25 = 0;
    uVar17 = (ulonglong)((longlong)(plVar20 + iVar7) + (7 - (longlong)plVar20)) >> 3;
    if (plVar20 + iVar7 < plVar20) {
      uVar17 = uVar25;
    }
    plVar8 = plVar20;
    if (uVar17 != 0) {
      do {
        lVar16 = *plVar20;
        plVar8 = (longlong *)(lVar16 + 0x98);
        local_280 = 0;
        uStack_27c = 1;
        local_270 = 0xffffffff;
        uStack_26c = 0;
        uStack_268 = 0;
        puVar22 = (uint *)(lVar16 + 0xa8);
        iVar7 = 0;
        puStack_278 = puVar22;
        if (*(int *)(lVar16 + 0xc0) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_280);
          iVar7 = *(int *)(lVar16 + 0xc0);
        }
        uStack_1e8 = CONCAT44(uStack_27c,local_280);
        uStack_1d8 = CONCAT44(uStack_26c,local_270);
        uStack_1d0 = CONCAT44(uStack_264,uStack_268);
        _iStack_1e0 = CONCAT44(iVar7,-1 << ((byte)iVar7 & 0x1f));
        uStack_370 = CONCAT44(uStack_27c,local_280);
        puStack_368 = puStack_278;
        auStack_360._8_8_ = uStack_1d0;
        auStack_360._0_8_ = uStack_1d8;
        local_378 = plVar8;
        local_1f0 = plVar8;
        while( true ) {
          if (((auStack_360._4_4_ == iVar7) && (puStack_368 == puVar22)) && (local_378 == plVar8))
          break;
          FUN_1423e76f0(*(undefined8 *)((longlong)(int)auStack_360._4_4_ * 0x20 + 8 + *local_378),1)
          ;
          auStack_360._0_4_ = auStack_360._0_4_ & ~uStack_370._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_370);
        }
        plVar20 = plVar20 + 1;
        uVar25 = uVar25 + 1;
        plVar8 = local_398;
      } while (uVar25 != uVar17);
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
  }
  uVar17 = 1;
LAB_14240ca28:
  UWorld::RemoveOnActorSpawnedHandler(local_108,local_a8);
  local_b8 = 0;
  if (local_c0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_100);
LAB_14240ca5f:
  TArray<FPlaybackPacket,FDefaultAllocator>::~TArray<FPlaybackPacket,FDefaultAllocator>(&local_350);
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  local_110 = 0;
  if (local_118 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_158);
  local_160 = 0;
  if (local_168 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_1a8);
  return uVar17;
}



// FUNCTION 14240cb20 FUN_14240cb20 body=1641 status=ok
// SIG undefined FUN_14240cb20(void)

void FUN_14240cb20(LARGE_INTEGER param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  LARGE_INTEGER local_res8;
  longlong *local_res10;
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int iStack_88;
  uint uStack_84;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar10 = (longlong *)0x0;
  *(undefined1 *)(param_1.QuadPart + 0x899) = 0;
  if (*(longlong *)(param_1.QuadPart + 0xd0) != 0) {
    plVar10 = *(longlong **)(*(longlong *)(param_1.QuadPart + 0xd0) + 0x148);
  }
  local_res8 = param_1;
  local_res10 = param_2;
  if (*(char *)(param_1.QuadPart + 0x89a) != '\0') {
    FUN_142408fa0();
  }
  if (plVar10 != (longlong *)0x0) {
    if (*(char *)(param_1.QuadPart + 0x89a) != '\0') {
      *(float *)((longlong)plVar10 + 0x484) =
           *(float *)(param_1.QuadPart + 0x8f4) + *(float *)(param_1.QuadPart + 0x8f0);
    }
    (**(code **)(*plVar10 + 0x768))(plVar10);
  }
  lVar7 = *(longlong *)(param_1.QuadPart + 0x90);
  if ((lVar7 != 0) && (*(char *)(param_1.QuadPart + 0x89a) != '\0')) {
    plVar13 = *(longlong **)(lVar7 + 0x70);
    plVar10 = plVar13 + *(int *)(lVar7 + 0x78);
    if (plVar13 != plVar10) {
      do {
        lVar7 = *plVar13;
        if (lVar7 != 0) {
          lVar6 = FUN_1428e6c20();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (lVar6 = *(longlong *)(lVar7 + 0x68), lVar6 != 0)) {
            lVar7 = *(longlong *)(lVar7 + 0x90);
            cVar5 = UAbilityTask::IsWaitingOnRemotePlayerdata(lVar6);
            if ((cVar5 != '\0') && (lVar7 != 0)) {
              FUN_14271c1e0(*(undefined8 *)(lVar7 + 0x2b0),*(undefined8 **)(lVar7 + 0x2c0) + 0xe,
                            **(undefined8 **)(lVar7 + 0x2c0),lVar6,1);
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar10);
      lVar7 = *(longlong *)(param_1.QuadPart + 0x90);
    }
  }
  if (lVar7 != 0) {
    plVar10 = (longlong *)(lVar7 + 0x1600);
    uVar2 = *(uint *)(lVar7 + 0x1628);
    puVar1 = (uint *)(lVar7 + 0x1610);
    local_d8 = 0;
    uStack_d4 = 1;
    uStack_c4 = 0;
    iStack_c0 = 0;
    if (uVar2 != 0) {
      puVar15 = *(uint **)(lVar7 + 0x1620);
      if (*(uint **)(lVar7 + 0x1620) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar3 = *puVar15;
      while (uVar3 == 0) {
        lVar6 = (longlong)local_d8;
        iStack_c0 = iStack_c0 + 0x20;
        iVar9 = local_d8 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
        local_d8 = iVar9;
        if (bVar4) goto LAB_14240cd5f;
        uVar3 = puVar15[lVar6 + 1];
      }
      uStack_d4 = -uVar3 & uVar3;
      iVar9 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_c4 = (iStack_c0 - iVar9) + 0x1f;
      if ((int)uVar2 < (int)uStack_c4) {
LAB_14240cd5f:
        uStack_c4 = uVar2;
      }
    }
    uVar3 = *(uint *)(lVar7 + 0x1628);
    uStack_a0 = CONCAT44(uStack_c4,0xffffffff);
    uStack_98 = CONCAT44(uStack_bc,iStack_c0);
    uStack_b0 = CONCAT44(uStack_d4,local_d8);
    uVar14 = uVar3 & 0xffffffe0;
    iStack_88 = local_d8;
    uStack_84 = uStack_d4;
    local_res10 = plVar10;
    puStack_a8 = puVar1;
    local_80 = puVar1;
    uStack_78 = uStack_a0;
    local_70 = uStack_98;
    local_90 = plVar10;
    uStack_c4 = uVar3;
    if (uVar3 != uVar2) {
      puVar15 = *(uint **)(lVar7 + 0x1620);
      if (*(uint **)(lVar7 + 0x1620) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar11 = puVar15[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar9 = (int)uVar3 >> 5;
      while (uVar11 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_14240ce39;
        uVar11 = puVar15[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_c4 = (uVar14 - iVar9) + 0x1f;
      if ((int)uVar2 < (int)uStack_c4) {
LAB_14240ce39:
        uStack_c4 = uVar2;
      }
    }
    while( true ) {
      uVar2 = uStack_c4;
      if ((uStack_78._4_4_ == uStack_c4) && (local_80 == puVar1)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (local_90 == plVar10)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      param_1 = local_res8;
      if (!bVar4) break;
      lVar7 = *(longlong *)(*local_90 + 8 + (longlong)(int)uStack_78._4_4_ * 0x18);
      if (lVar7 != 0) {
        plVar13 = (longlong *)(lVar7 + 0x98);
        uStack_d4 = 1;
        uVar3 = *(uint *)(lVar7 + 0xc0);
        puVar15 = (uint *)(lVar7 + 0xa8);
        local_d8 = 0;
        uStack_c4 = 0;
        iStack_c0 = 0;
        if (uVar3 != 0) {
          puVar16 = *(uint **)(lVar7 + 0xb8);
          if (*(uint **)(lVar7 + 0xb8) == (uint *)0x0) {
            puVar16 = puVar15;
          }
          uVar14 = *puVar16;
          while (uVar14 == 0) {
            lVar6 = (longlong)local_d8;
            iStack_c0 = iStack_c0 + 0x20;
            iVar9 = local_d8 + 1;
            bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
            local_d8 = iVar9;
            if (bVar4) goto LAB_14240cf3f;
            uVar14 = puVar16[lVar6 + 1];
          }
          uStack_d4 = -uVar14 & uVar14;
          iVar9 = 0x1f;
          if (uStack_d4 != 0) {
            for (; uStack_d4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_d4 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          uStack_c4 = (iStack_c0 - iVar9) + 0x1f;
          if ((int)uVar3 < (int)uStack_c4) {
LAB_14240cf3f:
            uStack_c4 = uVar3;
          }
        }
        uVar14 = *(uint *)(lVar7 + 0xc0);
        uStack_a0 = CONCAT44(uStack_c4,0xffffffff);
        uStack_98 = CONCAT44(uStack_bc,iStack_c0);
        uStack_60 = CONCAT44(uStack_d4,local_d8);
        uVar11 = uVar14 & 0xffffffe0;
        uStack_b0 = CONCAT44(uStack_d4,local_d8);
        puStack_a8 = puVar15;
        local_68 = plVar13;
        puStack_58 = puVar15;
        uStack_50 = uStack_a0;
        uStack_48 = uStack_98;
        uStack_c4 = uVar14;
        if (uVar14 != uVar3) {
          puVar16 = *(uint **)(lVar7 + 0xb8);
          if (*(uint **)(lVar7 + 0xb8) == (uint *)0x0) {
            puVar16 = puVar15;
          }
          uVar12 = puVar16[(int)uVar14 >> 5] & -1 << ((byte)uVar14 & 0x1f);
          iVar9 = (int)uVar14 >> 5;
          while (uVar12 == 0) {
            uVar11 = uVar11 + 0x20;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_14240d019;
            uVar12 = puVar16[(longlong)iVar9 + 1];
            iVar9 = iVar9 + 1;
          }
          uVar12 = -uVar12 & uVar12;
          iVar9 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uVar12 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          uStack_c4 = (uVar11 - iVar9) + 0x1f;
          if ((int)uVar3 < (int)uStack_c4) {
LAB_14240d019:
            uStack_c4 = uVar3;
          }
        }
        while( true ) {
          if ((uStack_a0._4_4_ == uStack_c4) && (puStack_a8 == puVar15)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (bVar4) break;
          FUN_1423e76f0(*(undefined8 *)((longlong)(int)uStack_a0._4_4_ * 0x20 + 8 + *plVar13),
                        CONCAT71((int7)(int3)((ulonglong)uStack_a0 >> 0x28),1));
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
        }
      }
      uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_84);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
      uStack_c4 = uVar2;
    }
  }
  plVar10 = (longlong *)0x0;
  *(undefined1 *)(param_1.QuadPart + 0x89a) = 0;
  *(undefined4 *)(param_1.QuadPart + 0x8a8) = 0;
  if (0x7fffffff < *(uint *)(param_1.QuadPart + 0x8ac)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1.QuadPart + 0x8a0,0);
  }
  QueryPerformanceCounter(&local_res8);
  if ((*(int *)(param_1.QuadPart + 0x8e8) != 0) &&
     (*(longlong **)(param_1.QuadPart + 0x8e0) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1.QuadPart + 0x8e0) + 0x18))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14240d10e;
    }
  }
  bVar4 = false;
LAB_14240d10e:
  if (bVar4) {
    if (*(int *)(param_1.QuadPart + 0x8e8) != 0) {
      plVar10 = *(longlong **)(param_1.QuadPart + 0x8e0);
    }
    (**(code **)(*plVar10 + 0x40))(plVar10,1);
  }
  if ((*(int *)(param_1.QuadPart + 0x8e8) != 0) &&
     (plVar10 = *(longlong **)(param_1.QuadPart + 0x8e0), plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    if (*(longlong *)(param_1.QuadPart + 0x8e0) != 0) {
      uVar8 = FMemory::Realloc(*(longlong *)(param_1.QuadPart + 0x8e0),0,0);
      *(undefined8 *)(param_1.QuadPart + 0x8e0) = uVar8;
    }
    *(undefined4 *)(param_1.QuadPart + 0x8e8) = 0;
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1.QuadPart + 0x750);
  return;
}



// FUNCTION 14240d190 FUN_14240d190 body=140 status=ok
// SIG undefined FUN_14240d190(void)

undefined8 FUN_14240d190(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x1608) != *(int *)(param_1 + 0x1634)) {
    lVar3 = *(longlong *)(param_1 + 0x1640);
    if (*(longlong *)(param_1 + 0x1640) == 0) {
      lVar3 = param_1 + 0x1638;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(int)(param_2[1] ^ *param_2) &
                             (longlong)*(int *)(param_1 + 0x1648) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x1600);
      do {
        lVar1 = (longlong)iVar2 * 0x18;
        if ((*(uint *)(lVar1 + lVar3) == *param_2) && (*(uint *)(lVar1 + 4 + lVar3) == param_2[1]))
        {
          if (iVar2 == -1) {
            return 0;
          }
          if (lVar1 + lVar3 == 0) {
            return 0;
          }
          return *(undefined8 *)(lVar1 + lVar3 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10 + lVar3);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14240d220 FindId body=198 status=ok
// SIG undefined FindId(void)

int * TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_res8 = *param_3;
        local_resc = param_3[1];
        lVar5 = (longlong)iVar4;
        local_res20 = *(undefined4 *)(lVar3 + lVar5 * 0x10);
        local_res24 = *(undefined4 *)(lVar3 + 4 + lVar5 * 0x10);
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar1 != '\0') {
          *param_2 = iVar4;
          return param_2;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + lVar5 * 0x10);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14240d2f0 FUN_14240d2f0 body=290 status=ok
// SIG undefined FUN_14240d2f0(void)

longlong FUN_14240d2f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  int local_res8 [2];
  int local_res18 [2];
  undefined8 local_38;
  int *local_30;
  
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xa78,local_res18,param_2);
  piVar5 = (int *)0x0;
  if (local_res18[0] != -1) {
    piVar5 = (int *)((longlong)local_res18[0] * 0x20 + *(longlong *)(param_1 + 0xa78));
  }
  plVar1 = (longlong *)(param_1 + 0xa68);
  piVar3 = piVar5 + 4;
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0xa70);
    *(int *)(param_1 + 0xa70) = iVar2 + 1;
    if (*(int *)(param_1 + 0xa74) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar2);
    }
    lVar4 = *plVar1 + (longlong)iVar2 * 0x18;
    FString::FString(lVar4,param_2);
    *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
    *(undefined2 *)(lVar4 + 0x14) = 0;
    *(int *)(*plVar1 + 0x10 + (longlong)iVar2 * 0x18) = iVar2;
    local_30 = local_res8;
    local_res8[0] = iVar2;
    local_38 = param_2;
    FUN_1406c2bb0(param_1 + 0xa78,local_res18,&local_38,0);
    *(int *)(param_1 + 0xb48) = *(int *)(param_1 + 0xb48) + 1;
  }
  else {
    local_res8[0] = *piVar3;
  }
  return *plVar1 + (longlong)local_res8[0] * 0x18;
}



// FUNCTION 14240d420 FindProfile body=378 status=ok
// SIG undefined FindProfile(void)

ulonglong UDeviceProfileManager::FindProfile(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  longlong local_48 [2];
  undefined2 *local_38;
  ulonglong local_30;
  
  uVar7 = 0;
  uVar6 = uVar7;
  uVar8 = uVar7;
  uVar2 = uVar7;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      uVar2 = *(ulonglong *)(uVar8 + *(longlong *)(param_1 + 0x28));
      local_res8 = *(undefined8 *)(uVar2 + 0x18);
      FName::ToString(&local_res8,local_48 + 2);
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      puVar3 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar3 = local_38;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (iVar1 == 0) break;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar8 = uVar8 + 8;
      uVar2 = uVar7;
    } while ((int)uVar5 < *(int *)(param_1 + 0x30));
  }
  if ((param_3 != '\0') && (uVar2 == 0)) {
    local_38 = (undefined2 *)0x0;
    local_48[0] = 0;
    local_48[1] = 0x10;
    local_30 = uVar2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_48[0],0x10,"WindowsNoEditor",0x10,0x3f);
    uVar2 = CreateProfile(param_1,param_2,local_48,local_48 + 2,0);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return uVar2;
  }
  return uVar2;
}



// FUNCTION 14240d5a0 FUN_14240d5a0 body=118 status=ok
// SIG undefined FUN_14240d5a0(void)

void FUN_14240d5a0(longlong param_1)

{
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     ((((0 < *(int *)(param_1 + 0xa0) && (**(longlong **)(param_1 + 0x98) != 0)) &&
       (*(int *)(**(longlong **)(param_1 + 0x98) + 300) != 1)) ||
      ((*(char *)(param_1 + 0x89c) != '\0' ||
       ((*(longlong *)(param_1 + 0x90) != 0 && (*(int *)(*(longlong *)(param_1 + 0x90) + 300) != 1))
       )))))) {
    FUN_142423360(param_1);
  }
  FUN_140483870(&DAT_1464b57d0,param_1);
  FUN_1425bdc30(param_1);
  return;
}



// FUNCTION 14240d650 FUN_14240d650 body=79 status=ok
// SIG undefined FUN_14240d650(void)

void FUN_14240d650(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014240d66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2b0))();
    return;
  }
  lVar1 = FUN_1425bd3e0(param_1);
  if (lVar1 != 0) {
    *(double *)(lVar1 + 0x10) = (double)(*(float *)(param_1 + 0x548) - 0.01);
  }
  return;
}



// FUNCTION 14240d6a0 FUN_14240d6a0 body=734 status=ok
// SIG undefined FUN_14240d6a0(void)

longlong FUN_14240d6a0(char param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 local_res10;
  longlong *local_28;
  int local_20;
  
  if (DAT_146af2458 != 0) {
    return DAT_146af2458;
  }
  if ((DAT_146af2954 != '\0') && (param_1 != '\0')) {
    return 3;
  }
  DAT_146af2954 = 1;
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar6 = 0;
  local_res10 = 0;
  uVar5 = UPlatformInterfaceWebResponse::GetPrivateStaticClass();
  DAT_146af2458 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
  iVar1 = *(int *)(DAT_146af2458 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar8 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar8;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
  }
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
  uVar4 = UDeviceProfileManager::GetActiveProfileName(&local_28);
  lVar6 = UDeviceProfileManager::FindProfile(DAT_146af2458,uVar4,1);
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(longlong *)(DAT_146af2458 + 0x50) = lVar6;
  local_res10 = *(undefined8 *)(lVar6 + 0x18);
  FName::ToString(&local_res10,&local_28);
  uVar4 = FUN_14168db40();
  FCsvProfiler::SetDeviceProfileName(uVar4,&local_28);
  FUN_142413de0();
  plVar2 = DAT_146af2790;
  local_28 = (longlong *)0x0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)IDelegateInstance::vftable;
    *plVar7 = (longlong)&PTR_GetPoolName_1450989c8;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[2] = lVar6;
    *plVar7 = (longlong)&PTR_GetPoolName_145098a10;
  }
  (**(code **)(*plVar2 + 0x80))(plVar2,&local_28);
  if (local_20 == 0) {
LAB_14240d880:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_14240d880;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar2 = DAT_1468b1f88;
  local_28 = (longlong *)0x0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)IDelegateInstance::vftable;
    *plVar7 = (longlong)&PTR_GetPoolName_145098a58;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[2] = lVar6;
    *plVar7 = (longlong)&PTR_GetPoolName_145098aa0;
  }
  (**(code **)(*plVar2 + 0x88))
            (plVar2,L"dp.Override.Restore",
             L"Restores any cvars set by dp.Override to their previous value",&local_28,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_14240d964;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_14240d964:
  InitializeSharedSamplerStates();
  return DAT_146af2458;
}



// FUNCTION 14240d980 GetActiveProfileName body=612 status=ok
// SIG undefined GetActiveProfileName(void)

longlong * UDeviceProfileManager::GetActiveProfileName(longlong *param_1)

{
  void *_Src;
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined1 local_res10 [8];
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_50 = 0x10;
  pvVar10 = (void *)0x0;
  local_58 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  pvVar9 = local_58;
  FGenericPlatformString::Convert<char,wchar_t>(local_58,0x10,"WindowsNoEditor",0x10,0x3f);
  local_68 = (void *)0x0;
  local_60 = 0;
  uVar3 = FCommandLine::Get();
  cVar2 = FParse::Value(uVar3,L"DeviceProfile=",&local_68,1);
  if (cVar2 == '\0') {
    uVar3 = FCommandLine::Get();
    cVar2 = FParse::Value(uVar3,&DAT_14508fa20,&local_68,1);
    if (cVar2 == '\0') {
      local_30 = *(int *)(DAT_146af2798 + 1);
      lVar8 = (longlong)local_30;
      _Src = (void *)*DAT_146af2798;
      local_38 = (void *)0x0;
      uVar11 = 0;
      if (local_30 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        pvVar10 = local_38;
        ::_guard_xfg_dispatch_icall_nop(local_38,_Src,lVar8 * 2);
        uVar11 = local_2c;
      }
      iVar1 = local_30;
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
      local_60 = CONCAT44(uVar11,iVar1);
      if ((iVar1 == 0) || (iVar1 + -1 < 1)) {
        local_48 = (undefined2 *)0x0;
        local_40 = 0;
        local_68 = pvVar10;
        cVar2 = FConfigCacheIni::GetString
                          (DAT_1468b6148,L"DeviceProfileManager",L"DeviceProfileSelectionModule",
                           &local_48,&DAT_1468e2360);
        if (cVar2 != '\0') {
          puVar7 = &DAT_143f3eda8;
          if ((int)local_40 != 0) {
            puVar7 = local_48;
          }
          puVar4 = (undefined8 *)FName::FName(local_res10,puVar7,1);
          uVar3 = *puVar4;
          uVar5 = FUN_14168dc80();
          plVar6 = (longlong *)FUN_141690010(uVar5,uVar3);
          if (plVar6 != (longlong *)0x0) {
            uVar3 = (**(code **)(*plVar6 + 0x40))(plVar6,&local_38);
            FString::operator=(&local_58,uVar3);
            pvVar9 = local_58;
            if (local_38 != (void *)0x0) {
              FMemory::Free();
              pvVar9 = local_58;
            }
          }
        }
        *param_1 = (longlong)pvVar9;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
        pvVar9 = local_68;
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
          pvVar9 = local_68;
        }
      }
      else {
        *param_1 = (longlong)pvVar10;
        *(int *)(param_1 + 1) = iVar1;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar11;
        local_68 = (void *)0x0;
        local_60 = 0;
      }
      if (pvVar9 == (void *)0x0) {
        return param_1;
      }
      FMemory::Free(pvVar9);
      return param_1;
    }
  }
  *param_1 = (longlong)local_68;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_60;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_60._4_4_;
  local_60 = 0;
  local_68 = (void *)0x0;
  if (pvVar9 == (void *)0x0) {
    return param_1;
  }
  FMemory::Free(pvVar9);
  return param_1;
}



// FUNCTION 14240dbf0 FUN_14240dbf0 body=148 status=ok
// SIG undefined FUN_14240dbf0(void)

longlong FUN_14240dbf0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res10 [6];
  
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar2 = **(longlong **)(param_1 + 0x98);
  }
  if (lVar2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x2d8))
                    (*(longlong **)(lVar2 + 0x68),local_res10,1);
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 14240dc90 GetAllocationSize body=22 status=ok
// SIG undefined GetAllocationSize(void)

undefined8 * FDistanceFieldVolumeTexture::GetAllocationSize(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + 0x20);
  *param_2 = *(undefined8 *)(*param_1 + 0x18);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14240dcd0 FUN_14240dcd0 body=600 status=ok
// SIG undefined FUN_14240dcd0(void)

longlong * FUN_14240dcd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar3 < DAT_146af2930) && (_Init_thread_header(), DAT_146af2930 == -1)) {
    FName::FName(&DAT_146af2928,L"General",1);
    _Init_thread_footer();
  }
  if ((*piVar3 < DAT_146af2940) && (_Init_thread_header(), DAT_146af2940 == -1)) {
    FName::FName(&DAT_146af2938,L"EditorSettings",1);
    _Init_thread_footer();
  }
  if ((*piVar3 < DAT_146af2950) && (_Init_thread_header(), DAT_146af2950 == -1)) {
    FName::FName(&DAT_146af2948,L"EditorPerProjectUserSettings",1);
    _Init_thread_footer();
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0);
    if ((lVar1 == 0x1f) || (lVar1 == 0xce)) {
      *param_2 = 0x1f;
      return param_2;
    }
    lVar2 = DAT_146af2928;
    if ((lVar1 != DAT_146af2938) && (lVar1 != DAT_146af2948)) {
      if ((lVar1 != 0x20) && (((lVar1 != 0xfb && (lVar1 != 600)) && (lVar1 != 0x259)))) {
        *(undefined4 *)((longlong)param_2 + 4) = 0;
        if (lVar1 != 0xdd) {
          *(undefined4 *)param_2 = 0x1f;
          return param_2;
        }
        *(undefined4 *)param_2 = 0xdd;
        return param_2;
      }
      *param_2 = 0x20;
      return param_2;
    }
  }
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 14240df30 FUN_14240df30 body=104 status=ok
// SIG undefined FUN_14240df30(void)

float FUN_14240df30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  float fVar5;
  
  lVar1 = DAT_146af2670;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
      goto LAB_14240df78;
    }
  }
  lVar4 = 0;
LAB_14240df78:
  fVar5 = *(float *)(lVar4 + lVar1);
  if (fVar5 < 0.0) {
    fVar5 = *(float *)(param_1 + 0x9dc);
  }
  return fVar5;
}



// FUNCTION 14240dfc0 FUN_14240dfc0 body=430 status=ok
// SIG undefined FUN_14240dfc0(void)

undefined8 * FUN_14240dfc0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar3 < DAT_146af28f0) {
    _Init_thread_header(&DAT_146af28f0);
    if (DAT_146af28f0 == -1) {
      FName::FName(&DAT_146af28e8,L"Project",1);
      _Init_thread_footer(&DAT_146af28f0);
    }
  }
  if (*piVar3 < DAT_146af2900) {
    _Init_thread_header(&DAT_146af2900);
    if (DAT_146af2900 == -1) {
      FName::FName(&DAT_146af28f8,L"Editor",1);
      _Init_thread_footer(&DAT_146af2900);
    }
  }
  if (*piVar3 < DAT_146af2910) {
    _Init_thread_header(&DAT_146af2910);
    if (DAT_146af2910 == -1) {
      FName::FName(&DAT_146af2908,L"EditorSettings",1);
      _Init_thread_footer(&DAT_146af2910);
    }
  }
  if (*piVar3 < DAT_146af2920) {
    _Init_thread_header(&DAT_146af2920);
    if (DAT_146af2920 == -1) {
      FName::FName(&DAT_146af2918,L"EditorPerProjectUserSettings",1);
      _Init_thread_footer(&DAT_146af2920);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0);
  if ((lVar1 == DAT_146af2908) || (uVar2 = DAT_146af28e8, lVar1 == DAT_146af2918)) {
    uVar2 = DAT_146af28f8;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14240e170 GetContextHash body=475 status=ok
// SIG undefined GetContextHash(void)

ulonglong FDialogueContext::GetContextHash(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  undefined4 local_res8;
  ulonglong local_res10;
  int *local_res18;
  int *local_48;
  uint local_40;
  uint local_3c;
  
  piVar12 = (int *)0x0;
  local_res8 = 0;
  local_res10 = param_2;
  if (*param_1 != 0) {
    local_res8 = FCrc::MemCrc32(*param_1 + 0x2c,0x10,0);
  }
  plVar14 = (longlong *)param_1[1];
  iVar10 = 0;
  local_48 = (int *)0x0;
  local_3c = 0;
  piVar7 = (int *)((longlong)(int)param_1[2] & 0x1fffffffffffffff);
  if (plVar14 + (int)param_1[2] < plVar14) {
    piVar7 = piVar12;
  }
  piVar8 = piVar12;
  piVar9 = piVar12;
  piVar11 = piVar12;
  piVar13 = piVar12;
  local_res18 = piVar7;
  if (piVar7 != (int *)0x0) {
    do {
      lVar1 = *plVar14;
      if (lVar1 != 0) {
        iVar10 = (int)piVar11;
        if (piVar9 != piVar9 + (longlong)iVar10 * 4) {
          piVar6 = piVar9;
          do {
            if (((piVar6[1] == *(int *)(lVar1 + 0x30) && piVar6[2] == *(int *)(lVar1 + 0x34)) &&
                piVar6[3] == *(int *)(lVar1 + 0x38)) && *piVar6 == *(int *)(lVar1 + 0x2c)) {
              piVar7 = local_res18;
              if ((int)((longlong)piVar6 - (longlong)piVar9 >> 4) != -1) goto LAB_14240e2a7;
              break;
            }
            piVar6 = piVar6 + 4;
          } while (piVar6 != piVar9 + (longlong)iVar10 * 4);
        }
        local_40 = iVar10 + 1;
        if ((int)piVar13 < (int)local_40) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,piVar11);
          piVar13 = (int *)(ulonglong)local_3c;
          piVar9 = local_48;
        }
        piVar11 = (int *)(ulonglong)local_40;
        iVar2 = *(int *)(lVar1 + 0x30);
        iVar3 = *(int *)(lVar1 + 0x34);
        iVar4 = *(int *)(lVar1 + 0x38);
        piVar7 = piVar9 + (longlong)iVar10 * 4;
        *piVar7 = *(int *)(lVar1 + 0x2c);
        piVar7[1] = iVar2;
        piVar7[2] = iVar3;
        piVar7[3] = iVar4;
        piVar7 = local_res18;
      }
LAB_14240e2a7:
      iVar10 = (int)piVar11;
      plVar14 = plVar14 + 1;
      piVar8 = (int *)((longlong)piVar8 + 1);
      param_2 = local_res10;
    } while (piVar8 != piVar7);
  }
  local_res10 = local_res10 & 0xffffffffffffff00;
  AlgoImpl::
  IntroSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_f34bf2750abe2b63b4e62b5d67307e3c>_>_>
            (piVar9,(longlong)iVar10,0,&local_res10);
  for (piVar7 = piVar9; piVar7 != piVar9 + (longlong)iVar10 * 4; piVar7 = piVar7 + 4) {
    uVar5 = FCrc::MemCrc32(piVar7,0x10,piVar12);
    piVar12 = (int *)(ulonglong)uVar5;
  }
  FString::PrintfImpl(param_2,L"%08X%08X",local_res8,piVar12);
  if (piVar9 != (int *)0x0) {
    FMemory::Free(piVar9);
  }
  return param_2;
}



// FUNCTION 14240e370 FUN_14240e370 body=19 status=ok
// SIG undefined FUN_14240e370(void)

undefined8 FUN_14240e370(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x458) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x6f0);
}



// FUNCTION 14240e390 GetDesc body=831 status=ok
// SIG undefined GetDesc(void)

undefined8 UDialogueVoice::GetDesc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  local_a8 = (undefined2 *)0x0;
  local_a0 = 0;
  puVar7 = (undefined8 *)FName::FName(local_res18,L"Gender",1);
  lVar8 = FUN_1405dfb00(uVar9,*puVar7);
  uVar9 = FUN_1417373a0(*(undefined8 *)(lVar8 + 0x70),local_78,*(undefined1 *)(param_1 + 0x28));
  puVar7 = (undefined8 *)FText::ToString(uVar9);
  pvVar3 = (void *)*puVar7;
  iVar13 = *(int *)(puVar7 + 1) + -1;
  if (*(int *)(puVar7 + 1) == 0) {
    iVar13 = 0;
  }
  if (iVar13 != 0) {
    local_a0 = CONCAT44(local_a0._4_4_,iVar13 + 1);
    if (0 < iVar13 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    }
    puVar11 = local_a8;
    ::_guard_xfg_dispatch_icall_nop(local_a8,pvVar3,(longlong)iVar13 * 2);
    puVar11[iVar13] = 0;
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    puVar7 = (undefined8 *)FName::FName(local_res20,L"Plurality",1);
    lVar8 = FUN_1405dfb00(uVar9,*puVar7);
    local_98 = (void *)0x0;
    local_90 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    pvVar3 = local_98;
    FGenericPlatformString::Convert<char,wchar_t>(local_98,3,&DAT_14508a5f4,3,0x3f);
    uVar5 = local_a0;
    if (((int)local_90 != 0) && (iVar13 = (int)local_90 + -1, iVar13 != 0)) {
      iVar4 = (int)local_a0;
      lVar10 = (longlong)(int)local_a0;
      iVar6 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
      local_a0 = CONCAT44(local_a0._4_4_,iVar6);
      if (local_a0._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar5 & 0xffffffff);
      }
      puVar11 = local_a8 + (lVar10 - (ulonglong)(iVar4 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar11,pvVar3,(longlong)iVar13 * 2);
      puVar11[iVar13] = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    uVar9 = FUN_1417373a0(*(undefined8 *)(lVar8 + 0x70),local_60,*(undefined1 *)(param_1 + 0x29));
    puVar7 = (undefined8 *)FText::ToString(uVar9);
    uVar5 = local_a0;
    pvVar3 = (void *)*puVar7;
    iVar13 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar13 = 0;
    }
    if (iVar13 != 0) {
      iVar4 = (int)local_a0;
      lVar8 = (longlong)(int)local_a0;
      iVar6 = (uint)((int)local_a0 == 0) + (int)local_a0 + iVar13;
      local_a0 = CONCAT44(local_a0._4_4_,iVar6);
      if (local_a0._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar5 & 0xffffffff);
      }
      puVar11 = local_a8 + (lVar8 - (ulonglong)(iVar4 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar11,pvVar3,(longlong)iVar13 * 2);
      puVar11[iVar13] = 0;
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  local_res10 = *(undefined8 *)(param_1 + 0x18);
  puVar11 = &DAT_143f3eda8;
  if ((int)local_a0 != 0) {
    puVar11 = local_a8;
  }
  FName::ToString(&local_res10,&local_88);
  puVar12 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar12 = local_88;
  }
  FString::PrintfImpl(param_2,L"%s (%s)",puVar12,puVar11);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14240e6d0 GetDesc body=33 status=ok
// SIG undefined GetDesc(void)

undefined8 UDialogueWave::GetDesc(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Dialogue Wave Description");
  return param_2;
}



// FUNCTION 14240e720 FUN_14240e720 body=268 status=ok
// SIG undefined FUN_14240e720(void)

int * FUN_14240e720(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  lVar3 = *(longlong *)(param_1 + 0xe0);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x50,local_res8,&local_res20);
  if ((local_res8[0] == -1) ||
     (lVar3 = *(longlong *)(lVar3 + 0x50) + (longlong)local_res8[0] * 0x14, lVar3 == 0)) {
    return (int *)0x0;
  }
  iVar1 = *(int *)(lVar3 + 8);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  if (*(int *)(param_1 + 0x7a0) != *(int *)(param_1 + 0x7cc)) {
    lVar3 = *(longlong *)(param_1 + 0x7d8);
    if (*(longlong *)(param_1 + 0x7d8) == 0) {
      lVar3 = param_1 + 2000;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x7e0) - 1U & (longlong)iVar1) * 4);
    if (iVar2 != -1) {
      while (piVar5 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x798)),
            *piVar5 != iVar1) {
        iVar2 = piVar5[6];
        if (iVar2 == -1) {
          return (int *)0x0;
        }
      }
      if (iVar2 != -1) goto LAB_14240e809;
    }
  }
  piVar5 = (int *)0x0;
LAB_14240e809:
  piVar4 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  return piVar4;
}



// FUNCTION 14240e830 GetFastRawDistribution body=33 status=ok
// SIG undefined GetFastRawDistribution(void)

char * FRawDistributionFloat::GetFastRawDistribution(char *param_1)

{
  if ((((*param_1 == '\x01') && (DAT_146531ff4 != 0)) && (*(int *)(param_1 + 0x18) != 0)) &&
     (param_1[1] != '\0')) {
    return param_1;
  }
  return (char *)0x0;
}



// FUNCTION 14240e870 FUN_14240e870 body=87 status=ok
// SIG undefined FUN_14240e870(void)

undefined4 * FUN_14240e870(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar1 = **(longlong **)(param_1 + 0x98);
  }
  if (lVar1 == 0) {
    *param_2 = 0;
    return param_2;
  }
  (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x2e0))(*(longlong **)(lVar1 + 0x68),local_res8);
  *param_2 = local_res8[0];
  return param_2;
}



// FUNCTION 14240e8d0 GetInRange body=542 status=ok
// SIG undefined GetInRange(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UDistributionFloatConstantCurve::GetInRange(longlong param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar15;
  undefined1 auVar21 [16];
  
  uVar3 = *(uint *)(param_1 + 0x18);
  lVar13 = (longlong)(int)uVar3;
  if (uVar3 == 0) {
    *param_2 = 0.0;
    *param_3 = 0.0;
    return;
  }
  auVar27._0_12_ = ZEXT812(0x7f7fc99e);
  auVar27._12_4_ = 0;
  uVar11 = 0;
  auVar23._0_12_ = ZEXT812(0xff7fc99e);
  auVar23._12_4_ = 0;
  uVar14 = 0;
  if ((0 < (int)uVar3) && (7 < uVar3)) {
    lVar12 = *(longlong *)(param_1 + 0x10);
    uVar9 = uVar3 & 0x80000007;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    lVar8 = 0x28;
    uVar15 = uVar11;
    auVar23 = _DAT_144101750;
    auVar27 = _DAT_143f39bc0;
    auVar28 = _DAT_143f39bc0;
    auVar29 = _DAT_144101750;
    do {
      uVar14 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar14;
      uVar11 = uVar11 + 8;
      uVar1 = *(undefined4 *)(lVar8 + -0x28 + lVar12);
      auVar20._4_4_ = *(undefined4 *)(lVar8 + lVar12);
      auVar20._0_4_ = uVar1;
      uVar2 = *(undefined4 *)(lVar8 + 0x50 + lVar12);
      auVar20._8_4_ = *(undefined4 *)(lVar8 + lVar12);
      auVar20._12_4_ = *(undefined4 *)(lVar8 + 0x14 + lVar12);
      auVar24._8_8_ = auVar20._8_8_;
      auVar24._4_4_ = *(undefined4 *)(lVar8 + -0x14 + lVar12);
      auVar24._0_4_ = uVar1;
      auVar27 = minps(auVar27,auVar24);
      auVar23 = maxps(auVar23,auVar24);
      uVar1 = *(undefined4 *)(lVar8 + 0x28 + lVar12);
      auVar22._4_4_ = uVar2;
      auVar22._0_4_ = uVar1;
      auVar22._8_4_ = uVar2;
      auVar22._12_4_ = *(undefined4 *)(lVar8 + 100 + lVar12);
      auVar21._8_8_ = auVar22._8_8_;
      auVar21._4_4_ = *(undefined4 *)(lVar8 + 0x3c + lVar12);
      auVar21._0_4_ = uVar1;
      auVar28 = minps(auVar28,auVar21);
      auVar29 = maxps(auVar29,auVar21);
      lVar8 = lVar8 + 0xa0;
    } while ((longlong)uVar11 < (longlong)(int)(uVar3 - uVar9));
    auVar24 = maxps(auVar23,auVar29);
    auVar4._4_8_ = auVar21._8_8_;
    auVar4._0_4_ = auVar24._4_4_;
    auVar29._0_8_ = auVar4._0_8_ << 0x20;
    auVar29._8_4_ = auVar24._8_4_;
    auVar29._12_4_ = auVar24._12_4_;
    auVar27 = minps(auVar27,auVar28);
    auVar28._8_8_ = auVar29._8_8_;
    auVar28._0_8_ = auVar24._8_8_;
    auVar23 = maxps(auVar28,auVar24);
    auVar5._4_8_ = auVar24._8_8_;
    auVar5._0_4_ = auVar27._4_4_;
    auVar25._0_8_ = auVar5._0_8_ << 0x20;
    auVar25._8_4_ = auVar27._8_4_;
    auVar25._12_4_ = auVar27._12_4_;
    auVar26._8_8_ = auVar25._8_8_;
    auVar26._0_8_ = auVar27._8_8_;
    auVar27 = minps(auVar26,auVar27);
    if (auVar23._0_4_ <= auVar23._4_4_) {
      auVar23._0_4_ = auVar23._4_4_;
    }
    if (auVar27._4_4_ <= auVar27._0_4_) {
      auVar27._0_4_ = auVar27._4_4_;
    }
  }
  fVar16 = auVar23._0_4_;
  fVar17 = auVar27._0_4_;
  lVar12 = (longlong)(int)uVar14;
  if (lVar12 < lVar13) {
    if (3 < lVar13 - lVar12) {
      lVar8 = *(longlong *)(param_1 + 0x10);
      lVar7 = lVar12 * 0x14;
      lVar10 = ((lVar13 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar10 * 4;
      do {
        fVar17 = *(float *)(lVar7 + lVar8);
        fVar16 = fVar17;
        if (fVar17 <= auVar23._0_4_) {
          fVar16 = auVar23._0_4_;
        }
        fVar19 = *(float *)(lVar8 + -0x28 + lVar7 + 0x50);
        if (auVar27._0_4_ <= fVar17) {
          fVar17 = auVar27._0_4_;
        }
        fVar18 = *(float *)(lVar7 + 0x14 + lVar8);
        fVar6 = fVar18;
        if (fVar18 <= fVar16) {
          fVar6 = fVar16;
        }
        if (fVar17 <= fVar18) {
          fVar18 = fVar17;
        }
        fVar17 = fVar19;
        if (fVar19 <= fVar6) {
          fVar17 = fVar6;
        }
        if (fVar18 <= fVar19) {
          fVar19 = fVar18;
        }
        fVar16 = *(float *)(lVar7 + 0x3c + lVar8);
        fVar18 = fVar16;
        if (fVar16 <= fVar17) {
          fVar18 = fVar17;
        }
        if (fVar19 <= fVar16) {
          fVar16 = fVar19;
        }
        auVar23 = ZEXT416((uint)fVar18);
        auVar27 = ZEXT416((uint)fVar16);
        lVar10 = lVar10 + -1;
        lVar7 = lVar7 + 0x50;
      } while (lVar10 != 0);
    }
    fVar16 = auVar23._0_4_;
    fVar17 = auVar27._0_4_;
    if (lVar12 < lVar13) {
      lVar8 = lVar12 * 0x14;
      lVar13 = lVar13 - lVar12;
      do {
        fVar17 = *(float *)(lVar8 + *(longlong *)(param_1 + 0x10));
        lVar8 = lVar8 + 0x14;
        fVar16 = fVar17;
        if (fVar17 <= auVar23._0_4_) {
          fVar16 = auVar23._0_4_;
        }
        if (auVar27._0_4_ <= fVar17) {
          fVar17 = auVar27._0_4_;
        }
        auVar23 = ZEXT416((uint)fVar16);
        auVar27 = ZEXT416((uint)fVar17);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  *param_2 = fVar17;
  *param_3 = fVar16;
  return;
}



// FUNCTION 14240eaf0 GetInRange body=544 status=ok
// SIG undefined GetInRange(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UDistributionFloatUniformCurve::GetInRange(longlong param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar15;
  undefined1 auVar21 [16];
  
  uVar3 = *(uint *)(param_1 + 0x18);
  lVar13 = (longlong)(int)uVar3;
  if (uVar3 == 0) {
    *param_2 = 0.0;
    *param_3 = 0.0;
    return;
  }
  auVar27._0_12_ = ZEXT812(0x7f7fc99e);
  auVar27._12_4_ = 0;
  uVar11 = 0;
  auVar23._0_12_ = ZEXT812(0xff7fc99e);
  auVar23._12_4_ = 0;
  uVar14 = 0;
  if ((0 < (int)uVar3) && (7 < uVar3)) {
    lVar12 = *(longlong *)(param_1 + 0x10);
    uVar9 = uVar3 & 0x80000007;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    lVar8 = 0x40;
    uVar15 = uVar11;
    auVar23 = _DAT_144101750;
    auVar27 = _DAT_143f39bc0;
    auVar28 = _DAT_143f39bc0;
    auVar29 = _DAT_144101750;
    do {
      uVar14 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar14;
      uVar11 = uVar11 + 8;
      uVar1 = *(undefined4 *)(lVar8 + -0x40 + lVar12);
      auVar20._4_4_ = *(undefined4 *)(lVar8 + lVar12);
      auVar20._0_4_ = uVar1;
      uVar2 = *(undefined4 *)(lVar8 + 0x80 + lVar12);
      auVar20._8_4_ = *(undefined4 *)(lVar8 + lVar12);
      auVar20._12_4_ = *(undefined4 *)(lVar8 + 0x20 + lVar12);
      auVar24._8_8_ = auVar20._8_8_;
      auVar24._4_4_ = *(undefined4 *)(lVar8 + -0x20 + lVar12);
      auVar24._0_4_ = uVar1;
      auVar27 = minps(auVar27,auVar24);
      auVar23 = maxps(auVar23,auVar24);
      uVar1 = *(undefined4 *)(lVar8 + 0x40 + lVar12);
      auVar22._4_4_ = uVar2;
      auVar22._0_4_ = uVar1;
      auVar22._8_4_ = uVar2;
      auVar22._12_4_ = *(undefined4 *)(lVar8 + 0xa0 + lVar12);
      auVar21._8_8_ = auVar22._8_8_;
      auVar21._4_4_ = *(undefined4 *)(lVar8 + 0x60 + lVar12);
      auVar21._0_4_ = uVar1;
      auVar28 = minps(auVar28,auVar21);
      auVar29 = maxps(auVar29,auVar21);
      lVar8 = lVar8 + 0x100;
    } while ((longlong)uVar11 < (longlong)(int)(uVar3 - uVar9));
    auVar24 = maxps(auVar23,auVar29);
    auVar4._4_8_ = auVar21._8_8_;
    auVar4._0_4_ = auVar24._4_4_;
    auVar29._0_8_ = auVar4._0_8_ << 0x20;
    auVar29._8_4_ = auVar24._8_4_;
    auVar29._12_4_ = auVar24._12_4_;
    auVar27 = minps(auVar27,auVar28);
    auVar28._8_8_ = auVar29._8_8_;
    auVar28._0_8_ = auVar24._8_8_;
    auVar23 = maxps(auVar28,auVar24);
    auVar5._4_8_ = auVar24._8_8_;
    auVar5._0_4_ = auVar27._4_4_;
    auVar25._0_8_ = auVar5._0_8_ << 0x20;
    auVar25._8_4_ = auVar27._8_4_;
    auVar25._12_4_ = auVar27._12_4_;
    auVar26._8_8_ = auVar25._8_8_;
    auVar26._0_8_ = auVar27._8_8_;
    auVar27 = minps(auVar26,auVar27);
    if (auVar23._0_4_ <= auVar23._4_4_) {
      auVar23._0_4_ = auVar23._4_4_;
    }
    if (auVar27._4_4_ <= auVar27._0_4_) {
      auVar27._0_4_ = auVar27._4_4_;
    }
  }
  fVar16 = auVar23._0_4_;
  fVar17 = auVar27._0_4_;
  lVar12 = (longlong)(int)uVar14;
  if (lVar12 < lVar13) {
    if (3 < lVar13 - lVar12) {
      lVar8 = *(longlong *)(param_1 + 0x10);
      lVar7 = lVar12 << 5;
      lVar10 = ((lVar13 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar10 * 4;
      do {
        fVar17 = *(float *)(lVar7 + lVar8);
        fVar16 = fVar17;
        if (fVar17 <= auVar23._0_4_) {
          fVar16 = auVar23._0_4_;
        }
        fVar19 = *(float *)(lVar8 + -0x40 + lVar7 + 0x80);
        if (auVar27._0_4_ <= fVar17) {
          fVar17 = auVar27._0_4_;
        }
        fVar18 = *(float *)(lVar7 + 0x20 + lVar8);
        fVar6 = fVar18;
        if (fVar18 <= fVar16) {
          fVar6 = fVar16;
        }
        if (fVar17 <= fVar18) {
          fVar18 = fVar17;
        }
        fVar17 = fVar19;
        if (fVar19 <= fVar6) {
          fVar17 = fVar6;
        }
        if (fVar18 <= fVar19) {
          fVar19 = fVar18;
        }
        fVar16 = *(float *)(lVar7 + 0x60 + lVar8);
        fVar18 = fVar16;
        if (fVar16 <= fVar17) {
          fVar18 = fVar17;
        }
        if (fVar19 <= fVar16) {
          fVar16 = fVar19;
        }
        auVar23 = ZEXT416((uint)fVar18);
        auVar27 = ZEXT416((uint)fVar16);
        lVar10 = lVar10 + -1;
        lVar7 = lVar7 + 0x80;
      } while (lVar10 != 0);
    }
    fVar16 = auVar23._0_4_;
    fVar17 = auVar27._0_4_;
    if (lVar12 < lVar13) {
      lVar8 = lVar12 << 5;
      lVar13 = lVar13 - lVar12;
      do {
        fVar17 = *(float *)(lVar8 + *(longlong *)(param_1 + 0x10));
        lVar8 = lVar8 + 0x20;
        fVar16 = fVar17;
        if (fVar17 <= auVar23._0_4_) {
          fVar16 = auVar23._0_4_;
        }
        if (auVar27._0_4_ <= fVar17) {
          fVar17 = auVar27._0_4_;
        }
        auVar23 = ZEXT416((uint)fVar16);
        auVar27 = ZEXT416((uint)fVar17);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  *param_2 = fVar17;
  *param_3 = fVar16;
  return;
}



// FUNCTION 14240ed10 GetInRange body=544 status=ok
// SIG undefined GetInRange(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UDistributionVectorConstantCurve::GetInRange(longlong param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar15;
  undefined1 auVar21 [16];
  
  uVar3 = *(uint *)(param_1 + 0x18);
  lVar13 = (longlong)(int)uVar3;
  if (uVar3 == 0) {
    *param_2 = 0.0;
    *param_3 = 0.0;
    return;
  }
  auVar27._0_12_ = ZEXT812(0x7f7fc99e);
  auVar27._12_4_ = 0;
  uVar11 = 0;
  auVar23._0_12_ = ZEXT812(0xff7fc99e);
  auVar23._12_4_ = 0;
  uVar14 = 0;
  if ((0 < (int)uVar3) && (7 < uVar3)) {
    lVar12 = *(longlong *)(param_1 + 0x10);
    uVar9 = uVar3 & 0x80000007;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    lVar8 = 0x58;
    uVar15 = uVar11;
    auVar23 = _DAT_144101750;
    auVar27 = _DAT_143f39bc0;
    auVar28 = _DAT_143f39bc0;
    auVar29 = _DAT_144101750;
    do {
      uVar14 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar14;
      uVar11 = uVar11 + 8;
      uVar1 = *(undefined4 *)(lVar8 + -0x58 + lVar12);
      auVar20._4_4_ = *(undefined4 *)(lVar8 + lVar12);
      auVar20._0_4_ = uVar1;
      uVar2 = *(undefined4 *)(lVar8 + 0xb0 + lVar12);
      auVar20._8_4_ = *(undefined4 *)(lVar8 + lVar12);
      auVar20._12_4_ = *(undefined4 *)(lVar8 + 0x2c + lVar12);
      auVar24._8_8_ = auVar20._8_8_;
      auVar24._4_4_ = *(undefined4 *)(lVar8 + -0x2c + lVar12);
      auVar24._0_4_ = uVar1;
      auVar27 = minps(auVar27,auVar24);
      auVar23 = maxps(auVar23,auVar24);
      uVar1 = *(undefined4 *)(lVar8 + 0x58 + lVar12);
      auVar22._4_4_ = uVar2;
      auVar22._0_4_ = uVar1;
      auVar22._8_4_ = uVar2;
      auVar22._12_4_ = *(undefined4 *)(lVar8 + 0xdc + lVar12);
      auVar21._8_8_ = auVar22._8_8_;
      auVar21._4_4_ = *(undefined4 *)(lVar8 + 0x84 + lVar12);
      auVar21._0_4_ = uVar1;
      auVar28 = minps(auVar28,auVar21);
      auVar29 = maxps(auVar29,auVar21);
      lVar8 = lVar8 + 0x160;
    } while ((longlong)uVar11 < (longlong)(int)(uVar3 - uVar9));
    auVar24 = maxps(auVar23,auVar29);
    auVar4._4_8_ = auVar21._8_8_;
    auVar4._0_4_ = auVar24._4_4_;
    auVar29._0_8_ = auVar4._0_8_ << 0x20;
    auVar29._8_4_ = auVar24._8_4_;
    auVar29._12_4_ = auVar24._12_4_;
    auVar27 = minps(auVar27,auVar28);
    auVar28._8_8_ = auVar29._8_8_;
    auVar28._0_8_ = auVar24._8_8_;
    auVar23 = maxps(auVar28,auVar24);
    auVar5._4_8_ = auVar24._8_8_;
    auVar5._0_4_ = auVar27._4_4_;
    auVar25._0_8_ = auVar5._0_8_ << 0x20;
    auVar25._8_4_ = auVar27._8_4_;
    auVar25._12_4_ = auVar27._12_4_;
    auVar26._8_8_ = auVar25._8_8_;
    auVar26._0_8_ = auVar27._8_8_;
    auVar27 = minps(auVar26,auVar27);
    if (auVar23._0_4_ <= auVar23._4_4_) {
      auVar23._0_4_ = auVar23._4_4_;
    }
    if (auVar27._4_4_ <= auVar27._0_4_) {
      auVar27._0_4_ = auVar27._4_4_;
    }
  }
  fVar16 = auVar23._0_4_;
  fVar17 = auVar27._0_4_;
  lVar12 = (longlong)(int)uVar14;
  if (lVar12 < lVar13) {
    if (3 < lVar13 - lVar12) {
      lVar8 = *(longlong *)(param_1 + 0x10);
      lVar10 = lVar12 * 0x2c;
      lVar7 = ((lVar13 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar7 * 4;
      do {
        fVar17 = *(float *)(lVar10 + lVar8);
        fVar16 = fVar17;
        if (fVar17 <= auVar23._0_4_) {
          fVar16 = auVar23._0_4_;
        }
        fVar19 = *(float *)(lVar8 + -0x58 + lVar10 + 0xb0);
        if (auVar27._0_4_ <= fVar17) {
          fVar17 = auVar27._0_4_;
        }
        fVar18 = *(float *)(lVar10 + 0x2c + lVar8);
        fVar6 = fVar18;
        if (fVar18 <= fVar16) {
          fVar6 = fVar16;
        }
        if (fVar17 <= fVar18) {
          fVar18 = fVar17;
        }
        fVar17 = fVar19;
        if (fVar19 <= fVar6) {
          fVar17 = fVar6;
        }
        if (fVar18 <= fVar19) {
          fVar19 = fVar18;
        }
        fVar16 = *(float *)(lVar10 + 0x84 + lVar8);
        fVar18 = fVar16;
        if (fVar16 <= fVar17) {
          fVar18 = fVar17;
        }
        if (fVar19 <= fVar16) {
          fVar16 = fVar19;
        }
        auVar23 = ZEXT416((uint)fVar18);
        auVar27 = ZEXT416((uint)fVar16);
        lVar7 = lVar7 + -1;
        lVar10 = lVar10 + 0xb0;
      } while (lVar7 != 0);
    }
    fVar16 = auVar23._0_4_;
    fVar17 = auVar27._0_4_;
    if (lVar12 < lVar13) {
      lVar8 = lVar12 * 0x2c;
      lVar13 = lVar13 - lVar12;
      do {
        fVar17 = *(float *)(lVar8 + *(longlong *)(param_1 + 0x10));
        lVar8 = lVar8 + 0x2c;
        fVar16 = fVar17;
        if (fVar17 <= auVar23._0_4_) {
          fVar16 = auVar23._0_4_;
        }
        if (auVar27._0_4_ <= fVar17) {
          fVar17 = auVar27._0_4_;
        }
        auVar23 = ZEXT416((uint)fVar16);
        auVar27 = ZEXT416((uint)fVar17);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  *param_2 = fVar17;
  *param_3 = fVar16;
  return;
}



// FUNCTION 14240ef30 GetInRange body=567 status=ok
// SIG undefined GetInRange(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UDistributionVectorUniformCurve::GetInRange(longlong param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar15;
  undefined1 auVar21 [16];
  
  uVar3 = *(uint *)(param_1 + 0x18);
  lVar13 = (longlong)(int)uVar3;
  if (uVar3 == 0) {
    *param_2 = 0.0;
    *param_3 = 0.0;
    return;
  }
  auVar27._0_12_ = ZEXT812(0x7f7fc99e);
  auVar27._12_4_ = 0;
  uVar11 = 0;
  auVar23._0_12_ = ZEXT812(0xff7fc99e);
  auVar23._12_4_ = 0;
  uVar14 = 0;
  if ((0 < (int)uVar3) && (7 < uVar3)) {
    lVar12 = *(longlong *)(param_1 + 0x10);
    uVar9 = uVar3 & 0x80000007;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    lVar8 = 0xa0;
    uVar15 = uVar11;
    auVar23 = _DAT_144101750;
    auVar27 = _DAT_143f39bc0;
    auVar28 = _DAT_143f39bc0;
    auVar29 = _DAT_144101750;
    do {
      uVar14 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar14;
      uVar11 = uVar11 + 8;
      uVar1 = *(undefined4 *)(lVar8 + -0xa0 + lVar12);
      auVar20._4_4_ = *(undefined4 *)(lVar8 + lVar12);
      auVar20._0_4_ = uVar1;
      uVar2 = *(undefined4 *)(lVar8 + 0x140 + lVar12);
      auVar20._8_4_ = *(undefined4 *)(lVar8 + lVar12);
      auVar20._12_4_ = *(undefined4 *)(lVar8 + 0x50 + lVar12);
      auVar24._8_8_ = auVar20._8_8_;
      auVar24._4_4_ = *(undefined4 *)(lVar8 + -0x50 + lVar12);
      auVar24._0_4_ = uVar1;
      auVar27 = minps(auVar27,auVar24);
      auVar23 = maxps(auVar23,auVar24);
      uVar1 = *(undefined4 *)(lVar8 + 0xa0 + lVar12);
      auVar22._4_4_ = uVar2;
      auVar22._0_4_ = uVar1;
      auVar22._8_4_ = uVar2;
      auVar22._12_4_ = *(undefined4 *)(lVar8 + 400 + lVar12);
      auVar21._8_8_ = auVar22._8_8_;
      auVar21._4_4_ = *(undefined4 *)(lVar8 + 0xf0 + lVar12);
      auVar21._0_4_ = uVar1;
      auVar28 = minps(auVar28,auVar21);
      auVar29 = maxps(auVar29,auVar21);
      lVar8 = lVar8 + 0x280;
    } while ((longlong)uVar11 < (longlong)(int)(uVar3 - uVar9));
    auVar24 = maxps(auVar23,auVar29);
    auVar4._4_8_ = auVar21._8_8_;
    auVar4._0_4_ = auVar24._4_4_;
    auVar29._0_8_ = auVar4._0_8_ << 0x20;
    auVar29._8_4_ = auVar24._8_4_;
    auVar29._12_4_ = auVar24._12_4_;
    auVar27 = minps(auVar27,auVar28);
    auVar28._8_8_ = auVar29._8_8_;
    auVar28._0_8_ = auVar24._8_8_;
    auVar23 = maxps(auVar28,auVar24);
    auVar5._4_8_ = auVar24._8_8_;
    auVar5._0_4_ = auVar27._4_4_;
    auVar25._0_8_ = auVar5._0_8_ << 0x20;
    auVar25._8_4_ = auVar27._8_4_;
    auVar25._12_4_ = auVar27._12_4_;
    auVar26._8_8_ = auVar25._8_8_;
    auVar26._0_8_ = auVar27._8_8_;
    auVar27 = minps(auVar26,auVar27);
    if (auVar23._0_4_ <= auVar23._4_4_) {
      auVar23._0_4_ = auVar23._4_4_;
    }
    if (auVar27._4_4_ <= auVar27._0_4_) {
      auVar27._0_4_ = auVar27._4_4_;
    }
  }
  fVar16 = auVar23._0_4_;
  fVar17 = auVar27._0_4_;
  lVar12 = (longlong)(int)uVar14;
  if (lVar12 < lVar13) {
    if (3 < lVar13 - lVar12) {
      lVar8 = *(longlong *)(param_1 + 0x10);
      lVar7 = lVar12 * 0x50;
      lVar10 = ((lVar13 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar10 * 4;
      do {
        fVar17 = *(float *)(lVar7 + lVar8);
        fVar16 = fVar17;
        if (fVar17 <= auVar23._0_4_) {
          fVar16 = auVar23._0_4_;
        }
        fVar19 = *(float *)(lVar8 + -0xa0 + lVar7 + 0x140);
        if (auVar27._0_4_ <= fVar17) {
          fVar17 = auVar27._0_4_;
        }
        fVar18 = *(float *)(lVar7 + 0x50 + lVar8);
        fVar6 = fVar18;
        if (fVar18 <= fVar16) {
          fVar6 = fVar16;
        }
        if (fVar17 <= fVar18) {
          fVar18 = fVar17;
        }
        fVar17 = fVar19;
        if (fVar19 <= fVar6) {
          fVar17 = fVar6;
        }
        if (fVar18 <= fVar19) {
          fVar19 = fVar18;
        }
        fVar16 = *(float *)(lVar7 + 0xf0 + lVar8);
        fVar18 = fVar16;
        if (fVar16 <= fVar17) {
          fVar18 = fVar17;
        }
        if (fVar19 <= fVar16) {
          fVar16 = fVar19;
        }
        auVar23 = ZEXT416((uint)fVar18);
        auVar27 = ZEXT416((uint)fVar16);
        lVar10 = lVar10 + -1;
        lVar7 = lVar7 + 0x140;
      } while (lVar10 != 0);
    }
    fVar16 = auVar23._0_4_;
    fVar17 = auVar27._0_4_;
    if (lVar12 < lVar13) {
      lVar8 = lVar12 * 0x50;
      lVar13 = lVar13 - lVar12;
      do {
        fVar17 = *(float *)(lVar8 + *(longlong *)(param_1 + 0x10));
        lVar8 = lVar8 + 0x50;
        fVar16 = fVar17;
        if (fVar17 <= auVar23._0_4_) {
          fVar16 = auVar23._0_4_;
        }
        if (auVar27._0_4_ <= fVar17) {
          fVar17 = auVar27._0_4_;
        }
        auVar23 = ZEXT416((uint)fVar16);
        auVar27 = ZEXT416((uint)fVar17);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  *param_2 = fVar17;
  *param_3 = fVar16;
  return;
}



// FUNCTION 14240f4d0 GetKeyOut body=660 status=ok
// SIG undefined GetKeyOut(void)

ulonglong UDistributionVectorUniform::GetKeyOut(longlong param_1,int param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 local_28;
  uint local_20 [2];
  undefined8 local_18;
  uint local_10 [2];
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar5 = 0;
  local_10[0] = *(uint *)(param_1 + 0x18);
  local_18 = uVar1;
  local_28 = *(ulonglong *)(param_1 + 0x1c);
  local_18._4_4_ = (uint)(uVar1 >> 0x20);
  local_18._0_4_ = (uint)uVar1;
  local_20[0] = *(uint *)(param_1 + 0x24);
  uVar7 = uVar5;
  do {
    cVar2 = *(char *)(param_1 + 0x2d + uVar5);
    if (cVar2 == '\0') {
      if (uVar5 == 0) {
        puVar4 = (uint *)&local_28;
        uVar8 = (uint)local_18;
      }
      else if (uVar5 == 1) {
        puVar4 = (uint *)((longlong)&local_28 + 4);
        uVar8 = local_18._4_4_;
      }
      else {
        puVar4 = local_20;
        uVar8 = local_10[0];
      }
LAB_14240f581:
      *puVar4 = uVar8;
    }
    else if (cVar2 == '\x02') {
      if (uVar5 == 0) {
        puVar4 = (uint *)&local_28;
        uVar8 = (uint)local_18 ^ 0x80000000;
      }
      else if (uVar5 == 1) {
        puVar4 = (uint *)((longlong)&local_28 + 4);
        uVar8 = local_18._4_4_ ^ 0x80000000;
      }
      else {
        puVar4 = local_20;
        uVar8 = local_10[0] ^ 0x80000000;
      }
      goto LAB_14240f581;
    }
    cVar2 = *(char *)(param_1 + 0x2e + uVar5);
    iVar6 = (int)uVar7;
    if (cVar2 == '\0') {
      if (iVar6 == -1) {
        puVar4 = (uint *)&local_18;
      }
      else {
        puVar4 = (uint *)((longlong)&local_18 + 4);
        if (iVar6 != 0) {
          puVar4 = local_10;
        }
      }
      if (iVar6 == -1) {
        puVar3 = (uint *)&local_28;
      }
      else {
        puVar3 = (uint *)((longlong)&local_28 + 4);
        if (iVar6 != 0) {
          puVar3 = local_20;
        }
      }
      *puVar3 = *puVar4;
    }
    else if (cVar2 == '\x02') {
      if (iVar6 == -1) {
        puVar4 = (uint *)&local_18;
      }
      else {
        puVar4 = (uint *)((longlong)&local_18 + 4);
        if (iVar6 != 0) {
          puVar4 = local_10;
        }
      }
      if (iVar6 == -1) {
        local_28 = CONCAT44(local_28._4_4_,*puVar4) ^ 0x80000000;
      }
      else {
        puVar3 = (uint *)((longlong)&local_28 + 4);
        if (iVar6 != 0) {
          puVar3 = local_20;
        }
        *puVar3 = *puVar4 ^ 0x80000000;
      }
    }
    cVar2 = *(char *)(param_1 + 0x2f + uVar5);
    if (cVar2 == '\0') {
      if (iVar6 == -2) {
        puVar4 = (uint *)&local_18;
      }
      else {
        puVar4 = (uint *)((longlong)&local_18 + 4);
        if (iVar6 != -1) {
          puVar4 = local_10;
        }
      }
      if (iVar6 == -2) {
        puVar3 = (uint *)&local_28;
      }
      else {
        puVar3 = (uint *)((longlong)&local_28 + 4);
        if (iVar6 != -1) {
          puVar3 = local_20;
        }
      }
      *puVar3 = *puVar4;
    }
    else if (cVar2 == '\x02') {
      if (iVar6 == -2) {
        puVar4 = (uint *)&local_18;
      }
      else {
        puVar4 = (uint *)((longlong)&local_18 + 4);
        if (iVar6 != -1) {
          puVar4 = local_10;
        }
      }
      if (iVar6 == -2) {
        local_28 = CONCAT44(local_28._4_4_,*puVar4) ^ 0x80000000;
      }
      else {
        puVar3 = (uint *)((longlong)&local_28 + 4);
        if (iVar6 != -1) {
          puVar3 = local_20;
        }
        *puVar3 = *puVar4 ^ 0x80000000;
      }
    }
    uVar7 = (ulonglong)(iVar6 + 3);
    uVar5 = uVar5 + 3;
  } while ((longlong)uVar5 < 3);
  cVar2 = *(char *)(param_1 + 0x2c);
  uVar8 = local_20[0];
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      uVar7 = (ulonglong)local_28._4_4_;
      local_20[0] = (uint)local_28;
      goto LAB_14240f71a;
    }
    if (cVar2 == '\x03') {
      uVar7 = (ulonglong)local_28._4_4_;
      local_20[0] = local_28._4_4_;
      goto LAB_14240f71a;
    }
    uVar8 = (uint)local_28;
    if (cVar2 != '\x04') {
      uVar7 = (ulonglong)local_28._4_4_;
      goto LAB_14240f71a;
    }
  }
  local_20[0] = uVar8;
  uVar7 = local_28 & 0xffffffff;
LAB_14240f71a:
  if (param_2 == 0) {
    uVar7 = local_28 & 0xffffffff;
  }
  else {
    if (param_2 == 1) {
      return uVar1 & 0xffffffff;
    }
    if (param_2 != 2) {
      if (param_2 == 3) {
        return (ulonglong)local_18._4_4_;
      }
      if (param_2 == 4) {
        return (ulonglong)local_20[0];
      }
      return (ulonglong)local_10[0];
    }
  }
  return uVar7;
}



// FUNCTION 14240f770 FUN_14240f770 body=166 status=ok
// SIG undefined FUN_14240f770(void)

undefined4 FUN_14240f770(longlong param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)param_3 * 0x50);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x14 + (longlong)param_3 * 0x50);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2c8))((longlong *)(param_1 + -0x28),&local_28);
  iVar2 = (int)param_2 / 2;
  if ((param_2 & 1) != 0) {
    if (iVar2 == 0) {
      return uStack_1c;
    }
    if (iVar2 == 1) {
      return (undefined4)local_18;
    }
    return local_18._4_4_;
  }
  if (iVar2 == 0) {
    return local_28;
  }
  if (iVar2 == 1) {
    return uStack_24;
  }
  return uStack_20;
}



// FUNCTION 14240f820 GetLocalizationKey body=323 status=ok
// SIG undefined GetLocalizationKey(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FDialogueContextMapping::GetLocalizationKey(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined1 local_90 [24];
  longlong local_78 [4];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_48 = 0xffffffff;
  local_78[0] = 0;
  local_78[1] = 0;
  local_58 = 0;
  local_50 = 0;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  uVar1 = FDialogueContext::GetContextHash(param_1,local_90);
  FStringFormatArg::FStringFormatArg(local_b0,uVar1);
  local_d8[0] = 0;
  local_d8[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
  FGenericPlatformString::Memcpy(local_d8[0],L"ContextHash",0x18);
  local_c0 = local_d8;
  local_b8 = local_b0;
  FUN_141c36050(local_78,local_c8,&local_c0,0);
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x20);
  }
  FString::Format(param_2,puVar2,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14240f9a0 GetMaxValue body=119 status=ok
// SIG undefined GetMaxValue(void)

undefined4 * UDistributionVectorUniform::GetMaxValue(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  
  cVar1 = *(char *)(param_1 + 0x54);
  uVar4 = (undefined4)*(undefined8 *)(param_1 + 0x38);
  uStack_14 = uVar4;
  if ((cVar1 == '\x01') ||
     (((uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
       uVar2 = uStack_14, uVar3 = uVar4, cVar1 != '\x02' && (uVar3 = uStack_14, cVar1 != '\x03')) &&
      (uVar2 = uVar4, uVar3 = uVar4, cVar1 != '\x04')))) {
    uVar2 = uStack_14;
    uVar3 = *(undefined4 *)(param_1 + 0x40);
  }
  *param_2 = uVar4;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return param_2;
}



// FUNCTION 14240fa20 GetMinMaxValue body=41 status=ok
// SIG undefined GetMinMaxValue(void)

undefined8
UDistributionFloatUniformCurve::GetMinMaxValue
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FInterpCurve<FVector2D>::Eval(param_1 + 0x38,param_2,param_3,local_res8);
  return param_2;
}



// FUNCTION 14240fa50 GetMinMaxValue body=49 status=ok
// SIG undefined GetMinMaxValue(void)

undefined8
UDistributionVectorUniformCurve::GetMinMaxValue
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FInterpCurve<FTwoVectors>::Eval(param_1 + 0x38,param_2,param_3,&local_28);
  return param_2;
}



// FUNCTION 14240fa90 GetMinValue body=610 status=ok
// SIG undefined GetMinValue(void)

uint * UDistributionVectorUniform::GetMinValue(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_28;
  uint local_20 [2];
  undefined8 local_18;
  uint local_10 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = 0;
  local_10[0] = *(uint *)(param_1 + 0x40);
  local_18 = uVar1;
  local_28 = *(ulonglong *)(param_1 + 0x44);
  local_18._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  local_18._0_4_ = (uint)uVar1;
  local_20[0] = *(uint *)(param_1 + 0x4c);
  uVar7 = uVar5;
  do {
    cVar2 = *(char *)(param_1 + 0x55 + uVar5);
    if (cVar2 == '\0') {
      if (uVar5 == 0) {
        puVar4 = (uint *)&local_28;
        uVar8 = (uint)local_18;
      }
      else if (uVar5 == 1) {
        puVar4 = (uint *)((longlong)&local_28 + 4);
        uVar8 = local_18._4_4_;
      }
      else {
        puVar4 = local_20;
        uVar8 = local_10[0];
      }
LAB_14240fb41:
      *puVar4 = uVar8;
    }
    else if (cVar2 == '\x02') {
      if (uVar5 == 0) {
        puVar4 = (uint *)&local_28;
        uVar8 = (uint)local_18 ^ 0x80000000;
      }
      else if (uVar5 == 1) {
        puVar4 = (uint *)((longlong)&local_28 + 4);
        uVar8 = local_18._4_4_ ^ 0x80000000;
      }
      else {
        puVar4 = local_20;
        uVar8 = local_10[0] ^ 0x80000000;
      }
      goto LAB_14240fb41;
    }
    cVar2 = *(char *)(param_1 + 0x56 + uVar5);
    iVar6 = (int)uVar7;
    if (cVar2 == '\0') {
      if (iVar6 == -1) {
        puVar4 = (uint *)&local_18;
      }
      else {
        puVar4 = (uint *)((longlong)&local_18 + 4);
        if (iVar6 != 0) {
          puVar4 = local_10;
        }
      }
      if (iVar6 == -1) {
        puVar3 = (uint *)&local_28;
      }
      else {
        puVar3 = (uint *)((longlong)&local_28 + 4);
        if (iVar6 != 0) {
          puVar3 = local_20;
        }
      }
      *puVar3 = *puVar4;
    }
    else if (cVar2 == '\x02') {
      if (iVar6 == -1) {
        puVar4 = (uint *)&local_18;
      }
      else {
        puVar4 = (uint *)((longlong)&local_18 + 4);
        if (iVar6 != 0) {
          puVar4 = local_10;
        }
      }
      if (iVar6 == -1) {
        local_28 = CONCAT44(local_28._4_4_,*puVar4) ^ 0x80000000;
      }
      else {
        puVar3 = (uint *)((longlong)&local_28 + 4);
        if (iVar6 != 0) {
          puVar3 = local_20;
        }
        *puVar3 = *puVar4 ^ 0x80000000;
      }
    }
    cVar2 = *(char *)(param_1 + 0x57 + uVar5);
    if (cVar2 == '\0') {
      if (iVar6 == -2) {
        puVar4 = (uint *)&local_18;
      }
      else {
        puVar4 = (uint *)((longlong)&local_18 + 4);
        if (iVar6 != -1) {
          puVar4 = local_10;
        }
      }
      if (iVar6 == -2) {
        puVar3 = (uint *)&local_28;
      }
      else {
        puVar3 = (uint *)((longlong)&local_28 + 4);
        if (iVar6 != -1) {
          puVar3 = local_20;
        }
      }
      *puVar3 = *puVar4;
    }
    else if (cVar2 == '\x02') {
      if (iVar6 == -2) {
        puVar4 = (uint *)&local_18;
      }
      else {
        puVar4 = (uint *)((longlong)&local_18 + 4);
        if (iVar6 != -1) {
          puVar4 = local_10;
        }
      }
      if (iVar6 == -2) {
        local_28 = CONCAT44(local_28._4_4_,*puVar4) ^ 0x80000000;
      }
      else {
        puVar3 = (uint *)((longlong)&local_28 + 4);
        if (iVar6 != -1) {
          puVar3 = local_20;
        }
        *puVar3 = *puVar4 ^ 0x80000000;
      }
    }
    uVar7 = (ulonglong)(iVar6 + 3);
    uVar5 = uVar5 + 3;
    if (2 < (longlong)uVar5) {
      cVar2 = *(char *)(param_1 + 0x54);
      uVar8 = (uint)local_28;
      if ((cVar2 == '\x01') ||
         (((uVar10 = (uint)local_28, uVar9 = local_28._4_4_, cVar2 != '\x02' &&
           (uVar10 = local_28._4_4_, cVar2 != '\x03')) &&
          (uVar10 = (uint)local_28, uVar9 = (uint)local_28, uVar8 = local_28._4_4_, cVar2 != '\x04')
          ))) {
        uVar10 = local_20[0];
        uVar9 = uVar8;
      }
      *param_2 = (uint)local_28;
      param_2[1] = uVar9;
      param_2[2] = uVar10;
      return param_2;
    }
  } while( true );
}



// FUNCTION 14240fe80 GetOutRange body=54 status=ok
// SIG undefined GetOutRange(void)

void FRawDistributionFloat::GetOutRange(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  if ((((DAT_146531ff4 == 0) || (*(int *)(param_1 + 0x18) == 0)) || (*(char *)(param_1 + 1) == '\0')
      ) && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014240fea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x50))(lVar1 + 0x28);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  *param_3 = *(undefined4 *)(param_1 + 0x2c);
  return;
}



// FUNCTION 14240fec0 GetOutRange body=54 status=ok
// SIG undefined GetOutRange(void)

void FRawDistributionVector::GetOutRange(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  if ((((DAT_146531ff4 == 0) || (*(int *)(param_1 + 0x18) == 0)) || (*(char *)(param_1 + 1) == '\0')
      ) && (lVar1 = *(longlong *)(param_1 + 0x48), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014240fee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x50))(lVar1 + 0x28);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  *param_3 = *(undefined4 *)(param_1 + 0x2c);
  return;
}



// FUNCTION 14240ff10 GetOutRange body=192 status=ok
// SIG undefined GetOutRange(void)

void UDistributionFloatConstantCurve::GetOutRange
               (longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4);
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4);
    if (iVar1 != 1) {
      iVar2 = iVar1;
      if (*(char *)(param_1 + 0x20) == '\0') {
        iVar2 = iVar1 + -1;
      }
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar4 = iVar5 + 1;
          iVar3 = 0;
          if (iVar5 != iVar1 + -1) {
            iVar3 = iVar4;
          }
          CurveFloatFindIntervalBounds
                    (*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x14,
                     *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x14,param_2,param_3);
          iVar5 = iVar4;
        } while (iVar4 < iVar2);
      }
    }
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}



// FUNCTION 14240ffe0 GetOutRange body=236 status=ok
// SIG undefined GetOutRange(void)

void UDistributionFloatUniformCurve::GetOutRange(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    local_res8 = CONCAT44(DAT_1468b5d88._4_4_,(undefined4)DAT_1468b5d88);
    local_res10 = CONCAT44(DAT_1468b5d88._4_4_,(undefined4)DAT_1468b5d88);
  }
  else {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 4);
    local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 4);
    if (iVar1 != 1) {
      iVar2 = iVar1;
      if (*(char *)(param_1 + 0x20) == '\0') {
        iVar2 = iVar1 + -1;
      }
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          iVar5 = iVar4 + 1;
          iVar3 = 0;
          if (iVar4 != iVar1 + -1) {
            iVar3 = iVar5;
          }
          CurveVector2DFindIntervalBounds
                    ((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x10),
                     (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x10),&local_res8,&local_res10
                    );
          iVar4 = iVar5;
        } while (iVar5 < iVar2);
      }
    }
  }
  if (local_res8._4_4_ <= (float)local_res8) {
    local_res8._0_4_ = local_res8._4_4_;
  }
  if ((float)local_res10 <= local_res10._4_4_) {
    local_res10._0_4_ = local_res10._4_4_;
  }
  *param_2 = (float)local_res8;
  *param_3 = (float)local_res10;
  return;
}



// FUNCTION 1424100d0 GetOutRange body=152 status=ok
// SIG undefined GetOutRange(void)

void UDistributionVectorConstant::GetOutRange(longlong param_1,float *param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\x01') {
    fVar6 = *(float *)(param_1 + 0x10);
    fVar5 = *(float *)(param_1 + 0x18);
    uVar4 = (ulonglong)(uint)fVar6;
  }
  else if (cVar1 == '\x02') {
    fVar5 = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    uVar4 = (ulonglong)(uint)fVar5;
  }
  else if (cVar1 == '\x03') {
    fVar5 = *(float *)(param_1 + 0x14);
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x10);
    fVar6 = fVar5;
  }
  else if (cVar1 == '\x04') {
    fVar5 = *(float *)(param_1 + 0x10);
    uVar4 = (ulonglong)(uint)fVar5;
    fVar6 = fVar5;
  }
  else {
    uVar4 = *(ulonglong *)(param_1 + 0x10);
    fVar5 = *(float *)(param_1 + 0x18);
    fVar6 = (float)(uVar4 >> 0x20);
  }
  fVar2 = (float)uVar4;
  fVar3 = fVar2;
  if (fVar2 <= fVar6) {
    fVar3 = fVar6;
  }
  if (fVar6 <= fVar2) {
    fVar2 = fVar6;
  }
  if (fVar3 <= fVar5) {
    fVar3 = fVar5;
  }
  if (fVar5 <= fVar2) {
    fVar2 = fVar5;
  }
  *param_2 = fVar2;
  *param_3 = fVar3;
  return;
}



// FUNCTION 142410170 GetOutRange body=350 status=ok
// SIG undefined GetOutRange(void)

void UDistributionVectorConstantCurve::GetOutRange(longlong param_1,float *param_2,float *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  iVar2 = *(int *)(param_1 + 0x18);
  local_28._4_4_ = DAT_1468b5d94;
  local_38._0_4_ = DAT_1468b5d90;
  local_28._0_4_ = DAT_1468b5d90;
  local_30 = DAT_1468b5d98;
  local_20 = DAT_1468b5d98;
  local_38._4_4_ = DAT_1468b5d94;
  if (iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = *(undefined8 *)(lVar3 + 4);
    local_30 = *(float *)(lVar3 + 0xc);
    local_28 = *(undefined8 *)(lVar3 + 4);
    local_20 = *(float *)(lVar3 + 0xc);
    if (iVar2 != 1) {
      iVar7 = iVar2;
      if (*(char *)(param_1 + 0x20) == '\0') {
        iVar7 = iVar2 + -1;
      }
      iVar5 = 0;
      if (0 < iVar7) {
        do {
          iVar6 = iVar5 + 1;
          iVar4 = 0;
          if (iVar5 != iVar2 + -1) {
            iVar4 = iVar6;
          }
          CurveVectorFindIntervalBounds
                    ((longlong)iVar5 * 0x2c + *(longlong *)(param_1 + 0x10),
                     (longlong)iVar4 * 0x2c + *(longlong *)(param_1 + 0x10),&local_38,&local_28);
          iVar5 = iVar6;
        } while (iVar6 < iVar7);
      }
    }
  }
  cVar1 = *(char *)(param_1 + 0x2c);
  fVar8 = local_30;
  fVar10 = local_20;
  if ((cVar1 == '\x01') ||
     (((fVar9 = (float)local_38, fVar11 = (float)local_28, cVar1 != '\x02' &&
       (fVar9 = local_38._4_4_, fVar11 = local_28._4_4_, cVar1 != '\x03')) &&
      (fVar8 = (float)local_38, fVar9 = local_30, fVar10 = (float)local_28, fVar11 = local_20,
      cVar1 == '\x04')))) {
    local_28._4_4_ = (float)local_28;
    fVar9 = fVar8;
    fVar11 = fVar10;
    local_38._4_4_ = (float)local_38;
  }
  if ((float)local_38 <= local_38._4_4_) {
    local_38._4_4_ = (float)local_38;
  }
  if (local_28._4_4_ <= (float)local_28) {
    local_28._4_4_ = (float)local_28;
  }
  if (fVar9 <= local_38._4_4_) {
    local_38._4_4_ = fVar9;
  }
  if (local_28._4_4_ <= fVar11) {
    local_28._4_4_ = fVar11;
  }
  *param_2 = local_38._4_4_;
  *param_3 = local_28._4_4_;
  return;
}



// FUNCTION 1424102d0 GetOutRange body=640 status=ok
// SIG undefined GetOutRange(void)

void UDistributionVectorUniform::GetOutRange(longlong param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  float local_20 [2];
  undefined8 local_18;
  float local_10 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_10[0] = *(float *)(param_1 + 0x18);
  uVar5 = 0;
  local_18 = uVar1;
  local_28 = *(ulonglong *)(param_1 + 0x1c);
  local_18._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_18._0_4_ = (float)uVar1;
  local_20[0] = *(float *)(param_1 + 0x24);
  uVar7 = uVar5;
  do {
    cVar2 = *(char *)(param_1 + 0x2d + uVar5);
    if (cVar2 == '\0') {
      if (uVar5 == 0) {
        pfVar4 = (float *)&local_28;
        fVar8 = (float)local_18;
      }
      else if (uVar5 == 1) {
        pfVar4 = (float *)((longlong)&local_28 + 4);
        fVar8 = local_18._4_4_;
      }
      else {
        pfVar4 = local_20;
        fVar8 = local_10[0];
      }
LAB_142410385:
      *pfVar4 = fVar8;
    }
    else if (cVar2 == '\x02') {
      if (uVar5 == 0) {
        pfVar4 = (float *)&local_28;
        fVar8 = -(float)local_18;
      }
      else if (uVar5 == 1) {
        pfVar4 = (float *)((longlong)&local_28 + 4);
        fVar8 = -local_18._4_4_;
      }
      else {
        pfVar4 = local_20;
        fVar8 = -local_10[0];
      }
      goto LAB_142410385;
    }
    cVar2 = *(char *)(param_1 + 0x2e + uVar5);
    iVar6 = (int)uVar7;
    if (cVar2 == '\0') {
      if (iVar6 == -1) {
        pfVar4 = (float *)&local_18;
      }
      else {
        pfVar4 = (float *)((longlong)&local_18 + 4);
        if (iVar6 != 0) {
          pfVar4 = local_10;
        }
      }
      if (iVar6 == -1) {
        pfVar3 = (float *)&local_28;
      }
      else {
        pfVar3 = (float *)((longlong)&local_28 + 4);
        if (iVar6 != 0) {
          pfVar3 = local_20;
        }
      }
      *pfVar3 = *pfVar4;
    }
    else if (cVar2 == '\x02') {
      if (iVar6 == -1) {
        pfVar4 = (float *)&local_18;
      }
      else {
        pfVar4 = (float *)((longlong)&local_18 + 4);
        if (iVar6 != 0) {
          pfVar4 = local_10;
        }
      }
      if (iVar6 == -1) {
        local_28 = CONCAT44(local_28._4_4_,*pfVar4) ^ 0x80000000;
      }
      else {
        pfVar3 = (float *)((longlong)&local_28 + 4);
        if (iVar6 != 0) {
          pfVar3 = local_20;
        }
        *pfVar3 = -*pfVar4;
      }
    }
    cVar2 = *(char *)(param_1 + 0x2f + uVar5);
    if (cVar2 == '\0') {
      if (iVar6 == -2) {
        pfVar4 = (float *)&local_18;
      }
      else {
        pfVar4 = (float *)((longlong)&local_18 + 4);
        if (iVar6 != -1) {
          pfVar4 = local_10;
        }
      }
      if (iVar6 == -2) {
        pfVar3 = (float *)&local_28;
      }
      else {
        pfVar3 = (float *)((longlong)&local_28 + 4);
        if (iVar6 != -1) {
          pfVar3 = local_20;
        }
      }
      *pfVar3 = *pfVar4;
    }
    else if (cVar2 == '\x02') {
      if (iVar6 == -2) {
        pfVar4 = (float *)&local_18;
      }
      else {
        pfVar4 = (float *)((longlong)&local_18 + 4);
        if (iVar6 != -1) {
          pfVar4 = local_10;
        }
      }
      if (iVar6 == -2) {
        local_28 = CONCAT44(local_28._4_4_,*pfVar4) ^ 0x80000000;
      }
      else {
        pfVar3 = (float *)((longlong)&local_28 + 4);
        if (iVar6 != -1) {
          pfVar3 = local_20;
        }
        *pfVar3 = -*pfVar4;
      }
    }
    uVar7 = (ulonglong)(iVar6 + 3);
    uVar5 = uVar5 + 3;
    if (2 < (longlong)uVar5) {
      cVar2 = *(char *)(param_1 + 0x2c);
      fVar11 = (float)local_18;
      fVar8 = (float)local_28;
      if ((cVar2 == '\x01') ||
         (((fVar10 = (float)local_28, fVar12 = local_18._4_4_, fVar13 = (float)local_18,
           fVar9 = local_28._4_4_, cVar2 != '\x02' &&
           (fVar10 = local_28._4_4_, fVar13 = local_18._4_4_, cVar2 != '\x03')) &&
          (fVar10 = (float)local_28, fVar12 = (float)local_18, fVar11 = local_18._4_4_,
          fVar13 = (float)local_18, fVar9 = (float)local_28, fVar8 = local_28._4_4_, cVar2 != '\x04'
          )))) {
        fVar10 = local_20[0];
        fVar12 = fVar11;
        fVar13 = local_10[0];
        fVar9 = fVar8;
      }
      if ((float)local_28 <= fVar9) {
        fVar9 = (float)local_28;
      }
      if (fVar12 <= (float)local_18) {
        fVar12 = (float)local_18;
      }
      if (fVar10 <= fVar9) {
        fVar9 = fVar10;
      }
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      *param_2 = fVar9;
      *param_3 = fVar12;
      return;
    }
  } while( true );
}



// FUNCTION 142410550 FUN_142410550 body=519 status=ok
// SIG undefined FUN_142410550(void)

void FUN_142410550(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  iVar1 = *(int *)(param_1 + 0x18);
  fStack_84 = 0.0;
  fStack_6c = 0.0;
  fStack_94 = 0.0;
  fStack_90 = 0.0;
  fStack_8c = 0.0;
  fStack_88 = 0.0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  if (iVar1 == 0) {
    local_98 = 0.0;
    local_80 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_98 = (float)*(undefined8 *)(lVar2 + 4);
    fStack_94 = (float)((ulonglong)*(undefined8 *)(lVar2 + 4) >> 0x20);
    fStack_90 = (float)*(undefined8 *)(lVar2 + 0xc);
    fStack_8c = (float)((ulonglong)*(undefined8 *)(lVar2 + 0xc) >> 0x20);
    fStack_88 = (float)*(undefined8 *)(lVar2 + 0x14);
    fStack_84 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x14) >> 0x20);
    local_80 = *(float *)(lVar2 + 4);
    fStack_7c = *(float *)(lVar2 + 8);
    fStack_78 = *(float *)(lVar2 + 0xc);
    fStack_74 = *(float *)(lVar2 + 0x10);
    fStack_70 = (float)*(undefined8 *)(lVar2 + 0x14);
    fStack_6c = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x14) >> 0x20);
    if (iVar1 != 1) {
      iVar6 = iVar1;
      if (*(char *)(param_1 + 0x20) == '\0') {
        iVar6 = iVar1 + -1;
      }
      iVar4 = 0;
      if (0 < iVar6) {
        do {
          iVar5 = iVar4 + 1;
          iVar3 = 0;
          if (iVar4 != iVar1 + -1) {
            iVar3 = iVar5;
          }
          CurveTwoVectorsFindIntervalBounds
                    ((longlong)iVar4 * 0x50 + *(longlong *)(param_1 + 0x10),
                     (longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 0x10),&local_98,&local_80);
          iVar4 = iVar5;
        } while (iVar5 < iVar6);
      }
    }
  }
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2c8))(param_1 + -0x28,&local_98);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2c8))(param_1 + -0x28,&local_80);
  fVar8 = local_98;
  if (fStack_94 <= local_98) {
    fVar8 = fStack_94;
  }
  if (local_98 <= fStack_94) {
    local_98 = fStack_94;
  }
  fVar7 = fStack_8c;
  if (fStack_88 <= fStack_8c) {
    fVar7 = fStack_88;
  }
  if (fStack_90 <= fVar8) {
    fVar8 = fStack_90;
  }
  fVar9 = fStack_74;
  if (fStack_74 <= fStack_70) {
    fVar9 = fStack_70;
  }
  if (local_98 <= fStack_90) {
    local_98 = fStack_90;
  }
  if (fStack_84 <= fVar7) {
    fVar7 = fStack_84;
  }
  if (fStack_70 <= fStack_74) {
    fStack_74 = fStack_70;
  }
  if (fStack_8c <= fStack_88) {
    fStack_8c = fStack_88;
  }
  if (fVar9 <= fStack_6c) {
    fVar9 = fStack_6c;
  }
  if (fVar7 <= fVar8) {
    fVar8 = fVar7;
  }
  if (fStack_6c <= fStack_74) {
    fStack_74 = fStack_6c;
  }
  if (fStack_8c <= fStack_84) {
    fStack_8c = fStack_84;
  }
  fVar7 = local_80;
  if (local_80 <= fStack_7c) {
    fVar7 = fStack_7c;
  }
  if (fStack_7c <= local_80) {
    local_80 = fStack_7c;
  }
  if (local_98 <= fStack_8c) {
    local_98 = fStack_8c;
  }
  if (fVar7 <= fStack_78) {
    fVar7 = fStack_78;
  }
  if (fStack_78 <= local_80) {
    local_80 = fStack_78;
  }
  if (fVar9 <= fVar7) {
    fVar9 = fVar7;
  }
  if (local_80 <= fStack_74) {
    fStack_74 = local_80;
  }
  if (local_98 <= fVar9) {
    local_98 = fVar9;
  }
  if (fStack_74 <= fVar8) {
    fVar8 = fStack_74;
  }
  *param_2 = fVar8;
  *param_3 = local_98;
  return;
}



// FUNCTION 142410780 FUN_142410780 body=55 status=ok
// SIG undefined FUN_142410780(void)

void FUN_142410780(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014241078f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a0))(plVar1);
    return;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x38);
  *param_3 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x44);
  return;
}



// FUNCTION 142410820 GetRange body=379 status=ok
// SIG undefined GetRange(void)

void UDistributionVectorConstantCurve::GetRange
               (longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    local_38 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_30 = DAT_1468b5d98;
    local_28 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_20 = DAT_1468b5d98;
    uVar12 = DAT_1468b5d90;
    uVar13 = DAT_1468b5d90;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x38);
    local_38 = *(undefined8 *)(lVar3 + 4);
    local_30 = *(undefined4 *)(lVar3 + 0xc);
    local_28 = *(undefined8 *)(lVar3 + 4);
    local_20 = *(undefined4 *)(lVar3 + 0xc);
    if (iVar2 != 1) {
      iVar11 = iVar2;
      if (*(char *)(param_1 + 0x48) == '\0') {
        iVar11 = iVar2 + -1;
      }
      iVar9 = 0;
      if (0 < iVar11) {
        do {
          iVar10 = iVar9 + 1;
          iVar8 = 0;
          if (iVar9 != iVar2 + -1) {
            iVar8 = iVar10;
          }
          CurveVectorFindIntervalBounds
                    ((longlong)iVar9 * 0x2c + *(longlong *)(param_1 + 0x38),
                     (longlong)iVar8 * 0x2c + *(longlong *)(param_1 + 0x38),&local_38,&local_28);
          iVar9 = iVar10;
        } while (iVar10 < iVar11);
      }
    }
    uVar12 = (undefined4)local_38;
    uVar13 = (undefined4)local_28;
  }
  cVar1 = *(char *)(param_1 + 0x54);
  uVar4 = local_30;
  uVar6 = local_20;
  if (cVar1 != '\x01') {
    uVar5 = uVar12;
    uVar7 = uVar13;
    if (cVar1 == '\x02') goto LAB_14241094d;
    if (cVar1 == '\x03') {
      uVar5 = local_38._4_4_;
      uVar7 = local_28._4_4_;
      goto LAB_14241094d;
    }
    uVar4 = uVar12;
    uVar5 = local_30;
    uVar6 = uVar13;
    uVar7 = local_20;
    if (cVar1 != '\x04') goto LAB_14241094d;
  }
  local_20 = uVar6;
  local_30 = uVar4;
  local_28 = CONCAT44(uVar13,(undefined4)local_28);
  local_38 = CONCAT44(uVar12,(undefined4)local_38);
  uVar5 = local_30;
  uVar7 = local_20;
LAB_14241094d:
  local_20 = uVar7;
  local_30 = uVar5;
  *param_2 = local_38;
  *(undefined4 *)(param_2 + 1) = local_30;
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 1424109d0 FUN_1424109d0 body=469 status=ok
// SIG undefined FUN_1424109d0(void)

void FUN_1424109d0(longlong *param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar1 = (int)param_1[8];
  fStack_34 = 0.0;
  fStack_1c = 0.0;
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  fStack_3c = 0.0;
  fStack_38 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  if (iVar1 == 0) {
    local_48 = 0.0;
    local_30 = 0.0;
  }
  else {
    lVar2 = param_1[7];
    local_48 = (float)*(undefined8 *)(lVar2 + 4);
    fStack_44 = (float)((ulonglong)*(undefined8 *)(lVar2 + 4) >> 0x20);
    fStack_40 = (float)*(undefined8 *)(lVar2 + 0xc);
    fStack_3c = (float)((ulonglong)*(undefined8 *)(lVar2 + 0xc) >> 0x20);
    fStack_38 = (float)*(undefined8 *)(lVar2 + 0x14);
    fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x14) >> 0x20);
    local_30 = *(float *)(lVar2 + 4);
    fStack_2c = *(float *)(lVar2 + 8);
    fStack_28 = *(float *)(lVar2 + 0xc);
    fStack_24 = *(float *)(lVar2 + 0x10);
    fStack_20 = (float)*(undefined8 *)(lVar2 + 0x14);
    fStack_1c = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x14) >> 0x20);
    if (iVar1 != 1) {
      iVar3 = iVar1;
      if ((char)param_1[9] == '\0') {
        iVar3 = iVar1 + -1;
      }
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar6 = iVar5 + 1;
          iVar4 = 0;
          if (iVar5 != iVar1 + -1) {
            iVar4 = iVar6;
          }
          CurveTwoVectorsFindIntervalBounds
                    ((longlong)iVar5 * 0x50 + param_1[7],(longlong)iVar4 * 0x50 + param_1[7],
                     &local_48,&local_30);
          iVar5 = iVar6;
        } while (iVar6 < iVar3);
      }
    }
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_48);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_30);
  if (local_30 <= local_48) {
    *param_2 = local_30;
  }
  else {
    *param_2 = local_48;
  }
  if (fStack_2c <= fStack_44) {
    param_2[1] = fStack_2c;
  }
  else {
    param_2[1] = fStack_44;
  }
  if (fStack_28 <= fStack_40) {
    param_2[2] = fStack_28;
  }
  else {
    param_2[2] = fStack_40;
  }
  if (fStack_3c <= fStack_24) {
    *param_3 = fStack_24;
  }
  else {
    *param_3 = fStack_3c;
  }
  if (fStack_38 <= fStack_20) {
    param_3[1] = fStack_20;
  }
  else {
    param_3[1] = fStack_38;
  }
  if (fStack_34 <= fStack_1c) {
    param_3[2] = fStack_1c;
    return;
  }
  param_3[2] = fStack_34;
  return;
}



// FUNCTION 142410be0 FUN_142410be0 body=85 status=ok
// SIG undefined FUN_142410be0(void)

undefined8 FUN_142410be0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x32b,
             L"Pure virtual not implemented (%s)",L"UNetDriver::GetSocketSubsystem");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x32b,
             L"Pure virtual not implemented (%s)",L"UNetDriver::GetSocketSubsystem");
  return 0;
}



// FUNCTION 142410d70 FUN_142410d70 body=282 status=ok
// SIG undefined FUN_142410d70(void)

undefined4 * FUN_142410d70(longlong *param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 local_res18;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  bVar2 = (iVar1 - 4U & 0xfffffffd) == 0;
  switch(param_3) {
  case 0:
    local_res18 = DAT_1464aa738;
    if (param_4 != '\0') {
      local_res18 = 0xff200000;
    }
    break;
  case 1:
    if (bVar2) {
      if (param_4 == '\0') {
        local_res18 = 0xffc40000;
      }
      else {
        local_res18 = 0xff1c0000;
      }
    }
    else {
LAB_142410e01:
      local_res18 = DAT_1464aa73c;
      if (param_4 != '\0') {
        local_res18 = 0xff002000;
      }
    }
    break;
  case 2:
    if (bVar2) goto LAB_142410e01;
  case 4:
    local_res18 = DAT_1464aa740;
    if (param_4 != '\0') {
      local_res18 = 0xff000020;
    }
    break;
  case 3:
    local_res18 = 0xff001c00;
    if (param_4 == '\0') {
      local_res18 = 0xff00c400;
    }
    break;
  case 5:
    local_res18 = 0xff00001c;
    if (param_4 == '\0') {
      local_res18 = 0xff0000c4;
    }
    break;
  default:
    goto switchD_142410dbd_default;
  }
  *param_2 = local_res18;
switchD_142410dbd_default:
  return param_2;
}



// FUNCTION 142411080 GetValue1None body=128 status=ok
// SIG undefined GetValue1None(void)

void FRawDistribution::GetValue1None(longlong param_1,float param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  fVar5 = (param_2 - *(float *)(param_1 + 8)) * *(float *)(param_1 + 4);
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  uVar4 = *(byte *)(param_1 + 1) - 1;
  uVar3 = (uint)fVar5;
  uVar2 = uVar4;
  if (uVar3 <= uVar4) {
    uVar2 = uVar3;
  }
  if (uVar3 + 1 <= uVar4) {
    uVar4 = uVar3 + 1;
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) +
                    (longlong)(int)(uVar2 * *(byte *)(param_1 + 2)) * 4);
  *param_3 = (*(float *)(*(longlong *)(param_1 + 0x10) +
                        (longlong)(int)(uVar4 * *(byte *)(param_1 + 2)) * 4) - fVar1) *
             (fVar5 - (float)(int)fVar5) + fVar1;
  return;
}



// FUNCTION 142411100 GetValue1Random body=263 status=ok
// SIG undefined GetValue1Random(void)

void FRawDistribution::GetValue1Random
               (longlong param_1,float param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_4 == 0) {
    fVar7 = (float)FGenericPlatformMath::SRand();
  }
  else {
    uVar2 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar2;
    fVar7 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    fVar7 = fVar7 - (float)(int)fVar7;
  }
  fVar9 = (param_2 - *(float *)(param_1 + 8)) * *(float *)(param_1 + 4);
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar6 = *(byte *)(param_1 + 1) - 1;
  uVar4 = (uint)fVar9;
  uVar2 = uVar6;
  if (uVar4 <= uVar6) {
    uVar2 = uVar4;
  }
  if (uVar4 + 1 <= uVar6) {
    uVar6 = uVar4 + 1;
  }
  lVar5 = (longlong)(int)(uVar2 * *(byte *)(param_1 + 2));
  lVar3 = (longlong)(int)(uVar6 * *(byte *)(param_1 + 2));
  fVar8 = (*(float *)(lVar1 + lVar3 * 4) - *(float *)(lVar1 + lVar5 * 4)) *
          (fVar9 - (float)(int)fVar9) + *(float *)(lVar1 + lVar5 * 4);
  *param_3 = (((*(float *)(lVar1 + 4 + lVar3 * 4) - *(float *)(lVar1 + 4 + lVar5 * 4)) *
               (fVar9 - (float)(int)fVar9) + *(float *)(lVar1 + 4 + lVar5 * 4)) - fVar8) * fVar7 +
             fVar8;
  return;
}



// FUNCTION 142411210 GetValue3Extreme body=354 status=ok
// SIG undefined GetValue3Extreme(void)

void FRawDistribution::GetValue3Extreme
               (longlong param_1,float param_2,float *param_3,int param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  if (param_5 == 0) {
    fVar12 = (float)FGenericPlatformMath::SRand();
  }
  else {
    uVar10 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_5 + 4) = uVar10;
    fVar12 = (float)(uVar10 & 0x7fffff | 0x3f800000);
    fVar12 = fVar12 - (float)(int)fVar12;
  }
  fVar13 = (param_2 - *(float *)(param_1 + 8)) * *(float *)(param_1 + 4);
  if (fVar13 < 0.0) {
    fVar13 = 0.0;
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  uVar10 = *(byte *)(param_1 + 1) - 1;
  uVar7 = (uint)fVar13;
  uVar6 = uVar10;
  if (uVar7 <= uVar10) {
    uVar6 = uVar7;
  }
  if (uVar7 + 1 <= uVar10) {
    uVar10 = uVar7 + 1;
  }
  lVar11 = (longlong)(int)(uVar6 * *(byte *)(param_1 + 2));
  fVar13 = fVar13 - (float)(int)fVar13;
  lVar9 = (longlong)(int)(uVar10 * *(byte *)(param_1 + 2));
  if ((0 < param_4) || ((param_4 == 0 && (0.5 < fVar12)))) {
    lVar8 = 3;
  }
  else {
    lVar8 = 0;
  }
  fVar12 = *(float *)(lVar5 + 4 + (lVar8 + lVar11) * 4);
  fVar1 = *(float *)(lVar5 + 8 + (lVar8 + lVar11) * 4);
  fVar2 = *(float *)(lVar5 + 8 + (lVar8 + lVar9) * 4);
  fVar3 = *(float *)(lVar5 + (lVar11 + lVar8) * 4);
  fVar4 = *(float *)(lVar5 + (lVar9 + lVar8) * 4);
  param_3[1] = (*(float *)(lVar5 + 4 + (lVar8 + lVar9) * 4) - fVar12) * fVar13 + fVar12;
  param_3[2] = (fVar2 - fVar1) * fVar13 + fVar1;
  *param_3 = (fVar4 - fVar3) * fVar13 + fVar3;
  return;
}



// FUNCTION 142411380 GetValue3None body=189 status=ok
// SIG undefined GetValue3None(void)

void FRawDistribution::GetValue3None(longlong param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  
  fVar13 = (param_2 - *(float *)(param_1 + 8)) * *(float *)(param_1 + 4);
  if (fVar13 < 0.0) {
    fVar13 = 0.0;
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  uVar12 = *(byte *)(param_1 + 1) - 1;
  uVar10 = (uint)fVar13;
  uVar8 = uVar12;
  if (uVar10 <= uVar12) {
    uVar8 = uVar10;
  }
  if (uVar10 + 1 <= uVar12) {
    uVar12 = uVar10 + 1;
  }
  lVar11 = (longlong)(int)(uVar8 * *(byte *)(param_1 + 2));
  fVar13 = fVar13 - (float)(int)fVar13;
  lVar9 = (longlong)(int)(uVar12 * *(byte *)(param_1 + 2));
  fVar1 = *(float *)(lVar7 + 8 + lVar9 * 4);
  fVar2 = *(float *)(lVar7 + 8 + lVar11 * 4);
  fVar3 = *(float *)(lVar7 + lVar9 * 4);
  fVar4 = *(float *)(lVar7 + lVar11 * 4);
  fVar5 = *(float *)(lVar7 + 8 + lVar11 * 4);
  fVar6 = *(float *)(lVar7 + lVar11 * 4);
  param_3[1] = (*(float *)(lVar7 + 4 + lVar9 * 4) - *(float *)(lVar7 + 4 + lVar11 * 4)) * fVar13 +
               *(float *)(lVar7 + 4 + lVar11 * 4);
  param_3[2] = (fVar1 - fVar2) * fVar13 + fVar5;
  *param_3 = (fVar3 - fVar4) * fVar13 + fVar6;
  return;
}



// FUNCTION 142411440 GetValue3Random body=654 status=ok
// SIG undefined GetValue3Random(void)

void FRawDistribution::GetValue3Random
               (longlong param_1,float param_2,float *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (param_4 == 0) {
    fVar13 = (float)FGenericPlatformMath::SRand();
    fVar14 = (float)FGenericPlatformMath::SRand();
    fVar15 = (float)FGenericPlatformMath::SRand();
  }
  else {
    uVar9 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    fVar13 = (float)(uVar9 & 0x7fffff | 0x3f800000);
    uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
    fVar14 = (float)(uVar9 & 0x7fffff | 0x3f800000);
    fVar13 = fVar13 - (float)(int)fVar13;
    fVar14 = fVar14 - (float)(int)fVar14;
    uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar9;
    fVar15 = (float)(uVar9 & 0x7fffff | 0x3f800000);
    fVar15 = fVar15 - (float)(int)fVar15;
  }
  cVar6 = *(char *)(param_1 + 0x20);
  fVar19 = fVar13;
  if ((cVar6 == '\x01') ||
     (((fVar20 = fVar15, cVar6 != '\x02' && (fVar20 = fVar14, cVar6 != '\x03')) &&
      (fVar19 = fVar15, fVar20 = fVar13, cVar6 == '\x04')))) {
    fVar14 = fVar15;
    fVar20 = fVar19;
  }
  fVar13 = (param_2 - *(float *)(param_1 + 8)) * *(float *)(param_1 + 4);
  if (fVar13 < 0.0) {
    fVar13 = 0.0;
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  uVar12 = *(byte *)(param_1 + 1) - 1;
  uVar10 = (uint)fVar13;
  uVar9 = uVar12;
  if (uVar10 <= uVar12) {
    uVar9 = uVar10;
  }
  fVar13 = fVar13 - (float)(int)fVar13;
  if (uVar10 + 1 <= uVar12) {
    uVar12 = uVar10 + 1;
  }
  lVar11 = (longlong)(int)(uVar9 * *(byte *)(param_1 + 2));
  lVar8 = (longlong)(int)(uVar12 * *(byte *)(param_1 + 2));
  fVar19 = *(float *)(lVar7 + 0x10 + lVar8 * 4);
  fVar1 = *(float *)(lVar7 + 0x10 + lVar11 * 4);
  fVar2 = *(float *)(lVar7 + 0x14 + lVar8 * 4);
  fVar3 = *(float *)(lVar7 + 0x14 + lVar11 * 4);
  fVar4 = *(float *)(lVar7 + 0x10 + lVar11 * 4);
  fVar5 = *(float *)(lVar7 + 0x14 + lVar11 * 4);
  fVar18 = (*(float *)(lVar7 + lVar8 * 4) - *(float *)(lVar7 + lVar11 * 4)) * fVar13 +
           *(float *)(lVar7 + lVar11 * 4);
  fVar17 = (*(float *)(lVar7 + 4 + lVar8 * 4) - *(float *)(lVar7 + 4 + lVar11 * 4)) * fVar13 +
           *(float *)(lVar7 + 4 + lVar11 * 4);
  fVar16 = (*(float *)(lVar7 + 8 + lVar8 * 4) - *(float *)(lVar7 + 8 + lVar11 * 4)) * fVar13 +
           *(float *)(lVar7 + 8 + lVar11 * 4);
  *param_3 = (((*(float *)(lVar7 + 0xc + lVar8 * 4) - *(float *)(lVar7 + 0xc + lVar11 * 4)) * fVar13
              + *(float *)(lVar7 + 0xc + lVar11 * 4)) - fVar18) * fVar15 + fVar18;
  param_3[1] = (((fVar19 - fVar1) * fVar13 + fVar4) - fVar17) * fVar14 + fVar17;
  param_3[2] = (((fVar2 - fVar3) * fVar13 + fVar5) - fVar16) * fVar20 + fVar16;
  return;
}



// FUNCTION 1424116d0 FUN_1424116d0 body=518 status=ok
// SIG undefined FUN_1424116d0(void)

void FUN_1424116d0(char *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 local_28 [32];
  
  if (((DAT_146531ff4 == 0) || (*(int *)(param_1 + 0x18) == 0)) || (param_1[1] == '\0')) {
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001424118cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x298))();
    return;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    return;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      return;
    }
    if (param_4 == 0) {
      FGenericPlatformMath::SRand();
    }
    else {
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    }
    return;
  }
  FRawDistribution::GetValue1Random(param_1,param_1[1],local_28);
  return;
}



// FUNCTION 1424118e0 FUN_1424118e0 body=217 status=ok
// SIG undefined FUN_1424118e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1424118e0(char *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((DAT_146531ff4 != 0) && (*(int *)(param_1 + 0x18) != 0)) && (param_1[1] != '\0')) {
    cVar1 = *param_1;
    if (cVar1 == '\x01') {
      FRawDistribution::GetValue3None(param_1,param_3,&local_18);
    }
    else if (cVar1 == '\x02') {
      FRawDistribution::GetValue3Random(param_1,param_3,&local_18,param_6);
    }
    else if (cVar1 == '\x03') {
      FRawDistribution::GetValue3Extreme(param_1,param_3,&local_18,param_5,param_6);
    }
    *param_2 = local_18;
    *(undefined4 *)(param_2 + 1) = local_10;
    return param_2;
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  (**(code **)(*plVar2 + 0x298))(plVar2,param_2,*plVar2,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 1424119c0 GetValue body=32 status=ok
// SIG undefined GetValue(void)

void UDistributionFloatConstantCurve::GetValue(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  FInterpCurve<float>::Eval(param_1 + 0x38,param_2,local_res8);
  return;
}



// FUNCTION 1424119e0 GetValue body=173 status=ok
// SIG undefined GetValue(void)

float UDistributionFloatParameterBase::GetValue
                (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float local_res8 [8];
  
  fVar5 = 0.0;
  local_res8[0] = 0.0;
  cVar3 = (**(code **)(*param_1 + 0x2a8))(param_1,param_3,param_1[8],local_res8);
  if (cVar3 == '\0') {
    local_res8[0] = *(float *)(param_1 + 7);
  }
  if ((char)param_1[0xb] != '\x02') {
    if ((char)param_1[0xb] == '\x01') {
      local_res8[0] = ABS(local_res8[0]);
    }
    fVar1 = *(float *)((longlong)param_1 + 0x4c);
    fVar2 = *(float *)(param_1 + 9);
    if (fVar2 < fVar1) {
      fVar5 = (*(float *)((longlong)param_1 + 0x54) - *(float *)(param_1 + 10)) / (fVar1 - fVar2);
    }
    fVar4 = fVar2;
    if ((fVar2 <= local_res8[0]) && (fVar4 = fVar1, local_res8[0] <= fVar1)) {
      fVar4 = local_res8[0];
    }
    return (fVar4 - fVar2) * fVar5 + *(float *)(param_1 + 10);
  }
  return local_res8[0];
}



// FUNCTION 142411a90 GetValue body=101 status=ok
// SIG undefined GetValue(void)

float UDistributionFloatUniform::GetValue
                (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  
  if (param_4 == 0) {
    fVar2 = (float)FGenericPlatformMath::SRand();
  }
  else {
    uVar1 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar1;
    fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar2 = fVar2 - (float)(int)fVar2;
  }
  return (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x3c)) * fVar2 +
         *(float *)(param_1 + 0x3c);
}



// FUNCTION 142411b00 GetValue body=133 status=ok
// SIG undefined GetValue(void)

float UDistributionFloatUniformCurve::GetValue
                (longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  undefined8 local_res8 [3];
  float local_res20;
  float local_res24;
  
  local_res8[0] = 0;
  FInterpCurve<FVector2D>::Eval(param_1 + 0x38,&local_res20,param_2,local_res8);
  if (param_4 == 0) {
    fVar2 = (float)FGenericPlatformMath::SRand();
  }
  else {
    uVar1 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar1;
    fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar2 = fVar2 - (float)(int)fVar2;
  }
  return (local_res24 - local_res20) * fVar2 + local_res20;
}



// FUNCTION 142411c20 GetValue body=250 status=ok
// SIG undefined GetValue(void)

undefined8 *
UDistributionVectorConstantCurve::GetValue(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  FInterpCurve<FVector>::Eval(param_1 + 0x38,&local_18,param_3,&DAT_1468b5d90);
  cVar1 = *(char *)(param_1 + 0x54);
  if (cVar1 == '\x01') {
    *(undefined4 *)param_2 = local_18;
    *(undefined4 *)((longlong)param_2 + 4) = local_18;
    *(undefined4 *)(param_2 + 1) = local_10;
    return param_2;
  }
  if (cVar1 == '\x02') {
    *(undefined4 *)param_2 = local_18;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_14;
    *(undefined4 *)(param_2 + 1) = local_18;
    return param_2;
  }
  if (cVar1 == '\x03') {
    *(undefined4 *)param_2 = local_18;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_14;
    *(undefined4 *)(param_2 + 1) = uStack_14;
    return param_2;
  }
  if (cVar1 != '\x04') {
    *param_2 = CONCAT44(uStack_14,local_18);
    *(undefined4 *)(param_2 + 1) = local_10;
    return param_2;
  }
  *(undefined4 *)param_2 = local_18;
  *(undefined4 *)((longlong)param_2 + 4) = local_18;
  *(undefined4 *)(param_2 + 1) = local_18;
  return param_2;
}



// FUNCTION 142411d20 GetValue body=519 status=ok
// SIG undefined GetValue(void)

float * UDistributionVectorParameterBase::GetValue
                  (longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_88;
  float local_80;
  
  fVar13 = 0.0;
  local_88 = 0;
  local_80 = 0.0;
  cVar8 = (**(code **)(*param_1 + 0x2b0))(param_1,param_4,param_1[10],&local_88);
  if (cVar8 == '\0') {
    local_88 = param_1[7];
    local_80 = *(float *)(param_1 + 8);
  }
  lVar7 = param_1[0x11];
  fVar9 = (float)local_88;
  if ((char)lVar7 == '\x01') {
    fVar9 = ABS((float)local_88);
  }
  cVar8 = *(char *)((longlong)param_1 + 0x89);
  if (cVar8 == '\x01') {
    local_88._4_4_ = ABS(local_88._4_4_);
  }
  cVar6 = *(char *)((longlong)param_1 + 0x8a);
  if (cVar6 == '\x01') {
    local_80 = ABS(local_80);
  }
  fVar11 = *(float *)((longlong)param_1 + 100);
  fVar1 = *(float *)(param_1 + 0xb);
  if (fVar1 < fVar11) {
    fVar14 = (*(float *)((longlong)param_1 + 0x7c) - *(float *)(param_1 + 0xe)) / (fVar11 - fVar1);
  }
  else {
    fVar14 = 0.0;
  }
  fVar12 = *(float *)(param_1 + 0xd);
  fVar2 = *(float *)((longlong)param_1 + 0x5c);
  if (fVar2 < fVar12) {
    fVar15 = (*(float *)(param_1 + 0x10) - *(float *)((longlong)param_1 + 0x74)) / (fVar12 - fVar2);
  }
  else {
    fVar15 = 0.0;
  }
  fVar3 = *(float *)((longlong)param_1 + 0x6c);
  fVar4 = *(float *)(param_1 + 0xc);
  if (fVar4 < fVar3) {
    fVar13 = (*(float *)((longlong)param_1 + 0x84) - *(float *)(param_1 + 0xf)) / (fVar3 - fVar4);
  }
  fVar10 = fVar1;
  if ((fVar1 <= fVar9) && (fVar10 = fVar11, fVar9 <= fVar11)) {
    fVar10 = fVar9;
  }
  fVar11 = fVar2;
  if ((fVar2 <= local_88._4_4_) && (fVar11 = fVar12, local_88._4_4_ <= fVar12)) {
    fVar11 = local_88._4_4_;
  }
  fVar12 = fVar4;
  if ((fVar4 <= local_80) && (fVar12 = fVar3, local_80 <= fVar3)) {
    fVar12 = local_80;
  }
  fVar3 = *(float *)((longlong)param_1 + 0x74);
  fVar5 = *(float *)(param_1 + 0xf);
  *param_2 = (fVar10 - fVar1) * fVar14 + *(float *)(param_1 + 0xe);
  param_2[1] = (fVar11 - fVar2) * fVar15 + fVar3;
  param_2[2] = (fVar12 - fVar4) * fVar13 + fVar5;
  if ((char)lVar7 == '\x02') {
    *param_2 = fVar9;
  }
  if (cVar8 == '\x02') {
    param_2[1] = local_88._4_4_;
  }
  if (cVar6 == '\x02') {
    param_2[2] = local_80;
  }
  return param_2;
}



// FUNCTION 142411f30 GetValue body=1489 status=ok
// SIG undefined GetValue(void)

float * UDistributionVectorUniform::GetValue
                  (longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,longlong param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88;
  float fStack_84;
  float fStack_74;
  
  fVar5 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x40);
  fVar8 = *(float *)(param_1 + 0x4c);
  if (*(char *)(param_1 + 0x55) == '\x01') {
    local_88 = (float)*(undefined8 *)(param_1 + 0x44);
  }
  else {
    local_88 = fVar5;
    if (*(char *)(param_1 + 0x55) == '\x02') {
      local_88 = -fVar5;
    }
  }
  fStack_74 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  if (*(char *)(param_1 + 0x56) == '\x01') {
    fStack_84 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x44) >> 0x20);
  }
  else {
    fStack_84 = fStack_74;
    if (*(char *)(param_1 + 0x56) == '\x02') {
      fStack_84 = -fStack_74;
    }
  }
  if ((*(char *)(param_1 + 0x57) != '\x01') && (fVar8 = fVar6, *(char *)(param_1 + 0x57) == '\x02'))
  {
    fVar8 = -fVar6;
  }
  uVar3 = *(uint *)(param_1 + 0x58);
  bVar2 = true;
  if ((uVar3 & 1) != 0) {
    if (param_5 == 0) {
      if (param_6 == 0) {
        fVar4 = (float)FGenericPlatformMath::SRand();
      }
      else {
        uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar3;
        fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        fVar4 = fVar4 - (float)(int)fVar4;
      }
      uVar3 = *(uint *)(param_1 + 0x58);
      bVar2 = fVar4 <= 0.5;
    }
    else if (0 < param_5) {
      bVar2 = false;
    }
  }
  cVar1 = *(char *)(param_1 + 0x54);
  fVar4 = local_88;
  if (cVar1 == '\x01') {
    if ((uVar3 & 1) == 0) {
      if (param_6 == 0) {
        fVar4 = (float)FGenericPlatformMath::SRand();
      }
      else {
        uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar3;
        fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        fVar4 = fVar4 - (float)(int)fVar4;
      }
      fVar4 = (local_88 - fVar5) * fVar4 + fVar5;
      if (param_6 == 0) {
        fVar5 = (float)FGenericPlatformMath::SRand();
      }
      else {
        uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar3;
        fVar5 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        fVar5 = fVar5 - (float)(int)fVar5;
      }
      fVar7 = fVar4;
      fVar8 = (fVar8 - fVar6) * fVar5 + fVar6;
    }
    else {
      fVar7 = local_88;
      if (!bVar2) {
        fVar4 = fVar5;
        fVar7 = fVar5;
        fVar8 = fVar6;
      }
    }
  }
  else {
    fVar7 = fStack_74;
    if (cVar1 == '\x02') {
      if ((uVar3 & 1) == 0) {
        if (param_6 == 0) {
          fVar6 = (float)FGenericPlatformMath::SRand();
        }
        else {
          uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_6 + 4) = uVar3;
          fVar6 = (float)(uVar3 & 0x7fffff | 0x3f800000);
          fVar6 = fVar6 - (float)(int)fVar6;
        }
        local_88 = (local_88 - fVar5) * fVar6 + fVar5;
        if (param_6 == 0) {
          fVar6 = (float)FGenericPlatformMath::SRand();
        }
        else {
          uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_6 + 4) = uVar3;
          fVar6 = (float)(uVar3 & 0x7fffff | 0x3f800000);
          fVar6 = fVar6 - (float)(int)fVar6;
        }
        fStack_84 = (fStack_84 - fStack_74) * fVar6 + fStack_74;
      }
      else {
        fVar4 = fVar5;
        fVar8 = fVar5;
        if (!bVar2) goto LAB_1424124b7;
      }
      fVar4 = local_88;
      fVar7 = fStack_84;
      fVar8 = local_88;
    }
    else if (cVar1 == '\x03') {
      if ((uVar3 & 1) == 0) {
        if (param_6 == 0) {
          fVar6 = (float)FGenericPlatformMath::SRand();
        }
        else {
          uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_6 + 4) = uVar3;
          fVar6 = (float)(uVar3 & 0x7fffff | 0x3f800000);
          fVar6 = fVar6 - (float)(int)fVar6;
        }
        local_88 = (local_88 - fVar5) * fVar6 + fVar5;
        if (param_6 == 0) {
          fVar6 = (float)FGenericPlatformMath::SRand();
        }
        else {
          uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_6 + 4) = uVar3;
          fVar6 = (float)(uVar3 & 0x7fffff | 0x3f800000);
          fVar6 = fVar6 - (float)(int)fVar6;
        }
        fStack_84 = (fStack_84 - fStack_74) * fVar6 + fStack_74;
      }
      else {
        fVar4 = fVar5;
        fVar8 = fStack_74;
        if (!bVar2) goto LAB_1424124b7;
      }
      fVar4 = local_88;
      fVar7 = fStack_84;
      fVar8 = fStack_84;
    }
    else if (cVar1 == '\x04') {
      if ((uVar3 & 1) == 0) {
        if (param_6 == 0) {
          fVar6 = (float)FGenericPlatformMath::SRand();
        }
        else {
          uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_6 + 4) = uVar3;
          fVar6 = (float)(uVar3 & 0x7fffff | 0x3f800000);
          fVar6 = fVar6 - (float)(int)fVar6;
        }
        local_88 = (local_88 - fVar5) * fVar6 + fVar5;
      }
      else {
        fVar4 = fVar5;
        fVar7 = fVar5;
        fVar8 = fVar5;
        if (!bVar2) goto LAB_1424124b7;
      }
      fVar4 = local_88;
      fVar7 = local_88;
      fVar8 = local_88;
    }
    else if ((uVar3 & 1) == 0) {
      if (param_6 == 0) {
        fVar4 = (float)FGenericPlatformMath::SRand();
      }
      else {
        uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar3;
        fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        fVar4 = fVar4 - (float)(int)fVar4;
      }
      fVar4 = (local_88 - fVar5) * fVar4 + fVar5;
      if (param_6 == 0) {
        fVar5 = (float)FGenericPlatformMath::SRand();
      }
      else {
        uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar3;
        fVar5 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        fVar5 = fVar5 - (float)(int)fVar5;
      }
      fVar7 = (fStack_84 - fStack_74) * fVar5 + fStack_74;
      if (param_6 == 0) {
        fVar5 = (float)FGenericPlatformMath::SRand();
        fVar8 = (fVar8 - fVar6) * fVar5 + fVar6;
      }
      else {
        uVar3 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar3;
        fVar5 = (float)(uVar3 & 0x7fffff | 0x3f800000);
        fVar8 = (fVar8 - fVar6) * (fVar5 - (float)(int)fVar5) + fVar6;
      }
    }
    else {
      fVar7 = fStack_84;
      if (!bVar2) {
        fVar4 = fVar5;
        fVar7 = fStack_74;
        fVar8 = fVar6;
      }
    }
  }
LAB_1424124b7:
  *param_2 = fVar4;
  param_2[1] = fVar7;
  param_2[2] = fVar8;
  return param_2;
}



// FUNCTION 142412510 FUN_142412510 body=572 status=ok
// SIG undefined FUN_142412510(void)

float * FUN_142412510(longlong *param_1,float *param_2,undefined4 param_3,undefined8 param_4,
                     int param_5,longlong param_6)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FInterpCurve<FTwoVectors>::Eval(param_1 + 7,&local_50,param_3,&local_68);
  bVar1 = true;
  if ((*(byte *)((longlong)param_1 + 0x5c) & 1) != 0) {
    if (param_5 == 0) {
      if (param_6 == 0) {
        fVar3 = (float)FGenericPlatformMath::SRand();
      }
      else {
        uVar2 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar2;
        fVar3 = (float)(uVar2 & 0x7fffff | 0x3f800000);
        fVar3 = fVar3 - (float)(int)fVar3;
      }
      if (0.5 < fVar3) {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
      if (param_5 < 0) {
        bVar1 = false;
      }
    }
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_50);
  if ((*(byte *)((longlong)param_1 + 0x5c) & 1) == 0) {
    if (param_6 == 0) {
      fVar3 = (float)FGenericPlatformMath::SRand();
      fVar4 = (float)FGenericPlatformMath::SRand();
      fVar5 = (float)FGenericPlatformMath::SRand();
    }
    else {
      uVar2 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
      fVar3 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      uVar2 = uVar2 * 0xbb38435 + 0x3619636b;
      fVar4 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      fVar3 = fVar3 - (float)(int)fVar3;
      fVar4 = fVar4 - (float)(int)fVar4;
      uVar2 = uVar2 * 0xbb38435 + 0x3619636b;
      *(uint *)(param_6 + 4) = uVar2;
      fVar5 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      fVar5 = fVar5 - (float)(int)fVar5;
    }
    *param_2 = (local_44 - local_50) * fVar5 + local_50;
    param_2[1] = (local_40 - local_4c) * fVar4 + local_4c;
    param_2[2] = (local_3c - local_48) * fVar3 + local_48;
  }
  else {
    if (bVar1) {
      local_4c = local_40;
      local_48 = local_3c;
      local_50 = local_44;
    }
    local_68 = CONCAT44(local_4c,local_50);
    *(undefined8 *)param_2 = local_68;
    param_2[2] = local_48;
  }
  return param_2;
}



// FUNCTION 142412750 GetVectorValue body=44 status=ok
// SIG undefined GetVectorValue(void)

undefined8
UDistributionVector::GetVectorValue(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x298))(param_1,param_2,param_3,0,0,0);
  return param_2;
}



// FUNCTION 1424127a0 GetWaveFromContext body=154 status=ok
// SIG undefined GetWaveFromContext(void)

longlong UDialogueWave::GetWaveFromContext(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x58) * 7;
  while( true ) {
    if (plVar3 == plVar4) {
      return 0;
    }
    if (((*plVar3 == lVar1) && ((int)plVar3[2] == (int)param_2[2])) &&
       (iVar2 = ::_guard_xfg_dispatch_icall_nop
                          ((void *)plVar3[1],(void *)param_2[1],(longlong)(int)plVar3[2] << 3),
       iVar2 == 0)) break;
    plVar3 = plVar3 + 7;
  }
  return plVar3[6];
}



// FUNCTION 142412840 FUN_142412840 body=327 status=ok
// SIG undefined FUN_142412840(void)

void FUN_142412840(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  plVar1 = (longlong *)(param_1 + 0x8e0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar1,param_3);
  plVar3 = *(longlong **)(param_1 + 0x8c0);
  plVar6 = (longlong *)0x0;
  if ((plVar3 == (longlong *)0x0) ||
     (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,local_res8),
     *plVar3 != DAT_146af2778)) {
    plVar3 = plVar6;
    plVar8 = plVar6;
    if (0 < *(int *)(param_1 + 0x8b8)) {
      do {
        plVar4 = *(longlong **)((longlong)plVar8 + *(longlong *)(param_1 + 0x8b0));
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4,local_res20);
        if (*plVar4 == DAT_146af2778) goto LAB_142412916;
        uVar7 = (int)plVar3 + 1;
        plVar3 = (longlong *)(ulonglong)uVar7;
        plVar8 = plVar8 + 2;
      } while ((int)uVar7 < *(int *)(param_1 + 0x8b8));
    }
    if (*(char *)(param_1 + 0x899) == '\0') {
      lVar5 = operator_new(0x38);
      if (lVar5 != 0) {
        plVar6 = (longlong *)FGotoTimeInSecondsTask::FGotoTimeInSecondsTask(lVar5,param_1,param_2);
      }
      FUN_142408160(param_1,plVar6);
      return;
    }
  }
LAB_142412916:
  if (*(int *)(param_1 + 0x8e8) != 0) {
    if (((longlong *)*plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x8e8) != 0) {
        plVar6 = (longlong *)*plVar1;
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,0);
    }
    if ((*(int *)(param_1 + 0x8e8) != 0) &&
       (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*plVar1 != 0) {
        lVar5 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar5;
      }
      *(undefined4 *)(param_1 + 0x8e8) = 0;
    }
  }
  return;
}



// FUNCTION 142412990 FUN_142412990 body=894 status=ok
// SIG undefined FUN_142412990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142412990(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  LARGE_INTEGER local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong local_88;
  char local_74;
  longlong local_68;
  longlong local_60;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  longlong lVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(longlong **)(*(longlong *)(param_1 + 0x58) + 0x560) == param_2) {
    *(undefined1 *)(param_2 + 0x25) = 2;
    param_2[0xd1] = param_3;
    *(double *)(param_1 + 0x1e8) = (double)*(float *)(*(longlong *)(param_1 + 0x58) + 0x170);
    QueryPerformanceCounter(&local_d8);
    *(double *)(param_1 + 0x1f0) = (double)local_d8.QuadPart * DAT_1468b02f8 + 16777216.0;
    QueryPerformanceCounter(&local_d8);
    dVar3 = (double)local_d8.QuadPart * DAT_1468b02f8;
    *(undefined4 *)(param_1 + 300) = 3;
    *(longlong **)(param_1 + 0x30) = param_2;
    *(longlong **)(param_1 + 0x98) = param_2;
    *(double *)(param_1 + 0x1f8) = dVar3 + 16777216.0;
  }
  else {
    lVar8 = 0;
    uVar10 = 0;
    UEngine::GetLocalPlayerIterator
              (DAT_146b17150,&local_c8,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd0));
    while( true ) {
      if ((local_c0 < 0) || ((int)local_c8[1] <= local_c0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((!bVar4) || (*(longlong *)(*local_c8 + (longlong)local_c0 * 8) != 0)) break;
      local_c0 = local_c0 + 1;
    }
    if ((local_c0 < 0) || ((int)local_c8[1] <= local_c0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar8 = *(longlong *)(*local_c8 + (longlong)local_c0 * 8), lVar8 != 0)) {
      uVar10 = *(undefined4 *)(lVar8 + 0x38);
    }
    FUN_1425c1e40(param_1,param_2,param_3);
    lVar7 = *(longlong *)(param_1 + 0x58);
    if ((*(char *)(lVar7 + 0xa10) != '\0') && (lVar8 != 0)) {
      *(undefined4 *)(lVar8 + 0x38) = uVar10;
      lVar7 = *(longlong *)(param_1 + 0x58);
    }
    *(longlong **)(lVar7 + 0x560) = param_2;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd0);
    local_d8.QuadPart = FUN_1428dfc70();
    local_98[0] = 5;
    local_40 = '\0';
    local_e8 = uVar1;
    FUN_14044bc80(&local_90,&local_e8,&local_d8);
    FUN_14045a130(local_98);
    while (local_74 == '\0') {
      lVar7 = UUGRichTextBlock::GetPrivateStaticClass();
      iVar6 = *(int *)(lVar7 + 0x90);
      lVar8 = (longlong)iVar6;
      if ((*(int *)(*(longlong *)(local_68 + 0x10) + 0x90) < iVar6) ||
         (lVar8 = *(longlong *)(*(longlong *)(local_68 + 0x10) + 0x88),
         *(longlong *)(lVar8 + (longlong)iVar6 * 8) != lVar7 + 0x88)) {
        uVar5 = (uint)lVar8 & 0xffffff00;
      }
      else {
        uVar5 = (uint)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
      }
      if ((char)uVar5 != '\0') {
        lVar8 = *(longlong *)(local_68 + 0x168);
        if (lVar8 == 0) {
          uVar10 = (undefined4)DAT_1468b5da0;
          uVar11 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_d0 = DAT_1468b5da8;
        }
        else {
          local_a8 = *(float *)(lVar8 + 0x210);
          fStack_a4 = *(float *)(lVar8 + 0x214);
          fStack_a0 = *(float *)(lVar8 + 0x218);
          fStack_9c = *(float *)(lVar8 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_a4);
          auVar2._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_a8);
          auVar2._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_a0);
          auVar2._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_9c);
          iVar6 = movmskps(uVar5,auVar2);
          if (iVar6 != 0) {
            *(float *)(lVar8 + 0x250) = local_a8;
            *(float *)(lVar8 + 0x254) = fStack_a4;
            *(float *)(lVar8 + 600) = fStack_a0;
            *(float *)(lVar8 + 0x25c) = fStack_9c;
            puVar9 = (undefined8 *)FQuat::Rotator(&local_a8,&local_c8);
            *(undefined8 *)(lVar8 + 0x260) = *puVar9;
            *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          uVar10 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
          uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
          local_d0 = *(undefined4 *)(lVar8 + 0x268);
        }
        local_d8.s.HighPart = uVar11;
        local_d8.s.LowPart = uVar10;
        lVar8 = *(longlong *)(local_68 + 0x168);
        if (lVar8 == 0) {
          local_e8 = _DAT_1468b5d90;
          local_e0 = DAT_1468b5d98;
        }
        else {
          local_e8 = *(undefined8 *)(lVar8 + 0x220);
          local_e0 = *(undefined4 *)(lVar8 + 0x228);
        }
        local_b0 = local_e0;
        local_b8 = local_e8;
        (**(code **)(*param_2 + 0x730))(param_2,&local_b8,&local_d8);
        break;
      }
      FUN_14045a130(local_98);
    }
    if (local_40 != '\0') {
      local_40 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142412d10 FUN_142412d10 body=585 status=ok
// SIG undefined FUN_142412d10(void)

undefined8 FUN_142412d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  short *psVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  cVar5 = FUN_1425c25e0();
  if (cVar5 != '\0') {
    FURL::operator=(param_1 + 0x8f8,param_4);
    *(undefined4 *)(param_1 + 0x899) = 0x10000;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined2 *)(param_1 + 0x554) = 0;
    *(undefined8 *)(param_1 + 0x8f0) = 0;
    *(undefined4 *)(param_1 + 0x9d8) = 0xbf800000;
    FWeakObjectPtr::operator=(&local_38,0);
    *(undefined4 *)(param_1 + 0x9e0) = local_38;
    *(undefined4 *)(param_1 + 0x9e4) = local_34;
    *(undefined2 *)(param_1 + 0x9f8) = 0;
    *(undefined4 *)(param_1 + 0xb4c) = 0;
    *(undefined4 *)(param_1 + 0x9dc) = 0xbf800000;
    if (*(float *)(param_1 + 0x70) == 0.0) {
      *(undefined4 *)(param_1 + 0x70) = 0x40a00000;
    }
    FUN_14241e3e0(param_1);
    uVar6 = FURL::GetOption(param_4,L"ReplayStreamerOverride=",0);
    puVar7 = (undefined8 *)FName::FName(local_30,"NetworkReplayStreaming",1);
    uVar3 = *puVar7;
    uVar8 = FUN_14168dc80();
    plVar9 = (longlong *)FUN_141690010(uVar8,uVar3);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,uVar6);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,local_18);
    plVar13 = (longlong *)(param_1 + 0x568);
    if (plVar13 != plVar9) {
      *plVar13 = *plVar9;
      *plVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x570,plVar9 + 1);
    }
    lVar12 = -1;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_10 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    psVar10 = (short *)FURL::GetOption(param_4,L"ReplayStreamerDemoPath=",0);
    if ((psVar10 != (short *)0x0) && (*plVar13 != 0)) {
      local_28 = 0;
      local_20 = 0;
      if (*psVar10 != 0) {
        do {
          lVar12 = lVar12 + 1;
        } while (psVar10[lVar12] != 0);
        uVar11 = (int)lVar12 + 1;
        local_20 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,psVar10,(longlong)(int)uVar11 * 2);
      }
      (**(code **)(*(longlong *)*plVar13 + 0x1e0))((longlong *)*plVar13,&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142412f60 FUN_142412f60 body=1139 status=ok
// SIG undefined FUN_142412f60(void)

ulonglong FUN_142412f60(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong **pplVar13;
  wchar_t *_Str;
  longlong *plVar14;
  ulonglong in_stack_ffffffffffffff48;
  undefined4 uVar15;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *local_50;
  
  uVar8 = param_1[0x1a];
  if ((uVar8 == 0) || (*(longlong *)(uVar8 + 400) == 0)) {
LAB_142413012:
    return uVar8 & 0xffffffffffffff00;
  }
  cVar6 = (**(code **)(*param_1 + 0x280))
                    (param_1,1,param_2,param_3,in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                     param_4);
  if (cVar6 == '\0') {
    plVar11 = *(longlong **)(param_1[0x1a] + 400);
    local_88 = (longlong *)0x0;
    local_80 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"InitBase FAILED",0x20);
    uVar8 = (**(code **)(*plVar11 + 0x2c8))(plVar11,0,&local_88);
    if (local_88 != (longlong *)0x0) {
      uVar8 = FMemory::Free();
    }
    goto LAB_142413012;
  }
  bVar4 = false;
  bVar3 = true;
  FNetGUIDCache::SetNetworkChecksumMode(param_1[0x1c],2);
  FNetGUIDCache::SetAsyncLoadMode(param_1[0x1c],0 < *DAT_146af26a0);
  uVar9 = FUN_142923c30();
  uVar10 = GetTransientPackage();
  param_4 = param_4 & 0xffffffffffffff00;
  uVar15 = 0;
  plVar11 = (longlong *)NewObject<USaveGame>(uVar10,uVar9,0,0,0,param_4,0);
  param_1[0x12] = (longlong)plVar11;
  uVar8 = CONCAT44(uVar15,1000000);
  (**(code **)(*plVar11 + 800))(plVar11,param_1,2,param_3,uVar8,param_4 & 0xffffffff00000000);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  lVar12 = UGameInstance::GetFirstGamePlayer(*(undefined8 *)(param_1[0x1a] + 400));
  if (lVar12 != 0) {
    uVar9 = UGameInstance::GetFirstGamePlayer(*(undefined8 *)(param_1[0x1a] + 400));
    FUN_142547b50(uVar9,&local_58);
    if ((local_50 != (longlong *)0x0) && (cVar6 = (**(code **)(*local_50 + 0x20))(), cVar6 != '\0'))
    {
      if ((local_50 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*local_50 + 0x20))(), cVar6 == '\0')) {
        local_88 = (longlong *)0x0;
        local_80 = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        FGenericPlatformString::Memcpy(local_88,L"INVALID",0x10);
        pplVar13 = &local_88;
      }
      else {
        pplVar13 = (longlong **)(**(code **)(*local_50 + 0x28))(local_50,&local_68);
        bVar4 = true;
        bVar3 = false;
      }
      plVar11 = *pplVar13;
      *pplVar13 = (longlong *)0x0;
      uVar15 = *(undefined4 *)(pplVar13 + 1);
      uVar2 = *(undefined4 *)((longlong)pplVar13 + 0xc);
      pplVar13[1] = (longlong *)0x0;
      if ((bVar3) && (local_88 != (longlong *)0x0)) {
        FMemory::Free();
      }
      if ((bVar4) && (local_68 != (code *)0x0)) {
        FMemory::Free();
      }
      uVar5 = local_90;
      lVar12 = (longlong)(int)local_90;
      iVar7 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,iVar7);
      if (local_90._4_4_ < iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,uVar5 & 0xffffffff);
      }
      plVar14 = local_98 + lVar12 * 2;
      *plVar14 = (longlong)plVar11;
      *(undefined4 *)(plVar14 + 1) = uVar15;
      *(undefined4 *)((longlong)plVar14 + 0xc) = uVar2;
    }
    FUN_1404bf980(&local_58);
  }
  _Str = (wchar_t *)FURL::GetOption(param_1 + 0x11f,L"LevelPrefixOverride=",0);
  if (_Str != (wchar_t *)0x0) {
    iVar7 = _wtoi(_Str);
    *(int *)((longlong)param_1 + 0x53c) = iVar7;
  }
  lVar12 = UWorld::FindCollectionByType(param_1[0x1a],*(int *)((longlong)param_1 + 0x53c) != -1);
  if (lVar12 != 0) {
    *(longlong **)(lVar12 + 0x18) = param_1;
  }
  *(undefined1 *)((longlong)param_1 + 0xb61) = 1;
  *(undefined1 *)((longlong)param_1 + 0x89b) = 1;
  FString::operator=(param_1 + 0x16d,param_1 + 0x124);
  plVar11 = (longlong *)param_1[0xad];
  local_68 = FUN_14241ddb0;
  uStack_60 = 0;
  local_88 = (longlong *)0x0;
  plVar14 = (longlong *)FMemory::Realloc(0,0x30);
  local_80 = CONCAT44(local_80._4_4_,3);
  local_88 = plVar14;
  if (plVar14 != (longlong *)0x0) {
    *plVar14 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar14 + 1,param_1);
    *(undefined4 *)(plVar14 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)plVar14 + 0x14) = local_68._4_4_;
    *(undefined4 *)(plVar14 + 3) = uStack_60;
    *(undefined4 *)((longlong)plVar14 + 0x1c) = uStack_5c;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar14[5] = lVar12;
    *plVar14 = (longlong)&PTR_FUN_143fcff08;
  }
  local_78 = 0;
  local_70 = 0;
  lVar12 = *plVar11;
  uVar9 = FNetworkVersion::GetReplayVersion(&local_58);
  (**(code **)(lVar12 + 0x10))
            (plVar11,param_1 + 0x124,&local_78,&local_98,uVar8 & 0xffffffffffffff00,uVar9,&local_88)
  ;
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if ((int)local_80 != 0) {
    if (local_88 == (longlong *)0x0) goto LAB_14241337f;
    (**(code **)(*local_88 + 0x28))(local_88,0);
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
    }
    local_80 = local_80 & 0xffffffff00000000;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
LAB_14241337f:
  bVar1 = *(byte *)((longlong)param_1 + 0x89b);
  plVar11 = local_98;
  for (iVar7 = (int)local_90; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  return (ulonglong)bVar1;
}



// FUNCTION 1424133e0 FUN_1424133e0 body=906 status=ok
// SIG undefined FUN_1424133e0(void)

undefined1 FUN_1424133e0(longlong *param_1,longlong *param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_res18 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [40];
  void *local_70;
  int local_68;
  int local_64;
  
  FUN_14241e3e0();
  cVar3 = FUN_14241ce70(param_1,param_2);
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_1425b9f20(param_1[0x12],1,1);
  cVar3 = 0 < *DAT_146af2628;
  lVar4 = FURL::GetOption(param_1 + 0x11f,L"AsyncLoadWorldOverride=",0);
  if (lVar4 != 0) {
    cVar3 = FToBoolHelper::FromCStringWide(lVar4);
  }
  local_a8 = &LAB_14241a6d0;
  uStack_a0._0_4_ = 0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_a8;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_a0._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar4;
    *plVar5 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_res18);
    iVar2 = DAT_1464b57d8;
    lVar4 = (longlong)DAT_1464b57d8;
    DAT_1464b57d8 = DAT_1464b57d8 + 1;
    if (DAT_1464b57dc < DAT_1464b57d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar2);
    }
    puVar6 = (undefined8 *)(lVar4 * 0x10 + DAT_1464b57d0);
    *puVar6 = plVar5;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  if (*(int *)((longlong)param_1 + 0x53c) == -1) {
    if ((cVar3 == '\0') || (*(int *)(param_1[0x1a] + 0x708) == 3)) {
      FURL::FURL(local_98,0);
      ppvVar1 = (void **)param_1[0x137];
      if (&local_70 != ppvVar1) {
        local_68 = *(int *)(ppvVar1 + 1);
        lVar4 = (longlong)local_68;
        _Src = *ppvVar1;
        if ((local_68 == 0) && (local_64 == 0)) {
          local_64 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_68);
          _guard_xfg_dispatch_icall_nop(local_70,_Src,lVar4 * 2);
        }
      }
      lVar4 = FUN_1428761d0(DAT_146b17150,param_1[0x1a]);
      if (lVar4 == 0) {
        plVar5 = *(longlong **)(param_1[0x1a] + 400);
        FString::PrintfImpl(&local_a8,L"No world context");
        if (param_2 == &local_a8) {
          if (local_a8 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          if (*param_2 != 0) {
            FMemory::Free();
          }
          *param_2 = (longlong)local_a8;
          *(undefined4 *)(param_2 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)param_2 + 0xc) = uStack_a0._4_4_;
        }
        local_a8 = (undefined1 *)0x0;
        uStack_a0 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        FGenericPlatformString::Memcpy(local_a8,L"No world context",0x22);
        (**(code **)(*plVar5 + 0x2c8))(plVar5,0,&local_a8);
        if (local_a8 != (undefined1 *)0x0) {
          FMemory::Free();
        }
        FURL::~FURL(local_98);
        return 0;
      }
      *(undefined8 *)(param_1[0x1a] + 0x108) = 0;
      (**(code **)(*param_1 + 0x380))(param_1,0);
      uVar7 = GetTransientPackage();
      FUN_1417846f0(uVar7,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res18[0] = 0;
      uVar8 = UDemoPendingNetGame::GetPrivateStaticClass();
      lVar9 = FUN_1417985e0(uVar8,uVar7,0,0,0,0,0,0,0);
      *(longlong **)(lVar9 + 0x38) = param_1;
      FURL::operator=(lVar9 + 0x40,local_98);
      *(undefined1 *)(lVar9 + 0xb0) = 1;
      *(longlong *)(lVar4 + 0x1c8) = lVar9;
      FURL::~FURL(local_98);
    }
    else {
      TArray<FLevelNameAndTime,FDefaultAllocator>::operator=(param_1 + 0x140,param_1 + 0x137);
      FUN_14241bb10(param_1,0);
    }
  }
  else {
    FUN_14241e4b0(param_1);
  }
  return 1;
}



// FUNCTION 142413770 FUN_142413770 body=81 status=ok
// SIG undefined FUN_142413770(void)

void FUN_142413770(longlong *param_1)

{
  int in_stack_00000030;
  
  FUN_1425c28b0();
  if ((in_stack_00000030 == 0) || (0x800 < in_stack_00000030)) {
    in_stack_00000030 = 0x800;
  }
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  *(int *)(param_1 + 0x14) = in_stack_00000030;
                    /* WARNING: Could not recover jumptable at 0x0001424137ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1);
  return;
}



// FUNCTION 1424137d0 FUN_1424137d0 body=1348 status=ok
// SIG undefined FUN_1424137d0(void)

ulonglong FUN_1424137d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                       longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  DWORD DVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong local_res8;
  ulonglong uVar18;
  ulonglong in_stack_ffffffffffffff38;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong local_60 [2];
  longlong local_50 [3];
  
  uVar16 = 0;
  iVar14 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  pwVar7 = (wchar_t *)(**(code **)(*param_1 + 0x280))(param_1,0,param_2,param_3,param_4,param_5);
  if ((char)pwVar7 == '\0') {
LAB_1424138b0:
    return (ulonglong)pwVar7 & 0xffffffffffffff00;
  }
  FNetGUIDCache::SetNetworkChecksumMode(param_1[0x1c],2);
  lVar8 = UWorld::GetWorldSettings(param_1[0x1a],0,1);
  lVar12 = DAT_146af2748;
  if (lVar8 == 0) {
    pwVar7 = L"No WorldSettings!!";
    if ((wchar_t *)*param_5 != L"No WorldSettings!!") {
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x13);
        iVar14 = (int)param_5[1];
      }
      *(int *)(param_5 + 1) = iVar14 + 0x13;
      if (*(int *)((longlong)param_5 + 0xc) < iVar14 + 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar14);
      }
      builtin_wcsncpy((wchar_t *)*param_5,L"No WorldSettings!!",0x13);
      pwVar7 = (wchar_t *)0x0;
    }
    goto LAB_1424138b0;
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    uVar18 = 4;
    if (DVar6 == DAT_1468c21c0) goto LAB_14241390b;
  }
  else {
LAB_14241390b:
    uVar18 = uVar16;
  }
  *(bool *)(param_1 + 0x15c) = *(int *)(uVar18 + lVar12) != 0;
  uVar9 = GetTransientPackage();
  FUN_1417846f0(uVar9,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar10 = FUN_142923c30();
  uVar18 = 0;
  plVar11 = (longlong *)
            FUN_1417985e0(uVar10,uVar9,0,0,0,0,in_stack_ffffffffffffff38 & 0xffffffffffffff00,0,0);
  local_68 = plVar11;
  (**(code **)(*plVar11 + 800))(plVar11,param_1,3,param_3,1000000,uVar18 & 0xffffffff00000000);
  (**(code **)(*plVar11 + 0x2b0))(plVar11);
  FUN_1425b2240(param_1,plVar11);
  plVar11 = (longlong *)FURL::GetOption(param_3,L"DemoFriendlyName=",0);
  local_a8 = plVar11;
  lVar12 = FURL::GetOption(param_3,L"RecordMapChanges",0);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  *(bool *)(param_1 + 0x113) = lVar12 != 0;
  lVar12 = *(longlong *)(param_1[0x1a] + 0x148);
  if ((lVar12 != 0) && (uVar18 = uVar16, 0 < *(int *)(lVar12 + 0x478))) {
    do {
      lVar8 = *(longlong *)(uVar16 + *(longlong *)(lVar12 + 0x470));
      if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x484) & 5) == 0)) {
        plVar11 = (longlong *)FUniqueNetIdWrapper::ToString(lVar8 + 0x4b0,&local_78);
        uVar3 = local_90;
        lVar8 = (longlong)(int)local_90;
        iVar14 = (int)local_90 + 1;
        local_90 = CONCAT44(local_90._4_4_,iVar14);
        if (local_90._4_4_ < iVar14) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,uVar3 & 0xffffffff);
        }
        plVar15 = local_98 + lVar8 * 2;
        *plVar15 = 0;
        *plVar15 = *plVar11;
        *plVar11 = 0;
        *(int *)(plVar15 + 1) = (int)plVar11[1];
        *(undefined4 *)((longlong)plVar15 + 0xc) = *(undefined4 *)((longlong)plVar11 + 0xc);
        plVar11[1] = 0;
        if (local_78 != (code *)0x0) {
          FMemory::Free();
        }
      }
      uVar17 = (int)uVar18 + 1;
      uVar16 = uVar16 + 8;
      plVar11 = local_a8;
      uVar18 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)(lVar12 + 0x478));
  }
  bVar2 = false;
  bVar1 = true;
  *(undefined1 *)((longlong)param_1 + 0xb61) = 1;
  FString::operator=(param_1 + 0x16d,param_1 + 0x124);
  uStack_70 = 0;
  local_78 = FUN_14241ddb0;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)FUN_1428cc8c0(param_1[0x1a],local_60);
  }
  else {
    local_80 = 0;
    local_88 = 0;
    if ((short)*plVar11 != 0) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (*(short *)((longlong)plVar11 + lVar12 * 2) != 0);
      uVar17 = (int)lVar12 + 1;
      local_80 = (ulonglong)uVar17;
      if (0 < (int)uVar17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      }
      FGenericPlatformString::Memcpy(local_88,plVar11,(longlong)(int)uVar17 * 2);
    }
    plVar11 = &local_88;
    bVar2 = true;
    bVar1 = false;
  }
  plVar15 = (longlong *)param_1[0xad];
  local_a8 = (longlong *)0x0;
  plVar13 = (longlong *)FMemory::Realloc(0,0x30);
  local_a0 = 3;
  local_a8 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar13 + 1,param_1);
    *(undefined4 *)(plVar13 + 2) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar13 + 0x14) = local_78._4_4_;
    *(undefined4 *)(plVar13 + 3) = uStack_70;
    *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_6c;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar13[5] = lVar12;
    *plVar13 = (longlong)&PTR_FUN_143fcff08;
  }
  lVar12 = *plVar15;
  uVar9 = FNetworkVersion::GetReplayVersion(local_50);
  (**(code **)(lVar12 + 0x10))(plVar15,param_1 + 0x124,plVar11,&local_98,1,uVar9,&local_a8);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    if (local_a8 == (longlong *)0x0) goto LAB_142413c3e;
    (**(code **)(*local_a8 + 0x28))(local_a8,0);
    if (local_a8 != (longlong *)0x0) {
      local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
    }
    local_a0 = 0;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
LAB_142413c3e:
  if ((bVar1) && (local_60[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_88 != 0)) {
    FMemory::Free();
  }
  local_res8 = *(ulonglong *)(*(longlong *)(param_1[0x1a] + 0x20) + 0x18);
  FName::ToString(&local_res8,&local_78);
  FUN_142407d90(param_1,&local_78);
  if (local_78 != (code *)0x0) {
    FMemory::Free();
  }
  bVar5 = FUN_1424280c0(param_1,param_5);
  FUN_142422c50(param_1,local_68,param_3);
  plVar11 = local_98;
  for (iVar14 = (int)local_90; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  return (ulonglong)bVar5;
}



// FUNCTION 142413d20 FUN_142413d20 body=82 status=ok
// SIG undefined FUN_142413d20(void)

void FUN_142413d20(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x2ea
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::InitLocalConnection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x2ea
             ,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 142413d80 FUN_142413d80 body=82 status=ok
// SIG undefined FUN_142413d80(void)

void FUN_142413d80(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x2dd
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::InitRemoteConnection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x2dd
             ,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 142413de0 FUN_142413de0 body=1220 status=ok
// SIG undefined FUN_142413de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142413de0(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  int local_cc;
  ulonglong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  void *local_b0;
  longlong *local_a8;
  uint local_a0;
  void *local_98;
  int local_90;
  longlong *local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  local_40[2] = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c0 = (longlong *)0x0;
  local_b8 = 0;
  FConfigCacheIni::GetSectionNames(DAT_1468b6148,&DAT_146af27a0,&local_c0);
  local_60 = 0;
  local_58 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
  FGenericPlatformString::Memcpy(local_60,L"@split",0xe);
  local_50 = 0;
  local_48 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
  FGenericPlatformString::Memcpy(local_50,L"@split3p",0x12);
  local_40[0] = 0;
  local_40[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Memcpy(local_40[0],L"@split4p",0x12);
  local_a8 = (longlong *)0x0;
  local_c8 = 3;
  local_a0 = 3;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_a8,3,0);
  lVar12 = (longlong)local_a8 - (longlong)&local_60;
  puVar6 = &local_60;
  iVar15 = 3;
  do {
    *(undefined8 *)((longlong)puVar6 + lVar12) = 0;
    iVar3 = *(int *)(puVar6 + 1);
    pvVar1 = (void *)*puVar6;
    *(int *)((longlong)puVar6 + lVar12 + 8) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)puVar6 + lVar12 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                ((undefined8 *)((longlong)puVar6 + lVar12),iVar3,0);
      _guard_xfg_dispatch_icall_nop
                (*(void **)((longlong)puVar6 + lVar12),pvVar1,(longlong)iVar3 * 2);
    }
    puVar6 = puVar6 + 2;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  plVar7 = local_40 + 2;
  uVar9 = local_c8;
  do {
    plVar8 = plVar7 + -2;
    plVar7 = plVar7 + -2;
    uVar9 = uVar9 - 1;
    if (*plVar8 != 0) {
      FMemory::Free();
    }
  } while (uVar9 != 0);
  uVar10 = 0;
  uVar14 = 0;
  local_c8 = local_c8 & 0xffffffff00000000;
  UDeviceProfileManager::GetActiveProfileName(&local_98);
  uVar9 = (ulonglong)(int)local_a0;
  local_88 = local_a8 + uVar9 * 2;
  if (local_a8 != local_88) {
    plVar7 = local_a8;
    do {
      iVar3 = 1;
      iVar15 = (int)plVar7[1];
      if (local_90 < 2) {
        pvVar1 = (void *)*plVar7;
        puVar13 = (undefined2 *)0x0;
        local_d8 = (undefined2 *)0x0;
        local_d0 = iVar15;
        if (iVar15 == 0) {
          local_cc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar15,0);
          puVar13 = local_d8;
          _guard_xfg_dispatch_icall_nop(local_d8,pvVar1,(longlong)iVar15 * 2);
        }
      }
      else {
        iVar2 = iVar15 + -1;
        if (iVar15 == 0) {
          iVar2 = 0;
        }
        if ((local_90 != 0) || (iVar2 == 0)) {
          iVar3 = 0;
        }
        local_e8 = (undefined2 *)0x0;
        local_e0._0_4_ = local_90;
        puVar13 = (undefined2 *)0x0;
        if ((local_90 == 0) && (iVar2 + iVar3 == 0)) {
          local_e0._4_4_ = 0;
          iVar15 = local_90;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar2 + iVar3 + local_90,0);
          puVar13 = local_e8;
          _guard_xfg_dispatch_icall_nop(local_e8,local_98,(longlong)local_90 * 2);
          iVar15 = (int)local_e0;
        }
        local_b0 = (void *)*plVar7;
        iVar16 = local_e0._4_4_;
        iVar3 = iVar15;
        if (iVar2 != 0) {
          local_e0._0_4_ = iVar2 + (uint)(iVar15 == 0) + iVar15;
          if (local_e0._4_4_ < (int)local_e0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar15);
            puVar13 = local_e8;
          }
          iVar16 = local_e0._4_4_;
          iVar3 = (int)local_e0;
          _guard_xfg_dispatch_icall_nop
                    (puVar13 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)),local_b0,
                     (longlong)iVar2 * 2);
          (puVar13 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)))[iVar2] = 0;
        }
        local_e8 = (undefined2 *)0x0;
        local_e0 = 0;
        local_d8 = puVar13;
        local_d0 = iVar3;
        local_cc = iVar16;
        uVar10 = (uint)local_c8;
      }
      iVar15 = local_d0;
      lVar12 = UDeviceProfile::GetPrivateStaticClass();
      local_b0 = *(void **)(lVar12 + 0x18);
      FName::ToString(&local_b0,&local_80);
      puVar5 = &DAT_143f3eda8;
      if (local_78 != 0) {
        puVar5 = local_80;
      }
      puVar4 = &DAT_143f3eda8;
      if (iVar15 != 0) {
        puVar4 = puVar13;
      }
      FString::PrintfImpl(&local_70,L"%s %s",puVar4,puVar5);
      if (local_80 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar11 = local_c0 + (longlong)(int)local_b8 * 2;
      for (plVar8 = local_c0; plVar8 != plVar11; plVar8 = plVar8 + 2) {
        puVar5 = &DAT_143f3eda8;
        if (local_68 != 0) {
          puVar5 = local_70;
        }
        if ((int)plVar8[1] == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*plVar8;
        }
        iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (iVar15 == 0) {
          lVar12 = UDeviceProfileManager::FindProfile(DAT_146af2458,&local_d8);
          uVar10 = uVar10 & 0xff;
          if (lVar12 != 0) {
            uVar10 = 1;
          }
          local_c8 = CONCAT44(local_c8._4_4_,uVar10);
          puVar13 = local_d8;
          break;
        }
      }
      uVar14 = (undefined1)uVar10;
      if (local_70 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (puVar13 != (undefined2 *)0x0) {
        FMemory::Free(puVar13);
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != local_88);
    uVar9 = (ulonglong)local_a0;
  }
  plVar7 = local_a8;
  *(undefined1 *)(DAT_146af2458 + 0xa8) = uVar14;
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  uVar10 = (uint)uVar9;
  plVar8 = plVar7;
  while (uVar10 != 0) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
    uVar10 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar10;
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  plVar7 = local_c0;
  for (iVar15 = (int)local_b8; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_c0 != (longlong *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}



// FUNCTION 1424142b0 FUN_1424142b0 body=170 status=ok
// SIG undefined FUN_1424142b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424142b0(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x2a0))(param_2), cVar1 != '\0')) {
    FUN_1424004a0(param_1,param_2);
    return;
  }
  iVar2 = 0;
  local_28 = 0;
  param_1[6] = 0;
  if (param_1[7] != 1) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 4,1);
    iVar2 = param_1[6];
  }
  param_1[6] = iVar2 + 1;
  if ((int)param_1[7] < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 4);
  }
  *param_1 = 0x10101;
  *(undefined8 *)(param_1 + 1) = 0;
  **(undefined4 **)(param_1 + 4) = (undefined4)local_28;
  return;
}



// FUNCTION 142414360 FUN_142414360 body=205 status=ok
// SIG undefined FUN_142414360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142414360(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x2a8))(param_2), cVar1 != '\0')) {
    FUN_1424006e0(param_1,param_2);
    return;
  }
  iVar2 = 0;
  local_28 = 0;
  local_20 = 0;
  param_1[6] = 0;
  if (param_1[7] != 3) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 4,3);
    iVar2 = param_1[6];
  }
  param_1[6] = iVar2 + 3;
  if ((int)param_1[7] < iVar2 + 3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 4);
  }
  *param_1 = 0x30101;
  *(undefined8 *)(param_1 + 1) = 0;
  **(undefined4 **)(param_1 + 4) = (undefined4)local_28;
  *(undefined4 *)(*(longlong *)(param_1 + 4) + 4) = local_28._4_4_;
  *(undefined4 *)(*(longlong *)(param_1 + 4) + 8) = (undefined4)local_20;
  return;
}



// FUNCTION 142414430 FUN_142414430 body=568 status=ok
// SIG undefined FUN_142414430(void)

void FUN_142414430(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong *local_res8;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar8 = *param_1;
  iVar11 = *(int *)(lVar8 + 0x1c);
  if (*(int *)(lVar8 + 0x1c) <= *(int *)(lVar8 + 0x18)) {
    iVar11 = *(int *)(lVar8 + 0x18);
  }
  iVar3 = *(int *)(lVar8 + 0x20);
  if (*(int *)(lVar8 + 0x20) <= iVar11) {
    iVar3 = iVar11;
  }
  if (0.0 < (float)iVar3) {
    param_1[3] = param_2;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_38);
      local_res8 = param_1;
      FUN_142416790(&PTR_PTR_146532040);
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(&DAT_146532118,&local_res8);
      QueryPerformanceCounter(&local_res20);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_38._0_4_);
      return;
    }
    pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar7 = TlsGetValue(*pDVar6);
    plVar10 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 2) = 0;
        plVar10 = plVar7;
      }
      TlsSetValue(*pDVar6,plVar10);
      plVar7 = plVar10;
    }
    plVar10 = (longlong *)plVar7[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar7;
      if (plVar10 == (longlong *)0x0) {
        lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
        plVar7[1] = lVar8;
        if (lVar8 == 0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar7[1] = (longlong)puVar9;
          lVar8 = 0x1f;
          do {
            puVar2 = puVar9 + 0x20;
            *puVar9 = puVar2;
            lVar8 = lVar8 + -1;
            puVar9 = puVar2;
          } while (lVar8 != 0);
          *puVar2 = 0;
        }
        plVar10 = (longlong *)plVar7[1];
        iVar11 = 0x20;
        *(undefined4 *)(plVar7 + 2) = 0x20;
      }
      else {
        iVar11 = 0x20;
        plVar7[1] = (longlong)plVar10;
        *(undefined4 *)(plVar7 + 2) = 0x20;
        *plVar7 = 0;
      }
    }
    else {
      iVar11 = (int)plVar7[2];
    }
    plVar7[1] = *plVar10;
    *(int *)(plVar7 + 2) = iVar11 + -1;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    local_30 = 0;
    local_28 = 0;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *(undefined1 *)(plVar10 + 3) = 0;
    *plVar10 = (longlong)&PTR_FUN_1450961f8;
    plVar10[4] = 0;
    plVar10[2] = (longlong)param_1;
    lVar8 = plVar10[4];
    piVar1 = (int *)(lVar8 + 0x48);
    if (lVar8 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(plVar10,0,0xff,1);
    if (lVar8 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(lVar8);
      }
    }
  }
  return;
}



// FUNCTION 142414670 FUN_142414670 body=4221 status=ok
// SIG undefined FUN_142414670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014241506f) */

void FUN_142414670(char param_1)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 **ppuVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  uint uVar22;
  uint *puVar23;
  undefined2 *puVar24;
  undefined4 uVar25;
  undefined2 *puVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined1 local_340;
  undefined2 *local_338;
  char local_328;
  uint local_324;
  undefined2 *local_320;
  uint local_318;
  int local_314;
  uint *local_310;
  undefined8 local_308;
  undefined2 *local_300;
  undefined8 local_2f8;
  wchar_t *local_2f0;
  undefined8 local_2e8;
  int local_2e0;
  undefined8 local_2d8;
  uint *local_2d0;
  undefined8 local_2c8;
  int local_2c0 [2];
  wchar_t *local_2b8;
  undefined8 local_2b0;
  wchar_t *local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 local_280;
  undefined2 **local_278;
  wchar_t *local_270;
  undefined8 local_268;
  wchar_t *local_260;
  undefined8 local_258;
  wchar_t *local_250;
  undefined8 local_248;
  wchar_t *local_240;
  undefined8 local_238;
  int local_230 [2];
  undefined8 local_228;
  undefined8 local_220;
  wchar_t *local_218;
  undefined8 local_210;
  wchar_t *local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  ulonglong local_1f0;
  undefined2 *local_1e8;
  int local_1e0;
  wchar_t **local_1d8;
  wchar_t **local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined4 local_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  undefined2 *local_1a8;
  uint local_1a0;
  uint **local_198;
  undefined8 uStack_190;
  uint *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  wchar_t **local_168;
  wchar_t **local_160;
  wchar_t **local_158;
  longlong *local_150;
  longlong local_148 [2];
  uint **local_138;
  undefined8 uStack_130;
  uint *puStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint *local_108;
  undefined8 local_100;
  uint local_f8 [4];
  uint *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  uint *local_c8;
  uint local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68 [4];
  wchar_t *local_48;
  wchar_t *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  puVar26 = (undefined2 *)0x0;
  local_2c0[0] = 0;
  bVar28 = DAT_146af2458 == 0;
  local_328 = param_1;
  if (bVar28) {
    ppuVar8 = (undefined2 **)UDeviceProfileManager::GetActiveProfileName(&local_1d8);
  }
  else {
    local_278 = *(undefined2 ***)(*(longlong *)(DAT_146af2458 + 0x50) + 0x18);
    FName::ToString(&local_278,&local_1e8);
    ppuVar8 = &local_1e8;
  }
  local_1a0 = *(uint *)(ppuVar8 + 1);
  pwVar21 = (wchar_t *)(longlong)(int)local_1a0;
  puVar24 = *ppuVar8;
  local_1a8 = (undefined2 *)0x0;
  puVar14 = puVar26;
  if (local_1a0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a8,local_1a0,0);
    puVar14 = local_1a8;
    _guard_xfg_dispatch_icall_nop(local_1a8,puVar24,(longlong)pwVar21 * 2);
    pwVar21 = (wchar_t *)(ulonglong)local_1a0;
  }
  if ((bVar28) && (local_1d8 != (wchar_t **)0x0)) {
    FMemory::Free();
  }
  if ((!bVar28) && (local_1e8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(&local_1d8);
  if (*(int *)(puVar9 + 1) == 0) {
    local_338 = &DAT_143f3eda8;
  }
  else {
    local_338 = (undefined2 *)*puVar9;
  }
  local_340 = 1;
  local_348 = (undefined8 *)((ulonglong)local_348 & 0xffffffffffffff00);
  FConfigCacheIni::LoadGlobalIniFile(&DAT_146af27a0,L"DeviceProfiles",0,0);
  if (local_1d8 != (wchar_t **)0x0) {
    FMemory::Free();
  }
  local_288 = (longlong *)0x0;
  local_280 = 0;
  FConfigCacheIni::GetSectionNames(DAT_1468b6148,&DAT_146af27a0,&local_288);
  local_300 = (undefined2 *)0x0;
  local_2f8 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_300,0);
  FGenericPlatformString::Memcpy(local_300,L"DeviceProfiles",0x1e);
  local_278 = &local_300;
  TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
            (&local_288,&local_278);
  if (local_300 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (DAT_146af2458 != 0) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Empty(DAT_146af2458 + 0x58,0);
  }
  local_320 = (undefined2 *)0x0;
  uVar17 = (uint)pwVar21;
  local_318 = uVar17;
  if (uVar17 == 0) {
    local_314 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_320,(ulonglong)pwVar21 & 0xffffffff,0);
    puVar26 = local_320;
    _guard_xfg_dispatch_icall_nop(local_320,puVar14,(longlong)(int)uVar17 * 2);
    pwVar21 = (wchar_t *)(ulonglong)local_318;
  }
  if (1 < (int)pwVar21) {
    do {
      lVar10 = UDeviceProfile::GetPrivateStaticClass();
      local_2d8 = *(undefined8 *)(lVar10 + 0x18);
      FName::ToString(&local_2d8,&local_1e8);
      puVar24 = &DAT_143f3eda8;
      if (local_1e0 != 0) {
        puVar24 = local_1e8;
      }
      puVar14 = &DAT_143f3eda8;
      if ((int)pwVar21 != 0) {
        puVar14 = puVar26;
      }
      FString::PrintfImpl(&local_300,L"%s %s",puVar14,puVar24);
      if (local_1e8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar18 = local_288 + (longlong)(int)local_280 * 2;
      for (plVar13 = local_288; plVar13 != plVar18; plVar13 = plVar13 + 2) {
        puVar24 = &DAT_143f3eda8;
        if ((int)local_2f8 != 0) {
          puVar24 = local_300;
        }
        if ((int)plVar13[1] == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*plVar13;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar24);
        if (iVar4 == 0) {
          bVar28 = true;
          goto LAB_14241499c;
        }
      }
      bVar28 = false;
LAB_14241499c:
      if (bVar28) {
        local_68[0] = L"_Largest";
        local_68[1] = L"_Larger";
        local_2e0 = 0;
        local_68[2] = L"_Default";
        local_68[3] = L"_Smaller";
        local_48 = L"_Smallest";
        local_40 = L"_Tiniest";
        do {
          iVar4 = local_2e0;
          puVar11 = (uint *)0x0;
          local_2c8 = 6;
          local_2d0 = puVar11;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
          puVar15 = local_2d0;
          FGenericPlatformString::Memcpy(local_2d0,L"CVars",0xc);
          if (iVar4 == 0) {
            iVar4 = FUN_1415aa300();
            uVar2 = local_2c8;
            lVar10 = -1;
            pwVar21 = local_68[iVar4];
            do {
              lVar10 = lVar10 + 1;
            } while (pwVar21[lVar10] != L'\0');
            iVar4 = (int)lVar10;
            if (iVar4 != 0) {
              iVar6 = (int)local_2c8;
              lVar10 = (longlong)(int)local_2c8;
              iVar5 = (uint)((int)local_2c8 == 0) + iVar4 + (int)local_2c8;
              local_2c8 = CONCAT44(local_2c8._4_4_,iVar5);
              if (local_2c8._4_4_ < iVar5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,uVar2 & 0xffffffff);
                puVar15 = local_2d0;
              }
              puVar26 = (undefined2 *)((longlong)puVar15 + (lVar10 - (ulonglong)(iVar6 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(puVar26,pwVar21,(longlong)iVar4 * 2);
              puVar26[iVar4] = 0;
            }
          }
          puVar23 = (uint *)&DAT_143f3eda8;
          if ((int)local_2c8 != 0) {
            puVar23 = puVar15;
          }
          local_308 = 0;
          puVar26 = &DAT_143f3eda8;
          if ((int)local_2f8 != 0) {
            puVar26 = local_300;
          }
          local_348 = &DAT_146af27a0;
          local_310 = puVar11;
          FConfigCacheIni::GetArray(DAT_1468b6148,puVar26,puVar23,&local_310);
          local_d8 = 0xffffffff;
          local_100 = 0;
          local_e0 = 0;
          local_108 = puVar11;
          local_e8 = puVar11;
          local_d4 = 0;
          local_c8 = puVar11;
          local_c0 = 0;
          while( true ) {
            pwVar19 = (wchar_t *)0x0;
            uVar17 = (uint)puVar11;
            local_324 = uVar17;
            iVar4 = (int)local_308;
            puVar15 = local_310;
            if (((int)uVar17 < 0) || ((int)local_308 <= (int)uVar17)) break;
            local_2b0 = 0;
            local_238 = 0;
            local_210 = 2;
            local_2b8 = pwVar19;
            local_240 = pwVar19;
            local_218 = pwVar19;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
            pwVar21 = local_218;
            FGenericPlatformString::Memcpy(local_218,&DAT_145089c1c,4);
            iVar4 = (int)local_210;
            puVar15 = local_310 + (longlong)(int)uVar17 * 4;
            local_348 = (undefined8 *)CONCAT44(local_348._4_4_,0xffffffff);
            pwVar19 = L"";
            if ((int)local_210 != 0) {
              pwVar19 = pwVar21;
            }
            iVar6 = FUN_141592950(puVar15,pwVar19,1);
            local_2d8 = CONCAT44(local_2d8._4_4_,iVar6);
            if (iVar6 < 0) {
              bVar28 = false;
            }
            else {
              iVar5 = puVar15[2] - 1;
              if (puVar15[2] == 0) {
                pwVar21 = L"";
                iVar5 = 0;
              }
              else {
                pwVar21 = *(wchar_t **)puVar15;
              }
              local_270 = (wchar_t *)0x0;
              pwVar19 = (wchar_t *)0x0;
              uVar25 = 0;
              if (iVar6 < iVar5) {
                iVar5 = iVar6;
              }
              iVar6 = iVar5 + 1;
              if (iVar5 == 0) {
                iVar6 = 0;
              }
              local_268._4_4_ = 0;
              local_268._0_4_ = iVar6;
              if ((0 < iVar6) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0),
                 uVar25 = local_268._4_4_, iVar6 = (int)local_268, pwVar19 = local_270,
                 0 < (int)local_268)) {
                wcsncpy(local_270,pwVar21,(longlong)iVar5);
                pwVar19[iVar5] = L'\0';
              }
              if (local_2b8 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              local_270 = (wchar_t *)0x0;
              local_2b0 = CONCAT44(uVar25,iVar6);
              local_268 = 0;
              if (iVar4 == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = iVar4 + -1;
              }
              pwVar20 = (wchar_t *)0x0;
              uVar7 = iVar4 + (int)local_2d8;
              uVar1 = puVar15[2];
              uVar17 = uVar7 + 0x7fffffff;
              uVar22 = 0;
              uVar27 = uVar1 - 1;
              if (uVar1 == 0) {
                uVar27 = 0;
              }
              if (uVar7 < uVar27) {
                uVar27 = uVar7;
              }
              uVar7 = uVar1 - 1;
              if (uVar1 == 0) {
                uVar7 = uVar22;
              }
              uVar16 = uVar27;
              if ((uVar27 <= uVar17) && (uVar16 = uVar7, uVar17 < uVar7)) {
                uVar16 = uVar17;
              }
              if (uVar1 == 0) {
                puVar26 = &DAT_143f3eda8;
              }
              else {
                puVar26 = *(undefined2 **)puVar15;
              }
              iVar4 = uVar16 - uVar27;
              local_260 = (wchar_t *)0x0;
              uVar17 = iVar4 + 1;
              if (iVar4 == 0) {
                uVar17 = 0;
              }
              local_258._4_4_ = 0;
              local_2b8 = pwVar19;
              local_258._0_4_ = uVar17;
              if ((0 < (int)uVar17) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0),
                 uVar22 = local_258._4_4_, uVar17 = (uint)local_258, pwVar20 = local_260,
                 0 < (int)(uint)local_258)) {
                wcsncpy(local_260,puVar26 + (int)uVar27,(longlong)iVar4);
                pwVar20[iVar4] = L'\0';
              }
              if (local_240 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              bVar28 = true;
              local_260 = (wchar_t *)0x0;
              local_238 = CONCAT44(uVar22,uVar17);
              local_258 = 0;
              pwVar21 = local_218;
              uVar17 = local_324;
              local_240 = pwVar20;
            }
            if (pwVar21 != (wchar_t *)0x0) {
              FMemory::Free(pwVar21);
            }
            if (bVar28) {
              TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
              ::FindId(&local_108,local_230,&local_2b8);
              puVar15 = (uint *)0x0;
              if (local_230[0] != -1) {
                puVar15 = local_108 + (longlong)local_230[0] * 10;
              }
              puVar11 = puVar15 + 4;
              if (puVar15 == (uint *)0x0) {
                puVar11 = (uint *)0x0;
              }
              if (puVar11 != (uint *)0x0) {
                TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Remove(&local_108,&local_2b8);
              }
              local_168 = &local_2b8;
              local_160 = &local_240;
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                        (&local_108,local_170,&local_168);
            }
            if (local_240 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            if (local_2b8 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            puVar11 = (uint *)(ulonglong)(uVar17 + 1);
          }
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            if (*(longlong *)puVar15 != 0) {
              FMemory::Free();
            }
            puVar15 = puVar15 + 4;
          }
          local_308._4_4_ = (uint)((ulonglong)local_308 >> 0x20);
          bVar28 = local_308._4_4_ != 0;
          uVar17 = 0;
          local_308 = (ulonglong)local_308._4_4_ << 0x20;
          if (bVar28) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_310);
          }
          puStack_1c0 = local_f8;
          uStack_1c4 = 1;
          uStack_1b4 = 0;
          local_1c8 = uVar17;
          if ((int)local_e0 != 0) {
            puVar15 = local_f8;
            if (local_e8 != (uint *)0x0) {
              puVar15 = local_e8;
            }
            uVar1 = *puVar15;
            uVar22 = uVar17;
            pwVar21 = pwVar19;
            pwVar20 = pwVar19;
            while (uVar1 == 0) {
              iVar4 = (int)pwVar21;
              uVar22 = (int)pwVar20 + 0x20;
              pwVar20 = (wchar_t *)(ulonglong)uVar22;
              local_1c8 = iVar4 + 1;
              pwVar21 = (wchar_t *)(ulonglong)local_1c8;
              uStack_1b4 = (ulonglong)uVar22 << 0x20;
              if ((int)((int)local_e0 + -1 + ((int)local_e0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
                uStack_1b4 = CONCAT44(uVar22,(int)local_e0);
                goto LAB_142414f59;
              }
              uVar1 = puVar15[(longlong)iVar4 + 1];
            }
            uStack_1c4 = -uVar1 & uVar1;
            iVar4 = 0x1f;
            if (uStack_1c4 != 0) {
              for (; uStack_1c4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            if (uStack_1c4 == 0) {
              iVar4 = 0x20;
            }
            else {
              iVar4 = 0x1f - iVar4;
            }
            iVar4 = (uVar22 - iVar4) + 0x1f;
            if ((int)local_e0 < iVar4) {
              iVar4 = (int)local_e0;
            }
            uStack_1b4._4_4_ = (undefined4)((ulonglong)uStack_1b4 >> 0x20);
            uStack_1b4 = CONCAT44(uStack_1b4._4_4_,iVar4);
          }
LAB_142414f59:
          local_1b8 = 0xffffffff;
          local_198 = &local_108;
          uStack_190 = CONCAT44(uStack_1c4,local_1c8);
          uStack_120 = 0xffffffff;
          iStack_11c = (int)uStack_1b4;
          uStack_118 = uStack_1b4._4_4_;
          uStack_114 = uStack_1ac;
          uStack_180 = CONCAT44((int)uStack_1b4,0xffffffff);
          local_178 = uStack_1b4._4_4_;
          uStack_174 = uStack_1ac;
          iVar4 = (int)uStack_1b4;
          local_188 = puStack_1c0;
          local_138 = local_198;
          uStack_130 = uStack_190;
          puStack_128 = puStack_1c0;
          if ((int)uStack_1b4 < (int)local_e0) {
            do {
              lVar10 = (longlong)iVar4;
              puVar15 = *local_198;
              if (puVar15[lVar10 * 10 + 6] == 0) {
                puVar26 = &DAT_143f3eda8;
              }
              else {
                puVar26 = *(undefined2 **)(puVar15 + lVar10 * 10 + 4);
              }
              if (puVar15[lVar10 * 10 + 2] == 0) {
                puVar24 = &DAT_143f3eda8;
              }
              else {
                puVar24 = *(undefined2 **)(puVar15 + lVar10 * 10);
              }
              FString::PrintfImpl(&local_228,L"%s=%s",puVar24,puVar26);
              lVar10 = (longlong)(int)local_308;
              iVar4 = (int)local_308 + 1;
              local_308 = CONCAT44(local_308._4_4_,iVar4);
              if ((int)local_308._4_4_ < iVar4) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_310);
              }
              puVar15 = local_310 + lVar10 * 4;
              puVar15[0] = 0;
              puVar15[1] = 0;
              *(undefined8 *)puVar15 = local_228;
              puVar15[2] = (uint)local_220;
              puVar15[3] = local_220._4_4_;
              local_220 = 0;
              local_228 = 0;
              uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 & ~uStack_190._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
              iVar4 = uStack_180._4_4_;
            } while (uStack_180._4_4_ < (int)local_188[6]);
          }
          local_c0 = uVar17;
          if (local_c8 != (uint *)0x0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Empty(&local_108);
          if (local_e8 != (uint *)0x0) {
            FMemory::Free();
          }
          cVar3 = local_328;
          if (local_108 != (uint *)0x0) {
            FMemory::Free();
            cVar3 = local_328;
          }
          while( true ) {
            local_324 = uVar17;
            pwVar21 = (wchar_t *)0x0;
            uVar17 = (uint)pwVar19;
            iVar4 = (int)local_308;
            puVar15 = local_310;
            if (((int)uVar17 < 0) || ((int)local_308 <= (int)uVar17)) break;
            local_2e8 = 0;
            local_2a0 = 0;
            local_200 = 2;
            local_2f0 = pwVar21;
            local_2a8 = pwVar21;
            local_208 = pwVar21;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
            pwVar21 = local_208;
            FGenericPlatformString::Memcpy(local_208,&DAT_145089d2c,4);
            iVar4 = (int)local_200;
            puVar15 = local_310 + (longlong)(int)uVar17 * 4;
            local_348 = (undefined8 *)CONCAT44(local_348._4_4_,0xffffffff);
            pwVar19 = L"";
            if ((int)local_200 != 0) {
              pwVar19 = pwVar21;
            }
            iVar6 = FUN_141592950(puVar15,pwVar19,1);
            local_2d8 = CONCAT44(local_2d8._4_4_,iVar6);
            if (iVar6 < 0) {
              bVar28 = false;
            }
            else {
              iVar5 = puVar15[2] - 1;
              if (puVar15[2] == 0) {
                pwVar21 = L"";
                iVar5 = 0;
              }
              else {
                pwVar21 = *(wchar_t **)puVar15;
              }
              local_250 = (wchar_t *)0x0;
              pwVar19 = (wchar_t *)0x0;
              uVar25 = 0;
              if (iVar6 < iVar5) {
                iVar5 = iVar6;
              }
              iVar6 = iVar5 + 1;
              if (iVar5 == 0) {
                iVar6 = 0;
              }
              local_248._4_4_ = 0;
              local_248._0_4_ = iVar6;
              if ((0 < iVar6) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0),
                 uVar25 = local_248._4_4_, iVar6 = (int)local_248, pwVar19 = local_250,
                 0 < (int)local_248)) {
                wcsncpy(local_250,pwVar21,(longlong)iVar5);
                pwVar19[iVar5] = L'\0';
              }
              if (local_2f0 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              local_250 = (wchar_t *)0x0;
              local_2e8 = CONCAT44(uVar25,iVar6);
              local_248 = 0;
              if (iVar4 == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = iVar4 + -1;
              }
              pwVar20 = (wchar_t *)0x0;
              uVar7 = iVar4 + (int)local_2d8;
              uVar1 = puVar15[2];
              uVar17 = uVar7 + 0x7fffffff;
              uVar22 = 0;
              uVar27 = uVar1 - 1;
              if (uVar1 == 0) {
                uVar27 = 0;
              }
              if (uVar7 < uVar27) {
                uVar27 = uVar7;
              }
              uVar7 = uVar1 - 1;
              if (uVar1 == 0) {
                uVar7 = uVar22;
              }
              uVar16 = uVar27;
              if ((uVar27 <= uVar17) && (uVar16 = uVar7, uVar17 < uVar7)) {
                uVar16 = uVar17;
              }
              if (uVar1 == 0) {
                puVar26 = &DAT_143f3eda8;
              }
              else {
                puVar26 = *(undefined2 **)puVar15;
              }
              iVar4 = uVar16 - uVar27;
              local_298 = (wchar_t *)0x0;
              uVar17 = iVar4 + 1;
              if (iVar4 == 0) {
                uVar17 = 0;
              }
              local_290._4_4_ = 0;
              local_2f0 = pwVar19;
              local_290._0_4_ = uVar17;
              if ((0 < (int)uVar17) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0),
                 uVar22 = local_290._4_4_, uVar17 = (uint)local_290, pwVar20 = local_298,
                 0 < (int)(uint)local_290)) {
                wcsncpy(local_298,puVar26 + (int)uVar27,(longlong)iVar4);
                pwVar20[iVar4] = L'\0';
              }
              if (local_2a8 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              bVar28 = true;
              local_298 = (wchar_t *)0x0;
              local_2a0 = CONCAT44(uVar22,uVar17);
              local_290 = 0;
              pwVar21 = local_208;
              cVar3 = local_328;
              uVar17 = local_324;
              local_2a8 = pwVar20;
            }
            if (pwVar21 != (wchar_t *)0x0) {
              FMemory::Free(pwVar21);
            }
            if (bVar28) {
              TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
              ::FindId(&local_b8,local_2c0,&local_2f0);
              lVar10 = 0;
              if (local_2c0[0] != -1) {
                lVar10 = local_b8 + (longlong)local_2c0[0] * 0x28;
              }
              lVar12 = lVar10 + 0x10;
              if (lVar10 == 0) {
                lVar12 = 0;
              }
              if (lVar12 == 0) {
                if (DAT_1468b1f88 == (longlong *)0x0) {
                  IConsoleManager::SetupSingleton();
                }
                pwVar21 = L"";
                if ((int)local_2e8 != 0) {
                  pwVar21 = local_2f0;
                }
                plVar13 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,pwVar21);
                if (((plVar13 != (longlong *)0x0) && (DAT_146af2458 != 0)) && (cVar3 != '\0')) {
                  (**(code **)(*plVar13 + 0x78))(plVar13,local_148);
                  local_158 = &local_2f0;
                  local_150 = local_148;
                  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                            (DAT_146af2458 + 0x58,local_16c,&local_158,0);
                  if (local_148[0] != 0) {
                    FMemory::Free();
                  }
                }
                local_348 = (undefined8 *)((ulonglong)local_348 & 0xffffffffffffff00);
                pwVar21 = L"";
                if ((int)local_2a0 != 0) {
                  pwVar21 = local_2a8;
                }
                pwVar19 = L"";
                if ((int)local_2e8 != 0) {
                  pwVar19 = local_2f0;
                }
                puVar26 = &DAT_143f3eda8;
                if (DAT_146af27a8 != 0) {
                  puVar26 = DAT_146af27a0;
                }
                FUN_141653cc0(puVar26,pwVar19,pwVar21);
                local_1d8 = &local_2f0;
                local_1d0 = &local_2a8;
                TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                          (&local_b8,&local_278,&local_1d8);
              }
            }
            if (local_2a8 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            if (local_2f0 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            pwVar19 = (wchar_t *)(ulonglong)(uVar17 + 1);
            uVar17 = uVar17 + 1;
          }
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            if (*(longlong *)puVar15 != 0) {
              FMemory::Free();
            }
            puVar15 = puVar15 + 4;
          }
          if (local_310 != (uint *)0x0) {
            FMemory::Free(local_310);
          }
          if (local_2d0 != (uint *)0x0) {
            FMemory::Free(local_2d0);
          }
          local_2e0 = local_2e0 + 1;
        } while (local_2e0 < 2);
        puVar26 = &DAT_143f3eda8;
        if ((int)local_2f8 != 0) {
          puVar26 = local_300;
        }
        local_1f0 = 0;
        local_348 = &DAT_146af27a0;
        local_1f8 = pwVar21;
        cVar3 = FConfigCacheIni::GetString(DAT_1468b6148,puVar26,L"BaseProfileName",&local_1f8);
        pwVar19 = local_1f8;
        puVar26 = local_320;
        if (cVar3 == '\0') {
          local_318 = 0;
          if (local_314 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_320,0);
            pwVar21 = (wchar_t *)(ulonglong)local_318;
            puVar26 = local_320;
          }
        }
        else {
          lVar10 = (longlong)(int)(uint)local_1f0;
          local_318 = (uint)local_1f0;
          if (((uint)local_1f0 == 0) && (local_314 == 0)) {
            pwVar21 = (wchar_t *)0x0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&local_320,local_1f0 & 0xffffffff,local_314);
            puVar26 = local_320;
            _guard_xfg_dispatch_icall_nop(local_320,pwVar19,lVar10 * 2);
            pwVar21 = (wchar_t *)(ulonglong)local_318;
          }
        }
        if (local_1f8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if ((int)pwVar21 < 2) goto LAB_142415605;
        bVar28 = false;
      }
      else {
LAB_142415605:
        bVar28 = true;
      }
      if (local_300 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    } while (!bVar28);
  }
  if (puVar26 != (undefined2 *)0x0) {
    FMemory::Free(puVar26);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_b8,0);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  plVar13 = local_288;
  for (iVar4 = (int)local_280; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_288 != (longlong *)0x0) {
    FMemory::Free(local_288);
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424156f0 FUN_1424156f0 body=4253 status=ok
// SIG undefined FUN_1424156f0(void)

void FUN_1424156f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined8 local_488;
  longlong *local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 local_460;
  longlong *local_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined8 local_438;
  longlong *local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined8 local_410;
  longlong *local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined8 local_370;
  longlong *local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [16];
  undefined1 local_118 [24];
  undefined1 local_100 [16];
  undefined1 local_f0 [24];
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [16];
  undefined1 local_a0 [24];
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  plVar6 = DAT_1469e9d88;
  uVar5 = DAT_1469e9d80;
  uVar8 = DAT_1469e9d78;
  if (DAT_146af28cc == '\0') {
    DAT_146af28cc = '\x01';
    if (DAT_1469e9d88 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9d88 + 1) = (int)DAT_1469e9d88[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_res8,"DefaultPawn_MoveForward",1);
    local_4a0 = *puVar7;
    local_498 = 0x3f800000;
    local_490 = uVar8;
    local_488 = uVar5;
    local_480 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    FUN_14289f010(&local_4a0);
    plVar6 = local_480;
    if (local_480 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_480 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_480)(local_480);
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
    plVar6 = DAT_1469e9d28;
    uVar5 = DAT_1469e9d20;
    uVar8 = DAT_1469e9d18;
    if (DAT_1469e9d28 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9d28 + 1) = (int)DAT_1469e9d28[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_res10,"DefaultPawn_MoveForward",1);
    local_478 = *puVar7;
    local_470 = 0xbf800000;
    local_468 = uVar8;
    local_460 = uVar5;
    local_458 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_478);
    plVar6 = local_458;
    if (local_458 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_458 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_458)(local_458);
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
    plVar6 = DAT_1469e9a10;
    uVar5 = DAT_1469e9a08;
    uVar8 = DAT_1469e9a00;
    if (DAT_1469e9a10 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9a10 + 1) = (int)DAT_1469e9a10[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_res18,"DefaultPawn_MoveForward",1);
    local_450 = *puVar7;
    local_448 = 0x3f800000;
    local_440 = uVar8;
    local_438 = uVar5;
    local_430 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_450);
    plVar6 = local_430;
    if (local_430 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_430 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_430)(local_430);
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
    plVar6 = DAT_1469e9a40;
    uVar5 = DAT_1469e9a38;
    uVar8 = DAT_1469e9a30;
    if (DAT_1469e9a40 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9a40 + 1) = (int)DAT_1469e9a40[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_res20,"DefaultPawn_MoveForward",1);
    local_428 = *puVar7;
    local_420 = 0xbf800000;
    local_418 = uVar8;
    local_410 = uVar5;
    local_408 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_428);
    plVar6 = local_408;
    if (local_408 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_408 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_408)(local_408);
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
    plVar6 = DAT_1469ea400;
    uVar5 = DAT_1469ea3f8;
    uVar8 = DAT_1469ea3f0;
    if (DAT_1469ea400 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea400 + 1) = (int)DAT_1469ea400[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_1a8,"DefaultPawn_MoveForward",1);
    local_4c8 = *puVar7;
    local_4c0 = 0x3f800000;
    local_4b8 = uVar8;
    local_4b0 = uVar5;
    local_4a8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_4c8);
    plVar6 = local_4a8;
    if (local_4a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4a8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_4a8)(local_4a8);
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
    plVar6 = DAT_1469e9b78;
    uVar5 = DAT_1469e9b70;
    uVar8 = DAT_1469e9b68;
    if (DAT_1469e9b78 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9b78 + 1) = (int)DAT_1469e9b78[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_1a0,"DefaultPawn_MoveRight",1);
    local_400 = *puVar7;
    local_3f8 = 0xbf800000;
    local_3f0 = uVar8;
    local_3e8 = uVar5;
    local_3e0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_400);
    plVar6 = local_3e0;
    if (local_3e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_3e0)(local_3e0);
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
    plVar6 = DAT_1469e9bc0;
    uVar5 = DAT_1469e9bb8;
    uVar8 = DAT_1469e9bb0;
    if (DAT_1469e9bc0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9bc0 + 1) = (int)DAT_1469e9bc0[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_198,"DefaultPawn_MoveRight",1);
    local_3d8 = *puVar7;
    local_3d0 = 0x3f800000;
    local_3c8 = uVar8;
    local_3c0 = uVar5;
    local_3b8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_3d8);
    plVar6 = local_3b8;
    if (local_3b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3b8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_3b8)(local_3b8);
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
    plVar6 = DAT_1469ea3e8;
    uVar5 = DAT_1469ea3e0;
    uVar8 = DAT_1469ea3d8;
    if (DAT_1469ea3e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea3e8 + 1) = (int)DAT_1469ea3e8[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_190,"DefaultPawn_MoveRight",1);
    local_3b0 = *puVar7;
    local_3a8 = 0x3f800000;
    local_3a0 = uVar8;
    local_398 = uVar5;
    local_390 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_3b0);
    plVar6 = local_390;
    if (local_390 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_390 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_390)(local_390);
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
    plVar6 = DAT_1469ea478;
    uVar5 = DAT_1469ea470;
    uVar8 = DAT_1469ea468;
    if (DAT_1469ea478 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea478 + 1) = (int)DAT_1469ea478[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_188,"DefaultPawn_MoveUp",1);
    local_388 = *puVar7;
    local_380 = 0x3f800000;
    local_378 = uVar8;
    local_370 = uVar5;
    local_368 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_388);
    plVar6 = local_368;
    if (local_368 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_368 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_368)(local_368);
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
    plVar6 = DAT_1469ea490;
    uVar5 = DAT_1469ea488;
    uVar8 = DAT_1469ea480;
    if (DAT_1469ea490 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea490 + 1) = (int)DAT_1469ea490[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_1b0,"DefaultPawn_MoveUp",1);
    local_360 = *puVar7;
    local_358 = 0xbf800000;
    local_350 = uVar8;
    local_348 = uVar5;
    local_340 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_360);
    plVar6 = local_340;
    if (local_340 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_340 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_340)(local_340);
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
    plVar6 = DAT_1469ea508;
    uVar5 = DAT_1469ea500;
    uVar8 = DAT_1469ea4f8;
    if (DAT_1469ea508 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea508 + 1) = (int)DAT_1469ea508[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_180,"DefaultPawn_MoveUp",1);
    local_338 = *puVar7;
    local_330 = 0x3f800000;
    local_328 = uVar8;
    local_320 = uVar5;
    local_318 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_338);
    plVar6 = local_318;
    if (local_318 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_318 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_318)(local_318);
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
    plVar6 = DAT_1469ea0d0;
    uVar5 = DAT_1469ea0c8;
    uVar8 = DAT_1469ea0c0;
    if (DAT_1469ea0d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea0d0 + 1) = (int)DAT_1469ea0d0[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_178,"DefaultPawn_MoveUp",1);
    local_310 = *puVar7;
    local_308 = 0xbf800000;
    local_300 = uVar8;
    local_2f8 = uVar5;
    local_2f0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_310);
    plVar6 = local_2f0;
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2f0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2f0)(local_2f0);
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
    plVar6 = DAT_1469e9980;
    uVar5 = DAT_1469e9978;
    uVar8 = DAT_1469e9970;
    if (DAT_1469e9980 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9980 + 1) = (int)DAT_1469e9980[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_170,"DefaultPawn_MoveUp",1);
    local_2e8 = *puVar7;
    local_2e0 = 0x3f800000;
    local_2d8 = uVar8;
    local_2d0 = uVar5;
    local_2c8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_2e8);
    plVar6 = local_2c8;
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2c8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2c8)(local_2c8);
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
    plVar6 = DAT_1469e9ba8;
    uVar5 = DAT_1469e9ba0;
    uVar8 = DAT_1469e9b98;
    if (DAT_1469e9ba8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9ba8 + 1) = (int)DAT_1469e9ba8[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_168,"DefaultPawn_MoveUp",1);
    local_2c0 = *puVar7;
    local_2b8 = 0xbf800000;
    local_2b0 = uVar8;
    local_2a8 = uVar5;
    local_2a0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_2c0);
    plVar6 = local_2a0;
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2a0)(local_2a0);
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
    plVar6 = DAT_1469e9bd8;
    uVar5 = DAT_1469e9bd0;
    uVar8 = DAT_1469e9bc8;
    if (DAT_1469e9bd8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9bd8 + 1) = (int)DAT_1469e9bd8[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_160,"DefaultPawn_MoveUp",1);
    local_298 = *puVar7;
    local_290 = 0x3f800000;
    local_288 = uVar8;
    local_280 = uVar5;
    local_278 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_298);
    plVar6 = local_278;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_278 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_278)(local_278);
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
    plVar6 = DAT_1469e9cf8;
    uVar5 = DAT_1469e9cf0;
    uVar8 = DAT_1469e9ce8;
    if (DAT_1469e9cf8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9cf8 + 1) = (int)DAT_1469e9cf8[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_158,"DefaultPawn_MoveUp",1);
    local_270 = *puVar7;
    local_260 = uVar8;
    local_258 = uVar5;
    local_268 = 0xbf800000;
    local_250 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    FUN_14289f010(&local_270);
    FKey::~FKey(&local_260);
    local_1e8 = DAT_1469ea408;
    local_1e0 = DAT_1469ea410;
    local_1d8 = DAT_1469ea418;
    if (DAT_1469ea418 != 0) {
      LOCK();
      *(int *)(DAT_1469ea418 + 8) = *(int *)(DAT_1469ea418 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_150,"DefaultPawn_TurnRate",1);
    uVar8 = FInputAxisKeyMapping::FInputAxisKeyMapping(local_128,*puVar7,&local_1e8,0x3f800000);
    FUN_14289f010(uVar8);
    FKey::~FKey(local_118);
    local_218 = DAT_1469e99e8;
    local_210 = DAT_1469e99f0;
    local_208 = DAT_1469e99f8;
    if (DAT_1469e99f8 != 0) {
      LOCK();
      *(int *)(DAT_1469e99f8 + 8) = *(int *)(DAT_1469e99f8 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_148,"DefaultPawn_TurnRate",1);
    uVar8 = FInputAxisKeyMapping::FInputAxisKeyMapping(local_100,*puVar7,&local_218,0xbf800000);
    FUN_14289f010(uVar8);
    FKey::~FKey(local_f0);
    local_200 = DAT_1469e9a18;
    local_1f8 = DAT_1469e9a20;
    local_1f0 = DAT_1469e9a28;
    if (DAT_1469e9a28 != 0) {
      LOCK();
      *(int *)(DAT_1469e9a28 + 8) = *(int *)(DAT_1469e9a28 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_140,"DefaultPawn_TurnRate",1);
    uVar8 = FInputAxisKeyMapping::FInputAxisKeyMapping(local_d8,*puVar7,&local_200,0x3f800000);
    FUN_14289f010(uVar8);
    FKey::~FKey(local_c8);
    local_248 = DAT_1469e97f0;
    local_240 = DAT_1469e97f8;
    local_238 = DAT_1469e9800;
    if (DAT_1469e9800 != 0) {
      LOCK();
      *(int *)(DAT_1469e9800 + 8) = *(int *)(DAT_1469e9800 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_138,"DefaultPawn_Turn",1);
    uVar8 = FInputAxisKeyMapping::FInputAxisKeyMapping(local_b0,*puVar7,&local_248,0x3f800000);
    FUN_14289f010(uVar8);
    FKey::~FKey(local_a0);
    local_230 = DAT_1469ea420;
    local_228 = DAT_1469ea428;
    local_220 = DAT_1469ea430;
    if (DAT_1469ea430 != 0) {
      LOCK();
      *(int *)(DAT_1469ea430 + 8) = *(int *)(DAT_1469ea430 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_130,"DefaultPawn_LookUpRate",1);
    uVar8 = FInputAxisKeyMapping::FInputAxisKeyMapping(local_88,*puVar7,&local_230,0x3f800000);
    FUN_14289f010(uVar8);
    FKey::~FKey(local_78);
    local_1d0 = DAT_1469e9808;
    local_1c8 = DAT_1469e9810;
    local_1c0 = DAT_1469e9818;
    if (DAT_1469e9818 != 0) {
      LOCK();
      *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_1b8,"DefaultPawn_LookUp",1);
    uVar8 = FInputAxisKeyMapping::FInputAxisKeyMapping(local_60,*puVar7,&local_1d0,0xbf800000);
    FUN_14289f010(uVar8);
    FKey::~FKey(local_50);
  }
  return;
}



// FUNCTION 142416790 FUN_142416790 body=879 status=ok
// SIG undefined FUN_142416790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142416790(longlong param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  char cVar3;
  DWORD DVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  int *piVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_b8 [15];
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  pvVar2 = ThreadLocalStoragePointer;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0xfc) != '\0') {
    return;
  }
  uVar10 = (ulonglong)_tls_index;
  *(undefined1 *)(param_1 + 0xfc) = 1;
  piVar12 = (int *)(*(longlong *)((longlong)pvVar2 + uVar10 * 8) + 0x38);
  lVar13 = 0;
  if ((*piVar12 < DAT_146af2960) && (_Init_thread_header(&DAT_146af2960), DAT_146af2960 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DistanceFieldBuild.EightBit");
    lVar8 = lVar13;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146af2958 = lVar8;
    _Init_thread_footer(&DAT_146af2960);
  }
  lVar8 = DAT_146af2958;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar6 = 4;
    if (DVar4 == DAT_1468c21c0) goto LAB_14241683f;
  }
  else {
LAB_14241683f:
    lVar6 = lVar13;
  }
  uVar5 = 0x15;
  if (*(int *)(lVar6 + lVar8) != 0) {
    uVar5 = 3;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  if ((*piVar12 < DAT_146af2970) && (_Init_thread_header(&DAT_146af2970), DAT_146af2970 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DistanceFields.AtlasSizeXY");
    lVar8 = lVar13;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146af2968 = lVar8;
    _Init_thread_footer(&DAT_146af2970);
  }
  lVar8 = DAT_146af2968;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar6 = 4;
    if (DVar4 != DAT_1468c21c0) goto LAB_14241689e;
  }
  lVar6 = lVar13;
LAB_14241689e:
  uVar5 = *(undefined4 *)(lVar6 + lVar8);
  if ((*piVar12 < DAT_146af2980) && (_Init_thread_header(&DAT_146af2980), DAT_146af2980 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DistanceFields.AtlasSizeZ");
    lVar8 = lVar13;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146af2978 = lVar8;
    _Init_thread_footer(&DAT_146af2980);
  }
  lVar8 = DAT_146af2978;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), lVar6 = 4, DVar4 == DAT_1468c21c0)) {
    lVar6 = lVar13;
  }
  uVar1 = *(undefined4 *)(lVar6 + lVar8);
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_40 = (undefined8 *)0x0;
  local_38 = 1;
  TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
            (local_b8,0);
  puVar9 = local_b8;
  if (local_40 != (undefined8 *)0x0) {
    puVar9 = local_40;
  }
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0xffffffffffffffff;
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined2 *)((longlong)puVar9 + 0xc) = 0;
    uVar11 = (undefined2)uVar5;
    *(undefined2 *)((longlong)puVar9 + 0xe) = uVar11;
    *(undefined2 *)(puVar9 + 2) = uVar11;
    *(short *)((longlong)puVar9 + 0x12) = (short)uVar1;
    *(undefined1 *)((longlong)puVar9 + 0x14) = 0;
  }
  FTextureLayout3d::operator=(param_1 + 0x40,&local_c8);
  if (local_40 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142416b00 InitializeRawEntry body=39 status=ok
// SIG undefined InitializeRawEntry(void)

undefined8
UDistributionFloat::InitializeRawEntry(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x298))(param_1,param_2,0,0);
  *param_3 = uVar1;
  return 1;
}



// FUNCTION 142416b50 InitializeRawEntry body=61 status=ok
// SIG undefined InitializeRawEntry(void)

undefined8
UDistributionFloatUniformCurve::InitializeRawEntry
          (longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_res8,param_2,0);
  *param_3 = local_res8;
  param_3[1] = local_resc;
  return 2;
}



// FUNCTION 142416b90 InitializeRawEntry body=83 status=ok
// SIG undefined InitializeRawEntry(void)

undefined8
UDistributionVector::InitializeRawEntry(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x298))(param_1,&local_18,param_2,0,0,0);
  *param_3 = local_18;
  param_3[2] = local_10;
  param_3[1] = local_14;
  return 3;
}



// FUNCTION 142416bf0 InitializeRawEntry body=128 status=ok
// SIG undefined InitializeRawEntry(void)

undefined8
UDistributionVectorUniform::InitializeRawEntry
          (longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_28);
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  *param_3 = local_28;
  param_3[1] = local_24;
  param_3[2] = local_20;
  param_3[3] = local_18;
  param_3[4] = local_14;
  param_3[5] = local_10;
  return 6;
}



// FUNCTION 142416c70 InitializeRawEntry body=99 status=ok
// SIG undefined InitializeRawEntry(void)

undefined8
UDistributionVectorUniformCurve::InitializeRawEntry
          (longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_28,param_2,0);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_20;
  *(undefined4 *)(param_3 + 2) = local_18;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_14;
  return 6;
}



// FUNCTION 142416ce0 InitializeWithConstant body=30 status=ok
// SIG undefined InitializeWithConstant(void)

void FComposableFloatDistribution::InitializeWithConstant(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  BuildConstantLookupTable(param_1,1,local_res10);
  return;
}



// FUNCTION 142416d00 InitializeWithConstant body=13 status=ok
// SIG undefined InitializeWithConstant(void)

void FComposableVectorDistribution::InitializeWithConstant(undefined8 param_1,undefined8 param_2)

{
  BuildConstantLookupTable(param_1,3,param_2);
  return;
}



// FUNCTION 142416d10 InsertUninitialized body=117 status=ok
// SIG undefined InsertUninitialized(void)

void TArray<FTextureLODGroup,FDefaultAllocator>::InsertUninitialized
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)((longlong)param_2 * 0x50 + *param_1);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)param_3 * 0x50 + (longlong)_Src),_Src,
             (longlong)(iVar1 - param_2) * 0x50);
  return;
}



// FUNCTION 142416d90 IsCreated body=34 status=ok
// SIG undefined IsCreated(void)

undefined1 FRawDistributionFloat::IsCreated(longlong param_1)

{
  if ((((DAT_146531ff4 == 0) || (*(int *)(param_1 + 0x18) == 0)) || (*(char *)(param_1 + 1) == '\0')
      ) && (*(longlong *)(param_1 + 0x30) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142416dc0 IsCreated body=34 status=ok
// SIG undefined IsCreated(void)

undefined1 FRawDistributionVector::IsCreated(longlong param_1)

{
  if ((((DAT_146531ff4 == 0) || (*(int *)(param_1 + 0x18) == 0)) || (*(char *)(param_1 + 1) == '\0')
      ) && (*(longlong *)(param_1 + 0x48) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142416df0 FUN_142416df0 body=34 status=ok
// SIG undefined FUN_142416df0(void)

undefined1 FUN_142416df0(longlong param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x540) < 3) {
    cVar1 = FUN_1425c4750();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142416e20 FUN_142416e20 body=152 status=ok
// SIG undefined FUN_142416e20(void)

undefined8 FUN_142416e20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(param_1 + 0x8c0);
  if ((plVar1 != (longlong *)0x0) &&
     (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8), *plVar1 == *param_2)) {
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8b8)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x8b0));
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8);
      if (*plVar1 == *param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0x8b8));
  }
  return 0;
}



// FUNCTION 142416ee0 FUN_142416ee0 body=36 status=ok
// SIG undefined FUN_142416ee0(void)

undefined8 FUN_142416ee0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x89c) == '\0') &&
     ((*(longlong *)(param_1 + 0x90) == 0 || (*(int *)(*(longlong *)(param_1 + 0x90) + 300) == 1))))
  {
    return 0;
  }
  return 1;
}



// FUNCTION 142416f10 IsRecording body=39 status=ok
// SIG undefined IsRecording(void)

ulonglong UDemoNetDriver::IsRecording(longlong param_1)

{
  longlong *in_RAX;
  
  if (0 < *(int *)(param_1 + 0xa0)) {
    in_RAX = *(longlong **)(param_1 + 0x98);
    if ((*in_RAX != 0) && (*(int *)(*in_RAX + 300) != 1)) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142416f80 IsValidDistanceFieldVolume body=43 status=ok
// SIG undefined IsValidDistanceFieldVolume(void)

undefined8 FDistanceFieldVolumeTexture::IsValidDistanceFieldVolume(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = *(int *)(lVar1 + 0x1c);
  if (*(int *)(lVar1 + 0x1c) <= *(int *)(lVar1 + 0x18)) {
    iVar3 = *(int *)(lVar1 + 0x18);
  }
  iVar2 = *(int *)(lVar1 + 0x20);
  if (*(int *)(lVar1 + 0x20) <= iVar3) {
    iVar2 = iVar3;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),0.0 < (float)iVar2);
}



// FUNCTION 142416fb0 FUN_142416fb0 body=119 status=ok
// SIG undefined FUN_142416fb0(void)

void FUN_142416fb0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x70))();
  *(float *)(param_1 + 0x544) = (float)uVar1 * 0.001;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x70))();
  uVar1 = iVar2 - 5000U;
  if (iVar2 - 5000U == 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_142412840(param_1,(float)uVar1 * 0.001,&local_18);
  }
  return;
}



// FUNCTION 142417030 ListMeshDistanceFields body=307 status=ok
// SIG undefined ListMeshDistanceFields(void)

void FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  ulonglong local_48;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  uVar5 = 0;
  local_48 = 0;
  local_3c = 0;
  iVar2 = (&DAT_1464ca1c4)[(longlong)*(int *)(param_1 + 0x30) * 10];
  uVar7 = uVar5;
  uVar10 = uVar5;
  uVar11 = uVar5;
  uVar12 = uVar5;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    do {
      iVar8 = (int)uVar10;
      uStack_30 = 0xbf800000;
      plVar3 = *(longlong **)(uVar12 + *(longlong *)(param_1 + 0xe8));
      local_40 = iVar8 + 1;
      lVar4 = *plVar3;
      local_38 = (longlong)
                 (*(int *)(lVar4 + 0x20) * *(int *)(lVar4 + 0x1c) * *(int *)(lVar4 + 0x18) * iVar2)
                 + (ulonglong)*(uint *)(lVar4 + 0x10);
      local_28 = plVar3[3];
      if ((int)uVar11 < (int)local_40) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_48,uVar10);
        uVar11 = (ulonglong)local_3c;
        uVar5 = local_48;
      }
      uVar6 = (int)uVar7 + 1;
      puVar1 = (undefined4 *)(uVar5 + (longlong)iVar8 * 0x18);
      *puVar1 = (undefined4)local_38;
      puVar1[1] = local_38._4_4_;
      puVar1[2] = uStack_30;
      puVar1[3] = uStack_2c;
      *(longlong *)(uVar5 + 0x10 + (longlong)iVar8 * 0x18) = local_28;
      uVar7 = (ulonglong)uVar6;
      uVar10 = (ulonglong)local_40;
      uVar12 = uVar12 + 8;
      uVar9 = local_40;
    } while ((int)uVar6 < *(int *)(param_1 + 0xf0));
  }
  AlgoImpl::
  IntroSortInternal<FMeshDistanceFieldStats,FIdentityFunctor,TDereferenceWrapper<FMeshDistanceFieldStats,_FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields_::_2_::FMeshDistanceFieldStatsSorter>_>
            (uVar5,(longlong)(int)uVar9,local_res8[0],local_res8);
  if (uVar5 == 0) {
    return;
  }
  FMemory::Free(uVar5);
  return;
}



// FUNCTION 142417170 FUN_142417170 body=6990 status=ok
// SIG undefined FUN_142417170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142417170(uint *param_1,longlong *param_2,longlong param_3)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint *puVar13;
  int *piVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined1 local_298;
  undefined8 local_290;
  undefined1 local_288;
  byte local_278 [8];
  longlong local_270;
  uint local_268 [2];
  uint *local_260;
  undefined8 local_258;
  uint local_250 [2];
  uint *local_248;
  int local_240 [2];
  uint *local_238;
  uint *local_230;
  undefined8 local_228;
  undefined8 local_220;
  int local_218 [2];
  longlong *local_210;
  undefined8 local_208;
  longlong local_200;
  int local_1f8;
  longlong local_1f4;
  longlong local_1e8 [2];
  longlong local_1d8;
  void *local_1c0;
  uint local_1b8;
  int local_1b4;
  longlong local_1b0;
  longlong *local_1a0;
  int local_198;
  longlong local_190;
  undefined1 local_178 [40];
  void *local_150;
  uint local_148;
  int local_144;
  uint local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  longlong local_f8;
  int local_f0 [2];
  undefined8 local_e8;
  uint local_e0;
  uint *local_d8;
  longlong local_d0;
  int local_c8;
  undefined8 local_b8;
  char local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_250[0] = 0;
  local_230 = param_1;
  local_210 = param_2;
  local_200 = param_3;
  if ((char)param_1[0x2b8] != '\0') {
    lVar7 = (**(code **)(*param_2 + 0x98))(param_2);
    if (0 < lVar7) {
      plVar15 = (longlong *)param_2[1];
      local_270 = 0;
      if ((longlong *)plVar15[1] < (longlong *)*plVar15 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_270,8);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_270,8);
        }
      }
      else {
        local_270 = *(longlong *)*plVar15;
        *plVar15 = *plVar15 + 8;
      }
    }
    FUN_14241e4b0(param_1);
  }
  param_1[0x2b6] = 0;
  param_1[0x2b7] = 0;
  if ((5 < param_1[0x25f]) && (lVar7 = (**(code **)(*param_2 + 0x98))(param_2), 0 < lVar7)) {
    plVar15 = (longlong *)param_2[1];
    if ((uint *)plVar15[1] < (uint *)*plVar15 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_250,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_250,4);
      }
    }
    else {
      local_250[0] = *(uint *)*plVar15;
      *plVar15 = *plVar15 + 4;
    }
  }
  if (local_250[0] == param_1[0x156]) {
    plVar15 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_142407e40(param_1,*(longlong *)(param_1 + 0x158));
      plVar15 = *(longlong **)(param_1 + 0x158);
    }
    local_218[0] = 0;
    if ((plVar15 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar15 + 0x758))(), lVar7 != 0)) {
      uVar11 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x758))();
      FWeakObjectPtr::operator=(&local_228,uVar11);
      lVar7 = *(longlong *)(param_1 + 0x38);
      local_270 = (longlong)local_228;
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::FindId(lVar7 + 0x50,local_268,&local_270);
      if ((local_268[0] == 0xffffffff) ||
         (lVar7 = *(longlong *)(lVar7 + 0x50) + (longlong)(int)local_268[0] * 0x14, lVar7 == 0)) {
        local_218[0] = 0;
      }
      else {
        local_218[0] = *(int *)(lVar7 + 8);
      }
      if (local_218[0] != 0) {
        uVar11 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x758))();
        FUN_142407e40(param_1,uVar11);
      }
    }
    FUN_14241a8a0(param_1,0);
    bVar27 = false;
    DAT_146535554 = DAT_146535554 + 1;
    lVar7 = *(longlong *)(param_1 + 0x34);
    lVar26 = (longlong)(DAT_146535548 + -1);
    if (-1 < DAT_146535548 + -1) {
      lVar8 = lVar26 << 4;
      bVar27 = false;
      do {
        if (((*(int *)(lVar8 + 8 + DAT_146535540) == 0) ||
            (plVar15 = *(longlong **)(lVar8 + DAT_146535540), plVar15 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar15 + 0x40))(plVar15,lVar7), cVar5 == '\0')) {
          bVar27 = true;
        }
        lVar8 = lVar8 + -0x10;
        lVar26 = lVar26 + -1;
      } while (-1 < lVar26);
    }
    iVar22 = DAT_146535548;
    DAT_146535554 = DAT_146535554 + -1;
    if ((bVar27) && (DAT_146535554 < 1)) {
      iVar23 = 0;
      if (0 < DAT_146535548) {
        lVar7 = 0;
        do {
          if (((*(int *)(lVar7 + 8 + DAT_146535540) == 0) ||
              (*(longlong **)(lVar7 + DAT_146535540) == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(**(longlong **)(lVar7 + DAT_146535540) + 0x10))(), cVar5 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535540,iVar23,1,1);
          }
          else {
            iVar23 = iVar23 + 1;
            lVar7 = lVar7 + 0x10;
          }
        } while (iVar23 < DAT_146535548);
      }
      _DAT_146535550 = DAT_146535548 * 2;
      if (DAT_146535548 * 2 < 3) {
        _DAT_146535550 = 2;
      }
      if ((_DAT_146535550 < iVar22) && (DAT_14653554c != DAT_146535548)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535540);
      }
    }
    *(undefined1 *)(param_1 + 0x227) = 1;
    iVar22 = 0;
    local_228 = (uint *)0x0;
    local_260 = (uint *)0x0;
    local_268[0] = 0;
    local_258 = (uint *)(ulonglong)(uint)local_258;
    if (param_1[0x288] != param_1[0x293]) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                (param_1 + 0x286,0);
    }
    puVar17 = *(uint **)(param_1 + 0x34);
    local_a8 = 0;
    local_a0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    local_78 = 0xffffffff;
    local_270 = FUN_1428dfc70();
    local_108 = 5;
    local_b0 = '\0';
    local_230 = puVar17;
    FUN_14044bc80(&local_100,&local_230,&local_270);
    FUN_14045a130(&local_108);
    if (local_e8._4_1_ == '\0') {
LAB_142417b60:
      if ((local_d8[0x24] & 8) != 0) {
        FUN_142407e40(param_1,local_d8);
      }
      puVar17 = *(uint **)(param_1 + 0x158);
      if ((puVar17 == (uint *)0x0) ||
         (((local_d8 != puVar17 && (local_d8 != *(uint **)(puVar17 + 0x1ee))) &&
          (*(uint **)(local_d8 + 0x46) != puVar17)))) {
        bVar27 = false;
      }
      else {
        bVar27 = true;
      }
      if (((*(byte *)((longlong)local_d8 + 0x91) & 4) == 0) ||
         (cVar5 = UAbilityTask::IsWaitingOnRemotePlayerdata(local_d8), cVar5 != '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar27) || (bVar2)) {
        FWeakObjectPtr::operator=(&local_248,local_d8);
        lVar7 = *(longlong *)(param_1 + 0x38);
        local_238 = local_248;
        TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::FindId(lVar7 + 0x50,&local_1f8,&local_238);
        puVar17 = local_d8;
        uVar6 = local_268[0];
        if ((local_1f8 != -1) &&
           (lVar7 = *(longlong *)(lVar7 + 0x50) + (longlong)local_1f8 * 0x14, lVar7 != 0)) {
          uVar19 = *(uint *)(lVar7 + 8);
          local_238 = (uint *)CONCAT44(local_238._4_4_,uVar19);
          if (uVar19 != 0) {
            lVar7 = (longlong)(int)local_268[0];
            local_268[0] = local_268[0] + 1;
            local_258 = (uint *)CONCAT44(local_258._4_4_,local_268[0]);
            if (iVar22 < (int)local_268[0]) {
              TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
              ResizeGrow(&local_260,uVar6);
              local_268[0] = (uint)local_258;
              local_228 = local_260;
            }
            local_228[lVar7 * 4] = uVar19;
            *(uint **)(local_228 + lVar7 * 4 + 2) = puVar17;
            if (bVar2) {
              FUN_140ac3dd0(param_1 + 0x286,&local_230,&local_238,0);
            }
          }
        }
        plVar15 = &local_270;
LAB_142417cee:
        local_238 = local_d8;
        FUN_14058c900(&local_a8,plVar15,&local_238);
      }
      else {
        cVar5 = UAbilityTask::IsWaitingOnRemotePlayerdata(local_d8);
        if (cVar5 != '\0') {
          if ((*(byte *)((longlong)local_d8 + 0x91) & 4) != 0) {
            (**(code **)(*(longlong *)local_d8 + 0x2e8))();
          }
          plVar15 = &local_1f4;
          goto LAB_142417cee;
        }
        FUN_142543860(*(longlong *)(param_1 + 0x34),local_d8,1);
      }
      local_238 = (uint *)CONCAT44(uStack_fc,local_100);
      iVar22 = (int)local_e8 + 1;
      if (iVar22 < local_c8 + local_f0[0]) {
        lVar7 = (longlong)iVar22 * 8;
        iVar23 = local_c8;
        iVar18 = local_f0[0];
        do {
          if (iVar22 < iVar18) {
            puVar17 = *(uint **)(local_f8 + lVar7);
          }
          else {
            puVar17 = *(uint **)(local_d0 + (longlong)(iVar22 - iVar18) * 8);
          }
          local_e0 = local_e0 + 1;
          if ((puVar17 != (uint *)0x0) &&
             (lVar26 = AActor::GetLevel(puVar17), iVar23 = local_c8, iVar18 = local_f0[0],
             lVar26 != 0)) {
            if ((local_108 & 1) != 0) {
              uVar6 = puVar17[3];
              if ((int)uVar6 < (int)DAT_1469e91c4) {
                uVar19 = (int)uVar6 >> 0x1f & 0xffff;
                uVar6 = uVar6 + uVar19;
                lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                        (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18;
              }
              else {
                lVar8 = 0;
              }
              if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) != 0) goto LAB_142417ec9;
            }
            if (((local_108 >> 1 & 1) == 0) ||
               (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(puVar17), iVar23 = local_c8,
               iVar18 = local_f0[0], cVar5 != '\0')) {
              if ((local_108 >> 2 & 1) != 0) {
                if (((*(byte *)(lVar26 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar26 + 0x205) & 0x10) == 0)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = true;
                }
                piVar14 = *(int **)(lVar26 + 600);
                if (((*(longlong *)(lVar26 + 0xc0) == 0) ||
                    (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)) ||
                   (piVar14 == piVar10)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if ((piVar14 == (int *)0x0) || (*piVar14 == 2)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((bVar2) || (bVar2 = false, bVar3)) {
                  bVar2 = true;
                }
                iVar23 = local_c8;
                iVar18 = local_f0[0];
                if ((!bVar27) || (!bVar2)) goto LAB_142417ec9;
              }
              puVar13 = (uint *)ULevel::GetWorld(lVar26);
              puVar4 = local_238;
              iVar23 = local_c8;
              iVar18 = local_f0[0];
              if (puVar13 == local_238) {
                lVar26 = AActor::GetLevel(puVar17);
                if (lVar26 == *(longlong *)(puVar4 + 0xc)) goto LAB_142417ef0;
                lVar26 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(puVar17 + 4) + 0x90) < *(int *)(lVar26 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(puVar17 + 4) + 0x88) +
                     (longlong)*(int *)(lVar26 + 0x90) * 8) != lVar26 + 0x88)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = true;
                }
                iVar23 = local_c8;
                iVar18 = local_f0[0];
                if (!bVar27) goto LAB_142417ef0;
              }
            }
          }
LAB_142417ec9:
          iVar22 = iVar22 + 1;
          lVar7 = lVar7 + 8;
          if (iVar23 + iVar18 <= iVar22) break;
        } while( true );
      }
      local_e8._0_5_ = CONCAT14(1,(int)local_e8);
      local_d8 = (uint *)0x0;
    }
LAB_142417f1b:
    if (local_b0 != '\0') {
      local_b0 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(CONCAT44(uStack_fc,local_100),local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
    }
    FUN_1428cdb50(*(longlong *)(param_1 + 0x34));
    lVar7 = *(longlong *)(param_1 + 0x24);
    iVar22 = *(int *)(lVar7 + 0x78) + -1;
    lVar26 = (longlong)iVar22;
    if (-1 < iVar22) {
      do {
        lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x24) + 0x70) + lVar26 * 8);
        if (lVar7 != 0) {
          lVar8 = FUN_1428e6c20();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar27 = false;
          }
          else {
            bVar27 = true;
          }
          if ((bVar27) &&
             (piVar14 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::
                               FindId(&local_a8,&local_270,*(undefined8 *)(lVar7 + 0x68)),
             *piVar14 != -1)) {
            *(undefined8 *)(lVar7 + 0x68) = 0;
          }
        }
        lVar26 = lVar26 + -1;
      } while (-1 < lVar26);
      lVar7 = *(longlong *)(param_1 + 0x24);
    }
    if (*(longlong *)(lVar7 + 0x98) == *(longlong *)(param_1 + 0x158)) {
      *(undefined8 *)(lVar7 + 0x98) = 0;
    }
    TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x1e6,0);
    plVar15 = *(longlong **)(param_1 + 0x1fa);
    for (uVar6 = param_1[0x1fc]; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 4;
    }
    param_1[0x1fc] = 0;
    if (param_1[0x1fd] != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x1fa,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x24) + 0x2f8))();
    (**(code **)(**(longlong **)(param_1 + 0x24) + 0x300))();
    lVar7 = *(longlong *)(param_1 + 0x34);
    local_248 = (uint *)FUN_1428dfc70();
    local_108 = 5;
    local_b0 = '\0';
    local_270 = lVar7;
    FUN_14044bc80(&local_100,&local_270,&local_248);
    FUN_14045a130(&local_108);
    if (local_e8._4_1_ == '\0') {
LAB_1424180e0:
      uVar11 = UObjectBaseUtility::GetFullName(local_d8,&local_260,0);
      piVar14 = (int *)TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                       ::FindId(param_1 + 0x17e,&local_270,uVar11);
      iVar22 = *piVar14;
      if (local_260 != (uint *)0x0) {
        FMemory::Free();
      }
      if (iVar22 != -1) {
        FUN_142543860(*(longlong *)(param_1 + 0x34),local_d8,1);
      }
      local_248 = (uint *)CONCAT44(uStack_fc,local_100);
      iVar22 = (int)local_e8 + 1;
      if (iVar22 < local_c8 + local_f0[0]) {
        lVar7 = (longlong)iVar22 * 8;
        iVar23 = local_c8;
        iVar18 = local_f0[0];
        do {
          if (iVar22 < iVar18) {
            puVar17 = *(uint **)(local_f8 + lVar7);
          }
          else {
            puVar17 = *(uint **)(local_d0 + (longlong)(iVar22 - iVar18) * 8);
          }
          local_e0 = local_e0 + 1;
          if ((puVar17 != (uint *)0x0) &&
             (lVar26 = AActor::GetLevel(puVar17), iVar23 = local_c8, iVar18 = local_f0[0],
             lVar26 != 0)) {
            if ((local_108 & 1) != 0) {
              uVar6 = puVar17[3];
              if ((int)uVar6 < (int)DAT_1469e91c4) {
                uVar19 = (int)uVar6 >> 0x1f & 0xffff;
                uVar6 = uVar6 + uVar19;
                lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                        (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18;
              }
              else {
                lVar8 = 0;
              }
              if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) != 0) goto LAB_1424182fa;
            }
            if (((local_108 >> 1 & 1) == 0) ||
               (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(puVar17), iVar23 = local_c8,
               iVar18 = local_f0[0], cVar5 != '\0')) {
              if ((local_108 >> 2 & 1) != 0) {
                if (((*(byte *)(lVar26 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar26 + 0x205) & 0x10) == 0)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = true;
                }
                piVar14 = *(int **)(lVar26 + 600);
                if (((*(longlong *)(lVar26 + 0xc0) == 0) ||
                    (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)) ||
                   (piVar14 == piVar10)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if ((piVar14 == (int *)0x0) || (*piVar14 == 2)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((bVar2) || (bVar2 = false, bVar3)) {
                  bVar2 = true;
                }
                iVar23 = local_c8;
                iVar18 = local_f0[0];
                if ((!bVar27) || (!bVar2)) goto LAB_1424182fa;
              }
              puVar13 = (uint *)ULevel::GetWorld(lVar26);
              puVar4 = local_248;
              iVar23 = local_c8;
              iVar18 = local_f0[0];
              if (puVar13 == local_248) {
                lVar26 = AActor::GetLevel(puVar17);
                if (lVar26 == *(longlong *)(puVar4 + 0xc)) goto LAB_142418321;
                lVar26 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(puVar17 + 4) + 0x90) < *(int *)(lVar26 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(puVar17 + 4) + 0x88) +
                     (longlong)*(int *)(lVar26 + 0x90) * 8) != lVar26 + 0x88)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = true;
                }
                iVar23 = local_c8;
                iVar18 = local_f0[0];
                if (!bVar27) goto LAB_142418321;
              }
            }
          }
LAB_1424182fa:
          iVar22 = iVar22 + 1;
          lVar7 = lVar7 + 8;
          if (iVar23 + iVar18 <= iVar22) break;
        } while( true );
      }
      local_e8._0_5_ = CONCAT14(1,(int)local_e8);
      local_d8 = (uint *)0x0;
    }
LAB_14241833f:
    uVar24 = 0;
    if (local_b0 != '\0') {
      local_b0 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(CONCAT44(uStack_fc,local_100),local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
    }
    if (*DAT_146af2658 != 0) {
      FUN_142873f70(DAT_146b17150,0);
    }
    FURL::FURL(local_178,0);
    if (&local_150 != (void **)(param_1 + 0x248)) {
      local_148 = param_1[0x24a];
      lVar7 = (longlong)(int)local_148;
      pvVar1 = *(void **)(param_1 + 0x248);
      if ((local_148 == 0) && (local_144 == 0)) {
        local_144 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_148);
        _guard_xfg_dispatch_icall_nop(local_150,pvVar1,lVar7 * 2);
      }
    }
    local_270 = 0;
    uVar11 = FUN_142923c30();
    uVar12 = GetTransientPackage();
    lVar7 = local_270;
    local_230 = (uint *)0x0;
    if (local_270 == 0) {
      FUN_1417846f0(uVar12,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    local_288 = 0;
    local_290 = 0;
    local_298 = 0;
    local_2a0 = 0;
    local_2a8._0_4_ = 0;
    plVar15 = (longlong *)FUN_1417985e0(uVar11,uVar12,lVar7,0);
    *(longlong **)(param_1 + 0x24) = plVar15;
    local_2a0 = local_2a0 & 0xffffffff00000000;
    local_2a8 = CONCAT44(local_2a8._4_4_,1000000);
    (**(code **)(*plVar15 + 800))(plVar15,param_1,2,local_178);
    *(uint *)(*(longlong *)(param_1 + 0x24) + 0x15e8) = param_1[0x261];
    *(uint *)(*(longlong *)(param_1 + 0x24) + 0x15ec) = param_1[0x262];
    FUN_1425b9f20(*(longlong *)(param_1 + 0x24),1,1);
    FWeakObjectPtr::operator=(&local_248,*(longlong *)(param_1 + 0x158));
    local_230 = local_248;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(*(longlong *)(param_1 + 0x38) + 0x50,&local_270,&local_230);
    FUN_1416f7d70(0xffffffff);
    TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x38),0);
    TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x38) + 0x50,0);
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x38) + 0x1b0,0);
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x38) + 0x200,0);
    TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x38) + 0x250,0);
    puVar4 = local_228;
    puVar13 = local_228 + (longlong)(int)local_268[0] * 4;
    plVar15 = local_210;
    for (puVar17 = local_228; local_210 = plVar15, puVar17 != puVar13; puVar17 = puVar17 + 4) {
      plVar15 = *(longlong **)(param_1 + 0x38);
      if ((int)plVar15[1] != *(int *)((longlong)plVar15 + 0x34)) {
        plVar16 = (longlong *)plVar15[8];
        if ((longlong *)plVar15[8] == (longlong *)0x0) {
          plVar16 = plVar15 + 7;
        }
        uVar6 = *(uint *)((longlong)plVar16 +
                         ((longlong)(int)plVar15[9] - 1U & (longlong)(int)*puVar17) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar21 = (uint *)((longlong)(int)uVar6 * 0x40 + *plVar15);
            if (*puVar21 == *puVar17) {
              if ((uVar6 != 0xffffffff) && (puVar21 != (uint *)0x0)) goto LAB_142418615;
              break;
            }
            uVar6 = puVar21[0xe];
          } while (uVar6 != 0xffffffff);
        }
      }
      local_248 = puVar17;
      TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FNetworkGUID_const_&>_>(plVar15,&local_238,&local_248,0);
      puVar21 = (uint *)((longlong)(int)local_238 * 0x40 + *plVar15);
LAB_142418615:
      FWeakObjectPtr::operator=(&local_228,*(undefined8 *)(puVar17 + 2));
      puVar21[2] = (uint)local_228;
      puVar21[3] = local_228._4_4_;
      *(byte *)(puVar21 + 0xc) = (byte)puVar21[0xc] | 1;
      local_260 = puVar21 + 2;
      local_258 = puVar17;
      FUN_14229efb0(*(longlong *)(param_1 + 0x38) + 0x50,&local_270,&local_260);
      plVar15 = local_210;
    }
    lVar7 = (**(code **)(*plVar15 + 0x98))(plVar15);
    if ((lVar7 == 0) || (lVar7 = (**(code **)(*plVar15 + 0x98))(plVar15), lVar7 == -1)) {
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(param_1 + 0x16a,0);
      if (0 < (int)param_1[0x17c]) {
        uVar25 = (ulonglong)param_1[0x17c];
        do {
          uVar20 = (longlong)(int)param_1[0x17c] - 1U & uVar24;
          puVar17 = *(uint **)(param_1 + 0x17a);
          if (*(uint **)(param_1 + 0x17a) == (uint *)0x0) {
            puVar17 = param_1 + 0x178;
          }
          uVar24 = uVar24 + 1;
          puVar17[uVar20] = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      local_260 = (uint *)0x0;
      local_258 = (uint *)0x0;
      FUN_14241e880(param_1,&local_260,0);
      param_1[0x152] = 0;
      *(undefined1 *)(param_1 + 0x155) = 0;
      *(undefined1 *)(param_1 + 0x227) = 0;
      if (local_200 == -1) {
        FUN_142408fa0(param_1);
        puVar17 = local_260;
      }
      else {
        fVar29 = (float)local_200 * 0.001;
        param_1[0x23d] = (uint)fVar29;
        fVar28 = 0.0;
        if ((0.0 <= fVar29) &&
           (fVar28 = (float)param_1[0x151] - 0.01, fVar29 <= (float)param_1[0x151] - 0.01)) {
          fVar28 = fVar29;
        }
        param_1[0x152] = (uint)fVar28;
        *(undefined2 *)((longlong)param_1 + 0x899) = 0x101;
        puVar17 = local_260;
      }
    }
    else {
      if (7 < param_1[0x25f]) {
        operator<<(plVar15,param_1 + 0x16a);
      }
      plVar16 = *(longlong **)(param_1 + 0x34);
      local_248 = (uint *)FUN_1428dfc70();
      local_108 = 5;
      local_b0 = '\0';
      local_210 = plVar16;
      FUN_14044bc80(&local_100,&local_210,&local_248);
      FUN_14045a130(&local_108);
      while (local_e8._4_1_ == '\0') {
        UObjectBaseUtility::GetFullName(local_d8,&local_260,0);
        piVar14 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                   (param_1 + 0x16a,&local_270);
        if ((*piVar14 != -1) && ((*(byte *)((longlong)local_d8 + 0x91) & 4) == 0)) {
          (**(code **)(*(longlong *)param_1 + 0x410))(param_1);
          FUN_142543860(*(longlong *)(param_1 + 0x34),local_d8);
        }
        if (local_260 != (uint *)0x0) {
          FMemory::Free();
        }
        FUN_14045a130(&local_108);
      }
      TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(&local_100);
      local_228 = (uint *)0x0;
      local_220 = 0;
      FUN_14241e880(param_1,&local_228,0);
      plVar16 = (longlong *)plVar15[1];
      local_240[0] = 0;
      if ((int *)plVar16[1] < (int *)*plVar16 + 1) {
        (**(code **)(*plVar15 + 0x50))(plVar15,local_240,4);
        if ((*(byte *)((longlong)plVar15 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar15,local_240,4);
        }
      }
      else {
        local_240[0] = *(int *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      if (0 < local_240[0]) {
        local_260 = local_268;
        local_258 = &local_108;
        do {
          local_268[0] = 0;
          (**(code **)(*plVar15 + 0x68))(plVar15,local_268);
          local_e0 = local_e0 & 0xfffffff0;
          local_e8 = 0;
          local_108 = 0xffffffff;
          uStack_104 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_f0[0] = 0;
          local_210 = (longlong *)0x0;
          local_208 = 0;
          (**(code **)(*plVar15 + 0x68))(plVar15,&local_100);
          FUN_14158ce90(plVar15,&local_210);
          plVar16 = (longlong *)plVar15[1];
          if ((int *)plVar16[1] < (int *)*plVar16 + 1) {
            (**(code **)(*plVar15 + 0x50))(plVar15,local_f0,4);
            if ((*(byte *)((longlong)plVar15 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar15,local_f0,4);
            }
          }
          else {
            local_f0[0] = *(int *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          (**(code **)(*DAT_146b17150 + 0x400))(DAT_146b17150,param_1,&local_210,1);
          plVar16 = (longlong *)&DAT_143f3eda8;
          if ((int)local_208 != 0) {
            plVar16 = local_210;
          }
          plVar16 = (longlong *)FName::FName(&local_248,plVar16,1);
          local_f8 = *plVar16;
          plVar16 = (longlong *)plVar15[1];
          local_278[0] = 0;
          if ((byte *)plVar16[1] < (byte *)*plVar16 + 1) {
            (**(code **)(*plVar15 + 0x50))(plVar15,local_278,1);
          }
          else {
            local_278[0] = *(byte *)*plVar16;
            *plVar16 = *plVar16 + 1;
          }
          local_e0 = CONCAT31(local_e0._1_3_,(byte)local_e0 ^ ((byte)local_e0 ^ local_278[0]) & 3);
          TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
                    (*(longlong *)(param_1 + 0x38),&local_270,&local_260,0);
          if (local_210 != (longlong *)0x0) {
            FMemory::Free();
          }
          uVar6 = (int)uVar24 + 1;
          uVar24 = (ulonglong)uVar6;
        } while ((int)uVar6 < local_240[0]);
      }
      FUN_1425f1e00(*(undefined8 *)(*(longlong *)(param_1 + 0x24) + 0x68),plVar15,1);
      local_2a8 = 0;
      FUN_14241c620(param_1,plVar15,param_1 + 0x1fa,0);
      if ((int)param_1[0x1fc] < 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)((longlong)(int)param_1[0x1fc] * 0x20 + -0x10 +
                         *(longlong *)(param_1 + 0x1fa));
      }
      param_1[0x152] = uVar6;
      if (local_200 == -1) {
        FUN_142408fa0(param_1);
      }
      else {
        param_1[0x23d] = (uint)((float)local_200 * 0.001);
        fVar29 = (float)local_200 * 0.001 + (float)param_1[0x152];
        fVar28 = 0.0;
        if ((0.0 <= fVar29) &&
           (fVar28 = (float)param_1[0x151] - 0.01, fVar29 <= (float)param_1[0x151] - 0.01)) {
          fVar28 = fVar29;
        }
        param_1[0x152] = (uint)fVar28;
        *(undefined2 *)((longlong)param_1 + 0x899) = 0x101;
      }
      FUN_14241b480(param_1);
      *(undefined1 *)(param_1 + 0x155) = 0;
      *(undefined1 *)(param_1 + 0x227) = 0;
      if ((*(longlong *)(param_1 + 0x34) != 0) &&
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x34) + 0x148), lVar7 != 0)) {
        param_1[0x23c] = *(uint *)(lVar7 + 0x484);
      }
      puVar17 = local_228;
      if ((((*(longlong *)(param_1 + 0x158) != 0) && (local_218[0] != 0)) &&
          (lVar7 = FUN_1425e6270(*(longlong *)(param_1 + 0x38),local_218,0), puVar17 = local_228,
          lVar7 != 0)) && (cVar5 = FUN_140c61930(lVar7), puVar17 = local_228, cVar5 != '\0')) {
        local_258 = (uint *)CONCAT44(local_258._4_4_ & 0xfffffffe,0x40000000);
        local_260 = (uint *)CONCAT35((int3)((ulonglong)local_260 >> 0x28),0x100000000);
        (**(code **)(**(longlong **)(param_1 + 0x158) + 0xe18))
                  (*(longlong **)(param_1 + 0x158),lVar7,&local_260);
        puVar17 = local_228;
      }
    }
    if (puVar17 != (uint *)0x0) {
      FMemory::Free();
    }
    FURL::~FURL(local_178);
    local_60 = 0;
    if (local_68 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_a8);
    if (puVar4 != (uint *)0x0) {
      FMemory::Free(puVar4);
    }
    uVar11 = 1;
  }
  else {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x34) + 400) + 0x2d0))();
    lVar7 = *(longlong *)(param_1 + 0x34);
    local_200 = FUN_1428dfc70();
    local_108 = 5;
    local_b0 = '\0';
    local_228 = (uint *)lVar7;
    FUN_14044bc80(&local_100,&local_228);
    FUN_14045a130(&local_108);
    if (local_e8._4_1_ == '\0') {
LAB_142417340:
      FUN_142543860(*(longlong *)(param_1 + 0x34),local_d8,1);
      lVar7 = CONCAT44(uStack_fc,local_100);
      iVar22 = (int)local_e8 + 1;
      if (iVar22 < local_c8 + local_f0[0]) {
        lVar26 = (longlong)iVar22 * 8;
        iVar23 = local_c8;
        iVar18 = local_f0[0];
        do {
          if (iVar22 < iVar18) {
            puVar17 = *(uint **)(local_f8 + lVar26);
          }
          else {
            puVar17 = *(uint **)(local_d0 + (longlong)(iVar22 - iVar18) * 8);
          }
          local_e0 = local_e0 + 1;
          if ((puVar17 != (uint *)0x0) &&
             (lVar8 = AActor::GetLevel(puVar17), iVar23 = local_c8, iVar18 = local_f0[0], lVar8 != 0
             )) {
            if ((local_108 & 1) != 0) {
              uVar6 = puVar17[3];
              if ((int)uVar6 < (int)DAT_1469e91c4) {
                uVar19 = (int)uVar6 >> 0x1f & 0xffff;
                uVar6 = uVar6 + uVar19;
                lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                        (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18;
              }
              else {
                lVar9 = 0;
              }
              if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) goto LAB_14241751c;
            }
            if (((local_108 >> 1 & 1) == 0) ||
               (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(puVar17), iVar23 = local_c8,
               iVar18 = local_f0[0], cVar5 != '\0')) {
              if ((local_108 >> 2 & 1) != 0) {
                if (((*(byte *)(lVar8 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar8 + 0x205) & 0x10) == 0)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = true;
                }
                piVar14 = *(int **)(lVar8 + 600);
                if (((*(longlong *)(lVar8 + 0xc0) == 0) ||
                    (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)) ||
                   (piVar14 == piVar10)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if ((piVar14 == (int *)0x0) || (*piVar14 == 2)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((bVar2) || (bVar2 = false, bVar3)) {
                  bVar2 = true;
                }
                iVar23 = local_c8;
                iVar18 = local_f0[0];
                if ((!bVar27) || (!bVar2)) goto LAB_14241751c;
              }
              lVar8 = ULevel::GetWorld(lVar8);
              iVar23 = local_c8;
              iVar18 = local_f0[0];
              if (lVar8 == lVar7) {
                lVar8 = AActor::GetLevel(puVar17);
                if (lVar8 == *(longlong *)(lVar7 + 0x30)) goto LAB_14241775c;
                lVar8 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(puVar17 + 4) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(puVar17 + 4) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = true;
                }
                iVar23 = local_c8;
                iVar18 = local_f0[0];
                if (!bVar27) goto LAB_14241775c;
              }
            }
          }
LAB_14241751c:
          iVar22 = iVar22 + 1;
          lVar26 = lVar26 + 8;
          if (iVar23 + iVar18 <= iVar22) break;
        } while( true );
      }
      local_d8 = (uint *)0x0;
      local_e8._0_5_ = CONCAT14(1,(int)local_e8);
      param_1 = local_230;
    }
LAB_142417544:
    if (local_b0 != '\0') {
      local_b0 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(CONCAT44(uStack_fc,local_100),local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
    }
    TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x38),0);
    TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x38) + 0x50,0);
    lVar7 = *(longlong *)(param_1 + 0x38);
    FUN_1404af4a0(lVar7 + 0x1b0,0);
    if (0 < (int)*(uint *)(lVar7 + 0x1f8)) {
      uVar24 = 0;
      uVar25 = (ulonglong)*(uint *)(lVar7 + 0x1f8);
      do {
        uVar20 = (longlong)*(int *)(lVar7 + 0x1f8) - 1U & uVar24;
        lVar26 = *(longlong *)(lVar7 + 0x1f0);
        if (*(longlong *)(lVar7 + 0x1f0) == 0) {
          lVar26 = lVar7 + 0x1e8;
        }
        uVar24 = uVar24 + 1;
        *(undefined4 *)(lVar26 + uVar20 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    lVar7 = *(longlong *)(param_1 + 0x38);
    TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(lVar7 + 0x200,0);
    if (0 < (int)*(uint *)(lVar7 + 0x248)) {
      uVar24 = 0;
      uVar25 = (ulonglong)*(uint *)(lVar7 + 0x248);
      do {
        uVar20 = (longlong)*(int *)(lVar7 + 0x248) - 1U & uVar24;
        lVar26 = *(longlong *)(lVar7 + 0x240);
        if (*(longlong *)(lVar7 + 0x240) == 0) {
          lVar26 = lVar7 + 0x238;
        }
        uVar24 = uVar24 + 1;
        *(undefined4 *)(lVar26 + uVar20 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x38) + 0x250,0);
    param_1[0x158] = 0;
    param_1[0x159] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x24) + 0x2f8))();
    (**(code **)(**(longlong **)(param_1 + 0x24) + 0x300))();
    local_228 = (uint *)0x0;
    uVar11 = FUN_142923c30();
    uVar12 = GetTransientPackage();
    lVar7 = (longlong)local_228;
    local_270 = 0;
    if (local_228 == (uint *)0x0) {
      FUN_1417846f0(uVar12,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    local_288 = 0;
    local_290 = 0;
    local_298 = 0;
    local_2a0 = 0;
    local_2a8 = (ulonglong)local_2a8._4_4_ << 0x20;
    lVar7 = FUN_1417985e0(uVar11,uVar12,lVar7,0);
    *(longlong *)(param_1 + 0x24) = lVar7;
    FURL::FURL(local_1e8,0);
    if (&local_1c0 != (void **)(param_1 + 0x248)) {
      local_1b8 = param_1[0x24a];
      lVar7 = (longlong)(int)local_1b8;
      pvVar1 = *(void **)(param_1 + 0x248);
      if ((local_1b8 != 0) || (local_1b4 != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c0,local_1b8);
        _guard_xfg_dispatch_icall_nop(local_1c0,pvVar1,lVar7 * 2);
      }
    }
    local_2a0 = local_2a0 & 0xffffffff00000000;
    local_2a8 = CONCAT44(local_2a8._4_4_,1000000);
    (**(code **)(**(longlong **)(param_1 + 0x24) + 800))
              (*(longlong **)(param_1 + 0x24),param_1,2,local_1e8);
    FUN_142873f70(DAT_146b17150,0);
    FUN_14241bb10(param_1,local_250[0]);
    plVar15 = local_210;
    param_1[0x156] = local_250[0];
    lVar7 = (**(code **)(*local_210 + 0x98))(local_210);
    if ((lVar7 != 0) && (lVar7 = (**(code **)(*plVar15 + 0x98))(plVar15), lVar7 != -1)) {
      (**(code **)(*plVar15 + 0xa8))(plVar15,0);
    }
    plVar15 = local_1a0;
    if (local_190 != 0) {
      FMemory::Free();
      plVar15 = local_1a0;
    }
    for (; local_198 != 0; local_198 = local_198 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_1a0 != (longlong *)0x0) {
      FMemory::Free(local_1a0);
    }
    if (local_1b0 != 0) {
      FMemory::Free();
    }
    if (local_1c0 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1d8 != 0) {
      FMemory::Free();
    }
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
    uVar11 = 0;
  }
  return uVar11;
LAB_14241775c:
  bVar27 = local_e8._4_1_ != '\0';
  local_e8 = CONCAT44(local_e8._4_4_,iVar22);
  param_1 = local_230;
  local_d8 = puVar17;
  if (bVar27) goto LAB_142417544;
  goto LAB_142417340;
LAB_142417ef0:
  bVar27 = local_e8._4_1_ != '\0';
  local_e8 = CONCAT44(local_e8._4_4_,iVar22);
  local_d8 = puVar17;
  if (bVar27) goto LAB_142417f1b;
  iVar22 = local_258._4_4_;
  goto LAB_142417b60;
LAB_142418321:
  bVar27 = local_e8._4_1_ != '\0';
  local_e8 = CONCAT44(local_e8._4_4_,iVar22);
  local_d8 = puVar17;
  if (bVar27) goto LAB_14241833f;
  goto LAB_1424180e0;
}



// FUNCTION 142418cc0 FUN_142418cc0 body=719 status=ok
// SIG undefined FUN_142418cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142418cc0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  size_t _Size;
  undefined1 auStack_548 [32];
  int local_528;
  int local_524;
  int local_520 [2];
  int *local_518;
  longlong local_510;
  undefined1 local_508 [144];
  void *local_478;
  int local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_548;
  local_510 = param_1;
  (**(code **)(*param_2 + 0x68))(param_2,&local_528);
  if (local_528 != 0) {
    plVar1 = (longlong *)(param_1 + 0x798);
    lVar3 = param_1;
    do {
      puVar5 = (undefined8 *)0x0;
      local_524 = 0;
      (**(code **)(*param_2 + 0x68))(param_2,&local_524);
      (**(code **)(*param_2 + 0x50))(param_2,local_458,local_528 + 7U >> 3);
      FUN_1416883a0(local_508,local_458,local_528);
      FUN_1416951c0(local_508,*(undefined4 *)(*(longlong *)(lVar3 + 0x90) + 0x15e8));
      FArchiveState::SetGameNetVer(local_508,*(undefined4 *)(*(longlong *)(lVar3 + 0x90) + 0x15ec));
      if (*(int *)(param_1 + 0x7a0) != *(int *)(param_1 + 0x7cc)) {
        lVar3 = *(longlong *)(param_1 + 0x7d8);
        if (*(longlong *)(param_1 + 0x7d8) == 0) {
          lVar3 = param_1 + 2000;
        }
        iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x7e0) - 1U & (longlong)local_524) *
                                 4);
        if (iVar2 != -1) {
          do {
            piVar6 = (int *)((longlong)iVar2 * 0x20 + *plVar1);
            if (*piVar6 == local_524) {
              if ((iVar2 != -1) && (piVar6 != (int *)0x0)) goto LAB_142418e4f;
              break;
            }
            iVar2 = piVar6[6];
          } while (iVar2 != -1);
        }
      }
      local_518 = &local_524;
      FUN_142400d40(plVar1,local_520,&local_518,0);
      piVar6 = (int *)((longlong)local_520[0] * 0x20 + *plVar1);
LAB_142418e4f:
      puVar4 = (undefined8 *)operator_new(0xb8);
      if (puVar4 != (undefined8 *)0x0) {
        FArchive::FArchive(puVar4,local_508);
        _Src = local_478;
        *puVar4 = &PTR__scalar_deleting_destructor__144cd5098;
        puVar4[0x12] = 0;
        _Size = (size_t)local_470;
        *(int *)(puVar4 + 0x13) = local_470;
        if (local_470 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0x9c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar4 + 0x12,local_470,0);
          _guard_xfg_dispatch_icall_nop((void *)puVar4[0x12],_Src,_Size);
        }
        puVar4[0x14] = local_468;
        puVar4[0x15] = local_460;
        *(undefined4 *)(puVar4 + 0x16) = param_3;
        puVar5 = puVar4;
      }
      iVar2 = piVar6[4];
      piVar6[4] = iVar2 + 1;
      if (piVar6[5] < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(piVar6 + 2,iVar2);
      }
      *(undefined8 **)(*(longlong *)(piVar6 + 2) + (longlong)iVar2 * 8) = puVar5;
      if (local_478 != (void *)0x0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_508);
      (**(code **)(*param_2 + 0x68))(param_2,&local_528);
      lVar3 = local_510;
    } while (local_528 != 0);
  }
  return;
}



// FUNCTION 142418f90 FUN_142418f90 body=203 status=ok
// SIG undefined FUN_142418f90(void)

void FUN_142418f90(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong local_18 [2];
  
  if (param_4 == '\0') {
    FUN_142423360(*(undefined8 *)(param_1 + 0x38));
    if (*(longlong *)(param_3 + 0x288) == 0) {
      FUN_14286cb80(DAT_146b17150,*(undefined8 *)(param_3 + 0x1c8),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x120));
    }
    *(undefined8 *)(param_3 + 0x1c8) = 0;
    FUN_1428670d0(DAT_146b17150,param_3);
    if (*(longlong *)(param_3 + 0x240) != 0) {
      local_18[0] = 0;
      local_18[1] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"LoadMap failed",0x1e);
      (**(code **)(**(longlong **)(param_3 + 0x240) + 0x2c8))
                (*(longlong **)(param_3 + 0x240),0,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1424192b0 FUN_1424192b0 body=76 status=ok
// SIG undefined FUN_1424192b0(void)

void FUN_1424192b0(longlong *param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
                    /* WARNING: Could not recover jumptable at 0x0001424192f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7f8))
            (param_1,param_2 * *(float *)((longlong)param_1 + 0x4c4) * *(float *)(lVar1 + 0x7b0) *
                     *(float *)(param_1 + 0x1a));
  return;
}



// FUNCTION 142419300 LowLevelDescribe body=62 status=ok
// SIG undefined LowLevelDescribe(void)

undefined8 * UDemoNetConnection::LowLevelDescribe(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Demo recording/playback driver connection",0x54);
  return param_2;
}



// FUNCTION 142419340 LowLevelGetRemoteAddress body=62 status=ok
// SIG undefined LowLevelGetRemoteAddress(void)

undefined8 * UDemoNetConnection::LowLevelGetRemoteAddress(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UDemoNetConnection",0x26);
  return param_2;
}



// FUNCTION 142419380 FUN_142419380 body=304 status=ok
// SIG undefined FUN_142419380(void)

void FUN_142419380(longlong param_1,void *param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    if (0x800 < param_3) {
      LowLevelFatalErrorHandler
                ("Unknown",0x120e,
                 L"UDemoNetConnection::LowLevelSend: CountBytes > MAX_DEMO_READ_WRITE_BUFFER.");
      FDebug::AssertFailed
                (&DAT_145088eb3,"Unknown",0x120e,
                 L"UDemoNetConnection::LowLevelSend: CountBytes > MAX_DEMO_READ_WRITE_BUFFER.");
    }
    if (*(char *)(param_1 + 0x17e8) == '\0') {
      iVar2 = *(int *)(param_1 + 0x1978);
      *(int *)(param_1 + 0x1978) = iVar2 + 1;
      if (*(int *)(param_1 + 0x197c) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x1970,iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x1970);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1988);
      *(int *)(param_1 + 0x1988) = iVar2 + 1;
      if (*(int *)(param_1 + 0x198c) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x1980,iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x1980);
    }
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = param_4;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
      iVar2 = *(int *)(puVar1 + 1);
      *(int *)(puVar1 + 1) = iVar2 + param_3;
      if (*(int *)((longlong)puVar1 + 0xc) < iVar2 + param_3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,param_2,(longlong)param_3);
    }
  }
  return;
}



// FUNCTION 1424194b0 FUN_1424194b0 body=108 status=ok
// SIG undefined FUN_1424194b0(void)

void FUN_1424194b0(undefined8 param_1,longlong *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x2b7,
             L"Pure virtual not implemented (%s)",L"UNetDriver::LowLevelSend");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x2b7,
             L"Pure virtual not implemented (%s)",L"UNetDriver::LowLevelSend");
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142419520 FUN_142419520 body=149 status=ok
// SIG undefined FUN_142419520(void)

void FUN_142419520(longlong *param_1,float param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined1 local_58 [80];
  
  if ((param_2 != 0.0) && (plVar1 = (longlong *)param_1[0x92], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x720))(plVar1,local_78);
    puVar2 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_58,local_78);
    local_80 = *(undefined4 *)(puVar2 + 1);
    local_88 = *puVar2;
    local_60 = local_80;
    (**(code **)(*param_1 + 0x7e8))(param_1,&local_88,param_2,0);
  }
  return;
}



// FUNCTION 1424195c0 MovePoint body=244 status=ok
// SIG undefined MovePoint(void)

ulonglong FInterpCurve<float>::MovePoint(longlong *param_1,uint param_2,undefined4 param_3)

{
  void *_Dst;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 local_res10 [6];
  
  if ((-1 < (int)param_2) && (iVar4 = (int)param_1[1], (int)param_2 < iVar4)) {
    lVar7 = *param_1;
    local_res10[0] = *(undefined4 *)(lVar7 + 4 + (longlong)(int)param_2 * 0x14);
    _Dst = (void *)(lVar7 + (longlong)(int)param_2 * 0x14);
    uVar3 = *(undefined1 *)((longlong)_Dst + 0x10);
    uVar1 = *(undefined4 *)((longlong)_Dst + 8);
    uVar2 = *(undefined4 *)((longlong)_Dst + 0xc);
    iVar5 = (iVar4 - param_2) + -1;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)(lVar7 + (longlong)(int)(param_2 + 1) * 0x14),(longlong)iVar5 * 0x14);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 + -1;
    TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1);
    uVar6 = AddPoint(param_1,param_3,local_res10);
    lVar7 = (longlong)(int)uVar6;
    *(undefined1 *)(*param_1 + 0x10 + lVar7 * 0x14) = uVar3;
    *(undefined4 *)(*param_1 + 8 + lVar7 * 0x14) = uVar1;
    *(undefined4 *)(*param_1 + 0xc + lVar7 * 0x14) = uVar2;
    return uVar6;
  }
  return (ulonglong)param_2;
}



// FUNCTION 1424196c0 MovePoint body=276 status=ok
// SIG undefined MovePoint(void)

ulonglong FInterpCurve<FVector>::MovePoint(longlong *param_1,uint param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  void *_Dst;
  longlong lVar10;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((-1 < (int)param_2) && (iVar6 = (int)param_1[1], (int)param_2 < iVar6)) {
    _Dst = (void *)((longlong)(int)param_2 * 0x2c + *param_1);
    local_40 = *(undefined4 *)((longlong)_Dst + 0xc);
    local_48 = *(undefined8 *)((longlong)_Dst + 4);
    uVar3 = *(undefined1 *)((longlong)_Dst + 0x28);
    uVar1 = *(undefined8 *)((longlong)_Dst + 0x10);
    uVar4 = *(undefined4 *)((longlong)_Dst + 0x18);
    uVar2 = *(undefined8 *)((longlong)_Dst + 0x1c);
    uVar5 = *(undefined4 *)((longlong)_Dst + 0x24);
    iVar8 = (iVar6 - param_2) + -1;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((longlong)(int)(param_2 + 1) * 0x2c + *param_1),
                 (longlong)iVar8 * 0x2c);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 + -1;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_1);
    uVar9 = AddPoint(param_1,param_3,&local_48);
    lVar10 = (longlong)(int)uVar9 * 0x2c;
    *(undefined1 *)(lVar10 + 0x28 + *param_1) = uVar3;
    lVar7 = *param_1;
    *(undefined8 *)(lVar10 + 0x10 + lVar7) = uVar1;
    *(undefined4 *)(lVar10 + 0x18 + lVar7) = uVar4;
    lVar7 = *param_1;
    *(undefined8 *)(lVar10 + 0x1c + lVar7) = uVar2;
    *(undefined4 *)(lVar10 + 0x24 + lVar7) = uVar5;
    return uVar9;
  }
  return (ulonglong)param_2;
}



// FUNCTION 1424197e0 FUN_1424197e0 body=150 status=ok
// SIG undefined FUN_1424197e0(void)

void FUN_1424197e0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined1 local_58 [80];
  
  if ((param_2 != 0.0) && (plVar1 = (longlong *)param_1[0x92], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x720))(plVar1,local_78);
    lVar2 = FRotationMatrix::FRotationMatrix(local_58,local_78);
    local_80 = *(undefined4 *)(lVar2 + 0x18);
    local_88 = *(undefined8 *)(lVar2 + 0x10);
    local_60 = local_80;
    (**(code **)(*param_1 + 0x7e8))(param_1,&local_88,param_2,0);
  }
  return;
}



// FUNCTION 142419880 FUN_142419880 body=61 status=ok
// SIG undefined FUN_142419880(void)

void FUN_142419880(longlong *param_1,float param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_2 != 0.0) {
    local_10 = DAT_1464aa7a0;
    local_18 = DAT_1464aa798;
    (**(code **)(*param_1 + 0x7e8))(DAT_1464aa798,&local_18,param_2,0);
  }
  return;
}



// FUNCTION 1424198c0 FUN_1424198c0 body=48 status=ok
// SIG undefined FUN_1424198c0(void)

undefined4 FUN_1424198c0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (cVar1 != '\0') {
    if ((*(uint *)(param_1 + 6) >> 2 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1424198f0 FUN_1424198f0 body=48 status=ok
// SIG undefined FUN_1424198f0(void)

undefined4 FUN_1424198f0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2a8))();
  if (cVar1 != '\0') {
    if ((*(uint *)(param_1 + 6) >> 2 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142419920 FUN_142419920 body=998 status=ok
// SIG undefined FUN_142419920(void)

void FUN_142419920(undefined8 *param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 *local_res20;
  longlong local_48 [2];
  
  if (((*(int *)(param_1 + 0x14) < 1) || (*(longlong *)param_1[0x13] == 0)) ||
     (*(int *)(*(longlong *)param_1[0x13] + 300) == 1)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  local_res8 = param_1;
  cVar1 = UAbilityTask::IsWaitingOnRemotePlayerdata(param_2);
  if (((*(byte *)(param_2 + 0x91) & 4) == 0) || (param_3 != '\0')) {
    if (!bVar13) goto LAB_142419c7b;
  }
  else if (!bVar13) {
    if (cVar1 == '\0') {
      FWeakObjectPtr::operator=(&local_res10,param_2);
      lVar9 = param_1[0x1c];
      local_res20 = local_res10;
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x50,&local_res8,&local_res20);
      if (((int)local_res8 == -1) ||
         (lVar9 = *(longlong *)(lVar9 + 0x50) + (longlong)(int)local_res8 * 0x14, lVar9 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar9 + 8);
      }
      if (*(int *)(param_1 + 0x144) != *(int *)((longlong)param_1 + 0xa4c)) {
        puVar8 = (undefined8 *)param_1[0x14b];
        if ((undefined8 *)param_1[0x14b] == (undefined8 *)0x0) {
          puVar8 = param_1 + 0x14a;
        }
        iVar12 = *(int *)((longlong)puVar8 +
                         ((longlong)*(int *)(param_1 + 0x14c) - 1U & (longlong)iVar6) * 4);
        if (iVar12 != -1) {
          do {
            if (*(int *)(param_1[0x143] + (longlong)iVar12 * 0xc) == iVar6) break;
            iVar12 = *(int *)(param_1[0x143] + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
    }
    goto LAB_142419c7b;
  }
  if (cVar1 != '\0') {
    if (param_3 != '\0') {
      FWeakObjectPtr::operator=(&local_res10,param_2);
      local_res20 = local_res10;
      FUN_1423f93b0(param_1 + 0x60,&local_res20);
      puVar8 = *(undefined8 **)param_1[0x13];
      local_res10 = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        uVar5 = 0;
        if (((*(byte *)(param_2 + 0x90) & 1) != 0) &&
           (lVar9 = (longlong)*(int *)(puVar8 + 0x11), *(int *)(puVar8 + 0x11) != 0)) {
          bVar13 = *(longlong *)puVar8[0x10] != param_2;
          uVar7 = uVar5;
          uVar11 = uVar5;
          do {
            iVar6 = (int)uVar7;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)(iVar6 + 1);
            if ((longlong)uVar5 < lVar9) {
              plVar2 = (longlong *)(puVar8[0x10] + uVar5 * 8);
              do {
                if (bVar13 != (*plVar2 != param_2)) break;
                uVar7 = (ulonglong)((int)uVar7 + 1);
                uVar5 = uVar5 + 1;
                plVar2 = plVar2 + 1;
              } while ((longlong)uVar5 < lVar9);
            }
            iVar12 = (int)uVar7 - iVar6;
            if (bVar13 != false) {
              iVar10 = (int)uVar11;
              if (iVar10 != iVar6) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(puVar8[0x10] + (longlong)iVar10 * 8),
                           (void *)(puVar8[0x10] + (longlong)iVar6 * 8),(longlong)iVar12 << 3);
                puVar8 = local_res10;
              }
              uVar11 = (ulonglong)(uint)(iVar10 + iVar12);
            }
            bVar13 = (bool)(bVar13 ^ 1);
          } while ((longlong)uVar5 < lVar9);
          *(int *)(puVar8 + 0x11) = (int)uVar11;
          param_1 = local_res8;
        }
        FWeakObjectPtr::operator=(&local_res8,param_2);
        puVar8 = local_res10;
        plVar2 = (longlong *)FUN_14240d190(local_res10,&local_res8);
        if (plVar2 != (longlong *)0x0) {
          *(uint *)(plVar2 + 0x11) = *(uint *)(plVar2 + 0x11) & 0xfffffff7;
          (**(code **)(*plVar2 + 0x280))(plVar2);
          plVar2[0xd] = 0;
          FUN_1423e8710(plVar2,0);
        }
        FWeakObjectPtr::operator=(&local_res8,param_2);
        local_res10 = local_res8;
        TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
        ::Remove(puVar8 + 0x2df,&local_res10);
      }
      FNetworkObjectList::Remove(param_1[0xa5],param_2);
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Remove(param_1 + 0x56,*(undefined8 *)(param_2 + 0x18));
      return;
    }
    uVar3 = UObjectBaseUtility::GetFullName(param_2,local_48,0);
    FUN_1415cb280(param_1 + 0xb5,&local_res8,uVar3,0);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
LAB_142419c7b:
  uVar3 = AActor::GetLevel(param_2);
  FUN_142409610(param_1,&local_res8,uVar3);
  FUN_1425c50e0(param_1,param_2,param_3);
  puVar8 = local_res8;
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)*local_res8 + 0x2c8))((longlong *)*local_res8,0);
    plVar2 = (longlong *)puVar8[1];
    uVar5 = (ulonglong)*(int *)((longlong)puVar8 + 0x14);
    if (*(int *)((longlong)puVar8 + 0x14) < (int)plVar2[1]) {
      lVar9 = uVar5 * 0x18;
      do {
        lVar9 = lVar9 + 0x18;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined4 *)(*plVar2 + -4 + lVar9) = *(undefined4 *)(puVar8 + 2);
        plVar2 = (longlong *)puVar8[1];
      } while ((int)uVar4 < (int)plVar2[1]);
    }
    FMemory::operator_delete(puVar8,0x18);
  }
  return;
}



// FUNCTION 142419d10 FUN_142419d10 body=322 status=ok
// SIG undefined FUN_142419d10(void)

void FUN_142419d10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint local_res8;
  uint uStackX_c;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    lVar2 = *(longlong *)(param_1 + 0x90);
    if (*(int *)(lVar2 + 0x1608) != *(int *)(lVar2 + 0x1634)) {
      lVar5 = *(longlong *)(lVar2 + 0x1640);
      if (*(longlong *)(lVar2 + 0x1640) == 0) {
        lVar5 = lVar2 + 0x1638;
      }
      iVar4 = *(int *)(lVar5 + ((longlong)(int)(uStackX_c ^ local_res8) &
                               (longlong)*(int *)(lVar2 + 0x1648) - 1U) * 4);
      if (iVar4 != -1) {
        lVar5 = *(longlong *)(lVar2 + 0x1600);
        do {
          lVar1 = (longlong)iVar4 * 0x18;
          if ((*(uint *)(lVar1 + lVar5) == local_res8) &&
             (*(uint *)(lVar1 + 4 + lVar5) == uStackX_c)) {
            if ((iVar4 != -1) &&
               ((lVar1 + lVar5 != 0 && (lVar5 = *(longlong *)(lVar1 + lVar5 + 8), lVar5 != 0)))) {
              FWeakObjectPtr::operator=(&local_res18,param_2);
              local_res20 = local_res18;
              TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
              ::Remove((longlong *)(lVar2 + 0x1600),&local_res20);
              plVar3 = *(longlong **)(lVar2 + 0x1650);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x280))(plVar3,param_2);
              }
              *(undefined8 *)(lVar5 + 0x68) = 0;
              FUN_1423e8eb0(lVar5,0);
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 0x10 + lVar5);
        } while (iVar4 != -1);
      }
    }
  }
  FUN_1425c56a0(param_1,param_2);
  return;
}



// FUNCTION 142419e60 FUN_142419e60 body=253 status=ok
// SIG undefined FUN_142419e60(void)

void FUN_142419e60(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  short *psVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_18;
  ulonglong local_10;
  
  if ((*(char *)(param_1 + 0x89c) == '\0') &&
     ((*(longlong *)(param_1 + 0x90) == 0 || (*(int *)(*(longlong *)(param_1 + 0x90) + 300) == 1))))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_142423360();
  if (((bVar2) && (*(longlong *)(param_1 + 0xd0) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 400), plVar1 != (longlong *)0x0)) {
    psVar3 = (short *)EDemoPlayFailure::ToString();
    local_18 = 0;
    local_10 = 0;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (psVar3[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_10 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,psVar3,(longlong)(int)uVar4 * 2);
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142419f60 FUN_142419f60 body=527 status=ok
// SIG undefined FUN_142419f60(void)

void FUN_142419f60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  local_68 = (uint *)CONCAT44(local_68._4_4_,(undefined4)local_68);
  if ((((param_2 != 0) &&
       (local_68 = (uint *)CONCAT44(local_68._4_4_,(undefined4)local_68),
       (*(byte *)(param_2 + 0x205) & 0x40) == 0)) &&
      (local_68 = (uint *)CONCAT44(local_68._4_4_,(undefined4)local_68),
      *(char *)(param_1 + 0xae0) != '\0')) &&
     ((*(char *)(param_1 + 0x89c) != '\0' ||
      ((local_68 = (uint *)CONCAT44(local_68._4_4_,(undefined4)local_68),
       *(longlong *)(param_1 + 0x90) != 0 &&
       (local_68 = (uint *)CONCAT44(local_68._4_4_,(undefined4)local_68),
       *(int *)(*(longlong *)(param_1 + 0x90) + 300) != 1)))))) {
    plVar1 = (longlong *)(param_1 + 0x5f8);
    iVar2 = *(int *)(param_1 + 0x620);
    puStack_28 = (uint *)(param_1 + 0x608);
    local_78 = 0x100000000;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar7 = *(uint **)(param_1 + 0x618);
      if (*(uint **)(param_1 + 0x618) == (uint *)0x0) {
        puVar7 = puStack_28;
      }
      uVar5 = *puVar7;
      uStack_60 = 0;
      iVar6 = 0;
      while (uVar5 == 0) {
        uStack_60 = uStack_60 + 0x20;
        uVar4 = (ulonglong)local_78 >> 0x20;
        local_78 = CONCAT44((int)uVar4,iVar6 + 1);
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14241a07f;
        uVar5 = puVar7[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_78 = CONCAT44(uVar5,(undefined4)local_78);
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
      if (iVar2 < local_68._4_4_) {
LAB_14241a07f:
        local_68._4_4_ = iVar2;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = local_78;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_70 = local_78;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x620);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    local_68 = puStack_28;
    if (bVar3) {
      do {
        if (*(longlong *)((longlong)iStack_5c * 0xb8 + 0x38 + *plVar1) == param_2) {
          TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
          ::Remove(local_58._8_8_);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  FUN_1425c5c30(param_1,param_2);
  return;
}



// FUNCTION 14241a170 FUN_14241a170 body=316 status=ok
// SIG undefined FUN_14241a170(void)

void FUN_14241a170(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18 [2];
  
  *(undefined1 *)(param_1 + 0xb60) = 0;
  if (*(int *)(param_2 + 8) == 0) {
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    cVar1 = FUN_14241ce70(param_1,&local_28);
    if (cVar1 == '\0') {
      puVar2 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar2 = local_28;
      }
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 400);
      FString::PrintfImpl(local_18,
                          L"UDemoNetDriver::OnDownloadHeaderComplete: ReadPlaybackDemoHeader header failed with error %s."
                          ,puVar2);
    }
    else {
      if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x9c0))) {
        FUN_14241bb10(param_1,param_3);
        puVar2 = local_28;
        goto LAB_14241a292;
      }
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 400);
      FString::PrintfImpl(local_18,
                          L"UDemoNetDriver::OnDownloadHeaderComplete: LevelIndex %d not in range of level names of size: %d"
                          ,param_3,*(undefined4 *)(param_1 + 0x9c0));
    }
    (**(code **)(*plVar3 + 0x2c8))(plVar3,2,local_18);
    puVar2 = local_28;
    if (local_18[0] != (undefined2 *)0x0) {
      FMemory::Free();
      puVar2 = local_28;
    }
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 400);
    FString::PrintfImpl(local_18,
                        L"UDemoNetDriver::OnDownloadHeaderComplete: Downloading header failed.");
    (**(code **)(*plVar3 + 0x2c8))(plVar3,2,local_18);
    puVar2 = local_18[0];
  }
LAB_14241a292:
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14241a2b0 FUN_14241a2b0 body=376 status=ok
// SIG undefined FUN_14241a2b0(void)

void FUN_14241a2b0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 local_res10;
  longlong local_res20;
  longlong local_28 [2];
  longlong local_18 [2];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (((((param_2 != 0) && ((*(byte *)(param_2 + 0x205) & 0x40) == 0)) &&
       (*(longlong *)(param_1 + 0xd0) == param_3)) && (*(char *)(param_1 + 0xae0) != '\0')) &&
     ((*(char *)(param_1 + 0x89c) != '\0' ||
      ((*(longlong *)(param_1 + 0x90) != 0 && (*(int *)(*(longlong *)(param_1 + 0x90) + 300) != 1)))
      ))) {
    FWeakObjectPtr::operator=(&local_res20,param_2);
    local_28[0] = local_res20;
    piVar1 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x848,&local_res10,local_28);
    if (*piVar1 == -1) {
      piVar1 = (int *)TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
                      ::FindId(param_1 + 0xae8,&local_res10,param_2);
      if (*piVar1 == -1) {
        lVar2 = UObjectBaseUtility::GetOutermost(param_2);
        local_res10 = *(undefined8 *)(lVar2 + 0x18);
        FName::ToString(&local_res10,local_28);
        FUN_1428d4fe0(local_18,local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        lVar2 = FUN_14240d2f0(param_1,local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        if (*(char *)(lVar2 + 0x15) == '\0') {
          *(undefined1 *)(lVar2 + 0x14) = 1;
          return;
        }
        if (*(char *)(lVar2 + 0x14) == '\0') {
          FWeakObjectPtr::operator=(&local_res20,param_2);
          TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                    (param_1 + 0x848,&local_res10,&local_res20,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 14241a430 FUN_14241a430 body=665 status=ok
// SIG undefined FUN_14241a430(void)

void FUN_14241a430(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res10;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  FUN_1425c5d40();
  if (param_2 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x205) & 0x40) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xd0) != param_3) {
    return;
  }
  if (*(char *)(param_1 + 0xae0) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x89c) == '\0') {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 300) == 1) {
      return;
    }
  }
  lVar3 = UObjectBaseUtility::GetOutermost(param_2);
  local_res10 = *(undefined8 *)(lVar3 + 0x18);
  FName::ToString(&local_res10,local_28);
  FUN_1428d4fe0(&local_38,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0xa80) != *(int *)(param_1 + 0xaac)) {
    puVar4 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    iVar1 = FUN_140438070(puVar4);
    lVar7 = 0;
    lVar3 = *(longlong *)(param_1 + 0xab8);
    if (*(longlong *)(param_1 + 0xab8) == 0) {
      lVar3 = param_1 + 0xab0;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0xac0) - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xa78);
      do {
        lVar6 = (longlong)iVar1 * 0x20;
        puVar4 = &DAT_143f3eda8;
        if (local_30 != 0) {
          puVar4 = local_38;
        }
        if (*(int *)(lVar6 + 8 + lVar3) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar6 + lVar3);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar4);
        if (iVar2 == 0) {
          if (iVar1 != -1) {
            if (*(int *)(param_1 + 0xa80) == *(int *)(param_1 + 0xaac)) goto LAB_14241a667;
            puVar4 = &DAT_143f3eda8;
            if (local_30 != 0) {
              puVar4 = local_38;
            }
            iVar1 = FUN_140438070(puVar4);
            lVar3 = *(longlong *)(param_1 + 0xab8);
            if (*(longlong *)(param_1 + 0xab8) == 0) {
              lVar3 = param_1 + 0xab0;
            }
            iVar1 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0xac0) - 1U & (longlong)iVar1) *
                                     4);
            if (iVar1 == -1) goto LAB_14241a667;
            lVar3 = *(longlong *)(param_1 + 0xa78);
            goto LAB_14241a610;
          }
          break;
        }
        lVar3 = *(longlong *)(param_1 + 0xa78);
        iVar1 = *(int *)(lVar6 + 0x18 + lVar3);
      } while (iVar1 != -1);
    }
  }
  goto LAB_14241a6b2;
  while( true ) {
    lVar3 = *(longlong *)(param_1 + 0xa78);
    iVar1 = *(int *)(lVar3 + 0x18 + lVar6);
    if (iVar1 == -1) break;
LAB_14241a610:
    lVar6 = (longlong)iVar1 * 0x20;
    puVar4 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    if (*(int *)(lVar3 + 8 + lVar6) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(lVar3 + lVar6);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar4);
    if (iVar2 == 0) {
      lVar7 = 0;
      if (iVar1 != -1) {
        lVar7 = *(longlong *)(param_1 + 0xa78) + lVar6;
      }
      break;
    }
  }
LAB_14241a667:
  *(undefined1 *)(*(longlong *)(param_1 + 0xa68) + 0x14 + (longlong)*(int *)(lVar7 + 0x10) * 0x18) =
       0;
  TSet<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0xae8,param_2);
  FWeakObjectPtr::operator=(&local_res10,param_2);
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x848,&local_res10);
LAB_14241a6b2:
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14241a710 FUN_14241a710 body=88 status=ok
// SIG undefined FUN_14241a710(void)

void FUN_14241a710(longlong param_1)

{
  longlong local_18 [2];
  
  *(undefined1 *)(param_1 + 0x9f9) = 1;
  FUN_142407d90();
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_1424280c0(param_1,local_18);
  (**(code **)(**(longlong **)(param_1 + 0x568) + 0x100))();
  if (local_18[0] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14241a770 FUN_14241a770 body=300 status=ok
// SIG undefined FUN_14241a770(void)

void FUN_14241a770(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  longlong *local_20;
  undefined4 local_18;
  
  lVar1 = param_1[0x17];
  lVar2 = param_6[1];
  *(byte *)((longlong)param_4 + 0x99) = *(byte *)((longlong)param_4 + 0x99) & 0xf7;
  bVar3 = 0;
  if (0 < (int)lVar1) {
    bVar3 = 8;
  }
  *(byte *)((longlong)param_4 + 0x99) = *(byte *)((longlong)param_4 + 0x99) | bVar3;
  (**(code **)(*(longlong *)param_1[0x15] + 0x2d0))();
  if (((((int)param_6[1] == (int)lVar2 + 1) &&
       (local_38 = *(longlong *)(*param_6 + -8 + (longlong)(int)param_6[1] * 8), local_38 != 0)) &&
      (local_38 != param_1[0x18])) &&
     ((param_1[0x18] = local_38, (*(byte *)((longlong)param_4 + 0x99) & 4) != 0 && (0 < (int)lVar1))
     )) {
    local_3c = param_4[1];
    local_20 = param_1 + 0x16;
    local_30 = param_4[0x43];
    local_48 = *(undefined8 *)(param_4 + 6);
    local_40 = *param_4;
    local_2c = (**(code **)(*param_1 + 0x2a0))(param_1);
    local_28 = local_28 & 0xfc;
    local_18 = param_4[0x2c];
    FUN_142858ae0(&local_48);
  }
  return;
}



// FUNCTION 14241a8a0 FUN_14241a8a0 body=237 status=ok
// SIG undefined FUN_14241a8a0(void)

void FUN_14241a8a0(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 != *(char *)(param_1 + 0x555)) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x78) + -1;
    lVar4 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x70) + lVar4 * 8);
        if (lVar1 != 0) {
          lVar3 = FUN_1428e6c20();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (param_2 == '\0') {
              uVar6 = 0x3f800000;
            }
            else {
              uVar6 = 0;
            }
            lVar3 = *(longlong *)(lVar1 + 0x68);
            *(undefined4 *)(lVar1 + 0x74) = uVar6;
            if ((lVar3 != *(longlong *)(param_1 + 0x560)) && (lVar3 != 0)) {
              *(undefined4 *)(lVar3 + 0xd0) = uVar6;
            }
          }
        }
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    *(char *)(param_1 + 0x555) = param_2;
  }
  return;
}



// FUNCTION 14241a990 PostDuplicate body=35 status=ok
// SIG undefined PostDuplicate(void)

void UDialogueVoice::PostDuplicate(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  if (param_2 == '\0') {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x2c) = *puVar2;
    *(undefined8 *)(param_1 + 0x34) = uVar1;
  }
  return;
}



// FUNCTION 14241a9c0 PostDuplicate body=35 status=ok
// SIG undefined PostDuplicate(void)

void UDialogueWave::PostDuplicate(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  if (param_2 == '\0') {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x60) = *puVar2;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  return;
}



// FUNCTION 14241a9f0 FUN_14241a9f0 body=27 status=ok
// SIG undefined FUN_14241a9f0(void)

void FUN_14241a9f0(undefined8 param_1)

{
  FUN_1417931d0();
  FUN_142427640(param_1);
  return;
}



// FUNCTION 14241aa10 PostInitProperties body=154 status=ok
// SIG undefined PostInitProperties(void)

void UDistributionFloatConstant::PostInitProperties(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar3 = USoundNode::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar3 = USoundNode::GetPrivateStaticClass();
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0x1e6930c2;
  }
  return;
}



// FUNCTION 14241aab0 PostInitProperties body=165 status=ok
// SIG undefined PostInitProperties(void)

void UDistributionFloatUniform::PostInitProperties(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar3 = USoundNode::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar3 = USoundNode::GetPrivateStaticClass();
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0x1e6930c2;
    *(undefined4 *)(param_1 + 0x3c) = 0x1e6930c2;
  }
  return;
}



// FUNCTION 14241ab60 PostInitProperties body=185 status=ok
// SIG undefined PostInitProperties(void)

void UDistributionVectorConstant::PostInitProperties(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar3 = USoundNode::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar3 = USoundNode::GetPrivateStaticClass();
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0x1e6930c21e6930c2;
    *(undefined4 *)(param_1 + 0x40) = 0x1e6930c2;
  }
  return;
}



// FUNCTION 14241ac20 PostInitProperties body=211 status=ok
// SIG undefined PostInitProperties(void)

void UDistributionVectorUniform::PostInitProperties(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar3 = USoundNode::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar3 = USoundNode::GetPrivateStaticClass();
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x44) = 0x1e6930c21e6930c2;
    *(undefined4 *)(param_1 + 0x4c) = 0x1e6930c2;
    *(undefined8 *)(param_1 + 0x38) = 0x1e6930c21e6930c2;
    *(undefined4 *)(param_1 + 0x40) = 0x1e6930c2;
  }
  return;
}



// FUNCTION 14241ad00 PostLoad body=84 status=ok
// SIG undefined PostLoad(void)

void UDialogueWave::PostLoad(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  UObject::PostLoad();
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x38 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x38) {
    FUN_142427180(param_1,lVar1);
  }
  return;
}



// FUNCTION 14241ad60 PostLoad body=41 status=ok
// SIG undefined PostLoad(void)

void UDistributionFloatConstant::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  if (*(float *)(param_1 + 0x38) == 1.2345e-20) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14241ad90 PostLoad body=48 status=ok
// SIG undefined PostLoad(void)

void UDistributionFloatUniform::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  if (*(float *)(param_1 + 0x38) == 1.2345e-20) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(float *)(param_1 + 0x3c) == 1.2345e-20) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 14241adc0 PostLoad body=68 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UDistributionVectorConstant::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  if (((*(float *)(param_1 + 0x38) == 1.2345e-20) && (*(float *)(param_1 + 0x3c) == 1.2345e-20)) &&
     (*(float *)(param_1 + 0x40) == 1.2345e-20)) {
    *(undefined8 *)(param_1 + 0x38) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x40) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 14241ae10 PostLoad body=108 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UDistributionVectorUniform::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  if (((*(float *)(param_1 + 0x44) == 1.2345e-20) && (*(float *)(param_1 + 0x48) == 1.2345e-20)) &&
     (*(float *)(param_1 + 0x4c) == 1.2345e-20)) {
    *(undefined8 *)(param_1 + 0x44) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x4c) = DAT_1468b5d98;
  }
  if (((*(float *)(param_1 + 0x38) == 1.2345e-20) && (*(float *)(param_1 + 0x3c) == 1.2345e-20)) &&
     (*(float *)(param_1 + 0x40) == 1.2345e-20)) {
    *(undefined8 *)(param_1 + 0x38) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x40) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 14241ae80 FUN_14241ae80 body=56 status=ok
// SIG undefined FUN_14241ae80(void)

void FUN_14241ae80(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  
  if (((param_2 != 0) && (param_3 != (longlong *)0x0)) &&
     (iVar1 = TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                        (param_1 + 0xa18,param_2 + 0x70), 0 < iVar1)) {
    (**(code **)(*param_3 + 0x2e8))(param_3);
  }
  return;
}



// FUNCTION 14241aec0 FUN_14241aec0 body=1466 status=ok
// SIG undefined FUN_14241aec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14241aec0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_188 [32];
  int local_168;
  uint uStack_164;
  uint *puStack_160;
  undefined4 local_158;
  uint uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined8 *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  ulonglong local_e0;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong local_a0 [3];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (((char)param_1[0x15c] != '\0') && ((int)param_1[0x10a] != *(int *)((longlong)param_1 + 0x87c))
     ) {
    lVar3 = param_1[0x1a];
    local_130 = param_1 + 0x109;
    uVar1 = *(uint *)(param_1 + 0x10e);
    puVar16 = (uint *)(param_1 + 0x10b);
    uStack_164 = 1;
    local_168 = 0;
    uStack_154 = 0;
    iStack_150 = 0;
    if (uVar1 != 0) {
      puVar14 = (uint *)param_1[0x10d];
      if ((uint *)param_1[0x10d] == (uint *)0x0) {
        puVar14 = puVar16;
      }
      uVar2 = *puVar14;
      iStack_150 = 0;
      local_168 = 0;
      while (uVar2 == 0) {
        lVar10 = (longlong)local_168;
        iStack_150 = iStack_150 + 0x20;
        iVar9 = local_168 + 1;
        bVar4 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_168;
        local_168 = iVar9;
        if (bVar4) goto LAB_14241afe1;
        uVar2 = puVar14[lVar10 + 1];
      }
      uStack_164 = -uVar2 & uVar2;
      iVar9 = 0x1f;
      if (uStack_164 != 0) {
        for (; uStack_164 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_164 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_154 = (iStack_150 - iVar9) + 0x1f;
      if ((int)uVar1 < (int)uStack_154) {
LAB_14241afe1:
        uStack_154 = uVar1;
      }
    }
    local_158 = 0xffffffff;
    uVar2 = *(uint *)(param_1 + 0x10e);
    uStack_128 = CONCAT44(uStack_164,local_168);
    uStack_c0 = 0xffffffff;
    uStack_bc = uStack_154;
    uStack_110 = CONCAT44(uStack_14c,iStack_150);
    uVar17 = -1 << ((byte)uVar2 & 0x1f);
    uVar13 = uVar2 & 0xffffffe0;
    uStack_120 = CONCAT44(uVar2,uVar17);
    iStack_d0 = local_168;
    uStack_cc = uStack_164;
    if (uVar2 != uVar1) {
      puVar14 = (uint *)param_1[0x10d];
      if ((uint *)param_1[0x10d] == (uint *)0x0) {
        puVar14 = puVar16;
      }
      uVar17 = puVar14[(int)uVar2 >> 5] & uVar17;
      iVar9 = (int)uVar2 >> 5;
      while (uVar17 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_14241b0b3;
        uVar17 = puVar14[(longlong)iVar9 + 1];
        uStack_120 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar17 = -uVar17 & uVar17;
      iVar9 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar17 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iVar9 = (uVar13 - iVar9) + 0x1f;
      uStack_120 = CONCAT44(iVar9,(undefined4)uStack_120);
      if ((int)uVar1 < iVar9) {
LAB_14241b0b3:
        uStack_120 = CONCAT44(uVar1,(undefined4)uStack_120);
      }
    }
    local_e0 = uStack_120 >> 0x20;
    puStack_160 = puVar16;
    local_c8 = puVar16;
    local_b8 = uStack_110;
    local_d8 = local_130;
    uStack_118 = uStack_c0;
    uStack_114 = uStack_bc;
    while( true ) {
      if (((uStack_bc == (uint)local_e0) && (local_c8 == puVar16)) && (local_d8 == param_1 + 0x109))
      break;
      lVar10 = FWeakObjectPtr::Get((longlong)(int)uStack_bc * 0x10 + *local_d8);
      local_148 = lVar10;
      if (lVar10 != 0) {
        piVar6 = (int *)TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
                        ::FindId(param_1 + 0x15d,local_108,lVar10);
        if (*piVar6 == -1) {
          uVar18 = 0;
          local_58 = 0xffffffff;
          local_88 = 0;
          local_80 = 0;
          local_68 = 0;
          local_60 = 0;
          local_54 = 0;
          local_48 = 0;
          local_40 = 0;
          plVar12 = *(longlong **)(lVar10 + 0xa0);
          uVar15 = (longlong)*(int *)(lVar10 + 0xa8) & 0x1fffffffffffffff;
          if (plVar12 + *(int *)(lVar10 + 0xa8) < plVar12) {
            uVar15 = uVar18;
          }
          if (uVar15 != 0) {
            do {
              lVar10 = *plVar12;
              if (lVar10 != 0) {
                cVar5 = UAbilityTask::IsWaitingOnRemotePlayerdata();
                if (cVar5 != '\0') {
                  uVar7 = UObjectBaseUtility::GetFullName(lVar10,local_a0,0);
                  piVar6 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                                  FindId(param_1 + 0xb5,local_104,uVar7);
                  iVar9 = *piVar6;
                  if (local_a0[0] != 0) {
                    FMemory::Free();
                  }
                  if (iVar9 == -1) {
                    uVar7 = UObjectBaseUtility::GetFullName(lVar10,&local_130,0);
                    piVar6 = (int *)TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                                    ::FindId(param_1 + 0xbf,local_100,uVar7);
                    iVar9 = *piVar6;
                    if (local_130 != (longlong *)0x0) {
                      FMemory::Free();
                    }
                    if (iVar9 == -1) {
                      FWeakObjectPtr::operator=(local_f0,lVar10);
                      FUN_142400b00(&local_88,local_fc,local_f0,0);
                    }
                    else {
                      FUN_142543860();
                    }
                  }
                  else {
                    (**(code **)(*param_1 + 0x410))(param_1,lVar10);
                    FUN_142543860(lVar3,lVar10);
                  }
                }
              }
              plVar12 = plVar12 + 1;
              uVar18 = uVar18 + 1;
              lVar10 = local_148;
            } while (uVar18 != uVar15);
          }
          local_140 = (undefined8 *)0x0;
          local_138 = 0;
          FUN_14241e880(param_1,&local_140,lVar10);
          puVar11 = local_140;
          uVar18 = 0;
          uVar15 = (ulonglong)((longlong)(local_140 + (int)local_138) + (7 - (longlong)local_140))
                   >> 3;
          if (local_140 + (int)local_138 < local_140) {
            uVar15 = uVar18;
          }
          puVar8 = local_140;
          if (uVar15 != 0) {
            do {
              FWeakObjectPtr::operator=(local_e8,*puVar8);
              FUN_142400b00(&local_88,local_f8,local_e8,0);
              uVar18 = uVar18 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar18 != uVar15);
          }
          if (0 < (int)local_80 - local_54) {
            local_b0 = &local_148;
            local_a8 = &local_88;
            FUN_142401670(param_1 + 0x15d,local_f4,&local_b0);
          }
          if (puVar11 != (undefined8 *)0x0) {
            FMemory::Free(puVar11);
          }
          local_40 = 0;
          if (local_48 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_88);
          puVar16 = puStack_160;
        }
      }
      uStack_c0 = uStack_c0 & ~uStack_cc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
    }
    TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x109,0);
    if (((int)param_1[0x15e] != *(int *)((longlong)param_1 + 0xb1c)) &&
       (*(float *)(param_1 + 0x15b) != 0.0)) {
      cVar5 = FUN_142416e20(param_1,&DAT_146af2778);
      if (cVar5 == '\0') {
        cVar5 = FUN_142416e20(param_1,&DAT_146af2780);
        if (cVar5 == '\0') {
          puVar8 = (undefined8 *)operator_new(0x48);
          puVar11 = (undefined8 *)0x0;
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[1] = 0;
            puVar8[2] = 0;
            *puVar8 = &PTR_FUN_145094ff8;
            FWeakObjectPtr::operator=(puVar8 + 3,param_1);
            *(undefined4 *)(puVar8 + 4) = 0;
            *puVar8 = &PTR_FUN_145095748;
            *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
            puVar8[5] = 0;
            puVar8[6] = 0xffffffffffffffff;
            puVar8[7] = 0;
            *(undefined4 *)(puVar8 + 8) = 0;
            puVar11 = puVar8;
          }
          FUN_142408160(param_1,puVar11);
        }
      }
    }
  }
  return;
}



// FUNCTION 14241b480 FUN_14241b480 body=490 status=ok
// SIG undefined FUN_14241b480(void)

void FUN_14241b480(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int *piVar14;
  
  puVar2 = (undefined8 *)(param_1 + 0x7e8);
  uVar12 = (ulonglong)*(int *)(param_1 + 0x7f0);
  piVar4 = (int *)*puVar2;
  if (piVar4 != piVar4 + uVar12 * 8) {
    piVar14 = piVar4 + 6;
    do {
      if (((*(char *)(param_1 + 0xae0) == '\0') || (*piVar14 == 0)) ||
         (lVar13 = *(longlong *)(param_1 + 0xa68),
         lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0xac8) + -4 + (longlong)*piVar14 * 4),
         *(undefined1 *)(lVar13 + 0x15 + lVar9 * 0x18) = 1,
         *(char *)(lVar13 + 0x14 + lVar9 * 0x18) != '\0')) {
        iVar3 = piVar14[-4];
        uVar5 = *(undefined8 *)(piVar14 + -6);
        if (*(char *)(param_1 + 0x555) != '\0') {
          iVar8 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x78) + -1;
          lVar13 = (longlong)iVar8;
          if (-1 < iVar8) {
            do {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x70) + lVar13 * 8);
              if (lVar9 != 0) {
                lVar7 = FUN_1428e6c20();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) {
                  lVar7 = *(longlong *)(lVar9 + 0x68);
                  *(undefined4 *)(lVar9 + 0x74) = 0x3f800000;
                  if ((lVar7 != *(longlong *)(param_1 + 0x560)) && (lVar7 != 0)) {
                    *(undefined4 *)(lVar7 + 0xd0) = 0x3f800000;
                  }
                }
              }
              lVar13 = lVar13 + -1;
            } while (-1 < lVar13);
          }
          *(undefined1 *)(param_1 + 0x555) = 0;
        }
        plVar10 = *(longlong **)(param_1 + 0x90);
        if (plVar10 == (longlong *)0x0) {
LAB_14241b5da:
          FUN_142419e60(param_1,0);
        }
        else {
          (**(code **)(*plVar10 + 0x350))(plVar10,uVar5,iVar3);
          if ((*(longlong *)(param_1 + 0x90) == 0) ||
             (*(int *)(*(longlong *)(param_1 + 0x90) + 300) == 1)) goto LAB_14241b5da;
        }
        *(int *)(param_1 + 0xad8) = piVar14[-2];
      }
      piVar1 = piVar14 + 2;
      piVar14 = piVar14 + 8;
    } while (piVar1 != piVar4 + uVar12 * 8);
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x7f0);
  }
  plVar10 = (longlong *)*puVar2;
  uVar11 = (uint)uVar12;
  while (uVar11 != 0) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 4;
    uVar11 = (int)uVar12 - 1;
    uVar12 = (ulonglong)uVar11;
  }
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  if (*(int *)(param_1 + 0x7f4) == 0) {
    return;
  }
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
            (puVar2,0);
  return;
}



// FUNCTION 14241b670 FUN_14241b670 body=107 status=ok
// SIG undefined FUN_14241b670(void)

undefined8 FUN_14241b670(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0xae0) != '\0') && (*(int *)(param_2 + 3) != 0)) {
    lVar2 = (longlong)
            *(int *)(*(longlong *)(param_1 + 0xac8) + -4 + (longlong)*(int *)(param_2 + 3) * 4);
    uVar1 = *(ulonglong *)(param_1 + 0xa68);
    *(undefined1 *)(uVar1 + 0x15 + lVar2 * 0x18) = 1;
    if (*(char *)(uVar1 + 0x14 + lVar2 * 0x18) == '\0') goto LAB_14241b6ce;
  }
  FUN_14241b6e0(param_1,*param_2,*(undefined4 *)(param_2 + 1));
  uVar1 = (ulonglong)*(uint *)(param_2 + 2);
  *(uint *)(param_1 + 0xad8) = *(uint *)(param_2 + 2);
LAB_14241b6ce:
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 14241b6e0 FUN_14241b6e0 body=125 status=ok
// SIG undefined FUN_14241b6e0(void)

undefined8 FUN_14241b6e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  FUN_14241a8a0(param_1,0);
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x350))(plVar1,param_2,param_3);
    if ((*(longlong *)(param_1 + 0x90) != 0) && (*(int *)(*(longlong *)(param_1 + 0x90) + 300) != 1)
       ) {
      return 1;
    }
  }
  FUN_142419e60(param_1,0);
  return 0;
}



// FUNCTION 14241b760 FUN_14241b760 body=337 status=ok
// SIG undefined FUN_14241b760(void)

void FUN_14241b760(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined8 *local_28 [2];
  
  if (((0 < (int)param_1[0x14]) && (*(longlong *)param_1[0x13] != 0)) &&
     (*(int *)(*(longlong *)param_1[0x13] + 300) != 1)) {
    uVar3 = AActor::GetLevel(param_2);
    FUN_142409610(param_1,local_28,uVar3);
    if ((*(uint *)(param_3 + 0x88) & 0x4000) != 0) {
      FUN_1423e5be0(local_res8,param_2);
      puVar1 = (undefined8 *)param_1[0x13];
      uVar2 = (**(code **)(*param_1 + 0x368))(param_1);
      FUN_1425c3fb0(param_1,param_2,param_7,*puVar1,param_3,param_4,param_5,param_6,uVar2);
      FUN_1423e62c0(local_res8);
    }
    if (local_28[0] != (undefined8 *)0x0) {
      (**(code **)(*(longlong *)*local_28[0] + 0x2c8))((longlong *)*local_28[0],0);
      plVar5 = (longlong *)local_28[0][1];
      uVar7 = (ulonglong)*(int *)((longlong)local_28[0] + 0x14);
      if (*(int *)((longlong)local_28[0] + 0x14) < (int)plVar5[1]) {
        lVar4 = uVar7 * 0x18;
        do {
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          *(undefined4 *)(lVar4 + 0x14 + *plVar5) = *(undefined4 *)(local_28[0] + 2);
          plVar5 = (longlong *)local_28[0][1];
          lVar4 = lVar4 + 0x18;
        } while ((int)uVar6 < (int)plVar5[1]);
      }
      FMemory::operator_delete(local_28[0],0x18);
    }
  }
  return;
}



// FUNCTION 14241b8c0 FUN_14241b8c0 body=586 status=ok
// SIG undefined FUN_14241b8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14241b8c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)(param_1 + 0x8c0);
  plVar9 = (longlong *)*plVar4;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if (plVar9 == (longlong *)0x0) {
    if (0 < *(int *)(param_1 + 0x8b8)) {
      plVar9 = (longlong *)(*(longlong **)(param_1 + 0x8b0))[1];
      lVar6 = **(longlong **)(param_1 + 0x8b0);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_88 = lVar6;
      plStack_80 = plVar9;
      if (&local_88 != plVar4) {
        local_88 = *plVar4;
        plStack_80 = *(longlong **)(param_1 + 0x8c8);
        *plVar4 = lVar6;
        *(longlong **)(param_1 + 0x8c8) = plVar9;
        local_48 = lVar6;
        plStack_40 = plVar9;
      }
      plVar9 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
      plVar1 = plStack_50;
      lVar6 = *plVar4;
      plVar9 = *(longlong **)(param_1 + 0x8c8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_68._0_4_ = (undefined4)lVar6;
      local_38 = (undefined4)local_68;
      local_68._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      uStack_34 = local_68._4_4_;
      uStack_60._0_4_ = SUB84(plVar9,0);
      uStack_30 = (undefined4)uStack_60;
      uStack_60._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
      uStack_2c = uStack_60._4_4_;
      local_68 = local_58;
      uStack_60 = plStack_50;
      local_58 = lVar6;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          puVar7 = (undefined8 *)*plStack_50;
          plStack_50 = plVar9;
          (*(code *)*puVar7)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar9 = plStack_50;
          if (iVar5 == 1) {
            (**(code **)(*uStack_60 + 8))(uStack_60,1);
            plVar9 = plStack_50;
          }
        }
      }
      plStack_50 = plVar9;
      TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (param_1 + 0x8b0,0,1,1);
      (**(code **)(*(longlong *)*plVar4 + 8))();
      plVar9 = *(longlong **)(param_1 + 0x8c0);
      if (plVar9 != (longlong *)0x0) goto LAB_14241ba35;
    }
  }
  else {
LAB_14241ba35:
    cVar8 = (**(code **)(*plVar9 + 0x10))();
    if (cVar8 == '\0') {
      uVar10 = 0;
      goto LAB_14241baa6;
    }
    local_70 = (longlong *)0x0;
    if (plVar4 != &local_78) {
      *plVar4 = 0;
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8c8,&local_70);
      plVar4 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_70 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
  }
  uVar10 = 1;
LAB_14241baa6:
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_50 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 14241bb10 FUN_14241bb10 body=542 status=ok
// SIG undefined FUN_14241bb10(void)

void FUN_14241bb10(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar4 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_3c = 0;
  FUN_1428cb820(*(undefined8 *)(param_1 + 0xd0),&local_38);
  plVar6 = plVar4;
  plVar3 = plVar4;
  iVar1 = (int)uStack_30;
  while ((iVar5 = (int)plVar6, -1 < iVar1 && (iVar1 < *(int *)((longlong)local_38 + 8)))) {
    lVar2 = FWeakObjectPtr::Get();
    local_40 = iVar5 + 1;
    if ((int)plVar3 < (int)local_40) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,plVar6);
      plVar3 = (longlong *)(ulonglong)local_3c;
      plVar4 = local_48;
    }
    plVar6 = (longlong *)(ulonglong)local_40;
    plVar4[iVar5] = lVar2;
    iVar1 = (int)uStack_30 + 1;
    uStack_30 = CONCAT44(uStack_30._4_4_,iVar1);
  }
  plVar3 = plVar4;
  if (0 < iVar5) {
    do {
      if (*plVar3 != 0) {
        FUN_142227350(*plVar3,1);
      }
      plVar6 = (longlong *)((longlong)plVar6 + -1);
      plVar3 = plVar3 + 1;
    } while (plVar6 != (longlong *)0x0);
  }
  *(undefined8 *)(param_1 + 0x560) = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x9c0) <= param_2)) {
    plVar6 = *(longlong **)(param_1 + 0x568);
    *(undefined1 *)(param_1 + 0xb60) = 1;
    local_38 = FUN_14241a170;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_48 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_40 = 3;
    local_48 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_145098928;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_38._4_4_;
      *(int *)(plVar3 + 3) = (int)uStack_30;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_30._4_4_;
      *(int *)(plVar3 + 4) = param_2;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_145098970;
    }
    (**(code **)(*plVar6 + 0x108))(plVar6,&local_48);
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_14241bcfe;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else {
    local_38 = (code *)0x0;
    uStack_30 = 0;
    UWorld::SeamlessTravel
              (*(undefined8 *)(param_1 + 0xd0),
               *(longlong *)(param_1 + 0x9b8) + (longlong)param_2 * 0x18,1,&local_38);
  }
LAB_14241bcfe:
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  return;
}



// FUNCTION 14241bd30 FUN_14241bd30 body=2277 status=ok
// SIG undefined FUN_14241bd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14241bd30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  DWORD DVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  longlong *plVar20;
  int local_res18 [2];
  undefined1 local_res20 [8];
  longlong local_1e0;
  longlong *local_1d8;
  int local_1d0;
  uint uStack_1cc;
  uint *puStack_1c8;
  undefined4 local_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  longlong local_178;
  longlong *local_170;
  int local_168;
  uint local_158;
  uint uStack_154;
  uint local_150;
  int local_148;
  int local_144;
  undefined1 local_140 [8];
  longlong *local_138;
  ulonglong local_130;
  uint *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0 [2];
  undefined8 local_e0;
  int iStack_d8;
  uint uStack_d4;
  uint *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  longlong local_98 [2];
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar13 = &local_118;
  cVar8 = UAbilityTask::IsWaitingOnRemotePlayerdata(param_2);
  if ((cVar8 != '\0') &&
     ((*(char *)(param_1 + 0x89c) != '\0' ||
      ((*(longlong *)(param_1 + 0x90) != 0 && (*(int *)(*(longlong *)(param_1 + 0x90) + 300) != 1)))
      ))) {
    UObjectBaseUtility::GetFullName(param_2,local_f0,0);
    piVar11 = (int *)TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                     ::FindId(param_1 + 0x5f8,local_res20,local_f0);
    local_e0 = (longlong *)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
    if ((*piVar11 == -1) &&
       (local_e0 = (longlong *)CONCAT44(local_e0._4_4_,(undefined4)local_e0),
       (*(byte *)(param_2 + 0x91) & 4) == 0)) {
      local_138 = local_f0;
      FUN_142401190(param_1 + 0x5f8,local_res18,&local_138);
      lVar5 = *(longlong *)(param_1 + 0x5f8);
      lVar19 = (longlong)local_res18[0] * 0xb8;
      *(undefined8 *)(lVar5 + 0x10 + lVar19) = *(undefined8 *)(param_2 + 0x18);
      local_1b0 = lVar5;
      uVar12 = FUN_14178ca30(param_2);
      *(undefined8 *)(lVar5 + 0x18 + lVar19) = uVar12;
      lVar17 = *(longlong *)(param_2 + 0x168);
      if (lVar17 == 0) {
        local_110 = DAT_1468b5d98;
        local_118 = _DAT_1468b5d90;
      }
      else {
        local_48 = *(undefined4 *)(lVar17 + 0x220);
        uStack_44 = *(undefined4 *)(lVar17 + 0x224);
        uStack_40 = *(undefined4 *)(lVar17 + 0x228);
        uStack_3c = *(undefined4 *)(lVar17 + 0x22c);
        puVar13 = (undefined8 *)&local_188;
        local_188 = local_48;
        local_180 = uStack_40;
        uStack_184 = uStack_44;
      }
      uVar3 = *(undefined4 *)(puVar13 + 1);
      *(undefined8 *)(lVar5 + 0x20 + lVar19) = *puVar13;
      *(undefined4 *)(lVar5 + 0x28 + lVar19) = uVar3;
      lVar17 = *(longlong *)(param_2 + 0x168);
      if (lVar17 == 0) {
        local_f8 = DAT_1468b5da8;
        puVar13 = &local_100;
        local_100 = DAT_1468b5da0;
      }
      else {
        local_a8 = *(float *)(lVar17 + 0x210);
        fStack_a4 = *(float *)(lVar17 + 0x214);
        fStack_a0 = *(float *)(lVar17 + 0x218);
        fStack_9c = *(float *)(lVar17 + 0x21c);
        auVar7._4_4_ = -(uint)(*(float *)(lVar17 + 0x254) != fStack_a4);
        auVar7._0_4_ = -(uint)(*(float *)(lVar17 + 0x250) != local_a8);
        auVar7._8_4_ = -(uint)(*(float *)(lVar17 + 600) != fStack_a0);
        auVar7._12_4_ = -(uint)(*(float *)(lVar17 + 0x25c) != fStack_9c);
        iVar9 = movmskps(uVar3,auVar7);
        if (iVar9 != 0) {
          *(float *)(lVar17 + 0x250) = local_a8;
          *(float *)(lVar17 + 0x254) = fStack_a4;
          *(float *)(lVar17 + 600) = fStack_a0;
          *(float *)(lVar17 + 0x25c) = fStack_9c;
          puVar13 = (undefined8 *)FQuat::Rotator(&local_a8,local_60);
          *(undefined8 *)(lVar17 + 0x260) = *puVar13;
          *(undefined4 *)(lVar17 + 0x268) = *(undefined4 *)(puVar13 + 1);
        }
        local_104 = *(undefined4 *)(lVar17 + 0x268);
        puVar13 = &local_10c;
        local_10c = *(undefined8 *)(lVar17 + 0x260);
      }
      uVar3 = *(undefined4 *)(puVar13 + 1);
      *(undefined8 *)(lVar5 + 0x2c + lVar19) = *puVar13;
      *(undefined4 *)(lVar5 + 0x34 + lVar19) = uVar3;
      uVar12 = AActor::GetLevel(param_2);
      *(undefined8 *)(lVar5 + 0x38 + lVar19) = uVar12;
      lVar17 = DAT_146af2730;
      cVar8 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar10 = GetCurrentThreadId(), DVar10 != DAT_1468c21c0)) {
        lVar14 = 4;
      }
      else {
        lVar14 = 0;
      }
      if (*(int *)(lVar14 + lVar17) != 0) {
        local_1a0 = (longlong *)operator_new(0x378);
        if (local_1a0 != (longlong *)0x0) {
          *(undefined4 *)(local_1a0 + 1) = 1;
          *(undefined4 *)((longlong)local_1a0 + 0xc) = 1;
          *local_1a0 = (longlong)&PTR_FUN_1450989b8;
          FObjectReplicator::FObjectReplicator(local_1a0 + 2);
        }
        local_1a8 = local_1a0 + 2;
        SharedPointerInternals::EnableSharedFromThis();
        plVar20 = local_1a0;
        plVar15 = local_1a8;
        local_120 = local_1a0;
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
          UNLOCK();
          if (local_1a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1a0 + 1;
            lVar17 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_1a0)();
              LOCK();
              piVar11 = (int *)((longlong)plVar20 + 0xc);
              iVar9 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar20 + 8))(plVar20,1);
              }
            }
          }
        }
        if (plVar15 != (longlong *)0x0) {
          uVar12 = FUN_14178ca30(param_2);
          FUN_1423f1670(plVar15,uVar12);
          if (((plVar15[0x56] != 0) && ((undefined8 *)plVar15[0x58] != (undefined8 *)0x0)) &&
             (cVar8 = FUN_14271c3c0(plVar15[0x56],0,lVar19 + 0xa0 + lVar5,
                                    *(undefined8 *)plVar15[0x58],param_2), cVar8 != '\0')) {
            lVar5 = plVar15[0x58];
            plVar15[0x58] = 0;
            plVar15 = (longlong *)operator_new(0x18);
            if (plVar15 == (longlong *)0x0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              *(undefined4 *)(plVar15 + 1) = 1;
              *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
              *plVar15 = (longlong)&PTR_DestroyObject_145098ae8;
              plVar15[2] = lVar5;
            }
            plVar20 = (longlong *)(local_1b0 + 0x40 + lVar19);
            local_1e0 = lVar5;
            local_1d8 = plVar15;
            SharedPointerInternals::EnableSharedFromThis(&local_1e0,lVar5);
            if (plVar20 != &local_1e0) {
              *plVar20 = lVar5;
              local_1e0 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(plVar20 + 1,&local_1d8);
              plVar15 = local_1d8;
            }
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar20 = plVar15 + 1;
              lVar5 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar15)();
                LOCK();
                piVar11 = (int *)((longlong)plVar15 + 0xc);
                iVar9 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                }
              }
            }
          }
        }
        lVar5 = local_1b0;
        uStack_1cc = 1;
        plVar15 = (longlong *)(param_2 + 0x2b0);
        local_1d0 = 0;
        uVar4 = *(uint *)(param_2 + 0x2d8);
        puStack_1c8 = (uint *)(param_2 + 0x2c0);
        uStack_1bc = 0;
        iStack_1b8 = 0;
        if (uVar4 != 0) {
          puVar18 = *(uint **)(param_2 + 0x2d0);
          if (*(uint **)(param_2 + 0x2d0) == (uint *)0x0) {
            puVar18 = puStack_1c8;
          }
          uVar16 = *puVar18;
          iStack_1b8 = 0;
          local_1d0 = 0;
          while (uVar16 == 0) {
            lVar17 = (longlong)local_1d0;
            iStack_1b8 = iStack_1b8 + 0x20;
            iVar9 = local_1d0 + 1;
            bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1d0;
            local_1d0 = iVar9;
            if (bVar6) goto LAB_14241c225;
            uVar16 = puVar18[lVar17 + 1];
          }
          uStack_1cc = -uVar16 & uVar16;
          local_148 = 0x1f;
          if (uStack_1cc != 0) {
            for (; uStack_1cc >> local_148 == 0; local_148 = local_148 + -1) {
            }
          }
          if (uStack_1cc == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - local_148;
          }
          uStack_1bc = (iStack_1b8 - iVar9) + 0x1f;
          if ((int)uVar4 < (int)uStack_1bc) {
LAB_14241c225:
            uStack_1bc = uVar4;
          }
        }
        local_1c0 = 0xffffffff;
        uStack_154 = *(uint *)(param_2 + 0x2d8);
        uStack_80 = CONCAT44(uStack_1cc,local_1d0);
        uStack_c8 = CONCAT44(uStack_1bc,0xffffffff);
        local_c0 = CONCAT44(uStack_1b4,iStack_1b8);
        local_168 = (int)uStack_154 >> 5;
        local_158 = -1 << ((byte)uStack_154 & 0x1f);
        local_150 = uStack_154 & 0xffffffe0;
        iStack_d8 = local_1d0;
        uStack_d4 = uStack_1cc;
        if (uStack_154 != uVar4) {
          puVar18 = *(uint **)(param_2 + 0x2d0);
          if (*(uint **)(param_2 + 0x2d0) == (uint *)0x0) {
            puVar18 = puStack_1c8;
          }
          uVar16 = puVar18[local_168] & local_158;
          while (uVar16 == 0) {
            lVar17 = (longlong)local_168;
            local_150 = local_150 + 0x20;
            iVar9 = local_168 + 1;
            bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_168;
            local_168 = iVar9;
            if (bVar6) goto LAB_14241c31c;
            uVar16 = puVar18[lVar17 + 1];
            local_158 = 0xffffffff;
          }
          uVar16 = -uVar16 & uVar16;
          local_144 = 0x1f;
          if (uVar16 != 0) {
            for (; uVar16 >> local_144 == 0; local_144 = local_144 + -1) {
            }
          }
          if (uVar16 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - local_144;
          }
          uStack_154 = (local_150 - iVar9) + 0x1f;
          if ((int)uVar4 < (int)uStack_154) {
LAB_14241c31c:
            uStack_154 = uVar4;
          }
        }
        local_130 = (ulonglong)uStack_154;
        local_128 = puStack_1c8;
        local_d0 = puStack_1c8;
        local_88 = plVar15;
        puStack_78 = puStack_1c8;
        uStack_70 = uStack_c8;
        uStack_68 = local_c0;
        local_e0 = plVar15;
        while( true ) {
          plVar20 = local_120;
          if (((uStack_c8._4_4_ == (int)local_130) && (local_d0 == local_128)) &&
             (local_e0 == plVar15)) break;
          lVar17 = *(longlong *)(*local_e0 + (longlong)uStack_c8._4_4_ * 0x10);
          if (lVar17 != 0) {
            plVar20 = (longlong *)operator_new(0x378);
            if (plVar20 == (longlong *)0x0) {
              plVar20 = (longlong *)0x0;
            }
            else {
              *(undefined4 *)(plVar20 + 1) = 1;
              *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
              *plVar20 = (longlong)&PTR_FUN_1450989b8;
              FObjectReplicator::FObjectReplicator(plVar20 + 2);
            }
            local_198 = plVar20 + 2;
            local_190 = plVar20;
            SharedPointerInternals::EnableSharedFromThis(&local_198,local_198,local_198);
            plVar1 = local_190;
            plVar20 = local_198;
            if (local_190 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_190 + 1) = (int)local_190[1] + 1;
              UNLOCK();
              if (local_190 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_190 + 1;
                lVar14 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*local_190)(local_190);
                  LOCK();
                  piVar11 = (int *)((longlong)plVar1 + 0xc);
                  iVar9 = *piVar11;
                  *piVar11 = *piVar11 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar1 + 8))(plVar1,1);
                  }
                }
              }
            }
            if (plVar20 != (longlong *)0x0) {
              uVar12 = FUN_14178ca30(lVar17);
              FUN_1423f1670(plVar20,uVar12,*(undefined8 *)(param_1 + 0x90),0);
              if ((plVar20[0x56] != 0) && ((undefined8 *)plVar20[0x58] != (undefined8 *)0x0)) {
                cVar8 = FUN_14271c3c0(plVar20[0x56],0,lVar5 + 0xa0 + lVar19,
                                      *(undefined8 *)plVar20[0x58],lVar17);
                if (cVar8 != '\0') {
                  lVar14 = plVar20[0x58];
                  plVar20[0x58] = 0;
                  local_170 = (longlong *)operator_new(0x18);
                  if (local_170 != (longlong *)0x0) {
                    *(undefined4 *)(local_170 + 1) = 1;
                    *local_170 = (longlong)&PTR_DestroyObject_145098ae8;
                    *(undefined4 *)((longlong)local_170 + 0xc) = 1;
                    local_170[2] = lVar14;
                  }
                  local_178 = lVar14;
                  SharedPointerInternals::EnableSharedFromThis(&local_178,lVar14,lVar14);
                  local_b8 = UObjectBaseUtility::GetFullName(lVar17,local_98,0);
                  local_b0 = &local_178;
                  FUN_142401390(lVar5 + 0x50 + lVar19,local_140,&local_b8);
                  if (local_98[0] != 0) {
                    FMemory::Free();
                  }
                  plVar20 = local_170;
                  if (local_170 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_170 + 1;
                    lVar17 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar17 == 1) {
                      (**(code **)*local_170)(local_170);
                      LOCK();
                      piVar11 = (int *)((longlong)plVar20 + 0xc);
                      iVar9 = *piVar11;
                      *piVar11 = *piVar11 + -1;
                      UNLOCK();
                      if (iVar9 == 1) {
                        (**(code **)(*plVar20 + 8))(plVar20,1);
                      }
                    }
                  }
                }
              }
            }
            if (plVar1 != (longlong *)0x0) {
              LOCK();
              plVar20 = plVar1 + 1;
              lVar17 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*plVar1)(plVar1);
                LOCK();
                piVar11 = (int *)((longlong)plVar1 + 0xc);
                iVar9 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                }
              }
            }
          }
          uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d8);
        }
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_120 + 1;
          lVar5 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar11 = (int *)((longlong)plVar20 + 0xc);
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
      }
    }
    if (local_f0[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14241c620 FUN_14241c620 body=1933 status=ok
// SIG undefined FUN_14241c620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14241c620(longlong param_1,longlong *param_2,longlong *param_3,char param_4,float *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined1 auStack_968 [32];
  undefined4 local_948;
  undefined8 local_940;
  undefined1 local_938;
  undefined8 local_930;
  undefined1 local_928;
  char local_918;
  char local_917;
  uint local_914;
  float local_910;
  undefined4 local_90c;
  undefined2 *local_908;
  undefined8 local_900;
  undefined4 local_8f8 [2];
  longlong local_8f0;
  undefined2 *local_8e8;
  undefined8 local_8e0;
  longlong *local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined2 *local_8c0;
  int local_8b8;
  undefined2 *local_8b0;
  int local_8a8;
  undefined1 local_8a0 [8];
  undefined1 local_898 [16];
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  uint uStack_87c;
  undefined8 local_878;
  undefined8 uStack_870;
  uint local_868;
  uint uStack_864;
  uint uStack_860;
  uint uStack_85c;
  undefined1 local_858 [2048];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_968;
  local_917 = param_4;
  local_8d8 = param_3;
  if (-1 < (char)param_2[5]) {
    cVar1 = (**(code **)(*param_2 + 0xa0))(param_2);
    if (cVar1 != '\0') {
      return 0;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x1c0))();
    if (iVar2 == 0) {
      if ((*(char *)(param_1 + 0x89c) == '\0') &&
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x78))(), cVar1 == '\0')) {
        return 0;
      }
      uVar12 = 0;
      local_90c = 0;
      if (5 < *(uint *)(param_1 + 0x97c)) {
        plVar5 = (longlong *)param_2[1];
        if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_90c,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_90c,4);
          }
        }
        else {
          local_90c = *(undefined4 *)*plVar5;
          *plVar5 = *plVar5 + 4;
        }
      }
      plVar5 = (longlong *)param_2[1];
      local_910 = 0.0;
      if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_910,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_910,4);
        }
      }
      else {
        local_910 = *(float *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (param_5 != (float *)0x0) {
        *param_5 = local_910;
      }
      if (9 < *(uint *)(param_1 + 0x97c)) {
        FUN_1425ee2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x68),param_2);
      }
      if (((*(char *)(param_1 + 0x89c) != '\0') || (param_4 != '\0')) ||
         (fVar14 = *(float *)(param_1 + 0xadc), fVar14 < local_910)) {
        fVar14 = *(float *)(param_1 + 0xadc);
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\0';
      }
      if (fVar14 <= local_910) {
        fVar14 = local_910;
      }
      local_914 = 0;
      *(float *)(param_1 + 0xadc) = fVar14;
      local_918 = cVar1;
      if (*(char *)(param_1 + 0xae0) == '\0') {
        (**(code **)(*param_2 + 0x68))(param_2,&local_914);
        cVar1 = local_918;
        if (local_914 != 0) {
          do {
            local_908 = (undefined2 *)0x0;
            local_868 = _DAT_146af24c0 & _DAT_146af2530;
            uStack_864 = uRam0000000146af24c4 & uRam0000000146af2534;
            uStack_860 = uRam0000000146af24c8 & uRam0000000146af2538;
            uStack_85c = uRam0000000146af24cc & uRam0000000146af253c;
            local_888 = 0;
            uStack_884 = 0;
            uStack_880 = 0;
            uStack_87c = uRam0000000146af24cc;
            local_900 = 0;
            local_8e8 = (undefined2 *)0x0;
            local_8e0 = 0;
            local_878 = 0;
            uStack_870 = 0;
            FUN_14158ce90(param_2,&local_908);
            FUN_14158ce90(param_2,&local_8e8);
            FUN_14217f6d0(param_2,&local_888);
            lVar3 = *(longlong *)(param_1 + 0xd0);
            plVar6 = *(longlong **)(lVar3 + 0x88);
            plVar5 = plVar6 + *(int *)(lVar3 + 0x90);
            if (plVar6 != plVar5) {
              do {
                lVar3 = *plVar6;
                ULevelStreaming::GetWorldAssetPackageName(lVar3,&local_8b0);
                FName::ToString(lVar3 + 0x50,&local_8c0);
                puVar10 = &DAT_143f3eda8;
                if ((int)local_900 != 0) {
                  puVar10 = local_908;
                }
                puVar9 = &DAT_143f3eda8;
                if (local_8a8 != 0) {
                  puVar9 = local_8b0;
                }
                iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
                if (iVar2 == 0) {
                  puVar10 = &DAT_143f3eda8;
                  if ((int)local_8e0 != 0) {
                    puVar10 = local_8e8;
                  }
                  puVar9 = &DAT_143f3eda8;
                  if (local_8b8 != 0) {
                    puVar9 = local_8c0;
                  }
                  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
                  if (iVar2 == 0) {
                    if (local_8c0 != (undefined2 *)0x0) {
                      FMemory::Free();
                    }
                    if (local_8b0 != (undefined2 *)0x0) {
                      FMemory::Free();
                    }
                    if (local_8e8 != (undefined2 *)0x0) {
                      FMemory::Free();
                    }
                    if (local_908 != (undefined2 *)0x0) {
                      FMemory::Free();
                    }
                    goto LAB_14241cbaa;
                  }
                }
                if (local_8c0 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                if (local_8b0 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                plVar6 = plVar6 + 1;
              } while (plVar6 != plVar5);
              lVar3 = *(longlong *)(param_1 + 0xd0);
            }
            local_8d0 = 0;
            local_8c8 = 0;
            FUN_1417846f0(lVar3,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            uVar4 = ULevelStreamingDynamic::GetPrivateStaticClass();
            local_928 = 0;
            local_930 = 0;
            local_938 = 0;
            local_940 = 0;
            local_948 = 0;
            plVar5 = (longlong *)FUN_1417985e0(uVar4,lVar3,0,0);
            (**(code **)(*plVar5 + 0x278))(plVar5,1);
            ULevelStreaming::SetShouldBeVisible(plVar5,1);
            *(byte *)((longlong)plVar5 + 0xb6) = *(byte *)((longlong)plVar5 + 0xb6) & 0xbf;
            *(uint *)(plVar5 + 0x28) = *(uint *)(plVar5 + 0x28) | 3;
            plVar5[0x10] = CONCAT44(uStack_884,local_888);
            plVar5[0x11] = CONCAT44(uStack_87c,uStack_880);
            *(undefined4 *)(plVar5 + 0x12) = (undefined4)local_878;
            *(undefined4 *)((longlong)plVar5 + 0x94) = local_878._4_4_;
            *(undefined4 *)(plVar5 + 0x13) = (undefined4)uStack_870;
            *(undefined4 *)((longlong)plVar5 + 0x9c) = uStack_870._4_4_;
            *(uint *)(plVar5 + 0x14) = local_868;
            *(uint *)((longlong)plVar5 + 0xa4) = uStack_864;
            *(uint *)(plVar5 + 0x15) = uStack_860;
            *(uint *)((longlong)plVar5 + 0xac) = uStack_85c;
            puVar10 = &DAT_143f3eda8;
            if ((int)local_8e0 != 0) {
              puVar10 = local_8e8;
            }
            plVar6 = (longlong *)FName::FName(local_8a0,puVar10,1);
            plVar5[10] = *plVar6;
            puVar10 = &DAT_143f3eda8;
            if ((int)local_900 != 0) {
              puVar10 = local_908;
            }
            puVar7 = (undefined8 *)FName::FName(local_898,puVar10,1);
            ULevelStreaming::SetWorldAssetByPackageName(plVar5,*puVar7);
            UWorld::AddStreamingLevel(*(undefined8 *)(param_1 + 0xd0),plVar5);
            if (local_8e8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_908 != (undefined2 *)0x0) {
              FMemory::Free();
            }
LAB_14241cbaa:
            uVar12 = uVar12 + 1;
            param_3 = local_8d8;
            param_4 = local_917;
            cVar1 = local_918;
          } while (uVar12 < local_914);
        }
      }
      else {
        (**(code **)(*param_2 + 0x68))();
        if ((cVar1 != '\0') && (param_4 == '\0')) {
          uVar12 = 1;
        }
        uVar13 = 0;
        local_908 = (undefined2 *)0x0;
        local_900 = 0;
        param_4 = local_917;
        if (local_914 != 0) {
          do {
            FUN_14158ce90(param_2,&local_908);
            if ((char)uVar12 != '\0') {
              lVar3 = FUN_14240d2f0(param_1,&local_908);
              iVar2 = *(int *)(param_1 + 0xad0);
              *(int *)(param_1 + 0xad0) = iVar2 + 1;
              if (*(int *)(param_1 + 0xad4) < iVar2 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xac8,iVar2);
              }
              *(undefined4 *)(*(longlong *)(param_1 + 0xac8) + (longlong)iVar2 * 4) =
                   *(undefined4 *)(lVar3 + 0x10);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < local_914);
          param_3 = local_8d8;
          param_4 = local_917;
          cVar1 = local_918;
          if (local_908 != (undefined2 *)0x0) {
            FMemory::Free();
            param_3 = local_8d8;
            param_4 = local_917;
            cVar1 = local_918;
          }
        }
      }
      if (-1 < (char)param_2[5]) {
        local_8f0 = 0;
        if (*(char *)(param_1 + 0xae0) != '\0') {
          plVar5 = (longlong *)param_2[1];
          if ((longlong *)plVar5[1] < (longlong *)*plVar5 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_8f0,8);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_8f0,8);
            }
          }
          else {
            local_8f0 = *(longlong *)*plVar5;
            *plVar5 = *plVar5 + 8;
          }
        }
        if (param_4 == '\0') {
          FUN_142418cc0(param_1,param_2,local_910);
        }
        else {
          lVar3 = *param_2;
          lVar8 = (**(code **)(lVar3 + 0x90))(param_2);
          (**(code **)(lVar3 + 0xa8))(param_2,lVar8 + local_8f0);
        }
        local_8f8[0] = 0;
        while( true ) {
          if (*(char *)(param_1 + 0xae0) != '\0') {
            (**(code **)(*param_2 + 0x68))(param_2,local_8f8);
          }
          plVar5 = (longlong *)param_2[1];
          local_914 = 0;
          if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_914,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_914,4);
            }
          }
          else {
            local_914 = *(uint *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          if ((char)param_2[5] < '\0') break;
          if (local_914 == 0) {
            return 1;
          }
          if ((0x800 < (int)local_914) ||
             ((**(code **)(*param_2 + 0x50))(param_2,local_858,(longlong)(int)local_914),
             (char)param_2[5] < '\0')) break;
          if (local_914 == 0) {
            return 1;
          }
          if (cVar1 != '\0') {
            iVar2 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(param_3,iVar2);
            }
            puVar11 = (undefined8 *)((longlong)iVar2 * 0x20 + *param_3);
            puVar7 = (undefined8 *)0x0;
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar7 = puVar11;
            }
            iVar2 = *(int *)(puVar7 + 1);
            *(uint *)(puVar7 + 1) = local_914 + iVar2;
            if (*(int *)((longlong)puVar7 + 0xc) < (int)(local_914 + iVar2)) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar7);
            }
            *(float *)(puVar7 + 2) = local_910;
            *(undefined4 *)((longlong)puVar7 + 0x14) = local_90c;
            *(undefined4 *)(puVar7 + 3) = local_8f8[0];
            _guard_xfg_dispatch_icall_nop((void *)*puVar7,local_858,(longlong)(int)local_914);
          }
        }
      }
    }
  }
  FUN_142419e60(param_1,0);
  return 0;
}



// FUNCTION 14241cdb0 FUN_14241cdb0 body=181 status=ok
// SIG undefined FUN_14241cdb0(void)

undefined1 FUN_14241cdb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(*param_2 + 0x90))(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
  cVar2 = FUN_14241c620(*(undefined8 *)(param_1 + 0x10),param_2,param_1,1,(float *)(param_1 + 0x20))
  ;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 0;
  }
  if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x20)) {
    (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 0x28));
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != 0) {
      FUN_14241dcf0(param_1,iVar1,*(int *)(param_1 + 8) - iVar1,1);
    }
    return 0;
  }
  return 1;
}



// FUNCTION 14241ce70 FUN_14241ce70 body=793 status=ok
// SIG undefined FUN_14241ce70(void)

undefined8 FUN_14241ce70(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60 [2];
  undefined4 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_88 = 0x2cf5a13d;
  local_84 = 0xb;
  plVar1 = *(longlong **)(param_1[0x1a] + 400);
  local_80 = FUN_1416727f0(1);
  local_7c = FUN_1416722f0();
  local_78 = FUN_141672630();
  uVar4 = FEngineVersion::Current();
  local_74 = FEngineVersionBase::GetChangelist(uVar4);
  puVar5 = (undefined8 *)FEngineVersion::Current();
  local_68 = *(undefined4 *)(puVar5 + 1);
  local_70 = *puVar5;
  FString::FString(local_60,puVar5 + 2);
  local_50 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FNetworkDemoHeader::operator=(param_1 + 0x12f,&local_88);
  plVar2 = local_38;
  plVar7 = local_38;
  for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  plVar2 = local_48;
  plVar7 = local_48;
  for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 3;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  lVar6 = (**(code **)(*(longlong *)param_1[0xad] + 0x28))();
  if (lVar6 == 0) {
    if ((int)param_1[0x125] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)param_1[0x124];
    }
    FString::PrintfImpl(&local_98,L"Couldn\'t open demo file %s for reading",puVar9);
    if (param_2 == &local_98) {
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = local_98;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_90;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_90._4_4_;
    }
    local_90 = 0xd;
    local_98 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"DemoNotFound",0x1a);
    (**(code **)(*plVar1 + 0x2c8))(plVar1,1,&local_98);
    if (local_98 != 0) {
      FMemory::Free();
    }
    uVar4 = 0;
  }
  else {
    FUN_142406100(lVar6,param_1 + 0x12f);
    if (*(char *)(lVar6 + 0x28) < '\0') {
      local_90 = 0x15;
      local_98 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      lVar6 = local_98;
      FGenericPlatformString::Memcpy(local_98,L"Demo file is corrupt",0x2a);
      if (param_2 == &local_98) {
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      else {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = lVar6;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_90;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_90._4_4_;
      }
      (**(code **)(*plVar1 + 0x2c8))(plVar1,2,param_2);
      uVar4 = 0;
    }
    else {
      *(byte *)(param_1 + 0x15c) = (byte)(*(uint *)(param_1 + 0x136) >> 1) & 1;
      *(undefined4 *)(param_1[0x12] + 0x15e8) = *(undefined4 *)((longlong)param_1 + 0x984);
      *(int *)(param_1[0x12] + 0x15ec) = (int)param_1[0x131];
      cVar3 = (**(code **)(*param_1 + 0x420))(param_1,param_1 + 0x139,param_2);
      if (cVar3 == '\0') {
        (**(code **)(*plVar1 + 0x2c8))(plVar1,0,param_2);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



// FUNCTION 14241d190 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
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
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14241d2cf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
      if (iVar3 < iStack_44) {
LAB_14241d2cf:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)((longlong)iStack_1c * 0x40 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0xf] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[0xe] = *(uint *)((longlong)plVar7 +
                                ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14241d3a0 Rehash body=522 status=ok
// SIG undefined Rehash(void)

void TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14241d4df;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar3 < iStack_44) {
LAB_14241d4df:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)((longlong)iStack_1c * 0x10 + *param_1);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[3] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[2] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14241d5b0 FUN_14241d5b0 body=475 status=ok
// SIG undefined FUN_14241d5b0(void)

void FUN_14241d5b0(longlong param_1)

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
  longlong local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    plVar9 = (longlong *)0x0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      local_res8 = param_1;
      FUN_14240a6f0(&local_res8,2,local_res18);
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
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_145096208;
    *(undefined1 *)(plVar9 + 3) = 0;
    plVar9[4] = 0;
    plVar9[2] = param_1;
    lVar7 = plVar9[4];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res10 = lVar7;
    FUN_140445100(plVar9,0,0xff,1,0);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
  }
  return;
}



// FUNCTION 14241d790 FUN_14241d790 body=142 status=ok
// SIG undefined FUN_14241d790(void)

undefined8 * FUN_14241d790(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x328
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::RemoteAddressToString");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x328
             ,L"Pure virtual not implemented (%s)",L"UNetConnection::RemoteAddressToString");
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Error",0xc);
  return param_2;
}



// FUNCTION 14241d820 Remove body=328 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar9 + ((longlong)*param_2 & uVar10) * 4);
  if (iVar8 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar8 * 0x40;
      if (*(int *)(lVar6 + lVar3) == *param_2) {
        lVar6 = (longlong)iVar8 * 0x40;
        uVar10 = (longlong)*(int *)(lVar6 + 0x3c + lVar3) & uVar10;
        piVar7 = (int *)((longlong)plVar9 + uVar10 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x00014241d8ba;
      }
      iVar8 = *(int *)(lVar6 + 0x38 + lVar3);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x00014241d8ba:
  if (iVar2 == -1) {
LAB_14241d8df:
    bVar4 = (byte)iVar8 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar8;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar6) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar8;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar8) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x38);
    goto LAB_14241d8df;
  }
  piVar7 = (int *)(lVar3 + 0x38 + (longlong)iVar2 * 0x40);
  iVar2 = *piVar7;
  goto joined_r0x00014241d8ba;
}



// FUNCTION 14241d970 Remove body=202 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0xb8;
    lVar3 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0xb4 + lVar2));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar4 = (int *)((longlong)plVar5 + lVar3 * 4);
    iVar1 = *(int *)((longlong)plVar5 + lVar3 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar4 = *(int *)(lVar6 + 0xb0 + lVar2);
        break;
      }
      piVar4 = (int *)(lVar2 + 0xb0 + (longlong)iVar1 * 0xb8);
      iVar1 = *piVar4;
    }
  }
  plVar5 = (longlong *)((longlong)param_2 * 0xb8 + *param_1);
  FUN_142405280(plVar5 + 2);
  if (*plVar5 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 14241da40 Remove body=438 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar9 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  piVar12 = (int *)((longlong)plVar8 + lVar9 * 4);
  iVar2 = *(int *)((longlong)plVar8 + lVar9 * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar11 = (undefined4 *)((longlong)iVar2 * 0x10 + *param_1);
    local_res1c = puVar11[1];
    local_res18 = *puVar11;
    cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar6 != '\0') break;
    iVar2 = puVar11[2];
    piVar12 = puVar11 + 2;
  }
  iVar2 = *piVar12;
  lVar9 = (longlong)iVar2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar10 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar4 + 0xc + lVar9 * 0x10));
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    piVar12 = (int *)((longlong)plVar8 + lVar10 * 4);
    iVar3 = *(int *)((longlong)plVar8 + lVar10 * 4);
    while (iVar3 != -1) {
      if (iVar3 == iVar2) {
        *piVar12 = *(int *)(lVar4 + 8 + lVar9 * 0x10);
        break;
      }
      piVar12 = (int *)(lVar4 + 8 + (longlong)iVar3 * 0x10);
      iVar3 = *piVar12;
    }
  }
  bVar5 = (byte)iVar2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar2;
  }
  uVar7 = 0xffffffff;
  puVar11 = (undefined4 *)(lVar9 * 0x10 + *param_1);
  *puVar11 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar11[1] = uVar7;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar2;
  plVar8 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
  return 1;
}



// FUNCTION 14241dc00 Remove body=227 status=ok
// SIG undefined Remove(void)

undefined8
TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
          (longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)*param_2 & uVar7) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(int *)(lVar5 + lVar8 * 0xc) == *param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 8 + lVar8 * 0xc) & uVar7;
        puVar1 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x00014241dc92;
      }
      iVar3 = *(int *)(lVar5 + 4 + lVar8 * 0xc);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x00014241dc92:
  if (iVar4 == -1) {
LAB_14241dcba:
    TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar1 = *(undefined4 *)(lVar5 + lVar8 * 0xc + 4);
    goto LAB_14241dcba;
  }
  lVar2 = (longlong)iVar4 * 3 + 1;
  iVar4 = *(int *)(lVar5 + lVar2 * 4);
  puVar1 = (undefined4 *)(lVar5 + lVar2 * 4);
  goto joined_r0x00014241dc92;
}



// FUNCTION 14241dcf0 FUN_14241dcf0 body=184 status=ok
// SIG undefined FUN_14241dcf0(void)

void FUN_14241dcf0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x20);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + *param_1),(longlong)iVar1 << 5);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14241ddb0 FUN_14241ddb0 body=592 status=ok
// SIG undefined FUN_14241ddb0(void)

void FUN_14241ddb0(longlong param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  wchar_t *_Str;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  LARGE_INTEGER local_res8;
  longlong local_28 [4];
  
  *(undefined1 *)(param_1 + 0xb61) = 0;
  iVar3 = *(int *)(param_2 + 8);
  *(bool *)(param_1 + 0x89b) = iVar3 == 0;
  if (iVar3 == 0) {
    if (*(char *)(param_2 + 0x10) == '\0') {
      uVar7 = 0;
      local_28[0] = 0;
      local_28[1] = 0;
      QueryPerformanceCounter(&local_res8);
      dVar1 = (double)local_res8.QuadPart * DAT_1468b02f8;
      cVar2 = FUN_1424133e0(param_1,local_28);
      if (cVar2 != '\0') {
        *(bool *)(param_1 + 0x89b) = *(int *)(param_2 + 8) == 0;
        _Str = (wchar_t *)FURL::GetOption(param_1 + 0x8f8,L"SkipToLevelIndex=",0);
        if (_Str != (wchar_t *)0x0) {
          iVar3 = _wtoi(_Str);
          if (iVar3 < *(int *)(param_1 + 0xa08)) {
            lVar6 = operator_new(0x38);
            if (lVar6 != 0) {
              uVar7 = FGotoTimeInSecondsTask::FGotoTimeInSecondsTask
                                (lVar6,param_1,
                                 (float)*(uint *)(*(longlong *)(param_1 + 0xa00) + 0x10 +
                                                 (longlong)iVar3 * 0x18) * 0.001);
            }
            FUN_142408160(param_1,uVar7);
          }
        }
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x158))();
        if ((cVar2 != '\0') &&
           (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x70))(), 15000 < uVar4)) {
          QueryPerformanceCounter(&local_res8);
          if (10.0 <= (double)local_res8.QuadPart * DAT_1468b02f8 - dVar1) {
            puVar8 = (undefined8 *)operator_new(0x30);
            if (puVar8 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)0x0;
            }
            else {
              puVar8[1] = 0;
              puVar8[2] = 0;
              *puVar8 = &PTR_FUN_145094ff8;
              FWeakObjectPtr::operator=(puVar8 + 3,param_1);
              *puVar8 = &PTR_FUN_145095708;
              cVar2 = FWeakObjectPtr::IsValid(puVar8 + 3);
              if (cVar2 != '\0') {
                lVar6 = FWeakObjectPtr::Get(puVar8 + 3);
                uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x568) + 0x70))();
                *(undefined4 *)(puVar8 + 4) = uVar5;
                QueryPerformanceCounter(&local_res8);
                puVar8[5] = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
              }
            }
            FUN_142408160(param_1,puVar8);
          }
          else {
            FUN_142416fb0(param_1);
          }
        }
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_142419e60(param_1,1);
    return;
  }
  FUN_142423360();
  return;
}



// FUNCTION 14241e000 FUN_14241e000 body=977 status=ok
// SIG undefined FUN_14241e000(void)

longlong FUN_14241e000(longlong param_1,longlong param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  BOOL BVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 extraout_var;
  uint7 uVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  longlong local_98;
  longlong *local_90;
  
  plVar2 = *(longlong **)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x18);
  QueryPerformanceCounter(&local_a0);
  if (plVar2 == (longlong *)0x0) {
    if ((lVar3 != 0) &&
       (lVar7 = FUN_1425b9f20(**(undefined8 **)(param_1 + 0x98),2,1,0xffffffff), lVar7 != 0)) {
      FUN_1423fd050(lVar7,lVar3);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                (**(longlong **)(param_1 + 0x98) + 0x1658,lVar3 + 0x1c);
    }
  }
  else if (lVar3 == 0) {
    lVar3 = *plVar2;
    fVar11 = *(float *)(lVar3 + 0x140);
    fVar14 = *(float *)(param_3 + 4);
    if ((*(float *)(param_3 + 4) <= fVar11) &&
       (fVar14 = *(float *)(param_3 + 8), fVar11 <= *(float *)(param_3 + 8))) {
      fVar14 = fVar11;
    }
    dVar12 = (double)plVar2[3];
    dVar13 = 1.0 / (double)fVar14;
    if (dVar12 == 0.0) {
      dVar12 = (double)*(float *)(param_1 + 0x548);
      plVar2[3] = (longlong)dVar12;
      *(float *)(plVar2 + 4) = (float)dVar13;
    }
    fVar11 = *(float *)(lVar3 + 0x144);
    fVar14 = (float)((double)*(float *)(param_1 + 0x548) - dVar12);
    if (fVar11 == 0.0) {
      *(undefined4 *)(lVar3 + 0x144) = 0x40000000;
      fVar11 = 2.0;
    }
    fVar15 = (float)dVar13;
    fVar16 = 1.0 / fVar11;
    if (1.0 / fVar11 <= fVar15) {
      fVar16 = fVar15;
    }
    if (2.0 < fVar14) {
      fVar11 = (fVar14 - 2.0) * 0.2;
      if (0.0 <= fVar11) {
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
      }
      else {
        fVar11 = 0.0;
      }
      *(float *)(plVar2 + 4) = (fVar16 - fVar15) * fVar11 + fVar15;
    }
    dVar12 = dVar13;
    if (*param_3 != '\0') {
      dVar12 = (double)*(float *)(plVar2 + 4);
    }
    dVar10 = (double)*(float *)(param_1 + 0x548) - (double)plVar2[2];
    dVar4 = 0.0;
    if ((0.0 <= dVar10) && (dVar4 = dVar10, dVar13 <= dVar10)) {
      dVar4 = dVar13;
    }
    fVar11 = (float)FGenericPlatformMath::SRand();
    plVar2[2] = (longlong)
                ((((double)*(float *)(param_1 + 0x548) + dVar12) - dVar4) +
                (double)*(float *)(param_3 + 0xc) * ((double)fVar11 - 0.5));
    FUN_142224a10(lVar3,param_1);
    cVar5 = FUN_14240a400(param_1,lVar3,**(undefined8 **)(param_1 + 0x98),0);
    FUN_1425bd720(param_1,&local_98,lVar3);
    FWeakObjectPtr::operator=(local_res10,lVar3);
    local_res20 = local_res10[0];
    piVar8 = (int *)TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                    ::FindId(*(longlong *)(param_1 + 0xe0) + 0x50,local_res8,&local_res20);
    if (*piVar8 == -1) {
      *(undefined4 *)(local_98 + 0x28) = 0;
      if (*(int *)(local_98 + 0x2c) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(local_98 + 0x20,0);
      }
      *(undefined4 *)(local_98 + 0x30) = 0;
    }
    if ((cVar5 != '\0') || (0 < *(int *)(local_98 + 0x28))) {
      fVar14 = fVar14 * 0.7;
      if ((fVar15 <= fVar14) && (fVar15 = fVar14, fVar16 <= fVar14)) {
        fVar15 = fVar16;
      }
      *(float *)(plVar2 + 4) = fVar15;
      plVar2[3] = (longlong)(double)*(float *)(param_1 + 0x548);
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar8 = (int *)((longlong)local_90 + 0xc);
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  BVar6 = QueryPerformanceCounter(&local_a8);
  uVar9 = (uint7)(CONCAT44(extraout_var,BVar6) >> 8);
  if ((0.0 < *(float *)(param_1 + 0x9d8)) &&
     ((double)*(float *)(param_1 + 0x9d8) <
      (((double)local_a8.QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(param_3 + 0x10)) *
      1000.0)) {
    return (ulonglong)uVar9 << 8;
  }
  return CONCAT71(uVar9,1);
}



// FUNCTION 14241e3e0 FUN_14241e3e0 body=198 status=ok
// SIG undefined FUN_14241e3e0(void)

void FUN_14241e3e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0xad8) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  *(undefined4 *)(param_1 + 0x899) = 0;
  *(undefined2 *)(param_1 + 0xb60) = 0;
  TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x798,0);
  plVar1 = *(longlong **)(param_1 + 0x7e8);
  for (iVar2 = *(int *)(param_1 + 0x7f0); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 4;
  }
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  if (*(int *)(param_1 + 0x7f4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x7e8,0);
  }
  FUN_142409300(param_1);
  return;
}



// FUNCTION 14241e4b0 FUN_14241e4b0 body=801 status=ok
// SIG undefined FUN_14241e4b0(void)

void FUN_14241e4b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong *local_res20;
  ulonglong local_98;
  undefined8 local_90;
  ulonglong local_88 [2];
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  void **local_58;
  undefined8 *local_50;
  
  FUN_142409300();
  lVar6 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x30));
  local_res10 = *(undefined8 *)(lVar6 + 0x18);
  FName::ToString(&local_res10,&local_78);
  FUN_1428d4fe0(local_88,&local_78);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar6 = FUN_14240d2f0(param_1,local_88);
  *(undefined1 *)(lVar6 + 0x14) = 1;
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  local_98 = 0;
  plVar14 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x88);
  uVar7 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0xd0) + 0x90);
  uVar13 = uVar7 & 0x1fffffffffffffff;
  if (plVar14 + uVar7 < plVar14) {
    uVar13 = 0;
  }
  local_88[0] = uVar13;
  if (uVar13 != 0) {
    do {
      lVar6 = *plVar14;
      if ((lVar6 != 0) &&
         (local_res20 = plVar14, cVar3 = ULevelStreaming::IsLevelVisible(lVar6), cVar3 != '\0')) {
        lVar6 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(lVar6 + 0x120));
        local_90 = *(undefined8 *)(lVar6 + 0x18);
        FName::ToString(&local_90,local_68);
        FUN_1428d4fe0(&local_78,local_68);
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        plVar1 = (longlong *)(param_1 + 0xa78);
        if (*(int *)(param_1 + 0xa80) != *(int *)(param_1 + 0xaac)) {
          puVar9 = &DAT_143f3eda8;
          if (local_70 != 0) {
            puVar9 = local_78;
          }
          iVar4 = FUN_140438070(puVar9);
          lVar6 = *(longlong *)(param_1 + 0xab8);
          if (*(longlong *)(param_1 + 0xab8) == 0) {
            lVar6 = param_1 + 0xab0;
          }
          iVar4 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0xac0) - 1U & (longlong)iVar4) * 4)
          ;
          if (iVar4 != -1) {
            lVar6 = *plVar1;
            do {
              lVar11 = (longlong)iVar4 * 0x20;
              puVar9 = &DAT_143f3eda8;
              if (local_70 != 0) {
                puVar9 = local_78;
              }
              if (*(int *)(lVar11 + 8 + lVar6) == 0) {
                puVar10 = &DAT_143f3eda8;
              }
              else {
                puVar10 = *(undefined2 **)(lVar11 + lVar6);
              }
              iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar9);
              if (iVar5 == 0) {
                if (iVar4 != -1) {
                  lVar11 = *plVar1 + lVar11;
                  goto LAB_14241e686;
                }
                break;
              }
              lVar6 = *plVar1;
              iVar4 = *(int *)(lVar11 + 0x18 + lVar6);
            } while (iVar4 != -1);
          }
        }
        lVar11 = 0;
LAB_14241e686:
        plVar2 = (longlong *)(param_1 + 0xa68);
        piVar8 = (int *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          piVar8 = (int *)0x0;
        }
        if (piVar8 == (int *)0x0) {
          iVar4 = *(int *)(param_1 + 0xa70);
          *(int *)(param_1 + 0xa70) = iVar4 + 1;
          if (*(int *)(param_1 + 0xa74) < iVar4 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar2,iVar4);
          }
          puVar9 = local_78;
          puVar12 = (undefined8 *)(*plVar2 + (longlong)iVar4 * 0x18);
          *puVar12 = 0;
          lVar6 = (longlong)local_70;
          *(int *)(puVar12 + 1) = local_70;
          if (local_70 == 0) {
            *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar12,local_70,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar12,puVar9,lVar6 * 2);
          }
          *(undefined4 *)(puVar12 + 2) = 0xffffffff;
          *(undefined2 *)((longlong)puVar12 + 0x14) = 0;
          local_res10 = CONCAT44(local_res10._4_4_,iVar4);
          *(int *)(*plVar2 + 0x10 + (longlong)iVar4 * 0x18) = iVar4;
          local_58 = &local_78;
          local_50 = &local_res10;
          FUN_1406c2bb0(plVar1,local_res18,&local_58,0);
          *(int *)(param_1 + 0xb48) = *(int *)(param_1 + 0xb48) + 1;
          uVar13 = local_88[0];
          plVar14 = local_res20;
          iVar4 = (int)local_res10;
        }
        else {
          iVar4 = *piVar8;
        }
        lVar6 = *plVar2;
        *(undefined1 *)(lVar6 + 0x14 + (longlong)iVar4 * 0x18) = 1;
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free(local_78,lVar6 + (longlong)iVar4 * 0x18);
        }
      }
      plVar14 = plVar14 + 1;
      local_98 = local_98 + 1;
    } while (local_98 != uVar13);
  }
  return;
}



// FUNCTION 14241e7e0 ResizeShrink body=156 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x2c) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x2c,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x2e8ba2e8ba2e8ba3) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x2c);
      }
      goto LAB_14241e84e;
    }
    if (iVar4 == 0) goto LAB_14241e84e;
  }
  iVar4 = iVar5;
LAB_14241e84e:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x2c,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14241e880 FUN_14241e880 body=2414 status=ok
// SIG undefined FUN_14241e880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14241e880(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong *puVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  undefined1 auStack_288 [32];
  ulonglong local_268;
  undefined4 local_260;
  undefined4 local_258;
  uint *local_248;
  int local_240 [2];
  int local_238;
  uint uStack_234;
  uint *puStack_230;
  undefined4 local_228;
  int iStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  int local_218;
  uint uStack_214;
  uint *puStack_210;
  undefined4 local_208;
  undefined8 uStack_204;
  undefined4 uStack_1fc;
  longlong local_1f8;
  undefined2 *local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  uint *puStack_1a8;
  undefined1 auStack_1a0 [16];
  longlong local_190;
  longlong *local_188;
  longlong *local_178;
  int iStack_170;
  uint uStack_16c;
  uint *local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  longlong *local_148;
  char local_140;
  char cStack_13f;
  int local_138;
  undefined1 local_134 [4];
  int local_130;
  int local_12c;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined1 local_b8;
  ushort local_b6;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_1b8 = (longlong *)(param_1 + 0x5f8);
  iVar5 = *(int *)(param_1 + 0x620);
  puStack_230 = (uint *)(param_1 + 0x608);
  local_238 = 0;
  uStack_234 = 1;
  iStack_224 = 0;
  iStack_220 = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)(param_1 + 0x618);
    if (*(uint **)(param_1 + 0x618) == (uint *)0x0) {
      puVar20 = puStack_230;
    }
    uVar1 = *puVar20;
    iStack_220 = 0;
    local_238 = 0;
    while (uVar1 == 0) {
      lVar14 = (longlong)local_238;
      iStack_220 = iStack_220 + 0x20;
      iVar23 = local_238 + 1;
      bVar2 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_238;
      local_238 = iVar23;
      if (bVar2) goto LAB_14241e975;
      uVar1 = puVar20[lVar14 + 1];
    }
    uStack_234 = -uVar1 & uVar1;
    local_138 = 0x1f;
    if (uStack_234 != 0) {
      for (; uStack_234 >> local_138 == 0; local_138 = local_138 + -1) {
      }
    }
    if (uStack_234 == 0) {
      iVar23 = 0x20;
    }
    else {
      iVar23 = 0x1f - local_138;
    }
    iStack_224 = (iStack_220 - iVar23) + 0x1f;
    if (iVar5 < iStack_224) {
LAB_14241e975:
      iStack_224 = iVar5;
    }
  }
  local_228 = 0xffffffff;
  uStack_160 = CONCAT44(iStack_224,0xffffffff);
  auStack_1a0._8_4_ = iStack_220;
  auStack_1a0._0_8_ = uStack_160;
  auStack_1a0._12_4_ = uStack_21c;
  uStack_1b0 = CONCAT44(uStack_234,local_238);
  local_140 = '\0';
  cStack_13f = '\0';
  local_58._8_4_ = SUB84(local_1b8,0);
  local_58._12_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
  iStack_170 = local_238;
  uStack_16c = uStack_234;
  local_58._0_8_ = auStack_1a0._8_8_;
  local_158._8_4_ = local_58._8_4_;
  local_158._0_8_ = auStack_1a0._8_8_;
  local_158._12_4_ = local_58._12_4_;
  local_1f8 = param_3;
  puStack_1a8 = puStack_230;
  local_168 = puStack_230;
  local_148 = local_1b8;
  local_110 = param_2;
  plVar3 = local_1b8;
  if (iStack_224 < *(int *)(param_1 + 0x620)) {
    do {
      lVar14 = (longlong)uStack_160._4_4_ * 0xb8;
      local_178 = plVar3;
      piVar6 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                (param_1 + 0x5a8,local_134,*plVar3 + lVar14);
      if ((*piVar6 == -1) &&
         ((lVar16 = *plVar3, local_118 = lVar16, param_3 == 0 ||
          (*(longlong *)(lVar16 + 0x38 + lVar14) == param_3)))) {
        lVar7 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(lVar16 + 0x38 + lVar14));
        local_128 = *(undefined8 *)(lVar7 + 0x18);
        FName::ToString(&local_128,local_f0);
        FUN_1428d4fe0(&local_1f0,local_f0);
        if (local_f0[0] != 0) {
          FMemory::Free();
        }
        if (*(int *)(param_1 + 0xa80) != *(int *)(param_1 + 0xaac)) {
          puVar15 = &DAT_143f3eda8;
          if (local_1e8 != 0) {
            puVar15 = local_1f0;
          }
          iVar5 = FUN_140438070(puVar15);
          lVar7 = *(longlong *)(param_1 + 0xab8);
          if (*(longlong *)(param_1 + 0xab8) == 0) {
            lVar7 = param_1 + 0xab0;
          }
          iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0xac0) - 1U & (longlong)iVar5) * 4)
          ;
          if (iVar5 != -1) {
            lVar7 = *(longlong *)(param_1 + 0xa78);
            do {
              lVar21 = (longlong)iVar5 * 0x20;
              puVar15 = &DAT_143f3eda8;
              if (local_1e8 != 0) {
                puVar15 = local_1f0;
              }
              if (*(int *)(lVar21 + 8 + lVar7) == 0) {
                puVar13 = &DAT_143f3eda8;
              }
              else {
                puVar13 = *(undefined2 **)(lVar21 + lVar7);
              }
              iVar23 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar15);
              if (iVar23 == 0) goto LAB_14241eb49;
              lVar7 = *(longlong *)(param_1 + 0xa78);
              iVar5 = *(int *)(lVar7 + 0x18 + lVar21);
            } while (iVar5 != -1);
          }
        }
        iVar5 = -1;
LAB_14241eb49:
        if (local_1f0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        param_3 = local_1f8;
        if (iVar5 != -1) {
          uVar10 = *(undefined8 *)(lVar16 + 0x10 + lVar14);
          uVar12 = *(undefined8 *)(lVar16 + 0x38 + lVar14);
          uVar8 = FUN_1428dfc70();
          local_258 = 0;
          local_260 = 0;
          local_268 = local_268 & 0xffffffffffffff00;
          plVar9 = (longlong *)FUN_141799680(uVar8,uVar12,uVar10,0);
          if (plVar9 != (longlong *)0x0) {
            lVar7 = *plVar9;
            uVar10 = GetTransientPackage();
            (**(code **)(lVar7 + 0x138))(plVar9,0,uVar10,0x11);
          }
          FActorSpawnParameters::FActorSpawnParameters(&local_e0);
          local_d8 = *(undefined8 *)(lVar16 + 0x18 + lVar14);
          local_b6 = local_b6 | 6;
          local_b8 = 1;
          local_e0 = *(undefined8 *)(lVar16 + 0x10 + lVar14);
          local_c0 = *(undefined8 *)(lVar16 + 0x38 + lVar14);
          FRotator::Quaternion(lVar14 + 0x2c + lVar16,&local_a8);
          local_78 = local_a8;
          uStack_70 = uStack_a0;
          local_68._4_4_ = *(undefined4 *)(lVar16 + 0x24 + lVar14);
          local_68._0_4_ = *(undefined4 *)(lVar16 + 0x20 + lVar14);
          local_68._8_4_ = *(undefined4 *)(lVar16 + 0x28 + lVar14);
          local_68._12_4_ = 0;
          local_58._4_4_ = DAT_1464aa788._4_4_;
          local_58._0_4_ = (undefined4)DAT_1464aa788;
          local_58._8_4_ = DAT_1464aa790;
          local_58._12_4_ = 0;
          plVar9 = (longlong *)
                   FUN_1425518b0(*(undefined8 *)(param_1 + 0xd0),
                                 *(undefined8 *)(*(longlong *)(lVar16 + 0x18 + lVar14) + 0x10),
                                 &local_78);
          local_108 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            lVar7 = *plVar3;
            puVar11 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar9,local_98,0);
            if (*(int *)(lVar14 + 8 + lVar7) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar14 + lVar7);
            }
            if (*(int *)(puVar11 + 1) == 0) {
              puVar13 = &DAT_143f3eda8;
            }
            else {
              puVar13 = (undefined2 *)*puVar11;
            }
            FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar15);
            if (local_98[0] != 0) {
              FMemory::Free();
            }
            FUN_1425bff60(param_1,&local_100);
            if ((local_100 != 0) &&
               (puVar19 = *(ulonglong **)(lVar16 + 0x40 + lVar14), puVar19 != (ulonglong *)0x0)) {
              local_268 = *puVar19;
              lVar7 = plVar9[0x25];
              FUN_14271c440(local_100,puVar19 + 0xe);
              *(char *)(plVar9 + 0x25) = (char)lVar7;
            }
            *(byte *)(plVar9 + 0x12) = *(byte *)(plVar9 + 0x12) | 2;
            UGameplayStatics::FinishSpawningActor(plVar9,&local_78);
            if ((char)plVar9[0x25] == '\x03') {
              FUN_14223f9d0(plVar9);
            }
            if (((local_100 != 0) && (lVar16 = *(longlong *)(lVar16 + 0x40 + lVar14), lVar16 != 0))
               && (0 < *(int *)(lVar16 + 0x78))) {
              FUN_142725990();
              (**(code **)(*plVar9 + 0x1e8))();
            }
            uStack_214 = 1;
            plVar3 = plVar9 + 0x56;
            local_218 = 0;
            uVar1 = *(uint *)(plVar9 + 0x5b);
            puVar20 = (uint *)(plVar9 + 0x58);
            uVar22 = 0;
            uStack_204 = 0;
            if (uVar1 != 0) {
              puVar24 = (uint *)plVar9[0x5a];
              if ((uint *)plVar9[0x5a] == (uint *)0x0) {
                puVar24 = puVar20;
              }
              uVar17 = *puVar24;
              local_218 = 0;
              while (uVar17 == 0) {
                lVar16 = (longlong)local_218;
                uVar22 = uVar22 + 0x20;
                iVar5 = local_218 + 1;
                uStack_204 = (ulonglong)uVar22 << 0x20;
                bVar2 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_218;
                local_218 = iVar5;
                if (bVar2) goto LAB_14241ee65;
                uVar17 = puVar24[lVar16 + 1];
              }
              uStack_214 = -uVar17 & uVar17;
              local_130 = 0x1f;
              if (uStack_214 != 0) {
                for (; uStack_214 >> local_130 == 0; local_130 = local_130 + -1) {
                }
              }
              if (uStack_214 == 0) {
                iVar5 = 0x20;
              }
              else {
                iVar5 = 0x1f - local_130;
              }
              iVar5 = (uVar22 - iVar5) + 0x1f;
              uStack_204._4_4_ = (undefined4)((ulonglong)uStack_204 >> 0x20);
              uStack_204 = CONCAT44(uStack_204._4_4_,iVar5);
              if ((int)uVar1 < iVar5) {
LAB_14241ee65:
                uStack_204 = CONCAT44(uStack_204._4_4_,uVar1);
              }
            }
            local_208 = 0xffffffff;
            uVar22 = *(uint *)(plVar9 + 0x5b);
            uStack_1d8 = CONCAT44(uStack_214,local_218);
            iVar5 = (int)uVar22 >> 5;
            local_1e0._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
            uVar17 = -1 << ((byte)uVar22 & 0x1f);
            uStack_1c8 = uVar22 & 0xffffffe0;
            local_1e0 = CONCAT44(local_1e0._4_4_,iVar5);
            uStack_1c4 = (undefined4)uStack_204;
            uStack_1c0 = uStack_204._4_4_;
            uStack_1bc = uStack_1fc;
            auStack_1a0._8_4_ = uStack_204._4_4_;
            auStack_1a0._12_4_ = uStack_1fc;
            auVar4 = auStack_1a0;
            auStack_1a0._4_4_ = (undefined4)uStack_204;
            auStack_1a0._0_4_ = 0xffffffff;
            uStack_1d0 = CONCAT44(uVar22,uVar17);
            uStack_1b0 = CONCAT44(uStack_214,local_218);
            auStack_1a0._8_8_ = auVar4._8_8_;
            local_248 = puVar20;
            puStack_210 = puVar20;
            local_1b8 = plVar3;
            puStack_1a8 = puVar20;
            local_120 = plVar3;
            uVar10 = uStack_1d0;
            if (uVar22 != uVar1) {
              puVar24 = (uint *)plVar9[0x5a];
              if ((uint *)plVar9[0x5a] == (uint *)0x0) {
                puVar24 = puVar20;
              }
              uVar17 = puVar24[iVar5] & uVar17;
              while (uVar17 == 0) {
                uStack_1c8 = uStack_1c8 + 0x20;
                local_1e0._4_4_ = (undefined4)((ulonglong)local_1e0 >> 0x20);
                local_1e0 = CONCAT44(local_1e0._4_4_,iVar5 + 1);
                if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
                goto LAB_14241ef51;
                uVar17 = puVar24[(longlong)iVar5 + 1];
                uStack_1d0 = 0xffffffff;
                iVar5 = iVar5 + 1;
              }
              uVar17 = -uVar17 & uVar17;
              local_12c = 0x1f;
              if (uVar17 != 0) {
                for (; uVar17 >> local_12c == 0; local_12c = local_12c + -1) {
                }
              }
              if (uVar17 == 0) {
                iVar5 = 0x20;
              }
              else {
                iVar5 = 0x1f - local_12c;
              }
              iVar5 = (uStack_1c8 - iVar5) + 0x1f;
              uStack_1d0 = CONCAT44(iVar5,(undefined4)uStack_1d0);
              uVar10 = uStack_1d0;
              if ((int)uVar1 < iVar5) {
LAB_14241ef51:
                uStack_1d0 = CONCAT44(uVar1,(undefined4)uStack_1d0);
                uVar10 = uStack_1d0;
              }
            }
            while( true ) {
              plVar18 = local_108;
              plVar9 = local_110;
              if (((auStack_1a0._4_4_ == (int)((ulonglong)uVar10 >> 0x20)) &&
                  (puStack_1a8 == puVar20)) && (local_1b8 == plVar3)) break;
              plVar9 = *(longlong **)(*local_1b8 + (longlong)(int)auStack_1a0._4_4_ * 0x10);
              if (plVar9 != (longlong *)0x0) {
                FUN_1425bff60(param_1,&local_190,plVar9[2]);
                if (local_190 != 0) {
                  uVar12 = UObjectBaseUtility::GetFullName(plVar9,local_88,0);
                  lVar16 = local_118;
                  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(local_118 + 0x50 + lVar14,local_240,uVar12);
                  if ((local_240[0] == -1) ||
                     (lVar16 = *(longlong *)(lVar16 + 0x50 + lVar14) + (longlong)local_240[0] * 0x28
                     , lVar16 == 0)) {
                    puVar19 = (ulonglong *)0x0;
                    plVar18 = (longlong *)0x0;
                  }
                  else {
                    puVar19 = *(ulonglong **)(lVar16 + 0x10);
                    plVar18 = *(longlong **)(lVar16 + 0x18);
                    if (plVar18 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                      UNLOCK();
                    }
                  }
                  if (local_88[0] != 0) {
                    FMemory::Free();
                  }
                  if ((local_190 != 0) && (puVar19 != (ulonglong *)0x0)) {
                    local_268 = *puVar19;
                    FUN_14271c440(local_190,puVar19 + 0xe,0,plVar9);
                    if (0 < (int)puVar19[0xf]) {
                      FUN_142725990(local_190,puVar19,plVar9);
                      (**(code **)(*plVar9 + 0x1e8))(plVar9);
                    }
                  }
                  puVar20 = local_248;
                  if (plVar18 != (longlong *)0x0) {
                    LOCK();
                    plVar9 = plVar18 + 1;
                    lVar16 = *plVar9;
                    *(int *)plVar9 = (int)*plVar9 + -1;
                    UNLOCK();
                    if ((int)lVar16 == 1) {
                      (**(code **)*plVar18)(plVar18);
                      LOCK();
                      piVar6 = (int *)((longlong)plVar18 + 0xc);
                      iVar5 = *piVar6;
                      *piVar6 = *piVar6 + -1;
                      UNLOCK();
                      puVar20 = local_248;
                      if (iVar5 == 1) {
                        (**(code **)(*plVar18 + 8))(plVar18,1);
                        puVar20 = local_248;
                      }
                    }
                  }
                }
                plVar9 = local_188;
                if (local_188 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = local_188 + 1;
                  lVar16 = *plVar18;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)lVar16 == 1) {
                    (**(code **)*local_188)(local_188);
                    LOCK();
                    piVar6 = (int *)((longlong)plVar9 + 0xc);
                    iVar5 = *piVar6;
                    *piVar6 = *piVar6 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
              }
              auStack_1a0._0_4_ = auStack_1a0._0_4_ & ~uStack_1b0._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
            }
            iVar5 = (int)local_110[1];
            *(int *)(local_110 + 1) = iVar5 + 1;
            if (*(int *)((longlong)local_110 + 0xc) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110,iVar5);
            }
            plVar3 = local_f8;
            *(longlong **)(*plVar9 + (longlong)iVar5 * 8) = plVar18;
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_f8 + 1;
              lVar14 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_f8)(local_f8);
                LOCK();
                piVar6 = (int *)((longlong)plVar3 + 0xc);
                iVar5 = *piVar6;
                *piVar6 = *piVar6 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
          }
          TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
          ::Remove(local_158._8_8_,uStack_160._4_4_);
          local_140 = '\x01';
          param_3 = local_1f8;
        }
      }
      uStack_160 = CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_16c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_170);
      plVar3 = local_178;
    } while (uStack_160._4_4_ < (int)local_168[6]);
    if ((local_140 != '\0') && (cStack_13f != '\0')) {
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 14241f1f0 FUN_14241f1f0 body=517 status=ok
// SIG undefined FUN_14241f1f0(void)

void FUN_14241f1f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x80);
  puStack_28 = (uint *)(param_1 + 0x68);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar9 = puStack_28;
    }
    uVar3 = *puVar9;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar4) goto LAB_14241f2af;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_14241f2af:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x80);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      iVar2 = iStack_5c;
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      lVar7 = (longlong)iVar2 * 0x28;
      if (*(int *)(lVar7 + 8 + *plVar1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(lVar7 + *plVar1);
      }
      plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,puVar8);
      if (plVar5 != (longlong *)0x0) {
        if (*(int *)(lVar7 + 0x18 + *plVar1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(lVar7 + 0x10 + *plVar1);
        }
        (**(code **)(*plVar5 + 0x60))(plVar5,puVar8,0x5000000);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 14241f400 FUN_14241f400 body=2988 status=ok
// SIG undefined FUN_14241f400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14241f400(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint *puVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  float fVar21;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  uint *puStack_170;
  uint local_168;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  uint local_150 [2];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *local_128;
  undefined8 uStack_120;
  uint *local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  longlong *local_f8;
  undefined2 local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  undefined2 **ppuStack_c8;
  uint *puStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_140 = param_1;
  lVar9 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x38))();
  if (lVar9 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x528);
    iVar20 = 0;
    uStack_164 = 0;
    iStack_160 = 0;
    local_178 = (undefined2 **)0x100000000;
    local_158 = plVar3;
    local_128 = plVar3;
    local_d0 = plVar3;
    if (*(char *)(param_1 + 0xae0) == '\0') {
      uVar8 = *(uint *)(plVar3 + 5);
      puVar19 = (uint *)(plVar3 + 2);
      if (uVar8 != 0) {
        puVar13 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar13 = puVar19;
        }
        uVar6 = *puVar13;
        iStack_160 = iVar20;
        while (uVar6 == 0) {
          iStack_160 = iStack_160 + 0x20;
          local_178._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
          local_178 = (undefined2 **)CONCAT44(local_178._4_4_,iVar20 + 1);
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar20)
          goto LAB_14241fd82;
          uVar6 = puVar13[(longlong)iVar20 + 1];
          iVar20 = iVar20 + 1;
        }
        uVar6 = -uVar6 & uVar6;
        iVar20 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        local_178 = (undefined2 **)CONCAT44(uVar6,(undefined4)local_178);
        if (uVar6 == 0) {
          iVar20 = 0x20;
        }
        else {
          iVar20 = 0x1f - iVar20;
        }
        uStack_164 = (iStack_160 - iVar20) + 0x1f;
        if ((int)uVar8 < (int)uStack_164) {
LAB_14241fd82:
          uStack_164 = uVar8;
        }
      }
      uVar6 = *(uint *)(plVar3 + 5);
      auStack_b8._4_4_ = uStack_164;
      auStack_b8._0_4_ = 0xffffffff;
      auStack_b8._8_8_ = CONCAT44(uStack_15c,iStack_160);
      local_168 = -1 << ((byte)uVar6 & 0x1f);
      ppuStack_c8 = local_178;
      uVar18 = uVar6 & 0xffffffe0;
      local_108._0_8_ = CONCAT44(uStack_15c,iStack_160);
      uStack_120 = local_178;
      uStack_110 = CONCAT44(uStack_164,0xffffffff);
      puStack_170 = puVar19;
      uStack_164 = uVar6;
      local_118 = puVar19;
      puStack_c0 = puVar19;
      if (uVar6 != uVar8) {
        puVar13 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar13 = puVar19;
        }
        uVar14 = puVar13[(int)uVar6 >> 5] & local_168;
        iVar20 = (int)uVar6 >> 5;
        while (uVar14 == 0) {
          uVar18 = uVar18 + 0x20;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar20)
          goto LAB_14241fe54;
          uVar14 = puVar13[(longlong)iVar20 + 1];
          local_168 = 0xffffffff;
          iVar20 = iVar20 + 1;
        }
        uVar14 = -uVar14 & uVar14;
        iVar20 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        if (uVar14 == 0) {
          iVar20 = 0x20;
        }
        else {
          iVar20 = 0x1f - iVar20;
        }
        uStack_164 = (uVar18 - iVar20) + 0x1f;
        uVar6 = uStack_164;
        if ((int)uVar8 < (int)uStack_164) {
LAB_14241fe54:
          uStack_164 = uVar8;
          uVar6 = uVar8;
        }
      }
      while( true ) {
        if (((uStack_110._4_4_ == uVar6) && (local_118 == puVar19)) && (local_128 == local_158))
        break;
        uVar4 = **(undefined8 **)(*local_128 + (longlong)(int)uStack_110._4_4_ * 0x18);
        FWeakObjectPtr::operator=(&local_148,uVar4);
        lVar9 = **(longlong **)(param_1 + 0x98);
        if (*(int *)(lVar9 + 0x1608) != *(int *)(lVar9 + 0x1634)) {
          lVar15 = *(longlong *)(lVar9 + 0x1640);
          if (*(longlong *)(lVar9 + 0x1640) == 0) {
            lVar15 = lVar9 + 0x1638;
          }
          iVar20 = *(int *)(lVar15 + ((longlong)(int)(local_148._4_4_ ^ (uint)local_148) &
                                     (longlong)*(int *)(lVar9 + 0x1648) - 1U) * 4);
          if (iVar20 != -1) {
            lVar9 = *(longlong *)(lVar9 + 0x1600);
            do {
              lVar15 = (longlong)iVar20;
              if ((*(uint *)(lVar9 + lVar15 * 0x18) == (uint)local_148) &&
                 (*(uint *)(lVar9 + 4 + lVar15 * 0x18) == local_148._4_4_)) {
                if ((iVar20 != -1) &&
                   ((lVar9 = lVar9 + lVar15 * 0x18, lVar9 != 0 && (*(longlong *)(lVar9 + 8) != 0))))
                {
                  FWeakObjectPtr::operator=(&local_138,uVar4);
                  iVar20 = *(int *)(param_1 + 0x5a0);
                  *(int *)(param_1 + 0x5a0) = iVar20 + 1;
                  if (*(int *)(param_1 + 0x5a4) < iVar20 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (param_1 + 0x598,iVar20);
                  }
                  lVar9 = *(longlong *)(param_1 + 0x598);
                  *(undefined4 *)(lVar9 + (longlong)iVar20 * 8) = (undefined4)local_138;
                  *(undefined4 *)(lVar9 + 4 + (longlong)iVar20 * 8) = local_138._4_4_;
                }
                break;
              }
              iVar20 = *(int *)(lVar9 + 0x10 + lVar15 * 0x18);
            } while (iVar20 != -1);
          }
        }
        uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 & ~uStack_120._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
      }
    }
    else {
      puVar19 = (uint *)(plVar3 + 2);
      local_88 = 0;
      local_80 = 0;
      local_68 = (uint *)0x0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      uVar8 = *(uint *)(plVar3 + 5);
      if (uVar8 != 0) {
        puVar13 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar13 = puVar19;
        }
        uVar6 = *puVar13;
        iVar7 = iVar20;
        iStack_160 = iVar20;
        while (uVar6 == 0) {
          iStack_160 = iStack_160 + 0x20;
          local_178._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
          local_178 = (undefined2 **)CONCAT44(local_178._4_4_,iVar7 + 1);
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_14241f562;
          uVar6 = puVar13[(longlong)iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        uVar6 = -uVar6 & uVar6;
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        local_178 = (undefined2 **)CONCAT44(uVar6,(undefined4)local_178);
        if (uVar6 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_164 = (iStack_160 - iVar7) + 0x1f;
        if ((int)uVar8 < (int)uStack_164) {
LAB_14241f562:
          uStack_164 = uVar8;
        }
      }
      uVar6 = *(uint *)(plVar3 + 5);
      uStack_110 = CONCAT44(uStack_164,0xffffffff);
      auStack_b8._8_8_ = CONCAT44(uStack_15c,iStack_160);
      auStack_b8._0_8_ = uStack_110;
      local_168 = -1 << ((byte)uVar6 & 0x1f);
      ppuStack_c8 = local_178;
      uVar18 = uVar6 & 0xffffffe0;
      local_108._0_8_ = CONCAT44(uStack_15c,iStack_160);
      uStack_120 = local_178;
      puStack_170 = puVar19;
      uStack_164 = uVar6;
      local_118 = puVar19;
      puStack_c0 = puVar19;
      if (uVar6 != uVar8) {
        puVar13 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar13 = puVar19;
        }
        uVar14 = puVar13[(int)uVar6 >> 5] & local_168;
        iVar7 = (int)uVar6 >> 5;
        while (uVar14 == 0) {
          uVar18 = uVar18 + 0x20;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_14241f635;
          uVar14 = puVar13[(longlong)iVar7 + 1];
          local_168 = 0xffffffff;
          iVar7 = iVar7 + 1;
        }
        uVar14 = -uVar14 & uVar14;
        iVar7 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar14 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_164 = (uVar18 - iVar7) + 0x1f;
        uVar6 = uStack_164;
        if ((int)uVar8 < (int)uStack_164) {
LAB_14241f635:
          uStack_164 = uVar8;
          uVar6 = uVar8;
        }
      }
      while( true ) {
        param_1 = local_140;
        if (((uStack_110._4_4_ == uVar6) && (local_118 == puVar19)) && (local_128 == plVar3)) break;
        uVar4 = **(undefined8 **)(*local_128 + (longlong)(int)uStack_110._4_4_ * 0x18);
        FWeakObjectPtr::operator=(&local_148,uVar4);
        lVar9 = **(longlong **)(local_140 + 0x98);
        if (*(int *)(lVar9 + 0x1608) != *(int *)(lVar9 + 0x1634)) {
          lVar15 = *(longlong *)(lVar9 + 0x1640);
          if (*(longlong *)(lVar9 + 0x1640) == 0) {
            lVar15 = lVar9 + 0x1638;
          }
          iVar7 = *(int *)(lVar15 + ((longlong)(int)(local_148._4_4_ ^ (uint)local_148) &
                                    (longlong)*(int *)(lVar9 + 0x1648) - 1U) * 4);
          if (iVar7 != -1) {
            lVar9 = *(longlong *)(lVar9 + 0x1600);
            do {
              lVar15 = (longlong)iVar7;
              if ((*(uint *)(lVar9 + lVar15 * 0x18) == (uint)local_148) &&
                 (*(uint *)(lVar9 + 4 + lVar15 * 0x18) == local_148._4_4_)) {
                if ((iVar7 != -1) &&
                   ((lVar9 = lVar9 + lVar15 * 0x18, lVar9 != 0 && (*(longlong *)(lVar9 + 8) != 0))))
                {
                  local_138 = AActor::GetLevel(uVar4);
                  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                  ::FindId(&local_88,local_150,local_138);
                  if ((local_150[0] == 0xffffffff) ||
                     (lVar9 = (longlong)(int)local_150[0] * 0x20 + local_88, lVar9 == 0)) {
                    local_d8 = &local_138;
                    FUN_1407b9130(&local_88,&local_158,&local_d8);
                    lVar9 = (longlong)(int)local_158 * 0x20 + local_88;
                  }
                  iVar7 = *(int *)(lVar9 + 0x10);
                  *(int *)(lVar9 + 0x10) = iVar7 + 1;
                  if (*(int *)(lVar9 + 0x14) < iVar7 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              ((longlong *)(lVar9 + 8),iVar7);
                  }
                  *(undefined8 *)(*(longlong *)(lVar9 + 8) + (longlong)iVar7 * 8) = uVar4;
                }
                break;
              }
              iVar7 = *(int *)(lVar9 + 0x10 + lVar15 * 0x18);
            } while (iVar7 != -1);
          }
        }
        uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 & ~uStack_120._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
      }
      *(undefined4 *)(local_140 + 0xb40) = 0;
      if (*(int *)(local_140 + 0xb44) < (int)local_80 - local_54) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(local_140 + 0xb38);
      }
      puStack_170 = local_78;
      local_178 = (undefined2 **)0x100000000;
      uStack_164 = 0;
      iStack_160 = 0;
      if ((uint)local_60 != 0) {
        puVar19 = local_78;
        if (local_68 != (uint *)0x0) {
          puVar19 = local_68;
        }
        uVar8 = *puVar19;
        iStack_160 = iVar20;
        while (uVar8 == 0) {
          iStack_160 = iStack_160 + 0x20;
          local_178._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
          local_178 = (undefined2 **)CONCAT44(local_178._4_4_,iVar20 + 1);
          if ((int)(((uint)local_60 - 1) + ((int)((uint)local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <=
              iVar20) {
            uStack_164 = (uint)local_60;
            goto LAB_14241f8ca;
          }
          uVar8 = puVar19[(longlong)iVar20 + 1];
          iVar20 = iVar20 + 1;
        }
        uVar8 = -uVar8 & uVar8;
        iVar20 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        local_178 = (undefined2 **)CONCAT44(uVar8,(undefined4)local_178);
        if (uVar8 == 0) {
          iVar20 = 0x20;
        }
        else {
          iVar20 = 0x1f - iVar20;
        }
        uStack_164 = (iStack_160 - iVar20) + 0x1f;
        if ((int)(uint)local_60 < (int)uStack_164) {
          uStack_164 = (uint)local_60;
        }
      }
LAB_14241f8ca:
      local_168 = 0xffffffff;
      uStack_110 = CONCAT44(uStack_164,0xffffffff);
      auStack_b8._8_4_ = iStack_160;
      auStack_b8._0_8_ = uStack_110;
      auStack_b8._12_4_ = uStack_15c;
      local_128 = &local_88;
      local_f0 = 0;
      ppuStack_c8 = local_178;
      local_f8 = &local_88;
      local_a8._0_4_ = SUB84(&local_88,0);
      local_a8._4_4_ = (undefined4)((ulonglong)&local_88 >> 0x20);
      uStack_120 = local_178;
      local_108._8_4_ = (undefined4)local_a8;
      local_108._0_8_ = auStack_b8._8_8_;
      local_108._12_4_ = local_a8._4_4_;
      local_118 = puStack_170;
      local_d0 = local_128;
      puStack_c0 = puStack_170;
      local_a8 = &local_88;
      if ((int)uStack_164 < (int)(uint)local_60) {
        local_a0 = (longlong *)(param_1 + 0xa68);
        plVar3 = (longlong *)(param_1 + 0xa78);
        uVar8 = uStack_164;
        do {
          plVar5 = local_a0;
          puVar19 = (uint *)0x0;
          lVar9 = (longlong)(int)uVar8 * 0x20;
          local_148 = *local_128;
          local_138 = lVar9;
          lVar15 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(lVar9 + local_148));
          local_d8 = *(undefined8 **)(lVar15 + 0x18);
          FName::ToString(&local_d8,local_98);
          FUN_1428d4fe0(&local_e8,local_98);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar13 = puVar19;
          if (*(int *)(param_1 + 0xa80) != *(int *)(param_1 + 0xaac)) {
            puVar11 = &DAT_143f3eda8;
            if (local_e0 != 0) {
              puVar11 = local_e8;
            }
            iVar20 = FUN_140438070(puVar11);
            lVar15 = *(longlong *)(param_1 + 0xab8);
            if (*(longlong *)(param_1 + 0xab8) == 0) {
              lVar15 = param_1 + 0xab0;
            }
            iVar20 = *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0xac0) - 1U & (longlong)iVar20)
                                       * 4);
            if (iVar20 != -1) {
              lVar15 = *plVar3;
              do {
                lVar17 = (longlong)iVar20 * 0x20;
                puVar11 = &DAT_143f3eda8;
                if (local_e0 != 0) {
                  puVar11 = local_e8;
                }
                if (*(int *)(lVar17 + 8 + lVar15) == 0) {
                  puVar12 = &DAT_143f3eda8;
                }
                else {
                  puVar12 = *(undefined2 **)(lVar17 + lVar15);
                }
                iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar11);
                if (iVar7 == 0) {
                  if (iVar20 != -1) {
                    puVar13 = (uint *)(*plVar3 + lVar17);
                  }
                  break;
                }
                lVar15 = *plVar3;
                iVar20 = *(int *)(lVar17 + 0x18 + lVar15);
              } while (iVar20 != -1);
            }
          }
          puVar10 = puVar13 + 4;
          if (puVar13 == (uint *)0x0) {
            puVar10 = puVar19;
          }
          if (puVar10 == (uint *)0x0) {
            uVar8 = *(uint *)(plVar5 + 1);
            lVar9 = (longlong)(int)uVar8;
            *(uint *)(plVar5 + 1) = uVar8 + 1;
            if (*(int *)((longlong)plVar5 + 0xc) < (int)(uVar8 + 1)) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar5,uVar8);
            }
            puVar11 = local_e8;
            lVar15 = *plVar5;
            *(undefined8 *)(lVar15 + lVar9 * 0x18) = 0;
            lVar17 = (longlong)local_e0;
            *(int *)(lVar15 + 8 + lVar9 * 0x18) = local_e0;
            puVar16 = (undefined8 *)(lVar15 + lVar9 * 0x18);
            if (local_e0 == 0) {
              *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar16,local_e0,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar16,puVar11,lVar17 * 2);
            }
            lVar15 = local_140;
            *(undefined4 *)(puVar16 + 2) = 0xffffffff;
            *(undefined2 *)((longlong)puVar16 + 0x14) = 0;
            *(uint *)(*(longlong *)(local_140 + 0xa68) + 0x10 + lVar9 * 0x18) = uVar8;
            local_178 = &local_e8;
            puStack_170 = local_150;
            local_150[0] = uVar8;
            FUN_1406c2bb0(plVar3,&local_158,&local_178,0);
            piVar1 = (int *)(lVar15 + 0xb48);
            *piVar1 = *piVar1 + 1;
            lVar15 = *(longlong *)(lVar15 + 0xa68);
            lVar9 = local_138;
            uVar8 = local_150[0];
          }
          else {
            lVar15 = *plVar5;
            uVar8 = *puVar10;
          }
          if (local_e8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          iVar20 = *(int *)(lVar15 + (longlong)(int)uVar8 * 0x18 + 0x10);
          uVar2 = *(undefined4 *)(lVar9 + 0x10 + local_148);
          iVar7 = *(int *)(local_140 + 0xb40);
          *(int *)(local_140 + 0xb40) = iVar7 + 1;
          if (*(int *)(local_140 + 0xb44) < iVar7 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (local_140 + 0xb38,iVar7);
          }
          lVar17 = local_148;
          lVar15 = *(longlong *)(local_140 + 0xb38);
          *(int *)(lVar15 + (longlong)iVar7 * 8) = iVar20 + 1;
          *(undefined4 *)(lVar15 + 4 + (longlong)iVar7 * 8) = uVar2;
          iVar20 = *(int *)(lVar9 + 0x10 + local_148);
          if (iVar20 != 0) {
            iVar7 = *(int *)(param_1 + 0x5a0);
            if (*(int *)(param_1 + 0x5a4) < iVar20 + iVar7) {
              TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x598));
              iVar7 = *(int *)(param_1 + 0x5a0);
            }
            puVar16 = *(undefined8 **)(local_138 + 8 + lVar17);
            lVar9 = *(longlong *)(param_1 + 0x598) + (longlong)iVar7 * 8;
            iVar7 = iVar20;
            do {
              FWeakObjectPtr::operator=(lVar9,*puVar16);
              lVar9 = lVar9 + 8;
              puVar16 = puVar16 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            *(undefined4 *)(local_138 + 0x10 + local_148) = 0;
            *(int *)(param_1 + 0x5a0) = *(int *)(param_1 + 0x5a0) + iVar20;
          }
          uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 & ~uStack_120._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
          uVar8 = uStack_110._4_4_;
        } while ((int)uStack_110._4_4_ < (int)local_118[6]);
        param_1 = local_140;
        if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_f8,(int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34),1);
          param_1 = local_140;
        }
      }
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
    }
    if (*(int *)(param_1 + 0x5a0) != 0) {
      UPackageMapClient::SavePackageMapExportAckStatus
                (*(undefined8 *)(**(longlong **)(param_1 + 0x98) + 0x68),param_1 + 0x648);
      *(undefined8 *)(param_1 + 0x738) = 0;
      *(undefined4 *)(param_1 + 0x740) = 0;
      *(double *)(param_1 + 0x748) = (double)*(float *)(param_1 + 0x548);
      fVar21 = (float)FUN_14240df30(param_1);
      if (fVar21 <= 0.0) {
        FUN_142423af0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 14241ffb0 FUN_14241ffb0 body=662 status=ok
// SIG undefined FUN_14241ffb0(void)

void FUN_14241ffb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
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
  
  uVar12 = 0;
  plVar1 = (longlong *)(param_1 + 0x300);
  local_a8 = 0;
  uStack_a4 = 1;
  iVar2 = *(int *)(param_1 + 0x328);
  puStack_58 = (uint *)(param_1 + 0x310);
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 800);
    if (*(uint **)(param_1 + 800) == (uint *)0x0) {
      puVar11 = puStack_58;
    }
    uVar3 = *puVar11;
    uVar8 = uVar12;
    uVar10 = uVar12;
    while (uVar3 == 0) {
      iVar7 = (int)uVar8;
      uStack_90 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_90;
      local_a8 = iVar7 + 1;
      uVar8 = (ulonglong)local_a8;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142420081;
      uVar3 = puVar11[(longlong)iVar7 + 1];
    }
    uStack_a4 = -uVar3 & uVar3;
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
    if (iVar2 < local_98._4_4_) {
LAB_142420081:
      local_98._4_4_ = iVar2;
    }
  }
  auStack_50._4_4_ = local_98._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_90;
  auStack_50._12_4_ = iStack_8c;
  uStack_60 = local_a8;
  uStack_5c = uStack_a4;
  local_70 = 0;
  local_40._0_4_ = SUB84(plVar1,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  bVar5 = local_98._4_4_ < *(int *)(param_1 + 0x328);
  local_78 = plVar1;
  local_68 = plVar1;
  local_40 = plVar1;
  local_98 = puStack_58;
  if (bVar5) {
    do {
      lVar9 = (longlong)iStack_8c * 0x20;
      cVar6 = FWeakObjectPtr::IsValid(*plVar1 + lVar9);
      if ((cVar6 != '\0') && (*(int *)(*(longlong *)(lVar9 + 8 + *plVar1) + 0x30) != 0)) {
        (**(code **)(*param_2 + 0x68))(param_2);
        lVar4 = *(longlong *)(param_1 + 0xe0);
        local_res20 = *(undefined4 *)(*plVar1 + lVar9);
        local_res24 = *(undefined4 *)(*plVar1 + 4 + lVar9);
        TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::FindId(lVar4 + 0x50,local_res8,&local_res20);
        uVar8 = uVar12;
        if (local_res8[0] != -1) {
          uVar8 = *(longlong *)(lVar4 + 0x50) + (longlong)local_res8[0] * 0x14;
        }
        local_res10[0] = *(undefined4 *)(uVar8 + 8);
        (**(code **)(*param_2 + 0x68))(param_2,local_res10);
        lVar4 = *(longlong *)(lVar9 + 8 + *plVar1);
        (**(code **)(*param_2 + 0x50))
                  (param_2,*(undefined8 *)(lVar4 + 0x20),(longlong)*(int *)(lVar4 + 0x28));
        lVar4 = *(longlong *)(lVar9 + 8 + *plVar1);
        *(undefined4 *)(lVar4 + 0x28) = 0;
        if (*(int *)(lVar4 + 0x2c) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar4 + 0x20,0);
        }
        *(undefined4 *)(*(longlong *)(lVar9 + 8 + *plVar1) + 0x30) = 0;
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  local_res18[0] = 0;
  (**(code **)(*param_2 + 0x68))(param_2,local_res18);
  return;
}



// FUNCTION 142420250 FUN_142420250 body=1346 status=ok
// SIG undefined FUN_142420250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142420250(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  uint *puVar18;
  uint *puVar19;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_128;
  longlong *plStack_120;
  int local_118;
  uint uStack_114;
  uint *puStack_110;
  undefined4 local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  undefined4 local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  int local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  *param_2 = 0;
  param_2[1] = 0;
  if (((0 < *(int *)(param_1 + 0xa0)) && (lVar12 = **(longlong **)(param_1 + 0x98), lVar12 != 0)) &&
     (*(int *)(lVar12 + 300) != 1)) {
    local_b0 = (longlong *)(lVar12 + 0x1600);
    uStack_114 = 1;
    uVar6 = *(uint *)(lVar12 + 0x1628);
    puStack_110 = (uint *)(lVar12 + 0x1610);
    local_118 = 0;
    uStack_104 = 0;
    iStack_100 = 0;
    if (uVar6 != 0) {
      puVar18 = *(uint **)(lVar12 + 0x1620);
      if (*(uint **)(lVar12 + 0x1620) == (uint *)0x0) {
        puVar18 = puStack_110;
      }
      uVar7 = *puVar18;
      iStack_100 = 0;
      local_118 = 0;
      while (uVar7 == 0) {
        lVar12 = (longlong)local_118;
        iStack_100 = iStack_100 + 0x20;
        iVar14 = local_118 + 1;
        bVar9 = (int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= local_118;
        local_118 = iVar14;
        if (bVar9) goto LAB_14242036a;
        uVar7 = puVar18[lVar12 + 1];
      }
      uStack_114 = -uVar7 & uVar7;
      local_60 = 0x1f;
      if (uStack_114 != 0) {
        for (; uStack_114 >> local_60 == 0; local_60 = local_60 + -1) {
        }
      }
      if (uStack_114 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - local_60;
      }
      uStack_104 = (iStack_100 - iVar14) + 0x1f;
      if ((int)uVar6 < (int)uStack_104) {
LAB_14242036a:
        uStack_104 = uVar6;
      }
    }
    local_108 = 0xffffffff;
    uStack_a8 = CONCAT44(uStack_114,local_118);
    uStack_98 = 0xffffffff;
    uStack_94 = uStack_104;
    uStack_90 = CONCAT44(uStack_fc,iStack_100);
    local_68 = iStack_100;
    uStack_70 = 0xffffffff;
    uStack_6c = uStack_104;
    puStack_a0 = puStack_110;
    local_88 = local_b0;
    uStack_80 = uStack_a8;
    local_78 = puStack_110;
    if ((int)uStack_104 < (int)uVar6) {
      do {
        lVar12 = *(longlong *)(*local_88 + 8 + (longlong)(int)uStack_6c * 0x18);
        if (lVar12 != 0) {
          plVar17 = (longlong *)(lVar12 + 0x98);
          uStack_f4 = 1;
          uVar6 = *(uint *)(lVar12 + 0xc0);
          puVar18 = (uint *)(lVar12 + 0xa8);
          local_f8 = 0;
          uStack_e4 = 0;
          iStack_e0 = 0;
          if (uVar6 != 0) {
            puVar19 = *(uint **)(lVar12 + 0xb8);
            if (*(uint **)(lVar12 + 0xb8) == (uint *)0x0) {
              puVar19 = puVar18;
            }
            uVar7 = *puVar19;
            while (uVar7 == 0) {
              lVar13 = (longlong)local_f8;
              iStack_e0 = iStack_e0 + 0x20;
              iVar14 = local_f8 + 1;
              bVar9 = (int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= local_f8;
              local_f8 = iVar14;
              if (bVar9) goto LAB_1424204c8;
              uVar7 = puVar19[lVar13 + 1];
            }
            uStack_f4 = -uVar7 & uVar7;
            local_5c = 0x1f;
            if (uStack_f4 != 0) {
              for (; uStack_f4 >> local_5c == 0; local_5c = local_5c + -1) {
              }
            }
            if (uStack_f4 == 0) {
              iVar14 = 0x20;
            }
            else {
              iVar14 = 0x1f - local_5c;
            }
            uStack_e4 = (iStack_e0 - iVar14) + 0x1f;
            if ((int)uVar6 < (int)uStack_e4) {
LAB_1424204c8:
              uStack_e4 = uVar6;
            }
          }
          local_e8 = 0xffffffff;
          uVar7 = *(uint *)(lVar12 + 0xc0);
          uStack_d0 = CONCAT44(uStack_f4,local_f8);
          uStack_98 = 0xffffffff;
          uStack_94 = uStack_e4;
          uStack_b8 = CONCAT44(uStack_dc,iStack_e0);
          uVar16 = -1 << ((byte)uVar7 & 0x1f);
          uVar15 = uVar7 & 0xffffffe0;
          iVar14 = (int)uVar7 >> 5;
          local_d8._4_4_ = (undefined4)((ulonglong)plVar17 >> 0x20);
          local_d8 = CONCAT44(local_d8._4_4_,iVar14);
          uStack_c8 = CONCAT44(uVar7,uVar16);
          uStack_c0 = CONCAT44(uStack_e4,uVar7) & 0xffffffffffffffe0;
          uStack_a8 = CONCAT44(uStack_f4,local_f8);
          puStack_f0 = puVar18;
          local_b0 = plVar17;
          puStack_a0 = puVar18;
          uStack_90 = uStack_b8;
          local_50 = plVar17;
          uVar10 = uStack_c8;
          if (uVar7 != uVar6) {
            puVar19 = *(uint **)(lVar12 + 0xb8);
            if (*(uint **)(lVar12 + 0xb8) == (uint *)0x0) {
              puVar19 = puVar18;
            }
            uVar16 = puVar19[iVar14] & uVar16;
            while (uVar16 == 0) {
              uVar15 = uVar15 + 0x20;
              uVar11 = uStack_c0 >> 0x20;
              uStack_c0 = CONCAT44((int)uVar11,uVar15);
              local_d8._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
              local_d8 = CONCAT44(local_d8._4_4_,iVar14 + 1);
              if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= iVar14)
              goto LAB_1424205ae;
              uVar16 = puVar19[(longlong)iVar14 + 1];
              uStack_c8 = 0xffffffff;
              iVar14 = iVar14 + 1;
            }
            uVar16 = -uVar16 & uVar16;
            local_58 = 0x1f;
            if (uVar16 != 0) {
              for (; uVar16 >> local_58 == 0; local_58 = local_58 + -1) {
              }
            }
            if (uVar16 == 0) {
              iVar14 = 0x20;
            }
            else {
              iVar14 = 0x1f - local_58;
            }
            iVar14 = (uVar15 - iVar14) + 0x1f;
            uStack_c8 = CONCAT44(iVar14,(undefined4)uStack_c8);
            uVar10 = uStack_c8;
            if ((int)uVar6 < iVar14) {
LAB_1424205ae:
              uStack_c8 = CONCAT44(uVar6,(undefined4)uStack_c8);
              uVar10 = uStack_c8;
            }
          }
          while (((uStack_94 != (uint)((ulonglong)uVar10 >> 0x20) || (puStack_a0 != puVar18)) ||
                 (local_b0 != plVar17))) {
            lVar13 = (longlong)(int)uStack_94 * 0x20 + *local_b0;
            lVar12 = FWeakObjectPtr::Get(lVar13);
            if (lVar12 != 0) {
              iVar14 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar14 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar14 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
              }
              puVar5 = (undefined4 *)(*param_2 + (longlong)iVar14 * 0x28);
              *(undefined8 *)(puVar5 + 4) = 0;
              puVar1 = (undefined8 *)(puVar5 + 2);
              *(undefined8 *)(puVar5 + 8) = 0;
              puVar2 = (undefined8 *)(puVar5 + 6);
              *puVar5 = 0xffffffff;
              puVar5[1] = 0;
              *puVar1 = 0;
              *(undefined8 *)(puVar5 + 4) = 0;
              *puVar2 = 0;
              *(undefined8 *)(puVar5 + 8) = 0;
              FWeakObjectPtr::operator=(puVar5,lVar12);
              lVar13 = *(longlong *)(lVar13 + 8);
              plVar17 = *(longlong **)(lVar13 + 0x2b8);
              uVar8 = *(undefined8 *)(lVar13 + 0x2b0);
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
              }
              local_128 = uVar8;
              plStack_120 = plVar17;
              if (&local_128 != puVar1) {
                local_128 = *puVar1;
                plStack_120 = *(longlong **)(puVar5 + 4);
                *puVar1 = uVar8;
                *(longlong **)(puVar5 + 4) = plVar17;
                local_48 = uVar8;
                plStack_40 = plVar17;
              }
              plVar17 = plStack_120;
              if (plStack_120 != (longlong *)0x0) {
                LOCK();
                plVar3 = plStack_120 + 1;
                lVar13 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*plStack_120)(plStack_120);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar17 + 0xc);
                  iVar14 = *piVar4;
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    (**(code **)(*plStack_120 + 8))(plStack_120,1);
                  }
                }
              }
              FUN_142730600(*puVar1,puVar2,*(undefined8 *)(lVar12 + 0x10),lVar12);
              local_138 = 3;
              FUN_14271c1e0(*puVar1,0,*puVar2,lVar12);
              plVar17 = local_50;
            }
            uStack_98 = uStack_98 & ~uStack_a8._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a8);
          }
        }
        uStack_70 = uStack_70 & ~uStack_80._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      } while ((int)uStack_6c < (int)local_78[6]);
    }
  }
  return param_2;
}



// FUNCTION 1424207a0 ScaleByConstantVector body=149 status=ok
// SIG undefined ScaleByConstantVector(void)

void FComposableVectorDistribution::ScaleByConstantVector(longlong param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 3);
  pfVar5 = *(float **)(param_1 + 0x10);
  if (*(byte *)(param_1 + 1) != 0) {
    bVar2 = *(byte *)(param_1 + 2);
    uVar6 = (ulonglong)*(byte *)(param_1 + 1);
    do {
      lVar4 = (ulonglong)(bVar1 != 0) + 1;
      pfVar3 = pfVar5;
      do {
        *pfVar3 = *pfVar3 * *param_2;
        pfVar3[1] = param_2[1] * pfVar3[1];
        pfVar3[2] = param_2[2] * pfVar3[2];
        pfVar3 = pfVar3 + bVar1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      pfVar5 = pfVar5 + bVar2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 142420840 FUN_142420840 body=244 status=ok
// SIG undefined FUN_142420840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142420840(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_44;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x2a0))(param_2), cVar1 != '\0')) {
    local_48 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_44 = 0;
    FUN_1424004a0(&local_48,param_2);
    ScaleLookupTableByLookupTable(param_1,&local_48);
    if (local_38 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  iVar2 = 0;
  local_20 = 0;
  param_1[6] = 0;
  if (param_1[7] != 1) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 4,1);
    iVar2 = param_1[6];
  }
  param_1[6] = iVar2 + 1;
  if ((int)param_1[7] < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 4);
  }
  *param_1 = 0x10101;
  *(undefined8 *)(param_1 + 1) = 0;
  **(undefined4 **)(param_1 + 4) = (undefined4)local_20;
  return;
}


