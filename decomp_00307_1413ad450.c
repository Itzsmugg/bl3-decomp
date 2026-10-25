// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413ad450 FUN_1413ad450 body=47 status=ok
// SIG undefined FUN_1413ad450(void)

longlong FUN_1413ad450(void)

{
  if (DAT_1468894f8 == 0) {
    FUN_141786a30(&DAT_1468894f8,&PTR_FUN_14635e210);
  }
  return DAT_1468894f8;
}



// FUNCTION 1413ad480 FUN_1413ad480 body=47 status=ok
// SIG undefined FUN_1413ad480(void)

longlong FUN_1413ad480(void)

{
  if (DAT_146889500 == 0) {
    FUN_141786a30(&DAT_146889500,&PTR_FUN_14635e290);
  }
  return DAT_146889500;
}



// FUNCTION 1413ad4b0 FUN_1413ad4b0 body=53 status=ok
// SIG undefined FUN_1413ad4b0(void)

void FUN_1413ad4b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_14497cd30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ad4f0 FUN_1413ad4f0 body=53 status=ok
// SIG undefined FUN_1413ad4f0(void)

void FUN_1413ad4f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_14497ce48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ad540 FUN_1413ad540 body=53 status=ok
// SIG undefined FUN_1413ad540(void)

void FUN_1413ad540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14497c4f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ad580 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_1468894c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxVendingMachineMenuData",&DAT_1468894c0,FUN_140447710,0xd0,
                  0x10000000,0,L"Engine",FUN_1413ad6a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_Sequence::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468894c0;
}



// FUNCTION 1413ad640 FUN_1413ad640 body=53 status=ok
// SIG undefined FUN_1413ad640(void)

void FUN_1413ad640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14497bb20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ad6a0 FUN_1413ad6a0 body=297 status=ok
// SIG undefined FUN_1413ad6a0(void)

void FUN_1413ad6a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x1010100;
    *(undefined2 *)((longlong)puVar1 + 0x34) = 1;
    *puVar1 = &PTR_FUN_1448180b0;
    *(undefined1 *)((longlong)puVar1 + 0x36) = 1;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x6c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0xc,0);
    }
    if ((undefined2 *)puVar1[0xc] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0xc] = 0;
    }
    *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    if ((*(int *)((longlong)puVar1 + 0x6c) < 0) && (*(int *)((longlong)puVar1 + 0x6c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0xc,0);
    }
    if ((undefined2 *)puVar1[0xc] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0xc] = 0;
    }
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0x40a00000;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *puVar1 = &PTR_FUN_14497b880;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
  }
  return;
}



// FUNCTION 1413ad840 FUN_1413ad840 body=1512 status=ok
// SIG undefined FUN_1413ad840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1413ad840(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_140f5a170();
  *param_1 = &PTR__scalar_deleting_destructor__14497bc38;
  FUN_1411c88f0(param_1 + 0xc6);
  param_1[0x196] = 0;
  uVar1 = uRam00000001468890cc;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xce4) = 0;
  *(undefined4 *)(param_1 + 0x19d) = 0;
  *(uint *)((longlong)param_1 + 0xcec) = uVar1;
  uVar1 = uRam00000001468890c4 & uRam00000001468890d4;
  uVar2 = uRam00000001468890c8 & uRam00000001468890d8;
  uVar3 = uRam00000001468890cc & uRam00000001468890dc;
  *(uint *)(param_1 + 0x1a0) = _DAT_1468890c0 & _DAT_1468890d0;
  *(uint *)((longlong)param_1 + 0xd04) = uVar1;
  *(uint *)(param_1 + 0x1a1) = uVar2;
  *(uint *)((longlong)param_1 + 0xd0c) = uVar3;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  *(undefined2 *)(param_1 + 0x1a7) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd3a) = 0;
  FUN_140ed0240(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ca) = 0x43960000;
  param_1[0x1cb] = 0;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1cc,L"Time is Running Out!",L"GFxVendingMachinePrompt",
             L"TimeIsRunningOutText");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1cf,L"Item Of The Day",L"GFxVendingMachinePrompt",L"ItemOfTheDayText");
  FName::FName(param_1 + 0x1d2,"ItemOfTheDaySocket",1);
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d3,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1d3],0xe,"rarityContent",0xe,0x3f);
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d5,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1d5],9,"iodTimer",9,0x3f);
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d7,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1d7],8,"iodText",8,0x3f);
  param_1[0x1d9] = 0;
  param_1[0x1da] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d9,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1d9],10,"itemScore",10,0x3f);
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1db,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1db],0xd,"manufacturer",0xd,0x3f);
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1dd,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1dd],0xb,"rarityText",0xb,0x3f);
  param_1[0x1df] = 0;
  param_1[0x1e0] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1df,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1df],5,&DAT_14497c354,5,0x3f);
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e1,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e1],0xb,"flavorText",0xb,0x3f);
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e3,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e3],10,"elemental",10,0x3f);
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e5,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e5],0xf,"weaponIconClip",0xf,0x3f);
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e7,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e7],0x11,"weaponIconShadow",0x11,0x3f);
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e9,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e9],7,"marcus",7,0x3f);
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1eb,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1eb],0x11,"manufacturerIcon",0x11,0x3f);
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1ed,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1ed],0x16,"manufacturerImageTint",0x16,0x3f);
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1ef,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1ef],0x2e,"WeaponRender.WeaponRenderWrapper.ExtTexRender",0x2e,0x3f);
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0x34;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1f1,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1f1],0x34,"WeaponRenderShadow.WeaponRenderWrapper.ExtTexRender",0x34,0x3f);
  *(undefined4 *)(param_1 + 499) = 0x44f00000;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 500,L"Sold Out",L"GFxVendingMachinePrompt",L"SoldOut");
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  return param_1;
}



// FUNCTION 1413ade30 ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 1413adea0 FUN_1413adea0 body=548 status=ok
// SIG undefined FUN_1413adea0(void)

void FUN_1413adea0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xfa8);
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
  if (*(longlong *)(param_1 + 0xf88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xef8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xee8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xed8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xec8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xeb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xea8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe98) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xe80);
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
  plVar4 = *(longlong **)(param_1 + 0xe68);
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
  FUN_140e9c360(param_1 + 0xd40);
  if (*(longlong *)(param_1 + 0xc88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FMemory::Free();
  }
  FUN_140f5a560(param_1);
  return;
}



// FUNCTION 1413ae0d0 FUN_1413ae0d0 body=104 status=ok
// SIG undefined FUN_1413ae0d0(void)

void FUN_1413ae0d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x860);
  FUN_140a29500(param_1);
  return;
}



// FUNCTION 1413ae140 FUN_1413ae140 body=130 status=ok
// SIG undefined FUN_1413ae140(void)

longlong FUN_1413ae140(longlong param_1,ulonglong param_2)

{
  FUN_141320a80(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1413ae1d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSceneViewState::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1413adea0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1050);
  }
  return param_1;
}



// FUNCTION 1413ae210 FUN_1413ae210 body=52 status=ok
// SIG undefined FUN_1413ae210(void)

undefined8 FUN_1413ae210(undefined8 param_1,ulonglong param_2)

{
  FUN_1413ae0d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xaf0);
  }
  return param_1;
}



// FUNCTION 1413ae250 Construct body=48 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FEquipmentModSlot>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FText::FText(param_2);
  param_2[3] = 0;
  return;
}



// FUNCTION 1413ae2b0 FUN_1413ae2b0 body=40 status=ok
// SIG undefined FUN_1413ae2b0(void)

void FUN_1413ae2b0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  return;
}



// FUNCTION 1413ae2e0 FUN_1413ae2e0 body=88 status=ok
// SIG undefined FUN_1413ae2e0(void)

void FUN_1413ae2e0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  FUN_142d979c0((longlong)param_2 + 0x78);
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0x3f800000;
  return;
}



// FUNCTION 1413ae360 Copy body=80 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FEquipmentModSlot>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FText::operator=(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413ae440 FUN_1413ae440 body=461 status=ok
// SIG undefined FUN_1413ae440(void)

undefined8 FUN_1413ae440(undefined8 param_1,uint *param_2,longlong param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (uint *)(param_3 + 0x38);
    do {
      puVar1 = param_2 + 4;
      *param_2 = *param_2 ^ (*param_2 ^ puVar6[-0xe]) & 1;
      *param_2 = *param_2 ^ (*param_2 ^ puVar6[-0xe]) & 2;
      param_2[1] = puVar6[-0xd];
      param_2[2] = puVar6[-0xc];
      if (puVar1 != puVar6 + -10) {
        uVar2 = puVar6[-8];
        pvVar3 = *(void **)(puVar6 + -10);
        param_2[6] = uVar2;
        if ((uVar2 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,uVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)puVar1,pvVar3,(longlong)(int)uVar2 << 3);
        }
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2 + 8,puVar6 + -6);
      puVar1 = param_2 + 0xc;
      if (puVar1 != puVar6 + -2) {
        uVar2 = *puVar6;
        pvVar3 = *(void **)(puVar6 + -2);
        param_2[0xe] = uVar2;
        if ((uVar2 == 0) && (param_2[0xf] == 0)) {
          param_2[0xf] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,uVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)puVar1,pvVar3,(longlong)(int)uVar2 << 3);
        }
      }
      puVar1 = param_2 + 0x14;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar6 + 2);
      *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(puVar6 + 4);
      if (puVar1 != puVar6 + 6) {
        uVar2 = puVar6[8];
        pvVar3 = *(void **)(puVar6 + 6);
        param_2[0x16] = uVar2;
        if ((uVar2 == 0) && (param_2[0x17] == 0)) {
          param_2[0x17] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,uVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)puVar1,pvVar3,(longlong)(int)uVar2 << 3);
        }
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x18,puVar6 + 10);
      *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(puVar6 + 0xe);
      uVar2 = puVar6[0x11];
      uVar4 = puVar6[0x12];
      uVar5 = puVar6[0x13];
      param_2[0x1e] = puVar6[0x10];
      param_2[0x1f] = uVar2;
      param_2[0x20] = uVar4;
      param_2[0x21] = uVar5;
      uVar2 = puVar6[0x15];
      uVar4 = puVar6[0x16];
      uVar5 = puVar6[0x17];
      param_2[0x22] = puVar6[0x14];
      param_2[0x23] = uVar2;
      param_2[0x24] = uVar4;
      param_2[0x25] = uVar5;
      *(char *)(param_2 + 0x26) = (char)puVar6[0x18];
      puVar1 = puVar6 + 0x19;
      puVar6 = puVar6 + 0x28;
      param_2[0x27] = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413ae610 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FRestrictedGameplayTagTableRow>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140b17710(param_2 + param_3,param_3);
      param_3 = param_3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413ae660 FUN_1413ae660 body=90 status=ok
// SIG undefined FUN_1413ae660(void)

void FUN_1413ae660(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1413ae6c0 FUN_1413ae6c0 body=55 status=ok
// SIG undefined FUN_1413ae6c0(void)

void FUN_1413ae6c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146889060 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146889060 = GetStaticEnum(FUN_1413aebb0,uVar1,L"EChildPayloadType");
  }
  return;
}



// FUNCTION 1413ae700 FUN_1413ae700 body=55 status=ok
// SIG undefined FUN_1413ae700(void)

void FUN_1413ae700(void)

{
  undefined8 uVar1;
  
  if (DAT_146889068 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146889068 = GetStaticEnum(FUN_1413aebe0,uVar1,L"EGoreRegionType");
  }
  return;
}



// FUNCTION 1413ae740 FUN_1413ae740 body=6 status=ok
// SIG undefined FUN_1413ae740(void)

undefined8 FUN_1413ae740(void)

{
  return 0x79e9ac83;
}



// FUNCTION 1413ae750 FUN_1413ae750 body=6 status=ok
// SIG undefined FUN_1413ae750(void)

undefined8 FUN_1413ae750(void)

{
  return 0x35c8f2c6;
}



// FUNCTION 1413ae760 FUN_1413ae760 body=6 status=ok
// SIG undefined FUN_1413ae760(void)

undefined8 FUN_1413ae760(void)

{
  return 0x5eae5d4d;
}



// FUNCTION 1413ae770 FUN_1413ae770 body=6 status=ok
// SIG undefined FUN_1413ae770(void)

undefined8 FUN_1413ae770(void)

{
  return 0x6df13db4;
}



// FUNCTION 1413ae780 FUN_1413ae780 body=6 status=ok
// SIG undefined FUN_1413ae780(void)

undefined8 FUN_1413ae780(void)

{
  return 0x620bc26b;
}



// FUNCTION 1413ae790 FUN_1413ae790 body=6 status=ok
// SIG undefined FUN_1413ae790(void)

undefined8 FUN_1413ae790(void)

{
  return 0x5a44852c;
}



// FUNCTION 1413ae850 FUN_1413ae850 body=34 status=ok
// SIG undefined FUN_1413ae850(void)

void FUN_1413ae850(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413ac760();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AIProjectile_Arm_14497d200,0x25);
  return;
}



// FUNCTION 1413ae880 FUN_1413ae880 body=34 status=ok
// SIG undefined FUN_1413ae880(void)

void FUN_1413ae880(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413ad1e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BuildVendingMachinePrompt_14497c470,8);
  return;
}



// FUNCTION 1413ae8b0 FUN_1413ae8b0 body=34 status=ok
// SIG undefined FUN_1413ae8b0(void)

void FUN_1413ae8b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413ad130();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GenerateGore_14497cf60,1);
  return;
}



// FUNCTION 1413ae8e0 FUN_1413ae8e0 body=82 status=ok
// SIG undefined FUN_1413ae8e0(void)

void FUN_1413ae8e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468894a8 == 0) {
    uVar1 = FUN_1413ae740();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468894a8 = GetStaticStruct(FUN_1413aec10,uVar2,L"GFxVendingMachineMenuFilter",0x20,uVar1);
  }
  return;
}



// FUNCTION 1413ae940 FUN_1413ae940 body=82 status=ok
// SIG undefined FUN_1413ae940(void)

void FUN_1413ae940(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146889518 == 0) {
    uVar1 = FUN_1413ae750();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146889518 = GetStaticStruct(FUN_1413aec40,uVar2,L"GlobalScreenParticleData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1413ae9a0 FUN_1413ae9a0 body=82 status=ok
// SIG undefined FUN_1413ae9a0(void)

void FUN_1413ae9a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146889550 == 0) {
    uVar1 = FUN_1413ae760();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146889550 = GetStaticStruct(FUN_1413aec70,uVar2,L"GoreSelectionResults",0x90,uVar1);
  }
  return;
}



// FUNCTION 1413aea00 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146889560 == 0) {
    uVar1 = FUN_1413ae770();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146889560 = GetStaticStruct(FUN_1413aeca0,uVar2,L"GoreSizeSelectionData",0xa0,uVar1);
  }
  return;
}



// FUNCTION 1413aea60 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146889590 == 0) {
    uVar1 = FUN_1413ae780();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146889590 = GetStaticStruct(FUN_1413aecd0,uVar2,L"GrenadeAttachedTrail",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413aeac0 FUN_1413aeac0 body=82 status=ok
// SIG undefined FUN_1413aeac0(void)

void FUN_1413aeac0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468895a0 == 0) {
    uVar1 = FUN_1413ae790();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468895a0 = GetStaticStruct(FUN_1413aed00,uVar2,L"GrenadeChildGenerationData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1413aeb20 FUN_1413aeb20 body=47 status=ok
// SIG undefined FUN_1413aeb20(void)

longlong FUN_1413aeb20(void)

{
  if (DAT_1468894b8 == 0) {
    FUN_141786440(&DAT_1468894b8,&PTR_GetPrivateStaticClass_14497af80);
  }
  return DAT_1468894b8;
}



// FUNCTION 1413aeb50 FUN_1413aeb50 body=47 status=ok
// SIG undefined FUN_1413aeb50(void)

longlong FUN_1413aeb50(void)

{
  if (DAT_146889528 == 0) {
    FUN_141786440(&DAT_146889528,&PTR_FUN_1449769d0);
  }
  return DAT_146889528;
}



// FUNCTION 1413aeb80 FUN_1413aeb80 body=47 status=ok
// SIG undefined FUN_1413aeb80(void)

longlong FUN_1413aeb80(void)

{
  if (DAT_146889538 == 0) {
    FUN_141786440(&DAT_146889538,&PTR_FUN_144976c30);
  }
  return DAT_146889538;
}



// FUNCTION 1413aebb0 FUN_1413aebb0 body=47 status=ok
// SIG undefined FUN_1413aebb0(void)

longlong FUN_1413aebb0(void)

{
  if (DAT_146889588 == 0) {
    FUN_1417866a0(&DAT_146889588,&PTR_Z_Construct_UPackage__Script_MechWarrior_146362df0);
  }
  return DAT_146889588;
}



// FUNCTION 1413aebe0 FUN_1413aebe0 body=47 status=ok
// SIG undefined FUN_1413aebe0(void)

longlong FUN_1413aebe0(void)

{
  if (DAT_146889548 == 0) {
    FUN_1417866a0(&DAT_146889548,&PTR_Z_Construct_UPackage__Script_MechWarrior_146362da0);
  }
  return DAT_146889548;
}



// FUNCTION 1413aec10 FUN_1413aec10 body=47 status=ok
// SIG undefined FUN_1413aec10(void)

longlong FUN_1413aec10(void)

{
  if (DAT_1468894b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468894b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14635ddf0);
  }
  return DAT_1468894b0;
}



// FUNCTION 1413aec40 FUN_1413aec40 body=47 status=ok
// SIG undefined FUN_1413aec40(void)

longlong FUN_1413aec40(void)

{
  if (DAT_146889520 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146889520,&PTR_Z_Construct_UPackage__Script_MechWarrior_14635f090);
  }
  return DAT_146889520;
}



// FUNCTION 1413aec70 FUN_1413aec70 body=47 status=ok
// SIG undefined FUN_1413aec70(void)

longlong FUN_1413aec70(void)

{
  if (DAT_146889558 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146889558,&PTR_Z_Construct_UPackage__Script_MechWarrior_14635f940);
  }
  return DAT_146889558;
}



// FUNCTION 1413aeca0 FUN_1413aeca0 body=47 status=ok
// SIG undefined FUN_1413aeca0(void)

longlong FUN_1413aeca0(void)

{
  if (DAT_146889568 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146889568,&PTR_Z_Construct_UPackage__Script_MechWarrior_14635fea0);
  }
  return DAT_146889568;
}



// FUNCTION 1413aecd0 FUN_1413aecd0 body=47 status=ok
// SIG undefined FUN_1413aecd0(void)

longlong FUN_1413aecd0(void)

{
  if (DAT_146889598 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146889598,&PTR_Z_Construct_UPackage__Script_MechWarrior_146360c70);
  }
  return DAT_146889598;
}



// FUNCTION 1413aed00 FUN_1413aed00 body=47 status=ok
// SIG undefined FUN_1413aed00(void)

longlong FUN_1413aed00(void)

{
  if (DAT_1468895a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468895a8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146360ea0);
  }
  return DAT_1468895a8;
}



// FUNCTION 1413aed30 FUN_1413aed30 body=504 status=ok
// SIG undefined FUN_1413aed30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413aed30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142cb33a0(puVar1,param_1);
    *(undefined2 *)((longlong)puVar1 + 0x96a) = 0x101;
    *(undefined4 *)((longlong)puVar1 + 0x96c) = 0x3f800000;
    *puVar1 = &PTR_FUN_14497c608;
    *(undefined1 *)(puVar1 + 0x12e) = 0;
    *(undefined4 *)(puVar1 + 0x132) = 0x3f800000;
    puVar1[0x133] = _DAT_1468b5d90;
    *(undefined4 *)(puVar1 + 0x134) = DAT_1468b5d98;
    *(undefined2 *)((longlong)puVar1 + 0x9a4) = 0;
    puVar1[0x135] = 0;
    puVar1[0x136] = 0;
    puVar1[0x137] = 0;
    puVar1[0x138] = 0;
    puVar1[0x139] = 0;
    *(undefined2 *)(puVar1 + 0x13a) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x9d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x9dc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9e4) = 0x3e99999a;
    *(undefined4 *)(puVar1 + 0x13d) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0x9ec) = 0x44480000;
    *(undefined4 *)(puVar1 + 0x13e) = 0x44c80000;
    *(undefined4 *)((longlong)puVar1 + 0x9f4) = 0x44fa0000;
    *(undefined4 *)((longlong)puVar1 + 0x9fc) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0xa02) = 0;
    puVar1[0x141] = 0;
    *(undefined4 *)(puVar1 + 0x142) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0xa24) = 0;
    *(undefined4 *)(puVar1 + 0x146) = 0x40000000;
    *(undefined4 *)((longlong)puVar1 + 0xa44) = 0x45160000;
    *(undefined4 *)(puVar1 + 0x149) = 0x3e99999a;
    *(undefined4 *)((longlong)puVar1 + 0xa4c) = 0x437a0000;
    *(undefined4 *)(puVar1 + 0x14a) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0xa54) = 0x44bb8000;
    *(undefined4 *)(puVar1 + 0x14b) = 0x41700000;
    *(undefined4 *)(puVar1 + 0x14c) = 0x41a00000;
    FName::FName(puVar1 + 0x14d,"VehicleSlot",1);
    puVar1[0x14e] = 0;
    puVar1[0x14f] = 0;
    puVar1[0x150] = 0;
    puVar1[0x151] = 0;
    puVar1[0x152] = 0;
    puVar1[0x153] = 0;
    puVar1[0x154] = 0;
    puVar1[0x155] = 0;
    puVar1[0x156] = 0;
    puVar1[0x157] = 0;
    *(undefined1 *)(puVar1 + 0x159) = 0;
    *(undefined1 *)(puVar1 + 0x15a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xae4) = 0;
    *(undefined1 *)(puVar1 + 0x15d) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xaec) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xad4) = 0x41a3771f;
    *puVar1 = &PTR_FUN_14497c980;
  }
  return;
}



// FUNCTION 1413aef60 FUN_1413aef60 body=50 status=ok
// SIG undefined FUN_1413aef60(void)

void FUN_1413aef60(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 0x6e0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af000 FUN_1413af000 body=128 status=ok
// SIG undefined FUN_1413af000(void)

void FUN_1413af000(undefined8 param_1,longlong param_2)

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
  FUN_14107c2b0(param_1,local_res10);
  return;
}



// FUNCTION 1413af0e0 FUN_1413af0e0 body=383 status=ok
// SIG undefined FUN_1413af0e0(void)

void FUN_1413af0e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_b8 [2];
  undefined8 local_a8 [10];
  undefined8 local_58;
  undefined8 local_40;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_a8[0] = 0;
  local_58 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_res20 = 0;
  puVar1 = local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
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
  FUN_140a8b6b0(param_1,local_b8[0],puVar1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413af260 FUN_1413af260 body=144 status=ok
// SIG undefined FUN_1413af260(void)

void FUN_1413af260(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_140b275a0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af2f0 FUN_1413af2f0 body=57 status=ok
// SIG undefined FUN_1413af2f0(void)

void FUN_1413af2f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b27c50(param_1,local_38);
  FUN_140b17710(param_3,uVar1);
  return;
}



// FUNCTION 1413af330 FUN_1413af330 body=44 status=ok
// SIG undefined FUN_1413af330(void)

void FUN_1413af330(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b28460();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af360 FUN_1413af360 body=44 status=ok
// SIG undefined FUN_1413af360(void)

void FUN_1413af360(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b28570();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af390 FUN_1413af390 body=45 status=ok
// SIG undefined FUN_1413af390(void)

void FUN_1413af390(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b2a6a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af3c0 FUN_1413af3c0 body=45 status=ok
// SIG undefined FUN_1413af3c0(void)

void FUN_1413af3c0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b2a710();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af3f0 FUN_1413af3f0 body=44 status=ok
// SIG undefined FUN_1413af3f0(void)

void FUN_1413af3f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b2a730();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af420 FUN_1413af420 body=163 status=ok
// SIG undefined FUN_1413af420(void)

void FUN_1413af420(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
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
  puVar2 = (undefined8 *)FUN_140b2a880(param_1,local_res10);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 1413af4d0 FUN_1413af4d0 body=60 status=ok
// SIG undefined FUN_1413af4d0(void)

void FUN_1413af4d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_140b2bed0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1413af510 FUN_1413af510 body=142 status=ok
// SIG undefined FUN_1413af510(void)

void FUN_1413af510(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
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
  local_res18[0] = local_res10[0];
  uVar1 = FUN_140b2c0a0(param_1,local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af5a0 FUN_1413af5a0 body=143 status=ok
// SIG undefined FUN_1413af5a0(void)

void FUN_1413af5a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140b2eca0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af630 FUN_1413af630 body=128 status=ok
// SIG undefined FUN_1413af630(void)

void FUN_1413af630(undefined8 param_1,longlong param_2)

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
  FUN_140b30020(param_1,local_res10);
  return;
}



// FUNCTION 1413af6b0 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  FUN_140b30220(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413af770 FUN_1413af770 body=128 status=ok
// SIG undefined FUN_1413af770(void)

void FUN_1413af770(undefined8 param_1,longlong param_2)

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
  FUN_141086840(param_1,local_res10);
  return;
}



// FUNCTION 1413af7f0 FUN_1413af7f0 body=43 status=ok
// SIG undefined FUN_1413af7f0(void)

void FUN_1413af7f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SVirtualWindow::SupportsKeyboardFocus();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413af820 FUN_1413af820 body=123 status=ok
// SIG undefined FUN_1413af820(void)

void FUN_1413af820(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_140b32570(param_1,local_res10[0]);
  return;
}



// FUNCTION 1413af8a0 FUN_1413af8a0 body=123 status=ok
// SIG undefined FUN_1413af8a0(void)

void FUN_1413af8a0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_140b32610(param_1,local_res10[0]);
  return;
}



// FUNCTION 1413af920 FUN_1413af920 body=263 status=ok
// SIG undefined FUN_1413af920(void)

void FUN_1413af920(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_a8 [16];
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_98;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar2 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b34650(param_1,puVar1,puVar2);
  return;
}



// FUNCTION 1413afa30 FUN_1413afa30 body=178 status=ok
// SIG undefined FUN_1413afa30(void)

void FUN_1413afa30(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b38060(param_1,puVar1);
  return;
}



// FUNCTION 1413afaf0 FUN_1413afaf0 body=178 status=ok
// SIG undefined FUN_1413afaf0(void)

void FUN_1413afaf0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b38260(param_1,puVar1);
  return;
}



// FUNCTION 1413afbb0 FUN_1413afbb0 body=132 status=ok
// SIG undefined FUN_1413afbb0(void)

void FUN_1413afbb0(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x5c8))(param_1,local_res8);
  return;
}



// FUNCTION 1413afc40 FUN_1413afc40 body=132 status=ok
// SIG undefined FUN_1413afc40(void)

void FUN_1413afc40(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x5d0))(param_1,local_res8);
  return;
}



// FUNCTION 1413afcd0 FUN_1413afcd0 body=128 status=ok
// SIG undefined FUN_1413afcd0(void)

void FUN_1413afcd0(undefined8 param_1,longlong param_2)

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
  FUN_140b3a770(param_1,local_res10);
  return;
}



// FUNCTION 1413afd90 FUN_1413afd90 body=272 status=ok
// SIG undefined FUN_1413afd90(void)

void FUN_1413afd90(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_28 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b3ccc0(param_1,bVar1,bVar2,local_28[0]);
  return;
}



// FUNCTION 1413afec0 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  FUN_140b3fcd0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413aff80 FUN_1413aff80 body=128 status=ok
// SIG undefined FUN_1413aff80(void)

void FUN_1413aff80(undefined8 param_1,longlong param_2)

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
  uhx::glues::AGPlayerController_Glue_obj::set_MinimalHUD(param_1,local_res10);
  return;
}



// FUNCTION 1413b0000 FUN_1413b0000 body=130 status=ok
// SIG undefined FUN_1413b0000(void)

void FUN_1413b0000(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  SVirtualWindow::SetIsFocusable(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413b0090 FUN_1413b0090 body=138 status=ok
// SIG undefined FUN_1413b0090(void)

void FUN_1413b0090(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b401e0(param_1,puVar1);
  return;
}



// FUNCTION 1413b0120 FUN_1413b0120 body=128 status=ok
// SIG undefined FUN_1413b0120(void)

void FUN_1413b0120(undefined8 param_1,longlong param_2)

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
  FUN_140b43850(param_1,local_res10);
  return;
}



// FUNCTION 1413b01a0 FUN_1413b01a0 body=128 status=ok
// SIG undefined FUN_1413b01a0(void)

void FUN_1413b01a0(undefined8 param_1,longlong param_2)

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
  FUN_140b43890(param_1,local_res10);
  return;
}



// FUNCTION 1413b0220 FUN_1413b0220 body=130 status=ok
// SIG undefined FUN_1413b0220(void)

void FUN_1413b0220(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_140b464c0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413b02b0 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  FUN_140b46700(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413b0370 FUN_1413b0370 body=60 status=ok
// SIG undefined FUN_1413b0370(void)

void FUN_1413b0370(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1410aa490(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1413b03b0 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1410ac3a0(param_1,&local_18);
  return;
}



// FUNCTION 1413b0440 FUN_1413b0440 body=53 status=ok
// SIG undefined FUN_1413b0440(void)

void FUN_1413b0440(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1449832d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413b0490 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_146889b18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadLink",&DAT_146889b18,FUN_140447710,
                  0x48,0x10000000,0,L"Engine",&LAB_1413b22e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889b18;
}



// FUNCTION 1413b0550 FUN_1413b0550 body=162 status=ok
// SIG undefined FUN_1413b0550(void)

longlong FUN_1413b0550(void)

{
  if (DAT_146889b28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadMiniMirv",&DAT_146889b28,FUN_140447710
                  ,0x58,0x10000000,0,L"Engine",&LAB_1413b22f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889b28;
}



// FUNCTION 1413b0610 FUN_1413b0610 body=162 status=ok
// SIG undefined FUN_1413b0610(void)

longlong FUN_1413b0610(void)

{
  if (DAT_146889b38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadMirv",&DAT_146889b38,FUN_140447710,
                  0x78,0x10000000,0,L"Engine",&LAB_1413b2300,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889b38;
}



// FUNCTION 1413b06d0 FUN_1413b06d0 body=162 status=ok
// SIG undefined FUN_1413b06d0(void)

longlong FUN_1413b06d0(void)

{
  if (DAT_146889b58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadMoney",&DAT_146889b58,FUN_140447710,
                  0x78,0x10000000,0,L"Engine",&LAB_1413b2310,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889b58;
}



// FUNCTION 1413b0780 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_1468899d8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_DeliveryRubberized",&DAT_1468899d8,
                  FUN_140447710,0xc0,0x10000000,0,L"Engine",FUN_1413b20e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413b0ce0,&LAB_140447700,0);
  }
  return DAT_1468899d8;
}



// FUNCTION 1413b0830 FUN_1413b0830 body=53 status=ok
// SIG undefined FUN_1413b0830(void)

void FUN_1413b0830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144982e88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413b0880 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXPrimaryDataAsset::GetPrivateStaticClass(void)

{
  if (DAT_1468899f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_Payload",&DAT_1468899f0,
                  StaticRegisterNativesUXPrimaryDataAsset,0x48,0x10000001,0,L"Engine",&LAB_1413b2170
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonMarkerEmitter::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468899f0;
}



// FUNCTION 1413b0940 FUN_1413b0940 body=47 status=ok
// SIG undefined FUN_1413b0940(void)

longlong FUN_1413b0940(void)

{
  if (DAT_1468899e8 == 0) {
    FUN_141786440(&DAT_1468899e8,&PTR_GetPrivateStaticClass_14497e940);
  }
  return DAT_1468899e8;
}



// FUNCTION 1413b0970 FUN_1413b0970 body=47 status=ok
// SIG undefined FUN_1413b0970(void)

longlong FUN_1413b0970(void)

{
  if (DAT_1468899e0 == 0) {
    FUN_141786a30(&DAT_1468899e0,&PTR_FUN_146364660);
  }
  return DAT_1468899e0;
}



// FUNCTION 1413b09a0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDungeonMarkerEmitter::GetPrivateStaticClass(void)

{
  if (DAT_1468898e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior",&DAT_1468898e0,FUN_140447710,0x28,0x10000001
                  ,0,L"Engine",FUN_1413b1ee0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468898e0;
}



// FUNCTION 1413b0a50 FUN_1413b0a50 body=47 status=ok
// SIG undefined FUN_1413b0a50(void)

longlong FUN_1413b0a50(void)

{
  if (DAT_1468898d8 == 0) {
    FUN_141786440(&DAT_1468898d8,&PTR_GetPrivateStaticClass_14497ea20);
  }
  return DAT_1468898d8;
}



// FUNCTION 1413b0a90 FUN_1413b0a90 body=162 status=ok
// SIG undefined FUN_1413b0a90(void)

longlong FUN_1413b0a90(void)

{
  if (DAT_1468898f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_Delivery",&DAT_1468898f0,FUN_140447710,0x30,
                  0x10000001,0,L"Engine",FUN_1413b1f10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonMarkerEmitter::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468898f0;
}



// FUNCTION 1413b0b40 FUN_1413b0b40 body=47 status=ok
// SIG undefined FUN_1413b0b40(void)

longlong FUN_1413b0b40(void)

{
  if (DAT_1468898e8 == 0) {
    FUN_141786440(&DAT_1468898e8,&PTR_FUN_14497ebd0);
  }
  return DAT_1468898e8;
}



// FUNCTION 1413b0b70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_146889a80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadBlueprint",&DAT_146889a80,
                  StaticRegisterNativesUAESHelper,0x48,0x10000000,0,L"Engine",FUN_1413b2190,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UXPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889a80;
}



// FUNCTION 1413b0c30 FUN_1413b0c30 body=162 status=ok
// SIG undefined FUN_1413b0c30(void)

longlong FUN_1413b0c30(void)

{
  if (DAT_146889a00 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadArtillery",&DAT_146889a00,
                  FUN_140447710,0x88,0x10000000,0,L"Engine",&LAB_1413b2180,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889a00;
}



// FUNCTION 1413b0ce0 FUN_1413b0ce0 body=162 status=ok
// SIG undefined FUN_1413b0ce0(void)

longlong FUN_1413b0ce0(void)

{
  if (DAT_146889958 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_DeliveryBlueprint",&DAT_146889958,
                  FUN_1413b3ce0,0x30,0x10000000,0,L"Engine",FUN_1413b1f40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413b0a90,&LAB_140447700,0);
  }
  return DAT_146889958;
}



// FUNCTION 1413b0d90 FUN_1413b0d90 body=47 status=ok
// SIG undefined FUN_1413b0d90(void)

longlong FUN_1413b0d90(void)

{
  if (DAT_146889a78 == 0) {
    FUN_141786440(&DAT_146889a78,&PTR_GetPrivateStaticClass_1449801f0);
  }
  return DAT_146889a78;
}



// FUNCTION 1413b0dc0 FUN_1413b0dc0 body=47 status=ok
// SIG undefined FUN_1413b0dc0(void)

longlong FUN_1413b0dc0(void)

{
  if (DAT_146889950 == 0) {
    FUN_141786440(&DAT_146889950,&PTR_FUN_14497f9c0);
  }
  return DAT_146889950;
}



// FUNCTION 1413b0df0 FUN_1413b0df0 body=47 status=ok
// SIG undefined FUN_1413b0df0(void)

longlong FUN_1413b0df0(void)

{
  if (DAT_1468898f8 == 0) {
    FUN_141786a30(&DAT_1468898f8,&PTR_FUN_146362fc0);
  }
  return DAT_1468898f8;
}



// FUNCTION 1413b0e20 FUN_1413b0e20 body=47 status=ok
// SIG undefined FUN_1413b0e20(void)

longlong FUN_1413b0e20(void)

{
  if (DAT_146889900 == 0) {
    FUN_141786a30(&DAT_146889900,&PTR_FUN_146363080);
  }
  return DAT_146889900;
}



// FUNCTION 1413b0e50 FUN_1413b0e50 body=47 status=ok
// SIG undefined FUN_1413b0e50(void)

longlong FUN_1413b0e50(void)

{
  if (DAT_146889908 == 0) {
    FUN_141786a30(&DAT_146889908,&PTR_FUN_146363140);
  }
  return DAT_146889908;
}



// FUNCTION 1413b0e80 FUN_1413b0e80 body=47 status=ok
// SIG undefined FUN_1413b0e80(void)

longlong FUN_1413b0e80(void)

{
  if (DAT_146889910 == 0) {
    FUN_141786a30(&DAT_146889910,&PTR_FUN_146363200);
  }
  return DAT_146889910;
}



// FUNCTION 1413b0eb0 FUN_1413b0eb0 body=47 status=ok
// SIG undefined FUN_1413b0eb0(void)

longlong FUN_1413b0eb0(void)

{
  if (DAT_146889918 == 0) {
    FUN_141786a30(&DAT_146889918,&PTR_FUN_1463632c0);
  }
  return DAT_146889918;
}



// FUNCTION 1413b0ee0 FUN_1413b0ee0 body=47 status=ok
// SIG undefined FUN_1413b0ee0(void)

longlong FUN_1413b0ee0(void)

{
  if (DAT_146889920 == 0) {
    FUN_141786a30(&DAT_146889920,&PTR_FUN_1463633c0);
  }
  return DAT_146889920;
}



// FUNCTION 1413b0f10 FUN_1413b0f10 body=47 status=ok
// SIG undefined FUN_1413b0f10(void)

longlong FUN_1413b0f10(void)

{
  if (DAT_146889928 == 0) {
    FUN_141786a30(&DAT_146889928,&PTR_FUN_146363480);
  }
  return DAT_146889928;
}



// FUNCTION 1413b0f40 FUN_1413b0f40 body=47 status=ok
// SIG undefined FUN_1413b0f40(void)

longlong FUN_1413b0f40(void)

{
  if (DAT_146889930 == 0) {
    FUN_141786a30(&DAT_146889930,&PTR_FUN_146363540);
  }
  return DAT_146889930;
}



// FUNCTION 1413b0f70 FUN_1413b0f70 body=47 status=ok
// SIG undefined FUN_1413b0f70(void)

longlong FUN_1413b0f70(void)

{
  if (DAT_146889938 == 0) {
    FUN_141786a30(&DAT_146889938,&PTR_FUN_146363640);
  }
  return DAT_146889938;
}



// FUNCTION 1413b0fa0 FUN_1413b0fa0 body=47 status=ok
// SIG undefined FUN_1413b0fa0(void)

longlong FUN_1413b0fa0(void)

{
  if (DAT_146889940 == 0) {
    FUN_141786a30(&DAT_146889940,&PTR_FUN_1463636c0);
  }
  return DAT_146889940;
}



// FUNCTION 1413b0fd0 FUN_1413b0fd0 body=47 status=ok
// SIG undefined FUN_1413b0fd0(void)

longlong FUN_1413b0fd0(void)

{
  if (DAT_146889948 == 0) {
    FUN_141786a30(&DAT_146889948,&PTR_FUN_1463637f0);
  }
  return DAT_146889948;
}



// FUNCTION 1413b1010 FUN_1413b1010 body=47 status=ok
// SIG undefined FUN_1413b1010(void)

longlong FUN_1413b1010(void)

{
  if (DAT_146889a08 == 0) {
    FUN_141786a30(&DAT_146889a08,&PTR_FUN_146364b00);
  }
  return DAT_146889a08;
}



// FUNCTION 1413b1040 FUN_1413b1040 body=47 status=ok
// SIG undefined FUN_1413b1040(void)

longlong FUN_1413b1040(void)

{
  if (DAT_146889a10 == 0) {
    FUN_141786a30(&DAT_146889a10,&PTR_FUN_146364c00);
  }
  return DAT_146889a10;
}



// FUNCTION 1413b1070 FUN_1413b1070 body=47 status=ok
// SIG undefined FUN_1413b1070(void)

longlong FUN_1413b1070(void)

{
  if (DAT_146889a18 == 0) {
    FUN_141786a30(&DAT_146889a18,&PTR_FUN_146364d00);
  }
  return DAT_146889a18;
}



// FUNCTION 1413b10a0 FUN_1413b10a0 body=47 status=ok
// SIG undefined FUN_1413b10a0(void)

longlong FUN_1413b10a0(void)

{
  if (DAT_146889a20 == 0) {
    FUN_141786a30(&DAT_146889a20,&PTR_FUN_146364e80);
  }
  return DAT_146889a20;
}



// FUNCTION 1413b10d0 FUN_1413b10d0 body=47 status=ok
// SIG undefined FUN_1413b10d0(void)

longlong FUN_1413b10d0(void)

{
  if (DAT_146889a28 == 0) {
    FUN_141786a30(&DAT_146889a28,&PTR_FUN_146364f80);
  }
  return DAT_146889a28;
}



// FUNCTION 1413b1100 FUN_1413b1100 body=47 status=ok
// SIG undefined FUN_1413b1100(void)

longlong FUN_1413b1100(void)

{
  if (DAT_146889a30 == 0) {
    FUN_141786a30(&DAT_146889a30,&PTR_FUN_146365080);
  }
  return DAT_146889a30;
}



// FUNCTION 1413b1130 FUN_1413b1130 body=47 status=ok
// SIG undefined FUN_1413b1130(void)

longlong FUN_1413b1130(void)

{
  if (DAT_146889a38 == 0) {
    FUN_141786a30(&DAT_146889a38,&PTR_FUN_1463651c0);
  }
  return DAT_146889a38;
}



// FUNCTION 1413b1160 FUN_1413b1160 body=47 status=ok
// SIG undefined FUN_1413b1160(void)

longlong FUN_1413b1160(void)

{
  if (DAT_146889a40 == 0) {
    FUN_141786a30(&DAT_146889a40,&PTR_FUN_1463652c0);
  }
  return DAT_146889a40;
}



// FUNCTION 1413b1190 FUN_1413b1190 body=47 status=ok
// SIG undefined FUN_1413b1190(void)

longlong FUN_1413b1190(void)

{
  if (DAT_146889a48 == 0) {
    FUN_141786a30(&DAT_146889a48,&PTR_FUN_1463653c0);
  }
  return DAT_146889a48;
}



// FUNCTION 1413b11c0 FUN_1413b11c0 body=47 status=ok
// SIG undefined FUN_1413b11c0(void)

longlong FUN_1413b11c0(void)

{
  if (DAT_146889a50 == 0) {
    FUN_141786a30(&DAT_146889a50,&PTR_FUN_146365500);
  }
  return DAT_146889a50;
}



// FUNCTION 1413b11f0 FUN_1413b11f0 body=47 status=ok
// SIG undefined FUN_1413b11f0(void)

longlong FUN_1413b11f0(void)

{
  if (DAT_146889a58 == 0) {
    FUN_141786a30(&DAT_146889a58,&PTR_FUN_146365580);
  }
  return DAT_146889a58;
}



// FUNCTION 1413b1220 FUN_1413b1220 body=47 status=ok
// SIG undefined FUN_1413b1220(void)

longlong FUN_1413b1220(void)

{
  if (DAT_146889a60 == 0) {
    FUN_141786a30(&DAT_146889a60,&PTR_FUN_146365640);
  }
  return DAT_146889a60;
}



// FUNCTION 1413b1250 FUN_1413b1250 body=47 status=ok
// SIG undefined FUN_1413b1250(void)

longlong FUN_1413b1250(void)

{
  if (DAT_146889a68 == 0) {
    FUN_141786a30(&DAT_146889a68,&PTR_FUN_1463657b0);
  }
  return DAT_146889a68;
}



// FUNCTION 1413b1280 FUN_1413b1280 body=47 status=ok
// SIG undefined FUN_1413b1280(void)

longlong FUN_1413b1280(void)

{
  if (DAT_146889a70 == 0) {
    FUN_141786a30(&DAT_146889a70,&PTR_FUN_1463658b0);
  }
  return DAT_146889a70;
}



// FUNCTION 1413b12c0 FUN_1413b12c0 body=162 status=ok
// SIG undefined FUN_1413b12c0(void)

longlong FUN_1413b12c0(void)

{
  if (DAT_146889968 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_DeliveryFrag",&DAT_146889968,FUN_140447710,
                  0x38,0x10000000,0,L"Engine",FUN_1413b1f70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413b0ce0,&LAB_140447700,0);
  }
  return DAT_146889968;
}



// FUNCTION 1413b1380 FUN_1413b1380 body=162 status=ok
// SIG undefined FUN_1413b1380(void)

longlong FUN_1413b1380(void)

{
  if (DAT_146889978 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_DeliveryHeavy",&DAT_146889978,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",FUN_1413b1fb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413b0ce0,&LAB_140447700,0);
  }
  return DAT_146889978;
}



// FUNCTION 1413b1450 FUN_1413b1450 body=162 status=ok
// SIG undefined FUN_1413b1450(void)

longlong FUN_1413b1450(void)

{
  if (DAT_146889a90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadBouncy",&DAT_146889a90,FUN_140447710,
                  0x60,0x10000000,0,L"Engine",&LAB_1413b21c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889a90;
}



// FUNCTION 1413b1510 FUN_1413b1510 body=162 status=ok
// SIG undefined FUN_1413b1510(void)

longlong FUN_1413b1510(void)

{
  if (DAT_146889aa0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadDivider",&DAT_146889aa0,FUN_140447710,
                  0x68,0x10000000,0,L"Engine",&LAB_1413b21d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889aa0;
}



// FUNCTION 1413b15d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_146889ab0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadElementalDamage",&DAT_146889ab0,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",&LAB_1413b21e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889ab0;
}



// FUNCTION 1413b1690 FUN_1413b1690 body=162 status=ok
// SIG undefined FUN_1413b1690(void)

longlong FUN_1413b1690(void)

{
  if (DAT_146889ac0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadForce",&DAT_146889ac0,FUN_140447710,
                  0x58,0x10000000,0,L"Engine",&LAB_1413b21f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889ac0;
}



// FUNCTION 1413b1750 FUN_1413b1750 body=162 status=ok
// SIG undefined FUN_1413b1750(void)

longlong FUN_1413b1750(void)

{
  if (DAT_146889ad0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadGenerator",&DAT_146889ad0,
                  FUN_140447710,0x88,0x10000000,0,L"Engine",&LAB_1413b2200,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889ad0;
}



// FUNCTION 1413b1810 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_146889ae0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadLarge",&DAT_146889ae0,FUN_140447710,
                  0x48,0x10000000,0,L"Engine",&LAB_1413b2210,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889ae0;
}



// FUNCTION 1413b18c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGOnlineSessionClient::GetPrivateStaticClass(void)

{
  if (DAT_146889998 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_DeliveryHoming",&DAT_146889998,FUN_140447710,
                  0x1d8,0x10000000,0,L"Engine",FUN_1413b1fe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413b0ce0,&LAB_140447700,0);
  }
  return DAT_146889998;
}



// FUNCTION 1413b1970 FUN_1413b1970 body=47 status=ok
// SIG undefined FUN_1413b1970(void)

longlong FUN_1413b1970(void)

{
  if (DAT_146889990 == 0) {
    FUN_141786440(&DAT_146889990,&PTR_GetPrivateStaticClass_144981170);
  }
  return DAT_146889990;
}



// FUNCTION 1413b19a0 FUN_1413b19a0 body=47 status=ok
// SIG undefined FUN_1413b19a0(void)

longlong FUN_1413b19a0(void)

{
  if (DAT_146889980 == 0) {
    FUN_141786a30(&DAT_146889980,&PTR_FUN_1463639e0);
  }
  return DAT_146889980;
}



// FUNCTION 1413b19d0 FUN_1413b19d0 body=47 status=ok
// SIG undefined FUN_1413b19d0(void)

longlong FUN_1413b19d0(void)

{
  if (DAT_146889988 == 0) {
    FUN_141786a30(&DAT_146889988,&PTR_FUN_146363aa0);
  }
  return DAT_146889988;
}



// FUNCTION 1413b1a10 FUN_1413b1a10 body=162 status=ok
// SIG undefined FUN_1413b1a10(void)

longlong FUN_1413b1a10(void)

{
  if (DAT_146889b08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_PayloadLingering",&DAT_146889b08,
                  FUN_140447710,200,0x10000000,0,L"Engine",FUN_1413b2220,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAESHelper::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889b08;
}



// FUNCTION 1413b1ad0 FUN_1413b1ad0 body=162 status=ok
// SIG undefined FUN_1413b1ad0(void)

longlong FUN_1413b1ad0(void)

{
  if (DAT_1468899a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_DeliveryImpact",&DAT_1468899a8,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",FUN_1413b1f40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413b0ce0,&LAB_140447700,0);
  }
  return DAT_1468899a8;
}



// FUNCTION 1413b1b90 FUN_1413b1b90 body=162 status=ok
// SIG undefined FUN_1413b1b90(void)

longlong FUN_1413b1b90(void)

{
  if (DAT_1468899b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehavior_DeliveryLongbow",&DAT_1468899b8,FUN_140447710
                  ,0x90,0x10000000,0,L"Engine",FUN_1413b2070,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413b0ce0,&LAB_140447700,0);
  }
  return DAT_1468899b8;
}



// FUNCTION 1413b1c50 FUN_1413b1c50 body=649 status=ok
// SIG undefined FUN_1413b1c50(void)

int * FUN_1413b1c50(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  int local_res8 [2];
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar9 * 0x18);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)_Src = *param_3;
  *(undefined4 *)((longlong)_Src + 4) = uVar4;
  *(undefined4 *)(_Src + 1) = uVar5;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar6;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140af9bd0(param_1,local_res8,_Src);
    iVar9 = local_res8[0];
    lVar14 = (longlong)local_res8[0];
    bVar17 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar14 * 0x18),_Src,0x10);
      iVar2 = *param_2;
      bVar3 = (byte)iVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar2;
      }
      lVar14 = *param_1;
      *(undefined4 *)(lVar14 + (longlong)iVar2 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar14 + 4 + (longlong)iVar2 * 0x18) = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar2;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar13 = (undefined1)local_res8[0];
      goto LAB_1413b1eb5;
    }
  }
  uVar13 = 0;
  cVar7 = TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar16 = -(iVar9 + uVar12) ^ uVar12 >> 0xd;
    uVar10 = (iVar9 - uVar12) - uVar16 ^ uVar16 >> 0xc;
    uVar12 = (uVar12 - uVar10) - uVar16 ^ uVar10 << 0x10;
    uVar16 = (uVar16 - uVar12) - uVar10 ^ uVar12 >> 5;
    uVar10 = (uVar10 - uVar12) - uVar16 ^ uVar16 >> 3;
    uVar12 = (uVar12 - uVar10) - uVar16 ^ uVar10 << 10;
    uVar10 = ((uVar16 - uVar12) - uVar10 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1413b1eb5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar13;
  }
  return param_2;
}



// FUNCTION 1413b1ee0 FUN_1413b1ee0 body=41 status=ok
// SIG undefined FUN_1413b1ee0(void)

void FUN_1413b1ee0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144288f08;
  }
  return;
}



// FUNCTION 1413b1f10 FUN_1413b1f10 body=41 status=ok
// SIG undefined FUN_1413b1f10(void)

void FUN_1413b1f10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144981b38;
  }
  return;
}



// FUNCTION 1413b1f40 FUN_1413b1f40 body=41 status=ok
// SIG undefined FUN_1413b1f40(void)

void FUN_1413b1f40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144981df8;
  }
  return;
}



// FUNCTION 1413b1f70 FUN_1413b1f70 body=55 status=ok
// SIG undefined FUN_1413b1f70(void)

void FUN_1413b1f70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x3eb33333;
    *puVar1 = &PTR_FUN_1449820c8;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f000000;
  }
  return;
}



// FUNCTION 1413b1fb0 FUN_1413b1fb0 body=41 status=ok
// SIG undefined FUN_1413b1fb0(void)

void FUN_1413b1fb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144982388;
  }
  return;
}



// FUNCTION 1413b1fe0 FUN_1413b1fe0 body=129 status=ok
// SIG undefined FUN_1413b1fe0(void)

void FUN_1413b1fe0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x3f000000;
    *puVar1 = &PTR_FUN_144982648;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3e4ccccd;
    *(undefined4 *)(puVar1 + 7) = 0x3f4ccccd;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3e99999a;
    *(undefined4 *)(puVar1 + 9) = 0x44bb8000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x447a0000;
    puVar1[10] = 0x3ecccccd;
    *(undefined4 *)(puVar1 + 0xb) = 0x3f800000;
    FUN_142d2e580(puVar1 + 0xc);
    FUN_142d2e580(puVar1 + 0x23);
    *(undefined4 *)(puVar1 + 0x3a) = 0x3f000000;
  }
  return;
}



// FUNCTION 1413b2070 FUN_1413b2070 body=107 status=ok
// SIG undefined FUN_1413b2070(void)

void FUN_1413b2070(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x44480000;
    *puVar1 = &PTR_FUN_144982908;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x44bb8000;
    *(undefined4 *)(puVar1 + 7) = 0x3e99999a;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x461c4000;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x41200000;
    *(undefined4 *)(puVar1 + 0xe) = 0x41200000;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x11) = 0x3ecccccd;
  }
  return;
}



// FUNCTION 1413b20e0 FUN_1413b20e0 body=139 status=ok
// SIG undefined FUN_1413b20e0(void)

void FUN_1413b20e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 4;
    *puVar1 = &PTR_FUN_144982bc8;
    *(undefined4 *)(puVar1 + 9) = 0x442f0000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x43fa0000;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0x3f8ccccd;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x3fa00000;
  }
  return;
}



// FUNCTION 1413b2190 FUN_1413b2190 body=38 status=ok
// SIG undefined FUN_1413b2190(void)

void FUN_1413b2190(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140aece00(puVar1);
    *puVar1 = &PTR_FUN_144289460;
  }
  return;
}



// FUNCTION 1413b2220 FUN_1413b2220 body=180 status=ok
// SIG undefined FUN_1413b2220(void)

void FUN_1413b2220(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140aece00(puVar1);
    *puVar1 = &PTR_FUN_144982fd0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0x3f99999a;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x14) = 0x42480000;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x41f00000;
    *(undefined4 *)(puVar1 + 0x15) = 0x41f00000;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0x43c80000;
    *(undefined4 *)(puVar1 + 0x16) = 3;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x3ee66666;
    *(undefined1 *)(puVar1 + 0x17) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x41200000;
  }
  return;
}



// FUNCTION 1413b2320 FUN_1413b2320 body=397 status=ok
// SIG undefined FUN_1413b2320(void)

void FUN_1413b2320(longlong *param_1)

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
      if (bVar4) goto LAB_1413b23e1;
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
LAB_1413b23e1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x58 + *param_1 + 0x40) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 1413b24b0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1413b260b;
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
LAB_1413b260b:
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
        FUN_1413b1c50(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1413b26b0 FUN_1413b26b0 body=76 status=ok
// SIG undefined FUN_1413b26b0(void)

longlong FUN_1413b26b0(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0x118);
  FUN_1406d8b70(param_1 + 0x60);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 1413b2700 FUN_1413b2700 body=52 status=ok
// SIG undefined FUN_1413b2700(void)

undefined8 FUN_1413b2700(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1413b2740 FUN_1413b2740 body=102 status=ok
// SIG undefined FUN_1413b2740(void)

longlong FUN_1413b2740(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x68);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1413b27b0 FUN_1413b27b0 body=130 status=ok
// SIG undefined FUN_1413b27b0(void)

longlong FUN_1413b27b0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FUN_1413b2320(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1413b2840 ConditionalRehash body=161 status=ok
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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1413b28f0 FUN_1413b28f0 body=60 status=ok
// SIG undefined FUN_1413b28f0(void)

void FUN_1413b28f0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1413b2930 FUN_1413b2930 body=121 status=ok
// SIG undefined FUN_1413b2930(void)

void FUN_1413b2930(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[2] = 0;
  FName::FName(param_2 + 3,L"SnapZoom",1);
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x3e800000;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x44110000;
  *(undefined4 *)(param_2 + 6) = 0x43af0000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x43af0000;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



// FUNCTION 1413b29b0 FUN_1413b29b0 body=103 status=ok
// SIG undefined FUN_1413b29b0(void)

undefined8 FUN_1413b29b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10 + param_2);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
      ::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413b2a20 FUN_1413b2a20 body=250 status=ok
// SIG undefined FUN_1413b2a20(void)

undefined8 FUN_1413b2a20(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = *(undefined1 *)(puVar3 + -1);
      puVar1 = (undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 8) = *puVar3;
      *(undefined8 *)(param_2 + 0x10) = puVar3[1];
      *(undefined8 *)(param_2 + 0x18) = puVar3[2];
      *(undefined8 *)(param_2 + 0x20) = puVar3[3];
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(puVar3 + 4);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((longlong)puVar3 + 0x24);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar3 + 5);
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)((longlong)puVar3 + 0x2c);
      if (puVar1 != puVar3 + 6) {
        iVar2 = *(int *)(puVar3 + 7);
        _Src = (void *)puVar3[6];
        *(int *)(param_2 + 0x40) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x44) == 0)) {
          *(undefined4 *)(param_2 + 0x44) = 0;
        }
        else {
          TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x38);
        }
      }
      puVar3 = puVar3 + 9;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x48;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413b2b20 Destruct body=44 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FObjectiveSpawnData>::Destruct
               (undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_2 + 0x10);
  return;
}



// FUNCTION 1413b2b50 FUN_1413b2b50 body=55 status=ok
// SIG undefined FUN_1413b2b50(void)

void FUN_1413b2b50(void)

{
  undefined8 uVar1;
  
  if (DAT_1468896e8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468896e8 = GetStaticEnum(FUN_1413b41c0,uVar1,L"ELingeringDamageStyle");
  }
  return;
}



// FUNCTION 1413b2b90 FUN_1413b2b90 body=6 status=ok
// SIG undefined FUN_1413b2b90(void)

undefined8 FUN_1413b2b90(void)

{
  return 0xc87a6bcb;
}



// FUNCTION 1413b2ba0 FUN_1413b2ba0 body=6 status=ok
// SIG undefined FUN_1413b2ba0(void)

undefined8 FUN_1413b2ba0(void)

{
  return 0x838fbb6;
}



// FUNCTION 1413b2bb0 FUN_1413b2bb0 body=6 status=ok
// SIG undefined FUN_1413b2bb0(void)

undefined8 FUN_1413b2bb0(void)

{
  return 0xf1a531cc;
}



// FUNCTION 1413b2bc0 FUN_1413b2bc0 body=61 status=ok
// SIG undefined FUN_1413b2bc0(void)

void FUN_1413b2bc0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468897d8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413b2c00 FUN_1413b2c00 body=142 status=ok
// SIG undefined FUN_1413b2c00(void)

void FUN_1413b2c00(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_140b15f30(&local_40);
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = *(undefined4 *)(param_3 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_28 = *(undefined4 *)(param_3 + 3);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar1 = *param_1;
  local_20 = *(undefined4 *)(param_3 + 4);
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_18 = *(undefined4 *)(param_3 + 5);
  uStack_14 = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_48 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146889868);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  *param_3 = local_40;
  param_3[1] = uStack_38;
  param_3[2] = CONCAT44(uStack_2c,local_30);
  param_3[3] = CONCAT44(uStack_24,uStack_28);
  param_3[4] = CONCAT44(uStack_1c,local_20);
  param_3[5] = CONCAT44(uStack_14,uStack_18);
  return;
}



// FUNCTION 1413b2c90 FUN_1413b2c90 body=71 status=ok
// SIG undefined FUN_1413b2c90(void)

void FUN_1413b2c90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = *param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146889850);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1413b2ce0 FUN_1413b2ce0 body=66 status=ok
// SIG undefined FUN_1413b2ce0(void)

void FUN_1413b2ce0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889800);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1413b2d30 FUN_1413b2d30 body=165 status=ok
// SIG undefined FUN_1413b2d30(void)

void FUN_1413b2d30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
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
  
  FUN_140b15f30(&local_38);
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  local_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_48 = param_2;
  local_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889870);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  *param_4 = local_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,local_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,local_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 1413b2de0 FUN_1413b2de0 body=66 status=ok
// SIG undefined FUN_1413b2de0(void)

void FUN_1413b2de0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889808);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1413b2e30 FUN_1413b2e30 body=165 status=ok
// SIG undefined FUN_1413b2e30(void)

void FUN_1413b2e30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
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
  
  FUN_140b15f30(&local_38);
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  local_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_48 = param_2;
  local_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889878);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  *param_4 = local_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,local_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,local_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 1413b2ee0 FUN_1413b2ee0 body=332 status=ok
// SIG undefined FUN_1413b2ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413b2ee0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [5];
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  FUN_140b15f30(&local_88);
  local_48[2] = 0;
  local_48[3] = 0;
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_48[0] = 0;
  local_48[1] = 0;
  local_68 = param_4[4];
  uStack_60 = param_4[5];
  local_20 = DAT_1468b5d98;
  local_48[4] = _DAT_1468b5d90;
  local_1c = _DAT_1468b5d90;
  local_78 = *(undefined4 *)(param_4 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_70 = *(undefined4 *)(param_4 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_14 = DAT_1468b5d98;
  local_50 = *param_6;
  local_10 = 0;
  local_58 = param_5;
  local_98 = param_2;
  local_90 = param_3;
  FUN_1408e22e0(local_48,param_6 + 2);
  local_48[2] = *(longlong *)(param_6 + 6);
  local_48[4] = *(longlong *)(param_6 + 10);
  local_48[3] = *(longlong *)(param_6 + 8);
  local_20 = param_6[0xc];
  local_14 = param_6[0xf];
  local_10 = *(undefined1 *)(param_6 + 0x10);
  local_1c = *(undefined8 *)(param_6 + 0xd);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146889880);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_98);
  *param_4 = local_88;
  param_4[1] = uStack_80;
  *(undefined4 *)(param_4 + 2) = local_78;
  *(undefined4 *)((longlong)param_4 + 0x14) = uStack_74;
  *(undefined4 *)(param_4 + 3) = uStack_70;
  *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_6c;
  *(undefined4 *)(param_4 + 4) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_4 + 0x24) = local_68._4_4_;
  *(undefined4 *)(param_4 + 5) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_60._4_4_;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413b3030 FUN_1413b3030 body=66 status=ok
// SIG undefined FUN_1413b3030(void)

void FUN_1413b3030(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889810);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1413b3080 FUN_1413b3080 body=165 status=ok
// SIG undefined FUN_1413b3080(void)

void FUN_1413b3080(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
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
  
  FUN_140b15f30(&local_38);
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  local_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_48 = param_2;
  local_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889888);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  *param_4 = local_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,local_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,local_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 1413b3130 FUN_1413b3130 body=66 status=ok
// SIG undefined FUN_1413b3130(void)

void FUN_1413b3130(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889818);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1413b3180 FUN_1413b3180 body=165 status=ok
// SIG undefined FUN_1413b3180(void)

void FUN_1413b3180(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
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
  
  FUN_140b15f30(&local_38);
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  local_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_48 = param_2;
  local_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889890);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  *param_4 = local_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,local_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,local_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 1413b3230 FUN_1413b3230 body=362 status=ok
// SIG undefined FUN_1413b3230(void)

void FUN_1413b3230(longlong *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  undefined8 local_a0;
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
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = *(undefined4 *)(param_4 + 0xc);
  local_88 = *(undefined4 *)(param_4 + 0x10);
  local_98[0] = local_98[0] ^ (*param_4 ^ local_98[0]) & 3;
  local_94 = *(undefined4 *)(param_4 + 4);
  local_84 = *(undefined8 *)(param_4 + 0x14);
  local_90 = local_90 ^ (*(uint *)(param_4 + 8) ^ local_90) & 1;
  local_7c = *(undefined4 *)(param_4 + 0x1c);
  local_70 = *(undefined4 *)(param_4 + 0x28);
  local_64 = *(undefined4 *)(param_4 + 0x34);
  local_58 = *(undefined4 *)(param_4 + 0x40);
  local_4c = *(undefined4 *)(param_4 + 0x4c);
  local_40 = *(undefined4 *)(param_4 + 0x58);
  local_38 = *(undefined4 *)(param_4 + 0x60);
  local_34 = *(undefined4 *)(param_4 + 100);
  local_30 = *(undefined4 *)(param_4 + 0x68);
  local_78 = *(undefined8 *)(param_4 + 0x20);
  local_2c = *(undefined4 *)(param_4 + 0x6c);
  local_6c = *(undefined8 *)(param_4 + 0x2c);
  local_28 = *(undefined4 *)(param_4 + 0x70);
  local_60 = *(undefined8 *)(param_4 + 0x38);
  local_24 = *(undefined4 *)(param_4 + 0x74);
  local_54 = *(undefined8 *)(param_4 + 0x44);
  local_20 = *(undefined4 *)(param_4 + 0x78);
  local_18 = *(undefined8 *)(param_4 + 0x80);
  local_48 = *(undefined8 *)(param_4 + 0x50);
  local_10 = *(undefined8 *)(param_4 + 0x88);
  local_3c = *(undefined4 *)(param_4 + 0x5c);
  lVar1 = *param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889820);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_a8);
  return;
}



// FUNCTION 1413b33a0 FUN_1413b33a0 body=475 status=ok
// SIG undefined FUN_1413b33a0(void)

void FUN_1413b33a0(longlong *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_d8;
  undefined8 local_d0;
  byte local_c8 [4];
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
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
  
  local_64 = 0xffffffff;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = local_40 & 0xffffffff00000000;
  local_5c = 0xffffffff;
  local_54 = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(local_c8,0,0x90);
  local_bc = 0x3f800000;
  FUN_140b15f30(&local_38);
  local_bc = *(undefined4 *)(param_4 + 0xc);
  local_b8 = *(undefined4 *)(param_4 + 0x10);
  local_c8[0] = local_c8[0] ^ (*param_4 ^ local_c8[0]) & 3;
  local_b4 = *(undefined8 *)(param_4 + 0x14);
  local_c4 = *(undefined4 *)(param_4 + 4);
  local_a8 = *(undefined8 *)(param_4 + 0x20);
  local_c0 = local_c0 ^ (*(uint *)(param_4 + 8) ^ local_c0) & 1;
  local_ac = *(undefined4 *)(param_4 + 0x1c);
  local_a0 = *(undefined4 *)(param_4 + 0x28);
  local_94 = *(undefined4 *)(param_4 + 0x34);
  local_88 = *(undefined4 *)(param_4 + 0x40);
  local_7c = *(undefined4 *)(param_4 + 0x4c);
  local_70 = *(undefined4 *)(param_4 + 0x58);
  local_68 = *(undefined4 *)(param_4 + 0x60);
  local_64 = *(undefined4 *)(param_4 + 100);
  local_9c = *(undefined8 *)(param_4 + 0x2c);
  local_60 = *(undefined4 *)(param_4 + 0x68);
  local_90 = *(undefined8 *)(param_4 + 0x38);
  local_5c = *(undefined4 *)(param_4 + 0x6c);
  local_84 = *(undefined8 *)(param_4 + 0x44);
  local_58 = *(undefined4 *)(param_4 + 0x70);
  local_78 = *(undefined8 *)(param_4 + 0x50);
  local_54 = *(undefined4 *)(param_4 + 0x74);
  local_6c = *(undefined4 *)(param_4 + 0x5c);
  local_50 = *(undefined4 *)(param_4 + 0x78);
  local_48 = *(undefined8 *)(param_4 + 0x80);
  lVar1 = *param_1;
  local_38 = *param_5;
  uStack_30 = param_5[1];
  local_28 = *(undefined4 *)(param_5 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_5 + 0x14);
  uStack_20 = *(undefined4 *)(param_5 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_5 + 0x1c);
  local_40 = *(ulonglong *)(param_4 + 0x88);
  local_18 = *(undefined4 *)(param_5 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_10 = *(undefined4 *)(param_5 + 5);
  uStack_c = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_d8 = param_2;
  local_d0 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889898);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_d8);
  *param_5 = local_38;
  param_5[1] = uStack_30;
  param_5[2] = CONCAT44(uStack_24,local_28);
  param_5[3] = CONCAT44(uStack_1c,uStack_20);
  param_5[4] = CONCAT44(uStack_14,local_18);
  param_5[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 1413b3580 FUN_1413b3580 body=66 status=ok
// SIG undefined FUN_1413b3580(void)

void FUN_1413b3580(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889828);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1413b35d0 FUN_1413b35d0 body=165 status=ok
// SIG undefined FUN_1413b35d0(void)

void FUN_1413b35d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
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
  
  FUN_140b15f30(&local_38);
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  local_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_48 = param_2;
  local_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468898a0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  *param_4 = local_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,local_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,local_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 1413b3680 FUN_1413b3680 body=66 status=ok
// SIG undefined FUN_1413b3680(void)

void FUN_1413b3680(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889830);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1413b36d0 FUN_1413b36d0 body=165 status=ok
// SIG undefined FUN_1413b36d0(void)

void FUN_1413b36d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
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
  
  FUN_140b15f30(&local_38);
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_1;
  local_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = *(undefined4 *)(param_4 + 5);
  uStack_c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_48 = param_2;
  local_40 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468898a8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  *param_4 = local_38;
  param_4[1] = uStack_30;
  param_4[2] = CONCAT44(uStack_24,local_28);
  param_4[3] = CONCAT44(uStack_1c,uStack_20);
  param_4[4] = CONCAT44(uStack_14,local_18);
  param_4[5] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 1413b3780 FUN_1413b3780 body=66 status=ok
// SIG undefined FUN_1413b3780(void)

void FUN_1413b3780(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146889858);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1413b37d0 FUN_1413b37d0 body=71 status=ok
// SIG undefined FUN_1413b37d0(void)

void FUN_1413b37d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = *param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146889838);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1413b3820 FUN_1413b3820 body=176 status=ok
// SIG undefined FUN_1413b3820(void)

void FUN_1413b3820(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140b15f30(&local_48);
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = *(undefined4 *)(param_4 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_30 = *(undefined4 *)(param_4 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_28 = *(undefined4 *)(param_4 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_20 = *(undefined4 *)(param_4 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x2c);
  lVar1 = *param_1;
  local_18 = param_5;
  local_58 = param_2;
  local_50 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468898b0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_58);
  *param_4 = local_48;
  param_4[1] = uStack_40;
  param_4[2] = CONCAT44(uStack_34,local_38);
  param_4[3] = CONCAT44(uStack_2c,uStack_30);
  param_4[4] = CONCAT44(uStack_24,local_28);
  param_4[5] = CONCAT44(uStack_1c,uStack_20);
  return;
}



// FUNCTION 1413b38d0 FUN_1413b38d0 body=61 status=ok
// SIG undefined FUN_1413b38d0(void)

void FUN_1413b38d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146889840);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413b3910 FUN_1413b3910 body=61 status=ok
// SIG undefined FUN_1413b3910(void)

void FUN_1413b3910(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468898b8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413b3950 FUN_1413b3950 body=136 status=ok
// SIG undefined FUN_1413b3950(void)

void FUN_1413b3950(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  FUN_140b15ed0(local_58);
  FUN_140b15ed0(local_30);
  FUN_140b17710(local_58,param_2);
  FUN_140b17710(local_30,param_3);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468898c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_58);
  FUN_140b17710(param_3,local_30);
  return;
}



// FUNCTION 1413b39f0 Rehash body=634 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar12 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar5 = (longlong)(int)*plVar2 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar5 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar9 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar9 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar3 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar3) goto LAB_1413b3b2f;
        uVar10 = puVar15[lVar4 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
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
      if (iVar9 < iStack_44) {
LAB_1413b3b2f:
        iStack_44 = iVar9;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar9) {
      do {
        lVar4 = *param_1;
        lVar6 = (longlong)iStack_1c;
        iVar9 = (int)(*(ulonglong *)(lVar4 + lVar6 * 0x18) >> 4);
        uVar11 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
        uVar13 = -(uVar11 + iVar9) ^ uVar11 >> 0xd;
        uVar10 = (iVar9 - uVar11) - uVar13 ^ uVar13 >> 0xc;
        uVar11 = (uVar11 - uVar10) - uVar13 ^ uVar10 << 0x10;
        uVar13 = (uVar13 - uVar11) - uVar10 ^ uVar11 >> 5;
        uVar10 = (uVar10 - uVar11) - uVar13 ^ uVar13 >> 3;
        uVar11 = (uVar11 - uVar10) - uVar13 ^ uVar10 << 10;
        uVar10 = ((uVar13 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x14 + lVar6 * 0x18) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1413b3c70 ResizeTo body=112 status=ok
// SIG undefined ResizeTo(void)

void TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x58,0);
    iVar3 = (int)(uVar1 / 0x58);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x58,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1413b3ce0 FUN_1413b3ce0 body=34 status=ok
// SIG undefined FUN_1413b3ce0(void)

void FUN_1413b3ce0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413b0ce0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetDelay_1449820b8,1);
  return;
}



// FUNCTION 1413b3d10 StaticRegisterNativesUXPrimaryDataAsset body=34 status=ok
// SIG undefined StaticRegisterNativesUXPrimaryDataAsset(void)

void UXPrimaryDataAsset::StaticRegisterNativesUXPrimaryDataAsset(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetValueFromInstanceData_144982fa0,1);
  return;
}



// FUNCTION 1413b3d40 StaticRegisterNativesUAESHelper body=34 status=ok
// SIG undefined StaticRegisterNativesUAESHelper(void)

void UAESHelper::StaticRegisterNativesUAESHelper(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetDelay_144982fb0,2);
  return;
}



// FUNCTION 1413b3d70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468899c0 == 0) {
    uVar1 = FUN_1413b2b90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468899c0 = GetStaticStruct(FUN_1413b41f0,uVar2,L"DamageTypeParticleProperty",0x60,uVar1);
  }
  return;
}



// FUNCTION 1413b3dd0 FUN_1413b3dd0 body=82 status=ok
// SIG undefined FUN_1413b3dd0(void)

void FUN_1413b3dd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146889af0 == 0) {
    uVar1 = FUN_1413b2ba0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146889af0 = GetStaticStruct(FUN_1413b4220,uVar2,L"LingeringDamageTypeInfo",0x48,uVar1);
  }
  return;
}



// FUNCTION 1413b3e30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146889b40 == 0) {
    uVar1 = FUN_1413b2bb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146889b40 = GetStaticStruct(FUN_1413b4250,uVar2,L"MoneyStackValues",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413b3e90 FUN_1413b3e90 body=47 status=ok
// SIG undefined FUN_1413b3e90(void)

longlong FUN_1413b3e90(void)

{
  if (DAT_146889960 == 0) {
    FUN_141786440(&DAT_146889960,&PTR_FUN_14497fdb0);
  }
  return DAT_146889960;
}



// FUNCTION 1413b3ec0 FUN_1413b3ec0 body=47 status=ok
// SIG undefined FUN_1413b3ec0(void)

longlong FUN_1413b3ec0(void)

{
  if (DAT_146889970 == 0) {
    FUN_141786440(&DAT_146889970,&PTR_FUN_144980060);
  }
  return DAT_146889970;
}



// FUNCTION 1413b3ef0 FUN_1413b3ef0 body=47 status=ok
// SIG undefined FUN_1413b3ef0(void)

longlong FUN_1413b3ef0(void)

{
  if (DAT_1468899a0 == 0) {
    FUN_141786440(&DAT_1468899a0,&PTR_FUN_1449813f0);
  }
  return DAT_1468899a0;
}



// FUNCTION 1413b3f20 FUN_1413b3f20 body=47 status=ok
// SIG undefined FUN_1413b3f20(void)

longlong FUN_1413b3f20(void)

{
  if (DAT_1468899b0 == 0) {
    FUN_141786440(&DAT_1468899b0,&PTR_FUN_1449815e0);
  }
  return DAT_1468899b0;
}



// FUNCTION 1413b3f50 FUN_1413b3f50 body=47 status=ok
// SIG undefined FUN_1413b3f50(void)

longlong FUN_1413b3f50(void)

{
  if (DAT_1468899d0 == 0) {
    FUN_141786440(&DAT_1468899d0,&PTR_StaticClass_14497e3e0);
  }
  return DAT_1468899d0;
}



// FUNCTION 1413b3f80 FUN_1413b3f80 body=47 status=ok
// SIG undefined FUN_1413b3f80(void)

longlong FUN_1413b3f80(void)

{
  if (DAT_1468899f8 == 0) {
    FUN_141786440(&DAT_1468899f8,&PTR_FUN_14497ed80);
  }
  return DAT_1468899f8;
}



// FUNCTION 1413b3fb0 FUN_1413b3fb0 body=47 status=ok
// SIG undefined FUN_1413b3fb0(void)

longlong FUN_1413b3fb0(void)

{
  if (DAT_146889a88 == 0) {
    FUN_141786440(&DAT_146889a88,&PTR_FUN_144980610);
  }
  return DAT_146889a88;
}



// FUNCTION 1413b3fe0 FUN_1413b3fe0 body=47 status=ok
// SIG undefined FUN_1413b3fe0(void)

longlong FUN_1413b3fe0(void)

{
  if (DAT_146889a98 == 0) {
    FUN_141786440(&DAT_146889a98,&PTR_FUN_1449807b0);
  }
  return DAT_146889a98;
}



// FUNCTION 1413b4010 FUN_1413b4010 body=47 status=ok
// SIG undefined FUN_1413b4010(void)

longlong FUN_1413b4010(void)

{
  if (DAT_146889aa8 == 0) {
    FUN_141786440(&DAT_146889aa8,&PTR_GetPrivateStaticClass_144980940);
  }
  return DAT_146889aa8;
}



// FUNCTION 1413b4040 FUN_1413b4040 body=47 status=ok
// SIG undefined FUN_1413b4040(void)

longlong FUN_1413b4040(void)

{
  if (DAT_146889ab8 == 0) {
    FUN_141786440(&DAT_146889ab8,&PTR_FUN_144980ae0);
  }
  return DAT_146889ab8;
}



// FUNCTION 1413b4070 FUN_1413b4070 body=47 status=ok
// SIG undefined FUN_1413b4070(void)

longlong FUN_1413b4070(void)

{
  if (DAT_146889ac8 == 0) {
    FUN_141786440(&DAT_146889ac8,&PTR_FUN_144980c90);
  }
  return DAT_146889ac8;
}



// FUNCTION 1413b40a0 FUN_1413b40a0 body=47 status=ok
// SIG undefined FUN_1413b40a0(void)

longlong FUN_1413b40a0(void)

{
  if (DAT_146889ad8 == 0) {
    FUN_141786440(&DAT_146889ad8,&PTR_GetPrivateStaticClass_144980f00);
  }
  return DAT_146889ad8;
}



// FUNCTION 1413b40d0 FUN_1413b40d0 body=47 status=ok
// SIG undefined FUN_1413b40d0(void)

longlong FUN_1413b40d0(void)

{
  if (DAT_146889b00 == 0) {
    FUN_141786440(&DAT_146889b00,&PTR_FUN_14497d9a0);
  }
  return DAT_146889b00;
}



// FUNCTION 1413b4100 FUN_1413b4100 body=47 status=ok
// SIG undefined FUN_1413b4100(void)

longlong FUN_1413b4100(void)

{
  if (DAT_146889b10 == 0) {
    FUN_141786440(&DAT_146889b10,&PTR_GetPrivateStaticClass_14497dcf0);
  }
  return DAT_146889b10;
}



// FUNCTION 1413b4130 Z_Construct_UClass_USubmixEffectConvolutionReverbPreset body=47 status=ok
// SIG undefined Z_Construct_UClass_USubmixEffectConvolutionReverbPreset(void)

longlong Z_Construct_UClass_USubmixEffectConvolutionReverbPreset(void)

{
  if (DAT_146889b20 == 0) {
    FUN_141786440(&DAT_146889b20,&PTR_FUN_14497de30);
  }
  return DAT_146889b20;
}



// FUNCTION 1413b4160 FUN_1413b4160 body=47 status=ok
// SIG undefined FUN_1413b4160(void)

longlong FUN_1413b4160(void)

{
  if (DAT_146889b30 == 0) {
    FUN_141786440(&DAT_146889b30,&PTR_FUN_14497e080);
  }
  return DAT_146889b30;
}



// FUNCTION 1413b4190 FUN_1413b4190 body=47 status=ok
// SIG undefined FUN_1413b4190(void)

longlong FUN_1413b4190(void)

{
  if (DAT_146889b50 == 0) {
    FUN_141786440(&DAT_146889b50,&PTR_FUN_14497e720);
  }
  return DAT_146889b50;
}



// FUNCTION 1413b41c0 FUN_1413b41c0 body=47 status=ok
// SIG undefined FUN_1413b41c0(void)

longlong FUN_1413b41c0(void)

{
  if (DAT_146889ae8 == 0) {
    FUN_1417866a0(&DAT_146889ae8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146366b50);
  }
  return DAT_146889ae8;
}



// FUNCTION 1413b41f0 FUN_1413b41f0 body=47 status=ok
// SIG undefined FUN_1413b41f0(void)

longlong FUN_1413b41f0(void)

{
  if (DAT_1468899c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468899c8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146364350);
  }
  return DAT_1468899c8;
}



// FUNCTION 1413b4220 FUN_1413b4220 body=47 status=ok
// SIG undefined FUN_1413b4220(void)

longlong FUN_1413b4220(void)

{
  if (DAT_146889af8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146889af8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463661e0);
  }
  return DAT_146889af8;
}



// FUNCTION 1413b4250 FUN_1413b4250 body=47 status=ok
// SIG undefined FUN_1413b4250(void)

longlong FUN_1413b4250(void)

{
  if (DAT_146889b48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146889b48,&PTR_Z_Construct_UPackage__Script_MechWarrior_146366990);
  }
  return DAT_146889b48;
}



// FUNCTION 1413b4280 FUN_1413b4280 body=165 status=ok
// SIG undefined FUN_1413b4280(void)

void FUN_1413b4280(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_38 [48];
  
  FUN_140b15f30(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_140afed70(param_1,puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1413b4330 FUN_1413b4330 body=327 status=ok
// SIG undefined FUN_1413b4330(void)

void FUN_1413b4330(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
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
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b0d790(param_1,local_10,local_18,local_res10[0],local_res20);
  return;
}



// FUNCTION 1413b4480 FUN_1413b4480 body=440 status=ok
// SIG undefined FUN_1413b4480(void)

void FUN_1413b4480(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [48];
  
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_140b15f30(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res10[0] = 0;
  puVar1 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b0dad0(param_1,local_50,local_58,puVar1,local_res10[0],local_res20);
  return;
}



// FUNCTION 1413b4640 execSpawnShip body=312 status=ok
// SIG undefined execSpawnShip(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AEDCVillageController::execSpawnShip(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_38 = _DAT_146889730 & _DAT_146889740;
  uStack_34 = uRam0000000146889734 & uRam0000000146889744;
  uStack_30 = uRam0000000146889738 & uRam0000000146889748;
  uStack_2c = uRam000000014688973c & uRam000000014688974c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam000000014688973c;
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_88 = CONCAT44(uStack_54,local_58);
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_78 = (undefined4)local_48;
  uStack_74 = local_48._4_4_;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  uVar1 = FUN_140b0ee80(param_1,local_98[0],&local_88);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413b4780 FUN_1413b4780 body=162 status=ok
// SIG undefined FUN_1413b4780(void)

longlong FUN_1413b4780(void)

{
  if (DAT_146889df8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehaviorStackValueResolver",&DAT_146889df8,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",
                  InternalConstructor<UAnimationSharingStateProcessor>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889df8;
}



// FUNCTION 1413b4830 FUN_1413b4830 body=162 status=ok
// SIG undefined FUN_1413b4830(void)

longlong FUN_1413b4830(void)

{
  if (DAT_146889d60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeDamageTypeAspectData",&DAT_146889d60,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",FUN_1413b6000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_146889d60;
}



// FUNCTION 1413b48e0 FUN_1413b48e0 body=162 status=ok
// SIG undefined FUN_1413b48e0(void)

longlong FUN_1413b48e0(void)

{
  if (DAT_146889e08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehaviorValueResolver",&DAT_146889e08,FUN_140447710,
                  0x90,0x10000000,0,L"Engine",FUN_1413b5e70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889e08;
}



// FUNCTION 1413b49a0 FUN_1413b49a0 body=162 status=ok
// SIG undefined FUN_1413b49a0(void)

longlong FUN_1413b49a0(void)

{
  if (DAT_146889e18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeBehaviorTableResolver",&DAT_146889e18,FUN_140447710,
                  0x50,0x10000000,0,L"Engine",&LAB_1413b5e60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889e18;
}



// FUNCTION 1413b4a50 FUN_1413b4a50 body=162 status=ok
// SIG undefined FUN_1413b4a50(void)

longlong FUN_1413b4a50(void)

{
  if (DAT_146889d70 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeDeliveryMethodAspectData",&DAT_146889d70,FUN_140447710
                  ,0x40,0x10000000,0,L"Engine",FUN_1413b6040,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_146889d70;
}



// FUNCTION 1413b4b00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AWeaponBase::GetPrivateStaticClass(void)

{
  if (DAT_146889e28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeMod",&DAT_146889e28,FUN_140447710,0x5c0,0x10000000,0,
                  L"Engine",&LAB_1413b5dc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGTutorialStepRevive::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146889e28;
}



// FUNCTION 1413b4bc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGButton::GetPrivateStaticClass(void)

{
  if (DAT_146889d90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeHealingProjectile",&DAT_146889d90,
                  StaticRegisterNativesUUGButton,0x738,0x10000000,0,L"Engine",&LAB_1413b5db0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1413ae830,&LAB_140447700,0);
  }
  return DAT_146889d90;
}



// FUNCTION 1413b4c70 FUN_1413b4c70 body=47 status=ok
// SIG undefined FUN_1413b4c70(void)

longlong FUN_1413b4c70(void)

{
  if (DAT_146889d88 == 0) {
    FUN_141786440(&DAT_146889d88,&PTR_GetPrivateStaticClass_144983a50);
  }
  return DAT_146889d88;
}



// FUNCTION 1413b4ca0 FUN_1413b4ca0 body=47 status=ok
// SIG undefined FUN_1413b4ca0(void)

longlong FUN_1413b4ca0(void)

{
  if (DAT_146889d78 == 0) {
    FUN_141786a30(&DAT_146889d78,&PTR_FUN_146368190);
  }
  return DAT_146889d78;
}



// FUNCTION 1413b4cd0 FUN_1413b4cd0 body=47 status=ok
// SIG undefined FUN_1413b4cd0(void)

longlong FUN_1413b4cd0(void)

{
  if (DAT_146889d80 == 0) {
    FUN_141786a30(&DAT_146889d80,&PTR_FUN_146368350);
  }
  return DAT_146889d80;
}



// FUNCTION 1413b4d10 FUN_1413b4d10 body=162 status=ok
// SIG undefined FUN_1413b4d10(void)

longlong FUN_1413b4d10(void)

{
  if (DAT_146889e48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeModBalanceStateComponent",&DAT_146889e48,FUN_140447710
                  ,0x3b8,0x10000000,0,L"Engine",FUN_1413b6100,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14142bde0,&LAB_140447700,0);
  }
  return DAT_146889e48;
}



// FUNCTION 1413b4dc0 FUN_1413b4dc0 body=162 status=ok
// SIG undefined FUN_1413b4dc0(void)

longlong FUN_1413b4dc0(void)

{
  if (DAT_146889e38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCondition_HasGrenadeThrowAnimationOverride",&DAT_146889e38
                  ,FUN_140447710,0x90,0x10000000,0,L"Engine",FUN_1413b6230,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146889e38;
}



// FUNCTION 1413b4e80 FUN_1413b4e80 body=162 status=ok
// SIG undefined FUN_1413b4e80(void)

longlong FUN_1413b4e80(void)

{
  if (DAT_146889e58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeOverrideMeshAspectData",&DAT_146889e58,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",FUN_1413b6170,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_146889e58;
}



// FUNCTION 1413b4f30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGunfireTechRequirementsImplWin64::GetPrivateStaticClass(void)

{
  if (DAT_146889db0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeHomingComponent",&DAT_146889db0,
                  StaticRegisterNativesUGunfireTechRequirementsImplWin64,0x298,0x10000000,0,
                  L"Engine",&LAB_1413b6070,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413b6de0,&LAB_140447700,0);
  }
  return DAT_146889db0;
}



// FUNCTION 1413b4ff0 FUN_1413b4ff0 body=162 status=ok
// SIG undefined FUN_1413b4ff0(void)

longlong FUN_1413b4ff0(void)

{
  if (DAT_146889e68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadePayloadMethodAspectData",&DAT_146889e68,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",FUN_1413b61a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_146889e68;
}



// FUNCTION 1413b50a0 FUN_1413b50a0 body=47 status=ok
// SIG undefined FUN_1413b50a0(void)

longlong FUN_1413b50a0(void)

{
  if (DAT_146889da8 == 0) {
    FUN_141786440(&DAT_146889da8,&PTR_GetPrivateStaticClass_144984120);
  }
  return DAT_146889da8;
}



// FUNCTION 1413b50d0 FUN_1413b50d0 body=47 status=ok
// SIG undefined FUN_1413b50d0(void)

longlong FUN_1413b50d0(void)

{
  if (DAT_146889d98 == 0) {
    FUN_141786a30(&DAT_146889d98,&PTR_FUN_1463686a0);
  }
  return DAT_146889d98;
}



// FUNCTION 1413b5100 FUN_1413b5100 body=47 status=ok
// SIG undefined FUN_1413b5100(void)

longlong FUN_1413b5100(void)

{
  if (DAT_146889da0 == 0) {
    FUN_141786a30(&DAT_146889da0,&PTR_FUN_1463686e0);
  }
  return DAT_146889da0;
}



// FUNCTION 1413b5150 FUN_1413b5150 body=162 status=ok
// SIG undefined FUN_1413b5150(void)

longlong FUN_1413b5150(void)

{
  if (DAT_146889dd0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GrenadeLingeringBeamTriggerComponent",&DAT_146889dd0,
                  FUN_1413b6e90,0x760,0x10000000,0,L"Engine",FUN_1413b6080,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142a175e0,&LAB_140447700,0);
  }
  return DAT_146889dd0;
}


