// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140945f20 Push body=247 status=ok
// SIG undefined Push(void)

void TLockFreePointerListLIFOPad<FRHIResource,128>::Push(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
  }
  *(undefined8 *)(lVar2 + 8) = param_2;
  do {
    LOCK();
    uVar3 = *(ulonglong *)(param_1 + 0x80);
    if (uVar3 == 0) {
      *(ulonglong *)(param_1 + 0x80) = 0;
      uVar3 = 0;
    }
    UNLOCK();
    uVar4 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 < (uVar3 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    lVar2 = 0;
    if (uVar1 != 0) {
      lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
    }
    *(uint *)(lVar2 + 0x10) = (uint)uVar3 & 0x3ffffff;
    LOCK();
    bVar5 = uVar3 == *(ulonglong *)(param_1 + 0x80);
    if (bVar5) {
      *(ulonglong *)(param_1 + 0x80) = uVar4 | uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return;
}



// FUNCTION 140946020 FUN_140946020 body=153 status=ok
// SIG undefined FUN_140946020(void)

void FUN_140946020(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x758);
  *(undefined8 *)(param_1 + 0x758) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar5 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar5) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar5) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          FUN_141a085f0(param_1);
          return;
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FUN_141a085f0(param_1);
  return;
}



// FUNCTION 1409460c0 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x24,0);
    iVar3 = (int)(uVar1 / 0x24);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x24,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140946150 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x24,0);
    iVar3 = (int)(uVar1 / 0x24);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x24,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1409461d0 FUN_1409461d0 body=135 status=ok
// SIG undefined FUN_1409461d0(void)

undefined8 FUN_1409461d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  
  plVar1 = param_1 + 0xe3;
  if (plVar1 != param_2) {
    _Src = (void *)*param_2;
    iVar2 = (int)param_2[1];
    *(int *)(param_1 + 0xe4) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x724) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x724) = 0;
    }
    else {
      TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 * 0x24);
    }
  }
  FUN_1423424e0(param_1);
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return 1;
}



// FUNCTION 140946260 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScene3DTransformSection::GetPrivateStaticClass(void)

{
  if (DAT_146863b30 == 0) {
    FUN_14171ccd0(L"/Script/CustomMeshComponent",L"CustomMeshComponent",&DAT_146863b30,FUN_1409464b0
                  ,0x730,0x10000000,0,L"Engine",&LAB_140946460,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429bed90,&LAB_140447700,0);
  }
  return DAT_146863b30;
}



// FUNCTION 140946310 FUN_140946310 body=47 status=ok
// SIG undefined FUN_140946310(void)

longlong FUN_140946310(void)

{
  if (DAT_146863b38 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146863b38,&PTR_s__Script_CustomMeshComponent_144167110);
  }
  return DAT_146863b38;
}



// FUNCTION 140946340 FUN_140946340 body=47 status=ok
// SIG undefined FUN_140946340(void)

longlong FUN_140946340(void)

{
  if (DAT_146863b28 == 0) {
    FUN_141786440(&DAT_146863b28,&PTR_GetPrivateStaticClass_144166de0);
  }
  return DAT_146863b28;
}



// FUNCTION 140946370 FUN_140946370 body=47 status=ok
// SIG undefined FUN_140946370(void)

longlong FUN_140946370(void)

{
  if (DAT_146863b10 == 0) {
    FUN_141786a30(&DAT_146863b10,&PTR_FUN_146289460);
  }
  return DAT_146863b10;
}



// FUNCTION 1409463a0 FUN_1409463a0 body=47 status=ok
// SIG undefined FUN_1409463a0(void)

longlong FUN_1409463a0(void)

{
  if (DAT_146863b18 == 0) {
    FUN_141786a30(&DAT_146863b18,&PTR_FUN_1462894a0);
  }
  return DAT_146863b18;
}



// FUNCTION 1409463d0 FUN_1409463d0 body=47 status=ok
// SIG undefined FUN_1409463d0(void)

longlong FUN_1409463d0(void)

{
  if (DAT_146863b20 == 0) {
    FUN_141786a30(&DAT_146863b20,&PTR_FUN_1462895a0);
  }
  return DAT_146863b20;
}



// FUNCTION 140946400 FUN_140946400 body=53 status=ok
// SIG undefined FUN_140946400(void)

void FUN_140946400(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &PTR_FUN_144166fc8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1409464a0 Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_CRC(void)

{
  return 0x4cfb2758;
}



// FUNCTION 1409464b0 FUN_1409464b0 body=34 status=ok
// SIG undefined FUN_1409464b0(void)

void FUN_1409464b0(void)

{
  undefined8 uVar1;
  
  uVar1 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddCustomMeshTriangles_1441670e0,3);
  return;
}



// FUNCTION 1409464e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCustomMeshTriangle::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863b00 == 0) {
    if (DAT_146863b38 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146863b38,&PTR_s__Script_CustomMeshComponent_144167110);
    }
    lVar1 = DAT_146863b38;
    uVar2 = Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_CRC();
    DAT_146863b00 = GetStaticStruct(FUN_140946560,lVar1,L"CustomMeshTriangle",0x24,uVar2);
  }
  return;
}



// FUNCTION 140946560 FUN_140946560 body=47 status=ok
// SIG undefined FUN_140946560(void)

longlong FUN_140946560(void)

{
  if (DAT_146863b08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863b08,&PTR_FUN_1462893a0);
  }
  return DAT_146863b08;
}



// FUNCTION 140946590 FUN_140946590 body=163 status=ok
// SIG undefined FUN_140946590(void)

void FUN_140946590(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140945280(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140946660 execBP_GetSelectedItems body=178 status=ok
// SIG undefined execBP_GetSelectedItems(void)

void UListView::execBP_GetSelectedItems(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
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
  uVar1 = FUN_1409461d0(param_1,plVar2);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140946720 FUN_140946720 body=156 status=ok
// SIG undefined FUN_140946720(void)

void FUN_140946720(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  plVar1 = (longlong *)FUN_141593110();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146863b48) {
    _Init_thread_header(&DAT_146863b48);
    if (DAT_146863b48 == -1) {
      FName::FName(&DAT_146863b40,L"InputDevice",1);
      _Init_thread_footer(&DAT_146863b48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014094677c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,DAT_146863b40,lVar2);
  return;
}



// FUNCTION 1409467c0 FUN_1409467c0 body=409 status=ok
// SIG undefined FUN_1409467c0(void)

void FUN_1409467c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  wchar_t *local_20;
  undefined2 *local_18;
  wchar_t *local_10;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  plVar1 = (longlong *)FUN_141593110();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146863b48) {
    _Init_thread_header(&DAT_146863b48);
    if (DAT_146863b48 == -1) {
      FName::FName(&DAT_146863b40,L"InputDevice",1);
      _Init_thread_footer(&DAT_146863b48);
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,DAT_146863b40,puVar2);
  puVar2 = (undefined8 *)FPaths::EngineDir(&local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)*puVar2;
  }
  local_38 = (undefined2 *)0x0;
  local_20 = L"Binaries/ThirdParty/DPX/Win64";
  local_30 = 0;
  FPaths::CombineInternal(&local_38,&local_28,2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar4 = local_38;
  }
  FWindowsPlatformProcess::PushDllDirectory(puVar4);
  local_28 = (undefined2 *)0x0;
  local_18 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    local_18 = local_38;
  }
  local_20 = (wchar_t *)0x0;
  local_10 = L"libScePad.dll";
  FPaths::CombineInternal(&local_28,&local_18,2);
  puVar4 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar4 = local_28;
  }
  uVar3 = FWindowsPlatformProcess::GetDllHandle(puVar4);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140946960 ShutdownModule body=37 status=ok
// SIG undefined ShutdownModule(void)

void FD3D12DynamicRHIModule::ShutdownModule(longlong param_1)

{
  if (*(HMODULE *)(param_1 + 8) != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 140946990 FUN_140946990 body=47 status=ok
// SIG undefined FUN_140946990(void)

void FUN_140946990(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144167150;
    return;
  }
  return;
}



// FUNCTION 1409469c0 GetRuntimeDeviceProfileName body=75 status=ok
// SIG undefined GetRuntimeDeviceProfileName(void)

undefined8 *
FExampleDeviceProfileSelectorModule::GetRuntimeDeviceProfileName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_2,0x10,"WindowsNoEditor",0x10,0x3f);
  return param_2;
}



// FUNCTION 140946a10 FUN_140946a10 body=39 status=ok
// SIG undefined FUN_140946a10(void)

void FUN_140946a10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144167210;
    return;
  }
  return;
}



// FUNCTION 140946a40 operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_> body=249 status=ok
// SIG undefined operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<UClass_*_const_&>::
operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 8,local_40,4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  param_2[9] = lVar1;
  *(undefined4 *)(param_2 + 10) = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 140946b40 CopyPose<FCSPose<FCompactPose>_> body=121 status=ok
// SIG undefined CopyPose<FCSPose<FCompactPose>_>(void)

void FCSPose<FCompactHeapPose>::CopyPose<FCSPose<FCompactPose>_>
               (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
  }
  param_1[2] = param_2[2];
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 3,param_2 + 3);
  return;
}



// FUNCTION 140946bc0 FUN_140946bc0 body=2222 status=ok
// SIG undefined FUN_140946bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140946bc0(longlong *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  void *_Dst;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar19 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_1c8 [32];
  float *local_1a8;
  float local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)(param_1 + 0x45) = 1;
  lVar3 = param_1[5];
  iVar7 = (int)lVar3 + 1;
  *(int *)(param_1 + 5) = iVar7;
  local_1a8 = param_3;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar7) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4);
  }
  puVar14 = (undefined8 *)((longlong)(int)lVar3 * 0x10 + param_1[4]);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    *puVar14 = 0;
    puVar14[1] = 0;
  }
  pfVar12 = (float *)0x0;
  fVar11 = (float)((int)param_1[5] + -1);
  local_1a0 = fVar11;
  pfVar8 = (float *)operator_new(0x40);
  uVar9 = uRam00000001468b5b78;
  pfVar13 = pfVar12;
  if (pfVar8 != (float *)0x0) {
    *(undefined8 *)pfVar8 = _DAT_1468b5b70;
    *(undefined8 *)(pfVar8 + 2) = uVar9;
    uVar9 = uRam00000001468b5b88;
    *(undefined8 *)(pfVar8 + 4) = _DAT_1468b5b80;
    *(undefined8 *)(pfVar8 + 6) = uVar9;
    uVar9 = uRam00000001468b5b98;
    *(undefined8 *)(pfVar8 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(pfVar8 + 10) = uVar9;
    *(longlong **)(pfVar8 + 0xc) = param_1;
    pfVar8[0xe] = fVar11;
    pfVar13 = pfVar8;
  }
  lVar3 = param_1[1];
  iVar7 = (int)lVar3 + 1;
  *(int *)(param_1 + 1) = iVar7;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
  }
  *(float **)(*param_1 + (longlong)(int)lVar3 * 8) = pfVar13;
  lVar3 = param_1[0xd];
  iVar7 = (int)lVar3 + 1;
  *(int *)(param_1 + 0xd) = iVar7;
  if (*(int *)((longlong)param_1 + 0x6c) < iVar7) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xc);
  }
  _Dst = (void *)((longlong)(int)lVar3 * 0x70 + param_1[0xc]);
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x70);
  }
  lVar3 = param_1[0xb];
  iVar7 = (int)lVar3 + 1;
  *(int *)(param_1 + 0xb) = iVar7;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar7) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 10);
  }
  pfVar8 = (float *)((longlong)(int)lVar3 * 0x60 + param_1[10]);
  if (pfVar8 != (float *)0x0) {
    _guard_xfg_dispatch_icall_nop(pfVar8,0,0x60);
    pfVar12 = pfVar8;
  }
  pfVar12[3] = 0.0;
  pfVar12[4] = 0.0;
  pfVar12[5] = 0.0;
  pfVar12[6] = 0.0;
  pfVar12[7] = 3.4028235e+38;
  pfVar12[8] = 0.0;
  pfVar12[9] = 0.0;
  pfVar12[10] = 0.0;
  if (param_2 == (longlong *)0x0) {
    fVar11 = 3.4028235e+38;
  }
  else {
    fVar11 = (float)(**(code **)(*param_2 + 0x1a8))(param_2);
  }
  pfVar12[0xb] = fVar11;
  if (param_2 == (longlong *)0x0) {
    pfVar8 = (float *)&local_118;
    local_118 = _DAT_1468b5b70;
    uStack_110 = uRam00000001468b5b78;
    local_f8 = _DAT_1468b5b90;
    uStack_f0 = uRam00000001468b5b98;
    uStack_100 = uRam00000001468b5b88;
    local_108 = (undefined1  [8])_DAT_1468b5b80;
  }
  else {
    uVar9 = (**(code **)(*param_2 + 0xf0))(param_2,&local_158);
    pfVar8 = (float *)P2UTransform(&local_118,uVar9);
  }
  fVar18 = *pfVar8;
  fVar24 = pfVar8[1];
  fVar22 = pfVar8[2];
  fVar25 = pfVar8[3];
  *pfVar13 = fVar18;
  pfVar13[1] = fVar24;
  pfVar13[2] = fVar22;
  pfVar13[3] = fVar25;
  fVar48 = pfVar8[4];
  fVar49 = pfVar8[5];
  fVar50 = pfVar8[6];
  fVar51 = pfVar8[7];
  pfVar13[4] = fVar48;
  pfVar13[5] = fVar49;
  pfVar13[6] = fVar50;
  pfVar13[7] = fVar51;
  auVar15 = *(undefined1 (*) [16])(pfVar8 + 8);
  fVar11 = auVar15._0_4_;
  fVar30 = auVar15._4_4_;
  fVar34 = auVar15._8_4_;
  fVar39 = auVar15._12_4_;
  *(undefined1 (*) [16])(pfVar13 + 8) = auVar15;
  fVar6 = fRam0000000146863b68;
  fVar5 = fRam0000000146863b64;
  fVar4 = _DAT_146863b60;
  auVar16 = *(undefined1 (*) [16])(local_1a8 + 8);
  fVar28 = auVar16._0_4_;
  fVar31 = auVar16._4_4_;
  fVar36 = auVar16._8_4_;
  fVar40 = auVar16._12_4_;
  fVar17 = *local_1a8;
  fVar21 = local_1a8[1];
  fVar20 = local_1a8[2];
  fVar23 = local_1a8[3];
  auVar15 = minps(auVar15,auVar16);
  auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146863be4);
  auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146863be0);
  auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146863be8);
  auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146863bec);
  iVar7 = movmskps((int)pfVar8,auVar16);
  if (iVar7 == 0) {
    fVar48 = fVar48 * fVar28;
    fVar49 = fVar49 * fVar31;
    fVar50 = fVar50 * fVar36;
    fVar51 = fVar51 * fVar40;
    local_f8 = CONCAT44(fVar31 * fVar30,fVar28 * fVar11);
    uStack_f0 = CONCAT44(fVar40 * fVar39,fVar36 * fVar34);
    local_118 = CONCAT44(fVar22 * fVar17 * fRam0000000146863ba4 + fVar23 * fVar24 +
                         fVar21 * fVar25 * fRam0000000146863b94 +
                         fVar20 * fVar18 * fRam0000000146863b84,
                         fVar25 * fVar17 * _DAT_146863ba0 + fVar23 * fVar18 +
                         fVar21 * fVar22 * _DAT_146863b90 + fVar20 * fVar24 * _DAT_146863b80);
    uStack_110 = CONCAT44(fVar18 * fVar17 * fRam0000000146863bac + fVar23 * fVar25 +
                          fVar21 * fVar24 * fRam0000000146863b9c +
                          fVar20 * fVar22 * fRam0000000146863b8c,
                          fVar24 * fVar17 * fRam0000000146863ba8 + fVar23 * fVar22 +
                          fVar21 * fVar18 * fRam0000000146863b98 +
                          fVar20 * fVar25 * fRam0000000146863b88);
    fVar11 = fVar50 * fVar21 - fVar49 * fVar20;
    fVar28 = fVar48 * fVar20 - fVar50 * fVar17;
    fVar30 = fVar49 * fVar17 - fVar48 * fVar21;
    fVar31 = fVar51 * fVar23 - fVar51 * fVar23;
    fVar11 = fVar11 + fVar11;
    fVar28 = fVar28 + fVar28;
    fVar30 = fVar30 + fVar30;
    fVar31 = fVar31 + fVar31;
    local_108._4_4_ = (fVar11 * fVar20 - fVar30 * fVar17) + fVar28 * fVar23 + fVar49 + local_1a8[5];
    local_108._0_4_ = (fVar30 * fVar21 - fVar28 * fVar20) + fVar11 * fVar23 + fVar48 + local_1a8[4];
    uStack_100._0_4_ = (fVar28 * fVar17 - fVar11 * fVar21) + fVar30 * fVar23 + fVar50 + local_1a8[6]
    ;
    uStack_100._4_4_ = (fVar31 * fVar23 - fVar31 * fVar23) + fVar31 * fVar23 + fVar51 + local_1a8[7]
    ;
  }
  else {
    fVar26 = fVar21 + fVar21;
    fVar29 = fVar20 + fVar20;
    fVar51 = local_1a8[4];
    fVar1 = local_1a8[5];
    fVar2 = local_1a8[6];
    fVar32 = fVar17 * (fVar17 + fVar17);
    fVar27 = (fVar17 + fVar17) * fVar23;
    fVar44 = (fVar29 * fVar23 + fVar26 * fVar17) * fVar28;
    fVar45 = (fVar27 + fVar29 * fVar21) * fVar31;
    fVar46 = (fVar26 * fVar23 + fVar29 * fVar17) * fVar36;
    fVar33 = fVar31 * (fVar26 * fVar17 - fVar29 * fVar23);
    fVar35 = fVar36 * (fVar29 * fVar21 - fVar27);
    fVar37 = fVar28 * (fVar29 * fVar17 - fVar26 * fVar23);
    fVar17 = (float)((uint)((_DAT_146863b60 - (fVar20 * fVar29 + fVar21 * fVar26)) * fVar28) &
                    _DAT_146863b70);
    fVar20 = (float)((uint)((fRam0000000146863b64 - (fVar20 * fVar29 + fVar32)) * fVar31) &
                    uRam0000000146863b74);
    fVar23 = (float)((uint)((fRam0000000146863b68 - (fVar21 * fVar26 + fVar32)) * fVar36) &
                    uRam0000000146863b78);
    fVar27 = (float)((uint)((fRam0000000146863b6c - (fVar32 + fVar32)) * fVar40) &
                    uRam0000000146863b7c);
    fVar21 = fVar24 + fVar24;
    fVar26 = fVar22 + fVar22;
    fVar29 = fVar18 * (fVar18 + fVar18);
    fVar47 = fVar25 * (fVar18 + fVar18);
    fVar41 = (fVar25 * fVar26 + fVar18 * fVar21) * fVar11;
    fVar42 = (fVar47 + fVar24 * fVar26) * fVar30;
    fVar43 = (fVar25 * fVar21 + fVar18 * fVar26) * fVar34;
    fVar32 = fVar30 * (fVar18 * fVar21 - fVar25 * fVar26);
    fVar47 = fVar34 * (fVar24 * fVar26 - fVar47);
    fVar38 = fVar11 * (fVar18 * fVar26 - fVar25 * fVar21);
    fVar18 = (float)((uint)((_DAT_146863b60 - (fVar22 * fVar26 + fVar24 * fVar21)) * fVar11) &
                    _DAT_146863b70);
    fVar22 = (float)((uint)((fRam0000000146863b64 - (fVar22 * fVar26 + fVar29)) * fVar30) &
                    uRam0000000146863b74);
    fVar24 = (float)((uint)((fRam0000000146863b68 - (fVar24 * fVar21 + fVar29)) * fVar34) &
                    uRam0000000146863b78);
    fVar25 = (float)((uint)((fRam0000000146863b6c - (fVar29 + fVar29)) * fVar39) &
                    uRam0000000146863b7c);
    local_198 = fVar41 * fVar33 + fVar18 * fVar17 + fVar38 * fVar46 + fVar25 * fVar51;
    fStack_194 = fVar41 * fVar20 + fVar18 * fVar44 + fVar38 * fVar35 + fVar25 * fVar1;
    fStack_190 = fVar41 * fVar45 + fVar18 * fVar37 + fVar38 * fVar23 + fVar25 * fVar2;
    fStack_18c = fVar41 * fVar27 + fVar18 * fVar27 + fVar38 * fVar27 + fVar25 * fRam0000000146863b6c
    ;
    local_188 = fVar22 * fVar33 + fVar32 * fVar17 + fVar42 * fVar46 + fVar25 * fVar51;
    fStack_184 = fVar22 * fVar20 + fVar32 * fVar44 + fVar42 * fVar35 + fVar25 * fVar1;
    fStack_180 = fVar22 * fVar45 + fVar32 * fVar37 + fVar42 * fVar23 + fVar25 * fVar2;
    fStack_17c = fVar22 * fVar27 + fVar32 * fVar27 + fVar42 * fVar27 + fVar25 * fRam0000000146863b6c
    ;
    local_178 = fVar47 * fVar33 + fVar43 * fVar17 + fVar24 * fVar46 + fVar25 * fVar51;
    fStack_174 = fVar47 * fVar20 + fVar43 * fVar44 + fVar24 * fVar35 + fVar25 * fVar1;
    fStack_170 = fVar47 * fVar45 + fVar43 * fVar37 + fVar24 * fVar23 + fVar25 * fVar2;
    fStack_16c = fVar47 * fVar27 + fVar43 * fVar27 + fVar24 * fVar27 + fVar25 * fRam0000000146863b6c
    ;
    local_168 = fVar49 * fVar33 + fVar48 * fVar17 + fVar50 * fVar46 + fRam0000000146863b6c * fVar51;
    fStack_164 = fVar49 * fVar20 + fVar48 * fVar44 + fVar50 * fVar35 + fRam0000000146863b6c * fVar1;
    fStack_160 = fVar49 * fVar45 + fVar48 * fVar37 + fVar50 * fVar23 + fRam0000000146863b6c * fVar2;
    fStack_15c = fVar49 * fVar27 + fVar48 * fVar27 + fVar50 * fVar27 +
                 fRam0000000146863b6c * fRam0000000146863b6c;
    FMatrix::RemoveScaling(&local_198);
    fVar18 = (float)(-(uint)(_DAT_146863be0 <= fVar28 * fVar11) & (_DAT_146863bd0 ^ (uint)fVar4) ^
                    _DAT_146863bd0);
    fVar24 = (float)(-(uint)(fRam0000000146863be4 <= fVar31 * fVar30) &
                     (uRam0000000146863bd4 ^ (uint)fVar5) ^ uRam0000000146863bd4);
    fVar22 = (float)(-(uint)(fRam0000000146863be8 <= fVar36 * fVar34) &
                     (uRam0000000146863bd8 ^ (uint)fVar6) ^ uRam0000000146863bd8);
    local_198 = local_198 * fVar18;
    fStack_194 = fStack_194 * fVar18;
    fStack_190 = fStack_190 * fVar18;
    fStack_184 = fStack_184 * fVar24;
    fStack_180 = fStack_180 * fVar24;
    local_188 = local_188 * fVar24;
    fStack_174 = fStack_174 * fVar22;
    fStack_170 = fStack_170 * fVar22;
    local_178 = local_178 * fVar22;
    FQuat::FQuat(&local_158,&local_198);
    local_1a8 = (float *)CONCAT44(local_1a8._4_4_,0x322bcc77);
    local_f8 = CONCAT44(fVar31 * fVar30,fVar28 * fVar11);
    uStack_f0 = CONCAT44(fVar40 * fVar39,fVar36 * fVar34);
    auVar19._0_4_ = local_158 * local_158 + fStack_150 * fStack_150;
    auVar19._4_4_ = fStack_154 * fStack_154 + fStack_14c * fStack_14c;
    auVar19._8_4_ = fStack_150 * fStack_150 + local_158 * local_158;
    auVar19._12_4_ = fStack_14c * fStack_14c + fStack_154 * fStack_154;
    fVar34 = auVar19._4_4_ + auVar19._0_4_;
    fVar36 = auVar19._8_4_ + auVar19._4_4_;
    fVar39 = auVar19._12_4_ + auVar19._8_4_;
    fVar40 = auVar19._0_4_ + auVar19._12_4_;
    auVar15._4_4_ = fVar36;
    auVar15._0_4_ = fVar34;
    auVar15._8_4_ = fVar39;
    auVar15._12_4_ = fVar40;
    auVar15 = rsqrtps(auVar19,auVar15);
    fVar11 = auVar15._0_4_;
    fVar28 = auVar15._4_4_;
    fVar30 = auVar15._8_4_;
    fVar31 = auVar15._12_4_;
    fVar11 = (_DAT_146863bc0 - fVar11 * fVar11 * fVar34 * _DAT_146863bc0) * fVar11 + fVar11;
    fVar28 = (fRam0000000146863bc4 - fVar28 * fVar28 * fVar36 * fRam0000000146863bc4) * fVar28 +
             fVar28;
    fVar30 = (fRam0000000146863bc8 - fVar30 * fVar30 * fVar39 * fRam0000000146863bc8) * fVar30 +
             fVar30;
    fVar31 = (fRam0000000146863bcc - fVar31 * fVar31 * fVar40 * fRam0000000146863bcc) * fVar31 +
             fVar31;
    local_108._4_4_ = fStack_164;
    local_108._0_4_ = local_168;
    uStack_100._0_4_ = fStack_160;
    uStack_100._4_4_ = 0;
    local_118 = CONCAT44(((uint)(((fRam0000000146863bc4 -
                                  fVar28 * fVar28 * fVar36 * fRam0000000146863bc4) * fVar28 + fVar28
                                 ) * fStack_154) ^ uRam0000000146863bb4) & -(uint)(1e-08 <= fVar36)
                         ^ uRam0000000146863bb4,
                         ((uint)(((_DAT_146863bc0 - fVar11 * fVar11 * fVar34 * _DAT_146863bc0) *
                                  fVar11 + fVar11) * local_158) ^ _DAT_146863bb0) &
                         -(uint)(1e-08 <= fVar34) ^ _DAT_146863bb0);
    uStack_110 = CONCAT44(((uint)(((fRam0000000146863bcc -
                                   fVar31 * fVar31 * fVar40 * fRam0000000146863bcc) * fVar31 +
                                  fVar31) * fStack_14c) ^ uRam0000000146863bbc) &
                          -(uint)(1e-08 <= fVar40) ^ uRam0000000146863bbc,
                          ((uint)(((fRam0000000146863bc8 -
                                   fVar30 * fVar30 * fVar39 * fRam0000000146863bc8) * fVar30 +
                                  fVar30) * fStack_150) ^ uRam0000000146863bb8) &
                          -(uint)(1e-08 <= fVar39) ^ uRam0000000146863bb8);
  }
  pfVar8 = (float *)U2PTransform(local_138);
  pfVar12[0xc] = *pfVar8;
  pfVar12[0xd] = pfVar8[1];
  pfVar12[0xe] = pfVar8[2];
  pfVar12[0xf] = pfVar8[3];
  pfVar12[0x10] = pfVar8[4];
  pfVar12[0x11] = pfVar8[5];
  pfVar12[0x12] = pfVar8[6];
  pfVar12[0x13] = 0.0;
  pfVar12[0x14] = 0.0;
  pfVar12[0x15] = 3.4028235e+38;
  iVar7 = (int)param_1[0x11];
  *(int *)(param_1 + 0x11) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0x8c) < iVar7 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
  }
  lVar3 = param_1[0x10];
  *(undefined8 *)(lVar3 + (longlong)iVar7 * 0xc) = 0;
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar7 * 0xc) = 0;
  iVar7 = (int)param_1[0xf];
  *(int *)(param_1 + 0xf) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0xe,iVar7);
  }
  puVar10 = (undefined8 *)((longlong)iVar7 * 0x20 + param_1[0xe]);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  pfVar12[0x16] = 3.4028235e+38;
  uVar9 = U2PTransform(local_138,pfVar13);
  FUN_14094caa0(puVar14,param_2,uVar9);
  iVar7 = (int)param_1[0x2e];
  if ((uint)((int)param_1[0x2d] + iVar7) < (uint)local_1a0) {
    FUN_1409589b0(param_1);
    iVar7 = (int)param_1[0x2e];
  }
  *(int *)(param_1 + 0x2e) = iVar7 + 1;
  return pfVar13[0xe];
}



// FUNCTION 140947470 FUN_140947470 body=2461 status=ok
// SIG undefined FUN_140947470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140947470(longlong *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  void *_Dst;
  float fVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar21 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
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
  undefined1 auStack_1d8 [32];
  uint local_1b8 [2];
  float *local_1b0;
  float local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)(param_1 + 0x45) = 1;
  lVar3 = param_1[5];
  iVar7 = (int)lVar3 + 1;
  *(int *)(param_1 + 5) = iVar7;
  local_1b0 = param_3;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar7) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4);
  }
  puVar14 = (undefined8 *)((longlong)(int)lVar3 * 0x10 + param_1[4]);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    *puVar14 = 0;
    puVar14[1] = 0;
  }
  pfVar13 = (float *)0x0;
  fVar12 = (float)((int)param_1[5] + -1);
  local_1a8 = fVar12;
  pfVar8 = (float *)operator_new(0x40);
  uVar9 = uRam00000001468b5b78;
  pfVar15 = pfVar13;
  if (pfVar8 != (float *)0x0) {
    *(undefined8 *)pfVar8 = _DAT_1468b5b70;
    *(undefined8 *)(pfVar8 + 2) = uVar9;
    uVar9 = uRam00000001468b5b88;
    *(undefined8 *)(pfVar8 + 4) = _DAT_1468b5b80;
    *(undefined8 *)(pfVar8 + 6) = uVar9;
    uVar9 = uRam00000001468b5b98;
    *(undefined8 *)(pfVar8 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(pfVar8 + 10) = uVar9;
    *(longlong **)(pfVar8 + 0xc) = param_1;
    pfVar8[0xe] = fVar12;
    pfVar15 = pfVar8;
  }
  lVar3 = param_1[1];
  iVar7 = (int)lVar3 + 1;
  *(int *)(param_1 + 1) = iVar7;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
  }
  *(float **)(*param_1 + (longlong)(int)lVar3 * 8) = pfVar15;
  lVar3 = param_1[0xd];
  iVar7 = (int)lVar3 + 1;
  *(int *)(param_1 + 0xd) = iVar7;
  if (*(int *)((longlong)param_1 + 0x6c) < iVar7) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xc);
  }
  _Dst = (void *)((longlong)(int)lVar3 * 0x70 + param_1[0xc]);
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x70);
  }
  lVar3 = param_1[0xb];
  iVar7 = (int)lVar3 + 1;
  *(int *)(param_1 + 0xb) = iVar7;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar7) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 10);
  }
  pfVar8 = (float *)((longlong)(int)lVar3 * 0x60 + param_1[10]);
  if (pfVar8 != (float *)0x0) {
    _guard_xfg_dispatch_icall_nop(pfVar8,0,0x60);
    pfVar13 = pfVar8;
  }
  fVar12 = 0.0;
  if (param_2 == (longlong *)0x0) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = (float)(**(code **)(*param_2 + 0x108))(param_2);
  }
  fVar42 = 3.4028235e+38;
  pfVar13[3] = fVar16;
  pfVar13[4] = 0.0;
  pfVar13[5] = 0.0;
  pfVar13[6] = 0.0;
  if (param_2 == (longlong *)0x0) {
    fVar16 = 3.4028235e+38;
  }
  else {
    fVar16 = (float)(**(code **)(*param_2 + 0x198))(param_2);
  }
  pfVar13[7] = fVar16;
  if (param_2 == (longlong *)0x0) {
    pfVar8 = (float *)local_158;
    _local_158 = ZEXT812(0);
    fVar16 = 0.0;
  }
  else {
    pfVar8 = (float *)(**(code **)(*param_2 + 0x120))(param_2,local_158);
    fVar16 = *pfVar8;
  }
  pfVar13[8] = fVar16;
  pfVar13[9] = pfVar8[1];
  pfVar13[10] = pfVar8[2];
  if (param_2 != (longlong *)0x0) {
    fVar42 = (float)(**(code **)(*param_2 + 0x1a8))(param_2);
  }
  pfVar13[0xb] = fVar42;
  if (param_2 == (longlong *)0x0) {
    pfVar8 = (float *)&local_118;
    local_118 = _DAT_1468b5b70;
    uStack_110 = uRam00000001468b5b78;
    local_f8 = _DAT_1468b5b90;
    uStack_f0 = uRam00000001468b5b98;
    uStack_100 = uRam00000001468b5b88;
    local_108 = (undefined1  [8])_DAT_1468b5b80;
  }
  else {
    uVar9 = (**(code **)(*param_2 + 0xf0))(param_2,local_158);
    pfVar8 = (float *)P2UTransform(&local_118,uVar9);
  }
  fVar20 = *pfVar8;
  fVar26 = pfVar8[1];
  fVar24 = pfVar8[2];
  fVar27 = pfVar8[3];
  *pfVar15 = fVar20;
  pfVar15[1] = fVar26;
  pfVar15[2] = fVar24;
  pfVar15[3] = fVar27;
  fVar50 = pfVar8[4];
  fVar51 = pfVar8[5];
  fVar52 = pfVar8[6];
  fVar53 = pfVar8[7];
  pfVar15[4] = fVar50;
  pfVar15[5] = fVar51;
  pfVar15[6] = fVar52;
  pfVar15[7] = fVar53;
  _local_158 = *(undefined1 (*) [16])(pfVar8 + 8);
  fVar16 = local_158._0_4_;
  fVar31 = local_158._4_4_;
  fVar35 = local_158._8_4_;
  fVar40 = local_158._12_4_;
  *(undefined1 (*) [16])(pfVar15 + 8) = _local_158;
  fVar6 = fRam0000000146863b68;
  fVar5 = fRam0000000146863b64;
  fVar4 = _DAT_146863b60;
  auVar17 = *(undefined1 (*) [16])(local_1b0 + 8);
  fVar42 = auVar17._0_4_;
  fVar32 = auVar17._4_4_;
  fVar37 = auVar17._8_4_;
  fVar41 = auVar17._12_4_;
  fVar19 = *local_1b0;
  fVar23 = local_1b0[1];
  fVar22 = local_1b0[2];
  fVar25 = local_1b0[3];
  auVar17 = minps(_local_158,auVar17);
  auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146863be4);
  auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146863be0);
  auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146863be8);
  auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam0000000146863bec);
  iVar7 = movmskps((int)pfVar8,auVar18);
  if (iVar7 == 0) {
    fVar50 = fVar50 * fVar42;
    fVar51 = fVar51 * fVar32;
    fVar52 = fVar52 * fVar37;
    fVar53 = fVar53 * fVar41;
    local_f8 = CONCAT44(fVar31 * fVar32,fVar16 * fVar42);
    uStack_f0 = CONCAT44(fVar40 * fVar41,fVar35 * fVar37);
    local_118 = CONCAT44(fVar24 * fVar19 * fRam0000000146863ba4 + fVar25 * fVar26 +
                         fVar23 * fVar27 * fRam0000000146863b94 +
                         fVar22 * fVar20 * fRam0000000146863b84,
                         fVar27 * fVar19 * _DAT_146863ba0 + fVar25 * fVar20 +
                         fVar23 * fVar24 * _DAT_146863b90 + fVar22 * fVar26 * _DAT_146863b80);
    uStack_110 = CONCAT44(fVar20 * fVar19 * fRam0000000146863bac + fVar25 * fVar27 +
                          fVar23 * fVar26 * fRam0000000146863b9c +
                          fVar22 * fVar24 * fRam0000000146863b8c,
                          fVar26 * fVar19 * fRam0000000146863ba8 + fVar25 * fVar24 +
                          fVar23 * fVar20 * fRam0000000146863b98 +
                          fVar22 * fVar27 * fRam0000000146863b88);
    fVar16 = fVar52 * fVar23 - fVar51 * fVar22;
    fVar42 = fVar50 * fVar22 - fVar52 * fVar19;
    fVar31 = fVar51 * fVar19 - fVar50 * fVar23;
    fVar32 = fVar53 * fVar25 - fVar53 * fVar25;
    fVar16 = fVar16 + fVar16;
    fVar42 = fVar42 + fVar42;
    fVar31 = fVar31 + fVar31;
    fVar32 = fVar32 + fVar32;
    local_108._4_4_ = (fVar16 * fVar22 - fVar31 * fVar19) + fVar42 * fVar25 + fVar51 + local_1b0[5];
    local_108._0_4_ = (fVar31 * fVar23 - fVar42 * fVar22) + fVar16 * fVar25 + fVar50 + local_1b0[4];
    uStack_100._0_4_ = (fVar42 * fVar19 - fVar16 * fVar23) + fVar31 * fVar25 + fVar52 + local_1b0[6]
    ;
    uStack_100._4_4_ = (fVar32 * fVar25 - fVar32 * fVar25) + fVar32 * fVar25 + fVar53 + local_1b0[7]
    ;
  }
  else {
    fVar28 = fVar23 + fVar23;
    fVar30 = fVar22 + fVar22;
    fVar53 = local_1b0[4];
    fVar1 = local_1b0[5];
    fVar2 = local_1b0[6];
    fVar33 = fVar19 * (fVar19 + fVar19);
    fVar29 = (fVar19 + fVar19) * fVar25;
    fVar46 = (fVar30 * fVar25 + fVar28 * fVar19) * fVar42;
    fVar47 = (fVar29 + fVar30 * fVar23) * fVar32;
    fVar48 = (fVar28 * fVar25 + fVar30 * fVar19) * fVar37;
    fVar34 = fVar32 * (fVar28 * fVar19 - fVar30 * fVar25);
    fVar36 = fVar37 * (fVar30 * fVar23 - fVar29);
    fVar38 = fVar42 * (fVar30 * fVar19 - fVar28 * fVar25);
    fVar19 = (float)((uint)((_DAT_146863b60 - (fVar22 * fVar30 + fVar23 * fVar28)) * fVar42) &
                    _DAT_146863b70);
    fVar22 = (float)((uint)((fRam0000000146863b64 - (fVar22 * fVar30 + fVar33)) * fVar32) &
                    uRam0000000146863b74);
    fVar25 = (float)((uint)((fRam0000000146863b68 - (fVar23 * fVar28 + fVar33)) * fVar37) &
                    uRam0000000146863b78);
    fVar29 = (float)((uint)((fRam0000000146863b6c - (fVar33 + fVar33)) * fVar41) &
                    uRam0000000146863b7c);
    fVar23 = fVar26 + fVar26;
    fVar28 = fVar24 + fVar24;
    fVar30 = fVar20 * (fVar20 + fVar20);
    fVar49 = fVar27 * (fVar20 + fVar20);
    fVar43 = (fVar27 * fVar28 + fVar20 * fVar23) * fVar16;
    fVar44 = (fVar49 + fVar26 * fVar28) * fVar31;
    fVar45 = (fVar27 * fVar23 + fVar20 * fVar28) * fVar35;
    fVar33 = fVar31 * (fVar20 * fVar23 - fVar27 * fVar28);
    fVar49 = fVar35 * (fVar26 * fVar28 - fVar49);
    fVar39 = fVar16 * (fVar20 * fVar28 - fVar27 * fVar23);
    fVar20 = (float)((uint)((_DAT_146863b60 - (fVar24 * fVar28 + fVar26 * fVar23)) * fVar16) &
                    _DAT_146863b70);
    fVar24 = (float)((uint)((fRam0000000146863b64 - (fVar24 * fVar28 + fVar30)) * fVar31) &
                    uRam0000000146863b74);
    fVar26 = (float)((uint)((fRam0000000146863b68 - (fVar26 * fVar23 + fVar30)) * fVar35) &
                    uRam0000000146863b78);
    fVar27 = (float)((uint)((fRam0000000146863b6c - (fVar30 + fVar30)) * fVar40) &
                    uRam0000000146863b7c);
    local_198 = fVar43 * fVar34 + fVar20 * fVar19 + fVar39 * fVar48 + fVar27 * fVar53;
    fStack_194 = fVar43 * fVar22 + fVar20 * fVar46 + fVar39 * fVar36 + fVar27 * fVar1;
    fStack_190 = fVar43 * fVar47 + fVar20 * fVar38 + fVar39 * fVar25 + fVar27 * fVar2;
    fStack_18c = fVar43 * fVar29 + fVar20 * fVar29 + fVar39 * fVar29 + fVar27 * fRam0000000146863b6c
    ;
    local_188 = fVar24 * fVar34 + fVar33 * fVar19 + fVar44 * fVar48 + fVar27 * fVar53;
    fStack_184 = fVar24 * fVar22 + fVar33 * fVar46 + fVar44 * fVar36 + fVar27 * fVar1;
    fStack_180 = fVar24 * fVar47 + fVar33 * fVar38 + fVar44 * fVar25 + fVar27 * fVar2;
    fStack_17c = fVar24 * fVar29 + fVar33 * fVar29 + fVar44 * fVar29 + fVar27 * fRam0000000146863b6c
    ;
    local_178 = fVar49 * fVar34 + fVar45 * fVar19 + fVar26 * fVar48 + fVar27 * fVar53;
    fStack_174 = fVar49 * fVar22 + fVar45 * fVar46 + fVar26 * fVar36 + fVar27 * fVar1;
    fStack_170 = fVar49 * fVar47 + fVar45 * fVar38 + fVar26 * fVar25 + fVar27 * fVar2;
    fStack_16c = fVar49 * fVar29 + fVar45 * fVar29 + fVar26 * fVar29 + fVar27 * fRam0000000146863b6c
    ;
    local_168 = fVar51 * fVar34 + fVar50 * fVar19 + fVar52 * fVar48 + fRam0000000146863b6c * fVar53;
    fStack_164 = fVar51 * fVar22 + fVar50 * fVar46 + fVar52 * fVar36 + fRam0000000146863b6c * fVar1;
    fStack_160 = fVar51 * fVar47 + fVar50 * fVar38 + fVar52 * fVar25 + fRam0000000146863b6c * fVar2;
    fStack_15c = fVar51 * fVar29 + fVar50 * fVar29 + fVar52 * fVar29 +
                 fRam0000000146863b6c * fRam0000000146863b6c;
    FMatrix::RemoveScaling(&local_198);
    fVar20 = (float)(-(uint)(_DAT_146863be0 <= fVar42 * fVar16) & (_DAT_146863bd0 ^ (uint)fVar4) ^
                    _DAT_146863bd0);
    fVar26 = (float)(-(uint)(fRam0000000146863be4 <= fVar32 * fVar31) &
                     (uRam0000000146863bd4 ^ (uint)fVar5) ^ uRam0000000146863bd4);
    fVar24 = (float)(-(uint)(fRam0000000146863be8 <= fVar37 * fVar35) &
                     (uRam0000000146863bd8 ^ (uint)fVar6) ^ uRam0000000146863bd8);
    local_198 = local_198 * fVar20;
    fStack_194 = fStack_194 * fVar20;
    fStack_190 = fStack_190 * fVar20;
    fStack_184 = fStack_184 * fVar26;
    fStack_180 = fStack_180 * fVar26;
    local_188 = local_188 * fVar26;
    fStack_174 = fStack_174 * fVar24;
    fStack_170 = fStack_170 * fVar24;
    local_178 = local_178 * fVar24;
    FQuat::FQuat(local_158,&local_198);
    local_1b8[0] = 0x322bcc77;
    local_f8 = CONCAT44(fVar32 * fVar31,fVar42 * fVar16);
    uStack_f0 = CONCAT44(fVar41 * fVar40,fVar37 * fVar35);
    auVar21._0_4_ = (float)local_158._0_4_ * (float)local_158._0_4_ + fStack_150 * fStack_150;
    auVar21._4_4_ = (float)local_158._4_4_ * (float)local_158._4_4_ + fStack_14c * fStack_14c;
    auVar21._8_4_ = fStack_150 * fStack_150 + (float)local_158._0_4_ * (float)local_158._0_4_;
    auVar21._12_4_ = fStack_14c * fStack_14c + (float)local_158._4_4_ * (float)local_158._4_4_;
    fVar35 = auVar21._4_4_ + auVar21._0_4_;
    fVar37 = auVar21._8_4_ + auVar21._4_4_;
    fVar40 = auVar21._12_4_ + auVar21._8_4_;
    fVar41 = auVar21._0_4_ + auVar21._12_4_;
    auVar17._4_4_ = fVar37;
    auVar17._0_4_ = fVar35;
    auVar17._8_4_ = fVar40;
    auVar17._12_4_ = fVar41;
    auVar17 = rsqrtps(auVar21,auVar17);
    fVar16 = auVar17._0_4_;
    fVar42 = auVar17._4_4_;
    fVar31 = auVar17._8_4_;
    fVar32 = auVar17._12_4_;
    fVar16 = (_DAT_146863bc0 - fVar16 * fVar16 * fVar35 * _DAT_146863bc0) * fVar16 + fVar16;
    fVar42 = (fRam0000000146863bc4 - fVar42 * fVar42 * fVar37 * fRam0000000146863bc4) * fVar42 +
             fVar42;
    fVar31 = (fRam0000000146863bc8 - fVar31 * fVar31 * fVar40 * fRam0000000146863bc8) * fVar31 +
             fVar31;
    fVar32 = (fRam0000000146863bcc - fVar32 * fVar32 * fVar41 * fRam0000000146863bcc) * fVar32 +
             fVar32;
    local_108._4_4_ = fStack_164;
    local_108._0_4_ = local_168;
    uStack_100._0_4_ = fStack_160;
    uStack_100._4_4_ = 0;
    local_118 = CONCAT44(((uint)(((fRam0000000146863bc4 -
                                  fVar42 * fVar42 * fVar37 * fRam0000000146863bc4) * fVar42 + fVar42
                                 ) * (float)local_158._4_4_) ^ uRam0000000146863bb4) &
                         -(uint)(1e-08 <= fVar37) ^ uRam0000000146863bb4,
                         ((uint)(((_DAT_146863bc0 - fVar16 * fVar16 * fVar35 * _DAT_146863bc0) *
                                  fVar16 + fVar16) * (float)local_158._0_4_) ^ _DAT_146863bb0) &
                         -(uint)(1e-08 <= fVar35) ^ _DAT_146863bb0);
    uStack_110 = CONCAT44(((uint)(((fRam0000000146863bcc -
                                   fVar32 * fVar32 * fVar41 * fRam0000000146863bcc) * fVar32 +
                                  fVar32) * fStack_14c) ^ uRam0000000146863bbc) &
                          -(uint)(1e-08 <= fVar41) ^ uRam0000000146863bbc,
                          ((uint)(((fRam0000000146863bc8 -
                                   fVar31 * fVar31 * fVar40 * fRam0000000146863bc8) * fVar31 +
                                  fVar31) * fStack_150) ^ uRam0000000146863bb8) &
                          -(uint)(1e-08 <= fVar40) ^ uRam0000000146863bb8);
  }
  pfVar8 = (float *)U2PTransform(local_138);
  pfVar13[0xc] = *pfVar8;
  pfVar13[0xd] = pfVar8[1];
  pfVar13[0xe] = pfVar8[2];
  pfVar13[0xf] = pfVar8[3];
  pfVar13[0x10] = pfVar8[4];
  pfVar13[0x11] = pfVar8[5];
  pfVar13[0x12] = pfVar8[6];
  if (param_2 == (longlong *)0x0) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = (float)(**(code **)(*param_2 + 0x1c8))(param_2);
  }
  pfVar13[0x13] = fVar16;
  if (param_2 != (longlong *)0x0) {
    fVar12 = (float)(**(code **)(*param_2 + 0x1d8))(param_2);
  }
  pfVar13[0x14] = fVar12;
  pfVar13[0x15] = 3.4028235e+38;
  iVar7 = (int)param_1[0x11];
  *(int *)(param_1 + 0x11) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0x8c) < iVar7 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
  }
  lVar3 = param_1[0x10];
  *(undefined8 *)(lVar3 + (longlong)iVar7 * 0xc) = 0;
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar7 * 0xc) = 0;
  iVar7 = (int)param_1[0xf];
  *(int *)(param_1 + 0xf) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0xe,iVar7);
  }
  puVar10 = (undefined8 *)((longlong)iVar7 * 0x20 + param_1[0xe]);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  if (param_2 == (longlong *)0x0) {
    pfVar13[0x16] = 3.4028235e+38;
  }
  else {
    fVar12 = (float)(**(code **)(*param_2 + 0x1e8))(param_2);
    lVar3 = *param_2;
    pfVar13[0x16] = fVar12 * fVar12;
    (**(code **)(lVar3 + 600))(param_2,local_1b8,&local_1b0);
    uVar11 = *(uint *)(param_1 + 0x2f);
    if (*(uint *)(param_1 + 0x2f) <= local_1b8[0]) {
      uVar11 = local_1b8[0];
    }
    *(uint *)(param_1 + 0x2f) = uVar11;
    uVar11 = *(uint *)((longlong)param_1 + 0x17c);
    if (*(uint *)((longlong)param_1 + 0x17c) <= (uint)local_1b0) {
      uVar11 = (uint)local_1b0;
    }
    *(uint *)((longlong)param_1 + 0x17c) = uVar11;
  }
  uVar9 = U2PTransform(local_138,pfVar15);
  FUN_14094caa0(puVar14,param_2,uVar9);
  fVar12 = *(float *)(param_1 + 0x2d);
  if ((uint)fVar12 < (uint)local_1a8) {
    FUN_1409589b0(param_1,fVar12);
    fVar12 = *(float *)(param_1 + 0x2d);
  }
  *(uint *)(param_1 + 0x2d) = (int)fVar12 + 1;
  return pfVar15[0xe];
}



// FUNCTION 140947e10 FUN_140947e10 body=2066 status=ok
// SIG undefined FUN_140947e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140947e10(longlong *param_1,undefined8 param_2,float *param_3)

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
  undefined1 auVar11 [16];
  longlong lVar12;
  float fVar13;
  int iVar14;
  float *pfVar15;
  void *pvVar16;
  undefined8 uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  float *pfVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
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
  undefined1 auStack_1c8 [32];
  float *local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  void *local_158;
  undefined8 local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [32];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)(param_1 + 0x45) = 1;
  lVar12 = param_1[5];
  iVar14 = (int)lVar12 + 1;
  *(int *)(param_1 + 5) = iVar14;
  local_1a8 = param_3;
  local_150 = param_2;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar14) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4);
  }
  puVar21 = (undefined8 *)((longlong)(int)lVar12 * 0x10 + param_1[4]);
  if (puVar21 == (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
  }
  else {
    *puVar21 = 0;
    puVar21[1] = 0;
  }
  pfVar18 = (float *)0x0;
  lVar12 = param_1[5];
  pfVar15 = (float *)operator_new(0x40);
  pfVar20 = pfVar18;
  if (pfVar15 != (float *)0x0) {
    uVar17 = CONCAT44(fRam00000001468b5b7c,fRam00000001468b5b78);
    *(ulonglong *)pfVar15 = CONCAT44(fRam00000001468b5b74,_DAT_1468b5b70);
    *(undefined8 *)(pfVar15 + 2) = uVar17;
    uVar17 = CONCAT44(fRam00000001468b5b8c,fRam00000001468b5b88);
    *(ulonglong *)(pfVar15 + 4) = CONCAT44(fRam00000001468b5b84,_DAT_1468b5b80);
    *(undefined8 *)(pfVar15 + 6) = uVar17;
    uVar17 = uRam00000001468b5b98;
    *(undefined8 *)(pfVar15 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(pfVar15 + 10) = uVar17;
    *(longlong **)(pfVar15 + 0xc) = param_1;
    pfVar15[0xe] = (float)((int)lVar12 + -1);
    pfVar20 = pfVar15;
  }
  lVar12 = param_1[1];
  iVar14 = (int)lVar12 + 1;
  *(int *)(param_1 + 1) = iVar14;
  if (*(int *)((longlong)param_1 + 0xc) < iVar14) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
  }
  *(float **)(*param_1 + (longlong)(int)lVar12 * 8) = pfVar20;
  lVar12 = param_1[0xd];
  iVar14 = (int)lVar12 + 1;
  *(int *)(param_1 + 0xd) = iVar14;
  if (*(int *)((longlong)param_1 + 0x6c) < iVar14) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xc);
  }
  local_158 = (void *)((longlong)(int)lVar12 * 0x70 + param_1[0xc]);
  if (local_158 == (void *)0x0) {
    local_158 = (void *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_158,0,0x70);
  }
  lVar12 = param_1[0xb];
  iVar14 = (int)lVar12 + 1;
  *(int *)(param_1 + 0xb) = iVar14;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar14) {
    iVar14 = TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 10);
  }
  pfVar15 = (float *)((longlong)(int)lVar12 * 0x60 + param_1[10]);
  if (pfVar15 != (float *)0x0) {
    pvVar16 = _guard_xfg_dispatch_icall_nop(pfVar15,0,0x60);
    iVar14 = (int)pvVar16;
    pfVar18 = pfVar15;
  }
  pfVar18[3] = 0.0;
  pfVar18[4] = 0.0;
  pfVar18[5] = 0.0;
  pfVar18[6] = 0.0;
  pfVar18[7] = 3.4028235e+38;
  pfVar18[8] = 0.0;
  pfVar18[9] = 0.0;
  pfVar18[10] = 0.0;
  pfVar18[0xb] = 3.4028235e+38;
  fVar45 = fRam00000001468b5b8c;
  fVar44 = fRam00000001468b5b88;
  fVar40 = fRam00000001468b5b84;
  fVar36 = _DAT_1468b5b80;
  fVar42 = fRam00000001468b5b7c;
  fVar13 = fRam00000001468b5b78;
  fVar31 = fRam00000001468b5b74;
  fVar29 = _DAT_1468b5b70;
  auVar11._8_8_ = uRam00000001468b5b98;
  auVar11._0_8_ = _DAT_1468b5b90;
  fVar1 = (float)_DAT_1468b5b90;
  fVar2 = (float)((ulonglong)_DAT_1468b5b90 >> 0x20);
  fVar3 = (float)uRam00000001468b5b98;
  fVar4 = (float)((ulonglong)uRam00000001468b5b98 >> 0x20);
  *pfVar20 = _DAT_1468b5b70;
  pfVar20[1] = fVar31;
  pfVar20[2] = fVar13;
  pfVar20[3] = fVar42;
  pfVar20[4] = fVar36;
  pfVar20[5] = fVar40;
  pfVar20[6] = fVar44;
  pfVar20[7] = fVar45;
  *(undefined1 (*) [16])(pfVar20 + 8) = auVar11;
  fVar43 = fRam0000000146863b68;
  fVar39 = fRam0000000146863b64;
  fVar35 = _DAT_146863b60;
  auVar22 = *(undefined1 (*) [16])(local_1a8 + 8);
  fVar5 = auVar22._0_4_;
  fVar6 = auVar22._4_4_;
  fVar7 = auVar22._8_4_;
  fVar8 = auVar22._12_4_;
  fVar24 = *local_1a8;
  fVar53 = local_1a8[1];
  fVar27 = local_1a8[2];
  fVar28 = local_1a8[3];
  auVar22 = minps(auVar11,auVar22);
  auVar23._4_4_ = -(uint)(auVar22._4_4_ < fRam0000000146863be4);
  auVar23._0_4_ = -(uint)(auVar22._0_4_ < _DAT_146863be0);
  auVar23._8_4_ = -(uint)(auVar22._8_4_ < fRam0000000146863be8);
  auVar23._12_4_ = -(uint)(auVar22._12_4_ < fRam0000000146863bec);
  iVar14 = movmskps(iVar14,auVar23);
  if (iVar14 == 0) {
    fVar36 = fVar5 * fVar36;
    fVar40 = fVar6 * fVar40;
    fVar44 = fVar7 * fVar44;
    fVar45 = fVar8 * fVar45;
    local_118 = fVar42 * fVar24 * _DAT_146863ba0 + fVar28 * fVar29 +
                fVar53 * fVar13 * _DAT_146863b90 + fVar27 * fVar31 * _DAT_146863b80;
    fStack_114 = fVar13 * fVar24 * fRam0000000146863ba4 + fVar28 * fVar31 +
                 fVar53 * fVar42 * fRam0000000146863b94 + fVar27 * fVar29 * fRam0000000146863b84;
    fStack_110 = fVar31 * fVar24 * fRam0000000146863ba8 + fVar28 * fVar13 +
                 fVar53 * fVar29 * fRam0000000146863b98 + fVar27 * fVar42 * fRam0000000146863b88;
    fStack_10c = fVar29 * fVar24 * fRam0000000146863bac + fVar28 * fVar42 +
                 fVar53 * fVar31 * fRam0000000146863b9c + fVar27 * fVar13 * fRam0000000146863b8c;
    fVar35 = fVar44 * fVar53 - fVar40 * fVar27;
    fVar39 = fVar36 * fVar27 - fVar44 * fVar24;
    fVar43 = fVar40 * fVar24 - fVar36 * fVar53;
    fVar29 = fVar45 * fVar28 - fVar45 * fVar28;
    fVar35 = fVar35 + fVar35;
    fVar39 = fVar39 + fVar39;
    fVar43 = fVar43 + fVar43;
    fVar29 = fVar29 + fVar29;
    local_108._4_4_ = (fVar35 * fVar27 - fVar43 * fVar24) + fVar39 * fVar28 + fVar40 + local_1a8[5];
    local_108._0_4_ = (fVar43 * fVar53 - fVar39 * fVar27) + fVar35 * fVar28 + fVar36 + local_1a8[4];
    fStack_100 = (fVar39 * fVar24 - fVar35 * fVar53) + fVar43 * fVar28 + fVar44 + local_1a8[6];
    fStack_fc = (fVar29 * fVar28 - fVar29 * fVar28) + fVar29 * fVar28 + fVar45 + local_1a8[7];
  }
  else {
    fVar26 = fVar53 + fVar53;
    fVar30 = fVar27 + fVar27;
    fVar45 = local_1a8[4];
    fVar9 = local_1a8[5];
    fVar10 = local_1a8[6];
    fVar32 = (fVar24 + fVar24) * fVar24;
    fVar47 = fVar28 * (fVar24 + fVar24);
    fVar50 = (fVar28 * fVar30 + fVar26 * fVar24) * fVar5;
    fVar51 = (fVar47 + fVar30 * fVar53) * fVar6;
    fVar52 = (fVar28 * fVar26 + fVar30 * fVar24) * fVar7;
    fVar33 = fVar6 * (fVar26 * fVar24 - fVar28 * fVar30);
    fVar37 = fVar7 * (fVar30 * fVar53 - fVar47);
    fVar41 = fVar5 * (fVar30 * fVar24 - fVar28 * fVar26);
    fVar24 = (float)((uint)((_DAT_146863b60 - (fVar30 * fVar27 + fVar26 * fVar53)) * fVar5) &
                    _DAT_146863b70);
    fVar27 = (float)((uint)((fRam0000000146863b64 - (fVar30 * fVar27 + fVar32)) * fVar6) &
                    uRam0000000146863b74);
    fVar26 = (float)((uint)((fRam0000000146863b68 - (fVar26 * fVar53 + fVar32)) * fVar7) &
                    uRam0000000146863b78);
    fVar32 = (float)((uint)((fRam0000000146863b6c - (fVar32 + fVar32)) * fVar8) &
                    uRam0000000146863b7c);
    fVar28 = fVar31 + fVar31;
    fVar30 = fVar13 + fVar13;
    fVar47 = (fVar29 + fVar29) * fVar29;
    fVar53 = fVar42 * (fVar29 + fVar29);
    fVar46 = (fVar42 * fVar30 + fVar29 * fVar28) * fVar1;
    fVar48 = (fVar53 + fVar31 * fVar30) * fVar2;
    fVar49 = (fVar42 * fVar28 + fVar29 * fVar30) * fVar3;
    fVar34 = fVar2 * (fVar29 * fVar28 - fVar42 * fVar30);
    fVar38 = fVar3 * (fVar31 * fVar30 - fVar53);
    fVar42 = fVar1 * (fVar29 * fVar30 - fVar42 * fVar28);
    fVar53 = (float)((uint)((_DAT_146863b60 - (fVar30 * fVar13 + fVar28 * fVar31)) * fVar1) &
                    _DAT_146863b70);
    fVar29 = (float)((uint)((fRam0000000146863b64 - (fVar30 * fVar13 + fVar47)) * fVar2) &
                    uRam0000000146863b74);
    fVar28 = (float)((uint)((fRam0000000146863b68 - (fVar28 * fVar31 + fVar47)) * fVar3) &
                    uRam0000000146863b78);
    fVar31 = (float)((uint)((fRam0000000146863b6c - (fVar47 + fVar47)) * fVar4) &
                    uRam0000000146863b7c);
    local_198 = fVar46 * fVar33 + fVar53 * fVar24 + fVar42 * fVar52 + fVar31 * fVar45;
    fStack_194 = fVar46 * fVar27 + fVar53 * fVar50 + fVar42 * fVar37 + fVar31 * fVar9;
    fStack_190 = fVar46 * fVar51 + fVar53 * fVar41 + fVar42 * fVar26 + fVar31 * fVar10;
    fStack_18c = fVar46 * fVar32 + fVar53 * fVar32 + fVar42 * fVar32 + fVar31 * fRam0000000146863b6c
    ;
    local_188 = fVar29 * fVar33 + fVar34 * fVar24 + fVar48 * fVar52 + fVar31 * fVar45;
    fStack_184 = fVar29 * fVar27 + fVar34 * fVar50 + fVar48 * fVar37 + fVar31 * fVar9;
    fStack_180 = fVar29 * fVar51 + fVar34 * fVar41 + fVar48 * fVar26 + fVar31 * fVar10;
    fStack_17c = fVar29 * fVar32 + fVar34 * fVar32 + fVar48 * fVar32 + fVar31 * fRam0000000146863b6c
    ;
    local_178 = fVar38 * fVar33 + fVar49 * fVar24 + fVar28 * fVar52 + fVar31 * fVar45;
    fStack_174 = fVar38 * fVar27 + fVar49 * fVar50 + fVar28 * fVar37 + fVar31 * fVar9;
    fStack_170 = fVar38 * fVar51 + fVar49 * fVar41 + fVar28 * fVar26 + fVar31 * fVar10;
    fStack_16c = fVar38 * fVar32 + fVar49 * fVar32 + fVar28 * fVar32 + fVar31 * fRam0000000146863b6c
    ;
    local_168 = fVar40 * fVar33 + fVar36 * fVar24 + fVar44 * fVar52 + fRam0000000146863b6c * fVar45;
    fStack_164 = fVar40 * fVar27 + fVar36 * fVar50 + fVar44 * fVar37 + fRam0000000146863b6c * fVar9;
    fStack_160 = fVar40 * fVar51 + fVar36 * fVar41 + fVar44 * fVar26 + fRam0000000146863b6c * fVar10
    ;
    fStack_15c = fVar40 * fVar32 + fVar36 * fVar32 + fVar44 * fVar32 +
                 fRam0000000146863b6c * fRam0000000146863b6c;
    FMatrix::RemoveScaling(&local_198);
    fVar24 = (float)(-(uint)(_DAT_146863be0 <= fVar5 * fVar1) & (_DAT_146863bd0 ^ (uint)fVar35) ^
                    _DAT_146863bd0);
    fVar53 = (float)(-(uint)(fRam0000000146863be4 <= fVar6 * fVar2) &
                     (uRam0000000146863bd4 ^ (uint)fVar39) ^ uRam0000000146863bd4);
    fVar27 = (float)(-(uint)(fRam0000000146863be8 <= fVar7 * fVar3) &
                     (uRam0000000146863bd8 ^ (uint)fVar43) ^ uRam0000000146863bd8);
    local_198 = local_198 * fVar24;
    fStack_190 = fStack_190 * fVar24;
    fStack_194 = fStack_194 * fVar24;
    fStack_180 = fStack_180 * fVar53;
    fStack_184 = fStack_184 * fVar53;
    local_188 = local_188 * fVar53;
    fStack_170 = fStack_170 * fVar27;
    local_178 = local_178 * fVar27;
    fStack_174 = fStack_174 * fVar27;
    FQuat::FQuat(&local_148,&local_198);
    local_1a8 = (float *)CONCAT44(local_1a8._4_4_,0x322bcc77);
    auVar25._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
    auVar25._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
    auVar25._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
    auVar25._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
    fVar35 = auVar25._4_4_ + auVar25._0_4_;
    fVar39 = auVar25._8_4_ + auVar25._4_4_;
    fVar43 = auVar25._12_4_ + auVar25._8_4_;
    fVar29 = auVar25._0_4_ + auVar25._12_4_;
    auVar22._4_4_ = fVar39;
    auVar22._0_4_ = fVar35;
    auVar22._8_4_ = fVar43;
    auVar22._12_4_ = fVar29;
    auVar22 = rsqrtps(auVar25,auVar22);
    fVar24 = auVar22._0_4_;
    fVar53 = auVar22._4_4_;
    fVar27 = auVar22._8_4_;
    fVar28 = auVar22._12_4_;
    fVar24 = (_DAT_146863bc0 - fVar24 * fVar24 * fVar35 * _DAT_146863bc0) * fVar24 + fVar24;
    fVar53 = (fRam0000000146863bc4 - fVar53 * fVar53 * fVar39 * fRam0000000146863bc4) * fVar53 +
             fVar53;
    fVar27 = (fRam0000000146863bc8 - fVar27 * fVar27 * fVar43 * fRam0000000146863bc8) * fVar27 +
             fVar27;
    fVar28 = (fRam0000000146863bcc - fVar28 * fVar28 * fVar29 * fRam0000000146863bcc) * fVar28 +
             fVar28;
    local_108._4_4_ = fStack_164;
    local_108._0_4_ = local_168;
    fStack_100 = fStack_160;
    local_118 = (float)(((uint)(((_DAT_146863bc0 - fVar24 * fVar24 * fVar35 * _DAT_146863bc0) *
                                 fVar24 + fVar24) * local_148) ^ _DAT_146863bb0) &
                        -(uint)(1e-08 <= fVar35) ^ _DAT_146863bb0);
    fStack_114 = (float)(((uint)(((fRam0000000146863bc4 -
                                  fVar53 * fVar53 * fVar39 * fRam0000000146863bc4) * fVar53 + fVar53
                                 ) * fStack_144) ^ uRam0000000146863bb4) & -(uint)(1e-08 <= fVar39)
                        ^ uRam0000000146863bb4);
    fStack_110 = (float)(((uint)(((fRam0000000146863bc8 -
                                  fVar27 * fVar27 * fVar43 * fRam0000000146863bc8) * fVar27 + fVar27
                                 ) * fStack_140) ^ uRam0000000146863bb8) & -(uint)(1e-08 <= fVar43)
                        ^ uRam0000000146863bb8);
    fStack_10c = (float)(((uint)(((fRam0000000146863bcc -
                                  fVar28 * fVar28 * fVar29 * fRam0000000146863bcc) * fVar28 + fVar28
                                 ) * fStack_13c) ^ uRam0000000146863bbc) & -(uint)(1e-08 <= fVar29)
                        ^ uRam0000000146863bbc);
    fStack_fc = 0.0;
  }
  fStack_ec = fVar8 * fVar4;
  fStack_f0 = fVar7 * fVar3;
  fStack_f4 = fVar6 * fVar2;
  local_f8 = fVar5 * fVar1;
  pfVar15 = (float *)U2PTransform(local_138);
  pfVar18[0xc] = *pfVar15;
  pfVar18[0xd] = pfVar15[1];
  pfVar18[0xe] = pfVar15[2];
  pfVar18[0xf] = pfVar15[3];
  pfVar18[0x10] = pfVar15[4];
  pfVar18[0x11] = pfVar15[5];
  pfVar18[0x12] = pfVar15[6];
  pfVar18[0x13] = 0.0;
  pfVar18[0x14] = 0.0;
  pfVar18[0x15] = 3.4028235e+38;
  iVar14 = (int)param_1[0x11];
  *(int *)(param_1 + 0x11) = iVar14 + 1;
  if (*(int *)((longlong)param_1 + 0x8c) < iVar14 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
  }
  lVar12 = param_1[0x10];
  *(undefined8 *)(lVar12 + (longlong)iVar14 * 0xc) = 0;
  *(undefined4 *)(lVar12 + 8 + (longlong)iVar14 * 0xc) = 0;
  iVar14 = (int)param_1[0xf];
  *(int *)(param_1 + 0xf) = iVar14 + 1;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar14 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0xe,iVar14);
  }
  puVar19 = (undefined8 *)((longlong)iVar14 * 0x20 + param_1[0xe]);
  *puVar19 = 0;
  puVar19[1] = 0;
  puVar19[2] = 0;
  puVar19[3] = 0;
  pfVar18[0x16] = 3.4028235e+38;
  PxConstructStaticSolverBody(pfVar18 + 0xc,local_158);
  uVar17 = U2PTransform(local_138,pfVar20);
  FUN_14094caa0(puVar21,local_150,uVar17);
  return pfVar20[0xe];
}



// FUNCTION 140948630 FUN_140948630 body=789 status=ok
// SIG undefined FUN_140948630(void)

uint * FUN_140948630(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  void *_Dst;
  int iVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *_Src;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)(int)uVar9 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar9 * 0x60 + *param_1);
  TKeyInitializer<UClass_*_const_&>::
  operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 0xb) = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar9 != 1) {
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar4 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _Dst = (void *)(lVar8 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x58);
      uVar9 = *param_2;
      bVar2 = (byte)uVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x60 + *param_1) = uVar9;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar9 * 0x60 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar9;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14094891c;
    }
  }
  if (3 < uVar9) {
    uVar4 = (uVar9 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar4 = (uVar9 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(iVar10 + uVar4) ^ uVar4 >> 0xd;
    uVar9 = (iVar10 - uVar4) - uVar12 ^ uVar12 >> 0xc;
    uVar4 = (uVar4 - uVar9) - uVar12 ^ uVar9 << 0x10;
    uVar12 = (uVar12 - uVar4) - uVar9 ^ uVar4 >> 5;
    uVar9 = (uVar9 - uVar4) - uVar12 ^ uVar12 >> 3;
    uVar4 = (uVar4 - uVar9) - uVar12 ^ uVar9 << 10;
    uVar9 = ((uVar12 - uVar4) - uVar9 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x5c) = uVar9;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xb) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14094891c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140948950 HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=395 status=ok
// SIG undefined HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 2 + 1;
    iVar2 = iVar5;
    iVar7 = iVar4;
joined_r0x000140948996:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          cVar3 = <lambda_c3859a9a22bc5dc1683b777c42837bd3>::operator()
                            (param_4,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
          if (cVar3 != '\0') {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        cVar3 = <lambda_c3859a9a22bc5dc1683b777c42837bd3>::operator()
                          (param_4,param_1[iVar4],param_1[iVar6]);
        if (cVar3 != '\0') {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar6];
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = uVar1;
          iVar4 = iVar6;
          goto joined_r0x000140948996;
        }
      }
      iVar5 = iVar2 + -2;
      iVar4 = iVar7 + -1;
      iVar2 = iVar5;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar1;
      if (1 < param_2) {
        do {
          iVar2 = iVar4 * 2;
          iVar5 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar3 = <lambda_c3859a9a22bc5dc1683b777c42837bd3>::operator()
                              (param_4,param_1[(longlong)iVar2 + 2],param_1[iVar5]);
            if (cVar3 != '\0') {
              iVar5 = iVar2;
            }
            iVar5 = iVar5 + 1;
          }
          cVar3 = <lambda_c3859a9a22bc5dc1683b777c42837bd3>::operator()
                            (param_4,param_1[iVar4],param_1[iVar5]);
          if (cVar3 == '\0') break;
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar4 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 140948ae0 IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=681 status=ok
// SIG undefined IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      local_358 = plVar7[2];
      lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_140948bc0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[lVar3 >> 1];
          puVar10[lVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_140948bf0:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x000140948bf9;
          goto LAB_140948c10;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            cVar2 = <lambda_c3859a9a22bc5dc1683b777c42837bd3>::operator()(param_4,*puVar8,*puVar5);
            if (cVar2 != '\0') {
              puVar8 = puVar5;
            }
          }
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_140948cd5;
      }
LAB_140948cc6:
      HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
                (puVar5,lVar3,param_3,param_4);
LAB_140948cd5:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x000140948bf9:
  cVar2 = <lambda_c3859a9a22bc5dc1683b777c42837bd3>::operator()(param_4,*puVar10,*puVar5);
  if (cVar2 == '\0') goto LAB_140948bf0;
LAB_140948c10:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar2 = <lambda_c3859a9a22bc5dc1683b777c42837bd3>::operator()(param_4,*puVar8,*puVar10);
  } while (cVar2 == '\0');
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_140948bf0;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffff8U)) {
    if (puVar5 < puVar4) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar4;
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_140948cd5;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *plVar7 = (longlong)puVar10;
      plVar7[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_140948cd5;
  }
  lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_140948cc6;
  goto LAB_140948bc0;
}



// FUNCTION 140948d90 FUN_140948d90 body=1743 status=ok
// SIG undefined FUN_140948d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140948d90(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [24];
  undefined1 local_e0 [28];
  undefined1 local_c4 [156];
  
  pfVar4 = (float *)(**(code **)(*DAT_146b08400 + 0x20))();
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  local_res10 = 0;
  local_res18 = 0;
  param_1[0x1f] = *pfVar4 * 0.01;
  param_1[0x21] = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0x3f000000;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0x3f000000;
  *(undefined8 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x33) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x37) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x43) = 0;
  *(undefined8 *)(param_1 + 0x45) = 0x7f7fffff;
  uVar12 = uRam0000000146863b6c;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = uVar12;
  uVar12 = uRam0000000146863b64 & uRam0000000146863b74;
  uVar13 = uRam0000000146863b68 & uRam0000000146863b78;
  uVar14 = uRam0000000146863b6c & uRam0000000146863b7c;
  param_1[0x68] = _DAT_146863b60 & _DAT_146863b70;
  param_1[0x69] = uVar12;
  param_1[0x6a] = uVar13;
  param_1[0x6b] = uVar14;
  uVar12 = uRam0000000146863b6c;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = uVar12;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  uVar12 = uRam0000000146863b64 & uRam0000000146863b74;
  uVar13 = uRam0000000146863b68 & uRam0000000146863b78;
  uVar14 = uRam0000000146863b6c & uRam0000000146863b7c;
  param_1[0x74] = _DAT_146863b60 & _DAT_146863b70;
  param_1[0x75] = uVar12;
  param_1[0x76] = uVar13;
  param_1[0x77] = uVar14;
  (**(code **)(*param_2 + 0x30))(param_2,&local_res10,&local_res18);
  lVar5 = (**(code **)(*param_2 + 0x40))(param_2,local_e0,0);
  pfVar4 = (float *)FUN_14094a470(local_res8,local_c4,local_res10);
  local_108 = -*pfVar4;
  local_fc = pfVar4[3];
  local_104 = -pfVar4[1];
  fVar18 = *(float *)(lVar5 + 0x10) - pfVar4[4];
  fVar17 = *(float *)(lVar5 + 0x14) - pfVar4[5];
  local_100 = -pfVar4[2];
  fVar21 = *(float *)(lVar5 + 0x18) - pfVar4[6];
  fVar18 = fVar18 + fVar18;
  fVar17 = fVar17 + fVar17;
  fVar21 = fVar21 + fVar21;
  fVar16 = local_fc * local_fc - 0.5;
  fVar15 = local_104 * fVar17 + local_108 * fVar18 + local_100 * fVar21;
  fVar10 = fVar15 * local_108;
  fVar20 = (local_104 * fVar21 - local_100 * fVar17) * local_fc;
  fVar11 = fVar15 * local_104;
  fVar15 = fVar15 * local_100;
  fVar19 = (local_100 * fVar18 - local_108 * fVar21) * local_fc;
  fVar22 = (local_108 * fVar17 - local_104 * fVar18) * local_fc;
  puVar6 = (undefined4 *)physx::PxQuat::operator*(&local_108,local_f8,lVar5);
  uVar3 = puVar6[2];
  uVar1 = puVar6[3];
  uVar2 = *puVar6;
  param_1[5] = puVar6[1];
  param_1[6] = uVar3;
  param_1[7] = uVar1;
  param_1[4] = uVar2;
  param_1[8] = fVar20 + fVar16 * fVar18 + fVar10;
  param_1[9] = fVar19 + fVar16 * fVar17 + fVar11;
  param_1[10] = fVar22 + fVar16 * fVar21 + fVar15;
  lVar5 = (**(code **)(*param_2 + 0x40))(param_2,local_c4,1);
  pfVar4 = (float *)FUN_14094a470(local_res8,local_e0,local_res18);
  local_fc = pfVar4[3];
  local_108 = -*pfVar4;
  fVar17 = *(float *)(lVar5 + 0x10) - pfVar4[4];
  fVar16 = *(float *)(lVar5 + 0x14) - pfVar4[5];
  fVar20 = *(float *)(lVar5 + 0x18) - pfVar4[6];
  local_104 = -pfVar4[1];
  local_100 = -pfVar4[2];
  fVar17 = fVar17 + fVar17;
  fVar16 = fVar16 + fVar16;
  fVar15 = local_fc * local_fc - 0.5;
  fVar20 = fVar20 + fVar20;
  fVar11 = local_104 * fVar16 + local_108 * fVar17 + local_100 * fVar20;
  fVar10 = local_108 * fVar11;
  fVar19 = (local_104 * fVar20 - local_100 * fVar16) * local_fc;
  fVar21 = local_100 * fVar11;
  fVar11 = local_104 * fVar11;
  fVar18 = (local_100 * fVar17 - local_108 * fVar20) * local_fc;
  fVar22 = (local_108 * fVar16 - local_104 * fVar17) * local_fc;
  puVar6 = (undefined4 *)physx::PxQuat::operator*(&local_108,local_f8,lVar5);
  uVar3 = puVar6[1];
  uVar1 = puVar6[2];
  uVar2 = puVar6[3];
  param_1[0xb] = *puVar6;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = fVar19 + fVar15 * fVar17 + fVar10;
  param_1[0x10] = fVar18 + fVar15 * fVar16 + fVar11;
  param_1[0x11] = fVar22 + fVar15 * fVar20 + fVar21;
  puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x118))(param_2,local_f8);
  uVar3 = puVar6[1];
  uVar1 = puVar6[2];
  uVar2 = puVar6[3];
  param_1[0x1b] = *puVar6;
  param_1[0x1c] = uVar3;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  *(undefined8 *)(param_1 + 0x1f) = *(undefined8 *)(puVar6 + 4);
  puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x138))(param_2,local_c4);
  uVar3 = puVar6[1];
  uVar1 = puVar6[2];
  uVar2 = puVar6[3];
  param_1[0x28] = *puVar6;
  param_1[0x29] = uVar3;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar2;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(puVar6 + 4);
  param_1[0x2e] = puVar6[6];
  puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x128))(param_2,local_c4);
  uVar3 = puVar6[1];
  uVar1 = puVar6[2];
  uVar2 = puVar6[3];
  param_1[0x21] = *puVar6;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar2;
  *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(puVar6 + 4);
  param_1[0x27] = puVar6[6];
  puVar6 = param_1 + 0x32;
  uVar12 = uVar9;
  do {
    puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x148))(param_2,local_f8,uVar12);
    uVar12 = uVar12 + 1;
    *(undefined8 *)(puVar6 + -3) = *puVar7;
    puVar6[-1] = *(undefined4 *)(puVar7 + 1);
    *puVar6 = *(undefined4 *)((longlong)puVar7 + 0xc);
    puVar6 = puVar6 + 4;
  } while (uVar12 < 6);
  (**(code **)(*param_2 + 0x168))(param_2,param_1 + 0x4e,param_1 + 0x51);
  puVar8 = (undefined4 *)(**(code **)(*param_2 + 0x158))(param_2,local_c4);
  puVar6 = param_1 + 0x15;
  param_1[0x47] = *puVar8;
  param_1[0x48] = puVar8[1];
  param_1[0x49] = puVar8[2];
  param_1[0x4a] = puVar8[3];
  param_1[0x4b] = puVar8[4];
  param_1[0x4c] = puVar8[5];
  param_1[0x4d] = puVar8[6];
  do {
    uVar3 = (**(code **)(*param_2 + 0xf0))(param_2,uVar9);
    uVar9 = uVar9 + 1;
    *puVar6 = uVar3;
    puVar6 = puVar6 + 1;
  } while (uVar9 < 6);
  uVar3 = (**(code **)(*param_2 + 0x90))(param_2);
  *param_1 = uVar3;
  uVar3 = (**(code **)(*param_2 + 0xb0))(param_2);
  param_1[2] = uVar3;
  uVar3 = (**(code **)(*param_2 + 0xa0))(param_2);
  param_1[1] = uVar3;
  uVar3 = (**(code **)(*param_2 + 0xc0))(param_2);
  param_1[0x5d] = 0x3c23d70a;
  param_1[3] = uVar3;
  return param_1;
}



// FUNCTION 140949460 FUN_140949460 body=1247 status=ok
// SIG undefined FUN_140949460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140949460(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144167968;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x10,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41200000;
  param_1[0x1f] = 0x41200000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xbf800000;
  FUN_141f84110(param_1 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *param_1 = &PTR_FUN_144167aa0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  uVar4 = uRam0000000146863b6c;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(uint *)((longlong)param_1 + 0x29c) = uVar4;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  uVar4 = uRam0000000146863b64 & uRam0000000146863b74;
  uVar5 = uRam0000000146863b68 & uRam0000000146863b78;
  uVar6 = uRam0000000146863b6c & uRam0000000146863b7c;
  *(uint *)(param_1 + 0x56) = _DAT_146863b60 & _DAT_146863b70;
  *(uint *)((longlong)param_1 + 0x2b4) = uVar4;
  *(uint *)(param_1 + 0x57) = uVar5;
  *(uint *)((longlong)param_1 + 700) = uVar6;
  local_res10 = 0;
  FUN_1422ffb20(param_1 + 0x5c,0,local_res8,0,0);
  param_1[0x6c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6d) = 0xffff;
  FBoneContainer::FBoneContainer(param_1 + 0x6f);
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54a) = 0;
  uVar4 = uRam0000000146863b6c;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(uint *)((longlong)param_1 + 0x55c) = uVar4;
  uVar4 = uRam0000000146863b64 & uRam0000000146863b74;
  uVar5 = uRam0000000146863b68 & uRam0000000146863b78;
  uVar6 = uRam0000000146863b6c & uRam0000000146863b7c;
  *(uint *)(param_1 + 0xae) = _DAT_146863b60 & _DAT_146863b70;
  *(uint *)((longlong)param_1 + 0x574) = uVar4;
  *(uint *)(param_1 + 0xaf) = uVar5;
  *(uint *)((longlong)param_1 + 0x57c) = uVar6;
  uVar4 = uRam0000000146863b6c;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(uint *)((longlong)param_1 + 0x58c) = uVar4;
  uVar4 = uRam0000000146863b64 & uRam0000000146863b74;
  uVar5 = uRam0000000146863b68 & uRam0000000146863b78;
  uVar6 = uRam0000000146863b6c & uRam0000000146863b7c;
  *(uint *)(param_1 + 0xb4) = _DAT_146863b60 & _DAT_146863b70;
  *(uint *)((longlong)param_1 + 0x5a4) = uVar4;
  *(uint *)(param_1 + 0xb5) = uVar5;
  *(uint *)((longlong)param_1 + 0x5ac) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0x38] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x15c) = DAT_1468b5d98;
  *(undefined1 *)((longlong)param_1 + 0x1b2) = 1;
  param_1[0x29] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x2a) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x6e] = 0;
  *(undefined2 *)((longlong)param_1 + 0x5bd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x184) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  uVar2 = uRam00000001468b5b78;
  uVar1 = _DAT_1468b5b70;
  param_1[0xaa] = _DAT_1468b5b70;
  param_1[0xab] = uVar2;
  uVar3 = uRam00000001468b5b88;
  param_1[0xac] = _DAT_1468b5b80;
  param_1[0xad] = uVar3;
  uVar3 = uRam00000001468b5b98;
  param_1[0xae] = _DAT_1468b5b90;
  param_1[0xaf] = uVar3;
  param_1[0xb0] = uVar1;
  param_1[0xb1] = uVar2;
  param_1[0xb2] = param_1[0xac];
  param_1[0xb3] = param_1[0xad];
  param_1[0xb4] = param_1[0xae];
  param_1[0xb5] = param_1[0xaf];
  param_1[0xb6] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xb7) = DAT_1468b5d98;
  param_1[0x2c] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x2d) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x16c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x174) = DAT_1468b5d98;
  param_1[0x2f] = 0x47c3500047c35000;
  *(undefined4 *)(param_1 + 0x30) = 0x47c35000;
  return param_1;
}



// FUNCTION 140949940 FSimulation body=730 status=ok
// SIG undefined FSimulation(void)

undefined8 * ImmediatePhysics::FSimulation::FSimulation(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = FMemory::Malloc(0x10018,0x10);
  lVar3 = 2;
  lVar2 = 2;
  *(undefined8 *)(lVar1 + 0x10000) = 0;
  *(undefined8 *)(lVar1 + 0x10008) = 0;
  *(undefined4 *)(lVar1 + 0x10010) = 0;
  param_1[8] = lVar1;
  param_1[9] = lVar1;
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
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = &PTR_LAB_144167bd8;
  plVar4 = param_1 + 0x49;
  do {
    lVar1 = FMemory::Malloc(0x10018,0x10);
    *(undefined8 *)(lVar1 + 0x10000) = 0;
    *(undefined8 *)(lVar1 + 0x10008) = 0;
    *(undefined4 *)(lVar1 + 0x10010) = 0;
    *plVar4 = lVar1;
    plVar4[1] = lVar1;
    lVar2 = lVar2 + -1;
    plVar4 = plVar4 + 2;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = &PTR_LAB_144167be8;
  plVar4 = param_1 + 0x4f;
  do {
    lVar1 = FMemory::Malloc(0x10018,0x10);
    *(undefined8 *)(lVar1 + 0x10000) = 0;
    *(undefined8 *)(lVar1 + 0x10008) = 0;
    *(undefined4 *)(lVar1 + 0x10010) = 0;
    *plVar4 = lVar1;
    plVar4[1] = lVar1;
    lVar3 = lVar3 + -1;
    plVar4 = plVar4 + 2;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 1;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 1;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 140949c20 ~TSparseArray<TSetElement<TTuple<ImmediatePhysics::FActorHandle_*,TSet<ImmediatePhysics::FActorHandle_*,DefaultKeyFuncs<ImmediatePhysics::FActorHandle_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=244 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<ImmediatePhysics::FActorHandle_*,TSet<ImmediatePhysics::FActorHandle_*,DefaultKeyFuncs<ImmediatePhysics::FActorHandle_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<ImmediatePhysics::FActorHandle_*,TSet<ImmediatePhysics::FActorHandle_*,DefaultKeyFuncs<ImmediatePhysics::FActorHandle_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<ImmediatePhysics::FActorHandle_*,TSet<ImmediatePhysics::FActorHandle_*,DefaultKeyFuncs<ImmediatePhysics::FActorHandle_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar1 = (longlong)local_1c * 0x60 + *local_38;
      *(undefined4 *)(lVar1 + 0x50) = 0;
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar1 + 8);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140949d20 FUN_140949d20 body=443 status=ok
// SIG undefined FUN_140949d20(void)

void FUN_140949d20(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x38];
  *param_1 = &PTR_FUN_144167aa0;
  if (lVar1 != 0) {
    FUN_14094a130(lVar1);
    FMemory::operator_delete(lVar1,0x2a0);
  }
  if (param_1[0xa6] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa4] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa2] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa0] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x99] != 0) {
    FMemory::Free();
  }
  if (param_1[0x97] != 0) {
    FMemory::Free();
  }
  if (param_1[0x94] != 0) {
    FMemory::Free();
  }
  FBoneContainer::~FBoneContainer(param_1 + 0x6f);
  if (param_1[0x69] != 0) {
    FMemory::Free();
  }
  if (param_1[0x65] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (param_1[0x4d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x45);
  if (param_1[0x43] != 0) {
    FMemory::Free();
  }
  if (param_1[0x41] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3b] != 0) {
    FMemory::Free();
  }
  FUN_140590de0(param_1 + 0x39);
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140949ee0 FUN_140949ee0 body=175 status=ok
// SIG undefined FUN_140949ee0(void)

void FUN_140949ee0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = 2;
  puVar4 = param_1 + 5;
  do {
    lVar1 = puVar4[-1];
    lVar3 = lVar3 + -1;
    lVar2 = *(longlong *)(lVar1 + 0x10000);
    if (lVar2 != 0) {
      do {
        lVar1 = *(longlong *)(lVar2 + 0x10000);
        FMemory::Free(lVar2);
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar1 = puVar4[-1];
    }
    *(undefined8 *)(lVar1 + 0x10000) = 0;
    *(undefined4 *)(puVar4[-1] + 0x10010) = 0;
    puVar4[-2] = puVar4[-1];
    FMemory::Free();
    puVar4 = puVar4 + -2;
  } while (lVar3 != 0);
  *param_1 = &PTR__purecall_143f3ef70;
  return;
}



// FUNCTION 140949f90 FUN_140949f90 body=175 status=ok
// SIG undefined FUN_140949f90(void)

void FUN_140949f90(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = 2;
  puVar4 = param_1 + 5;
  do {
    lVar1 = puVar4[-1];
    lVar3 = lVar3 + -1;
    lVar2 = *(longlong *)(lVar1 + 0x10000);
    if (lVar2 != 0) {
      do {
        lVar1 = *(longlong *)(lVar2 + 0x10000);
        FMemory::Free(lVar2);
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar1 = puVar4[-1];
    }
    *(undefined8 *)(lVar1 + 0x10000) = 0;
    *(undefined4 *)(puVar4[-1] + 0x10010) = 0;
    puVar4[-2] = puVar4[-1];
    FMemory::Free();
    puVar4 = puVar4 + -2;
  } while (lVar3 != 0);
  *param_1 = &PTR__purecall_143f9a338;
  return;
}



// FUNCTION 14094a040 ~FLinearBlockAllocator body=97 status=ok
// SIG undefined ~FLinearBlockAllocator(void)

void ImmediatePhysics::FLinearBlockAllocator::~FLinearBlockAllocator(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *(longlong *)(lVar1 + 0x10000);
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 0x10000);
      FMemory::Free();
    } while (lVar2 != 0);
    lVar1 = param_1[1];
  }
  *(undefined8 *)(lVar1 + 0x10000) = 0;
  *(undefined4 *)(param_1[1] + 0x10010) = 0;
  *param_1 = param_1[1];
  FMemory::Free();
  return;
}



// FUNCTION 14094a0b0 ~FShapeSOA body=117 status=ok
// SIG undefined ~FShapeSOA(void)

void ImmediatePhysics::FSimulation::FShapeSOA::~FShapeSOA(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14094a130 FUN_14094a130 body=510 status=ok
// SIG undefined FUN_14094a130(void)

void FUN_14094a130(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  plVar3 = (longlong *)*param_1;
  uVar4 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar3 + (int)param_1[1] < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::operator_delete(*plVar3,0x40);
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  FUN_140949f90(param_1 + 0x4e);
  FUN_140949ee0(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ImmediatePhysics::FActorHandle_*,TSet<ImmediatePhysics::FActorHandle_*,DefaultKeyFuncs<ImmediatePhysics::FActorHandle_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<ImmediatePhysics::FActorHandle_*,TSet<ImmediatePhysics::FActorHandle_*,DefaultKeyFuncs<ImmediatePhysics::FActorHandle_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x31);
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x25] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  ImmediatePhysics::FSimulation::FShapeSOA::~FShapeSOA(param_1 + 0x14);
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  ImmediatePhysics::FLinearBlockAllocator::~FLinearBlockAllocator(param_1 + 8);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  iVar1 = (int)param_1[5];
  plVar3 = (longlong *)param_1[4];
  if (iVar1 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar3 = (longlong *)param_1[4];
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14094a330 operator* body=307 status=ok
// SIG undefined operator*(void)

float * physx::PxQuat::operator*(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_3;
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  fVar4 = *param_1;
  fVar5 = param_3[1];
  fVar6 = param_1[2];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  *param_2 = (fVar4 * fVar8 + fVar1 * fVar2 + fVar3 * fVar7) - fVar6 * fVar5;
  param_2[1] = (fVar3 * fVar8 + fVar5 * fVar2 + fVar6 * fVar1) - fVar7 * fVar4;
  param_2[3] = ((fVar8 * fVar2 - fVar4 * fVar1) - fVar5 * fVar3) - fVar6 * fVar7;
  param_2[2] = (fVar6 * fVar8 + fVar7 * fVar2 + fVar5 * fVar4) - fVar3 * fVar1;
  return param_2;
}



// FUNCTION 14094a470 FUN_14094a470 body=610 status=ok
// SIG undefined FUN_14094a470(void)

float * FUN_14094a470(undefined8 param_1,float *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_c8 [192];
  
  if (param_3 == (longlong *)0x0) {
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
  }
  else {
    iVar6 = (**(code **)(*param_3 + 0x28))(param_3);
    if ((iVar6 != 1) && (iVar6 = (**(code **)(*param_3 + 0x28))(param_3), iVar6 != 4)) {
      pfVar7 = (float *)(**(code **)(*param_3 + 0xa0))(param_3,local_c8);
      fVar1 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar4 = pfVar7[3];
      fVar8 = pfVar7[4];
      fVar9 = pfVar7[5];
      fVar5 = pfVar7[6];
      *param_2 = -fVar1;
      fVar11 = -(fVar8 + fVar8);
      param_2[3] = fVar4;
      fVar12 = fVar4 * fVar4 - 0.5;
      fVar10 = -(fVar9 + fVar9);
      fVar9 = -(fVar5 + fVar5);
      param_2[1] = -fVar2;
      param_2[2] = -fVar3;
      fVar8 = fVar2 * fVar10 + fVar1 * fVar11 + fVar3 * fVar9;
      param_2[6] = (fVar12 * fVar9 - (fVar1 * fVar10 - fVar2 * fVar11) * fVar4) + fVar3 * fVar8;
      param_2[4] = (fVar12 * fVar11 - (fVar2 * fVar9 - fVar3 * fVar10) * fVar4) + fVar1 * fVar8;
      param_2[5] = (fVar12 * fVar10 - (fVar3 * fVar11 - fVar1 * fVar9) * fVar4) + fVar2 * fVar8;
      return param_2;
    }
    (**(code **)(*param_3 + 0xf0))(param_3,param_2);
  }
  return param_2;
}



// FUNCTION 14094a6e0 operator() body=201 status=ok
// SIG undefined operator()(void)

ulonglong <lambda_c3859a9a22bc5dc1683b777c42837bd3>::operator()
                    (undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = FConstraintInstance::IsValidConstraintInstance(param_2);
  if ((char)uVar7 != '\0') {
    uVar7 = FConstraintInstance::IsValidConstraintInstance(param_3);
    if ((char)uVar7 != '\0') {
      uVar1 = param_1[1];
      lVar2 = *(longlong *)*param_1;
      iVar3 = FReferenceSkeleton::FindBoneIndex(uVar1,param_2 + 0x28);
      iVar3 = *(int *)(lVar2 + (longlong)iVar3 * 4);
      iVar4 = FReferenceSkeleton::FindBoneIndex(uVar1,param_2 + 0x20);
      iVar4 = *(int *)(lVar2 + (longlong)iVar4 * 4);
      iVar5 = FReferenceSkeleton::FindBoneIndex(uVar1,param_3 + 0x28);
      iVar5 = *(int *)(lVar2 + (longlong)iVar5 * 4);
      iVar6 = FReferenceSkeleton::FindBoneIndex(uVar1,param_3 + 0x20);
      iVar6 = *(int *)(lVar2 + (longlong)iVar6 * 4);
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      if (iVar3 <= iVar4) {
        iVar3 = iVar4;
      }
      return (ulonglong)CONCAT31((int3)((uint)iVar6 >> 8),iVar3 < iVar5);
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 14094a7b0 FUN_14094a7b0 body=800 status=ok
// SIG undefined FUN_14094a7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14094a7b0(undefined8 *param_1,char param_2)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  char local_b8;
  char local_b7;
  longlong local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar12 = 0;
  puVar11 = *(ushort **)*param_1;
  uVar8 = (ulonglong)*(int *)((undefined8 *)*param_1 + 1);
  uVar10 = uVar8 & 0x7fffffffffffffff;
  if (puVar11 + uVar8 < puVar11) {
    uVar10 = uVar12;
  }
  local_b7 = param_2;
  if (uVar10 != 0) {
    do {
      uVar2 = *puVar11;
      piVar3 = *(int **)(*(longlong *)param_1[1] + (ulonglong)uVar2 * 8);
      if (piVar3 != (int *)0x0) {
        local_a0 = *(longlong *)
                    (*(longlong *)(*(longlong *)param_1[2] + 0x40) + (longlong)*piVar3 * 8);
        cVar1 = *(char *)(local_a0 + 0x98);
        local_b8 = cVar1;
        FUN_1423acfd0(*(undefined8 *)param_1[3],local_88,uVar2);
        local_b0 = 0;
        if (param_2 != '\0') {
          if (cVar1 == '\x02') {
            uVar9 = FUN_142697a40();
            plVar4 = *(longlong **)(param_1[4] + 0x1c0);
            iVar7 = FUN_140947470(plVar4,uVar9,local_88);
            *(int *)((longlong)plVar4 + 0x16c) = (int)plVar4[0x2d];
            *(undefined1 *)(plVar4 + 0x29) = 1;
            local_b0 = *(longlong *)(*plVar4 + (longlong)iVar7 * 8);
            fVar13 = *(float *)((longlong)*(int *)(local_b0 + 0x38) * 0x60 + 0xc +
                               *(longlong *)(*(longlong *)(local_b0 + 0x30) + 0x50));
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
            else {
              fVar13 = 1.0 / fVar13;
            }
            *(float *)(param_1[4] + 0x288) = fVar13 + *(float *)(param_1[4] + 0x288);
          }
          else {
            uVar9 = FUN_1426979f0(piVar3);
            plVar4 = *(longlong **)(param_1[4] + 0x1c0);
            iVar7 = FUN_140946bc0(plVar4,uVar9,local_88);
            local_b0 = *(longlong *)(*plVar4 + (longlong)iVar7 * 8);
          }
          if (local_b0 != 0) {
            lVar5 = param_1[4];
            iVar7 = *(int *)(lVar5 + 0x1e0);
            *(int *)(lVar5 + 0x1e0) = iVar7 + 1;
            if (*(int *)(lVar5 + 0x1e4) < iVar7 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x1d8,iVar7)
              ;
            }
            lVar6 = local_a0;
            *(longlong *)(*(longlong *)(lVar5 + 0x1d8) + (longlong)iVar7 * 8) = local_b0;
            *(int *)(*(longlong *)(param_1[4] + 0x1e8) +
                    (longlong)*(int *)(*(longlong *)param_1[5] + (ulonglong)uVar2 * 4) * 4) = iVar7;
            local_98 = local_a0 + 0x90;
            local_90 = &local_b0;
            *(bool *)((longlong)iVar7 * 0x40 + *(longlong *)(param_1[4] + 0x1f8)) =
                 local_b8 == '\x02';
            TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                      (param_1[6],local_a8,&local_98,0);
            *(longlong *)(*(longlong *)param_1[7] + (longlong)*piVar3 * 8) = local_b0;
            if (*(char *)(lVar6 + 0x9b) == '\x01') {
              plVar4 = (longlong *)param_1[8];
              iVar7 = (int)plVar4[1];
              *(int *)(plVar4 + 1) = iVar7 + 1;
              if (*(int *)((longlong)plVar4 + 0xc) < iVar7 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar7);
              }
              *(longlong *)(*plVar4 + (longlong)iVar7 * 8) = local_b0;
            }
            FUN_1426adfd0(piVar3);
            FUN_14061f570(piVar3);
            FMemory::operator_delete(piVar3,0x1b0);
            *(undefined8 *)(*(longlong *)param_1[1] + (ulonglong)uVar2 * 8) = 0;
            param_2 = local_b7;
          }
        }
      }
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
  }
  return;
}



// FUNCTION 14094aad0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FVulkanCommandListContext::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140949d20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5c0);
  }
  return param_1;
}



// FUNCTION 14094ab10 FUN_14094ab10 body=89 status=ok
// SIG undefined FUN_14094ab10(void)

undefined8 * FUN_14094ab10(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 14094ab70 FUN_14094ab70 body=52 status=ok
// SIG undefined FUN_14094ab70(void)

undefined8 FUN_14094ab70(undefined8 param_1,ulonglong param_2)

{
  FUN_140949ee0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14094abb0 FUN_14094abb0 body=52 status=ok
// SIG undefined FUN_14094abb0(void)

undefined8 FUN_14094abb0(undefined8 param_1,ulonglong param_2)

{
  FUN_140949f90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14094abf0 FUN_14094abf0 body=43 status=ok
// SIG undefined FUN_14094abf0(void)

undefined8 * FUN_14094abf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14094ac20 AddForce body=109 status=ok
// SIG undefined AddForce(void)

void ImmediatePhysics::FActorHandle::AddForce(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar5 = (longlong)(int)*(uint *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x38) < *(uint *)(lVar4 + 0x168)) {
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = *(float *)(lVar5 * 0x60 + 0xc + *(longlong *)(lVar4 + 0x50));
    lVar4 = *(longlong *)(lVar4 + 0x80);
    *(float *)(lVar4 + lVar5 * 0xc) = fVar3 * *param_2 + *(float *)(lVar4 + lVar5 * 0xc);
    *(float *)(lVar4 + 4 + lVar5 * 0xc) = fVar1 * fVar3 + *(float *)(lVar4 + 4 + lVar5 * 0xc);
    *(float *)(lVar4 + 8 + lVar5 * 0xc) = fVar2 * fVar3 + *(float *)(lVar4 + 8 + lVar5 * 0xc);
  }
  return;
}



// FUNCTION 14094ac90 Alloc body=177 status=ok
// SIG undefined Alloc(void)

longlong ImmediatePhysics::FLinearBlockAllocator::Alloc(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = *param_1;
    if (0x10000 - *(int *)(lVar2 + 0x10010) < param_2) {
      lVar2 = *(longlong *)(lVar2 + 0x10000);
      if (lVar2 == 0) {
        lVar2 = FMemory::Malloc(0x10018,0x10);
        *(undefined8 *)(lVar2 + 0x10008) = 0;
        *(undefined8 *)(lVar2 + 0x10000) = 0;
        *(undefined4 *)(lVar2 + 0x10010) = 0;
        *(longlong *)(lVar2 + 0x10008) = *param_1;
        *(longlong *)(*param_1 + 0x10000) = lVar2;
        *param_1 = lVar2;
      }
      else {
        *param_1 = lVar2;
      }
    }
    uVar1 = *(uint *)(lVar2 + 0x10010);
    *(uint *)(lVar2 + 0x10010) = param_2 + 0xf + uVar1 & 0xfffffff0;
    return (ulonglong)uVar1 + *param_1;
  }
  return 0;
}



// FUNCTION 14094ad50 BatchConstraints body=1534 status=ok
// SIG undefined BatchConstraints(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ImmediatePhysics::FSimulation::BatchConstraints(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  void *_Src;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  uint *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  undefined8 local_218 [60];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  iVar3 = *(int *)(param_1 + 0x160);
  lVar30 = (longlong)iVar3;
  plVar1 = (longlong *)(param_1 + 0x118);
  iVar17 = *(int *)(param_1 + 0x140);
  iVar9 = *(int *)(param_1 + 0x120);
  iVar21 = iVar17 + iVar3;
  if (iVar9 < iVar21) {
    *(int *)(param_1 + 0x120) = iVar21;
    if (*(int *)(param_1 + 0x124) < iVar21) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar9);
    }
  }
  else if ((iVar21 < iVar9) && (iVar21 != iVar9)) {
    *(int *)(param_1 + 0x120) = iVar21;
    TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  plVar2 = (longlong *)(param_1 + 0x128);
  iVar9 = *(int *)(param_1 + 0x130);
  if (iVar9 < iVar21) {
    *(int *)(param_1 + 0x130) = iVar21;
    if (*(int *)(param_1 + 0x134) < iVar21) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar9);
    }
  }
  else if ((iVar21 < iVar9) && (iVar21 != iVar9)) {
    *(int *)(param_1 + 0x130) = iVar21;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar2);
  }
  uVar27 = 0;
  if (*(char *)(param_1 + 0x148) != '\0') {
    *(undefined4 *)(param_1 + 0x154) = 0;
    if (iVar17 < 1) {
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    else {
      _Src = (void *)FLinearBlockAllocator::Alloc(param_1 + 0x40,iVar17 * 0x30);
      uVar25 = uVar27;
      uVar28 = uVar27;
      if ((longlong)iVar17 < 1) {
        iVar9 = *(int *)(param_1 + 0x154);
      }
      else {
        do {
          plVar18 = (longlong *)((ulonglong)*(uint *)(param_1 + 0x154) * 0x30 + (longlong)_Src);
          uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar28) + 0x38);
          lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8 + uVar28);
          if (lVar22 == 0) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = *(uint *)(lVar22 + 0x38);
          }
          if (((uVar10 < *(uint *)(param_1 + 0x16c)) || (*(uint *)(param_1 + 0x168) <= uVar10)) &&
             ((uVar14 < *(uint *)(param_1 + 0x16c) || (*(uint *)(param_1 + 0x168) <= uVar14)))) {
            *plVar18 = (ulonglong)uVar10 * 0x20 + *(longlong *)(param_1 + 0x110);
            uVar11 = uVar27;
            if (uVar14 != 0xffffffff) {
              uVar11 = (ulonglong)uVar14 * 0x20 + *(longlong *)(param_1 + 0x110);
            }
            plVar18[1] = uVar11;
            *(uint *)((longlong)plVar18 + 0x14) = uVar10 & 0xffff;
            *(uint *)(plVar18 + 3) = uVar14 & 0xffff;
            *(undefined4 *)(plVar18 + 2) = 0xffffffff;
            plVar18[5] = 0;
            plVar18[4] = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar25 * 8);
            *(undefined2 *)((longlong)plVar18 + 0x1e) = 1;
            *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
          }
          iVar9 = *(int *)(param_1 + 0x154);
          uVar25 = uVar25 + 1;
          uVar28 = uVar28 + 0x10;
        } while ((longlong)uVar25 < (longlong)iVar17);
      }
      if (DAT_146863b50 == '\0') {
        *(int *)(param_1 + 0x150) = iVar9;
        iVar17 = *(int *)(param_1 + 0x120);
        iVar9 = iVar9 + iVar17;
        *(int *)(param_1 + 0x120) = iVar9;
        if (*(int *)(param_1 + 0x124) < iVar9) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow((undefined8 *)(param_1 + 0x118),iVar17);
        }
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)*plVar1,_Src,(ulonglong)*(uint *)(param_1 + 0x150) * 0x30);
        uVar10 = 0;
        uVar25 = uVar27;
        if (*(int *)(param_1 + 0x154) != 0) {
          do {
            lVar22 = *plVar2;
            iVar17 = (int)uVar25;
            *(int *)(lVar22 + (longlong)iVar17 * 8) = iVar17;
            uVar25 = (ulonglong)(iVar17 + 1U);
            *(undefined2 *)(lVar22 + 4 + (longlong)iVar17 * 8) = 1;
            uVar10 = *(uint *)(param_1 + 0x154);
          } while (iVar17 + 1U < uVar10);
        }
      }
      else {
        local_230 = *(undefined8 *)(param_1 + 0x118);
        local_238 = *plVar2;
        uVar8 = PxBatchConstraints(_Src,iVar9,*(undefined8 *)(param_1 + 0x110),
                                   *(undefined4 *)(param_1 + 0x28));
        *(undefined4 *)(param_1 + 0x150) = uVar8;
        uVar10 = *(uint *)(param_1 + 0x154);
      }
      uVar25 = uVar27;
      if (uVar10 != 0) {
        do {
          iVar9 = (int)uVar25;
          lVar29 = (longlong)iVar9;
          iVar17 = *(int *)(*(longlong *)(*plVar1 + 0x20 + lVar29 * 0x30) + 8);
          lVar22 = (longlong)iVar17;
          if (iVar17 != iVar9) {
            puVar12 = (undefined8 *)(lVar22 * 0x1e0 + *(longlong *)(param_1 + 0x138));
            puVar19 = (undefined8 *)(lVar29 * 0x1e0 + *(longlong *)(param_1 + 0x138));
            if (puVar19 != puVar12) {
              lVar26 = 3;
              puVar13 = local_218;
              puVar16 = puVar19;
              do {
                puVar23 = puVar16;
                puVar15 = puVar13;
                uVar4 = puVar23[1];
                uVar5 = puVar23[2];
                uVar6 = puVar23[3];
                *puVar15 = *puVar23;
                puVar15[1] = uVar4;
                uVar4 = puVar23[4];
                uVar7 = puVar23[5];
                puVar15[2] = uVar5;
                puVar15[3] = uVar6;
                uVar5 = puVar23[6];
                uVar6 = puVar23[7];
                puVar15[4] = uVar4;
                puVar15[5] = uVar7;
                uVar4 = puVar23[8];
                uVar7 = puVar23[9];
                puVar15[6] = uVar5;
                puVar15[7] = uVar6;
                uVar5 = puVar23[10];
                uVar6 = puVar23[0xb];
                puVar15[8] = uVar4;
                puVar15[9] = uVar7;
                uVar4 = puVar23[0xc];
                uVar7 = puVar23[0xd];
                puVar15[10] = uVar5;
                puVar15[0xb] = uVar6;
                uVar5 = puVar23[0xe];
                uVar6 = puVar23[0xf];
                puVar15[0xc] = uVar4;
                puVar15[0xd] = uVar7;
                puVar15[0xe] = uVar5;
                puVar15[0xf] = uVar6;
                lVar26 = lVar26 + -1;
                puVar13 = puVar15 + 0x10;
                puVar16 = puVar23 + 0x10;
              } while (lVar26 != 0);
              uVar4 = puVar23[0x11];
              uVar5 = puVar23[0x12];
              uVar6 = puVar23[0x13];
              puVar15[0x10] = puVar23[0x10];
              puVar15[0x11] = uVar4;
              uVar4 = puVar23[0x14];
              uVar7 = puVar23[0x15];
              puVar15[0x12] = uVar5;
              puVar15[0x13] = uVar6;
              uVar5 = puVar23[0x16];
              uVar6 = puVar23[0x17];
              puVar15[0x14] = uVar4;
              puVar15[0x15] = uVar7;
              uVar4 = puVar23[0x18];
              uVar7 = puVar23[0x19];
              puVar15[0x16] = uVar5;
              puVar15[0x17] = uVar6;
              uVar5 = puVar23[0x1a];
              uVar6 = puVar23[0x1b];
              lVar26 = 3;
              puVar15[0x18] = uVar4;
              puVar15[0x19] = uVar7;
              puVar15[0x1a] = uVar5;
              puVar15[0x1b] = uVar6;
              puVar13 = puVar12;
              do {
                puVar15 = puVar19;
                puVar16 = puVar13;
                uVar4 = puVar16[1];
                *puVar15 = *puVar16;
                puVar15[1] = uVar4;
                uVar4 = puVar16[3];
                puVar15[2] = puVar16[2];
                puVar15[3] = uVar4;
                uVar4 = puVar16[5];
                puVar15[4] = puVar16[4];
                puVar15[5] = uVar4;
                uVar4 = puVar16[7];
                puVar15[6] = puVar16[6];
                puVar15[7] = uVar4;
                uVar4 = puVar16[9];
                puVar15[8] = puVar16[8];
                puVar15[9] = uVar4;
                uVar4 = puVar16[0xb];
                puVar15[10] = puVar16[10];
                puVar15[0xb] = uVar4;
                uVar4 = puVar16[0xd];
                puVar15[0xc] = puVar16[0xc];
                puVar15[0xd] = uVar4;
                uVar4 = puVar16[0xf];
                puVar15[0xe] = puVar16[0xe];
                puVar15[0xf] = uVar4;
                lVar26 = lVar26 + -1;
                puVar13 = puVar16 + 0x10;
                puVar19 = puVar15 + 0x10;
              } while (lVar26 != 0);
              uVar4 = puVar16[0x11];
              puVar15[0x10] = puVar16[0x10];
              puVar15[0x11] = uVar4;
              uVar4 = puVar16[0x13];
              puVar15[0x12] = puVar16[0x12];
              puVar15[0x13] = uVar4;
              uVar4 = puVar16[0x15];
              puVar15[0x14] = puVar16[0x14];
              puVar15[0x15] = uVar4;
              uVar4 = puVar16[0x17];
              puVar15[0x16] = puVar16[0x16];
              puVar15[0x17] = uVar4;
              uVar4 = puVar16[0x19];
              puVar15[0x18] = puVar16[0x18];
              puVar15[0x19] = uVar4;
              uVar4 = puVar16[0x1b];
              puVar15[0x1a] = puVar16[0x1a];
              puVar15[0x1b] = uVar4;
              lVar26 = 3;
              puVar19 = local_218;
              do {
                puVar16 = puVar19;
                puVar13 = puVar12;
                uVar4 = puVar16[1];
                uVar5 = puVar16[2];
                uVar6 = puVar16[3];
                *puVar13 = *puVar16;
                puVar13[1] = uVar4;
                uVar4 = puVar16[4];
                uVar7 = puVar16[5];
                puVar13[2] = uVar5;
                puVar13[3] = uVar6;
                uVar5 = puVar16[6];
                uVar6 = puVar16[7];
                puVar13[4] = uVar4;
                puVar13[5] = uVar7;
                uVar4 = puVar16[8];
                uVar7 = puVar16[9];
                puVar13[6] = uVar5;
                puVar13[7] = uVar6;
                uVar5 = puVar16[10];
                uVar6 = puVar16[0xb];
                puVar13[8] = uVar4;
                puVar13[9] = uVar7;
                uVar4 = puVar16[0xc];
                uVar7 = puVar16[0xd];
                puVar13[10] = uVar5;
                puVar13[0xb] = uVar6;
                uVar5 = puVar16[0xe];
                uVar6 = puVar16[0xf];
                puVar13[0xc] = uVar4;
                puVar13[0xd] = uVar7;
                puVar13[0xe] = uVar5;
                puVar13[0xf] = uVar6;
                lVar26 = lVar26 + -1;
                puVar12 = puVar13 + 0x10;
                puVar19 = puVar16 + 0x10;
              } while (lVar26 != 0);
              uVar4 = puVar16[0x11];
              uVar5 = puVar16[0x12];
              uVar6 = puVar16[0x13];
              puVar13[0x10] = puVar16[0x10];
              puVar13[0x11] = uVar4;
              uVar4 = puVar16[0x14];
              uVar7 = puVar16[0x15];
              puVar13[0x12] = uVar5;
              puVar13[0x13] = uVar6;
              uVar5 = puVar16[0x16];
              uVar6 = puVar16[0x17];
              puVar13[0x14] = uVar4;
              puVar13[0x15] = uVar7;
              uVar4 = puVar16[0x18];
              uVar7 = puVar16[0x19];
              puVar13[0x16] = uVar5;
              puVar13[0x17] = uVar6;
              uVar5 = puVar16[0x1a];
              uVar6 = puVar16[0x1b];
              puVar13[0x18] = uVar4;
              puVar13[0x19] = uVar7;
              puVar13[0x1a] = uVar5;
              puVar13[0x1b] = uVar6;
            }
            puVar12 = (undefined8 *)(lVar22 * 0x10 + *(longlong *)(param_1 + 0x30));
            puVar19 = (undefined8 *)(lVar29 * 0x10 + *(longlong *)(param_1 + 0x30));
            if (puVar19 != puVar12) {
              uVar4 = puVar12[1];
              uVar5 = *puVar19;
              uVar6 = puVar19[1];
              *puVar19 = *puVar12;
              puVar19[1] = uVar4;
              *puVar12 = uVar5;
              puVar12[1] = uVar6;
            }
            lVar26 = *(longlong *)(param_1 + 0x10);
            uVar4 = *(undefined8 *)(lVar26 + lVar29 * 8);
            *(undefined8 *)(lVar26 + lVar29 * 8) = *(undefined8 *)(lVar26 + lVar22 * 8);
            *(undefined8 *)(lVar26 + lVar22 * 8) = uVar4;
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar29 * 8) + 8) = iVar9;
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar22 * 8) + 8) = iVar17;
            *(undefined1 *)(param_1 + 0x148) = 1;
          }
          uVar25 = (ulonglong)(iVar9 + 1U);
        } while (iVar9 + 1U < *(uint *)(param_1 + 0x154));
      }
    }
  }
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  else {
    lVar22 = FLinearBlockAllocator::Alloc(param_1 + 0x40,iVar3 * 0x30);
    if (0 < iVar3) {
      puVar24 = (uint *)(lVar22 + 0x14);
      do {
        puVar20 = (ushort *)(*(longlong *)(param_1 + 0x158) + uVar27);
        uVar27 = uVar27 + 0x14;
        *(longlong *)(puVar24 + -5) =
             (longlong)*(int *)puVar20 * 0x20 + *(longlong *)(param_1 + 0x110);
        *(ulonglong *)(puVar24 + -3) =
             (ulonglong)*(uint *)(puVar20 + 2) * 0x20 + *(longlong *)(param_1 + 0x110);
        *puVar24 = (uint)*puVar20;
        puVar24[1] = (uint)puVar20[2];
        puVar24[-1] = 0xffffffff;
        puVar24[5] = 0;
        puVar24[6] = 0;
        *(ushort **)(puVar24 + 3) = puVar20;
        *(undefined2 *)((longlong)puVar24 + 10) = 0;
        lVar30 = lVar30 + -1;
        puVar24 = puVar24 + 0xc;
      } while (lVar30 != 0);
    }
    local_230 = (ulonglong)*(uint *)(param_1 + 0x154) * 0x30 + *plVar1;
    local_238 = *plVar2 + (ulonglong)*(uint *)(param_1 + 0x150) * 8;
    uVar8 = PxBatchConstraints(lVar22,iVar3,*(undefined8 *)(param_1 + 0x110),
                               *(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x14c) = uVar8;
  }
  return;
}



// FUNCTION 14094b350 FUN_14094b350 body=4075 status=ok
// SIG undefined FUN_14094b350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14094b350(longlong *param_1,int param_2)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  float *pfVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  float *pfVar21;
  int iVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
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
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  int local_res10 [2];
  undefined1 auStack_248 [32];
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  int local_210;
  int local_208 [4];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float *local_1e8;
  float *pfStack_1e0;
  float *local_1d8;
  float *pfStack_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0 [16];
  longlong local_1b0;
  undefined1 local_1a0 [8];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [32];
  undefined1 local_138 [16];
  longlong local_128 [2];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_res10[0] = param_2;
  FBoneContainer::GetParentBoneIndex(param_1[2],local_208,local_res10);
  if (*(char *)((longlong)local_208[0] + param_1[3]) == '\0') {
    FUN_14094b350(param_1,local_208[0]);
  }
  fVar43 = fRam0000000146863be8;
  fVar42 = fRam0000000146863be4;
  fVar36 = _DAT_146863be0;
  fVar65 = fRam0000000146863b68;
  fVar64 = fRam0000000146863b64;
  fVar63 = _DAT_146863b60;
  pfVar21 = (float *)((longlong)local_208[0] * 0x30 + *param_1);
  pfVar15 = (float *)((longlong)local_res10[0] * 0x30 + *param_1);
  auVar26 = *(undefined1 (*) [16])(pfVar21 + 8);
  fVar4 = auVar26._0_4_;
  fVar55 = auVar26._4_4_;
  fVar5 = auVar26._8_4_;
  fVar7 = auVar26._12_4_;
  auVar2 = *(undefined1 (*) [16])(pfVar15 + 8);
  fVar52 = auVar2._0_4_;
  fVar56 = auVar2._4_4_;
  fVar6 = auVar2._8_4_;
  auVar26 = minps(auVar2,auVar26);
  auVar27._4_4_ = -(uint)(auVar26._4_4_ < fRam0000000146863be4);
  auVar27._0_4_ = -(uint)(auVar26._0_4_ < _DAT_146863be0);
  auVar27._8_4_ = -(uint)(auVar26._8_4_ < fRam0000000146863be8);
  auVar27._12_4_ = -(uint)(auVar26._12_4_ < fRam0000000146863bec);
  iVar10 = movmskps(local_res10[0],auVar27);
  if (iVar10 == 0) {
    fVar63 = *pfVar21;
    fVar64 = pfVar21[1];
    fVar65 = pfVar21[2];
    fVar36 = pfVar21[3];
    fVar42 = *pfVar15;
    fVar43 = pfVar15[1];
    fVar45 = pfVar15[2];
    fVar46 = pfVar15[3];
    fVar47 = fVar4 * pfVar15[4];
    fVar44 = fVar55 * pfVar15[5];
    fVar37 = fVar5 * pfVar15[6];
    fVar31 = fVar7 * pfVar15[7];
    local_118 = fVar46 * fVar63 * _DAT_146863ba0 + fVar36 * fVar42 +
                fVar64 * fVar45 * _DAT_146863b90 + fVar65 * fVar43 * _DAT_146863b80;
    fStack_114 = fVar45 * fVar63 * fRam0000000146863ba4 + fVar36 * fVar43 +
                 fVar64 * fVar46 * fRam0000000146863b94 + fVar65 * fVar42 * fRam0000000146863b84;
    fStack_110 = fVar43 * fVar63 * fRam0000000146863ba8 + fVar36 * fVar45 +
                 fVar64 * fVar42 * fRam0000000146863b98 + fVar65 * fVar46 * fRam0000000146863b88;
    fStack_10c = fVar42 * fVar63 * fRam0000000146863bac + fVar36 * fVar46 +
                 fVar64 * fVar43 * fRam0000000146863b9c + fVar65 * fVar45 * fRam0000000146863b8c;
    fVar42 = fVar37 * fVar64 - fVar44 * fVar65;
    fVar43 = fVar47 * fVar65 - fVar37 * fVar63;
    fVar45 = fVar44 * fVar63 - fVar47 * fVar64;
    fVar46 = fVar31 * fVar36 - fVar31 * fVar36;
    fVar42 = fVar42 + fVar42;
    fVar43 = fVar43 + fVar43;
    fVar45 = fVar45 + fVar45;
    fVar46 = fVar46 + fVar46;
    local_108._4_4_ = (fVar42 * fVar65 - fVar45 * fVar63) + fVar43 * fVar36 + fVar44 + pfVar21[5];
    local_108._0_4_ = (fVar45 * fVar64 - fVar43 * fVar65) + fVar42 * fVar36 + fVar47 + pfVar21[4];
    uStack_100._0_4_ = (fVar43 * fVar63 - fVar42 * fVar64) + fVar45 * fVar36 + fVar37 + pfVar21[6];
    uStack_100._4_4_ = (fVar46 * fVar36 - fVar46 * fVar36) + fVar46 * fVar36 + fVar31 + pfVar21[7];
  }
  else {
    fVar45 = *pfVar21;
    fVar46 = pfVar21[1];
    fVar47 = pfVar21[2];
    fVar44 = pfVar21[3];
    fVar31 = fVar46 + fVar46;
    fVar33 = fVar47 + fVar47;
    fVar40 = fVar45 * (fVar45 + fVar45);
    fVar37 = fVar44 * (fVar45 + fVar45);
    fVar60 = (fVar44 * fVar33 + fVar45 * fVar31) * fVar4;
    fVar61 = (fVar37 + fVar46 * fVar33) * fVar55;
    fVar62 = (fVar44 * fVar31 + fVar45 * fVar33) * fVar5;
    fVar48 = fVar55 * (fVar45 * fVar31 - fVar44 * fVar33);
    fVar50 = fVar5 * (fVar46 * fVar33 - fVar37);
    fVar53 = fVar4 * (fVar45 * fVar33 - fVar44 * fVar31);
    fVar45 = pfVar21[4];
    fVar44 = pfVar21[5];
    fVar37 = pfVar21[6];
    fVar28 = (float)((uint)((_DAT_146863b60 - (fVar47 * fVar33 + fVar46 * fVar31)) * fVar4) &
                    _DAT_146863b70);
    fVar32 = (float)((uint)((fRam0000000146863b64 - (fVar47 * fVar33 + fVar40)) * fVar55) &
                    uRam0000000146863b74);
    fVar34 = (float)((uint)((fRam0000000146863b68 - (fVar46 * fVar31 + fVar40)) * fVar5) &
                    uRam0000000146863b78);
    fVar35 = (float)((uint)((fRam0000000146863b6c - (fVar40 + fVar40)) * fVar7) &
                    uRam0000000146863b7c);
    fVar46 = *pfVar15;
    fVar47 = pfVar15[1];
    fVar31 = pfVar15[2];
    fVar33 = pfVar15[3];
    fVar38 = fVar47 + fVar47;
    fVar39 = fVar31 + fVar31;
    fVar41 = fVar46 * (fVar46 + fVar46);
    fVar40 = (fVar46 + fVar46) * fVar33;
    fVar57 = (fVar39 * fVar33 + fVar46 * fVar38) * fVar52;
    fVar58 = (fVar40 + fVar47 * fVar39) * fVar56;
    fVar59 = (fVar38 * fVar33 + fVar46 * fVar39) * fVar6;
    fVar49 = fVar56 * (fVar46 * fVar38 - fVar39 * fVar33);
    fVar51 = fVar6 * (fVar47 * fVar39 - fVar40);
    fVar54 = fVar52 * (fVar46 * fVar39 - fVar38 * fVar33);
    fVar33 = (float)((uint)((_DAT_146863b60 - (fVar31 * fVar39 + fVar47 * fVar38)) * fVar52) &
                    _DAT_146863b70);
    fVar40 = (float)((uint)((fRam0000000146863b64 - (fVar31 * fVar39 + fVar41)) * fVar56) &
                    uRam0000000146863b74);
    fVar38 = (float)((uint)((fRam0000000146863b68 - (fVar47 * fVar38 + fVar41)) * fVar6) &
                    uRam0000000146863b78);
    fVar39 = (float)((uint)((fRam0000000146863b6c - (fVar41 + fVar41)) * auVar2._12_4_) &
                    uRam0000000146863b7c);
    fVar46 = pfVar15[4];
    fVar47 = pfVar15[5];
    fVar31 = pfVar15[6];
    local_198 = fVar57 * fVar48 + fVar33 * fVar28 + fVar54 * fVar62 + fVar39 * fVar45;
    fStack_194 = fVar57 * fVar32 + fVar33 * fVar60 + fVar54 * fVar50 + fVar39 * fVar44;
    fStack_190 = fVar57 * fVar61 + fVar33 * fVar53 + fVar54 * fVar34 + fVar39 * fVar37;
    fStack_18c = fVar57 * fVar35 + fVar33 * fVar35 + fVar54 * fVar35 + fVar39 * fRam0000000146863b6c
    ;
    local_188 = fVar40 * fVar48 + fVar49 * fVar28 + fVar58 * fVar62 + fVar39 * fVar45;
    fStack_184 = fVar40 * fVar32 + fVar49 * fVar60 + fVar58 * fVar50 + fVar39 * fVar44;
    fStack_180 = fVar40 * fVar61 + fVar49 * fVar53 + fVar58 * fVar34 + fVar39 * fVar37;
    fStack_17c = fVar40 * fVar35 + fVar49 * fVar35 + fVar58 * fVar35 + fVar39 * fRam0000000146863b6c
    ;
    local_178 = fVar51 * fVar48 + fVar59 * fVar28 + fVar38 * fVar62 + fVar39 * fVar45;
    fStack_174 = fVar51 * fVar32 + fVar59 * fVar60 + fVar38 * fVar50 + fVar39 * fVar44;
    fStack_170 = fVar51 * fVar61 + fVar59 * fVar53 + fVar38 * fVar34 + fVar39 * fVar37;
    fStack_16c = fVar51 * fVar35 + fVar59 * fVar35 + fVar38 * fVar35 + fVar39 * fRam0000000146863b6c
    ;
    local_168 = fVar47 * fVar48 + fVar46 * fVar28 + fVar31 * fVar62 + fRam0000000146863b6c * fVar45;
    fStack_164 = fVar47 * fVar32 + fVar46 * fVar60 + fVar31 * fVar50 + fRam0000000146863b6c * fVar44
    ;
    fStack_160 = fVar47 * fVar61 + fVar46 * fVar53 + fVar31 * fVar34 + fRam0000000146863b6c * fVar37
    ;
    fStack_15c = fVar47 * fVar35 + fVar46 * fVar35 + fVar31 * fVar35 +
                 fRam0000000146863b6c * fRam0000000146863b6c;
    FMatrix::RemoveScaling(&local_198);
    fVar63 = (float)(-(uint)(fVar36 <= fVar52 * fVar4) & (_DAT_146863bd0 ^ (uint)fVar63) ^
                    _DAT_146863bd0);
    fVar64 = (float)(-(uint)(fVar42 <= fVar56 * fVar55) & (uRam0000000146863bd4 ^ (uint)fVar64) ^
                    uRam0000000146863bd4);
    fVar65 = (float)(-(uint)(fVar43 <= fVar6 * fVar5) & (uRam0000000146863bd8 ^ (uint)fVar65) ^
                    uRam0000000146863bd8);
    local_198 = local_198 * fVar63;
    fStack_194 = fStack_194 * fVar63;
    fStack_190 = fStack_190 * fVar63;
    fStack_184 = fStack_184 * fVar64;
    fStack_180 = fStack_180 * fVar64;
    local_188 = local_188 * fVar64;
    fStack_174 = fStack_174 * fVar65;
    fStack_170 = fStack_170 * fVar65;
    local_178 = local_178 * fVar65;
    FQuat::FQuat(&local_1f8,&local_198);
    local_1c8 = 0x322bcc77;
    auVar29._0_4_ = (float)local_1f8 * (float)local_1f8 + (float)uStack_1f0 * (float)uStack_1f0;
    auVar29._4_4_ = local_1f8._4_4_ * local_1f8._4_4_ + uStack_1f0._4_4_ * uStack_1f0._4_4_;
    auVar29._8_4_ = (float)uStack_1f0 * (float)uStack_1f0 + (float)local_1f8 * (float)local_1f8;
    auVar29._12_4_ = uStack_1f0._4_4_ * uStack_1f0._4_4_ + local_1f8._4_4_ * local_1f8._4_4_;
    fVar42 = auVar29._4_4_ + auVar29._0_4_;
    fVar43 = auVar29._8_4_ + auVar29._4_4_;
    fVar45 = auVar29._12_4_ + auVar29._8_4_;
    fVar46 = auVar29._0_4_ + auVar29._12_4_;
    auVar26._4_4_ = fVar43;
    auVar26._0_4_ = fVar42;
    auVar26._8_4_ = fVar45;
    auVar26._12_4_ = fVar46;
    auVar26 = rsqrtps(auVar29,auVar26);
    fVar63 = auVar26._0_4_;
    fVar64 = auVar26._4_4_;
    fVar65 = auVar26._8_4_;
    fVar36 = auVar26._12_4_;
    fVar63 = (_DAT_146863bc0 - fVar63 * fVar63 * fVar42 * _DAT_146863bc0) * fVar63 + fVar63;
    fVar64 = (fRam0000000146863bc4 - fVar64 * fVar64 * fVar43 * fRam0000000146863bc4) * fVar64 +
             fVar64;
    fVar65 = (fRam0000000146863bc8 - fVar65 * fVar65 * fVar45 * fRam0000000146863bc8) * fVar65 +
             fVar65;
    fVar36 = (fRam0000000146863bcc - fVar36 * fVar36 * fVar46 * fRam0000000146863bcc) * fVar36 +
             fVar36;
    local_108._4_4_ = fStack_164;
    local_108._0_4_ = local_168;
    uStack_100._0_4_ = fStack_160;
    local_118 = (float)(((uint)(((_DAT_146863bc0 - fVar63 * fVar63 * fVar42 * _DAT_146863bc0) *
                                 fVar63 + fVar63) * (float)local_1f8) ^ _DAT_146863bb0) &
                        -(uint)(1e-08 <= fVar42) ^ _DAT_146863bb0);
    fStack_114 = (float)(((uint)(((fRam0000000146863bc4 -
                                  fVar64 * fVar64 * fVar43 * fRam0000000146863bc4) * fVar64 + fVar64
                                 ) * local_1f8._4_4_) ^ uRam0000000146863bb4) &
                         -(uint)(1e-08 <= fVar43) ^ uRam0000000146863bb4);
    fStack_110 = (float)(((uint)(((fRam0000000146863bc8 -
                                  fVar65 * fVar65 * fVar45 * fRam0000000146863bc8) * fVar65 + fVar65
                                 ) * (float)uStack_1f0) ^ uRam0000000146863bb8) &
                         -(uint)(1e-08 <= fVar45) ^ uRam0000000146863bb8);
    fStack_10c = (float)(((uint)(((fRam0000000146863bcc -
                                  fVar36 * fVar36 * fVar46 * fRam0000000146863bcc) * fVar36 + fVar36
                                 ) * uStack_1f0._4_4_) ^ uRam0000000146863bbc) &
                         -(uint)(1e-08 <= fVar46) ^ uRam0000000146863bbc);
    uStack_100._4_4_ = 0;
  }
  fStack_ec = auVar2._12_4_ * fVar7;
  fStack_f0 = fVar6 * fVar5;
  fStack_f4 = fVar56 * fVar55;
  local_f8 = fVar52 * fVar4;
  cVar9 = FUN_140618120(&local_118);
  if (((cVar9 != '\0') || (cVar9 = FUN_140618120(local_108), cVar9 != '\0')) ||
     (cVar9 = FUN_140618120(&local_f8), cVar9 != '\0')) {
    lVar16 = (longlong)local_res10[0] * 0x30 + *param_1;
    cVar9 = FUN_140618120(lVar16);
    if (cVar9 == '\0') {
      cVar9 = FUN_140618120(lVar16 + 0x10);
      if (cVar9 == '\0') {
        cVar9 = FUN_140618120(lVar16 + 0x20);
        bVar25 = cVar9 != '\0';
      }
      else {
        bVar25 = true;
      }
    }
    else {
      bVar25 = true;
    }
    pwVar19 = L"false";
    pwVar23 = L"false";
    if (bVar25) {
      pwVar23 = L"true";
    }
    lVar16 = (longlong)local_208[0] * 0x30 + *param_1;
    cVar9 = FUN_140618120(lVar16);
    if (cVar9 == '\0') {
      cVar9 = FUN_140618120(lVar16 + 0x10);
      if (cVar9 == '\0') {
        cVar9 = FUN_140618120(lVar16 + 0x20);
        bVar25 = cVar9 != '\0';
      }
      else {
        bVar25 = true;
      }
    }
    else {
      bVar25 = true;
    }
    local_220 = 0x31;
    if (bVar25) {
      pwVar19 = L"true";
    }
    local_228 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    lVar16 = local_228;
    FGenericPlatformString::Memcpy
              (local_228,L"NaN created in during FTransform Multiplication\n",0x62);
    FStringFormatArg::FStringFormatArg(&local_198,local_res10[0]);
    FStringFormatArg::FStringFormatArg(&local_178,local_208[0]);
    FStringFormatArg::FStringFormatArg(local_158,pwVar23);
    FStringFormatArg::FStringFormatArg(local_138,pwVar19);
    lVar24 = 4;
    local_218 = 0;
    local_210 = 4;
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_218,4,0);
    pfVar15 = &local_198;
    iVar10 = 4;
    lVar20 = local_218;
    do {
      FStringFormatArg::FStringFormatArg(lVar20,pfVar15);
      lVar20 = lVar20 + 0x20;
      pfVar15 = pfVar15 + 8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    puVar13 = (undefined8 *)
              FString::Format(&local_1f8,
                              L"\tBoneIndex {0} : ParentBoneIndex {1} BoneTransformNaN={2} : ParentTransformNaN={3}\n"
                              ,&local_218);
    uVar8 = local_220;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = 0;
    }
    pvVar3 = (void *)*puVar13;
    if (iVar10 != 0) {
      iVar22 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar11 = (uint)((int)local_220 == 0) + iVar10 + (int)local_220;
      local_220 = CONCAT44(local_220._4_4_,iVar11);
      if (local_220._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar22 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_1f8 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      plVar17 = (longlong *)(local_218 + 0x10);
      iVar10 = local_210;
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
    puVar18 = local_108;
    do {
      plVar17 = (longlong *)(puVar18 + -0x20);
      puVar18 = puVar18 + -0x20;
      lVar24 = lVar24 + -1;
      if (*plVar17 != 0) {
        FMemory::Free();
      }
    } while (lVar24 != 0);
    uVar14 = FTransform::ToString((longlong)local_res10[0] * 0x30 + *param_1,&local_1d8);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_218 = 0;
    local_210 = 1;
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_218,1,0);
    FStringFormatArg::FStringFormatArg(local_218,&local_198);
    puVar13 = (undefined8 *)FString::Format(&local_1f8,L"\tBone {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = 0;
    }
    if (iVar10 != 0) {
      iVar22 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar11 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar11);
      if (local_220._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar22 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_1f8 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      plVar17 = (longlong *)(local_218 + 0x10);
      iVar10 = local_210;
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    uVar14 = FTransform::ToString((longlong)local_208[0] * 0x30 + *param_1,&local_1d8);
    FStringFormatArg::FStringFormatArg(local_1c0,uVar14);
    local_1f8 = (float *)local_1c0;
    uStack_1f0 = (float *)local_1a0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1f8);
    puVar13 = (undefined8 *)FString::Format(&local_1e8,L"\tParent {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = 0;
    }
    if (iVar10 != 0) {
      iVar22 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar11 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar11);
      if (local_220._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar22 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_1e8 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      plVar17 = (longlong *)(local_218 + 0x10);
      iVar10 = local_210;
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
    if (local_1b0 != 0) {
      FMemory::Free();
    }
    uVar14 = FTransform::ToString(&local_118,local_1c0);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_1f8 = &local_198;
    uStack_1f0 = &local_178;
    local_1e8 = local_1f8;
    pfStack_1e0 = uStack_1f0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1e8);
    puVar13 = (undefined8 *)FString::Format(&local_1d8,L"\tResult {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar22 = 0;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = iVar22;
    }
    if (iVar10 != 0) {
      iVar11 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar12 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar12);
      if (local_220._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
    if (local_1d8 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      plVar17 = (longlong *)(local_218 + 0x10);
      iVar10 = local_210;
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    uVar14 = FBase64::Encode(local_1c0,(longlong)local_res10[0] * 0x30 + *param_1,0x30);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_1f8 = &local_198;
    uStack_1f0 = &local_178;
    local_1d8 = local_1f8;
    pfStack_1d0 = uStack_1f0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1d8);
    puVar13 = (undefined8 *)FString::Format(&local_1e8,L"\tBone B64 {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = iVar22;
    }
    if (iVar10 != 0) {
      iVar11 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar12 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar12);
      if (local_220._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
    if (local_1e8 != (float *)0x0) {
      FMemory::Free();
    }
    FUN_140590de0(&local_218);
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    uVar14 = FBase64::Encode(local_1c0,(longlong)local_208[0] * 0x30 + *param_1,0x30);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_1f8 = &local_198;
    uStack_1f0 = &local_178;
    local_1d8 = local_1f8;
    pfStack_1d0 = uStack_1f0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1d8);
    puVar13 = (undefined8 *)FString::Format(&local_1e8,L"\tParent B64 {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = iVar22;
    }
    if (iVar10 != 0) {
      iVar11 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar12 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar12);
      if (local_220._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
    if (local_1e8 != (float *)0x0) {
      FMemory::Free();
    }
    FUN_140590de0(&local_218);
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    uVar14 = FBase64::Encode(local_1c0,&local_118,0x30);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_1f8 = &local_198;
    uStack_1f0 = &local_178;
    local_1d8 = local_1f8;
    pfStack_1d0 = uStack_1f0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1d8);
    puVar13 = (undefined8 *)FString::Format(&local_1e8,L"\tResult B64 {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = iVar22;
    }
    if (iVar10 != 0) {
      iVar22 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar11 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar11);
      if (local_220._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar22 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
    if (local_1e8 != (float *)0x0) {
      FMemory::Free();
    }
    FUN_140590de0(&local_218);
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    if (lVar16 != 0) {
      FMemory::Free(lVar16);
    }
  }
  fVar63 = fRam0000000146863bcc;
  fVar7 = fRam0000000146863bc8;
  fVar6 = fRam0000000146863bc4;
  fVar5 = _DAT_146863bc0;
  puVar13 = (undefined8 *)((longlong)local_res10[0] * 0x30 + *param_1);
  *puVar13 = CONCAT44(fStack_114,local_118);
  puVar13[1] = CONCAT44(fStack_10c,fStack_110);
  puVar13[2] = local_108;
  puVar13[3] = uStack_100;
  puVar13[4] = CONCAT44(fStack_f4,local_f8);
  puVar13[5] = CONCAT44(fStack_ec,fStack_f0);
  pfVar15 = (float *)((longlong)local_res10[0] * 0x30 + *param_1);
  fVar4 = *pfVar15;
  fVar52 = pfVar15[1];
  fVar55 = pfVar15[2];
  fVar56 = pfVar15[3];
  auVar30._0_4_ = fVar4 * fVar4 + fVar55 * fVar55;
  auVar30._4_4_ = fVar52 * fVar52 + fVar56 * fVar56;
  auVar30._8_4_ = fVar55 * fVar55 + fVar4 * fVar4;
  auVar30._12_4_ = fVar56 * fVar56 + fVar52 * fVar52;
  fVar43 = auVar30._4_4_ + auVar30._0_4_;
  fVar45 = auVar30._8_4_ + auVar30._4_4_;
  fVar46 = auVar30._12_4_ + auVar30._8_4_;
  fVar47 = auVar30._0_4_ + auVar30._12_4_;
  auVar2._4_4_ = fVar45;
  auVar2._0_4_ = fVar43;
  auVar2._8_4_ = fVar46;
  auVar2._12_4_ = fVar47;
  auVar26 = rsqrtps(auVar30,auVar2);
  fVar64 = auVar26._0_4_;
  fVar65 = auVar26._4_4_;
  fVar36 = auVar26._8_4_;
  fVar42 = auVar26._12_4_;
  fVar64 = (fVar5 - fVar64 * fVar64 * fVar43 * fVar5) * fVar64 + fVar64;
  fVar65 = (fVar6 - fVar65 * fVar65 * fVar45 * fVar6) * fVar65 + fVar65;
  fVar36 = (fVar7 - fVar36 * fVar36 * fVar46 * fVar7) * fVar36 + fVar36;
  fVar42 = (fVar63 - fVar42 * fVar42 * fVar47 * fVar63) * fVar42 + fVar42;
  fVar52 = (float)(((uint)(((fVar6 - fVar65 * fVar65 * fVar45 * fVar6) * fVar65 + fVar65) * fVar52)
                   ^ uRam0000000146863bb4) & -(uint)(fRam0000000146863c54 <= fVar45) ^
                  uRam0000000146863bb4);
  fVar55 = (float)(((uint)(((fVar7 - fVar36 * fVar36 * fVar46 * fVar7) * fVar36 + fVar36) * fVar55)
                   ^ uRam0000000146863bb8) & -(uint)(fRam0000000146863c58 <= fVar46) ^
                  uRam0000000146863bb8);
  fVar56 = (float)(((uint)(((fVar63 - fVar42 * fVar42 * fVar47 * fVar63) * fVar42 + fVar42) * fVar56
                          ) ^ uRam0000000146863bbc) & -(uint)(fRam0000000146863c5c <= fVar47) ^
                  uRam0000000146863bbc);
  *pfVar15 = (float)(((uint)(((fVar5 - fVar64 * fVar64 * fVar43 * fVar5) * fVar64 + fVar64) * fVar4)
                     ^ _DAT_146863bb0) & -(uint)(_DAT_146863c50 <= fVar43) ^ _DAT_146863bb0);
  pfVar15[1] = fVar52;
  pfVar15[2] = fVar55;
  pfVar15[3] = fVar56;
  *(undefined1 *)((longlong)local_res10[0] + param_1[3]) = 1;
  return;
}



// FUNCTION 14094c340 ComputeBodyInsertionOrder body=636 status=ok
// SIG undefined ComputeBodyInsertionOrder(void)

void ComputeBodyInsertionOrder(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *_Dst;
  size_t _Size;
  ushort *puVar6;
  void *pvVar7;
  void *pvVar8;
  ushort *local_88;
  undefined8 local_80;
  ushort *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  pvVar7 = (void *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  iVar4 = FUN_1423af4f0(param_2);
  if (0 < iVar4) {
    local_68 = (void *)0x0;
    local_5c = 0;
    local_88 = (ushort *)0x0;
    local_80 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_1423a6f40(param_2,&local_88,&local_48,0,1);
    _Size = (size_t)(int)local_80;
    local_60 = (int)local_80;
    _Dst = pvVar7;
    if (0 < (int)local_80) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68);
      _Dst = local_68;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
    puVar6 = local_88;
    while (iVar4 = iVar4 + -1, local_88 = puVar6, 0 < iVar4) {
      local_78 = (ushort *)0x0;
      local_70 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_1423a6f40(param_2,&local_78,&local_58,iVar4,1);
      pvVar5 = (void *)((ulonglong)((longlong)(local_78 + (int)local_70) + (1 - (longlong)local_78))
                       >> 1);
      if (local_78 + (int)local_70 < local_78) {
        pvVar5 = pvVar7;
      }
      puVar6 = local_78;
      pvVar8 = pvVar7;
      if (pvVar5 != (void *)0x0) {
        do {
          uVar2 = *puVar6;
          puVar1 = (undefined1 *)((longlong)_Dst + (ulonglong)uVar2);
          if (*(char *)((longlong)_Dst + (ulonglong)uVar2) == '\0') {
            iVar3 = (int)param_1[1];
            *(int *)(param_1 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
            }
            *(ushort *)(*param_1 + (longlong)iVar3 * 2) = uVar2;
            _Dst = local_68;
          }
          *puVar1 = 1;
          pvVar8 = (void *)((longlong)pvVar8 + 1);
          puVar6 = puVar6 + 1;
        } while (pvVar8 != pvVar5);
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      puVar6 = local_88;
      if (local_78 != (ushort *)0x0) {
        FMemory::Free(local_78);
        puVar6 = local_88;
      }
    }
    pvVar5 = (void *)((ulonglong)((longlong)(puVar6 + (int)local_80) + (1 - (longlong)puVar6)) >> 1)
    ;
    if (puVar6 + (int)local_80 < puVar6) {
      pvVar5 = pvVar7;
    }
    if (pvVar5 != (void *)0x0) {
      do {
        uVar2 = *puVar6;
        puVar1 = (undefined1 *)((longlong)_Dst + (ulonglong)uVar2);
        if (*(char *)((longlong)_Dst + (ulonglong)uVar2) == '\0') {
          iVar4 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
          }
          *(ushort *)(*param_1 + (longlong)iVar4 * 2) = uVar2;
          _Dst = local_68;
        }
        puVar6 = puVar6 + 1;
        *puVar1 = 1;
        pvVar7 = (void *)((longlong)pvVar7 + 1);
      } while (pvVar7 != pvVar5);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_88 != (ushort *)0x0) {
      FMemory::Free(local_88);
    }
    if (_Dst != (void *)0x0) {
      FMemory::Free(_Dst);
    }
  }
  return;
}



// FUNCTION 14094c5c0 ConstructSolverBodies body=1181 status=ok
// SIG undefined ConstructSolverBodies(void)

void ImmediatePhysics::FSimulation::ConstructSolverBodies
               (longlong param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
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
  undefined8 local_c8;
  undefined4 local_c0;
  
  iVar9 = *(int *)(param_1 + 0x28);
  uVar11 = FLinearBlockAllocator::Alloc(param_1 + 0x40);
  uVar16 = 0;
  *(undefined8 *)(param_1 + 0x110) = uVar11;
  if (*(int *)(param_1 + 0x16c) != 0) {
    do {
      lVar10 = *(longlong *)(param_1 + 0x80);
      lVar12 = (longlong)(int)uVar16;
      uVar16 = uVar16 + 1;
      fVar26 = *(float *)(lVar10 + 4 + lVar12 * 0xc);
      fVar25 = *(float *)(lVar10 + 8 + lVar12 * 0xc);
      pfVar15 = (float *)(lVar12 * 0x60 + *(longlong *)(param_1 + 0x50));
      *pfVar15 = param_2 * *(float *)(lVar10 + lVar12 * 0xc) + *pfVar15;
      pfVar15[1] = fVar26 * param_2 + pfVar15[1];
      pfVar15[2] = fVar25 * param_2 + pfVar15[2];
    } while (uVar16 < *(uint *)(param_1 + 0x16c));
  }
  ::_guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0x80),0,(ulonglong)*(uint *)(param_1 + 0x168) * 0xc);
  ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x110),0,(longlong)(iVar9 << 5));
  local_c8 = *param_3;
  local_c0 = *(undefined4 *)(param_3 + 1);
  PxConstructSolverBodies
            (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x60),
             *(undefined4 *)(param_1 + 0x16c),&local_c8,param_2);
  uVar16 = *(uint *)(param_1 + 0x28);
  uVar14 = *(uint *)(param_1 + 0x168);
  fVar26 = 1.0 / param_2;
  if (uVar14 < uVar16) {
    do {
      pfVar15 = (float *)((longlong)(int)uVar14 * 0x20 + *(longlong *)(param_1 + 0x70));
      if (*(char *)(pfVar15 + 7) != '\0') {
        fVar25 = *pfVar15;
        fVar17 = pfVar15[3];
        fVar18 = pfVar15[1];
        fVar1 = pfVar15[2];
        fVar2 = pfVar15[4];
        pfVar13 = (float *)((longlong)(int)uVar14 * 0x60 + *(longlong *)(param_1 + 0x50));
        fVar3 = pfVar13[0x10];
        fVar4 = pfVar13[0xf];
        fVar19 = -pfVar13[0xc];
        fVar21 = -pfVar13[0xe];
        fVar20 = -pfVar13[0xd];
        fVar5 = pfVar15[5];
        fVar6 = pfVar13[0x11];
        fVar7 = pfVar15[6];
        fVar8 = pfVar13[0x12];
        fVar22 = (fVar25 * fVar4 + fVar17 * fVar19 + fVar18 * fVar21) - fVar1 * fVar20;
        fVar23 = (fVar18 * fVar4 + fVar17 * fVar20 + fVar1 * fVar19) - fVar25 * fVar21;
        fVar24 = (fVar1 * fVar4 + fVar17 * fVar21 + fVar25 * fVar20) - fVar18 * fVar19;
        fVar25 = ((fVar17 * fVar4 - fVar25 * fVar19) - fVar18 * fVar20) - fVar1 * fVar21;
        if (fVar25 < 0.0) {
          fVar22 = -fVar22;
          fVar23 = -fVar23;
          fVar24 = -fVar24;
          fVar25 = -fVar25;
        }
        fVar17 = 0.0;
        fVar18 = fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
        if (1e-16 <= fVar18) {
          fVar17 = 1.0 / SQRT(fVar18);
          fVar22 = fVar22 * fVar17;
          fVar23 = fVar23 * fVar17;
          fVar24 = fVar24 * fVar17;
          if (1e-08 <= ABS(fVar25)) {
            fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17 * fVar18,fVar25);
            fVar17 = fVar17 + fVar17;
          }
          else {
            fVar17 = 3.1415927;
          }
        }
        else {
          fVar22 = 1.0;
          fVar23 = 0.0;
          fVar24 = 0.0;
        }
        *pfVar13 = (fVar2 - fVar3) * fVar26;
        pfVar13[1] = (fVar5 - fVar6) * fVar26;
        pfVar13[2] = (fVar7 - fVar8) * fVar26;
        pfVar13[4] = fVar22 * fVar17 * fVar26;
        pfVar13[5] = fVar23 * fVar17 * fVar26;
        pfVar13[6] = fVar24 * fVar17 * fVar26;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar16);
    uVar14 = *(uint *)(param_1 + 0x168);
  }
  uVar16 = *(uint *)(param_1 + 0x16c);
  local_c8 = 0;
  local_c0 = 0;
  PxConstructSolverBodies
            ((ulonglong)uVar16 * 0x60 + *(longlong *)(param_1 + 0x50),
             (ulonglong)uVar16 * 0x70 + *(longlong *)(param_1 + 0x60),
             (*(int *)(param_1 + 0x170) - uVar16) + uVar14,&local_c8,param_2);
  return;
}



// FUNCTION 14094ca60 CreateDynamicActor body=49 status=ok
// SIG undefined CreateDynamicActor(void)

undefined8 ImmediatePhysics::FSimulation::CreateDynamicActor(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_140947470();
  *(int *)((longlong)param_1 + 0x16c) = (int)param_1[0x2d];
  *(undefined1 *)(param_1 + 0x29) = 1;
  return *(undefined8 *)(*param_1 + (longlong)iVar1 * 8);
}



// FUNCTION 14094caa0 FUN_14094caa0 body=2469 status=ok
// SIG undefined FUN_14094caa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14094caa0(longlong *param_1,longlong *param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_238 [32];
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  undefined4 local_200;
  float local_1fc;
  undefined1 local_1f8 [4];
  float local_1f4;
  float local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 *local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  float local_1b0;
  float local_1ac;
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
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [32];
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  ulonglong local_e8;
  
  if (param_2 != (longlong *)0x0) {
    local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
    iVar5 = (**(code **)(*param_2 + 200))(param_2);
    local_1e0 = (undefined8 *)0x0;
    local_1d4 = 0;
    local_1d8 = iVar5;
    if (0 < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1e0,0);
    }
    iVar12 = local_1d8;
    puVar13 = local_1e0;
    (**(code **)(*param_2 + 0xd0))(param_2,local_1e0,iVar5 * 8,0);
    fVar38 = param_3[3];
    fVar32 = *param_3;
    fVar26 = param_3[1];
    fVar18 = param_3[2];
    fVar24 = -(param_3[5] + param_3[5]);
    fVar31 = fVar38 * fVar38 - 0.5;
    fVar25 = -(param_3[4] + param_3[4]);
    fVar23 = -(param_3[6] + param_3[6]);
    local_1f4 = -fVar18;
    fVar22 = fVar26 * fVar24 + fVar32 * fVar25 + fVar18 * fVar23;
    fVar39 = -fVar32;
    fVar33 = -fVar26;
    fVar34 = (fVar31 * fVar25 - (fVar26 * fVar23 - fVar18 * fVar24) * fVar38) + fVar32 * fVar22;
    fVar35 = (fVar31 * fVar24 - (fVar18 * fVar25 - fVar32 * fVar23) * fVar38) + fVar26 * fVar22;
    fVar32 = (fVar31 * fVar23 - (fVar32 * fVar24 - fVar26 * fVar25) * fVar38) + fVar18 * fVar22;
    *(undefined4 *)(param_1 + 1) = 0;
    local_218 = fVar34;
    local_214 = fVar35;
    local_210 = fVar38;
    local_20c = fVar39;
    local_208 = fVar33;
    local_198 = fVar39;
    local_194 = fVar33;
    local_190 = local_1f4;
    local_18c = fVar38;
    local_188 = fVar34;
    local_184 = fVar35;
    local_180 = fVar32;
    if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar5);
    }
    local_128 = (undefined8 *)0x0;
    local_120 = 0;
    puVar15 = puVar13 + iVar12;
    if (puVar13 != puVar15) {
      puVar16 = (undefined4 *)0x0;
      puVar17 = puVar13;
      do {
        plVar1 = (longlong *)*puVar17;
        pbVar8 = (byte *)(**(code **)(*plVar1 + 0x108))(plVar1,local_1f8);
        if ((*pbVar8 & 1) != 0) {
          (**(code **)(*plVar1 + 0x90))(plVar1,local_150);
          lVar9 = (**(code **)(*plVar1 + 0x90))(plVar1,&local_1d0);
          fVar31 = *(float *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x14);
          fVar28 = *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x10);
          fVar24 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x18);
          fVar27 = fVar38 * fVar38 - 0.5;
          fVar23 = local_1f4 * fVar28;
          fVar25 = fVar33 * fVar31 + fVar39 * fVar28 + local_1f4 * fVar24;
          fVar18 = local_1f4 * fVar31;
          fVar22 = (fVar39 * fVar31 - fVar33 * fVar28) * fVar38 + fVar27 * fVar24 +
                   local_1f4 * fVar25;
          fVar26 = fVar32 + fVar22;
          local_1f0 = fVar26;
          puVar10 = (undefined4 *)physx::PxQuat::operator*(&local_198,local_160,lVar9);
          local_204 = puVar10[2];
          uVar6 = *puVar10;
          uVar29 = puVar10[1];
          local_200 = puVar10[3];
          local_1ec = uVar6;
          local_1e8 = uVar29;
          (**(code **)(*plVar1 + 0x40))(plVar1,&local_118);
          local_1c0 = 0;
          local_1d0 = 0;
          uStack_1c8 = 0x3f80000000000000;
          local_1b8 = 0;
          physx::PxGeometryQuery::getWorldBounds
                    ((PxGeometry *)&local_1b0,(PxTransform *)&local_118,fVar22);
          fVar22 = local_1b0 + local_1a4;
          fVar36 = local_1ac + local_1a0;
          fVar37 = local_1a8 + local_19c;
          local_1fc = SQRT(((local_1a0 - local_1ac) * (local_1a0 - local_1ac) +
                            (local_1a4 - local_1b0) * (local_1a4 - local_1b0) +
                           (local_19c - local_1a8) * (local_19c - local_1a8)) * 0.25);
          uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
          uVar3 = local_120;
          uVar14 = (uint)uVar4;
          if ((int)local_120 < (int)(uint)uVar4) {
            local_120 = CONCAT44(local_120._4_4_,uVar14);
            if (uVar4 != local_120._4_4_ && (int)local_120._4_4_ <= (int)uVar14) {
              FUN_1407eebb0(&local_130,uVar3 & 0xffffffff);
            }
          }
          else if (((int)(uint)uVar4 < (int)local_120) &&
                  (iVar5 = (int)local_120 - uVar14, iVar5 != 0)) {
            iVar12 = ((int)local_120 - iVar5) - uVar14;
            if (iVar12 != 0) {
              puVar13 = &local_130;
              if (local_128 != (undefined8 *)0x0) {
                puVar13 = local_128;
              }
              _guard_xfg_dispatch_icall_nop
                        (puVar13 + uVar4,puVar13 + (int)(iVar5 + (uint)uVar4),(longlong)iVar12 << 3)
              ;
            }
            local_120 = CONCAT44(local_120._4_4_,(int)local_120 - iVar5);
            FUN_1409574f0(&local_130);
          }
          puVar13 = &local_130;
          if (local_128 != (undefined8 *)0x0) {
            puVar13 = local_128;
          }
          (**(code **)(*plVar1 + 200))(plVar1,puVar13,(uint)uVar4 * 8,0);
          local_178 = 0x3f333333;
          uStack_174 = 0x3f333333;
          uStack_170 = 0x3e99999a;
          if (uVar4 == 0) {
            uVar19 = 0x3f333333;
            uVar20 = 0x3f333333;
            uVar21 = 0x3e99999a;
            uVar30 = uStack_16c;
            uVar7 = local_168;
          }
          else {
            puVar13 = &local_130;
            if (local_128 != (undefined8 *)0x0) {
              puVar13 = local_128;
            }
            plVar1 = (longlong *)*puVar13;
            uVar19 = (**(code **)(*plVar1 + 0x50))(plVar1);
            uVar20 = (**(code **)(*plVar1 + 0x40))(plVar1);
            uVar21 = (**(code **)(*plVar1 + 0x60))(plVar1);
            uVar6 = (**(code **)(*plVar1 + 0x88))(plVar1);
            uStack_1c8._4_4_ = uVar6;
            uVar7 = (**(code **)(*plVar1 + 0x98))(plVar1);
            local_1d0 = CONCAT44(uVar20,uVar19);
            uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar21);
            fVar26 = local_1f0;
            uVar6 = local_1ec;
            uVar29 = local_1e8;
            uVar30 = uStack_1c8._4_4_;
          }
          puVar10 = puVar16;
          switch(local_118) {
          case 0:
            puVar11 = (undefined4 *)operator_new(8);
            if (puVar11 != (undefined4 *)0x0) {
              puVar11[1] = local_114;
              *puVar11 = 0;
              puVar10 = puVar11;
            }
            break;
          default:
            goto switchD_14094d0ee_caseD_1;
          case 2:
            puVar11 = (undefined4 *)operator_new(0xc);
            if (puVar11 != (undefined4 *)0x0) {
              puVar11[1] = local_114;
              puVar11[2] = local_110;
              *puVar11 = 2;
              puVar10 = puVar11;
            }
            break;
          case 3:
            puVar11 = (undefined4 *)operator_new(0x10);
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = 3;
              puVar11[1] = local_114;
              puVar11[2] = local_110;
              puVar11[3] = uStack_10c;
              puVar10 = puVar11;
            }
            break;
          case 4:
            puVar11 = (undefined4 *)operator_new(0x30);
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = 4;
              puVar11[1] = local_114;
              puVar11[2] = local_110;
              puVar11[3] = uStack_10c;
              puVar11[4] = local_108;
              puVar11[5] = local_104;
              puVar11[6] = local_100;
              puVar11[7] = local_fc;
              *(ulonglong *)(puVar11 + 8) = CONCAT71(uStack_f7,local_f8);
              *(undefined1 *)(puVar11 + 10) = local_f0;
              *(undefined2 *)((longlong)puVar11 + 0x29) = 0;
              *(undefined1 *)((longlong)puVar11 + 0x2b) = 0;
              puVar10 = puVar11;
            }
            break;
          case 5:
            puVar11 = (undefined4 *)operator_new(0x30);
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = 5;
              puVar11[1] = local_114;
              puVar11[2] = local_110;
              puVar11[3] = uStack_10c;
              puVar11[4] = local_108;
              puVar11[5] = local_104;
              puVar11[6] = local_100;
              puVar11[7] = local_fc;
              *(undefined1 *)(puVar11 + 8) = local_f8;
              *(undefined2 *)((longlong)puVar11 + 0x21) = 0;
              *(undefined1 *)((longlong)puVar11 + 0x23) = 0;
              *(ulonglong *)(puVar11 + 10) = CONCAT71(uStack_ef,local_f0);
              puVar10 = puVar11;
            }
            break;
          case 6:
            puVar11 = (undefined4 *)operator_new(0x20);
            if (puVar11 != (undefined4 *)0x0) {
              puVar11[4] = local_108;
              puVar11[5] = local_104;
              puVar11[6] = local_100;
              *(ulonglong *)(puVar11 + 2) = CONCAT44(uStack_10c,local_110);
              *puVar11 = 6;
              *(undefined1 *)(puVar11 + 7) = (undefined1)local_fc;
              *(undefined2 *)((longlong)puVar11 + 0x1d) = 0;
              *(undefined1 *)((longlong)puVar11 + 0x1f) = 0;
              puVar10 = puVar11;
            }
          }
          iVar5 = (int)param_1[1];
          lVar9 = (longlong)iVar5;
          *(int *)(param_1 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
          }
          lVar2 = *param_1;
          *(undefined4 *)(lVar2 + lVar9 * 0x48) = uVar6;
          *(undefined4 *)(lVar2 + 4 + lVar9 * 0x48) = uVar29;
          *(undefined4 *)(lVar2 + 8 + lVar9 * 0x48) = local_204;
          *(undefined4 *)(lVar2 + 0xc + lVar9 * 0x48) = local_200;
          *(float *)(lVar2 + 0x10 + lVar9 * 0x48) =
               (fVar33 * fVar24 - fVar18) * fVar38 + fVar27 * fVar28 + fVar39 * fVar25 + fVar34;
          *(float *)(lVar2 + 0x14 + lVar9 * 0x48) =
               fVar35 + (fVar23 - fVar39 * fVar24) * fVar38 + fVar27 * fVar31 + fVar33 * fVar25;
          *(float *)(lVar2 + 0x18 + lVar9 * 0x48) = fVar26;
          puVar11 = (undefined4 *)(lVar2 + 0x1c + lVar9 * 0x48);
          *puVar11 = uVar19;
          puVar11[1] = uVar20;
          puVar11[2] = uVar21;
          puVar11[3] = uVar30;
          *(undefined4 *)(lVar2 + 0x2c + lVar9 * 0x48) = uVar7;
          *(undefined4 **)(lVar2 + 0x30 + lVar9 * 0x48) = puVar10;
          *(float *)(lVar2 + 0x38 + lVar9 * 0x48) = fVar22 * 0.5;
          *(float *)(lVar2 + 0x3c + lVar9 * 0x48) = fVar36 * 0.5;
          *(float *)(lVar2 + 0x40 + lVar9 * 0x48) = fVar37 * 0.5;
          *(float *)(lVar2 + 0x44 + lVar9 * 0x48) = local_1fc;
switchD_14094d0ee_caseD_1:
          fVar33 = local_208;
          fVar34 = local_218;
          fVar35 = local_214;
          fVar38 = local_210;
          fVar39 = local_20c;
        }
        puVar13 = local_1e0;
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar15);
      if (local_128 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      FMemory::Free(puVar13);
    }
  }
  return;
}



// FUNCTION 14094d470 CreateJoint body=409 status=ok
// SIG undefined CreateJoint(void)

longlong *
ImmediatePhysics::FSimulation::CreateJoint
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_3 == 0) {
    return (longlong *)0x0;
  }
  plVar6 = (longlong *)0x0;
  plVar4 = (longlong *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x140);
  iVar8 = iVar2 + 1;
  *(int *)(param_1 + 0x140) = iVar8;
  if (*(int *)(param_1 + 0x144) < iVar8) {
    TArray<FSlateDrawElement,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
  }
  lVar7 = (longlong)iVar2 * 0x1e0;
  FUN_140948d90(*plVar4 + lVar7,param_2);
  PrepareJointData();
  lVar1 = *plVar4;
  if (((*(int *)(lVar1 + 0x48 + lVar7) == 0) && (*(int *)(lVar1 + 0x4c + lVar7) == 0)) &&
     (*(int *)(lVar1 + 0x50 + lVar7) == 0)) {
    iVar5 = *(int *)(param_1 + 0x140);
    iVar2 = (iVar5 - iVar2) + -1;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + lVar7),(void *)((longlong)iVar8 * 0x1e0 + lVar1),
                 (longlong)iVar2 * 0x1e0);
      iVar5 = *(int *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x140) = iVar5 + -1;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar8 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x30,iVar8);
    }
    puVar3 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x30));
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x30));
    *puVar3 = param_4;
    puVar3[1] = param_3;
    plVar4 = (longlong *)operator_new(0x10);
    if (plVar4 != (longlong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x38);
      *plVar4 = param_1;
      *(int *)(plVar4 + 1) = iVar2 + -1;
      plVar6 = plVar4;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar2);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 8) = plVar6;
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  return plVar6;
}



// FUNCTION 14094d610 FUN_14094d610 body=30 status=ok
// SIG undefined FUN_14094d610(void)

undefined8 FUN_14094d610(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_140946bc0();
  return *(undefined8 *)(*param_1 + (longlong)iVar1 * 8);
}



// FUNCTION 14094d630 D6JointSolverPrep body=7757 status=ok
// SIG undefined D6JointSolverPrep(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ImmediatePhysics::D6JointSolverPrep
                   (float *param_1,float *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 *param_5,float *param_6,float *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  float *pfVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
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
  float fVar27;
  float fVar28;
  undefined1 auStack_2c8 [32];
  float local_2a8;
  float *local_2a0;
  undefined8 *local_298;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_228;
  float local_224;
  float local_220;
  float *local_218;
  float *local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [4];
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_108 [10];
  ulonglong local_e0;
  
  local_e0 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  uVar4 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar4;
  fVar28 = param_6[3];
  fVar27 = param_6[1];
  fVar15 = param_6[2];
  fVar17 = *param_6;
  fVar24 = *(float *)(param_5 + 4) + *(float *)(param_5 + 4);
  fVar18 = *(float *)((longlong)param_5 + 0x24) + *(float *)((longlong)param_5 + 0x24);
  local_264 = *(float *)(param_5 + 10);
  fVar21 = *(float *)(param_5 + 5) + *(float *)(param_5 + 5);
  fVar23 = *(float *)((longlong)param_5 + 0x4c);
  uVar13 = *(uint *)(param_5 + 9);
  fVar19 = fVar28 * fVar28 - 0.5;
  fVar16 = fVar17 * fVar24 + fVar27 * fVar18 + fVar15 * fVar21;
  local_248 = (fVar27 * fVar21 - fVar15 * fVar18) * fVar28 + fVar19 * fVar24 + fVar17 * fVar16 +
              param_6[4];
  local_26c = (fVar17 * fVar18 - fVar27 * fVar24) * fVar28 + fVar19 * fVar21 + fVar15 * fVar16 +
              param_6[6];
  fVar26 = (fVar15 * fVar24 - fVar17 * fVar21) * fVar28 + fVar19 * fVar18 + fVar27 * fVar16 +
           param_6[5];
  local_258 = fVar23;
  local_24c = fVar26;
  pfVar6 = (float *)physx::PxQuat::operator*(param_6,&local_1a8);
  local_280 = pfVar6[1];
  fVar28 = *pfVar6;
  fVar27 = pfVar6[2];
  fVar25 = *(float *)((longlong)param_5 + 0x3c) + *(float *)((longlong)param_5 + 0x3c);
  fVar15 = param_7[3];
  fVar24 = *(float *)(param_5 + 8) + *(float *)(param_5 + 8);
  fVar17 = param_7[1];
  fVar16 = param_7[2];
  fVar18 = pfVar6[3];
  fVar22 = *(float *)((longlong)param_5 + 0x44) + *(float *)((longlong)param_5 + 0x44);
  local_140 = local_248;
  local_138 = local_26c;
  fVar19 = *param_7;
  fVar20 = fVar15 * fVar15 - 0.5;
  fVar21 = fVar19 * fVar25 + fVar17 * fVar24 + fVar16 * fVar22;
  local_284 = (fVar17 * fVar22 - fVar16 * fVar24) * fVar15 + fVar20 * fVar25 + fVar19 * fVar21 +
              param_7[4];
  local_260 = (fVar16 * fVar25 - fVar19 * fVar22) * fVar15 + fVar20 * fVar24 + fVar17 * fVar21 +
              param_7[5];
  fVar19 = (fVar19 * fVar24 - fVar17 * fVar25) * fVar15 + fVar20 * fVar22 + fVar16 * fVar21 +
           param_7[6];
  local_288 = fVar19;
  local_27c = fVar27;
  local_268 = fVar18;
  local_150 = fVar28;
  local_14c = local_280;
  local_148 = fVar27;
  local_144 = fVar18;
  local_13c = fVar26;
  pfVar6 = (float *)physx::PxQuat::operator*(param_7,&local_1a8);
  fVar16 = local_280;
  local_190 = *pfVar6;
  local_18c = pfVar6[1];
  local_188 = pfVar6[2];
  local_184 = pfVar6[3];
  local_180 = local_284;
  fVar15 = param_6[6];
  local_17c = local_260;
  fVar17 = param_6[5];
  *param_2 = local_284 - param_6[4];
  param_2[2] = fVar19 - fVar15;
  param_2[1] = local_260 - fVar17;
  local_204 = local_260 - param_6[5];
  local_1f8 = local_260 - param_7[5];
  local_208 = local_284 - param_6[4];
  local_1fc = local_284 - param_7[4];
  local_200 = fVar19 - param_6[6];
  local_1f4 = fVar19 - param_7[6];
  if (local_18c * local_280 + local_190 * fVar28 + fVar27 * local_188 + fVar18 * local_184 < 0.0) {
    local_190 = -local_190;
    local_18c = -local_18c;
    local_188 = -local_188;
    local_184 = -local_184;
  }
  local_284 = (local_284 - local_248) + (local_284 - local_248);
  fVar24 = (local_260 - local_24c) + (local_260 - local_24c);
  local_288 = (local_288 - local_26c) + (local_288 - local_26c);
  local_1e0 = -fVar28;
  fVar17 = fVar18 * fVar18 - 0.5;
  local_1dc = -local_280;
  local_1d8 = -fVar27;
  fVar15 = fVar24 * local_1dc + local_284 * local_1e0 + local_288 * local_1d8;
  local_248 = (local_288 * local_1dc - fVar24 * local_1d8) * fVar18 + fVar17 * local_284 +
              fVar15 * local_1e0;
  fVar21 = (local_284 * local_1d8 - local_288 * local_1e0) * fVar18 + fVar17 * fVar24 +
           fVar15 * local_1dc;
  fVar17 = (fVar24 * local_1e0 - local_284 * local_1dc) * fVar18 + fVar17 * local_288 +
           fVar15 * local_1d8;
  local_274 = local_188;
  local_270 = local_18c;
  local_260 = fVar17;
  local_25c = local_184;
  local_250 = local_190;
  local_218 = param_1;
  local_210 = param_1;
  local_1d4 = fVar18;
  local_1d0 = fVar21;
  local_178 = fVar19;
  pfVar6 = (float *)physx::PxQuat::operator*(&local_1e0,&local_1a8,&local_190);
  local_278 = *pfVar6;
  fVar15 = pfVar6[3];
  local_170 = local_278;
  local_288 = pfVar6[1];
  local_16c = local_288;
  local_284 = pfVar6[2];
  local_168 = local_284;
  local_164 = fVar15;
  local_160 = local_248;
  local_15c = fVar21;
  local_158 = fVar17;
  fVar21 = fVar28 + fVar28;
  fVar17 = fVar27 * (fVar27 + fVar27);
  fVar19 = (fVar27 + fVar27) * fVar18;
  fVar27 = fVar16 + fVar16;
  local_1c4 = (1.0 - fVar16 * fVar27) - fVar17;
  local_1c0 = fVar19 + fVar16 * fVar21;
  fVar19 = fVar16 * fVar21 - fVar19;
  local_108[1] = local_1c0;
  local_108[0] = local_1c4;
  local_198 = local_27c * fVar21 - fVar27 * fVar18;
  fVar24 = fVar27 * fVar18 + local_27c * fVar21;
  fVar20 = local_270 + local_270;
  local_108[3] = fVar19;
  local_108[2] = local_198;
  local_230 = 1.0 - fVar28 * fVar21;
  local_23c = local_230 - fVar16 * fVar27;
  local_230 = local_230 - fVar17;
  local_234 = local_27c * fVar27 + fVar21 * fVar18;
  local_108[8] = local_23c;
  local_238 = local_27c * fVar27 - fVar21 * fVar18;
  local_108[5] = local_234;
  local_108[4] = local_230;
  fVar17 = local_250 + local_250;
  local_108[7] = local_238;
  local_108[6] = fVar24;
  fVar27 = (local_274 + local_274) * local_274;
  local_254 = (local_274 + local_274) * local_25c;
  local_244 = fVar17 * local_270 - local_254;
  local_1b4 = 1.0 - fVar17 * local_250;
  local_1e0 = fVar24;
  local_124 = local_244;
  local_254 = local_254 + fVar17 * local_270;
  local_1bc = local_1b4 - fVar27;
  fVar27 = (1.0 - fVar20 * local_270) - fVar27;
  local_1b4 = local_1b4 - fVar20 * local_270;
  local_12c = local_254;
  fVar16 = fVar17 * local_274 - fVar20 * local_25c;
  local_120 = local_1bc;
  local_1b8 = fVar20 * local_274 + fVar17 * local_25c;
  local_130 = fVar27;
  local_26c = fVar20 * local_274 - fVar17 * local_25c;
  local_250 = fVar20 * local_25c + fVar17 * local_274;
  local_128 = fVar16;
  local_110 = local_1b4;
  local_11c = local_1b8;
  local_114 = local_26c;
  local_1d8 = local_23c;
  local_118 = local_250;
  local_1dc = local_238;
  local_24c = fVar27;
  local_228 = fVar19;
  local_224 = local_230;
  local_220 = local_234;
  fVar17 = local_264;
  if (((uint)local_264 & 7) != 0) {
    pfVar6 = local_1f0;
    puVar10 = (uint *)((longlong)param_5 + 0xc4);
    uVar11 = 0;
    local_1f0[0] = *(float *)((longlong)param_5 + 300) - local_248;
    uVar12 = 1;
    local_1f0[1] = *(float *)(param_5 + 0x26) - local_1d0;
    local_1f0[2] = *(float *)((longlong)param_5 + 0x134) - local_260;
    do {
      if (((uint)fVar17 & uVar12) != 0) {
        uVar2 = *(uint *)((longlong)pfVar6 + (longlong)param_5 + (0x138 - (longlong)local_1f0));
        lVar7 = ConstraintHelper::linear(&local_218,local_108 + (ulonglong)uVar11 * 3,*pfVar6,0);
        *(uint *)(lVar7 + 0x1c) = uVar2 ^ 0x80000000;
        uVar8 = *(ushort *)(lVar7 + 0x4c) | 0x23;
        if ((puVar10[1] & 1) == 0) {
          uVar8 = *(ushort *)(lVar7 + 0x4c) | 0x21;
        }
        *(ushort *)(lVar7 + 0x4c) = uVar8;
        *(uint *)(lVar7 + 0x40) = puVar10[-2];
        *(uint *)(lVar7 + 0x44) = puVar10[-1];
        *(uint *)(lVar7 + 0x2c) = *puVar10 ^ 0x80000000;
        *(uint *)(lVar7 + 0x3c) = *puVar10;
        fVar17 = local_264;
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      puVar10 = puVar10 + 4;
      pfVar6 = pfVar6 + 1;
      param_1 = local_210;
      fVar23 = local_258;
    } while (uVar11 < 3);
  }
  pfVar6 = param_1;
  if (((uint)fVar17 & 0x38) == 0) goto LAB_14094ea1c;
  local_1cc = *(float *)(param_5 + 0x24);
  local_25c = *(float *)((longlong)param_5 + 0x11c);
  local_1c8 = *(float *)((longlong)param_5 + 0x124);
  fVar27 = *(float *)(param_5 + 0x25);
  if (local_278 * local_25c + local_288 * local_1cc + local_284 * local_1c8 + fVar15 * fVar27 <= 0.0
     ) {
    local_1cc = -local_1cc;
    local_1c8 = -local_1c8;
    local_25c = -local_25c;
    fVar27 = -fVar27;
  }
  fVar21 = -local_1cc;
  fVar18 = -local_25c;
  fVar20 = -local_1c8;
  local_1b0 = local_284 * fVar18;
  fVar22 = (fVar27 * local_278 + fVar15 * fVar18 + local_284 * fVar21) - local_288 * fVar20;
  local_264 = fVar27 * local_288 + fVar15 * fVar21 + local_278 * fVar20;
  local_270 = fVar27 * local_284 + fVar15 * fVar20 + local_288 * fVar18;
  local_240 = local_278 * fVar21;
  local_258 = local_270 - local_240;
  local_274 = ((fVar27 * fVar15 - local_278 * fVar18) - local_288 * fVar21) - local_284 * fVar20;
  if (((uint)fVar17 & 0x20) == 0) {
    pfVar14 = param_1;
    if (((uint)fVar17 & 0x10) != 0) {
      fVar27 = *(float *)((longlong)param_5 + 0x144);
      pfVar14 = param_1 + 0x14;
      *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[5] = local_254;
      param_1[4] = local_24c;
      param_1[6] = fVar16;
      param_1[8] = 0.0;
      param_1[9] = 0.0;
      param_1[10] = 0.0;
      param_1[0xd] = local_254;
      param_1[0xc] = local_24c;
      param_1[0xe] = fVar16;
      param_1[3] = fVar22 * -2.0;
      param_1[7] = fVar27;
      uVar8 = *(ushort *)(param_1 + 0x13) | 0x23;
      if ((*(uint *)(param_5 + 0x21) & 1) == 0) {
        uVar8 = *(ushort *)(param_1 + 0x13) | 0x21;
      }
      *(ushort *)(param_1 + 0x13) = uVar8;
      param_1[0x10] = *(float *)((longlong)param_5 + 0xfc);
      param_1[0x11] = *(float *)(param_5 + 0x20);
      param_1[0xb] = -*(float *)((longlong)param_5 + 0x104);
      param_1[0xf] = *(float *)((longlong)param_5 + 0x104);
      local_210 = pfVar14;
    }
    pfVar6 = pfVar14;
    fVar27 = local_24c;
    if (((uint)fVar17 & 8) == 0) goto LAB_14094ea1c;
    fVar17 = local_1b0 - local_264;
    if ((uVar13 & 0x10) == 0) {
      fVar18 = *(float *)(param_5 + 0x29);
      pfVar6 = pfVar14 + 0x14;
      *(undefined2 *)((longlong)pfVar14 + 0x4e) = 0;
      pfVar14[0] = 0.0;
      pfVar14[1] = 0.0;
      pfVar14[2] = 0.0;
      pfVar14[5] = local_1bc;
      pfVar14[4] = local_244;
      pfVar14[6] = local_1b8;
      pfVar14[8] = 0.0;
      pfVar14[9] = 0.0;
      pfVar14[10] = 0.0;
      pfVar14[0xd] = local_1bc;
      pfVar14[0xc] = local_244;
      pfVar14[0xe] = local_1b8;
      pfVar14[7] = fVar18;
      pfVar14[3] = (fVar17 + fVar17) * local_274 + (fVar22 + fVar22) * local_258;
      uVar8 = *(ushort *)(pfVar14 + 0x13) | 0x23;
      if ((*(uint *)(param_5 + 0x1f) & 1) == 0) {
        uVar8 = *(ushort *)(pfVar14 + 0x13) | 0x21;
      }
      *(ushort *)(pfVar14 + 0x13) = uVar8;
      pfVar14[0x10] = *(float *)((longlong)param_5 + 0xec);
      pfVar14[0x11] = *(float *)(param_5 + 0x1e);
      pfVar14[0xb] = -*(float *)((longlong)param_5 + 0xf4);
      pfVar14[0xf] = *(float *)((longlong)param_5 + 0xf4);
      local_210 = pfVar6;
    }
    if ((uVar13 & 0x20) != 0) goto LAB_14094ea1c;
    fVar27 = *(float *)((longlong)param_5 + 0x14c);
    local_210 = pfVar6 + 0x14;
    *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
    pfVar6[0] = 0.0;
    pfVar6[1] = 0.0;
    pfVar6[2] = 0.0;
    pfVar6[4] = local_250;
    pfVar6[5] = local_26c;
    pfVar6[6] = local_1b4;
    pfVar6[8] = 0.0;
    pfVar6[9] = 0.0;
    pfVar6[10] = 0.0;
    pfVar6[0xc] = local_250;
    pfVar6[0xd] = local_26c;
    pfVar6[0xe] = local_1b4;
    pfVar6[7] = fVar27;
    pfVar6[3] = ((local_240 - local_270) + (local_240 - local_270)) * local_274 +
                (fVar22 + fVar22) * fVar17;
    uVar8 = *(ushort *)(pfVar6 + 0x13) | 0x23;
    if ((*(uint *)(param_5 + 0x1f) & 1) == 0) {
      uVar8 = *(ushort *)(pfVar6 + 0x13) | 0x21;
    }
    *(ushort *)(pfVar6 + 0x13) = uVar8;
    pfVar6[0x10] = *(float *)((longlong)param_5 + 0xec);
    pfVar6[0x11] = *(float *)(param_5 + 0x1e);
    pfVar6[0xb] = -*(float *)((longlong)param_5 + 0xf4);
    fVar27 = *(float *)((longlong)param_5 + 0xf4);
  }
  else {
    fVar20 = *(float *)((longlong)param_5 + 0x144) + *(float *)((longlong)param_5 + 0x144);
    fVar21 = *(float *)((longlong)param_5 + 0x14c) + *(float *)((longlong)param_5 + 0x14c);
    fVar25 = *(float *)(param_5 + 0x29) + *(float *)(param_5 + 0x29);
    fVar18 = local_268 * local_268 - 0.5;
    fVar17 = fVar20 * fVar28 + fVar25 * local_280 + fVar21 * local_27c;
    local_270 = -((fVar21 * local_280 - fVar25 * local_27c) * local_268 + fVar18 * fVar20 +
                 fVar17 * fVar28);
    local_274 = -((fVar20 * local_27c - fVar21 * fVar28) * local_268 + fVar18 * fVar25 +
                 fVar17 * local_280);
    fVar17 = -((fVar25 * fVar28 - fVar20 * local_280) * local_268 + fVar18 * fVar21 +
              fVar17 * local_27c);
    local_108[0] = 1.0;
    local_108[1] = 0.0;
    local_108[2] = 0.0;
    local_108[3] = 0.0;
    local_108[4] = 1.0;
    local_108[5] = 0.0;
    local_108[6] = 0.0;
    local_108[7] = 0.0;
    local_108[8] = 1.0;
    if (*(float *)((longlong)param_5 + 0x10c) != 0.0) {
      local_1f0[0] = (fVar27 * fVar28 + local_268 * local_25c + local_1c8 * local_280) -
                     local_1cc * local_27c;
      local_1f0[1] = (fVar27 * local_280 + local_1cc * local_268 + local_27c * local_25c) -
                     local_1c8 * fVar28;
      local_1f0[2] = (fVar27 * local_27c + local_1c8 * local_268 + local_1cc * fVar28) -
                     local_280 * local_25c;
      local_1f0[3] = ((fVar27 * local_268 - fVar28 * local_25c) - local_1cc * local_280) -
                     local_1c8 * local_27c;
      computeJacobianAxes(local_108,local_1f0,&local_190);
    }
    pfVar6 = param_1 + 0x28;
    *(undefined2 *)((longlong)param_1 + 0x4e) = 0x102;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[4] = local_108[0];
    param_1[5] = local_108[1];
    param_1[6] = local_108[2];
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xc] = local_108[0];
    param_1[0xd] = local_108[1];
    param_1[0xe] = local_108[2];
    param_1[3] = -fVar22;
    param_1[7] = local_108[0] * local_270 + local_108[1] * local_274 + local_108[2] * fVar17;
    uVar8 = *(ushort *)(param_1 + 0x13) | 0x23;
    if ((*(uint *)(param_5 + 0x23) & 1) == 0) {
      uVar8 = *(ushort *)(param_1 + 0x13) | 0x21;
    }
    *(ushort *)(param_1 + 0x13) = uVar8;
    param_1[0x10] = *(float *)((longlong)param_5 + 0x10c);
    param_1[0x11] = *(float *)(param_5 + 0x22);
    param_1[0xb] = -*(float *)((longlong)param_5 + 0x114);
    param_1[0xf] = *(float *)((longlong)param_5 + 0x114);
    *(undefined2 *)((longlong)param_1 + 0x9e) = 0x102;
    param_1[0x14] = 0.0;
    param_1[0x15] = 0.0;
    param_1[0x16] = 0.0;
    param_1[0x18] = local_108[3];
    param_1[0x19] = local_108[4];
    param_1[0x1a] = local_108[5];
    param_1[0x1c] = 0.0;
    param_1[0x1d] = 0.0;
    param_1[0x1e] = 0.0;
    param_1[0x20] = local_108[3];
    param_1[0x21] = local_108[4];
    param_1[0x22] = local_108[5];
    param_1[0x17] = local_1b0 - local_264;
    param_1[0x1b] = local_108[3] * local_270 + local_108[4] * local_274 + local_108[5] * fVar17;
    uVar8 = *(ushort *)(param_1 + 0x27) | 0x23;
    if ((*(uint *)(param_5 + 0x23) & 1) == 0) {
      uVar8 = *(ushort *)(param_1 + 0x27) | 0x21;
    }
    *(ushort *)(param_1 + 0x27) = uVar8;
    param_1[0x24] = *(float *)((longlong)param_5 + 0x10c);
    param_1[0x25] = *(float *)(param_5 + 0x22);
    param_1[0x1f] = -*(float *)((longlong)param_5 + 0x114);
    param_1[0x23] = *(float *)((longlong)param_5 + 0x114);
    *(undefined2 *)((longlong)param_1 + 0xee) = 0x102;
    local_210 = param_1 + 0x3c;
    pfVar6[0] = 0.0;
    pfVar6[1] = 0.0;
    param_1[0x2a] = 0.0;
    param_1[0x2c] = local_108[6];
    param_1[0x2d] = local_108[7];
    param_1[0x2e] = local_108[8];
    param_1[0x30] = 0.0;
    param_1[0x31] = 0.0;
    param_1[0x32] = 0.0;
    param_1[0x34] = local_108[6];
    param_1[0x35] = local_108[7];
    param_1[0x36] = local_108[8];
    param_1[0x2b] = -local_258;
    param_1[0x2f] = local_108[6] * local_270 + local_108[7] * local_274 + local_108[8] * fVar17;
    uVar8 = *(ushort *)(param_1 + 0x3b) | 0x23;
    if ((*(uint *)(param_5 + 0x23) & 1) == 0) {
      uVar8 = *(ushort *)(param_1 + 0x3b) | 0x21;
    }
    *(ushort *)(param_1 + 0x3b) = uVar8;
    param_1[0x38] = *(float *)((longlong)param_5 + 0x10c);
    param_1[0x39] = *(float *)(param_5 + 0x22);
    param_1[0x33] = -*(float *)((longlong)param_5 + 0x114);
    fVar27 = *(float *)((longlong)param_5 + 0x114);
  }
  pfVar6[0xf] = fVar27;
  pfVar6 = local_210;
  fVar27 = local_24c;
LAB_14094ea1c:
  fVar18 = local_24c;
  fVar17 = local_254;
  if (((uint)fVar23 & 0x38) != 0) {
    if (local_278 == 0.0) {
      fVar21 = 0.0;
      local_258 = 1.0;
    }
    else {
      local_258 = 1.0 / SQRT(local_278 * local_278 + fVar15 * fVar15);
      fVar21 = local_258 * local_278;
      local_258 = local_258 * fVar15;
    }
    fVar27 = -fVar21;
    fVar20 = fVar15 * local_258 - local_278 * fVar27;
    local_1a8 = local_278 * local_258 + fVar15 * fVar27;
    local_26c = local_288 * local_258;
    local_1a4 = local_26c + local_284 * fVar27;
    local_284 = local_284 * local_258 - local_288 * fVar27;
    local_278 = fVar21;
    local_1a0 = local_284;
    local_19c = fVar20;
    if ((SUB41(fVar23,0) & 0x30) == 0x30) {
      local_1f0[0] = *(float *)(param_5 + 0x2c);
      local_1f0[1] = *(float *)((longlong)param_5 + 0x15c);
      local_1f0[2] = *(float *)((longlong)param_5 + 0x164);
      cVar5 = ConeLimitHelper::getLimit(local_1f0,&local_1a8,&local_228,&local_240);
      if (cVar5 != '\0') {
        local_210 = pfVar6 + 0x14;
        fVar20 = local_220 * 2.0;
        *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
        fVar15 = local_224 * 2.0;
        pfVar6[0] = 0.0;
        pfVar6[1] = 0.0;
        fVar22 = local_228 * 2.0;
        pfVar6[2] = 0.0;
        fVar21 = local_268 * local_268 - 0.5;
        fVar17 = local_280 * fVar15 + fVar28 * fVar22 + local_27c * fVar20;
        fVar25 = (local_280 * fVar20 - local_27c * fVar15) * local_268 + fVar21 * fVar22 +
                 fVar28 * fVar17;
        pfVar6[4] = fVar25;
        fVar27 = (local_27c * fVar22 - fVar28 * fVar20) * local_268 + fVar21 * fVar15 +
                 local_280 * fVar17;
        pfVar6[5] = fVar27;
        fVar28 = (fVar28 * fVar15 - local_280 * fVar22) * local_268 + fVar21 * fVar20 +
                 local_27c * fVar17;
        pfVar6[6] = fVar28;
        pfVar6[8] = 0.0;
        pfVar6[9] = 0.0;
        pfVar6[10] = 0.0;
        pfVar6[0xc] = fVar25;
        pfVar6[0xd] = fVar27;
        pfVar6[0xe] = fVar28;
        uVar8 = *(ushort *)(pfVar6 + 0x13);
        pfVar6[3] = local_240;
        if ((0.0 < *(float *)((longlong)param_5 + 0xac)) || (0.0 < *(float *)(param_5 + 0x15))) {
          pfVar6[0x10] = *(float *)(param_5 + 0x15);
          uVar9 = uVar8 | 0x11;
          pfVar6[0x11] = *(float *)((longlong)param_5 + 0xac);
        }
        else {
          *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
          pfVar6[0x10] = *(float *)(param_5 + 0x14);
          pfVar6[0x11] = *(float *)((longlong)param_5 + 0xa4);
          uVar9 = uVar8 | 0x18;
          if (local_240 <= 0.0) {
            uVar9 = uVar8 | 0x10;
          }
          if (0.0 < *(float *)(param_5 + 0x14)) {
            uVar9 = uVar9 | 4;
          }
        }
        *(ushort *)(pfVar6 + 0x13) = uVar9;
        pfVar6[0xb] = 0.0;
        pfVar6 = local_210;
        fVar21 = local_278;
      }
    }
    else {
      local_2a8 = *(float *)(param_5 + 0x2b);
      puVar1 = param_5 + 0x14;
      uVar3 = *(undefined4 *)((longlong)param_5 + 0x164);
      local_240 = local_2a8;
      if (((uint)fVar23 & 0x10) != 0) {
        if ((uVar13 & 0x20) == 0) {
          local_2a0 = &local_228;
          local_228 = fVar16 * local_238 - local_23c * local_254;
          fVar28 = -(fVar24 * local_24c + local_238 * local_254 + fVar16 * local_23c);
          local_224 = local_23c * local_24c - fVar16 * fVar24;
          local_220 = fVar24 * local_254 - local_238 * local_24c;
          local_298 = puVar1;
          ConstraintHelper::halfAnglePair
                    (&local_218,fVar28 / ((1.0 - fVar28 * fVar28) + 1.0),
                     *(uint *)(param_5 + 0x2a) ^ 0x80000000);
          pfVar6 = local_210;
        }
        else {
          local_2a0 = &local_228;
          local_2a8 = (float)uVar3;
          local_298 = puVar1;
          ConstraintHelper::quarterAnglePair
                    (&local_218,local_1a4 / (fVar20 + 1.0),
                     *(uint *)((longlong)param_5 + 0x15c) ^ 0x80000000);
          pfVar6 = local_210;
          fVar17 = local_254;
        }
      }
      fVar21 = local_278;
      if (((uint)fVar23 & 0x20) != 0) {
        if ((uVar13 & 0x10) == 0) {
          local_2a0 = &local_1e0;
          fVar28 = fVar19 * fVar18 + local_230 * fVar17 + fVar16 * local_234;
          local_1e0 = local_234 * fVar17 - fVar16 * local_230;
          local_1dc = fVar16 * fVar19 - local_234 * fVar18;
          local_1d8 = local_230 * fVar18 - fVar19 * fVar17;
          local_2a8 = local_240;
          local_298 = puVar1;
          ConstraintHelper::halfAnglePair
                    (&local_218,fVar28 / ((1.0 - fVar28 * fVar28) + 1.0),
                     *(uint *)((longlong)param_5 + 0x154) ^ 0x80000000);
          pfVar6 = local_210;
          fVar21 = local_278;
        }
        else {
          local_2a0 = &local_1e0;
          local_2a8 = (float)uVar3;
          local_298 = puVar1;
          ConstraintHelper::quarterAnglePair
                    (&local_218,local_284 / (fVar20 + 1.0),*(uint *)(param_5 + 0x2c) ^ 0x80000000);
          pfVar6 = local_210;
          fVar21 = local_278;
        }
      }
    }
    fVar27 = fVar18;
    if (((uint)fVar23 & 8) != 0) {
      local_298 = (undefined8 *)((longlong)param_5 + 0x84);
      local_2a0 = &local_130;
      local_2a8 = *(float *)(param_5 + 0x2e);
      ConstraintHelper::quarterAnglePair
                (&local_218,fVar21 / (local_258 + 1.0),*(undefined4 *)(param_5 + 0x2d),
                 *(undefined4 *)((longlong)param_5 + 0x16c));
      pfVar6 = local_210;
    }
  }
  pfVar14 = pfVar6;
  if (((uint)fVar23 & 7) != 0) {
    fVar28 = 0.0;
    fVar15 = 0.0;
    fVar17 = 0.0;
    if (((uint)fVar23 & 1) != 0) {
      fVar28 = local_1c4 * local_248;
      fVar15 = local_1c0 * local_248;
      fVar17 = local_198 * local_248;
    }
    if (((uint)fVar23 & 2) != 0) {
      fVar28 = fVar28 + fVar19 * local_1d0;
      fVar15 = fVar15 + local_230 * local_1d0;
      fVar17 = fVar17 + local_234 * local_1d0;
    }
    if (((uint)fVar23 & 4) != 0) {
      fVar28 = fVar28 + fVar24 * local_260;
      fVar15 = fVar15 + local_238 * local_260;
      fVar17 = fVar17 + local_23c * local_260;
    }
    fVar18 = SQRT(fVar15 * fVar15 + fVar28 * fVar28 + fVar17 * fVar17);
    if (*(float *)((longlong)param_5 + 0x174) <= fVar18 &&
        fVar18 != *(float *)((longlong)param_5 + 0x174)) {
      fVar23 = 1.0 / fVar18;
      fVar28 = fVar28 * fVar23;
      fVar15 = fVar15 * fVar23;
      fVar17 = fVar17 * fVar23;
      if ((0.0 < *(float *)(param_5 + 0xf)) || (0.0 < *(float *)((longlong)param_5 + 0x74))) {
        fVar23 = 0.0;
      }
      else {
        fVar23 = *(float *)((longlong)param_5 + 0x7c);
      }
      if (*(float *)(param_5 + 0x10) < fVar23 + fVar18) {
        fVar18 = *(float *)(param_5 + 0x10) - fVar18;
        pfVar14 = pfVar6 + 0x14;
        *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
        *pfVar6 = fVar28;
        pfVar6[1] = fVar15;
        pfVar6[2] = fVar17;
        pfVar6[4] = local_204 * fVar17 - local_200 * fVar15;
        pfVar6[5] = local_200 * fVar28 - local_208 * fVar17;
        pfVar6[6] = local_208 * fVar15 - local_204 * fVar28;
        pfVar6[8] = fVar28;
        pfVar6[9] = fVar15;
        pfVar6[10] = fVar17;
        pfVar6[0xc] = local_1f8 * fVar17 - local_1f4 * fVar15;
        pfVar6[0xe] = local_1fc * fVar15 - local_1f8 * fVar28;
        pfVar6[0xd] = local_1f4 * fVar28 - local_1fc * fVar17;
        uVar8 = *(ushort *)(pfVar6 + 0x13);
        pfVar6[3] = fVar18;
        if ((0.0 < *(float *)(param_5 + 0xf)) || (0.0 < *(float *)((longlong)param_5 + 0x74))) {
          uVar9 = uVar8 | 0x11;
          pfVar6[0x10] = *(float *)((longlong)param_5 + 0x74);
          pfVar6[0x11] = *(float *)(param_5 + 0xf);
        }
        else {
          *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
          pfVar6[0x10] = *(float *)((longlong)param_5 + 0x6c);
          pfVar6[0x11] = *(float *)(param_5 + 0xe);
          uVar9 = uVar8 | 0x18;
          if (fVar18 <= 0.0) {
            uVar9 = uVar8 | 0x10;
          }
          if (0.0 < *(float *)((longlong)param_5 + 0x6c)) {
            uVar9 = uVar9 | 4;
          }
        }
        *(ushort *)(pfVar6 + 0x13) = uVar9;
        pfVar6[0xb] = 0.0;
        local_210 = pfVar14;
      }
    }
  }
  if ((uVar13 & 0x38) == 0x10) {
    local_210 = pfVar14 + 0x14;
    *(undefined2 *)((longlong)pfVar14 + 0x4e) = 0x400;
    pfVar14[0] = 0.0;
    pfVar14[1] = 0.0;
    pfVar14[2] = 0.0;
    fVar17 = local_23c * local_254 - fVar16 * local_238;
    pfVar14[4] = fVar17;
    fVar15 = fVar16 * fVar24 - local_23c * fVar27;
    pfVar14[5] = fVar15;
    fVar28 = local_238 * fVar27 - fVar24 * local_254;
    pfVar14[6] = fVar28;
    pfVar14[8] = 0.0;
    pfVar14[9] = 0.0;
    pfVar14[10] = 0.0;
    pfVar14[0xc] = fVar17;
    pfVar14[0xd] = fVar15;
    pfVar14[0xe] = fVar28;
    *(ushort *)(pfVar14 + 0x13) = *(ushort *)(pfVar14 + 0x13) | 0x10;
    pfVar14[3] = -(fVar24 * fVar27 + local_238 * local_254 + fVar16 * local_23c);
    uVar13 = uVar13 & 0xffffffef;
  }
  else if ((uVar13 & 0x38) == 0x20) {
    local_210 = pfVar14 + 0x14;
    *(undefined2 *)((longlong)pfVar14 + 0x4e) = 0x400;
    uVar13 = uVar13 & 0xffffffdf;
    pfVar14[0] = 0.0;
    pfVar14[1] = 0.0;
    pfVar14[2] = 0.0;
    fVar17 = local_234 * local_254 - fVar16 * local_230;
    pfVar14[4] = fVar17;
    fVar15 = fVar16 * fVar19 - local_234 * fVar27;
    pfVar14[5] = fVar15;
    fVar28 = local_230 * fVar27 - fVar19 * local_254;
    pfVar14[6] = fVar28;
    pfVar14[8] = 0.0;
    pfVar14[9] = 0.0;
    pfVar14[10] = 0.0;
    pfVar14[0xc] = fVar17;
    pfVar14[0xd] = fVar15;
    pfVar14[0xe] = fVar28;
    *(ushort *)(pfVar14 + 0x13) = *(ushort *)(pfVar14 + 0x13) | 0x10;
    pfVar14[3] = -(fVar19 * fVar27 + local_230 * local_254 + fVar16 * local_234);
  }
  local_2a0 = (float *)CONCAT44(local_2a0._4_4_,uVar13 >> 3);
  local_2a8 = (float)(uVar13 & 7);
  ConstraintHelper::prepareLockedAxes(&local_218,&local_150,&local_190,&local_160);
  return ((longlong)local_210 - (longlong)local_218) / 0x50;
}



// FUNCTION 14094f480 Empty body=102 status=ok
// SIG undefined Empty(void)

void FCSPose<FCompactHeapPose>::Empty(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  return;
}



// FUNCTION 14094f4f0 FUN_14094f4f0 body=630 status=ok
// SIG undefined FUN_14094f4f0(void)

void FUN_14094f4f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  int iVar4;
  short *psVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  
  if ((*(char *)(param_1 + 0x1b1) == '\0') || (*(char *)(param_1 + 0x5bd) == '\0')) {
    CAkParameterNodeBase::SetRTPC();
  }
  else if ((*(char *)(param_1 + 0x5bc) == '\0') && (0 < *(int *)(param_1 + 0x4f0))) {
    iVar2 = *(int *)(param_1 + 0x4f0);
    _Src = *(void **)(param_1 + 0x4e8);
    *(int *)(param_2 + 0x10) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_2 + 0x14) == 0)) {
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
    else {
      FUN_140615970(param_2 + 8,iVar2);
      _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 8),_Src,(longlong)iVar2 * 0x30);
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x4f8);
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
              (param_2 + 0x20,param_1 + 0x500);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x540);
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (0x7fffffff < *(uint *)(param_2 + 0x5c)) {
      FUN_140957580(param_2 + 0x50,0);
    }
    iVar2 = *(int *)(param_1 + 0x538);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_2 + 0x58);
      if (*(int *)(param_2 + 0x5c) < iVar4 + iVar2) {
        FUN_140957580(param_2 + 0x50);
        iVar4 = *(int *)(param_2 + 0x58);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_2 + 0x50) + (longlong)iVar4 * 8),
                 *(void **)(param_1 + 0x530),(longlong)iVar2 << 3);
      *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + iVar2;
    }
    puVar3 = *(undefined8 **)(param_2 + 0x60);
    sVar8 = 0;
    if ((puVar3 != (undefined8 *)0x0) &&
       (lVar6 = (longlong)*(int *)(puVar3 + 1), sVar8 = 0, 0 < lVar6)) {
      psVar5 = (short *)*puVar3;
      sVar7 = 0;
      do {
        sVar8 = sVar7 + 1;
        if (*psVar5 == -1) {
          sVar8 = sVar7;
        }
        lVar6 = lVar6 + -1;
        psVar5 = psVar5 + 1;
        sVar7 = sVar8;
      } while (lVar6 != 0);
    }
    *(short *)(param_2 + 0x68) = sVar8;
    *(undefined1 *)(param_2 + 0x6a) = 1;
  }
  else {
    CAkParameterNodeBase::SetRTPC();
    FCSPose<FCompactHeapPose>::CopyPose<FCSPose<FCompactPose>_>(param_1 + 0x4e8,param_2 + 8);
    plVar1 = (longlong *)(param_1 + 0x530);
    *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x538) = 0;
    if ((*(int *)(param_1 + 0x53c) < 0) && (*(int *)(param_1 + 0x53c) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    iVar2 = *(int *)(param_2 + 0x58);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x538);
      if (*(int *)(param_1 + 0x53c) < iVar4 + iVar2) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
        iVar4 = *(int *)(param_1 + 0x538);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar4 * 8),*(void **)(param_2 + 0x50),
                 (longlong)iVar2 << 3);
      *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + iVar2;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x540);
    sVar8 = 0;
    if ((puVar3 != (undefined8 *)0x0) &&
       (lVar6 = (longlong)*(int *)(puVar3 + 1), sVar8 = 0, 0 < lVar6)) {
      psVar5 = (short *)*puVar3;
      sVar7 = 0;
      do {
        sVar8 = sVar7 + 1;
        if (*psVar5 == -1) {
          sVar8 = sVar7;
        }
        lVar6 = lVar6 + -1;
        psVar5 = psVar5 + 1;
        sVar7 = sVar8;
      } while (lVar6 != 0);
    }
    *(short *)(param_1 + 0x548) = sVar8;
    *(undefined1 *)(param_1 + 0x54a) = 1;
  }
  if ((*(char *)(param_1 + 0x1b0) != '\0') && (*(char *)(param_1 + 0x5bd) == '\0')) {
    FCSPose<FCompactHeapPose>::CopyPose<FCSPose<FCompactPose>_>(param_1 + 0x4a0,param_2 + 8);
    FUN_14084daa0(param_1 + 0x378,*(undefined8 *)(param_1 + 0x4b0));
    *(longlong *)(param_1 + 0x4b0) = param_1 + 0x378;
  }
  return;
}



// FUNCTION 14094f770 FUN_14094f770 body=14538 status=ok
// SIG undefined FUN_14094f770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14094f770(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar25;
  DWORD DVar26;
  int iVar27;
  uint uVar28;
  undefined4 uVar29;
  int iVar30;
  undefined8 *puVar31;
  float *pfVar32;
  undefined8 uVar33;
  longlong lVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  longlong lVar37;
  char *pcVar38;
  longlong lVar39;
  ulonglong uVar40;
  int *piVar41;
  uint uVar42;
  int *piVar43;
  undefined4 *puVar44;
  longlong lVar45;
  longlong *plVar46;
  float fVar47;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar48;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auStack_a68 [32];
  undefined8 *local_a48;
  undefined1 local_a38 [8];
  undefined8 uStack_a30;
  undefined8 local_a28;
  float local_a20;
  undefined8 local_a18;
  float fStack_a10;
  float fStack_a0c;
  float local_a08;
  float local_9f8;
  float fStack_9f4;
  float fStack_9f0;
  float fStack_9ec;
  int local_9e8;
  undefined8 local_9e0;
  float local_9d8;
  float local_9d0;
  float local_9cc;
  float local_9c8;
  float local_9b8;
  float fStack_9b4;
  float fStack_9b0;
  float fStack_9ac;
  float local_9a8;
  float fStack_9a4;
  float fStack_9a0;
  float fStack_99c;
  float local_998;
  float fStack_994;
  float fStack_990;
  float fStack_98c;
  float local_988;
  float fStack_984;
  float fStack_980;
  float fStack_97c;
  float local_978;
  float fStack_974;
  float fStack_970;
  float fStack_96c;
  float local_968;
  float fStack_964;
  float fStack_960;
  float fStack_95c;
  float local_958;
  float fStack_954;
  float fStack_950;
  float fStack_94c;
  float local_948;
  float fStack_944;
  float fStack_940;
  float fStack_93c;
  float local_938;
  float fStack_934;
  float fStack_930;
  float fStack_92c;
  float local_928;
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  float local_918;
  float fStack_914;
  float fStack_910;
  float fStack_90c;
  float local_908;
  float fStack_904;
  float fStack_900;
  float fStack_8fc;
  float local_8f8;
  float fStack_8f4;
  float fStack_8f0;
  float fStack_8ec;
  float local_8e8;
  float fStack_8e4;
  float fStack_8e0;
  float fStack_8dc;
  float local_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  float local_8c8;
  float fStack_8c4;
  float fStack_8c0;
  float fStack_8bc;
  float local_8b8;
  float fStack_8b4;
  float fStack_8b0;
  float fStack_8ac;
  float local_8a8;
  float fStack_8a4;
  float fStack_8a0;
  float fStack_89c;
  float local_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  float local_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  float local_878;
  float fStack_874;
  float fStack_870;
  float fStack_86c;
  longlong *local_868;
  float local_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float local_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  float local_838;
  float fStack_834;
  float fStack_830;
  float fStack_82c;
  float local_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  float local_818;
  float fStack_814;
  float fStack_810;
  float fStack_80c;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  undefined4 local_7d8;
  float local_7c8;
  float fStack_7c4;
  float fStack_7c0;
  float fStack_7bc;
  float local_7b8;
  float fStack_7b4;
  float fStack_7b0;
  float fStack_7ac;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  undefined1 local_798 [12];
  undefined1 local_78c [12];
  undefined1 local_780 [12];
  undefined1 local_774 [12];
  undefined1 local_768 [12];
  undefined1 local_75c [12];
  undefined1 local_750 [24];
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  float local_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float local_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  float local_6f8;
  float fStack_6f4;
  float fStack_6f0;
  float fStack_6ec;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float local_6c8;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
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
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
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
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
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
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
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
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
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
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [8];
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [48];
  undefined1 local_148 [48];
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_a68;
  if ((((*(short *)(param_1 + 0x368) != -1) &&
       (uVar40 = *(ulonglong *)(param_1 + 0x360), uVar40 != 0xffffffffffffffff)) &&
      (uVar40 != *(ulonglong *)(*param_2 + 0x338))) &&
     (uVar40 < (DAT_1468c21b0 - *(short *)(param_1 + 0x36a)) - 1U)) {
    *(undefined1 *)(param_1 + 0x5bc) = 2;
  }
  lVar37 = *param_2;
  lVar45 = 0;
  *(undefined2 *)(param_1 + 0x368) = *(undefined2 *)(lVar37 + 0x340);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(lVar37 + 0x338);
  *(undefined2 *)(param_1 + 0x36a) = *(undefined2 *)(lVar37 + 0x342);
  fVar48 = *(float *)(param_1 + 0x284);
  *(undefined4 *)(param_1 + 0x284) = 0;
  lVar37 = DAT_146863c00;
  local_a28 = param_3;
  local_a08 = fVar48;
  cVar25 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar25 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar26 = GetCurrentThreadId(), DVar26 != DAT_1468c21c0)) {
    lVar45 = 4;
  }
  if ((*(int *)(lVar37 + lVar45) != 0) && (*(longlong *)(param_1 + 0x1c0) != 0)) {
    lVar37 = *param_2;
    local_a18 = param_2[3];
    local_3b8 = *(undefined8 *)(lVar37 + 0x10);
    uStack_3b0 = *(undefined8 *)(lVar37 + 0x18);
    uVar33 = *(undefined8 *)(lVar37 + 0x20);
    uVar13 = *(undefined8 *)(lVar37 + 0x28);
    local_3a8 = (float)uVar33;
    fStack_3a4 = (float)((ulonglong)uVar33 >> 0x20);
    fStack_3a0 = (float)uVar13;
    fStack_39c = (float)((ulonglong)uVar13 >> 0x20);
    uVar14 = *(undefined8 *)(lVar37 + 0x30);
    uVar15 = *(undefined8 *)(lVar37 + 0x38);
    local_398 = (float)uVar14;
    fStack_394 = (float)((ulonglong)uVar14 >> 0x20);
    fStack_390 = (float)uVar15;
    fStack_38c = (float)((ulonglong)uVar15 >> 0x20);
    if ((*(short *)(param_1 + 0x368) == -1) || (*(longlong *)(param_1 + 0x360) == -1)) {
      *(undefined8 *)(param_1 + 0x290) = local_3b8;
      *(undefined8 *)(param_1 + 0x298) = uStack_3b0;
      *(undefined8 *)(param_1 + 0x2a0) = uVar33;
      *(undefined8 *)(param_1 + 0x2a8) = uVar13;
      *(undefined8 *)(param_1 + 0x2b0) = uVar14;
      *(undefined8 *)(param_1 + 0x2b8) = uVar15;
    }
    if (*(char *)(param_1 + 0x19c) == '\0') {
      local_9e8 = *(int *)(param_1 + 0x1a0);
    }
    else if (*(int *)(param_1 + 0x198) == -1) {
      local_9e8 = -1;
    }
    else {
      local_9e8 = *(int *)(*(longlong *)(local_a18 + 0x80) + (longlong)*(int *)(param_1 + 0x198) * 4
                          );
    }
    plVar46 = param_2 + 1;
    lVar37 = (longlong)local_9e8;
    local_868 = plVar46;
    if (*(char *)(lVar37 + param_2[4]) == '\0') {
      FUN_14060c680(plVar46);
    }
    puVar31 = (undefined8 *)(lVar37 * 0x30 + *plVar46);
    local_388 = *puVar31;
    uStack_380 = puVar31[1];
    _local_378 = *(undefined1 (*) [16])(puVar31 + 2);
    local_368 = *(float *)(puVar31 + 4);
    fStack_364 = *(float *)((longlong)puVar31 + 0x24);
    fStack_360 = *(float *)(puVar31 + 5);
    fStack_35c = *(float *)((longlong)puVar31 + 0x2c);
    cVar25 = *(char *)(param_1 + 0x5bc);
    if (((cVar25 == '\0') || (fVar48 <= 0.0)) && (*(char *)(param_1 + 0x5be) != '\0')) {
      *(undefined1 *)(param_1 + 0x5be) = 0;
      FUN_140954e20(param_1,param_2,&local_3b8,&local_388);
      cVar25 = *(char *)(param_1 + 0x5bc);
    }
    lVar37 = local_a18;
    if (cVar25 == '\0') {
      if (0.0 < fVar48) {
        if ((*(char *)(param_1 + 0x1b0) == '\0') || (*(int *)(param_1 + 0x4a8) < 1)) {
          if (*(int *)(param_1 + 0x188) != 1) {
            local_a48 = &local_388;
            fVar48 = 1.0 / fVar48;
            fVar72 = (*(float *)(param_1 + 0x560) - *(float *)(param_1 + 0x590)) * fVar48;
            fVar73 = (*(float *)(param_1 + 0x564) - *(float *)(param_1 + 0x594)) * fVar48;
            fVar84 = (*(float *)(param_1 + 0x568) - *(float *)(param_1 + 0x598)) * fVar48;
            local_a20 = -fVar84;
            local_a28 = (longlong *)CONCAT44(-fVar73,-fVar72);
            local_9d8 = fVar84;
            pfVar32 = (float *)WorldVectorToSpaceNoScale
                                         (local_798,*(int *)(param_1 + 0x188),&local_a28,&local_3b8)
            ;
            fVar47 = *(float *)(param_1 + 0x5b0);
            fVar60 = *(float *)(param_1 + 0x5b8);
            fVar69 = *pfVar32;
            fVar78 = pfVar32[1];
            fVar76 = pfVar32[2];
            fVar68 = *(float *)(param_1 + 0x16c);
            fVar77 = *(float *)(param_1 + 0x170);
            fVar70 = *(float *)(param_1 + 0x174);
            *(ulonglong *)(param_1 + 0x5b0) = CONCAT44(fVar73,fVar72);
            *(float *)(param_1 + 0x5b8) = local_9d8;
            local_a48 = &local_388;
            local_a20 = (fVar60 - fVar84) * fVar48;
            local_a28 = (longlong *)
                        CONCAT44((*(float *)(param_1 + 0x5b4) - fVar73) * fVar48,
                                 (fVar47 - fVar72) * fVar48);
            pfVar32 = (float *)WorldVectorToSpaceNoScale
                                         (local_78c,*(undefined4 *)(param_1 + 0x188),&local_a28,
                                          &local_3b8);
            lVar37 = *(longlong *)(param_1 + 0x1c8);
            lVar45 = (longlong)*(int *)(param_1 + 0x1d0) * 0x20 + lVar37;
            fVar69 = *(float *)(param_1 + 0x160) * *pfVar32 + fVar69 * fVar68;
            fVar47 = pfVar32[1] * *(float *)(param_1 + 0x164) + fVar77 * fVar78;
            fVar60 = pfVar32[2] * *(float *)(param_1 + 0x168) + fVar76 * fVar70;
            fVar48 = local_a08;
            for (; local_a08 = fVar48, lVar37 != lVar45; lVar37 = lVar37 + 0x20) {
              if (*(char *)((longlong)*(int *)(lVar37 + 4) * 0x40 + *(longlong *)(param_1 + 0x1f8))
                  != '\0') {
                lVar39 = *(longlong *)
                          (*(longlong *)(param_1 + 0x1d8) + (longlong)*(int *)(lVar37 + 4) * 8);
                fVar48 = *(float *)((longlong)*(int *)(lVar39 + 0x38) * 0x60 + 0xc +
                                   *(longlong *)(*(longlong *)(lVar39 + 0x30) + 0x50));
                if (0.0 < fVar48) {
                  if (((0.0001 < ABS(*(float *)(param_1 + 0x178))) ||
                      (0.0001 < ABS(*(float *)(param_1 + 0x17c)))) ||
                     (fVar78 = fVar47, local_9d8 = fVar60, fVar76 = fVar69,
                     0.0001 < ABS(*(float *)(param_1 + 0x180)))) {
                    plVar1 = *(longlong **)(param_1 + 0x178);
                    local_a20 = *(float *)(param_1 + 0x180);
                    fVar76 = -*(float *)(param_1 + 0x178);
                    local_9d8 = -*(float *)(param_1 + 0x180);
                    if ((-*(float *)(param_1 + 0x180) <= fVar60) &&
                       (local_9d8 = local_a20, fVar60 <= local_a20)) {
                      local_9d8 = fVar60;
                    }
                    fVar78 = -*(float *)(param_1 + 0x17c);
                    if ((-*(float *)(param_1 + 0x17c) <= fVar47) &&
                       (local_a28._4_4_ = (float)((ulonglong)plVar1 >> 0x20),
                       fVar78 = local_a28._4_4_, fVar47 <= local_a28._4_4_)) {
                      fVar78 = fVar47;
                    }
                    local_a28 = plVar1;
                    if ((fVar76 <= fVar69) &&
                       (local_a28._0_4_ = SUB84(plVar1,0), bVar3 = fVar69 <= (float)local_a28,
                       fVar76 = (float)local_a28, bVar3)) {
                      fVar76 = fVar69;
                    }
                  }
                  fVar48 = 1.0 / fVar48;
                  local_9d8 = fVar48 * local_9d8;
                  local_9e0 = (int *)CONCAT44(fVar48 * fVar78,fVar48 * fVar76);
                  ImmediatePhysics::FActorHandle::AddForce(lVar39,&local_9e0);
                }
              }
              fVar48 = local_a08;
            }
          }
        }
        else {
          lVar37 = *(longlong *)(param_1 + 0x1c8);
          lVar45 = (longlong)*(int *)(param_1 + 0x1d0) * 0x20 + lVar37;
          for (; lVar37 != lVar45; lVar37 = lVar37 + 0x20) {
            pcVar38 = (char *)((longlong)*(int *)(lVar37 + 4) * 0x40 +
                              *(longlong *)(param_1 + 0x1f8));
            if (*pcVar38 != '\0') {
              uVar29 = *(undefined4 *)(pcVar38 + 0x24);
              uVar12 = *(undefined4 *)(pcVar38 + 0x28);
              lVar39 = *(longlong *)
                        (*(longlong *)(param_1 + 0x1d8) + (longlong)*(int *)(lVar37 + 4) * 8);
              lVar2 = *(longlong *)(*(longlong *)(lVar39 + 0x30) + 0x50);
              lVar34 = (longlong)*(int *)(lVar39 + 0x38) * 0x60;
              *(undefined4 *)(lVar34 + lVar2) = *(undefined4 *)(pcVar38 + 0x20);
              *(undefined4 *)(lVar34 + 4 + lVar2) = uVar29;
              *(undefined4 *)(lVar34 + 8 + lVar2) = uVar12;
              fVar47 = *(float *)(pcVar38 + 0x1c);
              _local_a38 = *(undefined1 (*) [16])(pcVar38 + 0x10);
              if (-1.0 <= fVar47) {
                fVar60 = fVar47;
                if (1.0 <= fVar47) {
                  fVar60 = 1.0;
                }
              }
              else {
                fVar60 = -1.0;
              }
              fVar60 = _guard_xfg_dispatch_icall_nop(fVar60);
              fVar60 = fVar60 + fVar60;
              fVar47 = 1.0 - fVar47 * fVar47;
              if (fVar47 <= 0.0) {
                fVar47 = 0.0;
              }
              if (SQRT(fVar47) < 0.0001) {
                fVar69 = 1.0;
                fVar78 = 0.0;
                fVar47 = 0.0;
              }
              else {
                fVar47 = 1.0 / SQRT(fVar47);
                fVar69 = (float)local_a38._0_4_ * fVar47;
                fVar78 = (float)local_a38._4_4_ * fVar47;
                fVar47 = (float)uStack_a30 * fVar47;
              }
              lVar39 = (longlong)*(int *)(lVar39 + 0x38) * 0x60;
              *(float *)(lVar39 + 0x10 + lVar2) = fVar60 * fVar69;
              *(float *)(lVar39 + 0x14 + lVar2) = fVar60 * fVar78;
              *(float *)(lVar39 + 0x18 + lVar2) = fVar60 * fVar47;
            }
          }
          FCSPose<FCompactHeapPose>::Empty(param_1 + 0x4a0);
          plVar46 = local_868;
        }
        puVar36 = *(undefined4 **)(param_1 + 0x1c8);
        puVar44 = puVar36 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
        for (; puVar36 != puVar44; puVar36 = puVar36 + 8) {
          iVar30 = puVar36[1];
          if (*(char *)((longlong)iVar30 * 0x40 + *(longlong *)(param_1 + 0x1f8)) == '\0') {
            pfVar32 = (float *)FUN_140611730(plVar46,*puVar36);
            fVar68 = fRam0000000146863be8;
            fVar76 = fRam0000000146863be4;
            fVar78 = _DAT_146863be0;
            fVar69 = fRam0000000146863b68;
            fVar60 = fRam0000000146863b64;
            fVar47 = _DAT_146863b60;
            iVar27 = *(int *)(param_1 + 0x188);
            if (iVar27 == 0) {
LAB_140952795:
              local_298 = *(undefined8 *)pfVar32;
              uStack_290 = *(longlong *)(pfVar32 + 2);
              local_288 = *(undefined1 (*) [16])(pfVar32 + 4);
              local_278 = *(undefined8 *)(pfVar32 + 8);
              uStack_270 = *(undefined8 *)(pfVar32 + 10);
            }
            else if (iVar27 == 1) {
              auVar52._4_4_ = fStack_394;
              auVar52._0_4_ = local_398;
              auVar52._8_4_ = fStack_390;
              auVar52._12_4_ = fStack_38c;
              local_298 = 0;
              uStack_290 = (ulonglong)(uint)fRam0000000146863b6c << 0x20;
              local_278 = CONCAT44((uint)fRam0000000146863b64 & uRam0000000146863b74,
                                   (uint)_DAT_146863b60 & _DAT_146863b70);
              uStack_270 = CONCAT44((uint)fRam0000000146863b6c & uRam0000000146863b7c,
                                    (uint)fRam0000000146863b68 & uRam0000000146863b78);
              local_288 = ZEXT816(0);
              auVar58 = *(undefined1 (*) [16])(pfVar32 + 8);
              auVar52 = minps(auVar58,auVar52);
              auVar57._4_4_ = -(uint)(auVar52._4_4_ < fRam0000000146863be4);
              auVar57._0_4_ = -(uint)(auVar52._0_4_ < _DAT_146863be0);
              auVar57._8_4_ = -(uint)(auVar52._8_4_ < fRam0000000146863be8);
              auVar57._12_4_ = -(uint)(auVar52._12_4_ < fRam0000000146863bec);
              iVar27 = movmskps(0,auVar57);
              if (iVar27 == 0) {
                fVar47 = *pfVar32;
                fVar60 = pfVar32[1];
                fVar69 = pfVar32[2];
                fVar78 = pfVar32[3];
                fVar76 = local_398 * pfVar32[4];
                fVar68 = fStack_394 * pfVar32[5];
                fVar77 = fStack_390 * pfVar32[6];
                fVar70 = fStack_38c * pfVar32[7];
                local_278 = CONCAT44(fStack_394 * auVar58._4_4_,local_398 * auVar58._0_4_);
                uStack_270 = CONCAT44(fStack_38c * auVar58._12_4_,fStack_390 * auVar58._8_4_);
                local_298 = CONCAT44((float)local_3b8 * fVar69 * fRam0000000146863ba4 +
                                     uStack_3b0._4_4_ * fVar60 +
                                     local_3b8._4_4_ * fVar78 * fRam0000000146863b94 +
                                     (float)uStack_3b0 * fVar47 * fRam0000000146863b84,
                                     (float)local_3b8 * fVar78 * _DAT_146863ba0 +
                                     uStack_3b0._4_4_ * fVar47 +
                                     local_3b8._4_4_ * fVar69 * _DAT_146863b90 +
                                     (float)uStack_3b0 * fVar60 * _DAT_146863b80);
                uStack_290 = CONCAT44((float)local_3b8 * fVar47 * fRam0000000146863bac +
                                      uStack_3b0._4_4_ * fVar78 +
                                      local_3b8._4_4_ * fVar60 * fRam0000000146863b9c +
                                      (float)uStack_3b0 * fVar69 * fRam0000000146863b8c,
                                      (float)local_3b8 * fVar60 * fRam0000000146863ba8 +
                                      uStack_3b0._4_4_ * fVar69 +
                                      local_3b8._4_4_ * fVar47 * fRam0000000146863b98 +
                                      (float)uStack_3b0 * fVar78 * fRam0000000146863b88);
                fVar47 = fVar77 * local_3b8._4_4_ - fVar68 * (float)uStack_3b0;
                fVar60 = fVar76 * (float)uStack_3b0 - fVar77 * (float)local_3b8;
                fVar69 = fVar68 * (float)local_3b8 - fVar76 * local_3b8._4_4_;
                fVar78 = fVar70 * uStack_3b0._4_4_ - fVar70 * uStack_3b0._4_4_;
                fVar47 = fVar47 + fVar47;
                fVar60 = fVar60 + fVar60;
                fVar69 = fVar69 + fVar69;
                fVar78 = fVar78 + fVar78;
                local_288._0_4_ =
                     (fVar69 * local_3b8._4_4_ - fVar60 * (float)uStack_3b0) +
                     uStack_3b0._4_4_ * fVar47 + fVar76 + local_3a8;
                local_288._4_4_ =
                     (fVar47 * (float)uStack_3b0 - fVar69 * (float)local_3b8) +
                     uStack_3b0._4_4_ * fVar60 + fVar68 + fStack_3a4;
                local_288._8_4_ =
                     (fVar60 * (float)local_3b8 - fVar47 * local_3b8._4_4_) +
                     uStack_3b0._4_4_ * fVar69 + fVar77 + fStack_3a0;
                local_288._12_4_ =
                     (fVar78 * uStack_3b0._4_4_ - fVar78 * uStack_3b0._4_4_) +
                     uStack_3b0._4_4_ * fVar78 + fVar70 + fStack_39c;
              }
              else {
                fVar77 = local_3b8._4_4_ + local_3b8._4_4_;
                fVar70 = (float)uStack_3b0 + (float)uStack_3b0;
                fVar80 = local_398 * auVar58._0_4_;
                fVar81 = fStack_394 * auVar58._4_4_;
                fVar82 = fStack_390 * auVar58._8_4_;
                fVar83 = fStack_38c * auVar58._12_4_;
                fVar72 = (float)local_3b8 * ((float)local_3b8 + (float)local_3b8);
                fVar73 = uStack_3b0._4_4_ * ((float)local_3b8 + (float)local_3b8);
                fStack_434 = (uStack_3b0._4_4_ * fVar70 + (float)local_3b8 * fVar77) * local_398;
                fStack_420 = (fVar73 + local_3b8._4_4_ * fVar70) * fStack_394;
                local_418 = (uStack_3b0._4_4_ * fVar77 + (float)local_3b8 * fVar70) * fStack_390;
                local_428 = fStack_394 * ((float)local_3b8 * fVar77 - uStack_3b0._4_4_ * fVar70);
                fStack_414 = fStack_390 * (local_3b8._4_4_ * fVar70 - fVar73);
                fStack_430 = local_398 * ((float)local_3b8 * fVar70 - uStack_3b0._4_4_ * fVar77);
                local_438 = (float)((uint)((_DAT_146863b60 -
                                           ((float)uStack_3b0 * fVar70 + local_3b8._4_4_ * fVar77))
                                          * local_398) & _DAT_146863b70);
                fStack_424 = (float)((uint)((fRam0000000146863b64 -
                                            ((float)uStack_3b0 * fVar70 + fVar72)) * fStack_394) &
                                    uRam0000000146863b74);
                fStack_410 = (float)((uint)((fRam0000000146863b68 -
                                            (local_3b8._4_4_ * fVar77 + fVar72)) * fStack_390) &
                                    uRam0000000146863b78);
                fStack_42c = (float)((uint)((fRam0000000146863b6c - (fVar72 + fVar72)) * fStack_38c)
                                    & uRam0000000146863b7c);
                local_408 = local_3a8;
                fStack_404 = fStack_3a4;
                fStack_400 = fStack_3a0;
                fStack_3fc = fRam0000000146863b6c;
                fVar77 = *pfVar32;
                fVar70 = pfVar32[1];
                fVar73 = pfVar32[2];
                fVar72 = pfVar32[3];
                fVar87 = fVar70 + fVar70;
                fVar71 = fVar73 + fVar73;
                fVar79 = (fVar77 + fVar77) * fVar77;
                fVar74 = fVar72 * (fVar77 + fVar77);
                fVar84 = pfVar32[8];
                fVar85 = pfVar32[9];
                fVar86 = pfVar32[10];
                fStack_3f4 = (fVar72 * fVar71 + fVar77 * fVar87) * fVar84;
                fStack_3e0 = (fVar74 + fVar70 * fVar71) * fVar85;
                local_3d8 = (fVar72 * fVar87 + fVar77 * fVar71) * fVar86;
                local_3e8 = fVar85 * (fVar77 * fVar87 - fVar72 * fVar71);
                fStack_3d4 = fVar86 * (fVar70 * fVar71 - fVar74);
                fStack_3f0 = fVar84 * (fVar77 * fVar71 - fVar72 * fVar87);
                local_3f8 = (float)((uint)((_DAT_146863b60 - (fVar71 * fVar73 + fVar87 * fVar70)) *
                                          fVar84) & _DAT_146863b70);
                fStack_3e4 = (float)((uint)((fRam0000000146863b64 - (fVar71 * fVar73 + fVar79)) *
                                           fVar85) & uRam0000000146863b74);
                fStack_3d0 = (float)((uint)((fRam0000000146863b68 - (fVar87 * fVar70 + fVar79)) *
                                           fVar86) & uRam0000000146863b78);
                fStack_3ec = (float)((uint)((fRam0000000146863b6c - (fVar79 + fVar79)) *
                                           pfVar32[0xb]) & uRam0000000146863b7c);
                local_3c8 = pfVar32[4];
                fStack_3c4 = pfVar32[5];
                fStack_3c0 = pfVar32[6];
                fStack_3bc = fRam0000000146863b6c;
                local_858 = fStack_3f4 * local_428 + local_3f8 * local_438 + fStack_3f0 * local_418
                            + fStack_3ec * local_3a8;
                fStack_854 = fStack_3f4 * fStack_424 + local_3f8 * fStack_434 +
                             fStack_3f0 * fStack_414 + fStack_3ec * fStack_3a4;
                fStack_850 = fStack_3f4 * fStack_420 + local_3f8 * fStack_430 +
                             fStack_3f0 * fStack_410 + fStack_3ec * fStack_3a0;
                fStack_84c = fStack_3f4 * fStack_42c + local_3f8 * fStack_42c +
                             fStack_3f0 * fStack_42c + fStack_3ec * fRam0000000146863b6c;
                local_848 = fStack_3e4 * local_428 + local_3e8 * local_438 + fStack_3e0 * local_418
                            + fStack_3ec * local_3a8;
                fStack_844 = fStack_3e4 * fStack_424 + local_3e8 * fStack_434 +
                             fStack_3e0 * fStack_414 + fStack_3ec * fStack_3a4;
                fStack_840 = fStack_3e4 * fStack_420 + local_3e8 * fStack_430 +
                             fStack_3e0 * fStack_410 + fStack_3ec * fStack_3a0;
                fStack_83c = fStack_3e4 * fStack_42c + local_3e8 * fStack_42c +
                             fStack_3e0 * fStack_42c + fStack_3ec * fRam0000000146863b6c;
                local_838 = fStack_3d4 * local_428 + local_3d8 * local_438 + fStack_3d0 * local_418
                            + fStack_3ec * local_3a8;
                fStack_834 = fStack_3d4 * fStack_424 + local_3d8 * fStack_434 +
                             fStack_3d0 * fStack_414 + fStack_3ec * fStack_3a4;
                fStack_830 = fStack_3d4 * fStack_420 + local_3d8 * fStack_430 +
                             fStack_3d0 * fStack_410 + fStack_3ec * fStack_3a0;
                fStack_82c = fStack_3d4 * fStack_42c + local_3d8 * fStack_42c +
                             fStack_3d0 * fStack_42c + fStack_3ec * fRam0000000146863b6c;
                local_828 = fStack_3c4 * local_428 + local_3c8 * local_438 + fStack_3c0 * local_418
                            + fRam0000000146863b6c * local_3a8;
                fStack_824 = fStack_3c4 * fStack_424 + local_3c8 * fStack_434 +
                             fStack_3c0 * fStack_414 + fRam0000000146863b6c * fStack_3a4;
                fStack_820 = fStack_3c4 * fStack_420 + local_3c8 * fStack_430 +
                             fStack_3c0 * fStack_410 + fRam0000000146863b6c * fStack_3a0;
                fStack_81c = fStack_3c4 * fStack_42c + local_3c8 * fStack_42c +
                             fStack_3c0 * fStack_42c + fRam0000000146863b6c * fRam0000000146863b6c;
                fStack_41c = fStack_42c;
                fStack_40c = fStack_42c;
                fStack_3dc = fStack_3ec;
                fStack_3cc = fStack_3ec;
                FMatrix::RemoveScaling(&local_858);
                fVar47 = (float)(-(uint)(fVar78 <= fVar80) & (_DAT_146863bd0 ^ (uint)fVar47) ^
                                _DAT_146863bd0);
                fVar60 = (float)(-(uint)(fVar76 <= fVar81) & (uRam0000000146863bd4 ^ (uint)fVar60) ^
                                uRam0000000146863bd4);
                fVar69 = (float)(-(uint)(fVar68 <= fVar82) & (uRam0000000146863bd8 ^ (uint)fVar69) ^
                                uRam0000000146863bd8);
                pfVar32 = (float *)FMatrix::GetScaledAxis(&local_858,local_780,1);
                local_858 = fVar47 * *pfVar32;
                fStack_854 = fVar47 * pfVar32[1];
                fStack_850 = fVar47 * pfVar32[2];
                pfVar32 = (float *)FMatrix::GetScaledAxis(&local_858,local_774,2);
                local_848 = fVar60 * *pfVar32;
                fStack_844 = fVar60 * pfVar32[1];
                fStack_840 = fVar60 * pfVar32[2];
                fStack_834 = fStack_834 * fVar69;
                fStack_830 = fStack_830 * fVar69;
                local_838 = local_838 * fVar69;
                FQuat::FQuat(&local_9f8,&local_858);
                local_a18 = CONCAT44(local_a18._4_4_,0x322bcc77);
                local_278 = CONCAT44(fVar81,fVar80);
                uStack_270 = CONCAT44(fVar83,fVar82);
                auVar66._0_4_ = local_9f8 * local_9f8 + fStack_9f0 * fStack_9f0;
                auVar66._4_4_ = fStack_9f4 * fStack_9f4 + fStack_9ec * fStack_9ec;
                auVar66._8_4_ = fStack_9f0 * fStack_9f0 + local_9f8 * local_9f8;
                auVar66._12_4_ = fStack_9ec * fStack_9ec + fStack_9f4 * fStack_9f4;
                fVar76 = auVar66._4_4_ + auVar66._0_4_;
                fVar68 = auVar66._8_4_ + auVar66._4_4_;
                fVar77 = auVar66._12_4_ + auVar66._8_4_;
                fVar70 = auVar66._0_4_ + auVar66._12_4_;
                auVar58._4_4_ = fVar68;
                auVar58._0_4_ = fVar76;
                auVar58._8_4_ = fVar77;
                auVar58._12_4_ = fVar70;
                auVar58 = rsqrtps(auVar66,auVar58);
                fVar47 = auVar58._0_4_;
                fVar60 = auVar58._4_4_;
                fVar69 = auVar58._8_4_;
                fVar78 = auVar58._12_4_;
                fVar47 = (_DAT_146863bc0 - fVar47 * fVar47 * fVar76 * _DAT_146863bc0) * fVar47 +
                         fVar47;
                fVar60 = (fRam0000000146863bc4 - fVar60 * fVar60 * fVar68 * fRam0000000146863bc4) *
                         fVar60 + fVar60;
                fVar69 = (fRam0000000146863bc8 - fVar69 * fVar69 * fVar77 * fRam0000000146863bc8) *
                         fVar69 + fVar69;
                fVar78 = (fRam0000000146863bcc - fVar78 * fVar78 * fVar70 * fRam0000000146863bcc) *
                         fVar78 + fVar78;
                local_9f8 = (float)(((uint)(((_DAT_146863bc0 -
                                             fVar47 * fVar47 * fVar76 * _DAT_146863bc0) * fVar47 +
                                            fVar47) * local_9f8) ^ _DAT_146863bb0) &
                                    -(uint)(1e-08 <= fVar76) ^ _DAT_146863bb0);
                fStack_9f4 = (float)(((uint)(((fRam0000000146863bc4 -
                                              fVar60 * fVar60 * fVar68 * fRam0000000146863bc4) *
                                              fVar60 + fVar60) * fStack_9f4) ^ uRam0000000146863bb4)
                                     & -(uint)(1e-08 <= fVar68) ^ uRam0000000146863bb4);
                fStack_9f0 = (float)(((uint)(((fRam0000000146863bc8 -
                                              fVar69 * fVar69 * fVar77 * fRam0000000146863bc8) *
                                              fVar69 + fVar69) * fStack_9f0) ^ uRam0000000146863bb8)
                                     & -(uint)(1e-08 <= fVar77) ^ uRam0000000146863bb8);
                fStack_9ec = (float)(((uint)(((fRam0000000146863bcc -
                                              fVar78 * fVar78 * fVar70 * fRam0000000146863bcc) *
                                              fVar78 + fVar78) * fStack_9ec) ^ uRam0000000146863bbc)
                                     & -(uint)(1e-08 <= fVar70) ^ uRam0000000146863bbc);
                local_288._4_4_ = fStack_824;
                local_288._0_4_ = local_828;
                local_288._8_4_ = fStack_820;
                local_288._12_4_ = 0.0;
                local_298 = CONCAT44(fStack_9f4,local_9f8);
                uStack_290 = CONCAT44(fStack_9ec,fStack_9f0);
              }
            }
            else {
              if (iVar27 != 2) goto LAB_140952795;
              FUN_14162bcf0(pfVar32,&local_298,&local_388);
            }
            FUN_140957900(*(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar30 * 8),
                          &local_298);
          }
        }
        FUN_140958f30(param_1,&local_3b8,&local_388);
        local_a48 = &local_388;
        WorldVectorToSpaceNoScale
                  (&local_a28,*(undefined4 *)(param_1 + 0x188),param_1 + 0x278,&local_3b8);
        uVar28 = -((int)ROUND(-0.5 - (fVar48 * 29.999998 + fVar48 * 29.999998)) >> 1);
        if ((int)uVar28 < 1) {
          uVar42 = 1;
        }
        else {
          uVar42 = 4;
          if ((int)uVar28 < 4) {
            uVar42 = uVar28;
          }
        }
        fVar48 = fVar48 / (float)(int)uVar42;
        if (0 < (int)uVar42) {
          if (0.033 <= fVar48) {
            fVar48 = 0.033;
          }
          uVar40 = (ulonglong)uVar42;
          do {
            lVar37 = *(longlong *)(param_1 + 0x1c0);
            if (0.0 < fVar48) {
              *(int *)(lVar37 + 0x180) = *(int *)(lVar37 + 0x180) + 1;
              ImmediatePhysics::FSimulation::ConstructSolverBodies(lVar37);
              if (*(char *)(lVar37 + 0x228) != '\0') {
                FUN_1409568f0(lVar37);
              }
              ImmediatePhysics::FSimulation::GenerateContacts(lVar37);
              ImmediatePhysics::FSimulation::BatchConstraints(lVar37);
              ImmediatePhysics::FSimulation::PrepareConstraints(lVar37);
              ImmediatePhysics::FSimulation::SolveAndIntegrate(lVar37);
              ImmediatePhysics::FLinearBlockAllocator::Reset(lVar37 + 0x40);
            }
            uVar40 = uVar40 - 1;
          } while (uVar40 != 0);
        }
      }
    }
    else {
      if ((*(char *)(param_1 + 0x1b0) != '\0') && (0 < *(int *)(param_1 + 0x4a8))) {
        piVar43 = *(int **)(param_1 + 0x1c8);
        piVar41 = piVar43 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
        local_9e0 = piVar41;
        if (piVar43 != piVar41) {
          do {
            pcVar38 = (char *)((longlong)piVar43[1] * 0x40 + *(longlong *)(param_1 + 0x1f8));
            if (*pcVar38 != '\0') {
              iVar30 = *piVar43;
              iVar27 = *(int *)(*(longlong *)(param_1 + 0x3f8) +
                               (longlong)
                               *(int *)(*(longlong *)(lVar37 + 0x60) + (longlong)iVar30 * 4) * 4);
              if (iVar27 != -1) {
                if (*(char *)((longlong)iVar27 + *(longlong *)(param_1 + 0x4b8)) == '\0') {
                  FUN_14094b350(param_1 + 0x4a0);
                }
                plVar46 = local_868;
                puVar31 = (undefined8 *)((longlong)iVar27 * 0x30 + *(longlong *)(param_1 + 0x4a0));
                local_208 = *puVar31;
                uStack_200 = puVar31[1];
                local_1f8 = puVar31[2];
                uStack_1f0 = puVar31[3];
                local_1e8 = puVar31[4];
                uStack_1e0 = puVar31[5];
                pfVar32 = (float *)FUN_140611730(local_868,iVar30);
                fVar60 = fRam0000000146863b68;
                fVar47 = fRam0000000146863b64;
                fVar48 = _DAT_146863b60;
                local_1a8 = *pfVar32;
                fStack_1a4 = pfVar32[1];
                fStack_1a0 = pfVar32[2];
                fStack_19c = pfVar32[3];
                local_198 = pfVar32[4];
                fStack_194 = pfVar32[5];
                fStack_190 = pfVar32[6];
                fStack_18c = pfVar32[7];
                local_188 = pfVar32[8];
                fStack_184 = pfVar32[9];
                fStack_180 = pfVar32[10];
                fStack_17c = pfVar32[0xb];
                iVar30 = *(int *)(param_1 + 0x188);
                if (iVar30 == 0) {
LAB_1409500f1:
                  local_2f8 = local_208;
                  uStack_2f0 = uStack_200;
                  local_2d8 = local_1e8;
                  uStack_2d0 = uStack_1e0;
                  uStack_2e0 = uStack_1f0;
                  local_2e8 = (undefined1  [8])local_1f8;
LAB_14095011b:
                  uVar29 = SUB84(pfVar32,0);
                  local_a38._4_4_ = fRam0000000146863bc4;
                  local_a38._0_4_ = _DAT_146863bc0;
                  uStack_a30._4_4_ = fRam0000000146863bcc;
                  uStack_a30._0_4_ = fRam0000000146863bc8;
LAB_140950127:
                }
                else {
                  if (iVar30 != 1) {
                    if (iVar30 != 2) goto LAB_1409500f1;
                    pfVar32 = (float *)FUN_14162bcf0(&local_208,&local_2f8,&local_388);
                    goto LAB_14095011b;
                  }
                  uStack_a30 = uStack_1e0;
                  local_a38 = (undefined1  [8])local_1e8;
                  fVar69 = (float)local_1e8;
                  fVar78 = (float)((ulonglong)local_1e8 >> 0x20);
                  fVar76 = (float)uStack_1e0;
                  fVar68 = (float)((ulonglong)uStack_1e0 >> 0x20);
                  auVar18._4_4_ = fStack_394;
                  auVar18._0_4_ = local_398;
                  auVar18._8_4_ = fStack_390;
                  auVar18._12_4_ = fStack_38c;
                  local_2f8 = 0;
                  uStack_2f0 = (ulonglong)(uint)fRam0000000146863b6c << 0x20;
                  local_2d8 = CONCAT44((uint)fRam0000000146863b64 & uRam0000000146863b74,
                                       (uint)_DAT_146863b60 & _DAT_146863b70);
                  uStack_2d0 = CONCAT44((uint)fRam0000000146863b6c & uRam0000000146863b7c,
                                        (uint)fRam0000000146863b68 & uRam0000000146863b78);
                  auVar58 = minps(_local_a38,auVar18);
                  _local_2e8 = ZEXT816(0);
                  auVar49._4_4_ = -(uint)(auVar58._4_4_ < fRam0000000146863be4);
                  auVar49._0_4_ = -(uint)(auVar58._0_4_ < _DAT_146863be0);
                  auVar49._8_4_ = -(uint)(auVar58._8_4_ < fRam0000000146863be8);
                  auVar49._12_4_ = -(uint)(auVar58._12_4_ < fRam0000000146863bec);
                  iVar30 = movmskps((int)pfVar32,auVar49);
                  local_a18 = CONCAT44(fRam0000000146863be4,_DAT_146863be0);
                  fStack_a10 = fRam0000000146863be8;
                  fStack_a0c = fRam0000000146863bec;
                  if (iVar30 != 0) {
                    fVar77 = local_3b8._4_4_ + local_3b8._4_4_;
                    fVar70 = (float)uStack_3b0 + (float)uStack_3b0;
                    fVar84 = fVar69 * local_398;
                    fVar85 = fVar78 * fStack_394;
                    fVar86 = fVar76 * fStack_390;
                    fVar87 = fVar68 * fStack_38c;
                    fVar72 = (float)local_3b8 * ((float)local_3b8 + (float)local_3b8);
                    fVar73 = uStack_3b0._4_4_ * ((float)local_3b8 + (float)local_3b8);
                    fStack_674 = (uStack_3b0._4_4_ * fVar70 + fVar77 * (float)local_3b8) * local_398
                    ;
                    fStack_660 = (fVar73 + fVar70 * local_3b8._4_4_) * fStack_394;
                    local_658 = (uStack_3b0._4_4_ * fVar77 + fVar70 * (float)local_3b8) * fStack_390
                    ;
                    local_668 = fStack_394 * (fVar77 * (float)local_3b8 - uStack_3b0._4_4_ * fVar70)
                    ;
                    fStack_654 = fStack_390 * (fVar70 * local_3b8._4_4_ - fVar73);
                    fStack_670 = local_398 * (fVar70 * (float)local_3b8 - uStack_3b0._4_4_ * fVar77)
                    ;
                    local_678 = (float)((uint)((_DAT_146863b60 -
                                               ((float)uStack_3b0 * fVar70 +
                                               local_3b8._4_4_ * fVar77)) * local_398) &
                                       _DAT_146863b70);
                    fStack_664 = (float)((uint)((fRam0000000146863b64 -
                                                ((float)uStack_3b0 * fVar70 + fVar72)) * fStack_394)
                                        & uRam0000000146863b74);
                    fStack_650 = (float)((uint)((fRam0000000146863b68 -
                                                (local_3b8._4_4_ * fVar77 + fVar72)) * fStack_390) &
                                        uRam0000000146863b78);
                    fStack_66c = (float)((uint)((fRam0000000146863b6c - (fVar72 + fVar72)) *
                                               fStack_38c) & uRam0000000146863b7c);
                    fVar77 = local_208._4_4_ + local_208._4_4_;
                    fVar70 = (float)uStack_200 + (float)uStack_200;
                    fVar72 = (float)local_208 * ((float)local_208 + (float)local_208);
                    fVar73 = uStack_200._4_4_ * ((float)local_208 + (float)local_208);
                    local_648 = local_3a8;
                    fStack_644 = fStack_3a4;
                    fStack_640 = fStack_3a0;
                    fStack_63c = fRam0000000146863b6c;
                    fStack_634 = (uStack_200._4_4_ * fVar70 + (float)local_208 * fVar77) * fVar69;
                    fStack_620 = (fVar73 + local_208._4_4_ * fVar70) * fVar78;
                    local_618 = (uStack_200._4_4_ * fVar77 + (float)local_208 * fVar70) * fVar76;
                    local_628 = fVar78 * ((float)local_208 * fVar77 - uStack_200._4_4_ * fVar70);
                    fStack_614 = fVar76 * (local_208._4_4_ * fVar70 - fVar73);
                    fStack_630 = fVar69 * ((float)local_208 * fVar70 - uStack_200._4_4_ * fVar77);
                    local_638 = (float)((uint)((_DAT_146863b60 -
                                               ((float)uStack_200 * fVar70 +
                                               local_208._4_4_ * fVar77)) * fVar69) & _DAT_146863b70
                                       );
                    fStack_624 = (float)((uint)((fRam0000000146863b64 -
                                                ((float)uStack_200 * fVar70 + fVar72)) * fVar78) &
                                        uRam0000000146863b74);
                    fStack_610 = (float)((uint)((fRam0000000146863b68 -
                                                (local_208._4_4_ * fVar77 + fVar72)) * fVar76) &
                                        uRam0000000146863b78);
                    fStack_62c = (float)((uint)((fRam0000000146863b6c - (fVar72 + fVar72)) * fVar68)
                                        & uRam0000000146863b7c);
                    local_608 = (float)local_1f8;
                    fStack_604 = local_1f8._4_4_;
                    fStack_600 = (float)uStack_1f0;
                    fStack_5fc = fRam0000000146863b6c;
                    local_968 = fStack_634 * local_668 + local_638 * local_678 +
                                fStack_630 * local_658 + fStack_62c * local_3a8;
                    fStack_964 = fStack_634 * fStack_664 + local_638 * fStack_674 +
                                 fStack_630 * fStack_654 + fStack_62c * fStack_3a4;
                    fStack_960 = fStack_634 * fStack_660 + local_638 * fStack_670 +
                                 fStack_630 * fStack_650 + fStack_62c * fStack_3a0;
                    fStack_95c = fStack_634 * fStack_66c + local_638 * fStack_66c +
                                 fStack_630 * fStack_66c + fStack_62c * fRam0000000146863b6c;
                    local_958 = fStack_624 * local_668 + local_628 * local_678 +
                                fStack_620 * local_658 + fStack_62c * local_3a8;
                    fStack_954 = fStack_624 * fStack_664 + local_628 * fStack_674 +
                                 fStack_620 * fStack_654 + fStack_62c * fStack_3a4;
                    fStack_950 = fStack_624 * fStack_660 + local_628 * fStack_670 +
                                 fStack_620 * fStack_650 + fStack_62c * fStack_3a0;
                    fStack_94c = fStack_624 * fStack_66c + local_628 * fStack_66c +
                                 fStack_620 * fStack_66c + fStack_62c * fRam0000000146863b6c;
                    local_948 = fStack_614 * local_668 + local_618 * local_678 +
                                fStack_610 * local_658 + fStack_62c * local_3a8;
                    fStack_944 = fStack_614 * fStack_664 + local_618 * fStack_674 +
                                 fStack_610 * fStack_654 + fStack_62c * fStack_3a4;
                    fStack_940 = fStack_614 * fStack_660 + local_618 * fStack_670 +
                                 fStack_610 * fStack_650 + fStack_62c * fStack_3a0;
                    fStack_93c = fStack_614 * fStack_66c + local_618 * fStack_66c +
                                 fStack_610 * fStack_66c + fStack_62c * fRam0000000146863b6c;
                    local_938 = local_1f8._4_4_ * local_668 + (float)local_1f8 * local_678 +
                                (float)uStack_1f0 * local_658 + fRam0000000146863b6c * local_3a8;
                    fStack_934 = local_1f8._4_4_ * fStack_664 + (float)local_1f8 * fStack_674 +
                                 (float)uStack_1f0 * fStack_654 + fRam0000000146863b6c * fStack_3a4;
                    fStack_930 = local_1f8._4_4_ * fStack_660 + (float)local_1f8 * fStack_670 +
                                 (float)uStack_1f0 * fStack_650 + fRam0000000146863b6c * fStack_3a0;
                    fStack_92c = local_1f8._4_4_ * fStack_66c + (float)local_1f8 * fStack_66c +
                                 (float)uStack_1f0 * fStack_66c +
                                 fRam0000000146863b6c * fRam0000000146863b6c;
                    fStack_65c = fStack_66c;
                    fStack_64c = fStack_66c;
                    fStack_61c = fStack_62c;
                    fStack_60c = fStack_62c;
                    FMatrix::RemoveScaling(&local_968);
                    fVar48 = (float)(-(uint)((float)local_a18 <= fVar84) &
                                     (_DAT_146863bd0 ^ (uint)fVar48) ^ _DAT_146863bd0);
                    fVar47 = (float)(-(uint)(local_a18._4_4_ <= fVar85) &
                                     (uRam0000000146863bd4 ^ (uint)fVar47) ^ uRam0000000146863bd4);
                    fVar60 = (float)(-(uint)(fStack_a10 <= fVar86) &
                                     (uRam0000000146863bd8 ^ (uint)fVar60) ^ uRam0000000146863bd8);
                    local_968 = local_968 * fVar48;
                    fStack_964 = fStack_964 * fVar48;
                    fStack_960 = fStack_960 * fVar48;
                    fStack_954 = fStack_954 * fVar47;
                    fStack_950 = fStack_950 * fVar47;
                    local_958 = local_958 * fVar47;
                    fStack_944 = fStack_944 * fVar60;
                    fStack_940 = fStack_940 * fVar60;
                    local_948 = local_948 * fVar60;
                    uVar29 = FQuat::FQuat(&local_9b8,&local_968);
                    local_a18 = CONCAT44(local_a18._4_4_,0x322bcc77);
                    local_a38._4_4_ = fRam0000000146863bc4;
                    local_a38._0_4_ = _DAT_146863bc0;
                    uStack_a30._0_4_ = fRam0000000146863bc8;
                    uStack_a30._4_4_ = fRam0000000146863bcc;
                    local_2d8 = CONCAT44(fVar85,fVar84);
                    uStack_2d0 = CONCAT44(fVar87,fVar86);
                    auVar61._0_4_ = local_9b8 * local_9b8 + fStack_9b0 * fStack_9b0;
                    auVar61._4_4_ = fStack_9b4 * fStack_9b4 + fStack_9ac * fStack_9ac;
                    auVar61._8_4_ = fStack_9b0 * fStack_9b0 + local_9b8 * local_9b8;
                    auVar61._12_4_ = fStack_9ac * fStack_9ac + fStack_9b4 * fStack_9b4;
                    fVar78 = auVar61._4_4_ + auVar61._0_4_;
                    fVar76 = auVar61._8_4_ + auVar61._4_4_;
                    fVar68 = auVar61._12_4_ + auVar61._8_4_;
                    fVar77 = auVar61._0_4_ + auVar61._12_4_;
                    auVar10._4_4_ = fVar76;
                    auVar10._0_4_ = fVar78;
                    auVar10._8_4_ = fVar68;
                    auVar10._12_4_ = fVar77;
                    auVar58 = rsqrtps(auVar61,auVar10);
                    fVar48 = auVar58._0_4_;
                    fVar47 = auVar58._4_4_;
                    fVar60 = auVar58._8_4_;
                    fVar69 = auVar58._12_4_;
                    fVar48 = (_DAT_146863bc0 - fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                             fVar48;
                    fVar47 = (fRam0000000146863bc4 - fVar47 * fVar47 * fVar76 * fRam0000000146863bc4
                             ) * fVar47 + fVar47;
                    fVar60 = (fRam0000000146863bc8 - fVar60 * fVar60 * fVar68 * fRam0000000146863bc8
                             ) * fVar60 + fVar60;
                    fVar69 = (fRam0000000146863bcc - fVar69 * fVar69 * fVar77 * fRam0000000146863bcc
                             ) * fVar69 + fVar69;
                    local_2e8._4_4_ = fStack_934;
                    local_2e8._0_4_ = local_938;
                    uStack_2e0._0_4_ = fStack_930;
                    local_9b8 = (float)(((uint)(((_DAT_146863bc0 -
                                                 fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48
                                                + fVar48) * local_9b8) ^ _DAT_146863bb0) &
                                        -(uint)(1e-08 <= fVar78) ^ _DAT_146863bb0);
                    fStack_9b4 = (float)(((uint)(((fRam0000000146863bc4 -
                                                  fVar47 * fVar47 * fVar76 * fRam0000000146863bc4) *
                                                  fVar47 + fVar47) * fStack_9b4) ^
                                         uRam0000000146863bb4) & -(uint)(1e-08 <= fVar76) ^
                                        uRam0000000146863bb4);
                    fStack_9b0 = (float)(((uint)(((fRam0000000146863bc8 -
                                                  fVar60 * fVar60 * fVar68 * fRam0000000146863bc8) *
                                                  fVar60 + fVar60) * fStack_9b0) ^
                                         uRam0000000146863bb8) & -(uint)(1e-08 <= fVar68) ^
                                        uRam0000000146863bb8);
                    fStack_9ac = (float)(((uint)(((fRam0000000146863bcc -
                                                  fVar69 * fVar69 * fVar77 * fRam0000000146863bcc) *
                                                  fVar69 + fVar69) * fStack_9ac) ^
                                         uRam0000000146863bbc) & -(uint)(1e-08 <= fVar77) ^
                                        uRam0000000146863bbc);
                    local_2f8 = CONCAT44(fStack_9b4,local_9b8);
                    uStack_2f0 = CONCAT44(fStack_9ac,fStack_9b0);
                    uStack_2e0._4_4_ = 0;
                    goto LAB_140950127;
                  }
                  fVar77 = (float)local_1f8 * local_398;
                  fVar70 = local_1f8._4_4_ * fStack_394;
                  fVar73 = (float)uStack_1f0 * fStack_390;
                  fVar72 = uStack_1f0._4_4_ * fStack_38c;
                  local_2d8 = CONCAT44(fVar78 * fStack_394,fVar69 * local_398);
                  uStack_2d0 = CONCAT44(fVar68 * fStack_38c,fVar76 * fStack_390);
                  local_2f8 = CONCAT44((float)uStack_200 * (float)local_3b8 * fRam0000000146863ba4 +
                                       local_208._4_4_ * uStack_3b0._4_4_ +
                                       uStack_200._4_4_ * local_3b8._4_4_ * fRam0000000146863b94 +
                                       (float)local_208 * (float)uStack_3b0 * fRam0000000146863b84,
                                       uStack_200._4_4_ * (float)local_3b8 * _DAT_146863ba0 +
                                       (float)local_208 * uStack_3b0._4_4_ +
                                       (float)uStack_200 * local_3b8._4_4_ * _DAT_146863b90 +
                                       local_208._4_4_ * (float)uStack_3b0 * _DAT_146863b80);
                  uStack_2f0 = CONCAT44((float)local_208 * (float)local_3b8 * fRam0000000146863bac +
                                        uStack_200._4_4_ * uStack_3b0._4_4_ +
                                        local_208._4_4_ * local_3b8._4_4_ * fRam0000000146863b9c +
                                        (float)uStack_200 * (float)uStack_3b0 * fRam0000000146863b8c
                                        ,local_208._4_4_ * (float)local_3b8 * fRam0000000146863ba8 +
                                         (float)uStack_200 * uStack_3b0._4_4_ +
                                         (float)local_208 * local_3b8._4_4_ * fRam0000000146863b98 +
                                         uStack_200._4_4_ * (float)uStack_3b0 * fRam0000000146863b88
                                       );
                  fVar48 = fVar73 * local_3b8._4_4_ - fVar70 * (float)uStack_3b0;
                  fVar47 = fVar77 * (float)uStack_3b0 - fVar73 * (float)local_3b8;
                  fVar60 = fVar70 * (float)local_3b8 - fVar77 * local_3b8._4_4_;
                  fVar69 = fVar72 * uStack_3b0._4_4_ - fVar72 * uStack_3b0._4_4_;
                  fVar48 = fVar48 + fVar48;
                  fVar47 = fVar47 + fVar47;
                  fVar60 = fVar60 + fVar60;
                  fVar69 = fVar69 + fVar69;
                  local_a38._4_4_ = fRam0000000146863bc4;
                  local_a38._0_4_ = _DAT_146863bc0;
                  uStack_a30._4_4_ = fRam0000000146863bcc;
                  uStack_a30._0_4_ = fRam0000000146863bc8;
                  local_2e8._4_4_ =
                       (fVar48 * (float)uStack_3b0 - fVar60 * (float)local_3b8) +
                       uStack_3b0._4_4_ * fVar47 + fVar70 + fStack_3a4;
                  local_2e8._0_4_ =
                       (fVar60 * local_3b8._4_4_ - fVar47 * (float)uStack_3b0) +
                       uStack_3b0._4_4_ * fVar48 + fVar77 + local_3a8;
                  uStack_2e0._0_4_ =
                       (fVar47 * (float)local_3b8 - fVar48 * local_3b8._4_4_) +
                       uStack_3b0._4_4_ * fVar60 + fVar73 + fStack_3a0;
                  uStack_2e0._4_4_ =
                       (fVar69 * uStack_3b0._4_4_ - fVar69 * uStack_3b0._4_4_) +
                       uStack_3b0._4_4_ * fVar69 + fVar72 + fStack_39c;
                  uVar29 = 0;
                }
                fVar60 = fRam0000000146863b68;
                fVar47 = fRam0000000146863b64;
                fVar48 = _DAT_146863b60;
                iVar30 = *(int *)(param_1 + 0x188);
                fVar69 = local_198;
                fVar78 = fStack_194;
                fVar76 = fStack_190;
                fVar68 = fStack_18c;
                fVar77 = local_1a8;
                fVar70 = fStack_1a4;
                fVar73 = fStack_1a0;
                fVar72 = fStack_19c;
                fVar84 = local_188;
                fVar85 = fStack_184;
                fVar86 = fStack_180;
                fVar87 = fStack_17c;
                if (iVar30 == 0) {
LAB_14095069d:
                  fStack_29c = fVar87;
                  fStack_2a0 = fVar86;
                  fStack_2a4 = fVar85;
                  local_2a8 = fVar84;
                  fStack_2bc = fVar72;
                  fStack_2c0 = fVar73;
                  fStack_2c4 = fVar70;
                  local_2c8 = fVar77;
                  local_2b8 = CONCAT44(fVar78,fVar69);
                  uStack_2b0 = CONCAT44(fVar68,fVar76);
                }
                else {
                  if (iVar30 == 1) {
                    local_2c8 = 0.0;
                    fStack_2c4 = 0.0;
                    fStack_2c0 = 0.0;
                    fStack_2bc = fRam0000000146863b6c;
                    local_2a8 = (float)((uint)_DAT_146863b60 & _DAT_146863b70);
                    fStack_2a4 = (float)((uint)fRam0000000146863b64 & uRam0000000146863b74);
                    fStack_2a0 = (float)((uint)fRam0000000146863b68 & uRam0000000146863b78);
                    fStack_29c = (float)((uint)fRam0000000146863b6c & uRam0000000146863b7c);
                    auVar50._4_4_ = fStack_184;
                    auVar50._0_4_ = local_188;
                    auVar50._8_4_ = fStack_180;
                    auVar50._12_4_ = fStack_17c;
                    auVar11._4_4_ = fStack_394;
                    auVar11._0_4_ = local_398;
                    auVar11._8_4_ = fStack_390;
                    auVar11._12_4_ = fStack_38c;
                    auVar58 = minps(auVar50,auVar11);
                    local_2b8 = 0;
                    uStack_2b0 = 0;
                    auVar51._4_4_ = -(uint)(auVar58._4_4_ < fRam0000000146863be4);
                    auVar51._0_4_ = -(uint)(auVar58._0_4_ < _DAT_146863be0);
                    auVar51._8_4_ = -(uint)(auVar58._8_4_ < fRam0000000146863be8);
                    auVar51._12_4_ = -(uint)(auVar58._12_4_ < fRam0000000146863bec);
                    iVar30 = movmskps(uVar29,auVar51);
                    local_a18 = CONCAT44(fRam0000000146863be4,_DAT_146863be0);
                    fStack_a10 = fRam0000000146863be8;
                    fStack_a0c = fRam0000000146863bec;
                    if (iVar30 == 0) {
                      fVar69 = local_198 * local_398;
                      fVar78 = fStack_194 * fStack_394;
                      fVar76 = fStack_190 * fStack_390;
                      fVar77 = fStack_18c * fStack_38c;
                      fVar48 = fVar76 * local_3b8._4_4_ - fVar78 * (float)uStack_3b0;
                      fVar47 = fVar69 * (float)uStack_3b0 - fVar76 * (float)local_3b8;
                      fVar60 = fVar78 * (float)local_3b8 - fVar69 * local_3b8._4_4_;
                      fVar68 = fVar77 * uStack_3b0._4_4_ - fVar77 * uStack_3b0._4_4_;
                      fVar48 = fVar48 + fVar48;
                      fVar47 = fVar47 + fVar47;
                      fVar60 = fVar60 + fVar60;
                      fVar68 = fVar68 + fVar68;
                      fVar69 = (fVar60 * local_3b8._4_4_ - fVar47 * (float)uStack_3b0) +
                               uStack_3b0._4_4_ * fVar48 + fVar69 + local_3a8;
                      fVar78 = (fVar48 * (float)uStack_3b0 - fVar60 * (float)local_3b8) +
                               uStack_3b0._4_4_ * fVar47 + fVar78 + fStack_3a4;
                      fVar76 = (fVar47 * (float)local_3b8 - fVar48 * local_3b8._4_4_) +
                               uStack_3b0._4_4_ * fVar60 + fVar76 + fStack_3a0;
                      fVar68 = (fVar68 * uStack_3b0._4_4_ - fVar68 * uStack_3b0._4_4_) +
                               uStack_3b0._4_4_ * fVar68 + fVar77 + fStack_39c;
                      fVar77 = fStack_19c * (float)local_3b8 * _DAT_146863ba0 +
                               local_1a8 * uStack_3b0._4_4_ +
                               fStack_1a0 * local_3b8._4_4_ * _DAT_146863b90 +
                               fStack_1a4 * (float)uStack_3b0 * _DAT_146863b80;
                      fVar70 = fStack_1a0 * (float)local_3b8 * fRam0000000146863ba4 +
                               fStack_1a4 * uStack_3b0._4_4_ +
                               fStack_19c * local_3b8._4_4_ * fRam0000000146863b94 +
                               local_1a8 * (float)uStack_3b0 * fRam0000000146863b84;
                      fVar73 = fStack_1a4 * (float)local_3b8 * fRam0000000146863ba8 +
                               fStack_1a0 * uStack_3b0._4_4_ +
                               local_1a8 * local_3b8._4_4_ * fRam0000000146863b98 +
                               fStack_19c * (float)uStack_3b0 * fRam0000000146863b88;
                      fVar72 = local_1a8 * (float)local_3b8 * fRam0000000146863bac +
                               fStack_19c * uStack_3b0._4_4_ +
                               fStack_1a4 * local_3b8._4_4_ * fRam0000000146863b9c +
                               fStack_1a0 * (float)uStack_3b0 * fRam0000000146863b8c;
                      fVar84 = local_188 * local_398;
                      fVar85 = fStack_184 * fStack_394;
                      fVar86 = fStack_180 * fStack_390;
                      fVar87 = fStack_17c * fStack_38c;
                    }
                    else {
                      fVar69 = local_3b8._4_4_ + local_3b8._4_4_;
                      fVar78 = (float)uStack_3b0 + (float)uStack_3b0;
                      fVar84 = local_188 * local_398;
                      fVar85 = fStack_184 * fStack_394;
                      fVar86 = fStack_180 * fStack_390;
                      fVar87 = fStack_17c * fStack_38c;
                      fVar76 = (float)local_3b8 * ((float)local_3b8 + (float)local_3b8);
                      fVar68 = uStack_3b0._4_4_ * ((float)local_3b8 + (float)local_3b8);
                      fStack_5f4 = (uStack_3b0._4_4_ * fVar78 + (float)local_3b8 * fVar69) *
                                   local_398;
                      fStack_5e0 = (fVar68 + local_3b8._4_4_ * fVar78) * fStack_394;
                      local_5d8 = (uStack_3b0._4_4_ * fVar69 + (float)local_3b8 * fVar78) *
                                  fStack_390;
                      local_5e8 = fStack_394 *
                                  ((float)local_3b8 * fVar69 - uStack_3b0._4_4_ * fVar78);
                      fStack_5d4 = fStack_390 * (local_3b8._4_4_ * fVar78 - fVar68);
                      fStack_5f0 = local_398 *
                                   ((float)local_3b8 * fVar78 - uStack_3b0._4_4_ * fVar69);
                      local_5f8 = (float)((uint)((_DAT_146863b60 -
                                                 ((float)uStack_3b0 * fVar78 +
                                                 local_3b8._4_4_ * fVar69)) * local_398) &
                                         _DAT_146863b70);
                      fStack_5e4 = (float)((uint)((fRam0000000146863b64 -
                                                  ((float)uStack_3b0 * fVar78 + fVar76)) *
                                                 fStack_394) & uRam0000000146863b74);
                      fStack_5d0 = (float)((uint)((fRam0000000146863b68 -
                                                  (local_3b8._4_4_ * fVar69 + fVar76)) * fStack_390)
                                          & uRam0000000146863b78);
                      fStack_5ec = (float)((uint)((fRam0000000146863b6c - (fVar76 + fVar76)) *
                                                 fStack_38c) & uRam0000000146863b7c);
                      fVar69 = fStack_1a4 + fStack_1a4;
                      fVar78 = fStack_1a0 + fStack_1a0;
                      fVar76 = local_1a8 * (local_1a8 + local_1a8);
                      fVar68 = fStack_19c * (local_1a8 + local_1a8);
                      local_5c8 = local_3a8;
                      fStack_5c4 = fStack_3a4;
                      fStack_5c0 = fStack_3a0;
                      fStack_5bc = fRam0000000146863b6c;
                      fStack_5b4 = (fStack_19c * fVar78 + local_1a8 * fVar69) * local_188;
                      fStack_5a0 = (fVar68 + fStack_1a4 * fVar78) * fStack_184;
                      local_598 = (fStack_19c * fVar69 + local_1a8 * fVar78) * fStack_180;
                      local_5a8 = fStack_184 * (local_1a8 * fVar69 - fStack_19c * fVar78);
                      fStack_594 = fStack_180 * (fStack_1a4 * fVar78 - fVar68);
                      fStack_5b0 = local_188 * (local_1a8 * fVar78 - fStack_19c * fVar69);
                      local_5b8 = (float)((uint)((_DAT_146863b60 -
                                                 (fStack_1a0 * fVar78 + fStack_1a4 * fVar69)) *
                                                local_188) & _DAT_146863b70);
                      fStack_5a4 = (float)((uint)((fRam0000000146863b64 -
                                                  (fStack_1a0 * fVar78 + fVar76)) * fStack_184) &
                                          uRam0000000146863b74);
                      fStack_590 = (float)((uint)((fRam0000000146863b68 -
                                                  (fStack_1a4 * fVar69 + fVar76)) * fStack_180) &
                                          uRam0000000146863b78);
                      fStack_5ac = (float)((uint)((fRam0000000146863b6c - (fVar76 + fVar76)) *
                                                 fStack_17c) & uRam0000000146863b7c);
                      local_928 = fStack_5b4 * local_5e8 + local_5b8 * local_5f8 +
                                  fStack_5b0 * local_5d8 + fStack_5ac * local_3a8;
                      fStack_924 = fStack_5b4 * fStack_5e4 + local_5b8 * fStack_5f4 +
                                   fStack_5b0 * fStack_5d4 + fStack_5ac * fStack_3a4;
                      fStack_920 = fStack_5b4 * fStack_5e0 + local_5b8 * fStack_5f0 +
                                   fStack_5b0 * fStack_5d0 + fStack_5ac * fStack_3a0;
                      fStack_91c = fStack_5b4 * fStack_5ec + local_5b8 * fStack_5ec +
                                   fStack_5b0 * fStack_5ec + fStack_5ac * fRam0000000146863b6c;
                      fStack_57c = fRam0000000146863b6c;
                      local_918 = fStack_5a4 * local_5e8 + local_5a8 * local_5f8 +
                                  fStack_5a0 * local_5d8 + fStack_5ac * local_3a8;
                      fStack_914 = fStack_5a4 * fStack_5e4 + local_5a8 * fStack_5f4 +
                                   fStack_5a0 * fStack_5d4 + fStack_5ac * fStack_3a4;
                      fStack_910 = fStack_5a4 * fStack_5e0 + local_5a8 * fStack_5f0 +
                                   fStack_5a0 * fStack_5d0 + fStack_5ac * fStack_3a0;
                      fStack_90c = fStack_5a4 * fStack_5ec + local_5a8 * fStack_5ec +
                                   fStack_5a0 * fStack_5ec + fStack_5ac * fRam0000000146863b6c;
                      local_908 = fStack_594 * local_5e8 + local_598 * local_5f8 +
                                  fStack_590 * local_5d8 + fStack_5ac * local_3a8;
                      fStack_904 = fStack_594 * fStack_5e4 + local_598 * fStack_5f4 +
                                   fStack_590 * fStack_5d4 + fStack_5ac * fStack_3a4;
                      fStack_900 = fStack_594 * fStack_5e0 + local_598 * fStack_5f0 +
                                   fStack_590 * fStack_5d0 + fStack_5ac * fStack_3a0;
                      fStack_8fc = fStack_594 * fStack_5ec + local_598 * fStack_5ec +
                                   fStack_590 * fStack_5ec + fStack_5ac * fRam0000000146863b6c;
                      local_8f8 = fStack_194 * local_5e8 + local_198 * local_5f8 +
                                  fStack_190 * local_5d8 + fRam0000000146863b6c * local_3a8;
                      fStack_8f4 = fStack_194 * fStack_5e4 + local_198 * fStack_5f4 +
                                   fStack_190 * fStack_5d4 + fRam0000000146863b6c * fStack_3a4;
                      fStack_8f0 = fStack_194 * fStack_5e0 + local_198 * fStack_5f0 +
                                   fStack_190 * fStack_5d0 + fRam0000000146863b6c * fStack_3a0;
                      fStack_8ec = fStack_194 * fStack_5ec + local_198 * fStack_5ec +
                                   fStack_190 * fStack_5ec +
                                   fRam0000000146863b6c * fRam0000000146863b6c;
                      fStack_5dc = fStack_5ec;
                      fStack_5cc = fStack_5ec;
                      fStack_59c = fStack_5ac;
                      fStack_58c = fStack_5ac;
                      local_588 = local_198;
                      fStack_584 = fStack_194;
                      fStack_580 = fStack_190;
                      FMatrix::RemoveScaling(&local_928);
                      fVar48 = (float)(-(uint)((float)local_a18 <= fVar84) &
                                       (_DAT_146863bd0 ^ (uint)fVar48) ^ _DAT_146863bd0);
                      fVar47 = (float)(-(uint)(local_a18._4_4_ <= fVar85) &
                                       (uRam0000000146863bd4 ^ (uint)fVar47) ^ uRam0000000146863bd4)
                      ;
                      fVar60 = (float)(-(uint)(fStack_a10 <= fVar86) &
                                       (uRam0000000146863bd8 ^ (uint)fVar60) ^ uRam0000000146863bd8)
                      ;
                      local_928 = local_928 * fVar48;
                      fStack_924 = fStack_924 * fVar48;
                      fStack_920 = fStack_920 * fVar48;
                      fStack_914 = fStack_914 * fVar47;
                      fStack_910 = fStack_910 * fVar47;
                      local_918 = local_918 * fVar47;
                      fStack_904 = fStack_904 * fVar60;
                      fStack_900 = fStack_900 * fVar60;
                      local_908 = local_908 * fVar60;
                      FQuat::FQuat(&local_9f8,&local_928);
                      local_a18 = CONCAT44(local_a18._4_4_,0x322bcc77);
                      auVar62._0_4_ = local_9f8 * local_9f8 + fStack_9f0 * fStack_9f0;
                      auVar62._4_4_ = fStack_9f4 * fStack_9f4 + fStack_9ec * fStack_9ec;
                      auVar62._8_4_ = fStack_9f0 * fStack_9f0 + local_9f8 * local_9f8;
                      auVar62._12_4_ = fStack_9ec * fStack_9ec + fStack_9f4 * fStack_9f4;
                      fVar78 = auVar62._4_4_ + auVar62._0_4_;
                      fVar76 = auVar62._8_4_ + auVar62._4_4_;
                      fVar68 = auVar62._12_4_ + auVar62._8_4_;
                      fVar77 = auVar62._0_4_ + auVar62._12_4_;
                      auVar9._4_4_ = fVar76;
                      auVar9._0_4_ = fVar78;
                      auVar9._8_4_ = fVar68;
                      auVar9._12_4_ = fVar77;
                      auVar58 = rsqrtps(auVar62,auVar9);
                      fVar48 = auVar58._0_4_;
                      fVar47 = auVar58._4_4_;
                      fVar60 = auVar58._8_4_;
                      fVar69 = auVar58._12_4_;
                      fVar48 = ((float)local_a38._0_4_ -
                               fVar48 * fVar48 * fVar78 * (float)local_a38._0_4_) * fVar48 + fVar48;
                      fVar47 = ((float)local_a38._4_4_ -
                               fVar47 * fVar47 * fVar76 * (float)local_a38._4_4_) * fVar47 + fVar47;
                      fVar60 = ((float)uStack_a30 - fVar60 * fVar60 * fVar68 * (float)uStack_a30) *
                               fVar60 + fVar60;
                      fVar69 = (uStack_a30._4_4_ - fVar69 * fVar69 * fVar77 * uStack_a30._4_4_) *
                               fVar69 + fVar69;
                      local_9f8 = (float)(((uint)((((float)local_a38._0_4_ -
                                                   fVar48 * fVar48 * fVar78 * (float)local_a38._0_4_
                                                   ) * fVar48 + fVar48) * local_9f8) ^
                                          _DAT_146863bb0) & -(uint)(1e-08 <= fVar78) ^
                                         _DAT_146863bb0);
                      fStack_9f4 = (float)(((uint)((((float)local_a38._4_4_ -
                                                    fVar47 * fVar47 *
                                                    fVar76 * (float)local_a38._4_4_) * fVar47 +
                                                   fVar47) * fStack_9f4) ^ uRam0000000146863bb4) &
                                           -(uint)(1e-08 <= fVar76) ^ uRam0000000146863bb4);
                      fStack_9f0 = (float)(((uint)((((float)uStack_a30 -
                                                    fVar60 * fVar60 * fVar68 * (float)uStack_a30) *
                                                    fVar60 + fVar60) * fStack_9f0) ^
                                           uRam0000000146863bb8) & -(uint)(1e-08 <= fVar68) ^
                                          uRam0000000146863bb8);
                      fStack_9ec = (float)(((uint)(((uStack_a30._4_4_ -
                                                    fVar69 * fVar69 * fVar77 * uStack_a30._4_4_) *
                                                    fVar69 + fVar69) * fStack_9ec) ^
                                           uRam0000000146863bbc) & -(uint)(1e-08 <= fVar77) ^
                                          uRam0000000146863bbc);
                      fVar69 = local_8f8;
                      fVar78 = fStack_8f4;
                      fVar76 = fStack_8f0;
                      fVar68 = 0.0;
                      fVar77 = local_9f8;
                      fVar70 = fStack_9f4;
                      fVar73 = fStack_9f0;
                      fVar72 = fStack_9ec;
                    }
                    goto LAB_14095069d;
                  }
                  fVar77 = local_1a8;
                  fVar70 = fStack_1a4;
                  fVar73 = fStack_1a0;
                  fVar72 = fStack_19c;
                  fVar84 = local_188;
                  fVar85 = fStack_184;
                  fVar86 = fStack_180;
                  fVar87 = fStack_17c;
                  if (iVar30 != 2) goto LAB_14095069d;
                  FUN_14162bcf0(&local_1a8,&local_2c8,&local_388);
                  fVar69 = (float)local_2b8;
                  fVar78 = local_2b8._4_4_;
                  fVar76 = (float)uStack_2b0;
                }
                fVar48 = local_a08;
                fVar47 = DAT_1468b5d94;
                fVar60 = DAT_1468b5d90;
                fVar68 = DAT_1468b5d98;
                if (0.0 < local_a08) {
                  fVar68 = 1.0 / local_a08;
                  fVar47 = (fVar78 - (float)local_2e8._4_4_) * fVar68;
                  fVar60 = (fVar69 - (float)local_2e8._0_4_) * fVar68;
                  fVar68 = (fVar76 - (float)uStack_2e0) * fVar68;
                }
                auVar4._4_4_ = fVar47;
                auVar4._0_4_ = fVar60;
                auVar4._8_4_ = fVar68;
                auVar4._12_4_ = 0;
                *(undefined1 (*) [16])(pcVar38 + 0x20) = auVar4;
                fVar69 = -local_2c8;
                fVar47 = -fStack_2c4;
                fVar60 = -fStack_2c0;
                fVar78 = (float)local_2f8 * fVar69 * fRam0000000146863bac +
                         fStack_2bc * uStack_2f0._4_4_ +
                         local_2f8._4_4_ * fVar47 * fRam0000000146863b9c +
                         (float)uStack_2f0 * fVar60 * fRam0000000146863b8c;
                local_a38._4_4_ =
                     (float)uStack_2f0 * fVar69 * fRam0000000146863ba4 +
                     fStack_2bc * local_2f8._4_4_ + uStack_2f0._4_4_ * fVar47 * fRam0000000146863b94
                     + (float)local_2f8 * fVar60 * fRam0000000146863b84;
                local_a38._0_4_ =
                     uStack_2f0._4_4_ * fVar69 * _DAT_146863ba0 + fStack_2bc * (float)local_2f8 +
                     (float)uStack_2f0 * fVar47 * _DAT_146863b90 +
                     local_2f8._4_4_ * fVar60 * _DAT_146863b80;
                uStack_a30._0_4_ =
                     local_2f8._4_4_ * fVar69 * fRam0000000146863ba8 +
                     fStack_2bc * (float)uStack_2f0 +
                     (float)local_2f8 * fVar47 * fRam0000000146863b98 +
                     uStack_2f0._4_4_ * fVar60 * fRam0000000146863b88;
                uStack_a30._4_4_ = fVar78;
                if (-1.0 <= fVar78) {
                  fVar47 = fVar78;
                  if (1.0 <= fVar78) {
                    fVar47 = 1.0;
                  }
                }
                else {
                  fVar47 = -1.0;
                }
                fVar47 = _guard_xfg_dispatch_icall_nop(fVar47);
                fVar60 = 1.0 - fVar78 * fVar78;
                if (fVar60 <= 0.0) {
                  fVar60 = 0.0;
                }
                if (SQRT(fVar60) < 0.0001) {
                  local_9d0 = 1.0;
                  local_9cc = 0.0;
                  local_9c8 = 0.0;
                }
                else {
                  local_9c8 = 1.0 / SQRT(fVar60);
                  local_9d0 = local_9c8 * (float)local_a38._0_4_;
                  local_9cc = local_9c8 * (float)local_a38._4_4_;
                  local_9c8 = local_9c8 * (float)uStack_a30;
                }
                fVar47 = fVar47 * (1.0 / fVar48);
                if (fVar47 < 0.0) {
                  fVar48 = fVar47 * 0.15915494 - 0.5;
                }
                else {
                  fVar48 = fVar47 * 0.15915494 + 0.5;
                }
                fVar47 = fVar47 - (float)(int)fVar48 * 6.2831855;
                if (fVar47 <= 1.5707964) {
                  if (-1.5707964 <= fVar47) {
                    uStack_a30._4_4_ = 1.0;
                  }
                  else {
                    uStack_a30._4_4_ = -1.0;
                    fVar47 = -3.1415927 - fVar47;
                  }
                }
                else {
                  uStack_a30._4_4_ = -1.0;
                  fVar47 = 3.1415927 - fVar47;
                }
                fVar48 = fVar47 * fVar47;
                fVar47 = (((((2.7525562e-06 - fVar48 * 2.3889859e-08) * fVar48 - 0.00019840874) *
                            fVar48 + 0.008333331) * fVar48 - 0.16666667) * fVar48 + 1.0) * fVar47;
                uStack_a30._4_4_ =
                     (((((2.4760495e-05 - fVar48 * 2.6051615e-07) * fVar48 - 0.0013888378) * fVar48
                       + 0.041666638) * fVar48 - 0.5) * fVar48 + 1.0) * uStack_a30._4_4_;
                local_a38._4_4_ = fVar47 * local_9cc;
                local_a38._0_4_ = fVar47 * local_9d0;
                uStack_a30._0_4_ = fVar47 * local_9c8;
                *(float *)(pcVar38 + 0x10) = fVar47 * local_9d0;
                *(float *)(pcVar38 + 0x14) = fVar47 * local_9cc;
                *(float *)(pcVar38 + 0x18) = fVar47 * local_9c8;
                *(float *)(pcVar38 + 0x1c) = uStack_a30._4_4_;
                piVar41 = local_9e0;
              }
            }
            piVar43 = piVar43 + 8;
          } while (piVar43 != piVar41);
          cVar25 = *(char *)(param_1 + 0x5bc);
          param_3 = local_a28;
        }
      }
      if (cVar25 == '\x01') {
        lVar37 = *(longlong *)(param_1 + 0x1c8);
        lVar45 = (longlong)*(int *)(param_1 + 0x1d0) * 0x20 + lVar37;
        for (; lVar37 != lVar45; lVar37 = lVar37 + 0x20) {
          lVar39 = (longlong)*(int *)(lVar37 + 4);
          *(undefined1 *)(lVar39 * 0x40 + 1 + *(longlong *)(param_1 + 0x1f8)) = 1;
          pfVar32 = (float *)FUN_140953e00(*(undefined8 *)
                                            (*(longlong *)(param_1 + 0x1d8) + lVar39 * 8),&local_358
                                          );
          fVar79 = fRam0000000146863be8;
          fVar74 = fRam0000000146863be4;
          fVar71 = _DAT_146863be0;
          fVar87 = fRam0000000146863b68;
          fVar86 = fRam0000000146863b64;
          fVar85 = _DAT_146863b60;
          local_218 = (float)((uint)_DAT_146863b60 & _DAT_146863b70);
          fStack_214 = (float)((uint)fRam0000000146863b64 & uRam0000000146863b74);
          fStack_210 = (float)((uint)fRam0000000146863b68 & uRam0000000146863b78);
          fStack_20c = (float)((uint)fRam0000000146863b6c & uRam0000000146863b7c);
          local_238 = 0.0;
          fStack_234 = 0.0;
          fStack_230 = 0.0;
          fStack_22c = fRam0000000146863b6c;
          local_228 = 0;
          uStack_220 = 0;
          iVar30 = *(int *)(param_1 + 0x188);
          fVar48 = local_358;
          fVar47 = fStack_354;
          fVar60 = fStack_350;
          fVar69 = fStack_34c;
          fVar78 = local_348;
          fVar76 = fStack_344;
          fVar68 = fStack_340;
          fVar77 = fStack_33c;
          fVar70 = local_338;
          fVar73 = fStack_334;
          fVar72 = fStack_330;
          fVar84 = fStack_32c;
          if (iVar30 == 0) {
LAB_14095162e:
            local_228 = CONCAT44(fVar76,fVar78);
            uStack_220 = CONCAT44(fVar77,fVar68);
          }
          else {
            if (iVar30 != 1) {
              if (iVar30 == 2) {
                auVar23._4_4_ = fStack_334;
                auVar23._0_4_ = local_338;
                auVar23._8_4_ = fStack_330;
                auVar23._12_4_ = fStack_32c;
                auVar21._4_4_ = fStack_364;
                auVar21._0_4_ = local_368;
                auVar21._8_4_ = fStack_360;
                auVar21._12_4_ = fStack_35c;
                auVar58 = minps(auVar23,auVar21);
                auVar54._4_4_ = -(uint)(auVar58._4_4_ < fRam0000000146863be4);
                auVar54._0_4_ = -(uint)(auVar58._0_4_ < _DAT_146863be0);
                auVar54._8_4_ = -(uint)(auVar58._8_4_ < fRam0000000146863be8);
                auVar54._12_4_ = -(uint)(auVar58._12_4_ < fRam0000000146863bec);
                iVar30 = movmskps((int)pfVar32,auVar54);
                if (iVar30 == 0) {
                  fVar69 = local_368 * local_348;
                  fVar76 = fStack_364 * fStack_344;
                  fVar68 = fStack_360 * fStack_340;
                  fVar70 = fStack_35c * fStack_33c;
                  fVar48 = fVar68 * local_388._4_4_ - fVar76 * (float)uStack_380;
                  fVar47 = fVar69 * (float)uStack_380 - fVar68 * (float)local_388;
                  fVar60 = fVar76 * (float)local_388 - fVar69 * local_388._4_4_;
                  fVar77 = fVar70 * uStack_380._4_4_ - fVar70 * uStack_380._4_4_;
                  fVar48 = fVar48 + fVar48;
                  fVar47 = fVar47 + fVar47;
                  fVar60 = fVar60 + fVar60;
                  fVar77 = fVar77 + fVar77;
                  fVar78 = (fVar60 * local_388._4_4_ - fVar47 * (float)uStack_380) +
                           fVar48 * uStack_380._4_4_ + fVar69 + (float)local_378._0_4_;
                  fVar76 = (fVar48 * (float)uStack_380 - fVar60 * (float)local_388) +
                           fVar47 * uStack_380._4_4_ + fVar76 + (float)local_378._4_4_;
                  fVar68 = (fVar47 * (float)local_388 - fVar48 * local_388._4_4_) +
                           fVar60 * uStack_380._4_4_ + fVar68 + fStack_370;
                  pfVar32 = (float *)0x0;
                  fVar48 = (float)local_388 * fStack_34c * _DAT_146863ba0 +
                           uStack_380._4_4_ * local_358 +
                           local_388._4_4_ * fStack_350 * _DAT_146863b90 +
                           (float)uStack_380 * fStack_354 * _DAT_146863b80;
                  fVar47 = (float)local_388 * fStack_350 * fRam0000000146863ba4 +
                           uStack_380._4_4_ * fStack_354 +
                           local_388._4_4_ * fStack_34c * fRam0000000146863b94 +
                           (float)uStack_380 * local_358 * fRam0000000146863b84;
                  fVar60 = (float)local_388 * fStack_354 * fRam0000000146863ba8 +
                           uStack_380._4_4_ * fStack_350 +
                           local_388._4_4_ * local_358 * fRam0000000146863b98 +
                           (float)uStack_380 * fStack_34c * fRam0000000146863b88;
                  fVar69 = (float)local_388 * local_358 * fRam0000000146863bac +
                           uStack_380._4_4_ * fStack_34c +
                           local_388._4_4_ * fStack_354 * fRam0000000146863b9c +
                           (float)uStack_380 * fStack_350 * fRam0000000146863b8c;
                  fVar77 = (fVar77 * uStack_380._4_4_ - fVar77 * uStack_380._4_4_) +
                           fVar77 * uStack_380._4_4_ + fVar70 + fStack_36c;
                  fVar70 = local_368 * local_338;
                  fVar73 = fStack_364 * fStack_334;
                  fVar72 = fStack_360 * fStack_330;
                  fVar84 = fStack_35c * fStack_32c;
                }
                else {
                  fVar48 = local_388._4_4_ + local_388._4_4_;
                  fVar47 = (float)uStack_380 + (float)uStack_380;
                  fVar70 = local_368 * local_338;
                  fVar73 = fStack_364 * fStack_334;
                  fVar72 = fStack_360 * fStack_330;
                  fVar84 = fStack_35c * fStack_32c;
                  fVar69 = (float)local_388 * ((float)local_388 + (float)local_388);
                  fVar60 = uStack_380._4_4_ * ((float)local_388 + (float)local_388);
                  fStack_4f4 = (uStack_380._4_4_ * fVar47 + (float)local_388 * fVar48) * local_368;
                  fStack_4e0 = (fVar60 + local_388._4_4_ * fVar47) * fStack_364;
                  local_4d8 = (uStack_380._4_4_ * fVar48 + (float)local_388 * fVar47) * fStack_360;
                  local_4e8 = fStack_364 * ((float)local_388 * fVar48 - uStack_380._4_4_ * fVar47);
                  fStack_4d4 = fStack_360 * (local_388._4_4_ * fVar47 - fVar60);
                  fStack_4f0 = local_368 * ((float)local_388 * fVar47 - uStack_380._4_4_ * fVar48);
                  local_4f8 = (float)((uint)((_DAT_146863b60 -
                                             ((float)uStack_380 * fVar47 + local_388._4_4_ * fVar48)
                                             ) * local_368) & _DAT_146863b70);
                  fStack_4e4 = (float)((uint)((fRam0000000146863b64 -
                                              ((float)uStack_380 * fVar47 + fVar69)) * fStack_364) &
                                      uRam0000000146863b74);
                  fStack_4d0 = (float)((uint)((fRam0000000146863b68 -
                                              (local_388._4_4_ * fVar48 + fVar69)) * fStack_360) &
                                      uRam0000000146863b78);
                  fStack_4ec = (float)((uint)((fRam0000000146863b6c - (fVar69 + fVar69)) *
                                             fStack_35c) & uRam0000000146863b7c);
                  fVar48 = fStack_354 + fStack_354;
                  fVar60 = fStack_350 + fStack_350;
                  local_4c8 = (float)local_378._0_4_;
                  fStack_4c4 = (float)local_378._4_4_;
                  fStack_4c0 = fStack_370;
                  fStack_4bc = fRam0000000146863b6c;
                  fVar69 = (local_358 + local_358) * local_358;
                  fVar47 = (local_358 + local_358) * fStack_34c;
                  fStack_6b4 = (fVar60 * fStack_34c + fVar48 * local_358) * local_338;
                  fStack_6a0 = (fVar47 + fVar60 * fStack_354) * fStack_334;
                  local_698 = (fVar48 * fStack_34c + fVar60 * local_358) * fStack_330;
                  local_6a8 = fStack_334 * (fVar48 * local_358 - fVar60 * fStack_34c);
                  fStack_694 = fStack_330 * (fVar60 * fStack_354 - fVar47);
                  fStack_6b0 = local_338 * (fVar60 * local_358 - fVar48 * fStack_34c);
                  local_6b8 = (float)((uint)((_DAT_146863b60 -
                                             (fVar60 * fStack_350 + fVar48 * fStack_354)) *
                                            local_338) & _DAT_146863b70);
                  fStack_6a4 = (float)((uint)((fRam0000000146863b64 - (fVar60 * fStack_350 + fVar69)
                                              ) * fStack_334) & uRam0000000146863b74);
                  fStack_690 = (float)((uint)((fRam0000000146863b68 - (fVar48 * fStack_354 + fVar69)
                                              ) * fStack_330) & uRam0000000146863b78);
                  fStack_6ac = (float)((uint)((fRam0000000146863b6c - (fVar69 + fVar69)) *
                                             fStack_32c) & uRam0000000146863b7c);
                  local_688 = local_348;
                  fStack_684 = fStack_344;
                  fStack_680 = fStack_340;
                  fStack_67c = fRam0000000146863b6c;
                  local_8a8 = fStack_6b4 * local_4e8 + local_6b8 * local_4f8 +
                              fStack_6b0 * local_4d8 + fStack_6ac * (float)local_378._0_4_;
                  fStack_8a4 = fStack_6b4 * fStack_4e4 + local_6b8 * fStack_4f4 +
                               fStack_6b0 * fStack_4d4 + fStack_6ac * (float)local_378._4_4_;
                  fStack_8a0 = fStack_6b4 * fStack_4e0 + local_6b8 * fStack_4f0 +
                               fStack_6b0 * fStack_4d0 + fStack_6ac * fStack_370;
                  fStack_89c = fStack_6b4 * fStack_4ec + local_6b8 * fStack_4ec +
                               fStack_6b0 * fStack_4ec + fStack_6ac * fRam0000000146863b6c;
                  local_898 = fStack_6a4 * local_4e8 + local_6a8 * local_4f8 +
                              fStack_6a0 * local_4d8 + fStack_6ac * (float)local_378._0_4_;
                  fStack_894 = fStack_6a4 * fStack_4e4 + local_6a8 * fStack_4f4 +
                               fStack_6a0 * fStack_4d4 + fStack_6ac * (float)local_378._4_4_;
                  fStack_890 = fStack_6a4 * fStack_4e0 + local_6a8 * fStack_4f0 +
                               fStack_6a0 * fStack_4d0 + fStack_6ac * fStack_370;
                  fStack_88c = fStack_6a4 * fStack_4ec + local_6a8 * fStack_4ec +
                               fStack_6a0 * fStack_4ec + fStack_6ac * fRam0000000146863b6c;
                  local_888 = fStack_694 * local_4e8 + local_698 * local_4f8 +
                              fStack_690 * local_4d8 + fStack_6ac * (float)local_378._0_4_;
                  fStack_884 = fStack_694 * fStack_4e4 + local_698 * fStack_4f4 +
                               fStack_690 * fStack_4d4 + fStack_6ac * (float)local_378._4_4_;
                  fStack_880 = fStack_694 * fStack_4e0 + local_698 * fStack_4f0 +
                               fStack_690 * fStack_4d0 + fStack_6ac * fStack_370;
                  fStack_87c = fStack_694 * fStack_4ec + local_698 * fStack_4ec +
                               fStack_690 * fStack_4ec + fStack_6ac * fRam0000000146863b6c;
                  local_878 = fStack_344 * local_4e8 + local_348 * local_4f8 +
                              fStack_340 * local_4d8 + fRam0000000146863b6c * (float)local_378._0_4_
                  ;
                  fStack_874 = fStack_344 * fStack_4e4 + local_348 * fStack_4f4 +
                               fStack_340 * fStack_4d4 +
                               fRam0000000146863b6c * (float)local_378._4_4_;
                  fStack_870 = fStack_344 * fStack_4e0 + local_348 * fStack_4f0 +
                               fStack_340 * fStack_4d0 + fRam0000000146863b6c * fStack_370;
                  fStack_86c = fStack_344 * fStack_4ec + local_348 * fStack_4ec +
                               fStack_340 * fStack_4ec + fRam0000000146863b6c * fRam0000000146863b6c
                  ;
                  fStack_69c = fStack_6ac;
                  fStack_68c = fStack_6ac;
                  fStack_4dc = fStack_4ec;
                  fStack_4cc = fStack_4ec;
                  FMatrix::RemoveScaling(&local_8a8);
                  fVar48 = (float)(-(uint)(fVar71 <= fVar70) & (_DAT_146863bd0 ^ (uint)fVar85) ^
                                  _DAT_146863bd0);
                  fVar47 = (float)(-(uint)(fVar74 <= fVar73) & (uRam0000000146863bd4 ^ (uint)fVar86)
                                  ^ uRam0000000146863bd4);
                  fVar60 = (float)(-(uint)(fVar79 <= fVar72) & (uRam0000000146863bd8 ^ (uint)fVar87)
                                  ^ uRam0000000146863bd8);
                  local_8a8 = local_8a8 * fVar48;
                  fStack_8a4 = fStack_8a4 * fVar48;
                  fStack_8a0 = fStack_8a0 * fVar48;
                  fStack_894 = fStack_894 * fVar47;
                  fStack_890 = fStack_890 * fVar47;
                  local_898 = local_898 * fVar47;
                  fStack_884 = fStack_884 * fVar60;
                  fStack_880 = fStack_880 * fVar60;
                  local_888 = local_888 * fVar60;
                  pfVar32 = (float *)FQuat::FQuat(&local_9f8,&local_8a8);
                  local_a18 = CONCAT44(local_a18._4_4_,0x322bcc77);
                  auVar64._0_4_ = local_9f8 * local_9f8 + fStack_9f0 * fStack_9f0;
                  auVar64._4_4_ = fStack_9f4 * fStack_9f4 + fStack_9ec * fStack_9ec;
                  auVar64._8_4_ = fStack_9f0 * fStack_9f0 + local_9f8 * local_9f8;
                  auVar64._12_4_ = fStack_9ec * fStack_9ec + fStack_9f4 * fStack_9f4;
                  fVar78 = auVar64._4_4_ + auVar64._0_4_;
                  fVar76 = auVar64._8_4_ + auVar64._4_4_;
                  fVar68 = auVar64._12_4_ + auVar64._8_4_;
                  fVar77 = auVar64._0_4_ + auVar64._12_4_;
                  auVar7._4_4_ = fVar76;
                  auVar7._0_4_ = fVar78;
                  auVar7._8_4_ = fVar68;
                  auVar7._12_4_ = fVar77;
                  auVar58 = rsqrtps(auVar64,auVar7);
                  fVar48 = auVar58._0_4_;
                  fVar47 = auVar58._4_4_;
                  fVar60 = auVar58._8_4_;
                  fVar69 = auVar58._12_4_;
                  fVar48 = (_DAT_146863bc0 - fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                           fVar48;
                  fVar47 = (fRam0000000146863bc4 - fVar47 * fVar47 * fVar76 * fRam0000000146863bc4)
                           * fVar47 + fVar47;
                  fVar60 = (fRam0000000146863bc8 - fVar60 * fVar60 * fVar68 * fRam0000000146863bc8)
                           * fVar60 + fVar60;
                  fVar69 = (fRam0000000146863bcc - fVar69 * fVar69 * fVar77 * fRam0000000146863bcc)
                           * fVar69 + fVar69;
                  local_9f8 = (float)(((uint)(((_DAT_146863bc0 -
                                               fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                                              fVar48) * local_9f8) ^ _DAT_146863bb0) &
                                      -(uint)(1e-08 <= fVar78) ^ _DAT_146863bb0);
                  fStack_9f4 = (float)(((uint)(((fRam0000000146863bc4 -
                                                fVar47 * fVar47 * fVar76 * fRam0000000146863bc4) *
                                                fVar47 + fVar47) * fStack_9f4) ^
                                       uRam0000000146863bb4) & -(uint)(1e-08 <= fVar76) ^
                                      uRam0000000146863bb4);
                  fStack_9f0 = (float)(((uint)(((fRam0000000146863bc8 -
                                                fVar60 * fVar60 * fVar68 * fRam0000000146863bc8) *
                                                fVar60 + fVar60) * fStack_9f0) ^
                                       uRam0000000146863bb8) & -(uint)(1e-08 <= fVar68) ^
                                      uRam0000000146863bb8);
                  fStack_9ec = (float)(((uint)(((fRam0000000146863bcc -
                                                fVar69 * fVar69 * fVar77 * fRam0000000146863bcc) *
                                                fVar69 + fVar69) * fStack_9ec) ^
                                       uRam0000000146863bbc) & -(uint)(1e-08 <= fVar77) ^
                                      uRam0000000146863bbc);
                  fVar48 = local_9f8;
                  fVar47 = fStack_9f4;
                  fVar60 = fStack_9f0;
                  fVar69 = fStack_9ec;
                  fVar78 = local_878;
                  fVar76 = fStack_874;
                  fVar68 = fStack_870;
                  fVar77 = 0.0;
                }
              }
              goto LAB_14095162e;
            }
            pfVar32 = (float *)FUN_14162bcf0(&local_358,local_178,param_1 + 0x290);
            fVar48 = *pfVar32;
            fVar47 = pfVar32[1];
            fVar60 = pfVar32[2];
            fVar69 = pfVar32[3];
            fVar78 = pfVar32[4];
            fVar76 = pfVar32[5];
            local_228 = *(undefined8 *)(pfVar32 + 4);
            fVar68 = pfVar32[6];
            fVar77 = pfVar32[7];
            uStack_220 = *(undefined8 *)(pfVar32 + 6);
            fVar70 = pfVar32[8];
            fVar73 = pfVar32[9];
            fVar72 = pfVar32[10];
            fVar84 = pfVar32[0xb];
          }
          fVar87 = fRam0000000146863be8;
          fVar86 = fRam0000000146863be4;
          fVar85 = _DAT_146863be0;
          iVar30 = *(int *)(param_1 + 0x188);
          fVar71 = fVar48;
          fVar74 = fVar47;
          fVar79 = fVar60;
          fVar80 = fVar70;
          fVar81 = fVar73;
          fVar82 = fVar72;
          fVar83 = fVar84;
          local_238 = fVar48;
          fStack_234 = fVar47;
          fStack_230 = fVar60;
          fStack_22c = fVar69;
          local_218 = fVar70;
          fStack_214 = fVar73;
          fStack_210 = fVar72;
          fStack_20c = fVar84;
          if (iVar30 == 0) {
LAB_140951c0a:
            fStack_2fc = fVar83;
            fStack_300 = fVar82;
            fStack_304 = fVar81;
            local_308 = fVar80;
            local_318 = CONCAT44(fVar76,fVar78);
            uStack_310 = CONCAT44(fVar77,fVar68);
            local_328 = fVar71;
            fStack_324 = fVar74;
            fStack_320 = fVar79;
            fStack_31c = fVar69;
          }
          else {
            if (iVar30 == 1) {
              local_328 = 0.0;
              fStack_324 = 0.0;
              fStack_320 = 0.0;
              fStack_31c = fRam0000000146863b6c;
              local_308 = (float)((uint)_DAT_146863b60 & _DAT_146863b70);
              fStack_304 = (float)((uint)fRam0000000146863b64 & uRam0000000146863b74);
              fStack_300 = (float)((uint)fRam0000000146863b68 & uRam0000000146863b78);
              fStack_2fc = (float)((uint)fRam0000000146863b6c & uRam0000000146863b7c);
              local_318 = 0;
              uStack_310 = 0;
              auVar55._4_4_ = fVar73;
              auVar55._0_4_ = fVar70;
              auVar55._8_4_ = fVar72;
              auVar55._12_4_ = fVar84;
              auVar20._4_4_ = fStack_394;
              auVar20._0_4_ = local_398;
              auVar20._8_4_ = fStack_390;
              auVar20._12_4_ = fStack_38c;
              auVar58 = minps(auVar55,auVar20);
              auVar56._4_4_ = -(uint)(auVar58._4_4_ < fRam0000000146863be4);
              auVar56._0_4_ = -(uint)(auVar58._0_4_ < _DAT_146863be0);
              auVar56._8_4_ = -(uint)(auVar58._8_4_ < fRam0000000146863be8);
              auVar56._12_4_ = -(uint)(auVar58._12_4_ < fRam0000000146863bec);
              iVar30 = movmskps((int)pfVar32,auVar56);
              if (iVar30 == 0) {
                fVar78 = local_398 * fVar78;
                fVar76 = fStack_394 * fVar76;
                fVar68 = fStack_390 * fVar68;
                fVar77 = fStack_38c * fVar77;
                fVar85 = fVar68 * local_3b8._4_4_ - fVar76 * (float)uStack_3b0;
                fVar86 = fVar78 * (float)uStack_3b0 - fVar68 * (float)local_3b8;
                fVar87 = fVar76 * (float)local_3b8 - fVar78 * local_3b8._4_4_;
                fVar71 = fVar77 * uStack_3b0._4_4_ - fVar77 * uStack_3b0._4_4_;
                fVar85 = fVar85 + fVar85;
                fVar86 = fVar86 + fVar86;
                fVar87 = fVar87 + fVar87;
                fVar71 = fVar71 + fVar71;
                fVar78 = (fVar87 * local_3b8._4_4_ - fVar86 * (float)uStack_3b0) +
                         uStack_3b0._4_4_ * fVar85 + fVar78 + local_3a8;
                fVar76 = (fVar85 * (float)uStack_3b0 - fVar87 * (float)local_3b8) +
                         uStack_3b0._4_4_ * fVar86 + fVar76 + fStack_3a4;
                fVar68 = (fVar86 * (float)local_3b8 - fVar85 * local_3b8._4_4_) +
                         uStack_3b0._4_4_ * fVar87 + fVar68 + fStack_3a0;
                fVar77 = (fVar71 * uStack_3b0._4_4_ - fVar71 * uStack_3b0._4_4_) +
                         uStack_3b0._4_4_ * fVar71 + fVar77 + fStack_39c;
                fVar71 = (float)local_3b8 * fVar69 * _DAT_146863ba0 + uStack_3b0._4_4_ * fVar48 +
                         local_3b8._4_4_ * fVar60 * _DAT_146863b90 +
                         (float)uStack_3b0 * fVar47 * _DAT_146863b80;
                fVar74 = (float)local_3b8 * fVar60 * fRam0000000146863ba4 +
                         uStack_3b0._4_4_ * fVar47 + local_3b8._4_4_ * fVar69 * fRam0000000146863b94
                         + (float)uStack_3b0 * fVar48 * fRam0000000146863b84;
                fVar79 = (float)local_3b8 * fVar47 * fRam0000000146863ba8 +
                         uStack_3b0._4_4_ * fVar60 + local_3b8._4_4_ * fVar48 * fRam0000000146863b98
                         + (float)uStack_3b0 * fVar69 * fRam0000000146863b88;
                fVar69 = (float)local_3b8 * fVar48 * fRam0000000146863bac +
                         uStack_3b0._4_4_ * fVar69 + local_3b8._4_4_ * fVar47 * fRam0000000146863b9c
                         + (float)uStack_3b0 * fVar60 * fRam0000000146863b8c;
                fVar80 = local_398 * fVar70;
                fVar81 = fStack_394 * fVar73;
                fVar82 = fStack_390 * fVar72;
                fVar83 = fStack_38c * fVar84;
              }
              else {
                fVar71 = local_3b8._4_4_ + local_3b8._4_4_;
                fVar79 = (float)uStack_3b0 + (float)uStack_3b0;
                fVar80 = local_398 * fVar70;
                fVar81 = fStack_394 * fVar73;
                fVar82 = fStack_390 * fVar72;
                fVar83 = fStack_38c * fVar84;
                fVar75 = ((float)local_3b8 + (float)local_3b8) * (float)local_3b8;
                fVar77 = ((float)local_3b8 + (float)local_3b8) * uStack_3b0._4_4_;
                fStack_4b4 = (fVar79 * uStack_3b0._4_4_ + fVar71 * (float)local_3b8) * local_398;
                fStack_4a0 = (fVar77 + fVar79 * local_3b8._4_4_) * fStack_394;
                local_498 = (fVar71 * uStack_3b0._4_4_ + fVar79 * (float)local_3b8) * fStack_390;
                local_4a8 = fStack_394 * (fVar71 * (float)local_3b8 - fVar79 * uStack_3b0._4_4_);
                fStack_494 = fStack_390 * (fVar79 * local_3b8._4_4_ - fVar77);
                fStack_4b0 = local_398 * (fVar79 * (float)local_3b8 - fVar71 * uStack_3b0._4_4_);
                fVar77 = fVar47 + fVar47;
                fVar74 = fVar60 + fVar60;
                local_4b8 = (float)((uint)((_DAT_146863b60 -
                                           (fVar79 * (float)uStack_3b0 + fVar71 * local_3b8._4_4_))
                                          * local_398) & _DAT_146863b70);
                fStack_4a4 = (float)((uint)((fRam0000000146863b64 -
                                            (fVar79 * (float)uStack_3b0 + fVar75)) * fStack_394) &
                                    uRam0000000146863b74);
                fStack_490 = (float)((uint)((fRam0000000146863b68 -
                                            (fVar71 * local_3b8._4_4_ + fVar75)) * fStack_390) &
                                    uRam0000000146863b78);
                fStack_4ac = (float)((uint)((fRam0000000146863b6c - (fVar75 + fVar75)) * fStack_38c)
                                    & uRam0000000146863b7c);
                fVar79 = (fVar48 + fVar48) * fVar48;
                fVar71 = (fVar48 + fVar48) * fVar69;
                local_488 = local_3a8;
                fStack_484 = fStack_3a4;
                fStack_480 = fStack_3a0;
                fStack_47c = fRam0000000146863b6c;
                fStack_474 = (fVar74 * fVar69 + fVar77 * fVar48) * fVar70;
                fStack_460 = (fVar71 + fVar74 * fVar47) * fVar73;
                local_458 = (fVar77 * fVar69 + fVar74 * fVar48) * fVar72;
                local_468 = fVar73 * (fVar77 * fVar48 - fVar74 * fVar69);
                fStack_454 = fVar72 * (fVar74 * fVar47 - fVar71);
                fStack_470 = fVar70 * (fVar74 * fVar48 - fVar77 * fVar69);
                local_478 = (float)((uint)((_DAT_146863b60 - (fVar74 * fVar60 + fVar77 * fVar47)) *
                                          fVar70) & _DAT_146863b70);
                fStack_464 = (float)((uint)((fRam0000000146863b64 - (fVar74 * fVar60 + fVar79)) *
                                           fVar73) & uRam0000000146863b74);
                fStack_450 = (float)((uint)((fRam0000000146863b68 - (fVar77 * fVar47 + fVar79)) *
                                           fVar72) & uRam0000000146863b78);
                fStack_46c = (float)((uint)((fRam0000000146863b6c - (fVar79 + fVar79)) * fVar84) &
                                    uRam0000000146863b7c);
                local_8e8 = fStack_474 * local_4a8 + local_478 * local_4b8 + fStack_470 * local_498
                            + fStack_46c * local_3a8;
                fStack_8e4 = fStack_474 * fStack_4a4 + local_478 * fStack_4b4 +
                             fStack_470 * fStack_494 + fStack_46c * fStack_3a4;
                fStack_8e0 = fStack_474 * fStack_4a0 + local_478 * fStack_4b0 +
                             fStack_470 * fStack_490 + fStack_46c * fStack_3a0;
                fStack_8dc = fStack_474 * fStack_4ac + local_478 * fStack_4ac +
                             fStack_470 * fStack_4ac + fStack_46c * fRam0000000146863b6c;
                fStack_43c = fRam0000000146863b6c;
                local_8d8 = fStack_464 * local_4a8 + local_468 * local_4b8 + fStack_460 * local_498
                            + fStack_46c * local_3a8;
                fStack_8d4 = fStack_464 * fStack_4a4 + local_468 * fStack_4b4 +
                             fStack_460 * fStack_494 + fStack_46c * fStack_3a4;
                fStack_8d0 = fStack_464 * fStack_4a0 + local_468 * fStack_4b0 +
                             fStack_460 * fStack_490 + fStack_46c * fStack_3a0;
                fStack_8cc = fStack_464 * fStack_4ac + local_468 * fStack_4ac +
                             fStack_460 * fStack_4ac + fStack_46c * fRam0000000146863b6c;
                local_8c8 = fStack_454 * local_4a8 + local_458 * local_4b8 + fStack_450 * local_498
                            + fStack_46c * local_3a8;
                fStack_8c4 = fStack_454 * fStack_4a4 + local_458 * fStack_4b4 +
                             fStack_450 * fStack_494 + fStack_46c * fStack_3a4;
                fStack_8c0 = fStack_454 * fStack_4a0 + local_458 * fStack_4b0 +
                             fStack_450 * fStack_490 + fStack_46c * fStack_3a0;
                fStack_8bc = fStack_454 * fStack_4ac + local_458 * fStack_4ac +
                             fStack_450 * fStack_4ac + fStack_46c * fRam0000000146863b6c;
                local_8b8 = fVar76 * local_4a8 + fVar78 * local_4b8 + fVar68 * local_498 +
                            fRam0000000146863b6c * local_3a8;
                fStack_8b4 = fVar76 * fStack_4a4 + fVar78 * fStack_4b4 + fVar68 * fStack_494 +
                             fRam0000000146863b6c * fStack_3a4;
                fStack_8b0 = fVar76 * fStack_4a0 + fVar78 * fStack_4b0 + fVar68 * fStack_490 +
                             fRam0000000146863b6c * fStack_3a0;
                fStack_8ac = fVar76 * fStack_4ac + fVar78 * fStack_4ac + fVar68 * fStack_4ac +
                             fRam0000000146863b6c * fRam0000000146863b6c;
                fStack_49c = fStack_4ac;
                fStack_48c = fStack_4ac;
                fStack_45c = fStack_46c;
                fStack_44c = fStack_46c;
                local_448 = fVar78;
                fStack_444 = fVar76;
                fStack_440 = fVar68;
                FMatrix::RemoveScaling(&local_8e8);
                fVar48 = (float)(-(uint)(fVar85 <= fVar80) & (_DAT_146863bd0 ^ (uint)_DAT_146863b60)
                                ^ _DAT_146863bd0);
                fVar47 = (float)(-(uint)(fVar86 <= fVar81) &
                                 (uRam0000000146863bd4 ^ (uint)fRam0000000146863b64) ^
                                uRam0000000146863bd4);
                fVar60 = (float)(-(uint)(fVar87 <= fVar82) &
                                 (uRam0000000146863bd8 ^ (uint)fRam0000000146863b68) ^
                                uRam0000000146863bd8);
                local_8e8 = local_8e8 * fVar48;
                fStack_8e4 = fStack_8e4 * fVar48;
                fStack_8e0 = fStack_8e0 * fVar48;
                fStack_8d4 = fStack_8d4 * fVar47;
                fStack_8d0 = fStack_8d0 * fVar47;
                local_8d8 = local_8d8 * fVar47;
                fStack_8c4 = fStack_8c4 * fVar60;
                fStack_8c0 = fStack_8c0 * fVar60;
                local_8c8 = local_8c8 * fVar60;
                FQuat::FQuat(&local_9b8,&local_8e8);
                local_a18 = CONCAT44(local_a18._4_4_,0x322bcc77);
                auVar65._0_4_ = local_9b8 * local_9b8 + fStack_9b0 * fStack_9b0;
                auVar65._4_4_ = fStack_9b4 * fStack_9b4 + fStack_9ac * fStack_9ac;
                auVar65._8_4_ = fStack_9b0 * fStack_9b0 + local_9b8 * local_9b8;
                auVar65._12_4_ = fStack_9ac * fStack_9ac + fStack_9b4 * fStack_9b4;
                fVar78 = auVar65._4_4_ + auVar65._0_4_;
                fVar76 = auVar65._8_4_ + auVar65._4_4_;
                fVar68 = auVar65._12_4_ + auVar65._8_4_;
                fVar77 = auVar65._0_4_ + auVar65._12_4_;
                auVar8._4_4_ = fVar76;
                auVar8._0_4_ = fVar78;
                auVar8._8_4_ = fVar68;
                auVar8._12_4_ = fVar77;
                auVar58 = rsqrtps(auVar65,auVar8);
                fVar48 = auVar58._0_4_;
                fVar47 = auVar58._4_4_;
                fVar60 = auVar58._8_4_;
                fVar69 = auVar58._12_4_;
                fVar48 = (_DAT_146863bc0 - fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                         fVar48;
                fVar47 = (fRam0000000146863bc4 - fVar47 * fVar47 * fVar76 * fRam0000000146863bc4) *
                         fVar47 + fVar47;
                fVar60 = (fRam0000000146863bc8 - fVar60 * fVar60 * fVar68 * fRam0000000146863bc8) *
                         fVar60 + fVar60;
                fVar69 = (fRam0000000146863bcc - fVar69 * fVar69 * fVar77 * fRam0000000146863bcc) *
                         fVar69 + fVar69;
                local_9b8 = (float)(((uint)(((_DAT_146863bc0 -
                                             fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                                            fVar48) * local_9b8) ^ _DAT_146863bb0) &
                                    -(uint)(1e-08 <= fVar78) ^ _DAT_146863bb0);
                fStack_9b4 = (float)(((uint)(((fRam0000000146863bc4 -
                                              fVar47 * fVar47 * fVar76 * fRam0000000146863bc4) *
                                              fVar47 + fVar47) * fStack_9b4) ^ uRam0000000146863bb4)
                                     & -(uint)(1e-08 <= fVar76) ^ uRam0000000146863bb4);
                fStack_9b0 = (float)(((uint)(((fRam0000000146863bc8 -
                                              fVar60 * fVar60 * fVar68 * fRam0000000146863bc8) *
                                              fVar60 + fVar60) * fStack_9b0) ^ uRam0000000146863bb8)
                                     & -(uint)(1e-08 <= fVar68) ^ uRam0000000146863bb8);
                fStack_9ac = (float)(((uint)(((fRam0000000146863bcc -
                                              fVar69 * fVar69 * fVar77 * fRam0000000146863bcc) *
                                              fVar69 + fVar69) * fStack_9ac) ^ uRam0000000146863bbc)
                                     & -(uint)(1e-08 <= fVar77) ^ uRam0000000146863bbc);
                fVar77 = 0.0;
                fVar71 = local_9b8;
                fVar74 = fStack_9b4;
                fVar79 = fStack_9b0;
                fVar69 = fStack_9ac;
                fVar78 = local_8b8;
                fVar76 = fStack_8b4;
                fVar68 = fStack_8b0;
              }
              goto LAB_140951c0a;
            }
            if (iVar30 != 2) goto LAB_140951c0a;
            FUN_14162bcf0(&local_238,&local_328,&local_388);
            fVar78 = (float)local_318;
            fVar76 = local_318._4_4_;
            fVar68 = (float)uStack_310;
            fVar77 = uStack_310._4_4_;
          }
          local_358 = local_328;
          fStack_354 = fStack_324;
          fStack_350 = fStack_320;
          fStack_34c = fStack_31c;
          local_348 = fVar78;
          fStack_344 = fVar76;
          fStack_340 = fVar68;
          fStack_33c = fVar77;
          local_338 = local_308;
          fStack_334 = fStack_304;
          fStack_330 = fStack_300;
          fStack_32c = fStack_2fc;
          FUN_140957ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + lVar39 * 8),&local_358);
        }
      }
      else if (cVar25 == '\x02') {
        puVar36 = *(undefined4 **)(param_1 + 0x1c8);
        puVar44 = puVar36 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
        for (; puVar36 != puVar44; puVar36 = puVar36 + 8) {
          iVar30 = puVar36[1];
          *(undefined1 *)((longlong)iVar30 * 0x40 + 1 + *(longlong *)(param_1 + 0x1f8)) = 1;
          pfVar32 = (float *)FUN_140611730(plVar46,*puVar36);
          fVar76 = fRam0000000146863be8;
          fVar78 = fRam0000000146863be4;
          fVar69 = _DAT_146863be0;
          fVar60 = fRam0000000146863b68;
          fVar47 = fRam0000000146863b64;
          fVar48 = _DAT_146863b60;
          iVar27 = *(int *)(param_1 + 0x188);
          if (iVar27 == 0) {
LAB_140950faa:
            local_268 = *(undefined8 *)pfVar32;
            uStack_260 = *(longlong *)(pfVar32 + 2);
            local_258 = *(undefined1 (*) [16])(pfVar32 + 4);
            local_248 = *(undefined8 *)(pfVar32 + 8);
            uStack_240 = *(undefined8 *)(pfVar32 + 10);
          }
          else if (iVar27 == 1) {
            auVar19._4_4_ = fStack_394;
            auVar19._0_4_ = local_398;
            auVar19._8_4_ = fStack_390;
            auVar19._12_4_ = fStack_38c;
            local_268 = 0;
            uStack_260 = (ulonglong)(uint)fRam0000000146863b6c << 0x20;
            local_248 = CONCAT44((uint)fRam0000000146863b64 & uRam0000000146863b74,
                                 (uint)_DAT_146863b60 & _DAT_146863b70);
            uStack_240 = CONCAT44((uint)fRam0000000146863b6c & uRam0000000146863b7c,
                                  (uint)fRam0000000146863b68 & uRam0000000146863b78);
            local_258 = ZEXT816(0);
            auVar58 = *(undefined1 (*) [16])(pfVar32 + 8);
            auVar52 = minps(auVar58,auVar19);
            auVar53._4_4_ = -(uint)(auVar52._4_4_ < fRam0000000146863be4);
            auVar53._0_4_ = -(uint)(auVar52._0_4_ < _DAT_146863be0);
            auVar53._8_4_ = -(uint)(auVar52._8_4_ < fRam0000000146863be8);
            auVar53._12_4_ = -(uint)(auVar52._12_4_ < fRam0000000146863bec);
            iVar27 = movmskps(0,auVar53);
            if (iVar27 == 0) {
              fVar48 = *pfVar32;
              fVar47 = pfVar32[1];
              fVar60 = pfVar32[2];
              fVar69 = pfVar32[3];
              fVar78 = local_398 * pfVar32[4];
              fVar76 = fStack_394 * pfVar32[5];
              fVar68 = fStack_390 * pfVar32[6];
              fVar77 = fStack_38c * pfVar32[7];
              local_248 = CONCAT44(fStack_394 * auVar58._4_4_,local_398 * auVar58._0_4_);
              uStack_240 = CONCAT44(fStack_38c * auVar58._12_4_,fStack_390 * auVar58._8_4_);
              local_268 = CONCAT44((float)local_3b8 * fVar60 * fRam0000000146863ba4 +
                                   uStack_3b0._4_4_ * fVar47 +
                                   local_3b8._4_4_ * fVar69 * fRam0000000146863b94 +
                                   (float)uStack_3b0 * fVar48 * fRam0000000146863b84,
                                   (float)local_3b8 * fVar69 * _DAT_146863ba0 +
                                   uStack_3b0._4_4_ * fVar48 +
                                   local_3b8._4_4_ * fVar60 * _DAT_146863b90 +
                                   (float)uStack_3b0 * fVar47 * _DAT_146863b80);
              uStack_260 = CONCAT44((float)local_3b8 * fVar48 * fRam0000000146863bac +
                                    uStack_3b0._4_4_ * fVar69 +
                                    local_3b8._4_4_ * fVar47 * fRam0000000146863b9c +
                                    (float)uStack_3b0 * fVar60 * fRam0000000146863b8c,
                                    (float)local_3b8 * fVar47 * fRam0000000146863ba8 +
                                    uStack_3b0._4_4_ * fVar60 +
                                    local_3b8._4_4_ * fVar48 * fRam0000000146863b98 +
                                    (float)uStack_3b0 * fVar69 * fRam0000000146863b88);
              fVar48 = fVar68 * local_3b8._4_4_ - fVar76 * (float)uStack_3b0;
              fVar47 = fVar78 * (float)uStack_3b0 - fVar68 * (float)local_3b8;
              fVar60 = fVar76 * (float)local_3b8 - fVar78 * local_3b8._4_4_;
              fVar69 = fVar77 * uStack_3b0._4_4_ - fVar77 * uStack_3b0._4_4_;
              fVar48 = fVar48 + fVar48;
              fVar47 = fVar47 + fVar47;
              fVar60 = fVar60 + fVar60;
              fVar69 = fVar69 + fVar69;
              local_258._0_4_ =
                   (fVar60 * local_3b8._4_4_ - fVar47 * (float)uStack_3b0) +
                   uStack_3b0._4_4_ * fVar48 + fVar78 + local_3a8;
              local_258._4_4_ =
                   (fVar48 * (float)uStack_3b0 - fVar60 * (float)local_3b8) +
                   uStack_3b0._4_4_ * fVar47 + fVar76 + fStack_3a4;
              local_258._8_4_ =
                   (fVar47 * (float)local_3b8 - fVar48 * local_3b8._4_4_) +
                   uStack_3b0._4_4_ * fVar60 + fVar68 + fStack_3a0;
              local_258._12_4_ =
                   (fVar69 * uStack_3b0._4_4_ - fVar69 * uStack_3b0._4_4_) +
                   uStack_3b0._4_4_ * fVar69 + fVar77 + fStack_39c;
            }
            else {
              fVar68 = local_3b8._4_4_ + local_3b8._4_4_;
              fVar77 = (float)uStack_3b0 + (float)uStack_3b0;
              fVar79 = local_398 * auVar58._0_4_;
              fVar80 = fStack_394 * auVar58._4_4_;
              fVar81 = fStack_390 * auVar58._8_4_;
              fVar82 = fStack_38c * auVar58._12_4_;
              fVar73 = (float)local_3b8 * ((float)local_3b8 + (float)local_3b8);
              fVar70 = uStack_3b0._4_4_ * ((float)local_3b8 + (float)local_3b8);
              fStack_574 = (uStack_3b0._4_4_ * fVar77 + (float)local_3b8 * fVar68) * local_398;
              fStack_560 = (fVar70 + local_3b8._4_4_ * fVar77) * fStack_394;
              local_558 = (uStack_3b0._4_4_ * fVar68 + (float)local_3b8 * fVar77) * fStack_390;
              local_568 = fStack_394 * ((float)local_3b8 * fVar68 - uStack_3b0._4_4_ * fVar77);
              fStack_554 = fStack_390 * (local_3b8._4_4_ * fVar77 - fVar70);
              fStack_570 = local_398 * ((float)local_3b8 * fVar77 - uStack_3b0._4_4_ * fVar68);
              local_578 = (float)((uint)((_DAT_146863b60 -
                                         ((float)uStack_3b0 * fVar77 + local_3b8._4_4_ * fVar68)) *
                                        local_398) & _DAT_146863b70);
              fStack_564 = (float)((uint)((fRam0000000146863b64 -
                                          ((float)uStack_3b0 * fVar77 + fVar73)) * fStack_394) &
                                  uRam0000000146863b74);
              fStack_550 = (float)((uint)((fRam0000000146863b68 -
                                          (local_3b8._4_4_ * fVar68 + fVar73)) * fStack_390) &
                                  uRam0000000146863b78);
              fStack_56c = (float)((uint)((fRam0000000146863b6c - (fVar73 + fVar73)) * fStack_38c) &
                                  uRam0000000146863b7c);
              local_548 = local_3a8;
              fStack_544 = fStack_3a4;
              fStack_540 = fStack_3a0;
              fStack_53c = fRam0000000146863b6c;
              fVar68 = *pfVar32;
              fVar77 = pfVar32[1];
              fVar70 = pfVar32[2];
              fVar73 = pfVar32[3];
              fVar86 = fVar77 + fVar77;
              fVar71 = fVar70 + fVar70;
              fVar74 = (fVar68 + fVar68) * fVar68;
              fVar87 = (fVar68 + fVar68) * fVar73;
              fVar72 = pfVar32[8];
              fVar84 = pfVar32[9];
              fVar85 = pfVar32[10];
              fStack_534 = (fVar71 * fVar73 + fVar86 * fVar68) * fVar72;
              fStack_520 = (fVar87 + fVar71 * fVar77) * fVar84;
              local_518 = (fVar86 * fVar73 + fVar71 * fVar68) * fVar85;
              local_528 = fVar84 * (fVar86 * fVar68 - fVar71 * fVar73);
              fStack_514 = fVar85 * (fVar71 * fVar77 - fVar87);
              fStack_530 = fVar72 * (fVar71 * fVar68 - fVar86 * fVar73);
              local_538 = (float)((uint)((_DAT_146863b60 - (fVar71 * fVar70 + fVar86 * fVar77)) *
                                        fVar72) & _DAT_146863b70);
              fStack_524 = (float)((uint)((fRam0000000146863b64 - (fVar71 * fVar70 + fVar74)) *
                                         fVar84) & uRam0000000146863b74);
              fStack_510 = (float)((uint)((fRam0000000146863b68 - (fVar86 * fVar77 + fVar74)) *
                                         fVar85) & uRam0000000146863b78);
              fStack_52c = (float)((uint)((fRam0000000146863b6c - (fVar74 + fVar74)) * pfVar32[0xb])
                                  & uRam0000000146863b7c);
              local_508 = pfVar32[4];
              fStack_504 = pfVar32[5];
              fStack_500 = pfVar32[6];
              fStack_4fc = fRam0000000146863b6c;
              local_9a8 = fStack_534 * local_568 + local_538 * local_578 + fStack_530 * local_558 +
                          fStack_52c * local_3a8;
              fStack_9a4 = fStack_534 * fStack_564 + local_538 * fStack_574 +
                           fStack_530 * fStack_554 + fStack_52c * fStack_3a4;
              fStack_9a0 = fStack_534 * fStack_560 + local_538 * fStack_570 +
                           fStack_530 * fStack_550 + fStack_52c * fStack_3a0;
              fStack_99c = fStack_534 * fStack_56c + local_538 * fStack_56c +
                           fStack_530 * fStack_56c + fStack_52c * fRam0000000146863b6c;
              local_998 = fStack_524 * local_568 + local_528 * local_578 + fStack_520 * local_558 +
                          fStack_52c * local_3a8;
              fStack_994 = fStack_524 * fStack_564 + local_528 * fStack_574 +
                           fStack_520 * fStack_554 + fStack_52c * fStack_3a4;
              fStack_990 = fStack_524 * fStack_560 + local_528 * fStack_570 +
                           fStack_520 * fStack_550 + fStack_52c * fStack_3a0;
              fStack_98c = fStack_524 * fStack_56c + local_528 * fStack_56c +
                           fStack_520 * fStack_56c + fStack_52c * fRam0000000146863b6c;
              local_988 = fStack_514 * local_568 + local_518 * local_578 + fStack_510 * local_558 +
                          fStack_52c * local_3a8;
              fStack_984 = fStack_514 * fStack_564 + local_518 * fStack_574 +
                           fStack_510 * fStack_554 + fStack_52c * fStack_3a4;
              fStack_980 = fStack_514 * fStack_560 + local_518 * fStack_570 +
                           fStack_510 * fStack_550 + fStack_52c * fStack_3a0;
              fStack_97c = fStack_514 * fStack_56c + local_518 * fStack_56c +
                           fStack_510 * fStack_56c + fStack_52c * fRam0000000146863b6c;
              local_978 = fStack_504 * local_568 + local_508 * local_578 + fStack_500 * local_558 +
                          fRam0000000146863b6c * local_3a8;
              fStack_974 = fStack_504 * fStack_564 + local_508 * fStack_574 +
                           fStack_500 * fStack_554 + fRam0000000146863b6c * fStack_3a4;
              fStack_970 = fStack_504 * fStack_560 + local_508 * fStack_570 +
                           fStack_500 * fStack_550 + fRam0000000146863b6c * fStack_3a0;
              fStack_96c = fStack_504 * fStack_56c + local_508 * fStack_56c +
                           fStack_500 * fStack_56c + fRam0000000146863b6c * fRam0000000146863b6c;
              fStack_55c = fStack_56c;
              fStack_54c = fStack_56c;
              fStack_51c = fStack_52c;
              fStack_50c = fStack_52c;
              FMatrix::RemoveScaling(&local_9a8);
              fVar48 = (float)(-(uint)(fVar69 <= fVar79) & (_DAT_146863bd0 ^ (uint)fVar48) ^
                              _DAT_146863bd0);
              fVar47 = (float)(-(uint)(fVar78 <= fVar80) & (uRam0000000146863bd4 ^ (uint)fVar47) ^
                              uRam0000000146863bd4);
              fVar60 = (float)(-(uint)(fVar76 <= fVar81) & (uRam0000000146863bd8 ^ (uint)fVar60) ^
                              uRam0000000146863bd8);
              local_9a8 = local_9a8 * fVar48;
              fStack_9a4 = fStack_9a4 * fVar48;
              fStack_9a0 = fStack_9a0 * fVar48;
              fStack_994 = fStack_994 * fVar47;
              fStack_990 = fStack_990 * fVar47;
              local_998 = local_998 * fVar47;
              fStack_984 = fStack_984 * fVar60;
              fStack_980 = fStack_980 * fVar60;
              local_988 = local_988 * fVar60;
              FQuat::FQuat(&local_9f8,&local_9a8);
              local_a18 = CONCAT44(local_a18._4_4_,0x322bcc77);
              local_248 = CONCAT44(fVar80,fVar79);
              uStack_240 = CONCAT44(fVar82,fVar81);
              auVar63._0_4_ = local_9f8 * local_9f8 + fStack_9f0 * fStack_9f0;
              auVar63._4_4_ = fStack_9f4 * fStack_9f4 + fStack_9ec * fStack_9ec;
              auVar63._8_4_ = fStack_9f0 * fStack_9f0 + local_9f8 * local_9f8;
              auVar63._12_4_ = fStack_9ec * fStack_9ec + fStack_9f4 * fStack_9f4;
              fVar78 = auVar63._4_4_ + auVar63._0_4_;
              fVar76 = auVar63._8_4_ + auVar63._4_4_;
              fVar68 = auVar63._12_4_ + auVar63._8_4_;
              fVar77 = auVar63._0_4_ + auVar63._12_4_;
              auVar6._4_4_ = fVar76;
              auVar6._0_4_ = fVar78;
              auVar6._8_4_ = fVar68;
              auVar6._12_4_ = fVar77;
              auVar58 = rsqrtps(auVar63,auVar6);
              fVar48 = auVar58._0_4_;
              fVar47 = auVar58._4_4_;
              fVar60 = auVar58._8_4_;
              fVar69 = auVar58._12_4_;
              fVar48 = (_DAT_146863bc0 - fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                       fVar48;
              fVar47 = (fRam0000000146863bc4 - fVar47 * fVar47 * fVar76 * fRam0000000146863bc4) *
                       fVar47 + fVar47;
              fVar60 = (fRam0000000146863bc8 - fVar60 * fVar60 * fVar68 * fRam0000000146863bc8) *
                       fVar60 + fVar60;
              fVar69 = (fRam0000000146863bcc - fVar69 * fVar69 * fVar77 * fRam0000000146863bcc) *
                       fVar69 + fVar69;
              local_258._4_4_ = fStack_974;
              local_258._0_4_ = local_978;
              local_258._8_4_ = fStack_970;
              local_9f8 = (float)(((uint)(((_DAT_146863bc0 -
                                           fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                                          fVar48) * local_9f8) ^ _DAT_146863bb0) &
                                  -(uint)(1e-08 <= fVar78) ^ _DAT_146863bb0);
              fStack_9f4 = (float)(((uint)(((fRam0000000146863bc4 -
                                            fVar47 * fVar47 * fVar76 * fRam0000000146863bc4) *
                                            fVar47 + fVar47) * fStack_9f4) ^ uRam0000000146863bb4) &
                                   -(uint)(1e-08 <= fVar76) ^ uRam0000000146863bb4);
              fStack_9f0 = (float)(((uint)(((fRam0000000146863bc8 -
                                            fVar60 * fVar60 * fVar68 * fRam0000000146863bc8) *
                                            fVar60 + fVar60) * fStack_9f0) ^ uRam0000000146863bb8) &
                                   -(uint)(1e-08 <= fVar68) ^ uRam0000000146863bb8);
              fStack_9ec = (float)(((uint)(((fRam0000000146863bcc -
                                            fVar69 * fVar69 * fVar77 * fRam0000000146863bcc) *
                                            fVar69 + fVar69) * fStack_9ec) ^ uRam0000000146863bbc) &
                                   -(uint)(1e-08 <= fVar77) ^ uRam0000000146863bbc);
              local_268 = CONCAT44(fStack_9f4,local_9f8);
              uStack_260 = CONCAT44(fStack_9ec,fStack_9f0);
              local_258._12_4_ = 0.0;
            }
          }
          else {
            if (iVar27 != 2) goto LAB_140950faa;
            FUN_14162bcf0(pfVar32,&local_268,&local_388);
          }
          FUN_140957ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar30 * 8),
                        &local_268);
        }
      }
      *(undefined8 *)(param_1 + 0x290) = local_3b8;
      *(undefined8 *)(param_1 + 0x298) = uStack_3b0;
      auVar17._4_4_ = fStack_3a4;
      auVar17._0_4_ = local_3a8;
      auVar17._8_4_ = fStack_3a0;
      auVar17._12_4_ = fStack_39c;
      *(undefined1 (*) [16])(param_1 + 0x2a0) = auVar17;
      *(ulonglong *)(param_1 + 0x2b0) = CONCAT44(fStack_394,local_398);
      *(ulonglong *)(param_1 + 0x2b8) = CONCAT44(fStack_38c,fStack_390);
      *(undefined1 *)(param_1 + 0x5bc) = 0;
      fVar48 = DAT_1468b5d94;
      *(float *)(param_1 + 0x5b0) = DAT_1468b5d90;
      *(float *)(param_1 + 0x5b4) = fVar48;
      *(float *)(param_1 + 0x5b8) = DAT_1468b5d98;
    }
    puVar36 = *(undefined4 **)(param_1 + 0x1c8);
    puVar44 = puVar36 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
    for (; puVar36 != puVar44; puVar36 = puVar36 + 8) {
      if (*(char *)((longlong)(int)puVar36[1] * 0x40 + *(longlong *)(param_1 + 0x1f8)) != '\0') {
        lVar37 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)(int)puVar36[1] * 8);
        uVar33 = P2UTransform(local_148,
                              (longlong)*(int *)(lVar37 + 0x38) * 0x60 + 0x30 +
                              *(longlong *)(*(longlong *)(lVar37 + 0x30) + 0x50));
        uVar29 = FUN_14162bfb0(lVar37,&local_1d8,uVar33);
        fVar76 = fRam0000000146863b68;
        fVar78 = fRam0000000146863b64;
        fVar69 = _DAT_146863b60;
        iVar30 = *(int *)(param_1 + 0x188);
        fVar68 = local_1d8;
        fVar77 = fStack_1d4;
        fVar70 = fStack_1d0;
        fVar73 = fStack_1cc;
        fVar48 = local_1c8;
        fVar47 = fStack_1c4;
        fVar60 = fStack_1c0;
        fVar72 = fStack_1bc;
        fVar84 = local_1b8;
        fVar85 = fStack_1b4;
        fVar86 = fStack_1b0;
        fVar87 = fStack_1ac;
        if (iVar30 != 0) {
          if (iVar30 == 1) {
            pfVar32 = (float *)FUN_14162bcf0(&local_1d8,local_118,&local_3b8);
            fVar48 = pfVar32[4];
            fVar47 = pfVar32[5];
            fVar60 = pfVar32[6];
            fVar68 = *pfVar32;
            fVar77 = pfVar32[1];
            fVar70 = pfVar32[2];
            fVar73 = pfVar32[3];
            fVar72 = pfVar32[7];
            fVar84 = pfVar32[8];
            fVar85 = pfVar32[9];
            fVar86 = pfVar32[10];
            fVar87 = pfVar32[0xb];
          }
          else if (iVar30 == 2) {
            auVar24._4_4_ = fStack_1b4;
            auVar24._0_4_ = local_1b8;
            auVar24._8_4_ = fStack_1b0;
            auVar24._12_4_ = fStack_1ac;
            auVar22._4_4_ = fStack_364;
            auVar22._0_4_ = local_368;
            auVar22._8_4_ = fStack_360;
            auVar22._12_4_ = fStack_35c;
            auVar58 = minps(auVar24,auVar22);
            local_9b8 = _DAT_146863be0;
            fStack_9b4 = fRam0000000146863be4;
            fStack_9b0 = fRam0000000146863be8;
            fStack_9ac = fRam0000000146863bec;
            auVar59._4_4_ = -(uint)(auVar58._4_4_ < fRam0000000146863be4);
            auVar59._0_4_ = -(uint)(auVar58._0_4_ < _DAT_146863be0);
            auVar59._8_4_ = -(uint)(auVar58._8_4_ < fRam0000000146863be8);
            auVar59._12_4_ = -(uint)(auVar58._12_4_ < fRam0000000146863bec);
            iVar30 = movmskps(uVar29,auVar59);
            if (iVar30 == 0) {
              fVar48 = local_368 * local_1c8;
              fVar47 = fStack_364 * fStack_1c4;
              fVar68 = fStack_360 * fStack_1c0;
              fVar72 = fStack_35c * fStack_1bc;
              fVar60 = fVar68 * local_388._4_4_ - fVar47 * (float)uStack_380;
              fVar69 = fVar48 * (float)uStack_380 - fVar68 * (float)local_388;
              fVar78 = fVar47 * (float)local_388 - fVar48 * local_388._4_4_;
              fVar76 = fVar72 * uStack_380._4_4_ - fVar72 * uStack_380._4_4_;
              fVar60 = fVar60 + fVar60;
              fVar69 = fVar69 + fVar69;
              fVar78 = fVar78 + fVar78;
              fVar76 = fVar76 + fVar76;
              fVar48 = (fVar78 * local_388._4_4_ - fVar69 * (float)uStack_380) +
                       fVar60 * uStack_380._4_4_ + fVar48 + (float)local_378._0_4_;
              fVar47 = (fVar60 * (float)uStack_380 - fVar78 * (float)local_388) +
                       fVar69 * uStack_380._4_4_ + fVar47 + (float)local_378._4_4_;
              fVar60 = (fVar69 * (float)local_388 - fVar60 * local_388._4_4_) +
                       fVar78 * uStack_380._4_4_ + fVar68 + fStack_370;
              fVar68 = (float)local_388 * fStack_1cc * _DAT_146863ba0 + uStack_380._4_4_ * local_1d8
                       + local_388._4_4_ * fStack_1d0 * _DAT_146863b90 +
                       (float)uStack_380 * fStack_1d4 * _DAT_146863b80;
              fVar77 = (float)local_388 * fStack_1d0 * fRam0000000146863ba4 +
                       uStack_380._4_4_ * fStack_1d4 +
                       local_388._4_4_ * fStack_1cc * fRam0000000146863b94 +
                       (float)uStack_380 * local_1d8 * fRam0000000146863b84;
              fVar70 = (float)local_388 * fStack_1d4 * fRam0000000146863ba8 +
                       uStack_380._4_4_ * fStack_1d0 +
                       local_388._4_4_ * local_1d8 * fRam0000000146863b98 +
                       (float)uStack_380 * fStack_1cc * fRam0000000146863b88;
              fVar73 = (float)local_388 * local_1d8 * fRam0000000146863bac +
                       uStack_380._4_4_ * fStack_1cc +
                       local_388._4_4_ * fStack_1d4 * fRam0000000146863b9c +
                       (float)uStack_380 * fStack_1d0 * fRam0000000146863b8c;
              fVar72 = (fVar76 * uStack_380._4_4_ - fVar76 * uStack_380._4_4_) +
                       fVar76 * uStack_380._4_4_ + fVar72 + fStack_36c;
              fVar84 = local_368 * local_1b8;
              fVar85 = fStack_364 * fStack_1b4;
              fVar86 = fStack_360 * fStack_1b0;
              fVar87 = fStack_35c * fStack_1ac;
            }
            else {
              fVar48 = local_388._4_4_ + local_388._4_4_;
              fVar47 = (float)uStack_380 + (float)uStack_380;
              fVar68 = (float)local_388 * ((float)local_388 + (float)local_388);
              fVar60 = uStack_380._4_4_ * ((float)local_388 + (float)local_388);
              fVar84 = local_368 * local_1b8;
              fVar85 = fStack_364 * fStack_1b4;
              fVar86 = fStack_360 * fStack_1b0;
              fVar87 = fStack_35c * fStack_1ac;
              fStack_734 = (uStack_380._4_4_ * fVar47 + (float)local_388 * fVar48) * local_368;
              fStack_720 = (fVar60 + local_388._4_4_ * fVar47) * fStack_364;
              local_718 = (uStack_380._4_4_ * fVar48 + (float)local_388 * fVar47) * fStack_360;
              local_728 = fStack_364 * ((float)local_388 * fVar48 - uStack_380._4_4_ * fVar47);
              fStack_714 = fStack_360 * (local_388._4_4_ * fVar47 - fVar60);
              fStack_730 = local_368 * ((float)local_388 * fVar47 - uStack_380._4_4_ * fVar48);
              local_738 = (float)((uint)((_DAT_146863b60 -
                                         ((float)uStack_380 * fVar47 + local_388._4_4_ * fVar48)) *
                                        local_368) & _DAT_146863b70);
              fStack_724 = (float)((uint)((fRam0000000146863b64 -
                                          ((float)uStack_380 * fVar47 + fVar68)) * fStack_364) &
                                  uRam0000000146863b74);
              fStack_710 = (float)((uint)((fRam0000000146863b68 -
                                          (local_388._4_4_ * fVar48 + fVar68)) * fStack_360) &
                                  uRam0000000146863b78);
              fStack_72c = (float)((uint)((fRam0000000146863b6c - (fVar68 + fVar68)) * fStack_35c) &
                                  uRam0000000146863b7c);
              fVar48 = fStack_1d4 + fStack_1d4;
              fVar60 = fStack_1d0 + fStack_1d0;
              fVar68 = (local_1d8 + local_1d8) * local_1d8;
              fVar47 = (local_1d8 + local_1d8) * fStack_1cc;
              local_708 = (float)local_378._0_4_;
              fStack_704 = (float)local_378._4_4_;
              fStack_700 = fStack_370;
              fStack_6fc = fRam0000000146863b6c;
              fStack_6f4 = (fVar60 * fStack_1cc + fVar48 * local_1d8) * local_1b8;
              fStack_6e0 = (fVar47 + fVar60 * fStack_1d4) * fStack_1b4;
              local_6d8 = (fVar48 * fStack_1cc + fVar60 * local_1d8) * fStack_1b0;
              local_6e8 = fStack_1b4 * (fVar48 * local_1d8 - fVar60 * fStack_1cc);
              fStack_6d4 = fStack_1b0 * (fVar60 * fStack_1d4 - fVar47);
              fStack_6f0 = local_1b8 * (fVar60 * local_1d8 - fVar48 * fStack_1cc);
              local_6f8 = (float)((uint)((_DAT_146863b60 -
                                         (fVar60 * fStack_1d0 + fVar48 * fStack_1d4)) * local_1b8) &
                                 _DAT_146863b70);
              fStack_6e4 = (float)((uint)((fRam0000000146863b64 - (fVar60 * fStack_1d0 + fVar68)) *
                                         fStack_1b4) & uRam0000000146863b74);
              fStack_6d0 = (float)((uint)((fRam0000000146863b68 - (fVar48 * fStack_1d4 + fVar68)) *
                                         fStack_1b0) & uRam0000000146863b78);
              fStack_6ec = (float)((uint)((fRam0000000146863b6c - (fVar68 + fVar68)) * fStack_1ac) &
                                  uRam0000000146863b7c);
              local_6c8 = local_1c8;
              fStack_6c4 = fStack_1c4;
              fStack_6c0 = fStack_1c0;
              fStack_6bc = fRam0000000146863b6c;
              local_818 = fStack_6f4 * local_728 + local_6f8 * local_738 + fStack_6f0 * local_718 +
                          fStack_6ec * (float)local_378._0_4_;
              fStack_814 = fStack_6f4 * fStack_724 + local_6f8 * fStack_734 +
                           fStack_6f0 * fStack_714 + fStack_6ec * (float)local_378._4_4_;
              fStack_810 = fStack_6f4 * fStack_720 + local_6f8 * fStack_730 +
                           fStack_6f0 * fStack_710 + fStack_6ec * fStack_370;
              fStack_80c = fStack_6f4 * fStack_72c + local_6f8 * fStack_72c +
                           fStack_6f0 * fStack_72c + fStack_6ec * fRam0000000146863b6c;
              local_808 = fStack_6e4 * local_728 + local_6e8 * local_738 + fStack_6e0 * local_718 +
                          fStack_6ec * (float)local_378._0_4_;
              fStack_804 = fStack_6e4 * fStack_724 + local_6e8 * fStack_734 +
                           fStack_6e0 * fStack_714 + fStack_6ec * (float)local_378._4_4_;
              fStack_800 = fStack_6e4 * fStack_720 + local_6e8 * fStack_730 +
                           fStack_6e0 * fStack_710 + fStack_6ec * fStack_370;
              fStack_7fc = fStack_6e4 * fStack_72c + local_6e8 * fStack_72c +
                           fStack_6e0 * fStack_72c + fStack_6ec * fRam0000000146863b6c;
              local_7f8 = fStack_6d4 * local_728 + local_6d8 * local_738 + fStack_6d0 * local_718 +
                          fStack_6ec * (float)local_378._0_4_;
              fStack_7f4 = fStack_6d4 * fStack_724 + local_6d8 * fStack_734 +
                           fStack_6d0 * fStack_714 + fStack_6ec * (float)local_378._4_4_;
              fStack_7f0 = fStack_6d4 * fStack_720 + local_6d8 * fStack_730 +
                           fStack_6d0 * fStack_710 + fStack_6ec * fStack_370;
              fStack_7ec = fStack_6d4 * fStack_72c + local_6d8 * fStack_72c +
                           fStack_6d0 * fStack_72c + fStack_6ec * fRam0000000146863b6c;
              local_7e8 = fStack_1c4 * local_728 + local_1c8 * local_738 + fStack_1c0 * local_718 +
                          fRam0000000146863b6c * (float)local_378._0_4_;
              fStack_7e4 = fStack_1c4 * fStack_724 + local_1c8 * fStack_734 +
                           fStack_1c0 * fStack_714 + fRam0000000146863b6c * (float)local_378._4_4_;
              fStack_7e0 = fStack_1c4 * fStack_720 + local_1c8 * fStack_730 +
                           fStack_1c0 * fStack_710 + fRam0000000146863b6c * fStack_370;
              fStack_7dc = fStack_1c4 * fStack_72c + local_1c8 * fStack_72c +
                           fStack_1c0 * fStack_72c + fRam0000000146863b6c * fRam0000000146863b6c;
              fStack_71c = fStack_72c;
              fStack_70c = fStack_72c;
              fStack_6dc = fStack_6ec;
              fStack_6cc = fStack_6ec;
              FMatrix::RemoveScaling(&local_818);
              fVar48 = (float)(-(uint)(local_9b8 <= fVar84) & (_DAT_146863bd0 ^ (uint)fVar69) ^
                              _DAT_146863bd0);
              fVar47 = (float)(-(uint)(fStack_9b4 <= fVar85) & (uRam0000000146863bd4 ^ (uint)fVar78)
                              ^ uRam0000000146863bd4);
              fVar60 = (float)(-(uint)(fStack_9b0 <= fVar86) & (uRam0000000146863bd8 ^ (uint)fVar76)
                              ^ uRam0000000146863bd8);
              pfVar32 = (float *)FMatrix::GetScaledAxis(&local_818,local_768,1);
              local_818 = fVar48 * *pfVar32;
              fStack_814 = fVar48 * pfVar32[1];
              fStack_810 = fVar48 * pfVar32[2];
              pfVar32 = (float *)FMatrix::GetScaledAxis(&local_818,local_75c,2);
              local_808 = fVar47 * *pfVar32;
              fStack_804 = fVar47 * pfVar32[1];
              fStack_800 = fVar47 * pfVar32[2];
              pfVar32 = (float *)FMatrix::GetScaledAxis(&local_818,local_750,3);
              local_7f8 = fVar60 * *pfVar32;
              fStack_7f4 = fVar60 * pfVar32[1];
              fStack_7f0 = fVar60 * pfVar32[2];
              FQuat::FQuat(&local_9f8,&local_818);
              local_a18 = CONCAT44(local_a18._4_4_,0x322bcc77);
              auVar67._0_4_ = local_9f8 * local_9f8 + fStack_9f0 * fStack_9f0;
              auVar67._4_4_ = fStack_9f4 * fStack_9f4 + fStack_9ec * fStack_9ec;
              auVar67._8_4_ = fStack_9f0 * fStack_9f0 + local_9f8 * local_9f8;
              auVar67._12_4_ = fStack_9ec * fStack_9ec + fStack_9f4 * fStack_9f4;
              fVar78 = auVar67._4_4_ + auVar67._0_4_;
              fVar76 = auVar67._8_4_ + auVar67._4_4_;
              fVar68 = auVar67._12_4_ + auVar67._8_4_;
              fVar77 = auVar67._0_4_ + auVar67._12_4_;
              auVar5._4_4_ = fVar76;
              auVar5._0_4_ = fVar78;
              auVar5._8_4_ = fVar68;
              auVar5._12_4_ = fVar77;
              auVar58 = rsqrtps(auVar67,auVar5);
              fVar48 = auVar58._0_4_;
              fVar47 = auVar58._4_4_;
              fVar60 = auVar58._8_4_;
              fVar69 = auVar58._12_4_;
              fVar48 = (_DAT_146863bc0 - fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                       fVar48;
              fVar47 = (fRam0000000146863bc4 - fVar47 * fVar47 * fVar76 * fRam0000000146863bc4) *
                       fVar47 + fVar47;
              fVar60 = (fRam0000000146863bc8 - fVar60 * fVar60 * fVar68 * fRam0000000146863bc8) *
                       fVar60 + fVar60;
              fVar69 = (fRam0000000146863bcc - fVar69 * fVar69 * fVar77 * fRam0000000146863bcc) *
                       fVar69 + fVar69;
              local_9f8 = (float)(((uint)(((_DAT_146863bc0 -
                                           fVar48 * fVar48 * fVar78 * _DAT_146863bc0) * fVar48 +
                                          fVar48) * local_9f8) ^ _DAT_146863bb0) &
                                  -(uint)(1e-08 <= fVar78) ^ _DAT_146863bb0);
              fStack_9f4 = (float)(((uint)(((fRam0000000146863bc4 -
                                            fVar47 * fVar47 * fVar76 * fRam0000000146863bc4) *
                                            fVar47 + fVar47) * fStack_9f4) ^ uRam0000000146863bb4) &
                                   -(uint)(1e-08 <= fVar76) ^ uRam0000000146863bb4);
              fStack_9f0 = (float)(((uint)(((fRam0000000146863bc8 -
                                            fVar60 * fVar60 * fVar68 * fRam0000000146863bc8) *
                                            fVar60 + fVar60) * fStack_9f0) ^ uRam0000000146863bb8) &
                                   -(uint)(1e-08 <= fVar68) ^ uRam0000000146863bb8);
              fStack_9ec = (float)(((uint)(((fRam0000000146863bcc -
                                            fVar69 * fVar69 * fVar77 * fRam0000000146863bcc) *
                                            fVar69 + fVar69) * fStack_9ec) ^ uRam0000000146863bbc) &
                                   -(uint)(1e-08 <= fVar77) ^ uRam0000000146863bbc);
              fVar68 = local_9f8;
              fVar77 = fStack_9f4;
              fVar70 = fStack_9f0;
              fVar73 = fStack_9ec;
              fVar48 = local_7e8;
              fVar47 = fStack_7e4;
              fVar60 = fStack_7e0;
              fVar72 = 0.0;
            }
          }
        }
        local_7d8 = *puVar36;
        iVar30 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar30 + 1;
        local_7c8 = fVar68;
        fStack_7c4 = fVar77;
        fStack_7c0 = fVar70;
        fStack_7bc = fVar73;
        local_7b8 = fVar48;
        fStack_7b4 = fVar47;
        fStack_7b0 = fVar60;
        fStack_7ac = fVar72;
        local_7a8 = fVar84;
        fStack_7a4 = fVar85;
        fStack_7a0 = fVar86;
        fStack_79c = fVar87;
        if (*(int *)((longlong)param_3 + 0xc) < iVar30 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_3,iVar30);
        }
        puVar35 = (undefined4 *)((longlong)iVar30 * 0x40 + *param_3);
        *puVar35 = local_7d8;
        *(ulonglong *)(puVar35 + 4) = CONCAT44(fStack_7c4,local_7c8);
        *(ulonglong *)(puVar35 + 6) = CONCAT44(fStack_7bc,fStack_7c0);
        auVar16._4_4_ = fStack_7b4;
        auVar16._0_4_ = local_7b8;
        auVar16._8_4_ = fStack_7b0;
        auVar16._12_4_ = fStack_7ac;
        *(undefined1 (*) [16])(puVar35 + 8) = auVar16;
        puVar35[0xc] = local_7a8;
        puVar35[0xd] = fStack_7a4;
        puVar35[0xe] = fStack_7a0;
        puVar35[0xf] = fStack_79c;
      }
    }
    *(undefined8 *)(param_1 + 0x290) = local_3b8;
    *(undefined8 *)(param_1 + 0x298) = uStack_3b0;
    *(ulonglong *)(param_1 + 0x2a0) = CONCAT44(fStack_3a4,local_3a8);
    *(ulonglong *)(param_1 + 0x2a8) = CONCAT44(fStack_39c,fStack_3a0);
    *(ulonglong *)(param_1 + 0x2b0) = CONCAT44(fStack_394,local_398);
    *(ulonglong *)(param_1 + 0x2b8) = CONCAT44(fStack_38c,fStack_390);
  }
  return;
}



// FUNCTION 140953040 FindBoneIndex body=172 status=ok
// SIG undefined FindBoneIndex(void)

undefined4 FReferenceSkeleton::FindBoneIndex(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
      lVar3 = *(longlong *)(param_1 + 0xd0);
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        lVar3 = param_1 + 200;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                               (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 0x18) == lVar1) {
            if (iVar2 != -1) goto LAB_1409530d3;
            break;
          }
          iVar2 = puVar5[4];
        } while (iVar2 != -1);
      }
    }
    puVar5 = (undefined4 *)0x0;
LAB_1409530d3:
    puVar4 = puVar5 + 2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      return *puVar4;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1409530f0 FUN_1409530f0 body=691 status=ok
// SIG undefined FUN_1409530f0(void)

void FUN_1409530f0(longlong param_1,float *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 local_res8;
  void *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  if (param_2[8] == 0.0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)(param_2 + 6);
  }
  lVar3 = FUN_14095bfe0();
  local_res8 = *(undefined8 *)(lVar3 + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar4 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar4 = local_38;
  }
  FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s",puVar4,(double)(*param_2 * 100.0),puVar5);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar5 = local_38;
  FGenericPlatformString::Convert<char,wchar_t>(local_38,2,&DAT_14416745c,2,0x3f);
  iVar2 = local_40;
  if (((int)local_30 != 0) && (iVar6 = (int)local_30 + -1, iVar6 != 0)) {
    lVar3 = (longlong)local_40;
    local_40 = (uint)(local_40 == 0) + local_40 + iVar6;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar2);
    }
    pvVar1 = (void *)((longlong)local_48 + (lVar3 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar5,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  FUN_141f85ec0(param_1,&local_48);
  local_38 = (undefined2 *)0x0;
  local_30 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar5 = local_38;
  FGenericPlatformString::Convert<char,wchar_t>(local_38,2,&DAT_14416747c,2,0x3f);
  iVar2 = local_40;
  if (((int)local_30 != 0) && (iVar6 = (int)local_30 + -1, iVar6 != 0)) {
    lVar3 = (longlong)local_40;
    local_40 = (uint)(local_40 == 0) + local_40 + iVar6;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar2);
    }
    pvVar1 = (void *)((longlong)local_48 + (lVar3 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar5,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  pvVar1 = local_48;
  lVar3 = (longlong)local_40;
  local_38 = (undefined2 *)0x0;
  local_30 = CONCAT44(local_30._4_4_,local_40);
  if (local_40 == 0) {
    local_30 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_38,0);
  if (((*(char *)(param_1 + 0x1b1) == '\0') || (*(char *)(param_1 + 0x5bd) == '\0')) ||
     (*(int *)(param_1 + 0x4f0) < 1)) {
    FPoseLinkBase::GatherDebugData(param_1 + 0x30,param_2);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409533b0 GenerateContacts body=2171 status=ok
// SIG undefined GenerateContacts(void)

void ImmediatePhysics::FSimulation::GenerateContacts(longlong param_1)

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
  uint uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float *pfVar27;
  int iVar28;
  ulonglong uVar29;
  float *pfVar30;
  uint uVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 local_130 [2];
  undefined **local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  uint local_100;
  uint local_fc;
  int local_f8;
  
  lVar18 = 0;
  iVar13 = 1 - *(int *)(param_1 + 0x268);
  *(int *)(param_1 + 0x268) = iVar13;
  lVar17 = (longlong)iVar13;
  lVar15 = *(longlong *)(param_1 + 0x250 + lVar17 * 0x10);
  uVar14 = 0;
  if (lVar15 != 0) {
    do {
      *(undefined4 *)(lVar15 + 0x10010) = 0;
      lVar15 = *(longlong *)(lVar15 + 0x10000);
    } while (lVar15 != 0);
    uVar14 = *(undefined8 *)(param_1 + 0x250 + lVar17 * 0x10);
  }
  *(undefined8 *)(param_1 + 0x248 + lVar17 * 0x10) = uVar14;
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x164)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x158,0);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(int *)(param_1 + 0x9c) < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x90,0);
  }
  iVar13 = *(int *)(param_1 + 0xa8);
  lVar17 = (longlong)iVar13;
  lVar15 = FLinearBlockAllocator::Alloc(param_1 + 0x40,iVar13 * 0x1c);
  if (0 < iVar13) {
    pfVar27 = (float *)(lVar15 + 0x18);
    do {
      lVar22 = *(longlong *)(param_1 + 0xa0) + (-0x18 - lVar15);
      fVar33 = *(float *)((longlong)pfVar27 + lVar22 + 0x10);
      fVar45 = *(float *)((longlong)pfVar27 + lVar22 + 0x14);
      fVar33 = fVar33 + fVar33;
      fVar48 = *(float *)((longlong)pfVar27 + lVar22 + 0x18);
      fVar45 = fVar45 + fVar45;
      lVar22 = (longlong)*(int *)(*(longlong *)(param_1 + 0xf0) + lVar18 * 4) * 0x60 +
               *(longlong *)(param_1 + 0x50);
      fVar48 = fVar48 + fVar48;
      fVar41 = *(float *)(lVar22 + 0x3c);
      fVar1 = *(float *)(lVar22 + 0x30);
      fVar2 = *(float *)(lVar22 + 0x34);
      fVar3 = *(float *)(lVar22 + 0x38);
      fVar46 = fVar41 * fVar41 - 0.5;
      fVar40 = fVar1 * fVar33 + fVar2 * fVar45 + fVar3 * fVar48;
      puVar16 = (undefined8 *)physx::PxQuat::operator*(lVar22 + 0x30,local_130);
      fVar4 = *(float *)(lVar22 + 0x40);
      fVar5 = *(float *)(lVar22 + 0x44);
      fVar6 = *(float *)(lVar22 + 0x48);
      uVar14 = puVar16[1];
      lVar18 = lVar18 + 1;
      *(undefined8 *)(pfVar27 + -6) = *puVar16;
      *(undefined8 *)(pfVar27 + -4) = uVar14;
      pfVar27[-2] = (fVar2 * fVar48 - fVar3 * fVar45) * fVar41 + fVar46 * fVar33 + fVar1 * fVar40 +
                    fVar4;
      *pfVar27 = (fVar1 * fVar45 - fVar2 * fVar33) * fVar41 + fVar46 * fVar48 + fVar3 * fVar40 +
                 fVar6;
      pfVar27[-1] = (fVar3 * fVar33 - fVar1 * fVar48) * fVar41 + fVar46 * fVar45 + fVar2 * fVar40 +
                    fVar5;
      pfVar27 = pfVar27 + 7;
    } while (lVar18 < lVar17);
  }
  uVar19 = 0;
  iVar13 = *(int *)(param_1 + 0x238);
  uVar23 = uVar19;
  uVar25 = uVar19;
  uVar26 = uVar19;
  uVar29 = uVar19;
  if (*(int *)(param_1 + 0x174) != 0) {
    do {
      lVar22 = (longlong)(int)uVar23;
      fVar33 = *(float *)(*(longlong *)(param_1 + 0xd0) + lVar22 * 4);
      lVar18 = *(longlong *)(param_1 + 0xe0);
      pfVar27 = (float *)(uVar23 * 0x1c + lVar15);
      fVar45 = *(float *)(lVar18 + lVar22 * 0xc);
      fVar48 = *(float *)(lVar18 + 4 + lVar22 * 0xc);
      fVar45 = fVar45 + fVar45;
      fVar41 = *(float *)(lVar18 + 8 + lVar22 * 0xc);
      fVar48 = fVar48 + fVar48;
      fVar1 = pfVar27[3];
      fVar41 = fVar41 + fVar41;
      fVar2 = pfVar27[1];
      fVar3 = *pfVar27;
      fVar4 = pfVar27[2];
      fVar38 = fVar1 * fVar1 - 0.5;
      fVar46 = fVar3 * fVar45 + fVar2 * fVar48 + fVar4 * fVar41;
      fVar5 = pfVar27[4];
      fVar6 = pfVar27[6];
      fVar40 = pfVar27[5];
      uVar10 = *(uint *)(*(longlong *)(param_1 + 0xf0) + lVar22 * 4);
      lVar18 = *(longlong *)(param_1 + 0xb0);
      local_130[0] = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar22 * 8);
      if (*(uint *)(param_1 + 0x16c) <= uVar10) {
        return;
      }
      uVar21 = (int)uVar23 + 1;
      lVar20 = (longlong)(int)uVar21;
      if (lVar20 < lVar17) {
        lVar32 = lVar20 * 0xc;
        pfVar30 = (float *)(lVar15 + 0x18 + lVar20 * 0x1c);
        uVar31 = uVar21;
        do {
          if (((longlong)uVar19 < (longlong)iVar13) &&
             (iVar28 = (int)uVar29, uVar29 = (ulonglong)(iVar28 + 1),
             *(int *)(*(longlong *)(param_1 + 0x230) + uVar19 * 4) == iVar28)) {
            uVar19 = uVar19 + 1;
          }
          else {
            local_fc = *(uint *)(*(longlong *)(param_1 + 0xf0) + lVar20 * 4);
            if ((local_fc < *(uint *)(param_1 + 0x16c)) || (*(uint *)(param_1 + 0x168) <= local_fc))
            {
              local_f8 = (int)uVar25;
              uVar24 = local_f8 + 1;
              puVar16 = (undefined8 *)(uVar26 * 0x20 + *(longlong *)(param_1 + 0x100));
              uVar26 = uVar26 + 1;
              if (*(int *)((longlong)puVar16 + 0x1c) + 1 != *(int *)(param_1 + 0x180)) {
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                puVar16[3] = 0;
              }
              fVar34 = pfVar30[-3];
              fVar7 = pfVar30[-5];
              fVar8 = pfVar30[-4];
              fVar47 = fVar33 + *(float *)(*(longlong *)(param_1 + 0xd0) + lVar20 * 4);
              lVar11 = *(longlong *)(param_1 + 0xe0);
              fVar42 = fVar34 * fVar34 - 0.5;
              fVar9 = pfVar30[-6];
              fVar39 = *(float *)(lVar32 + 4 + lVar11);
              fVar44 = *(float *)(lVar32 + lVar11) + *(float *)(lVar32 + lVar11);
              fVar43 = *(float *)(lVar32 + 8 + lVar11);
              fVar39 = fVar39 + fVar39;
              fVar43 = fVar43 + fVar43;
              fVar37 = fVar9 * fVar44 + fVar7 * fVar39 + fVar8 * fVar43;
              fVar35 = ((fVar2 * fVar41 - fVar4 * fVar48) * fVar1 + fVar38 * fVar45 + fVar3 * fVar46
                       + fVar5) -
                       ((fVar7 * fVar43 - fVar8 * fVar39) * fVar34 + fVar42 * fVar44 +
                        fVar9 * fVar37 + pfVar30[-2]);
              fVar36 = ((fVar4 * fVar45 - fVar3 * fVar41) * fVar1 + fVar38 * fVar48 + fVar2 * fVar46
                       + fVar40) -
                       ((fVar8 * fVar44 - fVar9 * fVar43) * fVar34 + fVar42 * fVar39 +
                        fVar7 * fVar37 + pfVar30[-1]);
              fVar34 = ((fVar3 * fVar48 - fVar2 * fVar45) * fVar1 + fVar38 * fVar41 + fVar4 * fVar46
                       + fVar6) -
                       ((fVar9 * fVar39 - fVar7 * fVar44) * fVar34 + fVar42 * fVar43 +
                        fVar8 * fVar37 + *pfVar30);
              if (fVar36 * fVar36 + fVar35 * fVar35 + fVar34 * fVar34 <= fVar47 * fVar47) {
                local_120 = &PTR_recordContacts_144167c18;
                local_108 = *(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar31 * 0x14;
                local_118 = param_1;
                local_110 = lVar18 + lVar22 * 0x14;
                local_100 = uVar10;
                cVar12 = PxGenerateContacts(local_130,
                                            *(longlong *)(param_1 + 0xc0) +
                                            (longlong)(int)uVar31 * 8,pfVar27,pfVar30 + -6,puVar16,1
                                            ,&local_120,0x40800000,0x3f800000,0x42c80000,
                                            param_1 + 0x240);
                if (cVar12 == '\0') {
                  puVar16[2] = 0;
                  *(undefined4 *)(puVar16 + 3) = 0;
                }
              }
              else {
                *puVar16 = 0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                puVar16[3] = 0;
              }
              uVar25 = (ulonglong)uVar24;
            }
          }
          uVar31 = uVar31 + 1;
          lVar20 = lVar20 + 1;
          pfVar30 = pfVar30 + 7;
          lVar32 = lVar32 + 0xc;
        } while (lVar20 < lVar17);
      }
      uVar23 = (ulonglong)uVar21;
    } while (uVar21 < *(uint *)(param_1 + 0x174));
  }
  return;
}



// FUNCTION 140953c30 FUN_140953c30 body=228 status=ok
// SIG undefined FUN_140953c30(void)

int FUN_140953c30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = DAT_146863c18;
  cVar4 = FUN_1415ad720();
  lVar7 = 4;
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  lVar3 = DAT_146863c18;
  if (*(int *)(lVar6 + lVar2) != -1) {
    if (*(int *)(param_1 + 0x48) == -1) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
        lVar7 = 0;
      }
      return *(int *)(lVar7 + lVar3);
    }
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
      lVar7 = 0;
    }
    iVar1 = *(int *)(lVar7 + lVar3);
    if (*(int *)(param_1 + 0x48) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x48);
    }
    return iVar1;
  }
  return *(int *)(param_1 + 0x48);
}



// FUNCTION 140953d20 FUN_140953d20 body=4 status=ok
// SIG undefined FUN_140953d20(void)

undefined4 FUN_140953d20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// FUNCTION 140953d30 GetLocalSpaceTransform body=199 status=ok
// SIG undefined GetLocalSpaceTransform(void)

undefined8 *
FCSPose<FCompactPose>::GetLocalSpaceTransform(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  int local_res18 [2];
  
  if (*(char *)((longlong)param_3 + param_1[3]) != '\0') {
    local_res18[0] = param_3;
    FBoneContainer::GetParentBoneIndex(param_1[2],local_res8,local_res18);
    param_3 = local_res18[0];
    if (local_res8[0] != -1) {
      if (*(char *)((longlong)local_res8[0] + param_1[3]) == '\0') {
        FUN_14060c680(param_1);
      }
      FUN_14162bcf0((longlong)local_res18[0] * 0x30 + *param_1,param_2,
                    (longlong)local_res8[0] * 0x30 + *param_1);
      return param_2;
    }
  }
  puVar2 = (undefined8 *)((longlong)param_3 * 0x30 + *param_1);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  uVar1 = puVar2[5];
  param_2[4] = puVar2[4];
  param_2[5] = uVar1;
  return param_2;
}



// FUNCTION 140953e00 FUN_140953e00 body=109 status=ok
// SIG undefined FUN_140953e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140953e00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar1 = P2UTransform(local_48,(longlong)*(int *)(param_1 + 0x38) * 0x60 +
                                *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x30);
  FUN_14162bfb0(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 140953e70 FUN_140953e70 body=3278 status=ok
// SIG undefined FUN_140953e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140953e70(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  void **ppvVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  void *pvVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  ushort *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong *plVar28;
  longlong **pplVar29;
  longlong *plVar30;
  uint uVar31;
  bool bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined1 local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  int iStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  void *local_1a0;
  int local_198;
  int local_194;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  undefined4 local_11c;
  ulonglong local_118;
  longlong *local_110;
  undefined8 uStack_108;
  uint *local_100;
  uint uStack_f8;
  int iStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong *local_98;
  void **ppvStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong *local_68;
  void **local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_190 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(local_190 + 0x718);
  local_118 = lVar2 + 0x138;
  local_1a8 = *(longlong *)(param_1 + 0x140);
  local_1e0 = param_1;
  if (local_1a8 == 0) {
    local_1a8 = FUN_1423af5a0();
  }
  lVar13 = *(longlong *)(param_2 + 0x28);
  iVar10 = FUN_1422ac1a0(lVar13,lVar2);
  lVar2 = *(longlong *)(lVar13 + 0x2e0);
  uVar21 = 0;
  uVar31 = *(uint *)(lVar13 + 0x80);
  uVar27 = (ulonglong)uVar31;
  plVar28 = (longlong *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) < (int)uVar31) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar28,uVar31);
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(uint *)(param_1 + 500) != uVar31) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar28,uVar31);
  }
  if (0 < (int)uVar31) {
    do {
      iVar24 = *(int *)(param_1 + 0x1f0);
      *(int *)(param_1 + 0x1f0) = iVar24 + 1;
      if (*(int *)(param_1 + 500) < iVar24 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar28,iVar24);
      }
      puVar1 = (undefined4 *)(*plVar28 + (longlong)iVar24 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0xffffffff;
      }
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  lVar13 = *(longlong *)(param_2 + 0x20);
  uVar16 = *(undefined8 *)(lVar13 + 0x218);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(lVar13 + 0x210);
  *(undefined8 *)(param_1 + 0x588) = uVar16;
  uVar3 = *(undefined4 *)(lVar13 + 0x224);
  uVar4 = *(undefined4 *)(lVar13 + 0x228);
  uVar5 = *(undefined4 *)(lVar13 + 0x22c);
  *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(lVar13 + 0x220);
  *(undefined4 *)(param_1 + 0x594) = uVar3;
  *(undefined4 *)(param_1 + 0x598) = uVar4;
  *(undefined4 *)(param_1 + 0x59c) = uVar5;
  uVar3 = *(undefined4 *)(lVar13 + 0x234);
  uVar4 = *(undefined4 *)(lVar13 + 0x238);
  uVar5 = *(undefined4 *)(lVar13 + 0x23c);
  *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(lVar13 + 0x230);
  *(undefined4 *)(param_1 + 0x5a4) = uVar3;
  *(undefined4 *)(param_1 + 0x5a8) = uVar4;
  *(undefined4 *)(param_1 + 0x5ac) = uVar5;
  if ((local_1a8 != 0) &&
     ((*(longlong *)(local_190 + 0x120) != 0 || (lVar13 = FUN_1423407b0(), lVar13 != 0)))) {
    lVar13 = *(longlong *)(param_1 + 0x1c0);
    if (lVar13 != 0) {
      FUN_14094a130(lVar13);
      FMemory::operator_delete(lVar13,0x2a0);
    }
    lVar13 = operator_new(0x2a0);
    uVar27 = uVar21;
    if (lVar13 != 0) {
      uVar27 = ImmediatePhysics::FSimulation::FSimulation(lVar13);
    }
    *(ulonglong *)(param_1 + 0x1c0) = uVar27;
    iVar24 = *(int *)(local_1a8 + 0x48);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    if (*(int *)(param_1 + 0x1e4) != iVar24) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1d8,iVar24);
    }
    *(undefined4 *)(param_1 + 0x230) = 0;
    if ((*(int *)(param_1 + 0x234) < 0) && (*(int *)(param_1 + 0x234) != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x228,0);
    }
    *(undefined4 *)(param_1 + 600) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    iVar11 = *(int *)(param_1 + 0x250) + 0x1f;
    pvVar20 = *(void **)(param_1 + 0x248);
    if (*(void **)(param_1 + 0x248) == (void *)0x0) {
      pvVar20 = (void *)(param_1 + 0x238);
    }
    _guard_xfg_dispatch_icall_nop
              (pvVar20,0,(longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) << 2);
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (0 < (int)*(uint *)(param_1 + 0x270)) {
      uVar27 = (ulonglong)*(uint *)(param_1 + 0x270);
      do {
        lVar13 = *(longlong *)(param_1 + 0x268);
        if (*(longlong *)(param_1 + 0x268) == 0) {
          lVar13 = param_1 + 0x260;
        }
        uVar14 = (longlong)*(int *)(param_1 + 0x270) - 1U & uVar21;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(lVar13 + uVar14 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    plVar28 = (longlong *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x200) = 0;
    if (*(int *)(param_1 + 0x204) < iVar24) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar28,iVar24);
    }
    iVar11 = *(int *)(param_1 + 0x200);
    *(int *)(param_1 + 0x200) = iVar11 + iVar24;
    if (*(int *)(param_1 + 0x204) < iVar11 + iVar24) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar28,iVar11);
    }
    uVar7 = uRam0000000146863b7c;
    uVar6 = uRam0000000146863b78;
    uVar12 = uRam0000000146863b74;
    uVar31 = _DAT_146863b70;
    puVar17 = (undefined1 *)((longlong)iVar11 * 0x40 + *plVar28);
    if (iVar24 != 0) {
      puVar15 = (uint *)(puVar17 + 0x30);
      do {
        *puVar17 = 0;
        *(undefined1 *)((longlong)puVar15 + -0x2f) = 0;
        uVar33 = uRam0000000146863b6c;
        puVar17 = puVar17 + 0x40;
        puVar15[-8] = 0;
        puVar15[-7] = 0;
        puVar15[-6] = 0;
        puVar15[-5] = uVar33;
        puVar15[-4] = 0;
        puVar15[-3] = 0;
        puVar15[-2] = 0;
        puVar15[-1] = 0;
        uVar33 = uRam0000000146863b64 & uVar12;
        uVar34 = uRam0000000146863b68 & uVar6;
        uVar35 = uRam0000000146863b6c & uVar7;
        *puVar15 = _DAT_146863b60 & uVar31;
        puVar15[1] = uVar33;
        puVar15[2] = uVar34;
        puVar15[3] = uVar35;
        iVar24 = iVar24 + -1;
        puVar15 = puVar15 + 0x10;
      } while (iVar24 != 0);
    }
    *(undefined4 *)(param_1 + 0x288) = 0;
    local_178 = (longlong *)0x0;
    local_170 = 0;
    local_188 = 0;
    local_180 = 0;
    if (*(int *)(param_1 + 0x188) == 1) {
      local_1c8 = *(longlong **)(local_190 + 0x230);
      pplVar29 = (longlong **)&local_1c8;
      uStack_1c0 = (uint *)CONCAT44(uStack_1c0._4_4_,*(undefined4 *)(local_190 + 0x238));
    }
    else {
      pplVar29 = &local_1d8;
      local_1d8 = (longlong *)0x3f8000003f800000;
      local_1d0 = CONCAT44(local_1d0._4_4_,0x3f800000);
    }
    local_218 = &local_188;
    local_1f8 = 0;
    local_200 = 0xffffffff;
    local_208 = 0;
    local_210 = 0;
    FUN_1427e0a20(local_190,local_1a8,pplVar29,&local_178);
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    local_138 = 0;
    local_130 = 0;
    local_148 = 0;
    local_140 = 0;
    ComputeBodyInsertionOrder(&local_148);
    iVar24 = (int)local_140;
    lVar13 = (longlong)(int)local_140;
    local_158 = (void *)0x0;
    local_14c = 0;
    local_150 = (int)local_140;
    if (0 < (int)local_140) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_158);
    }
    _guard_xfg_dispatch_icall_nop(local_158,0,lVar13 * 8);
    uVar21 = 0;
    local_198 = iVar24;
    local_194 = 0;
    local_1a0 = (void *)0x0;
    if (0 < iVar24) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a0);
    }
    _guard_xfg_dispatch_icall_nop(local_1a0,0,lVar13 * 8);
    uVar27 = (ulonglong)((longlong)(local_178 + (int)local_170) + (7 - (longlong)local_178)) >> 3;
    if (local_178 + (int)local_170 < local_178) {
      uVar27 = uVar21;
    }
    plVar28 = local_178;
    if (uVar27 != 0) {
      do {
        lVar23 = *plVar28;
        cVar9 = FBodyInstance::IsValidBodyInstance(lVar23);
        if (cVar9 != '\0') {
          *(longlong *)((longlong)local_1a0 + (longlong)*(short *)(lVar23 + 4) * 8) = lVar23;
        }
        plVar28 = plVar28 + 1;
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar27);
    }
    local_98 = &local_148;
    ppvStack_90 = &local_1a0;
    puStack_88 = (uint *)&local_1a8;
    uStack_80 = &local_190;
    uStack_78 = local_1e0;
    local_68 = &local_e8;
    local_60 = &local_158;
    local_70 = lVar2 + 0x10 + (longlong)iVar10 * 0x20;
    local_58 = &local_138;
    FUN_14094a7b0(&local_98,1);
    plVar28 = uStack_80;
    ppvVar8 = ppvStack_90;
    uVar27 = 0;
    puVar25 = (ushort *)*local_98;
    uVar21 = (longlong)(int)local_98[1] & 0x7fffffffffffffff;
    if (puVar25 + (int)local_98[1] < puVar25) {
      uVar21 = uVar27;
    }
    if (uVar21 != 0) {
      do {
        if (*(longlong *)((longlong)*ppvVar8 + (ulonglong)*puVar25 * 8) != 0) {
          FUN_1423acfd0(*plVar28,&local_98,*puVar25);
          local_1c8 = (longlong *)0x0;
        }
        puVar25 = puVar25 + 1;
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar21);
    }
    plVar28 = (longlong *)0x0;
    bVar32 = local_170._4_4_ != 0;
    local_170 = (ulonglong)local_170._4_4_ << 0x20;
    if (bVar32) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_178,0);
    }
    local_198 = 0;
    if (local_194 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1a0,0);
    }
    local_128 = 0;
    local_11c = 0;
    local_120 = iVar24;
    if (0 < iVar24) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    plVar19 = plVar28;
    plVar30 = plVar28;
    if (0 < lVar13) {
      do {
        plVar22 = (longlong *)((longlong)plVar19 + 1);
        *(int *)(local_128 + (ulonglong)*(ushort *)(local_148 + (longlong)plVar19 * 2) * 4) =
             (int)plVar30;
        plVar19 = plVar22;
        plVar30 = (longlong *)(ulonglong)((int)plVar30 + 1);
      } while ((longlong)plVar22 < lVar13);
    }
    local_1d8 = &local_128;
    local_1d0 = local_118;
    AlgoImpl::
    IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
              (local_188,(longlong)(int)local_180,local_1e8,&local_1d8);
    if (0 < (int)local_e0 - local_b4) {
      plVar19 = plVar28;
      plVar30 = plVar28;
      if (0 < (int)local_180) {
        do {
          lVar2 = *(longlong *)(local_188 + (longlong)plVar30);
          lVar13 = *(longlong *)(lVar2 + 0x20);
          plVar22 = plVar28;
          if ((int)local_e0 != local_b4) {
            puVar17 = local_b0;
            if (local_a8 != (undefined1 *)0x0) {
              puVar17 = local_a8;
            }
            iVar10 = *(int *)(puVar17 +
                             (longlong)
                             (int)((int)((ulonglong)lVar13 >> 0x20) + (int)lVar13 & local_a0 - 1U) *
                             4);
            while (iVar10 != -1) {
              lVar23 = (longlong)iVar10;
              if (*(longlong *)(local_e8 + lVar23 * 0x18) == lVar13) {
                if ((iVar10 != -1) && (lVar13 = local_e8 + lVar23 * 0x18, lVar13 != 0)) {
                  plVar22 = *(longlong **)(lVar13 + 8);
                }
                break;
              }
              iVar10 = *(int *)(local_e8 + 0x10 + lVar23 * 0x18);
            }
          }
          lVar13 = *(longlong *)(lVar2 + 0x28);
          plVar18 = plVar28;
          if ((int)local_e0 != local_b4) {
            puVar17 = local_b0;
            if (local_a8 != (undefined1 *)0x0) {
              puVar17 = local_a8;
            }
            iVar10 = *(int *)(puVar17 +
                             (longlong)
                             (int)((int)((ulonglong)lVar13 >> 0x20) + (int)lVar13 & local_a0 - 1U) *
                             4);
            while (iVar10 != -1) {
              lVar23 = (longlong)iVar10;
              if (*(longlong *)(local_e8 + lVar23 * 0x18) == lVar13) {
                if ((iVar10 != -1) && (lVar13 = local_e8 + lVar23 * 0x18, lVar13 != 0)) {
                  plVar18 = *(longlong **)(lVar13 + 8);
                }
                break;
              }
              iVar10 = *(int *)(local_e8 + 0x10 + lVar23 * 0x18);
            }
          }
          if (((plVar22 != (longlong *)0x0) && (plVar18 != (longlong *)0x0)) &&
             ((*(uint *)(plVar22 + 7) < *(uint *)(plVar22[6] + 0x168) ||
              (*(uint *)(plVar18 + 7) < *(uint *)(plVar18[6] + 0x168))))) {
            ImmediatePhysics::FSimulation::CreateJoint
                      (*(undefined8 *)(local_1e0 + 0x1c0),*(undefined8 *)(lVar2 + 8),plVar22);
          }
          FUN_1426ce340(lVar2);
          if (*(int *)(lVar2 + 0x1b0) == 0) {
            plVar22 = *(longlong **)(lVar2 + 0x1a8);
            plVar18 = plVar28;
          }
          else {
            plVar22 = *(longlong **)(lVar2 + 0x1a8);
            plVar18 = plVar22;
          }
          if (plVar18 == (longlong *)0x0) {
            if ((*(int *)(lVar2 + 0x1b0) != 0) && (plVar22 != (longlong *)0x0)) {
              lVar13 = *plVar22;
              goto LAB_140954637;
            }
          }
          else {
            lVar13 = *plVar18;
            plVar22 = plVar18;
LAB_140954637:
            (**(code **)(lVar13 + 0x28))(plVar22,0);
            if (*(longlong *)(lVar2 + 0x1a8) != 0) {
              uVar16 = FMemory::Realloc(*(longlong *)(lVar2 + 0x1a8),0,0);
              *(undefined8 *)(lVar2 + 0x1a8) = uVar16;
            }
            *(undefined4 *)(lVar2 + 0x1b0) = 0;
          }
          if (*(longlong *)(lVar2 + 0x1a8) != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(lVar2,0x1b8);
          uVar31 = (int)plVar19 + 1;
          if ((int)local_180 <= (int)uVar31) break;
          plVar19 = (longlong *)(ulonglong)uVar31;
          plVar30 = plVar30 + 1;
        } while( true );
      }
      *(undefined1 *)(local_1e0 + 0x5bc) = 2;
    }
    lVar2 = local_1e0;
    local_110 = (longlong *)(local_1a8 + 0xb8);
    local_1d8 = (longlong *)0x0;
    iVar10 = *(int *)(local_1a8 + 0xe0);
    uStack_1c0 = (uint *)(local_1a8 + 200);
    local_1d0 = local_1d0 & 0xffffffff;
    uVar31 = 0;
    local_1c8 = (longlong *)0x100000000;
    iStack_1b4 = 0;
    uStack_1b0 = 0;
    if (iVar10 != 0) {
      puVar15 = *(uint **)(local_1a8 + 0xd8);
      if (*(uint **)(local_1a8 + 0xd8) == (uint *)0x0) {
        puVar15 = uStack_1c0;
      }
      uVar12 = *puVar15;
      plVar19 = plVar28;
      plVar30 = plVar28;
      while (uVar12 == 0) {
        iVar24 = (int)plVar19;
        uStack_1b0 = (int)plVar30 + 0x20;
        plVar30 = (longlong *)(ulonglong)uStack_1b0;
        plVar19 = (longlong *)(ulonglong)(iVar24 + 1U);
        local_1c8._4_4_ = (undefined4)((ulonglong)local_1c8 >> 0x20);
        local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,iVar24 + 1U);
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar24) goto LAB_140954781;
        uVar12 = puVar15[(longlong)iVar24 + 1];
      }
      uVar12 = -uVar12 & uVar12;
      iVar24 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar24 == 0; iVar24 = iVar24 + -1) {
        }
      }
      local_1c8 = (longlong *)CONCAT44(uVar12,(undefined4)local_1c8);
      if (uVar12 == 0) {
        iVar24 = 0x20;
      }
      else {
        iVar24 = 0x1f - iVar24;
      }
      iStack_1b4 = (uStack_1b0 - iVar24) + 0x1f;
      if (iVar10 < iStack_1b4) {
LAB_140954781:
        iStack_1b4 = iVar10;
      }
    }
    local_1b8 = 0xffffffff;
    uStack_80._0_4_ = 0xffffffff;
    uVar3 = (undefined4)uStack_80;
    uStack_80._0_4_ = 0xffffffff;
    uStack_80._4_4_ = iStack_1b4;
    uStack_78 = CONCAT44(uStack_1ac,uStack_1b0);
    ppvStack_90 = (void **)local_1c8;
    uStack_108 = local_1c8;
    local_f0 = uStack_1b0;
    uStack_ec = uStack_1ac;
    uStack_f8 = 0xffffffff;
    iStack_f4 = iStack_1b4;
    plVar19 = plVar28;
    plVar30 = plVar28;
    local_100 = uStack_1c0;
    local_98 = local_110;
    puStack_88 = uStack_1c0;
    if (iStack_1b4 < iVar10) {
      do {
        uVar31 = (int)plVar19 + 1;
        local_1d0 = CONCAT44(local_1d0._4_4_,uVar31);
        local_1c8 = *(longlong **)
                     ((longlong)local_158 +
                     (longlong)*(int *)(*local_110 + (longlong)iStack_f4 * 0x14) * 8);
        uStack_1c0 = *(uint **)((longlong)local_158 +
                               (longlong)*(int *)(*local_110 + 4 + (longlong)iStack_f4 * 0x14) * 8);
        if ((int)plVar28 < (int)uVar31) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1d8,plVar19);
          plVar28 = (longlong *)(local_1d0 >> 0x20);
          plVar30 = local_1d8;
          uVar31 = (uint)local_1d0;
        }
        plVar19 = plVar30 + (longlong)(int)plVar19 * 2;
        *(undefined4 *)plVar19 = (undefined4)local_1c8;
        *(undefined4 *)((longlong)plVar19 + 4) = local_1c8._4_4_;
        *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_1c0;
        *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_1c0._4_4_;
        uStack_f8 = uStack_f8 & ~uStack_108._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_108);
        plVar19 = (longlong *)(ulonglong)uVar31;
        uVar3 = (undefined4)uStack_80;
      } while (iStack_f4 < (int)local_100[6]);
    }
    uStack_80._0_4_ = uVar3;
    lVar13 = *(longlong *)(lVar2 + 0x1c0);
    plVar28 = (longlong *)(lVar13 + 0x188);
    TSet<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Reset(plVar28);
    for (plVar19 = plVar30; plVar19 != plVar30 + (longlong)(int)uVar31 * 2; plVar19 = plVar19 + 2) {
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(plVar28,&local_168,*plVar19);
      if ((local_168 == -1) || (lVar23 = (longlong)local_168 * 0x60 + *plVar28, lVar23 == 0)) {
        local_1c8 = plVar19;
        FUN_140948630(plVar28,&local_164,&local_1c8,0);
        lVar23 = (longlong)local_164 * 0x60 + *plVar28;
      }
      plVar22 = plVar19 + 1;
      FUN_14058c900(lVar23 + 8,&local_118,plVar22);
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(plVar28,&local_160,*plVar22);
      if ((local_160 == -1) || (lVar23 = (longlong)local_160 * 0x60 + *plVar28, lVar23 == 0)) {
        local_1c8 = plVar22;
        FUN_140948630(plVar28,&local_15c,&local_1c8,0);
        lVar23 = (longlong)local_15c * 0x60 + *plVar28;
      }
      FUN_14058c900(lVar23 + 8,&local_1e0,plVar19);
    }
    *(undefined1 *)(lVar13 + 0x228) = 1;
    lVar13 = *(longlong *)(lVar2 + 0x1c0);
    uVar21 = 0;
    lVar2 = lVar13 + 0x1d8;
    *(undefined4 *)(lVar13 + 0x1e0) = 0;
    if ((*(int *)(lVar13 + 0x1e4) < 0) && (*(int *)(lVar13 + 0x1e4) != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar2,0);
    }
    *(undefined4 *)(lVar13 + 0x208) = 0xffffffff;
    *(undefined4 *)(lVar13 + 0x20c) = 0;
    iVar10 = *(int *)(lVar13 + 0x200) + 0x1f;
    pvVar20 = *(void **)(lVar13 + 0x1f8);
    if (*(void **)(lVar13 + 0x1f8) == (void *)0x0) {
      pvVar20 = (void *)(lVar13 + 0x1e8);
    }
    _guard_xfg_dispatch_icall_nop
              (pvVar20,0,(longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) << 2);
    *(undefined4 *)(lVar13 + 0x200) = 0;
    if (0 < (int)*(uint *)(lVar13 + 0x220)) {
      uVar27 = (ulonglong)*(uint *)(lVar13 + 0x220);
      do {
        uVar14 = (longlong)*(int *)(lVar13 + 0x220) - 1U & uVar21;
        lVar23 = *(longlong *)(lVar13 + 0x218);
        if (*(longlong *)(lVar13 + 0x218) == 0) {
          lVar23 = lVar13 + 0x210;
        }
        uVar21 = uVar21 + 1;
        *(undefined4 *)(lVar23 + uVar14 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    iVar10 = *(int *)(lVar13 + 0x1e0) - *(int *)(lVar13 + 0x20c);
    if (iVar10 < iVar10 + (int)local_130) {
      FUN_1405effc0(lVar2);
    }
    lVar23 = local_138 + (longlong)(int)local_130 * 8;
    for (lVar26 = local_138; lVar26 != lVar23; lVar26 = lVar26 + 8) {
      FUN_14058c900(lVar2,&local_1e0,lVar26,0);
    }
    *(undefined1 *)(lVar13 + 0x228) = 1;
    if (plVar30 != (longlong *)0x0) {
      FMemory::Free(plVar30);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (local_1a0 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_158 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    local_a0 = 0;
    if (local_a8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e8);
    if (local_188 != 0) {
      FMemory::Free();
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140954b40 FUN_140954b40 body=730 status=ok
// SIG undefined FUN_140954b40(void)

void FUN_140954b40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int local_res8;
  undefined8 local_res18;
  int local_res20 [2];
  undefined1 local_44 [12];
  
  iVar7 = *(int *)(param_1 + 0x1e0);
  if (iVar7 != 0) {
    iVar3 = *(int *)(param_2 + 8);
    lVar12 = *(longlong *)(param_2 + 0x48);
    plVar1 = (longlong *)(param_1 + 0x1c8);
    iVar10 = *(int *)(param_1 + 0x1d0);
    if (iVar10 != 0) {
      plVar9 = (longlong *)(*plVar1 + 0x10);
      do {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    if (*(int *)(param_1 + 0x1d4) != iVar7) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1);
    }
    plVar9 = (longlong *)(param_1 + 400);
    lVar6 = *plVar9;
    local_res8 = 0;
    if (lVar6 == 0) {
      lVar6 = **(longlong **)(lVar12 + 0x20);
      *plVar9 = lVar6;
    }
    local_res18 = 0;
    if (lVar6 != 0) {
      FUN_1422f3ff0(plVar9,param_2,0);
    }
    lVar12 = 0;
    iVar10 = 0;
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x1e8) +
                        (ulonglong)*(ushort *)(*(longlong *)(param_2 + 0x70) + lVar12) * 4);
        local_res20[0] = iVar10;
        if (iVar7 != -1) {
          iVar4 = *(int *)(param_1 + 0x1d0);
          iVar5 = iVar4 + 1;
          *(int *)(param_1 + 0x1d0) = iVar5;
          if (*(int *)(param_1 + 0x1d4) < iVar5) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(plVar1);
          }
          piVar8 = (int *)0x0;
          piVar11 = (int *)((longlong)iVar4 * 0x20 + *plVar1);
          if (piVar11 != (int *)0x0) {
            *piVar11 = -1;
            piVar11[4] = 0;
            piVar11[5] = 0;
            piVar11[6] = 0;
            piVar11[7] = 0;
            piVar8 = piVar11;
          }
          piVar8[1] = iVar7;
          *piVar8 = local_res20[0];
          iVar4 = piVar8[6];
          cVar2 = *(char *)((longlong)iVar7 * 0x40 + *(longlong *)(param_1 + 0x1f8));
          piVar8[6] = iVar4 + 1;
          iVar7 = local_res8 + 1;
          if (cVar2 == '\0') {
            iVar7 = local_res8;
          }
          if (piVar8[7] < iVar4 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar8 + 4,iVar4);
          }
          *(int *)(*(longlong *)(piVar8 + 4) + (longlong)iVar4 * 4) = local_res20[0];
          piVar8[2] = -1;
          FBoneContainer::GetParentBoneIndex(param_2,&local_res18,local_res20);
          iVar4 = (int)local_res18;
          while ((local_res8 = iVar7, iVar4 != -1 &&
                 (iVar4 = *(int *)(*(longlong *)(param_1 + 0x1e8) +
                                  (ulonglong)
                                  *(ushort *)(*(longlong *)(param_2 + 0x70) + (longlong)iVar4 * 4) *
                                  4), piVar8[2] = iVar4, iVar4 == -1))) {
            iVar4 = piVar8[6];
            piVar8[6] = iVar4 + 1;
            if (piVar8[7] < iVar4 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar8 + 4,iVar4);
            }
            *(int *)(*(longlong *)(piVar8 + 4) + (longlong)iVar4 * 4) = (int)local_res18;
            piVar11 = (int *)FBoneContainer::GetParentBoneIndex(param_2,local_44,&local_res18);
            iVar4 = *piVar11;
            local_res18 = CONCAT44(local_res18._4_4_,iVar4);
          }
        }
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 4;
        iVar7 = local_res8;
      } while (iVar10 < iVar3);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c0);
    *(undefined1 *)(param_1 + 0x5be) = 1;
    if (lVar12 != 0) {
      *(int *)(lVar12 + 0x16c) = iVar7;
      *(undefined1 *)(lVar12 + 0x148) = 1;
    }
    FCSPose<FCompactHeapPose>::Empty(param_1 + 0x4e8);
    *(undefined8 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(param_1 + 0x538) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x53c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x530,0);
    }
    *(undefined2 *)(param_1 + 0x548) = 0;
    *(undefined1 *)(param_1 + 0x54a) = 0;
  }
  return;
}



// FUNCTION 140954e20 FUN_140954e20 body=4539 status=ok
// SIG undefined FUN_140954e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140954e20(longlong param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 uVar12;
  int *piVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar24 [16];
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
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
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auStack_288 [32];
  int local_268 [4];
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  int local_218 [2];
  float *local_210;
  undefined8 local_208;
  longlong local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  int *local_1d8;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  piVar14 = *(int **)(param_1 + 0x1c8);
  local_1d8 = piVar14 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
  local_210 = param_3;
  local_208 = param_4;
  local_200 = param_2;
  if (piVar14 != local_1d8) {
    do {
      uVar15 = 0;
      local_1e8 = (longlong)piVar14[1];
      lVar10 = local_1e8 * 0x40 + *(longlong *)(param_1 + 0x1f8);
      if (*(char *)(lVar10 + 1) == '\0') {
        *(undefined1 *)(lVar10 + 1) = 1;
        iVar8 = piVar14[2];
        if (iVar8 == -1) {
          iVar8 = *piVar14;
          lVar10 = *(longlong *)(param_2 + 0x20);
          if (*(char *)(iVar8 + lVar10) == '\0') {
            lVar10 = FUN_14060c680((longlong *)(param_2 + 8));
            param_3 = local_210;
            param_4 = local_208;
          }
          fVar30 = fRam0000000146863be8;
          fVar23 = fRam0000000146863be4;
          fVar43 = _DAT_146863be0;
          fVar68 = fRam0000000146863b68;
          fVar67 = fRam0000000146863b64;
          fVar66 = _DAT_146863b60;
          iVar2 = *(int *)(param_1 + 0x188);
          pfVar11 = (float *)((longlong)iVar8 * 0x30 + *(longlong *)(param_2 + 8));
          if (iVar2 == 0) {
LAB_140955ef3:
            local_168 = *(undefined8 *)pfVar11;
            uStack_160 = *(longlong *)(pfVar11 + 2);
            _local_158 = *(undefined1 (*) [16])(pfVar11 + 4);
            local_148 = (float)*(undefined8 *)(pfVar11 + 8);
            fStack_144 = (float)((ulonglong)*(undefined8 *)(pfVar11 + 8) >> 0x20);
            fStack_140 = (float)*(undefined8 *)(pfVar11 + 10);
            fStack_13c = (float)((ulonglong)*(undefined8 *)(pfVar11 + 10) >> 0x20);
          }
          else if (iVar2 == 1) {
            auVar18 = *(undefined1 (*) [16])(param_3 + 8);
            fVar28 = auVar18._0_4_;
            fVar49 = auVar18._4_4_;
            fVar57 = auVar18._8_4_;
            fVar27 = auVar18._12_4_;
            local_168 = 0;
            uStack_160 = (ulonglong)(uint)fRam0000000146863b6c << 0x20;
            local_148 = (float)((uint)_DAT_146863b60 & _DAT_146863b70);
            fStack_144 = (float)((uint)fRam0000000146863b64 & uRam0000000146863b74);
            fStack_140 = (float)((uint)fRam0000000146863b68 & uRam0000000146863b78);
            fStack_13c = (float)((uint)fRam0000000146863b6c & uRam0000000146863b7c);
            _local_158 = ZEXT816(0);
            auVar22 = *(undefined1 (*) [16])(pfVar11 + 8);
            fVar33 = auVar22._0_4_;
            fVar54 = auVar22._4_4_;
            fVar35 = auVar22._8_4_;
            fVar29 = auVar22._12_4_;
            auVar18 = minps(auVar22,auVar18);
            auVar22._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146863be4);
            auVar22._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146863be0);
            auVar22._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146863be8);
            auVar22._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146863bec);
            iVar8 = movmskps((int)lVar10,auVar22);
            if (iVar8 == 0) {
              fVar66 = *param_3;
              fVar67 = param_3[1];
              fVar68 = param_3[2];
              fVar43 = param_3[3];
              fVar23 = *pfVar11;
              fVar30 = pfVar11[1];
              fVar32 = pfVar11[2];
              fVar37 = pfVar11[3];
              fVar52 = fVar28 * pfVar11[4];
              fVar55 = fVar49 * pfVar11[5];
              fVar47 = fVar57 * pfVar11[6];
              fVar34 = fVar27 * pfVar11[7];
              local_148 = fVar28 * fVar33;
              fStack_144 = fVar49 * fVar54;
              fStack_140 = fVar57 * fVar35;
              fStack_13c = fVar27 * fVar29;
              local_168 = CONCAT44(fVar32 * fVar66 * fRam0000000146863ba4 + fVar43 * fVar30 +
                                   fVar67 * fVar37 * fRam0000000146863b94 +
                                   fVar68 * fVar23 * fRam0000000146863b84,
                                   fVar37 * fVar66 * _DAT_146863ba0 + fVar43 * fVar23 +
                                   fVar67 * fVar32 * _DAT_146863b90 +
                                   fVar68 * fVar30 * _DAT_146863b80);
              uStack_160 = CONCAT44(fVar23 * fVar66 * fRam0000000146863bac + fVar43 * fVar37 +
                                    fVar67 * fVar30 * fRam0000000146863b9c +
                                    fVar68 * fVar32 * fRam0000000146863b8c,
                                    fVar30 * fVar66 * fRam0000000146863ba8 + fVar43 * fVar32 +
                                    fVar67 * fVar23 * fRam0000000146863b98 +
                                    fVar68 * fVar37 * fRam0000000146863b88);
              fVar23 = fVar47 * fVar67 - fVar55 * fVar68;
              fVar30 = fVar52 * fVar68 - fVar47 * fVar66;
              fVar28 = fVar55 * fVar66 - fVar52 * fVar67;
              fVar33 = fVar34 * fVar43 - fVar34 * fVar43;
              fVar23 = fVar23 + fVar23;
              fVar30 = fVar30 + fVar30;
              fVar28 = fVar28 + fVar28;
              fVar33 = fVar33 + fVar33;
              local_158._4_4_ =
                   (fVar23 * fVar68 - fVar28 * fVar66) + fVar43 * fVar30 + fVar55 + param_3[5];
              local_158._0_4_ =
                   (fVar28 * fVar67 - fVar30 * fVar68) + fVar43 * fVar23 + fVar52 + param_3[4];
              fStack_150 = (fVar30 * fVar66 - fVar23 * fVar67) + fVar43 * fVar28 + fVar47 +
                           param_3[6];
              fStack_14c = (fVar33 * fVar43 - fVar33 * fVar43) + fVar43 * fVar33 + fVar34 +
                           param_3[7];
            }
            else {
              fVar32 = *param_3;
              fVar37 = param_3[1];
              fVar52 = param_3[2];
              fVar55 = param_3[3];
              fVar34 = fVar37 + fVar37;
              fVar31 = fVar52 + fVar52;
              fVar39 = (fVar32 + fVar32) * fVar32;
              fVar47 = fVar55 * (fVar32 + fVar32);
              fVar61 = (fVar55 * fVar31 + fVar32 * fVar34) * fVar28;
              fVar62 = (fVar47 + fVar37 * fVar31) * fVar49;
              fVar63 = (fVar55 * fVar34 + fVar32 * fVar31) * fVar57;
              fVar41 = fVar49 * (fVar32 * fVar34 - fVar55 * fVar31);
              fVar45 = fVar57 * (fVar37 * fVar31 - fVar47);
              fVar53 = fVar28 * (fVar32 * fVar31 - fVar55 * fVar34);
              fVar32 = param_3[4];
              fVar55 = param_3[5];
              fVar47 = param_3[6];
              fVar50 = (float)((uint)((_DAT_146863b60 - (fVar31 * fVar52 + fVar34 * fVar37)) *
                                     fVar28) & _DAT_146863b70);
              fVar38 = (float)((uint)((fRam0000000146863b64 - (fVar31 * fVar52 + fVar39)) * fVar49)
                              & uRam0000000146863b74);
              fVar42 = (float)((uint)((fRam0000000146863b68 - (fVar34 * fVar37 + fVar39)) * fVar57)
                              & uRam0000000146863b78);
              fVar51 = (float)((uint)((fRam0000000146863b6c - (fVar39 + fVar39)) * fVar27) &
                              uRam0000000146863b7c);
              fVar37 = *pfVar11;
              fVar52 = pfVar11[1];
              fVar34 = pfVar11[2];
              fVar31 = pfVar11[3];
              fVar46 = fVar52 + fVar52;
              fVar36 = fVar34 + fVar34;
              fVar40 = (fVar37 + fVar37) * fVar37;
              fVar39 = (fVar37 + fVar37) * fVar31;
              fVar58 = (fVar36 * fVar31 + fVar37 * fVar46) * fVar33;
              fVar59 = (fVar39 + fVar52 * fVar36) * fVar54;
              fVar60 = (fVar46 * fVar31 + fVar37 * fVar36) * fVar35;
              fVar44 = fVar54 * (fVar37 * fVar46 - fVar36 * fVar31);
              fVar48 = fVar35 * (fVar52 * fVar36 - fVar39);
              fVar56 = fVar33 * (fVar37 * fVar36 - fVar46 * fVar31);
              fVar31 = (float)((uint)((_DAT_146863b60 - (fVar36 * fVar34 + fVar46 * fVar52)) *
                                     fVar33) & _DAT_146863b70);
              fVar39 = (float)((uint)((fRam0000000146863b64 - (fVar36 * fVar34 + fVar40)) * fVar54)
                              & uRam0000000146863b74);
              fVar46 = (float)((uint)((fRam0000000146863b68 - (fVar46 * fVar52 + fVar40)) * fVar35)
                              & uRam0000000146863b78);
              fVar36 = (float)((uint)((fRam0000000146863b6c - (fVar40 + fVar40)) * fVar29) &
                              uRam0000000146863b7c);
              fVar37 = pfVar11[4];
              fVar52 = pfVar11[5];
              fVar34 = pfVar11[6];
              local_258 = fVar58 * fVar41 + fVar31 * fVar50 + fVar56 * fVar63 + fVar36 * fVar32;
              fStack_254 = fVar58 * fVar38 + fVar31 * fVar61 + fVar56 * fVar45 + fVar36 * fVar55;
              fStack_250 = fVar58 * fVar62 + fVar31 * fVar53 + fVar56 * fVar42 + fVar36 * fVar47;
              fStack_24c = fVar58 * fVar51 + fVar31 * fVar51 + fVar56 * fVar51 +
                           fVar36 * fRam0000000146863b6c;
              local_248 = fVar39 * fVar41 + fVar44 * fVar50 + fVar59 * fVar63 + fVar36 * fVar32;
              fStack_244 = fVar39 * fVar38 + fVar44 * fVar61 + fVar59 * fVar45 + fVar36 * fVar55;
              fStack_240 = fVar39 * fVar62 + fVar44 * fVar53 + fVar59 * fVar42 + fVar36 * fVar47;
              fStack_23c = fVar39 * fVar51 + fVar44 * fVar51 + fVar59 * fVar51 +
                           fVar36 * fRam0000000146863b6c;
              local_238 = fVar48 * fVar41 + fVar60 * fVar50 + fVar46 * fVar63 + fVar36 * fVar32;
              fStack_234 = fVar48 * fVar38 + fVar60 * fVar61 + fVar46 * fVar45 + fVar36 * fVar55;
              fStack_230 = fVar48 * fVar62 + fVar60 * fVar53 + fVar46 * fVar42 + fVar36 * fVar47;
              fStack_22c = fVar48 * fVar51 + fVar60 * fVar51 + fVar46 * fVar51 +
                           fVar36 * fRam0000000146863b6c;
              local_228 = fVar52 * fVar41 + fVar37 * fVar50 + fVar34 * fVar63 +
                          fRam0000000146863b6c * fVar32;
              fStack_224 = fVar52 * fVar38 + fVar37 * fVar61 + fVar34 * fVar45 +
                           fRam0000000146863b6c * fVar55;
              fStack_220 = fVar52 * fVar62 + fVar37 * fVar53 + fVar34 * fVar42 +
                           fRam0000000146863b6c * fVar47;
              fStack_21c = fVar52 * fVar51 + fVar37 * fVar51 + fVar34 * fVar51 +
                           fRam0000000146863b6c * fRam0000000146863b6c;
              FMatrix::RemoveScaling(&local_258);
              fVar66 = (float)(-(uint)(fVar43 <= fVar28 * fVar33) & (_DAT_146863bd0 ^ (uint)fVar66)
                              ^ _DAT_146863bd0);
              fVar67 = (float)(-(uint)(fVar23 <= fVar49 * fVar54) &
                               (uRam0000000146863bd4 ^ (uint)fVar67) ^ uRam0000000146863bd4);
              fVar68 = (float)(-(uint)(fVar30 <= fVar57 * fVar35) &
                               (uRam0000000146863bd8 ^ (uint)fVar68) ^ uRam0000000146863bd8);
              local_258 = local_258 * fVar66;
              fStack_254 = fStack_254 * fVar66;
              fStack_250 = fStack_250 * fVar66;
              fStack_240 = fStack_240 * fVar67;
              fStack_244 = fStack_244 * fVar67;
              local_248 = local_248 * fVar67;
              fStack_230 = fStack_230 * fVar68;
              local_238 = local_238 * fVar68;
              fStack_234 = fStack_234 * fVar68;
              FQuat::FQuat(&local_1a8,&local_258);
              local_268[0] = 0x322bcc77;
              auVar26._0_4_ = local_1a8 * local_1a8 + fStack_1a0 * fStack_1a0;
              auVar26._4_4_ = fStack_1a4 * fStack_1a4 + fStack_19c * fStack_19c;
              auVar26._8_4_ = fStack_1a0 * fStack_1a0 + local_1a8 * local_1a8;
              auVar26._12_4_ = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4;
              fVar23 = auVar26._4_4_ + auVar26._0_4_;
              fVar30 = auVar26._8_4_ + auVar26._4_4_;
              fVar32 = auVar26._12_4_ + auVar26._8_4_;
              fVar37 = auVar26._0_4_ + auVar26._12_4_;
              auVar18._4_4_ = fVar30;
              auVar18._0_4_ = fVar23;
              auVar18._8_4_ = fVar32;
              auVar18._12_4_ = fVar37;
              auVar18 = rsqrtps(auVar26,auVar18);
              fVar66 = auVar18._0_4_;
              fVar67 = auVar18._4_4_;
              fVar68 = auVar18._8_4_;
              fVar43 = auVar18._12_4_;
              fVar66 = (_DAT_146863bc0 - fVar66 * fVar66 * fVar23 * _DAT_146863bc0) * fVar66 +
                       fVar66;
              fVar67 = (fRam0000000146863bc4 - fVar67 * fVar67 * fVar30 * fRam0000000146863bc4) *
                       fVar67 + fVar67;
              fVar68 = (fRam0000000146863bc8 - fVar68 * fVar68 * fVar32 * fRam0000000146863bc8) *
                       fVar68 + fVar68;
              fVar43 = (fRam0000000146863bcc - fVar43 * fVar43 * fVar37 * fRam0000000146863bcc) *
                       fVar43 + fVar43;
              local_158._4_4_ = fStack_224;
              local_158._0_4_ = local_228;
              fStack_150 = fStack_220;
              local_1a8 = (float)(((uint)(((_DAT_146863bc0 -
                                           fVar66 * fVar66 * fVar23 * _DAT_146863bc0) * fVar66 +
                                          fVar66) * local_1a8) ^ _DAT_146863bb0) &
                                  -(uint)(1e-08 <= fVar23) ^ _DAT_146863bb0);
              fStack_1a4 = (float)(((uint)(((fRam0000000146863bc4 -
                                            fVar67 * fVar67 * fVar30 * fRam0000000146863bc4) *
                                            fVar67 + fVar67) * fStack_1a4) ^ uRam0000000146863bb4) &
                                   -(uint)(1e-08 <= fVar30) ^ uRam0000000146863bb4);
              fStack_1a0 = (float)(((uint)(((fRam0000000146863bc8 -
                                            fVar68 * fVar68 * fVar32 * fRam0000000146863bc8) *
                                            fVar68 + fVar68) * fStack_1a0) ^ uRam0000000146863bb8) &
                                   -(uint)(1e-08 <= fVar32) ^ uRam0000000146863bb8);
              fStack_19c = (float)(((uint)(((fRam0000000146863bcc -
                                            fVar43 * fVar43 * fVar37 * fRam0000000146863bcc) *
                                            fVar43 + fVar43) * fStack_19c) ^ uRam0000000146863bbc) &
                                   -(uint)(1e-08 <= fVar37) ^ uRam0000000146863bbc);
              fStack_14c = 0.0;
              local_168 = CONCAT44(fStack_1a4,local_1a8);
              uStack_160 = CONCAT44(fStack_19c,fStack_1a0);
              local_148 = fVar28 * fVar33;
              fStack_144 = fVar49 * fVar54;
              fStack_140 = fVar57 * fVar35;
              fStack_13c = fVar27 * fVar29;
            }
          }
          else {
            if (iVar2 != 2) goto LAB_140955ef3;
            FUN_14162bcf0(pfVar11,&local_168,param_4);
          }
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + local_1e8 * 8);
        }
        else {
          piVar13 = *(int **)(piVar14 + 4);
          local_1f8 = _DAT_1468b5b90;
          fStack_1f4 = fRam00000001468b5b94;
          fStack_1f0 = fRam00000001468b5b98;
          fStack_1ec = fRam00000001468b5b9c;
          uVar16 = (longlong)piVar14[6] & 0x3fffffffffffffff;
          if (piVar13 + piVar14[6] < piVar13) {
            uVar16 = uVar15;
          }
          fVar66 = _DAT_1468b5b90;
          fVar67 = fRam00000001468b5b94;
          fVar68 = fRam00000001468b5b98;
          fVar43 = fRam00000001468b5b9c;
          fVar23 = _DAT_1468b5b70;
          fVar30 = fRam00000001468b5b74;
          fVar28 = fRam00000001468b5b78;
          fVar33 = fRam00000001468b5b7c;
          fVar49 = _DAT_1468b5b80;
          fVar54 = fRam00000001468b5b84;
          fVar57 = fRam00000001468b5b88;
          fVar35 = fRam00000001468b5b8c;
          if (uVar16 != 0) {
            plVar1 = (longlong *)(param_2 + 8);
            do {
              local_268[0] = *piVar13;
              if (*(char *)((longlong)local_268[0] + *(longlong *)(param_2 + 0x20)) == '\0') {
LAB_140954fdb:
                pfVar11 = (float *)((longlong)local_268[0] * 0x30 + *plVar1);
                fVar27 = *pfVar11;
                fVar29 = pfVar11[1];
                local_168 = *(undefined8 *)pfVar11;
                fVar32 = pfVar11[2];
                fVar37 = pfVar11[3];
                uStack_160 = *(longlong *)(pfVar11 + 2);
                fVar52 = *(float *)*(undefined1 (*) [16])(pfVar11 + 4);
                fVar55 = pfVar11[5];
                fVar47 = pfVar11[6];
                fVar34 = pfVar11[7];
                _local_158 = *(undefined1 (*) [16])(pfVar11 + 4);
                local_148 = pfVar11[8];
                fStack_144 = pfVar11[9];
                fStack_140 = pfVar11[10];
                fStack_13c = pfVar11[0xb];
              }
              else {
                FBoneContainer::GetParentBoneIndex
                          (*(undefined8 *)(param_2 + 0x18),local_218,local_268);
                lVar10 = (longlong)local_218[0];
                if (local_218[0] == -1) goto LAB_140954fdb;
                if (*(char *)(lVar10 + *(longlong *)(param_2 + 0x20)) == '\0') {
                  FUN_14060c680(plVar1);
                }
                pfVar11 = (float *)FUN_14162bcf0((longlong)local_268[0] * 0x30 + *plVar1,&local_168,
                                                 lVar10 * 0x30 + *plVar1);
                fVar27 = (float)local_168;
                fVar29 = local_168._4_4_;
                fVar32 = (float)uStack_160;
                fVar37 = uStack_160._4_4_;
                fVar52 = (float)local_158._0_4_;
                fVar55 = (float)local_158._4_4_;
                fVar47 = fStack_150;
                fVar34 = fStack_14c;
              }
              fVar51 = fStack_13c;
              fVar46 = fStack_140;
              fVar42 = fStack_144;
              fVar39 = local_148;
              fVar38 = fRam0000000146863b68;
              fVar50 = fRam0000000146863b64;
              fVar31 = _DAT_146863b60;
              auVar17._4_4_ = fVar67;
              auVar17._0_4_ = fVar66;
              auVar17._8_4_ = fVar68;
              auVar17._12_4_ = fVar43;
              auVar5._4_4_ = fStack_144;
              auVar5._0_4_ = local_148;
              auVar5._8_4_ = fStack_140;
              auVar5._12_4_ = fStack_13c;
              auVar18 = minps(auVar17,auVar5);
              local_1f8 = _DAT_146863be0;
              fStack_1f4 = fRam0000000146863be4;
              fStack_1f0 = fRam0000000146863be8;
              fStack_1ec = fRam0000000146863bec;
              auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146863be4);
              auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146863be0);
              auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146863be8);
              auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146863bec);
              iVar8 = movmskps((int)pfVar11,auVar19);
              if (iVar8 == 0) {
                fVar40 = fVar30 * fVar27;
                fVar41 = fVar23 * fVar27;
                fVar49 = local_148 * fVar49;
                fVar54 = fStack_144 * fVar54;
                fVar57 = fStack_140 * fVar57;
                fVar35 = fStack_13c * fVar35;
                fVar38 = fVar23 * fVar29;
                fVar36 = fVar30 * fVar29;
                fVar31 = fVar32 * fVar23;
                fVar50 = fVar32 * fVar28;
                fVar23 = fVar33 * fVar27 * _DAT_146863ba0 + fVar23 * fVar37 +
                         fVar28 * fVar29 * _DAT_146863b90 + fVar32 * fVar30 * _DAT_146863b80;
                fVar30 = fVar28 * fVar27 * fRam0000000146863ba4 + fVar30 * fVar37 +
                         fVar33 * fVar29 * fRam0000000146863b94 + fVar31 * fRam0000000146863b84;
                fVar28 = fVar40 * fRam0000000146863ba8 + fVar28 * fVar37 +
                         fVar38 * fRam0000000146863b98 + fVar32 * fVar33 * fRam0000000146863b88;
                fVar33 = fVar41 * fRam0000000146863bac + fVar33 * fVar37 +
                         fVar36 * fRam0000000146863b9c + fVar50 * fRam0000000146863b8c;
                fVar31 = fVar57 * fVar29 - fVar54 * fVar32;
                fVar50 = fVar49 * fVar32 - fVar57 * fVar27;
                fVar38 = fVar54 * fVar27 - fVar49 * fVar29;
                fVar36 = fVar35 * fVar37 - fVar35 * fVar37;
                fVar31 = fVar31 + fVar31;
                fVar50 = fVar50 + fVar50;
                fVar38 = fVar38 + fVar38;
                fVar36 = fVar36 + fVar36;
                fVar49 = (fVar38 * fVar29 - fVar50 * fVar32) + fVar31 * fVar37 + fVar49 + fVar52;
                fVar54 = (fVar31 * fVar32 - fVar38 * fVar27) + fVar50 * fVar37 + fVar54 + fVar55;
                fVar57 = (fVar50 * fVar27 - fVar31 * fVar29) + fVar38 * fVar37 + fVar57 + fVar47;
                fVar35 = (fVar36 * fVar37 - fVar36 * fVar37) + fVar36 * fVar37 + fVar35 + fVar34;
              }
              else {
                fVar34 = fVar29 + fVar29;
                fVar40 = fVar32 + fVar32;
                fVar63 = local_148 * fVar66;
                fVar64 = fStack_144 * fVar67;
                fVar65 = fStack_140 * fVar68;
                fVar44 = fVar27 * (fVar27 + fVar27);
                fVar35 = (fVar27 + fVar27) * fVar37;
                fVar36 = fVar30 + fVar30;
                fVar41 = fVar28 + fVar28;
                fVar60 = (fVar40 * fVar37 + fVar34 * fVar27) * local_148;
                fVar61 = (fVar35 + fVar40 * fVar29) * fStack_144;
                fVar62 = (fVar34 * fVar37 + fVar40 * fVar27) * fStack_140;
                fVar48 = fStack_144 * (fVar34 * fVar27 - fVar40 * fVar37);
                fVar53 = fStack_140 * (fVar40 * fVar29 - fVar35);
                fVar56 = local_148 * (fVar40 * fVar27 - fVar34 * fVar37);
                fVar45 = fVar23 * (fVar23 + fVar23);
                fVar35 = (float)((uint)((_DAT_146863b60 - (fVar32 * fVar40 + fVar29 * fVar34)) *
                                       local_148) & _DAT_146863b70);
                fVar27 = (float)((uint)((fRam0000000146863b64 - (fVar32 * fVar40 + fVar44)) *
                                       fStack_144) & uRam0000000146863b74);
                fVar29 = (float)((uint)((fRam0000000146863b68 - (fVar29 * fVar34 + fVar44)) *
                                       fStack_140) & uRam0000000146863b78);
                fVar32 = (float)((uint)((fRam0000000146863b6c - (fVar44 + fVar44)) * fStack_13c) &
                                uRam0000000146863b7c);
                fVar37 = (fVar23 + fVar23) * fVar33;
                fVar44 = (fVar41 * fVar33 + fVar23 * fVar36) * fVar66;
                fVar58 = (fVar37 + fVar30 * fVar41) * fVar67;
                fVar59 = (fVar36 * fVar33 + fVar23 * fVar41) * fVar68;
                fVar34 = fVar67 * (fVar23 * fVar36 - fVar41 * fVar33);
                fVar37 = fVar68 * (fVar30 * fVar41 - fVar37);
                fVar40 = fVar66 * (fVar23 * fVar41 - fVar36 * fVar33);
                fVar23 = (float)((uint)((_DAT_146863b60 - (fVar28 * fVar41 + fVar30 * fVar36)) *
                                       fVar66) & _DAT_146863b70);
                fVar28 = (float)((uint)((fRam0000000146863b64 - (fVar28 * fVar41 + fVar45)) * fVar67
                                       ) & uRam0000000146863b74);
                fVar30 = (float)((uint)((fRam0000000146863b68 - (fVar30 * fVar36 + fVar45)) * fVar68
                                       ) & uRam0000000146863b78);
                fVar33 = (float)((uint)((fRam0000000146863b6c - (fVar45 + fVar45)) * fVar43) &
                                uRam0000000146863b7c);
                local_138 = fVar44 * fVar48 + fVar23 * fVar35 + fVar40 * fVar62 + fVar33 * fVar52;
                fStack_134 = fVar44 * fVar27 + fVar23 * fVar60 + fVar40 * fVar53 + fVar33 * fVar55;
                fStack_130 = fVar44 * fVar61 + fVar23 * fVar56 + fVar40 * fVar29 + fVar33 * fVar47;
                fStack_12c = fVar44 * fVar32 + fVar23 * fVar32 + fVar40 * fVar32 +
                             fVar33 * fRam0000000146863b6c;
                local_128 = fVar28 * fVar48 + fVar34 * fVar35 + fVar58 * fVar62 + fVar33 * fVar52;
                fStack_124 = fVar28 * fVar27 + fVar34 * fVar60 + fVar58 * fVar53 + fVar33 * fVar55;
                fStack_120 = fVar28 * fVar61 + fVar34 * fVar56 + fVar58 * fVar29 + fVar33 * fVar47;
                fStack_11c = fVar28 * fVar32 + fVar34 * fVar32 + fVar58 * fVar32 +
                             fVar33 * fRam0000000146863b6c;
                local_118 = fVar37 * fVar48 + fVar59 * fVar35 + fVar30 * fVar62 + fVar33 * fVar52;
                fStack_114 = fVar37 * fVar27 + fVar59 * fVar60 + fVar30 * fVar53 + fVar33 * fVar55;
                fStack_110 = fVar37 * fVar61 + fVar59 * fVar56 + fVar30 * fVar29 + fVar33 * fVar47;
                fStack_10c = fVar37 * fVar32 + fVar59 * fVar32 + fVar30 * fVar32 +
                             fVar33 * fRam0000000146863b6c;
                local_108 = fVar54 * fVar48 + fVar49 * fVar35 + fVar57 * fVar62 +
                            fRam0000000146863b6c * fVar52;
                fStack_104 = fVar54 * fVar27 + fVar49 * fVar60 + fVar57 * fVar53 +
                             fRam0000000146863b6c * fVar55;
                fStack_100 = fVar54 * fVar61 + fVar49 * fVar56 + fVar57 * fVar29 +
                             fRam0000000146863b6c * fVar47;
                fStack_fc = fVar54 * fVar32 + fVar49 * fVar32 + fVar57 * fVar32 +
                            fRam0000000146863b6c * fRam0000000146863b6c;
                FMatrix::RemoveScaling(&local_138);
                fVar23 = (float)(-(uint)(local_1f8 <= fVar63) & (_DAT_146863bd0 ^ (uint)fVar31) ^
                                _DAT_146863bd0);
                fVar30 = (float)(-(uint)(fStack_1f4 <= fVar64) &
                                 (uRam0000000146863bd4 ^ (uint)fVar50) ^ uRam0000000146863bd4);
                fVar28 = (float)(-(uint)(fStack_1f0 <= fVar65) &
                                 (uRam0000000146863bd8 ^ (uint)fVar38) ^ uRam0000000146863bd8);
                local_138 = local_138 * fVar23;
                fStack_134 = fStack_134 * fVar23;
                fStack_130 = fStack_130 * fVar23;
                fStack_124 = fStack_124 * fVar30;
                fStack_120 = fStack_120 * fVar30;
                local_128 = local_128 * fVar30;
                fStack_114 = fStack_114 * fVar28;
                fStack_110 = fStack_110 * fVar28;
                local_118 = local_118 * fVar28;
                FQuat::FQuat(&local_1c8,&local_138);
                local_268[0] = 0x322bcc77;
                auVar24._0_4_ = local_1c8 * local_1c8 + fStack_1c0 * fStack_1c0;
                auVar24._4_4_ = fStack_1c4 * fStack_1c4 + fStack_1bc * fStack_1bc;
                auVar24._8_4_ = fStack_1c0 * fStack_1c0 + local_1c8 * local_1c8;
                auVar24._12_4_ = fStack_1bc * fStack_1bc + fStack_1c4 * fStack_1c4;
                fVar49 = auVar24._4_4_ + auVar24._0_4_;
                fVar54 = auVar24._8_4_ + auVar24._4_4_;
                fVar57 = auVar24._12_4_ + auVar24._8_4_;
                fVar27 = auVar24._0_4_ + auVar24._12_4_;
                auVar3._4_4_ = fVar54;
                auVar3._0_4_ = fVar49;
                auVar3._8_4_ = fVar57;
                auVar3._12_4_ = fVar27;
                auVar18 = rsqrtps(auVar24,auVar3);
                fVar23 = auVar18._0_4_;
                fVar30 = auVar18._4_4_;
                fVar28 = auVar18._8_4_;
                fVar33 = auVar18._12_4_;
                fVar23 = (_DAT_146863bc0 - fVar23 * fVar23 * fVar49 * _DAT_146863bc0) * fVar23 +
                         fVar23;
                fVar30 = (fRam0000000146863bc4 - fVar30 * fVar30 * fVar54 * fRam0000000146863bc4) *
                         fVar30 + fVar30;
                fVar28 = (fRam0000000146863bc8 - fVar28 * fVar28 * fVar57 * fRam0000000146863bc8) *
                         fVar28 + fVar28;
                fVar33 = (fRam0000000146863bcc - fVar33 * fVar33 * fVar27 * fRam0000000146863bcc) *
                         fVar33 + fVar33;
                fVar35 = 0.0;
                fVar23 = (float)(((uint)(((_DAT_146863bc0 -
                                          fVar23 * fVar23 * fVar49 * _DAT_146863bc0) * fVar23 +
                                         fVar23) * local_1c8) ^ _DAT_146863bb0) &
                                 -(uint)(1e-08 <= fVar49) ^ _DAT_146863bb0);
                fVar30 = (float)(((uint)(((fRam0000000146863bc4 -
                                          fVar30 * fVar30 * fVar54 * fRam0000000146863bc4) * fVar30
                                         + fVar30) * fStack_1c4) ^ uRam0000000146863bb4) &
                                 -(uint)(1e-08 <= fVar54) ^ uRam0000000146863bb4);
                fVar28 = (float)(((uint)(((fRam0000000146863bc8 -
                                          fVar28 * fVar28 * fVar57 * fRam0000000146863bc8) * fVar28
                                         + fVar28) * fStack_1c0) ^ uRam0000000146863bb8) &
                                 -(uint)(1e-08 <= fVar57) ^ uRam0000000146863bb8);
                fVar33 = (float)(((uint)(((fRam0000000146863bcc -
                                          fVar33 * fVar33 * fVar27 * fRam0000000146863bcc) * fVar33
                                         + fVar33) * fStack_1bc) ^ uRam0000000146863bbc) &
                                 -(uint)(1e-08 <= fVar27) ^ uRam0000000146863bbc);
                fVar49 = local_108;
                fVar54 = fStack_104;
                fVar57 = fStack_100;
                local_1c8 = fVar23;
                fStack_1c4 = fVar30;
                fStack_1c0 = fVar28;
                fStack_1bc = fVar33;
              }
              fVar43 = fVar51 * fVar43;
              fVar68 = fVar46 * fVar68;
              fVar67 = fVar42 * fVar67;
              fVar66 = fVar39 * fVar66;
              piVar13 = piVar13 + 1;
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar16);
            iVar8 = piVar14[2];
          }
          lVar7 = local_1e8;
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar8 * 8);
          local_1f8 = fVar66;
          fStack_1f4 = fVar67;
          fStack_1f0 = fVar68;
          fStack_1ec = fVar43;
          uVar12 = P2UTransform(&local_138,
                                (longlong)*(int *)(lVar10 + 0x38) * 0x60 + 0x30 +
                                *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x50));
          uVar9 = FUN_14162bfb0(lVar10,&local_168,uVar12);
          fVar47 = fStack_13c;
          fVar55 = fStack_140;
          fVar52 = fStack_144;
          fVar37 = local_148;
          fVar32 = fRam0000000146863b68;
          fVar29 = fRam0000000146863b64;
          fVar27 = _DAT_146863b60;
          auVar20._4_4_ = fVar67;
          auVar20._0_4_ = fVar66;
          auVar20._8_4_ = fVar68;
          auVar20._12_4_ = fVar43;
          auVar6._4_4_ = fStack_144;
          auVar6._0_4_ = local_148;
          auVar6._8_4_ = fStack_140;
          auVar6._12_4_ = fStack_13c;
          auVar18 = minps(auVar20,auVar6);
          local_1e8 = CONCAT44(fRam0000000146863be4,_DAT_146863be0);
          fStack_1e0 = fRam0000000146863be8;
          fStack_1dc = fRam0000000146863bec;
          auVar21._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146863be4);
          auVar21._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146863be0);
          auVar21._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146863be8);
          auVar21._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146863bec);
          iVar8 = movmskps(uVar9,auVar21);
          if (iVar8 == 0) {
            fVar49 = fVar49 * local_148;
            fVar54 = fVar54 * fStack_144;
            fVar57 = fVar57 * fStack_140;
            fVar35 = fVar35 * fStack_13c;
            local_198 = fVar33 * (float)local_168 * _DAT_146863ba0 + fVar23 * uStack_160._4_4_ +
                        fVar28 * local_168._4_4_ * _DAT_146863b90 +
                        (float)uStack_160 * fVar30 * _DAT_146863b80;
            fStack_194 = fVar28 * (float)local_168 * fRam0000000146863ba4 +
                         fVar30 * uStack_160._4_4_ + fVar33 * local_168._4_4_ * fRam0000000146863b94
                         + (float)uStack_160 * fVar23 * fRam0000000146863b84;
            fStack_190 = fVar30 * (float)local_168 * fRam0000000146863ba8 +
                         fVar28 * uStack_160._4_4_ + fVar23 * local_168._4_4_ * fRam0000000146863b98
                         + (float)uStack_160 * fVar33 * fRam0000000146863b88;
            fStack_18c = fVar23 * (float)local_168 * fRam0000000146863bac +
                         fVar33 * uStack_160._4_4_ + fVar30 * local_168._4_4_ * fRam0000000146863b9c
                         + (float)uStack_160 * fVar28 * fRam0000000146863b8c;
            fVar23 = fVar57 * local_168._4_4_ - fVar54 * (float)uStack_160;
            fVar30 = fVar49 * (float)uStack_160 - fVar57 * (float)local_168;
            fVar28 = fVar54 * (float)local_168 - fVar49 * local_168._4_4_;
            fVar33 = fVar35 * uStack_160._4_4_ - fVar35 * uStack_160._4_4_;
            fVar23 = fVar23 + fVar23;
            fVar30 = fVar30 + fVar30;
            fVar28 = fVar28 + fVar28;
            fVar33 = fVar33 + fVar33;
            local_188._4_4_ =
                 (fVar23 * (float)uStack_160 - fVar28 * (float)local_168) +
                 fVar30 * uStack_160._4_4_ + fVar54 + (float)local_158._4_4_;
            local_188._0_4_ =
                 (fVar28 * local_168._4_4_ - fVar30 * (float)uStack_160) +
                 fVar23 * uStack_160._4_4_ + fVar49 + (float)local_158._0_4_;
            fStack_180 = (fVar30 * (float)local_168 - fVar23 * local_168._4_4_) +
                         fVar28 * uStack_160._4_4_ + fVar57 + fStack_150;
            fStack_17c = (fVar33 * uStack_160._4_4_ - fVar33 * uStack_160._4_4_) +
                         fVar33 * uStack_160._4_4_ + fVar35 + fStack_14c;
          }
          else {
            fVar34 = local_168._4_4_ + local_168._4_4_;
            fVar31 = (float)uStack_160 + (float)uStack_160;
            fVar60 = fVar66 * local_148;
            fVar61 = fVar67 * fStack_144;
            fVar62 = fVar68 * fStack_140;
            fVar50 = (float)local_168 * ((float)local_168 + (float)local_168);
            fVar35 = uStack_160._4_4_ * ((float)local_168 + (float)local_168);
            fVar56 = (uStack_160._4_4_ * fVar31 + (float)local_168 * fVar34) * local_148;
            fVar58 = (fVar35 + local_168._4_4_ * fVar31) * fStack_144;
            fVar59 = (uStack_160._4_4_ * fVar34 + (float)local_168 * fVar31) * fStack_140;
            fVar40 = fStack_144 * ((float)local_168 * fVar34 - uStack_160._4_4_ * fVar31);
            fVar41 = fStack_140 * (local_168._4_4_ * fVar31 - fVar35);
            fVar44 = local_148 * ((float)local_168 * fVar31 - uStack_160._4_4_ * fVar34);
            fVar38 = fVar30 + fVar30;
            fVar42 = fVar28 + fVar28;
            fVar35 = (float)((uint)((_DAT_146863b60 -
                                    ((float)uStack_160 * fVar31 + local_168._4_4_ * fVar34)) *
                                   local_148) & _DAT_146863b70);
            fVar31 = (float)((uint)((fRam0000000146863b64 - ((float)uStack_160 * fVar31 + fVar50)) *
                                   fStack_144) & uRam0000000146863b74);
            fVar34 = (float)((uint)((fRam0000000146863b68 - (local_168._4_4_ * fVar34 + fVar50)) *
                                   fStack_140) & uRam0000000146863b78);
            fVar50 = (float)((uint)((fRam0000000146863b6c - (fVar50 + fVar50)) * fStack_13c) &
                            uRam0000000146863b7c);
            fVar46 = fVar23 * (fVar23 + fVar23);
            fVar39 = (fVar23 + fVar23) * fVar33;
            fVar45 = (fVar42 * fVar33 + fVar23 * fVar38) * local_1f8;
            fVar48 = (fVar39 + fVar30 * fVar42) * fStack_1f4;
            fVar53 = (fVar38 * fVar33 + fVar23 * fVar42) * fStack_1f0;
            fVar51 = fStack_1f4 * (fVar23 * fVar38 - fVar42 * fVar33);
            fVar39 = fStack_1f0 * (fVar30 * fVar42 - fVar39);
            fVar36 = local_1f8 * (fVar23 * fVar42 - fVar38 * fVar33);
            fVar23 = (float)((uint)((_DAT_146863b60 - (fVar28 * fVar42 + fVar30 * fVar38)) *
                                   local_1f8) & _DAT_146863b70);
            fVar28 = (float)((uint)((fRam0000000146863b64 - (fVar28 * fVar42 + fVar46)) * fStack_1f4
                                   ) & uRam0000000146863b74);
            fVar30 = (float)((uint)((fRam0000000146863b68 - (fVar30 * fVar38 + fVar46)) * fStack_1f0
                                   ) & uRam0000000146863b78);
            fVar33 = (float)((uint)((fRam0000000146863b6c - (fVar46 + fVar46)) * fStack_1ec) &
                            uRam0000000146863b7c);
            local_258 = fVar45 * fVar40 + fVar23 * fVar35 + fVar36 * fVar59 +
                        fVar33 * (float)local_158._0_4_;
            fStack_254 = fVar45 * fVar31 + fVar23 * fVar56 + fVar36 * fVar41 +
                         fVar33 * (float)local_158._4_4_;
            fStack_250 = fVar45 * fVar58 + fVar23 * fVar44 + fVar36 * fVar34 + fVar33 * fStack_150;
            fStack_24c = fVar45 * fVar50 + fVar23 * fVar50 + fVar36 * fVar50 +
                         fVar33 * fRam0000000146863b6c;
            local_248 = fVar28 * fVar40 + fVar51 * fVar35 + fVar48 * fVar59 +
                        fVar33 * (float)local_158._0_4_;
            fStack_244 = fVar28 * fVar31 + fVar51 * fVar56 + fVar48 * fVar41 +
                         fVar33 * (float)local_158._4_4_;
            fStack_240 = fVar28 * fVar58 + fVar51 * fVar44 + fVar48 * fVar34 + fVar33 * fStack_150;
            fStack_23c = fVar28 * fVar50 + fVar51 * fVar50 + fVar48 * fVar50 +
                         fVar33 * fRam0000000146863b6c;
            local_238 = fVar39 * fVar40 + fVar53 * fVar35 + fVar30 * fVar59 +
                        fVar33 * (float)local_158._0_4_;
            fStack_234 = fVar39 * fVar31 + fVar53 * fVar56 + fVar30 * fVar41 +
                         fVar33 * (float)local_158._4_4_;
            fStack_230 = fVar39 * fVar58 + fVar53 * fVar44 + fVar30 * fVar34 + fVar33 * fStack_150;
            fStack_22c = fVar39 * fVar50 + fVar53 * fVar50 + fVar30 * fVar50 +
                         fVar33 * fRam0000000146863b6c;
            local_228 = fVar54 * fVar40 + fVar49 * fVar35 + fVar57 * fVar59 +
                        fRam0000000146863b6c * (float)local_158._0_4_;
            fStack_224 = fVar54 * fVar31 + fVar49 * fVar56 + fVar57 * fVar41 +
                         fRam0000000146863b6c * (float)local_158._4_4_;
            fStack_220 = fVar54 * fVar58 + fVar49 * fVar44 + fVar57 * fVar34 +
                         fRam0000000146863b6c * fStack_150;
            fStack_21c = fVar54 * fVar50 + fVar49 * fVar50 + fVar57 * fVar50 +
                         fRam0000000146863b6c * fRam0000000146863b6c;
            FMatrix::RemoveScaling(&local_258);
            fVar23 = (float)(-(uint)((float)local_1e8 <= fVar60) & (_DAT_146863bd0 ^ (uint)fVar27) ^
                            _DAT_146863bd0);
            fVar30 = (float)(-(uint)(local_1e8._4_4_ <= fVar61) &
                             (uRam0000000146863bd4 ^ (uint)fVar29) ^ uRam0000000146863bd4);
            fVar28 = (float)(-(uint)(fStack_1e0 <= fVar62) & (uRam0000000146863bd8 ^ (uint)fVar32) ^
                            uRam0000000146863bd8);
            local_258 = local_258 * fVar23;
            fStack_254 = fStack_254 * fVar23;
            fStack_250 = fStack_250 * fVar23;
            fStack_240 = fStack_240 * fVar30;
            fStack_244 = fStack_244 * fVar30;
            local_248 = local_248 * fVar30;
            fStack_230 = fStack_230 * fVar28;
            local_238 = local_238 * fVar28;
            fStack_234 = fStack_234 * fVar28;
            FQuat::FQuat(&local_1b8,&local_258);
            local_268[0] = 0x322bcc77;
            auVar25._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
            auVar25._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
            auVar25._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
            auVar25._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
            fVar49 = auVar25._4_4_ + auVar25._0_4_;
            fVar54 = auVar25._8_4_ + auVar25._4_4_;
            fVar57 = auVar25._12_4_ + auVar25._8_4_;
            fVar35 = auVar25._0_4_ + auVar25._12_4_;
            auVar4._4_4_ = fVar54;
            auVar4._0_4_ = fVar49;
            auVar4._8_4_ = fVar57;
            auVar4._12_4_ = fVar35;
            auVar18 = rsqrtps(auVar25,auVar4);
            fVar23 = auVar18._0_4_;
            fVar30 = auVar18._4_4_;
            fVar28 = auVar18._8_4_;
            fVar33 = auVar18._12_4_;
            fVar23 = (_DAT_146863bc0 - fVar23 * fVar23 * fVar49 * _DAT_146863bc0) * fVar23 + fVar23;
            fVar30 = (fRam0000000146863bc4 - fVar30 * fVar30 * fVar54 * fRam0000000146863bc4) *
                     fVar30 + fVar30;
            fVar28 = (fRam0000000146863bc8 - fVar28 * fVar28 * fVar57 * fRam0000000146863bc8) *
                     fVar28 + fVar28;
            fVar33 = (fRam0000000146863bcc - fVar33 * fVar33 * fVar35 * fRam0000000146863bcc) *
                     fVar33 + fVar33;
            local_188._4_4_ = fStack_224;
            local_188._0_4_ = local_228;
            fStack_180 = fStack_220;
            local_1b8 = (float)(((uint)(((_DAT_146863bc0 - fVar23 * fVar23 * fVar49 * _DAT_146863bc0
                                         ) * fVar23 + fVar23) * local_1b8) ^ _DAT_146863bb0) &
                                -(uint)(1e-08 <= fVar49) ^ _DAT_146863bb0);
            fStack_1b4 = (float)(((uint)(((fRam0000000146863bc4 -
                                          fVar30 * fVar30 * fVar54 * fRam0000000146863bc4) * fVar30
                                         + fVar30) * fStack_1b4) ^ uRam0000000146863bb4) &
                                 -(uint)(1e-08 <= fVar54) ^ uRam0000000146863bb4);
            fStack_1b0 = (float)(((uint)(((fRam0000000146863bc8 -
                                          fVar28 * fVar28 * fVar57 * fRam0000000146863bc8) * fVar28
                                         + fVar28) * fStack_1b0) ^ uRam0000000146863bb8) &
                                 -(uint)(1e-08 <= fVar57) ^ uRam0000000146863bb8);
            fStack_1ac = (float)(((uint)(((fRam0000000146863bcc -
                                          fVar33 * fVar33 * fVar35 * fRam0000000146863bcc) * fVar33
                                         + fVar33) * fStack_1ac) ^ uRam0000000146863bbc) &
                                 -(uint)(1e-08 <= fVar35) ^ uRam0000000146863bbc);
            fStack_17c = 0.0;
            local_198 = local_1b8;
            fStack_194 = fStack_1b4;
            fStack_190 = fStack_1b0;
            fStack_18c = fStack_1ac;
          }
          fStack_16c = fVar43 * fVar47;
          fStack_170 = fVar68 * fVar55;
          fStack_174 = fVar67 * fVar52;
          local_178 = fVar66 * fVar37;
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + lVar7 * 8);
        }
        FUN_140957ed0(uVar12);
        param_3 = local_210;
        param_2 = local_200;
        param_4 = local_208;
      }
      piVar14 = piVar14 + 8;
    } while (piVar14 != local_1d8);
  }
  return;
}



// FUNCTION 140956010 FUN_140956010 body=526 status=ok
// SIG undefined FUN_140956010(void)

void FUN_140956010(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar3 = DAT_146863c00;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + lVar3) != 0) {
    uVar7 = (**(code **)(*param_2 + 0x148))(param_2);
    lVar3 = param_2[4];
    plVar8 = (longlong *)(**(code **)(*param_2 + 0x278))();
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x6e8))(plVar8);
    }
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      local_28 = 0;
      if (plVar8 == (longlong *)0x0) {
        local_20 = FUN_1428cc5b0(uVar7);
      }
      else {
        local_20 = (**(code **)(*plVar8 + 0x3f8))();
      }
      local_14 = local_20;
      puVar9 = &local_1c;
      local_1c = local_28;
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x150);
      puVar9 = &local_28;
      local_28 = *(undefined8 *)(param_1 + 0x148);
    }
    uVar1 = *(undefined4 *)(puVar9 + 1);
    *(undefined8 *)(param_1 + 0x278) = *puVar9;
    *(undefined4 *)(param_1 + 0x280) = uVar1;
    if (lVar3 != 0) {
      if (((*(longlong *)(param_1 + 0x1c0) != 0) && (*(char *)(param_1 + 0x185) != '\0')) &&
         (*(int *)(param_1 + 0x188) == 1)) {
        FUN_140959390(param_1,uVar7,lVar3);
      }
      puVar9 = (undefined8 *)(param_1 + 0x218);
      if (puVar9 != (undefined8 *)(lVar3 + 0xb80)) {
        iVar2 = *(int *)(lVar3 + 0xb88);
        _Src = *(void **)(lVar3 + 0xb80);
        *(int *)(param_1 + 0x220) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_1 + 0x224) == 0)) {
          *(undefined4 *)(param_1 + 0x224) = 0;
        }
        else {
          TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy(puVar9,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)iVar2 * 0x24);
        }
      }
      *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x550);
      *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x558);
      *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x560);
      *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x568);
      *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x570);
      *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x578);
      uVar7 = *(undefined8 *)(lVar3 + 0x218);
      *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(lVar3 + 0x210);
      *(undefined8 *)(param_1 + 0x558) = uVar7;
      uVar7 = *(undefined8 *)(lVar3 + 0x228);
      *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(lVar3 + 0x220);
      *(undefined8 *)(param_1 + 0x568) = uVar7;
      uVar7 = *(undefined8 *)(lVar3 + 0x238);
      *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(lVar3 + 0x230);
      *(undefined8 *)(param_1 + 0x578) = uVar7;
    }
  }
  return;
}



// FUNCTION 140956220 PrepareConstraints body=1744 status=ok
// SIG undefined PrepareConstraints(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ImmediatePhysics::FSimulation::PrepareConstraints(longlong param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStack_e88 [32];
  longlong local_e68;
  int *local_e60;
  int *local_e58;
  undefined4 local_e50;
  uint local_e48;
  uint local_e44;
  undefined1 local_e40 [24];
  undefined8 local_e28;
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  undefined4 local_e08 [4];
  longlong alStack_df8 [5];
  int aiStack_dd0 [18];
  longlong alStack_d88 [2];
  undefined4 uStack_d78;
  undefined2 uStack_d74;
  undefined1 auStack_d72 [2];
  undefined4 auStack_d70 [2];
  undefined8 uStack_d68;
  byte abStack_d60 [8];
  undefined8 auStack_d58 [82];
  undefined4 local_ac8 [4];
  longlong alStack_ab8 [5];
  int aiStack_a90 [18];
  longlong lStack_a48;
  int aiStack_a40 [2];
  undefined8 auStack_a38 [2];
  undefined2 uStack_a28;
  undefined1 auStack_a26 [542];
  undefined1 local_808 [60];
  undefined4 local_7cc [465];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_e88;
  iVar6 = 1 - *(int *)(param_1 + 0x298);
  lVar12 = (longlong)iVar6;
  *(int *)(param_1 + 0x298) = iVar6;
  lVar13 = *(longlong *)(param_1 + 0x280 + lVar12 * 0x10);
  uVar9 = 0;
  if (lVar13 != 0) {
    do {
      *(undefined4 *)(lVar13 + 0x10010) = 0;
      lVar13 = *(longlong *)(lVar13 + 0x10000);
    } while (lVar13 != 0);
    uVar9 = *(undefined8 *)(param_1 + 0x280 + lVar12 * 0x10);
  }
  *(undefined8 *)(param_1 + 0x278 + lVar12 * 0x10) = uVar9;
  local_e48 = 0;
  if (*(int *)(param_1 + 0x150) != 0) {
    do {
      uVar16 = local_e48;
      iVar6 = 0;
      lVar13 = *(longlong *)(param_1 + 0x128);
      *(undefined2 *)(lVar13 + 6 + (longlong)(int)local_e48 * 8) = 1;
      piVar1 = (int *)(lVar13 + (longlong)(int)local_e48 * 8);
      ::_guard_xfg_dispatch_icall_nop(local_808,0,0x780);
      puVar10 = local_7cc;
      lVar13 = 0x18;
      do {
        puVar10[-4] = 0xff7fffff;
        *puVar10 = 0x7f7fffff;
        puVar10 = puVar10 + 0x14;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      uVar15 = 0;
      if ((short)piVar1[1] != 0) {
        do {
          iVar8 = *piVar1;
          uVar11 = (ulonglong)uVar15;
          local_e60 = aiStack_a90 + uVar11 * 0x2c;
          plVar17 = (longlong *)
                    ((longlong)(int)(iVar8 + uVar15) * 0x30 + *(longlong *)(param_1 + 0x118));
          alStack_ab8[uVar11 * 0x16 + 1] = *plVar17;
          alStack_ab8[uVar11 * 0x16 + 2] = plVar17[1];
          lVar13 = (longlong)*(int *)((longlong)plVar17 + 0x14) * 0x70 +
                   *(longlong *)(param_1 + 0x60);
          alStack_ab8[uVar11 * 0x16 + 3] = lVar13;
          alStack_ab8[uVar11 * 0x16 + 4] =
               (longlong)(int)plVar17[3] * 0x70 + *(longlong *)(param_1 + 0x60);
          *local_e60 = *(int *)(lVar13 + 0x50);
          aiStack_a90[uVar11 * 0x2c + 1] = *(int *)(lVar13 + 0x54);
          aiStack_a90[uVar11 * 0x2c + 2] = *(int *)(lVar13 + 0x58);
          aiStack_a90[uVar11 * 0x2c + 3] = *(int *)(lVar13 + 0x5c);
          aiStack_a90[uVar11 * 0x2c + 4] = *(int *)(lVar13 + 0x60);
          aiStack_a90[uVar11 * 0x2c + 5] = *(int *)(lVar13 + 100);
          local_e58 = aiStack_a90 + uVar11 * 0x2c + 7;
          aiStack_a90[uVar11 * 0x2c + 6] = *(int *)(lVar13 + 0x68);
          lVar13 = alStack_ab8[uVar11 * 0x16 + 4];
          *local_e58 = *(int *)(lVar13 + 0x50);
          aiStack_a90[uVar11 * 0x2c + 8] = *(int *)(lVar13 + 0x54);
          aiStack_a90[uVar11 * 0x2c + 9] = *(int *)(lVar13 + 0x58);
          aiStack_a90[uVar11 * 0x2c + 10] = *(int *)(lVar13 + 0x5c);
          aiStack_a90[uVar11 * 0x2c + 0xb] = *(int *)(lVar13 + 0x60);
          aiStack_a90[uVar11 * 0x2c + 0xc] = *(int *)(lVar13 + 100);
          aiStack_a90[uVar11 * 0x2c + 0xd] = *(int *)(lVar13 + 0x68);
          aiStack_a90[uVar11 * 0x2c + 0xe] = 1;
          if (alStack_ab8[uVar11 * 0x16 + 2] == 0) {
            iVar7 = 2;
          }
          else {
            iVar7 = 2 - (uint)(*(uint *)(plVar17 + 3) < *(uint *)(param_1 + 0x168));
          }
          aiStack_a90[uVar11 * 0x2c + 0xf] = iVar7;
          lVar13 = (longlong)iVar6;
          alStack_ab8[uVar11 * 0x16] = (longlong)plVar17;
          local_ac8[uVar11 * 0x2c + 2] = 0x3f800000;
          local_ac8[uVar11 * 0x2c] = 0x3f800000;
          local_ac8[uVar11 * 0x2c + 3] = 0x3f800000;
          local_ac8[uVar11 * 0x2c + 1] = 0x3f800000;
          local_e68 = (longlong)(int)(iVar8 + uVar15) * 0x1e0 + *(longlong *)(param_1 + 0x138);
          auStack_a38[uVar11 * 0x16 + 1] = 0;
          aiStack_a40[uVar11 * 0x2c + 1] = 0x7f7fffff;
          auStack_a38[uVar11 * 0x16] = 0x7f7fffff;
          (&uStack_a28)[uVar11 * 0x58] = 0x100;
          auStack_a26[uVar11 * 0xb0] = 0;
          iVar8 = D6JointSolverPrep(local_808 + lVar13 * 0x50,local_e40,0,&local_e28);
          iVar6 = iVar6 + iVar8;
          local_ac8[uVar11 * 0x2c] = (undefined4)local_e28;
          local_ac8[uVar11 * 0x2c + 1] = local_e28._4_4_;
          local_ac8[uVar11 * 0x2c + 2] = uStack_e20;
          local_ac8[uVar11 * 0x2c + 3] = uStack_e1c;
          aiStack_a40[uVar11 * 0x2c] = iVar8;
          uVar15 = uVar15 + 1;
          (&lStack_a48)[uVar11 * 0x16] = (longlong)(local_808 + lVar13 * 0x50);
          uVar16 = local_e48;
        } while (uVar15 < *(ushort *)(piVar1 + 1));
      }
      local_e60 = (int *)CONCAT44(local_e60._4_4_,1.0 / param_2);
      local_e68 = CONCAT44(local_e68._4_4_,param_2);
      PxCreateJointConstraints(piVar1,1,local_ac8,param_1 + 0x270);
      local_e48 = uVar16 + 1;
    } while (local_e48 < *(uint *)(param_1 + 0x150));
  }
  uVar16 = *(uint *)(param_1 + 0x150);
  uVar15 = *(int *)(param_1 + 0x14c) + uVar16;
  *(undefined1 *)(param_1 + 0x148) = 0;
  local_e44 = uVar15;
  if (uVar16 < uVar15) {
    do {
      uVar18 = 0;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x128) + (longlong)(int)uVar16 * 8);
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x154);
      if ((short)piVar1[1] != 0) {
        lVar13 = *(longlong *)(param_1 + 0x118);
        lVar12 = *(longlong *)(param_1 + 0x60);
        lVar3 = *(longlong *)(param_1 + 0x90);
        lVar4 = *(longlong *)(param_1 + 0x100);
        uVar2 = *(uint *)(param_1 + 0x168);
        do {
          uVar11 = (ulonglong)uVar18;
          plVar17 = (longlong *)((longlong)(int)(*piVar1 + uVar18) * 0x30 + lVar13);
          lVar5 = plVar17[4];
          (&local_e28)[uVar11] = lVar5;
          alStack_df8[uVar11 * 0x1a + 1] = *plVar17;
          alStack_df8[uVar11 * 0x1a + 2] = plVar17[1];
          lVar14 = (longlong)*(int *)((longlong)plVar17 + 0x14) * 0x70 + lVar12;
          alStack_df8[uVar11 * 0x1a + 3] = lVar14;
          alStack_df8[uVar11 * 0x1a + 4] = (longlong)(int)plVar17[3] * 0x70 + lVar12;
          aiStack_dd0[uVar11 * 0x34] = *(int *)(lVar14 + 0x50);
          aiStack_dd0[uVar11 * 0x34 + 1] = *(int *)(lVar14 + 0x54);
          aiStack_dd0[uVar11 * 0x34 + 2] = *(int *)(lVar14 + 0x58);
          aiStack_dd0[uVar11 * 0x34 + 3] = *(int *)(lVar14 + 0x5c);
          aiStack_dd0[uVar11 * 0x34 + 4] = *(int *)(lVar14 + 0x60);
          aiStack_dd0[uVar11 * 0x34 + 5] = *(int *)(lVar14 + 100);
          aiStack_dd0[uVar11 * 0x34 + 6] = *(int *)(lVar14 + 0x68);
          lVar14 = alStack_df8[uVar11 * 0x1a + 4];
          aiStack_dd0[uVar11 * 0x34 + 7] = *(int *)(lVar14 + 0x50);
          aiStack_dd0[uVar11 * 0x34 + 8] = *(int *)(lVar14 + 0x54);
          aiStack_dd0[uVar11 * 0x34 + 9] = *(int *)(lVar14 + 0x58);
          aiStack_dd0[uVar11 * 0x34 + 10] = *(int *)(lVar14 + 0x5c);
          aiStack_dd0[uVar11 * 0x34 + 0xb] = *(int *)(lVar14 + 0x60);
          aiStack_dd0[uVar11 * 0x34 + 0xc] = *(int *)(lVar14 + 100);
          aiStack_dd0[uVar11 * 0x34 + 0xd] = *(int *)(lVar14 + 0x68);
          auStack_d58[uVar11 * 0x1a] = 0;
          alStack_d88[uVar11 * 0x1a + 1] = (longlong)*(int *)(lVar5 + 8) * 0x40 + lVar3;
          (&uStack_d78)[uVar11 * 0x34] = *(undefined4 *)(lVar5 + 0xc);
          lVar14 = (longlong)*(int *)(lVar5 + 0x10) * 0x20;
          (&uStack_d68)[uVar11 * 0x1a] = *(undefined8 *)(lVar14 + 0x10 + lVar4);
          abStack_d60[uVar11 * 0xd0] = *(byte *)(lVar14 + 0x18 + lVar4);
          (&uStack_d74)[uVar11 * 0x68] = 0;
          auStack_d72[uVar11 * 0xd0] = 0;
          alStack_d88[uVar11 * 0x1a] = 0;
          auStack_d70[uVar11 * 0x34] = 0;
          auStack_d70[uVar11 * 0x34 + 1] = 0x7f7fffff;
          aiStack_dd0[uVar11 * 0x34 + 0xe] = 1;
          uVar15 = *(uint *)(lVar5 + 4);
          alStack_df8[uVar11 * 0x1a] = (longlong)plVar17;
          local_e08[uVar11 * 0x34 + 2] = 0x3f800000;
          local_e08[uVar11 * 0x34] = 0x3f800000;
          aiStack_dd0[uVar11 * 0x34 + 0xf] = 2 - (uint)(uVar15 < uVar2);
          uVar18 = uVar18 + 1;
          local_e08[uVar11 * 0x34 + 3] = 0x3f800000;
          local_e08[uVar11 * 0x34 + 1] = 0x3f800000;
          uVar15 = local_e44;
        } while (uVar18 < *(ushort *)(piVar1 + 1));
      }
      uVar18 = 0;
      local_e50 = 0x3f800000;
      local_e58 = (int *)CONCAT44(local_e58._4_4_,0x40800000);
      local_e60 = (int *)CONCAT44(local_e60._4_4_,0xc3480000);
      local_e68 = CONCAT44(local_e68._4_4_,1.0 / param_2);
      local_e48 = uVar16;
      PxCreateContactConstraints(piVar1,1,local_e08,param_1 + 0x270);
      if ((short)piVar1[1] != 0) {
        do {
          uVar11 = (ulonglong)uVar18;
          uVar18 = uVar18 + 1;
          lVar13 = (longlong)*(int *)((&local_e28)[uVar11] + 0x10) * 0x20 +
                   *(longlong *)(param_1 + 0x100);
          *(undefined8 *)(lVar13 + 0x10) = (&uStack_d68)[uVar11 * 0x1a];
          *(uint *)(lVar13 + 0x18) = (uint)abStack_d60[uVar11 * 0xd0];
        } while (uVar18 < *(ushort *)(piVar1 + 1));
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar15);
  }
  return;
}



// FUNCTION 1409568f0 FUN_1409568f0 body=1227 status=ok
// SIG undefined FUN_1409568f0(void)

void FUN_1409568f0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  int iVar16;
  undefined4 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *local_res8;
  int local_res10;
  int local_res18 [2];
  uint local_res20 [2];
  longlong local_78;
  longlong local_68;
  
  iVar16 = (int)param_1[5];
  plVar1 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x15) = 0;
  local_res8 = param_1;
  if (*(int *)((longlong)param_1 + 0xac) != iVar16) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1,iVar16);
  }
  plVar15 = param_1 + 0x16;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (*(int *)((longlong)param_1 + 0xbc) != iVar16) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (plVar15,iVar16);
  }
  plVar2 = param_1 + 0x18;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != iVar16) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,iVar16);
  }
  plVar3 = param_1 + 0x1a;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (*(int *)((longlong)param_1 + 0xdc) != iVar16) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar3,iVar16);
  }
  plVar4 = param_1 + 0x1e;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != iVar16) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar4,iVar16);
  }
  plVar5 = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (*(int *)((longlong)param_1 + 0xec) != iVar16) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar5,iVar16);
  }
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  local_res10 = 0;
  plVar21 = param_1;
  if (0 < iVar16) {
    local_78 = 0;
    local_68 = 0;
    local_res18[0] = 1;
    do {
      iVar10 = local_res18[0];
      lVar18 = plVar21[4];
      piVar11 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                 (plVar21 + 0x3b,local_res20,
                                  *(undefined8 *)(*plVar21 + local_68 * 8));
      if (*piVar11 == -1) {
        puVar17 = *(undefined4 **)(local_78 + lVar18);
        puVar6 = puVar17 + (longlong)*(int *)(local_78 + 8 + lVar18) * 0x12;
        if (puVar17 != puVar6) {
          puVar14 = puVar17 + 6;
          do {
            iVar10 = (int)param_1[0x15];
            *(int *)(param_1 + 0x15) = iVar10 + 1;
            if (*(int *)((longlong)param_1 + 0xac) < iVar10 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
              ResizeGrow(plVar1,iVar10);
            }
            puVar13 = (undefined4 *)((longlong)iVar10 * 0x1c + *plVar1);
            *puVar13 = *puVar17;
            puVar13[1] = puVar14[-5];
            puVar13[2] = puVar14[-4];
            puVar13[3] = puVar14[-3];
            puVar13[4] = puVar14[-2];
            puVar13[5] = puVar14[-1];
            puVar13[6] = *puVar14;
            iVar10 = (int)param_1[0x17];
            *(int *)(param_1 + 0x17) = iVar10 + 1;
            if (*(int *)((longlong)param_1 + 0xbc) < iVar10 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(plVar15,iVar10);
            }
            lVar18 = *plVar15;
            uVar7 = puVar14[2];
            uVar8 = puVar14[3];
            uVar9 = puVar14[4];
            puVar13 = (undefined4 *)(lVar18 + (longlong)iVar10 * 0x14);
            *puVar13 = puVar14[1];
            puVar13[1] = uVar7;
            puVar13[2] = uVar8;
            puVar13[3] = uVar9;
            *(undefined4 *)(lVar18 + 0x10 + (longlong)iVar10 * 0x14) = puVar14[5];
            iVar10 = (int)param_1[0x19];
            *(int *)(param_1 + 0x19) = iVar10 + 1;
            if (*(int *)((longlong)param_1 + 0xcc) < iVar10 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
            }
            *(undefined8 *)(*plVar2 + (longlong)iVar10 * 8) = *(undefined8 *)(puVar14 + 6);
            iVar10 = (int)param_1[0x1b];
            *(int *)(param_1 + 0x1b) = iVar10 + 1;
            if (*(int *)((longlong)param_1 + 0xdc) < iVar10 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3,iVar10);
            }
            *(undefined4 *)(*plVar3 + (longlong)iVar10 * 4) = puVar14[0xb];
            iVar10 = (int)param_1[0x1d];
            lVar18 = (longlong)iVar10;
            *(int *)(param_1 + 0x1d) = iVar10 + 1;
            if (*(int *)((longlong)param_1 + 0xec) < iVar10 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar5,iVar10);
            }
            lVar12 = *plVar5;
            *(undefined4 *)(lVar12 + lVar18 * 0xc) = puVar14[8];
            *(undefined4 *)(lVar12 + 4 + lVar18 * 0xc) = puVar14[9];
            *(undefined4 *)(lVar12 + 8 + lVar18 * 0xc) = puVar14[10];
            iVar10 = (int)param_1[0x1f];
            *(int *)(param_1 + 0x1f) = iVar10 + 1;
            if (*(int *)((longlong)param_1 + 0xfc) < iVar10 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar4,iVar10);
            }
            puVar17 = puVar17 + 0x12;
            puVar14 = puVar14 + 0x12;
            *(int *)(*plVar4 + (longlong)iVar10 * 4) = local_res18[0] + -1;
            local_res10 = local_res10 + 1;
            plVar21 = local_res8;
            iVar10 = local_res18[0];
          } while (puVar17 != puVar6);
        }
      }
      if (iVar10 == (int)plVar21[0x2d]) {
        *(int *)((longlong)plVar21 + 0x174) = local_res10;
      }
      local_68 = local_68 + 1;
      local_res18[0] = iVar10 + 1;
      local_78 = local_78 + 0x10;
    } while (local_68 < iVar16);
  }
  uVar19 = 0;
  plVar1 = plVar21 + 0x46;
  *(undefined4 *)(plVar21 + 0x47) = 0;
  if (*(int *)((longlong)plVar21 + 0x23c) != local_res10) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,local_res10);
  }
  if (*(int *)((longlong)plVar21 + 0x174) != 0) {
    lVar18 = (longlong)local_res10;
    uVar20 = uVar19;
    do {
      iVar16 = *(int *)(*plVar4 + (longlong)(int)uVar19 * 4);
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(plVar21 + 0x31,&local_res8,*(undefined8 *)(*plVar21 + (longlong)iVar16 * 8));
      if ((int)local_res8 == -1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (longlong)(int)local_res8 * 0x60 + plVar21[0x31];
      }
      plVar15 = (longlong *)(lVar12 + 8);
      if (lVar12 == 0) {
        plVar15 = (longlong *)0x0;
      }
      lVar12 = (longlong)(int)(uVar19 + 1);
      uVar19 = uVar19 + 1;
      for (; local_res20[0] = uVar19, lVar12 < lVar18; lVar12 = lVar12 + 1) {
        iVar10 = *(int *)(*plVar4 + lVar12 * 4);
        if (iVar16 == iVar10) {
LAB_140956cf3:
          iVar10 = (int)plVar21[0x47];
          *(int *)(plVar21 + 0x47) = iVar10 + 1;
          if (*(int *)((longlong)plVar21 + 0x23c) < iVar10 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
          }
          *(uint *)(*plVar1 + (longlong)iVar10 * 4) = uVar20;
        }
        else if (plVar15 != (longlong *)0x0) {
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                    (plVar15,local_res18,*(undefined8 *)(*plVar21 + (longlong)iVar10 * 8));
          if ((local_res18[0] != -1) && ((longlong)local_res18[0] * 0x10 + *plVar15 != 0))
          goto LAB_140956cf3;
        }
        uVar20 = uVar20 + 1;
        uVar19 = local_res20[0];
      }
    } while (uVar19 < *(uint *)((longlong)plVar21 + 0x174));
  }
  plVar1 = plVar21 + 0x20;
  iVar16 = 0;
  *(undefined4 *)(plVar21 + 0x21) = 0;
  iVar10 = ((local_res10 + -1) * local_res10) / 2;
  if (*(int *)((longlong)plVar21 + 0x10c) != iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
    iVar16 = (int)plVar21[0x21];
  }
  *(int *)(plVar21 + 0x21) = iVar16 + iVar10;
  if (*(int *)((longlong)plVar21 + 0x10c) < iVar16 + iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar16 * 0x20 + *plVar1),0,(longlong)iVar10 << 5)
  ;
  *(undefined1 *)(plVar21 + 0x45) = 0;
  return;
}



// FUNCTION 140956dc0 PrepareJointData body=669 status=ok
// SIG undefined PrepareJointData(void)

void ImmediatePhysics::PrepareJointData(longlong param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_1 + 0xb4);
  fVar5 = ::_guard_xfg_dispatch_icall_nop(fVar7 * 0.5);
  fVar1 = *(float *)(param_1 + 0xb8);
  *(float *)(param_1 + 0x150) = fVar5;
  fVar6 = ::_guard_xfg_dispatch_icall_nop(fVar1 * 0.5);
  fVar5 = *(float *)(param_1 + 0xb0);
  *(float *)(param_1 + 0x154) = fVar6;
  fVar6 = ::_guard_xfg_dispatch_icall_nop(fVar5 * 0.5);
  *(float *)(param_1 + 0x158) = fVar6;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(fVar7 * 0.25);
  *(float *)(param_1 + 0x15c) = fVar7;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(fVar1 * 0.25);
  *(float *)(param_1 + 0x160) = fVar7;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(fVar5 * 0.25);
  *(float *)(param_1 + 0x164) = fVar7;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x9c) * 0.25);
  *(float *)(param_1 + 0x168) = fVar7;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x98) * 0.25);
  *(float *)(param_1 + 0x16c) = fVar7;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x94) * 0.25);
  uVar2 = 0;
  *(float *)(param_1 + 0x170) = fVar7;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x54) == 1) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    uVar4 = 1;
  }
  else {
    uVar4 = uVar2;
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 1;
      uVar2 = 1;
      uVar4 = 0;
    }
  }
  if (*(int *)(param_1 + 0x58) == 1) {
    uVar4 = uVar4 | 2;
    *(uint *)(param_1 + 0x4c) = uVar4;
  }
  else if (*(int *)(param_1 + 0x58) == 0) {
    uVar2 = uVar2 | 2;
    *(uint *)(param_1 + 0x48) = uVar2;
  }
  if (*(int *)(param_1 + 0x5c) == 1) {
    uVar4 = uVar4 | 4;
    *(uint *)(param_1 + 0x4c) = uVar4;
  }
  else if (*(int *)(param_1 + 0x5c) == 0) {
    uVar2 = uVar2 | 4;
    *(uint *)(param_1 + 0x48) = uVar2;
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    uVar4 = uVar4 | 8;
    *(uint *)(param_1 + 0x4c) = uVar4;
  }
  else if (*(int *)(param_1 + 0x60) == 0) {
    uVar2 = uVar2 | 8;
    *(uint *)(param_1 + 0x48) = uVar2;
  }
  if (*(int *)(param_1 + 100) == 1) {
    uVar4 = uVar4 | 0x10;
    *(uint *)(param_1 + 0x4c) = uVar4;
  }
  else if (*(int *)(param_1 + 100) == 0) {
    uVar2 = uVar2 | 0x10;
    *(uint *)(param_1 + 0x48) = uVar2;
  }
  if (*(int *)(param_1 + 0x68) == 1) {
    *(uint *)(param_1 + 0x4c) = uVar4 | 0x20;
  }
  else if (*(int *)(param_1 + 0x68) == 0) {
    *(uint *)(param_1 + 0x48) = uVar2 | 0x20;
  }
  if ((*(float *)(param_1 + 0xbc) != 0.0) || (*(float *)(param_1 + 0xc0) != 0.0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar3 = 1;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  if (((*(float *)(param_1 + 0xcc) != 0.0) || (*(float *)(param_1 + 0xd0) != 0.0)) &&
     (*(int *)(param_1 + 0x58) != 0)) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 2;
  }
  if (((*(float *)(param_1 + 0xdc) != 0.0) || (*(float *)(param_1 + 0xe0) != 0.0)) &&
     (*(int *)(param_1 + 0x5c) != 0)) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 4;
  }
  if (((*(float *)(param_1 + 0x10c) == 0.0) && (*(float *)(param_1 + 0x110) == 0.0)) ||
     ((*(int *)(param_1 + 100) == 0 ||
      ((*(int *)(param_1 + 0x68) == 0 || (*(int *)(param_1 + 0x60) == 0)))))) {
    if (((*(float *)(param_1 + 0xfc) != 0.0) || (*(float *)(param_1 + 0x100) != 0.0)) &&
       (*(int *)(param_1 + 0x60) != 0)) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x10;
    }
    if (((*(float *)(param_1 + 0xec) != 0.0) || (*(float *)(param_1 + 0xf0) != 0.0)) &&
       ((*(int *)(param_1 + 100) != 0 || (*(int *)(param_1 + 0x68) != 0)))) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 8;
    }
  }
  else {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x20;
  }
  return;
}



// FUNCTION 140957060 Rehash body=635 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar3) goto LAB_14095719f;
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
LAB_14095719f:
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
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x60 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x5c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0xb) =
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



// FUNCTION 1409572e0 Reset body=294 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  uVar3 = 0;
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar4 = (longlong)local_1c * 0x60 + *local_38;
      *(undefined4 *)(lVar4 + 0x50) = 0;
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar4 + 8);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140957410 Reset body=42 status=ok
// SIG undefined Reset(void)

void ImmediatePhysics::FLinearBlockAllocator::Reset(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  uVar2 = 0;
  if (lVar1 != 0) {
    do {
      *(undefined4 *)(lVar1 + 0x10010) = 0;
      lVar1 = *(longlong *)(lVar1 + 0x10000);
    } while (lVar1 != 0);
    uVar2 = param_1[1];
  }
  *param_1 = uVar2;
  return;
}



// FUNCTION 140957460 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSlateDrawElement,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x1e0,0);
  iVar4 = (int)(uVar3 / 0x1e0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1e0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1409574f0 FUN_1409574f0 body=144 status=ok
// SIG undefined FUN_1409574f0(void)

void FUN_1409574f0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar2 < 2) {
    uVar2 = 1;
    goto LAB_140957559;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0x14);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_140957559;
    }
    if (uVar2 == 0) goto LAB_140957559;
  }
  uVar2 = uVar3;
LAB_140957559:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x14) = uVar2;
    FUN_1407eea60(param_1,*(undefined4 *)(param_1 + 0x10),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 140957580 FUN_140957580 body=282 status=ok
// SIG undefined FUN_140957580(void)

void FUN_140957580(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  if (param_2 != *(int *)((longlong)param_1 + 0xc)) {
    iVar7 = *(int *)(param_1 + 1);
    *(int *)((longlong)param_1 + 0xc) = param_2;
    _Src = (void *)*param_1;
    if (param_2 != 0) {
      puStack_30 = local_res10;
      iVar2 = param_2 * 8;
      local_38 = &DAT_14060d670;
      local_res10[0] = 0;
      lVar4 = FUN_1415d8310(&local_38,&DAT_146216a38);
      uVar6 = 8;
      uVar3 = uVar6;
      if (0xf < iVar2) {
        uVar3 = 0x10;
      }
      uVar8 = (ulonglong)uVar3;
      puVar1 = (ulonglong *)(lVar4 + 0x18);
      _Dst = (void *)((uVar8 - 1) + *puVar1 & ~(uVar8 - 1));
      uVar5 = (longlong)iVar2 + (longlong)_Dst;
      if (*(ulonglong *)(lVar4 + 0x20) < uVar5) {
        if (0xf < iVar2) {
          uVar6 = 0x10;
        }
        FMemStackBase::AllocateNewChunk(puVar1,uVar6 + iVar2);
        _Dst = (void *)((uVar8 - 1) + *puVar1 & ~(uVar8 - 1));
        uVar5 = (longlong)iVar2 + (longlong)_Dst;
      }
      *puVar1 = uVar5;
      *param_1 = _Dst;
      if ((_Src != (void *)0x0) && (iVar7 != 0)) {
        if (param_2 <= iVar7) {
          iVar7 = param_2;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(iVar7 << 3));
      }
    }
  }
  return;
}



// FUNCTION 1409576a0 SetIgnoreCollisionActors body=296 status=ok
// SIG undefined SetIgnoreCollisionActors(void)

void ImmediatePhysics::FSimulation::SetIgnoreCollisionActors(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Dst;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  lVar1 = param_1 + 0x1d8;
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1e4)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar1,0);
  }
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  iVar2 = *(int *)(param_1 + 0x200) + 0x1f;
  _Dst = *(void **)(param_1 + 0x1f8);
  if (*(void **)(param_1 + 0x1f8) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x1e8);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x220)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x220);
    do {
      lVar5 = *(longlong *)(param_1 + 0x218);
      if (*(longlong *)(param_1 + 0x218) == 0) {
        lVar5 = param_1 + 0x210;
      }
      uVar4 = (longlong)*(int *)(param_1 + 0x220) - 1U & uVar6;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar5 + uVar4 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x1e0) - *(int *)(param_1 + 0x20c);
  iVar2 = (int)param_2[1];
  if (iVar3 < iVar3 + iVar2) {
    FUN_1405effc0(lVar1);
    iVar2 = (int)param_2[1];
  }
  lVar7 = *param_2;
  lVar5 = lVar7 + (longlong)iVar2 * 8;
  for (; lVar7 != lVar5; lVar7 = lVar7 + 8) {
    FUN_14058c900(lVar1,local_res8,lVar7,0);
  }
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



// FUNCTION 1409577d0 SetIgnoreCollisionPairTable body=302 status=ok
// SIG undefined SetIgnoreCollisionPairTable(void)

void ImmediatePhysics::FSimulation::SetIgnoreCollisionPairTable(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined8 *local_30;
  
  plVar1 = (longlong *)(param_1 + 0x188);
  TSet<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset(plVar1);
  puVar5 = (undefined8 *)*param_2;
  puVar4 = puVar5 + (longlong)(int)param_2[1] * 2;
  if (puVar5 != puVar4) {
    puVar3 = puVar5 + 1;
    do {
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res8,*puVar5);
      if ((local_res8[0] == -1) || (lVar2 = (longlong)local_res8[0] * 0x60 + *plVar1, lVar2 == 0)) {
        local_30 = puVar5;
        FUN_140948630(plVar1,local_res10,&local_30,0);
        lVar2 = (longlong)local_res10[0] * 0x60 + *plVar1;
      }
      FUN_14058c900(lVar2 + 8,local_38,puVar3);
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res18,*puVar3);
      if ((local_res18[0] == -1) || (lVar2 = (longlong)local_res18[0] * 0x60 + *plVar1, lVar2 == 0))
      {
        local_30 = puVar3;
        FUN_140948630(plVar1,local_res20,&local_30,0);
        lVar2 = (longlong)local_res20[0] * 0x60 + *plVar1;
      }
      FUN_14058c900(lVar2 + 8,local_34,puVar5);
      puVar5 = puVar5 + 2;
      puVar3 = puVar3 + 2;
    } while (puVar5 != puVar4);
  }
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



// FUNCTION 140957900 FUN_140957900 body=1475 status=ok
// SIG undefined FUN_140957900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140957900(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar17 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [32];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  
  fVar30 = fRam0000000146863be8;
  fVar29 = fRam0000000146863be4;
  fVar25 = _DAT_146863be0;
  fVar47 = fRam0000000146863b68;
  fVar46 = fRam0000000146863b64;
  fVar45 = _DAT_146863b60;
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  auVar1 = *(undefined1 (*) [16])(param_1 + 8);
  fVar2 = auVar1._0_4_;
  fVar4 = auVar1._4_4_;
  fVar6 = auVar1._8_4_;
  auVar13 = *(undefined1 (*) [16])(param_2 + 8);
  fVar3 = auVar13._0_4_;
  fVar5 = auVar13._4_4_;
  fVar7 = auVar13._8_4_;
  fVar8 = auVar13._12_4_;
  puVar12 = (undefined4 *)
            ((longlong)(int)param_1[0xe] * 0x20 + *(longlong *)(*(longlong *)(param_1 + 0xc) + 0x70)
            );
  auVar13 = minps(auVar1,auVar13);
  auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146863be4);
  auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146863be0);
  auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146863be8);
  auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146863bec);
  iVar10 = movmskps((int)*(longlong *)(param_1 + 0xc),auVar14);
  if (iVar10 == 0) {
    fVar45 = *param_2;
    fVar46 = param_2[1];
    fVar47 = param_2[2];
    fVar25 = param_2[3];
    fVar29 = *param_1;
    fVar30 = param_1[1];
    fVar19 = param_1[2];
    fVar22 = param_1[3];
    fVar27 = param_1[4] * fVar3;
    fVar15 = param_1[5] * fVar5;
    fVar31 = param_1[6] * fVar7;
    fVar32 = param_1[7] * fVar8;
    local_e8 = fVar22 * fVar45 * _DAT_146863ba0 + fVar25 * fVar29 + fVar46 * fVar19 * _DAT_146863b90
               + fVar47 * fVar30 * _DAT_146863b80;
    fStack_e4 = fVar19 * fVar45 * fRam0000000146863ba4 + fVar25 * fVar30 +
                fVar46 * fVar22 * fRam0000000146863b94 + fVar47 * fVar29 * fRam0000000146863b84;
    fStack_e0 = fVar30 * fVar45 * fRam0000000146863ba8 + fVar25 * fVar19 +
                fVar46 * fVar29 * fRam0000000146863b98 + fVar47 * fVar22 * fRam0000000146863b88;
    fStack_dc = fVar29 * fVar45 * fRam0000000146863bac + fVar25 * fVar22 +
                fVar46 * fVar30 * fRam0000000146863b9c + fVar47 * fVar19 * fRam0000000146863b8c;
    fVar29 = fVar31 * fVar46 - fVar15 * fVar47;
    fVar30 = fVar27 * fVar47 - fVar31 * fVar45;
    fVar19 = fVar15 * fVar45 - fVar27 * fVar46;
    fVar22 = fVar32 * fVar25 - fVar32 * fVar25;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    fVar19 = fVar19 + fVar19;
    fVar22 = fVar22 + fVar22;
    local_d8._4_4_ = (fVar29 * fVar47 - fVar19 * fVar45) + fVar25 * fVar30 + fVar15 + param_2[5];
    local_d8._0_4_ = (fVar19 * fVar46 - fVar30 * fVar47) + fVar25 * fVar29 + fVar27 + param_2[4];
    fStack_d0 = (fVar30 * fVar45 - fVar29 * fVar46) + fVar25 * fVar19 + fVar31 + param_2[6];
    fStack_cc = (fVar22 * fVar25 - fVar22 * fVar25) + fVar25 * fVar22 + fVar32 + param_2[7];
  }
  else {
    fVar19 = *param_2;
    fVar22 = param_2[1];
    fVar27 = param_2[2];
    fVar15 = param_2[3];
    fVar18 = fVar22 + fVar22;
    fVar21 = fVar27 + fVar27;
    fVar31 = param_2[4];
    fVar32 = param_2[5];
    fVar9 = param_2[6];
    fVar28 = fVar19 * (fVar19 + fVar19);
    fVar26 = fVar15 * (fVar19 + fVar19);
    fVar16 = *param_1;
    fVar23 = param_1[1];
    fVar20 = param_1[2];
    fVar24 = param_1[3];
    fVar42 = (fVar15 * fVar21 + fVar18 * fVar19) * fVar3;
    fVar43 = (fVar26 + fVar21 * fVar22) * fVar5;
    fVar44 = (fVar15 * fVar18 + fVar21 * fVar19) * fVar7;
    fVar33 = fVar5 * (fVar18 * fVar19 - fVar15 * fVar21);
    fVar35 = fVar7 * (fVar21 * fVar22 - fVar26);
    fVar37 = fVar3 * (fVar21 * fVar19 - fVar15 * fVar18);
    fVar15 = (float)((uint)((_DAT_146863b60 - (fVar27 * fVar21 + fVar22 * fVar18)) * fVar3) &
                    _DAT_146863b70);
    fVar21 = (float)((uint)((fRam0000000146863b64 - (fVar27 * fVar21 + fVar28)) * fVar5) &
                    uRam0000000146863b74);
    fVar18 = (float)((uint)((fRam0000000146863b68 - (fVar22 * fVar18 + fVar28)) * fVar7) &
                    uRam0000000146863b78);
    fVar26 = (float)((uint)((fRam0000000146863b6c - (fVar28 + fVar28)) * fVar8) &
                    uRam0000000146863b7c);
    fVar19 = fVar23 + fVar23;
    fVar22 = fVar20 + fVar20;
    fVar28 = fVar16 * (fVar16 + fVar16);
    fVar27 = fVar24 * (fVar16 + fVar16);
    fVar39 = (fVar24 * fVar22 + fVar16 * fVar19) * fVar2;
    fVar40 = (fVar27 + fVar23 * fVar22) * fVar4;
    fVar41 = (fVar24 * fVar19 + fVar16 * fVar22) * fVar6;
    fVar34 = fVar4 * (fVar16 * fVar19 - fVar24 * fVar22);
    fVar36 = fVar6 * (fVar23 * fVar22 - fVar27);
    fVar38 = fVar2 * (fVar16 * fVar22 - fVar24 * fVar19);
    fVar16 = (float)((uint)((_DAT_146863b60 - (fVar20 * fVar22 + fVar23 * fVar19)) * fVar2) &
                    _DAT_146863b70);
    fVar20 = (float)((uint)((fRam0000000146863b64 - (fVar20 * fVar22 + fVar28)) * fVar4) &
                    uRam0000000146863b74);
    fVar23 = (float)((uint)((fRam0000000146863b68 - (fVar23 * fVar19 + fVar28)) * fVar6) &
                    uRam0000000146863b78);
    fVar24 = (float)((uint)((fRam0000000146863b6c - (fVar28 + fVar28)) * auVar1._12_4_) &
                    uRam0000000146863b7c);
    fVar19 = param_1[4];
    fVar22 = param_1[5];
    fVar27 = param_1[6];
    local_158 = fVar39 * fVar33 + fVar16 * fVar15 + fVar38 * fVar44 + fVar24 * fVar31;
    fStack_154 = fVar39 * fVar21 + fVar16 * fVar42 + fVar38 * fVar35 + fVar24 * fVar32;
    fStack_150 = fVar39 * fVar43 + fVar16 * fVar37 + fVar38 * fVar18 + fVar24 * fVar9;
    fStack_14c = fVar39 * fVar26 + fVar16 * fVar26 + fVar38 * fVar26 + fVar24 * fRam0000000146863b6c
    ;
    local_148 = fVar20 * fVar33 + fVar34 * fVar15 + fVar40 * fVar44 + fVar24 * fVar31;
    fStack_144 = fVar20 * fVar21 + fVar34 * fVar42 + fVar40 * fVar35 + fVar24 * fVar32;
    fStack_140 = fVar20 * fVar43 + fVar34 * fVar37 + fVar40 * fVar18 + fVar24 * fVar9;
    fStack_13c = fVar20 * fVar26 + fVar34 * fVar26 + fVar40 * fVar26 + fVar24 * fRam0000000146863b6c
    ;
    local_138 = fVar36 * fVar33 + fVar41 * fVar15 + fVar23 * fVar44 + fVar24 * fVar31;
    fStack_134 = fVar36 * fVar21 + fVar41 * fVar42 + fVar23 * fVar35 + fVar24 * fVar32;
    fStack_130 = fVar36 * fVar43 + fVar41 * fVar37 + fVar23 * fVar18 + fVar24 * fVar9;
    fStack_12c = fVar36 * fVar26 + fVar41 * fVar26 + fVar23 * fVar26 + fVar24 * fRam0000000146863b6c
    ;
    local_128 = fVar22 * fVar33 + fVar19 * fVar15 + fVar27 * fVar44 + fRam0000000146863b6c * fVar31;
    fStack_124 = fVar22 * fVar21 + fVar19 * fVar42 + fVar27 * fVar35 + fRam0000000146863b6c * fVar32
    ;
    fStack_120 = fVar22 * fVar43 + fVar19 * fVar37 + fVar27 * fVar18 + fRam0000000146863b6c * fVar9;
    fStack_11c = fVar22 * fVar26 + fVar19 * fVar26 + fVar27 * fVar26 +
                 fRam0000000146863b6c * fRam0000000146863b6c;
    FMatrix::RemoveScaling(&local_158);
    fVar45 = (float)(-(uint)(fVar25 <= fVar3 * fVar2) & (_DAT_146863bd0 ^ (uint)fVar45) ^
                    _DAT_146863bd0);
    fVar46 = (float)(-(uint)(fVar29 <= fVar5 * fVar4) & (uRam0000000146863bd4 ^ (uint)fVar46) ^
                    uRam0000000146863bd4);
    fVar47 = (float)(-(uint)(fVar30 <= fVar7 * fVar6) & (uRam0000000146863bd8 ^ (uint)fVar47) ^
                    uRam0000000146863bd8);
    local_158 = local_158 * fVar45;
    fStack_154 = fStack_154 * fVar45;
    fStack_150 = fStack_150 * fVar45;
    fStack_144 = fStack_144 * fVar46;
    fStack_140 = fStack_140 * fVar46;
    local_148 = local_148 * fVar46;
    fStack_134 = fStack_134 * fVar47;
    fStack_130 = fStack_130 * fVar47;
    local_138 = local_138 * fVar47;
    FQuat::FQuat(&local_118,&local_158);
    local_168 = 0x322bcc77;
    auVar17._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
    auVar17._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
    auVar17._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
    auVar17._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
    fVar29 = auVar17._4_4_ + auVar17._0_4_;
    fVar30 = auVar17._8_4_ + auVar17._4_4_;
    fVar19 = auVar17._12_4_ + auVar17._8_4_;
    fVar22 = auVar17._0_4_ + auVar17._12_4_;
    auVar13._4_4_ = fVar30;
    auVar13._0_4_ = fVar29;
    auVar13._8_4_ = fVar19;
    auVar13._12_4_ = fVar22;
    auVar13 = rsqrtps(auVar17,auVar13);
    fVar45 = auVar13._0_4_;
    fVar46 = auVar13._4_4_;
    fVar47 = auVar13._8_4_;
    fVar25 = auVar13._12_4_;
    fVar45 = (_DAT_146863bc0 - fVar45 * fVar45 * fVar29 * _DAT_146863bc0) * fVar45 + fVar45;
    fVar46 = (fRam0000000146863bc4 - fVar46 * fVar46 * fVar30 * fRam0000000146863bc4) * fVar46 +
             fVar46;
    fVar47 = (fRam0000000146863bc8 - fVar47 * fVar47 * fVar19 * fRam0000000146863bc8) * fVar47 +
             fVar47;
    fVar25 = (fRam0000000146863bcc - fVar25 * fVar25 * fVar22 * fRam0000000146863bcc) * fVar25 +
             fVar25;
    local_d8._4_4_ = fStack_124;
    local_d8._0_4_ = local_128;
    fStack_d0 = fStack_120;
    local_e8 = (float)(((uint)(((_DAT_146863bc0 - fVar45 * fVar45 * fVar29 * _DAT_146863bc0) *
                                fVar45 + fVar45) * local_118) ^ _DAT_146863bb0) &
                       -(uint)(1e-08 <= fVar29) ^ _DAT_146863bb0);
    fStack_e4 = (float)(((uint)(((fRam0000000146863bc4 -
                                 fVar46 * fVar46 * fVar30 * fRam0000000146863bc4) * fVar46 + fVar46)
                               * fStack_114) ^ uRam0000000146863bb4) & -(uint)(1e-08 <= fVar30) ^
                       uRam0000000146863bb4);
    fStack_e0 = (float)(((uint)(((fRam0000000146863bc8 -
                                 fVar47 * fVar47 * fVar19 * fRam0000000146863bc8) * fVar47 + fVar47)
                               * fStack_110) ^ uRam0000000146863bb8) & -(uint)(1e-08 <= fVar19) ^
                       uRam0000000146863bb8);
    fStack_dc = (float)(((uint)(((fRam0000000146863bcc -
                                 fVar25 * fVar25 * fVar22 * fRam0000000146863bcc) * fVar25 + fVar25)
                               * fStack_10c) ^ uRam0000000146863bbc) & -(uint)(1e-08 <= fVar22) ^
                       uRam0000000146863bbc);
    fStack_cc = 0.0;
  }
  fStack_bc = fVar8 * auVar1._12_4_;
  fStack_c0 = fVar7 * fVar6;
  fStack_c4 = fVar5 * fVar4;
  local_c8 = fVar3 * fVar2;
  puVar11 = (undefined4 *)U2PTransform(local_108,&local_e8);
  *puVar12 = *puVar11;
  puVar12[1] = puVar11[1];
  puVar12[2] = puVar11[2];
  puVar12[3] = puVar11[3];
  puVar12[4] = puVar11[4];
  puVar12[5] = puVar11[5];
  puVar12[6] = puVar11[6];
  *(undefined1 *)(puVar12 + 7) = 1;
  return;
}



// FUNCTION 140957ed0 FUN_140957ed0 body=1487 status=ok
// SIG undefined FUN_140957ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140957ed0(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [32];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  
  fVar28 = fRam0000000146863be8;
  fVar26 = fRam0000000146863be4;
  fVar21 = _DAT_146863be0;
  fVar47 = fRam0000000146863b68;
  fVar46 = fRam0000000146863b64;
  fVar45 = _DAT_146863b60;
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  auVar1 = *(undefined1 (*) [16])(param_1 + 8);
  fVar2 = auVar1._0_4_;
  fVar4 = auVar1._4_4_;
  fVar6 = auVar1._8_4_;
  auVar13 = *(undefined1 (*) [16])(param_2 + 8);
  fVar3 = auVar13._0_4_;
  fVar5 = auVar13._4_4_;
  fVar7 = auVar13._8_4_;
  fVar8 = auVar13._12_4_;
  auVar13 = minps(auVar1,auVar13);
  auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146863be4);
  auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146863be0);
  auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146863be8);
  auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146863bec);
  iVar10 = movmskps((int)local_b8,auVar14);
  if (iVar10 == 0) {
    fVar45 = *param_2;
    fVar46 = param_2[1];
    fVar47 = param_2[2];
    fVar21 = param_2[3];
    fVar26 = *param_1;
    fVar28 = param_1[1];
    fVar29 = param_1[2];
    fVar31 = param_1[3];
    fVar27 = param_1[4] * fVar3;
    fVar15 = param_1[5] * fVar5;
    fVar30 = param_1[6] * fVar7;
    fVar32 = param_1[7] * fVar8;
    local_e8 = fVar31 * fVar45 * _DAT_146863ba0 + fVar21 * fVar26 + fVar46 * fVar29 * _DAT_146863b90
               + fVar47 * fVar28 * _DAT_146863b80;
    fStack_e4 = fVar29 * fVar45 * fRam0000000146863ba4 + fVar21 * fVar28 +
                fVar46 * fVar31 * fRam0000000146863b94 + fVar47 * fVar26 * fRam0000000146863b84;
    fStack_e0 = fVar28 * fVar45 * fRam0000000146863ba8 + fVar21 * fVar29 +
                fVar46 * fVar26 * fRam0000000146863b98 + fVar47 * fVar31 * fRam0000000146863b88;
    fStack_dc = fVar26 * fVar45 * fRam0000000146863bac + fVar21 * fVar31 +
                fVar46 * fVar28 * fRam0000000146863b9c + fVar47 * fVar29 * fRam0000000146863b8c;
    fVar26 = fVar30 * fVar46 - fVar15 * fVar47;
    fVar28 = fVar27 * fVar47 - fVar30 * fVar45;
    fVar29 = fVar15 * fVar45 - fVar27 * fVar46;
    fVar31 = fVar32 * fVar21 - fVar32 * fVar21;
    fVar26 = fVar26 + fVar26;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    fVar31 = fVar31 + fVar31;
    local_d8._4_4_ = (fVar26 * fVar47 - fVar29 * fVar45) + fVar21 * fVar28 + fVar15 + param_2[5];
    local_d8._0_4_ = (fVar29 * fVar46 - fVar28 * fVar47) + fVar21 * fVar26 + fVar27 + param_2[4];
    fStack_d0 = (fVar28 * fVar45 - fVar26 * fVar46) + fVar21 * fVar29 + fVar30 + param_2[6];
    fStack_cc = (fVar31 * fVar21 - fVar31 * fVar21) + fVar21 * fVar31 + fVar32 + param_2[7];
  }
  else {
    fVar29 = *param_2;
    fVar31 = param_2[1];
    fVar27 = param_2[2];
    fVar15 = param_2[3];
    fVar17 = fVar31 + fVar31;
    fVar18 = fVar27 + fVar27;
    fVar30 = param_2[4];
    fVar32 = param_2[5];
    fVar9 = param_2[6];
    fVar24 = fVar29 * (fVar29 + fVar29);
    fVar22 = fVar15 * (fVar29 + fVar29);
    fVar42 = (fVar15 * fVar18 + fVar29 * fVar17) * fVar3;
    fVar43 = (fVar22 + fVar31 * fVar18) * fVar5;
    fVar44 = (fVar15 * fVar17 + fVar29 * fVar18) * fVar7;
    fVar33 = fVar5 * (fVar29 * fVar17 - fVar15 * fVar18);
    fVar35 = fVar7 * (fVar31 * fVar18 - fVar22);
    fVar37 = fVar3 * (fVar29 * fVar18 - fVar15 * fVar17);
    fVar22 = (float)((uint)((_DAT_146863b60 - (fVar27 * fVar18 + fVar31 * fVar17)) * fVar3) &
                    _DAT_146863b70);
    fVar18 = (float)((uint)((fRam0000000146863b64 - (fVar27 * fVar18 + fVar24)) * fVar5) &
                    uRam0000000146863b74);
    fVar19 = (float)((uint)((fRam0000000146863b68 - (fVar31 * fVar17 + fVar24)) * fVar7) &
                    uRam0000000146863b78);
    fVar20 = (float)((uint)((fRam0000000146863b6c - (fVar24 + fVar24)) * fVar8) &
                    uRam0000000146863b7c);
    fVar29 = *param_1;
    fVar31 = param_1[1];
    fVar27 = param_1[2];
    fVar15 = param_1[3];
    fVar24 = fVar31 + fVar31;
    fVar23 = fVar27 + fVar27;
    fVar25 = (fVar29 + fVar29) * fVar29;
    fVar17 = (fVar29 + fVar29) * fVar15;
    fVar39 = (fVar23 * fVar15 + fVar24 * fVar29) * fVar2;
    fVar40 = (fVar17 + fVar23 * fVar31) * fVar4;
    fVar41 = (fVar24 * fVar15 + fVar23 * fVar29) * fVar6;
    fVar34 = fVar4 * (fVar24 * fVar29 - fVar23 * fVar15);
    fVar36 = fVar6 * (fVar23 * fVar31 - fVar17);
    fVar38 = fVar2 * (fVar23 * fVar29 - fVar24 * fVar15);
    fVar15 = (float)((uint)((_DAT_146863b60 - (fVar23 * fVar27 + fVar24 * fVar31)) * fVar2) &
                    _DAT_146863b70);
    fVar17 = (float)((uint)((fRam0000000146863b64 - (fVar23 * fVar27 + fVar25)) * fVar4) &
                    uRam0000000146863b74);
    fVar24 = (float)((uint)((fRam0000000146863b68 - (fVar24 * fVar31 + fVar25)) * fVar6) &
                    uRam0000000146863b78);
    fVar23 = (float)((uint)((fRam0000000146863b6c - (fVar25 + fVar25)) * auVar1._12_4_) &
                    uRam0000000146863b7c);
    fVar29 = param_1[4];
    fVar31 = param_1[5];
    fVar27 = param_1[6];
    local_158 = fVar39 * fVar33 + fVar15 * fVar22 + fVar38 * fVar44 + fVar23 * fVar30;
    fStack_154 = fVar39 * fVar18 + fVar15 * fVar42 + fVar38 * fVar35 + fVar23 * fVar32;
    fStack_150 = fVar39 * fVar43 + fVar15 * fVar37 + fVar38 * fVar19 + fVar23 * fVar9;
    fStack_14c = fVar39 * fVar20 + fVar15 * fVar20 + fVar38 * fVar20 + fVar23 * fRam0000000146863b6c
    ;
    local_148 = fVar17 * fVar33 + fVar34 * fVar22 + fVar40 * fVar44 + fVar23 * fVar30;
    fStack_144 = fVar17 * fVar18 + fVar34 * fVar42 + fVar40 * fVar35 + fVar23 * fVar32;
    fStack_140 = fVar17 * fVar43 + fVar34 * fVar37 + fVar40 * fVar19 + fVar23 * fVar9;
    fStack_13c = fVar17 * fVar20 + fVar34 * fVar20 + fVar40 * fVar20 + fVar23 * fRam0000000146863b6c
    ;
    local_138 = fVar36 * fVar33 + fVar41 * fVar22 + fVar24 * fVar44 + fVar23 * fVar30;
    fStack_134 = fVar36 * fVar18 + fVar41 * fVar42 + fVar24 * fVar35 + fVar23 * fVar32;
    fStack_130 = fVar36 * fVar43 + fVar41 * fVar37 + fVar24 * fVar19 + fVar23 * fVar9;
    fStack_12c = fVar36 * fVar20 + fVar41 * fVar20 + fVar24 * fVar20 + fVar23 * fRam0000000146863b6c
    ;
    local_128 = fVar31 * fVar33 + fVar29 * fVar22 + fVar27 * fVar44 + fRam0000000146863b6c * fVar30;
    fStack_124 = fVar31 * fVar18 + fVar29 * fVar42 + fVar27 * fVar35 + fRam0000000146863b6c * fVar32
    ;
    fStack_120 = fVar31 * fVar43 + fVar29 * fVar37 + fVar27 * fVar19 + fRam0000000146863b6c * fVar9;
    fStack_11c = fVar31 * fVar20 + fVar29 * fVar20 + fVar27 * fVar20 +
                 fRam0000000146863b6c * fRam0000000146863b6c;
    FMatrix::RemoveScaling(&local_158);
    fVar45 = (float)(-(uint)(fVar21 <= fVar3 * fVar2) & (_DAT_146863bd0 ^ (uint)fVar45) ^
                    _DAT_146863bd0);
    fVar46 = (float)(-(uint)(fVar26 <= fVar5 * fVar4) & (uRam0000000146863bd4 ^ (uint)fVar46) ^
                    uRam0000000146863bd4);
    fVar47 = (float)(-(uint)(fVar28 <= fVar7 * fVar6) & (uRam0000000146863bd8 ^ (uint)fVar47) ^
                    uRam0000000146863bd8);
    local_158 = local_158 * fVar45;
    fStack_154 = fStack_154 * fVar45;
    fStack_150 = fStack_150 * fVar45;
    fStack_144 = fStack_144 * fVar46;
    fStack_140 = fStack_140 * fVar46;
    local_148 = local_148 * fVar46;
    fStack_134 = fStack_134 * fVar47;
    fStack_130 = fStack_130 * fVar47;
    local_138 = local_138 * fVar47;
    FQuat::FQuat(&local_118,&local_158);
    local_168 = 0x322bcc77;
    auVar16._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
    auVar16._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
    auVar16._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
    auVar16._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
    fVar26 = auVar16._4_4_ + auVar16._0_4_;
    fVar28 = auVar16._8_4_ + auVar16._4_4_;
    fVar29 = auVar16._12_4_ + auVar16._8_4_;
    fVar31 = auVar16._0_4_ + auVar16._12_4_;
    auVar13._4_4_ = fVar28;
    auVar13._0_4_ = fVar26;
    auVar13._8_4_ = fVar29;
    auVar13._12_4_ = fVar31;
    auVar13 = rsqrtps(auVar16,auVar13);
    fVar45 = auVar13._0_4_;
    fVar46 = auVar13._4_4_;
    fVar47 = auVar13._8_4_;
    fVar21 = auVar13._12_4_;
    fVar45 = (_DAT_146863bc0 - fVar45 * fVar45 * fVar26 * _DAT_146863bc0) * fVar45 + fVar45;
    fVar46 = (fRam0000000146863bc4 - fVar46 * fVar46 * fVar28 * fRam0000000146863bc4) * fVar46 +
             fVar46;
    fVar47 = (fRam0000000146863bc8 - fVar47 * fVar47 * fVar29 * fRam0000000146863bc8) * fVar47 +
             fVar47;
    fVar21 = (fRam0000000146863bcc - fVar21 * fVar21 * fVar31 * fRam0000000146863bcc) * fVar21 +
             fVar21;
    local_d8._4_4_ = fStack_124;
    local_d8._0_4_ = local_128;
    fStack_d0 = fStack_120;
    local_e8 = (float)(((uint)(((_DAT_146863bc0 - fVar45 * fVar45 * fVar26 * _DAT_146863bc0) *
                                fVar45 + fVar45) * local_118) ^ _DAT_146863bb0) &
                       -(uint)(1e-08 <= fVar26) ^ _DAT_146863bb0);
    fStack_e4 = (float)(((uint)(((fRam0000000146863bc4 -
                                 fVar46 * fVar46 * fVar28 * fRam0000000146863bc4) * fVar46 + fVar46)
                               * fStack_114) ^ uRam0000000146863bb4) & -(uint)(1e-08 <= fVar28) ^
                       uRam0000000146863bb4);
    fStack_e0 = (float)(((uint)(((fRam0000000146863bc8 -
                                 fVar47 * fVar47 * fVar29 * fRam0000000146863bc8) * fVar47 + fVar47)
                               * fStack_110) ^ uRam0000000146863bb8) & -(uint)(1e-08 <= fVar29) ^
                       uRam0000000146863bb8);
    fStack_dc = (float)(((uint)(((fRam0000000146863bcc -
                                 fVar21 * fVar21 * fVar31 * fRam0000000146863bcc) * fVar21 + fVar21)
                               * fStack_10c) ^ uRam0000000146863bbc) & -(uint)(1e-08 <= fVar31) ^
                       uRam0000000146863bbc);
    fStack_cc = 0.0;
  }
  fStack_bc = fVar8 * auVar1._12_4_;
  fStack_c0 = fVar7 * fVar6;
  fStack_c4 = fVar5 * fVar4;
  local_c8 = fVar3 * fVar2;
  lVar12 = (longlong)(int)param_1[0xe] * 0x60 + *(longlong *)(*(longlong *)(param_1 + 0xc) + 0x50);
  puVar11 = (undefined4 *)U2PTransform(local_108,&local_e8);
  *(undefined4 *)(lVar12 + 0x30) = *puVar11;
  *(undefined4 *)(lVar12 + 0x34) = puVar11[1];
  *(undefined4 *)(lVar12 + 0x38) = puVar11[2];
  *(undefined4 *)(lVar12 + 0x3c) = puVar11[3];
  *(undefined4 *)(lVar12 + 0x40) = puVar11[4];
  *(undefined4 *)(lVar12 + 0x44) = puVar11[5];
  *(undefined4 *)(lVar12 + 0x48) = puVar11[6];
  return;
}



// FUNCTION 1409584a0 Simulate_AssumesLocked body=165 status=ok
// SIG undefined Simulate_AssumesLocked(void)

void ImmediatePhysics::FSimulation::Simulate_AssumesLocked(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (0.033 <= param_2) {
    param_2 = 0.033;
  }
  if (0.0 < param_2) {
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
    ConstructSolverBodies(0,param_2);
    if (*(char *)(param_1 + 0x228) != '\0') {
      FUN_1409568f0(param_1);
    }
    GenerateContacts(param_1);
    BatchConstraints(param_1);
    PrepareConstraints(param_1,param_2);
    SolveAndIntegrate(param_1,param_2);
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar2 = 0;
    if (lVar1 != 0) {
      do {
        *(undefined4 *)(lVar1 + 0x10010) = 0;
        lVar1 = *(longlong *)(lVar1 + 0x10000);
      } while (lVar1 != 0);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
    }
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  return;
}



// FUNCTION 140958550 SolveAndIntegrate body=1111 status=ok
// SIG undefined SolveAndIntegrate(void)

void ImmediatePhysics::FSimulation::SolveAndIntegrate(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar1 = FLinearBlockAllocator::Alloc(param_1 + 0x40,*(int *)(param_1 + 0x16c) * 0x18);
  lVar4 = lVar1 + (ulonglong)*(uint *)(param_1 + 0x16c) * 0xc;
  PxSolveConstraints(*(undefined8 *)(param_1 + 0x128),
                     *(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c),
                     *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x110),lVar1,lVar4,
                     *(uint *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x178),
                     *(undefined4 *)(param_1 + 0x17c));
  PxIntegrateSolverBodies
            (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x110),lVar1,lVar4,
             *(undefined4 *)(param_1 + 0x16c),param_2);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x60);
      lVar1 = *(longlong *)(param_1 + 0x50);
      lVar2 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      lVar6 = lVar2 * 0x70;
      lVar2 = lVar2 * 0x60;
      *(undefined4 *)(lVar2 + lVar1) = *(undefined4 *)(lVar6 + lVar4);
      *(undefined4 *)(lVar2 + 4 + lVar1) = *(undefined4 *)(lVar6 + 4 + lVar4);
      *(undefined4 *)(lVar2 + 8 + lVar1) = *(undefined4 *)(lVar6 + 8 + lVar4);
      lVar4 = *(longlong *)(param_1 + 0x60);
      lVar1 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(lVar2 + 0x10 + lVar1) = *(undefined4 *)(lVar4 + 0x10 + lVar6);
      *(undefined4 *)(lVar2 + 0x14 + lVar1) = *(undefined4 *)(lVar4 + 0x14 + lVar6);
      *(undefined4 *)(lVar2 + 0x18 + lVar1) = *(undefined4 *)(lVar4 + 0x18 + lVar6);
      lVar4 = *(longlong *)(param_1 + 0x60);
      lVar1 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(lVar2 + 0x30 + lVar1) = *(undefined4 *)(lVar4 + 0x50 + lVar6);
      *(undefined4 *)(lVar2 + 0x34 + lVar1) = *(undefined4 *)(lVar4 + 0x54 + lVar6);
      *(undefined4 *)(lVar2 + 0x38 + lVar1) = *(undefined4 *)(lVar4 + 0x58 + lVar6);
      *(undefined4 *)(lVar2 + 0x3c + lVar1) = *(undefined4 *)(lVar4 + 0x5c + lVar6);
      *(undefined4 *)(lVar2 + 0x40 + lVar1) = *(undefined4 *)(lVar4 + 0x60 + lVar6);
      *(undefined4 *)(lVar2 + 0x44 + lVar1) = *(undefined4 *)(lVar4 + 100 + lVar6);
      *(undefined4 *)(lVar2 + 0x48 + lVar1) = *(undefined4 *)(lVar4 + 0x68 + lVar6);
    } while (uVar7 < *(uint *)(param_1 + 0x16c));
  }
  uVar7 = *(uint *)(param_1 + 0x28);
  uVar5 = *(uint *)(param_1 + 0x168);
  if (uVar5 < uVar7) {
    if (3 < uVar7 - uVar5) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x70);
        lVar2 = (longlong)(int)uVar5;
        lVar1 = lVar2 * 0x20;
        if (*(char *)(lVar1 + 0x1c + lVar4) != '\0') {
          lVar6 = *(longlong *)(param_1 + 0x50);
          lVar3 = lVar2 * 0x60;
          *(undefined4 *)(lVar3 + 0x30 + lVar6) = *(undefined4 *)(lVar1 + lVar4);
          *(undefined4 *)(lVar3 + 0x34 + lVar6) = *(undefined4 *)(lVar1 + 4 + lVar4);
          *(undefined4 *)(lVar3 + 0x38 + lVar6) = *(undefined4 *)(lVar1 + 8 + lVar4);
          *(undefined4 *)(lVar3 + 0x3c + lVar6) = *(undefined4 *)(lVar1 + 0xc + lVar4);
          *(undefined4 *)(lVar3 + 0x40 + lVar6) = *(undefined4 *)(lVar1 + 0x10 + lVar4);
          *(undefined4 *)(lVar3 + 0x44 + lVar6) = *(undefined4 *)(lVar1 + 0x14 + lVar4);
          *(undefined4 *)(lVar3 + 0x48 + lVar6) = *(undefined4 *)(lVar1 + 0x18 + lVar4);
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(lVar3 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 8 + lVar4) = 0;
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
          lVar4 = *(longlong *)(param_1 + 0x70);
        }
        lVar1 = (lVar2 + 1) * 0x20;
        if (*(char *)(lVar1 + 0x1c + lVar4) != '\0') {
          lVar6 = *(longlong *)(param_1 + 0x50);
          lVar3 = (lVar2 + 1) * 0x60;
          *(undefined4 *)(lVar3 + 0x30 + lVar6) = *(undefined4 *)(lVar1 + lVar4);
          *(undefined4 *)(lVar3 + 0x34 + lVar6) = *(undefined4 *)(lVar1 + 4 + lVar4);
          *(undefined4 *)(lVar3 + 0x38 + lVar6) = *(undefined4 *)(lVar1 + 8 + lVar4);
          *(undefined4 *)(lVar3 + 0x3c + lVar6) = *(undefined4 *)(lVar1 + 0xc + lVar4);
          *(undefined4 *)(lVar3 + 0x40 + lVar6) = *(undefined4 *)(lVar1 + 0x10 + lVar4);
          *(undefined4 *)(lVar3 + 0x44 + lVar6) = *(undefined4 *)(lVar1 + 0x14 + lVar4);
          *(undefined4 *)(lVar3 + 0x48 + lVar6) = *(undefined4 *)(lVar1 + 0x18 + lVar4);
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(lVar3 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 8 + lVar4) = 0;
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
          lVar4 = *(longlong *)(param_1 + 0x70);
        }
        lVar1 = (lVar2 + 2) * 0x20;
        if (*(char *)(lVar1 + 0x1c + lVar4) != '\0') {
          lVar6 = *(longlong *)(param_1 + 0x50);
          lVar3 = (lVar2 + 2) * 0x60;
          *(undefined4 *)(lVar3 + 0x30 + lVar6) = *(undefined4 *)(lVar1 + lVar4);
          *(undefined4 *)(lVar3 + 0x34 + lVar6) = *(undefined4 *)(lVar1 + 4 + lVar4);
          *(undefined4 *)(lVar3 + 0x38 + lVar6) = *(undefined4 *)(lVar1 + 8 + lVar4);
          *(undefined4 *)(lVar3 + 0x3c + lVar6) = *(undefined4 *)(lVar1 + 0xc + lVar4);
          *(undefined4 *)(lVar3 + 0x40 + lVar6) = *(undefined4 *)(lVar1 + 0x10 + lVar4);
          *(undefined4 *)(lVar3 + 0x44 + lVar6) = *(undefined4 *)(lVar1 + 0x14 + lVar4);
          *(undefined4 *)(lVar3 + 0x48 + lVar6) = *(undefined4 *)(lVar1 + 0x18 + lVar4);
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(lVar3 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 8 + lVar4) = 0;
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
          lVar4 = *(longlong *)(param_1 + 0x70);
        }
        lVar1 = (lVar2 + 3) * 0x20;
        if (*(char *)(lVar1 + 0x1c + lVar4) != '\0') {
          lVar6 = *(longlong *)(param_1 + 0x50);
          lVar2 = (lVar2 + 3) * 0x60;
          *(undefined4 *)(lVar2 + 0x30 + lVar6) = *(undefined4 *)(lVar1 + lVar4);
          *(undefined4 *)(lVar2 + 0x34 + lVar6) = *(undefined4 *)(lVar1 + 4 + lVar4);
          *(undefined4 *)(lVar2 + 0x38 + lVar6) = *(undefined4 *)(lVar1 + 8 + lVar4);
          *(undefined4 *)(lVar2 + 0x3c + lVar6) = *(undefined4 *)(lVar1 + 0xc + lVar4);
          *(undefined4 *)(lVar2 + 0x40 + lVar6) = *(undefined4 *)(lVar1 + 0x10 + lVar4);
          *(undefined4 *)(lVar2 + 0x44 + lVar6) = *(undefined4 *)(lVar1 + 0x14 + lVar4);
          *(undefined4 *)(lVar2 + 0x48 + lVar6) = *(undefined4 *)(lVar1 + 0x18 + lVar4);
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(lVar2 + lVar4) = 0;
          *(undefined4 *)(lVar2 + 8 + lVar4) = 0;
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
          *(undefined4 *)(lVar2 + 0x18 + lVar4) = 0;
        }
        uVar5 = uVar5 + 4;
      } while (uVar5 < uVar7 - 3);
    }
    for (; uVar5 < uVar7; uVar5 = uVar5 + 1) {
      lVar4 = *(longlong *)(param_1 + 0x70);
      lVar1 = (longlong)(int)uVar5 * 0x20;
      if (*(char *)(lVar1 + 0x1c + lVar4) != '\0') {
        lVar2 = *(longlong *)(param_1 + 0x50);
        lVar6 = (longlong)(int)uVar5 * 0x60;
        *(undefined4 *)(lVar6 + 0x30 + lVar2) = *(undefined4 *)(lVar1 + lVar4);
        *(undefined4 *)(lVar6 + 0x34 + lVar2) = *(undefined4 *)(lVar1 + 4 + lVar4);
        *(undefined4 *)(lVar6 + 0x38 + lVar2) = *(undefined4 *)(lVar1 + 8 + lVar4);
        *(undefined4 *)(lVar6 + 0x3c + lVar2) = *(undefined4 *)(lVar1 + 0xc + lVar4);
        *(undefined4 *)(lVar6 + 0x40 + lVar2) = *(undefined4 *)(lVar1 + 0x10 + lVar4);
        *(undefined4 *)(lVar6 + 0x44 + lVar2) = *(undefined4 *)(lVar1 + 0x14 + lVar4);
        *(undefined4 *)(lVar6 + 0x48 + lVar2) = *(undefined4 *)(lVar1 + 0x18 + lVar4);
        lVar4 = *(longlong *)(param_1 + 0x50);
        *(undefined8 *)(lVar6 + lVar4) = 0;
        *(undefined4 *)(lVar6 + 8 + lVar4) = 0;
        lVar4 = *(longlong *)(param_1 + 0x50);
        *(undefined8 *)(lVar6 + 0x10 + lVar4) = 0;
        *(undefined4 *)(lVar6 + 0x18 + lVar4) = 0;
      }
    }
  }
  ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x70),0,(ulonglong)uVar7 << 5);
  return;
}



// FUNCTION 1409589b0 FUN_1409589b0 body=569 status=ok
// SIG undefined FUN_1409589b0(void)

void FUN_1409589b0(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  
  lVar23 = (longlong)param_2;
  lVar22 = (longlong)param_3;
  puVar20 = (undefined8 *)(lVar22 * 0x10 + param_1[4]);
  puVar21 = (undefined8 *)(lVar23 * 0x10 + param_1[4]);
  if (puVar21 != puVar20) {
    uVar5 = puVar20[1];
    uVar6 = *puVar21;
    uVar7 = puVar21[1];
    *puVar21 = *puVar20;
    puVar21[1] = uVar5;
    *puVar20 = uVar6;
    puVar20[1] = uVar7;
  }
  lVar4 = *param_1;
  lVar1 = lVar22 * 8;
  lVar2 = lVar23 * 8;
  uVar5 = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(lVar1 + lVar4);
  *(undefined8 *)(lVar1 + lVar4) = uVar5;
  puVar20 = (undefined8 *)(lVar22 * 0x60 + param_1[10]);
  puVar21 = (undefined8 *)(lVar23 * 0x60 + param_1[10]);
  if (puVar21 != puVar20) {
    uVar5 = puVar20[1];
    uVar6 = *puVar21;
    uVar7 = puVar21[1];
    uVar8 = puVar21[2];
    uVar9 = puVar21[3];
    uVar10 = puVar21[4];
    uVar11 = puVar21[5];
    uVar12 = puVar21[6];
    uVar13 = puVar21[7];
    uVar14 = puVar21[8];
    uVar15 = puVar21[9];
    uVar16 = puVar21[10];
    uVar17 = puVar21[0xb];
    *puVar21 = *puVar20;
    puVar21[1] = uVar5;
    uVar5 = puVar20[3];
    puVar21[2] = puVar20[2];
    puVar21[3] = uVar5;
    uVar5 = puVar20[5];
    puVar21[4] = puVar20[4];
    puVar21[5] = uVar5;
    uVar5 = puVar20[7];
    puVar21[6] = puVar20[6];
    puVar21[7] = uVar5;
    uVar5 = puVar20[9];
    puVar21[8] = puVar20[8];
    puVar21[9] = uVar5;
    uVar5 = puVar20[0xb];
    puVar21[10] = puVar20[10];
    puVar21[0xb] = uVar5;
    *puVar20 = uVar6;
    puVar20[1] = uVar7;
    puVar20[2] = uVar8;
    puVar20[3] = uVar9;
    puVar20[4] = uVar10;
    puVar20[5] = uVar11;
    puVar20[6] = uVar12;
    puVar20[7] = uVar13;
    puVar20[8] = uVar14;
    puVar20[9] = uVar15;
    puVar20[10] = uVar16;
    puVar20[0xb] = uVar17;
  }
  puVar20 = (undefined8 *)(lVar22 * 0x70 + param_1[0xc]);
  puVar21 = (undefined8 *)(lVar23 * 0x70 + param_1[0xc]);
  if (puVar21 != puVar20) {
    uVar5 = puVar20[1];
    uVar6 = *puVar21;
    uVar7 = puVar21[1];
    uVar8 = puVar21[2];
    uVar9 = puVar21[3];
    uVar10 = puVar21[4];
    uVar11 = puVar21[5];
    uVar12 = puVar21[6];
    uVar13 = puVar21[7];
    uVar14 = puVar21[8];
    uVar15 = puVar21[9];
    uVar16 = puVar21[10];
    uVar17 = puVar21[0xb];
    uVar18 = puVar21[0xc];
    uVar19 = puVar21[0xd];
    *puVar21 = *puVar20;
    puVar21[1] = uVar5;
    uVar5 = puVar20[3];
    puVar21[2] = puVar20[2];
    puVar21[3] = uVar5;
    uVar5 = puVar20[5];
    puVar21[4] = puVar20[4];
    puVar21[5] = uVar5;
    uVar5 = puVar20[7];
    puVar21[6] = puVar20[6];
    puVar21[7] = uVar5;
    uVar5 = puVar20[9];
    puVar21[8] = puVar20[8];
    puVar21[9] = uVar5;
    uVar5 = puVar20[0xb];
    puVar21[10] = puVar20[10];
    puVar21[0xb] = uVar5;
    uVar5 = puVar20[0xd];
    puVar21[0xc] = puVar20[0xc];
    puVar21[0xd] = uVar5;
    *puVar20 = uVar6;
    puVar20[1] = uVar7;
    puVar20[2] = uVar8;
    puVar20[3] = uVar9;
    puVar20[4] = uVar10;
    puVar20[5] = uVar11;
    puVar20[6] = uVar12;
    puVar20[7] = uVar13;
    puVar20[8] = uVar14;
    puVar20[9] = uVar15;
    puVar20[10] = uVar16;
    puVar20[0xb] = uVar17;
    puVar20[0xc] = uVar18;
    puVar20[0xd] = uVar19;
  }
  puVar20 = (undefined8 *)(param_1[0x10] + lVar22 * 0xc);
  puVar21 = (undefined8 *)(param_1[0x10] + lVar23 * 0xc);
  if (puVar21 != puVar20) {
    uVar5 = *puVar21;
    uVar3 = *(undefined4 *)(puVar21 + 1);
    *puVar21 = *puVar20;
    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar20 + 1);
    *puVar20 = uVar5;
    *(undefined4 *)(puVar20 + 1) = uVar3;
  }
  puVar20 = (undefined8 *)(lVar22 * 0x20 + param_1[0xe]);
  puVar21 = (undefined8 *)(lVar23 * 0x20 + param_1[0xe]);
  if (puVar21 != puVar20) {
    uVar5 = puVar20[1];
    uVar6 = *puVar21;
    uVar7 = puVar21[1];
    uVar8 = puVar21[2];
    uVar9 = puVar21[3];
    *puVar21 = *puVar20;
    puVar21[1] = uVar5;
    uVar5 = puVar20[3];
    puVar21[2] = puVar20[2];
    puVar21[3] = uVar5;
    *puVar20 = uVar6;
    puVar20[1] = uVar7;
    puVar20[2] = uVar8;
    puVar20[3] = uVar9;
  }
  *(int *)(*(longlong *)(*param_1 + lVar2) + 0x38) = param_2;
  *(int *)(*(longlong *)(*param_1 + lVar1) + 0x38) = param_3;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)(param_1 + 0x45) = 1;
  return;
}



// FUNCTION 140958bf0 FUN_140958bf0 body=134 status=ok
// SIG undefined FUN_140958bf0(void)

void FUN_140958bf0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [24];
  
  if (((*(char *)(param_1 + 0x1b1) != '\0') && (*(char *)(param_1 + 0x5bd) != '\0')) &&
     (*(char *)(param_1 + 0x5bc) == '\0')) {
    if (0 < *(int *)(param_1 + 0x4f0)) {
      return;
    }
    FCachedTypefaceData::FCachedFontData::BinarySearchKey(&local_38);
    local_30 = *(undefined4 *)(param_2 + 1);
    local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_28 = *(undefined4 *)(param_2 + 2);
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_20,local_38);
    param_2 = &local_38;
  }
  CAkParameterNodeBase::SetRTPC(param_1,param_2);
  return;
}



// FUNCTION 140958c80 FUN_140958c80 body=677 status=ok
// SIG undefined FUN_140958c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140958c80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined8 local_90;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  lVar1 = DAT_146863c00;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar8 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140958ce3;
  }
  lVar8 = 0;
LAB_140958ce3:
  if ((*(int *)(lVar8 + lVar1) != 0) &&
     (*(float *)(param_1 + 0x284) = *(float *)(*param_2 + 0xc0) + *(float *)(param_1 + 0x284),
     *(longlong *)(param_1 + 0x370) != 0)) {
    *(undefined1 *)(param_1 + 0x5bd) = 1;
    local_a8 = 0;
    local_a0 = 0;
    FUN_1426d3dd0(local_68);
    FUN_1426ea8d0(local_68,1);
    local_b0 = local_68;
    local_b8 = param_1 + 0x2e0;
    local_c0 = &local_90;
    local_c8 = (uint)*(byte *)(param_1 + 0x184);
    local_90 = CONCAT44(*(undefined4 *)(param_1 + 0x2cc),2);
    UWorld::OverlapMultiByChannel
              (*(undefined8 *)(param_1 + 0x370),&local_a8,param_1 + 0x2c0,&DAT_1464aa810);
    if (*(longlong *)(param_1 + 0x358) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)FUN_1426e2530(*(longlong *)(param_1 + 0x358),0);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x348))
                  (plVar4,
                   "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\ImmediatePhysics\\Source\\ImmediatePhysics\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x370);
      }
    }
    lVar1 = local_a8 + (longlong)(int)local_a0 * 0x18;
    for (lVar8 = local_a8; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
      lVar5 = FUN_14046ef90(lVar8);
      local_90 = lVar5;
      if ((lVar5 != 0) &&
         (piVar6 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                    (param_1 + 0x228,local_98,lVar5), *piVar6 == -1)) {
        FUN_14058c900(param_1 + 0x228,local_94,&local_90,0);
        plVar9 = *(longlong **)(lVar5 + 0x4c0);
        if ((plVar9 != (longlong *)0x0) ||
           (plVar9 = *(longlong **)(lVar5 + 0x4c8), plVar9 != (longlong *)0x0)) {
          uVar7 = (**(code **)(*plVar9 + 0xa0))(plVar9,&local_90);
          uVar7 = P2UTransform(local_68,uVar7);
          FUN_140947e10(*(undefined8 *)(param_1 + 0x1c0),plVar9,uVar7);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x350))(plVar4);
    }
    if (local_a8 != 0) {
      FMemory::Free(local_a8);
    }
  }
  return;
}



// FUNCTION 140958f30 FUN_140958f30 body=1111 status=ok
// SIG undefined FUN_140958f30(void)

void FUN_140958f30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_c8;
  float local_c4;
  float local_c0;
  
  if (0.0 < *(float *)(param_1 + 0x288)) {
    lVar9 = *(longlong *)(param_1 + 0x218);
    uVar10 = 0;
    lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x220) * 0x24;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 0x24) {
      FUN_1409596d0(&local_c8,*(undefined4 *)(param_1 + 0x188),lVar9,param_2,param_3);
      plVar12 = *(longlong **)(param_1 + 0x1d8);
      uVar14 = (longlong)*(int *)(param_1 + 0x1e0) & 0x1fffffffffffffff;
      if (plVar12 + *(int *)(param_1 + 0x1e0) < plVar12) {
        uVar14 = uVar10;
      }
      uVar11 = uVar10;
      if (uVar14 != 0) {
        do {
          uVar4 = *(uint *)(*plVar12 + 0x38);
          lVar13 = (longlong)(int)uVar4;
          lVar5 = *(longlong *)(*plVar12 + 0x30);
          lVar6 = *(longlong *)(lVar5 + 0x50);
          lVar7 = lVar13 * 0x60;
          fVar2 = *(float *)(lVar6 + 0xc + lVar7);
          if (0.0 < fVar2) {
            cVar3 = *(char *)(lVar9 + 0x18);
            fVar19 = *(float *)(lVar9 + 0x10);
            if (cVar3 == '\0') {
              fVar19 = fVar19 / (fVar2 * *(float *)(param_1 + 0x288));
            }
            if (*(int *)(lVar9 + 0x1c) == 0) {
              uVar8 = (cVar3 != '\0') + 2;
            }
            else {
              uVar8 = (uint)(cVar3 != '\0');
            }
            if (uVar4 < *(uint *)(lVar5 + 0x168)) {
              fVar16 = *(float *)(lVar6 + 0x40 + lVar7) - local_c8;
              fVar17 = *(float *)(lVar6 + 0x44 + lVar7) - local_c4;
              fVar18 = *(float *)(lVar6 + 0x48 + lVar7) - local_c0;
              fVar20 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18);
              if (fVar20 <= *(float *)(lVar9 + 0xc)) {
                if (0.0 < fVar20) {
                  fVar15 = 1.0 / fVar20;
                  fVar16 = fVar15 * fVar16;
                  fVar17 = fVar15 * fVar17;
                  fVar18 = fVar15 * fVar18;
                }
                if (*(int *)(lVar9 + 0x14) == 1) {
                  fVar19 = fVar19 - (fVar19 / *(float *)(lVar9 + 0xc)) * fVar20;
                }
                fVar16 = fVar16 * fVar19;
                fVar17 = fVar17 * fVar19;
                fVar18 = fVar18 * fVar19;
                if ((uVar8 - 1 & 0xfffffffd) != 0) {
                  fVar17 = fVar17 * fVar2;
                  fVar18 = fVar18 * fVar2;
                  fVar16 = fVar16 * fVar2;
                }
                if (uVar8 - 2 < 2) {
                  *(float *)(lVar6 + lVar7) = fVar16 + *(float *)(lVar6 + lVar7);
                  *(float *)(lVar6 + 4 + lVar7) = fVar17 + *(float *)(lVar6 + 4 + lVar7);
                  *(float *)(lVar6 + 8 + lVar7) = fVar18 + *(float *)(lVar6 + 8 + lVar7);
                }
                else {
                  lVar5 = *(longlong *)(lVar5 + 0x80);
                  *(float *)(lVar5 + lVar13 * 0xc) = fVar16 + *(float *)(lVar5 + lVar13 * 0xc);
                  *(float *)(lVar5 + 4 + lVar13 * 0xc) =
                       fVar17 + *(float *)(lVar5 + 4 + lVar13 * 0xc);
                  *(float *)(lVar5 + 8 + lVar13 * 0xc) =
                       fVar18 + *(float *)(lVar5 + 8 + lVar13 * 0xc);
                }
              }
            }
          }
          plVar12 = plVar12 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar14);
      }
    }
    if (((0.0001 < ABS(*(float *)(param_1 + 0x154))) || (0.0001 < ABS(*(float *)(param_1 + 0x158))))
       || (0.0001 < ABS(*(float *)(param_1 + 0x15c)))) {
      WorldVectorToSpaceNoScale
                (&local_c8,*(undefined4 *)(param_1 + 0x188),(float *)(param_1 + 0x154),param_2,
                 param_3);
      plVar12 = *(longlong **)(param_1 + 0x1d8);
      uVar14 = (longlong)*(int *)(param_1 + 0x1e0) & 0x1fffffffffffffff;
      if (plVar12 + *(int *)(param_1 + 0x1e0) < plVar12) {
        uVar14 = uVar10;
      }
      if (uVar14 != 0) {
        do {
          uVar4 = *(uint *)(*plVar12 + 0x38);
          lVar9 = (longlong)(int)uVar4;
          lVar1 = *(longlong *)(*plVar12 + 0x30);
          fVar2 = *(float *)(*(longlong *)(lVar1 + 0x50) + 0xc + lVar9 * 0x60);
          if ((0.0 < fVar2) && (uVar4 < *(uint *)(lVar1 + 0x168))) {
            lVar1 = *(longlong *)(lVar1 + 0x80);
            *(float *)(lVar1 + lVar9 * 0xc) = local_c8 * fVar2 + *(float *)(lVar1 + lVar9 * 0xc);
            *(float *)(lVar1 + 4 + lVar9 * 0xc) =
                 local_c4 * fVar2 + *(float *)(lVar1 + 4 + lVar9 * 0xc);
            *(float *)(lVar1 + 8 + lVar9 * 0xc) =
                 local_c0 * fVar2 + *(float *)(lVar1 + 8 + lVar9 * 0xc);
          }
          plVar12 = plVar12 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar14);
      }
    }
  }
  return;
}



// FUNCTION 140959390 FUN_140959390 body=827 status=ok
// SIG undefined FUN_140959390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140959390(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [20];
  undefined1 local_d4 [28];
  undefined1 local_b8 [72];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146863c68) {
    _Init_thread_header(&DAT_146863c68);
    if (DAT_146863c68 == -1) {
      FName::FName(&DAT_146863c60,"RagdollNodeFindGeometry",1);
      _Init_thread_footer(&DAT_146863c68);
    }
  }
  local_f8 = 0;
  puVar5 = (undefined8 *)FUN_1422ffb20(local_b8,DAT_146863c60,local_e8,0);
  *(undefined8 *)(param_1 + 0x2e0) = *puVar5;
  *(undefined8 *)(param_1 + 0x2e8) = puVar5[1];
  *(undefined1 *)(param_1 + 0x2f0) = *(undefined1 *)(puVar5 + 2);
  *(undefined1 *)(param_1 + 0x2f1) = *(undefined1 *)((longlong)puVar5 + 0x11);
  *(undefined1 *)(param_1 + 0x2f2) = *(undefined1 *)((longlong)puVar5 + 0x12);
  *(undefined1 *)(param_1 + 0x2f3) = *(undefined1 *)((longlong)puVar5 + 0x13);
  *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)((longlong)puVar5 + 0x14);
  *(undefined1 *)(param_1 + 0x2f5) = *(undefined1 *)((longlong)puVar5 + 0x15);
  *(undefined1 *)(param_1 + 0x2f6) = *(undefined1 *)((longlong)puVar5 + 0x16);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(puVar5 + 3);
  *(undefined1 *)(param_1 + 0x2fc) = *(undefined1 *)((longlong)puVar5 + 0x1c);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(puVar5 + 4);
  *(undefined1 *)(param_1 + 0x304) = *(undefined1 *)((longlong)puVar5 + 0x24);
  *(undefined1 *)(param_1 + 0x305) = *(undefined1 *)((longlong)puVar5 + 0x25);
  if ((undefined8 *)(param_1 + 0x308) != puVar5 + 5) {
    if (puVar5[9] == 0) {
      _guard_xfg_dispatch_icall_nop((undefined8 *)(param_1 + 0x308),puVar5 + 5,0x20);
    }
    if (*(longlong *)(param_1 + 0x328) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x328) = puVar5[9];
    puVar5[9] = 0;
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(puVar5 + 10);
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)((longlong)puVar5 + 0x54);
    puVar5[10] = 0;
  }
  if ((undefined8 *)(param_1 + 0x338) != puVar5 + 0xb) {
    if (puVar5[0xd] == 0) {
      _guard_xfg_dispatch_icall_nop((undefined8 *)(param_1 + 0x338),puVar5 + 0xb,0x10);
    }
    if (*(longlong *)(param_1 + 0x348) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x348) = puVar5[0xd];
    puVar5[0xd] = 0;
    *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(puVar5 + 0xe);
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)((longlong)puVar5 + 0x74);
    puVar5[0xe] = 0;
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2f8) = 1;
  puVar6 = (undefined4 *)(**(code **)(*param_3 + 0x4a8))(param_3,local_d4,param_3 + 0x42);
  uVar2 = puVar6[2];
  uVar3 = *puVar6;
  uVar4 = puVar6[1];
  uVar1 = puVar6[6];
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  *(undefined4 *)(param_1 + 0x2c4) = uVar4;
  *(undefined4 *)(param_1 + 0x2c8) = uVar2;
  *(undefined4 *)(param_1 + 0x2cc) = uVar1;
  fVar10 = *(float *)(param_1 + 0x2dc) + 0.0001;
  if ((fVar10 < *(float *)(param_1 + 0x2cc)) ||
     (fVar10 = fVar10 - *(float *)(param_1 + 0x2cc),
     fVar9 = *(float *)(param_1 + 0x2c4) - *(float *)(param_1 + 0x2d4),
     fVar8 = *(float *)(param_1 + 0x2c0) - *(float *)(param_1 + 0x2d0),
     fVar7 = *(float *)(param_1 + 0x2c8) - *(float *)(param_1 + 0x2d8),
     fVar10 * fVar10 < fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7)) {
    *(undefined4 *)(param_1 + 0x2d0) = uVar3;
    *(undefined4 *)(param_1 + 0x2d4) = uVar4;
    *(undefined4 *)(param_1 + 0x2d8) = uVar2;
    *(undefined4 *)(param_1 + 0x2dc) = uVar1;
    *(float *)(param_1 + 0x2dc) = *(float *)(param_1 + 0x1ac) * *(float *)(param_1 + 0x2dc);
    *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x218);
    *(longlong *)(param_1 + 0x370) = param_2;
  }
  return;
}



// FUNCTION 1409596d0 FUN_1409596d0 body=785 status=ok
// SIG undefined FUN_1409596d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1409596d0(float *param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM5 [16];
  undefined1 auVar10 [16];
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
  
  if (param_2 == 0) {
    auVar10 = *(undefined1 (*) [16])(param_4 + 8);
    fVar2 = auVar10._0_4_;
    fVar7 = auVar10._4_4_;
    fVar4 = auVar10._8_4_;
    fVar17 = *param_4 * _DAT_146863c20;
    fVar13 = param_4[1] * fRam0000000146863c24;
    fVar14 = param_4[2] * fRam0000000146863c28;
    fVar15 = param_4[3] * fRam0000000146863c2c;
    auVar10 = rcpps(in_XMM5,auVar10);
    fVar16 = (float)((uint)(*param_3 - param_4[4]) & _DAT_146863b70);
    fVar21 = (float)((uint)(param_3[1] - param_4[5]) & uRam0000000146863b74);
    fVar18 = (float)((uint)(param_3[2] - param_4[6]) & uRam0000000146863b78);
    fVar3 = fVar18 * fVar13 - fVar21 * fVar14;
    fVar5 = fVar16 * fVar14 - fVar18 * fVar17;
    fVar6 = fVar21 * fVar17 - fVar16 * fVar13;
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar3 = fVar3 + fVar3;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar7;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    bVar1 = (float)((uint)fVar4 & uRam0000000146863c48) <= fRam0000000146863c38;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar7;
    fVar4 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar7 = ((fVar3 * fVar14 - fVar6 * fVar17) + fVar15 * fVar5 + fVar21) *
            (float)(-(uint)((float)((uint)fVar7 & uRam0000000146863c44) <= fRam0000000146863c34) &
                    (uint)fVar11 ^ (uint)fVar11);
    *param_1 = ((fVar6 * fVar13 - fVar5 * fVar14) + fVar15 * fVar3 + fVar16) *
               (float)(-(uint)((float)((uint)fVar2 & _DAT_146863c40) <= _DAT_146863c30) &
                       (uint)fVar9 ^ (uint)fVar9);
    param_1[2] = ((fVar5 * fVar17 - fVar3 * fVar13) + fVar15 * fVar6 + fVar18) *
                 (float)(-(uint)bVar1 & (uint)fVar4 ^ (uint)fVar4);
  }
  else {
    if (param_2 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = param_3[2];
      return param_1;
    }
    if (param_2 != 2) {
      *(undefined8 *)param_1 = _DAT_1468b5d90;
      param_1[2] = DAT_1468b5d98;
      return param_1;
    }
    auVar10 = *(undefined1 (*) [16])(param_4 + 8);
    fVar2 = auVar10._0_4_;
    fVar7 = auVar10._4_4_;
    fVar4 = auVar10._8_4_;
    fVar17 = *param_4 * _DAT_146863c20;
    fVar18 = param_4[1] * fRam0000000146863c24;
    fVar19 = param_4[2] * fRam0000000146863c28;
    fVar20 = param_4[3] * fRam0000000146863c2c;
    auVar8._4_4_ = fVar19;
    auVar8._0_4_ = fVar18;
    auVar8._8_4_ = fVar17;
    auVar8._12_4_ = fVar20;
    auVar10 = rcpps(in_XMM5,auVar10);
    fVar21 = (float)((uint)(*param_3 - param_4[4]) & _DAT_146863b70);
    fVar22 = (float)((uint)(param_3[1] - param_4[5]) & uRam0000000146863b74);
    fVar23 = (float)((uint)(param_3[2] - param_4[6]) & uRam0000000146863b78);
    fVar3 = fVar23 * fVar18 - fVar22 * fVar19;
    fVar5 = fVar21 * fVar19 - fVar23 * fVar17;
    fVar6 = fVar22 * fVar17 - fVar21 * fVar18;
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar3 = fVar3 + fVar3;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar7;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar7;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar13 = *param_5 * _DAT_146863c20;
    fVar14 = param_5[1] * fRam0000000146863c24;
    fVar15 = param_5[2] * fRam0000000146863c28;
    fVar16 = param_5[3] * fRam0000000146863c2c;
    fVar21 = (float)((uint)(((fVar6 * fVar18 - fVar5 * fVar19) + fVar20 * fVar3 + fVar21) *
                            (float)(-(uint)((float)((uint)fVar2 & _DAT_146863c40) <= _DAT_146863c30)
                                    & (uint)fVar9 ^ (uint)fVar9) - param_5[4]) & _DAT_146863b70);
    fVar19 = (float)((uint)(((fVar3 * fVar19 - fVar6 * fVar17) + fVar20 * fVar5 + fVar22) *
                            (float)(-(uint)((float)((uint)fVar7 & uRam0000000146863c44) <=
                                           fRam0000000146863c34) & (uint)fVar11 ^ (uint)fVar11) -
                           param_5[5]) & uRam0000000146863b74);
    fVar18 = (float)((uint)(((fVar5 * fVar17 - fVar3 * fVar18) + fVar20 * fVar6 + fVar23) *
                            (float)(-(uint)((float)((uint)fVar4 & uRam0000000146863c48) <=
                                           fRam0000000146863c38) & (uint)fVar12 ^ (uint)fVar12) -
                           param_5[6]) & uRam0000000146863b78);
    fVar4 = fVar18 * fVar14 - fVar19 * fVar15;
    fVar3 = fVar21 * fVar15 - fVar18 * fVar13;
    fVar5 = fVar19 * fVar13 - fVar21 * fVar14;
    fVar4 = fVar4 + fVar4;
    fVar3 = fVar3 + fVar3;
    fVar5 = fVar5 + fVar5;
    auVar10 = *(undefined1 (*) [16])(param_5 + 8);
    fVar2 = auVar10._4_4_;
    auVar8 = rcpps(auVar8,auVar10);
    fVar7 = auVar8._0_4_;
    fVar6 = auVar8._4_4_;
    fVar11 = auVar8._8_4_;
    fVar12 = auVar10._0_4_;
    fVar17 = auVar10._8_4_;
    fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar12;
    fVar9 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar2;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar17;
    bVar1 = (float)((uint)fVar17 & uRam0000000146863c48) <= fRam0000000146863c38;
    fVar6 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar12;
    fVar7 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
    fVar9 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar17;
    fVar7 = ((fVar4 * fVar15 - fVar5 * fVar13) + fVar16 * fVar3 + fVar19) *
            (float)(-(uint)((float)((uint)fVar2 & uRam0000000146863c44) <= fRam0000000146863c34) &
                    (uint)fVar7 ^ (uint)fVar7);
    *param_1 = ((fVar5 * fVar14 - fVar3 * fVar15) + fVar16 * fVar4 + fVar21) *
               (float)(-(uint)((float)((uint)fVar12 & _DAT_146863c40) <= _DAT_146863c30) &
                       (uint)fVar6 ^ (uint)fVar6);
    param_1[2] = ((fVar3 * fVar13 - fVar4 * fVar14) + fVar16 * fVar5 + fVar18) *
                 (float)(-(uint)bVar1 & (uint)fVar9 ^ (uint)fVar9);
  }
  param_1[1] = fVar7;
  return param_1;
}



// FUNCTION 1409599f0 WorldVectorToSpaceNoScale body=399 status=ok
// SIG undefined WorldVectorToSpaceNoScale(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * WorldVectorToSpaceNoScale
                  (float *param_1,int param_2,float *param_3,float *param_4,float *param_5)

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
  
  if (param_2 == 0) {
    fVar6 = param_3[2];
    fVar5 = param_3[1];
    fVar4 = *param_3;
    fVar1 = *param_4;
    fVar2 = param_4[1];
    fVar3 = param_4[2];
    fVar7 = param_4[3];
  }
  else {
    if (param_2 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = param_3[2];
      return param_1;
    }
    if (param_2 != 2) {
      *(undefined8 *)param_1 = _DAT_1468b5d90;
      param_1[2] = DAT_1468b5d98;
      return param_1;
    }
    fVar6 = param_3[2];
    fVar7 = *param_4 * _DAT_146863c20;
    fVar8 = param_4[1] * fRam0000000146863c24;
    fVar9 = param_4[2] * fRam0000000146863c28;
    fVar10 = param_4[3] * fRam0000000146863c2c;
    fVar5 = param_3[1];
    fVar4 = *param_3;
    fVar1 = fVar6 * fVar8 - fVar5 * fVar9;
    fVar2 = fVar4 * fVar9 - fVar6 * fVar7;
    fVar3 = fVar5 * fVar7 - fVar4 * fVar8;
    fVar1 = fVar1 + fVar1;
    fVar2 = fVar2 + fVar2;
    fVar3 = fVar3 + fVar3;
    fVar4 = (fVar3 * fVar8 - fVar2 * fVar9) + fVar10 * fVar1 + fVar4;
    fVar5 = (fVar1 * fVar9 - fVar3 * fVar7) + fVar10 * fVar2 + fVar5;
    fVar6 = (fVar2 * fVar7 - fVar1 * fVar8) + fVar10 * fVar3 + fVar6;
    fVar1 = *param_5;
    fVar2 = param_5[1];
    fVar3 = param_5[2];
    fVar7 = param_5[3];
  }
  fVar1 = fVar1 * _DAT_146863c20;
  fVar2 = fVar2 * fRam0000000146863c24;
  fVar3 = fVar3 * fRam0000000146863c28;
  fVar7 = fVar7 * fRam0000000146863c2c;
  fVar8 = fVar6 * fVar2 - fVar5 * fVar3;
  fVar9 = fVar4 * fVar3 - fVar6 * fVar1;
  fVar10 = fVar5 * fVar1 - fVar4 * fVar2;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  *param_1 = (fVar10 * fVar2 - fVar9 * fVar3) + fVar7 * fVar8 + fVar4;
  param_1[2] = (fVar9 * fVar1 - fVar8 * fVar2) + fVar7 * fVar10 + fVar6;
  param_1[1] = (fVar8 * fVar3 - fVar10 * fVar1) + fVar7 * fVar9 + fVar5;
  return param_1;
}



// FUNCTION 140959b80 addLimit body=121 status=ok
// SIG undefined addLimit(void)

void ImmediatePhysics::ConstraintHelper::addLimit
               (undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)(param_2 + 0x4c);
  if ((0.0 < param_3[3]) || (0.0 < param_3[2])) {
    uVar3 = uVar2 | 0x11;
    *(float *)(param_2 + 0x40) = param_3[2];
    *(float *)(param_2 + 0x44) = param_3[3];
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    *(undefined2 *)(param_2 + 0x4e) = 0x401;
    *(float *)(param_2 + 0x40) = *param_3;
    *(float *)(param_2 + 0x44) = param_3[1];
    uVar3 = uVar2 | 0x18;
    if (*(float *)(param_2 + 0xc) <= 0.0) {
      uVar3 = uVar2 | 0x10;
    }
    fVar1 = *param_3;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (0.0 < fVar1) {
      *(ushort *)(param_2 + 0x4c) = uVar3 | 4;
      return;
    }
  }
  *(ushort *)(param_2 + 0x4c) = uVar3;
  return;
}



// FUNCTION 140959c20 computeJacobianAxes body=600 status=ok
// SIG undefined computeJacobianAxes(void)

void ImmediatePhysics::computeJacobianAxes(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[3];
  fVar2 = param_2[3];
  fVar5 = param_2[1];
  fVar6 = *param_2;
  fVar15 = param_3[1];
  fVar3 = param_3[2];
  fVar7 = *param_3;
  fVar4 = param_2[2];
  fVar12 = fVar7 * fVar2 + fVar6 * fVar1;
  fVar14 = fVar15 * fVar2 + fVar5 * fVar1;
  fVar9 = fVar3 * fVar2 + fVar4 * fVar1;
  fVar11 = fVar15 * fVar5 + fVar7 * fVar6 + fVar3 * fVar4;
  fVar8 = fVar7 * fVar5 + fVar15 * fVar6;
  fVar10 = fVar1 * fVar2 - fVar11;
  fVar13 = fVar7 * fVar4 + fVar3 * fVar6;
  fVar7 = ((fVar6 + fVar6) * fVar7 + fVar10) * 0.5;
  param_1[1] = (fVar8 + fVar9) * 0.5;
  *param_1 = fVar7;
  param_1[2] = (fVar13 - fVar14) * 0.5;
  fVar6 = fVar5 * fVar3 + fVar15 * fVar4;
  fVar5 = ((fVar5 + fVar5) * fVar15 + fVar10) * 0.5;
  param_1[3] = (fVar8 - fVar9) * 0.5;
  param_1[4] = fVar5;
  param_1[5] = (fVar12 + fVar6) * 0.5;
  fVar15 = ((fVar4 + fVar4) * fVar3 + fVar10) * 0.5;
  param_1[6] = (fVar14 + fVar13) * 0.5;
  param_1[7] = (fVar6 - fVar12) * 0.5;
  param_1[8] = fVar15;
  if (fVar11 + fVar1 * fVar2 == 0.0) {
    *param_1 = fVar7 + 1.1920929e-07;
    param_1[4] = fVar5 + 1.1920929e-07;
    param_1[8] = fVar15 + 1.1920929e-07;
  }
  return;
}



// FUNCTION 140959e80 ellipseClamp body=581 status=ok
// SIG undefined ellipseClamp(void)

undefined8 * ImmediatePhysics::ellipseClamp(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  uint uVar2;
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
  
  fVar13 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 8);
  if (fVar6 < fVar4) {
    if (ABS(fVar13) < 1e-06) {
      if (fVar1 <= 0.0) {
        fVar4 = -fVar4;
      }
      *(float *)(param_1 + 1) = fVar4;
      *param_1 = 0;
      return param_1;
    }
  }
  else if (ABS(fVar1) < 1e-06) {
    if (fVar13 <= 0.0) {
      fVar6 = -fVar6;
    }
    *(float *)((longlong)param_1 + 4) = fVar6;
    *(undefined4 *)(param_1 + 1) = 0;
    goto LAB_14095a0ac;
  }
  uVar2 = 0;
  fVar11 = ABS(fVar13) * fVar6;
  fVar12 = ABS(fVar1) * fVar4;
  fVar15 = fVar4 * fVar4;
  fVar14 = fVar6 * fVar6;
  fVar8 = fVar12 - fVar15;
  fVar3 = fVar11 - fVar14;
  if (fVar8 <= fVar3) {
    fVar8 = fVar3;
  }
  do {
    fVar9 = 1.0 / (fVar14 + fVar8);
    fVar5 = fVar9 * fVar11;
    fVar10 = 1.0 / (fVar15 + fVar8);
    fVar5 = fVar5 * fVar5;
    fVar3 = fVar10 * fVar12;
    fVar3 = fVar3 * fVar3;
    fVar7 = (fVar3 + fVar5) - 1.0;
    if (fVar7 < 0.0001) {
      fVar9 = fVar13 * fVar14 * fVar9;
      fVar10 = fVar1 * fVar15 * fVar10;
      goto LAB_14095a06f;
    }
    uVar2 = uVar2 + 1;
    fVar8 = fVar8 + fVar7 / (fVar3 * fVar10 * 2.0 + fVar5 * fVar9 * 2.0);
  } while (uVar2 < 0x14);
  fVar9 = fVar13 * fVar14 * fVar9;
  fVar10 = fVar1 * fVar15 * fVar10;
  fVar6 = fVar9 / fVar6;
  fVar4 = fVar10 / fVar4;
  fVar13 = 1.0 / SQRT(fVar4 * fVar4 + fVar6 * fVar6);
  fVar9 = fVar9 * fVar13;
  fVar10 = fVar10 * fVar13;
LAB_14095a06f:
  *(float *)(param_1 + 1) = fVar10;
  *(float *)((longlong)param_1 + 4) = fVar9;
LAB_14095a0ac:
  *(undefined4 *)param_1 = 0;
  return param_1;
}



// FUNCTION 14095a0d0 getLimit body=1064 status=ok
// SIG undefined getLimit(void)

BADSPACEBASE *
ImmediatePhysics::ConeLimitHelper::getLimit
          (float *param_1,float *param_2,float *param_3,float *param_4)

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
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [4];
  float local_b4;
  float local_b0;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar5 = fVar1 + fVar1;
  fVar4 = param_2[3];
  fVar7 = *param_1;
  fVar8 = fVar4 + fVar4;
  local_c8 = 0;
  fVar6 = param_1[2];
  fVar10 = param_1[1];
  local_c0 = 1.0 / (fVar4 + 1.0);
  local_c4 = fVar3 * local_c0;
  local_c0 = fVar2 * local_c0;
  fVar11 = ABS(local_c0);
  local_c0 = -local_c0;
  fVar9 = (fVar6 + ABS(local_c4)) / ((1.0 - fVar6 * ABS(local_c4)) * fVar7);
  fVar6 = (fVar6 + fVar11) / ((1.0 - fVar6 * fVar11) * fVar10);
  if (1.0 < fVar6 * fVar6 + fVar9 * fVar9) {
    local_d4 = 0;
    local_d0 = fVar7;
    local_cc = fVar10;
    ellipseClamp(local_b8,&local_c8,&local_d4);
    fVar9 = -local_b0;
    fVar16 = -(local_b0 / (fVar10 * fVar10));
    fVar11 = fVar9 * fVar9 + local_b4 * local_b4;
    fVar7 = local_b4 / (fVar7 * fVar7);
    fVar12 = 1.0 - fVar11;
    fVar10 = 1.0 / (fVar11 + 1.0);
    fVar6 = fVar7 * local_b4 + fVar9 * fVar16;
    fVar13 = (fVar12 + fVar12) * fVar10 * fVar10;
    fVar17 = fVar12 * fVar13 - 1.0;
    fVar10 = fVar6 * -4.0 * (3.0 - fVar11) * fVar10 * fVar10 * fVar10;
    fVar14 = fVar9 * -2.0 * fVar13;
    fVar15 = (local_b4 + local_b4) * fVar13;
    fVar11 = fVar13 * fVar6 * -2.0 + fVar10 * fVar12;
    fVar12 = fVar16 * -2.0 * fVar13 + fVar10 * fVar9 * -2.0;
    fVar9 = (fVar7 + fVar7) * fVar13 + fVar10 * (local_b4 + local_b4);
    register0x00000020 = (BADSPACEBASE *)0x1;
    fVar6 = 1.0 / SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12);
    fVar7 = (fVar11 * fVar14 - fVar12 * fVar17) * fVar6;
    param_3[1] = fVar7;
    fVar10 = (fVar12 * fVar15 - fVar9 * fVar14) * fVar6;
    fVar6 = (fVar9 * fVar17 - fVar11 * fVar15) * fVar6;
    param_3[2] = fVar6;
    *param_3 = fVar10;
    *param_4 = ((fVar4 * fVar8 + fVar1 * fVar5) - 1.0) * (fVar6 * fVar15 - fVar7 * fVar14) +
               (fVar10 * fVar14 - fVar6 * fVar17) * (fVar2 * fVar5 + fVar3 * fVar8) +
               (fVar7 * fVar17 - fVar10 * fVar15) * (fVar3 * fVar5 - fVar2 * fVar8);
  }
  return register0x00000020;
}



// FUNCTION 14095a500 halfAnglePair body=358 status=ok
// SIG undefined halfAnglePair(void)

void ImmediatePhysics::ConstraintHelper::halfAnglePair
               (longlong param_1,float param_2,float param_3,float param_4,float param_5,
               uint *param_6,longlong param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if ((*(float *)(param_7 + 0xc) <= 0.0) && (*(float *)(param_7 + 8) <= 0.0)) {
    fVar5 = param_5;
  }
  if (param_2 < param_3 + fVar5) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    uVar1 = *param_6;
    uVar2 = param_6[1];
    uVar3 = param_6[2];
    *(undefined8 **)(param_1 + 8) = puVar4 + 10;
    *(undefined2 *)((longlong)puVar4 + 0x4e) = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(uint *)(puVar4 + 2) = uVar1 ^ 0x80000000;
    *(uint *)((longlong)puVar4 + 0x14) = uVar2 ^ 0x80000000;
    *(uint *)(puVar4 + 3) = uVar3 ^ 0x80000000;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(uint *)(puVar4 + 6) = uVar1 ^ 0x80000000;
    *(uint *)((longlong)puVar4 + 0x34) = uVar2 ^ 0x80000000;
    *(uint *)(puVar4 + 7) = uVar3 ^ 0x80000000;
    *(float *)((longlong)puVar4 + 0xc) = (param_3 - param_2) * -2.0;
    addLimit(0x80000000,puVar4,param_7);
  }
  if (param_4 - fVar5 < param_2) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar4 + 10;
    *(undefined2 *)((longlong)puVar4 + 0x4e) = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(uint *)(puVar4 + 2) = *param_6;
    *(uint *)((longlong)puVar4 + 0x14) = param_6[1];
    *(uint *)(puVar4 + 3) = param_6[2];
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(uint *)(puVar4 + 6) = *param_6;
    *(uint *)((longlong)puVar4 + 0x34) = param_6[1];
    *(uint *)(puVar4 + 7) = param_6[2];
    *(float *)((longlong)puVar4 + 0xc) = (param_4 - param_2) + (param_4 - param_2);
    addLimit(param_1,puVar4,param_7);
  }
  return;
}



// FUNCTION 14095a670 linear body=268 status=ok
// SIG undefined linear(void)

float * ImmediatePhysics::ConstraintHelper::linear
                  (longlong param_1,float *param_2,float param_3,undefined2 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  
  pfVar8 = *(float **)(param_1 + 8);
  *(float **)(param_1 + 8) = pfVar8 + 0x14;
  *(undefined2 *)((longlong)pfVar8 + 0x4e) = param_4;
  *pfVar8 = *param_2;
  pfVar8[1] = param_2[1];
  pfVar8[2] = param_2[2];
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *param_2;
  fVar4 = *param_2;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  pfVar8[4] = fVar1 * param_2[2] - fVar2 * param_2[1];
  pfVar8[6] = fVar5 * fVar6 - fVar1 * fVar4;
  pfVar8[5] = fVar2 * fVar3 - fVar5 * fVar7;
  pfVar8[8] = *param_2;
  pfVar8[9] = param_2[1];
  pfVar8[10] = param_2[2];
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar4 = *param_2;
  fVar5 = *param_2;
  fVar6 = param_2[2];
  fVar7 = param_2[1];
  pfVar8[0xc] = fVar1 * param_2[2] - fVar2 * param_2[1];
  pfVar8[0xd] = fVar2 * fVar4 - fVar3 * fVar6;
  pfVar8[0xe] = fVar3 * fVar7 - fVar1 * fVar5;
  pfVar8[3] = param_3;
  return pfVar8;
}



// FUNCTION 14095a780 linear body=261 status=ok
// SIG undefined linear(void)

float * ImmediatePhysics::ConstraintHelper::linear
                  (longlong param_1,float *param_2,float param_3,undefined2 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *(undefined2 *)((longlong)param_5 + 0x4e) = param_4;
  *param_5 = *param_2;
  param_5[1] = param_2[1];
  param_5[2] = param_2[2];
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *param_2;
  fVar4 = *param_2;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = param_2[2];
  fVar7 = param_2[1];
  param_5[4] = fVar1 * param_2[2] - fVar2 * param_2[1];
  param_5[5] = fVar2 * fVar3 - fVar5 * fVar6;
  param_5[6] = fVar5 * fVar7 - fVar1 * fVar4;
  param_5[8] = *param_2;
  param_5[9] = param_2[1];
  param_5[10] = param_2[2];
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar4 = *param_2;
  fVar5 = *param_2;
  fVar6 = param_2[2];
  fVar7 = param_2[1];
  param_5[0xc] = fVar1 * param_2[2] - fVar2 * param_2[1];
  param_5[0xd] = fVar2 * fVar4 - fVar3 * fVar6;
  param_5[0xe] = fVar3 * fVar7 - fVar1 * fVar5;
  param_5[3] = param_3;
  return param_5;
}



// FUNCTION 14095a890 prepareLockedAxes body=1097 status=ok
// SIG undefined prepareLockedAxes(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ImmediatePhysics::ConstraintHelper::prepareLockedAxes
               (longlong param_1,float *param_2,undefined8 param_3,uint *param_4,uint param_5,
               uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (param_6 != 0) {
    local_108 = -*param_2;
    local_104 = -param_2[1];
    local_100 = -param_2[2];
    local_fc = param_2[3];
    physx::PxQuat::operator*(&local_108,&local_f8);
    computeJacobianAxes(&local_e8,param_2,param_3);
    if ((param_6 & 1) != 0) {
      *(undefined2 *)((longlong)puVar6 + 0x4e) = 0x400;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(float *)(puVar6 + 3) = local_e0;
      *(float *)(puVar6 + 2) = local_e8;
      *(float *)((longlong)puVar6 + 0x14) = local_e4;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 5) = 0;
      *(float *)(puVar6 + 7) = local_e0;
      *(float *)(puVar6 + 6) = local_e8;
      *(float *)((longlong)puVar6 + 0x34) = local_e4;
      *(uint *)((longlong)puVar6 + 0xc) = local_f8 ^ 0x80000000;
      puVar6 = puVar6 + 10;
    }
    if ((param_6 & 2) != 0) {
      *(undefined2 *)((longlong)puVar6 + 0x4e) = 0x400;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(float *)(puVar6 + 3) = local_d4;
      *(float *)(puVar6 + 2) = local_dc;
      *(float *)((longlong)puVar6 + 0x14) = local_d8;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 5) = 0;
      *(float *)(puVar6 + 7) = local_d4;
      *(float *)(puVar6 + 6) = local_dc;
      *(float *)((longlong)puVar6 + 0x34) = local_d8;
      *(uint *)((longlong)puVar6 + 0xc) = local_f4 ^ 0x80000000;
      puVar6 = puVar6 + 10;
    }
    if ((param_6 & 4) != 0) {
      *(undefined2 *)((longlong)puVar6 + 0x4e) = 0x400;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(float *)(puVar6 + 3) = local_c8;
      *(float *)(puVar6 + 2) = local_d0;
      *(float *)((longlong)puVar6 + 0x14) = local_cc;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 5) = 0;
      *(float *)(puVar6 + 7) = local_c8;
      *(float *)(puVar6 + 6) = local_d0;
      *(float *)((longlong)puVar6 + 0x34) = local_cc;
      *(uint *)((longlong)puVar6 + 0xc) = local_f0 ^ 0x80000000;
      puVar6 = puVar6 + 10;
    }
  }
  if (param_5 != 0) {
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    fVar3 = param_2[3];
    fVar4 = *param_2;
    fVar8 = fVar2 + fVar2;
    local_d8 = (fVar1 + fVar1) * fVar1;
    fVar7 = fVar4 + fVar4;
    local_dc = (fVar1 + fVar1) * fVar3;
    local_e0 = fVar7 * fVar1 - fVar8 * fVar3;
    local_e8 = (1.0 - fVar8 * fVar2) - local_d8;
    local_c8 = 1.0 - fVar4 * fVar7;
    local_d0 = fVar8 * fVar3 + fVar7 * fVar1;
    local_e4 = local_dc + fVar7 * fVar2;
    local_dc = fVar7 * fVar2 - local_dc;
    local_d4 = fVar8 * fVar1 + fVar7 * fVar3;
    local_cc = fVar8 * fVar1 - fVar7 * fVar3;
    local_d8 = local_c8 - local_d8;
    local_c8 = local_c8 - fVar8 * fVar2;
    if ((param_5 & 1) != 0) {
      local_118 = puVar6;
      linear(param_1,&local_e8,*param_4 ^ 0x80000000,0x400);
      puVar6 = puVar6 + 10;
    }
    if ((param_5 & 2) != 0) {
      local_118 = puVar6;
      linear(param_1,&local_dc,param_4[1] ^ 0x80000000,0x400);
      puVar6 = puVar6 + 10;
    }
    if ((param_5 & 4) != 0) {
      local_118 = puVar6;
      linear(param_1,&local_d0,param_4[2] ^ 0x80000000,0x400);
      puVar6 = puVar6 + 10;
    }
  }
  for (puVar5 = *(undefined8 **)(param_1 + 8); puVar5 < puVar6; puVar5 = puVar5 + 10) {
    *(undefined2 *)((longlong)puVar5 + 0x4c) = 0x10;
  }
  *(undefined8 **)(param_1 + 8) = puVar6;
  return;
}



// FUNCTION 14095ace0 quarterAnglePair body=362 status=ok
// SIG undefined quarterAnglePair(void)

void ImmediatePhysics::ConstraintHelper::quarterAnglePair
               (longlong param_1,float param_2,float param_3,float param_4,float param_5,
               uint *param_6,longlong param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if ((*(float *)(param_7 + 0xc) <= 0.0) && (*(float *)(param_7 + 8) <= 0.0)) {
    fVar5 = param_5;
  }
  if (param_2 < param_3 + fVar5) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    uVar1 = *param_6;
    uVar2 = param_6[1];
    uVar3 = param_6[2];
    *(undefined8 **)(param_1 + 8) = puVar4 + 10;
    *(undefined2 *)((longlong)puVar4 + 0x4e) = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(uint *)(puVar4 + 2) = uVar1 ^ 0x80000000;
    *(uint *)((longlong)puVar4 + 0x14) = uVar2 ^ 0x80000000;
    *(uint *)(puVar4 + 3) = uVar3 ^ 0x80000000;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(uint *)(puVar4 + 6) = uVar1 ^ 0x80000000;
    *(uint *)((longlong)puVar4 + 0x34) = uVar2 ^ 0x80000000;
    *(uint *)(puVar4 + 7) = uVar3 ^ 0x80000000;
    *(float *)((longlong)puVar4 + 0xc) = (param_3 - param_2) * -4.0;
    addLimit(0x80000000,puVar4,param_7);
  }
  if (param_4 - fVar5 < param_2) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar4 + 10;
    *(undefined2 *)((longlong)puVar4 + 0x4e) = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(uint *)(puVar4 + 2) = *param_6;
    *(uint *)((longlong)puVar4 + 0x14) = param_6[1];
    *(uint *)(puVar4 + 3) = param_6[2];
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(uint *)(puVar4 + 6) = *param_6;
    *(uint *)((longlong)puVar4 + 0x34) = param_6[1];
    *(uint *)(puVar4 + 7) = param_6[2];
    *(float *)((longlong)puVar4 + 0xc) = (param_4 - param_2) * 4.0;
    addLimit(param_1,puVar4,param_7);
  }
  return;
}



// FUNCTION 14095ae50 recordContacts body=821 status=ok
// SIG undefined recordContacts(void)

undefined8
ImmediatePhysics::FContactPointRecorder::recordContacts
          (longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  int iVar15;
  undefined4 uVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 uVar19;
  float *pfVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  pfVar17 = *(float **)(param_1 + 0x18);
  pfVar18 = *(float **)(param_1 + 0x10);
  lVar23 = *(longlong *)(param_1 + 8);
  uVar12 = *(undefined4 *)(param_1 + 0x28);
  fVar2 = *pfVar17;
  fVar27 = *pfVar18;
  uVar19 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined4 *)(lVar23 + 0x98);
  uVar24 = (ulonglong)param_3;
  pfVar20 = pfVar17;
  if ((int)pfVar17[3] <= (int)pfVar18[3]) {
    pfVar20 = pfVar18;
  }
  fVar14 = pfVar20[3];
  if (fVar14 == 0.0) {
    fVar27 = (fVar27 + fVar2) * 0.5;
  }
  else if (fVar14 == 1.4013e-45) {
    if (fVar2 <= fVar27) {
      fVar27 = fVar2;
    }
  }
  else if (fVar14 == 2.8026e-45) {
    fVar27 = fVar27 * fVar2;
  }
  else if (fVar14 == 4.2039e-45) {
    if (fVar27 <= fVar2) {
      fVar27 = fVar2;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar2 = pfVar17[1];
  fVar26 = pfVar18[1];
  if (fVar14 == 0.0) {
    fVar26 = (fVar26 + fVar2) * 0.5;
  }
  else if (fVar14 == 1.4013e-45) {
    if (fVar2 <= fVar26) {
      fVar26 = fVar2;
    }
  }
  else if (fVar14 == 2.8026e-45) {
    fVar26 = fVar26 * fVar2;
  }
  else if (fVar14 == 4.2039e-45) {
    if (fVar26 <= fVar2) {
      fVar26 = fVar2;
    }
  }
  else {
    fVar26 = 0.0;
  }
  fVar2 = pfVar17[2];
  fVar3 = pfVar18[2];
  if (fVar14 == 0.0) {
    fVar25 = (fVar3 + fVar2) * 0.5;
  }
  else if (fVar14 == 1.4013e-45) {
    fVar25 = fVar3;
    if (fVar2 <= fVar3) {
      fVar25 = fVar2;
    }
  }
  else if (fVar14 == 2.8026e-45) {
    fVar25 = fVar3 * fVar2;
  }
  else {
    fVar25 = 0.0;
    if ((fVar14 == 4.2039e-45) && (fVar25 = fVar3, fVar3 <= fVar2)) {
      fVar25 = fVar2;
    }
  }
  if (param_3 != 0) {
    puVar22 = (undefined4 *)(param_2 + 0x18);
    do {
      lVar23 = *(longlong *)(param_1 + 8);
      uVar4 = puVar22[-6];
      uVar5 = puVar22[-5];
      uVar6 = puVar22[-4];
      iVar15 = *(int *)(lVar23 + 0x98);
      uVar7 = puVar22[-3];
      uVar8 = puVar22[-2];
      uVar9 = puVar22[-1];
      uVar10 = *puVar22;
      uVar11 = *(undefined2 *)((longlong)puVar22 + 0x1a);
      uVar16 = puVar22[7];
      *(int *)(lVar23 + 0x98) = iVar15 + 1;
      if (*(int *)(lVar23 + 0x9c) < iVar15 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar23 + 0x90,iVar15);
      }
      puVar22 = puVar22 + 0x10;
      puVar21 = (undefined4 *)((longlong)iVar15 * 0x40 + *(longlong *)(lVar23 + 0x90));
      *puVar21 = uVar4;
      puVar21[1] = uVar5;
      puVar21[2] = uVar6;
      puVar21[3] = uVar7;
      puVar21[4] = uVar8;
      puVar21[5] = uVar9;
      puVar21[6] = uVar10;
      *(undefined8 *)(puVar21 + 7) = 0x7f7fffff;
      *(undefined8 *)(puVar21 + 9) = 0;
      puVar21[0xb] = fVar27;
      puVar21[0xe] = fVar26;
      puVar21[0xf] = fVar25;
      *(undefined1 *)(puVar21 + 0xc) = 0;
      *(undefined2 *)((longlong)puVar21 + 0x32) = uVar11;
      puVar21[0xd] = uVar16;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    lVar23 = *(longlong *)(param_1 + 8);
  }
  iVar15 = *(int *)(lVar23 + 0x160);
  *(int *)(lVar23 + 0x160) = iVar15 + 1;
  if (*(int *)(lVar23 + 0x164) < iVar15 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
              (lVar23 + 0x158,iVar15);
  }
  lVar23 = *(longlong *)(lVar23 + 0x158);
  puVar1 = (undefined8 *)(lVar23 + (longlong)iVar15 * 0x14);
  *puVar1 = uVar19;
  puVar1[1] = CONCAT44(param_3,uVar13);
  *(undefined4 *)(lVar23 + 0x10 + (longlong)iVar15 * 0x14) = uVar12;
  return CONCAT71((int7)((ulonglong)lVar23 >> 8),1);
}



// FUNCTION 14095b190 FUN_14095b190 body=47 status=ok
// SIG undefined FUN_14095b190(void)

longlong FUN_14095b190(void)

{
  if (DAT_146863cc0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146863cc0,&PTR_s__Script_ImmediatePhysics_144168180);
  }
  return DAT_146863cc0;
}



// FUNCTION 14095b1c0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x5c0;
    *puVar1 = &PTR_FUN_144168068;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 14095b200 operator= body=502 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::operator=
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
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14095b35b;
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
LAB_14095b35b:
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
        FUN_14058c900(param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 14095b400 FUN_14095b400 body=2583 status=ok
// SIG undefined FUN_14095b400(void)

longlong FUN_14095b400(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  void *pvVar14;
  longlong *plVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  
  puVar9 = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (puVar9 != (undefined8 *)(param_2 + 0x10)) {
    iVar16 = *(int *)(param_2 + 0x18);
    pvVar3 = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(puVar9,iVar16);
      _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar3,(longlong)iVar16 * 0x68);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar8;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar8 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar8;
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  uVar6 = *(undefined4 *)(param_2 + 0xf0);
  uVar7 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined4 *)(param_1 + 0xf0) = uVar6;
  *(undefined4 *)(param_1 + 0xf4) = uVar7;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  if (plVar1 != (longlong *)(param_2 + 0x108)) {
    iVar16 = *(int *)(param_2 + 0x110);
    lVar4 = *(longlong *)(param_2 + 0x108);
    *(int *)(param_1 + 0x110) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x114) == 0)) {
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    else {
      TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(plVar1,iVar16);
      puVar10 = (undefined4 *)*plVar1;
      if (iVar16 != 0) {
        puVar9 = (undefined8 *)(lVar4 + 0x30);
        puVar12 = (undefined8 *)(puVar10 + 0xc);
        do {
          *puVar10 = *(undefined4 *)(puVar9 + -6);
          puVar10 = puVar10 + 0x10;
          uVar8 = puVar9[-3];
          puVar12[-4] = puVar9[-4];
          puVar12[-3] = uVar8;
          uVar8 = puVar9[-1];
          puVar12[-2] = puVar9[-2];
          puVar12[-1] = uVar8;
          uVar8 = puVar9[1];
          *puVar12 = *puVar9;
          puVar12[1] = uVar8;
          iVar16 = iVar16 + -1;
          puVar9 = puVar9 + 8;
          puVar12 = puVar12 + 8;
        } while (iVar16 != 0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  plVar1 = (longlong *)(param_1 + 0x1c8);
  *(undefined1 *)(param_1 + 0x119) = *(undefined1 *)(param_2 + 0x119);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  uVar8 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar8;
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x184) = *(undefined1 *)(param_2 + 0x184);
  *(undefined1 *)(param_1 + 0x185) = *(undefined1 *)(param_2 + 0x185);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  uVar5 = *(undefined4 *)(param_2 + 0x194);
  uVar6 = *(undefined4 *)(param_2 + 0x198);
  uVar7 = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = uVar5;
  *(undefined4 *)(param_1 + 0x198) = uVar6;
  *(undefined4 *)(param_1 + 0x19c) = uVar7;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1b1) = *(undefined1 *)(param_2 + 0x1b1);
  *(undefined1 *)(param_1 + 0x1b2) = *(undefined1 *)(param_2 + 0x1b2);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  if (plVar1 != (longlong *)(param_2 + 0x1c8)) {
    iVar16 = *(int *)(param_1 + 0x1d0);
    if (iVar16 != 0) {
      plVar15 = (longlong *)(*plVar1 + 0x10);
      do {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar16 = *(int *)(param_2 + 0x1d0);
    lVar4 = *(longlong *)(param_2 + 0x1c8);
    *(int *)(param_1 + 0x1d0) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x1d4) == 0)) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
    else {
      TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(plVar1,iVar16);
      puVar10 = (undefined4 *)*plVar1;
      if (iVar16 != 0) {
        puVar17 = (undefined4 *)(lVar4 + 4);
        puVar13 = puVar10 + 7;
        do {
          *puVar10 = puVar17[-1];
          puVar13[-6] = *puVar17;
          puVar13[-5] = puVar17[1];
          *(undefined8 *)(puVar13 + -3) = 0;
          iVar2 = puVar17[5];
          pvVar3 = *(void **)(puVar17 + 3);
          puVar13[-1] = iVar2;
          if (iVar2 == 0) {
            *puVar13 = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(puVar13 + -3,iVar2,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar13 + -3),pvVar3,(longlong)iVar2 << 2);
          }
          puVar10 = puVar10 + 8;
          puVar13 = puVar13 + 8;
          puVar17 = puVar17 + 8;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
    }
  }
  puVar9 = (undefined8 *)(param_1 + 0x1d8);
  if (puVar9 != (undefined8 *)(param_2 + 0x1d8)) {
    iVar16 = *(int *)(param_2 + 0x1e0);
    pvVar3 = *(void **)(param_2 + 0x1d8);
    *(int *)(param_1 + 0x1e0) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x1e4) == 0)) {
      *(undefined4 *)(param_1 + 0x1e4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar9,iVar16);
      _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar3,(longlong)iVar16 << 3);
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x1e8,param_2 + 0x1e8);
  plVar1 = (longlong *)(param_1 + 0x1f8);
  if (plVar1 != (longlong *)(param_2 + 0x1f8)) {
    iVar16 = *(int *)(param_2 + 0x200);
    lVar4 = *(longlong *)(param_2 + 0x1f8);
    *(int *)(param_1 + 0x200) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x204) == 0)) {
      *(undefined4 *)(param_1 + 0x204) = 0;
    }
    else {
      TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(plVar1,iVar16);
      puVar18 = (undefined1 *)*plVar1;
      if (iVar16 != 0) {
        puVar10 = (undefined4 *)(lVar4 + 0x30);
        puVar13 = (undefined4 *)(puVar18 + 0x30);
        do {
          *puVar18 = *(undefined1 *)(puVar10 + -0xc);
          puVar18 = puVar18 + 0x40;
          *(undefined1 *)((longlong)puVar13 + -0x2f) = *(undefined1 *)((longlong)puVar10 + -0x2f);
          uVar8 = *(undefined8 *)(puVar10 + -6);
          *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar10 + -8);
          *(undefined8 *)(puVar13 + -6) = uVar8;
          uVar8 = *(undefined8 *)(puVar10 + -2);
          *(undefined8 *)(puVar13 + -4) = *(undefined8 *)(puVar10 + -4);
          *(undefined8 *)(puVar13 + -2) = uVar8;
          uVar5 = puVar10[1];
          uVar6 = puVar10[2];
          uVar7 = puVar10[3];
          *puVar13 = *puVar10;
          puVar13[1] = uVar5;
          puVar13[2] = uVar6;
          puVar13[3] = uVar7;
          iVar16 = iVar16 + -1;
          puVar10 = puVar10 + 0x10;
          puVar13 = puVar13 + 0x10;
        } while (iVar16 != 0);
      }
    }
  }
  puVar9 = (undefined8 *)(param_1 + 0x208);
  if (puVar9 != (undefined8 *)(param_2 + 0x208)) {
    iVar16 = *(int *)(param_2 + 0x210);
    pvVar3 = *(void **)(param_2 + 0x208);
    *(int *)(param_1 + 0x210) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x214) == 0)) {
      *(undefined4 *)(param_1 + 0x214) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar9,iVar16);
      _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar3,(longlong)iVar16 << 3);
    }
  }
  puVar9 = (undefined8 *)(param_1 + 0x218);
  if (puVar9 != (undefined8 *)(param_2 + 0x218)) {
    iVar16 = *(int *)(param_2 + 0x220);
    pvVar3 = *(void **)(param_2 + 0x218);
    *(int *)(param_1 + 0x220) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x224) == 0)) {
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
    else {
      TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy(puVar9,iVar16);
      _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar3,(longlong)iVar16 * 0x24);
    }
  }
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0x228,param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  pvVar3 = (void *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  uVar8 = *(undefined8 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x298) = uVar8;
  uVar5 = *(undefined4 *)(param_2 + 0x2a4);
  uVar6 = *(undefined4 *)(param_2 + 0x2a8);
  uVar7 = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2a4) = uVar5;
  *(undefined4 *)(param_1 + 0x2a8) = uVar6;
  *(undefined4 *)(param_1 + 0x2ac) = uVar7;
  uVar8 = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c8) = uVar8;
  uVar5 = *(undefined4 *)(param_2 + 0x2d4);
  uVar6 = *(undefined4 *)(param_2 + 0x2d8);
  uVar7 = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = uVar5;
  *(undefined4 *)(param_1 + 0x2d8) = uVar6;
  *(undefined4 *)(param_1 + 0x2dc) = uVar7;
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined1 *)(param_1 + 0x2f0) = *(undefined1 *)(param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x2f1) = *(undefined1 *)(param_2 + 0x2f1);
  *(undefined1 *)(param_1 + 0x2f2) = *(undefined1 *)(param_2 + 0x2f2);
  *(undefined1 *)(param_1 + 0x2f3) = *(undefined1 *)(param_2 + 0x2f3);
  *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)(param_2 + 0x2f4);
  *(undefined1 *)(param_1 + 0x2f5) = *(undefined1 *)(param_2 + 0x2f5);
  *(undefined1 *)(param_1 + 0x2f6) = *(undefined1 *)(param_2 + 0x2f6);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined1 *)(param_1 + 0x2fc) = *(undefined1 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined1 *)(param_1 + 0x304) = *(undefined1 *)(param_2 + 0x304);
  *(undefined1 *)(param_1 + 0x305) = *(undefined1 *)(param_2 + 0x305);
  if (pvVar3 != (void *)(param_2 + 0x308)) {
    iVar16 = *(int *)(param_2 + 0x330);
    pvVar14 = *(void **)(param_2 + 0x328);
    *(int *)(param_1 + 0x330) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x334) == 0)) {
      *(undefined4 *)(param_1 + 0x334) = 0;
    }
    else {
      TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(pvVar3,iVar16);
      if (pvVar14 == (void *)0x0) {
        pvVar14 = (void *)(param_2 + 0x308);
      }
      pvVar11 = *(void **)(param_1 + 0x328);
      if (*(void **)(param_1 + 0x328) == (void *)0x0) {
        pvVar11 = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar11,pvVar14,(longlong)iVar16 << 2);
    }
  }
  pvVar3 = (void *)(param_1 + 0x338);
  if (pvVar3 != (void *)(param_2 + 0x338)) {
    iVar16 = *(int *)(param_2 + 0x350);
    pvVar14 = *(void **)(param_2 + 0x348);
    *(int *)(param_1 + 0x350) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x354) == 0)) {
      *(undefined4 *)(param_1 + 0x354) = 0;
    }
    else {
      TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy(pvVar3,iVar16);
      if (pvVar14 == (void *)0x0) {
        pvVar14 = (void *)(param_2 + 0x338);
      }
      pvVar11 = *(void **)(param_1 + 0x348);
      if (*(void **)(param_1 + 0x348) == (void *)0x0) {
        pvVar11 = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar11,pvVar14,(longlong)iVar16 << 2);
    }
  }
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x358);
  uVar5 = *(undefined4 *)(param_2 + 0x364);
  uVar6 = *(undefined4 *)(param_2 + 0x368);
  uVar7 = *(undefined4 *)(param_2 + 0x36c);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x360);
  *(undefined4 *)(param_1 + 0x364) = uVar5;
  *(undefined4 *)(param_1 + 0x368) = uVar6;
  *(undefined4 *)(param_1 + 0x36c) = uVar7;
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x370);
  FUN_14084daa0(param_1 + 0x378,param_2 + 0x378);
  TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 0x4a0,param_2 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0x4b0);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
            (param_1 + 0x4b8,param_2 + 0x4b8);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
            (param_1 + 0x4c8,param_2 + 0x4c8);
  TArray<int,FDefaultAllocator>::operator=(param_1 + 0x4d8,param_2 + 0x4d8);
  TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 0x4e8,param_2 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_2 + 0x4f8);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
            (param_1 + 0x500,param_2 + 0x500);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
            (param_1 + 0x510,param_2 + 0x510);
  TArray<int,FDefaultAllocator>::operator=(param_1 + 0x520,param_2 + 0x520);
  puVar9 = (undefined8 *)(param_1 + 0x530);
  if (puVar9 != (undefined8 *)(param_2 + 0x530)) {
    iVar16 = *(int *)(param_2 + 0x538);
    pvVar3 = *(void **)(param_2 + 0x530);
    *(int *)(param_1 + 0x538) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x53c) == 0)) {
      *(undefined4 *)(param_1 + 0x53c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar9,iVar16);
      _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar3,(longlong)iVar16 << 3);
    }
  }
  *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_2 + 0x540);
  *(undefined2 *)(param_1 + 0x548) = *(undefined2 *)(param_2 + 0x548);
  *(undefined1 *)(param_1 + 0x54a) = *(undefined1 *)(param_2 + 0x54a);
  uVar8 = *(undefined8 *)(param_2 + 0x558);
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_2 + 0x550);
  *(undefined8 *)(param_1 + 0x558) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x568);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_2 + 0x560);
  *(undefined8 *)(param_1 + 0x568) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x578);
  *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_2 + 0x570);
  *(undefined8 *)(param_1 + 0x578) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x588);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_2 + 0x580);
  *(undefined8 *)(param_1 + 0x588) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x598);
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_2 + 0x590);
  *(undefined8 *)(param_1 + 0x598) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x5a8);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5a8) = uVar8;
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_2 + 0x5b0);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined1 *)(param_1 + 0x5bc) = *(undefined1 *)(param_2 + 0x5bc);
  *(undefined1 *)(param_1 + 0x5bd) = *(undefined1 *)(param_2 + 0x5bd);
  *(undefined1 *)(param_1 + 0x5be) = *(undefined1 *)(param_2 + 0x5be);
  return param_1;
}



// FUNCTION 14095be20 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
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



// FUNCTION 14095bee0 FUN_14095bee0 body=74 status=ok
// SIG undefined FUN_14095bee0(void)

undefined1 FUN_14095bee0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14095b400(param_2 + param_3,param_3);
      param_3 = param_3 + 0x5c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14095bf30 ESimulationSpace_StaticEnum body=85 status=ok
// SIG undefined ESimulationSpace_StaticEnum(void)

void ESimulationSpace_StaticEnum(void)

{
  if (DAT_146863c70 == 0) {
    if (DAT_146863cc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146863cc0,&PTR_s__Script_ImmediatePhysics_144168180);
    }
    DAT_146863c70 = GetStaticEnum(FUN_14095c060,DAT_146863cc0,L"ESimulationSpace");
  }
  return;
}



// FUNCTION 14095bf90 FUN_14095bf90 body=6 status=ok
// SIG undefined FUN_14095bf90(void)

undefined8 FUN_14095bf90(void)

{
  return 0xb67d8833;
}



// FUNCTION 14095bfe0 FUN_14095bfe0 body=113 status=ok
// SIG undefined FUN_14095bfe0(void)

void FUN_14095bfe0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863cb0 == 0) {
    if (DAT_146863cc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146863cc0,&PTR_s__Script_ImmediatePhysics_144168180);
    }
    lVar1 = DAT_146863cc0;
    uVar2 = FUN_14095bf90();
    DAT_146863cb0 = GetStaticStruct(FUN_14095c090,lVar1,L"AnimNode_RigidBody",0x5c0,uVar2);
  }
  return;
}



// FUNCTION 14095c060 FUN_14095c060 body=47 status=ok
// SIG undefined FUN_14095c060(void)

longlong FUN_14095c060(void)

{
  if (DAT_146863ca8 == 0) {
    FUN_1417866a0(&DAT_146863ca8,&PTR_FUN_146289620);
  }
  return DAT_146863ca8;
}



// FUNCTION 14095c090 FUN_14095c090 body=47 status=ok
// SIG undefined FUN_14095c090(void)

longlong FUN_14095c090(void)

{
  if (DAT_146863cb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863cb8,&PTR_FUN_146289aa0);
  }
  return DAT_146863cb8;
}



// FUNCTION 14095c0c0 FUN_14095c0c0 body=813 status=ok
// SIG undefined FUN_14095c0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14095c0c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  PxInitVehicleSDK(DAT_146b08400,0);
  physx::PxVehicleSetSweepHitRejectionAngles(0x3fbde44e,0x3fbde44e);
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0x3f800000;
  physx::PxVehicleSetBasisVectors(&local_2c,&local_38);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_1;
    *plVar2 = (longlong)&DAT_143f3ed00;
    plVar2[2] = (longlong)&LAB_14096b4b0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  uVar5 = 0;
  if (plVar2 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465349e0,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1465349e8;
    lVar3 = (longlong)DAT_1465349e8;
    uVar5 = *puVar4;
    DAT_1465349e8 = DAT_1465349e8 + 1;
    if (DAT_1465349ec < DAT_1465349e8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465349e0,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1465349e0);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_1;
    *plVar2 = (longlong)&DAT_143f3ed00;
    plVar2[2] = (longlong)FUN_140966b50;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  uVar5 = 0;
  if (plVar2 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465349f8,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_146534a00;
    lVar3 = (longlong)DAT_146534a00;
    uVar5 = *puVar4;
    DAT_146534a00 = DAT_146534a00 + 1;
    if (DAT_146534a04 < DAT_146534a00) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465349f8,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1465349f8);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&DAT_143f3ed00;
    plVar2[1] = param_1;
    plVar2[2] = (longlong)FUN_1409669e0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  uVar5 = 0;
  if (plVar2 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146534a10,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_146534a18;
    lVar3 = (longlong)DAT_146534a18;
    uVar5 = *puVar4;
    DAT_146534a18 = DAT_146534a18 + 1;
    if (DAT_146534a1c < DAT_146534a18) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146534a10,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146534a10);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  *plVar2 = (longlong)&DAT_143f3ed00;
  plVar2[1] = param_1;
  plVar2[2] = (longlong)FUN_140966a10;
  lVar3 = FDelegateHandle::GenerateNewID();
  plVar2[4] = lVar3;
  *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146534a28,1);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
  iVar1 = DAT_146534a30;
  lVar3 = (longlong)DAT_146534a30;
  uVar5 = *puVar4;
  DAT_146534a30 = DAT_146534a30 + 1;
  if (DAT_146534a34 < DAT_146534a30) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146534a28,iVar1);
  }
  puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_146534a28);
  *puVar4 = plVar2;
  *(undefined4 *)(puVar4 + 1) = 3;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  return;
}



// FUNCTION 14095c3f0 ShutdownModule body=693 status=ok
// SIG undefined ShutdownModule(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FPhysXVehiclesPlugin::ShutdownModule(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar7 = 0;
  uVar6 = uVar7;
  uVar10 = uVar7;
  iVar4 = DAT_1465349e8;
  if (0 < DAT_1465349e8) {
    do {
      plVar9 = (longlong *)(DAT_1465349e0 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1465349e8, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_1465349e8;
        }
        break;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar8 < iVar4);
  }
  if (DAT_1465349f4 < 1) {
    uVar6 = uVar7;
    uVar10 = uVar7;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar10 + 8 + DAT_1465349e0) == 0) ||
            (*(longlong **)(uVar10 + DAT_1465349e0) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar10 + DAT_1465349e0) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465349e0,uVar6,1,1);
        }
        else {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar10 = uVar10 + 0x10;
        }
        iVar5 = DAT_1465349e8;
      } while ((int)uVar6 < DAT_1465349e8);
    }
    _DAT_1465349f0 = iVar5 * 2;
    if (_DAT_1465349f0 < 3) {
      _DAT_1465349f0 = 2;
    }
    if ((_DAT_1465349f0 < iVar4) && (DAT_1465349ec != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465349e0);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar6 = uVar7;
  uVar10 = uVar7;
  iVar4 = DAT_146534a00;
  if (0 < DAT_146534a00) {
    do {
      plVar9 = (longlong *)(DAT_1465349f8 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_146534a00, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_146534a00;
        }
        break;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar8 < iVar4);
  }
  if (DAT_146534a0c < 1) {
    uVar6 = uVar7;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar7 + 8 + DAT_1465349f8) == 0) ||
            (*(longlong **)(uVar7 + DAT_1465349f8) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar7 + DAT_1465349f8) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465349f8,uVar6,1,1);
        }
        else {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 0x10;
        }
        iVar5 = DAT_146534a00;
      } while ((int)uVar6 < DAT_146534a00);
    }
    _DAT_146534a08 = iVar5 * 2;
    if (_DAT_146534a08 < 3) {
      _DAT_146534a08 = 2;
    }
    if ((_DAT_146534a08 < iVar4) && (DAT_146534a04 != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465349f8);
    }
  }
  TBaseMulticastDelegate<void>::Remove(&DAT_146534a10,*(undefined8 *)(param_1 + 0x18));
  TBaseMulticastDelegate<void>::Remove(&DAT_146534a28,*(undefined8 *)(param_1 + 0x20));
  if (DAT_146b08400 == 0) {
    return;
  }
  PxCloseVehicleSDK(0);
  return;
}



// FUNCTION 14095c6b0 FUN_14095c6b0 body=670 status=ok
// SIG undefined FUN_14095c6b0(void)

longlong FUN_14095c6b0(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_14095c8b1;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_14095c8b1;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_14095c8b1:
  plVar4 = (longlong *)UNodeMappingContainer::StaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = UNodeMappingContainer::StaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 14095c950 FUN_14095c950 body=18 status=ok
// SIG undefined FUN_14095c950(void)

undefined8 FUN_14095c950(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 9)) {
    return *(undefined8 *)(param_1 + 2);
  }
  return 0;
}



// FUNCTION 14095c970 FUN_14095c970 body=417 status=ok
// SIG undefined FUN_14095c970(void)

void FUN_14095c970(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar10 = iVar7;
joined_r0x00014095c99a:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar8 * 4 + 10) <
              *(int *)(param_1 + (longlong)iVar9 * 4 + 2)) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 4;
        puVar11 = param_1 + (longlong)iVar9 * 4;
        if (*(int *)(puVar12 + 2) < *(int *)(puVar11 + 2)) {
          if (puVar12 != puVar11) {
            uVar2 = puVar11[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar12 = *puVar11;
            puVar12[1] = uVar2;
            uVar2 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar2;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x00014095c99a;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar11) {
        uVar2 = puVar11[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar11;
        param_1[1] = uVar2;
        uVar2 = puVar11[3];
        param_1[2] = puVar11[2];
        param_1[3] = uVar2;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar1 * 4 + 10) <
                *(int *)(param_1 + (longlong)iVar8 * 4 + 2)) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 4;
          puVar12 = param_1 + (longlong)iVar8 * 4;
          if (*(int *)(puVar12 + 2) <= *(int *)(puVar13 + 2)) break;
          if (puVar13 != puVar12) {
            uVar2 = puVar12[1];
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar2;
            uVar2 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar2;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14095cb20 FUN_14095cb20 body=705 status=ok
// SIG undefined FUN_14095cb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14095cb20(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar22 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
    local_318 = (undefined4)(longlong)(fVar22 + fVar22);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar16 = &local_328;
    do {
      puVar21 = (undefined8 *)*plVar16;
      puVar19 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_338._0_4_ = (int)lVar1;
      lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
      puVar20 = puVar21;
      if ((int)local_338 != 0) {
LAB_14095cbf0:
        if (8 < lVar14) {
          puVar21 = puVar20 + (lVar14 / 2) * 4;
          if (puVar21 != puVar20) {
            uVar2 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar3 = *(undefined4 *)(puVar20 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar5 = *(undefined4 *)puVar21;
            uVar6 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar7 = *(undefined4 *)(puVar21 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar10 = puVar21[2];
            uVar11 = puVar21[3];
            *(undefined4 *)puVar21 = *(undefined4 *)puVar20;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar2;
            *(undefined4 *)(puVar21 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar4;
            uVar9 = puVar20[3];
            puVar21[2] = puVar20[2];
            puVar21[3] = uVar9;
            *(undefined4 *)puVar20 = uVar5;
            *(undefined4 *)((longlong)puVar20 + 4) = uVar6;
            *(undefined4 *)(puVar20 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar20 + 0xc) = uVar8;
            puVar20[2] = uVar10;
            puVar20[3] = uVar11;
          }
          puVar17 = puVar19 + 4;
          puVar21 = puVar20;
LAB_14095cc40:
          puVar15 = puVar21;
          puVar21 = puVar15 + 4;
          if (puVar21 <= puVar19) goto code_r0x00014095cc49;
          goto LAB_14095cc52;
        }
        for (; puVar17 = puVar20, puVar21 = puVar20, puVar20 < puVar19; puVar19 = puVar19 + -4) {
          while (puVar15 = puVar17, puVar21 = puVar21 + 4, puVar21 <= puVar19) {
            puVar17 = puVar21;
            if (*(int *)(puVar21 + 2) <= *(int *)(puVar15 + 2)) {
              puVar17 = puVar15;
            }
          }
          if (puVar15 != puVar19) {
            uVar9 = puVar19[1];
            uVar10 = *puVar15;
            uVar11 = puVar15[1];
            uVar12 = puVar15[2];
            uVar13 = puVar15[3];
            *puVar15 = *puVar19;
            puVar15[1] = uVar9;
            uVar9 = puVar19[3];
            puVar15[2] = puVar19[2];
            puVar15[3] = uVar9;
            *puVar19 = uVar10;
            puVar19[1] = uVar11;
            puVar19[2] = uVar12;
            puVar19[3] = uVar13;
          }
        }
        goto LAB_14095cd43;
      }
LAB_14095cd34:
      local_338 = lVar1;
      FUN_14095c970(puVar21,lVar14,param_3,param_4);
LAB_14095cd43:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x00014095cc49:
  if (*(int *)(puVar15 + 6) <= *(int *)(puVar20 + 2)) goto LAB_14095cc40;
LAB_14095cc52:
  do {
    puVar18 = puVar17;
    puVar17 = puVar18 + -4;
    if (puVar17 <= puVar20) break;
  } while (*(int *)(puVar20 + 2) <= *(int *)(puVar18 + -2));
  if (puVar21 <= puVar17) {
    if (puVar21 != puVar17) {
      uVar2 = *(undefined4 *)((longlong)puVar18 + -0x1c);
      uVar3 = *(undefined4 *)(puVar18 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar18 + -0x14);
      uVar5 = *(undefined4 *)puVar21;
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar7 = *(undefined4 *)(puVar15 + 5);
      uVar8 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      *(undefined4 *)puVar21 = *(undefined4 *)puVar17;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar2;
      *(undefined4 *)(puVar15 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar4;
      uVar9 = puVar18[-1];
      puVar15[6] = puVar18[-2];
      puVar15[7] = uVar9;
      *(undefined4 *)puVar17 = uVar5;
      *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar6;
      *(undefined4 *)(puVar18 + -3) = uVar7;
      *(undefined4 *)((longlong)puVar18 + -0x14) = uVar8;
      puVar18[-2] = uVar10;
      puVar18[-1] = uVar11;
    }
    goto LAB_14095cc40;
  }
  if (puVar20 != puVar17) {
    uVar2 = *(undefined4 *)((longlong)puVar18 + -0x1c);
    uVar3 = *(undefined4 *)(puVar18 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar18 + -0x14);
    uVar5 = *(undefined4 *)puVar20;
    uVar6 = *(undefined4 *)((longlong)puVar20 + 4);
    uVar7 = *(undefined4 *)(puVar20 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar20 + 0xc);
    uVar10 = puVar20[2];
    uVar11 = puVar20[3];
    *(undefined4 *)puVar20 = *(undefined4 *)puVar17;
    *(undefined4 *)((longlong)puVar20 + 4) = uVar2;
    *(undefined4 *)(puVar20 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar20 + 0xc) = uVar4;
    uVar9 = puVar18[-1];
    puVar20[2] = puVar18[-2];
    puVar20[3] = uVar9;
    *(undefined4 *)puVar17 = uVar5;
    *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar6;
    *(undefined4 *)(puVar18 + -3) = uVar7;
    *(undefined4 *)((longlong)puVar18 + -0x14) = uVar8;
    puVar18[-2] = uVar10;
    puVar18[-1] = uVar11;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar17 + (-0x20 - (longlong)puVar20) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar19 - (longlong)puVar21 & 0xffffffffffffffe0U)) {
    if (puVar21 < puVar19) {
      *plVar16 = (longlong)puVar21;
      plVar16[1] = (longlong)puVar19;
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar17 <= puVar20 + 4) goto LAB_14095cd43;
    puVar19 = puVar18 + -8;
    puVar21 = puVar20;
  }
  else {
    if (puVar20 + 4 < puVar17) {
      *plVar16 = (longlong)puVar20;
      plVar16[1] = (longlong)(puVar18 + -8);
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar19 <= puVar21) goto LAB_14095cd43;
  }
  lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
  puVar20 = puVar21;
  if ((int)local_338 == 0) goto LAB_14095cd34;
  goto LAB_14095cbf0;
}



// FUNCTION 14095cdf0 FUN_14095cdf0 body=325 status=ok
// SIG undefined FUN_14095cdf0(void)

undefined8 * FUN_14095cdf0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1426850b0();
  *param_1 = &PTR_FUN_14416a698;
  param_1[0x8b] = &PTR_LAB_14416aed0;
  uVar4 = DAT_146863d50;
  uVar1 = FUN_142a07000();
  plVar2 = (longlong *)FUN_141752410(param_1,uVar4,uVar1,uVar1,1,0,0);
  param_1[0x98] = plVar2;
  (**(code **)(*plVar2 + 0x640))(plVar2,DAT_146aefc80);
  *(byte *)(param_1[0x98] + 0x3c0) = *(byte *)(param_1[0x98] + 0x3c0) | 8;
  *(byte *)(param_1[0x98] + 0x3c0) = *(byte *)(param_1[0x98] + 0x3c0) | 2;
  *(byte *)(param_1[0x98] + 0x3c0) = *(byte *)(param_1[0x98] + 0x3c0) | 1;
  *(byte *)(param_1[0x98] + 0xb1a) = *(byte *)(param_1[0x98] + 0xb1a) | 8;
  FUN_1423974f0(param_1[0x98],1);
  FUN_14234fe40(param_1[0x98],0);
  param_1[0x2d] = param_1[0x98];
  uVar4 = DAT_146863d48;
  uVar1 = AFGConveyorPoleStackable::GetPrivateStaticClass();
  uVar3 = FUN_14096cb40();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar1,1,0,0);
  param_1[0x99] = uVar4;
  FUN_142350b20(uVar4,1);
  *(undefined8 *)(param_1[0x99] + 0x178) = param_1[0x98];
  return param_1;
}



// FUNCTION 14095cf40 FUN_14095cf40 body=336 status=ok
// SIG undefined FUN_14095cf40(void)

undefined8 * FUN_14095cf40(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144167968;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x10,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41200000;
  param_1[0x1f] = 0x41200000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xbf800000;
  FUN_141f84110(param_1 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *param_1 = &PTR_LAB_14416a560;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 14095d090 FUN_14095d090 body=396 status=ok
// SIG undefined FUN_14095d090(void)

undefined8 * FUN_14095d090(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  longlong local_res10 [2];
  undefined8 *local_res20;
  longlong *local_38;
  undefined8 **local_30;
  
  uVar7 = 0;
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
  local_res10[0] = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd),4000);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FTickFunction::FTickFunction(param_1 + 0x14);
  param_1[0x14] = &PTR__scalar_deleting_destructor__14416bf48;
  param_1[0x20] = 0;
  uVar3 = FUN_1426e2530(local_res10[0],param_3);
  lVar2 = local_res10[0];
  *param_1 = uVar3;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_14096acd0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x20,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = *(int *)(lVar2 + 0x28);
    uVar7 = *puVar6;
    *(int *)(lVar2 + 0x28) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x2c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x20,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x20));
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  local_38 = local_res10;
  param_1[10] = uVar7;
  local_30 = &local_res20;
  local_res20 = param_1;
  FUN_1405c0510(&DAT_146289b00,local_res8,&local_38,0);
  param_1[0x1f] = local_res10[0];
  return param_1;
}



// FUNCTION 14095d220 FUN_14095d220 body=757 status=ok
// SIG undefined FUN_14095d220(void)

undefined4 * FUN_14095d220(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  longlong **pplVar1;
  longlong **pplVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *local_res18;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  pplVar1 = (longlong **)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *pplVar1 = (longlong *)0x0;
  iVar3 = param_1[4];
  iVar4 = *(int *)(param_2 + 0x3c);
  uVar12 = (ulonglong)iVar4;
  param_1[4] = iVar3 + iVar4;
  local_res18 = param_3;
  if ((int)param_1[5] < iVar3 + iVar4) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 2)),0,uVar12 * 0x60);
  iVar3 = param_1[8];
  iVar6 = iVar3 + iVar4;
  param_1[8] = iVar6;
  if ((int)param_1[9] < iVar6) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 6);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 6)),0,uVar12 * 0x60);
  iVar3 = param_1[0xc];
  iVar6 = iVar4 * 8 + iVar3;
  param_1[0xc] = iVar6;
  if ((int)param_1[0xd] < iVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 10);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 10)),0,
             (longlong)(iVar4 * 8) << 6);
  plVar8 = local_res18;
  local_b0 = param_1[8];
  local_e0 = *(undefined8 *)(param_1 + 6);
  local_d8 = *(undefined8 *)(param_1 + 10);
  local_bc = param_1[0xc];
  local_108 = &LAB_14096c280;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_ac = 0;
  plVar7 = (longlong *)(**(code **)(*local_res18 + 0x2a0))(local_res18,&local_118);
  pplVar2 = (longlong **)(param_1 + 0x12);
  if (pplVar2 != &local_res18) {
    plVar5 = *pplVar2;
    *pplVar2 = plVar7;
    plVar7 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x40))();
    }
  }
  local_44 = param_1[4];
  local_80 = *(undefined8 *)(param_1 + 2);
  local_a8 = 0;
  local_98 = &LAB_14096c220;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2a0))(plVar8,&local_a8);
  if (pplVar1 != &local_res18) {
    plVar5 = *pplVar1;
    *pplVar1 = plVar8;
    plVar8 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x40))();
      plVar8 = (longlong *)0x0;
    }
  }
  iVar3 = param_1[0x10];
  param_1[0x10] = iVar3 + iVar4;
  if ((int)param_1[0x11] < iVar3 + iVar4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xe,iVar3);
  }
  puVar10 = (undefined4 *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0xe));
  if (iVar4 != 0) {
    puVar9 = puVar10 + 6;
    do {
      *puVar10 = 0;
      puVar10 = puVar10 + 0x10;
      *(undefined8 *)(puVar9 + -5) = 0;
      *(undefined8 *)(puVar9 + -3) = 0x3f800000;
      *(undefined8 *)(puVar9 + -1) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      puVar9 = puVar9 + 0x10;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 != 0);
  }
  *param_1 = 0xbf800000;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x40))(plVar8);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x40))(plVar7);
  }
  return param_1;
}



// FUNCTION 14095d520 FUN_14095d520 body=53 status=ok
// SIG undefined FUN_14095d520(void)

undefined8 * FUN_14095d520(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14096caa0();
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14095d560 PxVehicleAutoBoxData body=547 status=ok
// SIG undefined PxVehicleAutoBoxData(void)

undefined4 * physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(undefined4 *param_1)

{
  *param_1 = 0x3f266666;
  param_1[0x21] = 0x3f000000;
  param_1[2] = 0x3f266666;
  param_1[0x22] = 0x3f000000;
  param_1[3] = 0x3f266666;
  param_1[0x23] = 0x3f000000;
  param_1[4] = 0x3f266666;
  param_1[0x24] = 0x3f000000;
  param_1[5] = 0x3f266666;
  param_1[0x25] = 0x3f000000;
  param_1[6] = 0x3f266666;
  param_1[0x26] = 0x3f000000;
  param_1[7] = 0x3f266666;
  param_1[0x27] = 0x3f000000;
  param_1[8] = 0x3f266666;
  param_1[0x28] = 0x3f000000;
  param_1[9] = 0x3f266666;
  param_1[0x29] = 0x3f000000;
  param_1[10] = 0x3f266666;
  param_1[0x2a] = 0x3f000000;
  param_1[0xb] = 0x3f266666;
  param_1[0x2b] = 0x3f000000;
  param_1[0xc] = 0x3f266666;
  param_1[0x2c] = 0x3f000000;
  param_1[0xd] = 0x3f266666;
  param_1[0x2d] = 0x3f000000;
  param_1[0xe] = 0x3f266666;
  param_1[0x2e] = 0x3f000000;
  param_1[0xf] = 0x3f266666;
  param_1[0x2f] = 0x3f000000;
  param_1[0x10] = 0x3f266666;
  param_1[0x30] = 0x3f000000;
  param_1[0x11] = 0x3f266666;
  param_1[0x31] = 0x3f000000;
  param_1[0x12] = 0x3f266666;
  param_1[0x32] = 0x3f000000;
  param_1[0x13] = 0x3f266666;
  param_1[0x33] = 0x3f000000;
  param_1[0x14] = 0x3f266666;
  param_1[0x34] = 0x3f000000;
  param_1[0x15] = 0x3f266666;
  param_1[0x35] = 0x3f000000;
  param_1[0x16] = 0x3f266666;
  param_1[0x36] = 0x3f000000;
  param_1[0x17] = 0x3f266666;
  param_1[0x37] = 0x3f000000;
  param_1[0x18] = 0x3f266666;
  param_1[0x38] = 0x3f000000;
  param_1[0x19] = 0x3f266666;
  param_1[0x39] = 0x3f000000;
  param_1[0x1a] = 0x3f266666;
  param_1[0x3a] = 0x3f000000;
  param_1[0x1b] = 0x3f266666;
  param_1[0x3b] = 0x3f000000;
  param_1[0x1c] = 0x3f266666;
  param_1[0x3c] = 0x3f000000;
  param_1[0x1d] = 0x3f266666;
  param_1[0x3d] = 0x3f000000;
  param_1[0x1e] = 0x3f266666;
  param_1[0x3e] = 0x3f000000;
  param_1[0x1f] = 0x3f266666;
  param_1[0x3f] = 0x3f000000;
  param_1[1] = 0x3e19999a;
  param_1[0x20] = 0x40000000;
  return param_1;
}



// FUNCTION 14095d790 PxVehicleEngineData body=176 status=ok
// SIG undefined PxVehicleEngineData(void)

undefined4 * physx::PxVehicleEngineData::PxVehicleEngineData(undefined4 *param_1)

{
  param_1[0x10] = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0x16] = 0x44160000;
  param_1[0x15] = 0x43fa0000;
  param_1[0x17] = 0x3e19999a;
  param_1[0x18] = 0x40000000;
  param_1[0x19] = 0x3eb33333;
  *param_1 = 0;
  param_1[param_1[0x10] * 2 + 1] = 0x3f4ccccd;
  param_1[0x10] = param_1[0x10] + 1;
  param_1[(uint)(param_1[0x10] * 2)] = 0x3ea8f5c3;
  param_1[param_1[0x10] * 2 + 1] = 0x3f800000;
  param_1[0x10] = param_1[0x10] + 1;
  param_1[(uint)(param_1[0x10] * 2)] = 0x3f800000;
  param_1[param_1[0x10] * 2 + 1] = 0x3f4ccccd;
  param_1[0x10] = param_1[0x10] + 1;
  param_1[0x1a] = 1.0 / (float)param_1[0x14];
  param_1[0x1b] = 1.0 / (float)param_1[0x16];
  return param_1;
}



// FUNCTION 14095d840 UTireConfig body=61 status=ok
// SIG undefined UTireConfig(void)

undefined8 * UTireConfig::UTireConfig(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UDataAsset::UDataAsset(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__14416bf60;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  return param_1;
}



// FUNCTION 14095d880 FUN_14095d880 body=108 status=ok
// SIG undefined FUN_14095d880(void)

undefined8 * FUN_14095d880(undefined8 *param_1)

{
  FUN_1422552b0();
  *param_1 = &PTR_FUN_14416a220;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  FUN_14084bd40(param_1 + 0x8a);
  param_1[0x8a] = &PTR__scalar_deleting_destructor__14416a1a8;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  return param_1;
}



// FUNCTION 14095d8f0 FUN_14095d8f0 body=418 status=ok
// SIG undefined FUN_14095d8f0(void)

undefined8 * FUN_14095d8f0(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong local_18 [2];
  
  FUN_141781840();
  uVar2 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14416b560;
  pvVar1 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x38) < DAT_146863dc8) {
    _Init_thread_header(&DAT_146863dc8);
    if (DAT_146863dc8 == -1) {
      FUN_141785db0(L"/Engine/EngineMeshes/Cylinder");
      local_18[0] = 0;
      local_18[1] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"/Engine/EngineMeshes/Cylinder",0x3c);
      FUN_14179acf0(local_18,1);
      DAT_146863dc0 = FUN_14095c6b0(local_18);
      if (DAT_146863dc0 == 0) {
        FUN_14178ab20(L"/Engine/EngineMeshes/Cylinder");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146863dc8);
    }
  }
  param_1[5] = DAT_146863dc0;
  *(undefined4 *)(param_1 + 9) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  *(undefined4 *)(param_1 + 10) = 0x41a00000;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x428c0000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x13) = 0x453b8000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3e800000;
  *(undefined4 *)(param_1 + 0xe) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x41880000;
  param_1[0xf] = 0x447a0000;
  *(undefined4 *)(param_1 + 0x10) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x41200000;
  *(undefined4 *)(param_1 + 0x11) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 14095daa0 FUN_14095daa0 body=1193 status=ok
// SIG undefined FUN_14095daa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14095daa0(undefined8 *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined4 local_220;
  undefined1 local_218 [4];
  undefined1 local_214 [4];
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  float local_1f8 [16];
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_178;
  uint local_174;
  undefined4 local_170;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 auStack_160 [30];
  undefined4 local_e8;
  undefined4 auStack_e0 [30];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  FUN_14095df50();
  *param_1 = &PTR_FUN_14416c248;
  param_1[5] = &PTR_LAB_14416c8f8;
  param_1[0x42] = &PTR_LAB_14416c928;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x8b);
  plVar1 = param_1 + 0xa3;
  uVar12 = 0;
  *plVar1 = 0;
  param_1[0xa4] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xa7);
  *(undefined1 *)(param_1 + 0x9d) = 0;
  local_1a8 = 0x43fa00003f800000;
  uStack_1a0 = 0x3e19999a44160000;
  local_194 = 0x3eb33333;
  local_198 = 0x40000000;
  local_18c = 0x3ada740e;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x3ee66666;
  *(undefined4 *)(param_1 + 0x9e) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x9f) = 0x3fa66666;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0xa0) = 0x3fa66666;
  local_1f8[0] = 0.0;
  local_1f8[1] = 0.8;
  local_1f8[2] = 0.33;
  local_1f8[3] = 1.0;
  local_1f8[4] = 1.0;
  local_1f8[5] = 0.8;
  local_1b8 = 3;
  local_190 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9a) = 0x45b30c9f;
  *(undefined4 *)(param_1 + 0x9b) = 0x3e19999a;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x40000000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3eb33333;
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x8b);
  uVar13 = uVar12;
  do {
    uVar10 = (int)uVar13 * 2;
    fVar2 = local_1f8[uVar10];
    fVar3 = *(float *)(param_1 + 0x9a);
    puVar6 = (undefined4 *)FKeyHandle::FKeyHandle(local_218);
    local_220 = *puVar6;
    local_228 = 0;
    FRichCurve::AddKey(uVar5,local_214,fVar2 * fVar3,local_1f8[uVar10 + 1] * 500.0);
    uVar10 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar10;
  } while (uVar10 < 3);
  local_178 = 0x40800000;
  local_1f8[0] = -4.0;
  local_1f8[1] = 0.0;
  local_1f8[2] = 4.0;
  local_1f8[3] = 2.0;
  local_170 = 0x3f000000;
  local_1f8[5] = 1.1;
  local_1f8[4] = 1.5;
  local_174 = 7;
  local_1f8[6] = 1.0;
  pfVar9 = local_1f8 + 7;
  for (lVar7 = 0x19; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pfVar9 = 0.0;
    pfVar9 = pfVar9 + 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x50c) = local_170;
  *(undefined4 *)((longlong)param_1 + 0x514) = local_178;
  *(undefined4 *)(param_1 + 0xa5) = 0xc0800000;
  *(undefined4 *)(param_1 + 0xa6) = 0x41200000;
  *(undefined4 *)(param_1 + 0xb6) = 0x3f800000;
  physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(local_168);
  *(undefined4 *)((longlong)param_1 + 0x52c) = local_164;
  *(undefined4 *)(param_1 + 0xa2) = local_e8;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  if (2 < local_174) {
    uVar13 = (ulonglong)(local_174 - 2);
    do {
      iVar4 = *(int *)(param_1 + 0xa4);
      uStack_20c = *(undefined4 *)((longlong)auStack_e0 + uVar12);
      local_208 = *(undefined4 *)((longlong)auStack_160 + uVar12);
      local_210 = *(undefined4 *)((longlong)local_1f8 + uVar12 + 8);
      *(int *)(param_1 + 0xa4) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0x524) < iVar4 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
      }
      lVar7 = *plVar1;
      uVar12 = uVar12 + 4;
      *(ulonglong *)(lVar7 + (longlong)iVar4 * 0xc) = CONCAT44(uStack_20c,local_210);
      *(undefined4 *)(lVar7 + 8 + (longlong)iVar4 * 0xc) = local_208;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xa7);
  puVar6 = (undefined4 *)FKeyHandle::FKeyHandle(local_214);
  local_220 = *puVar6;
  local_228 = 0;
  FRichCurve::AddKey(uVar5,local_218,0,0x3f800000);
  puVar6 = (undefined4 *)FKeyHandle::FKeyHandle(local_214);
  local_220 = *puVar6;
  local_228 = 0;
  FRichCurve::AddKey(uVar5,local_218,0x41a00000,0x3f666666);
  puVar6 = (undefined4 *)FKeyHandle::FKeyHandle(local_214);
  local_220 = *puVar6;
  local_228 = 0;
  FRichCurve::AddKey(uVar5,local_218,0x42700000,0x3f4ccccd);
  puVar6 = (undefined4 *)FKeyHandle::FKeyHandle(local_214);
  local_220 = *puVar6;
  local_228 = 0;
  FRichCurve::AddKey(uVar5,local_218,0x42f00000,0x3f333333);
  plVar1 = param_1 + 0x44;
  iVar4 = *(int *)(param_1 + 0x45);
  if (iVar4 < 4) {
    *(undefined4 *)(param_1 + 0x45) = 4;
    iVar11 = 4 - iVar4;
    if (*(int *)((longlong)param_1 + 0x22c) < 4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar4);
    }
    puVar8 = (undefined8 *)((longlong)iVar4 * 0x38 + *plVar1);
    if (iVar11 != 0) {
      lVar7 = (longlong)puVar8 + 0x14;
      do {
        uVar5 = FUN_14096caa0();
        *puVar8 = uVar5;
        puVar8 = puVar8 + 7;
        *(undefined8 *)(lVar7 + -0xc) = 0;
        *(undefined8 *)(lVar7 + -4) = 0;
        *(undefined4 *)(lVar7 + 4) = 0;
        *(undefined1 *)(lVar7 + 8) = 0;
        *(undefined8 *)(lVar7 + 0xc) = 0;
        *(undefined4 *)(lVar7 + 0x14) = 0;
        *(undefined8 *)(lVar7 + 0x1c) = 0;
        lVar7 = lVar7 + 0x38;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  else if (4 < iVar4) {
    FUN_140967930(plVar1,4,iVar4 + -4,1);
  }
  return param_1;
}



// FUNCTION 14095df50 FUN_14095df50 body=883 status=ok
// SIG undefined FUN_14095df50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14095df50(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_14235eec0();
  *param_1 = &PTR_FUN_14416b7f0;
  param_1[5] = &PTR_LAB_14416bea0;
  param_1[0x42] = &PTR_LAB_14416bed0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x40a00000;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x89) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x8a) = 0xff7fffff;
  *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) & 0xfe;
  *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x56) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x46) = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x47) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x430c0000;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x65) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x66) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x41200000;
  *(undefined4 *)(param_1 + 0x67) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x68) = 0x41400000;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x41400000;
  *(undefined4 *)(param_1 + 0x69) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x354) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x35c) = DAT_1468b5d98;
  param_1[0x6c] = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  *(uint *)((longlong)param_1 + 0x2cc) = *(uint *)((longlong)param_1 + 0x2cc) | 1;
  *(undefined4 *)(param_1 + 0x6d) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x57) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 700) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x4f) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 3;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3e6c56d6;
  *(undefined4 *)(param_1 + 0x4e) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x40400000;
  *(undefined1 *)((longlong)param_1 + 0x422) = 1;
  FUN_142350b20(param_1,1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14416caa8;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = 0x4096a550;
    *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
    *(undefined4 *)(plVar3 + 3) = 0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_14416caf0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = DAT_146533138;
    lVar4 = (longlong)DAT_146533138;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_146533130);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 14095e2d0 FUN_14095e2d0 body=167 status=ok
// SIG undefined FUN_14095e2d0(void)

void FUN_14095e2d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      if ((longlong *)plVar2[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar2[1] + 0x40))();
      }
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x40))();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
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



// FUNCTION 14095e380 FUN_14095e380 body=125 status=ok
// SIG undefined FUN_14095e380(void)

void FUN_14095e380(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x20);
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        FUN_1426e7010(lVar1);
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      plVar3 = plVar3 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14095e400 FUN_14095e400 body=190 status=ok
// SIG undefined FUN_14095e400(void)

void FUN_14095e400(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14095e4c0 FUN_14095e4c0 body=313 status=ok
// SIG undefined FUN_14095e4c0(void)

void FUN_14095e4c0(undefined4 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar5 = (longlong)(**(int **)(param_1 + 4) + param_2);
  uVar3 = FWeakObjectPtr::Get(*(longlong *)(*(longlong *)(param_1 + 6) + 8) + lVar5 * 8);
  lVar4 = lVar5 * 0x58 + *(longlong *)(*(longlong *)(param_1 + 6) + 0x58);
  uVar2 = FUN_14095f490(*(undefined8 *)(param_1 + 8),uVar3,lVar4,*(undefined8 *)(param_1 + 10),
                        CONCAT44(uVar2,**(undefined4 **)(param_1 + 0xc)),
                        **(undefined8 **)(param_1 + 0xe));
  puVar1 = *(undefined8 **)(param_1 + 6);
  local_28 = *param_1;
  local_24 = param_1[1];
  local_20 = param_1[2];
  FUN_14096b530(**(undefined4 **)(param_1 + 0x10),*puVar1,uVar3,
                *(undefined8 *)(puVar1[3] + lVar5 * 8),lVar4,uVar2,
                **(longlong **)(param_1 + 0x12) + lVar5 * 0x28,&local_28,
                **(undefined8 **)(param_1 + 0xe),puVar1[5] + lVar5 * 0x10,puVar1[7] + lVar5 * 0x10,0
               );
  return;
}



// FUNCTION 14095e600 FUN_14095e600 body=1564 status=ok
// SIG undefined FUN_14095e600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14095e600(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined1 *local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5;
  int local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_140 [12];
  uint local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined1 local_120 [12];
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar7 = *param_1;
  local_1d4 = 0;
  if (0 < *(int *)(lVar7 + 0x228)) {
    local_150 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar9 = 0;
    do {
      plVar8 = (longlong *)(*(longlong *)(lVar7 + 0x220) + lVar9);
      plVar5 = (longlong *)*plVar8;
      if (plVar5 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = plVar5[0x1f];
        if (lVar7 == 0) {
          (**(code **)(*plVar5 + 0x368))(plVar5);
          lVar7 = plVar5[0x1f];
        }
      }
      if (*(longlong *)(lVar7 + 0x30) != 0) {
        lVar3 = (**(code **)(*DAT_146b08400 + 0x100))(DAT_146b08400,0,0,0);
        lVar10 = plVar8[4];
        plVar8[4] = lVar3;
        if (lVar10 != 0) {
          FUN_1426e7010(lVar10);
          *(undefined8 *)(lVar10 + 0x10) = 0;
        }
        uVar1 = *(undefined8 *)(lVar7 + 0x30);
        local_130 = 2;
        uStack_128._0_4_ = (undefined4)uVar1;
        uStack_128._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(plVar8 + 5) = 2;
        *(undefined4 *)((longlong)plVar8 + 0x2c) = uStack_12c;
        *(undefined4 *)(plVar8 + 6) = (undefined4)uStack_128;
        *(undefined4 *)((longlong)plVar8 + 0x34) = uStack_128._4_4_;
        *(longlong **)(plVar8[4] + 0x10) = plVar8 + 5;
        uStack_128 = uVar1;
      }
      lVar10 = DAT_146863e00;
      if (plVar8[4] != 0) {
        lVar10 = plVar8[4];
      }
      (**(code **)(*(longlong *)*param_1 + 0x688))((longlong *)*param_1,&local_1a8,plVar8);
      fVar13 = 1.0;
      fVar12 = 1.0;
      local_1d0 = 0;
      uStack_1c8 = 0x3f80000000000000;
      fVar11 = 1.0;
      local_1c0 = local_1a8;
      local_1b8 = local_1a0;
      local_1bc = local_1a4;
      if (*(char *)(lVar7 + 0x38) == '\0') {
        lVar3 = *(longlong *)(lVar7 + 0x28);
        if ((lVar3 == 0) || (lVar4 = *(longlong *)(lVar3 + 0xa0), lVar4 == 0)) goto LAB_14095e999;
        UStaticMesh::GetBounds(lVar3,local_120);
        if (*(char *)(lVar7 + 0x39) != '\0') {
          fVar13 = *(float *)(lVar7 + 0x48) / local_114;
          fVar11 = *(float *)(lVar7 + 0x48) / local_10c;
          fVar12 = *(float *)(lVar7 + 0x4c) / (local_110 * 2.0);
        }
LAB_14095e879:
        if (lVar4 == 0) goto LAB_14095e999;
        lVar3 = *(longlong *)(*param_1 + 0x178);
        fVar11 = fVar11 * *(float *)(lVar3 + 0x20c);
        fVar12 = fVar12 * *(float *)(lVar3 + 0x208);
        fVar13 = fVar13 * *(float *)(lVar3 + 0x204);
        if (*(int *)(lVar4 + 0x60) != 1) {
          if (*(int *)(lVar4 + 0x108) == 0) goto LAB_14095e999;
          local_1e0 = &local_1d7;
          plVar5 = &local_160;
          puVar6 = &local_d0;
          local_a8 = **(undefined8 **)(lVar4 + 0x100);
          local_d0 = 5;
          local_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_b4 = 0x3f800000;
          local_b0 = 0;
          local_1d7 = 10;
          local_160 = lVar10;
          local_cc = fVar13;
          local_c8 = fVar12;
          local_c4 = fVar11;
          goto LAB_14095e9c8;
        }
        local_e0 = ULevel::GetWorld(*(undefined8 *)(lVar4 + 0x58));
        local_1e0 = &local_1d8;
        local_100 = 4;
        local_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0x3f800000;
        local_d8 = 0;
        local_1d8 = 0xb;
        local_1e8 = 1;
        local_168 = lVar10;
        local_fc = fVar13;
        local_f8 = fVar12;
        local_f4 = fVar11;
        plVar5 = (longlong *)
                 (**(code **)(*DAT_146b08400 + 0xd8))(DAT_146b08400,&local_100,&local_168);
        (**(code **)(*param_2 + 0xb8))(param_2,plVar5);
        (**(code **)*plVar5)(plVar5);
      }
      else {
        plVar5 = *(longlong **)(*param_1 + 0x178);
        if (plVar5 != (longlong *)0x0) {
          lVar3 = FUN_142a0cc80();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (lVar3 = (**(code **)(*plVar5 + 0x6d0))
                                (plVar5,plVar8[1],CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1)
                                ), lVar3 != 0)) {
            lVar4 = FWeakObjectPtr::Get(lVar3 + 0x140);
            goto LAB_14095e879;
          }
        }
LAB_14095e999:
        local_1ac = *(undefined4 *)(lVar7 + 0x48);
        local_1e0 = &local_1d6;
        plVar5 = &local_158;
        puVar6 = &local_1b0;
        local_1b0 = 0;
        local_1d6 = 0xb;
        local_158 = lVar10;
LAB_14095e9c8:
        local_1e8 = 1;
        plVar5 = (longlong *)(**(code **)(*DAT_146b08400 + 0xd8))(DAT_146b08400,puVar6,plVar5);
        (**(code **)(*plVar5 + 0x88))(plVar5,&local_1d0);
        (**(code **)(*param_2 + 0xb8))(param_2,plVar5);
        (**(code **)*plVar5)(plVar5);
      }
      FUN_140968ab0(*(undefined8 *)(*param_1 + 0x180),plVar5,param_1[1],param_1[2]);
      local_188 = local_1d0;
      uStack_180 = uStack_1c8;
      local_178 = local_1c0;
      local_170 = local_1b8;
      local_174 = local_1bc;
      if ((*(int *)(local_150 + 0x38) < DAT_146863df8) &&
         (_Init_thread_header(&DAT_146863df8), DAT_146863df8 == -1)) {
        DAT_146863df0 = (**(code **)(*DAT_146b08400 + 0x100))(DAT_146b08400,0);
        _Init_thread_footer(&DAT_146863df8);
      }
      local_194 = *(undefined4 *)(lVar7 + 0x48);
      local_1e0 = &local_1d5;
      local_190 = *(float *)(lVar7 + 0x4c) * 0.5;
      local_198 = 3;
      local_148 = DAT_146863df0;
      local_1d5 = 0xc;
      local_1e8 = 1;
      local_18c = local_194;
      plVar8 = (longlong *)(**(code **)(*DAT_146b08400 + 0xd8))(DAT_146b08400,&local_198,&local_148)
      ;
      (**(code **)(*plVar5 + 0xa0))(plVar5,local_140);
      local_134 = local_134 | 0x40;
      (**(code **)(*plVar8 + 0x98))(plVar8,local_140);
      (**(code **)(*plVar8 + 0x88))(plVar8,&local_188);
      lVar7 = *plVar8;
      (**(code **)(*plVar5 + 0xe0))(plVar5);
      (**(code **)(lVar7 + 0xd8))(plVar8);
      (**(code **)(*param_2 + 0xb8))(param_2,plVar8);
      (**(code **)*plVar8)(plVar8);
      lVar9 = lVar9 + 0x38;
      lVar7 = *param_1;
      local_1d4 = local_1d4 + 1;
    } while (local_1d4 < *(int *)(lVar7 + 0x228));
  }
  return;
}



// FUNCTION 14095ec20 FUN_14095ec20 body=1223 status=ok
// SIG undefined FUN_14095ec20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14095ec20(undefined8 *param_1,longlong *param_2)

{
  float fVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  int local_138;
  longlong *local_130;
  int local_128;
  undefined4 local_124;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  longlong lStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar6 = param_1[1];
  local_130 = param_2;
  physx::PxVehicleWheelsSimData::setSubStepCount
            (*(undefined8 *)*param_1,*(float *)(lVar6 + 0x278) * 100.0,
             *(undefined4 *)(lVar6 + 0x27c),*(undefined4 *)(lVar6 + 0x280));
  FUN_143972870(*(undefined8 *)*param_1,0x43c80000);
  local_138 = *(int *)(param_1[1] + 0x228);
  if (0x1f < *(int *)(param_1[1] + 0x228)) {
    local_138 = 0x20;
  }
  uVar12 = 0;
  lVar15 = (longlong)local_138;
  uVar16 = uVar12;
  uVar17 = uVar12;
  lVar6 = lVar15;
  if (0 < local_138) {
    do {
      local_118 = lVar6;
      lVar6 = param_1[1];
      plVar14 = *(longlong **)(uVar17 + *(longlong *)(lVar6 + 0x220));
      if (plVar14 == (longlong *)0x0) {
        lVar13 = 0;
      }
      else {
        lVar13 = plVar14[0x1f];
        if (lVar13 == 0) {
          (**(code **)(*plVar14 + 0x368))(plVar14);
          lVar6 = param_1[1];
          lVar13 = plVar14[0x1f];
        }
      }
      local_f0 = 0;
      lStack_f8 = 0;
      local_e8 = 0;
      fVar1 = *(float *)(lVar13 + 0x48);
      local_110 = *(undefined8 *)(lVar13 + 0x48);
      if (*(char *)(*(longlong *)(lVar6 + 0x220) + 0x1c + uVar17) == '\0') {
        lStack_f8 = (ulonglong)(uint)(*(float *)(lVar13 + 0x58) * 0.017453292) << 0x20;
      }
      if (*(char *)(lVar13 + 0x5c) != '\0') {
        lStack_f8 = CONCAT44(lStack_f8._4_4_,*(float *)(lVar13 + 0x98) * 10000.0);
      }
      _local_100 = CONCAT44(*(float *)(lVar13 + 0x94) * 10000.0,*(float *)(lVar13 + 0x54) * 10000.0)
      ;
      local_94 = 0x3f800000;
      local_98 = 0x3f800000;
      local_b8 = 0x40000000;
      uStack_b4 = 0x418f3d4d;
      uStack_b0 = 0x447a0000;
      uStack_ac = 0x40b758b4;
      local_a8 = 0;
      uStack_a4 = 0x3f800000;
      uStack_a0 = 0x3dcccccd;
      uStack_9c = 0x3f800000;
      _fStack_108 = CONCAT44(fVar1 * fVar1 * *(float *)(lVar13 + 0x50) * 0.5,
                             *(float *)(lVar13 + 0x50));
      local_8c = 0x3a83126f;
      local_88 = 0x41200000;
      local_84 = 0x3f8e38e4;
      if (*(longlong *)(lVar13 + 0x68) == 0) {
        lVar6 = DAT_146863d58;
        if (DAT_146863d58 == 0) {
          uVar8 = GetTransientPackage();
          FUN_1417846f0(uVar8,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          local_120 = 0;
          uVar5 = UTireConfig::GetPrivateStaticClass();
          local_148 = 0;
          local_150 = 0;
          local_158 = 0;
          local_160 = 0;
          local_168 = 0;
          lVar6 = FUN_1417985e0(uVar5,uVar8,0,0);
          uVar9 = *(uint *)(lVar6 + 0xc);
          uVar7 = uVar12;
          if ((int)uVar9 < (int)DAT_1469e91c4) {
            uVar10 = uVar9 & 0xffff;
            if ((int)uVar9 < 0) {
              uVar9 = uVar9 + 0xffff;
              uVar10 = uVar10 - 0x10000;
            }
            uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                    (longlong)(int)uVar10 * 0x18;
          }
          DAT_146863d58 = lVar6;
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) | 0x40000000;
        }
        uVar3 = *(undefined4 *)(lVar6 + 0x48);
      }
      else {
        uVar3 = *(undefined4 *)(*(longlong *)(lVar13 + 0x68) + 0x48);
      }
      local_94 = CONCAT44(uVar3,(undefined4)local_94);
      local_b8 = *(undefined4 *)(lVar13 + 0x70);
      uStack_b4 = *(undefined4 *)(lVar13 + 0x74);
      uStack_b0 = *(undefined4 *)(lVar13 + 0x78);
      physx::PxVehicleWheelsSimData::setWheelData(*(undefined8 *)*param_1,uVar16,&local_110);
      physx::PxVehicleWheelsSimData::setTireData(*(undefined8 *)*param_1,uVar16,&local_b8);
      uVar16 = (ulonglong)((int)uVar16 + 1);
      uVar17 = uVar17 + 0x38;
      lVar6 = local_118 + -1;
    } while (local_118 + -1 != 0);
    local_118 = 0;
  }
  plVar14 = local_130;
  (**(code **)(*(longlong *)param_1[1] + 0x668))
            ((longlong *)param_1[1],local_138,*(undefined8 *)*param_1,local_130);
  iVar4 = (**(code **)(*plVar14 + 200))(plVar14);
  local_130 = (longlong *)0x0;
  local_124 = 0;
  local_128 = iVar4;
  if (0 < iVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_130);
  }
  plVar2 = local_130;
  _guard_xfg_dispatch_icall_nop(local_130,0,(longlong)iVar4 * 8);
  (**(code **)(*plVar14 + 0xd0))(plVar14,plVar2,iVar4,0);
  if (0 < lVar15) {
    iVar11 = iVar4 + local_138 * -2;
    plVar14 = plVar2 + (longlong)iVar4 + lVar15 * -2;
    do {
      if (0 < iVar11) {
        physx::PxVehicleWheelsSimData::setWheelShapeMapping(*(undefined8 *)*param_1,uVar12,iVar11);
        uVar8 = (**(code **)(*(longlong *)*plVar14 + 0xb0))((longlong *)*plVar14,&local_130);
        physx::PxVehicleWheelsSimData::setSceneQueryFilterData(*(undefined8 *)*param_1,uVar12,uVar8)
        ;
      }
      uVar12 = (ulonglong)((int)uVar12 + 1);
      iVar11 = iVar11 + 2;
      plVar14 = plVar14 + 2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  local_d0 = 0x3eaaaaab;
  local_e0 = *(undefined8 *)(param_1[1] + 0x268);
  uStack_d8 = *(undefined8 *)(param_1[1] + 0x270);
  physx::PxVehicleWheelsSimData::setTireLoadFilterData(*(undefined8 *)*param_1,&local_e0);
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 14095f0f0 FUN_14095f0f0 body=925 status=ok
// SIG undefined FUN_14095f0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14095f0f0(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_140;
  longlong local_138;
  int local_130;
  undefined **local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  ushort local_104;
  float local_f8 [16];
  int local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_120 = 0;
  local_128 = &PTR_FUN_14416bf40;
  lVar7 = *param_1;
  local_10c = 0;
  local_11c = 0;
  local_104 = 0;
  local_118 = *(undefined4 *)(lVar7 + 0x318);
  local_108 = *(undefined4 *)(lVar7 + 0x314);
  local_114 = *(undefined4 *)(lVar7 + 0x31c);
  local_110 = *(undefined4 *)(lVar7 + 800);
  if (*(char *)(*(longlong *)(lVar7 + 0x2a8) + 0x100) == '\0') {
    local_104 = CONCAT11((char)(*(uint *)(lVar7 + 0x310) >> 2),(char)(*(uint *)(lVar7 + 0x310) >> 1)
                        ) & 0x101;
  }
  lVar5 = 0;
  local_b8 = 0;
  uVar3 = FRuntimeFloatCurve::GetRichCurve(lVar7 + 0x538);
  FRichCurve::GetCopyOfKeys(uVar3,&local_138);
  if (7 < local_130) {
    local_130 = 8;
  }
  lVar7 = (longlong)local_130;
  if (3 < lVar7) {
    pfVar4 = (float *)(local_138 + 0x3c);
    lVar6 = (lVar7 - 4U >> 2) + 1;
    lVar5 = lVar6 * 4;
    do {
      fVar8 = pfVar4[-0xd];
      if (0.0 <= fVar8) {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      local_f8[(uint)(local_b8 * 2)] = pfVar4[-0xe] * 27.777779;
      local_f8[local_b8 * 2 + 1] = fVar8;
      local_b8 = local_b8 + 1;
      fVar8 = pfVar4[-6];
      if (0.0 <= fVar8) {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      local_f8[(uint)(local_b8 * 2)] = pfVar4[-7] * 27.777779;
      local_f8[local_b8 * 2 + 1] = fVar8;
      local_b8 = local_b8 + 1;
      fVar8 = pfVar4[1];
      if (0.0 <= fVar8) {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      local_f8[(uint)(local_b8 * 2)] = *pfVar4 * 27.777779;
      local_f8[local_b8 * 2 + 1] = fVar8;
      local_b8 = local_b8 + 1;
      fVar8 = pfVar4[8];
      if (0.0 <= fVar8) {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      pfVar1 = pfVar4 + 7;
      pfVar4 = pfVar4 + 0x1c;
      local_f8[(uint)(local_b8 * 2)] = *pfVar1 * 27.777779;
      local_f8[local_b8 * 2 + 1] = fVar8;
      local_b8 = local_b8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (lVar5 < lVar7) {
    pfVar4 = (float *)(local_138 + 4 + lVar5 * 0x1c);
    lVar7 = lVar7 - lVar5;
    do {
      fVar8 = pfVar4[1];
      if (0.0 <= fVar8) {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
      fVar2 = *pfVar4;
      pfVar4 = pfVar4 + 7;
      local_f8[(uint)(local_b8 * 2)] = fVar2 * 27.777779;
      local_f8[local_b8 * 2 + 1] = fVar8;
      local_b8 = local_b8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = *param_1;
  local_a8 = *(undefined4 *)(lVar7 + 0x330);
  local_a4 = *(undefined4 *)(lVar7 + 0x338);
  local_a0 = *(undefined4 *)(lVar7 + 0x340);
  local_9c = *(undefined4 *)(lVar7 + 0x348);
  local_98 = *(undefined4 *)(lVar7 + 0x348);
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_68 = *(undefined4 *)(lVar7 + 0x334);
  local_64 = *(undefined4 *)(lVar7 + 0x33c);
  local_60 = *(undefined4 *)(lVar7 + 0x344);
  local_5c = *(undefined4 *)(lVar7 + 0x34c);
  local_58 = *(undefined4 *)(lVar7 + 0x34c);
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_140 = *(undefined8 *)(lVar7 + 0x2a8);
  local_148 = 0;
  FUN_143975300(&local_a8,local_f8,&local_128,*(undefined4 *)param_1[1]);
  if (local_138 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14095f490 FUN_14095f490 body=708 status=ok
// SIG undefined FUN_14095f490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14095f490(undefined8 *param_1,longlong param_2,float *param_3,undefined8 *param_4,float param_5,
             longlong param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res10 [8];
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  
  if (*(char *)(param_2 + 0x422) == '\0') {
    return 2;
  }
  plVar4 = *(longlong **)*param_1;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x348))
              (plVar4,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\PhysXVehicleManager.cpp"
               ,0x411);
  }
  plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x2a0) + 0xa0);
  pbVar7 = (byte *)(**(code **)(*plVar5 + 0x178))(plVar5,local_res10);
  if ((*pbVar7 & 1) != 0) {
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x350))(plVar4);
    }
    return 0;
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x350))(plVar4);
  }
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x118) + 0x168);
  if (lVar6 == 0) {
    local_48 = _DAT_1468b5d90;
    local_40 = DAT_1468b5d98;
  }
  else {
    local_48 = *(undefined8 *)(lVar6 + 0x220);
    local_40 = *(float *)(lVar6 + 0x228);
  }
  puVar8 = (undefined8 *)*param_4;
  fVar11 = 3.4028235e+38;
  puVar2 = (undefined8 *)((longlong)puVar8 + (longlong)*(int *)(param_4 + 1) * 0xc);
  if (puVar8 == puVar2) {
LAB_14095f648:
    fVar11 = 0.0;
  }
  else {
    fStack_54 = (float)((ulonglong)local_48 >> 0x20);
    local_58 = (float)local_48;
    do {
      uVar3 = *puVar8;
      pfVar1 = (float *)(puVar8 + 1);
      fVar9 = (float)*puVar8 - local_58;
      puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
      fVar10 = (float)((ulonglong)uVar3 >> 0x20) - fStack_54;
      fVar9 = fVar10 * fVar10 + fVar9 * fVar9 + (*pfVar1 - local_40) * (*pfVar1 - local_40);
      if (fVar11 <= fVar9) {
        fVar9 = fVar11;
      }
      fVar11 = fVar9;
    } while (puVar8 != puVar2);
    if (fVar11 == 3.4028235e+38) goto LAB_14095f648;
    fVar11 = SQRT(fVar11);
  }
  if (fVar11 < *(float *)(param_6 + 0x10c)) {
    *param_3 = param_5;
    return 2;
  }
  fVar9 = *(float *)(param_6 + 0x110);
  if (fVar11 < fVar9) {
    *param_3 = param_5;
    return 1;
  }
  fVar10 = *(float *)(param_6 + 0x114) - fVar9;
  if (1e-08 < ABS(fVar10)) {
    fVar10 = (fVar11 - fVar9) / fVar10;
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
      goto LAB_14095f6d9;
    }
  }
  else if (fVar11 < *(float *)(param_6 + 0x114)) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = 1.0;
  }
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
LAB_14095f6d9:
  if ((0.0 <= *param_3) &&
     (param_5 - *param_3 <
      (*(float *)(param_6 + 0x11c) - *(float *)(param_6 + 0x118)) * fVar10 +
      *(float *)(param_6 + 0x118))) {
    return 0;
  }
  *param_3 = param_5;
  return 1;
}



// FUNCTION 14095f760 FUN_14095f760 body=35 status=ok
// SIG undefined FUN_14095f760(void)

void FUN_14095f760(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1426e7010(param_2);
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14095f7d0 FUN_14095f7d0 body=43 status=ok
// SIG undefined FUN_14095f7d0(void)

undefined8 * FUN_14095f7d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14095f800 FUN_14095f800 body=97 status=ok
// SIG undefined FUN_14095f800(void)

undefined8 * FUN_14095f800(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14416a198;
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



// FUNCTION 14095f870 FUN_14095f870 body=66 status=ok
// SIG undefined FUN_14095f870(void)

longlong FUN_14095f870(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d0);
  }
  return param_1;
}



// FUNCTION 14095f8c0 FUN_14095f8c0 body=106 status=ok
// SIG undefined FUN_14095f8c0(void)

undefined8 * FUN_14095f8c0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 14095f930 FUN_14095f930 body=43 status=ok
// SIG undefined FUN_14095f930(void)

undefined8 * FUN_14095f930(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f4c5f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14095f960 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FActorTickFunction::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FTickFunction::~FTickFunction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14095f9a0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCustomMeshComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FMemory::Free();
  }
  FUN_14083e560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6e0);
  }
  return param_1;
}



// FUNCTION 14095f9f0 FUN_14095f9f0 body=43 status=ok
// SIG undefined FUN_14095f9f0(void)

undefined8 * FUN_14095f9f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14416af28;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14095fa20 FUN_14095fa20 body=43 status=ok
// SIG undefined FUN_14095fa20(void)

undefined8 * FUN_14095fa20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14416bf40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14095fa50 FUN_14095fa50 body=52 status=ok
// SIG undefined FUN_14095fa50(void)

undefined8 FUN_14095fa50(undefined8 param_1,ulonglong param_2)

{
  FUN_14095e400();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 14095fa90 FUN_14095fa90 body=112 status=ok
// SIG undefined FUN_14095fa90(void)

longlong FUN_14095fa90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb18) != 0) {
    FMemory::Free();
  }
  FUN_14083e560(param_1 + 0x450);
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FMemory::Free();
  }
  FUN_14083eff0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb40);
  }
  return param_1;
}



// FUNCTION 14095fb00 FUN_14095fb00 body=52 status=ok
// SIG undefined FUN_14095fb00(void)

undefined8 FUN_14095fb00(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14095fb40 FUN_14095fb40 body=157 status=ok
// SIG undefined FUN_14095fb40(void)

longlong FUN_14095fb40(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x538);
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  FUN_14095e380(param_1 + 0x220);
  *(undefined ***)(param_1 + 0x210) = &PTR_FUN_14416af28;
  FUN_14095e400(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b8);
  }
  return param_1;
}



// FUNCTION 14095fbe0 FUN_14095fbe0 body=116 status=ok
// SIG undefined FUN_14095fbe0(void)

longlong FUN_14095fbe0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  FUN_14095e380(param_1 + 0x220);
  *(undefined ***)(param_1 + 0x210) = &PTR_FUN_14416af28;
  FUN_14095e400(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x458);
  }
  return param_1;
}



// FUNCTION 14095fc60 FUN_14095fc60 body=73 status=ok
// SIG undefined FUN_14095fc60(void)

void FUN_14095fc60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x6d0))(plVar1,0,1);
    if (lVar2 != 0) {
      FUN_14268e510(lVar2,param_2,0,0);
    }
  }
  return;
}



// FUNCTION 14095fcb0 FUN_14095fcb0 body=787 status=ok
// SIG undefined FUN_14095fcb0(void)

void FUN_14095fcb0(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  BOOL BVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  }
  if (*(char *)((longlong)param_1 + 0xad) == '\0') {
    plVar5 = (longlong *)
             TMapBase<AActor_*,AActor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_*,AActor_*,0>_>
             ::FindKey(&DAT_146289b00,param_1);
    *(byte *)((longlong)param_1 + 0xac) = *(byte *)((longlong)param_1 + 0xac) | 0x16;
    *(undefined2 *)(param_1 + 0x15) = 0x200;
    param_1[0x1e] = param_1;
    FTickFunction::RegisterTickFunction
              (param_1 + 0x14,*(undefined8 *)(*(longlong *)(*plVar5 + 0x50) + 0x30));
  }
  if (DAT_146863cd4 != '\0') {
    DAT_146863cd4 = '\0';
    FUN_14096bf50(param_1);
  }
  iVar1 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar1);
  }
  lVar6 = param_1[1];
  *(undefined4 *)(lVar6 + (longlong)iVar1 * 8) = *param_2;
  *(undefined4 *)(lVar6 + 4 + (longlong)iVar1 * 8) = param_2[1];
  lVar6 = FWeakObjectPtr::Get(param_2);
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x24) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 3,iVar1);
  }
  *(undefined8 *)(param_1[3] + (longlong)iVar1 * 8) = *(undefined8 *)(lVar6 + 0x2a0);
  iVar1 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 5,iVar1);
  }
  lVar6 = param_1[5];
  lVar10 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar10 + lVar6) = 0;
  *(undefined8 *)(lVar10 + 8 + lVar6) = 0;
  lVar6 = FWeakObjectPtr::Get(param_2);
  uVar2 = *(uint *)(*(longlong *)(lVar6 + 0x2a0) + 0x3c);
  *(uint *)(lVar10 + 8 + param_1[5]) = uVar2;
  uVar9 = CONCAT44(0,uVar2);
  lVar6 = operator_new();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    uVar12 = (ulonglong)uVar2;
    if (uVar9 != 0) {
      lVar11 = lVar6 + 0x9c;
      do {
        _guard_xfg_dispatch_icall_nop((void *)(lVar11 + -0x9c),0,0xa0);
        *(undefined1 *)(lVar11 + -0x80) = 1;
        *(undefined4 *)(lVar11 + -100) = 0xffffffff;
        *(undefined8 *)(lVar11 + -0x18) = 0;
        *(undefined4 *)(lVar11 + -0x10) = 0;
        *(undefined8 *)(lVar11 + -0xc) = 0x3f800000;
        *(undefined8 *)(lVar11 + -4) = 0;
        lVar11 = lVar11 + 0xa0;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  *(longlong *)(lVar10 + param_1[5]) = lVar6;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 7,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[7]);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(lVar10 + 8 + param_1[7]) = *(undefined4 *)(lVar10 + 8 + param_1[5]);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9;
  uVar8 = SUB168(ZEXT816(0xa0) * auVar3,0);
  if (SUB168(ZEXT816(0xa0) * auVar3,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  lVar6 = operator_new(uVar8);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if (uVar9 != 0) {
    lVar11 = lVar6 + 0x9c;
    do {
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 + -0x9c),0,0xa0);
      *(undefined1 *)(lVar11 + -0x80) = 1;
      *(undefined4 *)(lVar11 + -100) = 0xffffffff;
      *(undefined8 *)(lVar11 + -0x18) = 0;
      *(undefined4 *)(lVar11 + -0x10) = 0;
      *(undefined8 *)(lVar11 + -0xc) = 0x3f800000;
      *(undefined8 *)(lVar11 + -4) = 0;
      lVar11 = lVar11 + 0xa0;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  *(longlong *)(lVar10 + param_1[7]) = lVar6;
  lVar6 = FWeakObjectPtr::Get(param_2);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar1 + 1) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar1);
  }
  FUN_14095d220((longlong)iVar1 * 0x58 + param_1[0xb],*(undefined8 *)(lVar6 + 0x2a0),*param_1);
                    /* WARNING: Could not recover jumptable at 0x00014095ffbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



// FUNCTION 14095ffd0 BeginDestroy body=81 status=ok
// SIG undefined BeginDestroy(void)

void UTireConfig::BeginDestroy(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FWeakObjectPtr::operator=(&local_res8,0);
    puVar1 = (undefined4 *)(DAT_146863d38 + (longlong)*(int *)(param_1 + 0x48) * 8);
    *puVar1 = local_res8;
    puVar1[1] = local_resc;
    DAT_146863cd4 = 1;
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 140960030 FUN_140960030 body=252 status=ok
// SIG undefined FUN_140960030(void)

int FUN_140960030(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x2a8);
  fVar1 = *(float *)(param_1 + 0x424);
  if (lVar2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x104);
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else if (iVar5 == 1) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + -1;
    }
    iVar4 = *(int *)(lVar2 + 0x108);
    if (iVar4 == 0) {
      iVar4 = -1;
      goto LAB_140960081;
    }
    if (iVar4 != 1) {
      iVar4 = iVar4 + -1;
      goto LAB_140960081;
    }
  }
  iVar4 = 0;
LAB_140960081:
  if (((fVar1 < *(float *)(param_1 + 0x328)) && (-*(float *)(param_1 + 0x328) < fVar1)) &&
     (ABS(*(float *)(param_1 + 0x308)) <= 1e-08)) {
    return 0;
  }
  if ((iVar5 == 0) || (iVar3 = iVar5, iVar4 == 0)) {
    if (*(float *)(param_1 + 0x308) <= 0.05) {
      iVar3 = (-0.05 <= *(float *)(param_1 + 0x308)) - 1;
    }
    else {
      iVar3 = 1;
    }
  }
  if (ABS(fVar1) < *(float *)(param_1 + 0x32c)) {
    if (((*(float *)(param_1 + 0x308) < 0.0) && (-1 < iVar5)) && (-1 < iVar4)) {
      return -1;
    }
    if (((0.0 < *(float *)(param_1 + 0x308)) && (iVar5 < 1)) && (iVar4 < 1)) {
      iVar3 = 1;
    }
  }
  return iVar3;
}



// FUNCTION 140960150 FUN_140960150 body=731 status=ok
// SIG undefined FUN_140960150(void)

float FUN_140960150(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 local_78;
  undefined4 local_70;
  
  if ((*(byte *)(param_1 + 0x2b0) & 1) == 0) {
    return *(float *)(param_1 + 0x304);
  }
  local_78 = *(undefined8 *)(param_1 + 0x354);
  fVar4 = (float)((ulonglong)local_78 >> 0x20);
  local_70 = *(undefined4 *)(param_1 + 0x35c);
  fVar2 = fVar4 * fVar4 + (float)local_78 * (float)local_78;
  fVar6 = (float)local_78;
  fVar7 = fVar4;
  if ((fVar2 != 1.0) && (fVar6 = DAT_1468b5d90, fVar7 = DAT_1468b5d94, 1e-08 <= fVar2)) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar7 = auVar5._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar2 * 0.5 * fVar7 * fVar7);
    fVar7 = fVar7 + fVar7 * (0.5 - fVar2 * 0.5 * fVar7 * fVar7);
    fVar6 = fVar7 * (float)local_78;
    fVar7 = fVar7 * fVar4;
  }
  if (-1.0 <= fVar6) {
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = -1.0;
  }
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar6);
  if (fVar7 < 0.0) {
    fVar6 = -fVar6;
  }
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x210) + 0x50))
                     ((longlong *)(param_1 + 0x210),&local_78);
  local_78 = *puVar1;
  fVar2 = (float)((ulonglong)local_78 >> 0x20);
  fVar3 = fVar2 * fVar2 + (float)local_78 * (float)local_78;
  fVar7 = (float)local_78;
  fVar4 = fVar2;
  if ((fVar3 != 1.0) && (fVar7 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, 1e-08 <= fVar3)) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar7 = fVar4 * (float)local_78;
    fVar4 = fVar4 * fVar2;
  }
  if (-1.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = -1.0;
  }
  fVar7 = _guard_xfg_dispatch_icall_nop(fVar7);
  if (fVar4 < 0.0) {
    fVar7 = -fVar7;
  }
  if (fVar6 - fVar7 <= 0.0) {
    fVar4 = *(float *)(param_1 + 0x304);
    if (fVar6 - fVar7 < 0.0) {
      fVar6 = fVar4 - *(float *)(param_1 + 0x2c0);
      fVar4 = -1.0;
      if ((-1.0 <= fVar6) && (fVar4 = fVar6, 0.0 <= fVar6)) {
        fVar4 = 0.0;
      }
      *(float *)(param_1 + 0x304) = fVar4;
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x2c0) + *(float *)(param_1 + 0x304);
    fVar4 = 0.0;
    if ((0.0 <= fVar6) && (fVar4 = fVar6, 1.0 <= fVar6)) {
      fVar4 = 1.0;
    }
    *(float *)(param_1 + 0x304) = fVar4;
  }
  return fVar4;
}



// FUNCTION 140960430 FUN_140960430 body=312 status=ok
// SIG undefined FUN_140960430(void)

uint FUN_140960430(longlong param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 local_28 [32];
  
  if ((*(byte *)(param_1 + 0x2b0) & 1) != 0) {
    fVar5 = *(float *)(param_1 + 0x354) * *(float *)(param_1 + 0x354) +
            *(float *)(param_1 + 0x358) * *(float *)(param_1 + 0x358) +
            *(float *)(param_1 + 0x35c) * *(float *)(param_1 + 0x35c);
    pfVar3 = (float *)(**(code **)(*(longlong *)(param_1 + 0x210) + 0x50))
                                ((longlong *)(param_1 + 0x210),local_28);
    fVar4 = *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2];
    if (fVar5 <= fVar4) {
      if (fVar4 <= fVar5) goto LAB_1409604f9;
      fVar4 = *(float *)(param_1 + 0x308) - *(float *)(param_1 + 0x2c4);
    }
    else {
      fVar4 = *(float *)(param_1 + 0x2c4) + *(float *)(param_1 + 0x308);
    }
    fVar5 = -1.0;
    if ((-1.0 <= fVar4) && (fVar5 = fVar4, 1.0 <= fVar4)) {
      fVar5 = 1.0;
    }
    *(float *)(param_1 + 0x308) = fVar5;
  }
LAB_1409604f9:
  if (*(char *)(param_1 + 0x240) != '\0') {
    if (0.0 < *(float *)(param_1 + 0x308)) {
      if (*(longlong *)(param_1 + 0x2a8) == 0) {
        return 0;
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x2a8) + 0x108);
      if (uVar1 < 2) {
        return 0;
      }
      if ((int)(uVar1 - 1) < 1) {
        return 0;
      }
    }
    if (*(float *)(param_1 + 0x308) < 0.0) {
      if (*(longlong *)(param_1 + 0x2a8) == 0) {
        return 0;
      }
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x2a8) + 0x108);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          return 0;
        }
        if (0 < iVar2) {
          return 0;
        }
      }
    }
  }
  return *(uint *)(param_1 + 0x308) & 0x7fffffff;
}



// FUNCTION 140960570 FUN_140960570 body=502 status=ok
// SIG undefined FUN_140960570(void)

void FUN_140960570(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  float local_18;
  float fStack_14;
  float local_10;
  
  if ((*(byte *)(param_1 + 0x2b0) & 1) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  lVar2 = *(longlong *)(lVar2 + 0x158);
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x118), lVar5 != 0)) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409605f8;
  }
  lVar5 = 0;
LAB_1409605f8:
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x210) + 0x50))
                     ((longlong *)(param_1 + 0x210),&local_18);
  *(undefined8 *)(param_1 + 0x354) = *puVar4;
  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(puVar4 + 1);
  if ((((*(float *)(param_1 + 0x2d8) <= 1.0 && *(float *)(param_1 + 0x2d8) != 1.0) && (lVar2 != 0))
      && (lVar5 != 0)) && (*(char *)(lVar5 + 0x128) == '\x03')) {
    if (((*(float *)(param_1 + 0x354) == 0.0) && (*(float *)(param_1 + 0x358) == 0.0)) &&
       (*(float *)(param_1 + 0x35c) == 0.0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      if (*(float *)(param_1 + 0x36c) <= 0.0) {
        UAvoidanceManager::GetAvoidanceVelocityForComponent(lVar2,&local_18,param_1);
        if (((0.0001 < ABS(local_18 - *(float *)(param_1 + 0x354))) ||
            (0.0001 < ABS(fStack_14 - *(float *)(param_1 + 0x358)))) ||
           (0.0001 < ABS(local_10 - *(float *)(param_1 + 0x35c)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar6 = *(undefined4 *)(lVar2 + 0x38);
        }
        else {
          *(ulonglong *)(param_1 + 0x354) = CONCAT44(fStack_14,local_18);
          *(float *)(param_1 + 0x35c) = local_10;
          uVar6 = *(undefined4 *)(lVar2 + 0x34);
        }
        FUN_1409681f0(param_1,lVar2,uVar6);
      }
      else {
        *(undefined8 *)(param_1 + 0x354) = *(undefined8 *)(param_1 + 0x360);
        *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 0x368);
      }
      UAvoidanceManager::UpdateRVO(lVar2,param_1);
      *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 1;
    }
  }
  return;
}



// FUNCTION 140960770 FUN_140960770 body=67 status=ok
// SIG undefined FUN_140960770(void)

void FUN_140960770(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1439733e0(*(undefined8 *)(*param_1 + 0x2a0));
  *(undefined4 *)(*param_1 + 0x424) = uVar1;
  uVar1 = FUN_1439735c0(*(undefined8 *)(*param_1 + 0x2a0));
  *(undefined4 *)(*param_1 + 0x428) = uVar1;
  return;
}



// FUNCTION 1409607e0 FUN_1409607e0 body=85 status=ok
// SIG undefined FUN_1409607e0(void)

void FUN_1409607e0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1439733e0(*(undefined8 *)(*param_1 + 0x2a0));
  fVar2 = (float)FUN_1439735c0(*(undefined8 *)(*param_1 + 0x2a0));
  *(float *)param_1[1] = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  return;
}



// FUNCTION 140960840 FUN_140960840 body=190 status=ok
// SIG undefined FUN_140960840(void)

undefined8 FUN_140960840(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x180), plVar1 != (longlong *)0x0)) {
    uVar5 = 0;
    lVar3 = (**(code **)(*plVar1 + 0x6d0))(plVar1,0,1);
    if (lVar3 != 0) {
      uVar7 = uVar5;
      if (0 < *(int *)(param_1 + 0x228)) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x220);
          if (*(longlong *)(uVar5 + lVar3) == 0) {
            return 0;
          }
          lVar4 = FUN_14096caa0();
          lVar3 = *(longlong *)(uVar5 + lVar3);
          lVar2 = lVar3;
          while( true ) {
            if (lVar2 == 0) {
              return 0;
            }
            if (lVar2 == lVar4) break;
            lVar2 = *(longlong *)(lVar2 + 0x30);
          }
          if (lVar3 == 0) {
            return 0;
          }
          uVar6 = (int)uVar7 + 1;
          uVar5 = uVar5 + 0x38;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < *(int *)(param_1 + 0x228));
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140960900 FUN_140960900 body=98 status=ok
// SIG undefined FUN_140960900(void)

void FUN_140960900(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined8 *)(param_1 + 0x314) = 0;
  *(undefined8 *)(param_1 + 0x31c) = 0;
  *(undefined8 *)(param_1 + 0x42c) = 0;
  *(undefined8 *)(param_1 + 0x434) = 0;
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x2a8) + 0x104);
    if (iVar1 == 0) {
      iVar2 = -1;
    }
    else if (iVar1 != 1) {
      iVar2 = iVar1 + -1;
    }
  }
  FUN_14096df20(param_1,0,0,0,0,iVar2);
  return;
}



// FUNCTION 140960a00 FUN_140960a00 body=76 status=ok
// SIG undefined FUN_140960a00(void)

void FUN_140960a00(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14416c9d8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_14416ca20;
  }
  return;
}



// FUNCTION 140960a50 FUN_140960a50 body=84 status=ok
// SIG undefined FUN_140960a50(void)

void FUN_140960a50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14416caa8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_14416caf0;
  }
  return;
}



// FUNCTION 140960ab0 FUN_140960ab0 body=372 status=ok
// SIG undefined FUN_140960ab0(void)

undefined8 * FUN_140960ab0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_14416a198;
  *(undefined1 *)(plVar8 + 5) = 0;
  plVar8[6] = local_res10;
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



// FUNCTION 140960c30 FUN_140960c30 body=100 status=ok
// SIG undefined FUN_140960c30(void)

void FUN_140960c30(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x5a8))();
  if (param_1[0x54] == 0) {
    cVar1 = (**(code **)(*param_1 + 0x5b8))(param_1);
    if ((cVar1 != '\0') && (param_1[0x30] != 0)) {
      (**(code **)(*param_1 + 0x640))(param_1);
      if (param_1[0x54] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140960c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x650))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140960ca0 FUN_140960ca0 body=446 status=ok
// SIG undefined FUN_140960ca0(void)

void FUN_140960ca0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x288);
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x294)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  physx::PxVehicleWheelsDynData::setTireForceShaderFunction
            (*(longlong *)(param_1 + 0x2a0) + 0x70,FUN_140966840);
  local_res8 = 0;
  uVar10 = uVar8;
  if (0 < *(int *)(param_1 + 0x228)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x220);
      uVar11 = uVar8;
      if (*(longlong *)(lVar3 + uVar10) != 0) {
        uVar6 = FUN_14096caa0();
        uVar4 = *(ulonglong *)(lVar3 + uVar10);
        for (uVar5 = uVar4; (uVar11 = uVar8, uVar5 != 0 && (uVar11 = uVar4, uVar5 != uVar6));
            uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
        }
      }
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = FUN_1417985e0(uVar11,param_1,0,0,0,0,0,0,0);
      iVar2 = *(int *)(param_1 + 0x290);
      *(int *)(param_1 + 0x290) = iVar2 + 1;
      if (*(int *)(param_1 + 0x294) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar7;
      local_res8 = local_res8 + 1;
      uVar10 = uVar10 + 0x38;
    } while (local_res8 < *(int *)(param_1 + 0x228));
  }
  uVar10 = uVar8;
  if (0 < *(int *)(param_1 + 0x290)) {
    do {
      physx::PxVehicleWheelsDynData::setTireForceShaderData
                (*(longlong *)(param_1 + 0x2a0) + 0x70,uVar10,*(undefined8 *)(uVar8 + *plVar1));
      (**(code **)(**(longlong **)(uVar8 + *plVar1) + 0x278))
                (*(longlong **)(uVar8 + *plVar1),param_1,uVar10);
      uVar9 = (int)uVar10 + 1;
      uVar8 = uVar8 + 8;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x290));
  }
  return;
}



// FUNCTION 140960e60 FUN_140960e60 body=119 status=ok
// SIG undefined FUN_140960e60(void)

void FUN_140960e60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x290)) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + *(longlong *)(param_1 + 0x288)) + 0x280))();
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x290));
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(uint *)(param_1 + 0x294) < 0x80000000) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x288,0);
  return;
}



// FUNCTION 140960ee0 FUN_140960ee0 body=62 status=ok
// SIG undefined FUN_140960ee0(void)

undefined8 * FUN_140960ee0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FStartVehicleUpdatesTickFunction",0x42);
  return param_2;
}



// FUNCTION 140960f20 FUN_140960f20 body=263 status=ok
// SIG undefined FUN_140960f20(void)

void FUN_140960f20(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146863dd8) && (_Init_thread_header(&DAT_146863dd8), DAT_146863dd8 == -1))
  {
    FName::FName(&DAT_146863dd0,L"Vehicle",1);
    _Init_thread_footer(&DAT_146863dd8);
  }
  FUN_142693100(param_1,param_2,param_3,param_4,param_5);
  plVar2 = (longlong *)*param_3;
  plVar1 = plVar2 + (int)param_3[1];
  while( true ) {
    if (plVar2 == plVar1) {
      return;
    }
    if (*plVar2 == DAT_146863dd0) break;
    plVar2 = plVar2 + 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x5e0))
            (*(longlong **)(param_1 + 0x4c8),param_2,param_4,param_5);
  return;
}



// FUNCTION 1409610e0 FUN_1409610e0 body=4396 status=ok
// SIG undefined FUN_1409610e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409610e0(longlong *param_1,undefined8 param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  short sVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 uVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_2a8 [32];
  double local_288;
  undefined4 local_280;
  undefined4 local_278;
  ulonglong *local_270;
  longlong local_268 [2];
  uint local_258;
  uint local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  ulonglong local_230 [2];
  undefined2 *local_220;
  int local_218;
  undefined8 local_210;
  float local_208;
  float *local_200;
  longlong *local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  longlong local_1d8 [2];
  longlong *local_1c8;
  longlong *local_1b8;
  longlong local_1b0 [2];
  longlong local_1a0 [2];
  longlong local_190 [2];
  longlong local_180 [2];
  longlong local_170 [2];
  longlong local_160 [2];
  longlong local_150 [2];
  longlong local_140 [2];
  longlong local_130 [2];
  ulonglong local_120 [28];
  longlong *plVar15;
  
  local_120[5] = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  plVar13 = (longlong *)0x0;
  local_218 = 0;
  if (param_1[0x54] != 0) {
    lVar4 = param_1[0x24];
    local_200 = param_3;
    local_1b8 = param_1;
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    plVar5 = (longlong *)
             FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar4 + 0x218));
    local_1c8 = plVar5;
    FWeakObjectPtr::operator=(&local_1f8,param_1);
    FUN_1409685e0(plVar5,&local_1f8,1);
    puVar6 = (undefined2 *)UEngine::GetSmallFont();
    local_220 = puVar6;
    FUN_1428bbbd0(param_2,&DAT_1464aa730);
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    FString::PrintfImpl(local_268,L"Speed (km/h): %d",
                        (int)(*(float *)((longlong)param_1 + 0x424) * 0.036));
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    FString::PrintfImpl(local_268,L"Steering: %.1f",(double)*(float *)((longlong)param_1 + 0x314));
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    FString::PrintfImpl(local_268,L"Throttle: %.1f",(double)*(float *)(param_1 + 99));
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    FString::PrintfImpl(local_268,L"Brake: %.1f",(double)*(float *)((longlong)param_1 + 0x31c));
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    if (param_1[0x55] == 0) {
      if ((param_1[0x54] == 0) || (iVar3 = (int)param_1[0x45], iVar3 == 0)) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = 0.0;
        plVar5 = plVar13;
        if (0 < iVar3) {
          do {
            fVar19 = (float)physx::PxVehicleWheelsDynData::getWheelRotationSpeed
                                      (param_1[0x54] + 0x70,plVar5);
            iVar3 = (int)param_1[0x45];
            fVar18 = fVar18 + fVar19;
            uVar14 = (int)plVar5 + 1;
            plVar5 = (longlong *)(ulonglong)uVar14;
          } while ((int)uVar14 < iVar3);
        }
        fVar18 = fVar18 / (float)iVar3;
      }
    }
    else {
      fVar18 = *(float *)(param_1[0x55] + 0x10c) * 9.5493;
    }
    FString::PrintfImpl(local_268,L"RPM: %.1f",(double)fVar18);
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    plVar5 = plVar13;
    if (param_1[0x55] != 0) {
      iVar3 = *(int *)(param_1[0x55] + 0x104);
      if (iVar3 == 0) {
        plVar5 = (longlong *)0xffffffff;
      }
      else if (iVar3 != 1) {
        plVar5 = (longlong *)(ulonglong)(iVar3 - 1);
      }
    }
    FString::PrintfImpl(local_268,L"Gear: %d",plVar5);
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    FString::PrintfImpl(local_268,L"Drag: %.1f",(double)*(float *)(param_1 + 0x4b));
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    local_230[0] = 0;
    lVar4 = (**(code **)(*(longlong *)param_1[0x30] + 0x6d0))((longlong *)param_1[0x30],0,1);
    plVar5 = *(longlong **)(lVar4 + 0x110);
    plVar8 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar4 + 0x118);
    }
    if (plVar8 != (longlong *)0x0) {
      if (plVar8 == plVar5) {
        sVar9 = *(short *)(lVar4 + 6);
      }
      else {
        sVar9 = *(short *)(lVar4 + 8);
      }
      plVar5 = (longlong *)FUN_1426e2550((int)sVar9);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x348))
                  (plVar5,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x116);
      }
      plVar15 = plVar13;
      if ((short)plVar8[1] == 6) {
        plVar15 = plVar8;
      }
      if (plVar15 != (longlong *)0x0) {
        puVar7 = (undefined8 *)(**(code **)(*plVar15 + 0x118))(plVar15,local_230);
        local_208 = *(float *)(puVar7 + 1);
        local_1e8 = *puVar7;
        local_1e0 = local_208;
        lVar4 = (**(code **)(*plVar15 + 0xf0))(plVar15,local_120);
        local_208 = *(float *)(lVar4 + 0x18);
        local_210 = *(undefined8 *)(lVar4 + 0x10);
        local_1f0 = local_208;
      }
      puVar6 = local_220;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x350))(plVar5);
        puVar6 = local_220;
      }
    }
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_288 = (double)local_1e0;
    local_120[3] = 0;
    local_120[4] = 0;
    FString::PrintfImpl(local_268,L"Inertia tensor: %.2f, %.2f, %.2f",(double)(float)local_1e8,
                        (double)local_1e8._4_4_);
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    local_120[0] = local_120[0] & 0xfffffffefffffffc;
    local_120[1] = 0;
    local_120[2] = 0;
    local_288 = (double)local_208;
    local_120[3] = 0;
    local_120[4] = 0;
    FString::PrintfImpl(local_268,L"Local COM: %.2f, %.2f, %.2f",(double)(float)local_210,
                        (double)local_210._4_4_);
    local_270 = local_120;
    local_278 = 0x3f800000;
    local_280 = 0x3f800000;
    local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
    fVar18 = (float)UCanvas::DrawText(param_2,puVar6,local_268,0x40800000);
    *param_4 = fVar18 + *param_4;
    if (local_268[0] != 0) {
      FMemory::Free();
    }
    plVar8 = local_1c8;
    plVar5 = (longlong *)*local_1c8;
    local_1f8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x348))
                (plVar5,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\WheeledVehicleMovementComponent.cpp"
                 ,0x7b8);
    }
    FWeakObjectPtr::operator=(&local_210,param_1);
    local_1e8 = FUN_1409655c0(plVar8,&local_210);
    puVar6 = local_220;
    lVar4 = param_1[0x54];
    local_230[0] = local_230[0] & 0xffffffff00000000;
    plVar15 = plVar13;
    plVar17 = plVar13;
    if (*(int *)(lVar4 + 0x3c) != 0) {
      do {
        lVar10 = (longlong)plVar17 * 0xa0;
        lVar1 = *(longlong *)(lVar10 + 0x30 + local_1e8);
        fVar18 = *(float *)(lVar10 + 0x7c + local_1e8);
        fVar19 = *(float *)(lVar10 + 0x78 + local_1e8);
        fVar20 = (float)physx::PxVehicleWheelsDynData::getWheelRotationSpeed
                                  (lVar4 + 0x70,local_230[0] & 0xffffffff);
        plVar5 = plVar13;
        if (((lVar1 != 0) && (piVar2 = *(int **)(lVar1 + 0x10), piVar2 != (int *)0x0)) &&
           (*piVar2 == 2)) {
          plVar5 = *(longlong **)(piVar2 + 2);
        }
        if (plVar5 == (longlong *)0x0) {
          local_1d8[0] = 0;
          local_1d8[1] = 5;
          uVar14 = (uint)plVar15 | 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d8,0);
          FGenericPlatformString::Memcpy(local_1d8[0],L"NONE",10);
          plVar8 = local_1d8;
        }
        else {
          local_220 = (undefined2 *)plVar5[3];
          uVar14 = (uint)plVar15 | 1;
          FName::ToString(&local_220,local_1b0);
          plVar8 = local_1b0;
        }
        plVar15 = (longlong *)(ulonglong)uVar14;
        local_220 = (undefined2 *)*plVar8;
        *plVar8 = 0;
        local_218 = (int)plVar8[1];
        plVar8[1] = 0;
        if (((uVar14 & 2) != 0) &&
           (plVar15 = (longlong *)(ulonglong)(uVar14 & 0xfffffffd), local_1d8[0] != 0)) {
          FMemory::Free();
        }
        if ((((ulonglong)plVar15 & 1) != 0) &&
           (plVar15 = (longlong *)(ulonglong)((uint)plVar15 & 0xfffffffe), local_1b0[0] != 0)) {
          FMemory::Free();
        }
        if (plVar5 == (longlong *)0x0) {
          uVar16 = 0x3f;
        }
        else {
          uVar16 = (undefined1)plVar5[10];
        }
        FUN_1428bbbd0(param_2,&DAT_1464aa730);
        local_258 = local_258 & 0xfffffffc;
        local_254 = local_254 & 0xfffffffe;
        local_250 = 0;
        uStack_248 = 0;
        local_240 = 0;
        uStack_238 = 0;
        FString::PrintfImpl(local_1a0,L"[%d]",local_230[0] & 0xffffffff);
        local_270 = (ulonglong *)&local_258;
        local_278 = 0x3f800000;
        local_280 = 0x3f800000;
        local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
        UCanvas::DrawText(param_2,puVar6,local_1a0,0x40800000);
        if (local_1a0[0] != 0) {
          FMemory::Free();
        }
        local_258 = local_258 & 0xfffffffc;
        local_254 = local_254 & 0xfffffffe;
        local_250 = 0;
        uStack_248 = 0;
        local_240 = 0;
        uStack_238 = 0;
        FString::PrintfImpl(local_190,L"RPM: %.1f",(double)(fVar20 * 30.0 * 0.31830987));
        local_270 = (ulonglong *)&local_258;
        local_278 = 0x3f800000;
        local_280 = 0x3f800000;
        local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
        UCanvas::DrawText(param_2,puVar6,local_190,0x41c00000);
        if (local_190[0] != 0) {
          FMemory::Free();
        }
        local_258 = local_258 & 0xfffffffc;
        local_254 = local_254 & 0xfffffffe;
        local_250 = 0;
        uStack_248 = 0;
        local_240 = 0;
        uStack_238 = 0;
        FString::PrintfImpl(local_180,L"Slip Ratio: %.2f",(double)fVar19);
        local_270 = (ulonglong *)&local_258;
        local_278 = 0x3f800000;
        local_280 = 0x3f800000;
        local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
        UCanvas::DrawText(param_2,puVar6,local_180,0x42d00000);
        if (local_180[0] != 0) {
          FMemory::Free();
        }
        local_258 = local_258 & 0xfffffffc;
        local_254 = local_254 & 0xfffffffe;
        local_250 = 0;
        uStack_248 = 0;
        local_240 = 0;
        uStack_238 = 0;
        FString::PrintfImpl(local_170,L"Slip Angle (degrees): %.1f",(double)(fVar18 * 57.295776));
        local_270 = (ulonglong *)&local_258;
        local_278 = 0x3f800000;
        local_280 = 0x3f800000;
        local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
        UCanvas::DrawText(param_2,puVar6,local_170,0x434c0000);
        if (local_170[0] != 0) {
          FMemory::Free();
        }
        local_258 = local_258 & 0xfffffffc;
        local_254 = local_254 & 0xfffffffe;
        puVar12 = &DAT_143f3eda8;
        if (local_218 != 0) {
          puVar12 = local_220;
        }
        local_250 = 0;
        uStack_248 = 0;
        local_240 = 0;
        uStack_238 = 0;
        FString::PrintfImpl(local_160,L"Contact Surface: %s %i",puVar12,uVar16);
        local_270 = (ulonglong *)&local_258;
        local_278 = 0x3f800000;
        local_280 = 0x3f800000;
        local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
        UCanvas::DrawText(param_2,puVar6,local_160,0x43c00000);
        if (local_160[0] != 0) {
          FMemory::Free();
        }
        iVar3 = (int)(float)local_230[0];
        *param_4 = *param_4 + *local_200;
        if ((int)(float)local_230[0] < (int)param_1[0x52]) {
          local_258 = local_258 & 0xfffffffc;
          local_254 = local_254 & 0xfffffffe;
          lVar4 = *(longlong *)(param_1[0x51] + (longlong)(int)(float)local_230[0] * 8);
          local_250 = 0;
          uStack_248 = 0;
          local_240 = 0;
          uStack_238 = 0;
          FString::PrintfImpl(local_150,L"Normalized Load: %.1f",(double)*(float *)(lVar4 + 0xb8));
          local_270 = (ulonglong *)&local_258;
          local_278 = 0x3f800000;
          local_280 = 0x3f800000;
          local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
          UCanvas::DrawText(param_2,puVar6,local_150,0x41c00000);
          if (local_150[0] != 0) {
            FMemory::Free();
          }
          local_258 = local_258 & 0xfffffffc;
          local_254 = local_254 & 0xfffffffe;
          local_250 = 0;
          uStack_248 = 0;
          local_240 = 0;
          uStack_238 = 0;
          FString::PrintfImpl(local_140,L"Torque (Nm): %.1f",
                              (double)(*(float *)(lVar4 + 0xc0) * 0.0001));
          local_270 = (ulonglong *)&local_258;
          local_278 = 0x3f800000;
          local_280 = 0x3f800000;
          local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
          UCanvas::DrawText(param_2,puVar6,local_140,0x432e0000);
          if (local_140[0] != 0) {
            FMemory::Free();
          }
          local_258 = local_258 & 0xfffffffc;
          local_254 = local_254 & 0xfffffffe;
          local_250 = 0;
          uStack_248 = 0;
          local_240 = 0;
          uStack_238 = 0;
          FString::PrintfImpl(local_130,L"Long Force: %.1fN (%.1f%%)",
                              (double)(*(float *)(lVar4 + 0xc4) * 0.01),
                              (double)((*(float *)(lVar4 + 0xc4) * 100.0) / *(float *)(lVar4 + 0xbc)
                                      ));
          local_270 = (ulonglong *)&local_258;
          local_278 = 0x3f800000;
          local_280 = 0x3f800000;
          local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
          UCanvas::DrawText(param_2,puVar6,local_130,0x43a20000);
          if (local_130[0] != 0) {
            FMemory::Free();
          }
          local_258 = local_258 & 0xfffffffc;
          local_254 = local_254 & 0xfffffffe;
          local_250 = 0;
          uStack_248 = 0;
          local_240 = 0;
          uStack_238 = 0;
          FString::PrintfImpl(local_120,L"Lat Force: %.1fN (%.1f%%)",
                              (double)(*(float *)(lVar4 + 200) * 0.01),
                              (double)((*(float *)(lVar4 + 200) * 100.0) / *(float *)(lVar4 + 0xbc))
                             );
          local_270 = (ulonglong *)&local_258;
          local_278 = 0x3f800000;
          local_280 = 0x3f800000;
          local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
          UCanvas::DrawText(param_2,puVar6,local_120,0x44030000);
          if (local_120[0] != 0) {
            FMemory::Free();
          }
          iVar3 = (int)(float)local_230[0];
        }
        else {
          local_268[0] = 0;
          local_268[1] = 0x23;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_268,0);
          FGenericPlatformString::Memcpy(local_268[0],L"Wheels array insufficiently sized!",0x46);
          local_258 = local_258 & 0xfffffffc;
          local_254 = local_254 & 0xfffffffe;
          local_250 = 0;
          uStack_248 = 0;
          local_270 = (ulonglong *)&local_258;
          local_278 = 0x3f800000;
          local_280 = 0x3f800000;
          local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
          local_240 = 0;
          uStack_238 = 0;
          UCanvas::DrawText(param_2,puVar6,local_268,*local_200 * 50.0);
          if (local_268[0] != 0) {
            FMemory::Free();
          }
        }
        *param_4 = *local_200 * 1.2 + *param_4;
        if (local_220 != (undefined2 *)0x0) {
          FMemory::Free(local_220);
        }
        lVar4 = param_1[0x54];
        uVar14 = iVar3 + 1;
        local_230[0] = CONCAT44(local_230[0]._4_4_,uVar14);
        plVar5 = local_1f8;
        plVar8 = local_1c8;
        plVar17 = (longlong *)(ulonglong)uVar14;
      } while (uVar14 < *(uint *)(lVar4 + 0x3c));
    }
    if ((plVar8[0x13] != 0) && (lVar1 = plVar8[0x12], lVar1 != 0)) {
      local_120[0] = 0x100000004;
      local_120[1] = 0x700000006;
      local_120[2] = 0x900000008;
      local_120[3] = 0x500000003;
      if (*(int *)(lVar4 + 0x3c) != 0) {
        do {
          puVar11 = local_120;
          fVar18 = 4.0;
          lVar4 = 8;
          do {
            local_270 = local_230;
            local_278 = 0x42c80000;
            local_280 = 0x42c80000;
            local_288 = (double)CONCAT44(local_288._4_4_,*param_4);
            local_230[0] = CONCAT44(local_230[0]._4_4_,0x42c80000);
            FUN_140962210((int)*puVar11,*(longlong *)(lVar1 + 8) + (longlong)plVar13 * 0x3de0,
                          param_2,fVar18);
            puVar11 = (ulonglong *)((longlong)puVar11 + 4);
            fVar18 = fVar18 + (float)local_230[0] + 10.0;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          fVar18 = *param_4;
          uVar14 = (int)plVar13 + 1;
          plVar13 = (longlong *)(ulonglong)uVar14;
          *param_4 = fVar18 + 110.0;
          *param_4 = fVar18 + 110.0 + *local_200;
          plVar5 = local_1f8;
          param_1 = local_1b8;
        } while (uVar14 < *(uint *)(local_1b8[0x54] + 0x3c));
      }
    }
    (**(code **)(*param_1 + 0x5e8))(param_1);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x350))(plVar5);
    }
  }
  return;
}



// FUNCTION 140962210 FUN_140962210 body=1692 status=ok
// SIG undefined FUN_140962210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140962210(uint param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
                  float param_6,float param_7,float *param_8)

{
  size_t _Size;
  void *pvVar1;
  int iVar2;
  short *_Src;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1898 [32];
  void **local_1878;
  undefined4 local_1870;
  undefined4 local_1868;
  float *local_1860;
  undefined8 local_1858;
  void *local_1850;
  undefined8 local_1848;
  undefined8 local_1840;
  void *local_1838;
  int local_1830;
  undefined4 local_182c;
  void *local_1828;
  int iStack_1820;
  undefined4 uStack_181c;
  float local_1818;
  float local_1814 [3];
  undefined **local_1808 [2];
  undefined4 local_17f4;
  short local_1788 [128];
  short *local_1688;
  short *local_1680;
  undefined4 local_1678;
  float local_1668;
  uint uStack_1664;
  undefined8 uStack_1660;
  undefined8 local_1658;
  undefined8 uStack_1650;
  undefined8 local_1648;
  undefined4 local_1640;
  undefined **local_1638;
  undefined8 uStack_1630;
  undefined8 local_1628;
  ulonglong uStack_1620;
  undefined4 local_1618;
  undefined4 uStack_1614;
  undefined4 uStack_1610;
  undefined4 uStack_160c;
  undefined8 uStack_1608;
  float local_1600;
  float local_15fc;
  undefined4 local_15f8;
  float local_15f4;
  float local_15f0;
  undefined8 local_15ec;
  float local_15d8 [512];
  undefined1 local_dd8 [3072];
  char local_1d8 [256];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1898;
  local_1878 = (void **)local_1d8;
  local_1638 = (undefined **)0xc0000000;
  uStack_1630 = 0;
  local_1618 = 0xbf800000;
  local_1628 = 0xc2480000;
  uStack_1620 = 0xbe4ccccd;
  local_1858 = param_8;
  uStack_1614 = 0;
  uStack_1610 = 0;
  local_1668 = 0.0;
  uStack_1664 = 0x469c4000;
  uStack_1660 = 0x40400000469c4000;
  local_1658 = 0x3f8ccccd437a0000;
  uStack_1650 = 0x400000003e4ccccd;
  local_1648 = 0x400000003f800000;
  local_1640 = 0x40000000;
  local_1840 = param_3;
  physx::PxVehicleGraph::computeGraphChannel(param_2,param_1,local_15d8,local_dd8);
  FString::PrintfImpl(&local_1850,L"[%.2f,%.2f]",
                      (double)*(float *)((longlong)&local_1638 + (ulonglong)param_1 * 4),
                      (double)(&local_1668)[param_1]);
  iVar10 = 0;
  lVar6 = -1;
  local_1688 = (short *)0x0;
  lVar9 = -1;
  do {
    lVar3 = lVar9;
    lVar9 = lVar3 + 1;
  } while (local_1d8[lVar3 + 1] != '\0');
  uVar8 = (int)lVar3 + 2;
  local_1678 = (undefined4)(lVar3 + 1);
  if ((0x80 < uVar8) && (uVar8 != 0)) {
    local_1688 = (short *)FMemory::Realloc(0,(longlong)(int)uVar8 * 2,0);
  }
  local_1680 = local_1788;
  if (local_1688 != (short *)0x0) {
    local_1680 = local_1688;
  }
  local_1878 = (void **)CONCAT62(local_1878._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_1680,uVar8,local_1d8,uVar8);
  _Src = local_1680;
  if ((local_1680 == (short *)0x0) || (*local_1680 == 0)) {
    local_1838 = local_1850;
    local_1830 = (int)local_1848;
    local_182c = local_1848._4_4_;
    local_1848 = 0;
    local_1850 = (void *)0x0;
  }
  else {
    do {
      lVar6 = lVar6 + 1;
    } while (local_1680[lVar6] != 0);
    if ((int)local_1848 != 0) {
      iVar10 = (int)local_1848 + -1;
    }
    local_1828 = (void *)0x0;
    uStack_181c = 0;
    iVar5 = (int)lVar6;
    iStack_1820 = iVar10 + 1 + iVar5;
    if (0 < iStack_1820) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1828,0);
    }
    iVar2 = iStack_1820;
    pvVar1 = local_1828;
    _Size = (longlong)iVar5 * 2;
    _guard_xfg_dispatch_icall_nop(local_1828,_Src,_Size);
    _guard_xfg_dispatch_icall_nop
              ((void *)(_Size + (longlong)pvVar1),local_1850,(longlong)iVar10 * 2);
    *(undefined2 *)((longlong)pvVar1 + ((longlong)iVar10 + (longlong)iVar5) * 2) = 0;
    param_3 = local_1840;
    param_8 = local_1858;
    local_182c = uStack_181c;
    local_1838 = pvVar1;
    local_1830 = iVar2;
  }
  if (local_1688 != (short *)0x0) {
    FMemory::Free(local_1688);
  }
  if (local_1850 != (void *)0x0) {
    FMemory::Free();
  }
  local_1858 = (float *)CONCAT44((int)((ulonglong)local_1858 >> 0x20),0xffffff00);
  FUN_1428bbbd0(param_3,&local_1858);
  uVar4 = UEngine::GetSmallFont();
  local_1668 = (float)((uint)local_1668 & 0xfffffffc);
  uStack_1664 = uStack_1664 & 0xfffffffe;
  local_1860 = &local_1668;
  local_1868 = 0x3f800000;
  local_1870 = 0x3f800000;
  local_1878 = (void **)CONCAT44(local_1878._4_4_,param_5);
  uStack_1660 = 0;
  local_1658 = 0;
  uStack_1650 = 0;
  local_1648 = 0;
  UCanvas::DrawText(param_3,uVar4,&local_1838,param_4);
  local_1878 = (void **)&local_1818;
  local_1868 = 0x3f800000;
  local_1870 = 0x3f800000;
  UCanvas::TextSize(param_3,uVar4,&local_1838,local_1814);
  local_1878 = &local_1828;
  local_1858._0_4_ = param_6;
  local_1858._4_4_ = param_6;
  local_1828 = (void *)0x3e00000000000000;
  iStack_1820 = 0;
  uStack_181c = 0x3e800000;
  fVar15 = local_1818 + param_5 + 4.0;
  fVar16 = (param_7 - local_1818) - 4.0;
  local_1840 = CONCAT44(fVar15,param_4);
  FCanvasTileItem::FCanvasTileItem(local_1808,&local_1840,DAT_146ac3d68,&local_1858);
  local_17f4 = 2;
  FUN_1428a6cf0(param_3,local_1808);
  local_1858 = (float *)CONCAT44(local_1858._4_4_,0x80002000);
  FUN_1428bbbd0(param_3,&local_1858);
  pfVar7 = local_15d8 + 3;
  lVar9 = 0xff;
  do {
    fVar12 = pfVar7[-3] + 0.5;
    if (0.0 <= fVar12) {
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
    }
    else {
      fVar12 = 0.0;
    }
    fVar13 = pfVar7[-1] + 0.5;
    if (0.0 <= fVar13) {
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
    }
    else {
      fVar13 = 0.0;
    }
    fVar11 = pfVar7[-2] + 0.5;
    if (0.0 <= fVar11) {
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
    fVar14 = *pfVar7 + 0.5;
    if (0.0 <= fVar14) {
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
    }
    else {
      fVar14 = 0.0;
    }
    local_1628 = 0;
    uStack_1620 = uStack_1620 & 0xffffffffffffff00;
    local_15f4 = fVar13 * param_6 + param_4;
    local_1618 = 0;
    uStack_1614 = 0;
    local_1600 = fVar12 * param_6 + param_4;
    local_1638 = &PTR_FUN_14416c998;
    local_15ec = 0;
    local_15fc = (1.0 - fVar11) * fVar16 + fVar15;
    local_15f8 = 0;
    local_15f0 = (1.0 - fVar14) * fVar16 + fVar15;
    uStack_1610 = 0x3f800000;
    uStack_160c = 0x3f000000;
    uStack_1608 = 0x3f80000000000000;
    uStack_1630 = CONCAT44(local_15fc,local_1600);
    FCanvasLineItem::Draw(&local_1638,*(undefined8 *)(param_3 + 0x260));
    pfVar7 = pfVar7 + 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (local_1814[0] <= param_6) {
    local_1814[0] = param_6;
  }
  *param_8 = local_1814[0];
  local_1808[0] = &PTR_FUN_143f4c5f0;
  if (local_1838 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409628b0 FUN_1409628b0 body=667 status=ok
// SIG undefined FUN_1409628b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409628b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  undefined8 *puVar16;
  float *pfVar17;
  int *piVar18;
  longlong lVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong *local_c8;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  piVar22 = *(int **)(param_1 + 0x140);
  lVar2 = param_2[3];
  local_c8 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x6c8);
  piVar21 = piVar22 + (longlong)*(int *)(param_1 + 0x148) * 8;
  for (; piVar22 != piVar21; piVar22 = piVar22 + 8) {
    cVar15 = FBoneReference::IsValidToEvaluate(piVar22 + 2,lVar2);
    if (cVar15 != '\0') {
      if ((char)piVar22[5] == '\0') {
        iVar20 = piVar22[6];
      }
      else if (piVar22[4] == -1) {
        iVar20 = -1;
      }
      else {
        iVar20 = *(int *)(*(longlong *)(lVar2 + 0x80) + (longlong)piVar22[4] * 4);
      }
      if (*(char *)((longlong)iVar20 + param_2[4]) == '\0') {
        FUN_14060c680(param_2 + 1,iVar20);
      }
      puVar16 = (undefined8 *)((longlong)iVar20 * 0x30 + param_2[1]);
      local_d8 = 1;
      local_a8 = *puVar16;
      uStack_a0 = puVar16[1];
      local_98 = *(float *)(puVar16 + 2);
      fStack_94 = *(float *)((longlong)puVar16 + 0x14);
      fStack_90 = *(float *)(puVar16 + 3);
      fStack_8c = *(float *)((longlong)puVar16 + 0x1c);
      local_88 = *(undefined4 *)(puVar16 + 4);
      uStack_84 = *(undefined4 *)((longlong)puVar16 + 0x24);
      uStack_80 = *(undefined4 *)(puVar16 + 5);
      uStack_7c = *(undefined4 *)((longlong)puVar16 + 0x2c);
      FUN_14224c850(*param_2 + 0x10,param_2 + 1,&local_a8,iVar20);
      plVar12 = local_c8;
      pfVar17 = (float *)FRotator::Quaternion((longlong)*piVar22 * 0x20 + *local_c8 + 8,local_b8);
      lVar19 = (longlong)*piVar22 * 0x20;
      fVar4 = *pfVar17;
      fVar5 = pfVar17[1];
      fVar6 = pfVar17[2];
      fVar7 = pfVar17[3];
      lVar3 = *plVar12;
      fVar25 = local_a8._4_4_ * fVar4;
      fVar26 = (float)local_a8 * fVar4;
      local_d8 = 1;
      fVar23 = (float)local_a8 * fVar5;
      fVar24 = local_a8._4_4_ * fVar5;
      local_a8 = CONCAT44((float)uStack_a0 * fVar4 * fRam0000000146863d24 + fVar7 * local_a8._4_4_ +
                          uStack_a0._4_4_ * fVar5 * fRam0000000146863d14 +
                          (float)local_a8 * fVar6 * fRam0000000146863d04,
                          uStack_a0._4_4_ * fVar4 * _DAT_146863d20 + fVar7 * (float)local_a8 +
                          (float)uStack_a0 * fVar5 * _DAT_146863d10 +
                          local_a8._4_4_ * fVar6 * _DAT_146863d00);
      uStack_a0 = CONCAT44(fVar26 * fRam0000000146863d2c + fVar7 * uStack_a0._4_4_ +
                           fVar24 * fRam0000000146863d1c +
                           (float)uStack_a0 * fVar6 * fRam0000000146863d0c,
                           fVar25 * fRam0000000146863d28 + fVar7 * (float)uStack_a0 +
                           fVar23 * fRam0000000146863d18 +
                           uStack_a0._4_4_ * fVar6 * fRam0000000146863d08);
      local_98 = local_98 + *(float *)(lVar19 + 0x14 + lVar3);
      fStack_94 = fStack_94 + *(float *)(lVar19 + 0x18 + lVar3);
      fStack_90 = fStack_90 + *(float *)(lVar19 + 0x1c + lVar3);
      fStack_8c = fStack_8c + 0.0;
      FUN_14224c080(*param_2 + 0x10,param_2 + 1,&local_a8,iVar20);
      uVar14 = uStack_a0;
      uVar13 = local_a8;
      iVar1 = (int)param_3[1];
      uVar8 = CONCAT44(fStack_94,local_98);
      uVar9 = CONCAT44(fStack_8c,fStack_90);
      uVar10 = CONCAT44(uStack_84,local_88);
      uVar11 = CONCAT44(uStack_7c,uStack_80);
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar1);
      }
      piVar18 = (int *)((longlong)iVar1 * 0x40 + *param_3);
      *piVar18 = iVar20;
      *(undefined8 *)(piVar18 + 4) = uVar13;
      *(undefined8 *)(piVar18 + 6) = uVar14;
      *(undefined8 *)(piVar18 + 8) = uVar8;
      *(undefined8 *)(piVar18 + 10) = uVar9;
      *(undefined8 *)(piVar18 + 0xc) = uVar10;
      *(undefined8 *)(piVar18 + 0xe) = uVar11;
    }
  }
  return;
}



// FUNCTION 140962b70 Execute body=101 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UWheeledVehicleMovementComponent,TTypeWrapper<void>___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140962bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140962be0 FUN_140962be0 body=35 status=ok
// SIG undefined FUN_140962be0(void)

undefined1 FUN_140962be0(longlong param_1)

{
  FUN_14096ad20(*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x10),0,
                *(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140962c10 ExecuteIfSafe body=149 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UWheeledVehicleMovementComponent,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&)>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5,param_6)
    ;
  }
  return lVar1 != 0;
}



// FUNCTION 140962cb0 FUN_140962cb0 body=298 status=ok
// SIG undefined FUN_140962cb0(void)

void FUN_140962cb0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  if (((*(int *)(param_1 + 3) != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[2] + 0x18))(), cVar3 != '\0')) {
    plVar5 = plVar7;
    if (*(int *)(param_1 + 3) != 0) {
      plVar5 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar5 + 0x40))(plVar5,param_3,param_1 + 6);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_141591a60(param_1[6],param_2,param_3);
  *param_1 = &PTR_FUN_14416a198;
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



// FUNCTION 140962e00 FUN_140962e00 body=70 status=ok
// SIG undefined FUN_140962e00(void)

void FUN_140962e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1426ea8d0(param_2,0,0);
  FCollisionResponseContainer::SetResponse(param_2,2,2);
  FUN_1426ea8d0(param_3,2);
  return;
}



// FUNCTION 140962e50 Find body=110 status=ok
// SIG undefined Find(void)

ulonglong TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::Find
                    (longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = lVar1;
  while( true ) {
    if (lVar4 == lVar1 + (longlong)(int)lVar2 * 8) {
      return 0xffffffff;
    }
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar4,param_2);
    if (cVar3 != '\0') break;
    lVar4 = lVar4 + 8;
  }
  return lVar4 - lVar1 >> 3 & 0xffffffff;
}



// FUNCTION 140962ec0 FindKey body=374 status=ok
// SIG undefined FindKey(void)

longlong TMapBase<AActor_*,AActor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_*,AActor_*,0>_>
         ::FindKey(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
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
  
  iVar1 = (int)param_1[5];
  local_58 = 0;
  uStack_54 = 1;
  puStack_20 = (uint *)(param_1 + 2);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puStack_20;
    }
    uVar2 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_140962f81;
      uVar2 = puVar6[lVar4 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_140962f81:
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
  local_30 = param_1;
  local_48 = puStack_20;
  if (bVar3) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iStack_3c * 0x18) == param_2) {
        return *param_1 + (longlong)iStack_3c * 0x18;
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return 0;
}



// FUNCTION 140963040 FUN_140963040 body=85 status=ok
// SIG undefined FUN_140963040(void)

float FUN_140963040(void)

{
  undefined8 uVar1;
  float *pfVar2;
  ulonglong uVar3;
  float fVar4;
  longlong local_28;
  uint local_20;
  
  fVar4 = 0.0;
  uVar1 = FRuntimeFloatCurve::GetRichCurve();
  FRichCurve::GetCopyOfKeys(uVar1,&local_28);
  uVar3 = (ulonglong)local_20;
  if (0 < (int)local_20) {
    pfVar2 = (float *)(local_28 + 8);
    do {
      if (fVar4 <= *pfVar2) {
        fVar4 = *pfVar2;
      }
      pfVar2 = pfVar2 + 7;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return fVar4;
}



// FUNCTION 1409630a0 FUN_1409630a0 body=525 status=ok
// SIG undefined FUN_1409630a0(void)

/* WARNING: Removing unreachable block (ram,0x000140963225) */
/* WARNING: Removing unreachable block (ram,0x000140963230) */
/* WARNING: Removing unreachable block (ram,0x00014096325f) */

void FUN_1409630a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    lVar6 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar6 = FUN_1423af5a0(lVar1);
        if ((lVar6 != 0) && (uVar7 = 0, uVar9 = uVar7, 0 < *(int *)(param_1 + 0x228))) {
          do {
            if (*(longlong *)(uVar9 + 8 + *(longlong *)(param_1 + 0x220)) != 0) {
              iVar5 = UPhysicsAsset::FindBodyIndex
                                (lVar6,*(undefined8 *)(uVar9 + 8 + *(longlong *)(param_1 + 0x220)));
              if (-1 < iVar5) {
                uVar2 = *(undefined8 *)((longlong)iVar5 * 8 + *(longlong *)(lVar1 + 0xbf0));
                FUN_1426a9dc0(uVar2,0);
                lVar3 = *(longlong *)((longlong)iVar5 * 8 + *(longlong *)(lVar6 + 0x40));
                if (lVar3 != 0) {
                  if (*(char *)(lVar3 + 0x98) == '\0') {
                    FUN_1426a9140(uVar2,0,0);
                  }
                  FUN_1426b9350(lVar6,iVar5);
                }
              }
            }
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
            uVar9 = uVar9 + 0x38;
          } while ((int)uVar8 < *(int *)(param_1 + 0x228));
        }
        *(undefined1 *)(lVar1 + 0xb15) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1409632b0 FUN_1409632b0 body=1255 status=ok
// SIG undefined FUN_1409632b0(void)

void FUN_1409632b0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int *piVar14;
  undefined8 local_res10;
  void *local_b8;
  int local_b0;
  int local_ac;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  undefined2 *local_48 [2];
  
  if (param_2[8] == 0.0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = *(undefined2 **)(param_2 + 6);
  }
  lVar5 = FClothLODDataCommon::StaticStruct();
  local_res10 = *(undefined8 *)(lVar5 + 0x18);
  FName::ToString(&local_res10,&local_88);
  puVar10 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar10 = local_88;
  }
  FString::PrintfImpl(&local_b8,L"%s<W:%.1f%%> %s",puVar10,(double)(*param_2 * 100.0),puVar12);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  local_98 = (void *)0x0;
  local_90 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  pvVar3 = local_98;
  FGenericPlatformString::Convert<char,wchar_t>(local_98,2,&DAT_144168914,2,0x3f);
  iVar4 = local_b0;
  if (((int)local_90 != 0) && (iVar13 = (int)local_90 + -1, iVar13 != 0)) {
    lVar5 = (longlong)local_b0;
    local_b0 = (uint)(local_b0 == 0) + local_b0 + iVar13;
    if (local_ac < local_b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
    }
    pvVar2 = (void *)((longlong)local_b8 + (lVar5 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar13 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar13 * 2) = 0;
  }
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FUN_141f85ec0(param_1,&local_b8);
  local_98 = (void *)0x0;
  local_90 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  pvVar3 = local_98;
  FGenericPlatformString::Convert<char,wchar_t>(local_98,2,&DAT_1441689d4,2,0x3f);
  iVar4 = local_b0;
  if (((int)local_90 != 0) && (iVar13 = (int)local_90 + -1, iVar13 != 0)) {
    lVar5 = (longlong)local_b0;
    local_b0 = (uint)(local_b0 == 0) + iVar13 + local_b0;
    if (local_ac < local_b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
    }
    pvVar2 = (void *)((longlong)local_b8 + (lVar5 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar13 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar13 * 2) = 0;
  }
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = local_b8;
  lVar5 = (longlong)local_b0;
  local_98 = (void *)0x0;
  local_90 = CONCAT44(local_90._4_4_,local_b0);
  if (local_b0 == 0) {
    local_90 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_b0,0);
    _guard_xfg_dispatch_icall_nop(local_98,pvVar3,lVar5 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_98,0);
  piVar8 = *(int **)(param_1 + 0x140);
  piVar14 = piVar8 + (longlong)*(int *)(param_1 + 0x148) * 8;
  if (piVar8 != piVar14) {
    piVar9 = piVar8 + 2;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x6c8);
    do {
      if (piVar9[2] == -1) {
        puVar6 = (undefined8 *)FName::ToString(piVar9,local_48);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar6;
        }
        FString::PrintfImpl(&local_98,L" [Wheel Index : %d] Bone: %s (invalid bone)",*piVar8,puVar12
                           );
        if (local_b8 != (void *)0x0) {
          FMemory::Free();
        }
        local_b8 = local_98;
        local_b0 = (int)local_90;
        local_ac = local_90._4_4_;
        local_90 = 0;
        local_98 = (void *)0x0;
        puVar12 = local_48[0];
      }
      else {
        lVar5 = *plVar1;
        lVar7 = (longlong)*piVar8 * 0x20;
        FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",
                            (double)*(float *)(lVar7 + 0x14 + lVar5),
                            (double)*(float *)(lVar7 + 0x18 + lVar5),
                            (double)*(float *)(lVar7 + 0x1c + lVar5));
        lVar5 = *plVar1;
        puVar12 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar12 = local_68;
        }
        lVar7 = (longlong)*piVar8 * 0x20;
        FString::PrintfImpl(&local_78,L"P=%f Y=%f R=%f",(double)*(float *)(lVar7 + 8 + lVar5),
                            (double)*(float *)(lVar7 + 0xc + lVar5),
                            (double)*(float *)(lVar7 + 0x10 + lVar5));
        puVar10 = &DAT_143f3eda8;
        if (local_70 != 0) {
          puVar10 = local_78;
        }
        puVar6 = (undefined8 *)FName::ToString(piVar9,local_58);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar6;
        }
        FString::PrintfImpl(&local_a8,
                            L" [Wheel Index : %d] Bone: %s , Rotation Offset : %s, Location Offset : %s"
                            ,*piVar8,puVar11,puVar10,puVar12);
        if (local_b8 != (void *)0x0) {
          FMemory::Free();
        }
        local_b8 = local_a8;
        local_b0 = (int)local_a0;
        local_ac = local_a0._4_4_;
        local_a0 = 0;
        local_a8 = (void *)0x0;
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        puVar12 = local_68;
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free();
          puVar12 = local_68;
        }
      }
      if (puVar12 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      pvVar3 = local_b8;
      lVar5 = (longlong)local_b0;
      local_88 = (undefined2 *)0x0;
      local_80 = local_b0;
      if (local_b0 == 0) {
        local_7c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_b0,0);
        _guard_xfg_dispatch_icall_nop(local_88,pvVar3,lVar5 * 2);
      }
      FNodeDebugData::AddDebugItem(param_2,&local_88,0);
      piVar8 = piVar8 + 8;
      piVar9 = piVar9 + 8;
    } while (piVar8 != piVar14);
  }
  FPoseLinkBase::GatherDebugData(param_1 + 0x30,param_2);
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409637a0 FUN_1409637a0 body=216 status=ok
// SIG undefined FUN_1409637a0(void)

void FUN_1409637a0(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = physx::PxVehicleWheelsSimData::getTireData
                    (*(longlong *)(param_1 + 0x2a0) + 0x10,*(undefined4 *)(param_2 + 0xa8));
  PxVehicleComputeTireForceDefault
            (uVar1,*param_3,param_3[1],param_3[2],0,param_3[3],param_3[4],param_3[5],param_3[6],
             param_3[8],param_3[7],param_3[9],param_3[10],param_4,param_4 + 4,param_4 + 8,local_res8
            );
  return;
}



// FUNCTION 140963880 FUN_140963880 body=9 status=ok
// SIG undefined FUN_140963880(void)

undefined4 FUN_140963880(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x31c);
}



// FUNCTION 140963890 FUN_140963890 body=272 status=ok
// SIG undefined FUN_140963890(void)

undefined4 * FUN_140963890(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int local_res8 [2];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  plVar7 = (longlong *)0x0;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146289b00,local_res8,*(undefined8 *)(lVar3 + 0x218));
  plVar5 = plVar7;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)(DAT_146289b00 + (longlong)local_res8[0] * 0x18);
  }
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar7;
  }
  if (plVar4 != (longlong *)0x0) {
    plVar7 = (longlong *)*plVar4;
  }
  plVar5 = (longlong *)*plVar7;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x348))
              (plVar5,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
               ,0xf1);
  }
  FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0xa0));
  lVar3 = FUN_1409655c0(plVar7,local_res8);
  lVar6 = (longlong)*(int *)(param_1 + 0xa8) * 0xa0;
  uVar1 = *(undefined4 *)(lVar3 + 0x4c + lVar6);
  uVar2 = *(undefined4 *)(lVar3 + 0x50 + lVar6);
  *param_2 = *(undefined4 *)(lVar3 + 0x48 + lVar6);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x350))(plVar5);
  }
  return param_2;
}



// FUNCTION 1409639a0 FUN_1409639a0 body=272 status=ok
// SIG undefined FUN_1409639a0(void)

undefined4 * FUN_1409639a0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int local_res8 [2];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  plVar7 = (longlong *)0x0;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146289b00,local_res8,*(undefined8 *)(lVar3 + 0x218));
  plVar5 = plVar7;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)(DAT_146289b00 + (longlong)local_res8[0] * 0x18);
  }
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar7;
  }
  if (plVar4 != (longlong *)0x0) {
    plVar7 = (longlong *)*plVar4;
  }
  plVar5 = (longlong *)*plVar7;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x348))
              (plVar5,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
               ,0xfa);
  }
  FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0xa0));
  lVar3 = FUN_1409655c0(plVar7,local_res8);
  lVar6 = (longlong)*(int *)(param_1 + 0xa8) * 0xa0;
  uVar1 = *(undefined4 *)(lVar3 + 0x40 + lVar6);
  uVar2 = *(undefined4 *)(lVar3 + 0x44 + lVar6);
  *param_2 = *(undefined4 *)(lVar3 + 0x3c + lVar6);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x350))(plVar5);
  }
  return param_2;
}



// FUNCTION 140963ab0 FUN_140963ab0 body=275 status=ok
// SIG undefined FUN_140963ab0(void)

longlong * FUN_140963ab0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res8 [2];
  
  plVar5 = (longlong *)0x0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146289b00,local_res8,*(undefined8 *)(lVar2 + 0x218));
  plVar4 = plVar5;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)(DAT_146289b00 + (longlong)local_res8[0] * 0x18);
  }
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = plVar5;
  }
  plVar4 = plVar5;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar3;
  }
  plVar3 = (longlong *)*plVar4;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x348))
              (plVar3,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
               ,0xe2);
  }
  FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0xa0));
  lVar2 = FUN_1409655c0(plVar4,local_res8);
  lVar2 = *(longlong *)(lVar2 + 0x30 + (longlong)*(int *)(param_1 + 0xa8) * 0xa0);
  if (((lVar2 != 0) && (piVar1 = *(int **)(lVar2 + 0x10), piVar1 != (int *)0x0)) && (*piVar1 == 2))
  {
    plVar5 = *(longlong **)(piVar1 + 2);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x350))(plVar3);
  }
  return plVar5;
}



// FUNCTION 140963bd0 FUN_140963bd0 body=128 status=ok
// SIG undefined FUN_140963bd0(void)

longlong FUN_140963bd0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x378);
  if (lVar3 == 0) {
    if ((*(longlong *)(param_1 + 0x178) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x118), lVar3 != 0)) {
      lVar2 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return *(longlong *)(lVar3 + 0x490);
      }
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 140963c50 FUN_140963c50 body=39 status=ok
// SIG undefined FUN_140963c50(void)

int FUN_140963c50(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x2a8) + 0x104);
    if (iVar1 == 0) {
      return -1;
    }
    if (iVar1 != 1) {
      return iVar1 + -1;
    }
  }
  return 0;
}



// FUNCTION 140963c80 GetInstance body=192 status=ok
// SIG undefined GetInstance(void)

longlong UAndroidPermissionCallbackProxy::GetInstance(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar5 = DAT_146863d58;
  if (DAT_146863d58 == 0) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar7 = 0;
    uVar4 = UTireConfig::GetPrivateStaticClass();
    lVar5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar6;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    DAT_146863d58 = lVar5;
    *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
  }
  return lVar5;
}



// FUNCTION 140963d40 GetFadeInStartDelay body=9 status=ok
// SIG undefined GetFadeInStartDelay(void)

undefined4 UDecalComponent::GetFadeInStartDelay(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x254);
}



// FUNCTION 140963d50 FUN_140963d50 body=169 status=ok
// SIG undefined FUN_140963d50(void)

float FUN_140963d50(longlong param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2a8) + 0x10c) * 9.5493;
  }
  if ((*(longlong *)(param_1 + 0x2a0) != 0) && (iVar1 = *(int *)(param_1 + 0x228), iVar1 != 0)) {
    iVar2 = 0;
    fVar4 = 0.0;
    if (0 < iVar1) {
      do {
        fVar3 = (float)physx::PxVehicleWheelsDynData::getWheelRotationSpeed
                                 (*(longlong *)(param_1 + 0x2a0) + 0x70,iVar2);
        iVar1 = *(int *)(param_1 + 0x228);
        fVar4 = fVar4 + fVar3;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    return fVar4 / (float)iVar1;
  }
  return 0.0;
}



// FUNCTION 140963e00 GetStartTimeOffset body=9 status=ok
// SIG undefined GetStartTimeOffset(void)

undefined4 UGeometryCacheComponent::GetStartTimeOffset(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x424);
}



// FUNCTION 140963e30 FUN_140963e30 body=9 status=ok
// SIG undefined FUN_140963e30(void)

undefined4 FUN_140963e30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 800);
}



// FUNCTION 140963e40 FUN_140963e40 body=297 status=ok
// SIG undefined FUN_140963e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140963e40(longlong param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar3 = DAT_1468b5d98;
  if (*(float *)(param_1 + 0x31c) <= 0.0) {
    if ((*(longlong *)(param_1 + 0x2a8) == 0) ||
       ((iVar1 = *(int *)(*(longlong *)(param_1 + 0x2a8) + 0x108), iVar1 != 0 &&
        ((iVar1 == 1 || (-1 < iVar1 + -1)))))) {
      fVar5 = *(float *)(param_1 + 0x318);
    }
    else {
      fVar5 = -1.0;
    }
  }
  else {
    fVar5 = -*(float *)(param_1 + 0x31c);
  }
  fVar2 = fVar5 * fVar5;
  if (fVar2 == 1.0) {
    *(ulonglong *)param_2 = (ulonglong)(uint)fVar5;
    param_2[2] = 0.0;
    return param_2;
  }
  if (fVar2 < 1e-08) {
    *(ulonglong *)param_2 = _DAT_1468b5d90;
    param_2[2] = fVar3;
    return param_2;
  }
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar3 = auVar4._0_4_;
  fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
  *param_2 = (fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3)) * fVar5;
  return param_2;
}



// FUNCTION 140963f70 FUN_140963f70 body=433 status=ok
// SIG undefined FUN_140963f70(void)

void FUN_140963f70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146863e18) && (_Init_thread_header(&DAT_146863e18), DAT_146863e18 == -1)) {
    uVar1 = FUN_14096cb40();
    FUN_14096cb40();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedState",1);
    DAT_146863e10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146863e18);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146863e10 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146863e10 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146863e10 + 0x30));
  }
  if ((*piVar5 < DAT_146863e28) && (_Init_thread_header(&DAT_146863e28), DAT_146863e28 == -1)) {
    uVar1 = FUN_14096cb40();
    FUN_14096cb40();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OverrideController",1);
    DAT_146863e20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146863e28);
  }
  if (0 < *(int *)(DAT_146863e20 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146863e20 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146863e20 + 0x30));
  }
  return;
}



// FUNCTION 140964130 FUN_140964130 body=333 status=ok
// SIG undefined FUN_140964130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140964130(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  plVar2 = *(longlong **)(param_1 + 0x180);
  if (plVar2 == (longlong *)0x0) {
    return param_2;
  }
  lVar1 = (**(code **)(*plVar2 + 0x6d0))(plVar2,0,1);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x110);
    plVar4 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0x118);
    }
    if (plVar4 != (longlong *)0x0) {
      if (plVar4 == plVar2) {
        sVar3 = *(short *)(lVar1 + 6);
      }
      else {
        sVar3 = *(short *)(lVar1 + 8);
      }
      plVar2 = (longlong *)FUN_1426e2550((int)sVar3);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x348))
                  (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x116);
      }
      plVar5 = (longlong *)0x0;
      if ((short)plVar4[1] == 6) {
        plVar5 = plVar4;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0xf0))(plVar5,local_28);
        *param_2 = local_18;
        *(undefined4 *)(param_2 + 1) = local_10;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x350))(plVar2);
      }
      return param_2;
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140964280 FUN_140964280 body=9 status=ok
// SIG undefined FUN_140964280(void)

undefined4 FUN_140964280(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x230);
}



// FUNCTION 140964290 FUN_140964290 body=89 status=ok
// SIG undefined FUN_140964290(void)

longlong FUN_140964290(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    lVar3 = FUN_142a0cc80();
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
  return 0;
}



// FUNCTION 1409642f0 FUN_1409642f0 body=131 status=ok
// SIG undefined FUN_1409642f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1409642f0(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 local_18;
  float local_10;
  
  lVar2 = *(longlong *)(param_1 + -0x2f0);
  if (lVar2 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar2 + 0x220);
    local_10 = *(float *)(lVar2 + 0x228);
  }
  param_2[1] = (int)((ulonglong)local_18 >> 0x20);
  fVar1 = *(float *)(param_1 + 0xc);
  *param_2 = (int)local_18;
  param_2[2] = local_10 - fVar1;
  return param_2;
}



// FUNCTION 140964380 FUN_140964380 body=660 status=ok
// SIG undefined FUN_140964380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140964380(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_b8 [28];
  undefined1 local_9c [148];
  
  if (((*(longlong *)(param_1 + 0xf8) == 0) ||
      (lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(param_1 + 0xa0),1),
      lVar7 == 0)) ||
     (plVar8 = (longlong *)
               FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar7 + 0x218)),
     plVar8 == (longlong *)0x0)) {
    fVar1 = DAT_1468b5d98;
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = fVar1;
  }
  else {
    plVar8 = (longlong *)*plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x348))
                (plVar8,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                 ,0xc3);
    }
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2a0) + 0xa0);
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x90))
                      (*(longlong **)(param_1 + 0xf8),local_b8);
    pfVar9 = (float *)(**(code **)(*plVar6 + 0xa0))(plVar6,local_9c);
    fVar14 = *(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x10);
    fVar11 = *(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 0x14);
    fVar1 = pfVar9[3];
    fVar13 = *(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0x18);
    fVar2 = *pfVar9;
    fVar3 = pfVar9[2];
    fVar4 = pfVar9[1];
    fVar12 = fVar1 * fVar1 - 0.5;
    fVar10 = fVar2 * fVar14 + fVar4 * fVar11 + fVar3 * fVar13;
    *param_2 = (fVar4 * fVar13 - fVar3 * fVar11) * fVar1 + fVar12 * fVar14 + fVar2 * fVar10 +
               pfVar9[4];
    fVar5 = pfVar9[6];
    param_2[1] = (fVar3 * fVar14 - fVar2 * fVar13) * fVar1 + fVar12 * fVar11 + fVar4 * fVar10 +
                 pfVar9[5];
    param_2[2] = (fVar2 * fVar11 - fVar4 * fVar14) * fVar1 + fVar12 * fVar13 + fVar3 * fVar10 +
                 fVar5;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x350))(plVar8);
    }
  }
  return param_2;
}



// FUNCTION 140964620 FUN_140964620 body=111 status=ok
// SIG undefined FUN_140964620(void)

undefined4 FUN_140964620(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_28;
  undefined4 *local_20;
  code *local_18;
  longlong *plStack_10;
  
  local_20 = local_res8;
  plStack_10 = &local_28;
  local_res8[0] = 0;
  local_res10 = 0;
  local_18 = FUN_1409607e0;
  local_28 = param_1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                    (*(longlong **)(param_1 + 0x180),0,1);
  FUN_1426936b0(uVar1,&local_18);
  return local_res8[0];
}



// FUNCTION 140964690 FUN_140964690 body=9 status=ok
// SIG undefined FUN_140964690(void)

undefined4 FUN_140964690(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



// FUNCTION 140964710 FUN_140964710 body=205 status=ok
// SIG undefined FUN_140964710(void)

float FUN_140964710(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(param_1 + 0xa0),1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)
             FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar1 + 0x218));
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x348))
                  (plVar2,
                   "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                   ,0x57);
      }
      fVar3 = (float)physx::PxVehicleWheelsDynData::getWheelRotationAngle
                               (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2a0) + 0x70,
                                *(undefined4 *)(param_1 + 0xa8));
      _isnan((double)(fVar3 * -57.295776));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x350))(plVar2);
      }
      return fVar3 * -57.295776;
    }
  }
  return 0.0;
}



// FUNCTION 1409647e0 FUN_1409647e0 body=232 status=ok
// SIG undefined FUN_1409647e0(void)

float FUN_1409647e0(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(param_1 + 0xa0),1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)
             FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar3 + 0x218));
    if (plVar4 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x348))
                  (plVar2,
                   "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                   ,0x4b);
      }
      FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0xa0));
      lVar3 = FUN_1409655c0(plVar4,local_res8);
      fVar1 = *(float *)(lVar3 + 0x80 + (longlong)*(int *)(param_1 + 0xa8) * 0xa0);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x350))(plVar2);
      }
      return fVar1 * 57.295776;
    }
  }
  return 0.0;
}



// FUNCTION 1409648d0 FUN_1409648d0 body=9 status=ok
// SIG undefined FUN_1409648d0(void)

undefined4 FUN_1409648d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x314);
}



// FUNCTION 1409648e0 FUN_1409648e0 body=221 status=ok
// SIG undefined FUN_1409648e0(void)

undefined4 FUN_1409648e0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(param_1 + 0xa0),1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)
             FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar3 + 0x218));
    if (plVar4 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x348))
                  (plVar2,
                   "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                   ,0x66);
      }
      FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0xa0));
      lVar3 = FUN_1409655c0(plVar4,local_res8);
      uVar1 = *(undefined4 *)(lVar3 + 0x58 + (longlong)*(int *)(param_1 + 0xa8) * 0xa0);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x350))(plVar2);
      }
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1409649c0 FUN_1409649c0 body=39 status=ok
// SIG undefined FUN_1409649c0(void)

int FUN_1409649c0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x2a8) + 0x108);
    if (iVar1 == 0) {
      return -1;
    }
    if (iVar1 != 1) {
      return iVar1 + -1;
    }
  }
  return 0;
}



// FUNCTION 1409649f0 GetAnimRootMotionTranslationScale body=9 status=ok
// SIG undefined GetAnimRootMotionTranslationScale(void)

undefined4 ACharacter::GetAnimRootMotionTranslationScale(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x318);
}



// FUNCTION 140964a00 FUN_140964a00 body=21 status=ok
// SIG undefined FUN_140964a00(void)

undefined1 FUN_140964a00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x2a8) + 0x100);
  }
  return 0;
}



// FUNCTION 140964a20 GetVehicle body=86 status=ok
// SIG undefined GetVehicle(void)

longlong UVehicleAnimInstance::GetVehicle(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142269f40();
  if (lVar2 != 0) {
    lVar3 = FUN_14096c310();
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



// FUNCTION 140964a80 GetVehicleEngineSetup body=1028 status=ok
// SIG undefined GetVehicleEngineSetup(void)

void GetVehicleEngineSetup(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong local_58;
  int local_50;
  longlong local_48;
  uint local_40;
  
  fVar13 = 0.0;
  fVar14 = 0.0;
  *(float *)(param_2 + 10) = *(float *)(param_1 + 0x7c) * 10000.0;
  *(float *)(param_2 + 0xb) = *(float *)(param_1 + 0x78) * 0.10471976;
  *(float *)((longlong)param_2 + 0x5c) = *(float *)(param_1 + 0x80) * 10000.0;
  *(float *)(param_2 + 0xc) = *(float *)(param_1 + 0x84) * 10000.0;
  *(float *)((longlong)param_2 + 100) = *(float *)(param_1 + 0x88) * 10000.0;
  uVar1 = FRuntimeFloatCurve::GetRichCurve();
  FRichCurve::GetCopyOfKeys(uVar1,&local_48);
  uVar4 = (ulonglong)local_40;
  if (0 < (int)local_40) {
    pfVar2 = (float *)(local_48 + 8);
    fVar12 = fVar14;
    do {
      fVar14 = *pfVar2;
      pfVar2 = pfVar2 + 7;
      if (fVar14 <= fVar12) {
        fVar14 = fVar12;
      }
      uVar4 = uVar4 - 1;
      fVar12 = fVar14;
    } while (uVar4 != 0);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  lVar5 = 0;
  *(float *)((longlong)param_2 + 0x54) = fVar14 * 10000.0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1);
  FRichCurve::GetCopyOfKeys(uVar1,&local_58);
  iVar3 = 8;
  if (local_50 < 9) {
    iVar3 = local_50;
  }
  lVar8 = (longlong)iVar3;
  lVar6 = lVar5;
  if (3 < lVar8) {
    iVar3 = *(int *)(param_2 + 8);
    lVar7 = (lVar8 - 4U >> 2) + 1;
    fVar12 = ABS(fVar14);
    lVar6 = lVar7 * 4;
    do {
      if (1e-08 < ABS(*(float *)(param_1 + 0x78))) {
        fVar10 = *(float *)(lVar5 + 4 + local_58) / *(float *)(param_1 + 0x78);
      }
      else {
        fVar10 = 0.0;
      }
      if (1e-08 < fVar12) {
        fVar9 = *(float *)(lVar5 + 8 + local_58) / fVar14;
        fVar11 = fVar13;
        if (0.0 <= fVar9) goto LAB_140964c1d;
      }
      else {
        fVar9 = 0.0;
LAB_140964c1d:
        fVar11 = fVar9;
        if (1.0 <= fVar9) {
          fVar11 = 1.0;
        }
      }
      if (0.0 <= fVar10) {
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      *(float *)((longlong)param_2 + (ulonglong)(uint)(iVar3 * 2) * 4) = fVar10;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) = fVar11;
      iVar3 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar3 + 1;
      if (1e-08 < ABS(*(float *)(param_1 + 0x78))) {
        fVar10 = *(float *)(lVar5 + 0x20 + local_58) / *(float *)(param_1 + 0x78);
      }
      else {
        fVar10 = 0.0;
      }
      if (1e-08 < fVar12) {
        fVar9 = *(float *)(lVar5 + 0x24 + local_58) / fVar14;
        fVar11 = fVar13;
        if (0.0 <= fVar9) goto LAB_140964c8f;
      }
      else {
        fVar9 = 0.0;
LAB_140964c8f:
        fVar11 = fVar9;
        if (1.0 <= fVar9) {
          fVar11 = 1.0;
        }
      }
      if (0.0 <= fVar10) {
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      *(float *)((longlong)param_2 + (ulonglong)(uint)((iVar3 + 1) * 2) * 4) = fVar10;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) = fVar11;
      iVar3 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar3 + 1;
      if (1e-08 < ABS(*(float *)(param_1 + 0x78))) {
        fVar10 = *(float *)(lVar5 + 0x3c + local_58) / *(float *)(param_1 + 0x78);
      }
      else {
        fVar10 = 0.0;
      }
      if (1e-08 < fVar12) {
        fVar9 = *(float *)(lVar5 + 0x40 + local_58) / fVar14;
        fVar11 = fVar13;
        if (0.0 <= fVar9) goto LAB_140964d01;
      }
      else {
        fVar9 = 0.0;
LAB_140964d01:
        fVar11 = fVar9;
        if (1.0 <= fVar9) {
          fVar11 = 1.0;
        }
      }
      if (0.0 <= fVar10) {
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      *(float *)((longlong)param_2 + (ulonglong)(uint)((iVar3 + 1) * 2) * 4) = fVar10;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) = fVar11;
      iVar3 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar3 + 1;
      if (1e-08 < ABS(*(float *)(param_1 + 0x78))) {
        fVar10 = *(float *)(lVar5 + 0x58 + local_58) / *(float *)(param_1 + 0x78);
      }
      else {
        fVar10 = 0.0;
      }
      if (1e-08 < fVar12) {
        fVar9 = *(float *)(lVar5 + 0x5c + local_58) / fVar14;
        fVar11 = fVar13;
        if (0.0 <= fVar9) goto LAB_140964d73;
      }
      else {
        fVar9 = 0.0;
LAB_140964d73:
        fVar11 = fVar9;
        if (1.0 <= fVar9) {
          fVar11 = 1.0;
        }
      }
      if (0.0 <= fVar10) {
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      lVar5 = lVar5 + 0x70;
      *(float *)((longlong)param_2 + (ulonglong)(uint)((iVar3 + 1) * 2) * 4) = fVar10;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) = fVar11;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      iVar3 = *(int *)(param_2 + 8);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (lVar6 < lVar8) {
    lVar5 = lVar6 * 0x1c;
    lVar8 = lVar8 - lVar6;
    do {
      if (1e-08 < ABS(*(float *)(param_1 + 0x78))) {
        fVar12 = *(float *)(lVar5 + 4 + local_58) / *(float *)(param_1 + 0x78);
      }
      else {
        fVar12 = 0.0;
      }
      if (1e-08 < ABS(fVar14)) {
        fVar11 = *(float *)(lVar5 + 8 + local_58) / fVar14;
        fVar10 = fVar13;
        if (0.0 <= fVar11) goto LAB_140964e08;
      }
      else {
        fVar11 = 0.0;
LAB_140964e08:
        fVar10 = fVar11;
        if (1.0 <= fVar11) {
          fVar10 = 1.0;
        }
      }
      if (0.0 <= fVar12) {
        if (1.0 <= fVar12) {
          fVar12 = 1.0;
        }
      }
      else {
        fVar12 = 0.0;
      }
      lVar5 = lVar5 + 0x1c;
      *(float *)((longlong)param_2 + (ulonglong)(uint)(*(int *)(param_2 + 8) * 2) * 4) = fVar12;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) = fVar10;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140964e90 GetVehicleManagerFromScene body=92 status=ok
// SIG undefined GetVehicleManagerFromScene(void)

undefined8 FPhysXVehicleManager::GetVehicleManagerFromScene(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146289b00,local_res10,param_1);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)(DAT_146289b00 + (longlong)local_res10[0] * 0x18);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 140964ef0 FUN_140964ef0 body=41 status=ok
// SIG undefined FUN_140964ef0(void)

longlong FUN_140964ef0(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_1 + -0x98) + 0x458))();
  *(undefined4 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 140964f20 FUN_140964f20 body=1036 status=ok
// SIG undefined FUN_140964f20(void)

float * FUN_140964f20(longlong param_1,float *param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_f8 [8];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2a0) != 0)) &&
     (plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x2a0) + 0xa0), plVar2 != (longlong *)0x0)) {
    lVar4 = *(longlong *)(lVar4 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    plVar5 = (longlong *)
             FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar4 + 0x218));
    plVar3 = (longlong *)*plVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x348))
                (plVar3,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                 ,0x10a);
    }
    FWeakObjectPtr::operator=(local_f8,*(undefined8 *)(param_1 + 0xa0));
    lVar4 = FUN_1409655c0(plVar5,local_f8);
    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_f0);
    fVar1 = *(float *)(param_1 + 0x48);
    lVar6 = (longlong)*(int *)(param_1 + 0xa8) * 0xa0;
    fVar9 = local_e4 * local_e4 - 0.5;
    fVar7 = *(float *)(lVar6 + 0x94 + lVar4);
    fVar8 = *(float *)(lVar6 + 0x9c + lVar4);
    fVar7 = fVar7 + fVar7;
    fVar15 = *(float *)(lVar6 + 0x98 + lVar4);
    fVar8 = fVar8 + fVar8;
    fVar13 = *(float *)(lVar6 + 0xc + lVar4);
    fVar15 = fVar15 + fVar15;
    fVar10 = *(float *)(lVar6 + 0x10 + lVar4);
    fVar13 = fVar13 + fVar13;
    fVar12 = *(float *)(lVar6 + 0x14 + lVar4);
    fVar10 = fVar10 + fVar10;
    fVar12 = fVar12 + fVar12;
    fVar14 = local_ec * fVar15 + local_f0 * fVar7 + local_e8 * fVar8;
    fVar11 = local_ec * fVar10 + local_f0 * fVar13 + local_e8 * fVar12;
    *param_2 = ((local_ec * fVar12 - local_e8 * fVar10) * local_e4 + fVar9 * fVar13 +
               local_f0 * fVar11) * fVar1 +
               (local_ec * fVar8 - local_e8 * fVar15) * local_e4 + fVar9 * fVar7 + local_f0 * fVar14
               + local_e0;
    param_2[1] = ((local_e8 * fVar13 - local_f0 * fVar12) * local_e4 + fVar9 * fVar10 +
                 local_ec * fVar11) * fVar1 +
                 (local_e8 * fVar7 - local_f0 * fVar8) * local_e4 + fVar9 * fVar15 +
                 local_ec * fVar14 + local_dc;
    param_2[2] = ((local_f0 * fVar10 - local_ec * fVar13) * local_e4 + fVar9 * fVar12 +
                 local_e8 * fVar11) * fVar1 +
                 (local_f0 * fVar15 - local_ec * fVar7) * local_e4 + fVar9 * fVar8 +
                 local_e8 * fVar14 + local_d8;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x350))(plVar3);
    }
    return param_2;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 140965330 FUN_140965330 body=73 status=ok
// SIG undefined FUN_140965330(void)

undefined8 * FUN_140965330(longlong *param_1,undefined8 *param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < (int)param_1[0x45])) {
    (**(code **)(*param_1 + 0x688))(param_1,param_2,(longlong)param_3 * 0x38 + param_1[0x44]);
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 140965380 FUN_140965380 body=535 status=ok
// SIG undefined FUN_140965380(void)

float * FUN_140965380(undefined8 param_1,float *param_2,longlong *param_3)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_88 [112];
  
  plVar2 = (longlong *)*param_3;
  if (plVar2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
  }
  fVar4 = *(float *)(lVar3 + 0x40);
  fVar5 = *(float *)((longlong)param_3 + 0x14);
  *param_2 = *(float *)(lVar3 + 0x3c) + *(float *)(param_3 + 2);
  fVar6 = *(float *)(lVar3 + 0x44);
  fVar1 = *(float *)(param_3 + 3);
  param_2[1] = fVar4 + fVar5;
  param_2[2] = fVar6 + fVar1;
  if (param_3[1] != 0) {
    plVar2 = (longlong *)FUN_140964290(param_1);
    if ((plVar2 != (longlong *)0x0) && (plVar2[0xe3] != 0)) {
      lVar3 = FUN_1427788c0(plVar2[0xe3],&local_c8,param_3[1]);
      fVar4 = *(float *)(plVar2 + 0x41) * *(float *)(lVar3 + 0x34);
      fVar5 = *(float *)((longlong)plVar2 + 0x20c) * *(float *)(lVar3 + 0x38);
      fVar6 = *(float *)(lVar3 + 0x30) * *(float *)((longlong)plVar2 + 0x204);
      lVar3 = (**(code **)(*plVar2 + 0x6d0))(plVar2,0,1);
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x140);
      FUN_1427788c0(plVar2[0xe3],local_88,*(undefined8 *)(lVar3 + 0x90));
      FMatrix::InverseFast(local_88,&local_c8);
      *param_2 = local_98 * 1.0 + fVar5 * local_a8 + fVar4 * local_b8 + fVar6 * local_c8 + *param_2;
      param_2[1] = fStack_94 * 1.0 + fVar5 * fStack_a4 + fVar4 * fStack_b4 + fVar6 * fStack_c4 +
                   param_2[1];
      param_2[2] = fStack_90 * 1.0 + fVar5 * fStack_a0 + fVar4 * fStack_b0 + fVar6 * fStack_c0 +
                   param_2[2];
    }
  }
  return param_2;
}



// FUNCTION 1409655a0 FUN_1409655a0 body=26 status=ok
// SIG undefined FUN_1409655a0(void)

longlong FUN_1409655a0(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0xa8) * 0x38 +
         *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x220);
}



// FUNCTION 1409655c0 FUN_1409655c0 body=133 status=ok
// SIG undefined FUN_1409655c0(void)

undefined8 FUN_1409655c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  lVar4 = lVar1;
  while( true ) {
    if (lVar4 == lVar1 + (longlong)iVar3 * 8) {
      return 0;
    }
    cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar4,param_2);
    if (cVar2 != '\0') break;
    lVar4 = lVar4 + 8;
  }
  iVar3 = (int)(lVar4 - lVar1 >> 3);
  if (iVar3 == -1) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 0x10);
}



// FUNCTION 140965660 FUN_140965660 body=359 status=ok
// SIG undefined FUN_140965660(void)

void FUN_140965660(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res18 [4];
  undefined1 local_18 [16];
  
  plVar6 = (longlong *)0x0;
  *(longlong *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  lVar2 = *(longlong *)(param_2 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_2);
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146289b00,local_res18,*(undefined8 *)(lVar2 + 0x218));
  plVar5 = plVar6;
  if (local_res18[0] != -1) {
    plVar5 = (longlong *)(DAT_146289b00 + (longlong)local_res18[0] * 0x18);
  }
  plVar3 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = plVar6;
  }
  if (plVar3 != (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
  }
  plVar6 = (longlong *)*plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x348))
              (plVar6,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
               ,0x87);
  }
  uVar1 = physx::PxVehicleWheelsSimData::getWheelShapeMapping
                    (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2a0) + 0x10,
                     *(undefined4 *)(param_1 + 0xa8));
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2a0) + 0xa0);
  (**(code **)(*plVar5 + 0xd0))(plVar5,param_1 + 0xf8,1,uVar1);
  *(undefined4 **)(*(longlong *)(param_1 + 0xf8) + 0x10) = (undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x100) = 9;
  *(longlong *)(param_1 + 0x108) = param_1;
  puVar4 = (undefined8 *)FUN_140964380(param_1,local_18);
  *(undefined8 *)(param_1 + 0xcc) = *puVar4;
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 0xd8) = *puVar4;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(puVar4 + 1);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x350))(plVar6);
  }
  return;
}



// FUNCTION 1409657d0 FUN_1409657d0 body=275 status=ok
// SIG undefined FUN_1409657d0(void)

void FUN_1409657d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x150);
  plVar1 = (longlong *)(param_1 + 0x140);
  piVar8 = (int *)0x0;
  iVar2 = *(int *)(lVar3 + 0x6d0);
  lVar7 = (longlong)iVar2;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,iVar2);
  }
  piVar6 = piVar8;
  piVar9 = piVar8;
  if (0 < iVar2) {
    do {
      iVar2 = *(int *)(param_1 + 0x148);
      *(int *)(param_1 + 0x148) = iVar2 + 1;
      if (*(int *)(param_1 + 0x14c) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar1,iVar2);
      }
      piVar4 = (int *)((longlong)iVar2 * 0x20 + *plVar1);
      piVar5 = piVar8;
      if (piVar4 != (int *)0x0) {
        piVar4[0] = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar4[6] = 0;
        piVar4[7] = 0;
        piVar4[3] = 0;
        piVar4[4] = -1;
        *(undefined1 *)(piVar4 + 5) = 0;
        piVar4[6] = -1;
        piVar5 = piVar4;
      }
      *piVar5 = (int)piVar6;
      *(undefined8 *)(piVar5 + 2) = *(undefined8 *)((longlong)piVar9 + *(longlong *)(lVar3 + 0x6c8))
      ;
      FUN_1422f3ff0(piVar5 + 2,param_2,0);
      lVar7 = lVar7 + -1;
      piVar6 = (int *)(ulonglong)((int)piVar6 + 1);
      piVar9 = piVar9 + 8;
    } while (lVar7 != 0);
  }
  local_res8[0] = 0;
  FUN_14095cb20(*plVar1,(longlong)*(int *)(param_1 + 0x148),0,local_res8);
  return;
}



// FUNCTION 1409658f0 FUN_1409658f0 body=61 status=ok
// SIG undefined FUN_1409658f0(void)

undefined8 * FUN_1409658f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14416a138;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140965940 InverseFast body=1746 status=ok
// SIG undefined InverseFast(void)

float * FMatrix::InverseFast(float *param_1,float *param_2)

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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  fVar1 = param_1[2];
  fVar2 = param_1[10];
  fVar3 = param_1[0xe];
  fVar4 = param_1[0xf];
  fVar5 = param_1[6];
  fVar6 = param_1[3];
  fVar7 = param_1[0xb];
  fVar8 = param_1[7];
  fVar39 = fVar2 * fVar4 - fVar7 * fVar3;
  fVar40 = fVar5 * fVar4 - fVar8 * fVar3;
  fVar41 = fVar5 * fVar7 - fVar8 * fVar2;
  fVar31 = fVar1 * fVar4 - fVar6 * fVar3;
  fVar3 = param_1[0xd];
  fVar36 = fVar1 * fVar7 - fVar6 * fVar2;
  fVar2 = param_1[9];
  fVar33 = fVar1 * fVar8 - fVar6 * fVar5;
  fVar44 = (param_1[5] * fVar39 - fVar2 * fVar40) + fVar3 * fVar41;
  fVar9 = param_1[1];
  fVar45 = (fVar9 * fVar39 - fVar2 * fVar31) + fVar3 * fVar36;
  fVar46 = (fVar9 * fVar40 - param_1[5] * fVar31) + fVar3 * fVar33;
  fVar3 = param_1[0xc];
  fVar10 = *param_1;
  fVar47 = (fVar9 * fVar41 - param_1[5] * fVar36) + fVar2 * fVar33;
  fVar48 = 1.0 / (((fVar10 * fVar44 - param_1[4] * fVar45) + param_1[8] * fVar46) - fVar3 * fVar47);
  fVar2 = param_1[4];
  fVar9 = *param_1;
  fVar11 = param_1[8];
  fVar12 = param_1[4];
  fVar13 = param_1[8];
  fVar14 = *param_1;
  fVar15 = param_1[8];
  fVar16 = param_1[0xd];
  fVar29 = param_1[9] * fVar4 - fVar16 * fVar7;
  fVar43 = param_1[1] * fVar7;
  fVar17 = param_1[0xc];
  fVar18 = param_1[5];
  fVar49 = param_1[5] * fVar4 - fVar16 * fVar8;
  fVar37 = param_1[5] * fVar7 - param_1[9] * fVar8;
  fVar7 = param_1[0xc];
  fVar19 = param_1[9];
  fVar20 = param_1[1];
  fVar34 = param_1[1] * fVar4 - fVar16 * fVar6;
  fVar4 = *param_1;
  fVar16 = param_1[0xd];
  fVar42 = param_1[9] * param_1[0xe] - fVar16 * param_1[10];
  fVar32 = param_1[9] * param_1[6];
  fVar21 = param_1[10];
  fVar35 = fVar18 * param_1[0xe] - fVar16 * param_1[6];
  fVar22 = param_1[4];
  fVar23 = param_1[8];
  fVar38 = param_1[1] * param_1[0xe] - fVar16 * fVar1;
  fVar30 = param_1[1] * param_1[10] - param_1[9] * fVar1;
  fVar1 = param_1[8];
  fVar16 = param_1[4];
  fVar24 = param_1[4];
  fVar25 = param_1[1];
  fVar26 = param_1[5];
  fVar27 = param_1[2];
  fVar28 = param_1[8];
  *param_2 = fVar44 * fVar48;
  param_2[1] = -(fVar45 * fVar48);
  param_2[2] = fVar46 * fVar48;
  param_2[3] = -(fVar47 * fVar48);
  param_2[4] = -(((fVar2 * fVar39 - fVar11 * fVar40) + fVar3 * fVar41) * fVar48);
  param_2[5] = ((fVar10 * fVar39 - fVar13 * fVar31) + fVar3 * fVar36) * fVar48;
  param_2[6] = -(((fVar9 * fVar40 - fVar12 * fVar31) + fVar3 * fVar33) * fVar48);
  param_2[7] = ((fVar14 * fVar41 - fVar12 * fVar36) + fVar15 * fVar33) * fVar48;
  param_2[8] = ((fVar29 * fVar12 - fVar49 * fVar15) + fVar37 * fVar7) * fVar48;
  param_2[9] = ((fVar34 * fVar15 - fVar29 * fVar14) + (fVar19 * fVar6 - fVar43) * fVar17) * fVar48;
  param_2[10] = ((fVar49 * fVar4 - fVar34 * fVar12) + (fVar20 * fVar8 - fVar18 * fVar6) * fVar17) *
                fVar48;
  param_2[0xb] = (((fVar43 - fVar19 * fVar6) * fVar12 - fVar37 * fVar4) +
                 (fVar18 * fVar6 - fVar20 * fVar8) * fVar15) * fVar48;
  param_2[0xc] = ((fVar35 * fVar23 - fVar42 * fVar22) + (fVar32 - fVar18 * fVar21) * fVar17) *
                 fVar48;
  param_2[0xd] = ((fVar42 * fVar4 - fVar38 * fVar1) + fVar30 * fVar17) * fVar48;
  param_2[0xe] = ((fVar38 * fVar16 - fVar35 * fVar4) + (fVar26 * fVar27 - fVar25 * fVar5) * fVar17)
                 * fVar48;
  param_2[0xf] = (((fVar18 * fVar21 - fVar32) * fVar4 - fVar30 * fVar24) +
                 (fVar25 * fVar5 - fVar26 * fVar27) * fVar28) * fVar48;
  return param_2;
}



// FUNCTION 140966020 FUN_140966020 body=41 status=ok
// SIG undefined FUN_140966020(void)

undefined1 FUN_140966020(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x420) == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x388);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140966050 FUN_140966050 body=206 status=ok
// SIG undefined FUN_140966050(void)

undefined1 FUN_140966050(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(param_1 + 0xa0),1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)
             FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar3 + 0x218));
    if (plVar4 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x348))
                  (plVar2,
                   "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                   ,0x73);
      }
      FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0xa0));
      lVar3 = FUN_1409655c0(plVar4,local_res8);
      uVar1 = *(undefined1 *)(lVar3 + 0x1c + (longlong)*(int *)(param_1 + 0xa8) * 0xa0);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x350))(plVar2);
      }
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 140966120 FUN_140966120 body=109 status=ok
// SIG undefined FUN_140966120(void)

undefined1 FUN_140966120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x140);
  lVar3 = (longlong)*(int *)(param_1 + 0x148) * 0x20 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    cVar1 = FBoneReference::IsValidToEvaluate(lVar2 + 8,param_3);
    if (cVar1 == '\x01') break;
    lVar2 = lVar2 + 0x20;
  }
  return 1;
}



// FUNCTION 140966190 FUN_140966190 body=74 status=ok
// SIG undefined FUN_140966190(void)

void FUN_140966190(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_142269f40();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14096cb40();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_140968bf0(param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 1409661e0 FUN_1409661e0 body=750 status=ok
// SIG undefined FUN_1409661e0(void)

void FUN_1409661e0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  byte *pbVar7;
  longlong *plVar8;
  undefined8 local_res8;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_1423437b0();
  plVar1 = (longlong *)param_1[0x30];
  if (plVar1 != (longlong *)0x0) {
    local_res8 = 0;
    lVar4 = (**(code **)(*plVar1 + 0x6d0))(plVar1,0,1);
    if (lVar4 != 0) {
      FUN_1426a8e30(lVar4,0);
    }
  }
  lVar4 = param_1[0x24];
  *(undefined4 *)(param_1 + 0x53) = DAT_146863cd0;
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  cVar3 = UWorld::IsGameWorld(lVar4);
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x218);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FPhysXVehicleManager::GetVehicleManagerFromScene(lVar4);
  if (lVar5 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x5f0))(param_1);
  (**(code **)(*param_1 + 0x5c0))(param_1);
  if (param_1[0x54] == 0) {
    return;
  }
  plVar6 = (longlong *)FPhysXVehicleManager::GetVehicleManagerFromScene(lVar4);
  (**(code **)(*param_1 + 0x678))(param_1);
  plVar1 = (longlong *)*plVar6;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x358))
              (plVar1,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\WheeledVehicleMovementComponent.cpp"
               ,0x3dc);
  }
  pbVar7 = (byte *)(**(code **)(**(longlong **)(param_1[0x54] + 0xa0) + 0x178))
                             (*(longlong **)(param_1[0x54] + 0xa0),&local_res8);
  if ((*pbVar7 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1[0x54] + 0xa0) + 0x240))();
  }
  lVar4 = FUN_140964290(param_1);
  if (lVar4 == 0) goto LAB_140966490;
  lVar5 = FUN_142a07000();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140966490;
  uStack_20 = 0;
  local_28 = FUN_14234b040;
  local_38 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar8 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar5;
    *plVar8 = (longlong)&PTR_FUN_143f77bd0;
  }
  plVar8 = (longlong *)FUN_1423b84e0(lVar4,&local_res8,&local_38);
  param_1[0x6e] = *plVar8;
  if (local_30 == 0) {
LAB_140966431:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140966431;
  }
  lVar4 = FUN_1423ac7e0(lVar4);
  if (lVar4 != 0) {
    lVar5 = FUN_14096d210();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140968bf0(lVar4,param_1);
    }
  }
LAB_140966490:
  FWeakObjectPtr::operator=(&local_res8,param_1);
  FUN_14095fcb0(plVar6,&local_res8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))(plVar1);
  }
  return;
}



// FUNCTION 1409664d0 FUN_1409664d0 body=255 status=ok
// SIG undefined FUN_1409664d0(void)

void FUN_1409664d0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  UActorComponent::OnDestroyPhysicsState();
  if (param_1[0x54] != 0) {
    (**(code **)(*param_1 + 0x680))(param_1);
    lVar2 = param_1[0x24];
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    uVar3 = FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar2 + 0x218));
    FWeakObjectPtr::operator=(local_res8,param_1);
    FUN_140967a00(uVar3,local_res8);
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    if (param_1[0x6e] != 0) {
      lVar2 = FUN_140964290(param_1);
      if (lVar2 != 0) {
        lVar4 = FUN_142a07000();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_1423bfe60(lVar2,param_1 + 0x6e);
        }
      }
    }
    if (param_1[0x2f] != 0) {
      FUN_14234b040();
      return;
    }
  }
  return;
}



// FUNCTION 1409665d0 FUN_1409665d0 body=616 status=ok
// SIG undefined FUN_1409665d0(void)

void FUN_1409665d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  short sVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong local_res8;
  longlong local_res18;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  longlong *plVar10;
  
  plVar4 = (longlong *)param_1[0x30];
  if (plVar4 != (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    local_res8 = 0;
    lVar2 = (**(code **)(*plVar4 + 0x6d0))(plVar4,0,1);
    if (lVar2 == param_2) {
      FUN_1426d3dd0(&local_a8);
      FUN_1426d3dd0(&local_88);
      (**(code **)(*param_1 + 0x6a8))(param_1,&local_a8,&local_88);
      puVar3 = (undefined4 *)(**(code **)(*(longlong *)param_1[0x30] + 0x4d0))();
      local_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      uStack_5c = puVar3[3];
      local_58 = puVar3[4];
      uStack_54 = puVar3[5];
      uStack_50 = puVar3[6];
      uStack_4c = puVar3[7];
      puVar3 = (undefined4 *)FUN_1426db3d0(local_48,&local_68,&local_a8);
      local_a8 = *puVar3;
      uStack_a4 = puVar3[1];
      uStack_a0 = puVar3[2];
      uStack_9c = puVar3[3];
      local_98 = puVar3[4];
      uStack_94 = puVar3[5];
      uStack_90 = puVar3[6];
      uStack_8c = puVar3[7];
      puVar3 = (undefined4 *)FUN_1426db3d0(local_48,&local_68,&local_88);
      local_88 = *puVar3;
      uStack_84 = puVar3[1];
      uStack_80 = puVar3[2];
      uStack_7c = puVar3[3];
      local_78 = puVar3[4];
      uStack_74 = puVar3[5];
      uStack_70 = puVar3[6];
      uStack_6c = puVar3[7];
      FUN_1426db060(&local_a8,&local_68);
      local_res8 = 0;
      lVar2 = (**(code **)(*(longlong *)param_1[0x30] + 0x6d0))((longlong *)param_1[0x30],0,1);
      plVar4 = *(longlong **)(lVar2 + 0x110);
      plVar9 = plVar4;
      if (plVar4 == (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar2 + 0x118);
      }
      if (plVar9 != (longlong *)0x0) {
        if (plVar9 == plVar4) {
          sVar5 = *(short *)(lVar2 + 6);
        }
        else {
          sVar5 = *(short *)(lVar2 + 8);
        }
        plVar4 = (longlong *)FUN_1426e2550((int)sVar5);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x358))
                    (plVar4,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0x136);
        }
        plVar7 = plVar10;
        if ((short)plVar9[1] == 6) {
          plVar7 = plVar9;
        }
        if ((plVar7 != (longlong *)0x0) && (lVar2 = param_1[0x45], 0 < (int)lVar2)) {
          do {
            if (param_1[0x54] == 0) {
              local_res8 = 0;
              iVar1 = (**(code **)(*plVar7 + 200))(plVar7);
              (**(code **)(*plVar7 + 0xd0))
                        (plVar7,&local_res8,1,iVar1 + ((int)plVar10 - (int)param_1[0x45]) * 2);
              lVar6 = local_res8;
LAB_1409667d8:
              if (lVar6 != 0) {
                FUN_140968ab0(param_1[0x30],lVar6,&local_a8,&local_88);
              }
            }
            else {
              iVar1 = physx::PxVehicleWheelsSimData::getWheelShapeMapping
                                (param_1[0x54] + 0x10,plVar10);
              if (iVar1 != -1) {
                local_res18 = 0;
                (**(code **)(*plVar7 + 0xd0))(plVar7,&local_res18,1,iVar1);
                lVar6 = local_res18;
                goto LAB_1409667d8;
              }
            }
            uVar8 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar8;
          } while ((int)uVar8 < (int)lVar2);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x360))(plVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 140966840 FUN_140966840 body=405 status=ok
// SIG undefined FUN_140966840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140966840(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 *param_14,undefined4 *param_15,undefined4 *param_16
                  )

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_9c = param_6;
  local_94 = param_8;
  local_90 = param_9;
  local_98 = param_7;
  local_84 = param_12;
  local_88 = param_10;
  local_8c = param_11;
  local_80 = param_13;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = param_2;
  local_a4 = param_3;
  local_a0 = param_4;
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x5b0))
            (*(longlong **)(param_1 + 0xa0),param_1,&local_a8,&local_b8);
  *param_14 = (undefined4)local_b8;
  *param_15 = local_b8._4_4_;
  *param_16 = local_b0;
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xb4) = param_4;
  *(undefined4 *)(param_1 + 0xb8) = param_10;
  *(undefined4 *)(param_1 + 0xbc) = param_11;
  *(undefined4 *)(param_1 + 0xc0) = *param_14;
  *(undefined4 *)(param_1 + 0xc4) = *param_15;
  *(undefined4 *)(param_1 + 200) = *param_16;
  return;
}



// FUNCTION 1409669e0 FUN_1409669e0 body=48 status=ok
// SIG undefined FUN_1409669e0(void)

void FUN_1409669e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if ((param_3 == 0) && (lVar1 = operator_new(0x108), lVar1 != 0)) {
    FUN_14095d090(lVar1,param_2,0);
  }
  return;
}



// FUNCTION 140966a10 FUN_140966a10 body=312 status=ok
// SIG undefined FUN_140966a10(void)

void FUN_140966a10(undefined8 param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((param_3 == 0) &&
     (lVar4 = FPhysXVehicleManager::GetVehicleManagerFromScene(param_2), lVar4 != 0)) {
    TBaseMulticastDelegate<void>::Remove(param_2 + 8,*(undefined8 *)(lVar4 + 0x48));
    TBaseMulticastDelegate<void>::Remove(param_2 + 0x20,*(undefined8 *)(lVar4 + 0x50));
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(&DAT_146289b00,param_2);
    iVar3 = *(int *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x98) = 0;
    while (0 < iVar3) {
      lVar2 = *(longlong *)(lVar4 + 8) + (longlong)*(int *)(lVar4 + 0x10) * 8;
      local_res20 = *(undefined4 *)(lVar2 + -8);
      local_res24 = *(undefined4 *)(lVar2 + -4);
      FUN_140967a00(lVar4,&local_res20);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (*(longlong *)(lVar4 + 0x100) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar4 + 0x100) + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    FTickFunction::~FTickFunction(lVar4 + 0xa0);
    FUN_143978010(*(undefined8 *)(lVar4 + 0x90));
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x68));
    FUN_14095e2d0(lVar4 + 0x58);
    if (*(longlong *)(lVar4 + 0x38) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar4 + 0x28) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar4 + 0x18) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar4 + 8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar4,0x108);
  }
  return;
}



// FUNCTION 140966b50 FUN_140966b50 body=549 status=ok
// SIG undefined FUN_140966b50(void)

void FUN_140966b50(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong local_58;
  int local_50;
  longlong *local_48;
  longlong local_40;
  uint local_38;
  uint local_34;
  
  uVar3 = FUN_14096cb40();
  FObjectIterator::FObjectIterator(&local_58,uVar3,0,0,0);
  plVar9 = local_48;
  iVar8 = local_50;
  if (local_48 == (longlong *)0x0) {
    return;
  }
  do {
    if ((plVar9 == (longlong *)0x0) || (lVar6 = *plVar9, lVar6 == 0)) {
LAB_140966c0b:
      lVar6 = 0;
    }
    else {
      lVar4 = FUN_14096cb40();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140966c0b;
    }
    lVar4 = *(longlong *)(lVar6 + 0x178);
    if (lVar4 != 0) {
      lVar5 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar4 = FUN_1423af5a0(lVar4), lVar4 == param_2)) {
        FUN_14234b040(lVar6);
      }
    }
LAB_140966c70:
    do {
      do {
        iVar8 = iVar8 + 1;
        if (*(int *)(local_58 + 0x24) <= iVar8) {
          return;
        }
        while( true ) {
          uVar7 = iVar8 >> 0x1f & 0xffff;
          uVar2 = iVar8 + uVar7;
          lVar5 = (longlong)(int)((uVar2 & 0xffff) - uVar7);
          lVar6 = *(longlong *)(*(longlong *)(local_58 + 0x10) + (longlong)((int)uVar2 >> 0x10) * 8)
          ;
          lVar4 = *(longlong *)(lVar6 + lVar5 * 0x18);
          plVar9 = (longlong *)(lVar6 + lVar5 * 0x18);
          if (lVar4 != 0) break;
          iVar8 = iVar8 + 1;
          if (*(int *)(local_58 + 0x24) <= iVar8) {
            return;
          }
        }
      } while ((*(uint *)(lVar4 + 8) & local_38) != 0);
      lVar6 = UObject::GetPrivateStaticClass();
      if (local_40 != lVar6) {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(local_40 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(local_40 + 0x90) * 8) != local_40 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140966c70;
      }
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < (int)DAT_1469e91c4) {
        uVar7 = uVar2 & 0xffff;
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 0xffff;
          uVar7 = uVar7 - 0x10000;
        }
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)uVar7 * 0x18;
      }
      else {
        lVar6 = 0;
      }
    } while ((*(uint *)(lVar6 + 8) & local_34) != 0);
  } while( true );
}



// FUNCTION 140966d80 PostInitProperties body=255 status=ok
// SIG undefined PostInitProperties(void)

void UTireConfig::PostInitProperties(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FWeakObjectPtr::operator=(&local_res8,0);
    lVar2 = DAT_146863d38;
    lVar6 = DAT_146863d38 + (longlong)DAT_146863d40 * 8;
    for (lVar5 = DAT_146863d38; lVar5 != lVar6; lVar5 = lVar5 + 8) {
      cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res8);
      if (cVar3 != '\0') {
        iVar4 = (int)(lVar5 - lVar2 >> 3);
        if (iVar4 != -1) {
          FWeakObjectPtr::operator=(DAT_146863d38 + (longlong)iVar4 * 8,param_1);
          goto LAB_140966e35;
        }
        break;
      }
    }
    FWeakObjectPtr::operator=(&local_res8,param_1);
    iVar4 = DAT_146863d40;
    lVar6 = (longlong)DAT_146863d40;
    DAT_146863d40 = DAT_146863d40 + 1;
    if (DAT_146863d44 < DAT_146863d40) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146863d38,iVar4);
    }
    puVar1 = (undefined4 *)(DAT_146863d38 + lVar6 * 8);
    *puVar1 = local_res8;
    puVar1[1] = local_resc;
LAB_140966e35:
    *(int *)(param_1 + 0x48) = iVar4;
    DAT_146863cd4 = 1;
  }
  FUN_1417931d0(param_1);
  return;
}



// FUNCTION 140966e80 FUN_140966e80 body=74 status=ok
// SIG undefined FUN_140966e80(void)

void FUN_140966e80(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x2b0) & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar1 + 0x158) != 0) {
      UAvoidanceManager::RegisterMovementComponent
                (*(longlong *)(lVar1 + 0x158),param_1,*(undefined4 *)(param_1 + 0x2d8));
      return;
    }
  }
  return;
}



// FUNCTION 140966ed0 FUN_140966ed0 body=459 status=ok
// SIG undefined FUN_140966ed0(void)

void FUN_140966ed0(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  short sVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_res8;
  
  if (((param_1[0x54] != 0) && (param_1[0x2f] != 0)) &&
     (lVar3 = *(longlong *)(param_1[0x2f] + 0x118), lVar3 != 0)) {
    lVar2 = FUN_1429d7ab0();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x630))(param_1,param_2);
    }
  }
  if ((int)param_1[0x53] != DAT_146863cd0) {
    FUN_14234b040(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x444) != '\0') {
    plVar7 = (longlong *)0x0;
    local_res8 = 0;
    lVar3 = (**(code **)(*(longlong *)param_1[0x30] + 0x6d0))((longlong *)param_1[0x30],0,1);
    plVar4 = *(longlong **)(lVar3 + 0x110);
    plVar8 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar3 + 0x118);
    }
    if (plVar8 != (longlong *)0x0) {
      if (plVar8 == plVar4) {
        sVar5 = *(short *)(lVar3 + 6);
      }
      else {
        sVar5 = *(short *)(lVar3 + 8);
      }
      plVar4 = (longlong *)FUN_1426e2550((int)sVar5);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x358))
                  (plVar4,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      plVar6 = plVar7;
      if ((short)plVar8[1] == 6) {
        plVar6 = plVar8;
      }
      if (plVar6 != (longlong *)0x0) {
        lVar3 = param_1[0x45];
        (**(code **)(*plVar6 + 200))();
        plVar8 = plVar7;
        if (0 < (int)lVar3) {
          do {
            local_res8 = *(longlong *)((longlong)plVar7 + param_1[0x44] + 0x20);
            if ((local_res8 != 0) &&
               (plVar6 = *(longlong **)(*(longlong *)(param_1[0x51] + (longlong)plVar8 * 8) + 0xf8),
               plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 0xb8))(plVar6,&local_res8,1);
            }
            plVar8 = (longlong *)((longlong)plVar8 + 1);
            plVar7 = plVar7 + 7;
          } while ((longlong)plVar8 < (longlong)(int)lVar3);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x360))(plVar4);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x444) = 0;
  }
  return;
}



// FUNCTION 1409670a0 FUN_1409670a0 body=1090 status=ok
// SIG undefined FUN_1409670a0(void)

void FUN_1409670a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 local_res20 [8];
  undefined1 local_c8 [144];
  
  FUN_14227b130();
  lVar1 = *(longlong *)(param_2 + 0xb30);
  if ((lVar1 != 0) && (uVar7 = 0, uVar8 = uVar7, uVar10 = uVar7, 0 < *(int *)(param_1 + 0x6d0))) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x6c8);
      if ((-1 < (longlong)uVar8) &&
         (((int)uVar10 < *(int *)(lVar1 + 0x290) &&
          (lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x288) + uVar8 * 8), lVar3 != 0)))) {
        lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(lVar3 + 0xa0),1);
        if ((lVar5 == 0) ||
           (plVar6 = (longlong *)
                     FPhysXVehicleManager::GetVehicleManagerFromScene
                               (*(undefined8 *)(lVar5 + 0x218)), plVar6 == (longlong *)0x0)) {
          fVar11 = 0.0;
        }
        else {
          plVar6 = (longlong *)*plVar6;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x348))
                      (plVar6,
                       "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                       ,0x57);
          }
          fVar11 = (float)physx::PxVehicleWheelsDynData::getWheelRotationAngle
                                    (*(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0x2a0) + 0x70,
                                     *(undefined4 *)(lVar3 + 0xa8));
          fVar11 = fVar11 * -57.295776;
          _isnan((double)fVar11);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x350))(plVar6);
          }
        }
        fVar12 = (float)(int)(fVar11 * 0.0027777778) * 360.0;
        if (ABS(fVar11) < ABS(fVar12)) {
          fVar12 = fVar11;
        }
        fVar11 = fVar11 - fVar12;
        if (fVar11 < 0.0) {
          fVar11 = fVar11 + 360.0;
        }
        if (180.0 < fVar11) {
          fVar11 = fVar11 - 360.0;
        }
        *(float *)(lVar2 + 8 + uVar7) = fVar11;
        lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(lVar3 + 0xa0),1);
        if ((lVar5 == 0) ||
           (plVar6 = (longlong *)
                     FPhysXVehicleManager::GetVehicleManagerFromScene
                               (*(undefined8 *)(lVar5 + 0x218)), plVar6 == (longlong *)0x0)) {
          fVar11 = 0.0;
        }
        else {
          plVar4 = (longlong *)*plVar6;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x348))
                      (plVar4,
                       "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                       ,0x4b);
          }
          FWeakObjectPtr::operator=(local_res20,*(undefined8 *)(lVar3 + 0xa0));
          lVar5 = FUN_1409655c0(plVar6,local_res20);
          fVar11 = *(float *)(lVar5 + 0x80 + (longlong)*(int *)(lVar3 + 0xa8) * 0xa0) * 57.295776;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x350))(plVar4);
          }
        }
        fVar12 = (float)(int)(fVar11 * 0.0027777778) * 360.0;
        if (ABS(fVar11) < ABS(fVar12)) {
          fVar12 = fVar11;
        }
        fVar11 = fVar11 - fVar12;
        if (fVar11 < 0.0) {
          fVar11 = fVar11 + 360.0;
        }
        if (180.0 < fVar11) {
          fVar11 = fVar11 - 360.0;
        }
        *(float *)(lVar2 + 0xc + uVar7) = fVar11;
        *(undefined8 *)(lVar2 + 0x10 + uVar7) = 0;
        *(undefined4 *)(lVar2 + 0x18 + uVar7) = 0;
        lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(lVar3 + 0xa0),1);
        if ((lVar5 == 0) ||
           (plVar6 = (longlong *)
                     FPhysXVehicleManager::GetVehicleManagerFromScene
                               (*(undefined8 *)(lVar5 + 0x218)), plVar6 == (longlong *)0x0)) {
          uVar13 = 0;
        }
        else {
          plVar4 = (longlong *)*plVar6;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x348))
                      (plVar4,
                       "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                       ,0x66);
          }
          FWeakObjectPtr::operator=(local_c8,*(undefined8 *)(lVar3 + 0xa0));
          lVar5 = FUN_1409655c0(plVar6,local_c8);
          uVar13 = *(undefined4 *)(lVar5 + 0x58 + (longlong)*(int *)(lVar3 + 0xa8) * 0xa0);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x350))(plVar4);
          }
        }
        *(undefined4 *)(lVar2 + 0x1c + uVar7) = uVar13;
      }
      uVar9 = (int)uVar10 + 1;
      uVar7 = uVar7 + 0x20;
      uVar8 = uVar8 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x6d0));
  }
  return;
}



// FUNCTION 1409674f0 PxVehicleComputeTireForceDefault body=813 status=ok
// SIG undefined PxVehicleComputeTireForceDefault(void)

void PxVehicleComputeTireForceDefault
               (float *param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,float param_7,undefined8 param_8,float param_9,float param_10,
               float param_11,float param_12,float param_13,float *param_14,float *param_15,
               float *param_16,float *param_17)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_14 = 0.0;
  *param_15 = 0.0;
  *param_16 = 0.0;
  *param_17 = 0.0;
  if (((1e-08 < ABS(param_4)) || (1e-08 < ABS(param_3))) || (1e-08 < ABS(param_5))) {
    fVar2 = (param_10 * 3.0) / *param_1;
    fVar6 = 1.0;
    fVar8 = (fVar2 - fVar2 * 0.33333 * fVar2) + fVar2 * 0.037037 * fVar2 * fVar2;
    fVar2 = param_1[2];
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    fVar8 = fVar8 * param_9 * param_1[1];
    fVar1 = _guard_xfg_dispatch_icall_nop(param_4 - (param_12 * param_1[3] * param_5) / fVar8);
    fVar4 = SQRT(fVar1 * fVar8 * fVar8 * fVar1 +
                 param_12 * fVar2 * param_3 * param_12 * fVar2 * param_3) *
            (1.0 / (param_2 * param_11));
    fVar3 = fVar4 * 0.33333 * fVar4;
    fVar2 = fVar4 * 0.037037 * fVar4 * fVar4;
    fVar7 = (fVar4 - fVar3) + fVar2;
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar4 <= 6.2831855) {
      fVar8 = param_13 * param_1[0xb] * fVar8;
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar4 * 0.5);
      fVar6 = ((fVar8 + 1.0) - fVar6 * (1.0 - fVar8)) * 0.5;
    }
    fVar5 = fVar6 * fVar1;
    fVar6 = (param_2 * param_11) / SQRT(fVar5 * fVar6 * fVar1 + param_3 * param_3);
    fVar8 = fVar7 * param_3 * fVar6;
    *param_14 = -(fVar8 * param_7);
    *param_15 = fVar8;
    *param_16 = -(fVar5 * fVar7 * fVar6);
    *param_17 = fVar5 * (((fVar4 - fVar4 * fVar4) + fVar3 * fVar4) - fVar2 * fVar4) * fVar6;
  }
  return;
}



// FUNCTION 140967820 FUN_140967820 body=258 status=ok
// SIG undefined FUN_140967820(void)

void FUN_140967820(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x48 + (longlong)param_2 * 0x58);
    iVar3 = param_3;
    do {
      if ((longlong *)plVar2[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar2[1] + 0x40))();
      }
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x40))();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(param_2 + param_3) * 0x58 + *param_1),(longlong)iVar1 * 0x58);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}


