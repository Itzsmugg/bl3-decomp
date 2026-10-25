// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14098c240 FUN_14098c240 body=89 status=ok
// SIG undefined FUN_14098c240(void)

void FUN_14098c240(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UPropertyValue::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14098c2a0 FUN_14098c2a0 body=52 status=ok
// SIG undefined FUN_14098c2a0(void)

undefined8 * FUN_14098c2a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_AsObject_143f606d8;
  param_1[2] = *param_2;
  lVar1 = param_2[1];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 1) = 6;
  return param_1;
}



// FUNCTION 14098c2e0 FMemoryWriter body=140 status=ok
// SIG undefined FMemoryWriter(void)

undefined8 *
FMemoryWriter::FMemoryWriter
          (undefined8 *param_1,longlong param_2,undefined1 param_3,char param_4,undefined8 param_5)

{
  FArchive::FArchive();
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_143f4a100;
  param_1[0x14] = param_5;
  param_1[0x13] = param_2;
  FArchive::SetIsSaving(param_1,1);
  FArchive::SetIsPersistent(param_1,param_3);
  if (param_4 != '\0') {
    param_1[0x12] = (longlong)*(int *)(param_2 + 8);
  }
  return param_1;
}



// FUNCTION 14098c370 FUN_14098c370 body=51 status=ok
// SIG undefined FUN_14098c370(void)

undefined8 * FUN_14098c370(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144179710;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1409926e0(param_1);
  return param_1;
}



// FUNCTION 14098c3b0 FUN_14098c3b0 body=43 status=ok
// SIG undefined FUN_14098c3b0(void)

undefined8 * FUN_14098c3b0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144179710;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14098c3e0 FUN_14098c3e0 body=542 status=ok
// SIG undefined FUN_14098c3e0(void)

undefined8 * FUN_14098c3e0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_144179988;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,0);
  FGenericPlatformString::Memcpy(param_1[0x18],L"application/octet-stream",0x32);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  plVar1 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1 + 0x35);
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  if (param_1[0x15] == 0) {
    uVar2 = GetTransientPackage();
    uVar2 = NewObject<UPlayFabJsonObject>(uVar2);
    param_1[0x15] = uVar2;
  }
  else {
    FUN_1409926e0();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x16,0);
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (*(int *)((longlong)param_1 + 0xdc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
  }
  if (param_1[0x1c] == 0) {
    uVar2 = GetTransientPackage();
    uVar2 = NewObject<UPlayFabJsonObject>(uVar2);
    param_1[0x1c] = uVar2;
  }
  else {
    FUN_1409926e0();
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x28,0);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  return param_1;
}



// FUNCTION 14098c600 ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14098c670 FUN_14098c670 body=388 status=ok
// SIG undefined FUN_14098c670(void)

void FUN_14098c670(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1b0);
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
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x140,0);
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xf0,0);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x60);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14098c800 FUN_14098c800 body=132 status=ok
// SIG undefined FUN_14098c800(void)

longlong FUN_14098c800(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14098c890 FUN_14098c890 body=52 status=ok
// SIG undefined FUN_14098c890(void)

undefined8 FUN_14098c890(undefined8 param_1,ulonglong param_2)

{
  FUN_14098c670();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14098c8d0 FUN_14098c8d0 body=40 status=ok
// SIG undefined FUN_14098c8d0(void)

void FUN_14098c8d0(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  local_res10[1] = 0;
  if (param_2 != 0) {
    local_res10[0] = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x78,local_res10);
  }
  return;
}



// FUNCTION 14098c900 FUN_14098c900 body=525 status=ok
// SIG undefined FUN_14098c900(void)

void FUN_14098c900(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  void **ppvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  local_40 = *(int *)(param_2 + 1);
  lVar7 = (longlong)local_40;
  _Src = (void *)*param_2;
  puVar8 = (undefined8 *)0x0;
  local_48 = (void *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar7 * 2);
  }
  ppvVar4 = (void **)FString::TrimStartAndEnd(&local_48,local_38);
  if (&local_48 != ppvVar4) {
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
    local_48 = *ppvVar4;
    *ppvVar4 = (void *)0x0;
    local_40 = *(int *)(ppvVar4 + 1);
    local_3c = *(undefined4 *)((longlong)ppvVar4 + 0xc);
    ppvVar4[1] = (void *)0x0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x50))(*(longlong **)(param_1 + 0x1a8),&local_48);
  lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_4,1);
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 400) == 0) {
      lVar7 = lVar7 + 0x400;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 400) + 0x98);
    }
    uVar2 = *(undefined8 *)(param_5 + 4);
    lVar5 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar7,uVar2,param_5[1],&local_res8);
    if (lVar5 != 0) {
      FUN_14098d2f0(lVar5);
      FWeakObjectPtr::operator=(&local_res8,uVar2);
      FUN_142534fa0(lVar7,&local_res8);
    }
    puVar6 = (undefined8 *)operator_new(0x38);
    if (puVar6 != (undefined8 *)0x0) {
      FWeakObjectPtr::operator=(&local_res8,param_1);
      *(undefined1 *)(puVar6 + 1) = 0;
      *puVar6 = &PTR_FUN_144179c10;
      uVar3 = *(undefined8 *)(param_5 + 2);
      *(undefined4 *)((longlong)puVar6 + 0xc) = local_res8;
      *(undefined4 *)(puVar6 + 2) = local_resc;
      puVar6[3] = uVar3;
      *(undefined4 *)(puVar6 + 4) = *param_5;
      FWeakObjectPtr::operator=((longlong)puVar6 + 0x24,uVar2);
      puVar6[6] = param_3;
      puVar8 = puVar6;
    }
    uVar1 = param_5[1];
    *(undefined8 **)(param_1 + 0xa0) = puVar8;
    FUN_142514cf0(lVar7,uVar2,uVar1,puVar8);
  }
  FUN_140990ba0(param_1);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14098cb10 FUN_14098cb10 body=701 status=ok
// SIG undefined FUN_14098cb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14098cb10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70 [3];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_a8 = 0;
  local_a0 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_70[0] = 0;
    local_70[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_70,0);
    lVar13 = local_70[0];
    FGenericPlatformString::Memcpy(local_70[0],L"Array",0xc);
    if (lVar13 != 0) {
      FMemory::Free(lVar13);
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar9 = (longlong *)FJsonValue::AsArray();
    local_88 = (undefined8 *)0x0;
    iVar8 = (int)plVar9[1];
    lVar13 = *plVar9;
    local_80 = iVar8;
    if (iVar8 == 0) {
      local_7c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_88,iVar8,0);
      puVar12 = local_88;
      do {
        *puVar12 = *(undefined8 *)((lVar13 - (longlong)local_88) + (longlong)puVar12);
        lVar5 = *(longlong *)((lVar13 - (longlong)local_88) + 8 + (longlong)puVar12);
        puVar12[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        puVar12 = puVar12 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar12 = local_88 + (longlong)local_80 * 2;
    if (local_88 != puVar12) {
      local_78 = 0;
      puVar14 = local_88;
      do {
        plVar9 = (longlong *)puVar14[1];
        uVar6 = *puVar14;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        uVar10 = GetTransientPackage();
        FUN_1417846f0(uVar10,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar11 = UVaRestJsonValue::GetPrivateStaticClass();
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = 0;
        local_d0 = 0;
        local_d8 = 0;
        local_70[2] = FUN_1417985e0(uVar11,uVar10,local_78,0);
        puVar1 = (undefined8 *)(local_70[2] + 0x28);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_98 = uVar6;
        plStack_90 = plVar9;
        if (&local_98 != puVar1) {
          local_98 = *puVar1;
          plStack_90 = *(longlong **)(local_70[2] + 0x30);
          *puVar1 = uVar6;
          *(longlong **)(local_70[2] + 0x30) = plVar9;
          local_58 = uVar6;
          plStack_50 = plVar9;
        }
        plVar4 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_90 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_90 + 8))(plStack_90,1);
            }
          }
        }
        uVar7 = local_a0;
        lVar13 = (longlong)(int)local_a0;
        iVar8 = (int)local_a0 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,iVar8);
        if (local_a0._4_4_ < iVar8) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_a8,uVar7 & 0xffffffff);
        }
        *(longlong *)(local_a8 + lVar13 * 8) = local_70[2];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar9 + 1;
          lVar13 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        puVar14 = puVar14 + 2;
      } while (puVar14 != puVar12);
    }
    *param_2 = local_a8;
    *(int *)(param_2 + 1) = (int)local_a0;
    *(int *)((longlong)param_2 + 0xc) = local_a0._4_4_;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
  }
  return param_2;
}



// FUNCTION 14098cdd0 AsBool body=98 status=ok
// SIG undefined AsBool(void)

ulonglong UVaRestJsonValue::AsBool(longlong param_1)

{
  ulonglong uVar1;
  longlong local_18 [3];
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar1 = FGenericPlatformString::Memcpy(local_18[0],L"Boolean",0x10);
    if (local_18[0] != 0) {
      uVar1 = FMemory::Free(local_18[0]);
    }
    return uVar1 & 0xffffffffffffff00;
  }
  uVar1 = FJsonValue::AsBool();
  return uVar1;
}



// FUNCTION 14098ce40 AsNumber body=104 status=ok
// SIG undefined AsNumber(void)

float UPlayFabJsonValue::AsNumber(longlong param_1)

{
  double dVar1;
  longlong local_18 [3];
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_18[1] = 7;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"Number",0xe);
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
    return 0.0;
  }
  dVar1 = (double)FJsonValue::AsNumber();
  return (float)dVar1;
}



// FUNCTION 14098ceb0 FUN_14098ceb0 body=240 status=ok
// SIG undefined FUN_14098ceb0(void)

undefined8 FUN_14098ceb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong local_28 [3];
  longlong *local_10;
  
  if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(**(code **)**(undefined8 **)(param_1 + 0x28))();
    plVar4 = (longlong *)puVar6[1];
    local_28[2] = *puVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_10 = plVar4;
    uVar7 = GetTransientPackage();
    uVar7 = NewObject<UPlayFabJsonObject>(uVar7);
    GenericApplication::SetAccessibleMessageHandler(uVar7,local_28 + 2);
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
    return uVar7;
  }
  local_28[1] = 7;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  lVar5 = local_28[0];
  FGenericPlatformString::Memcpy(local_28[0],L"Object",0xe);
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  return 0;
}



// FUNCTION 14098cfa0 AsString body=124 status=ok
// SIG undefined AsString(void)

undefined8 * UVaRestJsonValue::AsString(longlong param_1,undefined8 *param_2)

{
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_18[1] = 7;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"String",0xe);
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  FJsonValue::AsString();
  return param_2;
}



// FUNCTION 14098d020 Decode body=5 status=ok
// SIG undefined Decode(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FBase64::Decode(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *pvVar7;
  void *pvVar8;
  void *_Dst;
  undefined1 auStack_178 [32];
  void *pvStack_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [256];
  longlong lStack_48;
  short *psStack_40;
  ulonglong uStack_28;
  
  uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  pvVar8 = (void *)0x0;
  pvStack_158 = (void *)0x0;
  uStack_14c = 0;
  iVar2 = GetDecodedDataSize();
  iVar2 = iVar2 + 1;
  _Dst = pvVar8;
  iStack_150 = iVar2;
  if (0 < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&pvStack_158);
    _Dst = pvStack_158;
  }
  ::_guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar2);
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
    pvVar7 = pvVar8;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
    pvVar7 = (void *)(ulonglong)(*(int *)(param_1 + 1) - 1);
  }
  cVar1 = Decode<wchar_t>(puVar4,pvVar7,_Dst);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(auStack_148,_Dst);
    if ((short *)*param_2 != psStack_40) {
      pvVar7 = pvVar8;
      if ((psStack_40 != (short *)0x0) && (*psStack_40 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (psStack_40[lVar6] != 0);
        pvVar7 = (void *)(ulonglong)((int)lVar6 + 1);
      }
      *(undefined4 *)(param_2 + 1) = 0;
      iVar2 = (int)pvVar7;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,pvVar7);
        pvVar8 = (void *)(ulonglong)*(uint *)(param_2 + 1);
      }
      iVar3 = iVar2 + (int)pvVar8;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,pvVar8);
      }
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,psStack_40,(longlong)iVar2 * 2);
      }
    }
    if (lStack_48 != 0) {
      FMemory::Free();
    }
    uVar5 = 1;
  }
  if (_Dst != (void *)0x0) {
    FMemory::Free(_Dst);
  }
  return uVar5;
}



// FUNCTION 14098d030 Decode body=5 status=ok
// SIG undefined Decode(void)

void FBase64::Decode(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = GetDecodedDataSize();
  iVar1 = (int)param_2[1];
  if (iVar1 < iVar2) {
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *param_2),0,(longlong)(iVar2 - iVar1));
  }
  else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
    *(int *)(param_2 + 1) = iVar2;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_2);
  }
  if (*(int *)(param_1 + 1) != 0) {
    Decode<wchar_t>(*param_1,*(int *)(param_1 + 1) + -1,*param_2);
    return;
  }
  Decode<wchar_t>(&DAT_143f3eda8,0,*param_2);
  return;
}



// FUNCTION 14098d040 Base64Encode body=23 status=ok
// SIG undefined Base64Encode(void)

undefined8 UVaRestLibrary::Base64Encode(undefined8 param_1)

{
  FBase64::Encode();
  return param_1;
}



// FUNCTION 14098d060 Base64EncodeData body=117 status=ok
// SIG undefined Base64EncodeData(void)

undefined8 UVaRestLibrary::Base64EncodeData(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  if (0 < *(int *)(param_1 + 8)) {
    plVar1 = (longlong *)FBase64::Encode(local_18,param_1);
    if (param_2 != plVar1) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar1;
      *plVar1 = 0;
      *(int *)(param_2 + 1) = (int)plVar1[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
      plVar1[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14098d0f0 FUN_14098d0f0 body=512 status=ok
// SIG undefined FUN_14098d0f0(void)

void FUN_14098d0f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  longlong param_5,undefined4 *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  longlong *local_60;
  longlong **local_58;
  longlong **local_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    if (param_5 == 0) {
      uVar3 = GetTransientPackage();
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_68 = 0;
      uVar4 = UPlayFabJsonObject::GetPrivateStaticClass();
      param_5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    }
    uVar3 = GetTransientPackage();
    local_60 = (longlong *)FUN_14098c240(uVar3);
    *(undefined1 *)(local_60 + 0x1d) = param_3;
    *(undefined1 *)((longlong)local_60 + 0xe9) = param_4;
    local_60[0x15] = param_5;
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FWeakObjectPtr::operator=(&local_38,0);
    local_48 = local_60;
    local_28 = 0;
    local_38 = *param_6;
    local_34 = param_6[1];
    local_30 = *(undefined8 *)(param_6 + 2);
    local_20 = 0;
    uStack_40 = param_1;
    puVar5 = (undefined8 *)FUN_14098bb80(local_60 + 9,&local_68,FUN_14098fb80);
    local_28 = *puVar5;
    puVar5 = (undefined8 *)FUN_14098bb80(local_60 + 0xc,&local_68,FUN_14098fb80);
    local_20 = *puVar5;
    local_58 = &local_60;
    local_50 = &local_48;
    FUN_14098bc40(&DAT_146290400,&local_68,&local_58,0);
    plVar1 = local_60;
    if (local_60[0x1c] == 0) {
      uVar3 = GetTransientPackage();
      lVar2 = NewObject<UPlayFabJsonObject>(uVar3);
      plVar1[0x1c] = lVar2;
    }
    else {
      FUN_1409926e0();
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Empty(plVar1 + 0x28,0);
    *(undefined4 *)(plVar1 + 0x32) = 0xffffffff;
    *(undefined1 *)(plVar1 + 0x13) = 0;
    (**(code **)(*local_60 + 0x278))(local_60,param_2);
  }
  return;
}



// FUNCTION 14098d2f0 FUN_14098d2f0 body=110 status=ok
// SIG undefined FUN_14098d2f0(void)

void FUN_14098d2f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0xc);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    if (*(longlong *)(lVar1 + 0xe0) == 0) {
      uVar2 = GetTransientPackage();
      uVar2 = NewObject<UPlayFabJsonObject>(uVar2);
      *(undefined8 *)(lVar1 + 0xe0) = uVar2;
    }
    else {
      FUN_1409926e0();
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Empty(lVar1 + 0x140,0);
    *(undefined4 *)(lVar1 + 400) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 14098d360 FUN_14098d360 body=96 status=ok
// SIG undefined FUN_14098d360(void)

void FUN_14098d360(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    uVar1 = GetTransientPackage();
    uVar1 = NewObject<UPlayFabJsonObject>(uVar1);
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
  }
  else {
    FUN_1409926e0();
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x140,0);
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 14098d3c0 ConstructJsonObject body=97 status=ok
// SIG undefined ConstructJsonObject(void)

void UPlayFabJsonObject::ConstructJsonObject(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = GetPrivateStaticClass();
  FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14098d430 FUN_14098d430 body=708 status=ok
// SIG undefined FUN_14098d430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14098d430(undefined8 param_1,ulonglong *param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 *local_78;
  uint local_70;
  int local_6c;
  undefined8 *local_68;
  longlong *plStack_60;
  undefined8 *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar9 = (longlong *)0x0;
  plVar8 = (longlong *)*param_2;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_6c = 0;
  plVar17 = (longlong *)((longlong)(int)param_2[1] & 0x1fffffffffffffff);
  if (plVar8 + (int)param_2[1] < plVar8) {
    plVar17 = plVar9;
  }
  plVar16 = plVar9;
  plVar18 = plVar9;
  if (plVar17 != (longlong *)0x0) {
    do {
      lVar12 = *plVar8;
      local_70 = (int)plVar16 + 1;
      if (local_6c < (int)local_70) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_78,plVar16);
      }
      local_78[(longlong)(int)plVar16 * 2] = *(undefined8 *)(lVar12 + 0x28);
      lVar12 = *(longlong *)(lVar12 + 0x30);
      (local_78 + (longlong)(int)plVar16 * 2)[1] = lVar12;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        UNLOCK();
      }
      plVar16 = (longlong *)(ulonglong)local_70;
      plVar8 = plVar8 + 1;
      plVar18 = (longlong *)((longlong)plVar18 + 1);
    } while (plVar18 != plVar17);
  }
  puVar7 = (undefined8 *)operator_new(0x20);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_AsObject_143f60698;
    puVar7[2] = 0;
    *(int *)(puVar7 + 3) = (int)plVar16;
    if ((int)plVar16 == 0) {
      *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
      *(undefined4 *)(puVar7 + 1) = 5;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7 + 2,plVar16,0);
      puVar14 = (undefined8 *)puVar7[2];
      puVar13 = local_78;
      do {
        *puVar14 = *puVar13;
        lVar12 = puVar13[1];
        puVar14[1] = lVar12;
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
          UNLOCK();
        }
        puVar14 = puVar14 + 2;
        puVar13 = puVar13 + 2;
        uVar15 = (int)plVar16 - 1;
        plVar16 = (longlong *)(ulonglong)uVar15;
      } while (uVar15 != 0);
      *(undefined4 *)(puVar7 + 1) = 5;
    }
  }
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f60d18;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    plVar8[2] = (longlong)puVar7;
    plVar9 = plVar8;
  }
  local_68 = puVar7;
  plStack_60 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_68,puVar7,puVar7);
  uVar10 = GetTransientPackage();
  FUN_1417846f0(uVar10,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_48 = 0;
  uVar11 = UVaRestJsonValue::GetPrivateStaticClass();
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  lVar12 = FUN_1417985e0(uVar11,uVar10,0,0);
  local_58 = local_68;
  plStack_50 = plStack_60;
  uVar4 = (undefined4)((ulonglong)local_68 >> 0x20);
  uVar5 = (undefined4)((ulonglong)plStack_60 >> 0x20);
  ppuVar1 = (undefined8 **)(lVar12 + 0x28);
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  if (&local_58 != ppuVar1) {
    local_58 = *ppuVar1;
    plStack_50 = *(longlong **)(lVar12 + 0x30);
    *(int *)ppuVar1 = (int)local_68;
    *(undefined4 *)(lVar12 + 0x2c) = uVar4;
    *(int *)(lVar12 + 0x30) = (int)plStack_60;
    *(undefined4 *)(lVar12 + 0x34) = uVar5;
    local_40 = (int)local_68;
    uStack_3c = uVar4;
    uStack_38 = (int)plStack_60;
    uStack_34 = uVar5;
  }
  plVar8 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_50 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_60 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
  return lVar12;
}



// FUNCTION 14098d700 FUN_14098d700 body=309 status=ok
// SIG undefined FUN_14098d700(void)

undefined8 FUN_14098d700(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)operator_new(0x18);
  local_10 = (longlong *)0x0;
  local_18 = local_10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined1 *)(plVar5 + 2) = param_2;
    *plVar5 = (longlong)&PTR_AsObject_143f60658;
    *(undefined4 *)(plVar5 + 1) = 4;
    local_18 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f60d18;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_18;
    local_10 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = UVaRestJsonValue::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  GenericApplication::SetAccessibleMessageHandler(uVar6,&local_18);
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
  return uVar6;
}



// FUNCTION 14098d840 FUN_14098d840 body=329 status=ok
// SIG undefined FUN_14098d840(void)

undefined8 FUN_14098d840(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *local_28;
  longlong *local_20;
  
  plVar5 = (longlong *)operator_new(0x18);
  local_20 = (longlong *)0x0;
  local_28 = local_20;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 3;
    *plVar5 = (longlong)&PTR_AsObject_143f60608;
    plVar5[2] = (longlong)(double)param_2;
    local_28 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f60d18;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_28;
    local_20 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = UVaRestJsonValue::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  GenericApplication::SetAccessibleMessageHandler(uVar6,&local_28);
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
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
  return uVar6;
}



// FUNCTION 14098d990 FUN_14098d990 body=342 status=ok
// SIG undefined FUN_14098d990(void)

undefined8 FUN_14098d990(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)operator_new(0x20);
  local_10 = (longlong *)0x0;
  local_18 = local_10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 0;
    *plVar5 = (longlong)&PTR_AsObject_143f606d8;
    plVar5[2] = *(longlong *)(param_2 + 0x28);
    lVar4 = *(longlong *)(param_2 + 0x30);
    plVar5[3] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar5 + 1) = 6;
    local_18 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f60d18;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_18;
    local_10 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = UVaRestJsonValue::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  GenericApplication::SetAccessibleMessageHandler(uVar6,&local_18);
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
  return uVar6;
}



// FUNCTION 14098daf0 FUN_14098daf0 body=329 status=ok
// SIG undefined FUN_14098daf0(void)

undefined8 FUN_14098daf0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *local_18;
  longlong *local_10;
  
  plVar4 = (longlong *)operator_new(0x20);
  plVar5 = (longlong *)0x0;
  plVar8 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 0;
    *plVar4 = (longlong)&PTR_AsObject_143f605c8;
    FString::FString(plVar4 + 2,param_2);
    *(undefined4 *)(plVar4 + 1) = 2;
    plVar8 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f60d18;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    plVar4[2] = (longlong)plVar8;
    plVar5 = plVar4;
  }
  local_18 = plVar8;
  local_10 = plVar5;
  SharedPointerInternals::EnableSharedFromThis(&local_18,plVar8,plVar8);
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = UVaRestJsonValue::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  GenericApplication::SetAccessibleMessageHandler(uVar6,&local_18);
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 14098dc40 ConstructJsonObject body=97 status=ok
// SIG undefined ConstructJsonObject(void)

void UPlayFabJsonObject::ConstructJsonObject(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UPropertyValue::GetPrivateStaticClass();
  FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14098dcb0 FUN_14098dcb0 body=138 status=ok
// SIG undefined FUN_14098dcb0(void)

void FUN_14098dcb0(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UPropertyValue::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  *(undefined1 *)(lVar3 + 0xe9) = param_3;
  *(undefined1 *)(lVar3 + 0xe8) = param_2;
  return;
}



// FUNCTION 14098dd40 FUN_14098dd40 body=462 status=ok
// SIG undefined FUN_14098dd40(void)

undefined8 FUN_14098dd40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  undefined8 uVar9;
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(int *)(param_2 + 1) == 0) {
    psVar8 = &DAT_143f3eda8;
  }
  else {
    psVar8 = (short *)*param_2;
  }
  local_38 = 0;
  local_30 = 0;
  if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar8[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar8,(longlong)(int)uVar6 * 2);
  }
  lVar7 = operator_new(0x88);
  if (lVar7 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FJsonStringReader::FJsonStringReader(lVar7,&local_38);
  }
  plStack_20 = (longlong *)operator_new(0x18);
  if (plStack_20 != (longlong *)0x0) {
    *(undefined4 *)(plStack_20 + 1) = 1;
    *plStack_20 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plStack_20 + 0xc) = 1;
    plStack_20[2] = local_28;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  plVar4 = plStack_20;
  local_18 = local_28;
  plStack_10 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  cVar5 = FUN_1404a7f60(&local_18,param_1 + 0x28);
  if ((cVar5 == '\0') || (*(longlong *)(param_1 + 0x28) == 0)) {
    FUN_1409926e0(param_1);
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  plVar4 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 14098df10 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
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



// FUNCTION 14098df90 FUN_14098df90 body=712 status=ok
// SIG undefined FUN_14098df90(void)

longlong * FUN_14098df90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_78 = 0;
    local_70 = 0;
    plVar4 = (longlong *)operator_new(0x40);
    plVar7 = plVar6;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0xa8);
      if (plVar5 != (longlong *)0x0) {
        FArchive::FArchive(plVar5);
        plVar5[0x12] = 0;
        plVar5[0x14] = 0;
        *plVar5 = (longlong)&PTR_FUN_143f4a100;
        plVar5[0x13] = (longlong)(plVar4 + 5);
        FArchive::SetIsSaving(plVar5,1);
        FArchive::SetIsPersistent(plVar5,0);
        plVar7 = plVar5;
      }
      plVar4[1] = (longlong)plVar7;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *plVar4 = (longlong)&PTR__scalar_deleting_destructor__143f607b8;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = (longlong)&local_78;
      plVar7 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar7;
      plVar6 = plVar4;
    }
    local_68 = plVar7;
    plStack_60 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_68,plVar7,plVar7);
    plVar6 = plStack_60;
    local_48 = local_68;
    plStack_40 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_60 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_60)(plStack_60);
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
    plVar6 = *(longlong **)(param_1 + 0x30);
    local_38 = *(undefined8 *)(param_1 + 0x28);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_30 = plVar6;
    local_50 = (longlong *)FUN_1404a9830(&local_38);
    local_58 = local_50 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
    FUN_1406c30a0(&local_58,&local_48,1);
    plVar7 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
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
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    plVar6 = plStack_40;
    *param_2 = local_78;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_70;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_70._4_4_;
    local_70 = 0;
    local_78 = 0;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_40 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14098e260 EncodeJsonToSingleString body=123 status=ok
// SIG undefined EncodeJsonToSingleString(void)

undefined8 UVaRestJsonObject::EncodeJsonToSingleString(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  FUN_14098df90();
  FString::Replace(param_2,local_18,&DAT_1441780d0,&DAT_144177fd4,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FString::Replace(param_2,local_18,&DAT_1441780d8,&DAT_14417804c,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14098e2e0 FUN_14098e2e0 body=927 status=ok
// SIG undefined FUN_14098e2e0(void)

longlong * FUN_14098e2e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  void *pvVar12;
  void *pvVar13;
  int iVar14;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  longlong *local_50;
  void *pvStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  *param_2 = 0;
  local_78 = (longlong *)(param_1 + 0x140);
  param_2[1] = 0;
  iVar7 = *(int *)(param_1 + 0x168);
  uStack_90 = (uint *)(param_1 + 0x150);
  local_98 = (void *)0x100000000;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar7 != 0) {
    puVar11 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar11 = uStack_90;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    iVar5 = 0;
    while (uVar4 == 0) {
      iStack_80 = iStack_80 + 0x20;
      uVar3 = (ulonglong)local_98 >> 0x20;
      local_98 = (void *)CONCAT44((int)uVar3,iVar5 + 1);
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14098e3af;
      uVar4 = puVar11[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_98 = (void *)CONCAT44(uVar4,SUB84(local_98,0));
    if (uVar4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_84 = (iStack_80 - iVar5) + 0x1f;
    if (iVar7 < iStack_84) {
LAB_14098e3af:
      iStack_84 = iVar7;
    }
  }
  local_88 = 0xffffffff;
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_84;
  iStack_30 = iStack_80;
  pvStack_48 = local_98;
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_84;
  uStack_70 = local_98;
  local_58 = iStack_80;
  local_68 = uStack_90;
  local_50 = local_78;
  puStack_40 = uStack_90;
  if (iStack_84 < iVar7) {
    do {
      local_a8 = (void *)0x0;
      iVar7 = *(int *)(*local_78 + 8 + (longlong)iStack_5c * 0x28);
      puVar1 = (undefined8 *)(*local_78 + (longlong)iStack_5c * 0x28);
      pvVar2 = (void *)*puVar1;
      local_a0._0_4_ = iVar7;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,(3 - (uint)(iVar7 != 0)) + iVar7,0)
      ;
      pvVar12 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,pvVar2,(longlong)iVar7 * 2);
      iVar5 = (int)local_a0;
      lVar9 = (longlong)(int)local_a0;
      local_a0._0_4_ = (3 - (uint)((int)local_a0 != 0)) + (int)local_a0;
      iVar14 = local_a0._4_4_;
      iVar7 = (int)local_a0;
      if (local_a0._4_4_ < (int)local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar5);
        pvVar12 = local_a8;
        iVar14 = local_a0._4_4_;
        iVar7 = (int)local_a0;
      }
      iVar10 = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      lVar9 = (lVar9 - (ulonglong)(iVar5 != 0)) * 2;
      *(undefined4 *)(lVar9 + (longlong)pvVar12) = 0x20003a;
      *(undefined2 *)(lVar9 + 4 + (longlong)pvVar12) = 0;
      iVar5 = *(int *)(puVar1 + 3);
      if (iVar7 < 2) {
        local_98 = (void *)0x0;
        uStack_90 = (uint *)CONCAT44(uStack_90._4_4_,iVar5);
        pvVar2 = (void *)puVar1[2];
        if (iVar5 == 0) {
          pvVar13 = (void *)0x0;
          iVar5 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar5,0);
          pvVar13 = local_98;
          _guard_xfg_dispatch_icall_nop(local_98,pvVar2,(longlong)iVar5 * 2);
          iVar10 = uStack_90._4_4_;
          iVar5 = (int)uStack_90;
        }
      }
      else {
        iVar8 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar8 = iVar10;
        }
        if ((iVar7 != 0) || (iVar5 = 1, iVar8 == 0)) {
          iVar5 = iVar10;
        }
        iVar5 = iVar5 + iVar8 + iVar7;
        local_b8 = pvVar12;
        local_b0._4_4_ = iVar14;
        if (iVar14 < iVar5) {
          local_b0._0_4_ = iVar7;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,iVar5);
          iVar7 = (int)local_b0;
        }
        pvVar2 = (void *)puVar1[2];
        pvVar13 = local_b8;
        iVar10 = local_b0._4_4_;
        iVar5 = iVar7;
        if (iVar8 != 0) {
          local_b0._0_4_ = iVar7 + (uint)(iVar7 == 0) + iVar8;
          if (local_b0._4_4_ < (int)local_b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
          }
          iVar10 = local_b0._4_4_;
          iVar5 = (int)local_b0;
          pvVar13 = local_b8;
          pvVar12 = (void *)((longlong)local_b8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar12,pvVar2,(longlong)iVar8 * 2);
          *(undefined2 *)((longlong)pvVar12 + (longlong)iVar8 * 2) = 0;
        }
        local_b8 = (void *)0x0;
        local_b0 = 0;
        pvVar12 = (void *)0x0;
      }
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
      }
      local_98 = (void *)0x0;
      plVar6 = (longlong *)((longlong)iVar7 * 0x10 + *param_2);
      uStack_90 = (uint *)0x0;
      *plVar6 = (longlong)pvVar13;
      *(int *)(plVar6 + 1) = iVar5;
      *(int *)((longlong)plVar6 + 0xc) = iVar10;
      if (pvVar12 != (void *)0x0) {
        FMemory::Free(pvVar12);
      }
      uStack_60 = uStack_60 & ~uStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  return param_2;
}



// FUNCTION 14098e680 FUN_14098e680 body=535 status=ok
// SIG undefined FUN_14098e680(void)

longlong * FUN_14098e680(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  longlong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(*(undefined8 *)(param_1 + 0x28),local_res8);
  local_68 = 0;
  local_60 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(int *)(param_3 + 8) < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar5 = (longlong *)FUN_1416b2a60(*(longlong *)(param_1 + 0x28),param_3);
    local_58 = (undefined8 *)0x0;
    iVar8 = (int)plVar5[1];
    lVar10 = *plVar5;
    local_50 = iVar8;
    if (iVar8 == 0) {
      local_4c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar8,0);
      puVar9 = local_58;
      do {
        *puVar9 = *(undefined8 *)((lVar10 - (longlong)local_58) + (longlong)puVar9);
        lVar3 = *(longlong *)((lVar10 - (longlong)local_58) + 8 + (longlong)puVar9);
        puVar9[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar11 = local_58 + (longlong)local_50 * 2;
    for (puVar9 = local_58; puVar9 != puVar11; puVar9 = puVar9 + 2) {
      plVar5 = (longlong *)puVar9[1];
      local_48 = *puVar9;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_40 = plVar5;
      uVar6 = GetTransientPackage();
      FUN_1417846f0(uVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = UVaRestJsonValue::GetPrivateStaticClass();
      uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
      GenericApplication::SetAccessibleMessageHandler(uVar6,&local_48);
      uVar4 = local_60;
      lVar10 = (longlong)(int)local_60;
      iVar8 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar8);
      if (local_60._4_4_ < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_68,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_68 + lVar10 * 8) = uVar6;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    *param_2 = local_68;
    *(int *)(param_2 + 1) = (int)local_60;
    local_60._4_4_ = (int)(local_60 >> 0x20);
    *(int *)((longlong)param_2 + 0xc) = local_60._4_4_;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return param_2;
}



// FUNCTION 14098e8a0 FUN_14098e8a0 body=366 status=ok
// SIG undefined FUN_14098e8a0(void)

ulonglong * FUN_14098e8a0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  ulonglong *local_res10;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  
  local_res10 = param_2;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(*(undefined8 *)(param_1 + 0x28),local_res8);
  uVar11 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(int *)(param_3 + 8) < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar4 = (longlong *)FUN_1416b2a60(*(longlong *)(param_1 + 0x28),param_3);
    local_48 = (undefined8 *)0x0;
    iVar6 = (int)plVar4[1];
    lVar1 = *plVar4;
    local_40 = iVar6;
    if (iVar6 == 0) {
      local_3c = 0;
      uVar9 = uVar11;
      uVar12 = uVar11;
      uVar13 = uVar11;
      puVar5 = local_48;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar6,0);
      puVar5 = local_48;
      do {
        *puVar5 = *(undefined8 *)((longlong)puVar5 + (lVar1 - (longlong)local_48));
        lVar2 = *(longlong *)((longlong)puVar5 + (lVar1 - (longlong)local_48) + 8);
        puVar5[1] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        puVar5 = puVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar12 = local_50 >> 0x20;
      uVar9 = local_50 & 0xffffffff;
      uVar13 = local_58;
      iVar6 = local_40;
      puVar5 = local_48;
    }
    while( true ) {
      param_2 = local_res10;
      iVar10 = (int)uVar11;
      iVar7 = (int)uVar9;
      if ((iVar10 < 0) || (iVar6 <= iVar10)) break;
      uVar3 = FJsonValue::AsBool(puVar5[(longlong)iVar10 * 2]);
      uVar8 = iVar7 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar8);
      if ((int)uVar12 < (int)uVar8) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,uVar9);
        uVar12 = local_50 >> 0x20;
        uVar13 = local_58;
        uVar8 = (uint)local_50;
      }
      *(undefined1 *)((longlong)iVar7 + uVar13) = uVar3;
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar9 = (ulonglong)uVar8;
    }
    *local_res10 = uVar13;
    *(int *)(local_res10 + 1) = iVar7;
    *(int *)((longlong)local_res10 + 0xc) = (int)uVar12;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
  }
  return param_2;
}



// FUNCTION 14098ea10 GetBoolField body=150 status=ok
// SIG undefined GetBoolField(void)

ulonglong UVaRestJsonObject::GetBoolField(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  int local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8);
    plVar3 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar3 = (longlong *)(*plVar1 + (longlong)local_res8[0] * 0x28);
    }
    in_RAX = plVar3 + 2;
    if (plVar3 == (longlong *)0x0) {
      in_RAX = (longlong *)0x0;
    }
    if (((in_RAX != (longlong *)0x0) && (*in_RAX != 0)) && (*(int *)(*in_RAX + 8) == 4)) {
      uVar2 = FUN_1416b2ba0(*(undefined8 *)(param_1 + 0x28),param_2);
      return uVar2;
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14098eab0 FUN_14098eab0 body=468 status=ok
// SIG undefined FUN_14098eab0(void)

longlong * FUN_14098eab0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int local_res8 [2];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  plVar9 = (longlong *)0x0;
  local_res8[0] = 0;
  plVar7 = *(longlong **)(param_1 + 0x28);
  if ((plVar7 != (longlong *)0x0) && (1 < *(int *)(param_2 + 8))) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar7,local_res8,param_2);
    plVar10 = plVar9;
    if (local_res8[0] != -1) {
      plVar10 = (longlong *)(*plVar7 + (longlong)local_res8[0] * 0x28);
    }
    plVar7 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar7 = plVar9;
    }
    if ((plVar7 == (longlong *)0x0) || (plVar10 = (longlong *)*plVar7, plVar10 == (longlong *)0x0))
    {
      plVar7 = &local_28;
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      bVar5 = false;
      bVar4 = true;
      plVar10 = plVar9;
    }
    else {
      local_40 = (longlong *)plVar7[1];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      plVar7 = &local_48;
      bVar5 = true;
      bVar4 = false;
      local_48 = (longlong)plVar10;
    }
    plVar3 = (longlong *)plVar7[1];
    plVar7[1] = 0;
    local_30 = plVar3;
    *plVar7 = 0;
    plVar7 = plStack_20;
    local_38 = plVar10;
    if ((bVar4) && (plStack_20 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
    plVar7 = local_40;
    if ((bVar5) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      uVar8 = GetTransientPackage();
      plVar9 = (longlong *)NewObject<UVaRestJsonValue>(uVar8);
      GenericApplication::SetAccessibleMessageHandler(plVar9,&local_38);
    }
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_30 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    return plVar9;
  }
  return (longlong *)0x0;
}



// FUNCTION 14098ec90 GetFieldNames body=87 status=ok
// SIG undefined GetFieldNames(void)

undefined8 * UPlayFabJsonObject::GetFieldNames(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  TMapBase<FString,TSharedPtr<FLocMetadataValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,0>,0>_>
  ::GetKeys<FDefaultAllocator>(*(longlong *)(param_1 + 0x28),&local_18);
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_10;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_10._4_4_;
  return param_2;
}



// FUNCTION 14098ecf0 FUN_14098ecf0 body=377 status=ok
// SIG undefined FUN_14098ecf0(void)

ulonglong * FUN_14098ecf0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  undefined1 local_res8 [8];
  ulonglong *local_res10;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  
  local_res10 = param_2;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(*(undefined8 *)(param_1 + 0x28),local_res8);
  uVar10 = 0;
  local_68 = 0;
  local_60 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(int *)(param_3 + 8) < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar3 = (longlong *)FUN_1416b2a60(*(longlong *)(param_1 + 0x28),param_3);
    local_58 = (undefined8 *)0x0;
    iVar5 = (int)plVar3[1];
    lVar1 = *plVar3;
    local_50 = iVar5;
    if (iVar5 == 0) {
      local_4c = 0;
      uVar8 = uVar10;
      uVar11 = uVar10;
      uVar12 = uVar10;
      puVar4 = local_58;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar5,0);
      puVar4 = local_58;
      do {
        *puVar4 = *(undefined8 *)((lVar1 - (longlong)local_58) + (longlong)puVar4);
        lVar2 = *(longlong *)((lVar1 - (longlong)local_58) + 8 + (longlong)puVar4);
        puVar4[1] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar11 = local_60 >> 0x20;
      uVar8 = local_60 & 0xffffffff;
      uVar12 = local_68;
      iVar5 = local_50;
      puVar4 = local_58;
    }
    while( true ) {
      param_2 = local_res10;
      iVar9 = (int)uVar10;
      iVar6 = (int)uVar8;
      if ((iVar9 < 0) || (iVar5 <= iVar9)) break;
      dVar13 = (double)FJsonValue::AsNumber(puVar4[(longlong)iVar9 * 2]);
      uVar7 = iVar6 + 1;
      local_60 = CONCAT44(local_60._4_4_,uVar7);
      if ((int)uVar11 < (int)uVar7) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_68,uVar8);
        uVar11 = local_60 >> 0x20;
        uVar12 = local_68;
        uVar7 = (uint)local_60;
      }
      *(float *)(uVar12 + (longlong)iVar6 * 4) = (float)dVar13;
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar8 = (ulonglong)uVar7;
    }
    *local_res10 = uVar12;
    *(int *)(local_res10 + 1) = iVar6;
    *(int *)((longlong)local_res10 + 0xc) = (int)uVar11;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return param_2;
}



// FUNCTION 14098ee70 GetNumberField body=156 status=ok
// SIG undefined GetNumberField(void)

float UVaRestJsonObject::GetNumberField(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  int local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8);
    plVar2 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar2 = (longlong *)(*plVar1 + (longlong)local_res8[0] * 0x28);
    }
    plVar1 = plVar2 + 2;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(int *)(*plVar1 + 8) == 3)) {
      dVar3 = (double)FJsonObject::GetNumberField(*(undefined8 *)(param_1 + 0x28),param_2);
      return (float)dVar3;
    }
  }
  return 0.0;
}



// FUNCTION 14098ef10 FUN_14098ef10 body=624 status=ok
// SIG undefined FUN_14098ef10(void)

longlong * FUN_14098ef10(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  longlong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(*(undefined8 *)(param_1 + 0x28),local_res8);
  local_68 = 0;
  local_60 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(int *)(param_3 + 8) < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar6 = (longlong *)FUN_1416b2a60(*(longlong *)(param_1 + 0x28),param_3);
    local_58 = (undefined8 *)0x0;
    iVar10 = (int)plVar6[1];
    lVar12 = *plVar6;
    local_50 = iVar10;
    if (iVar10 == 0) {
      local_4c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar10,0);
      puVar11 = local_58;
      do {
        *puVar11 = *(undefined8 *)((lVar12 - (longlong)local_58) + (longlong)puVar11);
        lVar3 = *(longlong *)((lVar12 - (longlong)local_58) + 8 + (longlong)puVar11);
        puVar11[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        puVar11 = puVar11 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    puVar13 = local_58 + (longlong)local_50 * 2;
    for (puVar11 = local_58; puVar11 != puVar13; puVar11 = puVar11 + 2) {
      plVar6 = (longlong *)puVar11[1];
      puVar7 = (undefined8 *)*puVar11;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      puVar7 = (undefined8 *)(**(code **)*puVar7)();
      plVar4 = (longlong *)puVar7[1];
      local_48 = *puVar7;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_40 = plVar4;
      uVar8 = GetTransientPackage();
      FUN_1417846f0(uVar8,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar9 = UPlayFabJsonObject::GetPrivateStaticClass();
      uVar8 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
      GenericApplication::SetAccessibleMessageHandler(uVar8,&local_48);
      uVar5 = local_60;
      lVar12 = (longlong)(int)local_60;
      iVar10 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar10);
      if (local_60._4_4_ < iVar10) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_68,uVar5 & 0xffffffff);
      }
      *(undefined8 *)(local_68 + lVar12 * 8) = uVar8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar12 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
    *param_2 = local_68;
    *(int *)(param_2 + 1) = (int)local_60;
    local_60._4_4_ = (int)(local_60 >> 0x20);
    *(int *)((longlong)param_2 + 0xc) = local_60._4_4_;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return param_2;
}



// FUNCTION 14098f180 FUN_14098f180 body=286 status=ok
// SIG undefined FUN_14098f180(void)

undefined8 FUN_14098f180(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined8 local_18;
  longlong *local_10;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar4,local_res8);
    plVar7 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar7 = (longlong *)(*plVar4 + (longlong)local_res8[0] * 0x28);
    }
    plVar4 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    if (((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) && (*(int *)(*plVar4 + 8) == 6)) {
      puVar5 = (undefined8 *)FUN_1416b2cb0(*(undefined8 *)(param_1 + 0x28),param_2);
      plVar4 = (longlong *)puVar5[1];
      local_18 = *puVar5;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_10 = plVar4;
      uVar6 = GetTransientPackage();
      uVar6 = NewObject<UPlayFabJsonObject>(uVar6);
      GenericApplication::SetAccessibleMessageHandler(uVar6,&local_18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar4)(plVar4);
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
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 14098f2a0 GetFadeHUD body=8 status=ok
// SIG undefined GetFadeHUD(void)

undefined8 UUGMenuManager::GetFadeHUD(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// FUNCTION 14098f2b0 FUN_14098f2b0 body=7 status=ok
// SIG undefined FUN_14098f2b0(void)

undefined4 FUN_14098f2b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 400);
}



// FUNCTION 14098f2c0 FUN_14098f2c0 body=142 status=ok
// SIG undefined FUN_14098f2c0(void)

undefined8 * FUN_14098f2c0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x140),local_res8);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x140) + (longlong)local_res8[0] * 0x28;
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    FString::operator=(param_2);
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14098f350 GetStatusEffectOriginStats body=8 status=ok
// SIG undefined GetStatusEffectOriginStats(void)

undefined8 UWeapon::GetStatusEffectOriginStats(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// FUNCTION 14098f360 FUN_14098f360 body=17 status=ok
// SIG undefined FUN_14098f360(void)

void FUN_14098f360(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014098f36a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0xa0))();
  return;
}



// FUNCTION 14098f380 FUN_14098f380 body=435 status=ok
// SIG undefined FUN_14098f380(void)

ulonglong * FUN_14098f380(longlong param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  ulonglong *local_res10;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  
  local_res10 = param_2;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(*(undefined8 *)(param_1 + 0x28),local_res8);
  uVar8 = 0;
  local_68 = 0;
  local_60 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(int *)(param_3 + 8) < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar3 = (longlong *)FUN_1416b2a60(*(longlong *)(param_1 + 0x28),param_3);
    local_58 = (undefined8 *)0x0;
    iVar12 = (int)plVar3[1];
    lVar1 = *plVar3;
    local_50 = iVar12;
    if (iVar12 == 0) {
      local_4c = 0;
      uVar11 = uVar8;
      uVar13 = uVar8;
      uVar14 = uVar8;
      puVar5 = local_58;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar12,0);
      puVar5 = local_58;
      do {
        *puVar5 = *(undefined8 *)((lVar1 - (longlong)local_58) + (longlong)puVar5);
        lVar2 = *(longlong *)((lVar1 - (longlong)local_58) + 8 + (longlong)puVar5);
        puVar5[1] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        puVar5 = puVar5 + 2;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      uVar13 = local_60 >> 0x20;
      uVar11 = local_60 & 0xffffffff;
      uVar14 = local_68;
      iVar12 = local_50;
      puVar5 = local_58;
    }
    while( true ) {
      param_2 = local_res10;
      iVar7 = (int)uVar8;
      iVar9 = (int)uVar11;
      if ((iVar7 < 0) || (iVar12 <= iVar7)) break;
      puVar4 = (undefined8 *)FJsonValue::AsString(puVar5[(longlong)iVar7 * 2],local_48);
      uVar10 = iVar9 + 1;
      local_60 = CONCAT44(local_60._4_4_,uVar10);
      if ((int)uVar13 < (int)uVar10) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,uVar11);
        uVar13 = local_60 >> 0x20;
        uVar14 = local_68;
        uVar10 = (uint)local_60;
      }
      puVar6 = (undefined8 *)((longlong)iVar9 * 0x10 + uVar14);
      *puVar6 = 0;
      *puVar6 = *puVar4;
      *puVar4 = 0;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
      puVar4[1] = 0;
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar11 = (ulonglong)uVar10;
    }
    *local_res10 = uVar14;
    *(int *)(local_res10 + 1) = iVar9;
    *(int *)((longlong)local_res10 + 0xc) = (int)uVar13;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return param_2;
}



// FUNCTION 14098f540 GetStringField body=154 status=ok
// SIG undefined GetStringField(void)

undefined8 *
UVaRestJsonObject::GetStringField(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8);
    plVar2 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar2 = (longlong *)(*plVar1 + (longlong)local_res8[0] * 0x28);
    }
    plVar1 = plVar2 + 2;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(int *)(*plVar1 + 8) == 2)) {
      FJsonObject::GetStringField(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14098f5e0 FUN_14098f5e0 body=76 status=ok
// SIG undefined FUN_14098f5e0(void)

undefined8 FUN_14098f5e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    switch(*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8)) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      return 6;
    }
  }
  return 0;
}



// FUNCTION 14098f650 FUN_14098f650 body=502 status=ok
// SIG undefined FUN_14098f650(void)

undefined8 * FUN_14098f650(longlong param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    switch(*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8)) {
    case 0:
      *param_2 = 0;
      param_2[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      pwVar1 = L"None";
      break;
    case 1:
      *param_2 = 0;
      param_2[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      pwVar1 = L"Null";
      break;
    case 2:
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"String",0xe);
      return param_2;
    case 3:
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"Number",0xe);
      return param_2;
    case 4:
      *param_2 = 0;
      param_2[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"Boolean",0x10);
      return param_2;
    case 5:
      *param_2 = 0;
      param_2[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"Array",0xc);
      return param_2;
    case 6:
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"Object",0xe);
      return param_2;
    default:
      *param_2 = 0;
      param_2[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      pwVar1 = L"None";
    }
    FGenericPlatformString::Memcpy(*param_2,pwVar1,10);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_2,5,&DAT_144178c38,5,0x3f);
  return param_2;
}



// FUNCTION 14098f870 FUN_14098f870 body=30 status=ok
// SIG undefined FUN_14098f870(void)

undefined8 FUN_14098f870(longlong param_1,undefined8 param_2)

{
  (**(code **)**(undefined8 **)(param_1 + 0x1a8))();
  return param_2;
}



// FUNCTION 14098f890 HasField body=103 status=ok
// SIG undefined HasField(void)

ulonglong UVaRestJsonObject::HasField(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *in_RAX;
  longlong *plVar2;
  int local_res8 [8];
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((plVar1 != (longlong *)0x0) && (1 < *(int *)(param_2 + 8))) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8);
    plVar2 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar2 = (longlong *)(*plVar1 + (longlong)local_res8[0] * 0x28);
    }
    in_RAX = plVar2 + 2;
    if (plVar2 == (longlong *)0x0) {
      in_RAX = (longlong *)0x0;
    }
    if ((in_RAX != (longlong *)0x0) && (*in_RAX != 0)) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14098f900 FUN_14098f900 body=52 status=ok
// SIG undefined FUN_14098f900(void)

ulonglong FUN_14098f900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x78);
    plVar1 = plVar2 + *(int *)(param_1 + 0x80);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 14098f940 FUN_14098f940 body=39 status=ok
// SIG undefined FUN_14098f940(void)

void FUN_14098f940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1441796d0;
    return;
  }
  return;
}



// FUNCTION 14098f970 FUN_14098f970 body=20 status=ok
// SIG undefined FUN_14098f970(void)

undefined8 FUN_14098f970(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return 1;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(uint *)(lVar1 + 8) < 2);
}



// FUNCTION 14098f990 FUN_14098f990 body=478 status=ok
// SIG undefined FUN_14098f990(void)

void FUN_14098f990(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int local_res10;
  uint local_res20;
  longlong *local_48;
  ulonglong local_40;
  
  uVar5 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x28) == 0) {
    local_res20 = 0;
  }
  else {
    TMapBase<FString,TSharedPtr<FLocMetadataValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,0>,0>_>
    ::GetKeys<FDefaultAllocator>();
    uVar5 = local_40 & 0xffffffff;
    local_res20 = (uint)local_40;
  }
  plVar2 = local_48;
  plVar8 = local_48 + (longlong)(int)uVar5 * 2;
  plVar7 = local_48;
  if (local_48 != plVar8) {
    do {
      iVar1 = (int)plVar7[1];
      _Src = (void *)*plVar7;
      local_48 = (longlong *)0x0;
      local_40 = CONCAT44(local_40._4_4_,iVar1);
      if (iVar1 == 0) {
        local_40 = 0;
        local_40._0_4_ = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1,0);
        _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar1 * 2);
      }
      if (((param_3 == '\0') && (plVar3 = *(longlong **)(param_1 + 0x28), plVar3 != (longlong *)0x0)
          ) && (1 < (int)(uint)local_40)) {
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(plVar3);
        local_res10 = (int)param_2;
        if (local_res10 == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = *plVar3 + (longlong)local_res10 * 0x28;
        }
        plVar3 = (longlong *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          plVar3 = (longlong *)0x0;
        }
        if ((plVar3 == (longlong *)0x0) || (*plVar3 == 0)) goto LAB_14098fac4;
      }
      else {
LAB_14098fac4:
        FUN_14098eab0(param_2);
        if ((*(longlong *)(param_1 + 0x28) != 0) && (1 < (int)(uint)local_40)) {
          FJsonObject::SetField();
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
    uVar5 = (ulonglong)local_res20;
  }
  uVar6 = (uint)uVar5;
  plVar7 = plVar2;
  while (uVar6 != 0) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
    uVar6 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar6;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
    return;
  }
  return;
}



// FUNCTION 14098fb80 FUN_14098fb80 body=290 status=ok
// SIG undefined FUN_14098fb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14098fb80(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong local_res10;
  
  piVar1 = (int *)TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
                  ::FindId(&DAT_146290400,&local_res10,param_1);
  if (*piVar1 != -1) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146290400,&local_res10,param_1);
    puVar5 = (undefined8 *)0x0;
    if ((int)local_res10 != -1) {
      puVar5 = (undefined8 *)((longlong)(int)local_res10 * 0x40 + _DAT_146290400);
    }
    puVar6 = puVar5 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    TBaseMulticastDelegate<void>::Remove(param_1 + 0x48,puVar6[4]);
    TBaseMulticastDelegate<void>::Remove(param_1 + 0x60,puVar6[5]);
    local_res10 = 0;
    if (((puVar6[3] != 0) && (lVar2 = FWeakObjectPtr::Get(puVar6 + 2), lVar2 != 0)) &&
       (lVar2 = UObject::FindFunction(lVar2,puVar6[3]), lVar2 != 0)) {
      local_res10 = param_1;
      plVar3 = (longlong *)FWeakObjectPtr::Get(puVar6 + 2);
      uVar4 = FUN_14178ac60(plVar3,puVar6[3]);
      (**(code **)(*plVar3 + 0x208))(plVar3,uVar4,&local_res10);
    }
    puVar6[1] = 0;
    *puVar6 = 0;
    TSet<TTuple<FRHIShaderResourceView_*,FShaderResourceKey>,TDefaultMapHashableKeyFuncs<FRHIShaderResourceView_*,FShaderResourceKey,0>,FDefaultSetAllocator>
    ::Remove(&DAT_146290400,param_1);
  }
  return;
}



// FUNCTION 14098fcb0 FUN_14098fcb0 body=1683 status=ok
// SIG undefined FUN_14098fcb0(void)

void FUN_14098fcb0(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_res18;
  wchar_t *local_118;
  int local_110;
  undefined4 local_10c;
  wchar_t *local_108;
  ulonglong local_100;
  wchar_t *local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  longlong *local_c8 [2];
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  int local_78;
  longlong *local_70;
  wchar_t **local_68;
  wchar_t **local_60;
  longlong local_58 [3];
  
  plVar13 = param_1 + 0x1c;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_c8[0] = plVar13;
  if (*plVar13 == 0) {
    uVar6 = GetTransientPackage();
    lVar12 = NewObject<UPlayFabJsonObject>(uVar6);
    *plVar13 = lVar12;
  }
  else {
    FUN_1409926e0();
  }
  local_b8 = param_1 + 0x28;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(local_b8,0);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  if ((longlong *)*param_3 != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    *(undefined4 *)(param_1 + 0x32) = uVar3;
  }
  if ((param_4 == '\0') || (plVar8 = (longlong *)*param_3, plVar8 == (longlong *)0x0)) {
    local_c8[0] = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 7,local_c8);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0xc,param_1);
    plVar13 = *(longlong **)(param_2 + 8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar13 + 1;
      lVar12 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = (longlong *)param_3[1];
  }
  else {
    plVar7 = (longlong *)(**(code **)(*plVar8 + 0x48))(plVar8,local_58);
    plVar8 = param_1 + 0x11;
    local_a8 = plVar8;
    if (plVar8 != plVar7) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      *plVar8 = *plVar7;
      *plVar7 = 0;
      *(int *)(param_1 + 0x12) = (int)plVar7[1];
      *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)plVar7 + 0xc);
      plVar7[1] = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,&local_80);
    plVar18 = local_80 + (longlong)local_78 * 2;
    local_88 = local_80;
    plVar7 = local_80;
    local_70 = plVar18;
    if (local_80 != plVar18) {
      do {
        local_110 = (int)plVar7[1];
        lVar12 = (longlong)local_110;
        _Src = (void *)*plVar7;
        local_118 = (wchar_t *)0x0;
        local_88 = plVar7;
        if (local_110 == 0) {
          local_10c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_110,0);
          _guard_xfg_dispatch_icall_nop(local_118,_Src,lVar12 * 2);
        }
        local_d8 = (wchar_t *)0x0;
        local_d0 = 0;
        local_e8 = (wchar_t *)0x0;
        local_e0 = 0;
        local_98 = 0;
        local_90 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        lVar12 = local_98;
        FGenericPlatformString::Memcpy(local_98,&DAT_144178044,6);
        iVar11 = (int)local_90;
        iVar4 = FUN_141592950(&local_118);
        if (iVar4 < 0) {
          bVar2 = false;
        }
        else {
          if (local_110 == 0) {
            pwVar17 = L"";
            iVar9 = 0;
          }
          else {
            iVar9 = local_110 + -1;
            pwVar17 = local_118;
          }
          local_108 = (wchar_t *)0x0;
          if (iVar4 < iVar9) {
            iVar9 = iVar4;
          }
          uVar14 = iVar9 + 1;
          if (iVar9 == 0) {
            uVar14 = 0;
          }
          local_100 = (ulonglong)uVar14;
          pwVar16 = local_108;
          if (0 < (int)uVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
            pwVar16 = local_108;
            uVar14 = (uint)local_100;
            if (0 < (int)(uint)local_100) {
              wcsncpy(local_108,pwVar17,(longlong)iVar9);
              pwVar16[iVar9] = L'\0';
            }
          }
          if (local_d8 != (wchar_t *)0x0) {
            FMemory::Free(local_d8);
          }
          iVar9 = iVar11 + -1;
          local_108 = (wchar_t *)0x0;
          local_d0 = CONCAT44((int)(local_100 >> 0x20),uVar14);
          local_100 = 0;
          if (iVar11 == 0) {
            iVar9 = 0;
          }
          uVar5 = iVar9 + iVar4;
          pwVar17 = (wchar_t *)0x0;
          uVar14 = uVar5 + 0x7fffffff;
          uVar15 = local_110 - 1;
          if (local_110 == 0) {
            uVar15 = 0;
          }
          if (uVar5 < uVar15) {
            uVar15 = uVar5;
          }
          uVar5 = local_110 - 1;
          if (local_110 == 0) {
            uVar5 = 0;
          }
          uVar10 = uVar15;
          if ((uVar15 <= uVar14) && (uVar10 = uVar5, uVar14 < uVar5)) {
            uVar10 = uVar14;
          }
          local_f8 = (wchar_t *)0x0;
          pwVar19 = L"";
          if (local_110 != 0) {
            pwVar19 = local_118;
          }
          iVar11 = uVar10 - uVar15;
          uVar14 = iVar11 + 1;
          if (iVar11 == 0) {
            uVar14 = 0;
          }
          local_f0 = (ulonglong)uVar14;
          local_d8 = pwVar16;
          if (0 < (int)uVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
            pwVar17 = local_f8;
            uVar14 = (uint)local_f0;
            if (0 < (int)(uint)local_f0) {
              wcsncpy(local_f8,pwVar19 + (int)uVar15,(longlong)iVar11);
              pwVar17[iVar11] = L'\0';
            }
          }
          if (local_e8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          bVar2 = true;
          local_e0 = CONCAT44(local_f0._4_4_,uVar14);
          local_f0 = 0;
          local_f8 = (wchar_t *)0x0;
          plVar7 = local_88;
          lVar12 = local_98;
          plVar18 = local_70;
          local_e8 = pwVar17;
        }
        if (lVar12 != 0) {
          FMemory::Free(lVar12);
        }
        if (bVar2) {
          local_68 = &local_d8;
          local_60 = &local_e8;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>(local_b8);
        }
        if (local_e8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_d8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_118 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_88 = plVar7 + 2;
        plVar7 = local_88;
        param_1 = local_res8;
        plVar13 = local_c8[0];
        plVar8 = local_a8;
      } while (local_88 != plVar18);
    }
    lVar12 = operator_new(0x88);
    if (lVar12 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)FJsonStringReader::FJsonStringReader(lVar12,plVar8);
    }
    plStack_a0 = (longlong *)operator_new(0x18);
    if (plStack_a0 != (longlong *)0x0) {
      *(undefined4 *)(plStack_a0 + 1) = 1;
      *plStack_a0 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plStack_a0 + 0xc) = 1;
      plStack_a0[2] = (longlong)plVar8;
    }
    local_a8 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar8,plVar8);
    plVar8 = plStack_a0;
    local_b8 = local_a8;
    plStack_b0 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_a0 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    FUN_1404a7f60(&local_b8,*plVar13 + 0x28);
    *(bool *)(param_1 + 0x13) = *(longlong *)(*plVar13 + 0x28) != 0;
    local_res8 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 5,&local_res8);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 9,param_1);
    plVar8 = (longlong *)param_1[0x14];
    if (plVar8 != (longlong *)0x0) {
      param_1[0x14] = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8,plVar13);
    }
    plVar8 = plStack_b0;
    plVar13 = local_80;
    iVar11 = local_78;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_b0 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar13 = local_80;
        iVar11 = local_78;
        if (iVar4 == 1) {
          (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
          plVar13 = local_80;
          iVar11 = local_78;
        }
      }
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
    plVar13 = *(longlong **)(local_res10 + 8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar13 + 1;
      lVar12 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = (longlong *)local_res18[1];
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar13 + 1;
    lVar12 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 140990350 PercentEncode body=2125 status=ok
// SIG undefined PercentEncode(void)

longlong * USIOJLibrary::PercentEncode(longlong *param_1)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  FString::FString();
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178164,&DAT_144178dc0,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_1441781bc,&DAT_144178dc8,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_14417826c,&DAT_144178dd0,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_14417831c,&DAT_144178dd8,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_14417846c,&DAT_144178de0,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178c4c,&DAT_144178de8,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178c5c,&DAT_144178df0,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178c9c,&DAT_144178df8,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178cbc,&DAT_144178e00,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178cfc,&DAT_144178e08,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e18,&DAT_144178e10,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e1c,&DAT_144178e20,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e30,&DAT_144178e28,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e34,&DAT_144178e38,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e48,&DAT_144178e40,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e4c,&DAT_144178e50,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e60,&DAT_144178e58,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e64,&DAT_144178e68,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e78,&DAT_144178e70,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e7c,&DAT_144178e80,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e90,&DAT_144178e88,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::Replace(param_1,local_18,&DAT_144178e94,&DAT_144178e98,1);
  if (param_1 != plVar1) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140990ba0 FUN_140990ba0 body=5786 status=ok
// SIG undefined FUN_140990ba0(void)

void FUN_140990ba0(longlong param_1)

{
  int *piVar1;
  void *pvVar2;
  size_t sVar3;
  char cVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  void *pvVar20;
  void *pvVar21;
  longlong lVar22;
  void *pvVar23;
  undefined8 *puVar24;
  uint *puVar25;
  short sVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar30 [16];
  short local_res10;
  uint local_res18;
  void *local_res20;
  void *local_3d8;
  uint local_3d0;
  uint local_3cc;
  void *local_3c8;
  undefined8 local_3c0;
  void *local_3b8;
  undefined8 local_3b0;
  void *local_3a8;
  undefined8 local_3a0;
  void *local_398;
  undefined8 local_390;
  void *local_388;
  int local_380;
  int local_37c;
  void *local_378;
  undefined8 local_370;
  void *local_368;
  undefined8 local_360;
  void *local_358;
  undefined8 local_350;
  void *local_348;
  int local_340;
  int local_33c;
  void *local_338;
  int local_330;
  undefined4 local_32c;
  void *local_328;
  int local_320;
  undefined4 local_31c;
  longlong *local_318;
  undefined8 uStack_310;
  uint *local_308;
  undefined1 auStack_300 [16];
  undefined8 uStack_2f0;
  void *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  uint *puStack_2d0;
  undefined4 uStack_2c8;
  int iStack_2c4;
  uint uStack_2c0;
  int iStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  void *local_240;
  ulonglong local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  void *local_210;
  ulonglong local_208;
  uint local_200;
  uint uStack_1fc;
  uint *puStack_1f8;
  undefined4 local_1f0;
  int iStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 *local_198;
  longlong *plStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  longlong lStack_180;
  undefined4 local_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 uStack_150;
  uint *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined2 local_120;
  longlong *local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  undefined8 *local_a8;
  longlong *plStack_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [3];
  
  cVar4 = *(char *)(param_1 + 0xe8);
  puVar17 = (undefined8 *)0x0;
  if (cVar4 == '\0') {
    local_2a0 = 0;
    local_298 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a0,0);
    FGenericPlatformString::Memcpy(local_2a0,&DAT_1441792e0,8);
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x48))
              (*(longlong **)(param_1 + 0x1a8),&local_2a0);
    lVar13 = local_2a0;
LAB_140990d46:
    if (lVar13 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (cVar4 == '\x01') {
      local_2b0 = 0;
      local_2a8 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b0,0);
      FGenericPlatformString::Memcpy(local_2b0,L"POST",10);
      (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x48))
                (*(longlong **)(param_1 + 0x1a8),&local_2b0);
      lVar13 = local_2b0;
      goto LAB_140990d46;
    }
    if (cVar4 == '\x02') {
      local_1d0 = 0;
      local_1c8 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
      FGenericPlatformString::Memcpy(local_1d0,&DAT_1441792f8,8);
      (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x48))
                (*(longlong **)(param_1 + 0x1a8),&local_1d0);
      lVar13 = local_1d0;
      goto LAB_140990d46;
    }
    if (cVar4 == '\x03') {
      local_1e0 = 0;
      local_1d8 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e0,0);
      FGenericPlatformString::Memcpy(local_1e0,L"DELETE",0xe);
      (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x48))
                (*(longlong **)(param_1 + 0x1a8),&local_1e0);
      lVar13 = local_1e0;
      goto LAB_140990d46;
    }
    if (cVar4 == '\x04') {
      (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x48))
                (*(longlong **)(param_1 + 0x1a8),param_1 + 0x198);
    }
  }
  cVar4 = *(char *)(param_1 + 0xe9);
  sVar26 = 0;
  if (cVar4 == '\0') {
    local_220 = 0;
    local_218 = 0x22;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0);
    FGenericPlatformString::Memcpy(local_220,L"application/x-www-form-urlencoded",0x44);
    local_230 = 0;
    local_228 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
    FGenericPlatformString::Memcpy(local_230,L"Content-Type",0x1a);
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x68))
              (*(longlong **)(param_1 + 0x1a8),&local_230,&local_220);
    if (local_230 != 0) {
      FMemory::Free();
    }
    if (local_220 != 0) {
      FMemory::Free();
    }
    local_3d8 = (void *)0x0;
    local_res18 = 0;
    local_3cc = 0;
    local_318 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x28);
    iVar28 = (int)local_318[5];
    local_308 = (uint *)(local_318 + 2);
    local_res10 = 0;
    local_2d8 = (longlong *)0x100000000;
    iStack_2c4 = 0;
    uStack_2c0 = 0;
    if (iVar28 != 0) {
      puVar25 = (uint *)local_318[4];
      if ((uint *)local_318[4] == (uint *)0x0) {
        puVar25 = local_308;
      }
      uVar11 = *puVar25;
      puVar12 = puVar17;
      puVar24 = puVar17;
      while (uVar11 == 0) {
        iVar9 = (int)puVar12;
        uStack_2c0 = (int)puVar24 + 0x20;
        puVar24 = (undefined8 *)(ulonglong)uStack_2c0;
        puVar12 = (undefined8 *)(ulonglong)(iVar9 + 1U);
        uVar8 = (ulonglong)local_2d8 >> 0x20;
        local_2d8 = (longlong *)CONCAT44((int)uVar8,iVar9 + 1U);
        if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14099192f;
        uVar11 = puVar25[(longlong)iVar9 + 1];
      }
      uVar11 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_2d8 = (longlong *)CONCAT44(uVar11,SUB84(local_2d8,0));
      if (uVar11 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_2c4 = (uStack_2c0 - iVar9) + 0x1f;
      if (iVar28 < iStack_2c4) {
LAB_14099192f:
        iStack_2c4 = iVar28;
      }
    }
    uStack_2c8 = 0xffffffff;
    uStack_140 = CONCAT44(iStack_2c4,0xffffffff);
    auVar6._8_4_ = uStack_2c0;
    auVar6._0_8_ = uStack_140;
    auVar6._12_4_ = iStack_2bc;
    uStack_310 = local_2d8;
    local_120 = 0;
    uStack_2f0._0_4_ = SUB84(local_318,0);
    uStack_2f0._4_4_ = (undefined4)((ulonglong)local_318 >> 0x20);
    uStack_150 = local_2d8;
    local_138 = auVar6._8_8_;
    auStack_300._8_8_ = local_138;
    auStack_300._0_8_ = uStack_140;
    uStack_130 = (undefined4)uStack_2f0;
    uStack_12c = uStack_2f0._4_4_;
    puVar12 = puVar17;
    iVar28 = iStack_2c4;
    uStack_2f0 = local_318;
    puStack_2d0 = local_308;
    local_158 = local_318;
    local_148 = local_308;
    local_128 = local_318;
    if (iStack_2c4 < (int)local_318[5]) {
      do {
        plVar14 = local_158;
        pvVar20 = (void *)0x0;
        local_328 = (void *)0x0;
        lVar13 = (longlong)iVar28 * 0x28;
        local_320 = *(int *)(lVar13 + 8 + *local_158);
        lVar22 = (longlong)local_320;
        pvVar21 = *(void **)(lVar13 + *local_158);
        if (local_320 == 0) {
          local_31c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_328,local_320,0);
          pvVar20 = local_328;
          _guard_xfg_dispatch_icall_nop(local_328,pvVar21,lVar22 * 2);
        }
        iVar28 = local_320;
        FJsonValue::AsString(*(undefined8 *)(*plVar14 + 0x10 + lVar13),&local_b8);
        if ((1 < iVar28) && (1 < local_b0)) {
          pcVar19 = "&";
          if (local_res10 == 0) {
            pcVar19 = "?";
          }
          pvVar21 = (void *)0x0;
          local_210 = (void *)0x0;
          local_208 = 0;
          if (*pcVar19 != '\0') {
            lVar13 = -1;
            do {
              lVar22 = lVar13 + 1;
              lVar13 = lVar13 + 1;
            } while (pcVar19[lVar22] != '\0');
            uVar27 = (int)lVar13 + 1;
            local_208 = (ulonglong)uVar27;
            uVar11 = uVar27;
            if (0 < (int)uVar27) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
              uVar11 = (uint)local_208;
            }
            pvVar21 = local_210;
            FGenericPlatformString::Convert<char,wchar_t>(local_210,uVar27,pcVar19,uVar27,0x3f);
            if ((uVar11 != 0) && (iVar28 = uVar11 - 1, iVar28 != 0)) {
              iVar9 = (int)puVar12;
              local_3d0 = (uint)(iVar9 == 0) + iVar28 + iVar9;
              if ((int)puVar17 < (int)local_3d0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3d8,puVar12);
              }
              local_res18 = local_3d0;
              pvVar20 = (void *)((longlong)local_3d8 +
                                ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar20,pvVar21,(longlong)iVar28 * 2);
              *(undefined2 *)((longlong)pvVar20 + (longlong)iVar28 * 2) = 0;
            }
          }
          if (pvVar21 != (void *)0x0) {
            FMemory::Free(pvVar21);
          }
          local_358 = (void *)0x0;
          local_350 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
          pvVar21 = local_358;
          local_res20 = local_358;
          FGenericPlatformString::Convert<char,wchar_t>(local_358,2,&DAT_144179374,2,0x3f);
          plVar14 = (longlong *)USIOJLibrary::PercentEncode(local_88,&local_328);
          iVar28 = (int)local_350;
          if ((int)plVar14[1] < 2) {
            iVar29 = local_350._4_4_;
            local_350 = 0;
            local_res20 = (void *)0x0;
            pvVar20 = pvVar21;
          }
          else {
            iVar9 = 0;
            if ((int)local_350 != 0) {
              iVar9 = (int)local_350 + -1;
            }
            if (((int)plVar14[1] != 0) || (iVar28 = 1, iVar9 == 0)) {
              iVar28 = 0;
            }
            local_3b8 = (void *)*plVar14;
            *plVar14 = 0;
            local_3b0._0_4_ = (int)plVar14[1];
            local_3b0._4_4_ = *(int *)((longlong)plVar14 + 0xc);
            plVar14[1] = 0;
            iVar10 = (int)local_3b0;
            if (local_3b0._4_4_ < (int)local_3b0 + iVar28 + iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3b8);
              iVar10 = (int)local_3b0;
            }
            pvVar20 = local_3b8;
            iVar28 = iVar10;
            iVar29 = local_3b0._4_4_;
            if (iVar9 != 0) {
              local_3b0._0_4_ = (uint)(iVar10 == 0) + iVar9 + iVar10;
              if (local_3b0._4_4_ < (int)local_3b0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar10);
              }
              iVar29 = local_3b0._4_4_;
              iVar28 = (int)local_3b0;
              pvVar20 = local_3b8;
              pvVar23 = (void *)(((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2 +
                                (longlong)local_3b8);
              _guard_xfg_dispatch_icall_nop(pvVar23,pvVar21,(longlong)iVar9 * 2);
              *(undefined2 *)((longlong)pvVar23 + (longlong)iVar9 * 2) = 0;
            }
            local_3b8 = (void *)0x0;
            local_3b0 = 0;
          }
          pvVar21 = (void *)0x0;
          plVar14 = (longlong *)USIOJLibrary::PercentEncode(local_78,&local_b8);
          if (iVar28 < 2) {
            pvVar23 = (void *)*plVar14;
            *plVar14 = 0;
            iVar10 = (int)plVar14[1];
            plVar14[1] = 0;
            pvVar21 = pvVar20;
          }
          else {
            iVar9 = (int)plVar14[1] + -1;
            if ((int)plVar14[1] == 0) {
              iVar9 = 0;
            }
            if ((iVar28 != 0) || (iVar10 = 1, iVar9 == 0)) {
              iVar10 = 0;
            }
            local_3a8 = pvVar20;
            local_3a0._4_4_ = iVar29;
            if (iVar29 < iVar28 + iVar9 + iVar10) {
              local_3a0._0_4_ = iVar28;
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3a8);
              iVar28 = (int)local_3a0;
            }
            local_3c8 = (void *)*plVar14;
            pvVar23 = local_3a8;
            iVar10 = iVar28;
            if (iVar9 != 0) {
              iVar10 = iVar28 + (uint)(iVar28 == 0) + iVar9;
              local_3a0 = CONCAT44(local_3a0._4_4_,iVar10);
              if (local_3a0._4_4_ < iVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,iVar28);
                iVar10 = (int)local_3a0;
              }
              pvVar23 = local_3a8;
              pvVar20 = (void *)((longlong)local_3a8 +
                                ((longlong)iVar28 - (ulonglong)(iVar28 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar20,local_3c8,(longlong)iVar9 * 2);
              *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar20) = 0;
            }
            local_3a8 = (void *)0x0;
            local_3a0 = 0;
          }
          if ((iVar10 != 0) && (iVar10 + -1 != 0)) {
            local_3d0 = (local_res18 == 0) + local_res18 + iVar10 + -1;
            if ((int)local_3cc < (int)local_3d0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3d8,local_res18);
            }
            uVar11 = local_3d0;
            pvVar20 = (void *)((longlong)local_3d8 +
                              ((longlong)(int)local_res18 - (ulonglong)(local_res18 != 0)) * 2);
            sVar3 = (longlong)iVar10 * 2 - 2;
            _guard_xfg_dispatch_icall_nop(pvVar20,pvVar23,sVar3);
            *(undefined2 *)(sVar3 + (longlong)pvVar20) = 0;
            local_res18 = uVar11;
          }
          if (pvVar23 != (void *)0x0) {
            FMemory::Free(pvVar23);
          }
          if (pvVar21 != (void *)0x0) {
            FMemory::Free(pvVar21);
          }
          if (local_88[0] != 0) {
            FMemory::Free();
          }
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          if (local_res20 != (void *)0x0) {
            FMemory::Free(local_res20);
          }
          puVar17 = (undefined8 *)(ulonglong)local_3cc;
          puVar12 = (undefined8 *)(ulonglong)local_res18;
          pvVar20 = local_328;
        }
        local_res10 = local_res10 + 1;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        if (pvVar20 != (void *)0x0) {
          FMemory::Free(pvVar20);
        }
        uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
        iVar28 = uStack_140._4_4_;
      } while (uStack_140._4_4_ < (int)local_148[6]);
      if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_128,(int)local_128[1] - *(int *)((longlong)local_128 + 0x34),1);
      }
    }
    pvVar21 = local_3d8;
    plVar14 = *(longlong **)(param_1 + 0x1a8);
    plVar15 = (longlong *)(**(code **)*plVar14)(plVar14,local_68);
    iVar28 = (int)puVar12;
    if ((int)plVar15[1] < 2) {
      local_348 = (void *)0x0;
      local_340 = iVar28;
      if (iVar28 == 0) {
        local_33c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_348,puVar12,0);
        _guard_xfg_dispatch_icall_nop(local_348,pvVar21,(longlong)iVar28 * 2);
      }
    }
    else {
      iVar9 = iVar28 + -1;
      if (iVar28 == 0) {
        iVar9 = 0;
      }
      if (((int)plVar15[1] != 0) || (iVar28 = 1, iVar9 == 0)) {
        iVar28 = 0;
      }
      local_388 = (void *)*plVar15;
      *plVar15 = 0;
      local_380 = (int)plVar15[1];
      local_37c = *(int *)((longlong)plVar15 + 0xc);
      plVar15[1] = 0;
      if (local_37c < iVar28 + iVar9 + local_380) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_388);
      }
      iVar28 = local_380;
      local_348 = local_388;
      local_340 = local_380;
      local_33c = local_37c;
      if (iVar9 != 0) {
        lVar13 = (longlong)local_380;
        local_380 = local_380 + (uint)(local_380 == 0) + iVar9;
        if (local_37c < local_380) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,iVar28);
        }
        iVar29 = local_37c;
        iVar10 = local_380;
        pvVar20 = local_388;
        pvVar21 = (void *)((longlong)local_388 + (lVar13 - (ulonglong)(iVar28 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar21,local_3d8,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar21) = 0;
        local_348 = pvVar20;
        local_340 = iVar10;
        local_33c = iVar29;
      }
    }
    (**(code **)(*plVar14 + 0x50))(plVar14,&local_348);
    if (local_348 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    pvVar21 = local_3d8;
    if (1 < *(int *)(param_1 + 0xd8)) {
      (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x60))
                (*(longlong **)(param_1 + 0x1a8),param_1 + 0xd0);
      pvVar21 = local_3d8;
    }
  }
  else if (cVar4 == '\x01') {
    local_250 = 0;
    local_248 = 0x22;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
    FGenericPlatformString::Memcpy(local_250,L"application/x-www-form-urlencoded",0x44);
    local_260 = 0;
    local_258 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
    FGenericPlatformString::Memcpy(local_260,L"Content-Type",0x1a);
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x68))
              (*(longlong **)(param_1 + 0x1a8),&local_260,&local_250);
    if (local_260 != 0) {
      FMemory::Free();
    }
    if (local_250 != 0) {
      FMemory::Free();
    }
    local_3c8 = (void *)0x0;
    local_3c0 = 0;
    local_200 = 0;
    local_318 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x28);
    iVar28 = (int)local_318[5];
    local_308 = (uint *)(local_318 + 2);
    uStack_1fc = 1;
    iStack_1ec = 0;
    uStack_1e8 = 0;
    if (iVar28 != 0) {
      puVar25 = (uint *)local_318[4];
      if ((uint *)local_318[4] == (uint *)0x0) {
        puVar25 = local_308;
      }
      uVar11 = *puVar25;
      puVar12 = puVar17;
      while (uVar11 == 0) {
        iVar9 = (int)puVar17;
        uStack_1e8 = (int)puVar12 + 0x20;
        puVar12 = (undefined8 *)(ulonglong)uStack_1e8;
        local_200 = iVar9 + 1;
        puVar17 = (undefined8 *)(ulonglong)local_200;
        if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14099122e;
        uVar11 = puVar25[(longlong)iVar9 + 1];
      }
      uStack_1fc = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uStack_1fc != 0) {
        for (; uStack_1fc >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_1fc == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_1ec = (uStack_1e8 - iVar9) + 0x1f;
      if (iVar28 < iStack_1ec) {
LAB_14099122e:
        iStack_1ec = iVar28;
      }
    }
    local_1f0 = 0xffffffff;
    uStack_100 = CONCAT44(iStack_1ec,0xffffffff);
    auVar7._8_4_ = uStack_1e8;
    auVar7._0_8_ = uStack_100;
    auVar7._12_4_ = uStack_1e4;
    uStack_310 = CONCAT44(uStack_1fc,local_200);
    local_e0 = 0;
    uStack_2f0._0_4_ = SUB84(local_318,0);
    uStack_2f0._4_4_ = (undefined4)((ulonglong)local_318 >> 0x20);
    local_f8 = auVar7._8_8_;
    auStack_300._8_8_ = local_f8;
    auStack_300._0_8_ = uStack_100;
    uStack_f0 = (undefined4)uStack_2f0;
    uStack_ec = uStack_2f0._4_4_;
    iVar28 = iStack_1ec;
    uStack_2f0 = local_318;
    puStack_1f8 = local_308;
    local_118 = local_318;
    uStack_110 = uStack_310;
    local_108 = local_308;
    local_e8 = local_318;
    if (iStack_1ec < (int)local_318[5]) {
      do {
        plVar14 = local_118;
        pvVar20 = (void *)0x0;
        local_338 = (void *)0x0;
        lVar13 = (longlong)iVar28 * 0x28;
        local_330 = *(int *)(lVar13 + 8 + *local_118);
        lVar22 = (longlong)local_330;
        pvVar21 = *(void **)(lVar13 + *local_118);
        if (local_330 == 0) {
          local_32c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_338,local_330,0);
          pvVar20 = local_338;
          _guard_xfg_dispatch_icall_nop(local_338,pvVar21,lVar22 * 2);
        }
        iVar28 = local_330;
        FJsonValue::AsString(*(undefined8 *)(lVar13 + 0x10 + *plVar14),&local_c8);
        if ((1 < iVar28) && (1 < local_c0)) {
          pcVar19 = "&";
          if (sVar26 == 0) {
            pcVar19 = "";
          }
          pvVar21 = (void *)0x0;
          local_240 = (void *)0x0;
          local_238 = 0;
          if (*pcVar19 != '\0') {
            lVar13 = -1;
            do {
              lVar22 = lVar13 + 1;
              lVar13 = lVar13 + 1;
            } while (pcVar19[lVar22] != '\0');
            uVar27 = (int)lVar13 + 1;
            local_238 = (ulonglong)uVar27;
            uVar11 = uVar27;
            if (0 < (int)uVar27) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
              uVar11 = (uint)local_238;
            }
            pvVar21 = local_240;
            FGenericPlatformString::Convert<char,wchar_t>(local_240,uVar27,pcVar19,uVar27,0x3f);
            uVar8 = local_3c0;
            if ((uVar11 != 0) && (iVar28 = uVar11 - 1, iVar28 != 0)) {
              iVar9 = (int)local_3c0;
              lVar13 = (longlong)(int)local_3c0;
              iVar10 = (uint)((int)local_3c0 == 0) + (int)local_3c0 + iVar28;
              local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
              if (local_3c0._4_4_ < iVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,uVar8 & 0xffffffff);
              }
              pvVar20 = (void *)((longlong)local_3c8 + (lVar13 - (ulonglong)(iVar9 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar20,pvVar21,(longlong)iVar28 * 2);
              *(undefined2 *)((longlong)pvVar20 + (longlong)iVar28 * 2) = 0;
            }
          }
          if (pvVar21 != (void *)0x0) {
            FMemory::Free(pvVar21);
          }
          local_368 = (void *)0x0;
          local_360 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
          pvVar21 = local_368;
          FGenericPlatformString::Convert<char,wchar_t>(local_368,2,&DAT_144179454,2,0x3f);
          lVar13 = USIOJLibrary::PercentEncode(local_58,&local_338);
          iVar9 = 0;
          iVar28 = (int)local_360;
          if (*(int *)(lVar13 + 8) < 2) {
            local_2dc = local_360._4_4_;
            local_360 = 0;
            pvVar20 = pvVar21;
            pvVar21 = (void *)0x0;
          }
          else {
            if ((int)local_360 != 0) {
              iVar9 = (int)local_360 + -1;
            }
            TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                      (&local_398,lVar13);
            uVar8 = local_390;
            pvVar20 = local_398;
            if (iVar9 != 0) {
              iVar28 = (int)local_390;
              lVar13 = (longlong)(int)local_390;
              iVar10 = (uint)((int)local_390 == 0) + (int)local_390 + iVar9;
              local_390 = CONCAT44(local_390._4_4_,iVar10);
              if (local_390._4_4_ < iVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,uVar8 & 0xffffffff);
              }
              pvVar20 = local_398;
              pvVar23 = (void *)((longlong)local_398 + (lVar13 - (ulonglong)(iVar28 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar23,pvVar21,(longlong)iVar9 * 2);
              *(undefined2 *)((longlong)pvVar23 + (longlong)iVar9 * 2) = 0;
            }
            iVar28 = (int)local_390;
            local_2dc = local_390._4_4_;
            local_390 = 0;
            local_398 = (void *)0x0;
          }
          local_2e8 = pvVar20;
          local_2e0 = iVar28;
          puVar17 = (undefined8 *)USIOJLibrary::PercentEncode(local_98,&local_c8);
          if (iVar28 < 2) {
            pvVar23 = (void *)*puVar17;
            *puVar17 = 0;
            iVar28 = *(int *)(puVar17 + 1);
            puVar17[1] = 0;
          }
          else {
            pvVar20 = (void *)(ulonglong)(*(int *)(puVar17 + 1) - 1);
            if (*(int *)(puVar17 + 1) == 0) {
              pvVar20 = (void *)0x0;
            }
            iVar28 = (int)pvVar20;
            TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                      (&local_378,&local_2e8);
            uVar8 = local_370;
            pvVar20 = (void *)*puVar17;
            pvVar23 = local_378;
            if (iVar28 != 0) {
              iVar9 = (int)local_370;
              lVar13 = (longlong)(int)local_370;
              iVar10 = (uint)((int)local_370 == 0) + (int)local_370 + iVar28;
              local_370 = CONCAT44(local_370._4_4_,iVar10);
              if (local_370._4_4_ < iVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,uVar8 & 0xffffffff);
              }
              pvVar23 = local_378;
              pvVar2 = (void *)((longlong)local_378 + (lVar13 - (ulonglong)(iVar9 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar2,pvVar20,(longlong)iVar28 * 2);
              *(undefined2 *)((longlong)pvVar2 + (longlong)iVar28 * 2) = 0;
            }
            iVar28 = (int)local_370;
            local_378 = (void *)0x0;
            local_370 = 0;
            pvVar20 = local_2e8;
          }
          uVar8 = local_3c0;
          if ((iVar28 != 0) && (iVar28 + -1 != 0)) {
            iVar9 = (int)local_3c0;
            lVar13 = (longlong)(int)local_3c0;
            iVar10 = (uint)((int)local_3c0 == 0) + iVar28 + -1 + (int)local_3c0;
            local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
            if (local_3c0._4_4_ < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,uVar8 & 0xffffffff);
            }
            pvVar2 = (void *)((longlong)local_3c8 + (lVar13 - (ulonglong)(iVar9 != 0)) * 2);
            sVar3 = (longlong)iVar28 * 2 - 2;
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar23,sVar3);
            *(undefined2 *)((longlong)pvVar2 + sVar3) = 0;
          }
          if (pvVar23 != (void *)0x0) {
            FMemory::Free(pvVar23);
          }
          if (pvVar20 != (void *)0x0) {
            FMemory::Free(pvVar20);
          }
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          pvVar20 = local_338;
          if (pvVar21 != (void *)0x0) {
            FMemory::Free(pvVar21);
            pvVar20 = local_338;
          }
        }
        sVar26 = sVar26 + 1;
        if (local_c8 != 0) {
          FMemory::Free();
        }
        if (pvVar20 != (void *)0x0) {
          FMemory::Free(pvVar20);
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
        iVar28 = uStack_100._4_4_;
      } while (uStack_100._4_4_ < (int)local_108[6]);
      if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_e8,(int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34),1);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x60))
              (*(longlong **)(param_1 + 0x1a8),&local_3c8);
    pvVar21 = local_3c8;
  }
  else {
    if (cVar4 != '\x02') {
      if (cVar4 == '\x03') {
        local_290 = 0;
        local_288 = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
        FGenericPlatformString::Memcpy(local_290,L"Content-Type",0x1a);
        (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x68))
                  (*(longlong **)(param_1 + 0x1a8),&local_290,param_1 + 0xc0);
        if (local_290 != 0) {
          FMemory::Free();
        }
        (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x58))
                  (*(longlong **)(param_1 + 0x1a8),param_1 + 0xb0);
      }
      goto LAB_14099209d;
    }
    local_270 = 0;
    local_268 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
    FGenericPlatformString::Memcpy(local_270,L"application/json",0x22);
    local_280 = 0;
    local_278 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    FGenericPlatformString::Memcpy(local_280,L"Content-Type",0x1a);
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x68))
              (*(longlong **)(param_1 + 0x1a8),&local_280,&local_270);
    if (local_280 != 0) {
      FMemory::Free();
    }
    if (local_270 != 0) {
      FMemory::Free();
    }
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    puVar12 = (undefined8 *)operator_new(0x40);
    if (puVar12 != (undefined8 *)0x0) {
      lVar13 = operator_new(0xa8);
      if (lVar13 != 0) {
        puVar17 = (undefined8 *)FMemoryWriter::FMemoryWriter(lVar13,puVar12 + 5,0,0,0);
      }
      puVar12[1] = puVar17;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *puVar12 = &PTR__scalar_deleting_destructor__143f607b8;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = &local_1c0;
      puVar17 = puVar12;
    }
    plStack_190 = (longlong *)FUN_1404f6ae0(puVar17);
    local_198 = puVar17;
    SharedPointerInternals::EnableSharedFromThis(&local_198,puVar17,puVar17);
    plVar14 = plStack_190;
    local_a8 = local_198;
    plStack_a0 = plStack_190;
    if (plStack_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_190 + 1) = (int)plStack_190[1] + 1;
      UNLOCK();
      if (plStack_190 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_190 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_190)(plStack_190);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar28 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar28 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
    }
    local_d8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x28);
    local_d0 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x30);
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
    local_160 = (longlong *)FUN_1404a9830(&local_d8);
    local_168 = local_160 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_168,local_168,local_168);
    FUN_1404a9a60(&local_168,&local_a8,1);
    plVar14 = local_160;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_160 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar28 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d8);
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x60))
              (*(longlong **)(param_1 + 0x1a8),&local_1c0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_a8);
    pvVar21 = local_1c0;
  }
  if (pvVar21 != (void *)0x0) {
    FMemory::Free(pvVar21);
  }
LAB_14099209d:
  plVar14 = (longlong *)(param_1 + 0xf0);
  lStack_180 = param_1 + 0x100;
  local_188 = 0;
  uStack_184 = 1;
  local_178 = 0xffffffff;
  uStack_174 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
  }
  uStack_310 = CONCAT44(uStack_184,local_188);
  uStack_2c0 = local_178;
  iStack_2bc = (int)uStack_174;
  uStack_2b8 = uStack_174._4_4_;
  uStack_2b4 = uStack_16c;
  uStack_2c8 = (undefined4)lStack_180;
  iStack_2c4 = (int)((ulonglong)lStack_180 >> 0x20);
  local_308 = (uint *)lStack_180;
  auStack_300._4_4_ = (int)uStack_174;
  auStack_300._0_4_ = local_178;
  auVar5._4_8_ = uStack_310;
  auVar5._0_4_ = (int)uStack_174;
  auVar30._0_8_ = auVar5._0_8_ << 0x20;
  auVar30._8_4_ = uStack_174._4_4_;
  auVar30._12_4_ = uStack_16c;
  auStack_300._8_8_ = auVar30._8_8_;
  iVar28 = (int)uStack_174;
  local_318 = plVar14;
  local_2d8 = plVar14;
  puStack_2d0 = (uint *)uStack_310;
  if ((int)uStack_174 < *(int *)(lStack_180 + 0x18)) {
    do {
      lVar13 = *local_318 + (longlong)iVar28 * 0x28;
      (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x68))
                (*(longlong **)(param_1 + 0x1a8),lVar13,lVar13 + 0x10);
      auStack_300._0_4_ = auStack_300._0_4_ & ~uStack_310._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_310);
      iVar28 = auStack_300._4_4_;
    } while ((int)auStack_300._4_4_ < *(int *)((longlong)local_308 + 0x18));
  }
  uVar16 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x80))();
  local_1b0 = 0;
  local_1a8 = 0;
  puVar17 = (undefined8 *)operator_new(0x28,&local_1b0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &PTR_FUN_14404bee8;
    FWeakObjectPtr::operator=(puVar17 + 1,param_1);
    puVar17[2] = FUN_14098fcb0;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[4] = uVar18;
    *puVar17 = &PTR_FUN_14404bf30;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar16,&local_1b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b0);
                    /* WARNING: Could not recover jumptable at 0x000140992236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x78))();
  return;
}



// FUNCTION 140992240 FUN_140992240 body=234 status=ok
// SIG undefined FUN_140992240(void)

void FUN_140992240(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  void **ppvVar1;
  longlong lVar2;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  longlong local_18 [2];
  
  local_20 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_20;
  _Src = (void *)*param_2;
  local_28 = (void *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar2 * 2);
  }
  ppvVar1 = (void **)FString::TrimStartAndEnd(&local_28,local_18);
  if (&local_28 != ppvVar1) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
    local_28 = *ppvVar1;
    *ppvVar1 = (void *)0x0;
    local_20 = *(int *)(ppvVar1 + 1);
    local_1c = *(undefined4 *)((longlong)ppvVar1 + 0xc);
    ppvVar1[1] = (void *)0x0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x50))(*(longlong **)(param_1 + 0x1a8),&local_28);
  FUN_140990ba0(param_1);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140992330 Remove body=435 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FRHIShaderResourceView_*,FShaderResourceKey>,TDefaultMapHashableKeyFuncs<FRHIShaderResourceView_*,FShaderResourceKey,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar12 = (int)(param_2 >> 4);
  uVar9 = (longlong)(int)param_1[9] - 1;
  uVar11 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
  uVar8 = -(uVar11 + iVar12) ^ uVar11 >> 0xd;
  uVar13 = (iVar12 - uVar11) - uVar8 ^ uVar8 >> 0xc;
  uVar11 = (uVar11 - uVar13) - uVar8 ^ uVar13 << 0x10;
  uVar8 = (uVar8 - uVar11) - uVar13 ^ uVar11 >> 5;
  uVar13 = (uVar13 - uVar11) - uVar8 ^ uVar8 >> 3;
  uVar11 = (uVar11 - uVar13) - uVar8 ^ uVar13 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar12 = *(int *)((longlong)plVar10 +
                   (((longlong)(int)((uVar8 - uVar11) - uVar13) ^ (ulonglong)(uVar11 >> 0xf)) &
                   uVar9) * 4);
  if (iVar12 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar12 * 0x40;
      if (*(ulonglong *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar12 * 0x40;
        uVar9 = (longlong)*(int *)(lVar6 + 0x3c + lVar3) & uVar9;
        piVar7 = (int *)((longlong)plVar10 + uVar9 * 4);
        iVar2 = *(int *)((longlong)plVar10 + uVar9 * 4);
        goto joined_r0x000140992443;
      }
      iVar12 = *(int *)(lVar6 + 0x38 + lVar3);
    } while (iVar12 != -1);
  }
  return 0;
joined_r0x000140992443:
  if (iVar2 == -1) {
LAB_140992464:
    bVar4 = (byte)iVar12 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar12;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar6) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar12;
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar10 +
                     (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar12) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x38);
    goto LAB_140992464;
  }
  piVar7 = (int *)(lVar3 + 0x38 + (longlong)iVar2 * 0x40);
  iVar2 = *piVar7;
  goto joined_r0x000140992443;
}



// FUNCTION 1409924f0 RemoveAtUninitialized body=178 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar9 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar10 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar11 = uVar9 << 6;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar8;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar11) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar11) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      lVar11 = lVar11 + 0x40;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409925b0 FUN_1409925b0 body=25 status=ok
// SIG undefined FUN_1409925b0(void)

void FUN_1409925b0(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x28) != 0) && (1 < *(int *)(param_2 + 8))) {
    TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
    ::Remove();
    return;
  }
  return;
}



// FUNCTION 1409925d0 RemoveTag body=259 status=ok
// SIG undefined RemoveTag(void)

int UVaRestRequestJSON::RemoveTag(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = *(int *)(param_1 + 0x80);
  lVar2 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar7 = 0;
  bVar8 = **(longlong **)(param_1 + 0x78) != param_2;
  lVar6 = 0;
  iVar4 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar5 = iVar4 + 1;
    if (lVar6 < lVar2) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar6 * 8);
      do {
        if (bVar8 != (*plVar3 != param_2)) break;
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 1;
        plVar3 = plVar3 + 1;
      } while (lVar6 < lVar2);
    }
    if (bVar8 != false) {
      if (iVar7 != iVar4) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar7 * 8),
                   (void *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 8),
                   (longlong)(iVar5 - iVar4) << 3);
      }
      iVar7 = iVar7 + (iVar5 - iVar4);
    }
    bVar8 = (bool)(bVar8 ^ 1);
    iVar4 = iVar5;
    if (lVar2 <= lVar6) {
      *(int *)(param_1 + 0x80) = iVar7;
      return iVar1 - iVar7;
    }
  } while( true );
}



// FUNCTION 1409926e0 FUN_1409926e0 body=386 status=ok
// SIG undefined FUN_1409926e0(void)

void FUN_1409926e0(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  pplVar1 = (longlong **)(param_1 + 0x28);
  plVar6 = (longlong *)0x0;
  if ((*pplVar1 != (longlong *)0x0) && (local_20 = (longlong *)0x0, pplVar1 != &local_28)) {
    *pplVar1 = (longlong *)0x0;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_20);
    plVar7 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = (longlong *)operator_new(0x50);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[7] = 0;
    plVar5[9] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    *(undefined4 *)(plVar5 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar5 + 0x34) = 0;
    plVar5[8] = 0;
    plVar7 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f60d28;
    plVar5[2] = (longlong)plVar7;
    plVar6 = plVar5;
  }
  local_18 = plVar7;
  local_10 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_18,plVar7,plVar7);
  if (pplVar1 != &local_18) {
    *pplVar1 = plVar7;
    local_18 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_10);
    plVar6 = local_10;
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 140992870 FUN_140992870 body=178 status=ok
// SIG undefined FUN_140992870(void)

void FUN_140992870(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = GetTransientPackage();
    uVar1 = NewObject<UPlayFabJsonObject>(uVar1);
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  else {
    FUN_1409926e0();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0xb0,0);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd0,0);
  }
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    uVar1 = GetTransientPackage();
    uVar1 = NewObject<UPlayFabJsonObject>(uVar1);
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
  }
  else {
    FUN_1409926e0();
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x140,0);
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 140992930 FUN_140992930 body=113 status=ok
// SIG undefined FUN_140992930(void)

void FUN_140992930(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = GetTransientPackage();
    uVar1 = NewObject<UPlayFabJsonObject>(uVar1);
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  else {
    FUN_1409926e0();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0xb0,0);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd0,0);
    return;
  }
  return;
}



// FUNCTION 1409929b0 FUN_1409929b0 body=85 status=ok
// SIG undefined FUN_1409929b0(void)

void FUN_1409929b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    uVar1 = GetTransientPackage();
    uVar1 = NewObject<UPlayFabJsonObject>(uVar1);
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
  }
  else {
    FUN_1409926e0();
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x140,0);
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 140992a10 FUN_140992a10 body=398 status=ok
// SIG undefined FUN_140992a10(void)

void FUN_140992a10(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 local_b8;
  undefined8 local_b0;
  
  lVar7 = *(longlong *)(param_1 + 0x28);
  if ((lVar7 != 0) && (1 < *(int *)(param_2 + 8))) {
    plVar8 = (longlong *)*param_3;
    local_b8 = 0;
    local_b0 = 0;
    plVar3 = plVar8 + (int)param_3[1];
    if (plVar8 != plVar3) {
      do {
        lVar7 = *plVar8;
        plVar4 = *(longlong **)(lVar7 + 0x30);
        lVar6 = *(longlong *)(lVar7 + 0x28);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          lVar6 = *(longlong *)(lVar7 + 0x28);
        }
        if (lVar6 != 0) {
          switch(*(undefined4 *)(lVar6 + 8)) {
          default:
            goto switchD_140992acc_caseD_0;
          case 1:
            iVar5 = 0;
            break;
          case 2:
            iVar5 = 1;
            break;
          case 3:
            iVar5 = 2;
            break;
          case 4:
            iVar5 = 3;
            break;
          case 5:
            iVar5 = 4;
            break;
          case 6:
            iVar5 = 5;
          }
                    /* WARNING: Could not recover jumptable at 0x000140992b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_140993048)[iVar5]))
                    (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_140993048)[iVar5]);
          return;
        }
switchD_140992acc_caseD_0:
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
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar3);
      lVar7 = *(longlong *)(param_1 + 0x28);
    }
    FJsonObject::SetArrayField(lVar7,param_2,&local_b8);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b8);
  }
  return;
}



// FUNCTION 140993060 FUN_140993060 body=12 status=ok
// SIG undefined FUN_140993060(void)

void FUN_140993060(longlong param_1)

{
  FString::operator=(param_1 + 0xc0);
  return;
}



// FUNCTION 140993070 FUN_140993070 body=110 status=ok
// SIG undefined FUN_140993070(void)

void FUN_140993070(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  if (puVar1 != param_2) {
    _Src = (void *)*param_2;
    iVar2 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 0xb8) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0xbc) == 0)) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return;
    }
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
    _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2);
  }
  return;
}



// FUNCTION 1409930e0 FUN_1409930e0 body=404 status=ok
// SIG undefined FUN_1409930e0(void)

void FUN_1409930e0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  lVar6 = *(longlong *)(param_1 + 0x28);
  if ((lVar6 != 0) && (1 < *(int *)(param_2 + 8))) {
    puVar8 = (undefined1 *)*param_3;
    puVar9 = (undefined8 *)0x0;
    local_58 = 0;
    local_50 = 0;
    puVar10 = (undefined8 *)(longlong)*(int *)(param_3 + 1);
    if ((undefined1 *)((longlong)*(int *)(param_3 + 1) + (longlong)puVar8) < puVar8) {
      puVar10 = puVar9;
    }
    puVar7 = puVar9;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        uVar1 = *puVar8;
        puVar4 = (undefined8 *)operator_new(0x18);
        puVar5 = puVar9;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_AsObject_143f60658;
          *(undefined1 *)(puVar4 + 2) = uVar1;
          *(undefined4 *)(puVar4 + 1) = 4;
          puVar5 = puVar4;
        }
        puVar4 = (undefined8 *)operator_new(0x18);
        local_40 = puVar9;
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar4 + 1) = 1;
          *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
          *puVar4 = &PTR_FUN_143f60d18;
          puVar4[2] = puVar5;
          local_40 = puVar4;
        }
        local_48 = puVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_48,puVar5,puVar5);
        uVar2 = local_50;
        lVar6 = (longlong)(int)local_50;
        iVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar3);
        if (local_50._4_4_ < iVar3) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar2 & 0xffffffff);
        }
        puVar8 = puVar8 + 1;
        puVar5 = (undefined8 *)(lVar6 * 0x10 + local_58);
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        *puVar5 = local_48;
        puVar5[1] = local_40;
        local_40 = (undefined8 *)0x0;
        local_48 = (undefined8 *)0x0;
      } while (puVar7 != puVar10);
      lVar6 = *(longlong *)(param_1 + 0x28);
    }
    FJsonObject::SetArrayField(lVar6,param_2,&local_58);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return;
}



// FUNCTION 140993280 FUN_140993280 body=20 status=ok
// SIG undefined FUN_140993280(void)

void FUN_140993280(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStackX_8 [8];
  longlong *plStack_38;
  longlong *plStack_30;
  longlong lStack_28;
  longlong **pplStack_20;
  longlong *plStack_18;
  longlong *plStack_10;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if ((lVar4 != 0) && (1 < *(int *)(param_2 + 8))) {
    plStack_30 = (longlong *)operator_new(0x28);
    if (plStack_30 != (longlong *)0x0) {
      *(undefined4 *)(plStack_30 + 1) = 1;
      *plStack_30 = (longlong)&PTR_FUN_144510b10;
      *(undefined4 *)((longlong)plStack_30 + 0xc) = 1;
      plStack_30[2] = (longlong)&PTR_AsObject_143f60658;
      *(undefined1 *)(plStack_30 + 4) = param_3;
      *(undefined4 *)(plStack_30 + 3) = 4;
    }
    plStack_38 = plStack_30 + 2;
    SharedPointerInternals::EnableSharedFromThis(&plStack_38,plStack_38,plStack_38);
    plStack_18 = plStack_38;
    plStack_10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    pplStack_20 = &plStack_18;
    lStack_28 = param_2;
    FUN_1415ec8f0(lVar4,auStackX_8,&lStack_28,0);
    plVar5 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_10)(plStack_10);
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
    plVar5 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  return;
}



// FUNCTION 1409932a0 SetJSBindingToLoweringEnabled body=7 status=ok
// SIG undefined SetJSBindingToLoweringEnabled(void)

void FWebBrowserSingleton::SetJSBindingToLoweringEnabled(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe9) = param_2;
  return;
}



// FUNCTION 1409932b0 FUN_1409932b0 body=45 status=ok
// SIG undefined FUN_1409932b0(void)

void FUN_1409932b0(longlong param_1,longlong *param_2)

{
  FString::operator=(param_1 + 0x198);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1409932e0 FUN_1409932e0 body=25 status=ok
// SIG undefined FUN_1409932e0(void)

void FUN_1409932e0(longlong param_1,longlong param_2,longlong param_3)

{
  if ((*(longlong *)(param_1 + 0x28) != 0) && (1 < *(int *)(param_2 + 8))) {
    FJsonObject::SetField(*(longlong *)(param_1 + 0x28),param_2,param_3 + 0x28);
    return;
  }
  return;
}



// FUNCTION 140993300 FUN_140993300 body=44 status=ok
// SIG undefined FUN_140993300(void)

void FUN_140993300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
            (param_1 + 0xf0,local_res8,&local_18,0);
  return;
}



// FUNCTION 140993330 FUN_140993330 body=428 status=ok
// SIG undefined FUN_140993330(void)

void FUN_140993330(longlong param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  lVar6 = *(longlong *)(param_1 + 0x28);
  if ((lVar6 != 0) && (1 < *(int *)(param_2 + 8))) {
    pfVar8 = (float *)*param_3;
    puVar9 = (undefined8 *)0x0;
    local_58 = 0;
    local_50 = 0;
    puVar10 = (undefined8 *)((longlong)*(int *)(param_3 + 1) & 0x3fffffffffffffff);
    if (pfVar8 + *(int *)(param_3 + 1) < pfVar8) {
      puVar10 = puVar9;
    }
    puVar7 = puVar9;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        fVar1 = *pfVar8;
        puVar4 = (undefined8 *)operator_new(0x18);
        puVar5 = puVar9;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_AsObject_143f60608;
          *(undefined4 *)(puVar4 + 1) = 3;
          puVar4[2] = (double)fVar1;
          puVar5 = puVar4;
        }
        puVar4 = (undefined8 *)operator_new(0x18);
        local_40 = puVar9;
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar4 + 1) = 1;
          *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
          *puVar4 = &PTR_FUN_143f60d18;
          puVar4[2] = puVar5;
          local_40 = puVar4;
        }
        local_48 = puVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_48,puVar5,puVar5);
        uVar2 = local_50;
        lVar6 = (longlong)(int)local_50;
        iVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar3);
        if (local_50._4_4_ < iVar3) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar2 & 0xffffffff);
        }
        pfVar8 = pfVar8 + 1;
        puVar5 = (undefined8 *)(lVar6 * 0x10 + local_58);
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        *puVar5 = local_48;
        puVar5[1] = local_40;
        local_40 = (undefined8 *)0x0;
        local_48 = (undefined8 *)0x0;
      } while (puVar7 != puVar10);
      lVar6 = *(longlong *)(param_1 + 0x28);
    }
    FJsonObject::SetArrayField(lVar6,param_2,&local_58);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return;
}



// FUNCTION 1409934e0 FUN_1409934e0 body=25 status=ok
// SIG undefined FUN_1409934e0(void)

void FUN_1409934e0(longlong param_1,longlong param_2,float param_3)

{
  if ((*(longlong *)(param_1 + 0x28) != 0) && (1 < *(int *)(param_2 + 8))) {
    FUN_1416b32b0(*(longlong *)(param_1 + 0x28),param_2,(double)param_3);
    return;
  }
  return;
}



// FUNCTION 140993500 FUN_140993500 body=446 status=ok
// SIG undefined FUN_140993500(void)

void FUN_140993500(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  if ((lVar5 != 0) && (1 < *(int *)(param_2 + 8))) {
    plVar7 = (longlong *)*param_3;
    puVar8 = (undefined8 *)0x0;
    local_58 = 0;
    local_50 = 0;
    puVar9 = (undefined8 *)((longlong)(int)param_3[1] & 0x1fffffffffffffff);
    if (plVar7 + (int)param_3[1] < plVar7) {
      puVar9 = puVar8;
    }
    puVar6 = puVar8;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        lVar5 = *plVar7;
        puVar3 = (undefined8 *)operator_new(0x20);
        puVar4 = puVar8;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 0;
          *puVar3 = &PTR_AsObject_143f606d8;
          puVar3[2] = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(longlong *)(lVar5 + 0x30);
          puVar3[3] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          *(undefined4 *)(puVar3 + 1) = 6;
          puVar4 = puVar3;
        }
        puVar3 = (undefined8 *)operator_new(0x18);
        local_40 = puVar8;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
          *puVar3 = &PTR_FUN_143f60d18;
          puVar3[2] = puVar4;
          local_40 = puVar3;
        }
        local_48 = puVar4;
        SharedPointerInternals::EnableSharedFromThis(&local_48,puVar4,puVar4);
        uVar1 = local_50;
        lVar5 = (longlong)(int)local_50;
        iVar2 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar2);
        if (local_50._4_4_ < iVar2) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar1 & 0xffffffff);
        }
        plVar7 = plVar7 + 1;
        puVar4 = (undefined8 *)(lVar5 * 0x10 + local_58);
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        *puVar4 = local_48;
        puVar4[1] = local_40;
        local_40 = (undefined8 *)0x0;
        local_48 = (undefined8 *)0x0;
      } while (puVar6 != puVar9);
      lVar5 = *(longlong *)(param_1 + 0x28);
    }
    FJsonObject::SetArrayField(lVar5,param_2,&local_58);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return;
}



// FUNCTION 1409936c0 FUN_1409936c0 body=25 status=ok
// SIG undefined FUN_1409936c0(void)

void FUN_1409936c0(longlong param_1,longlong param_2,longlong param_3)

{
  if ((*(longlong *)(param_1 + 0x28) != 0) && (1 < *(int *)(param_2 + 8))) {
    FUN_1416b33f0(*(longlong *)(param_1 + 0x28),param_2,param_3 + 0x28);
    return;
  }
  return;
}



// FUNCTION 1409936e0 FUN_1409936e0 body=8 status=ok
// SIG undefined FUN_1409936e0(void)

void FUN_1409936e0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}



// FUNCTION 1409936f0 SetNetDriverName body=8 status=ok
// SIG undefined SetNetDriverName(void)

void UNetDriver::SetNetDriverName(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}



// FUNCTION 140993700 SetAccessibleMessageHandler body=188 status=ok
// SIG undefined SetAccessibleMessageHandler(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void GenericApplication::SetAccessibleMessageHandler(longlong param_1,undefined8 *param_2)

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
  local_38 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = *(longlong **)(param_1 + 0x30);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x2c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x34) = uStack_30._4_4_;
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
  }
  return;
}



// FUNCTION 1409937c0 FUN_1409937c0 body=546 status=ok
// SIG undefined FUN_1409937c0(void)

void FUN_1409937c0(longlong param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *_Src_00;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  
  lVar7 = *(longlong *)(param_1 + 0x28);
  if ((lVar7 != 0) && (1 < *(int *)(param_2 + 8))) {
    puVar6 = (undefined8 *)*param_3;
    puVar8 = puVar6 + (longlong)(int)param_3[1] * 2;
    local_68 = 0;
    local_60 = 0;
    if (puVar6 != puVar8) {
      do {
        puVar5 = (undefined8 *)0x0;
        local_40 = *(int *)(puVar6 + 1);
        lVar7 = (longlong)local_40;
        _Src = (void *)*puVar6;
        local_48 = (undefined8 *)0x0;
        if (local_40 == 0) {
          local_3c = 0;
          _Src_00 = puVar5;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
          _Src_00 = local_48;
          _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar7 * 2);
        }
        iVar2 = local_40;
        puVar3 = (undefined8 *)operator_new(0x20);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 0;
          *puVar3 = &PTR_AsObject_143f605c8;
          puVar3[2] = 0;
          *(int *)(puVar3 + 3) = iVar2;
          puVar5 = puVar3;
          if (iVar2 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
            *(undefined4 *)(puVar3 + 1) = 2;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3 + 2,iVar2,0);
            _guard_xfg_dispatch_icall_nop((void *)puVar3[2],_Src_00,(longlong)iVar2 * 2);
            *(undefined4 *)(puVar3 + 1) = 2;
          }
        }
        puVar3 = (undefined8 *)0x0;
        puVar4 = (undefined8 *)operator_new(0x18);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar4 + 1) = 1;
          *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
          *puVar4 = &PTR_FUN_143f60d18;
          puVar4[2] = puVar5;
          puVar3 = puVar4;
        }
        local_58 = puVar5;
        local_50 = puVar3;
        SharedPointerInternals::EnableSharedFromThis(&local_58,puVar5);
        uVar1 = local_60;
        lVar7 = (longlong)(int)local_60;
        iVar2 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar2);
        if (local_60._4_4_ < iVar2) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
        }
        puVar5 = (undefined8 *)(lVar7 * 0x10 + local_68);
        *puVar5 = local_58;
        puVar5[1] = local_50;
        local_50 = (undefined8 *)0x0;
        local_58 = (undefined8 *)0x0;
        if (_Src_00 != (undefined8 *)0x0) {
          FMemory::Free(_Src_00);
        }
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar8);
      lVar7 = *(longlong *)(param_1 + 0x28);
    }
    FJsonObject::SetArrayField(lVar7,param_2,&local_68);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
  }
  return;
}



// FUNCTION 1409939f0 FUN_1409939f0 body=20 status=ok
// SIG undefined FUN_1409939f0(void)

void FUN_1409939f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStackX_8 [8];
  longlong *plStack_38;
  longlong *plStack_30;
  longlong lStack_28;
  longlong **pplStack_20;
  longlong *plStack_18;
  longlong *plStack_10;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if ((lVar4 != 0) && (1 < *(int *)(param_2 + 8))) {
    plStack_30 = (longlong *)operator_new(0x30);
    if (plStack_30 == (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plStack_30 + 1) = 1;
      *(undefined4 *)((longlong)plStack_30 + 0xc) = 1;
      *plStack_30 = (longlong)&PTR_DestroyObject_144cde280;
      plStack_30[2] = (longlong)&PTR_AsObject_143f605c8;
      *(undefined4 *)(plStack_30 + 3) = 0;
      FString::FString(plStack_30 + 4,param_3);
      *(undefined4 *)(plStack_30 + 3) = 2;
    }
    plStack_38 = plStack_30 + 2;
    SharedPointerInternals::EnableSharedFromThis(&plStack_38,plStack_38,plStack_38);
    plStack_18 = plStack_38;
    plStack_10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    pplStack_20 = &plStack_18;
    lStack_28 = param_2;
    FUN_1415ec8f0(lVar4,auStackX_8,&lStack_28,0);
    plVar5 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_10)(plStack_10);
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
    plVar5 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  return;
}



// FUNCTION 140993a10 FUN_140993a10 body=12 status=ok
// SIG undefined FUN_140993a10(void)

void FUN_140993a10(longlong param_1)

{
  FString::operator=(param_1 + 0xd0);
  return;
}



// FUNCTION 140993a20 SetDevToolsShortcutEnabled body=7 status=ok
// SIG undefined SetDevToolsShortcutEnabled(void)

void FWebBrowserSingleton::SetDevToolsShortcutEnabled(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe8) = param_2;
  return;
}



// FUNCTION 140993a30 FUN_140993a30 body=141 status=ok
// SIG undefined FUN_140993a30(void)

void FUN_140993a30(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar1 = *(char *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(char *)(param_2 + 0x70) = cVar1;
  if (cVar1 != '\0') {
    lVar8 = (longlong)*(int *)(param_2 + 0x68);
    iVar6 = *(int *)(param_2 + 0x68) + 1;
    *(int *)(param_2 + 0x68) = iVar6;
    if (*(int *)(param_2 + 0x6c) < iVar6) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2);
    }
    lVar7 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar7 = param_2;
    }
    *(undefined8 *)(lVar7 + lVar8 * 0x18) = uVar5;
    *(undefined4 *)(lVar7 + 8 + lVar8 * 0x18) = uVar4;
    *(undefined4 *)(lVar7 + 0xc + lVar8 * 0x18) = uVar2;
    *(undefined4 *)(lVar7 + 0x10 + lVar8 * 0x18) = uVar3;
  }
  return;
}



// FUNCTION 140993ae0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPropertyValue::GetPrivateStaticClass(void)

{
  if (DAT_1468646b8 == 0) {
    FUN_14171ccd0(L"/Script/VaRestPlugin",L"VaRestRequestJSON",&DAT_1468646b8,
                  UBTFunctionLibrary::StaticRegisterNativesUBTFunctionLibrary,0x1b8,0x10000000,0,
                  L"Engine",&LAB_140994d20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468646b8;
}



// FUNCTION 140993b80 FUN_140993b80 body=47 status=ok
// SIG undefined FUN_140993b80(void)

longlong FUN_140993b80(void)

{
  if (DAT_1468646b0 == 0) {
    FUN_141786440(&DAT_1468646b0,&PTR_GetPrivateStaticClass_14417a8e0);
  }
  return DAT_1468646b0;
}



// FUNCTION 140993bb0 FUN_140993bb0 body=47 status=ok
// SIG undefined FUN_140993bb0(void)

longlong FUN_140993bb0(void)

{
  if (DAT_1468645d8 == 0) {
    FUN_141786a30(&DAT_1468645d8,&PTR_FUN_146292df0);
  }
  return DAT_1468645d8;
}



// FUNCTION 140993be0 FUN_140993be0 body=47 status=ok
// SIG undefined FUN_140993be0(void)

longlong FUN_140993be0(void)

{
  if (DAT_1468645e0 == 0) {
    FUN_141786a30(&DAT_1468645e0,&PTR_FUN_146292ef0);
  }
  return DAT_1468645e0;
}



// FUNCTION 140993c10 FUN_140993c10 body=47 status=ok
// SIG undefined FUN_140993c10(void)

longlong FUN_140993c10(void)

{
  if (DAT_1468645e8 == 0) {
    FUN_141786a30(&DAT_1468645e8,&PTR_FUN_146292f30);
  }
  return DAT_1468645e8;
}



// FUNCTION 140993c40 FUN_140993c40 body=47 status=ok
// SIG undefined FUN_140993c40(void)

longlong FUN_140993c40(void)

{
  if (DAT_1468645f0 == 0) {
    FUN_141786a30(&DAT_1468645f0,&PTR_FUN_146292ff0);
  }
  return DAT_1468645f0;
}



// FUNCTION 140993c70 FUN_140993c70 body=47 status=ok
// SIG undefined FUN_140993c70(void)

longlong FUN_140993c70(void)

{
  if (DAT_1468645f8 == 0) {
    FUN_141786a30(&DAT_1468645f8,&PTR_FUN_1462931b0);
  }
  return DAT_1468645f8;
}



// FUNCTION 140993ca0 FUN_140993ca0 body=47 status=ok
// SIG undefined FUN_140993ca0(void)

longlong FUN_140993ca0(void)

{
  if (DAT_146864600 == 0) {
    FUN_141786a30(&DAT_146864600,&PTR_FUN_146293260);
  }
  return DAT_146864600;
}



// FUNCTION 140993cd0 FUN_140993cd0 body=47 status=ok
// SIG undefined FUN_140993cd0(void)

longlong FUN_140993cd0(void)

{
  if (DAT_146864608 == 0) {
    FUN_141786a30(&DAT_146864608,&PTR_FUN_1462932e0);
  }
  return DAT_146864608;
}



// FUNCTION 140993d00 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPlayFabJsonObject::GetPrivateStaticClass(void)

{
  if (DAT_1468644d0 == 0) {
    FUN_14171ccd0(L"/Script/VaRestPlugin",L"VaRestJsonObject",&DAT_1468644d0,
                  StaticRegisterNativesUPlayFabJsonObject,0x38,0x10000000,0,L"Engine",&LAB_140994ce0
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468644d0;
}



// FUNCTION 140993da0 FUN_140993da0 body=47 status=ok
// SIG undefined FUN_140993da0(void)

longlong FUN_140993da0(void)

{
  if (DAT_146864610 == 0) {
    FUN_141786a30(&DAT_146864610,&PTR_FUN_146293390);
  }
  return DAT_146864610;
}



// FUNCTION 140993dd0 FUN_140993dd0 body=47 status=ok
// SIG undefined FUN_140993dd0(void)

longlong FUN_140993dd0(void)

{
  if (DAT_146864618 == 0) {
    FUN_141786a30(&DAT_146864618,&PTR_FUN_146293440);
  }
  return DAT_146864618;
}



// FUNCTION 140993e00 FUN_140993e00 body=47 status=ok
// SIG undefined FUN_140993e00(void)

longlong FUN_140993e00(void)

{
  if (DAT_146864620 == 0) {
    FUN_141786a30(&DAT_146864620,&PTR_FUN_1462934c0);
  }
  return DAT_146864620;
}



// FUNCTION 140993e30 FUN_140993e30 body=47 status=ok
// SIG undefined FUN_140993e30(void)

longlong FUN_140993e30(void)

{
  if (DAT_146864628 == 0) {
    FUN_141786a30(&DAT_146864628,&PTR_FUN_146293580);
  }
  return DAT_146864628;
}



// FUNCTION 140993e60 FUN_140993e60 body=47 status=ok
// SIG undefined FUN_140993e60(void)

longlong FUN_140993e60(void)

{
  if (DAT_146864630 == 0) {
    FUN_141786a30(&DAT_146864630,&PTR_FUN_1462935c0);
  }
  return DAT_146864630;
}



// FUNCTION 140993e90 FUN_140993e90 body=47 status=ok
// SIG undefined FUN_140993e90(void)

longlong FUN_140993e90(void)

{
  if (DAT_146864638 == 0) {
    FUN_141786a30(&DAT_146864638,&PTR_FUN_146293680);
  }
  return DAT_146864638;
}



// FUNCTION 140993ec0 FUN_140993ec0 body=47 status=ok
// SIG undefined FUN_140993ec0(void)

longlong FUN_140993ec0(void)

{
  if (DAT_146864640 == 0) {
    FUN_141786a30(&DAT_146864640,&PTR_FUN_146293730);
  }
  return DAT_146864640;
}



// FUNCTION 140993ef0 FUN_140993ef0 body=47 status=ok
// SIG undefined FUN_140993ef0(void)

longlong FUN_140993ef0(void)

{
  if (DAT_146864648 == 0) {
    FUN_141786a30(&DAT_146864648,&PTR_FUN_1462937e0);
  }
  return DAT_146864648;
}



// FUNCTION 140993f20 FUN_140993f20 body=47 status=ok
// SIG undefined FUN_140993f20(void)

longlong FUN_140993f20(void)

{
  if (DAT_146864650 == 0) {
    FUN_141786a30(&DAT_146864650,&PTR_FUN_146293820);
  }
  return DAT_146864650;
}



// FUNCTION 140993f50 FUN_140993f50 body=47 status=ok
// SIG undefined FUN_140993f50(void)

longlong FUN_140993f50(void)

{
  if (DAT_146864658 == 0) {
    FUN_141786a30(&DAT_146864658,&PTR_FUN_146293860);
  }
  return DAT_146864658;
}



// FUNCTION 140993f80 FUN_140993f80 body=47 status=ok
// SIG undefined FUN_140993f80(void)

longlong FUN_140993f80(void)

{
  if (DAT_146864660 == 0) {
    FUN_141786a30(&DAT_146864660,&PTR_FUN_1462938a0);
  }
  return DAT_146864660;
}



// FUNCTION 140993fb0 FUN_140993fb0 body=47 status=ok
// SIG undefined FUN_140993fb0(void)

longlong FUN_140993fb0(void)

{
  if (DAT_146864668 == 0) {
    FUN_141786a30(&DAT_146864668,&PTR_FUN_1462938e0);
  }
  return DAT_146864668;
}



// FUNCTION 140993fe0 FUN_140993fe0 body=47 status=ok
// SIG undefined FUN_140993fe0(void)

longlong FUN_140993fe0(void)

{
  if (DAT_146864670 == 0) {
    FUN_141786a30(&DAT_146864670,&PTR_FUN_1462939d0);
  }
  return DAT_146864670;
}



// FUNCTION 140994010 FUN_140994010 body=47 status=ok
// SIG undefined FUN_140994010(void)

longlong FUN_140994010(void)

{
  if (DAT_146864678 == 0) {
    FUN_141786a30(&DAT_146864678,&PTR_FUN_146293a90);
  }
  return DAT_146864678;
}



// FUNCTION 140994040 FUN_140994040 body=47 status=ok
// SIG undefined FUN_140994040(void)

longlong FUN_140994040(void)

{
  if (DAT_146864680 == 0) {
    FUN_141786a30(&DAT_146864680,&PTR_FUN_146293ad0);
  }
  return DAT_146864680;
}



// FUNCTION 140994070 FUN_140994070 body=47 status=ok
// SIG undefined FUN_140994070(void)

longlong FUN_140994070(void)

{
  if (DAT_146864688 == 0) {
    FUN_141786a30(&DAT_146864688,&PTR_FUN_146293b80);
  }
  return DAT_146864688;
}



// FUNCTION 1409940a0 FUN_1409940a0 body=47 status=ok
// SIG undefined FUN_1409940a0(void)

longlong FUN_1409940a0(void)

{
  if (DAT_146864690 == 0) {
    FUN_141786a30(&DAT_146864690,&PTR_FUN_146293c00);
  }
  return DAT_146864690;
}



// FUNCTION 1409940d0 FUN_1409940d0 body=47 status=ok
// SIG undefined FUN_1409940d0(void)

longlong FUN_1409940d0(void)

{
  if (DAT_146864698 == 0) {
    FUN_141786a30(&DAT_146864698,&PTR_FUN_146293c80);
  }
  return DAT_146864698;
}



// FUNCTION 140994100 FUN_140994100 body=47 status=ok
// SIG undefined FUN_140994100(void)

longlong FUN_140994100(void)

{
  if (DAT_1468646a0 == 0) {
    FUN_141786a30(&DAT_1468646a0,&PTR_FUN_146293d30);
  }
  return DAT_1468646a0;
}



// FUNCTION 140994130 FUN_140994130 body=47 status=ok
// SIG undefined FUN_140994130(void)

longlong FUN_140994130(void)

{
  if (DAT_1468646a8 == 0) {
    FUN_141786a30(&DAT_1468646a8,&PTR_FUN_146293df0);
  }
  return DAT_1468646a8;
}



// FUNCTION 140994160 FUN_140994160 body=47 status=ok
// SIG undefined FUN_140994160(void)

longlong FUN_140994160(void)

{
  if (DAT_1468644c8 == 0) {
    FUN_141786440(&DAT_1468644c8,&PTR_GetPrivateStaticClass_14417bbd0);
  }
  return DAT_1468644c8;
}



// FUNCTION 140994190 FUN_140994190 body=47 status=ok
// SIG undefined FUN_140994190(void)

longlong FUN_140994190(void)

{
  if (DAT_1468645c0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468645c0,&PTR_s__Script_VaRestPlugin_14417ce98);
  }
  return DAT_1468645c0;
}



// FUNCTION 1409941c0 FUN_1409941c0 body=47 status=ok
// SIG undefined FUN_1409941c0(void)

longlong FUN_1409941c0(void)

{
  if (DAT_1468643e0 == 0) {
    FUN_141786a30(&DAT_1468643e0,&PTR_FUN_1462904d0);
  }
  return DAT_1468643e0;
}



// FUNCTION 1409941f0 FUN_1409941f0 body=47 status=ok
// SIG undefined FUN_1409941f0(void)

longlong FUN_1409941f0(void)

{
  if (DAT_1468643e8 == 0) {
    FUN_141786a30(&DAT_1468643e8,&PTR_FUN_146290590);
  }
  return DAT_1468643e8;
}



// FUNCTION 140994220 FUN_140994220 body=47 status=ok
// SIG undefined FUN_140994220(void)

longlong FUN_140994220(void)

{
  if (DAT_1468643f0 == 0) {
    FUN_141786a30(&DAT_1468643f0,&PTR_FUN_146290640);
  }
  return DAT_1468643f0;
}



// FUNCTION 140994250 FUN_140994250 body=47 status=ok
// SIG undefined FUN_140994250(void)

longlong FUN_140994250(void)

{
  if (DAT_1468643f8 == 0) {
    FUN_141786a30(&DAT_1468643f8,&PTR_FUN_146290680);
  }
  return DAT_1468643f8;
}



// FUNCTION 140994280 FUN_140994280 body=47 status=ok
// SIG undefined FUN_140994280(void)

longlong FUN_140994280(void)

{
  if (DAT_146864400 == 0) {
    FUN_141786a30(&DAT_146864400,&PTR_FUN_146290770);
  }
  return DAT_146864400;
}



// FUNCTION 1409942b0 FUN_1409942b0 body=47 status=ok
// SIG undefined FUN_1409942b0(void)

longlong FUN_1409942b0(void)

{
  if (DAT_146864408 == 0) {
    FUN_141786a30(&DAT_146864408,&PTR_FUN_1462908a0);
  }
  return DAT_146864408;
}



// FUNCTION 1409942e0 FUN_1409942e0 body=47 status=ok
// SIG undefined FUN_1409942e0(void)

longlong FUN_1409942e0(void)

{
  if (DAT_146864410 == 0) {
    FUN_141786a30(&DAT_146864410,&PTR_FUN_146290960);
  }
  return DAT_146864410;
}



// FUNCTION 140994310 FUN_140994310 body=47 status=ok
// SIG undefined FUN_140994310(void)

longlong FUN_140994310(void)

{
  if (DAT_146864418 == 0) {
    FUN_141786a30(&DAT_146864418,&PTR_FUN_1462909e0);
  }
  return DAT_146864418;
}



// FUNCTION 140994340 FUN_140994340 body=47 status=ok
// SIG undefined FUN_140994340(void)

longlong FUN_140994340(void)

{
  if (DAT_146864420 == 0) {
    FUN_141786a30(&DAT_146864420,&PTR_FUN_146290a90);
  }
  return DAT_146864420;
}



// FUNCTION 140994370 FUN_140994370 body=47 status=ok
// SIG undefined FUN_140994370(void)

longlong FUN_140994370(void)

{
  if (DAT_146864428 == 0) {
    FUN_141786a30(&DAT_146864428,&PTR_FUN_146290bb0);
  }
  return DAT_146864428;
}



// FUNCTION 1409943a0 FUN_1409943a0 body=47 status=ok
// SIG undefined FUN_1409943a0(void)

longlong FUN_1409943a0(void)

{
  if (DAT_146864430 == 0) {
    FUN_141786a30(&DAT_146864430,&PTR_FUN_146290c60);
  }
  return DAT_146864430;
}



// FUNCTION 1409943d0 FUN_1409943d0 body=47 status=ok
// SIG undefined FUN_1409943d0(void)

longlong FUN_1409943d0(void)

{
  if (DAT_146864438 == 0) {
    FUN_141786a30(&DAT_146864438,&PTR_FUN_146290d50);
  }
  return DAT_146864438;
}



// FUNCTION 140994400 FUN_140994400 body=47 status=ok
// SIG undefined FUN_140994400(void)

longlong FUN_140994400(void)

{
  if (DAT_146864440 == 0) {
    FUN_141786a30(&DAT_146864440,&PTR_FUN_146290dd0);
  }
  return DAT_146864440;
}



// FUNCTION 140994430 FUN_140994430 body=47 status=ok
// SIG undefined FUN_140994430(void)

longlong FUN_140994430(void)

{
  if (DAT_146864448 == 0) {
    FUN_141786a30(&DAT_146864448,&PTR_FUN_146290ef0);
  }
  return DAT_146864448;
}



// FUNCTION 140994460 FUN_140994460 body=47 status=ok
// SIG undefined FUN_140994460(void)

longlong FUN_140994460(void)

{
  if (DAT_146864450 == 0) {
    FUN_141786a30(&DAT_146864450,&PTR_FUN_146290fa0);
  }
  return DAT_146864450;
}



// FUNCTION 140994490 FUN_140994490 body=47 status=ok
// SIG undefined FUN_140994490(void)

longlong FUN_140994490(void)

{
  if (DAT_146864458 == 0) {
    FUN_141786a30(&DAT_146864458,&PTR_FUN_146291060);
  }
  return DAT_146864458;
}



// FUNCTION 1409944c0 FUN_1409944c0 body=47 status=ok
// SIG undefined FUN_1409944c0(void)

longlong FUN_1409944c0(void)

{
  if (DAT_146864460 == 0) {
    FUN_141786a30(&DAT_146864460,&PTR_FUN_146291160);
  }
  return DAT_146864460;
}



// FUNCTION 1409944f0 FUN_1409944f0 body=47 status=ok
// SIG undefined FUN_1409944f0(void)

longlong FUN_1409944f0(void)

{
  if (DAT_146864468 == 0) {
    FUN_141786a30(&DAT_146864468,&PTR_FUN_1462911a0);
  }
  return DAT_146864468;
}



// FUNCTION 140994520 FUN_140994520 body=47 status=ok
// SIG undefined FUN_140994520(void)

longlong FUN_140994520(void)

{
  if (DAT_146864470 == 0) {
    FUN_141786a30(&DAT_146864470,&PTR_FUN_1462911e0);
  }
  return DAT_146864470;
}



// FUNCTION 140994550 FUN_140994550 body=47 status=ok
// SIG undefined FUN_140994550(void)

longlong FUN_140994550(void)

{
  if (DAT_146864478 == 0) {
    FUN_141786a30(&DAT_146864478,&PTR_FUN_1462912d0);
  }
  return DAT_146864478;
}



// FUNCTION 140994580 FUN_140994580 body=47 status=ok
// SIG undefined FUN_140994580(void)

longlong FUN_140994580(void)

{
  if (DAT_146864480 == 0) {
    FUN_141786a30(&DAT_146864480,&PTR_FUN_146291390);
  }
  return DAT_146864480;
}



// FUNCTION 1409945b0 FUN_1409945b0 body=47 status=ok
// SIG undefined FUN_1409945b0(void)

longlong FUN_1409945b0(void)

{
  if (DAT_146864488 == 0) {
    FUN_141786a30(&DAT_146864488,&PTR_FUN_146291450);
  }
  return DAT_146864488;
}



// FUNCTION 1409945e0 FUN_1409945e0 body=47 status=ok
// SIG undefined FUN_1409945e0(void)

longlong FUN_1409945e0(void)

{
  if (DAT_146864490 == 0) {
    FUN_141786a30(&DAT_146864490,&PTR_FUN_146291540);
  }
  return DAT_146864490;
}



// FUNCTION 140994610 FUN_140994610 body=47 status=ok
// SIG undefined FUN_140994610(void)

longlong FUN_140994610(void)

{
  if (DAT_146864498 == 0) {
    FUN_141786a30(&DAT_146864498,&PTR_FUN_1462915f0);
  }
  return DAT_146864498;
}



// FUNCTION 140994640 FUN_140994640 body=47 status=ok
// SIG undefined FUN_140994640(void)

longlong FUN_140994640(void)

{
  if (DAT_1468644a0 == 0) {
    FUN_141786a30(&DAT_1468644a0,&PTR_FUN_1462916a0);
  }
  return DAT_1468644a0;
}



// FUNCTION 140994670 FUN_140994670 body=47 status=ok
// SIG undefined FUN_140994670(void)

longlong FUN_140994670(void)

{
  if (DAT_1468644a8 == 0) {
    FUN_141786a30(&DAT_1468644a8,&PTR_FUN_146291790);
  }
  return DAT_1468644a8;
}



// FUNCTION 1409946a0 FUN_1409946a0 body=47 status=ok
// SIG undefined FUN_1409946a0(void)

longlong FUN_1409946a0(void)

{
  if (DAT_1468644b0 == 0) {
    FUN_141786a30(&DAT_1468644b0,&PTR_FUN_146291880);
  }
  return DAT_1468644b0;
}



// FUNCTION 1409946d0 FUN_1409946d0 body=47 status=ok
// SIG undefined FUN_1409946d0(void)

longlong FUN_1409946d0(void)

{
  if (DAT_1468644b8 == 0) {
    FUN_141786a30(&DAT_1468644b8,&PTR_FUN_146291930);
  }
  return DAT_1468644b8;
}



// FUNCTION 140994700 FUN_140994700 body=47 status=ok
// SIG undefined FUN_140994700(void)

longlong FUN_140994700(void)

{
  if (DAT_1468644c0 == 0) {
    FUN_141786a30(&DAT_1468644c0,&PTR_FUN_1462919e0);
  }
  return DAT_1468644c0;
}



// FUNCTION 140994750 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UVaRestJsonValue::GetPrivateStaticClass(void)

{
  if (DAT_146864560 == 0) {
    FUN_14171ccd0(L"/Script/VaRestPlugin",L"VaRestJsonValue",&DAT_146864560,
                  StaticRegisterNativesUVaRestJsonValue,0x38,0x10000000,0,L"Engine",&LAB_140994d00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146864560;
}



// FUNCTION 1409947f0 FUN_1409947f0 body=47 status=ok
// SIG undefined FUN_1409947f0(void)

longlong FUN_1409947f0(void)

{
  if (DAT_146864558 == 0) {
    FUN_141786440(&DAT_146864558,&PTR_GetPrivateStaticClass_14417c4e0);
  }
  return DAT_146864558;
}



// FUNCTION 140994820 FUN_140994820 body=47 status=ok
// SIG undefined FUN_140994820(void)

longlong FUN_140994820(void)

{
  if (DAT_1468644f0 == 0) {
    FUN_141786a30(&DAT_1468644f0,&PTR_FUN_146291ac0);
  }
  return DAT_1468644f0;
}



// FUNCTION 140994850 FUN_140994850 body=47 status=ok
// SIG undefined FUN_140994850(void)

longlong FUN_140994850(void)

{
  if (DAT_1468644f8 == 0) {
    FUN_141786a30(&DAT_1468644f8,&PTR_FUN_146291b80);
  }
  return DAT_1468644f8;
}



// FUNCTION 140994880 FUN_140994880 body=47 status=ok
// SIG undefined FUN_140994880(void)

longlong FUN_140994880(void)

{
  if (DAT_146864500 == 0) {
    FUN_141786a30(&DAT_146864500,&PTR_FUN_146291bc0);
  }
  return DAT_146864500;
}



// FUNCTION 1409948b0 FUN_1409948b0 body=47 status=ok
// SIG undefined FUN_1409948b0(void)

longlong FUN_1409948b0(void)

{
  if (DAT_146864508 == 0) {
    FUN_141786a30(&DAT_146864508,&PTR_FUN_146291c40);
  }
  return DAT_146864508;
}



// FUNCTION 1409948e0 FUN_1409948e0 body=47 status=ok
// SIG undefined FUN_1409948e0(void)

longlong FUN_1409948e0(void)

{
  if (DAT_146864510 == 0) {
    FUN_141786a30(&DAT_146864510,&PTR_FUN_146291cf0);
  }
  return DAT_146864510;
}



// FUNCTION 140994910 FUN_140994910 body=47 status=ok
// SIG undefined FUN_140994910(void)

longlong FUN_140994910(void)

{
  if (DAT_146864518 == 0) {
    FUN_141786a30(&DAT_146864518,&PTR_FUN_146291df0);
  }
  return DAT_146864518;
}



// FUNCTION 140994940 FUN_140994940 body=47 status=ok
// SIG undefined FUN_140994940(void)

longlong FUN_140994940(void)

{
  if (DAT_146864520 == 0) {
    FUN_141786a30(&DAT_146864520,&PTR_FUN_146291f30);
  }
  return DAT_146864520;
}



// FUNCTION 140994970 FUN_140994970 body=47 status=ok
// SIG undefined FUN_140994970(void)

longlong FUN_140994970(void)

{
  if (DAT_146864528 == 0) {
    FUN_141786a30(&DAT_146864528,&PTR_FUN_146291ff0);
  }
  return DAT_146864528;
}



// FUNCTION 1409949a0 FUN_1409949a0 body=47 status=ok
// SIG undefined FUN_1409949a0(void)

longlong FUN_1409949a0(void)

{
  if (DAT_146864530 == 0) {
    FUN_141786a30(&DAT_146864530,&PTR_FUN_1462920f0);
  }
  return DAT_146864530;
}



// FUNCTION 1409949d0 FUN_1409949d0 body=47 status=ok
// SIG undefined FUN_1409949d0(void)

longlong FUN_1409949d0(void)

{
  if (DAT_146864538 == 0) {
    FUN_141786a30(&DAT_146864538,&PTR_FUN_146292220);
  }
  return DAT_146864538;
}



// FUNCTION 140994a00 FUN_140994a00 body=47 status=ok
// SIG undefined FUN_140994a00(void)

longlong FUN_140994a00(void)

{
  if (DAT_146864540 == 0) {
    FUN_141786a30(&DAT_146864540,&PTR_FUN_1462922a0);
  }
  return DAT_146864540;
}



// FUNCTION 140994a30 FUN_140994a30 body=47 status=ok
// SIG undefined FUN_140994a30(void)

longlong FUN_140994a30(void)

{
  if (DAT_146864548 == 0) {
    FUN_141786a30(&DAT_146864548,&PTR_FUN_1462922e0);
  }
  return DAT_146864548;
}



// FUNCTION 140994a60 FUN_140994a60 body=47 status=ok
// SIG undefined FUN_140994a60(void)

longlong FUN_140994a60(void)

{
  if (DAT_146864550 == 0) {
    FUN_141786a30(&DAT_146864550,&PTR_FUN_146292390);
  }
  return DAT_146864550;
}



// FUNCTION 140994aa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UVaRestLibrary::GetPrivateStaticClass(void)

{
  if (DAT_1468645b8 == 0) {
    FUN_14171ccd0(L"/Script/VaRestPlugin",L"VaRestLibrary",&DAT_1468645b8,
                  StaticRegisterNativesUVaRestLibrary,0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_1468645b8;
}



// FUNCTION 140994b50 FUN_140994b50 body=47 status=ok
// SIG undefined FUN_140994b50(void)

longlong FUN_140994b50(void)

{
  if (DAT_1468645b0 == 0) {
    FUN_141786440(&DAT_1468645b0,&PTR_GetPrivateStaticClass_144179dd0);
  }
  return DAT_1468645b0;
}



// FUNCTION 140994b80 FUN_140994b80 body=47 status=ok
// SIG undefined FUN_140994b80(void)

longlong FUN_140994b80(void)

{
  if (DAT_146864580 == 0) {
    FUN_141786a30(&DAT_146864580,&PTR_FUN_146292610);
  }
  return DAT_146864580;
}



// FUNCTION 140994bb0 FUN_140994bb0 body=47 status=ok
// SIG undefined FUN_140994bb0(void)

longlong FUN_140994bb0(void)

{
  if (DAT_146864588 == 0) {
    FUN_141786a30(&DAT_146864588,&PTR_FUN_146292780);
  }
  return DAT_146864588;
}



// FUNCTION 140994be0 FUN_140994be0 body=47 status=ok
// SIG undefined FUN_140994be0(void)

longlong FUN_140994be0(void)

{
  if (DAT_146864590 == 0) {
    FUN_141786a30(&DAT_146864590,&PTR_FUN_146292830);
  }
  return DAT_146864590;
}



// FUNCTION 140994c10 FUN_140994c10 body=47 status=ok
// SIG undefined FUN_140994c10(void)

longlong FUN_140994c10(void)

{
  if (DAT_146864598 == 0) {
    FUN_141786a30(&DAT_146864598,&PTR_FUN_146292930);
  }
  return DAT_146864598;
}



// FUNCTION 140994c40 FUN_140994c40 body=47 status=ok
// SIG undefined FUN_140994c40(void)

longlong FUN_140994c40(void)

{
  if (DAT_1468645a0 == 0) {
    FUN_141786a30(&DAT_1468645a0,&PTR_FUN_146292ba0);
  }
  return DAT_1468645a0;
}



// FUNCTION 140994c70 FUN_140994c70 body=47 status=ok
// SIG undefined FUN_140994c70(void)

longlong FUN_140994c70(void)

{
  if (DAT_1468645a8 == 0) {
    FUN_141786a30(&DAT_1468645a8,&PTR_FUN_146292c40);
  }
  return DAT_1468645a8;
}



// FUNCTION 140994ca0 FUN_140994ca0 body=53 status=ok
// SIG undefined FUN_140994ca0(void)

void FUN_140994ca0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14417cd00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140994d40 Construct body=66 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FVaRestCallResponse>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FWeakObjectPtr::operator=(param_2 + 2,0);
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 140994df0 ERequestContentType_StaticEnum body=85 status=ok
// SIG undefined ERequestContentType_StaticEnum(void)

void ERequestContentType_StaticEnum(void)

{
  if (DAT_1468643c8 == 0) {
    if (DAT_1468645c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468645c0,&PTR_s__Script_VaRestPlugin_14417ce98);
    }
    DAT_1468643c8 = GetStaticEnum(FUN_140995150,DAT_1468645c0,L"ERequestContentType");
  }
  return;
}



// FUNCTION 140994e50 ERequestStatus_StaticEnum body=85 status=ok
// SIG undefined ERequestStatus_StaticEnum(void)

void ERequestStatus_StaticEnum(void)

{
  if (DAT_1468643c0 == 0) {
    if (DAT_1468645c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468645c0,&PTR_s__Script_VaRestPlugin_14417ce98);
    }
    DAT_1468643c0 = GetStaticEnum(FUN_140995180,DAT_1468645c0,L"ERequestStatus");
  }
  return;
}



// FUNCTION 140994eb0 ERequestVerb_StaticEnum body=85 status=ok
// SIG undefined ERequestVerb_StaticEnum(void)

void ERequestVerb_StaticEnum(void)

{
  if (DAT_1468643d0 == 0) {
    if (DAT_1468645c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468645c0,&PTR_s__Script_VaRestPlugin_14417ce98);
    }
    DAT_1468643d0 = GetStaticEnum(FUN_1409951b0,DAT_1468645c0,L"ERequestVerb");
  }
  return;
}



// FUNCTION 140994f10 EVaJson_StaticEnum body=85 status=ok
// SIG undefined EVaJson_StaticEnum(void)

void EVaJson_StaticEnum(void)

{
  if (DAT_1468643d8 == 0) {
    if (DAT_1468645c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468645c0,&PTR_s__Script_VaRestPlugin_14417ce98);
    }
    DAT_1468643d8 = GetStaticEnum(FUN_1409951e0,DAT_1468645c0,L"EVaJson");
  }
  return;
}



// FUNCTION 140994f70 FUN_140994f70 body=6 status=ok
// SIG undefined FUN_140994f70(void)

undefined8 FUN_140994f70(void)

{
  return 0xa14a3a6;
}



// FUNCTION 140994f80 StaticRegisterNativesUPlayFabJsonObject body=34 status=ok
// SIG undefined StaticRegisterNativesUPlayFabJsonObject(void)

void UPlayFabJsonObject::StaticRegisterNativesUPlayFabJsonObject(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ConstructJsonObject_14417c9f0,0x1d);
  return;
}



// FUNCTION 140994fb0 StaticRegisterNativesUVaRestJsonValue body=34 status=ok
// SIG undefined StaticRegisterNativesUVaRestJsonValue(void)

void UVaRestJsonValue::StaticRegisterNativesUVaRestJsonValue(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AsArray_14417cc30,0xd);
  return;
}



// FUNCTION 140994fe0 StaticRegisterNativesUVaRestLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUVaRestLibrary(void)

void UVaRestLibrary::StaticRegisterNativesUVaRestLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Base64Decode_14417ce20,6);
  return;
}



// FUNCTION 140995010 StaticRegisterNativesUBTFunctionLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUBTFunctionLibrary(void)

void UBTFunctionLibrary::StaticRegisterNativesUBTFunctionLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = UPropertyValue::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddTag_14417cec0,0x1b);
  return;
}



// FUNCTION 140995040 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVaRestCallResponse::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146864570 == 0) {
    if (DAT_1468645c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468645c0,&PTR_s__Script_VaRestPlugin_14417ce98);
    }
    lVar1 = DAT_1468645c0;
    uVar2 = FUN_140994f70();
    DAT_146864570 = GetStaticStruct(FUN_140995210,lVar1,L"VaRestCallResponse",0x30,uVar2);
  }
  return;
}



// FUNCTION 1409950c0 FUN_1409950c0 body=47 status=ok
// SIG undefined FUN_1409950c0(void)

longlong FUN_1409950c0(void)

{
  if (DAT_1468645d0 == 0) {
    FUN_141786a30(&DAT_1468645d0,&PTR_FUN_146292d40);
  }
  return DAT_1468645d0;
}



// FUNCTION 1409950f0 FUN_1409950f0 body=47 status=ok
// SIG undefined FUN_1409950f0(void)

longlong FUN_1409950f0(void)

{
  if (DAT_1468645c8 == 0) {
    FUN_141786a30(&DAT_1468645c8,&PTR_FUN_146292cc0);
  }
  return DAT_1468645c8;
}



// FUNCTION 140995120 FUN_140995120 body=47 status=ok
// SIG undefined FUN_140995120(void)

longlong FUN_140995120(void)

{
  if (DAT_146864568 == 0) {
    FUN_141786a30(&DAT_146864568,&PTR_FUN_146292410);
  }
  return DAT_146864568;
}



// FUNCTION 140995150 FUN_140995150 body=47 status=ok
// SIG undefined FUN_140995150(void)

longlong FUN_140995150(void)

{
  if (DAT_1468646c8 == 0) {
    FUN_1417866a0(&DAT_1468646c8,&PTR_FUN_146294040);
  }
  return DAT_1468646c8;
}



// FUNCTION 140995180 FUN_140995180 body=47 status=ok
// SIG undefined FUN_140995180(void)

longlong FUN_140995180(void)

{
  if (DAT_1468646c0 == 0) {
    FUN_1417866a0(&DAT_1468646c0,&PTR_FUN_146293ff0);
  }
  return DAT_1468646c0;
}



// FUNCTION 1409951b0 FUN_1409951b0 body=47 status=ok
// SIG undefined FUN_1409951b0(void)

longlong FUN_1409951b0(void)

{
  if (DAT_1468646d0 == 0) {
    FUN_1417866a0(&DAT_1468646d0,&PTR_FUN_146294090);
  }
  return DAT_1468646d0;
}



// FUNCTION 1409951e0 FUN_1409951e0 body=47 status=ok
// SIG undefined FUN_1409951e0(void)

longlong FUN_1409951e0(void)

{
  if (DAT_1468644e8 == 0) {
    FUN_1417866a0(&DAT_1468644e8,&PTR_FUN_146293fa0);
  }
  return DAT_1468644e8;
}



// FUNCTION 140995210 FUN_140995210 body=47 status=ok
// SIG undefined FUN_140995210(void)

longlong FUN_140995210(void)

{
  if (DAT_146864578 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146864578,&PTR_FUN_146292510);
  }
  return DAT_146864578;
}



// FUNCTION 140995240 FUN_140995240 body=128 status=ok
// SIG undefined FUN_140995240(void)

void FUN_140995240(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14098c8d0(param_1,local_res10);
  return;
}



// FUNCTION 1409952c0 FUN_1409952c0 body=393 status=ok
// SIG undefined FUN_1409952c0(void)

void FUN_1409952c0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_res8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  local_res10 = 0;
  puVar1 = &local_res8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x280))(param_1,local_68,puVar1,local_res10,&local_38);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140995450 FUN_140995450 body=122 status=ok
// SIG undefined FUN_140995450(void)

void FUN_140995450(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14098cb10(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409954d0 execAsBool body=43 status=ok
// SIG undefined execAsBool(void)

void UVaRestJsonValue::execAsBool(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = AsBool();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140995500 execAsNumber body=45 status=ok
// SIG undefined execAsNumber(void)

void UPlayFabJsonValue::execAsNumber(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = AsNumber();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140995530 FUN_140995530 body=44 status=ok
// SIG undefined FUN_140995530(void)

void FUN_140995530(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098ceb0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140995560 execAsString body=122 status=ok
// SIG undefined execAsString(void)

void UVaRestJsonValue::execAsString(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)AsString(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409955e0 execCollapseRelativeDirectories body=245 status=ok
// SIG undefined execCollapseRelativeDirectories(void)

void UBlueprintPathsLibrary::execCollapseRelativeDirectories
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FBase64::Decode(local_28 + 2,plVar2);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409956e0 execCollapseRelativeDirectories body=245 status=ok
// SIG undefined execCollapseRelativeDirectories(void)

void UBlueprintPathsLibrary::execCollapseRelativeDirectories
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FBase64::Decode(local_28 + 2,plVar2);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409957e0 execBase64Encode body=213 status=ok
// SIG undefined execBase64Encode(void)

void UVaRestLibrary::execBase64Encode(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)Base64Encode(local_28 + 2,local_28);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409958c0 execBase64EncodeData body=276 status=ok
// SIG undefined execBase64EncodeData(void)

void UVaRestLibrary::execBase64EncodeData(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  plVar3 = local_28 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = Base64EncodeData(plVar3,plVar2);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409959e0 FUN_1409959e0 body=497 status=ok
// SIG undefined FUN_1409959e0(void)

void FUN_1409959e0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FWeakObjectPtr::operator=(local_28,0);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = *puVar1;
  local_14 = puVar1[1];
  local_10 = *(undefined8 *)(puVar1 + 2);
  FUN_14098d0f0(local_40,local_38,local_res20[0],local_res10[0],local_48,&local_18);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140995c00 execConstructJsonObject body=128 status=ok
// SIG undefined execConstructJsonObject(void)

void UPlayFabJsonObject::execConstructJsonObject
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = ConstructJsonObject(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140995c80 execImportBufferAsTexture2D body=226 status=ok
// SIG undefined execImportBufferAsTexture2D(void)

void UKismetRenderingLibrary::execImportBufferAsTexture2D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar2 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098d430(local_res10,plVar2);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140995d70 FUN_140995d70 body=192 status=ok
// SIG undefined FUN_140995d70(void)

void FUN_140995d70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_14098d700(local_res18,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140995e30 FUN_140995e30 body=196 status=ok
// SIG undefined FUN_140995e30(void)

void FUN_140995e30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_14098d840(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140995f00 FUN_140995f00 body=191 status=ok
// SIG undefined FUN_140995f00(void)

void FUN_140995f00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098d990(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140995fc0 execImportFileAsTexture2D body=211 status=ok
// SIG undefined execImportFileAsTexture2D(void)

void UKismetRenderingLibrary::execImportFileAsTexture2D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098daf0(local_res10,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409960a0 execConstructJsonObject body=128 status=ok
// SIG undefined execConstructJsonObject(void)

void UPlayFabJsonObject::execConstructJsonObject
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = ConstructJsonObject(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140996120 FUN_140996120 body=240 status=ok
// SIG undefined FUN_140996120(void)

void FUN_140996120(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_14098dcb0(local_res20,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140996210 FUN_140996210 body=163 status=ok
// SIG undefined FUN_140996210(void)

void FUN_140996210(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098dd40(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409962c0 FUN_1409962c0 body=122 status=ok
// SIG undefined FUN_1409962c0(void)

void FUN_1409962c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14098df90(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996340 execEncodeJsonToSingleString body=122 status=ok
// SIG undefined execEncodeJsonToSingleString(void)

void UVaRestJsonObject::execEncodeJsonToSingleString
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)EncodeJsonToSingleString(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409963c0 execGetConsoleCommandCategories body=119 status=ok
// SIG undefined execGetConsoleCommandCategories(void)

void UCheatManagerGunfire::execGetConsoleCommandCategories
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *local_18;
  int local_10;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098e2e0(param_1,&local_18);
  TArray<FChromaSDKColors,FDefaultAllocator>::operator=(param_3,uVar1);
  plVar2 = local_18;
  for (; local_10 != 0; local_10 = local_10 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 140996440 execGetStringField body=229 status=ok
// SIG undefined execGetStringField(void)

void UVaRestJsonObject::execGetStringField(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14098e680(param_1,local_28 + 2,local_28);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996530 execGetStringField body=229 status=ok
// SIG undefined execGetStringField(void)

void UVaRestJsonObject::execGetStringField(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14098e8a0(param_1,local_28 + 2,local_28);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996620 execGetBoolField body=163 status=ok
// SIG undefined execGetBoolField(void)

void UVaRestJsonObject::execGetBoolField(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetBoolField(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409966d0 FUN_1409966d0 body=164 status=ok
// SIG undefined FUN_1409966d0(void)

void FUN_1409966d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098eab0(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996780 execGetConsoleCommandCategories body=119 status=ok
// SIG undefined execGetConsoleCommandCategories(void)

void UCheatManagerGunfire::execGetConsoleCommandCategories
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *local_18;
  int local_10;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UPlayFabJsonObject::GetFieldNames(param_1,&local_18);
  TArray<FChromaSDKColors,FDefaultAllocator>::operator=(param_3,uVar1);
  plVar2 = local_18;
  for (; local_10 != 0; local_10 = local_10 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 140996800 execGetStringField body=229 status=ok
// SIG undefined execGetStringField(void)

void UVaRestJsonObject::execGetStringField(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14098ecf0(param_1,local_28 + 2,local_28);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409968f0 execGetNumberField body=165 status=ok
// SIG undefined execGetNumberField(void)

void UVaRestJsonObject::execGetNumberField(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetNumberField(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409969a0 execGetStringField body=229 status=ok
// SIG undefined execGetStringField(void)

void UVaRestJsonObject::execGetStringField(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14098ef10(param_1,local_28 + 2,local_28);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996a90 FUN_140996a90 body=164 status=ok
// SIG undefined FUN_140996a90(void)

void FUN_140996a90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098f180(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996b40 execGetFadeHUD body=44 status=ok
// SIG undefined execGetFadeHUD(void)

void UUGMenuManager::execGetFadeHUD(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetFadeHUD();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140996b70 FUN_140996b70 body=43 status=ok
// SIG undefined FUN_140996b70(void)

void FUN_140996b70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098f2b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140996ba0 FUN_140996ba0 body=302 status=ok
// SIG undefined FUN_140996ba0(void)

void FUN_140996ba0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  longlong local_18 [2];
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_30;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar2 * 2);
  }
  plVar1 = (longlong *)FUN_14098f2c0(param_1,local_18,&local_28);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996cd0 execGetMediaTexture body=44 status=ok
// SIG undefined execGetMediaTexture(void)

void UMediaComponent::execGetMediaTexture(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UWeapon::GetStatusEffectOriginStats();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140996d00 FUN_140996d00 body=43 status=ok
// SIG undefined FUN_140996d00(void)

void FUN_140996d00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098f360();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140996d30 FUN_140996d30 body=236 status=ok
// SIG undefined FUN_140996d30(void)

void FUN_140996d30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  int local_10;
  
  local_28 = 0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098f380(param_1,&local_18,&local_28);
  TArray<FChromaSDKColors,FDefaultAllocator>::operator=(param_3,uVar1);
  plVar2 = local_18;
  for (; local_10 != 0; local_10 = local_10 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996e20 execGetStringField body=229 status=ok
// SIG undefined execGetStringField(void)

void UVaRestJsonObject::execGetStringField(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)GetStringField(param_1,local_28 + 2,local_28);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996f10 FUN_140996f10 body=43 status=ok
// SIG undefined FUN_140996f10(void)

void FUN_140996f10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098f5e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140996f40 FUN_140996f40 body=122 status=ok
// SIG undefined FUN_140996f40(void)

void FUN_140996f40(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14098f650(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140996fc0 FUN_140996fc0 body=122 status=ok
// SIG undefined FUN_140996fc0(void)

void FUN_140996fc0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14098f870(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997040 execHasField body=163 status=ok
// SIG undefined execHasField(void)

void UVaRestJsonObject::execHasField(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = HasField(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409970f0 FUN_1409970f0 body=143 status=ok
// SIG undefined FUN_1409970f0(void)

void FUN_1409970f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098f900(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140997180 FUN_140997180 body=43 status=ok
// SIG undefined FUN_140997180(void)

void FUN_140997180(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14098f970();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1409971b0 FUN_1409971b0 body=194 status=ok
// SIG undefined FUN_1409971b0(void)

void FUN_1409971b0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14098f990(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 140997280 FUN_140997280 body=213 status=ok
// SIG undefined FUN_140997280(void)

void FUN_140997280(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)USIOJLibrary::PercentEncode(local_28 + 2,local_28);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997360 FUN_140997360 body=148 status=ok
// SIG undefined FUN_140997360(void)

void FUN_140997360(undefined8 param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409925b0(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997400 execRemoveTag body=143 status=ok
// SIG undefined execRemoveTag(void)

void UVaRestRequestJSON::execRemoveTag(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = RemoveTag(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140997510 FUN_140997510 body=246 status=ok
// SIG undefined FUN_140997510(void)

void FUN_140997510(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140992a10(param_1,local_28 + 2,plVar1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}


